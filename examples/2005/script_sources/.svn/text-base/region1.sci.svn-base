include citymanager_base.sci

void InitRegionIndoorScenes01(object scenes)
{
}

void UpdateRegion1Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion1, false);
		EnableStreetRags(c_iRegion1, false, 1);
		RegionBlockNormal(c_iRegion1, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionNormal);

		EnableDiseaseObjects(c_iRegion1, false, 4);
		EnableBlockObjects(c_iRegion1, false, 4);
	}

	UpdateLightsNormal3(c_iRegion1, iDayPart);	
	SetWarehousesRegionActors(c_iRegion1, iDay, iDayPart);	
}

void UpdateRegion1Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion1, true);
		EnableStreetRags(c_iRegion1, true, 1);
		RegionBlockDiseased(c_iRegion1, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionDiseased);
		
		EnableDiseaseObjects(c_iRegion1, true, 4);
		EnableBlockObjects(c_iRegion1, false, 4);
	}

	EnableWindowLights(c_iRegion1, false);
	SetDiseasedWarehousesRegionActors(c_iRegion1, iDay, iDayPart);	
}

void UpdateRegion1Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	if (iDayPart == 0) {
		EnableMarks(c_iRegion1, false);
		EnableStreetRags(c_iRegion1, false, 1);
		RegionBlockClosed(c_iRegion1, iDay, block1, block2, block3);
		ReplaceRegionIndoorScenes(indoor_scenes, c_iRegionClosed);
		
		EnableDiseaseObjects(c_iRegion1, false, 4);
		EnableBlockObjects(c_iRegion1, true, 4);
	}

	EnableWindowLights(c_iRegion1, false);
	SetClosedWarehousesRegionActors(c_iRegion1, iDay, iDayPart);
}
