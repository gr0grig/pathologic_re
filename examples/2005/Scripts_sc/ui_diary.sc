event OnChar 100;
event OnMessage 200;

maintask t0
{
	var int tv0;

	void init(void)
	{
		@GetDiarySelectedSection(tv0);
		@SetCursor("default");
		@ShowCursor();
		f_35_a1_v(tv0);
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@SetDiarySelectedSection(tv0);
		@DestroyWindow();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "button_mission") {
			tv0 = 0;
			f_35_a1_v(tv0);
		} else {
			if (a1 == "button_daytasks") {
				tv0 = 1;
				f_35_a1_v(tv0);
			} else {
				if (a1 == "button_othertasks") {
					tv0 = 2;
					f_35_a1_v(tv0);
				}
			}
		}
	}
}

void f_35_a1_v(int a0)
{
	if (a0 != 0) {
		@SendMessage(0, "button_mission");
	} else {
		@SendMessage(1, "button_mission");
	}
	if (a0 != 1) {
		@SendMessage(0, "button_daytasks");
	} else {
		@SendMessage(1, "button_daytasks");
	}
	if (a0 != 2) {
		@SendMessage(0, "button_othertasks");
	} else {
		@SendMessage(1, "button_othertasks");
	}
	@SendMessage(a0, "text");
}

