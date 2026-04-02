include ui_std.sci

const float c_fTitleColR = 95.0 / 255.0;
const float c_fTitleColG = 95.0 / 255.0;
const float c_fTitleColB = 95.0 / 255.0;

maintask UI_DynamicText
{
	var string strText;
	var int iWndXSize, iWndYSize;
	void init(void) {
		@GetWindowSize(iWndXSize, iWndYSize);
		@GetStringByID(strText, c_iTID_Agony_Pain);
		@SetOwnerDraw(true);		
		@ProcessEvents();
	}
	
	void OnDraw() {
		int iHeight;
		@PrintInWidth(iHeight, "default", 0, -1, iWndXSize, strText, c_fTitleColR, c_fTitleColG ,c_fTitleColB);
	}	
}
