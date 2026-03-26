// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,Trigger/2,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,AddActor/6,FindActor/2
// @STRINGS: W:house_petr@door1|W:shouse1_kabak@door1|W:woman|W:d2q01_house1@door1|W:d2q01_house1|W:pt_woman|W:pers_woman|W:d2q01_woman.xml|W:cursed_women|W:pt_enemy01|W:d2q01_zombie_woman.xml|W:pt_enemy02|W:cleanup|W:d2q01|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0xe vars=string

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_int = 0; var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0;
	Trace(var_1_string);
	var_9_bool = var_1_string == "woman";
	if(var_9_bool != 0) {
		var_10_string = ""; var_11_bool = 0;
		func_151("d2q01_house1@door1", (bool)0);
		GetSceneByName(var_5_object, "d2q01_house1");
		var_21_object = Obj(); var_22_object = Obj(); var_23_string = ""; var_24_string = ""; var_25_string = "";
		var_5_object = var_22_object;
		func_133(var_21_object, var_22_object, "pt_woman", "pers_woman", "d2q01_woman.xml");
		var_0_object = var_21_object;
		var_5_object = 0;
	} else {
		var_40_bool = var_1_string == "cursed_women";
		if(var_40_bool != 0) {
			GetSceneByName(var_6_object, "d2q01_house1");
			var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = "";
			var_6_object = var_43_object;
			func_133(var_42_object, var_43_object, "pt_enemy01", "pers_woman", "d2q01_zombie_woman.xml");
			var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = "";
			var_6_object = var_48_object;
			func_133(var_47_object, var_48_object, "pt_enemy02", "pers_woman", "d2q01_zombie_woman.xml");
			Trigger(var_0_object, "cleanup");
			var_6_object = 0;
			goto Label_93;
		}
		var_54_bool = var_1_string == "cleanup";
		if(var_54_bool != 0) {
			GetVariable("d2q01", var_7_int);
			var_57_bool = var_7_int != (int)1000;
			if(var_57_bool != 0) {
				func_94();
			} else {
				func_110(var_7_int);
		}
			var_68_bool = var_1_string == "fail";
			if(var_68_bool != 0) {
				func_94();
				goto Label_93;
			}
			var_70_bool = var_1_string == "completed";
			if(var_70_bool == 0) goto Label_93;
			func_102();
		}
		goto Label_93;
	}
Label_93:
	return 6;
	
}


main(var_0_object)
{
	var_1_string = ""; var_2_bool = 0;
	func_151("house_petr@door1", (bool)0);
	var_11_string = ""; var_12_bool = 0;
	func_151("shouse1_kabak@door1", (bool)0);
	
Label_10:
	Hold();
	goto Label_10;
}
EMIT "Return(); Pop(0)";


func_133(var_21_object, var_22_object, var_23_string, var_24_string, var_25_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj();
	@@var_22_object:GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector);
	var_34_bool = var_30_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_36_int = "Locator " + var_23_string;
		var_38_int = var_36_int + " doesn't exist";
		Trace(var_38_int);
	} else {
		AddActor(Obj(), var_24_string, var_22_object, var_31_cvector, var_32_cvector, var_25_string);
	}
	var_33_object = var_21_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_102()
{
	SetVariable("d2q01", (int)1000);
	func_110(var_7_int);
	return 0;
}


func_110(var_0_object)
{
	EventDisable(26);
	var_60_object = var_0_object;
	if(var_60_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_62_string = ""; var_63_bool = 0;
	func_151("d2q01_house1@door1", (bool)1);
	var_64_object = Obj();
	func_127(var_64_object);
	RemoveActor(var_64_object);
	return 0;
}


func_151(var_1_string, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, var_1_string);
	var_5_bool = var_4_object == 0; //@nz
	if(var_5_bool != 0) {
		var_7_int = "Door " + var_1_string;
		var_9_int = var_7_int + " not found";
		Trace(var_9_int);
	} else {
		@@var_4_object:SetProperty("locked", var_2_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_94()
{
	SetVariable("d2q01", (int)-1);
	func_110(var_7_int);
	return 0;
}


func_127(var_64_object)
{
	var_65_object = Obj(); var_66_object = Obj();
	self(var_66_object);
	var_66_object = var_64_object;
	return 2;
}
EMIT "Stack[-1] = 0";


