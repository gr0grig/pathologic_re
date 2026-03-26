// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,GetPosition/1,Rotate/3,IsLoaded/1,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,GetGameTime/1,lshWaitForAnimEnd/1
// @STRINGS: W:Neutral|A:GetPosition|W:playing |W:start: |W:end: |W:No
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x1d vars=
// @EVENT_0: op=0x23 vars=object
// @EVENT_10: op=0x29 vars=object
// @PE: 0x23,0x29,0x5d,0x70

task_0_event_5()
{
	StopGroup0();
	return 0;
}


task_1_event_6()
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object)
{
	var_0_object = Obj();
	func_112();
	return 0;
}


task_1_event_10(var_0_object)
{
	var_1_bool = 0; var_2_object = Obj();
	var_0_object = var_2_object;
	func_49(var_1_bool, var_2_object);
	WaitForAnimEnd();
	return 0;
}


main()
{
	func_108();
	var_1_bool = 0;
	func_61(var_1_bool);
	var_4_bool = var_1_bool == 0; //@nz
	if(var_4_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_5_string = "";
	func_66("Neutral");
	lshWaitForAnimEnd();
	goto Label_19;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_66(var_5_string)
{
	var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0;
	var_11_int = "playing " + var_5_string;
	Trace(var_11_int);
	lshGetAnimTimes(var_5_string, var_8_float, var_9_float);
	lshPlayAnimation(var_8_float, var_9_float);
	var_13_int = "start: " + var_8_float;
	Trace(var_13_int);
	var_15_int = "end: " + var_9_float;
	Trace(var_15_int);
	return 4;
}


func_99(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	var_15_string = "";
	func_66("No");
	lshWaitForAnimEnd(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_108()
{
	var_0_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_112()
{
	var_2_bool = GlobalVars[1];
	var_3_bool = var_2_bool == 0; //@nz
	if(var_3_bool != 0) {
	}
	var_4_bool = 0; var_5_int = 0;
	func_93(var_4_bool, (int)1);
	if(var_4_bool != 0) {
	}
	func_99((bool)0);
	return 0;
}


func_49(var_1_bool, var_2_object)
{
	var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_bool = 0;
	@@var_2_object:GetPosition(var_7_cvector);
	GetPosition(var_8_cvector);
	var_9_cvector = var_7_cvector - var_8_cvector;
	var_11_float = GetByIndex(var_9_cvector, 0);
	var_12_float = GetByIndex(var_9_cvector, 2);
	Rotate(var_11_float, var_12_float, var_10_bool);
	var_10_bool = var_1_bool;
	return 8;
}


func_84(var_6_int)
{
	var_7_float = 0; var_8_float = 0;
	GetGameTime(var_8_float);
	var_10_int = 0;
	var_10_int = var_8_float / (int)24;
	var_6_int = (int)1 + var_10_int;
	return 2;
}


func_93(var_4_bool, var_5_int)
{
	var_6_int = 0;
	func_84(var_6_int);
	var_4_bool = var_6_int == var_5_int;
	return 0;
}


func_61(var_1_bool)
{
	var_2_bool = 0; var_3_bool = 0;
	IsLoaded(var_3_bool);
	var_3_bool = var_1_bool;
	return 2;
}


