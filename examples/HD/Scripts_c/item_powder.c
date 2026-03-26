// @IMPORTS: GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2
// @STRINGS: W:health|W:disease|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0;
	GetProperty("health", var_2_float);
	var_6_bool = var_2_float > (float)0.05000000074505806;
	if(var_6_bool != 0) {
		SetProperty("health", (float)0.05000000074505806);
		var_9_float = 0;
		var_9_float = (float)0.05000000074505806 - var_2_float;
		func_38(var_9_float);
	}
	GetProperty("disease", var_3_float);
	SetProperty("disease", (int)0);
	var_21_float = 0;
	var_21_float = -var_3_float;
	func_28(var_21_float);
	return 4;
}


func_28(var_21_float)
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateFloatVector(var_23_object);
	@@var_23_object:add(var_21_float);
	SendWorldWndMessage((int)14, var_23_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_38(var_9_float)
{
	var_11_object = Obj(); var_12_object = Obj();
	CreateFloatVector(var_12_object);
	@@var_12_object:add(var_9_float);
	var_14_bool = var_9_float < (int)0;
	if(var_14_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_12_object);
	return 2;
}
EMIT "Stack[-1] = 0";


