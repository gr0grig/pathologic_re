include ui_events.sci
include ui_std.sci

const float fReplicColR = 0.804;
const float fReplicColG = 0.804;
const float fReplicColB = 0.804;

const float fAnswerColR = 0.698;
const float fAnswerColG = 0.659;
const float fAnswerColB = 0.647;
const float fAnswerHColR = 1.0;
const float fAnswerHColG = 1.0;
const float fAnswerHColB = 1.0;

const int c_iReplicSpacing = 10;
const int c_iAnswerSpacing = 5;
const int c_iAnswerMargin = 15;
const int c_iClipMargin = 5;

const string c_strReplicFont = "default";
const string c_strAnswerFont = "default";

string GetReplic(void) {
	string strReplic;
	@GetReplic(strReplic);
	if (strReplic == "")
		strReplic = "Error: missing replic";
	return strReplic;
}

string GetAnswer(int iIndex) {
	string strAnswer;
	@GetAnswer(iIndex, strAnswer);
	if (strAnswer == "") 
		strAnswer = "ERROR: missing answer";
	return strAnswer;
}

int GetAnswerID(int iIndex) {
	int iID;
	string strAnswer;
	@GetAnswer(iIndex, strAnswer, iID);
	return iID;
}

int GetAnswerReplyID(int iIndex) {
	int iID, iReplyID;
	string strAnswer;
	@GetAnswer(iIndex, strAnswer, iID, iReplyID);
	return iReplyID;
}

maintask UI_DialogText
{
	var int iScrollPos, iScrollMax;
	var int iReplicHeight;
	var int iHAnswer, iHAnswerID;
	var int iWndXSize, iWndYSize;
	
	void init(void) {
		iHAnswer = -1;
		iScrollPos = 0;
		
		@GetWindowSize(iWndXSize, iWndYSize);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		UpdateScroll();
		@ProcessEvents();
	}
		
	void UpdateScroll() {
		iScrollMax = GetTextHeight();
		iScrollMax -= iWndYSize;
		if (iScrollMax < 0)
			iScrollMax = 0;

		if ((-iScrollPos) > iScrollMax)
			iScrollPos = -iScrollMax;
		else if (iScrollPos > 0)
			iScrollPos = 0;
			
		if (iScrollMax == 0) {
			@SendMessage(c_iScrollDisabled, "p_scrollbar");
		}
		else {
			@SendMessage(-iScrollPos * 100 / iScrollMax, "p_scrollbar");
		}
	}
	
	int GetTextHeight()
	{
		int iHeight, iRet;
		string strReplic = GetReplic();
		@GetTextHeightInWidth(iHeight, c_strReplicFont, iWndXSize - c_iClipMargin, strReplic);
		iRet = iHeight;
		iRet += c_iReplicSpacing;
		
		int iAnswers, iAnswerHeight;
		@GetAnswerCount(iAnswers);
		for (int i = 0; i < iAnswers; ++i) {
			if (i == 0)
				iRet += c_iReplicSpacing;
			else
				iRet +=c_iAnswerSpacing;
				
			string strAnswer = GetAnswer(i);
			@GetTextHeightInWidth(iHeight, c_strReplicFont, iWndXSize - c_iAnswerMargin - c_iClipMargin, strAnswer);
			iRet += iHeight;
		}
		return iRet;
	}	
	
	void OnDraw() {
		UpdateScroll();
		int y = iScrollPos;
		string strReplic = GetReplic();
		
		@PrintInWidth(iReplicHeight, c_strReplicFont, 0, y, iWndXSize - c_iClipMargin, strReplic, fReplicColR, fReplicColG ,fReplicColB);
			
		y += iReplicHeight;
		y += c_iReplicSpacing;
		
		int iAnswers, iAnswerHeight;
		@GetAnswerCount(iAnswers);
		
		for (int i = 0; i < iAnswers; ++i) {
			string strAnswer = GetAnswer(i);
			
			if (i == iHAnswer)
				@PrintInWidth(iAnswerHeight, c_strAnswerFont, c_iAnswerMargin, y, iWndXSize - c_iAnswerMargin - c_iClipMargin, strAnswer, fAnswerHColR, fAnswerHColG ,fAnswerHColB);
			else
				@PrintInWidth(iAnswerHeight, c_strAnswerFont, c_iAnswerMargin, y, iWndXSize - c_iAnswerMargin - c_iClipMargin, strAnswer, fAnswerColR, fAnswerColG ,fAnswerColB);
			
			y += iAnswerHeight;
			y += c_iAnswerSpacing;			
		}
	}
	
	void OnMouseMove(int x, int y) {
		int iPos = iScrollPos + iReplicHeight + c_iReplicSpacing;
		int iAnswers, iAnswerHeight;
		@GetAnswerCount(iAnswers);
		iHAnswer = -1;
		
		for (int i = 0; i < iAnswers; ++i) {
			string strAnswer = GetAnswer(i);
			int iID = GetAnswerID(i);
			
			@GetTextHeightInWidth(iAnswerHeight, c_strAnswerFont, iWndXSize - c_iAnswerMargin - c_iClipMargin, strAnswer);
			
			if (y > iPos && y < iPos + iAnswerHeight) {
				iHAnswer = i;
				iHAnswerID = iID;
			}
			
			iPos += iAnswerHeight;
			iPos += c_iAnswerSpacing;			
		}		
	}
	
	void OnLButtonUp(int x, int y) {
		if (iHAnswer == -1)
			return;
			
		string strReplic = GetReplic();
		int iID, iReplyID;
		string strAnswer = GetAnswer(iHAnswer);
		iID = GetAnswerID(iHAnswer);
		iReplyID = GetAnswerReplyID(iHAnswer);
		@SelectAnswer(iID, iReplyID);
		
		object data;
		@CreateStringVector(data);
		data->add(strReplic);
		data->add(strAnswer);
		
		iHAnswer = -1;
			
		@SendMessage(0, "history_text", data);
		iScrollPos = 0;
		UpdateScroll();
	}	
	
	void OnMouseWheel(int x, int y, float fDelta) {
		int iHeight;
		@GetFontHeight(iHeight, c_strAnswerFont);
		int iDelta = fDelta * iHeight;
		iScrollPos += iDelta;
		UpdateScroll();
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "p_scrollbar") {
			// from scrollbar
			iScrollPos = -iScrollMax * iMessage / 100;
			UpdateScroll();
		}
	}
}
