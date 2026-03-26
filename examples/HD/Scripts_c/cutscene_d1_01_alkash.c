// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,SensePlayerOnly/1,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,FindShiftedPathTo/2,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,GetVariable/2,AddItem/4,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,RemoveActor/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x25a
// @RUN_TASK: 4
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0xd3 vars=object
// @EVENT_6: op=0xe1 vars=
// @EVENT_22: op=0x15a vars=object,int,float,float
// @EVENT_16: op=0x15c vars=object,string
// @EVENT_41: op=0x15e vars=object
// @TASK_3: vars= params=0
// @EVENT_0: op=0x160 vars=object
// @EVENT_17: op=0x174 vars=object
// @EVENT_30: op=0x18c vars=object,object,bool
// @EVENT_40: op=0x1a8 vars=object
// @EVENT_42: op=0x1bc vars=object,string
// @EVENT_26: op=0x1e1 vars=string
// @EVENT_6: op=0x1ef vars=
// @EVENT_1: op=0x1f6 vars=object
// @TASK_4: vars=bool,bool params=0
// @EVENT_0: op=0x271 vars=object
// @EVENT_17: op=0x285 vars=object
// @EVENT_30: op=0x29d vars=object,object,bool
// @EVENT_40: op=0x2b9 vars=object
// @EVENT_42: op=0x2cd vars=object,string
// @EVENT_26: op=0x2f2 vars=string
// @EVENT_1: op=0x300 vars=object
// @EVENT_6: op=0x30e vars=
// @EVENT_10: op=0x355 vars=object
// @EVENT_28: op=0x359 vars=
// @EVENT_41: op=0x363 vars=object
// @TASK_5: vars=object,int,int,bool,float,int params=1
// @TASK_6: vars=bool,object,bool params=6
// @EVENT_6: op=0x618 vars=
// @EVENT_7: op=0x650 vars=int
// @EVENT_1: op=0x66b vars=object
// @EVENT_2: op=0x67a vars=object
// @EVENT_10: op=0x700 vars=object
// @EVENT_41: op=0x70b vars=object
// @STANDALONE_EVENT_16: op=0xa4a vars=object,string
// @STANDALONE_EVENT_41: op=0xa57 vars=object
// @STANDALONE_EVENT_22: op=0xa5d vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xa65 vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x84,0x9a,0xc4,0xe1,0x140,0x15a,0x15c,0x15e,0x1e1,0x1ef,0x1f6,0x2f2,0x300,0x30e,0x355,0x363,0x374,0x37c,0x37f,0x610,0x618,0x650,0x66b,0x67a,0x6ee,0x700,0x70b,0x714,0x71f,0x91e,0x925,0xa42,0xa57,0xa5d,0xa65,0xa6f,0xa8f,0xabf,0xac5,0xb07,0xb11,0xb19,0xb1c,0xb1e,0xb21,0xb23,0xb26,0xb28,0xb2b,0xb31,0xb34,0xb36,0xb39,0xb3b,0xb3e,0xb40,0xb43,0xb54,0xb5c,0xb67

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	if((int)1 != 0) {
		func_2270();
		var_21_bool = var_16_object == (int)19235;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518116);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518117, (int)-1, (int)19236);
			@@@var_0_object:AddReply((int)534584, (int)-1, (int)36222);
			return 0;
		}
		var_3_string = true;
		var_46_bool = 0;
		func_2893(var_46_bool);
		if(var_46_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2856(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_23_object = Obj();
		var_16_bool = var_23_object;
		func_2859(var_23_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_2911();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2856(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_597();
		}
		var_25_object = Obj();
		var_16_bool = var_25_object;
		func_2859(var_25_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2757(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2823(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_597();
		}
		var_68_object = Obj();
		var_16_bool = var_68_object;
		func_2833(var_68_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_bool = var_22_object;
	var_17_object = var_23_object;
	var_18_bool = var_24_bool;
	func_2908(var_24_bool);
	if(var_21_bool != 0) {
		var_25_int = 0; var_26_object = Obj(); var_27_bool = 0;
		var_16_bool = var_26_object;
		var_18_bool = var_27_bool;
		func_2841(var_27_bool);
		var_25_int = var_20_int;
		var_29_bool = var_20_int > (int)0;
		if(var_29_bool != 0) {
			var_31_bool = var_20_int > (int)1;
			if(var_31_bool != 0) {
				func_597();
			}
			var_16_bool = Obj();
			func_2844();
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2846(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_597();
		}
		var_16_bool = Obj();
		func_2849();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_object = var_21_object;
	var_17_bool = var_22_string;
	func_2671(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_597();
		var_35_object = Obj(); var_36_string = "";
		var_16_object = var_35_object;
		var_17_bool = var_36_string;
		func_2703(var_35_object, var_36_string);
	} else {
		var_46_int = 0; var_47_string = ""; var_48_object = Obj();
		var_17_bool = var_47_string;
		var_16_object = var_48_object;
		func_2851(var_48_object);
		var_46_int = var_19_int;
		var_50_bool = var_19_int > (int)0;
		if(var_50_bool == 0) goto Label_480;
		var_52_bool = var_19_int > (int)1;
		if(var_52_bool != 0) {
			func_597();
		}
		var_53_string = ""; var_54_object = Obj();
		var_17_bool = var_53_string;
		var_16_object = var_54_object;
		func_2854();
	}
Label_480:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_string, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2770(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_597();
		var_26_string = "";
		var_16_bool = var_26_string;
		func_2786(var_26_string);
	}
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_597();
	func_2911();
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2728(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_597();
		var_29_object = Obj();
		var_16_bool = var_29_object;
		func_2751(var_29_object);
	}
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2856(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_860(var_17_int, var_18_int);
		}
		var_25_object = Obj();
		var_16_bool = var_25_object;
		func_2859(var_25_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2757(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2823(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_860(var_17_int, var_18_int);
		}
		var_68_object = Obj();
		var_16_bool = var_68_object;
		func_2833(var_68_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_bool = var_22_object;
	var_17_object = var_23_object;
	var_18_bool = var_24_bool;
	func_2908(var_24_bool);
	if(var_21_bool != 0) {
		var_25_int = 0; var_26_object = Obj(); var_27_bool = 0;
		var_16_bool = var_26_object;
		var_18_bool = var_27_bool;
		func_2841(var_27_bool);
		var_25_int = var_20_int;
		var_29_bool = var_20_int > (int)0;
		if(var_29_bool != 0) {
			var_31_bool = var_20_int > (int)1;
			if(var_31_bool != 0) {
				func_860(var_19_int, var_20_int);
			}
			var_16_bool = Obj();
			func_2844();
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2846(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_860(var_17_int, var_18_int);
		}
		var_16_bool = Obj();
		func_2849();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_object = var_21_object;
	var_17_bool = var_22_string;
	func_2671(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_860(var_18_int, var_19_int);
		var_35_object = Obj(); var_36_string = "";
		var_16_object = var_35_object;
		var_17_bool = var_36_string;
		func_2703(var_35_object, var_36_string);
	} else {
		var_46_int = 0; var_47_string = ""; var_48_object = Obj();
		var_17_bool = var_47_string;
		var_16_object = var_48_object;
		func_2851(var_48_object);
		var_46_int = var_19_int;
		var_50_bool = var_19_int > (int)0;
		if(var_50_bool == 0) goto Label_753;
		var_52_bool = var_19_int > (int)1;
		if(var_52_bool != 0) {
			func_860(var_18_int, var_19_int);
		}
		var_53_string = ""; var_54_object = Obj();
		var_17_bool = var_53_string;
		var_16_object = var_54_object;
		func_2854();
	}
Label_753:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2770(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_860(var_15_object, var_16_bool);
		var_26_string = "";
		var_16_bool = var_26_string;
		func_2786(var_26_string);
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2728(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_860(var_15_object, var_16_bool);
		var_29_object = Obj();
		var_16_bool = var_29_object;
		func_2751(var_29_object);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_860(var_14_object, var_15_bool);
	func_2911();
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	RequestClearPath(var_16_bool);
	return 0;
}


task_4_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	Stop();
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_860(var_15_object, var_16_bool);
	var_16_bool = Obj();
	func_2647();
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_1630(var_15_bool);
	func_2911();
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_18_bool = var_16_int == (int)1;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_19_object = var_1_object;
		func_2378(var_19_object);
	} else {
		var_24_int = 0;
		var_16_int = var_24_int;
		func_1774(var_15_bool, var_16_int, var_24_int);
	}
	return 0;
	
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_object == var_16_object;
	if(var_18_bool != 0) {
		var_19_bool = var_2_object == 0; //@nz
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_object = true;
		var_20_object = Obj();
		var_16_object = var_20_object;
		func_2259(var_20_object);
	}
	return 0;
}


task_6_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_object == var_16_object;
	if(var_18_bool != 0) {
		var_19_object = var_2_object;
		if(var_19_object != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_6_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object);
	return 0;
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1630(var_16_object);
	var_16_object = Obj();
	func_2647();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_2626(var_17_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	var_16_object = var_20_object;
	var_17_int = var_21_int;
	var_18_float = var_22_float;
	func_2043(var_20_object, var_21_int, var_22_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_16_object = var_22_object;
	var_17_int = var_23_int;
	var_18_float = var_24_float;
	var_20_cvector = var_25_cvector;
	var_21_cvector = var_26_cvector;
	func_2111(var_24_float, var_25_cvector, var_26_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	SensePlayerOnly((bool)1);
	func_2895();
	func_616();
	
Label_611:
	func_789(var_14_object, var_15_bool);
	goto Label_611;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_27_int, var_28_object)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_int = 0; var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0;
	var_0_object = var_28_object;
	var_38_bool = 0; var_39_object = Obj(); var_40_float = 0;
	var_28_object = var_39_object;
	func_2141(var_38_bool, var_39_object, (float)70.0);
	var_85_bool = var_38_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_27_int = -2;
		return 8;
	}
	CreateDialog(var_34_object);
	var_86_int = 0;
	func_2887(var_86_int);
	@@var_34_object:SetNPCName(var_86_int);
	var_87_int = 0;
	func_2885(var_87_int);
	@@var_34_object:SetNPCDescription(var_87_int);
	var_88_string = "";
	func_2889(var_88_string);
	@@var_34_object:SetPhoto(var_88_string);
	var_89_string = "";
	func_2891(var_89_string);
	@@var_34_object:SetPhoto2(var_89_string);
	var_90_int = 0;
	func_2398(var_90_int);
	@@var_34_object:SetPlayerName(var_90_int);
	IsOverrideActive(var_35_bool);
	var_98_bool = var_35_bool;
	if(var_98_bool != 0) {
		var_27_int = -2;
		return 8;
	}
	DoDialog(var_34_object);
	var_99_object = Obj(); var_100_object = Obj();
	var_28_object = var_99_object;
	var_34_object = var_100_object;
	TaskCall(1);
	func_74(var_101_object, var_102_object, var_103_string, var_104_bool, var_99_object, var_100_object);
	TaskReturn();
	@@var_34_object:IsDialogEnd(var_37_bool);
	
Label_56:
	var_148_bool = var_37_bool == 0; //@nz
	if(var_148_bool != 0) {
		sync();
		@@var_34_object:IsDialogEnd(var_37_bool);
		goto Label_56;
	}
	var_28_object = Obj();
	func_2210();
	StopDialog(var_34_object);
	@@var_34_object:GetReturnValue((int)-1);
	var_36_int = var_27_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_516()
{
	var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_int = 0; var_169_bool = 0; var_170_float = 0; var_171_bool = 0; var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_int = 0; var_176_bool = 0; var_177_float = 0; var_178_bool = 0;
	WaitForAnimEnd();
	var_179_bool = 0;
	func_2136(var_179_bool);
	var_180_bool = var_179_bool == 0; //@nz
	if(var_180_bool != 0) {
		return 14;
	}
	func_2806((int)0);
	var_181_int = var_172_int;
	var_173_int = 0;
	
Label_530:
	var_194_bool = 0;
	var_194_bool = 0;
	var_196_bool = var_173_int < (int)5;
	if(var_196_bool != 0) {
		var_197_bool = 0;
		func_2136(var_197_bool);
		if(var_197_bool != 0) {
			var_194_bool = 1;
		}
	}
	if(var_194_bool != 0) {
		irand(var_174_int, (int)3);
		var_200_bool = var_174_int == (int)0;
		if(var_200_bool != 0) {
			var_201_int = var_172_int;
			if(var_201_int == 0) goto Label_563;
			irand(var_175_int, var_172_int);
			var_203_string = ""; var_204_int = 0;
			var_175_int = var_204_int;
			func_2799(var_203_string, var_204_int);
			PlayAnimation("all", var_203_string);
			WaitForAnimEnd(var_176_bool);
			var_205_bool = var_176_bool == 0; //@nz
			if(var_205_bool != 0) {
			} else {
		} else {
				var_210_bool = var_174_int == (int)1;
				if(var_210_bool != 0) {
					rand(var_177_float, (int)4);
					var_213_int = var_177_float + (int)1;
					Sleep(var_213_int, var_178_bool);
					var_214_bool = var_178_bool == 0; //@nz
					if(var_214_bool != 0) {
						goto Label_592;
					}
					goto Label_581;
				}
				var_215_int = var_173_int;
				if(var_215_int == 0) goto Label_581;
				goto Label_592;
		}
		Label_581:
			var_206_bool = 0;
			func_595(var_206_bool);
			var_207_bool = var_206_bool == 0; //@nz
			if(var_207_bool != 0) {
				goto Label_592;
			}
			ResetAAS();
			var_173_int = var_173_int + (int)1;
			goto Label_530;

		}
	}
Label_592:
	ResetAAS();
	return 14;
	
}


func_1540(var_0_object)
{
	var_138_object = Obj();
	var_138_object = var_0_object;
	func_2378(var_138_object);
	return 0;
}


func_1545(var_477_int)
{
	var_477_int = 0;
	return 0;
}


func_1547()
{
	var_269_string = "";
	func_2277("attack_stay");
	return 0;
}


func_1552()
{
	return 0;
}


func_1554(var_502_bool)
{
	var_502_bool = 1;
	return 0;
}


func_1556(var_394_int)
{
	var_394_int = 1;
	return 0;
}


func_1558(var_389_float)
{
	var_389_float = 0.5;
	return 0;
}


func_1567(var_2_object, var_145_bool, var_146_object, var_147_float, var_148_float, var_149_bool, var_150_bool)
{
	var_154_bool = 0; var_155_bool = 0; var_156_bool = 0; var_157_bool = 0;
	var_158_object = Obj();
	var_146_object = var_158_object;
	func_2378(var_158_object);
	SetTimer((int)1, (int)5);
	CanSee(var_156_bool, var_146_object);
	var_161_bool = var_156_bool;
	if(var_161_bool != 0) {
		var_2_object = true;
		var_162_object = Obj();
		var_146_object = var_162_object;
		func_2259(var_162_object);
	} else {
		var_2_object = false;
	}
	var_169_bool = 0; var_170_object = Obj();
	var_146_object = var_170_object;
	func_1844(var_169_bool, var_170_object);
	if(var_169_bool != 0) {
		var_171_object = Obj();
		func_2318(var_171_object);
		SendPlayerEnemy(var_146_object, var_171_object);
	}
	var_172_bool = 0; var_173_object = Obj(); var_174_float = 0; var_175_float = 0; var_176_bool = 0; var_177_bool = 0;
	var_146_object = var_173_object;
	var_147_float = var_174_float;
	var_148_float = var_175_float;
	var_149_bool = var_176_bool;
	var_150_bool = var_177_bool;
	func_1672(var_156_bool, var_157_bool, var_172_bool, var_173_object, var_174_float, var_175_float, var_176_bool, var_177_bool);
	var_172_bool = var_157_bool;
	var_223_object = var_2_object;
	if(var_223_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_157_bool = var_145_bool;
	return 4;
	
}


func_2621(var_44_int, var_45_string)
{
	var_46_int = 0; var_47_int = 0;
	GetInvItemByName(var_47_int, var_45_string);
	var_47_int = var_44_int;
	return 2;
}


func_2111(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetScene(var_29_object);
	AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	var_33_object = Obj();
	var_22_object = var_33_object;
	func_1999(var_33_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2626(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	TaskCall(2);
	func_196(var_18_object);
	TaskReturn();
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_99_object, var_100_object)
{
	var_0_object = var_100_object;
	var_1_object = var_99_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_106_string = "";
		func_132(var_100_object, "Neutral");
		@@@var_0_object:SetMessage((int)518116);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518117, (int)-1, (int)19236);
		@@@var_0_object:AddReply((int)534584, (int)-1, (int)36222);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_130_bool = 0;
	func_2893(var_130_bool);
	if(var_130_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_131_string = var_3_string;
		if(var_131_string != 0) {
		} else {
			var_132_string = "";
			var_132_string = var_2_object;
			func_2228(var_132_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_145_string = var_3_string;
		if(var_145_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_2125(var_246_object)
{
	var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0);
	@@var_246_object:GetPosition(var_250_cvector);
	GetPosition(var_251_cvector);
	var_252_cvector = var_250_cvector - var_251_cvector;
	var_253_float = GetByIndex(var_252_cvector, 0);
	var_254_float = GetByIndex(var_252_cvector, 2);
	RotateAsync(var_253_float, var_254_float);
	return 6;
}


func_595(var_206_bool)
{
	var_206_bool = 1;
	return 0;
}


func_597()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2136(var_131_bool)
{
	var_132_bool = 0; var_133_bool = 0;
	IsLoaded(var_133_bool);
	var_133_bool = var_131_bool;
	return 2;
}


func_2141(var_38_bool, var_39_object, var_40_float)
{
	var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0;
	@@var_39_object:GetPosition(var_51_cvector);
	@@var_39_object:GetEyesHeight(var_50_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_50_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	GetPosition(var_52_cvector);
	GetEyesHeight(var_50_float);
	var_60_float = GetByIndex(var_52_cvector, 1);
	var_60_float = var_60_float + var_50_float;
	SetByIndex(var_52_cvector, 1) = var_60_float;
	var_53_cvector = var_51_cvector - var_52_cvector;
	var_61_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (float)0;
	var_62_int = var_53_cvector | var_53_cvector;
	var_63_float = sqrt(var_62_int);
	var_53_cvector = var_53_cvector / var_63_float;
	var_54_cvector = -var_53_cvector;
	var_64_float = var_53_cvector * var_40_float;
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	var_66_cvector = var_54_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2324(var_65_cvector, var_66_cvector);
	var_74_float = var_65_cvector * (int)25;
	var_75_int = var_64_float + var_74_float;
	var_55_cvector = var_75_int - CVector(0.0, 10.0, 0.0);
	var_56_cvector = var_52_cvector + var_55_cvector;
	IsOverrideActive(var_57_bool);
	var_77_bool = var_57_bool;
	if(var_77_bool != 0) {
		var_38_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_56_cvector, var_54_cvector, (bool)1);
	var_79_float = GetByIndex(var_55_cvector, 0);
	var_80_float = GetByIndex(var_55_cvector, 2);
	Rotate(var_79_float, var_80_float);
	var_81_bool = 0;
	func_2893(var_81_bool);
	if(var_81_bool != 0) {
	} else {
		HasAnimationTrack(var_58_bool, "head");
		var_83_bool = var_58_bool;
		if(var_83_bool == 0) goto Label_2204;
		LookAsyncCamera("head");
	}
Label_2204:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_38_bool = 1;
	return 18;
	
}


func_1630(var_2_object)
{
	KillTimer((int)1);
	var_18_object = var_2_object;
	if(var_18_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1796(var_16_object);
	return 0;
}


func_1127(var_1_object, var_2_object, var_4_bool)
{
	var_101_bool = 0; var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_bool = 0; var_106_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_1129:
	var_110_int = var_1_object + (int)1;
	var_111_int = "attack_begin" + var_110_int;
	HasAnimation(var_104_bool, "all", var_111_int);
	var_112_bool = var_104_bool == 0; //@nz
	if(var_112_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_1129;
	}
	var_2_object = 0;
	
Label_1143:
	var_115_int = var_2_object + (int)1;
	var_116_int = "attack" + var_115_int;
	IsExisting3DSound(var_105_bool, var_116_int);
	var_117_bool = var_105_bool == 0; //@nz
	if(var_117_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1143;

	}
	GetAnimationOffset(var_106_cvector, "all", "bjump");
	var_120_float = GetByIndex(var_106_cvector, 2);
	var_4_bool = -var_120_float;
	return 6;
	
}


func_616()
{
	var_131_bool = 0;
	func_2136(var_131_bool);
	var_134_bool = var_131_bool == 0; //@nz
	if(var_134_bool != 0) {
		func_2911();
	}
	return 0;
}


func_2671(var_20_bool, var_21_object, var_22_string)
{
	var_24_bool = var_22_string == "unholster";
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_2865(var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0xa8d";
	}
	var_28_bool = var_22_string == "player_shot";
	if(var_28_bool != 0) {
		var_29_bool = 0; var_30_object = Obj();
		var_21_object = var_30_object;
		func_2870(var_30_object);
		var_29_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0xa8d";
	}
	var_32_bool = var_22_string == "battle";
	if(var_32_bool != 0) {
		var_33_bool = 0; var_34_object = Obj();
		var_21_object = var_34_object;
		func_2875(var_34_object);
		var_33_bool = var_20_bool;
		return 0;
	}
	var_20_bool = 0;
	return 0;
}


func_132(var_2_object, var_106_string)
{
	var_107_bool = 0;
	func_2893(var_107_bool);
	var_108_bool = var_107_bool == 0; //@nz
	if(var_108_bool != 0) {
		return 0;
	}
	var_109_bool = var_106_string == var_2_object;
	if(var_109_bool != 0) {
		return 0;
	}
	var_110_string = ""; var_111_bool = 0;
	var_106_string = var_110_string;
	var_113_bool = var_106_string == "";
	if(var_113_bool != 0) {
		var_111_bool = 0;
	} else {
		var_111_bool = 1;
	}
	func_2244(var_110_string, var_111_bool);
	var_2_object = var_106_string;
	return 0;
	
}


func_1672(var_0_object, var_1_object, var_172_bool, var_173_object, var_174_float, var_175_float, var_176_bool, var_177_bool)
{
	var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj(); var_186_bool = 0; var_187_bool = 0; var_188_object = Obj(); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_float = 0; var_193_object = Obj();
	var_0_object = false;
	var_1_object = var_173_object;
	var_177_bool = var_187_bool;
	
Label_1676:
	var_194_bool = 0; var_195_object = Obj();
	var_173_object = var_195_object;
	func_1812(var_194_bool, var_195_object);
	var_198_bool = var_194_bool == 0; //@nz
	if(var_198_bool != 0) {
		var_172_bool = 0;
		return 16;
	}
	@@var_173_object:GetPosition(var_189_cvector);
	GetPosition(var_190_cvector);
	var_191_cvector = var_189_cvector - var_190_cvector;
	var_192_float = var_191_cvector | var_191_cvector;
	var_199_bool = 0;
	var_199_bool = 0;
	var_201_bool = var_175_float > (int)0;
	if(var_201_bool != 0) {
		var_202_float = var_175_float * var_175_float;
		var_203_bool = var_192_float > var_202_float;
		if(var_203_bool != 0) {
			var_199_bool = 1;
		}
	}
	if(var_199_bool != 0) {
		Stop();
		var_172_bool = 0;
		return 16;
	}
	var_204_float = var_174_float * var_174_float;
	var_205_bool = var_192_float > var_204_float;
	if(var_205_bool != 0) {
		@@var_173_object:GetPFPosition(var_189_cvector);
		FindPathTo(var_193_object, var_189_cvector);
		var_206_bool = var_193_object != 0; //@nn
		if(var_206_bool != 0) {
			var_193_object = var_188_object;
			var_193_object = 0;
		}
		var_207_bool = var_188_object != 0; //@nn
		if(var_207_bool != 0) {
			var_208_bool = var_187_bool;
			if(var_208_bool == 0) goto Label_1725;
			var_187_bool = 0;
			RotatePath(var_188_object, var_186_bool);
			var_209_bool = var_186_bool == 0; //@nz
			if(var_209_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_212_string = "";
				func_1819(var_212_string);
				var_213_string = "";
				func_1821(var_213_string);
				FollowPath(var_188_object, var_176_bool, var_186_bool, var_212_string, var_213_string);
				var_214_bool = var_186_bool == 0; //@nz
				if(var_214_bool != 0) {
					var_215_object = var_0_object;
					if(var_215_object != 0) {
						var_188_object = 0;
						goto Label_1772;
					EMIT "GOTO 0x6d1";
					}
				} else {
					var_188_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_186_bool);
					var_218_bool = var_186_bool == 0; //@nz
					if(var_218_bool != 0) {
						var_219_object = var_0_object;
						if(var_219_object != 0) {
							var_188_object = 0;
							goto Label_1772;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1772;
	}
			var_193_object = 0;
			goto Label_1770;

		Label_1770:
			var_188_object = 0;

		}
		goto Label_1676;
	}
Label_1772:
	var_172_bool = !var_0_object;
	return 16;
	
}


func_1162(var_0_object, var_398_float, var_399_int)
{
	var_400_object = Obj(); var_401_float = 0; var_402_float = 0; var_403_object = Obj(); var_404_float = 0; var_405_float = 0;
	var_407_float = var_398_float * (float)0.8999999761581421;
	GetVictim(var_407_float, var_403_object);
	ReportAttack(var_0_object);
	var_408_bool = var_403_object == var_0_object;
	if(var_408_bool != 0) {
		var_409_float = 0; var_410_object = Obj(); var_411_int = 0;
		var_403_object = var_410_object;
		var_399_int = var_411_int;
		func_892(var_411_int);
		var_409_float = var_404_float;
		var_412_float = 0; var_413_object = Obj(); var_414_float = 0; var_415_int = 0;
		var_403_object = var_413_object;
		var_404_float = var_414_float;
		var_416_int = 0; var_417_object = Obj(); var_418_int = 0;
		var_403_object = var_417_object;
		var_399_int = var_418_int;
		func_895(var_418_int);
		var_416_int = var_415_int;
		func_1861(var_412_float, var_413_object, var_414_float, var_415_int);
		var_412_float = var_405_float;
		var_477_int = 0;
		func_1545(var_477_int);
		ReportHit(var_0_object, var_477_int, var_405_float, var_404_float);
		var_478_object = Obj(); var_479_float = 0;
		var_403_object = var_478_object;
		var_405_float = var_479_float;
		func_1552();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2703(var_35_object, var_36_string)
{
	var_38_bool = var_36_string == "unholster";
	if(var_38_bool != 0) {
		var_35_object = Obj();
		func_2868();
	} else {
		var_41_bool = var_36_string == "player_shot";
		if(var_41_bool != 0) {
			var_35_object = Obj();
			func_2873();
			goto Label_2727;
		}
		var_44_bool = var_36_string == "battle";
		if(var_44_bool == 0) goto Label_2727;
		var_35_object = Obj();
		func_2878();
	}
Label_2727:
	return 0;
	
}


func_2210()
{
	var_150_bool = 0; var_151_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_153_bool = 0;
	func_2893(var_153_bool);
	if(var_153_bool != 0) {
	} else {
		HasAnimationTrack(var_151_bool, "head");
		var_155_bool = var_151_bool;
		if(var_155_bool == 0) goto Label_2227;
		UnlookAsync("head");
	}
Label_2227:
	return 2;
	
}


func_2728(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	var_21_bool = 0;
	var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_2865(var_23_object);
	if(var_22_bool != 0) {
		var_24_bool = 0; var_25_object = Obj();
		var_18_object = var_25_object;
		func_1844(var_24_bool, var_25_object);
		if(var_24_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		@@var_18_object:IsWeaponHolstered(var_20_bool);
		var_28_bool = var_20_bool == 0; //@nz
		if(var_28_bool != 0) {
			var_17_bool = 1;
			return 2;
		}
	}
	var_17_bool = 0;
	return 2;
}


func_1201(var_0_object, var_1_object, var_361_bool, var_362_float)
{
	var_363_int = 0; var_364_bool = 0; var_365_int = 0; var_366_string = ""; var_367_int = 0; var_368_bool = 0; var_369_int = 0; var_370_string = "";
	func_1540(var_370_string);
	irand(var_367_int, var_1_object);
	var_367_int = var_367_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2387();
	var_379_int = "attack_begin" + var_367_int;
	PlayAnimation("all", var_379_int);
	WaitForAnimEnd();
	func_1508(var_369_int, var_370_string);
	var_395_bool = 0; var_396_object = Obj();
	var_396_object = var_0_object;
	func_1975(var_395_bool, var_396_object);
	var_397_bool = var_395_bool == 0; //@nz
	if(var_397_bool != 0) {
		StopAsync();
		var_361_bool = 0;
		return 8;
	}
	var_398_float = 0; var_399_int = 0;
	var_362_float = var_398_float;
	var_367_int = var_399_int;
	func_1162(var_370_string, var_398_float, var_399_int);
	var_482_int = "attack_middle" + var_367_int;
	HasAnimation(var_368_bool, "all", var_482_int);
	var_483_bool = var_368_bool;
	if(var_483_bool != 0) {
		func_2387();
		var_486_int = "attack_middle" + var_367_int;
		PlayAnimation("all", var_486_int);
		WaitForAnimEnd();
		func_1540(var_370_string);
		var_487_bool = 0; var_488_object = Obj();
		var_488_object = var_0_object;
		func_1975(var_487_bool, var_488_object);
		var_489_bool = var_487_bool == 0; //@nz
		if(var_489_bool != 0) {
			StopAsync();
			var_361_bool = 0;
			return 8;
		}
		var_490_float = 0; var_491_int = 0;
		var_362_float = var_490_float;
		var_367_int = var_491_int;
		func_1162(var_370_string, var_490_float, var_491_int);
		var_369_int = 1;

	Label_1278:
		var_493_int = "attack_middle" + var_367_int;
		var_495_int = var_493_int + "_";
		var_370_string = var_495_int + var_369_int;
		HasAnimation(var_368_bool, "all", var_370_string);
		var_497_bool = var_368_bool == 0; //@nz
		if(var_497_bool != 0) {
		} else {
			func_2387();
			PlayAnimation("all", var_370_string);
			WaitForAnimEnd();
			func_1540(var_370_string);
			var_513_bool = 0; var_514_object = Obj();
			var_514_object = var_0_object;
			func_1975(var_513_bool, var_514_object);
			var_515_bool = var_513_bool == 0; //@nz
			if(var_515_bool != 0) {
				StopAsync();
				var_361_bool = 0;
				var_516_float = 0; var_517_int = 0;
				var_362_float = var_516_float;
				var_367_int = var_517_int;
				func_1162(var_370_string, var_516_float, var_517_int);
				var_369_int = var_369_int + (int)1;
				goto Label_1278;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_501_int = "attack_end" + var_367_int;
	PlayAnimation("all", var_501_int);
	var_502_bool = 0;
	func_1554(var_502_bool);
	if(var_502_bool != 0) {
		var_503_bool = 0; var_504_float = 0;
		func_1338(var_503_bool, (float)0.75);
		StopAsync();
	}
	var_361_bool = 1;
	return 8;
	
}


func_2228(var_132_string)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0;
	lshHasAnimation(var_136_bool, var_132_string);
	var_139_bool = var_136_bool;
	if(var_139_bool != 0) {
		lshGetAnimTimes(var_132_string, var_137_float, var_138_float);
		lshPlayAnimation(var_137_float, var_138_float, (bool)0);
	} else {
		var_142_int = "Can't find lsh animation : " + var_132_string;
		Trace(var_142_int);
	}
	return 6;
	
}


func_2751(var_29_object)
{
	var_29_object = Obj();
	func_2868();
	return 0;
}


func_2244(var_110_string, var_111_bool)
{
	var_114_bool = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0;
	lshHasAnimation(var_117_bool, var_110_string);
	var_120_bool = var_117_bool;
	if(var_120_bool != 0) {
		lshGetAnimTimes(var_110_string, var_118_float, var_119_float);
		lshPlayAnimation(var_118_float, var_119_float, var_111_bool);
	} else {
		var_122_int = "Can't find lsh animation : " + var_110_string;
		Trace(var_122_int);
	}
	return 6;
	
}


func_2757(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_1844(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		var_24_object = Obj();
		func_2318(var_24_object);
		ReportReputationChange(var_19_object, var_24_object, (float)-0.019999999552965164);
	}
	return 0;
}


func_196(var_18_object)
{
	EventDisable(0);
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_229(var_19_object);
	var_18_object = Obj();
	func_2919();
	EventEnable(0);
	
Label_207:
	Hold();
	goto Label_207;
}
EMIT "Return(); Pop(0)";


func_2770(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	var_22_bool = var_18_string == "heal";
	if(var_22_bool != 0) {
		FindActor(var_20_object, "player");
		var_24_bool = 0; var_25_object = Obj();
		var_20_object = var_25_object;
		func_2880(var_25_object);
		var_24_bool = var_17_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_17_bool = 0;
	return 2;
}


func_2259(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0);
	@@var_20_object:GetEyesHeight(var_23_float);
	var_24_cvector = CVector(0.0, 0.0, 0.0);
	var_25_float = GetByIndex(var_24_cvector, 1);
	var_23_float = var_25_float;
	SetByIndex(var_24_cvector, 1) = var_25_float;
	LookAsync(var_20_object, "head", var_24_cvector);
	return 4;
}


func_2270()
{
	var_19_bool = 0;
	func_2893(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2786(var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj();
	var_30_bool = var_26_string == "heal";
	if(var_30_bool != 0) {
		FindActor(var_28_object, "player");
		var_28_object = Obj();
		func_2883();
		var_28_object = 0;
	}
	return 2;
}


func_229(var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0);
	var_40_bool = var_19_object == 0; //@ne
	if(var_40_bool != 0) {
		var_41_string = "";
		func_320("fdie");
	} else {
		@@var_19_object:GetPosition(var_30_cvector);
		GetPosition(var_31_cvector);
		GetDirection(var_32_cvector);
		var_33_cvector = var_31_cvector - var_30_cvector;
		var_73_float = GetByIndex(var_33_cvector, 0);
		var_74_float = GetByIndex(var_32_cvector, 0);
		var_75_float = var_73_float * var_74_float;
		var_76_float = GetByIndex(var_33_cvector, 2);
		var_77_float = GetByIndex(var_32_cvector, 2);
		var_78_float = var_76_float * var_77_float;
		var_79_int = var_75_float + var_78_float;
		var_81_bool = var_79_int >= (int)0;
		if(var_81_bool != 0) {
			var_34_string = "fdie";
		} else {
				var_34_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_19_object = var_35_object;
		var_84_bool = IsFuncExist(var_19_object, "GetScriptProperty", (int)2);
		if(var_84_bool != 0) {
			@@var_19_object:HasScriptProperty(var_36_bool, "Owner");
			var_86_bool = var_36_bool;
			if(var_86_bool != 0) {
				@@var_19_object:GetScriptProperty(var_35_object, "Owner");
				var_88_bool = var_35_object == 0; //@ne
				if(var_88_bool != 0) {
					var_19_object = var_35_object;
				}
			}
		}
		var_91_bool = IsFuncExist(var_35_object, "@GetEyesHeight", (int)1);
		if(var_91_bool != 0) {
			@@var_35_object:GetEyesHeight(var_38_float);
			var_39_cvector = CVector(0.0, 0.0, 0.0);
			var_92_float = GetByIndex(var_39_cvector, 1);
			var_38_float = var_92_float;
			SetByIndex(var_39_cvector, 1) = var_92_float;
			LookAsync(var_19_object, "head", var_39_cvector);
			var_37_bool = 1;
		} else {
			var_37_bool = 0;

		}
		var_94_string = "";
		var_34_string = var_94_string;
		func_2277(var_94_string);
		PlayAnimation("all", var_34_string);
		WaitForAnimEnd();
		var_96_bool = var_37_bool;
		if(var_96_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_34_string);
		RemoveEnvelope();
		var_35_object = 0;
	}
	return 20;
	
}


func_2277(var_42_string)
{
	var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	IsExisting3DSound(var_51_bool, var_42_string);
	var_59_bool = var_51_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_52_int = 0;

	Label_2283:
		var_61_int = var_52_int + (int)1;
		var_62_int = var_42_string + var_61_int;
		IsExisting3DSound(var_53_bool, var_62_int);
		var_63_bool = var_53_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_52_int = var_52_int + (int)1;
			goto Label_2283;
		}
		var_64_bool = var_52_int == 0; //@nz
		if(var_64_bool != 0) {
			return 16;
		}
		irand(var_54_int, var_52_int);
		var_66_int = var_54_int + (int)1;
		var_42_string = var_42_string + var_66_int;
	}
	Is3DSoundLoaded(var_55_bool, var_42_string);
	var_67_bool = var_55_bool;
	if(var_67_bool != 0) {
		GetEyesHeight(var_56_float);
		GetDirection(var_57_cvector);
		var_58_cvector = var_57_cvector * (int)50;
		var_69_float = GetByIndex(var_58_cvector, 1);
		var_69_float = var_69_float + var_56_float;
		SetByIndex(var_58_cvector, 1) = var_69_float;
		PlayGlobalSound(var_42_string, var_58_cvector);
	}
	return 16;
	
}


func_1774(var_0_object, var_1_object, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_object;
	func_1812(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2799(var_187_string, var_188_int)
{
	var_189_string = ""; var_190_string = "";
	var_191_int = var_188_int;
	if(var_191_int != 0) {
		"idle" = "idle" + var_188_int;
	}
	var_190_string = var_187_string;
	return 2;
}


func_2806(var_181_int)
{
	var_182_int = 0; var_183_bool = 0; var_184_int = 0; var_185_bool = 0;
	var_184_int = 0;
	
Label_2808:
	var_187_string = ""; var_188_int = 0;
	var_184_int = var_188_int;
	func_2799(var_187_string, var_188_int);
	HasAnimation(var_185_bool, "all", var_187_string);
	var_192_bool = var_185_bool == 0; //@nz
	if(var_192_bool != 0) {
	} else {
		var_184_int = var_184_int + (int)1;
		goto Label_2808;
	}
	var_184_int = var_181_int;
	return 4;
	
}


func_1796(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2823(var_28_int, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj();
	var_29_object = var_31_object;
	func_1975(var_30_bool, var_31_object);
	if(var_30_bool != 0) {
		var_28_int = 2;
	} else {
		var_28_int = 0;
	}
	return 0;
	
}


func_2318(var_135_object)
{
	var_136_object = Obj(); var_137_object = Obj();
	self(var_137_object);
	var_137_object = var_135_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2833(var_68_object)
{
	var_69_object = Obj();
	var_68_object = var_69_object;
	TaskCall(5);
	func_884(var_69_object);
	TaskReturn();
	return 0;
}


func_1812(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj();
	var_28_object = var_30_object;
	func_1975(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
	return 0;
}


func_789(var_0_object, var_1_object)
{
	var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_bool = 0; var_142_object = Obj(); var_143_bool = 0; var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_bool = 0; var_148_object = Obj(); var_149_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_144_float, (float)0.5);
	Sleep(var_144_float);
	
Label_797:
	var_151_bool = var_0_object == 0; //@nz
	if(var_151_bool != 0) {
		var_152_bool = var_1_object == 0; //@nz
		if(var_152_bool != 0) {

		Label_801:
			GetPosition(var_146_cvector);
			var_153_float = 0;
			func_848(var_153_float);
			GetRandomPFPointInCircle(var_145_cvector, var_146_cvector, var_153_float, var_147_bool);
			var_156_bool = var_147_bool;
			if(var_156_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_801;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_817;
	
Label_817:
	var_157_object = Obj(); var_158_cvector = CVector(0,0,0);
	var_145_cvector = var_158_cvector;
	func_878(var_157_object, var_158_cvector);
	var_157_object = var_148_object;
	var_161_bool = var_148_object != 0; //@nn
	if(var_161_bool != 0) {
		RotatePath(var_148_object, var_149_bool);
		var_162_bool = var_149_bool;
		if(var_162_bool != 0) {
			var_163_bool = 0;
			func_876(var_163_bool);
			FollowPath(var_148_object, var_163_bool, var_149_bool);
			var_148_object = 0;
			var_164_bool = var_149_bool;
			if(var_164_bool != 0) {
				TaskCall(3);
				func_516();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_148_object = 0;
	goto Label_797;
	
}


func_2324(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0;
	var_58_int = var_49_cvector | var_49_cvector;
	var_57_float = sqrt(var_58_int);
	var_59_float = 9.999999974752427e-07;
	var_60_bool = var_57_float < var_59_float;
	if(var_60_bool != 0) {
		var_48_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_48_cvector = var_49_cvector / var_57_float;
	return 2;
}


func_2841(var_25_int)
{
	var_25_int = 0;
	return 0;
}


func_1819(var_212_string)
{
	var_212_string = "walk";
	return 0;
}


func_2844()
{
	return 0;
}


func_1821(var_213_string)
{
	var_213_string = "run";
	return 0;
}


func_2846(var_19_int)
{
	var_19_int = 0;
	return 0;
}


func_1823(var_440_string, var_441_int)
{
	var_443_bool = var_441_int == (int)2;
	if(var_443_bool != 0) {
		var_440_string = "fire";
		return 0;
	EMIT "GOTO 0x72b";
	}
	var_445_bool = var_441_int == (int)1;
	if(var_445_bool != 0) {
		var_440_string = "bullet";
		return 0;
	}
	var_440_string = "phys";
	return 0;
}


func_2334(var_450_float, var_451_float, var_452_float)
{
	var_455_bool = var_451_float < var_452_float;
	if(var_455_bool != 0) {
		var_451_float = var_450_float;
	} else {
		var_452_float = var_450_float;
	}
	return 0;
	
}


func_2849()
{
	return 0;
}


func_2851(var_46_int)
{
	var_46_int = 0;
	return 0;
}


func_2341(var_460_float, var_461_float, var_462_float, var_463_float)
{
	var_464_bool = var_461_float < var_462_float;
	if(var_464_bool != 0) {
		var_462_float = var_460_float;
		return 0;
	}
	var_465_bool = var_461_float > var_463_float;
	if(var_465_bool != 0) {
		var_463_float = var_460_float;
		return 0;
	}
	var_461_float = var_460_float;
	return 0;
}


func_2854()
{
	return 0;
}


func_2856(var_19_int)
{
	var_19_int = 2;
	return 0;
}


func_2859(var_25_object)
{
	var_26_object = Obj();
	var_25_object = var_26_object;
	func_2900(var_26_object);
	return 0;
}


func_1837(var_50_cvector, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	@@var_51_object:GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
	return 4;
}


func_2352(var_468_float)
{
	var_469_object = Obj(); var_470_object = Obj();
	CreateFloatVector(var_470_object);
	@@var_470_object:add(var_468_float);
	var_472_bool = var_468_float < (int)0;
	if(var_472_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_470_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2865(var_22_bool)
{
	var_22_bool = 0;
	return 0;
}


func_1844(var_24_bool, var_25_object)
{
	var_26_bool = 0; var_27_bool = 0;
	IsPlayerActor(var_25_object, var_27_bool);
	var_27_bool = var_24_bool;
	return 2;
}


func_2868()
{
	return 0;
}


func_2870(var_29_bool)
{
	var_29_bool = 0;
	return 0;
}


func_1849(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0;
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", (int)2);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	@@var_52_object:HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
	return 2;
}


func_1338(var_503_bool, var_504_float)
{
	var_505_float = 0; var_506_bool = 0; var_507_float = 0; var_508_bool = 0;
	rand(var_507_float);
	var_509_bool = var_507_float < var_504_float;
	if(var_509_bool != 0) {

	Label_1343:
		IsAnimationPlaying(var_508_bool);
		var_510_bool = var_508_bool == 0; //@nz
		if(var_510_bool != 0) {
		} else {
			var_511_bool = 0;
			func_1436(var_511_bool);
			if(var_511_bool != 0) {
				var_503_bool = 1;
				sync();
				goto Label_1343;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1540(var_508_bool);
	}
	goto Label_1363;
	
Label_1363:
	var_503_bool = 0;
	return 4;
	
}


func_2875(var_33_bool)
{
	var_33_bool = 0;
	return 0;
}


func_2873()
{
	return 0;
}


func_2878()
{
	return 0;
}


func_320(var_41_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_42_string = "";
	var_41_string = var_42_string;
	func_2277(var_42_string);
	PlayAnimation("all", var_41_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_41_string);
	RemoveEnvelope();
	return 0;
}


func_2369(var_26_int)
{
	var_27_float = 0; var_28_float = 0;
	GetGameTime(var_28_float);
	var_30_int = 0;
	var_30_int = var_28_float / (int)24;
	var_26_int = (int)1 + var_30_int;
	return 2;
}


func_2880(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_2883()
{
	return 0;
}


func_2885(var_87_int)
{
	var_87_int = 515568;
	return 0;
}


func_1861(var_412_float, var_413_object, var_414_float, var_415_int)
{
	var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0; var_425_int = 0; var_426_string = ""; var_427_int = 0; var_428_float = 0; var_429_float = 0; var_430_float = 0;
	var_431_bool = 0; var_432_object = Obj(); var_433_string = "";
	var_413_object = var_432_object;
	func_1849(var_431_bool, var_432_object, "health");
	var_434_bool = var_431_bool == 0; //@nz
	if(var_434_bool != 0) {
		var_412_float = 0.0;
		return 12;
	}
	var_435_bool = 0; var_436_object = Obj(); var_437_string = "";
	var_413_object = var_436_object;
	func_1849(var_435_bool, var_436_object, "armor");
	var_438_bool = var_435_bool == 0; //@nz
	if(var_438_bool != 0) {
		var_425_int = 0;
	} else {
			@@var_413_object:GetProperty("armor", var_425_int);
	}
	var_440_string = ""; var_441_int = 0;
	var_415_int = var_441_int;
	func_1823(var_440_string, var_441_int);
	var_426_string = "armor_" + var_440_string;
	var_446_bool = 0; var_447_object = Obj(); var_448_string = "";
	var_413_object = var_447_object;
	var_426_string = var_448_string;
	func_1849(var_446_bool, var_447_object, var_448_string);
	var_449_bool = var_446_bool == 0; //@nz
	if(var_449_bool != 0) {
		var_427_int = 0;
	} else {
		@@var_413_object:GetProperty(var_426_string, var_427_int);

	}
	var_450_float = 0; var_451_float = 0; var_452_float = 0;
	var_453_int = var_425_int + var_427_int;
	var_451_float = var_453_int / (float)100.0;
	func_2334(var_450_float, var_451_float, (float)1);
	var_450_float = var_428_float;
	@@var_413_object:GetProperty("health", var_429_float);
	var_458_int = (int)1 - var_428_float;
	var_430_float = var_414_float * var_458_int;
	var_460_float = 0; var_461_float = 0; var_462_float = 0; var_463_float = 0;
	var_461_float = var_429_float - var_430_float;
	func_2341(var_460_float, var_461_float, (float)0, (float)1);
	@@var_413_object:SetProperty("health", var_460_float);
	var_466_bool = 0; var_467_object = Obj();
	var_413_object = var_467_object;
	func_1844(var_466_bool, var_467_object);
	if(var_466_bool != 0) {
		var_468_float = 0;
		var_468_float = -var_430_float;
		func_2352(var_468_float);
	}
	var_430_float = var_412_float;
	return 12;
	
}


func_2887(var_86_int)
{
	var_86_int = 503353;
	return 0;
}


func_2889(var_88_string)
{
	var_88_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_2378(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsPlayerActor(var_19_object, var_21_bool);
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2891(var_89_string)
{
	var_89_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_2893(var_81_bool)
{
	var_81_bool = 0;
	return 0;
}


func_2895()
{
	var_17_bool = 0;
	func_2446((bool)1);
	return 0;
}


func_848(var_153_float)
{
	var_154_float = 0; var_155_float = 0;
	GetCameraFarDistance(var_155_float);
	var_155_float = var_153_float;
	return 2;
}


func_2387()
{
	var_373_object = Obj(); var_374_object = Obj();
	GetScene(var_374_object);
	var_376_object = Obj();
	func_2318(var_376_object);
	BroadcastMessage("battle", var_376_object, var_374_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2900(var_26_object)
{
	var_27_int = 0; var_28_object = Obj();
	var_26_object = var_28_object;
	TaskCall(0);
	func_0(var_29_object, var_27_int, var_28_object);
	TaskReturn();
	return 0;
}


func_1365(var_0_object, var_300_bool, var_301_float)
{
	var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_bool = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0;
	
Label_1366:
	IsAnimationPlaying(var_307_bool);
	var_312_bool = var_307_bool == 0; //@nz
	if(var_312_bool != 0) {
	} else {
		var_313_bool = 0;
		func_1436(var_313_bool);
		if(var_313_bool != 0) {
			var_300_bool = 1;
			return 10;
		}
		var_356_bool = 0; var_357_object = Obj();
		var_357_object = var_0_object;
		func_1975(var_356_bool, var_357_object);
		var_358_bool = var_356_bool == 0; //@nz
		if(var_358_bool != 0) {
			var_300_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_308_cvector);
		GetPFPosition(var_309_cvector);
		var_310_cvector = var_308_cvector - var_309_cvector;
		var_311_float = var_310_cvector | var_310_cvector;
		var_359_float = var_301_float * var_301_float;
		var_360_bool = var_311_float < var_359_float;
		if(var_360_bool != 0) {
			var_361_bool = 0; var_362_float = 0;
			var_301_float = var_362_float;
			func_1201(var_310_cvector, var_311_float, var_361_bool, var_362_float);
			var_300_bool = 1;
			sync();
			goto Label_1366;
		}
		return 10;
	}
	func_1540(var_311_float);
	var_300_bool = 0;
	return 10;
	
}


func_2908(var_21_bool)
{
	var_21_bool = 0;
	return 0;
}


func_860(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_2398(var_90_int)
{
	var_91_int = 0; var_92_int = 0;
	GetVariable("branch", var_92_int);
	var_95_bool = var_92_int == (int)0;
	if(var_95_bool != 0) {
		var_90_int = 1;
		return 2;
	EMIT "GOTO 0x96d";
	}
	var_97_bool = var_92_int == (int)1;
	if(var_97_bool != 0) {
		var_90_int = 2;
		return 2;
	}
	var_90_int = 3;
	return 2;
}


func_2911()
{
	var_135_object = Obj();
	func_2318(var_135_object);
	RemoveActor(var_135_object);
	Hold();
	return 0;
}


func_2919()
{
	return 0;
}


func_876(var_163_bool)
{
	var_163_bool = 0;
	return 0;
}


func_878(var_157_object, var_158_cvector)
{
	var_159_object = Obj(); var_160_object = Obj();
	FindShiftedPathTo(var_160_object, var_158_cvector);
	var_160_object = var_157_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2415(var_23_int, var_24_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0;
	var_38_bool = var_23_int > var_24_int;
	if(var_38_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_36_int = 0;
	var_40_bool = var_23_int != var_24_int;
	if(var_40_bool != 0) {
		var_41_int = var_24_int - var_23_int;
		irand(var_36_int, var_41_int);
	} else {
		var_50_bool = var_23_int == (int)0;
		if(var_50_bool == 0) goto Label_2433;
		return 4;
	}
Label_2433:
	var_36_int = var_36_int + var_23_int;
	var_43_bool = var_36_int == (int)0;
	if(var_43_bool != 0) {
		return 4;
	}
	var_44_int = 0; var_45_string = "";
	func_2621(var_44_int, "Money");
	AddItem(var_37_bool, var_44_int, (int)0, var_36_int);
	return 4;
	
}


func_884(var_69_object)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_float = 0;
	var_69_object = var_76_object;
	func_898(var_72_int, var_73_bool, var_74_float, var_75_int, var_69_object, var_76_object, (bool)1, (float)180.0);
	return 0;
}


func_892(var_409_float)
{
	var_409_float = 0.05000000074505806;
	return 0;
}


func_895(var_416_int)
{
	var_416_int = 0;
	return 0;
}


func_1408(var_0_object, var_315_bool)
{
	var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_float = 0; var_325_float = 0;
	var_326_bool = 0; var_327_object = Obj();
	var_327_object = var_0_object;
	func_1975(var_326_bool, var_327_object);
	var_328_bool = var_326_bool == 0; //@nz
	if(var_328_bool != 0) {
		var_315_bool = 0;
		return 10;
	}
	var_329_bool = 0;
	func_1497(var_325_float, var_329_bool);
	if(var_329_bool != 0) {
		@@@var_0_object:GetPFPosition(var_321_cvector);
		GetPFPosition(var_322_cvector);
		var_323_cvector = var_321_cvector - var_322_cvector;
		var_324_float = var_323_cvector | var_323_cvector;
		@@@var_0_object:GetAttackDistance(var_325_float);
		var_325_float = var_325_float + (int)50;
		var_331_float = var_325_float * var_325_float;
		var_315_bool = var_324_float <= var_331_float;
		return 10;
	}
	var_315_bool = 0;
	return 10;
}


func_898(var_0_object, var_3_string, var_5_bool, var_76_object, var_77_bool, var_78_float, var_151_bool, var_241_bool)
{
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_float = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_float = 0;
	func_1127(var_98_cvector, var_99_bool, var_100_float);
	var_5_bool = 0;
	var_125_bool = IsFuncExist(var_76_object, "@GetAttackDistance", (int)1);
	if(var_125_bool != 0) {
		@@var_76_object:GetAttackDistance(var_90_float);
		var_90_float = var_90_float + (int)50;
	} else {
							var_78_float = var_90_float;
	}
	var_128_bool = var_90_float >= (int)150;
	if(var_128_bool != 0) {
		var_90_float = 150;
	}
	var_3_string = false;
	var_0_object = var_76_object;
	IsPlayerActor(var_0_object, var_93_bool);
	var_129_bool = var_93_bool;
	if(var_129_bool != 0) {
		PlayGlobalMusic("attack");
		var_131_object = Obj();
		func_2318(var_131_object);
		SendPlayerEnemy(var_76_object, var_131_object);
	}
	var_132_bool = var_77_bool;
	if(var_132_bool != 0) {
		var_94_bool = 0;
	} else {
						var_94_bool = 1;

	}
	var_95_float = (float)400.0 + var_90_float;
	
Label_938:
	var_134_bool = 0;
	var_134_bool = 0;
	var_135_bool = 0; var_136_object = Obj();
	var_136_object = var_0_object;
	func_1975(var_135_bool, var_136_object);
	if(var_135_bool != 0) {
		var_137_bool = var_3_string == 0; //@nz
		if(var_137_bool != 0) {
			var_134_bool = 1;
		}
	}
	if(var_134_bool != 0) {
		func_1540(var_100_float);
		@@@var_0_object:GetPFPosition(var_91_cvector);
		GetPFPosition(var_92_cvector);
		var_96_cvector = var_91_cvector - var_92_cvector;
		var_97_float = var_96_cvector | var_96_cvector;
		var_143_float = var_95_float * var_95_float;
		var_144_bool = var_97_float >= var_143_float;
		if(var_144_bool != 0) {
			var_145_bool = 0; var_146_object = Obj(); var_147_float = 0; var_148_float = 0; var_149_bool = 0; var_150_bool = 0;
			var_146_object = var_0_object;
			var_90_float = var_147_float;
			TaskCall(6);
			func_1567(var_153_bool, var_145_bool, var_146_object, var_147_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_226_bool = var_151_bool == 0; //@nz
			if(var_226_bool != 0) {
			} else {
				var_94_bool = 0;
		} else {
				var_232_float = var_78_float * var_78_float;
				var_233_bool = var_97_float >= var_232_float;
				if(var_233_bool != 0) {
					@@@var_0_object:GetPFPosition(var_98_cvector);
					CanReachByPF(var_99_bool, var_98_cvector);
					var_234_bool = var_99_bool == 0; //@nz
					if(var_234_bool != 0) {
						var_235_bool = 0; var_236_object = Obj(); var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_bool = 0;
						var_236_object = var_0_object;
						var_90_float = var_237_float;
						TaskCall(6);
						func_1567(var_243_bool, var_235_bool, var_236_object, var_237_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_244_bool = var_241_bool == 0; //@nz
						if(var_244_bool != 0) {
							goto Label_1110;
						}
						var_94_bool = 0;
						goto Label_938;
					}
					var_245_bool = var_94_bool == 0; //@nz
					if(var_245_bool != 0) {
						var_246_object = Obj();
						var_246_object = var_0_object;
						func_2125(var_246_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1540(var_100_float);
						StopAsync();
						var_94_bool = 1;
						var_257_bool = 0; var_258_object = Obj();
						var_258_object = var_0_object;
						func_1975(var_257_bool, var_258_object);
						var_259_bool = var_257_bool == 0; //@nz
						if(var_259_bool != 0) {
							goto Label_1110;
						}
					}
					rand(var_100_float);
					var_260_bool = 0;
					var_262_bool = var_100_float < (float)0.25;
					if(var_262_bool != 1) {
						var_263_bool = 0;
						func_1497((bool)1, var_263_bool);
						if(var_263_bool != 1) {
							var_260_bool = 0;
						}
					}
					if(var_260_bool != 0) {
						Face(var_0_object);
						func_1547();
						PlayAnimation("all", "attack_stay");
						var_300_bool = 0; var_301_float = 0;
						var_78_float = var_301_float;
						func_1365(var_100_float, var_300_bool, var_301_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1540(var_100_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_522_bool = 0;
						func_1497(var_100_float, var_522_bool);
						var_523_bool = var_522_bool == 0; //@nz
						if(var_523_bool == 0) goto Label_1100;
						var_524_bool = 0; var_525_object = Obj();
						var_525_object = var_0_object;
						func_1975(var_524_bool, var_525_object);
						var_526_bool = var_524_bool == 0; //@nz
						if(var_526_bool != 0) {
							goto Label_1110;
						}
						@@@var_0_object:GetPFPosition(var_91_cvector);
						GetPFPosition(var_92_cvector);
						var_96_cvector = var_91_cvector - var_92_cvector;
						var_97_float = var_96_cvector | var_96_cvector;
						var_527_float = var_78_float * var_78_float;
						var_528_bool = var_97_float < var_527_float;
						if(var_528_bool == 0) goto Label_1100;
						var_529_bool = 0; var_530_float = 0;
						var_78_float = var_530_float;
						func_1201(var_99_bool, var_100_float, var_529_bool, var_530_float);
						var_531_bool = var_529_bool == 0; //@nz
						if(var_531_bool == 0) goto Label_1100;
						goto Label_1110;
				}
					var_532_bool = 0; var_533_float = 0;
					var_78_float = var_533_float;
					func_1201(var_99_bool, var_100_float, var_532_bool, var_533_float);
					var_534_bool = var_532_bool == 0; //@nz
					if(var_534_bool != 0) {
						goto Label_1110;
					}
					var_94_bool = 1;

				}
			Label_1100:
				goto Label_1109;
		}
		Label_1109:
			goto Label_938;

		}
	}
Label_1110:
	WaitForAnimEnd();
	var_227_string = var_3_string;
	if(var_227_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_230_bool = var_93_bool;
	if(var_230_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1934(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
}


func_2446(var_17_bool)
{
	var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_bool = 0;
	var_22_bool = var_17_bool;
	if(var_22_bool != 0) {
		var_23_int = 0; var_24_int = 0;
		var_26_int = 0;
		func_2369(var_26_int);
		var_33_float = var_26_int * (int)100;
		var_24_int = (int)100 + var_33_float;
		func_2415((int)0, var_24_int);
		irand(var_20_int, (int)8);
		var_53_bool = var_20_int == (int)0;
		if(var_53_bool != 0) {
			var_54_int = 0; var_55_string = "";
			func_2621(var_54_int, "lemon");
			AddItem(var_21_bool, var_54_int, (int)0, (int)1);
		} else {
			var_59_bool = var_20_int == (int)1;
			if(var_59_bool != 0) {
				var_60_int = 0; var_61_string = "";
				func_2621(var_60_int, "rusk");
				AddItem(var_21_bool, var_60_int, (int)0, (int)1);
				goto Label_2534;
			}
			var_65_bool = var_20_int == (int)2;
			if(var_65_bool != 0) {
				var_66_int = 0; var_67_string = "";
				func_2621(var_66_int, "hook");
				AddItem(var_21_bool, var_66_int, (int)0, (int)1);
				goto Label_2534;
			}
			var_71_bool = var_20_int == (int)4;
			if(var_71_bool != 0) {
				var_72_int = 0; var_73_string = "";
				func_2621(var_72_int, "syringe");
				AddItem(var_21_bool, var_72_int, (int)0, (int)1);
				goto Label_2534;
			}
			var_77_bool = var_20_int == (int)5;
			if(var_77_bool != 0) {
				var_78_int = 0; var_79_string = "";
				func_2621(var_78_int, "watch");
				AddItem(var_21_bool, var_78_int, (int)0, (int)1);
				goto Label_2534;
			}
			var_83_bool = var_20_int == (int)6;
			if(var_83_bool == 0) goto Label_2534;
			var_84_int = 0; var_85_string = "";
			func_2621(var_84_int, "razor");
			AddItem(var_21_bool, var_84_int, (int)0, (int)1);
	}
		var_88_int = 0; var_89_int = 0;
		var_91_int = 0;
		func_2369(var_91_int);
		var_93_float = var_91_int * (int)50;
		var_89_int = (int)50 + var_93_float;
		func_2415((int)0, var_89_int);
		irand(var_20_int, (int)7);
		var_96_bool = var_20_int == (int)0;
		if(var_96_bool != 0) {
			var_97_int = 0; var_98_string = "";
			func_2621(var_97_int, "beads");
			AddItem(var_21_bool, var_97_int, (int)0, (int)1);
			goto Label_2620;
		}
		var_102_bool = var_20_int == (int)1;
		if(var_102_bool != 0) {
			var_103_int = 0; var_104_string = "";
			func_2621(var_103_int, "bracelet");
			AddItem(var_21_bool, var_103_int, (int)0, (int)1);
			goto Label_2620;
		}
		var_108_bool = var_20_int == (int)2;
		if(var_108_bool != 0) {
			var_109_int = 0; var_110_string = "";
			func_2621(var_109_int, "ear_ring");
			AddItem(var_21_bool, var_109_int, (int)0, (int)1);
			goto Label_2620;
		}
		var_114_bool = var_20_int == (int)3;
		if(var_114_bool != 0) {
			var_115_int = 0; var_116_string = "";
			func_2621(var_115_int, "gold_ring");
			AddItem(var_21_bool, var_115_int, (int)0, (int)1);
			goto Label_2620;
		}
		var_120_bool = var_20_int == (int)4;
		if(var_120_bool != 0) {
			var_121_int = 0; var_122_string = "";
			func_2621(var_121_int, "silver_ring");
			AddItem(var_21_bool, var_121_int, (int)0, (int)1);
			goto Label_2620;
		}
		var_126_bool = var_20_int == (int)5;
		if(var_126_bool == 0) goto Label_2620;
		var_127_int = 0; var_128_string = "";
		func_2621(var_127_int, "flower");
		AddItem(var_21_bool, var_127_int, (int)0, (int)1);
	}
Label_2534:
	goto Label_2620;
	
Label_2620:
	return 4;
	
}


func_1939(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj();
	var_39_bool = var_34_object == 0; //@ne
	if(var_39_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_40_bool = 0;
	var_40_bool = 0;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", (int)1);
	if(var_43_bool != 0) {
		var_44_bool = 0; var_45_object = Obj();
		var_34_object = var_45_object;
		func_1934(var_44_bool, var_45_object);
		if(var_44_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetScene(var_37_object);
	var_48_bool = var_37_object == 0; //@ne
	if(var_48_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	@@var_34_object:GetScene(var_38_object);
	var_49_bool = var_37_object != var_38_object;
	if(var_49_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_33_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1436(var_313_bool)
{
	var_314_bool = 0;
	var_314_bool = 0;
	var_315_bool = 0;
	func_1408(var_314_bool, var_315_bool);
	if(var_315_bool != 0) {
		var_332_bool = 0;
		func_1452(var_313_bool, var_314_bool, var_332_bool);
		if(var_332_bool != 0) {
			var_314_bool = 1;
		}
	}
	if(var_314_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_1452(var_0_object, var_4_bool, var_332_bool)
{
	var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_object = Obj(); var_339_bool = 0; var_340_float = 0; var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0);
	GetScene(var_338_object);
	var_339_bool = 0;
	
Label_1456:
	var_343_cvector = CVector(0,0,0); var_344_object = Obj();
	var_344_object = var_0_object;
	func_1837(var_343_cvector, var_344_object);
	var_349_int = -var_343_cvector;
	FindDirLength(var_340_float, var_349_int, var_4_bool);
	var_350_bool = var_340_float < var_4_bool;
	if(var_350_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_341_cvector);
		GetPFPosition(var_342_cvector);
		WaitForAnimEnd();
		func_1540(var_342_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_339_bool = 1;
		var_354_bool = 0;
		func_1408(var_342_cvector, var_354_bool);
		var_355_bool = var_354_bool == 0; //@nz
		if(var_355_bool != 0) {
			goto Label_1494;
		}
		goto Label_1456;
	}
Label_1494:
	var_339_bool = var_332_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1975(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_1939(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_1849(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
}


func_1999(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = "";
	var_48_bool = var_33_object == 0; //@ne
	if(var_48_bool != 0) {
		return 14;
	}
	IsDead(var_41_bool);
	var_49_bool = var_41_bool;
	if(var_49_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_42_int);
	var_51_bool = var_42_int < (int)0;
	if(var_51_bool != 0) {
		return 14;
	}
	@@var_33_object:GetPosition(var_43_cvector);
	GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_54_float = var_52_float * var_53_float;
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	var_57_float = var_55_float * var_56_float;
	var_58_int = var_54_float + var_57_float;
	var_60_bool = var_58_int >= (int)0;
	if(var_60_bool != 0) {
		var_47_string = "fhit";
	} else {
		var_47_string = "bhit";
	}
	var_63_int = var_47_string + "1";
	var_65_int = var_47_string + "2";
	FadeSecondaryAnimation("hit_react", var_63_int, var_65_int, (int)-10);
	return 14;
	
}


func_1497(var_0_object, var_263_bool)
{
	var_264_bool = 0; var_265_bool = 0;
	var_268_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_268_bool != 0) {
		@@@var_0_object:IsAttacking(var_265_bool);
		var_265_bool = var_263_bool;
		return 2;
	}
	var_263_bool = 0;
	return 2;
}


func_1508(var_2_object, var_5_bool)
{
	var_380_float = 0; var_381_int = 0; var_382_float = 0; var_383_int = 0;
	var_384_bool = var_2_object == 0; //@nz
	if(var_384_bool != 0) {
		return 4;
	}
	var_385_bool = var_5_bool;
	if(var_385_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_388_bool = var_5_bool > (int)0;
		if(var_388_bool != 0) {
			return 4;
		}
	}
	rand(var_382_float);
	var_389_float = 0;
	func_1558(var_389_float);
	var_390_bool = var_382_float < var_389_float;
	if(var_390_bool != 0) {
		irand(var_383_int, var_2_object);
		var_383_int = var_383_int + (int)1;
		var_393_int = "attack" + var_383_int;
		Speak(var_393_int);
		var_394_int = 0;
		func_1556(var_394_int);
		var_5_bool = var_394_int;
	}
	return 4;
}


func_2043(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0);
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_object = var_20_object;
	if(var_43_object != 0) {
		var_45_bool = var_21_int != (int)4;
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_47_bool = var_21_int != (int)5;
		if(var_47_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
		var_50_cvector = CVector(0,0,0); var_51_object = Obj();
		var_20_object = var_51_object;
		func_1837(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2324(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		CreateVectorVector(var_33_object);
		var_34_int = 1;

	Label_2072:
		var_62_int = "hit" + var_34_int;
		GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector);
		var_63_bool = var_35_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_111_int = var_37_cvector | var_32_cvector;
			var_113_bool = var_111_int >= (float)0.7071067690849304;
			if(var_113_bool != 0) {
				@@var_33_object:add(var_36_cvector);
			}
			var_34_int = var_34_int + (int)1;
			goto Label_2072;
		}
		@@var_33_object:size(var_38_int);
		var_64_int = var_38_int;
		if(var_64_int != 0) {
			irand(var_39_int, var_38_int);
			@@var_33_object:get(var_40_cvector, var_39_int);
			var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
			var_20_object = var_65_object;
			var_21_int = var_66_int;
			var_22_float = var_67_float;
			var_40_cvector = var_68_cvector;
			var_69_cvector = -var_32_cvector;
			func_2111(var_67_float, var_68_cvector, var_69_cvector);
			return 18;
		}
		var_33_object = 0;
	}
	var_110_object = Obj();
	var_20_object = var_110_object;
	func_1999(var_110_object);
	return 18;
	
}


