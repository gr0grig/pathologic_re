// @IMPORTS: RemoveActor/1,Hold/0,StopGroup0/0,sync/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SetRTEnvelope/2,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,SetTimer/2,SetAttackState/1,CanSee/2,WaitForAnimEnd/1,Sleep/1,Trace/1,ReportAttack/1,SendPlayerEnemy/2,GetGeometryLocator/4,GetScene/1,AddActorByType/6,PlayGlobalSound/4,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,FindActor/2,IsPlayerActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,RotateAsync/2,GetEyesHeight/1,IsLoaded/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,AddItem/3,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectSet/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,PlayGlobalMusic/1,BroadcastMessage/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/4,ResetAAS/0,ReportReputationChange/3
// @STRINGS: W:cleanup|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:hunt|W:attack_off|W:@Stop hunt|W:attack_begin1|W:attack|W:light-dynamic|W:soldier_fire.xml|W:shot|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|A:in|W:quest_d10_01|W:soldier_fight|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:Can't find lsh animation : |W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:battle|W:d10q01SoldierTalk|W:ood10MSoldier1|W:ood10MSoldier2|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rifle_ammo|W:rusk|W:bandage|W:tourniquet|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|W:reputation|W:bomber|W:hunter|W:grabitel|W:disease|W:dog|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:object:,1:object:
// @RUN_OP: 0x49d
// @RUN_TASK: 6
// @TASK_0: vars= params=0
// @EVENT_26: op=0x0 vars=string
// @EVENT_5: op=0x14 vars=
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xef vars=int,int
// @TASK_3: vars= params=1
// @EVENT_0: op=0x240 vars=object
// @EVENT_22: op=0x2bf vars=object,int,float,float
// @EVENT_16: op=0x2c1 vars=object,string
// @EVENT_41: op=0x2c3 vars=object
// @TASK_4: vars=object params=1
// @EVENT_41: op=0x2e5 vars=object
// @EVENT_3: op=0x2ee vars=object
// @EVENT_4: op=0x2f7 vars=object
// @EVENT_17: op=0x303 vars=object
// @EVENT_30: op=0x317 vars=object,object,bool
// @EVENT_1: op=0x324 vars=object
// @EVENT_7: op=0x332 vars=int
// @TASK_5: vars=object,object,bool params=2
// @EVENT_3: op=0x3cd vars=object
// @EVENT_1: op=0x3db vars=object
// @EVENT_17: op=0x46d vars=object
// @EVENT_30: op=0x485 vars=object,object,bool
// @TASK_6: vars=cvector,cvector,bool params=0
// @EVENT_0: op=0x4ab vars=object
// @EVENT_26: op=0x4b6 vars=string
// @EVENT_17: op=0x4cc vars=object
// @EVENT_30: op=0x4d3 vars=object,object,bool
// @EVENT_3: op=0x4d5 vars=object
// @EVENT_1: op=0x4f5 vars=object
// @STANDALONE_EVENT_22: op=0x95c vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x964 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x96e vars=object,string
// @STANDALONE_EVENT_41: op=0x97b vars=object
// @STANDALONE_EVENT_6: op=0xadc vars=
// @PE: 0x0,0x63,0xd9,0xef,0x220,0x231,0x2a5,0x2bf,0x2c1,0x2c3,0x2e5,0x2ee,0x2f7,0x303,0x317,0x324,0x332,0x3cd,0x3db,0x46d,0x485,0x492,0x4cc,0x4d3,0x4ec,0x4f5,0x55d,0x771,0x7dc,0x7e3,0x7f9,0x802,0x80c,0x853,0x859,0x85f,0x865,0x86a,0x871,0x87d,0x8d6,0x954,0x95c,0x964,0x97b,0xa1c,0xa3f,0xab0,0xae4

task_0_event_26(var_0_string, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_14_bool = var_12_bool == "cleanup";
	if(var_14_bool != 0) {
		var_15_object = Obj();
		func_1992(var_15_object);
		RemoveActor(var_15_object);
		Hold();
	}
	return 0;
}


task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_bool)
{
	if((int)1 != 0) {
		func_1831();
		var_17_bool = var_13_bool == (int)41529;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_2149();
		}
		var_44_bool = var_13_bool == (int)16575;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_2149();
		}
		var_48_bool = var_13_bool == (int)16583;
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_2154();
		}
		var_58_bool = var_12_cvector == (int)16570;
		if(var_58_bool != 0) {
			var_59_bool = 0; var_60_object = Obj();
			var_60_object = var_1_object;
			func_2161(var_60_object);
			if(var_59_bool != 0) {
				var_67_object = Obj(); var_68_object = Obj();
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_2137();
				var_71_object = Obj(); var_72_object = Obj();
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_2131();
				var_75_string = "";
				func_217(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)515453);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)515454, (int)16572, (int)16571);
				@@@var_0_object:AddReply((int)539571, (int)41513, (int)41512);
				return 0;
			}
			var_99_bool = 0; var_100_object = Obj();
			var_100_object = var_1_object;
			func_2173(var_100_object);
			if(var_99_bool != 0) {
				var_105_object = Obj(); var_106_object = Obj();
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_2143();
				var_109_string = "";
				func_217(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)515459);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)515460, (int)41515, (int)16577);
				@@@var_0_object:AddReply((int)539577, (int)41519, (int)41518);
				return 0;
			}
			var_117_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515465);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515466, (int)-1, (int)16583);
			return 0;
		}
		var_123_bool = var_12_cvector == (int)41515;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539574);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539575, (int)41519, (int)41516);
			@@@var_0_object:AddReply((int)539576, (int)41519, (int)41517);
			return 0;
		}
		var_133_bool = var_12_cvector == (int)41519;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539579, (int)-1, (int)41522);
			@@@var_0_object:AddReply((int)539580, (int)-1, (int)41523);
			return 0;
		}
		var_143_bool = var_12_cvector == (int)41513;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539878, (int)41840, (int)41833);
			@@@var_0_object:AddReply((int)539573, (int)16572, (int)41514);
			return 0;
		}
		var_153_bool = var_12_cvector == (int)16572;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515456, (int)16574, (int)16573);
			@@@var_0_object:AddReply((int)539581, (int)16574, (int)41525);
			return 0;
		}
		var_163_bool = var_12_cvector == (int)16574;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539582, (int)41528, (int)41527);
			@@@var_0_object:AddReply((int)539880, (int)41836, (int)41835);
			return 0;
		}
		var_173_bool = var_12_cvector == (int)41836;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539882, (int)41528, (int)41837);
			@@@var_0_object:AddReply((int)539883, (int)41840, (int)41839);
			return 0;
		}
		var_183_bool = var_12_cvector == (int)41840;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539885, (int)41528, (int)41842);
			return 0;
		}
		var_190_bool = var_12_cvector == (int)41528;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_217(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539584, (int)-1, (int)41529);
			@@@var_0_object:AddReply((int)515458, (int)-1, (int)16575);
			return 0;
		}
		var_3_string = true;
		var_199_bool = 0;
		func_2802(var_199_bool);
		if(var_199_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf0";
	
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsOverrideActive(var_14_bool);
	var_15_bool = var_14_bool == 0; //@nz
	if(var_15_bool != 0) {
		var_16_object = Obj();
		var_12_bool = var_16_object;
		func_2262(var_16_object);
	}
	return 2;
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	return 0;
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_bool)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	func_733();
	var_12_bool = Obj();
	func_2427();
	return 0;
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = var_12_bool == var_0_object;
	if(var_13_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_4_event_4(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = var_12_bool == var_0_object;
	if(var_13_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_16_object = Obj();
		var_16_object = var_0_object;
		func_1690(var_16_object);
	}
	return 0;
}


	task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_101_object)
	{
	var_102_bool = 0; var_103_object = Obj();
	var_101_object = var_103_object;
	func_1540(var_102_bool, var_103_object);
	var_130_bool = var_102_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_131_object = Obj();
		var_101_object = var_131_object;
		func_2599(var_131_object);
		return 0;
	}
	func_733();
	var_147_object = Obj();
	var_101_object = var_147_object;
	func_2623(var_147_object);
	return 0;
	}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0;
	var_12_cvector = var_16_object;
	var_13_cvector = var_17_object;
	var_14_bool = var_18_bool;
	func_2742(var_15_bool, var_16_object, var_17_object, var_18_bool);
	if(var_15_bool != 0) {
		var_12_cvector = Obj();
		func_771();
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_bool = var_14_object;
	func_2714(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_733();
		var_133_object = Obj();
		var_12_bool = var_133_object;
		func_2736(var_133_object);
	}
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_14_bool = var_12_bool != (int)100;
	if(var_14_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


task_5_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		var_15_bool = var_12_bool == var_0_object;
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_16_object = Obj();
		var_16_object = var_0_object;
		func_1690(var_16_object);
	}
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		var_15_bool = var_12_bool == var_0_object;
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_101_object)
	{
	var_102_bool = 0; var_103_object = Obj();
	var_101_object = var_103_object;
	func_1540(var_102_bool, var_103_object);
	var_130_bool = var_102_bool == 0; //@nz
	if(var_130_bool != 0) {
		return 0;
	}
	var_131_object = Obj();
	var_101_object = var_131_object;
	func_2599(var_131_object);
	var_146_bool = var_101_object == var_0_object;
	if(var_146_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_101_object;
		var_147_object = var_2_object;
		if(var_147_object == 0) goto Label_1156;
		StopAnimation();
		StopGroup0();
	}
Label_1156:
	return 0;
	
	}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0;
	var_12_cvector = var_16_object;
	var_13_cvector = var_17_object;
	var_14_bool = var_18_bool;
	func_2742(var_15_bool, var_16_object, var_17_object, var_18_bool);
	if(var_15_bool != 0) {
		var_12_cvector = Obj();
		func_1133();
	}
	return 0;
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	var_15_object = GlobalVars[0];
	@@var_15_object:in(var_14_bool, var_12_object);
	var_16_bool = var_14_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_17_object = Obj();
		var_12_object = var_17_object;
		func_1170(var_17_object);
	}
	return 2;
}


task_6_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj();
	var_16_bool = var_12_string == "attack";
	if(var_16_bool != 0) {
		func_1402(Obj());
		var_17_object = var_14_object;
		func_1367();
		var_21_object = Obj();
		var_14_object = var_21_object;
		func_2623(var_21_object);
		var_14_object = 0;
	} else {
		var_295_bool = var_12_string == "cleanup";
		if(var_295_bool == 0) goto Label_1227;
		var_2_object = true;
	}
Label_1227:
	return 2;
	
}


task_6_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_string = ""; var_15_string = "";
	func_2099(var_13_bool, "quest_d10_01", "soldier_fight");
	return 0;
}


task_6_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	return 0;
}


task_6_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	var_15_bool = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_1540(var_15_bool, var_16_object);
	var_49_bool = var_15_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 2;
	}
	var_50_object = GlobalVars[0];
	@@var_50_object:in(var_14_bool, var_12_object);
	var_51_bool = var_14_bool;
	if(var_51_bool != 0) {
		func_1367();
		var_52_object = Obj();
		var_12_object = var_52_object;
		TaskCall(4);
		func_709(var_53_object, var_52_object);
		TaskReturn();
	}
	return 2;
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_2714(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_1367();
		var_132_object = Obj();
		var_12_object = var_132_object;
		func_2768(var_132_object);
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0;
	var_12_object = var_16_object;
	var_13_int = var_17_int;
	var_14_float = var_18_float;
	func_1608(var_16_object, var_17_int, var_18_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_12_object = var_18_object;
	var_13_int = var_19_int;
	var_14_float = var_20_float;
	var_16_cvector = var_21_cvector;
	var_17_cvector = var_22_cvector;
	func_1676(var_20_float, var_21_cvector, var_22_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0;
	var_17_bool = var_13_string == "health";
	if(var_17_bool != 0) {
		GetProperty("health", var_15_float);
		var_20_bool = var_15_float <= (int)0;
		if(var_20_bool != 0) {
			SignalDeath(var_12_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1409(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		var_17_object = Obj();
		func_1992(var_17_object);
		ReportReputationChange(var_12_object, var_17_object, (float)0.0, (bool)1);
	}
	var_22_object = Obj();
	var_12_object = var_22_object;
	func_2788(var_22_object);
	return 0;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_object = Obj();
	func_1992(var_12_object);
	RemoveActor(var_12_object);
	Hold();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0;
	func_1708(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		TaskCall(0);
		func_12();
		TaskReturn();
	}
	func_1260();
	return 0;
}


func_2050(var_219_float, var_220_cvector)
{
	var_221_float = GetByIndex(var_220_cvector, 0);
	var_222_float = GetByIndex(var_220_cvector, 0);
	var_223_float = var_221_float * var_222_float;
	var_224_float = GetByIndex(var_220_cvector, 2);
	var_225_float = GetByIndex(var_220_cvector, 2);
	var_226_float = var_224_float * var_225_float;
	var_227_int = var_223_float + var_226_float;
	var_219_float = sqrt(var_227_int);
	return 0;
}


func_1540(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_18_object = var_22_object;
	func_1504(var_21_bool, var_22_object);
	var_38_bool = var_21_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_18_object = var_40_object;
	func_1414(var_39_bool, var_40_object, "noaccess");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_17_bool = 1;
		return 2;
	}
	@@var_18_object:GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == (int)0;
	return 2;
}


func_2060(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0);
	var_208_cvector = var_211_cvector;
	var_209_cvector = var_212_cvector;
	func_2041(var_210_float, var_211_cvector, var_212_cvector);
	var_219_float = 0; var_220_cvector = CVector(0,0,0);
	var_208_cvector = var_220_cvector;
	func_2050(var_219_float, var_220_cvector);
	var_228_float = 0; var_229_cvector = CVector(0,0,0);
	var_209_cvector = var_229_cvector;
	func_2050(var_228_float, var_229_cvector);
	var_230_float = var_219_float * var_228_float;
	var_207_float = var_210_float / var_230_float;
	return 0;
}


func_12()
{
	
Label_12:
	Hold();
	var_16_bool = 0;
	func_1708(var_16_bool);
	var_17_bool = var_16_bool == 0; //@nz
	if(var_17_bool == 1) goto Label_12;
	return 0;
}


func_2581()
{
	var_18_object = GlobalVars[0];
	func_2035(Obj());
	var_19_object = var_18_object;
	GlobalVars[0] = var_18_object;
	return 0;
}


func_25(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_0_object = var_19_object;
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0;
	var_19_object = var_30_object;
	func_1713(var_29_bool, var_30_object, (float)70.0);
	var_76_bool = var_29_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	CreateDialog(var_25_object);
	var_77_int = 0;
	func_2796(var_77_int);
	@@var_25_object:SetNPCName(var_77_int);
	var_78_int = 0;
	func_2794(var_78_int);
	@@var_25_object:SetNPCDescription(var_78_int);
	var_79_string = "";
	func_2798(var_79_string);
	@@var_25_object:SetPhoto(var_79_string);
	var_80_string = "";
	func_2800(var_80_string);
	@@var_25_object:SetPhoto2(var_80_string);
	var_81_int = 0;
	func_2239(var_81_int);
	@@var_25_object:SetPlayerName(var_81_int);
	IsOverrideActive(var_26_bool);
	var_89_bool = var_26_bool;
	if(var_89_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	DoDialog(var_25_object);
	var_90_object = Obj(); var_91_object = Obj();
	var_19_object = var_90_object;
	var_25_object = var_91_object;
	TaskCall(2);
	func_99(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	@@var_25_object:IsDialogEnd(var_28_bool);
	
Label_81:
	var_178_bool = var_28_bool == 0; //@nz
	if(var_178_bool != 0) {
		sync();
		@@var_25_object:IsDialogEnd(var_28_bool);
		goto Label_81;
	}
	var_19_object = Obj();
	func_1782();
	StopDialog(var_25_object);
	@@var_25_object:GetReturnValue((int)-1);
	var_27_int = var_18_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2588(var_137_object, var_138_bool)
{
	var_139_object = Obj(); var_140_bool = 0;
	var_137_object = var_139_object;
	var_138_bool = var_140_bool;
	TaskCall(5);
	func_829(var_141_object, var_142_object, var_143_bool, var_139_object, var_140_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_2077(var_99_int, var_100_string)
{
	var_101_int = 0; var_102_int = 0;
	GetVariable(var_100_string, var_102_int);
	var_102_int = var_99_int;
	return 2;
}


func_1564(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = "";
	var_44_bool = var_29_object == 0; //@ne
	if(var_44_bool != 0) {
		return 14;
	}
	IsDead(var_37_bool);
	var_45_bool = var_37_bool;
	if(var_45_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_38_int);
	var_47_bool = var_38_int < (int)0;
	if(var_47_bool != 0) {
		return 14;
	}
	@@var_29_object:GetPosition(var_39_cvector);
	GetPosition(var_40_cvector);
	GetDirection(var_41_cvector);
	var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_50_float = var_48_float * var_49_float;
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	var_53_float = var_51_float * var_52_float;
	var_54_int = var_50_float + var_53_float;
	var_56_bool = var_54_int >= (int)0;
	if(var_56_bool != 0) {
		var_43_string = "fhit";
	} else {
		var_43_string = "bhit";
	}
	var_59_int = var_43_string + "1";
	var_61_int = var_43_string + "2";
	FadeSecondaryAnimation("hit_react", var_59_int, var_61_int, (int)-10);
	return 14;
	
}


func_544(var_24_object)
{
	var_25_bool = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	func_1409(var_25_bool, var_26_object);
	if(var_25_bool != 0) {
		func_2347();
	}
	func_2323();
	var_103_object = Obj();
	var_24_object = var_103_object;
	func_561(var_103_object);
	return 0;
}


func_2082(var_308_float)
{
	var_309_object = Obj(); var_310_object = Obj();
	CreateFloatVector(var_310_object);
	@@var_310_object:add(var_308_float);
	var_312_bool = var_308_float < (int)0;
	if(var_312_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_310_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2599(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	var_25_bool = var_22_object == 0; //@ne
	if(var_25_bool != 0) {
		return 2;
	}
	var_26_object = GlobalVars[0];
	@@var_26_object:in(var_24_bool, var_22_object);
	var_27_bool = var_24_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_28_object = GlobalVars[0];
		@@var_28_object:add(var_22_object);
	}
	var_29_bool = 0; var_30_object = Obj();
	var_22_object = var_30_object;
	func_1409(var_29_bool, var_30_object);
	if(var_29_bool != 0) {
		var_33_object = Obj();
		func_1992(var_33_object);
		ReportReputationChange(var_22_object, var_33_object, (float)0.0);
	}
	return 2;
}


func_561(var_103_object)
{
	EventDisable(0);
	var_104_object = Obj();
	var_103_object = var_104_object;
	func_586(var_104_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_572:
	Hold();
	goto Label_572;
}
EMIT "Return(); Pop(0)";


func_2099(var_13_bool, var_14_string, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj();
	FindActor(var_17_object, var_14_string);
	var_18_bool = var_17_object == 0; //@ne
	if(var_18_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	Trigger(var_17_object, var_15_string);
	var_13_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2623(var_21_object)
{
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_2599(var_22_object);
	var_37_object = Obj(); var_38_bool = 0;
	var_21_object = var_37_object;
	func_2588(var_37_object, (bool)1);
	return 0;
}


func_2111(var_148_object)
{
	var_149_bool = 0; var_150_bool = 0;
	IsPlayerActor(var_148_object, var_150_bool);
	var_151_bool = var_150_bool;
	if(var_151_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2120()
{
	var_153_object = Obj(); var_154_object = Obj();
	GetScene(var_154_object);
	var_156_object = Obj();
	func_1992(var_156_object);
	BroadcastMessage("battle", var_156_object, var_154_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1608(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_bool = 0;
	var_38_bool = 0;
	var_39_object = var_16_object;
	if(var_39_object != 0) {
		var_41_bool = var_17_int != (int)4;
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_43_bool = var_17_int != (int)5;
		if(var_43_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
		var_46_cvector = CVector(0,0,0); var_47_object = Obj();
		var_16_object = var_47_object;
		func_1387(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_1998(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		CreateVectorVector(var_29_object);
		var_30_int = 1;

	Label_1637:
		var_58_int = "hit" + var_30_int;
		GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector);
		var_59_bool = var_31_bool == 0; //@nz
		if(var_59_bool != 0) {
		} else {
			var_107_int = var_33_cvector | var_28_cvector;
			var_109_bool = var_107_int >= (float)0.7071067690849304;
			if(var_109_bool != 0) {
				@@var_29_object:add(var_32_cvector);
			}
			var_30_int = var_30_int + (int)1;
			goto Label_1637;
		}
		@@var_29_object:size(var_34_int);
		var_60_int = var_34_int;
		if(var_60_int != 0) {
			irand(var_35_int, var_34_int);
			@@var_29_object:get(var_36_cvector, var_35_int);
			var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
			var_16_object = var_61_object;
			var_17_int = var_62_int;
			var_18_float = var_63_float;
			var_36_cvector = var_64_cvector;
			var_65_cvector = -var_28_cvector;
			func_1676(var_63_float, var_64_cvector, var_65_cvector);
			return 18;
		}
		var_29_object = 0;
	}
	var_106_object = Obj();
	var_16_object = var_106_object;
	func_1564(var_106_object);
	return 18;
	
}


func_586(var_104_object)
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_string = ""; var_110_object = Obj(); var_111_bool = 0; var_112_bool = 0; var_113_float = 0; var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_string = ""; var_120_object = Obj(); var_121_bool = 0; var_122_bool = 0; var_123_float = 0; var_124_cvector = CVector(0,0,0);
	var_125_bool = var_104_object == 0; //@ne
	if(var_125_bool != 0) {
		var_126_string = "";
		func_677("fdie");
	} else {
		@@var_104_object:GetPosition(var_115_cvector);
		GetPosition(var_116_cvector);
		GetDirection(var_117_cvector);
		var_118_cvector = var_116_cvector - var_115_cvector;
		var_158_float = GetByIndex(var_118_cvector, 0);
		var_159_float = GetByIndex(var_117_cvector, 0);
		var_160_float = var_158_float * var_159_float;
		var_161_float = GetByIndex(var_118_cvector, 2);
		var_162_float = GetByIndex(var_117_cvector, 2);
		var_163_float = var_161_float * var_162_float;
		var_164_int = var_160_float + var_163_float;
		var_166_bool = var_164_int >= (int)0;
		if(var_166_bool != 0) {
			var_119_string = "fdie";
		} else {
				var_119_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_104_object = var_120_object;
		var_169_bool = IsFuncExist(var_104_object, "GetScriptProperty", (int)2);
		if(var_169_bool != 0) {
			@@var_104_object:HasScriptProperty(var_121_bool, "Owner");
			var_171_bool = var_121_bool;
			if(var_171_bool != 0) {
				@@var_104_object:GetScriptProperty(var_120_object, "Owner");
				var_173_bool = var_120_object == 0; //@ne
				if(var_173_bool != 0) {
					var_104_object = var_120_object;
				}
			}
		}
		var_176_bool = IsFuncExist(var_120_object, "@GetEyesHeight", (int)1);
		if(var_176_bool != 0) {
			@@var_120_object:GetEyesHeight(var_123_float);
			var_124_cvector = CVector(0.0, 0.0, 0.0);
			var_177_float = GetByIndex(var_124_cvector, 1);
			var_123_float = var_177_float;
			SetByIndex(var_124_cvector, 1) = var_177_float;
			LookAsync(var_104_object, "head", var_124_cvector);
			var_122_bool = 1;
		} else {
			var_122_bool = 0;

		}
		var_179_string = "";
		var_119_string = var_179_string;
		func_1864(var_179_string);
		PlayAnimation("all", var_119_string);
		WaitForAnimEnd();
		var_181_bool = var_122_bool;
		if(var_181_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_119_string);
		RemoveEnvelope();
		var_120_object = 0;
	}
	return 20;
	
}


func_2634(var_54_bool, var_55_object)
{
	var_56_float = 0; var_57_string = ""; var_58_float = 0; var_59_float = 0; var_60_string = ""; var_61_float = 0;
	var_62_bool = 0; var_63_object = Obj();
	var_55_object = var_63_object;
	func_1540(var_62_bool, var_63_object);
	var_64_bool = var_62_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_54_bool = 0;
		return 6;
	}
	var_65_bool = 0; var_66_object = Obj();
	var_55_object = var_66_object;
	func_1409(var_65_bool, var_66_object);
	if(var_65_bool != 0) {
		@@var_55_object:GetProperty("reputation", var_59_float);
		var_54_bool = var_59_float < (float)0.33000001311302185;
		return 6;
	}
	var_71_bool = 0; var_72_object = Obj(); var_73_string = "";
	var_55_object = var_72_object;
	func_1414(var_71_bool, var_72_object, "class");
	var_74_bool = var_71_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_54_bool = 0;
		return 6;
	}
	@@var_55_object:GetProperty("class", var_60_string);
	var_76_bool = 0;
	var_76_bool = 1;
	var_77_bool = 0;
	var_77_bool = 1;
	var_79_bool = var_60_string == "bomber";
	if(var_79_bool != 1) {
		var_81_bool = var_60_string == "hunter";
		if(var_81_bool != 1) {
			var_77_bool = 0;
		}
	}
	if(var_77_bool != 1) {
		var_83_bool = var_60_string == "grabitel";
		if(var_83_bool != 1) {
			var_76_bool = 0;
		}
	}
	if(var_76_bool != 0) {
		var_54_bool = 1;
		return 6;
	}
	var_84_bool = 0; var_85_object = Obj(); var_86_string = "";
	var_55_object = var_85_object;
	func_1414(var_84_bool, var_85_object, "disease");
	var_87_bool = var_84_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_54_bool = 0;
		return 6;
	}
	var_88_bool = 0;
	var_88_bool = 1;
	var_89_bool = 0; var_90_string = "";
	var_60_string = var_90_string;
	func_1905(var_89_bool, var_90_string);
	if(var_89_bool != 1) {
		var_129_bool = var_60_string == "dog";
		if(var_129_bool != 1) {
			var_88_bool = 0;
		}
	}
	if(var_88_bool != 0) {
		@@var_55_object:GetProperty("disease", var_61_float);
		var_54_bool = var_61_float > (int)0;
		return 6;
	}
	var_54_bool = 0;
	return 6;
}


func_2131()
{
	SetVariable("d10q01SoldierTalk", (int)1);
	return 0;
}


func_2137()
{
	SetVariable("ood10MSoldier1", (int)1);
	return 0;
}


func_2143()
{
	SetVariable("ood10MSoldier2", (int)1);
	return 0;
}


func_99(var_0_object, var_1_object, var_2_object, var_3_string, var_90_object, var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_97_bool = 0; var_98_object = Obj();
		var_98_object = var_1_object;
		func_2161(var_98_object);
		if(var_97_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_2137();
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_2131();
			var_113_string = "";
			func_217(var_91_object, "Neutral");
			@@@var_0_object:SetMessage((int)515453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515454, (int)16572, (int)16571);
			@@@var_0_object:AddReply((int)539571, (int)41513, (int)41512);
		} else {
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_2173(var_156_object);
				if(var_155_bool != 0) {
					var_161_object = Obj(); var_162_object = Obj();
					var_161_object = var_1_object;
					var_162_object = var_0_object;
					func_2143();
					var_165_string = "";
					func_217(var_91_object, "Neutral");
					@@@var_0_object:SetMessage((int)515459);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)515460, (int)41515, (int)16577);
					@@@var_0_object:AddReply((int)539577, (int)41519, (int)41518);
					goto Label_187;
				}
				var_173_string = "";
				func_217(var_91_object, "Neutral");
				@@@var_0_object:SetMessage((int)515465);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)515466, (int)-1, (int)16583);
				goto Label_187;
		}
	}
Label_187:
	var_137_bool = 0;
	func_2802(var_137_bool);
	if(var_137_bool != 0) {

	Label_191:
		lshWaitForAnimEnd();
		var_138_string = var_3_string;
		if(var_138_string != 0) {
		} else {
			var_139_string = "";
			var_139_string = var_2_object;
			func_1800(var_139_string);
			goto Label_191;
	}
		PlayAnimation("all", "idle");

	Label_206:
		WaitForAnimEnd();
		var_152_string = var_3_string;
		if(var_152_string != 0) {
			goto Label_216;
		}
		PlayAnimation("all", "idle");
		goto Label_206;

	}
	goto Label_216;
	
Label_216:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x67";


func_2149()
{
	func_2185();
	return 0;
}


func_2154()
{
	var_51_bool = 0; var_52_string = ""; var_53_string = "";
	func_2099(var_51_bool, "quest_d10_01", "soldier_fight");
	return 0;
}


func_2161(var_97_bool)
{
	var_99_int = 0; var_100_string = "";
	func_2077(var_99_int, "ood10MSoldier1");
	var_104_bool = var_99_int == (int)0;
	if(var_104_bool != 0) {
		var_97_bool = 1;
		return 0;
	}
	var_97_bool = 0;
	return 0;
}


func_2173(var_155_bool)
{
	var_157_int = 0; var_158_string = "";
	func_2077(var_157_int, "ood10MSoldier2");
	var_160_bool = var_157_int == (int)0;
	if(var_160_bool != 0) {
		var_155_bool = 1;
		return 0;
	}
	var_155_bool = 0;
	return 0;
}


func_2185()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)188, (int)1, (int)515473);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_2211(var_25_bool, var_26_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1676(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	GetScene(var_25_object);
	AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	var_29_object = Obj();
	var_18_object = var_29_object;
	func_1564(var_29_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1170(var_17_object)
{
	func_1367();
	var_18_int = 0; var_19_object = Obj();
	var_17_object = var_19_object;
	TaskCall(1);
	func_25(var_20_object, var_18_int, var_19_object);
	TaskReturn();
	return 0;
}


func_2198(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	GetDiaryRoot(var_36_object);
	var_37_bool = var_36_object == 0; //@nz
	if(var_37_bool != 0) {
		Trace("Can't retrieve diary root");
		var_34_object = 0;
		return 2;
	}
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1690(var_331_object)
{
	var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0);
	@@var_331_object:GetPosition(var_335_cvector);
	GetPosition(var_336_cvector);
	var_337_cvector = var_335_cvector - var_336_cvector;
	var_338_float = GetByIndex(var_337_cvector, 0);
	var_339_float = GetByIndex(var_337_cvector, 2);
	RotateAsync(var_338_float, var_339_float);
	return 6;
}


func_2714(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_1540(var_17_bool, var_18_object);
	var_51_bool = var_17_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_52_object = GlobalVars[0];
	@@var_52_object:in(var_16_bool, var_14_object);
	var_53_bool = var_16_bool;
	if(var_53_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	var_54_bool = 0; var_55_object = Obj();
	var_14_object = var_55_object;
	func_2634(var_54_bool, var_55_object);
	var_54_bool = var_13_bool;
	return 2;
}


func_2211(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_2198(Obj());
	var_34_object = var_31_object;
	@@var_31_object:Find(var_27_int, var_32_object);
	var_39_bool = var_32_object == 0; //@nz
	if(var_39_bool != 0) {
		var_41_int = "Can't find diary parent with id: " + var_27_int;
		Trace(var_41_int);
		var_25_bool = 0;
		return 6;
	}
	@@var_32_object:AddChild(var_26_object);
	SendWorldWndMessage((int)7);
	@@var_26_object:GetCategory(var_33_int);
	SetDiarySection(var_33_int);
	var_25_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_677(var_126_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_127_string = "";
	var_126_string = var_127_string;
	func_1864(var_127_string);
	PlayAnimation("all", var_126_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_126_string);
	RemoveEnvelope();
	return 0;
}


func_1701(var_246_float, var_247_object)
{
	var_248_float = 0; var_249_float = 0; var_250_float = 0; var_251_float = 0;
	GetEyesHeight(var_250_float);
	@@var_247_object:GetEyesHeight(var_251_float);
	var_246_float = var_251_float - var_250_float;
	return 4;
}


func_1708(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_2736(var_133_object)
{
	var_134_object = Obj();
	var_133_object = var_134_object;
	func_2768(var_134_object);
	return 0;
}


func_1713(var_29_bool, var_30_object, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0;
	@@var_30_object:GetPosition(var_42_cvector);
	@@var_30_object:GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	var_50_float = var_50_float + var_41_float;
	SetByIndex(var_42_cvector, 1) = var_50_float;
	GetPosition(var_43_cvector);
	GetEyesHeight(var_41_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	var_51_float = var_51_float + var_41_float;
	SetByIndex(var_43_cvector, 1) = var_51_float;
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_54_float = sqrt(var_53_int);
	var_44_cvector = var_44_cvector / var_54_float;
	var_45_cvector = -var_44_cvector;
	var_55_float = var_44_cvector * var_31_float;
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	var_57_cvector = var_45_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1998(var_56_cvector, var_57_cvector);
	var_65_float = var_56_cvector * (int)25;
	var_66_int = var_55_float + var_65_float;
	var_46_cvector = var_66_int - CVector(0.0, 10.0, 0.0);
	var_47_cvector = var_43_cvector + var_46_cvector;
	IsOverrideActive(var_48_bool);
	var_68_bool = var_48_bool;
	if(var_68_bool != 0) {
		var_29_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_47_cvector, var_45_cvector, (bool)1);
	var_70_float = GetByIndex(var_46_cvector, 0);
	var_71_float = GetByIndex(var_46_cvector, 2);
	Rotate(var_70_float, var_71_float);
	var_72_bool = 0;
	func_2802(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		HasAnimationTrack(var_49_bool, "head");
		var_74_bool = var_49_bool;
		if(var_74_bool == 0) goto Label_1776;
		LookAsyncCamera("head");
	}
Label_1776:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_29_bool = 1;
	return 18;
	
}


func_2742(var_15_bool, var_16_object, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0;
	var_17_object = var_22_object;
	var_23_bool = !var_18_bool;
	func_2445(var_21_bool, var_22_object, var_23_bool);
	if(var_21_bool != 0) {
		CanSee(var_20_bool, var_16_object);
		var_89_bool = 0;
		var_89_bool = 1;
		var_90_bool = var_20_bool;
		if(var_90_bool != 1) {
			var_91_float = 0; var_92_object = Obj();
			var_16_object = var_92_object;
			func_1394(var_91_float, var_92_object);
			var_100_bool = var_91_float <= (float)490000.0;
			if(var_100_bool != 1) {
				var_89_bool = 0;
			}
		}
		if(var_89_bool != 0) {
			var_15_bool = 1;
			return 2;
		}
	}
	var_15_bool = 0;
	return 2;
}


func_2239(var_81_int)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable("branch", var_83_int);
	var_86_bool = var_83_int == (int)0;
	if(var_86_bool != 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x8ce";
	}
	var_88_bool = var_83_int == (int)1;
	if(var_88_bool != 0) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
	return 2;
}


func_709(var_0_object, var_52_object)
{
	var_54_bool = 0; var_55_bool = 0;
	var_0_object = var_52_object;
	Face(var_52_object);
	
Label_713:
	Sleep((float)0.5, var_55_bool);
	var_57_bool = 0;
	var_57_bool = 1;
	var_58_bool = var_55_bool == 0; //@nz
	if(var_58_bool != 1) {
		var_59_bool = 0; var_60_object = Obj();
		var_60_object = var_0_object;
		func_1540(var_59_bool, var_60_object);
		var_61_bool = var_59_bool == 0; //@nz
		if(var_61_bool != 1) {
			var_57_bool = 0;
		}
	}
	if(var_57_bool != 0) {
	} else {
		goto Label_713;
	}
	StopAsync();
	return 2;
	
}


func_2768(var_132_object)
{
	var_133_bool = 0; var_134_bool = 0;
	var_135_object = GlobalVars[0];
	@@var_135_object:in(var_134_bool, var_132_object);
	var_136_bool = var_134_bool;
	if(var_136_bool != 0) {
		var_137_object = Obj(); var_138_bool = 0;
		var_132_object = var_137_object;
		func_2588(var_137_object, (bool)1);
	}
	return 2;
}


func_2256(var_83_int)
{
	var_84_int = 0; var_85_int = 0;
	GetVariable("branch", var_85_int);
	var_85_int = var_83_int;
	return 2;
}


func_2262(var_16_object)
{
	var_17_int = 0;
	func_2256(var_17_int);
	var_22_bool = var_17_int == (int)1;
	if(var_22_bool != 0) {
		WorkWithCorpse(var_16_object);
	} else {
		Barter(var_16_object);
	}
	return 0;
	
}


func_217(var_2_object, var_113_string)
{
	var_114_bool = 0;
	func_2802(var_114_bool);
	var_115_bool = var_114_bool == 0; //@nz
	if(var_115_bool != 0) {
		return 0;
	}
	var_116_bool = var_113_string == var_2_object;
	if(var_116_bool != 0) {
		return 0;
	}
	var_117_string = ""; var_118_bool = 0;
	var_113_string = var_117_string;
	var_120_bool = var_113_string == "";
	if(var_120_bool != 0) {
		var_118_bool = 0;
	} else {
		var_118_bool = 1;
	}
	func_1816(var_117_string, var_118_bool);
	var_2_object = var_113_string;
	return 0;
	
}


func_733()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_2275(var_32_int, var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0;
	var_38_bool = var_32_int > var_33_int;
	if(var_38_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_36_int = 0;
	var_40_bool = var_32_int != var_33_int;
	if(var_40_bool != 0) {
		var_41_int = var_33_int - var_32_int;
		irand(var_36_int, var_41_int);
	} else {
		var_50_bool = var_32_int == (int)0;
		if(var_50_bool == 0) goto Label_2293;
		return 4;
	}
Label_2293:
	var_36_int = var_36_int + var_32_int;
	var_43_bool = var_36_int == (int)0;
	if(var_43_bool != 0) {
		return 4;
	}
	var_44_int = 0; var_45_string = "";
	func_2383(var_44_int, "Money");
	AddItem(var_37_bool, var_44_int, (int)0, var_36_int);
	return 4;
	
}


func_2788(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	func_2388(var_23_object);
	return 0;
}


func_2794(var_78_int)
{
	var_78_int = 515597;
	return 0;
}


func_2796(var_77_int)
{
	var_77_int = 514841;
	return 0;
}


func_1260()
{
	func_2581();
	
Label_1263:
	func_1283(var_10_cvector, var_11_bool);
	goto Label_1263;
}
EMIT "Return(); Pop(0)";


func_2798(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_2800(var_80_string)
{
	var_80_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_2802(var_72_bool)
{
	var_72_bool = 0;
	return 0;
}


func_1268()
{
	return 0;
}


func_1782()
{
	var_180_bool = 0; var_181_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_183_bool = 0;
	func_2802(var_183_bool);
	if(var_183_bool != 0) {
	} else {
		HasAnimationTrack(var_181_bool, "head");
		var_185_bool = var_181_bool;
		if(var_185_bool == 0) goto Label_1799;
		UnlookAsync("head");
	}
Label_1799:
	return 2;
	
}


func_2306(var_89_string)
{
	var_90_object = Obj(); var_91_int = 0; var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; var_95_bool = 0;
	CreateInvItem(var_93_object);
	@@var_93_object:SetItemName(var_89_string);
	@@var_93_object:SetProperty("Organ", (int)1);
	@@var_93_object:GetItemID(var_94_int);
	AddItem(var_95_bool, var_93_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1283(var_0_object, var_1_object)
{
	var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_1288:
	func_1372();
	irand(var_26_int, (int)10);
	var_32_int = var_26_int + (int)5;
	Sleep(var_32_int, var_27_bool);
	var_33_bool = var_27_bool;
	if(var_33_bool != 0) {
		func_1268();
	} else {
		func_1372();
		GetPFPosition(var_28_cvector);
		var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0);
		var_35_cvector = var_1_object;
		var_28_cvector = var_36_cvector;
		func_2008(var_34_float, var_35_cvector, var_36_cvector);
		var_40_bool = var_34_float > (int)40000;
		if(var_40_bool != 0) {
			FindPathTo(var_29_object, var_1_object);
			var_41_bool = var_29_object != 0; //@nn
			if(var_41_bool != 0) {
				RotatePath(var_29_object, var_27_bool);
				var_42_bool = var_27_bool == 0; //@nz
				if(var_42_bool != 0) {
				} else {
					FollowPath(var_29_object, (bool)0, var_27_bool);
					var_44_bool = var_27_bool == 0; //@nz
					if(var_44_bool != 0) {
						goto Label_1364;
					}
					var_45_float = GetByIndex(var_0_object, 0);
					var_46_float = GetByIndex(var_0_object, 2);
					Rotate(var_45_float, var_46_float, var_27_bool);
					var_47_bool = var_27_bool == 0; //@nz
					if(var_47_bool != 0) {
						goto Label_1364;
					}
					WaitForAnimEnd(var_27_bool);
					var_48_bool = var_27_bool == 0; //@nz
					if(var_48_bool != 0) {
						goto Label_1364;
					}
					goto Label_1365;
				EMIT "GOTO 0x545";
			}
				Sleep((int)1);
				var_29_object = 0;
				goto Label_1364;
		}
			var_50_float = GetByIndex(var_0_object, 0);
			var_51_float = GetByIndex(var_0_object, 2);
			Rotate(var_50_float, var_51_float, var_27_bool);
			var_52_bool = var_27_bool == 0; //@nz
			if(var_52_bool != 0) {
				goto Label_1364;
			}
			WaitForAnimEnd(var_27_bool);
			var_53_bool = var_27_bool == 0; //@nz
			if(var_53_bool != 0) {
				goto Label_1364;
			}
			goto Label_1365;
		}
	Label_1364:
		goto Label_1304;
	}
Label_1365:
	goto Label_1288;
	
}
EMIT "Return(); Pop(8)";


func_1800(var_139_string)
{
	var_140_bool = 0; var_141_float = 0; var_142_float = 0; var_143_bool = 0; var_144_float = 0; var_145_float = 0;
	lshHasAnimation(var_143_bool, var_139_string);
	var_146_bool = var_143_bool;
	if(var_146_bool != 0) {
		lshGetAnimTimes(var_139_string, var_144_float, var_145_float);
		lshPlayAnimation(var_144_float, var_145_float, (bool)0);
	} else {
		var_149_int = "Can't find lsh animation : " + var_139_string;
		Trace(var_149_int);
	}
	return 6;
	
}


func_2323()
{
	var_83_int = 0;
	func_2256(var_83_int);
	var_88_bool = var_83_int != (int)1;
	if(var_88_bool != 0) {
		return 0;
	}
	var_89_string = "";
	func_2306("liver");
	var_100_string = "";
	func_2306("kidney");
	var_101_string = "";
	func_2306("heart");
	var_102_string = "";
	func_2306("blood");
	return 0;
}


func_1816(var_117_string, var_118_bool)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0;
	lshHasAnimation(var_124_bool, var_117_string);
	var_127_bool = var_124_bool;
	if(var_127_bool != 0) {
		lshGetAnimTimes(var_117_string, var_125_float, var_126_float);
		lshPlayAnimation(var_125_float, var_126_float, var_118_bool);
	} else {
		var_129_int = "Can't find lsh animation : " + var_117_string;
		Trace(var_129_int);
	}
	return 6;
	
}


func_1831()
{
	var_15_bool = 0;
	func_2802(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2347()
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	ClearSubContainer((int)0);
	var_32_int = 0; var_33_int = 0;
	func_2275((int)500, (int)1000);
	var_51_string = ""; var_52_int = 0; var_53_int = 0; var_54_int = 0;
	func_1849("rifle_ammo", (int)1, (int)3, (int)3);
	var_67_string = ""; var_68_int = 0; var_69_int = 0; var_70_int = 0;
	func_1849("rusk", (int)1, (int)3, (int)2);
	var_71_string = ""; var_72_int = 0; var_73_int = 0;
	func_1838("bandage", (int)1, (int)6);
	var_80_string = ""; var_81_int = 0; var_82_int = 0;
	func_1838("tourniquet", (int)1, (int)6);
	return 4;
}


func_1838(var_71_string, var_72_int, var_73_int)
{
	var_74_bool = 0; var_75_bool = 0;
	var_76_bool = 0; var_77_int = 0; var_78_int = 0;
	var_72_int = var_77_int;
	var_73_int = var_78_int;
	func_2030(var_76_bool, var_77_int, var_78_int);
	if(var_76_bool != 0) {
		AddItem(var_75_bool, var_71_string, (int)0);
	}
	return 2;
}


func_1849(var_51_string, var_52_int, var_53_int, var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_59_bool = 0; var_60_int = 0; var_61_int = 0;
	var_52_int = var_60_int;
	var_53_int = var_61_int;
	func_2030(var_59_bool, var_60_int, var_61_int);
	if(var_59_bool != 0) {
		irand(var_57_int, var_54_int);
		var_66_int = var_57_int + (int)1;
		AddItem(var_58_bool, var_51_string, (int)0, var_66_int);
	}
	return 4;
}


func_829(var_0_object, var_1_object, var_2_object, var_139_object, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0;
	var_0_object = var_139_object;
	var_148_object = Obj();
	var_148_object = var_0_object;
	func_2111(var_148_object);
	func_2120();
	Face(var_0_object);
	var_159_bool = var_140_bool;
	if(var_159_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_855:
	var_165_bool = 0; var_166_object = Obj();
	var_166_object = var_0_object;
	func_1540(var_165_bool, var_166_object);
	if(var_165_bool != 0) {
		CanSee(var_147_bool, var_0_object);
		var_167_bool = var_147_bool;
		if(var_167_bool != 0) {
			var_168_object = Obj();
			var_168_object = var_0_object;
			func_2111(var_168_object);
			func_1009(var_147_bool);
		} else {
				var_331_object = Obj();
				var_331_object = var_0_object;
				func_1690(var_331_object);
				var_2_object = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_146_bool);
				var_342_bool = var_146_bool == 0; //@nz
				if(var_342_bool != 0) {
					var_343_bool = var_1_object != 0; //@nn
					if(var_343_bool != 0) {
						func_1004(var_146_bool, var_147_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_855;
				}
				var_346_bool = 0; var_347_object = Obj();
				var_347_object = var_0_object;
				func_1540(var_346_bool, var_347_object);
				var_348_bool = var_346_bool == 0; //@nz
				if(var_348_bool != 0) {
				} else {
					CanSee(var_147_bool, var_0_object);
					var_352_bool = var_147_bool;
					if(var_352_bool != 0) {
						var_2_object = false;
						Face(var_0_object);
						func_1009(var_147_bool);
						goto Label_951;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_146_bool);
					var_356_bool = var_146_bool == 0; //@nz
					if(var_356_bool != 0) {
						var_357_bool = var_1_object != 0; //@nn
						if(var_357_bool != 0) {
							func_1004(var_146_bool, var_147_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_855;
					}
					var_360_bool = 0; var_361_object = Obj();
					var_361_object = var_0_object;
					func_1540(var_360_bool, var_361_object);
					var_362_bool = var_360_bool == 0; //@nz
					if(var_362_bool != 0) {
						goto Label_961;
					}
					var_2_object = false;
					CanSee(var_147_bool, var_0_object);
					var_363_bool = var_147_bool;
					if(var_363_bool != 0) {
						Face(var_0_object);
						func_1009(var_147_bool);
						goto Label_951;
					}
					goto Label_961;
				}
	}
		Label_961:
			SetAttackState((bool)0);
			StopAsync();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 4;
	}
Label_951:
	var_329_bool = var_1_object != 0; //@nn
	if(var_329_bool != 0) {
		func_1004(var_146_bool, var_147_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_855;
	
}


func_1864(var_127_string)
{
	var_128_bool = 0; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_bool = 0; var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0);
	IsExisting3DSound(var_136_bool, var_127_string);
	var_144_bool = var_136_bool == 0; //@nz
	if(var_144_bool != 0) {
		var_137_int = 0;

	Label_1870:
		var_146_int = var_137_int + (int)1;
		var_147_int = var_127_string + var_146_int;
		IsExisting3DSound(var_138_bool, var_147_int);
		var_148_bool = var_138_bool == 0; //@nz
		if(var_148_bool != 0) {
		} else {
			var_137_int = var_137_int + (int)1;
			goto Label_1870;
		}
		var_149_bool = var_137_int == 0; //@nz
		if(var_149_bool != 0) {
			return 16;
		}
		irand(var_139_int, var_137_int);
		var_151_int = var_139_int + (int)1;
		var_127_string = var_127_string + var_151_int;
	}
	Is3DSoundLoaded(var_140_bool, var_127_string);
	var_152_bool = var_140_bool;
	if(var_152_bool != 0) {
		GetEyesHeight(var_141_float);
		GetDirection(var_142_cvector);
		var_143_cvector = var_142_cvector * (int)50;
		var_154_float = GetByIndex(var_143_cvector, 1);
		var_154_float = var_154_float + var_141_float;
		SetByIndex(var_143_cvector, 1) = var_154_float;
		PlayGlobalSound(var_127_string, var_143_cvector);
	}
	return 16;
	
}


func_2383(var_44_int, var_45_string)
{
	var_46_int = 0; var_47_int = 0;
	GetInvItemByName(var_47_int, var_45_string);
	var_47_int = var_44_int;
	return 2;
}


func_2388(var_23_object)
{
	var_24_object = Obj();
	var_23_object = var_24_object;
	TaskCall(3);
	func_544(var_24_object);
	TaskReturn();
	return 0;
}


func_1367()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1372()
{
	return 0;
}


func_1373(var_280_string, var_281_int)
{
	var_283_bool = var_281_int == (int)2;
	if(var_283_bool != 0) {
		var_280_string = "fire";
		return 0;
	EMIT "GOTO 0x569";
	}
	var_285_bool = var_281_int == (int)1;
	if(var_285_bool != 0) {
		var_280_string = "bullet";
		return 0;
	}
	var_280_string = "phys";
	return 0;
}


func_1387(var_46_cvector, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	GetPosition(var_50_cvector);
	@@var_47_object:GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
	return 4;
}


func_1905(var_89_bool, var_90_string)
{
	var_89_bool = 1;
	var_91_bool = 0;
	var_91_bool = 1;
	var_92_bool = 0;
	var_92_bool = 1;
	var_93_bool = 0;
	var_93_bool = 1;
	var_94_bool = 0;
	var_94_bool = 1;
	var_95_bool = 0;
	var_95_bool = 1;
	var_96_bool = 0;
	var_96_bool = 1;
	var_97_bool = 0;
	var_97_bool = 1;
	var_98_bool = 0;
	var_98_bool = 1;
	var_99_bool = 0;
	var_99_bool = 1;
	var_100_bool = 0;
	var_100_bool = 1;
	var_101_bool = 0;
	var_101_bool = 1;
	var_103_bool = var_90_string == "woman";
	if(var_103_bool != 1) {
		var_105_bool = var_90_string == "worker";
		if(var_105_bool != 1) {
			var_101_bool = 0;
		}
	}
	if(var_101_bool != 1) {
		var_107_bool = var_90_string == "butcher";
		if(var_107_bool != 1) {
			var_100_bool = 0;
		}
	}
	if(var_100_bool != 1) {
		var_109_bool = var_90_string == "wasted_girl";
		if(var_109_bool != 1) {
			var_99_bool = 0;
		}
	}
	if(var_99_bool != 1) {
		var_111_bool = var_90_string == "boy";
		if(var_111_bool != 1) {
			var_98_bool = 0;
		}
	}
	if(var_98_bool != 1) {
		var_113_bool = var_90_string == "vaxxabitka";
		if(var_113_bool != 1) {
			var_97_bool = 0;
		}
	}
	if(var_97_bool != 1) {
		var_115_bool = var_90_string == "unosha";
		if(var_115_bool != 1) {
			var_96_bool = 0;
		}
	}
	if(var_96_bool != 1) {
		var_117_bool = var_90_string == "wasted_male";
		if(var_117_bool != 1) {
			var_95_bool = 0;
		}
	}
	if(var_95_bool != 1) {
		var_119_bool = var_90_string == "alkash";
		if(var_119_bool != 1) {
			var_94_bool = 0;
		}
	}
	if(var_94_bool != 1) {
		var_121_bool = var_90_string == "dohodyaga";
		if(var_121_bool != 1) {
			var_93_bool = 0;
		}
	}
	if(var_93_bool != 1) {
		var_123_bool = var_90_string == "vaxxabit";
		if(var_123_bool != 1) {
			var_92_bool = 0;
		}
	}
	if(var_92_bool != 1) {
		var_125_bool = var_90_string == "nudegirl";
		if(var_125_bool != 1) {
			var_91_bool = 0;
		}
	}
	if(var_91_bool != 1) {
		var_127_bool = var_90_string == "morlok";
		if(var_127_bool != 1) {
			var_89_bool = 0;
		}
	}
	return 0;
}


func_1394(var_91_float, var_92_object)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	GetPosition(var_96_cvector);
	@@var_92_object:GetPosition(var_97_cvector);
	var_98_cvector = var_97_cvector - var_96_cvector;
	var_91_float = var_98_cvector | var_98_cvector;
	return 6;
}


func_1402(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	FindActor(var_19_object, "player");
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1409(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
	return 2;
}


func_1414(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0;
	var_46_bool = IsFuncExist(var_40_object, "HasProperty", (int)2);
	var_47_bool = var_46_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_39_bool = 0;
		return 2;
	}
	@@var_40_object:HasProperty(var_41_string, var_43_bool);
	var_43_bool = var_39_bool;
	return 2;
}


func_2445(var_21_bool, var_22_object, var_23_bool)
{
	var_24_string = ""; var_25_string = "";
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_object = var_27_object;
	func_1414(var_26_bool, var_27_object, "class");
	var_35_bool = var_26_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_21_bool = 0;
		return 2;
	}
	@@var_22_object:GetProperty("class", var_25_string);
	var_37_bool = 0;
	var_37_bool = 1;
	var_38_bool = 0;
	var_38_bool = 1;
	var_39_bool = 0;
	var_39_bool = 1;
	var_40_bool = 0;
	var_40_bool = 1;
	var_41_bool = 0;
	var_41_bool = 1;
	var_42_bool = 0;
	var_42_bool = 1;
	var_43_bool = 0;
	var_43_bool = 1;
	var_44_bool = 0;
	var_44_bool = 1;
	var_45_bool = 0;
	var_45_bool = 1;
	var_46_bool = 0;
	var_46_bool = 1;
	var_48_bool = var_25_string == "patrol";
	if(var_48_bool != 1) {
		var_50_bool = var_25_string == "sanitar";
		if(var_50_bool != 1) {
			var_46_bool = 0;
		}
	}
	if(var_46_bool != 1) {
		var_52_bool = var_25_string == "soldier";
		if(var_52_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 1) {
		var_54_bool = var_25_string == "woman";
		if(var_54_bool != 1) {
			var_44_bool = 0;
		}
	}
	if(var_44_bool != 1) {
		var_56_bool = var_25_string == "wasted_girl";
		if(var_56_bool != 1) {
			var_43_bool = 0;
		}
	}
	if(var_43_bool != 1) {
		var_58_bool = var_25_string == "vaxxabitka";
		if(var_58_bool != 1) {
			var_42_bool = 0;
		}
	}
	if(var_42_bool != 1) {
		var_60_bool = var_25_string == "vaxxabit";
		if(var_60_bool != 1) {
			var_41_bool = 0;
		}
	}
	if(var_41_bool != 1) {
		var_62_bool = var_25_string == "little_girl";
		if(var_62_bool != 1) {
			var_40_bool = 0;
		}
	}
	if(var_40_bool != 1) {
		var_64_bool = var_25_string == "girl";
		if(var_64_bool != 1) {
			var_39_bool = 0;
		}
	}
	if(var_39_bool != 1) {
		var_66_bool = var_25_string == "dohodyaga";
		if(var_66_bool != 1) {
			var_38_bool = 0;
		}
	}
	if(var_38_bool != 1) {
		var_68_bool = var_25_string == "nudegirl";
		if(var_68_bool != 1) {
			var_37_bool = 0;
		}
	}
	if(var_37_bool != 0) {
		var_21_bool = 1;
		return 2;
	}
	var_69_bool = var_23_bool;
	if(var_69_bool != 0) {
		var_21_bool = 0;
		return 2;
	}
	var_21_bool = 1;
	var_70_bool = 0;
	var_70_bool = 1;
	var_71_bool = 0;
	var_71_bool = 1;
	var_72_bool = 0;
	var_72_bool = 1;
	var_73_bool = 0;
	var_73_bool = 1;
	var_74_bool = 0;
	var_74_bool = 1;
	var_76_bool = var_25_string == "worker";
	if(var_76_bool != 1) {
		var_78_bool = var_25_string == "butcher";
		if(var_78_bool != 1) {
			var_74_bool = 0;
		}
	}
	if(var_74_bool != 1) {
		var_80_bool = var_25_string == "boy";
		if(var_80_bool != 1) {
			var_73_bool = 0;
		}
	}
	if(var_73_bool != 1) {
		var_82_bool = var_25_string == "unosha";
		if(var_82_bool != 1) {
			var_72_bool = 0;
		}
	}
	if(var_72_bool != 1) {
		var_84_bool = var_25_string == "wasted_male";
		if(var_84_bool != 1) {
			var_71_bool = 0;
		}
	}
	if(var_71_bool != 1) {
		var_86_bool = var_25_string == "alkash";
		if(var_86_bool != 1) {
			var_70_bool = 0;
		}
	}
	if(var_70_bool != 1) {
		var_88_bool = var_25_string == "morlok";
		if(var_88_bool != 1) {
			var_21_bool = 0;
		}
	}
	return 2;
}


func_1426(var_255_float, var_256_object, var_257_float, var_258_int)
{
	var_259_int = 0; var_260_string = ""; var_261_int = 0; var_262_float = 0; var_263_float = 0; var_264_float = 0; var_265_int = 0; var_266_string = ""; var_267_int = 0; var_268_float = 0; var_269_float = 0; var_270_float = 0;
	var_271_bool = 0; var_272_object = Obj(); var_273_string = "";
	var_256_object = var_272_object;
	func_1414(var_271_bool, var_272_object, "health");
	var_274_bool = var_271_bool == 0; //@nz
	if(var_274_bool != 0) {
		var_255_float = 0.0;
		return 12;
	}
	var_275_bool = 0; var_276_object = Obj(); var_277_string = "";
	var_256_object = var_276_object;
	func_1414(var_275_bool, var_276_object, "armor");
	var_278_bool = var_275_bool == 0; //@nz
	if(var_278_bool != 0) {
		var_265_int = 0;
	} else {
			@@var_256_object:GetProperty("armor", var_265_int);
	}
	var_280_string = ""; var_281_int = 0;
	var_258_int = var_281_int;
	func_1373(var_280_string, var_281_int);
	var_266_string = "armor_" + var_280_string;
	var_286_bool = 0; var_287_object = Obj(); var_288_string = "";
	var_256_object = var_287_object;
	var_266_string = var_288_string;
	func_1414(var_286_bool, var_287_object, var_288_string);
	var_289_bool = var_286_bool == 0; //@nz
	if(var_289_bool != 0) {
		var_267_int = 0;
	} else {
		@@var_256_object:GetProperty(var_266_string, var_267_int);

	}
	var_290_float = 0; var_291_float = 0; var_292_float = 0;
	var_293_int = var_265_int + var_267_int;
	var_291_float = var_293_int / (float)100.0;
	func_2012(var_290_float, var_291_float, (float)1);
	var_290_float = var_268_float;
	@@var_256_object:GetProperty("health", var_269_float);
	var_298_int = (int)1 - var_268_float;
	var_270_float = var_257_float * var_298_int;
	var_300_float = 0; var_301_float = 0; var_302_float = 0; var_303_float = 0;
	var_301_float = var_269_float - var_270_float;
	func_2019(var_300_float, var_301_float, (float)0, (float)1);
	@@var_256_object:SetProperty("health", var_300_float);
	var_306_bool = 0; var_307_object = Obj();
	var_256_object = var_307_object;
	func_1409(var_306_bool, var_307_object);
	if(var_306_bool != 0) {
		var_308_float = 0;
		var_308_float = -var_270_float;
		func_2082(var_308_float);
	}
	var_270_float = var_255_float;
	return 12;
	
}


func_1992(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	self(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1998(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0;
	var_54_int = var_45_cvector | var_45_cvector;
	var_53_float = sqrt(var_54_int);
	var_55_float = 9.999999974752427e-07;
	var_56_bool = var_53_float < var_55_float;
	if(var_56_bool != 0) {
		var_44_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_44_cvector = var_45_cvector / var_53_float;
	return 2;
}


func_2008(var_34_float, var_35_cvector, var_36_cvector)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	var_38_cvector = var_36_cvector - var_35_cvector;
	var_34_float = var_38_cvector | var_38_cvector;
	return 2;
}


func_1499(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	@@var_33_object:IsDead(var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_2012(var_290_float, var_291_float, var_292_float)
{
	var_295_bool = var_291_float < var_292_float;
	if(var_295_bool != 0) {
		var_291_float = var_290_float;
	} else {
		var_292_float = var_290_float;
	}
	return 0;
	
}


func_1504(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	var_27_bool = var_22_object == 0; //@ne
	if(var_27_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	var_28_bool = 0;
	var_28_bool = 0;
	var_31_bool = IsFuncExist(var_22_object, "IsDead", (int)1);
	if(var_31_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_22_object = var_33_object;
		func_1499(var_32_bool, var_33_object);
		if(var_32_bool != 0) {
			var_28_bool = 1;
		}
	}
	if(var_28_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	GetScene(var_25_object);
	var_36_bool = var_25_object == 0; //@ne
	if(var_36_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	@@var_22_object:GetScene(var_26_object);
	var_37_bool = var_25_object != var_26_object;
	if(var_37_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	var_21_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2019(var_300_float, var_301_float, var_302_float, var_303_float)
{
	var_304_bool = var_301_float < var_302_float;
	if(var_304_bool != 0) {
		var_302_float = var_300_float;
		return 0;
	}
	var_305_bool = var_301_float > var_303_float;
	if(var_305_bool != 0) {
		var_303_float = var_300_float;
		return 0;
	}
	var_301_float = var_300_float;
	return 0;
}


func_1004(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_2030(var_59_bool, var_60_int, var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	irand(var_63_int, var_61_int);
	var_59_bool = var_63_int < var_60_int;
	return 2;
}


func_1009(var_0_object)
{
	var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_object = Obj(); var_178_int = 0; var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_object = Obj(); var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_bool = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_object = Obj(); var_192_int = 0; var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_object = Obj(); var_196_object = Obj();
	var_197_object = Obj();
	var_197_object = var_0_object;
	func_2111(var_197_object);
	ReportAttack(var_0_object);
	var_198_bool = 0; var_199_object = Obj();
	var_199_object = var_0_object;
	func_1409(var_198_bool, var_199_object);
	if(var_198_bool != 0) {
		var_200_object = Obj();
		func_1992(var_200_object);
		SendPlayerEnemy(var_0_object, var_200_object);
	}
	GetDirection(var_183_cvector);
	var_201_cvector = CVector(0,0,0); var_202_object = Obj();
	var_202_object = var_0_object;
	func_1387(var_201_cvector, var_202_object);
	var_201_cvector = var_184_cvector;
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0);
	var_183_cvector = var_208_cvector;
	var_184_cvector = var_209_cvector;
	func_2060(var_207_float, var_208_cvector, var_209_cvector);
	var_232_bool = var_207_float < (float)0.9993908405303955;
	if(var_232_bool != 0) {
		return 28;
	}
	func_2120();
	PlayAnimation("all", "attack_begin1");
	GetGeometryLocator("attack", var_185_bool, var_186_cvector, var_187_cvector);
	var_236_bool = var_185_bool;
	if(var_236_bool != 0) {
		GetScene(var_189_object);
		AddActorByType(var_188_object, "light-dynamic", var_189_object, var_186_cvector, var_187_cvector, "soldier_fire.xml");
		var_189_object = 0;
		var_188_object = 0;
	} else {
				WaitForAnimEnd();
	}
	PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
	GetDirection(var_183_cvector);
	var_243_cvector = CVector(0,0,0); var_244_object = Obj();
	var_244_object = var_0_object;
	func_1387(var_243_cvector, var_244_object);
	var_243_cvector = var_184_cvector;
	var_245_float = GetByIndex(var_184_cvector, 1);
	var_246_float = 0; var_247_object = Obj();
	var_247_object = var_0_object;
	func_1701(var_246_float, var_247_object);
	var_245_float = var_245_float + var_246_float;
	SetByIndex(var_184_cvector, 1) = var_245_float;
	RandVecCone3D(var_190_cvector, var_184_cvector, (float)0.03490658476948738);
	GetVictimMaterial(var_190_cvector, var_191_object, var_192_int, var_193_cvector);
	var_253_bool = var_191_object != 0; //@nn
	if(var_253_bool != 0) {
		var_254_bool = var_191_object == var_0_object;
		if(var_254_bool != 0) {
			var_255_float = 0; var_256_object = Obj(); var_257_float = 0; var_258_int = 0;
			var_256_object = var_0_object;
			func_1426(var_255_float, var_256_object, (float)1.5, (int)1);
			var_255_float = var_194_float;
			ReportHit(var_0_object, (int)2, var_194_float, (float)1.5);
		} else {
			var_324_bool = var_192_int != (int)-1;
			if(var_324_bool == 0) goto Label_1121;
			GetScene(var_195_object);
			AddActorByType(var_196_object, "scripted", var_195_object, var_193_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_196_object:SetScriptProperty("Material", var_192_int);
			var_196_object = 0;
			var_195_object = 0;

		}
	}
Label_1121:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 28;
	
}
EMIT "Stack[-6] = 0";


func_2035(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateObjectSet(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2041(var_210_float, var_211_cvector, var_212_cvector)
{
	var_213_float = GetByIndex(var_211_cvector, 0);
	var_214_float = GetByIndex(var_212_cvector, 0);
	var_215_float = var_213_float * var_214_float;
	var_216_float = GetByIndex(var_211_cvector, 2);
	var_217_float = GetByIndex(var_212_cvector, 2);
	var_218_float = var_216_float * var_217_float;
	var_210_float = var_215_float + var_218_float;
	return 0;
}


