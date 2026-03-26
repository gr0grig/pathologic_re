// @IMPORTS: GetSceneByName/2,AddScriptedActor/5,FindActor/2,RegisterKeyCallback/1,CameraPlay/1,PlayGlobalMusic/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,RemoveActor/1,CameraSwitchToNormal/0,self/1,Trigger/2,SetSepia/2
// @STRINGS: W:factory|W:cs_factory_grabitel1|W:cs_play_all.bin|W:cs_factory_grabitel2|W:cs_factory_patrol1|W:cs_factory_patrol2|W:cs_factory_patrol3|A:ForceGeometryLoad|W:player|W:space|W:cs_factory1.mot|W:cs_d5_factory.ogg|W:quest_d5_01|W:cutscene_end|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x63 vars=int
// @PE: 0x63

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj();
	GetSceneByName(var_7_object, "factory");
	AddScriptedActor(var_8_object, "cs_factory_grabitel1", "cs_play_all.bin", var_7_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_9_object, "cs_factory_grabitel2", "cs_play_all.bin", var_7_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_10_object, "cs_factory_patrol1", "cs_play_all.bin", var_7_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_11_object, "cs_factory_patrol2", "cs_play_all.bin", var_7_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_12_object, "cs_factory_patrol3", "cs_play_all.bin", var_7_object, CVector(0.0, 0.0, 0.0));
	@@var_10_object:ForceGeometryLoad();
	@@var_11_object:ForceGeometryLoad();
	@@var_12_object:ForceGeometryLoad();
	FindActor(var_13_object, "player");
	func_164();
	var_33_object = Obj();
	var_13_object = var_33_object;
	func_103(var_33_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_factory1.mot");
	PlayGlobalMusic("cs_d5_factory.ogg");
	CameraWaitForPlayFinish();
	PlayGlobalMusic("");
	UnregisterKeyCallback("space");
	var_52_object = Obj();
	var_13_object = var_52_object;
	func_126(var_52_object);
	func_169();
	RemoveActor(var_8_object);
	RemoveActor(var_9_object);
	RemoveActor(var_10_object);
	RemoveActor(var_11_object);
	RemoveActor(var_12_object);
	CameraSwitchToNormal();
	var_65_bool = 0; var_66_string = ""; var_67_string = "";
	func_152(var_65_bool, "quest_d5_01", "cutscene_end");
	var_71_object = Obj();
	func_146(var_71_object);
	RemoveActor(var_71_object);
	return 14;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


func_164()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_103(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0;
	var_38_bool = var_33_object == 0; //@nz
	if(var_38_bool != 0) {
		return 4;
	}
	@@var_33_object:HasProperty("noaccess", var_36_bool);
	var_40_bool = var_36_bool;
	if(var_40_bool != 0) {
		@@var_33_object:GetProperty("noaccess", var_37_int);
		var_44_int = var_37_int + (int)1;
		@@var_33_object:SetProperty("noaccess", var_44_int);
	} else {
		@@var_33_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_169()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_146(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	self(var_73_object);
	var_73_object = var_71_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_152(var_65_bool, var_66_string, var_67_string)
{
	var_68_object = Obj(); var_69_object = Obj();
	FindActor(var_69_object, var_66_string);
	var_70_bool = var_69_object == 0; //@ne
	if(var_70_bool != 0) {
		var_65_bool = 0;
		return 2;
	}
	Trigger(var_69_object, var_67_string);
	var_65_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_126(var_52_object)
{
	var_53_int = 0; var_54_int = 0;
	var_55_bool = var_52_object == 0; //@nz
	if(var_55_bool != 0) {
		return 2;
	}
	@@var_52_object:GetProperty("noaccess", var_54_int);
	var_58_bool = var_54_int > (int)1;
	if(var_58_bool != 0) {
		var_61_int = var_54_int - (int)1;
		@@var_52_object:SetProperty("noaccess", var_61_int);
	} else {
		@@var_52_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


