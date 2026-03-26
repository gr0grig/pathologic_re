// @IMPORTS: Hold/0,GetGameTime/1,RemoveActor/1,self/1,Trace/1,AddActor/6
// @STRINGS: W:pt_d11q03_Burah|W:NPC_Burah|W:d11q03_Burah.xml|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object params=0
// @EVENT_5: op=0x5 vars=

task_0_event_5(var_0_bool, var_1_object)
{
	var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0;
	var_6_bool = var_0_bool == 0; //@nz
	if(var_6_bool != 0) {
		GetGameTime(var_4_float);
		var_7_bool = 0;
		var_7_bool = 0;
		var_9_bool = var_4_float >= (int)240;
		if(var_9_bool != 0) {
			var_11_bool = var_4_float < (int)264;
			if(var_11_bool != 0) {
				var_7_bool = 1;
			}
		}
		if(var_7_bool != 0) {
			var_0_bool = true;
			var_12_object = Obj(); var_13_object = Obj(); var_14_string = ""; var_15_string = ""; var_16_string = "";
			func_44(Obj());
			var_17_object = var_13_object;
			func_50(var_12_object, var_13_object, "pt_d11q03_Burah", "NPC_Burah", "d11q03_Burah.xml");
			var_1_object = var_12_object;
		}
	} else {
		GetGameTime(var_5_float);
		var_34_bool = var_5_float >= (int)264;
		if(var_34_bool == 0) goto Label_43;
		var_35_object = var_1_object;
		if(var_35_object != 0) {
			RemoveActor(var_1_object);
		}
		var_0_bool = false;
	}
Label_43:
	return 4;
	
}


main(var_0_bool, var_1_object)
{
	var_0_bool = false;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_50(var_12_object, var_13_object, var_14_string, var_15_string, var_16_string)
{
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj();
	@@var_13_object:GetLocator(var_14_string, var_24_bool, var_25_cvector, var_26_cvector);
	var_28_bool = var_24_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_30_int = "Locator " + var_14_string;
		var_32_int = var_30_int + " doesn't exist";
		Trace(var_32_int);
	} else {
		AddActor(Obj(), var_15_string, var_13_object, var_25_cvector, var_26_cvector, var_16_string);
	}
	var_27_object = var_12_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_44(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


