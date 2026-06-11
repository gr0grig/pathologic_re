event OnChar 100;
event OnUpdate 1;
event OnMessage 200;

maintask t0
{
	var int tv0;

	void init(void)
	{
		tv0 = 0;
		f_1b5_a1_v(tv0);
		f_17d_a1_v(tv0);
		f_146_a0_v();
		f_13f_a0_v();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnUpdate(float a0)
	{
		f_17d_a1_v(tv0);
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "button_weapon") {
			tv0 = 0;
		} else {
			if (a1 == "button_clothes") {
				tv0 = 1;
			} else {
				if (a1 == "button_medcine") {
					tv0 = 2;
				} else {
					if (a1 == "button_food") {
						tv0 = 3;
					} else {
						if (a1 == "button_other") {
							tv0 = 4;
						} else {
							if (a1 == "button_detector") {
							} else {
								if (a1 == "button_anticeptic") {
								} else {
									if (a0 != 0) {
										int L0;
										@GetVariable("noinv_drop", L0);
										if (L0) {
											return;
										}
									}
									int L1;
									for (L1 = 0; L1 < 12; L1++) {
										if (a1 == f_a1_a1_s(L1)) {
											if (f_c1_a0_b()) {
												int L2;
												L2 = f_df_a2_b(tv0, L1);
											} else {
												if (a0 == 0) {
													f_1f3_a2_v(tv0, L1);
												} else {
													int L3;
													L3 = f_df_a2_b(tv0, L1);
												}
											}
											break;
										}
									}
									int L4;
									for (L4 = 0; L4 < f_c6_a0_i(); L4++) {
										if (a1 == f_b1_a1_s(L4)) {
											int L5;
											L5 = f_103_a1_i(L4);
											if (L5 != -1) {
												tv0 = L5;
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
		f_1b5_a1_v(tv0);
		f_17d_a1_v(tv0);
		f_146_a0_v();
	}
}

string f_a1_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "slot0" + (a0 + 1);
	}
	return "slot" + (a0 + 1);
}

string f_b1_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "cslot0" + (a0 + 1);
	}
	return "cslot" + (a0 + 1);
}

bool f_c1_a0_b(void)
{
	bool L0;
	@HasContainer(L0);
	return L0;
}

int f_c6_a0_i(void)
{
	object L0;
	int L1;
	if (!f_c1_a0_b()) {
		return false;
	}
	@GetContainer(L0);
	if (L0 == null) {
		return 0;
	}
	L0->GetCapacity(L1);
	return L1;
}

int f_d9_a0_i(void)
{
	int L0;
	@GetInvItemByName(L0, "Money");
	return L0;
}

bool f_df_a2_b(int a0, int a1)
{
	object L0;
	object L1;
	object L2;
	int L3;
	int L4;
	int L5;
	bool L6;
	@Trace("MoveToContainer");
	@GetPlayerContainer(L1);
	@GetContainer(L0);
	L1->GetItemCount(L3, a0);
	if (L3 <= a1) {
		return false;
	}
	L1->GetItemAmount(L4, a1, a0);
	L1->GetItem(L2, a1, a0);
	L2->GetItemID(L5);
	L0->AddItem(L6, L2, 0, 1);
	if (!L6) {
		return false;
	}
	L1->RemoveItem(a1, 1, a0);
	return true;
}

int f_103_a1_i(int a0)
{
	object L0;
	object L1;
	object L2;
	int L3;
	int L4;
	int L5;
	int L6;
	int L7;
	bool L8;
	bool L9;
	@Trace("MoveToPlayerContainer");
	@GetPlayerContainer(L1);
	@GetContainer(L0);
	L0->GetItemCount(L3);
	if (L3 <= a0) {
		return -1;
	}
	L0->GetItemAmount(L4, a0);
	if (L4 == 0) {
		return -1;
	}
	L0->GetItem(L2, a0);
	L2->GetItemID(L5);
	@GetInvItemProperty(L6, L5, "Category");
	if (L5 == f_d9_a0_i()) {
		@GetPlayerMoneyCount(L7);
		L7 = L7 + L4;
		@SetPlayerMoneyCount(L7);
		L0->RemoveItem(a0, L4);
		f_13f_a0_v();
		return -1;
	}
	L1->AddItem(L9, L2, L6, 1);
	if (!L9) {
		return -1;
	}
	L0->RemoveItem(a0, 1);
	return L6;
}

void f_13f_a0_v(void)
{
	int L0;
	@GetPlayerMoneyCount(L0);
	@SendMessage(L0, "money");
}

void f_146_a0_v(void)
{
	object L0;
	int L1;
	int L2;
	int L3;
	if (!f_c1_a0_b()) {
		return;
	}
	@GetContainer(L0);
	L0->GetItemCount(L1);
	L2 = f_c6_a0_i();
	L3 = 0;
	for (; L3 < L2; L3++) {
		if (L3 < L1) {
			object L4;
			int L5;
			int L6;
			L0->GetItem(L4, L3);
			L4->GetItemID(L5);
			L0->GetItemAmount(L6, L3);
			@SendMessage(0, f_b1_a1_s(L3), L4);
			@SendMessage(L6 | 65536, f_b1_a1_s(L3));
		} else {
			@SendMessage(32768, f_b1_a1_s(L3));
		}
	}
}

void f_17d_a1_v(int a0)
{
	object L0;
	int L1;
	int L2;
	@GetPlayerContainer(L0);
	L0->GetItemCount(L1, a0);
	L2 = 0;
	for (; L2 < 12; L2++) {
		if (L2 < L1) {
			object L3;
			int L4;
			bool L5;
			L0->GetItem(L3, L2, a0);
			L0->GetItemAmount(L4, L2, a0);
			L0->IsItemSelected(L5, L2, a0);
			if (L5) {
				@SendMessage(16384, f_a1_a1_s(L2), L3);
			} else {
				@SendMessage(0, f_a1_a1_s(L2), L3);
			}
			@SendMessage(L4 | 65536, f_a1_a1_s(L2));
		} else {
			@SendMessage(32768, f_a1_a1_s(L2));
		}
	}
}

void f_1b5_a1_v(int a0)
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

void f_1f3_a2_v(int a0, int a1)
{
	object L0;
	@GetPlayerContainer(L0);
	int L1;
	L0->GetItemCount(L1, a0);
	if (a1 >= L1) {
		return;
	}
	object L2;
	L0->GetItem(L2, a1, a0);
	int L3;
	L2->GetItemID(L3);
	int L4;
	L0->GetItemAmount(L4, a1, a0);
	bool L5;
	L0->IsItemSelected(L5, a1, a0);
	if (a0 == 0) {
		bool L6;
		@HasInvItemProperty(L6, L3, "Weapon");
		if (!L6) {
			return;
		}
		if (L5) {
			L0->SelectItem(a1, false, a0);
			@SetPlayerHandsItem(-1);
		} else {
			int L7;
			@SetPlayerHandsItem(L3);
			for (L7 = 0; L7 < L1; L7++) {
				L0->SelectItem(L7, false, a0);
			}
			L0->SelectItem(a1, true, a0);
		}
	} else {
		if (a0 == 1) {
			bool L8;
			@HasInvItemProperty(L8, L3, "Group");
			if (!L8) {
				return;
			}
			int L9;
			@GetInvItemProperty(L9, L3, "Group");
			if (L5) {
				L0->SelectItem(a1, false, a0);
			} else {
				int L10;
				L10 = 0;
				for (; L10 < L1; L10++) {
					bool L11;
					object L12;
					int L13;
					bool L14;
					int L15;
					L0->IsItemSelected(L11, L10, a0);
					if (!L11) {
						continue;
					}
					L0->GetItem(L12, L10, a0);
					L12->GetItemID(L13);
					@HasInvItemProperty(L14, L13, "Group");
					if (!L14) {
						continue;
					}
					@GetInvItemProperty(L15, L13, "Group");
					if (L15 == L9) {
						L0->SelectItem(L10, false, a0);
						break;
					}
				}
				L0->SelectItem(a1, true, a0);
			}
		} else {
			bool L16;
			bool L17;
			@UseItem(a1, a0, L16);
			if (L16) {
				L4 = L4 + -1;
				if (L4 == 0) {
					L0->RemoveItem(a1, 1, a0);
				} else {
					L0->SetItemAmount(L4, a1, a0);
				}
			}
		}
	}
	f_17d_a1_v(a0);
}

