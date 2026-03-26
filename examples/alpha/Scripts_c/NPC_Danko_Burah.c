// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,GetPosition/1,Rotate/3,IsLoaded/1,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshWaitForAnimEnd/1
// @STRINGS: W:Neutral|A:GetPosition|W:playing |W:start: |W:end: |W:No
// @GLOBALS: 0:object:
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x1d vars=
// @EVENT_0: op=0x23 vars=object
// @EVENT_10: op=0x29 vars=object
// @PE: 0x23,0x29,0x5e

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
	func_94();
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
	func_93();
	var_0_bool = 0;
	func_61(var_0_bool);
	var_3_bool = var_0_bool == 0; //@nz
	if(var_3_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_4_string = "";
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


func_66(var_4_string)
{
	var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0;
	var_10_int = "playing " + var_4_string;
	Trace(var_10_int);
	lshGetAnimTimes(var_4_string, var_7_float, var_8_float);
	lshPlayAnimation(var_7_float, var_8_float);
	var_12_int = "start: " + var_7_float;
	Trace(var_12_int);
	var_14_int = "end: " + var_8_float;
	Trace(var_14_int);
	return 4;
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


func_84(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	var_5_string = "";
	func_66("No");
	lshWaitForAnimEnd(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_93()
{
	return 0;
}


func_61(var_0_bool)
{
	var_1_bool = 0; var_2_bool = 0;
	IsLoaded(var_2_bool);
	var_2_bool = var_0_bool;
	return 2;
}


func_94()
{
	func_84((bool)0);
	return 0;
}


