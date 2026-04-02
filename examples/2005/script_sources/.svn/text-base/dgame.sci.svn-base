include game.sci
include messages.sci
include dialogs.sci
include d1.sci
include d2.sci
include d3.sci
include d4.sci
include d5.sci
include d6.sci
include diary.sci
include Timeline_Danko.sci
include volonteers_danko_base.sci

////////////////////////////////////////////////////////
// danko game
////////////////////////////////////////////////////////

// CONSTANTS
const int c_iVolonteerCount = 16;
const string c_strVolonterPrefix = "volonteer";
// CONSTANTS

void PerformGamePostInit() 
{
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
	if (iDay == 5 && iHour == 0) {
		// make doors used in d4q02 unlockable again
		object actor;
		@FindActor(actor, "house7_03@door1");
		actor->SetProperty("lp", true);
		@FindActor(actor, "house7_03@door2");
		actor->SetProperty("lp", true);
	}
	else if (iDay == 7 && iHour == 0) {
		object scene;
		@GetSceneByName(scene, "sobor");
		@Trigger(scene, "aglaja");
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
			@Trace("Special diseased region: " + c_iRegion6);
			DiseaseRegion(c_iRegion6); // lopuh region, burah father region
		}
		else
		if (iDay == 3) {
			@Trace("Special diseased region: " + c_iRegion4);
			DiseaseRegion(c_iRegion4); // wasted male region
			@Trace("Special diseased region: " + c_iRegion14);
			DiseaseRegion(c_iRegion14); // white mask region
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
	if (iDay == 1) {
		@Trace("Special diseased house: r4_house_2_02");

		object scene;
		@GetSceneByName(scene, "r4_house_2_02");
		@ReplaceScene(scene, "s_r4_house_2_02.isc");
	}
	else if (iDay == 2) { 
		@Trace("Special house: r7_house2_01"); // d3q02
		
		object scene;
		@GetSceneByName(scene, "r7_house2_01");
		@ReplaceScene(scene, "r7_house2_01_d3q02.isc");
	}
	else if (iDay == 3) {
		@Trace("Special diseased house: house7_03"); // for quest d4q02

		object scene;
		@GetSceneByName(scene, "house7_03");
		@ReplaceScene(scene, "s_house7_03.isc");
	}
	else if (iDay == 4) {
		object scene;
		@GetSceneByName(scene, "theater");
		@ReplaceScene(scene, "dtheater_danko.isc");
	}
	else if (iDay == 5) {
		@Trace("Special house: sobor (with corpses)");

		object scene;
		@GetSceneByName(scene, "sobor");
		@ReplaceScene(scene, "sobor_trup.isc");
	}
	else if (iDay == 6) {
		@Trace("Special house: sobor (normal)");

		object scene;
		@GetSceneByName(scene, "sobor");
		@ReplaceScene(scene, "sobor_danko.isc");
	}
	else if (iDay == 7) {
		@Trace("Special diseased house: r4_house_2_02");

		object scene;
		@GetSceneByName(scene, "r4_house_2_02");
		@ReplaceScene(scene, "s_r4_house_2_02.isc");
	}
	else if (iDay == 8) {
		@Trace("Special replaced house: uprava_admin");

		object scene;
		@GetSceneByName(scene, "uprava_admin");
		@ReplaceScene(scene, "uprava_admin_army_danko.isc");
	}
	else if (iDay == 11) {
		object scene;
		@GetSceneByName(scene, "theater");
		@ReplaceScene(scene, "theater_danko.isc");
	}
}

object CreateArenaManager(object scene, Vector vPosition, Vector vDirection)
{
	object actor;
	scene->AddStationaryActor(actor, vPosition, vDirection, "pers_morlok", "Danko_arena_manager.xml");
	return actor;
}
