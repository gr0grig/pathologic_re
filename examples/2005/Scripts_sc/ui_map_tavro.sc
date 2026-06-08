event OnLButtonDown 2;
event OnMessage 200;
event OnMouseEnter 9;
event OnMouseLeave 10;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		f_33_a0_v();
		@ProcessEvents();
	}

	void OnLButtonDown(int a0, int a1)
	{
		@SendMessageToParent(tv0 ? 1 : 0);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "map") {
			tv0 = a0 != 0;
			if (tv1) {
				f_29_a0_v();
			} else {
				f_33_a0_v();
			}
		}
	}

	void OnMouseEnter(void)
	{
		f_29_a0_v();
		tv1 = true;
	}

	void OnMouseLeave(void)
	{
		f_33_a0_v();
		tv1 = false;
	}

	void f_29_a0_v(void)
	{
		if (tv0) {
			@SetBackground("to_map_h");
		} else {
			@SetBackground("to_quest_h");
		}
	}

	void f_33_a0_v(void)
	{
		if (tv0) {
			@SetBackground("to_map");
		} else {
			@SetBackground("to_quest");
		}
	}
}

