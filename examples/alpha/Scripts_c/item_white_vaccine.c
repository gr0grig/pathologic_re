// @IMPORTS: GetProperty/2,SetProperty/2,GetGameTime/1,sync/0,HasProperty/2
// @STRINGS: W:immunity|W:health
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x17,0x5a

main()
{
	var_0_float = 0; var_1_float = 0;
	GetProperty("immunity", var_1_float);
	var_4_bool = var_1_float < (float)0.9900000095367432;
	if(var_4_bool != 0) {
		SetProperty("immunity", (float)0.9900000095367432);
	}
	var_7_bool = 0; var_8_string = ""; var_9_float = 0; var_10_float = 0; var_11_float = 0;
	func_71(var_7_bool, "health", (float)0.05000000074505806, (float)0, (float)1);
	var_23_float = 0;
	func_42((float)12.0);
	return 2;
}


func_42(var_23_float)
{
	var_24_float = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0;
	GetGameTime(var_28_float);
	var_29_float = var_28_float + var_23_float;
	var_28_float = var_30_float;
	
Label_47:
	sync();
	GetGameTime(var_31_float);
	var_32_bool = var_31_float <= var_30_float;
	if(var_32_bool != 0) {
	} else {
		var_33_bool = var_31_float >= var_29_float;
		if(var_33_bool != 0) {
			var_34_bool = 0; var_35_float = 0;
			var_35_float = var_29_float - var_30_float;
			func_23(var_34_bool, var_35_float);
			goto Label_70;
		EMIT "GOTO 0x45";

		Label_70:
			return 8;
		}
		var_48_bool = 0; var_49_float = 0;
		var_49_float = var_31_float - var_30_float;
		func_23(var_48_bool, var_49_float);
		if(var_48_bool != 0) {
			goto Label_70;
		}
		var_31_float = var_30_float;
	}
	goto Label_47;
	
}


func_23(var_34_bool, var_35_float)
{
	var_36_bool = 0; var_37_string = ""; var_38_float = 0; var_39_float = 0; var_40_float = 0;
	var_38_float = var_35_float * (float)2.0;
	func_71(var_36_bool, "immunity", var_38_float, (float)0, (float)0.9900000095367432);
	var_42_bool = 0; var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0;
	var_44_float = var_35_float * (float)-0.05000000074505806;
	func_71(var_42_bool, "health", var_44_float, (float)0, (float)1);
	var_34_bool = 0;
	return 0;
}


func_90(var_17_float, var_18_float, var_19_float, var_20_float)
{
	var_21_bool = var_18_float < var_19_float;
	if(var_21_bool != 0) {
		var_19_float = var_17_float;
		return 0;
	}
	var_22_bool = var_18_float > var_20_float;
	if(var_22_bool != 0) {
		var_20_float = var_17_float;
		return 0;
	}
	var_18_float = var_17_float;
	return 0;
}


func_71(var_7_bool, var_8_string, var_9_float, var_10_float, var_11_float)
{
	var_12_bool = 0; var_13_float = 0; var_14_bool = 0; var_15_float = 0;
	HasProperty(var_8_string, var_14_bool);
	var_16_bool = var_14_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_7_bool = 0;
		return 4;
	}
	GetProperty(var_8_string, var_15_float);
	var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_float = 0;
	var_18_float = var_15_float + var_9_float;
	var_10_float = var_19_float;
	var_11_float = var_20_float;
	func_90(var_17_float, var_18_float, var_19_float, var_20_float);
	SetProperty(var_8_string, var_17_float);
	var_7_bool = 1;
	return 4;
}


