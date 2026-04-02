include patrol_enemy_base.sci

string GetPatrolPathPrefix(void) {
	return  "pt_d7q04_patrol";
}

string GetHelpMessage(void) { 
	return "d7q04_helpme";
}

string GetCorpseMessage(void) { 
	return "d7q04_corpse";
}

string GetPatrolCenter(void) { 
	return "pt_d7q04_bonfire";
}

int GetSimultaneousPatrolCount(void) {
	 return 3;
}

void OnPatrolDeath(void) {
	object item;
	@CreateInvItem(item);
	float fIm, fHl;
	@rand(fIm, 40, 80);
	@rand(fHl, 5, 20);
	item->SetItemName("grass_combination");
	item->SetProperty("im_inc", (fIm / 100.0));
	item->SetProperty("hl_inc", -(fHl / 100.0));
	bool bSuccess;
	@AddItem(bSuccess, item, 0, 1);
}