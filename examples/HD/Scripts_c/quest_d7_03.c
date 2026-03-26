// @IMPORTS: Trace/1,GetSceneByName/2,RemoveActor/1,GetVariable/2,SetVariable/2,Trigger/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:init_house_petr|W:pt_d7q03_maria|W:NPC_Maria|W:d7q03_maria.xml|W:pt_d7q03_aglaja|W:NPC_Aglaja|W:d7q03_aglaja.xml|W:remove_maria|W:fail|W:completed|W:d7q03|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_9: op=0x75 vars=int,float
// @PE: 0x75

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj();
	Trace(var_2_string);
	var_6_bool = var_2_string == "init_house_petr";
	if(var_6_bool != 0) {
		GetSceneByName(var_4_object, "house_petr");
		var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = "";
		var_4_object = var_9_object;
		func_128(var_8_object, var_9_object, "pt_d7q03_maria", "NPC_Maria", "d7q03_maria.xml");
		var_0_object = var_8_object;
		var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = "";
		var_4_object = var_27_object;
		func_128(var_26_object, var_27_object, "pt_d7q03_aglaja", "NPC_Aglaja", "d7q03_aglaja.xml");
		var_1_object = var_26_object;
		var_4_object = 0;
	} else {
		var_32_bool = var_2_string == "remove_maria";
		if(var_32_bool != 0) {
			var_33_object = var_0_object;
			if(var_33_object != 0) {
				RemoveActor(var_0_object);
			}
			goto Label_53;
		}
		var_35_bool = var_2_string == "fail";
		if(var_35_bool != 0) {
			func_65();
			goto Label_53;
		}
		var_46_bool = var_2_string == "completed";
		if(var_46_bool == 0) goto Label_53;
		func_73();
	}
Label_53:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_54();
	return 0;
}


main(var_0_object, var_1_object)
{
	var_2_int = 0;
	func_98((int)7);
	return 0;
}


func_128(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj();
	@@var_9_object:GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	var_21_bool = var_17_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_23_int = "Locator " + var_10_string;
		var_25_int = var_23_int + " doesn't exist";
		Trace(var_25_int);
	} else {
		AddActor(Obj(), var_11_string, var_9_object, var_18_cvector, var_19_cvector, var_12_string);
	}
	var_20_object = var_8_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_65()
{
	SetVariable("d7q03", (int)-1);
	func_81(var_4_int, var_5_int);
	return 0;
}


func_98(var_2_int)
{
	var_3_float = 0; var_4_float = 0;
	GetGameTime(var_4_float);
	var_6_float = var_2_int * (int)24;
	var_7_bool = var_4_float >= var_6_float;
	if(var_7_bool != 0) {
		func_81(var_3_float, var_4_float);
	} else {
		var_17_float = var_2_int * (int)24;
		SetTimeEvent((int)0, var_17_float);
		Hold();
	}
	return 2;
	
}


func_73()
{
	SetVariable("d7q03", (int)1000);
	func_81(var_3_object, var_4_object);
	return 0;
}


func_81(var_0_object, var_1_object)
{
	EventDisable(26);
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_10_object = var_1_object;
	if(var_10_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_12_object = Obj();
	func_122(var_12_object);
	RemoveActor(var_12_object);
	return 0;
}


func_54()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("d7q03", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_65();
	}
	return 2;
}


func_122(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	self(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


