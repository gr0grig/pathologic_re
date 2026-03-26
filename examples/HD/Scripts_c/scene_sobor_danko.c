// @IMPORTS: Hold/0,GetVariable/2,RemoveActor/1,SetVariable/2,self/1,Trace/1,AddActor/6,FindActor/2,Trigger/2
// @STRINGS: W:sobor_aglaja|W:pt_Aglaja|W:NPC_Aglaja|W:NPC_Danko_Aglaja.xml|W:pt_sobor_mask1|W:pers_whitemask|W:sobor_whitemask.xml|W:pt_sobor_mask2|W:quest_d12_01|W:sobor_load|W:sobor_unload|W:noaglaja|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_5: op=0x4 vars=
// @EVENT_6: op=0x31 vars=
// @EVENT_26: op=0x43 vars=string
// @PE: 0x43

task_0_event_5(var_0_object, var_1_object, var_2_object)
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("sobor_aglaja", var_4_int);
	var_6_int = var_4_int;
	if(var_6_int != 0) {
		var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = "";
		func_84(Obj());
		var_12_object = var_8_object;
		func_90(var_7_object, var_8_object, "pt_Aglaja", "NPC_Aglaja", "NPC_Danko_Aglaja.xml");
		var_0_object = var_7_object;
		var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
		func_84(Obj());
		var_33_object = var_29_object;
		func_90(var_28_object, var_29_object, "pt_sobor_mask1", "pers_whitemask", "sobor_whitemask.xml");
		var_1_object = var_28_object;
		var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = "";
		func_84(Obj());
		var_39_object = var_35_object;
		func_90(var_34_object, var_35_object, "pt_sobor_mask2", "pers_whitemask", "sobor_whitemask.xml");
		var_2_object = var_34_object;
	}
	var_40_bool = 0; var_41_string = ""; var_42_string = "";
	func_108(var_40_bool, "quest_d12_01", "sobor_load");
	return 2;
}


task_0_event_6(var_0_object, var_1_object, var_2_object)
{
	var_3_object = var_0_object;
	if(var_3_object != 0) {
		RemoveActor(var_0_object);
	}
	var_4_object = var_1_object;
	if(var_4_object != 0) {
		RemoveActor(var_1_object);
	}
	var_5_object = var_2_object;
	if(var_5_object != 0) {
		RemoveActor(var_2_object);
	}
	var_6_bool = 0; var_7_string = ""; var_8_string = "";
	func_108(var_6_bool, "quest_d12_01", "sobor_unload");
	return 0;
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_5_bool = var_3_string == "noaglaja";
	if(var_5_bool != 0) {
		SetVariable("sobor_aglaja", (int)0);
	} else {
		var_9_bool = var_3_string == "aglaja";
		if(var_9_bool == 0) goto Label_83;
		SetVariable("sobor_aglaja", (int)1);
	}
Label_83:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_90(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	@@var_8_object:GetLocator(var_9_string, var_19_bool, var_20_cvector, var_21_cvector);
	var_23_bool = var_19_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_25_int = "Locator " + var_9_string;
		var_27_int = var_25_int + " doesn't exist";
		Trace(var_27_int);
	} else {
		AddActor(Obj(), var_10_string, var_8_object, var_20_cvector, var_21_cvector, var_11_string);
	}
	var_22_object = var_7_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_108(var_6_bool, var_7_string, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, var_7_string);
	var_11_bool = var_10_object == 0; //@ne
	if(var_11_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	Trigger(var_10_object, var_8_string);
	var_6_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_84(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	self(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


