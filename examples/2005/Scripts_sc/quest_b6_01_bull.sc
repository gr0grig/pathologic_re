event OnLoad 5;
event OnUnload 6;
event OnTrigger 26;
event OnDispose 32;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_69_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

maintask t1
{
	void init(void)
	{
		f_14_a0_v();
		f_26_a0_v();
	}

	void f_14_a0_v(void)
	{
		object L0;
		object L1;
		@GetScene(L0);
		@AddActor(L1, "b6q01_bull_envelope", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
		g0 = L1;
	}

	void OnUnload(void)
	{
		global.OnUnload();
	}

	void f_26_a0_v(void)
	{
		@RemoveEnvelope();
		@RemoveRTEnvelope();
		for (; ; ) {
			if (!f_69_a0_b()) {
				t0{};
			}
			t2{};
		}
	}
}

task t2
{
	void OnUnload(void)
	{
		global.OnUnload();
		f_66_a0_v();
	}

	void init(void)
	{
		int L0;
		@irand(L0, 3);
		if (!L0) {
			int L1;
			L1 = f_aa_a0_i();
			if (L1) {
				int L2;
				string L3;
				@irand(L2, L1);
				L3 = f_a4_a1_s(L2);
				@PlayAnimation("all", L3);
				f_6e_a1_v(L3);
				@WaitForAnimEnd();
			}
		} else {
			@PlayAnimation("all", "idle");
			@WaitForAnimEnd();
		}
	}
}

void f_66_a0_v(void)
{
	@StopAnimation();
}

bool f_69_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_6e_a1_v(string a0)
{
	bool L0;
	@IsExisting3DSound(L0, a0);
	int L1;
	bool L2;
	if (!L0) {
		int L3;
		for (L1 = 0; ; L1 = L1 + 1) {
			@IsExisting3DSound(L2, a0 + (L1 + 1));
			if (!L2) {
				break;
			}
		}
		if (!L1) {
			return;
		}
		@irand(L3, L1);
		a0 = a0 + (L3 + 1);
	}
	bool L4;
	@Is3DSoundLoaded(L4, a0);
	if (L4) {
		float L5;
		Vector L6;
		Vector L7;
		@GetEyesHeight(L5);
		@GetDirection(L6);
		L7 = L6 * 50;
		L7.y += L5;
		@PlayGlobalSound(a0, L7);
	}
}

object f_97_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

string f_9d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

string f_a4_a1_s(int a0)
{
	return "idle" + (a0 + 1);
}

int f_aa_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_9d_a1_s(L0 + 1));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void OnTrigger(string a0)
{
	if (a0 == "cleanup") {
		bool L0;
		g1 = true;
		@IsLoaded(L0);
		if (!L0) {
			@RemoveActor(f_97_a0_o());
		}
	} else {
		if (a0 == "restore") {
			g1 = false;
		}
	}
}

void OnUnload(void)
{
	if (g1) {
		@RemoveActor(f_97_a0_o());
	}
}

void OnDispose(void)
{
	if (g0) {
		@RemoveActor(g0);
	}
}

