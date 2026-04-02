include std.sci

bool HasSceneKey(object actor, string scene, bool bRemove)
{
	int iKeyID;
	@GetInvItemByName(iKeyID, "uni_key");

	int iContainerCount;
	actor->GetSubContainerCount(iContainerCount);
	for (int i = 0; i < iContainerCount; ++i) {
		int iItemCount;
		actor->GetItemCount(iItemCount, i);
		for (int i1 = 0; i1 < iItemCount; ++i1) {
			object item;
			actor->GetItem(item, i1, i);
			int iItemID;
			item->GetItemID(iItemID);
			if (iItemID == iKeyID) {
				bool bHas;
				item->HasProperty(bHas, "key_scene_name");
				if (bHas) {
					string name;
					item->GetProperty(name, "key_scene_name");
					@Trace(scene + " " + name);
					if (name == scene) {
						actor->RemoveItem(i1, 1, i);
						return true;
					}
				}
			}
		}
	}

	return false;
}

bool HasDoorKey(object actor, string key, bool bRemove)
{
	int iKeyID;
	@GetInvItemByName(iKeyID, key);

	int iContainerCount;
	actor->GetSubContainerCount(iContainerCount);
	for (int i = 0; i < iContainerCount; ++i) {
		int iItemCount;
		actor->GetItemCount(iItemCount, i);
		for (int i1 = 0; i1 < iItemCount; ++i1) {
			object item;
			actor->GetItem(item, i1, i);
			int iItemID;
			item->GetItemID(iItemID);
			if (iItemID == iKeyID) {
				if (bRemove)
					actor->RemoveItem(i1, 1, i);
				return true;
			}
		}
	}

	return false;
}
