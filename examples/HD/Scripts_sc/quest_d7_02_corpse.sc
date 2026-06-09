event OnUse 0;
event OnUnload 6;
event OnTrigger 26;

var object g0;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void OnUse(object a0)
	{
		int L0;
		bool L1;
		@SetVariable("d7q02BirdBalahon", 1);
		@GetVariable("d7q02", L0);
		if (L0 == 4) {
			f_96_a0_v();
			f_7d_a2_b("quest_d7_02", "completed");
		} else {
			if (!tv0) {
				f_89_a0_v();
			}
		}
		tv0 = true;
		@IsOverrideActive(L1);
		if (!L1) {
			@Barter(a0);
		}
	}

	bool f_21_a0_b(void)
	{
		bool L0;
		@GetVariable("d7q02BirdBalahon", L0);
		return L0;
	}

	void init(void)
	{
		@sync();
		if (!f_72_a0_b()) {
			@SetVisibility(true);
			tv1 = true;
		} else {
			tv1 = false;
		}
		f_42_a0_v();
	}

	void OnUnload(void)
	{
		if (!tv1) {
			@SetVisibility(true);
			tv1 = true;
		}
		f_62_a0_v();
	}

	void f_42_a0_v(void)
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
			if (!L0 && f_21_a0_b()) {
				@RemoveActor(f_77_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void f_62_a0_v(void)
	{
		if (tv0 && f_21_a0_b()) {
			@RemoveActor(f_77_a0_o());
		}
	}
}

bool f_72_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_77_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_7d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_89_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 636, 2, 533145);
	f_b0_a2_b(L0, 170);
}

void f_96_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 174, 2, 515426);
	f_b0_a2_b(L0, 170);
}

object f_a3_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_b0_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_a3_a0_o();
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

