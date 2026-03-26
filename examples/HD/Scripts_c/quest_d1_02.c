// @IMPORTS: SetVariable/2,GetSceneByName/2,AddScriptedActor/5,Trigger/2,Trace/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:d1q02|W:cot_anna|W:cot_anna_corpse|W:actor_disp.bin|W:storojka|W:nolaska|W:init_storojka|W:pt_d1q02_salesman|W:pers_salesman|W:d1q02_salesman.xml|W:pt_d1q02_gorbun|W:pers_gorbun|W:d1q02_gorbun.xml|W:completed|W:fail|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x19 vars=string
// @EVENT_9: op=0x93 vars=int,float
// @PE: 0x93

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj();
	Trace(var_3_string);
	var_7_bool = var_3_string == "init_storojka";
	if(var_7_bool != 0) {
		GetSceneByName(var_5_object, "storojka");
		var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = "";
		var_5_object = var_10_object;
		func_158(var_9_object, var_10_object, "pt_d1q02_salesman", "pers_salesman", "d1q02_salesman.xml");
		var_1_object = var_9_object;
		var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
		var_5_object = var_28_object;
		func_158(var_27_object, var_28_object, "pt_d1q02_gorbun", "pers_gorbun", "d1q02_gorbun.xml");
		var_2_object = var_27_object;
		var_5_object = 0;
	} else {
		var_33_bool = var_3_string == "completed";
		if(var_33_bool != 0) {
			func_88();
			goto Label_65;
		}
		var_39_bool = var_3_string == "fail";
		if(var_39_bool == 0) goto Label_65;
		func_80();
	}
Label_65:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_66();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	SetVariable("d1q02", (int)1);
	GetSceneByName(var_4_object, "cot_anna");
	AddScriptedActor(var_0_object, "cot_anna_corpse", "actor_disp.bin", var_4_object, CVector(0.0, 0.0, 0.0));
	GetSceneByName(var_4_object, "storojka");
	Trigger(var_4_object, "nolaska");
	var_13_int = 0;
	func_128((int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_128(var_13_int)
{
	var_14_float = 0; var_15_float = 0;
	GetGameTime(var_15_float);
	var_17_float = var_13_int * (int)24;
	var_18_bool = var_15_float >= var_17_float;
	if(var_18_bool != 0) {
		func_103(var_14_float, var_15_float);
	} else {
		var_32_float = var_13_int * (int)24;
		SetTimeEvent((int)0, var_32_float);
		Hold();
	}
	return 2;
	
}


func_96(var_0_object)
{
	EventDisable(26);
	var_12_object = var_0_object;
	if(var_12_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	return 0;
}


func_66()
{
	var_5_int = 0; var_6_int = 0;
	GetVariable("d1q02", var_6_int);
	var_9_bool = var_6_int != (int)1000;
	if(var_9_bool != 0) {
		func_80();
	}
	func_103(var_5_int, var_6_int);
	return 2;
}


func_103(var_1_object, var_2_object)
{
	var_19_object = Obj(); var_20_object = Obj();
	EventDisable(26);
	GetSceneByName(var_20_object, "storojka");
	Trigger(var_20_object, "laska");
	var_23_object = var_2_object;
	if(var_23_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_25_object = var_1_object;
	if(var_25_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_27_object = Obj();
	func_152(var_27_object);
	RemoveActor(var_27_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_80()
{
	SetVariable("d1q02", (int)-1);
	func_96(var_6_int);
	return 0;
}


func_88()
{
	SetVariable("d1q02", (int)1000);
	func_96(var_5_object);
	return 0;
}


func_152(var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj();
	self(var_29_object);
	var_29_object = var_27_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_158(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	@@var_10_object:GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector);
	var_22_bool = var_18_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Locator " + var_11_string;
		var_26_int = var_24_int + " doesn't exist";
		Trace(var_26_int);
	} else {
		AddActor(Obj(), var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string);
	}
	var_21_object = var_9_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


