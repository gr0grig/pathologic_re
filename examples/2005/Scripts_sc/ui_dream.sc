event OnDestroyWindow 14;
event OnUpdate 1;
event OnChar 100;
event OnMessage 200;

maintask t0
{
	var bool tv0;
	var float tv1;
	var float tv2;

	void init(void)
	{
		@CaptureKeyboard();
		tv2 = 6.0;
		tv0 = false;
		f_60_a0_v();
		@SendMessage(100 * tv2 / 6.0, "dream_progress");
		@SendMessage(701, "health_text");
		@SendMessage(702, "immunity_text");
		@SendMessage(703, "hunger_text");
		@SendMessage(704, "tiredness_text");
		@SendMessage(705, "infection_text");
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnDestroyWindow(void)
	{
		object L0;
		object L1;
		@GetPlayer(L0);
		L0->SetProperty("sleeping", false);
		@CreateFloatVector(L1);
		L1->add(0);
		@SendWorldWndMessage(11, L1);
		@SendWorldWndMessage(12, L1);
		@SendWorldWndMessage(13, L1);
		@SendWorldWndMessage(14, L1);
		@SendWorldWndMessage(15, L1);
		@SendWorldWndMessage(16, L1);
	}

	void f_53_a0_v(void)
	{
		object L0;
		@GetPlayer(L0);
		L0->SetProperty("sleeping", true);
		@BeginPlayerUpdate();
		tv1 = 0;
	}

	void f_5f_a0_v(void)
	{
	}

	void f_60_a0_v(void)
	{
		float L0;
		@GetPlayerHealth(L0);
		@SendMessage(100 * L0, "health");
		if (L0 <= 0) {
			f_5f_a0_v();
			@DestroyWindow();
			return;
		}
		@GetPlayerImmunity(L0);
		@SendMessage(100 * L0, "immunity");
		@GetPlayerHunger(L0);
		@SendMessage(100 * L0, "hunger");
		@GetPlayerTiredness(L0);
		@SendMessage(100 * L0, "tiredness");
		@GetPlayerDisease(L0);
		@SendMessage(100 * L0, "infection");
	}

	void OnUpdate(float a0)
	{
		float L0;
		int L1;
		if (!tv0) {
			return;
		}
		@GetGameTimeScale(L0);
		@AdvanceGameTime(a0 * L0 * 200.0);
		f_60_a0_v();
		tv1 = tv1 + a0;
		if (200.0 * tv1 * L0 > tv2) {
			f_5f_a0_v();
			@DestroyWindow();
		}
		L1 = 100 * (tv2 - 200.0 * tv1 * L0) / 6.0;
		@SendMessage(L1, "dream_progress");
	}

	void OnChar(int a0)
	{
		if (tv0) {
			f_5f_a0_v();
		}
		@DestroyWindow();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "dream_button") {
			if (tv0) {
				f_5f_a0_v();
				@DestroyWindow();
			} else {
				tv0 = true;
				f_53_a0_v();
			}
		} else {
			if (a1 == "button_plus") {
				if (tv0) {
					return;
				}
				tv2 = tv2 + 1;
				if (tv2 > 6.0) {
					tv2 = 6.0;
				} else {
					int L0;
					L0 = tv2 / 1;
					tv2 = L0 * 1;
				}
				@SendMessage(100 * tv2 / 6.0, "dream_progress");
			} else {
				if (a1 == "button_minus") {
					if (tv0) {
						return;
					}
					tv2 = tv2 - 1;
					if (tv2 < 1) {
						tv2 = 1;
					} else {
						int L1;
						L1 = tv2 / 1;
						tv2 = L1 * 1;
					}
					@SendMessage(100 * tv2 / 6.0, "dream_progress");
				}
			}
		}
	}
}

