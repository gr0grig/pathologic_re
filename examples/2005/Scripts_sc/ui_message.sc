event OnChar 100;
event OnMessage 200;

maintask t0
{
	var int tv0;

	void init(void)
	{
		tv0 = f_5b_a0_i() - 1;
		if (f_64_a0_i() < 7 && tv0 > 0) {
			tv0 = tv0 + -1;
		}
		@SendMessage(tv0, "text");
		@ShowCursor();
		@SetCursor("default");
		f_3e_a1_v(tv0);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		int L0;
		for (L0 = 0; L0 < 12; L0 = L0 + 1) {
			if (a1 == "button_day" + (L0 + 1)) {
				tv0 = L0;
				break;
			}
		}
		f_3e_a1_v(tv0);
	}
}

void f_3e_a1_v(int a0)
{
	int L0;
	for (L0 = 0; L0 < 12; L0 = L0 + 1) {
		if (L0 == a0) {
			@SendMessage(1, "button_day" + (L0 + 1));
		} else {
			@SendMessage(0, "button_day" + (L0 + 1));
		}
	}
	@SendMessage(a0, "text");
}

int f_5b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_64_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

