include std.sci

bool IsLocked() {
	int iLocked;
	@GetProperty("locked", iLocked);
	return (iLocked != 0);
}

void Lock(bool bLock) {
	@SetProperty("locked", bLock);
}

string GetDoorTargetScene(void)
{
	string strActorName;
	@GetActorName(strActorName);
	int iIndex = strchr(strActorName, "@");
	if (iIndex == -1) {
		@Trace("Wrong door name");
		return "";
	}
	return strsub(strActorName, 0, iIndex);
}
