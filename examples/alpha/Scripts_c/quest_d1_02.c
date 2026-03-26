// @IMPORTS: SetVariable/2,GetSceneByName/2,AddScriptedActor/5,Trace/1,GetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1
// @STRINGS: W:d1q02|W:cot_anna|W:cot_anna_corpse|W:actor_disp.bin|W:completed|W:cleanup
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x13 vars=string
// @EVENT_9: op=0x57 vars=int,float
// @PE: 0x13,0x57

task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string);
	var_3_bool = var_1_string == "completed";
	if(var_3_bool != 0) {
		func_48();
	}
	return 0;
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_29();
	return 0;
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	SetVariable("d1q02", (int)1);
	GetSceneByName(var_2_object, "cot_anna");
	AddScriptedActor(var_0_object, "cot_anna_corpse", "actor_disp.bin", var_2_object, CVector(0.0, 0.0, 0.0));
	var_9_int = 0;
	func_68((int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_68(var_9_int)
{
	var_10_float = 0; var_11_float = 0;
	GetGameTime(var_11_float);
	var_13_float = var_9_int * (int)24;
	var_14_bool = var_11_float >= var_13_float;
	if(var_14_bool != 0) {
		func_56(var_11_float);
	} else {
		var_22_float = var_9_int * (int)24;
		SetTimeEvent((int)0, var_22_float);
		Hold();
	}
	return 2;
	
}


func_40()
{
	SetVariable("d1q02", (int)-1);
	func_56(var_4_int);
	return 0;
}


func_48()
{
	SetVariable("d1q02", (int)1000);
	func_56(var_1_string);
	return 0;
}


func_56(var_0_object)
{
	EventDisable(26);
	var_15_object = var_0_object;
	if(var_15_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_17_object = Obj();
	func_92(var_17_object);
	RemoveActor(var_17_object);
	return 0;
}


func_92(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_29()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d1q02", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_40();
	}
	return 2;
}


