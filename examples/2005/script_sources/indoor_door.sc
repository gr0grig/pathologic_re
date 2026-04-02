include std.sci
include door_base.sci

maintask TDoor
{
	void init(void) {
		@DisableUpdate();
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		if (IsLocked()) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
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

		string strPostfix = strsub(strActorName, iIndex + 1);
		string strLocatorName = "pt_" + strCurSceneName + "@" + strPostfix;
		@Trace(strLocatorName);
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator(strLocatorName, bFound, vPos, vDir);
		if (bFound) {
			object outdoor_door;
			@FindActor(outdoor_door, strCurSceneName + "@" + strPostfix);
			if (outdoor_door) {
				if (HasProperty(outdoor_door, "lp")) {
					bool bUnlockable;
					outdoor_door->GetProperty("lp", bUnlockable);
					if (bUnlockable) {
						@Trace("Outdoor door was unlocked");
						outdoor_door->SetProperty("locked", false);
					}
				}
			}

			@PlaySharedSound("door_open");
			@Teleport(actor, scene, vPos, vDir);
		}
	}	
	
}
