// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,Trigger/2,GetMainOutdoorScene/1,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,AddActor/6,FindActor/2
// @STRINGS: W:sobor@door1|W:saburov_klara|W:cot_katerina|W:pt_d6q01_klara|W:NPC_Klara|W:d6q01_Klara.xml|W:saburov_klara_remove|W:cleanup|W:eva_klara|W:cot_eva|W:eva_klara_remove|W:albinos_klara|W:pt_d6q03_albinos|W:albinos_klara_remove|W:d6q01|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x9 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_int = 0;
	Trace(var_3_string);
	var_13_bool = var_3_string == "saburov_klara";
	if(var_13_bool != 0) {
		GetSceneByName(var_8_object, "cot_katerina");
		var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; var_19_string = "";
		var_8_object = var_16_object;
		func_166(var_15_object, var_16_object, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
		var_0_object = var_15_object;
		var_8_object = 0;
	} else {
		var_34_bool = var_3_string == "saburov_klara_remove";
		if(var_34_bool != 0) {
			Trigger(var_0_object, "cleanup");
			goto Label_115;
		}
		var_37_bool = var_3_string == "eva_klara";
		if(var_37_bool != 0) {
			GetSceneByName(var_9_object, "cot_eva");
			var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = "";
			var_9_object = var_40_object;
			func_166(var_39_object, var_40_object, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
			var_1_object = var_39_object;
			goto Label_115;
		}
		var_45_bool = var_3_string == "eva_klara_remove";
		if(var_45_bool != 0) {
			Trigger(var_1_object, "cleanup");
			goto Label_115;
		}
		var_48_bool = var_3_string == "albinos_klara";
		if(var_48_bool != 0) {
			GetMainOutdoorScene(var_10_object);
			var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = "";
			var_10_object = var_50_object;
			func_166(var_49_object, var_50_object, "pt_d6q03_albinos", "NPC_Klara", "d6q01_Klara.xml");
			var_2_object = var_49_object;
			goto Label_115;
		}
		var_55_bool = var_3_string == "albinos_klara_remove";
		if(var_55_bool != 0) {
			var_56_object = var_2_object;
			if(var_56_object != 0) {
				Trigger(var_2_object, "cleanup");
			}
			goto Label_115;
		}
		var_59_bool = var_3_string == "cleanup";
		if(var_59_bool != 0) {
			GetVariable("d6q01", var_11_int);
			var_62_bool = var_11_int != (int)1000;
			if(var_62_bool != 0) {
				func_116();
			} else {
				func_132(Obj(), Obj(), var_11_int);
		}
			var_85_bool = var_3_string == "fail";
			if(var_85_bool != 0) {
				func_116();
				goto Label_115;
			}
			var_87_bool = var_3_string == "completed";
			if(var_87_bool == 0) goto Label_115;
			func_124();
		}
		func_148();
		goto Label_115;
	}
Label_115:
	return 8;
	
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_string = ""; var_4_bool = 0;
	func_184("sobor@door1", (bool)0);
	
Label_5:
	Hold();
	goto Label_5;
}
EMIT "Return(); Pop(0)";


func_160(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj();
	self(var_83_object);
	var_83_object = var_81_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_132(var_0_object, var_1_object, var_2_object)
{
	var_65_object = var_0_object;
	if(var_65_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_67_object = var_1_object;
	if(var_67_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_69_object = var_2_object;
	if(var_69_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	return 0;
}


func_166(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string)
{
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj();
	@@var_16_object:GetLocator(var_17_string, var_24_bool, var_25_cvector, var_26_cvector);
	var_28_bool = var_24_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_30_int = "Locator " + var_17_string;
		var_32_int = var_30_int + " doesn't exist";
		Trace(var_32_int);
	} else {
		AddActor(Obj(), var_18_string, var_16_object, var_25_cvector, var_26_cvector, var_19_string);
	}
	var_27_object = var_15_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_116()
{
	SetVariable("d6q01", (int)-1);
	func_132(var_9_object, var_10_object, var_11_int);
	return 0;
}


func_148()
{
	EventDisable(26);
	var_71_string = ""; var_72_bool = 0;
	func_184("sobor@door1", (bool)1);
	var_81_object = Obj();
	func_160(var_81_object);
	RemoveActor(var_81_object);
	return 0;
}


func_184(var_3_string, var_4_bool)
{
	var_5_object = Obj(); var_6_object = Obj();
	FindActor(var_6_object, var_3_string);
	var_7_bool = var_6_object == 0; //@nz
	if(var_7_bool != 0) {
		var_9_int = "Door " + var_3_string;
		var_11_int = var_9_int + " not found";
		Trace(var_11_int);
	} else {
		@@var_6_object:SetProperty("locked", var_4_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_124()
{
	SetVariable("d6q01", (int)1000);
	func_132(var_9_object, var_10_object, var_11_int);
	return 0;
}


