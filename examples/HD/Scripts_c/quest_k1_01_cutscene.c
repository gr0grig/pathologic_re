// @IMPORTS: GetSceneByName/2,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,CameraSwitchToNormal/0,Teleport/4,RemoveActor/1,FindActor/2,self/1,AddActor/6,AddScriptedActor/6,Trigger/2,SetSepia/2
// @STRINGS: W:cot_anna|W:cs_k1q01_worker|W:cs_play_all.bin|W:cs_k1q01_klara|W:cs_k1q01_klara.xml|A:ForceGeometryLoad|W:space|W:cs_k1q01.mot|W:pt_cs_player|A:GetLocator|W:quest_k1_01|W:cutscene_end|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x4d vars=int
// @PE: 0x4d

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	GetSceneByName(var_7_object, "cot_anna");
	var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = "";
	var_7_object = var_16_object;
	func_145(var_15_object, var_16_object, "cs_k1q01_worker", "cs_play_all.bin");
	var_15_object = var_8_object;
	var_23_object = Obj(); var_24_object = Obj(); var_25_string = ""; var_26_string = "";
	var_7_object = var_24_object;
	func_137(var_23_object, var_24_object, "cs_k1q01_klara", "cs_k1q01_klara.xml");
	var_23_object = var_9_object;
	@@var_8_object:ForceGeometryLoad();
	@@var_9_object:ForceGeometryLoad();
	func_81(Obj());
	var_31_object = var_10_object;
	func_165();
	var_37_object = Obj();
	var_10_object = var_37_object;
	func_88(var_37_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_k1q01.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_54_object = Obj();
	var_10_object = var_54_object;
	func_111(var_54_object);
	func_170();
	CameraSwitchToNormal();
	@@var_7_object:GetLocator("pt_cs_player", var_11_bool, var_12_cvector, var_13_cvector);
	Teleport(var_10_object, var_7_object, var_12_cvector, var_13_cvector);
	RemoveActor(var_8_object);
	RemoveActor(var_9_object);
	var_68_bool = 0; var_69_string = ""; var_70_string = "";
	func_153(var_68_bool, "quest_k1_01", "cutscene_end");
	var_74_object = Obj();
	func_131(var_74_object);
	RemoveActor(var_74_object);
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


func_131(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj();
	self(var_76_object);
	var_76_object = var_74_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_165()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_137(var_23_object, var_24_object, var_25_string, var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj();
	AddActor(var_28_object, var_25_string, var_24_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_26_string);
	var_28_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_170()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_111(var_54_object)
{
	var_55_int = 0; var_56_int = 0;
	var_57_bool = var_54_object == 0; //@nz
	if(var_57_bool != 0) {
		return 2;
	}
	@@var_54_object:GetProperty("noaccess", var_56_int);
	var_60_bool = var_56_int > (int)1;
	if(var_60_bool != 0) {
		var_63_int = var_56_int - (int)1;
		@@var_54_object:SetProperty("noaccess", var_63_int);
	} else {
		@@var_54_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_81(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	FindActor(var_33_object, "player");
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_145(var_15_object, var_16_object, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	AddScriptedActor(var_20_object, var_17_string, var_18_string, var_16_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_20_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_88(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0;
	var_42_bool = var_37_object == 0; //@nz
	if(var_42_bool != 0) {
		return 4;
	}
	@@var_37_object:HasProperty("noaccess", var_40_bool);
	var_44_bool = var_40_bool;
	if(var_44_bool != 0) {
		@@var_37_object:GetProperty("noaccess", var_41_int);
		var_48_int = var_41_int + (int)1;
		@@var_37_object:SetProperty("noaccess", var_48_int);
	} else {
		@@var_37_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_153(var_68_bool, var_69_string, var_70_string)
{
	var_71_object = Obj(); var_72_object = Obj();
	FindActor(var_72_object, var_69_string);
	var_73_bool = var_72_object == 0; //@ne
	if(var_73_bool != 0) {
		var_68_bool = 0;
		return 2;
	}
	Trigger(var_72_object, var_70_string);
	var_68_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


