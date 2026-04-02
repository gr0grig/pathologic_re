include std.sci
include sdoor_base.sci

maintask TSDoor : TSDoorBase
{
	void OnUse(object actor) {
		if (IsLocked()) {
			string key;
			@GetProperty("key", key);
			int iCount;
			actor->GetItemCountOfType(iCount, key);
			if (iCount) {
				Lock(false);
			}
		}

		super.OnUse(actor);
	}
}
