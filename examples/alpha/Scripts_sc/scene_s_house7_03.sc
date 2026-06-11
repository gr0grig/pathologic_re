event OnLoad 5;
event OnUnload 6;

maintask t0
{
	void OnLoad(void)
	{
		f_51_a2_b("quest_d4_02", "scene_load");
		f_13_a0_v();
	}

	void OnUnload(void)
	{
		f_51_a2_b("quest_d4_02", "scene_unload");
	}

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void f_13_a0_v(void)
	{
		t1{};
	}
}

task t1
{
	void OnUnload(void)
	{
		f_51_a2_b("quest_d4_02", "scene_unload");
		f_39_a0_v();
	}

	void init(void)
	{
		bool L0;
		@Sleep(3, L0);
		if (!L0) {
			return;
		}
		for (; ; ) {
			Vector L1;
			@GetRandomPFPoint(L1, 0, 0);
			f_3c_a1_v(L1);
			@Sleep(30, L0);
			if (!L0) {
				break;
			}
		}
	}
}

void f_39_a0_v(void)
{
	@StopGroup0();
}

void f_3c_a1_v(Vector a0)
{
	object L0;
	@Trace("New fog at " + a0);
	@AddActorByType(L0, "fog", f_4b_a0_o(), a0, [0.0, 0.0, 1.0], "horror_fog.xml");
}

object f_4b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_51_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

