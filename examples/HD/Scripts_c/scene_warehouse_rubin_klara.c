// @IMPORTS: Hold/0,RemoveActor/1,self/1,Trace/1,AddActor/6,FindActor/2,Trigger/2
// @STRINGS: W:pt_rubin|W:NPC_Rubin|W:NPC_Klara_Rubin.xml|W:quest_k10_01|W:warehouse_rubin_load|W:norubin|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object params=0
// @EVENT_5: op=0x5 vars=
// @EVENT_6: op=0x18 vars=
// @EVENT_26: op=0x1d vars=string
// @PE: 0x1d

task_0_event_5(var_0_bool, var_1_object)
{
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = "";
		func_40(Obj());
		var_8_object = var_4_object;
		func_46(var_3_object, var_4_object, "pt_rubin", "NPC_Rubin", "NPC_Klara_Rubin.xml");
		var_1_object = var_3_object;
	}
	var_24_bool = 0; var_25_string = ""; var_26_string = "";
	func_64(var_24_bool, "quest_k10_01", "warehouse_rubin_load");
	return 0;
}


task_0_event_6(var_0_bool, var_1_object)
{
	var_2_object = var_1_object;
	if(var_2_object != 0) {
		RemoveActor(var_1_object);
	}
	return 0;
}


task_0_event_26(var_0_bool, var_1_object, var_2_string)
{
	var_4_bool = var_2_string == "norubin";
	if(var_4_bool != 0) {
		var_0_bool = false;
	} else {
		var_6_bool = var_2_string == "rubin";
		if(var_6_bool == 0) goto Label_39;
		var_0_bool = true;
	}
Label_39:
	return 0;
	
}


main(var_0_bool, var_1_object)
{
	var_0_bool = true;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_40(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj();
	self(var_10_object);
	var_10_object = var_8_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_64(var_24_bool, var_25_string, var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj();
	FindActor(var_28_object, var_25_string);
	var_29_bool = var_28_object == 0; //@ne
	if(var_29_bool != 0) {
		var_24_bool = 0;
		return 2;
	}
	Trigger(var_28_object, var_26_string);
	var_24_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_46(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj();
	@@var_4_object:GetLocator(var_5_string, var_15_bool, var_16_cvector, var_17_cvector);
	var_19_bool = var_15_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_21_int = "Locator " + var_5_string;
		var_23_int = var_21_int + " doesn't exist";
		Trace(var_23_int);
	} else {
		AddActor(Obj(), var_6_string, var_4_object, var_16_cvector, var_17_cvector, var_7_string);
	}
	var_18_object = var_3_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


