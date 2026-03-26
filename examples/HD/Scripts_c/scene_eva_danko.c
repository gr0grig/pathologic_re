// @IMPORTS: SetTimeEvent/2,Hold/0,Trace/1,GetGameTime/1,RemoveActor/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,AddActor/6,AddMessage/4,SendWorldWndMessage/1
// @STRINGS: W:pt_eva|W:NPC_Eva|W:NPC_Danko_Eva.xml|W:pers_nudegirl|W:nudegirl_danko.xml|W:OnGameTime|W: |W:quest_d8_02|W:noeva|W:.bin|A:GetLocator|W:Locator |W: doesn't exist
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,object,object params=0
// @EVENT_5: op=0x1c vars=
// @EVENT_9: op=0x37 vars=int,float
// @EVENT_6: op=0x82 vars=
// @EVENT_26: op=0x8b vars=string
// @PE: 0x8b,0xb9,0xc2

task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_bool = var_0_bool;
	if(var_4_bool != 0) {
		var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = ""; var_9_string = "";
		func_150(Obj());
		var_10_object = var_6_object;
		func_167(var_5_object, var_6_object, "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
		var_2_object = var_5_object;
	}
	var_26_bool = var_1_bool;
	if(var_26_bool != 0) {
		var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
		func_150(Obj());
		var_32_object = var_28_object;
		func_167(var_27_object, var_28_object, "pt_eva", "pers_nudegirl", "nudegirl_danko.xml");
		var_3_object = var_27_object;
	}
	return 0;
}


task_0_event_9(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_float)
{
	var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0;
	var_13_int = "OnGameTime" + var_4_int;
	var_15_int = var_13_int + " ";
	var_16_int = var_15_int + var_5_float;
	Trace(var_16_int);
	var_18_bool = var_4_int == (int)1;
	if(var_18_bool != 0) {
		var_0_bool = false;
		var_1_bool = true;
	} else {
		var_20_bool = var_4_int == (int)2;
		if(var_20_bool != 0) {
			var_21_bool = var_2_object == 0; //@nz
			if(var_21_bool != 0) {
				var_22_int = 0; var_23_float = 0;
				var_5_float = var_23_float;
				func_185(var_22_int, var_23_float);
				GetGameTime(var_9_float);
				var_9_float = var_9_float + (int)1;
				SetTimeEvent((int)4, var_9_float);
			} else {
				GetGameTime(var_10_float);
				var_10_float = var_10_float + (float)0.30000001192092896;
				var_35_bool = var_10_float < (int)190;
				if(var_35_bool == 0) goto Label_95;
				SetTimeEvent(var_4_int, var_10_float);
		}
			var_37_bool = var_4_int == (int)3;
			if(var_37_bool != 0) {
				var_38_bool = 0;
				var_38_bool = 0;
				var_39_bool = var_3_object == 0; //@nz
				if(var_39_bool != 0) {
					var_40_bool = var_2_object == 0; //@nz
					if(var_40_bool != 0) {
						var_38_bool = 1;
					}
				}
				if(var_38_bool != 0) {
					var_41_object = Obj(); var_42_string = "";
					func_156(var_41_object, "quest_d8_02");
				} else {
					GetGameTime(var_11_float);
					var_11_float = var_11_float + (float)0.30000001192092896;
					var_51_bool = var_11_float < (int)189;
					if(var_51_bool == 0) goto Label_121;
					SetTimeEvent(var_4_int, var_11_float);
			}
				var_53_bool = var_4_int == (int)4;
				if(var_53_bool == 0) goto Label_129;
				var_54_int = 0; var_55_float = 0;
				var_5_float = var_55_float;
				func_194(var_54_int, var_55_float);
			}
		Label_121:
			goto Label_129;
		}
	Label_95:
		goto Label_129;
	}
Label_129:
	return 6;
	
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
	var_6_bool = var_4_string == "noeva";
	if(var_6_bool != 0) {
		var_0_bool = false;
	} else {
		var_8_bool = var_4_string == "eva";
		if(var_8_bool == 0) goto Label_149;
		var_0_bool = true;
	}
Label_149:
	return 0;
	
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	SetTimeEvent((int)1, (int)151);
	SetTimeEvent((int)2, (float)151.5);
	SetTimeEvent((int)3, (int)180);
	var_0_bool = true;
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = "";
	func_150(Obj());
	var_15_object = var_11_object;
	func_167(var_10_object, var_11_object, "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
	var_2_object = var_10_object;
	
Label_24:
	Hold();
	goto Label_24;
}
EMIT "Return(); Pop(0)";


func_194(var_54_int, var_55_float)
{
	var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_float = 0;
	var_55_float = var_59_float;
	func_203(var_56_int, (int)533228, (int)533227, var_59_float);
	var_56_int = var_54_int;
	return 0;
}


func_167(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj();
	@@var_11_object:GetLocator(var_12_string, var_22_bool, var_23_cvector, var_24_cvector);
	var_26_bool = var_22_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_28_int = "Locator " + var_12_string;
		var_30_int = var_28_int + " doesn't exist";
		Trace(var_30_int);
	} else {
		AddActor(Obj(), var_13_string, var_11_object, var_23_cvector, var_24_cvector, var_14_string);
	}
	var_25_object = var_10_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_203(var_24_int, var_25_int, var_26_int, var_27_float)
{
	var_28_int = 0; var_29_int = 0;
	AddMessage(var_25_int, var_26_int, var_27_float, var_29_int);
	SendWorldWndMessage((int)6);
	var_29_int = var_24_int;
	return 2;
}


func_150(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	self(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_185(var_22_int, var_23_float)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_float = 0;
	var_23_float = var_27_float;
	func_203(var_24_int, (int)533094, (int)533093, var_27_float);
	var_24_int = var_22_int;
	return 0;
}


func_156(var_41_object, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj();
	GetMainOutdoorScene(var_45_object);
	var_48_int = var_42_string + ".bin";
	AddBlankActor(var_46_object, var_45_object, var_42_string, var_48_int);
	var_46_object = var_41_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


