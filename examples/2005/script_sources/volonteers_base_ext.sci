include NPCs.sci

const int c_iVolonteerUsed = 1;
const int c_iVolonteerLocked = 2;		
const int c_iVolonteerDiseased = 4;
const int c_iVolonteerToRescue = 8;
const int c_iVolonteerDead = 16;
const int c_iVolonteerOneDayRescue = 32;

bool IsTermitVolonteer(int iNPCID) {
	if (iNPCID == c_iNPC_Mishka)
		return true;
	if (iNPCID == c_iNPC_Spi4ka)
		return true;
	if (iNPCID == c_iNPC_Notkin)
		return true;
	if (iNPCID == c_iNPC_Laska)
		return true;
	if (iNPCID == c_iNPC_Kapella)
		return true;
	if (iNPCID == c_iNPC_Mat)
		return true;
	if (iNPCID == c_iNPC_Han)
		return true;
	return false;
}

void FillTermitsVector(object vector, bool bFilterAccessible, int iPlayer) 
{
	vector->add(c_iNPC_Mishka);
	vector->add(c_iNPC_Spi4ka);
	vector->add(c_iNPC_Notkin);
	vector->add(c_iNPC_Laska);

	if (bFilterAccessible == false) {
		vector->add(c_iNPC_Kapella);
		vector->add(c_iNPC_Mat);
		vector->add(c_iNPC_Han);
	}
	else {
		if (iPlayer != c_iBranchBurah)
			vector->add(c_iNPC_Kapella);
	}
}

bool IsUtopistVolonteer(int iNPCID) {
	if (iNPCID == c_iNPC_Georg)
		return true;
	if (iNPCID == c_iNPC_Viktor)
		return true;
	if (iNPCID == c_iNPC_Andrei)
		return true;
	if (iNPCID == c_iNPC_Petr)
		return true;
	if (iNPCID == c_iNPC_Maria)
		return true;
	if (iNPCID == c_iNPC_Eva)
		return true;
	if (iNPCID == c_iNPC_Mark)
		return true;
	if (iNPCID == c_iNPC_MladVlad)
		return true;
	return false;
}

void FillUtopistsVector(object vector, bool bFilterAccessible, int iPlayer) 
{
	vector->add(c_iNPC_Georg);
	vector->add(c_iNPC_Viktor);
	vector->add(c_iNPC_Andrei);
	vector->add(c_iNPC_Petr);
	
	if (bFilterAccessible == false) {
		vector->add(c_iNPC_Maria);
		vector->add(c_iNPC_Eva);
		vector->add(c_iNPC_Mark);
		vector->add(c_iNPC_MladVlad);
	}
	else {
		if (iPlayer != c_iBranchDanko)
			vector->add(c_iNPC_Maria);
	}
}

bool IsSmirennikVolonteer(int iNPCID) {
	if (iNPCID == c_iNPC_Grif)
		return true;
	if (iNPCID == c_iNPC_Rubin)
		return true;
	if (iNPCID == c_iNPC_Ospina)
		return true;
	if (iNPCID == c_iNPC_Julia)
		return true;
	if (iNPCID == c_iNPC_Anna)
		return true;
	if (iNPCID == c_iNPC_Alexandr)
		return true;
	if (iNPCID == c_iNPC_Katerina)
		return true;
	if (iNPCID == c_iNPC_Lara)
		return true;
	if (iNPCID == c_iNPC_Starshina)
		return true;
	return false;
}

void FillSmirenniksVector(object vector, bool bFilterAccessible, int iPlayer) 
{
	vector->add(c_iNPC_Grif);
	vector->add(c_iNPC_Rubin);
	vector->add(c_iNPC_Ospina);
	vector->add(c_iNPC_Julia);
	vector->add(c_iNPC_Anna);
	vector->add(c_iNPC_Alexandr);
	vector->add(c_iNPC_Katerina);
	vector->add(c_iNPC_Lara);
	
	if (bFilterAccessible == false) {
		vector->add(c_iNPC_Starshina);
	}
}

void PerformVolonteerListInit(object list, object doors, object scenes) // same for all days
{
	object d;
	list->add(c_iNPC_Alexandr);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_alexandr@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	
	list->add(c_iNPC_Andrei);
	if (doors) {
		@CreateStringVector(d);
		d->add("shouse1_kabak@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Anna);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_anna@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_BigVlad);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_bigvlad@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Georg);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_georg@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
		
	list->add(c_iNPC_Maria);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_maria@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");		
	
	list->add(c_iNPC_Julia);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_julia@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Kapella);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_kapella@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Katerina);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_katerina@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Lara);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_lara@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Mishka);
	if (doors) {
		@CreateStringVector(d);
		d->add("vagon_mishka@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_MladVlad);
	if (doors) {
		@CreateStringVector(d);
		d->add("house_vlad@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Notkin);
	if (doors) {
		@CreateStringVector(d);
		d->add("warehouse_notkin@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Ospina);
	if (doors) {
		@CreateStringVector(d);
		d->add("dt_house_1_04@door1");
		doors->add(d);
	}	
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Petr);
	if (doors) {
		@CreateStringVector(d);
		d->add("house_petr@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Spi4ka);
	if (doors) {
		@CreateStringVector(d);
		d->add("house_spi4ka@door1");
		d->add("house_spi4ka@door2");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Viktor);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_viktor@door1");
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Han);
	if (doors) {
		@CreateStringVector(d);
		// FIXME no birdmask point
		doors->add(d);
	}
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Laska);
	if (doors) {
		@CreateStringVector(d);
		d->add("storojka@door1");
		doors->add(d);
	}		
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Mat);
	if (doors) {
		@CreateStringVector(d);
		d->add("termitnik_mat@door1");
		// FIXME no birdmask point
		doors->add(d);
	}		
	if (scenes)
		scenes->add("termitnik");
	
	list->add(c_iNPC_Mark);
	if (doors) {
		@CreateStringVector(d);
		// FIXME no birdmask point
		doors->add(d);
	}	
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Grif);
	if (doors) {
		@CreateStringVector(d);
		d->add("warehouse_grif@door1");
		doors->add(d);
	}	
	if (scenes)
		scenes->add("outdoor");
	
	list->add(c_iNPC_Rubin);
	if (doors) {
		@CreateStringVector(d);
		d->add("warehouse_rubin@door1");
		doors->add(d);
	}	
	if (scenes)
		scenes->add("outdoor");
		
	list->add(c_iNPC_Eva);
	if (doors) {
		@CreateStringVector(d);
		d->add("cot_eva@door1");
		doors->add(d);
	}	
	if (scenes)
		scenes->add("outdoor");		
		
	list->add(c_iNPC_Starshina);
	if (doors) {
		@CreateStringVector(d);
		// FIXME
		doors->add(d);
	}	
	if (scenes)
		scenes->add("outdoor");		
}

bool IsOneDayRescueVolonteer(int iNPCID) {
	int iVal;
	@GetVariable("vol_" + iNPCID, iVal);
	return ((iVal & c_iVolonteerOneDayRescue) != 0);
}

bool IsDiseasedVolonteer(int iNPCID)
{
	int iVal;
	@GetVariable("vol_" + iNPCID, iVal);
	return ((iVal & c_iVolonteerDiseased) != 0);
}

bool IsDeadVolonteer(int iNPCID)
{
	int iVal;
	@GetVariable("vol_" + iNPCID, iVal);
	return ((iVal & c_iVolonteerDead) != 0);
}

bool IsLockedVolonteer(int iNPCID)
{
	int iVal;
	@GetVariable("vol_" + iNPCID, iVal);
	return ((iVal & c_iVolonteerLocked) != 0);
}

bool IsRescueVolonteer(int iNPCID)
{
	int iVal;
	@GetVariable("vol_" + iNPCID, iVal);
	return ((iVal & c_iVolonteerToRescue) != 0);
}

void SetRescueVolonteer(int iNPCID)
{
	int iVal;
	@GetVariable("vol_" + iNPCID, iVal);
	@SetVariable("vol_" + iNPCID, iVal | c_iVolonteerToRescue);
}