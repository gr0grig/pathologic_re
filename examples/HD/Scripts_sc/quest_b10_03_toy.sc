event OnUse 0;

var object g0;

maintask t0
{
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
		string L0;
		object L1;
		if (!f_69_a1_b(a0)) {
			return;
		}
		@GetProperty("Item", L0);
		@CreateInvItem(L1);
		L1->SetItemName(L0);
		if (f_93_a3_b(a0, L1, 1)) {
			object L2;
			@GetScene(L2);
			L2->RemoveStationaryActor(f_81_a0_o());
			f_a4_a0_v();
			@RemoveActor(f_81_a0_o());
		}
	}
}

bool f_34_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_40_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_45_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_40_a1_b(a0)) {
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

bool f_69_a1_b(object a0)
{
	int L0;
	if (!f_45_a1_b(a0)) {
		return false;
	}
	if (!f_34_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_81_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_87_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

bool f_93_a3_b(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (L2) {
		f_87_a2_v(L0, a2);
	}
	return L2;
}

void f_a4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 597, 2, 531148);
	f_be_a2_b(L0, 594);
}

object f_b1_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_be_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_b1_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

