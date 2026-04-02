include ui_std.sci

const float fTextColR = 0.698;
const float fTextColG = 0.659;
const float fTextColB = 0.647;

const float fHTextColR = 0.804;
const float fHTextColG = 0.804;
const float fHTextColB = 0.804;

const float fTitleColR = 0.804;
const float fTitleColG = 0.804;
const float fTitleColB = 0.804;

const float fHTitleColR = 1.0;
const float fHTitleColG = 1.0;
const float fHTitleColB = 1.0;

const string c_strTitleFont = "default";
const string c_strTextFont = "default";
const int c_iSpacing = 5;
const int c_iMessageSpacing = 5;
const int c_iMessageMargin = 15;

maintask UI_MessageText
{
	var int iScrollPos, iScrollMax;
	var int iWndXSize, iWndYSize;
	var int iSelectedDay, iSelectedMessage, iHMessage;
	
	var object strDayTitles;
	var object strDayTexts;
	var object iDayIndices;
	
	void init(void) {
		@SetOwnerDraw(true);
		@EnableClipping(true);
		
		@GetWindowSize(iWndXSize, iWndYSize);
		iScrollPos = 0;
		
		iSelectedDay = 0;
		iSelectedMessage = -1;
		
		@CreateObjectVector(strDayTitles);
		@CreateObjectVector(strDayTexts);
		@CreateObjectVector(iDayIndices);
		for (int i = 0; i < 12; ++i) {
			object strDay;
			@CreateStringVector(strDay);
			strDayTitles->add(strDay);
			@CreateStringVector(strDay);
			strDayTexts->add(strDay);
			@CreateIntVector(strDay);
			iDayIndices->add(strDay);
		}
		
		int iCount;
		@GetMessageCount(iCount);
		if (iCount) {
			for (int i = iCount - 1; i >= 0; --i) {
				float fTime;
				string strTitle, strText;
				@GetMessage(i, strTitle, strText, fTime);
				int iDay = fTime / 24;
				int iHour = fTime - iDay * 24;
				if (iHour < 7 && iDay > 0)
					iDay --;
					
				object strDayTitle, strDayText, iDayInd;
				
				strDayTitles->get(strDayTitle, iDay);
				strDayTexts->get(strDayText, iDay);
				iDayIndices->get(iDayInd, iDay);
				
				strDayTitle->add(strTitle);
				strDayText->add(strText);
				iDayInd->add(i);
			}
			iSelectedMessage = iCount - 1;
		}
		
		CorrectScroll();
		UpdateScroll();
		@ProcessEvents();
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		int iDelta = fDelta * c_iSpacing * 2;
		iScrollPos += iDelta;
		CorrectScroll();
		UpdateScroll();
	}	
	
	void CorrectScroll(void) {
		iScrollMax = GetTextHeight();
		iScrollMax -= iWndYSize;
		if (iScrollMax < 0) {
			iScrollMax = 0;
			iScrollPos = 0;
		}
		else {	
			if ((-iScrollPos) > iScrollMax)
				iScrollPos = -iScrollMax;
			else if (iScrollPos > 0)
				iScrollPos = 0;
		}
	}
	
	void UpdateScroll() {
		if (iScrollMax == 0)
			@SendMessage(c_iScrollDisabled, "scrollbar");
		else
			@SendMessage(-iScrollPos * 100 / iScrollMax, "scrollbar");
	}	
	
	int GetTextHeight()
	{
		int iRet = 0;
		
		object strDayTitle, strDayText, iDayInd;
		strDayTitles->get(strDayTitle, iSelectedDay);
		strDayTexts->get(strDayText, iSelectedDay);
		iDayIndices->get(iDayInd, iSelectedDay);
		
		int iSize;
		strDayTitle->size(iSize);
		
		for (int i = 0; i < iSize; ++i) {
			string strTitle, strText;
			int iIndex;
			strDayTitle->get(strTitle, i);
			strDayText->get(strText, i);
			iDayInd->get(iIndex, i);
				
			int iHeight;
			@GetTextHeightInWidth(iHeight, c_strTitleFont, iWndXSize, strTitle);
			iRet += iHeight;
			if (iIndex == iSelectedMessage) {
				iRet += c_iMessageSpacing;
				@GetTextHeightInWidth(iHeight, c_strTitleFont, iWndXSize - c_iMessageMargin , strText);
				iRet += iHeight;
				iRet += c_iSpacing;
			}
			else
				iRet += c_iSpacing;
		}	
		return iRet;
	}	
	
	int FindMessage(int cy)
	{
		int y = iScrollPos;
		
		object strDayTitle, strDayText, iDayInd;
		strDayTitles->get(strDayTitle, iSelectedDay);
		strDayTexts->get(strDayText, iSelectedDay);
		iDayIndices->get(iDayInd, iSelectedDay);
		
		int iSize;
		strDayTitle->size(iSize);
		
		for (int i = 0; i < iSize; ++i) {
			int yprev = y;
			string strTitle, strText;
			int iIndex;
			strDayTitle->get(strTitle, i);
			strDayText->get(strText, i);
			iDayInd->get(iIndex, i);
				
			int iHeight;
			@GetTextHeightInWidth(iHeight, c_strTitleFont, iWndXSize, strTitle);
			y += iHeight;
			if (iIndex == iSelectedMessage) {
				y += c_iMessageSpacing;
				@GetTextHeightInWidth(iHeight, c_strTitleFont, iWndXSize - c_iMessageMargin , strText);
				y += iHeight;
				y += c_iSpacing;
			}
			else
				y += c_iSpacing;
				
			if (cy > yprev && cy < y) 
				return iIndex;
		}	
		return -1;
	}	
	
	void OnDraw() { 
		int y = iScrollPos;
		
		object strDayTitle, strDayText, iDayInd;
		strDayTitles->get(strDayTitle, iSelectedDay);
		strDayTexts->get(strDayText, iSelectedDay);
		iDayIndices->get(iDayInd, iSelectedDay);
		
		int iSize;
		strDayTitle->size(iSize);
		
		for (int i = 0; i < iSize; ++i) {
			string strTitle, strText;
			int iIndex;
			strDayTitle->get(strTitle, i);
			strDayText->get(strText, i);
			iDayInd->get(iIndex, i);
				
			int iHeight;
			if (iIndex == iHMessage) 
				@PrintInWidth(iHeight, c_strTitleFont, 0, y, iWndXSize, strTitle, fHTitleColR, fHTitleColG ,fHTitleColB);
			else
				@PrintInWidth(iHeight, c_strTitleFont, 0, y, iWndXSize, strTitle, fTitleColR, fTitleColG ,fTitleColB);
				
			y += iHeight;
			if (iIndex == iSelectedMessage) {
				y += c_iMessageSpacing;
				if (iIndex == iHMessage) 
					@PrintInWidth(iHeight, c_strTextFont, c_iMessageMargin, y, iWndXSize - c_iMessageMargin , strText, fHTextColR, fHTextColG, fHTextColB);
				else
					@PrintInWidth(iHeight, c_strTextFont, c_iMessageMargin, y, iWndXSize - c_iMessageMargin , strText, fTextColR, fTextColG, fTextColB);
				y += iHeight;
				y += c_iSpacing;
			}
			else
				y += c_iSpacing;
		}	
	}
	
	void OnLButtonUp(int x, int y) {
		int iMsg = FindMessage(y);
		if (iMsg == -1)
			return;
			
		if (iMsg == iSelectedMessage) {
			iSelectedMessage = -1;
		}
		else
			iSelectedMessage = iMsg;
		
		CorrectScroll();
		UpdateScroll();
	}		
	
	void OnMouseMove(int x, int y) {
		iHMessage = FindMessage(y);
	}	
	
	void OnMouseLeave() {
		iHMessage = -1;
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "scrollbar") {
			iScrollPos = -iScrollMax * iMessage / 100;
			CorrectScroll();
			return;
		}
		else
		if (strSender == "message") {
			if (iMessage & 32768) {
				iSelectedMessage = iMessage & 32767;
			}
			else {
				iSelectedDay = iMessage;
				CorrectScroll();
				UpdateScroll();
			}
		}
	}
}
