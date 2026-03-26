// @IMPORTS: Sleep/1,GetGameTimeScale/1,GetProperty/2,SetProperty/2,HasProperty/2
// @STRINGS: W:DiseaseSpeed|W:hunger|W:immunity|W:disease|W:tiredness|W:health|W:sleeping
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x87

main()
{
	var_0_bool = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0;
	
Label_1:
	Sleep((float)1.0);
	func_122((bool)0);
	var_21_bool = var_10_bool;
	var_29_bool = var_10_bool;
	if(var_29_bool != 0) {
		var_11_float = 200.0;
	} else {
				var_11_float = 1.0;
	}
	GetGameTimeScale(var_12_float);
	var_11_float = var_11_float * var_12_float;
	GetProperty("DiseaseSpeed", var_13_float);
	var_13_float = (float)1.0 / var_13_float;
	var_14_float = var_13_float * (float)0.699999988079071;
	var_33_bool = 0; var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0;
	var_35_float = var_11_float * (float)0.0416666679084301;
	func_103(var_33_bool, "hunger", var_35_float, (float)0, (float)1);
	GetProperty("hunger", var_15_float);
	var_51_bool = 0; var_52_string = ""; var_53_float = 0; var_54_float = 0; var_55_float = 0;
	var_56_int = -var_11_float;
	var_53_float = var_56_int * (float)0.0625;
	func_103(var_51_bool, "immunity", var_53_float, (float)0, (float)1);
	GetProperty("immunity", var_16_float);
	GetProperty("disease", var_17_float);
	var_60_float = var_16_float * var_14_float;
	var_61_int = var_13_float - var_60_float;
	var_62_float = var_11_float * var_61_int;
	var_63_float = var_62_float * var_17_float;
	var_17_float = var_17_float + var_63_float;
	var_65_bool = var_17_float < (float)0.009999999776482582;
	if(var_65_bool != 0) {
	} else {
			var_90_bool = (float)0 > (int)1;
			if(var_90_bool == 0) goto Label_63;
			var_17_float = 1;

	}
Label_63:
	SetProperty("disease", var_17_float);
	var_67_bool = 0; var_68_string = ""; var_69_float = 0; var_70_float = 0; var_71_float = 0;
	var_72_bool = var_10_bool;
	if(var_72_bool != 0) {
		var_73_float = -0.125;
	} else {
		var_88_float = 0.0625;

	}
	var_69_float = var_11_float * var_73_float;
	func_103(var_67_bool, "tiredness", var_69_float, (float)0, (float)1);
	GetProperty("tiredness", var_18_float);
	var_19_float = var_17_float * (float)0.1666666716337204;
	var_77_bool = var_15_float == (int)1;
	if(var_77_bool != 0) {
		var_19_float = var_19_float + (float)0.3333333432674408;
	}
	var_80_bool = var_18_float == (int)1;
	if(var_80_bool != 0) {
		var_19_float = var_19_float + (float)0.1666666716337204;
	}
	var_82_bool = 0; var_83_string = ""; var_84_float = 0; var_85_float = 0; var_86_float = 0;
	var_87_int = -var_11_float;
	var_84_float = var_87_int * var_19_float;
	func_103(var_82_bool, "health", var_84_float, (float)0, (float)1);
	goto Label_1;
	
}
EMIT "Return(); Pop(20)";


func_135(var_44_float, var_45_float, var_46_float, var_47_float)
{
	var_48_bool = var_45_float < var_46_float;
	if(var_48_bool != 0) {
		var_46_float = var_44_float;
		return 0;
	}
	var_49_bool = var_45_float > var_47_float;
	if(var_49_bool != 0) {
		var_47_float = var_44_float;
		return 0;
	}
	var_45_float = var_44_float;
	return 0;
}


func_122(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0;
	HasProperty("sleeping", var_24_bool);
	var_27_bool = var_24_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_25_bool);
	var_25_bool = var_21_bool;
	return 4;
}


func_103(var_33_bool, var_34_string, var_35_float, var_36_float, var_37_float)
{
	var_39_bool = 0; var_40_float = 0; var_41_bool = 0; var_42_float = 0;
	HasProperty(var_34_string, var_41_bool);
	var_43_bool = var_41_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetProperty(var_34_string, var_42_float);
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0;
	var_45_float = var_42_float + var_35_float;
	var_36_float = var_46_float;
	var_37_float = var_47_float;
	func_135(var_44_float, var_45_float, var_46_float, var_47_float);
	SetProperty(var_34_string, var_44_float);
	var_33_bool = 1;
	return 4;
}


