// @IMPORTS: GetMainOutdoorScene/1,Trace/1,GetVariable/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1
// @STRINGS: W:pt_b2q02_gatherer|W:pers_morlok|W:b2q02_gatherer.xml|W:pt_b2q02_bride1|W:pers_nudegirl|W:b2q02_bride.xml|W:move_bride|A:Remove|W:fail|W:completed|W:b2q02|W:pt_b2q02_bride2|W:b2q02_bride2.xml|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,bool params=0
// @EVENT_26: op=0x19 vars=string
// @EVENT_9: op=0x85 vars=int,float
// @PE: 0x19,0x85

task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_string)
{
	Trace(var_3_string);
	var_5_bool = var_3_string == "move_bride";
	if(var_5_bool != 0) {
		var_2_bool = true;
		var_6_object = var_1_object;
		if(var_6_object != 0) {
			@@@var_1_object:Remove();
		}
	} else {
		var_8_bool = var_3_string == "fail";
		if(var_8_bool != 0) {
			func_62();
			goto Label_50;
		}
		var_43_bool = var_3_string == "completed";
		if(var_43_bool == 0) goto Label_50;
		func_70();
	}
Label_50:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_bool, var_3_int, var_4_float)
{
	func_51();
	return 0;
}


main(var_0_object, var_1_object, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj();
	GetMainOutdoorScene(var_4_object);
	var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = ""; var_9_string = "";
	var_4_object = var_6_object;
	func_144(var_5_object, var_6_object, "pt_b2q02_gatherer", "pers_morlok", "b2q02_gatherer.xml");
	var_0_object = var_5_object;
	var_23_object = Obj(); var_24_object = Obj(); var_25_string = ""; var_26_string = ""; var_27_string = "";
	var_4_object = var_24_object;
	func_144(var_23_object, var_24_object, "pt_b2q02_bride1", "pers_nudegirl", "b2q02_bride.xml");
	var_1_object = var_23_object;
	var_28_int = 0;
	func_114((int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_70()
{
	SetVariable("b2q02", (int)1000);
	func_78(var_2_bool, var_3_string);
	return 0;
}


func_138(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj();
	self(var_46_object);
	var_46_object = var_44_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_78(var_0_object, var_1_object)
{
	var_34_object = Obj(); var_35_object = Obj();
	EventDisable(26);
	var_36_object = var_1_object;
	if(var_36_object != 0) {
		@@@var_1_object:Remove();
	}
	var_37_object = var_0_object;
	if(var_37_object != 0) {
		@@@var_0_object:Remove();
	}
	GetMainOutdoorScene(var_35_object);
	var_38_bool = var_2_bool;
	if(var_38_bool != 0) {
		var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = "";
		var_35_object = var_40_object;
		func_144(var_39_object, var_40_object, "pt_b2q02_bride2", "pers_nudegirl", "b2q02_bride2.xml");
	} else {
		var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = "";
		var_35_object = var_48_object;
		func_144(var_47_object, var_48_object, "pt_b2q02_bride1", "pers_nudegirl", "b2q02_bride2.xml");
	}
	var_44_object = Obj();
	func_138(var_44_object);
	RemoveActor(var_44_object);
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_144(var_5_object, var_6_object, var_7_string, var_8_string, var_9_string)
{
	var_10_bool = 0; var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_object = Obj(); var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj();
	@@var_6_object:GetLocator(var_7_string, var_14_bool, var_15_cvector, var_16_cvector);
	var_18_bool = var_14_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_20_int = "Locator " + var_7_string;
		var_22_int = var_20_int + " doesn't exist";
		Trace(var_22_int);
	} else {
		@@var_6_object:AddStationaryActor(Obj(), var_15_cvector, var_16_cvector, var_8_string, var_9_string);
	}
	var_17_object = var_5_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_114(var_28_int)
{
	var_29_float = 0; var_30_float = 0;
	GetGameTime(var_30_float);
	var_32_float = var_28_int * (int)24;
	var_33_bool = var_30_float >= var_32_float;
	if(var_33_bool != 0) {
		func_78(var_29_float, var_30_float);
	} else {
		var_54_float = var_28_int * (int)24;
		SetTimeEvent((int)0, var_54_float);
		Hold();
	}
	return 2;
	
}


func_51()
{
	var_5_int = 0; var_6_int = 0;
	GetVariable("b2q02", var_6_int);
	var_9_bool = var_6_int != (int)1000;
	if(var_9_bool != 0) {
		func_62();
	}
	return 2;
}


func_62()
{
	SetVariable("b2q02", (int)-1);
	func_78(var_5_int, var_6_int);
	return 0;
}


