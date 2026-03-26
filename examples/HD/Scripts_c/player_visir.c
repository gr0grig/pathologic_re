// @IMPORTS: sync/1,IsVisirOn/1,GetProperty/2,SetProperty/2,SwitchVisir/1,SendWorldWndMessage/1,HasProperty/2
// @STRINGS: W:visir|W:vcharge|W:sleeping
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x80

main()
{
	var_0_float = 0; var_1_float = 0; var_2_bool = 0; var_3_bool = 0; var_4_int = 0; var_5_int = 0; var_6_float = 0; var_7_float = 0; var_8_bool = 0; var_9_bool = 0; var_10_int = 0; var_11_int = 0;
	var_6_float = 0;
	
Label_2:
	sync(var_7_float);
	IsVisirOn(var_8_bool);
	var_12_bool = var_8_bool;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_115(var_13_bool);
		var_21_bool = var_13_bool == 0; //@nz
		if(var_21_bool != 0) {
			func_48();
		}
	} else {
		GetProperty("visir", var_9_bool);
		var_56_bool = var_9_bool;
		if(var_56_bool != 0) {
			(float)0 = (float)0 + var_7_float;
			var_57_int = 0;
			var_6_float = var_57_int;
			var_10_int = var_57_int / (int)3;
			var_59_int = var_10_int;
			if(var_59_int != 0) {
				GetProperty("vcharge", var_11_int);
				var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0;
				var_63_int = var_11_int + var_10_int;
				func_128(var_62_int, var_63_int, (int)0, (int)100);
				SetProperty("vcharge", var_62_int);
				var_6_float = var_6_float % (int)3;
			}
			goto Label_46;
		}
		var_6_float = 0;
	}
Label_46:
	goto Label_2;
	
}
EMIT "Return(); Pop(12)";


func_48()
{
	var_22_float = 0; var_23_float = 0; var_24_bool = 0; var_25_int = 0; var_26_float = 0; var_27_float = 0; var_28_bool = 0; var_29_int = 0;
	var_30_bool = 0; var_31_int = 0;
	func_99(var_30_bool, (int)5);
	if(var_30_bool != 0) {

	Label_55:
		sync(var_27_float);
		IsVisirOn(var_28_bool);
		var_42_bool = 0;
		var_42_bool = 1;
		var_43_bool = var_28_bool == 0; //@nz
		if(var_43_bool != 1) {
			var_44_bool = 0;
			func_115(var_44_bool);
			if(var_44_bool != 1) {
				var_42_bool = 0;
			}
		}
		if(var_42_bool != 0) {
			return 8;
		}
		(float)0 = (float)0 + var_27_float;
		var_45_int = 0;
		var_26_float = var_45_int;
		var_47_bool = var_45_int >= (int)1;
		if(var_47_bool != 0) {
		} else {
				goto Label_55;
		}
		var_26_float = (int)0;
		var_48_int = var_29_int;
		var_49_bool = 0; var_50_int = 0;
		var_29_int = var_50_int;
		func_99(var_49_bool, var_50_int);
		var_51_bool = var_49_bool == 0; //@nz
		if(var_51_bool != 0) {
		} else {
			var_26_float = var_26_float % (int)1;
			goto Label_55;

		}
	}
	SwitchVisir((bool)0);
	SendWorldWndMessage((int)2);
	return 8;
	
}


func_99(var_30_bool, var_31_int)
{
	var_32_int = 0; var_33_int = 0;
	GetProperty("vcharge", var_33_int);
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0;
	var_36_int = var_33_int - var_31_int;
	func_128(var_35_int, var_36_int, (int)0, (int)100);
	var_35_int = var_33_int;
	SetProperty("vcharge", var_33_int);
	var_33_int = var_30_bool;
	return 2;
}


func_115(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; var_16_bool = 0; var_17_bool = 0;
	HasProperty("sleeping", var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_17_bool);
	var_17_bool = var_13_bool;
	return 4;
}


func_128(var_35_int, var_36_int, var_37_int, var_38_int)
{
	var_39_bool = var_36_int < var_37_int;
	if(var_39_bool != 0) {
		var_37_int = var_35_int;
		return 0;
	}
	var_40_bool = var_36_int > var_38_int;
	if(var_40_bool != 0) {
		var_38_int = var_35_int;
		return 0;
	}
	var_36_int = var_35_int;
	return 0;
}


