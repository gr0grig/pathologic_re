event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		tv1 = f_9d_a0_o();
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_soldiers") {
			object L0;
			int L1;
			@GetMainOutdoorScene(L0);
			for (L1 = 1; L1 <= 10; L1++) {
				tv1->add(f_b5_a4_o(L0, "pt_d11q01_soldier" + L1, "pers_soldat", "d11q01_soldier.xml"));
			}
			tv2 = f_b5_a4_o(L0, "pt_d11q01_msoldier", "pers_soldat", "d11q01_msoldier.xml");
		} else {
			if (a0 == "init_girl") {
				object L2;
				@GetSceneByName(L2, "shouse1_kabak");
				tv0 = f_a3_a4_o(L2, "pt_d11q01_girl", "pers_nudegirl", "d11q01_girl.xml");
			} else {
				if (a0 == "remove_andrei") {
					object L3;
					@FindActor(L3, "NPC_Andrei");
					@RemoveActor(L3);
				} else {
					if (a0 == "restore_andrei") {
						object L4;
						@GetSceneByName(L4, "shouse1_kabak");
						f_a3_a4_o(L4, "pt_andrei", "NPC_Andrei", "NPC_Danko_Andrei.xml");
					} else {
						if (a0 == "soldier_attack") {
							int L5;
							int L6;
							tv1->size(L5);
							for (L6 = 0; L6 < L5; L6++) {
								object L7;
								tv1->get(L7, L6);
								if (L7) {
									object L8;
									L7->GetActor(L8);
									if (!L8) {
										L7->Remove();
									} else {
										@Trigger(L8, "attack");
									}
								}
							}
						} else {
							if (a0 == "fail") {
								f_7e_a0_v();
							} else {
								if (a0 == "completed") {
									f_86_a0_v();
								}
							}
						}
					}
				}
			}
		}
	}

	void f_7e_a0_v(void)
	{
		@SetVariable("d11q01", -1);
		f_8e_a0_v();
	}

	void f_86_a0_v(void)
	{
		@SetVariable("d11q01", 1000);
		f_8e_a0_v();
	}

	void f_8e_a0_v(void)
	{
		disable OnTrigger;
		f_c7_a1_v(tv1);
		if (tv2) {
			tv2->Remove();
		}
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
	}
}

object f_9d_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_a3_a4_o(object a0, string a1, string a2, string a3)
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

object f_b5_a4_o(object a0, string a1, string a2, string a3)
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

void f_c7_a1_v(object a0)
{
	int L0;
	int L1;
	a0->size(L0);
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		a0->get(L2, L1);
		if (L2) {
			L2->Remove();
		}
	}
	a0->clear();
}

