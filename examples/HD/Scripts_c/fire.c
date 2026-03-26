// @IMPORTS: Hold/0,StopGroup0/0,sync/0,FindParticleSystem/2,Trace/1,IsLoaded/1
// @STRINGS: W:fire|W:Can't find fire particle system|A:AddSource|A:Enable
// @RUN_OP: 0xd
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x2d vars=

task_0_event_5()
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_6()
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	var_2_bool = 0;
	func_51(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	FindParticleSystem("fire", var_1_object);
	var_9_bool = var_1_object == 0; //@ne
	if(var_9_bool != 0) {
		Trace("Can't find fire particle system");
		return 2;
	}
	@@var_1_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:Enable();
	
Label_40:
	Hold();
	goto Label_40;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_0()
{
	
Label_0:
	Hold();
	var_6_bool = 0;
	func_51(var_6_bool);
	var_7_bool = var_6_bool == 0; //@nz
	if(var_7_bool == 1) goto Label_0;
	return 0;
}


func_51(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


