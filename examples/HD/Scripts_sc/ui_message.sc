event OnChar 100;
event OnKeyDown 101;
event OnKeyUp 102;
event OnMessage 200;

maintask t0
{
	var int tv0;

	void init(void)
	{
		tv0 = f_9b_a0_i() - 1;
		if (f_a4_a0_i() < 7 && tv0 > 0) {
			tv0 = tv0 + -1;
		}
		@SendMessage(tv0, "text");
		@ShowCursor();
		@SetCursor("default");
		f_7e_a1_v(tv0);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 266) {
			if (tv0 < 11) {
				tv0 = tv0 + 1;
			} else {
				tv0 = 0;
			}
			f_7e_a1_v(tv0);
		} else {
			if (a0 == 265) {
				if (tv0 > 0) {
					tv0 = tv0 + -1;
				} else {
					tv0 = 11;
				}
				f_7e_a1_v(tv0);
			} else {
				if (a0 == 267) {
					@SendMessage(1001, "text");
				} else {
					if (a0 == 268) {
						@SendMessage(1000, "text");
					}
				}
			}
		}
	}

	void OnKeyUp(int a0)
	{
		if (a0 == 272) {
			@SendMessage(1001, "text");
		} else {
			if (a0 == 274) {
				@SendMessage(1000, "text");
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		int L0;
		for (L0 = 0; L0 < 12; L0++) {
			if (a1 == "button_day" + (L0 + 1)) {
				tv0 = L0;
				break;
			}
		}
		f_7e_a1_v(tv0);
	}
}

void f_7e_a1_v(int a0)
{
	int L0;
	L0 = 0;
	for (; L0 < 12; L0++) {
		if (L0 == a0) {
			@SendMessage(1, "button_day" + (L0 + 1));
		} else {
			@SendMessage(0, "button_day" + (L0 + 1));
		}
	}
	@SendMessage(a0, "text");
}

int f_9b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_a4_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

