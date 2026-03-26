// @IMPORTS: GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2
// @STRINGS: W:disease|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_float = 0; var_1_float = 0;
	GetProperty("disease", var_1_float);
	SetProperty("disease", (int)0);
	var_5_float = 0;
	var_5_float = -var_1_float;
	func_13(var_5_float);
	return 2;
}


func_13(var_5_float)
{
	var_6_object = Obj(); var_7_object = Obj();
	CreateFloatVector(var_7_object);
	@@var_7_object:add(var_5_float);
	SendWorldWndMessage((int)14, var_7_object);
	return 2;
}
EMIT "Stack[-1] = 0";


