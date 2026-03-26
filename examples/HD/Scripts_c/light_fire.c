// @IMPORTS: Hold/0,StopGroup0/0,sync/0,GetColor/1,rand/3,SetColor/1,Sleep/1,IsLoaded/1
// @RUN_OP: 0xd
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=float,float params=0
// @EVENT_6: op=0x24 vars=

task_0_event_5(var_0_float, var_1_float)
{
	StopGroup0();
	sync();
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
	
Label_21:
	rand(var_6_float, (float)0.9200000166893005, (float)1.0);
	var_14_float = var_5_cvector * var_6_float;
	SetColor(var_14_float);
	rand(var_7_float, (float)0.07500000298023224, (float)0.10000000149011612);
	Sleep(var_7_float);
	goto Label_21;
}
EMIT "Return(); Pop(6)";


func_0()
{
	
Label_0:
	Hold();
	var_8_bool = 0;
	func_44(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool == 1) goto Label_0;
	return 0;
}


func_44(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


