// @IMPORTS: GetGameTime/1,sync/0,HasProperty/2,GetProperty/2,SetProperty/2
// @STRINGS: W:health|W:tiredness|W:sleeping
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x13,0x67

main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0;
	func_71(var_0_bool, "health", (float)0.3499999940395355, (float)0, (float)1);
	var_16_bool = 0; var_17_string = ""; var_18_float = 0; var_19_float = 0; var_20_float = 0;
	func_71(var_16_bool, "tiredness", (float)0.05000000074505806, (float)0, (float)1);
	var_21_float = 0;
	func_42((float)10.0);
	return 0;
}


func_103(var_10_float, var_11_float, var_12_float, var_13_float)
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


func_71(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
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
	func_103(var_10_float, var_11_float, var_12_float, var_13_float);
	SetProperty(var_1_string, var_10_float);
	var_0_bool = 1;
	return 4;
}


func_42(var_21_float)
{
	var_22_float = 0; var_23_float = 0; var_24_float = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0;
	GetGameTime(var_26_float);
	var_27_float = var_26_float + var_21_float;
	var_26_float = var_28_float;
	
Label_47:
	sync();
	GetGameTime(var_29_float);
	var_30_bool = var_29_float <= var_28_float;
	if(var_30_bool != 0) {
	} else {
		var_31_bool = var_29_float >= var_27_float;
		if(var_31_bool != 0) {
			var_32_bool = 0; var_33_float = 0;
			var_33_float = var_27_float - var_28_float;
			func_19(var_32_bool, var_33_float);
			goto Label_70;
		EMIT "GOTO 0x45";

		Label_70:
			return 8;
		}
		var_54_bool = 0; var_55_float = 0;
		var_55_float = var_29_float - var_28_float;
		func_19(var_54_bool, var_55_float);
		if(var_54_bool != 0) {
			goto Label_70;
		}
		var_29_float = var_28_float;
	}
	goto Label_47;
	
}


func_19(var_32_bool, var_33_float)
{
	var_34_bool = 0;
	func_90(var_34_bool);
	if(var_34_bool != 0) {
		var_42_bool = 0; var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0;
		var_44_float = var_33_float * (float)0.009999999776482582;
		func_71(var_42_bool, "health", var_44_float, (float)0, (float)1);
		var_48_bool = 0; var_49_string = ""; var_50_float = 0; var_51_float = 0; var_52_float = 0;
		var_50_float = var_33_float * (float)-0.009999999776482582;
		func_71(var_48_bool, "tiredness", var_50_float, (float)0, (float)1);
	}
	var_32_bool = 0;
	return 0;
}


func_90(var_34_bool)
{
	var_35_bool = 0; var_36_bool = 0; var_37_bool = 0; var_38_bool = 0;
	HasProperty("sleeping", var_37_bool);
	var_40_bool = var_37_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_38_bool);
	var_38_bool = var_34_bool;
	return 4;
}


