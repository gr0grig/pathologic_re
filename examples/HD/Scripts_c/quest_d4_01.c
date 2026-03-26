// @IMPORTS: GetGameTime/1,SetTimeEvent/2,Hold/0,Trace/1,GetMainOutdoorScene/1,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,FindActor/2
// @STRINGS: W:theater@door1|W:sobor@door1|W:key_actors|W:pt_d4q01_key1|W:pers_whitemask|W:d4q01_key1.xml|W:pt_d4q01_key2|W:pers_wasted_male|W:d4q01_key2.xml|W:pers|W:pt_d4q01_birdmask|W:pers_birdmask|W:d4q01_birdmask.xml|W:pt_d4q01_wastedwoman|W:pers_wasted_girl|W:d4q01_wastedwoman.xml|W:key1_done|A:Remove|W:key2_done|W:birdmask_done|W:wastedwoman_done|W:init_sobor|W:d4q01_sobor_guard.xml|W:init_theater|W:d4q01_theater_guard.xml|W:cleanup|W:d4q01|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object params=0
// @EVENT_9: op=0x19 vars=int,float
// @EVENT_26: op=0x20 vars=string
// @PE: 0x19

task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	var_8_string = ""; var_9_bool = 0;
	func_269("theater@door1", (bool)1);
	return 0;
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_int = 0;
	Trace(var_6_string);
	var_18_bool = var_6_string == "key_actors";
	if(var_18_bool != 0) {
		GetMainOutdoorScene(var_12_object);
		var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = "";
		var_12_object = var_20_object;
		func_251(var_19_object, var_20_object, "pt_d4q01_key1", "pers_whitemask", "d4q01_key1.xml");
		var_0_object = var_19_object;
		var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; var_41_string = "";
		var_12_object = var_38_object;
		func_251(var_37_object, var_38_object, "pt_d4q01_key2", "pers_wasted_male", "d4q01_key2.xml");
		var_1_object = var_37_object;
		var_12_object = 0;
	} else {
		var_43_bool = var_6_string == "pers";
		if(var_43_bool != 0) {
			GetMainOutdoorScene(var_13_object);
			var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = "";
			var_13_object = var_45_object;
			func_251(var_44_object, var_45_object, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_birdmask.xml");
			var_2_object = var_44_object;
			var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = "";
			var_13_object = var_50_object;
			func_251(var_49_object, var_50_object, "pt_d4q01_wastedwoman", "pers_wasted_girl", "d4q01_wastedwoman.xml");
			var_3_object = var_49_object;
			goto Label_186;
		}
		var_55_bool = var_6_string == "key1_done";
		if(var_55_bool != 0) {
			@@@var_0_object:Remove();
			goto Label_186;
		}
		var_57_bool = var_6_string == "key2_done";
		if(var_57_bool != 0) {
			@@@var_1_object:Remove();
			goto Label_186;
		}
		var_59_bool = var_6_string == "birdmask_done";
		if(var_59_bool != 0) {
			@@@var_2_object:Remove();
			goto Label_186;
		}
		var_61_bool = var_6_string == "wastedwoman_done";
		if(var_61_bool != 0) {
			@@@var_3_object:Remove();
			goto Label_186;
		}
		var_63_bool = var_6_string == "init_sobor";
		if(var_63_bool != 0) {
			var_64_object = var_3_object;
			if(var_64_object != 0) {
				@@@var_3_object:Remove();
			}
			GetMainOutdoorScene(var_14_object);
			var_65_object = Obj(); var_66_object = Obj(); var_67_string = ""; var_68_string = ""; var_69_string = "";
			var_14_object = var_66_object;
			func_251(var_65_object, var_66_object, "pt_d4q01_wastedwoman", "pers_wasted_male", "d4q01_sobor_guard.xml");
			var_4_object = var_65_object;
			var_70_string = ""; var_71_bool = 0;
			func_269("sobor@door1", (bool)0);
			goto Label_186;
		}
		var_81_bool = var_6_string == "init_theater";
		if(var_81_bool != 0) {
			var_82_object = var_2_object;
			if(var_82_object != 0) {
				@@@var_2_object:Remove();
			}
			GetMainOutdoorScene(var_15_object);
			var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = "";
			var_15_object = var_84_object;
			func_251(var_83_object, var_84_object, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_theater_guard.xml");
			var_5_object = var_83_object;
			var_88_string = ""; var_89_bool = 0;
			func_269("theater@door1", (bool)0);
			var_15_object = 0;
			goto Label_186;
		}
		var_91_bool = var_6_string == "cleanup";
		if(var_91_bool != 0) {
			GetVariable("d4q01", var_16_int);
			var_94_bool = var_16_int != (int)1000;
			if(var_94_bool != 0) {
				func_187();
			} else {
				func_203(Obj(), Obj(), var_15_object, var_16_int);
		}
			var_111_bool = var_6_string == "fail";
			if(var_111_bool != 0) {
				func_187();
				goto Label_186;
			}
			var_113_bool = var_6_string == "completed";
			if(var_113_bool == 0) goto Label_186;
			func_195();
		}
		func_220(var_15_object, var_16_int);
		goto Label_186;
	}
Label_186:
	return 10;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_6_float = 0; var_7_float = 0;
	GetGameTime(var_7_float);
	var_9_bool = var_7_float < (int)79;
	if(var_9_bool != 0) {
		SetTimeEvent((int)0, (int)79);
	} else {
		var_22_string = ""; var_23_bool = 0;
		func_269("theater@door1", (bool)1);
	}
	var_12_string = ""; var_13_bool = 0;
	func_269("sobor@door1", (bool)1);
	
Label_21:
	Hold();
	goto Label_21;
	
}
EMIT "Return(); Pop(2)";


func_195()
{
	SetVariable("d4q01", (int)1000);
	func_203(var_13_object, var_14_object, var_15_object, var_16_int);
	return 0;
}


func_203(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_97_object = var_0_object;
	if(var_97_object != 0) {
		@@@var_0_object:Remove();
	}
	var_98_object = var_1_object;
	if(var_98_object != 0) {
		@@@var_1_object:Remove();
	}
	var_99_object = var_2_object;
	if(var_99_object != 0) {
		@@@var_2_object:Remove();
	}
	var_100_object = var_3_object;
	if(var_100_object != 0) {
		@@@var_3_object:Remove();
	}
	return 0;
}


func_269(var_12_string, var_13_bool)
{
	var_14_object = Obj(); var_15_object = Obj();
	FindActor(var_15_object, var_12_string);
	var_16_bool = var_15_object == 0; //@nz
	if(var_16_bool != 0) {
		var_18_int = "Door " + var_12_string;
		var_20_int = var_18_int + " not found";
		Trace(var_20_int);
	} else {
		@@var_15_object:SetProperty("locked", var_13_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_251(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj();
	@@var_20_object:GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	var_32_bool = var_28_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_34_int = "Locator " + var_21_string;
		var_36_int = var_34_int + " doesn't exist";
		Trace(var_36_int);
	} else {
		@@var_20_object:AddStationaryActor(Obj(), var_29_cvector, var_30_cvector, var_22_string, var_23_string);
	}
	var_31_object = var_19_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_245(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj();
	self(var_109_object);
	var_109_object = var_107_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_187()
{
	SetVariable("d4q01", (int)-1);
	func_203(var_13_object, var_14_object, var_15_object, var_16_int);
	return 0;
}


func_220(var_4_object, var_5_object)
{
	EventDisable(26);
	var_101_object = var_5_object;
	if(var_101_object != 0) {
		@@@var_5_object:Remove();
	}
	var_102_object = var_4_object;
	if(var_102_object != 0) {
		@@@var_4_object:Remove();
	}
	var_103_string = ""; var_104_bool = 0;
	func_269("theater@door1", (bool)0);
	var_105_string = ""; var_106_bool = 0;
	func_269("sobor@door1", (bool)1);
	var_107_object = Obj();
	func_245(var_107_object);
	RemoveActor(var_107_object);
	return 0;
}


