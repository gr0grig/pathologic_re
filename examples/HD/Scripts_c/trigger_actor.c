// @IMPORTS: Hold/0,IsPlayerActor/2,GetActorName/1,FindActor/2,Trigger/2
// @GLOBALS: 0:string:Name,1:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_23: op=0x7 vars=object

task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_bool = 0; var_4_string = "";
	var_5_bool = GlobalVars[1];
	var_6_bool = var_5_bool == 0; //@nz
	if(var_6_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_0_object, var_3_bool);
	var_7_bool = var_3_bool;
	if(var_7_bool != 0) {
		var_8_bool = GlobalVars[1];
		GlobalVars[1] = (bool)0;
		GetActorName(var_4_string);
		var_9_bool = 0; var_10_string = ""; var_11_string = "";
		var_12_string = GlobalVars[0];
		var_12_string = var_10_string;
		var_4_string = var_11_string;
		func_29(var_9_bool, var_10_string, var_11_string);
	}
	return 4;
}


main()
{
	var_0_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_29(var_9_bool, var_10_string, var_11_string)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, var_10_string);
	var_15_bool = var_14_object == 0; //@ne
	if(var_15_bool != 0) {
		var_9_bool = 0;
		return 2;
	}
	Trigger(var_14_object, var_11_string);
	var_9_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


