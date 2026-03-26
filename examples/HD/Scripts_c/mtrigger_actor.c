// @IMPORTS: Hold/0,IsPlayerActor/2,GetActorName/1,FindActor/2,Trigger/2
// @GLOBALS: 0:string:Name
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_23: op=0x4 vars=object

task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_bool = 0; var_4_string = "";
	IsPlayerActor(var_0_object, var_3_bool);
	var_5_bool = var_3_bool;
	if(var_5_bool != 0) {
		GetActorName(var_4_string);
		var_6_bool = 0; var_7_string = ""; var_8_string = "";
		var_9_string = GlobalVars[0];
		var_9_string = var_7_string;
		var_4_string = var_8_string;
		func_19(var_6_bool, var_7_string, var_8_string);
	}
	return 4;
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_19(var_6_bool, var_7_string, var_8_string)
{
	var_10_object = Obj(); var_11_object = Obj();
	FindActor(var_11_object, var_7_string);
	var_12_bool = var_11_object == 0; //@ne
	if(var_12_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	Trigger(var_11_object, var_8_string);
	var_6_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


