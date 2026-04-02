include std.sci
include scene_normal_base.sci

const int c_iTypeChild = 0;
const int c_iTypeWoman = 1;
const int c_iTypeMan = 2;

const string c_strTypeChild = "pt_child";
const string c_strTypeWoman = "pt_woman";
const string c_strTypeMan = "pt_man";

maintask TSceneNormal : TSceneNormalBase
{
	void GenerateActors(object locators)
	{
		// childs
		for (int i = 1; ; ++i) {
			string loc = c_strTypeChild + i;
			bool bFound;
			Vector vPos;
			@GetLocator(loc, bFound, vPos);
			if (!bFound)
				break;
			locators->add(c_iTypeChild); // iType
			locators->add(i); // iIndex
			int iSubType;
			@irand(iSubType, 5);
			locators->add(iSubType); // iSubType
		}		
		
		// womans
		for (int i = 1; ; ++i) {
			string loc = c_strTypeWoman + i;
			bool bFound;
			Vector vPos;
			@GetLocator(loc, bFound, vPos);
			if (!bFound)
				break;
			locators->add(c_iTypeWoman); // iType
			locators->add(i); // iIndex
			int iSubType;
			@irand(iSubType, 2);
			locators->add(iSubType); // iSubType
		}		
		
		// mans
		for (int i = 1; ; ++i) {
			string loc = c_strTypeMan + i;
			bool bFound;
			Vector vPos;
			@GetLocator(loc, bFound, vPos);
			if (!bFound)
				break;
			locators->add(c_iTypeMan); // iType
			locators->add(i); // iIndex
			int iSubType;
			@irand(iSubType, 5);
			locators->add(iSubType); // iSubType
		}		
	}

	string GetLocatorName(int iType, int iIndex)
	{
		if (iType == c_iTypeChild)
			return c_strTypeChild + iIndex;
		else
		if (iType == c_iTypeWoman)
			return c_strTypeWoman + iIndex;
		else
		if (iType == c_iTypeMan)
			return c_strTypeMan + iIndex;
			
		return "";
	}

	string GetActorName(int iType, int iSubType)
	{
		if (iType == c_iTypeChild) {
			if (iSubType == 0)
				return "pers_littleboy";
			else
			if (iSubType == 1)
				return "pers_littlegirl";
			else
			if (iSubType == 2)
				return "pers_boy";
			else
			if (iSubType == 3)
				return "pers_girl";
			else
			if (iSubType == 4)
				return "pers_girl";
		}
		else 
		if (iType == c_iTypeWoman) {
			if (iSubType == 0) {
				return "pers_woman";
			}	
			else	
			if (iSubType == 1) {
				return "pers_wasted_girl";
			}		
		}
		else 
		if (iType == c_iTypeMan) {
			if (iSubType == 0) {
				return "pers_unosha";
			}	
			else	
			if (iSubType == 1) {
				return "pers_unosha";
			}	
			else	
			if (iSubType == 2) {
				return "pers_worker";
			}	
			else	
			if (iSubType == 3) {
				return "pers_worker";
			}	
			else	
			if (iSubType == 4) {
				return "pers_wasted_male";
			}			
		}		
		
		return "";
	}

	string GetXmlName(int iType, int iSubType)
	{
		if (iType == c_iTypeChild) {
			if (iSubType == 0) {
				return "ilittleboy.xml";
			}
			else
			if (iSubType == 1) {
				return "ilittlegirl.xml";
			}
			else
			if (iSubType == 2) {
				return "iboy.xml";
			}
			else
			if (iSubType == 3) {
				return "igirl.xml";
			}
			else
			if (iSubType == 4) {
				return "igirl2.xml";
			}
		}
		else 
		if (iType == c_iTypeWoman) {
			if (iSubType == 0) {
				return "iwoman.xml";
			}	
			else	
			if (iSubType == 1) {
				return "iwasted_girl.xml";
			}		
		}
		else
		if (iType == c_iTypeMan) {
			if (iSubType == 0) {
				return "iunosha.xml";
			}	
			else	
			if (iSubType == 1) {
				return "iunosha2.xml";
			}	
			else	
			if (iSubType == 2) {
				return "iworker.xml";
			}	
			else	
			if (iSubType == 3) {
				return "iworker2.xml";
			}	
			else	
			if (iSubType == 4) {
				return "iwasted_male.xml";
			}			
		}		
		return "";
	}
}
