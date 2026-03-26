// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,Blit/3,SendMessageToParent/1
// @STRINGS: W:default|W:text|W:pressed
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x9 vars=
// @EVENT_2: op=0xf vars=int,int
// @EVENT_3: op=0x17 vars=int,int
// @EVENT_200: op=0x19 vars=int,string,object
// @PE: 0xf,0x17,0x19

task_0_event_0()
{
	Blit("text", (int)0, (int)0);
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
	return 0;
}


task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_4_bool = var_0_int == (int)0;
	if(var_4_bool != 0) {
		SetBackground("default");
	} else {
		SetBackground("pressed");
	}
	return 0;
	
}


main()
{
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


