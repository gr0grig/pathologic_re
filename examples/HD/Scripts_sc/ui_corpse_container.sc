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
		@CreateWindow("inventory_base.xml", false, tv1);
		f_2ab_a0_v();
		tv3 = 2;
		int L0;
		for (L0 = 0; L0 < 4; L0++) {
			object L1;
			string L2;
			string L3;
			@CreateStringVector(L1);
			if (L0 - 1 >= 0) {
				L2 = f_688_a1_s(L0 - 1);
			} else {
				L2 = "$parent";
			}
			if (L0 + 1 < 4) {
				L3 = f_688_a1_s(L0 + 1);
			} else {
				L3 = "$parent";
			}
			L1->add(L2);
			L1->add(L3);
			@SendMessage(-1, f_688_a1_s(L0), L1);
		}
		int L4;
		for (L4 = 0; L4 < 4; L4++) {
			object L5;
			@CreateStringVector(L5);
			L5->add(f_698_a1_s((L4 + 4 - 1) % 4));
			L5->add(f_698_a1_s((L4 + 4 + 1) % 4));
			@SendMessage(-1, f_698_a1_s(L4), L5);
		}
		f_3a2_a1_v(0);
	}

	void f_64_a0_v(void)
	{
		@SendMessage(-6, f_678_a1_s(0));
		@SendMessage(-6, f_698_a1_s(0));
		@SendMessage(-6, f_688_a1_s(0));
	}

	void f_7a_a1_v(int a0)
	{
		if (a0 == 267) {
			if (tv3 == 0) {
				int L0;
				tv3 = 1;
				for (L0 = 0; L0 < 4; L0++) {
					@SendMessage(-7, f_698_a1_s(L0));
				}
			} else {
				if (tv3 == 1 || tv3 == 2) {
					int L1;
					tv3 = 2;
					for (L1 = 0; L1 < 4; L1++) {
						@SendMessage(-7, f_688_a1_s(L1));
					}
				}
			}
		}
		if (a0 == 268) {
			if (tv3 == 1 || tv3 == 0) {
				int L2;
				tv3 = 0;
				for (L2 = 0; L2 < 12; L2++) {
					@SendMessage(-7, f_678_a1_s(L2));
				}
			} else {
				if (tv3 == 2) {
					int L3;
					tv3 = 1;
					for (L3 = 0; L3 < 4; L3++) {
						@SendMessage(-7, f_698_a1_s(L3));
					}
				}
			}
		}
		if (tv3 == 0) {
			f_451_a1_v(a0);
			return;
		}
		if (a0 == 269) {
			int L4;
			L4 = 0;
			for (; L4 < 4; L4++) {
				if (tv3 == 2) {
					@SendMessage(-2, f_688_a1_s(L4));
				} else {
					if (tv3 == 1) {
						@SendMessage(-2, f_698_a1_s(L4));
					}
				}
			}
		}
		if (a0 == 270) {
			int L5;
			L5 = 0;
			for (; L5 < 4; L5++) {
				if (tv3 == 2) {
					@SendMessage(-3, f_688_a1_s(L5));
				} else {
					if (tv3 == 1) {
						@SendMessage(-3, f_698_a1_s(L5));
					}
				}
			}
		}
	}

	void f_120_a1_v(int a0)
	{
		if (a0 == 272) {
			if (tv3 == 0) {
				int L0;
				tv3 = 1;
				for (L0 = 0; L0 < 4; L0++) {
					@SendMessage(-7, f_698_a1_s(L0));
				}
			} else {
				if (tv3 == 1 || tv3 == 2) {
					int L1;
					tv3 = 2;
					for (L1 = 0; L1 < 4; L1++) {
						@SendMessage(-7, f_688_a1_s(L1));
					}
				}
			}
		}
		if (a0 == 274) {
			if (tv3 == 1 || tv3 == 0) {
				int L2;
				tv3 = 0;
				for (L2 = 0; L2 < 12; L2++) {
					@SendMessage(-7, f_678_a1_s(L2));
				}
			} else {
				if (tv3 == 2) {
					int L3;
					tv3 = 1;
					for (L3 = 0; L3 < 4; L3++) {
						@SendMessage(-7, f_698_a1_s(L3));
					}
				}
			}
		}
		if (tv3 == 0) {
			f_475_a1_v(a0);
			return;
		}
		if (a0 == 273) {
			int L4;
			L4 = 0;
			for (; L4 < 4; L4++) {
				if (tv3 == 2) {
					@SendMessage(-2, f_688_a1_s(L4));
				} else {
					if (tv3 == 1) {
						@SendMessage(-2, f_698_a1_s(L4));
					}
				}
			}
		}
		if (a0 == 271) {
			int L5;
			L5 = 0;
			for (; L5 < 4; L5++) {
				if (tv3 == 2) {
					@SendMessage(-3, f_688_a1_s(L5));
				} else {
					if (tv3 == 1) {
						@SendMessage(-3, f_698_a1_s(L5));
					}
				}
			}
		}
	}

	object f_1c6_a0_o(void)
	{
		object L0;
		@GetPlayerContainer(L0);
		return L0;
	}

	bool f_1cc_a3_b(int a0, string a1, object a2)
	{
		if (a0 == -4) {
			if (a1 == f_688_a1_s(0)) {
				if (tv2 > 0) {
					tv2 = tv2 + -1;
					f_2d3_a0_v();
					f_2ab_a0_v();
				}
			} else {
				if (a1 == f_688_a1_s(3)) {
					object L0;
					int L1;
					@GetContainer(L0);
					L0->GetItemCount(L1);
					if (tv2 + 4 <= L1) {
						tv2 = tv2 + 1;
						f_2d3_a0_v();
						f_2ab_a0_v();
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
		if (a0 == -10) {
			tv3 = 1;
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
			if (a1 == f_698_a1_s(L2)) {
				f_27e_a2_v(f_34e_a2_i(L2, true), true);
				return true;
			}
		}
		int L3;
		for (L3 = 0; L3 < 4; L3++) {
			if (a1 == f_688_a1_s(L3)) {
				f_28e_a2_v(f_34e_a2_i(L3, false), true);
				return true;
			}
		}
		if (a1 == "scrollbar") {
			int L4;
			L4 = f_384_a0_i();
			tv2 = 0.009999999776482582 * (L4 - 4) * a0 + 0.5;
			if (tv2 < 0) {
				tv2 = 0;
			}
			f_2d3_a0_v();
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
		f_2ab_a0_v();
	}

	void f_273_a0_v(void)
	{
		f_2d3_a0_v();
	}

	void f_277_a0_v(void)
	{
		f_2ab_a0_v();
		f_2d3_a0_v();
	}

	void f_27e_a2_v(int a0, bool a1)
	{
		bool L0;
		@PlaySound("take_organ");
		f_537_a1_v(f_59f_a2_i(L0, a0));
		if (!L0) {
		}
	}

	void f_28e_a2_v(int a0, bool a1)
	{
		bool L0;
		f_537_a1_v(f_59f_a2_i(L0, a0 + tv2));
		if (!L0) {
		}
		f_2ab_a0_v();
	}

	bool f_29e_a2_b(int a0, int a1)
	{
		f_5ef_a2_b(tv0, a0);
		tv2 = tv2 + 1;
		f_2ab_a0_v();
		return true;
	}

	void f_2ab_a0_v(void)
	{
		int L0;
		L0 = f_384_a0_i();
		if (L0 <= 4) {
			@SendMessage(16384, "scrollbar");
			tv2 = 0;
		} else {
			if (tv2 + 4 > L0) {
				int L1;
				tv2 = tv2 - (tv2 + 4 - L0);
				L1 = tv2 * 100 / (L0 - 4);
				@SendMessage(L1, "scrollbar");
			} else {
				int L2;
				L2 = tv2 * 100 / (L0 - 4);
				@SendMessage(L2, "scrollbar");
			}
		}
	}

	void f_2d3_a0_v(void)
	{
		object L0;
		@GetContainer(L0);
		int L1;
		L0->GetItemCount(L1);
		int L2;
		L2 = 0;
		int L3;
		L3 = 0;
		for (; L3 < L1; L3++) {
			object L4;
			int L5;
			int L6;
			bool L7;
			L0->GetItem(L4, L3);
			L4->GetItemID(L5);
			L0->GetItemAmount(L6, L3);
			L7 = false;
			L4->HasProperty(L7, "Organ");
			if (L7) {
				continue;
			}
			if (L2 >= tv2) {
				@SendMessage(0, f_688_a1_s(L2 - tv2), L4);
				@SendMessage(L6 | 65536, f_688_a1_s(L2 - tv2));
			}
			L2 = L2 + 1;
			if (L2 >= 4 + tv2) {
				break;
			}
		}
		int L8;
		for (L8 = L2 + tv2; L8 < 4 + tv2; L8++) {
			@SendMessage(32768, f_688_a1_s(L8 - tv2));
		}
		L2 = 0;
		int L9;
		L9 = 0;
		for (; L9 < L1; L9++) {
			object L10;
			int L11;
			int L12;
			bool L13;
			L0->GetItem(L10, L9);
			L10->GetItemID(L11);
			L0->GetItemAmount(L12, L9);
			L13 = false;
			L10->HasProperty(L13, "Organ");
			if (!L13) {
				continue;
			}
			@SendMessage(0, f_698_a1_s(L2), L10);
			@SendMessage(L12 | 65536, f_698_a1_s(L2));
			L2 = L2 + 1;
			if (L2 >= 4) {
				break;
			}
		}
		int L14;
		for (L14 = L2; L14 < 4; L14++) {
			@SendMessage(32768, f_698_a1_s(L14));
		}
	}

	int f_34e_a2_i(int a0, bool a1)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		int L4;
		@GetContainer(L0);
		L0->GetItemCount(L1);
		L2 = 0;
		L3 = 0;
		for (L4 = 0; L4 < L1; L4++) {
			object L5;
			int L6;
			int L7;
			bool L8;
			L0->GetItem(L5, L4);
			L5->GetItemID(L6);
			L0->GetItemAmount(L7, L4);
			L8 = false;
			L5->HasProperty(L8, "Organ");
			if (L8) {
				if (a1 && L2 == a0) {
					return L4;
				}
				L2 = L2 + 1;
			} else {
				if (!a1 && L3 == a0) {
					return L4;
				}
				L3 = L3 + 1;
			}
		}
		return -1;
	}

	int f_384_a0_i(void)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		@GetContainer(L0);
		L0->GetItemCount(L1);
		L2 = 0;
		for (L3 = 0; L3 < L1; L3++) {
			object L4;
			int L5;
			int L6;
			bool L7;
			L0->GetItem(L4, L3);
			L4->GetItemID(L5);
			L0->GetItemAmount(L6, L3);
			L7 = false;
			L4->HasProperty(L7, "Organ");
			if (!L7) {
				L2 = L2 + 1;
			}
		}
		return L2;
	}

	void f_3a2_a1_v(int a0)
	{
		int L0;
		tv0 = -1;
		f_537_a1_v(a0);
		f_621_a1_v(tv0);
		f_55a_a0_v();
		for (L0 = 0; L0 < 12; L0++) {
			object L1;
			@CreateStringVector(L1);
			L1->add(f_678_a1_s((L0 + 12 - 1) % 12));
			L1->add(f_678_a1_s((L0 + 12 + 1) % 12));
			@SendMessage(-1, f_678_a1_s(L0), L1);
		}
		f_64_a0_v();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		f_277_a0_v();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnKeyUp(int a0)
	{
		f_120_a1_v(a0);
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 266) {
			if (tv0 == 0) {
				f_537_a1_v(1);
			} else {
				if (tv0 == 1) {
					f_537_a1_v(2);
				} else {
					if (tv0 == 2) {
						f_537_a1_v(3);
					} else {
						if (tv0 == 3) {
							f_537_a1_v(4);
						} else {
							if (tv0 == 4) {
								f_537_a1_v(0);
							}
						}
					}
				}
			}
		} else {
			if (a0 == 265) {
				if (tv0 == 0) {
					f_537_a1_v(4);
				} else {
					if (tv0 == 1) {
						f_537_a1_v(0);
					} else {
						if (tv0 == 2) {
							f_537_a1_v(1);
						} else {
							if (tv0 == 3) {
								f_537_a1_v(2);
							} else {
								if (tv0 == 4) {
									f_537_a1_v(3);
								}
							}
						}
					}
				}
			}
		}
		f_7a_a1_v(a0);
	}

	void f_451_a1_v(int a0)
	{
		if (a0 == 269) {
			int L0;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-2, f_678_a1_s(L0));
			}
		}
		if (a0 == 270) {
			int L1;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-3, f_678_a1_s(L1));
			}
		}
	}

	void f_475_a1_v(int a0)
	{
		if (a0 == 273) {
			int L0;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-2, f_678_a1_s(L0));
			}
		}
		if (a0 == 271) {
			int L1;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-3, f_678_a1_s(L1));
			}
		}
	}

	bool f_499_a1_b(object a0)
	{
		return false;
	}

	bool f_49c_a2_b(int a0, int a1)
	{
		bool L0;
		f_1c6_a0_o()->IsItemSelected(L0, a0, a1);
		return L0;
	}

	void OnUpdate(float a0)
	{
		f_621_a1_v(tv0);
		f_55a_a0_v();
		f_273_a0_v();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		bool L0;
		L0 = false;
		if (a0 < 0) {
			L0 = f_1cc_a3_b(a0, a1, a2);
			return;
		}
		if (a1 == "button_weapon") {
			f_537_a1_v(0);
			L0 = true;
		} else {
			if (a1 == "button_clothes") {
				f_537_a1_v(1);
				L0 = true;
			} else {
				if (a1 == "button_medcine") {
					f_537_a1_v(2);
					L0 = true;
				} else {
					if (a1 == "button_food") {
						f_537_a1_v(3);
						L0 = true;
					} else {
						if (a1 == "button_other") {
							f_537_a1_v(4);
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
										if (a1 == f_678_a1_s(L2)) {
											object L3;
											int L4;
											L3 = f_1c6_a0_o();
											L3->GetItemCount(L4, tv0);
											if (L4 > L2) {
												object L5;
												L3->GetItem(L5, L2, tv0);
												if (!f_499_a1_b(L5)) {
													L0 = f_29e_a2_b(L2, a0 == 0);
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
			L0 = f_1cc_a3_b(a0, a1, a2);
		}
		if (L0) {
		}
	}

	void f_537_a1_v(int a0)
	{
		if (a0 == -1) {
			return;
		}
		if (tv0 == a0) {
			return;
		}
		tv0 = a0;
		f_561_a1_v(tv0);
	}

	int f_545_a0_i(void)
	{
		object L0;
		int L1;
		L0 = f_1c6_a0_o();
		L0->GetProperty("money", L1);
		return L1;
	}

	void f_550_a1_v(int a0)
	{
		object L0;
		L0 = f_1c6_a0_o();
		L0->SetProperty("money", a0);
	}

	void f_55a_a0_v(void)
	{
		@SendMessage(f_545_a0_i(), "money");
	}

	void f_561_a1_v(int a0)
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

	int f_59f_a2_i(bool a0, int a1)
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
		L1 = f_1c6_a0_o();
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
		if (L5 == f_6a8_a0_i()) {
			L8 = f_545_a0_i();
			L8 = L8 + L4;
			f_550_a1_v(L8);
			L0->RemoveItem(a1, L4);
			f_55a_a0_v();
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

	bool f_5ef_a2_b(int a0, int a1)
	{
		object L0;
		object L1;
		object L2;
		int L3;
		int L4;
		bool L5;
		L1 = f_1c6_a0_o();
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

	void f_621_a1_v(int a0)
	{
		object L0;
		int L1;
		int L2;
		L0 = f_1c6_a0_o();
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
				L5 = f_49c_a2_b(L2, a0);
				L6 = f_499_a1_b(L3);
				if (L5) {
					if (L6) {
						@SendMessage(0, f_678_a1_s(L2), L3);
					} else {
						@SendMessage(16384, f_678_a1_s(L2), L3);
					}
				} else {
					if (L6) {
						@SendMessage(131072, f_678_a1_s(L2), L3);
					} else {
						@SendMessage(0, f_678_a1_s(L2), L3);
					}
				}
				@SendMessage(L4 | 65536, f_678_a1_s(L2));
			} else {
				@SendMessage(32768, f_678_a1_s(L2));
			}
		}
	}
}

string f_678_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

string f_688_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "cslot0" + (a0 + 1);
	}
	return "cslot" + (a0 + 1);
}

string f_698_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "ccslot0" + (a0 + 1);
	}
	return "ccslot" + (a0 + 1);
}

int f_6a8_a0_i(void)
{
	int L0;
	@GetInvItemByName(L0, "Money");
	return L0;
}

