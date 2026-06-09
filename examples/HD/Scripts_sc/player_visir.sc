maintask t0
{
	void init(void)
	{
		float L0;
		L0 = 0;
		for (; ; ) {
			float L1;
			bool L2;
			@sync(L1);
			@IsVisirOn(L2);
			if (L2) {
				if (!f_73_a0_b()) {
					f_30_a0_v();
					L0 = 0;
				}
			} else {
				bool L3;
				@GetProperty("visir", L3);
				if (L3) {
					int L4;
					L0 = L0 + L1;
					L4 = (int)L0 / 3;
					if (L4) {
						int L5;
						@GetProperty("vcharge", L5);
						@SetProperty("vcharge", f_80_a3_i(L5 + L4, 0, 100));
						L0 = L0 % 3;
					}
				} else {
					L0 = 0;
				}
			}
		}
	}
}

void f_30_a0_v(void)
{
	if (f_63_a1_b(5)) {
		float L0;
		L0 = 0;
		for (; ; ) {
			for (; ; ) {
				float L1;
				bool L2;
				@sync(L1);
				@IsVisirOn(L2);
				if (!L2 || f_73_a0_b()) {
					return;
				}
				L0 = L0 + L1;
				if ((int)L0 >= 1) {
					break;
				}
			}
			int L3;
			L3 = (int)L0;
			if (!f_63_a1_b(L3)) {
				break;
			}
			L0 = L0 % 1;
		}
	}
	@SwitchVisir(false);
	@SendWorldWndMessage(2);
}

bool f_63_a1_b(int a0)
{
	int L0;
	@GetProperty("vcharge", L0);
	L0 = f_80_a3_i(L0 - a0, 0, 100);
	@SetProperty("vcharge", L0);
	return L0;
}

bool f_73_a0_b(void)
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

int f_80_a3_i(int a0, int a1, int a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

