include citymanager_base.sci

void InitRegionIndoorScenes12(object scenes)
{
	scenes->add("r5_house2_01");
	scenes->add("r5_house2_02");
	scenes->add("r5_house2_03");
	scenes->add("r5_house3_01_i2");
	scenes->add("r5_house3_01");
	scenes->add("r5_house3_02_i2");
	scenes->add("r5_house3_02");
	scenes->add("r5_house3_03_i2");
	scenes->add("r5_house3_03");
	scenes->add("r5_house3_04_i2");
	scenes->add("r5_house3_04");
	scenes->add("r5_house3_05_i2");
	scenes->add("r5_house3_05");
	scenes->add("r5_house3_06_i2");
	scenes->add("r5_house3_06");
	scenes->add("r5_house3_07_i2");
	scenes->add("r5_house3_07");
	scenes->add("r5_House6_01");
}

void UpdateRegion12Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion12, false);
		EnableStreetRags(c_iRegion12, false, 1);
		RegionBlockNormal(c_iRegion12, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion12, false, 5);
		EnableBlockObjects(c_iRegion12, false, 5);
	}

	UpdateLightsNormal1(c_iRegion12, iDayPart);	
	SetMiddleTownRegionActors(c_iRegion12, iDay, iDayPart);
}

void UpdateRegion12Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion12, false);
		EnableStreetRags(c_iRegion12, true, 1);
		RegionBlockDiseased(c_iRegion12, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion12, true, 5);
		EnableBlockObjects(c_iRegion12, false, 5);
	}

	EnableWindowLights(c_iRegion12, false);
	SetDiseasedMiddleTownRegionActors(c_iRegion12, iDay, iDayPart);
}

void UpdateRegion12Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{	
	if (iDayPart == 0) {
		EnableMarks(c_iRegion12, true);
		EnableStreetRags(c_iRegion12, false, 1);
		RegionBlockClosed(c_iRegion12, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion12, false, 5);
		EnableBlockObjects(c_iRegion12, true, 5);
	}

	EnableWindowLights(c_iRegion12, false);
	SetClosedMiddleTownRegionActors(c_iRegion12, iDay, iDayPart);
}
