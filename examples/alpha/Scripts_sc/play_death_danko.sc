maintask t0
{
	void init(void)
	{
		@ModBlurLevel(0.15000000596046448);
		@CameraPlayRel("danko_death.mot", true);
		@Sleep(1.5);
		f_15_a3_v(0, 1, 1.25);
		@CameraWaitForPlayFinish();
		@Hold();
	}
}

void f_15_a3_v(float a0, float a1, float a2)
{
	bool L0;
	float L1;
	L0 = a1 > a0;
	L1 = (a1 - a0) / a2;
	while (L0 ? a0 < a1 : a1 < a0) {
		float L2;
		@ModDarkenLevel(a0);
		@sync(L2);
		a0 = a0 + L2 * L1;
	}
	@ModDarkenLevel(a1);
}

