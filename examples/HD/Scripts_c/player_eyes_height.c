// @IMPORTS: GetEyesHeightCoef/1,sync/0,IsSneakEnabled/1,sync/1,SetEyesHeightCoef/1
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_bool = 0; var_1_float = 0; var_2_bool = 0; var_3_float = 0;
	
Label_1:
	GetEyesHeightCoef(var_3_float);
	var_5_bool = var_3_float == (int)1;
	if(var_5_bool != 0) {

	Label_6:
		sync();
		IsSneakEnabled(var_2_bool);
		var_6_bool = var_2_bool;
		if(var_6_bool != 0) {
		} else {
			goto Label_6;
	}
		IsSneakEnabled(var_2_bool);
		var_19_bool = var_2_bool;
		if(var_19_bool != 0) {
			func_31();
			goto Label_29;
		}
		func_58();
	}
	func_31();
	goto Label_29;
	
Label_29:
	goto Label_1;
	
}
EMIT "Return(); Pop(4)";


func_58()
{
	var_20_bool = 0; var_21_float = 0; var_22_float = 0; var_23_bool = 0; var_24_float = 0; var_25_float = 0;
	
Label_59:
	sync(var_24_float);
	GetEyesHeightCoef(var_25_float);
	var_27_float = (float)1.2000000476837158 * var_24_float;
	var_25_float = var_25_float + var_27_float;
	var_29_bool = var_25_float >= (int)1;
	if(var_29_bool != 0) {
	} else {
		SetEyesHeightCoef(var_25_float);
		goto Label_59;
	}
	SetEyesHeightCoef((int)1);
	return 6;
	
}


func_31()
{
	var_7_bool = 0; var_8_float = 0; var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_float = 0;
	
Label_32:
	sync(var_11_float);
	GetEyesHeightCoef(var_12_float);
	var_14_float = (float)1.2000000476837158 * var_11_float;
	var_12_float = var_12_float - var_14_float;
	var_16_bool = var_12_float <= (float)0.800000011920929;
	if(var_16_bool != 0) {
		SetEyesHeightCoef((float)0.800000011920929);
	} else {
			SetEyesHeightCoef(var_12_float);
			goto Label_32;
	}
Label_49:
	sync();
	IsSneakEnabled(var_10_bool);
	var_18_bool = var_10_bool == 0; //@nz
	if(var_18_bool != 0) {
	} else {
		goto Label_49;

	}
	return 6;
	
}


