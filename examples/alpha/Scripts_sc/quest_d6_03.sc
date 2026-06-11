event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetVariable("d6q03", 1);
		f_74_a1_v(6);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "completed") {
			f_53_a0_v();
		} else {
			if (a0 == "fail") {
				f_4b_a0_v();
			} else {
				if (a0 == "place_albinos") {
					object L0;
					@GetMainOutdoorScene(L0);
					tv0 = f_92_a4_o(L0, "pt_d6q03_albinos", "pers_albinos", "d6q03_albinos.xml");
				} else {
					if (a0 == "albinos_retreated") {
						@SetVariable("d6q03AlbinosFlee", 1);
						tv0->Remove();
					} else {
						if (a0 == "albinos_dead") {
							@SetVariable("d6q03AlbinosKilled", 1);
							f_ce_a0_v();
							tv0->Remove();
						}
					}
				}
			}
		}
	}

	void f_40_a0_v(void)
	{
		int L0;
		@GetVariable("d6q03", L0);
		if (L0 != 1000) {
			f_4b_a0_v();
		}
	}

	void f_4b_a0_v(void)
	{
		@SetVariable("d6q03", -1);
		f_69_a0_v();
	}

	void f_53_a0_v(void)
	{
		int L0;
		@GetVariable("d6q03", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d6q03", 1000);
			f_69_a0_v();
		}
	}

	void f_69_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			tv0->Remove();
		}
		@RemoveActor(f_8c_a0_o());
	}

	void f_74_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_69_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_40_a0_v();
	}
}

object f_8c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_92_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

object f_a4_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_b1_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_a4_a0_o();
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

void f_ce_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 108, 2, 13731);
	f_b1_a2_b(L0, 107);
}

