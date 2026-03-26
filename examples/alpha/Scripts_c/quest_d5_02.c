// @IMPORTS: SetVariable/2,Trace/1,GetSceneByName/2,Trigger/2,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:d5q02|W:place_girl|W:d5q01NudeInKabak|W:shouse1_kabak|W:pt_d5q02_girl|W:pers_nudegirl|W:d5q02_girl.xml|W:restore|W:remove_girl|W:cleanup|W:place_gorbun|W:d5q01Gorbun|W:lc_House6_05|W:pt_gorbun|W:pers_bomber|W:d5q02_gorbun.xml|W:remove_gorbun|W:completed|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0xae vars=int,float
// @PE: 0xae

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj();
	Trace(var_2_string);
	var_8_bool = var_2_string == "place_girl";
	if(var_8_bool != 0) {
		SetVariable("d5q01NudeInKabak", (int)1);
		var_11_bool = var_0_object == 0; //@nz
		if(var_11_bool != 0) {
			GetSceneByName(var_5_object, "shouse1_kabak");
			var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = "";
			var_5_object = var_14_object;
			func_185(var_13_object, var_14_object, "pt_d5q02_girl", "pers_nudegirl", "d5q02_girl.xml");
			var_0_object = var_13_object;
			var_5_object = 0;
		} else {
			Trigger(var_0_object, "restore");
	}
		var_33_bool = var_2_string == "remove_girl";
		if(var_33_bool != 0) {
			SetVariable("d5q01NudeInKabak", (int)0);
			var_36_object = var_0_object;
			if(var_36_object != 0) {
				Trigger(var_0_object, "cleanup");
			}
			goto Label_96;
		}
		var_39_bool = var_2_string == "place_gorbun";
		if(var_39_bool != 0) {
			SetVariable("d5q01Gorbun", (int)1);
			var_42_bool = var_1_object == 0; //@nz
			if(var_42_bool != 0) {
				GetSceneByName(var_6_object, "lc_House6_05");
				var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = "";
				var_6_object = var_45_object;
				func_185(var_44_object, var_45_object, "pt_gorbun", "pers_bomber", "d5q02_gorbun.xml");
				var_1_object = var_44_object;
				var_6_object = 0;
			} else {
				Trigger(var_1_object, "restore");
		}
			var_51_bool = var_2_string == "remove_gorbun";
			if(var_51_bool != 0) {
				SetVariable("d5q01Gorbun", (int)0);
				var_54_object = var_1_object;
				if(var_54_object != 0) {
					Trigger(var_1_object, "cleanup");
				}
				goto Label_96;
			}
			var_57_bool = var_2_string == "completed";
			if(var_57_bool == 0) goto Label_96;
			func_116();
		}
		goto Label_96;
	}
	goto Label_96;
	
Label_96:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_97();
	return 0;
}


main(var_0_object, var_1_object)
{
	SetVariable("d5q02", (int)1);
	var_4_int = 0;
	func_155((int)5);
	return 0;
}


func_97()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("d5q02", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_108();
	}
	return 2;
}


func_138(var_0_object, var_1_object)
{
	EventDisable(26);
	var_10_object = var_0_object;
	if(var_10_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_12_object = var_1_object;
	if(var_12_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_14_object = Obj();
	func_179(var_14_object);
	RemoveActor(var_14_object);
	return 0;
}


func_108()
{
	SetVariable("d5q02", (int)-1);
	func_138(var_4_int, var_5_int);
	return 0;
}


func_179(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_116()
{
	var_58_int = 0; var_59_int = 0;
	GetVariable("d5q02", var_59_int);
	var_61_bool = 0;
	var_61_bool = 0;
	var_63_bool = var_59_int != (int)1000;
	if(var_63_bool != 0) {
		var_65_bool = var_59_int != (int)-1;
		if(var_65_bool != 0) {
			var_61_bool = 1;
		}
	}
	if(var_61_bool != 0) {
		SetVariable("d5q02", (int)1000);
		func_138(var_58_int, var_59_int);
	}
	return 2;
}


func_185(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
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


func_155(var_4_int)
{
	var_5_float = 0; var_6_float = 0;
	GetGameTime(var_6_float);
	var_8_float = var_4_int * (int)24;
	var_9_bool = var_6_float >= var_8_float;
	if(var_9_bool != 0) {
		func_138(var_5_float, var_6_float);
	} else {
		var_19_float = var_4_int * (int)24;
		SetTimeEvent((int)0, var_19_float);
		Hold();
	}
	return 2;
	
}


