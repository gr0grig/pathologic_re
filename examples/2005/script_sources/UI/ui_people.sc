include ui_std.sci

maintask UI_People
{
	void init(void) {
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@ProcessEvents();
	}
	
	void OnChar(int wChar)
	{
		@DestroyWindow();
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
	}		
}
