// @IMPORTS: GetVariable/2,GetGameTime/1,sync/0,HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2
// @STRINGS: W:k6q01|W:k6q01ItemsRemoved|W:reputation|W:sleeping|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @PE: 0x79,0x97

main(var_0_bool)
{
	var_1_float = 0;
	func_57((float)288);
	return 0;
}


func_89(var_53_bool, var_54_string, var_55_float, var_56_float, var_57_float)
{
	var_58_bool = 0; var_59_float = 0; var_60_bool = 0; var_61_float = 0;
	HasProperty(var_54_string, var_60_bool);
	var_62_bool = var_60_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_53_bool = 0;
		return 4;
	}
	GetProperty(var_54_string, var_61_float);
	var_63_float = 0; var_64_float = 0; var_65_float = 0; var_66_float = 0;
	var_64_float = var_61_float + var_55_float;
	var_56_float = var_65_float;
	var_57_float = var_66_float;
	func_121(var_63_float, var_64_float, var_65_float, var_66_float);
	SetProperty(var_54_string, var_63_float);
	var_53_bool = 1;
	return 4;
}


func_132(var_69_float)
{
	var_70_object = Obj(); var_71_object = Obj();
	CreateFloatVector(var_71_object);
	@@var_71_object:add(var_69_float);
	SendWorldWndMessage((int)16, var_71_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5(var_13_bool, var_14_float)
{
	var_15_float = 0; var_16_int = 0; var_17_int = 0; var_18_float = 0; var_19_int = 0; var_20_int = 0;
	var_21_bool = 0;
	func_108(var_21_bool);
	var_29_bool = var_21_bool == 0; //@nz
	if(var_29_bool != 0) {
		var_30_int = -var_14_float;
		var_18_float = var_30_int / (float)36.0;
		var_32_bool = 0; var_33_int = 0;
		func_151(var_32_bool, (int)6);
		if(var_32_bool != 0) {
			GetVariable("k6q01", var_19_int);
			var_42_bool = var_19_int != (int)1000;
			if(var_42_bool != 0) {
				var_18_float = var_18_float * (float)2.0;
				var_45_bool = var_19_int >= (int)1;
				if(var_45_bool != 0) {
					var_18_float = var_18_float * (float)3.0;
				}
				var_48_bool = var_19_int >= (int)2;
				if(var_48_bool != 0) {
					var_18_float = var_18_float * (float)4.0;
				}
				GetVariable("k6q01ItemsRemoved", var_20_int);
				var_51_int = var_20_int;
				if(var_51_int != 0) {
					var_18_float = var_18_float / (float)4.0;
				}
			}
		}
		var_53_bool = 0; var_54_string = ""; var_55_float = 0; var_56_float = 0; var_57_float = 0;
		var_18_float = var_55_float;
		func_89(var_53_bool, "reputation", var_55_float, (float)0, (float)1);
		var_69_float = 0;
		var_18_float = var_69_float;
		func_132(var_69_float);
	}
	var_13_bool = 0;
	return 6;
}


func_108(var_21_bool)
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


func_142(var_34_int)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_38_int = 0;
	var_38_int = var_36_float / (int)24;
	var_34_int = (int)1 + var_38_int;
	return 2;
}


func_151(var_32_bool, var_33_int)
{
	var_34_int = 0;
	func_142(var_34_int);
	var_32_bool = var_34_int == var_33_int;
	return 0;
}


func_121(var_63_float, var_64_float, var_65_float, var_66_float)
{
	var_67_bool = var_64_float < var_65_float;
	if(var_67_bool != 0) {
		var_65_float = var_63_float;
		return 0;
	}
	var_68_bool = var_64_float > var_66_float;
	if(var_68_bool != 0) {
		var_66_float = var_63_float;
		return 0;
	}
	var_64_float = var_63_float;
	return 0;
}


func_57(var_1_float)
{
	var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0;
	GetGameTime(var_6_float);
	var_7_float = var_6_float + var_1_float;
	var_6_float = var_8_float;
	
Label_62:
	sync();
	var_10_bool = var_0_bool;
	if(var_10_bool != 0) {
	} else {
		GetGameTime(var_9_float);
		var_11_bool = var_9_float <= var_8_float;
		if(var_11_bool != 0) {
		} else {
			var_12_bool = var_9_float >= var_7_float;
			if(var_12_bool != 0) {
				var_13_bool = 0; var_14_float = 0;
				var_14_float = var_7_float - var_8_float;
				func_5(var_13_bool, var_14_float);
				goto Label_88;
			EMIT "GOTO 0x57";
			}
			var_73_bool = 0; var_74_float = 0;
			var_74_float = var_9_float - var_8_float;
			func_5(var_73_bool, var_74_float);
			if(var_73_bool != 0) {
				goto Label_88;
			}
			var_9_float = var_8_float;
		}
		goto Label_62;
	}
Label_88:
	return 8;
	
}


