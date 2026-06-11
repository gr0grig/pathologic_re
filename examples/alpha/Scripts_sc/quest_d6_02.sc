event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("d6q02", 1);
		f_96_a1_v(6);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "completed") {
			f_75_a0_v();
		} else {
			if (a0 == "fail") {
				f_6d_a0_v();
			} else {
				if (a0 == "place_trigger") {
					object L0;
					@GetMainOutdoorScene(L0);
					@AddActor(tv0, "d6q02_trigger_bombers", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d6q02_trigger.xml");
				} else {
					if (a0 == "d6q02_trigger_bombers") {
						object L1;
						@SetVariable("d6q02Trigger", 1);
						@RemoveActor(tv0);
						@GetMainOutdoorScene(L1);
						f_b4_a4_o(L1, "pt_d6q02_bomber1", "pers_bomber", "d6q02_bomber.xml");
						f_b4_a4_o(L1, "pt_d6q02_bomber2", "pers_bomber", "d6q02_bomber.xml");
						f_b4_a4_o(L1, "pt_d6q02_bomber3", "pers_bomber", "d6q02_bomber.xml");
						f_b4_a4_o(L1, "pt_d6q02_bomber4", "pers_bomber", "d6q02_bomber.xml");
						f_b4_a4_o(L1, "pt_d6q02_gorbun", "pers_bomber", "d6q02_gorbun.xml");
					} else {
						if (a0 == "gorbun_death") {
							f_f0_a0_v();
							@SetVariable("d6q02GorbunDeath", 1);
						}
					}
				}
			}
		}
	}

	void f_62_a0_v(void)
	{
		int L0;
		@GetVariable("d6q02", L0);
		if (L0 != 1000) {
			f_6d_a0_v();
		}
	}

	void f_6d_a0_v(void)
	{
		@SetVariable("d6q02", -1);
		f_8b_a0_v();
	}

	void f_75_a0_v(void)
	{
		int L0;
		@GetVariable("d6q02", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d6q02", 1000);
			f_8b_a0_v();
		}
	}

	void f_8b_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@RemoveActor(tv0);
		}
		@RemoveActor(f_ae_a0_o());
	}

	void f_96_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_8b_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_62_a0_v();
	}
}

object f_ae_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_b4_a4_o(object a0, string a1, string a2, string a3)
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

object f_c6_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_d3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_c6_a0_o();
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

void f_f0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 103, 2, 13726);
	f_d3_a2_b(L0, 102);
}

