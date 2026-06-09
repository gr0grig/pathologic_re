maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		@GetMainOutdoorScene(L0);
		f_82_a3_v(0, 1, 1.0);
		@FindActor(L1, "player");
		if (L1) {
			bool L2;
			object L3;
			Vector L4;
			Vector L5;
			float L6;
			float L7;
			@GetSceneByName(L3, "storojka");
			L3->GetLocator("birth", L2, L4, L5);
			@Teleport(L1, L3, L4, L5);
			@sync();
			L0->GetLocator("pt_d11q01_teleport", L2, L4, L5);
			@Teleport(L1, L0, L4, L5);
			L1->GetProperty("health", L6);
			if (L6 > 0.20000000298023224) {
				L1->SetProperty("health", 0.20000000298023224);
			}
			L1->GetProperty("tiredness", L7);
			if (L7 > 0.6000000238418579) {
				L1->SetProperty("tiredness", 0.6000000238418579);
				f_78_a1_v(0.6000000238418579 - L7);
			}
		}
		@sync();
		f_66_a4_o(L0, "pt_d11q01_dog1", "pers_dog", "d11q01_dog.xml");
		f_66_a4_o(L0, "pt_d11q01_dog2", "pers_dog", "d11q01_dog.xml");
		f_66_a4_o(L0, "pt_d11q01_dog3", "pers_dog", "d11q01_dog.xml");
		f_82_a3_v(1, 0, 5.0);
		@SetVariable("d11q01SoldierAttack", 1);
		@RemoveActor(f_60_a0_o());
	}
}

object f_60_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_66_a4_o(object a0, string a1, string a2, string a3)
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

void f_78_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(11, L0);
}

void f_82_a3_v(float a0, float a1, float a2)
{
	bool L0;
	float L1;
	L0 = a1 > a0;
	L1 = (a1 - a0) / a2;
	while (L0 ? a0 < a1 : a1 < a0) {
		float L2;
		@ModDarkenLevel(a0);
		@sync(L2);
		a0 = a0 + L2 * L1;
	}
	@ModDarkenLevel(a1);
}

