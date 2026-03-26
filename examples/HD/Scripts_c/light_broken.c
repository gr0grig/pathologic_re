// @IMPORTS: Switch/1,rand/3,Sleep/1
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=float,float params=0

main(var_0_float, var_1_float)
{
	var_2_float = 0; var_3_float = 0;
	
Label_1:
	Switch((bool)1);
	rand(var_3_float, (float)0.05000000074505806, (float)1.0);
	Sleep(var_3_float);
	Switch((bool)0);
	rand(var_3_float, (float)0.05000000074505806, (float)1.0);
	Sleep(var_3_float);
	goto Label_1;
}
EMIT "Return(); Pop(2)";


