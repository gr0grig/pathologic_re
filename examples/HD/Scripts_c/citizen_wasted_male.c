// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:killme|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:bool:
// @RUN_OP: 0x1e6
// @RUN_TASK: 3
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc6 vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0x159 vars=object
// @EVENT_6: op=0x167 vars=
// @EVENT_22: op=0x1e0 vars=object,int,float,float
// @EVENT_16: op=0x1e2 vars=object,string
// @EVENT_41: op=0x1e4 vars=object
// @TASK_3: vars=bool,bool,bool params=0
// @EVENT_0: op=0x1fe vars=object
// @EVENT_17: op=0x212 vars=object
// @EVENT_30: op=0x22a vars=object,object,bool
// @EVENT_40: op=0x246 vars=object
// @EVENT_42: op=0x25a vars=object,string
// @EVENT_26: op=0x27f vars=string
// @EVENT_1: op=0x28d vars=object
// @EVENT_3: op=0x2a0 vars=object
// @EVENT_7: op=0x2a6 vars=int
// @EVENT_6: op=0x2b2 vars=
// @EVENT_41: op=0x2c9 vars=object
// @EVENT_10: op=0x33a vars=object
// @EVENT_28: op=0x33e vars=
// @TASK_4: vars= params=0
// @EVENT_0: op=0x357 vars=object
// @EVENT_17: op=0x36b vars=object
// @EVENT_30: op=0x383 vars=object,object,bool
// @EVENT_40: op=0x39f vars=object
// @EVENT_42: op=0x3b3 vars=object,string
// @EVENT_26: op=0x3d8 vars=string
// @EVENT_6: op=0x3e6 vars=
// @EVENT_1: op=0x3ed vars=object
// @TASK_5: vars=object params=1
// @EVENT_0: op=0x489 vars=object
// @EVENT_17: op=0x49d vars=object
// @EVENT_30: op=0x4b5 vars=object,object,bool
// @EVENT_40: op=0x4d1 vars=object
// @EVENT_42: op=0x4e5 vars=object,string
// @EVENT_26: op=0x50a vars=string
// @EVENT_41: op=0x523 vars=object
// @EVENT_7: op=0x52c vars=int
// @EVENT_6: op=0x54f vars=
// @EVENT_1: op=0x556 vars=object
// @TASK_6: vars=object,int,int,bool,float,int params=1
// @TASK_7: vars=bool,object,bool params=6
// @EVENT_6: op=0x808 vars=
// @EVENT_7: op=0x840 vars=int
// @EVENT_1: op=0x85b vars=object
// @EVENT_2: op=0x86a vars=object
// @EVENT_10: op=0x8f0 vars=object
// @EVENT_41: op=0x8fb vars=object
// @STANDALONE_EVENT_16: op=0xcd0 vars=object,string
// @STANDALONE_EVENT_41: op=0xcdd vars=object
// @STANDALONE_EVENT_22: op=0xce3 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xceb vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0xb0,0xc6,0x14a,0x167,0x1c6,0x1e0,0x1e2,0x1e4,0x27f,0x28d,0x2a0,0x2a6,0x2b2,0x2c9,0x33a,0x3d8,0x3e6,0x3ed,0x50a,0x523,0x54f,0x556,0x564,0x56c,0x56f,0x800,0x808,0x840,0x85b,0x86a,0x8de,0x8f0,0x8fb,0x904,0x90f,0xb16,0xb1d,0xb28,0xb31,0xb3b,0xb7f,0xb8b,0xb97,0xba1,0xbbf,0xcc8,0xcdd,0xce3,0xceb,0xcf5,0xd15,0xd45,0xd4b,0xd8d,0xd96,0xd9e,0xda8,0xdfb,0xe02,0xe25,0xe28,0xe2a,0xe36,0xe40,0xe52,0xe58,0xe5b,0xe62,0xe65,0xe76,0xe7c,0xe7f,0xe81,0xe84,0xeaa,0xead,0xeb7

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	if((int)1 != 0) {
		func_2774();
		var_23_bool = var_18_object == (int)45795;
		if(var_23_bool != 0) {
			var_24_bool = 0; var_25_object = Obj();
			var_25_object = var_1_object;
			func_2955(var_25_object);
			if(var_24_bool != 0) {
				var_32_string = "";
				func_176(var_19_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543337);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)543338, (int)45797, (int)45796);
				@@@var_0_object:AddReply((int)543340, (int)-1, (int)45798);
				return 0;
			}
			var_56_string = "";
			func_176(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538128);
			@@@var_0_object:ClearReplies();
			var_58_bool = 0;
			var_58_bool = 0;
			var_59_bool = 0; var_60_object = Obj();
			var_60_object = var_1_object;
			func_2943(var_60_object);
			if(var_59_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				var_66_object = var_1_object;
				func_2967(var_65_bool, var_66_object);
				if(var_65_bool != 0) {
					var_58_bool = 1;
				}
			}
			if(var_58_bool != 0) {
				@@@var_0_object:AddReply((int)538129, (int)40001, (int)40000);
			}
			@@@var_0_object:AddReply((int)538133, (int)-1, (int)40004);
			@@@var_0_object:AddReply((int)538134, (int)-1, (int)40005);
			return 0;
		}
		var_86_bool = var_18_object == (int)40001;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_176(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538130);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538131, (int)-1, (int)40002);
			@@@var_0_object:AddReply((int)538132, (int)-1, (int)40003);
			return 0;
		}
		var_96_bool = var_18_object == (int)45797;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_176(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543339);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543341, (int)-1, (int)45799);
			@@@var_0_object:AddReply((int)543342, (int)-1, (int)45800);
			return 0;
		}
		var_3_string = true;
		var_105_bool = 0;
		func_3726(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc7";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3672(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_25_object = Obj();
		var_18_bool = var_25_object;
		func_3675(var_25_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3681();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3672(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_697(var_20_int);
		}
		var_28_object = Obj();
		var_18_bool = var_28_object;
		func_3675(var_28_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_3403(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_3486(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_697(var_20_int);
		}
		var_71_object = Obj();
		var_18_bool = var_71_object;
		func_3496(var_71_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_3757(var_23_bool, var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_85_int = 0; var_86_object = Obj(); var_87_bool = 0;
		var_18_bool = var_86_object;
		var_20_bool = var_87_bool;
		func_3579(var_86_object, var_87_bool);
		var_85_int = var_22_int;
		var_119_bool = var_22_int > (int)0;
		if(var_119_bool != 0) {
			var_121_bool = var_22_int > (int)1;
			if(var_121_bool != 0) {
				func_697(var_22_int);
			}
			var_123_object = Obj();
			var_18_bool = var_123_object;
			func_3586(var_123_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3621(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_697(var_20_int);
		}
		var_18_bool = Obj();
		func_3624();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_3317(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_697(var_21_int);
		var_51_object = Obj(); var_52_string = "";
		var_18_object = var_51_object;
		var_19_bool = var_52_string;
		func_3349(var_51_object, var_52_string);
	} else {
		var_127_int = 0; var_128_string = ""; var_129_object = Obj();
		var_19_bool = var_128_string;
		var_18_object = var_129_object;
		func_3626(var_127_int, var_128_string, var_129_object);
		var_127_int = var_21_int;
		var_172_bool = var_21_int > (int)0;
		if(var_172_bool == 0) goto Label_638;
		var_174_bool = var_21_int > (int)1;
		if(var_174_bool != 0) {
			func_697(var_21_int);
		}
		var_175_string = ""; var_176_object = Obj();
		var_19_bool = var_175_string;
		var_18_object = var_176_object;
		func_3638(var_175_string, var_176_object);
	}
Label_638:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_3416(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_697(var_18_bool);
		var_29_string = "";
		var_18_bool = var_29_string;
		func_3432(var_29_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_3374(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_697(var_18_bool);
		var_32_object = Obj();
		var_18_bool = var_32_object;
		func_3397(var_32_object);
	} else {
		var_34_object = Obj();
		var_18_bool = var_34_object;
		func_722(var_18_bool, var_34_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj();
	var_18_bool = var_19_object;
	func_722(var_18_bool, var_19_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_20_bool = var_18_bool != (int)110;
	if(var_20_bool != 0) {
		return 0;
	}
	var_2_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_697(var_17_bool);
	func_3681();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_697(var_18_bool);
	var_18_bool = Obj();
	func_3293();
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool);
	return 0;
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3672(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_1100();
		}
		var_27_object = Obj();
		var_18_bool = var_27_object;
		func_3675(var_27_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_3403(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_3486(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_1100();
		}
		var_70_object = Obj();
		var_18_bool = var_70_object;
		func_3496(var_70_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_3757(var_23_bool, var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_85_int = 0; var_86_object = Obj(); var_87_bool = 0;
		var_18_bool = var_86_object;
		var_20_bool = var_87_bool;
		func_3579(var_86_object, var_87_bool);
		var_85_int = var_22_int;
		var_119_bool = var_22_int > (int)0;
		if(var_119_bool != 0) {
			var_121_bool = var_22_int > (int)1;
			if(var_121_bool != 0) {
				func_1100();
			}
			var_122_object = Obj();
			var_18_bool = var_122_object;
			func_3586(var_122_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3621(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_1100();
		}
		var_18_bool = Obj();
		func_3624();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_3317(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_1100();
		var_50_object = Obj(); var_51_string = "";
		var_18_object = var_50_object;
		var_19_bool = var_51_string;
		func_3349(var_50_object, var_51_string);
	} else {
		var_126_int = 0; var_127_string = ""; var_128_object = Obj();
		var_19_bool = var_127_string;
		var_18_object = var_128_object;
		func_3626(var_126_int, var_127_string, var_128_object);
		var_126_int = var_21_int;
		var_171_bool = var_21_int > (int)0;
		if(var_171_bool == 0) goto Label_983;
		var_173_bool = var_21_int > (int)1;
		if(var_173_bool != 0) {
			func_1100();
		}
		var_174_string = ""; var_175_object = Obj();
		var_19_bool = var_174_string;
		var_18_object = var_175_object;
		func_3638(var_174_string, var_175_object);
	}
Label_983:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_3416(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_1100();
		var_28_string = "";
		var_18_bool = var_28_string;
		func_3432(var_28_string);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1100();
	func_3681();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_3374(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_1100();
		var_31_object = Obj();
		var_18_bool = var_31_object;
		func_3397(var_31_object);
	}
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3672(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_1304();
		}
		var_29_object = Obj();
		var_18_bool = var_29_object;
		func_3675(var_29_object);
	}
	return 2;
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_3403(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_3486(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_1304();
		}
		var_72_object = Obj();
		var_18_bool = var_72_object;
		func_3496(var_72_object);
	}
	return 2;
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_3757(var_23_bool, var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_85_int = 0; var_86_object = Obj(); var_87_bool = 0;
		var_18_bool = var_86_object;
		var_20_bool = var_87_bool;
		func_3579(var_86_object, var_87_bool);
		var_85_int = var_22_int;
		var_119_bool = var_22_int > (int)0;
		if(var_119_bool != 0) {
			var_121_bool = var_22_int > (int)1;
			if(var_121_bool != 0) {
				func_1304();
			}
			var_124_object = Obj();
			var_18_bool = var_124_object;
			func_3586(var_124_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3621(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_1304();
		}
		var_18_bool = Obj();
		func_3624();
	}
	return 2;
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_3317(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_1304();
		var_52_object = Obj(); var_53_string = "";
		var_18_object = var_52_object;
		var_19_bool = var_53_string;
		func_3349(var_52_object, var_53_string);
	} else {
		var_128_int = 0; var_129_string = ""; var_130_object = Obj();
		var_19_bool = var_129_string;
		var_18_object = var_130_object;
		func_3626(var_128_int, var_129_string, var_130_object);
		var_128_int = var_21_int;
		var_173_bool = var_21_int > (int)0;
		if(var_173_bool == 0) goto Label_1289;
		var_175_bool = var_21_int > (int)1;
		if(var_175_bool != 0) {
			func_1304();
		}
		var_176_string = ""; var_177_object = Obj();
		var_19_bool = var_176_string;
		var_18_object = var_177_object;
		func_3638(var_176_string, var_177_object);
	}
Label_1289:
	return 2;
	
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_3416(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_1304();
		var_30_string = "";
		var_18_bool = var_30_string;
		func_3432(var_30_string);
	}
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_1304();
	var_18_bool = Obj();
	func_3293();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_24_bool = var_18_bool != (int)111;
	if(var_24_bool != 0) {
		return 4;
	}
	var_25_bool = 0; var_26_object = Obj();
	var_26_object = var_0_object;
	func_2479(var_25_bool, var_26_object);
	var_59_bool = var_25_bool == 0; //@nz
	if(var_59_bool != 0) {
		func_1304();
		return 4;
	}
	GetDirection(var_21_cvector);
	var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	var_63_object = var_0_object;
	func_2333(var_62_cvector, var_63_object);
	var_62_cvector = var_22_cvector;
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_21_cvector = var_69_cvector;
	var_22_cvector = var_70_cvector;
	func_2875(var_68_float, var_69_cvector, var_70_cvector);
	var_93_bool = var_68_float < (float)0.4999999701976776;
	if(var_93_bool != 0) {
		var_94_object = Obj();
		var_94_object = var_0_object;
		func_2629(var_94_object);
	}
	return 4;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1304();
	func_3681();
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_3374(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_1304();
		var_33_object = Obj();
		var_18_bool = var_33_object;
		func_3397(var_33_object);
	}
	return 0;
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2126(var_17_bool);
	func_3681();
	return 0;
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_20_bool = var_18_int == (int)1;
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_21_object = var_1_object;
		func_2923(var_21_object);
	} else {
		var_26_int = 0;
		var_18_int = var_26_int;
		func_2270(var_17_bool, var_18_int, var_26_int);
	}
	return 0;
	
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = var_1_object == var_18_object;
	if(var_20_bool != 0) {
		var_21_bool = var_2_object == 0; //@nz
		if(var_21_bool != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		var_2_object = true;
		var_22_object = Obj();
		var_18_object = var_22_object;
		func_2763(var_22_object);
	}
	return 0;
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = var_1_object == var_18_object;
	if(var_20_bool != 0) {
		var_21_object = var_2_object;
		if(var_21_object != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object);
	return 0;
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_2126(var_18_object);
	var_18_object = Obj();
	func_3293();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0;
	var_23_bool = var_19_string == "health";
	if(var_23_bool != 0) {
		GetProperty("health", var_21_float);
		var_26_bool = var_21_float <= (int)0;
		if(var_26_bool != 0) {
			SignalDeath(var_18_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_3272(var_19_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0;
	var_18_object = var_22_object;
	var_19_int = var_23_int;
	var_20_float = var_24_float;
	func_2547(var_22_object, var_23_int, var_24_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	var_18_object = var_24_object;
	var_19_int = var_25_int;
	var_20_float = var_26_float;
	var_22_cvector = var_27_cvector;
	var_23_cvector = var_28_cvector;
	func_2615(var_26_float, var_27_cvector, var_28_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	SensePlayerOnly((bool)1);
	func_3728();
	func_501();
	
Label_495:
	var_2_object = false;
	func_762(var_16_object, var_17_bool);
	goto Label_495;
}
EMIT "Return(); Pop(0)";


func_2048()
{
	return 0;
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_2645(var_53_bool, var_54_object, (float)70.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_3720(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_3718(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_3722(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_3724(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_2984(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_object = Obj(); var_115_object = Obj();
	var_43_object = var_114_object;
	var_49_object = var_115_object;
	TaskCall(1);
	func_74(var_116_object, var_117_object, var_118_string, var_119_bool, var_114_object, var_115_object);
	TaskReturn();
	@@var_49_object:IsDialogEnd(var_52_bool);
	
Label_56:
	var_200_bool = var_52_bool == 0; //@nz
	if(var_200_bool != 0) {
		sync();
		@@var_49_object:IsDialogEnd(var_52_bool);
		goto Label_56;
	}
	var_43_object = Obj();
	func_2714();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3586(var_124_object)
{
	var_125_object = Obj();
	var_124_object = var_125_object;
	func_3496(var_125_object);
	return 0;
}


func_2050(var_601_bool)
{
	var_601_bool = 1;
	return 0;
}


func_2052(var_493_int)
{
	var_493_int = 1;
	return 0;
}


func_2054(var_488_float)
{
	var_488_float = 0.5;
	return 0;
}


func_3592(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0;
	var_29_object = var_35_object;
	var_36_bool = !var_31_bool;
	func_3504(var_34_bool, var_35_object, var_36_bool);
	var_72_bool = var_34_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	CanSee(var_33_bool, var_28_object);
	var_73_bool = 0;
	var_73_bool = 1;
	var_74_bool = var_33_bool;
	if(var_74_bool != 1) {
		var_75_float = 0; var_76_object = Obj();
		var_28_object = var_76_object;
		func_2340(var_75_float, var_76_object);
		var_83_float = var_30_float * var_30_float;
		var_84_bool = var_75_float <= var_83_float;
		if(var_84_bool != 1) {
			var_73_bool = 0;
		}
	}
	if(var_73_bool != 0) {
		var_27_bool = 1;
		return 2;
	}
	var_27_bool = 0;
	return 2;
}


func_2063(var_2_object, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool)
{
	var_269_bool = 0; var_270_bool = 0; var_271_bool = 0; var_272_bool = 0;
	var_273_object = Obj();
	var_261_object = var_273_object;
	func_2923(var_273_object);
	SetTimer((int)1, (int)5);
	CanSee(var_271_bool, var_261_object);
	var_276_bool = var_271_bool;
	if(var_276_bool != 0) {
		var_2_object = true;
		var_277_object = Obj();
		var_261_object = var_277_object;
		func_2763(var_277_object);
	} else {
		var_2_object = false;
	}
	var_278_bool = 0; var_279_object = Obj();
	var_261_object = var_279_object;
	func_2348(var_278_bool, var_279_object);
	if(var_278_bool != 0) {
		var_282_object = Obj();
		func_2822(var_282_object);
		SendPlayerEnemy(var_261_object, var_282_object);
	}
	var_283_bool = 0; var_284_object = Obj(); var_285_float = 0; var_286_float = 0; var_287_bool = 0; var_288_bool = 0;
	var_261_object = var_284_object;
	var_262_float = var_285_float;
	var_263_float = var_286_float;
	var_264_bool = var_287_bool;
	var_265_bool = var_288_bool;
	func_2168(var_271_bool, var_272_bool, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool);
	var_283_bool = var_272_bool;
	var_334_object = var_2_object;
	if(var_334_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_272_bool = var_260_bool;
	return 4;
	
}


func_3092(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0;
	var_116_bool = var_111_bool;
	if(var_116_bool != 0) {
		var_117_int = 0; var_118_int = 0;
		var_120_int = 0;
		func_2914(var_120_int);
		var_127_float = var_120_int * (int)100;
		var_118_int = (int)100 + var_127_float;
		func_3020((int)0, var_118_int);
		irand(var_114_int, (int)8);
		var_147_bool = var_114_int == (int)0;
		if(var_147_bool != 0) {
			var_148_int = 0; var_149_string = "";
			func_3267(var_148_int, "lemon");
			AddItem(var_115_bool, var_148_int, (int)0, (int)1);
		} else {
			var_153_bool = var_114_int == (int)1;
			if(var_153_bool != 0) {
				var_154_int = 0; var_155_string = "";
				func_3267(var_154_int, "rusk");
				AddItem(var_115_bool, var_154_int, (int)0, (int)1);
				goto Label_3180;
			}
			var_159_bool = var_114_int == (int)2;
			if(var_159_bool != 0) {
				var_160_int = 0; var_161_string = "";
				func_3267(var_160_int, "hook");
				AddItem(var_115_bool, var_160_int, (int)0, (int)1);
				goto Label_3180;
			}
			var_165_bool = var_114_int == (int)4;
			if(var_165_bool != 0) {
				var_166_int = 0; var_167_string = "";
				func_3267(var_166_int, "syringe");
				AddItem(var_115_bool, var_166_int, (int)0, (int)1);
				goto Label_3180;
			}
			var_171_bool = var_114_int == (int)5;
			if(var_171_bool != 0) {
				var_172_int = 0; var_173_string = "";
				func_3267(var_172_int, "watch");
				AddItem(var_115_bool, var_172_int, (int)0, (int)1);
				goto Label_3180;
			}
			var_177_bool = var_114_int == (int)6;
			if(var_177_bool == 0) goto Label_3180;
			var_178_int = 0; var_179_string = "";
			func_3267(var_178_int, "razor");
			AddItem(var_115_bool, var_178_int, (int)0, (int)1);
	}
		var_182_int = 0; var_183_int = 0;
		var_185_int = 0;
		func_2914(var_185_int);
		var_187_float = var_185_int * (int)50;
		var_183_int = (int)50 + var_187_float;
		func_3020((int)0, var_183_int);
		irand(var_114_int, (int)7);
		var_190_bool = var_114_int == (int)0;
		if(var_190_bool != 0) {
			var_191_int = 0; var_192_string = "";
			func_3267(var_191_int, "beads");
			AddItem(var_115_bool, var_191_int, (int)0, (int)1);
			goto Label_3266;
		}
		var_196_bool = var_114_int == (int)1;
		if(var_196_bool != 0) {
			var_197_int = 0; var_198_string = "";
			func_3267(var_197_int, "bracelet");
			AddItem(var_115_bool, var_197_int, (int)0, (int)1);
			goto Label_3266;
		}
		var_202_bool = var_114_int == (int)2;
		if(var_202_bool != 0) {
			var_203_int = 0; var_204_string = "";
			func_3267(var_203_int, "ear_ring");
			AddItem(var_115_bool, var_203_int, (int)0, (int)1);
			goto Label_3266;
		}
		var_208_bool = var_114_int == (int)3;
		if(var_208_bool != 0) {
			var_209_int = 0; var_210_string = "";
			func_3267(var_209_int, "gold_ring");
			AddItem(var_115_bool, var_209_int, (int)0, (int)1);
			goto Label_3266;
		}
		var_214_bool = var_114_int == (int)4;
		if(var_214_bool != 0) {
			var_215_int = 0; var_216_string = "";
			func_3267(var_215_int, "silver_ring");
			AddItem(var_115_bool, var_215_int, (int)0, (int)1);
			goto Label_3266;
		}
		var_220_bool = var_114_int == (int)5;
		if(var_220_bool == 0) goto Label_3266;
		var_221_int = 0; var_222_string = "";
		func_3267(var_221_int, "flower");
		AddItem(var_115_bool, var_221_int, (int)0, (int)1);
	}
Label_3180:
	goto Label_3266;
	
Label_3266:
	return 4;
	
}


func_3621(var_21_int)
{
	var_21_int = 0;
	return 0;
}


func_2043()
{
	var_372_string = "";
	func_2781("attack_stay");
	return 0;
}


func_3624()
{
	return 0;
}


func_3626(var_128_int, var_129_string, var_130_object)
{
	var_132_bool = var_129_string == "killme";
	if(var_132_bool != 0) {
		var_133_int = 0; var_134_object = Obj();
		var_130_object = var_134_object;
		func_3648(var_133_int, var_134_object);
		var_133_int = var_128_int;
		return 0;
	}
	var_128_int = 0;
	return 0;
}


func_3638(var_176_string, var_177_object)
{
	var_179_bool = var_176_string == "killme";
	if(var_179_bool != 0) {
		var_180_object = Obj();
		var_177_object = var_180_object;
		func_3666(var_180_object);
		return 0;
	}
	return 0;
}


func_2615(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetScene(var_31_object);
	AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	var_35_object = Obj();
	var_24_object = var_35_object;
	func_2503(var_35_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3648(var_133_int, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj();
	var_134_object = var_136_object;
	func_2479(var_135_bool, var_136_object);
	var_169_bool = var_135_bool == 0; //@nz
	if(var_169_bool != 0) {
		var_133_int = 0;
		return 0;
	}
	var_170_bool = 0; var_171_object = Obj();
	var_134_object = var_171_object;
	func_3754(var_171_object);
	if(var_170_bool != 0) {
		var_133_int = 2;
	} else {
		var_133_int = 0;
	}
	return 0;
	
}


func_2629(var_94_object)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	@@var_94_object:GetPosition(var_98_cvector);
	GetPosition(var_99_cvector);
	var_100_cvector = var_98_cvector - var_99_cvector;
	var_101_float = GetByIndex(var_100_cvector, 0);
	var_102_float = GetByIndex(var_100_cvector, 2);
	RotateAsync(var_101_float, var_102_float);
	return 6;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_114_object, var_115_object)
{
	var_0_object = var_115_object;
	var_1_object = var_114_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_121_bool = 0; var_122_object = Obj();
		var_122_object = var_1_object;
		func_2955(var_122_object);
		if(var_121_bool != 0) {
			var_129_string = "";
			func_176(var_115_object, "Neutral");
			@@@var_0_object:SetMessage((int)543337);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543338, (int)45797, (int)45796);
			@@@var_0_object:AddReply((int)543340, (int)-1, (int)45798);
		} else {
				var_171_string = "";
				func_176(var_115_object, "Neutral");
				@@@var_0_object:SetMessage((int)538128);
				@@@var_0_object:ClearReplies();
				var_173_bool = 0;
				var_173_bool = 0;
				var_174_bool = 0; var_175_object = Obj();
				var_175_object = var_1_object;
				func_2943(var_175_object);
				if(var_174_bool != 0) {
					var_180_bool = 0; var_181_object = Obj();
					var_181_object = var_1_object;
					func_2967(var_180_bool, var_181_object);
					if(var_180_bool != 0) {
						var_173_bool = 1;
					}
				}
				if(var_173_bool != 0) {
					@@@var_0_object:AddReply((int)538129, (int)40001, (int)40000);
				}
				@@@var_0_object:AddReply((int)538133, (int)-1, (int)40004);
				@@@var_0_object:AddReply((int)538134, (int)-1, (int)40005);
				goto Label_146;
		}
	}
Label_146:
	var_153_bool = 0;
	func_3726(var_153_bool);
	if(var_153_bool != 0) {

	Label_150:
		lshWaitForAnimEnd();
		var_154_string = var_3_string;
		if(var_154_string != 0) {
		} else {
			var_155_string = "";
			var_155_string = var_2_object;
			func_2732(var_155_string);
			goto Label_150;
	}
		PlayAnimation("all", "idle");

	Label_165:
		WaitForAnimEnd();
		var_168_string = var_3_string;
		if(var_168_string != 0) {
			goto Label_175;
		}
		PlayAnimation("all", "idle");
		goto Label_165;

	}
	goto Label_175;
	
Label_175:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_1098(var_92_bool)
{
	var_92_bool = 1;
	return 0;
}


func_1100()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2126(var_2_object)
{
	KillTimer((int)1);
	var_20_object = var_2_object;
	if(var_20_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_2292(var_18_object);
	return 0;
}


func_2640(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_1105(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0;
	var_0_object = var_61_object;
	func_1156(var_68_bool);
	GetDirection(var_66_cvector);
	var_76_cvector = CVector(0,0,0); var_77_object = Obj();
	var_77_object = var_0_object;
	func_2333(var_76_cvector, var_77_object);
	var_76_cvector = var_67_cvector;
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	var_66_cvector = var_83_cvector;
	var_67_cvector = var_84_cvector;
	func_2875(var_82_float, var_83_cvector, var_84_cvector);
	var_107_bool = var_82_float < (int)0;
	if(var_107_bool != 0) {
		var_108_object = Obj();
		var_108_object = var_0_object;
		func_2629(var_108_object);
		var_68_bool = 1;
	} else {
		Sleep((float)1.5, var_68_bool);
	}
	var_117_bool = var_68_bool;
	if(var_117_bool != 0) {
		var_118_object = Obj();
		var_118_object = var_0_object;
		func_2629(var_118_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_3666(var_180_object)
{
	var_181_object = Obj();
	var_180_object = var_181_object;
	func_3496(var_181_object);
	return 0;
}


func_2645(var_53_bool, var_54_object, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0;
	@@var_54_object:GetPosition(var_66_cvector);
	@@var_54_object:GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	var_74_float = var_74_float + var_65_float;
	SetByIndex(var_66_cvector, 1) = var_74_float;
	GetPosition(var_67_cvector);
	GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_65_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_int = var_68_cvector | var_68_cvector;
	var_78_float = sqrt(var_77_int);
	var_68_cvector = var_68_cvector / var_78_float;
	var_69_cvector = -var_68_cvector;
	var_79_float = var_68_cvector * var_55_float;
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_69_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2828(var_80_cvector, var_81_cvector);
	var_89_float = var_80_cvector * (int)25;
	var_90_int = var_79_float + var_89_float;
	var_70_cvector = var_90_int - CVector(0.0, 10.0, 0.0);
	var_71_cvector = var_67_cvector + var_70_cvector;
	IsOverrideActive(var_72_bool);
	var_92_bool = var_72_bool;
	if(var_92_bool != 0) {
		var_53_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_71_cvector, var_69_cvector, (bool)1);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_94_float, var_95_float);
	var_96_bool = 0;
	func_3726(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_2708;
		LookAsyncCamera("head");
	}
Label_2708:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_1623(var_1_object, var_2_object, var_4_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_bool = 0; var_219_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_1625:
	var_223_int = var_1_object + (int)1;
	var_224_int = "attack_begin" + var_223_int;
	HasAnimation(var_217_bool, "all", var_224_int);
	var_225_bool = var_217_bool == 0; //@nz
	if(var_225_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_1625;
	}
	var_2_object = 0;
	
Label_1639:
	var_228_int = var_2_object + (int)1;
	var_229_int = "attack" + var_228_int;
	IsExisting3DSound(var_218_bool, var_229_int);
	var_230_bool = var_218_bool == 0; //@nz
	if(var_230_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1639;

	}
	GetAnimationOffset(var_219_cvector, "all", "bjump");
	var_233_float = GetByIndex(var_219_cvector, 2);
	var_4_bool = -var_233_float;
	return 6;
	
}


func_3672(var_21_int)
{
	var_21_int = 2;
	return 0;
}


func_3579(var_85_int, var_86_object)
{
	var_88_int = 0; var_89_object = Obj();
	var_86_object = var_89_object;
	func_3486(var_88_int, var_89_object);
	var_88_int = var_85_int;
	return 0;
}


func_3675(var_29_object)
{
	var_30_object = Obj();
	var_29_object = var_30_object;
	func_3732(var_30_object);
	return 0;
}


func_3681()
{
	return 0;
}


func_3682(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_3685()
{
	return 0;
}


func_3687(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	CanSee(var_34_bool, var_32_object);
	var_31_bool = 1;
	var_35_bool = var_34_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_2340(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (int)2250000;
		if(var_45_bool != 1) {
			var_31_bool = 0;
		}
	}
	return 2;
}


func_3702(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_3478(var_60_object);
	return 0;
}


func_2168(var_0_object, var_1_object, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool)
{
	var_289_bool = 0; var_290_bool = 0; var_291_object = Obj(); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_object = Obj(); var_297_bool = 0; var_298_bool = 0; var_299_object = Obj(); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_object = Obj();
	var_0_object = false;
	var_1_object = var_284_object;
	var_288_bool = var_298_bool;
	
Label_2172:
	var_305_bool = 0; var_306_object = Obj();
	var_284_object = var_306_object;
	func_2308(var_305_bool, var_306_object);
	var_309_bool = var_305_bool == 0; //@nz
	if(var_309_bool != 0) {
		var_283_bool = 0;
		return 16;
	}
	@@var_284_object:GetPosition(var_300_cvector);
	GetPosition(var_301_cvector);
	var_302_cvector = var_300_cvector - var_301_cvector;
	var_303_float = var_302_cvector | var_302_cvector;
	var_310_bool = 0;
	var_310_bool = 0;
	var_312_bool = var_286_float > (int)0;
	if(var_312_bool != 0) {
		var_313_float = var_286_float * var_286_float;
		var_314_bool = var_303_float > var_313_float;
		if(var_314_bool != 0) {
			var_310_bool = 1;
		}
	}
	if(var_310_bool != 0) {
		Stop();
		var_283_bool = 0;
		return 16;
	}
	var_315_float = var_285_float * var_285_float;
	var_316_bool = var_303_float > var_315_float;
	if(var_316_bool != 0) {
		@@var_284_object:GetPFPosition(var_300_cvector);
		FindPathTo(var_304_object, var_300_cvector);
		var_317_bool = var_304_object != 0; //@nn
		if(var_317_bool != 0) {
			var_304_object = var_299_object;
			var_304_object = 0;
		}
		var_318_bool = var_299_object != 0; //@nn
		if(var_318_bool != 0) {
			var_319_bool = var_298_bool;
			if(var_319_bool == 0) goto Label_2221;
			var_298_bool = 0;
			RotatePath(var_299_object, var_297_bool);
			var_320_bool = var_297_bool == 0; //@nz
			if(var_320_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_323_string = "";
				func_2315(var_323_string);
				var_324_string = "";
				func_2317(var_324_string);
				FollowPath(var_299_object, var_287_bool, var_297_bool, var_323_string, var_324_string);
				var_325_bool = var_297_bool == 0; //@nz
				if(var_325_bool != 0) {
					var_326_object = var_0_object;
					if(var_326_object != 0) {
						var_299_object = 0;
						goto Label_2268;
					EMIT "GOTO 0x8c1";
					}
				} else {
					var_299_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_297_bool);
					var_329_bool = var_297_bool == 0; //@nz
					if(var_329_bool != 0) {
						var_330_object = var_0_object;
						if(var_330_object != 0) {
							var_299_object = 0;
							goto Label_2268;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_2268;
	}
			var_304_object = 0;
			goto Label_2266;

		Label_2266:
			var_299_object = 0;

		}
		goto Label_2172;
	}
Label_2268:
	var_283_bool = !var_0_object;
	return 16;
	
}


func_1658(var_0_object, var_497_float, var_498_int)
{
	var_499_object = Obj(); var_500_float = 0; var_501_float = 0; var_502_object = Obj(); var_503_float = 0; var_504_float = 0;
	var_506_float = var_497_float * (float)0.8999999761581421;
	GetVictim(var_506_float, var_502_object);
	ReportAttack(var_0_object);
	var_507_bool = var_502_object == var_0_object;
	if(var_507_bool != 0) {
		var_508_float = 0; var_509_object = Obj(); var_510_int = 0;
		var_502_object = var_509_object;
		var_498_int = var_510_int;
		func_1388(var_510_int);
		var_508_float = var_503_float;
		var_511_float = 0; var_512_object = Obj(); var_513_float = 0; var_514_int = 0;
		var_502_object = var_512_object;
		var_503_float = var_513_float;
		var_515_int = 0; var_516_object = Obj(); var_517_int = 0;
		var_502_object = var_516_object;
		var_498_int = var_517_int;
		func_1391(var_517_int);
		var_515_int = var_514_int;
		func_2365(var_511_float, var_512_object, var_513_float, var_514_int);
		var_511_float = var_504_float;
		var_576_int = 0;
		func_2041(var_576_int);
		ReportHit(var_0_object, var_576_int, var_504_float, var_503_float);
		var_577_object = Obj(); var_578_float = 0;
		var_502_object = var_577_object;
		var_504_float = var_578_float;
		func_2048();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_3708(var_48_bool)
{
	var_48_bool = 0;
	return 0;
}


func_3711()
{
	return 0;
}


func_3713(var_26_bool)
{
	var_26_bool = 0;
	return 0;
}


func_1156(var_0_object)
{
	var_69_object = Obj();
	var_69_object = var_0_object;
	func_2763(var_69_object);
	return 0;
}


func_3716()
{
	return 0;
}


func_3718(var_102_int)
{
	var_102_int = 515556;
	return 0;
}


func_3720(var_101_int)
{
	var_101_int = 503341;
	return 0;
}


func_3722(var_103_string)
{
	var_103_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_3724(var_104_string)
{
	var_104_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_3726(var_96_bool)
{
	var_96_bool = 0;
	return 0;
}


func_3728()
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_3732(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0;
	var_33_bool = GlobalVars[0];
	if(var_33_bool != 0) {
		IsOverrideActive(var_32_bool);
		var_34_bool = var_32_bool == 0; //@nz
		if(var_34_bool != 0) {
			var_35_object = Obj();
			var_30_object = var_35_object;
			func_3007(var_35_object);
		}
		return 2;
	EMIT "GOTO 0xea7";
	}
	var_42_int = 0; var_43_object = Obj();
	var_30_object = var_43_object;
	TaskCall(0);
	func_0(var_44_object, var_42_int, var_43_object);
	TaskReturn();
	return 2;
}


func_2714()
{
	var_202_bool = 0; var_203_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_205_bool = 0;
	func_3726(var_205_bool);
	if(var_205_bool != 0) {
	} else {
		HasAnimationTrack(var_203_bool, "head");
		var_207_bool = var_203_bool;
		if(var_207_bool == 0) goto Label_2731;
		UnlookAsync("head");
	}
Label_2731:
	return 2;
	
}


func_1697(var_0_object, var_1_object, var_460_bool, var_461_float)
{
	var_462_int = 0; var_463_bool = 0; var_464_int = 0; var_465_string = ""; var_466_int = 0; var_467_bool = 0; var_468_int = 0; var_469_string = "";
	func_2036(var_469_string);
	irand(var_466_int, var_1_object);
	var_466_int = var_466_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2932();
	var_478_int = "attack_begin" + var_466_int;
	PlayAnimation("all", var_478_int);
	WaitForAnimEnd();
	func_2004(var_468_int, var_469_string);
	var_494_bool = 0; var_495_object = Obj();
	var_495_object = var_0_object;
	func_2479(var_494_bool, var_495_object);
	var_496_bool = var_494_bool == 0; //@nz
	if(var_496_bool != 0) {
		StopAsync();
		var_460_bool = 0;
		return 8;
	}
	var_497_float = 0; var_498_int = 0;
	var_461_float = var_497_float;
	var_466_int = var_498_int;
	func_1658(var_469_string, var_497_float, var_498_int);
	var_581_int = "attack_middle" + var_466_int;
	HasAnimation(var_467_bool, "all", var_581_int);
	var_582_bool = var_467_bool;
	if(var_582_bool != 0) {
		func_2932();
		var_585_int = "attack_middle" + var_466_int;
		PlayAnimation("all", var_585_int);
		WaitForAnimEnd();
		func_2036(var_469_string);
		var_586_bool = 0; var_587_object = Obj();
		var_587_object = var_0_object;
		func_2479(var_586_bool, var_587_object);
		var_588_bool = var_586_bool == 0; //@nz
		if(var_588_bool != 0) {
			StopAsync();
			var_460_bool = 0;
			return 8;
		}
		var_589_float = 0; var_590_int = 0;
		var_461_float = var_589_float;
		var_466_int = var_590_int;
		func_1658(var_469_string, var_589_float, var_590_int);
		var_468_int = 1;

	Label_1774:
		var_592_int = "attack_middle" + var_466_int;
		var_594_int = var_592_int + "_";
		var_469_string = var_594_int + var_468_int;
		HasAnimation(var_467_bool, "all", var_469_string);
		var_596_bool = var_467_bool == 0; //@nz
		if(var_596_bool != 0) {
		} else {
			func_2932();
			PlayAnimation("all", var_469_string);
			WaitForAnimEnd();
			func_2036(var_469_string);
			var_612_bool = 0; var_613_object = Obj();
			var_613_object = var_0_object;
			func_2479(var_612_bool, var_613_object);
			var_614_bool = var_612_bool == 0; //@nz
			if(var_614_bool != 0) {
				StopAsync();
				var_460_bool = 0;
				var_615_float = 0; var_616_int = 0;
				var_461_float = var_615_float;
				var_466_int = var_616_int;
				func_1658(var_469_string, var_615_float, var_616_int);
				var_468_int = var_468_int + (int)1;
				goto Label_1774;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_600_int = "attack_end" + var_466_int;
	PlayAnimation("all", var_600_int);
	var_601_bool = 0;
	func_2050(var_601_bool);
	if(var_601_bool != 0) {
		var_602_bool = 0; var_603_float = 0;
		func_1834(var_602_bool, (float)0.75);
		StopAsync();
	}
	var_460_bool = 1;
	return 8;
	
}


func_3752(var_63_bool)
{
	var_63_bool = 0;
	return 0;
}


func_3754(var_170_bool)
{
	var_170_bool = 1;
	return 0;
}


func_2732(var_155_string)
{
	var_156_bool = 0; var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_float = 0; var_161_float = 0;
	lshHasAnimation(var_159_bool, var_155_string);
	var_162_bool = var_159_bool;
	if(var_162_bool != 0) {
		lshGetAnimTimes(var_155_string, var_160_float, var_161_float);
		lshPlayAnimation(var_160_float, var_161_float, (bool)0);
	} else {
		var_165_int = "Can't find lsh animation : " + var_155_string;
		Trace(var_165_int);
	}
	return 6;
	
}


func_3757(var_23_bool, var_24_object, var_25_object, var_26_bool)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0; var_31_bool = 0;
	var_24_object = var_28_object;
	var_25_object = var_29_object;
	var_26_bool = var_31_bool;
	func_3592(var_27_bool, var_28_object, var_29_object, (float)700.0, var_31_bool);
	var_27_bool = var_23_bool;
	return 0;
}


func_176(var_2_object, var_129_string)
{
	var_130_bool = 0;
	func_3726(var_130_bool);
	var_131_bool = var_130_bool == 0; //@nz
	if(var_131_bool != 0) {
		return 0;
	}
	var_132_bool = var_129_string == var_2_object;
	if(var_132_bool != 0) {
		return 0;
	}
	var_133_string = ""; var_134_bool = 0;
	var_129_string = var_133_string;
	var_136_bool = var_129_string == "";
	if(var_136_bool != 0) {
		var_134_bool = 0;
	} else {
		var_134_bool = 1;
	}
	func_2748(var_133_string, var_134_bool);
	var_2_object = var_129_string;
	return 0;
	
}


func_3767(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj();
	var_101_object = var_103_object;
	func_2348(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		var_106_object = Obj();
		func_2822(var_106_object);
		ReportReputationChange(var_101_object, var_106_object, (float)-0.07000000029802322, (bool)1);
		var_111_bool = 0;
		func_3092((bool)1);
	}
	func_3068();
	var_245_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_697(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_833(var_17_object, var_18_bool);
	return 0;
}


func_2748(var_133_string, var_134_bool)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0;
	lshHasAnimation(var_140_bool, var_133_string);
	var_143_bool = var_140_bool;
	if(var_143_bool != 0) {
		lshGetAnimTimes(var_133_string, var_141_float, var_142_float);
		lshPlayAnimation(var_141_float, var_142_float, var_134_bool);
	} else {
		var_145_int = "Can't find lsh animation : " + var_133_string;
		Trace(var_145_int);
	}
	return 6;
	
}


func_705(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_840(var_22_bool, var_23_int);
	return 0;
}


func_3267(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0;
	GetInvItemByName(var_141_int, var_139_string);
	var_141_int = var_138_int;
	return 2;
}


func_3272(var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	TaskCall(2);
	func_330(var_20_object);
	TaskReturn();
	return 0;
}


func_2763(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0);
	@@var_22_object:GetEyesHeight(var_25_float);
	var_26_cvector = CVector(0.0, 0.0, 0.0);
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	LookAsync(var_22_object, "head", var_26_cvector);
	return 4;
}


func_722(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_19_object = var_25_object;
	func_2479(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 4;
	}
	var_59_object = var_2_object;
	if(var_59_object != 0) {
		return 4;
	}
	IsPlayerActor(var_19_object, var_22_bool);
	var_60_bool = var_22_bool == 0; //@nz
	if(var_60_bool != 0) {
		return 4;
	}
	var_61_int = 0; var_62_object = Obj();
	var_19_object = var_62_object;
	func_3469(var_62_object);
	var_61_int = var_23_int;
	var_65_bool = var_23_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_23_int > (int)1;
		if(var_67_bool != 0) {
			func_705(var_23_int);
		}
		var_69_object = Obj();
		var_19_object = var_69_object;
		func_3478(var_69_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2774()
{
	var_21_bool = 0;
	func_3726(var_21_bool);
	if(var_21_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2781(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	IsExisting3DSound(var_53_bool, var_44_string);
	var_61_bool = var_53_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_54_int = 0;

	Label_2787:
		var_63_int = var_54_int + (int)1;
		var_64_int = var_44_string + var_63_int;
		IsExisting3DSound(var_55_bool, var_64_int);
		var_65_bool = var_55_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_54_int = var_54_int + (int)1;
			goto Label_2787;
		}
		var_66_bool = var_54_int == 0; //@nz
		if(var_66_bool != 0) {
			return 16;
		}
		irand(var_56_int, var_54_int);
		var_68_int = var_56_int + (int)1;
		var_44_string = var_44_string + var_68_int;
	}
	Is3DSoundLoaded(var_57_bool, var_44_string);
	var_69_bool = var_57_bool;
	if(var_69_bool != 0) {
		GetEyesHeight(var_58_float);
		GetDirection(var_59_cvector);
		var_60_cvector = var_59_cvector * (int)50;
		var_71_float = GetByIndex(var_60_cvector, 1);
		var_71_float = var_71_float + var_58_float;
		SetByIndex(var_60_cvector, 1) = var_71_float;
		PlayGlobalSound(var_44_string, var_60_cvector);
	}
	return 16;
	
}


func_2270(var_0_object, var_1_object, var_26_int)
{
	var_28_bool = var_26_int != (int)0;
	if(var_28_bool != 0) {
		return 0;
	}
	var_29_bool = 0; var_30_object = Obj();
	var_30_object = var_1_object;
	func_2308(var_29_bool, var_30_object);
	var_65_bool = var_29_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2292(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_3317(var_22_bool, var_23_object, var_24_string)
{
	var_26_bool = var_24_string == "unholster";
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_23_object = var_28_object;
		func_3682(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xd13";
	}
	var_30_bool = var_24_string == "player_shot";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_23_object = var_32_object;
		func_3687(var_31_bool, var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xd13";
	}
	var_47_bool = var_24_string == "battle";
	if(var_47_bool != 0) {
		var_48_bool = 0; var_49_object = Obj();
		var_23_object = var_49_object;
		func_3708(var_49_object);
		var_48_bool = var_22_bool;
		return 0;
	}
	var_22_bool = 0;
	return 0;
}


func_762(var_0_object, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_30_float, (float)0.5);
	Sleep(var_30_float);
	
Label_770:
	var_37_bool = var_0_object == 0; //@nz
	if(var_37_bool != 0) {
		var_38_bool = var_1_object == 0; //@nz
		if(var_38_bool != 0) {

		Label_774:
			GetPosition(var_32_cvector);
			var_39_float = 0;
			func_821(var_39_float);
			GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool);
			var_42_bool = var_33_bool;
			if(var_42_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_774;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_790;
	
Label_790:
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0);
	var_31_cvector = var_44_cvector;
	func_849(var_43_object, var_44_cvector);
	var_43_object = var_34_object;
	var_47_bool = var_34_object != 0; //@nn
	if(var_47_bool != 0) {
		RotatePath(var_34_object, var_35_bool);
		var_48_bool = var_35_bool;
		if(var_48_bool != 0) {
			var_49_bool = 0;
			func_847(var_49_bool);
			FollowPath(var_34_object, var_49_bool, var_35_bool);
			var_34_object = 0;
			var_50_bool = var_35_bool;
			if(var_50_bool != 0) {
				TaskCall(4);
				func_1019();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_34_object = 0;
	goto Label_770;
	
}


func_2308(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_object = var_32_object;
	func_2479(var_31_bool, var_32_object);
	var_31_bool = var_29_bool;
	return 0;
}


func_2822(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj();
	self(var_108_object);
	var_108_object = var_106_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2315(var_323_string)
{
	var_323_string = "walk";
	return 0;
}


func_2828(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0;
	var_60_int = var_51_cvector | var_51_cvector;
	var_59_float = sqrt(var_60_int);
	var_61_float = 9.999999974752427e-07;
	var_62_bool = var_59_float < var_61_float;
	if(var_62_bool != 0) {
		var_50_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_50_cvector = var_51_cvector / var_59_float;
	return 2;
}


func_2317(var_324_string)
{
	var_324_string = "run";
	return 0;
}


func_2319(var_539_string, var_540_int)
{
	var_542_bool = var_540_int == (int)2;
	if(var_542_bool != 0) {
		var_539_string = "fire";
		return 0;
	EMIT "GOTO 0x91b";
	}
	var_544_bool = var_540_int == (int)1;
	if(var_544_bool != 0) {
		var_539_string = "bullet";
		return 0;
	}
	var_539_string = "phys";
	return 0;
}


func_3349(var_52_object, var_53_string)
{
	var_55_bool = var_53_string == "unholster";
	if(var_55_bool != 0) {
		var_52_object = Obj();
		func_3685();
	} else {
		var_58_bool = var_53_string == "player_shot";
		if(var_58_bool != 0) {
			var_59_object = Obj();
			var_52_object = var_59_object;
			func_3702(var_59_object);
			goto Label_3373;
		}
		var_126_bool = var_53_string == "battle";
		if(var_126_bool == 0) goto Label_3373;
		var_52_object = Obj();
		func_3711();
	}
Label_3373:
	return 0;
	
}


func_2838(var_549_float, var_550_float, var_551_float)
{
	var_554_bool = var_550_float < var_551_float;
	if(var_554_bool != 0) {
		var_550_float = var_549_float;
	} else {
		var_551_float = var_549_float;
	}
	return 0;
	
}


func_1304()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2333(var_52_cvector, var_53_object)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_53_object:GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
	return 4;
}


func_2845(var_559_float, var_560_float, var_561_float, var_562_float)
{
	var_563_bool = var_560_float < var_561_float;
	if(var_563_bool != 0) {
		var_561_float = var_559_float;
		return 0;
	}
	var_564_bool = var_560_float > var_562_float;
	if(var_564_bool != 0) {
		var_562_float = var_559_float;
		return 0;
	}
	var_560_float = var_559_float;
	return 0;
}


func_2340(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_2856(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = var_74_float * var_75_float;
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = var_77_float * var_78_float;
	var_71_float = var_76_float + var_79_float;
	return 0;
}


func_1834(var_602_bool, var_603_float)
{
	var_604_float = 0; var_605_bool = 0; var_606_float = 0; var_607_bool = 0;
	rand(var_606_float);
	var_608_bool = var_606_float < var_603_float;
	if(var_608_bool != 0) {

	Label_1839:
		IsAnimationPlaying(var_607_bool);
		var_609_bool = var_607_bool == 0; //@nz
		if(var_609_bool != 0) {
		} else {
			var_610_bool = 0;
			func_1932(var_610_bool);
			if(var_610_bool != 0) {
				var_602_bool = 1;
				sync();
				goto Label_1839;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_2036(var_607_bool);
	}
	goto Label_1859;
	
Label_1859:
	var_602_bool = 0;
	return 4;
	
}


func_2348(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0;
	IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
	return 2;
}


func_3374(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	var_23_bool = 0;
	var_23_bool = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_20_object = var_25_object;
	func_3682(var_25_object);
	if(var_24_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_20_object = var_27_object;
		func_2348(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		@@var_20_object:IsWeaponHolstered(var_22_bool);
		var_30_bool = var_22_bool == 0; //@nz
		if(var_30_bool != 0) {
			var_19_bool = 1;
			return 2;
		}
	}
	var_19_bool = 0;
	return 2;
}


func_2353(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0;
	var_60_bool = IsFuncExist(var_54_object, "HasProperty", (int)2);
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_53_bool = 0;
		return 2;
	}
	@@var_54_object:HasProperty(var_55_string, var_57_bool);
	var_57_bool = var_53_bool;
	return 2;
}


func_2865(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0);
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = var_82_float * var_83_float;
	var_85_float = GetByIndex(var_81_cvector, 2);
	var_86_float = GetByIndex(var_81_cvector, 2);
	var_87_float = var_85_float * var_86_float;
	var_88_int = var_84_float + var_87_float;
	var_80_float = sqrt(var_88_int);
	return 0;
}


func_821(var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	GetCameraFarDistance(var_41_float);
	var_41_float = var_39_float;
	return 2;
}


func_2875(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_69_cvector = var_72_cvector;
	var_70_cvector = var_73_cvector;
	func_2856(var_71_float, var_72_cvector, var_73_cvector);
	var_80_float = 0; var_81_cvector = CVector(0,0,0);
	var_69_cvector = var_81_cvector;
	func_2865(var_80_float, var_81_cvector);
	var_89_float = 0; var_90_cvector = CVector(0,0,0);
	var_70_cvector = var_90_cvector;
	func_2865(var_89_float, var_90_cvector);
	var_91_float = var_80_float * var_89_float;
	var_68_float = var_71_float / var_91_float;
	return 0;
}


func_2365(var_511_float, var_512_object, var_513_float, var_514_int)
{
	var_518_int = 0; var_519_string = ""; var_520_int = 0; var_521_float = 0; var_522_float = 0; var_523_float = 0; var_524_int = 0; var_525_string = ""; var_526_int = 0; var_527_float = 0; var_528_float = 0; var_529_float = 0;
	var_530_bool = 0; var_531_object = Obj(); var_532_string = "";
	var_512_object = var_531_object;
	func_2353(var_530_bool, var_531_object, "health");
	var_533_bool = var_530_bool == 0; //@nz
	if(var_533_bool != 0) {
		var_511_float = 0.0;
		return 12;
	}
	var_534_bool = 0; var_535_object = Obj(); var_536_string = "";
	var_512_object = var_535_object;
	func_2353(var_534_bool, var_535_object, "armor");
	var_537_bool = var_534_bool == 0; //@nz
	if(var_537_bool != 0) {
		var_524_int = 0;
	} else {
			@@var_512_object:GetProperty("armor", var_524_int);
	}
	var_539_string = ""; var_540_int = 0;
	var_514_int = var_540_int;
	func_2319(var_539_string, var_540_int);
	var_525_string = "armor_" + var_539_string;
	var_545_bool = 0; var_546_object = Obj(); var_547_string = "";
	var_512_object = var_546_object;
	var_525_string = var_547_string;
	func_2353(var_545_bool, var_546_object, var_547_string);
	var_548_bool = var_545_bool == 0; //@nz
	if(var_548_bool != 0) {
		var_526_int = 0;
	} else {
		@@var_512_object:GetProperty(var_525_string, var_526_int);

	}
	var_549_float = 0; var_550_float = 0; var_551_float = 0;
	var_552_int = var_524_int + var_526_int;
	var_550_float = var_552_int / (float)100.0;
	func_2838(var_549_float, var_550_float, (float)1);
	var_549_float = var_527_float;
	@@var_512_object:GetProperty("health", var_528_float);
	var_557_int = (int)1 - var_527_float;
	var_529_float = var_513_float * var_557_int;
	var_559_float = 0; var_560_float = 0; var_561_float = 0; var_562_float = 0;
	var_560_float = var_528_float - var_529_float;
	func_2845(var_559_float, var_560_float, (float)0, (float)1);
	@@var_512_object:SetProperty("health", var_559_float);
	var_565_bool = 0; var_566_object = Obj();
	var_512_object = var_566_object;
	func_2348(var_565_bool, var_566_object);
	if(var_565_bool != 0) {
		var_567_float = 0;
		var_567_float = -var_529_float;
		func_2897(var_567_float);
	}
	var_529_float = var_511_float;
	return 12;
	
}


func_833(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1861(var_0_object, var_403_bool, var_404_float)
{
	var_405_bool = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_bool = 0; var_411_cvector = CVector(0,0,0); var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_float = 0;
	
Label_1862:
	IsAnimationPlaying(var_410_bool);
	var_415_bool = var_410_bool == 0; //@nz
	if(var_415_bool != 0) {
	} else {
		var_416_bool = 0;
		func_1932(var_416_bool);
		if(var_416_bool != 0) {
			var_403_bool = 1;
			return 10;
		}
		var_455_bool = 0; var_456_object = Obj();
		var_456_object = var_0_object;
		func_2479(var_455_bool, var_456_object);
		var_457_bool = var_455_bool == 0; //@nz
		if(var_457_bool != 0) {
			var_403_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_411_cvector);
		GetPFPosition(var_412_cvector);
		var_413_cvector = var_411_cvector - var_412_cvector;
		var_414_float = var_413_cvector | var_413_cvector;
		var_458_float = var_404_float * var_404_float;
		var_459_bool = var_414_float < var_458_float;
		if(var_459_bool != 0) {
			var_460_bool = 0; var_461_float = 0;
			var_404_float = var_461_float;
			func_1697(var_413_cvector, var_414_float, var_460_bool, var_461_float);
			var_403_bool = 1;
			sync();
			goto Label_1862;
		}
		return 10;
	}
	func_2036(var_414_float);
	var_403_bool = 0;
	return 10;
	
}


func_3397(var_33_object)
{
	var_33_object = Obj();
	func_3685();
	return 0;
}


func_840(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_330(var_20_object)
{
	EventDisable(0);
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_363(var_21_object);
	var_101_object = Obj();
	var_20_object = var_101_object;
	func_3767(var_101_object);
	EventEnable(0);
	
Label_341:
	Hold();
	goto Label_341;
}
EMIT "Return(); Pop(0)";


func_3403(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_2348(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_object = Obj();
		func_2822(var_26_object);
		ReportReputationChange(var_21_object, var_26_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_2892(var_123_int, var_124_string)
{
	var_125_int = 0; var_126_int = 0;
	GetVariable(var_124_string, var_126_int);
	var_126_int = var_123_int;
	return 2;
}


func_847(var_49_bool)
{
	var_49_bool = 0;
	return 0;
}


func_849(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindShiftedPathTo(var_46_object, var_44_cvector);
	var_46_object = var_43_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2897(var_567_float)
{
	var_568_object = Obj(); var_569_object = Obj();
	CreateFloatVector(var_569_object);
	@@var_569_object:add(var_567_float);
	var_571_bool = var_567_float < (int)0;
	if(var_571_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_569_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3416(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_string == "heal";
	if(var_24_bool != 0) {
		FindActor(var_22_object, "player");
		var_26_bool = 0; var_27_object = Obj();
		var_22_object = var_27_object;
		func_3713(var_27_object);
		var_26_bool = var_19_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = 0;
	return 2;
}


func_2914(var_120_int)
{
	var_121_float = 0; var_122_float = 0;
	GetGameTime(var_122_float);
	var_124_int = 0;
	var_124_int = var_122_float / (int)24;
	var_120_int = (int)1 + var_124_int;
	return 2;
}


func_1380(var_182_object)
{
	var_189_object = Obj(); var_190_bool = 0; var_191_float = 0;
	var_182_object = var_189_object;
	func_1394(var_185_int, var_186_bool, var_187_float, var_188_int, var_182_object, var_189_object, (bool)1, (float)180.0);
	return 0;
}


func_3432(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj();
	var_34_bool = var_30_string == "heal";
	if(var_34_bool != 0) {
		FindActor(var_32_object, "player");
		var_32_object = Obj();
		func_3716();
		var_32_object = 0;
	}
	return 2;
}


func_363(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = var_21_object == 0; //@ne
	if(var_42_bool != 0) {
		var_43_string = "";
		func_454("fdie");
	} else {
		@@var_21_object:GetPosition(var_32_cvector);
		GetPosition(var_33_cvector);
		GetDirection(var_34_cvector);
		var_35_cvector = var_33_cvector - var_32_cvector;
		var_75_float = GetByIndex(var_35_cvector, 0);
		var_76_float = GetByIndex(var_34_cvector, 0);
		var_77_float = var_75_float * var_76_float;
		var_78_float = GetByIndex(var_35_cvector, 2);
		var_79_float = GetByIndex(var_34_cvector, 2);
		var_80_float = var_78_float * var_79_float;
		var_81_int = var_77_float + var_80_float;
		var_83_bool = var_81_int >= (int)0;
		if(var_83_bool != 0) {
			var_36_string = "fdie";
		} else {
				var_36_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_21_object = var_37_object;
		var_86_bool = IsFuncExist(var_21_object, "GetScriptProperty", (int)2);
		if(var_86_bool != 0) {
			@@var_21_object:HasScriptProperty(var_38_bool, "Owner");
			var_88_bool = var_38_bool;
			if(var_88_bool != 0) {
				@@var_21_object:GetScriptProperty(var_37_object, "Owner");
				var_90_bool = var_37_object == 0; //@ne
				if(var_90_bool != 0) {
					var_21_object = var_37_object;
				}
			}
		}
		var_93_bool = IsFuncExist(var_37_object, "@GetEyesHeight", (int)1);
		if(var_93_bool != 0) {
			@@var_37_object:GetEyesHeight(var_40_float);
			var_41_cvector = CVector(0.0, 0.0, 0.0);
			var_94_float = GetByIndex(var_41_cvector, 1);
			var_40_float = var_94_float;
			SetByIndex(var_41_cvector, 1) = var_94_float;
			LookAsync(var_21_object, "head", var_41_cvector);
			var_39_bool = 1;
		} else {
			var_39_bool = 0;

		}
		var_96_string = "";
		var_36_string = var_96_string;
		func_2781(var_96_string);
		PlayAnimation("all", var_36_string);
		WaitForAnimEnd();
		var_98_bool = var_39_bool;
		if(var_98_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_36_string);
		RemoveEnvelope();
		var_37_object = 0;
	}
	return 20;
	
}


func_1388(var_508_float)
{
	var_508_float = 0.10000000149011612;
	return 0;
}


func_2923(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsPlayerActor(var_21_object, var_23_bool);
	var_24_bool = var_23_bool;
	if(var_24_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1391(var_515_int)
{
	var_515_int = 0;
	return 0;
}


func_1904(var_0_object, var_418_bool)
{
	var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_float = 0; var_423_float = 0; var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_float = 0; var_428_float = 0;
	var_429_bool = 0; var_430_object = Obj();
	var_430_object = var_0_object;
	func_2479(var_429_bool, var_430_object);
	var_431_bool = var_429_bool == 0; //@nz
	if(var_431_bool != 0) {
		var_418_bool = 0;
		return 10;
	}
	var_432_bool = 0;
	func_1993(var_428_float, var_432_bool);
	if(var_432_bool != 0) {
		@@@var_0_object:GetPFPosition(var_424_cvector);
		GetPFPosition(var_425_cvector);
		var_426_cvector = var_424_cvector - var_425_cvector;
		var_427_float = var_426_cvector | var_426_cvector;
		@@@var_0_object:GetAttackDistance(var_428_float);
		var_428_float = var_428_float + (int)50;
		var_434_float = var_428_float * var_428_float;
		var_418_bool = var_427_float <= var_434_float;
		return 10;
	}
	var_418_bool = 0;
	return 10;
}


func_1394(var_0_object, var_3_string, var_5_bool, var_189_object, var_190_bool, var_191_float, var_266_bool, var_352_bool)
{
	var_192_float = 0; var_193_cvector = CVector(0,0,0); var_194_cvector = CVector(0,0,0); var_195_bool = 0; var_196_bool = 0; var_197_float = 0; var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_cvector = CVector(0,0,0); var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_bool = 0; var_207_bool = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_bool = 0; var_213_float = 0;
	func_1623(var_211_cvector, var_212_bool, var_213_float);
	var_5_bool = 0;
	var_238_bool = IsFuncExist(var_189_object, "@GetAttackDistance", (int)1);
	if(var_238_bool != 0) {
		@@var_189_object:GetAttackDistance(var_203_float);
		var_203_float = var_203_float + (int)50;
	} else {
							var_191_float = var_203_float;
	}
	var_241_bool = var_203_float >= (int)150;
	if(var_241_bool != 0) {
		var_203_float = 150;
	}
	var_3_string = false;
	var_0_object = var_189_object;
	IsPlayerActor(var_0_object, var_206_bool);
	var_242_bool = var_206_bool;
	if(var_242_bool != 0) {
		PlayGlobalMusic("attack");
		var_244_object = Obj();
		func_2822(var_244_object);
		SendPlayerEnemy(var_189_object, var_244_object);
	}
	var_247_bool = var_190_bool;
	if(var_247_bool != 0) {
		var_207_bool = 0;
	} else {
						var_207_bool = 1;

	}
	var_208_float = (float)400.0 + var_203_float;
	
Label_1434:
	var_249_bool = 0;
	var_249_bool = 0;
	var_250_bool = 0; var_251_object = Obj();
	var_251_object = var_0_object;
	func_2479(var_250_bool, var_251_object);
	if(var_250_bool != 0) {
		var_252_bool = var_3_string == 0; //@nz
		if(var_252_bool != 0) {
			var_249_bool = 1;
		}
	}
	if(var_249_bool != 0) {
		func_2036(var_213_float);
		@@@var_0_object:GetPFPosition(var_204_cvector);
		GetPFPosition(var_205_cvector);
		var_209_cvector = var_204_cvector - var_205_cvector;
		var_210_float = var_209_cvector | var_209_cvector;
		var_258_float = var_208_float * var_208_float;
		var_259_bool = var_210_float >= var_258_float;
		if(var_259_bool != 0) {
			var_260_bool = 0; var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_bool = 0;
			var_261_object = var_0_object;
			var_203_float = var_262_float;
			TaskCall(7);
			func_2063(var_268_bool, var_260_bool, var_261_object, var_262_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_337_bool = var_266_bool == 0; //@nz
			if(var_337_bool != 0) {
			} else {
				var_207_bool = 0;
		} else {
				var_343_float = var_191_float * var_191_float;
				var_344_bool = var_210_float >= var_343_float;
				if(var_344_bool != 0) {
					@@@var_0_object:GetPFPosition(var_211_cvector);
					CanReachByPF(var_212_bool, var_211_cvector);
					var_345_bool = var_212_bool == 0; //@nz
					if(var_345_bool != 0) {
						var_346_bool = 0; var_347_object = Obj(); var_348_float = 0; var_349_float = 0; var_350_bool = 0; var_351_bool = 0;
						var_347_object = var_0_object;
						var_203_float = var_348_float;
						TaskCall(7);
						func_2063(var_354_bool, var_346_bool, var_347_object, var_348_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_355_bool = var_352_bool == 0; //@nz
						if(var_355_bool != 0) {
							goto Label_1606;
						}
						var_207_bool = 0;
						goto Label_1434;
					}
					var_356_bool = var_207_bool == 0; //@nz
					if(var_356_bool != 0) {
						var_357_object = Obj();
						var_357_object = var_0_object;
						func_2629(var_357_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_2036(var_213_float);
						StopAsync();
						var_207_bool = 1;
						var_360_bool = 0; var_361_object = Obj();
						var_361_object = var_0_object;
						func_2479(var_360_bool, var_361_object);
						var_362_bool = var_360_bool == 0; //@nz
						if(var_362_bool != 0) {
							goto Label_1606;
						}
					}
					rand(var_213_float);
					var_363_bool = 0;
					var_365_bool = var_213_float < (float)0.25;
					if(var_365_bool != 1) {
						var_366_bool = 0;
						func_1993((bool)1, var_366_bool);
						if(var_366_bool != 1) {
							var_363_bool = 0;
						}
					}
					if(var_363_bool != 0) {
						Face(var_0_object);
						func_2043();
						PlayAnimation("all", "attack_stay");
						var_403_bool = 0; var_404_float = 0;
						var_191_float = var_404_float;
						func_1861(var_213_float, var_403_bool, var_404_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_2036(var_213_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_621_bool = 0;
						func_1993(var_213_float, var_621_bool);
						var_622_bool = var_621_bool == 0; //@nz
						if(var_622_bool == 0) goto Label_1596;
						var_623_bool = 0; var_624_object = Obj();
						var_624_object = var_0_object;
						func_2479(var_623_bool, var_624_object);
						var_625_bool = var_623_bool == 0; //@nz
						if(var_625_bool != 0) {
							goto Label_1606;
						}
						@@@var_0_object:GetPFPosition(var_204_cvector);
						GetPFPosition(var_205_cvector);
						var_209_cvector = var_204_cvector - var_205_cvector;
						var_210_float = var_209_cvector | var_209_cvector;
						var_626_float = var_191_float * var_191_float;
						var_627_bool = var_210_float < var_626_float;
						if(var_627_bool == 0) goto Label_1596;
						var_628_bool = 0; var_629_float = 0;
						var_191_float = var_629_float;
						func_1697(var_212_bool, var_213_float, var_628_bool, var_629_float);
						var_630_bool = var_628_bool == 0; //@nz
						if(var_630_bool == 0) goto Label_1596;
						goto Label_1606;
				}
					var_631_bool = 0; var_632_float = 0;
					var_191_float = var_632_float;
					func_1697(var_212_bool, var_213_float, var_631_bool, var_632_float);
					var_633_bool = var_631_bool == 0; //@nz
					if(var_633_bool != 0) {
						goto Label_1606;
					}
					var_207_bool = 1;

				}
			Label_1596:
				goto Label_1605;
		}
		Label_1605:
			goto Label_1434;

		}
	}
Label_1606:
	WaitForAnimEnd();
	var_338_string = var_3_string;
	if(var_338_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_341_bool = var_206_bool;
	if(var_341_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2932()
{
	var_472_object = Obj(); var_473_object = Obj();
	GetScene(var_473_object);
	var_475_object = Obj();
	func_2822(var_475_object);
	BroadcastMessage("battle", var_475_object, var_473_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3445(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = "";
	var_77_int = var_74_int;
	if(var_77_int != 0) {
		"idle" = "idle" + var_74_int;
	}
	var_76_string = var_73_string;
	return 2;
}


func_3452(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0;
	var_70_int = 0;
	
Label_3454:
	var_73_string = ""; var_74_int = 0;
	var_70_int = var_74_int;
	func_3445(var_73_string, var_74_int);
	HasAnimation(var_71_bool, "all", var_73_string);
	var_78_bool = var_71_bool == 0; //@nz
	if(var_78_bool != 0) {
	} else {
		var_70_int = var_70_int + (int)1;
		goto Label_3454;
	}
	var_70_int = var_67_int;
	return 4;
	
}


func_2943(var_174_bool)
{
	var_176_int = 0; var_177_string = "";
	func_2892(var_176_int, "branch");
	var_179_bool = var_176_int == (int)0;
	if(var_179_bool != 0) {
		var_174_bool = 1;
		return 0;
	}
	var_174_bool = 0;
	return 0;
}


func_2438(var_46_bool, var_47_object)
{
	var_48_bool = 0; var_49_bool = 0;
	@@var_47_object:IsDead(var_49_bool);
	var_49_bool = var_46_bool;
	return 2;
}


func_2955(var_121_bool)
{
	var_123_int = 0; var_124_string = "";
	func_2892(var_123_int, "branch");
	var_128_bool = var_123_int == (int)2;
	if(var_128_bool != 0) {
		var_121_bool = 1;
		return 0;
	}
	var_121_bool = 0;
	return 0;
}


func_1932(var_416_bool)
{
	var_417_bool = 0;
	var_417_bool = 0;
	var_418_bool = 0;
	func_1904(var_417_bool, var_418_bool);
	if(var_418_bool != 0) {
		var_435_bool = 0;
		func_1948(var_416_bool, var_417_bool, var_435_bool);
		if(var_435_bool != 0) {
			var_417_bool = 1;
		}
	}
	if(var_417_bool != 0) {
		var_416_bool = 1;
		return 0;
	}
	var_416_bool = 0;
	return 0;
}


func_3469(var_61_int)
{
	var_63_bool = 0;
	func_3752(var_63_bool);
	if(var_63_bool != 0) {
		var_61_int = 2;
	} else {
		var_61_int = 0;
	}
	return 0;
	
}


func_2443(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj();
	var_41_bool = var_36_object == 0; //@ne
	if(var_41_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_42_bool = 0;
	var_42_bool = 0;
	var_45_bool = IsFuncExist(var_36_object, "IsDead", (int)1);
	if(var_45_bool != 0) {
		var_46_bool = 0; var_47_object = Obj();
		var_36_object = var_47_object;
		func_2438(var_46_bool, var_47_object);
		if(var_46_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	GetScene(var_39_object);
	var_50_bool = var_39_object == 0; //@ne
	if(var_50_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	@@var_36_object:GetScene(var_40_object);
	var_51_bool = var_39_object != var_40_object;
	if(var_51_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_35_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3478(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	TaskCall(5);
	func_1105(var_62_object, var_61_object);
	TaskReturn();
	return 0;
}


func_2967(var_180_bool, var_181_object)
{
	var_182_bool = 0; var_183_object = Obj();
	var_181_object = var_183_object;
	func_2977(var_183_object);
	if(var_182_bool != 0) {
		var_180_bool = 1;
		return 0;
	}
	var_180_bool = 0;
	return 0;
}


func_1948(var_0_object, var_4_bool, var_435_bool)
{
	var_436_object = Obj(); var_437_bool = 0; var_438_float = 0; var_439_cvector = CVector(0,0,0); var_440_cvector = CVector(0,0,0); var_441_object = Obj(); var_442_bool = 0; var_443_float = 0; var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0);
	GetScene(var_441_object);
	var_442_bool = 0;
	
Label_1952:
	var_446_cvector = CVector(0,0,0); var_447_object = Obj();
	var_447_object = var_0_object;
	func_2333(var_446_cvector, var_447_object);
	var_448_int = -var_446_cvector;
	FindDirLength(var_443_float, var_448_int, var_4_bool);
	var_449_bool = var_443_float < var_4_bool;
	if(var_449_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_444_cvector);
		GetPFPosition(var_445_cvector);
		WaitForAnimEnd();
		func_2036(var_445_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_442_bool = 1;
		var_453_bool = 0;
		func_1904(var_445_cvector, var_453_bool);
		var_454_bool = var_453_bool == 0; //@nz
		if(var_454_bool != 0) {
			goto Label_1990;
		}
		goto Label_1952;
	}
Label_1990:
	var_442_bool = var_435_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_3486(var_88_int, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj();
	var_89_object = var_91_object;
	func_2479(var_90_bool, var_91_object);
	if(var_90_bool != 0) {
		var_88_int = 2;
	} else {
		var_88_int = 0;
	}
	return 0;
	
}


func_2977(var_182_bool)
{
	var_184_int = 0;
	func_2914(var_184_int);
	var_182_bool = var_184_int == (int)1;
	return 0;
}


func_2984(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0xbb7";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_3496(var_181_object)
{
	var_182_object = Obj();
	var_181_object = var_182_object;
	TaskCall(6);
	func_1380(var_182_object);
	TaskReturn();
	return 0;
}


func_2479(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0;
	var_35_bool = 0; var_36_object = Obj();
	var_32_object = var_36_object;
	func_2443(var_35_bool, var_36_object);
	var_52_bool = var_35_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_31_bool = 0;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_32_object = var_54_object;
	func_2353(var_53_bool, var_54_object, "noaccess");
	var_62_bool = var_53_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_31_bool = 1;
		return 2;
	}
	@@var_32_object:GetProperty("noaccess", var_34_int);
	var_31_bool = var_34_int == (int)0;
	return 2;
}


func_3504(var_34_bool, var_35_object, var_36_bool)
{
	var_37_string = ""; var_38_string = ""; var_39_string = ""; var_40_string = "";
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_35_object = var_42_object;
	func_2353(var_41_bool, var_42_object, "class");
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	GetProperty("class", var_39_string);
	@@var_35_object:GetProperty("class", var_40_string);
	var_53_bool = 0;
	var_53_bool = 0;
	var_54_bool = var_36_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_55_bool = var_39_string == var_40_string;
		if(var_55_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		var_34_bool = 1;
		return 4;
	}
	var_57_bool = var_40_string == "rat";
	if(var_57_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0xdf9";
	}
	var_59_bool = var_40_string == "rat_big";
	if(var_59_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0xdf9";
	}
	var_61_bool = var_40_string == "dog";
	if(var_61_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0xdf9";
	}
	var_63_bool = var_40_string == "grabitel";
	if(var_63_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0xdf9";
	}
	var_65_bool = var_40_string == "bomber";
	if(var_65_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0xdf9";
	}
	var_67_bool = var_40_string == "sanitar";
	if(var_67_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0xdf9";
	}
	var_69_bool = var_40_string == "hunter";
	if(var_69_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0xdf9";
	}
	var_71_bool = var_40_string == "soldier";
	if(var_71_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_34_bool = 1;
	return 4;
}


func_3001(var_225_int)
{
	var_226_int = 0; var_227_int = 0;
	GetVariable("branch", var_227_int);
	var_227_int = var_225_int;
	return 2;
}


func_3007(var_35_object)
{
	var_36_int = 0;
	func_3001(var_36_int);
	var_41_bool = var_36_int == (int)1;
	if(var_41_bool != 0) {
		WorkWithCorpse(var_35_object);
	} else {
		Barter(var_35_object);
	}
	return 0;
	
}


func_454(var_43_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_44_string = "";
	var_43_string = var_44_string;
	func_2781(var_44_string);
	PlayAnimation("all", var_43_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_43_string);
	RemoveEnvelope();
	return 0;
}


func_2503(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = "";
	var_50_bool = var_35_object == 0; //@ne
	if(var_50_bool != 0) {
		return 14;
	}
	IsDead(var_43_bool);
	var_51_bool = var_43_bool;
	if(var_51_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_44_int);
	var_53_bool = var_44_int < (int)0;
	if(var_53_bool != 0) {
		return 14;
	}
	@@var_35_object:GetPosition(var_45_cvector);
	GetPosition(var_46_cvector);
	GetDirection(var_47_cvector);
	var_48_cvector = var_46_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_48_cvector, 0);
	var_55_float = GetByIndex(var_47_cvector, 0);
	var_56_float = var_54_float * var_55_float;
	var_57_float = GetByIndex(var_48_cvector, 2);
	var_58_float = GetByIndex(var_47_cvector, 2);
	var_59_float = var_57_float * var_58_float;
	var_60_int = var_56_float + var_59_float;
	var_62_bool = var_60_int >= (int)0;
	if(var_62_bool != 0) {
		var_49_string = "fhit";
	} else {
		var_49_string = "bhit";
	}
	var_65_int = var_49_string + "1";
	var_67_int = var_49_string + "2";
	FadeSecondaryAnimation("hit_react", var_65_int, var_67_int, (int)-10);
	return 14;
	
}


func_1993(var_0_object, var_366_bool)
{
	var_367_bool = 0; var_368_bool = 0;
	var_371_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_371_bool != 0) {
		@@@var_0_object:IsAttacking(var_368_bool);
		var_368_bool = var_366_bool;
		return 2;
	}
	var_366_bool = 0;
	return 2;
}


func_3020(var_117_int, var_118_int)
{
	var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0;
	var_132_bool = var_117_int > var_118_int;
	if(var_132_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_130_int = 0;
	var_134_bool = var_117_int != var_118_int;
	if(var_134_bool != 0) {
		var_135_int = var_118_int - var_117_int;
		irand(var_130_int, var_135_int);
	} else {
		var_144_bool = var_117_int == (int)0;
		if(var_144_bool == 0) goto Label_3038;
		return 4;
	}
Label_3038:
	var_130_int = var_130_int + var_117_int;
	var_137_bool = var_130_int == (int)0;
	if(var_137_bool != 0) {
		return 4;
	}
	var_138_int = 0; var_139_string = "";
	func_3267(var_138_int, "Money");
	AddItem(var_131_bool, var_138_int, (int)0, var_130_int);
	return 4;
	
}


func_2004(var_2_object, var_5_bool)
{
	var_479_float = 0; var_480_int = 0; var_481_float = 0; var_482_int = 0;
	var_483_bool = var_2_object == 0; //@nz
	if(var_483_bool != 0) {
		return 4;
	}
	var_484_bool = var_5_bool;
	if(var_484_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_487_bool = var_5_bool > (int)0;
		if(var_487_bool != 0) {
			return 4;
		}
	}
	rand(var_481_float);
	var_488_float = 0;
	func_2054(var_488_float);
	var_489_bool = var_481_float < var_488_float;
	if(var_489_bool != 0) {
		irand(var_482_int, var_2_object);
		var_482_int = var_482_int + (int)1;
		var_492_int = "attack" + var_482_int;
		Speak(var_492_int);
		var_493_int = 0;
		func_2052(var_493_int);
		var_5_bool = var_493_int;
	}
	return 4;
}


func_3051(var_231_string)
{
	var_232_object = Obj(); var_233_int = 0; var_234_bool = 0; var_235_object = Obj(); var_236_int = 0; var_237_bool = 0;
	CreateInvItem(var_235_object);
	@@var_235_object:SetItemName(var_231_string);
	@@var_235_object:SetProperty("Organ", (int)1);
	@@var_235_object:GetItemID(var_236_int);
	AddItem(var_237_bool, var_235_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2547(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0);
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_bool = 0;
	var_44_bool = 0;
	var_45_object = var_22_object;
	if(var_45_object != 0) {
		var_47_bool = var_23_int != (int)4;
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		var_49_bool = var_23_int != (int)5;
		if(var_49_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
		var_52_cvector = CVector(0,0,0); var_53_object = Obj();
		var_22_object = var_53_object;
		func_2333(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_2828(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		CreateVectorVector(var_35_object);
		var_36_int = 1;

	Label_2576:
		var_64_int = "hit" + var_36_int;
		GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector);
		var_65_bool = var_37_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_113_int = var_39_cvector | var_34_cvector;
			var_115_bool = var_113_int >= (float)0.7071067690849304;
			if(var_115_bool != 0) {
				@@var_35_object:add(var_38_cvector);
			}
			var_36_int = var_36_int + (int)1;
			goto Label_2576;
		}
		@@var_35_object:size(var_40_int);
		var_66_int = var_40_int;
		if(var_66_int != 0) {
			irand(var_41_int, var_40_int);
			@@var_35_object:get(var_42_cvector, var_41_int);
			var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
			var_22_object = var_67_object;
			var_23_int = var_68_int;
			var_24_float = var_69_float;
			var_42_cvector = var_70_cvector;
			var_71_cvector = -var_34_cvector;
			func_2615(var_69_float, var_70_cvector, var_71_cvector);
			return 18;
		}
		var_35_object = 0;
	}
	var_112_object = Obj();
	var_22_object = var_112_object;
	func_2503(var_112_object);
	return 18;
	
}


func_2036(var_0_object)
{
	var_253_object = Obj();
	var_253_object = var_0_object;
	func_2923(var_253_object);
	return 0;
}


func_501()
{
	var_20_bool = 0;
	func_2640(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		func_3681();
	}
	return 0;
}


func_2041(var_576_int)
{
	var_576_int = 0;
	return 0;
}


func_1019()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0;
	WaitForAnimEnd();
	var_65_bool = 0;
	func_2640(var_65_bool);
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		return 14;
	}
	func_3452((int)0);
	var_67_int = var_58_int;
	var_59_int = 0;
	
Label_1033:
	var_80_bool = 0;
	var_80_bool = 0;
	var_82_bool = var_59_int < (int)5;
	if(var_82_bool != 0) {
		var_83_bool = 0;
		func_2640(var_83_bool);
		if(var_83_bool != 0) {
			var_80_bool = 1;
		}
	}
	if(var_80_bool != 0) {
		irand(var_60_int, (int)3);
		var_86_bool = var_60_int == (int)0;
		if(var_86_bool != 0) {
			var_87_int = var_58_int;
			if(var_87_int == 0) goto Label_1066;
			irand(var_61_int, var_58_int);
			var_89_string = ""; var_90_int = 0;
			var_61_int = var_90_int;
			func_3445(var_89_string, var_90_int);
			PlayAnimation("all", var_89_string);
			WaitForAnimEnd(var_62_bool);
			var_91_bool = var_62_bool == 0; //@nz
			if(var_91_bool != 0) {
			} else {
		} else {
				var_96_bool = var_60_int == (int)1;
				if(var_96_bool != 0) {
					rand(var_63_float, (int)4);
					var_99_int = var_63_float + (int)1;
					Sleep(var_99_int, var_64_bool);
					var_100_bool = var_64_bool == 0; //@nz
					if(var_100_bool != 0) {
						goto Label_1095;
					}
					goto Label_1084;
				}
				var_101_int = var_59_int;
				if(var_101_int == 0) goto Label_1084;
				goto Label_1095;
		}
		Label_1084:
			var_92_bool = 0;
			func_1098(var_92_bool);
			var_93_bool = var_92_bool == 0; //@nz
			if(var_93_bool != 0) {
				goto Label_1095;
			}
			ResetAAS();
			var_59_int = var_59_int + (int)1;
			goto Label_1033;

		}
	}
Label_1095:
	ResetAAS();
	return 14;
	
}


func_3068()
{
	var_225_int = 0;
	func_3001(var_225_int);
	var_230_bool = var_225_int != (int)1;
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_string = "";
	func_3051("liver");
	var_242_string = "";
	func_3051("kidney");
	var_243_string = "";
	func_3051("heart");
	var_244_string = "";
	func_3051("blood");
	return 0;
}


