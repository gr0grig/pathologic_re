// @IMPORTS: Hold/0,GetGameTime/1,self/1,Trace/1,AddActor/6,FindActor/2,Trigger/2
// @STRINGS: W:quest_d11_02|W:uprava_load|W:pt_Block|W:NPC_Block|W:NPC_Danko_Block.xml|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_5: op=0x5 vars=

task_0_event_5(var_0_bool)
{
	var_1_float = 0; var_2_float = 0;
	var_3_bool = 0; var_4_string = ""; var_5_string = "";
	func_54(var_3_bool, "quest_d11_02", "uprava_load");
	var_9_bool = var_0_bool == 0; //@nz
	if(var_9_bool != 0) {
		GetGameTime(var_2_float);
		var_11_bool = var_2_float >= (int)192;
		if(var_11_bool != 0) {
			var_0_bool = true;
			var_12_object = Obj(); var_13_object = Obj(); var_14_string = ""; var_15_string = ""; var_16_string = "";
			func_30(Obj());
			var_17_object = var_13_object;
			func_36(var_12_object, var_13_object, "pt_Block", "NPC_Block", "NPC_Danko_Block.xml");
		}
	}
	return 2;
}


main(var_0_bool)
{
	var_0_bool = false;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_36(var_12_object, var_13_object, var_14_string, var_15_string, var_16_string)
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


func_54(var_3_bool, var_4_string, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj();
	FindActor(var_7_object, var_4_string);
	var_8_bool = var_7_object == 0; //@ne
	if(var_8_bool != 0) {
		var_3_bool = 0;
		return 2;
	}
	Trigger(var_7_object, var_5_string);
	var_3_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_30(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


