include repair_logic.sci

bool FilterRepairItem(object item)
{
	int id;
	item->GetItemID(id);
	bool bHasCategory;
	@HasInvItemProperty(bHasCategory, id, "Category");
	if (!bHasCategory)
		return false;
	int iCategory;
	@GetInvItemProperty(iCategory, id, "Category");
	return iCategory == 1;
}

void ProcessWomanUse(object actor)
{
	if (TDlg_Ct_Woman{actor} == 100) {
		ProcessRepair(actor);
	}
}