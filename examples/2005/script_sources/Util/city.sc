include std.sci
include citymanager_base.sci
include region1.sci
include region2.sci
include region3.sci
include region4.sci
include region5.sci
include region6.sci
include region7.sci
include region8.sci
include region9.sci
include region10.sci
include region11.sci
include region12.sci
include region13.sci
include region14.sci
include region15.sci
include region16.sci

var object g_Stationaries1;
var object g_Stationaries2;
var object g_Stationaries3;
var object g_Stationaries4;
var object g_Stationaries5;
var object g_Stationaries6;

var object g_RegionScenes;

void OnConsole(string strCmd, string strParms)
{
	if (strCmd == "horror") {
		int iIndex;
		@_strtoi(iIndex, strParms);
		int iCount;
		g_RegionScenes->size(iCount);
		if (iIndex >= 0 && iIndex < iCount) {
			object scenes;
			g_RegionScenes->get(scenes, iIndex);
			ReplaceRegionIndoorScenes(scenes, false);
			@Trace("Replaced");
		}
		else {
			@Trace("Invalid region index");
		}
	}
}

void BlockRegion(int id, object vec, string strActor, string strXML)
{
	for (int i = 0; ; ++i) {
		string strLoc = "blockpost_" + (id + 1) + "_" + (i + 1) + "_" + "01";
		bool bFound;
		Vector vPos, vDir;
		@GetLocator(strLoc, bFound, vPos, vDir);
		if (!bFound)
			break;
		object actor;
		@AddStationaryActor(actor, vPos, vDir, strActor, strXML);
		if (actor != null) {
			vec->add(actor);
		}
	}
}

void UnblockRegion(int id, object vec)
{
	int iCount;
	vec->size(iCount);
	for (int i = 0; i < iCount; ++i) {
		object obj;
		vec->get(obj, i);
		obj->Remove();
	}
	vec->clear();
}

object AddStationaryActor(string strPoint, string strActor, string strXML) 
{
	object actor;
	bool bFound;
	Vector vPos, vDir;
	@GetLocator(strPoint, bFound, vPos, vDir);
	if (!bFound)
		actor = null;
	else
		@AddStationaryActor(actor, vPos, vDir, strActor, strXML);
	return actor;
}

object AddActor(string strPoint, string strActor, string strXML) 
{
	object actor;
	bool bFound;
	Vector vPos, vDir;
	@GetLocator(strPoint, bFound, vPos, vDir);
	if (!bFound)
		actor = null;
	else {
		AddActor(actor, strActor, self(), vPos, vDir, strXML);
	}
	return actor;
}

void HandleGameTime(int id, float fTime)
{
	SwitchMode(id % 2);
}

void SwitchMode(bool bNight) {
	if (bNight) {
		@Trace("night time");
		
		@SwitchLights(0, true);
	}
	else {
		@Trace("day time");

		@SwitchLights(0, false);
	}
}

maintask TCity
{
	void init(void) {
		g_Stationaries1 = CreateObjectSet();
		g_Stationaries2 = CreateObjectSet();
		g_Stationaries3 = CreateObjectSet();
		g_Stationaries4 = CreateObjectSet();
		g_Stationaries5 = CreateObjectSet();
		g_Stationaries6 = CreateObjectSet();
		
		g_RegionScenes = CreateObjectVector();
		InitRegionScenes();
	
		for (int i = 0; i < 16; ++i) {
			@SetTimeEvent(i * 2 + 1, 19 + i * 24);
			@SetTimeEvent(i * 2 + 2, 10 + i * 24);
		}

		SwitchMode(true);

		for (;;) {
			@Hold();
		}
	}
	
	void InitRegionScenes(void) {
	}

	void OnGameTime(int id, float fTime) {
		HandleGameTime(id, fTime);
	}
	
	void OnTrigger(string strData) {
		TCutScene{"scenes/" + strData + ".mot"};
	}
	
	void OnConsole(string strCmd, string strParms) {
		if (strCmd == "play") {
			TCutScene{strParms};
		}
		else {
			global.OnConsole(strCmd, strParms);
		}
	}
}

task TCutScene
{
	void init(string strMotFile) {
		@Trace("playing: " + strMotFile);
		@RegisterKeyCallback("space");
		@RegisterKeyCallback("escape");
	
		@CameraPlay(strMotFile,false);
		@CameraWaitForPlayFinish();

		@UnregisterKeyCallback("escape");
		@UnregisterKeyCallback("space");

		@CameraSwitchToNormal();
	}

	void OnGameTime(int id, float fTime) {
		HandleGameTime(id, fTime);
	}
	
	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
