event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		@SetVariable("d5q02", 1);
		f_9b_a1_v(5);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_girl") {
			@SetVariable("d5q01NudeInKabak", 1);
			if (!tv0) {
				object L0;
				@GetSceneByName(L0, "shouse1_kabak");
				tv0 = f_b9_a4_o(L0, "pt_d5q02_girl", "pers_nudegirl", "d5q02_girl.xml");
			} else {
				@Trigger(tv0, "restore");
			}
		} else {
			if (a0 == "remove_girl") {
				@SetVariable("d5q01NudeInKabak", 0);
				if (tv0) {
					@Trigger(tv0, "cleanup");
				}
			} else {
				if (a0 == "place_gorbun") {
					@SetVariable("d5q01Gorbun", 1);
					if (!tv1) {
						object L1;
						@GetSceneByName(L1, "lc_House6_05");
						tv1 = f_b9_a4_o(L1, "pt_gorbun", "pers_gorbun", "d5q02_gorbun.xml");
					} else {
						@Trigger(tv1, "restore");
					}
				} else {
					if (a0 == "remove_gorbun") {
						@SetVariable("d5q01Gorbun", 0);
						if (tv1) {
							@Trigger(tv1, "cleanup");
						}
					} else {
						if (a0 == "completed") {
							f_74_a0_v();
						}
					}
				}
			}
		}
	}

	void f_61_a0_v(void)
	{
		int L0;
		@GetVariable("d5q02", L0);
		if (L0 != 1000) {
			f_6c_a0_v();
		}
	}

	void f_6c_a0_v(void)
	{
		@SetVariable("d5q02", -1);
		f_8a_a0_v();
	}

	void f_74_a0_v(void)
	{
		int L0;
		@GetVariable("d5q02", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d5q02", 1000);
			f_8a_a0_v();
		}
	}

	void f_8a_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_b3_a0_o());
	}

	void f_9b_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_8a_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_61_a0_v();
	}
}

object f_b3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_b9_a4_o(object a0, string a1, string a2, string a3)
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

