event OnMouseWheel 15;
event OnChar 100;
event OnKeyUp 102;
event OnKeyDown 101;
event OnUpdate 1;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var object tv1;
	var int tv2;
	var int tv3;

	void init(void)
	{
		int L0;
		@CreateWindow("inventory_base.xml", false, tv1);
		f_19b_a0_v();
		tv3 = 2;
		for (L0 = 0; L0 < 4; L0++) {
			object L1;
			string L2;
			string L3;
			@CreateStringVector(L1);
			if (L0 - 1 >= 0) {
				L2 = f_4e1_a1_s(L0 - 1);
			} else {
				L2 = "$parent";
			}
			if (L0 + 1 < 4) {
				L3 = f_4e1_a1_s(L0 + 1);
			} else {
				L3 = "$parent";
			}
			L1->add(L2);
			L1->add(L3);
			@SendMessage(-1, f_4e1_a1_s(L0), L1);
		}
		f_1f3_a1_v(0);
	}

	void f_3d_a0_v(void)
	{
		f_23d_a0_v();
		@SendMessage(-6, f_4e1_a1_s(0));
	}

	void f_48_a1_v(int a0)
	{
		if (a0 == 267) {
			int L0;
			tv3 = 2;
			for (L0 = 0; L0 < 4; L0++) {
				@SendMessage(-7, f_4e1_a1_s(L0));
			}
		}
		if (a0 == 268) {
			int L1;
			tv3 = 0;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-7, f_4d1_a1_s(L1));
			}
		}
		if (tv3 == 0) {
			f_2aa_a1_v(a0);
			return;
		}
		if (a0 == 269) {
			int L2;
			for (L2 = 0; L2 < 4; L2++) {
				@SendMessage(-2, f_4e1_a1_s(L2));
			}
		}
		if (a0 == 270) {
			int L3;
			for (L3 = 0; L3 < 4; L3++) {
				@SendMessage(-3, f_4e1_a1_s(L3));
			}
		}
	}

	void f_98_a1_v(int a0)
	{
		if (a0 == 272) {
			int L0;
			tv3 = 2;
			for (L0 = 0; L0 < 4; L0++) {
				@SendMessage(-7, f_4e1_a1_s(L0));
			}
		}
		if (a0 == 274) {
			int L1;
			tv3 = 0;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-7, f_4d1_a1_s(L1));
			}
		}
		if (tv3 == 0) {
			f_2ce_a1_v(a0);
			return;
		}
		if (a0 == 273) {
			int L2;
			for (L2 = 0; L2 < 4; L2++) {
				@SendMessage(-2, f_4e1_a1_s(L2));
			}
		}
		if (a0 == 271) {
			int L3;
			for (L3 = 0; L3 < 4; L3++) {
				@SendMessage(-3, f_4e1_a1_s(L3));
			}
		}
	}

	object f_e8_a0_o(void)
	{
		object L0;
		@GetPlayerContainer(L0);
		return L0;
	}

	bool f_ee_a3_b(int a0, string a1, object a2)
	{
		if (a0 == -4) {
			if (a1 == f_4e1_a1_s(0)) {
				if (tv2 > 0) {
					tv2 = tv2 + -1;
					f_1c4_a0_v();
					f_19b_a0_v();
				}
			} else {
				if (a1 == f_4e1_a1_s(3)) {
					object L0;
					int L1;
					@GetContainer(L0);
					L0->GetItemCount(L1);
					if (tv2 + 4 <= L1) {
						tv2 = tv2 + 1;
						f_1c4_a0_v();
						f_19b_a0_v();
					}
				}
			}
			@SendMessage(-4, a1);
			return true;
		}
		if (a0 == -8) {
			tv3 = 0;
			return true;
		}
		if (a0 == -9) {
			tv3 = 2;
			return true;
		}
		if (a0 < 0) {
			return true;
		}
		int L2;
		for (L2 = 0; L2 < 4; L2++) {
			if (a1 == f_4e1_a1_s(L2)) {
				f_17e_a2_v(L2, a0 == 0);
				return true;
			}
		}
		if (a1 == "scrollbar") {
			object L3;
			int L4;
			@GetContainer(L3);
			L3->GetItemCount(L4);
			tv2 = 0.009999999776482582 * (L4 - 4) * a0 + 0.5;
			if (tv2 < 0) {
				tv2 = 0;
			}
			f_1c4_a0_v();
			return true;
		}
		return false;
	}

	void OnMouseWheel(int a0, int a1, float a2)
	{
		if (a2 > 0) {
			a2 = 1;
		} else {
			if (a2 < 0) {
				a2 = -1;
			}
		}
		tv2 = tv2 + a2;
		if (tv2 < 0) {
			tv2 = 0;
		}
		f_19b_a0_v();
	}

	void f_173_a0_v(void)
	{
		f_1c4_a0_v();
	}

	void f_177_a0_v(void)
	{
		f_19b_a0_v();
		f_1c4_a0_v();
	}

	void f_17e_a2_v(int a0, bool a1)
	{
		bool L0;
		f_390_a1_v(f_3f8_a2_i(L0, a0 + tv2));
		if (!L0) {
		}
		f_19b_a0_v();
	}

	bool f_18e_a2_b(int a0, bool a1)
	{
		f_448_a2_b(tv0, a0);
		tv2 = tv2 + 1;
		f_19b_a0_v();
		return true;
	}

	void f_19b_a0_v(void)
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

	void f_1c4_a0_v(void)
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
				@SendMessage(0, f_4e1_a1_s(L2 - tv2), L3);
				@SendMessage(L5 | 65536, f_4e1_a1_s(L2 - tv2));
			} else {
				@SendMessage(32768, f_4e1_a1_s(L2 - tv2));
			}
		}
	}

	void f_1f3_a1_v(int a0)
	{
		int L0;
		tv0 = -1;
		f_390_a1_v(a0);
		f_47a_a1_v(tv0);
		f_3b3_a0_v();
		for (L0 = 0; L0 < 12; L0++) {
			object L1;
			@CreateStringVector(L1);
			L1->add(f_4d1_a1_s((L0 + 12 - 1) % 12));
			L1->add(f_4d1_a1_s((L0 + 12 + 1) % 12));
			@SendMessage(-1, f_4d1_a1_s(L0), L1);
		}
		f_3d_a0_v();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		f_177_a0_v();
		@ProcessEvents();
	}

	void f_23d_a0_v(void)
	{
		@SendMessage(-6, f_4d1_a1_s(0));
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnKeyUp(int a0)
	{
		f_98_a1_v(a0);
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 266) {
			if (tv0 == 0) {
				f_390_a1_v(1);
			} else {
				if (tv0 == 1) {
					f_390_a1_v(2);
				} else {
					if (tv0 == 2) {
						f_390_a1_v(3);
					} else {
						if (tv0 == 3) {
							f_390_a1_v(4);
						} else {
							if (tv0 == 4) {
								f_390_a1_v(0);
							}
						}
					}
				}
			}
		} else {
			if (a0 == 265) {
				if (tv0 == 0) {
					f_390_a1_v(4);
				} else {
					if (tv0 == 1) {
						f_390_a1_v(0);
					} else {
						if (tv0 == 2) {
							f_390_a1_v(1);
						} else {
							if (tv0 == 3) {
								f_390_a1_v(2);
							} else {
								if (tv0 == 4) {
									f_390_a1_v(3);
								}
							}
						}
					}
				}
			}
		}
		f_48_a1_v(a0);
	}

	void f_2aa_a1_v(int a0)
	{
		if (a0 == 269) {
			int L0;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-2, f_4d1_a1_s(L0));
			}
		}
		if (a0 == 270) {
			int L1;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-3, f_4d1_a1_s(L1));
			}
		}
	}

	void f_2ce_a1_v(int a0)
	{
		if (a0 == 273) {
			int L0;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-2, f_4d1_a1_s(L0));
			}
		}
		if (a0 == 271) {
			int L1;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-3, f_4d1_a1_s(L1));
			}
		}
	}

	bool f_2f2_a1_b(object a0)
	{
		return false;
	}

	bool f_2f5_a2_b(int a0, int a1)
	{
		bool L0;
		f_e8_a0_o()->IsItemSelected(L0, a0, a1);
		return L0;
	}

	void OnUpdate(float a0)
	{
		f_47a_a1_v(tv0);
		f_3b3_a0_v();
		f_173_a0_v();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		bool L0;
		L0 = false;
		if (a0 < 0) {
			L0 = f_ee_a3_b(a0, a1, a2);
			return;
		}
		if (a1 == "button_weapon") {
			f_390_a1_v(0);
			L0 = true;
		} else {
			if (a1 == "button_clothes") {
				f_390_a1_v(1);
				L0 = true;
			} else {
				if (a1 == "button_medcine") {
					f_390_a1_v(2);
					L0 = true;
				} else {
					if (a1 == "button_food") {
						f_390_a1_v(3);
						L0 = true;
					} else {
						if (a1 == "button_other") {
							f_390_a1_v(4);
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
										if (a1 == f_4d1_a1_s(L2)) {
											object L3;
											int L4;
											L3 = f_e8_a0_o();
											L3->GetItemCount(L4, tv0);
											if (L4 > L2) {
												object L5;
												L3->GetItem(L5, L2, tv0);
												if (!f_2f2_a1_b(L5)) {
													L0 = f_18e_a2_b(L2, a0 == 0);
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
			L0 = f_ee_a3_b(a0, a1, a2);
		}
		if (L0) {
		}
	}

	void f_390_a1_v(int a0)
	{
		if (a0 == -1) {
			return;
		}
		if (tv0 == a0) {
			return;
		}
		tv0 = a0;
		f_3ba_a1_v(tv0);
	}

	int f_39e_a0_i(void)
	{
		object L0;
		int L1;
		L0 = f_e8_a0_o();
		L0->GetProperty("money", L1);
		return L1;
	}

	void f_3a9_a1_v(int a0)
	{
		object L0;
		L0 = f_e8_a0_o();
		L0->SetProperty("money", a0);
	}

	void f_3b3_a0_v(void)
	{
		@SendMessage(f_39e_a0_i(), "money");
	}

	void f_3ba_a1_v(int a0)
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

	int f_3f8_a2_i(bool a0, int a1)
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
		L1 = f_e8_a0_o();
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
		if (L5 == f_4f1_a0_i()) {
			L8 = f_39e_a0_i();
			L8 = L8 + L4;
			f_3a9_a1_v(L8);
			L0->RemoveItem(a1, L4);
			f_3b3_a0_v();
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

	bool f_448_a2_b(int a0, int a1)
	{
		object L0;
		object L1;
		object L2;
		int L3;
		int L4;
		bool L5;
		L1 = f_e8_a0_o();
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

	void f_47a_a1_v(int a0)
	{
		object L0;
		int L1;
		int L2;
		L0 = f_e8_a0_o();
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
				L5 = f_2f5_a2_b(L2, a0);
				L6 = f_2f2_a1_b(L3);
				if (L5) {
					if (L6) {
						@SendMessage(0, f_4d1_a1_s(L2), L3);
					} else {
						@SendMessage(16384, f_4d1_a1_s(L2), L3);
					}
				} else {
					if (L6) {
						@SendMessage(131072, f_4d1_a1_s(L2), L3);
					} else {
						@SendMessage(0, f_4d1_a1_s(L2), L3);
					}
				}
				@SendMessage(L4 | 65536, f_4d1_a1_s(L2));
			} else {
				@SendMessage(32768, f_4d1_a1_s(L2));
			}
		}
	}
}

string f_4d1_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

string f_4e1_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "cslot0" + (a0 + 1);
	}
	return "cslot" + (a0 + 1);
}

int f_4f1_a0_i(void)
{
	int L0;
	@GetInvItemByName(L0, "Money");
	return L0;
}

