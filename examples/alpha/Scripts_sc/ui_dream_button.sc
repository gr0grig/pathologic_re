event OnLButtonDown 2;
event OnLButtonUp 3;
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
		@SendMessageToParent(0);
	}

	void OnLButtonUp(int a0, int a1)
	{
		@SetBackground("default");
		tv0 = !tv0;
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

