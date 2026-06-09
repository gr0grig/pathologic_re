event OnUse 0;

maintask t0
{
	void init(void)
	{
		object L0;
		bool L1;
		@SetVisibility(true);
		@DisableUpdate();
		@GetScene(L0);
		L0->GetProperty("nailed", L1);
		if (L1) {
			f_d2_a3_v("Knife", 1, 30);
			f_d2_a3_v("tvirin", 1, 10);
			f_dd_a4_v("lemon", 1, 20, 2);
			f_d2_a3_v("funduk", 1, 40);
			f_d2_a3_v("peanut", 1, 40);
			f_d2_a3_v("walnut", 1, 40);
			f_dd_a4_v("Money", 1, 2, 5);
		} else {
			f_d2_a3_v("Knife", 1, 30);
			f_d2_a3_v("tvirin", 1, 20);
			f_dd_a4_v("lemon", 1, 10, 2);
			f_dd_a4_v("funduk", 1, 50, 2);
			f_dd_a4_v("peanut", 1, 50, 2);
			f_dd_a4_v("walnut", 1, 50, 2);
			f_dd_a4_v("rusk", 1, 10, 2);
			f_d2_a3_v("dried_fish", 1, 50);
			f_d2_a3_v("egg", 1, 40);
			f_d2_a3_v("vegetables", 1, 50);
			f_d2_a3_v("milk", 1, 30);
			f_d2_a3_v("dried_meat", 1, 50);
			f_d2_a3_v("smoked_meat", 1, 50);
			f_d2_a3_v("fresh_fish", 1, 50);
			f_d2_a3_v("fresh_meat", 1, 50);
			f_d2_a3_v("bread", 1, 10);
			f_dd_a4_v("Money", 1, 2, 3);
		}
		f_ab_a0_v();
	}

	void f_ab_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_f1_a0_b()) {
			return;
		}
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				int L2;
				@GetItemCount(L2);
				if (L2) {
					object L3;
					@GetScene(L3);
					@BroadcastSteal(a0, L3);
				}
				@Barter(a0);
			}
			enable OnUse;
		}
	}
}

void f_d2_a3_v(string a0, int a1, int a2)
{
	if (f_ec_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_dd_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_ec_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

bool f_ec_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_f1_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

