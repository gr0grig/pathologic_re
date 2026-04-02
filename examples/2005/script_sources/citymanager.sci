include region1.sci
include region2.sci
include region3.sci
include region4.sci
include region5.sci
include region6.sci
include region7.sci
include region8.sci
include region9.sci
include region10.sci
include region11.sci
include region12.sci
include region13.sci
include region14.sci
include region15.sci
include region16.sci
include citymanager_base.sci


const int c_iDiseaseTimer = 16384;
const int c_iCityUpdateTimer = 32768;

bool HandleCityTimer(int iID, float fTime)
{
	if (iID > c_iDiseaseTimer && iID < c_iDiseaseTimer + c_iGameDays) {
		int iDay = iID - c_iDiseaseTimer;
		PerformDiseaseUpdate(iDay);
		return true;
	}
	
	if (iID > c_iCityUpdateTimer && iID < c_iCityUpdateTimer + c_iGameDays * 24) {
		int iDay = (iID - c_iCityUpdateTimer) / 24;
		int iPart = (iID - c_iCityUpdateTimer) % 24;
		
		float fGameTime;
		@GetGameTime(fGameTime);
		
		int iRealDay = fGameTime / 24;
		int iRealPart = fGameTime; 
		iRealPart = iRealPart % 24;
		PerformCityUpdate(iDay, iPart, iRealDay, iRealPart);
		return true;
	}
	
	return false;
}

//////////////////////////////////////////////////////////////
// main func
//////////////////////////////////////////////////////////////
void PerformCityInit()
{
	float fCurTime;
	@GetGameTime(fCurTime);
	
	// setting disease timers
	for (int i = 1; i < c_iGameDays; ++i) {
		@SetTimeEvent(c_iDiseaseTimer + i, 24 * i);
	}
	
	// setting city update timers
	for (int i = 0; i < c_iGameDays * 24; ++i) {
		float fTime = i;
		if (fTime < fCurTime)
			continue;
		@SetTimeEvent(c_iCityUpdateTimer + i, fTime); 
	}
	
	for (int iRegion = 0; iRegion < c_iRegionCount; ++iRegion) {
		@SetVariable(GetRegionStateName(iRegion), 0);
		EnableMarks(iRegion, false);
	}

	PerformCityUpdate(0, fCurTime % 24, 0, fCurTime % 24);
	
	object house;
	@FindActor(house, "dt_house_1_07");
	house->EnableSubset(c_iMarksSubsetID, false);

	object scene;
	@GetMainOutdoorScene(scene);
	scene->SwitchLights(0, (fCurTime < c_iDayBegin || fCurTime >= c_iDayEnd));
}

void PerformCityUpdate(int iDay, int iPart, int iRealDay, int iRealPart) 
{
	@Trace("City update");
	
	if (iDay == iRealDay && iPart == iRealPart)
		@PlaySound("kolokol");
	
	for (int i = 0; i < c_iRegionCount; ++i) {
		RemoveRegionActors(i);
		if (IsRegionNormal(i))
			UpdateRegionNormal(i, iDay, iPart);
		else if (IsRegionDiseased(i))
			UpdateRegionDiseased(i, iDay, iPart);
		else
			UpdateRegionClosed(i, iDay, iPart);
	}
	if (iPart == 0) {
		ReplaceSpecialScenes(iDay);
		
		// burah father home
		if (iDay == 1 || IsRegionDiseased(c_iRegion6)) { // day 2
			object house;
			@FindActor(house, "dt_house_1_07");
			house->EnableSubset(c_iMarksSubsetID, true);
		}
		else {
			object house;
			@FindActor(house, "dt_house_1_07");
			house->EnableSubset(c_iMarksSubsetID, false);
		}
	}
	
	if (iPart == c_iDayBegin) {
		@Trace("day time");
		object scene;
		@GetMainOutdoorScene(scene);
		scene->SwitchLights(0, false);
	}
	else if (iPart == c_iDayEnd) {
		@Trace("night time");
		object scene;
		@GetMainOutdoorScene(scene);
		scene->SwitchLights(0, true);
	}
}

void UpdateRegionNormal(int iRegion, int iDay, int iDayPart) 
{
	object block1, block2, block3;
	g_RegionBlocks1->get(block1, iRegion);
	g_RegionBlocks2->get(block2, iRegion);
	g_RegionBlocks3->get(block3, iRegion);
	object indoor_scenes;
	g_RegionScenes->get(indoor_scenes, iRegion);

	if (iRegion == 0)
		UpdateRegion1Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 1)
		UpdateRegion2Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 2)
		UpdateRegion3Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 3)
		UpdateRegion4Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 4)
		UpdateRegion5Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 5)
		UpdateRegion6Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 6)
		UpdateRegion7Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 7)
		UpdateRegion8Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 8)
		UpdateRegion9Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 9)
		UpdateRegion10Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 10)
		UpdateRegion11Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 11)
		UpdateRegion12Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 12)
		UpdateRegion13Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 13)
		UpdateRegion14Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 14)
		UpdateRegion15Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 15)
		UpdateRegion16Normal(iDay, iDayPart, block1, block2, block3, indoor_scenes);
}

void UpdateRegionDiseased(int iRegion, int iDay, int iDayPart) 
{
	object block1, block2, block3;
	g_RegionBlocks1->get(block1, iRegion);
	g_RegionBlocks2->get(block2, iRegion);
	g_RegionBlocks3->get(block3, iRegion);
	object indoor_scenes;
	g_RegionScenes->get(indoor_scenes, iRegion);

	if (iRegion == 0)
		UpdateRegion1Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 1)
		UpdateRegion2Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 2)
		UpdateRegion3Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 3)
		UpdateRegion4Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 4)
		UpdateRegion5Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 5)
		UpdateRegion6Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 6)
		UpdateRegion7Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 7)
		UpdateRegion8Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 8)
		UpdateRegion9Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 9)
		UpdateRegion10Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 10)
		UpdateRegion11Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 11)
		UpdateRegion12Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 12)
		UpdateRegion13Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 13)
		UpdateRegion14Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 14)
		UpdateRegion15Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
	else if (iRegion == 15)
		UpdateRegion16Diseased(iDay, iDayPart, block1, block2, block3, indoor_scenes);
}

void UpdateRegionClosed(int iRegion, int iDay, int iDayPart) 
{
	object block1, block2, block3;
	g_RegionBlocks1->get(block1, iRegion);
	g_RegionBlocks2->get(block2, iRegion);
	g_RegionBlocks3->get(block3, iRegion);
	object indoor_scenes;
	g_RegionScenes->get(indoor_scenes, iRegion);

	if (iRegion == 0)
		UpdateRegion1Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 1)
		UpdateRegion2Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 2)
		UpdateRegion3Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 3)
		UpdateRegion4Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 4)
		UpdateRegion5Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 5)
		UpdateRegion6Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 6)
		UpdateRegion7Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 7)
		UpdateRegion8Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 8)
		UpdateRegion9Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 9)
		UpdateRegion10Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 10)
		UpdateRegion11Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 11)
		UpdateRegion12Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 12)
		UpdateRegion13Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 13)
		UpdateRegion14Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 14)
		UpdateRegion15Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
	else if (iRegion == 15)
		UpdateRegion16Closed(iDay, iDayPart, block1, block2,  block3, indoor_scenes);
}
