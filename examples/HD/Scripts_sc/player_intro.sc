event OnTimer 7;
event OnPlayerEnemy 44;
event OnPlayerStartWalking 20;
event OnPlayerStopWalking 21;
event OnLSHAnimationEnd 45;

var string g0;

maintask t0
{
	void init(void)
	{
		bool L0;
		@HasProperty("effects", L0);
		if (!L0) {
			@SetProperty("effects", true);
			@ApplyEffect("player_head.bin");
			@ApplyEffect("player_eyes_height.bin");
		}
		for (; ; ) {
			@Hold();
		}
	}

	void OnTimer(int a0)
	{
		f_3a_a1_b(a0);
	}
}

string f_1a_a1_s(int a0)
{
	if (a0 == 1) {
		return "wood";
	} else {
		if (a0 == 2) {
			return "metal";
		} else {
			if (a0 == 3) {
				return "ground";
			} else {
				if (a0 == 4) {
					return "water";
				} else {
					if (a0 == 5) {
						return "carpet";
					}
				}
			}
		}
	}
	return "stone";
}

bool f_3a_a1_b(int a0)
{
	if (a0 == 10) {
		f_d1_a0_v();
		return true;
	} else {
		if (a0 == 11) {
			f_d9_a0_v();
			return true;
		} else {
			if (a0 == 12) {
				f_d5_a0_v();
				return true;
			}
		}
	}
	return false;
}

void f_57_a0_v(void)
{
	bool L0;
	int L1;
	string L2;
	int L3;
	@GetGroundMaterial(L0, L1);
	if (!L0) {
		L1 = -1;
	}
	L2 = f_1a_a1_s(L1);
	for (L3 = 0; ; L3++) {
		bool L4;
		@IsExistingSound(L4, "step_" + L2 + (L3 + 1));
		if (!L4) {
			break;
		}
	}
	int L5;
	string L6;
	string L7;
	if (!L3) {
		g0 = "";
		return;
	}
	if (L3 == 1) {
		L5 = 0;
	} else {
		for (; ; ) {
			@irand(L5, L3);
			L6 = "step_" + L2 + (L5 + 1);
			if (L6 != g0) {
				break;
			}
		}
	}
	L7 = "step_" + L2 + (L5 + 1);
	@PlaySound(L7);
	g0 = L7;
}

void f_92_a0_v(void)
{
	bool L0;
	@KillTimer(11, L0);
	if (L0) {
		@ModNoise(-3);
	}
}

void f_9c_a0_v(void)
{
	f_92_a0_v();
	@SetTimer(11, 0.15000000596046448);
	@ModNoise(3);
}

void f_a7_a0_v(void)
{
	bool L0;
	@KillTimer(10, L0);
	if (L0) {
		@ModNoise(-2);
	}
}

void f_b1_a0_v(void)
{
	bool L0;
	@KillTimer(12, L0);
	if (L0) {
		@ModNoise(-1);
	}
}

void f_bb_a0_v(void)
{
	f_a7_a0_v();
	@SetTimer(10, 0.3499999940395355);
	@ModNoise(2);
}

void f_c6_a0_v(void)
{
	f_b1_a0_v();
	@SetTimer(12, 0.6000000238418579);
	@ModNoise(1);
}

void f_d1_a0_v(void)
{
	f_57_a0_v();
}

void f_d5_a0_v(void)
{
	f_57_a0_v();
}

void f_d9_a0_v(void)
{
	f_57_a0_v();
	f_92_a0_v();
}

void OnPlayerEnemy(void)
{
	f_c6_a0_v();
	f_92_a0_v();
}

void OnPlayerStartWalking(void)
{
	f_bb_a0_v();
	f_92_a0_v();
}

void OnPlayerStopWalking(void)
{
	f_a7_a0_v();
	f_9c_a0_v();
}

void OnLSHAnimationEnd(void)
{
	f_b1_a0_v();
}

