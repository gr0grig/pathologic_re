include citymanager_base.sci

void InitRegionIndoorScenes11(object scenes)
{
	scenes->add("r4_house_2_02");
	scenes->add("r4_house3_03_i2");
	scenes->add("r4_house3_03");
	scenes->add("r4_house4_02_i2");
	scenes->add("r4_house4_02");
	scenes->add("r4_house4_01_i2");
	scenes->add("r4_house4_01");
	scenes->add("r4_house3_02_i2");
	scenes->add("r4_house3_02");
	scenes->add("r4_house_2_01");
	scenes->add("r4_house3_01_i2");
	scenes->add("r4_house3_01");
	scenes->add("r4_house7_01");
	scenes->add("r4_House6_01");
	scenes->add("r4_house_2_03");
	scenes->add("r4_House6_03");
	scenes->add("r4_house_2_04");
}

void UpdateRegion11Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion11, false);
		EnableStreetRags(c_iRegion11, false, 1);
		RegionBlockNormal(c_iRegion11, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion11, false, 7);
		EnableBlockObjects(c_iRegion11, false, 7);
	}

	UpdateLightsNormal1(c_iRegion11, iDayPart);	
	SetMiddleTownRegionActors(c_iRegion11, iDay, iDayPart);
}

void UpdateRegion11Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion11, true);
		EnableStreetRags(c_iRegion11, true, 1);
		RegionBlockDiseased(c_iRegion11, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);

		EnableDiseaseObjects(c_iRegion11, true, 7);
		EnableBlockObjects(c_iRegion11, false, 7);
	}

	EnableWindowLights(c_iRegion11, false);
	SetDiseasedMiddleTownRegionActors(c_iRegion11, iDay, iDayPart);
}

void UpdateRegion11Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion11, false);
		EnableStreetRags(c_iRegion11, false, 1);
		RegionBlockClosed(c_iRegion11, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion11, false, 7);
		EnableBlockObjects(c_iRegion11, true, 7);
	}

	EnableWindowLights(c_iRegion11, false);
	SetClosedMiddleTownRegionActors(c_iRegion11, iDay, iDayPart);
}
