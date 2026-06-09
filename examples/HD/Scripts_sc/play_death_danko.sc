maintask t0
{
	void init(void)
	{
		@RemoveOverride();
		@ModBlurLevel(0.15000000596046448);
		@CameraSwitchToNormal();
		@RemoveActor(f_21_a0_o());
		@CameraPlayRel("danko_death.mot", true);
		@Sleep(1.5);
		f_28_a3_v(0, 1, 1.25);
		@CameraWaitForPlayFinish();
		@GameOver("gameover.xml");
		@Hold();
	}
}

object f_21_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_28_a3_v(float a0, float a1, float a2)
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

