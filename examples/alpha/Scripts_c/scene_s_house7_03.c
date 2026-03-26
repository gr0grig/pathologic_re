// @IMPORTS: Hold/0,Sleep/2,GetRandomPFPoint/3,StopGroup0/0,Trace/1,AddActorByType/6,self/1,FindActor/2,Trigger/2
// @STRINGS: W:quest_d4_02|W:scene_load|W:scene_unload|W:New fog at |W:fog|W:horror_fog.xml
// @RUN_OP: 0xf
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x0 vars=
// @EVENT_6: op=0x9 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x19 vars=

task_0_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = "";
	func_81(var_0_bool, "quest_d4_02", "scene_load");
	func_19();
	return 0;
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = "";
	func_81(var_0_bool, "quest_d4_02", "scene_unload");
	return 0;
}


task_1_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = "";
	func_81(var_0_bool, "quest_d4_02", "scene_unload");
	func_57();
	return 0;
}


main()
{
	
Label_15:
	Hold();
	goto Label_15;
}
EMIT "Return(); Pop(0)";


func_34()
{
	var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_bool = 0; var_9_cvector = CVector(0,0,0);
	Sleep((int)3, var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		return 4;
	}
Label_41:
	GetRandomPFPoint(var_9_cvector, (int)0, (int)0);
	var_14_cvector = CVector(0,0,0);
	var_9_cvector = var_14_cvector;
	func_60(var_14_cvector);
	Sleep((int)30, var_8_bool);
	var_26_bool = var_8_bool == 0; //@nz
	if(var_26_bool != 0) {
	} else {
		goto Label_41;
	}
	return 4;
	
}


func_75(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, var_1_string);
	var_5_bool = var_4_object == 0; //@ne
	if(var_5_bool != 0) {
		var_0_bool = 0;
		return 2;
	}
	Trigger(var_4_object, var_2_string);
	var_0_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_19()
{
	TaskCall(1);
	func_34();
	TaskReturn();
	return 0;
}


func_57()
{
	StopGroup0();
	return 0;
}


func_60(var_14_cvector)
{
	var_15_object = Obj(); var_16_object = Obj();
	var_18_int = "New fog at " + var_14_cvector;
	Trace(var_18_int);
	var_20_object = Obj();
	func_75(var_20_object);
	AddActorByType(var_16_object, "fog", var_20_object, var_14_cvector, CVector(0.0, 0.0, 1.0), "horror_fog.xml");
	return 2;
}
EMIT "Stack[-1] = 0";


