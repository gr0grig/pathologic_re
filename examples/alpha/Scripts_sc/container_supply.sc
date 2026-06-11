event OnGameTime 9;
event OnLoad 5;
event OnUse 0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		tv0 = f_69_a0_o();
		@SetVisibility(true);
		f_e_a0_v();
		f_51_a0_v();
	}

	void f_e_a0_v(void)
	{
		float L0;
		int L1;
		@GetGameTime(L0);
		for (L1 = (int)(L0 / 24) + 1; L1 < 12; L1++) {
			@SetTimeEvent(L1, L1 * 24);
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_3d_a1_v(a0 + 1);
	}

	void OnLoad(void)
	{
		int L0;
		int L1;
		if (!tv0) {
			return;
		}
		tv0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			bool L3;
			tv0->get(L2, L1);
			@AddItem(L3, L2, 0);
		}
		tv0->clear();
	}

	void f_3d_a1_v(int a0)
	{
		bool L0;
		@HasProperty("enabled", L0);
		if (L0) {
			bool L1;
			@GetProperty("enabled", L1);
			if (L1) {
				object L2;
				@CreateInvItem(L2);
				L2->SetItemName("alpha_pills");
				tv0->add(L2);
			}
		}
	}

	void f_51_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!f_6f_a0_b()) {
			return;
		}
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				@Barter(a0);
			}
			enable OnUse;
		}
	}
}

object f_69_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

bool f_6f_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

