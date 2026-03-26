// @IMPORTS: SetVariable/2,Trace/1,GetSceneByName/2,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:k7q03|W:place_family|W:burah_home|W:pt_k7q03_father|W:pers_unosha|W:k7q03_father.xml|W:pt_k7q03_daughter|W:pers_littlegirl|W:k7q03_daughter.xml|W:pt_k7q03_son|W:pers_littleboy|W:k7q03_son.xml|W:completed|W:fail|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0x7e vars=int,float
// @PE: 0x7e

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj();
	Trace(var_3_string);
	var_7_bool = var_3_string == "place_family";
	if(var_7_bool != 0) {
		GetSceneByName(var_5_object, "burah_home");
		var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = "";
		var_5_object = var_10_object;
		func_137(var_9_object, var_10_object, "pt_k7q03_father", "pers_unosha", "k7q03_father.xml");
		var_0_object = var_9_object;
		var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
		var_5_object = var_28_object;
		func_137(var_27_object, var_28_object, "pt_k7q03_daughter", "pers_littlegirl", "k7q03_daughter.xml");
		var_1_object = var_27_object;
		var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = "";
		var_5_object = var_33_object;
		func_137(var_32_object, var_33_object, "pt_k7q03_son", "pers_littleboy", "k7q03_son.xml");
		var_2_object = var_32_object;
		var_5_object = 0;
	} else {
		var_38_bool = var_3_string == "completed";
		if(var_38_bool != 0) {
			func_77();
			goto Label_57;
		}
		var_51_bool = var_3_string == "fail";
		if(var_51_bool == 0) goto Label_57;
		func_69();
	}
Label_57:
	return 2;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_58();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	SetVariable("k7q03", (int)1);
	var_5_int = 0;
	func_107((int)7);
	return 0;
}


func_131(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_69()
{
	SetVariable("k7q03", (int)-1);
	func_85(var_4_float, var_5_int, var_6_int);
	return 0;
}


func_137(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
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


func_107(var_5_int)
{
	var_6_float = 0; var_7_float = 0;
	GetGameTime(var_7_float);
	var_9_float = var_5_int * (int)24;
	var_10_bool = var_7_float >= var_9_float;
	if(var_10_bool != 0) {
		func_85(var_5_int, var_6_float, var_7_float);
	} else {
		var_22_float = var_5_int * (int)24;
		SetTimeEvent((int)0, var_22_float);
		Hold();
	}
	return 2;
	
}


func_77()
{
	SetVariable("k7q03", (int)1000);
	func_85(var_3_string, var_4_object, var_5_object);
	return 0;
}


func_85(var_0_object, var_1_object, var_2_object)
{
	EventDisable(26);
	var_11_object = var_0_object;
	if(var_11_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_13_object = var_1_object;
	if(var_13_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_15_object = var_2_object;
	if(var_15_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_17_object = Obj();
	func_131(var_17_object);
	RemoveActor(var_17_object);
	return 0;
}


func_58()
{
	var_5_int = 0; var_6_int = 0;
	GetVariable("k7q03", var_6_int);
	var_9_bool = var_6_int != (int)1000;
	if(var_9_bool != 0) {
		func_69();
	}
	return 2;
}


