event OnUse 0;

var object g0;

maintask t0
{
	void init(void)
	{
		@SetVisibility(true);
		f_32_a0_v();
	}

	void OnUse(object a0)
	{
		int L0;
		@GetProperty("locked", L0);
		if (L0) {
			if (f_62_a2_b(a0, "b2q01_key")) {
				f_69_a2_b(a0, "b2q01_key");
				@SetProperty("locked", 0);
				@PlaySound("unlock");
				f_87_a0_v();
				f_94_a0_v();
				f_7a_a0_v();
			} else {
				@PlaySound("locked");
				return;
			}
		}
		f_36_a1_v(a0);
	}

	void f_32_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void f_36_a1_v(object a0)
	{
		bool L0;
		if (!a0 || !f_50_a0_b()) {
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

bool f_50_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

void f_56_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(4, L0);
}

bool f_62_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_69_a2_b(object a0, string a1)
{
	int L0;
	int L1;
	bool L2;
	@GetInvItemByName(L0, a1);
	@GetInvItemProperty(L1, L0, "Category");
	a0->RemoveItemByType(L2, L0, L1);
	if (L2) {
		f_56_a2_v(L0, 1);
	}
	return L2;
}

void f_7a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 563, 0, 530577);
	f_a6_a2_b(L0, -1);
}

void f_87_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 572, 1, 530605);
	f_a6_a2_b(L0, 245);
}

void f_94_a0_v(void)
{
	f_c2_a1_b(562);
}

object f_99_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_a6_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_99_a0_o();
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

bool f_c2_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_99_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

