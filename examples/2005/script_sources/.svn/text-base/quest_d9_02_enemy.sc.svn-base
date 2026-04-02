include patrol_enemy_base.sci

string GetPatrolPathPrefix(void) {
	return  "pt_d9q02_patrol";
}

string GetHelpMessage(void) { 
	return "d9q02_helpme";
}

string GetCorpseMessage(void) { 
	return "d9q02_corpse";
}

string GetPatrolCenter(void) { 
	return "pt_d9q02_center";
}

int GetSimultaneousPatrolCount(void) {
	 return 2;
}

void OnPatrolDeath(void) {
	bool bSuccess;
	int n;
	@irand(n, 6);
	@AddItem(bSuccess, "rusk", 0, n + 1);
	PlayerModReputation(GetPlayerActor(), -0.03);
}