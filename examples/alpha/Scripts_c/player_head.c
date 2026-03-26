// @IMPORTS: PlayCameraMotion/1,WaitForCameraMotionEnd/0,IsWalking/1,StopCameraMotion/0,Hold/0,StopGroup0/0,InterpolateCameraMotion/2
// @STRINGS: W:head
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_21: op=0x18 vars=
// @TASK_1: vars= params=0
// @EVENT_20: op=0x23 vars=
// @TASK_2: vars= params=0

task_0_event_21()
{
	StopCameraMotion();
	return 0;
}


task_1_event_20()
{
	StopGroup0();
	return 0;
}


main()
{
	var_0_bool = 0; var_1_bool = 0;
	
Label_1:
	TaskCall(1);
	func_27();
	TaskReturn();
	
Label_6:
	PlayCameraMotion("head");
	WaitForCameraMotionEnd();
	IsWalking(var_1_bool);
	var_6_bool = var_1_bool == 0; //@nz
	if(var_6_bool != 0) {
	} else {
		goto Label_6;
	}
	TaskCall(2);
	func_38();
	TaskReturn();
	goto Label_1;
	
}
EMIT "Return(); Pop(2)";


func_27()
{
	var_2_bool = 0; var_3_bool = 0;
	IsWalking(var_3_bool);
	var_4_bool = var_3_bool == 0; //@nz
	if(var_4_bool != 0) {
		Hold();
	}
	return 2;
}


func_38()
{
	InterpolateCameraMotion((float)0.0872664675116539, (float)60.0);
	WaitForCameraMotionEnd();
	return 0;
}


