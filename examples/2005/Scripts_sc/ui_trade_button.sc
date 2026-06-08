event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMouseLeave 10;

maintask t0
{
	void init(void)
	{
		@SetBackground("default");
		@SetOwnerDraw(false);
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
	}

	void OnMouseLeave(void)
	{
		@SetBackground("default");
	}
}

