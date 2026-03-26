// @IMPORTS: SetBackground/1,ProcessEvents/0,SendMessageToParent/1
// @STRINGS: W:default|W:checked
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_2: op=0xf vars=int,int
// @EVENT_3: op=0x18 vars=int,int
// @EVENT_200: op=0x1a vars=int,string,object
// @PE: 0xf,0x18,0x1a

task_0_event_2(var_0_bool, var_1_int, var_2_int)
{
	var_0_bool = !var_0_bool;
	func_33();
	func_7();
	return 0;
}


task_0_event_3(var_0_bool, var_1_int, var_2_int)
{
	return 0;
}


task_0_event_200(var_0_bool, var_1_int, var_2_string, var_3_object)
{
	var_0_bool = var_1_int != (int)0;
	func_33();
	return 0;
}


main(var_0_bool)
{
	var_0_bool = false;
	SetBackground("default");
	ProcessEvents();
	return 0;
}


func_33()
{
	var_5_bool = var_0_bool;
	if(var_5_bool != 0) {
		SetBackground("checked");
	} else {
		SetBackground("default");
	}
	return 0;
	
}


func_7()
{
	var_6_bool = var_0_bool;
	if(var_6_bool != 0) {
		var_7_int = 1;
	} else {
		var_8_int = 0; //@pi
	}
	SendMessageToParent(var_7_int);
	return 0;
	
}


