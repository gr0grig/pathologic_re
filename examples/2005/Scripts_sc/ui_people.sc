event OnChar 100;
event OnMessage 200;

maintask t0
{
	void init(void)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnMessage(int a0, string a1, object a2)
	{
	}
}

