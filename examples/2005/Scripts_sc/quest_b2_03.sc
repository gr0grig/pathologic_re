event OnGameTime 9;
event OnTrigger 26;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var bool tv2;
	var bool tv3;

	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "house_petr");
		@Trigger(L0, "nopetr");
		@GetSceneByName(L0, "cot_maria");
		@Trigger(L0, "nomaria");
		if (f_ff_a0_b()) {
			@Trace("bad petr init");
			tv2 = true;
		} else {
			object L1;
			@GetSceneByName(L1, "shouse1_kabak");
			tv0 = f_e5_a4_o(L1, "pt_b2q03_petr", "NPC_Petr", "b2q03_petr.xml");
		}
		f_c7_a1_v(2);
	}

	void OnGameTime(int a0, float a1)
	{
		if (a0 == 1) {
			if (f_ff_a0_b()) {
				@Trace("bad maria init");
				tv3 = true;
			} else {
				object L0;
				@GetSceneByName(L0, "shouse1_kabak");
				tv1 = f_e5_a4_o(L0, "pt_b2q03_maria", "NPC_Maria", "b2q03_maria.xml");
			}
		} else {
			f_da_a2_v(a0, a1);
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_maria") {
			if (f_f7_a0_i() < 22) {
				float L0;
				@GetGameTime(L0);
				L0 = L0 + 0.5;
				@SetTimeEvent(1, L0);
			}
		} else {
			if (a0 == "kabak_unload") {
				if (tv2) {
					object L1;
					tv2 = false;
					@GetSceneByName(L1, "shouse1_kabak");
					tv0 = f_e5_a4_o(L1, "pt_b2q03_petr", "NPC_Petr", "b2q03_petr.xml");
				}
				if (tv3) {
					object L2;
					tv3 = false;
					@GetSceneByName(L2, "shouse1_kabak");
					tv1 = f_e5_a4_o(L2, "pt_b2q03_maria", "NPC_Maria", "b2q03_maria.xml");
				}
			} else {
				if (a0 == "fail") {
					f_97_a0_v();
				} else {
					if (a0 == "completed") {
						f_9f_a0_v();
					}
				}
			}
		}
	}

	void f_8c_a0_v(void)
	{
		int L0;
		@GetVariable("b2q03", L0);
		if (L0 != 1000) {
			f_97_a0_v();
		}
	}

	void f_97_a0_v(void)
	{
		@SetVariable("b2q03", -1);
		f_a7_a0_v();
	}

	void f_9f_a0_v(void)
	{
		@SetVariable("b2q03", 1000);
		f_a7_a0_v();
	}

	void f_a7_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		disable OnGameTime;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@GetSceneByName(L0, "house_petr");
		@Trigger(L0, "petr");
		@GetSceneByName(L0, "cot_maria");
		@Trigger(L0, "maria");
		@RemoveActor(f_df_a0_o());
	}

	void f_c7_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_a7_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void f_da_a2_v(int a0, float a1)
	{
		f_8c_a0_v();
	}
}

object f_df_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_e5_a4_o(object a0, string a1, string a2, string a3)
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

int f_f7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_ff_a0_b(void)
{
	object L0;
	object L1;
	@GetActiveScene(L0);
	@GetSceneByName(L1, "shouse1_kabak");
	return L1 == L0;
}

