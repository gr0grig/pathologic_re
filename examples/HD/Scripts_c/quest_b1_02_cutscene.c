// @IMPORTS: GetSceneByName/2,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,CameraSwitchToNormal/0,Teleport/4,RemoveActor/1,FindActor/2,self/1,Trace/1,AddActor/6,AddScriptedActor/6,SetSepia/2
// @STRINGS: W:storojka|W:cs_b1q02_worker|W:cs_play_all.bin|W:space|W:cs_b1q02.mot|W:pt_cs_player|A:GetLocator|W:pt_b1q02_worker|W:pers_worker|W:b1q02_worker.xml|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_24: op=0x41 vars=int
// @PE: 0x41

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0);
	GetSceneByName(var_6_object, "storojka");
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = "";
	var_6_object = var_14_object;
	func_143(var_13_object, var_14_object, "cs_b1q02_worker", "cs_play_all.bin");
	var_13_object = var_7_object;
	func_69(Obj());
	var_21_object = var_8_object;
	func_151();
	var_27_object = Obj();
	var_8_object = var_27_object;
	func_76(var_27_object);
	RegisterKeyCallback("space");
	CameraPlay("cs_b1q02.mot");
	CameraWaitForPlayFinish();
	UnregisterKeyCallback("space");
	var_44_object = Obj();
	var_8_object = var_44_object;
	func_99(var_44_object);
	CameraSwitchToNormal();
	func_156();
	@@var_6_object:GetLocator("pt_cs_player", var_9_bool, var_10_cvector, var_11_cvector);
	Teleport(var_8_object, var_6_object, var_10_cvector, var_11_cvector);
	RemoveActor(var_7_object);
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = "";
	var_6_object = var_59_object;
	func_125(var_58_object, var_59_object, "pt_b1q02_worker", "pers_worker", "b1q02_worker.xml");
	var_76_object = Obj();
	func_119(var_76_object);
	RemoveActor(var_76_object);
	return 12;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";


func_99(var_44_object)
{
	var_45_int = 0; var_46_int = 0;
	var_47_bool = var_44_object == 0; //@nz
	if(var_47_bool != 0) {
		return 2;
	}
	@@var_44_object:GetProperty("noaccess", var_46_int);
	var_50_bool = var_46_int > (int)1;
	if(var_50_bool != 0) {
		var_53_int = var_46_int - (int)1;
		@@var_44_object:SetProperty("noaccess", var_53_int);
	} else {
		@@var_44_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_69(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	FindActor(var_23_object, "player");
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_76(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0;
	var_32_bool = var_27_object == 0; //@nz
	if(var_32_bool != 0) {
		return 4;
	}
	@@var_27_object:HasProperty("noaccess", var_30_bool);
	var_34_bool = var_30_bool;
	if(var_34_bool != 0) {
		@@var_27_object:GetProperty("noaccess", var_31_int);
		var_38_int = var_31_int + (int)1;
		@@var_27_object:SetProperty("noaccess", var_38_int);
	} else {
		@@var_27_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_143(var_13_object, var_14_object, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj();
	AddScriptedActor(var_18_object, var_15_string, var_16_string, var_14_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_18_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_119(var_76_object)
{
	var_77_object = Obj(); var_78_object = Obj();
	self(var_78_object);
	var_78_object = var_76_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_151()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_156()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_125(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string)
{
	var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_object = Obj(); var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_object = Obj();
	@@var_59_object:GetLocator(var_60_string, var_67_bool, var_68_cvector, var_69_cvector);
	var_71_bool = var_67_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_73_int = "Locator " + var_60_string;
		var_75_int = var_73_int + " doesn't exist";
		Trace(var_75_int);
	} else {
		AddActor(Obj(), var_61_string, var_59_object, var_68_cvector, var_69_cvector, var_62_string);
	}
	var_70_object = var_58_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


