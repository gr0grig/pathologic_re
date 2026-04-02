include ui_std.sci
include ../game_ext.sci

const string c_strTitleFont = "default";
const float c_fTitleColR = 1.0;
const float c_fTitleColG = 1.0;
const float c_fTitleColB = 1.0;

maintask UI_PlayerStatsTime
{
	var string strTime;
	var int iOffsetX, iOffsetY;
	void init(void) {
		@SetBackground("default");
		@SetOwnerDraw(true);		
		@ProcessEvents();
	}
	
	void OnDraw()
	{
		strTime = GetHour() + " : ";
		if (GetMinute() < 10) {
			strTime += "0";
		}
		strTime += GetMinute();

		string strDay;		
		@GetStringByID(strDay, c_iTextID_Day);
		
		strTime += ", " + strDay + " " + GetDay();
		
		int x, y;
		@GetWindowSize(x, y);
			
		int iHeight;
		@GetFontHeight(iHeight, c_strTitleFont);
		iOffsetY = (y - iHeight) / 2;
			
		int iWidth;
		@GetTextWidth(iWidth, "default", strTime);
		iOffsetX = (x - iWidth) / 2;
	
		@Print(c_strTitleFont, iOffsetX, iOffsetY, strTime, c_fTitleColR, c_fTitleColG, c_fTitleColB);
	}	
}
