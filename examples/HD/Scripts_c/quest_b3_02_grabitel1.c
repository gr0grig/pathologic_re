// @IMPORTS: Face/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,GetScene/1,GetGeometryLocator/3,AddActorByType/6,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,CreateDialog/1,IsOverrideActive/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,WaitForAnimEnd/1,rand/2,ResetAAS/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FindActor/2,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/3,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,SetVariable/2,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:all|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|W:Owner|A:SetScriptProperty|W:Target|A:GetPosition|A:GetEyesHeight|W:StartDirection|W:kill|W:attack_off|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|W:walk|W:run|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|W:quest_b3_02|W:grabitel_attack|W:fdie|W:bdie|W:GetScriptProperty|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|A:add|A:size|A:get|W:blood_dir.xml|W:Can't find lsh animation : |W:reputation|W:battle|W:god_mode|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:b3q02GrabitelTalk|W:b3q02|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:Knife|W:lockpick|W:grabitel_mark|A:RemoveStationaryActor|W:grabitel_dead
// @GLOBALS: 0:bool:,1:object:,2:bool:
// @RUN_OP: 0x620
// @RUN_TASK: 5
// @TASK_0: vars=bool params=2
// @EVENT_17: op=0x6b vars=object
// @EVENT_30: op=0x71 vars=object,object,bool
// @EVENT_26: op=0x78 vars=string
// @TASK_1: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0xb6 vars=object
// @EVENT_30: op=0xbc vars=object,object,bool
// @EVENT_26: op=0xc3 vars=string
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_17: op=0x35f vars=object
// @EVENT_30: op=0x365 vars=object,object,bool
// @EVENT_26: op=0x36c vars=string
// @EVENT_7: op=0x3a8 vars=int
// @EVENT_1: op=0x3c3 vars=object
// @EVENT_2: op=0x3d2 vars=object
// @EVENT_10: op=0x458 vars=object
// @EVENT_41: op=0x463 vars=object
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x53a vars=int,int
// @TASK_5: vars= params=0
// @EVENT_0: op=0x628 vars=object
// @EVENT_17: op=0x633 vars=object
// @EVENT_26: op=0x63a vars=string
// @TASK_6: vars= params=0
// @TASK_7: vars= params=1
// @EVENT_0: op=0x6e9 vars=object
// @EVENT_22: op=0x768 vars=object,int,float,float
// @EVENT_16: op=0x76a vars=object,string
// @EVENT_41: op=0x76c vars=object
// @STANDALONE_EVENT_22: op=0xb7b vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xb83 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xb8d vars=object,string
// @STANDALONE_EVENT_41: op=0xb9a vars=object
// @PE: 0x6b,0x71,0x78,0x7e,0x9a,0x9d,0xa2,0xb6,0xbc,0xc3,0x35f,0x365,0x36c,0x3a8,0x3c3,0x3d2,0x446,0x458,0x463,0x46c,0x4c1,0x524,0x53a,0x620,0x628,0x633,0x63a,0x6ce,0x6da,0x74e,0x768,0x76a,0x76c,0x76e,0x9cf,0x9d6,0x9ee,0x9f9,0xa0b,0xab4,0xaba,0xac1,0xae4,0xb7b,0xb83,0xb9a,0xba0,0xba2

task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_15_bool = Obj();
	func_2976();
	return 0;
}


task_0_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj();
	var_15_object = var_19_object;
	var_16_string = var_20_object;
	func_2978(var_20_object);
	return 0;
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_17_bool = var_15_bool == "kill";
	if(var_17_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


task_1_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_15_bool = Obj();
	func_2976();
	return 0;
}


task_1_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj();
	var_15_object = var_19_object;
	var_16_string = var_20_object;
	func_2978(var_20_object);
	return 0;
}


task_1_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_17_bool = var_15_bool == "kill";
	if(var_17_bool != 0) {
		var_18_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
	}
	return 0;
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_15_bool = Obj();
	func_2976();
	return 0;
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj();
	var_15_object = var_19_object;
	var_16_string = var_20_object;
	func_2978(var_20_object);
	return 0;
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_17_bool = var_15_bool == "kill";
	if(var_17_bool != 0) {
		var_18_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_950(var_15_bool);
	}
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_17_bool = var_15_bool == (int)1;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_18_object = var_1_object;
		func_2645(var_18_object);
	} else {
		var_23_int = 0;
		var_15_bool = var_23_int;
		func_1094(var_14_string, var_15_bool, var_23_int);
	}
	return 0;
	
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_1_object == var_15_bool;
	if(var_17_bool != 0) {
		var_18_bool = var_2_int == 0; //@nz
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_2_int = true;
		var_19_object = Obj();
		var_15_bool = var_19_object;
		func_2425(var_19_object);
	}
	return 0;
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_1_object == var_15_bool;
	if(var_17_bool != 0) {
		var_18_int = var_2_int;
		if(var_18_int != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	RequestClearPath(var_15_bool);
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_950(var_15_bool);
	var_15_bool = Obj();
	func_2970();
	return 0;
}


task_4_event_11(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int)
{
	if((int)1 != 0) {
		func_2436();
		var_20_bool = var_16_int == (int)20248;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_bool;
			func_2746();
		}
		var_30_bool = var_16_int == (int)20242;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_bool;
			func_2746();
		}
		var_34_bool = var_16_int == (int)20258;
		if(var_34_bool != 0) {
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_bool;
			func_2746();
		}
		var_38_bool = var_16_int == (int)20255;
		if(var_38_bool != 0) {
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_bool;
			func_2746();
		}
		var_42_bool = var_15_int == (int)19494;
		if(var_42_bool != 0) {
			var_43_bool = 0; var_44_object = Obj();
			var_44_object = var_1_object;
			func_2753(var_44_object);
			var_51_bool = var_43_bool == 0; //@nz
			if(var_51_bool != 0) {
				var_52_object = Obj(); var_53_object = Obj();
				var_52_object = var_1_object;
				var_53_object = var_0_bool;
				func_2740();
				var_56_string = "";
				func_1316(var_16_int, "Neutral");
				@@@var_0_bool:SetMessage((int)518381);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)519109, (int)20244, (int)20240);
				@@@var_0_bool:AddReply((int)518382, (int)20241, (int)19495);
				return 0;
			}
			var_80_bool = 0; var_81_object = Obj();
			var_81_object = var_1_object;
			func_2753(var_81_object);
			if(var_80_bool != 0) {
				var_82_object = Obj(); var_83_object = Obj();
				var_82_object = var_1_object;
				var_83_object = var_0_bool;
				func_2740();
				var_84_string = "";
				func_1316(var_16_int, "Neutral");
				@@@var_0_bool:SetMessage((int)518383);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)518384, (int)20252, (int)19497);
				@@@var_0_bool:AddReply((int)519119, (int)20252, (int)20251);
				return 0;
			}
		}
		var_93_bool = var_15_int == (int)20252;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_1316(var_16_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519120);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519121, (int)20256, (int)20254);
			@@@var_0_bool:AddReply((int)519122, (int)-1, (int)20255);
			return 0;
		}
		var_103_bool = var_15_int == (int)20256;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_1316(var_16_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519123);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519124, (int)-1, (int)20257);
			@@@var_0_bool:AddReply((int)519125, (int)-1, (int)20258);
			return 0;
		}
		var_113_bool = var_15_int == (int)20241;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_1316(var_16_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519110);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519111, (int)-1, (int)20242);
			@@@var_0_bool:AddReply((int)519112, (int)-1, (int)20243);
			return 0;
		}
		var_123_bool = var_15_int == (int)20244;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_1316(var_16_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519113);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519114, (int)20247, (int)20245);
			@@@var_0_bool:AddReply((int)519115, (int)20247, (int)20246);
			return 0;
		}
		var_133_bool = var_15_int == (int)20247;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_1316(var_16_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519116);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519117, (int)-1, (int)20248);
			@@@var_0_bool:AddReply((int)519118, (int)-1, (int)20250);
			return 0;
		}
		var_3_int = true;
		var_142_bool = 0;
		func_2714(var_142_bool);
		if(var_142_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x53b";
	
}


task_5_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	func_1685();
	var_16_int = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	TaskCall(3);
	func_1143(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_string = ""; var_18_string = "";
	func_2633(var_16_bool, "quest_b3_02", "grabitel_attack");
	return 0;
}


task_5_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_string)
{
	var_17_bool = var_15_string == "attack";
	if(var_17_bool != 0) {
		TaskCall(6);
		func_1690();
		TaskReturn();
	}
	return 0;
}


task_7_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsOverrideActive(var_17_bool);
	var_18_bool = var_17_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_15_object = var_19_object;
		func_2788(var_19_object);
	}
	return 2;
}


task_7_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0;
}


task_7_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_string)
{
	return 0;
}


task_7_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0;
	var_15_object = var_19_object;
	var_16_int = var_20_int;
	var_17_float = var_21_float;
	func_2209(var_19_object, var_20_int, var_21_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
	var_15_object = var_21_object;
	var_16_int = var_22_int;
	var_17_float = var_23_float;
	var_19_cvector = var_24_cvector;
	var_20_cvector = var_25_cvector;
	func_2277(var_23_float, var_24_cvector, var_25_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0;
	var_20_bool = var_16_string == "health";
	if(var_20_bool != 0) {
		GetProperty("health", var_18_float);
		var_23_bool = var_18_float <= (int)0;
		if(var_23_bool != 0) {
			SignalDeath(var_15_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_2908(var_16_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool)
{
	
Label_1568:
	func_1604();
	Sleep((int)3);
	goto Label_1568;
}
EMIT "Return(); Pop(0)";


func_0(var_0_bool, var_76_bool, var_77_object, var_196_object)
{
	var_79_object = Obj(); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_object = Obj(); var_83_cvector = CVector(0,0,0); var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_object = Obj(); var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0);
	var_93_object = Obj();
	var_77_object = var_93_object;
	func_2645(var_93_object);
	var_0_bool = false;
	var_98_bool = 0; var_99_object = Obj();
	var_77_object = var_99_object;
	func_2156(var_98_bool, var_99_object);
	var_112_bool = 0; var_113_object = Obj();
	var_77_object = var_113_object;
	func_2122(var_112_bool, var_113_object);
	var_114_bool = var_112_bool == 0; //@nz
	if(var_114_bool != 0) {
		var_76_bool = 0;
		return 14;
	}
	func_2654();
	Face(var_77_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_123_bool = 0; var_124_object = Obj();
	var_77_object = var_124_object;
	func_2122(var_123_bool, var_124_object);
	var_125_bool = var_123_bool == 0; //@nz
	if(var_125_bool != 0) {
		StopAsync();
		var_76_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_86_object);
	GetGeometryLocator("knife", var_88_bool, var_87_cvector);
	AddActorByType(var_89_object, "scripted", var_86_object, var_87_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_133_object = Obj();
	func_2495(var_133_object);
	@@var_89_object:SetScriptProperty("Owner", var_133_object);
	@@var_89_object:SetScriptProperty("Target", var_77_object);
	@@var_77_object:GetPosition(var_90_cvector);
	@@var_77_object:GetEyesHeight(var_91_float);
	var_135_float = GetByIndex(var_90_cvector, 1);
	var_137_int = var_91_float - (int)10;
	var_135_float = var_135_float + var_137_int;
	SetByIndex(var_90_cvector, 1) = var_135_float;
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_float = 0;
	var_87_cvector = var_139_cvector;
	var_90_cvector = var_140_cvector;
	func_2671(var_138_cvector, var_139_cvector, var_140_cvector, (float)2000.0);
	var_138_cvector = var_92_cvector;
	@@var_89_object:SetScriptProperty("StartDirection", var_92_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_190_bool = var_0_bool;
	if(var_190_bool != 0) {
		var_76_bool = 1;
		return 14;
	}
	var_191_bool = 0; var_192_object = Obj();
	var_77_object = var_192_object;
	func_2122(var_191_bool, var_192_object);
	var_193_bool = var_191_bool == 0; //@nz
	if(var_193_bool != 0) {
		var_76_bool = 0;
		return 14;
	}
	var_194_bool = 0; var_195_object = Obj();
	var_77_object = var_195_object;
	TaskCall(1);
	func_126(var_194_bool, var_195_object);
	TaskReturn();
	var_196_object = var_76_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_2561(var_100_bool, var_101_int, var_102_int)
{
	var_103_int = 0; var_104_int = 0;
	irand(var_104_int, var_102_int);
	var_100_bool = var_104_int < var_101_int;
	return 2;
}


func_2050(var_604_bool, var_605_object)
{
	var_606_float = 0; var_607_float = 0;
	var_608_bool = 0; var_609_object = Obj(); var_610_string = "";
	var_605_object = var_609_object;
	func_1943(var_608_bool, var_609_object, "health");
	var_611_bool = var_608_bool == 0; //@nz
	if(var_611_bool != 0) {
		var_604_bool = 0;
		return 2;
	}
	var_612_bool = 0;
	var_612_bool = 0;
	var_613_bool = 0; var_614_object = Obj();
	var_605_object = var_614_object;
	func_1938(var_613_bool, var_614_object);
	if(var_613_bool != 0) {
		var_615_bool = 0;
		func_2665(var_615_bool);
		if(var_615_bool != 0) {
			var_612_bool = 1;
		}
	}
	if(var_612_bool != 0) {
		var_604_bool = 0;
		return 2;
	}
	@@var_605_object:GetProperty("health", var_607_float);
	var_604_bool = var_607_float <= (float)0.0;
	return 2;
}


func_2566(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_2571(var_32_bool, var_33_object, var_34_float)
{
	var_35_bool = var_33_object == 0; //@nz
	if(var_35_bool != 0) {
		var_32_bool = 0;
		return 0;
	}
	var_37_bool = var_34_float > (int)0;
	if(var_37_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_68_bool = var_34_float < (int)0;
		if(var_68_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2592;
		}
		var_32_bool = 0;
		return 0;
	}
Label_2592:
	var_39_float = 0;
	var_34_float = var_39_float;
	func_2623(var_39_float);
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; var_46_float = 0; var_47_float = 0; var_48_float = 0;
	var_33_object = var_44_object;
	var_34_float = var_46_float;
	func_1955(var_43_bool, var_44_object, "reputation", var_46_float, (float)0, (float)1);
	var_32_bool = 1;
	return 0;
	
}


func_2081(var_42_bool, var_43_object)
{
	var_44_bool = 0; var_45_bool = 0;
	@@var_43_object:IsDead(var_45_bool);
	var_45_bool = var_42_bool;
	return 2;
}


func_2086(var_31_bool, var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj();
	var_37_bool = var_32_object == 0; //@ne
	if(var_37_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	var_38_bool = 0;
	var_38_bool = 0;
	var_41_bool = IsFuncExist(var_32_object, "IsDead", (int)1);
	if(var_41_bool != 0) {
		var_42_bool = 0; var_43_object = Obj();
		var_32_object = var_43_object;
		func_2081(var_42_bool, var_43_object);
		if(var_42_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	GetScene(var_35_object);
	var_46_bool = var_35_object == 0; //@ne
	if(var_46_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	@@var_32_object:GetScene(var_36_object);
	var_47_bool = var_35_object != var_36_object;
	if(var_47_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	var_31_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2606(var_589_float)
{
	var_590_object = Obj(); var_591_object = Obj();
	CreateFloatVector(var_591_object);
	@@var_591_object:add(var_589_float);
	var_593_bool = var_589_float < (int)0;
	if(var_593_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_591_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2623(var_39_float)
{
	var_40_object = Obj(); var_41_object = Obj();
	CreateFloatVector(var_41_object);
	@@var_41_object:add(var_39_float);
	SendWorldWndMessage((int)16, var_41_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1604()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_2302(var_29_bool);
	var_32_bool = var_29_bool == 0; //@nz
	if(var_32_bool != 0) {
		return 14;
	}
	func_2723((int)0);
	var_33_int = var_22_int;
	var_23_int = 0;
	
Label_1618:
	var_46_bool = 0;
	var_46_bool = 0;
	var_48_bool = var_23_int < (int)5;
	if(var_48_bool != 0) {
		var_49_bool = 0;
		func_2302(var_49_bool);
		if(var_49_bool != 0) {
			var_46_bool = 1;
		}
	}
	if(var_46_bool != 0) {
		irand(var_24_int, (int)3);
		var_52_bool = var_24_int == (int)0;
		if(var_52_bool != 0) {
			var_53_int = var_22_int;
			if(var_53_int == 0) goto Label_1651;
			irand(var_25_int, var_22_int);
			var_55_string = ""; var_56_int = 0;
			var_25_int = var_56_int;
			func_2716(var_55_string, var_56_int);
			PlayAnimation("all", var_55_string);
			WaitForAnimEnd(var_26_bool);
			var_57_bool = var_26_bool == 0; //@nz
			if(var_57_bool != 0) {
			} else {
		} else {
				var_62_bool = var_24_int == (int)1;
				if(var_62_bool != 0) {
					rand(var_27_float, (int)4);
					var_65_int = var_27_float + (int)1;
					Sleep(var_65_int, var_28_bool);
					var_66_bool = var_28_bool == 0; //@nz
					if(var_66_bool != 0) {
						goto Label_1680;
					}
					goto Label_1669;
				}
				var_67_int = var_23_int;
				if(var_67_int == 0) goto Label_1669;
				goto Label_1680;
		}
		Label_1669:
			var_58_bool = 0;
			func_1683(var_58_bool);
			var_59_bool = var_58_bool == 0; //@nz
			if(var_59_bool != 0) {
				goto Label_1680;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_1618;

		}
	}
Label_1680:
	ResetAAS();
	return 14;
	
}


func_1094(var_0_bool, var_1_object, var_23_int)
{
	var_25_bool = var_23_int != (int)0;
	if(var_25_bool != 0) {
		return 0;
	}
	var_26_bool = 0; var_27_object = Obj();
	var_27_object = var_1_object;
	func_1132(var_26_bool, var_27_object);
	var_62_bool = var_26_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2633(var_22_bool, var_23_string, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	FindActor(var_26_object, var_23_string);
	var_27_bool = var_26_object == 0; //@ne
	if(var_27_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	Trigger(var_26_object, var_24_string);
	var_22_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2122(var_27_bool, var_28_object)
{
	var_29_int = 0; var_30_int = 0;
	var_31_bool = 0; var_32_object = Obj();
	var_28_object = var_32_object;
	func_2086(var_31_bool, var_32_object);
	var_48_bool = var_31_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	var_49_bool = 0; var_50_object = Obj(); var_51_string = "";
	var_28_object = var_50_object;
	func_1943(var_49_bool, var_50_object, "noaccess");
	var_58_bool = var_49_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_27_bool = 1;
		return 2;
	}
	@@var_28_object:GetProperty("noaccess", var_30_int);
	var_27_bool = var_30_int == (int)0;
	return 2;
}


func_2645(var_93_object)
{
	var_94_bool = 0; var_95_bool = 0;
	IsPlayerActor(var_93_object, var_95_bool);
	var_96_bool = var_95_bool;
	if(var_96_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1116(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2654()
{
	var_115_object = Obj(); var_116_object = Obj();
	GetScene(var_116_object);
	var_118_object = Obj();
	func_2495(var_118_object);
	BroadcastMessage("battle", var_118_object, var_116_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2146(var_102_bool, var_103_cvector)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_bool = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0;
	GetPosition(var_107_cvector);
	var_108_cvector = var_103_cvector - var_107_cvector;
	var_110_float = GetByIndex(var_108_cvector, 0);
	var_111_float = GetByIndex(var_108_cvector, 2);
	Rotate(var_110_float, var_111_float, var_109_bool);
	var_109_bool = var_102_bool;
	return 6;
}


func_2665(var_615_bool)
{
	var_616_bool = 0; var_617_bool = 0;
	GetVariable("god_mode", var_617_bool);
	var_617_bool = var_615_bool;
	return 2;
}


func_2156(var_98_bool, var_99_object)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0);
	@@var_99_object:GetPosition(var_101_cvector);
	var_102_bool = 0; var_103_cvector = CVector(0,0,0);
	var_101_cvector = var_103_cvector;
	func_2146(var_102_bool, var_103_cvector);
	var_102_bool = var_98_bool;
	return 2;
}


func_1132(var_319_bool, var_320_object)
{
	var_321_bool = 0; var_322_object = Obj();
	var_320_object = var_322_object;
	func_2122(var_321_bool, var_322_object);
	var_321_bool = var_319_bool;
	return 0;
}


func_2671(var_138_cvector, var_139_cvector, var_140_cvector, var_141_float)
{
	var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_float = 0; var_153_float = 0;
	var_148_cvector = var_140_cvector - var_139_cvector;
	var_149_float = 250000;
	var_154_float = GetByIndex(var_148_cvector, 1);
	var_156_float = var_154_float * (int)1000;
	var_157_float = var_141_float * var_141_float;
	var_150_float = var_156_float - var_157_float;
	var_151_float = var_148_cvector | var_148_cvector;
	var_158_float = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0;
	var_149_float = var_159_float;
	var_150_float = var_160_float;
	var_151_float = var_161_float;
	func_2518(var_158_float, var_159_float, var_160_float, var_161_float);
	var_158_float = var_152_float;
	var_167_bool = var_152_float < (int)0;
	if(var_167_bool != 0) {
		var_153_float = 1;
	} else {
		var_172_float = 0; var_173_float = 0; var_174_float = 0; var_175_float = 0; var_176_float = 0;
		var_149_float = var_173_float;
		var_150_float = var_174_float;
		var_151_float = var_175_float;
		var_176_float = sqrt(var_152_float);
		func_2525(var_173_float, var_174_float, var_175_float, var_176_float);
		var_153_float = sqrt(var_172_float);
	}
	var_169_float = CVector(0.0, 500.0, 0.0) * var_153_float;
	var_170_float = var_169_float * var_153_float;
	var_171_int = var_148_cvector + var_170_float;
	var_138_cvector = var_171_int / var_153_float;
	return 12;
	
}


func_1139(var_337_string)
{
	var_337_string = "walk";
	return 0;
}


func_1141(var_338_string)
{
	var_338_string = "run";
	return 0;
}


func_2165(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = "";
	var_47_bool = var_32_object == 0; //@ne
	if(var_47_bool != 0) {
		return 14;
	}
	IsDead(var_40_bool);
	var_48_bool = var_40_bool;
	if(var_48_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_41_int);
	var_50_bool = var_41_int < (int)0;
	if(var_50_bool != 0) {
		return 14;
	}
	@@var_32_object:GetPosition(var_42_cvector);
	GetPosition(var_43_cvector);
	GetDirection(var_44_cvector);
	var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_53_float = var_51_float * var_52_float;
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	var_56_float = var_54_float * var_55_float;
	var_57_int = var_53_float + var_56_float;
	var_59_bool = var_57_int >= (int)0;
	if(var_59_bool != 0) {
		var_46_string = "fhit";
	} else {
		var_46_string = "bhit";
	}
	var_62_int = var_46_string + "1";
	var_64_int = var_46_string + "2";
	FadeSecondaryAnimation("hit_react", var_62_int, var_64_int, (int)-10);
	return 14;
	
}


func_1143(var_0_bool, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_bool = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_2307(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_2708(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_2706(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_2710(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_2712(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_2765(var_79_int);
	@@var_23_object:SetPlayerName(var_79_int);
	IsOverrideActive(var_24_bool);
	var_87_bool = var_24_bool;
	if(var_87_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	DoDialog(var_23_object);
	var_88_object = Obj(); var_89_object = Obj();
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(4);
	func_1217(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_1199:
	var_162_bool = var_26_bool == 0; //@nz
	if(var_162_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_1199;
	}
	var_17_object = Obj();
	func_2376();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_126(var_194_bool, var_195_object)
{
	var_202_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_203_object = Obj(); var_204_bool = 0; var_205_float = 0;
	var_195_object = var_203_object;
	func_203(var_199_bool, var_200_float, var_201_int, var_194_bool, var_195_object, var_203_object, (bool)1, (float)200.0);
	var_677_bool = 0;
	var_677_bool = 0;
	var_678_bool = GlobalVars[0];
	if(var_678_bool != 0) {
		var_679_int = var_3_int;
		if(var_679_int != 0) {
			var_677_bool = 1;
		}
	}
	if(var_677_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_682_bool = GlobalVars[0];
	var_682_bool = var_194_bool;
	return 0;
}


func_643(var_3_int)
{
	var_3_int = true;
	return 0;
}


func_645(var_645_bool, var_646_float)
{
	var_647_float = 0; var_648_bool = 0; var_649_float = 0; var_650_bool = 0;
	rand(var_649_float);
	var_651_bool = var_649_float < var_646_float;
	if(var_651_bool != 0) {

	Label_650:
		IsAnimationPlaying(var_650_bool);
		var_652_bool = var_650_bool == 0; //@nz
		if(var_652_bool != 0) {
		} else {
			var_653_bool = 0;
			func_743(var_653_bool);
			if(var_653_bool != 0) {
				var_645_bool = 1;
				sync();
				goto Label_650;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_847(var_650_bool);
	}
	goto Label_670;
	
Label_670:
	var_645_bool = 0;
	return 4;
	
}


func_2706(var_76_int)
{
	var_76_int = 518411;
	return 0;
}


func_1683(var_58_bool)
{
	var_58_bool = 1;
	return 0;
}


func_2708(var_75_int)
{
	var_75_int = 518410;
	return 0;
}


func_1685()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2710(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_2712(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_154(var_530_float)
{
	var_530_float = 0.15000000596046448;
	return 0;
}


func_2714(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_1690()
{
	var_18_bool = GlobalVars[2];
	GlobalVars[2] = (bool)1;
	
Label_1693:
	var_19_bool = 0; var_20_object = Obj();
	func_1931(Obj());
	var_21_object = var_20_object;
	func_1705(var_14_bool, var_15_string, var_19_bool, var_20_object);
	Sleep((int)1);
	goto Label_1693;
}
EMIT "Return(); Pop(0)";


func_157(var_537_int)
{
	var_537_int = 0;
	return 0;
}


func_2716(var_39_string, var_40_int)
{
	var_41_string = ""; var_42_string = "";
	var_43_int = var_40_int;
	if(var_43_int != 0) {
		"idle" = "idle" + var_40_int;
	}
	var_42_string = var_39_string;
	return 2;
}


func_672(var_0_bool, var_425_bool, var_426_float)
{
	var_427_bool = 0; var_428_cvector = CVector(0,0,0); var_429_cvector = CVector(0,0,0); var_430_cvector = CVector(0,0,0); var_431_float = 0; var_432_bool = 0; var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_cvector = CVector(0,0,0); var_436_float = 0;
	
Label_673:
	IsAnimationPlaying(var_432_bool);
	var_437_bool = var_432_bool == 0; //@nz
	if(var_437_bool != 0) {
	} else {
		var_438_bool = 0;
		func_743(var_438_bool);
		if(var_438_bool != 0) {
			var_425_bool = 1;
			return 10;
		}
		var_481_bool = 0; var_482_object = Obj();
		var_482_object = var_0_bool;
		func_2122(var_481_bool, var_482_object);
		var_483_bool = var_481_bool == 0; //@nz
		if(var_483_bool != 0) {
			var_425_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_433_cvector);
		GetPFPosition(var_434_cvector);
		var_435_cvector = var_433_cvector - var_434_cvector;
		var_436_float = var_435_cvector | var_435_cvector;
		var_484_float = var_426_float * var_426_float;
		var_485_bool = var_436_float < var_484_float;
		if(var_485_bool != 0) {
			var_486_bool = 0; var_487_float = 0;
			var_426_float = var_487_float;
			func_506(var_435_cvector, var_436_float, var_486_bool, var_487_float);
			var_425_bool = 1;
			sync();
			goto Label_673;
		}
		return 10;
	}
	func_847(var_436_float);
	var_425_bool = 0;
	return 10;
	
}


func_160(var_598_int)
{
	var_598_int = 1;
	return 0;
}


func_162(var_599_object, var_600_float)
{
	var_601_bool = 0;
	var_601_bool = 0;
	var_603_bool = var_600_float > (int)0;
	if(var_603_bool != 0) {
		var_604_bool = 0; var_605_object = Obj();
		var_599_object = var_605_object;
		func_2050(var_604_bool, var_605_object);
		if(var_604_bool != 0) {
			var_601_bool = 1;
		}
	}
	if(var_601_bool != 0) {
		var_621_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_643(var_600_float);
	}
	return 0;
}


func_2723(var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0;
	var_36_int = 0;
	
Label_2725:
	var_39_string = ""; var_40_int = 0;
	var_36_int = var_40_int;
	func_2716(var_39_string, var_40_int);
	HasAnimation(var_37_bool, "all", var_39_string);
	var_44_bool = var_37_bool == 0; //@nz
	if(var_44_bool != 0) {
	} else {
		var_36_int = var_36_int + (int)1;
		goto Label_2725;
	}
	var_36_int = var_33_int;
	return 4;
	
}


func_2209(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0);
	var_40_bool = 0;
	var_40_bool = 0;
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_object = var_19_object;
	if(var_42_object != 0) {
		var_44_bool = var_20_int != (int)4;
		if(var_44_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_46_bool = var_20_int != (int)5;
		if(var_46_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
		var_49_cvector = CVector(0,0,0); var_50_object = Obj();
		var_19_object = var_50_object;
		func_1916(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_2501(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_2238:
		var_61_int = "hit" + var_33_int;
		GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector);
		var_62_bool = var_34_bool == 0; //@nz
		if(var_62_bool != 0) {
		} else {
			var_110_int = var_36_cvector | var_31_cvector;
			var_112_bool = var_110_int >= (float)0.7071067690849304;
			if(var_112_bool != 0) {
				@@var_32_object:add(var_35_cvector);
			}
			var_33_int = var_33_int + (int)1;
			goto Label_2238;
		}
		@@var_32_object:size(var_37_int);
		var_63_int = var_37_int;
		if(var_63_int != 0) {
			irand(var_38_int, var_37_int);
			@@var_32_object:get(var_39_cvector, var_38_int);
			var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
			var_19_object = var_64_object;
			var_20_int = var_65_int;
			var_21_float = var_66_float;
			var_39_cvector = var_67_cvector;
			var_68_cvector = -var_31_cvector;
			func_2277(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_2165(var_109_object);
	return 18;
	
}


func_1705(var_19_bool, var_20_object, var_78_bool, var_685_object)
{
	var_25_float = 0; var_26_float = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_20_object = var_28_object;
	func_2122(var_27_bool, var_28_object);
	var_61_bool = var_27_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	var_62_float = 0; var_63_object = Obj();
	var_20_object = var_63_object;
	func_1923(var_62_float, var_63_object);
	var_62_float = var_26_float;
	var_70_bool = 0; var_71_float = 0; var_72_float = 0; var_73_float = 0;
	var_26_float = var_71_float;
	func_2553(var_70_bool, var_71_float, (float)250000.0, (float)3240000.0);
	if(var_70_bool != 0) {
		var_76_bool = 0; var_77_object = Obj();
		var_20_object = var_77_object;
		TaskCall(0);
		func_0(var_26_float, var_78_bool, var_76_bool, var_77_object);
		TaskReturn();
		var_78_bool = var_19_bool;
		return 2;
	}
	var_683_bool = 0; var_684_object = Obj();
	var_20_object = var_684_object;
	TaskCall(1);
	func_126(var_683_bool, var_684_object);
	TaskReturn();
	var_685_object = var_19_bool;
	return 2;
}


func_2740()
{
	SetVariable("b3q02GrabitelTalk", (int)1);
	return 0;
}


func_2746()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = "";
	func_2633(var_23_bool, "quest_b3_02", "grabitel_attack");
	return 0;
}


func_1217(var_0_bool, var_1_object, var_2_int, var_3_int, var_88_object, var_89_object)
{
	var_0_bool = var_89_object;
	var_1_object = var_88_object;
	var_3_int = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_2753(var_96_object);
		var_103_bool = var_95_bool == 0; //@nz
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_bool;
			func_2740();
			var_108_string = "";
			func_1316(var_89_object, "Neutral");
			@@@var_0_bool:SetMessage((int)518381);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519109, (int)20244, (int)20240);
			@@@var_0_bool:AddReply((int)518382, (int)20241, (int)19495);
		} else {
				var_150_bool = 0; var_151_object = Obj();
				var_151_object = var_1_object;
				func_2753(var_151_object);
				if(var_150_bool != 0) {
					var_152_object = Obj(); var_153_object = Obj();
					var_152_object = var_1_object;
					var_153_object = var_0_bool;
					func_2740();
					var_154_string = "";
					func_1316(var_89_object, "Neutral");
					@@@var_0_bool:SetMessage((int)518383);
					@@@var_0_bool:ClearReplies();
					@@@var_0_bool:AddReply((int)518384, (int)20252, (int)19497);
					@@@var_0_bool:AddReply((int)519119, (int)20252, (int)20251);
					goto Label_1286;
				}
				return 0;
		}
	}
Label_1286:
	var_132_bool = 0;
	func_2714(var_132_bool);
	if(var_132_bool != 0) {

	Label_1290:
		lshWaitForAnimEnd();
		var_133_int = var_3_int;
		if(var_133_int != 0) {
		} else {
			var_134_string = "";
			var_134_string = var_2_int;
			func_2394(var_134_string);
			goto Label_1290;
	}
		PlayAnimation("all", "idle");

	Label_1305:
		WaitForAnimEnd();
		var_147_int = var_3_int;
		if(var_147_int != 0) {
			goto Label_1315;
		}
		PlayAnimation("all", "idle");
		goto Label_1305;

	}
	goto Label_1315;
	
Label_1315:
	return 0;
	
}
EMIT "GOTO 0x4c5";


func_2753(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_2566(var_97_int, "b3q02");
	var_102_bool = var_97_int > (int)3;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_203(var_0_bool, var_3_int, var_5_float, var_203_object, var_204_bool, var_205_float, var_274_bool, var_366_bool)
{
	var_206_float = 0; var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_bool = 0; var_210_bool = 0; var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_bool = 0; var_221_bool = 0; var_222_float = 0; var_223_cvector = CVector(0,0,0); var_224_float = 0; var_225_cvector = CVector(0,0,0); var_226_bool = 0; var_227_float = 0;
	func_432(var_225_cvector, var_226_bool, var_227_float);
	var_5_float = 0;
	var_252_bool = IsFuncExist(var_203_object, "@GetAttackDistance", (int)1);
	if(var_252_bool != 0) {
		@@var_203_object:GetAttackDistance(var_217_float);
		var_217_float = var_217_float + (int)50;
	} else {
							var_205_float = var_217_float;
	}
	var_255_bool = var_217_float >= (int)150;
	if(var_255_bool != 0) {
		var_217_float = 150;
	}
	var_3_int = false;
	var_0_bool = var_203_object;
	IsPlayerActor(var_0_bool, var_220_bool);
	var_256_bool = var_220_bool;
	if(var_256_bool != 0) {
		PlayGlobalMusic("attack");
		var_258_object = Obj();
		func_2495(var_258_object);
		SendPlayerEnemy(var_203_object, var_258_object);
	}
	var_259_bool = var_204_bool;
	if(var_259_bool != 0) {
		var_221_bool = 0;
	} else {
						var_221_bool = 1;

	}
	var_222_float = (float)300.0 + var_217_float;
	
Label_243:
	var_261_bool = 0;
	var_261_bool = 0;
	var_262_bool = 0; var_263_object = Obj();
	var_263_object = var_0_bool;
	func_2122(var_262_bool, var_263_object);
	if(var_262_bool != 0) {
		var_264_bool = var_3_int == 0; //@nz
		if(var_264_bool != 0) {
			var_261_bool = 1;
		}
	}
	if(var_261_bool != 0) {
		func_847(var_227_float);
		@@@var_0_bool:GetPFPosition(var_218_cvector);
		GetPFPosition(var_219_cvector);
		var_223_cvector = var_218_cvector - var_219_cvector;
		var_224_float = var_223_cvector | var_223_cvector;
		var_266_float = var_222_float * var_222_float;
		var_267_bool = var_224_float >= var_266_float;
		if(var_267_bool != 0) {
			var_268_bool = 0; var_269_object = Obj(); var_270_float = 0; var_271_float = 0; var_272_bool = 0; var_273_bool = 0;
			var_269_object = var_0_bool;
			var_217_float = var_270_float;
			TaskCall(2);
			func_887(var_276_bool, var_268_bool, var_269_object, var_270_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_351_bool = var_274_bool == 0; //@nz
			if(var_351_bool != 0) {
			} else {
				var_221_bool = 0;
		} else {
				var_357_float = var_205_float * var_205_float;
				var_358_bool = var_224_float >= var_357_float;
				if(var_358_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_225_cvector);
					CanReachByPF(var_226_bool, var_225_cvector);
					var_359_bool = var_226_bool == 0; //@nz
					if(var_359_bool != 0) {
						var_360_bool = 0; var_361_object = Obj(); var_362_float = 0; var_363_float = 0; var_364_bool = 0; var_365_bool = 0;
						var_361_object = var_0_bool;
						var_217_float = var_362_float;
						TaskCall(2);
						func_887(var_368_bool, var_360_bool, var_361_object, var_362_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_369_bool = var_366_bool == 0; //@nz
						if(var_369_bool != 0) {
							goto Label_415;
						}
						var_221_bool = 0;
						goto Label_243;
					}
					var_370_bool = var_221_bool == 0; //@nz
					if(var_370_bool != 0) {
						var_371_object = Obj();
						var_371_object = var_0_bool;
						func_2291(var_371_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_847(var_227_float);
						StopAsync();
						var_221_bool = 1;
						var_382_bool = 0; var_383_object = Obj();
						var_383_object = var_0_bool;
						func_2122(var_382_bool, var_383_object);
						var_384_bool = var_382_bool == 0; //@nz
						if(var_384_bool != 0) {
							goto Label_415;
						}
					}
					rand(var_227_float);
					var_385_bool = 0;
					var_387_bool = var_227_float < (float)0.19999998807907104;
					if(var_387_bool != 1) {
						var_388_bool = 0;
						func_804((bool)1, var_388_bool);
						if(var_388_bool != 1) {
							var_385_bool = 0;
						}
					}
					if(var_385_bool != 0) {
						Face(var_0_bool);
						func_852();
						PlayAnimation("all", "attack_stay");
						var_425_bool = 0; var_426_float = 0;
						var_205_float = var_426_float;
						func_672(var_227_float, var_425_bool, var_426_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_847(var_227_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_664_bool = 0;
						func_804(var_227_float, var_664_bool);
						var_665_bool = var_664_bool == 0; //@nz
						if(var_665_bool == 0) goto Label_405;
						var_666_bool = 0; var_667_object = Obj();
						var_667_object = var_0_bool;
						func_2122(var_666_bool, var_667_object);
						var_668_bool = var_666_bool == 0; //@nz
						if(var_668_bool != 0) {
							goto Label_415;
						}
						@@@var_0_bool:GetPFPosition(var_218_cvector);
						GetPFPosition(var_219_cvector);
						var_223_cvector = var_218_cvector - var_219_cvector;
						var_224_float = var_223_cvector | var_223_cvector;
						var_669_float = var_205_float * var_205_float;
						var_670_bool = var_224_float < var_669_float;
						if(var_670_bool == 0) goto Label_405;
						var_671_bool = 0; var_672_float = 0;
						var_205_float = var_672_float;
						func_506(var_226_bool, var_227_float, var_671_bool, var_672_float);
						var_673_bool = var_671_bool == 0; //@nz
						if(var_673_bool == 0) goto Label_405;
						goto Label_415;
				}
					var_674_bool = 0; var_675_float = 0;
					var_205_float = var_675_float;
					func_506(var_226_bool, var_227_float, var_674_bool, var_675_float);
					var_676_bool = var_674_bool == 0; //@nz
					if(var_676_bool != 0) {
						goto Label_415;
					}
					var_221_bool = 1;

				}
			Label_405:
				goto Label_414;
		}
		Label_414:
			goto Label_243;

		}
	}
Label_415:
	WaitForAnimEnd();
	var_352_int = var_3_int;
	if(var_352_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_355_bool = var_220_bool;
	if(var_355_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_715(var_0_bool, var_440_bool)
{
	var_441_cvector = CVector(0,0,0); var_442_cvector = CVector(0,0,0); var_443_cvector = CVector(0,0,0); var_444_float = 0; var_445_float = 0; var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_cvector = CVector(0,0,0); var_449_float = 0; var_450_float = 0;
	var_451_bool = 0; var_452_object = Obj();
	var_452_object = var_0_bool;
	func_2122(var_451_bool, var_452_object);
	var_453_bool = var_451_bool == 0; //@nz
	if(var_453_bool != 0) {
		var_440_bool = 0;
		return 10;
	}
	var_454_bool = 0;
	func_804(var_450_float, var_454_bool);
	if(var_454_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_446_cvector);
		GetPFPosition(var_447_cvector);
		var_448_cvector = var_446_cvector - var_447_cvector;
		var_449_float = var_448_cvector | var_448_cvector;
		@@@var_0_bool:GetAttackDistance(var_450_float);
		var_450_float = var_450_float + (int)50;
		var_456_float = var_450_float * var_450_float;
		var_440_bool = var_449_float <= var_456_float;
		return 10;
	}
	var_440_bool = 0;
	return 10;
}


func_2765(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0xadc";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_1742(var_70_object)
{
	func_2873();
	func_2849();
	var_133_object = Obj();
	var_70_object = var_133_object;
	func_1754(var_133_object);
	return 0;
}


func_1754(var_133_object)
{
	EventDisable(0);
	var_134_object = Obj();
	var_133_object = var_134_object;
	func_1779(var_134_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1765:
	Hold();
	goto Label_1765;
}
EMIT "Return(); Pop(0)";


func_2782(var_113_int)
{
	var_114_int = 0; var_115_int = 0;
	GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
	return 2;
}


func_2788(var_19_object)
{
	var_20_int = 0;
	func_2782(var_20_int);
	var_25_bool = var_20_int == (int)1;
	if(var_25_bool != 0) {
		WorkWithCorpse(var_19_object);
	} else {
		Barter(var_19_object);
	}
	return 0;
	
}


func_2277(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_2165(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_743(var_438_bool)
{
	var_439_bool = 0;
	var_439_bool = 0;
	var_440_bool = 0;
	func_715(var_439_bool, var_440_bool);
	if(var_440_bool != 0) {
		var_457_bool = 0;
		func_759(var_438_bool, var_439_bool, var_457_bool);
		if(var_457_bool != 0) {
			var_439_bool = 1;
		}
	}
	if(var_439_bool != 0) {
		var_438_bool = 1;
		return 0;
	}
	var_438_bool = 0;
	return 0;
}


func_2801(var_76_int, var_77_int)
{
	var_78_int = 0; var_79_bool = 0; var_80_int = 0; var_81_bool = 0;
	var_82_bool = var_76_int > var_77_int;
	if(var_82_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_80_int = 0;
	var_84_bool = var_76_int != var_77_int;
	if(var_84_bool != 0) {
		var_85_int = var_77_int - var_76_int;
		irand(var_80_int, var_85_int);
	} else {
		var_94_bool = var_76_int == (int)0;
		if(var_94_bool == 0) goto Label_2819;
		return 4;
	}
Label_2819:
	var_80_int = var_80_int + var_76_int;
	var_87_bool = var_80_int == (int)0;
	if(var_87_bool != 0) {
		return 4;
	}
	var_88_int = 0; var_89_string = "";
	func_2903(var_88_int, "Money");
	AddItem(var_81_bool, var_88_int, (int)0, var_80_int);
	return 4;
	
}


func_2291(var_371_object)
{
	var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0);
	@@var_371_object:GetPosition(var_375_cvector);
	GetPosition(var_376_cvector);
	var_377_cvector = var_375_cvector - var_376_cvector;
	var_378_float = GetByIndex(var_377_cvector, 0);
	var_379_float = GetByIndex(var_377_cvector, 2);
	RotateAsync(var_378_float, var_379_float);
	return 6;
}


func_1779(var_134_object)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_string = ""; var_140_object = Obj(); var_141_bool = 0; var_142_bool = 0; var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_string = ""; var_150_object = Obj(); var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_cvector = CVector(0,0,0);
	var_155_bool = var_134_object == 0; //@ne
	if(var_155_bool != 0) {
		var_156_string = "";
		func_1870("fdie");
	} else {
		@@var_134_object:GetPosition(var_145_cvector);
		GetPosition(var_146_cvector);
		GetDirection(var_147_cvector);
		var_148_cvector = var_146_cvector - var_145_cvector;
		var_188_float = GetByIndex(var_148_cvector, 0);
		var_189_float = GetByIndex(var_147_cvector, 0);
		var_190_float = var_188_float * var_189_float;
		var_191_float = GetByIndex(var_148_cvector, 2);
		var_192_float = GetByIndex(var_147_cvector, 2);
		var_193_float = var_191_float * var_192_float;
		var_194_int = var_190_float + var_193_float;
		var_196_bool = var_194_int >= (int)0;
		if(var_196_bool != 0) {
			var_149_string = "fdie";
		} else {
				var_149_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_134_object = var_150_object;
		var_199_bool = IsFuncExist(var_134_object, "GetScriptProperty", (int)2);
		if(var_199_bool != 0) {
			@@var_134_object:HasScriptProperty(var_151_bool, "Owner");
			var_201_bool = var_151_bool;
			if(var_201_bool != 0) {
				@@var_134_object:GetScriptProperty(var_150_object, "Owner");
				var_203_bool = var_150_object == 0; //@ne
				if(var_203_bool != 0) {
					var_134_object = var_150_object;
				}
			}
		}
		var_206_bool = IsFuncExist(var_150_object, "@GetEyesHeight", (int)1);
		if(var_206_bool != 0) {
			@@var_150_object:GetEyesHeight(var_153_float);
			var_154_cvector = CVector(0.0, 0.0, 0.0);
			var_207_float = GetByIndex(var_154_cvector, 1);
			var_153_float = var_207_float;
			SetByIndex(var_154_cvector, 1) = var_207_float;
			LookAsync(var_134_object, "head", var_154_cvector);
			var_152_bool = 1;
		} else {
			var_152_bool = 0;

		}
		var_209_string = "";
		var_149_string = var_209_string;
		func_2454(var_209_string);
		PlayAnimation("all", var_149_string);
		WaitForAnimEnd();
		var_211_bool = var_152_bool;
		if(var_211_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_149_string);
		RemoveEnvelope();
		var_150_object = 0;
	}
	return 20;
	
}


func_759(var_0_bool, var_4_bool, var_457_bool)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_float = 0; var_461_cvector = CVector(0,0,0); var_462_cvector = CVector(0,0,0); var_463_object = Obj(); var_464_bool = 0; var_465_float = 0; var_466_cvector = CVector(0,0,0); var_467_cvector = CVector(0,0,0);
	GetScene(var_463_object);
	var_464_bool = 0;
	
Label_763:
	var_468_cvector = CVector(0,0,0); var_469_object = Obj();
	var_469_object = var_0_bool;
	func_1916(var_468_cvector, var_469_object);
	var_474_int = -var_468_cvector;
	FindDirLength(var_465_float, var_474_int, var_4_bool);
	var_475_bool = var_465_float < var_4_bool;
	if(var_475_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_466_cvector);
		GetPFPosition(var_467_cvector);
		WaitForAnimEnd();
		func_847(var_467_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_464_bool = 1;
		var_479_bool = 0;
		func_715(var_467_cvector, var_479_bool);
		var_480_bool = var_479_bool == 0; //@nz
		if(var_480_bool != 0) {
			goto Label_801;
		}
		goto Label_763;
	}
Label_801:
	var_464_bool = var_457_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2302(var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0;
	IsLoaded(var_31_bool);
	var_31_bool = var_29_bool;
	return 2;
}


func_2307(var_27_bool, var_28_object, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0;
	@@var_28_object:GetPosition(var_40_cvector);
	@@var_28_object:GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	var_48_float = var_48_float + var_39_float;
	SetByIndex(var_40_cvector, 1) = var_48_float;
	GetPosition(var_41_cvector);
	GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_39_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_52_float = sqrt(var_51_int);
	var_42_cvector = var_42_cvector / var_52_float;
	var_43_cvector = -var_42_cvector;
	var_53_float = var_42_cvector * var_29_float;
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	var_55_cvector = var_43_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2501(var_54_cvector, var_55_cvector);
	var_63_float = var_54_cvector * (int)25;
	var_64_int = var_53_float + var_63_float;
	var_44_cvector = var_64_int - CVector(0.0, 10.0, 0.0);
	var_45_cvector = var_41_cvector + var_44_cvector;
	IsOverrideActive(var_46_bool);
	var_66_bool = var_46_bool;
	if(var_66_bool != 0) {
		var_27_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_45_cvector, var_43_cvector, (bool)1);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_68_float, var_69_float);
	var_70_bool = 0;
	func_2714(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_2370;
		LookAsyncCamera("head");
	}
Label_2370:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_2832(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0;
	CreateInvItem(var_123_object);
	@@var_123_object:SetItemName(var_119_string);
	@@var_123_object:SetProperty("Organ", (int)1);
	@@var_123_object:GetItemID(var_124_int);
	AddItem(var_125_bool, var_123_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2849()
{
	var_113_int = 0;
	func_2782(var_113_int);
	var_118_bool = var_113_int != (int)1;
	if(var_118_bool != 0) {
		return 0;
	}
	var_119_string = "";
	func_2832("liver");
	var_130_string = "";
	func_2832("kidney");
	var_131_string = "";
	func_2832("heart");
	var_132_string = "";
	func_2832("blood");
	return 0;
}


func_804(var_0_bool, var_388_bool)
{
	var_389_bool = 0; var_390_bool = 0;
	var_393_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_393_bool != 0) {
		@@@var_0_bool:IsAttacking(var_390_bool);
		var_390_bool = var_388_bool;
		return 2;
	}
	var_388_bool = 0;
	return 2;
}


func_1316(var_2_int, var_108_string)
{
	var_109_bool = 0;
	func_2714(var_109_bool);
	var_110_bool = var_109_bool == 0; //@nz
	if(var_110_bool != 0) {
		return 0;
	}
	var_111_bool = var_108_string == var_2_int;
	if(var_111_bool != 0) {
		return 0;
	}
	var_112_string = ""; var_113_bool = 0;
	var_108_string = var_112_string;
	var_115_bool = var_108_string == "";
	if(var_115_bool != 0) {
		var_113_bool = 0;
	} else {
		var_113_bool = 1;
	}
	func_2410(var_112_string, var_113_bool);
	var_2_int = var_108_string;
	return 0;
	
}


func_815(var_2_int, var_5_float)
{
	var_501_float = 0; var_502_int = 0; var_503_float = 0; var_504_int = 0;
	var_505_bool = var_2_int == 0; //@nz
	if(var_505_bool != 0) {
		return 4;
	}
	var_506_float = var_5_float;
	if(var_506_float != 0) {
		var_5_float = var_5_float + (int)-1;
		var_509_bool = var_5_float > (int)0;
		if(var_509_bool != 0) {
			return 4;
		}
	}
	rand(var_503_float);
	var_510_float = 0;
	func_861(var_510_float);
	var_511_bool = var_503_float < var_510_float;
	if(var_511_bool != 0) {
		irand(var_504_int, var_2_int);
		var_504_int = var_504_int + (int)1;
		var_514_int = "attack" + var_504_int;
		Speak(var_514_int);
		var_515_int = 0;
		func_859(var_515_int);
		var_5_float = var_515_int;
	}
	return 4;
}


func_2873()
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	ClearSubContainer((int)0);
	var_76_int = 0; var_77_int = 0;
	func_2801((int)300, (int)750);
	var_95_string = ""; var_96_int = 0; var_97_int = 0;
	func_2443("Knife", (int)1, (int)8);
	var_106_string = ""; var_107_int = 0; var_108_int = 0;
	func_2443("lockpick", (int)1, (int)6);
	var_109_int = 0; var_110_string = "";
	func_2903(var_109_int, "grabitel_mark");
	AddItem(var_74_bool, var_109_int, (int)0, (int)1);
	return 4;
}


func_2376()
{
	var_164_bool = 0; var_165_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_167_bool = 0;
	func_2714(var_167_bool);
	if(var_167_bool != 0) {
	} else {
		HasAnimationTrack(var_165_bool, "head");
		var_169_bool = var_165_bool;
		if(var_169_bool == 0) goto Label_2393;
		UnlookAsync("head");
	}
Label_2393:
	return 2;
	
}


func_1870(var_156_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_157_string = "";
	var_156_string = var_157_string;
	func_2454(var_157_string);
	PlayAnimation("all", var_156_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_156_string);
	RemoveEnvelope();
	return 0;
}


func_847(var_0_bool)
{
	var_265_object = Obj();
	var_265_object = var_0_bool;
	func_2645(var_265_object);
	return 0;
}


func_852()
{
	var_394_string = "";
	func_2454("attack_stay");
	return 0;
}


func_2903(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetInvItemByName(var_91_int, var_89_string);
	var_91_int = var_88_int;
	return 2;
}


func_857(var_644_bool)
{
	var_644_bool = 1;
	return 0;
}


func_2394(var_134_string)
{
	var_135_bool = 0; var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_float = 0; var_140_float = 0;
	lshHasAnimation(var_138_bool, var_134_string);
	var_141_bool = var_138_bool;
	if(var_141_bool != 0) {
		lshGetAnimTimes(var_134_string, var_139_float, var_140_float);
		lshPlayAnimation(var_139_float, var_140_float, (bool)0);
	} else {
		var_144_int = "Can't find lsh animation : " + var_134_string;
		Trace(var_144_int);
	}
	return 6;
	
}


func_859(var_515_int)
{
	var_515_int = 1;
	return 0;
}


func_2908(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	GetScene(var_18_object);
	var_19_object = Obj();
	func_2495(var_19_object);
	@@var_18_object:RemoveStationaryActor(var_19_object);
	var_22_bool = 0; var_23_string = ""; var_24_string = "";
	func_2633(var_22_bool, "quest_b3_02", "grabitel_dead");
	var_28_bool = 0; var_29_object = Obj();
	var_16_object = var_29_object;
	func_1938(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		var_32_bool = 0; var_33_object = Obj(); var_34_float = 0;
		var_16_object = var_33_object;
		func_2571(var_32_bool, var_33_object, (float)0.029999999329447746);
	}
	var_70_object = Obj();
	var_16_object = var_70_object;
	TaskCall(7);
	func_1742(var_70_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_861(var_510_float)
{
	var_510_float = 0.5;
	return 0;
}


func_2410(var_112_string, var_113_bool)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0;
	lshHasAnimation(var_119_bool, var_112_string);
	var_122_bool = var_119_bool;
	if(var_122_bool != 0) {
		lshGetAnimTimes(var_112_string, var_120_float, var_121_float);
		lshPlayAnimation(var_120_float, var_121_float, var_113_bool);
	} else {
		var_124_int = "Can't find lsh animation : " + var_112_string;
		Trace(var_124_int);
	}
	return 6;
	
}


func_1902(var_561_string, var_562_int)
{
	var_564_bool = var_562_int == (int)2;
	if(var_564_bool != 0) {
		var_561_string = "fire";
		return 0;
	EMIT "GOTO 0x77a";
	}
	var_566_bool = var_562_int == (int)1;
	if(var_566_bool != 0) {
		var_561_string = "bullet";
		return 0;
	}
	var_561_string = "phys";
	return 0;
}


func_887(var_2_int, var_268_bool, var_269_object, var_270_float, var_271_float, var_272_bool, var_273_bool)
{
	var_277_bool = 0; var_278_bool = 0; var_279_bool = 0; var_280_bool = 0;
	var_281_object = Obj();
	var_269_object = var_281_object;
	func_2645(var_281_object);
	SetTimer((int)1, (int)5);
	CanSee(var_279_bool, var_269_object);
	var_284_bool = var_279_bool;
	if(var_284_bool != 0) {
		var_2_int = true;
		var_285_object = Obj();
		var_269_object = var_285_object;
		func_2425(var_285_object);
	} else {
		var_2_int = false;
	}
	var_292_bool = 0; var_293_object = Obj();
	var_269_object = var_293_object;
	func_1938(var_292_bool, var_293_object);
	if(var_292_bool != 0) {
		var_296_object = Obj();
		func_2495(var_296_object);
		SendPlayerEnemy(var_269_object, var_296_object);
	}
	var_297_bool = 0; var_298_object = Obj(); var_299_float = 0; var_300_float = 0; var_301_bool = 0; var_302_bool = 0;
	var_269_object = var_298_object;
	var_270_float = var_299_float;
	var_271_float = var_300_float;
	var_272_bool = var_301_bool;
	var_273_bool = var_302_bool;
	func_992(var_279_bool, var_280_bool, var_297_bool, var_298_object, var_299_float, var_300_float, var_301_bool, var_302_bool);
	var_297_bool = var_280_bool;
	var_348_int = var_2_int;
	if(var_348_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_280_bool = var_268_bool;
	return 4;
	
}


func_2425(var_285_object)
{
	var_286_float = 0; var_287_cvector = CVector(0,0,0); var_288_float = 0; var_289_cvector = CVector(0,0,0);
	@@var_285_object:GetEyesHeight(var_288_float);
	var_289_cvector = CVector(0.0, 0.0, 0.0);
	var_290_float = GetByIndex(var_289_cvector, 1);
	var_288_float = var_290_float;
	SetByIndex(var_289_cvector, 1) = var_290_float;
	LookAsync(var_285_object, "head", var_289_cvector);
	return 4;
}


func_1916(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_1923(var_62_float, var_63_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetPosition(var_67_cvector);
	@@var_63_object:GetPosition(var_68_cvector);
	var_69_cvector = var_68_cvector - var_67_cvector;
	var_62_float = var_69_cvector | var_69_cvector;
	return 6;
}


func_2436()
{
	var_18_bool = 0;
	func_2714(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1931(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	FindActor(var_23_object, "player");
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2443(var_95_string, var_96_int, var_97_int)
{
	var_98_bool = 0; var_99_bool = 0;
	var_100_bool = 0; var_101_int = 0; var_102_int = 0;
	var_96_int = var_101_int;
	var_97_int = var_102_int;
	func_2561(var_100_bool, var_101_int, var_102_int);
	if(var_100_bool != 0) {
		AddItem(var_99_bool, var_95_string, (int)0);
	}
	return 2;
}


func_1938(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	IsPlayerActor(var_29_object, var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_2454(var_157_string)
{
	var_158_bool = 0; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_bool = 0; var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0);
	IsExisting3DSound(var_166_bool, var_157_string);
	var_174_bool = var_166_bool == 0; //@nz
	if(var_174_bool != 0) {
		var_167_int = 0;

	Label_2460:
		var_176_int = var_167_int + (int)1;
		var_177_int = var_157_string + var_176_int;
		IsExisting3DSound(var_168_bool, var_177_int);
		var_178_bool = var_168_bool == 0; //@nz
		if(var_178_bool != 0) {
		} else {
			var_167_int = var_167_int + (int)1;
			goto Label_2460;
		}
		var_179_bool = var_167_int == 0; //@nz
		if(var_179_bool != 0) {
			return 16;
		}
		irand(var_169_int, var_167_int);
		var_181_int = var_169_int + (int)1;
		var_157_string = var_157_string + var_181_int;
	}
	Is3DSoundLoaded(var_170_bool, var_157_string);
	var_182_bool = var_170_bool;
	if(var_182_bool != 0) {
		GetEyesHeight(var_171_float);
		GetDirection(var_172_cvector);
		var_173_cvector = var_172_cvector * (int)50;
		var_184_float = GetByIndex(var_173_cvector, 1);
		var_184_float = var_184_float + var_171_float;
		SetByIndex(var_173_cvector, 1) = var_184_float;
		PlayGlobalSound(var_157_string, var_173_cvector);
	}
	return 16;
	
}


func_1943(var_51_bool, var_52_object, var_53_string)
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


func_2976()
{
	return 0;
}


func_2978(var_18_bool)
{
	var_18_bool = 0;
	return 0;
}


func_1955(var_43_bool, var_44_object, var_45_string, var_46_float, var_47_float, var_48_float)
{
	var_49_float = 0; var_50_float = 0;
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_44_object = var_52_object;
	var_45_string = var_53_string;
	func_1943(var_51_bool, var_52_object, var_53_string);
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_43_bool = 0;
		return 2;
	}
	@@var_44_object:GetProperty(var_45_string, var_50_float);
	var_61_float = 0; var_62_float = 0; var_63_float = 0; var_64_float = 0;
	var_62_float = var_50_float + var_46_float;
	var_47_float = var_63_float;
	var_48_float = var_64_float;
	func_2542(var_61_float, var_62_float, var_63_float, var_64_float);
	@@var_44_object:SetProperty(var_45_string, var_61_float);
	var_43_bool = 1;
	return 2;
}


func_432(var_1_object, var_2_int, var_4_bool)
{
	var_228_bool = 0; var_229_bool = 0; var_230_cvector = CVector(0,0,0); var_231_bool = 0; var_232_bool = 0; var_233_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_434:
	var_237_int = var_1_object + (int)1;
	var_238_int = "attack_begin" + var_237_int;
	HasAnimation(var_231_bool, "all", var_238_int);
	var_239_bool = var_231_bool == 0; //@nz
	if(var_239_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_434;
	}
	var_2_int = 0;
	
Label_448:
	var_242_int = var_2_int + (int)1;
	var_243_int = "attack" + var_242_int;
	IsExisting3DSound(var_232_bool, var_243_int);
	var_244_bool = var_232_bool == 0; //@nz
	if(var_244_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_448;

	}
	GetAnimationOffset(var_233_cvector, "all", "bjump");
	var_247_float = GetByIndex(var_233_cvector, 2);
	var_4_bool = -var_247_float;
	return 6;
	
}


func_950(var_2_int)
{
	KillTimer((int)1);
	var_17_int = var_2_int;
	if(var_17_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1116(var_15_bool);
	return 0;
}


func_1977(var_533_float, var_534_object, var_535_float, var_536_int)
{
	var_540_int = 0; var_541_string = ""; var_542_int = 0; var_543_float = 0; var_544_float = 0; var_545_float = 0; var_546_int = 0; var_547_string = ""; var_548_int = 0; var_549_float = 0; var_550_float = 0; var_551_float = 0;
	var_552_bool = 0; var_553_object = Obj(); var_554_string = "";
	var_534_object = var_553_object;
	func_1943(var_552_bool, var_553_object, "health");
	var_555_bool = var_552_bool == 0; //@nz
	if(var_555_bool != 0) {
		var_533_float = 0.0;
		return 12;
	}
	var_556_bool = 0; var_557_object = Obj(); var_558_string = "";
	var_534_object = var_557_object;
	func_1943(var_556_bool, var_557_object, "armor");
	var_559_bool = var_556_bool == 0; //@nz
	if(var_559_bool != 0) {
		var_546_int = 0;
	} else {
			@@var_534_object:GetProperty("armor", var_546_int);
	}
	var_561_string = ""; var_562_int = 0;
	var_536_int = var_562_int;
	func_1902(var_561_string, var_562_int);
	var_547_string = "armor_" + var_561_string;
	var_567_bool = 0; var_568_object = Obj(); var_569_string = "";
	var_534_object = var_568_object;
	var_547_string = var_569_string;
	func_1943(var_567_bool, var_568_object, var_569_string);
	var_570_bool = var_567_bool == 0; //@nz
	if(var_570_bool != 0) {
		var_548_int = 0;
	} else {
		@@var_534_object:GetProperty(var_547_string, var_548_int);

	}
	var_571_float = 0; var_572_float = 0; var_573_float = 0;
	var_574_int = var_546_int + var_548_int;
	var_572_float = var_574_int / (float)100.0;
	func_2511(var_571_float, var_572_float, (float)1);
	var_571_float = var_549_float;
	@@var_534_object:GetProperty("health", var_550_float);
	var_579_int = (int)1 - var_549_float;
	var_551_float = var_535_float * var_579_int;
	var_581_float = 0; var_582_float = 0; var_583_float = 0; var_584_float = 0;
	var_582_float = var_550_float - var_551_float;
	func_2542(var_581_float, var_582_float, (float)0, (float)1);
	@@var_534_object:SetProperty("health", var_581_float);
	var_587_bool = 0; var_588_object = Obj();
	var_534_object = var_588_object;
	func_1938(var_587_bool, var_588_object);
	if(var_587_bool != 0) {
		var_589_float = 0;
		var_589_float = -var_551_float;
		func_2606(var_589_float);
	}
	var_551_float = var_533_float;
	return 12;
	
}


func_2495(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2501(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_48_cvector | var_48_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_47_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_47_cvector = var_48_cvector / var_56_float;
	return 2;
}


func_2511(var_571_float, var_572_float, var_573_float)
{
	var_576_bool = var_572_float < var_573_float;
	if(var_576_bool != 0) {
		var_572_float = var_571_float;
	} else {
		var_573_float = var_571_float;
	}
	return 0;
	
}


func_467(var_0_bool, var_519_float, var_520_int)
{
	var_521_object = Obj(); var_522_float = 0; var_523_float = 0; var_524_object = Obj(); var_525_float = 0; var_526_float = 0;
	var_528_float = var_519_float * (float)0.8999999761581421;
	GetVictim(var_528_float, var_524_object);
	ReportAttack(var_0_bool);
	var_529_bool = var_524_object == var_0_bool;
	if(var_529_bool != 0) {
		var_530_float = 0; var_531_object = Obj(); var_532_int = 0;
		var_524_object = var_531_object;
		var_520_int = var_532_int;
		func_154(var_532_int);
		var_530_float = var_525_float;
		var_533_float = 0; var_534_object = Obj(); var_535_float = 0; var_536_int = 0;
		var_524_object = var_534_object;
		var_525_float = var_535_float;
		var_537_int = 0; var_538_object = Obj(); var_539_int = 0;
		var_524_object = var_538_object;
		var_520_int = var_539_int;
		func_157(var_539_int);
		var_537_int = var_536_int;
		func_1977(var_533_float, var_534_object, var_535_float, var_536_int);
		var_533_float = var_526_float;
		var_598_int = 0;
		func_160(var_598_int);
		ReportHit(var_0_bool, var_598_int, var_526_float, var_525_float);
		var_599_object = Obj(); var_600_float = 0;
		var_524_object = var_599_object;
		var_526_float = var_600_float;
		func_162(var_599_object, var_600_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2518(var_158_float, var_159_float, var_160_float, var_161_float)
{
	var_162_float = var_160_float * var_160_float;
	var_164_float = (int)4 * var_159_float;
	var_165_float = var_164_float * var_161_float;
	var_158_float = var_162_float - var_165_float;
	return 0;
}


func_2525(var_172_float, var_173_float, var_174_float, var_176_float)
{
	var_177_float = 0; var_178_float = 0;
	var_179_int = -var_174_float;
	var_180_int = var_179_int - var_176_float;
	var_182_float = (int)2 * var_173_float;
	var_178_float = var_180_int / var_182_float;
	var_184_bool = var_178_float > (int)0;
	if(var_184_bool != 0) {
		var_178_float = var_172_float;
		return 2;
	}
	var_185_int = -var_174_float;
	var_186_int = var_185_int + var_176_float;
	var_188_float = (int)2 * var_173_float;
	var_172_float = var_186_int / var_188_float;
	return 2;
}


func_992(var_0_bool, var_1_object, var_297_bool, var_298_object, var_299_float, var_300_float, var_301_bool, var_302_bool)
{
	var_303_bool = 0; var_304_bool = 0; var_305_object = Obj(); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_float = 0; var_310_object = Obj(); var_311_bool = 0; var_312_bool = 0; var_313_object = Obj(); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_float = 0; var_318_object = Obj();
	var_0_bool = false;
	var_1_object = var_298_object;
	var_302_bool = var_312_bool;
	
Label_996:
	var_319_bool = 0; var_320_object = Obj();
	var_298_object = var_320_object;
	func_1132(var_319_bool, var_320_object);
	var_323_bool = var_319_bool == 0; //@nz
	if(var_323_bool != 0) {
		var_297_bool = 0;
		return 16;
	}
	@@var_298_object:GetPosition(var_314_cvector);
	GetPosition(var_315_cvector);
	var_316_cvector = var_314_cvector - var_315_cvector;
	var_317_float = var_316_cvector | var_316_cvector;
	var_324_bool = 0;
	var_324_bool = 0;
	var_326_bool = var_300_float > (int)0;
	if(var_326_bool != 0) {
		var_327_float = var_300_float * var_300_float;
		var_328_bool = var_317_float > var_327_float;
		if(var_328_bool != 0) {
			var_324_bool = 1;
		}
	}
	if(var_324_bool != 0) {
		Stop();
		var_297_bool = 0;
		return 16;
	}
	var_329_float = var_299_float * var_299_float;
	var_330_bool = var_317_float > var_329_float;
	if(var_330_bool != 0) {
		@@var_298_object:GetPFPosition(var_314_cvector);
		FindPathTo(var_318_object, var_314_cvector);
		var_331_bool = var_318_object != 0; //@nn
		if(var_331_bool != 0) {
			var_318_object = var_313_object;
			var_318_object = 0;
		}
		var_332_bool = var_313_object != 0; //@nn
		if(var_332_bool != 0) {
			var_333_bool = var_312_bool;
			if(var_333_bool == 0) goto Label_1045;
			var_312_bool = 0;
			RotatePath(var_313_object, var_311_bool);
			var_334_bool = var_311_bool == 0; //@nz
			if(var_334_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_337_string = "";
				func_1139(var_337_string);
				var_338_string = "";
				func_1141(var_338_string);
				FollowPath(var_313_object, var_301_bool, var_311_bool, var_337_string, var_338_string);
				var_339_bool = var_311_bool == 0; //@nz
				if(var_339_bool != 0) {
					var_340_bool = var_0_bool;
					if(var_340_bool != 0) {
						var_313_object = 0;
						goto Label_1092;
					EMIT "GOTO 0x429";
					}
				} else {
					var_313_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_311_bool);
					var_343_bool = var_311_bool == 0; //@nz
					if(var_343_bool != 0) {
						var_344_bool = var_0_bool;
						if(var_344_bool != 0) {
							var_313_object = 0;
							goto Label_1092;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1092;
	}
			var_318_object = 0;
			goto Label_1090;

		Label_1090:
			var_313_object = 0;

		}
		goto Label_996;
	}
Label_1092:
	var_297_bool = !var_0_bool;
	return 16;
	
}


func_2542(var_61_float, var_62_float, var_63_float, var_64_float)
{
	var_65_bool = var_62_float < var_63_float;
	if(var_65_bool != 0) {
		var_63_float = var_61_float;
		return 0;
	}
	var_66_bool = var_62_float > var_64_float;
	if(var_66_bool != 0) {
		var_64_float = var_61_float;
		return 0;
	}
	var_62_float = var_61_float;
	return 0;
}


func_2553(var_70_bool, var_71_float, var_72_float, var_73_float)
{
	var_70_bool = 0;
	var_74_bool = var_71_float >= var_72_float;
	if(var_74_bool != 0) {
		var_75_bool = var_71_float <= var_73_float;
		if(var_75_bool != 0) {
			var_70_bool = 1;
		}
	}
	return 0;
}


func_506(var_0_bool, var_1_object, var_486_bool, var_487_float)
{
	var_488_int = 0; var_489_bool = 0; var_490_int = 0; var_491_string = ""; var_492_int = 0; var_493_bool = 0; var_494_int = 0; var_495_string = "";
	func_847(var_495_string);
	irand(var_492_int, var_1_object);
	var_492_int = var_492_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2654();
	var_500_int = "attack_begin" + var_492_int;
	PlayAnimation("all", var_500_int);
	WaitForAnimEnd();
	func_815(var_494_int, var_495_string);
	var_516_bool = 0; var_517_object = Obj();
	var_517_object = var_0_bool;
	func_2122(var_516_bool, var_517_object);
	var_518_bool = var_516_bool == 0; //@nz
	if(var_518_bool != 0) {
		StopAsync();
		var_486_bool = 0;
		return 8;
	}
	var_519_float = 0; var_520_int = 0;
	var_487_float = var_519_float;
	var_492_int = var_520_int;
	func_467(var_495_string, var_519_float, var_520_int);
	var_624_int = "attack_middle" + var_492_int;
	HasAnimation(var_493_bool, "all", var_624_int);
	var_625_bool = var_493_bool;
	if(var_625_bool != 0) {
		func_2654();
		var_628_int = "attack_middle" + var_492_int;
		PlayAnimation("all", var_628_int);
		WaitForAnimEnd();
		func_847(var_495_string);
		var_629_bool = 0; var_630_object = Obj();
		var_630_object = var_0_bool;
		func_2122(var_629_bool, var_630_object);
		var_631_bool = var_629_bool == 0; //@nz
		if(var_631_bool != 0) {
			StopAsync();
			var_486_bool = 0;
			return 8;
		}
		var_632_float = 0; var_633_int = 0;
		var_487_float = var_632_float;
		var_492_int = var_633_int;
		func_467(var_495_string, var_632_float, var_633_int);
		var_494_int = 1;

	Label_583:
		var_635_int = "attack_middle" + var_492_int;
		var_637_int = var_635_int + "_";
		var_495_string = var_637_int + var_494_int;
		HasAnimation(var_493_bool, "all", var_495_string);
		var_639_bool = var_493_bool == 0; //@nz
		if(var_639_bool != 0) {
		} else {
			func_2654();
			PlayAnimation("all", var_495_string);
			WaitForAnimEnd();
			func_847(var_495_string);
			var_655_bool = 0; var_656_object = Obj();
			var_656_object = var_0_bool;
			func_2122(var_655_bool, var_656_object);
			var_657_bool = var_655_bool == 0; //@nz
			if(var_657_bool != 0) {
				StopAsync();
				var_486_bool = 0;
				var_658_float = 0; var_659_int = 0;
				var_487_float = var_658_float;
				var_492_int = var_659_int;
				func_467(var_495_string, var_658_float, var_659_int);
				var_494_int = var_494_int + (int)1;
				goto Label_583;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_643_int = "attack_end" + var_492_int;
	PlayAnimation("all", var_643_int);
	var_644_bool = 0;
	func_857(var_644_bool);
	if(var_644_bool != 0) {
		var_645_bool = 0; var_646_float = 0;
		func_645(var_645_bool, (float)0.44999998807907104);
		StopAsync();
	}
	var_486_bool = 1;
	return 8;
	
}


