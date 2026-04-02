include ui_events.sci

maintask UI_CorpseTool
{
	var bool bEnabled;
	void init(void) {
		bEnabled = false;
		@SetBackground("disabled");
		@SetOwnerDraw(false);
		@ProcessEvents();
	}
	
	void OnLButtonDown(int x, int y)
	{
		if (bEnabled) {
			@SendMessageToParent(0);
			@SetBackground("pressed");
		}
	}
	
	void OnLButtonUp(int x, int y)
	{
		if (bEnabled)
			@SetBackground("default");
		else
			@SetBackground("disabled");
	}	
	
	void OnMouseLeave()
	{
		if (bEnabled)
			@SetBackground("default");
		else
			@SetBackground("disabled");
	}		
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (iMessage > 0) {
			bEnabled = true;
			@SetBackground("default");
		}
		else {
			bEnabled = false;
			@SetBackground("disabled");
		}
	}
}