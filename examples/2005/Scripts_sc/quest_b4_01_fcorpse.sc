event OnUnload 6;
event OnUse 0;

maintask t0
{
	void init(void)
	{
		@SetVisibility(true);
		f_51_a0_v();
		f_10_a0_v();
	}

	void OnUnload(void)
	{
		@RemoveActor(f_2e_a0_o());
	}

	void f_10_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		if (!a0 || !f_34_a0_b()) {
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

object f_2e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_34_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

int f_3a_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_40_a1_v(string a0)
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

void f_51_a0_v(void)
{
	if (f_3a_a0_i() != 1) {
		return;
	}
	f_40_a1_v("liver");
	f_40_a1_v("kidney");
	f_40_a1_v("heart");
	f_40_a1_v("blood");
}

