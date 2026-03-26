// @IMPORTS: SetVariable/2,GetMainOutdoorScene/1,Trace/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,FindActor/2
// @STRINGS: W:k7q02|W:gatherer3|W:pt_gatherer3|W:pers_morlok|W:k7q02_gatherer.xml|W:place_gatherer|W:completed|A:Remove|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x19 vars=string
// @EVENT_9: op=0x60 vars=int,float
// @PE: 0x19,0x60

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "place_gatherer";
	if(var_3_bool != 0) {
	} else {
		var_5_bool = var_1_string == "completed";
		if(var_5_bool == 0) goto Label_38;
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
	SetVariable("k7q02", (int)1);
	var_5_bool = 0; var_6_string = "";
	func_125(var_5_bool, "gatherer3");
	GetMainOutdoorScene(var_2_object);
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = "";
	var_2_object = var_11_object;
	func_107(var_10_object, var_11_object, "pt_gatherer3", "pers_morlok", "k7q02_gatherer.xml");
	var_0_object = var_10_object;
	var_28_int = 0;
	func_77((int)7);
	return 2;
}
EMIT "Stack[-1] = 0";


func_66(var_0_object)
{
	EventDisable(26);
	var_34_object = var_0_object;
	if(var_34_object != 0) {
		@@@var_0_object:Remove();
	}
	var_35_object = Obj();
	func_101(var_35_object);
	RemoveActor(var_35_object);
	return 0;
}


func_101(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj();
	self(var_37_object);
	var_37_object = var_35_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_39()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("k7q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_50();
	}
	return 2;
}


func_107(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	@@var_11_object:GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	var_23_bool = var_19_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_25_int = "Locator " + var_12_string;
		var_27_int = var_25_int + " doesn't exist";
		Trace(var_27_int);
	} else {
		@@var_11_object:AddStationaryActor(Obj(), var_20_cvector, var_21_cvector, var_13_string, var_14_string);
	}
	var_22_object = var_10_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_77(var_28_int)
{
	var_29_float = 0; var_30_float = 0;
	GetGameTime(var_30_float);
	var_32_float = var_28_int * (int)24;
	var_33_bool = var_30_float >= var_32_float;
	if(var_33_bool != 0) {
		func_66(var_30_float);
	} else {
		var_40_float = var_28_int * (int)24;
		SetTimeEvent((int)0, var_40_float);
		Hold();
	}
	return 2;
	
}


func_50()
{
	SetVariable("k7q02", (int)-1);
	func_66(var_4_int);
	return 0;
}


func_58()
{
	SetVariable("k7q02", (int)1000);
	func_66(var_1_string);
	return 0;
}


func_125(var_5_bool, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj();
	FindActor(var_8_object, var_6_string);
	var_9_bool = var_8_object == 0; //@nz
	if(var_9_bool != 0) {
		var_5_bool = 0;
		return 2;
	}
	RemoveActor(var_8_object);
	var_5_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


