event OnUnload 6;

maintask t0
{
	var bool tv0;
	var object tv1;

	void init(void)
	{
		object L0;
		int L1;
		@FindActor(L0, "player");
		tv0 = false;
		@WaitForAnimEnd();
		if (!f_53_a0_b()) {
			return;
		}
		L1 = f_63_a0_i();
		while (L1) {
			int L2;
			bool L3;
			@irand(L2, L1);
			@PlayAnimation("all", f_74_a1_s(L2));
			if (f_7b_a1_b(L0) && !tv0) {
				tv0 = true;
				f_58_a1_v(L0);
			}
			@WaitForAnimEnd(L3);
			if (!L3) {
				break;
			}
			if (!f_7b_a1_b(L0) && tv0) {
				@UnlookAsync("head");
				tv0 = false;
			}
		}
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		for (; ; ) {
			@Hold();
		}
	}
}

float f_4b_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_53_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_58_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

int f_63_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_74_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

string f_74_a1_s(int a0)
{
	string L0;
	L0 = "dance";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

bool f_7b_a1_b(object a0)
{
	float L0;
	if (a0 == null) {
		return false;
	}
	L0 = sqrt(f_4b_a1_f(a0));
	return L0 < 350;
}

