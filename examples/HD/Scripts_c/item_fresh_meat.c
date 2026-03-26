// @IMPORTS: PlaySound/1,HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2
// @STRINGS: W:eat|W:hunger|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x22

main()
{
	PlaySound("eat");
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0;
	func_15(var_1_bool, "hunger", (float)-0.25, (float)0, (float)1);
	var_17_float = 0;
	func_45((float)-0.25);
	return 0;
}


func_34(var_11_float, var_12_float, var_13_float, var_14_float)
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


func_45(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj();
	CreateFloatVector(var_19_object);
	@@var_19_object:add(var_17_float);
	SendWorldWndMessage((int)12, var_19_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_15(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float)
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
	func_34(var_11_float, var_12_float, var_13_float, var_14_float);
	SetProperty(var_2_string, var_11_float);
	var_1_bool = 1;
	return 4;
}


