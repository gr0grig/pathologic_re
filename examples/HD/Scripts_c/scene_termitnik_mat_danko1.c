// @IMPORTS: Hold/0,GetGameTime/1
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_5: op=0x5 vars=

task_0_event_5(var_0_bool)
{
	var_1_float = 0; var_2_float = 0;
	var_3_bool = var_0_bool == 0; //@nz
	if(var_3_bool != 0) {
		GetGameTime(var_2_float);
		var_5_bool = var_2_float >= (int)240;
		if(var_5_bool != 0) {
			var_0_bool = true;
		}
	}
	return 2;
}


main(var_0_bool)
{
	var_0_bool = false;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


