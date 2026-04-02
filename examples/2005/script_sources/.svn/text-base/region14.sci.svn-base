include citymanager_base.sci

void InitRegionIndoorScenes14(object scenes)
{
	scenes->add("r7_house2_01");
	scenes->add("r7_house2_02");
	scenes->add("r7_house2_03");
	scenes->add("r7_house2_04");
	scenes->add("r7_house3_03_i2");
	scenes->add("r7_house3_03");
	scenes->add("r7_house3_04_i2");
	scenes->add("r7_house3_04");
	scenes->add("r7_house3_05_i2");
	scenes->add("r7_house3_05");
	scenes->add("r7_house3_06_i2");
	scenes->add("r7_house3_01_i2");
	scenes->add("r7_house3_01");
	scenes->add("r7_house3_02_i2");
	scenes->add("r7_house3_02");
}

void UpdateRegion14Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion14, false);
		EnableStreetRags(c_iRegion14, false, 1);
		RegionBlockNormal(c_iRegion14, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion14, false, 4);
		EnableBlockObjects(c_iRegion14, false, 4);
	}

	UpdateLightsNormal3(c_iRegion14, iDayPart);	
	SetMiddleTownRegionActors(c_iRegion14, iDay, iDayPart);
}

void UpdateRegion14Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion14, true);
		EnableStreetRags(c_iRegion14, true, 1);
		RegionBlockDiseased(c_iRegion14, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion14, true, 4);
		EnableBlockObjects(c_iRegion14, false, 4);
	}

	EnableWindowLights(c_iRegion14, false);
	SetDiseasedMiddleTownRegionActors(c_iRegion14, iDay, iDayPart);
}

void UpdateRegion14Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion14, false);
		EnableStreetRags(c_iRegion14, false, 1);
		RegionBlockClosed(c_iRegion14, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion14, false, 4);
		EnableBlockObjects(c_iRegion14, true, 4);
	}

	EnableWindowLights(c_iRegion14, false);
	SetClosedMiddleTownRegionActors(c_iRegion14, iDay, iDayPart);
}
