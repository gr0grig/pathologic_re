event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		f_e_a0_v();
		f_76_a2_b("quest_k12_01", "hidden_room_cutscene_end");
		@RemoveActor(f_70_a0_o());
	}

	void f_e_a0_v(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		@GetSceneByName(L0, "hidden_room");
		@AddScriptedActor(L1, "cs_d12_littlegirl_big", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(L2, "cs_d12_littleboy_big", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		L1->ForceGeometryLoad();
		L2->ForceGeometryLoad();
		@FindActor(L3, "player");
		f_82_a0_v();
		f_45_a1_v(L3);
		@CameraPlay("cs_d12_hidden_room.mot");
		@CameraWaitForPlayFinish();
		f_5c_a1_v(L3);
		f_87_a0_v();
		@RemoveActor(L1);
		@RemoveActor(L2);
		@CameraSwitchToNormal();
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

void f_45_a1_v(object a0)
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

void f_5c_a1_v(object a0)
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

object f_70_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_76_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_82_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_87_a0_v(void)
{
	@SetSepia(0, 0);
}

