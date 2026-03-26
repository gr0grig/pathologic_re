// @IMPORTS: GetProperty/2,SetProperty/2,GetGameTime/1,sync/0,HasProperty/2
// @STRINGS: W:immunity
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @PE: 0x54

main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0;
	GetProperty("immunity", var_2_float);
	var_5_bool = var_2_float < (float)0.699999988079071;
	if(var_5_bool != 0) {
		SetProperty("immunity", (float)0.699999988079071);
	}
	var_8_float = 0;
	func_33((float)4.0);
	return 2;
}


func_16(var_20_bool, var_21_float)
{
	var_22_float = 0; var_23_float = 0;
	GetProperty("immunity", var_23_float);
	var_26_bool = var_23_float < (float)0.699999988079071;
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_string = ""; var_29_float = 0; var_30_float = 0; var_31_float = 0;
		var_29_float = var_21_float * (float)1.0;
		func_65(var_27_bool, "immunity", var_29_float, (float)0, (float)0.699999988079071);
	}
	var_20_bool = 0;
	return 2;
}


func_65(var_27_bool, var_28_string, var_29_float, var_30_float, var_31_float)
{
	var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_float = 0;
	HasProperty(var_28_string, var_35_bool);
	var_37_bool = var_35_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	GetProperty(var_28_string, var_36_float);
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0;
	var_39_float = var_36_float + var_29_float;
	var_30_float = var_40_float;
	var_31_float = var_41_float;
	func_84(var_38_float, var_39_float, var_40_float, var_41_float);
	SetProperty(var_28_string, var_38_float);
	var_27_bool = 1;
	return 4;
}


func_84(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float;
	if(var_42_bool != 0) {
		var_40_float = var_38_float;
		return 0;
	}
	var_43_bool = var_39_float > var_41_float;
	if(var_43_bool != 0) {
		var_41_float = var_38_float;
		return 0;
	}
	var_39_float = var_38_float;
	return 0;
}


func_33(var_8_float)
{
	var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0;
	GetGameTime(var_13_float);
	var_14_float = var_13_float + var_8_float;
	var_13_float = var_15_float;
	
Label_38:
	sync();
	var_17_bool = var_0_bool;
	if(var_17_bool != 0) {
	} else {
		GetGameTime(var_16_float);
		var_18_bool = var_16_float <= var_15_float;
		if(var_18_bool != 0) {
		} else {
			var_19_bool = var_16_float >= var_14_float;
			if(var_19_bool != 0) {
				var_20_bool = 0; var_21_float = 0;
				var_21_float = var_14_float - var_15_float;
				func_16(var_20_bool, var_21_float);
				goto Label_64;
			EMIT "GOTO 0x3f";
			}
			var_44_bool = 0; var_45_float = 0;
			var_45_float = var_16_float - var_15_float;
			func_16(var_44_bool, var_45_float);
			if(var_44_bool != 0) {
				goto Label_64;
			}
			var_16_float = var_15_float;
		}
		goto Label_38;
	}
Label_64:
	return 8;
	
}


