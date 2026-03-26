// @IMPORTS: SetTimeEvent/2,GetMainOutdoorScene/1,Hold/0,Trigger/2,Trace/1,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,AddActor/6
// @STRINGS: W:pt_b1q01_whitemask|W:pers_whitemask|W:b1q01_whitemask.xml|W:pt_b1q01_birdmask1|W:pers_birdmask|W:b1q01_birdmask1.xml|W:pt_b1q01_birdmask2|W:b1q01_birdmask2.xml|W:b1q01_trigger|W:b1q01_trigger.xml|W:cleanup|W:remove_whitemask|A:Remove|W:remove1|W:remove2|W:remove_cutscene|W:b1q01|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_9: op=0x2b vars=int,float
// @EVENT_26: op=0x32 vars=string
// @PE: 0x2b

task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	var_6_object = var_3_object;
	if(var_6_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	return 0;
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_int = 0; var_6_int = 0;
	Trace(var_4_string);
	var_8_bool = var_4_string == "remove_whitemask";
	if(var_8_bool != 0) {
		var_9_object = var_0_object;
		if(var_9_object != 0) {
			@@@var_0_object:Remove();
		}
	} else {
		var_11_bool = var_4_string == "remove1";
		if(var_11_bool != 0) {
			@@@var_1_object:Remove();
			goto Label_112;
		}
		var_13_bool = var_4_string == "remove2";
		if(var_13_bool != 0) {
			@@@var_2_object:Remove();
			goto Label_112;
		}
		var_15_bool = var_4_string == "remove_cutscene";
		if(var_15_bool != 0) {
			var_16_object = var_3_object;
			if(var_16_object != 0) {
				Trigger(var_3_object, "cleanup");
			}
			goto Label_112;
		}
		var_19_bool = var_4_string == "cleanup";
		if(var_19_bool != 0) {
			GetVariable("b1q01", var_6_int);
			var_22_bool = var_6_int != (int)1000;
			if(var_22_bool != 0) {
				func_113();
			} else {
				func_129(var_3_object, var_4_string, var_5_int, var_6_int);
		}
			var_34_bool = var_4_string == "fail";
			if(var_34_bool != 0) {
				func_113();
				goto Label_112;
			}
			var_36_bool = var_4_string == "completed";
			if(var_36_bool == 0) goto Label_112;
			func_121();
		}
		goto Label_112;
	}
Label_112:
	return 2;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	SetTimeEvent((int)0, (int)11);
	GetMainOutdoorScene(var_5_object);
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = "";
	var_5_object = var_9_object;
	func_167(var_8_object, var_9_object, "pt_b1q01_whitemask", "pers_whitemask", "b1q01_whitemask.xml");
	var_0_object = var_8_object;
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
	var_5_object = var_28_object;
	func_167(var_27_object, var_28_object, "pt_b1q01_birdmask1", "pers_birdmask", "b1q01_birdmask1.xml");
	var_1_object = var_27_object;
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = "";
	var_5_object = var_33_object;
	func_167(var_32_object, var_33_object, "pt_b1q01_birdmask2", "pers_birdmask", "b1q01_birdmask2.xml");
	var_2_object = var_32_object;
	var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = "";
	var_5_object = var_38_object;
	func_159(var_37_object, var_38_object, "b1q01_trigger", "b1q01_trigger.xml");
	var_3_object = var_37_object;
	
Label_38:
	Hold();
	goto Label_38;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_129(var_0_object, var_1_object, var_2_object, var_3_object)
{
	EventDisable(26);
	var_25_object = var_0_object;
	if(var_25_object != 0) {
		@@@var_0_object:Remove();
	}
	var_26_object = var_1_object;
	if(var_26_object != 0) {
		@@@var_1_object:Remove();
	}
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		@@@var_2_object:Remove();
	}
	var_28_object = var_3_object;
	if(var_28_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_30_object = Obj();
	func_153(var_30_object);
	RemoveActor(var_30_object);
	return 0;
}


func_121()
{
	SetVariable("b1q01", (int)1000);
	func_129(var_3_object, var_4_string, var_5_int, var_6_int);
	return 0;
}


func_167(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj();
	@@var_9_object:GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	var_21_bool = var_17_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_23_int = "Locator " + var_10_string;
		var_25_int = var_23_int + " doesn't exist";
		Trace(var_25_int);
	} else {
		@@var_9_object:AddStationaryActor(Obj(), var_18_cvector, var_19_cvector, var_11_string, var_12_string, (bool)1);
	}
	var_20_object = var_8_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_113()
{
	SetVariable("b1q01", (int)-1);
	func_129(var_3_object, var_4_string, var_5_int, var_6_int);
	return 0;
}


func_153(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	self(var_32_object);
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_159(var_37_object, var_38_object, var_39_string, var_40_string)
{
	var_41_object = Obj(); var_42_object = Obj();
	AddActor(var_42_object, var_39_string, var_38_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), var_40_string);
	var_42_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


