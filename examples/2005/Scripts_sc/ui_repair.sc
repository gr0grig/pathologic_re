event OnChar 100;
event OnMouseWheel 15;
event OnMessage 200;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var int tv3;
	var int tv4;
	var int tv5;

	void init(void)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		tv3 = f_13c_a0_i();
		@GetChooseItems(tv0);
		@GetAdditionalData(tv1);
		@GetReturnValue(tv2);
		f_66_a0_v();
		f_83_a0_v();
		@ProcessEvents();
	}

	bool f_1d_a1_b(int a0)
	{
		int L0;
		int L1;
		tv2->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			int L2;
			tv2->get(L2, L1);
			if (L2 == a0) {
				return true;
			}
		}
		return false;
	}

	void f_2e_a1_v(int a0)
	{
		int L0;
		if (f_1d_a1_b(a0)) {
			return;
		}
		tv1->get(L0, a0);
		if (tv3 >= L0) {
			tv3 = tv3 - L0;
			tv4 = tv4 + L0;
			tv2->add(a0);
		}
	}

	void f_3e_a1_v(int a0)
	{
		int L0;
		int L1;
		tv2->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			int L2;
			tv2->get(L2, L1);
			if (L2 == a0) {
				int L3;
				tv2->remove(L1);
				tv1->get(L3, a0);
				tv3 = tv3 + L3;
				tv4 = tv4 - L3;
				break;
			}
		}
	}

	void OnChar(int a0)
	{
		tv2->clear();
		@DestroyWindow();
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		tv5 = tv5 + a2;
		if (tv5 < 0) {
			tv5 = 0;
		}
		f_66_a0_v();
		f_83_a0_v();
	}

	void f_66_a0_v(void)
	{
		int L0;
		tv0->size(L0);
		if (L0 <= 4) {
			@SendMessage(16384, "scrollbar");
			tv5 = 0;
		} else {
			if (tv5 + 4 > L0) {
				int L1;
				tv5 = tv5 - (tv5 + 4 - L0);
				L1 = tv5 * 100 / (L0 - 4);
				@SendMessage(L1, "scrollbar");
			}
		}
	}

	void f_83_a0_v(void)
	{
		int L0;
		int L1;
		@SendMessage(f_13c_a0_i(), "money_slot");
		@SendMessage(tv4, "sel_money_slot");
		tv0->size(L0);
		for (L1 = tv5; L1 < tv5 + 4; L1 = L1 + 1) {
			if (L1 < L0) {
				object L2;
				int L3;
				tv0->get(L2, L1);
				tv1->get(L3, L1);
				if (f_1d_a1_b(L1)) {
					@SendMessage(16384 | L3, f_11a_a1_s(L1 - tv5), L2);
				} else {
					@SendMessage(L3, f_11a_a1_s(L1 - tv5), L2);
				}
			} else {
				@SendMessage(32768, f_11a_a1_s(L1 - tv5));
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "ok") {
			f_fa_a0_v();
		} else {
			if (a1 == "cancel") {
				f_fd_a0_v();
			} else {
				if (a1 == "scrollbar") {
					int L0;
					tv0->size(L0);
					tv5 = 0.009999999776482582 * (L0 - 4) * a0 + 0.5;
					if (tv5 < 0) {
						tv5 = 0;
					}
					f_66_a0_v();
					f_83_a0_v();
				} else {
					int L1;
					L1 = f_12a_a2_i(a0, a1);
					if (L1 != -1) {
						if (a0 == 0) {
							f_108_a1_v(L1 + tv5);
						} else {
							if (a0 == 1) {
								f_111_a1_v(L1 + tv5);
							}
						}
					}
				}
			}
		}
	}

	void f_fa_a0_v(void)
	{
		@DestroyWindow();
	}

	void f_fd_a0_v(void)
	{
		tv2->clear();
		tv3 = f_13c_a0_i();
		tv4 = 0;
		f_83_a0_v();
	}

	void f_108_a1_v(int a0)
	{
		f_2e_a1_v(a0);
		f_83_a0_v();
	}

	void f_111_a1_v(int a0)
	{
		f_3e_a1_v(a0);
		f_83_a0_v();
	}
}

string f_11a_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

int f_12a_a2_i(int a0, string a1)
{
	int L0;
	for (L0 = 0; L0 < 4; L0 = L0 + 1) {
		if (a1 == f_11a_a1_s(L0)) {
			return L0;
		}
	}
	return -1;
}

int f_13c_a0_i(void)
{
	object L0;
	int L1;
	@FindActor(L0, "player");
	L0->GetProperty("money", L1);
	return L1;
}

