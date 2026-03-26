// @IMPORTS: SetVisibility/1,Hold/0,PlaySound/1,Trace/1
// @STRINGS: W:door_closed|W:Door is locked
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x7 vars=object
// @PE: 0x7

task_0_event_0(var_0_object)
{
	PlaySound("door_closed");
	Trace("Door is locked");
	return 0;
}


main()
{
	SetVisibility((bool)1);
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


