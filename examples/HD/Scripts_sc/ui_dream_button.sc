event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMouseLeave 10;
event OnDraw 0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SetBackground("pressed");
	}

	void OnLButtonUp(int a0, int a1)
	{
		@SetBackground("default");
		@SendMessageToParent(0);
		tv0 = !tv0;
	}

	void OnMouseLeave(void)
	{
		@SetBackground("default");
	}

	void OnDraw(void)
	{
		if (!tv0) {
			@Blit("start", 0, 0);
		} else {
			@Blit("stop", 0, 0);
		}
	}
}

