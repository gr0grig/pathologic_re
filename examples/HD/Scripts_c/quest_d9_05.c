// @IMPORTS: GetSceneByName/2,Trace/1,GetVariable/2,SetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:termitnik|W:pt_d9q03_burah|W:NPC_Burah|W:d9q05_burah.xml|W:init_soldiers|W:fail|W:completed|W:d9q05|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x12 vars=string
// @EVENT_9: op=0x61 vars=int,float
// @PE: 0x12,0x61

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "init_soldiers";
	if(var_3_bool != 0) {
	} else {
		var_5_bool = var_1_string == "fail";
		if(var_5_bool != 0) {
			func_50();
			goto Label_38;
		}
		var_14_bool = var_1_string == "completed";
		if(var_14_bool == 0) goto Label_38;
		func_58();
	}
Label_38:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_39();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	GetSceneByName(var_2_object, "termitnik");
	var_4_object = Obj(); var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_string = "";
	var_2_object = var_5_object;
	func_108(var_4_object, var_5_object, "pt_d9q03_burah", "NPC_Burah", "d9q05_burah.xml");
	var_0_object = var_4_object;
	var_22_int = 0;
	func_78((int)9);
	return 2;
}
EMIT "Stack[-1] = 0";


func_66(var_0_object)
{
	EventDisable(26);
	var_28_object = var_0_object;
	if(var_28_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_30_object = Obj();
	func_102(var_30_object);
	RemoveActor(var_30_object);
	return 0;
}


func_102(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	self(var_32_object);
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_39()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d9q05", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_50();
	}
	return 2;
}


func_108(var_4_object, var_5_object, var_6_string, var_7_string, var_8_string)
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


func_78(var_22_int)
{
	var_23_float = 0; var_24_float = 0;
	GetGameTime(var_24_float);
	var_26_float = var_22_int * (int)24;
	var_27_bool = var_24_float >= var_26_float;
	if(var_27_bool != 0) {
		func_66(var_24_float);
	} else {
		var_35_float = var_22_int * (int)24;
		SetTimeEvent((int)0, var_35_float);
		Hold();
	}
	return 2;
	
}


func_50()
{
	SetVariable("d9q05", (int)-1);
	func_66(var_4_int);
	return 0;
}


func_58()
{
	SetVariable("d9q05", (int)1000);
	func_66(var_1_string);
	return 0;
}


