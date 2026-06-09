event OnMouseWheel 15;
event OnChar 100;
event OnUpdate 1;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var object tv1;
	var int tv2;

	void init(void)
	{
		@CreateWindow("inventory_base.xml", false, tv1);
		f_74_a0_v();
		f_cc_a1_v(0);
	}

	object f_c_a0_o(void)
	{
		object L0;
		@GetPlayerContainer(L0);
		return L0;
	}

	bool f_12_a3_b(int a0, string a1, object a2)
	{
		int L0;
		for (L0 = 0; L0 < 4; L0++) {
			if (a1 == f_2d4_a1_s(L0)) {
				f_57_a2_v(L0, a0 == 0);
				return true;
			}
		}
		if (a1 == "scrollbar") {
			object L1;
			int L2;
			@GetContainer(L1);
			L1->GetItemCount(L2);
			tv2 = 0.009999999776482582 * (L2 - 4) * a0 + 0.5;
			if (tv2 < 0) {
				tv2 = 0;
			}
			f_9d_a0_v();
			return true;
		}
		return false;
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		tv2 = tv2 + a2;
		if (tv2 < 0) {
			tv2 = 0;
		}
		f_74_a0_v();
	}

	void f_4c_a0_v(void)
	{
		f_9d_a0_v();
	}

	void f_50_a0_v(void)
	{
		f_74_a0_v();
		f_9d_a0_v();
	}

	void f_57_a2_v(int a0, bool a1)
	{
		bool L0;
		f_183_a1_v(f_1eb_a2_i(L0, a0 + tv2));
		if (!L0) {
		}
		f_74_a0_v();
	}

	bool f_67_a2_b(int a0, bool a1)
	{
		f_23b_a2_b(tv0, a0);
		tv2 = tv2 + 1;
		f_74_a0_v();
		return true;
	}

	void f_74_a0_v(void)
	{
		object L0;
		int L1;
		@GetContainer(L0);
		L0->GetItemCount(L1);
		if (L1 <= 4) {
			@SendMessage(16384, "scrollbar");
			tv2 = 0;
		} else {
			if (tv2 + 4 > L1) {
				int L2;
				tv2 = tv2 - (tv2 + 4 - L1);
				L2 = tv2 * 100 / (L1 - 4);
				@SendMessage(L2, "scrollbar");
			} else {
				int L3;
				L3 = tv2 * 100 / (L1 - 4);
				@SendMessage(L3, "scrollbar");
			}
		}
	}

	void f_9d_a0_v(void)
	{
		object L0;
		int L1;
		int L2;
		@GetContainer(L0);
		L0->GetItemCount(L1);
		L2 = tv2;
		for (; L2 < tv2 + 4; L2++) {
			if (L2 < L1) {
				object L3;
				int L4;
				int L5;
				L0->GetItem(L3, L2);
				L3->GetItemID(L4);
				L0->GetItemAmount(L5, L2);
				@SendMessage(0, f_2d4_a1_s(L2 - tv2), L3);
				@SendMessage(L5 | 65536, f_2d4_a1_s(L2 - tv2));
			} else {
				@SendMessage(32768, f_2d4_a1_s(L2 - tv2));
			}
		}
	}

	void f_cc_a1_v(int a0)
	{
		tv0 = -1;
		f_183_a1_v(a0);
		f_26d_a1_v(tv0);
		f_1a6_a0_v();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		f_50_a0_v();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	bool f_f0_a1_b(object a0)
	{
		return false;
	}

	bool f_f3_a2_b(int a0, int a1)
	{
		bool L0;
		f_c_a0_o()->IsItemSelected(L0, a0, a1);
		return L0;
	}

	void OnUpdate(float a0)
	{
		f_26d_a1_v(tv0);
		f_1a6_a0_v();
		f_4c_a0_v();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		bool L0;
		L0 = false;
		if (a1 == "button_weapon") {
			f_183_a1_v(0);
			L0 = true;
		} else {
			if (a1 == "button_clothes") {
				f_183_a1_v(1);
				L0 = true;
			} else {
				if (a1 == "button_medcine") {
					f_183_a1_v(2);
					L0 = true;
				} else {
					if (a1 == "button_food") {
						f_183_a1_v(3);
						L0 = true;
					} else {
						if (a1 == "button_other") {
							f_183_a1_v(4);
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
										if (a1 == f_2c4_a1_s(L2)) {
											object L3;
											int L4;
											L3 = f_c_a0_o();
											L3->GetItemCount(L4, tv0);
											if (L4 > L2) {
												object L5;
												L3->GetItem(L5, L2, tv0);
												if (!f_f0_a1_b(L5)) {
													L0 = f_67_a2_b(L2, a0 == 0);
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
			L0 = f_12_a3_b(a0, a1, a2);
		}
		if (L0) {
		}
	}

	void f_183_a1_v(int a0)
	{
		if (a0 == -1) {
			return;
		}
		if (tv0 == a0) {
			return;
		}
		tv0 = a0;
		f_1ad_a1_v(tv0);
	}

	int f_191_a0_i(void)
	{
		object L0;
		int L1;
		L0 = f_c_a0_o();
		L0->GetProperty("money", L1);
		return L1;
	}

	void f_19c_a1_v(int a0)
	{
		object L0;
		L0 = f_c_a0_o();
		L0->SetProperty("money", a0);
	}

	void f_1a6_a0_v(void)
	{
		@SendMessage(f_191_a0_i(), "money");
	}

	void f_1ad_a1_v(int a0)
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

	int f_1eb_a2_i(bool a0, int a1)
	{
		object L0;
		object L1;
		object L2;
		int L3;
		int L4;
		int L5;
		bool L6;
		int L7;
		int L8;
		bool L9;
		bool L10;
		a0 = false;
		if (a1 == -1) {
			return -1;
		}
		L1 = f_c_a0_o();
		@GetContainer(L0);
		L0->GetItemCount(L3);
		if (L3 <= a1) {
			return -1;
		}
		L0->GetItemAmount(L4, a1);
		if (L4 == 0) {
			return -1;
		}
		L0->GetItem(L2, a1);
		L2->GetItemID(L5);
		L6 = false;
		L2->HasProperty(L6, "Organ");
		if (L6) {
			L2->RemoveProperty("Organ");
		}
		@GetInvItemProperty(L7, L5, "Category");
		if (L5 == f_2e4_a0_i()) {
			L8 = f_191_a0_i();
			L8 = L8 + L4;
			f_19c_a1_v(L8);
			L0->RemoveItem(a1, L4);
			f_1a6_a0_v();
			a0 = true;
			return -1;
		}
		L1->AddItem(L10, L2, L7, 1);
		if (!L10) {
			return L7;
		}
		a0 = true;
		L0->RemoveItem(a1, 1);
		return L7;
	}

	bool f_23b_a2_b(int a0, int a1)
	{
		object L0;
		object L1;
		object L2;
		int L3;
		int L4;
		bool L5;
		L1 = f_c_a0_o();
		@GetContainer(L0);
		L1->GetItemCount(L3, a0);
		if (L3 <= a1) {
			return false;
		}
		L1->GetItemAmount(L4, a1, a0);
		L1->GetItem(L2, a1, a0);
		L0->AddItem(L5, L2, 0, 1);
		if (!L5) {
			return false;
		}
		if (tv0 == 0) {
			int L6;
			bool L7;
			L2->GetItemID(L6);
			@HasInvItemProperty(L7, L6, "Weapon");
			if (L7) {
				bool L8;
				L1->IsItemSelected(L8, a1, tv0);
				if (L8) {
					@SetPlayerHandsItem(-1);
				}
			}
		}
		L1->RemoveItem(a1, 1, a0);
		return true;
	}

	void f_26d_a1_v(int a0)
	{
		object L0;
		int L1;
		int L2;
		L0 = f_c_a0_o();
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
				L5 = f_f3_a2_b(L2, a0);
				L6 = f_f0_a1_b(L3);
				if (L5) {
					if (L6) {
						@SendMessage(0, f_2c4_a1_s(L2), L3);
					} else {
						@SendMessage(16384, f_2c4_a1_s(L2), L3);
					}
				} else {
					if (L6) {
						@SendMessage(131072, f_2c4_a1_s(L2), L3);
					} else {
						@SendMessage(0, f_2c4_a1_s(L2), L3);
					}
				}
				@SendMessage(L4 | 65536, f_2c4_a1_s(L2));
			} else {
				@SendMessage(32768, f_2c4_a1_s(L2));
			}
		}
	}
}

string f_2c4_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

string f_2d4_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "cslot0" + (a0 + 1);
	}
	return "cslot" + (a0 + 1);
}

int f_2e4_a0_i(void)
{
	int L0;
	@GetInvItemByName(L0, "Money");
	return L0;
}

