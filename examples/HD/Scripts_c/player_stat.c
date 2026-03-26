// @IMPORTS: Sleep/1,GetGameTimeScale/1,GetProperty/2,SetProperty/2,HasProperty/2
// @STRINGS: W:DiseaseSpeed|W:hunger|W:immunity|W:disease|W:tiredness|W:health|W:sleeping
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0xa1

main()
{
	var_0_bool = 0; var_1_float = 0; var_2_float = 0; var_3_int = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_bool = 0; var_10_float = 0; var_11_float = 0; var_12_int = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0;
	
Label_1:
	Sleep((float)1.0);
	func_148((bool)0);
	var_19_bool = var_9_bool;
	var_27_bool = var_9_bool;
	if(var_27_bool != 0) {
		var_10_float = 200.0;
	} else {
						var_10_float = 1.0;
	}
	GetGameTimeScale(var_11_float);
	var_10_float = var_10_float * var_11_float;
	GetProperty("DiseaseSpeed", var_12_int);
	var_29_bool = 0; var_30_string = ""; var_31_float = 0; var_32_float = 0; var_33_float = 0;
	var_31_float = var_10_float * (float)0.0416666679084301;
	func_129(var_29_bool, "hunger", var_31_float, (float)0, (float)1);
	GetProperty("hunger", var_13_float);
	GetProperty("immunity", var_14_float);
	var_49_bool = var_14_float < (float)0.5;
	if(var_49_bool != 0) {
		var_51_float = (float)0.125 * var_10_float;
		var_14_float = var_14_float + var_51_float;
		var_53_bool = var_14_float > (float)0.5;
		if(var_53_bool != 0) {
			var_14_float = 0.5;
		}
		SetProperty("immunity", var_14_float);
	} else {
					var_95_bool = var_14_float > (float)0.5;
					if(var_95_bool == 0) goto Label_60;
					var_97_float = (float)0.0625 * var_10_float;
					var_14_float = var_14_float - var_97_float;
					var_99_bool = var_14_float < (int)0;
					if(var_99_bool != 0) {
						var_14_float = 0;
					}
					SetProperty("immunity", var_14_float);

	}
Label_60:
	GetProperty("disease", var_15_float);
	var_57_bool = var_15_float < (float)0.0010000000474974513;
	if(var_57_bool != 0) {
		var_15_float = 0;
	} else {
			var_85_bool = var_15_float < (float)0.3333333432674408;
			if(var_85_bool != 0) {
				var_87_float = (float)0.0069444444961845875 * var_10_float;
				var_88_float = var_87_float / var_12_int;
				var_15_float = var_15_float + var_88_float;
			} else {
				var_92_float = (float)0.0416666679084301 * var_10_float;
				var_93_float = var_92_float / var_12_int;
				var_15_float = var_15_float + var_93_float;

			}
			var_90_bool = var_15_float > (int)1;
			if(var_90_bool == 0) goto Label_84;
			var_15_float = 1;
	}
Label_84:
	SetProperty("disease", var_15_float);
	var_59_bool = 0; var_60_string = ""; var_61_float = 0; var_62_float = 0; var_63_float = 0;
	var_64_bool = var_9_bool;
	if(var_64_bool != 0) {
		var_65_float = -0.125;
	} else {
		var_83_float = 0.0625;

	}
	var_61_float = var_10_float * var_65_float;
	func_129(var_59_bool, "tiredness", var_61_float, (float)0, (float)1);
	GetProperty("tiredness", var_16_float);
	var_68_bool = var_15_float >= (float)0.0010000000474974513;
	if(var_68_bool != 0) {
		var_70_float = var_15_float * (float)0.1666666716337204;
		(float)0 = (float)0 + var_70_float;
	}
	var_72_bool = var_13_float == (int)1;
	if(var_72_bool != 0) {
		var_17_float = var_17_float + (float)0.3333333432674408;
	}
	var_75_bool = var_16_float == (int)1;
	if(var_75_bool != 0) {
		var_17_float = var_17_float + (float)0.1666666716337204;
	}
	var_77_bool = 0; var_78_string = ""; var_79_float = 0; var_80_float = 0; var_81_float = 0;
	var_82_int = -var_10_float;
	var_79_float = var_82_int * var_17_float;
	func_129(var_77_bool, "health", var_79_float, (float)0, (float)1);
	goto Label_1;
	
}
EMIT "Return(); Pop(18)";


func_129(var_29_bool, var_30_string, var_31_float, var_32_float, var_33_float)
{
	var_35_bool = 0; var_36_float = 0; var_37_bool = 0; var_38_float = 0;
	HasProperty(var_30_string, var_37_bool);
	var_39_bool = var_37_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	GetProperty(var_30_string, var_38_float);
	var_40_float = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0;
	var_41_float = var_38_float + var_31_float;
	var_32_float = var_42_float;
	var_33_float = var_43_float;
	func_161(var_40_float, var_41_float, var_42_float, var_43_float);
	SetProperty(var_30_string, var_40_float);
	var_29_bool = 1;
	return 4;
}


func_161(var_40_float, var_41_float, var_42_float, var_43_float)
{
	var_44_bool = var_41_float < var_42_float;
	if(var_44_bool != 0) {
		var_42_float = var_40_float;
		return 0;
	}
	var_45_bool = var_41_float > var_43_float;
	if(var_45_bool != 0) {
		var_43_float = var_40_float;
		return 0;
	}
	var_41_float = var_40_float;
	return 0;
}


func_148(var_19_bool)
{
	var_20_bool = 0; var_21_bool = 0; var_22_bool = 0; var_23_bool = 0;
	HasProperty("sleeping", var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_23_bool);
	var_23_bool = var_19_bool;
	return 4;
}


