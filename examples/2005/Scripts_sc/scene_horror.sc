event OnLoad 5;
event OnUnload 6;

maintask t0
{
	void init(void)
	{
		f_14_a2_v("woman", "woman");
		f_14_a2_v("worker", "man");
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		t1{};
	}

	void f_14_a2_v(string a0, string a1)
	{
		int L0;
		for (L0 = 1; ; L0 = L0 + 1) {
			bool L1;
			Vector L2;
			Vector L3;
			@GetLocator("pt_agony_" + a0 + L0, L1, L2, L3);
			if (!L1) {
				break;
			}
			f_29_a4_v(a0, a1, L2, L3);
		}
	}

	void f_29_a4_v(string a0, string a1, Vector a2, Vector a3)
	{
		if (f_8e_a1_b(0.5)) {
			object L0;
			@AddActor(L0, "pers_" + a0, f_88_a0_o(), a2, a3, "agony1_" + a1 + ".xml");
		}
	}
}

task t1
{
	void init(void)
	{
		bool L0;
		f_67_a0_v();
		@Sleep(3, L0);
		if (L0) {
			for (; ; ) {
				Vector L1;
				@GetRandomPFPoint(L1, 0, 0);
				f_58_a1_v(L1);
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

void f_58_a1_v(Vector a0)
{
	object L0;
	@Trace("New fog at " + a0);
	@AddActorByType(L0, "fog", f_88_a0_o(), a0, [0.0, 0.0, 1.0], "horror_fog.xml");
}

void f_67_a0_v(void)
{
	int L0;
	for (L0 = 1; ; L0 = L0 + 1) {
		bool L1;
		Vector L2;
		Vector L3;
		@GetLocator("pt_fog" + L0, L1, L2, L3);
		if (!L1) {
			break;
		}
		f_79_a2_v(L2, L3);
	}
}

void f_79_a2_v(Vector a0, Vector a1)
{
	if (f_8e_a1_b(0.5)) {
		object L0;
		@AddActorByType(L0, "fog", f_88_a0_o(), a0, a1, "fog_stat.xml");
	}
}

object f_88_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_8e_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

