event OnUse 0;

maintask t0
{
	void f_0_a1_v(object a0)
	{
		if (a0) {
			object L0;
			@GetScene(L0);
			@BroadcastSteal(a0, L0);
		}
		f_34_a1_v(a0);
	}

	void init(void)
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
		if (!f_70_a1_b(a0)) {
			return;
		}
		@GetItem(L0, 0);
		@GetItemAmount(L1, 0);
		if (f_9a_a3_b(a0, L0, L1)) {
			f_0_a1_v(a0);
		}
	}
}

void f_34_a1_v(object a0)
{
	@RemoveActor(f_88_a0_o());
}

bool f_3b_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_47_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_4c_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_47_a1_b(a0)) {
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

bool f_70_a1_b(object a0)
{
	int L0;
	if (!f_4c_a1_b(a0)) {
		return false;
	}
	if (!f_3b_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_88_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_8e_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

bool f_9a_a3_b(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (L2) {
		f_8e_a2_v(L0, a2);
	}
	return L2;
}

