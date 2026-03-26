// @IMPORTS: SetOwnerDraw/1,ProcessEvents/0,Blit/3
// @STRINGS: W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_0: op=0x7 vars=
// @EVENT_200: op=0xf vars=int,string,object
// @PE: 0xf

task_0_event_0(var_0_bool)
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		Blit("default", (int)0, (int)0);
	}
	return 0;
}


task_0_event_200(var_0_bool, var_1_int, var_2_string, var_3_object)
{
	var_0_bool = var_1_int != (int)0;
	return 0;
}


main(var_0_bool)
{
	var_0_bool = false;
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


