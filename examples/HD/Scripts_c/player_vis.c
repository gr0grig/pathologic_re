// @IMPORTS: GetGameTime/1,SetBaseVisibility/1,Sleep/1
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0;
	
Label_1:
	GetGameTime(var_2_float);
	var_2_float = var_2_float % (int)24;
	var_6_bool = var_2_float <= (float)6.0;
	if(var_6_bool != 0) {
	} else {
		var_9_bool = var_2_float <= (float)8.0;
		if(var_9_bool != 0) {
			var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0;
			var_2_float = var_11_float;
			func_49(var_10_float, var_11_float, (float)6.0, (float)8.0, (float)0.1568627506494522, (float)0.47058823704719543);
			var_10_float = (float)0.1568627506494522;
			goto Label_42;
		}
		var_25_bool = var_2_float <= (float)20.0;
		if(var_25_bool != 0) {
			goto Label_42;
		}
		var_27_bool = var_2_float <= (float)21.0;
		if(var_27_bool != 0) {
			var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0;
			var_2_float = var_29_float;
			func_49(var_28_float, var_29_float, (float)20.0, (float)21.0, (float)0.47058823704719543, (float)0.1568627506494522);
			var_28_float = (float)0.47058823704719543;
			goto Label_42;
		}
		var_3_float = 0.1568627506494522;
	}
Label_42:
	SetBaseVisibility(var_3_float);
	Sleep((int)5);
	goto Label_1;
	
}
EMIT "Return(); Pop(4)";


func_49(var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float)
{
	var_16_float = 0; var_17_float = 0;
	var_18_int = var_11_float - var_12_float;
	var_19_int = var_13_float - var_12_float;
	var_17_float = var_18_int / var_19_int;
	var_21_int = (int)1 - var_17_float;
	var_22_float = var_14_float * var_21_int;
	var_23_float = var_15_float * var_17_float;
	var_10_float = var_22_float + var_23_float;
	return 2;
}


