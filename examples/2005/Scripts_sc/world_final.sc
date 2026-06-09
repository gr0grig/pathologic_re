event OnTrigger 26;

maintask t0
{
	var object tv0;

	void init(void)
	{
		object L0;
		@Trace("World inited");
		@SetSaveProperty(0, 4);
		f_16_a0_v();
		@sync();
		@AddBlankActorFromXml(L0, tv0, "final_quest_actor", "final_quest_actor.xml");
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
		@GetSceneByName(tv0, "final_theater");
		if (!tv0) {
			@Trace("Final scene not found");
			return;
		}
		tv0->GetLocator("birth", L1, L2, L3);
		if (L1) {
			@Teleport(L0, tv0, L2, L3);
		}
	}

	void OnTrigger(string a0)
	{
		@Trace("world trigger " + a0);
		if (a0 == "open") {
			f_58_a0_v();
		} else {
			if (a0 == "exit") {
				@RemoveWorld();
				@GameOver("gameover_credits.xml");
			}
		}
	}

	void f_41_a0_v(void)
	{
		object L0;
		object L1;
		bool L2;
		tv0->GetGroupActors(L0, 0);
		@Trace("door begin");
		while (L0->Next(L2, L1), L2) {
			if (L0) {
				@Trace("door");
				@Trigger(L1, "open");
			}
		}
	}

	void f_58_a0_v(void)
	{
		@Trace("exiting from game");
		f_41_a0_v();
		f_64_a2_b("final_quest_actor", "whiten");
	}
}

bool f_64_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

