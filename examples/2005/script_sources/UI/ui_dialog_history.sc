include ui_events.sci
include ui_std.sci

const float fReplicColR = 0.804;
const float fReplicColG = 0.804;
const float fReplicColB = 0.804;

const float fAnswerColR = 0.698;
const float fAnswerColG = 0.659;
const float fAnswerColB = 0.647;

const float fNPCColR = 0.804;
const float fNPCColG = 0.804;
const float fNPCColB = 0.804;

const float fPlayerColR = 0.698;
const float fPlayerColG = 0.659;
const float fPlayerColB = 0.647;

const int c_iSpacing = 10;

const string c_strReplicFont = "default";
const string c_strAnswerFont = "default";
const string c_strNPCFont = "default";
const string c_strPlayerFont = "default";

var int g_iMargin;

maintask UI_DialogHistory
{
	var bool bScroll;
	var int iScrollPos, iScrollMax;
	var int iReplicHeight;
	var int iHAnswer, iHAnswerID;
	var int iWndXSize, iWndYSize;
	var object strReplics, strAnswers;
	var string strNPCName, strPlayerName;
	
	void init(void) {
		iHAnswer = -1;
		iScrollPos = 0;
		
		@GetWindowSize(iWndXSize, iWndYSize);
		g_iMargin = iWndXSize / 4.8;
		
		@CreateStringVector(strReplics); 
		@CreateStringVector(strAnswers); 
		
		object conv;
		@GetConversation(conv);
		if (conv == null) {
			@UITrace("null conversation");
			return;
		}
		conv->GetNPCName(strNPCName);		
		@_strupr(strNPCName);
		conv->GetPlayerName(strPlayerName);		
		@_strupr(strPlayerName);
		
		
		UpdateScroll();
		@EnableClipping(true);
		@SetOwnerDraw(true);
		bScroll = false;
		@ProcessEvents();
	}
	
	void UpdateScroll() {
		iScrollMax = GetTextHeight();
		iScrollMax -= iWndYSize;
		if (iScrollMax < 0) {
			iScrollMax = 0;
			@SendMessage(100 | c_iScrollDisabled, "h_scrollbar");
		}
		else {
			@SendMessage(100, "h_scrollbar");
		}
		
		iScrollPos = -iScrollMax;
	}

	void UpdateScroll2() {
		iScrollMax = GetTextHeight();
		iScrollMax -= iWndYSize;
		if (iScrollMax < 0)
			iScrollMax = 0;

		if ((-iScrollPos) > iScrollMax)
			iScrollPos = -iScrollMax;
		else if (iScrollPos > 0)
			iScrollPos = 0;
			
		if (iScrollMax == 0) {
			@SendMessage(c_iScrollDisabled, "h_scrollbar");
		}
		else {
			@SendMessage(-iScrollPos * 100 / iScrollMax, "h_scrollbar");
		}
	}
	
	int GetTextHeight()
	{
		int iSize, iHeight, iRet = 0;
		strReplics->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string strReplic, strAnswer;
			strReplics->get(strReplic, i);
			strAnswers->get(strAnswer, i);
			
			@GetTextHeightInWidth(iHeight, c_strReplicFont, iWndXSize - g_iMargin, strReplic);
			iRet += iHeight;
			iRet += c_iSpacing;
			@GetTextHeightInWidth(iHeight, c_strAnswerFont, iWndXSize - g_iMargin, strAnswer);
			iRet += iHeight;
			if (i != iSize - 1)
				iRet += c_iSpacing;
		}
		return iRet;
	}	
	
	void OnDraw() {
		int y = iScrollPos, iSize;
		strReplics->size(iSize);
		
		for (int i = 0; i < iSize; ++i) {
			string strReplic, strAnswer;
			strReplics->get(strReplic, i);
			strAnswers->get(strAnswer, i);
			
			int iHeight;
			@PrintInWidth(iHeight, c_strReplicFont, g_iMargin, y, iWndXSize - g_iMargin, strReplic, fReplicColR, fReplicColG ,fReplicColB);
			@Print(c_strNPCFont, 0, y, strNPCName, fNPCColR, fNPCColG, fNPCColB);
			y += iHeight;
			y += c_iSpacing;
			
			@PrintInWidth(iHeight, c_strAnswerFont, g_iMargin, y, iWndXSize - g_iMargin, strAnswer, fAnswerColR, fAnswerColG ,fAnswerColB);
			@Print(c_strPlayerFont, 0, y, strPlayerName, fPlayerColR, fPlayerColG, fPlayerColB);
			y += iHeight;
			y += c_iSpacing;
		}
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "h_scrollbar") {
			iScrollPos = -iScrollMax * iMessage / 100;
		}
		else
		if (strSender == "dialog_text") {
			string strReplic, strAnswer;
			data->get(strReplic, 0);
			data->get(strAnswer, 1);
			
			strReplics->add(strReplic);
			strAnswers->add(strAnswer);
			UpdateScroll();
		}
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		int iHeight;
		@GetFontHeight(iHeight, c_strAnswerFont);
		int iDelta = fDelta * iHeight;
		iScrollPos += iDelta;
		UpdateScroll2();
	}	
}
