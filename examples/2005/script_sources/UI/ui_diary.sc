include ui_std.sci

const string c_strMissionWnd = "button_mission";
const string c_strDayTasksWnd = "button_daytasks";
const string c_strOtherTasksWnd = "button_othertasks";
const string c_strTextWnd = "text";
const int c_iMission = 0;
const int c_iDayTasks = 1;
const int c_iOtherTasks = 2;

maintask UI_Diary
{
	var int iSelectedCategory;
	
	void init(void) {
		@GetDiarySelectedSection(iSelectedCategory);
		@SetCursor("default");
		@ShowCursor();
		UpdateTabButtons(iSelectedCategory);
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@ProcessEvents();
	}
	
	void OnChar(int wChar)
	{
		@SetDiarySelectedSection(iSelectedCategory);
		@DestroyWindow();
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == c_strMissionWnd) {
			iSelectedCategory = c_iMission;
			UpdateTabButtons(iSelectedCategory);
		}
		else
		if (strSender == c_strDayTasksWnd) {
			iSelectedCategory = c_iDayTasks;
			UpdateTabButtons(iSelectedCategory);
		}
		else
		if (strSender == c_strOtherTasksWnd) {
			iSelectedCategory = c_iOtherTasks;
			UpdateTabButtons(iSelectedCategory);
		}
	}		
	
	void UpdateTabButtons(int iCategory)
	{
		if (iCategory != c_iMission ) 
			@SendMessage(0, c_strMissionWnd);
		else
			@SendMessage(1, c_strMissionWnd);
			
		if (iCategory != c_iDayTasks ) 
			@SendMessage(0, c_strDayTasksWnd);
		else
			@SendMessage(1, c_strDayTasksWnd);

		if (iCategory != c_iOtherTasks ) 
			@SendMessage(0, c_strOtherTasksWnd);
		else
			@SendMessage(1, c_strOtherTasksWnd);			
			
		@SendMessage(iCategory, c_strTextWnd);
	}
	
}
