include std.sci
include scene_nailed_base.sci

maintask TSceneNailed : TSceneNailedBase
{
	void GenerateActors(object locators) {}
	string GetLocatorName(int iType, int iIndex) {return "";}
	string GetActorName(int iType, int iSubType) {return "";}
	string GetXmlName(int iType, int iSubType) {return "";}
}
