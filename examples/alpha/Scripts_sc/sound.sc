event OnLoad 5;
event OnTimer 7;
event OnUnload 6;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	var object tv0;
	var float tv1;
	var float tv2;

	void init(void)
	{
		tv0 = null;
		if (!f_a7_a0_b()) {
			t0{};
		}
		if (!f_9b_a2_b(f_ac_a0_o(), "distance")) {
			tv1 = 250000;
		} else {
			@GetProperty("distance", tv1);
			tv1 = tv1 * tv1;
		}
		if (!f_9b_a2_b(f_ac_a0_o(), "mindistance")) {
			tv2 = 100;
		} else {
			@GetProperty("mindistance", tv2);
		}
		@SetTimer(101, 1.0);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTimer(int a0)
	{
		object L0;
		Vector L1;
		Vector L2;
		Vector L3;
		float L4;
		L0 = f_94_a0_o();
		if (L0 == null) {
			@Trace("Null player");
			return;
		}
		L1 = f_8f_a1_V(L0);
		L2 = f_8a_a0_V();
		L3 = L1 - L2;
		L4 = L3 | L3;
		if (tv0 != null && L4 > tv1) {
			@Trace("stopped");
			tv0->Stop();
			tv0 = null;
			return;
		}
		if (tv0 == null && L4 < tv1) {
			disable OnTimer;
			@Trace("started");
			@WaitFor3DSoundToLoad("envsound");
			@PlayLoopedGlobalSound(tv0, "envsound", [0.0, 0.0, 0.0], 0.0, tv2);
			if (tv0 == null) {
				@Trace("Sound was not found");
			} else {
				tv0->FadeIn(0.5);
			}
			enable OnTimer;
		}
	}

	void OnUnload(void)
	{
		@KillTimer(101);
		t0{};
		@SetTimer(101, 1.0);
	}
}

Vector f_8a_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_8f_a1_V(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return L0;
}

object f_94_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_9b_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_a7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_ac_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

