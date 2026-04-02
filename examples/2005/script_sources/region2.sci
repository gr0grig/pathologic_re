include citymanager_base.sci

void InitRegionIndoorScenes02(object scenes)
{
	scenes->add("dt_house3_05_i2");
	scenes->add("dt_house3_05");
	scenes->add("dt_house3_06_i2");
	scenes->add("dt_house_1_10");
	scenes->add("house5_10");
	scenes->add("house5_07");
	scenes->add("dt_house_1_03");
	scenes->add("dt_house1_union2_04l");
	scenes->add("dt_house1_union2_04r");
	scenes->add("house5_22");
	scenes->add("house5_08");
	scenes->add("dt_house1_union2_02l");
	scenes->add("dt_house1_union2_02r");
}

void UpdateRegion2Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion2, false);
		EnableStreetRags(c_iRegion2, false, 1);
		RegionBlockNormal(c_iRegion2, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion2, false, 8);
		EnableBlockObjects(c_iRegion2, false, 8);
	}

	UpdateLightsNormal3(c_iRegion2, iDayPart);	
	SetFactoryRegionActors(c_iRegion2, iDay, iDayPart);	
}

void UpdateRegion2Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion2, true);
		EnableStreetRags(c_iRegion2, true, 1);
		RegionBlockDiseased(c_iRegion2, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion2, true, 8);
		EnableBlockObjects(c_iRegion2, false, 8);
	}

	EnableWindowLights(c_iRegion2, false);
	SetDiseasedFactoryRegionActors(c_iRegion2, iDay, iDayPart);	
}

void UpdateRegion2Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion2, false);
		EnableStreetRags(c_iRegion2, false, 1);
		RegionBlockClosed(c_iRegion2, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion2, false, 8);
		EnableBlockObjects(c_iRegion2, true, 8);
	}

	EnableWindowLights(c_iRegion2, false);
	SetClosedFactoryRegionActors(c_iRegion2, iDay, iDayPart);
}
