// @IMPORTS: GetProperty/2,SetProperty/2,rand/1,GetGameTime/1,sync/0,HasProperty/2
// @STRINGS: W:disease|W:hunger|W:health
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x3a,0x75

main()
{
	var_0_float = 0; var_1_float = 0;
	var_2_bool = 0;
	func_23(var_2_bool);
	var_26_bool = var_2_bool == 0; //@nz
	if(var_26_bool != 0) {
		GetProperty("disease", var_1_float);
		var_30_float = var_1_float * (float)0.5;
		SetProperty("disease", var_30_float);
	}
	func_18();
	return 2;
}


func_98(var_44_bool, var_45_string, var_46_float, var_47_float, var_48_float)
{
	var_50_bool = 0; var_51_float = 0; var_52_bool = 0; var_53_float = 0;
	HasProperty(var_45_string, var_52_bool);
	var_54_bool = var_52_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	GetProperty(var_45_string, var_53_float);
	var_55_float = 0; var_56_float = 0; var_57_float = 0; var_58_float = 0;
	var_56_float = var_53_float + var_46_float;
	var_47_float = var_57_float;
	var_48_float = var_58_float;
	func_117(var_55_float, var_56_float, var_57_float, var_58_float);
	SetProperty(var_45_string, var_55_float);
	var_44_bool = 1;
	return 4;
}


func_69(var_31_float)
{
	var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0;
	GetGameTime(var_36_float);
	var_37_float = var_36_float + var_31_float;
	var_36_float = var_38_float;
	
Label_74:
	sync();
	GetGameTime(var_39_float);
	var_40_bool = var_39_float <= var_38_float;
	if(var_40_bool != 0) {
	} else {
		var_41_bool = var_39_float >= var_37_float;
		if(var_41_bool != 0) {
			var_42_bool = 0; var_43_float = 0;
			var_43_float = var_37_float - var_38_float;
			func_58(var_42_bool, var_43_float);
			goto Label_97;
		EMIT "GOTO 0x60";

		Label_97:
			return 8;
		}
		var_61_bool = 0; var_62_float = 0;
		var_62_float = var_39_float - var_38_float;
		func_58(var_61_bool, var_62_float);
		if(var_61_bool != 0) {
			goto Label_97;
		}
		var_39_float = var_38_float;
	}
	goto Label_74;
	
}


func_18()
{
	var_31_float = 0;
	func_69((float)12.0);
	return 0;
}


func_117(var_55_float, var_56_float, var_57_float, var_58_float)
{
	var_59_bool = var_56_float < var_57_float;
	if(var_59_bool != 0) {
		var_57_float = var_55_float;
		return 0;
	}
	var_60_bool = var_56_float > var_58_float;
	if(var_60_bool != 0) {
		var_58_float = var_55_float;
		return 0;
	}
	var_56_float = var_55_float;
	return 0;
}


func_23(var_2_bool)
{
	var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_float = 0;
	GetProperty("disease", var_7_float);
	var_12_bool = 0;
	var_12_bool = 0;
	var_14_bool = var_7_float >= (float)0.0;
	if(var_14_bool != 0) {
		var_16_bool = var_7_float <= (float)0.4000000059604645;
		if(var_16_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		GetProperty("hunger", var_8_float);
		var_21_float = (float)2.0 * var_8_float;
		var_22_int = (int)1 + var_21_float;
		var_9_float = (float)0.15000000596046448 * var_22_int;
		rand(var_10_float);
		var_23_bool = var_10_float < var_9_float;
		if(var_23_bool != 0) {
			SetProperty("disease", (int)0);
			var_2_bool = 1;
			return 8;
		}
	}
	var_2_bool = 0;
	return 8;
}


func_58(var_42_bool, var_43_float)
{
	var_44_bool = 0; var_45_string = ""; var_46_float = 0; var_47_float = 0; var_48_float = 0;
	var_46_float = var_43_float * (float)-0.009999999776482582;
	func_98(var_44_bool, "health", var_46_float, (float)0, (float)1);
	var_42_bool = 0;
	return 0;
}


