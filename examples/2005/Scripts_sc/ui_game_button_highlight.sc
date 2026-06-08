event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMouseEnter 9;
event OnMouseLeave 10;

maintask t0
{
	void init(void)
	{
		@SetBackground("default");
		@ProcessEvents();
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SetBackground("highlight");
		@SendMessageToParent(0);
	}

	void OnLButtonUp(int a0, int a1)
	{
		@SetBackground("default");
	}

	void OnMouseEnter(void)
	{
		@SetBackground("highlight");
	}

	void OnMouseLeave(void)
	{
		@SetBackground("default");
	}
}

