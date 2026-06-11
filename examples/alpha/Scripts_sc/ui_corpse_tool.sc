event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMouseLeave 10;
event OnMessage 200;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		@SetBackground("disabled");
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	void OnLButtonDown(int a0, int a1)
	{
		if (tv0) {
			@SendMessageToParent(0);
			@SetBackground("pressed");
		}
	}

	void OnLButtonUp(int a0, int a1)
	{
		if (tv0) {
			@SetBackground("default");
		} else {
			@SetBackground("disabled");
		}
	}

	void OnMouseLeave(void)
	{
		if (tv0) {
			@SetBackground("default");
		} else {
			@SetBackground("disabled");
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 > 0) {
			tv0 = true;
			@SetBackground("default");
		} else {
			tv0 = false;
			@SetBackground("disabled");
		}
	}
}

