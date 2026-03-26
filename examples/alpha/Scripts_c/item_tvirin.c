// @IMPORTS: GetGameTime/1,sync/0,HasProperty/2,GetProperty/2,SetProperty/2
// @STRINGS: W:health|W:immunity|W:tiredness|W:sleeping
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x1a,0x66

main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0;
	func_70(var_0_bool, "health", (float)0.05000000074505806, (float)0, (float)1);
	var_16_bool = 0; var_17_string = ""; var_18_float = 0; var_19_float = 0; var_20_float = 0;
	func_70(var_16_bool, "immunity", (float)0.05000000074505806, (float)0, (float)1);
	var_21_bool = 0; var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0;
	func_70(var_21_bool, "tiredness", (float)0.05000000074505806, (float)0, (float)1);
	var_26_float = 0;
	func_41((float)12.0);
	return 0;
}


func_102(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float;
	if(var_14_bool != 0) {
		var_12_float = var_10_float;
		return 0;
	}
	var_15_bool = var_11_float > var_13_float;
	if(var_15_bool != 0) {
		var_13_float = var_10_float;
		return 0;
	}
	var_11_float = var_10_float;
	return 0;
}


func_70(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0;
	HasProperty(var_1_string, var_7_bool);
	var_9_bool = var_7_bool == 0; //@nz
	if(var_9_bool != 0) {
		var_0_bool = 0;
		return 4;
	}
	GetProperty(var_1_string, var_8_float);
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0;
	var_11_float = var_8_float + var_2_float;
	var_3_float = var_12_float;
	var_4_float = var_13_float;
	func_102(var_10_float, var_11_float, var_12_float, var_13_float);
	SetProperty(var_1_string, var_10_float);
	var_0_bool = 1;
	return 4;
}


func_41(var_26_float)
{
	var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0;
	GetGameTime(var_31_float);
	var_32_float = var_31_float + var_26_float;
	var_31_float = var_33_float;
	
Label_46:
	sync();
	GetGameTime(var_34_float);
	var_35_bool = var_34_float <= var_33_float;
	if(var_35_bool != 0) {
	} else {
		var_36_bool = var_34_float >= var_32_float;
		if(var_36_bool != 0) {
			var_37_bool = 0; var_38_float = 0;
			var_38_float = var_32_float - var_33_float;
			func_26(var_37_bool, var_38_float);
			goto Label_69;
		EMIT "GOTO 0x44";

		Label_69:
			return 8;
		}
		var_53_bool = 0; var_54_float = 0;
		var_54_float = var_34_float - var_33_float;
		func_26(var_53_bool, var_54_float);
		if(var_53_bool != 0) {
			goto Label_69;
		}
		var_34_float = var_33_float;
	}
	goto Label_46;
	
}


func_89(var_39_bool)
{
	var_40_bool = 0; var_41_bool = 0; var_42_bool = 0; var_43_bool = 0;
	HasProperty("sleeping", var_42_bool);
	var_45_bool = var_42_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_43_bool);
	var_43_bool = var_39_bool;
	return 4;
}


func_26(var_37_bool, var_38_float)
{
	var_39_bool = 0;
	func_89(var_39_bool);
	if(var_39_bool != 0) {
		var_47_bool = 0; var_48_string = ""; var_49_float = 0; var_50_float = 0; var_51_float = 0;
		var_49_float = var_38_float * (float)-0.10000000149011612;
		func_70(var_47_bool, "tiredness", var_49_float, (float)0, (float)1);
	}
	var_37_bool = 0;
	return 0;
}


