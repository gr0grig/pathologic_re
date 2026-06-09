event OnTimer 7;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@SetTimer(111, 1);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTimer(int a0)
	{
		object L0;
		int L1;
		int L2;
		Vector L3;
		Vector L4;
		int L5;
		L0 = f_70_a0_o();
		L1 = f_82_a0_i();
		L2 = f_8b_a0_i();
		if (L1 >= 2 && L2 > 2) {
			@RemoveActor(f_77_a0_o());
			return;
		}
		if (L0 == null) {
			return;
		}
		L3 = f_6b_a1_V(L0);
		L4.x = 17738;
		L4.y = 705;
		L4.z = 2229;
		L5 = 0;
		@GetVariable("d1GhostCatHDPathologic", L5);
		if (L5 != 0 && (L1 == 1 && L2 >= 21 || L1 == 2 && L2 <= 2)) {
			if (f_7d_a2_f(L3, L4) < 500) {
				@UnlockAchievement("ACHIEVEMENT_NOTICE");
				@RemoveActor(f_77_a0_o());
			}
		}
	}
}

Vector f_6b_a1_V(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return L0;
}

object f_70_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

object f_77_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_7d_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return sqrt(L0 | L0);
}

int f_82_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_8b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

