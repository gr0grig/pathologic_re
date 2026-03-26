// @IMPORTS: SetVisibility/1,Hold/0,IsOverrideActive/1,ShowWindow/4,self/1,GetVariable/2
// @STRINGS: W:apparatus.xml|W:branch
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x7 vars=object

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0;
	var_3_int = 0;
	func_36(var_3_int);
	var_8_bool = var_3_int != (int)1;
	if(var_8_bool != 0) {
		return 2;
	}
	EventDisable(0);
	IsOverrideActive(var_2_bool);
	var_9_bool = var_2_bool == 0; //@nz
	if(var_9_bool != 0) {
		var_13_object = Obj();
		func_30(var_13_object);
		ShowWindow("apparatus.xml", (bool)0, (bool)0, var_13_object);
		EventEnable(0);
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


func_36(var_3_int)
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("branch", var_5_int);
	var_5_int = var_3_int;
	return 2;
}


func_30(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	self(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


