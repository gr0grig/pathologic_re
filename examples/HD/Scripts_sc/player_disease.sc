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
			if (!f_1a4_a0_b()) {
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
		if (f_182_a0_b()) {
			return;
		}
		@Trace("Disease effect started");
		@GetProperty("disease", L0);
		L0 = f_199_a3_f(L0 * 2, 0, 1);
		if (f_c8_a1_b(L0)) {
			for (; !f_1a4_a0_b(); ) {
				float L1;
				int L2;
				@GetProperty("disease", L0);
				L0 = f_199_a3_f(L0, 0, 1);
				@rand(L1, 600 - L0 * 500, 1200 - L0 * 1000);
				L2 = t2{L1};
				@GetProperty("disease", L0);
				L0 = f_199_a3_f(L0, 0, 1);
				if (1 == L2) {
					f_76_a1_b(0.10000000149011612);
					break;
				} else {
					if (2 == L2) {
						if (!f_76_a1_b(L0)) {
							break;
						}
					} else {
						if (!f_c8_a1_b(L0)) {
							break;
						}
					}
				}
			}
		}
		@Trace("Disease effect stopped");
	}

	bool f_76_a1_b(float a0)
	{
		bool L0;
		bool L1;
		float L2;
		float L3;
		float L4;
		float L5;
		float L6;
		if (f_182_a0_b()) {
			return false;
		}
		@PlaySound("sick");
		@LockCameraRoll(L0);
		@LockCameraFOV(L1);
		@irand(L2, 2);
		L2 = 0.6283185482025146 * (L2 - 0.5);
		@GetCameraCurrentFOV(L3);
		L4 = 0.5 + 0.5 * a0;
		L5 = 0.25 + 0.75 * a0;
		L6 = 0;
		do {
			float L7;
			@sync(L7);
			L6 = L6 + L7 * L4;
			if (L0) {
				f_12f_a2_v(L6, L2);
			}
			if (L1) {
				f_143_a2_v(L6, L3);
			}
		} while (L6 < L5);
		L6 = L5;
		do {
			float L8;
			@sync(L8);
			L6 = L6 - L8 * L4 / 5;
			if (L0) {
				f_12f_a2_v(L6, L2);
			}
			if (L1) {
				f_143_a2_v(L6, L3);
			}
		} while (L6 > 0);
		@UnlockCameraFOV(L1);
		@UnlockCameraRoll(L0);
		return true;
	}

	bool f_c8_a1_b(float a0)
	{
		bool L0;
		bool L1;
		float L2;
		float L3;
		float L4;
		float L5;
		float L6;
		if (f_182_a0_b()) {
			return false;
		}
		@PlaySound("sick");
		@LockCameraRoll(L0);
		@LockCameraFOV(L1);
		@irand(L2, 2);
		L2 = 0.6283185482025146 * (L2 - 0.5);
		L2 = L2 * (a0 < 0.25 ? 0.25 : a0);
		@GetCameraCurrentFOV(L3);
		L4 = 0.5 + 0.5 * a0;
		L5 = 0.25 + 0.75 * a0;
		L6 = 0;
		do {
			float L7;
			@sync(L7);
			L6 = L6 + L7 * L4;
			if (L0) {
				f_12f_a2_v(L6, L2);
			}
			if (L1) {
				f_143_a2_v(L6, L3);
			}
			@ModDarkenLevel(L6);
		} while (L6 < L5);
		L6 = L5;
		do {
			float L8;
			@sync(L8);
			L6 = L6 - L8 * L4 / 5;
			if (L0) {
				f_12f_a2_v(L6, L2);
			}
			if (L1) {
				f_143_a2_v(L6, L3);
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

	void f_12f_a2_v(float a0, float a1)
	{
		float L0;
		Vector L1;
		Vector L2;
		L0 = a0 * a1;
		@SetCameraRoll(L0);
		@GetForce(L1);
		@GetDirection(L2);
		L1 = L1 + f_18f_a1_V(L2 ^ [0.0, 1.0, 0.0]) * L0 * 1500;
		@SetForce(L1);
	}

	void f_143_a2_v(float a0, float a1)
	{
		@SetCameraFOV(a1 * (1 - a0 * 0.75));
	}
}

task t2
{
	var float tv0;
	var int tv1;

	int init(float a0)
	{
		bool L0;
		tv1 = 0;
		@GetProperty("disease", tv0);
		tv0 = f_199_a3_f(tv0, 0, 1);
		@Sleep(a0, L0);
		return tv1;
	}

	void OnPropertyChange(object a0, string a1)
	{
		if (a1 == "disease") {
			float L0;
			if (f_1a4_a0_b()) {
				tv1 = 1;
				@StopGroup0();
			}
			@GetProperty("disease", L0);
			L0 = f_199_a3_f(L0, 0, 1);
			if (L0 > tv0 + 0.0010000000474974513) {
				@StopGroup0();
			} else {
				if (L0 + 0.0010000000474974513 < tv0) {
					tv1 = 2;
					@StopGroup0();
				} else {
					tv0 = L0;
				}
			}
		}
	}
}

bool f_182_a0_b(void)
{
	bool L0;
	bool L1;
	@HasProperty("sleeping", L0);
	if (!L0) {
		return false;
	}
	@GetProperty("sleeping", L1);
	return L1;
}

Vector f_18f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_199_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_1a4_a0_b(void)
{
	float L0;
	@GetProperty("disease", L0);
	return L0 <= 0.0010000000474974513;
}

