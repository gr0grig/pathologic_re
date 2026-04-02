include ui_events.sci

const string c_strTitleFont = "default";
const float c_fTitleColR = 128.0 / 255.0;
const float c_fTitleColG = 128.0 / 255.0;
const float c_fTitleColB = 128.0 / 255.0;

maintask UI_DialogTitle
{
	var string strNPCName;
	var int iWndXSize, iWndYSize;
	
	void init(void) {
		@ShowCursor();
		@SetOwnerDraw(true);
		
		@GetWindowSize(iWndXSize, iWndYSize);
		
		object conv;
		@GetConversation(conv);
		if (conv == null) {
			@UITrace("null conversation");
			return;
		}
		conv->GetNPCName(strNPCName);
		//@_strupr(strNPCName);
		@ProcessEvents();
	}
	
	void OnDraw() {
		int iHeight;
		@PrintInWidth(iHeight, c_strTitleFont, 0, 0, iWndXSize, strNPCName, c_fTitleColR, c_fTitleColG, c_fTitleColB);
	}
}
