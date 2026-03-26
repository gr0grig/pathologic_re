// @IMPORTS: DoTrade/0,WaitForAnimEnd/0,PlayAnimation/2,StopAnimation/0,StopTrade/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,FollowPath/5,CreateDialog/1,IsOverrideActive/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetProperty/2,SignalDeath/1,GetVariable/2,WorkWithCorpse/1,SetRTEnvelope/2
// @STRINGS: W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |W:player|W:ui/NPC_None.png
// @GLOBALS: 0:bool:
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
// @EVENT_11: op=0x698 vars=int,int
// @STANDALONE_EVENT_16: op=0x888 vars=object,string
// @STANDALONE_EVENT_41: op=0x895 vars=object
// @STANDALONE_EVENT_22: op=0x89b vars=object,int,float,float
// @PE: 0x0,0xf,0x16,0x8e,0xa4,0xa6,0xa8,0x12e,0x134,0x13a,0x15d,0x1c7,0x34a,0x37d,0x385,0x388,0x570,0x5e3,0x5f5,0x600,0x609,0x653,0x688,0x698,0x6bd,0x7e4,0x818,0x84a,0x851,0x85c,0x865,0x86f,0x880,0x895,0x89b,0x8bb,0x8c4,0x8cc,0x8d6,0x8de,0x8e5,0x8eb,0x8ee,0x8f0,0x8f3,0x8f5,0x8f8,0x942,0x945

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
	func_2293(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_24_object = Obj();
		var_17_bool = var_24_object;
		func_2296(var_24_object);
	}
	return 2;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_2302();
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
	func_2293(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_333(var_19_int);
		}
		var_27_object = Obj();
		var_17_bool = var_27_object;
		func_2296(var_27_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2252(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_333(var_19_int);
		}
		var_61_object = Obj();
		var_17_bool = var_61_object;
		func_2262(var_61_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2370(var_23_object);
	if(var_21_bool != 0) {
		var_24_int = 0; var_25_object = Obj();
		var_17_string = var_25_object;
		func_2270(var_24_int, var_25_object);
		var_24_int = var_20_int;
		var_63_bool = var_20_int > (int)0;
		if(var_63_bool != 0) {
			var_65_bool = var_20_int > (int)1;
			if(var_65_bool != 0) {
				func_333(var_20_int);
			}
			var_67_object = Obj();
			var_17_string = var_67_object;
			func_2277(var_67_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2283(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_333(var_19_int);
		}
		var_17_bool = Obj();
		func_2286();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2288(var_23_object);
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
		func_2291();
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
	func_2302();
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_333(var_17_bool);
	var_17_bool = Obj();
	func_2197();
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
	func_2293(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_662();
		}
		var_26_object = Obj();
		var_17_bool = var_26_object;
		func_2296(var_26_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2252(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_662();
		}
		var_60_object = Obj();
		var_17_bool = var_60_object;
		func_2262(var_60_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2370(var_23_object);
	if(var_21_bool != 0) {
		var_24_int = 0; var_25_object = Obj();
		var_17_string = var_25_object;
		func_2270(var_24_int, var_25_object);
		var_24_int = var_20_int;
		var_63_bool = var_20_int > (int)0;
		if(var_63_bool != 0) {
			var_65_bool = var_20_int > (int)1;
			if(var_65_bool != 0) {
				func_662();
			}
			var_66_object = Obj();
			var_17_string = var_66_object;
			func_2277(var_66_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2283(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_662();
		}
		var_17_bool = Obj();
		func_2286();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2288(var_23_object);
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
		func_2291();
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_662();
	func_2302();
	return 0;
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2293(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_831();
		}
		var_28_object = Obj();
		var_17_bool = var_28_object;
		func_2296(var_28_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2252(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_57_bool = var_19_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_19_int > (int)1;
		if(var_59_bool != 0) {
			func_831();
		}
		var_62_object = Obj();
		var_17_bool = var_62_object;
		func_2262(var_62_object);
	}
	return 2;
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj();
	var_17_string = var_22_object;
	var_18_bool = var_23_object;
	func_2370(var_23_object);
	if(var_21_bool != 0) {
		var_24_int = 0; var_25_object = Obj();
		var_17_string = var_25_object;
		func_2270(var_24_int, var_25_object);
		var_24_int = var_20_int;
		var_63_bool = var_20_int > (int)0;
		if(var_63_bool != 0) {
			var_65_bool = var_20_int > (int)1;
			if(var_65_bool != 0) {
				func_831();
			}
			var_68_object = Obj();
			var_17_string = var_68_object;
			func_2277(var_68_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_2283(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_831();
		}
		var_17_bool = Obj();
		func_2286();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_string = ""; var_23_object = Obj();
	var_18_bool = var_22_string;
	var_17_string = var_23_object;
	func_2288(var_23_object);
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
		func_2291();
	}
	return 2;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_831();
	var_17_bool = Obj();
	func_2197();
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
	func_1857(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		func_831();
		return 4;
	}
	GetDirection(var_20_cvector);
	var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	var_62_object = var_0_bool;
	func_1733(var_61_cvector, var_62_object);
	var_61_cvector = var_21_cvector;
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	var_20_cvector = var_68_cvector;
	var_21_cvector = var_69_cvector;
	func_2159(var_67_float, var_68_cvector, var_69_cvector);
	var_92_bool = var_67_float < (float)0.4999999701976776;
	if(var_92_bool != 0) {
		var_93_object = Obj();
		var_93_object = var_0_bool;
		func_1948(var_93_object);
	}
	return 4;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831();
	func_2302();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1529(var_16_bool);
	func_2302();
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
	func_2197();
	return 0;
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int)
{
	if((int)1 != 0) {
		func_2105();
		var_22_bool = var_17_int == (int)15766;
		if(var_22_bool != 0) {
			var_23_string = "";
			func_1672(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)14535);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)15227, (int)-1, (int)16504);
			return 0;
		}
		var_3_bool = true;
		var_42_bool = 0;
		func_2324(var_42_bool);
		if(var_42_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x699";
	
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
	func_2176(var_18_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_1881(var_22_int, var_23_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	SensePlayerOnly((bool)1);
	func_2326();
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
	var_169_bool = var_0_bool;
	if(var_169_bool != 0) {
		goto Label_4;
	}
	return 0;
}
EMIT "Return(); Pop(0)";


func_1545(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_1857(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
	return 0;
}


func_1552(var_169_string)
{
	var_169_string = "walk";
	return 0;
}


func_1554(var_170_string)
{
	var_170_string = "run";
	return 0;
}


func_1556(var_0_bool, var_35_int, var_36_object)
{
	var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0;
	var_0_bool = var_36_object;
	var_46_bool = 0; var_47_object = Obj();
	var_36_object = var_47_object;
	func_1964(var_46_bool, var_47_object);
	var_86_bool = var_46_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	CreateDialog(var_42_object);
	var_87_int = 0;
	func_2320(var_87_int);
	@@var_42_object:SetNPCName(var_87_int);
	var_88_string = "";
	func_2322(var_88_string);
	@@var_42_object:SetPhoto(var_88_string);
	var_89_int = 0;
	func_2303(var_89_int);
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
	var_132_bool = var_45_bool == 0; //@nz
	if(var_132_bool != 0) {
		sync();
		@@var_42_object:IsDialogEnd(var_45_bool);
		goto Label_1601;
	}
	var_36_object = Obj();
	func_2020();
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
	func_2373();
	EventEnable(0);
	
Label_33:
	Hold();
	goto Label_33;
}
EMIT "Return(); Pop(0)";


func_2072()
{
	CameraSwitchToNormal();
	return 0;
}


func_2076(var_27_string)
{
	var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0;
	var_33_int = "playing " + var_27_string;
	Trace(var_33_int);
	lshGetAnimTimes(var_27_string, var_30_float, var_31_float);
	lshPlayAnimation(var_30_float, var_31_float);
	var_35_int = "start: " + var_30_float;
	Trace(var_35_int);
	var_37_int = "end: " + var_31_float;
	Trace(var_37_int);
	return 4;
}


func_2094(var_77_object)
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


func_2105()
{
	var_20_bool = 0;
	func_2324(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2112(var_71_cvector, var_72_cvector)
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


func_2122(var_333_float, var_334_float, var_335_float)
{
	var_338_bool = var_334_float < var_335_float;
	if(var_338_bool != 0) {
		var_334_float = var_333_float;
	} else {
		var_335_float = var_333_float;
	}
	return 0;
	
}


func_593()
{
	var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_bool = 0;
	WaitForAnimEnd();
	var_60_bool = 0;
	func_1959(var_60_bool);
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		return 14;
	}
	func_2218((int)0);
	var_62_int = var_53_int;
	var_54_int = 0;
	
Label_607:
	var_75_bool = 0;
	var_75_bool = 0;
	var_77_bool = var_54_int < (int)5;
	if(var_77_bool != 0) {
		var_78_bool = 0;
		func_1959(var_78_bool);
		if(var_78_bool != 0) {
			var_75_bool = 1;
		}
	}
	if(var_75_bool != 0) {
		irand(var_55_int, (int)3);
		var_81_bool = var_55_int == (int)0;
		if(var_81_bool != 0) {
			var_82_int = var_53_int;
			if(var_82_int == 0) goto Label_640;
			irand(var_56_int, var_53_int);
			var_84_string = ""; var_85_int = 0;
			var_56_int = var_85_int;
			func_2211(var_84_string, var_85_int);
			PlayAnimation("all", var_84_string);
			WaitForAnimEnd(var_57_bool);
			var_86_bool = var_57_bool == 0; //@nz
			if(var_86_bool != 0) {
			} else {
		} else {
				var_89_bool = var_55_int == (int)1;
				if(var_89_bool != 0) {
					rand(var_58_float, (int)4);
					var_92_int = var_58_float + (int)1;
					Sleep(var_92_int, var_59_bool);
					var_93_bool = var_59_bool == 0; //@nz
					if(var_93_bool != 0) {
						goto Label_661;
					}
					goto Label_658;
				}
				var_94_int = var_54_int;
				if(var_94_int == 0) goto Label_658;
				goto Label_661;
		}
		Label_658:
			var_54_int = var_54_int + (int)1;
			goto Label_607;

		}
	}
Label_661:
	return 14;
	
}


func_2129(var_343_float, var_344_float, var_345_float, var_346_float)
{
	var_347_bool = var_344_float < var_345_float;
	if(var_347_bool != 0) {
		var_345_float = var_343_float;
		return 0;
	}
	var_348_bool = var_344_float > var_346_float;
	if(var_348_bool != 0) {
		var_346_float = var_343_float;
		return 0;
	}
	var_344_float = var_343_float;
	return 0;
}


func_1619(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_98_object, var_99_object)
{
	var_0_bool = var_99_object;
	var_1_bool = var_98_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_105_string = "";
		func_1672(var_99_object, "Neutral");
		@@@var_0_bool:SetMessage((int)14535);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)15227, (int)-1, (int)16504);
		goto Label_1642;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x657";
	}
Label_1642:
	var_124_bool = 0;
	func_2324(var_124_bool);
	if(var_124_bool != 0) {

	Label_1646:
		lshWaitForAnimEnd();
		var_125_bool = var_3_bool;
		if(var_125_bool != 0) {
		} else {
			var_126_string = "";
			var_126_string = var_2_bool;
			func_2076(var_126_string);
			goto Label_1646;
	}
		PlayAnimation("all", "idle");

	Label_1661:
		WaitForAnimEnd();
		var_129_bool = var_3_bool;
		if(var_129_bool != 0) {
			goto Label_1671;
		}
		PlayAnimation("all", "idle");
		goto Label_1661;
	}
	goto Label_1671;
	
Label_1671:
	return 0;
	
}


func_1112(var_0_bool, var_283_float, var_284_int)
{
	var_285_object = Obj(); var_286_float = 0; var_287_float = 0; var_288_object = Obj(); var_289_float = 0; var_290_float = 0;
	var_292_float = var_283_float * (float)0.8999999761581421;
	GetVictim(var_292_float, var_288_object);
	ReportAttack(var_0_bool);
	var_293_bool = var_288_object == var_0_bool;
	if(var_293_bool != 0) {
		var_294_float = 0; var_295_object = Obj(); var_296_int = 0;
		var_288_object = var_295_object;
		var_284_int = var_296_int;
		func_901(var_296_int);
		var_294_float = var_289_float;
		var_297_float = 0; var_298_object = Obj(); var_299_float = 0; var_300_int = 0;
		var_288_object = var_298_object;
		var_289_float = var_299_float;
		var_301_int = 0; var_302_object = Obj(); var_303_int = 0;
		var_288_object = var_302_object;
		var_284_int = var_303_int;
		func_904(var_303_int);
		var_301_int = var_300_int;
		func_1752(var_297_float, var_298_object, var_299_float, var_300_int);
		var_297_float = var_290_float;
		var_350_int = 0;
		func_1390(var_350_int);
		ReportHit(var_0_bool, var_350_int, var_290_float, var_289_float);
		var_351_object = Obj(); var_352_float = 0;
		var_288_object = var_351_object;
		var_290_float = var_352_float;
		func_1392();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2140(var_70_float, var_71_cvector, var_72_cvector)
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


func_2149(var_79_float, var_80_cvector)
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


func_2159(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_68_cvector = var_71_cvector;
	var_69_cvector = var_72_cvector;
	func_2140(var_70_float, var_71_cvector, var_72_cvector);
	var_79_float = 0; var_80_cvector = CVector(0,0,0);
	var_68_cvector = var_80_cvector;
	func_2149(var_79_float, var_80_cvector);
	var_88_float = 0; var_89_cvector = CVector(0,0,0);
	var_69_cvector = var_89_cvector;
	func_2149(var_88_float, var_89_cvector);
	var_90_float = var_79_float * var_88_float;
	var_67_float = var_70_float / var_90_float;
	return 0;
}


func_1151(var_0_bool, var_1_bool, var_254_bool, var_255_float)
{
	var_256_int = 0; var_257_bool = 0; var_258_int = 0; var_259_bool = 0;
	irand(var_258_int, var_1_bool);
	var_258_int = var_258_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_264_int = "attack_begin" + var_258_int;
	PlayAnimation("all", var_264_int);
	WaitForAnimEnd();
	func_1358(var_258_int, var_259_bool);
	var_280_bool = 0; var_281_object = Obj();
	var_281_object = var_0_bool;
	func_1857(var_280_bool, var_281_object);
	var_282_bool = var_280_bool == 0; //@nz
	if(var_282_bool != 0) {
		StopAsync();
		var_254_bool = 0;
		return 4;
	}
	var_283_float = 0; var_284_int = 0;
	var_255_float = var_283_float;
	var_258_int = var_284_int;
	func_1112(var_259_bool, var_283_float, var_284_int);
	var_355_int = "attack_middle" + var_258_int;
	HasAnimation(var_259_bool, "all", var_355_int);
	var_356_bool = var_259_bool;
	if(var_356_bool != 0) {
		var_359_int = "attack_middle" + var_258_int;
		PlayAnimation("all", var_359_int);
		WaitForAnimEnd();
		var_360_bool = 0; var_361_object = Obj();
		var_361_object = var_0_bool;
		func_1857(var_360_bool, var_361_object);
		var_362_bool = var_360_bool == 0; //@nz
		if(var_362_bool != 0) {
			StopAsync();
			var_254_bool = 0;
			return 4;
		}
		var_363_float = 0; var_364_int = 0;
		var_255_float = var_363_float;
		var_258_int = var_364_int;
		func_1112(var_259_bool, var_363_float, var_364_int);
	}
	SetAttackState((bool)0);
	var_368_int = "attack_end" + var_258_int;
	PlayAnimation("all", var_368_int);
	var_369_bool = 0; var_370_float = 0;
	func_1231(var_369_bool, (float)0.75);
	StopAsync();
	var_254_bool = 1;
	return 4;
}


func_2176(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	TaskCall(1);
	func_22(var_19_object);
	TaskReturn();
	return 0;
}


func_1672(var_2_bool, var_23_string)
{
	var_24_bool = 0;
	func_2324(var_24_bool);
	var_25_bool = var_24_bool == 0; //@nz
	if(var_25_bool != 0) {
		return 0;
	}
	var_26_bool = var_23_string == var_2_bool;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_string = "";
	var_23_string = var_27_string;
	func_2076(var_27_string);
	var_2_bool = var_23_string;
	return 0;
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
	func_1733(var_84_cvector, var_85_object);
	var_84_cvector = var_75_cvector;
	var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	var_74_cvector = var_91_cvector;
	var_75_cvector = var_92_cvector;
	func_2159(var_90_float, var_91_cvector, var_92_cvector);
	var_115_bool = var_90_float < (int)0;
	if(var_115_bool != 0) {
		var_116_object = Obj();
		var_116_object = var_0_bool;
		func_1948(var_116_object);
		var_76_bool = 1;
	} else {
		Sleep((float)1.5, var_76_bool);
	}
	var_125_bool = var_76_bool;
	if(var_125_bool != 0) {
		var_126_object = Obj();
		var_126_object = var_0_bool;
		func_1948(var_126_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_2211(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = "";
	var_72_int = var_69_int;
	if(var_72_int != 0) {
		"idle" = "idle" + var_69_int;
	}
	var_71_string = var_68_string;
	return 2;
}


func_2218(var_62_int)
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_bool = 0;
	var_65_int = 0;
	
Label_2220:
	var_68_string = ""; var_69_int = 0;
	var_65_int = var_69_int;
	func_2211(var_68_string, var_69_int);
	HasAnimation(var_66_bool, "all", var_68_string);
	var_73_bool = var_66_bool == 0; //@nz
	if(var_73_bool != 0) {
	} else {
		var_65_int = var_65_int + (int)1;
		goto Label_2220;
	}
	var_65_int = var_62_int;
	return 4;
	
}


func_185()
{
	var_19_bool = 0;
	func_1959(var_19_bool);
	var_22_bool = var_19_bool == 0; //@nz
	if(var_22_bool != 0) {
		func_2302();
	}
	return 0;
}


func_2235(var_60_int)
{
	var_62_bool = 0;
	func_2368(var_62_bool);
	if(var_62_bool != 0) {
		var_60_int = 2;
	} else {
		var_60_int = 0;
	}
	return 0;
	
}


func_1725(var_325_string, var_326_int)
{
	var_328_bool = var_326_int == (int)1;
	if(var_328_bool != 0) {
		var_325_string = "fire";
		return 0;
	}
	var_325_string = "phys";
	return 0;
}


func_2244(var_68_object)
{
	var_69_object = Obj();
	var_68_object = var_69_object;
	TaskCall(4);
	func_667(var_70_object, var_69_object);
	TaskReturn();
	return 0;
}


func_1733(var_61_cvector, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetPosition(var_65_cvector);
	@@var_62_object:GetPosition(var_66_cvector);
	var_61_cvector = var_66_cvector - var_65_cvector;
	return 4;
}


func_2252(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_1857(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		var_26_int = 2;
	} else {
		var_26_int = 0;
	}
	return 0;
	
}


func_1740(var_44_bool, var_45_object, var_46_string)
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


func_718(var_0_bool)
{
	var_77_object = Obj();
	var_77_object = var_0_bool;
	func_2094(var_77_object);
	return 0;
}


func_1231(var_369_bool, var_370_float)
{
	var_371_float = 0; var_372_bool = 0; var_373_float = 0; var_374_bool = 0;
	rand(var_373_float);
	var_375_bool = var_373_float < var_370_float;
	if(var_375_bool != 0) {

	Label_1236:
		IsAnimationPlaying(var_374_bool);
		var_376_bool = var_374_bool == 0; //@nz
		if(var_376_bool != 0) {
		} else {
			var_377_bool = 0;
			func_1295(var_374_bool, var_377_bool);
			if(var_377_bool != 0) {
				var_369_bool = 1;
				sync();
				goto Label_1236;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_1253;
	
Label_1253:
	var_369_bool = 0;
	return 4;
	
}


func_2262(var_69_object)
{
	var_70_object = Obj();
	var_69_object = var_70_object;
	TaskCall(5);
	func_893(var_70_object);
	TaskReturn();
	return 0;
}


func_1752(var_297_float, var_298_object, var_299_float, var_300_int)
{
	var_304_int = 0; var_305_string = ""; var_306_int = 0; var_307_float = 0; var_308_float = 0; var_309_float = 0; var_310_int = 0; var_311_string = ""; var_312_int = 0; var_313_float = 0; var_314_float = 0; var_315_float = 0;
	var_316_bool = 0; var_317_object = Obj(); var_318_string = "";
	var_298_object = var_317_object;
	func_1740(var_316_bool, var_317_object, "health");
	var_319_bool = var_316_bool == 0; //@nz
	if(var_319_bool != 0) {
		var_297_float = 0.0;
		return 12;
	}
	var_320_bool = 0; var_321_object = Obj(); var_322_string = "";
	var_298_object = var_321_object;
	func_1740(var_320_bool, var_321_object, "armor");
	var_323_bool = var_320_bool == 0; //@nz
	if(var_323_bool != 0) {
		var_310_int = 0;
	} else {
			@@var_298_object:GetProperty("armor", var_310_int);
	}
	var_325_string = ""; var_326_int = 0;
	var_300_int = var_326_int;
	func_1725(var_325_string, var_326_int);
	var_311_string = "armor_" + var_325_string;
	var_329_bool = 0; var_330_object = Obj(); var_331_string = "";
	var_298_object = var_330_object;
	var_311_string = var_331_string;
	func_1740(var_329_bool, var_330_object, var_331_string);
	var_332_bool = var_329_bool == 0; //@nz
	if(var_332_bool != 0) {
		var_312_int = 0;
	} else {
		@@var_298_object:GetProperty(var_311_string, var_312_int);

	}
	var_333_float = 0; var_334_float = 0; var_335_float = 0;
	var_336_int = var_310_int + var_312_int;
	var_334_float = var_336_int / (float)100.0;
	func_2122(var_333_float, var_334_float, (float)1);
	var_333_float = var_313_float;
	@@var_298_object:GetProperty("health", var_314_float);
	var_341_int = (int)1 - var_313_float;
	var_315_float = var_299_float * var_341_int;
	var_343_float = 0; var_344_float = 0; var_345_float = 0; var_346_float = 0;
	var_344_float = var_314_float - var_315_float;
	func_2129(var_343_float, var_344_float, (float)0, (float)1);
	@@var_298_object:SetProperty("health", var_343_float);
	var_315_float = var_297_float;
	return 12;
	
}


func_2270(var_24_int, var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	func_2252(var_26_int, var_27_object);
	var_26_int = var_24_int;
	return 0;
}


func_2277(var_68_object)
{
	var_69_object = Obj();
	var_68_object = var_69_object;
	func_2262(var_69_object);
	return 0;
}


func_1255(var_0_bool, var_211_bool, var_212_float)
{
	var_213_bool = 0; var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_float = 0; var_218_bool = 0; var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_float = 0;
	
Label_1256:
	IsAnimationPlaying(var_218_bool);
	var_223_bool = var_218_bool == 0; //@nz
	if(var_223_bool != 0) {
	} else {
		var_224_bool = 0;
		func_1295(var_222_float, var_224_bool);
		if(var_224_bool != 0) {
			var_211_bool = 1;
			return 10;
		}
		var_249_bool = 0; var_250_object = Obj();
		var_250_object = var_0_bool;
		func_1857(var_249_bool, var_250_object);
		var_251_bool = var_249_bool == 0; //@nz
		if(var_251_bool != 0) {
			var_211_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_219_cvector);
		GetPFPosition(var_220_cvector);
		var_221_cvector = var_219_cvector - var_220_cvector;
		var_222_float = var_221_cvector | var_221_cvector;
		var_252_float = var_212_float * var_212_float;
		var_253_bool = var_222_float < var_252_float;
		if(var_253_bool != 0) {
			var_254_bool = 0; var_255_float = 0;
			var_212_float = var_255_float;
			func_1151(var_221_cvector, var_222_float, var_254_bool, var_255_float);
			var_211_bool = 1;
			sync();
			goto Label_1256;
		}
		return 10;
	}
	var_211_bool = 0;
	return 10;
	
}


func_2283(var_20_int)
{
	var_20_int = 0;
	return 0;
}


func_2286()
{
	return 0;
}


func_2288(var_21_int)
{
	var_21_int = 0;
	return 0;
}


func_2291()
{
	return 0;
}


func_2293(var_20_int)
{
	var_20_int = 2;
	return 0;
}


func_2296(var_28_object)
{
	var_29_object = Obj();
	var_28_object = var_29_object;
	func_2330(var_28_object, var_29_object);
	return 0;
}


func_2302()
{
	return 0;
}


func_2303(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("player", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0x90e";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
	return 2;
}


func_1295(var_0_bool, var_224_bool)
{
	var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_float = 0; var_234_float = 0;
	var_235_bool = 0; var_236_object = Obj();
	var_236_object = var_0_bool;
	func_1857(var_235_bool, var_236_object);
	var_237_bool = var_235_bool == 0; //@nz
	if(var_237_bool != 0) {
		var_224_bool = 0;
		return 10;
	}
	var_238_bool = 0;
	func_1347(var_234_float, var_238_bool);
	if(var_238_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_230_cvector);
		GetPFPosition(var_231_cvector);
		var_232_cvector = var_230_cvector - var_231_cvector;
		var_233_float = var_232_cvector | var_232_cvector;
		@@@var_0_bool:GetAttackDistance(var_234_float);
		var_234_float = var_234_float + (int)50;
		var_240_float = var_234_float * var_234_float;
		var_241_bool = var_233_float <= var_240_float;
		if(var_241_bool != 0) {
			func_1328(var_234_float);
			var_224_bool = 1;
			return 10;
		}
	}
	var_224_bool = 0;
	return 10;
}


func_2320(var_87_int)
{
	var_87_int = 3348;
	return 0;
}


func_2322(var_88_string)
{
	var_88_string = "ui/NPC_None.png";
	return 0;
}


func_2324(var_20_bool)
{
	var_20_bool = 0;
	return 0;
}


func_2326()
{
	var_18_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_1816(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	@@var_38_object:IsDead(var_40_bool);
	var_40_bool = var_37_bool;
	return 2;
}


func_2330(var_29_object, var_37_object)
{
	var_30_bool = 0; var_31_bool = 0;
	var_32_bool = GlobalVars[0];
	if(var_32_bool != 0) {
		IsOverrideActive(var_31_bool);
		var_33_bool = var_31_bool == 0; //@nz
		if(var_33_bool != 0) {
			WorkWithCorpse(var_29_object);
		}
		return 2;
	EMIT "GOTO 0x93f";
	}
	var_35_int = 0; var_36_object = Obj();
	var_29_object = var_36_object;
	TaskCall(7);
	func_1556(var_37_object, var_35_int, var_36_object);
	TaskReturn();
	var_134_bool = (int)1000 == var_37_object;
	if(var_134_bool != 0) {
		var_135_bool = 0; var_136_object = Obj();
		var_29_object = var_136_object;
		func_2024(var_135_bool, var_136_object);
		var_164_bool = var_135_bool == 0; //@nz
		if(var_164_bool != 0) {
			return 2;
		}
		var_165_object = Obj();
		var_29_object = var_165_object;
		TaskCall(0);
		func_0(var_165_object);
		TaskReturn();
		var_29_object = Obj();
		func_2072();
	}
	return 2;
}


func_1821(var_26_bool, var_27_object)
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
		func_1816(var_37_bool, var_38_object);
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


func_1328(var_0_bool)
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_244_cvector);
	GetPFPosition(var_245_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
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


func_2368(var_62_bool)
{
	var_62_bool = 0;
	return 0;
}


func_1857(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_23_object = var_27_object;
	func_1821(var_26_bool, var_27_object);
	var_43_bool = var_26_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_23_object = var_45_object;
	func_1740(var_44_bool, var_45_object, "noaccess");
	var_53_bool = var_44_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	@@var_23_object:GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == (int)0;
	return 2;
}


func_2370(var_21_bool)
{
	var_21_bool = 0;
	return 0;
}


func_1347(var_0_bool, var_203_bool)
{
	var_204_bool = 0; var_205_bool = 0;
	var_208_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_208_bool != 0) {
		@@@var_0_bool:IsAttacking(var_205_bool);
		var_205_bool = var_203_bool;
		return 2;
	}
	var_203_bool = 0;
	return 2;
}


func_2373()
{
	var_71_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
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
	var_265_float = 0; var_266_int = 0; var_267_float = 0; var_268_int = 0;
	var_269_bool = var_2_bool == 0; //@nz
	if(var_269_bool != 0) {
		return 4;
	}
	var_270_object = var_4_object;
	if(var_270_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_273_bool = var_4_object > (int)0;
		if(var_273_bool != 0) {
			return 4;
		}
	}
	rand(var_267_float);
	var_274_float = 0;
	func_1396(var_274_float);
	var_275_bool = var_267_float < var_274_float;
	if(var_275_bool != 0) {
		irand(var_268_int, var_2_bool);
		var_268_int = var_268_int + (int)1;
		var_278_int = "attack" + var_268_int;
		Speak(var_278_int);
		var_279_int = 0;
		func_1394(var_279_int);
		var_4_object = var_279_int;
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


func_1881(var_21_object, var_22_int)
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


func_358(var_2_bool, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_18_object = var_24_object;
	func_1857(var_23_bool, var_24_object);
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
	func_2235(var_61_object);
	var_60_int = var_22_int;
	var_64_bool = var_22_int > (int)0;
	if(var_64_bool != 0) {
		var_66_bool = var_22_int > (int)1;
		if(var_66_bool != 0) {
			func_341(var_22_int);
		}
		var_68_object = Obj();
		var_18_object = var_68_object;
		func_2244(var_68_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1390(var_350_int)
{
	var_350_int = 0;
	return 0;
}


func_1392()
{
	return 0;
}


func_1394(var_279_int)
{
	var_279_int = 1;
	return 0;
}


func_1396(var_274_float)
{
	var_274_float = 0.5;
	return 0;
}


func_1405(var_0_bool, var_1_bool, var_127_bool, var_128_object, var_129_float, var_130_float, var_131_bool, var_132_bool)
{
	var_135_bool = 0; var_136_bool = 0; var_137_object = Obj(); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_object = Obj(); var_143_bool = 0; var_144_bool = 0; var_145_object = Obj(); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_object = Obj();
	var_0_bool = false;
	var_1_bool = var_128_object;
	var_132_bool = var_144_bool;
	
Label_1409:
	var_151_bool = 0; var_152_object = Obj();
	var_128_object = var_152_object;
	func_1545(var_151_bool, var_152_object);
	var_155_bool = var_151_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_127_bool = 0;
		return 16;
	}
	@@var_128_object:GetPosition(var_146_cvector);
	GetPosition(var_147_cvector);
	var_148_cvector = var_146_cvector - var_147_cvector;
	var_149_float = var_148_cvector | var_148_cvector;
	var_156_bool = 0;
	var_156_bool = 0;
	var_158_bool = var_130_float > (int)0;
	if(var_158_bool != 0) {
		var_159_float = var_130_float * var_130_float;
		var_160_bool = var_149_float > var_159_float;
		if(var_160_bool != 0) {
			var_156_bool = 1;
		}
	}
	if(var_156_bool != 0) {
		Stop();
		var_127_bool = 0;
		return 16;
	}
	var_161_float = var_129_float * var_129_float;
	var_162_bool = var_149_float > var_161_float;
	if(var_162_bool != 0) {
		@@var_128_object:GetPFPosition(var_146_cvector);
		FindPathTo(var_150_object, var_146_cvector);
		var_163_bool = var_150_object != 0; //@nn
		if(var_163_bool != 0) {
			var_150_object = var_145_object;
			var_150_object = 0;
		}
		var_164_bool = var_145_object != 0; //@nn
		if(var_164_bool != 0) {
			var_165_bool = var_144_bool;
			if(var_165_bool == 0) goto Label_1458;
			var_144_bool = 0;
			RotatePath(var_145_object, var_143_bool);
			var_166_bool = var_143_bool == 0; //@nz
			if(var_166_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_169_string = "";
				func_1552(var_169_string);
				var_170_string = "";
				func_1554(var_170_string);
				FollowPath(var_145_object, var_131_bool, var_143_bool, var_169_string, var_170_string);
				var_171_bool = var_143_bool == 0; //@nz
				if(var_171_bool != 0) {
					var_172_bool = var_0_bool;
					if(var_172_bool != 0) {
						var_145_object = 0;
						goto Label_1505;
					EMIT "GOTO 0x5c6";
					}
				} else {
					var_145_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_143_bool);
					var_175_bool = var_143_bool == 0; //@nz
					if(var_175_bool != 0) {
						var_176_bool = var_0_bool;
						if(var_176_bool != 0) {
							var_145_object = 0;
							goto Label_1505;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1505;
	}
			var_150_object = 0;
			goto Label_1503;

		Label_1503:
			var_145_object = 0;

		}
		goto Label_1409;
	}
Label_1505:
	var_127_bool = !var_0_bool;
	return 16;
	
}


func_893(var_70_object)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_float = 0;
	var_70_object = var_76_object;
	func_907(var_71_object, var_72_int, var_73_int, var_74_bool, var_75_int, var_70_object, var_76_object, (bool)1, (float)180.0);
	return 0;
}


func_901(var_294_float)
{
	var_294_float = 0.029999999329447746;
	return 0;
}


func_904(var_301_int)
{
	var_301_int = 0;
	return 0;
}


func_907(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_76_object, var_77_bool, var_78_float, var_133_bool)
{
	var_79_bool = 0; var_80_bool = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_float = 0; var_89_bool = 0; var_90_bool = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_float = 0;
	var_1_bool = 0;
	
Label_909:
	var_102_int = var_1_bool + (int)1;
	var_103_int = "attack_begin" + var_102_int;
	HasAnimation(var_89_bool, "all", var_103_int);
	var_104_bool = var_89_bool == 0; //@nz
	if(var_104_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_909;
	}
	var_2_bool = 0;
	
Label_923:
	var_107_int = var_2_bool + (int)1;
	var_108_int = "attack" + var_107_int;
	IsExisting3DSound(var_90_bool, var_108_int);
	var_109_bool = var_90_bool == 0; //@nz
	if(var_109_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_923;

	}
	var_4_object = 0;
	var_112_bool = IsFuncExist(var_76_object, "@GetAttackDistance", (int)1);
	if(var_112_bool != 0) {
		@@var_76_object:GetAttackDistance(var_91_float);
		var_91_float = var_91_float + (int)50;
	} else {
							var_78_float = var_91_float;

	}
	var_115_bool = var_91_float >= (int)150;
	if(var_115_bool != 0) {
		var_91_float = 150;
	}
	var_3_bool = false;
	var_0_bool = var_76_object;
	IsPlayerActor(var_0_bool, var_94_bool);
	var_116_bool = var_77_bool;
	if(var_116_bool != 0) {
		var_95_bool = 0;
	} else {
						var_95_bool = 1;

	}
Label_959:
	var_117_bool = 0;
	var_117_bool = 0;
	var_118_bool = 0; var_119_object = Obj();
	var_119_object = var_0_bool;
	func_1857(var_118_bool, var_119_object);
	if(var_118_bool != 0) {
		var_120_bool = var_3_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_117_bool = 1;
		}
	}
	if(var_117_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_92_cvector);
		GetPFPosition(var_93_cvector);
		var_96_cvector = var_92_cvector - var_93_cvector;
		var_97_float = var_96_cvector | var_96_cvector;
		var_122_int = (float)400.0 + var_91_float;
		var_124_int = (float)400.0 + var_91_float;
		var_125_float = var_122_int * var_124_int;
		var_126_bool = var_97_float >= var_125_float;
		if(var_126_bool != 0) {
			var_127_bool = 0; var_128_object = Obj(); var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_bool = 0;
			var_128_object = var_0_bool;
			var_91_float = var_129_float;
			TaskCall(6);
			func_1405(var_133_bool, var_134_object, var_127_bool, var_128_object, var_129_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_180_bool = var_133_bool == 0; //@nz
			if(var_180_bool != 0) {
			} else {
		} else {
				var_186_float = var_78_float * var_78_float;
				var_187_bool = var_97_float >= var_186_float;
				if(var_187_bool != 0) {
					var_188_bool = (bool)0 == 0; //@nz
					if(var_188_bool != 0) {
						var_189_object = Obj();
						var_189_object = var_0_bool;
						func_1948(var_189_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_95_bool = 1;
					}
					rand(var_98_float);
					var_200_bool = 0;
					var_202_bool = var_98_float < (float)0.6000000238418579;
					if(var_202_bool != 1) {
						var_203_bool = 0;
						func_1347((bool)1, var_203_bool);
						if(var_203_bool != 1) {
							var_200_bool = 0;
						}
					}
					if(var_200_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_211_bool = 0; var_212_float = 0;
						var_78_float = var_212_float;
						func_1255(var_98_float, var_211_bool, var_212_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_381_bool = 0;
						func_1347(var_98_float, var_381_bool);
						var_382_bool = var_381_bool == 0; //@nz
						if(var_382_bool == 0) goto Label_1085;
						var_383_bool = 0; var_384_object = Obj();
						var_384_object = var_0_bool;
						func_1857(var_383_bool, var_384_object);
						var_385_bool = var_383_bool == 0; //@nz
						if(var_385_bool != 0) {
							goto Label_1095;
						}
						@@@var_0_bool:GetPFPosition(var_92_cvector);
						GetPFPosition(var_93_cvector);
						var_96_cvector = var_92_cvector - var_93_cvector;
						var_97_float = var_96_cvector | var_96_cvector;
						var_386_float = var_78_float * var_78_float;
						var_387_bool = var_97_float < var_386_float;
						if(var_387_bool == 0) goto Label_1085;
						var_388_bool = 0; var_389_float = 0;
						var_78_float = var_389_float;
						func_1151(var_97_float, var_98_float, var_388_bool, var_389_float);
						var_390_bool = var_388_bool == 0; //@nz
						if(var_390_bool == 0) goto Label_1085;
						goto Label_1095;
				}
					var_391_bool = 0; var_392_float = 0;
					var_78_float = var_392_float;
					func_1151(var_97_float, var_98_float, var_391_bool, var_392_float);
					var_393_bool = var_391_bool == 0; //@nz
					if(var_393_bool != 0) {
						goto Label_1095;
					}
					var_95_bool = 1;

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
	var_181_bool = var_3_bool;
	if(var_181_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_184_bool = var_94_bool;
	if(var_184_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_398(var_0_bool, var_1_bool)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_30_float, (float)0.5);
	Sleep(var_30_float);
	
Label_406:
	var_38_bool = var_0_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_39_bool = var_1_bool == 0; //@nz
		if(var_39_bool != 0) {

		Label_410:
			GetPosition(var_32_cvector);
			GetCameraFarDistance(var_33_float);
			var_33_float = var_33_float * (float)2.5;
			GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_33_float, var_34_bool);
			var_41_bool = var_34_bool;
			if(var_41_bool != 0) {
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
	FindShiftedPathTo(var_35_object, var_31_cvector);
	var_42_bool = var_35_object != 0; //@nn
	if(var_42_bool != 0) {
		RotatePath(var_35_object, var_36_bool);
		var_43_bool = var_36_bool;
		if(var_43_bool != 0) {
			var_44_bool = 0;
			func_476(var_44_bool);
			FollowPath(var_35_object, var_44_bool, var_36_bool);
			var_35_object = 0;
			var_45_bool = var_36_bool;
			if(var_45_bool != 0) {
				TaskCall(3);
				func_593();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_35_object = 0;
	goto Label_406;
	
}


func_1948(var_93_object)
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


func_1959(var_19_bool)
{
	var_20_bool = 0; var_21_bool = 0;
	IsLoaded(var_21_bool);
	var_21_bool = var_19_bool;
	return 2;
}


func_1964(var_46_bool, var_47_object)
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
	func_2112(var_71_cvector, var_72_cvector);
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


func_476(var_44_bool)
{
	var_44_bool = 0;
	return 0;
}


func_2020()
{
	CameraSwitchToNormal();
	return 0;
}


func_2024(var_135_bool, var_136_object)
{
	var_137_float = 0; var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_float = 0; var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_bool = 0;
	@@var_136_object:GetPosition(var_146_cvector);
	@@var_136_object:GetEyesHeight(var_145_float);
	var_153_float = GetByIndex(var_146_cvector, 1);
	var_153_float = var_153_float + var_145_float;
	SetByIndex(var_146_cvector, 1) = var_153_float;
	GetPosition(var_147_cvector);
	GetEyesHeight(var_145_float);
	var_154_float = GetByIndex(var_147_cvector, 1);
	var_154_float = var_154_float + var_145_float;
	SetByIndex(var_147_cvector, 1) = var_154_float;
	var_148_cvector = var_146_cvector - var_147_cvector;
	var_155_float = GetByIndex(var_148_cvector, 1);
	SetByIndex(var_148_cvector, 1) = (float)0;
	var_156_int = var_148_cvector | var_148_cvector;
	var_157_float = sqrt(var_156_int);
	var_148_cvector = var_148_cvector / var_157_float;
	var_149_cvector = -var_148_cvector;
	var_159_float = var_148_cvector * (int)70;
	var_150_cvector = var_159_float - CVector(0.0, 10.0, 0.0);
	var_151_cvector = var_147_cvector + var_150_cvector;
	IsOverrideActive(var_152_bool);
	var_161_bool = var_152_bool;
	if(var_161_bool != 0) {
		var_135_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_151_cvector, var_149_cvector);
	var_162_float = GetByIndex(var_150_cvector, 0);
	var_163_float = GetByIndex(var_150_cvector, 2);
	Rotate(var_162_float, var_163_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_135_bool = 1;
	return 16;
}


func_1529(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


