include ../game_ext.sci

string GetItemName(object item) {
	int iID = GetItemID(item);
	string strName;
	@GetInvItemName(strName, iID);
	return strName;
}

int GetItemCategory(object item) {
	int iCategory;
	@GetInvItemProperty(iCategory, GetItemID(item), "Category");
	return iCategory;
}

int GetItemMaxStackSize(object item) {
	int iMaxStackSize;
	@GetItemMaxStackSize(GetItemID(item), iMaxStackSize);
	return iMaxStackSize;
}

// null items are treated as different
bool CheckSameItems(object item1, object item2) {
	if (!item1 || !item2)
		return false;
		
	bool bSame;
	item1->Compare(bSame, item2);
	return bSame;
}
