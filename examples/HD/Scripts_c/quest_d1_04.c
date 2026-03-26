// @IMPORTS: SetVariable/2,GetSceneByName/2,Trace/1,AddActorByType/6,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,FindActor/2
// @STRINGS: W:d1q04|W:r2_house_2_02|W:pt_powder|A:GetLocator|W:Locator doesn't exist for d1_04_powder|W:scripted_container|W:d1q04_item_powder.xml|W:r2_house_2_02@door1|W:r2_house_2_02@door2|W:fail|W:completed|W:Door |W: not found|W:locked|A:SetProperty
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x25 vars=string
// @EVENT_9: op=0x6b vars=int,float
// @PE: 0x25,0x6b

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "fail";
	if(var_3_bool != 0) {
		func_62();
	} else {
		var_10_bool = var_1_string == "completed";
		if(var_10_bool == 0) goto Label_53;
		func_54();
	}
Label_53:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_70();
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
		Trace("Locator doesn't exist for d1_04_powder");
	} else {
		AddActorByType(var_0_object, "scripted_container", var_5_object, var_7_cvector, var_8_cvector, "d1q04_item_powder.xml");
	}
	var_15_string = ""; var_16_bool = 0;
	func_118("r2_house_2_02@door1", (bool)0);
	var_25_string = ""; var_26_bool = 0;
	func_118("r2_house_2_02@door2", (bool)0);
	var_27_int = 0;
	func_88((int)1);
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_70()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d1q04", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_62();
	}
	return 2;
}


func_112(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj();
	self(var_35_object);
	var_35_object = var_33_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81()
{
	EventDisable(26);
	var_33_object = Obj();
	func_112(var_33_object);
	RemoveActor(var_33_object);
	return 0;
}


func_118(var_15_string, var_16_bool)
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, var_15_string);
	var_19_bool = var_18_object == 0; //@nz
	if(var_19_bool != 0) {
		var_21_int = "Door " + var_15_string;
		var_23_int = var_21_int + " not found";
		Trace(var_23_int);
	} else {
		@@var_18_object:SetProperty("locked", var_16_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_54()
{
	SetVariable("d1q04", (int)1000);
	func_81();
	return 0;
}


func_88(var_27_int)
{
	var_28_float = 0; var_29_float = 0;
	GetGameTime(var_29_float);
	var_31_float = var_27_int * (int)24;
	var_32_bool = var_29_float >= var_31_float;
	if(var_32_bool != 0) {
		func_81();
	} else {
		var_38_float = var_27_int * (int)24;
		SetTimeEvent((int)0, var_38_float);
		Hold();
	}
	return 2;
	
}


func_62()
{
	SetVariable("d1q04", (int)-1);
	func_81();
	return 0;
}


