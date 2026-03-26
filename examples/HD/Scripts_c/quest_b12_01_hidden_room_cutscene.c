// @IMPORTS: RemoveActor/1,GetSceneByName/2,AddScriptedActor/5,FindActor/2,CameraPlay/1,CameraWaitForPlayFinish/0,CameraSwitchToNormal/0,self/1,Trigger/2,SetSepia/2
// @STRINGS: W:quest_b12_01|W:hidden_room_cutscene_end|W:hidden_room|W:cs_d12_littlegirl_big|W:cs_play_all.bin|W:cs_d12_littleboy_big|A:ForceGeometryLoad|W:player|W:cs_d12_hidden_room.mot|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x41 vars=int
// @PE: 0x0,0x41

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	func_14();
	var_46_bool = 0; var_47_string = ""; var_48_string = "";
	func_118(var_46_bool, "quest_b12_01", "hidden_room_cutscene_end");
	var_52_object = Obj();
	func_112(var_52_object);
	RemoveActor(var_52_object);
	return 0;
}


func_130()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_69(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0;
	var_23_bool = var_18_object == 0; //@nz
	if(var_23_bool != 0) {
		return 4;
	}
	@@var_18_object:HasProperty("noaccess", var_21_bool);
	var_25_bool = var_21_bool;
	if(var_25_bool != 0) {
		@@var_18_object:GetProperty("noaccess", var_22_int);
		var_29_int = var_22_int + (int)1;
		@@var_18_object:SetProperty("noaccess", var_29_int);
	} else {
		@@var_18_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_135()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_14()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj();
	GetSceneByName(var_4_object, "hidden_room");
	AddScriptedActor(var_5_object, "cs_d12_littlegirl_big", "cs_play_all.bin", var_4_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_6_object, "cs_d12_littleboy_big", "cs_play_all.bin", var_4_object, CVector(0.0, 0.0, 0.0));
	@@var_5_object:ForceGeometryLoad();
	@@var_6_object:ForceGeometryLoad();
	FindActor(var_7_object, "player");
	func_130();
	var_18_object = Obj();
	var_7_object = var_18_object;
	func_69(var_18_object);
	CameraPlay("cs_d12_hidden_room.mot");
	CameraWaitForPlayFinish();
	var_33_object = Obj();
	var_7_object = var_33_object;
	func_92(var_33_object);
	func_135();
	RemoveActor(var_5_object);
	RemoveActor(var_6_object);
	CameraSwitchToNormal();
	return 8;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_112(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	self(var_54_object);
	var_54_object = var_52_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_118(var_46_bool, var_47_string, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj();
	FindActor(var_50_object, var_47_string);
	var_51_bool = var_50_object == 0; //@ne
	if(var_51_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	Trigger(var_50_object, var_48_string);
	var_46_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_92(var_33_object)
{
	var_34_int = 0; var_35_int = 0;
	var_36_bool = var_33_object == 0; //@nz
	if(var_36_bool != 0) {
		return 2;
	}
	@@var_33_object:GetProperty("noaccess", var_35_int);
	var_39_bool = var_35_int > (int)1;
	if(var_39_bool != 0) {
		var_42_int = var_35_int - (int)1;
		@@var_33_object:SetProperty("noaccess", var_42_int);
	} else {
		@@var_33_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


