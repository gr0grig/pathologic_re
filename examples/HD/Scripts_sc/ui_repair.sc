event OnKeyDown 101;
event OnKeyUp 102;
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
	var int tv6;

	void init(void)
	{
		int L0;
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		tv3 = f_288_a0_i();
		@GetChooseItems(tv0);
		@GetAdditionalData(tv1);
		@GetReturnValue(tv2);
		tv6 = 2;
		for (L0 = 0; L0 < 4; L0++) {
			object L1;
			string L2;
			string L3;
			@CreateStringVector(L1);
			if (L0 - 1 >= 0) {
				L2 = f_266_a1_s(L0 - 1);
			} else {
				L2 = "$parent";
			}
			if (L0 + 1 < 4) {
				L3 = f_266_a1_s(L0 + 1);
			} else {
				L3 = "$parent";
			}
			L1->add(L2);
			L1->add(L3);
			@SendMessage(-1, f_266_a1_s(L0), L1);
		}
		@SendMessage(-6, f_266_a1_s(0));
		f_172_a0_v();
		f_18f_a0_v();
		@ProcessEvents();
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 267) {
			if (tv6 == 0) {
				tv6 = 1;
				@SendMessage(-4, "cancel");
			} else {
				if (tv6 == 1 || tv6 == 2) {
					int L0;
					tv6 = 2;
					for (L0 = 0; L0 < 4; L0++) {
						@SendMessage(-7, f_266_a1_s(L0));
					}
				}
			}
		}
		if (a0 == 268) {
			if (tv6 == 1 || tv6 == 0) {
				tv6 = 0;
				@SendMessage(-4, "ok");
			} else {
				if (tv6 == 2) {
					tv6 = 1;
					@SendMessage(-4, "cancel");
				}
			}
		}
		if (a0 == 269) {
			int L1;
			for (L1 = 0; L1 < 4; L1++) {
				if (tv6 == 2) {
					@SendMessage(-2, f_266_a1_s(L1));
				}
			}
		}
		if (a0 == 270) {
			int L2;
			for (L2 = 0; L2 < 4; L2++) {
				if (tv6 == 2) {
					@SendMessage(-3, f_266_a1_s(L2));
				}
			}
		}
	}

	void OnKeyUp(int a0)
	{
		if (a0 == 272) {
			if (tv6 == 0) {
				tv6 = 1;
				@SendMessage(-4, "cancel");
			} else {
				if (tv6 == 1 || tv6 == 2) {
					int L0;
					tv6 = 2;
					for (L0 = 0; L0 < 4; L0++) {
						@SendMessage(-7, f_266_a1_s(L0));
					}
				}
			}
		}
		if (a0 == 274) {
			if (tv6 == 1 || tv6 == 0) {
				tv6 = 0;
				@SendMessage(-4, "ok");
			} else {
				if (tv6 == 2) {
					tv6 = 1;
					@SendMessage(-4, "cancel");
				}
			}
		}
		if (a0 == 273) {
			int L1;
			for (L1 = 0; L1 < 4; L1++) {
				if (tv6 == 2) {
					@SendMessage(-2, f_266_a1_s(L1));
				}
			}
		}
		if (a0 == 271) {
			int L2;
			for (L2 = 0; L2 < 4; L2++) {
				if (tv6 == 2) {
					@SendMessage(-3, f_266_a1_s(L2));
				}
			}
		}
	}

	bool f_129_a1_b(int a0)
	{
		int L0;
		int L1;
		tv2->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			int L2;
			tv2->get(L2, L1);
			if (L2 == a0) {
				return true;
			}
		}
		return false;
	}

	void f_13a_a1_v(int a0)
	{
		int L0;
		if (f_129_a1_b(a0)) {
			return;
		}
		tv1->get(L0, a0);
		if (tv3 >= L0) {
			tv3 = tv3 - L0;
			tv4 = tv4 + L0;
			tv2->add(a0);
		}
	}

	void f_14a_a1_v(int a0)
	{
		int L0;
		int L1;
		tv2->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
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
		f_172_a0_v();
		f_18f_a0_v();
	}

	void f_172_a0_v(void)
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

	void f_18f_a0_v(void)
	{
		int L0;
		int L1;
		@SendMessage(f_288_a0_i(), "money_slot");
		@SendMessage(tv4, "sel_money_slot");
		tv0->size(L0);
		L1 = tv5;
		for (; L1 < tv5 + 4; L1++) {
			if (L1 < L0) {
				object L2;
				int L3;
				tv0->get(L2, L1);
				tv1->get(L3, L1);
				if (f_129_a1_b(L1)) {
					@SendMessage(16384 | L3, f_266_a1_s(L1 - tv5), L2);
				} else {
					@SendMessage(L3, f_266_a1_s(L1 - tv5), L2);
				}
			} else {
				@SendMessage(32768, f_266_a1_s(L1 - tv5));
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a0 == -4) {
			if (a1 == f_266_a1_s(0)) {
				if (tv5 > 0) {
					tv5 = tv5 + -1;
					f_18f_a0_v();
					f_172_a0_v();
				}
			} else {
				if (a1 == f_266_a1_s(3)) {
					int L0;
					tv0->size(L0);
					if (tv5 + 4 <= L0) {
						tv5 = tv5 + 1;
						f_18f_a0_v();
						f_172_a0_v();
					}
				}
			}
			@SendMessage(-4, a1);
			return;
		}
		if (a0 == -11) {
			tv6 = 0;
			return;
		}
		if (a0 == -12) {
			tv6 = 1;
			return;
		}
		if (a0 == -9) {
			tv6 = 2;
			return;
		}
		if (a0 < 0) {
			return;
		}
		if (a1 == "ok") {
			f_246_a0_v();
		} else {
			if (a1 == "cancel") {
				f_249_a0_v();
			} else {
				if (a1 == "scrollbar") {
					int L1;
					tv0->size(L1);
					tv5 = 0.009999999776482582 * (L1 - 4) * a0 + 0.5;
					if (tv5 < 0) {
						tv5 = 0;
					}
					f_172_a0_v();
					f_18f_a0_v();
				} else {
					int L2;
					L2 = f_276_a2_i(a0, a1);
					if (L2 != -1) {
						if (a0 == 0) {
							f_254_a1_v(L2 + tv5);
						} else {
							if (a0 == 1) {
								f_25d_a1_v(L2 + tv5);
							}
						}
					}
				}
			}
		}
	}

	void f_246_a0_v(void)
	{
		@DestroyWindow();
	}

	void f_249_a0_v(void)
	{
		tv2->clear();
		tv3 = f_288_a0_i();
		tv4 = 0;
		f_18f_a0_v();
	}

	void f_254_a1_v(int a0)
	{
		f_13a_a1_v(a0);
		f_18f_a0_v();
	}

	void f_25d_a1_v(int a0)
	{
		f_14a_a1_v(a0);
		f_18f_a0_v();
	}
}

string f_266_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

int f_276_a2_i(int a0, string a1)
{
	int L0;
	for (L0 = 0; L0 < 4; L0++) {
		if (a1 == f_266_a1_s(L0)) {
			return L0;
		}
	}
	return -1;
}

int f_288_a0_i(void)
{
	object L0;
	int L1;
	@FindActor(L0, "player");
	L0->GetProperty("money", L1);
	return L1;
}

