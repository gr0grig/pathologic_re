include ui_events.sci

const float c_fMaxHours = 6;

maintask UI_DreamSlider
{
	var int iProgress, iWndXSize, iWndYSize;
	void init(void) {
		iProgress = 0;
		@GetWindowSize(iWndXSize, iWndYSize);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnMessage(int iMessage, string strSender, object data)
	{
		iProgress = iMessage;
	}		
	
	void OnDraw() {
		if (!iProgress)
			return;
			
		int iBarLength = iWndXSize * iProgress / 100;
		if (iBarLength != 0) {  
			@StretchBlit("white", 0, 0, iBarLength, iWndYSize);
		}				
		
		int iHour = c_fMaxHours * (iProgress + 1) / 100.0 ;
		if (iHour) {
			int x = (iHour - 1) * iWndXSize / c_fMaxHours;
			@Print("default", x + 5, 5, iHour, 0,0,0);
		}
		
	}		
}
