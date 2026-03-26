// @IMPORTS: GetMainOutdoorScene/1,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,CameraSwitchToNormal/0,RemoveActor/1,FindActor/2,self/1,AddActor/6,AddScriptedActor/6,Trigger/2,SetSepia/2
// @STRINGS: W:cs_b10q01_burah|W:cs_b10q01_burah.xml|W:cs_b10q01_whitemask|W:cs_play_all.bin|A:ForceGeometryLoad|W:space|W:cs_b10q01.mot|W:quest_b10_01|W:place_butchers|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x47 vars=int
// @PE: 0x47

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj();
	GetMainOutdoorScene(var_4_object);
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = "";
	var_4_object = var_9_object;
	func_131(var_8_object, var_9_object, "cs_b10q01_burah", "cs_b10q01_burah.xml");
	var_8_object = var_5_object;
	var_16_object = Obj(); var_17_object = Obj(); var_18_string = ""; var_19_string = "";
	var_4_object = var_17_object;
	func_139(var_16_object, var_17_object, "cs_b10q01_whitemask", "cs_play_all.bin");
	var_16_object = var_6_object;
	@@var_5_object:ForceGeometryLoad();
	@@var_6_object:ForceGeometryLoad();
	func_75(Obj());
	var_24_object = var_7_object;
	func_159();
	var_30_object = Obj();
	var_7_object = var_30_object;
	func_82(var_30_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_b10q01.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_47_object = Obj();
	var_7_object = var_47_object;
	func_105(var_47_object);
	func_164();
	CameraSwitchToNormal();
	RemoveActor(var_5_object);
	RemoveActor(var_6_object);
	var_60_bool = 0; var_61_string = ""; var_62_string = "";
	func_147(var_60_bool, "quest_b10_01", "place_butchers");
	var_66_object = Obj();
	func_125(var_66_object);
	RemoveActor(var_66_object);
	return 8;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_131(var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj();
	AddActor(var_13_object, var_10_string, var_9_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_11_string);
	var_13_object = var_8_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_164()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_105(var_47_object)
{
	var_48_int = 0; var_49_int = 0;
	var_50_bool = var_47_object == 0; //@nz
	if(var_50_bool != 0) {
		return 2;
	}
	@@var_47_object:GetProperty("noaccess", var_49_int);
	var_53_bool = var_49_int > (int)1;
	if(var_53_bool != 0) {
		var_56_int = var_49_int - (int)1;
		@@var_47_object:SetProperty("noaccess", var_56_int);
	} else {
		@@var_47_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_75(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj();
	FindActor(var_26_object, "player");
	var_26_object = var_24_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_139(var_16_object, var_17_object, var_18_string, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj();
	AddScriptedActor(var_21_object, var_18_string, var_19_string, var_17_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_21_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_82(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0;
	var_35_bool = var_30_object == 0; //@nz
	if(var_35_bool != 0) {
		return 4;
	}
	@@var_30_object:HasProperty("noaccess", var_33_bool);
	var_37_bool = var_33_bool;
	if(var_37_bool != 0) {
		@@var_30_object:GetProperty("noaccess", var_34_int);
		var_41_int = var_34_int + (int)1;
		@@var_30_object:SetProperty("noaccess", var_41_int);
	} else {
		@@var_30_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_147(var_60_bool, var_61_string, var_62_string)
{
	var_63_object = Obj(); var_64_object = Obj();
	FindActor(var_64_object, var_61_string);
	var_65_bool = var_64_object == 0; //@ne
	if(var_65_bool != 0) {
		var_60_bool = 0;
		return 2;
	}
	Trigger(var_64_object, var_62_string);
	var_60_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_125(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj();
	self(var_68_object);
	var_68_object = var_66_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_159()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


