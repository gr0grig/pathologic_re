event OnDraw 0;
event OnMessage 200;
event OnMouseWheel 15;

maintask t0
{
	var bool tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var int tv5;
	var int tv6;

	void init(void)
	{
		tv5 = 0;
		tv1 = 0;
		@GetWindowSize(tv3, tv4);
		f_14_a1_v(true);
		f_cb_a0_v();
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void f_14_a1_v(bool a0)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		tv6 = 0;
		@GetDiaryRoot(L0);
		L0->ChildCount(L1);
		L3 = 0;
		for (; L3 < L1; L3++) {
			object L4;
			L0->Child(L4, L3);
			L4->GetCategory(L2);
			if (L2 != tv5) {
				continue;
			}
			f_3c_a3_v(L4, 0, a0);
			tv6 = tv6 + 15;
		}
		tv2 = tv6 - tv4;
		if (tv2 < 0) {
			tv2 = 0;
		}
	}

	void OnDraw(void)
	{
		f_14_a1_v(false);
	}

	void f_3c_a3_v(object a0, int a1, bool a2)
	{
		int L0;
		int L1;
		string L2;
		int L3;
		int L4;
		int L5;
		a0->GetCategory(L0);
		if (L0 != tv5) {
			return;
		}
		a0->GetTextID(L1);
		@GetStringByID(L2, L1);
		if (a2) {
			@GetTextHeightInWidth(L3, "default", tv3 - a1, L2);
		} else {
			@PrintInWidth(L3, "default", a1, tv1 + tv6, tv3 - a1, L2, 1.0, 1.0, 1.0);
		}
		tv6 = tv6 + L3;
		a0->ChildCount(L4);
		L5 = 0;
		for (; L5 < L4; L5++) {
			object L6;
			int L7;
			a0->Child(L6, L5);
			L6->GetCategory(L7);
			if (L7 != tv5) {
				continue;
			}
			tv6 = tv6 + 10;
			f_3c_a3_v(L6, a1 + 20, a2);
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "scrollbar") {
			tv1 = -tv2 * a0 / 100;
			f_bc_a0_v();
			return;
		} else {
			if (a1 == "diary") {
				if (a0 < 1000) {
					tv5 = a0;
					tv1 = 0;
					f_14_a1_v(true);
					f_cb_a0_v();
				} else {
					if (a0 == 1000) {
						f_b2_a0_v();
					} else {
						if (a0 == 1001) {
							f_a8_a0_v();
						}
					}
				}
			}
		}
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		int L0;
		L0 = a2 * 15 * 2;
		tv1 = tv1 + L0;
		f_bc_a0_v();
		f_cb_a0_v();
	}

	void f_a8_a0_v(void)
	{
		int L0;
		L0 = 60;
		tv1 = tv1 + L0;
		f_bc_a0_v();
		f_cb_a0_v();
	}

	void f_b2_a0_v(void)
	{
		int L0;
		L0 = -60;
		tv1 = tv1 + L0;
		f_bc_a0_v();
		f_cb_a0_v();
	}

	void f_bc_a0_v(void)
	{
		if (tv2 == 0) {
			tv1 = 0;
			return;
		}
		if (-tv1 > tv2) {
			tv1 = -tv2;
		} else {
			if (tv1 > 0) {
				tv1 = 0;
			}
		}
	}

	void f_cb_a0_v(void)
	{
		if (tv2 == 0) {
			@SendMessage(16384, "scrollbar");
		} else {
			@SendMessage(-tv1 * 100 / tv2, "scrollbar");
		}
	}
}

