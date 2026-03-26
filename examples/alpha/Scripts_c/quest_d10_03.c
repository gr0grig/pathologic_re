// @IMPORTS: SetVariable/2,Trace/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1
// @STRINGS: W:d10q03|W:fail|W:completed
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0x4f vars=int,float
// @PE: 0x9,0x4f

task_0_event_26(var_0_string)
{
	Trace(var_0_string);
	var_2_bool = var_0_string == "fail";
	if(var_2_bool != 0) {
		func_37();
	} else {
		var_9_bool = var_0_string == "completed";
		if(var_9_bool == 0) goto Label_25;
		func_45();
	}
Label_25:
	return 0;
	
}


task_0_event_9(var_0_int, var_1_float)
{
	func_26();
	return 0;
}


main()
{
	SetVariable("d10q03", (int)1);
	var_2_int = 0;
	func_60((int)10);
	return 0;
}


func_37()
{
	SetVariable("d10q03", (int)-1);
	func_53();
	return 0;
}


func_45()
{
	SetVariable("d10q03", (int)1000);
	func_53();
	return 0;
}


func_84(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj();
	self(var_10_object);
	var_10_object = var_8_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_53()
{
	EventDisable(26);
	var_8_object = Obj();
	func_84(var_8_object);
	RemoveActor(var_8_object);
	return 0;
}


func_26()
{
	var_2_int = 0; var_3_int = 0;
	GetVariable("d10q03", var_3_int);
	var_6_bool = var_3_int != (int)1000;
	if(var_6_bool != 0) {
		func_37();
	}
	return 2;
}


func_60(var_2_int)
{
	var_3_float = 0; var_4_float = 0;
	GetGameTime(var_4_float);
	var_6_float = var_2_int * (int)24;
	var_7_bool = var_4_float >= var_6_float;
	if(var_7_bool != 0) {
		func_53();
	} else {
		var_13_float = var_2_int * (int)24;
		SetTimeEvent((int)0, var_13_float);
		Hold();
	}
	return 2;
	
}


