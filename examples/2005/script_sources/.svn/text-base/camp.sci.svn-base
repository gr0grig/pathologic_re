include std.sci

task TCampBase
{
	void init(void) {
		for (;;) {
			float fDirX, fDirZ;
			@RandVec2D(fDirX, fDirZ);
			bool bSuccess;
			@Rotate(fDirX, fDirZ, bSuccess);
			if (!bSuccess)
				break;
			if (DoSomething())
				break;
			@Sleep(5, bSuccess);
			if (!bSuccess)
				break;
		}
	}
	
	void CancelActivity(void) {
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	// return true to stop camping
	// bool DoSomething(void) = 0;
}
