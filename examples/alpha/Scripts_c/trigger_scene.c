// @IMPORTS: Hold/0,IsPlayerActor/2,GetScene/1,Trigger/2
// @GLOBALS: 0:string:Name,1:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_23: op=0x7 vars=object

task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_object = Obj(); var_3_bool = 0; var_4_object = Obj();
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
		GetScene(var_4_object);
		var_9_string = GlobalVars[0];
		Trigger(var_4_object, var_9_string);
		var_4_object = 0;
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


