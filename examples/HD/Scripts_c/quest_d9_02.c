// @IMPORTS: CreateObjectVector/1,Trace/1,GetMainOutdoorScene/1,GetVariable/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,Trigger/2
// @STRINGS: W:init_soldiers|W:pt_d9q02_enemy1|W:pers_soldat_hand|W:d9q02_e_soldat.xml|A:add|W:pt_d9q02_enemy2|W:pt_d9q02_enemy3|W:d9q02_e_soldat_rifle.xml|W:pt_d9q02_enemy4|W:pt_d9q02_enemy5|W:pt_d9q02_enemy6|W:fail|W:completed|W:d9q02|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|A:size|A:get
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x7 vars=string
// @EVENT_9: op=0x93 vars=int,float
// @PE: 0x93

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj();
	Trace(var_1_string);
	var_5_bool = var_1_string == "init_soldiers";
	if(var_5_bool != 0) {
		GetMainOutdoorScene(var_3_object);
		var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = "";
		var_3_object = var_7_object;
		func_158(var_6_object, var_7_object, "pt_d9q02_enemy1", "pers_soldat_hand", "d9q02_e_soldat.xml");
		@@@var_0_object:add(var_6_object);
		var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = "";
		var_3_object = var_25_object;
		func_158(var_24_object, var_25_object, "pt_d9q02_enemy2", "pers_soldat_hand", "d9q02_e_soldat.xml");
		@@@var_0_object:add(var_24_object);
		var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = "";
		var_3_object = var_30_object;
		func_158(var_29_object, var_30_object, "pt_d9q02_enemy3", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml");
		@@@var_0_object:add(var_29_object);
		var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
		var_3_object = var_35_object;
		func_158(var_34_object, var_35_object, "pt_d9q02_enemy4", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml");
		@@@var_0_object:add(var_34_object);
		var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = "";
		var_3_object = var_40_object;
		func_158(var_39_object, var_40_object, "pt_d9q02_enemy5", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml");
		@@@var_0_object:add(var_39_object);
		var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = "";
		var_3_object = var_45_object;
		func_158(var_44_object, var_45_object, "pt_d9q02_enemy6", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml");
		@@@var_0_object:add(var_44_object);
		var_3_object = 0;
	} else {
		var_50_bool = var_1_string == "fail";
		if(var_50_bool != 0) {
			func_99();
			goto Label_84;
		}
		var_54_bool = var_1_string == "completed";
		if(var_54_bool == 0) goto Label_84;
		func_107();
	}
Label_84:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_85();
	return 0;
}


main(var_0_object)
{
	CreateObjectVector(var_0_object);
	var_1_int = 0;
	func_128((int)9);
	return 0;
}


func_128(var_1_int)
{
	var_2_float = 0; var_3_float = 0;
	GetGameTime(var_3_float);
	var_5_float = var_1_int * (int)24;
	var_6_bool = var_3_float >= var_5_float;
	if(var_6_bool != 0) {
		func_116(var_3_float);
	} else {
		var_24_float = var_1_int * (int)24;
		SetTimeEvent((int)0, var_24_float);
		Hold();
	}
	return 2;
	
}


func_99()
{
	SetVariable("d9q02", (int)-1);
	func_115();
	return 0;
}


func_107()
{
	SetVariable("d9q02", (int)1000);
	func_115();
	return 0;
}


func_176(var_7_object, var_8_string)
{
	var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj();
	var_15_object = var_7_object;
	if(var_15_object != 0) {
		@@var_7_object:size(var_12_int);
		var_13_int = 0;

	Label_182:
		var_16_bool = var_13_int < var_12_int;
		if(var_16_bool != 0) {
			@@var_7_object:get(var_14_object, var_13_int);
			var_17_object = var_14_object;
			if(var_17_object != 0) {
				Trigger(var_14_object, var_8_string);
			}
			var_14_object = 0;
			var_13_int = var_13_int + (int)1;
			goto Label_182;
		}
	}
	return 6;
}


func_115()
{
	return 0;
}


func_116(var_0_object)
{
	EventDisable(26);
	var_7_object = Obj(); var_8_string = "";
	var_7_object = var_0_object;
	func_176(var_7_object, "cleanup");
	var_19_object = Obj();
	func_152(var_19_object);
	RemoveActor(var_19_object);
	return 0;
}


func_85()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d9q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_99();
	}
	func_116(var_4_int);
	return 2;
}


func_152(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_158(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj();
	@@var_7_object:GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	var_19_bool = var_15_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_21_int = "Locator " + var_8_string;
		var_23_int = var_21_int + " doesn't exist";
		Trace(var_23_int);
	} else {
		AddActor(Obj(), var_9_string, var_7_object, var_16_cvector, var_17_cvector, var_10_string);
	}
	var_18_object = var_6_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


