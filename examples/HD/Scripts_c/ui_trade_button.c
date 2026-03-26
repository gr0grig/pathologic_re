// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,ClientToScreen/2,GetWindowSize/2,SetMousePos/2,SendMessageToParent/1
// @STRINGS: W:default|W:pressed
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_200: op=0x1b vars=int,string,object
// @EVENT_2: op=0x24 vars=int,int
// @EVENT_3: op=0x2c vars=int,int
// @EVENT_10: op=0x31 vars=
// @PE: 0x1b,0x24,0x2c

task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_4_bool = var_0_int == (int)-4;
	if(var_4_bool != 0) {
		func_9();
		return 0;
	}
	return 0;
}


task_0_event_2(var_0_int, var_1_int)
{
	SetBackground("pressed");
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_3(var_0_int, var_1_int)
{
	SetBackground("default");
	return 0;
}


task_0_event_10()
{
	SetBackground("default");
	return 0;
}


main()
{
	SetBackground("default");
	SetOwnerDraw((bool)0);
	ProcessEvents();
	return 0;
}


func_9()
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0;
	var_9_int = 0;
	var_10_int = 0;
	var_11_int = 0;
	var_12_int = 0;
	ClientToScreen(var_9_int, var_10_int);
	GetWindowSize(var_11_int, var_12_int);
	var_14_float = var_11_int / (int)2;
	var_15_int = var_9_int + var_14_float;
	var_17_float = var_12_int / (int)2;
	var_18_int = var_10_int + var_17_float;
	SetMousePos(var_15_int, var_18_int);
	return 8;
}


