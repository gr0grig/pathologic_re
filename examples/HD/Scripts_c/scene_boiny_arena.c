// @IMPORTS: Hold/0,CameraPlay/1,CameraWaitForPlayFinish/0,CameraSwitchToNormal/0,RemoveActor/1,sync/0,FindActor/2,self/1,Trace/1,AddActor/6,AddScriptedActor/6,SetSepia/2
// @STRINGS: W:pt_avrox|W:pers_avrox|W:b11q01_avrox.xml|W:cs_b11q01_starshina|W:cs_play_all.bin|W:cs_b11q01.mot|W:pt_Starshina|W:pers_starshina_fight|W:b11q01_starshina.xml|W:player|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_5: op=0x4 vars=
// @EVENT_6: op=0x45 vars=

task_0_event_5(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj();
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = "";
	func_128(Obj());
	var_11_object = var_7_object;
	func_134(var_6_object, var_7_object, "pt_avrox", "pers_avrox", "b11q01_avrox.xml");
	var_1_object = var_6_object;
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = "";
	func_128(Obj());
	var_31_object = var_28_object;
	func_152(var_27_object, var_28_object, "cs_b11q01_starshina", "cs_play_all.bin");
	var_27_object = var_4_object;
	func_78(Obj());
	var_36_object = var_5_object;
	func_160();
	var_42_object = Obj();
	var_5_object = var_42_object;
	func_85(var_42_object);
	CameraPlay("cs_b11q01.mot");
	CameraWaitForPlayFinish();
	var_57_object = Obj();
	var_5_object = var_57_object;
	func_108(var_57_object);
	CameraSwitchToNormal();
	func_165();
	RemoveActor(var_4_object);
	sync();
	var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = ""; var_74_string = "";
	func_128(Obj());
	var_75_object = var_71_object;
	func_134(var_70_object, var_71_object, "pt_Starshina", "pers_starshina_fight", "b11q01_starshina.xml");
	var_0_object = var_70_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


task_0_event_6(var_0_object, var_1_object)
{
	var_2_object = var_0_object;
	if(var_2_object != 0) {
		RemoveActor(var_0_object);
	}
	var_3_object = var_1_object;
	if(var_3_object != 0) {
		RemoveActor(var_1_object);
	}
	return 0;
}


main(var_0_object, var_1_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_128(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_160()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_165()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_134(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	@@var_7_object:GetLocator(var_8_string, var_18_bool, var_19_cvector, var_20_cvector);
	var_22_bool = var_18_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Locator " + var_8_string;
		var_26_int = var_24_int + " doesn't exist";
		Trace(var_26_int);
	} else {
		AddActor(Obj(), var_9_string, var_7_object, var_19_cvector, var_20_cvector, var_10_string);
	}
	var_21_object = var_6_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_108(var_57_object)
{
	var_58_int = 0; var_59_int = 0;
	var_60_bool = var_57_object == 0; //@nz
	if(var_60_bool != 0) {
		return 2;
	}
	@@var_57_object:GetProperty("noaccess", var_59_int);
	var_63_bool = var_59_int > (int)1;
	if(var_63_bool != 0) {
		var_66_int = var_59_int - (int)1;
		@@var_57_object:SetProperty("noaccess", var_66_int);
	} else {
		@@var_57_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_78(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	FindActor(var_38_object, "player");
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_85(var_42_object)
{
	var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0;
	var_47_bool = var_42_object == 0; //@nz
	if(var_47_bool != 0) {
		return 4;
	}
	@@var_42_object:HasProperty("noaccess", var_45_bool);
	var_49_bool = var_45_bool;
	if(var_49_bool != 0) {
		@@var_42_object:GetProperty("noaccess", var_46_int);
		var_53_int = var_46_int + (int)1;
		@@var_42_object:SetProperty("noaccess", var_53_int);
	} else {
		@@var_42_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_152(var_27_object, var_28_object, var_29_string, var_30_string)
{
	var_32_object = Obj(); var_33_object = Obj();
	AddScriptedActor(var_33_object, var_29_string, var_30_string, var_28_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_33_object = var_27_object;
	return 2;
}
EMIT "Stack[-1] = 0";


