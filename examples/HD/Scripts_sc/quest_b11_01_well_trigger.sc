event OnIntersection 23;
event OnTrigger 26;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnIntersection(object a0)
	{
		bool L0;
		if (!tv0) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (L0) {
			object L1;
			bool L2;
			Vector L3;
			Vector L4;
			@GetSceneByName(L1, "boiny_well");
			@RemoveScene(L1);
			@GetMainOutdoorScene(L1);
			L1->GetLocator("pt_b11q01_well_return", L2, L3, L4);
			@Teleport(a0, L1, L3, L4);
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "activate") {
			tv0 = true;
		}
	}
}

