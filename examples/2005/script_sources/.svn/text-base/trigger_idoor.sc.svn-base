include std.sci
include door_base.sci

maintask TDoor
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnIntersection(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (!bPlayer)
			return;

		if (IsLocked()) {
			return;
		}

		string strActorName;
		@GetActorName(strActorName);
		int iIndex = strchr(strActorName, "@");
		if (iIndex == -1) {
			@Trace("Wrong door name");
			return;
		}
		object scene;
		@GetMainOutdoorScene(scene);
		if (scene == null) {
			@Trace("No main outdoor scene");
			return;
		}

		object curscene;
		@GetScene(curscene);
		string strCurSceneName;
		curscene->GetName(strCurSceneName);

		string strLocatorName = "pt_" + strCurSceneName + "@" + strsub(strActorName, iIndex + 1);
		@Trace(strLocatorName);
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator(strLocatorName, bFound, vPos, vDir);
		if (bFound) {
			@Teleport(actor, scene, vPos, vDir);
		}
	}	
	
}
