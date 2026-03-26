// @IMPORTS: HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2
// @STRINGS: W:health|W:immunity|W:disease|W:hunger|W:tiredness|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x4b

main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0;
	func_56(var_0_bool, "health", (float)-0.019999999552965164, (float)0, (float)1);
	var_16_float = 0;
	func_126((float)-0.019999999552965164);
	var_24_bool = 0; var_25_string = ""; var_26_float = 0; var_27_float = 0; var_28_float = 0;
	func_56(var_24_bool, "immunity", (float)0.6000000238418579, (float)0, (float)1);
	var_29_float = 0;
	func_106((float)0.6000000238418579);
	var_33_bool = 0; var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0;
	func_56(var_33_bool, "disease", (float)0.0, (float)0, (float)1);
	var_38_float = 0;
	func_116((float)0.0);
	var_42_bool = 0; var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0;
	func_56(var_42_bool, "hunger", (float)0.0, (float)0, (float)1);
	var_47_float = 0;
	func_96((float)0.0);
	var_51_bool = 0; var_52_string = ""; var_53_float = 0; var_54_float = 0; var_55_float = 0;
	func_56(var_51_bool, "tiredness", (float)0.0, (float)0, (float)1);
	var_56_float = 0;
	func_86((float)0.0);
	return 0;
}


func_96(var_47_float)
{
	var_48_object = Obj(); var_49_object = Obj();
	CreateFloatVector(var_49_object);
	@@var_49_object:add(var_47_float);
	SendWorldWndMessage((int)12, var_49_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_106(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj();
	CreateFloatVector(var_31_object);
	@@var_31_object:add(var_29_float);
	SendWorldWndMessage((int)13, var_31_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_75(var_10_float, var_11_float, var_12_float, var_13_float)
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


func_116(var_38_float)
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateFloatVector(var_40_object);
	@@var_40_object:add(var_38_float);
	SendWorldWndMessage((int)14, var_40_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_86(var_56_float)
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateFloatVector(var_58_object);
	@@var_58_object:add(var_56_float);
	SendWorldWndMessage((int)11, var_58_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_56(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
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
	func_75(var_10_float, var_11_float, var_12_float, var_13_float);
	SetProperty(var_1_string, var_10_float);
	var_0_bool = 1;
	return 4;
}


func_126(var_16_float)
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


