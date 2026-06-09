event OnChar 100;
event OnKeyDown 101;
event OnKeyUp 102;
event OnMessage 200;

maintask t0
{
	var int tv0;

	void init(void)
	{
		@GetDiarySelectedSection(tv0);
		@SetCursor("default");
		@ShowCursor();
		f_93_a1_v(tv0);
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@SetDiarySelectedSection(tv0);
		@DestroyWindow();
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 266) {
			if (tv0 == 0) {
				tv0 = 1;
				f_93_a1_v(tv0);
			} else {
				if (tv0 == 1) {
					tv0 = 2;
					f_93_a1_v(tv0);
				} else {
					if (tv0 == 2) {
						tv0 = 0;
						f_93_a1_v(tv0);
					}
				}
			}
		} else {
			if (a0 == 265) {
				if (tv0 == 0) {
					tv0 = 2;
					f_93_a1_v(tv0);
				} else {
					if (tv0 == 1) {
						tv0 = 0;
						f_93_a1_v(tv0);
					} else {
						if (tv0 == 2) {
							tv0 = 1;
							f_93_a1_v(tv0);
						}
					}
				}
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
		if (a1 == "button_mission") {
			tv0 = 0;
			f_93_a1_v(tv0);
		} else {
			if (a1 == "button_daytasks") {
				tv0 = 1;
				f_93_a1_v(tv0);
			} else {
				if (a1 == "button_othertasks") {
					tv0 = 2;
					f_93_a1_v(tv0);
				}
			}
		}
	}
}

void f_93_a1_v(int a0)
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

