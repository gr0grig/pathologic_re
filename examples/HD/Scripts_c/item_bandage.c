// @IMPORTS: HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2
// @STRINGS: W:health|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x1f

main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0;
	func_12(var_0_bool, "health", (float)0.20000000298023224, (float)0, (float)1);
	var_16_float = 0;
	func_42((float)0.20000000298023224);
	return 0;
}


func_42(var_16_float)
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateFloatVector(var_18_object);
	@@var_18_object:add(var_16_float);
	var_20_bool = var_16_float < (int)0;
	if(var_20_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_18_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0;
	HasProperty(var_1_string, var_7_bool);
	var_9_bool = var_7_bool == 0; //@nz
	if(var_9_bool != 0) {
		var_0_bool = 0;
		return 4;
	}
	GetProperty(var_1_string, var_8_float);
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0;
	var_11_float = var_8_float + var_2_float;
	var_3_float = var_12_float;
	var_4_float = var_13_float;
	func_31(var_10_float, var_11_float, var_12_float, var_13_float);
	SetProperty(var_1_string, var_10_float);
	var_0_bool = 1;
	return 4;
}


func_31(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float;
	if(var_14_bool != 0) {
		var_12_float = var_10_float;
		return 0;
	}
	var_15_bool = var_11_float > var_13_float;
	if(var_15_bool != 0) {
		var_13_float = var_10_float;
		return 0;
	}
	var_11_float = var_10_float;
	return 0;
}


