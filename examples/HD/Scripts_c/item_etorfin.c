// @IMPORTS: GetGameTime/1,sync/0,HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2
// @STRINGS: W:health|W:tiredness|W:sleeping|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @PE: 0x1b,0x72

main(var_0_bool)
{
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0;
	func_82(var_1_bool, "health", (float)0.3499999940395355, (float)0, (float)1);
	var_17_float = 0;
	func_135((float)0.3499999940395355);
	var_25_bool = 0; var_26_string = ""; var_27_float = 0; var_28_float = 0; var_29_float = 0;
	func_82(var_25_bool, "tiredness", (float)0.3499999940395355, (float)0, (float)1);
	var_30_float = 0;
	func_125((float)0.3499999940395355);
	var_34_float = 0;
	func_50((float)10.0);
	return 0;
}


func_101(var_48_bool)
{
	var_49_bool = 0; var_50_bool = 0; var_51_bool = 0; var_52_bool = 0;
	HasProperty("sleeping", var_51_bool);
	var_54_bool = var_51_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_48_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_52_bool);
	var_52_bool = var_48_bool;
	return 4;
}


func_135(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj();
	CreateFloatVector(var_19_object);
	@@var_19_object:add(var_17_float);
	var_21_bool = var_17_float < (int)0;
	if(var_21_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_19_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_82(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float)
{
	var_6_bool = 0; var_7_float = 0; var_8_bool = 0; var_9_float = 0;
	HasProperty(var_2_string, var_8_bool);
	var_10_bool = var_8_bool == 0; //@nz
	if(var_10_bool != 0) {
		var_1_bool = 0;
		return 4;
	}
	GetProperty(var_2_string, var_9_float);
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0;
	var_12_float = var_9_float + var_3_float;
	var_4_float = var_13_float;
	var_5_float = var_14_float;
	func_114(var_11_float, var_12_float, var_13_float, var_14_float);
	SetProperty(var_2_string, var_11_float);
	var_1_bool = 1;
	return 4;
}


func_50(var_34_float)
{
	var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0;
	GetGameTime(var_39_float);
	var_40_float = var_39_float + var_34_float;
	var_39_float = var_41_float;
	
Label_55:
	sync();
	var_43_bool = var_0_bool;
	if(var_43_bool != 0) {
	} else {
		GetGameTime(var_42_float);
		var_44_bool = var_42_float <= var_41_float;
		if(var_44_bool != 0) {
		} else {
			var_45_bool = var_42_float >= var_40_float;
			if(var_45_bool != 0) {
				var_46_bool = 0; var_47_float = 0;
				var_47_float = var_40_float - var_41_float;
				func_27(var_46_bool, var_47_float);
				goto Label_81;
			EMIT "GOTO 0x50";
			}
			var_68_bool = 0; var_69_float = 0;
			var_69_float = var_42_float - var_41_float;
			func_27(var_68_bool, var_69_float);
			if(var_68_bool != 0) {
				goto Label_81;
			}
			var_42_float = var_41_float;
		}
		goto Label_55;
	}
Label_81:
	return 8;
	
}


func_114(var_11_float, var_12_float, var_13_float, var_14_float)
{
	var_15_bool = var_12_float < var_13_float;
	if(var_15_bool != 0) {
		var_13_float = var_11_float;
		return 0;
	}
	var_16_bool = var_12_float > var_14_float;
	if(var_16_bool != 0) {
		var_14_float = var_11_float;
		return 0;
	}
	var_12_float = var_11_float;
	return 0;
}


func_27(var_46_bool, var_47_float)
{
	var_48_bool = 0;
	func_101(var_48_bool);
	if(var_48_bool != 0) {
		var_56_bool = 0; var_57_string = ""; var_58_float = 0; var_59_float = 0; var_60_float = 0;
		var_58_float = var_47_float * (float)0.30000001192092896;
		func_82(var_56_bool, "health", var_58_float, (float)0, (float)1);
		var_62_bool = 0; var_63_string = ""; var_64_float = 0; var_65_float = 0; var_66_float = 0;
		var_64_float = var_47_float * (float)-0.30000001192092896;
		func_82(var_62_bool, "tiredness", var_64_float, (float)0, (float)1);
	}
	var_46_bool = 0;
	return 0;
}


func_125(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateFloatVector(var_32_object);
	@@var_32_object:add(var_30_float);
	SendWorldWndMessage((int)11, var_32_object);
	return 2;
}
EMIT "Stack[-1] = 0";


