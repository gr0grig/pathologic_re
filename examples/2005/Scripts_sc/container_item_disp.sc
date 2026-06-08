event OnUse 0;
event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;

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
		if (!f_8f_a1_b(a0) || !f_ad_a0_b()) {
			return;
		}
		@GetItem(L0, 0);
		@GetItemAmount(L1, 0);
		if (f_bf_a3_b(a0, L0, L1)) {
			@RemoveActor(f_a7_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_58_a0_b()) {
				@RemoveActor(f_a7_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_58_a0_b()) {
			@RemoveActor(f_a7_a0_o());
		}
	}
}

bool f_58_a0_b(void)
{
	return true;
}

bool f_5a_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_66_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_6b_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_66_a1_b(a0)) {
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

bool f_8f_a1_b(object a0)
{
	int L0;
	if (!f_6b_a1_b(a0)) {
		return false;
	}
	if (!f_5a_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_a7_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_ad_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

void f_b3_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

bool f_bf_a3_b(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (L2) {
		f_b3_a2_v(L0, a2);
	}
	return L2;
}

