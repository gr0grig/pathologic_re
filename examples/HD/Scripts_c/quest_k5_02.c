// @IMPORTS: SetVariable/2,GetSceneByName/2,Trigger/2,Trace/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:k5q02|W:shouse1_kabak|W:noandrei|W:pt_k5q02_patrol1|W:pers_patrool|W:k5q02_patrol.xml|W:pt_k5q02_patrol2|W:init_kabak|W:pt_k5q02_kabatchik|W:pers_dohodyaga|W:k5q02_kabatchik.xml|W:place_andrei|W:cleanup|W:completed|A:GetLocator|W:Locator |W: doesn't exist
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x21 vars=string
// @EVENT_9: op=0xa1 vars=int,float
// @PE: 0xa1

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj();
	Trace(var_3_string);
	var_9_bool = var_3_string == "init_kabak";
	if(var_9_bool != 0) {
		GetSceneByName(var_6_object, "shouse1_kabak");
		var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = "";
		var_6_object = var_12_object;
		func_172(var_11_object, var_12_object, "pt_k5q02_kabatchik", "pers_dohodyaga", "k5q02_kabatchik.xml");
		var_2_object = var_11_object;
		var_6_object = 0;
	} else {
		var_30_bool = var_3_string == "place_andrei";
		if(var_30_bool != 0) {
			GetSceneByName(var_7_object, "shouse1_kabak");
			Trigger(var_7_object, "andrei");
			var_33_object = var_2_object;
			if(var_33_object != 0) {
				Trigger(var_2_object, "cleanup");
			}
			var_35_object = var_0_object;
			if(var_35_object != 0) {
				Trigger(var_0_object, "cleanup");
			}
			var_37_object = var_1_object;
			if(var_37_object != 0) {
				Trigger(var_1_object, "cleanup");
			}
			var_7_object = 0;
			goto Label_84;
		}
		var_40_bool = var_3_string == "completed";
		if(var_40_bool == 0) goto Label_84;
		func_104();
	}
Label_84:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_85();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	SetVariable("k5q02", (int)1);
	GetSceneByName(var_4_object, "shouse1_kabak");
	Trigger(var_4_object, "noandrei");
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = "";
	var_4_object = var_10_object;
	func_172(var_9_object, var_10_object, "pt_k5q02_patrol1", "pers_patrool", "k5q02_patrol.xml");
	var_0_object = var_9_object;
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
	var_4_object = var_28_object;
	func_172(var_27_object, var_28_object, "pt_k5q02_patrol2", "pers_patrool", "k5q02_patrol.xml");
	var_1_object = var_27_object;
	var_32_int = 0;
	func_142((int)5);
	return 2;
}
EMIT "Stack[-1] = 0";


func_96()
{
	SetVariable("k5q02", (int)-1);
	func_112(var_4_float, var_5_int, var_6_int);
	return 0;
}


func_166(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj();
	self(var_50_object);
	var_50_object = var_48_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_104()
{
	SetVariable("k5q02", (int)1000);
	func_112(var_5_object, var_6_object, var_7_object);
	return 0;
}


func_172(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
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


func_142(var_32_int)
{
	var_33_float = 0; var_34_float = 0;
	GetGameTime(var_34_float);
	var_36_float = var_32_int * (int)24;
	var_37_bool = var_34_float >= var_36_float;
	if(var_37_bool != 0) {
		func_112(var_32_int, var_33_float, var_34_float);
	} else {
		var_53_float = var_32_int * (int)24;
		SetTimeEvent((int)0, var_53_float);
		Hold();
	}
	return 2;
	
}


func_112(var_0_object, var_1_object, var_2_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	EventDisable(26);
	var_40_object = var_2_object;
	if(var_40_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_42_object = var_0_object;
	if(var_42_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_44_object = var_1_object;
	if(var_44_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	GetSceneByName(var_39_object, "shouse1_kabak");
	Trigger(var_39_object, "andrei");
	var_48_object = Obj();
	func_166(var_48_object);
	RemoveActor(var_48_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_85()
{
	var_5_int = 0; var_6_int = 0;
	GetVariable("k5q02", var_6_int);
	var_9_bool = var_6_int != (int)1000;
	if(var_9_bool != 0) {
		func_96();
	}
	return 2;
}


