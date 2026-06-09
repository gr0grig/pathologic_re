event OnChar 100;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var object tv10;
	var object tv11;
	var object tv12;
	var object tv13;
	var object tv14;
	var object tv15;
	var object tv16;
	var object tv17;
	var object tv18;
	var object tv19;
	var object tv20;
	var object tv21;
	var object tv22;
	var object tv23;
	var int tv24;
	var int tv25;
	var object tv26;

	void f_0_a1_v(object a0)
	{
		int L0;
		object L1;
		int L2;
		tv21->size(L0);
		for (L2 = 0; L2 < L0; L2++) {
			tv21->get(L1, L2);
			if (f_6c7_a2_b(L1, a0)) {
				tv21->remove(L2);
				return;
			}
		}
		tv20->add(a0);
	}

	void f_18_a1_v(object a0)
	{
		int L0;
		object L1;
		int L2;
		tv20->size(L0);
		for (L2 = 0; L2 < L0; L2++) {
			tv20->get(L1, L2);
			if (f_6c7_a2_b(L1, a0)) {
				tv20->remove(L2);
				return;
			}
		}
		tv21->add(a0);
	}

	void init(void)
	{
		float L0;
		@GetContainer(tv26);
		@CreateObjectVector(tv20);
		@CreateObjectVector(tv21);
		@CreateObjectVector(tv4);
		@CreateIntVector(tv5);
		@CreateIntVector(tv6);
		@CreateObjectVector(tv7);
		@CreateIntVector(tv8);
		@CreateIntVector(tv9);
		@CreateObjectVector(tv10);
		@CreateIntVector(tv11);
		@CreateObjectVector(tv12);
		@CreateIntVector(tv13);
		@CreateObjectVector(tv14);
		@CreateIntVector(tv15);
		@CreateObjectVector(tv16);
		@CreateIntVector(tv17);
		@CreateObjectVector(tv18);
		@CreateIntVector(tv19);
		tv25 = f_616_a0_i();
		f_10e_a0_v();
		@GetGameTime(L0);
		tv24 = 1 + L0 / 24;
		@ShowCursor();
		@SetCursor("default");
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		int L0;
		L0 = f_5be_a2_i(a0, a1);
		if (L0 != -1) {
			if (a0 == 0) {
				f_46b_a1_v(L0);
			} else {
				f_4ad_a1_v(L0);
			}
			return;
		}
		L0 = f_5d0_a2_i(a0, a1);
		if (L0 != -1) {
			if (a0 == 0) {
				f_4ed_a1_v(L0);
			} else {
				f_52c_a1_v(L0);
			}
			return;
		}
		if (a1 == "cancel_button") {
			f_10e_a0_v();
			return;
		}
		if (a1 == "background_left") {
			@Trace("background_left" + a0);
			tv0 = tv0 + 2 * a0;
			f_274_a0_v();
		}
		if (a1 == "background_right") {
			@Trace("background_right" + a0);
			tv1 = tv1 + 2 * a0;
			f_2cf_a0_v();
		}
		if (a1 == "l_scroll_button_top") {
			tv0 = tv0 - 2;
			f_274_a0_v();
			return;
		}
		if (a1 == "l_scroll_button_bottom") {
			tv0 = tv0 + 2;
			f_274_a0_v();
			return;
		}
		if (a1 == "r_scroll_button_top") {
			tv1 = tv1 - 2;
			f_2cf_a0_v();
			return;
		}
		if (a1 == "r_scroll_button_bottom") {
			tv1 = tv1 + 2;
			f_2cf_a0_v();
			return;
		}
		if (a1 == "l_scrollbar") {
			tv0 = f_250_a0_i() * a0 / 100.0 + 0.5;
			tv0 = tv0 * 2;
			f_274_a0_v();
			return;
		}
		if (a1 == "r_scrollbar") {
			tv1 = f_262_a0_i() * a0 / 100.0 + 0.5;
			tv1 = tv1 * 2;
			f_2cf_a0_v();
			return;
		}
		if (a1 == "ok_button") {
			f_332_a0_v();
			return;
		}
	}

	void f_10e_a0_v(void)
	{
		int L0;
		tv0 = 0;
		tv1 = 0;
		tv3 = 0;
		if (tv25 == 0) {
			@GetPlayerMoneyCount(tv2);
		} else {
			tv2 = 0;
		}
		tv20->clear();
		tv21->clear();
		tv4->clear();
		tv5->clear();
		tv6->clear();
		tv7->clear();
		tv8->clear();
		tv9->clear();
		tv10->clear();
		tv11->clear();
		tv12->clear();
		tv13->clear();
		tv14->clear();
		tv15->clear();
		tv16->clear();
		tv17->clear();
		tv18->clear();
		tv19->clear();
		f_1ed_a0_v();
		f_16f_a0_v();
		f_20c_a0_v();
		f_274_a0_v();
		f_32e_a0_v();
		f_2cf_a0_v();
		f_32a_a0_v();
		tv7->size(L0);
		if (L0 <= 18) {
			@SendMessage(16384, "l_scrollbar");
		} else {
			@SendMessage(0, "l_scrollbar");
		}
		tv4->size(L0);
		if (L0 <= 18) {
			@SendMessage(16384, "r_scrollbar");
		} else {
			@SendMessage(0, "r_scrollbar");
		}
	}

	void f_16f_a0_v(void)
	{
		f_1a2_a2_v(0, false);
		f_1a2_a2_v(1, false);
		f_1a2_a2_v(2, false);
		f_1a2_a2_v(3, false);
		f_1a2_a2_v(4, false);
		f_1a2_a2_v(0, true);
		f_1a2_a2_v(1, true);
		f_1a2_a2_v(2, true);
		f_1a2_a2_v(3, true);
		f_1a2_a2_v(4, true);
	}

	void f_1a2_a2_v(int a0, bool a1)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		L1 = f_695_a1_i(a0);
		L3 = 0;
		for (; L3 < L1; L3++) {
			if (f_6ae_a2_b(a0, L3)) {
				continue;
			}
			L2 = f_6a6_a2_i(a0, L3);
			L0 = f_69d_a2_o(a0, L3);
			if (a1 && f_6d4_a3_b(L0, tv25, true)) {
				tv4->add(L0);
				tv5->add(L2);
				tv6->add(0);
			} else {
				if (!a1 && !f_6d4_a3_b(L0, tv25, true)) {
					tv4->add(L0);
					tv5->add(L2);
					tv6->add(0);
				}
			}
		}
	}

	void f_1ed_a0_v(void)
	{
		int L0;
		int L1;
		object L2;
		object L3;
		int L4;
		L0 = f_68d_a0_i();
		for (L4 = 0; L4 < L0; L4++) {
			L1 = f_6bf_a1_i(L4);
			L3 = f_6b6_a1_o(L4);
			tv7->add(L3);
			tv8->add(L1);
			tv9->add(0);
		}
	}

	void f_20c_a0_v(void)
	{
		f_22b_a3_v(0, tv10, tv11);
		f_22b_a3_v(1, tv12, tv13);
		f_22b_a3_v(2, tv14, tv15);
		f_22b_a3_v(3, tv16, tv17);
		f_22b_a3_v(4, tv18, tv19);
	}

	void f_22b_a3_v(int a0, object a1, object a2)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		L1 = f_695_a1_i(a0);
		L3 = 0;
		for (; L3 < L1; L3++) {
			if (f_6ae_a2_b(a0, L3)) {
				continue;
			}
			L2 = f_6a6_a2_i(a0, L3);
			L0 = f_69d_a2_o(a0, L3);
			a1->add(L0);
			a2->add(L2);
		}
	}

	int f_250_a0_i(void)
	{
		int L0;
		int L1;
		tv7->size(L0);
		L1 = (L0 + 2 - 1) / 2 - 9;
		if (L1 < 0) {
			return 0;
		}
		return L1;
	}

	int f_262_a0_i(void)
	{
		int L0;
		int L1;
		tv4->size(L0);
		L1 = (L0 + 2 - 1) / 2 - 9;
		if (L1 < 0) {
			return 0;
		}
		return L1;
	}

	void f_274_a0_v(void)
	{
		int L0;
		int L1;
		int L2;
		tv7->size(L0);
		if (tv0 + 18 > L0) {
			if (L0 % 2 == 0) {
				tv0 = tv0 - (tv0 + 18 - L0);
			} else {
				tv0 = tv0 - (tv0 + 18 - L0 - 1);
			}
		}
		if (tv0 < 0) {
			tv0 = 0;
		}
		L2 = tv0;
		for (; L2 < tv0 + 18; L2++) {
			if (L2 < L0) {
				object L3;
				int L4;
				int L5;
				object L6;
				tv7->get(L3, L2);
				tv8->get(L4, L2);
				L1 = 0;
				L5 = f_57b_a1_i(L2 - tv0);
				if (L5 > 0) {
					L1 = L1 | 16384;
				}
				if (f_6d4_a3_b(L3, tv25, false)) {
					L1 = L1 | 131072;
				}
				@CreateIntVector(L6);
				L6->add(L5);
				L6->add(L4);
				@SendMessage(65536, f_59e_a1_s(L2 - tv0), L6);
				@SendMessage(L1, f_59e_a1_s(L2 - tv0), L3);
			} else {
				@SendMessage(32768, f_59e_a1_s(L2 - tv0));
			}
		}
	}

	void f_2cf_a0_v(void)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		int L4;
		tv4->size(L0);
		if (tv1 + 18 > L0) {
			if (L0 % 2 == 0) {
				tv1 = tv1 - (tv1 + 18 - L0);
			} else {
				tv1 = tv1 - (tv1 + 18 - L0 - 1);
			}
		}
		if (tv1 < 0) {
			tv1 = 0;
		}
		L4 = tv1;
		for (; L4 < tv1 + 18; L4++) {
			if (L4 < L0) {
				int L5;
				object L6;
				tv4->get(L1, L4);
				tv5->get(L3, L4);
				L2 = 0;
				L5 = f_588_a1_i(L4 - tv1);
				if (L5 > 0) {
					L2 = L2 | 16384;
				}
				if (f_6d4_a3_b(L1, tv25, true)) {
					L2 = L2 | 131072;
				}
				@CreateIntVector(L6);
				L6->add(L5);
				L6->add(L3);
				@SendMessage(65536, f_5ae_a1_s(L4 - tv1), L6);
				@SendMessage(L2, f_5ae_a1_s(L4 - tv1), L1);
			} else {
				@SendMessage(32768, f_5ae_a1_s(L4 - tv1));
			}
		}
	}

	void f_32a_a0_v(void)
	{
		@SendMessage(tv2, "r_money_slot");
	}

	void f_32e_a0_v(void)
	{
		@SendMessage(tv3, "l_money_slot");
	}

	void f_332_a0_v(void)
	{
		int L0;
		bool L1;
		object L2;
		object L3;
		object L4;
		int L5;
		int L6;
		@GetContainer(L3);
		@GetPlayerContainer(L4);
		tv21->size(L0);
		for (L5 = 0; L5 < L0; L5++) {
			tv21->get(L2, L5);
			L1 = f_706_a3_b(L4, L2, f_67a_a1_i(L2));
			if (!L1) {
				@Trace("Error: failed to remove item");
			}
			L1 = f_71f_a3_b(L3, L2, 0);
			if (!L1) {
				@Trace("Error: failed to add item");
			}
		}
		tv20->size(L0);
		for (L6 = 0; L6 < L0; L6++) {
			tv20->get(L2, L6);
			L1 = f_706_a3_b(L3, L2, 0);
			if (!L1) {
				@Trace("Error: failed to remove item");
			}
			L1 = f_71f_a3_b(L4, L2, f_67a_a1_i(L2));
			if (!L1) {
				@Trace("Error: failed to add item");
			}
		}
		if (tv25 == 0) {
			@SetPlayerMoneyCount(tv2);
		}
		tv3 = 0;
		f_10e_a0_v();
	}

	bool f_390_a1_b(object a0)
	{
		int L0;
		L0 = f_67a_a1_i(a0);
		if (L0 == 0) {
			return f_40a_a3_b(a0, tv10, tv11);
		} else {
			if (L0 == 1) {
				return f_40a_a3_b(a0, tv12, tv13);
			} else {
				if (L0 == 2) {
					return f_40a_a3_b(a0, tv14, tv15);
				} else {
					if (L0 == 3) {
						return f_40a_a3_b(a0, tv16, tv17);
					}
				}
			}
		}
		return f_40a_a3_b(a0, tv18, tv19);
	}

	bool f_3cd_a1_b(object a0)
	{
		int L0;
		L0 = f_67a_a1_i(a0);
		if (L0 == 0) {
			return f_43d_a3_b(a0, tv10, tv11);
		} else {
			if (L0 == 1) {
				return f_43d_a3_b(a0, tv12, tv13);
			} else {
				if (L0 == 2) {
					return f_43d_a3_b(a0, tv14, tv15);
				} else {
					if (L0 == 3) {
						return f_43d_a3_b(a0, tv16, tv17);
					}
				}
			}
		}
		return f_43d_a3_b(a0, tv18, tv19);
	}

	bool f_40a_a3_b(object a0, object a1, object a2)
	{
		int L0;
		object L1;
		a1->size(L0);
		if (f_684_a1_i(a0) > 1) {
			int L2;
			for (L2 = 0; L2 < L0; L2++) {
				int L3;
				a1->get(L1, L2);
				a2->get(L3, L2);
				if (f_6cc_a2_b(a0, L1)) {
					if (L3 < f_684_a1_i(a0)) {
						a2->set(L2, L3 + 1);
					}
					return true;
				}
			}
		}
		if (L0 < 12) {
			a1->add(a0);
			a2->add(1);
			return true;
		}
		return false;
	}

	bool f_43d_a3_b(object a0, object a1, object a2)
	{
		int L0;
		object L1;
		int L2;
		a1->size(L0);
		for (L2 = 0; L2 < L0; L2++) {
			int L3;
			a1->get(L1, L2);
			a2->get(L3, L2);
			if (f_6cc_a2_b(a0, L1)) {
				L3 = L3 + -1;
				if (L3 == 0) {
					a1->remove(L2);
					a2->remove(L2);
				} else {
					a2->set(L2, L3);
				}
				return true;
			}
		}
		return false;
	}

	void f_461_a1_v(int a0)
	{
		tv2 = tv2 + a0;
		tv3 = tv3 - a0;
		f_32a_a0_v();
		f_32e_a0_v();
	}

	void f_46b_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		tv9->size(L0);
		if (a0 + tv0 >= L0) {
			return;
		}
		tv7->get(L1, a0 + tv0);
		if (f_6d4_a3_b(L1, tv25, false)) {
			return;
		}
		tv9->get(L2, a0 + tv0);
		tv8->get(L3, a0 + tv0);
		if (L2 < L3) {
			int L4;
			L4 = f_62b_a2_i(L1, tv25) * f_5fc_a3_f(tv26, tv24, tv25);
			if (L4 <= tv2) {
				if (f_390_a1_b(L1)) {
					L2 = L2 + 1;
					tv9->set(a0 + tv0, L2);
					f_0_a1_v(L1);
					f_461_a1_v(-L4);
				}
			}
		}
		f_274_a0_v();
		f_2cf_a0_v();
	}

	void f_4ad_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		tv9->size(L0);
		if (a0 + tv0 >= L0) {
			return;
		}
		tv7->get(L1, a0 + tv0);
		if (f_6d4_a3_b(L1, tv25, false)) {
			return;
		}
		tv9->get(L2, a0 + tv0);
		tv8->get(L3, a0 + tv0);
		if (L2 > 0) {
			int L4;
			f_3cd_a1_b(L1);
			f_18_a1_v(L1);
			L2 = L2 + -1;
			tv9->set(a0 + tv0, L2);
			L4 = f_62b_a2_i(L1, tv25) * f_5fc_a3_f(tv26, tv24, tv25);
			f_461_a1_v(L4);
		}
		f_274_a0_v();
		f_2cf_a0_v();
	}

	void f_4ed_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		tv6->size(L0);
		if (a0 + tv1 >= L0) {
			return;
		}
		tv4->get(L1, a0 + tv1);
		if (f_6d4_a3_b(L1, tv25, true)) {
			return;
		}
		tv6->get(L2, a0 + tv1);
		tv5->get(L3, a0 + tv1);
		if (L2 < L3) {
			int L4;
			f_3cd_a1_b(L1);
			f_18_a1_v(L1);
			L2 = L2 + 1;
			tv6->set(a0 + tv1, L2);
			L4 = f_62b_a2_i(L1, tv25) * f_5e2_a3_f(tv26, tv24, tv25);
			f_461_a1_v(L4);
		}
		f_274_a0_v();
		f_2cf_a0_v();
	}

	void f_52c_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		tv6->size(L0);
		if (a0 + tv1 >= L0) {
			return;
		}
		tv4->get(L1, a0 + tv1);
		if (f_6d4_a3_b(L1, tv25, true)) {
			return;
		}
		tv6->get(L2, a0 + tv1);
		tv5->get(L3, a0 + tv1);
		if (L2 > 0) {
			int L4;
			L4 = f_62b_a2_i(L1, tv25) * f_5e2_a3_f(tv26, tv24, tv25);
			if (L4 <= tv2) {
				if (f_390_a1_b(L1)) {
					L2 = L2 + -1;
					f_0_a1_v(L1);
					tv6->set(a0 + tv1, L2);
					f_461_a1_v(-f_62b_a2_i(L1, tv25) * f_5e2_a3_f(tv26, tv24, tv25));
				}
			}
		}
		f_274_a0_v();
		f_2cf_a0_v();
	}

	int f_57b_a1_i(int a0)
	{
		int L0;
		int L1;
		tv9->size(L0);
		if (a0 + tv0 >= L0) {
			return 0;
		}
		tv9->get(L1, a0 + tv0);
		return L1;
	}

	int f_588_a1_i(int a0)
	{
		int L0;
		int L1;
		tv6->size(L0);
		if (a0 + tv1 >= L0) {
			return 0;
		}
		tv6->get(L1, a0 + tv1);
		return L1;
	}
}

int f_595_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_59e_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "l_slot0" + (a0 + 1);
	}
	return "l_slot" + (a0 + 1);
}

string f_5ae_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "r_slot0" + (a0 + 1);
	}
	return "r_slot" + (a0 + 1);
}

int f_5be_a2_i(int a0, string a1)
{
	int L0;
	for (L0 = 0; L0 < 18; L0++) {
		if (a1 == f_59e_a1_s(L0)) {
			return L0;
		}
	}
	return -1;
}

int f_5d0_a2_i(int a0, string a1)
{
	int L0;
	for (L0 = 0; L0 < 18; L0++) {
		if (a1 == f_5ae_a1_s(L0)) {
			return L0;
		}
	}
	return -1;
}

float f_5e2_a3_f(object a0, int a1, int a2)
{
	float L0;
	int L1;
	if (a2 != 0) {
		return 1;
	}
	L0 = 1;
	for (L1 = 1; L1 <= a1; L1++) {
		bool L2;
		a0->HasProperty("sellf" + L1, L2);
		if (L2) {
			a0->GetProperty("sellf" + L1, L0);
		}
	}
	return L0 / 100;
}

float f_5fc_a3_f(object a0, int a1, int a2)
{
	float L0;
	int L1;
	if (a2 != 0) {
		return 1;
	}
	L0 = 1;
	for (L1 = 1; L1 <= a1; L1++) {
		bool L2;
		a0->HasProperty("buyf" + L1, L2);
		if (L2) {
			a0->GetProperty("buyf" + L1, L0);
		}
	}
	return L0 / 100;
}

int f_616_a0_i(void)
{
	object L0;
	bool L1;
	int L2;
	@GetContainer(L0);
	L0->HasProperty("barter", L1);
	if (!L1) {
		return 0;
	}
	L0->GetProperty("barter", L2);
	return L2;
}

int f_626_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

int f_62b_a2_i(object a0, int a1)
{
	if (a1 == 0) {
		int L0;
		L0 = f_595_a0_i();
		int L1;
		L1 = 0;
		int L2;
		L2 = 1;
		for (; L2 <= L0; L2++) {
			string L3;
			bool L4;
			L3 = "Price";
			if (L2 != 1) {
				L3 = L3 + L2;
			}
			@HasInvItemProperty(L4, f_626_a1_i(a0), L3);
			if (!L4) {
				continue;
			}
			@GetInvItemProperty(L1, f_626_a1_i(a0), L3);
		}
		bool L5;
		a0->HasProperty(L5, "durability");
		if (L5) {
			int L6;
			a0->GetProperty(L6, "durability");
			L1 = L1 * (0.5 * (1.0 + L6 / 100.0));
		}
		return L1;
	}
	bool L7;
	@HasInvItemProperty(L7, f_626_a1_i(a0), "BarterPrice" + a1);
	if (!L7) {
		return 0;
	}
	int L8;
	@GetInvItemProperty(L8, f_626_a1_i(a0), "BarterPrice" + a1);
	if (L8 > 0) {
		return L8;
	}
	return -L8;
}

int f_67a_a1_i(object a0)
{
	int L0;
	@GetInvItemProperty(L0, f_626_a1_i(a0), "Category");
	return L0;
}

int f_684_a1_i(object a0)
{
	int L0;
	@GetItemMaxStackSize(f_626_a1_i(a0), L0);
	return L0;
}

int f_68d_a0_i(void)
{
	int L0;
	object L1;
	@GetContainer(L1);
	L1->GetItemCount(L0);
	return L0;
}

int f_695_a1_i(int a0)
{
	int L0;
	object L1;
	@GetPlayerContainer(L1);
	L1->GetItemCount(L0, a0);
	return L0;
}

object f_69d_a2_o(int a0, int a1)
{
	object L0;
	object L1;
	@GetPlayerContainer(L0);
	L0->GetItem(L1, a1, a0);
	return L1;
}

int f_6a6_a2_i(int a0, int a1)
{
	object L0;
	int L1;
	@GetPlayerContainer(L0);
	L0->GetItemAmount(L1, a1, a0);
	return L1;
}

bool f_6ae_a2_b(int a0, int a1)
{
	object L0;
	bool L1;
	@GetPlayerContainer(L0);
	L0->IsItemSelected(L1, a1, a0);
	return L1;
}

object f_6b6_a1_o(int a0)
{
	object L0;
	object L1;
	@GetContainer(L0);
	L0->GetItem(L1, a0);
	return L1;
}

int f_6bf_a1_i(int a0)
{
	object L0;
	int L1;
	@GetContainer(L0);
	L0->GetItemAmount(L1, a0);
	return L1;
}

bool f_6c7_a2_b(object a0, object a1)
{
	bool L0;
	a0->Compare(L0, a1);
	return L0;
}

bool f_6cc_a2_b(object a0, object a1)
{
	return f_6c7_a2_b(a0, a1);
}

bool f_6d4_a3_b(object a0, int a1, bool a2)
{
	bool L0;
	int L1;
	if (a1 == 0) {
		return false;
	}
	@HasInvItemProperty(L0, f_626_a1_i(a0), "BarterPrice" + a1);
	if (!L0) {
		return true;
	}
	@GetInvItemProperty(L1, f_626_a1_i(a0), "BarterPrice" + a1);
	if (a2 && L1 > 0) {
		return false;
	}
	if (!a2 && L1 < 0) {
		return false;
	}
	return true;
}

bool f_706_a3_b(object a0, object a1, int a2)
{
	int L0;
	object L1;
	int L2;
	a0->GetItemCount(L0, a2);
	for (L2 = 0; L2 < L0; L2++) {
		a0->GetItem(L1, L2, a2);
		if (f_6c7_a2_b(a1, L1)) {
			a0->RemoveItem(L2, 1, a2);
			return true;
		}
	}
	return false;
}

bool f_71f_a3_b(object a0, object a1, int a2)
{
	bool L0;
	a0->AddItem(L0, a1, a2, 1);
	return L0;
}

