// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SetProperty/2,Trace/1,FindActor/2,Stop/0,StopGroup0/0,GetPosition/1,GetDirection/1,FindLongestDir/6,Sleep/1,Rotate/2,SetTimer/2,MovePoint/3,KillTimer/1,FindDirLength/3,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,GetScene/1,FindPathTo/2,RotatePath/2,FollowPath/5,RotateAsync/2,RequestClearPath/1,HasAnimation/3,RemoveActor/1,Hold/0,SetRTEnvelope/2,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetMainOutdoorScene/1,IsPlayerActor/2,PlayGlobalMusic/1,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,Speak/1,CanSee/2,SendPlayerEnemy/2,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,GetGameTime/1,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,TriggerWorld/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:noaccess|W:Unknown FSM state|W:player|A:GetPosition|W:Can't retreat, distance: |W:head|W:pt_b9q03_bonfire|A:GetLocator|W:walk|W:run|W:hunt|A:GetPFPosition|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:cleanup|W:@GetAttackDistance|A:GetAttackDistance|W:attack|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |A:SetReturnValue|W:oob9BoyFollower1|W:b9q03Bonfire1|W:pt_bonfire1|A:AddMark|W:b9q03Bonfire2|W:pt_bonfire2|W:b9q03Bonfire3|W:pt_bonfire3|W:b9q03Bonfire4|W:pt_bonfire4|A:ShowMap|W:b9q03BonefiresCount|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:b9q03Bonfire|W:enable_bonfire|W:quest_b9_03|W:bonfire_burn|W:b9q03BonfireBurnedByFollower|W:changing state to c_iStateWaitForCommand|W:changing state to c_iStateFollow|W:changing state to c_iStateIdleAndFollow|W:changing state to c_iStateRetreatPlayer|W:changing state to c_iStateBurn|W:changing state to c_iStateWaitForLoad|W:changing state to c_iStateGoAway|W:changing state to c_iStateAttack|W:changing state to c_iStateRetreatPDamage|W:fail
// @GLOBALS: 0:object:,1:bool:,2:int:,3:object:,4:object:,5:object:,6:int:
// @RUN_OP: 0x197
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd6 vars=int,int
// @TASK_2: vars= params=0
// @TASK_3: vars= params=0
// @EVENT_0: op=0x2ab vars=object
// @EVENT_17: op=0x2b1 vars=object
// @EVENT_30: op=0x2c1 vars=object,object,bool
// @EVENT_6: op=0x2d9 vars=
// @TASK_4: vars= params=1
// @EVENT_0: op=0x2eb vars=object
// @EVENT_17: op=0x2f1 vars=object
// @EVENT_30: op=0x301 vars=object,object,bool
// @EVENT_6: op=0x319 vars=
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_6: op=0x333 vars=
// @EVENT_7: op=0x3a2 vars=int
// @EVENT_41: op=0x3dd vars=object
// @TASK_6: vars=object,cvector,bool,bool params=0
// @EVENT_6: op=0x414 vars=
// @EVENT_7: op=0x486 vars=int
// @EVENT_41: op=0x4c1 vars=object
// @TASK_7: vars=object,cvector,bool,bool params=0
// @EVENT_7: op=0x4f6 vars=int
// @EVENT_17: op=0x50b vars=object
// @EVENT_6: op=0x51b vars=
// @EVENT_41: op=0x5c5 vars=object
// @TASK_8: vars=object,cvector,bool params=1
// @EVENT_7: op=0x5eb vars=int
// @EVENT_17: op=0x5fc vars=object
// @EVENT_6: op=0x612 vars=
// @EVENT_41: op=0x6bc vars=object
// @TASK_9: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x6db vars=object
// @EVENT_17: op=0x6e4 vars=object
// @EVENT_30: op=0x6fa vars=object,object,bool
// @EVENT_6: op=0x715 vars=
// @EVENT_7: op=0x747 vars=int
// @TASK_10: vars=bool params=0
// @EVENT_7: op=0x7ee vars=int
// @EVENT_0: op=0x800 vars=object
// @EVENT_17: op=0x80a vars=object
// @EVENT_30: op=0x822 vars=object,object,bool
// @EVENT_6: op=0x83e vars=
// @TASK_11: vars=bool params=1
// @EVENT_0: op=0x87b vars=object
// @EVENT_17: op=0x884 vars=object
// @EVENT_30: op=0x89a vars=object,object,bool
// @EVENT_6: op=0x8b5 vars=
// @EVENT_7: op=0x926 vars=int
// @EVENT_10: op=0x937 vars=object
// @EVENT_41: op=0x942 vars=object
// @TASK_12: vars=bool params=0
// @EVENT_17: op=0x954 vars=object
// @EVENT_30: op=0x96a vars=object,object,bool
// @EVENT_6: op=0x985 vars=
// @TASK_13: vars=bool,object,bool params=0
// @EVENT_0: op=0x9c8 vars=object
// @EVENT_17: op=0x9d2 vars=object
// @EVENT_30: op=0x9e8 vars=object,object,bool
// @EVENT_6: op=0xa03 vars=
// @EVENT_7: op=0xa72 vars=int
// @EVENT_10: op=0xa84 vars=object
// @EVENT_41: op=0xa8f vars=object
// @TASK_14: vars= params=1
// @EVENT_6: op=0xaac vars=
// @EVENT_0: op=0xac3 vars=object
// @EVENT_22: op=0xb42 vars=object,int,float,float
// @EVENT_16: op=0xb44 vars=object,string
// @EVENT_41: op=0xb46 vars=object
// @TASK_15: vars= params=0
// @EVENT_26: op=0xb5a vars=string
// @EVENT_5: op=0xb66 vars=
// @TASK_16: vars=object,int,int,bool,bool,float,int,object params=1
// @EVENT_7: op=0xb83 vars=int
// @EVENT_1: op=0xb8b vars=object
// @EVENT_6: op=0xb8d vars=
// @TASK_17: vars=bool,object,bool,object params=6
// @EVENT_7: op=0xe6f vars=int
// @EVENT_6: op=0xe7c vars=
// @EVENT_1: op=0xed0 vars=object
// @EVENT_2: op=0xedf vars=object
// @EVENT_10: op=0xf65 vars=object
// @EVENT_41: op=0xf70 vars=object
// @STANDALONE_EVENT_26: op=0x1391 vars=string
// @STANDALONE_EVENT_22: op=0x13f4 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x13fc vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x1406 vars=object,string
// @STANDALONE_EVENT_41: op=0x143f vars=object
// @PE: 0x4a,0xc0,0xd6,0x2ab,0x2b1,0x2c1,0x2e2,0x2eb,0x2f1,0x301,0x322,0x333,0x3dd,0x4c1,0x4f6,0x50b,0x51b,0x5c5,0x5de,0x5eb,0x5fc,0x612,0x6bc,0x6db,0x6e4,0x6fa,0x715,0x71d,0x747,0x75e,0x7ee,0x800,0x80a,0x822,0x83e,0x87b,0x884,0x89a,0x8b5,0x926,0x937,0x942,0x954,0x96a,0x985,0x9c8,0x9d2,0x9e8,0xa03,0xa72,0xa84,0xa8f,0xa98,0xaa3,0xab4,0xb28,0xb42,0xb44,0xb46,0xb5a,0xb6b,0xb7b,0xb7e,0xb8b,0xb8d,0xe53,0xe7c,0xeb5,0xed0,0xedf,0xf53,0xf65,0xf70,0xf79,0xf84,0x11a3,0x11aa,0x11b5,0x1205,0x120a,0x120f,0x1214,0x1248,0x124d,0x1252,0x1262,0x126e,0x1313,0x1391,0x1399,0x13de,0x13e9,0x13f4,0x13fc,0x143f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_int, var_22_int, var_23_bool, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_object, var_31_bool, var_32_object, var_33_int, var_34_int, var_35_bool, var_36_bool, var_37_float, var_38_int, var_39_object, var_40_bool, var_41_object, var_42_bool, var_43_object)
{
	if((int)1 != 0) {
		func_4451();
		var_47_bool = var_43_object == (int)31712;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_4613(var_49_object);
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_4634();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_4690(var_108_object);
		}
		var_134_bool = var_43_object == (int)31714;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_4680(var_136_object);
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_4685();
		}
		var_149_bool = var_43_object == (int)31661;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_4618(var_151_object);
		}
		var_154_bool = var_43_object == (int)31663;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_4613(var_156_object);
		}
		var_158_bool = var_43_object == (int)31664;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_4623(var_160_object);
		}
		var_163_bool = var_42_bool == (int)31709;
		if(var_163_bool != 0) {
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_4706(var_165_object);
			if(var_164_bool != 0) {
				var_172_object = Obj(); var_173_object = Obj();
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_4628();
				var_176_string = "";
				func_192(var_43_object, "Neutral");
				@@@var_0_object:SetMessage((int)530322);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530323, (int)31711, (int)31710);
				@@@var_0_object:AddReply((int)531020, (int)32350, (int)32349);
				return 0;
			}
			var_200_bool = 0; var_201_object = Obj();
			var_201_object = var_1_object;
			func_4718(var_201_object);
			if(var_200_bool != 0) {
				var_206_string = "";
				func_192(var_43_object, "Neutral");
				@@@var_0_object:SetMessage((int)530326);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530327, (int)-1, (int)31714);
				return 0;
			}
			var_211_string = "";
			func_192(var_43_object, "Neutral");
			@@@var_0_object:SetMessage((int)530270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530271, (int)-1, (int)31661);
			@@@var_0_object:AddReply((int)530273, (int)-1, (int)31663);
			@@@var_0_object:AddReply((int)530274, (int)-1, (int)31664);
			@@@var_0_object:AddReply((int)530272, (int)-1, (int)31662);
			return 0;
		}
		var_226_bool = var_42_bool == (int)32350;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_192(var_43_object, "Neutral");
			@@@var_0_object:SetMessage((int)531021);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531023, (int)31711, (int)32352);
			return 0;
		}
		var_233_bool = var_42_bool == (int)31711;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_192(var_43_object, "Neutral");
			@@@var_0_object:SetMessage((int)530324);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530325, (int)-1, (int)31712);
			return 0;
		}
		var_3_string = true;
		var_239_bool = 0;
		func_4945(var_239_bool);
		if(var_239_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd7";
	
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_5139(var_42_object, var_43_bool, var_44_object);
	return 0;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		var_47_bool = 0; var_48_int = 0;
		func_5017(var_47_bool, (int)4);
	} else {
		var_76_object = Obj();
		var_42_object = var_76_object;
		func_5086(var_76_object);
	}
	return 0;
	
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_int, var_23_int, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0;
	var_45_bool = 1;
	var_46_bool = 0; var_47_object = Obj();
	var_43_bool = var_47_object;
	func_4137(var_46_bool, var_47_object);
	var_80_bool = var_46_bool == 0; //@nz
	if(var_80_bool != 1) {
		var_81_float = 0; var_82_object = Obj();
		var_43_bool = var_82_object;
		func_3998(var_81_float, var_82_object);
		var_90_bool = var_81_float > (float)1000000.0;
		if(var_90_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 0) {
		return 0;
	}
	var_91_object = Obj();
	var_43_bool = var_91_object;
	func_5097(var_91_object);
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	Stop();
	StopGroup0();
	var_42_bool = 0; var_43_int = 0;
	func_5017(var_42_bool, (int)0);
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_5139(var_42_object, var_43_bool, var_44_object);
	return 0;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		var_47_bool = 0; var_48_int = 0;
		func_5017(var_47_bool, (int)4);
	} else {
		var_76_object = Obj();
		var_42_object = var_76_object;
		func_5086(var_76_object);
	}
	return 0;
	
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_int, var_23_int, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0;
	var_45_bool = 1;
	var_46_bool = 0; var_47_object = Obj();
	var_43_bool = var_47_object;
	func_4137(var_46_bool, var_47_object);
	var_80_bool = var_46_bool == 0; //@nz
	if(var_80_bool != 1) {
		var_81_float = 0; var_82_object = Obj();
		var_43_bool = var_82_object;
		func_3998(var_81_float, var_82_object);
		var_90_bool = var_81_float > (float)1000000.0;
		if(var_90_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 0) {
		return 0;
	}
	var_91_object = Obj();
	var_43_bool = var_91_object;
	func_5097(var_91_object);
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	Stop();
	StopGroup0();
	var_42_bool = 0; var_43_int = 0;
	func_5017(var_42_bool, (int)0);
	return 0;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_982(var_41_object);
	var_43_bool = 0; var_44_int = 0;
	func_5017(var_43_bool, (int)0);
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0;
	var_52_bool = var_42_object != (int)120;
	if(var_52_bool != 0) {
		return 8;
	}
	var_53_bool = var_0_object == 0; //@ne
	if(var_53_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_47_cvector);
		FindDirLength(var_48_float, var_47_cvector, (float)7000.0);
		var_56_cvector = CVector(0,0,0); var_57_float = 0;
		func_827(var_50_float, var_56_cvector, (float)1.7453293800354004);
		var_56_cvector = var_49_cvector;
		var_50_float = var_49_cvector | var_49_cvector;
		var_86_bool = 0;
		var_86_bool = 0;
		var_88_bool = var_50_float >= (float)2500.0;
		if(var_88_bool != 0) {
			var_89_bool = 0;
			var_90_float = var_48_float * var_48_float;
			var_92_float = var_90_float * (float)2.25;
			var_93_bool = var_50_float >= var_92_float;
			if(var_93_bool != 1) {
				var_94_bool = 0;
				func_998((bool)1, var_94_bool);
				if(var_94_bool != 1) {
					var_89_bool = 0;
				}
			}
			if(var_89_bool != 0) {
				var_86_bool = 1;
			}
		}
		if(var_86_bool == 0) goto Label_981;
		Stop();
		var_114_cvector = CVector(0,0,0);
		func_3986(var_114_cvector);
		var_1_object = var_114_cvector + var_49_cvector;
	}
Label_981:
	return 8;
	
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_982(var_42_object);
	var_42_object = Obj();
	func_5183();
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	StopGroup0();
	var_3_string = true;
	func_1210(var_41_object);
	var_43_bool = 0; var_44_int = 0;
	func_5017(var_43_bool, (int)0);
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0;
	var_52_bool = var_42_object != (int)120;
	if(var_52_bool != 0) {
		return 8;
	}
	var_53_bool = var_0_object == 0; //@ne
	if(var_53_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_47_cvector);
		FindDirLength(var_48_float, var_47_cvector, (float)7000.0);
		var_56_cvector = CVector(0,0,0); var_57_float = 0;
		func_1055(var_50_float, var_56_cvector, (float)1.7453293800354004);
		var_56_cvector = var_49_cvector;
		var_50_float = var_49_cvector | var_49_cvector;
		var_86_bool = 0;
		var_86_bool = 0;
		var_88_bool = var_50_float >= (float)2500.0;
		if(var_88_bool != 0) {
			var_89_bool = 0;
			var_90_float = var_48_float * var_48_float;
			var_92_float = var_90_float * (float)2.25;
			var_93_bool = var_50_float >= var_92_float;
			if(var_93_bool != 1) {
				var_94_bool = 0;
				func_1226((bool)1, var_94_bool);
				if(var_94_bool != 1) {
					var_89_bool = 0;
				}
			}
			if(var_89_bool != 0) {
				var_86_bool = 1;
			}
		}
		if(var_86_bool == 0) goto Label_1209;
		Stop();
		var_114_cvector = CVector(0,0,0);
		func_3986(var_114_cvector);
		var_1_object = var_114_cvector + var_49_cvector;
	}
Label_1209:
	return 8;
	
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_1210(var_42_object);
	var_42_object = Obj();
	func_5183();
	return 0;
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_int, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_44_bool = var_42_object == (int)0;
	if(var_44_bool != 0) {
		var_45_bool = var_3_string == 0; //@nz
		if(var_45_bool != 0) {
			func_1470(var_42_object);
			var_47_bool = 0; var_48_int = 0;
			func_5017(var_47_bool, (int)1);
		} else {
			var_3_string = false;
	}
		var_76_int = 0;
		var_42_object = var_76_int;
		func_1418(var_40_object, var_41_bool, var_42_object, var_76_int);
		return 0;
	}
	return 0;
	
}


task_7_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		var_3_string = true;
	} else {
		func_1470(var_42_object);
		var_48_object = Obj();
		var_42_object = var_48_object;
		func_5086(var_48_object);
	}
	return 0;
	
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_1470(var_41_object);
	var_43_bool = 0; var_44_int = 0;
	func_5017(var_43_bool, (int)0);
	return 0;
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_1470(var_42_object);
	var_42_object = Obj();
	func_5183();
	return 0;
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_44_bool = var_42_object == (int)1;
	if(var_44_bool != 0) {
		func_1717(var_42_object);
		var_46_bool = 0; var_47_int = 0;
		func_5017(var_46_bool, (int)1);
		return 0;
	}
	var_75_int = 0;
	var_42_object = var_75_int;
	func_1665(var_40_object, var_41_bool, var_42_object, var_75_int);
	return 0;
}


task_8_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		func_1717(var_42_object);
		var_48_bool = 0; var_49_int = 0;
		func_5017(var_48_bool, (int)4);
	} else {
		func_1717(var_42_object);
		var_77_object = Obj();
		var_42_object = var_77_object;
		func_5086(var_77_object);
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_1717(var_41_object);
	var_43_bool = 0; var_44_int = 0;
	func_5017(var_43_bool, (int)0);
	return 0;
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_1717(var_42_object);
	var_42_object = Obj();
	func_5183();
	return 0;
}


task_9_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_1886(var_41_bool, var_42_object);
	var_46_bool = 0; var_47_object = Obj();
	var_42_object = var_47_object;
	func_5139(var_42_object, var_46_bool, var_47_object);
	return 0;
}


task_9_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		func_1886(var_41_bool, var_42_object);
		var_50_bool = 0; var_51_int = 0;
		func_5017(var_50_bool, (int)4);
	} else {
		func_1886(var_41_bool, var_42_object);
		var_79_object = Obj();
		var_42_object = var_79_object;
		func_5086(var_79_object);
	}
	return 0;
	
}


task_9_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0;
	var_45_bool = 1;
	var_46_bool = 0; var_47_object = Obj();
	var_43_bool = var_47_object;
	func_4137(var_46_bool, var_47_object);
	var_80_bool = var_46_bool == 0; //@nz
	if(var_80_bool != 1) {
		var_81_float = 0; var_82_object = Obj();
		var_43_bool = var_82_object;
		func_3998(var_81_float, var_82_object);
		var_90_bool = var_81_float > (float)1000000.0;
		if(var_90_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 0) {
		return 0;
	}
	func_1886(var_43_bool, var_44_object);
	var_94_object = Obj();
	var_43_bool = var_94_object;
	func_5097(var_94_object);
	return 0;
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_1886(var_40_bool, var_41_object);
	var_45_bool = 0; var_46_int = 0;
	func_5017(var_45_bool, (int)0);
	return 0;
}


task_9_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_int, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_44_bool = var_42_object == (int)10;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_1848(var_40_object, var_41_bool, var_42_object, var_45_bool);
		if(var_45_bool != 0) {
			var_58_bool = var_2_object == 0; //@nz
			if(var_58_bool != 0) {
				var_59_object = Obj();
				var_59_object = var_4_bool;
				func_4440(var_59_object);
				var_2_object = true;
			}
		} else {
			var_66_object = var_2_object;
			if(var_66_object == 0) goto Label_1885;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_1885:
	return 0;
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_int, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_44_bool = var_42_object != (int)2;
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_bool = 0; var_46_object = Obj();
	func_4499(Obj());
	var_47_object = var_46_object;
	func_5199(var_45_bool, var_46_object);
	var_97_bool = var_45_bool == 0; //@nz
	if(var_97_bool != 0) {
		func_2027();
	}
	return 0;
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2027();
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_5139(var_42_object, var_43_bool, var_44_object);
	var_0_object = var_43_bool;
	return 0;
}


task_10_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		func_2027();
		var_47_bool = 0; var_48_int = 0;
		func_5017(var_47_bool, (int)4);
		var_0_object = true;
	} else {
		func_2027();
		var_0_object = true;
		var_76_object = Obj();
		var_42_object = var_76_object;
		func_5086(var_76_object);
	}
	return 0;
	
}


task_10_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0;
	var_45_bool = 1;
	var_46_bool = 0; var_47_object = Obj();
	var_43_bool = var_47_object;
	func_4137(var_46_bool, var_47_object);
	var_80_bool = var_46_bool == 0; //@nz
	if(var_80_bool != 1) {
		var_81_float = 0; var_82_object = Obj();
		var_43_bool = var_82_object;
		func_3998(var_81_float, var_82_object);
		var_90_bool = var_81_float > (float)1000000.0;
		if(var_90_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 0) {
		return 0;
	}
	func_2027();
	var_0_object = true;
	var_91_object = Obj();
	var_43_bool = var_91_object;
	func_5097(var_91_object);
	return 0;
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_2027();
	var_0_object = true;
	var_42_bool = 0; var_43_int = 0;
	func_5017(var_42_bool, (int)0);
	return 0;
}


task_11_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2363(var_42_object);
	var_44_bool = 0; var_45_object = Obj();
	var_42_object = var_45_object;
	func_5139(var_42_object, var_44_bool, var_45_object);
	return 0;
}


task_11_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		func_2363(var_42_object);
		var_48_bool = 0; var_49_int = 0;
		func_5017(var_48_bool, (int)4);
	} else {
		func_2363(var_42_object);
		var_77_object = Obj();
		var_42_object = var_77_object;
		func_5086(var_77_object);
	}
	return 0;
	
}


task_11_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_object, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0;
	var_45_bool = 1;
	var_46_bool = 0; var_47_object = Obj();
	var_43_bool = var_47_object;
	func_4137(var_46_bool, var_47_object);
	var_80_bool = var_46_bool == 0; //@nz
	if(var_80_bool != 1) {
		var_81_float = 0; var_82_object = Obj();
		var_43_bool = var_82_object;
		func_3998(var_81_float, var_82_object);
		var_90_bool = var_81_float > (float)1000000.0;
		if(var_90_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 0) {
		return 0;
	}
	func_2363(var_44_object);
	var_92_object = Obj();
	var_43_bool = var_92_object;
	func_5097(var_92_object);
	return 0;
}


task_11_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_2363(var_41_object);
	var_43_bool = 0; var_44_int = 0;
	func_5017(var_43_bool, (int)0);
	return 0;
}


task_11_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_int, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_44_bool = var_42_object != (int)0;
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_bool = 0;
	func_2237(var_45_bool);
	var_46_bool = var_45_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_11_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	RequestClearPath(var_42_object);
	return 0;
}


task_11_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2363(var_42_object);
	var_42_object = Obj();
	func_5183();
	return 0;
}


task_12_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_object, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		func_2467();
		var_47_bool = 0; var_48_int = 0;
		func_5017(var_47_bool, (int)4);
	} else {
		func_2467();
		var_76_object = Obj();
		var_42_object = var_76_object;
		func_5086(var_76_object);
	}
	return 0;
	
}


task_12_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_object, var_28_object, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0;
	var_45_bool = 1;
	var_46_bool = 0; var_47_object = Obj();
	var_43_bool = var_47_object;
	func_4137(var_46_bool, var_47_object);
	var_80_bool = var_46_bool == 0; //@nz
	if(var_80_bool != 1) {
		var_81_float = 0; var_82_object = Obj();
		var_43_bool = var_82_object;
		func_3998(var_81_float, var_82_object);
		var_90_bool = var_81_float > (float)1000000.0;
		if(var_90_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 0) {
		return 0;
	}
	func_2467();
	var_91_object = Obj();
	var_43_bool = var_91_object;
	func_5097(var_91_object);
	return 0;
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_2467();
	var_0_object = true;
	var_42_bool = 0; var_43_int = 0;
	func_5017(var_42_bool, (int)0);
	return 0;
}


task_13_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2696(var_42_object);
	var_44_bool = 0; var_45_object = Obj();
	var_42_object = var_45_object;
	func_5139(var_42_object, var_44_bool, var_45_object);
	var_2_object = var_44_bool;
	return 0;
}


task_13_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_4006(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		func_2696(var_42_object);
		var_48_bool = 0; var_49_int = 0;
		func_5017(var_48_bool, (int)4);
	} else {
		func_2696(var_42_object);
		var_77_object = Obj();
		var_42_object = var_77_object;
		func_5086(var_77_object);
	}
	return 0;
	
}


task_13_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0;
	var_45_bool = 1;
	var_46_bool = 0; var_47_object = Obj();
	var_43_bool = var_47_object;
	func_4137(var_46_bool, var_47_object);
	var_80_bool = var_46_bool == 0; //@nz
	if(var_80_bool != 1) {
		var_81_float = 0; var_82_object = Obj();
		var_43_bool = var_82_object;
		func_3998(var_81_float, var_82_object);
		var_90_bool = var_81_float > (float)1000000.0;
		if(var_90_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 0) {
		return 0;
	}
	func_2696(var_44_object);
	var_92_object = Obj();
	var_43_bool = var_92_object;
	func_5097(var_92_object);
	return 0;
}


task_13_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_2696(var_41_object);
	var_2_object = true;
	var_43_bool = 0; var_44_int = 0;
	func_5017(var_43_bool, (int)0);
	return 0;
}


task_13_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_int, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_44_bool = var_42_object != (int)0;
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_bool = 0; var_46_object = Obj();
	var_46_object = var_1_object;
	func_2712(var_45_bool, var_46_object);
	var_81_bool = var_45_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_13_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	RequestClearPath(var_42_object);
	return 0;
}


task_13_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2696(var_42_object);
	var_42_object = Obj();
	func_5183();
	return 0;
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	var_42_object = Obj();
	func_4499(var_42_object);
	RemoveActor(var_42_object);
	Hold();
	return 0;
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_bool = 0;
	IsOverrideActive(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_46_object = Obj();
		var_42_object = var_46_object;
		func_4883(var_46_object);
	}
	return 2;
}


task_14_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_float, var_33_float, var_34_object, var_35_int, var_36_int, var_37_bool, var_38_bool, var_39_float, var_40_int, var_41_object, var_42_bool, var_43_object, var_44_bool, var_45_object)
{
	return 0;
}


task_14_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_string, var_32_object, var_33_int, var_34_int, var_35_bool, var_36_bool, var_37_float, var_38_int, var_39_object, var_40_bool, var_41_object, var_42_bool, var_43_object)
{
	return 0;
}


task_14_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	return 0;
}


task_15_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_string, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_44_bool = var_42_object == "cleanup";
	if(var_44_bool != 0) {
		var_45_object = Obj();
		func_4499(var_45_object);
		RemoveActor(var_45_object);
		Hold();
	}
	return 0;
}


task_15_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	StopGroup0();
	sync();
	return 0;
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_int, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj();
	var_46_bool = var_42_object == (int)3;
	if(var_46_bool != 0) {
		GetMainOutdoorScene(var_44_object);
		var_44_object = 0;
	}
	return 2;
}


task_16_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	return 0;
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_3215(var_41_object);
	var_42_bool = 0; var_43_int = 0;
	func_5017(var_42_bool, (int)0);
	return 0;
}


task_17_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj();
	var_46_bool = var_42_int == (int)4;
	if(var_46_bool != 0) {
		GetMainOutdoorScene(var_44_object);
	} else {
		var_47_int = 0;
		var_42_int = var_47_int;
		func_3765(Obj(), var_47_int);
	}
	return 2;
	
}


task_17_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_3779(var_41_object);
	var_46_bool = 0; var_47_int = 0;
	func_5017(var_46_bool, (int)0);
	return 0;
}


task_17_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_bool = var_1_object == var_42_object;
	if(var_44_bool != 0) {
		var_45_bool = var_2_object == 0; //@nz
		if(var_45_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_2_object = true;
		var_46_object = Obj();
		var_42_object = var_46_object;
		func_4440(var_46_object);
	}
	return 0;
}


task_17_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_bool = var_1_object == var_42_object;
	if(var_44_bool != 0) {
		var_45_object = var_2_object;
		if(var_45_object != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_17_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	RequestClearPath(var_42_object);
	return 0;
}


task_17_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	func_3779(var_42_object);
	var_42_object = Obj();
	func_5183();
	return 0;
}


event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_string)
{
	var_44_bool = var_42_string == "cleanup";
	if(var_44_bool != 0) {
		var_45_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object, var_43_int, var_44_float, var_45_float)
{
	var_46_object = Obj(); var_47_int = 0; var_48_float = 0;
	var_42_object = var_46_object;
	var_43_int = var_47_int;
	var_44_float = var_48_float;
	func_4224(var_46_object, var_47_int, var_48_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object, var_43_int, var_44_float, var_45_float, var_46_cvector, var_47_cvector)
{
	var_48_object = Obj(); var_49_int = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_42_object = var_48_object;
	var_43_int = var_49_int;
	var_44_float = var_50_float;
	var_46_cvector = var_51_cvector;
	var_47_cvector = var_52_cvector;
	func_4292(var_50_float, var_51_cvector, var_52_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object, var_43_string)
{
	var_44_float = 0; var_45_float = 0;
	var_47_bool = var_43_string == "health";
	if(var_47_bool != 0) {
		GetProperty("health", var_45_float);
		var_50_bool = var_45_float <= (int)0;
		if(var_50_bool != 0) {
			SignalDeath(var_42_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	func_4730();
	var_66_bool = 0; var_67_string = ""; var_68_string = "";
	func_4563(var_66_bool, "quest_b9_03", "fail");
	var_72_object = Obj();
	var_42_object = var_72_object;
	TaskCall(14);
	func_2723(var_72_object);
	TaskReturn();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	var_42_int = GlobalVars[2];
	GlobalVars[2] = (int)0;
	var_43_int = GlobalVars[6];
	GlobalVars[6] = (int)1;
	SetProperty("noaccess", (int)0);
	
Label_417:
	if((bool)1 != 0) {
		var_48_int = GlobalVars[2];
		var_49_bool = (int)0 == var_48_int;
		if(var_49_bool != 0) {
			TaskCall(15);
			func_2888();
			TaskReturn();
			var_58_bool = 0; var_59_int = 0;
			var_60_int = GlobalVars[6];
			var_60_int = var_59_int;
			func_5017(var_58_bool, var_59_int);
			var_88_bool = var_58_bool == 0; //@nz
			if(var_88_bool != 0) {
				var_89_bool = 0; var_90_int = 0;
				func_5017(var_89_bool, (int)2);
			}
		} else {
			var_92_int = GlobalVars[2];
			var_93_bool = (int)1 == var_92_int;
			if(var_93_bool != 0) {
				TaskCall(3);
				func_670();
				TaskReturn();
				var_113_int = GlobalVars[2];
				var_114_bool = (int)1 == var_113_int;
				if(var_114_bool != 0) {
					TaskCall(9);
					func_1749();
					TaskReturn();
				}
				goto Label_666;
			}
			var_181_int = GlobalVars[2];
			var_182_bool = (int)2 == var_181_int;
			if(var_182_bool != 0) {
				TaskCall(13);
				func_2472(var_185_bool);
				TaskReturn();
				goto Label_666;
			}
			var_281_int = GlobalVars[2];
			var_282_bool = (int)3 == var_281_int;
			if(var_282_bool != 0) {
				TaskCall(3);
				func_670();
				TaskReturn();
				var_284_int = GlobalVars[2];
				var_285_bool = (int)3 == var_284_int;
				if(var_285_bool != 0) {
					TaskCall(10);
					func_1986(var_286_bool);
					TaskReturn();
				}
				goto Label_666;
			}
			var_314_int = GlobalVars[2];
			var_315_bool = (int)8 == var_314_int;
			if(var_315_bool != 0) {
				TaskCall(6);
				func_1014();
				TaskReturn();
				goto Label_666;
			}
			var_400_int = GlobalVars[2];
			var_401_bool = (int)4 == var_400_int;
			if(var_401_bool != 0) {
				TaskCall(7);
				func_1242();
				TaskReturn();
				goto Label_666;
			}
			var_480_int = GlobalVars[2];
			var_481_bool = (int)5 == var_480_int;
			if(var_481_bool != 0) {
				TaskCall(11);
				func_2119((bool)0);
				TaskReturn();
				var_609_bool = var_483_bool == 0; //@nz
				if(var_609_bool != 0) {
					var_611_int = GlobalVars[2];
					var_612_bool = (int)5 == var_611_int;
					if(var_612_bool != 0) {
						TaskCall(12);
						func_2383();
						TaskReturn();
						var_625_int = GlobalVars[2];
						var_626_bool = (int)5 == var_625_int;
						if(var_626_bool != 0) {
							var_627_bool = 0; var_628_int = 0;
							func_5017(var_627_bool, (int)1);
						}
					}
				}
				var_630_int = GlobalVars[2];
				var_631_bool = (int)5 == var_630_int;
				if(var_631_bool != 0) {
					TaskCall(12);
					func_2383();
					TaskReturn();
					var_634_int = GlobalVars[2];
					var_635_bool = (int)5 == var_634_int;
					if(var_635_bool != 0) {
						var_636_bool = 0; var_637_int = 0;
						func_5017(var_636_bool, (int)2);
					}
				}
				goto Label_666;
			}
			var_639_int = GlobalVars[2];
			var_640_bool = (int)6 == var_639_int;
			if(var_640_bool != 0) {
				var_641_object = Obj();
				var_642_object = GlobalVars[3];
				var_642_object = var_641_object;
				TaskCall(5);
				func_802(var_641_object);
				TaskReturn();
				goto Label_666;
			}
			var_714_int = GlobalVars[2];
			var_715_bool = (int)9 == var_714_int;
			if(var_715_bool != 0) {
				var_716_object = Obj();
				var_717_object = GlobalVars[5];
				var_717_object = var_716_object;
				TaskCall(16);
				func_2923(var_725_object, var_716_object);
				TaskReturn();
				var_1210_bool = 0; var_1211_object = Obj();
				var_1212_object = GlobalVars[5];
				var_1212_object = var_1211_object;
				func_4137(var_1210_bool, var_1211_object);
				var_1213_bool = var_1210_bool == 0; //@nz
				if(var_1213_bool != 0) {
					var_1214_bool = 0; var_1215_int = 0;
					func_5017(var_1214_bool, (int)1);
				}
				goto Label_666;
			}
			var_1217_int = GlobalVars[2];
			var_1218_bool = (int)7 == var_1217_int;
			if(var_1218_bool != 0) {
				var_1219_object = Obj();
				var_1220_object = GlobalVars[4];
				var_1220_object = var_1219_object;
				TaskCall(8);
				func_1502(var_1219_object);
				TaskReturn();
				var_1290_int = GlobalVars[2];
				var_1291_bool = (int)7 == var_1290_int;
				if(var_1291_bool != 0) {
					var_1292_bool = 0;
					var_1292_bool = 1;
					var_1293_bool = 0; var_1294_object = Obj();
					var_1295_object = GlobalVars[4];
					var_1295_object = var_1294_object;
					func_4137(var_1293_bool, var_1294_object);
					var_1296_bool = var_1293_bool == 0; //@nz
					if(var_1296_bool != 1) {
						var_1297_float = 0; var_1298_object = Obj();
						var_1299_object = GlobalVars[4];
						var_1299_object = var_1298_object;
						func_3998(var_1297_float, var_1298_object);
						var_1307_bool = var_1297_float > (float)1000000.0;
						if(var_1307_bool != 1) {
							var_1292_bool = 0;
						}
					}
					if(var_1292_bool != 0) {
						var_1308_bool = 0; var_1309_object = Obj();
						var_1310_object = GlobalVars[4];
						var_1310_object = var_1309_object;
						func_4137(var_1308_bool, var_1309_object);
						if(var_1308_bool != 0) {
							var_1311_object = Obj();
							var_1312_object = GlobalVars[4];
							var_1312_object = var_1311_object;
							TaskCall(4);
							func_738(var_1311_object);
							TaskReturn();
							var_1317_int = GlobalVars[2];
							var_1318_bool = (int)7 == var_1317_int;
							if(var_1318_bool != 0) {
								TaskCall(12);
								func_2383();
								TaskReturn();
								var_1321_int = GlobalVars[2];
								var_1322_bool = (int)7 == var_1321_int;
								if(var_1322_bool != 0) {
									var_1323_bool = 0; var_1324_int = 0;
									func_5017(var_1323_bool, (int)1);
								}
							}
						}
					}
				}
				goto Label_666;
			}
			Trace("Unknown FSM state");
	}
		sync();
		goto Label_417;
	}
	return 0;
	
}


func_4096(var_204_bool, var_205_object)
{
	var_206_bool = 0; var_207_bool = 0;
	@@var_205_object:IsDead(var_207_bool);
	var_207_bool = var_204_bool;
	return 2;
}


func_0(var_0_object, var_48_int, var_49_object)
{
	var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_0_object = var_49_object;
	var_59_bool = 0; var_60_object = Obj(); var_61_float = 0;
	var_49_object = var_60_object;
	func_4322(var_59_bool, var_60_object, (float)70.0);
	var_106_bool = var_59_bool == 0; //@nz
	if(var_106_bool != 0) {
		var_48_int = -2;
		return 8;
	}
	CreateDialog(var_55_object);
	var_107_int = 0;
	func_4939(var_107_int);
	@@var_55_object:SetNPCName(var_107_int);
	var_108_int = 0;
	func_4937(var_108_int);
	@@var_55_object:SetNPCDescription(var_108_int);
	var_109_string = "";
	func_4941(var_109_string);
	@@var_55_object:SetPhoto(var_109_string);
	var_110_string = "";
	func_4943(var_110_string);
	@@var_55_object:SetPhoto2(var_110_string);
	var_111_int = 0;
	func_4860(var_111_int);
	@@var_55_object:SetPlayerName(var_111_int);
	IsOverrideActive(var_56_bool);
	var_119_bool = var_56_bool;
	if(var_119_bool != 0) {
		var_48_int = -2;
		return 8;
	}
	DoDialog(var_55_object);
	var_120_object = Obj(); var_121_object = Obj();
	var_49_object = var_120_object;
	var_55_object = var_121_object;
	TaskCall(1);
	func_74(var_122_object, var_123_object, var_124_string, var_125_bool, var_120_object, var_121_object);
	TaskReturn();
	@@var_55_object:IsDialogEnd(var_58_bool);
	
Label_56:
	var_206_bool = var_58_bool == 0; //@nz
	if(var_206_bool != 0) {
		sync();
		@@var_55_object:IsDialogEnd(var_58_bool);
		goto Label_56;
	}
	var_49_object = Obj();
	func_4391();
	StopDialog(var_55_object);
	@@var_55_object:GetReturnValue((int)-1);
	var_57_int = var_48_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4613(var_49_object)
{
	@@var_49_object:SetReturnValue((int)2);
	return 0;
}


func_4101(var_193_bool, var_194_object)
{
	var_195_object = Obj(); var_196_object = Obj(); var_197_object = Obj(); var_198_object = Obj();
	var_199_bool = var_194_object == 0; //@ne
	if(var_199_bool != 0) {
		var_193_bool = 0;
		return 4;
	}
	var_200_bool = 0;
	var_200_bool = 0;
	var_203_bool = IsFuncExist(var_194_object, "IsDead", (int)1);
	if(var_203_bool != 0) {
		var_204_bool = 0; var_205_object = Obj();
		var_194_object = var_205_object;
		func_4096(var_204_bool, var_205_object);
		if(var_204_bool != 0) {
			var_200_bool = 1;
		}
	}
	if(var_200_bool != 0) {
		var_193_bool = 0;
		return 4;
	}
	GetScene(var_197_object);
	var_208_bool = var_197_object == 0; //@ne
	if(var_208_bool != 0) {
		var_193_bool = 0;
		return 4;
	}
	@@var_194_object:GetScene(var_198_object);
	var_209_bool = var_197_object != var_198_object;
	if(var_209_bool != 0) {
		var_193_bool = 0;
		return 4;
	}
	var_193_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4618(var_151_object)
{
	@@var_151_object:SetReturnValue((int)1);
	return 0;
}


func_2572(var_0_object, var_1_object, var_226_bool, var_227_object, var_228_float, var_229_float, var_230_bool, var_231_bool)
{
	var_232_bool = 0; var_233_bool = 0; var_234_object = Obj(); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_float = 0; var_239_object = Obj(); var_240_bool = 0; var_241_bool = 0; var_242_object = Obj(); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_float = 0; var_247_object = Obj();
	var_0_object = false;
	var_1_object = var_227_object;
	var_231_bool = var_241_bool;
	
Label_2576:
	var_248_bool = 0; var_249_object = Obj();
	var_227_object = var_249_object;
	func_2712(var_248_bool, var_249_object);
	var_252_bool = var_248_bool == 0; //@nz
	if(var_252_bool != 0) {
		var_226_bool = 0;
		return 16;
	}
	@@var_227_object:GetPosition(var_243_cvector);
	GetPosition(var_244_cvector);
	var_245_cvector = var_243_cvector - var_244_cvector;
	var_246_float = var_245_cvector | var_245_cvector;
	var_253_bool = 0;
	var_253_bool = 0;
	var_255_bool = var_229_float > (int)0;
	if(var_255_bool != 0) {
		var_256_float = var_229_float * var_229_float;
		var_257_bool = var_246_float > var_256_float;
		if(var_257_bool != 0) {
			var_253_bool = 1;
		}
	}
	if(var_253_bool != 0) {
		Stop();
		var_226_bool = 0;
		return 16;
	}
	var_258_float = var_228_float * var_228_float;
	var_259_bool = var_246_float > var_258_float;
	if(var_259_bool != 0) {
		@@var_227_object:GetPFPosition(var_243_cvector);
		FindPathTo(var_247_object, var_243_cvector);
		var_260_bool = var_247_object != 0; //@nn
		if(var_260_bool != 0) {
			var_247_object = var_242_object;
			var_247_object = 0;
		}
		var_261_bool = var_242_object != 0; //@nn
		if(var_261_bool != 0) {
			var_262_bool = var_241_bool;
			if(var_262_bool == 0) goto Label_2625;
			var_241_bool = 0;
			RotatePath(var_242_object, var_240_bool);
			var_263_bool = var_240_bool == 0; //@nz
			if(var_263_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_266_string = "";
				func_2719(var_266_string);
				var_267_string = "";
				func_2721(var_267_string);
				FollowPath(var_242_object, var_230_bool, var_240_bool, var_266_string, var_267_string);
				var_268_bool = var_240_bool == 0; //@nz
				if(var_268_bool != 0) {
					var_269_object = var_0_object;
					if(var_269_object != 0) {
						var_242_object = 0;
						goto Label_2672;
					EMIT "GOTO 0xa55";
					}
				} else {
					var_242_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_240_bool);
					var_272_bool = var_240_bool == 0; //@nz
					if(var_272_bool != 0) {
						var_273_object = var_0_object;
						if(var_273_object != 0) {
							var_242_object = 0;
							goto Label_2672;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_2672;
	}
			var_247_object = 0;
			goto Label_2670;

		Label_2670:
			var_242_object = 0;

		}
		goto Label_2576;
	}
Label_2672:
	var_226_bool = !var_0_object;
	return 16;
	
}


func_4623(var_160_object)
{
	@@var_160_object:SetReturnValue((int)3);
	return 0;
}


func_5139(var_44_bool, var_45_object, var_50_object)
{
	var_46_int = 0; var_47_int = 0;
	var_48_int = 0; var_49_object = Obj();
	var_45_object = var_49_object;
	TaskCall(0);
	func_0(var_50_object, var_48_int, var_49_object);
	TaskReturn();
	var_50_object = var_47_int;
	var_216_bool = var_47_int == (int)2;
	if(var_216_bool != 0) {
		var_217_bool = 0; var_218_int = 0;
		func_5017(var_217_bool, (int)2);
	} else {
		var_247_bool = var_47_int == (int)1;
		if(var_247_bool != 0) {
			var_248_bool = 0; var_249_int = 0;
			func_5017(var_248_bool, (int)1);
			goto Label_5181;
		}
		var_251_bool = var_47_int == (int)3;
		if(var_251_bool != 0) {
			var_252_bool = 0; var_253_int = 0;
			func_5017(var_252_bool, (int)5);
			goto Label_5181;
		}
		var_255_bool = var_47_int == (int)4;
		if(var_255_bool != 0) {
			var_256_bool = 0; var_257_int = 0;
			func_5017(var_256_bool, (int)8);
			goto Label_5181;
		}
		var_44_bool = 0;
		return 2;
	}
Label_5181:
	var_44_bool = 1;
	return 2;
	
}


func_4628()
{
	SetVariable("oob9BoyFollower1", (int)1);
	return 0;
}


func_4634()
{
	var_53_object = Obj(); var_54_object = Obj();
	func_4810(Obj());
	var_55_object = var_54_object;
	var_66_float = 0;
	func_4575(var_66_float);
	@@var_54_object:AddMark("b9q03Bonfire1", "pt_bonfire1", (int)0, (int)531507, var_66_float);
	var_73_float = 0;
	func_4575(var_73_float);
	@@var_54_object:AddMark("b9q03Bonfire2", "pt_bonfire2", (int)0, (int)531508, var_73_float);
	var_78_float = 0;
	func_4575(var_78_float);
	@@var_54_object:AddMark("b9q03Bonfire3", "pt_bonfire3", (int)0, (int)531509, var_78_float);
	var_83_float = 0;
	func_4575(var_83_float);
	@@var_54_object:AddMark("b9q03Bonfire4", "pt_bonfire4", (int)0, (int)531510, var_83_float);
	func_4743();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1562(var_0_object, var_1237_cvector, var_1238_float)
{
	var_1239_cvector = CVector(0,0,0); var_1240_cvector = CVector(0,0,0); var_1241_cvector = CVector(0,0,0); var_1242_cvector = CVector(0,0,0); var_1243_cvector = CVector(0,0,0); var_1244_float = 0; var_1245_cvector = CVector(0,0,0); var_1246_cvector = CVector(0,0,0); var_1247_cvector = CVector(0,0,0); var_1248_cvector = CVector(0,0,0); var_1249_cvector = CVector(0,0,0); var_1250_float = 0;
	GetPosition(var_1245_cvector);
	@@@var_0_object:GetPosition(var_1246_cvector);
	GetDirection(var_1247_cvector);
	var_1251_cvector = CVector(0,0,0); var_1252_cvector = CVector(0,0,0);
	var_1253_cvector = CVector(0,0,0); var_1254_cvector = CVector(0,0,0);
	var_1254_cvector = var_1245_cvector - var_1246_cvector;
	func_4505(var_1253_cvector, var_1254_cvector);
	var_1256_float = var_1247_cvector * (float)0.75;
	var_1252_cvector = var_1253_cvector + var_1256_float;
	func_4505(var_1251_cvector, var_1252_cvector);
	var_1251_cvector = var_1248_cvector;
	FindLongestDir(var_1249_cvector, var_1250_float, var_1248_cvector, var_1238_float, (int)32, (float)7000.0);
	var_1250_float = var_1250_float - (int)100;
	var_1261_bool = var_1250_float < (int)0;
	if(var_1261_bool != 0) {
		var_1250_float = 0;
	}
	var_1237_cvector = var_1249_cvector * var_1250_float;
	return 12;
}


func_3614(var_0_object, var_929_bool)
{
	var_930_bool = 0; var_931_bool = 0;
	var_934_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_934_bool != 0) {
		@@@var_0_object:IsAttacking(var_931_bool);
		var_931_bool = var_929_bool;
		return 2;
	}
	var_929_bool = 0;
	return 2;
}


func_1055(var_0_object, var_340_cvector, var_341_float)
{
	var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_float = 0; var_348_cvector = CVector(0,0,0); var_349_cvector = CVector(0,0,0); var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0); var_352_cvector = CVector(0,0,0); var_353_float = 0;
	GetPosition(var_348_cvector);
	@@@var_0_object:GetPosition(var_349_cvector);
	GetDirection(var_350_cvector);
	var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0);
	var_356_cvector = CVector(0,0,0); var_357_cvector = CVector(0,0,0);
	var_357_cvector = var_348_cvector - var_349_cvector;
	func_4505(var_356_cvector, var_357_cvector);
	var_364_float = var_350_cvector * (float)0.75;
	var_355_cvector = var_356_cvector + var_364_float;
	func_4505(var_354_cvector, var_355_cvector);
	var_354_cvector = var_351_cvector;
	FindLongestDir(var_352_cvector, var_353_float, var_351_cvector, var_341_float, (int)32, (float)7000.0);
	var_353_float = var_353_float - (int)100;
	var_369_bool = var_353_float < (int)0;
	if(var_369_bool != 0) {
		var_353_float = 0;
	}
	var_340_cvector = var_352_cvector * var_353_float;
	return 12;
}


func_4137(var_189_bool, var_190_object)
{
	var_191_int = 0; var_192_int = 0;
	var_193_bool = 0; var_194_object = Obj();
	var_190_object = var_194_object;
	func_4101(var_193_bool, var_194_object);
	var_210_bool = var_193_bool == 0; //@nz
	if(var_210_bool != 0) {
		var_189_bool = 0;
		return 2;
	}
	var_211_bool = 0; var_212_object = Obj(); var_213_string = "";
	var_190_object = var_212_object;
	func_4011(var_211_bool, var_212_object, "noaccess");
	var_220_bool = var_211_bool == 0; //@nz
	if(var_220_bool != 0) {
		var_189_bool = 1;
		return 2;
	}
	@@var_190_object:GetProperty("noaccess", var_192_int);
	var_189_bool = var_192_int == (int)0;
	return 2;
}


func_3625(var_2_object, var_6_cvector)
{
	var_1046_float = 0; var_1047_int = 0; var_1048_float = 0; var_1049_int = 0;
	var_1050_bool = var_2_object == 0; //@nz
	if(var_1050_bool != 0) {
		return 4;
	}
	var_1051_cvector = var_6_cvector;
	if(var_1051_cvector != 0) {
		var_6_cvector = var_6_cvector + (int)-1;
		var_1054_bool = var_6_cvector > (int)0;
		if(var_1054_bool != 0) {
			return 4;
		}
	}
	rand(var_1048_float);
	var_1055_float = 0;
	func_3673(var_1055_float);
	var_1056_bool = var_1048_float < var_1055_float;
	if(var_1056_bool != 0) {
		irand(var_1049_int, var_2_object);
		var_1049_int = var_1049_int + (int)1;
		var_1059_int = "attack" + var_1049_int;
		Speak(var_1059_int);
		var_1060_int = 0;
		func_3671(var_1060_int);
		var_6_cvector = var_1060_int;
	}
	return 4;
}


func_1592(var_0_object, var_1_object, var_2_object, var_1226_object)
{
	var_1227_cvector = CVector(0,0,0); var_1228_float = 0; var_1229_bool = 0; var_1230_cvector = CVector(0,0,0); var_1231_float = 0; var_1232_cvector = CVector(0,0,0); var_1233_float = 0; var_1234_bool = 0; var_1235_cvector = CVector(0,0,0); var_1236_float = 0;
	var_0_object = var_1226_object;
	var_1237_cvector = CVector(0,0,0); var_1238_float = 0;
	func_1562(var_1236_float, var_1237_cvector, (float)1.7453293800354004);
	var_1237_cvector = var_1232_cvector;
	var_1233_float = var_1232_cvector | var_1232_cvector;
	var_1263_bool = var_1233_float < (float)2500.0;
	if(var_1263_bool != 0) {
		var_1264_cvector = CVector(0,0,0); var_1265_float = 0;
		func_1562(var_1236_float, var_1264_cvector, (float)2.6179938316345215);
		var_1264_cvector = var_1232_cvector;
		var_1233_float = var_1232_cvector | var_1232_cvector;
		var_1267_bool = var_1233_float < (float)2500.0;
		if(var_1267_bool != 0) {
			var_1269_float = sqrt(var_1233_float);
			var_1270_int = "Can't retreat, distance: " + var_1269_float;
			Trace(var_1270_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_1272_float = GetByIndex(var_1232_cvector, 0);
	var_1273_float = GetByIndex(var_1232_cvector, 2);
	Rotate(var_1272_float, var_1273_float);
	var_1274_cvector = CVector(0,0,0);
	func_3986(var_1274_cvector);
	var_1_object = var_1274_cvector + var_1232_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_1634:
	MovePoint(var_1_object, (int)1, var_1234_bool);
	var_1278_bool = var_1234_bool;
	if(var_1278_bool != 0) {
		var_1279_bool = var_0_object == 0; //@ne
		if(var_1279_bool != 0) {
			goto Label_1664;
		EMIT "GOTO 0x67e";

		Label_1664:
			return 10;
		}
		var_1280_cvector = CVector(0,0,0); var_1281_float = 0;
		func_1562(var_1236_float, var_1280_cvector, (float)2.6179938316345215);
		var_1280_cvector = var_1235_cvector;
		var_1236_float = var_1235_cvector | var_1235_cvector;
		var_1283_bool = var_1236_float >= (float)2500.0;
		if(var_1283_bool != 0) {
			var_1284_cvector = CVector(0,0,0);
			func_3986(var_1284_cvector);
			var_1_object = var_1284_cvector + var_1235_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1664;
		}
	}
	var_1287_bool = var_2_object == 0; //@nz
	if(var_1287_bool == 1) goto Label_1634;
	
}


func_1085(var_0_object, var_1_object, var_2_object, var_329_object)
{
	var_330_cvector = CVector(0,0,0); var_331_float = 0; var_332_bool = 0; var_333_cvector = CVector(0,0,0); var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_float = 0; var_337_bool = 0; var_338_cvector = CVector(0,0,0); var_339_float = 0;
	var_0_object = var_329_object;
	var_340_cvector = CVector(0,0,0); var_341_float = 0;
	func_1055(var_339_float, var_340_cvector, (float)1.7453293800354004);
	var_340_cvector = var_335_cvector;
	var_336_float = var_335_cvector | var_335_cvector;
	var_371_bool = var_336_float < (float)2500.0;
	if(var_371_bool != 0) {
		var_372_cvector = CVector(0,0,0); var_373_float = 0;
		func_1055(var_339_float, var_372_cvector, (float)2.6179938316345215);
		var_372_cvector = var_335_cvector;
		var_336_float = var_335_cvector | var_335_cvector;
		var_375_bool = var_336_float < (float)2500.0;
		if(var_375_bool != 0) {
			var_377_float = sqrt(var_336_float);
			var_378_int = "Can't retreat, distance: " + var_377_float;
			Trace(var_378_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_380_float = GetByIndex(var_335_cvector, 0);
	var_381_float = GetByIndex(var_335_cvector, 2);
	Rotate(var_380_float, var_381_float);
	var_382_cvector = CVector(0,0,0);
	func_3986(var_382_cvector);
	var_1_object = var_382_cvector + var_335_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_1127:
	MovePoint(var_1_object, (int)1, var_337_bool);
	var_388_bool = var_337_bool;
	if(var_388_bool != 0) {
		var_389_bool = var_0_object == 0; //@ne
		if(var_389_bool != 0) {
			goto Label_1157;
		EMIT "GOTO 0x483";

		Label_1157:
			return 10;
		}
		var_390_cvector = CVector(0,0,0); var_391_float = 0;
		func_1055(var_339_float, var_390_cvector, (float)2.6179938316345215);
		var_390_cvector = var_338_cvector;
		var_339_float = var_338_cvector | var_338_cvector;
		var_393_bool = var_339_float >= (float)2500.0;
		if(var_393_bool != 0) {
			var_394_cvector = CVector(0,0,0);
			func_3986(var_394_cvector);
			var_1_object = var_394_cvector + var_338_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1157;
		}
	}
	var_397_bool = var_2_object == 0; //@nz
	if(var_397_bool == 1) goto Label_1127;
	
}


func_4161(var_102_bool, var_103_cvector)
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


func_2119(var_482_bool)
{
	var_484_int = 0; var_485_cvector = CVector(0,0,0); var_486_cvector = CVector(0,0,0); var_487_bool = 0; var_488_object = Obj(); var_489_bool = 0; var_490_int = 0; var_491_cvector = CVector(0,0,0); var_492_cvector = CVector(0,0,0); var_493_bool = 0; var_494_object = Obj(); var_495_bool = 0;
	func_4947((int)0);
	var_496_int = var_490_int;
	var_523_bool = 0;
	var_523_bool = 1;
	var_525_bool = var_490_int == (int)-1;
	if(var_525_bool != 1) {
		var_526_bool = 0; var_527_int = 0;
		var_490_int = var_527_int;
		func_4976(var_526_bool, var_527_int);
		if(var_526_bool != 1) {
			var_523_bool = 0;
		}
	}
	if(var_523_bool != 0) {
		var_533_bool = 0; var_534_int = 0;
		func_5017(var_533_bool, (int)1);
		var_482_bool = 0;
		return 12;
	}
	GetScene(var_494_object);
	var_536_int = "pt_b9q03_bonfire" + var_490_int;
	@@var_494_object:GetLocator(var_536_int, var_493_bool, var_491_cvector, var_492_cvector);
	var_537_float = GetByIndex(var_491_cvector, 1);
	var_537_float = var_537_float + (int)50;
	SetByIndex(var_491_cvector, 1) = var_537_float;
	var_539_bool = 0; var_540_cvector = CVector(0,0,0); var_541_cvector = CVector(0,0,0); var_542_float = 0; var_543_float = 0; var_544_bool = 0; var_545_bool = 0;
	var_491_cvector = var_540_cvector;
	var_492_cvector = var_541_cvector;
	func_2239(var_495_bool, var_539_bool, var_540_cvector, var_541_cvector, (float)100, (float)3000, (bool)0, (bool)1);
	var_539_bool = var_495_bool;
	var_591_bool = var_495_bool;
	if(var_591_bool != 0) {
		var_592_int = 0;
		var_490_int = var_592_int;
		func_4984(var_592_int);
	}
	var_495_bool = var_482_bool;
	return 12;
}
EMIT "Stack[-2] = 0";


func_4680(var_136_object)
{
	@@var_136_object:SetReturnValue((int)4);
	return 0;
}


func_3657(var_0_object)
{
	var_791_object = Obj();
	var_791_object = var_0_object;
	func_4580(var_791_object);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_120_object, var_121_object)
{
	var_0_object = var_121_object;
	var_1_object = var_120_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_127_bool = 0; var_128_object = Obj();
		var_128_object = var_1_object;
		func_4706(var_128_object);
		if(var_127_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_4628();
			var_139_string = "";
			func_192(var_121_object, "Neutral");
			@@@var_0_object:SetMessage((int)530322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530323, (int)31711, (int)31710);
			@@@var_0_object:AddReply((int)531020, (int)32350, (int)32349);
		} else {
				var_181_bool = 0; var_182_object = Obj();
				var_182_object = var_1_object;
				func_4718(var_182_object);
				if(var_181_bool != 0) {
					var_187_string = "";
					func_192(var_121_object, "Neutral");
					@@@var_0_object:SetMessage((int)530326);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)530327, (int)-1, (int)31714);
					goto Label_162;
				}
				var_192_string = "";
				func_192(var_121_object, "Neutral");
				@@@var_0_object:SetMessage((int)530270);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530271, (int)-1, (int)31661);
				@@@var_0_object:AddReply((int)530273, (int)-1, (int)31663);
				@@@var_0_object:AddReply((int)530274, (int)-1, (int)31664);
				@@@var_0_object:AddReply((int)530272, (int)-1, (int)31662);
				goto Label_162;
		}
	}
Label_162:
	var_163_bool = 0;
	func_4945(var_163_bool);
	if(var_163_bool != 0) {

	Label_166:
		lshWaitForAnimEnd();
		var_164_string = var_3_string;
		if(var_164_string != 0) {
		} else {
			var_165_string = "";
			var_165_string = var_2_object;
			func_4409(var_165_string);
			goto Label_166;
	}
		PlayAnimation("all", "idle");

	Label_181:
		WaitForAnimEnd();
		var_178_string = var_3_string;
		if(var_178_string != 0) {
			goto Label_191;
		}
		PlayAnimation("all", "idle");
		goto Label_181;

	}
	goto Label_191;
	
Label_191:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_4171(var_98_bool, var_99_object)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0);
	@@var_99_object:GetPosition(var_101_cvector);
	var_102_bool = 0; var_103_cvector = CVector(0,0,0);
	var_101_cvector = var_103_cvector;
	func_4161(var_102_bool, var_103_cvector);
	var_102_bool = var_98_bool;
	return 2;
}


func_4685()
{
	func_4756();
	return 0;
}


func_3662()
{
	var_935_string = "";
	func_4458("attack_stay");
	return 0;
}


func_5199(var_45_bool, var_46_object)
{
	var_50_object = Obj(); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_float = 0; var_55_object = Obj(); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_float = 0;
	FindActor(var_55_object, "player");
	var_61_bool = 0; var_62_object = Obj();
	var_55_object = var_62_object;
	func_4137(var_61_bool, var_62_object);
	var_95_bool = var_61_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_45_bool = 0;
		return 10;
	}
	@@var_46_object:GetPosition(var_56_cvector);
	@@var_55_object:GetPosition(var_57_cvector);
	var_58_cvector = var_56_cvector - var_57_cvector;
	var_59_float = var_58_cvector | var_58_cvector;
	var_45_bool = var_59_float < (float)75625.0;
	return 10;
}
EMIT "Stack[-5] = 0";


func_4690(var_108_object)
{
	var_109_object = Obj(); var_110_string = ""; var_111_float = 0;
	func_4810(Obj());
	var_112_object = var_109_object;
	func_4827(var_109_object, "pt_bonfire1", (float)2);
	var_132_object = Obj();
	func_4810(var_132_object);
	@@var_108_object:ShowMap(var_132_object);
	return 0;
}


func_3667()
{
	return 0;
}


func_4180(var_59_object)
{
	var_60_bool = 0; var_61_int = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_string = ""; var_67_bool = 0; var_68_int = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_string = "";
	var_74_bool = var_59_object == 0; //@ne
	if(var_74_bool != 0) {
		return 14;
	}
	IsDead(var_67_bool);
	var_75_bool = var_67_bool;
	if(var_75_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_68_int);
	var_77_bool = var_68_int < (int)0;
	if(var_77_bool != 0) {
		return 14;
	}
	@@var_59_object:GetPosition(var_69_cvector);
	GetPosition(var_70_cvector);
	GetDirection(var_71_cvector);
	var_72_cvector = var_70_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_72_cvector, 0);
	var_79_float = GetByIndex(var_71_cvector, 0);
	var_80_float = var_78_float * var_79_float;
	var_81_float = GetByIndex(var_72_cvector, 2);
	var_82_float = GetByIndex(var_71_cvector, 2);
	var_83_float = var_81_float * var_82_float;
	var_84_int = var_80_float + var_83_float;
	var_86_bool = var_84_int >= (int)0;
	if(var_86_bool != 0) {
		var_73_string = "fhit";
	} else {
		var_73_string = "bhit";
	}
	var_89_int = var_73_string + "1";
	var_91_int = var_73_string + "2";
	FadeSecondaryAnimation("hit_react", var_89_int, var_91_int, (int)-10);
	return 14;
	
}


func_3669(var_1172_bool)
{
	var_1172_bool = 1;
	return 0;
}


func_3671(var_1060_int)
{
	var_1060_int = 1;
	return 0;
}


func_3673(var_1055_float)
{
	var_1055_float = 0.5;
	return 0;
}


func_3675(var_3_string, var_798_bool, var_799_object, var_800_float, var_801_float, var_802_bool, var_803_bool)
{
	var_808_bool = 0; var_809_bool = 0;
	var_3_string = var_799_object;
	SetTimer((int)4, (int)2);
	var_812_bool = 0; var_813_object = Obj(); var_814_float = 0; var_815_float = 0; var_816_bool = 0; var_817_bool = 0;
	var_799_object = var_813_object;
	var_800_float = var_814_float;
	var_801_float = var_815_float;
	var_802_bool = var_816_bool;
	var_803_bool = var_817_bool;
	func_3716(var_809_bool, var_812_bool, var_813_object, var_814_float, var_815_float, var_816_bool, var_817_bool);
	var_812_bool = var_809_bool;
	KillTimer((int)4);
	var_809_bool = var_798_bool;
	return 2;
}


func_4706(var_127_bool)
{
	var_129_int = 0; var_130_string = "";
	func_4541(var_129_int, "oob9BoyFollower1");
	var_134_bool = var_129_int == (int)0;
	if(var_134_bool != 0) {
		var_127_bool = 1;
		return 0;
	}
	var_127_bool = 0;
	return 0;
}


func_4718(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_4541(var_183_int, "b9q03BonefiresCount");
	var_186_bool = var_183_int == (int)4;
	if(var_186_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_4730()
{
	var_43_object = Obj(); var_44_object = Obj();
	CreateDiaryEntry(var_44_object, (int)543, (int)2, (int)530355);
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0;
	var_44_object = var_49_object;
	func_4782(var_48_bool, var_49_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4224(var_46_object, var_47_int, var_48_float)
{
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); var_51_int = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_int = 0; var_56_int = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_int = 0; var_65_int = 0; var_66_cvector = CVector(0,0,0);
	var_67_bool = 0;
	var_67_bool = 0;
	var_68_bool = 0;
	var_68_bool = 0;
	var_69_object = var_46_object;
	if(var_69_object != 0) {
		var_71_bool = var_47_int != (int)4;
		if(var_71_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		var_73_bool = var_47_int != (int)5;
		if(var_73_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
		var_76_cvector = CVector(0,0,0); var_77_object = Obj();
		var_46_object = var_77_object;
		func_3991(var_76_cvector, var_77_object);
		var_76_cvector = var_75_cvector;
		func_4505(var_74_cvector, var_75_cvector);
		var_74_cvector = var_58_cvector;
		CreateVectorVector(var_59_object);
		var_60_int = 1;

	Label_4253:
		var_88_int = "hit" + var_60_int;
		GetGeometryLocator(var_88_int, var_61_bool, var_62_cvector, var_63_cvector);
		var_89_bool = var_61_bool == 0; //@nz
		if(var_89_bool != 0) {
		} else {
			var_137_int = var_63_cvector | var_58_cvector;
			var_139_bool = var_137_int >= (float)0.7071067690849304;
			if(var_139_bool != 0) {
				@@var_59_object:add(var_62_cvector);
			}
			var_60_int = var_60_int + (int)1;
			goto Label_4253;
		}
		@@var_59_object:size(var_64_int);
		var_90_int = var_64_int;
		if(var_90_int != 0) {
			irand(var_65_int, var_64_int);
			@@var_59_object:get(var_66_cvector, var_65_int);
			var_91_object = Obj(); var_92_int = 0; var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0);
			var_46_object = var_91_object;
			var_47_int = var_92_int;
			var_48_float = var_93_float;
			var_66_cvector = var_94_cvector;
			var_95_cvector = -var_58_cvector;
			func_4292(var_93_float, var_94_cvector, var_95_cvector);
			return 18;
		}
		var_59_object = 0;
	}
	var_136_object = Obj();
	var_46_object = var_136_object;
	func_4180(var_136_object);
	return 18;
	
}


func_1665(var_0_object, var_1_object, var_2_object, var_75_int)
{
	var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0;
	var_85_bool = var_75_int != (int)120;
	if(var_85_bool != 0) {
		return 8;
	}
	var_86_bool = var_0_object == 0; //@ne
	if(var_86_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_80_cvector);
		FindDirLength(var_81_float, var_80_cvector, (float)7000.0);
		var_89_cvector = CVector(0,0,0); var_90_float = 0;
		func_1562(var_83_float, var_89_cvector, (float)1.7453293800354004);
		var_89_cvector = var_82_cvector;
		var_83_float = var_82_cvector | var_82_cvector;
		var_119_bool = 0;
		var_119_bool = 0;
		var_121_bool = var_83_float >= (float)2500.0;
		if(var_121_bool != 0) {
			var_122_bool = 0;
			var_123_float = var_81_float * var_81_float;
			var_125_float = var_123_float * (float)2.25;
			var_126_bool = var_83_float >= var_125_float;
			if(var_126_bool != 1) {
				var_127_bool = 0;
				func_1733((bool)1, var_127_bool);
				if(var_127_bool != 1) {
					var_122_bool = 0;
				}
			}
			if(var_122_bool != 0) {
				var_119_bool = 1;
			}
		}
		if(var_119_bool == 0) goto Label_1716;
		Stop();
		var_147_cvector = CVector(0,0,0);
		func_3986(var_147_cvector);
		var_1_object = var_147_cvector + var_82_cvector;
	}
Label_1716:
	return 8;
	
}


func_3716(var_2_object, var_812_bool, var_813_object, var_814_float, var_815_float, var_816_bool, var_817_bool)
{
	var_818_bool = 0; var_819_bool = 0; var_820_bool = 0; var_821_bool = 0;
	var_822_object = Obj();
	var_813_object = var_822_object;
	func_4580(var_822_object);
	SetTimer((int)1, (int)5);
	CanSee(var_820_bool, var_813_object);
	var_825_bool = var_820_bool;
	if(var_825_bool != 0) {
		var_2_object = true;
		var_826_object = Obj();
		var_813_object = var_826_object;
		func_4440(var_826_object);
	} else {
		var_2_object = false;
	}
	var_827_bool = 0; var_828_object = Obj();
	var_813_object = var_828_object;
	func_4006(var_827_bool, var_828_object);
	if(var_827_bool != 0) {
		var_831_object = Obj();
		func_4499(var_831_object);
		SendPlayerEnemy(var_813_object, var_831_object);
	}
	var_832_bool = 0; var_833_object = Obj(); var_834_float = 0; var_835_float = 0; var_836_bool = 0; var_837_bool = 0;
	var_813_object = var_833_object;
	var_814_float = var_834_float;
	var_815_float = var_835_float;
	var_816_bool = var_836_bool;
	var_817_bool = var_837_bool;
	func_3821(var_820_bool, var_821_bool, var_832_bool, var_833_object, var_834_float, var_835_float, var_836_bool, var_837_bool);
	var_832_bool = var_821_bool;
	var_883_object = var_2_object;
	if(var_883_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_821_bool = var_812_bool;
	return 4;
	
}


func_4743()
{
	var_84_object = Obj(); var_85_object = Obj();
	CreateDiaryEntry(var_85_object, (int)534, (int)2, (int)530346);
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0;
	var_85_object = var_90_object;
	func_4782(var_89_bool, var_90_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2696(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_3215(var_4_bool)
{
	Stop();
	StopAnimation();
	StopGroup0();
	var_4_bool = true;
	return 0;
}


func_4756()
{
	var_140_object = Obj(); var_141_object = Obj();
	CreateDiaryEntry(var_141_object, (int)535, (int)2, (int)530347);
	var_145_bool = 0; var_146_object = Obj(); var_147_int = 0;
	var_141_object = var_146_object;
	func_4782(var_145_bool, var_146_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3223(var_1_object, var_2_object, var_5_object)
{
	var_753_bool = 0; var_754_bool = 0; var_755_cvector = CVector(0,0,0); var_756_bool = 0; var_757_bool = 0; var_758_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_3225:
	var_762_int = var_1_object + (int)1;
	var_763_int = "attack_begin" + var_762_int;
	HasAnimation(var_756_bool, "all", var_763_int);
	var_764_bool = var_756_bool == 0; //@nz
	if(var_764_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_3225;
	}
	var_2_object = 0;
	
Label_3239:
	var_767_int = var_2_object + (int)1;
	var_768_int = "attack" + var_767_int;
	IsExisting3DSound(var_757_bool, var_768_int);
	var_769_bool = var_757_bool == 0; //@nz
	if(var_769_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_3239;

	}
	GetAnimationOffset(var_758_cvector, "all", "bjump");
	var_772_float = GetByIndex(var_758_cvector, 2);
	var_5_object = -var_772_float;
	return 6;
	
}


func_2712(var_248_bool, var_249_object)
{
	var_250_bool = 0; var_251_object = Obj();
	var_249_object = var_251_object;
	func_4137(var_250_bool, var_251_object);
	var_250_bool = var_248_bool;
	return 0;
}


func_670()
{
	var_94_object = Obj(); var_95_object = Obj();
	FindActor(var_95_object, "player");
	var_97_bool = var_95_object == 0; //@nz
	if(var_97_bool != 0) {
		return 2;
	}
	var_98_bool = 0; var_99_object = Obj();
	var_95_object = var_99_object;
	func_4171(var_98_bool, var_99_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2719(var_266_string)
{
	var_266_string = "walk";
	return 0;
}


func_2721(var_267_string)
{
	var_267_string = "run";
	return 0;
}


func_4769(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj();
	GetDiaryRoot(var_59_object);
	var_60_bool = var_59_object == 0; //@nz
	if(var_60_bool != 0) {
		Trace("Can't retrieve diary root");
		var_57_object = 0;
		return 2;
	}
	var_59_object = var_57_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2723(var_72_object)
{
	func_4913();
	var_93_object = Obj();
	var_72_object = var_93_object;
	func_2740(var_93_object);
	return 0;
}


func_4782(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0;
	func_4769(Obj());
	var_57_object = var_54_object;
	@@var_54_object:Find(var_50_int, var_55_object);
	var_62_bool = var_55_object == 0; //@nz
	if(var_62_bool != 0) {
		var_64_int = "Can't find diary parent with id: " + var_50_int;
		Trace(var_64_int);
		var_48_bool = 0;
		return 6;
	}
	@@var_55_object:AddChild(var_49_object);
	SendWorldWndMessage((int)7);
	@@var_49_object:GetCategory(var_56_int);
	SetDiarySection(var_56_int);
	var_48_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2740(var_93_object)
{
	EventDisable(0);
	var_94_object = Obj();
	var_93_object = var_94_object;
	func_2765(var_94_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_2751:
	Hold();
	goto Label_2751;
}
EMIT "Return(); Pop(0)";


func_1717(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3765(var_1_object, var_47_int)
{
	var_49_bool = var_47_int == (int)1;
	if(var_49_bool != 0) {
		var_50_object = Obj();
		var_50_object = var_1_object;
		func_4580(var_50_object);
	} else {
		var_55_int = 0;
		var_47_int = var_55_int;
		func_3923(var_44_object, var_47_int, var_55_int);
	}
	return 0;
	
}


func_1210(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3258(var_0_object, var_1066_float, var_1067_int)
{
	var_1068_object = Obj(); var_1069_float = 0; var_1070_float = 0; var_1071_object = Obj(); var_1072_float = 0; var_1073_float = 0;
	var_1075_float = var_1066_float * (float)0.8999999761581421;
	GetVictim(var_1075_float, var_1071_object);
	ReportAttack(var_0_object);
	var_1076_bool = var_1071_object == var_0_object;
	if(var_1076_bool != 0) {
		var_1077_float = 0; var_1078_object = Obj(); var_1079_int = 0;
		var_1071_object = var_1078_object;
		var_1067_int = var_1079_int;
		func_2939(var_1079_int);
		var_1077_float = var_1072_float;
		var_1080_float = 0; var_1081_object = Obj(); var_1082_float = 0; var_1083_int = 0;
		var_1071_object = var_1081_object;
		var_1072_float = var_1082_float;
		var_1084_int = 0; var_1085_object = Obj(); var_1086_int = 0;
		var_1071_object = var_1085_object;
		var_1067_int = var_1086_int;
		func_2942(var_1086_int);
		var_1084_int = var_1083_int;
		func_4023(var_1080_float, var_1081_object, var_1082_float, var_1083_int);
		var_1080_float = var_1073_float;
		var_1145_int = 0;
		func_2945(var_1145_int);
		ReportHit(var_0_object, var_1145_int, var_1073_float, var_1072_float);
		var_1146_object = Obj(); var_1147_float = 0;
		var_1071_object = var_1146_object;
		var_1073_float = var_1147_float;
		func_3667();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2237(var_562_bool)
{
	var_562_bool = 1;
	return 0;
}


func_2239(var_0_object, var_539_bool, var_540_cvector, var_541_cvector, var_542_float, var_543_float, var_544_bool, var_545_bool)
{
	var_546_bool = 0; var_547_bool = 0; var_548_object = Obj(); var_549_cvector = CVector(0,0,0); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_float = 0; var_553_object = Obj(); var_554_bool = 0; var_555_bool = 0; var_556_object = Obj(); var_557_cvector = CVector(0,0,0); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_float = 0; var_561_object = Obj();
	var_0_object = false;
	var_545_bool = var_555_bool;
	
Label_2242:
	var_562_bool = 0;
	func_2237(var_562_bool);
	var_563_bool = var_562_bool == 0; //@nz
	if(var_563_bool != 0) {
		var_539_bool = 0;
		return 16;
	}
	var_540_cvector = var_557_cvector;
	GetPosition(var_558_cvector);
	var_559_cvector = var_557_cvector - var_558_cvector;
	var_560_float = var_559_cvector | var_559_cvector;
	var_564_bool = 0;
	var_564_bool = 0;
	var_566_bool = var_543_float > (int)0;
	if(var_566_bool != 0) {
		var_567_float = var_543_float * var_543_float;
		var_568_bool = var_560_float > var_567_float;
		if(var_568_bool != 0) {
			var_564_bool = 1;
		}
	}
	if(var_564_bool != 0) {
		Stop();
		var_539_bool = 0;
		return 16;
	}
	var_569_float = var_542_float * var_542_float;
	var_570_bool = var_560_float > var_569_float;
	if(var_570_bool != 0) {
		FindPathTo(var_561_object, var_557_cvector);
		var_571_bool = var_561_object != 0; //@nn
		if(var_571_bool != 0) {
			var_561_object = var_556_object;
			var_561_object = 0;
		}
		var_572_bool = var_556_object != 0; //@nn
		if(var_572_bool != 0) {
			var_573_bool = var_555_bool;
			if(var_573_bool == 0) goto Label_2287;
			var_555_bool = 0;
			RotatePath(var_556_object, var_554_bool);
			var_574_bool = var_554_bool == 0; //@nz
			if(var_574_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_580_string = "";
				func_2379(var_580_string);
				var_581_string = "";
				func_2381(var_581_string);
				FollowPath(var_556_object, var_544_bool, var_554_bool, var_580_string, var_581_string);
				var_582_bool = var_554_bool == 0; //@nz
				if(var_582_bool != 0) {
					var_583_object = var_0_object;
					if(var_583_object != 0) {
						var_556_object = 0;
						goto Label_2334;
					EMIT "GOTO 0x903";
					}
				} else {
					var_556_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_554_bool);
					var_586_bool = var_554_bool == 0; //@nz
					if(var_586_bool != 0) {
						var_587_object = var_0_object;
						if(var_587_object != 0) {
							var_556_object = 0;
							goto Label_2334;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_2334;
	}
			var_561_object = 0;
			goto Label_2332;

		Label_2332:
			var_556_object = 0;

		}
		goto Label_2242;
	}
Label_2334:
	var_575_bool = var_0_object == 0; //@nz
	if(var_575_bool != 0) {
		var_576_float = GetByIndex(var_541_cvector, 0);
		var_577_float = GetByIndex(var_541_cvector, 2);
		RotateAsync(var_576_float, var_577_float);
	}
	var_539_bool = !var_0_object;
	return 16;
	
}


func_192(var_2_object, var_139_string)
{
	var_140_bool = 0;
	func_4945(var_140_bool);
	var_141_bool = var_140_bool == 0; //@nz
	if(var_141_bool != 0) {
		return 0;
	}
	var_142_bool = var_139_string == var_2_object;
	if(var_142_bool != 0) {
		return 0;
	}
	var_143_string = ""; var_144_bool = 0;
	var_139_string = var_143_string;
	var_146_bool = var_139_string == "";
	if(var_146_bool != 0) {
		var_144_bool = 0;
	} else {
		var_144_bool = 1;
	}
	func_4425(var_143_string, var_144_bool);
	var_2_object = var_139_string;
	return 0;
	
}


func_3779(var_2_object)
{
	KillTimer((int)1);
	var_44_object = var_2_object;
	if(var_44_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_3945(var_42_object);
	return 0;
}


func_4292(var_48_object, var_51_cvector, var_52_cvector)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj();
	GetScene(var_55_object);
	AddActorByType(var_56_object, "scripted", var_55_object, var_51_cvector, var_52_cvector, "blood_dir.xml");
	var_59_object = Obj();
	var_48_object = var_59_object;
	func_4180(var_59_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1733(var_0_object, var_127_bool)
{
	var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0);
	GetDirection(var_130_cvector);
	var_132_cvector = CVector(0,0,0); var_133_object = Obj();
	var_133_object = var_0_object;
	func_3991(var_132_cvector, var_133_object);
	var_132_cvector = var_131_cvector;
	var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0);
	var_130_cvector = var_139_cvector;
	var_131_cvector = var_140_cvector;
	func_4533(var_138_float, var_139_cvector, var_140_cvector);
	var_127_bool = var_138_float >= (float)-0.3420201241970062;
	return 4;
}


func_1226(var_0_object, var_94_bool)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	GetDirection(var_97_cvector);
	var_99_cvector = CVector(0,0,0); var_100_object = Obj();
	var_100_object = var_0_object;
	func_3991(var_99_cvector, var_100_object);
	var_99_cvector = var_98_cvector;
	var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0);
	var_97_cvector = var_106_cvector;
	var_98_cvector = var_107_cvector;
	func_4533(var_105_float, var_106_cvector, var_107_cvector);
	var_94_bool = var_105_float >= (float)-0.3420201241970062;
	return 4;
}


func_4810(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj();
	GetMainOutdoorScene(var_58_object);
	var_60_bool = var_58_object == 0; //@ne
	if(var_60_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_59_object = 0;
		var_59_object = var_55_object;
		return 4;
	}
	@@var_58_object:GetMap(var_59_object);
	var_59_object = var_55_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2765(var_94_object)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_string = ""; var_100_object = Obj(); var_101_bool = 0; var_102_bool = 0; var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_string = ""; var_110_object = Obj(); var_111_bool = 0; var_112_bool = 0; var_113_float = 0; var_114_cvector = CVector(0,0,0);
	var_115_bool = var_94_object == 0; //@ne
	if(var_115_bool != 0) {
		var_116_string = "";
		func_2856("fdie");
	} else {
		@@var_94_object:GetPosition(var_105_cvector);
		GetPosition(var_106_cvector);
		GetDirection(var_107_cvector);
		var_108_cvector = var_106_cvector - var_105_cvector;
		var_148_float = GetByIndex(var_108_cvector, 0);
		var_149_float = GetByIndex(var_107_cvector, 0);
		var_150_float = var_148_float * var_149_float;
		var_151_float = GetByIndex(var_108_cvector, 2);
		var_152_float = GetByIndex(var_107_cvector, 2);
		var_153_float = var_151_float * var_152_float;
		var_154_int = var_150_float + var_153_float;
		var_156_bool = var_154_int >= (int)0;
		if(var_156_bool != 0) {
			var_109_string = "fdie";
		} else {
				var_109_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_94_object = var_110_object;
		var_159_bool = IsFuncExist(var_94_object, "GetScriptProperty", (int)2);
		if(var_159_bool != 0) {
			@@var_94_object:HasScriptProperty(var_111_bool, "Owner");
			var_161_bool = var_111_bool;
			if(var_161_bool != 0) {
				@@var_94_object:GetScriptProperty(var_110_object, "Owner");
				var_163_bool = var_110_object == 0; //@ne
				if(var_163_bool != 0) {
					var_94_object = var_110_object;
				}
			}
		}
		var_166_bool = IsFuncExist(var_110_object, "@GetEyesHeight", (int)1);
		if(var_166_bool != 0) {
			@@var_110_object:GetEyesHeight(var_113_float);
			var_114_cvector = CVector(0.0, 0.0, 0.0);
			var_167_float = GetByIndex(var_114_cvector, 1);
			var_113_float = var_167_float;
			SetByIndex(var_114_cvector, 1) = var_167_float;
			LookAsync(var_94_object, "head", var_114_cvector);
			var_112_bool = 1;
		} else {
			var_112_bool = 0;

		}
		var_169_string = "";
		var_109_string = var_169_string;
		func_4458(var_169_string);
		PlayAnimation("all", var_109_string);
		WaitForAnimEnd();
		var_171_bool = var_112_bool;
		if(var_171_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_109_string);
		RemoveEnvelope();
		var_110_object = 0;
	}
	return 20;
	
}


func_4306(var_910_object)
{
	var_911_cvector = CVector(0,0,0); var_912_cvector = CVector(0,0,0); var_913_cvector = CVector(0,0,0); var_914_cvector = CVector(0,0,0); var_915_cvector = CVector(0,0,0); var_916_cvector = CVector(0,0,0);
	@@var_910_object:GetPosition(var_914_cvector);
	GetPosition(var_915_cvector);
	var_916_cvector = var_914_cvector - var_915_cvector;
	var_917_float = GetByIndex(var_916_cvector, 0);
	var_918_float = GetByIndex(var_916_cvector, 2);
	RotateAsync(var_917_float, var_918_float);
	return 6;
}


func_1749()
{
	var_120_float = 0; var_121_float = 0;
	func_1821(var_115_int, var_116_int, var_117_bool, var_118_bool, var_119_object, (float)300, (float)100);
	return 0;
}


func_1242()
{
	var_406_object = Obj(); var_407_object = Obj();
	FindActor(var_407_object, "player");
	var_409_bool = 0; var_410_object = Obj();
	var_407_object = var_410_object;
	func_4137(var_409_bool, var_410_object);
	var_411_bool = var_409_bool == 0; //@nz
	if(var_411_bool != 0) {
		var_412_bool = 0; var_413_int = 0;
		func_5017(var_412_bool, (int)1);
		return 2;
	}
	SetTimer((int)0, (int)5);
	var_416_object = Obj();
	var_407_object = var_416_object;
	func_1345(var_405_bool, var_406_object, var_407_object, var_416_object);
	KillTimer((int)0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4827(var_109_object, var_110_string, var_111_float)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_object = Obj(); var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_object = Obj(); var_120_bool = 0;
	GetMainOutdoorScene(var_119_object);
	var_121_bool = var_119_object == 0; //@ne
	if(var_121_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_119_object:GetLocator(var_110_string, var_120_bool, var_117_cvector, var_118_cvector);
	var_123_bool = var_120_bool == 0; //@nz
	if(var_123_bool != 0) {
		var_125_int = "Warning: outdoor scene locator " + var_110_string;
		var_127_int = var_125_int + " doesnt exist";
		Trace(var_127_int);
	}
	@@var_119_object:GetMap(var_109_object);
	var_128_bool = var_109_object == 0; //@ne
	if(var_128_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_130_float = GetByIndex(var_117_cvector, 0);
	var_131_float = GetByIndex(var_117_cvector, 2);
	@@var_109_object:SetMapParams(var_130_float, var_131_float, var_111_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4317(var_54_bool)
{
	var_55_bool = 0; var_56_bool = 0;
	IsLoaded(var_56_bool);
	var_56_bool = var_54_bool;
	return 2;
}


func_3297(var_0_object, var_1_object, var_1031_bool, var_1032_float)
{
	var_1033_int = 0; var_1034_bool = 0; var_1035_int = 0; var_1036_string = ""; var_1037_int = 0; var_1038_bool = 0; var_1039_int = 0; var_1040_string = "";
	func_3657(var_1040_string);
	irand(var_1037_int, var_1_object);
	var_1037_int = var_1037_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_1045_int = "attack_begin" + var_1037_int;
	PlayAnimation("all", var_1045_int);
	WaitForAnimEnd();
	func_3625(var_1039_int, var_1040_string);
	var_1061_bool = 0;
	var_1061_bool = 1;
	var_1062_bool = 0; var_1063_object = Obj();
	var_1063_object = var_0_object;
	func_4137(var_1062_bool, var_1063_object);
	var_1064_bool = var_1062_bool == 0; //@nz
	if(var_1064_bool != 1) {
		var_1065_bool = var_4_bool;
		if(var_1065_bool != 1) {
			var_1061_bool = 0;
		}
	}
	if(var_1061_bool != 0) {
		StopAsync();
		var_1031_bool = 0;
		return 8;
	}
	var_1066_float = 0; var_1067_int = 0;
	var_1032_float = var_1066_float;
	var_1037_int = var_1067_int;
	func_3258(var_1040_string, var_1066_float, var_1067_int);
	var_1150_int = "attack_middle" + var_1037_int;
	HasAnimation(var_1038_bool, "all", var_1150_int);
	var_1151_bool = var_1038_bool;
	if(var_1151_bool != 0) {
		var_1154_int = "attack_middle" + var_1037_int;
		PlayAnimation("all", var_1154_int);
		WaitForAnimEnd();
		func_3657(var_1040_string);
		var_1155_bool = 0;
		var_1155_bool = 1;
		var_1156_bool = 0; var_1157_object = Obj();
		var_1157_object = var_0_object;
		func_4137(var_1156_bool, var_1157_object);
		var_1158_bool = var_1156_bool == 0; //@nz
		if(var_1158_bool != 1) {
			var_1159_bool = var_4_bool;
			if(var_1159_bool != 1) {
				var_1155_bool = 0;
			}
		}
		if(var_1155_bool != 0) {
			StopAsync();
			var_1031_bool = 0;
			return 8;
		}
		var_1160_float = 0; var_1161_int = 0;
		var_1032_float = var_1160_float;
		var_1037_int = var_1161_int;
		func_3258(var_1040_string, var_1160_float, var_1161_int);
		var_1039_int = 1;

	Label_3380:
		var_1163_int = "attack_middle" + var_1037_int;
		var_1165_int = var_1163_int + "_";
		var_1040_string = var_1165_int + var_1039_int;
		HasAnimation(var_1038_bool, "all", var_1040_string);
		var_1167_bool = var_1038_bool == 0; //@nz
		if(var_1167_bool != 0) {
		} else {
			PlayAnimation("all", var_1040_string);
			WaitForAnimEnd();
			func_3657(var_1040_string);
			var_1183_bool = 0;
			var_1183_bool = 1;
			var_1184_bool = 0; var_1185_object = Obj();
			var_1185_object = var_0_object;
			func_4137(var_1184_bool, var_1185_object);
			var_1186_bool = var_1184_bool == 0; //@nz
			if(var_1186_bool != 1) {
				var_1187_bool = var_4_bool;
				if(var_1187_bool != 1) {
					var_1183_bool = 0;
				}
			}
			if(var_1183_bool != 0) {
				StopAsync();
				var_1031_bool = 0;
				var_1188_float = 0; var_1189_int = 0;
				var_1032_float = var_1188_float;
				var_1037_int = var_1189_int;
				func_3258(var_1040_string, var_1188_float, var_1189_int);
				var_1039_int = var_1039_int + (int)1;
				goto Label_3380;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_1171_int = "attack_end" + var_1037_int;
	PlayAnimation("all", var_1171_int);
	var_1172_bool = 0;
	func_3669(var_1172_bool);
	if(var_1172_bool != 0) {
		var_1173_bool = 0; var_1174_float = 0;
		func_3443(var_1173_bool, (float)0.75);
		StopAsync();
	}
	var_1031_bool = 1;
	return 8;
	
}


func_4322(var_59_bool, var_60_object, var_61_float)
{
	var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; var_70_bool = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0;
	@@var_60_object:GetPosition(var_72_cvector);
	@@var_60_object:GetEyesHeight(var_71_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	var_80_float = var_80_float + var_71_float;
	SetByIndex(var_72_cvector, 1) = var_80_float;
	GetPosition(var_73_cvector);
	GetEyesHeight(var_71_float);
	var_81_float = GetByIndex(var_73_cvector, 1);
	var_81_float = var_81_float + var_71_float;
	SetByIndex(var_73_cvector, 1) = var_81_float;
	var_74_cvector = var_72_cvector - var_73_cvector;
	var_82_float = GetByIndex(var_74_cvector, 1);
	SetByIndex(var_74_cvector, 1) = (float)0;
	var_83_int = var_74_cvector | var_74_cvector;
	var_84_float = sqrt(var_83_int);
	var_74_cvector = var_74_cvector / var_84_float;
	var_75_cvector = -var_74_cvector;
	var_85_float = var_74_cvector * var_61_float;
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_87_cvector = var_75_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4505(var_86_cvector, var_87_cvector);
	var_95_float = var_86_cvector * (int)25;
	var_96_int = var_85_float + var_95_float;
	var_76_cvector = var_96_int - CVector(0.0, 10.0, 0.0);
	var_77_cvector = var_73_cvector + var_76_cvector;
	IsOverrideActive(var_78_bool);
	var_98_bool = var_78_bool;
	if(var_98_bool != 0) {
		var_59_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_77_cvector, var_75_cvector, (bool)1);
	var_100_float = GetByIndex(var_76_cvector, 0);
	var_101_float = GetByIndex(var_76_cvector, 2);
	Rotate(var_100_float, var_101_float);
	var_102_bool = 0;
	func_4945(var_102_bool);
	if(var_102_bool != 0) {
	} else {
		HasAnimationTrack(var_79_bool, "head");
		var_104_bool = var_79_bool;
		if(var_104_bool == 0) goto Label_4385;
		LookAsyncCamera("head");
	}
Label_4385:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_59_bool = 1;
	return 18;
	
}


func_738(var_1311_object)
{
	var_1313_bool = var_1311_object == 0; //@nz
	if(var_1313_bool != 0) {
		return 0;
	}
	var_1314_bool = 0; var_1315_object = Obj();
	var_1311_object = var_1315_object;
	func_4171(var_1314_bool, var_1315_object);
	return 0;
}


func_3821(var_0_object, var_1_object, var_832_bool, var_833_object, var_834_float, var_835_float, var_836_bool, var_837_bool)
{
	var_838_bool = 0; var_839_bool = 0; var_840_object = Obj(); var_841_cvector = CVector(0,0,0); var_842_cvector = CVector(0,0,0); var_843_cvector = CVector(0,0,0); var_844_float = 0; var_845_object = Obj(); var_846_bool = 0; var_847_bool = 0; var_848_object = Obj(); var_849_cvector = CVector(0,0,0); var_850_cvector = CVector(0,0,0); var_851_cvector = CVector(0,0,0); var_852_float = 0; var_853_object = Obj();
	var_0_object = false;
	var_1_object = var_833_object;
	var_837_bool = var_847_bool;
	
Label_3825:
	var_854_bool = 0; var_855_object = Obj();
	var_833_object = var_855_object;
	func_3961(var_854_bool, var_855_object);
	var_858_bool = var_854_bool == 0; //@nz
	if(var_858_bool != 0) {
		var_832_bool = 0;
		return 16;
	}
	@@var_833_object:GetPosition(var_849_cvector);
	GetPosition(var_850_cvector);
	var_851_cvector = var_849_cvector - var_850_cvector;
	var_852_float = var_851_cvector | var_851_cvector;
	var_859_bool = 0;
	var_859_bool = 0;
	var_861_bool = var_835_float > (int)0;
	if(var_861_bool != 0) {
		var_862_float = var_835_float * var_835_float;
		var_863_bool = var_852_float > var_862_float;
		if(var_863_bool != 0) {
			var_859_bool = 1;
		}
	}
	if(var_859_bool != 0) {
		Stop();
		var_832_bool = 0;
		return 16;
	}
	var_864_float = var_834_float * var_834_float;
	var_865_bool = var_852_float > var_864_float;
	if(var_865_bool != 0) {
		@@var_833_object:GetPFPosition(var_849_cvector);
		FindPathTo(var_853_object, var_849_cvector);
		var_866_bool = var_853_object != 0; //@nn
		if(var_866_bool != 0) {
			var_853_object = var_848_object;
			var_853_object = 0;
		}
		var_867_bool = var_848_object != 0; //@nn
		if(var_867_bool != 0) {
			var_868_bool = var_847_bool;
			if(var_868_bool == 0) goto Label_3874;
			var_847_bool = 0;
			RotatePath(var_848_object, var_846_bool);
			var_869_bool = var_846_bool == 0; //@nz
			if(var_869_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_872_string = "";
				func_3968(var_872_string);
				var_873_string = "";
				func_3970(var_873_string);
				FollowPath(var_848_object, var_836_bool, var_846_bool, var_872_string, var_873_string);
				var_874_bool = var_846_bool == 0; //@nz
				if(var_874_bool != 0) {
					var_875_object = var_0_object;
					if(var_875_object != 0) {
						var_848_object = 0;
						goto Label_3921;
					EMIT "GOTO 0xf36";
					}
				} else {
					var_848_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_846_bool);
					var_878_bool = var_846_bool == 0; //@nz
					if(var_878_bool != 0) {
						var_879_object = var_0_object;
						if(var_879_object != 0) {
							var_848_object = 0;
							goto Label_3921;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_3921;
	}
			var_853_object = 0;
			goto Label_3919;

		Label_3919:
			var_848_object = 0;

		}
		goto Label_3825;
	}
Label_3921:
	var_832_bool = !var_0_object;
	return 16;
	
}


func_4860(var_111_int)
{
	var_112_int = 0; var_113_int = 0;
	GetVariable("branch", var_113_int);
	var_116_bool = var_113_int == (int)0;
	if(var_116_bool != 0) {
		var_111_int = 1;
		return 2;
	EMIT "GOTO 0x130b";
	}
	var_118_bool = var_113_int == (int)1;
	if(var_118_bool != 0) {
		var_111_int = 2;
		return 2;
	}
	var_111_int = 3;
	return 2;
}


func_4877(var_73_int)
{
	var_74_int = 0; var_75_int = 0;
	GetVariable("branch", var_75_int);
	var_75_int = var_73_int;
	return 2;
}


func_4883(var_46_object)
{
	var_47_int = 0;
	func_4877(var_47_int);
	var_52_bool = var_47_int == (int)1;
	if(var_52_bool != 0) {
		WorkWithCorpse(var_46_object);
	} else {
		Barter(var_46_object);
	}
	return 0;
	
}


func_1821(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_120_float, var_121_float)
{
	var_122_bool = 0;
	func_4317(var_122_bool);
	var_123_bool = var_122_bool == 0; //@nz
	if(var_123_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_120_float;
	var_1_object = var_121_float;
	SetTimer((int)10, (float)1.0);
	func_1900();
	var_178_bool = var_3_string == 0; //@nz
	if(var_178_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_4896(var_79_string)
{
	var_80_object = Obj(); var_81_int = 0; var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; var_85_bool = 0;
	CreateInvItem(var_83_object);
	@@var_83_object:SetItemName(var_79_string);
	@@var_83_object:SetProperty("Organ", (int)1);
	@@var_83_object:GetItemID(var_84_int);
	AddItem(var_85_bool, var_83_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_802(var_641_object)
{
	var_646_bool = 0; var_647_object = Obj();
	var_641_object = var_647_object;
	func_4137(var_646_bool, var_647_object);
	var_648_bool = var_646_bool == 0; //@nz
	if(var_648_bool != 0) {
		var_649_bool = 0; var_650_int = 0;
		func_5017(var_649_bool, (int)1);
		return 0;
	}
	var_651_object = Obj();
	var_641_object = var_651_object;
	func_857(var_644_cvector, var_645_bool, var_641_object, var_651_object);
	return 0;
}


func_1315(var_0_object, var_427_cvector, var_428_float)
{
	var_429_cvector = CVector(0,0,0); var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_float = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0;
	GetPosition(var_435_cvector);
	@@@var_0_object:GetPosition(var_436_cvector);
	GetDirection(var_437_cvector);
	var_441_cvector = CVector(0,0,0); var_442_cvector = CVector(0,0,0);
	var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0);
	var_444_cvector = var_435_cvector - var_436_cvector;
	func_4505(var_443_cvector, var_444_cvector);
	var_446_float = var_437_cvector * (float)0.75;
	var_442_cvector = var_443_cvector + var_446_float;
	func_4505(var_441_cvector, var_442_cvector);
	var_441_cvector = var_438_cvector;
	FindLongestDir(var_439_cvector, var_440_float, var_438_cvector, var_428_float, (int)32, (float)7000.0);
	var_440_float = var_440_float - (int)100;
	var_451_bool = var_440_float < (int)0;
	if(var_451_bool != 0) {
		var_440_float = 0;
	}
	var_427_cvector = var_439_cvector * var_440_float;
	return 12;
}


func_4391()
{
	var_208_bool = 0; var_209_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_211_bool = 0;
	func_4945(var_211_bool);
	if(var_211_bool != 0) {
	} else {
		HasAnimationTrack(var_209_bool, "head");
		var_213_bool = var_209_bool;
		if(var_213_bool == 0) goto Label_4408;
		UnlookAsync("head");
	}
Label_4408:
	return 2;
	
}


func_2856(var_116_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_117_string = "";
	var_116_string = var_117_string;
	func_4458(var_117_string);
	PlayAnimation("all", var_116_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_116_string);
	RemoveEnvelope();
	return 0;
}


func_4913()
{
	var_73_int = 0;
	func_4877(var_73_int);
	var_78_bool = var_73_int != (int)1;
	if(var_78_bool != 0) {
		return 0;
	}
	var_79_string = "";
	func_4896("liver");
	var_90_string = "";
	func_4896("kidney");
	var_91_string = "";
	func_4896("heart");
	var_92_string = "";
	func_4896("blood");
	return 0;
}


func_1848(var_0_object, var_1_object, var_4_bool, var_45_bool)
{
	var_46_float = 0; var_47_float = 0;
	var_48_bool = var_4_bool == 0; //@ne
	if(var_48_bool != 0) {
		var_45_bool = 0;
		return 2;
	}
	var_49_float = 0; var_50_object = Obj();
	var_50_object = var_4_bool;
	func_3998(var_49_float, var_50_object);
	var_47_float = sqrt(var_49_float);
	var_57_object = var_2_object;
	if(var_57_object != 0) {
		var_47_float = var_47_float - var_1_object;
	}
	var_45_bool = var_47_float < var_0_object;
	return 2;
}


func_4409(var_165_string)
{
	var_166_bool = 0; var_167_float = 0; var_168_float = 0; var_169_bool = 0; var_170_float = 0; var_171_float = 0;
	lshHasAnimation(var_169_bool, var_165_string);
	var_172_bool = var_169_bool;
	if(var_172_bool != 0) {
		lshGetAnimTimes(var_165_string, var_170_float, var_171_float);
		lshPlayAnimation(var_170_float, var_171_float, (bool)0);
	} else {
		var_175_int = "Can't find lsh animation : " + var_165_string;
		Trace(var_175_int);
	}
	return 6;
	
}


func_827(var_0_object, var_662_cvector, var_663_float)
{
	var_664_cvector = CVector(0,0,0); var_665_cvector = CVector(0,0,0); var_666_cvector = CVector(0,0,0); var_667_cvector = CVector(0,0,0); var_668_cvector = CVector(0,0,0); var_669_float = 0; var_670_cvector = CVector(0,0,0); var_671_cvector = CVector(0,0,0); var_672_cvector = CVector(0,0,0); var_673_cvector = CVector(0,0,0); var_674_cvector = CVector(0,0,0); var_675_float = 0;
	GetPosition(var_670_cvector);
	@@@var_0_object:GetPosition(var_671_cvector);
	GetDirection(var_672_cvector);
	var_676_cvector = CVector(0,0,0); var_677_cvector = CVector(0,0,0);
	var_678_cvector = CVector(0,0,0); var_679_cvector = CVector(0,0,0);
	var_679_cvector = var_670_cvector - var_671_cvector;
	func_4505(var_678_cvector, var_679_cvector);
	var_681_float = var_672_cvector * (float)0.75;
	var_677_cvector = var_678_cvector + var_681_float;
	func_4505(var_676_cvector, var_677_cvector);
	var_676_cvector = var_673_cvector;
	FindLongestDir(var_674_cvector, var_675_float, var_673_cvector, var_663_float, (int)32, (float)7000.0);
	var_675_float = var_675_float - (int)100;
	var_686_bool = var_675_float < (int)0;
	if(var_686_bool != 0) {
		var_675_float = 0;
	}
	var_662_cvector = var_674_cvector * var_675_float;
	return 12;
}


func_2363(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1345(var_0_object, var_1_object, var_2_object, var_416_object)
{
	var_417_cvector = CVector(0,0,0); var_418_float = 0; var_419_bool = 0; var_420_cvector = CVector(0,0,0); var_421_float = 0; var_422_cvector = CVector(0,0,0); var_423_float = 0; var_424_bool = 0; var_425_cvector = CVector(0,0,0); var_426_float = 0;
	var_0_object = var_416_object;
	var_427_cvector = CVector(0,0,0); var_428_float = 0;
	func_1315(var_426_float, var_427_cvector, (float)1.7453293800354004);
	var_427_cvector = var_422_cvector;
	var_423_float = var_422_cvector | var_422_cvector;
	var_453_bool = var_423_float < (float)2500.0;
	if(var_453_bool != 0) {
		var_454_cvector = CVector(0,0,0); var_455_float = 0;
		func_1315(var_426_float, var_454_cvector, (float)2.6179938316345215);
		var_454_cvector = var_422_cvector;
		var_423_float = var_422_cvector | var_422_cvector;
		var_457_bool = var_423_float < (float)2500.0;
		if(var_457_bool != 0) {
			var_459_float = sqrt(var_423_float);
			var_460_int = "Can't retreat, distance: " + var_459_float;
			Trace(var_460_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_462_float = GetByIndex(var_422_cvector, 0);
	var_463_float = GetByIndex(var_422_cvector, 2);
	Rotate(var_462_float, var_463_float);
	var_464_cvector = CVector(0,0,0);
	func_3986(var_464_cvector);
	var_1_object = var_464_cvector + var_422_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_1387:
	MovePoint(var_1_object, (int)1, var_424_bool);
	var_468_bool = var_424_bool;
	if(var_468_bool != 0) {
		var_469_bool = var_0_object == 0; //@ne
		if(var_469_bool != 0) {
			goto Label_1417;
		EMIT "GOTO 0x587";

		Label_1417:
			return 10;
		}
		var_470_cvector = CVector(0,0,0); var_471_float = 0;
		func_1315(var_426_float, var_470_cvector, (float)2.6179938316345215);
		var_470_cvector = var_425_cvector;
		var_426_float = var_425_cvector | var_425_cvector;
		var_473_bool = var_426_float >= (float)2500.0;
		if(var_473_bool != 0) {
			var_474_cvector = CVector(0,0,0);
			func_3986(var_474_cvector);
			var_1_object = var_474_cvector + var_425_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1417;
		}
	}
	var_477_bool = var_2_object == 0; //@nz
	if(var_477_bool == 1) goto Label_1387;
	
}


func_2888()
{
	var_50_bool = GlobalVars[1];
	if(var_50_bool != 0) {
		var_51_object = Obj();
		func_4499(var_51_object);
		RemoveActor(var_51_object);
		Hold();
	}
Label_2897:
	var_54_bool = 0;
	func_4317(var_54_bool);
	var_57_bool = var_54_bool == 0; //@nz
	if(var_57_bool != 0) {
		Hold();
		goto Label_2897;
	}
	return 0;
}


func_4937(var_108_int)
{
	var_108_int = 515558;
	return 0;
}


func_4425(var_143_string, var_144_bool)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0;
	lshHasAnimation(var_150_bool, var_143_string);
	var_153_bool = var_150_bool;
	if(var_153_bool != 0) {
		lshGetAnimTimes(var_143_string, var_151_float, var_152_float);
		lshPlayAnimation(var_151_float, var_152_float, var_144_bool);
	} else {
		var_155_int = "Can't find lsh animation : " + var_143_string;
		Trace(var_155_int);
	}
	return 6;
	
}


func_4939(var_107_int)
{
	var_107_int = 503343;
	return 0;
}


func_2379(var_580_string)
{
	var_580_string = "walk";
	return 0;
}


func_4941(var_109_string)
{
	var_109_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_2381(var_581_string)
{
	var_581_string = "run";
	return 0;
}


func_4943(var_110_string)
{
	var_110_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_2383()
{
	var_614_string = "";
	func_2446("hunt");
	return 0;
}


func_4945(var_102_bool)
{
	var_102_bool = 0;
	return 0;
}


func_4947(var_496_int)
{
	var_497_object = Obj(); var_498_cvector = CVector(0,0,0); var_499_cvector = CVector(0,0,0); var_500_cvector = CVector(0,0,0); var_501_bool = 0; var_502_float = 0; var_503_int = 0; var_504_int = 0; var_505_cvector = CVector(0,0,0); var_506_float = 0; var_507_object = Obj(); var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_bool = 0; var_512_float = 0; var_513_int = 0; var_514_int = 0; var_515_cvector = CVector(0,0,0); var_516_float = 0;
	GetScene(var_507_object);
	GetPosition(var_508_cvector);
	var_512_float = 9000000;
	
Label_4955:
	if((bool)1 != 0) {
		var_519_int = "pt_b9q03_bonfire" + (int)1;
		@@var_507_object:GetLocator(var_519_int, var_511_bool, var_509_cvector, var_510_cvector);
		var_520_bool = var_511_bool == 0; //@nz
		if(var_520_bool != 0) {
		} else {
			var_515_cvector = var_508_cvector - var_509_cvector;
			var_516_float = var_515_cvector | var_515_cvector;
			var_521_bool = var_516_float < var_512_float;
			if(var_521_bool != 0) {
				var_516_float = var_512_float;
				var_513_int = (int)-1;
			}
			var_513_int = var_513_int + (int)1;
			goto Label_4955;
		}
	}
	var_514_int = var_496_int;
	return 20;
	
}
EMIT "Stack[-10] = 0";


func_3923(var_0_object, var_1_object, var_55_int)
{
	var_57_bool = var_55_int != (int)0;
	if(var_57_bool != 0) {
		return 0;
	}
	var_58_bool = 0; var_59_object = Obj();
	var_59_object = var_1_object;
	func_3961(var_58_bool, var_59_object);
	var_94_bool = var_58_bool == 0; //@nz
	if(var_94_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_4440(var_297_object)
{
	var_298_float = 0; var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_cvector = CVector(0,0,0);
	@@var_297_object:GetEyesHeight(var_300_float);
	var_301_cvector = CVector(0.0, 0.0, 0.0);
	var_302_float = GetByIndex(var_301_cvector, 1);
	var_300_float = var_302_float;
	SetByIndex(var_301_cvector, 1) = var_302_float;
	LookAsync(var_297_object, "head", var_301_cvector);
	return 4;
}


func_857(var_0_object, var_1_object, var_2_object, var_651_object)
{
	var_652_cvector = CVector(0,0,0); var_653_float = 0; var_654_bool = 0; var_655_cvector = CVector(0,0,0); var_656_float = 0; var_657_cvector = CVector(0,0,0); var_658_float = 0; var_659_bool = 0; var_660_cvector = CVector(0,0,0); var_661_float = 0;
	var_0_object = var_651_object;
	var_662_cvector = CVector(0,0,0); var_663_float = 0;
	func_827(var_661_float, var_662_cvector, (float)1.7453293800354004);
	var_662_cvector = var_657_cvector;
	var_658_float = var_657_cvector | var_657_cvector;
	var_688_bool = var_658_float < (float)2500.0;
	if(var_688_bool != 0) {
		var_689_cvector = CVector(0,0,0); var_690_float = 0;
		func_827(var_661_float, var_689_cvector, (float)2.6179938316345215);
		var_689_cvector = var_657_cvector;
		var_658_float = var_657_cvector | var_657_cvector;
		var_692_bool = var_658_float < (float)2500.0;
		if(var_692_bool != 0) {
			var_694_float = sqrt(var_658_float);
			var_695_int = "Can't retreat, distance: " + var_694_float;
			Trace(var_695_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_697_float = GetByIndex(var_657_cvector, 0);
	var_698_float = GetByIndex(var_657_cvector, 2);
	Rotate(var_697_float, var_698_float);
	var_699_cvector = CVector(0,0,0);
	func_3986(var_699_cvector);
	var_1_object = var_699_cvector + var_657_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_899:
	MovePoint(var_1_object, (int)1, var_659_bool);
	var_703_bool = var_659_bool;
	if(var_703_bool != 0) {
		var_704_bool = var_0_object == 0; //@ne
		if(var_704_bool != 0) {
			goto Label_929;
		EMIT "GOTO 0x39f";

		Label_929:
			return 10;
		}
		var_705_cvector = CVector(0,0,0); var_706_float = 0;
		func_827(var_661_float, var_705_cvector, (float)2.6179938316345215);
		var_705_cvector = var_660_cvector;
		var_661_float = var_660_cvector | var_660_cvector;
		var_708_bool = var_661_float >= (float)2500.0;
		if(var_708_bool != 0) {
			var_709_cvector = CVector(0,0,0);
			func_3986(var_709_cvector);
			var_1_object = var_709_cvector + var_660_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_929;
		}
	}
	var_712_bool = var_2_object == 0; //@nz
	if(var_712_bool == 1) goto Label_899;
	
}


func_1886(var_2_object, var_3_string)
{
	func_1981();
	KillTimer((int)10);
	var_43_object = var_2_object;
	if(var_43_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_4451()
{
	var_45_bool = 0;
	func_4945(var_45_bool);
	if(var_45_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3945(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_4458(var_935_string)
{
	var_936_bool = 0; var_937_int = 0; var_938_bool = 0; var_939_int = 0; var_940_bool = 0; var_941_float = 0; var_942_cvector = CVector(0,0,0); var_943_cvector = CVector(0,0,0); var_944_bool = 0; var_945_int = 0; var_946_bool = 0; var_947_int = 0; var_948_bool = 0; var_949_float = 0; var_950_cvector = CVector(0,0,0); var_951_cvector = CVector(0,0,0);
	IsExisting3DSound(var_944_bool, var_935_string);
	var_952_bool = var_944_bool == 0; //@nz
	if(var_952_bool != 0) {
		var_945_int = 0;

	Label_4464:
		var_954_int = var_945_int + (int)1;
		var_955_int = var_935_string + var_954_int;
		IsExisting3DSound(var_946_bool, var_955_int);
		var_956_bool = var_946_bool == 0; //@nz
		if(var_956_bool != 0) {
		} else {
			var_945_int = var_945_int + (int)1;
			goto Label_4464;
		}
		var_957_bool = var_945_int == 0; //@nz
		if(var_957_bool != 0) {
			return 16;
		}
		irand(var_947_int, var_945_int);
		var_959_int = var_947_int + (int)1;
		var_935_string = var_935_string + var_959_int;
	}
	Is3DSoundLoaded(var_948_bool, var_935_string);
	var_960_bool = var_948_bool;
	if(var_960_bool != 0) {
		GetEyesHeight(var_949_float);
		GetDirection(var_950_cvector);
		var_951_cvector = var_950_cvector * (int)50;
		var_962_float = GetByIndex(var_951_cvector, 1);
		var_962_float = var_962_float + var_949_float;
		SetByIndex(var_951_cvector, 1) = var_962_float;
		PlayGlobalSound(var_935_string, var_951_cvector);
	}
	return 16;
	
}


func_2923(var_7_bool, var_716_object)
{
	var_7_bool = var_716_object;
	SetTimer((int)3, (int)1);
	var_728_object = Obj(); var_729_bool = 0; var_730_float = 0;
	var_716_object = var_728_object;
	func_2965(var_721_bool, var_722_bool, var_723_float, var_724_int, var_725_object, var_716_object, var_728_object, (bool)0, (float)150.0);
	KillTimer((int)3);
	return 0;
}


func_1900()
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_bool = 0; var_132_float = 0; var_133_bool = 0; var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_bool = 0; var_139_float = 0; var_140_bool = 0;
	WaitForAnimEnd();
	var_141_bool = 0;
	func_4317(var_141_bool);
	var_142_bool = var_141_bool == 0; //@nz
	if(var_142_bool != 0) {
		return 14;
	}
	func_4596((int)0);
	var_143_int = var_134_int;
	var_135_int = 0;
	
Label_1914:
	var_156_bool = 0;
	var_156_bool = 0;
	var_158_bool = var_135_int < (int)5;
	if(var_158_bool != 0) {
		var_159_bool = 0;
		func_4317(var_159_bool);
		if(var_159_bool != 0) {
			var_156_bool = 1;
		}
	}
	if(var_156_bool != 0) {
		irand(var_136_int, (int)3);
		var_162_bool = var_136_int == (int)0;
		if(var_162_bool != 0) {
			var_163_int = var_134_int;
			if(var_163_int == 0) goto Label_1947;
			irand(var_137_int, var_134_int);
			var_165_string = ""; var_166_int = 0;
			var_137_int = var_166_int;
			func_4589(var_165_string, var_166_int);
			PlayAnimation("all", var_165_string);
			WaitForAnimEnd(var_138_bool);
			var_167_bool = var_138_bool == 0; //@nz
			if(var_167_bool != 0) {
			} else {
		} else {
				var_172_bool = var_136_int == (int)1;
				if(var_172_bool != 0) {
					rand(var_139_float, (int)4);
					var_175_int = var_139_float + (int)1;
					Sleep(var_175_int, var_140_bool);
					var_176_bool = var_140_bool == 0; //@nz
					if(var_176_bool != 0) {
						goto Label_1976;
					}
					goto Label_1965;
				}
				var_177_int = var_135_int;
				if(var_177_int == 0) goto Label_1965;
				goto Label_1976;
		}
		Label_1965:
			var_168_bool = 0;
			func_1979(var_168_bool);
			var_169_bool = var_168_bool == 0; //@nz
			if(var_169_bool != 0) {
				goto Label_1976;
			}
			ResetAAS();
			var_135_int = var_135_int + (int)1;
			goto Label_1914;

		}
	}
Label_1976:
	ResetAAS();
	return 14;
	
}


func_4976(var_526_bool, var_527_int)
{
	var_528_int = 0; var_529_int = 0;
	var_531_int = "b9q03Bonfire" + var_527_int;
	GetVariable(var_531_int, var_529_int);
	var_526_bool = var_529_int != (int)0;
	return 2;
}


func_3443(var_1173_bool, var_1174_float)
{
	var_1175_float = 0; var_1176_bool = 0; var_1177_float = 0; var_1178_bool = 0;
	rand(var_1177_float);
	var_1179_bool = var_1177_float < var_1174_float;
	if(var_1179_bool != 0) {

	Label_3448:
		IsAnimationPlaying(var_1178_bool);
		var_1180_bool = var_1178_bool == 0; //@nz
		if(var_1180_bool != 0) {
		} else {
			var_1181_bool = 0;
			func_3553(var_1181_bool);
			if(var_1181_bool != 0) {
				var_1173_bool = 1;
				sync();
				goto Label_3448;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_3657(var_1178_bool);
	}
	goto Label_3468;
	
Label_3468:
	var_1173_bool = 0;
	return 4;
	
}


func_4984(var_592_int)
{
	var_593_string = ""; var_594_object = Obj(); var_595_string = ""; var_596_object = Obj();
	var_592_int = var_595_string;
	TriggerWorld("enable_bonfire", var_595_string);
	var_598_bool = 0; var_599_string = ""; var_600_string = "";
	func_4563(var_598_bool, "quest_b9_03", "bonfire_burn");
	var_605_int = "b9q03Bonfire" + var_592_int;
	SetVariable(var_605_int, (int)1);
	GetScene(var_596_object);
	var_608_object = Obj();
	func_4499(var_608_object);
	BroadcastMessage("b9q03BonfireBurnedByFollower", var_608_object, var_596_object);
	return 4;
}
EMIT "Stack[-1] = 0";


func_3961(var_854_bool, var_855_object)
{
	var_856_bool = 0; var_857_object = Obj();
	var_855_object = var_857_object;
	func_4137(var_856_bool, var_857_object);
	var_856_bool = var_854_bool;
	return 0;
}


func_2939(var_1077_float)
{
	var_1077_float = 0.10000000149011612;
	return 0;
}


func_2942(var_1084_int)
{
	var_1084_int = 0;
	return 0;
}


func_3968(var_872_string)
{
	var_872_string = "walk";
	return 0;
}


func_2945(var_1145_int)
{
	var_1145_int = 0;
	return 0;
}


func_3970(var_873_string)
{
	var_873_string = "run";
	return 0;
}


func_3972(var_1108_string, var_1109_int)
{
	var_1111_bool = var_1109_int == (int)2;
	if(var_1111_bool != 0) {
		var_1108_string = "fire";
		return 0;
	EMIT "GOTO 0xf90";
	}
	var_1113_bool = var_1109_int == (int)1;
	if(var_1113_bool != 0) {
		var_1108_string = "bullet";
		return 0;
	}
	var_1108_string = "phys";
	return 0;
}


func_1418(var_0_object, var_1_object, var_2_object, var_76_int)
{
	var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_float = 0;
	var_86_bool = var_76_int != (int)120;
	if(var_86_bool != 0) {
		return 8;
	}
	var_87_bool = var_0_object == 0; //@ne
	if(var_87_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_81_cvector);
		FindDirLength(var_82_float, var_81_cvector, (float)7000.0);
		var_90_cvector = CVector(0,0,0); var_91_float = 0;
		func_1315(var_84_float, var_90_cvector, (float)1.7453293800354004);
		var_90_cvector = var_83_cvector;
		var_84_float = var_83_cvector | var_83_cvector;
		var_120_bool = 0;
		var_120_bool = 0;
		var_122_bool = var_84_float >= (float)2500.0;
		if(var_122_bool != 0) {
			var_123_bool = 0;
			var_124_float = var_82_float * var_82_float;
			var_126_float = var_124_float * (float)2.25;
			var_127_bool = var_84_float >= var_126_float;
			if(var_127_bool != 1) {
				var_128_bool = 0;
				func_1486((bool)1, var_128_bool);
				if(var_128_bool != 1) {
					var_123_bool = 0;
				}
			}
			if(var_123_bool != 0) {
				var_120_bool = 1;
			}
		}
		if(var_120_bool == 0) goto Label_1469;
		Stop();
		var_148_cvector = CVector(0,0,0);
		func_3986(var_148_cvector);
		var_1_object = var_148_cvector + var_83_cvector;
	}
Label_1469:
	return 8;
	
}


func_2446(var_614_string)
{
	var_615_bool = 0; var_616_bool = 0; var_617_bool = 0; var_618_bool = 0;
	WaitForAnimEnd();
	var_619_bool = 0;
	func_4317(var_619_bool);
	var_620_bool = var_619_bool == 0; //@nz
	if(var_620_bool != 0) {
		return 4;
	}
	HasAnimation(var_617_bool, "all", var_614_string);
	var_622_bool = var_617_bool == 0; //@nz
	if(var_622_bool != 0) {
		return 4;
	}
	PlayAnimation("all", var_614_string);
	WaitForAnimEnd(var_618_bool);
	return 4;
}


func_3470(var_0_object, var_966_bool, var_967_float)
{
	var_968_bool = 0; var_969_cvector = CVector(0,0,0); var_970_cvector = CVector(0,0,0); var_971_cvector = CVector(0,0,0); var_972_float = 0; var_973_bool = 0; var_974_cvector = CVector(0,0,0); var_975_cvector = CVector(0,0,0); var_976_cvector = CVector(0,0,0); var_977_float = 0;
	
Label_3471:
	IsAnimationPlaying(var_973_bool);
	var_978_bool = var_973_bool == 0; //@nz
	if(var_978_bool != 0) {
	} else {
		var_979_bool = 0;
		func_3553(var_979_bool);
		if(var_979_bool != 0) {
			var_966_bool = 1;
			return 10;
		}
		var_1024_bool = 0;
		var_1024_bool = 1;
		var_1025_bool = 0; var_1026_object = Obj();
		var_1026_object = var_0_object;
		func_4137(var_1025_bool, var_1026_object);
		var_1027_bool = var_1025_bool == 0; //@nz
		if(var_1027_bool != 1) {
			var_1028_bool = var_4_bool;
			if(var_1028_bool != 1) {
				var_1024_bool = 0;
			}
		}
		if(var_1024_bool != 0) {
			var_966_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_974_cvector);
		GetPFPosition(var_975_cvector);
		var_976_cvector = var_974_cvector - var_975_cvector;
		var_977_float = var_976_cvector | var_976_cvector;
		var_1029_float = var_967_float * var_967_float;
		var_1030_bool = var_977_float < var_1029_float;
		if(var_1030_bool != 0) {
			var_1031_bool = 0; var_1032_float = 0;
			var_967_float = var_1032_float;
			func_3297(var_976_cvector, var_977_float, var_1031_bool, var_1032_float);
			var_966_bool = 1;
			sync();
			goto Label_3471;
		}
		return 10;
	}
	func_3657(var_977_float);
	var_966_bool = 0;
	return 10;
	
}


func_3986(var_382_cvector)
{
	var_383_cvector = CVector(0,0,0); var_384_cvector = CVector(0,0,0);
	GetPosition(var_384_cvector);
	var_384_cvector = var_382_cvector;
	return 2;
}


func_4499(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	self(var_53_object);
	var_53_object = var_51_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2965(var_0_object, var_3_string, var_4_bool, var_6_cvector, var_728_object, var_729_bool, var_730_float, var_804_bool, var_904_bool)
{
	var_731_float = 0; var_732_cvector = CVector(0,0,0); var_733_cvector = CVector(0,0,0); var_734_bool = 0; var_735_bool = 0; var_736_float = 0; var_737_cvector = CVector(0,0,0); var_738_float = 0; var_739_cvector = CVector(0,0,0); var_740_bool = 0; var_741_float = 0; var_742_float = 0; var_743_cvector = CVector(0,0,0); var_744_cvector = CVector(0,0,0); var_745_bool = 0; var_746_bool = 0; var_747_float = 0; var_748_cvector = CVector(0,0,0); var_749_float = 0; var_750_cvector = CVector(0,0,0); var_751_bool = 0; var_752_float = 0;
	func_3223(var_750_cvector, var_751_bool, var_752_float);
	var_6_cvector = 0;
	var_777_bool = IsFuncExist(var_728_object, "@GetAttackDistance", (int)1);
	if(var_777_bool != 0) {
		@@var_728_object:GetAttackDistance(var_742_float);
		var_742_float = var_742_float + (int)50;
	} else {
							var_730_float = var_742_float;
	}
	var_780_bool = var_742_float >= (int)150;
	if(var_780_bool != 0) {
		var_742_float = 150;
	}
	var_3_string = false;
	var_0_object = var_728_object;
	IsPlayerActor(var_0_object, var_745_bool);
	var_781_bool = var_745_bool;
	if(var_781_bool != 0) {
		PlayGlobalMusic("attack");
	}
	var_783_bool = var_729_bool;
	if(var_783_bool != 0) {
		var_746_bool = 0;
	} else {
						var_746_bool = 1;

	}
	var_747_float = (float)300.0 + var_742_float;
	
Label_3000:
	var_785_bool = 0;
	var_785_bool = 0;
	var_786_bool = 0;
	var_786_bool = 0;
	var_787_bool = 0; var_788_object = Obj();
	var_788_object = var_0_object;
	func_4137(var_787_bool, var_788_object);
	if(var_787_bool != 0) {
		var_789_bool = var_3_string == 0; //@nz
		if(var_789_bool != 0) {
			var_786_bool = 1;
		}
	}
	if(var_786_bool != 0) {
		var_790_bool = var_4_bool == 0; //@nz
		if(var_790_bool != 0) {
			var_785_bool = 1;
		}
	}
	if(var_785_bool != 0) {
		func_3657(var_752_float);
		@@@var_0_object:GetPFPosition(var_743_cvector);
		GetPFPosition(var_744_cvector);
		var_748_cvector = var_743_cvector - var_744_cvector;
		var_749_float = var_748_cvector | var_748_cvector;
		var_796_float = var_747_float * var_747_float;
		var_797_bool = var_749_float >= var_796_float;
		if(var_797_bool != 0) {
			var_798_bool = 0; var_799_object = Obj(); var_800_float = 0; var_801_float = 0; var_802_bool = 0; var_803_bool = 0;
			var_799_object = var_0_object;
			var_742_float = var_800_float;
			TaskCall(17);
			func_3675(var_807_object, var_798_bool, var_799_object, var_800_float, (float)1000.0, (bool)1, (bool)0);
			TaskReturn();
			var_887_bool = var_804_bool == 0; //@nz
			if(var_887_bool != 0) {
				var_3_string = true;
			} else {
				var_746_bool = 0;
		} else {
				var_895_float = var_730_float * var_730_float;
				var_896_bool = var_749_float >= var_895_float;
				if(var_896_bool != 0) {
					@@@var_0_object:GetPFPosition(var_750_cvector);
					CanReachByPF(var_751_bool, var_750_cvector);
					var_897_bool = var_751_bool == 0; //@nz
					if(var_897_bool != 0) {
						var_898_bool = 0; var_899_object = Obj(); var_900_float = 0; var_901_float = 0; var_902_bool = 0; var_903_bool = 0;
						var_899_object = var_0_object;
						var_742_float = var_900_float;
						TaskCall(17);
						func_3675(var_907_object, var_898_bool, var_899_object, var_900_float, (float)1000.0, (bool)1, (bool)0);
						TaskReturn();
						var_908_bool = var_904_bool == 0; //@nz
						if(var_908_bool != 0) {
							var_3_string = true;
							goto Label_3192;
						}
						var_746_bool = 0;
						goto Label_3000;
					}
					var_909_bool = var_746_bool == 0; //@nz
					if(var_909_bool != 0) {
						var_910_object = Obj();
						var_910_object = var_0_object;
						func_4306(var_910_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_3657(var_752_float);
						StopAsync();
						var_746_bool = 1;
						var_921_bool = 0;
						var_921_bool = 1;
						var_922_bool = 0; var_923_object = Obj();
						var_923_object = var_0_object;
						func_4137(var_922_bool, var_923_object);
						var_924_bool = var_922_bool == 0; //@nz
						if(var_924_bool != 1) {
							var_925_bool = var_4_bool;
							if(var_925_bool != 1) {
								var_921_bool = 0;
							}
						}
						if(var_921_bool != 0) {
							goto Label_3192;
						}
					}
					rand(var_752_float);
					var_926_bool = 0;
					var_928_bool = var_752_float < (float)0.6000000238418579;
					if(var_928_bool != 1) {
						var_929_bool = 0;
						func_3614((bool)1, var_929_bool);
						if(var_929_bool != 1) {
							var_926_bool = 0;
						}
					}
					if(var_926_bool != 0) {
						Face(var_0_object);
						func_3662();
						PlayAnimation("all", "attack_stay");
						var_966_bool = 0; var_967_float = 0;
						var_730_float = var_967_float;
						func_3470(var_752_float, var_966_bool, var_967_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_3657(var_752_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_1194_bool = 0;
						func_3614(var_752_float, var_1194_bool);
						var_1195_bool = var_1194_bool == 0; //@nz
						if(var_1195_bool == 0) goto Label_3182;
						var_1196_bool = 0;
						var_1196_bool = 1;
						var_1197_bool = 0; var_1198_object = Obj();
						var_1198_object = var_0_object;
						func_4137(var_1197_bool, var_1198_object);
						var_1199_bool = var_1197_bool == 0; //@nz
						if(var_1199_bool != 1) {
							var_1200_bool = var_4_bool;
							if(var_1200_bool != 1) {
								var_1196_bool = 0;
							}
						}
						if(var_1196_bool != 0) {
							goto Label_3192;
						}
						@@@var_0_object:GetPFPosition(var_743_cvector);
						GetPFPosition(var_744_cvector);
						var_748_cvector = var_743_cvector - var_744_cvector;
						var_749_float = var_748_cvector | var_748_cvector;
						var_1201_float = var_730_float * var_730_float;
						var_1202_bool = var_749_float < var_1201_float;
						if(var_1202_bool == 0) goto Label_3182;
						var_1203_bool = 0; var_1204_float = 0;
						var_730_float = var_1204_float;
						func_3297(var_751_bool, var_752_float, var_1203_bool, var_1204_float);
						var_1205_bool = var_1203_bool == 0; //@nz
						if(var_1205_bool == 0) goto Label_3182;
						goto Label_3192;
				}
					var_1206_bool = 0; var_1207_float = 0;
					var_730_float = var_1207_float;
					func_3297(var_751_bool, var_752_float, var_1206_bool, var_1207_float);
					var_1208_bool = var_1206_bool == 0; //@nz
					if(var_1208_bool != 0) {
						goto Label_3192;
					}
					var_746_bool = 1;

				}
			Label_3182:
				goto Label_3191;
		}
		Label_3191:
			goto Label_3000;

		}
	}
Label_3192:
	WaitForAnimEnd();
	var_888_bool = 0;
	var_888_bool = 1;
	var_889_string = var_3_string;
	if(var_889_string != 1) {
		var_890_bool = var_4_bool;
		if(var_890_bool != 1) {
			var_888_bool = 0;
		}
	}
	if(var_888_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_893_bool = var_745_bool;
	if(var_893_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_3991(var_1011_cvector, var_1012_object)
{
	var_1013_cvector = CVector(0,0,0); var_1014_cvector = CVector(0,0,0); var_1015_cvector = CVector(0,0,0); var_1016_cvector = CVector(0,0,0);
	GetPosition(var_1015_cvector);
	@@var_1012_object:GetPosition(var_1016_cvector);
	var_1011_cvector = var_1016_cvector - var_1015_cvector;
	return 4;
}


func_5017(var_58_bool, var_59_int)
{
	var_62_bool = var_59_int == (int)1;
	if(var_62_bool != 0) {
		Trace("changing state to c_iStateWaitForCommand");
	} else {
		var_66_bool = var_59_int == (int)2;
		if(var_66_bool != 0) {
			Trace("changing state to c_iStateFollow");
			goto Label_5081;
		}
		var_69_bool = var_59_int == (int)3;
		if(var_69_bool != 0) {
			Trace("changing state to c_iStateIdleAndFollow");
			goto Label_5081;
		}
		var_72_bool = var_59_int == (int)4;
		if(var_72_bool != 0) {
			Trace("changing state to c_iStateRetreatPlayer");
			goto Label_5081;
		}
		var_75_bool = var_59_int == (int)5;
		if(var_75_bool != 0) {
			Trace("changing state to c_iStateBurn");
			goto Label_5081;
		}
		var_78_bool = var_59_int == (int)0;
		if(var_78_bool != 0) {
			var_79_int = GlobalVars[6];
			var_80_int = GlobalVars[2];
			var_80_int = var_79_int;
			GlobalVars[6] = var_79_int;
			Trace("changing state to c_iStateWaitForLoad");
			goto Label_5081;
		}
		var_83_bool = var_59_int == (int)8;
		if(var_83_bool != 0) {
			Trace("changing state to c_iStateGoAway");
			goto Label_5081;
		}
		var_86_bool = var_59_int == (int)9;
		if(var_86_bool != 0) {
			Trace("changing state to c_iStateAttack");
			goto Label_5081;
		}
		var_58_bool = 0;
		return 0;
	}
Label_5081:
	var_64_int = GlobalVars[2];
	var_59_int = var_64_int;
	GlobalVars[2] = var_64_int;
	var_58_bool = 1;
	return 0;
	
}


func_4505(var_356_cvector, var_357_cvector)
{
	var_358_float = 0; var_359_float = 0;
	var_360_int = var_357_cvector | var_357_cvector;
	var_359_float = sqrt(var_360_int);
	var_361_float = 9.999999974752427e-07;
	var_362_bool = var_359_float < var_361_float;
	if(var_362_bool != 0) {
		var_356_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_356_cvector = var_357_cvector / var_359_float;
	return 2;
}


func_3998(var_1297_float, var_1298_object)
{
	var_1300_cvector = CVector(0,0,0); var_1301_cvector = CVector(0,0,0); var_1302_cvector = CVector(0,0,0); var_1303_cvector = CVector(0,0,0); var_1304_cvector = CVector(0,0,0); var_1305_cvector = CVector(0,0,0);
	GetPosition(var_1303_cvector);
	@@var_1298_object:GetPosition(var_1304_cvector);
	var_1305_cvector = var_1304_cvector - var_1303_cvector;
	var_1297_float = var_1305_cvector | var_1305_cvector;
	return 6;
}


func_2467()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4515(var_1118_float, var_1119_float, var_1120_float)
{
	var_1123_bool = var_1119_float < var_1120_float;
	if(var_1123_bool != 0) {
		var_1119_float = var_1118_float;
	} else {
		var_1120_float = var_1118_float;
	}
	return 0;
	
}


func_4006(var_827_bool, var_828_object)
{
	var_829_bool = 0; var_830_bool = 0;
	IsPlayerActor(var_828_object, var_830_bool);
	var_830_bool = var_827_bool;
	return 2;
}


func_2472(var_2_object)
{
	var_186_object = Obj(); var_187_object = Obj();
	FindActor(var_187_object, "player");
	var_189_bool = 0; var_190_object = Obj();
	var_187_object = var_190_object;
	func_4137(var_189_bool, var_190_object);
	var_223_bool = var_189_bool == 0; //@nz
	if(var_223_bool != 0) {
		var_224_bool = 0; var_225_int = 0;
		func_5017(var_224_bool, (int)1);
		return 2;
	}
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_bool = 0;
	var_187_object = var_227_object;
	func_2572(var_186_object, var_187_object, var_226_bool, var_227_object, (float)250.0, (float)6000, (bool)1, (bool)1);
	if(var_226_bool != 0) {
		var_277_bool = var_2_object == 0; //@nz
		if(var_277_bool != 0) {
			var_278_bool = 0; var_279_int = 0;
			func_5017(var_278_bool, (int)3);
		}
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_4522(var_1128_float, var_1129_float, var_1130_float, var_1131_float)
{
	var_1132_bool = var_1129_float < var_1130_float;
	if(var_1132_bool != 0) {
		var_1130_float = var_1128_float;
		return 0;
	}
	var_1133_bool = var_1129_float > var_1131_float;
	if(var_1133_bool != 0) {
		var_1131_float = var_1128_float;
		return 0;
	}
	var_1129_float = var_1128_float;
	return 0;
}


func_4011(var_211_bool, var_212_object, var_213_string)
{
	var_214_bool = 0; var_215_bool = 0;
	var_218_bool = IsFuncExist(var_212_object, "HasProperty", (int)2);
	var_219_bool = var_218_bool == 0; //@nz
	if(var_219_bool != 0) {
		var_211_bool = 0;
		return 2;
	}
	@@var_212_object:HasProperty(var_213_string, var_215_bool);
	var_215_bool = var_211_bool;
	return 2;
}


func_4533(var_138_float, var_139_cvector, var_140_cvector)
{
	var_141_int = var_139_cvector | var_140_cvector;
	var_142_int = var_139_cvector | var_139_cvector;
	var_143_int = var_140_cvector | var_140_cvector;
	var_144_float = var_142_int * var_143_int;
	var_145_float = sqrt(var_144_float);
	var_138_float = var_141_int / var_145_float;
	return 0;
}


func_4023(var_1080_float, var_1081_object, var_1082_float, var_1083_int)
{
	var_1087_int = 0; var_1088_string = ""; var_1089_int = 0; var_1090_float = 0; var_1091_float = 0; var_1092_float = 0; var_1093_int = 0; var_1094_string = ""; var_1095_int = 0; var_1096_float = 0; var_1097_float = 0; var_1098_float = 0;
	var_1099_bool = 0; var_1100_object = Obj(); var_1101_string = "";
	var_1081_object = var_1100_object;
	func_4011(var_1099_bool, var_1100_object, "health");
	var_1102_bool = var_1099_bool == 0; //@nz
	if(var_1102_bool != 0) {
		var_1080_float = 0.0;
		return 12;
	}
	var_1103_bool = 0; var_1104_object = Obj(); var_1105_string = "";
	var_1081_object = var_1104_object;
	func_4011(var_1103_bool, var_1104_object, "armor");
	var_1106_bool = var_1103_bool == 0; //@nz
	if(var_1106_bool != 0) {
		var_1093_int = 0;
	} else {
			@@var_1081_object:GetProperty("armor", var_1093_int);
	}
	var_1108_string = ""; var_1109_int = 0;
	var_1083_int = var_1109_int;
	func_3972(var_1108_string, var_1109_int);
	var_1094_string = "armor_" + var_1108_string;
	var_1114_bool = 0; var_1115_object = Obj(); var_1116_string = "";
	var_1081_object = var_1115_object;
	var_1094_string = var_1116_string;
	func_4011(var_1114_bool, var_1115_object, var_1116_string);
	var_1117_bool = var_1114_bool == 0; //@nz
	if(var_1117_bool != 0) {
		var_1095_int = 0;
	} else {
		@@var_1081_object:GetProperty(var_1094_string, var_1095_int);

	}
	var_1118_float = 0; var_1119_float = 0; var_1120_float = 0;
	var_1121_int = var_1093_int + var_1095_int;
	var_1119_float = var_1121_int / (float)100.0;
	func_4515(var_1118_float, var_1119_float, (float)1);
	var_1118_float = var_1096_float;
	@@var_1081_object:GetProperty("health", var_1097_float);
	var_1126_int = (int)1 - var_1096_float;
	var_1098_float = var_1082_float * var_1126_int;
	var_1128_float = 0; var_1129_float = 0; var_1130_float = 0; var_1131_float = 0;
	var_1129_float = var_1097_float - var_1098_float;
	func_4522(var_1128_float, var_1129_float, (float)0, (float)1);
	@@var_1081_object:SetProperty("health", var_1128_float);
	var_1134_bool = 0; var_1135_object = Obj();
	var_1081_object = var_1135_object;
	func_4006(var_1134_bool, var_1135_object);
	if(var_1134_bool != 0) {
		var_1136_float = 0;
		var_1136_float = -var_1098_float;
		func_4546(var_1136_float);
	}
	var_1098_float = var_1080_float;
	return 12;
	
}


func_1979(var_168_bool)
{
	var_168_bool = 1;
	return 0;
}


func_1981()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1470(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3519(var_0_object, var_981_bool)
{
	var_982_cvector = CVector(0,0,0); var_983_cvector = CVector(0,0,0); var_984_cvector = CVector(0,0,0); var_985_float = 0; var_986_float = 0; var_987_cvector = CVector(0,0,0); var_988_cvector = CVector(0,0,0); var_989_cvector = CVector(0,0,0); var_990_float = 0; var_991_float = 0;
	var_992_bool = 0;
	var_992_bool = 1;
	var_993_bool = 0; var_994_object = Obj();
	var_994_object = var_0_object;
	func_4137(var_993_bool, var_994_object);
	var_995_bool = var_993_bool == 0; //@nz
	if(var_995_bool != 1) {
		var_996_bool = var_4_bool;
		if(var_996_bool != 1) {
			var_992_bool = 0;
		}
	}
	if(var_992_bool != 0) {
		var_981_bool = 0;
		return 10;
	}
	var_997_bool = 0;
	func_3614(var_991_float, var_997_bool);
	if(var_997_bool != 0) {
		@@@var_0_object:GetPFPosition(var_987_cvector);
		GetPFPosition(var_988_cvector);
		var_989_cvector = var_987_cvector - var_988_cvector;
		var_990_float = var_989_cvector | var_989_cvector;
		@@@var_0_object:GetAttackDistance(var_991_float);
		var_991_float = var_991_float + (int)50;
		var_999_float = var_991_float * var_991_float;
		var_981_bool = var_990_float <= var_999_float;
		return 10;
	}
	var_981_bool = 0;
	return 10;
}


func_4541(var_129_int, var_130_string)
{
	var_131_int = 0; var_132_int = 0;
	GetVariable(var_130_string, var_132_int);
	var_132_int = var_129_int;
	return 2;
}


func_1986(var_0_object)
{
	var_287_object = Obj(); var_288_float = 0; var_289_object = Obj(); var_290_float = 0;
	SetTimer((int)2, (int)1);
	FindActor(var_289_object, "player");
	rand(var_290_float, (int)4);
	var_296_bool = var_290_float > (int)1;
	if(var_296_bool != 0) {
		var_297_object = Obj();
		var_289_object = var_297_object;
		func_4440(var_297_object);
		var_305_int = var_290_float + (int)2;
		Sleep(var_305_int);
		UnlookAsync("head");
	} else {
		var_312_int = var_290_float + (int)2;
		Sleep(var_312_int);
	}
	var_307_bool = var_0_object == 0; //@nz
	if(var_307_bool != 0) {
		var_308_bool = 0; var_309_int = 0;
		func_5017(var_308_bool, (int)2);
	}
	KillTimer((int)2);
	return 4;
	
}
EMIT "Stack[-2] = 0";


func_4546(var_1136_float)
{
	var_1137_object = Obj(); var_1138_object = Obj();
	CreateFloatVector(var_1138_object);
	@@var_1138_object:add(var_1136_float);
	var_1140_bool = var_1136_float < (int)0;
	if(var_1140_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_1138_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1486(var_0_object, var_128_bool)
{
	var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0);
	GetDirection(var_131_cvector);
	var_133_cvector = CVector(0,0,0); var_134_object = Obj();
	var_134_object = var_0_object;
	func_3991(var_133_cvector, var_134_object);
	var_133_cvector = var_132_cvector;
	var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0);
	var_131_cvector = var_140_cvector;
	var_132_cvector = var_141_cvector;
	func_4533(var_139_float, var_140_cvector, var_141_cvector);
	var_128_bool = var_139_float >= (float)-0.3420201241970062;
	return 4;
}


func_4563(var_598_bool, var_599_string, var_600_string)
{
	var_601_object = Obj(); var_602_object = Obj();
	FindActor(var_602_object, var_599_string);
	var_603_bool = var_602_object == 0; //@ne
	if(var_603_bool != 0) {
		var_598_bool = 0;
		return 2;
	}
	Trigger(var_602_object, var_600_string);
	var_598_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_982(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1502(var_1219_object)
{
	SetTimer((int)1, (int)3);
	var_1226_object = Obj();
	var_1219_object = var_1226_object;
	func_1592(var_1222_cvector, var_1223_bool, var_1219_object, var_1226_object);
	KillTimer((int)1);
	return 0;
}


func_5086(var_77_object)
{
	Trace("changing state to c_iStateAttack");
	var_79_int = GlobalVars[2];
	GlobalVars[2] = (int)9;
	var_80_object = GlobalVars[5];
	var_77_object = var_80_object;
	GlobalVars[5] = var_80_object;
	return 0;
}


func_4575(var_66_float)
{
	var_67_float = 0; var_68_float = 0;
	GetGameTime(var_68_float);
	var_68_float = var_66_float;
	return 2;
}


func_3553(var_979_bool)
{
	var_980_bool = 0;
	var_980_bool = 0;
	var_981_bool = 0;
	func_3519(var_980_bool, var_981_bool);
	if(var_981_bool != 0) {
		var_1000_bool = 0;
		func_3569(var_979_bool, var_980_bool, var_1000_bool);
		if(var_1000_bool != 0) {
			var_980_bool = 1;
		}
	}
	if(var_980_bool != 0) {
		var_979_bool = 1;
		return 0;
	}
	var_979_bool = 0;
	return 0;
}


func_4580(var_791_object)
{
	var_792_bool = 0; var_793_bool = 0;
	IsPlayerActor(var_791_object, var_793_bool);
	var_794_bool = var_793_bool;
	if(var_794_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_998(var_0_object, var_94_bool)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	GetDirection(var_97_cvector);
	var_99_cvector = CVector(0,0,0); var_100_object = Obj();
	var_100_object = var_0_object;
	func_3991(var_99_cvector, var_100_object);
	var_99_cvector = var_98_cvector;
	var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0);
	var_97_cvector = var_106_cvector;
	var_98_cvector = var_107_cvector;
	func_4533(var_105_float, var_106_cvector, var_107_cvector);
	var_94_bool = var_105_float >= (float)-0.3420201241970062;
	return 4;
}


func_5097(var_92_object)
{
	Trace("changing state to c_iStateRetreatPDamage");
	var_94_int = GlobalVars[2];
	GlobalVars[2] = (int)7;
	var_95_object = GlobalVars[4];
	var_92_object = var_95_object;
	GlobalVars[4] = var_95_object;
	return 0;
}


func_2027()
{
	StopGroup0();
	return 0;
}


func_4589(var_149_string, var_150_int)
{
	var_151_string = ""; var_152_string = "";
	var_153_int = var_150_int;
	if(var_153_int != 0) {
		"idle" = "idle" + var_150_int;
	}
	var_152_string = var_149_string;
	return 2;
}


func_3569(var_0_object, var_5_object, var_1000_bool)
{
	var_1001_object = Obj(); var_1002_bool = 0; var_1003_float = 0; var_1004_cvector = CVector(0,0,0); var_1005_cvector = CVector(0,0,0); var_1006_object = Obj(); var_1007_bool = 0; var_1008_float = 0; var_1009_cvector = CVector(0,0,0); var_1010_cvector = CVector(0,0,0);
	GetScene(var_1006_object);
	var_1007_bool = 0;
	
Label_3573:
	var_1011_cvector = CVector(0,0,0); var_1012_object = Obj();
	var_1012_object = var_0_object;
	func_3991(var_1011_cvector, var_1012_object);
	var_1017_int = -var_1011_cvector;
	FindDirLength(var_1008_float, var_1017_int, var_5_object);
	var_1018_bool = var_1008_float < var_5_object;
	if(var_1018_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_1009_cvector);
		GetPFPosition(var_1010_cvector);
		WaitForAnimEnd();
		func_3657(var_1010_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_1007_bool = 1;
		var_1022_bool = 0;
		func_3519(var_1010_cvector, var_1022_bool);
		var_1023_bool = var_1022_bool == 0; //@nz
		if(var_1023_bool != 0) {
			goto Label_3611;
		}
		goto Label_3573;
	}
Label_3611:
	var_1007_bool = var_1000_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_4596(var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0;
	var_146_int = 0;
	
Label_4598:
	var_149_string = ""; var_150_int = 0;
	var_146_int = var_150_int;
	func_4589(var_149_string, var_150_int);
	HasAnimation(var_147_bool, "all", var_149_string);
	var_154_bool = var_147_bool == 0; //@nz
	if(var_154_bool != 0) {
	} else {
		var_146_int = var_146_int + (int)1;
		goto Label_4598;
	}
	var_146_int = var_143_int;
	return 4;
	
}


func_1014()
{
	var_320_object = Obj(); var_321_object = Obj();
	
Label_1015:
	if((bool)1 != 0) {
		FindActor(var_321_object, "player");
		var_324_bool = 0; var_325_object = Obj();
		var_321_object = var_325_object;
		func_4137(var_324_bool, var_325_object);
		var_326_bool = var_324_bool == 0; //@nz
		if(var_326_bool != 0) {
			Sleep((int)3);
			var_328_string = var_3_string;
			if(var_328_string != 0) {
				goto Label_1043;
			EMIT "GOTO 0x40a";
	}
		Label_1043:
			goto Label_1015;
		}
		return 2;
	}
	var_329_object = Obj();
	var_321_object = var_329_object;
	func_1085(var_319_bool, var_320_object, var_321_object, var_329_object);
	var_398_string = var_3_string;
	if(var_398_string != 0) {
		goto Label_1043;
	}
	var_321_object = 0;
	goto Label_1015;
}


