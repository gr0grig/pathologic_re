event OnTrigger 26;
event OnUnload 6;
event OnUse 0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		f_2b_a0_v();
	}

	void f_5_a0_v(void)
	{
		if (tv0) {
			@RemoveActor(f_a6_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_a6_a0_o());
			}
		}
	}

	void OnUnload(void)
	{
		f_5_a0_v();
	}

	void f_20_a1_v(object a0)
	{
		f_c9_a2_b("quest_d10_01", "soldier_fight");
		f_52_a1_v(a0);
	}

	void f_2b_a0_v(void)
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
		if (!f_8e_a1_b(a0)) {
			return;
		}
		@GetItem(L0, 0);
		@GetItemAmount(L1, 0);
		if (f_b8_a3_b(a0, L0, L1)) {
			f_20_a1_v(a0);
		}
	}
}

void f_52_a1_v(object a0)
{
	@RemoveActor(f_a6_a0_o());
}

bool f_59_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_65_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_6a_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_65_a1_b(a0)) {
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

bool f_8e_a1_b(object a0)
{
	int L0;
	if (!f_6a_a1_b(a0)) {
		return false;
	}
	if (!f_59_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_a6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_ac_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

bool f_b8_a3_b(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (L2) {
		f_ac_a2_v(L0, a2);
	}
	return L2;
}

bool f_c9_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

