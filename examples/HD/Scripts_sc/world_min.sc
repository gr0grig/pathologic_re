maintask t0
{
	void init(void)
	{
		f_4_a0_v();
	}
}

void f_4_a0_v(void)
{
	object L0;
	object L1;
	bool L2;
	Vector L3;
	Vector L4;
	@FindActor(L0, "player");
	@GetSceneByName(L1, "test_scene");
	L1->GetLocator("birth", L2, L3, L4);
	if (L2) {
		@Teleport(L0, L1, L3, L4);
	}
}

