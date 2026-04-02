include ui_events.sci

maintask UI_DreamButton
{
	var bool bStop;
	void init(void) {
		bStop = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnLButtonDown(int x, int y)
	{
		@SetBackground("pressed");
	}
	
	void OnLButtonUp(int x, int y)
	{
		@SetBackground("default");
		@SendMessageToParent(0);
		bStop = !bStop;
	}	
	
	void OnMouseLeave() {
		@SetBackground("default");
	}
	
	void OnDraw() {
		if (!bStop)
			@Blit("start", 0, 0);
		else
			@Blit("stop", 0, 0);
	}			
}
