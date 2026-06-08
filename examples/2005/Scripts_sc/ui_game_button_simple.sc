event OnLButtonDown 2;

maintask t0
{
	void init(void)
	{
		@SetBackground("default");
		@ProcessEvents();
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SendMessageToParent(0);
	}
}

