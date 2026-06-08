event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMessage 200;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		@SetBackground("default");
		@ProcessEvents();
	}

	void f_7_a0_v(void)
	{
		@SendMessageToParent(tv0 ? 1 : 0);
	}

	void OnLButtonDown(int a0, int a1)
	{
		tv0 = !tv0;
		f_21_a0_v();
		f_7_a0_v();
	}

	void OnLButtonUp(int a0, int a1)
	{
	}

	void OnMessage(int a0, string a1, object a2)
	{
		tv0 = a0 != 0;
		f_21_a0_v();
	}

	void f_21_a0_v(void)
	{
		if (tv0) {
			@SetBackground("checked");
		} else {
			@SetBackground("default");
		}
	}
}

