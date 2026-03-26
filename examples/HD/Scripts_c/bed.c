// @IMPORTS: SetVisibility/1,Hold/0,IsOverrideActive/1,ActivateSleepMode/1
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x7 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0;
	IsOverrideActive(var_2_bool);
	var_3_bool = var_2_bool == 0; //@nz
	if(var_3_bool != 0) {
		ActivateSleepMode(var_0_object);
	}
	return 2;
}


main()
{
	SetVisibility((bool)1);
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


