// @IMPORTS: SetVariable/2,Trace/1,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1
// @STRINGS: W:d11q03|W:fail|W:completed|W:cleanup
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0x54 vars=int,float
// @PE: 0x9,0x54

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "fail";
	if(var_3_bool != 0) {
		func_37();
	} else {
		var_12_bool = var_1_string == "completed";
		if(var_12_bool == 0) goto Label_25;
		func_45();
	}
Label_25:
	return 0;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_26();
	return 0;
}


main(var_0_object)
{
	SetVariable("d11q03", (int)1);
	var_3_int = 0;
	func_65((int)11);
	return 0;
}


func_65(var_3_int)
{
	var_4_float = 0; var_5_float = 0;
	GetGameTime(var_5_float);
	var_7_float = var_3_int * (int)24;
	var_8_bool = var_5_float >= var_7_float;
	if(var_8_bool != 0) {
		func_53(var_5_float);
	} else {
		var_16_float = var_3_int * (int)24;
		SetTimeEvent((int)0, var_16_float);
		Hold();
	}
	return 2;
	
}


func_37()
{
	SetVariable("d11q03", (int)-1);
	func_53(var_4_int);
	return 0;
}


func_45()
{
	SetVariable("d11q03", (int)1000);
	func_53(var_1_string);
	return 0;
}


func_53(var_0_object)
{
	EventDisable(26);
	var_9_object = var_0_object;
	if(var_9_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_11_object = Obj();
	func_89(var_11_object);
	RemoveActor(var_11_object);
	return 0;
}


func_89(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_26()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d11q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_37();
	}
	return 2;
}


