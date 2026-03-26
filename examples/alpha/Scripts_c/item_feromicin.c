// @IMPORTS: GetProperty/2,SetProperty/2,rand/1,GetGameTime/1,sync/0,HasProperty/2
// @STRINGS: W:health|W:disease|W:DiseaseSpeed|W:hunger
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x4f,0x8a

main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0;
	var_6_bool = 0; var_7_string = ""; var_8_float = 0; var_9_float = 0; var_10_float = 0;
	func_119(var_6_bool, "health", (float)-0.25, (float)0, (float)1);
	func_44((bool)0);
	GetProperty("disease", var_3_float);
	var_49_float = var_3_float * (float)0.5;
	SetProperty("disease", var_49_float);
	GetProperty("DiseaseSpeed", var_4_float);
	var_5_float = var_4_float * (float)0.5;
	var_53_int = var_4_float - var_5_float;
	SetProperty("DiseaseSpeed", var_53_int);
	func_39();
	GetProperty("DiseaseSpeed", var_4_float);
	var_77_int = var_4_float + var_5_float;
	SetProperty("DiseaseSpeed", var_77_int);
	return 6;
}


func_39()
{
	var_54_float = 0;
	func_90((float)6.0);
	return 0;
}


func_138(var_16_float, var_17_float, var_18_float, var_19_float)
{
	var_20_bool = var_17_float < var_18_float;
	if(var_20_bool != 0) {
		var_18_float = var_16_float;
		return 0;
	}
	var_21_bool = var_17_float > var_19_float;
	if(var_21_bool != 0) {
		var_19_float = var_16_float;
		return 0;
	}
	var_17_float = var_16_float;
	return 0;
}


func_44(var_22_bool)
{
	var_23_float = 0; var_24_float = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0;
	GetProperty("disease", var_27_float);
	var_32_bool = 0;
	var_32_bool = 0;
	var_34_bool = var_27_float >= (float)0.800000011920929;
	if(var_34_bool != 0) {
		var_36_bool = var_27_float <= (float)0.949999988079071;
		if(var_36_bool != 0) {
			var_32_bool = 1;
		}
	}
	if(var_32_bool != 0) {
		GetProperty("hunger", var_28_float);
		var_41_float = (float)1.0 * var_28_float;
		var_42_int = (int)1 + var_41_float;
		var_29_float = (float)0.33000001311302185 * var_42_int;
		rand(var_30_float);
		var_43_bool = var_30_float < var_29_float;
		if(var_43_bool != 0) {
			SetProperty("disease", (int)0);
			var_22_bool = 1;
			return 8;
		}
	}
	var_22_bool = 0;
	return 8;
}


func_79(var_65_bool, var_66_float)
{
	var_67_bool = 0; var_68_string = ""; var_69_float = 0; var_70_float = 0; var_71_float = 0;
	var_69_float = var_66_float * (float)-0.05000000074505806;
	func_119(var_67_bool, "health", var_69_float, (float)0, (float)1);
	var_65_bool = 0;
	return 0;
}


func_119(var_6_bool, var_7_string, var_8_float, var_9_float, var_10_float)
{
	var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0;
	HasProperty(var_7_string, var_13_bool);
	var_15_bool = var_13_bool == 0; //@nz
	if(var_15_bool != 0) {
		var_6_bool = 0;
		return 4;
	}
	GetProperty(var_7_string, var_14_float);
	var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0;
	var_17_float = var_14_float + var_8_float;
	var_9_float = var_18_float;
	var_10_float = var_19_float;
	func_138(var_16_float, var_17_float, var_18_float, var_19_float);
	SetProperty(var_7_string, var_16_float);
	var_6_bool = 1;
	return 4;
}


func_90(var_54_float)
{
	var_55_float = 0; var_56_float = 0; var_57_float = 0; var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_float = 0; var_62_float = 0;
	GetGameTime(var_59_float);
	var_60_float = var_59_float + var_54_float;
	var_59_float = var_61_float;
	
Label_95:
	sync();
	GetGameTime(var_62_float);
	var_63_bool = var_62_float <= var_61_float;
	if(var_63_bool != 0) {
	} else {
		var_64_bool = var_62_float >= var_60_float;
		if(var_64_bool != 0) {
			var_65_bool = 0; var_66_float = 0;
			var_66_float = var_60_float - var_61_float;
			func_79(var_65_bool, var_66_float);
			goto Label_118;
		EMIT "GOTO 0x75";

		Label_118:
			return 8;
		}
		var_73_bool = 0; var_74_float = 0;
		var_74_float = var_62_float - var_61_float;
		func_79(var_73_bool, var_74_float);
		if(var_73_bool != 0) {
			goto Label_118;
		}
		var_62_float = var_61_float;
	}
	goto Label_95;
	
}


