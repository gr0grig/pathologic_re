// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SensePlayerOnly/1,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/4,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,GetGameTime/1,BroadcastMessage/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,WorkWithCorpse/1,Barter/1,CreateInvItem/1,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_b9_03|W:doberman_attack|W:cleanup|W:player|W:head|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:samopal_ammo|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:b9q03DobermanGotoFollower|W:pt_b9q03_follower|A:AddMark|A:ShowMap|W:oob9DobermanSpi4ka1_1|W:place_follower|W:init_bonefires|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:doberman_dead
// @GLOBALS: 0:object:
// @RUN_OP: 0x13c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x145 vars=object
// @EVENT_17: op=0x14e vars=object
// @EVENT_26: op=0x15a vars=string
// @EVENT_6: op=0x19a vars=
// @EVENT_7: op=0x1db vars=int
// @TASK_3: vars=object,int,int,bool,float,int params=0
// @EVENT_6: op=0x268 vars=
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_6: op=0x504 vars=
// @EVENT_7: op=0x53b vars=int
// @EVENT_1: op=0x556 vars=object
// @EVENT_2: op=0x565 vars=object
// @EVENT_10: op=0x5eb vars=object
// @EVENT_41: op=0x5f6 vars=object
// @TASK_5: vars= params=1
// @EVENT_6: op=0x61a vars=
// @EVENT_0: op=0x62f vars=object
// @EVENT_22: op=0x6ae vars=object,int,float,float
// @EVENT_16: op=0x6b0 vars=object,string
// @EVENT_41: op=0x6b2 vars=object
// @STANDALONE_EVENT_22: op=0xa63 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xa6b vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xa75 vars=object,string
// @STANDALONE_EVENT_41: op=0xa82 vars=object
// @PE: 0x4a,0x9d,0xb3,0x145,0x14e,0x15a,0x192,0x1b1,0x1db,0x1f2,0x262,0x265,0x4fc,0x53b,0x556,0x565,0x5d9,0x5eb,0x5f6,0x5ff,0x60a,0x620,0x694,0x6ae,0x6b0,0x6b2,0x6b4,0x8ca,0x8d1,0x942,0x973,0x9e7,0xa56,0xa63,0xa6b,0xa82,0xa88

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_20_bool, var_21_object, var_22_bool)
{
	if((int)1 != 0) {
		func_2171();
		var_26_bool = var_22_bool == (int)31699;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_2376(var_28_object);
		}
		var_102_bool = var_22_bool == (int)31700;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_2332(var_104_object);
		}
		var_122_bool = var_22_bool == (int)32356;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_2332(var_124_object);
		}
		var_126_bool = var_21_object == (int)31696;
		if(var_126_bool != 0) {
			var_127_bool = 0; var_128_object = Obj();
			var_128_object = var_1_object;
			func_2419(var_128_object);
			if(var_127_bool != 0) {
				var_135_object = Obj(); var_136_object = Obj();
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_2370();
				var_139_string = "";
				func_157(var_22_bool, "Neutral");
				@@@var_0_object:SetMessage((int)530309);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530310, (int)31698, (int)31697);
				@@@var_0_object:AddReply((int)531024, (int)31698, (int)32353);
				return 0;
			}
			var_163_string = "";
			func_157(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530315, (int)-1, (int)31702);
			return 0;
		}
		var_169_bool = var_21_object == (int)31698;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_157(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531025, (int)32355, (int)32354);
			@@@var_0_object:AddReply((int)531027, (int)-1, (int)32356);
			return 0;
		}
		var_179_bool = var_21_object == (int)32355;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_157(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531026);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530312, (int)-1, (int)31699);
			@@@var_0_object:AddReply((int)530313, (int)-1, (int)31700);
			return 0;
		}
		var_3_string = true;
		var_188_bool = 0;
		func_2644(var_188_bool);
		if(var_188_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	func_498(var_20_object, var_21_bool);
	var_25_object = Obj();
	var_21_bool = var_25_object;
	func_2696(var_25_object);
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_bool = var_23_object;
	func_1745(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_bool = 0; var_27_string = ""; var_28_string = "";
		func_2295(var_26_bool, "quest_b9_03", "doberman_attack");
	}
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_23_bool = var_21_bool == "attack";
	if(var_23_bool != 0) {
		func_498(var_20_object, var_21_bool);
		TaskCall(3);
		func_598();
		TaskReturn();
	} else {
		var_531_string = "";
		var_21_bool = var_531_string;
		func_402(var_531_string);
	}
	return 0;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = var_6_int;
	if(var_21_int != 0) {
		func_498(var_19_object, var_20_bool);
	}
	var_25_bool = 0;
	var_25_bool = 0;
	var_26_int = var_5_int;
	if(var_26_int != 0) {
		var_27_bool = 0;
		func_431(var_27_bool);
		if(var_27_bool != 0) {
			var_25_bool = 1;
		}
	}
	if(var_25_bool != 0) {
		var_28_object = Obj();
		func_2234(var_28_object);
		RemoveActor(var_28_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_23_bool = var_21_bool == (int)10;
	if(var_23_bool != 0) {
		var_24_bool = 0;
		func_460(var_19_bool, var_20_object, var_21_bool, var_24_bool);
		if(var_24_bool != 0) {
			var_37_bool = var_2_object == 0; //@nz
			if(var_37_bool != 0) {
				var_38_object = Obj();
				var_38_object = var_4_bool;
				func_2160(var_38_object);
				var_2_object = true;
			}
		} else {
			var_45_object = var_2_object;
			if(var_45_object == 0) goto Label_497;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_497:
	return 0;
	
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_object = Obj();
	func_2234(var_21_object);
	RemoveActor(var_21_object);
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_object = Obj();
	func_2234(var_21_object);
	RemoveActor(var_21_object);
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_int)
{
	var_23_bool = var_21_int == (int)1;
	if(var_23_bool != 0) {
		var_24_object = Obj();
		var_24_object = var_1_object;
		func_2312(var_24_object);
	} else {
		var_29_int = 0;
		var_21_int = var_29_int;
		func_1497(var_20_bool, var_21_int, var_29_int);
	}
	return 0;
	
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	var_22_bool = 0;
	var_22_bool = 0;
	var_23_bool = var_1_object == var_21_object;
	if(var_23_bool != 0) {
		var_24_bool = var_2_object == 0; //@nz
		if(var_24_bool != 0) {
			var_22_bool = 1;
		}
	}
	if(var_22_bool != 0) {
		var_2_object = true;
		var_25_object = Obj();
		var_21_object = var_25_object;
		func_2160(var_25_object);
	}
	return 0;
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	var_22_bool = 0;
	var_22_bool = 0;
	var_23_bool = var_1_object == var_21_object;
	if(var_23_bool != 0) {
		var_24_object = var_2_object;
		if(var_24_object != 0) {
			var_22_bool = 1;
		}
	}
	if(var_22_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	RequestClearPath(var_21_object);
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	func_1353(var_21_object);
	var_21_object = Obj();
	func_2690();
	return 0;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_object = Obj();
	func_2234(var_21_object);
	RemoveActor(var_21_object);
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsOverrideActive(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_25_object = Obj();
		var_21_object = var_25_object;
		func_2535(var_25_object);
	}
	return 2;
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0;
	var_21_object = var_25_object;
	var_22_int = var_26_int;
	var_23_float = var_27_float;
	func_1944(var_25_object, var_26_int, var_27_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_int = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
	var_21_object = var_27_object;
	var_22_int = var_28_int;
	var_23_float = var_29_float;
	var_25_cvector = var_30_cvector;
	var_26_cvector = var_31_cvector;
	func_2012(var_29_float, var_30_cvector, var_31_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_string)
{
	var_23_float = 0; var_24_float = 0;
	var_26_bool = var_22_string == "health";
	if(var_26_bool != 0) {
		GetProperty("health", var_24_float);
		var_29_bool = var_24_float <= (int)0;
		if(var_29_bool != 0) {
			SignalDeath(var_21_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_2646(var_22_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	SensePlayerOnly((bool)1);
	var_22_float = 0; var_23_float = 0;
	func_364(var_20_bool, (float)300, (float)100);
	return 0;
}


func_512()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0;
	WaitForAnimEnd();
	var_54_bool = 0;
	func_2037(var_54_bool);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		return 14;
	}
	func_2619((int)0);
	var_56_int = var_47_int;
	var_48_int = 0;
	
Label_526:
	var_69_bool = 0;
	var_69_bool = 0;
	var_71_bool = var_48_int < (int)5;
	if(var_71_bool != 0) {
		var_72_bool = 0;
		func_2037(var_72_bool);
		if(var_72_bool != 0) {
			var_69_bool = 1;
		}
	}
	if(var_69_bool != 0) {
		irand(var_49_int, (int)3);
		var_75_bool = var_49_int == (int)0;
		if(var_75_bool != 0) {
			var_76_int = var_47_int;
			if(var_76_int == 0) goto Label_559;
			irand(var_50_int, var_47_int);
			var_78_string = ""; var_79_int = 0;
			var_50_int = var_79_int;
			func_2612(var_78_string, var_79_int);
			PlayAnimation("all", var_78_string);
			WaitForAnimEnd(var_51_bool);
			var_80_bool = var_51_bool == 0; //@nz
			if(var_80_bool != 0) {
			} else {
		} else {
				var_85_bool = var_49_int == (int)1;
				if(var_85_bool != 0) {
					rand(var_52_float, (int)4);
					var_88_int = var_52_float + (int)1;
					Sleep(var_88_int, var_53_bool);
					var_89_bool = var_53_bool == 0; //@nz
					if(var_89_bool != 0) {
						goto Label_588;
					}
					goto Label_577;
				}
				var_90_int = var_48_int;
				if(var_90_int == 0) goto Label_577;
				goto Label_588;
		}
		Label_577:
			var_81_bool = 0;
			func_591(var_81_bool);
			var_82_bool = var_81_bool == 0; //@nz
			if(var_82_bool != 0) {
				goto Label_588;
			}
			ResetAAS();
			var_48_int = var_48_int + (int)1;
			goto Label_526;

		}
	}
Label_588:
	ResetAAS();
	return 14;
	
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_2042(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_2638(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_2636(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_2640(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_2642(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_2589(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_object = Obj(); var_99_object = Obj();
	var_27_object = var_98_object;
	var_33_object = var_99_object;
	TaskCall(1);
	func_74(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_56:
	var_164_bool = var_36_bool == 0; //@nz
	if(var_164_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_56;
	}
	var_27_object = Obj();
	func_2111();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1280(var_390_int)
{
	var_390_int = 1;
	return 0;
}


func_1282(var_385_float)
{
	var_385_float = 0.5;
	return 0;
}


func_2307(var_42_float)
{
	var_43_float = 0; var_44_float = 0;
	GetGameTime(var_44_float);
	var_44_float = var_42_float;
	return 2;
}


func_2565()
{
	var_46_int = 0;
	func_2606(var_46_int);
	var_51_bool = var_46_int != (int)1;
	if(var_51_bool != 0) {
		return 0;
	}
	var_52_string = "";
	func_2548("liver");
	var_63_string = "";
	func_2548("kidney");
	var_64_string = "";
	func_2548("heart");
	var_65_string = "";
	func_2548("blood");
	return 0;
}


func_1542(var_208_string)
{
	var_208_string = "walk";
	return 0;
}


func_1544(var_209_string)
{
	var_209_string = "run";
	return 0;
}


func_2312(var_24_object)
{
	var_25_bool = 0; var_26_bool = 0;
	IsPlayerActor(var_24_object, var_26_bool);
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1546(var_29_object)
{
	var_30_string = ""; var_31_int = 0; var_32_int = 0; var_33_int = 0;
	func_2178("samopal_ammo", (int)1, (int)1, (int)4);
	func_2565();
	var_66_object = Obj();
	var_29_object = var_66_object;
	func_1568(var_66_object);
	return 0;
}


func_1290(var_2_object, var_139_bool, var_140_object, var_141_float, var_142_float, var_143_bool, var_144_bool)
{
	var_148_bool = 0; var_149_bool = 0; var_150_bool = 0; var_151_bool = 0;
	var_152_object = Obj();
	var_140_object = var_152_object;
	func_2312(var_152_object);
	SetTimer((int)1, (int)5);
	CanSee(var_150_bool, var_140_object);
	var_155_bool = var_150_bool;
	if(var_155_bool != 0) {
		var_2_object = true;
		var_156_object = Obj();
		var_140_object = var_156_object;
		func_2160(var_156_object);
	} else {
		var_2_object = false;
	}
	var_163_bool = 0; var_164_object = Obj();
	var_140_object = var_164_object;
	func_1745(var_163_bool, var_164_object);
	if(var_163_bool != 0) {
		var_167_object = Obj();
		func_2234(var_167_object);
		SendPlayerEnemy(var_140_object, var_167_object);
	}
	var_168_bool = 0; var_169_object = Obj(); var_170_float = 0; var_171_float = 0; var_172_bool = 0; var_173_bool = 0;
	var_140_object = var_169_object;
	var_141_float = var_170_float;
	var_142_float = var_171_float;
	var_143_bool = var_172_bool;
	var_144_bool = var_173_bool;
	func_1395(var_150_bool, var_151_bool, var_168_bool, var_169_object, var_170_float, var_171_float, var_172_bool, var_173_bool);
	var_168_bool = var_151_bool;
	var_219_object = var_2_object;
	if(var_219_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_151_bool = var_139_bool;
	return 4;
	
}


func_2321()
{
	var_369_object = Obj(); var_370_object = Obj();
	GetScene(var_370_object);
	var_372_object = Obj();
	func_2234(var_372_object);
	BroadcastMessage("battle", var_372_object, var_370_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2332(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj();
	func_2485(Obj());
	var_107_object = var_106_object;
	var_112_float = 0;
	func_2307(var_112_float);
	@@var_106_object:AddMark("b9q03DobermanGotoFollower", "pt_b9q03_follower", (int)0, (int)530343, var_112_float);
	func_2431();
	var_113_bool = 0; var_114_string = ""; var_115_string = "";
	func_2295(var_113_bool, "quest_b9_03", "doberman_attack");
	var_116_object = Obj(); var_117_string = ""; var_118_float = 0;
	func_2485(Obj());
	var_119_object = var_116_object;
	func_2502(var_116_object, "pt_b9q03_follower", (float)2);
	var_120_object = Obj();
	func_2485(var_120_object);
	@@var_104_object:ShowMap(var_120_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2589(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0xa2c";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1568(var_66_object)
{
	EventDisable(0);
	var_67_object = Obj();
	var_66_object = var_67_object;
	func_1593(var_67_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1579:
	Hold();
	goto Label_1579;
}
EMIT "Return(); Pop(0)";


func_1062(var_499_bool, var_500_float)
{
	var_501_float = 0; var_502_bool = 0; var_503_float = 0; var_504_bool = 0;
	rand(var_503_float);
	var_505_bool = var_503_float < var_500_float;
	if(var_505_bool != 0) {

	Label_1067:
		IsAnimationPlaying(var_504_bool);
		var_506_bool = var_504_bool == 0; //@nz
		if(var_506_bool != 0) {
		} else {
			var_507_bool = 0;
			func_1160(var_507_bool);
			if(var_507_bool != 0) {
				var_499_bool = 1;
				sync();
				goto Label_1067;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1264(var_504_bool);
	}
	goto Label_1087;
	
Label_1087:
	var_499_bool = 0;
	return 4;
	
}


func_1835(var_49_bool, var_50_object)
{
	var_51_bool = 0; var_52_bool = 0;
	@@var_50_object:IsDead(var_52_bool);
	var_52_bool = var_49_bool;
	return 2;
}


func_2606(var_46_int)
{
	var_47_int = 0; var_48_int = 0;
	GetVariable("branch", var_48_int);
	var_48_int = var_46_int;
	return 2;
}


func_1840(var_38_bool, var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj(); var_43_object = Obj();
	var_44_bool = var_39_object == 0; //@ne
	if(var_44_bool != 0) {
		var_38_bool = 0;
		return 4;
	}
	var_45_bool = 0;
	var_45_bool = 0;
	var_48_bool = IsFuncExist(var_39_object, "IsDead", (int)1);
	if(var_48_bool != 0) {
		var_49_bool = 0; var_50_object = Obj();
		var_39_object = var_50_object;
		func_1835(var_49_bool, var_50_object);
		if(var_49_bool != 0) {
			var_45_bool = 1;
		}
	}
	if(var_45_bool != 0) {
		var_38_bool = 0;
		return 4;
	}
	GetScene(var_42_object);
	var_53_bool = var_42_object == 0; //@ne
	if(var_53_bool != 0) {
		var_38_bool = 0;
		return 4;
	}
	@@var_39_object:GetScene(var_43_object);
	var_54_bool = var_42_object != var_43_object;
	if(var_54_bool != 0) {
		var_38_bool = 0;
		return 4;
	}
	var_38_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2612(var_62_string, var_63_int)
{
	var_64_string = ""; var_65_string = "";
	var_66_int = var_63_int;
	if(var_66_int != 0) {
		"idle" = "idle" + var_63_int;
	}
	var_65_string = var_62_string;
	return 2;
}


func_1593(var_67_object)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_string = ""; var_73_object = Obj(); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_string = ""; var_83_object = Obj(); var_84_bool = 0; var_85_bool = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0);
	var_88_bool = var_67_object == 0; //@ne
	if(var_88_bool != 0) {
		var_89_string = "";
		func_1684("fdie");
	} else {
		@@var_67_object:GetPosition(var_78_cvector);
		GetPosition(var_79_cvector);
		GetDirection(var_80_cvector);
		var_81_cvector = var_79_cvector - var_78_cvector;
		var_121_float = GetByIndex(var_81_cvector, 0);
		var_122_float = GetByIndex(var_80_cvector, 0);
		var_123_float = var_121_float * var_122_float;
		var_124_float = GetByIndex(var_81_cvector, 2);
		var_125_float = GetByIndex(var_80_cvector, 2);
		var_126_float = var_124_float * var_125_float;
		var_127_int = var_123_float + var_126_float;
		var_129_bool = var_127_int >= (int)0;
		if(var_129_bool != 0) {
			var_82_string = "fdie";
		} else {
				var_82_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_67_object = var_83_object;
		var_132_bool = IsFuncExist(var_67_object, "GetScriptProperty", (int)2);
		if(var_132_bool != 0) {
			@@var_67_object:HasScriptProperty(var_84_bool, "Owner");
			var_134_bool = var_84_bool;
			if(var_134_bool != 0) {
				@@var_67_object:GetScriptProperty(var_83_object, "Owner");
				var_136_bool = var_83_object == 0; //@ne
				if(var_136_bool != 0) {
					var_67_object = var_83_object;
				}
			}
		}
		var_139_bool = IsFuncExist(var_83_object, "@GetEyesHeight", (int)1);
		if(var_139_bool != 0) {
			@@var_83_object:GetEyesHeight(var_86_float);
			var_87_cvector = CVector(0.0, 0.0, 0.0);
			var_140_float = GetByIndex(var_87_cvector, 1);
			var_86_float = var_140_float;
			SetByIndex(var_87_cvector, 1) = var_140_float;
			LookAsync(var_67_object, "head", var_87_cvector);
			var_85_bool = 1;
		} else {
			var_85_bool = 0;

		}
		var_142_string = "";
		var_82_string = var_142_string;
		func_2193(var_142_string);
		PlayAnimation("all", var_82_string);
		WaitForAnimEnd();
		var_144_bool = var_85_bool;
		if(var_144_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_82_string);
		RemoveEnvelope();
		var_83_object = 0;
	}
	return 20;
	
}


func_2619(var_56_int)
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0;
	var_59_int = 0;
	
Label_2621:
	var_62_string = ""; var_63_int = 0;
	var_59_int = var_63_int;
	func_2612(var_62_string, var_63_int);
	HasAnimation(var_60_bool, "all", var_62_string);
	var_67_bool = var_60_bool == 0; //@nz
	if(var_67_bool != 0) {
	} else {
		var_59_int = var_59_int + (int)1;
		goto Label_2621;
	}
	var_59_int = var_56_int;
	return 4;
	
}


func_2111()
{
	var_166_bool = 0; var_167_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_169_bool = 0;
	func_2644(var_169_bool);
	if(var_169_bool != 0) {
	} else {
		HasAnimationTrack(var_167_bool, "head");
		var_171_bool = var_167_bool;
		if(var_171_bool == 0) goto Label_2128;
		UnlookAsync("head");
	}
Label_2128:
	return 2;
	
}


func_1089(var_0_object, var_296_bool, var_297_float)
{
	var_298_bool = 0; var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_float = 0; var_303_bool = 0; var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_float = 0;
	
Label_1090:
	IsAnimationPlaying(var_303_bool);
	var_308_bool = var_303_bool == 0; //@nz
	if(var_308_bool != 0) {
	} else {
		var_309_bool = 0;
		func_1160(var_309_bool);
		if(var_309_bool != 0) {
			var_296_bool = 1;
			return 10;
		}
		var_352_bool = 0; var_353_object = Obj();
		var_353_object = var_0_object;
		func_1876(var_352_bool, var_353_object);
		var_354_bool = var_352_bool == 0; //@nz
		if(var_354_bool != 0) {
			var_296_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_304_cvector);
		GetPFPosition(var_305_cvector);
		var_306_cvector = var_304_cvector - var_305_cvector;
		var_307_float = var_306_cvector | var_306_cvector;
		var_355_float = var_297_float * var_297_float;
		var_356_bool = var_307_float < var_355_float;
		if(var_356_bool != 0) {
			var_357_bool = 0; var_358_float = 0;
			var_297_float = var_358_float;
			func_925(var_306_cvector, var_307_float, var_357_bool, var_358_float);
			var_296_bool = 1;
			sync();
			goto Label_1090;
		}
		return 10;
	}
	func_1264(var_307_float);
	var_296_bool = 0;
	return 10;
	
}


func_2370()
{
	SetVariable("oob9DobermanSpi4ka1_1", (int)1);
	return 0;
}


func_2376(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	func_2485(Obj());
	var_31_object = var_30_object;
	var_42_float = 0;
	func_2307(var_42_float);
	@@var_30_object:AddMark("b9q03DobermanGotoFollower", "pt_b9q03_follower", (int)0, (int)530343, var_42_float);
	func_2431();
	var_68_bool = 0; var_69_string = ""; var_70_string = "";
	func_2295(var_68_bool, "quest_b9_03", "place_follower");
	var_74_bool = 0; var_75_string = ""; var_76_string = "";
	func_2295(var_74_bool, "quest_b9_03", "init_bonefires");
	var_77_object = Obj(); var_78_string = ""; var_79_float = 0;
	func_2485(Obj());
	var_80_object = var_77_object;
	func_2502(var_77_object, "pt_b9q03_follower", (float)2);
	var_100_object = Obj();
	func_2485(var_100_object);
	@@var_28_object:ShowMap(var_100_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1353(var_2_object)
{
	KillTimer((int)1);
	var_23_object = var_2_object;
	if(var_23_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1519(var_21_object);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_98_object, var_99_object)
{
	var_0_object = var_99_object;
	var_1_object = var_98_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_105_bool = 0; var_106_object = Obj();
		var_106_object = var_1_object;
		func_2419(var_106_object);
		if(var_105_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_2370();
			var_117_string = "";
			func_157(var_99_object, "Neutral");
			@@@var_0_object:SetMessage((int)530309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530310, (int)31698, (int)31697);
			@@@var_0_object:AddReply((int)531024, (int)31698, (int)32353);
		} else {
				var_159_string = "";
				func_157(var_99_object, "Neutral");
				@@@var_0_object:SetMessage((int)530314);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530315, (int)-1, (int)31702);
				goto Label_127;
		}
	}
Label_127:
	var_141_bool = 0;
	func_2644(var_141_bool);
	if(var_141_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_142_string = var_3_string;
		if(var_142_string != 0) {
		} else {
			var_143_string = "";
			var_143_string = var_2_object;
			func_2129(var_143_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_156_string = var_3_string;
		if(var_156_string != 0) {
			goto Label_156;
		}
		PlayAnimation("all", "idle");
		goto Label_146;

	}
	goto Label_156;
	
Label_156:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_2636(var_86_int)
{
	var_86_int = 518097;
	return 0;
}


func_2638(var_85_int)
{
	var_85_int = 518096;
	return 0;
}


func_591(var_81_bool)
{
	var_81_bool = 1;
	return 0;
}


func_2640(var_87_string)
{
	var_87_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_2129(var_143_string)
{
	var_144_bool = 0; var_145_float = 0; var_146_float = 0; var_147_bool = 0; var_148_float = 0; var_149_float = 0;
	lshHasAnimation(var_147_bool, var_143_string);
	var_150_bool = var_147_bool;
	if(var_150_bool != 0) {
		lshGetAnimTimes(var_143_string, var_148_float, var_149_float);
		lshPlayAnimation(var_148_float, var_149_float, (bool)0);
	} else {
		var_153_int = "Can't find lsh animation : " + var_143_string;
		Trace(var_153_int);
	}
	return 6;
	
}


func_2642(var_88_string)
{
	var_88_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_593()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2644(var_80_bool)
{
	var_80_bool = 0;
	return 0;
}


func_851(var_1_object, var_2_object, var_4_bool)
{
	var_61_bool = 0; var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_853:
	var_70_int = var_1_object + (int)1;
	var_71_int = "attack_begin" + var_70_int;
	HasAnimation(var_64_bool, "all", var_71_int);
	var_72_bool = var_64_bool == 0; //@nz
	if(var_72_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_853;
	}
	var_2_object = 0;
	
Label_867:
	var_75_int = var_2_object + (int)1;
	var_76_int = "attack" + var_75_int;
	IsExisting3DSound(var_65_bool, var_76_int);
	var_77_bool = var_65_bool == 0; //@nz
	if(var_77_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_867;

	}
	GetAnimationOffset(var_66_cvector, "all", "bjump");
	var_80_float = GetByIndex(var_66_cvector, 2);
	var_4_bool = -var_80_float;
	return 6;
	
}


func_598()
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_object = Obj(); var_37_bool = 0; var_38_float = 0;
	var_34_object = var_36_object;
	func_622(var_30_bool, var_31_float, var_32_int, var_33_object, var_34_object, var_36_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2646(var_22_object)
{
	var_23_bool = 0; var_24_string = ""; var_25_string = "";
	func_2295(var_23_bool, "quest_b9_03", "doberman_dead");
	var_29_object = Obj();
	var_22_object = var_29_object;
	TaskCall(5);
	func_1546(var_29_object);
	TaskReturn();
	return 0;
}


func_1876(var_34_bool, var_35_object)
{
	var_36_int = 0; var_37_int = 0;
	var_38_bool = 0; var_39_object = Obj();
	var_35_object = var_39_object;
	func_1840(var_38_bool, var_39_object);
	var_55_bool = var_38_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_34_bool = 0;
		return 2;
	}
	var_56_bool = 0; var_57_object = Obj(); var_58_string = "";
	var_35_object = var_57_object;
	func_1750(var_56_bool, var_57_object, "noaccess");
	var_65_bool = var_56_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_34_bool = 1;
		return 2;
	}
	@@var_35_object:GetProperty("noaccess", var_37_int);
	var_34_bool = var_37_int == (int)0;
	return 2;
}


func_2145(var_121_string, var_122_bool)
{
	var_125_bool = 0; var_126_float = 0; var_127_float = 0; var_128_bool = 0; var_129_float = 0; var_130_float = 0;
	lshHasAnimation(var_128_bool, var_121_string);
	var_131_bool = var_128_bool;
	if(var_131_bool != 0) {
		lshGetAnimTimes(var_121_string, var_129_float, var_130_float);
		lshPlayAnimation(var_129_float, var_130_float, var_122_bool);
	} else {
		var_133_int = "Can't find lsh animation : " + var_121_string;
		Trace(var_133_int);
	}
	return 6;
	
}


func_610(var_405_float)
{
	var_405_float = 0.10000000149011612;
	return 0;
}


func_613(var_412_int)
{
	var_412_int = 0;
	return 0;
}


func_1132(var_0_object, var_311_bool)
{
	var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_float = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_float = 0; var_321_float = 0;
	var_322_bool = 0; var_323_object = Obj();
	var_323_object = var_0_object;
	func_1876(var_322_bool, var_323_object);
	var_324_bool = var_322_bool == 0; //@nz
	if(var_324_bool != 0) {
		var_311_bool = 0;
		return 10;
	}
	var_325_bool = 0;
	func_1221(var_321_float, var_325_bool);
	if(var_325_bool != 0) {
		@@@var_0_object:GetPFPosition(var_317_cvector);
		GetPFPosition(var_318_cvector);
		var_319_cvector = var_317_cvector - var_318_cvector;
		var_320_float = var_319_cvector | var_319_cvector;
		@@@var_0_object:GetAttackDistance(var_321_float);
		var_321_float = var_321_float + (int)50;
		var_327_float = var_321_float * var_321_float;
		var_311_bool = var_320_float <= var_327_float;
		return 10;
	}
	var_311_bool = 0;
	return 10;
}


func_364(var_6_int, var_22_float, var_23_float)
{
	var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0;
	var_6_int = false;
	
Label_366:
	rand(var_26_float, (int)3);
	var_30_int = var_26_float + (int)3;
	Sleep(var_30_int, var_27_bool);
	var_6_int = true;
	var_31_float = 0; var_32_float = 0;
	var_22_float = var_31_float;
	var_23_float = var_32_float;
	func_433(var_23_float, var_24_float, var_25_bool, var_26_float, var_27_bool, var_31_float, var_32_float);
	var_6_int = false;
	goto Label_366;
}
EMIT "Return(); Pop(4)";


func_622(var_0_object, var_3_string, var_5_int, var_36_object, var_37_bool, var_38_float, var_145_bool, var_237_bool)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_float = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0;
	func_851(var_58_cvector, var_59_bool, var_60_float);
	var_5_int = 0;
	var_85_bool = IsFuncExist(var_36_object, "@GetAttackDistance", (int)1);
	if(var_85_bool != 0) {
		@@var_36_object:GetAttackDistance(var_50_float);
		var_50_float = var_50_float + (int)50;
	} else {
							var_38_float = var_50_float;
	}
	var_88_bool = var_50_float >= (int)150;
	if(var_88_bool != 0) {
		var_50_float = 150;
	}
	var_3_string = false;
	var_0_object = var_36_object;
	IsPlayerActor(var_0_object, var_53_bool);
	var_89_bool = var_53_bool;
	if(var_89_bool != 0) {
		PlayGlobalMusic("attack");
		var_91_object = Obj();
		func_2234(var_91_object);
		SendPlayerEnemy(var_36_object, var_91_object);
	}
	var_94_bool = var_37_bool;
	if(var_94_bool != 0) {
		var_54_bool = 0;
	} else {
						var_54_bool = 1;

	}
	var_55_float = (float)400.0 + var_50_float;
	
Label_662:
	var_96_bool = 0;
	var_96_bool = 0;
	var_97_bool = 0; var_98_object = Obj();
	var_98_object = var_0_object;
	func_1876(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		var_131_bool = var_3_string == 0; //@nz
		if(var_131_bool != 0) {
			var_96_bool = 1;
		}
	}
	if(var_96_bool != 0) {
		func_1264(var_60_float);
		@@@var_0_object:GetPFPosition(var_51_cvector);
		GetPFPosition(var_52_cvector);
		var_56_cvector = var_51_cvector - var_52_cvector;
		var_57_float = var_56_cvector | var_56_cvector;
		var_137_float = var_55_float * var_55_float;
		var_138_bool = var_57_float >= var_137_float;
		if(var_138_bool != 0) {
			var_139_bool = 0; var_140_object = Obj(); var_141_float = 0; var_142_float = 0; var_143_bool = 0; var_144_bool = 0;
			var_140_object = var_0_object;
			var_50_float = var_141_float;
			TaskCall(4);
			func_1290(var_147_bool, var_139_bool, var_140_object, var_141_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_222_bool = var_145_bool == 0; //@nz
			if(var_222_bool != 0) {
			} else {
				var_54_bool = 0;
		} else {
				var_228_float = var_38_float * var_38_float;
				var_229_bool = var_57_float >= var_228_float;
				if(var_229_bool != 0) {
					@@@var_0_object:GetPFPosition(var_58_cvector);
					CanReachByPF(var_59_bool, var_58_cvector);
					var_230_bool = var_59_bool == 0; //@nz
					if(var_230_bool != 0) {
						var_231_bool = 0; var_232_object = Obj(); var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_bool = 0;
						var_232_object = var_0_object;
						var_50_float = var_233_float;
						TaskCall(4);
						func_1290(var_239_bool, var_231_bool, var_232_object, var_233_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_240_bool = var_237_bool == 0; //@nz
						if(var_240_bool != 0) {
							goto Label_834;
						}
						var_54_bool = 0;
						goto Label_662;
					}
					var_241_bool = var_54_bool == 0; //@nz
					if(var_241_bool != 0) {
						var_242_object = Obj();
						var_242_object = var_0_object;
						func_2026(var_242_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1264(var_60_float);
						StopAsync();
						var_54_bool = 1;
						var_253_bool = 0; var_254_object = Obj();
						var_254_object = var_0_object;
						func_1876(var_253_bool, var_254_object);
						var_255_bool = var_253_bool == 0; //@nz
						if(var_255_bool != 0) {
							goto Label_834;
						}
					}
					rand(var_60_float);
					var_256_bool = 0;
					var_258_bool = var_60_float < (float)0.25;
					if(var_258_bool != 1) {
						var_259_bool = 0;
						func_1221((bool)1, var_259_bool);
						if(var_259_bool != 1) {
							var_256_bool = 0;
						}
					}
					if(var_256_bool != 0) {
						Face(var_0_object);
						func_1271();
						PlayAnimation("all", "attack_stay");
						var_296_bool = 0; var_297_float = 0;
						var_38_float = var_297_float;
						func_1089(var_60_float, var_296_bool, var_297_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1264(var_60_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_518_bool = 0;
						func_1221(var_60_float, var_518_bool);
						var_519_bool = var_518_bool == 0; //@nz
						if(var_519_bool == 0) goto Label_824;
						var_520_bool = 0; var_521_object = Obj();
						var_521_object = var_0_object;
						func_1876(var_520_bool, var_521_object);
						var_522_bool = var_520_bool == 0; //@nz
						if(var_522_bool != 0) {
							goto Label_834;
						}
						@@@var_0_object:GetPFPosition(var_51_cvector);
						GetPFPosition(var_52_cvector);
						var_56_cvector = var_51_cvector - var_52_cvector;
						var_57_float = var_56_cvector | var_56_cvector;
						var_523_float = var_38_float * var_38_float;
						var_524_bool = var_57_float < var_523_float;
						if(var_524_bool == 0) goto Label_824;
						var_525_bool = 0; var_526_float = 0;
						var_38_float = var_526_float;
						func_925(var_59_bool, var_60_float, var_525_bool, var_526_float);
						var_527_bool = var_525_bool == 0; //@nz
						if(var_527_bool == 0) goto Label_824;
						goto Label_834;
				}
					var_528_bool = 0; var_529_float = 0;
					var_38_float = var_529_float;
					func_925(var_59_bool, var_60_float, var_528_bool, var_529_float);
					var_530_bool = var_528_bool == 0; //@nz
					if(var_530_bool != 0) {
						goto Label_834;
					}
					var_54_bool = 1;

				}
			Label_824:
				goto Label_833;
		}
		Label_833:
			goto Label_662;

		}
	}
Label_834:
	WaitForAnimEnd();
	var_223_string = var_3_string;
	if(var_223_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_226_bool = var_53_bool;
	if(var_226_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1900(var_38_object)
{
	var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; var_46_bool = 0; var_47_int = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = "";
	var_53_bool = var_38_object == 0; //@ne
	if(var_53_bool != 0) {
		return 14;
	}
	IsDead(var_46_bool);
	var_54_bool = var_46_bool;
	if(var_54_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_47_int);
	var_56_bool = var_47_int < (int)0;
	if(var_56_bool != 0) {
		return 14;
	}
	@@var_38_object:GetPosition(var_48_cvector);
	GetPosition(var_49_cvector);
	GetDirection(var_50_cvector);
	var_51_cvector = var_49_cvector - var_48_cvector;
	var_57_float = GetByIndex(var_51_cvector, 0);
	var_58_float = GetByIndex(var_50_cvector, 0);
	var_59_float = var_57_float * var_58_float;
	var_60_float = GetByIndex(var_51_cvector, 2);
	var_61_float = GetByIndex(var_50_cvector, 2);
	var_62_float = var_60_float * var_61_float;
	var_63_int = var_59_float + var_62_float;
	var_65_bool = var_63_int >= (int)0;
	if(var_65_bool != 0) {
		var_52_string = "fhit";
	} else {
		var_52_string = "bhit";
	}
	var_68_int = var_52_string + "1";
	var_70_int = var_52_string + "2";
	FadeSecondaryAnimation("hit_react", var_68_int, var_70_int, (int)-10);
	return 14;
	
}


func_2160(var_25_object)
{
	var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0);
	@@var_25_object:GetEyesHeight(var_28_float);
	var_29_cvector = CVector(0.0, 0.0, 0.0);
	var_30_float = GetByIndex(var_29_cvector, 1);
	var_28_float = var_30_float;
	SetByIndex(var_29_cvector, 1) = var_30_float;
	LookAsync(var_25_object, "head", var_29_cvector);
	return 4;
}


func_2419(var_105_bool)
{
	var_107_int = 0; var_108_string = "";
	func_2273(var_107_int, "oob9DobermanSpi4ka1_1");
	var_112_bool = var_107_int == (int)0;
	if(var_112_bool != 0) {
		var_105_bool = 1;
		return 0;
	}
	var_105_bool = 0;
	return 0;
}


func_1395(var_0_object, var_1_object, var_168_bool, var_169_object, var_170_float, var_171_float, var_172_bool, var_173_bool)
{
	var_174_bool = 0; var_175_bool = 0; var_176_object = Obj(); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_object = Obj(); var_182_bool = 0; var_183_bool = 0; var_184_object = Obj(); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_float = 0; var_189_object = Obj();
	var_0_object = false;
	var_1_object = var_169_object;
	var_173_bool = var_183_bool;
	
Label_1399:
	var_190_bool = 0; var_191_object = Obj();
	var_169_object = var_191_object;
	func_1535(var_190_bool, var_191_object);
	var_194_bool = var_190_bool == 0; //@nz
	if(var_194_bool != 0) {
		var_168_bool = 0;
		return 16;
	}
	@@var_169_object:GetPosition(var_185_cvector);
	GetPosition(var_186_cvector);
	var_187_cvector = var_185_cvector - var_186_cvector;
	var_188_float = var_187_cvector | var_187_cvector;
	var_195_bool = 0;
	var_195_bool = 0;
	var_197_bool = var_171_float > (int)0;
	if(var_197_bool != 0) {
		var_198_float = var_171_float * var_171_float;
		var_199_bool = var_188_float > var_198_float;
		if(var_199_bool != 0) {
			var_195_bool = 1;
		}
	}
	if(var_195_bool != 0) {
		Stop();
		var_168_bool = 0;
		return 16;
	}
	var_200_float = var_170_float * var_170_float;
	var_201_bool = var_188_float > var_200_float;
	if(var_201_bool != 0) {
		@@var_169_object:GetPFPosition(var_185_cvector);
		FindPathTo(var_189_object, var_185_cvector);
		var_202_bool = var_189_object != 0; //@nn
		if(var_202_bool != 0) {
			var_189_object = var_184_object;
			var_189_object = 0;
		}
		var_203_bool = var_184_object != 0; //@nn
		if(var_203_bool != 0) {
			var_204_bool = var_183_bool;
			if(var_204_bool == 0) goto Label_1448;
			var_183_bool = 0;
			RotatePath(var_184_object, var_182_bool);
			var_205_bool = var_182_bool == 0; //@nz
			if(var_205_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_208_string = "";
				func_1542(var_208_string);
				var_209_string = "";
				func_1544(var_209_string);
				FollowPath(var_184_object, var_172_bool, var_182_bool, var_208_string, var_209_string);
				var_210_bool = var_182_bool == 0; //@nz
				if(var_210_bool != 0) {
					var_211_object = var_0_object;
					if(var_211_object != 0) {
						var_184_object = 0;
						goto Label_1495;
					EMIT "GOTO 0x5bc";
					}
				} else {
					var_184_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_182_bool);
					var_214_bool = var_182_bool == 0; //@nz
					if(var_214_bool != 0) {
						var_215_object = var_0_object;
						if(var_215_object != 0) {
							var_184_object = 0;
							goto Label_1495;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1495;
	}
			var_189_object = 0;
			goto Label_1493;

		Label_1493:
			var_184_object = 0;

		}
		goto Label_1399;
	}
Label_1495:
	var_168_bool = !var_0_object;
	return 16;
	
}


func_886(var_0_object, var_394_float, var_395_int)
{
	var_396_object = Obj(); var_397_float = 0; var_398_float = 0; var_399_object = Obj(); var_400_float = 0; var_401_float = 0;
	var_403_float = var_394_float * (float)0.8999999761581421;
	GetVictim(var_403_float, var_399_object);
	ReportAttack(var_0_object);
	var_404_bool = var_399_object == var_0_object;
	if(var_404_bool != 0) {
		var_405_float = 0; var_406_object = Obj(); var_407_int = 0;
		var_399_object = var_406_object;
		var_395_int = var_407_int;
		func_610(var_407_int);
		var_405_float = var_400_float;
		var_408_float = 0; var_409_object = Obj(); var_410_float = 0; var_411_int = 0;
		var_399_object = var_409_object;
		var_400_float = var_410_float;
		var_412_int = 0; var_413_object = Obj(); var_414_int = 0;
		var_399_object = var_413_object;
		var_395_int = var_414_int;
		func_613(var_414_int);
		var_412_int = var_411_int;
		func_1762(var_408_float, var_409_object, var_410_float, var_411_int);
		var_408_float = var_401_float;
		var_473_int = 0;
		func_1269(var_473_int);
		ReportHit(var_0_object, var_473_int, var_401_float, var_400_float);
		var_474_object = Obj(); var_475_float = 0;
		var_399_object = var_474_object;
		var_401_float = var_475_float;
		func_1276();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2171()
{
	var_24_bool = 0;
	func_2644(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_382(var_5_int)
{
	var_5_int = true;
	var_534_bool = 0;
	var_534_bool = 0;
	var_535_bool = 0;
	func_2037(var_535_bool);
	var_538_bool = var_535_bool == 0; //@nz
	if(var_538_bool != 0) {
		var_539_bool = 0;
		func_431(var_539_bool);
		if(var_539_bool != 0) {
			var_534_bool = 1;
		}
	}
	if(var_534_bool != 0) {
		var_540_object = Obj();
		func_2234(var_540_object);
		RemoveActor(var_540_object);
	}
	return 0;
}


func_2431()
{
	var_45_object = Obj(); var_46_object = Obj();
	CreateDiaryEntry(var_46_object, (int)542, (int)2, (int)530354);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_46_object = var_51_object;
	func_2457(var_50_bool, var_51_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2178(var_30_string, var_31_int, var_32_int, var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0;
	var_38_bool = 0; var_39_int = 0; var_40_int = 0;
	var_31_int = var_39_int;
	var_32_int = var_40_int;
	func_2268(var_38_bool, var_39_int, var_40_int);
	if(var_38_bool != 0) {
		irand(var_36_int, var_33_int);
		var_45_int = var_36_int + (int)1;
		AddItem(var_37_bool, var_30_string, (int)0, var_45_int);
	}
	return 4;
}


func_2696(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1160(var_309_bool)
{
	var_310_bool = 0;
	var_310_bool = 0;
	var_311_bool = 0;
	func_1132(var_310_bool, var_311_bool);
	if(var_311_bool != 0) {
		var_328_bool = 0;
		func_1176(var_309_bool, var_310_bool, var_328_bool);
		if(var_328_bool != 0) {
			var_310_bool = 1;
		}
	}
	if(var_310_bool != 0) {
		var_309_bool = 1;
		return 0;
	}
	var_309_bool = 0;
	return 0;
}


func_2444(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj();
	GetDiaryRoot(var_61_object);
	var_62_bool = var_61_object == 0; //@nz
	if(var_62_bool != 0) {
		Trace("Can't retrieve diary root");
		var_59_object = 0;
		return 2;
	}
	var_61_object = var_59_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2193(var_90_string)
{
	var_91_bool = 0; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_int = 0; var_103_bool = 0; var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	IsExisting3DSound(var_99_bool, var_90_string);
	var_107_bool = var_99_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_100_int = 0;

	Label_2199:
		var_109_int = var_100_int + (int)1;
		var_110_int = var_90_string + var_109_int;
		IsExisting3DSound(var_101_bool, var_110_int);
		var_111_bool = var_101_bool == 0; //@nz
		if(var_111_bool != 0) {
		} else {
			var_100_int = var_100_int + (int)1;
			goto Label_2199;
		}
		var_112_bool = var_100_int == 0; //@nz
		if(var_112_bool != 0) {
			return 16;
		}
		irand(var_102_int, var_100_int);
		var_114_int = var_102_int + (int)1;
		var_90_string = var_90_string + var_114_int;
	}
	Is3DSoundLoaded(var_103_bool, var_90_string);
	var_115_bool = var_103_bool;
	if(var_115_bool != 0) {
		GetEyesHeight(var_104_float);
		GetDirection(var_105_cvector);
		var_106_cvector = var_105_cvector * (int)50;
		var_117_float = GetByIndex(var_106_cvector, 1);
		var_117_float = var_117_float + var_104_float;
		SetByIndex(var_106_cvector, 1) = var_117_float;
		PlayGlobalSound(var_90_string, var_106_cvector);
	}
	return 16;
	
}


func_402(var_531_string)
{
	var_533_bool = var_531_string == "cleanup";
	if(var_533_bool != 0) {
		func_382(var_531_string);
	}
	return 0;
}


func_1684(var_89_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_90_string = "";
	var_89_string = var_90_string;
	func_2193(var_90_string);
	PlayAnimation("all", var_89_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_89_string);
	RemoveEnvelope();
	return 0;
}


func_1176(var_0_object, var_4_bool, var_328_bool)
{
	var_329_object = Obj(); var_330_bool = 0; var_331_float = 0; var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_object = Obj(); var_335_bool = 0; var_336_float = 0; var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0);
	GetScene(var_334_object);
	var_335_bool = 0;
	
Label_1180:
	var_339_cvector = CVector(0,0,0); var_340_object = Obj();
	var_340_object = var_0_object;
	func_1730(var_339_cvector, var_340_object);
	var_345_int = -var_339_cvector;
	FindDirLength(var_336_float, var_345_int, var_4_bool);
	var_346_bool = var_336_float < var_4_bool;
	if(var_346_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_337_cvector);
		GetPFPosition(var_338_cvector);
		WaitForAnimEnd();
		func_1264(var_338_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_335_bool = 1;
		var_350_bool = 0;
		func_1132(var_338_cvector, var_350_bool);
		var_351_bool = var_350_bool == 0; //@nz
		if(var_351_bool != 0) {
			goto Label_1218;
		}
		goto Label_1180;
	}
Label_1218:
	var_335_bool = var_328_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1944(var_25_object, var_26_int, var_27_float)
{
	var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_int = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_int = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0);
	var_46_bool = 0;
	var_46_bool = 0;
	var_47_bool = 0;
	var_47_bool = 0;
	var_48_object = var_25_object;
	if(var_48_object != 0) {
		var_50_bool = var_26_int != (int)4;
		if(var_50_bool != 0) {
			var_47_bool = 1;
		}
	}
	if(var_47_bool != 0) {
		var_52_bool = var_26_int != (int)5;
		if(var_52_bool != 0) {
			var_46_bool = 1;
		}
	}
	if(var_46_bool != 0) {
		var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
		var_55_cvector = CVector(0,0,0); var_56_object = Obj();
		var_25_object = var_56_object;
		func_1730(var_55_cvector, var_56_object);
		var_55_cvector = var_54_cvector;
		func_2240(var_53_cvector, var_54_cvector);
		var_53_cvector = var_37_cvector;
		CreateVectorVector(var_38_object);
		var_39_int = 1;

	Label_1973:
		var_67_int = "hit" + var_39_int;
		GetGeometryLocator(var_67_int, var_40_bool, var_41_cvector, var_42_cvector);
		var_68_bool = var_40_bool == 0; //@nz
		if(var_68_bool != 0) {
		} else {
			var_116_int = var_42_cvector | var_37_cvector;
			var_118_bool = var_116_int >= (float)0.7071067690849304;
			if(var_118_bool != 0) {
				@@var_38_object:add(var_41_cvector);
			}
			var_39_int = var_39_int + (int)1;
			goto Label_1973;
		}
		@@var_38_object:size(var_43_int);
		var_69_int = var_43_int;
		if(var_69_int != 0) {
			irand(var_44_int, var_43_int);
			@@var_38_object:get(var_45_cvector, var_44_int);
			var_70_object = Obj(); var_71_int = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
			var_25_object = var_70_object;
			var_26_int = var_71_int;
			var_27_float = var_72_float;
			var_45_cvector = var_73_cvector;
			var_74_cvector = -var_37_cvector;
			func_2012(var_72_float, var_73_cvector, var_74_cvector);
			return 18;
		}
		var_38_object = 0;
	}
	var_115_object = Obj();
	var_25_object = var_115_object;
	func_1900(var_115_object);
	return 18;
	
}


func_2457(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	func_2444(Obj());
	var_59_object = var_56_object;
	@@var_56_object:Find(var_52_int, var_57_object);
	var_64_bool = var_57_object == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Can't find diary parent with id: " + var_52_int;
		Trace(var_66_int);
		var_50_bool = 0;
		return 6;
	}
	@@var_57_object:AddChild(var_51_object);
	SendWorldWndMessage((int)7);
	@@var_51_object:GetCategory(var_58_int);
	SetDiarySection(var_58_int);
	var_50_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_157(var_2_object, var_117_string)
{
	var_118_bool = 0;
	func_2644(var_118_bool);
	var_119_bool = var_118_bool == 0; //@nz
	if(var_119_bool != 0) {
		return 0;
	}
	var_120_bool = var_117_string == var_2_object;
	if(var_120_bool != 0) {
		return 0;
	}
	var_121_string = ""; var_122_bool = 0;
	var_117_string = var_121_string;
	var_124_bool = var_117_string == "";
	if(var_124_bool != 0) {
		var_122_bool = 0;
	} else {
		var_122_bool = 1;
	}
	func_2145(var_121_string, var_122_bool);
	var_2_object = var_117_string;
	return 0;
	
}


func_925(var_0_object, var_1_object, var_357_bool, var_358_float)
{
	var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_string = ""; var_363_int = 0; var_364_bool = 0; var_365_int = 0; var_366_string = "";
	func_1264(var_366_string);
	irand(var_363_int, var_1_object);
	var_363_int = var_363_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2321();
	var_375_int = "attack_begin" + var_363_int;
	PlayAnimation("all", var_375_int);
	WaitForAnimEnd();
	func_1232(var_365_int, var_366_string);
	var_391_bool = 0; var_392_object = Obj();
	var_392_object = var_0_object;
	func_1876(var_391_bool, var_392_object);
	var_393_bool = var_391_bool == 0; //@nz
	if(var_393_bool != 0) {
		StopAsync();
		var_357_bool = 0;
		return 8;
	}
	var_394_float = 0; var_395_int = 0;
	var_358_float = var_394_float;
	var_363_int = var_395_int;
	func_886(var_366_string, var_394_float, var_395_int);
	var_478_int = "attack_middle" + var_363_int;
	HasAnimation(var_364_bool, "all", var_478_int);
	var_479_bool = var_364_bool;
	if(var_479_bool != 0) {
		func_2321();
		var_482_int = "attack_middle" + var_363_int;
		PlayAnimation("all", var_482_int);
		WaitForAnimEnd();
		func_1264(var_366_string);
		var_483_bool = 0; var_484_object = Obj();
		var_484_object = var_0_object;
		func_1876(var_483_bool, var_484_object);
		var_485_bool = var_483_bool == 0; //@nz
		if(var_485_bool != 0) {
			StopAsync();
			var_357_bool = 0;
			return 8;
		}
		var_486_float = 0; var_487_int = 0;
		var_358_float = var_486_float;
		var_363_int = var_487_int;
		func_886(var_366_string, var_486_float, var_487_int);
		var_365_int = 1;

	Label_1002:
		var_489_int = "attack_middle" + var_363_int;
		var_491_int = var_489_int + "_";
		var_366_string = var_491_int + var_365_int;
		HasAnimation(var_364_bool, "all", var_366_string);
		var_493_bool = var_364_bool == 0; //@nz
		if(var_493_bool != 0) {
		} else {
			func_2321();
			PlayAnimation("all", var_366_string);
			WaitForAnimEnd();
			func_1264(var_366_string);
			var_509_bool = 0; var_510_object = Obj();
			var_510_object = var_0_object;
			func_1876(var_509_bool, var_510_object);
			var_511_bool = var_509_bool == 0; //@nz
			if(var_511_bool != 0) {
				StopAsync();
				var_357_bool = 0;
				var_512_float = 0; var_513_int = 0;
				var_358_float = var_512_float;
				var_363_int = var_513_int;
				func_886(var_366_string, var_512_float, var_513_int);
				var_365_int = var_365_int + (int)1;
				goto Label_1002;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_497_int = "attack_end" + var_363_int;
	PlayAnimation("all", var_497_int);
	var_498_bool = 0;
	func_1278(var_498_bool);
	if(var_498_bool != 0) {
		var_499_bool = 0; var_500_float = 0;
		func_1062(var_499_bool, (float)0.75);
		StopAsync();
	}
	var_357_bool = 1;
	return 8;
	
}


func_431(var_27_bool)
{
	var_27_bool = 1;
	return 0;
}


func_433(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_31_float, var_32_float)
{
	var_33_bool = 0;
	func_2037(var_33_bool);
	var_36_bool = var_33_bool == 0; //@nz
	if(var_36_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_31_float;
	var_1_object = var_32_float;
	SetTimer((int)10, (float)1.0);
	func_512();
	var_91_bool = var_3_string == 0; //@nz
	if(var_91_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1716(var_436_string, var_437_int)
{
	var_439_bool = var_437_int == (int)2;
	if(var_439_bool != 0) {
		var_436_string = "fire";
		return 0;
	EMIT "GOTO 0x6c0";
	}
	var_441_bool = var_437_int == (int)1;
	if(var_441_bool != 0) {
		var_436_string = "bullet";
		return 0;
	}
	var_436_string = "phys";
	return 0;
}


func_2485(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj();
	GetMainOutdoorScene(var_34_object);
	var_36_bool = var_34_object == 0; //@ne
	if(var_36_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_35_object = 0;
		var_35_object = var_31_object;
		return 4;
	}
	@@var_34_object:GetMap(var_35_object);
	var_35_object = var_31_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2234(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	self(var_23_object);
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2240(var_53_cvector, var_54_cvector)
{
	var_61_float = 0; var_62_float = 0;
	var_63_int = var_54_cvector | var_54_cvector;
	var_62_float = sqrt(var_63_int);
	var_64_float = 9.999999974752427e-07;
	var_65_bool = var_62_float < var_64_float;
	if(var_65_bool != 0) {
		var_53_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_53_cvector = var_54_cvector / var_62_float;
	return 2;
}


func_1730(var_55_cvector, var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	GetPosition(var_59_cvector);
	@@var_56_object:GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
	return 4;
}


func_1221(var_0_object, var_259_bool)
{
	var_260_bool = 0; var_261_bool = 0;
	var_264_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_264_bool != 0) {
		@@@var_0_object:IsAttacking(var_261_bool);
		var_261_bool = var_259_bool;
		return 2;
	}
	var_259_bool = 0;
	return 2;
}


func_2502(var_77_object, var_78_string, var_79_float)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0;
	GetMainOutdoorScene(var_87_object);
	var_89_bool = var_87_object == 0; //@ne
	if(var_89_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_87_object:GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector);
	var_91_bool = var_88_bool == 0; //@nz
	if(var_91_bool != 0) {
		var_93_int = "Warning: outdoor scene locator " + var_78_string;
		var_95_int = var_93_int + " doesnt exist";
		Trace(var_95_int);
	}
	@@var_87_object:GetMap(var_77_object);
	var_96_bool = var_77_object == 0; //@ne
	if(var_96_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_98_float = GetByIndex(var_85_cvector, 0);
	var_99_float = GetByIndex(var_85_cvector, 2);
	@@var_77_object:SetMapParams(var_98_float, var_99_float, var_79_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1737(var_28_float, var_29_object)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0);
	GetPosition(var_33_cvector);
	@@var_29_object:GetPosition(var_34_cvector);
	var_35_cvector = var_34_cvector - var_33_cvector;
	var_28_float = var_35_cvector | var_35_cvector;
	return 6;
}


func_2250(var_446_float, var_447_float, var_448_float)
{
	var_451_bool = var_447_float < var_448_float;
	if(var_451_bool != 0) {
		var_447_float = var_446_float;
	} else {
		var_448_float = var_446_float;
	}
	return 0;
	
}


func_460(var_0_object, var_1_object, var_4_bool, var_24_bool)
{
	var_25_float = 0; var_26_float = 0;
	var_27_bool = var_4_bool == 0; //@ne
	if(var_27_bool != 0) {
		var_24_bool = 0;
		return 2;
	}
	var_28_float = 0; var_29_object = Obj();
	var_29_object = var_4_bool;
	func_1737(var_28_float, var_29_object);
	var_26_float = sqrt(var_28_float);
	var_36_object = var_2_object;
	if(var_36_object != 0) {
		var_26_float = var_26_float - var_1_object;
	}
	var_24_bool = var_26_float < var_0_object;
	return 2;
}


func_1232(var_2_object, var_5_int)
{
	var_376_float = 0; var_377_int = 0; var_378_float = 0; var_379_int = 0;
	var_380_bool = var_2_object == 0; //@nz
	if(var_380_bool != 0) {
		return 4;
	}
	var_381_int = var_5_int;
	if(var_381_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_384_bool = var_5_int > (int)0;
		if(var_384_bool != 0) {
			return 4;
		}
	}
	rand(var_378_float);
	var_385_float = 0;
	func_1282(var_385_float);
	var_386_bool = var_378_float < var_385_float;
	if(var_386_bool != 0) {
		irand(var_379_int, var_2_object);
		var_379_int = var_379_int + (int)1;
		var_389_int = "attack" + var_379_int;
		Speak(var_389_int);
		var_390_int = 0;
		func_1280(var_390_int);
		var_5_int = var_390_int;
	}
	return 4;
}


func_1745(var_163_bool, var_164_object)
{
	var_165_bool = 0; var_166_bool = 0;
	IsPlayerActor(var_164_object, var_166_bool);
	var_166_bool = var_163_bool;
	return 2;
}


func_2257(var_456_float, var_457_float, var_458_float, var_459_float)
{
	var_460_bool = var_457_float < var_458_float;
	if(var_460_bool != 0) {
		var_458_float = var_456_float;
		return 0;
	}
	var_461_bool = var_457_float > var_459_float;
	if(var_461_bool != 0) {
		var_459_float = var_456_float;
		return 0;
	}
	var_457_float = var_456_float;
	return 0;
}


func_1750(var_56_bool, var_57_object, var_58_string)
{
	var_59_bool = 0; var_60_bool = 0;
	var_63_bool = IsFuncExist(var_57_object, "HasProperty", (int)2);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_56_bool = 0;
		return 2;
	}
	@@var_57_object:HasProperty(var_58_string, var_60_bool);
	var_60_bool = var_56_bool;
	return 2;
}


func_1497(var_0_object, var_1_object, var_29_int)
{
	var_31_bool = var_29_int != (int)0;
	if(var_31_bool != 0) {
		return 0;
	}
	var_32_bool = 0; var_33_object = Obj();
	var_33_object = var_1_object;
	func_1535(var_32_bool, var_33_object);
	var_68_bool = var_32_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2268(var_38_bool, var_39_int, var_40_int)
{
	var_41_int = 0; var_42_int = 0;
	irand(var_42_int, var_40_int);
	var_38_bool = var_42_int < var_39_int;
	return 2;
}


func_2012(var_27_object, var_30_cvector, var_31_cvector)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj();
	GetScene(var_34_object);
	AddActorByType(var_35_object, "scripted", var_34_object, var_30_cvector, var_31_cvector, "blood_dir.xml");
	var_38_object = Obj();
	var_27_object = var_38_object;
	func_1900(var_38_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2273(var_107_int, var_108_string)
{
	var_109_int = 0; var_110_int = 0;
	GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
	return 2;
}


func_1762(var_408_float, var_409_object, var_410_float, var_411_int)
{
	var_415_int = 0; var_416_string = ""; var_417_int = 0; var_418_float = 0; var_419_float = 0; var_420_float = 0; var_421_int = 0; var_422_string = ""; var_423_int = 0; var_424_float = 0; var_425_float = 0; var_426_float = 0;
	var_427_bool = 0; var_428_object = Obj(); var_429_string = "";
	var_409_object = var_428_object;
	func_1750(var_427_bool, var_428_object, "health");
	var_430_bool = var_427_bool == 0; //@nz
	if(var_430_bool != 0) {
		var_408_float = 0.0;
		return 12;
	}
	var_431_bool = 0; var_432_object = Obj(); var_433_string = "";
	var_409_object = var_432_object;
	func_1750(var_431_bool, var_432_object, "armor");
	var_434_bool = var_431_bool == 0; //@nz
	if(var_434_bool != 0) {
		var_421_int = 0;
	} else {
			@@var_409_object:GetProperty("armor", var_421_int);
	}
	var_436_string = ""; var_437_int = 0;
	var_411_int = var_437_int;
	func_1716(var_436_string, var_437_int);
	var_422_string = "armor_" + var_436_string;
	var_442_bool = 0; var_443_object = Obj(); var_444_string = "";
	var_409_object = var_443_object;
	var_422_string = var_444_string;
	func_1750(var_442_bool, var_443_object, var_444_string);
	var_445_bool = var_442_bool == 0; //@nz
	if(var_445_bool != 0) {
		var_423_int = 0;
	} else {
		@@var_409_object:GetProperty(var_422_string, var_423_int);

	}
	var_446_float = 0; var_447_float = 0; var_448_float = 0;
	var_449_int = var_421_int + var_423_int;
	var_447_float = var_449_int / (float)100.0;
	func_2250(var_446_float, var_447_float, (float)1);
	var_446_float = var_424_float;
	@@var_409_object:GetProperty("health", var_425_float);
	var_454_int = (int)1 - var_424_float;
	var_426_float = var_410_float * var_454_int;
	var_456_float = 0; var_457_float = 0; var_458_float = 0; var_459_float = 0;
	var_457_float = var_425_float - var_426_float;
	func_2257(var_456_float, var_457_float, (float)0, (float)1);
	@@var_409_object:SetProperty("health", var_456_float);
	var_462_bool = 0; var_463_object = Obj();
	var_409_object = var_463_object;
	func_1745(var_462_bool, var_463_object);
	if(var_462_bool != 0) {
		var_464_float = 0;
		var_464_float = -var_426_float;
		func_2278(var_464_float);
	}
	var_426_float = var_408_float;
	return 12;
	
}


func_2278(var_464_float)
{
	var_465_object = Obj(); var_466_object = Obj();
	CreateFloatVector(var_466_object);
	@@var_466_object:add(var_464_float);
	var_468_bool = var_464_float < (int)0;
	if(var_468_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_466_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2535(var_25_object)
{
	var_26_int = 0;
	func_2606(var_26_int);
	var_31_bool = var_26_int == (int)1;
	if(var_31_bool != 0) {
		WorkWithCorpse(var_25_object);
	} else {
		Barter(var_25_object);
	}
	return 0;
	
}


func_2026(var_242_object)
{
	var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0);
	@@var_242_object:GetPosition(var_246_cvector);
	GetPosition(var_247_cvector);
	var_248_cvector = var_246_cvector - var_247_cvector;
	var_249_float = GetByIndex(var_248_cvector, 0);
	var_250_float = GetByIndex(var_248_cvector, 2);
	RotateAsync(var_249_float, var_250_float);
	return 6;
}


func_1519(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1264(var_0_object)
{
	var_132_object = Obj();
	var_132_object = var_0_object;
	func_2312(var_132_object);
	return 0;
}


func_498(var_2_object, var_3_string)
{
	func_593();
	KillTimer((int)10);
	var_23_object = var_2_object;
	if(var_23_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_2548(var_52_string)
{
	var_53_object = Obj(); var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_int = 0; var_58_bool = 0;
	CreateInvItem(var_56_object);
	@@var_56_object:SetItemName(var_52_string);
	@@var_56_object:SetProperty("Organ", (int)1);
	@@var_56_object:GetItemID(var_57_int);
	AddItem(var_58_bool, var_56_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1269(var_473_int)
{
	var_473_int = 0;
	return 0;
}


func_2037(var_33_bool)
{
	var_34_bool = 0; var_35_bool = 0;
	IsLoaded(var_35_bool);
	var_35_bool = var_33_bool;
	return 2;
}


func_2295(var_23_bool, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj();
	FindActor(var_27_object, var_24_string);
	var_28_bool = var_27_object == 0; //@ne
	if(var_28_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	Trigger(var_27_object, var_25_string);
	var_23_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2042(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2240(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_2644(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_2105;
		LookAsyncCamera("head");
	}
Label_2105:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1271()
{
	var_265_string = "";
	func_2193("attack_stay");
	return 0;
}


func_1276()
{
	return 0;
}


func_1278(var_498_bool)
{
	var_498_bool = 1;
	return 0;
}


func_1535(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_object = Obj();
	var_33_object = var_35_object;
	func_1876(var_34_bool, var_35_object);
	var_34_bool = var_32_bool;
	return 0;
}


