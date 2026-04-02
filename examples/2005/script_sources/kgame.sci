include game.sci
include messages.sci
include dialogs.sci
include diary.sci
include Timeline_Klara.sci
include volonteers_Klara_base.sci
include klara2_positioner_base.sci
include klara2_svita_positioner_base.sci
include klara2_npc_positioner_base.sci

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
	if (iDay == 7 && iHour == 0) {
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
		
		if (iDay + 1 < 6) {
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
				DiseaseRegion(c_iRegion6); // lopuh region
			}
			else
			if (iDay == 3) {
				@Trace("Special diseased region: " + c_iRegion2);
				DiseaseRegion(c_iRegion2); // k4q03
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
			int iRegion;
			
			// next day region
			iRegion = GetKlara2Region(iDay + 1);
			if (iRegion != -1)
				DiseaseRegion(iRegion);
				
			// move closed regions to normal state
			for (int i = 0; i < c_iRegionCount; ++i) {
				if (IsRegionClosed(i)) {
					NormalizeRegion(i);
				}
			}				
				
			// prev day region
			iRegion = GetKlara2Region(iDay);
			if (iRegion != -1) {
				bool bKlara = IsKlara2Variable(iDay);
				if (bKlara) { // keep diseased
					DiseaseRegion(iRegion);
				}
				else { // move to closed state
					CloseRegion(iRegion);
				}
			}
			
			iRegion = GetKlara2SvitaRegion(iDay);
			if (IsKlara2SvitaRemoved(iDay))
				NormalizeRegion(iRegion);
			else
				DiseaseRegion(iRegion);
				
			// danko, burah regions move to closed state
			iRegion = GetBurahRegion(iDay + 1);
			if (iRegion != -1)
				CloseRegion(iRegion);		
			int iRegion1 = GetDankoRegion(iDay + 1);		
			if (iRegion1 != iRegion && iRegion1 != -1) {
				CloseRegion(iRegion1);
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

void ReplaceSpecialScenes(int iDay) // [0..11]
{
	if (iDay == 1) {
		@Trace("Special diseased house: r4_house_2_02");

		object scene;
		@GetSceneByName(scene, "r4_house_2_02");
		@ReplaceScene(scene, "s_r4_house_2_02.isc");
	}
	
	if (iDay == 3) {
		/*		
		@Trace("Special diseased house: house5_unoin03l");
		@Trace("Special diseased house: house5_unoin03r");

		object scene;
		@GetSceneByName(scene, "house5_unoin03l");
		@ReplaceScene(scene, "s_house5_unoin03l.isc");
		@GetSceneByName(scene, "house5_unoin03r");
		@ReplaceScene(scene, "s_house5_unoin03r.isc");
		*/ 
	}
	else if (iDay == 4) {
		object scene;
		@GetSceneByName(scene, "theater");
		@ReplaceScene(scene, "dtheater_klara.isc");
	}
	else if (iDay == 8) {
		@Trace("Special replaced house: uprava_admin");

		object scene;
		@GetSceneByName(scene, "uprava_admin");
		@ReplaceScene(scene, "uprava_admin_army_klara.isc");
	}
	else if (iDay == 11) {
		object scene;
		@GetSceneByName(scene, "theater");
		@ReplaceScene(scene, "theater_klara.isc");
	}
	
	if ( (iDay + 1) >= 8 && (iDay + 1) <= 11) {
		object scene;
		
		string strBurahScene = GetBurahScene(iDay + 1);
		@GetSceneByName(scene, strBurahScene);
		@ReplaceScene(scene, "k2s_" + strBurahScene + ".isc");
		
		string strDankoScene = GetDankoScene(iDay + 1);
		@GetSceneByName(scene, strDankoScene);
		@ReplaceScene(scene, "k2s_" + strDankoScene + ".isc");
	}
}

object CreateArenaManager(object scene, Vector vPosition, Vector vDirection)
{
	object actor;
	scene->AddStationaryActor(actor, vPosition, vDirection, "pers_morlok", "Burah_arena_manager.xml");
	return actor;
}
