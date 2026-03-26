// @IMPORTS: GetMainOutdoorScene/1,AddActor/6,sync/0,Trigger/2,SetVariable/2,Trace/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1
// @STRINGS: W:pt_d3q01_gpatrol1|W:pers_patrool|W:b3q04_gpatrol.xml|W:d3q01_graveyard_fire|W:d3q01_graveyard_fire.xml|W:put_item|W:b3q04|W:fail|W:completed|A:Remove|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @GLOBALS: 0:object:
// @RUN_OP: 0x18
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x24 vars=string
// @EVENT_9: op=0x73 vars=int,float
// @PE: 0x24,0x73

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	Trace(var_2_string);
	var_4_bool = var_2_string == "fail";
	if(var_4_bool != 0) {
		func_64();
	} else {
		var_14_bool = var_2_string == "completed";
		if(var_14_bool == 0) goto Label_52;
		func_72();
	}
Label_52:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_53();
	return 0;
}


main(var_0_object, var_1_object)
{
	SetVariable("b3q04", (int)1);
	func_0(var_0_object, var_1_object);
	var_29_int = 0;
	func_96((int)3);
	return 0;
}


func_0(var_0_object, var_1_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	GetMainOutdoorScene(var_5_object);
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = "";
	var_5_object = var_7_object;
	func_126(var_6_object, var_7_object, "pt_d3q01_gpatrol1", "pers_patrool", "b3q04_gpatrol.xml");
	var_0_object = var_6_object;
	AddActor(var_1_object, "d3q01_graveyard_fire", var_5_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d3q01_graveyard_fire.xml");
	sync();
	Trigger(var_1_object, "put_item");
	return 2;
}
EMIT "Stack[-1] = 0";


func_64()
{
	SetVariable("b3q04", (int)-1);
	func_80(var_4_int, var_5_int);
	return 0;
}


func_96(var_29_int)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_33_float = var_29_int * (int)24;
	var_34_bool = var_31_float >= var_33_float;
	if(var_34_bool != 0) {
		func_80(var_30_float, var_31_float);
	} else {
		var_43_float = var_29_int * (int)24;
		SetTimeEvent((int)0, var_43_float);
		Hold();
	}
	return 2;
	
}


func_72()
{
	SetVariable("b3q04", (int)1000);
	func_80(var_1_object, var_2_string);
	return 0;
}


func_80(var_0_object, var_1_object)
{
	EventDisable(26);
	var_35_object = var_0_object;
	if(var_35_object != 0) {
		@@@var_0_object:Remove();
	}
	var_36_object = var_1_object;
	if(var_36_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_38_object = Obj();
	func_120(var_38_object);
	RemoveActor(var_38_object);
	return 0;
}


func_53()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("b3q04", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_64();
	}
	return 2;
}


func_120(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj();
	self(var_40_object);
	var_40_object = var_38_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_126(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj();
	@@var_7_object:GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	var_19_bool = var_15_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_21_int = "Locator " + var_8_string;
		var_23_int = var_21_int + " doesn't exist";
		Trace(var_23_int);
	} else {
		@@var_7_object:AddStationaryActor(Obj(), var_16_cvector, var_17_cvector, var_9_string, var_10_string);
	}
	var_18_object = var_6_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


