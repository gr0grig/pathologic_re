// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,Print/4
// @STRINGS: W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_0: op=0xa vars=
// @EVENT_200: op=0x10 vars=int,string,object
// @PE: 0x10

task_0_event_0(var_0_int)
{
	Print("default", (int)2, (int)35, var_0_int);
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_0_int = var_1_int;
	return 0;
}


main(var_0_int)
{
	var_0_int = 0;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


