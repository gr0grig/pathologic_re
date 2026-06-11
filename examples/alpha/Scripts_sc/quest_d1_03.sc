event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void f_0_a0_v(void)
	{
	}

	void init(void)
	{
		object L0;
		bool L1;
		Vector L2;
		Vector L3;
		@SetVariable("d1q03", 1);
		@GetSceneByName(L0, "dt_house_1_04");
		L0->GetLocator("pt_butcher", L1, L2, L3);
		if (!L1) {
			@Trace("Locator doesn't exist for qd1_03_butcher");
		} else {
			@AddActor(tv0, "pers_butcher", L0, L2, L3, "butcher_qd1_03.xml");
		}
		f_7a_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "butcher_fail") {
			f_e2_a0_v();
			f_58_a0_v();
		} else {
			if (a0 == "butcher_battle") {
				@SetVariable("d1q03", 2);
			} else {
				if (a0 == "butcher_death") {
					int L0;
					@GetVariable("d1q03IsKapella", L0);
					if (L0) {
						f_c2_a0_v();
						f_58_a0_v();
					} else {
						f_d2_a0_v();
						f_50_a0_v();
					}
				} else {
					if (a0 == "kapella_finish") {
						@RemoveActor(tv0);
						f_50_a0_v();
					}
				}
			}
		}
	}

	void f_50_a0_v(void)
	{
		@SetVariable("d1q03", 1000);
		f_6b_a0_v();
	}

	void f_58_a0_v(void)
	{
		@SetVariable("d1q03", -1);
		f_6b_a0_v();
	}

	void f_60_a0_v(void)
	{
		int L0;
		@GetVariable("d1q03", L0);
		if (L0 != 1000) {
			f_58_a0_v();
		}
	}

	void f_6b_a0_v(void)
	{
		disable OnTrigger;
		f_0_a0_v();
		if (tv0 != null) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_92_a0_o());
	}

	void f_7a_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_6b_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_60_a0_v();
	}
}

object f_92_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_98_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_a5_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_98_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

void f_c2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 39, 2, 12121);
	f_a5_a2_b(L0, 37);
}

void f_d2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 40, 2, 12122);
	f_a5_a2_b(L0, 37);
}

void f_e2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 42, 2, 12124);
	f_a5_a2_b(L0, 37);
}

