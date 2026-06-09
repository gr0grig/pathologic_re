event OnGameTime 9;
event OnUnload 6;
event OnUse 0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		f_6b_a0_v();
		@SetVisibility(true);
		tv0 = false;
		@SetTimeEvent(0, 24);
		f_25_a0_v();
	}

	void OnGameTime(int a0, float a1)
	{
		if (!f_43_a0_b()) {
			@RemoveActor(f_48_a0_o());
		} else {
			tv0 = true;
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(f_48_a0_o());
		}
	}

	void f_25_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_4e_a0_b()) {
			return;
		}
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				@WorkWithCorpse(a0);
			}
			enable OnUse;
		}
	}
}

bool f_43_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_48_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_4e_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_54_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_5a_a1_v(string a0)
{
	object L0;
	int L1;
	bool L2;
	@CreateInvItem(L0);
	L0->SetItemName(a0);
	L0->SetProperty("Organ", 1);
	L0->GetItemID(L1);
	@AddItem(L2, L0, 0, 1);
}

void f_6b_a0_v(void)
{
	if (f_54_a0_i() != 1) {
		return;
	}
	f_5a_a1_v("liver");
	f_5a_a1_v("kidney");
	f_5a_a1_v("heart");
	f_5a_a1_v("blood");
}

