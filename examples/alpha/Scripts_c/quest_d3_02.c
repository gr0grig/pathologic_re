// @IMPORTS: SetVariable/2,AddScriptedActor/5,Trace/1,Trigger/2,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,GetSceneByName/2,AddActor/6
// @STRINGS: W:d3q02|W:r7_house2_01|W:pt_d3q02_butcher|W:pers_butcher|W:d3q02_butcher.xml|W:d3q02_corpse|W:actor_disp.bin|W:d3q02_btrigger|W:quest_d3_02_btrigger.bin|W:butcher_trigger|W:d3q02SeeCorpse|W:completed|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x22 vars=string
// @EVENT_9: op=0x92 vars=int,float
// @PE: 0x22,0x92

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	Trace(var_3_string);
	var_5_bool = var_3_string == "butcher_trigger";
	if(var_5_bool != 0) {
		var_6_object = var_0_object;
		if(var_6_object != 0) {
			Trigger(var_0_object, "trigger");
		}
		func_101(var_1_object, var_2_object, var_3_string);
		SetVariable("d3q02SeeCorpse", (int)1);
	} else {
		var_17_bool = var_3_string == "completed";
		if(var_17_bool == 0) goto Label_59;
		func_79();
	}
Label_59:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_60();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	SetVariable("d3q02", (int)1);
	var_7_object = Obj(); var_8_string = "";
	func_157(var_7_object, "r7_house2_01");
	var_7_object = var_4_object;
	var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = "";
	var_4_object = var_12_object;
	func_163(var_11_object, var_12_object, "pt_d3q02_butcher", "pers_butcher", "d3q02_butcher.xml");
	var_0_object = var_11_object;
	AddScriptedActor(var_1_object, "d3q02_corpse", "actor_disp.bin", var_4_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_2_object, "d3q02_btrigger", "quest_d3_02_btrigger.bin", var_4_object, CVector(0.0, 0.0, 0.0));
	var_35_int = 0;
	func_127((int)3);
	return 2;
}
EMIT "Stack[-1] = 0";


func_163(var_11_object, var_12_object, var_13_string, var_14_string, var_15_string)
{
	var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj();
	@@var_12_object:GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector);
	var_24_bool = var_20_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_26_int = "Locator " + var_13_string;
		var_28_int = var_26_int + " doesn't exist";
		Trace(var_28_int);
	} else {
		AddActor(Obj(), var_14_string, var_12_object, var_21_cvector, var_22_cvector, var_15_string);
	}
	var_23_object = var_11_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_101(var_0_object, var_1_object, var_2_object)
{
	var_41_object = var_0_object;
	if(var_41_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_43_object = var_1_object;
	if(var_43_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_45_object = var_2_object;
	if(var_45_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	return 0;
}


func_71()
{
	SetVariable("d3q02", (int)-1);
	func_117();
	return 0;
}


func_79()
{
	var_18_int = 0; var_19_int = 0;
	GetVariable("d3q02", var_19_int);
	var_21_bool = 0;
	var_21_bool = 0;
	var_23_bool = var_19_int != (int)1000;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int != (int)-1;
		if(var_25_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		SetVariable("d3q02", (int)1000);
		func_117();
	}
	return 2;
}


func_117()
{
	EventDisable(26);
	func_101(var_35_int, var_36_float, var_37_float);
	var_47_object = Obj();
	func_151(var_47_object);
	RemoveActor(var_47_object);
	return 0;
}


func_151(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj();
	self(var_49_object);
	var_49_object = var_47_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_60()
{
	var_5_int = 0; var_6_int = 0;
	GetVariable("d3q02", var_6_int);
	var_9_bool = var_6_int != (int)1000;
	if(var_9_bool != 0) {
		func_71();
	}
	return 2;
}


func_157(var_7_object, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj();
	GetSceneByName(var_10_object, var_8_string);
	var_10_object = var_7_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_127(var_35_int)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_39_float = var_35_int * (int)24;
	var_40_bool = var_37_float >= var_39_float;
	if(var_40_bool != 0) {
		func_117();
	} else {
		var_52_float = var_35_int * (int)24;
		SetTimeEvent((int)0, var_52_float);
		Hold();
	}
	return 2;
	
}


