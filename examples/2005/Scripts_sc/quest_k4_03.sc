event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;

	void init(void)
	{
		f_83_a2_v("burah_home@door1", true);
		@SetVariable("k4q03", 1);
		f_53_a1_v(4);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_burah") {
			object L0;
			@GetSceneByName(L0, "house5_08");
			tv0 = f_71_a4_o(L0, "pt_k4q03_burah", "NPC_Burah", "k4q03_burah.xml");
		}
		if (a0 == "completed") {
			f_3a_a0_v();
		}
	}

	void f_27_a0_v(void)
	{
		int L0;
		@GetVariable("k4q03", L0);
		if (L0 != 1000) {
			f_32_a0_v();
		}
	}

	void f_32_a0_v(void)
	{
		@SetVariable("k4q03", -1);
		f_42_a0_v();
	}

	void f_3a_a0_v(void)
	{
		@SetVariable("k4q03", 1000);
		f_42_a0_v();
	}

	void f_42_a0_v(void)
	{
		disable OnTrigger;
		f_83_a2_v("burah_home@door1", false);
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		@RemoveActor(f_6b_a0_o());
	}

	void f_53_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_42_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_27_a0_v();
	}
}

object f_6b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_71_a4_o(object a0, string a1, string a2, string a3)
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

void f_83_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

