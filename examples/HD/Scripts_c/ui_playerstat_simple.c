// @IMPORTS: GetWindowSize/2,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,GetStringByID/2,Print/8
// @STRINGS: W:help
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,float,int,int params=0
// @EVENT_201: op=0xe vars=int,object
// @EVENT_1: op=0x15 vars=float
// @EVENT_0: op=0x3d vars=
// @PE: 0xe,0x15,0x32,0x3d

task_0_event_201(var_0_int, var_1_float, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_7_bool = var_4_int == (int)1000;
	if(var_7_bool != 0) {
		var_0_int = 109;
		var_1_float = 1.0;
	}
	return 0;
}


task_0_event_1(var_0_int, var_1_float, var_2_int, var_3_int, var_4_float)
{
	var_5_float = 0;
	var_4_float = var_5_float;
	func_50(var_3_int, var_4_float, var_5_float);
	return 0;
}


task_0_event_0(var_0_int, var_1_float, var_2_int, var_3_int)
{
	func_27(var_2_int, var_3_int);
	return 0;
}


main(var_0_int, var_1_float, var_2_int, var_3_int)
{
	EventDisable(201);
	GetWindowSize(var_2_int, var_3_int);
	var_0_int = -1;
	EventEnable(201);
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	ProcessEvents();
	return 0;
}


func_50(var_0_int, var_1_float, var_5_float)
{
	var_7_bool = var_0_int == (int)-1;
	if(var_7_bool != 0) {
		return 0;
	}
	var_1_float = var_1_float - var_5_float;
	var_9_bool = var_1_float <= (int)0;
	if(var_9_bool != 0) {
		var_0_int = -1;
	}
	return 0;
}


func_27(var_0_int, var_1_float)
{
	var_4_string = ""; var_5_float = 0; var_6_string = ""; var_7_float = 0;
	var_9_bool = var_0_int == (int)-1;
	if(var_9_bool != 0) {
		return 4;
	}
	GetStringByID(var_6_string, var_0_int);
	var_11_float = (float)3.140000104904175 * var_1_float;
	var_13_float = var_11_float / (float)1.0;
	var_15_float = var_13_float / (float)2.0;
	var_7_float = sin(var_15_float);
	Print("help", (int)10, (int)10, var_6_string, (float)1.0, (float)1.0, (float)1.0, var_7_float);
	return 4;
}


