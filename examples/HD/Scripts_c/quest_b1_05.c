// @IMPORTS: GetSceneByName/2,Trigger/2,GetMainOutdoorScene/1,Trace/1,GetVariable/2,RemoveActor/1,SetVariable/2,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:d2q01_house1|W:pt_b1q05_spi4ka|W:NPC_Spi4ka|W:b1q05_spi4ka.xml|W:house_spi4ka|W:nospi4ka|W:pt_b1q05_patrol_house|W:pers_patrool|W:b1q05_patrol_house.xml|W:pt_b1q05_patrol1|W:b1q05_patrol_key.xml|W:pt_b1q05_patrol2|W:b1q05_patrol.xml|W:pt_b1q05_woman|W:pers_woman|W:b1q05_woman.xml|W:attack|A:GetActor|W:house_load|W:pt_b1q05_rat|W:pers_rat|W:b1q05_rat.xml|W:rat_dead|W:fail|W:completed|W:b1q05|A:Remove|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,object,object,object,object,object params=0
// @EVENT_26: op=0x3b vars=string
// @EVENT_9: op=0xd7 vars=int,float
// @PE: 0xd7

task_0_event_26(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0;
	Trace(var_6_string);
	var_16_bool = var_6_string == "attack";
	if(var_16_bool != 0) {
		var_17_object = var_2_object;
		if(var_17_object != 0) {
			@@@var_2_object:GetActor(var_11_object);
			var_18_object = var_11_object;
			if(var_18_object != 0) {
				Trigger(var_11_object, "attack");
			}
			var_11_object = 0;
		}
		var_20_object = var_3_object;
		if(var_20_object != 0) {
			@@@var_3_object:GetActor(var_12_object);
			var_21_object = var_12_object;
			if(var_21_object != 0) {
				Trigger(var_12_object, "attack");
			}
			var_12_object = 0;
		}
	} else {
		var_24_bool = var_6_string == "house_load";
		if(var_24_bool != 0) {
			GetSceneByName(var_13_object, "d2q01_house1");
			var_14_int = 0;

		Label_93:
			var_26_bool = var_14_int < var_0_int;
			if(var_26_bool != 0) {
				var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
				var_13_object = var_28_object;
				var_34_int = var_14_int + (int)1;
				var_29_string = "pt_b1q05_rat" + var_34_int;
				func_226(var_27_object, var_28_object, var_29_string, "pers_rat", "b1q05_rat.xml");
				var_14_int = var_14_int + (int)1;
				goto Label_93;
			}
			var_13_object = 0;
			goto Label_129;
		}
		var_50_bool = var_6_string == "rat_dead";
		if(var_50_bool != 0) {
			var_0_int = var_0_int + (int)-1;
			goto Label_129;
		}
		var_53_bool = var_6_string == "fail";
		if(var_53_bool != 0) {
			func_149();
			goto Label_129;
		}
		var_67_bool = var_6_string == "completed";
		if(var_67_bool == 0) goto Label_129;
		func_157();
	}
Label_129:
	return 8;
	
}


task_0_event_9(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	func_130();
	return 0;
}


main(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj();
	var_0_int = 4;
	GetSceneByName(var_7_object, "d2q01_house1");
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = "";
	var_7_object = var_10_object;
	func_226(var_9_object, var_10_object, "pt_b1q05_spi4ka", "NPC_Spi4ka", "b1q05_spi4ka.xml");
	var_4_object = var_9_object;
	GetSceneByName(var_7_object, "house_spi4ka");
	Trigger(var_7_object, "nospi4ka");
	GetMainOutdoorScene(var_7_object);
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = "";
	var_7_object = var_30_object;
	func_244(var_29_object, var_30_object, "pt_b1q05_patrol_house", "pers_patrool", "b1q05_patrol_house.xml");
	var_1_object = var_29_object;
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = "";
	var_7_object = var_48_object;
	func_244(var_47_object, var_48_object, "pt_b1q05_patrol1", "pers_patrool", "b1q05_patrol_key.xml");
	var_2_object = var_47_object;
	var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; var_56_string = "";
	var_7_object = var_53_object;
	func_244(var_52_object, var_53_object, "pt_b1q05_patrol2", "pers_patrool", "b1q05_patrol.xml");
	var_3_object = var_52_object;
	var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = "";
	var_7_object = var_58_object;
	func_244(var_57_object, var_58_object, "pt_b1q05_woman", "pers_woman", "b1q05_woman.xml");
	var_5_object = var_57_object;
	var_62_int = 0;
	func_196((int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_226(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	@@var_10_object:GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector);
	var_22_bool = var_18_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Locator " + var_11_string;
		var_26_int = var_24_int + " doesn't exist";
		Trace(var_26_int);
	} else {
		AddActor(Obj(), var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string);
	}
	var_21_object = var_9_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_130()
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("b1q05", var_9_int);
	var_12_bool = var_9_int != (int)1000;
	if(var_12_bool != 0) {
		func_149();
	}
	func_165(var_5_object, var_6_int, var_7_float, var_8_int, var_9_int);
	var_25_object = Obj();
	func_220(var_25_object);
	RemoveActor(var_25_object);
	return 2;
}


func_196(var_62_int)
{
	var_63_float = 0; var_64_float = 0;
	GetGameTime(var_64_float);
	var_66_float = var_62_int * (int)24;
	var_67_bool = var_64_float >= var_66_float;
	if(var_67_bool != 0) {
		func_165(var_6_object, var_7_object, var_62_int, var_63_float, var_64_float);
	} else {
		var_80_float = var_62_int * (int)24;
		SetTimeEvent((int)0, var_80_float);
		Hold();
	}
	return 2;
	
}


func_165(var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_68_object = Obj(); var_69_object = Obj();
	EventDisable(26);
	GetSceneByName(var_69_object, "house_spi4ka");
	Trigger(var_69_object, "spi4ka");
	var_72_object = var_1_object;
	if(var_72_object != 0) {
		@@@var_1_object:Remove();
	}
	var_73_object = var_2_object;
	if(var_73_object != 0) {
		@@@var_2_object:Remove();
	}
	var_74_object = var_3_object;
	if(var_74_object != 0) {
		@@@var_3_object:Remove();
	}
	var_75_object = var_4_object;
	if(var_75_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_77_object = var_5_object;
	if(var_77_object != 0) {
		@@@var_5_object:Remove();
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_244(var_29_object, var_30_object, var_31_string, var_32_string, var_33_string)
{
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj();
	@@var_30_object:GetLocator(var_31_string, var_38_bool, var_39_cvector, var_40_cvector);
	var_42_bool = var_38_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Locator " + var_31_string;
		var_46_int = var_44_int + " doesn't exist";
		Trace(var_46_int);
	} else {
		@@var_30_object:AddStationaryActor(Obj(), var_39_cvector, var_40_cvector, var_32_string, var_33_string);
	}
	var_41_object = var_29_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_149()
{
	SetVariable("b1q05", (int)-1);
	func_165(var_5_object, var_6_int, var_7_float, var_8_int, var_9_int);
	return 0;
}


func_220(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj();
	self(var_27_object);
	var_27_object = var_25_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_157()
{
	SetVariable("b1q05", (int)1000);
	func_165(var_10_int, var_11_object, var_12_object, var_13_object, var_14_int);
	return 0;
}


