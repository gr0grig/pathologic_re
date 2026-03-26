// @IMPORTS: GetMainOutdoorScene/1,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,CameraSwitchToNormal/0,RemoveActor/1,AddActor/6,FindActor/2,Trigger/2,sync/0,self/1,AddScriptedActor/6,SetSepia/2
// @STRINGS: W:cs_b6q01_morlok1|W:cs_play_all.bin|W:cs_b6q01_morlok2|W:cs_b6q01_bull|A:ForceGeometryLoad|W:space|W:cs_b6q01.mot|W:b6q01_dead_bull.xml|W:quest_b6_01|W:Bull|A:SetScriptProperty|W:sacrifice_end|W:cleanup|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x66 vars=int
// @PE: 0x66

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj();
	GetMainOutdoorScene(var_6_object);
	var_12_object = Obj(); var_13_object = Obj(); var_14_string = ""; var_15_string = "";
	var_6_object = var_13_object;
	func_162(var_12_object, var_13_object, "cs_b6q01_morlok1", "cs_play_all.bin");
	var_12_object = var_7_object;
	var_20_object = Obj(); var_21_object = Obj(); var_22_string = ""; var_23_string = "";
	var_6_object = var_21_object;
	func_162(var_20_object, var_21_object, "cs_b6q01_morlok2", "cs_play_all.bin");
	var_20_object = var_8_object;
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = "";
	var_6_object = var_25_object;
	func_162(var_24_object, var_25_object, "cs_b6q01_bull", "cs_play_all.bin");
	var_24_object = var_9_object;
	@@var_7_object:ForceGeometryLoad();
	@@var_8_object:ForceGeometryLoad();
	@@var_9_object:ForceGeometryLoad();
	func_106(Obj());
	var_28_object = var_10_object;
	func_170();
	var_34_object = Obj();
	var_10_object = var_34_object;
	func_113(var_34_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_b6q01.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_51_object = Obj();
	var_10_object = var_51_object;
	func_136(var_51_object);
	CameraSwitchToNormal();
	func_175();
	RemoveActor(var_7_object);
	RemoveActor(var_8_object);
	RemoveActor(var_9_object);
	AddActor(var_9_object, "b6q01_bull", var_6_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "b6q01_dead_bull.xml");
	FindActor(var_11_object, "quest_b6_01");
	var_69_object = var_11_object;
	if(var_69_object != 0) {
		@@var_11_object:SetScriptProperty("Bull", var_9_object);
		Trigger(var_11_object, "sacrifice_end");
	} else {
		sync();
		Trigger(var_9_object, "cleanup");
	}
	var_72_object = Obj();
	func_156(var_72_object);
	RemoveActor(var_72_object);
	return 12;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";


func_162(var_12_object, var_13_object, var_14_string, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj();
	AddScriptedActor(var_17_object, var_14_string, var_15_string, var_13_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_17_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_136(var_51_object)
{
	var_52_int = 0; var_53_int = 0;
	var_54_bool = var_51_object == 0; //@nz
	if(var_54_bool != 0) {
		return 2;
	}
	@@var_51_object:GetProperty("noaccess", var_53_int);
	var_57_bool = var_53_int > (int)1;
	if(var_57_bool != 0) {
		var_60_int = var_53_int - (int)1;
		@@var_51_object:SetProperty("noaccess", var_60_int);
	} else {
		@@var_51_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_170()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_106(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	FindActor(var_30_object, "player");
	var_30_object = var_28_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_175()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_113(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0;
	var_39_bool = var_34_object == 0; //@nz
	if(var_39_bool != 0) {
		return 4;
	}
	@@var_34_object:HasProperty("noaccess", var_37_bool);
	var_41_bool = var_37_bool;
	if(var_41_bool != 0) {
		@@var_34_object:GetProperty("noaccess", var_38_int);
		var_45_int = var_38_int + (int)1;
		@@var_34_object:SetProperty("noaccess", var_45_int);
	} else {
		@@var_34_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_156(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj();
	self(var_74_object);
	var_74_object = var_72_object;
	return 2;
}
EMIT "Stack[-1] = 0";


