event OnUnload 6;

maintask t0
{
	var Vector tv0;
	var Vector tv1;

	void init(void)
	{
		object L0;
		float L1;
		if (!f_48_a0_b()) {
			@RemoveActor(f_4d_a0_o());
			return;
		}
		@FindParticleSystem("blood", L0);
		L0->Enable();
		tv0 = [0.0, 0.0, 0.0];
		tv1 = [-100.0, 100.0, 0.0];
		L0->AddSource(tv0, tv1, 0.30000001192092896);
		L1 = 0.4000000059604645;
		while (L1 > 0) {
			float L2;
			@sync(L2);
			L1 = L1 - L2;
			tv0.y -= 150 * L2;
			L0->AddSource(tv0, tv1, 0.30000001192092896);
		}
		L0->Fade(true);
		L1 = 0.4000000059604645;
		while (L1 > 0) {
			float L3;
			@sync(L3);
			L1 = L1 - L3;
			tv0.y -= 150 * L3;
			L0->AddSource(tv0, tv1, 0.30000001192092896);
		}
		@RemoveActor(f_4d_a0_o());
	}

	void OnUnload(void)
	{
		@RemoveActor(f_4d_a0_o());
		@sync();
	}
}

bool f_48_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_4d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

