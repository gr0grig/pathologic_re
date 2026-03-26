// @IMPORTS: Hold/0,RemoveActor/1,self/1,Trace/1,AddActor/6,FindActor/2,Trigger/2,GetGameTime/1
// @STRINGS: W:quest_d11_02|W:uprava_load|W:pt_d11_klara|W:NPC_Klara|W:d11_klara.xml|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_5: op=0x4 vars=
// @EVENT_6: op=0x1a vars=
// @PE: 0x4c

task_0_event_5(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_string = "";
	func_55(var_1_bool, "quest_d11_02", "uprava_load");
	var_7_bool = 0; var_8_int = 0;
	func_76(var_7_bool, (int)11);
	if(var_7_bool != 0) {
		var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; var_19_string = "";
		func_31(Obj());
		var_20_object = var_16_object;
		func_37(var_15_object, var_16_object, "pt_d11_klara", "NPC_Klara", "d11_klara.xml");
		var_0_object = var_15_object;
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


func_67(var_9_int)
{
	var_10_float = 0; var_11_float = 0;
	GetGameTime(var_11_float);
	var_13_int = 0;
	var_13_int = var_11_float / (int)24;
	var_9_int = (int)1 + var_13_int;
	return 2;
}


func_37(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string)
{
	var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj();
	@@var_16_object:GetLocator(var_17_string, var_27_bool, var_28_cvector, var_29_cvector);
	var_31_bool = var_27_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_33_int = "Locator " + var_17_string;
		var_35_int = var_33_int + " doesn't exist";
		Trace(var_35_int);
	} else {
		AddActor(Obj(), var_18_string, var_16_object, var_28_cvector, var_29_cvector, var_19_string);
	}
	var_30_object = var_15_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_76(var_7_bool, var_8_int)
{
	var_9_int = 0;
	func_67(var_9_int);
	var_7_bool = var_9_int == var_8_int;
	return 0;
}


func_55(var_1_bool, var_2_string, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj();
	FindActor(var_5_object, var_2_string);
	var_6_bool = var_5_object == 0; //@ne
	if(var_6_bool != 0) {
		var_1_bool = 0;
		return 2;
	}
	Trigger(var_5_object, var_3_string);
	var_1_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_31(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


