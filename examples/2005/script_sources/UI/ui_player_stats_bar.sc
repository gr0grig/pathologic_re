include ui_std.sci

maintask UI_PlayerStatsBar
{
	var int iPercents;
	void init(void) {
		iPercents = 0;
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		iPercents = iMessage;
		if (iPercents > 100)
			iPercents = 100;
		if (iPercents < 0)
			iPercents = 0;
	}
	
	void OnDraw() 
	{
		string strBar;
		if (iPercents <= 33)
			strBar = "r1";
		else
		if (iPercents <= 66)
			strBar = "r2";
		else
			strBar = "r3";

		int iWndXSize, iWndYSize;
		@GetWindowSize(iWndXSize, iWndYSize);
		int iPc = iPercents + 2;
		if (iPc > 100)
			iPc = 100;
		int iBarLength = iWndXSize * iPercents / 100;
		@Blit("default", 0, 0);
		@BlitClipped(strBar, 0, 0, 0, 0, iBarLength, iWndYSize);
		
	}
}
