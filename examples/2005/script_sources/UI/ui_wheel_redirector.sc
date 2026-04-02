include ui_events.sci

maintask UI_Button
{
	void init(void) {
		@ProcessEvents();
	}
	
	void OnMouseWheel(int x, int y, float fDelta) {
		@SendMessageToParent(fDelta);
	}	
}
