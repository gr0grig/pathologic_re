include citymanager_base.sci

void InitRegionIndoorScenes16(object scenes)
{
	scenes->add("lc_house3_05_i2");
	scenes->add("lc_house3_05");
	scenes->add("lc_house3_06_i2");
	scenes->add("lc_house3_06");
	scenes->add("lc_House6_06");
	scenes->add("lc_house3_04_i2");
	scenes->add("lc_house3_04");
	scenes->add("house3_plus_03_i2");
}

void UpdateRegion16Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion16, false);
		EnableStreetRags(c_iRegion16, false, 1);
		RegionBlockNormal(c_iRegion16, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion16, false, 5);
		EnableBlockObjects(c_iRegion16, false, 5);
	}

	UpdateLightsNormalAllNight(c_iRegion16, iDayPart);	
	SetUpTownRegionActors(c_iRegion16, iDay, iDayPart);
}

void UpdateRegion16Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion16, true);
		EnableStreetRags(c_iRegion16, true, 1);
		RegionBlockDiseased(c_iRegion16, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion16, true, 5);
		EnableBlockObjects(c_iRegion16, false, 5);
	}

	EnableWindowLights(c_iRegion16, false);
	SetDiseasedUpTownRegionActors(c_iRegion16, iDay, iDayPart);
}

void UpdateRegion16Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion16, false);
		EnableStreetRags(c_iRegion16, false, 1);
		RegionBlockClosed(c_iRegion16, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion16, false, 5);
		EnableBlockObjects(c_iRegion16, true, 5);
	}

	EnableWindowLights(c_iRegion16, false);
	SetClosedUpTownRegionActors(c_iRegion16, iDay, iDayPart);
}
