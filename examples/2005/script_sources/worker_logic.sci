include repair_logic.sci

bool FilterRepairItem(object item)
{
	int id;
	item->GetItemID(id);
	bool bWeapon;
	@HasInvItemProperty(bWeapon, id, "Weapon");
	return bWeapon;
}

void ProcessWorkerUse(object actor)
{
	if (TDlg_Ct_Worker{actor} == 100) {
		ProcessRepair(actor);
	}
}