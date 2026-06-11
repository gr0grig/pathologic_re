event OnTrigger 26;
event OnUnload 6;
event OnUse 0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		f_27_a0_v();
	}

	void f_5_a0_v(void)
	{
		if (tv0) {
			@RemoveActor(f_9d_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_9d_a0_o());
			}
		}
	}

	void OnUnload(void)
	{
		f_5_a0_v();
	}

	void f_20_a1_v(object a0)
	{
		f_ad_a2_b("quest_d10_01", "soldier_fight");
	}

	void f_27_a0_v(void)
	{
		object L0;
		@FindGeometry("object", L0);
		L0->Enable(true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		object L0;
		int L1;
		if (!f_85_a1_b(a0)) {
			return;
		}
		@GetItem(L0, 0);
		@GetItemAmount(L1, 0);
		if (f_a3_a3_b(a0, L0, L1)) {
			f_20_a1_v(a0);
			@SetDeathStateAndRemove();
		}
	}
}

bool f_50_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_5c_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_61_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_5c_a1_b(a0)) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	return true;
}

bool f_85_a1_b(object a0)
{
	int L0;
	if (!f_61_a1_b(a0)) {
		return false;
	}
	if (!f_50_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_9d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_a3_a3_b(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	return L2;
}

bool f_ad_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

