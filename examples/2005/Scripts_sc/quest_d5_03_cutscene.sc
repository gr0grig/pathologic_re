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
		@GetSceneByName(L0, "uprava_prison");
		@AddScriptedActor(L1, "cs_uprava_prisoner1", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L2, "cs_uprava_prisoner2", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L3, "cs_uprava_prisoner3", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L4, "cs_uprava_prisoner4", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L5, "cs_uprava_prisoner5", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		L1->ForceGeometryLoad();
		L2->ForceGeometryLoad();
		L3->ForceGeometryLoad();
		L4->ForceGeometryLoad();
		L5->ForceGeometryLoad();
		@FindActor(L6, "player");
		f_97_a0_v();
		f_66_a1_v(L6);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_uprava_prison1.mot");
		@PlayGlobalMusic("cs_d5_uprava.ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		@UnregisterKeyCallback("space");
		f_7d_a1_v(L6);
		f_9c_a0_v();
		@RemoveActor(L1);
		@RemoveActor(L2);
		@RemoveActor(L3);
		@RemoveActor(L4);
		@RemoveActor(L5);
		@CameraSwitchToNormal();
		@RemoveActor(f_91_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

void f_66_a1_v(object a0)
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

void f_7d_a1_v(object a0)
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

object f_91_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_97_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_9c_a0_v(void)
{
	@SetSepia(0, 0);
}

