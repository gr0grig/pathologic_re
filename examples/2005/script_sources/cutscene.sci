include std.sci

task TCutScene
{
	void init(string strMotFile) {
		@Trace("playing: " + strMotFile);

		SetSepia();
		@CameraPlay(strMotFile);
		@CameraWaitForPlayFinish();
		DisableSepia();

		@CameraSwitchToNormal();
	}
}
