// @IMPORTS: Hold/0,FindActor/2,Trigger/2
// @STRINGS: W:quest_d8_01|W:boiny_load
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x4 vars=

task_0_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = "";
	func_10(var_0_bool, "quest_d8_01", "boiny_load");
	return 0;
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_10(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, var_1_string);
	var_5_bool = var_4_object == 0; //@ne
	if(var_5_bool != 0) {
		var_0_bool = 0;
		return 2;
	}
	Trigger(var_4_object, var_2_string);
	var_0_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


