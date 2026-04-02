// CONSTANTS
const int c_iDayBegin = 7;
const int c_iDayEnd = 20;

const int c_iWindowSubsetID = 100;
const int c_iMarksSubsetID = 200;
const int c_iGameDays = 12;
const int c_iArmyCameDay = 7;
const int c_iRegionCount = 16;
const int c_iRegionNormal = 0;
const int c_iRegionDiseased = 1;
const int c_iRegionClosed = 2;

const int c_iNewFogDay = 5;

const int c_iRegion1 = 1 - 1;
const int c_iRegion2 = 2 - 1;
const int c_iRegion3 = 3 - 1;
const int c_iRegion4 = 4 - 1;
const int c_iRegion5 = 5 - 1;
const int c_iRegion6 = 6 - 1;
const int c_iRegion7 = 7 - 1;
const int c_iRegion8 = 8 - 1;
const int c_iRegion9 = 9 - 1;
const int c_iRegion10 = 10 - 1;
const int c_iRegion11 = 11 - 1;
const int c_iRegion12 = 12 - 1;
const int c_iRegion13 = 13 - 1;
const int c_iRegion14 = 14 - 1;
const int c_iRegion15 = 15 - 1;
const int c_iRegion16 = 16 - 1;
// CONSTANTS

string GetRegionStateName(int iRegion) {
	return "Region" + iRegion + "State";
}

void ReplaceRegionIndoorScenes(object scenes, int iState)
{
	int iCount;
	scenes->size(iCount);
	string prefix;
	if (iState == c_iRegionDiseased)
		prefix = "s_";
	else if (iState == c_iRegionClosed)
		prefix = "n_";
	for (int i = 0; i < iCount; ++i) {
		string strOldScene;
		scenes->get(strOldScene, i);
		string strNewScene = prefix + strOldScene + ".isc";
		object OldScene;
		@GetSceneByName(OldScene, strOldScene);
		if (!OldScene) {
			@Trace("City manager: can't replace indoor scene \"" + strOldScene + "\" because it doesn't exist");
		}
		else {
			@ReplaceScene(OldScene, strNewScene);
		}
	}
}

int GetDiseasedRegionCount() 
{
	int iCounter = 0;
	for (int i = 0; i < c_iRegionCount; ++i) {
		if (IsRegionDiseased(i))
			iCounter++;
	}
	return iCounter;
}

void DiseaseAnyRegion() 
{
	int iStart;
	@irand(iStart, c_iRegionCount);
	for (int i = 0; i < c_iRegionCount; ++i) {
		int iRegion = (i + iStart) % c_iRegionCount;
		if (IsRegionNormal(iRegion) && cmngRegionCanBeDiseased(iRegion)) {
			DiseaseRegion(iRegion);
			@Trace("Diseased Region: " + iRegion);
			return;
		}
	}
}

int GetAnyDiseasedRegion() 
{
	int iStart;
	@irand(iStart, c_iRegionCount);
	for (int i = 0; i < c_iRegionCount; ++i) {
		int iRegion = (i + iStart) % c_iRegionCount;
		if (IsRegionDiseased(iRegion)) {
			return iRegion;
		}
	}
	return -1;
}

bool IsRegionNormal(int iRegion)
{
	int iState;
	@GetVariable(GetRegionStateName(iRegion), iState);
	return (iState & 3) == c_iRegionNormal;
}

void NormalizeRegion(int iRegion) 
{
	int iState;
	@GetVariable(GetRegionStateName(iRegion), iState);
	int iNewState = (iState & (255 - 3)) | c_iRegionNormal;
	@SetVariable(GetRegionStateName(iRegion), iNewState);
}

bool IsRegionDiseased(int iRegion)
{
	int iState;
	@GetVariable(GetRegionStateName(iRegion), iState);
	return (iState & 3) == c_iRegionDiseased;
}

void DiseaseRegion(int iRegion) 
{
	int iState;
	@GetVariable(GetRegionStateName(iRegion), iState);
	int iNewState = (iState & (255 - 3)) | c_iRegionDiseased;
	@SetVariable(GetRegionStateName(iRegion), iNewState);
}

bool IsRegionClosed(int iRegion)
{
	int iState;
	@GetVariable(GetRegionStateName(iRegion), iState);
	return (iState & 3) == c_iRegionClosed;
}

void CloseRegion(int iRegion) 
{
	int iState;
	@GetVariable(GetRegionStateName(iRegion), iState);
	int iNewState = (iState & (255 - 3)) | c_iRegionClosed;
	@SetVariable(GetRegionStateName(iRegion), iNewState);
}

void RemoveRegionActors(int iRegion)
{
	object scene;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("City manager: main outdoor scene not found");
		return;
	}
	scene->RemoveAllRegionActors(iRegion);
}

void SetRegionActorCount(int iRegion, string strActor, string strXML, int iCount) 
{
	object scene;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	scene->SetRegionActorCount(iRegion, strActor, strXML, iCount);
}

void SetRegionActorCount(int iRegion, string strActor, string strXML, int iCount, int iValue, int iMask) 
{
	object scene;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	scene->SetRegionActorCount(iRegion, strActor, strXML, iCount, iValue, iMask);
}

void SetRegionActorCountByType(int iRegion, string strType, string strXML, int iCount) 
{
	object scene;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	scene->SetRegionActorCountByType(iRegion, strType, strXML, iCount);
}

void LockRegionDoors(int iRegion, bool bLock)
{
	object scene;
	@GetMainOutdoorScene(scene);

	object actors;
	scene->GetGroupActors(actors, 101 + iRegion);
	if (actors) {
		bool bMore;
		object actor;
		while(actors->Next(bMore, actor), bMore) {
			if (HasProperty(actor, "locked"))
				actor->SetProperty("locked", bLock);
			else
				@Trace("Actor \"" + actor + "\" can't be locked");
		}
	}
}

void RegionBlockGeneric(string prefix, object block, string actor_name, string xml_name)
{
	object scene;
	@GetMainOutdoorScene(scene);
	
	for (int i = 0; ; ++i) {
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator(prefix + (i + 1), bFound, vPos, vDir);
		if (!bFound)
			break;
		object actor;
		scene->AddStationaryActor(actor, vPos, vDir, actor_name, xml_name);
		block->add(actor);
	}
}

void RegionBlockFog(string prefix, object block)
{
	object scene;
	@GetMainOutdoorScene(scene);
	
	for (int i = 0; ; ++i) {
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator(prefix + (i + 1), bFound, vPos, vDir);
		if (!bFound)
			break;
		object actor;
		string xml_name = "fog_stat.xml";
		scene->AddStationaryActorByType(actor, vPos, vDir, "fog", xml_name);
		block->add(actor);
	}
}


void RegionBlockNormal(int iRegion, int iDay, object block1, object block2, object block3)
{
	LockRegionDoors(iRegion, true);
	RemoveStationaryActorsFromVector(block1);
	RemoveStationaryActorsFromVector(block2);
	RemoveStationaryActorsFromVector(block3);
}

void RegionBlockDiseased(int iRegion, int iDay, object block1, object block2, object block3)
{
	LockRegionDoors(iRegion, false);
	RemoveStationaryActorsFromVector(block1);
	RemoveStationaryActorsFromVector(block2);
	RemoveStationaryActorsFromVector(block3);

	if (iDay < 8) {
		RegionBlockGeneric("pt_blockpost" + (iRegion + 1) + "_1_", block1, "pers_patrool", "patrol_stat.xml");
		RegionBlockFog("pt_fog" + (iRegion + 1) + "_", block3);
	}
	else {
		RegionBlockGeneric("pt_blockpost" + (iRegion + 1) + "_1_", block1, "pers_soldat", "soldier.xml");
		RegionBlockGeneric("pt_blockpost" + (iRegion + 1) + "_2_", block2, "pers_sanitar", "sanitar_stat.xml");
		RegionBlockFog("pt_fog" + (iRegion + 1) + "_", block3);
	}
}

void RegionBlockClosed(int iRegion, int iDay, object block1, object block2, object block3)
{
	LockRegionDoors(iRegion, false);
	RemoveStationaryActorsFromVector(block1);
	RemoveStationaryActorsFromVector(block2);
	RemoveStationaryActorsFromVector(block3);

	if (iDay < 8) {
		RegionBlockGeneric("pt_blockpost" + (iRegion + 1) + "_1_", block1, "pers_patrool", "patrol_stat.xml");
	}
	else {
		RegionBlockGeneric("pt_blockpost" + (iRegion + 1) + "_1_", block1, "pers_soldat", "soldier.xml");
		RegionBlockGeneric("pt_blockpost" + (iRegion + 1) + "_2_", block2, "pers_sanitar", "sanitar_stat.xml");
	}
}

void EnableWindowLights(int iRegion, bool bEnable) {
	object scene;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	
	int iGroupID = iRegion + 1;
	scene->EnableSubsets(iGroupID, c_iWindowSubsetID, bEnable, true);
}

void EnableMarks(int iRegion, bool bEnable) {
	object scene;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	
	int iGroupID = iRegion + 1;
	scene->EnableSubsets(iGroupID, c_iMarksSubsetID, bEnable, false);
}

void EnableStreetRags(int iRegion, bool bEnable, int iAmount) {
	string prefix = "street_rags" + (iRegion + 1);
	if (bEnable) {
		object scene;
		@GetMainOutdoorScene(scene);
		if (scene == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return;
		}

		for (int i = 1; i <= iAmount; ++i) {
			string name = prefix + "_" + i;
			object actor;
			@FindActor(actor, name);
			if (!actor)
				@AddActor(actor, name, scene, [0, 0, 0], [0, 0, 1], "do_invis.xml");
			else
				actor->RemoveOnUnload(false);
		}
	}
	else {
		for (int i = 1; i <= iAmount; ++i) {
			object actor;
			@FindActor(actor, prefix + "_" + i);
			if (actor)
				actor->RemoveOnUnload();
		}
	}
}

void EnableDiseaseObjects(int iRegion, bool bEnable, int iAmount) {
	string prefix = "dr_mark" + (iRegion + 1);
	
	if (bEnable) {
		object scene;
		@GetMainOutdoorScene(scene);
		if (scene == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return;
		}

		for (int i = 1; i <= iAmount; ++i) {
			string name = prefix + "_" + i;
			object actor;
			@FindActor(actor, name);
			if (!actor)
				@AddActor(actor, name, scene, [0, 0, 0], [0, 0, 1], "disease_object.xml");
			else
				TriggerActor(name, "restore");
		}
	}
	else {
		for (int i = 1; i <= iAmount; ++i) {
			string name = prefix + "_" + i;
			object actor;
			@FindActor(actor, name);
			if (actor)
				TriggerActor(name, "cleanup");
		}
	}
}

void EnableBlockObjects(int iRegion, bool bEnable, int iAmount) {
	//string prefix = "br_mark" + (iRegion + 1);
	string prefix = "dr_mark" + (iRegion + 1);
	
	object actor;
	@FindActor(actor, "br_" + (iRegion + 1));
	
	if (bEnable) {
		if (!actor) {
			object scene;
			@GetMainOutdoorScene(scene);
			@AddActor(actor, "br_" + (iRegion + 1), scene, [0, 0, 0]);
		}
	}
	else {
		if (actor) {
			@RemoveActor(actor);
		}
	}
	
	
	/*if (bEnable) {
		object scene;
		@GetMainOutdoorScene(scene);
		if (scene == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return;
		}

		for (int i = 1; i <= iAmount; ++i) {
			string name = prefix + "_" + i;
			object actor;
			@FindActor(actor, name);
			if (!actor)
				@AddActor(actor, name, scene, [0, 0, 0], [0, 0, 1], "disease_object.xml");
			else
				TriggerActor(name, "restore");
		}
	}
	else {*/
		for (int i = 1; i <= iAmount; ++i) {
			string name = prefix + "_" + i;
			object actor;
			@FindActor(actor, name);
			if (actor)
				TriggerActor(name, "cleanup");
		}
	//}
}

void UpdateLightsNormal1(int iRegion, int iDayPart)
{
	if (iDayPart >= 20 || iDayPart < 2 || (iDayPart >= 6 && iDayPart < 10)) // 20 - 2, 6 - 10
		EnableWindowLights(iRegion, true);
	else
		EnableWindowLights(iRegion, false);
}

void UpdateLightsNormal2(int iRegion, int iDayPart)
{
	if (iDayPart >= 20 || (iDayPart >= 6 && iDayPart < 10)) // 20 - 0, 6 - 10
		EnableWindowLights(iRegion, true);
	else
		EnableWindowLights(iRegion, false);
}

void UpdateLightsNormal3(int iRegion, int iDayPart)
{
	if (iDayPart >= 22 || iDayPart < 4 || (iDayPart >= 6 && iDayPart < 8)) // 22 - 4, 6 - 8
		EnableWindowLights(iRegion, true);
	else
		EnableWindowLights(iRegion, false);
}

void UpdateLightsNormalAllNight(int iRegion, int iDayPart)
{
	if (iDayPart >= 22 || iDayPart < 6) // 22 - 6
		EnableWindowLights(iRegion, true);
	else
		EnableWindowLights(iRegion, false);
}

void SetDiseasedRegionActors(int iRegion, int iDay, int iDayPart, int iScale)
{
	if (iDay < c_iArmyCameDay) {
		SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 2 * iScale);
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 2 * iScale);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 3 * iScale);
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 2 * iScale);
	}
	else {
		SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 2 * iScale);
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 2 * iScale);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 3 * iScale);
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 2 * iScale);
	}
	
	if (iDay >= c_iNewFogDay) {
		SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 1 * iScale);
	}
}

float GetGrabitelNightScale(int iDay) {
	if (iDay + 1 == 7)	// the day before inquizitor arrive
		return 2;
	if (iDay + 1 == 8)
		return 0;
	if (iDay + 1 == 1) 
		return 0;		
	return 1;
}

float GetGrabitelScale(int iDay) {
	if (iDay + 1 == 1) 
		return 0;
	else
	if (iDay + 1 == 2) 
		return 0;
	else
	if (iDay + 1 == 3) 
		return 1;
	else
	if (iDay + 1 == 4) 
		return 1;
	else
	if (iDay + 1 == 5) 
		return 1;
	else
	if (iDay + 1 == 6) 
		return 2;
	else
	if (iDay + 1 == 7) 
		return 1;
	else
	if (iDay + 1 == 8) 
		return 1;
	else
	if (iDay + 1 == 9) 
		return 1;
	else
	if (iDay + 1 == 10) 
		return 1;
	else
	if (iDay + 1 == 11) 
		return 1;
	return 0;
}

float GetBomberScale(int iDay) {
	if (iDay + 1 == 1) 
		return 0;
	else
	if (iDay + 1 == 2) 
		return 0;
	else
	if (iDay + 1 == 3) 
		return 0;
	else
	if (iDay + 1 == 4) 
		return 0;
	else
	if (iDay + 1 == 5) 
		return 0;
	else
	if (iDay + 1 == 6) 
		return 2;
	else
	if (iDay + 1 == 7) 
		return 1;
	else
	if (iDay + 1 == 8) 
		return 1;
	else
	if (iDay + 1 == 9) 
		return 1;
	else
	if (iDay + 1 == 10) 
		return 1;
	else
	if (iDay + 1 == 11) 
		return 1;
	return 0;
}

bool MarauderTime(int iDay, int iHour)
{
	return (iDay >= 10) && (iHour < 6);
}

bool NudeTime(int iDay, int iHour)
{
	return (iDay >= 3 && (iHour > 22 || iHour < 5));
}

bool ArmyTime(int iDay) {
	return (iDay >= 8);
}

////////////////////////////////////////////////////////////
/// NORMAL REGIONS
////////////////////////////////////////////////////////////
void SetUpTownRegionActors(int iRegion, int iDay, int iHour)
{
	if ((iDay + 1) == 12) 
		return;
		
	if ((iHour < 7 || iHour > 21) && (iDay != 0)) {
		int iGrabitel = GetGrabitelNightScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);
	}
	
	if (iDay == 0 && iHour < 21 && GetPlayer() == c_iBranchBurah) { // burah chase
		SetRegionActorCount(iRegion, "pers_unosha", "unosha_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2_attacker.xml", 1);
		
		SetRegionActorCount(iRegion, "pers_wasted_girl", "wasted_girl.xml", 2);
		SetRegionActorCount(iRegion, "pers_wasted_male", "wasted_male.xml", 3);
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 3);
		SetRegionActorCount(iRegion, "pers_boy", "boy.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl2.xml", 1);
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	else
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_wasted_girl", "wasted_girl.xml", 2);
		SetRegionActorCount(iRegion, "pers_wasted_male", "wasted_male.xml", 3);
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 3);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha.xml", 2);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2.xml", 2);
		SetRegionActorCount(iRegion, "pers_boy", "boy.xml", 2);
		SetRegionActorCount(iRegion, "pers_girl", "girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl2.xml", 1);
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_wasted_girl", "wasted_girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_wasted_male", "wasted_male.xml", 2);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2.xml", 1);
		
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}

	if (iDay == 0 && iHour > 12 && iHour < 22) {
		SetRegionActorCount(iRegion, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
	}

	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void SetMiddleTownRegionActors(int iRegion, int iDay, int iHour)
{
	if ((iDay + 1) == 12) 
		return;

	if ((iHour < 7 || iHour > 21) && (iDay != 0)) {
		int iGrabitel = 1 * GetGrabitelNightScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);
	}

	if (iDay == 0 && iHour < 21 && GetPlayer() == c_iBranchBurah) { // burah chase
		SetRegionActorCount(iRegion, "pers_unosha", "unosha_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2_attacker.xml", 1);
		
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 1);
		SetRegionActorCount(iRegion, "pers_boy", "boy.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl2.xml", 1);
		SetRegionActorCount(iRegion, "pers_littleboy", "littleboy.xml", 1);
		SetRegionActorCount(iRegion, "pers_littlegirl", "littlegirl.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
	}
	else
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2.xml", 1);
		SetRegionActorCount(iRegion, "pers_boy", "boy.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl2.xml", 1);
		SetRegionActorCount(iRegion, "pers_littleboy", "littleboy.xml", 1);
		SetRegionActorCount(iRegion, "pers_littlegirl", "littlegirl.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		if (iDay + 1 >= 3) {
			SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);	
		}
		
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		if (iDay + 1 >= 3) {
			SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);	
		}
		
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}

	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void SetDownTownRegionActors(int iRegion, int iDay, int iHour)
{
	if ((iDay + 1) == 12) 
		return;

	if ((iHour < 7 || iHour > 21) && (iDay != 0)) {
		int iGrabitel = GetGrabitelNightScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);
	}

	if (iDay == 0 && iHour < 21 && GetPlayer() == c_iBranchBurah) { // burah chase
		SetRegionActorCount(iRegion, "pers_unosha", "unosha_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2_attacker.xml", 1);
		
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_girl", "girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl2.xml", 1);
	}
	else
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_girl", "girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl2.xml", 1);
		if (iDay + 1 >= 3) {
			SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);	
		}
		if (iDay + 1 >= 7) {
			SetRegionActorCount(iRegion, "pers_butcher", "butcher.xml", 2);	
		}
		
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	else {
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		if (iDay + 1 >= 3) {
			SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);	
		}	
		if (iDay + 1 >= 7) {
			SetRegionActorCount(iRegion, "pers_butcher", "butcher.xml", 3);	
		}
		
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	
	if (iDay == 0 && iHour > 12 && iHour < 22) {
		SetRegionActorCount(iRegion, "pers_woman", "woman_killme.xml", 1);
	}

	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
	if (NudeTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_nudegirl", "nudegirl.xml", 1);
	}
}

void SetWarehousesRegionActors(int iRegion, int iDay, int iHour)
{
	if ((iDay + 1) == 12) 
		return;

	if ((iHour < 7 || iHour > 21) && (iDay != 0)) {
		int iGrabitel = 1 * GetGrabitelNightScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);
	}
	
	if (iDay == 0 && iHour < 21 && GetPlayer() == c_iBranchBurah) { // burah chase
		SetRegionActorCount(iRegion, "pers_unosha", "unosha_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2_attacker.xml", 1);
		
		SetRegionActorCount(iRegion, "pers_boy", "boy.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_girl", "girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl2.xml", 1);
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	else
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_boy", "boy.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_girl", "girl.xml", 1);
		SetRegionActorCount(iRegion, "pers_girl", "girl2.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker.xml", 2);
		SetRegionActorCount(iRegion, "pers_worker", "worker2.xml", 2);
		
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	else {
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_worker", "worker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2.xml", 1);
		
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
}

void SetFactoryRegionActors(int iRegion, int iDay, int iHour)
{
	if ((iDay + 1) == 12) 
		return;

	if ((iHour < 7 || iHour > 21) && (iDay != 0)) {
		int iGrabitel = 1 * GetGrabitelNightScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);
	}
	
	if (iDay == 0 && iHour < 21 && GetPlayer() == c_iBranchBurah) { // burah chase
		SetRegionActorCount(iRegion, "pers_unosha", "unosha_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker_attacker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2_attacker.xml", 1);
		
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 2);
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	else
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_worker", "worker.xml", 2);
		SetRegionActorCount(iRegion, "pers_worker", "worker2.xml", 2);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_woman", "woman.xml", 2);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2.xml", 1);
		//SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	else {
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_worker", "worker.xml", 1);
		SetRegionActorCount(iRegion, "pers_worker", "worker2.xml", 1);
		SetRegionActorCount(iRegion, "pers_unosha", "unosha2.xml", 1);
		
		SetRegionActorCount(iRegion, "pers_dog", "dog.xml", 1);
	}
	
	if (iDay == 0 && iHour > 12 && iHour < 22) {
		SetRegionActorCount(iRegion, "pers_woman", "woman_killme.xml", 1);
	}
}

////////////////////////////////////////////////////////////
/// DISEASED REGIONS
////////////////////////////////////////////////////////////
void SetDiseasedUpTownRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 3);
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 8);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 3);
		}

		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 4);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 6);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 2);
		}
		
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	
	SetRegionActorCount(iRegion, "pers_worker", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_unosha", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_woman", "agony1_woman.xml", 2, 4, 4);		
	//SetRegionActorCount(iRegion, "pers_vaxxabitka", "agony1_woman.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);		

	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 2);
	}
}

void SetDiseasedMiddleTownRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 2);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 6);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 2);
		}
		
		
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 3);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 6);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 2);
		}
		
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	
	SetRegionActorCount(iRegion, "pers_worker", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_unosha", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_woman", "agony1_woman.xml", 2, 4, 4);		
	//SetRegionActorCount(iRegion, "pers_vaxxabitka", "agony1_woman.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);		

	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 1);
	}	
}

void SetDiseasedDownTownRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 2);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 6);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 2);
		}
		
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	else {
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 3);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 6);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 2);
		}
		
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	
	SetRegionActorCount(iRegion, "pers_worker", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_unosha", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_woman", "agony1_woman.xml", 2, 4, 4);		
	//SetRegionActorCount(iRegion, "pers_vaxxabitka", "agony1_woman.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);		

	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
	if (NudeTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_nudegirl", "nudegirl.xml", 1);
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 1);
	}	
}

void SetDiseasedWarehousesRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 2);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 6);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 2);
		}
		
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	else {
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 3);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 6);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 2);
		}
		
		int iBomber = 2 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 2);
	}	
	
	SetRegionActorCount(iRegion, "pers_worker", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_unosha", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_woman", "agony1_woman.xml", 2, 4, 4);		
	//SetRegionActorCount(iRegion, "pers_vaxxabitka", "agony1_woman.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);		
}

void SetDiseasedFactoryRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 3);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 7);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 3);
		}
		
		int iBomber = 2 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	else {
		SetRegionActorCount(iRegion, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		SetRegionActorCount(iRegion, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		SetRegionActorCount(iRegion, "pers_rat_big", "rat_big.xml", 4);
		
		SetRegionActorCountByType(iRegion, "fog", "fog.xml", 7);
		
		if (iDay >= c_iNewFogDay) {
			SetRegionActorCountByType(iRegion, "fog", "fog_hunter.xml", 3);
		}
		
		int iBomber = 2 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 2);
	}	
	
	SetRegionActorCount(iRegion, "pers_worker", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_unosha", "agony1_man.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_woman", "agony1_woman.xml", 2, 4, 4);		
	//SetRegionActorCount(iRegion, "pers_vaxxabitka", "agony1_woman.xml", 2, 4, 4);		
	SetRegionActorCount(iRegion, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);		
}
////////////////////////////////////////////////////////////
/// CLOSED REGIONS
////////////////////////////////////////////////////////////
void SetClosedUpTownRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 3);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 2);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 2 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 2);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 5);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
	
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 1);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 2);
		
		int iGrabitel = 3 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}

	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 1);
	}	
}

void SetClosedMiddleTownRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 1);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 2);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 2 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 1);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);		
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 3);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 3 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 1);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);			
	}

	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 1);
	}	
}

void SetClosedDownTownRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 2);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 2);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 2 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 2);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);	
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 4);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 3 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 1);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);	
	}
	if (MarauderTime(iDay, iHour)) {
		SetRegionActorCount(iRegion, "pers_soldat", "soldier_marauder.xml", 2);
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 1);
	}	
}

void SetClosedWarehousesRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 4);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 2);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 2 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 2);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);	
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 7);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 2 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 1);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);		
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 1);
	}	
}

void SetClosedFactoryRegionActors(int iRegion, int iDay, int iHour)
{
	if (iHour > 8 && iHour < 21) {
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 4);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 2);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 2 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 2);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);		
	}
	else 
	{
		SetRegionActorCount(iRegion, "pers_rat", "rat.xml", 8);
		SetRegionActorCount(iRegion, "pers_alkash", "alkash.xml", 1);	
		SetRegionActorCount(iRegion, "pers_dohodyaga", "dohodyaga.xml", 1);
		
		int iGrabitel = 3 * GetGrabitelScale(iDay);
		if (iGrabitel)
			SetRegionActorCount(iRegion, "pers_grabitel", "grabitel.xml", iGrabitel);			
		
		if (iDay + 1 >= 2) {
			SetRegionActorCount(iRegion, "pers_patrool", "patrol.xml", 1);
			if (ArmyTime(iDay))
				SetRegionActorCount(iRegion, "pers_soldat_hand", "soldier_patrol.xml", 1);
		}
			
		int iBomber = 1 * GetBomberScale(iDay);
		if (iBomber)
			SetRegionActorCount(iRegion, "pers_bomber", "bomber.xml", iBomber);		
	}
	
	if (ArmyTime(iDay)) {
		SetRegionActorCount(iRegion, "pers_sanitar", "sanitar.xml", 2);
	}	
}

