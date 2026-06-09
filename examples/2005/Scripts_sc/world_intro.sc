event OnTrigger 26;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetSaveProperty(0, 3);
		f_16_a0_v();
		@sync();
		@PlaySharedSound("intro");
		@Sleep(188.0);
		f_3d_a0_v();
		for (; ; ) {
			@Hold();
		}
	}

	void f_16_a0_v(void)
	{
		object L0;
		bool L1;
		Vector L2;
		Vector L3;
		@FindActor(L0, "player");
		@GetSceneByName(tv0, "intro_theater");
		if (!tv0) {
			@Trace("Intro scene not found");
			return;
		}
		tv0->GetLocator("birth", L1, L2, L3);
		if (L1) {
			@Teleport(L0, tv0, L2, L3);
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "exit") {
			f_34_a0_v();
		}
	}

	void f_34_a0_v(void)
	{
		@Trace("exiting");
		@RemoveWorld();
		@ActivateInitGameOverride("choose_pers.xml");
	}

	void f_3d_a0_v(void)
	{
		object L0;
		object L1;
		bool L2;
		tv0->GetGroupActors(L0, 0);
		while (L0->Next(L2, L1), L2) {
			if (L1) {
				@Trigger(L1, "off");
			}
		}
	}
}

