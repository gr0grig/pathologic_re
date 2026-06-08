maintask t0
{
	void init(void)
	{
		for (; ; ) {
			float L0;
			float L1;
			@GetGameTime(L0);
			L0 = L0 % 24;
			if (L0 <= 6.0) {
				L1 = 0.1568627506494522;
			} else {
				if (L0 <= 8.0) {
					L1 = f_31_a5_f(L0, 6.0, 8.0, 0.1568627506494522, 0.47058823704719543);
				} else {
					if (L0 <= 20.0) {
						L1 = 0.47058823704719543;
					} else {
						if (L0 <= 21.0) {
							L1 = f_31_a5_f(L0, 20.0, 21.0, 0.47058823704719543, 0.1568627506494522);
						} else {
							L1 = 0.1568627506494522;
						}
					}
				}
			}
			@SetBaseVisibility(L1);
			@Sleep(5);
		}
	}
}

float f_31_a5_f(float a0, float a1, float a2, float a3, float a4)
{
	float L0;
	L0 = (a0 - a1) / (a2 - a1);
	return a3 * (1 - L0) + a4 * L0;
}

