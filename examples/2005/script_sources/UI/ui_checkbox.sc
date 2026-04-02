include ui_std.sci

maintask UI_CheckBox
{
	var bool bChecked;
	void init(void) {
		bChecked = false;
		@SetBackground("default");
		@ProcessEvents();
	}
	
	void ReportToParent()
	{	
		@SendMessageToParent(bChecked ? 1 : 0);
	}

	
	void OnLButtonDown(int x, int y)
	{
		bChecked = !bChecked;
		UpdateCheck();
		ReportToParent();
	}
	
	void OnLButtonUp(int x, int y)
	{
	}	
	
	void OnMessage(int iMessage, string strSender, object data) 
	{
		bChecked = iMessage != 0;
		UpdateCheck();
	}
	
	void UpdateCheck(void) {
		if (bChecked)
			@SetBackground("checked");
		else 
			@SetBackground("default");
	}
}
