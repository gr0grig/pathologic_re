// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetScene/1,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,FindDirLength/3,Speak/1,CanSee/2,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,SetVariable/2,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_b5_01|W:butcher_attack|W:player|W:head|A:RemoveStationaryActor|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:oob5Butcher1|W:b5q01WifeDead|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x253
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe1 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x25d vars=object
// @EVENT_17: op=0x268 vars=object
// @EVENT_26: op=0x26f vars=string
// @EVENT_7: op=0x2a6 vars=int
// @TASK_3: vars=object,int,int,bool,float,int params=0
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_7: op=0x606 vars=int
// @EVENT_1: op=0x621 vars=object
// @EVENT_2: op=0x630 vars=object
// @EVENT_10: op=0x6b6 vars=object
// @EVENT_41: op=0x6c1 vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x6e4 vars=object
// @EVENT_22: op=0x763 vars=object,int,float,float
// @EVENT_16: op=0x765 vars=object,string
// @EVENT_41: op=0x767 vars=object
// @STANDALONE_EVENT_22: op=0xa33 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xa3b vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xa45 vars=object,string
// @STANDALONE_EVENT_41: op=0xa52 vars=object
// @PE: 0x4a,0xcb,0xe1,0x25d,0x268,0x26f,0x27c,0x2a6,0x2bd,0x339,0x33c,0x5cd,0x606,0x621,0x630,0x6a4,0x6b6,0x6c1,0x6ca,0x6d5,0x749,0x763,0x765,0x767,0x769,0x970,0x977,0x9b8,0x9bf,0x9c5,0x9d1,0x9f4,0xa33,0xa3b,0xa52

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	if((int)1 != 0) {
		func_2352();
		var_24_bool = var_20_bool == (int)19792;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_object;
			func_2488();
		}
		var_34_bool = var_20_bool == (int)19758;
		if(var_34_bool != 0) {
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_2488();
		}
		var_38_bool = var_20_bool == (int)32120;
		if(var_38_bool != 0) {
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_2488();
		}
		var_42_bool = var_19_object == (int)19755;
		if(var_42_bool != 0) {
			var_43_bool = 0;
			var_43_bool = 0;
			var_44_bool = 0; var_45_object = Obj();
			var_45_object = var_1_object;
			func_2501(var_45_object);
			var_52_bool = var_44_bool == 0; //@nz
			if(var_52_bool != 0) {
				var_53_bool = 0; var_54_object = Obj();
				var_54_object = var_1_object;
				func_2513(var_54_object);
				if(var_53_bool != 0) {
					var_43_bool = 1;
				}
			}
			if(var_43_bool != 0) {
				var_59_object = Obj(); var_60_object = Obj();
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_2495();
				var_63_string = "";
				func_203(var_20_bool, "Neutral");
				@@@var_0_object:SetMessage((int)518663);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518671, (int)19764, (int)19763);
				@@@var_0_object:AddReply((int)518678, (int)19781, (int)19770);
				@@@var_0_object:AddReply((int)518666, (int)-1, (int)19758);
				return 0;
			}
			var_90_bool = 0; var_91_object = Obj();
			var_91_object = var_1_object;
			func_2501(var_91_object);
			var_92_bool = var_90_bool == 0; //@nz
			if(var_92_bool != 0) {
				var_93_string = "";
				func_203(var_20_bool, "Neutral");
				@@@var_0_object:SetMessage((int)530807);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530809, (int)-1, (int)32121);
				@@@var_0_object:AddReply((int)530808, (int)-1, (int)32120);
				return 0;
			}
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_2501(var_102_object);
			if(var_101_bool != 0) {
				var_103_string = "";
				func_203(var_20_bool, "Neutral");
				@@@var_0_object:SetMessage((int)524880);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524881, (int)-1, (int)26205);
				return 0;
			}
		}
		var_109_bool = var_19_object == (int)19764;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518673, (int)19766, (int)19765);
			@@@var_0_object:AddReply((int)518689, (int)19771, (int)19783);
			return 0;
		}
		var_119_bool = var_19_object == (int)19766;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518675, (int)19771, (int)19767);
			@@@var_0_object:AddReply((int)518676, (int)19769, (int)19768);
			return 0;
		}
		var_129_bool = var_19_object == (int)19769;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518677);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518682, (int)19775, (int)19774);
			return 0;
		}
		var_136_bool = var_19_object == (int)19775;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518683);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518684, (int)19773, (int)19776);
			return 0;
		}
		var_143_bool = var_19_object == (int)19771;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518679);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518680, (int)19773, (int)19772);
			@@@var_0_object:AddReply((int)518690, (int)19786, (int)19785);
			return 0;
		}
		var_153_bool = var_19_object == (int)19786;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518691);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518692, (int)19775, (int)19787);
			return 0;
		}
		var_160_bool = var_19_object == (int)19773;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518681);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518685, (int)19779, (int)19778);
			@@@var_0_object:AddReply((int)518693, (int)19790, (int)19789);
			return 0;
		}
		var_170_bool = var_19_object == (int)19779;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518686);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518687, (int)19781, (int)19780);
			return 0;
		}
		var_177_bool = var_19_object == (int)19781;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518688);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518664, (int)-1, (int)19756);
			@@@var_0_object:AddReply((int)518697, (int)19794, (int)19793);
			return 0;
		}
		var_187_bool = var_19_object == (int)19794;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518699, (int)-1, (int)19795);
			@@@var_0_object:AddReply((int)518700, (int)19790, (int)19796);
			return 0;
		}
		var_197_bool = var_19_object == (int)19790;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_203(var_20_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518695, (int)-1, (int)19791);
			@@@var_0_object:AddReply((int)518696, (int)-1, (int)19792);
			return 0;
		}
		var_3_string = true;
		var_206_bool = 0;
		func_2593(var_206_bool);
		if(var_206_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe2";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_701(var_18_object, var_19_bool);
	var_23_int = 0; var_24_object = Obj();
	var_19_bool = var_24_object;
	TaskCall(0);
	func_0(var_25_object, var_23_int, var_24_object);
	TaskReturn();
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; var_22_string = "";
	func_2456(var_20_bool, "quest_b5_01", "butcher_attack");
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_21_bool = var_19_bool == "attack";
	if(var_21_bool != 0) {
		func_701(var_18_object, var_19_bool);
		TaskCall(3);
		func_801();
		TaskReturn();
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_21_bool = var_19_bool == (int)10;
	if(var_21_bool != 0) {
		var_22_bool = 0;
		func_663(var_17_bool, var_18_object, var_19_bool, var_22_bool);
		if(var_22_bool != 0) {
			var_35_bool = var_2_object == 0; //@nz
			if(var_35_bool != 0) {
				var_36_object = Obj();
				var_36_object = var_4_bool;
				func_2341(var_36_object);
				var_2_object = true;
			}
		} else {
			var_43_object = var_2_object;
			if(var_43_object == 0) goto Label_700;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_700:
	return 0;
	
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_21_bool = var_19_int == (int)1;
	if(var_21_bool != 0) {
		var_22_object = Obj();
		var_22_object = var_1_object;
		func_2468(var_22_object);
	} else {
		var_27_int = 0;
		var_19_int = var_27_int;
		func_1700(var_18_bool, var_19_int, var_27_int);
	}
	return 0;
	
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_1_object == var_19_object;
	if(var_21_bool != 0) {
		var_22_bool = var_2_object == 0; //@nz
		if(var_22_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_2_object = true;
		var_23_object = Obj();
		var_19_object = var_23_object;
		func_2341(var_23_object);
	}
	return 0;
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_1_object == var_19_object;
	if(var_21_bool != 0) {
		var_22_object = var_2_object;
		if(var_22_object != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object);
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_1556(var_19_object);
	var_19_object = Obj();
	func_2642();
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsOverrideActive(var_21_bool);
	var_22_bool = var_21_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_23_object = Obj();
		var_19_object = var_23_object;
		func_2548(var_23_object);
	}
	return 2;
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0;
	var_19_object = var_23_object;
	var_20_int = var_24_int;
	var_21_float = var_25_float;
	func_2125(var_23_object, var_24_int, var_25_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	var_19_object = var_25_object;
	var_20_int = var_26_int;
	var_21_float = var_27_float;
	var_23_cvector = var_28_cvector;
	var_24_cvector = var_29_cvector;
	func_2193(var_27_float, var_28_cvector, var_29_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0;
	var_24_bool = var_20_string == "health";
	if(var_24_bool != 0) {
		GetProperty("health", var_22_float);
		var_27_bool = var_22_float <= (int)0;
		if(var_27_bool != 0) {
			SignalDeath(var_19_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_2595(var_20_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	
Label_595:
	Sleep((int)3);
	var_20_float = 0; var_21_float = 0;
	func_636(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, (float)300, (float)100);
	goto Label_595;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_23_int, var_24_object)
{
	var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0; var_30_object = Obj(); var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_0_object = var_24_object;
	var_34_bool = 0; var_35_object = Obj(); var_36_float = 0;
	var_24_object = var_35_object;
	func_2223(var_34_bool, var_35_object, (float)70.0);
	var_81_bool = var_34_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_23_int = -2;
		return 8;
	}
	CreateDialog(var_30_object);
	var_82_int = 0;
	func_2587(var_82_int);
	@@var_30_object:SetNPCName(var_82_int);
	var_83_int = 0;
	func_2585(var_83_int);
	@@var_30_object:SetNPCDescription(var_83_int);
	var_84_string = "";
	func_2589(var_84_string);
	@@var_30_object:SetPhoto(var_84_string);
	var_85_string = "";
	func_2591(var_85_string);
	@@var_30_object:SetPhoto2(var_85_string);
	var_86_int = 0;
	func_2525(var_86_int);
	@@var_30_object:SetPlayerName(var_86_int);
	IsOverrideActive(var_31_bool);
	var_94_bool = var_31_bool;
	if(var_94_bool != 0) {
		var_23_int = -2;
		return 8;
	}
	DoDialog(var_30_object);
	var_95_object = Obj(); var_96_object = Obj();
	var_24_object = var_95_object;
	var_30_object = var_96_object;
	TaskCall(1);
	func_74(var_97_object, var_98_object, var_99_string, var_100_bool, var_95_object, var_96_object);
	TaskReturn();
	@@var_30_object:IsDialogEnd(var_33_bool);
	
Label_56:
	var_185_bool = var_33_bool == 0; //@nz
	if(var_185_bool != 0) {
		sync();
		@@var_30_object:IsDialogEnd(var_33_bool);
		goto Label_56;
	}
	var_24_object = Obj();
	func_2292();
	StopDialog(var_30_object);
	@@var_30_object:GetReturnValue((int)-1);
	var_32_int = var_23_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2561(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = "";
	var_55_int = var_52_int;
	if(var_55_int != 0) {
		"idle" = "idle" + var_52_int;
	}
	var_54_string = var_51_string;
	return 2;
}


func_2310(var_151_string)
{
	var_152_bool = 0; var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_float = 0; var_157_float = 0;
	lshHasAnimation(var_155_bool, var_151_string);
	var_158_bool = var_155_bool;
	if(var_158_bool != 0) {
		lshGetAnimTimes(var_151_string, var_156_float, var_157_float);
		lshPlayAnimation(var_156_float, var_157_float, (bool)0);
	} else {
		var_161_int = "Can't find lsh animation : " + var_151_string;
		Trace(var_161_int);
	}
	return 6;
	
}


func_2568(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_48_int = 0;
	
Label_2570:
	var_51_string = ""; var_52_int = 0;
	var_48_int = var_52_int;
	func_2561(var_51_string, var_52_int);
	HasAnimation(var_49_bool, "all", var_51_string);
	var_56_bool = var_49_bool == 0; //@nz
	if(var_56_bool != 0) {
	} else {
		var_48_int = var_48_int + (int)1;
		goto Label_2570;
	}
	var_48_int = var_45_int;
	return 4;
	
}


func_2057(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0;
	var_36_bool = 0; var_37_object = Obj();
	var_33_object = var_37_object;
	func_2021(var_36_bool, var_37_object);
	var_53_bool = var_36_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_54_bool = 0; var_55_object = Obj(); var_56_string = "";
	var_33_object = var_55_object;
	func_1931(var_54_bool, var_55_object, "noaccess");
	var_63_bool = var_54_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_32_bool = 1;
		return 2;
	}
	@@var_33_object:GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == (int)0;
	return 2;
}


func_1298(var_0_object, var_297_bool, var_298_float)
{
	var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_bool = 0; var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0;
	
Label_1299:
	IsAnimationPlaying(var_304_bool);
	var_309_bool = var_304_bool == 0; //@nz
	if(var_309_bool != 0) {
	} else {
		var_310_bool = 0;
		func_1369(var_310_bool);
		if(var_310_bool != 0) {
			var_297_bool = 1;
			return 10;
		}
		var_353_bool = 0; var_354_object = Obj();
		var_354_object = var_0_object;
		func_2057(var_353_bool, var_354_object);
		var_355_bool = var_353_bool == 0; //@nz
		if(var_355_bool != 0) {
			var_297_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_305_cvector);
		GetPFPosition(var_306_cvector);
		var_307_cvector = var_305_cvector - var_306_cvector;
		var_308_float = var_307_cvector | var_307_cvector;
		var_356_float = var_298_float * var_298_float;
		var_357_bool = var_308_float < var_356_float;
		if(var_357_bool != 0) {
			var_358_bool = 0; var_359_float = 0;
			var_298_float = var_359_float;
			func_1134(var_307_cvector, var_308_float, var_358_bool, var_359_float);
			var_297_bool = 1;
			sync();
			goto Label_1299;
		}
		return 10;
	}
	func_1473(var_308_float);
	var_297_bool = 0;
	return 10;
	
}


func_1556(var_2_object)
{
	KillTimer((int)1);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1722(var_19_object);
	return 0;
}


func_2326(var_126_string, var_127_bool)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0;
	lshHasAnimation(var_133_bool, var_126_string);
	var_136_bool = var_133_bool;
	if(var_136_bool != 0) {
		lshGetAnimTimes(var_126_string, var_134_float, var_135_float);
		lshPlayAnimation(var_134_float, var_135_float, var_127_bool);
	} else {
		var_138_int = "Can't find lsh animation : " + var_126_string;
		Trace(var_138_int);
	}
	return 6;
	
}


func_2585(var_83_int)
{
	var_83_int = 515562;
	return 0;
}


func_794(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_2587(var_82_int)
{
	var_82_int = 503347;
	return 0;
}


func_796()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2589(var_84_string)
{
	var_84_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_2591(var_85_string)
{
	var_85_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_2593(var_77_bool)
{
	var_77_bool = 0;
	return 0;
}


func_2081(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = "";
	var_51_bool = var_36_object == 0; //@ne
	if(var_51_bool != 0) {
		return 14;
	}
	IsDead(var_44_bool);
	var_52_bool = var_44_bool;
	if(var_52_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_45_int);
	var_54_bool = var_45_int < (int)0;
	if(var_54_bool != 0) {
		return 14;
	}
	@@var_36_object:GetPosition(var_46_cvector);
	GetPosition(var_47_cvector);
	GetDirection(var_48_cvector);
	var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_57_float = var_55_float * var_56_float;
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	var_60_float = var_58_float * var_59_float;
	var_61_int = var_57_float + var_60_float;
	var_63_bool = var_61_int >= (int)0;
	if(var_63_bool != 0) {
		var_50_string = "fhit";
	} else {
		var_50_string = "bhit";
	}
	var_66_int = var_50_string + "1";
	var_68_int = var_50_string + "2";
	FadeSecondaryAnimation("hit_react", var_66_int, var_68_int, (int)-10);
	return 14;
	
}


func_2595(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	GetScene(var_22_object);
	var_23_object = Obj();
	func_2400(var_23_object);
	@@var_22_object:RemoveStationaryActor(var_23_object);
	var_26_object = Obj();
	var_20_object = var_26_object;
	TaskCall(5);
	func_1749(var_26_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1060(var_1_object, var_2_object, var_4_bool)
{
	var_64_bool = 0; var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; var_69_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_1062:
	var_73_int = var_1_object + (int)1;
	var_74_int = "attack_begin" + var_73_int;
	HasAnimation(var_67_bool, "all", var_74_int);
	var_75_bool = var_67_bool == 0; //@nz
	if(var_75_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_1062;
	}
	var_2_object = 0;
	
Label_1076:
	var_78_int = var_2_object + (int)1;
	var_79_int = "attack" + var_78_int;
	IsExisting3DSound(var_68_bool, var_79_int);
	var_80_bool = var_68_bool == 0; //@nz
	if(var_80_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1076;

	}
	GetAnimationOffset(var_69_cvector, "all", "bjump");
	var_83_float = GetByIndex(var_69_cvector, 2);
	var_4_bool = -var_83_float;
	return 6;
	
}


func_801()
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	GetScene(var_33_object);
	var_35_object = Obj();
	func_2400(var_35_object);
	@@var_33_object:RemoveStationaryActor(var_35_object);
	FindActor(var_34_object, "player");
	
Label_812:
	var_39_object = Obj(); var_40_bool = 0; var_41_float = 0;
	var_34_object = var_39_object;
	func_831(var_30_int, var_31_object, var_32_object, var_33_object, var_34_object, var_39_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_812;
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2341(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0);
	@@var_23_object:GetEyesHeight(var_26_float);
	var_27_cvector = CVector(0.0, 0.0, 0.0);
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	LookAsync(var_23_object, "head", var_27_cvector);
	return 4;
}


func_2352()
{
	var_22_bool = 0;
	func_2593(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2359(var_50_string)
{
	var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	IsExisting3DSound(var_59_bool, var_50_string);
	var_67_bool = var_59_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_60_int = 0;

	Label_2365:
		var_69_int = var_60_int + (int)1;
		var_70_int = var_50_string + var_69_int;
		IsExisting3DSound(var_61_bool, var_70_int);
		var_71_bool = var_61_bool == 0; //@nz
		if(var_71_bool != 0) {
		} else {
			var_60_int = var_60_int + (int)1;
			goto Label_2365;
		}
		var_72_bool = var_60_int == 0; //@nz
		if(var_72_bool != 0) {
			return 16;
		}
		irand(var_62_int, var_60_int);
		var_74_int = var_62_int + (int)1;
		var_50_string = var_50_string + var_74_int;
	}
	Is3DSoundLoaded(var_63_bool, var_50_string);
	var_75_bool = var_63_bool;
	if(var_75_bool != 0) {
		GetEyesHeight(var_64_float);
		GetDirection(var_65_cvector);
		var_66_cvector = var_65_cvector * (int)50;
		var_77_float = GetByIndex(var_66_cvector, 1);
		var_77_float = var_77_float + var_64_float;
		SetByIndex(var_66_cvector, 1) = var_77_float;
		PlayGlobalSound(var_50_string, var_66_cvector);
	}
	return 16;
	
}


func_825(var_406_float)
{
	var_406_float = 0.10000000149011612;
	return 0;
}


func_828(var_413_int)
{
	var_413_int = 0;
	return 0;
}


func_1341(var_0_object, var_312_bool)
{
	var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_float = 0; var_322_float = 0;
	var_323_bool = 0; var_324_object = Obj();
	var_324_object = var_0_object;
	func_2057(var_323_bool, var_324_object);
	var_325_bool = var_323_bool == 0; //@nz
	if(var_325_bool != 0) {
		var_312_bool = 0;
		return 10;
	}
	var_326_bool = 0;
	func_1430(var_322_float, var_326_bool);
	if(var_326_bool != 0) {
		@@@var_0_object:GetPFPosition(var_318_cvector);
		GetPFPosition(var_319_cvector);
		var_320_cvector = var_318_cvector - var_319_cvector;
		var_321_float = var_320_cvector | var_320_cvector;
		@@@var_0_object:GetAttackDistance(var_322_float);
		var_322_float = var_322_float + (int)50;
		var_328_float = var_322_float * var_322_float;
		var_312_bool = var_321_float <= var_328_float;
		return 10;
	}
	var_312_bool = 0;
	return 10;
}


func_1598(var_0_object, var_1_object, var_169_bool, var_170_object, var_171_float, var_172_float, var_173_bool, var_174_bool)
{
	var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj(); var_183_bool = 0; var_184_bool = 0; var_185_object = Obj(); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_object = Obj();
	var_0_object = false;
	var_1_object = var_170_object;
	var_174_bool = var_184_bool;
	
Label_1602:
	var_191_bool = 0; var_192_object = Obj();
	var_170_object = var_192_object;
	func_1738(var_191_bool, var_192_object);
	var_195_bool = var_191_bool == 0; //@nz
	if(var_195_bool != 0) {
		var_169_bool = 0;
		return 16;
	}
	@@var_170_object:GetPosition(var_186_cvector);
	GetPosition(var_187_cvector);
	var_188_cvector = var_186_cvector - var_187_cvector;
	var_189_float = var_188_cvector | var_188_cvector;
	var_196_bool = 0;
	var_196_bool = 0;
	var_198_bool = var_172_float > (int)0;
	if(var_198_bool != 0) {
		var_199_float = var_172_float * var_172_float;
		var_200_bool = var_189_float > var_199_float;
		if(var_200_bool != 0) {
			var_196_bool = 1;
		}
	}
	if(var_196_bool != 0) {
		Stop();
		var_169_bool = 0;
		return 16;
	}
	var_201_float = var_171_float * var_171_float;
	var_202_bool = var_189_float > var_201_float;
	if(var_202_bool != 0) {
		@@var_170_object:GetPFPosition(var_186_cvector);
		FindPathTo(var_190_object, var_186_cvector);
		var_203_bool = var_190_object != 0; //@nn
		if(var_203_bool != 0) {
			var_190_object = var_185_object;
			var_190_object = 0;
		}
		var_204_bool = var_185_object != 0; //@nn
		if(var_204_bool != 0) {
			var_205_bool = var_184_bool;
			if(var_205_bool == 0) goto Label_1651;
			var_184_bool = 0;
			RotatePath(var_185_object, var_183_bool);
			var_206_bool = var_183_bool == 0; //@nz
			if(var_206_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_209_string = "";
				func_1745(var_209_string);
				var_210_string = "";
				func_1747(var_210_string);
				FollowPath(var_185_object, var_173_bool, var_183_bool, var_209_string, var_210_string);
				var_211_bool = var_183_bool == 0; //@nz
				if(var_211_bool != 0) {
					var_212_object = var_0_object;
					if(var_212_object != 0) {
						var_185_object = 0;
						goto Label_1698;
					EMIT "GOTO 0x687";
					}
				} else {
					var_185_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_183_bool);
					var_215_bool = var_183_bool == 0; //@nz
					if(var_215_bool != 0) {
						var_216_object = var_0_object;
						if(var_216_object != 0) {
							var_185_object = 0;
							goto Label_1698;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1698;
	}
			var_190_object = 0;
			goto Label_1696;

		Label_1696:
			var_185_object = 0;

		}
		goto Label_1602;
	}
Label_1698:
	var_169_bool = !var_0_object;
	return 16;
	
}


func_831(var_0_object, var_3_string, var_5_int, var_39_object, var_40_bool, var_41_float, var_146_bool, var_238_bool)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_float = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_float = 0;
	func_1060(var_61_cvector, var_62_bool, var_63_float);
	var_5_int = 0;
	var_88_bool = IsFuncExist(var_39_object, "@GetAttackDistance", (int)1);
	if(var_88_bool != 0) {
		@@var_39_object:GetAttackDistance(var_53_float);
		var_53_float = var_53_float + (int)50;
	} else {
							var_41_float = var_53_float;
	}
	var_91_bool = var_53_float >= (int)150;
	if(var_91_bool != 0) {
		var_53_float = 150;
	}
	var_3_string = false;
	var_0_object = var_39_object;
	IsPlayerActor(var_0_object, var_56_bool);
	var_92_bool = var_56_bool;
	if(var_92_bool != 0) {
		PlayGlobalMusic("attack");
		var_94_object = Obj();
		func_2400(var_94_object);
		SendPlayerEnemy(var_39_object, var_94_object);
	}
	var_95_bool = var_40_bool;
	if(var_95_bool != 0) {
		var_57_bool = 0;
	} else {
						var_57_bool = 1;

	}
	var_58_float = (float)400.0 + var_53_float;
	
Label_871:
	var_97_bool = 0;
	var_97_bool = 0;
	var_98_bool = 0; var_99_object = Obj();
	var_99_object = var_0_object;
	func_2057(var_98_bool, var_99_object);
	if(var_98_bool != 0) {
		var_132_bool = var_3_string == 0; //@nz
		if(var_132_bool != 0) {
			var_97_bool = 1;
		}
	}
	if(var_97_bool != 0) {
		func_1473(var_63_float);
		@@@var_0_object:GetPFPosition(var_54_cvector);
		GetPFPosition(var_55_cvector);
		var_59_cvector = var_54_cvector - var_55_cvector;
		var_60_float = var_59_cvector | var_59_cvector;
		var_138_float = var_58_float * var_58_float;
		var_139_bool = var_60_float >= var_138_float;
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj(); var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_bool = 0;
			var_141_object = var_0_object;
			var_53_float = var_142_float;
			TaskCall(4);
			func_1493(var_148_bool, var_140_bool, var_141_object, var_142_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_223_bool = var_146_bool == 0; //@nz
			if(var_223_bool != 0) {
			} else {
				var_57_bool = 0;
		} else {
				var_229_float = var_41_float * var_41_float;
				var_230_bool = var_60_float >= var_229_float;
				if(var_230_bool != 0) {
					@@@var_0_object:GetPFPosition(var_61_cvector);
					CanReachByPF(var_62_bool, var_61_cvector);
					var_231_bool = var_62_bool == 0; //@nz
					if(var_231_bool != 0) {
						var_232_bool = 0; var_233_object = Obj(); var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_bool = 0;
						var_233_object = var_0_object;
						var_53_float = var_234_float;
						TaskCall(4);
						func_1493(var_240_bool, var_232_bool, var_233_object, var_234_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_241_bool = var_238_bool == 0; //@nz
						if(var_241_bool != 0) {
							goto Label_1043;
						}
						var_57_bool = 0;
						goto Label_871;
					}
					var_242_bool = var_57_bool == 0; //@nz
					if(var_242_bool != 0) {
						var_243_object = Obj();
						var_243_object = var_0_object;
						func_2207(var_243_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1473(var_63_float);
						StopAsync();
						var_57_bool = 1;
						var_254_bool = 0; var_255_object = Obj();
						var_255_object = var_0_object;
						func_2057(var_254_bool, var_255_object);
						var_256_bool = var_254_bool == 0; //@nz
						if(var_256_bool != 0) {
							goto Label_1043;
						}
					}
					rand(var_63_float);
					var_257_bool = 0;
					var_259_bool = var_63_float < (float)0.25;
					if(var_259_bool != 1) {
						var_260_bool = 0;
						func_1430((bool)1, var_260_bool);
						if(var_260_bool != 1) {
							var_257_bool = 0;
						}
					}
					if(var_257_bool != 0) {
						Face(var_0_object);
						func_1480();
						PlayAnimation("all", "attack_stay");
						var_297_bool = 0; var_298_float = 0;
						var_41_float = var_298_float;
						func_1298(var_63_float, var_297_bool, var_298_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1473(var_63_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_519_bool = 0;
						func_1430(var_63_float, var_519_bool);
						var_520_bool = var_519_bool == 0; //@nz
						if(var_520_bool == 0) goto Label_1033;
						var_521_bool = 0; var_522_object = Obj();
						var_522_object = var_0_object;
						func_2057(var_521_bool, var_522_object);
						var_523_bool = var_521_bool == 0; //@nz
						if(var_523_bool != 0) {
							goto Label_1043;
						}
						@@@var_0_object:GetPFPosition(var_54_cvector);
						GetPFPosition(var_55_cvector);
						var_59_cvector = var_54_cvector - var_55_cvector;
						var_60_float = var_59_cvector | var_59_cvector;
						var_524_float = var_41_float * var_41_float;
						var_525_bool = var_60_float < var_524_float;
						if(var_525_bool == 0) goto Label_1033;
						var_526_bool = 0; var_527_float = 0;
						var_41_float = var_527_float;
						func_1134(var_62_bool, var_63_float, var_526_bool, var_527_float);
						var_528_bool = var_526_bool == 0; //@nz
						if(var_528_bool == 0) goto Label_1033;
						goto Label_1043;
				}
					var_529_bool = 0; var_530_float = 0;
					var_41_float = var_530_float;
					func_1134(var_62_bool, var_63_float, var_529_bool, var_530_float);
					var_531_bool = var_529_bool == 0; //@nz
					if(var_531_bool != 0) {
						goto Label_1043;
					}
					var_57_bool = 1;

				}
			Label_1033:
				goto Label_1042;
		}
		Label_1042:
			goto Label_871;

		}
	}
Label_1043:
	WaitForAnimEnd();
	var_224_string = var_3_string;
	if(var_224_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_227_bool = var_56_bool;
	if(var_227_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1095(var_0_object, var_395_float, var_396_int)
{
	var_397_object = Obj(); var_398_float = 0; var_399_float = 0; var_400_object = Obj(); var_401_float = 0; var_402_float = 0;
	var_404_float = var_395_float * (float)0.8999999761581421;
	GetVictim(var_404_float, var_400_object);
	ReportAttack(var_0_object);
	var_405_bool = var_400_object == var_0_object;
	if(var_405_bool != 0) {
		var_406_float = 0; var_407_object = Obj(); var_408_int = 0;
		var_400_object = var_407_object;
		var_396_int = var_408_int;
		func_825(var_408_int);
		var_406_float = var_401_float;
		var_409_float = 0; var_410_object = Obj(); var_411_float = 0; var_412_int = 0;
		var_400_object = var_410_object;
		var_401_float = var_411_float;
		var_413_int = 0; var_414_object = Obj(); var_415_int = 0;
		var_400_object = var_414_object;
		var_396_int = var_415_int;
		func_828(var_415_int);
		var_413_int = var_412_int;
		func_1943(var_409_float, var_410_object, var_411_float, var_412_int);
		var_409_float = var_402_float;
		var_474_int = 0;
		func_1478(var_474_int);
		ReportHit(var_0_object, var_474_int, var_402_float, var_401_float);
		var_475_object = Obj(); var_476_float = 0;
		var_400_object = var_475_object;
		var_402_float = var_476_float;
		func_1485();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1865(var_49_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_50_string = "";
	var_49_string = var_50_string;
	func_2359(var_50_string);
	PlayAnimation("all", var_49_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_49_string);
	RemoveEnvelope();
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_95_object, var_96_object)
{
	var_0_object = var_96_object;
	var_1_object = var_95_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_102_bool = 0;
		var_102_bool = 0;
		var_103_bool = 0; var_104_object = Obj();
		var_104_object = var_1_object;
		func_2501(var_104_object);
		var_111_bool = var_103_bool == 0; //@nz
		if(var_111_bool != 0) {
			var_112_bool = 0; var_113_object = Obj();
			var_113_object = var_1_object;
			func_2513(var_113_object);
			if(var_112_bool != 0) {
				var_102_bool = 1;
			}
		}
		if(var_102_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_2495();
			var_122_string = "";
			func_203(var_96_object, "Neutral");
			@@@var_0_object:SetMessage((int)518663);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518671, (int)19764, (int)19763);
			@@@var_0_object:AddReply((int)518678, (int)19781, (int)19770);
			@@@var_0_object:AddReply((int)518666, (int)-1, (int)19758);
		} else {
				var_167_bool = 0; var_168_object = Obj();
				var_168_object = var_1_object;
				func_2501(var_168_object);
				var_169_bool = var_167_bool == 0; //@nz
				if(var_169_bool != 0) {
					var_170_string = "";
					func_203(var_96_object, "Neutral");
					@@@var_0_object:SetMessage((int)530807);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)530809, (int)-1, (int)32121);
					@@@var_0_object:AddReply((int)530808, (int)-1, (int)32120);
					goto Label_173;
				}
				var_178_bool = 0; var_179_object = Obj();
				var_179_object = var_1_object;
				func_2501(var_179_object);
				if(var_178_bool != 0) {
					var_180_string = "";
					func_203(var_96_object, "Neutral");
					@@@var_0_object:SetMessage((int)524880);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)524881, (int)-1, (int)26205);
					goto Label_173;
				}
				return 0;
		}
	}
Label_173:
	var_149_bool = 0;
	func_2593(var_149_bool);
	if(var_149_bool != 0) {

	Label_177:
		lshWaitForAnimEnd();
		var_150_string = var_3_string;
		if(var_150_string != 0) {
		} else {
			var_151_string = "";
			var_151_string = var_2_object;
			func_2310(var_151_string);
			goto Label_177;
	}
		PlayAnimation("all", "idle");

	Label_192:
		WaitForAnimEnd();
		var_164_string = var_3_string;
		if(var_164_string != 0) {
			goto Label_202;
		}
		PlayAnimation("all", "idle");
		goto Label_192;

	}
	goto Label_202;
	
Label_202:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_2125(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0);
	var_44_bool = 0;
	var_44_bool = 0;
	var_45_bool = 0;
	var_45_bool = 0;
	var_46_object = var_23_object;
	if(var_46_object != 0) {
		var_48_bool = var_24_int != (int)4;
		if(var_48_bool != 0) {
			var_45_bool = 1;
		}
	}
	if(var_45_bool != 0) {
		var_50_bool = var_24_int != (int)5;
		if(var_50_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
		var_53_cvector = CVector(0,0,0); var_54_object = Obj();
		var_23_object = var_54_object;
		func_1911(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_2406(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		CreateVectorVector(var_36_object);
		var_37_int = 1;

	Label_2154:
		var_65_int = "hit" + var_37_int;
		GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector);
		var_66_bool = var_38_bool == 0; //@nz
		if(var_66_bool != 0) {
		} else {
			var_114_int = var_40_cvector | var_35_cvector;
			var_116_bool = var_114_int >= (float)0.7071067690849304;
			if(var_116_bool != 0) {
				@@var_36_object:add(var_39_cvector);
			}
			var_37_int = var_37_int + (int)1;
			goto Label_2154;
		}
		@@var_36_object:size(var_41_int);
		var_67_int = var_41_int;
		if(var_67_int != 0) {
			irand(var_42_int, var_41_int);
			@@var_36_object:get(var_43_cvector, var_42_int);
			var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
			var_23_object = var_68_object;
			var_24_int = var_69_int;
			var_25_float = var_70_float;
			var_43_cvector = var_71_cvector;
			var_72_cvector = -var_35_cvector;
			func_2193(var_70_float, var_71_cvector, var_72_cvector);
			return 18;
		}
		var_36_object = 0;
	}
	var_113_object = Obj();
	var_23_object = var_113_object;
	func_2081(var_113_object);
	return 18;
	
}


func_1369(var_310_bool)
{
	var_311_bool = 0;
	var_311_bool = 0;
	var_312_bool = 0;
	func_1341(var_311_bool, var_312_bool);
	if(var_312_bool != 0) {
		var_329_bool = 0;
		func_1385(var_310_bool, var_311_bool, var_329_bool);
		if(var_329_bool != 0) {
			var_311_bool = 1;
		}
	}
	if(var_311_bool != 0) {
		var_310_bool = 1;
		return 0;
	}
	var_310_bool = 0;
	return 0;
}


func_2400(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2406(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_60_float = sqrt(var_61_int);
	var_62_float = 9.999999974752427e-07;
	var_63_bool = var_60_float < var_62_float;
	if(var_63_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_60_float;
	return 2;
}


func_1385(var_0_object, var_4_bool, var_329_bool)
{
	var_330_object = Obj(); var_331_bool = 0; var_332_float = 0; var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_object = Obj(); var_336_bool = 0; var_337_float = 0; var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0);
	GetScene(var_335_object);
	var_336_bool = 0;
	
Label_1389:
	var_340_cvector = CVector(0,0,0); var_341_object = Obj();
	var_341_object = var_0_object;
	func_1911(var_340_cvector, var_341_object);
	var_346_int = -var_340_cvector;
	FindDirLength(var_337_float, var_346_int, var_4_bool);
	var_347_bool = var_337_float < var_4_bool;
	if(var_347_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_338_cvector);
		GetPFPosition(var_339_cvector);
		WaitForAnimEnd();
		func_1473(var_339_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_336_bool = 1;
		var_351_bool = 0;
		func_1341(var_339_cvector, var_351_bool);
		var_352_bool = var_351_bool == 0; //@nz
		if(var_352_bool != 0) {
			goto Label_1427;
		}
		goto Label_1389;
	}
Label_1427:
	var_336_bool = var_329_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1897(var_437_string, var_438_int)
{
	var_440_bool = var_438_int == (int)2;
	if(var_440_bool != 0) {
		var_437_string = "fire";
		return 0;
	EMIT "GOTO 0x775";
	}
	var_442_bool = var_438_int == (int)1;
	if(var_442_bool != 0) {
		var_437_string = "bullet";
		return 0;
	}
	var_437_string = "phys";
	return 0;
}


func_1134(var_0_object, var_1_object, var_358_bool, var_359_float)
{
	var_360_int = 0; var_361_bool = 0; var_362_int = 0; var_363_string = ""; var_364_int = 0; var_365_bool = 0; var_366_int = 0; var_367_string = "";
	func_1473(var_367_string);
	irand(var_364_int, var_1_object);
	var_364_int = var_364_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2477();
	var_376_int = "attack_begin" + var_364_int;
	PlayAnimation("all", var_376_int);
	WaitForAnimEnd();
	func_1441(var_366_int, var_367_string);
	var_392_bool = 0; var_393_object = Obj();
	var_393_object = var_0_object;
	func_2057(var_392_bool, var_393_object);
	var_394_bool = var_392_bool == 0; //@nz
	if(var_394_bool != 0) {
		StopAsync();
		var_358_bool = 0;
		return 8;
	}
	var_395_float = 0; var_396_int = 0;
	var_359_float = var_395_float;
	var_364_int = var_396_int;
	func_1095(var_367_string, var_395_float, var_396_int);
	var_479_int = "attack_middle" + var_364_int;
	HasAnimation(var_365_bool, "all", var_479_int);
	var_480_bool = var_365_bool;
	if(var_480_bool != 0) {
		func_2477();
		var_483_int = "attack_middle" + var_364_int;
		PlayAnimation("all", var_483_int);
		WaitForAnimEnd();
		func_1473(var_367_string);
		var_484_bool = 0; var_485_object = Obj();
		var_485_object = var_0_object;
		func_2057(var_484_bool, var_485_object);
		var_486_bool = var_484_bool == 0; //@nz
		if(var_486_bool != 0) {
			StopAsync();
			var_358_bool = 0;
			return 8;
		}
		var_487_float = 0; var_488_int = 0;
		var_359_float = var_487_float;
		var_364_int = var_488_int;
		func_1095(var_367_string, var_487_float, var_488_int);
		var_366_int = 1;

	Label_1211:
		var_490_int = "attack_middle" + var_364_int;
		var_492_int = var_490_int + "_";
		var_367_string = var_492_int + var_366_int;
		HasAnimation(var_365_bool, "all", var_367_string);
		var_494_bool = var_365_bool == 0; //@nz
		if(var_494_bool != 0) {
		} else {
			func_2477();
			PlayAnimation("all", var_367_string);
			WaitForAnimEnd();
			func_1473(var_367_string);
			var_510_bool = 0; var_511_object = Obj();
			var_511_object = var_0_object;
			func_2057(var_510_bool, var_511_object);
			var_512_bool = var_510_bool == 0; //@nz
			if(var_512_bool != 0) {
				StopAsync();
				var_358_bool = 0;
				var_513_float = 0; var_514_int = 0;
				var_359_float = var_513_float;
				var_364_int = var_514_int;
				func_1095(var_367_string, var_513_float, var_514_int);
				var_366_int = var_366_int + (int)1;
				goto Label_1211;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_498_int = "attack_end" + var_364_int;
	PlayAnimation("all", var_498_int);
	var_499_bool = 0;
	func_1487(var_499_bool);
	if(var_499_bool != 0) {
		var_500_bool = 0; var_501_float = 0;
		func_1271(var_500_bool, (float)0.75);
		StopAsync();
	}
	var_358_bool = 1;
	return 8;
	
}


func_2416(var_447_float, var_448_float, var_449_float)
{
	var_452_bool = var_448_float < var_449_float;
	if(var_452_bool != 0) {
		var_448_float = var_447_float;
	} else {
		var_449_float = var_447_float;
	}
	return 0;
	
}


func_1911(var_53_cvector, var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_57_cvector);
	@@var_54_object:GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
	return 4;
}


func_2423(var_457_float, var_458_float, var_459_float, var_460_float)
{
	var_461_bool = var_458_float < var_459_float;
	if(var_461_bool != 0) {
		var_459_float = var_457_float;
		return 0;
	}
	var_462_bool = var_458_float > var_460_float;
	if(var_462_bool != 0) {
		var_460_float = var_457_float;
		return 0;
	}
	var_458_float = var_457_float;
	return 0;
}


func_636(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_20_float, var_21_float)
{
	var_22_bool = 0;
	func_2218(var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_20_float;
	var_1_object = var_21_float;
	SetTimer((int)10, (float)1.0);
	func_715();
	var_80_bool = var_3_string == 0; //@nz
	if(var_80_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1918(var_26_float, var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	GetPosition(var_31_cvector);
	@@var_27_object:GetPosition(var_32_cvector);
	var_33_cvector = var_32_cvector - var_31_cvector;
	var_26_float = var_33_cvector | var_33_cvector;
	return 6;
}


func_2434(var_105_int, var_106_string)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable(var_106_string, var_108_int);
	var_108_int = var_105_int;
	return 2;
}


func_1926(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_bool = 0;
	IsPlayerActor(var_165_object, var_167_bool);
	var_167_bool = var_164_bool;
	return 2;
}


func_2439(var_465_float)
{
	var_466_object = Obj(); var_467_object = Obj();
	CreateFloatVector(var_467_object);
	@@var_467_object:add(var_465_float);
	var_469_bool = var_465_float < (int)0;
	if(var_469_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_467_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1931(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0;
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", (int)2);
	var_62_bool = var_61_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	@@var_55_object:HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
	return 2;
}


func_2193(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	GetScene(var_32_object);
	AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	var_36_object = Obj();
	var_25_object = var_36_object;
	func_2081(var_36_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1430(var_0_object, var_260_bool)
{
	var_261_bool = 0; var_262_bool = 0;
	var_265_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_265_bool != 0) {
		@@@var_0_object:IsAttacking(var_262_bool);
		var_262_bool = var_260_bool;
		return 2;
	}
	var_260_bool = 0;
	return 2;
}


func_663(var_0_object, var_1_object, var_4_bool, var_22_bool)
{
	var_23_float = 0; var_24_float = 0;
	var_25_bool = var_4_bool == 0; //@ne
	if(var_25_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_26_float = 0; var_27_object = Obj();
	var_27_object = var_4_bool;
	func_1918(var_26_float, var_27_object);
	var_24_float = sqrt(var_26_float);
	var_34_object = var_2_object;
	if(var_34_object != 0) {
		var_24_float = var_24_float - var_1_object;
	}
	var_22_bool = var_24_float < var_0_object;
	return 2;
}


func_1943(var_409_float, var_410_object, var_411_float, var_412_int)
{
	var_416_int = 0; var_417_string = ""; var_418_int = 0; var_419_float = 0; var_420_float = 0; var_421_float = 0; var_422_int = 0; var_423_string = ""; var_424_int = 0; var_425_float = 0; var_426_float = 0; var_427_float = 0;
	var_428_bool = 0; var_429_object = Obj(); var_430_string = "";
	var_410_object = var_429_object;
	func_1931(var_428_bool, var_429_object, "health");
	var_431_bool = var_428_bool == 0; //@nz
	if(var_431_bool != 0) {
		var_409_float = 0.0;
		return 12;
	}
	var_432_bool = 0; var_433_object = Obj(); var_434_string = "";
	var_410_object = var_433_object;
	func_1931(var_432_bool, var_433_object, "armor");
	var_435_bool = var_432_bool == 0; //@nz
	if(var_435_bool != 0) {
		var_422_int = 0;
	} else {
			@@var_410_object:GetProperty("armor", var_422_int);
	}
	var_437_string = ""; var_438_int = 0;
	var_412_int = var_438_int;
	func_1897(var_437_string, var_438_int);
	var_423_string = "armor_" + var_437_string;
	var_443_bool = 0; var_444_object = Obj(); var_445_string = "";
	var_410_object = var_444_object;
	var_423_string = var_445_string;
	func_1931(var_443_bool, var_444_object, var_445_string);
	var_446_bool = var_443_bool == 0; //@nz
	if(var_446_bool != 0) {
		var_424_int = 0;
	} else {
		@@var_410_object:GetProperty(var_423_string, var_424_int);

	}
	var_447_float = 0; var_448_float = 0; var_449_float = 0;
	var_450_int = var_422_int + var_424_int;
	var_448_float = var_450_int / (float)100.0;
	func_2416(var_447_float, var_448_float, (float)1);
	var_447_float = var_425_float;
	@@var_410_object:GetProperty("health", var_426_float);
	var_455_int = (int)1 - var_425_float;
	var_427_float = var_411_float * var_455_int;
	var_457_float = 0; var_458_float = 0; var_459_float = 0; var_460_float = 0;
	var_458_float = var_426_float - var_427_float;
	func_2423(var_457_float, var_458_float, (float)0, (float)1);
	@@var_410_object:SetProperty("health", var_457_float);
	var_463_bool = 0; var_464_object = Obj();
	var_410_object = var_464_object;
	func_1926(var_463_bool, var_464_object);
	if(var_463_bool != 0) {
		var_465_float = 0;
		var_465_float = -var_427_float;
		func_2439(var_465_float);
	}
	var_427_float = var_409_float;
	return 12;
	
}


func_2456(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj();
	FindActor(var_24_object, var_21_string);
	var_25_bool = var_24_object == 0; //@ne
	if(var_25_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	Trigger(var_24_object, var_22_string);
	var_20_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2207(var_243_object)
{
	var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0);
	@@var_243_object:GetPosition(var_247_cvector);
	GetPosition(var_248_cvector);
	var_249_cvector = var_247_cvector - var_248_cvector;
	var_250_float = GetByIndex(var_249_cvector, 0);
	var_251_float = GetByIndex(var_249_cvector, 2);
	RotateAsync(var_250_float, var_251_float);
	return 6;
}


func_1441(var_2_object, var_5_int)
{
	var_377_float = 0; var_378_int = 0; var_379_float = 0; var_380_int = 0;
	var_381_bool = var_2_object == 0; //@nz
	if(var_381_bool != 0) {
		return 4;
	}
	var_382_int = var_5_int;
	if(var_382_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_385_bool = var_5_int > (int)0;
		if(var_385_bool != 0) {
			return 4;
		}
	}
	rand(var_379_float);
	var_386_float = 0;
	func_1491(var_386_float);
	var_387_bool = var_379_float < var_386_float;
	if(var_387_bool != 0) {
		irand(var_380_int, var_2_object);
		var_380_int = var_380_int + (int)1;
		var_390_int = "attack" + var_380_int;
		Speak(var_390_int);
		var_391_int = 0;
		func_1489(var_391_int);
		var_5_int = var_391_int;
	}
	return 4;
}


func_1700(var_0_object, var_1_object, var_27_int)
{
	var_29_bool = var_27_int != (int)0;
	if(var_29_bool != 0) {
		return 0;
	}
	var_30_bool = 0; var_31_object = Obj();
	var_31_object = var_1_object;
	func_1738(var_30_bool, var_31_object);
	var_66_bool = var_30_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2468(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	IsPlayerActor(var_22_object, var_24_bool);
	var_25_bool = var_24_bool;
	if(var_25_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2218(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_2477()
{
	var_370_object = Obj(); var_371_object = Obj();
	GetScene(var_371_object);
	var_373_object = Obj();
	func_2400(var_373_object);
	BroadcastMessage("battle", var_373_object, var_371_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2223(var_34_bool, var_35_object, var_36_float)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_bool = 0;
	@@var_35_object:GetPosition(var_47_cvector);
	@@var_35_object:GetEyesHeight(var_46_float);
	var_55_float = GetByIndex(var_47_cvector, 1);
	var_55_float = var_55_float + var_46_float;
	SetByIndex(var_47_cvector, 1) = var_55_float;
	GetPosition(var_48_cvector);
	GetEyesHeight(var_46_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	var_56_float = var_56_float + var_46_float;
	SetByIndex(var_48_cvector, 1) = var_56_float;
	var_49_cvector = var_47_cvector - var_48_cvector;
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (float)0;
	var_58_int = var_49_cvector | var_49_cvector;
	var_59_float = sqrt(var_58_int);
	var_49_cvector = var_49_cvector / var_59_float;
	var_50_cvector = -var_49_cvector;
	var_60_float = var_49_cvector * var_36_float;
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
	var_62_cvector = var_50_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2406(var_61_cvector, var_62_cvector);
	var_70_float = var_61_cvector * (int)25;
	var_71_int = var_60_float + var_70_float;
	var_51_cvector = var_71_int - CVector(0.0, 10.0, 0.0);
	var_52_cvector = var_48_cvector + var_51_cvector;
	IsOverrideActive(var_53_bool);
	var_73_bool = var_53_bool;
	if(var_73_bool != 0) {
		var_34_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_52_cvector, var_50_cvector, (bool)1);
	var_75_float = GetByIndex(var_51_cvector, 0);
	var_76_float = GetByIndex(var_51_cvector, 2);
	Rotate(var_75_float, var_76_float);
	var_77_bool = 0;
	func_2593(var_77_bool);
	if(var_77_bool != 0) {
	} else {
		HasAnimationTrack(var_54_bool, "head");
		var_79_bool = var_54_bool;
		if(var_79_bool == 0) goto Label_2286;
		LookAsyncCamera("head");
	}
Label_2286:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_34_bool = 1;
	return 18;
	
}


func_2488()
{
	var_27_bool = 0; var_28_string = ""; var_29_string = "";
	func_2456(var_27_bool, "quest_b5_01", "butcher_attack");
	return 0;
}


func_1722(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_701(var_2_object, var_3_string)
{
	func_796();
	KillTimer((int)10);
	var_23_object = var_2_object;
	if(var_23_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_2495()
{
	SetVariable("oob5Butcher1", (int)1);
	return 0;
}


func_1473(var_0_object)
{
	var_133_object = Obj();
	var_133_object = var_0_object;
	func_2468(var_133_object);
	return 0;
}


func_2501(var_103_bool)
{
	var_105_int = 0; var_106_string = "";
	func_2434(var_105_int, "b5q01WifeDead");
	var_110_bool = var_105_int != (int)0;
	if(var_110_bool != 0) {
		var_103_bool = 1;
		return 0;
	}
	var_103_bool = 0;
	return 0;
}


func_1478(var_474_int)
{
	var_474_int = 0;
	return 0;
}


func_1480()
{
	var_266_string = "";
	func_2359("attack_stay");
	return 0;
}


func_1738(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_2057(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
	return 0;
}


func_203(var_2_object, var_122_string)
{
	var_123_bool = 0;
	func_2593(var_123_bool);
	var_124_bool = var_123_bool == 0; //@nz
	if(var_124_bool != 0) {
		return 0;
	}
	var_125_bool = var_122_string == var_2_object;
	if(var_125_bool != 0) {
		return 0;
	}
	var_126_string = ""; var_127_bool = 0;
	var_122_string = var_126_string;
	var_129_bool = var_122_string == "";
	if(var_129_bool != 0) {
		var_127_bool = 0;
	} else {
		var_127_bool = 1;
	}
	func_2326(var_126_string, var_127_bool);
	var_2_object = var_122_string;
	return 0;
	
}


func_715()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0;
	WaitForAnimEnd();
	var_43_bool = 0;
	func_2218(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 14;
	}
	func_2568((int)0);
	var_45_int = var_36_int;
	var_37_int = 0;
	
Label_729:
	var_58_bool = 0;
	var_58_bool = 0;
	var_60_bool = var_37_int < (int)5;
	if(var_60_bool != 0) {
		var_61_bool = 0;
		func_2218(var_61_bool);
		if(var_61_bool != 0) {
			var_58_bool = 1;
		}
	}
	if(var_58_bool != 0) {
		irand(var_38_int, (int)3);
		var_64_bool = var_38_int == (int)0;
		if(var_64_bool != 0) {
			var_65_int = var_36_int;
			if(var_65_int == 0) goto Label_762;
			irand(var_39_int, var_36_int);
			var_67_string = ""; var_68_int = 0;
			var_39_int = var_68_int;
			func_2561(var_67_string, var_68_int);
			PlayAnimation("all", var_67_string);
			WaitForAnimEnd(var_40_bool);
			var_69_bool = var_40_bool == 0; //@nz
			if(var_69_bool != 0) {
			} else {
		} else {
				var_74_bool = var_38_int == (int)1;
				if(var_74_bool != 0) {
					rand(var_41_float, (int)4);
					var_77_int = var_41_float + (int)1;
					Sleep(var_77_int, var_42_bool);
					var_78_bool = var_42_bool == 0; //@nz
					if(var_78_bool != 0) {
						goto Label_791;
					}
					goto Label_780;
				}
				var_79_int = var_37_int;
				if(var_79_int == 0) goto Label_780;
				goto Label_791;
		}
		Label_780:
			var_70_bool = 0;
			func_794(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_791;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_729;

		}
	}
Label_791:
	ResetAAS();
	return 14;
	
}


func_1485()
{
	return 0;
}


func_1487(var_499_bool)
{
	var_499_bool = 1;
	return 0;
}


func_1745(var_209_string)
{
	var_209_string = "walk";
	return 0;
}


func_2513(var_112_bool)
{
	var_114_int = 0; var_115_string = "";
	func_2434(var_114_int, "oob5Butcher1");
	var_117_bool = var_114_int == (int)0;
	if(var_117_bool != 0) {
		var_112_bool = 1;
		return 0;
	}
	var_112_bool = 0;
	return 0;
}


func_1747(var_210_string)
{
	var_210_string = "run";
	return 0;
}


func_1489(var_391_int)
{
	var_391_int = 1;
	return 0;
}


func_1749(var_26_object)
{
	EventDisable(0);
	var_27_object = Obj();
	var_26_object = var_27_object;
	func_1774(var_27_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1760:
	Hold();
	goto Label_1760;
}
EMIT "Return(); Pop(0)";


func_1491(var_386_float)
{
	var_386_float = 0.5;
	return 0;
}


func_1493(var_2_object, var_140_bool, var_141_object, var_142_float, var_143_float, var_144_bool, var_145_bool)
{
	var_149_bool = 0; var_150_bool = 0; var_151_bool = 0; var_152_bool = 0;
	var_153_object = Obj();
	var_141_object = var_153_object;
	func_2468(var_153_object);
	SetTimer((int)1, (int)5);
	CanSee(var_151_bool, var_141_object);
	var_156_bool = var_151_bool;
	if(var_156_bool != 0) {
		var_2_object = true;
		var_157_object = Obj();
		var_141_object = var_157_object;
		func_2341(var_157_object);
	} else {
		var_2_object = false;
	}
	var_164_bool = 0; var_165_object = Obj();
	var_141_object = var_165_object;
	func_1926(var_164_bool, var_165_object);
	if(var_164_bool != 0) {
		var_168_object = Obj();
		func_2400(var_168_object);
		SendPlayerEnemy(var_141_object, var_168_object);
	}
	var_169_bool = 0; var_170_object = Obj(); var_171_float = 0; var_172_float = 0; var_173_bool = 0; var_174_bool = 0;
	var_141_object = var_170_object;
	var_142_float = var_171_float;
	var_143_float = var_172_float;
	var_144_bool = var_173_bool;
	var_145_bool = var_174_bool;
	func_1598(var_151_bool, var_152_bool, var_169_bool, var_170_object, var_171_float, var_172_float, var_173_bool, var_174_bool);
	var_169_bool = var_152_bool;
	var_220_object = var_2_object;
	if(var_220_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_152_bool = var_140_bool;
	return 4;
	
}


func_2525(var_86_int)
{
	var_87_int = 0; var_88_int = 0;
	GetVariable("branch", var_88_int);
	var_91_bool = var_88_int == (int)0;
	if(var_91_bool != 0) {
		var_86_int = 1;
		return 2;
	EMIT "GOTO 0x9ec";
	}
	var_93_bool = var_88_int == (int)1;
	if(var_93_bool != 0) {
		var_86_int = 2;
		return 2;
	}
	var_86_int = 3;
	return 2;
}


func_2016(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	@@var_48_object:IsDead(var_50_bool);
	var_50_bool = var_47_bool;
	return 2;
}


func_2021(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj();
	var_42_bool = var_37_object == 0; //@ne
	if(var_42_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	var_43_bool = 0;
	var_43_bool = 0;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", (int)1);
	if(var_46_bool != 0) {
		var_47_bool = 0; var_48_object = Obj();
		var_37_object = var_48_object;
		func_2016(var_47_bool, var_48_object);
		if(var_47_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	GetScene(var_40_object);
	var_51_bool = var_40_object == 0; //@ne
	if(var_51_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	@@var_37_object:GetScene(var_41_object);
	var_52_bool = var_40_object != var_41_object;
	if(var_52_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	var_36_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1774(var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_object = Obj(); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0);
	var_48_bool = var_27_object == 0; //@ne
	if(var_48_bool != 0) {
		var_49_string = "";
		func_1865("fdie");
	} else {
		@@var_27_object:GetPosition(var_38_cvector);
		GetPosition(var_39_cvector);
		GetDirection(var_40_cvector);
		var_41_cvector = var_39_cvector - var_38_cvector;
		var_81_float = GetByIndex(var_41_cvector, 0);
		var_82_float = GetByIndex(var_40_cvector, 0);
		var_83_float = var_81_float * var_82_float;
		var_84_float = GetByIndex(var_41_cvector, 2);
		var_85_float = GetByIndex(var_40_cvector, 2);
		var_86_float = var_84_float * var_85_float;
		var_87_int = var_83_float + var_86_float;
		var_89_bool = var_87_int >= (int)0;
		if(var_89_bool != 0) {
			var_42_string = "fdie";
		} else {
				var_42_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_27_object = var_43_object;
		var_92_bool = IsFuncExist(var_27_object, "GetScriptProperty", (int)2);
		if(var_92_bool != 0) {
			@@var_27_object:HasScriptProperty(var_44_bool, "Owner");
			var_94_bool = var_44_bool;
			if(var_94_bool != 0) {
				@@var_27_object:GetScriptProperty(var_43_object, "Owner");
				var_96_bool = var_43_object == 0; //@ne
				if(var_96_bool != 0) {
					var_27_object = var_43_object;
				}
			}
		}
		var_99_bool = IsFuncExist(var_43_object, "@GetEyesHeight", (int)1);
		if(var_99_bool != 0) {
			@@var_43_object:GetEyesHeight(var_46_float);
			var_47_cvector = CVector(0.0, 0.0, 0.0);
			var_100_float = GetByIndex(var_47_cvector, 1);
			var_46_float = var_100_float;
			SetByIndex(var_47_cvector, 1) = var_100_float;
			LookAsync(var_27_object, "head", var_47_cvector);
			var_45_bool = 1;
		} else {
			var_45_bool = 0;

		}
		var_102_string = "";
		var_42_string = var_102_string;
		func_2359(var_102_string);
		PlayAnimation("all", var_42_string);
		WaitForAnimEnd();
		var_104_bool = var_45_bool;
		if(var_104_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_42_string);
		RemoveEnvelope();
		var_43_object = 0;
	}
	return 20;
	
}


func_2542(var_24_int)
{
	var_25_int = 0; var_26_int = 0;
	GetVariable("branch", var_26_int);
	var_26_int = var_24_int;
	return 2;
}


func_2292()
{
	var_187_bool = 0; var_188_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_190_bool = 0;
	func_2593(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		HasAnimationTrack(var_188_bool, "head");
		var_192_bool = var_188_bool;
		if(var_192_bool == 0) goto Label_2309;
		UnlookAsync("head");
	}
Label_2309:
	return 2;
	
}


func_2548(var_23_object)
{
	var_24_int = 0;
	func_2542(var_24_int);
	var_29_bool = var_24_int == (int)1;
	if(var_29_bool != 0) {
		WorkWithCorpse(var_23_object);
	} else {
		Barter(var_23_object);
	}
	return 0;
	
}


func_1271(var_500_bool, var_501_float)
{
	var_502_float = 0; var_503_bool = 0; var_504_float = 0; var_505_bool = 0;
	rand(var_504_float);
	var_506_bool = var_504_float < var_501_float;
	if(var_506_bool != 0) {

	Label_1276:
		IsAnimationPlaying(var_505_bool);
		var_507_bool = var_505_bool == 0; //@nz
		if(var_507_bool != 0) {
		} else {
			var_508_bool = 0;
			func_1369(var_508_bool);
			if(var_508_bool != 0) {
				var_500_bool = 1;
				sync();
				goto Label_1276;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1473(var_505_bool);
	}
	goto Label_1296;
	
Label_1296:
	var_500_bool = 0;
	return 4;
	
}


