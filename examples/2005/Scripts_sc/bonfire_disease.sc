event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		@SetVisibility(true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		Vector L0;
		object L1;
		int L2;
		int L3;
		@GetPosition(L0);
		@GetScene(L1);
		L1->GetRegionByPt(L2, L0);
		if (L2 == -1) {
			@Trace("Invalid bonfire region");
			return;
		}
		@GetVariable(f_40_a1_s(L2), L3);
		L3 = L3 & 3;
		if (L3 == 1 || L3 == 2) {
			string L4;
			@GetActorName(L4);
			@AddActor(tv0, L4 + "_light", L1, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "light_fire.xml");
			@AddActorByType(tv1, "scripted", L1, L0, [0.0, 0.0, 1.0], "fire.xml");
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(tv0);
		}
		if (tv1) {
			@RemoveActor(tv1);
		}
	}
}

string f_40_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

