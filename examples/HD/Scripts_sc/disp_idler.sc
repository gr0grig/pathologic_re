event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_99_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_48_a0_v();
		}
	}

	void f_15_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_46_a0_b()) {
			@RemoveActor(f_9e_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_15_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_46_a0_b()) {
			@RemoveActor(f_9e_a0_o());
		}
	}
}

bool f_46_a0_b(void)
{
	return true;
}

void f_48_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_99_a0_b()) {
		return;
	}
	L0 = f_ab_a0_i();
	for (L1 = 0; L1 < 5 && f_99_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_a4_a1_s(L3));
				@WaitForAnimEnd(L4);
				if (!L4) {
					break;
				}
			}
		} else {
			if (L2 == 1) {
				float L5;
				bool L6;
				@rand(L5, 4);
				@Sleep(L5 + 1, L6);
				if (!L6) {
					break;
				}
			} else {
				if (L1) {
					break;
				}
			}
		}
		if (!f_97_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_97_a0_b(void)
{
	return true;
}

bool f_99_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_9e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

string f_a4_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_ab_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_a4_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

