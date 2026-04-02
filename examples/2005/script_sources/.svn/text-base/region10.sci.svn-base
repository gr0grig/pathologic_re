include citymanager_base.sci

void InitRegionIndoorScenes10(object scenes)
{
	scenes->add("r3_house_2_02");
	scenes->add("r3_house3_02_i2");
	scenes->add("r3_house3_02");
	scenes->add("r3_house4_05_i2");
	scenes->add("r3_house4_05");
	scenes->add("r3_house4_03_i2");
	scenes->add("r3_house4_04_i2");
	scenes->add("r3_house4_04");
	scenes->add("r3_house4_01_i2");
	scenes->add("r3_house4_01");
	scenes->add("r3_house_2_01");
	scenes->add("r3_house4_02_i2");
	scenes->add("r3_house4_02");
	scenes->add("r3_house3_01_i2");
	scenes->add("r3_house3_01");
}

void UpdateRegion10Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion10, false);
		EnableStreetRags(c_iRegion10, false, 1);
		RegionBlockNormal(c_iRegion10, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion10, false, 7);
		EnableBlockObjects(c_iRegion10, false, 7);
	}

	UpdateLightsNormal3(c_iRegion10, iDayPart);	
	SetMiddleTownRegionActors(c_iRegion10, iDay, iDayPart);
}

void UpdateRegion10Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion10, true);
		EnableStreetRags(c_iRegion10, true, 1);
		RegionBlockDiseased(c_iRegion10, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion10, true, 7);
		EnableBlockObjects(c_iRegion10, false, 7);
	}

	EnableWindowLights(c_iRegion10, false);
	SetDiseasedMiddleTownRegionActors(c_iRegion10, iDay, iDayPart);
}

void UpdateRegion10Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion10, false);
		EnableStreetRags(c_iRegion10, false, 1);
		RegionBlockClosed(c_iRegion10, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion10, false, 7);
		EnableBlockObjects(c_iRegion10, true, 7);
	}

	EnableWindowLights(c_iRegion10, false);
	SetClosedMiddleTownRegionActors(c_iRegion10, iDay, iDayPart);
}
