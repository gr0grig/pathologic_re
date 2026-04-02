include citymanager_base.sci

void InitRegionIndoorScenes15(object scenes)
{
	scenes->add("lc_house7_02");
	scenes->add("lc_house7_03");
	scenes->add("lc_house7_04");
	scenes->add("lc_house7_05");
	scenes->add("lc_house7_06");
	scenes->add("lc_house7_07");
	scenes->add("lc_House6_02");
	scenes->add("lc_house7_01");
	scenes->add("lc_house_2_02");
	scenes->add("lc_House6_01");
	scenes->add("lc_house3_03_i2");
	scenes->add("lc_house3_03");
	scenes->add("lc_House6_03");
	scenes->add("lc_House6_04");
}

void UpdateRegion15Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion15, false);
		EnableStreetRags(c_iRegion15, false, 1);
		RegionBlockNormal(c_iRegion15, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion15, false, 5);
		EnableBlockObjects(c_iRegion15, false, 5);
	}

	UpdateLightsNormalAllNight(c_iRegion15, iDayPart);
	SetUpTownRegionActors(c_iRegion15, iDay, iDayPart);
}

void UpdateRegion15Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion15, true);
		EnableStreetRags(c_iRegion15, true, 1);
		RegionBlockDiseased(c_iRegion15, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion15, true, 5);
		EnableBlockObjects(c_iRegion15, false, 5);
	}

	EnableWindowLights(c_iRegion15, false);
	SetDiseasedUpTownRegionActors(c_iRegion15, iDay, iDayPart);
}

void UpdateRegion15Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion15, false);
		EnableStreetRags(c_iRegion15, false, 1);
		RegionBlockClosed(c_iRegion15, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion15, false, 5);
		EnableBlockObjects(c_iRegion15, true, 5);
	}

	EnableWindowLights(c_iRegion15, false);
	SetClosedUpTownRegionActors(c_iRegion15, iDay, iDayPart);
}
