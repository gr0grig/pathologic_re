// @IMPORTS: ProcessEvents/0,SendMessageToParent/1,SetBackground/1
// @STRINGS: W:map|W:to_map_h|W:to_quest_h|W:to_map|W:to_quest
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_2: op=0x6 vars=int,int
// @EVENT_200: op=0xf vars=int,string,object
// @EVENT_9: op=0x1f vars=
// @EVENT_10: op=0x24 vars=
// @PE: 0x0,0x6,0xf,0x1f,0x24

task_0_event_2(var_0_bool, var_1_bool, var_2_int, var_3_int)
{
	var_4_bool = var_0_bool;
	if(var_4_bool != 0) {
		var_5_int = 1;
	} else {
		var_6_int = 0; //@pi
	}
	SendMessageToParent(var_5_int);
	return 0;
	
}


task_0_event_200(var_0_bool, var_1_bool, var_2_int, var_3_string, var_4_object)
{
	var_6_bool = var_3_string == "map";
	if(var_6_bool != 0) {
		var_0_bool = var_2_int != (int)0;
		var_8_bool = var_1_bool;
		if(var_8_bool != 0) {
			func_41();
		} else {
			func_51();
		}
	}
	return 0;
	
}


task_0_event_9(var_0_bool, var_1_bool)
{
	func_41();
	var_1_bool = true;
	return 0;
}


task_0_event_10(var_0_bool, var_1_bool)
{
	func_51();
	var_1_bool = false;
	return 0;
}


main(var_0_bool, var_1_bool)
{
	func_51();
	ProcessEvents();
	return 0;
}


func_41()
{
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		SetBackground("to_map_h");
	} else {
		SetBackground("to_quest_h");
	}
	return 0;
	
}


func_51()
{
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		SetBackground("to_map");
	} else {
		SetBackground("to_quest");
	}
	return 0;
	
}


