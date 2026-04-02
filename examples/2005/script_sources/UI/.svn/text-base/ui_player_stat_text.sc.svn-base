include ui_std.sci

const float c_fTitleColR = 95.0 / 255.0;
const float c_fTitleColG = 95.0 / 255.0;
const float c_fTitleColB = 95.0 / 255.0;

maintask UI_DynamicText
{
	var bool bText;
	var string strText;
	var int iWndXSize, iWndYSize;
	void init(void) {
		bText = false;
		@GetWindowSize(iWndXSize, iWndYSize);
		@SetOwnerDraw(true);		
		@ProcessEvents();
	}
	
	void OnDraw()
	{
		if (bText) {
			int iHeight;
			@PrintInWidth(iHeight, "default", 0, -1, iWndXSize, strText, c_fTitleColR, c_fTitleColG ,c_fTitleColB);
		}
	}	
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (iMessage != -1) {
			@GetStringByID(strText, iMessage);
			bText = true;
		}
		else {
			bText = false;
		}
	}	
}
