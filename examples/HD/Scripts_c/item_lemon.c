// @IMPORTS: PlaySound/1,HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2
// @STRINGS: W:eat|W:health|W:immunity|W:disease|W:hunger|W:tiredness|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x4e

main()
{
	PlaySound("eat");
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0;
	func_59(var_1_bool, "health", (float)0.0, (float)0, (float)1);
	var_17_float = 0;
	func_129((float)0.0);
	var_25_bool = 0; var_26_string = ""; var_27_float = 0; var_28_float = 0; var_29_float = 0;
	func_59(var_25_bool, "immunity", (float)0.05000000074505806, (float)0, (float)1);
	var_30_float = 0;
	func_109((float)0.05000000074505806);
	var_34_bool = 0; var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0;
	func_59(var_34_bool, "disease", (float)0.0, (float)0, (float)1);
	var_39_float = 0;
	func_119((float)0.0);
	var_43_bool = 0; var_44_string = ""; var_45_float = 0; var_46_float = 0; var_47_float = 0;
	func_59(var_43_bool, "hunger", (float)0.10000000149011612, (float)0, (float)1);
	var_48_float = 0;
	func_99((float)0.10000000149011612);
	var_52_bool = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_float = 0;
	func_59(var_52_bool, "tiredness", (float)-0.10000000149011612, (float)0, (float)1);
	var_57_float = 0;
	func_89((float)-0.10000000149011612);
	return 0;
}


func_129(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj();
	CreateFloatVector(var_19_object);
	@@var_19_object:add(var_17_float);
	var_21_bool = var_17_float < (int)0;
	if(var_21_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_19_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_99(var_48_float)
{
	var_49_object = Obj(); var_50_object = Obj();
	CreateFloatVector(var_50_object);
	@@var_50_object:add(var_48_float);
	SendWorldWndMessage((int)12, var_50_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_109(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateFloatVector(var_32_object);
	@@var_32_object:add(var_30_float);
	SendWorldWndMessage((int)13, var_32_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_78(var_11_float, var_12_float, var_13_float, var_14_float)
{
	var_15_bool = var_12_float < var_13_float;
	if(var_15_bool != 0) {
		var_13_float = var_11_float;
		return 0;
	}
	var_16_bool = var_12_float > var_14_float;
	if(var_16_bool != 0) {
		var_14_float = var_11_float;
		return 0;
	}
	var_12_float = var_11_float;
	return 0;
}


func_119(var_39_float)
{
	var_40_object = Obj(); var_41_object = Obj();
	CreateFloatVector(var_41_object);
	@@var_41_object:add(var_39_float);
	SendWorldWndMessage((int)14, var_41_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_89(var_57_float)
{
	var_58_object = Obj(); var_59_object = Obj();
	CreateFloatVector(var_59_object);
	@@var_59_object:add(var_57_float);
	SendWorldWndMessage((int)11, var_59_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_59(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float)
{
	var_6_bool = 0; var_7_float = 0; var_8_bool = 0; var_9_float = 0;
	HasProperty(var_2_string, var_8_bool);
	var_10_bool = var_8_bool == 0; //@nz
	if(var_10_bool != 0) {
		var_1_bool = 0;
		return 4;
	}
	GetProperty(var_2_string, var_9_float);
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0;
	var_12_float = var_9_float + var_3_float;
	var_4_float = var_13_float;
	var_5_float = var_14_float;
	func_78(var_11_float, var_12_float, var_13_float, var_14_float);
	SetProperty(var_2_string, var_11_float);
	var_1_bool = 1;
	return 4;
}


