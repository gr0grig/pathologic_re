// @IMPORTS: PlayAnimation/0,lshPlayAnimation/0,Hold/0,RemoveActor/1,self/1
// @STRINGS: W:remove
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x7 vars=string
// @EVENT_6: op=0xd vars=
// @PE: 0x7

task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "remove";
	if(var_3_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_21(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


main(var_0_bool)
{
	PlayAnimation();
	lshPlayAnimation();
	Hold();
	return 0;
}


func_21(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	self(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


