event OnUse 0;
event OnTimer 7;

var object g0;

maintask t0
{
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;

	void init(void)
	{
		while (true) {
			f_b_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
	}

	void f_b_a2_v(float a0, float a1)
	{
		if (!f_a5_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_4c_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_26_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_9d_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_26_a0_b()) {
				if (!tv2) {
					f_aa_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}
}

void f_4c_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_a5_a0_b()) {
		return;
	}
	L0 = f_bc_a0_i();
	for (L1 = 0; L1 < 5 && f_a5_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_b5_a1_s(L3));
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
		if (!f_9b_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_9b_a0_b(void)
{
	return true;
}

float f_9d_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_a5_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_aa_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

string f_b5_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_bc_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_b5_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

