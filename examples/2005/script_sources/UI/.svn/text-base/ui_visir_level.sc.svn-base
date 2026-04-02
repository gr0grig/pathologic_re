include ui_events.sci

maintask UI_VisirLevel
{
	var bool bEnabled;
	void init(void) {
		bEnabled = false;
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		if (bEnabled)
			@Blit("default", 0, 0);
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		bEnabled = iMessage != 0;
	}
}
