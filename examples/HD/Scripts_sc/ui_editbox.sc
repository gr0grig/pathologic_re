event OnDraw 0;
event OnUpdate 1;
event OnChar 100;
event OnKeyDown 101;
event OnLButtonDown 2;

maintask t0
{
	var string tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var float tv5;
	var bool tv6;

	void init(void)
	{
		@GetWindowSize(tv2, tv3);
		tv6 = false;
		f_14_a0_v();
		@SetBackground("default");
		@SetNeedUpdate(true);
		@SetOwnerDraw(true);
		@EnableClipping();
		@ProcessEvents();
	}

	void f_14_a0_v(void)
	{
		@_strlen(tv1, tv0);
	}

	void f_17_a0_v(void)
	{
		tv1 = 0;
	}

	void f_19_a0_v(void)
	{
		tv1 = tv1 + -1;
		if (tv1 < 0) {
			tv1 = 0;
		}
	}

	void f_20_a0_v(void)
	{
		int L0;
		tv1 = tv1 + 1;
		@_strlen(L0, tv0);
		if (tv1 > L0) {
			tv1 = L0;
		}
	}

	void f_29_a1_v(int a0)
	{
		string L0;
		string L1;
		string L2;
		if (f_b8_a1_b(a0)) {
			return;
		}
		L0 = (cstring)a0;
		@_strsub(L1, tv0, 0, tv1);
		@_strsub(L2, tv0, tv1);
		L1 = L1 + L0;
		tv0 = L1 + L2;
		tv1 = tv1 + 1;
	}

	void f_3b_a0_v(void)
	{
		string L0;
		string L1;
		if (tv1 == 0) {
			return;
		}
		@_strsub(L0, tv0, 0, tv1 - 1);
		@_strsub(L1, tv0, tv1);
		tv0 = L0 + L1;
		tv1 = tv1 + -1;
	}

	void OnDraw(void)
	{
		int L0;
		int L1;
		@GetTextWidth(L0, "default", tv0, tv1);
		if (L0 > tv2 - 1) {
			L1 = L0 - tv2 + 1;
		} else {
			L1 = 0;
		}
		@Print("default", -L1, 0, tv0);
		if (sin(tv5) > 0.5 && tv6) {
			@Blit("text_cursor", L0 - L1, 0);
		}
	}

	void OnUpdate(float a0)
	{
		tv5 = tv5 + a0 * 3.1414999961853027;
		if (tv5 > 3.1414999961853027) {
			tv5 = tv5 - 3.1414999961853027;
		}
	}

	void OnChar(int a0)
	{
		if (a0 == 8) {
			return;
		}
		if (a0 == 13) {
			object L0;
			@CreateStringVector(L0);
			L0->add(tv0);
			@SendMessageToParent(0, L0);
			return;
		}
		f_29_a1_v(a0);
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 37) {
			f_19_a0_v();
		} else {
			if (a0 == 39) {
				f_20_a0_v();
			} else {
				if (a0 == 35) {
					f_14_a0_v();
				} else {
					if (a0 == 36) {
						f_17_a0_v();
					} else {
						if (a0 == 8) {
							f_3b_a0_v();
						}
					}
				}
			}
		}
	}

	void OnLButtonDown(int a0, int a1)
	{
		if (!tv6) {
			@CaptureKeyboard();
		}
		tv6 = true;
	}
}

bool f_b8_a1_b(int a0)
{
	bool L0;
	@FontHasCharacterGlyph(L0, "default", a0);
	return !L0;
}

