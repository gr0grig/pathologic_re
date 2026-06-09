event OnKeyDown 101;
event OnKeyUp 102;
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

	void OnKeyDown(int a0)
	{
		if (a0 == 267) {
			@SendMessage(1001, "text");
		} else {
			if (a0 == 268) {
				@SendMessage(1000, "text");
			}
		}
	}

	void OnKeyUp(int a0)
	{
		if (a0 == 272) {
			@SendMessage(1001, "text");
		} else {
			if (a0 == 274) {
				@SendMessage(1000, "text");
			}
		}
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnMessage(int a0, string a1, object a2)
	{
	}
}

