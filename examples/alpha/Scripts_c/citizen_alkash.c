// @IMPORTS: DoTrade/0,WaitForAnimEnd/0,PlayAnimation/2,StopAnimation/0,StopTrade/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,FollowPath/5,CreateDialog/1,IsOverrideActive/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetGameTime/1,GetProperty/2,SignalDeath/1,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,WorkWithCorpse/1,CanSee/2,ReportReputationChange/3,SetRTEnvelope/2
// @STRINGS: W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |W:killme|A:SetReturnValue|W:KnowTvirin|W:player|W:GenerateMoney: iMin > iMax|W:Money|W:bandage|W:tourniquet|W:ui/NPC_None.png|W:class|W:rat|W:dog
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
// @EVENT_11: op=0x6cf vars=int,int
// @STANDALONE_EVENT_16: op=0x987 vars=object,string
// @STANDALONE_EVENT_41: op=0x994 vars=object
// @STANDALONE_EVENT_22: op=0x99a vars=object,int,float,float
// @PE: 0x0,0xf,0x16,0x8e,0xa4,0xa6,0xa8,0x12e,0x134,0x13a,0x15d,0x1c7,0x34a,0x37d,0x385,0x388,0x570,0x5e3,0x5f5,0x600,0x609,0x653,0x6bf,0x6cf,0x7a6,0x8d5,0x909,0x93b,0x942,0x94d,0x956,0x960,0x97f,0x994,0x99a,0x9ba,0x9c3,0x9cb,0x9d5,0x9dd,0x9e4,0x9ea,0x9ed,0x9ef,0x9fb,0xa05,0xa17,0xa1d,0xa20,0xa27,0xa2c,0xad2,0xb03

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
	func_2589(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_24_object = Obj();
		var_17_bool = var_24_object;
		func_2592(var_24_object);
	}
	return 2;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_2598();
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
	func_2589(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_333(var_19_int);
		}
		var_27_object = Obj();
		var_17_bool = var_27_object;
		func_2592(var_27_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2507(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_333(var_19_int);
		}
		var_61_object = Obj();
		var_17_bool = var_61_object;
		func_2517(var_61_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2773(var_21_bool, var_22_object, var_23_object);
	if(var_21_bool != 0) {
		var_56_int = 0; var_57_object = Obj();
		var_17_string = var_57_object;
		func_2525(var_56_int, var_57_object);
		var_56_int = var_20_int;
		var_89_bool = var_20_int > (int)0;
		if(var_89_bool != 0) {
			var_91_bool = var_20_int > (int)1;
			if(var_91_bool != 0) {
				func_333(var_20_int);
			}
			var_93_object = Obj();
			var_17_string = var_93_object;
			func_2532(var_93_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2538(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_333(var_19_int);
		}
		var_17_bool = Obj();
		func_2541();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2543(var_21_int, var_22_string, var_23_object);
	var_21_int = var_20_int;
	var_66_bool = var_20_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_20_int > (int)1;
		if(var_68_bool != 0) {
			func_333(var_20_int);
		}
		var_70_string = ""; var_71_object = Obj();
		var_18_bool = var_70_string;
		var_17_string = var_71_object;
		func_2555(var_70_string, var_71_object);
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
	func_2598();
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_333(var_17_bool);
	var_17_bool = Obj();
	func_2452();
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
	func_2589(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_662();
		}
		var_26_object = Obj();
		var_17_bool = var_26_object;
		func_2592(var_26_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2507(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_662();
		}
		var_60_object = Obj();
		var_17_bool = var_60_object;
		func_2517(var_60_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2773(var_21_bool, var_22_object, var_23_object);
	if(var_21_bool != 0) {
		var_56_int = 0; var_57_object = Obj();
		var_17_string = var_57_object;
		func_2525(var_56_int, var_57_object);
		var_56_int = var_20_int;
		var_89_bool = var_20_int > (int)0;
		if(var_89_bool != 0) {
			var_91_bool = var_20_int > (int)1;
			if(var_91_bool != 0) {
				func_662();
			}
			var_92_object = Obj();
			var_17_string = var_92_object;
			func_2532(var_92_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2538(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_662();
		}
		var_17_bool = Obj();
		func_2541();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2543(var_21_int, var_22_string, var_23_object);
	var_21_int = var_20_int;
	var_66_bool = var_20_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_20_int > (int)1;
		if(var_68_bool != 0) {
			func_662();
		}
		var_69_string = ""; var_70_object = Obj();
		var_18_bool = var_69_string;
		var_17_string = var_70_object;
		func_2555(var_69_string, var_70_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_662();
	func_2598();
	return 0;
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2589(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_831();
		}
		var_28_object = Obj();
		var_17_bool = var_28_object;
		func_2592(var_28_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2507(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_831();
		}
		var_62_object = Obj();
		var_17_bool = var_62_object;
		func_2517(var_62_object);
	}
	return 2;
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2773(var_21_bool, var_22_object, var_23_object);
	if(var_21_bool != 0) {
		var_56_int = 0; var_57_object = Obj();
		var_17_string = var_57_object;
		func_2525(var_56_int, var_57_object);
		var_56_int = var_20_int;
		var_89_bool = var_20_int > (int)0;
		if(var_89_bool != 0) {
			var_91_bool = var_20_int > (int)1;
			if(var_91_bool != 0) {
				func_831();
			}
			var_94_object = Obj();
			var_17_string = var_94_object;
			func_2532(var_94_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2538(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_831();
		}
		var_17_bool = Obj();
		func_2541();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2543(var_21_int, var_22_string, var_23_object);
	var_21_int = var_20_int;
	var_66_bool = var_20_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_20_int > (int)1;
		if(var_68_bool != 0) {
			func_831();
		}
		var_71_string = ""; var_72_object = Obj();
		var_18_bool = var_71_string;
		var_17_string = var_72_object;
		func_2555(var_71_string, var_72_object);
	}
	return 2;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_831();
	var_17_bool = Obj();
	func_2452();
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
	func_2098(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		func_831();
		return 4;
	}
	GetDirection(var_20_cvector);
	var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	var_62_object = var_0_bool;
	func_1966(var_61_cvector, var_62_object);
	var_61_cvector = var_21_cvector;
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	var_20_cvector = var_68_cvector;
	var_21_cvector = var_69_cvector;
	func_2400(var_67_float, var_68_cvector, var_69_cvector);
	var_92_bool = var_67_float < (float)0.4999999701976776;
	if(var_92_bool != 0) {
		var_93_object = Obj();
		var_93_object = var_0_bool;
		func_2189(var_93_object);
	}
	return 4;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831();
	func_2598();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1529(var_16_bool);
	func_2598();
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
	func_2452();
	return 0;
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int)
{
	if((int)1 != 0) {
		func_2346();
		var_22_bool = var_18_int == (int)15021;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_bool;
			var_24_object = var_0_bool;
			func_2599(var_24_object);
		}
		var_27_bool = var_17_int == (int)15020;
		if(var_27_bool != 0) {
			var_28_string = "";
			func_1727(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)13794);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)13795, (int)-1, (int)15021);
			@@@var_0_bool:AddReply((int)13796, (int)-1, (int)15022);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=553";
		EMIT "Call 0x6bf";
		EMIT "Pop(1)";
		EMIT "Push((int) 14699)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
		EMIT "Pop(0)";
		EMIT "PushEmpty(bool, object)";
		EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
		EMIT "Call 0xa2c";
		EMIT "Pop(1)";
		EMIT "IF (Stack[-1] == 0) GOTO 0x707; Pop(1)";
		EMIT "Push((int) 14700)";
		EMIT "Push((int) 15941)";
		EMIT "Push((int) 15940)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
		EMIT "Pop(3)";
		}
		var_51_bool = var_17_int == (int)15951;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_1727(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14710);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14711, (int)15953, (int)15952);
			@@@var_0_bool:AddReply((int)14718, (int)15955, (int)15960);
			return 0;
		}
		var_61_bool = var_17_int == (int)15953;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_1727(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14712);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14713, (int)15955, (int)15954);
			@@@var_0_bool:AddReply((int)14717, (int)15955, (int)15958);
			return 0;
		}
		var_71_bool = var_17_int == (int)15955;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_1727(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14714);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14715, (int)-1, (int)15956);
			@@@var_0_bool:AddReply((int)14716, (int)-1, (int)15957);
			return 0;
		}
		var_81_bool = var_17_int == (int)15941;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_1727(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14701);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14702, (int)15943, (int)15942);
			@@@var_0_bool:AddReply((int)14706, (int)15943, (int)15946);
			return 0;
		}
		var_91_bool = var_17_int == (int)15943;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_1727(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14703);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14705, (int)-1, (int)15945);
			@@@var_0_bool:AddReply((int)14704, (int)-1, (int)15944);
			return 0;
		}
		var_3_bool = true;
		var_100_bool = 0;
		func_2721(var_100_bool);
		if(var_100_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6d0";
	
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
	func_2431(var_18_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_2122(var_22_int, var_23_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	SensePlayerOnly((bool)1);
	func_2723();
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


func_2565(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_2098(var_28_bool, var_29_object);
	var_62_bool = var_28_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_26_int = 0;
		return 0;
	}
	var_63_bool = 0; var_64_object = Obj();
	var_27_object = var_64_object;
	func_2770(var_64_object);
	if(var_63_bool != 0) {
		var_26_int = 2;
	} else {
		var_26_int = 0;
	}
	return 0;
	
}


func_1545(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_2098(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
	return 0;
}


func_2057(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	@@var_38_object:IsDead(var_40_bool);
	var_40_bool = var_37_bool;
	return 2;
}


func_2062(var_26_bool, var_27_object)
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
		func_2057(var_37_bool, var_38_object);
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


func_1552(var_176_string)
{
	var_176_string = "walk";
	return 0;
}


func_1554(var_177_string)
{
	var_177_string = "run";
	return 0;
}


func_1556(var_0_bool, var_35_int, var_36_object)
{
	var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0;
	var_0_bool = var_36_object;
	var_46_bool = 0; var_47_object = Obj();
	var_36_object = var_47_object;
	func_2205(var_46_bool, var_47_object);
	var_86_bool = var_46_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	CreateDialog(var_42_object);
	var_87_int = 0;
	func_2717(var_87_int);
	@@var_42_object:SetNPCName(var_87_int);
	var_88_string = "";
	func_2719(var_88_string);
	@@var_42_object:SetPhoto(var_88_string);
	var_89_int = 0;
	func_2616(var_89_int);
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
	func_2261();
	StopDialog(var_42_object);
	@@var_42_object:GetReturnValue((int)-1);
	var_44_int = var_35_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_22(var_19_object)
{
	EventDisable(0);
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_55(var_20_object);
	var_19_object = Obj();
	func_2819();
	EventEnable(0);
	
Label_33:
	Hold();
	goto Label_33;
}
EMIT "Return(); Pop(0)";


func_2583(var_75_object)
{
	var_76_object = Obj();
	var_75_object = var_76_object;
	func_2517(var_76_object);
	return 0;
}


func_2589(var_20_int)
{
	var_20_int = 2;
	return 0;
}


func_2592(var_28_object)
{
	var_29_object = Obj();
	var_28_object = var_29_object;
	func_2730(var_28_object, var_29_object);
	return 0;
}


func_2598()
{
	return 0;
}


func_2599(var_24_object)
{
	@@var_24_object:SetReturnValue((int)1000);
	return 0;
}


func_2604()
{
0xa2c: PushEmpty()
0xa2d: PushEmpty(int, string)
0xa2e: Stack[-1] = "KnowTvirin" // @poff=931
0xa2f: Call 0x971
}


func_2098(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_23_object = var_27_object;
	func_2062(var_26_bool, var_27_object);
	var_43_bool = var_26_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_23_object = var_45_object;
	func_1981(var_44_bool, var_45_object, "noaccess");
	var_53_bool = var_44_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	@@var_23_object:GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == (int)0;
	return 2;
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


func_2616(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("player", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0xa47";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
	return 2;
}


func_2633(var_77_int, var_78_int)
{
	var_88_int = 0; var_89_int = 0; var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_bool = 0;
	var_96_bool = var_77_int > var_78_int;
	if(var_96_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_98_bool = var_77_int != var_78_int;
	if(var_98_bool != 0) {
		var_99_int = var_78_int - var_77_int;
		irand(var_93_int, var_99_int);
	} else {
		var_105_bool = var_77_int == (int)0;
		if(var_105_bool == 0) goto Label_2651;
		return 8;
	}
Label_2651:
	(int)0 = (int)0 + var_77_int;
	var_101_bool = var_92_int == (int)0;
	if(var_101_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_94_int, "Money");
	AddItem(var_95_bool, var_94_int, (int)0, var_92_int);
	return 8;
	
}


func_2122(var_21_object, var_22_int)
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


func_593()
{
	var_67_int = 0; var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_bool = 0; var_72_float = 0; var_73_bool = 0; var_74_int = 0; var_75_int = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_float = 0; var_80_bool = 0;
	WaitForAnimEnd();
	var_81_bool = 0;
	func_2200(var_81_bool);
	var_82_bool = var_81_bool == 0; //@nz
	if(var_82_bool != 0) {
		return 14;
	}
	func_2473((int)0);
	var_83_int = var_74_int;
	var_75_int = 0;
	
Label_607:
	var_96_bool = 0;
	var_96_bool = 0;
	var_98_bool = var_75_int < (int)5;
	if(var_98_bool != 0) {
		var_99_bool = 0;
		func_2200(var_99_bool);
		if(var_99_bool != 0) {
			var_96_bool = 1;
		}
	}
	if(var_96_bool != 0) {
		irand(var_76_int, (int)3);
		var_102_bool = var_76_int == (int)0;
		if(var_102_bool != 0) {
			var_103_int = var_74_int;
			if(var_103_int == 0) goto Label_640;
			irand(var_77_int, var_74_int);
			var_105_string = ""; var_106_int = 0;
			var_77_int = var_106_int;
			func_2466(var_105_string, var_106_int);
			PlayAnimation("all", var_105_string);
			WaitForAnimEnd(var_78_bool);
			var_107_bool = var_78_bool == 0; //@nz
			if(var_107_bool != 0) {
			} else {
		} else {
				var_110_bool = var_76_int == (int)1;
				if(var_110_bool != 0) {
					rand(var_79_float, (int)4);
					var_113_int = var_79_float + (int)1;
					Sleep(var_113_int, var_80_bool);
					var_114_bool = var_80_bool == 0; //@nz
					if(var_114_bool != 0) {
						goto Label_661;
					}
					goto Label_658;
				}
				var_115_int = var_75_int;
				if(var_115_int == 0) goto Label_658;
				goto Label_661;
		}
		Label_658:
			var_75_int = var_75_int + (int)1;
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
		func_1727(var_99_object, "Neutral");
		@@@var_0_bool:SetMessage((int)13794);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)13795, (int)-1, (int)15021);
		@@@var_0_bool:AddReply((int)13796, (int)-1, (int)15022);
		goto Label_1697;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=553";
	EMIT "Call 0x6bf";
	EMIT "Pop(1)";
	EMIT "Push((int) 14699)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
	EMIT "Pop(0)";
	EMIT "PushEmpty(bool, object)";
	EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
	EMIT "Call 0xa2c";
	EMIT "Pop(1)";
	EMIT "IF (Stack[-1] == 0) GOTO 0x680; Pop(1)";
	EMIT "Push((int) 14700)";
	EMIT "Push((int) 15941)";
	EMIT "Push((int) 15940)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	}
Label_1697:
	var_127_bool = 0;
	func_2721(var_127_bool);
	if(var_127_bool != 0) {

	Label_1701:
		lshWaitForAnimEnd();
		var_128_bool = var_3_bool;
		if(var_128_bool != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_bool;
			func_2317(var_129_string);
			goto Label_1701;
	}
		PlayAnimation("all", "idle");

	Label_1716:
		WaitForAnimEnd();
		var_132_bool = var_3_bool;
		if(var_132_bool != 0) {
			goto Label_1726;
		}
		PlayAnimation("all", "idle");
		goto Label_1716;
	}
	goto Label_1726;
	
Label_1726:
	return 0;
	
}


func_1112(var_0_bool, var_290_float, var_291_int)
{
	var_292_object = Obj(); var_293_float = 0; var_294_float = 0; var_295_object = Obj(); var_296_float = 0; var_297_float = 0;
	var_299_float = var_290_float * (float)0.8999999761581421;
	GetVictim(var_299_float, var_295_object);
	ReportAttack(var_0_bool);
	var_300_bool = var_295_object == var_0_bool;
	if(var_300_bool != 0) {
		var_301_float = 0; var_302_object = Obj(); var_303_int = 0;
		var_295_object = var_302_object;
		var_291_int = var_303_int;
		func_901(var_303_int);
		var_301_float = var_296_float;
		var_304_float = 0; var_305_object = Obj(); var_306_float = 0; var_307_int = 0;
		var_295_object = var_305_object;
		var_296_float = var_306_float;
		var_308_int = 0; var_309_object = Obj(); var_310_int = 0;
		var_295_object = var_309_object;
		var_291_int = var_310_int;
		func_904(var_310_int);
		var_308_int = var_307_int;
		func_1993(var_304_float, var_305_object, var_306_float, var_307_int);
		var_304_float = var_297_float;
		var_357_int = 0;
		func_1390(var_357_int);
		ReportHit(var_0_bool, var_357_int, var_297_float, var_296_float);
		var_358_object = Obj(); var_359_float = 0;
		var_295_object = var_358_object;
		var_297_float = var_359_float;
		func_1392();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2663()
{
	var_74_bool = 0; var_75_bool = 0;
	ClearSubContainer((int)0);
	var_77_int = 0; var_78_int = 0;
	var_80_int = 0;
	func_2422(var_80_int);
	var_87_float = var_80_int * (int)30;
	var_78_int = (int)50 + var_87_float;
	func_2633((int)30, var_78_int);
	return 2;
}


func_2679()
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0;
	ClearSubContainer((int)0);
	irand(var_22_int, (int)2);
	var_26_bool = var_22_int == (int)0;
	if(var_26_bool != 0) {
		var_27_int = 0; var_28_string = "";
		func_2712(var_27_int, "bandage");
		AddItem(var_21_bool, var_27_int, (int)0, (int)1);
	}
	irand(var_22_int, (int)2);
	var_35_bool = var_22_int == (int)0;
	if(var_35_bool != 0) {
		var_36_int = 0; var_37_string = "";
		func_2712(var_36_int, "tourniquet");
		AddItem(var_21_bool, var_36_int, (int)0, (int)1);
	}
	return 4;
}


func_1151(var_0_bool, var_1_bool, var_261_bool, var_262_float)
{
	var_263_int = 0; var_264_bool = 0; var_265_int = 0; var_266_bool = 0;
	irand(var_265_int, var_1_bool);
	var_265_int = var_265_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_271_int = "attack_begin" + var_265_int;
	PlayAnimation("all", var_271_int);
	WaitForAnimEnd();
	func_1358(var_265_int, var_266_bool);
	var_287_bool = 0; var_288_object = Obj();
	var_288_object = var_0_bool;
	func_2098(var_287_bool, var_288_object);
	var_289_bool = var_287_bool == 0; //@nz
	if(var_289_bool != 0) {
		StopAsync();
		var_261_bool = 0;
		return 4;
	}
	var_290_float = 0; var_291_int = 0;
	var_262_float = var_290_float;
	var_265_int = var_291_int;
	func_1112(var_266_bool, var_290_float, var_291_int);
	var_362_int = "attack_middle" + var_265_int;
	HasAnimation(var_266_bool, "all", var_362_int);
	var_363_bool = var_266_bool;
	if(var_363_bool != 0) {
		var_366_int = "attack_middle" + var_265_int;
		PlayAnimation("all", var_366_int);
		WaitForAnimEnd();
		var_367_bool = 0; var_368_object = Obj();
		var_368_object = var_0_bool;
		func_2098(var_367_bool, var_368_object);
		var_369_bool = var_367_bool == 0; //@nz
		if(var_369_bool != 0) {
			StopAsync();
			var_261_bool = 0;
			return 4;
		}
		var_370_float = 0; var_371_int = 0;
		var_262_float = var_370_float;
		var_265_int = var_371_int;
		func_1112(var_266_bool, var_370_float, var_371_int);
	}
	SetAttackState((bool)0);
	var_375_int = "attack_end" + var_265_int;
	PlayAnimation("all", var_375_int);
	var_376_bool = 0; var_377_float = 0;
	func_1231(var_376_bool, (float)0.75);
	StopAsync();
	var_261_bool = 1;
	return 4;
}


func_2189(var_93_object)
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


func_2200(var_40_bool)
{
	var_41_bool = 0; var_42_bool = 0;
	IsLoaded(var_42_bool);
	var_42_bool = var_40_bool;
	return 2;
}


func_2712(var_27_int, var_28_string)
{
	var_29_int = 0; var_30_int = 0;
	GetInvItemByName(var_30_int, var_28_string);
	var_30_int = var_27_int;
	return 2;
}


func_667(var_0_bool, var_69_object)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0;
	var_0_bool = var_69_object;
	func_718(var_76_bool);
	GetDirection(var_74_cvector);
	var_84_cvector = CVector(0,0,0); var_85_object = Obj();
	var_85_object = var_0_bool;
	func_1966(var_84_cvector, var_85_object);
	var_84_cvector = var_75_cvector;
	var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	var_74_cvector = var_91_cvector;
	var_75_cvector = var_92_cvector;
	func_2400(var_90_float, var_91_cvector, var_92_cvector);
	var_115_bool = var_90_float < (int)0;
	if(var_115_bool != 0) {
		var_116_object = Obj();
		var_116_object = var_0_bool;
		func_2189(var_116_object);
		var_76_bool = 1;
	} else {
		Sleep((float)1.5, var_76_bool);
	}
	var_125_bool = var_76_bool;
	if(var_125_bool != 0) {
		var_126_object = Obj();
		var_126_object = var_0_bool;
		func_2189(var_126_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_2205(var_46_bool, var_47_object)
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
	func_2353(var_71_cvector, var_72_cvector);
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


func_2717(var_87_int)
{
	var_87_int = 3342;
	return 0;
}


func_2719(var_88_string)
{
	var_88_string = "ui/NPC_None.png";
	return 0;
}


func_2721(var_20_bool)
{
	var_20_bool = 0;
	return 0;
}


func_2723()
{
	var_18_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_2679();
	return 0;
}


func_2730(var_29_object, var_37_object)
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
	EMIT "GOTO 0xacf";
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
		func_2265(var_138_bool, var_139_object);
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
		func_2313();
	}
	return 2;
}


func_185()
{
	var_40_bool = 0;
	func_2200(var_40_bool);
	var_43_bool = var_40_bool == 0; //@nz
	if(var_43_bool != 0) {
		func_2598();
	}
	return 0;
}


func_1727(var_2_bool, var_28_string)
{
	var_29_bool = 0;
	func_2721(var_29_bool);
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
	func_2317(var_32_string);
	var_2_bool = var_28_string;
	return 0;
}


func_718(var_0_bool)
{
	var_77_object = Obj();
	var_77_object = var_0_bool;
	func_2335(var_77_object);
	return 0;
}


func_1231(var_376_bool, var_377_float)
{
	var_378_float = 0; var_379_bool = 0; var_380_float = 0; var_381_bool = 0;
	rand(var_380_float);
	var_382_bool = var_380_float < var_377_float;
	if(var_382_bool != 0) {

	Label_1236:
		IsAnimationPlaying(var_381_bool);
		var_383_bool = var_381_bool == 0; //@nz
		if(var_383_bool != 0) {
		} else {
			var_384_bool = 0;
			func_1295(var_381_bool, var_384_bool);
			if(var_384_bool != 0) {
				var_376_bool = 1;
				sync();
				goto Label_1236;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_1253;
	
Label_1253:
	var_376_bool = 0;
	return 4;
	
}


func_2768(var_62_bool)
{
	var_62_bool = 0;
	return 0;
}


func_2770(var_63_bool)
{
	var_63_bool = 1;
	return 0;
}


func_2773(var_21_bool, var_22_object, var_23_object)
{
	var_24_string = ""; var_25_bool = 0; var_26_string = ""; var_27_bool = 0;
	var_28_bool = 0; var_29_object = Obj(); var_30_string = "";
	var_23_object = var_29_object;
	func_1981(var_28_bool, var_29_object, "class");
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
	EMIT "GOTO 0xaed";
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
		func_1973(var_45_float, var_46_object);
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
	var_21_bool = 0;
	return 4;
}


func_2261()
{
	CameraSwitchToNormal();
	return 0;
}


func_2265(var_138_bool, var_139_object)
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


func_1255(var_0_bool, var_218_bool, var_219_float)
{
	var_220_bool = 0; var_221_cvector = CVector(0,0,0); var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_float = 0; var_225_bool = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_float = 0;
	
Label_1256:
	IsAnimationPlaying(var_225_bool);
	var_230_bool = var_225_bool == 0; //@nz
	if(var_230_bool != 0) {
	} else {
		var_231_bool = 0;
		func_1295(var_229_float, var_231_bool);
		if(var_231_bool != 0) {
			var_218_bool = 1;
			return 10;
		}
		var_256_bool = 0; var_257_object = Obj();
		var_257_object = var_0_bool;
		func_2098(var_256_bool, var_257_object);
		var_258_bool = var_256_bool == 0; //@nz
		if(var_258_bool != 0) {
			var_218_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_226_cvector);
		GetPFPosition(var_227_cvector);
		var_228_cvector = var_226_cvector - var_227_cvector;
		var_229_float = var_228_cvector | var_228_cvector;
		var_259_float = var_219_float * var_219_float;
		var_260_bool = var_229_float < var_259_float;
		if(var_260_bool != 0) {
			var_261_bool = 0; var_262_float = 0;
			var_219_float = var_262_float;
			func_1151(var_228_cvector, var_229_float, var_261_bool, var_262_float);
			var_218_bool = 1;
			sync();
			goto Label_1256;
		}
		return 10;
	}
	var_218_bool = 0;
	return 10;
	
}


func_2819()
{
	var_71_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	func_2663();
	return 0;
}


func_2313()
{
	CameraSwitchToNormal();
	return 0;
}


func_2317(var_32_string)
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


func_1295(var_0_bool, var_231_bool)
{
	var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_float = 0; var_236_float = 0; var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_float = 0; var_241_float = 0;
	var_242_bool = 0; var_243_object = Obj();
	var_243_object = var_0_bool;
	func_2098(var_242_bool, var_243_object);
	var_244_bool = var_242_bool == 0; //@nz
	if(var_244_bool != 0) {
		var_231_bool = 0;
		return 10;
	}
	var_245_bool = 0;
	func_1347(var_241_float, var_245_bool);
	if(var_245_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_237_cvector);
		GetPFPosition(var_238_cvector);
		var_239_cvector = var_237_cvector - var_238_cvector;
		var_240_float = var_239_cvector | var_239_cvector;
		@@@var_0_bool:GetAttackDistance(var_241_float);
		var_241_float = var_241_float + (int)50;
		var_247_float = var_241_float * var_241_float;
		var_248_bool = var_240_float <= var_247_float;
		if(var_248_bool != 0) {
			func_1328(var_241_float);
			var_231_bool = 1;
			return 10;
		}
	}
	var_231_bool = 0;
	return 10;
}


func_2335(var_77_object)
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


func_2346()
{
	var_20_bool = 0;
	func_2721(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1328(var_0_bool)
{
	var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_251_cvector);
	GetPFPosition(var_252_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_2353(var_71_cvector, var_72_cvector)
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


func_2363(var_340_float, var_341_float, var_342_float)
{
	var_345_bool = var_341_float < var_342_float;
	if(var_345_bool != 0) {
		var_341_float = var_340_float;
	} else {
		var_342_float = var_340_float;
	}
	return 0;
	
}


func_831()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2370(var_350_float, var_351_float, var_352_float, var_353_float)
{
	var_354_bool = var_351_float < var_352_float;
	if(var_354_bool != 0) {
		var_352_float = var_350_float;
		return 0;
	}
	var_355_bool = var_351_float > var_353_float;
	if(var_355_bool != 0) {
		var_353_float = var_350_float;
		return 0;
	}
	var_351_float = var_350_float;
	return 0;
}


func_1347(var_0_bool, var_210_bool)
{
	var_211_bool = 0; var_212_bool = 0;
	var_215_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_215_bool != 0) {
		@@@var_0_bool:IsAttacking(var_212_bool);
		var_212_bool = var_210_bool;
		return 2;
	}
	var_210_bool = 0;
	return 2;
}


func_2381(var_70_float, var_71_cvector, var_72_cvector)
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


func_333(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_462(var_16_string, var_17_bool);
	return 0;
}


func_1358(var_2_bool, var_4_object)
{
	var_272_float = 0; var_273_int = 0; var_274_float = 0; var_275_int = 0;
	var_276_bool = var_2_bool == 0; //@nz
	if(var_276_bool != 0) {
		return 4;
	}
	var_277_object = var_4_object;
	if(var_277_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_280_bool = var_4_object > (int)0;
		if(var_280_bool != 0) {
			return 4;
		}
	}
	rand(var_274_float);
	var_281_float = 0;
	func_1396(var_281_float);
	var_282_bool = var_274_float < var_281_float;
	if(var_282_bool != 0) {
		irand(var_275_int, var_2_bool);
		var_275_int = var_275_int + (int)1;
		var_285_int = "attack" + var_275_int;
		Speak(var_285_int);
		var_286_int = 0;
		func_1394(var_286_int);
		var_4_object = var_286_int;
	}
	return 4;
}


func_341(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_469(var_21_bool, var_22_int);
	return 0;
}


func_2390(var_79_float, var_80_cvector)
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


func_2400(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_68_cvector = var_71_cvector;
	var_69_cvector = var_72_cvector;
	func_2381(var_70_float, var_71_cvector, var_72_cvector);
	var_79_float = 0; var_80_cvector = CVector(0,0,0);
	var_68_cvector = var_80_cvector;
	func_2390(var_79_float, var_80_cvector);
	var_88_float = 0; var_89_cvector = CVector(0,0,0);
	var_69_cvector = var_89_cvector;
	func_2390(var_88_float, var_89_cvector);
	var_90_float = var_79_float * var_88_float;
	var_67_float = var_70_float / var_90_float;
	return 0;
}


func_358(var_2_bool, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_18_object = var_24_object;
	func_2098(var_23_bool, var_24_object);
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
	func_2490(var_61_object);
	var_60_int = var_22_int;
	var_64_bool = var_22_int > (int)0;
	if(var_64_bool != 0) {
		var_66_bool = var_22_int > (int)1;
		if(var_66_bool != 0) {
			func_341(var_22_int);
		}
		var_68_object = Obj();
		var_18_object = var_68_object;
		func_2499(var_68_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1390(var_357_int)
{
	var_357_int = 0;
	return 0;
}


func_1392()
{
	return 0;
}


func_2417()
{
0x971: PushEmpty(int, int)
0x972: @ GetVariable(Stack[-3], Stack[-1])
0x973: Pop(0)
0x974: Stack[-1] = Stack[-4]
0x975: Return(); Pop(2)
}


func_1394(var_286_int)
{
	var_286_int = 1;
	return 0;
}


func_1396(var_281_float)
{
	var_281_float = 0.5;
	return 0;
}


func_2422(var_80_int)
{
	var_81_float = 0; var_82_float = 0;
	GetGameTime(var_82_float);
	var_84_int = 0;
	var_84_int = var_82_float / (int)24;
	var_80_int = (int)1 + var_84_int;
	return 2;
}


func_1405(var_0_bool, var_1_bool, var_134_bool, var_135_object, var_136_float, var_137_float, var_138_bool, var_139_bool)
{
	var_142_bool = 0; var_143_bool = 0; var_144_object = Obj(); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_object = Obj(); var_150_bool = 0; var_151_bool = 0; var_152_object = Obj(); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0); var_156_float = 0; var_157_object = Obj();
	var_0_bool = false;
	var_1_bool = var_135_object;
	var_139_bool = var_151_bool;
	
Label_1409:
	var_158_bool = 0; var_159_object = Obj();
	var_135_object = var_159_object;
	func_1545(var_158_bool, var_159_object);
	var_162_bool = var_158_bool == 0; //@nz
	if(var_162_bool != 0) {
		var_134_bool = 0;
		return 16;
	}
	@@var_135_object:GetPosition(var_153_cvector);
	GetPosition(var_154_cvector);
	var_155_cvector = var_153_cvector - var_154_cvector;
	var_156_float = var_155_cvector | var_155_cvector;
	var_163_bool = 0;
	var_163_bool = 0;
	var_165_bool = var_137_float > (int)0;
	if(var_165_bool != 0) {
		var_166_float = var_137_float * var_137_float;
		var_167_bool = var_156_float > var_166_float;
		if(var_167_bool != 0) {
			var_163_bool = 1;
		}
	}
	if(var_163_bool != 0) {
		Stop();
		var_134_bool = 0;
		return 16;
	}
	var_168_float = var_136_float * var_136_float;
	var_169_bool = var_156_float > var_168_float;
	if(var_169_bool != 0) {
		@@var_135_object:GetPFPosition(var_153_cvector);
		FindPathTo(var_157_object, var_153_cvector);
		var_170_bool = var_157_object != 0; //@nn
		if(var_170_bool != 0) {
			var_157_object = var_152_object;
			var_157_object = 0;
		}
		var_171_bool = var_152_object != 0; //@nn
		if(var_171_bool != 0) {
			var_172_bool = var_151_bool;
			if(var_172_bool == 0) goto Label_1458;
			var_151_bool = 0;
			RotatePath(var_152_object, var_150_bool);
			var_173_bool = var_150_bool == 0; //@nz
			if(var_173_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_176_string = "";
				func_1552(var_176_string);
				var_177_string = "";
				func_1554(var_177_string);
				FollowPath(var_152_object, var_138_bool, var_150_bool, var_176_string, var_177_string);
				var_178_bool = var_150_bool == 0; //@nz
				if(var_178_bool != 0) {
					var_179_bool = var_0_bool;
					if(var_179_bool != 0) {
						var_152_object = 0;
						goto Label_1505;
					EMIT "GOTO 0x5c6";
					}
				} else {
					var_152_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_150_bool);
					var_182_bool = var_150_bool == 0; //@nz
					if(var_182_bool != 0) {
						var_183_bool = var_0_bool;
						if(var_183_bool != 0) {
							var_152_object = 0;
							goto Label_1505;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1505;
	}
			var_157_object = 0;
			goto Label_1503;

		Label_1503:
			var_152_object = 0;

		}
		goto Label_1409;
	}
Label_1505:
	var_134_bool = !var_0_bool;
	return 16;
	
}


func_893(var_77_object)
{
	var_83_object = Obj(); var_84_bool = 0; var_85_float = 0;
	var_77_object = var_83_object;
	func_907(var_78_object, var_79_int, var_80_int, var_81_bool, var_82_int, var_77_object, var_83_object, (bool)1, (float)180.0);
	return 0;
}


func_2431(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	TaskCall(1);
	func_22(var_19_object);
	TaskReturn();
	return 0;
}


func_901(var_301_float)
{
	var_301_float = 0.05000000074505806;
	return 0;
}


func_904(var_308_int)
{
	var_308_int = 0;
	return 0;
}


func_907(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_83_object, var_84_bool, var_85_float, var_140_bool)
{
	var_86_bool = 0; var_87_bool = 0; var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_float = 0; var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_float = 0;
	var_1_bool = 0;
	
Label_909:
	var_109_int = var_1_bool + (int)1;
	var_110_int = "attack_begin" + var_109_int;
	HasAnimation(var_96_bool, "all", var_110_int);
	var_111_bool = var_96_bool == 0; //@nz
	if(var_111_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_909;
	}
	var_2_bool = 0;
	
Label_923:
	var_114_int = var_2_bool + (int)1;
	var_115_int = "attack" + var_114_int;
	IsExisting3DSound(var_97_bool, var_115_int);
	var_116_bool = var_97_bool == 0; //@nz
	if(var_116_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_923;

	}
	var_4_object = 0;
	var_119_bool = IsFuncExist(var_83_object, "@GetAttackDistance", (int)1);
	if(var_119_bool != 0) {
		@@var_83_object:GetAttackDistance(var_98_float);
		var_98_float = var_98_float + (int)50;
	} else {
							var_85_float = var_98_float;

	}
	var_122_bool = var_98_float >= (int)150;
	if(var_122_bool != 0) {
		var_98_float = 150;
	}
	var_3_bool = false;
	var_0_bool = var_83_object;
	IsPlayerActor(var_0_bool, var_101_bool);
	var_123_bool = var_84_bool;
	if(var_123_bool != 0) {
		var_102_bool = 0;
	} else {
						var_102_bool = 1;

	}
Label_959:
	var_124_bool = 0;
	var_124_bool = 0;
	var_125_bool = 0; var_126_object = Obj();
	var_126_object = var_0_bool;
	func_2098(var_125_bool, var_126_object);
	if(var_125_bool != 0) {
		var_127_bool = var_3_bool == 0; //@nz
		if(var_127_bool != 0) {
			var_124_bool = 1;
		}
	}
	if(var_124_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_99_cvector);
		GetPFPosition(var_100_cvector);
		var_103_cvector = var_99_cvector - var_100_cvector;
		var_104_float = var_103_cvector | var_103_cvector;
		var_129_int = (float)400.0 + var_98_float;
		var_131_int = (float)400.0 + var_98_float;
		var_132_float = var_129_int * var_131_int;
		var_133_bool = var_104_float >= var_132_float;
		if(var_133_bool != 0) {
			var_134_bool = 0; var_135_object = Obj(); var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_bool = 0;
			var_135_object = var_0_bool;
			var_98_float = var_136_float;
			TaskCall(6);
			func_1405(var_140_bool, var_141_object, var_134_bool, var_135_object, var_136_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_187_bool = var_140_bool == 0; //@nz
			if(var_187_bool != 0) {
			} else {
		} else {
				var_193_float = var_85_float * var_85_float;
				var_194_bool = var_104_float >= var_193_float;
				if(var_194_bool != 0) {
					var_195_bool = (bool)0 == 0; //@nz
					if(var_195_bool != 0) {
						var_196_object = Obj();
						var_196_object = var_0_bool;
						func_2189(var_196_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_102_bool = 1;
					}
					rand(var_105_float);
					var_207_bool = 0;
					var_209_bool = var_105_float < (float)0.6000000238418579;
					if(var_209_bool != 1) {
						var_210_bool = 0;
						func_1347((bool)1, var_210_bool);
						if(var_210_bool != 1) {
							var_207_bool = 0;
						}
					}
					if(var_207_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_218_bool = 0; var_219_float = 0;
						var_85_float = var_219_float;
						func_1255(var_105_float, var_218_bool, var_219_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_388_bool = 0;
						func_1347(var_105_float, var_388_bool);
						var_389_bool = var_388_bool == 0; //@nz
						if(var_389_bool == 0) goto Label_1085;
						var_390_bool = 0; var_391_object = Obj();
						var_391_object = var_0_bool;
						func_2098(var_390_bool, var_391_object);
						var_392_bool = var_390_bool == 0; //@nz
						if(var_392_bool != 0) {
							goto Label_1095;
						}
						@@@var_0_bool:GetPFPosition(var_99_cvector);
						GetPFPosition(var_100_cvector);
						var_103_cvector = var_99_cvector - var_100_cvector;
						var_104_float = var_103_cvector | var_103_cvector;
						var_393_float = var_85_float * var_85_float;
						var_394_bool = var_104_float < var_393_float;
						if(var_394_bool == 0) goto Label_1085;
						var_395_bool = 0; var_396_float = 0;
						var_85_float = var_396_float;
						func_1151(var_104_float, var_105_float, var_395_bool, var_396_float);
						var_397_bool = var_395_bool == 0; //@nz
						if(var_397_bool == 0) goto Label_1085;
						goto Label_1095;
				}
					var_398_bool = 0; var_399_float = 0;
					var_85_float = var_399_float;
					func_1151(var_104_float, var_105_float, var_398_bool, var_399_float);
					var_400_bool = var_398_bool == 0; //@nz
					if(var_400_bool != 0) {
						goto Label_1095;
					}
					var_102_bool = 1;

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
	var_188_bool = var_3_bool;
	if(var_188_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_191_bool = var_101_bool;
	if(var_191_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_398(var_0_bool, var_1_bool)
{
	var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_float = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_51_float, (float)0.5);
	Sleep(var_51_float);
	
Label_406:
	var_59_bool = var_0_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_60_bool = var_1_bool == 0; //@nz
		if(var_60_bool != 0) {

		Label_410:
			GetPosition(var_53_cvector);
			GetCameraFarDistance(var_54_float);
			var_54_float = var_54_float * (float)2.5;
			GetRandomPFPointInCircle(var_52_cvector, var_53_cvector, var_54_float, var_55_bool);
			var_62_bool = var_55_bool;
			if(var_62_bool != 0) {
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
	FindShiftedPathTo(var_56_object, var_52_cvector);
	var_63_bool = var_56_object != 0; //@nn
	if(var_63_bool != 0) {
		RotatePath(var_56_object, var_57_bool);
		var_64_bool = var_57_bool;
		if(var_64_bool != 0) {
			var_65_bool = 0;
			func_476(var_65_bool);
			FollowPath(var_56_object, var_65_bool, var_57_bool);
			var_56_object = 0;
			var_66_bool = var_57_bool;
			if(var_66_bool != 0) {
				TaskCall(3);
				func_593();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_56_object = 0;
	goto Label_406;
	
}


func_2466(var_89_string, var_90_int)
{
	var_91_string = ""; var_92_string = "";
	var_93_int = var_90_int;
	if(var_93_int != 0) {
		"idle" = "idle" + var_90_int;
	}
	var_92_string = var_89_string;
	return 2;
}


func_1958(var_332_string, var_333_int)
{
	var_335_bool = var_333_int == (int)1;
	if(var_335_bool != 0) {
		var_332_string = "fire";
		return 0;
	}
	var_332_string = "phys";
	return 0;
}


func_2473(var_83_int)
{
	var_84_int = 0; var_85_bool = 0; var_86_int = 0; var_87_bool = 0;
	var_86_int = 0;
	
Label_2475:
	var_89_string = ""; var_90_int = 0;
	var_86_int = var_90_int;
	func_2466(var_89_string, var_90_int);
	HasAnimation(var_87_bool, "all", var_89_string);
	var_94_bool = var_87_bool == 0; //@nz
	if(var_94_bool != 0) {
	} else {
		var_86_int = var_86_int + (int)1;
		goto Label_2475;
	}
	var_86_int = var_83_int;
	return 4;
	
}


func_1966(var_61_cvector, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetPosition(var_65_cvector);
	@@var_62_object:GetPosition(var_66_cvector);
	var_61_cvector = var_66_cvector - var_65_cvector;
	return 4;
}


func_1973(var_45_float, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_50_cvector);
	@@var_46_object:GetPosition(var_51_cvector);
	var_52_cvector = var_51_cvector - var_50_cvector;
	var_45_float = var_52_cvector | var_52_cvector;
	return 6;
}


func_2490(var_60_int)
{
	var_62_bool = 0;
	func_2768(var_62_bool);
	if(var_62_bool != 0) {
		var_60_int = 2;
	} else {
		var_60_int = 0;
	}
	return 0;
	
}


func_1981(var_44_bool, var_45_object, var_46_string)
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


func_2499(var_68_object)
{
	var_69_object = Obj();
	var_68_object = var_69_object;
	TaskCall(4);
	func_667(var_70_object, var_69_object);
	TaskReturn();
	return 0;
}


func_1993(var_304_float, var_305_object, var_306_float, var_307_int)
{
	var_311_int = 0; var_312_string = ""; var_313_int = 0; var_314_float = 0; var_315_float = 0; var_316_float = 0; var_317_int = 0; var_318_string = ""; var_319_int = 0; var_320_float = 0; var_321_float = 0; var_322_float = 0;
	var_323_bool = 0; var_324_object = Obj(); var_325_string = "";
	var_305_object = var_324_object;
	func_1981(var_323_bool, var_324_object, "health");
	var_326_bool = var_323_bool == 0; //@nz
	if(var_326_bool != 0) {
		var_304_float = 0.0;
		return 12;
	}
	var_327_bool = 0; var_328_object = Obj(); var_329_string = "";
	var_305_object = var_328_object;
	func_1981(var_327_bool, var_328_object, "armor");
	var_330_bool = var_327_bool == 0; //@nz
	if(var_330_bool != 0) {
		var_317_int = 0;
	} else {
			@@var_305_object:GetProperty("armor", var_317_int);
	}
	var_332_string = ""; var_333_int = 0;
	var_307_int = var_333_int;
	func_1958(var_332_string, var_333_int);
	var_318_string = "armor_" + var_332_string;
	var_336_bool = 0; var_337_object = Obj(); var_338_string = "";
	var_305_object = var_337_object;
	var_318_string = var_338_string;
	func_1981(var_336_bool, var_337_object, var_338_string);
	var_339_bool = var_336_bool == 0; //@nz
	if(var_339_bool != 0) {
		var_319_int = 0;
	} else {
		@@var_305_object:GetProperty(var_318_string, var_319_int);

	}
	var_340_float = 0; var_341_float = 0; var_342_float = 0;
	var_343_int = var_317_int + var_319_int;
	var_341_float = var_343_int / (float)100.0;
	func_2363(var_340_float, var_341_float, (float)1);
	var_340_float = var_320_float;
	@@var_305_object:GetProperty("health", var_321_float);
	var_348_int = (int)1 - var_320_float;
	var_322_float = var_306_float * var_348_int;
	var_350_float = 0; var_351_float = 0; var_352_float = 0; var_353_float = 0;
	var_351_float = var_321_float - var_322_float;
	func_2370(var_350_float, var_351_float, (float)0, (float)1);
	@@var_305_object:SetProperty("health", var_350_float);
	var_322_float = var_304_float;
	return 12;
	
}


func_2507(var_58_int, var_59_object)
{
	var_60_bool = 0; var_61_object = Obj();
	var_59_object = var_61_object;
	func_2098(var_60_bool, var_61_object);
	if(var_60_bool != 0) {
		var_58_int = 2;
	} else {
		var_58_int = 0;
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


func_2517(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	TaskCall(5);
	func_893(var_77_object);
	TaskReturn();
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


func_476(var_65_bool)
{
	var_65_bool = 0;
	return 0;
}


func_2525(var_56_int, var_57_object)
{
	var_58_int = 0; var_59_object = Obj();
	var_57_object = var_59_object;
	func_2507(var_58_int, var_59_object);
	var_58_int = var_56_int;
	return 0;
}


func_2532(var_94_object)
{
	var_95_object = Obj();
	var_94_object = var_95_object;
	func_2517(var_95_object);
	return 0;
}


func_2538(var_20_int)
{
	var_20_int = 0;
	return 0;
}


func_2541()
{
	return 0;
}


func_2543(var_21_int, var_22_string, var_23_object)
{
	var_25_bool = var_22_string == "killme";
	if(var_25_bool != 0) {
		var_26_int = 0; var_27_object = Obj();
		var_23_object = var_27_object;
		func_2565(var_26_int, var_27_object);
		var_26_int = var_21_int;
		return 0;
	}
	var_21_int = 0;
	return 0;
}


func_1529(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2555(var_71_string, var_72_object)
{
	var_74_bool = var_71_string == "killme";
	if(var_74_bool != 0) {
		var_75_object = Obj();
		var_72_object = var_75_object;
		func_2583(var_75_object);
		return 0;
	}
	return 0;
}


