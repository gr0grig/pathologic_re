// @IMPORTS: RegisterKeyCallback/1,UnregisterKeyCallback/1,CameraSwitchToNormal/0,Trace/1,CameraPlay/1,CameraWaitForPlayFinish/0,Hold/0
// @STRINGS: W:space|W:escape|W:playing: |W:@Trigger : |W:d2q01_trigger|W:scenes/d2q01_trigger.mot
// @GLOBALS: 0:object:
// @RUN_OP: 0x22
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_24: op=0x12 vars=int
// @TASK_1: vars= params=0
// @EVENT_26: op=0x26 vars=string
// @PE: 0x0,0x12,0x16,0x26

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


main()
{
	
Label_34:
	Hold();
	goto Label_34;
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


func_22(var_8_string)
{
	var_10_int = "playing: " + var_8_string;
	Trace(var_10_int);
	CameraPlay(var_8_string);
	CameraWaitForPlayFinish();
	CameraSwitchToNormal();
	return 0;
}


