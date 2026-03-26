// @IMPORTS: GetGameTime/1,GetSceneByName/2,Trace/1,GetVariable/2,SetVariable/2,Trigger/2,RemoveActor/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,AddMessage/4,SendWorldWndMessage/1
// @STRINGS: W:cot_eva|W:pt_d8q02_doberman1|W:pers_doberman|W:d8q02_doberman.xml|W:pt_d8q02_doberman2|W:pt_d8q02_doberman3|W:d8q02 dobermans are placed|W:fail|W:completed|W:d8q02|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x31 vars=string
// @EVENT_9: op=0x86 vars=int,float
// @PE: 0x31,0x86,0xac

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	Trace(var_3_string);
	var_5_bool = var_3_string == "fail";
	if(var_5_bool != 0) {
		func_77();
	} else {
		var_18_bool = var_3_string == "completed";
		if(var_18_bool == 0) goto Label_65;
		func_85();
	}
Label_65:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_66();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_float = 0; var_4_object = Obj(); var_5_float = 0; var_6_object = Obj();
	GetGameTime(var_5_float);
	var_7_int = 0;
	func_163(var_7_int);
	var_14_bool = var_7_int == (int)8;
	if(var_14_bool != 0) {
		var_15_int = 0; var_16_float = 0;
		var_5_float = var_16_float;
		func_172(var_15_int, var_16_float);
	}
	GetSceneByName(var_6_object, "cot_eva");
	var_25_object = Obj(); var_26_object = Obj(); var_27_string = ""; var_28_string = ""; var_29_string = "";
	var_6_object = var_26_object;
	func_145(var_25_object, var_26_object, "pt_d8q02_doberman1", "pers_doberman", "d8q02_doberman.xml");
	var_0_object = var_25_object;
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = "";
	var_6_object = var_44_object;
	func_145(var_43_object, var_44_object, "pt_d8q02_doberman2", "pers_doberman", "d8q02_doberman.xml");
	var_1_object = var_43_object;
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = "";
	var_6_object = var_49_object;
	func_145(var_48_object, var_49_object, "pt_d8q02_doberman3", "pers_doberman", "d8q02_doberman.xml");
	var_2_object = var_48_object;
	Trace("d8q02 dobermans are placed");
	var_54_int = 0;
	func_115((int)8);
	return 4;
}
EMIT "Stack[-1] = 0";


func_66()
{
	var_5_int = 0; var_6_int = 0;
	GetVariable("d8q02", var_6_int);
	var_9_bool = var_6_int != (int)1000;
	if(var_9_bool != 0) {
		func_77();
	}
	return 2;
}


func_163(var_7_int)
{
	var_8_float = 0; var_9_float = 0;
	GetGameTime(var_9_float);
	var_11_int = 0;
	var_11_int = var_9_float / (int)24;
	var_7_int = (int)1 + var_11_int;
	return 2;
}


func_139(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj();
	self(var_68_object);
	var_68_object = var_66_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_172(var_15_int, var_16_float)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_float = 0;
	var_16_float = var_20_float;
	func_181(var_17_int, (int)533303, (int)533302, var_20_float);
	var_17_int = var_15_int;
	return 0;
}


func_77()
{
	SetVariable("d8q02", (int)-1);
	func_93(var_4_float, var_5_int, var_6_int);
	return 0;
}


func_145(var_25_object, var_26_object, var_27_string, var_28_string, var_29_string)
{
	var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj();
	@@var_26_object:GetLocator(var_27_string, var_34_bool, var_35_cvector, var_36_cvector);
	var_38_bool = var_34_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_40_int = "Locator " + var_27_string;
		var_42_int = var_40_int + " doesn't exist";
		Trace(var_42_int);
	} else {
		AddActor(Obj(), var_28_string, var_26_object, var_35_cvector, var_36_cvector, var_29_string);
	}
	var_37_object = var_25_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_115(var_54_int)
{
	var_55_float = 0; var_56_float = 0;
	GetGameTime(var_56_float);
	var_58_float = var_54_int * (int)24;
	var_59_bool = var_56_float >= var_58_float;
	if(var_59_bool != 0) {
		func_93(var_54_int, var_55_float, var_56_float);
	} else {
		var_71_float = var_54_int * (int)24;
		SetTimeEvent((int)0, var_71_float);
		Hold();
	}
	return 2;
	
}


func_85()
{
	SetVariable("d8q02", (int)1000);
	func_93(var_1_object, var_2_object, var_3_string);
	return 0;
}


func_181(var_17_int, var_18_int, var_19_int, var_20_float)
{
	var_21_int = 0; var_22_int = 0;
	AddMessage(var_18_int, var_19_int, var_20_float, var_22_int);
	SendWorldWndMessage((int)6);
	var_22_int = var_17_int;
	return 2;
}


func_93(var_0_object, var_1_object, var_2_object)
{
	EventDisable(26);
	var_60_object = var_0_object;
	if(var_60_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_62_object = var_1_object;
	if(var_62_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_64_object = var_2_object;
	if(var_64_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_66_object = Obj();
	func_139(var_66_object);
	RemoveActor(var_66_object);
	return 0;
}


