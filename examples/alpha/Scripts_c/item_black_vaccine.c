// @IMPORTS: GetProperty/2,SetProperty/2,GetGameTime/1,sync/0,HasProperty/2
// @STRINGS: W:immunity
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x10,0x4b

main()
{
	var_0_float = 0; var_1_float = 0;
	GetProperty("immunity", var_1_float);
	var_4_bool = var_1_float < (float)0.6000000238418579;
	if(var_4_bool != 0) {
		SetProperty("immunity", (float)0.6000000238418579);
	}
	var_7_float = 0;
	func_27((float)6.0);
	return 2;
}


func_56(var_20_bool, var_21_string, var_22_float, var_23_float, var_24_float)
{
	var_26_bool = 0; var_27_float = 0; var_28_bool = 0; var_29_float = 0;
	HasProperty(var_21_string, var_28_bool);
	var_30_bool = var_28_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	GetProperty(var_21_string, var_29_float);
	var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0;
	var_32_float = var_29_float + var_22_float;
	var_23_float = var_33_float;
	var_24_float = var_34_float;
	func_75(var_31_float, var_32_float, var_33_float, var_34_float);
	SetProperty(var_21_string, var_31_float);
	var_20_bool = 1;
	return 4;
}


func_16(var_18_bool, var_19_float)
{
	var_20_bool = 0; var_21_string = ""; var_22_float = 0; var_23_float = 0; var_24_float = 0;
	var_22_float = var_19_float * (float)0.6000000238418579;
	func_56(var_20_bool, "immunity", var_22_float, (float)0, (float)0.6000000238418579);
	var_18_bool = 0;
	return 0;
}


func_75(var_31_float, var_32_float, var_33_float, var_34_float)
{
	var_35_bool = var_32_float < var_33_float;
	if(var_35_bool != 0) {
		var_33_float = var_31_float;
		return 0;
	}
	var_36_bool = var_32_float > var_34_float;
	if(var_36_bool != 0) {
		var_34_float = var_31_float;
		return 0;
	}
	var_32_float = var_31_float;
	return 0;
}


func_27(var_7_float)
{
	var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0;
	GetGameTime(var_12_float);
	var_13_float = var_12_float + var_7_float;
	var_12_float = var_14_float;
	
Label_32:
	sync();
	GetGameTime(var_15_float);
	var_16_bool = var_15_float <= var_14_float;
	if(var_16_bool != 0) {
	} else {
		var_17_bool = var_15_float >= var_13_float;
		if(var_17_bool != 0) {
			var_18_bool = 0; var_19_float = 0;
			var_19_float = var_13_float - var_14_float;
			func_16(var_18_bool, var_19_float);
			goto Label_55;
		EMIT "GOTO 0x36";

		Label_55:
			return 8;
		}
		var_37_bool = 0; var_38_float = 0;
		var_38_float = var_15_float - var_14_float;
		func_16(var_37_bool, var_38_float);
		if(var_37_bool != 0) {
			goto Label_55;
		}
		var_15_float = var_14_float;
	}
	goto Label_32;
	
}


