event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("d2q03", 1);
		f_56_a1_v(2);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "birdmask") {
			object L0;
			@GetSceneByName(L0, "r4_house_2_02");
			tv0 = f_74_a4_o(L0, "pt_d2q03_birdmask", "pers_birdmask", "d2q03_birdmask.xml");
		} else {
			if (a0 == "completed") {
				f_36_a0_v();
			}
		}
	}

	void f_23_a0_v(void)
	{
		int L0;
		@GetVariable("d2q03", L0);
		if (L0 != 1000) {
			f_2e_a0_v();
		}
	}

	void f_2e_a0_v(void)
	{
		@SetVariable("d2q03", -1);
		f_47_a0_v();
	}

	void f_36_a0_v(void)
	{
		object L0;
		@FindActor(L0, "icot_lara_supply");
		L0->SetProperty("enabled", true);
		@SetVariable("d2q03", 1000);
		f_47_a0_v();
	}

	void f_47_a0_v(void)
	{
		disable OnTrigger;
		f_a9_a0_v();
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_6e_a0_o());
	}

	void f_56_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_47_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_23_a0_v();
	}
}

object f_6e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_74_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

object f_86_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_93_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_86_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

void f_a4_a0_v(void)
{
	f_93_a1_b(37);
}

void f_a9_a0_v(void)
{
	f_a4_a0_v();
}

