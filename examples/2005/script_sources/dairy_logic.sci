include std.sci
include world_wnd_messages.sci

object GetDiaryRoot() { 
	object root;
	@GetDiaryRoot(root);
	if (!root) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return root;
}

bool AddDiaryEntry(object entry, int iParentID) { 
	object root = GetDiaryRoot();
	object parent;
	root->Find(iParentID, parent);
	if (!parent) {
		@Trace("Can't find diary parent with id: " + iParentID);
		return false;
	}
	parent->AddChild(entry);
	@SendWorldWndMessage(c_iWM_PlayerDiary);
	int iCategory;
	entry->GetCategory(iCategory);
	@SetDiarySection(iCategory);
	return false;
}

bool RemoveDiaryEntry(int iEntryID) {
	object root = GetDiaryRoot();
	object entry;
	root->Find(iEntryID, entry);
	if (!entry)
		return false;
	entry->Remove();
	return true;
}
