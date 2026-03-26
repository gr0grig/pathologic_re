// @IMPORTS: GetAnimationLength/1,PlayAnimation/2,WaitForAnimEnd/0
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_float = 0; var_1_float = 0;
	GetAnimationLength(var_1_float);
	
Label_3:
	PlayAnimation((int)0, var_1_float);
	WaitForAnimEnd();
	goto Label_3;
}
EMIT "Return(); Pop(2)";


