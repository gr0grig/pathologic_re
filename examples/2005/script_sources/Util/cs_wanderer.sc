include std.sci

object FindPath(Vector vPos) {
	@Trace("2");
	object path;
	@FindPathTo(path, vPos);
	@Trace(path);
	return path;
}

maintask TWanderer
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnConsole(string cmd, string params) {
		if (cmd == "play") {
			TWander{};
		}
	}
}


task TWander
{
	void init(void) {
		@sync();
		@sync();
		@sync();
		float r;
		@rand(r, 1);
		@Sleep(r);
		object scene;
		@GetScene(scene);
		Vector vPos;
		bool bFound;
		scene->GetLocator("pf", bFound, vPos);
		@Trace("Moving to " + vPos);
		object path = FindPath(vPos);
		bool bSuccess;
		@Trace("1");
		@FollowPath(path, true, bSuccess);
	}

}
