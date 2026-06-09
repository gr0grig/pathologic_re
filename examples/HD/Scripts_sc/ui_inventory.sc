event OnChar 100;
event OnKeyUp 102;
event OnKeyDown 101;
event OnUpdate 1;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var object tv1;

	void init(void)
	{
		@CreateWindow("inventory_base.xml", false, tv1);
		f_9d_a1_v(0);
	}

	object f_9_a0_o(void)
	{
		object L0;
		@GetPlayerContainer(L0);
		return L0;
	}

	bool f_f_a3_b(int a0, string a1, object a2)
	{
		return false;
	}

	void f_12_a0_v(void)
	{
	}

	void f_13_a0_v(void)
	{
	}

	bool f_14_a2_b(int a0, bool a1)
	{
		if (a1) {
			f_23_a1_v(a0);
		} else {
			f_298_a2_b(tv0, a0);
		}
		return true;
	}

	void f_23_a1_v(int a0)
	{
		object L0;
		L0 = f_9_a0_o();
		int L1;
		L0->GetItemCount(L1, tv0);
		if (a0 >= L1) {
			return;
		}
		object L2;
		L0->GetItem(L2, a0, tv0);
		int L3;
		L2->GetItemID(L3);
		int L4;
		L0->GetItemAmount(L4, a0, tv0);
		bool L5;
		L0->IsItemSelected(L5, a0, tv0);
		if (tv0 == 0) {
			bool L6;
			@HasInvItemProperty(L6, L3, "Weapon");
			if (!L6) {
				return;
			}
			if (L5) {
				L0->SelectItem(a0, false, tv0);
				@SetPlayerHandsItem(-1);
			} else {
				int L7;
				@SetPlayerHandsItem(L3);
				for (L7 = 0; L7 < L1; L7++) {
					L0->SelectItem(L7, false, tv0);
				}
				L0->SelectItem(a0, true, tv0);
			}
		} else {
			if (tv0 == 1) {
				bool L8;
				@HasInvItemProperty(L8, L3, "Group");
				if (!L8) {
					return;
				}
				int L9;
				@GetInvItemProperty(L9, L3, "Group");
				if (L5) {
					L0->SelectItem(a0, false, tv0);
				} else {
					int L10;
					L10 = 0;
					for (; L10 < L1; L10++) {
						bool L11;
						object L12;
						int L13;
						bool L14;
						int L15;
						L0->IsItemSelected(L11, L10, tv0);
						if (!L11) {
							continue;
						}
						L0->GetItem(L12, L10, tv0);
						L12->GetItemID(L13);
						@HasInvItemProperty(L14, L13, "Group");
						if (!L14) {
							continue;
						}
						@GetInvItemProperty(L15, L13, "Group");
						if (L15 == L9) {
							L0->SelectItem(L10, false, tv0);
							break;
						}
					}
					L0->SelectItem(a0, true, tv0);
				}
			} else {
				bool L16;
				bool L17;
				@UseItem(a0, tv0, L16);
				if (L16) {
					L4 = L4 + -1;
					if (L4 == 0) {
						L0->RemoveItem(a0, 1, tv0);
					} else {
						L0->SetItemAmount(L4, a0, tv0);
					}
				}
			}
		}
	}

	void f_9d_a1_v(int a0)
	{
		int L0;
		tv0 = -1;
		f_23a_a1_v(a0);
		f_2ca_a1_v(tv0);
		f_253_a0_v();
		for (L0 = 0; L0 < 12; L0++) {
			object L1;
			@CreateStringVector(L1);
			L1->add(f_321_a1_s((L0 + 12 - 1) % 12));
			L1->add(f_321_a1_s((L0 + 12 + 1) % 12));
			@SendMessage(-1, f_321_a1_s(L0), L1);
		}
		f_e7_a0_v();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		f_13_a0_v();
		@ProcessEvents();
	}

	void f_e7_a0_v(void)
	{
		@SendMessage(-6, f_321_a1_s(0));
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnKeyUp(int a0)
	{
		f_178_a1_v(a0);
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 266) {
			if (tv0 == 0) {
				f_23a_a1_v(1);
			} else {
				if (tv0 == 1) {
					f_23a_a1_v(2);
				} else {
					if (tv0 == 2) {
						f_23a_a1_v(3);
					} else {
						if (tv0 == 3) {
							f_23a_a1_v(4);
						} else {
							if (tv0 == 4) {
								f_23a_a1_v(0);
							}
						}
					}
				}
			}
		} else {
			if (a0 == 265) {
				if (tv0 == 0) {
					f_23a_a1_v(4);
				} else {
					if (tv0 == 1) {
						f_23a_a1_v(0);
					} else {
						if (tv0 == 2) {
							f_23a_a1_v(1);
						} else {
							if (tv0 == 3) {
								f_23a_a1_v(2);
							} else {
								if (tv0 == 4) {
									f_23a_a1_v(3);
								}
							}
						}
					}
				}
			}
		}
		f_154_a1_v(a0);
	}

	void f_154_a1_v(int a0)
	{
		if (a0 == 269) {
			int L0;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-2, f_321_a1_s(L0));
			}
		}
		if (a0 == 270) {
			int L1;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-3, f_321_a1_s(L1));
			}
		}
	}

	void f_178_a1_v(int a0)
	{
		if (a0 == 273) {
			int L0;
			for (L0 = 0; L0 < 12; L0++) {
				@SendMessage(-2, f_321_a1_s(L0));
			}
		}
		if (a0 == 271) {
			int L1;
			for (L1 = 0; L1 < 12; L1++) {
				@SendMessage(-3, f_321_a1_s(L1));
			}
		}
	}

	bool f_19c_a1_b(object a0)
	{
		return false;
	}

	bool f_19f_a2_b(int a0, int a1)
	{
		bool L0;
		f_9_a0_o()->IsItemSelected(L0, a0, a1);
		return L0;
	}

	void OnUpdate(float a0)
	{
		f_2ca_a1_v(tv0);
		f_253_a0_v();
		f_12_a0_v();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		bool L0;
		L0 = false;
		if (a0 < 0) {
			L0 = f_f_a3_b(a0, a1, a2);
			return;
		}
		if (a1 == "button_weapon") {
			f_23a_a1_v(0);
			L0 = true;
		} else {
			if (a1 == "button_clothes") {
				f_23a_a1_v(1);
				L0 = true;
			} else {
				if (a1 == "button_medcine") {
					f_23a_a1_v(2);
					L0 = true;
				} else {
					if (a1 == "button_food") {
						f_23a_a1_v(3);
						L0 = true;
					} else {
						if (a1 == "button_other") {
							f_23a_a1_v(4);
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
										if (a1 == f_321_a1_s(L2)) {
											object L3;
											int L4;
											L3 = f_9_a0_o();
											L3->GetItemCount(L4, tv0);
											if (L4 > L2) {
												object L5;
												L3->GetItem(L5, L2, tv0);
												if (!f_19c_a1_b(L5)) {
													L0 = f_14_a2_b(L2, a0 == 0);
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
			L0 = f_f_a3_b(a0, a1, a2);
		}
		if (L0) {
		}
	}

	void f_23a_a1_v(int a0)
	{
		if (a0 == -1) {
			return;
		}
		if (tv0 == a0) {
			return;
		}
		tv0 = a0;
		f_25a_a1_v(tv0);
	}

	int f_248_a0_i(void)
	{
		object L0;
		int L1;
		L0 = f_9_a0_o();
		L0->GetProperty("money", L1);
		return L1;
	}

	void f_253_a0_v(void)
	{
		@SendMessage(f_248_a0_i(), "money");
	}

	void f_25a_a1_v(int a0)
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

	bool f_298_a2_b(int a0, int a1)
	{
		object L0;
		object L1;
		object L2;
		int L3;
		int L4;
		bool L5;
		L1 = f_9_a0_o();
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

	void f_2ca_a1_v(int a0)
	{
		object L0;
		int L1;
		int L2;
		L0 = f_9_a0_o();
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
				L5 = f_19f_a2_b(L2, a0);
				L6 = f_19c_a1_b(L3);
				if (L5) {
					if (L6) {
						@SendMessage(0, f_321_a1_s(L2), L3);
					} else {
						@SendMessage(16384, f_321_a1_s(L2), L3);
					}
				} else {
					if (L6) {
						@SendMessage(131072, f_321_a1_s(L2), L3);
					} else {
						@SendMessage(0, f_321_a1_s(L2), L3);
					}
				}
				@SendMessage(L4 | 65536, f_321_a1_s(L2));
			} else {
				@SendMessage(32768, f_321_a1_s(L2));
			}
		}
	}
}

string f_321_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

