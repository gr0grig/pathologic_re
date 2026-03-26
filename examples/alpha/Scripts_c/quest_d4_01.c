// @IMPORTS: Hold/0,Trace/1,GetMainOutdoorScene/1,SetVariable/2
// @STRINGS: W:key_actors|W:pt_d4q01_key1|W:pers_whitemask|W:d4q01_key1.xml|W:pt_d4q01_key2|W:pers_wasted_male|W:d4q01_key2.xml|W:pers|W:pt_d4q01_birdmask|W:pers_birdmask|W:d4q01_birdmask.xml|W:pt_d4q01_wastedwoman|W:pers_wasted_girl|W:d4q01_wastedwoman.xml|W:key1_done|A:Remove|W:key2_done|W:birdmask_done|W:wastedwoman_done|W:fail|W:completed|W:d4q01|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj();
	Trace(var_4_string);
	var_10_bool = var_4_string == "key_actors";
	if(var_10_bool != 0) {
		GetMainOutdoorScene(var_7_object);
		var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = "";
		var_7_object = var_12_object;
		func_125(var_11_object, var_12_object, "pt_d4q01_key1", "pers_whitemask", "d4q01_key1.xml");
		var_0_object = var_11_object;
		var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = "";
		var_7_object = var_30_object;
		func_125(var_29_object, var_30_object, "pt_d4q01_key2", "pers_wasted_male", "d4q01_key2.xml");
		var_1_object = var_29_object;
		var_7_object = 0;
	} else {
		var_35_bool = var_4_string == "pers";
		if(var_35_bool != 0) {
			GetMainOutdoorScene(var_8_object);
			var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = "";
			var_8_object = var_37_object;
			func_125(var_36_object, var_37_object, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_birdmask.xml");
			var_2_object = var_36_object;
			var_41_object = Obj(); var_42_object = Obj(); var_43_string = ""; var_44_string = ""; var_45_string = "";
			var_8_object = var_42_object;
			func_125(var_41_object, var_42_object, "pt_d4q01_wastedwoman", "pers_wasted_girl", "d4q01_wastedwoman.xml");
			var_3_object = var_41_object;
			var_8_object = 0;
			goto Label_90;
		}
		var_47_bool = var_4_string == "key1_done";
		if(var_47_bool != 0) {
			@@@var_0_object:Remove();
			goto Label_90;
		}
		var_49_bool = var_4_string == "key2_done";
		if(var_49_bool != 0) {
			@@@var_1_object:Remove();
			goto Label_90;
		}
		var_51_bool = var_4_string == "birdmask_done";
		if(var_51_bool != 0) {
			@@@var_2_object:Remove();
			goto Label_90;
		}
		var_53_bool = var_4_string == "wastedwoman_done";
		if(var_53_bool != 0) {
			@@@var_3_object:Remove();
			goto Label_90;
		}
		var_55_bool = var_4_string == "fail";
		if(var_55_bool != 0) {
			func_91();
			goto Label_90;
		}
		var_63_bool = var_4_string == "completed";
		if(var_63_bool == 0) goto Label_90;
		func_99();
	}
Label_90:
	return 4;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_99()
{
	SetVariable("d4q01", (int)1000);
	func_107(var_5_object, var_6_object, var_7_object, var_8_object);
	return 0;
}


func_91()
{
	SetVariable("d4q01", (int)-1);
	func_107(var_5_object, var_6_object, var_7_object, var_8_object);
	return 0;
}


func_107(var_0_object, var_1_object, var_2_object, var_3_object)
{
	EventDisable(26);
	var_58_object = var_0_object;
	if(var_58_object != 0) {
		@@@var_0_object:Remove();
	}
	var_59_object = var_1_object;
	if(var_59_object != 0) {
		@@@var_1_object:Remove();
	}
	var_60_object = var_2_object;
	if(var_60_object != 0) {
		@@@var_2_object:Remove();
	}
	var_61_object = var_3_object;
	if(var_61_object != 0) {
		@@@var_3_object:Remove();
	}
	return 0;
}


func_125(var_11_object, var_12_object, var_13_string, var_14_string, var_15_string)
{
	var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj();
	@@var_12_object:GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector);
	var_24_bool = var_20_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_26_int = "Locator " + var_13_string;
		var_28_int = var_26_int + " doesn't exist";
		Trace(var_28_int);
	} else {
		@@var_12_object:AddStationaryActor(Obj(), var_21_cvector, var_22_cvector, var_14_string, var_15_string);
	}
	var_23_object = var_11_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


