include door_base.sci
include world_wnd_messages.sci

const int c_iUnlocked = 0;
const int c_iDiseaseLock = 1;
const int c_iDeadLock = 2;					

int GetDLockType(void) {
	int iLocked;
	@GetProperty("dlocked", iLocked);
	return iLocked;
}

task TDoorBaseNPC
{
	void init(void) {
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {

		int iType = GetDLockType();
		if (iType == c_iUnlocked) {
			if (IsLocked()) {
				@PlaySound("door_closed");
				SendHelpWndMessage(c_iTID_Door_NPC_Locked);
				@Trace("Door is locked");
				return;
			}
		}
		else {
			@PlaySound("door_closed");
			if (iType == c_iDiseaseLock) {
				@Trace("Door is disease locked");
				SendHelpWndMessage(c_iTID_Door_NPC_Diseased);
			}
			else {
				@Trace("Door is dead locked");
				SendHelpWndMessage(c_iTID_Door_NPC_Dead);
			}
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
			@PlaySharedSound("door_open");
			@Teleport(actor, scene, vPos, vDir);
		}
		else {
			@Trace("Locator " + strLocatorName + " not found in destination scene " + strSceneName);
		}
	}	
}

maintask TDoorNPC : TDoorBaseNPC
{
	void init(void) {
		@DisableUpdate();
		super.init();
	}
}