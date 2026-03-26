// @IMPORTS: Trace/1,Hold/0,IsPlayerActor/2,GetScene/1,Trigger/2
// @STRINGS: W:Triggered actor: 
// @GLOBALS: 0:string:Name
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_23: op=0x9 vars=object

task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_object = Obj(); var_3_bool = 0; var_4_object = Obj();
	IsPlayerActor(var_0_object, var_3_bool);
	var_5_bool = var_3_bool;
	if(var_5_bool != 0) {
		GetScene(var_4_object);
		var_6_string = GlobalVars[0];
		Trigger(var_4_object, var_6_string);
		var_4_object = 0;
	}
	return 4;
}


main()
{
	var_1_string = GlobalVars[0];
	var_2_int = "Triggered actor: " + var_1_string;
	Trace(var_2_int);
	
Label_5:
	Hold();
	goto Label_5;
}
EMIT "Return(); Pop(0)";


