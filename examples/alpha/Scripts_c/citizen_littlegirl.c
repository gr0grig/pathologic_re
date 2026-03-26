// @IMPORTS: DoTrade/0,WaitForAnimEnd/0,PlayAnimation/2,StopAnimation/0,StopTrade/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,StopWorld/0,CameraTransit/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetGameTime/1,GetProperty/2,SignalDeath/1,HasAnimation/3,GetVariable/2,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,FindActor/2,WorkWithCorpse/1,CanSee/2,ReportReputationChange/3,SetRTEnvelope/2
// @STRINGS: W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |W:health|A:SetReturnValue|W:player|W:GenerateMoney: iMin > iMax|W:Money|W:flower|W:needle|W:rifle_ammo|W:revolver_ammo|W:lockpick|W:alpha_pills|W:meradorm|W:powder|W:reputation|W:ui/NPC_None.png|W:class|W:rat
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xaa
// @RUN_TASK: 2
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0xf vars=int
// @TASK_1: vars= params=1
// @EVENT_0: op=0x25 vars=object
// @EVENT_6: op=0x33 vars=
// @EVENT_22: op=0xa4 vars=object,int,float,float
// @EVENT_16: op=0xa6 vars=object,string
// @EVENT_41: op=0xa8 vars=object
// @TASK_2: vars=bool,bool,bool params=0
// @EVENT_0: op=0xc2 vars=object
// @EVENT_17: op=0xd6 vars=object
// @EVENT_30: op=0xea vars=object,object
// @EVENT_40: op=0x104 vars=object
// @EVENT_42: op=0x118 vars=object,string
// @EVENT_1: op=0x12e vars=object
// @EVENT_3: op=0x134 vars=object
// @EVENT_7: op=0x13a vars=int
// @EVENT_6: op=0x146 vars=
// @EVENT_41: op=0x15d vars=object
// @EVENT_10: op=0x1c7 vars=object
// @EVENT_28: op=0x1cb vars=
// @TASK_3: vars= params=0
// @EVENT_0: op=0x1de vars=object
// @EVENT_17: op=0x1f2 vars=object
// @EVENT_30: op=0x206 vars=object,object
// @EVENT_40: op=0x220 vars=object
// @EVENT_42: op=0x234 vars=object,string
// @EVENT_6: op=0x24a vars=
// @TASK_4: vars=object params=1
// @EVENT_0: op=0x2d3 vars=object
// @EVENT_17: op=0x2e7 vars=object
// @EVENT_30: op=0x2fb vars=object,object
// @EVENT_40: op=0x315 vars=object
// @EVENT_42: op=0x329 vars=object,string
// @EVENT_41: op=0x34a vars=object
// @EVENT_7: op=0x353 vars=int
// @EVENT_6: op=0x376 vars=
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_6: op=0x399 vars=
// @EVENT_7: op=0x3fe vars=int
// @EVENT_41: op=0x439 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_7: op=0x4b0 vars=int
// @EVENT_41: op=0x4eb vars=object
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5b5 vars=int,int
// @STANDALONE_EVENT_16: op=0x816 vars=object,string
// @STANDALONE_EVENT_41: op=0x823 vars=object
// @STANDALONE_EVENT_22: op=0x829 vars=object,int,float,float
// @PE: 0x0,0xf,0x16,0x8e,0xa4,0xa6,0xa8,0x12e,0x134,0x13a,0x15d,0x1c7,0x34a,0x37d,0x439,0x4eb,0x543,0x5a5,0x5b5,0x773,0x7a7,0x7d9,0x7e1,0x7ea,0x7f4,0x80e,0x823,0x829,0x849,0x852,0x85a,0x864,0x86c,0x876,0x87e,0x881,0x883,0x886,0x888,0x88b,0x892,0x9d0

task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	StopAnimation();
	StopTrade();
	var_0_bool = true;
	return 0;
}


task_1_event_0(var_0_bool, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2184(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_23_object = Obj();
		var_16_bool = var_23_object;
		func_2187(var_23_object);
	}
	return 2;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_2193();
	return 0;
}


task_1_event_22(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	return 0;
}


task_1_event_16(var_0_bool, var_1_object, var_2_string, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2184(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_333(var_18_int);
		}
		var_26_object = Obj();
		var_16_bool = var_26_object;
		func_2187(var_26_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2138(var_19_int, var_20_object);
	var_19_int = var_18_int;
	var_56_bool = var_18_int > (int)0;
	if(var_56_bool != 0) {
		var_58_bool = var_18_int > (int)1;
		if(var_58_bool != 0) {
			func_333(var_18_int);
		}
		var_60_object = Obj();
		var_16_bool = var_60_object;
		func_2148(var_60_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj();
	var_16_string = var_21_object;
	var_17_bool = var_22_object;
	func_2455(var_20_bool, var_21_object, var_22_object);
	if(var_20_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_16_string = var_60_object;
		func_2156(var_59_int, var_60_object);
		var_59_int = var_19_int;
		var_90_bool = var_19_int > (int)0;
		if(var_90_bool != 0) {
			var_92_bool = var_19_int > (int)1;
			if(var_92_bool != 0) {
				func_333(var_19_int);
			}
			var_94_object = Obj();
			var_16_string = var_94_object;
			func_2166(var_94_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2174(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_333(var_18_int);
		}
		var_16_bool = Obj();
		func_2177();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_string = ""; var_22_object = Obj();
	var_17_bool = var_21_string;
	var_16_string = var_22_object;
	func_2179(var_22_object);
	var_20_int = var_19_int;
	var_24_bool = var_19_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_19_int > (int)1;
		if(var_26_bool != 0) {
			func_333(var_19_int);
		}
		var_28_string = ""; var_29_object = Obj();
		var_17_bool = var_28_string;
		var_16_string = var_29_object;
		func_2182();
	}
	return 2;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_object = Obj();
	var_16_bool = var_17_object;
	func_358(var_16_bool, var_17_object);
	return 0;
}


task_2_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_object = Obj();
	var_16_bool = var_17_object;
	func_358(var_16_bool, var_17_object);
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_18_bool = var_16_bool != (int)110;
	if(var_18_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_333(var_15_bool);
	func_2193();
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_333(var_16_bool);
	var_16_bool = Obj();
	func_2083();
	return 0;
}


task_2_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	RequestClearPath(var_16_bool);
	return 0;
}


task_2_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	Stop();
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2184(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_662();
		}
		var_25_object = Obj();
		var_16_bool = var_25_object;
		func_2187(var_25_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2138(var_19_int, var_20_object);
	var_19_int = var_18_int;
	var_56_bool = var_18_int > (int)0;
	if(var_56_bool != 0) {
		var_58_bool = var_18_int > (int)1;
		if(var_58_bool != 0) {
			func_662();
		}
		var_59_object = Obj();
		var_16_bool = var_59_object;
		func_2148(var_59_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj();
	var_16_string = var_21_object;
	var_17_bool = var_22_object;
	func_2455(var_20_bool, var_21_object, var_22_object);
	if(var_20_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_16_string = var_60_object;
		func_2156(var_59_int, var_60_object);
		var_59_int = var_19_int;
		var_90_bool = var_19_int > (int)0;
		if(var_90_bool != 0) {
			var_92_bool = var_19_int > (int)1;
			if(var_92_bool != 0) {
				func_662();
			}
			var_93_object = Obj();
			var_16_string = var_93_object;
			func_2166(var_93_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2174(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_662();
		}
		var_16_bool = Obj();
		func_2177();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_string = ""; var_22_object = Obj();
	var_17_bool = var_21_string;
	var_16_string = var_22_object;
	func_2179(var_22_object);
	var_20_int = var_19_int;
	var_24_bool = var_19_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_19_int > (int)1;
		if(var_26_bool != 0) {
			func_662();
		}
		var_27_string = ""; var_28_object = Obj();
		var_17_bool = var_27_string;
		var_16_string = var_28_object;
		func_2182();
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_662();
	func_2193();
	return 0;
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2184(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_831();
		}
		var_27_object = Obj();
		var_16_bool = var_27_object;
		func_2187(var_27_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2138(var_19_int, var_20_object);
	var_19_int = var_18_int;
	var_56_bool = var_18_int > (int)0;
	if(var_56_bool != 0) {
		var_58_bool = var_18_int > (int)1;
		if(var_58_bool != 0) {
			func_831();
		}
		var_61_object = Obj();
		var_16_bool = var_61_object;
		func_2148(var_61_object);
	}
	return 2;
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj();
	var_16_string = var_21_object;
	var_17_bool = var_22_object;
	func_2455(var_20_bool, var_21_object, var_22_object);
	if(var_20_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_16_string = var_60_object;
		func_2156(var_59_int, var_60_object);
		var_59_int = var_19_int;
		var_90_bool = var_19_int > (int)0;
		if(var_90_bool != 0) {
			var_92_bool = var_19_int > (int)1;
			if(var_92_bool != 0) {
				func_831();
			}
			var_95_object = Obj();
			var_16_string = var_95_object;
			func_2166(var_95_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2174(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_831();
		}
		var_16_bool = Obj();
		func_2177();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_string = ""; var_22_object = Obj();
	var_17_bool = var_21_string;
	var_16_string = var_22_object;
	func_2179(var_22_object);
	var_20_int = var_19_int;
	var_24_bool = var_19_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_19_int > (int)1;
		if(var_26_bool != 0) {
			func_831();
		}
		var_29_string = ""; var_30_object = Obj();
		var_17_bool = var_29_string;
		var_16_string = var_30_object;
		func_2182();
	}
	return 2;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831();
	var_16_bool = Obj();
	func_2083();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_22_bool = var_16_bool != (int)111;
	if(var_22_bool != 0) {
		return 4;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_0_bool;
	func_1744(var_23_bool, var_24_object);
	var_57_bool = var_23_bool == 0; //@nz
	if(var_57_bool != 0) {
		func_831();
		return 4;
	}
	GetDirection(var_19_cvector);
	var_60_cvector = CVector(0,0,0); var_61_object = Obj();
	var_61_object = var_0_bool;
	func_1676(var_60_cvector, var_61_object);
	var_60_cvector = var_20_cvector;
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	var_19_cvector = var_67_cvector;
	var_20_cvector = var_68_cvector;
	func_2036(var_66_float, var_67_cvector, var_68_cvector);
	var_91_bool = var_66_float < (float)0.4999999701976776;
	if(var_91_bool != 0) {
		var_92_object = Obj();
		var_92_object = var_0_bool;
		func_1835(var_92_object);
	}
	return 4;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_831();
	func_2193();
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_1074(var_15_bool);
	func_2193();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_bool != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_928(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)10000.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1090((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1073;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1671(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1073:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1074(var_16_bool);
	var_16_bool = Obj();
	func_2083();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_bool != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1106(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)10000.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1268((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1251;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1671(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1251:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1252(var_16_bool);
	var_16_bool = Obj();
	func_2083();
	return 0;
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int)
{
	if((int)1 != 0) {
		func_1992();
		var_21_bool = var_17_int == (int)14633;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_bool;
			var_23_object = var_0_bool;
			func_2194(var_23_object);
		}
		var_26_bool = var_16_int == (int)14632;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1445(var_17_int, "Neutral");
			@@@var_0_bool:SetMessage((int)13398);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)13399, (int)-1, (int)14633);
			@@@var_0_bool:AddReply((int)13400, (int)-1, (int)14634);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=367";
		EMIT "Call 0x5a5";
		EMIT "Pop(1)";
		EMIT "Push((int) 14771)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=383";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=394";
		EMIT "Pop(0)";
		EMIT "Push((int) 14772)";
		EMIT "Push((int) 16019)";
		EMIT "Push((int) 16018)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
		EMIT "Pop(3)";
		EMIT "Push((int) 14779)";
		EMIT "Push((int) -1)";
		EMIT "Push((int) 16025)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=367";
		EMIT "Call 0x5a5";
		EMIT "Pop(1)";
		EMIT "Push((int) 14780)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=383";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=394";
		EMIT "Pop(0)";
		EMIT "Push((int) 14781)";
		EMIT "Push((int) 16028)";
		EMIT "Push((int) 16027)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
		EMIT "Pop(3)";
		EMIT "Push((int) 14786)";
		EMIT "Push((int) 16033)";
		EMIT "Push((int) 16032)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_50_bool = var_16_int == (int)16033;
		if(var_50_bool != 0) {
			var_51_string = "";
			func_1445(var_17_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14787);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14788, (int)16035, (int)16034);
			@@@var_0_bool:AddReply((int)14792, (int)-1, (int)16038);
			return 0;
		}
		var_60_bool = var_16_int == (int)16035;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_1445(var_17_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14789);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14790, (int)-1, (int)16036);
			@@@var_0_bool:AddReply((int)14791, (int)-1, (int)16037);
			return 0;
		}
		var_70_bool = var_16_int == (int)16028;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_1445(var_17_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14782);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14783, (int)-1, (int)16029);
			@@@var_0_bool:AddReply((int)14784, (int)-1, (int)16030);
			@@@var_0_bool:AddReply((int)14785, (int)-1, (int)16031);
			return 0;
		}
		var_83_bool = var_16_int == (int)16019;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_1445(var_17_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14773);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14774, (int)16021, (int)16020);
			@@@var_0_bool:AddReply((int)14778, (int)-1, (int)16024);
			return 0;
		}
		var_93_bool = var_16_int == (int)16021;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_1445(var_17_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14775);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14776, (int)-1, (int)16022);
			@@@var_0_bool:AddReply((int)14777, (int)-1, (int)16023);
			return 0;
		}
		var_3_bool = true;
		var_102_bool = 0;
		func_2401(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5b6";
	
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0;
	var_21_bool = var_17_string == "health";
	if(var_21_bool != 0) {
		GetProperty("health", var_19_float);
		var_24_bool = var_19_float <= (int)0;
		if(var_24_bool != 0) {
			SignalDeath(var_16_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_2062(var_17_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	var_16_object = var_20_object;
	var_17_int = var_21_int;
	var_18_float = var_22_float;
	func_1768(var_21_int, var_22_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	SensePlayerOnly((bool)1);
	func_2403();
	func_185();
	
Label_179:
	var_2_bool = false;
	func_398(var_14_string, var_15_bool);
	goto Label_179;
}
EMIT "Return(); Pop(0)";


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	WaitForAnimEnd();
	PlayAnimation("all", "idle");
	var_171_bool = var_0_bool;
	if(var_171_bool != 0) {
		goto Label_4;
	}
	return 0;
}
EMIT "Return(); Pop(0)";


func_2053(var_82_int)
{
	var_83_float = 0; var_84_float = 0;
	GetGameTime(var_84_float);
	var_86_int = 0;
	var_86_int = var_84_float / (int)24;
	var_82_int = (int)1 + var_86_int;
	return 2;
}


func_2062(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	TaskCall(1);
	func_22(var_18_object);
	TaskReturn();
	return 0;
}


func_22(var_18_object)
{
	EventDisable(0);
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_55(var_19_object);
	var_18_object = Obj();
	func_2512();
	EventEnable(0);
	
Label_33:
	Hold();
	goto Label_33;
}
EMIT "Return(); Pop(0)";


func_2097(var_116_string, var_117_int)
{
	var_118_string = ""; var_119_string = "";
	var_120_int = var_117_int;
	if(var_120_int != 0) {
		"idle" = "idle" + var_117_int;
	}
	var_119_string = var_116_string;
	return 2;
}


func_1074(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_55(var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0);
	var_40_bool = var_19_object == 0; //@ne
	if(var_40_bool != 0) {
		var_41_string = "";
		func_142("fdie");
	} else {
		@@var_19_object:GetPosition(var_30_cvector);
		GetPosition(var_31_cvector);
		GetDirection(var_32_cvector);
		var_33_cvector = var_31_cvector - var_30_cvector;
		var_44_float = GetByIndex(var_33_cvector, 0);
		var_45_float = GetByIndex(var_32_cvector, 0);
		var_46_float = var_44_float * var_45_float;
		var_47_float = GetByIndex(var_33_cvector, 2);
		var_48_float = GetByIndex(var_32_cvector, 2);
		var_49_float = var_47_float * var_48_float;
		var_50_int = var_46_float + var_49_float;
		var_52_bool = var_50_int >= (int)0;
		if(var_52_bool != 0) {
			var_34_string = "fdie";
		} else {
				var_34_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_19_object = var_35_object;
		var_55_bool = IsFuncExist(var_19_object, "GetScriptProperty", (int)2);
		if(var_55_bool != 0) {
			@@var_19_object:HasScriptProperty(var_36_bool, "Owner");
			var_57_bool = var_36_bool;
			if(var_57_bool != 0) {
				@@var_19_object:GetScriptProperty(var_35_object, "Owner");
				var_59_bool = var_35_object == 0; //@ne
				if(var_59_bool != 0) {
					var_19_object = var_35_object;
				}
			}
		}
		var_62_bool = IsFuncExist(var_35_object, "@GetEyesHeight", (int)1);
		if(var_62_bool != 0) {
			@@var_35_object:GetEyesHeight(var_38_float);
			var_39_cvector = CVector(0.0, 0.0, 0.0);
			var_63_float = GetByIndex(var_39_cvector, 1);
			var_38_float = var_63_float;
			SetByIndex(var_39_cvector, 1) = var_63_float;
			LookAsync(var_19_object, "head", var_39_cvector);
			var_37_bool = 1;
		} else {
			var_37_bool = 0;

		}
		PlayAnimation("all", var_34_string);
		WaitForAnimEnd();
		var_66_bool = var_37_bool;
		if(var_66_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_34_string);
		RemoveEnvelope();
		var_35_object = 0;
	}
	return 20;
	
}


func_2104(var_110_int)
{
	var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_bool = 0;
	var_113_int = 0;
	
Label_2106:
	var_116_string = ""; var_117_int = 0;
	var_113_int = var_117_int;
	func_2097(var_116_string, var_117_int);
	HasAnimation(var_114_bool, "all", var_116_string);
	var_121_bool = var_114_bool == 0; //@nz
	if(var_121_bool != 0) {
	} else {
		var_113_int = var_113_int + (int)1;
		goto Label_2106;
	}
	var_113_int = var_110_int;
	return 4;
	
}


func_1090(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1676(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2009(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_2121(var_59_int)
{
	var_61_bool = 0;
	func_2449(var_61_bool);
	if(var_61_bool != 0) {
		var_59_int = 2;
	} else {
		var_59_int = 0;
	}
	return 0;
	
}


func_593()
{
	var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_float = 0; var_100_bool = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_bool = 0; var_106_float = 0; var_107_bool = 0;
	WaitForAnimEnd();
	var_108_bool = 0;
	func_1846(var_108_bool);
	var_109_bool = var_108_bool == 0; //@nz
	if(var_109_bool != 0) {
		return 14;
	}
	func_2104((int)0);
	var_110_int = var_101_int;
	var_102_int = 0;
	
Label_607:
	var_123_bool = 0;
	var_123_bool = 0;
	var_125_bool = var_102_int < (int)5;
	if(var_125_bool != 0) {
		var_126_bool = 0;
		func_1846(var_126_bool);
		if(var_126_bool != 0) {
			var_123_bool = 1;
		}
	}
	if(var_123_bool != 0) {
		irand(var_103_int, (int)3);
		var_129_bool = var_103_int == (int)0;
		if(var_129_bool != 0) {
			var_130_int = var_101_int;
			if(var_130_int == 0) goto Label_640;
			irand(var_104_int, var_101_int);
			var_132_string = ""; var_133_int = 0;
			var_104_int = var_133_int;
			func_2097(var_132_string, var_133_int);
			PlayAnimation("all", var_132_string);
			WaitForAnimEnd(var_105_bool);
			var_134_bool = var_105_bool == 0; //@nz
			if(var_134_bool != 0) {
			} else {
		} else {
				var_137_bool = var_103_int == (int)1;
				if(var_137_bool != 0) {
					rand(var_106_float, (int)4);
					var_140_int = var_106_float + (int)1;
					Sleep(var_140_int, var_107_bool);
					var_141_bool = var_107_bool == 0; //@nz
					if(var_141_bool != 0) {
						goto Label_661;
					}
					goto Label_658;
				}
				var_142_int = var_102_int;
				if(var_142_int == 0) goto Label_658;
				goto Label_661;
		}
		Label_658:
			var_102_int = var_102_int + (int)1;
			goto Label_607;

		}
	}
Label_661:
	return 14;
	
}


func_2130(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	TaskCall(4);
	func_667(var_78_object, var_77_object);
	TaskReturn();
	return 0;
}


func_1106(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_1999(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_1999(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_2138(var_19_int, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_1744(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		var_19_int = 2;
	} else {
		var_19_int = 0;
	}
	return 0;
	
}


func_2148(var_61_object)
{
	var_62_object = Obj();
	var_61_object = var_62_object;
	TaskCall(5);
	func_893(var_62_object);
	TaskReturn();
	return 0;
}


func_2156(var_59_int, var_60_object)
{
	var_61_bool = 0; var_62_object = Obj();
	var_60_object = var_62_object;
	func_1744(var_61_bool, var_62_object);
	if(var_61_bool != 0) {
		var_59_int = 2;
	} else {
		var_59_int = 0;
	}
	return 0;
	
}


func_1136(var_0_bool, var_1_bool, var_2_bool, var_96_object)
{
	var_100_cvector = CVector(0,0,0); var_101_float = 0; var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_float = 0; var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_float = 0;
	var_0_bool = var_96_object;
	var_110_cvector = CVector(0,0,0); var_111_float = 0;
	func_1106(var_109_float, var_110_cvector, (float)1.7453293800354004);
	var_110_cvector = var_105_cvector;
	var_106_float = var_105_cvector | var_105_cvector;
	var_141_bool = var_106_float < (float)10000.0;
	if(var_141_bool != 0) {
		var_143_float = sqrt(var_106_float);
		var_144_int = "Can't retreat, distance: " + var_143_float;
		Trace(var_144_int);
		Sleep((float)0.5);
		return 10;
	}
	var_146_float = GetByIndex(var_105_cvector, 0);
	var_147_float = GetByIndex(var_105_cvector, 2);
	Rotate(var_146_float, var_147_float);
	var_148_cvector = CVector(0,0,0);
	func_1671(var_148_cvector);
	var_1_bool = var_148_cvector + var_105_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1169:
	MovePoint(var_1_bool, (int)1, var_107_bool);
	var_154_bool = var_107_bool;
	if(var_154_bool != 0) {
		var_155_bool = var_0_bool == 0; //@ne
		if(var_155_bool != 0) {
			goto Label_1199;
		EMIT "GOTO 0x4ad";

		Label_1199:
			return 10;
		}
		var_156_cvector = CVector(0,0,0); var_157_float = 0;
		func_1106(var_109_float, var_156_cvector, (float)2.6179938316345215);
		var_156_cvector = var_108_cvector;
		var_109_float = var_108_cvector | var_108_cvector;
		var_159_bool = var_109_float >= (float)10000.0;
		if(var_159_bool != 0) {
			var_160_cvector = CVector(0,0,0);
			func_1671(var_160_cvector);
			var_1_bool = var_160_cvector + var_108_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1199;
		}
	}
	var_163_bool = var_2_bool == 0; //@nz
	if(var_163_bool == 1) goto Label_1169;
	
}


func_2166(var_95_object)
{
	var_96_object = Obj();
	var_95_object = var_96_object;
	TaskCall(6);
	func_1136(var_97_object, var_98_cvector, var_99_bool, var_96_object);
	TaskReturn();
	return 0;
}


func_2174(var_19_int)
{
	var_19_int = 0;
	return 0;
}


func_2177()
{
	return 0;
}


func_2179(var_20_int)
{
	var_20_int = 0;
	return 0;
}


func_2182()
{
	return 0;
}


func_1671(var_88_cvector)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0);
	GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
	return 2;
}


func_2184(var_19_int)
{
	var_19_int = 2;
	return 0;
}


func_2187(var_27_object)
{
	var_28_object = Obj();
	var_27_object = var_28_object;
	func_2411(var_27_object, var_28_object);
	return 0;
}


func_1676(var_73_cvector, var_74_object)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetPosition(var_77_cvector);
	@@var_74_object:GetPosition(var_78_cvector);
	var_73_cvector = var_78_cvector - var_77_cvector;
	return 4;
}


func_142(var_41_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_41_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_41_string);
	RemoveEnvelope();
	return 0;
}


func_2193()
{
	return 0;
}


func_2194(var_23_object)
{
	@@var_23_object:SetReturnValue((int)1000);
	return 0;
}


func_1683(var_42_float, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_43_object:GetPosition(var_48_cvector);
	var_49_cvector = var_48_cvector - var_47_cvector;
	var_42_float = var_49_cvector | var_49_cvector;
	return 6;
}


func_662()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2199(var_88_int)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable("player", var_90_int);
	var_93_bool = var_90_int == (int)0;
	if(var_93_bool != 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x8a6";
	}
	var_95_bool = var_90_int == (int)1;
	if(var_95_bool != 0) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
	return 2;
}


func_1691(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0;
	var_52_bool = IsFuncExist(var_46_object, "HasProperty", (int)2);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_45_bool = 0;
		return 2;
	}
	@@var_46_object:HasProperty(var_47_string, var_49_bool);
	var_49_bool = var_45_bool;
	return 2;
}


func_667(var_0_bool, var_77_object)
{
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0;
	var_0_bool = var_77_object;
	func_718(var_84_bool);
	GetDirection(var_82_cvector);
	var_92_cvector = CVector(0,0,0); var_93_object = Obj();
	var_93_object = var_0_bool;
	func_1676(var_92_cvector, var_93_object);
	var_92_cvector = var_83_cvector;
	var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	var_82_cvector = var_99_cvector;
	var_83_cvector = var_100_cvector;
	func_2036(var_98_float, var_99_cvector, var_100_cvector);
	var_123_bool = var_98_float < (int)0;
	if(var_123_bool != 0) {
		var_124_object = Obj();
		var_124_object = var_0_bool;
		func_1835(var_124_object);
		var_84_bool = 1;
	} else {
		Sleep((float)1.5, var_84_bool);
	}
	var_133_bool = var_84_bool;
	if(var_133_bool != 0) {
		var_134_object = Obj();
		var_134_object = var_0_bool;
		func_1835(var_134_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_1703(var_38_bool, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0;
	@@var_39_object:IsDead(var_41_bool);
	var_41_bool = var_38_bool;
	return 2;
}


func_2216(var_79_int, var_80_int)
{
	var_90_int = 0; var_91_int = 0; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_bool = 0;
	var_98_bool = var_79_int > var_80_int;
	if(var_98_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_100_bool = var_79_int != var_80_int;
	if(var_100_bool != 0) {
		var_101_int = var_80_int - var_79_int;
		irand(var_95_int, var_101_int);
	} else {
		var_107_bool = var_79_int == (int)0;
		if(var_107_bool == 0) goto Label_2234;
		return 8;
	}
Label_2234:
	(int)0 = (int)0 + var_79_int;
	var_103_bool = var_94_int == (int)0;
	if(var_103_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_96_int, "Money");
	AddItem(var_97_bool, var_96_int, (int)0, var_94_int);
	return 8;
	
}


func_1708(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	var_33_bool = var_28_object == 0; //@ne
	if(var_33_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_34_bool = 0;
	var_34_bool = 0;
	var_37_bool = IsFuncExist(var_28_object, "IsDead", (int)1);
	if(var_37_bool != 0) {
		var_38_bool = 0; var_39_object = Obj();
		var_28_object = var_39_object;
		func_1703(var_38_bool, var_39_object);
		if(var_38_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	GetScene(var_31_object);
	var_42_bool = var_31_object == 0; //@ne
	if(var_42_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	@@var_28_object:GetScene(var_32_object);
	var_43_bool = var_31_object != var_32_object;
	if(var_43_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_27_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_185()
{
	var_67_bool = 0;
	func_1846(var_67_bool);
	var_70_bool = var_67_bool == 0; //@nz
	if(var_70_bool != 0) {
		func_2193();
	}
	return 0;
}


func_2246()
{
	var_74_bool = 0; var_75_int = 0; var_76_bool = 0; var_77_int = 0;
	ClearSubContainer((int)0);
	var_79_int = 0; var_80_int = 0;
	var_82_int = 0;
	func_2053(var_82_int);
	var_89_float = var_82_int * (int)5;
	var_80_int = (int)3 + var_89_float;
	func_2216((int)0, var_80_int);
	irand(var_77_int, (int)4);
	var_110_bool = var_77_int == (int)0;
	if(var_110_bool != 0) {
		var_111_int = 0; var_112_string = "";
		func_2378(var_111_int, "flower");
		AddItem(var_76_bool, var_111_int, (int)0, (int)1);
	}
	irand(var_77_int, (int)5);
	var_119_bool = var_77_int == (int)0;
	if(var_119_bool != 0) {
		var_120_int = 0; var_121_string = "";
		func_2378(var_120_int, "needle");
		AddItem(var_76_bool, var_120_int, (int)0, (int)1);
	}
	return 4;
}


func_718(var_0_bool)
{
	var_85_object = Obj();
	var_85_object = var_0_bool;
	func_1981(var_85_object);
	return 0;
}


func_1744(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_24_object = var_28_object;
	func_1708(var_27_bool, var_28_object);
	var_44_bool = var_27_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
	var_24_object = var_46_object;
	func_1691(var_45_bool, var_46_object, "noaccess");
	var_54_bool = var_45_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_23_bool = 1;
		return 2;
	}
	@@var_24_object:GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == (int)0;
	return 2;
}


func_1252(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1768(var_20_object, var_21_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_object = Obj(); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = "";
	var_43_bool = 0;
	var_43_bool = 0;
	var_45_bool = var_21_int != (int)4;
	if(var_45_bool != 0) {
		var_47_bool = var_21_int != (int)5;
		if(var_47_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		GetScene(var_33_object);
		GetPosition(var_35_cvector);
		GetEyesHeight(var_36_float);
		var_48_float = GetByIndex(var_35_cvector, 1);
		var_50_float = var_36_float / (int)2;
		var_48_float = var_48_float + var_50_float;
		SetByIndex(var_35_cvector, 1) = var_48_float;
		AddActorByType(var_34_object, "scripted", var_33_object, var_35_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_34_object = 0;
		var_33_object = 0;
	}
	var_54_bool = var_20_object == 0; //@ne
	if(var_54_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_37_int);
	var_56_bool = var_37_int < (int)0;
	if(var_56_bool != 0) {
		return 20;
	}
	@@var_20_object:GetPosition(var_38_cvector);
	GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_41_cvector = var_39_cvector - var_38_cvector;
	var_57_float = GetByIndex(var_41_cvector, 0);
	var_58_float = GetByIndex(var_40_cvector, 0);
	var_59_float = var_57_float * var_58_float;
	var_60_float = GetByIndex(var_41_cvector, 2);
	var_61_float = GetByIndex(var_40_cvector, 2);
	var_62_float = var_60_float * var_61_float;
	var_63_int = var_59_float + var_62_float;
	var_65_bool = var_63_int >= (int)0;
	if(var_65_bool != 0) {
		var_42_string = "fhit";
	} else {
		var_42_string = "bhit";
	}
	var_68_int = var_42_string + "1";
	var_70_int = var_42_string + "2";
	FadeSecondaryAnimation("hit_react", var_68_int, var_70_int, (int)-10);
	return 20;
	
}


func_2290(var_18_bool)
{
	var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0;
	ClearSubContainer((int)0);
	var_26_bool = var_18_bool;
	if(var_26_bool != 0) {
		irand(var_23_int, (int)3);
		var_29_bool = var_23_int != (int)0;
		if(var_29_bool != 0) {
			var_30_int = 0; var_31_string = "";
			func_2378(var_30_int, "rifle_ammo");
			AddItem(var_22_bool, var_30_int, (int)0, var_23_int);
		}
		irand(var_23_int, (int)3);
		var_37_bool = var_23_int != (int)0;
		if(var_37_bool != 0) {
			var_38_int = 0; var_39_string = "";
			func_2378(var_38_int, "revolver_ammo");
			AddItem(var_22_bool, var_38_int, (int)0, var_23_int);
		}
	} else {
		irand(var_24_int, (int)3);
		var_43_bool = var_24_int == (int)0;
		if(var_43_bool != 0) {
			var_44_int = 0; var_45_string = "";
			func_2378(var_44_int, "lockpick");
			AddItem(var_22_bool, var_44_int, (int)0, (int)1);
		}
		irand(var_24_int, (int)2);
		var_50_bool = var_24_int != (int)0;
		if(var_50_bool != 0) {
			var_51_int = 0; var_52_string = "";
			func_2378(var_51_int, "alpha_pills");
			AddItem(var_22_bool, var_51_int, (int)0, var_24_int);
		}
		irand(var_24_int, (int)2);
		var_56_bool = var_24_int != (int)0;
		if(var_56_bool != 0) {
			var_57_int = 0; var_58_string = "";
			func_2378(var_57_int, "meradorm");
			AddItem(var_22_bool, var_57_int, (int)0, var_24_int);
		}
		irand(var_24_int, (int)10);
		var_62_bool = var_24_int == (int)0;
		if(var_62_bool == 0) goto Label_2377;
		var_63_int = 0; var_64_string = "";
		func_2378(var_63_int, "powder");
		AddItem(var_22_bool, var_63_int, (int)0, (int)1);
	}
Label_2377:
	return 6;
	
}


func_1268(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1676(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2009(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_1284(var_0_bool, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_0_bool = var_35_object;
	var_45_bool = 0; var_46_object = Obj();
	var_35_object = var_46_object;
	func_1851(var_45_bool, var_46_object);
	var_85_bool = var_45_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	CreateDialog(var_41_object);
	var_86_int = 0;
	func_2397(var_86_int);
	@@var_41_object:SetNPCName(var_86_int);
	var_87_string = "";
	func_2399(var_87_string);
	@@var_41_object:SetPhoto(var_87_string);
	var_88_int = 0;
	func_2199(var_88_int);
	@@var_41_object:SetPlayerName(var_88_int);
	IsOverrideActive(var_42_bool);
	var_96_bool = var_42_bool;
	if(var_96_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	DoDialog(var_41_object);
	var_97_object = Obj(); var_98_object = Obj();
	var_35_object = var_97_object;
	var_41_object = var_98_object;
	TaskCall(8);
	func_1347(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	@@var_41_object:IsDialogEnd(var_44_bool);
	
Label_1329:
	var_134_bool = var_44_bool == 0; //@nz
	if(var_134_bool != 0) {
		sync();
		@@var_41_object:IsDialogEnd(var_44_bool);
		goto Label_1329;
	}
	var_35_object = Obj();
	func_1907();
	StopDialog(var_41_object);
	@@var_41_object:GetReturnValue((int)-1);
	var_43_int = var_34_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1835(var_92_object)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	@@var_92_object:GetPosition(var_96_cvector);
	GetPosition(var_97_cvector);
	var_98_cvector = var_96_cvector - var_97_cvector;
	var_99_float = GetByIndex(var_98_cvector, 0);
	var_100_float = GetByIndex(var_98_cvector, 2);
	RotateAsync(var_99_float, var_100_float);
	return 6;
}


func_1846(var_67_bool)
{
	var_68_bool = 0; var_69_bool = 0;
	IsLoaded(var_69_bool);
	var_69_bool = var_67_bool;
	return 2;
}


func_1851(var_45_bool, var_46_object)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0;
	@@var_46_object:GetPosition(var_56_cvector);
	@@var_46_object:GetEyesHeight(var_55_float);
	var_63_float = GetByIndex(var_56_cvector, 1);
	var_63_float = var_63_float + var_55_float;
	SetByIndex(var_56_cvector, 1) = var_63_float;
	GetPosition(var_57_cvector);
	GetEyesHeight(var_55_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	var_64_float = var_64_float + var_55_float;
	SetByIndex(var_57_cvector, 1) = var_64_float;
	var_58_cvector = var_56_cvector - var_57_cvector;
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (float)0;
	var_66_int = var_58_cvector | var_58_cvector;
	var_67_float = sqrt(var_66_int);
	var_58_cvector = var_58_cvector / var_67_float;
	var_59_cvector = -var_58_cvector;
	var_69_float = var_58_cvector * (int)70;
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_71_cvector = var_59_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1999(var_70_cvector, var_71_cvector);
	var_79_float = var_70_cvector * (int)25;
	var_80_int = var_69_float + var_79_float;
	var_60_cvector = var_80_int - CVector(0.0, 10.0, 0.0);
	var_61_cvector = var_57_cvector + var_60_cvector;
	IsOverrideActive(var_62_bool);
	var_82_bool = var_62_bool;
	if(var_82_bool != 0) {
		var_45_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_61_cvector, var_59_cvector);
	var_83_float = GetByIndex(var_60_cvector, 0);
	var_84_float = GetByIndex(var_60_cvector, 2);
	Rotate(var_83_float, var_84_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_45_bool = 1;
	return 16;
}


func_831()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1347(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_97_object, var_98_object)
{
	var_0_bool = var_98_object;
	var_1_bool = var_97_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_104_string = "";
		func_1445(var_98_object, "Neutral");
		@@@var_0_bool:SetMessage((int)13398);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)13399, (int)-1, (int)14633);
		@@@var_0_bool:AddReply((int)13400, (int)-1, (int)14634);
		goto Label_1415;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=367";
	EMIT "Call 0x5a5";
	EMIT "Pop(1)";
	EMIT "Push((int) 14771)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=383";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=394";
	EMIT "Pop(0)";
	EMIT "Push((int) 14772)";
	EMIT "Push((int) 16019)";
	EMIT "Push((int) 16018)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
	EMIT "Pop(3)";
	EMIT "Push((int) 14779)";
	EMIT "Push((int) -1)";
	EMIT "Push((int) 16025)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
	EMIT "Pop(3)";
	EMIT "GOTO 0x587";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=367";
	EMIT "Call 0x5a5";
	EMIT "Pop(1)";
	EMIT "Push((int) 14780)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=383";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=394";
	EMIT "Pop(0)";
	EMIT "Push((int) 14781)";
	EMIT "Push((int) 16028)";
	EMIT "Push((int) 16027)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
	EMIT "Pop(3)";
	EMIT "Push((int) 14786)";
	EMIT "Push((int) 16033)";
	EMIT "Push((int) 16032)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
	EMIT "Pop(3)";
	EMIT "GOTO 0x587";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x547";
	}
Label_1415:
	var_126_bool = 0;
	func_2401(var_126_bool);
	if(var_126_bool != 0) {

	Label_1419:
		lshWaitForAnimEnd();
		var_127_bool = var_3_bool;
		if(var_127_bool != 0) {
		} else {
			var_128_string = "";
			var_128_string = var_2_bool;
			func_1963(var_128_string);
			goto Label_1419;
	}
		PlayAnimation("all", "idle");

	Label_1434:
		WaitForAnimEnd();
		var_131_bool = var_3_bool;
		if(var_131_bool != 0) {
			goto Label_1444;
		}
		PlayAnimation("all", "idle");
		goto Label_1434;
	}
	goto Label_1444;
	
Label_1444:
	return 0;
	
}


func_2378(var_30_int, var_31_string)
{
	var_32_int = 0; var_33_int = 0;
	GetInvItemByName(var_33_int, var_31_string);
	var_33_int = var_30_int;
	return 2;
}


func_333(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_462(var_15_string, var_16_bool);
	return 0;
}


func_2383(var_62_float)
{
	var_63_object = Obj(); var_64_float = 0; var_65_object = Obj(); var_66_float = 0;
	FindActor(var_65_object, "player");
	var_68_bool = var_65_object == 0; //@nz
	if(var_68_bool != 0) {
		var_62_float = 0;
		return 4;
	}
	@@var_65_object:GetProperty("reputation", var_66_float);
	var_66_float = var_62_float;
	return 4;
}
EMIT "Stack[-2] = 0";


func_341(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_469(var_20_bool, var_21_int);
	return 0;
}


func_2397(var_86_int)
{
	var_86_int = 3346;
	return 0;
}


func_2399(var_87_string)
{
	var_87_string = "ui/NPC_None.png";
	return 0;
}


func_2401(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_2403()
{
	var_17_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_18_bool = 0;
	func_2290((bool)0);
	return 0;
}


func_358(var_2_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_17_object = var_23_object;
	func_1744(var_22_bool, var_23_object);
	var_56_bool = var_22_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 4;
	}
	var_57_bool = var_2_bool;
	if(var_57_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_17_object, var_20_bool);
	var_58_bool = var_20_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 4;
	}
	var_59_int = 0; var_60_object = Obj();
	var_17_object = var_60_object;
	func_2121(var_60_object);
	var_59_int = var_21_int;
	var_72_bool = var_21_int > (int)0;
	if(var_72_bool != 0) {
		var_74_bool = var_21_int > (int)1;
		if(var_74_bool != 0) {
			func_341(var_21_int);
		}
		var_76_object = Obj();
		var_17_object = var_76_object;
		func_2130(var_76_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2411(var_28_object, var_36_object)
{
	var_29_bool = 0; var_30_bool = 0;
	var_31_bool = GlobalVars[1];
	if(var_31_bool != 0) {
		IsOverrideActive(var_30_bool);
		var_32_bool = var_30_bool == 0; //@nz
		if(var_32_bool != 0) {
			WorkWithCorpse(var_28_object);
		}
		return 2;
	EMIT "GOTO 0x990";
	}
	var_34_int = 0; var_35_object = Obj();
	var_28_object = var_35_object;
	TaskCall(7);
	func_1284(var_36_object, var_34_int, var_35_object);
	TaskReturn();
	var_136_bool = (int)1000 == var_36_object;
	if(var_136_bool != 0) {
		var_137_bool = 0; var_138_object = Obj();
		var_28_object = var_138_object;
		func_1911(var_137_bool, var_138_object);
		var_166_bool = var_137_bool == 0; //@nz
		if(var_166_bool != 0) {
			return 2;
		}
		var_167_object = Obj();
		var_28_object = var_167_object;
		TaskCall(0);
		func_0(var_167_object);
		TaskReturn();
		var_28_object = Obj();
		func_1959();
	}
	return 2;
}


func_1907()
{
	CameraSwitchToNormal();
	return 0;
}


func_1911(var_137_bool, var_138_object)
{
	var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_bool = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_bool = 0;
	@@var_138_object:GetPosition(var_148_cvector);
	@@var_138_object:GetEyesHeight(var_147_float);
	var_155_float = GetByIndex(var_148_cvector, 1);
	var_155_float = var_155_float + var_147_float;
	SetByIndex(var_148_cvector, 1) = var_155_float;
	GetPosition(var_149_cvector);
	GetEyesHeight(var_147_float);
	var_156_float = GetByIndex(var_149_cvector, 1);
	var_156_float = var_156_float + var_147_float;
	SetByIndex(var_149_cvector, 1) = var_156_float;
	var_150_cvector = var_148_cvector - var_149_cvector;
	var_157_float = GetByIndex(var_150_cvector, 1);
	SetByIndex(var_150_cvector, 1) = (float)0;
	var_158_int = var_150_cvector | var_150_cvector;
	var_159_float = sqrt(var_158_int);
	var_150_cvector = var_150_cvector / var_159_float;
	var_151_cvector = -var_150_cvector;
	var_161_float = var_150_cvector * (int)70;
	var_152_cvector = var_161_float - CVector(0.0, 10.0, 0.0);
	var_153_cvector = var_149_cvector + var_152_cvector;
	IsOverrideActive(var_154_bool);
	var_163_bool = var_154_bool;
	if(var_163_bool != 0) {
		var_137_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_153_cvector, var_151_cvector);
	var_164_float = GetByIndex(var_152_cvector, 0);
	var_165_float = GetByIndex(var_152_cvector, 2);
	Rotate(var_164_float, var_165_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_137_bool = 1;
	return 16;
}


func_893(var_62_object)
{
	Face(var_62_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_72_object = Obj();
	var_62_object = var_72_object;
	func_958(var_64_cvector, var_65_bool, var_62_object, var_72_object);
	return 0;
}


func_398(var_0_bool, var_1_bool)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_bool = 0; var_76_object = Obj(); var_77_bool = 0; var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_bool = 0; var_83_object = Obj(); var_84_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_78_float, (float)0.5);
	Sleep(var_78_float);
	
Label_406:
	var_86_bool = var_0_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_87_bool = var_1_bool == 0; //@nz
		if(var_87_bool != 0) {

		Label_410:
			GetPosition(var_80_cvector);
			GetCameraFarDistance(var_81_float);
			var_81_float = var_81_float * (float)2.5;
			GetRandomPFPointInCircle(var_79_cvector, var_80_cvector, var_81_float, var_82_bool);
			var_89_bool = var_82_bool;
			if(var_89_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_410;
		}
				var_1_bool = false;
	}
			return 14;
	}
	goto Label_427;
	
Label_427:
	FindShiftedPathTo(var_83_object, var_79_cvector);
	var_90_bool = var_83_object != 0; //@nn
	if(var_90_bool != 0) {
		RotatePath(var_83_object, var_84_bool);
		var_91_bool = var_84_bool;
		if(var_91_bool != 0) {
			var_92_bool = 0;
			func_476(var_92_bool);
			FollowPath(var_83_object, var_92_bool, var_84_bool);
			var_83_object = 0;
			var_93_bool = var_84_bool;
			if(var_93_bool != 0) {
				TaskCall(3);
				func_593();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_83_object = 0;
	goto Label_406;
	
}


func_2449(var_61_bool)
{
	var_62_float = 0;
	func_2383(var_62_float);
	var_61_bool = var_62_float > (float)0.20000000298023224;
	return 0;
}


func_2455(var_20_bool, var_21_object, var_22_object)
{
	var_23_string = ""; var_24_bool = 0; var_25_string = ""; var_26_bool = 0;
	var_27_bool = 0; var_28_object = Obj(); var_29_string = "";
	var_22_object = var_28_object;
	func_1691(var_27_bool, var_28_object, "class");
	var_36_bool = var_27_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	@@var_22_object:GetProperty("class", var_25_string);
	var_39_bool = var_25_string == "rat";
	if(var_39_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	CanSee(var_26_bool, var_21_object);
	var_40_bool = 0;
	var_40_bool = 1;
	var_41_bool = var_26_bool;
	if(var_41_bool != 1) {
		var_42_float = 0; var_43_object = Obj();
		var_21_object = var_43_object;
		func_1683(var_42_float, var_43_object);
		var_51_bool = var_42_float <= (float)250000.0;
		if(var_51_bool != 1) {
			var_40_bool = 0;
		}
	}
	if(var_40_bool != 0) {
		ReportReputationChange(var_21_object, var_22_object, (float)-0.30000001192092896);
		var_20_bool = 1;
		return 4;
	}
	CanSee(var_26_bool, var_22_object);
	var_53_bool = 0;
	var_53_bool = 1;
	var_54_bool = var_26_bool;
	if(var_54_bool != 1) {
		var_55_float = 0; var_56_object = Obj();
		var_22_object = var_56_object;
		func_1683(var_55_float, var_56_object);
		var_58_bool = var_55_float <= (float)250000.0;
		if(var_58_bool != 1) {
			var_53_bool = 0;
		}
	}
	if(var_53_bool != 0) {
		var_20_bool = 1;
		return 4;
	}
	var_20_bool = 0;
	return 4;
}


func_928(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_1999(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_1999(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_1445(var_2_bool, var_27_string)
{
	var_28_bool = 0;
	func_2401(var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
		return 0;
	}
	var_30_bool = var_27_string == var_2_bool;
	if(var_30_bool != 0) {
		return 0;
	}
	var_31_string = "";
	var_27_string = var_31_string;
	func_1963(var_31_string);
	var_2_bool = var_27_string;
	return 0;
}


func_1959()
{
	CameraSwitchToNormal();
	return 0;
}


func_1963(var_31_string)
{
	var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_float = 0;
	var_37_int = "playing " + var_31_string;
	Trace(var_37_int);
	lshGetAnimTimes(var_31_string, var_34_float, var_35_float);
	lshPlayAnimation(var_34_float, var_35_float);
	var_39_int = "start: " + var_34_float;
	Trace(var_39_int);
	var_41_int = "end: " + var_35_float;
	Trace(var_41_int);
	return 4;
}


func_1981(var_85_object)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0);
	@@var_85_object:GetEyesHeight(var_88_float);
	var_89_cvector = CVector(0.0, 0.0, 0.0);
	var_90_float = GetByIndex(var_89_cvector, 1);
	var_88_float = var_90_float;
	SetByIndex(var_89_cvector, 1) = var_90_float;
	LookAsync(var_85_object, "head", var_89_cvector);
	return 4;
}


func_958(var_0_bool, var_1_bool, var_2_bool, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_float = 0;
	var_0_bool = var_72_object;
	var_83_cvector = CVector(0,0,0); var_84_float = 0;
	func_928(var_82_float, var_83_cvector, (float)1.7453293800354004);
	var_83_cvector = var_78_cvector;
	var_79_float = var_78_cvector | var_78_cvector;
	var_114_bool = var_79_float < (float)10000.0;
	if(var_114_bool != 0) {
		var_116_float = sqrt(var_79_float);
		var_117_int = "Can't retreat, distance: " + var_116_float;
		Trace(var_117_int);
		Sleep((float)0.5);
		return 10;
	}
	var_119_float = GetByIndex(var_78_cvector, 0);
	var_120_float = GetByIndex(var_78_cvector, 2);
	Rotate(var_119_float, var_120_float);
	var_121_cvector = CVector(0,0,0);
	func_1671(var_121_cvector);
	var_1_bool = var_121_cvector + var_78_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_991:
	MovePoint(var_1_bool, (int)1, var_80_bool);
	var_127_bool = var_80_bool;
	if(var_127_bool != 0) {
		var_128_bool = var_0_bool == 0; //@ne
		if(var_128_bool != 0) {
			goto Label_1021;
		EMIT "GOTO 0x3fb";

		Label_1021:
			return 10;
		}
		var_129_cvector = CVector(0,0,0); var_130_float = 0;
		func_928(var_82_float, var_129_cvector, (float)2.6179938316345215);
		var_129_cvector = var_81_cvector;
		var_82_float = var_81_cvector | var_81_cvector;
		var_132_bool = var_82_float >= (float)10000.0;
		if(var_132_bool != 0) {
			var_133_cvector = CVector(0,0,0);
			func_1671(var_133_cvector);
			var_1_bool = var_133_cvector + var_81_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1021;
		}
	}
	var_136_bool = var_2_bool == 0; //@nz
	if(var_136_bool == 1) goto Label_991;
	
}


func_1992()
{
	var_19_bool = 0;
	func_2401(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_462(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1999(var_46_cvector, var_47_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_47_cvector | var_47_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_46_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_46_cvector = var_47_cvector / var_49_float;
	return 2;
}


func_2512()
{
	var_70_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	var_73_bool = 0;
	var_73_bool = 1;
	func_2246();
	return 0;
}


func_469(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_2009(var_79_float, var_80_cvector, var_81_cvector)
{
	var_82_int = var_80_cvector | var_81_cvector;
	var_83_int = var_80_cvector | var_80_cvector;
	var_84_int = var_81_cvector | var_81_cvector;
	var_85_float = var_83_int * var_84_int;
	var_86_float = sqrt(var_85_float);
	var_79_float = var_82_int / var_86_float;
	return 0;
}


func_476(var_92_bool)
{
	var_92_bool = 0;
	return 0;
}


func_2017(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = var_72_float * var_73_float;
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = var_75_float * var_76_float;
	var_69_float = var_74_float + var_77_float;
	return 0;
}


func_2026(var_78_float, var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_82_float = var_80_float * var_81_float;
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_85_float = var_83_float * var_84_float;
	var_86_int = var_82_float + var_85_float;
	var_78_float = sqrt(var_86_int);
	return 0;
}


func_2036(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_67_cvector = var_70_cvector;
	var_68_cvector = var_71_cvector;
	func_2017(var_69_float, var_70_cvector, var_71_cvector);
	var_78_float = 0; var_79_cvector = CVector(0,0,0);
	var_67_cvector = var_79_cvector;
	func_2026(var_78_float, var_79_cvector);
	var_87_float = 0; var_88_cvector = CVector(0,0,0);
	var_68_cvector = var_88_cvector;
	func_2026(var_87_float, var_88_cvector);
	var_89_float = var_78_float * var_87_float;
	var_66_float = var_69_float / var_89_float;
	return 0;
}


