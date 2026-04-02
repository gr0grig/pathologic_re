include ui_events.sci

maintask UI_GameButton
{
	void init(void) {
		@SetBackground("default");
		@ProcessEvents();
	}
	
	void OnLButtonDown(int x, int y)
	{
		@SetBackground("highlight");
		@SendMessageToParent(0);
	}
	
	void OnLButtonUp(int x, int y)
	{
		@SetBackground("default");
	}	

	void OnMouseEnter() 
	{
		@SetBackground("highlight");
	}	
	
	void OnMouseLeave()
	{
		@SetBackground("default");
	}		

}
