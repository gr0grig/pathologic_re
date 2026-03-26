// @IMPORTS: SetBackground/1,ProcessEvents/0,GetWindowName/1,Trace/1,SendMessageToParent/1
// @STRINGS: W:default|W:highlight
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string params=0
// @EVENT_2: op=0xa vars=int,int
// @EVENT_3: op=0x12 vars=int,int
// @EVENT_9: op=0x17 vars=
// @EVENT_10: op=0x1b vars=
// @EVENT_200: op=0x1f vars=int,string,object
// @PE: 0xa,0x12,0x1f

task_0_event_2(var_0_string, var_1_int, var_2_int)
{
	SetBackground("highlight");
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_3(var_0_string, var_1_int, var_2_int)
{
	SetBackground("default");
	return 0;
}


task_0_event_9(var_0_string)
{
	SetBackground("highlight");
	return 0;
}


task_0_event_10(var_0_string)
{
	SetBackground("default");
	return 0;
}


task_0_event_200(var_0_string, var_1_int, var_2_string, var_3_object)
{
	var_5_bool = var_1_int == (int)1;
	if(var_5_bool != 0) {
		SetBackground("highlight");
	} else {
		var_8_bool = var_1_int == (int)0;
		if(var_8_bool != 0) {
			SetBackground("default");
			goto Label_55;
		}
		var_11_bool = var_1_int == (int)2;
		if(var_11_bool == 0) goto Label_55;
		SetBackground("highlight");
		SendMessageToParent((int)0);
	}
Label_55:
	return 0;
	
}


main(var_0_string)
{
	SetBackground("default");
	ProcessEvents();
	GetWindowName(var_0_string);
	Trace(var_0_string);
	return 0;
}


