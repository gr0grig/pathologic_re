include ui_events.sci

maintask UI_GameButton
{
	void init(void) {
		@SetBackground("default");
		@ProcessEvents();
	}
	
	void OnLButtonDown(int x, int y)
	{
		@SetBackground("pressed");
		@SendMessageToParent(0);
	}
	
	void OnLButtonUp(int x, int y)
	{
		@SetBackground("default");
	}	

	void OnMouseLeave()
	{
		@SetBackground("default");
	}		

}
