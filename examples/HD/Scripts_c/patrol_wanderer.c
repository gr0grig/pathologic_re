// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,SetTimer/2,CanSee/2,SendPlayerEnemy/2,UnlookAsync/1,KillTimer/1,FindPathTo/2,FollowPath/5,IsPlayerActor/2,PlayGlobalMusic/1,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/3,AddItem/4,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectSet/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,ReportReputationChange/3,ReportReputationChange/4,GetProperty/2,SignalDeath/1
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:head|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:@GetAttackDistance|A:GetAttackDistance|W:attack|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:tourniquet|W:bandage|W:packet|W:bottle_water|W:rusk|W:hook|W:watch|W:alpha_pills|W:beta_pills|W:gamma_pills|W:revolver_ammo|W:rifle_ammo|W:patrol_mark|W:fresh_meat|W:dried_meat|W:smoked_meat|W:vegetables|W:samopal_ammo|W:class|W:patrol|W:sanitar|W:soldier|W:woman|W:wasted_girl|W:vaxxabitka|W:vaxxabit|W:little_girl|W:dohodyaga|W:nudegirl|W:worker|W:butcher|W:boy|W:unosha|W:wasted_male|W:alkash|W:morlok|A:in|W:prc|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:reputation|W:bomber|W:hunter|W:grabitel
// @GLOBALS: 0:object:
// @RUN_OP: 0xf6
// @RUN_TASK: 3
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc7 vars=int,int
// @TASK_3: vars=bool,bool params=0
// @EVENT_0: op=0x101 vars=object
// @EVENT_1: op=0x119 vars=object
// @EVENT_3: op=0x127 vars=object
// @EVENT_17: op=0x135 vars=object
// @EVENT_30: op=0x149 vars=object,object,bool
// @EVENT_10: op=0x196 vars=object
// @EVENT_28: op=0x19a vars=
// @EVENT_41: op=0x1a4 vars=object
// @TASK_4: vars= params=0
// @EVENT_0: op=0x1b5 vars=object
// @EVENT_1: op=0x1ba vars=object
// @EVENT_3: op=0x1c8 vars=object
// @EVENT_17: op=0x1d6 vars=object
// @EVENT_30: op=0x1ea vars=object,object,bool
// @TASK_5: vars=bool,object,bool params=6
// @EVENT_17: op=0x24d vars=object
// @EVENT_30: op=0x253 vars=object,object,bool
// @EVENT_7: op=0x28c vars=int
// @EVENT_1: op=0x2a7 vars=object
// @EVENT_2: op=0x2b6 vars=object
// @EVENT_10: op=0x33c vars=object
// @EVENT_41: op=0x347 vars=object
// @TASK_6: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0x369 vars=object
// @EVENT_30: op=0x36f vars=object,object,bool
// @TASK_7: vars= params=1
// @EVENT_0: op=0x630 vars=object
// @EVENT_22: op=0x6af vars=object,int,float,float
// @EVENT_16: op=0x6b1 vars=object,string
// @EVENT_41: op=0x6b3 vars=object
// @STANDALONE_EVENT_22: op=0xbe9 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xbf1 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xbfb vars=object,string
// @STANDALONE_EVENT_42: op=0xc08 vars=object,string
// @STANDALONE_EVENT_41: op=0xc0f vars=object
// @PE: 0x0,0x1a,0x72,0xb1,0xc7,0xf6,0x101,0x119,0x127,0x135,0x149,0x196,0x1a4,0x1b5,0x1ba,0x1c8,0x1d6,0x1ea,0x24d,0x253,0x28c,0x2a7,0x2b6,0x32a,0x33c,0x347,0x350,0x35b,0x363,0x366,0x369,0x36f,0x605,0x621,0x695,0x6af,0x6b1,0x6b3,0x6b5,0x852,0x88a,0x913,0x91a,0x98d,0xb76,0xb89,0xb90,0xb96,0xb9d,0xba3,0xbc6,0xbd5,0xbe9,0xbf1,0xc08,0xc0f

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0;
	func_3127(var_18_bool);
	if(var_18_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int)
{
	if((int)1 != 0) {
		func_2233();
		var_22_bool = var_17_float == (int)39791;
		if(var_22_bool != 0) {
			var_23_string = "";
			func_177(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537930);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537931, (int)-1, (int)39792);
			@@@var_0_bool:AddReply((int)537932, (int)-1, (int)39793);
			@@@var_0_bool:AddReply((int)537933, (int)-1, (int)39794);
			return 0;
		}
		var_3_object = true;
		var_50_bool = 0;
		func_3127(var_50_bool);
		if(var_50_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc8";
	
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_int = var_19_object;
	func_3129(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		return 0;
	}
	func_413(var_16_float, var_17_int);
	var_81_int = 0; var_82_object = Obj();
	var_17_int = var_82_object;
	TaskCall(1);
	func_40(var_83_object, var_81_int, var_82_object);
	TaskReturn();
	var_214_bool = (int)1000 == var_83_object;
	if(var_214_bool != 0) {
		var_215_object = Obj();
		var_17_int = var_215_object;
		func_2934(var_215_object);
	}
	return 0;
}


task_3_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_int = var_19_object;
	func_2966(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_413(var_16_float, var_17_int);
		var_82_object = Obj();
		var_17_int = var_82_object;
		func_2973(var_82_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_int = var_19_object;
	func_2953(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_413(var_16_float, var_17_int);
		var_82_object = Obj();
		var_17_int = var_82_object;
		func_2960(var_82_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_106_object)
	{
	var_107_bool = 0; var_108_object = Obj();
	var_106_object = var_108_object;
	func_1877(var_107_bool, var_108_object);
	var_135_bool = var_107_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_136_object = Obj();
		var_106_object = var_136_object;
		func_2990(var_136_object);
		return 0;
	}
	func_413(var_19_int, var_106_object);
	var_151_object = Obj();
	var_106_object = var_151_object;
	func_3014(var_151_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_17_bool = var_21_object;
	var_18_float = var_22_object;
	var_19_int = var_23_bool;
	func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool);
	if(var_20_bool != 0) {
		var_17_bool = Obj();
		func_309();
	}
	return 0;
}


task_3_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	RequestClearPath(var_17_int);
	return 0;
}


task_3_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int)
{
	Stop();
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_413(var_16_float, var_17_int);
	var_17_int = Obj();
	func_3087();
	return 0;
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_584();
	return 0;
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_int = var_19_object;
	func_2966(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_584();
		var_82_object = Obj();
		var_17_int = var_82_object;
		func_2973(var_82_object);
	}
	return 0;
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_int = var_19_object;
	func_2953(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_584();
		var_82_object = Obj();
		var_17_int = var_82_object;
		func_2960(var_82_object);
	}
	return 0;
}


	task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_106_object)
	{
	var_107_bool = 0; var_108_object = Obj();
	var_106_object = var_108_object;
	func_1877(var_107_bool, var_108_object);
	var_135_bool = var_107_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_136_object = Obj();
		var_106_object = var_136_object;
		func_2990(var_136_object);
		return 0;
	}
	func_584();
	var_151_object = Obj();
	var_106_object = var_151_object;
	func_3014(var_151_object);
	return 0;
	}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_17_bool = var_21_object;
	var_18_float = var_22_object;
	var_19_int = var_23_bool;
	func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool);
	if(var_20_bool != 0) {
		var_17_bool = Obj();
		func_470();
	}
	return 0;
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_object = Obj();
	var_17_int = var_18_object;
	func_2990(var_18_object);
	return 0;
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_17_bool = var_21_object;
	var_18_float = var_22_object;
	var_19_int = var_23_bool;
	func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool);
	return 0;
}


task_5_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_19_bool = var_17_int == (int)1;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_20_object = var_1_object;
		func_2378(var_20_object);
	} else {
		var_25_int = 0;
		var_17_int = var_25_int;
		func_810(var_16_float, var_17_int, var_25_int);
	}
	return 0;
	
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_object == var_17_int;
	if(var_19_bool != 0) {
		var_20_bool = var_2_object == 0; //@nz
		if(var_20_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_object = true;
		var_21_object = Obj();
		var_17_int = var_21_object;
		func_2222(var_21_object);
	}
	return 0;
}


task_5_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_object == var_17_int;
	if(var_19_bool != 0) {
		var_20_object = var_2_object;
		if(var_20_object != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_5_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	RequestClearPath(var_17_int);
	return 0;
}


task_5_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_666(var_17_int);
	var_17_int = Obj();
	func_3087();
	return 0;
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_2990(var_18_object);
	return 0;
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_17_object = var_21_object;
	var_18_object = var_22_object;
	var_19_bool = var_23_bool;
	func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool);
	return 0;
}


task_7_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsOverrideActive(var_19_bool);
	var_20_bool = var_19_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_17_object = var_21_object;
		func_2445(var_21_object);
	}
	return 2;
}


task_7_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	return 0;
}


task_7_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	return 0;
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_1945(var_21_object, var_22_int, var_23_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	var_17_object = var_23_object;
	var_18_int = var_24_int;
	var_19_float = var_25_float;
	var_21_cvector = var_26_cvector;
	var_22_cvector = var_27_cvector;
	func_2013(var_25_float, var_26_cvector, var_27_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
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


event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	var_20_bool = var_18_string == "prc";
	if(var_20_bool != 0) {
		ResetAAS();
	}
	return 0;
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_3029(var_18_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int)
{
	func_2927();
	func_2728();
	
Label_252:
	func_342(var_15_float, var_16_int);
	goto Label_252;
}
EMIT "Return(); Pop(0)";


func_1536()
{
	var_354_string = "";
	func_2266("attack_stay");
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_251_bool = 0;
	func_3127(var_251_bool);
	if(var_251_bool != 0) {
		var_252_string = "";
		func_2191("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_253_bool = var_0_bool;
	if(var_253_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_1541()
{
	return 0;
}


func_1543(var_587_bool)
{
	var_587_bool = 1;
	return 0;
}


func_1545(var_479_int)
{
	var_479_int = 1;
	return 0;
}


func_1547(var_474_float)
{
	var_474_float = 0.5;
	return 0;
}


func_1549(var_28_object)
{
	var_29_bool = 0; var_30_bool = 0;
	IsPlayerActor(var_28_object, var_30_bool);
	var_31_bool = var_30_bool;
	if(var_31_bool != 0) {
		func_2530();
	} else {
		func_2657();
	}
	func_2506();
	var_164_object = Obj();
	var_28_object = var_164_object;
	func_1569(var_164_object);
	return 2;
	
}


func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	var_22_object = var_27_object;
	var_28_bool = !var_23_bool;
	func_2791(var_26_bool, var_27_object, var_28_bool);
	if(var_26_bool != 0) {
		CanSee(var_25_bool, var_21_object);
		var_94_bool = 0;
		var_94_bool = 1;
		var_95_bool = var_25_bool;
		if(var_95_bool != 1) {
			var_96_float = 0; var_97_object = Obj();
			var_21_object = var_97_object;
			func_1738(var_96_float, var_97_object);
			var_105_bool = var_96_float <= (float)160000.0;
			if(var_105_bool != 1) {
				var_94_bool = 0;
			}
		}
		if(var_94_bool != 0) {
			var_20_bool = 1;
			return 2;
		}
	}
	var_20_bool = 0;
	return 2;
}


func_1569(var_164_object)
{
	EventDisable(0);
	var_165_object = Obj();
	var_164_object = var_165_object;
	func_1594(var_165_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1580:
	Hold();
	goto Label_1580;
}
EMIT "Return(); Pop(0)";


func_40(var_0_bool, var_81_int, var_82_object)
{
	var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0; var_88_object = Obj(); var_89_bool = 0; var_90_int = 0; var_91_bool = 0;
	var_0_bool = var_82_object;
	var_92_bool = 0; var_93_object = Obj(); var_94_float = 0;
	var_82_object = var_93_object;
	func_2043(var_92_bool, var_93_object, (float)70.0);
	var_139_bool = var_92_bool == 0; //@nz
	if(var_139_bool != 0) {
		var_81_int = -2;
		return 8;
	}
	CreateDialog(var_88_object);
	var_140_int = 0;
	func_3121(var_140_int);
	@@var_88_object:SetNPCName(var_140_int);
	var_141_int = 0;
	func_3119(var_141_int);
	@@var_88_object:SetNPCDescription(var_141_int);
	var_142_string = "";
	func_3123(var_142_string);
	@@var_88_object:SetPhoto(var_142_string);
	var_143_string = "";
	func_3125(var_143_string);
	@@var_88_object:SetPhoto2(var_143_string);
	var_144_int = 0;
	func_2422(var_144_int);
	@@var_88_object:SetPlayerName(var_144_int);
	IsOverrideActive(var_89_bool);
	var_152_bool = var_89_bool;
	if(var_152_bool != 0) {
		var_81_int = -2;
		return 8;
	}
	DoDialog(var_88_object);
	var_153_object = Obj(); var_154_object = Obj();
	var_82_object = var_153_object;
	var_88_object = var_154_object;
	TaskCall(2);
	func_114(var_155_object, var_156_object, var_157_string, var_158_bool, var_153_object, var_154_object);
	TaskReturn();
	@@var_88_object:IsDialogEnd(var_91_bool);
	
Label_96:
	var_205_bool = var_91_bool == 0; //@nz
	if(var_205_bool != 0) {
		sync();
		@@var_88_object:IsDialogEnd(var_91_bool);
		goto Label_96;
	}
	var_82_object = Obj();
	func_2112();
	StopDialog(var_88_object);
	@@var_88_object:GetReturnValue((int)-1);
	var_90_int = var_81_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3119(var_141_int)
{
	var_141_int = 515572;
	return 0;
}


func_3121(var_140_int)
{
	var_140_int = 504031;
	return 0;
}


func_3123(var_142_string)
{
	var_142_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_3125(var_143_string)
{
	var_143_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_3127(var_135_bool)
{
	var_135_bool = 0;
	return 0;
}


func_3129(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_float = 0; var_24_string = ""; var_25_bool = 0; var_26_float = 0; var_27_string = "";
	var_28_bool = 0; var_29_object = Obj();
	var_21_object = var_29_object;
	func_1877(var_28_bool, var_29_object);
	var_62_bool = var_28_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_20_bool = 0;
		return 6;
	}
	var_63_object = GlobalVars[0];
	@@var_63_object:in(var_25_bool, var_21_object);
	var_64_bool = var_25_bool;
	if(var_64_bool != 0) {
		var_20_bool = 1;
		return 6;
	}
	var_65_bool = 0; var_66_object = Obj();
	var_21_object = var_66_object;
	func_1746(var_65_bool, var_66_object);
	if(var_65_bool != 0) {
		@@var_21_object:GetProperty("reputation", var_26_float);
		var_20_bool = var_26_float < (float)0.33000001311302185;
		return 6;
	}
	var_71_bool = 0; var_72_object = Obj(); var_73_string = "";
	var_21_object = var_72_object;
	func_1751(var_71_bool, var_72_object, "class");
	if(var_71_bool != 0) {
		@@var_21_object:GetProperty("class", var_27_string);
		var_20_bool = 1;
		var_75_bool = 0;
		var_75_bool = 1;
		var_77_bool = var_27_string == "bomber";
		if(var_77_bool != 1) {
			var_79_bool = var_27_string == "hunter";
			if(var_79_bool != 1) {
				var_75_bool = 0;
			}
		}
		if(var_75_bool != 1) {
			var_81_bool = var_27_string == "grabitel";
			if(var_81_bool != 1) {
				var_20_bool = 0;
			}
		}
		return 6;
	}
	var_20_bool = 0;
	return 6;
}


func_1594(var_165_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_string = ""; var_171_object = Obj(); var_172_bool = 0; var_173_bool = 0; var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_string = ""; var_181_object = Obj(); var_182_bool = 0; var_183_bool = 0; var_184_float = 0; var_185_cvector = CVector(0,0,0);
	var_186_bool = var_165_object == 0; //@ne
	if(var_186_bool != 0) {
		var_187_string = "";
		func_1685("fdie");
	} else {
		@@var_165_object:GetPosition(var_176_cvector);
		GetPosition(var_177_cvector);
		GetDirection(var_178_cvector);
		var_179_cvector = var_177_cvector - var_176_cvector;
		var_219_float = GetByIndex(var_179_cvector, 0);
		var_220_float = GetByIndex(var_178_cvector, 0);
		var_221_float = var_219_float * var_220_float;
		var_222_float = GetByIndex(var_179_cvector, 2);
		var_223_float = GetByIndex(var_178_cvector, 2);
		var_224_float = var_222_float * var_223_float;
		var_225_int = var_221_float + var_224_float;
		var_227_bool = var_225_int >= (int)0;
		if(var_227_bool != 0) {
			var_180_string = "fdie";
		} else {
				var_180_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_165_object = var_181_object;
		var_230_bool = IsFuncExist(var_165_object, "GetScriptProperty", (int)2);
		if(var_230_bool != 0) {
			@@var_165_object:HasScriptProperty(var_182_bool, "Owner");
			var_232_bool = var_182_bool;
			if(var_232_bool != 0) {
				@@var_165_object:GetScriptProperty(var_181_object, "Owner");
				var_234_bool = var_181_object == 0; //@ne
				if(var_234_bool != 0) {
					var_165_object = var_181_object;
				}
			}
		}
		var_237_bool = IsFuncExist(var_181_object, "@GetEyesHeight", (int)1);
		if(var_237_bool != 0) {
			@@var_181_object:GetEyesHeight(var_184_float);
			var_185_cvector = CVector(0.0, 0.0, 0.0);
			var_238_float = GetByIndex(var_185_cvector, 1);
			var_184_float = var_238_float;
			SetByIndex(var_185_cvector, 1) = var_238_float;
			LookAsync(var_165_object, "head", var_185_cvector);
			var_183_bool = 1;
		} else {
			var_183_bool = 0;

		}
		var_240_string = "";
		var_180_string = var_240_string;
		func_2266(var_240_string);
		PlayAnimation("all", var_180_string);
		WaitForAnimEnd();
		var_242_bool = var_183_bool;
		if(var_242_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_180_string);
		RemoveEnvelope();
		var_181_object = 0;
	}
	return 20;
	
}


func_2112()
{
	var_207_bool = 0; var_208_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_210_bool = 0;
	func_3127(var_210_bool);
	if(var_210_bool != 0) {
	} else {
		HasAnimationTrack(var_208_bool, "head");
		var_212_bool = var_208_bool;
		if(var_212_bool == 0) goto Label_2129;
		UnlookAsync("head");
	}
Label_2129:
	return 2;
	
}


func_582(var_149_bool)
{
	var_149_bool = 1;
	return 0;
}


func_584()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2130(var_216_bool, var_217_object)
{
	var_218_bool = 0; var_219_object = Obj(); var_220_float = 0;
	var_217_object = var_219_object;
	func_2138(var_218_bool, var_219_object, (float)70);
	var_218_bool = var_216_bool;
	return 0;
}


func_2138(var_218_bool, var_219_object, var_220_float)
{
	var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_bool = 0; var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0;
	@@var_219_object:GetPosition(var_230_cvector);
	@@var_219_object:GetEyesHeight(var_229_float);
	var_237_float = GetByIndex(var_230_cvector, 1);
	var_237_float = var_237_float + var_229_float;
	SetByIndex(var_230_cvector, 1) = var_237_float;
	GetPosition(var_231_cvector);
	GetEyesHeight(var_229_float);
	var_238_float = GetByIndex(var_231_cvector, 1);
	var_238_float = var_238_float + var_229_float;
	SetByIndex(var_231_cvector, 1) = var_238_float;
	var_232_cvector = var_230_cvector - var_231_cvector;
	var_239_float = GetByIndex(var_232_cvector, 1);
	SetByIndex(var_232_cvector, 1) = (float)0;
	var_240_int = var_232_cvector | var_232_cvector;
	var_241_float = sqrt(var_240_int);
	var_232_cvector = var_232_cvector / var_241_float;
	var_233_cvector = -var_232_cvector;
	var_242_float = var_232_cvector * var_220_float;
	var_234_cvector = var_242_float - CVector(0.0, 10.0, 0.0);
	var_235_cvector = var_231_cvector + var_234_cvector;
	IsOverrideActive(var_236_bool);
	var_244_bool = var_236_bool;
	if(var_244_bool != 0) {
		var_218_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_235_cvector, var_233_cvector, (bool)1);
	var_246_float = GetByIndex(var_234_cvector, 0);
	var_247_float = GetByIndex(var_234_cvector, 2);
	Rotate(var_246_float, var_247_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_218_bool = 1;
	return 16;
}


func_603(var_2_object, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool)
{
	var_239_bool = 0; var_240_bool = 0; var_241_bool = 0; var_242_bool = 0;
	var_243_object = Obj();
	var_231_object = var_243_object;
	func_2378(var_243_object);
	SetTimer((int)1, (int)5);
	CanSee(var_241_bool, var_231_object);
	var_246_bool = var_241_bool;
	if(var_246_bool != 0) {
		var_2_object = true;
		var_247_object = Obj();
		var_231_object = var_247_object;
		func_2222(var_247_object);
	} else {
		var_2_object = false;
	}
	var_254_bool = 0; var_255_object = Obj();
	var_231_object = var_255_object;
	func_1746(var_254_bool, var_255_object);
	if(var_254_bool != 0) {
		var_256_object = Obj();
		func_2307(var_256_object);
		SendPlayerEnemy(var_231_object, var_256_object);
	}
	var_257_bool = 0; var_258_object = Obj(); var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_bool = 0;
	var_231_object = var_258_object;
	var_232_float = var_259_float;
	var_233_float = var_260_float;
	var_234_bool = var_261_bool;
	var_235_bool = var_262_bool;
	func_708(var_241_bool, var_242_bool, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool);
	var_257_bool = var_242_bool;
	var_308_object = var_2_object;
	if(var_308_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_242_bool = var_230_bool;
	return 4;
	
}


func_1116(var_1_object, var_2_object, var_4_string)
{
	var_186_bool = 0; var_187_bool = 0; var_188_cvector = CVector(0,0,0); var_189_bool = 0; var_190_bool = 0; var_191_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_1118:
	var_195_int = var_1_object + (int)1;
	var_196_int = "attack_begin" + var_195_int;
	HasAnimation(var_189_bool, "all", var_196_int);
	var_197_bool = var_189_bool == 0; //@nz
	if(var_197_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_1118;
	}
	var_2_object = 0;
	
Label_1132:
	var_200_int = var_2_object + (int)1;
	var_201_int = "attack" + var_200_int;
	IsExisting3DSound(var_190_bool, var_201_int);
	var_202_bool = var_190_bool == 0; //@nz
	if(var_202_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1132;

	}
	GetAnimationOffset(var_191_cvector, "all", "bjump");
	var_205_float = GetByIndex(var_191_cvector, 2);
	var_4_string = -var_205_float;
	return 6;
	
}


func_2657()
{
	var_247_int = 0; var_248_bool = 0; var_249_int = 0; var_250_int = 0; var_251_bool = 0; var_252_int = 0;
	ClearSubContainer((int)0);
	func_2369((int)0);
	var_254_int = var_252_int;
	var_255_int = 0; var_256_int = 0;
	var_259_float = var_252_int * (int)5;
	var_256_int = (int)10 + var_259_float;
	func_2458((int)0, var_256_int);
	var_260_string = ""; var_261_int = 0; var_262_int = 0;
	func_2240("bottle_water", (int)1, (int)3);
	var_263_string = ""; var_264_int = 0; var_265_int = 0;
	func_2240("rusk", (int)1, (int)20);
	var_266_string = ""; var_267_int = 0; var_268_int = 0;
	func_2240("hook", (int)1, (int)30);
	var_269_string = ""; var_270_int = 0; var_271_int = 0;
	func_2240("watch", (int)1, (int)30);
	var_273_bool = var_252_int >= (int)3;
	if(var_273_bool != 0) {
		var_274_string = ""; var_275_int = 0; var_276_int = 0; var_277_int = 0;
		func_2251("alpha_pills", (int)1, (int)4, (int)3);
	}
	var_279_bool = var_252_int >= (int)4;
	if(var_279_bool != 0) {
		var_280_string = ""; var_281_int = 0; var_282_int = 0; var_283_int = 0;
		func_2251("beta_pills", (int)1, (int)8, (int)3);
	}
	var_285_bool = var_252_int >= (int)6;
	if(var_285_bool != 0) {
		var_286_string = ""; var_287_int = 0; var_288_int = 0; var_289_int = 0;
		func_2251("gamma_pills", (int)1, (int)16, (int)3);
	}
	return 6;
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_153_object, var_154_object)
{
	var_0_bool = var_154_object;
	var_1_object = var_153_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_160_string = "";
		func_177(var_154_object, "Neutral");
		@@@var_0_bool:SetMessage((int)537930);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)537931, (int)-1, (int)39792);
		@@@var_0_bool:AddReply((int)537932, (int)-1, (int)39793);
		@@@var_0_bool:AddReply((int)537933, (int)-1, (int)39794);
		goto Label_147;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_147:
	var_187_bool = 0;
	func_3127(var_187_bool);
	if(var_187_bool != 0) {

	Label_151:
		lshWaitForAnimEnd();
		var_188_object = var_3_object;
		if(var_188_object != 0) {
		} else {
			var_189_string = "";
			var_189_string = var_2_object;
			func_2191(var_189_string);
			goto Label_151;
	}
		PlayAnimation("all", "idle");

	Label_166:
		WaitForAnimEnd();
		var_202_object = var_3_object;
		if(var_202_object != 0) {
			goto Label_176;
		}
		PlayAnimation("all", "idle");
		goto Label_166;
	}
	goto Label_176;
	
Label_176:
	return 0;
	
}


func_1151(var_0_bool, var_483_float, var_484_int)
{
	var_485_object = Obj(); var_486_float = 0; var_487_float = 0; var_488_object = Obj(); var_489_float = 0; var_490_float = 0;
	var_492_float = var_483_float * (float)0.8999999761581421;
	GetVictim(var_492_float, var_488_object);
	ReportAttack(var_0_bool);
	var_493_bool = var_488_object == var_0_bool;
	if(var_493_bool != 0) {
		var_494_float = 0; var_495_object = Obj(); var_496_int = 0;
		var_488_object = var_495_object;
		var_484_int = var_496_int;
		func_867(var_496_int);
		var_494_float = var_489_float;
		var_497_float = 0; var_498_object = Obj(); var_499_float = 0; var_500_int = 0;
		var_488_object = var_498_object;
		var_489_float = var_499_float;
		var_501_int = 0; var_502_object = Obj(); var_503_int = 0;
		var_488_object = var_502_object;
		var_484_int = var_503_int;
		func_870(var_503_int);
		var_501_int = var_500_int;
		func_1763(var_497_float, var_498_object, var_499_float, var_500_int);
		var_497_float = var_490_float;
		var_562_int = 0;
		func_1534(var_562_int);
		ReportHit(var_0_bool, var_562_int, var_490_float, var_489_float);
		var_563_object = Obj(); var_564_float = 0;
		var_488_object = var_563_object;
		var_490_float = var_564_float;
		func_1541();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2186()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_2191(var_189_string)
{
	var_190_bool = 0; var_191_float = 0; var_192_float = 0; var_193_bool = 0; var_194_float = 0; var_195_float = 0;
	lshHasAnimation(var_193_bool, var_189_string);
	var_196_bool = var_193_bool;
	if(var_196_bool != 0) {
		lshGetAnimTimes(var_189_string, var_194_float, var_195_float);
		lshPlayAnimation(var_194_float, var_195_float, (bool)0);
	} else {
		var_199_int = "Can't find lsh animation : " + var_189_string;
		Trace(var_199_int);
	}
	return 6;
	
}


func_1685(var_187_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_188_string = "";
	var_187_string = var_188_string;
	func_2266(var_188_string);
	PlayAnimation("all", var_187_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_187_string);
	RemoveEnvelope();
	return 0;
}


func_666(var_2_object)
{
	KillTimer((int)1);
	var_19_object = var_2_object;
	if(var_19_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_832(var_17_int);
	return 0;
}


func_2207(var_164_string, var_165_bool)
{
	var_168_bool = 0; var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_float = 0; var_173_float = 0;
	lshHasAnimation(var_171_bool, var_164_string);
	var_174_bool = var_171_bool;
	if(var_174_bool != 0) {
		lshGetAnimTimes(var_164_string, var_172_float, var_173_float);
		lshPlayAnimation(var_172_float, var_173_float, var_165_bool);
	} else {
		var_176_int = "Can't find lsh animation : " + var_164_string;
		Trace(var_176_int);
	}
	return 6;
	
}


func_1190(var_0_bool, var_1_object, var_446_bool, var_447_float)
{
	var_448_int = 0; var_449_bool = 0; var_450_int = 0; var_451_string = ""; var_452_int = 0; var_453_bool = 0; var_454_int = 0; var_455_string = "";
	func_1529(var_455_string);
	irand(var_452_int, var_1_object);
	var_452_int = var_452_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2387();
	var_464_int = "attack_begin" + var_452_int;
	PlayAnimation("all", var_464_int);
	WaitForAnimEnd();
	func_1497(var_454_int, var_455_string);
	var_480_bool = 0; var_481_object = Obj();
	var_481_object = var_0_bool;
	func_1877(var_480_bool, var_481_object);
	var_482_bool = var_480_bool == 0; //@nz
	if(var_482_bool != 0) {
		StopAsync();
		var_446_bool = 0;
		return 8;
	}
	var_483_float = 0; var_484_int = 0;
	var_447_float = var_483_float;
	var_452_int = var_484_int;
	func_1151(var_455_string, var_483_float, var_484_int);
	var_567_int = "attack_middle" + var_452_int;
	HasAnimation(var_453_bool, "all", var_567_int);
	var_568_bool = var_453_bool;
	if(var_568_bool != 0) {
		func_2387();
		var_571_int = "attack_middle" + var_452_int;
		PlayAnimation("all", var_571_int);
		WaitForAnimEnd();
		func_1529(var_455_string);
		var_572_bool = 0; var_573_object = Obj();
		var_573_object = var_0_bool;
		func_1877(var_572_bool, var_573_object);
		var_574_bool = var_572_bool == 0; //@nz
		if(var_574_bool != 0) {
			StopAsync();
			var_446_bool = 0;
			return 8;
		}
		var_575_float = 0; var_576_int = 0;
		var_447_float = var_575_float;
		var_452_int = var_576_int;
		func_1151(var_455_string, var_575_float, var_576_int);
		var_454_int = 1;

	Label_1267:
		var_578_int = "attack_middle" + var_452_int;
		var_580_int = var_578_int + "_";
		var_455_string = var_580_int + var_454_int;
		HasAnimation(var_453_bool, "all", var_455_string);
		var_582_bool = var_453_bool == 0; //@nz
		if(var_582_bool != 0) {
		} else {
			func_2387();
			PlayAnimation("all", var_455_string);
			WaitForAnimEnd();
			func_1529(var_455_string);
			var_598_bool = 0; var_599_object = Obj();
			var_599_object = var_0_bool;
			func_1877(var_598_bool, var_599_object);
			var_600_bool = var_598_bool == 0; //@nz
			if(var_600_bool != 0) {
				StopAsync();
				var_446_bool = 0;
				var_601_float = 0; var_602_int = 0;
				var_447_float = var_601_float;
				var_452_int = var_602_int;
				func_1151(var_455_string, var_601_float, var_602_int);
				var_454_int = var_454_int + (int)1;
				goto Label_1267;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_586_int = "attack_end" + var_452_int;
	PlayAnimation("all", var_586_int);
	var_587_bool = 0;
	func_1543(var_587_bool);
	if(var_587_bool != 0) {
		var_588_bool = 0; var_589_float = 0;
		func_1327(var_588_bool, (float)0.75);
		StopAsync();
	}
	var_446_bool = 1;
	return 8;
	
}


func_2728()
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0;
	ClearSubContainer((int)0);
	func_2369((int)0);
	var_28_int = var_26_int;
	var_34_string = ""; var_35_int = 0; var_36_int = 0; var_37_int = 0;
	func_2251("fresh_meat", (int)1, (int)4, (int)3);
	var_50_string = ""; var_51_int = 0; var_52_int = 0; var_53_int = 0;
	func_2251("dried_meat", (int)1, (int)4, (int)3);
	var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0;
	func_2251("smoked_meat", (int)1, (int)4, (int)3);
	var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0;
	func_2251("vegetables", (int)1, (int)3, (int)3);
	var_63_bool = var_26_int >= (int)3;
	if(var_63_bool != 0) {
		var_64_string = ""; var_65_int = 0; var_66_int = 0;
		func_2240("revolver_ammo", (int)1, (int)5);
		var_73_string = ""; var_74_int = 0; var_75_int = 0;
		func_2240("rifle_ammo", (int)1, (int)5);
		var_76_string = ""; var_77_int = 0; var_78_int = 0;
		func_2240("samopal_ammo", (int)1, (int)5);
	}
	return 6;
}


func_2222(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0);
	@@var_21_object:GetEyesHeight(var_24_float);
	var_25_cvector = CVector(0.0, 0.0, 0.0);
	var_26_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_26_float;
	SetByIndex(var_25_cvector, 1) = var_26_float;
	LookAsync(var_21_object, "head", var_25_cvector);
	return 4;
}


func_177(var_2_object, var_160_string)
{
	var_161_bool = 0;
	func_3127(var_161_bool);
	var_162_bool = var_161_bool == 0; //@nz
	if(var_162_bool != 0) {
		return 0;
	}
	var_163_bool = var_160_string == var_2_object;
	if(var_163_bool != 0) {
		return 0;
	}
	var_164_string = ""; var_165_bool = 0;
	var_160_string = var_164_string;
	var_167_bool = var_160_string == "";
	if(var_167_bool != 0) {
		var_165_bool = 0;
	} else {
		var_165_bool = 1;
	}
	func_2207(var_164_string, var_165_bool);
	var_2_object = var_160_string;
	return 0;
	
}


func_1717(var_525_string, var_526_int)
{
	var_528_bool = var_526_int == (int)2;
	if(var_528_bool != 0) {
		var_525_string = "fire";
		return 0;
	EMIT "GOTO 0x6c1";
	}
	var_530_bool = var_526_int == (int)1;
	if(var_530_bool != 0) {
		var_525_string = "bullet";
		return 0;
	}
	var_525_string = "phys";
	return 0;
}


func_2233()
{
	var_20_bool = 0;
	func_3127(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2240(var_64_string, var_65_int, var_66_int)
{
	var_67_bool = 0; var_68_bool = 0;
	var_69_bool = 0; var_70_int = 0; var_71_int = 0;
	var_65_int = var_70_int;
	var_66_int = var_71_int;
	func_2341(var_69_bool, var_70_int, var_71_int);
	if(var_69_bool != 0) {
		AddItem(var_68_bool, var_64_string, (int)0);
	}
	return 2;
}


func_1731(var_51_cvector, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	GetPosition(var_55_cvector);
	@@var_52_object:GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
	return 4;
}


func_708(var_0_bool, var_1_object, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool)
{
	var_263_bool = 0; var_264_bool = 0; var_265_object = Obj(); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_float = 0; var_270_object = Obj(); var_271_bool = 0; var_272_bool = 0; var_273_object = Obj(); var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_float = 0; var_278_object = Obj();
	var_0_bool = false;
	var_1_object = var_258_object;
	var_262_bool = var_272_bool;
	
Label_712:
	var_279_bool = 0; var_280_object = Obj();
	var_258_object = var_280_object;
	func_848(var_279_bool, var_280_object);
	var_283_bool = var_279_bool == 0; //@nz
	if(var_283_bool != 0) {
		var_257_bool = 0;
		return 16;
	}
	@@var_258_object:GetPosition(var_274_cvector);
	GetPosition(var_275_cvector);
	var_276_cvector = var_274_cvector - var_275_cvector;
	var_277_float = var_276_cvector | var_276_cvector;
	var_284_bool = 0;
	var_284_bool = 0;
	var_286_bool = var_260_float > (int)0;
	if(var_286_bool != 0) {
		var_287_float = var_260_float * var_260_float;
		var_288_bool = var_277_float > var_287_float;
		if(var_288_bool != 0) {
			var_284_bool = 1;
		}
	}
	if(var_284_bool != 0) {
		Stop();
		var_257_bool = 0;
		return 16;
	}
	var_289_float = var_259_float * var_259_float;
	var_290_bool = var_277_float > var_289_float;
	if(var_290_bool != 0) {
		@@var_258_object:GetPFPosition(var_274_cvector);
		FindPathTo(var_278_object, var_274_cvector);
		var_291_bool = var_278_object != 0; //@nn
		if(var_291_bool != 0) {
			var_278_object = var_273_object;
			var_278_object = 0;
		}
		var_292_bool = var_273_object != 0; //@nn
		if(var_292_bool != 0) {
			var_293_bool = var_272_bool;
			if(var_293_bool == 0) goto Label_761;
			var_272_bool = 0;
			RotatePath(var_273_object, var_271_bool);
			var_294_bool = var_271_bool == 0; //@nz
			if(var_294_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_297_string = "";
				func_855(var_297_string);
				var_298_string = "";
				func_857(var_298_string);
				FollowPath(var_273_object, var_261_bool, var_271_bool, var_297_string, var_298_string);
				var_299_bool = var_271_bool == 0; //@nz
				if(var_299_bool != 0) {
					var_300_bool = var_0_bool;
					if(var_300_bool != 0) {
						var_273_object = 0;
						goto Label_808;
					EMIT "GOTO 0x30d";
					}
				} else {
					var_273_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_271_bool);
					var_303_bool = var_271_bool == 0; //@nz
					if(var_303_bool != 0) {
						var_304_bool = var_0_bool;
						if(var_304_bool != 0) {
							var_273_object = 0;
							goto Label_808;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_808;
	}
			var_278_object = 0;
			goto Label_806;

		Label_806:
			var_273_object = 0;

		}
		goto Label_712;
	}
Label_808:
	var_257_bool = !var_0_bool;
	return 16;
	
}


func_1738(var_96_float, var_97_object)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	GetPosition(var_101_cvector);
	@@var_97_object:GetPosition(var_102_cvector);
	var_103_cvector = var_102_cvector - var_101_cvector;
	var_96_float = var_103_cvector | var_103_cvector;
	return 6;
}


func_2251(var_34_string, var_35_int, var_36_int, var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_42_bool = 0; var_43_int = 0; var_44_int = 0;
	var_35_int = var_43_int;
	var_36_int = var_44_int;
	func_2341(var_42_bool, var_43_int, var_44_int);
	if(var_42_bool != 0) {
		irand(var_40_int, var_37_int);
		var_49_int = var_40_int + (int)1;
		AddItem(var_41_bool, var_34_string, (int)0, var_49_int);
	}
	return 4;
}


func_1746(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
	return 2;
}


func_1751(var_31_bool, var_32_object, var_33_string)
{
	var_34_bool = 0; var_35_bool = 0;
	var_38_bool = IsFuncExist(var_32_object, "HasProperty", (int)2);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_31_bool = 0;
		return 2;
	}
	@@var_32_object:HasProperty(var_33_string, var_35_bool);
	var_35_bool = var_31_bool;
	return 2;
}


func_2266(var_188_string)
{
	var_189_bool = 0; var_190_int = 0; var_191_bool = 0; var_192_int = 0; var_193_bool = 0; var_194_float = 0; var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_bool = 0; var_198_int = 0; var_199_bool = 0; var_200_int = 0; var_201_bool = 0; var_202_float = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0);
	IsExisting3DSound(var_197_bool, var_188_string);
	var_205_bool = var_197_bool == 0; //@nz
	if(var_205_bool != 0) {
		var_198_int = 0;

	Label_2272:
		var_207_int = var_198_int + (int)1;
		var_208_int = var_188_string + var_207_int;
		IsExisting3DSound(var_199_bool, var_208_int);
		var_209_bool = var_199_bool == 0; //@nz
		if(var_209_bool != 0) {
		} else {
			var_198_int = var_198_int + (int)1;
			goto Label_2272;
		}
		var_210_bool = var_198_int == 0; //@nz
		if(var_210_bool != 0) {
			return 16;
		}
		irand(var_200_int, var_198_int);
		var_212_int = var_200_int + (int)1;
		var_188_string = var_188_string + var_212_int;
	}
	Is3DSoundLoaded(var_201_bool, var_188_string);
	var_213_bool = var_201_bool;
	if(var_213_bool != 0) {
		GetEyesHeight(var_202_float);
		GetDirection(var_203_cvector);
		var_204_cvector = var_203_cvector * (int)50;
		var_215_float = GetByIndex(var_204_cvector, 1);
		var_215_float = var_215_float + var_202_float;
		SetByIndex(var_204_cvector, 1) = var_215_float;
		PlayGlobalSound(var_188_string, var_204_cvector);
	}
	return 16;
	
}


func_2786(var_60_int, var_61_string)
{
	var_62_int = 0; var_63_int = 0;
	GetInvItemByName(var_63_int, var_61_string);
	var_63_int = var_60_int;
	return 2;
}


func_1763(var_497_float, var_498_object, var_499_float, var_500_int)
{
	var_504_int = 0; var_505_string = ""; var_506_int = 0; var_507_float = 0; var_508_float = 0; var_509_float = 0; var_510_int = 0; var_511_string = ""; var_512_int = 0; var_513_float = 0; var_514_float = 0; var_515_float = 0;
	var_516_bool = 0; var_517_object = Obj(); var_518_string = "";
	var_498_object = var_517_object;
	func_1751(var_516_bool, var_517_object, "health");
	var_519_bool = var_516_bool == 0; //@nz
	if(var_519_bool != 0) {
		var_497_float = 0.0;
		return 12;
	}
	var_520_bool = 0; var_521_object = Obj(); var_522_string = "";
	var_498_object = var_521_object;
	func_1751(var_520_bool, var_521_object, "armor");
	var_523_bool = var_520_bool == 0; //@nz
	if(var_523_bool != 0) {
		var_510_int = 0;
	} else {
			@@var_498_object:GetProperty("armor", var_510_int);
	}
	var_525_string = ""; var_526_int = 0;
	var_500_int = var_526_int;
	func_1717(var_525_string, var_526_int);
	var_511_string = "armor_" + var_525_string;
	var_531_bool = 0; var_532_object = Obj(); var_533_string = "";
	var_498_object = var_532_object;
	var_511_string = var_533_string;
	func_1751(var_531_bool, var_532_object, var_533_string);
	var_534_bool = var_531_bool == 0; //@nz
	if(var_534_bool != 0) {
		var_512_int = 0;
	} else {
		@@var_498_object:GetProperty(var_511_string, var_512_int);

	}
	var_535_float = 0; var_536_float = 0; var_537_float = 0;
	var_538_int = var_510_int + var_512_int;
	var_536_float = var_538_int / (float)100.0;
	func_2323(var_535_float, var_536_float, (float)1);
	var_535_float = var_513_float;
	@@var_498_object:GetProperty("health", var_514_float);
	var_543_int = (int)1 - var_513_float;
	var_515_float = var_499_float * var_543_int;
	var_545_float = 0; var_546_float = 0; var_547_float = 0; var_548_float = 0;
	var_546_float = var_514_float - var_515_float;
	func_2330(var_545_float, var_546_float, (float)0, (float)1);
	@@var_498_object:SetProperty("health", var_545_float);
	var_551_bool = 0; var_552_object = Obj();
	var_498_object = var_552_object;
	func_1746(var_551_bool, var_552_object);
	if(var_551_bool != 0) {
		var_553_float = 0;
		var_553_float = -var_515_float;
		func_2352(var_553_float);
	}
	var_515_float = var_497_float;
	return 12;
	
}


func_2791(var_26_bool, var_27_object, var_28_bool)
{
	var_29_string = ""; var_30_string = "";
	var_31_bool = 0; var_32_object = Obj(); var_33_string = "";
	var_27_object = var_32_object;
	func_1751(var_31_bool, var_32_object, "class");
	var_40_bool = var_31_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_26_bool = 0;
		return 2;
	}
	@@var_27_object:GetProperty("class", var_30_string);
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
	var_47_bool = 0;
	var_47_bool = 1;
	var_48_bool = 0;
	var_48_bool = 1;
	var_49_bool = 0;
	var_49_bool = 1;
	var_50_bool = 0;
	var_50_bool = 1;
	var_51_bool = 0;
	var_51_bool = 1;
	var_53_bool = var_30_string == "patrol";
	if(var_53_bool != 1) {
		var_55_bool = var_30_string == "sanitar";
		if(var_55_bool != 1) {
			var_51_bool = 0;
		}
	}
	if(var_51_bool != 1) {
		var_57_bool = var_30_string == "soldier";
		if(var_57_bool != 1) {
			var_50_bool = 0;
		}
	}
	if(var_50_bool != 1) {
		var_59_bool = var_30_string == "woman";
		if(var_59_bool != 1) {
			var_49_bool = 0;
		}
	}
	if(var_49_bool != 1) {
		var_61_bool = var_30_string == "wasted_girl";
		if(var_61_bool != 1) {
			var_48_bool = 0;
		}
	}
	if(var_48_bool != 1) {
		var_63_bool = var_30_string == "vaxxabitka";
		if(var_63_bool != 1) {
			var_47_bool = 0;
		}
	}
	if(var_47_bool != 1) {
		var_65_bool = var_30_string == "vaxxabit";
		if(var_65_bool != 1) {
			var_46_bool = 0;
		}
	}
	if(var_46_bool != 1) {
		var_67_bool = var_30_string == "little_girl";
		if(var_67_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 1) {
		var_69_bool = var_30_string == "girl";
		if(var_69_bool != 1) {
			var_44_bool = 0;
		}
	}
	if(var_44_bool != 1) {
		var_71_bool = var_30_string == "dohodyaga";
		if(var_71_bool != 1) {
			var_43_bool = 0;
		}
	}
	if(var_43_bool != 1) {
		var_73_bool = var_30_string == "nudegirl";
		if(var_73_bool != 1) {
			var_42_bool = 0;
		}
	}
	if(var_42_bool != 0) {
		var_26_bool = 1;
		return 2;
	}
	var_74_bool = var_28_bool;
	if(var_74_bool != 0) {
		var_26_bool = 0;
		return 2;
	}
	var_26_bool = 1;
	var_75_bool = 0;
	var_75_bool = 1;
	var_76_bool = 0;
	var_76_bool = 1;
	var_77_bool = 0;
	var_77_bool = 1;
	var_78_bool = 0;
	var_78_bool = 1;
	var_79_bool = 0;
	var_79_bool = 1;
	var_81_bool = var_30_string == "worker";
	if(var_81_bool != 1) {
		var_83_bool = var_30_string == "butcher";
		if(var_83_bool != 1) {
			var_79_bool = 0;
		}
	}
	if(var_79_bool != 1) {
		var_85_bool = var_30_string == "boy";
		if(var_85_bool != 1) {
			var_78_bool = 0;
		}
	}
	if(var_78_bool != 1) {
		var_87_bool = var_30_string == "unosha";
		if(var_87_bool != 1) {
			var_77_bool = 0;
		}
	}
	if(var_77_bool != 1) {
		var_89_bool = var_30_string == "wasted_male";
		if(var_89_bool != 1) {
			var_76_bool = 0;
		}
	}
	if(var_76_bool != 1) {
		var_91_bool = var_30_string == "alkash";
		if(var_91_bool != 1) {
			var_75_bool = 0;
		}
	}
	if(var_75_bool != 1) {
		var_93_bool = var_30_string == "morlok";
		if(var_93_bool != 1) {
			var_26_bool = 0;
		}
	}
	return 2;
}


func_2307(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2313(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_49_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_49_cvector = var_50_cvector / var_58_float;
	return 2;
}


func_2323(var_535_float, var_536_float, var_537_float)
{
	var_540_bool = var_536_float < var_537_float;
	if(var_540_bool != 0) {
		var_536_float = var_535_float;
	} else {
		var_537_float = var_535_float;
	}
	return 0;
	
}


func_2330(var_545_float, var_546_float, var_547_float, var_548_float)
{
	var_549_bool = var_546_float < var_547_float;
	if(var_549_bool != 0) {
		var_547_float = var_545_float;
		return 0;
	}
	var_550_bool = var_546_float > var_548_float;
	if(var_550_bool != 0) {
		var_548_float = var_545_float;
		return 0;
	}
	var_546_float = var_545_float;
	return 0;
}


func_2341(var_42_bool, var_43_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0;
	irand(var_46_int, var_44_int);
	var_42_bool = var_46_int < var_43_int;
	return 2;
}


func_810(var_0_bool, var_1_object, var_25_int)
{
	var_27_bool = var_25_int != (int)0;
	if(var_27_bool != 0) {
		return 0;
	}
	var_28_bool = 0; var_29_object = Obj();
	var_29_object = var_1_object;
	func_848(var_28_bool, var_29_object);
	var_64_bool = var_28_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2346(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj();
	CreateObjectSet(var_20_object);
	var_20_object = var_18_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1836(var_45_bool, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	@@var_46_object:IsDead(var_48_bool);
	var_48_bool = var_45_bool;
	return 2;
}


func_1327(var_588_bool, var_589_float)
{
	var_590_float = 0; var_591_bool = 0; var_592_float = 0; var_593_bool = 0;
	rand(var_592_float);
	var_594_bool = var_592_float < var_589_float;
	if(var_594_bool != 0) {

	Label_1332:
		IsAnimationPlaying(var_593_bool);
		var_595_bool = var_593_bool == 0; //@nz
		if(var_595_bool != 0) {
		} else {
			var_596_bool = 0;
			func_1425(var_596_bool);
			if(var_596_bool != 0) {
				var_588_bool = 1;
				sync();
				goto Label_1332;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1529(var_593_bool);
	}
	goto Label_1352;
	
Label_1352:
	var_588_bool = 0;
	return 4;
	
}


func_2352(var_553_float)
{
	var_554_object = Obj(); var_555_object = Obj();
	CreateFloatVector(var_555_object);
	@@var_555_object:add(var_553_float);
	var_557_bool = var_553_float < (int)0;
	if(var_557_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_555_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1841(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj();
	var_40_bool = var_35_object == 0; //@ne
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_41_bool = 0;
	var_41_bool = 0;
	var_44_bool = IsFuncExist(var_35_object, "IsDead", (int)1);
	if(var_44_bool != 0) {
		var_45_bool = 0; var_46_object = Obj();
		var_35_object = var_46_object;
		func_1836(var_45_bool, var_46_object);
		if(var_45_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	GetScene(var_38_object);
	var_49_bool = var_38_object == 0; //@ne
	if(var_49_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	@@var_35_object:GetScene(var_39_object);
	var_50_bool = var_38_object != var_39_object;
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_34_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_832(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2369(var_28_int)
{
	var_29_float = 0; var_30_float = 0;
	GetGameTime(var_30_float);
	var_32_int = 0;
	var_32_int = var_30_float / (int)24;
	var_28_int = (int)1 + var_32_int;
	return 2;
}


func_2378(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_23_bool = var_22_bool;
	if(var_23_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1354(var_0_bool, var_385_bool, var_386_float)
{
	var_387_bool = 0; var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0); var_390_cvector = CVector(0,0,0); var_391_float = 0; var_392_bool = 0; var_393_cvector = CVector(0,0,0); var_394_cvector = CVector(0,0,0); var_395_cvector = CVector(0,0,0); var_396_float = 0;
	
Label_1355:
	IsAnimationPlaying(var_392_bool);
	var_397_bool = var_392_bool == 0; //@nz
	if(var_397_bool != 0) {
	} else {
		var_398_bool = 0;
		func_1425(var_398_bool);
		if(var_398_bool != 0) {
			var_385_bool = 1;
			return 10;
		}
		var_441_bool = 0; var_442_object = Obj();
		var_442_object = var_0_bool;
		func_1877(var_441_bool, var_442_object);
		var_443_bool = var_441_bool == 0; //@nz
		if(var_443_bool != 0) {
			var_385_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_393_cvector);
		GetPFPosition(var_394_cvector);
		var_395_cvector = var_393_cvector - var_394_cvector;
		var_396_float = var_395_cvector | var_395_cvector;
		var_444_float = var_386_float * var_386_float;
		var_445_bool = var_396_float < var_444_float;
		if(var_445_bool != 0) {
			var_446_bool = 0; var_447_float = 0;
			var_386_float = var_447_float;
			func_1190(var_395_cvector, var_396_float, var_446_bool, var_447_float);
			var_385_bool = 1;
			sync();
			goto Label_1355;
		}
		return 10;
	}
	func_1529(var_396_float);
	var_385_bool = 0;
	return 10;
	
}


func_848(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj();
	var_29_object = var_31_object;
	func_1877(var_30_bool, var_31_object);
	var_30_bool = var_28_bool;
	return 0;
}


func_2387()
{
	var_458_object = Obj(); var_459_object = Obj();
	GetScene(var_459_object);
	var_461_object = Obj();
	func_2307(var_461_object);
	BroadcastMessage("battle", var_461_object, var_459_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1877(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0;
	var_34_bool = 0; var_35_object = Obj();
	var_31_object = var_35_object;
	func_1841(var_34_bool, var_35_object);
	var_51_bool = var_34_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_30_bool = 0;
		return 2;
	}
	var_52_bool = 0; var_53_object = Obj(); var_54_string = "";
	var_31_object = var_53_object;
	func_1751(var_52_bool, var_53_object, "noaccess");
	var_61_bool = var_52_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_30_bool = 1;
		return 2;
	}
	@@var_31_object:GetProperty("noaccess", var_33_int);
	var_30_bool = var_33_int == (int)0;
	return 2;
}


func_342(var_0_bool, var_1_object)
{
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_object = Obj(); var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_object = Obj(); var_90_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_85_float, (float)0.5);
	Sleep(var_85_float);
	
Label_350:
	var_92_bool = var_0_bool == 0; //@nz
	if(var_92_bool != 0) {
		var_93_bool = var_1_object == 0; //@nz
		if(var_93_bool != 0) {

		Label_354:
			GetPosition(var_87_cvector);
			var_94_float = 0;
			func_401(var_94_float);
			GetRandomPFPointInCircle(var_86_cvector, var_87_cvector, var_94_float, var_88_bool);
			var_97_bool = var_88_bool;
			if(var_97_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_354;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_370;
	
Label_370:
	var_98_object = Obj(); var_99_cvector = CVector(0,0,0);
	var_86_cvector = var_99_cvector;
	func_431(var_98_object, var_99_cvector);
	var_98_object = var_89_object;
	var_102_bool = var_89_object != 0; //@nn
	if(var_102_bool != 0) {
		RotatePath(var_89_object, var_90_bool);
		var_103_bool = var_90_bool;
		if(var_103_bool != 0) {
			var_104_bool = 0;
			func_429(var_104_bool);
			FollowPath(var_89_object, var_104_bool, var_90_bool);
			var_89_object = 0;
			var_105_bool = var_90_bool;
			if(var_105_bool != 0) {
				TaskCall(4);
				func_503();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_89_object = 0;
	goto Label_350;
	
}


func_855(var_297_string)
{
	var_297_string = "walk";
	return 0;
}


func_857(var_298_string)
{
	var_298_string = "run";
	return 0;
}


func_859(var_153_object, var_154_bool)
{
	var_161_object = Obj(); var_162_bool = 0; var_163_float = 0;
	var_153_object = var_161_object;
	var_154_bool = var_162_bool;
	func_887(var_158_bool, var_159_float, var_160_int, var_153_object, var_154_bool, var_161_object, var_162_bool, (float)180.0);
	return 0;
}


func_2398(var_130_string, var_131_int)
{
	var_132_string = ""; var_133_string = "";
	var_134_int = var_131_int;
	if(var_134_int != 0) {
		"idle" = "idle" + var_131_int;
	}
	var_133_string = var_130_string;
	return 2;
}


func_867(var_494_float)
{
	var_494_float = 0.10000000149011612;
	return 0;
}


func_2405(var_124_int)
{
	var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_bool = 0;
	var_127_int = 0;
	
Label_2407:
	var_130_string = ""; var_131_int = 0;
	var_127_int = var_131_int;
	func_2398(var_130_string, var_131_int);
	HasAnimation(var_128_bool, "all", var_130_string);
	var_135_bool = var_128_bool == 0; //@nz
	if(var_135_bool != 0) {
	} else {
		var_127_int = var_127_int + (int)1;
		goto Label_2407;
	}
	var_127_int = var_124_int;
	return 4;
	
}


func_870(var_501_int)
{
	var_501_int = 0;
	return 0;
}


func_1901(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = "";
	var_49_bool = var_34_object == 0; //@ne
	if(var_49_bool != 0) {
		return 14;
	}
	IsDead(var_42_bool);
	var_50_bool = var_42_bool;
	if(var_50_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_43_int);
	var_52_bool = var_43_int < (int)0;
	if(var_52_bool != 0) {
		return 14;
	}
	@@var_34_object:GetPosition(var_44_cvector);
	GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_55_float = var_53_float * var_54_float;
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	var_58_float = var_56_float * var_57_float;
	var_59_int = var_55_float + var_58_float;
	var_61_bool = var_59_int >= (int)0;
	if(var_61_bool != 0) {
		var_48_string = "fhit";
	} else {
		var_48_string = "bhit";
	}
	var_64_int = var_48_string + "1";
	var_66_int = var_48_string + "2";
	FadeSecondaryAnimation("hit_react", var_64_int, var_66_int, (int)-10);
	return 14;
	
}


func_2927()
{
	var_17_object = GlobalVars[0];
	func_2346(Obj());
	var_18_object = var_17_object;
	GlobalVars[0] = var_17_object;
	return 0;
}


func_1397(var_0_bool, var_400_bool)
{
	var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_cvector = CVector(0,0,0); var_404_float = 0; var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_float = 0;
	var_411_bool = 0; var_412_object = Obj();
	var_412_object = var_0_bool;
	func_1877(var_411_bool, var_412_object);
	var_413_bool = var_411_bool == 0; //@nz
	if(var_413_bool != 0) {
		var_400_bool = 0;
		return 10;
	}
	var_414_bool = 0;
	func_1486(var_410_float, var_414_bool);
	if(var_414_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_406_cvector);
		GetPFPosition(var_407_cvector);
		var_408_cvector = var_406_cvector - var_407_cvector;
		var_409_float = var_408_cvector | var_408_cvector;
		@@@var_0_bool:GetAttackDistance(var_410_float);
		var_410_float = var_410_float + (int)50;
		var_416_float = var_410_float * var_410_float;
		var_400_bool = var_409_float <= var_416_float;
		return 10;
	}
	var_400_bool = 0;
	return 10;
}


func_2422(var_144_int)
{
	var_145_int = 0; var_146_int = 0;
	GetVariable("branch", var_146_int);
	var_149_bool = var_146_int == (int)0;
	if(var_149_bool != 0) {
		var_144_int = 1;
		return 2;
	EMIT "GOTO 0x985";
	}
	var_151_bool = var_146_int == (int)1;
	if(var_151_bool != 0) {
		var_144_int = 2;
		return 2;
	}
	var_144_int = 3;
	return 2;
}


func_887(var_0_bool, var_3_object, var_5_bool, var_161_object, var_162_bool, var_163_float, var_236_bool, var_326_bool)
{
	var_164_float = 0; var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_bool = 0; var_168_bool = 0; var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_bool = 0; var_174_float = 0; var_175_float = 0; var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_bool = 0; var_179_bool = 0; var_180_float = 0; var_181_cvector = CVector(0,0,0); var_182_float = 0; var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_float = 0;
	func_1116(var_183_cvector, var_184_bool, var_185_float);
	var_5_bool = 0;
	var_210_bool = IsFuncExist(var_161_object, "@GetAttackDistance", (int)1);
	if(var_210_bool != 0) {
		@@var_161_object:GetAttackDistance(var_175_float);
		var_175_float = var_175_float + (int)50;
	} else {
							var_163_float = var_175_float;
	}
	var_213_bool = var_175_float >= (int)150;
	if(var_213_bool != 0) {
		var_175_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_161_object;
	IsPlayerActor(var_0_bool, var_178_bool);
	var_214_bool = var_178_bool;
	if(var_214_bool != 0) {
		PlayGlobalMusic("attack");
		var_216_object = Obj();
		func_2307(var_216_object);
		SendPlayerEnemy(var_161_object, var_216_object);
	}
	var_217_bool = var_162_bool;
	if(var_217_bool != 0) {
		var_179_bool = 0;
	} else {
						var_179_bool = 1;

	}
	var_180_float = (float)300.0 + var_175_float;
	
Label_927:
	var_219_bool = 0;
	var_219_bool = 0;
	var_220_bool = 0; var_221_object = Obj();
	var_221_object = var_0_bool;
	func_1877(var_220_bool, var_221_object);
	if(var_220_bool != 0) {
		var_222_bool = var_3_object == 0; //@nz
		if(var_222_bool != 0) {
			var_219_bool = 1;
		}
	}
	if(var_219_bool != 0) {
		func_1529(var_185_float);
		@@@var_0_bool:GetPFPosition(var_176_cvector);
		GetPFPosition(var_177_cvector);
		var_181_cvector = var_176_cvector - var_177_cvector;
		var_182_float = var_181_cvector | var_181_cvector;
		var_228_float = var_180_float * var_180_float;
		var_229_bool = var_182_float >= var_228_float;
		if(var_229_bool != 0) {
			var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0;
			var_231_object = var_0_bool;
			var_175_float = var_232_float;
			TaskCall(5);
			func_603(var_238_bool, var_230_bool, var_231_object, var_232_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_311_bool = var_236_bool == 0; //@nz
			if(var_311_bool != 0) {
			} else {
				var_179_bool = 0;
		} else {
				var_317_float = var_163_float * var_163_float;
				var_318_bool = var_182_float >= var_317_float;
				if(var_318_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_183_cvector);
					CanReachByPF(var_184_bool, var_183_cvector);
					var_319_bool = var_184_bool == 0; //@nz
					if(var_319_bool != 0) {
						var_320_bool = 0; var_321_object = Obj(); var_322_float = 0; var_323_float = 0; var_324_bool = 0; var_325_bool = 0;
						var_321_object = var_0_bool;
						var_175_float = var_322_float;
						TaskCall(5);
						func_603(var_328_bool, var_320_bool, var_321_object, var_322_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_329_bool = var_326_bool == 0; //@nz
						if(var_329_bool != 0) {
							goto Label_1099;
						}
						var_179_bool = 0;
						goto Label_927;
					}
					var_330_bool = var_179_bool == 0; //@nz
					if(var_330_bool != 0) {
						var_331_object = Obj();
						var_331_object = var_0_bool;
						func_2027(var_331_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1529(var_185_float);
						StopAsync();
						var_179_bool = 1;
						var_342_bool = 0; var_343_object = Obj();
						var_343_object = var_0_bool;
						func_1877(var_342_bool, var_343_object);
						var_344_bool = var_342_bool == 0; //@nz
						if(var_344_bool != 0) {
							goto Label_1099;
						}
					}
					rand(var_185_float);
					var_345_bool = 0;
					var_347_bool = var_185_float < (float)0.6000000238418579;
					if(var_347_bool != 1) {
						var_348_bool = 0;
						func_1486((bool)1, var_348_bool);
						if(var_348_bool != 1) {
							var_345_bool = 0;
						}
					}
					if(var_345_bool != 0) {
						Face(var_0_bool);
						func_1536();
						PlayAnimation("all", "attack_stay");
						var_385_bool = 0; var_386_float = 0;
						var_163_float = var_386_float;
						func_1354(var_185_float, var_385_bool, var_386_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1529(var_185_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_607_bool = 0;
						func_1486(var_185_float, var_607_bool);
						var_608_bool = var_607_bool == 0; //@nz
						if(var_608_bool == 0) goto Label_1089;
						var_609_bool = 0; var_610_object = Obj();
						var_610_object = var_0_bool;
						func_1877(var_609_bool, var_610_object);
						var_611_bool = var_609_bool == 0; //@nz
						if(var_611_bool != 0) {
							goto Label_1099;
						}
						@@@var_0_bool:GetPFPosition(var_176_cvector);
						GetPFPosition(var_177_cvector);
						var_181_cvector = var_176_cvector - var_177_cvector;
						var_182_float = var_181_cvector | var_181_cvector;
						var_612_float = var_163_float * var_163_float;
						var_613_bool = var_182_float < var_612_float;
						if(var_613_bool == 0) goto Label_1089;
						var_614_bool = 0; var_615_float = 0;
						var_163_float = var_615_float;
						func_1190(var_184_bool, var_185_float, var_614_bool, var_615_float);
						var_616_bool = var_614_bool == 0; //@nz
						if(var_616_bool == 0) goto Label_1089;
						goto Label_1099;
				}
					var_617_bool = 0; var_618_float = 0;
					var_163_float = var_618_float;
					func_1190(var_184_bool, var_185_float, var_617_bool, var_618_float);
					var_619_bool = var_617_bool == 0; //@nz
					if(var_619_bool != 0) {
						goto Label_1099;
					}
					var_179_bool = 1;

				}
			Label_1089:
				goto Label_1098;
		}
		Label_1098:
			goto Label_927;

		}
	}
Label_1099:
	WaitForAnimEnd();
	var_312_object = var_3_object;
	if(var_312_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_315_bool = var_178_bool;
	if(var_315_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2934(var_215_object)
{
	var_216_bool = 0; var_217_object = Obj();
	var_215_object = var_217_object;
	func_2130(var_216_bool, var_217_object);
	var_248_bool = var_216_bool == 0; //@nz
	if(var_248_bool != 0) {
		return 0;
	}
	var_249_object = Obj();
	var_215_object = var_249_object;
	TaskCall(0);
	func_0(var_249_object);
	TaskReturn();
	var_215_object = Obj();
	func_2186();
	return 0;
}


func_2439(var_144_int)
{
	var_145_int = 0; var_146_int = 0;
	GetVariable("branch", var_146_int);
	var_146_int = var_144_int;
	return 2;
}


func_2953(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_3129(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
	return 0;
}


func_2445(var_21_object)
{
	var_22_int = 0;
	func_2439(var_22_int);
	var_27_bool = var_22_int == (int)1;
	if(var_27_bool != 0) {
		WorkWithCorpse(var_21_object);
	} else {
		Barter(var_21_object);
	}
	return 0;
	
}


func_2960(var_82_object)
{
	var_83_object = Obj();
	var_82_object = var_83_object;
	func_2979(var_83_object);
	return 0;
}


func_401(var_94_float)
{
	var_95_float = 0; var_96_float = 0;
	GetCameraFarDistance(var_96_float);
	var_96_float = var_94_float;
	return 2;
}


func_1425(var_398_bool)
{
	var_399_bool = 0;
	var_399_bool = 0;
	var_400_bool = 0;
	func_1397(var_399_bool, var_400_bool);
	if(var_400_bool != 0) {
		var_417_bool = 0;
		func_1441(var_398_bool, var_399_bool, var_417_bool);
		if(var_417_bool != 0) {
			var_399_bool = 1;
		}
	}
	if(var_399_bool != 0) {
		var_398_bool = 1;
		return 0;
	}
	var_398_bool = 0;
	return 0;
}


func_2966(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_3129(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
	return 0;
}


func_1945(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_object = var_21_object;
	if(var_44_object != 0) {
		var_46_bool = var_22_int != (int)4;
		if(var_46_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_48_bool = var_22_int != (int)5;
		if(var_48_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
		var_51_cvector = CVector(0,0,0); var_52_object = Obj();
		var_21_object = var_52_object;
		func_1731(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_2313(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		CreateVectorVector(var_34_object);
		var_35_int = 1;

	Label_1974:
		var_63_int = "hit" + var_35_int;
		GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector);
		var_64_bool = var_36_bool == 0; //@nz
		if(var_64_bool != 0) {
		} else {
			var_112_int = var_38_cvector | var_33_cvector;
			var_114_bool = var_112_int >= (float)0.7071067690849304;
			if(var_114_bool != 0) {
				@@var_34_object:add(var_37_cvector);
			}
			var_35_int = var_35_int + (int)1;
			goto Label_1974;
		}
		@@var_34_object:size(var_39_int);
		var_65_int = var_39_int;
		if(var_65_int != 0) {
			irand(var_40_int, var_39_int);
			@@var_34_object:get(var_41_cvector, var_40_int);
			var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
			var_21_object = var_66_object;
			var_22_int = var_67_int;
			var_23_float = var_68_float;
			var_41_cvector = var_69_cvector;
			var_70_cvector = -var_33_cvector;
			func_2013(var_68_float, var_69_cvector, var_70_cvector);
			return 18;
		}
		var_34_object = 0;
	}
	var_111_object = Obj();
	var_21_object = var_111_object;
	func_1901(var_111_object);
	return 18;
	
}


func_2458(var_45_int, var_46_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_54_bool = var_45_int > var_46_int;
	if(var_54_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_52_int = 0;
	var_56_bool = var_45_int != var_46_int;
	if(var_56_bool != 0) {
		var_57_int = var_46_int - var_45_int;
		irand(var_52_int, var_57_int);
	} else {
		var_66_bool = var_45_int == (int)0;
		if(var_66_bool == 0) goto Label_2476;
		return 4;
	}
Label_2476:
	var_52_int = var_52_int + var_45_int;
	var_59_bool = var_52_int == (int)0;
	if(var_59_bool != 0) {
		return 4;
	}
	var_60_int = 0; var_61_string = "";
	func_2786(var_60_int, "Money");
	AddItem(var_53_bool, var_60_int, (int)0, var_52_int);
	return 4;
	
}


func_413(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_2973(var_82_object)
{
	var_83_object = Obj();
	var_82_object = var_83_object;
	func_2979(var_83_object);
	return 0;
}


func_1441(var_0_bool, var_4_string, var_417_bool)
{
	var_418_object = Obj(); var_419_bool = 0; var_420_float = 0; var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_object = Obj(); var_424_bool = 0; var_425_float = 0; var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0);
	GetScene(var_423_object);
	var_424_bool = 0;
	
Label_1445:
	var_428_cvector = CVector(0,0,0); var_429_object = Obj();
	var_429_object = var_0_bool;
	func_1731(var_428_cvector, var_429_object);
	var_434_int = -var_428_cvector;
	FindDirLength(var_425_float, var_434_int, var_4_string);
	var_435_bool = var_425_float < var_4_string;
	if(var_435_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_426_cvector);
		GetPFPosition(var_427_cvector);
		WaitForAnimEnd();
		func_1529(var_427_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_424_bool = 1;
		var_439_bool = 0;
		func_1397(var_427_cvector, var_439_bool);
		var_440_bool = var_439_bool == 0; //@nz
		if(var_440_bool != 0) {
			goto Label_1483;
		}
		goto Label_1445;
	}
Label_1483:
	var_424_bool = var_417_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2979(var_83_object)
{
	var_84_object = Obj(); var_85_bool = 0;
	var_83_object = var_84_object;
	TaskCall(6);
	func_859(var_84_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_429(var_104_bool)
{
	var_104_bool = 0;
	return 0;
}


func_2990(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	var_21_bool = var_18_object == 0; //@ne
	if(var_21_bool != 0) {
		return 2;
	}
	var_22_object = GlobalVars[0];
	@@var_22_object:in(var_20_bool, var_18_object);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_24_object = GlobalVars[0];
		@@var_24_object:add(var_18_object);
	}
	var_25_bool = 0; var_26_object = Obj();
	var_18_object = var_26_object;
	func_1746(var_25_bool, var_26_object);
	if(var_25_bool != 0) {
		var_29_object = Obj();
		func_2307(var_29_object);
		ReportReputationChange(var_18_object, var_29_object, (float)-0.07000000029802322);
	}
	return 2;
}


func_431(var_98_object, var_99_cvector)
{
	var_100_object = Obj(); var_101_object = Obj();
	FindShiftedPathTo(var_101_object, var_99_cvector);
	var_101_object = var_98_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2489(var_150_string)
{
	var_151_object = Obj(); var_152_int = 0; var_153_bool = 0; var_154_object = Obj(); var_155_int = 0; var_156_bool = 0;
	CreateInvItem(var_154_object);
	@@var_154_object:SetItemName(var_150_string);
	@@var_154_object:SetProperty("Organ", (int)1);
	@@var_154_object:GetItemID(var_155_int);
	AddItem(var_156_bool, var_154_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_3014(var_151_object)
{
	var_152_object = Obj();
	var_151_object = var_152_object;
	func_2990(var_152_object);
	var_153_object = Obj(); var_154_bool = 0;
	var_151_object = var_153_object;
	TaskCall(6);
	func_859(var_153_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_2506()
{
	var_144_int = 0;
	func_2439(var_144_int);
	var_149_bool = var_144_int != (int)1;
	if(var_149_bool != 0) {
		return 0;
	}
	var_150_string = "";
	func_2489("liver");
	var_161_string = "";
	func_2489("kidney");
	var_162_string = "";
	func_2489("heart");
	var_163_string = "";
	func_2489("blood");
	return 0;
}


func_1486(var_0_bool, var_348_bool)
{
	var_349_bool = 0; var_350_bool = 0;
	var_353_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_353_bool != 0) {
		@@@var_0_bool:IsAttacking(var_350_bool);
		var_350_bool = var_348_bool;
		return 2;
	}
	var_348_bool = 0;
	return 2;
}


func_3029(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1746(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		var_23_object = Obj();
		func_2307(var_23_object);
		ReportReputationChange(var_18_object, var_23_object, (float)-0.12999999523162842, (bool)1);
	}
	var_28_object = Obj();
	var_18_object = var_28_object;
	TaskCall(7);
	func_1549(var_28_object);
	TaskReturn();
	return 0;
}


func_1497(var_2_object, var_5_bool)
{
	var_465_float = 0; var_466_int = 0; var_467_float = 0; var_468_int = 0;
	var_469_bool = var_2_object == 0; //@nz
	if(var_469_bool != 0) {
		return 4;
	}
	var_470_bool = var_5_bool;
	if(var_470_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_473_bool = var_5_bool > (int)0;
		if(var_473_bool != 0) {
			return 4;
		}
	}
	rand(var_467_float);
	var_474_float = 0;
	func_1547(var_474_float);
	var_475_bool = var_467_float < var_474_float;
	if(var_475_bool != 0) {
		irand(var_468_int, var_2_object);
		var_468_int = var_468_int + (int)1;
		var_478_int = "attack" + var_468_int;
		Speak(var_478_int);
		var_479_int = 0;
		func_1545(var_479_int);
		var_5_bool = var_479_int;
	}
	return 4;
}


func_2013(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	GetScene(var_30_object);
	AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	var_34_object = Obj();
	var_23_object = var_34_object;
	func_1901(var_34_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2530()
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0;
	ClearSubContainer((int)0);
	func_2369((int)0);
	var_39_int = var_37_int;
	var_45_int = 0; var_46_int = 0;
	var_49_float = var_37_int * (int)100;
	var_46_int = (int)100 + var_49_float;
	func_2458((int)0, var_46_int);
	var_67_string = ""; var_68_int = 0; var_69_int = 0;
	func_2240("tourniquet", (int)1, (int)7);
	var_78_string = ""; var_79_int = 0; var_80_int = 0;
	func_2240("bandage", (int)1, (int)7);
	var_81_string = ""; var_82_int = 0; var_83_int = 0;
	func_2240("packet", (int)1, (int)10);
	var_84_string = ""; var_85_int = 0; var_86_int = 0;
	func_2240("bottle_water", (int)1, (int)3);
	var_87_string = ""; var_88_int = 0; var_89_int = 0; var_90_int = 0;
	func_2251("rusk", (int)1, (int)3, (int)4);
	var_101_string = ""; var_102_int = 0; var_103_int = 0;
	func_2240("hook", (int)1, (int)20);
	var_104_string = ""; var_105_int = 0; var_106_int = 0;
	func_2240("watch", (int)1, (int)20);
	var_107_bool = 0;
	var_107_bool = 0;
	var_109_bool = var_37_int >= (int)3;
	if(var_109_bool != 0) {
		var_111_bool = var_37_int < (int)6;
		if(var_111_bool != 0) {
			var_107_bool = 1;
		}
	}
	if(var_107_bool != 0) {
		var_112_string = ""; var_113_int = 0; var_114_int = 0; var_115_int = 0;
		func_2251("alpha_pills", (int)1, (int)2, (int)3);
	}
	var_117_bool = var_37_int >= (int)4;
	if(var_117_bool != 0) {
		var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0;
		func_2251("beta_pills", (int)1, (int)4, (int)3);
	}
	var_123_bool = var_37_int >= (int)6;
	if(var_123_bool != 0) {
		var_124_string = ""; var_125_int = 0; var_126_int = 0; var_127_int = 0;
		func_2251("alpha_pills", (int)1, (int)2, (int)8);
		var_128_string = ""; var_129_int = 0; var_130_int = 0; var_131_int = 0;
		func_2251("gamma_pills", (int)1, (int)8, (int)3);
	}
	var_133_bool = var_37_int >= (int)8;
	if(var_133_bool != 0) {
		var_134_string = ""; var_135_int = 0; var_136_int = 0;
		func_2240("revolver_ammo", (int)1, (int)3);
		var_137_string = ""; var_138_int = 0; var_139_int = 0;
		func_2240("rifle_ammo", (int)1, (int)3);
	}
	var_140_int = 0; var_141_string = "";
	func_2786(var_140_int, "patrol_mark");
	AddItem(var_36_bool, var_140_int, (int)0, (int)1);
	return 6;
}


func_2027(var_331_object)
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


func_2038(var_120_bool)
{
	var_121_bool = 0; var_122_bool = 0;
	IsLoaded(var_122_bool);
	var_122_bool = var_120_bool;
	return 2;
}


func_503()
{
	var_106_int = 0; var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_bool = 0; var_111_float = 0; var_112_bool = 0; var_113_int = 0; var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_bool = 0; var_118_float = 0; var_119_bool = 0;
	WaitForAnimEnd();
	var_120_bool = 0;
	func_2038(var_120_bool);
	var_123_bool = var_120_bool == 0; //@nz
	if(var_123_bool != 0) {
		return 14;
	}
	func_2405((int)0);
	var_124_int = var_113_int;
	var_114_int = 0;
	
Label_517:
	var_137_bool = 0;
	var_137_bool = 0;
	var_139_bool = var_114_int < (int)5;
	if(var_139_bool != 0) {
		var_140_bool = 0;
		func_2038(var_140_bool);
		if(var_140_bool != 0) {
			var_137_bool = 1;
		}
	}
	if(var_137_bool != 0) {
		irand(var_115_int, (int)3);
		var_143_bool = var_115_int == (int)0;
		if(var_143_bool != 0) {
			var_144_int = var_113_int;
			if(var_144_int == 0) goto Label_550;
			irand(var_116_int, var_113_int);
			var_146_string = ""; var_147_int = 0;
			var_116_int = var_147_int;
			func_2398(var_146_string, var_147_int);
			PlayAnimation("all", var_146_string);
			WaitForAnimEnd(var_117_bool);
			var_148_bool = var_117_bool == 0; //@nz
			if(var_148_bool != 0) {
			} else {
		} else {
				var_153_bool = var_115_int == (int)1;
				if(var_153_bool != 0) {
					rand(var_118_float, (int)4);
					var_156_int = var_118_float + (int)1;
					Sleep(var_156_int, var_119_bool);
					var_157_bool = var_119_bool == 0; //@nz
					if(var_157_bool != 0) {
						goto Label_579;
					}
					goto Label_568;
				}
				var_158_int = var_114_int;
				if(var_158_int == 0) goto Label_568;
				goto Label_579;
		}
		Label_568:
			var_149_bool = 0;
			func_582(var_149_bool);
			var_150_bool = var_149_bool == 0; //@nz
			if(var_150_bool != 0) {
				goto Label_579;
			}
			ResetAAS();
			var_114_int = var_114_int + (int)1;
			goto Label_517;

		}
	}
Label_579:
	ResetAAS();
	return 14;
	
}


func_1529(var_0_bool)
{
	var_223_object = Obj();
	var_223_object = var_0_bool;
	func_2378(var_223_object);
	return 0;
}


func_2043(var_92_bool, var_93_object, var_94_float)
{
	var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_bool = 0; var_103_bool = 0; var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_bool = 0;
	@@var_93_object:GetPosition(var_105_cvector);
	@@var_93_object:GetEyesHeight(var_104_float);
	var_113_float = GetByIndex(var_105_cvector, 1);
	var_113_float = var_113_float + var_104_float;
	SetByIndex(var_105_cvector, 1) = var_113_float;
	GetPosition(var_106_cvector);
	GetEyesHeight(var_104_float);
	var_114_float = GetByIndex(var_106_cvector, 1);
	var_114_float = var_114_float + var_104_float;
	SetByIndex(var_106_cvector, 1) = var_114_float;
	var_107_cvector = var_105_cvector - var_106_cvector;
	var_115_float = GetByIndex(var_107_cvector, 1);
	SetByIndex(var_107_cvector, 1) = (float)0;
	var_116_int = var_107_cvector | var_107_cvector;
	var_117_float = sqrt(var_116_int);
	var_107_cvector = var_107_cvector / var_117_float;
	var_108_cvector = -var_107_cvector;
	var_118_float = var_107_cvector * var_94_float;
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0);
	var_120_cvector = var_108_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2313(var_119_cvector, var_120_cvector);
	var_128_float = var_119_cvector * (int)25;
	var_129_int = var_118_float + var_128_float;
	var_109_cvector = var_129_int - CVector(0.0, 10.0, 0.0);
	var_110_cvector = var_106_cvector + var_109_cvector;
	IsOverrideActive(var_111_bool);
	var_131_bool = var_111_bool;
	if(var_131_bool != 0) {
		var_92_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_110_cvector, var_108_cvector, (bool)1);
	var_133_float = GetByIndex(var_109_cvector, 0);
	var_134_float = GetByIndex(var_109_cvector, 2);
	Rotate(var_133_float, var_134_float);
	var_135_bool = 0;
	func_3127(var_135_bool);
	if(var_135_bool != 0) {
	} else {
		HasAnimationTrack(var_112_bool, "head");
		var_137_bool = var_112_bool;
		if(var_137_bool == 0) goto Label_2106;
		LookAsyncCamera("head");
	}
Label_2106:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_92_bool = 1;
	return 18;
	
}


func_1534(var_562_int)
{
	var_562_int = 0;
	return 0;
}


