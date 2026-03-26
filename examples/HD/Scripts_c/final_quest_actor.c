// @IMPORTS: Hold/0,Trace/1,PlaySound/1,CameraPlay/1,CameraWaitForPlayFinish/0,sync/1,ModDarkenLevel/1,CameraSwitchToNormal/0,TriggerWorld/1,SetSepia/2
// @STRINGS: W:voices|W:voice|W:whiten|W:final_theater_cam.mot|W:exit
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_string)
{
	var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0;
	Trace(var_0_string);
	var_6_bool = var_0_string == "voices";
	if(var_6_bool != 0) {
		PlaySound("voice");
	} else {
		var_9_bool = var_0_string == "whiten";
		if(var_9_bool == 0) goto Label_49;
		func_50();
		CameraPlay("final_theater_cam.mot");
		CameraWaitForPlayFinish();

	Label_26:
		Trace((int)1);
		sync(var_4_float);
		var_15_float = var_4_float * (float)1.0;
		var_17_float = var_15_float / (float)2.0;
		(float)0 = (float)0 + var_17_float;
		ModDarkenLevel(var_3_float);
		var_19_bool = var_3_float < (int)1;
		if(var_19_bool == 1) goto Label_26;
		func_55();
		CameraSwitchToNormal();
		TriggerWorld("exit");
	}
Label_49:
	return 4;
	
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_50()
{
	SetSepia((float)0.5, (float)0.8859999775886536);
	return 0;
}


func_55()
{
	SetSepia((int)0, (int)0);
	return 0;
}


