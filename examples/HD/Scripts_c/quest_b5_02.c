// @IMPORTS: Trace/1,GetSceneByName/2,Trigger/2,GetVariable/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,FindActor/2,self/1,AddActor/6,Teleport/4
// @STRINGS: W:place_prophet|W:house_vlad|W:pt_prorok|W:pers_krysa|W:b5q02_prorok.xml|W:remove_prophet|W:cleanup|W:maze_start|W:pt_maze_start|W:fail|W:completed|W:b5q02|W:player|A:GetLocator|W:Locator |W: doesn't exist|W:Teleport location '|W:' not found in scene '
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_9: op=0x74 vars=int,float
// @PE: 0x74

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj();
	Trace(var_1_string);
	var_5_bool = var_1_string == "place_prophet";
	if(var_5_bool != 0) {
		GetSceneByName(var_3_object, "house_vlad");
		var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = "";
		var_3_object = var_8_object;
		func_134(var_7_object, var_8_object, "pt_prorok", "pers_krysa", "b5q02_prorok.xml");
		var_0_object = var_7_object;
		var_3_object = 0;
	} else {
		var_26_bool = var_1_string == "remove_prophet";
		if(var_26_bool != 0) {
			Trigger(var_0_object, "cleanup");
			goto Label_57;
		}
		var_29_bool = var_1_string == "maze_start";
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_string = ""; var_32_string = "";
			func_121(Obj());
			var_33_object = var_30_object;
			func_152(var_30_object, "house_vlad", "pt_maze_start");
			goto Label_57;
		}
		var_55_bool = var_1_string == "fail";
		if(var_55_bool != 0) {
			func_69();
			goto Label_57;
		}
		var_64_bool = var_1_string == "completed";
		if(var_64_bool == 0) goto Label_57;
		func_77();
	}
Label_57:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_58();
	return 0;
}


main(var_0_object)
{
	var_1_int = 0;
	func_97((int)5);
	return 0;
}


func_128(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_97(var_1_int)
{
	var_2_float = 0; var_3_float = 0;
	GetGameTime(var_3_float);
	var_5_float = var_1_int * (int)24;
	var_6_bool = var_3_float >= var_5_float;
	if(var_6_bool != 0) {
		func_85(var_3_float);
	} else {
		var_14_float = var_1_int * (int)24;
		SetTimeEvent((int)0, var_14_float);
		Hold();
	}
	return 2;
	
}


func_69()
{
	SetVariable("b5q02", (int)-1);
	func_85(var_4_int);
	return 0;
}


func_134(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj();
	@@var_8_object:GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector);
	var_20_bool = var_16_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_22_int = "Locator " + var_9_string;
		var_24_int = var_22_int + " doesn't exist";
		Trace(var_24_int);
	} else {
		AddActor(Obj(), var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string);
	}
	var_19_object = var_7_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_77()
{
	SetVariable("b5q02", (int)1000);
	func_85(var_3_object);
	return 0;
}


func_85(var_0_object)
{
	EventDisable(26);
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_9_object = Obj();
	func_128(var_9_object);
	RemoveActor(var_9_object);
	return 0;
}


func_152(var_30_object, var_31_string, var_32_string)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_45_bool = var_30_object == 0; //@nz
	if(var_45_bool != 0) {
		return 8;
	}
	GetSceneByName(var_41_object, var_31_string);
	@@var_41_object:GetLocator(var_32_string, var_42_bool, var_43_cvector, var_44_cvector);
	var_46_bool = var_42_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_48_int = "Teleport location '" + var_32_string;
		var_50_int = var_48_int + "' not found in scene '";
		var_51_int = var_50_int + var_31_string;
		var_53_int = var_51_int + "'";
		Trace(var_53_int);
	} else {
		Teleport(var_30_object, var_41_object, var_43_cvector, var_44_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_121(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj();
	FindActor(var_35_object, "player");
	var_35_object = var_33_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_58()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("b5q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_69();
	}
	return 2;
}


