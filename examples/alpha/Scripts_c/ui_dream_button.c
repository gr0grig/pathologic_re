// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,SendMessageToParent/1,Blit/3
// @STRINGS: W:default|W:pressed|W:start|W:stop
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_2: op=0xa vars=int,int
// @EVENT_3: op=0x12 vars=int,int
// @EVENT_0: op=0x18 vars=
// @PE: 0xa,0x12

task_0_event_2(var_0_bool, var_1_int, var_2_int)
{
	SetBackground("pressed");
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_3(var_0_bool, var_1_int, var_2_int)
{
	SetBackground("default");
	var_0_bool = !var_0_bool;
	return 0;
}


task_0_event_0(var_0_bool)
{
	var_1_bool = var_0_bool == 0; //@nz
	if(var_1_bool != 0) {
		Blit("start", (int)0, (int)0);
	} else {
		Blit("stop", (int)0, (int)0);
	}
	return 0;
	
}


main(var_0_bool)
{
	var_0_bool = false;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


