event OnKeyDown 101;
event OnKeyUp 102;
event OnUpdate 1;
event OnMessage 200;
event OnDraw 0;

maintask t0
{
	var float tv0;
	var float tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var int tv6;
	var int tv7;
	var int tv8;
	var string tv9;
	var bool tv10;
	var bool tv11;
	var bool tv12;
	var object tv13;

	void init(void)
	{
		tv10 = false;
		tv11 = false;
		tv12 = false;
		tv1 = 0;
		tv5 = 0;
		tv0 = 0;
		@GetWindowSize(tv2, tv3);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ShowCursor(false);
		@CaptureKeyboard();
		@SetNeedUpdate(true);
		f_13a_a0_v();
		f_156_a0_v();
		@ProcessEvents();
	}

	bool f_1f_a0_b(void)
	{
		bool L0;
		if (tv6 == 1) {
			@IsSoundPlaying(L0, "intro_danko");
		} else {
			if (tv6 == 2) {
				@IsSoundPlaying(L0, "intro_burah");
			}
		}
		if (tv6 == 3) {
			@IsSoundPlaying(L0, "intro_klara");
		}
		if (tv6 == 0) {
			if (tv7) {
				@IsSoundPlaying(L0, "intro1");
			} else {
				@IsSoundPlaying(L0, "intro2");
			}
		}
		return L0;
	}

	void f_41_a1_v(int a0)
	{
		tv6 = a0;
		if (tv6 == 1) {
			@GetStringByID(tv9, 204);
			@PlaySound("intro_danko");
		} else {
			if (tv6 == 2) {
				@GetStringByID(tv9, 207);
				@PlaySound("intro_burah");
			} else {
				if (tv6 == 3) {
					@GetStringByID(tv9, 210);
					@PlaySound("intro_klara");
				} else {
					if (tv6 == 0) {
						@irand(tv7, 2);
						if (tv7) {
							@GetStringByID(tv9, 211);
							@PlaySound("intro1");
						} else {
							@GetStringByID(tv9, 212);
							@PlaySound("intro2");
						}
					} else {
						@GetStringByID(tv9, 600);
					}
				}
			}
		}
		@GetTextHeightInWidth(tv4, "intro_font", tv2 - tv5 * 2 - 8, tv9);
		tv10 = true;
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 40) {
			tv11 = true;
		} else {
			if (a0 == 38) {
				tv12 = true;
			} else {
				f_9e_a0_v();
			}
		}
	}

	void OnKeyUp(int a0)
	{
		if (a0 == 40) {
			tv11 = false;
		} else {
			if (a0 == 38) {
				tv12 = false;
			}
		}
	}

	void f_9e_a0_v(void)
	{
		@SendMessageToParent(0);
		tv10 = false;
		if (tv6 == 1) {
			@PauseSound("intro_danko");
		} else {
			if (tv6 == 2) {
				@PauseSound("intro_burah");
			} else {
				if (tv6 == 3) {
					@PauseSound("intro_klara");
				} else {
					if (tv7) {
						@PauseSound("intro1");
					} else {
						@PauseSound("intro2");
					}
				}
			}
		}
	}

	void OnUpdate(float a0)
	{
		float L0;
		if (!tv10) {
			return;
		}
		tv0 = tv0 + a0;
		L0 = 16.0;
		if (1 == tv6) {
			L0 = 16.0;
		} else {
			if (2 == tv6) {
				L0 = 16.0;
			} else {
				if (3 == tv6) {
					L0 = 11.0;
				}
			}
		}
		if (tv12) {
			L0 = L0 * 4.0;
		}
		if (tv11) {
			L0 = L0 / 4.0;
		}
		tv1 = tv1 + a0 * L0;
		if (tv1 > tv3 + tv4 && !f_1f_a0_b()) {
			f_9e_a0_v();
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "ul" || a1 == "bl" || a1 == "br" || a1 == "ur") {
			f_156_a0_v();
			return;
		}
		if (!tv10) {
			f_41_a1_v(a0);
		}
	}

	void OnDraw(void)
	{
		int L0;
		float L1;
		int L2;
		if (!tv10) {
			return;
		}
		L0 = tv1;
		L1 = tv1 - L0;
		@PrintInWidth(L2, "intro_font", tv5 + 4, tv3 - L0, tv2 - tv5 * 2 - 8, tv9, 0.24313725531101227, 0.12156862765550613, 0.11764705926179886, 1 - L1);
		@PrintInWidth(L2, "intro_font", tv5 + 4, tv3 - L0 - 1, tv2 - tv5 * 2 - 8, tv9, 0.24313725531101227, 0.12156862765550613, 0.11764705926179886, L1);
	}

	void f_13a_a0_v(void)
	{
		tv8 = 0;
		@CreateStringVector(tv13);
		tv13->add("ul");
		tv13->add("ur");
		tv13->add("br");
		tv13->add("ul");
		tv13->add("br");
		tv13->add("ul");
		tv13->add("bl");
		tv13->add("ul");
	}

	void f_156_a0_v(void)
	{
		string L0;
		int L1;
		tv13->get(L0, tv8);
		@SendMessage(0, L0);
		tv8 = tv8 + 1;
		tv13->size(L1);
		if (tv8 >= L1) {
			tv8 = tv8 - L1;
		}
	}
}

