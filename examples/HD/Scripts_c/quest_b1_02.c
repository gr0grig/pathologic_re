// @IMPORTS: GetSceneByName/2,Trace/1,SetVariable/2,RemoveActor/1,GetVariable/2,Trigger/2,CameraSwitchToNormal/0,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,GetMainOutdoorScene/1,AddBlankActor/4,AddActor/6
// @STRINGS: W:storojka|W:pt_b1q02_agony|W:pers_worker|W:b1q02_agony.xml|W:agony_dead|W:b1q02_dead|W:agony_cured|W:quest_b1_02_cutscene|W:fail|W:completed|W:b1q02|W:cleanup|W:.bin|A:GetLocator|W:Locator |W: doesn't exist
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x12 vars=string
// @EVENT_24: op=0x5d vars=int
// @EVENT_9: op=0x74 vars=int,float
// @PE: 0x12,0x5d,0x74

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "agony_dead";
	if(var_3_bool != 0) {
		SetVariable("b1q02_dead", (bool)1);
	} else {
		var_7_bool = var_1_string == "agony_cured";
		if(var_7_bool != 0) {
			RemoveActor(var_0_object);
			var_0_object = 0;
			var_8_object = Obj(); var_9_string = "";
			func_127(var_8_object, "quest_b1_02_cutscene");
			goto Label_53;
		}
		var_17_bool = var_1_string == "fail";
		if(var_17_bool != 0) {
			func_65();
			goto Label_53;
		}
		var_26_bool = var_1_string == "completed";
		if(var_26_bool == 0) goto Label_53;
		func_73();
	}
Label_53:
	return 0;
	
}


task_0_event_24(var_0_object, var_1_int)
{
	CameraSwitchToNormal();
	return 0;
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_54();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	GetSceneByName(var_2_object, "storojka");
	var_4_object = Obj(); var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_string = "";
	var_2_object = var_5_object;
	func_138(var_4_object, var_5_object, "pt_b1q02_agony", "pers_worker", "b1q02_agony.xml");
	var_0_object = var_4_object;
	var_22_int = 0;
	func_97((int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_65()
{
	SetVariable("b1q02", (int)-1);
	func_81(var_4_int);
	return 0;
}


func_97(var_22_int)
{
	var_23_float = 0; var_24_float = 0;
	GetGameTime(var_24_float);
	var_26_float = var_22_int * (int)24;
	var_27_bool = var_24_float >= var_26_float;
	if(var_27_bool != 0) {
		func_81(var_24_float);
	} else {
		var_35_float = var_22_int * (int)24;
		SetTimeEvent((int)0, var_35_float);
		Hold();
	}
	return 2;
	
}


func_73()
{
	SetVariable("b1q02", (int)1000);
	func_81(var_1_string);
	return 0;
}


func_138(var_4_object, var_5_object, var_6_string, var_7_string, var_8_string)
{
	var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj();
	@@var_5_object:GetLocator(var_6_string, var_13_bool, var_14_cvector, var_15_cvector);
	var_17_bool = var_13_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_19_int = "Locator " + var_6_string;
		var_21_int = var_19_int + " doesn't exist";
		Trace(var_21_int);
	} else {
		AddActor(Obj(), var_7_string, var_5_object, var_14_cvector, var_15_cvector, var_8_string);
	}
	var_16_object = var_4_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_81(var_0_object)
{
	EventDisable(26);
	var_28_object = var_0_object;
	if(var_28_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_30_object = Obj();
	func_121(var_30_object);
	RemoveActor(var_30_object);
	return 0;
}


func_54()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("b1q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_65();
	}
	return 2;
}


func_121(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	self(var_32_object);
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_127(var_8_object, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj();
	GetMainOutdoorScene(var_12_object);
	var_15_int = var_9_string + ".bin";
	AddBlankActor(var_13_object, var_12_object, var_9_string, var_15_int);
	var_13_object = var_8_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


