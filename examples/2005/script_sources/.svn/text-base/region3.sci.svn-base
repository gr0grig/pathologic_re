include citymanager_base.sci

void InitRegionIndoorScenes03(object scenes)
{
	scenes->add("dt_house1_union2_05l");
	scenes->add("dt_house1_union2_05r");
	scenes->add("dt_house2_01");
	scenes->add("dt_house2_02");
	scenes->add("dt_house2_03");
	scenes->add("dt_house2_04");
	scenes->add("dt_house2_05");
	scenes->add("dt_house3_10_i2");
	scenes->add("dt_house3_10");
	scenes->add("dt_house3_11_i2");
	scenes->add("dt_house3_11");
	scenes->add("dt_house3_12_i2");
	scenes->add("dt_house3_12");
	scenes->add("dt_house_1_06");
	scenes->add("dt_house3_07_i2");
	scenes->add("dt_house3_07");
}

void UpdateRegion3Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion3, false);
		EnableStreetRags(c_iRegion3, false, 1);
		RegionBlockNormal(c_iRegion3, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion3, false, 5);
		EnableBlockObjects(c_iRegion3, false, 5);
	}

	UpdateLightsNormal3(c_iRegion3, iDayPart);	
	SetDownTownRegionActors(c_iRegion3, iDay, iDayPart);
}

void UpdateRegion3Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion3, true);
		EnableStreetRags(c_iRegion3, true, 1);
		RegionBlockDiseased(c_iRegion3, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion3, true, 5);
		EnableBlockObjects(c_iRegion3, false, 5);
	}

	EnableWindowLights(c_iRegion3, false);
	SetDiseasedDownTownRegionActors(c_iRegion3, iDay, iDayPart);
}

void UpdateRegion3Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion3, false);
		EnableStreetRags(c_iRegion3, false, 1);
		RegionBlockClosed(c_iRegion3, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion3, false, 5);
		EnableBlockObjects(c_iRegion3, true, 5);
	}

	EnableWindowLights(c_iRegion3, false);
	SetClosedDownTownRegionActors(c_iRegion3, iDay, iDayPart);
}
