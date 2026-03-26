// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,SendMessageToParent/1
// @STRINGS: W:disabled|W:pressed|W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_2: op=0xa vars=int,int
// @EVENT_3: op=0x14 vars=int,int
// @EVENT_10: op=0x1f vars=
// @EVENT_200: op=0x29 vars=int,string,object
// @PE: 0xa,0x14,0x29

task_0_event_2(var_0_bool, var_1_int, var_2_int)
{
	var_3_bool = var_0_bool;
	if(var_3_bool != 0) {
		SendMessageToParent((int)0);
		SetBackground("pressed");
	}
	return 0;
}


task_0_event_3(var_0_bool, var_1_int, var_2_int)
{
	var_3_bool = var_0_bool;
	if(var_3_bool != 0) {
		SetBackground("default");
	} else {
		SetBackground("disabled");
	}
	return 0;
	
}


task_0_event_10(var_0_bool)
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		SetBackground("default");
	} else {
		SetBackground("disabled");
	}
	return 0;
	
}


task_0_event_200(var_0_bool, var_1_int, var_2_string, var_3_object)
{
	var_5_bool = var_1_int > (int)0;
	if(var_5_bool != 0) {
		var_0_bool = true;
		SetBackground("default");
	} else {
		var_0_bool = false;
		SetBackground("disabled");
	}
	return 0;
	
}


main(var_0_bool)
{
	var_0_bool = false;
	SetBackground("disabled");
	SetOwnerDraw((bool)0);
	ProcessEvents();
	return 0;
}


