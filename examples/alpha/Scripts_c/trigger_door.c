// @IMPORTS: Hold/0,IsPlayerActor/2,Trace/1,GetActorName/1,GetSceneByName/2,Teleport/4,_strchr/3,_strsub/3,_strsub/4,GetProperty/2
// @STRINGS: W:Trigger is locked|W:@|W:Wrong door name|W:pt_|W:Destination scene '|W:' not found|A:GetLocator|W:Locator |W: not found in destination scene 
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_23: op=0x4 vars=object

task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_int = 0; var_4_string = ""; var_5_string = ""; var_6_object = Obj(); var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_bool = 0; var_11_string = ""; var_12_int = 0; var_13_string = ""; var_14_string = ""; var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	IsPlayerActor(var_0_object, var_10_bool);
	var_19_bool = var_10_bool == 0; //@nz
	if(var_19_bool != 0) {
		return 18;
	}
	var_20_bool = 0;
	func_90(var_20_bool);
	if(var_20_bool != 0) {
		Trace("Trigger is locked");
		return 18;
	}
	GetActorName(var_11_string);
	var_26_int = 0; var_27_string = ""; var_28_string = "";
	var_11_string = var_27_string;
	func_75(var_26_int, var_27_string, "@");
	var_26_int = var_12_int;
	var_32_bool = var_12_int == (int)-1;
	if(var_32_bool != 0) {
		Trace("Wrong door name");
		return 18;
	}
	var_34_string = ""; var_35_string = ""; var_36_int = 0; var_37_int = 0;
	var_11_string = var_35_string;
	var_12_int = var_37_int;
	func_85(var_34_string, var_35_string, (int)0, var_37_int);
	var_34_string = var_13_string;
	var_41_string = ""; var_42_string = ""; var_43_int = 0;
	var_11_string = var_42_string;
	var_43_int = var_12_int + (int)1;
	func_80(var_41_string, var_42_string, var_43_int);
	var_14_string = "pt_" + var_41_string;
	GetSceneByName(var_15_object, var_13_string);
	var_47_bool = var_15_object == 0; //@ne
	if(var_47_bool != 0) {
		var_49_int = "Destination scene '" + var_13_string;
		var_51_int = var_49_int + "' not found";
		Trace(var_51_int);
		return 18;
	}
	@@var_15_object:GetLocator(var_14_string, var_16_bool, var_17_cvector, var_18_cvector);
	var_52_bool = var_16_bool;
	if(var_52_bool != 0) {
		Teleport(var_0_object, var_15_object, var_17_cvector, var_18_cvector);
	} else {
		var_54_int = "Locator " + var_14_string;
		var_56_int = var_54_int + " not found in destination scene ";
		var_57_int = var_56_int + var_13_string;
		Trace(var_57_int);
	}
	return 18;
	
}
EMIT "Stack[-4] = 0";


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_80(var_41_string, var_42_string, var_43_int)
{
	var_45_string = ""; var_46_string = "";
	_strsub(var_46_string, var_42_string, var_43_int);
	var_46_string = var_41_string;
	return 2;
}


func_90(var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	GetProperty("locked", var_22_int);
	var_20_bool = var_22_int != (int)0;
	return 2;
}


func_75(var_26_int, var_27_string, var_28_string)
{
	var_29_int = 0; var_30_int = 0;
	_strchr(var_30_int, var_27_string, var_28_string);
	var_30_int = var_26_int;
	return 2;
}


func_85(var_34_string, var_35_string, var_36_int, var_37_int)
{
	var_38_string = ""; var_39_string = "";
	_strsub(var_39_string, var_35_string, var_36_int, var_37_int);
	var_39_string = var_34_string;
	return 2;
}


