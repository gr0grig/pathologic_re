event OnUse 0;

maintask t0
{
	void init(void)
	{
		@SetVisibility(true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		object L0;
		int L1;
		if (!f_61_a1_b(a0) || !f_7f_a0_b()) {
			return;
		}
		@GetItem(L0, 0);
		@GetItemAmount(L1, 0);
		if (f_85_a3_b(a0, L0, L1)) {
			@RemoveActor(f_79_a0_o());
		}
	}
}

bool f_2c_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_38_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_3d_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_38_a1_b(a0)) {
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

bool f_61_a1_b(object a0)
{
	int L0;
	if (!f_3d_a1_b(a0)) {
		return false;
	}
	if (!f_2c_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_79_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_7f_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

bool f_85_a3_b(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	return L2;
}

