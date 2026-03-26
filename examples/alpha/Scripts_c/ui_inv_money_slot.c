// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,Blit/3,Print/4,SendMessageToParent/1
// @STRINGS: W:default|W:money|W:selected
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_0: op=0xa vars=
// @EVENT_2: op=0x15 vars=int,int
// @EVENT_6: op=0x1d vars=int,int
// @EVENT_3: op=0x22 vars=int,int
// @EVENT_200: op=0x24 vars=int,string,object
// @PE: 0x15,0x1d,0x22,0x24

task_0_event_0(var_0_int)
{
	Blit("money", (int)1, (int)1);
	Print("default", (int)2, (int)35, var_0_int);
	return 0;
}


task_0_event_2(var_0_int, var_1_int, var_2_int)
{
	SetBackground("selected");
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_int)
{
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_3(var_0_int, var_1_int, var_2_int)
{
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


