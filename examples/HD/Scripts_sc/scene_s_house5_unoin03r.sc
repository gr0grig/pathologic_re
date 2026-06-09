event OnLoad 5;
event OnUnload 6;

maintask t0
{
	void OnLoad(void)
	{
		f_9c_a2_b("quest_b4_02", "house_load");
		f_17_a0_v();
	}

	void init(void)
	{
		f_1d_a2_v("woman", "woman");
		f_1d_a2_v("worker", "man");
		for (; ; ) {
			@Hold();
		}
	}

	void f_17_a0_v(void)
	{
		t1{};
	}

	void f_1d_a2_v(string a0, string a1)
	{
		int L0;
		for (L0 = 1; ; L0++) {
			bool L1;
			Vector L2;
			Vector L3;
			@GetLocator("pt_agony_" + a0 + L0, L1, L2, L3);
			if (!L1) {
				break;
			}
			f_32_a4_v(a0, a1, L2, L3);
		}
	}

	void f_32_a4_v(string a0, string a1, Vector a2, Vector a3)
	{
		if (f_97_a1_b(0.5)) {
			object L0;
			@AddActor(L0, "pers_" + a0, f_91_a0_o(), a2, a3, "agony1_" + a1 + ".xml");
		}
	}
}

task t1
{
	void init(void)
	{
		bool L0;
		f_70_a0_v();
		@Sleep(3, L0);
		if (L0) {
			for (; ; ) {
				Vector L1;
				@GetRandomPFPoint(L1, 0, 0);
				f_61_a1_v(L1);
				@Sleep(30, L0);
				if (!L0) {
					break;
				}
			}
		}
	}

	void OnUnload(void)
	{
		@StopGroup0();
	}
}

void f_61_a1_v(Vector a0)
{
	object L0;
	@Trace("New fog at " + a0);
	@AddActorByType(L0, "fog", f_91_a0_o(), a0, [0.0, 0.0, 1.0], "horror_fog.xml");
}

void f_70_a0_v(void)
{
	int L0;
	for (L0 = 1; ; L0++) {
		bool L1;
		Vector L2;
		Vector L3;
		@GetLocator("pt_fog" + L0, L1, L2, L3);
		if (!L1) {
			break;
		}
		f_82_a2_v(L2, L3);
	}
}

void f_82_a2_v(Vector a0, Vector a1)
{
	if (f_97_a1_b(0.5)) {
		object L0;
		@AddActorByType(L0, "fog", f_91_a0_o(), a0, a1, "fog_stat.xml");
	}
}

object f_91_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_97_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

bool f_9c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

