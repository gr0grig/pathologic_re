// @IMPORTS: Trace/1,GetSceneByName/2,AddActorByType/6,GetMainOutdoorScene/1,GetVariable/2,SetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,AddActor/6,FindActor/2
// @STRINGS: W:init_termitnik2|W:termitnik2@door1|W:pt_b7q02_mmorlok|W:pers_morlok|W:b7q02_mmorlok.xml|W:pt_b7q02_morlok|W:b7q02_morlok.xml|W:pt_b7q02_fog|A:GetLocator|W:fog_stat_indoor.xml|A:add|W:place_grabitels|W:pt_b7q02_grabitel1|W:pers_grabitel|W:b7q02_grabitel.xml|W:pt_b7q02_grabitel2|W:fail|W:completed|W:b7q02|W:cleanup|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_26: op=0xd vars=string
// @EVENT_9: op=0xb4 vars=int,float
// @PE: 0xb4

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_int = 0; var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_object = Obj();
	Trace(var_4_string);
	var_20_bool = var_4_string == "init_termitnik2";
	if(var_20_bool != 0) {
		var_21_string = ""; var_22_bool = 0;
		func_215("termitnik2@door1", (bool)0);
		GetSceneByName(var_12_object, "termitnik2");
		var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = "";
		var_12_object = var_33_object;
		func_197(var_32_object, var_33_object, "pt_b7q02_mmorlok", "pers_morlok", "b7q02_mmorlok.xml");
		var_1_object = var_32_object;
		var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = "";
		var_12_object = var_51_object;
		func_197(var_50_object, var_51_object, "pt_b7q02_morlok", "pers_morlok", "b7q02_morlok.xml");
		var_0_object = var_50_object;
		var_13_int = 1;

	Label_44:
		var_56_int = "pt_b7q02_fog" + var_13_int;
		@@var_12_object:GetLocator(var_56_int, var_14_bool, var_15_cvector, var_16_cvector);
		var_57_bool = var_14_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			AddActorByType(var_17_object, "fog", var_12_object, var_15_cvector, var_16_cvector, "fog_stat_indoor.xml");
			@@@var_2_object:add(var_17_object);
			var_17_object = 0;
			var_13_int = var_13_int + (int)1;
			goto Label_44;
	}
		var_62_bool = var_4_string == "place_grabitels";
		if(var_62_bool != 0) {
			GetMainOutdoorScene(var_18_object);
			var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = "";
			var_18_object = var_64_object;
			func_197(var_63_object, var_64_object, "pt_b7q02_grabitel1", "pers_grabitel", "b7q02_grabitel.xml");
			@@@var_3_object:add(var_63_object);
			var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = "";
			var_18_object = var_69_object;
			func_197(var_68_object, var_69_object, "pt_b7q02_grabitel2", "pers_grabitel", "b7q02_grabitel.xml");
			@@@var_3_object:add(var_68_object);
			var_18_object = 0;
			goto Label_101;
		}
		var_74_bool = var_4_string == "fail";
		if(var_74_bool != 0) {
			func_113();
			goto Label_101;
		}
		var_101_bool = var_4_string == "completed";
		if(var_101_bool == 0) goto Label_101;
		func_121();
	}
	var_12_object = 0;
	goto Label_101;
	
Label_101:
	return 14;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	func_102();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj();
	func_191(var_4_object);
	var_2_object = var_4_object;
	var_7_object = Obj();
	func_191(var_7_object);
	var_3_object = var_7_object;
	var_8_int = 0;
	func_161((int)7);
	return 0;
}


func_161(var_8_int)
{
	var_9_float = 0; var_10_float = 0;
	GetGameTime(var_10_float);
	var_12_float = var_8_int * (int)24;
	var_13_bool = var_10_float >= var_12_float;
	if(var_13_bool != 0) {
		func_129(var_3_object, var_8_int, var_9_float, var_10_float);
	} else {
		var_47_float = var_8_int * (int)24;
		SetTimeEvent((int)0, var_47_float);
		Hold();
	}
	return 2;
	
}


func_129(var_0_object, var_1_object, var_2_object, var_3_object)
{
	EventDisable(26);
	var_14_string = ""; var_15_bool = 0;
	func_215("termitnik2@door1", (bool)1);
	var_24_object = var_0_object;
	if(var_24_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_26_object = var_1_object;
	if(var_26_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_28_object = Obj(); var_29_string = "";
	var_28_object = var_2_object;
	func_232(var_28_object, "cleanup");
	var_40_object = Obj(); var_41_string = "";
	var_40_object = var_3_object;
	func_232(var_40_object, "cleanup");
	var_42_object = Obj();
	func_185(var_42_object);
	RemoveActor(var_42_object);
	return 0;
}


func_185(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj();
	self(var_44_object);
	var_44_object = var_42_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_197(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string)
{
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj();
	@@var_33_object:GetLocator(var_34_string, var_41_bool, var_42_cvector, var_43_cvector);
	var_45_bool = var_41_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_47_int = "Locator " + var_34_string;
		var_49_int = var_47_int + " doesn't exist";
		Trace(var_49_int);
	} else {
		AddActor(Obj(), var_35_string, var_33_object, var_42_cvector, var_43_cvector, var_36_string);
	}
	var_44_object = var_32_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_102()
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("b7q02", var_7_int);
	var_10_bool = var_7_int != (int)1000;
	if(var_10_bool != 0) {
		func_113();
	}
	return 2;
}


func_232(var_28_object, var_29_string)
{
	var_30_int = 0; var_31_int = 0; var_32_object = Obj(); var_33_int = 0; var_34_int = 0; var_35_object = Obj();
	var_36_object = var_28_object;
	if(var_36_object != 0) {
		@@var_28_object:size(var_33_int);
		var_34_int = 0;

	Label_238:
		var_37_bool = var_34_int < var_33_int;
		if(var_37_bool != 0) {
			@@var_28_object:get(var_35_object, var_34_int);
			var_38_object = var_35_object;
			if(var_38_object != 0) {
				Trigger(var_35_object, var_29_string);
			}
			var_35_object = 0;
			var_34_int = var_34_int + (int)1;
			goto Label_238;
		}
	}
	return 6;
}


func_113()
{
	SetVariable("b7q02", (int)-1);
	func_129(var_4_int, var_5_float, var_6_int, var_7_int);
	return 0;
}


func_215(var_14_string, var_15_bool)
{
	var_16_object = Obj(); var_17_object = Obj();
	FindActor(var_17_object, var_14_string);
	var_18_bool = var_17_object == 0; //@nz
	if(var_18_bool != 0) {
		var_20_int = "Door " + var_14_string;
		var_22_int = var_20_int + " not found";
		Trace(var_22_int);
	} else {
		@@var_17_object:SetProperty("locked", var_15_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_121()
{
	SetVariable("b7q02", (int)1000);
	func_129(var_15_cvector, var_16_cvector, var_17_object, var_18_object);
	return 0;
}


func_191(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


