event OnChar 100;
event OnMessage 200;

maintask t0
{
	var int tv0;

	void init(void)
	{
		int L0;
		tv0 = 0;
		@GetSelectedMessage(L0);
		if (L0 != -1) {
			float L1;
			string L2;
			string L3;
			@GetMessage(L0, L2, L3, L1);
			tv0 = L1 / 24.0;
			@SendMessage(L0 | 32768, "text");
		}
		@ShowCursor();
		@SetCursor("default");
		f_37_a1_v(tv0);
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
		for (L0 = 0; L0 < 12; L0++) {
			if (a1 == "button_day" + (L0 + 1)) {
				tv0 = L0;
				break;
			}
		}
		f_37_a1_v(tv0);
	}
}

void f_37_a1_v(int a0)
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

