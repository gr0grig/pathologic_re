include std.sci

maintask TDeath
{
	void init(void) {
		@RemoveOverride();
		@ModBlurLevel(0.15);
		@CameraSwitchToNormal();
		@RemoveActor(GetPlayerActor());
		@CameraPlayRel(c_strMotion, true);
		@Sleep(c_fFadeDelay);
		Darken(0, 1, c_fDarkenTime);
		@CameraWaitForPlayFinish();
		@GameOver("gameover.xml");
		@Hold();
	}
}
