include ui_std.sci
include ../game_ext.sci

const string c_strTitleFont = "default";
const float c_fTitleColR = 167.0 / 255.0;
const float c_fTitleColG = 167.0 / 255.0;
const float c_fTitleColB = 167.0 / 255.0;

maintask UI_PlayerStatsName
{
	var string strPlayerName;
	var int iOffsetX, iOffsetY;
	void init(void) {
		int iPlayer;
		if (GetPlayer() == c_iBranchBurah)
			iPlayer = c_iTID_PD_Burah;
		else
		if (GetPlayer() == c_iBranchDanko)
			iPlayer = c_iTID_PD_Danko;
		else
		if (GetPlayer() == c_iBranchKlara)
			iPlayer = c_iTID_PD_Klara;
				
		@GetStringByID(strPlayerName, iPlayer);
		//@_strupr(strPlayerName);
	
		int x, y;
		@GetWindowSize(x, y);
		
/*		int iWidth;
		@GetTextWidth(iWidth, c_strTitleFont, strPlayerName);
		
		x -= iWidth;
		if (x < 0)
			x = 0;
			
		iOffsetX = x / 2;
		*/
		
		iOffsetX = 2;
		
		int iHeight;
		@GetFontHeight(iHeight, c_strTitleFont);
		iOffsetY = (y - iHeight) / 2;
		if (iOffsetY < 0)
			iOffsetY = 0;
		
		@SetOwnerDraw(true);		
		@ProcessEvents();
	}
	
	void OnDraw()
	{
		@Print(c_strTitleFont, iOffsetX, iOffsetY, strPlayerName, c_fTitleColR, c_fTitleColG, c_fTitleColB);
	}	
}
