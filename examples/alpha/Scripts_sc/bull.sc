event OnLoad 5;
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
	void init(void)
	{
		@RemoveEnvelope();
		@RemoveRTEnvelope();
		for (; ; ) {
			int L0;
			if (!f_56_a0_b()) {
				t0{};
			}
			@irand(L0, 3);
			if (L0 == 0) {
				t2{};
			} else {
				t3{};
			}
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
			L1 = f_68_a0_i();
			if (L1) {
				int L2;
				@irand(L2, L1);
				@PlayAnimation("all", f_62_a1_s(L2));
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

task t3
{
	void init(void)
	{
		float L0;
		@rand(L0, 3);
		@Sleep(L0 + 5);
	}

	void OnUnload(void)
	{
		@StopGroup0();
	}
}

bool f_56_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

string f_5b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

string f_62_a1_s(int a0)
{
	return "idle" + (a0 + 1);
}

int f_68_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_5b_a1_s(L0 + 1));
		if (!L1) {
			break;
		}
	}
	return L0;
}

