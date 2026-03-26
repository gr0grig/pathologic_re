// @IMPORTS: GetSceneByName/2,Trigger/2,Hold/0,Trace/1,GetVariable/2,SetVariable/2,RemoveActor/1,self/1
// @STRINGS: W:cot_eva|W:nodanko|W:cleanup|W:k3q01|W:fail|W:completed
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0xc vars=string

task_0_event_26(var_0_string)
{
	var_1_int = 0; var_2_int = 0;
	Trace(var_0_string);
	var_4_bool = var_0_string == "cleanup";
	if(var_4_bool != 0) {
		GetVariable("k3q01", var_2_int);
		var_7_bool = var_2_int != (int)1000;
		if(var_7_bool != 0) {
			func_46();
		} else {
			func_62();
	}
		var_18_bool = var_0_string == "fail";
		if(var_18_bool != 0) {
			func_46();
			goto Label_45;
		}
		var_20_bool = var_0_string == "completed";
		if(var_20_bool == 0) goto Label_45;
		func_54();
	}
	goto Label_45;
	
Label_45:
	return 2;
	
}


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	GetSceneByName(var_1_object, "cot_eva");
	Trigger(var_1_object, "nodanko");
	
Label_7:
	Hold();
	goto Label_7;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_46()
{
	SetVariable("k3q01", (int)-1);
	func_62();
	return 0;
}


func_62()
{
	var_10_object = Obj(); var_11_object = Obj();
	EventDisable(26);
	GetSceneByName(var_11_object, "cot_eva");
	Trigger(var_11_object, "danko");
	var_14_object = Obj();
	func_77(var_14_object);
	RemoveActor(var_14_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_77(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_54()
{
	SetVariable("k3q01", (int)1000);
	func_62();
	return 0;
}


