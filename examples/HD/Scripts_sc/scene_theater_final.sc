event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		L0 = f_50_a3_o(f_4a_a0_o(), "cs_final_theater_klara", "cs_final_theater_klara.xml");
		L1 = f_50_a3_o(f_4a_a0_o(), "cs_final_theater_danko", "cs_final_theater_danko.xml");
		L2 = f_50_a3_o(f_4a_a0_o(), "cs_final_theater_burah", "cs_final_theater_burah.xml");
		L1->ForceGeometryLoad();
		L0->ForceGeometryLoad();
		L2->ForceGeometryLoad();
		f_64_a0_v();
		@RegisterKeyCallback("space");
		@CameraPlay("cs_final_theater.mot");
		@sync();
		f_58_a2_b("final_quest_actor", "voices");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_69_a0_v();
		@CameraSwitchToNormal();
		for (; ; ) {
			@Hold();
		}
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_4a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_50_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

bool f_58_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_64_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_69_a0_v(void)
{
	@SetSepia(0, 0);
}

