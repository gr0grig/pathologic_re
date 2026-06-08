event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		object L4;
		object L5;
		object L6;
		@GetSceneByName(L0, "factory");
		@AddScriptedActor(L1, "cs_factory_grabitel1", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L2, "cs_factory_grabitel2", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L3, "cs_factory_patrol1", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L4, "cs_factory_patrol2", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L5, "cs_factory_patrol3", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		L3->ForceGeometryLoad();
		L4->ForceGeometryLoad();
		L5->ForceGeometryLoad();
		@FindActor(L6, "player");
		f_a4_a0_v();
		f_67_a1_v(L6);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_factory1.mot");
		@PlayGlobalMusic("cs_d5_factory.ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		@UnregisterKeyCallback("space");
		f_7e_a1_v(L6);
		f_a9_a0_v();
		@RemoveActor(L1);
		@RemoveActor(L2);
		@RemoveActor(L3);
		@RemoveActor(L4);
		@RemoveActor(L5);
		@CameraSwitchToNormal();
		f_98_a2_b("quest_d5_01", "cutscene_end");
		@RemoveActor(f_92_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

void f_67_a1_v(object a0)
{
	bool L0;
	if (!a0) {
		return;
	}
	a0->HasProperty("noaccess", L0);
	if (L0) {
		int L1;
		a0->GetProperty("noaccess", L1);
		a0->SetProperty("noaccess", L1 + 1);
	} else {
		a0->SetProperty("noaccess", 1);
	}
}

void f_7e_a1_v(object a0)
{
	int L0;
	if (!a0) {
		return;
	}
	a0->GetProperty("noaccess", L0);
	if (L0 > 1) {
		a0->SetProperty("noaccess", L0 - 1);
	} else {
		a0->RemoveProperty("noaccess");
	}
}

object f_92_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_98_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_a4_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_a9_a0_v(void)
{
	@SetSepia(0, 0);
}

