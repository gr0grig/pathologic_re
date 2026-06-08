event OnMouseWheel 15;
event OnDraw 0;
event OnLButtonDown 2;
event OnLButtonUp 3;
event OnMessage 200;
event OnMouseMove 8;

maintask t0
{
	var bool tv0;
	var bool tv1;
	var bool tv2;
	var int tv3;
	var int tv4;

	void init(void)
	{
		f_5_a1_v(true);
	}

	void f_5_a1_v(bool a0)
	{
		int L0;
		int L1;
		tv2 = a0;
		tv0 = false;
		tv1 = false;
		tv3 = 0;
		@SetOwnerDraw(true);
		@GetWindowSize(L0, L1);
		if (tv2) {
			tv4 = L1 - 14;
		} else {
			tv4 = L0 - 14;
		}
		@ProcessEvents();
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		@SendToParent();
	}

	void OnDraw(void)
	{
		if (tv1) {
			return;
		}
		if (tv0) {
			@Blit("slider_pressed", tv2 ? 0 : tv3, tv2 ? tv3 : 0);
		} else {
			@Blit("slider", tv2 ? 0 : tv3, tv2 ? tv3 : 0);
		}
	}

	void f_3e_a0_v(void)
	{
		int L0;
		L0 = tv3 * 100 / tv4;
		@SendMessageToParent(L0);
	}

	void OnLButtonDown(int a0, int a1)
	{
		int L0;
		if (tv1) {
			return;
		}
		if (f_cf_a2_b(a0, a1)) {
			@CaptureMouse();
			tv0 = true;
			return;
		}
		if (tv2) {
			L0 = a1;
		} else {
			L0 = a0;
		}
		if (L0 < 0) {
			L0 = 0;
		} else {
			if (L0 > tv4) {
				L0 = tv4;
			}
		}
		if (L0 > tv3) {
			int L1;
			L1 = L0 - tv3;
			L1 = L1 * 100 / tv4;
			if (L1 < 27) {
				tv3 = L0;
			} else {
				tv3 = tv3 + 27 * tv4 / 100;
			}
		} else {
			int L2;
			L2 = tv3 - L0;
			L2 = L2 * 100 / tv4;
			if (L2 < 27) {
				tv3 = L0;
			} else {
				tv3 = tv3 - 27 * tv4 / 100;
			}
		}
		f_3e_a0_v();
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
			tv3 = tv3 - 27 * tv4 / 100;
			if (tv3 < 0) {
				tv3 = 0;
			}
			f_3e_a0_v();
		} else {
			if (a1 == "scroll_button_down") {
				tv3 = tv3 + 27 * tv4 / 100;
				if (tv3 > tv4) {
					tv3 = tv4;
				}
				f_3e_a0_v();
			} else {
				if (16384 & a0) {
					tv1 = true;
				} else {
					tv1 = false;
				}
				tv3 = (16383 & a0) * tv4 / 100;
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
			if (tv2) {
				L0 = a1;
			} else {
				L0 = a0;
			}
			if (L0 < 0) {
				L0 = 0;
			} else {
				if (L0 > tv4) {
					L0 = tv4;
				}
			}
			tv3 = L0;
			f_3e_a0_v();
		}
	}

	bool f_cf_a2_b(int a0, int a1)
	{
		if (tv2) {
			if (a1 >= tv3 && a1 <= tv3 + 14) {
				return true;
			}
			return false;
		}
		if (a0 >= tv3 && a0 <= tv3 + 14) {
			return true;
		}
		return false;
	}
}

