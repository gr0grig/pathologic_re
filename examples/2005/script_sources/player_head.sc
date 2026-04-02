include std.sci

const float c_fRotSpeed = PI / 36;
const float c_fTransSpeed = 60;

maintask THead
{
	void init(void) {
		for (;;) {
			TWaitForWalkStart{};
			for (;;) {
				@PlayCameraMotion("head");
				@WaitForCameraMotionEnd();
				bool bWalking;
				@IsWalking(bWalking);
				if (!bWalking)
					break;
			}
			TRestoreState{};
		}
	}

	void OnPlayerStopWalking(void) {
		@StopCameraMotion();
	}
}

task TWaitForWalkStart
{
	void init(void) {
		bool bWalking;
		@IsWalking(bWalking);
		if (!bWalking)
			@Hold();
	}

	void OnPlayerStartWalking(void) {
		@StopGroup0();
	}
}

task TRestoreState
{
	void init(void) {
		@InterpolateCameraMotion(c_fRotSpeed, c_fTransSpeed);
		@WaitForCameraMotionEnd();
	}
}
