// @IMPORTS: GetProperty/2,SetProperty/2,rand/1,GetGameTime/1,sync/0,HasProperty/2
// @STRINGS: W:health|W:DiseaseSpeed|W:disease|W:hunger
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x47,0x82

main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0;
	func_36((bool)0);
	var_28_bool = 0; var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0;
	func_111(var_28_bool, "health", (float)-0.05000000074505806, (float)0, (float)1);
	GetProperty("DiseaseSpeed", var_2_float);
	var_3_float = var_2_float * (float)0.5;
	var_47_int = var_2_float - var_3_float;
	SetProperty("DiseaseSpeed", var_47_int);
	func_31();
	GetProperty("DiseaseSpeed", var_2_float);
	var_71_int = var_2_float + var_3_float;
	SetProperty("DiseaseSpeed", var_71_int);
	return 4;
}


func_130(var_38_float, var_39_float, var_40_float, var_41_float)
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


func_36(var_4_bool)
{
	var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0;
	GetProperty("disease", var_9_float);
	var_14_bool = 0;
	var_14_bool = 0;
	var_16_bool = var_9_float >= (float)0.30000001192092896;
	if(var_16_bool != 0) {
		var_18_bool = var_9_float <= (float)0.6000000238418579;
		if(var_18_bool != 0) {
			var_14_bool = 1;
		}
	}
	if(var_14_bool != 0) {
		GetProperty("hunger", var_10_float);
		var_23_float = (float)2.0 * var_10_float;
		var_24_int = (int)1 + var_23_float;
		var_11_float = (float)0.25 * var_24_int;
		rand(var_12_float);
		var_25_bool = var_12_float < var_11_float;
		if(var_25_bool != 0) {
			SetProperty("disease", (int)0);
			var_4_bool = 1;
			return 8;
		}
	}
	var_4_bool = 0;
	return 8;
}


func_71(var_59_bool, var_60_float)
{
	var_61_bool = 0; var_62_string = ""; var_63_float = 0; var_64_float = 0; var_65_float = 0;
	var_63_float = var_60_float * (float)-0.05000000074505806;
	func_111(var_61_bool, "health", var_63_float, (float)0, (float)1);
	var_59_bool = 0;
	return 0;
}


func_111(var_28_bool, var_29_string, var_30_float, var_31_float, var_32_float)
{
	var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_float = 0;
	HasProperty(var_29_string, var_35_bool);
	var_37_bool = var_35_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	GetProperty(var_29_string, var_36_float);
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0;
	var_39_float = var_36_float + var_30_float;
	var_31_float = var_40_float;
	var_32_float = var_41_float;
	func_130(var_38_float, var_39_float, var_40_float, var_41_float);
	SetProperty(var_29_string, var_38_float);
	var_28_bool = 1;
	return 4;
}


func_82(var_48_float)
{
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0;
	GetGameTime(var_53_float);
	var_54_float = var_53_float + var_48_float;
	var_53_float = var_55_float;
	
Label_87:
	sync();
	GetGameTime(var_56_float);
	var_57_bool = var_56_float <= var_55_float;
	if(var_57_bool != 0) {
	} else {
		var_58_bool = var_56_float >= var_54_float;
		if(var_58_bool != 0) {
			var_59_bool = 0; var_60_float = 0;
			var_60_float = var_54_float - var_55_float;
			func_71(var_59_bool, var_60_float);
			goto Label_110;
		EMIT "GOTO 0x6d";

		Label_110:
			return 8;
		}
		var_67_bool = 0; var_68_float = 0;
		var_68_float = var_56_float - var_55_float;
		func_71(var_67_bool, var_68_float);
		if(var_67_bool != 0) {
			goto Label_110;
		}
		var_56_float = var_55_float;
	}
	goto Label_87;
	
}


func_31()
{
	var_48_float = 0;
	func_82((float)6.0);
	return 0;
}


