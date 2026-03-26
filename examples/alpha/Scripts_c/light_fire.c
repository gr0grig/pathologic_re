// @IMPORTS: Hold/0,StopGroup0/0,GetColor/1,rand/3,SetColor/1,Sleep/1,sync/0
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars=float,float params=0
// @EVENT_6: op=0x1d vars=

task_0_event_5(var_0_float, var_1_float)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_float, var_1_float)
{
	sync();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


main(var_0_float, var_1_float)
{
	var_2_cvector = CVector(0,0,0); var_3_float = 0; var_4_float = 0; var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_float = 0;
	TaskCall(0);
	func_0();
	TaskReturn();
	GetColor(var_5_cvector);
	
Label_14:
	rand(var_6_float, (float)0.9200000166893005, (float)1.0);
	var_10_float = var_5_cvector * var_6_float;
	SetColor(var_10_float);
	rand(var_7_float, (float)0.07500000298023224, (float)0.10000000149011612);
	Sleep(var_7_float);
	goto Label_14;
}
EMIT "Return(); Pop(6)";


func_0()
{
	Hold();
	return 0;
}


