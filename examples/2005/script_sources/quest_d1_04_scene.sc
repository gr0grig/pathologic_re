include std.sci
include scene_normal_base.sci

const int c_iTypeChild = 0;

const string c_strTypeChild = "pt_child";

maintask TSceneNormal : TSceneNormalBase
{
	void GenerateActors(object locators)
	{
		// dobermans
		for (int i = 1; i <= 2; ++i) {
			string loc = c_strTypeChild + i;
			bool bFound;
			Vector vPos;
			@GetLocator(loc, bFound, vPos);
			if (!bFound) {
				@Trace("not enough locators for quest b4q01");
				break;
			}
			locators->add(c_iTypeChild); // iType
			locators->add(i); // iIndex
			int iSubType = i - 1;
			locators->add(iSubType); // iSubType
		}		
	}

	string GetLocatorName(int iType, int iIndex)
	{
		if (iType == c_iTypeChild)
			return c_strTypeChild + iIndex;
			
		return "";
	}

	string GetActorName(int iType, int iSubType)
	{
		return "pers_doberman";
	}

	string GetXmlName(int iType, int iSubType)
	{
		if (iType == c_iTypeChild) {
			if (iSubType == 0) {
				return "d1q04_doberman1.xml";
			}
			else
			if (iSubType == 1) {
				return "d1q04_doberman2.xml";
			}
		}
		return "";
	}
}
