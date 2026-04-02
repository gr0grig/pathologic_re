include citymanager_base.sci

void InitRegionIndoorScenes07(object scenes)
{
}

void UpdateRegion7Normal(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	UpdateLightsNormal3(c_iRegion7, iDayPart);	
}

void UpdateRegion7Diseased(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	EnableWindowLights(c_iRegion7, false);
}

void UpdateRegion7Closed(int iDay, int iDayPart, object block1, object block2,  object block3, object indoor_scenes)
{
	EnableWindowLights(c_iRegion7, false);
}
