event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		@GetSceneByName(L0, "warehouse_gangster");
		@AddScriptedActor(L1, "cs_k4q01_grabitel", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		L1->ForceGeometryLoad();
		@FindActor(L2, "player");
		f_7a_a0_v();
		f_3d_a1_v(L2);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k4q01_camera.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_54_a1_v(L2);
		f_7f_a0_v();
		@RemoveActor(L1);
		@CameraSwitchToNormal();
		f_6e_a2_b("quest_k4_01", "cutscene_end");
		@RemoveActor(f_68_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

void f_3d_a1_v(object a0)
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

void f_54_a1_v(object a0)
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

object f_68_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_6e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_7a_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_7f_a0_v(void)
{
	@SetSepia(0, 0);
}

