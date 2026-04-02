include std.sci
include scene_nailed_base.sci

// CONSTANTS
const float c_fDefaultSpawnProb = 0.33;
// CONSTANTS

const string c_strLowerMarauder = "pt_lmarauders";
const string c_strUpperMarauder = "pt_umarauders";

maintask TSceneNailed : TSceneNailedBase
{
	void GenerateActors(object locators)
	{
		int nHunters;
		@GetProperty("HunterCount", nHunters);
		float fSpawnProb;
		bool bHas;
		@HasProperty("HunterProb", bHas);
		if (bHas)
			@GetProperty("HunterProb", fSpawnProb);
		else
			fSpawnProb = c_fDefaultSpawnProb;
		if (!rndbool(c_fDefaultSpawnProb))
			--nHunters;
		int iLocator;
		@irand(iLocator, GetLocatorCount(c_strLowerMarauder));
		locators->add(0);
		locators->add(iLocator + 1);
		locators->add(0);
		int iUpperCount = GetLocatorCount(c_strUpperMarauder);
		object locs;
		@CreateIntVector(locs);
		locs->resize(iUpperCount);
		for (int i = 0; i < iUpperCount; ++i)
			locs->set(i, i);
		for (int i = 0; i < nHunters; ++i) {
			int iIndex;
			@irand(iIndex, iUpperCount);
			locs->get(iLocator, iIndex);
			locators->add(1);
			locators->add(iLocator + 1);
			locators->add(0);
			locs->remove(iIndex);
			--iUpperCount;
		}
	}

	string GetLocatorName(int iType, int iIndex)
	{
		if (iType == 0)
			return c_strLowerMarauder + iIndex;
		else if (iType == 1)
			return c_strUpperMarauder + iIndex;
		return "";
	}

	string GetActorName(int iType, int iSubType)
	{
		return "pers_hunter";
	}

	string GetXmlName(int iType, int iSubType)
	{
		if (iType == 0) {
			return "hunter.xml";
		}
		else if (iType == 1) {
			return "hunter2.xml";
		}
		return "";
	}
}
