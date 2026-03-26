// @IMPORTS: Hold/0,Trace/1,FindActor/2,GetSceneByName/2,Trigger/2,SetVariable/2,AddActor/6
// @STRINGS: W:woman|W:dt_house_1_07|A:EnableSubset|W:d2q01_house1|W:pt_woman|W:pers_woman|W:d2q01_woman.xml|W:cursed_women|W:pt_enemy01|W:d2q01_zombie_woman.xml|W:pt_enemy02|W:cleanup|W:fail|W:completed|W:d2q01|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj();
	Trace(var_1_string);
	var_9_bool = var_1_string == "woman";
	if(var_9_bool != 0) {
		FindActor(var_5_object, "dt_house_1_07");
		@@var_5_object:EnableSubset((int)200, (bool)1);
		GetSceneByName(var_6_object, "d2q01_house1");
		var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_string = "";
		var_6_object = var_15_object;
		func_85(var_14_object, var_15_object, "pt_woman", "pers_woman", "d2q01_woman.xml");
		var_0_object = var_14_object;
		var_6_object = 0;
		var_5_object = 0;
	} else {
		var_33_bool = var_1_string == "cursed_women";
		if(var_33_bool != 0) {
			GetSceneByName(var_7_object, "d2q01_house1");
			var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; var_39_string = "";
			var_7_object = var_36_object;
			func_85(var_35_object, var_36_object, "pt_enemy01", "pers_woman", "d2q01_zombie_woman.xml");
			var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
			var_7_object = var_41_object;
			func_85(var_40_object, var_41_object, "pt_enemy02", "pers_woman", "d2q01_zombie_woman.xml");
			Trigger(var_0_object, "cleanup");
			var_7_object = 0;
			goto Label_69;
		}
		var_47_bool = var_1_string == "fail";
		if(var_47_bool != 0) {
			func_70();
			goto Label_69;
		}
		var_53_bool = var_1_string == "completed";
		if(var_53_bool == 0) goto Label_69;
		func_70();
	}
Label_69:
	return 6;
	
}


main(var_0_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_78(var_0_object)
{
	EventDisable(26);
	var_50_object = var_0_object;
	if(var_50_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	return 0;
}


func_85(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
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


func_70()
{
	SetVariable("d2q01", (int)1000);
	func_78(var_7_object);
	return 0;
}


