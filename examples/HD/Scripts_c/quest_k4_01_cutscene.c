// @IMPORTS: GetSceneByName/2,AddScriptedActor/5,FindActor/2,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,RemoveActor/1,CameraSwitchToNormal/0,self/1,Trigger/2,SetSepia/2
// @STRINGS: W:warehouse_gangster|W:cs_k4q01_grabitel|W:cs_play_all.bin|A:ForceGeometryLoad|W:player|W:space|W:cs_k4q01_camera.mot|W:quest_k4_01|W:cutscene_end|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x39 vars=int
// @PE: 0x39

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj();
	GetSceneByName(var_3_object, "warehouse_gangster");
	AddScriptedActor(var_4_object, "cs_k4q01_grabitel", "cs_play_all.bin", var_3_object, CVector(0.0, 0.0, 0.0));
	@@var_4_object:ForceGeometryLoad();
	FindActor(var_5_object, "player");
	func_122();
	var_13_object = Obj();
	var_5_object = var_13_object;
	func_61(var_13_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_k4q01_camera.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_30_object = Obj();
	var_5_object = var_30_object;
	func_84(var_30_object);
	func_127();
	RemoveActor(var_4_object);
	CameraSwitchToNormal();
	var_43_bool = 0; var_44_string = ""; var_45_string = "";
	func_110(var_43_bool, "quest_k4_01", "cutscene_end");
	var_49_object = Obj();
	func_104(var_49_object);
	RemoveActor(var_49_object);
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_104(var_49_object)
{
	var_50_object = Obj(); var_51_object = Obj();
	self(var_51_object);
	var_51_object = var_49_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_110(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj();
	FindActor(var_47_object, var_44_string);
	var_48_bool = var_47_object == 0; //@ne
	if(var_48_bool != 0) {
		var_43_bool = 0;
		return 2;
	}
	Trigger(var_47_object, var_45_string);
	var_43_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_84(var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = var_30_object == 0; //@nz
	if(var_33_bool != 0) {
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_36_bool = var_32_int > (int)1;
	if(var_36_bool != 0) {
		var_39_int = var_32_int - (int)1;
		@@var_30_object:SetProperty("noaccess", var_39_int);
	} else {
		@@var_30_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_122()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_61(var_13_object)
{
	var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0;
	var_18_bool = var_13_object == 0; //@nz
	if(var_18_bool != 0) {
		return 4;
	}
	@@var_13_object:HasProperty("noaccess", var_16_bool);
	var_20_bool = var_16_bool;
	if(var_20_bool != 0) {
		@@var_13_object:GetProperty("noaccess", var_17_int);
		var_24_int = var_17_int + (int)1;
		@@var_13_object:SetProperty("noaccess", var_24_int);
	} else {
		@@var_13_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_127()
{
	SetSepia((int)0, (int)0);
	return 0;
}


