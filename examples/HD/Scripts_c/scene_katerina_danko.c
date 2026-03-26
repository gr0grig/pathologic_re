// @IMPORTS: Hold/0,RemoveActor/1,self/1,Trace/1,AddActor/6,GetGameTime/1
// @STRINGS: W:pt_klara|W:NPC_Klara|W:d3_klara.xml|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_5: op=0x4 vars=
// @EVENT_6: op=0x15 vars=
// @PE: 0x3b

task_0_event_5(var_0_object)
{
	var_1_bool = 0; var_2_int = 0;
	func_59(var_1_bool, (int)3);
	if(var_1_bool != 0) {
		var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = "";
		func_26(Obj());
		var_14_object = var_10_object;
		func_32(var_9_object, var_10_object, "pt_klara", "NPC_Klara", "d3_klara.xml");
		var_0_object = var_9_object;
	}
	return 0;
}


task_0_event_6(var_0_object)
{
	var_1_object = var_0_object;
	if(var_1_object != 0) {
		RemoveActor(var_0_object);
	}
	return 0;
}


main(var_0_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_32(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj();
	@@var_10_object:GetLocator(var_11_string, var_21_bool, var_22_cvector, var_23_cvector);
	var_25_bool = var_21_bool == 0; //@nz
	if(var_25_bool != 0) {
		var_27_int = "Locator " + var_11_string;
		var_29_int = var_27_int + " doesn't exist";
		Trace(var_29_int);
	} else {
		AddActor(Obj(), var_12_string, var_10_object, var_22_cvector, var_23_cvector, var_13_string);
	}
	var_24_object = var_9_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_26(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_59(var_1_bool, var_2_int)
{
	var_3_int = 0;
	func_50(var_3_int);
	var_1_bool = var_3_int == var_2_int;
	return 0;
}


func_50(var_3_int)
{
	var_4_float = 0; var_5_float = 0;
	GetGameTime(var_5_float);
	var_7_int = 0;
	var_7_int = var_5_float / (int)24;
	var_3_int = (int)1 + var_7_int;
	return 2;
}


