include citymanager_base.sci

void InitRegionIndoorScenes13(object scenes)
{
	scenes->add("r6_house2_03");
	scenes->add("r6_house4_01_i2");
	scenes->add("r6_house4_02_i2");
	scenes->add("r6_house4_02");
	scenes->add("r6_house3_02_i2");
	scenes->add("r6_house3_02");
	scenes->add("r6_house3_01_i2");
	scenes->add("r6_house3_01");
	scenes->add("r6_house2_01");
	scenes->add("r6_house7_01");
	scenes->add("r6_house7_02");
	scenes->add("r6_House6_01");
	scenes->add("r6_house2_02");
}

void UpdateRegion13Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion13, false);
		EnableStreetRags(c_iRegion13, false, 1);
		RegionBlockNormal(c_iRegion13, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion13, false, 4);
		EnableBlockObjects(c_iRegion13, false, 4);
	}

	UpdateLightsNormal2(c_iRegion13, iDayPart);	
	SetMiddleTownRegionActors(c_iRegion13, iDay, iDayPart);
}

void UpdateRegion13Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion13, true);
		EnableStreetRags(c_iRegion13, true, 1);
		RegionBlockDiseased(c_iRegion13, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion13, true, 4);
		EnableBlockObjects(c_iRegion13, false, 4);
	}

	EnableWindowLights(c_iRegion13, false);
	SetDiseasedMiddleTownRegionActors(c_iRegion13, iDay, iDayPart);
}

void UpdateRegion13Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion13, false);
		EnableStreetRags(c_iRegion13, false, 1);
		RegionBlockClosed(c_iRegion13, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion13, false, 4);
		EnableBlockObjects(c_iRegion13, true, 4);
	}

	EnableWindowLights(c_iRegion13, false);
	SetClosedMiddleTownRegionActors(c_iRegion13, iDay, iDayPart);
}
