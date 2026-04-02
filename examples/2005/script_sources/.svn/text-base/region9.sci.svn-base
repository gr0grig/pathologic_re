include citymanager_base.sci

void InitRegionIndoorScenes09(object scenes)
{
	scenes->add("r2_house_2_01");
	scenes->add("r2_house_2_02");
	scenes->add("r2_house_2_03");
	scenes->add("r2_house7_02");
	scenes->add("r2_house01_01");
	scenes->add("r2_house7_01");
	scenes->add("r2_house3_01_i2");
	scenes->add("r2_house3_01");
	scenes->add("r2_house3_02_i2");
	scenes->add("r2_house3_02");
	scenes->add("r2_house3_03_i2");
	scenes->add("r2_house3_03");
	scenes->add("r3_house7_01");
	scenes->add("r3_house7_02");
}

void UpdateRegion9Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion9, false);
		EnableStreetRags(c_iRegion9, false, 1);
		RegionBlockNormal(c_iRegion9, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion9, false, 4);
		EnableBlockObjects(c_iRegion9, false, 4);
	}

	UpdateLightsNormal1(c_iRegion9, iDayPart);	
	SetMiddleTownRegionActors(c_iRegion9, iDay, iDayPart);
}

void UpdateRegion9Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion9, true);
		EnableStreetRags(c_iRegion9, true, 1);
		RegionBlockDiseased(c_iRegion9, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion9, true, 4);
		EnableBlockObjects(c_iRegion9, false, 4);
	}

	EnableWindowLights(c_iRegion9, false);
	SetDiseasedMiddleTownRegionActors(c_iRegion9, iDay, iDayPart);
}

void UpdateRegion9Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion9, false);
		EnableStreetRags(c_iRegion9, false, 1);
		RegionBlockClosed(c_iRegion9, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion9, false, 4);
		EnableBlockObjects(c_iRegion9, true, 4);
	}

	EnableWindowLights(c_iRegion9, false);
	SetClosedMiddleTownRegionActors(c_iRegion9, iDay, iDayPart);
}
