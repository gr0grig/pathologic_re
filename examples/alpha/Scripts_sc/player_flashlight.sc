maintask t0
{
	void init(void)
	{
		for (; ; ) {
			bool L0;
			@IsFlashlightOn(L0);
			if (L0 && !f_5f_a0_b()) {
				f_15_a0_v();
			}
			@sync();
		}
	}
}

void f_15_a0_v(void)
{
	if (f_59_a1_b(1)) {
		float L0;
		float L1;
		L0 = 0;
		L1 = 0;
		for (; ; ) {
			for (; ; ) {
				if (L1 <= 0) {
					float L2;
					@rand(L2, 0.9200000166893005, 1.0);
					@SetFlashlightColor([0.480392187833786, 0.4333333671092987, 0.29019609093666077] * L2);
					@rand(L1, 0.07500000298023224, 0.10000000149011612);
				}
				float L3;
				@sync(L3);
				bool L4;
				@IsFlashlightOn(L4);
				if (!L4 || f_5f_a0_b()) {
					return;
				}
				L1 = L1 - L3;
				L0 = L0 + L3;
				if ((int)L0 >= 5) {
					break;
				}
			}
			int L5;
			L5 = (int)L0 / 5;
			if (!f_59_a1_b(L5)) {
				break;
			}
			L0 = L0 % 5;
		}
	}
	@SwitchFlashlight(false);
	@PlaySound("flashlight_off");
}

bool f_59_a1_b(int a0)
{
	int L0;
	@RemoveItemByType(L0, "kerosene", a0);
	return L0 == a0;
}

bool f_5f_a0_b(void)
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

