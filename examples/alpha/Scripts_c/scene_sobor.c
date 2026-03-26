// @IMPORTS: Hold/0,GetGameTime/1,self/1,Trace/1,AddActor/6
// @STRINGS: W:pt_Aglaja|W:NPC_Aglaja|W:NPC_Danko_Aglaja.xml|W:noaglaja|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_5: op=0x5 vars=
// @EVENT_26: op=0x19 vars=string
// @PE: 0x19

task_0_event_5(var_0_bool)
{
	var_1_float = 0; var_2_float = 0;
	var_3_bool = var_0_bool == 0; //@nz
	if(var_3_bool != 0) {
		GetGameTime(var_2_float);
		var_5_bool = var_2_float >= (int)144;
		if(var_5_bool != 0) {
			var_0_bool = true;
			var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = "";
			func_31(Obj());
			var_11_object = var_7_object;
			func_37(var_6_object, var_7_object, "pt_Aglaja", "NPC_Aglaja", "NPC_Danko_Aglaja.xml");
		}
	}
	return 2;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "noaglaja";
	if(var_3_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


main(var_0_bool)
{
	var_0_bool = false;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_37(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	@@var_7_object:GetLocator(var_8_string, var_18_bool, var_19_cvector, var_20_cvector);
	var_22_bool = var_18_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Locator " + var_8_string;
		var_26_int = var_24_int + " doesn't exist";
		Trace(var_26_int);
	} else {
		AddActor(Obj(), var_9_string, var_7_object, var_19_cvector, var_20_cvector, var_10_string);
	}
	var_21_object = var_6_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_31(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


