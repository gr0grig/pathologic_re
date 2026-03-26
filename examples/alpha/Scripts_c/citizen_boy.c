// @IMPORTS: DoTrade/0,WaitForAnimEnd/0,PlayAnimation/2,StopAnimation/0,StopTrade/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,FollowPath/5,CreateDialog/1,IsOverrideActive/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetGameTime/1,GetProperty/2,SignalDeath/1,GetVariable/2,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,WorkWithCorpse/1,CanSee/2,ReportReputationChange/3,SetRTEnvelope/2
// @STRINGS: W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |A:SetReturnValue|W:player|W:GenerateMoney: iMin > iMax|W:Money|W:hook|W:watch|W:alpha_pills|W:meradorm|W:lockpick|W:rifle_ammo|W:revolver_ammo|W:ui/NPC_None.png|W:class|W:rat|W:dog
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
// @TASK_5: vars=object,int,int,bool,int params=1
// @TASK_6: vars=bool,object params=6
// @EVENT_6: op=0x576 vars=
// @EVENT_7: op=0x5e3 vars=int
// @EVENT_10: op=0x5f5 vars=object
// @EVENT_41: op=0x600 vars=object
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6c5 vars=int,int
// @STANDALONE_EVENT_16: op=0x9a9 vars=object,string
// @STANDALONE_EVENT_41: op=0x9b6 vars=object
// @STANDALONE_EVENT_22: op=0x9bc vars=object,int,float,float
// @PE: 0x0,0xf,0x16,0x8e,0xa4,0xa6,0xa8,0x12e,0x134,0x13a,0x15d,0x1c7,0x34a,0x37d,0x385,0x388,0x570,0x5e3,0x5f5,0x600,0x609,0x653,0x6b5,0x6c5,0x7cd,0x8fc,0x930,0x962,0x969,0x974,0x97d,0x987,0x9a1,0x9b6,0x9bc,0x9dc,0x9e5,0x9ed,0x9f7,0x9ff,0xa06,0xa0c,0xa0f,0xa11,0xa14,0xa16,0xa19,0xa20,0xb44

task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	StopAnimation();
	StopTrade();
	var_0_bool = true;
	return 0;
}


task_1_event_0(var_0_bool, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2582(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_24_object = Obj();
		var_17_bool = var_24_object;
		func_2585(var_24_object);
	}
	return 2;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_2591();
	return 0;
}


task_1_event_22(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	return 0;
}


task_1_event_16(var_0_bool, var_1_object, var_2_string, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2582(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_333(var_19_int);
		}
		var_27_object = Obj();
		var_17_bool = var_27_object;
		func_2585(var_27_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2541(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_333(var_19_int);
		}
		var_61_object = Obj();
		var_17_bool = var_61_object;
		func_2551(var_61_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2821(var_21_bool, var_22_object, var_23_object);
	if(var_21_bool != 0) {
		var_62_int = 0; var_63_object = Obj();
		var_17_string = var_63_object;
		func_2559(var_62_int, var_63_object);
		var_62_int = var_20_int;
		var_95_bool = var_20_int > (int)0;
		if(var_95_bool != 0) {
			var_97_bool = var_20_int > (int)1;
			if(var_97_bool != 0) {
				func_333(var_20_int);
			}
			var_99_object = Obj();
			var_17_string = var_99_object;
			func_2566(var_99_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2572(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_333(var_19_int);
		}
		var_17_bool = Obj();
		func_2575();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2577(var_23_object);
	var_21_int = var_20_int;
	var_25_bool = var_20_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_20_int > (int)1;
		if(var_27_bool != 0) {
			func_333(var_20_int);
		}
		var_29_string = ""; var_30_object = Obj();
		var_18_bool = var_29_string;
		var_17_string = var_30_object;
		func_2580();
	}
	return 2;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_object = Obj();
	var_17_bool = var_18_object;
	func_358(var_17_bool, var_18_object);
	return 0;
}


task_2_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_object = Obj();
	var_17_bool = var_18_object;
	func_358(var_17_bool, var_18_object);
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_19_bool = var_17_bool != (int)110;
	if(var_19_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_333(var_16_bool);
	func_2591();
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_333(var_17_bool);
	var_17_bool = Obj();
	func_2486();
	return 0;
}


task_2_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	RequestClearPath(var_17_bool);
	return 0;
}


task_2_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	Stop();
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2582(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_662();
		}
		var_26_object = Obj();
		var_17_bool = var_26_object;
		func_2585(var_26_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2541(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_662();
		}
		var_60_object = Obj();
		var_17_bool = var_60_object;
		func_2551(var_60_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2821(var_21_bool, var_22_object, var_23_object);
	if(var_21_bool != 0) {
		var_62_int = 0; var_63_object = Obj();
		var_17_string = var_63_object;
		func_2559(var_62_int, var_63_object);
		var_62_int = var_20_int;
		var_95_bool = var_20_int > (int)0;
		if(var_95_bool != 0) {
			var_97_bool = var_20_int > (int)1;
			if(var_97_bool != 0) {
				func_662();
			}
			var_98_object = Obj();
			var_17_string = var_98_object;
			func_2566(var_98_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2572(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_662();
		}
		var_17_bool = Obj();
		func_2575();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2577(var_23_object);
	var_21_int = var_20_int;
	var_25_bool = var_20_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_20_int > (int)1;
		if(var_27_bool != 0) {
			func_662();
		}
		var_28_string = ""; var_29_object = Obj();
		var_18_bool = var_28_string;
		var_17_string = var_29_object;
		func_2580();
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_662();
	func_2591();
	return 0;
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2582(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_831();
		}
		var_28_object = Obj();
		var_17_bool = var_28_object;
		func_2585(var_28_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2541(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_831();
		}
		var_62_object = Obj();
		var_17_bool = var_62_object;
		func_2551(var_62_object);
	}
	return 2;
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2821(var_21_bool, var_22_object, var_23_object);
	if(var_21_bool != 0) {
		var_62_int = 0; var_63_object = Obj();
		var_17_string = var_63_object;
		func_2559(var_62_int, var_63_object);
		var_62_int = var_20_int;
		var_95_bool = var_20_int > (int)0;
		if(var_95_bool != 0) {
			var_97_bool = var_20_int > (int)1;
			if(var_97_bool != 0) {
				func_831();
			}
			var_100_object = Obj();
			var_17_string = var_100_object;
			func_2566(var_100_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2572(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_831();
		}
		var_17_bool = Obj();
		func_2575();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2577(var_23_object);
	var_21_int = var_20_int;
	var_25_bool = var_20_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_20_int > (int)1;
		if(var_27_bool != 0) {
			func_831();
		}
		var_30_string = ""; var_31_object = Obj();
		var_18_bool = var_30_string;
		var_17_string = var_31_object;
		func_2580();
	}
	return 2;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_831();
	var_17_bool = Obj();
	func_2486();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_23_bool = var_17_bool != (int)111;
	if(var_23_bool != 0) {
		return 4;
	}
	var_24_bool = 0; var_25_object = Obj();
	var_25_object = var_0_bool;
	func_2137(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		func_831();
		return 4;
	}
	GetDirection(var_20_cvector);
	var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	var_62_object = var_0_bool;
	func_2005(var_61_cvector, var_62_object);
	var_61_cvector = var_21_cvector;
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	var_20_cvector = var_68_cvector;
	var_21_cvector = var_69_cvector;
	func_2439(var_67_float, var_68_cvector, var_69_cvector);
	var_92_bool = var_67_float < (float)0.4999999701976776;
	if(var_92_bool != 0) {
		var_93_object = Obj();
		var_93_object = var_0_bool;
		func_2228(var_93_object);
	}
	return 4;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831();
	func_2591();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1529(var_16_bool);
	func_2591();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_19_bool = var_17_bool != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_bool;
	func_1545(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_6_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	RequestClearPath(var_17_bool);
	return 0;
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_1529(var_17_bool);
	var_17_bool = Obj();
	func_2486();
	return 0;
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int)
{
	if((int)1 != 0) {
		func_2385();
		var_22_bool = var_18_int == (int)14637;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_bool;
			var_24_object = var_0_bool;
			func_2592(var_24_object);
		}
		var_27_bool = var_17_int == (int)14636;
		if(var_27_bool != 0) {
			var_28_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)13402);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)13403, (int)-1, (int)14637);
			@@@var_0_bool:AddReply((int)13404, (int)-1, (int)14638);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=553";
		EMIT "Call 0x6b5";
		EMIT "Pop(1)";
		EMIT "Push((int) 14671)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
		EMIT "Pop(0)";
		EMIT "Push((int) 14672)";
		EMIT "Push((int) 15911)";
		EMIT "Push((int) 15910)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
		EMIT "Pop(3)";
		EMIT "Push((int) 14681)";
		EMIT "Push((int) 15921)";
		EMIT "Push((int) 15920)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=553";
		EMIT "Call 0x6b5";
		EMIT "Pop(1)";
		EMIT "Push((int) 14684)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
		EMIT "Pop(0)";
		EMIT "Push((int) 14685)";
		EMIT "Push((int) 15926)";
		EMIT "Push((int) 15925)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
		EMIT "Pop(3)";
		EMIT "Push((int) 14696)";
		EMIT "Push((int) 15937)";
		EMIT "Push((int) 15936)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_51_bool = var_17_int == (int)15937;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14697);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14698, (int)-1, (int)15938);
			return 0;
		}
		var_58_bool = var_17_int == (int)15926;
		if(var_58_bool != 0) {
			var_59_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14686);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14687, (int)15928, (int)15927);
			@@@var_0_bool:AddReply((int)14695, (int)-1, (int)15935);
			return 0;
		}
		var_68_bool = var_17_int == (int)15928;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14688);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14689, (int)15930, (int)15929);
			@@@var_0_bool:AddReply((int)14694, (int)-1, (int)15934);
			return 0;
		}
		var_78_bool = var_17_int == (int)15930;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14690);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14691, (int)-1, (int)15931);
			@@@var_0_bool:AddReply((int)14692, (int)-1, (int)15932);
			@@@var_0_bool:AddReply((int)14693, (int)-1, (int)15933);
			return 0;
		}
		var_91_bool = var_17_int == (int)15921;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14682);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14683, (int)15913, (int)15922);
			return 0;
		}
		var_98_bool = var_17_int == (int)15911;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14673);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14674, (int)15913, (int)15912);
			@@@var_0_bool:AddReply((int)14678, (int)15917, (int)15916);
			return 0;
		}
		var_108_bool = var_17_int == (int)15917;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14679);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14680, (int)15913, (int)15918);
			return 0;
		}
		var_115_bool = var_17_int == (int)15913;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_1717(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14675);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14676, (int)-1, (int)15914);
			@@@var_0_bool:AddReply((int)14677, (int)-1, (int)15915);
			return 0;
		}
		var_3_bool = true;
		var_124_bool = 0;
		func_2771(var_124_bool);
		if(var_124_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6c6";
	
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0;
	var_22_bool = var_18_string == "health";
	if(var_22_bool != 0) {
		GetProperty("health", var_20_float);
		var_25_bool = var_20_float <= (int)0;
		if(var_25_bool != 0) {
			SignalDeath(var_17_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_2465(var_18_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_2161(var_22_int, var_23_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	SensePlayerOnly((bool)1);
	func_2773();
	func_185();
	
Label_179:
	var_2_bool = false;
	func_398(var_15_string, var_16_bool);
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
	var_172_bool = var_0_bool;
	if(var_172_bool != 0) {
		goto Label_4;
	}
	return 0;
}
EMIT "Return(); Pop(0)";


func_2566(var_100_object)
{
	var_101_object = Obj();
	var_100_object = var_101_object;
	func_2551(var_101_object);
	return 0;
}


func_1545(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_2137(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
	return 0;
}


func_2572(var_20_int)
{
	var_20_int = 0;
	return 0;
}


func_2575()
{
	return 0;
}


func_1552(var_201_string)
{
	var_201_string = "walk";
	return 0;
}


func_2577(var_21_int)
{
	var_21_int = 0;
	return 0;
}


func_1554(var_202_string)
{
	var_202_string = "run";
	return 0;
}


func_2580()
{
	return 0;
}


func_1556(var_0_bool, var_35_int, var_36_object)
{
	var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0;
	var_0_bool = var_36_object;
	var_46_bool = 0; var_47_object = Obj();
	var_36_object = var_47_object;
	func_2244(var_46_bool, var_47_object);
	var_86_bool = var_46_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	CreateDialog(var_42_object);
	var_87_int = 0;
	func_2767(var_87_int);
	@@var_42_object:SetNPCName(var_87_int);
	var_88_string = "";
	func_2769(var_88_string);
	@@var_42_object:SetPhoto(var_88_string);
	var_89_int = 0;
	func_2597(var_89_int);
	@@var_42_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_43_bool);
	var_97_bool = var_43_bool;
	if(var_97_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	DoDialog(var_42_object);
	var_98_object = Obj(); var_99_object = Obj();
	var_36_object = var_98_object;
	var_42_object = var_99_object;
	TaskCall(8);
	func_1619(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	@@var_42_object:IsDialogEnd(var_45_bool);
	
Label_1601:
	var_135_bool = var_45_bool == 0; //@nz
	if(var_135_bool != 0) {
		sync();
		@@var_42_object:IsDialogEnd(var_45_bool);
		goto Label_1601;
	}
	var_36_object = Obj();
	func_2300();
	StopDialog(var_42_object);
	@@var_42_object:GetReturnValue((int)-1);
	var_44_int = var_35_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2582(var_20_int)
{
	var_20_int = 2;
	return 0;
}


func_22(var_19_object)
{
	EventDisable(0);
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_55(var_20_object);
	var_19_object = Obj();
	func_2884();
	EventEnable(0);
	
Label_33:
	Hold();
	goto Label_33;
}
EMIT "Return(); Pop(0)";


func_2585(var_28_object)
{
	var_29_object = Obj();
	var_28_object = var_29_object;
	func_2781(var_28_object, var_29_object);
	return 0;
}


func_2591()
{
	return 0;
}


func_2592(var_24_object)
{
	@@var_24_object:SetReturnValue((int)1000);
	return 0;
}


func_2597(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("player", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0xa34";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
	return 2;
}


func_2096(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	@@var_38_object:IsDead(var_40_bool);
	var_40_bool = var_37_bool;
	return 2;
}


func_2101(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	var_32_bool = var_27_object == 0; //@ne
	if(var_32_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	var_33_bool = 0;
	var_33_bool = 0;
	var_36_bool = IsFuncExist(var_27_object, "IsDead", (int)1);
	if(var_36_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_27_object = var_38_object;
		func_2096(var_37_bool, var_38_object);
		if(var_37_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	GetScene(var_30_object);
	var_41_bool = var_30_object == 0; //@ne
	if(var_41_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	@@var_27_object:GetScene(var_31_object);
	var_42_bool = var_30_object != var_31_object;
	if(var_42_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	var_26_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2614(var_80_int, var_81_int)
{
	var_91_int = 0; var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0;
	var_99_bool = var_80_int > var_81_int;
	if(var_99_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_101_bool = var_80_int != var_81_int;
	if(var_101_bool != 0) {
		var_102_int = var_81_int - var_80_int;
		irand(var_96_int, var_102_int);
	} else {
		var_108_bool = var_80_int == (int)0;
		if(var_108_bool == 0) goto Label_2632;
		return 8;
	}
Label_2632:
	(int)0 = (int)0 + var_80_int;
	var_104_bool = var_95_int == (int)0;
	if(var_104_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_97_int, "Money");
	AddItem(var_98_bool, var_97_int, (int)0, var_95_int);
	return 8;
	
}


func_55(var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_object = Obj(); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0);
	var_41_bool = var_20_object == 0; //@ne
	if(var_41_bool != 0) {
		var_42_string = "";
		func_142("fdie");
	} else {
		@@var_20_object:GetPosition(var_31_cvector);
		GetPosition(var_32_cvector);
		GetDirection(var_33_cvector);
		var_34_cvector = var_32_cvector - var_31_cvector;
		var_45_float = GetByIndex(var_34_cvector, 0);
		var_46_float = GetByIndex(var_33_cvector, 0);
		var_47_float = var_45_float * var_46_float;
		var_48_float = GetByIndex(var_34_cvector, 2);
		var_49_float = GetByIndex(var_33_cvector, 2);
		var_50_float = var_48_float * var_49_float;
		var_51_int = var_47_float + var_50_float;
		var_53_bool = var_51_int >= (int)0;
		if(var_53_bool != 0) {
			var_35_string = "fdie";
		} else {
				var_35_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_20_object = var_36_object;
		var_56_bool = IsFuncExist(var_20_object, "GetScriptProperty", (int)2);
		if(var_56_bool != 0) {
			@@var_20_object:HasScriptProperty(var_37_bool, "Owner");
			var_58_bool = var_37_bool;
			if(var_58_bool != 0) {
				@@var_20_object:GetScriptProperty(var_36_object, "Owner");
				var_60_bool = var_36_object == 0; //@ne
				if(var_60_bool != 0) {
					var_20_object = var_36_object;
				}
			}
		}
		var_63_bool = IsFuncExist(var_36_object, "@GetEyesHeight", (int)1);
		if(var_63_bool != 0) {
			@@var_36_object:GetEyesHeight(var_39_float);
			var_40_cvector = CVector(0.0, 0.0, 0.0);
			var_64_float = GetByIndex(var_40_cvector, 1);
			var_39_float = var_64_float;
			SetByIndex(var_40_cvector, 1) = var_64_float;
			LookAsync(var_20_object, "head", var_40_cvector);
			var_38_bool = 1;
		} else {
			var_38_bool = 0;

		}
		PlayAnimation("all", var_35_string);
		WaitForAnimEnd();
		var_67_bool = var_38_bool;
		if(var_67_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_35_string);
		RemoveEnvelope();
		var_36_object = 0;
	}
	return 20;
	
}


func_593()
{
	var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_int = 0; var_90_bool = 0; var_91_float = 0; var_92_bool = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_bool = 0; var_98_float = 0; var_99_bool = 0;
	WaitForAnimEnd();
	var_100_bool = 0;
	func_2239(var_100_bool);
	var_101_bool = var_100_bool == 0; //@nz
	if(var_101_bool != 0) {
		return 14;
	}
	func_2507((int)0);
	var_102_int = var_93_int;
	var_94_int = 0;
	
Label_607:
	var_115_bool = 0;
	var_115_bool = 0;
	var_117_bool = var_94_int < (int)5;
	if(var_117_bool != 0) {
		var_118_bool = 0;
		func_2239(var_118_bool);
		if(var_118_bool != 0) {
			var_115_bool = 1;
		}
	}
	if(var_115_bool != 0) {
		irand(var_95_int, (int)3);
		var_121_bool = var_95_int == (int)0;
		if(var_121_bool != 0) {
			var_122_int = var_93_int;
			if(var_122_int == 0) goto Label_640;
			irand(var_96_int, var_93_int);
			var_124_string = ""; var_125_int = 0;
			var_96_int = var_125_int;
			func_2500(var_124_string, var_125_int);
			PlayAnimation("all", var_124_string);
			WaitForAnimEnd(var_97_bool);
			var_126_bool = var_97_bool == 0; //@nz
			if(var_126_bool != 0) {
			} else {
		} else {
				var_129_bool = var_95_int == (int)1;
				if(var_129_bool != 0) {
					rand(var_98_float, (int)4);
					var_132_int = var_98_float + (int)1;
					Sleep(var_132_int, var_99_bool);
					var_133_bool = var_99_bool == 0; //@nz
					if(var_133_bool != 0) {
						goto Label_661;
					}
					goto Label_658;
				}
				var_134_int = var_94_int;
				if(var_134_int == 0) goto Label_658;
				goto Label_661;
		}
		Label_658:
			var_94_int = var_94_int + (int)1;
			goto Label_607;

		}
	}
Label_661:
	return 14;
	
}


func_1619(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_98_object, var_99_object)
{
	var_0_bool = var_99_object;
	var_1_bool = var_98_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_105_string = "";
		func_1717(var_99_object, "Neutral");
		@@@var_0_bool:SetMessage((int)13402);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)13403, (int)-1, (int)14637);
		@@@var_0_bool:AddReply((int)13404, (int)-1, (int)14638);
		goto Label_1687;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=553";
	EMIT "Call 0x6b5";
	EMIT "Pop(1)";
	EMIT "Push((int) 14671)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
	EMIT "Pop(0)";
	EMIT "Push((int) 14672)";
	EMIT "Push((int) 15911)";
	EMIT "Push((int) 15910)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "Push((int) 14681)";
	EMIT "Push((int) 15921)";
	EMIT "Push((int) 15920)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "GOTO 0x697";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=553";
	EMIT "Call 0x6b5";
	EMIT "Pop(1)";
	EMIT "Push((int) 14684)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
	EMIT "Pop(0)";
	EMIT "Push((int) 14685)";
	EMIT "Push((int) 15926)";
	EMIT "Push((int) 15925)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "Push((int) 14696)";
	EMIT "Push((int) 15937)";
	EMIT "Push((int) 15936)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "GOTO 0x697";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x657";
	}
Label_1687:
	var_127_bool = 0;
	func_2771(var_127_bool);
	if(var_127_bool != 0) {

	Label_1691:
		lshWaitForAnimEnd();
		var_128_bool = var_3_bool;
		if(var_128_bool != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_bool;
			func_2356(var_129_string);
			goto Label_1691;
	}
		PlayAnimation("all", "idle");

	Label_1706:
		WaitForAnimEnd();
		var_132_bool = var_3_bool;
		if(var_132_bool != 0) {
			goto Label_1716;
		}
		PlayAnimation("all", "idle");
		goto Label_1706;
	}
	goto Label_1716;
	
Label_1716:
	return 0;
	
}


func_2644()
{
	var_75_bool = 0; var_76_int = 0; var_77_bool = 0; var_78_int = 0;
	ClearSubContainer((int)0);
	var_80_int = 0; var_81_int = 0;
	var_83_int = 0;
	func_2456(var_83_int);
	var_90_float = var_83_int * (int)10;
	var_81_int = (int)10 + var_90_float;
	func_2614((int)0, var_81_int);
	irand(var_78_int, (int)4);
	var_111_bool = var_78_int == (int)0;
	if(var_111_bool != 0) {
		var_112_int = 0; var_113_string = "";
		func_2762(var_112_int, "hook");
		AddItem(var_77_bool, var_112_int, (int)0, (int)1);
	}
	irand(var_78_int, (int)10);
	var_120_bool = var_78_int == (int)0;
	if(var_120_bool != 0) {
		var_121_int = 0; var_122_string = "";
		func_2762(var_121_int, "watch");
		AddItem(var_77_bool, var_121_int, (int)0, (int)1);
	}
	return 4;
}


func_1112(var_0_bool, var_315_float, var_316_int)
{
	var_317_object = Obj(); var_318_float = 0; var_319_float = 0; var_320_object = Obj(); var_321_float = 0; var_322_float = 0;
	var_324_float = var_315_float * (float)0.8999999761581421;
	GetVictim(var_324_float, var_320_object);
	ReportAttack(var_0_bool);
	var_325_bool = var_320_object == var_0_bool;
	if(var_325_bool != 0) {
		var_326_float = 0; var_327_object = Obj(); var_328_int = 0;
		var_320_object = var_327_object;
		var_316_int = var_328_int;
		func_901(var_328_int);
		var_326_float = var_321_float;
		var_329_float = 0; var_330_object = Obj(); var_331_float = 0; var_332_int = 0;
		var_320_object = var_330_object;
		var_321_float = var_331_float;
		var_333_int = 0; var_334_object = Obj(); var_335_int = 0;
		var_320_object = var_334_object;
		var_316_int = var_335_int;
		func_904(var_335_int);
		var_333_int = var_332_int;
		func_2032(var_329_float, var_330_object, var_331_float, var_332_int);
		var_329_float = var_322_float;
		var_382_int = 0;
		func_1390(var_382_int);
		ReportHit(var_0_bool, var_382_int, var_322_float, var_321_float);
		var_383_object = Obj(); var_384_float = 0;
		var_320_object = var_383_object;
		var_322_float = var_384_float;
		func_1392();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2137(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_23_object = var_27_object;
	func_2101(var_26_bool, var_27_object);
	var_43_bool = var_26_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_23_object = var_45_object;
	func_2020(var_44_bool, var_45_object, "noaccess");
	var_53_bool = var_44_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	@@var_23_object:GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == (int)0;
	return 2;
}


func_2161(var_21_object, var_22_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_object = Obj(); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = "";
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_22_int != (int)4;
	if(var_46_bool != 0) {
		var_48_bool = var_22_int != (int)5;
		if(var_48_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		GetScene(var_34_object);
		GetPosition(var_36_cvector);
		GetEyesHeight(var_37_float);
		var_49_float = GetByIndex(var_36_cvector, 1);
		var_51_float = var_37_float / (int)2;
		var_49_float = var_49_float + var_51_float;
		SetByIndex(var_36_cvector, 1) = var_49_float;
		AddActorByType(var_35_object, "scripted", var_34_object, var_36_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_35_object = 0;
		var_34_object = 0;
	}
	var_55_bool = var_21_object == 0; //@ne
	if(var_55_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_38_int);
	var_57_bool = var_38_int < (int)0;
	if(var_57_bool != 0) {
		return 20;
	}
	@@var_21_object:GetPosition(var_39_cvector);
	GetPosition(var_40_cvector);
	GetDirection(var_41_cvector);
	var_42_cvector = var_40_cvector - var_39_cvector;
	var_58_float = GetByIndex(var_42_cvector, 0);
	var_59_float = GetByIndex(var_41_cvector, 0);
	var_60_float = var_58_float * var_59_float;
	var_61_float = GetByIndex(var_42_cvector, 2);
	var_62_float = GetByIndex(var_41_cvector, 2);
	var_63_float = var_61_float * var_62_float;
	var_64_int = var_60_float + var_63_float;
	var_66_bool = var_64_int >= (int)0;
	if(var_66_bool != 0) {
		var_43_string = "fhit";
	} else {
		var_43_string = "bhit";
	}
	var_69_int = var_43_string + "1";
	var_71_int = var_43_string + "2";
	FadeSecondaryAnimation("hit_react", var_69_int, var_71_int, (int)-10);
	return 20;
	
}


func_1151(var_0_bool, var_1_bool, var_286_bool, var_287_float)
{
	var_288_int = 0; var_289_bool = 0; var_290_int = 0; var_291_bool = 0;
	irand(var_290_int, var_1_bool);
	var_290_int = var_290_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_296_int = "attack_begin" + var_290_int;
	PlayAnimation("all", var_296_int);
	WaitForAnimEnd();
	func_1358(var_290_int, var_291_bool);
	var_312_bool = 0; var_313_object = Obj();
	var_313_object = var_0_bool;
	func_2137(var_312_bool, var_313_object);
	var_314_bool = var_312_bool == 0; //@nz
	if(var_314_bool != 0) {
		StopAsync();
		var_286_bool = 0;
		return 4;
	}
	var_315_float = 0; var_316_int = 0;
	var_287_float = var_315_float;
	var_290_int = var_316_int;
	func_1112(var_291_bool, var_315_float, var_316_int);
	var_387_int = "attack_middle" + var_290_int;
	HasAnimation(var_291_bool, "all", var_387_int);
	var_388_bool = var_291_bool;
	if(var_388_bool != 0) {
		var_391_int = "attack_middle" + var_290_int;
		PlayAnimation("all", var_391_int);
		WaitForAnimEnd();
		var_392_bool = 0; var_393_object = Obj();
		var_393_object = var_0_bool;
		func_2137(var_392_bool, var_393_object);
		var_394_bool = var_392_bool == 0; //@nz
		if(var_394_bool != 0) {
			StopAsync();
			var_286_bool = 0;
			return 4;
		}
		var_395_float = 0; var_396_int = 0;
		var_287_float = var_395_float;
		var_290_int = var_396_int;
		func_1112(var_291_bool, var_395_float, var_396_int);
	}
	SetAttackState((bool)0);
	var_400_int = "attack_end" + var_290_int;
	PlayAnimation("all", var_400_int);
	var_401_bool = 0; var_402_float = 0;
	func_1231(var_401_bool, (float)0.75);
	StopAsync();
	var_286_bool = 1;
	return 4;
}


func_2688(var_19_bool)
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0;
	ClearSubContainer((int)0);
	var_25_bool = var_19_bool;
	if(var_25_bool != 0) {
		irand(var_22_int, (int)3);
		var_28_bool = var_22_int != (int)0;
		if(var_28_bool != 0) {
			var_29_int = 0; var_30_string = "";
			func_2762(var_29_int, "alpha_pills");
			AddItem(var_23_bool, var_29_int, (int)0, var_22_int);
		}
		irand(var_22_int, (int)3);
		var_36_bool = var_22_int != (int)0;
		if(var_36_bool != 0) {
			var_37_int = 0; var_38_string = "";
			func_2762(var_37_int, "meradorm");
			AddItem(var_23_bool, var_37_int, (int)0, var_22_int);
		}
	} else {
		irand(var_22_int, (int)3);
		var_42_bool = var_22_int == (int)0;
		if(var_42_bool != 0) {
			var_43_int = 0; var_44_string = "";
			func_2762(var_43_int, "lockpick");
			AddItem(var_23_bool, var_43_int, (int)0, (int)1);
		}
		irand(var_22_int, (int)4);
		var_49_bool = var_22_int != (int)0;
		if(var_49_bool != 0) {
			var_50_int = 0; var_51_string = "";
			func_2762(var_50_int, "rifle_ammo");
			AddItem(var_23_bool, var_50_int, (int)0, var_22_int);
		}
		irand(var_22_int, (int)4);
		var_55_bool = var_22_int != (int)0;
		if(var_55_bool == 0) goto Label_2761;
		var_56_int = 0; var_57_string = "";
		func_2762(var_56_int, "revolver_ammo");
		AddItem(var_23_bool, var_56_int, (int)0, var_22_int);
	}
Label_2761:
	return 4;
	
}


func_142(var_42_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_42_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_42_string);
	RemoveEnvelope();
	return 0;
}


func_662()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_667(var_0_bool, var_69_object)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0;
	var_0_bool = var_69_object;
	func_718(var_76_bool);
	GetDirection(var_74_cvector);
	var_84_cvector = CVector(0,0,0); var_85_object = Obj();
	var_85_object = var_0_bool;
	func_2005(var_84_cvector, var_85_object);
	var_84_cvector = var_75_cvector;
	var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	var_74_cvector = var_91_cvector;
	var_75_cvector = var_92_cvector;
	func_2439(var_90_float, var_91_cvector, var_92_cvector);
	var_115_bool = var_90_float < (int)0;
	if(var_115_bool != 0) {
		var_116_object = Obj();
		var_116_object = var_0_bool;
		func_2228(var_116_object);
		var_76_bool = 1;
	} else {
		Sleep((float)1.5, var_76_bool);
	}
	var_125_bool = var_76_bool;
	if(var_125_bool != 0) {
		var_126_object = Obj();
		var_126_object = var_0_bool;
		func_2228(var_126_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_2228(var_93_object)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0);
	@@var_93_object:GetPosition(var_97_cvector);
	GetPosition(var_98_cvector);
	var_99_cvector = var_97_cvector - var_98_cvector;
	var_100_float = GetByIndex(var_99_cvector, 0);
	var_101_float = GetByIndex(var_99_cvector, 2);
	RotateAsync(var_100_float, var_101_float);
	return 6;
}


func_1717(var_2_bool, var_28_string)
{
	var_29_bool = 0;
	func_2771(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 0;
	}
	var_31_bool = var_28_string == var_2_bool;
	if(var_31_bool != 0) {
		return 0;
	}
	var_32_string = "";
	var_28_string = var_32_string;
	func_2356(var_32_string);
	var_2_bool = var_28_string;
	return 0;
}


func_185()
{
	var_59_bool = 0;
	func_2239(var_59_bool);
	var_62_bool = var_59_bool == 0; //@nz
	if(var_62_bool != 0) {
		func_2591();
	}
	return 0;
}


func_2239(var_59_bool)
{
	var_60_bool = 0; var_61_bool = 0;
	IsLoaded(var_61_bool);
	var_61_bool = var_59_bool;
	return 2;
}


func_2244(var_46_bool, var_47_object)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0;
	@@var_47_object:GetPosition(var_57_cvector);
	@@var_47_object:GetEyesHeight(var_56_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	var_64_float = var_64_float + var_56_float;
	SetByIndex(var_57_cvector, 1) = var_64_float;
	GetPosition(var_58_cvector);
	GetEyesHeight(var_56_float);
	var_65_float = GetByIndex(var_58_cvector, 1);
	var_65_float = var_65_float + var_56_float;
	SetByIndex(var_58_cvector, 1) = var_65_float;
	var_59_cvector = var_57_cvector - var_58_cvector;
	var_66_float = GetByIndex(var_59_cvector, 1);
	SetByIndex(var_59_cvector, 1) = (float)0;
	var_67_int = var_59_cvector | var_59_cvector;
	var_68_float = sqrt(var_67_int);
	var_59_cvector = var_59_cvector / var_68_float;
	var_60_cvector = -var_59_cvector;
	var_70_float = var_59_cvector * (int)70;
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_72_cvector = var_60_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2392(var_71_cvector, var_72_cvector);
	var_80_float = var_71_cvector * (int)25;
	var_81_int = var_70_float + var_80_float;
	var_61_cvector = var_81_int - CVector(0.0, 10.0, 0.0);
	var_62_cvector = var_58_cvector + var_61_cvector;
	IsOverrideActive(var_63_bool);
	var_83_bool = var_63_bool;
	if(var_83_bool != 0) {
		var_46_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_62_cvector, var_60_cvector);
	var_84_float = GetByIndex(var_61_cvector, 0);
	var_85_float = GetByIndex(var_61_cvector, 2);
	Rotate(var_84_float, var_85_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_46_bool = 1;
	return 16;
}


func_2762(var_29_int, var_30_string)
{
	var_31_int = 0; var_32_int = 0;
	GetInvItemByName(var_32_int, var_30_string);
	var_32_int = var_29_int;
	return 2;
}


func_718(var_0_bool)
{
	var_77_object = Obj();
	var_77_object = var_0_bool;
	func_2374(var_77_object);
	return 0;
}


func_1231(var_401_bool, var_402_float)
{
	var_403_float = 0; var_404_bool = 0; var_405_float = 0; var_406_bool = 0;
	rand(var_405_float);
	var_407_bool = var_405_float < var_402_float;
	if(var_407_bool != 0) {

	Label_1236:
		IsAnimationPlaying(var_406_bool);
		var_408_bool = var_406_bool == 0; //@nz
		if(var_408_bool != 0) {
		} else {
			var_409_bool = 0;
			func_1295(var_406_bool, var_409_bool);
			if(var_409_bool != 0) {
				var_401_bool = 1;
				sync();
				goto Label_1236;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_1253;
	
Label_1253:
	var_401_bool = 0;
	return 4;
	
}


func_2767(var_87_int)
{
	var_87_int = 3343;
	return 0;
}


func_2769(var_88_string)
{
	var_88_string = "ui/NPC_None.png";
	return 0;
}


func_2771(var_20_bool)
{
	var_20_bool = 0;
	return 0;
}


func_2773()
{
	var_18_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_19_bool = 0;
	func_2688((bool)1);
	return 0;
}


func_2781(var_29_object, var_37_object)
{
	var_30_bool = 0; var_31_bool = 0;
	var_32_bool = GlobalVars[1];
	if(var_32_bool != 0) {
		IsOverrideActive(var_31_bool);
		var_33_bool = var_31_bool == 0; //@nz
		if(var_33_bool != 0) {
			WorkWithCorpse(var_29_object);
		}
		return 2;
	EMIT "GOTO 0xb02";
	}
	var_35_int = 0; var_36_object = Obj();
	var_29_object = var_36_object;
	TaskCall(7);
	func_1556(var_37_object, var_35_int, var_36_object);
	TaskReturn();
	var_137_bool = (int)1000 == var_37_object;
	if(var_137_bool != 0) {
		var_138_bool = 0; var_139_object = Obj();
		var_29_object = var_139_object;
		func_2304(var_138_bool, var_139_object);
		var_167_bool = var_138_bool == 0; //@nz
		if(var_167_bool != 0) {
			return 2;
		}
		var_168_object = Obj();
		var_29_object = var_168_object;
		TaskCall(0);
		func_0(var_168_object);
		TaskReturn();
		var_29_object = Obj();
		func_2352();
	}
	return 2;
}


func_1255(var_0_bool, var_243_bool, var_244_float)
{
	var_245_bool = 0; var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_float = 0; var_250_bool = 0; var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); var_253_cvector = CVector(0,0,0); var_254_float = 0;
	
Label_1256:
	IsAnimationPlaying(var_250_bool);
	var_255_bool = var_250_bool == 0; //@nz
	if(var_255_bool != 0) {
	} else {
		var_256_bool = 0;
		func_1295(var_254_float, var_256_bool);
		if(var_256_bool != 0) {
			var_243_bool = 1;
			return 10;
		}
		var_281_bool = 0; var_282_object = Obj();
		var_282_object = var_0_bool;
		func_2137(var_281_bool, var_282_object);
		var_283_bool = var_281_bool == 0; //@nz
		if(var_283_bool != 0) {
			var_243_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_251_cvector);
		GetPFPosition(var_252_cvector);
		var_253_cvector = var_251_cvector - var_252_cvector;
		var_254_float = var_253_cvector | var_253_cvector;
		var_284_float = var_244_float * var_244_float;
		var_285_bool = var_254_float < var_284_float;
		if(var_285_bool != 0) {
			var_286_bool = 0; var_287_float = 0;
			var_244_float = var_287_float;
			func_1151(var_253_cvector, var_254_float, var_286_bool, var_287_float);
			var_243_bool = 1;
			sync();
			goto Label_1256;
		}
		return 10;
	}
	var_243_bool = 0;
	return 10;
	
}


func_2300()
{
	CameraSwitchToNormal();
	return 0;
}


func_2304(var_138_bool, var_139_object)
{
	var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_bool = 0; var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_bool = 0;
	@@var_139_object:GetPosition(var_149_cvector);
	@@var_139_object:GetEyesHeight(var_148_float);
	var_156_float = GetByIndex(var_149_cvector, 1);
	var_156_float = var_156_float + var_148_float;
	SetByIndex(var_149_cvector, 1) = var_156_float;
	GetPosition(var_150_cvector);
	GetEyesHeight(var_148_float);
	var_157_float = GetByIndex(var_150_cvector, 1);
	var_157_float = var_157_float + var_148_float;
	SetByIndex(var_150_cvector, 1) = var_157_float;
	var_151_cvector = var_149_cvector - var_150_cvector;
	var_158_float = GetByIndex(var_151_cvector, 1);
	SetByIndex(var_151_cvector, 1) = (float)0;
	var_159_int = var_151_cvector | var_151_cvector;
	var_160_float = sqrt(var_159_int);
	var_151_cvector = var_151_cvector / var_160_float;
	var_152_cvector = -var_151_cvector;
	var_162_float = var_151_cvector * (int)70;
	var_153_cvector = var_162_float - CVector(0.0, 10.0, 0.0);
	var_154_cvector = var_150_cvector + var_153_cvector;
	IsOverrideActive(var_155_bool);
	var_164_bool = var_155_bool;
	if(var_164_bool != 0) {
		var_138_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_154_cvector, var_152_cvector);
	var_165_float = GetByIndex(var_153_cvector, 0);
	var_166_float = GetByIndex(var_153_cvector, 2);
	Rotate(var_165_float, var_166_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_138_bool = 1;
	return 16;
}


func_2819(var_62_bool)
{
	var_62_bool = 0;
	return 0;
}


func_2821(var_21_bool, var_22_object, var_23_object)
{
	var_24_string = ""; var_25_bool = 0; var_26_string = ""; var_27_bool = 0;
	var_28_bool = 0; var_29_object = Obj(); var_30_string = "";
	var_23_object = var_29_object;
	func_2020(var_28_bool, var_29_object, "class");
	var_37_bool = var_28_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	@@var_23_object:GetProperty("class", var_26_string);
	var_40_bool = var_26_string == "rat";
	if(var_40_bool != 0) {
		var_21_bool = 0;
		return 4;
	EMIT "GOTO 0xb1d";
	}
	var_42_bool = var_26_string == "dog";
	if(var_42_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	CanSee(var_27_bool, var_22_object);
	var_43_bool = 0;
	var_43_bool = 1;
	var_44_bool = var_27_bool;
	if(var_44_bool != 1) {
		var_45_float = 0; var_46_object = Obj();
		var_22_object = var_46_object;
		func_2012(var_45_float, var_46_object);
		var_54_bool = var_45_float <= (float)250000.0;
		if(var_54_bool != 1) {
			var_43_bool = 0;
		}
	}
	if(var_43_bool != 0) {
		ReportReputationChange(var_22_object, var_23_object, (float)-0.30000001192092896);
		var_21_bool = 1;
		return 4;
	}
	CanSee(var_27_bool, var_23_object);
	var_56_bool = 0;
	var_56_bool = 1;
	var_57_bool = var_27_bool;
	if(var_57_bool != 1) {
		var_58_float = 0; var_59_object = Obj();
		var_23_object = var_59_object;
		func_2012(var_58_float, var_59_object);
		var_61_bool = var_58_float <= (float)250000.0;
		if(var_61_bool != 1) {
			var_56_bool = 0;
		}
	}
	if(var_56_bool != 0) {
		var_21_bool = 1;
		return 4;
	}
	var_21_bool = 0;
	return 4;
}


func_1295(var_0_bool, var_256_bool)
{
	var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_float = 0; var_261_float = 0; var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_float = 0; var_266_float = 0;
	var_267_bool = 0; var_268_object = Obj();
	var_268_object = var_0_bool;
	func_2137(var_267_bool, var_268_object);
	var_269_bool = var_267_bool == 0; //@nz
	if(var_269_bool != 0) {
		var_256_bool = 0;
		return 10;
	}
	var_270_bool = 0;
	func_1347(var_266_float, var_270_bool);
	if(var_270_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_262_cvector);
		GetPFPosition(var_263_cvector);
		var_264_cvector = var_262_cvector - var_263_cvector;
		var_265_float = var_264_cvector | var_264_cvector;
		@@@var_0_bool:GetAttackDistance(var_266_float);
		var_266_float = var_266_float + (int)50;
		var_272_float = var_266_float * var_266_float;
		var_273_bool = var_265_float <= var_272_float;
		if(var_273_bool != 0) {
			func_1328(var_266_float);
			var_256_bool = 1;
			return 10;
		}
	}
	var_256_bool = 0;
	return 10;
}


func_1328(var_0_bool)
{
	var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_276_cvector);
	GetPFPosition(var_277_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_2352()
{
	CameraSwitchToNormal();
	return 0;
}


func_2356(var_32_string)
{
	var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0;
	var_38_int = "playing " + var_32_string;
	Trace(var_38_int);
	lshGetAnimTimes(var_32_string, var_35_float, var_36_float);
	lshPlayAnimation(var_35_float, var_36_float);
	var_40_int = "start: " + var_35_float;
	Trace(var_40_int);
	var_42_int = "end: " + var_36_float;
	Trace(var_42_int);
	return 4;
}


func_831()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1347(var_0_bool, var_235_bool)
{
	var_236_bool = 0; var_237_bool = 0;
	var_240_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_240_bool != 0) {
		@@@var_0_bool:IsAttacking(var_237_bool);
		var_237_bool = var_235_bool;
		return 2;
	}
	var_235_bool = 0;
	return 2;
}


func_2884()
{
	var_71_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	var_74_bool = 0;
	var_74_bool = 1;
	func_2644();
	return 0;
}


func_2374(var_77_object)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_cvector = CVector(0,0,0);
	@@var_77_object:GetEyesHeight(var_80_float);
	var_81_cvector = CVector(0.0, 0.0, 0.0);
	var_82_float = GetByIndex(var_81_cvector, 1);
	var_80_float = var_82_float;
	SetByIndex(var_81_cvector, 1) = var_82_float;
	LookAsync(var_77_object, "head", var_81_cvector);
	return 4;
}


func_333(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_462(var_16_string, var_17_bool);
	return 0;
}


func_1358(var_2_bool, var_4_object)
{
	var_297_float = 0; var_298_int = 0; var_299_float = 0; var_300_int = 0;
	var_301_bool = var_2_bool == 0; //@nz
	if(var_301_bool != 0) {
		return 4;
	}
	var_302_object = var_4_object;
	if(var_302_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_305_bool = var_4_object > (int)0;
		if(var_305_bool != 0) {
			return 4;
		}
	}
	rand(var_299_float);
	var_306_float = 0;
	func_1396(var_306_float);
	var_307_bool = var_299_float < var_306_float;
	if(var_307_bool != 0) {
		irand(var_300_int, var_2_bool);
		var_300_int = var_300_int + (int)1;
		var_310_int = "attack" + var_300_int;
		Speak(var_310_int);
		var_311_int = 0;
		func_1394(var_311_int);
		var_4_object = var_311_int;
	}
	return 4;
}


func_2385()
{
	var_20_bool = 0;
	func_2771(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_341(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_469(var_21_bool, var_22_int);
	return 0;
}


func_2392(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0;
	var_76_int = var_72_cvector | var_72_cvector;
	var_75_float = sqrt(var_76_int);
	var_77_float = 9.999999974752427e-07;
	var_78_bool = var_75_float < var_77_float;
	if(var_78_bool != 0) {
		var_71_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_71_cvector = var_72_cvector / var_75_float;
	return 2;
}


func_2402(var_365_float, var_366_float, var_367_float)
{
	var_370_bool = var_366_float < var_367_float;
	if(var_370_bool != 0) {
		var_366_float = var_365_float;
	} else {
		var_367_float = var_365_float;
	}
	return 0;
	
}


func_358(var_2_bool, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_18_object = var_24_object;
	func_2137(var_23_bool, var_24_object);
	var_57_bool = var_23_bool == 0; //@nz
	if(var_57_bool != 0) {
		return 4;
	}
	var_58_bool = var_2_bool;
	if(var_58_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_18_object, var_21_bool);
	var_59_bool = var_21_bool == 0; //@nz
	if(var_59_bool != 0) {
		return 4;
	}
	var_60_int = 0; var_61_object = Obj();
	var_18_object = var_61_object;
	func_2524(var_61_object);
	var_60_int = var_22_int;
	var_64_bool = var_22_int > (int)0;
	if(var_64_bool != 0) {
		var_66_bool = var_22_int > (int)1;
		if(var_66_bool != 0) {
			func_341(var_22_int);
		}
		var_68_object = Obj();
		var_18_object = var_68_object;
		func_2533(var_68_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2409(var_375_float, var_376_float, var_377_float, var_378_float)
{
	var_379_bool = var_376_float < var_377_float;
	if(var_379_bool != 0) {
		var_377_float = var_375_float;
		return 0;
	}
	var_380_bool = var_376_float > var_378_float;
	if(var_380_bool != 0) {
		var_378_float = var_375_float;
		return 0;
	}
	var_376_float = var_375_float;
	return 0;
}


func_1390(var_382_int)
{
	var_382_int = 0;
	return 0;
}


func_1392()
{
	return 0;
}


func_1394(var_311_int)
{
	var_311_int = 1;
	return 0;
}


func_1396(var_306_float)
{
	var_306_float = 0.5;
	return 0;
}


func_2420(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = var_73_float * var_74_float;
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = var_76_float * var_77_float;
	var_70_float = var_75_float + var_78_float;
	return 0;
}


func_1405(var_0_bool, var_1_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj();
	var_0_bool = false;
	var_1_bool = var_160_object;
	var_164_bool = var_176_bool;
	
Label_1409:
	var_183_bool = 0; var_184_object = Obj();
	var_160_object = var_184_object;
	func_1545(var_183_bool, var_184_object);
	var_187_bool = var_183_bool == 0; //@nz
	if(var_187_bool != 0) {
		var_159_bool = 0;
		return 16;
	}
	@@var_160_object:GetPosition(var_178_cvector);
	GetPosition(var_179_cvector);
	var_180_cvector = var_178_cvector - var_179_cvector;
	var_181_float = var_180_cvector | var_180_cvector;
	var_188_bool = 0;
	var_188_bool = 0;
	var_190_bool = var_162_float > (int)0;
	if(var_190_bool != 0) {
		var_191_float = var_162_float * var_162_float;
		var_192_bool = var_181_float > var_191_float;
		if(var_192_bool != 0) {
			var_188_bool = 1;
		}
	}
	if(var_188_bool != 0) {
		Stop();
		var_159_bool = 0;
		return 16;
	}
	var_193_float = var_161_float * var_161_float;
	var_194_bool = var_181_float > var_193_float;
	if(var_194_bool != 0) {
		@@var_160_object:GetPFPosition(var_178_cvector);
		FindPathTo(var_182_object, var_178_cvector);
		var_195_bool = var_182_object != 0; //@nn
		if(var_195_bool != 0) {
			var_182_object = var_177_object;
			var_182_object = 0;
		}
		var_196_bool = var_177_object != 0; //@nn
		if(var_196_bool != 0) {
			var_197_bool = var_176_bool;
			if(var_197_bool == 0) goto Label_1458;
			var_176_bool = 0;
			RotatePath(var_177_object, var_175_bool);
			var_198_bool = var_175_bool == 0; //@nz
			if(var_198_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_201_string = "";
				func_1552(var_201_string);
				var_202_string = "";
				func_1554(var_202_string);
				FollowPath(var_177_object, var_163_bool, var_175_bool, var_201_string, var_202_string);
				var_203_bool = var_175_bool == 0; //@nz
				if(var_203_bool != 0) {
					var_204_bool = var_0_bool;
					if(var_204_bool != 0) {
						var_177_object = 0;
						goto Label_1505;
					EMIT "GOTO 0x5c6";
					}
				} else {
					var_177_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_175_bool);
					var_207_bool = var_175_bool == 0; //@nz
					if(var_207_bool != 0) {
						var_208_bool = var_0_bool;
						if(var_208_bool != 0) {
							var_177_object = 0;
							goto Label_1505;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1505;
	}
			var_182_object = 0;
			goto Label_1503;

		Label_1503:
			var_177_object = 0;

		}
		goto Label_1409;
	}
Label_1505:
	var_159_bool = !var_0_bool;
	return 16;
	
}


func_2429(var_79_float, var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0);
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_83_float = var_81_float * var_82_float;
	var_84_float = GetByIndex(var_80_cvector, 2);
	var_85_float = GetByIndex(var_80_cvector, 2);
	var_86_float = var_84_float * var_85_float;
	var_87_int = var_83_float + var_86_float;
	var_79_float = sqrt(var_87_int);
	return 0;
}


func_893(var_102_object)
{
	var_108_object = Obj(); var_109_bool = 0; var_110_float = 0;
	var_102_object = var_108_object;
	func_907(var_103_object, var_104_int, var_105_int, var_106_bool, var_107_int, var_102_object, var_108_object, (bool)1, (float)180.0);
	return 0;
}


func_901(var_326_float)
{
	var_326_float = 0.029999999329447746;
	return 0;
}


func_2439(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_68_cvector = var_71_cvector;
	var_69_cvector = var_72_cvector;
	func_2420(var_70_float, var_71_cvector, var_72_cvector);
	var_79_float = 0; var_80_cvector = CVector(0,0,0);
	var_68_cvector = var_80_cvector;
	func_2429(var_79_float, var_80_cvector);
	var_88_float = 0; var_89_cvector = CVector(0,0,0);
	var_69_cvector = var_89_cvector;
	func_2429(var_88_float, var_89_cvector);
	var_90_float = var_79_float * var_88_float;
	var_67_float = var_70_float / var_90_float;
	return 0;
}


func_904(var_333_int)
{
	var_333_int = 0;
	return 0;
}


func_907(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_108_object, var_109_bool, var_110_float, var_165_bool)
{
	var_111_bool = 0; var_112_bool = 0; var_113_float = 0; var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_bool = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_float = 0; var_121_bool = 0; var_122_bool = 0; var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_bool = 0; var_127_bool = 0; var_128_cvector = CVector(0,0,0); var_129_float = 0; var_130_float = 0;
	var_1_bool = 0;
	
Label_909:
	var_134_int = var_1_bool + (int)1;
	var_135_int = "attack_begin" + var_134_int;
	HasAnimation(var_121_bool, "all", var_135_int);
	var_136_bool = var_121_bool == 0; //@nz
	if(var_136_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_909;
	}
	var_2_bool = 0;
	
Label_923:
	var_139_int = var_2_bool + (int)1;
	var_140_int = "attack" + var_139_int;
	IsExisting3DSound(var_122_bool, var_140_int);
	var_141_bool = var_122_bool == 0; //@nz
	if(var_141_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_923;

	}
	var_4_object = 0;
	var_144_bool = IsFuncExist(var_108_object, "@GetAttackDistance", (int)1);
	if(var_144_bool != 0) {
		@@var_108_object:GetAttackDistance(var_123_float);
		var_123_float = var_123_float + (int)50;
	} else {
							var_110_float = var_123_float;

	}
	var_147_bool = var_123_float >= (int)150;
	if(var_147_bool != 0) {
		var_123_float = 150;
	}
	var_3_bool = false;
	var_0_bool = var_108_object;
	IsPlayerActor(var_0_bool, var_126_bool);
	var_148_bool = var_109_bool;
	if(var_148_bool != 0) {
		var_127_bool = 0;
	} else {
						var_127_bool = 1;

	}
Label_959:
	var_149_bool = 0;
	var_149_bool = 0;
	var_150_bool = 0; var_151_object = Obj();
	var_151_object = var_0_bool;
	func_2137(var_150_bool, var_151_object);
	if(var_150_bool != 0) {
		var_152_bool = var_3_bool == 0; //@nz
		if(var_152_bool != 0) {
			var_149_bool = 1;
		}
	}
	if(var_149_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_124_cvector);
		GetPFPosition(var_125_cvector);
		var_128_cvector = var_124_cvector - var_125_cvector;
		var_129_float = var_128_cvector | var_128_cvector;
		var_154_int = (float)400.0 + var_123_float;
		var_156_int = (float)400.0 + var_123_float;
		var_157_float = var_154_int * var_156_int;
		var_158_bool = var_129_float >= var_157_float;
		if(var_158_bool != 0) {
			var_159_bool = 0; var_160_object = Obj(); var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_bool = 0;
			var_160_object = var_0_bool;
			var_123_float = var_161_float;
			TaskCall(6);
			func_1405(var_165_bool, var_166_object, var_159_bool, var_160_object, var_161_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_212_bool = var_165_bool == 0; //@nz
			if(var_212_bool != 0) {
			} else {
		} else {
				var_218_float = var_110_float * var_110_float;
				var_219_bool = var_129_float >= var_218_float;
				if(var_219_bool != 0) {
					var_220_bool = (bool)0 == 0; //@nz
					if(var_220_bool != 0) {
						var_221_object = Obj();
						var_221_object = var_0_bool;
						func_2228(var_221_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_127_bool = 1;
					}
					rand(var_130_float);
					var_232_bool = 0;
					var_234_bool = var_130_float < (float)0.6000000238418579;
					if(var_234_bool != 1) {
						var_235_bool = 0;
						func_1347((bool)1, var_235_bool);
						if(var_235_bool != 1) {
							var_232_bool = 0;
						}
					}
					if(var_232_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_243_bool = 0; var_244_float = 0;
						var_110_float = var_244_float;
						func_1255(var_130_float, var_243_bool, var_244_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_413_bool = 0;
						func_1347(var_130_float, var_413_bool);
						var_414_bool = var_413_bool == 0; //@nz
						if(var_414_bool == 0) goto Label_1085;
						var_415_bool = 0; var_416_object = Obj();
						var_416_object = var_0_bool;
						func_2137(var_415_bool, var_416_object);
						var_417_bool = var_415_bool == 0; //@nz
						if(var_417_bool != 0) {
							goto Label_1095;
						}
						@@@var_0_bool:GetPFPosition(var_124_cvector);
						GetPFPosition(var_125_cvector);
						var_128_cvector = var_124_cvector - var_125_cvector;
						var_129_float = var_128_cvector | var_128_cvector;
						var_418_float = var_110_float * var_110_float;
						var_419_bool = var_129_float < var_418_float;
						if(var_419_bool == 0) goto Label_1085;
						var_420_bool = 0; var_421_float = 0;
						var_110_float = var_421_float;
						func_1151(var_129_float, var_130_float, var_420_bool, var_421_float);
						var_422_bool = var_420_bool == 0; //@nz
						if(var_422_bool == 0) goto Label_1085;
						goto Label_1095;
				}
					var_423_bool = 0; var_424_float = 0;
					var_110_float = var_424_float;
					func_1151(var_129_float, var_130_float, var_423_bool, var_424_float);
					var_425_bool = var_423_bool == 0; //@nz
					if(var_425_bool != 0) {
						goto Label_1095;
					}
					var_127_bool = 1;

				}
			Label_1085:
				goto Label_1094;
		}
		Label_1094:
			goto Label_959;

		}
	}
Label_1095:
	WaitForAnimEnd();
	var_213_bool = var_3_bool;
	if(var_213_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_216_bool = var_126_bool;
	if(var_216_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_398(var_0_bool, var_1_bool)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_bool = 0; var_68_object = Obj(); var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_bool = 0; var_75_object = Obj(); var_76_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_70_float, (float)0.5);
	Sleep(var_70_float);
	
Label_406:
	var_78_bool = var_0_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_79_bool = var_1_bool == 0; //@nz
		if(var_79_bool != 0) {

		Label_410:
			GetPosition(var_72_cvector);
			GetCameraFarDistance(var_73_float);
			var_73_float = var_73_float * (float)2.5;
			GetRandomPFPointInCircle(var_71_cvector, var_72_cvector, var_73_float, var_74_bool);
			var_81_bool = var_74_bool;
			if(var_81_bool != 0) {
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
	FindShiftedPathTo(var_75_object, var_71_cvector);
	var_82_bool = var_75_object != 0; //@nn
	if(var_82_bool != 0) {
		RotatePath(var_75_object, var_76_bool);
		var_83_bool = var_76_bool;
		if(var_83_bool != 0) {
			var_84_bool = 0;
			func_476(var_84_bool);
			FollowPath(var_75_object, var_84_bool, var_76_bool);
			var_75_object = 0;
			var_85_bool = var_76_bool;
			if(var_85_bool != 0) {
				TaskCall(3);
				func_593();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_75_object = 0;
	goto Label_406;
	
}


func_2456(var_83_int)
{
	var_84_float = 0; var_85_float = 0;
	GetGameTime(var_85_float);
	var_87_int = 0;
	var_87_int = var_85_float / (int)24;
	var_83_int = (int)1 + var_87_int;
	return 2;
}


func_2465(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	TaskCall(1);
	func_22(var_19_object);
	TaskReturn();
	return 0;
}


func_2500(var_108_string, var_109_int)
{
	var_110_string = ""; var_111_string = "";
	var_112_int = var_109_int;
	if(var_112_int != 0) {
		"idle" = "idle" + var_109_int;
	}
	var_111_string = var_108_string;
	return 2;
}


func_2507(var_102_int)
{
	var_103_int = 0; var_104_bool = 0; var_105_int = 0; var_106_bool = 0;
	var_105_int = 0;
	
Label_2509:
	var_108_string = ""; var_109_int = 0;
	var_105_int = var_109_int;
	func_2500(var_108_string, var_109_int);
	HasAnimation(var_106_bool, "all", var_108_string);
	var_113_bool = var_106_bool == 0; //@nz
	if(var_113_bool != 0) {
	} else {
		var_105_int = var_105_int + (int)1;
		goto Label_2509;
	}
	var_105_int = var_102_int;
	return 4;
	
}


func_1997(var_357_string, var_358_int)
{
	var_360_bool = var_358_int == (int)1;
	if(var_360_bool != 0) {
		var_357_string = "fire";
		return 0;
	}
	var_357_string = "phys";
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


func_469(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_2005(var_61_cvector, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetPosition(var_65_cvector);
	@@var_62_object:GetPosition(var_66_cvector);
	var_61_cvector = var_66_cvector - var_65_cvector;
	return 4;
}


func_2524(var_60_int)
{
	var_62_bool = 0;
	func_2819(var_62_bool);
	if(var_62_bool != 0) {
		var_60_int = 2;
	} else {
		var_60_int = 0;
	}
	return 0;
	
}


func_476(var_84_bool)
{
	var_84_bool = 0;
	return 0;
}


func_2012(var_45_float, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_50_cvector);
	@@var_46_object:GetPosition(var_51_cvector);
	var_52_cvector = var_51_cvector - var_50_cvector;
	var_45_float = var_52_cvector | var_52_cvector;
	return 6;
}


func_2020(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0;
	var_51_bool = IsFuncExist(var_45_object, "HasProperty", (int)2);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_44_bool = 0;
		return 2;
	}
	@@var_45_object:HasProperty(var_46_string, var_48_bool);
	var_48_bool = var_44_bool;
	return 2;
}


func_2533(var_68_object)
{
	var_69_object = Obj();
	var_68_object = var_69_object;
	TaskCall(4);
	func_667(var_70_object, var_69_object);
	TaskReturn();
	return 0;
}


func_2541(var_64_int, var_65_object)
{
	var_66_bool = 0; var_67_object = Obj();
	var_65_object = var_67_object;
	func_2137(var_66_bool, var_67_object);
	if(var_66_bool != 0) {
		var_64_int = 2;
	} else {
		var_64_int = 0;
	}
	return 0;
	
}


func_2032(var_329_float, var_330_object, var_331_float, var_332_int)
{
	var_336_int = 0; var_337_string = ""; var_338_int = 0; var_339_float = 0; var_340_float = 0; var_341_float = 0; var_342_int = 0; var_343_string = ""; var_344_int = 0; var_345_float = 0; var_346_float = 0; var_347_float = 0;
	var_348_bool = 0; var_349_object = Obj(); var_350_string = "";
	var_330_object = var_349_object;
	func_2020(var_348_bool, var_349_object, "health");
	var_351_bool = var_348_bool == 0; //@nz
	if(var_351_bool != 0) {
		var_329_float = 0.0;
		return 12;
	}
	var_352_bool = 0; var_353_object = Obj(); var_354_string = "";
	var_330_object = var_353_object;
	func_2020(var_352_bool, var_353_object, "armor");
	var_355_bool = var_352_bool == 0; //@nz
	if(var_355_bool != 0) {
		var_342_int = 0;
	} else {
			@@var_330_object:GetProperty("armor", var_342_int);
	}
	var_357_string = ""; var_358_int = 0;
	var_332_int = var_358_int;
	func_1997(var_357_string, var_358_int);
	var_343_string = "armor_" + var_357_string;
	var_361_bool = 0; var_362_object = Obj(); var_363_string = "";
	var_330_object = var_362_object;
	var_343_string = var_363_string;
	func_2020(var_361_bool, var_362_object, var_363_string);
	var_364_bool = var_361_bool == 0; //@nz
	if(var_364_bool != 0) {
		var_344_int = 0;
	} else {
		@@var_330_object:GetProperty(var_343_string, var_344_int);

	}
	var_365_float = 0; var_366_float = 0; var_367_float = 0;
	var_368_int = var_342_int + var_344_int;
	var_366_float = var_368_int / (float)100.0;
	func_2402(var_365_float, var_366_float, (float)1);
	var_365_float = var_345_float;
	@@var_330_object:GetProperty("health", var_346_float);
	var_373_int = (int)1 - var_345_float;
	var_347_float = var_331_float * var_373_int;
	var_375_float = 0; var_376_float = 0; var_377_float = 0; var_378_float = 0;
	var_376_float = var_346_float - var_347_float;
	func_2409(var_375_float, var_376_float, (float)0, (float)1);
	@@var_330_object:SetProperty("health", var_375_float);
	var_347_float = var_329_float;
	return 12;
	
}


func_2551(var_101_object)
{
	var_102_object = Obj();
	var_101_object = var_102_object;
	TaskCall(5);
	func_893(var_102_object);
	TaskReturn();
	return 0;
}


func_1529(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2559(var_62_int, var_63_object)
{
	var_64_int = 0; var_65_object = Obj();
	var_63_object = var_65_object;
	func_2541(var_64_int, var_65_object);
	var_64_int = var_62_int;
	return 0;
}


