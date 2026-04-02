include citymanager_base.sci

void InitRegionIndoorScenes08(object scenes)
{
	scenes->add("House6_02");
	scenes->add("House6_01");
	scenes->add("house_2_01");
	scenes->add("house7_03");
	scenes->add("house7_02");
	scenes->add("house3_01_i2");
	scenes->add("house3_01");
	scenes->add("house_2_03");
	scenes->add("house_2_02");
	scenes->add("house4_01_i2");
	scenes->add("house4_01");
	scenes->add("House6_05");
	scenes->add("House6_04");
	scenes->add("House6_03");
}

void UpdateRegion8Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion8, false);
		EnableStreetRags(c_iRegion8, false, 1);
		RegionBlockNormal(c_iRegion8, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion8, false, 6);
		EnableBlockObjects(c_iRegion8, false, 6);
	}

	UpdateLightsNormal2(c_iRegion8, iDayPart);	
	SetMiddleTownRegionActors(c_iRegion8, iDay, iDayPart);
}

void UpdateRegion8Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion8, true);
		EnableStreetRags(c_iRegion8, true, 1);
		RegionBlockDiseased(c_iRegion8, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion8, true, 6);
		EnableBlockObjects(c_iRegion8, false, 6);
	}

	EnableWindowLights(c_iRegion8, false);
	SetDiseasedMiddleTownRegionActors(c_iRegion8, iDay, iDayPart);
}

void UpdateRegion8Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion8, false);
		EnableStreetRags(c_iRegion8, false, 1);
		RegionBlockClosed(c_iRegion8, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion8, false, 6);
		EnableBlockObjects(c_iRegion8, true, 6);
	}

	EnableWindowLights(c_iRegion8, false);
	SetClosedMiddleTownRegionActors(c_iRegion8, iDay, iDayPart);
}
