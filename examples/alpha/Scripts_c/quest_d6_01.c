// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,Trigger/2,GetMainOutdoorScene/1,SetVariable/2,AddActor/6
// @STRINGS: W:saburov_klara|W:cot_katerina|W:pt_d6q01_klara|W:NPC_Klara|W:d6q01_Klara.xml|W:saburov_klara_remove|W:cleanup|W:eva_klara|W:cot_eva|W:eva_klara_remove|W:albinos_klara|W:pt_d6q03_albinos|W:albinos_klara_remove|W:fail|W:completed|W:d6q01|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj();
	Trace(var_3_string);
	var_11_bool = var_3_string == "saburov_klara";
	if(var_11_bool != 0) {
		GetSceneByName(var_7_object, "cot_katerina");
		var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = "";
		var_7_object = var_14_object;
		func_122(var_13_object, var_14_object, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
		var_0_object = var_13_object;
		var_7_object = 0;
	} else {
		var_32_bool = var_3_string == "saburov_klara_remove";
		if(var_32_bool != 0) {
			Trigger(var_0_object, "cleanup");
			goto Label_88;
		}
		var_35_bool = var_3_string == "eva_klara";
		if(var_35_bool != 0) {
			GetSceneByName(var_8_object, "cot_eva");
			var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; var_41_string = "";
			var_8_object = var_38_object;
			func_122(var_37_object, var_38_object, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
			var_1_object = var_37_object;
			var_8_object = 0;
			goto Label_88;
		}
		var_43_bool = var_3_string == "eva_klara_remove";
		if(var_43_bool != 0) {
			Trigger(var_1_object, "cleanup");
			goto Label_88;
		}
		var_46_bool = var_3_string == "albinos_klara";
		if(var_46_bool != 0) {
			GetMainOutdoorScene(var_9_object);
			var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = "";
			var_9_object = var_48_object;
			func_122(var_47_object, var_48_object, "pt_d6q03_albinos", "NPC_Klara", "d6q01_Klara.xml");
			var_2_object = var_47_object;
			var_9_object = 0;
			goto Label_88;
		}
		var_53_bool = var_3_string == "albinos_klara_remove";
		if(var_53_bool != 0) {
			Trigger(var_2_object, "cleanup");
			goto Label_88;
		}
		var_56_bool = var_3_string == "fail";
		if(var_56_bool != 0) {
			func_89();
			goto Label_88;
		}
		var_66_bool = var_3_string == "completed";
		if(var_66_bool == 0) goto Label_88;
		func_97();
	}
Label_88:
	return 6;
	
}


main(var_0_object, var_1_object, var_2_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_89()
{
	SetVariable("d6q01", (int)-1);
	func_105(var_7_object, var_8_object, var_9_object);
	return 0;
}


func_122(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj();
	@@var_14_object:GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	var_26_bool = var_22_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_28_int = "Locator " + var_15_string;
		var_30_int = var_28_int + " doesn't exist";
		Trace(var_30_int);
	} else {
		AddActor(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	}
	var_25_object = var_13_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_97()
{
	SetVariable("d6q01", (int)1000);
	func_105(var_7_object, var_8_object, var_9_object);
	return 0;
}


func_105(var_0_object, var_1_object, var_2_object)
{
	EventDisable(26);
	var_59_object = var_0_object;
	if(var_59_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_61_object = var_1_object;
	if(var_61_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_63_object = var_2_object;
	if(var_63_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	return 0;
}


