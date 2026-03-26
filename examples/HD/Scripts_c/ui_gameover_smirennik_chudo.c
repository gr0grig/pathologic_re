// @IMPORTS: SetOwnerDraw/1,ShowCursor/1,CaptureKeyboard/0,GetWindowSize/2,LoadVideo/1,FindVideo/2,ProcessEvents/0,ReleaseVideo/1,StopEventProcessing/0,UISync/0,DestroyWindow/0,NewGame/2
// @STRINGS: A:Play|A:IsLost|A:Restore|A:IsPlaying|A:StretchBlit|A:Stop|W:fin_smiren.wmv|W:world_final.xml|W:player_final.xml
// @RUN_OP: 0x59
// @RUN_TASK: 1
// @TASK_0: vars=object,int,int,bool params=2
// @EVENT_0: op=0x1e vars=
// @EVENT_101: op=0x38 vars=int
// @TASK_1: vars= params=0
// @PE: 0x0,0x38

task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0; var_9_bool = 0;
	@@@var_0_object:IsLost(var_7_bool);
	var_10_bool = var_7_bool;
	if(var_10_bool != 0) {
		@@@var_0_object:Restore(var_8_bool);
		var_11_bool = var_8_bool == 0; //@nz
		if(var_11_bool != 0) {
			return 6;
		}
	}
	@@@var_0_object:IsPlaying(var_9_bool);
	var_12_bool = var_9_bool;
	if(var_12_bool != 0) {
		@@@var_0_object:StretchBlit((int)0, (int)0, var_1_int, var_2_int);
	} else {
		@@@var_0_object:StretchBlit((int)0, (int)0, var_1_int, var_2_int);
		StopEventProcessing();
	}
	return 6;
	
}


task_0_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int)
{
	var_5_bool = var_3_bool == 0; //@nz
	if(var_5_bool != 0) {
		return 0;
	}
	var_6_bool = 0;
	var_6_bool = 1;
	var_7_bool = 0;
	var_7_bool = 1;
	var_8_bool = 0;
	var_8_bool = 1;
	var_10_bool = var_4_int == (int)27;
	if(var_10_bool != 1) {
		var_12_bool = var_4_int == (int)32;
		if(var_12_bool != 1) {
			var_8_bool = 0;
		}
	}
	if(var_8_bool != 1) {
		var_14_bool = var_4_int == (int)257;
		if(var_14_bool != 1) {
			var_7_bool = 0;
		}
	}
	if(var_7_bool != 1) {
		var_16_bool = var_4_int == (int)262;
		if(var_16_bool != 1) {
			var_6_bool = 0;
		}
	}
	if(var_6_bool != 0) {
		StopEventProcessing();
		@@@var_0_object:Stop();
	}
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool)
{
	EventDisable(1);
	EventDisable(0);
	UISync();
	EventEnable(1);
	EventEnable(0);
	var_4_string = ""; var_5_bool = 0;
	TaskCall(0);
	func_0(var_6_object, var_7_int, var_8_int, var_9_bool, "fin_smiren.wmv", (bool)0);
	TaskReturn();
	DestroyWindow();
	NewGame("world_final.xml", "player_final.xml");
	return 0;
}


func_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_string, var_5_bool)
{
	var_3_bool = var_5_bool;
	SetOwnerDraw((bool)1);
	ShowCursor((bool)0);
	CaptureKeyboard();
	GetWindowSize(var_1_int, var_2_int);
	LoadVideo(var_4_string);
	FindVideo(var_0_object, var_4_string);
	@@@var_0_object:Play((bool)0);
	ProcessEvents();
	SetOwnerDraw((bool)0);
	ShowCursor((bool)1);
	ReleaseVideo(var_4_string);
	return 0;
}


