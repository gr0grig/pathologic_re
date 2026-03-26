// @IMPORTS: SetVariable/2,GetSceneByName/2,Trace/1,AddActorByType/6,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1
// @STRINGS: W:d1q04|W:r2_house_2_02|W:pt_powder|A:GetLocator|W:Locator doesn't exist for qd1_04_powder|W:scripted_container|W:d1q04_item_powder.xml|W:fail|W:completed
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x1b vars=string
// @EVENT_9: op=0x61 vars=int,float
// @PE: 0x1b,0x61

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "fail";
	if(var_3_bool != 0) {
		func_52();
	} else {
		var_10_bool = var_1_string == "completed";
		if(var_10_bool == 0) goto Label_43;
		func_44();
	}
Label_43:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_60();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_bool = 0; var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0);
	SetVariable("d1q04", (int)1);
	GetSceneByName(var_5_object, "r2_house_2_02");
	@@var_5_object:GetLocator("pt_powder", var_6_bool, var_7_cvector, var_8_cvector);
	var_13_bool = var_6_bool == 0; //@nz
	if(var_13_bool != 0) {
		Trace("Locator doesn't exist for qd1_04_powder");
	} else {
		AddActorByType(var_0_object, "scripted_container", var_5_object, var_7_cvector, var_8_cvector, "d1q04_item_powder.xml");
	}
	var_15_int = 0;
	func_78((int)1);
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_102(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	self(var_23_object);
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_71()
{
	EventDisable(26);
	var_21_object = Obj();
	func_102(var_21_object);
	RemoveActor(var_21_object);
	return 0;
}


func_44()
{
	SetVariable("d1q04", (int)1000);
	func_71();
	return 0;
}


func_78(var_15_int)
{
	var_16_float = 0; var_17_float = 0;
	GetGameTime(var_17_float);
	var_19_float = var_15_int * (int)24;
	var_20_bool = var_17_float >= var_19_float;
	if(var_20_bool != 0) {
		func_71();
	} else {
		var_26_float = var_15_int * (int)24;
		SetTimeEvent((int)0, var_26_float);
		Hold();
	}
	return 2;
	
}


func_52()
{
	SetVariable("d1q04", (int)-1);
	func_71();
	return 0;
}


func_60()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d1q04", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_52();
	}
	return 2;
}


