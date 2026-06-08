event OnPlayerStopWalking 21;
event OnPlayerStartWalking 20;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			t1{};
			for (; ; ) {
				bool L0;
				@PlayCameraMotion("head");
				@WaitForCameraMotionEnd();
				@IsWalking(L0);
				if (!L0) {
					break;
				}
			}
			t2{};
		}
	}

	void OnPlayerStopWalking(void)
	{
		@StopCameraMotion();
	}
}

task t1
{
	void init(void)
	{
		bool L0;
		@IsWalking(L0);
		if (!L0) {
			@Hold();
		}
	}

	void OnPlayerStartWalking(void)
	{
		@StopGroup0();
	}
}

task t2
{
	void init(void)
	{
		@InterpolateCameraMotion(0.0872664675116539, 60.0);
		@WaitForCameraMotionEnd();
	}
}

