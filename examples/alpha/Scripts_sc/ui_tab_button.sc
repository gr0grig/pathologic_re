event OnDraw 0;
event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMessage 200;

maintask t0
{
	void init(void)
	{
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		@Blit("text", 0, 0);
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SetBackground("pressed");
		@SendMessageToParent(0);
	}

	void OnLButtonUp(int a0, int a1)
	{
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 == 0) {
			@SetBackground("default");
		} else {
			@SetBackground("pressed");
		}
	}
}

