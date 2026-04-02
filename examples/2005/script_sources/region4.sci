include citymanager_base.sci

void InitRegionIndoorScenes04(object scenes)
{
	scenes->add("house5_02");
	scenes->add("dt_house1_union2_03l");
	scenes->add("dt_house1_union2_03r");
	scenes->add("dt_house1_union2_01l");
	scenes->add("dt_house1_union2_01r");
	scenes->add("house5_unoinl");
	scenes->add("house5_unoinr");
	scenes->add("dt_house_1_01");
	scenes->add("house5_05");
	scenes->add("house5_06");
	scenes->add("dt_house_1_02");
	scenes->add("house5_unoin_solid01l");
	scenes->add("house5_unoin_solid01r");
	scenes->add("house5_03");
	scenes->add("house5_04");
	scenes->add("house1_se_02l");
	scenes->add("house1_se_02r");
	scenes->add("dt_house3_01_i2");
	scenes->add("dt_house3_02_i2");
	scenes->add("dt_house3_02");
	scenes->add("dt_house3_03_i2");
	scenes->add("dt_house3_03");
	scenes->add("dt_house3_04_i2");
	scenes->add("house5_21");
}

void UpdateRegion4Normal(int iDay, int iDayPart, object block1, object block2, object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion4, false);
		EnableStreetRags(c_iRegion4, false, 1);
		RegionBlockNormal(c_iRegion4, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion4, false, 7);
		EnableBlockObjects(c_iRegion4, false, 7);
	}

	UpdateLightsNormal1(c_iRegion4, iDayPart);	
	SetDownTownRegionActors(c_iRegion4, iDay, iDayPart);
}

void UpdateRegion4Diseased(int iDay, int iDayPart, object block1, object block2, object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion4, true);
		EnableStreetRags(c_iRegion4, true, 1);
		RegionBlockDiseased(c_iRegion4, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion4, true, 7);
		EnableBlockObjects(c_iRegion4, false, 7);
	}

	EnableWindowLights(c_iRegion4, false);
	SetDiseasedDownTownRegionActors(c_iRegion4, iDay, iDayPart);
}

void UpdateRegion4Closed(int iDay, int iDayPart, object block1, object block2, object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion4, false);
		EnableStreetRags(c_iRegion4, false, 1);
		RegionBlockClosed(c_iRegion4, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion4, false, 7);
		EnableBlockObjects(c_iRegion4, true, 7);
	}

	EnableWindowLights(c_iRegion4, false);
	SetClosedDownTownRegionActors(c_iRegion4, iDay, iDayPart);
}
