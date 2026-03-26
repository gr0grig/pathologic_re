// @IMPORTS: FindActor/2,Hold/0,LookAsync/3
// @STRINGS: W:player|A:GetEyesHeight|W:head
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_object = Obj(); var_1_object = Obj();
	FindActor(var_1_object, "player");
	var_3_object = Obj();
	var_1_object = var_3_object;
	func_12(var_3_object);
	Hold();
	return 2;
}
EMIT "Stack[-1] = 0";


func_12(var_3_object)
{
	var_4_float = 0; var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_cvector = CVector(0,0,0);
	@@var_3_object:GetEyesHeight(var_6_float);
	var_7_cvector = CVector(0.0, 0.0, 0.0);
	var_8_float = GetByIndex(var_7_cvector, 1);
	var_6_float = var_8_float;
	SetByIndex(var_7_cvector, 1) = var_8_float;
	LookAsync(var_3_object, "head", var_7_cvector);
	return 4;
}


