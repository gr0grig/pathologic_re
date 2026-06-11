event OnHit 22;
event OnTimer 7;

var bool g0;

maintask t0
{
	void init(void)
	{
		g0 = true;
		for (; ; ) {
			@Hold();
		}
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
		if (a1 != 5) {
			f_124_a3_v(a0, a1, a2);
			t1{a2};
		}
	}
}

task t1
{
	var float tv0;
	var float tv1;

	void init(float a0)
	{
		float L0;
		bool L1;
		float L2;
		tv0 = 0.0;
		L0 = a0;
		if (L0 < 0.20000000298023224) {
			L0 = 0.20000000298023224;
		}
		tv1 = f_a6_a1_f(2.0 * L0);
		@LockCameraFOV(L1);
		@GetCameraCurrentFOV(L2);
		for (; ; ) {
			float L3;
			@sync(L3);
			if (tv1 < tv0) {
				tv0 = tv0 - L3 * 2.0 / 2;
				if (tv0 <= 0) {
					f_154_a3_v(0, L2, L1);
					break;
				}
			} else {
				tv0 = tv0 + L3 * 2.0;
				if (tv0 >= tv1) {
					if (!tv0) {
						f_154_a3_v(0, L2, L1);
						break;
					}
					tv0 = tv1;
					tv1 = 0;
				}
			}
			f_154_a3_v(tv0, L2, L1);
		}
		if (L1) {
			@UnlockCameraFOV(L1);
		}
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
		float L0;
		f_124_a3_v(a0, a1, a2);
		L0 = f_a6_a1_f(a2);
		if (tv1 < tv0) {
			if (L0 > tv0) {
				tv1 = L0;
			}
		} else {
			if (L0 > tv1) {
				tv1 = L0;
			}
		}
	}
}

Vector f_6f_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

object f_76_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_7c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_86_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void OnTimer(int a0)
{
	if (a0 == 0) {
		g0 = true;
		@KillTimer(0);
	}
}

void f_9c_a0_v(void)
{
	if (g0) {
		g0 = false;
		@SetTimer(0, 3.0);
	}
}

float f_a6_a1_f(float a0)
{
	return f_86_a3_f(sqrt(a0), 0, 1);
}

int f_af_a1_i(string a0)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@IsExistingSound(L1, a0 + (L0 + 1));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_be_a1_v(string a0)
{
	int L0;
	L0 = f_af_a1_i(a0 + "_");
	if (!L0) {
		@Trace("No sounds for \"" + a0 + "\"");
	} else {
		int L1;
		@irand(L1, L0);
		@PlaySound(a0 + "_" + (L1 + 1));
	}
}

void f_d8_a1_v(string a0)
{
	if (g0) {
		f_9c_a0_v();
		f_be_a1_v(a0);
	}
}

void f_e3_a1_v(int a0)
{
	if (a0 == 0) {
		f_be_a1_v("hit_physical1");
		f_d8_a1_v("scream_physical1");
	} else {
		if (a0 == 1) {
			f_be_a1_v("hit_physical2");
			f_d8_a1_v("scream_physical2");
		} else {
			if (a0 == 2) {
				f_be_a1_v("hit_bullet");
				f_d8_a1_v("scream_bullet");
			} else {
				if (a0 == 3) {
					f_be_a1_v("hit_oscoloc");
					f_d8_a1_v("scream_oscoloc");
				} else {
					if (a0 == 6) {
						f_be_a1_v("hit_mental");
						f_d8_a1_v("scream_mental");
					} else {
						if (a0 == 4) {
						}
					}
				}
			}
		}
	}
}

void f_124_a3_v(object a0, int a1, float a2)
{
	f_e3_a1_v(a1);
	if (a1 != 5 && a1 != 6) {
		if (a0 != f_76_a0_o() && a0->FuncExist("GetPosition", 1)) {
			Vector L0;
			@GetSpeed(L0);
			L0 = L0 - f_7c_a1_V(f_6f_a1_V(a0)) * 400;
			if ((L0 | L0) < 160000) {
				@SetSpeed(L0);
			}
		}
	}
}

void f_154_a3_v(float a0, float a1, bool a2)
{
	@ModDarkenLevel(a0);
	@ModBlurLevel(a0);
	if (a2) {
		@SetCameraFOV(a1 * (1 + a0 * 0.10000000149011612));
	}
}

