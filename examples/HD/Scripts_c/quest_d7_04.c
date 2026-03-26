// @IMPORTS: GetMainOutdoorScene/1,CreateObjectVector/1,Trace/1,GetSceneByName/2,Trigger/2,GetVariable/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,AddActorByType/6
// @STRINGS: W:pt_gatherer_fire2|W:scripted|W:bonfire.xml|W:init_kabak|W:shouse1_kabak|W:noandrei|W:pt_d7q04_wastedmale1|W:pers_wasted_male|W:d7q04_wastedmale.xml|W:pt_d7q04_wastedmale2|W:init_andrei|W:pt_d7q04_andrei|W:NPC_Andrei|W:d7q04_andrei.xml|W:pt_d7q04_nude|W:pers_nudegirl|W:d7q04_nudegirl.xml|W:pt_d7q04_enemy1|W:pers_morlok|W:d7q04_e_morlok.xml|A:add|W:pt_d7q04_enemy2|W:pers_butcher|W:d7q04_e_butcher.xml|W:pt_d7q04_enemy3|W:pt_d7q04_enemy4|W:pt_d7q04_enemy5|W:pt_d7q04_enemy6|W:fail|W:completed|W:d7q04|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|A:size|A:get
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object params=0
// @EVENT_26: op=0x12 vars=string
// @EVENT_9: op=0xe0 vars=int,float
// @PE: 0xe0

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj();
	Trace(var_5_string);
	var_11_bool = var_5_string == "init_kabak";
	if(var_11_bool != 0) {
		GetSceneByName(var_8_object, "shouse1_kabak");
		Trigger(var_8_object, "noandrei");
		var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_string = "";
		var_8_object = var_15_object;
		func_235(var_14_object, var_15_object, "pt_d7q04_wastedmale1", "pers_wasted_male", "d7q04_wastedmale.xml");
		var_3_object = var_14_object;
		var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = "";
		var_8_object = var_33_object;
		func_235(var_32_object, var_33_object, "pt_d7q04_wastedmale2", "pers_wasted_male", "d7q04_wastedmale.xml");
		var_4_object = var_32_object;
		var_8_object = 0;
	}
	var_38_bool = var_5_string == "init_andrei";
	if(var_38_bool != 0) {
		GetMainOutdoorScene(var_9_object);
		var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = "";
		var_9_object = var_40_object;
		func_235(var_39_object, var_40_object, "pt_d7q04_andrei", "NPC_Andrei", "d7q04_andrei.xml");
		var_2_object = var_39_object;
		var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = "";
		var_9_object = var_45_object;
		func_235(var_44_object, var_45_object, "pt_d7q04_nude", "pers_nudegirl", "d7q04_nudegirl.xml");
		var_1_object = var_44_object;
		var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = "";
		var_9_object = var_50_object;
		func_235(var_49_object, var_50_object, "pt_d7q04_enemy1", "pers_morlok", "d7q04_e_morlok.xml");
		@@@var_0_object:add(var_49_object);
		var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = "";
		var_9_object = var_55_object;
		func_235(var_54_object, var_55_object, "pt_d7q04_enemy2", "pers_butcher", "d7q04_e_butcher.xml");
		@@@var_0_object:add(var_54_object);
		var_59_object = Obj(); var_60_object = Obj(); var_61_string = ""; var_62_string = ""; var_63_string = "";
		var_9_object = var_60_object;
		func_235(var_59_object, var_60_object, "pt_d7q04_enemy3", "pers_morlok", "d7q04_e_morlok.xml");
		@@@var_0_object:add(var_59_object);
		var_64_object = Obj(); var_65_object = Obj(); var_66_string = ""; var_67_string = ""; var_68_string = "";
		var_9_object = var_65_object;
		func_235(var_64_object, var_65_object, "pt_d7q04_enemy4", "pers_butcher", "d7q04_e_butcher.xml");
		@@@var_0_object:add(var_64_object);
		var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = "";
		var_9_object = var_70_object;
		func_235(var_69_object, var_70_object, "pt_d7q04_enemy5", "pers_morlok", "d7q04_e_morlok.xml");
		@@@var_0_object:add(var_69_object);
		var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; var_78_string = "";
		var_9_object = var_75_object;
		func_235(var_74_object, var_75_object, "pt_d7q04_enemy6", "pers_butcher", "d7q04_e_butcher.xml");
		@@@var_0_object:add(var_74_object);
		var_9_object = 0;
	} else {
		var_80_bool = var_5_string == "fail";
		if(var_80_bool != 0) {
			func_149();
			goto Label_137;
		}
		var_111_bool = var_5_string == "completed";
		if(var_111_bool == 0) goto Label_137;
		func_157();
	}
Label_137:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_float)
{
	func_138();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	GetMainOutdoorScene(var_6_object);
	var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = "";
	var_6_object = var_8_object;
	func_253(var_7_object, var_8_object, "pt_gatherer_fire2", "scripted", "bonfire.xml");
	CreateObjectVector(var_0_object);
	var_25_int = 0;
	func_205((int)7);
	return 2;
}
EMIT "Stack[-1] = 0";


func_229(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj();
	self(var_57_object);
	var_57_object = var_55_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_165(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	EventDisable(26);
	var_33_object = Obj(); var_34_string = "";
	var_33_object = var_0_object;
	func_271(var_33_object, "cleanup");
	var_45_object = var_2_object;
	if(var_45_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_47_object = var_1_object;
	if(var_47_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_49_object = var_3_object;
	if(var_49_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_51_object = var_4_object;
	if(var_51_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	GetSceneByName(var_32_object, "shouse1_kabak");
	Trigger(var_32_object, "andrei");
	var_55_object = Obj();
	func_229(var_55_object);
	RemoveActor(var_55_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_138()
{
	var_7_int = 0; var_8_int = 0;
	GetVariable("d7q04", var_8_int);
	var_11_bool = var_8_int != (int)1000;
	if(var_11_bool != 0) {
		func_149();
	}
	return 2;
}


func_235(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
{
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj();
	@@var_15_object:GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector);
	var_27_bool = var_23_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_29_int = "Locator " + var_16_string;
		var_31_int = var_29_int + " doesn't exist";
		Trace(var_31_int);
	} else {
		AddActor(Obj(), var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string);
	}
	var_26_object = var_14_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_205(var_25_int)
{
	var_26_float = 0; var_27_float = 0;
	GetGameTime(var_27_float);
	var_29_float = var_25_int * (int)24;
	var_30_bool = var_27_float >= var_29_float;
	if(var_30_bool != 0) {
		func_165(var_5_object, var_6_object, var_25_int, var_26_float, var_27_float);
	} else {
		var_60_float = var_25_int * (int)24;
		SetTimeEvent((int)0, var_60_float);
		Hold();
	}
	return 2;
	
}


func_271(var_33_object, var_34_string)
{
	var_35_int = 0; var_36_int = 0; var_37_object = Obj(); var_38_int = 0; var_39_int = 0; var_40_object = Obj();
	var_41_object = var_33_object;
	if(var_41_object != 0) {
		@@var_33_object:size(var_38_int);
		var_39_int = 0;

	Label_277:
		var_42_bool = var_39_int < var_38_int;
		if(var_42_bool != 0) {
			@@var_33_object:get(var_40_object, var_39_int);
			var_43_object = var_40_object;
			if(var_43_object != 0) {
				Trigger(var_40_object, var_34_string);
			}
			var_40_object = 0;
			var_39_int = var_39_int + (int)1;
			goto Label_277;
		}
	}
	return 6;
}


func_149()
{
	SetVariable("d7q04", (int)-1);
	func_165(var_4_object, var_5_int, var_6_float, var_7_int, var_8_int);
	return 0;
}


func_157()
{
	SetVariable("d7q04", (int)1000);
	func_165(var_5_string, var_6_object, var_7_object, var_8_object, var_9_object);
	return 0;
}


func_253(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj();
	@@var_8_object:GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector);
	var_20_bool = var_16_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_22_int = "Locator " + var_9_string;
		var_24_int = var_22_int + " doesn't exist";
		Trace(var_24_int);
	} else {
		AddActorByType(Obj(), var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string);
	}
	var_19_object = var_7_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


