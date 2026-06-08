maintask t0
{
	void init(void)
	{
		for (; ; ) {
			bool L0;
			float L1;
			@GetEyesHeightCoef(L1);
			if (L1 == 1) {
				for (; ; ) {
					@sync();
					@IsSneakEnabled(L0);
					if (L0) {
						break;
					}
				}
				f_1f_a0_v();
			} else {
				@IsSneakEnabled(L0);
				if (L0) {
					f_1f_a0_v();
				} else {
					f_3a_a0_v();
				}
			}
		}
	}
}

void f_1f_a0_v(void)
{
	bool L0;
	for (; ; ) {
		float L1;
		float L2;
		@sync(L1);
		@GetEyesHeightCoef(L2);
		L2 = L2 - 1.2000000476837158 * L1;
		if (L2 <= 0.800000011920929) {
			@SetEyesHeightCoef(0.800000011920929);
			break;
		}
		@SetEyesHeightCoef(L2);
	}
	for (; ; ) {
		@sync();
		@IsSneakEnabled(L0);
		if (!L0) {
			break;
		}
	}
}

void f_3a_a0_v(void)
{
	bool L0;
	for (; ; ) {
		float L1;
		float L2;
		@sync(L1);
		@GetEyesHeightCoef(L2);
		L2 = L2 + 1.2000000476837158 * L1;
		if (L2 >= 1) {
			break;
		}
		@SetEyesHeightCoef(L2);
	}
	@SetEyesHeightCoef(1);
}

