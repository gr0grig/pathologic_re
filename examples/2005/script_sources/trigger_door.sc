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
			@Trace("Trigger is locked");
			return;
		}

		string strActorName;
		@GetActorName(strActorName);
		int iIndex = strchr(strActorName, "@");
		if (iIndex == -1) {
			@Trace("Wrong door name");
			return;
		}
		string strSceneName = strsub(strActorName, 0, iIndex);
		string strLocatorName = "pt_" + strsub(strActorName, iIndex + 1);
		object scene;
		@GetSceneByName(scene, strSceneName);
		if (scene == null) {
			@Trace("Destination scene '" + strSceneName + "' not found");
			return;
		}

		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator(strLocatorName, bFound, vPos, vDir);
		if (bFound) {
			@Teleport(actor, scene, vPos, vDir);
		}
		else {
			@Trace("Locator " + strLocatorName + " not found in destination scene " + strSceneName);
		}
	}	

}
