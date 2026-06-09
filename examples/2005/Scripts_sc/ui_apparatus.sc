event OnChar 100;
event OnUpdate 1;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;

	void init(void)
	{
		@FindActor(tv3, "player");
		if (!tv3) {
			@DestroyWindow();
			return;
		}
		@GetWindowData(tv4);
		if (!tv4) {
			@Trace("null apparatus");
			@DestroyWindow();
			return;
		}
		@CreateFloatVector(tv6);
		@CreateFloatVector(tv5);
		@CreateFloatVector(tv7);
		@CreateFloatVector(tv8);
		tv6->add(0.30000001192092896);
		tv5->add(0.4000000059604645);
		tv8->add(1);
		tv7->add(1);
		tv6->add(-0.30000001192092896);
		tv5->add(0.4000000059604645);
		tv8->add(1);
		tv7->add(1);
		tv6->add(1.0);
		tv5->add(-1.0);
		tv8->add(1);
		tv7->add(1);
		tv6->add(0);
		tv5->add(0);
		tv8->add(2.0);
		tv7->add(1);
		tv6->add(0);
		tv5->add(0);
		tv8->add(1);
		tv7->add(0.5);
		@CreateWindow("inventory_base.xml", false, tv1);
		f_24c_a1_v(4);
	}

	object f_5f_a0_o(void)
	{
		return tv3;
	}

	bool f_61_a3_b(int a0, string a1, object a2)
	{
		int L0;
		if (a1 == "combine") {
			f_1e8_a0_b();
			return true;
		}
		for (L0 = 0; L0 < 4; L0++) {
			if (a1 == "input0" + (L0 + 1)) {
				if (f_d1_a0_i() > L0) {
					f_173_a1_b(L0);
				}
			}
		}
		if (a1 == "output") {
			f_193_a0_b();
		}
		return false;
	}

	void f_88_a0_v(void)
	{
		f_1b2_a0_v();
		f_1d6_a0_v();
	}

	bool f_8f_a1_b(object a0)
	{
		return !f_122_a1_b(a0);
	}

	bool f_96_a2_b(int a0, int a1)
	{
		return false;
	}

	void f_99_a0_v(void)
	{
	}

	bool f_9a_a2_b(int a0, bool a1)
	{
		if (a1) {
			f_a5_a1_b(a0);
			return true;
		}
		return false;
	}

	bool f_a5_a1_b(int a0)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		bool L4;
		if (!f_cb_a0_b()) {
			return false;
		}
		tv3->GetItemCount(L1, 4);
		if (L1 <= a0) {
			return false;
		}
		tv3->GetItemAmount(L2, a0, 4);
		tv3->GetItem(L0, a0, 4);
		L0->GetItemID(L3);
		tv4->AddItem(L4, L0, 0, 1);
		if (!L4) {
			return false;
		}
		tv3->RemoveItem(a0, 1, 4);
		return true;
	}

	bool f_cb_a0_b(void)
	{
		return f_d1_a0_i() < 4;
	}

	int f_d1_a0_i(void)
	{
		int L0;
		int L1;
		int L2;
		tv4->GetItemCount(L0);
		L1 = 0;
		L2 = 0;
		for (; L2 < L0; L2++) {
			object L3;
			int L4;
			tv4->GetItem(L3, L2);
			if (!f_122_a1_b(L3)) {
				continue;
			}
			tv4->GetItemAmount(L4, L2);
			L1 = L1 + L4;
		}
		return L1;
	}

	object f_ea_a1_o(int a0)
	{
		int L0;
		tv4->GetItemCount(L0);
		int L1;
		L1 = 0;
		int L2;
		L2 = 0;
		for (; L2 < L0; L2++) {
			object L3;
			int L4;
			tv4->GetItem(L3, L2);
			if (!f_122_a1_b(L3)) {
				continue;
			}
			tv4->GetItemAmount(L4, L2);
			L1 = L1 + L4;
			if (L1 > a0) {
				return L3;
			}
		}
		object L5;
		L5 = null;
		return L5;
	}

	object f_109_a0_o(void)
	{
		int L0;
		tv4->GetItemCount(L0);
		int L1;
		L1 = 0;
		int L2;
		for (L2 = 0; L2 < L0; L2++) {
			object L3;
			tv4->GetItem(L3, L2);
			if (!f_122_a1_b(L3)) {
				return L3;
			}
		}
		object L4;
		L4 = null;
		return L4;
	}

	bool f_122_a1_b(object a0)
	{
		int L0;
		bool L1;
		L0 = f_3b4_a1_i(a0);
		@HasInvItemProperty(L1, L0, "Grass");
		return L1;
	}

	int f_12d_a1_i(object a0)
	{
		int L0;
		bool L1;
		int L2;
		L0 = f_3b4_a1_i(a0);
		@HasInvItemProperty(L1, L0, "Grass");
		if (!L1) {
			return -1;
		}
		@GetInvItemProperty(L2, L0, "Grass");
		return L2;
	}

	int f_13f_a1_i(int a0)
	{
		int L0;
		int L1;
		int L2;
		tv4->GetItemCount(L0);
		L1 = 0;
		L2 = 0;
		for (; L2 < L0; L2++) {
			object L3;
			int L4;
			tv4->GetItem(L3, L2);
			if (!f_122_a1_b(L3)) {
				continue;
			}
			tv4->GetItemAmount(L4, L2);
			L1 = L1 + L4;
			if (L1 > a0) {
				return L2;
			}
		}
		return -1;
	}

	int f_15c_a0_i(void)
	{
		int L0;
		int L1;
		int L2;
		tv4->GetItemCount(L0);
		L1 = 0;
		for (L2 = 0; L2 < L0; L2++) {
			object L3;
			tv4->GetItem(L3, L2);
			if (!f_122_a1_b(L3)) {
				return L2;
			}
		}
		return -1;
	}

	bool f_173_a1_b(int a0)
	{
		int L0;
		bool L1;
		L0 = f_13f_a1_i(a0);
		if (L0 == -1) {
			return false;
		}
		tv3->AddItem(L1, f_ea_a1_o(a0), 4, 1);
		if (!L1) {
			return false;
		}
		tv4->RemoveItem(L0, 1);
		f_2ef_a1_v(4);
		return true;
	}

	bool f_193_a0_b(void)
	{
		object L0;
		int L1;
		bool L2;
		L0 = f_109_a0_o();
		if (!L0) {
			return false;
		}
		L1 = f_15c_a0_i();
		tv3->AddItem(L2, L0, 2, 1);
		if (!L2) {
			return false;
		}
		tv4->RemoveItem(L1, 1);
		f_2ef_a1_v(2);
		return true;
	}

	void f_1b2_a0_v(void)
	{
		int L0;
		int L1;
		L0 = f_d1_a0_i();
		for (L1 = 0; L1 < 4; L1++) {
			object L2;
			L2 = f_ea_a1_o(L1);
			if (L2) {
				@SendMessage(0, "input0" + (L1 + 1), L2);
			} else {
				@SendMessage(32768, "input0" + (L1 + 1));
			}
		}
	}

	void f_1d6_a0_v(void)
	{
		object L0;
		L0 = f_109_a0_o();
		if (L0) {
			@SendMessage(0, "output", L0);
		} else {
			@SendMessage(32768, "output");
		}
	}

	bool f_1e8_a0_b(void)
	{
		if (f_d1_a0_i() == 0) {
			return false;
		}
		if (f_109_a0_o()) {
			return false;
		}
		float L0;
		L0 = 0;
		float L1;
		L1 = 0;
		float L2;
		L2 = 1;
		float L3;
		L3 = 1;
		int L4;
		for (L4 = 0; L4 < f_d1_a0_i(); L4++) {
			object L5;
			int L6;
			float L7;
			L5 = f_ea_a1_o(L4);
			L6 = f_12d_a1_i(L5);
			tv6->get(L7, L6);
			L0 = L0 + L7;
			tv5->get(L7, L6);
			L1 = L1 + L7;
			tv8->get(L7, L6);
			L2 = L2 * L7;
			tv7->get(L7, L6);
			L3 = L3 * L7;
		}
		L0 = L0 * L2;
		L1 = L1 * L3;
		if (L0 > 0) {
		} else {
			L0 = -L0;
		}
		if (L1 > 0) {
		} else {
			L1 = -L1;
		}
		L0 = L0 * 20.0;
		L1 = L1 * 15.0;
		if (L0 > 100) {
			L0 = 100;
		}
		if (L1 > 100) {
			L1 = 100;
		}
		object L8;
		@CreateInvItem(L8);
		L8->SetItemName("grass_combination");
		L8->SetProperty("im_inc", L0 / 100.0);
		L8->SetProperty("hl_inc", -(L1 / 100.0));
		tv4->RemoveAllItems();
		bool L9;
		tv4->AddItem(L9, L8, 0, 1);
		return true;
	}

	void f_24c_a1_v(int a0)
	{
		tv0 = -1;
		f_2ef_a1_v(a0);
		f_34d_a1_v(tv0);
		f_308_a0_v();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		f_99_a0_v();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnUpdate(float a0)
	{
		f_34d_a1_v(tv0);
		f_308_a0_v();
		f_88_a0_v();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		bool L0;
		L0 = false;
		if (a1 == "button_weapon") {
			f_2ef_a1_v(0);
			L0 = true;
		} else {
			if (a1 == "button_clothes") {
				f_2ef_a1_v(1);
				L0 = true;
			} else {
				if (a1 == "button_medcine") {
					f_2ef_a1_v(2);
					L0 = true;
				} else {
					if (a1 == "button_food") {
						f_2ef_a1_v(3);
						L0 = true;
					} else {
						if (a1 == "button_other") {
							f_2ef_a1_v(4);
							L0 = true;
						} else {
							if (a1 == "button_detector") {
							} else {
								if (a1 == "button_anticeptic") {
								} else {
									if (a0 != 0) {
										int L1;
										@GetVariable("noinv_drop", L1);
										if (L1) {
											return;
										}
									}
									int L2;
									for (L2 = 0; L2 < 12; L2++) {
										if (a1 == f_3a4_a1_s(L2)) {
											object L3;
											int L4;
											L3 = f_5f_a0_o();
											L3->GetItemCount(L4, tv0);
											if (L4 > L2) {
												object L5;
												L3->GetItem(L5, L2, tv0);
												if (!f_8f_a1_b(L5)) {
													L0 = f_9a_a2_b(L2, a0 == 0);
												}
											}
											break;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!L0) {
			L0 = f_61_a3_b(a0, a1, a2);
		}
		if (L0) {
		}
	}

	void f_2ef_a1_v(int a0)
	{
		if (a0 == -1) {
			return;
		}
		if (tv0 == a0) {
			return;
		}
		tv0 = a0;
		f_30f_a1_v(tv0);
	}

	int f_2fd_a0_i(void)
	{
		object L0;
		int L1;
		L0 = f_5f_a0_o();
		L0->GetProperty("money", L1);
		return L1;
	}

	void f_308_a0_v(void)
	{
		@SendMessage(f_2fd_a0_i(), "money");
	}

	void f_30f_a1_v(int a0)
	{
		if (a0 != 0) {
			@SendMessage(0, "button_weapon");
		} else {
			@SendMessage(1, "button_weapon");
		}
		if (a0 != 1) {
			@SendMessage(0, "button_clothes");
		} else {
			@SendMessage(1, "button_clothes");
		}
		if (a0 != 2) {
			@SendMessage(0, "button_medcine");
		} else {
			@SendMessage(1, "button_medcine");
		}
		if (a0 != 3) {
			@SendMessage(0, "button_food");
		} else {
			@SendMessage(1, "button_food");
		}
		if (a0 != 4) {
			@SendMessage(0, "button_other");
		} else {
			@SendMessage(1, "button_other");
		}
	}

	void f_34d_a1_v(int a0)
	{
		object L0;
		int L1;
		int L2;
		L0 = f_5f_a0_o();
		L0->GetItemCount(L1, a0);
		L2 = 0;
		for (; L2 < 12; L2++) {
			if (L2 < L1) {
				object L3;
				int L4;
				bool L5;
				bool L6;
				L0->GetItem(L3, L2, a0);
				L0->GetItemAmount(L4, L2, a0);
				L5 = f_96_a2_b(L2, a0);
				L6 = f_8f_a1_b(L3);
				if (L5) {
					if (L6) {
						@SendMessage(0, f_3a4_a1_s(L2), L3);
					} else {
						@SendMessage(16384, f_3a4_a1_s(L2), L3);
					}
				} else {
					if (L6) {
						@SendMessage(131072, f_3a4_a1_s(L2), L3);
					} else {
						@SendMessage(0, f_3a4_a1_s(L2), L3);
					}
				}
				@SendMessage(L4 | 65536, f_3a4_a1_s(L2));
			} else {
				@SendMessage(32768, f_3a4_a1_s(L2));
			}
		}
	}
}

string f_3a4_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

int f_3b4_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

