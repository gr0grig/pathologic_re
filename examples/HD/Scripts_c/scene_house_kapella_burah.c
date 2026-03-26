// @IMPORTS: Hold/0,RemoveActor/1,self/1,Trace/1,AddActor/6
// @STRINGS: W:pt_kapella|W:NPC_Kapella|W:NPC_Burah_Kapella.xml|W:pt_han|W:NPC_Han|W:NPC_Burah_Han.xml|W:nokapella|W:nohan|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,object,object params=0
// @EVENT_5: op=0x6 vars=
// @EVENT_6: op=0x21 vars=
// @EVENT_26: op=0x2a vars=string
// @PE: 0x2a

task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_bool = var_0_bool;
	if(var_4_bool != 0) {
		var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = ""; var_9_string = "";
		func_63(Obj());
		var_10_object = var_6_object;
		func_69(var_5_object, var_6_object, "pt_kapella", "NPC_Kapella", "NPC_Burah_Kapella.xml");
		var_2_object = var_5_object;
	}
	var_26_bool = var_1_bool;
	if(var_26_bool != 0) {
		var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
		func_63(Obj());
		var_32_object = var_28_object;
		func_69(var_27_object, var_28_object, "pt_han", "NPC_Han", "NPC_Burah_Han.xml");
		var_3_object = var_27_object;
	}
	return 0;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_object = var_2_object;
	if(var_4_object != 0) {
		RemoveActor(var_2_object);
	}
	var_5_object = var_3_object;
	if(var_5_object != 0) {
		RemoveActor(var_3_object);
	}
	return 0;
}


task_0_event_26(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string)
{
	var_6_bool = var_4_string == "nokapella";
	if(var_6_bool != 0) {
		var_0_bool = false;
	} else {
		var_8_bool = var_4_string == "kapella";
		if(var_8_bool != 0) {
			var_0_bool = true;
			goto Label_62;
		}
		var_10_bool = var_4_string == "nohan";
		if(var_10_bool != 0) {
			var_1_bool = false;
			goto Label_62;
		}
		var_12_bool = var_4_string == "han";
		if(var_12_bool == 0) goto Label_62;
		var_1_bool = true;
	}
Label_62:
	return 0;
	
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_0_bool = true;
	var_1_bool = false;
	
Label_2:
	Hold();
	goto Label_2;
}
EMIT "Return(); Pop(0)";


func_69(var_5_object, var_6_object, var_7_string, var_8_string, var_9_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj();
	@@var_6_object:GetLocator(var_7_string, var_17_bool, var_18_cvector, var_19_cvector);
	var_21_bool = var_17_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_23_int = "Locator " + var_7_string;
		var_25_int = var_23_int + " doesn't exist";
		Trace(var_25_int);
	} else {
		AddActor(Obj(), var_8_string, var_6_object, var_18_cvector, var_19_cvector, var_9_string);
	}
	var_20_object = var_5_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_63(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


