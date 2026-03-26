// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,GetVariable/2,SetVariable/2,Trigger/2,RemoveActor/1,self/1,AddActor/6
// @STRINGS: W:place_butcher|W:house5_24|W:pt_b3q01_butcher|W:pers_butcher|W:b3q01_butcher.xml|W:cleanup|W:b3q01|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	Trace(var_1_string);
	var_7_bool = var_1_string == "place_butcher";
	if(var_7_bool != 0) {
		GetSceneByName(var_4_object, "house5_24");
		var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = "";
		var_4_object = var_10_object;
		func_88(var_9_object, var_10_object, "pt_b3q01_butcher", "pers_butcher", "b3q01_butcher.xml");
		var_0_object = var_9_object;
		var_4_object = 0;
	} else {
		var_28_bool = var_1_string == "cleanup";
		if(var_28_bool != 0) {
			GetVariable("b3q01", var_5_int);
			var_31_bool = var_5_int != (int)1000;
			if(var_31_bool != 0) {
				func_54();
			} else {
				func_70(var_5_int);
		}
			var_40_bool = var_1_string == "fail";
			if(var_40_bool != 0) {
				func_54();
				goto Label_53;
			}
			var_42_bool = var_1_string == "completed";
			if(var_42_bool == 0) goto Label_53;
			func_62();
		}
		goto Label_53;
	}
Label_53:
	return 4;
	
}


main(var_0_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_70(var_0_object)
{
	EventDisable(26);
	var_34_object = var_0_object;
	if(var_34_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_36_object = Obj();
	func_82(var_36_object);
	RemoveActor(var_36_object);
	return 0;
}


func_82(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	self(var_38_object);
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_54()
{
	SetVariable("b3q01", (int)-1);
	func_70(var_5_int);
	return 0;
}


func_88(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
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


func_62()
{
	SetVariable("b3q01", (int)1000);
	func_70(var_5_int);
	return 0;
}


