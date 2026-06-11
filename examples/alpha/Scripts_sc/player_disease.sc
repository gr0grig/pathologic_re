event OnPropertyChange 16;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnPropertyChange(object a0, string a1)
	{
		if (a1 == "disease") {
			if (!f_f8_a0_b()) {
				t1{};
			}
		}
	}
}

task t1
{
	void init(void)
	{
		float L0;
		@Trace("Disease effect started");
		@GetProperty("disease", L0);
		L0 = f_ed_a3_f(L0 * 2, 0, 1);
		if (f_5f_a1_b(L0)) {
			while (!f_f8_a0_b()) {
				float L1;
				@GetProperty("disease", L0);
				L0 = f_ed_a3_f(L0, 0, 1);
				@rand(L1, 30 - L0 * 15, 120 - L0 * 80);
				if (!t2{L1}) {
					break;
				}
				@GetProperty("disease", L0);
				L0 = f_ed_a3_f(L0, 0, 1);
				if (!f_5f_a1_b(L0)) {
					break;
				}
			}
		}
		@Trace("Disease effect stopped");
	}

	bool f_5f_a1_b(float a0)
	{
		bool L0;
		bool L1;
		float L2;
		float L3;
		float L4;
		float L5;
		float L6;
		@LockCameraRoll(L0);
		@LockCameraFOV(L1);
		@irand(L2, 2);
		L2 = 0.6283185482025146 * (L2 - 0.5);
		@GetCameraCurrentFOV(L3);
		L4 = 0.5 + 0.5 * a0;
		L5 = 0.5 + 0.5 * a0;
		L6 = 0;
		do {
			float L7;
			@sync(L7);
			L6 = L6 + L7 * L4;
			if (L0) {
				f_b6_a2_v(L6, L2);
			}
			if (L1) {
				f_ca_a2_v(L6, L3);
			}
			@ModDarkenLevel(L6);
		} while (L6 < L5);
		L6 = L5;
		do {
			float L8;
			@sync(L8);
			L6 = L6 - L8 * L4 / 5;
			if (L0) {
				f_b6_a2_v(L6, L2);
			}
			if (L1) {
				f_ca_a2_v(L6, L3);
			}
			@ModDarkenLevel(L6);
		} while (L6 > 0);
		@UnlockCameraFOV(L1);
		@UnlockCameraRoll(L0);
		@ModBlurLevel(a0 / 2);
		@Sleep(10);
		@ModBlurLevel(0);
		return true;
	}

	void f_b6_a2_v(float a0, float a1)
	{
		float L0;
		Vector L1;
		Vector L2;
		L0 = a0 * a1;
		@SetCameraRoll(L0);
		@GetForce(L1);
		@GetDirection(L2);
		L1 = L1 + f_e3_a1_V(L2 ^ [0.0, 1.0, 0.0]) * L0 * 1500;
		@SetForce(L1);
	}

	void f_ca_a2_v(float a0, float a1)
	{
		@SetCameraFOV(a1 * (1 - a0 * 0.75));
	}
}

task t2
{
	bool init(float a0)
	{
		bool L0;
		@Sleep(a0, L0);
		return L0;
	}

	void OnPropertyChange(object a0, string a1)
	{
		if (a1 == "disease") {
			if (f_f8_a0_b()) {
				@StopGroup0();
			}
		}
	}
}

Vector f_e3_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_ed_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_f8_a0_b(void)
{
	float L0;
	@GetProperty("disease", L0);
	return L0 <= 0.009999999776482582;
}

