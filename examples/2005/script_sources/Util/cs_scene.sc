include std.sci

maintask TScene
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnConsole(string strCmd, string strParms) {
		if (strCmd == "play") {
			TCutScene{strParms};
		}
	}
}

task TCutScene
{
	void init(string strMotFile) {
		@Trace("playing: " + strMotFile);
		@RegisterKeyCallback("space");
		@RegisterKeyCallback("escape");
	
		@CameraPlay(strMotFile);
		@CameraWaitForPlayFinish();

		@UnregisterKeyCallback("escape");
		@UnregisterKeyCallback("space");

		@CameraSwitchToNormal();
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}