include cutscene.sci

task TCutSceneStoppable : TCutScene
{
	void init(string strMotFile) {
		@RegisterKeyCallback("space");
		@RegisterKeyCallback("escape");

		super.init(strMotFile);

		@UnregisterKeyCallback("escape");
		@UnregisterKeyCallback("space");
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
