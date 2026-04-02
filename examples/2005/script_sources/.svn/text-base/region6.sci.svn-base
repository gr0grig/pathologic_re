include citymanager_base.sci

void InitRegionIndoorScenes06(object scenes)
{
	scenes->add("dt_house3_14_i2");
	scenes->add("dt_house3_14");
	scenes->add("house1_arc_01l");
	scenes->add("house1_arc_01r");
	scenes->add("dt_House6_01");
	scenes->add("dt_house_1_09");
	scenes->add("house5_24");
	scenes->add("dt_House6_03");
	scenes->add("dt_House6_04");
	scenes->add("dt_house_1_08");
	scenes->add("house5_unoin_solidl");
	scenes->add("house5_unoin_solidr");
	scenes->add("dt_house2_12");
	scenes->add("dt_house2_11");
	scenes->add("dt_house2_13");
	scenes->add("dt_house2_09");
	scenes->add("dt_house2_08");
	scenes->add("dt_house2_07");
	scenes->add("dt_house2_06");
	scenes->add("house5_01");
	scenes->add("house5_15");
	scenes->add("house5_16");
	scenes->add("house5_17");
	scenes->add("house5_unoin04l");
	scenes->add("house5_unoin04r");
	scenes->add("house5_23");
	scenes->add("house1_se_05");
}

void UpdateRegion6Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion6, false);
		EnableStreetRags(c_iRegion6, false, 1);
		RegionBlockNormal(c_iRegion6, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);
		
		EnableDiseaseObjects(c_iRegion6, false, 4);
		EnableBlockObjects(c_iRegion6, false, 4);
	}

	UpdateLightsNormal1(c_iRegion6, iDayPart);	
	SetDownTownRegionActors(c_iRegion6, iDay, iDayPart);
}

void UpdateRegion6Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion6, true);
		EnableStreetRags(c_iRegion6, true, 1);
		RegionBlockDiseased(c_iRegion6, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion6, true, 4);
		EnableBlockObjects(c_iRegion6, false, 4);
	}

	EnableWindowLights(c_iRegion6, false);
	SetDiseasedDownTownRegionActors(c_iRegion6, iDay, iDayPart);
}

void UpdateRegion6Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion6, false);
		EnableStreetRags(c_iRegion6, false, 1);
		RegionBlockClosed(c_iRegion6, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion6, false, 4);
		EnableBlockObjects(c_iRegion6, true, 4);
	}

	EnableWindowLights(c_iRegion6, false);
	SetClosedDownTownRegionActors(c_iRegion6, iDay, iDayPart);
}
