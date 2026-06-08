event OnTrigger 26;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		@CreateObjectVector(tv0);
		@GetMainOutdoorScene(L0);
		tv0->add(f_b2_a4_o(L0, "pt_d9q01_doberman1", "pers_doberman", "d9q01_doberman.xml"));
		tv0->add(f_b2_a4_o(L0, "pt_d9q01_doberman2", "pers_doberman", "d9q01_doberman.xml"));
		tv0->add(f_b2_a4_o(L0, "pt_d9q01_doberman3", "pers_doberman", "d9q01_doberman.xml"));
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "teleport_to_han") {
			object L0;
			@FindActor(L0, "player");
			if (L0) {
				object L1;
				Vector L2;
				Vector L3;
				bool L4;
				@GetSceneByName(L1, "mnogogrannik_han");
				L1->GetLocator("pt_d9q01_teleport", L4, L2, L3);
				@Teleport(L0, L1, L2, L3);
			}
		} else {
			if (a0 == "teleport_to_mnogogrannik") {
				object L5;
				@FindActor(L5, "player");
				if (L5) {
					object L6;
					Vector L7;
					Vector L8;
					bool L9;
					@GetSceneByName(L6, "mnogogrannik");
					L6->GetLocator("pt_d9q01_teleport", L9, L7, L8);
					@Teleport(L5, L6, L7, L8);
				}
			} else {
				if (a0 == "place_rifles") {
					object L10;
					int L11;
					@GetMainOutdoorScene(L10);
					for (L11 = 1; L11 <= 5; L11 = L11 + 1) {
						object L12;
						@AddActor(L12, "d9q01_rifle" + L11, L10, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d9q01_rifle.xml");
					}
				} else {
					if (a0 == "unlock_polyh") {
						f_c4_a2_v("polyh@door1", false);
					} else {
						if (a0 == "cleanup") {
							int L13;
							@GetVariable("d9q01", L13);
							if (L13 != 1000) {
								f_8c_a0_v();
							} else {
								f_9c_a0_v();
							}
						} else {
							if (a0 == "fail") {
								f_8c_a0_v();
							} else {
								if (a0 == "completed") {
									f_94_a0_v();
								}
							}
						}
					}
				}
			}
		}
	}

	void f_8c_a0_v(void)
	{
		@SetVariable("d9q01", -1);
		f_9c_a0_v();
	}

	void f_94_a0_v(void)
	{
		@SetVariable("d9q01", 1000);
		f_9c_a0_v();
	}

	void f_9c_a0_v(void)
	{
		disable OnTrigger;
		f_c4_a2_v("polyh@door1", true);
		f_d5_a1_v(tv0);
		@RemoveActor(f_ac_a0_o());
	}
}

object f_ac_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_b2_a4_o(object a0, string a1, string a2, string a3)
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

void f_c4_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_d5_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

