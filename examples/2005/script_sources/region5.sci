include citymanager_base.sci

void InitRegionIndoorScenes05(object scenes)
{
	scenes->add("dt_house3_08_i2");
	scenes->add("dt_house3_09");
	scenes->add("dt_house3_09_i2");
	scenes->add("house1_se_03l");
	scenes->add("house1_se_03r");
	scenes->add("house1_se_01l");
	scenes->add("house1_se_01r");
	scenes->add("house1_se_04l");
	scenes->add("house1_se_04r");
	scenes->add("house5_11");
	scenes->add("house5_09");
	scenes->add("house5_13");
	scenes->add("house5_12");
	scenes->add("house5_14");
	scenes->add("house5_unoin03l");
	scenes->add("house5_unoin03r");
	scenes->add("house5_unoin02l");
	scenes->add("house5_unoin02r");
	scenes->add("house5_unoin01l");
	scenes->add("house5_unoin01r");
}

void UpdateRegion5Normal(int iDay, int iDayPart, object block1, object block2, object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion5, false);
		EnableStreetRags(c_iRegion5, false, 1);
		RegionBlockNormal(c_iRegion5, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion5, false, 4);
		EnableBlockObjects(c_iRegion5, false, 4);
	}

	UpdateLightsNormal2(c_iRegion5, iDayPart);	
	SetDownTownRegionActors(c_iRegion5, iDay, iDayPart);
}

void UpdateRegion5Diseased(int iDay, int iDayPart, object block1, object block2, object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion5, true);
		EnableStreetRags(c_iRegion5, true, 1);
		RegionBlockDiseased(c_iRegion5, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion5, true, 4);
		EnableBlockObjects(c_iRegion5, false, 4);
	}

	EnableWindowLights(c_iRegion5, false);
	SetDiseasedDownTownRegionActors(c_iRegion5, iDay, iDayPart);
}

void UpdateRegion5Closed(int iDay, int iDayPart, object block1, object block2, object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion5, false);
		EnableStreetRags(c_iRegion5, false, 1);
		RegionBlockClosed(c_iRegion5, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion5, false, 4);
		EnableBlockObjects(c_iRegion5, true, 4);
	}

	EnableWindowLights(c_iRegion5, false);
	SetClosedDownTownRegionActors(c_iRegion5, iDay, iDayPart);
}
