include patrol_enemy_base.sci

string GetPatrolPathPrefix(void) {
	return  "pt_k5q03_patrol";
}

string GetHelpMessage(void) { 
	return "k5q03_helpme";
}

string GetCorpseMessage(void) { 
	return "k5q03_corpse";
}

string GetPatrolCenter(void) { 
	return "pt_k5q03_center";
}

int GetSimultaneousPatrolCount(void) {
	 return 3;
}

void OnPatrolDeath(void) {
	GenerateRandomItem("gold_ring", 1, 2, 2);
	GenerateRandomItem("silver_ring", 1, 2, 3);
	GenerateRandomItem("beads", 1, 2, 3);
	GenerateRandomItem("bracelet", 1, 2, 2);
}