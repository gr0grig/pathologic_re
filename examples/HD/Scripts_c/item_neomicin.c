// @IMPORTS: GetProperty/2,SetProperty/2,HasProperty/2,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2
// @STRINGS: W:disease|W:tiredness|W:health|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x39

main()
{
	var_0_float = 0; var_1_float = 0;
	GetProperty("disease", var_1_float);
	var_5_float = var_1_float * (float)0.6000000238418579;
	SetProperty("disease", var_5_float);
	var_6_float = 0;
	var_8_float = var_1_float * (float)0.6000000238418579;
	var_6_float = var_1_float - var_8_float;
	func_78(var_6_float);
	var_12_bool = 0; var_13_string = ""; var_14_float = 0; var_15_float = 0; var_16_float = 0;
	func_38(var_12_bool, "tiredness", (float)0.15000000596046448, (float)0, (float)1);
	var_28_float = 0;
	func_68((float)0.15000000596046448);
	var_32_bool = 0; var_33_string = ""; var_34_float = 0; var_35_float = 0; var_36_float = 0;
	func_38(var_32_bool, "health", (float)-0.15000000596046448, (float)0, (float)1);
	var_37_float = 0;
	func_88((float)-0.15000000596046448);
	return 2;
}


func_68(var_28_float)
{
	var_29_object = Obj(); var_30_object = Obj();
	CreateFloatVector(var_30_object);
	@@var_30_object:add(var_28_float);
	SendWorldWndMessage((int)11, var_30_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_38(var_12_bool, var_13_string, var_14_float, var_15_float, var_16_float)
{
	var_17_bool = 0; var_18_float = 0; var_19_bool = 0; var_20_float = 0;
	HasProperty(var_13_string, var_19_bool);
	var_21_bool = var_19_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_12_bool = 0;
		return 4;
	}
	GetProperty(var_13_string, var_20_float);
	var_22_float = 0; var_23_float = 0; var_24_float = 0; var_25_float = 0;
	var_23_float = var_20_float + var_14_float;
	var_15_float = var_24_float;
	var_16_float = var_25_float;
	func_57(var_22_float, var_23_float, var_24_float, var_25_float);
	SetProperty(var_13_string, var_22_float);
	var_12_bool = 1;
	return 4;
}


func_78(var_6_float)
{
	var_9_object = Obj(); var_10_object = Obj();
	CreateFloatVector(var_10_object);
	@@var_10_object:add(var_6_float);
	SendWorldWndMessage((int)14, var_10_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_88(var_37_float)
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateFloatVector(var_39_object);
	@@var_39_object:add(var_37_float);
	var_41_bool = var_37_float < (int)0;
	if(var_41_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_39_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_57(var_22_float, var_23_float, var_24_float, var_25_float)
{
	var_26_bool = var_23_float < var_24_float;
	if(var_26_bool != 0) {
		var_24_float = var_22_float;
		return 0;
	}
	var_27_bool = var_23_float > var_25_float;
	if(var_27_bool != 0) {
		var_25_float = var_22_float;
		return 0;
	}
	var_23_float = var_22_float;
	return 0;
}


