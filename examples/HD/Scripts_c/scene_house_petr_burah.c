// @IMPORTS: Hold/0,RemoveActor/1,self/1,Trace/1,AddActor/6
// @STRINGS: W:pt_petr|W:NPC_Petr|W:NPC_Burah_Petr.xml|W:nopetr|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object params=0
// @EVENT_5: op=0x5 vars=
// @EVENT_6: op=0x13 vars=
// @EVENT_26: op=0x18 vars=string
// @PE: 0x18

task_0_event_5(var_0_bool, var_1_object)
{
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = "";
		func_35(Obj());
		var_8_object = var_4_object;
		func_41(var_3_object, var_4_object, "pt_petr", "NPC_Petr", "NPC_Burah_Petr.xml");
		var_1_object = var_3_object;
	}
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
	var_4_bool = var_2_string == "nopetr";
	if(var_4_bool != 0) {
		var_0_bool = false;
	} else {
		var_6_bool = var_2_string == "petr";
		if(var_6_bool == 0) goto Label_34;
		var_0_bool = true;
	}
Label_34:
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


func_41(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string)
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


func_35(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj();
	self(var_10_object);
	var_10_object = var_8_object;
	return 2;
}
EMIT "Stack[-1] = 0";


