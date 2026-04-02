include game.sci
include messages.sci
include dialogs.sci
include diary.sci
include Timeline_Burah.sci
include volonteers_Burah_base.sci

////////////////////////////////////////////////////////
// danko game
////////////////////////////////////////////////////////

// CONSTANTS
const int c_iVolonteerCount = 16;
const string c_strVolonterPrefix = "volonteer";
// CONSTANTS

void PerformGamePostInit() 
{
	EnableBonfire(8 - 1);
}

bool cmngRegionCanBeDiseased(int iRegion)
{
	if (iRegion == c_iRegion7)
		return false; // this region is too small now
		
	if (IsDay(4)) {
		if (iRegion == c_iRegion16) // sobor
			return false;
		if (iRegion == c_iRegion10) // theater
			return false;
	}
	else
	if (IsDay(5)) {
		if (iRegion == c_iRegion16) // sobor
			return false;
	}
	else
	if (IsDay(6)) {
		if (iRegion == c_iRegion16) // sobor
			return false;
	}	
	
	return true;
}

////////////////////////////////////////////////////////
// GameUpdate
////////////////////////////////////////////////////////
void PerformGameUpdate(int iDay, int iHour) // day (1..12)
{
	@Trace("Updating game " + iDay + " " + iHour);
	if (iDay == 8 && iHour == 0) { // 8 is correct as during day 7 aglaja is quest handled
		object scene;
		@GetSceneByName(scene, "sobor");
		@Trigger(scene, "aglaja");
	}
	
	if (iDay == 9 && iHour == 0) {	// b9q03
		DisableBonfire(0);
		DisableBonfire(1);
		DisableBonfire(2);
		DisableBonfire(3);
	}
}

////////////////////////////////////////////////////////
// DiseaseUpdate
////////////////////////////////////////////////////////
void PerformDiseaseUpdate(int iDay) {
	@Trace("Disease update");	
	
	int iDiseaseRegions = 0;
	if (iDay == 0)
		iDiseaseRegions = 0;
	else if (iDay == 1)
		iDiseaseRegions = 0;
	else if (iDay == 2)
		iDiseaseRegions = 1;
	else if (iDay == 3)
		iDiseaseRegions = 2;
	else if (iDay == 4)
		iDiseaseRegions = 3;
	else if (iDay == 5)
		iDiseaseRegions = 4;
	else if (iDay == 6)
		iDiseaseRegions = 5;
	else if (iDay == 7)
		iDiseaseRegions = 5;
	else if (iDay == 8)
		iDiseaseRegions = 6;
	else if (iDay == 9)
		iDiseaseRegions = 6;
	else if (iDay == 10)
		iDiseaseRegions = 7;
	else if (iDay == 11)
		iDiseaseRegions = 8;

	if ((iDay + 1) != 12) {
		@Trace("Diseased regions : " + iDiseaseRegions);
		
		// updating regions	
		for (int i = 0; i < c_iRegionCount; ++i) {
			if (IsRegionDiseased(i)) {
				CloseRegion(i);
			} else if (IsRegionClosed(i)) {
				NormalizeRegion(i);
			}
		}
		
		if (iDay == 2) {
			@Trace("Special diseased region: 1");
			DiseaseRegion(1);
		}
		
		int iCount = GetDiseasedRegionCount();
		if (iCount < iDiseaseRegions) {
			int iAddCount = iDiseaseRegions - iCount;
			for (int i = 0; i < iAddCount; ++i) {
				DiseaseAnyRegion();
			}
		}
	}
	else {
		for (int i = 0; i < c_iRegionCount; ++i) {
			if (IsRegionDiseased(i) || IsRegionClosed(i))
				NormalizeRegion(i);
		}
	}
}

void ReplaceSpecialScenes(int iDay)
{
	if (iDay == 3) {
		@Trace("Special diseased house: house5_unoin03l");
		@Trace("Special diseased house: house5_unoin03r");

		object scene;
		@GetSceneByName(scene, "house5_unoin03l");
		@ReplaceScene(scene, "s_house5_unoin03l.isc");
		@GetSceneByName(scene, "house5_unoin03r");
		@ReplaceScene(scene, "s_house5_unoin03r.isc");
	}
	else if (iDay == 4) {
		object scene;
		@GetSceneByName(scene, "theater");
		@ReplaceScene(scene, "dtheater_burah.isc");
	}
	else if (iDay == 8) {
		@Trace("Special replaced house: uprava_admin");

		object scene;
		@GetSceneByName(scene, "uprava_admin");
		@ReplaceScene(scene, "uprava_admin_army_burah.isc");
	}
	else if (iDay == 11) {
		object scene;
		@GetSceneByName(scene, "theater");
		@ReplaceScene(scene, "theater_burah.isc");
	}
}

object CreateArenaManager(object scene, Vector vPosition, Vector vDirection)
{
	object actor;
	scene->AddStationaryActor(actor, vPosition, vDirection, "pers_morlok", "Burah_arena_manager.xml");
	return actor;
}
