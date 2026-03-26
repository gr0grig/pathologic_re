// @IMPORTS: FindParticleSystem/2,Trace/1,Hold/0,Sleep/1,RemoveActor/1,self/1
// @STRINGS: W:torch|W:Can't find torch particle system|A:AddSource|A:Enable|W:remove|A:Fade
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0x19 vars=string
// @TASK_1: vars= params=0
// @PE: 0x19

task_0_event_26(var_0_string)
{
	var_2_bool = var_0_string == "remove";
	if(var_2_bool != 0) {
		TaskCall(1);
		func_35();
		TaskReturn();
	}
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	FindParticleSystem("torch", var_1_object);
	var_3_bool = var_1_object == 0; //@ne
	if(var_3_bool != 0) {
		Trace("Can't find torch particle system");
		return 2;
	}
	@@var_1_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_1_object:Enable();
	var_8_object = GlobalVars[0];
	var_1_object = var_8_object;
	GlobalVars[0] = var_8_object;
	
Label_20:
	Hold();
	goto Label_20;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_51(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	self(var_8_object);
	var_8_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_35()
{
	var_3_object = GlobalVars[0];
	if(var_3_object != 0) {
		var_4_object = GlobalVars[0];
		@@var_4_object:Fade();
	}
	Sleep((int)1);
	var_6_object = Obj();
	func_51(var_6_object);
	RemoveActor(var_6_object);
	Hold();
	return 0;
}


