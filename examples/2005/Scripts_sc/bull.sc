event OnLoad 5;
event OnUnload 6;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_49_a0_b());
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
		@RemoveEnvelope();
		@RemoveRTEnvelope();
		for (; ; ) {
			if (!f_49_a0_b()) {
				t0{};
			}
			t2{};
		}
	}
}

task t2
{
	void init(void)
	{
		int L0;
		@irand(L0, 3);
		if (!L0) {
			int L1;
			L1 = f_84_a0_i();
			if (L1) {
				int L2;
				string L3;
				@irand(L2, L1);
				L3 = f_7e_a1_s(L2);
				@PlayAnimation("all", L3);
				f_4e_a1_v(L3);
				@WaitForAnimEnd();
			}
		} else {
			@PlayAnimation("all", "idle");
			@WaitForAnimEnd();
		}
	}

	void OnUnload(void)
	{
		@StopAnimation();
	}
}

bool f_49_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_4e_a1_v(string a0)
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

string f_77_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

string f_7e_a1_s(int a0)
{
	return "idle" + (a0 + 1);
}

int f_84_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_77_a1_s(L0 + 1));
		if (!L1) {
			break;
		}
	}
	return L0;
}

