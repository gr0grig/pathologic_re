include std.sci
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

var object g_GuardTerm1;
var object g_GuardTerm2;
var object g_GuardTerm3;
var object g_GuardTerm4;
var object g_GuardTerm5;
var object g_GuardTerm6;

var object g_Plants;

var object g_GraveSupplies;

var object g_RegionBlocks1;
var object g_RegionBlocks2;
var object g_RegionBlocks3;

var object g_ArenaManager;
var object g_ArenaTorches;

var object g_RegionScenes;

var object g_bonfires;

var object g_bulls;

void OnTrigger(string name, string params)
{
	if (name == "playsound") {
		@PlaySound(params);
	}
	else
	if (name == "enable_bonfire") {
		int i;
		@_strtoi(i, params);
		EnableBonfire(i - 1);
	}
	else
	if (name == "disable_bonfire") {
		int i;
		@_strtoi(i, params);
		DisableBonfire(i - 1);
	}
}

void OnConsole(string strCmd, string strParms)
{
	if (strCmd == "horror") {
		int iIndex;
		@_strtoi(iIndex, strParms);
		DiseaseRegion(iIndex);
		int iCount;
		g_RegionScenes->size(iCount);
		if (iIndex >= 0 && iIndex < iCount) {
			object scenes;
			g_RegionScenes->get(scenes, iIndex);
			ReplaceRegionIndoorScenes(scenes, c_iRegionDiseased);
			@Trace("Replaced");
		}
		else {
			@Trace("Invalid region index");
		}
	}
	else if (strCmd == "nail") {
		int iIndex;
		@_strtoi(iIndex, strParms);
		CloseRegion(iIndex);
		int iCount;
		g_RegionScenes->size(iCount);
		if (iIndex >= 0 && iIndex < iCount) {
			object scenes;
			g_RegionScenes->get(scenes, iIndex);
			ReplaceRegionIndoorScenes(scenes, c_iRegionClosed);
			@Trace("Replaced");
		}
		else {
			@Trace("Invalid region index");
		}
	}
	else if (strCmd == "fogme") {
		object player = GetPlayerActor();
		object scene;
		player->GetScene(scene);
		Vector vPos;
		player->GetPosition(vPos);
		object actor;
		@AddActorByType(actor, "fog", scene, vPos, [0, 0, 1], "fog_stat.xml");
	}
	else if (strCmd == "sepia") {
		SetSepia();
	}
	else if (strCmd == "nosepia") {
		DisableSepia();
	}
}

void EnableBonfire(int i) 
{
	int iSize;
	g_bonfires->size(iSize);
	
	if (i >= iSize || i == -1) {
		@Trace("Wrong bonfire index " + i);
		return;
	}
	
	object fire;
	g_bonfires->get(fire, i);
	
	object light;
	@FindActor(light, "bonfire_light" + (i + 1));
	if (!light) {
		@Trace("Bofire " + " light " + (i + 1) + " not found");
	}
	else
		light->Switch(true);
	
	object scene;
	@GetMainOutdoorScene(scene);
	
	Vector vPos, vDir;
	bool bExist;
	scene->GetLocator("pt_bonfire" + (i + 1), bExist, vPos, vDir);
	if (!bExist) {
		@Trace("Locator for bonfire doesn't exist");
		return;
	}
	
	if (!fire) {
		object actor;
		@AddActorByType(actor, "scripted", scene, vPos, vDir, "bonfire_big.xml");
		g_bonfires->set(i, actor);
	}
	
	@Trace("Setting bonfire " + (i + 1) + "... ok");
}

void DisableBonfire(int i)
{
	int iSize;
	g_bonfires->size(iSize);
	
	if (i >= iSize || i == -1) {
		@Trace("Wrong bonfire index " + i);
		return;
	}
	
	object fire;
	g_bonfires->get(fire, i);
	
	object light;
	@FindActor(light, "bonfire_light" + (i + 1));
	if (!light) {
		@Trace("Bofire " + " light " + (i + 1) + " not found");
	}
	else
		light->Switch(false);

	if (fire)
		@RemoveActor(fire);
	fire = null;	
	g_bonfires->set(i, fire);
	
	@Trace("Cleanup bonfire " + (i + 1) + "... ok");
}

object CreateGuard(object scene, string name, string actor_name, string xml)
{
	bool bExist;
	Vector vPosition, vDirection;
	scene->GetLocator("pt_guard_" + name, bExist, vPosition, vDirection);
	object actor;
	if (!bExist) {
		@Trace("Locator doesn't exist for guard " + name);
	}
	else {
		scene->AddStationaryActor(actor, vPosition, vDirection, actor_name, xml);
	}
	return actor;
}

object CreateTermitnikGuard(object scene, int iIndex)
{
	return CreateGuard(scene, "term" + iIndex, "pers_patrool", "guard_term.xml");
}

void EnableArenaLight(bool bEnable) 
{
	object light;
	@FindActor(light, "arena_light");
	light->Switch(bEnable);
}

void SetupArena(void)
{
	@Trace("Setting arena...");

	if (g_ArenaManager == null) {
		object scene;
		@GetMainOutdoorScene(scene);
		bool bExist;
		Vector vPosition, vDirection;
		scene->GetLocator("pt_arena_manager", bExist, vPosition, vDirection);
		if (!bExist) {
			@Trace("Locator doesn't exist for arena manager");
		}
		else {
			g_ArenaManager = CreateArenaManager(scene, vPosition, vDirection);
		}
		
		for (int i = 0; i < 6; ++i) {
			scene->GetLocator("pt_arena_torch" + (i + 1), bExist, vPosition, vDirection);
			if (!bExist) {
				@Trace("Locator doesn't exist for arena torch " + (i + 1));
			}
			else {
				object actor;
				@AddActorByType(actor, "scripted", scene, vPosition, vDirection, "torch.xml");
				g_ArenaTorches->add(actor);
			}
		}

		EnableArenaLight(true);
	}
}

void CleanupArena(void)
{
	@Trace("Cleaning arena...");

	if (g_ArenaManager != null) {
		g_ArenaManager->Remove();
		
		int iCount;
		g_ArenaTorches->size(iCount);
		for (int i = 0; i < iCount; ++i) {
			object actor;
			g_ArenaTorches->get(actor, i);
			@Trigger(actor, "remove");
		}
		g_ArenaTorches->clear();

		EnableArenaLight(false);
	}
}

void EnableBulls(void) {
	object outdoor;
	@GetMainOutdoorScene(outdoor);
	for (int i = 1; i <= 17; ++i) {
		g_bulls->add(SpawnStationaryActor(outdoor, "pt_bull" + i, "pers_bull", "bull.xml"));
	}
}

void DisableBulls(void) {
	RemoveStationaryActorsFromVector(g_bulls);
}

void PerformCommonWorldInit(void)
{
	g_bulls = CreateObjectVector();
	g_RegionScenes = CreateObjectVector();

	g_RegionBlocks1 = CreateObjectVector();
	g_RegionBlocks2 = CreateObjectVector();
	g_RegionBlocks3 = CreateObjectVector();
	for (int i = 0; i < c_iRegionCount; ++i) {
		g_RegionBlocks1->add(CreateObjectVector());
		g_RegionBlocks2->add(CreateObjectVector());
		g_RegionBlocks3->add(CreateObjectVector());
	}

	object scenes;
	
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes01(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes02(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes03(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes04(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes05(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes06(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes07(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes08(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes09(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes10(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes11(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes12(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes13(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes14(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes15(scenes);
	@CreateStringVector(scenes);
	g_RegionScenes->add(scenes);
	InitRegionIndoorScenes16(scenes);
	
	EnableBulls();
	
	object outdoor;
	@GetMainOutdoorScene(outdoor);
	
	g_Plants = CreateObjectVector();
	int iPlantCount;
	for (iPlantCount = 0; ; ++iPlantCount) {
		bool bFound;
		outdoor->GetLocator("pt_plant" + (iPlantCount + 1), bFound);
		if (!bFound)
			break;
	}
	g_Plants->resize(iPlantCount);
	@Trace("Total plants: " + iPlantCount);
	
	g_GraveSupplies = CreateObjectVector();
	int iSupplyCount;
	for (iSupplyCount = 0; ; ++iSupplyCount) {
		bool bFound;
		outdoor->GetLocator("pt_grave_supply" + (iSupplyCount + 1), bFound);
		if (!bFound)
			break;
	}
	g_GraveSupplies->resize(iSupplyCount);
	@Trace("Total grave supplies: " + iSupplyCount);
	
	g_bonfires = CreateObjectVector();
	int iBonfireCount;
	for (iBonfireCount = 0; ; ++iBonfireCount) {
		bool bFound;
		outdoor->GetLocator("pt_bonfire" + (iBonfireCount + 1), bFound);
		if (!bFound)
			break;
		object n = null;
		g_bonfires->add(n);	
		DisableBonfire(iBonfireCount);
	}
		
	@Trace("Total bonfires: " + iBonfireCount);
}

void PerformCommonGamePostInit(void)
{
	object scene;
	@GetMainOutdoorScene(scene);
	g_GuardTerm1 = CreateTermitnikGuard(scene, 1);
	g_GuardTerm2 = CreateTermitnikGuard(scene, 2);
	g_GuardTerm3 = CreateTermitnikGuard(scene, 3);
	g_GuardTerm4 = CreateTermitnikGuard(scene, 4);
	g_GuardTerm5 = CreateTermitnikGuard(scene, 5);
	g_GuardTerm6 = CreateTermitnikGuard(scene, 6);
	
	g_ArenaTorches = CreateObjectVector();
	
	//SetupArena(); // arena works from day7
	EnableArenaLight(false);
	
	Plant();
	PutSupplies();
	
	@SendWorldWndMessage(c_iWM_DayChange);
}

// called before midnight, but day is correct (after midnight)
// pomni! chto za odin @sync posle etogo sobytiya uje mojet 
// proiti polnoch (esli v igre lag) tak chto zavyazyvatsya na GetDay() nelzya
void PerformCommonGamePreUpdate(int iDay, int iHour) // days [1..12]
{
	if (iHour == 0) {
		if (iDay == 2) {
			if (GetPlayer() == c_iBranchDanko) {
				int iVal;
				@GetVariable("d1q01", iVal);
				if (iVal != 1000) {
					@GameOver("gameover_fail.xml");
				}
			}
			else
			if (GetPlayer() == c_iBranchBurah) {
				int iVal;
				@GetVariable("b1q01", iVal);
				if (iVal != 1000) {
					@GameOver("gameover_fail.xml");
				}
			}
		}
	
		@SendWorldWndMessage(c_iWM_RealDayChange);	
		@SetVariable("c_iWM_RealDayChange", iDay);
	}
}

void PerformCommonGameUpdate(int iDay, int iHour) // days [1..12]
{
	if (iHour == 5 && iDay >= 7) {
		SetupArena();
	}
	else if (iHour == 22 && iDay >= 7) {
		CleanupArena();
	}
	
	if (iHour == 7 && iDay != 1)
		@SendWorldWndMessage(c_iWM_DayChange);

	if (iHour == 0) {
		Plant();
		PutSupplies();
		
		if (iDay == 6) {
			object scene;
			@GetMainOutdoorScene(scene);
		
			object corpses;
			@AddScriptedActor(corpses, "shed_corpse", "splash_object_wo_pf.bin", scene, [0, 0, 0]);
		}

		if (iDay == 9) {
			ArmyArrive();
		}
		
		// volonteers
		string strVolonterersActor;
		if (iDay != 1) {
			int iQ;
			if (GetPlayer() == c_iBranchBurah) {
				@GetVariable("b" + (iDay - 1) + "q01", iQ);
				strVolonterersActor = "volonteers_burah";
			}
			else
			if (GetPlayer() == c_iBranchDanko) {
				@GetVariable("d" + (iDay - 1) + "q01", iQ);
				strVolonterersActor = "volonteers_danko";
			}
			else {
				@GetVariable("k" + (iDay - 1) + "q01", iQ);
				strVolonterersActor = "volonteers_klara";
			}
			
			@Trace(strVolonterersActor);
			if (iQ == c_iQuestCompleted)
				TriggerActor2(strVolonterersActor, "rescue_locked", "");
				
			TriggerActor2(strVolonterersActor, "update", "");		
		}
	}
	
	if (iDay == 6 && iHour == 0) {
		DisableBulls();
	}
	
	if (iDay == 7 && iHour == 0) {
		int iSize;
		g_bonfires->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			EnableBonfire(i);
		}
	}
}

void Plant(void)
{
	if (GetPlayer() != c_iBranchBurah)
		return;
		
	int iPlantCount;
	g_Plants->size(iPlantCount);
	
	object scene;
	@GetMainOutdoorScene(scene);
	
	for (int i = 0; i < iPlantCount; ++i) {
		object actor;
		g_Plants->get(actor, i);
		if (actor)
			continue;
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator("pt_plant" + (i + 1), bFound, vPos, vDir);
		if (!bFound) {
			@Trace("Plant point not found");
			continue;
		}
		string item_name;
		@RandOneOf(item_name, 6, 3, 3, 3, 1, 1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
		if (item_name) {
			scene->AddStationaryActorByType(actor, vPos, vDir, "scripted", "item_" + item_name + "_stat.xml");
			g_Plants->set(i, actor);
			
			@Trace("New plant: \"" + item_name + "\" at location #" + (i + 1));
		}
	}
}

void PutSupplies(void)
{
	object scene;
	@GetMainOutdoorScene(scene);

	int iSupplyCount;
	g_GraveSupplies->size(iSupplyCount);
	for (int i = 0; i < iSupplyCount; ++i) {
		object actor;
		g_GraveSupplies->get(actor, i);
		if (actor)
			continue;
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator("pt_grave_supply" + (i + 1), bFound, vPos, vDir);
		if (!bFound) {
			@Trace("Grave supply point not found");
			continue;
		}
		string item_name;
		@RandOneOf(item_name, 1, 1, "bread", "milk");
		scene->AddStationaryActorByType(actor, vPos, vDir, "scripted", "item_" + item_name + "_stat.xml");
		g_GraveSupplies->set(i, actor);
	}
}

void ArmyArrive(void)
{
	object scene;
	@GetMainOutdoorScene(scene);
	object gun;
	@AddScriptedActor(gun, "big_gun", "big_gun.bin", scene, [0, 0, 0]);
	@AddScriptedActor(gun, "vagon_martira", "big_gun.bin", scene, [0, 0, 0]);
	@AddScriptedActor(gun, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", scene, [0, 0, 0]);
}
