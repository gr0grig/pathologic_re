// @IMPORTS: IsFlashlightOn/1,sync/0,rand/3,SetFlashlightColor/1,sync/1,SwitchFlashlight/1,PlaySound/1,RemoveItemByType/3,HasProperty/2,GetProperty/2
// @STRINGS: W:flashlight_off|W:kerosene|W:sleeping
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_bool = 0; var_1_bool = 0;
	
Label_1:
	IsFlashlightOn(var_1_bool);
	var_2_bool = 0;
	var_2_bool = 0;
	var_3_bool = var_1_bool;
	if(var_3_bool != 0) {
		var_4_bool = 0;
		func_95(var_4_bool);
		var_12_bool = var_4_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_2_bool = 1;
		}
	}
	if(var_2_bool != 0) {
		func_21();
	}
	sync();
	goto Label_1;
}
EMIT "Return(); Pop(2)";


func_89(var_25_bool, var_26_int)
{
	var_27_int = 0; var_28_int = 0;
	RemoveItemByType(var_28_int, "kerosene", var_26_int);
	var_25_bool = var_28_int == var_26_int;
	return 2;
}


func_21()
{
	var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_float = 0; var_20_float = 0; var_21_float = 0; var_22_float = 0; var_23_bool = 0; var_24_int = 0;
	var_25_bool = 0; var_26_int = 0;
	func_89(var_25_bool, (int)1);
	if(var_25_bool != 0) {
		var_20_float = 0;

	Label_29:
		var_31_bool = var_20_float <= (int)0;
		if(var_31_bool != 0) {
			rand(var_21_float, (float)0.9200000166893005, (float)1.0);
			var_35_float = CVector(0.480392187833786, 0.4333333671092987, 0.29019609093666077) * var_21_float;
			SetFlashlightColor(var_35_float);
			rand(var_20_float, (float)0.07500000298023224, (float)0.10000000149011612);
		}
		sync(var_22_float);
		IsFlashlightOn(var_23_bool);
		var_38_bool = 0;
		var_38_bool = 1;
		var_39_bool = var_23_bool == 0; //@nz
		if(var_39_bool != 1) {
			var_40_bool = 0;
			func_95(var_40_bool);
			if(var_40_bool != 1) {
				var_38_bool = 0;
			}
		}
		if(var_38_bool != 0) {
			return 12;
		}
		var_20_float = var_20_float - var_22_float;
		(float)0 = (float)0 + var_22_float;
		var_41_int = 0;
		var_19_float = var_41_int;
		var_43_bool = var_41_int >= (int)5;
		if(var_43_bool != 0) {
		} else {
				goto Label_29;
		}
		var_44_int = 0;
		var_19_float = var_44_int;
		var_24_int = var_44_int / (int)5;
		var_46_bool = 0; var_47_int = 0;
		var_24_int = var_47_int;
		func_89(var_46_bool, var_47_int);
		var_48_bool = var_46_bool == 0; //@nz
		if(var_48_bool != 0) {
		} else {
			var_19_float = var_19_float % (int)5;
			goto Label_29;

		}
	}
	SwitchFlashlight((bool)0);
	PlaySound("flashlight_off");
	return 12;
	
}


func_95(var_4_bool)
{
	var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0;
	HasProperty("sleeping", var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		var_4_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_8_bool);
	var_8_bool = var_4_bool;
	return 4;
}


