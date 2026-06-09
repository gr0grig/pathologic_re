event OnChar 100;
event OnKeyUp 102;
event OnKeyDown 101;
event OnUpdate 1;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;

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
		@CreateWindow("inventory_base.xml", false, tv1);
		f_28d_a1_v(4);
	}

	object f_1b_a0_o(void)
	{
		return tv3;
	}

	bool f_1d_a3_b(int a0, string a1, object a2)
	{
		if (a1 == "combine") {
			f_1fa_a0_b();
			return true;
		} else {
			if (a1 == "input_organ") {
				f_169_a0_b();
			} else {
				if (a1 == "input_grass") {
					f_187_a0_b();
				} else {
					if (a1 == "output") {
						f_1a5_a0_b();
					}
				}
			}
		}
		return false;
	}

	void f_3d_a0_v(void)
	{
		f_1c4_a0_v();
		f_1d6_a0_v();
		f_1e8_a0_v();
	}

	bool f_47_a1_b(object a0)
	{
		if (f_b0_a1_b(a0)) {
			return false;
		}
		return !f_b8_a1_b(a0);
	}

	bool f_55_a2_b(int a0, int a1)
	{
		return false;
	}

	void f_58_a0_v(void)
	{
	}

	bool f_59_a2_b(int a0, bool a1)
	{
		if (a1) {
			return f_64_a1_b(a0);
		}
		return false;
	}

	bool f_64_a1_b(int a0)
	{
		object L0;
		tv3->GetItem(L0, a0, tv0);
		if (f_b0_a1_b(L0)) {
			return f_82_a2_b(L0, a0);
		}
		if (f_b8_a1_b(L0)) {
			return f_99_a2_b(L0, a0);
		}
		return false;
	}

	bool f_82_a2_b(object a0, int a1)
	{
		object L0;
		bool L1;
		L0 = f_d5_a0_o();
		if (L0) {
			return false;
		}
		tv4->AddItem(L1, a0, 0, 1);
		if (!L1) {
			return false;
		}
		tv3->RemoveItem(a1, 1, tv0);
		return true;
	}

	bool f_99_a2_b(object a0, int a1)
	{
		object L0;
		bool L1;
		L0 = f_ed_a0_o();
		if (L0) {
			return false;
		}
		tv4->AddItem(L1, a0, 0, 1);
		if (!L1) {
			return false;
		}
		tv3->RemoveItem(a1, 1, tv0);
		return true;
	}

	bool f_b0_a1_b(object a0)
	{
		return "grass_combination" == f_4e0_a1_s(a0);
	}

	bool f_b8_a1_b(object a0)
	{
		int L0;
		bool L1;
		L0 = f_4db_a1_i(a0);
		@HasInvItemProperty(L1, L0, "Microscope");
		return L1;
	}

	int f_c3_a1_i(object a0)
	{
		int L0;
		bool L1;
		int L2;
		L0 = f_4db_a1_i(a0);
		@HasInvItemProperty(L1, L0, "Microscope");
		if (!L1) {
			return false;
		}
		@GetInvItemProperty(L2, L0, "Microscope");
		return L2;
	}

	object f_d5_a0_o(void)
	{
		int L0;
		tv4->GetItemCount(L0);
		int L1;
		L1 = 0;
		int L2;
		for (L2 = 0; L2 < L0; L2++) {
			object L3;
			tv4->GetItem(L3, L2);
			if (f_b0_a1_b(L3)) {
				return L3;
			}
		}
		object L4;
		L4 = null;
		return L4;
	}

	object f_ed_a0_o(void)
	{
		int L0;
		tv4->GetItemCount(L0);
		int L1;
		L1 = 0;
		int L2;
		for (L2 = 0; L2 < L0; L2++) {
			object L3;
			tv4->GetItem(L3, L2);
			if (f_b8_a1_b(L3)) {
				return L3;
			}
		}
		object L4;
		L4 = null;
		return L4;
	}

	object f_105_a0_o(void)
	{
		int L0;
		tv4->GetItemCount(L0);
		int L1;
		L1 = 0;
		int L2;
		for (L2 = 0; L2 < L0; L2++) {
			object L3;
			tv4->GetItem(L3, L2);
			if (!f_b0_a1_b(L3) && !f_b8_a1_b(L3)) {
				return L3;
			}
		}
		object L4;
		L4 = null;
		return L4;
	}

	int f_128_a0_i(void)
	{
		int L0;
		int L1;
		tv4->GetItemCount(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			tv4->GetItem(L2, L1);
			if (f_b0_a1_b(L2)) {
				return L1;
			}
		}
		return -1;
	}

	int f_13d_a0_i(void)
	{
		int L0;
		int L1;
		tv4->GetItemCount(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			tv4->GetItem(L2, L1);
			if (f_b8_a1_b(L2)) {
				return L1;
			}
		}
		return -1;
	}

	int f_152_a0_i(void)
	{
		int L0;
		int L1;
		int L2;
		tv4->GetItemCount(L0);
		L1 = 0;
		for (L2 = 0; L2 < L0; L2++) {
			object L3;
			tv4->GetItem(L3, L2);
			if (!f_b0_a1_b(L3)) {
				return L2;
			}
		}
		return -1;
	}

	bool f_169_a0_b(void)
	{
		int L0;
		bool L1;
		L0 = f_13d_a0_i();
		if (L0 == -1) {
			return false;
		}
		tv3->AddItem(L1, f_ed_a0_o(), 4, 1);
		if (!L1) {
			return false;
		}
		tv4->RemoveItem(L0, 1);
		f_416_a1_v(4);
		return true;
	}

	bool f_187_a0_b(void)
	{
		int L0;
		bool L1;
		L0 = f_128_a0_i();
		if (L0 == -1) {
			return false;
		}
		tv3->AddItem(L1, f_d5_a0_o(), 2, 1);
		if (!L1) {
			return false;
		}
		tv4->RemoveItem(L0, 1);
		f_416_a1_v(2);
		return true;
	}

	bool f_1a5_a0_b(void)
	{
		object L0;
		int L1;
		bool L2;
		L0 = f_105_a0_o();
		if (!L0) {
			return false;
		}
		L1 = f_152_a0_i();
		tv3->AddItem(L2, L0, 2, 1);
		if (!L2) {
			return false;
		}
		tv4->RemoveItem(L1, 1);
		f_416_a1_v(2);
		return true;
	}

	void f_1c4_a0_v(void)
	{
		object L0;
		L0 = f_d5_a0_o();
		if (L0) {
			@SendMessage(0, "input_grass", L0);
		} else {
			@SendMessage(32768, "input_grass");
		}
	}

	void f_1d6_a0_v(void)
	{
		object L0;
		L0 = f_ed_a0_o();
		if (L0) {
			@SendMessage(0, "input_organ", L0);
		} else {
			@SendMessage(32768, "input_organ");
		}
	}

	void f_1e8_a0_v(void)
	{
		object L0;
		L0 = f_105_a0_o();
		if (L0) {
			@SendMessage(0, "output", L0);
		} else {
			@SendMessage(32768, "output");
		}
	}

	bool f_1fa_a0_b(void)
	{
		if (f_105_a0_o()) {
			return false;
		}
		object L0;
		L0 = f_d5_a0_o();
		object L1;
		L1 = f_ed_a0_o();
		if (!L0 || !L1) {
			return false;
		}
		if (f_c3_a1_i(L1) == 5) {
			object L2;
			bool L3;
			tv4->RemoveAllItems();
			@CreateInvItem(L2);
			L2->SetItemName("burah_serum");
			tv4->AddItem(L3, L2, 0, 1);
			return true;
		}
		float L4;
		L0->GetProperty(L4, "im_inc");
		float L5;
		L0->GetProperty(L5, "hl_inc");
		float L6;
		float L7;
		float L8;
		float L9;
		float L10;
		if (f_c3_a1_i(L1) == 1) {
			L6 = 1;
			L8 = L5;
		}
		if (f_c3_a1_i(L1) == 2) {
			float L11;
			L11 = 1.0 * (1.0 - L4);
			L6 = L11;
			L8 = L5;
		}
		if (f_c3_a1_i(L1) == 3) {
			float L12;
			L12 = 0.800000011920929 * (1.0 - L4);
			L6 = L12;
			L8 = L5;
		}
		if (f_c3_a1_i(L1) == 4) {
			float L13;
			L13 = 0.5 * (1.0 - L4);
			L6 = L13;
			L8 = L5;
		}
		if (f_c3_a1_i(L1) == 6) {
			float L14;
			L14 = 0.30000001192092896 * (1.0 - L4);
			L6 = L14;
			L8 = L5;
		}
		if (L6 > 1) {
			L6 = 1;
		}
		if (L6 < 0.029999999329447746) {
			L6 = 0.029999999329447746;
		}
		if (L8 < -1) {
			L8 = -1;
		}
		tv4->RemoveAllItems();
		object L15;
		@CreateInvItem(L15);
		L15->SetItemName("organ_combination");
		L15->SetProperty("DiseaseRate", L6);
		L15->SetProperty("HealthIncrease", L8);
		bool L16;
		tv4->AddItem(L16, L15, 0, 1);
		return true;
	}

	void f_28d_a1_v(int a0)
	{
		int L0;
		tv0 = -1;
		f_416_a1_v(a0);
		f_474_a1_v(tv0);
		f_42f_a0_v();
		for (L0 = 0; L0 < 12; L0++) {
			object L1;
			@CreateStringVector(L1);
			L1->add(f_4cb_a1_s((L0 + 12 - 1) % 12));
			L1->add(f_4cb_a1_s((L0 + 12 + 1) % 12));
			@SendMessage(-1, f_4cb_a1_s(L0), L1);
		}
		f_2d7_a0_v();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		f_58_a0_v();
		@ProcessEvents();
	}

	void f_2d7_a0_v(void)
	{
		@SendMessage(-6, f_4cb_a1_s(0));
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnKeyUp(int a0)
	{
		f_368_a1_v(a0);
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 266) {
			if (tv0 == 0) {
				f_416_a1_v(1);
			} else {
				if (tv0 == 1) {
					f_416_a1_v(2);
				} else {
					if (tv0 == 2) {
						f_416_a1_v(3);
					} else {
						if (tv0 == 3) {
							f_416_a1_v(4);
						} else {
							if (tv0 == 4) {
								f_416_a1_v(0);
							}
						}
					}
				}
			}
		} else {
			if (a0 == 265) {
				if (tv0 == 0) {
					f_416_a1_v(4);
				} else {
					if (tv0 == 1) {
						f_416_a1_v(0);
					} else {
						if (tv0 == 2) {
							f_416_a1_v(1);
						} else {
							if (tv0 == 3) {
								f_416_a1_v(2);
							} else {
								if (tv0 == 4) {
									f_416_a1_v(3);
								}
							}
						}
					}
				}
			}
		}
		f_344_a1_v(a0);
	}

	void f_344_a1_v(int a0)
	{
		if (a0 == 269) {
			int L0;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-2, f_4cb_a1_s(L0));
			}
		}
		if (a0 == 270) {
			int L1;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-3, f_4cb_a1_s(L1));
			}
		}
	}

	void f_368_a1_v(int a0)
	{
		if (a0 == 273) {
			int L0;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-2, f_4cb_a1_s(L0));
			}
		}
		if (a0 == 271) {
			int L1;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-3, f_4cb_a1_s(L1));
			}
		}
	}

	void OnUpdate(float a0)
	{
		f_474_a1_v(tv0);
		f_42f_a0_v();
		f_3d_a0_v();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		bool L0;
		L0 = false;
		if (a0 < 0) {
			L0 = f_1d_a3_b(a0, a1, a2);
			return;
		}
		if (a1 == "button_weapon") {
			f_416_a1_v(0);
			L0 = true;
		} else {
			if (a1 == "button_clothes") {
				f_416_a1_v(1);
				L0 = true;
			} else {
				if (a1 == "button_medcine") {
					f_416_a1_v(2);
					L0 = true;
				} else {
					if (a1 == "button_food") {
						f_416_a1_v(3);
						L0 = true;
					} else {
						if (a1 == "button_other") {
							f_416_a1_v(4);
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
										if (a1 == f_4cb_a1_s(L2)) {
											object L3;
											int L4;
											L3 = f_1b_a0_o();
											L3->GetItemCount(L4, tv0);
											if (L4 > L2) {
												object L5;
												L3->GetItem(L5, L2, tv0);
												if (!f_47_a1_b(L5)) {
													L0 = f_59_a2_b(L2, a0 == 0);
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
			L0 = f_1d_a3_b(a0, a1, a2);
		}
		if (L0) {
		}
	}

	void f_416_a1_v(int a0)
	{
		if (a0 == -1) {
			return;
		}
		if (tv0 == a0) {
			return;
		}
		tv0 = a0;
		f_436_a1_v(tv0);
	}

	int f_424_a0_i(void)
	{
		object L0;
		int L1;
		L0 = f_1b_a0_o();
		L0->GetProperty("money", L1);
		return L1;
	}

	void f_42f_a0_v(void)
	{
		@SendMessage(f_424_a0_i(), "money");
	}

	void f_436_a1_v(int a0)
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

	void f_474_a1_v(int a0)
	{
		object L0;
		int L1;
		int L2;
		L0 = f_1b_a0_o();
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
				L5 = f_55_a2_b(L2, a0);
				L6 = f_47_a1_b(L3);
				if (L5) {
					if (L6) {
						@SendMessage(0, f_4cb_a1_s(L2), L3);
					} else {
						@SendMessage(16384, f_4cb_a1_s(L2), L3);
					}
				} else {
					if (L6) {
						@SendMessage(131072, f_4cb_a1_s(L2), L3);
					} else {
						@SendMessage(0, f_4cb_a1_s(L2), L3);
					}
				}
				@SendMessage(L4 | 65536, f_4cb_a1_s(L2));
			} else {
				@SendMessage(32768, f_4cb_a1_s(L2));
			}
		}
	}
}

string f_4cb_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

int f_4db_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

string f_4e0_a1_s(object a0)
{
	int L0;
	string L1;
	L0 = f_4db_a1_i(a0);
	@GetInvItemName(L1, L0);
	return L1;
}

