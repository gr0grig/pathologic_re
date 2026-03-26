// @IMPORTS: GetSceneByName/2,AddActor/6,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,RemoveActor/1,CameraSwitchToNormal/0,FindActor/2,self/1,Trigger/2,SetSepia/2
// @STRINGS: W:cot_eva|W:cs_burah_danko_microscope|W:cs_burah_danko_microscope.xml|W:space|W:cs_burah_danko_microscope.mot|W:quest_b2_01|W:cutscene_end|W:quest_b3_01|W:quest_b4_01|W:quest_b5_01|W:quest_b6_01|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
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
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj();
	GetSceneByName(var_3_object, "cot_eva");
	AddActor(var_4_object, "cs_burah_danko_microscope", var_3_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "cs_burah_danko_microscope.xml");
	func_81(Obj());
	var_11_object = var_5_object;
	func_149();
	var_17_object = Obj();
	var_5_object = var_17_object;
	func_88(var_17_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_burah_danko_microscope.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_34_object = Obj();
	var_5_object = var_34_object;
	func_111(var_34_object);
	func_154();
	RemoveActor(var_4_object);
	CameraSwitchToNormal();
	var_47_bool = 0; var_48_string = ""; var_49_string = "";
	func_137(var_47_bool, "quest_b2_01", "cutscene_end");
	var_53_bool = 0; var_54_string = ""; var_55_string = "";
	func_137(var_53_bool, "quest_b3_01", "cutscene_end");
	var_56_bool = 0; var_57_string = ""; var_58_string = "";
	func_137(var_56_bool, "quest_b4_01", "cutscene_end");
	var_59_bool = 0; var_60_string = ""; var_61_string = "";
	func_137(var_59_bool, "quest_b5_01", "cutscene_end");
	var_62_bool = 0; var_63_string = ""; var_64_string = "";
	func_137(var_62_bool, "quest_b6_01", "cutscene_end");
	var_65_object = Obj();
	func_131(var_65_object);
	RemoveActor(var_65_object);
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_131(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	self(var_67_object);
	var_67_object = var_65_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_137(var_47_bool, var_48_string, var_49_string)
{
	var_50_object = Obj(); var_51_object = Obj();
	FindActor(var_51_object, var_48_string);
	var_52_bool = var_51_object == 0; //@ne
	if(var_52_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	Trigger(var_51_object, var_49_string);
	var_47_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_111(var_34_object)
{
	var_35_int = 0; var_36_int = 0;
	var_37_bool = var_34_object == 0; //@nz
	if(var_37_bool != 0) {
		return 2;
	}
	@@var_34_object:GetProperty("noaccess", var_36_int);
	var_40_bool = var_36_int > (int)1;
	if(var_40_bool != 0) {
		var_43_int = var_36_int - (int)1;
		@@var_34_object:SetProperty("noaccess", var_43_int);
	} else {
		@@var_34_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_81(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	FindActor(var_13_object, "player");
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_149()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_88(var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0;
	var_22_bool = var_17_object == 0; //@nz
	if(var_22_bool != 0) {
		return 4;
	}
	@@var_17_object:HasProperty("noaccess", var_20_bool);
	var_24_bool = var_20_bool;
	if(var_24_bool != 0) {
		@@var_17_object:GetProperty("noaccess", var_21_int);
		var_28_int = var_21_int + (int)1;
		@@var_17_object:SetProperty("noaccess", var_28_int);
	} else {
		@@var_17_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_154()
{
	SetSepia((int)0, (int)0);
	return 0;
}


