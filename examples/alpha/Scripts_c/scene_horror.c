// @IMPORTS: Hold/0,Sleep/2,GetRandomPFPoint/3,StopGroup0/0,Trace/1,AddActorByType/6,self/1
// @STRINGS: W:New fog at |W:fog|W:horror_fog.xml
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x4 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x21 vars=

task_0_event_5()
{
	TaskCall(1);
	func_10();
	TaskReturn();
	return 0;
}


task_1_event_6()
{
	StopGroup0();
	return 0;
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_10()
{
	var_0_bool = 0; var_1_cvector = CVector(0,0,0); var_2_bool = 0; var_3_cvector = CVector(0,0,0);
	Sleep((int)3, var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		return 4;
	}
Label_17:
	GetRandomPFPoint(var_3_cvector, (int)0, (int)0);
	var_8_cvector = CVector(0,0,0);
	var_3_cvector = var_8_cvector;
	func_36(var_8_cvector);
	Sleep((int)30, var_2_bool);
	var_20_bool = var_2_bool == 0; //@nz
	if(var_20_bool != 0) {
	} else {
		goto Label_17;
	}
	return 4;
	
}


func_51(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_36(var_8_cvector)
{
	var_9_object = Obj(); var_10_object = Obj();
	var_12_int = "New fog at " + var_8_cvector;
	Trace(var_12_int);
	var_14_object = Obj();
	func_51(var_14_object);
	AddActorByType(var_10_object, "fog", var_14_object, var_8_cvector, CVector(0.0, 0.0, 1.0), "horror_fog.xml");
	return 2;
}
EMIT "Stack[-1] = 0";


