// @IMPORTS: FindGeometry/2
// @STRINGS: W:object|A:Enable
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_object = Obj(); var_1_object = Obj();
	FindGeometry("object", var_1_object);
	@@var_1_object:Enable((bool)1);
	return 2;
}
EMIT "Stack[-1] = 0";


