include std.sci
include actor_std.sci

maintask TMove
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnConsole(string cmd, string params) {
		if (cmd == "play") {
			TRun{};
		}
	}
}

task TRun
{
	void init(void) {
		@PlayAnimation();
		@Sleep(218.0 / 30.0);
		object scene;
		@GetSceneByName(scene, "e3_house3");
		Vector vPos, vDir;
		bool bFound;
		scene->GetLocator("bomb_fire", bFound, vPos, vDir);
		object actor;
		@AddActorByType(actor, "scripted", scene, vPos, vDir, "fire.xml");
	}
}
