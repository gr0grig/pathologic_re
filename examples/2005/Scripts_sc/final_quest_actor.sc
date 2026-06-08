event OnTrigger 26;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "voices") {
			@PlaySound("voice");
		} else {
			if (a0 == "whiten") {
				float L0;
				f_32_a0_v();
				@CameraPlay("final_theater_cam.mot");
				@CameraWaitForPlayFinish();
				L0 = 0;
				do {
					float L1;
					@Trace(1);
					@sync(L1);
					L0 = L0 + L1 * 1.0 / 2.0;
					@ModDarkenLevel(L0);
				} while (L0 < 1);
				f_37_a0_v();
				@CameraSwitchToNormal();
				@TriggerWorld("exit");
			}
		}
	}
}

void f_32_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_37_a0_v(void)
{
	@SetSepia(0, 0);
}

