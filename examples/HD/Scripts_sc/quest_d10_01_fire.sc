event OnUnload 6;
event OnLoad 5;
event OnDispose 32;
event OnTrigger 26;

maintask t0
{
	var bool tv0;
	var object tv1;

	void init(void)
	{
		object L0;
		object L1;
		float L2;
		float L3;
		@GetScene(L0);
		@AddScriptedActor(tv1, "trigger_d10q01_fire", "trigger_fire_damage.bin", L0, [0.0, 0.0, 0.0]);
		if (!f_81_a0_b()) {
			@Hold();
		}
		@FindParticleSystem("fire", L1);
		if (L1 == null) {
			@Trace("Can't find fire particle system");
			return;
		}
		L2 = 60.0;
		L3 = -L2;
		while (L3 < L2) {
			float L4;
			L4 = -L2;
			while (L4 < L2) {
				if (L3 * L3 + L4 * L4 > L2 * L2) {
				} else {
					Vector L5;
					L5.x = L3;
					L5.y = 0;
					L5.z = L4;
					L1->AddSource(L5, [0.0, 1.0, 0.0], 0.0);
				}
				L4 = L4 + L2 / 10;
			}
			L3 = L3 + L2 / 10;
		}
		L1->Enable();
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		f_6f_a0_v();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnDispose(void)
	{
		if (tv1) {
			@RemoveActor(tv1);
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_7f_a0_b()) {
				@RemoveActor(f_86_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void f_6f_a0_v(void)
	{
		if (tv0 && f_7f_a0_b()) {
			@RemoveActor(f_86_a0_o());
		}
	}
}

bool f_7f_a0_b(void)
{
	return true;
}

bool f_81_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_86_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

