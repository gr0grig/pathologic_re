event OnChar 100;
event OnUpdate 1;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		@FindActor(tv3, "player");
		if (!tv3) {
			@DestroyWindow();
			return;
		}
		@CreateWindow("inventory_base.xml", false, tv1);
		f_6e_a1_v(4);
	}

	object f_11_a0_o(void)
	{
		return tv3;
	}

	bool f_13_a3_b(int a0, string a1, object a2)
	{
		return false;
	}

	void f_16_a0_v(void)
	{
	}

	bool f_17_a1_b(object a0)
	{
		int L0;
		bool L1;
		a0->GetItemID(L0);
		@HasInvItemProperty(L1, L0, "Microscope");
		return !L1;
	}

	bool f_1f_a2_b(int a0, int a1)
	{
		object L0;
		f_11_a0_o()->GetItem(L0, a0, a1);
		return f_1e5_a2_b(tv2, L0);
	}

	void f_36_a0_v(void)
	{
	}

	bool f_37_a2_b(int a0, bool a1)
	{
		if (a1) {
			f_42_a1_v(a0);
			return true;
		}
		return false;
	}

	void f_42_a1_v(int a0)
	{
		object L0;
		object L1;
		bool L2;
		L0 = f_11_a0_o();
		L0->GetItem(L1, a0, tv0);
		L2 = f_1e5_a2_b(tv2, L1);
		if (L2) {
			tv2 = null;
			@SendMessage(0, "video");
		} else {
			int L3;
			@GetInvItemProperty(L3, f_1d6_a1_i(L1), "Microscope");
			@SendMessage(L3, "video");
			@SetVariable("microscope_" + f_1db_a1_s(L1), 1);
			tv2 = L1;
		}
	}

	void f_6e_a1_v(int a0)
	{
		tv0 = -1;
		f_111_a1_v(a0);
		f_16f_a1_v(tv0);
		f_12a_a0_v();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		f_36_a0_v();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnUpdate(float a0)
	{
		f_16f_a1_v(tv0);
		f_12a_a0_v();
		f_16_a0_v();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		bool L0;
		L0 = false;
		if (a1 == "button_weapon") {
			f_111_a1_v(0);
			L0 = true;
		} else {
			if (a1 == "button_clothes") {
				f_111_a1_v(1);
				L0 = true;
			} else {
				if (a1 == "button_medcine") {
					f_111_a1_v(2);
					L0 = true;
				} else {
					if (a1 == "button_food") {
						f_111_a1_v(3);
						L0 = true;
					} else {
						if (a1 == "button_other") {
							f_111_a1_v(4);
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
										if (a1 == f_1c6_a1_s(L2)) {
											object L3;
											int L4;
											L3 = f_11_a0_o();
											L3->GetItemCount(L4, tv0);
											if (L4 > L2) {
												object L5;
												L3->GetItem(L5, L2, tv0);
												if (!f_17_a1_b(L5)) {
													L0 = f_37_a2_b(L2, a0 == 0);
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
			L0 = f_13_a3_b(a0, a1, a2);
		}
		if (L0) {
		}
	}

	void f_111_a1_v(int a0)
	{
		if (a0 == -1) {
			return;
		}
		if (tv0 == a0) {
			return;
		}
		tv0 = a0;
		f_131_a1_v(tv0);
	}

	int f_11f_a0_i(void)
	{
		object L0;
		int L1;
		L0 = f_11_a0_o();
		L0->GetProperty("money", L1);
		return L1;
	}

	void f_12a_a0_v(void)
	{
		@SendMessage(f_11f_a0_i(), "money");
	}

	void f_131_a1_v(int a0)
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

	void f_16f_a1_v(int a0)
	{
		object L0;
		int L1;
		int L2;
		L0 = f_11_a0_o();
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
				L5 = f_1f_a2_b(L2, a0);
				L6 = f_17_a1_b(L3);
				if (L5) {
					if (L6) {
						@SendMessage(0, f_1c6_a1_s(L2), L3);
					} else {
						@SendMessage(16384, f_1c6_a1_s(L2), L3);
					}
				} else {
					if (L6) {
						@SendMessage(131072, f_1c6_a1_s(L2), L3);
					} else {
						@SendMessage(0, f_1c6_a1_s(L2), L3);
					}
				}
				@SendMessage(L4 | 65536, f_1c6_a1_s(L2));
			} else {
				@SendMessage(32768, f_1c6_a1_s(L2));
			}
		}
	}
}

string f_1c6_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

int f_1d6_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

string f_1db_a1_s(object a0)
{
	int L0;
	string L1;
	L0 = f_1d6_a1_i(a0);
	@GetInvItemName(L1, L0);
	return L1;
}

bool f_1e5_a2_b(object a0, object a1)
{
	bool L0;
	if (!a0 || !a1) {
		return false;
	}
	a0->Compare(L0, a1);
	return L0;
}

