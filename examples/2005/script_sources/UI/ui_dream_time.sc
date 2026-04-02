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
		int x, y;
		@GetWindowSize(x, y);
		iOffsetX = 20;
		int iHeight;
		@GetFontHeight(iHeight, c_strTitleFont);
		iOffsetY = (y - iHeight) / 2;
		if (iOffsetY < 0)
			iOffsetY = 0;
		
		@SetNeedUpdate(true);
		@SetOwnerDraw(true);		
		@ProcessEvents();
	}
	
	void OnUpdate(float fDeltaTime) {
		strTime = GetHour() + " : ";
		if (GetMinute() < 10) {
			strTime += "0";
		}
		strTime += GetMinute();

		string strDay;		
		@GetStringByID(strDay, c_iTextID_Day);
		
		strTime += " " + strDay + " " + GetDay();
	}
	
	void OnDraw()
	{
		@Print(c_strTitleFont, iOffsetX, iOffsetY, strTime, c_fTitleColR, c_fTitleColG, c_fTitleColB);
	}	
}
