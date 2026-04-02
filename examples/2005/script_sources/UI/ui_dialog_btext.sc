include ui_events.sci

const string c_strFont = "default";
const int c_iMargin = 25;
const int c_iSpacing = 18;

const float fNameColR = 1;
const float fNameColG = 1;
const float fNameColB = 1;

const float fDescColR = 0.8;
const float fDescColG = 0.8;
const float fDescColB = 0.8;

maintask UI_DialogBText
{
	var string strName, strDesc;
	var int iWndXSize, iWndYSize;
	
	void init(void) {
		object conv;
		@GetConversation(conv);
		if (conv == null) {
			@UITrace("null conversation");
			return;
		}
		int iNameID, iDescID;
		conv->GetNPCName(strName);
		@_strupr(strName);
		conv->GetNPCDescription(strDesc);
		
		@GetWindowSize(iWndXSize, iWndYSize);
		
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		int iHeight, iTotalHeight = 0;
		@GetTextHeightInWidth(iHeight, c_strFont, iWndXSize - c_iMargin * 2, strName);
		iTotalHeight += iHeight + c_iSpacing;

		@GetTextHeightInWidth(iHeight, c_strFont, iWndXSize - c_iMargin * 2, strDesc);
		iTotalHeight += iHeight;
		
		int iUpSpacing = (iWndYSize - iTotalHeight) / 2;
		
		iTotalHeight = iUpSpacing;
		@PrintInWidth(iHeight, c_strFont, c_iMargin, iTotalHeight, iWndXSize - c_iMargin * 2, strName, fNameColR, fNameColG, fNameColB);
		iTotalHeight += iHeight + c_iSpacing;
		
		@PrintInWidth(iHeight, c_strFont, c_iMargin, iTotalHeight, iWndXSize - c_iMargin * 2, strDesc, fDescColR, fDescColG, fDescColB);
	}
}	
