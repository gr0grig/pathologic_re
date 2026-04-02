include ui_std.sci

const float fColR = 1.0;
const float fColG = 1.0;
const float fColB = 1.0;

const int c_iSpacing = 15;
const int c_iChildSpacing = 10;
const int c_iMargin = 20;

const string c_strFont = "default";

maintask UI_DiaryText
{
	var bool bScroll;
	var int iScrollPos, iScrollMax;
	var int iWndXSize, iWndYSize;
	var int iSelectedSection, iTotalHeight;

	void init(void) {
		iSelectedSection = 0;
		iScrollPos = 0;
		@GetWindowSize(iWndXSize, iWndYSize);
		
		DrawDiary(true);
		UpdateScroll();
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void DrawDiary(bool bCalc) {
		iTotalHeight = 0;
			
		object root;
		@GetDiaryRoot(root);
		
		int iChildCount, iCategory;
		root->ChildCount(iChildCount);
		
		for (int i = 0; i < iChildCount; ++i) {
			object child;
			root->Child(child, i);
			child->GetCategory(iCategory);
			if (iCategory != iSelectedSection)
				continue;
			DrawBranch(child, 0, bCalc);
			iTotalHeight += c_iSpacing;
		}
		
		iScrollMax = iTotalHeight - iWndYSize;
		if (iScrollMax < 0)
			iScrollMax = 0;
	}
	
	void OnDraw() {
		DrawDiary(false);
	}
	
	void DrawBranch(object branch, int iMargin, bool bCalc) 
	{
		int iCategory;
		branch->GetCategory(iCategory);
		if (iCategory != iSelectedSection)
			return;
			
		int iTextID;
		branch->GetTextID(iTextID);
		string strText;
		@GetStringByID(strText, iTextID);
		
		int iHeight;
		if (bCalc)
			@GetTextHeightInWidth(iHeight, c_strFont, iWndXSize - iMargin, strText);
		else
			@PrintInWidth(iHeight, c_strFont, iMargin, iScrollPos + iTotalHeight, iWndXSize - iMargin, strText, fColR, fColG, fColB);
			
		iTotalHeight += iHeight;			
			
		int iChildCount;
		branch->ChildCount(iChildCount);
		
		for (int i = 0; i < iChildCount; ++i) {
			object child;
			branch->Child(child, i);
			int iCategory;
			child->GetCategory(iCategory);
			if (iCategory != iSelectedSection)
				continue;
				
			iTotalHeight += c_iChildSpacing;
			DrawBranch(child, iMargin + c_iMargin, bCalc);
		}
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "scrollbar") {
			iScrollPos = -iScrollMax * iMessage / 100;
			CorrectScroll();
			return;
		}
		else if (strSender == "diary") {
			iSelectedSection = iMessage;
			iScrollPos = 0;
			DrawDiary(true);
			UpdateScroll();
		}
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		int iDelta = fDelta * c_iSpacing * 2;
		iScrollPos += iDelta;
		CorrectScroll();
		UpdateScroll();
	}
	
	void CorrectScroll() {
		if (iScrollMax == 0) {
			iScrollPos = 0;
			return;
		}
			
		if ((-iScrollPos) > iScrollMax)
			iScrollPos = -iScrollMax;
		else if (iScrollPos > 0)
			iScrollPos = 0;
	}
	
	void UpdateScroll() {
		if (iScrollMax == 0)
			@SendMessage(c_iScrollDisabled, "scrollbar");
		else
			@SendMessage(-iScrollPos * 100 / iScrollMax, "scrollbar");
	}				
}
