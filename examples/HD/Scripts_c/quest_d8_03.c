// @IMPORTS: Trace/1,GetSceneByName/2,GetVariable/2,SetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:termitnik_load|W:termitnik|W:pt_d8q03_burah|W:NPC_Burah|W:d8q03_burah.xml|W:fail|W:completed|W:d8q03|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,bool params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_9: op=0x67 vars=int,float
// @PE: 0x67

task_0_event_26(var_0_object, var_1_bool, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj();
	Trace(var_2_string);
	var_5_bool = 0;
	var_5_bool = 0;
	var_7_bool = var_2_string == "termitnik_load";
	if(var_7_bool != 0) {
		var_8_bool = var_1_bool == 0; //@nz
		if(var_8_bool != 0) {
			var_5_bool = 1;
		}
	}
	if(var_5_bool != 0) {
		GetSceneByName(var_4_object, "termitnik");
		var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = "";
		var_4_object = var_11_object;
		func_114(var_10_object, var_11_object, "pt_d8q03_burah", "NPC_Burah", "d8q03_burah.xml");
		var_0_object = var_10_object;
		var_1_bool = true;
		var_4_object = 0;
	} else {
		var_29_bool = var_2_string == "fail";
		if(var_29_bool != 0) {
			func_56();
			goto Label_44;
		}
		var_38_bool = var_2_string == "completed";
		if(var_38_bool == 0) goto Label_44;
		func_64();
	}
Label_44:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_bool, var_2_int, var_3_float)
{
	func_45();
	return 0;
}


main(var_0_object, var_1_bool)
{
	var_2_int = 0;
	func_84((int)8);
	return 0;
}


func_64()
{
	SetVariable("d8q03", (int)1000);
	func_72(var_4_object);
	return 0;
}


func_72(var_0_object)
{
	EventDisable(26);
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_10_object = Obj();
	func_108(var_10_object);
	RemoveActor(var_10_object);
	return 0;
}


func_108(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_45()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("d8q03", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_56();
	}
	return 2;
}


func_114(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	@@var_11_object:GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	var_23_bool = var_19_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_25_int = "Locator " + var_12_string;
		var_27_int = var_25_int + " doesn't exist";
		Trace(var_27_int);
	} else {
		AddActor(Obj(), var_13_string, var_11_object, var_20_cvector, var_21_cvector, var_14_string);
	}
	var_22_object = var_10_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_84(var_2_int)
{
	var_3_float = 0; var_4_float = 0;
	GetGameTime(var_4_float);
	var_6_float = var_2_int * (int)24;
	var_7_bool = var_4_float >= var_6_float;
	if(var_7_bool != 0) {
		func_72(var_4_float);
	} else {
		var_15_float = var_2_int * (int)24;
		SetTimeEvent((int)0, var_15_float);
		Hold();
	}
	return 2;
	
}


func_56()
{
	SetVariable("d8q03", (int)-1);
	func_72(var_5_int);
	return 0;
}


