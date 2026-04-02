include ui_events.sci

maintask UI_InvButton
{
	void init(void) {
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		@Blit("text", 0, 0);
	}	
	
	void OnLButtonDown(int x, int y)
	{
		@SetBackground("pressed");
		@SendMessageToParent(0);
	}
	
	void OnLButtonUp(int x, int y)
	{
	}	
	
	void OnMessage(int iMessage, string strSender, object data)
	{
		if (iMessage == 0)
			@SetBackground("default");
		else
			@SetBackground("pressed");
	}		

}
