event OnDraw 0;
event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMessage 200;
event OnMouseMove 8;

maintask t0
{
	var bool tv0;
	var bool tv1;
	var int tv2;
	var int tv3;

	void init(void)
	{
		int L0;
		int L1;
		tv0 = false;
		tv1 = false;
		tv2 = 0;
		@SetOwnerDraw(true);
		@GetWindowSize(L0, L1);
		tv3 = L1 - 14;
		@Trace("iMouseMax " + tv3);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		if (tv1) {
			return;
		}
		if (tv0) {
			@Blit("slider_pressed", 0, tv2);
		} else {
			@Blit("slider", 0, tv2);
		}
	}

	void f_21_a0_v(void)
	{
		int L0;
		L0 = tv2 * 100 / tv3;
		@SendMessageToParent(L0);
	}

	void OnLButtonDown(int a0, int a1)
	{
		int L0;
		if (tv1) {
			return;
		}
		if (f_b2_a2_b(a0, a1)) {
			@CaptureMouse();
			tv0 = true;
			return;
		}
		L0 = a1;
		if (L0 < 0) {
			L0 = 0;
		} else {
			if (L0 > tv3) {
				L0 = tv3;
			}
		}
		if (L0 > tv2) {
			int L1;
			L1 = L0 - tv2;
			L1 = L1 * 100 / tv3;
			if (L1 < 27) {
				tv2 = L0;
			} else {
				tv2 = tv2 + 27 * tv3 / 100;
			}
		} else {
			int L2;
			L2 = tv2 - L0;
			L2 = L2 * 100 / tv3;
			if (L2 < 27) {
				tv2 = L0;
			} else {
				tv2 = tv2 - 27 * tv3 / 100;
			}
		}
		f_21_a0_v();
	}

	void OnLButtonUp(int a0, int a1)
	{
		if (tv1) {
			return;
		}
		tv0 = false;
		@ReleaseMouse();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "scroll_button_up") {
			tv2 = tv2 - 27 * tv3 / 100;
			if (tv2 < 0) {
				tv2 = 0;
			}
			@Trace("scroll up " + tv2);
			f_21_a0_v();
		} else {
			if (a1 == "scroll_button_down") {
				tv2 = tv2 + 10;
				if (tv2 > tv3) {
					tv2 = tv3;
				}
				@Trace("scroll down " + tv2 + " " + tv3);
				f_21_a0_v();
			} else {
				if (16384 & a0) {
					tv1 = true;
				} else {
					tv1 = false;
				}
				tv2 = (16383 & a0) * tv3 / 100;
			}
		}
	}

	void OnMouseMove(int a0, int a1)
	{
		if (tv1) {
			return;
		}
		if (tv0) {
			int L0;
			L0 = a1;
			if (L0 < 0) {
				L0 = 0;
			} else {
				if (L0 > tv3) {
					L0 = tv3;
				}
			}
			tv2 = L0;
			f_21_a0_v();
		}
	}

	bool f_b2_a2_b(int a0, int a1)
	{
		if (a1 >= tv2 && a1 <= tv2 + 14) {
			return true;
		}
		return false;
	}
}

