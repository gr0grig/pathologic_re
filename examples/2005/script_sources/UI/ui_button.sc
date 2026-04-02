include ui_events.sci

maintask UI_Button
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
		@SetBackground("default");
	}	
	
	void OnMouseLeave()
	{
		@SetBackground("default");
	}		
}
