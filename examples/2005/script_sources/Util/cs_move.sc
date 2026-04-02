include std.sci
include actor_std.sci

property string Dest;

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
		@sync();
		@sync();
		object scene;
		@GetScene(scene);
		bool bFound;
		Vector vPos;
		Dest = "b2to";
		scene->GetLocator("b2to", bFound, vPos);
		if (bFound) {
			@Trace("Moving to " + vPos);
			@MovePoint(vPos, 0);
			@Trace("Done");
		}
		else {
			@Trace("Locator " + Dest + " not found");
		}
	}
}
