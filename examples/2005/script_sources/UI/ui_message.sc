include ui_std.sci
include ui_events.sci

const string c_strDayWnd = "button_day";
const string c_strTextWnd = "text";

maintask UI_Mail
{
	var int iSelectedDay;
	void init(void) {
		iSelectedDay = GetDay() - 1;
		if (GetHour() < 7 && iSelectedDay > 0)
			iSelectedDay--;
			
		@SendMessage(iSelectedDay, c_strTextWnd);
		@ShowCursor();
		@SetCursor("default");
		UpdateTabButtons(iSelectedDay);
		@CaptureKeyboard();
		@ProcessEvents();
	}
	
	void OnChar(int wChar)
	{
		@DestroyWindow();
	}		

	void OnMessage(int iMessage, string strSender, object data) {
		for (int i = 0; i < 12; ++i) {
			if (strSender == (c_strDayWnd + (i+1))) {
				iSelectedDay = i;
				break;
			}
		}
		UpdateTabButtons(iSelectedDay);
	}		
	
	void UpdateTabButtons(int iDay)
	{
		for (int i = 0; i < 12; ++i) {
			if (i == iDay)
				@SendMessage(1, (c_strDayWnd + (i+1)));
			else
				@SendMessage(0, (c_strDayWnd + (i+1)));
		}
		
		@SendMessage(iDay, c_strTextWnd);
	}	
}
