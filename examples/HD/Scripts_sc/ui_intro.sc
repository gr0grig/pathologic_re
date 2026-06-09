event OnKeyDown 101;
event OnKeyUp 102;
event OnUpdate 1;
event OnMessage 200;
event OnDraw 0;

maintask t0
{
	var float tv0;
	var float tv1;
	var float tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var int tv6;
	var int tv7;
	var int tv8;
	var int tv9;
	var string tv10;
	var bool tv11;
	var bool tv12;
	var bool tv13;
	var object tv14;

	void init(void)
	{
		tv11 = false;
		tv12 = false;
		tv13 = false;
		tv2 = 0;
		tv6 = 0;
		tv1 = 0;
		@GetWindowSize(tv3, tv4);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ShowCursor(false);
		@CaptureKeyboard();
		@SetNeedUpdate(true);
		f_19c_a0_v();
		f_1b8_a0_v();
		@ProcessEvents();
	}

	bool f_1f_a0_b(void)
	{
		bool L0;
		if (tv7 == 1) {
			@IsSoundPlaying(L0, "intro_danko");
		} else {
			if (tv7 == 2) {
				@IsSoundPlaying(L0, "intro_burah");
			}
		}
		if (tv7 == 3) {
			@IsSoundPlaying(L0, "intro_klara");
		}
		if (tv7 == 0) {
			if (tv8) {
				@IsSoundPlaying(L0, "intro1");
			} else {
				@IsSoundPlaying(L0, "intro2");
			}
		}
		return L0;
	}

	void f_41_a1_v(int a0)
	{
		tv7 = a0;
		if (tv7 == 1) {
			@GetStringByID(tv10, 204);
			@PlaySound("intro_danko");
		} else {
			if (tv7 == 2) {
				@GetStringByID(tv10, 207);
				@PlaySound("intro_burah");
			} else {
				if (tv7 == 3) {
					@GetStringByID(tv10, 210);
					@PlaySound("intro_klara");
				} else {
					if (tv7 == 0) {
						@irand(tv8, 2);
						if (tv8) {
							@GetStringByID(tv10, 211);
							@PlaySound("intro1");
						} else {
							@GetStringByID(tv10, 212);
							@PlaySound("intro2");
						}
					} else {
						@GetStringByID(tv10, 600);
					}
				}
			}
		}
		@GetTextHeightInWidth(tv5, "intro_font", tv3 - tv6 * 2 - 8, tv10);
		tv11 = true;
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 40 || a0 == 268 || a0 == 274) {
			tv12 = true;
		} else {
			if (a0 == 38 || a0 == 267 || a0 == 272) {
				tv13 = true;
			} else {
				if (a0 == 27 || a0 == 32 || a0 == 257 || a0 == 262) {
					f_ee_a0_v();
				}
			}
		}
	}

	void OnKeyUp(int a0)
	{
		if (a0 == 40 || a0 == 268 || a0 == 274) {
			tv12 = false;
		} else {
			if (a0 == 38 || a0 == 267 || a0 == 272) {
				tv13 = false;
			}
		}
	}

	void f_ee_a0_v(void)
	{
		@SendMessageToParent(0);
		tv11 = false;
		if (tv7 == 1) {
			@PauseSound("intro_danko");
		} else {
			if (tv7 == 2) {
				@PauseSound("intro_burah");
			} else {
				if (tv7 == 3) {
					@PauseSound("intro_klara");
				} else {
					if (tv8) {
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
		if (!tv11) {
			return;
		}
		tv1 = tv1 + a0;
		L0 = 16.0;
		if (1 == tv7) {
			L0 = 16.0;
		} else {
			if (2 == tv7) {
				L0 = 16.0;
			} else {
				if (3 == tv7) {
					L0 = 11.0;
				}
			}
		}
		if (tv13) {
			L0 = L0 * 4.0;
		}
		if (tv12) {
			L0 = L0 / 4.0;
		}
		tv2 = tv2 + a0 * L0;
		if (tv2 > tv4 + tv5 && !f_1f_a0_b()) {
			f_ee_a0_v();
		}
		if (tv2 > tv5 && !f_1f_a0_b()) {
			tv0 = tv0 + a0;
			if (tv0 > 1) {
				f_ee_a0_v();
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "ul" || a1 == "bl" || a1 == "br" || a1 == "ur") {
			f_1b8_a0_v();
			return;
		}
		if (!tv11) {
			f_41_a1_v(a0);
		}
	}

	void OnDraw(void)
	{
		int L0;
		float L1;
		int L2;
		if (!tv11) {
			return;
		}
		L0 = tv2;
		L1 = tv2 - L0;
		@PrintInWidth(L2, "intro_font", tv6 + 4, tv4 - L0, tv3 - tv6 * 2 - 8, tv10, 0.24313725531101227, 0.12156862765550613, 0.11764705926179886, 1 - L1);
		@PrintInWidth(L2, "intro_font", tv6 + 4, tv4 - L0 - 1, tv3 - tv6 * 2 - 8, tv10, 0.24313725531101227, 0.12156862765550613, 0.11764705926179886, L1);
	}

	void f_19c_a0_v(void)
	{
		tv9 = 0;
		@CreateStringVector(tv14);
		tv14->add("ul");
		tv14->add("ur");
		tv14->add("br");
		tv14->add("ul");
		tv14->add("br");
		tv14->add("ul");
		tv14->add("bl");
		tv14->add("ul");
	}

	void f_1b8_a0_v(void)
	{
		string L0;
		int L1;
		tv14->get(L0, tv9);
		@SendMessage(0, L0);
		tv9 = tv9 + 1;
		tv14->size(L1);
		if (tv9 >= L1) {
			tv9 = tv9 - L1;
		}
	}
}

