// @IMPORTS: RegisterKeyCallback/1,UnregisterKeyCallback/1,CameraSwitchToNormal/0,Trace/1,CameraPlay/1,CameraWaitForPlayFinish/0,Hold/0,FindActor/2,Trigger/2,SetSepia/2
// @STRINGS: W:space|W:escape|W:playing: |W:@Trigger : |W:d2q01_trigger|W:scenes/d2q01_trigger.mot|W:quest_b1_05|W:house_load
// @GLOBALS: 0:object:
// @RUN_OP: 0x28
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_24: op=0x12 vars=int
// @TASK_1: vars= params=0
// @EVENT_26: op=0x2c vars=string
// @EVENT_5: op=0x3b vars=
// @EVENT_6: op=0x41 vars=
// @PE: 0x0,0x12,0x16,0x2c

task_0_event_24(var_0_int)
{
	CameraSwitchToNormal();
	return 0;
}


task_1_event_26(var_0_string)
{
	var_2_int = "@Trigger : " + var_0_string;
	Trace(var_2_int);
	var_4_bool = var_0_string == "d2q01_trigger";
	if(var_4_bool != 0) {
		var_5_string = "";
		TaskCall(0);
		func_0("scenes/d2q01_trigger.mot");
		TaskReturn();
	}
	return 0;
}


task_1_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = "";
	func_66(var_0_bool, "quest_b1_05", "house_load");
	return 0;
}


task_1_event_6()
{
	return 0;
}


main()
{
	
Label_40:
	Hold();
	goto Label_40;
}
EMIT "Return(); Pop(0)";


func_0(var_5_string)
{
	RegisterKeyCallback("space");
	RegisterKeyCallback("escape");
	var_8_string = "";
	var_5_string = var_8_string;
	func_22(var_8_string);
	UnregisterKeyCallback("escape");
	UnregisterKeyCallback("space");
	return 0;
}


func_66(var_0_bool, var_1_string, var_2_string)
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


func_78()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_83()
{
	SetSepia((int)0, (int)0);
	return 0;
}


func_22(var_8_string)
{
	var_10_int = "playing: " + var_8_string;
	Trace(var_10_int);
	func_78();
	CameraPlay(var_8_string);
	CameraWaitForPlayFinish();
	func_83();
	CameraSwitchToNormal();
	return 0;
}


