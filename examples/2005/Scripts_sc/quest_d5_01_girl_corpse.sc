event OnUse 0;
event OnUnload 6;
event OnTrigger 26;

var object g0;

maintask t0
{
	var bool tv0;
	var bool tv1;
	var bool tv2;

	void OnUse(object a0)
	{
		bool L0;
		@SetVariable("d5q02KnowNudeIsDead", 1);
		@IsOverrideActive(L0);
		if (!L0) {
			@Barter(a0);
		}
		if (f_1a_a0_b() && !tv2) {
			f_81_a0_v();
			tv2 = true;
		}
	}

	bool f_1a_a0_b(void)
	{
		int L0;
		int L1;
		@GetItemCountOfType(L0, "d5q01_heart");
		if (!L0) {
			return true;
		}
		@GetVariable("d5q01", L1);
		return !f_b7_a1_b(L1);
	}

	void init(void)
	{
		@sync();
		if (!f_76_a0_b()) {
			@SetVisibility(true);
			tv1 = true;
		} else {
			tv1 = false;
		}
		f_46_a0_v();
	}

	void OnUnload(void)
	{
		if (!tv1) {
			@SetVisibility(true);
			tv1 = true;
		}
		f_66_a0_v();
	}

	void f_46_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_1a_a0_b()) {
				@RemoveActor(f_7b_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void f_66_a0_v(void)
	{
		if (tv0 && f_1a_a0_b()) {
			@RemoveActor(f_7b_a0_o());
		}
	}
}

bool f_76_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_7b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_81_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 634, 1, 533080);
	f_9b_a2_b(L0, 139);
}

object f_8e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_9b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_8e_a0_o();
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

bool f_b7_a1_b(int a0)
{
	return a0 >= 1 && a0 < 1000;
}

