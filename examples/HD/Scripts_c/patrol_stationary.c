// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,ResetAAS/0,KillTimer/1,SetTimer/2,GetPFPosition/1,GetDirection/1,irand/2,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,StopGroup0/0,Stop/0,CanSee/2,SendPlayerEnemy/2,UnlookAsync/1,GetPosition/1,FollowPath/5,RequestClearPath/1,IsPlayerActor/2,PlayGlobalMusic/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetRTEnvelope/2,Hold/0,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/3,AddItem/4,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectSet/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,ReportReputationChange/3,ReportReputationChange/4,GetProperty/2,SignalDeath/1
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:head|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:@GetAttackDistance|A:GetAttackDistance|W:attack|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|A:RemoveStationaryActor|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:hunt|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:battle|A:SetReturnValue|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:tourniquet|W:bandage|W:packet|W:bottle_water|W:rusk|W:hook|W:watch|W:alpha_pills|W:beta_pills|W:gamma_pills|W:revolver_ammo|W:rifle_ammo|W:patrol_mark|W:fresh_meat|W:dried_meat|W:smoked_meat|W:vegetables|W:samopal_ammo|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|A:in|W:prc|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:reputation|W:bomber|W:hunter|W:grabitel|W:disease
// @GLOBALS: 0:object:
// @RUN_OP: 0x242
// @RUN_TASK: 3
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0x109 vars=int,int
// @TASK_3: vars=cvector,cvector params=0
// @EVENT_7: op=0x24c vars=int
// @EVENT_41: op=0x25a vars=object
// @EVENT_0: op=0x263 vars=object
// @EVENT_1: op=0x281 vars=object
// @EVENT_3: op=0x28f vars=object
// @EVENT_17: op=0x2a9 vars=object
// @EVENT_30: op=0x2bd vars=object,object,bool
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_17: op=0x323 vars=object
// @EVENT_30: op=0x329 vars=object,object,bool
// @EVENT_7: op=0x362 vars=int
// @EVENT_1: op=0x37d vars=object
// @EVENT_2: op=0x38c vars=object
// @EVENT_10: op=0x412 vars=object
// @EVENT_41: op=0x41d vars=object
// @TASK_5: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0x43f vars=object
// @EVENT_30: op=0x445 vars=object,object,bool
// @TASK_6: vars= params=1
// @EVENT_0: op=0x719 vars=object
// @EVENT_22: op=0x798 vars=object,int,float,float
// @EVENT_16: op=0x79a vars=object,string
// @EVENT_41: op=0x79c vars=object
// @TASK_7: vars= params=1
// @EVENT_41: op=0x7af vars=object
// @EVENT_1: op=0x7b8 vars=object
// @EVENT_3: op=0x7c6 vars=object
// @EVENT_17: op=0x7da vars=object
// @EVENT_30: op=0x7ee vars=object,object,bool
// @STANDALONE_EVENT_22: op=0xd9b vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xda3 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0xdad vars=object,string
// @STANDALONE_EVENT_42: op=0xdba vars=object,string
// @STANDALONE_EVENT_41: op=0xdc1 vars=object
// @PE: 0x0,0x1a,0x72,0xf3,0x109,0x242,0x24c,0x25a,0x263,0x281,0x28f,0x2a9,0x2bd,0x323,0x329,0x362,0x37d,0x38c,0x400,0x412,0x41d,0x426,0x431,0x439,0x43c,0x43f,0x445,0x6db,0x70a,0x77e,0x798,0x79a,0x79c,0x79e,0x7af,0x7b8,0x7c6,0x7da,0x7ee,0x7fb,0x993,0x9cb,0xa44,0xaaf,0xab6,0xaff,0xb04,0xb10,0xb1c,0xb3f,0xd28,0xd3b,0xd42,0xd48,0xd4f,0xd55,0xd78,0xd87,0xd9b,0xda3,0xdba,0xdc1

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0;
	func_3561(var_18_bool);
	if(var_18_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_cvector, var_9_cvector, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int)
{
	if((int)1 != 0) {
		func_2554();
		var_22_bool = var_18_int == (int)39797;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_bool;
			func_2815(var_24_object);
		}
		var_27_bool = var_18_int == (int)39798;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_bool;
			func_2815(var_29_object);
		}
		var_31_bool = var_17_float == (int)39796;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537935);
			@@@var_0_bool:ClearReplies();
			var_50_bool = 0; var_51_object = Obj();
			var_51_object = var_1_object;
			func_2832(var_51_object);
			var_58_bool = var_50_bool == 0; //@nz
			if(var_58_bool != 0) {
				@@@var_0_bool:AddReply((int)537936, (int)-1, (int)39797);
			}
			var_62_bool = 0; var_63_object = Obj();
			var_63_object = var_1_object;
			func_2832(var_63_object);
			if(var_62_bool != 0) {
				@@@var_0_bool:AddReply((int)537937, (int)-1, (int)39798);
			}
			var_67_bool = 0; var_68_object = Obj();
			var_68_object = var_1_object;
			func_2820(var_68_object);
			if(var_67_bool != 0) {
				@@@var_0_bool:AddReply((int)537938, (int)39800, (int)39799);
			}
			var_76_bool = 0; var_77_object = Obj();
			var_77_object = var_1_object;
			func_2832(var_77_object);
			if(var_76_bool != 0) {
				@@@var_0_bool:AddReply((int)537951, (int)39813, (int)39812);
			}
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_2844(var_82_object);
			if(var_81_bool != 0) {
				@@@var_0_bool:AddReply((int)537964, (int)-1, (int)39826);
			}
			var_90_bool = 0; var_91_object = Obj();
			var_91_object = var_1_object;
			func_2820(var_91_object);
			if(var_90_bool != 0) {
				@@@var_0_bool:AddReply((int)537965, (int)-1, (int)39827);
			}
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_2844(var_96_object);
			if(var_95_bool != 0) {
				@@@var_0_bool:AddReply((int)537966, (int)-1, (int)39828);
			}
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_2832(var_101_object);
			if(var_100_bool != 0) {
				@@@var_0_bool:AddReply((int)537967, (int)-1, (int)39829);
			}
			return 0;
		}
		var_106_bool = var_17_float == (int)39813;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537952);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537953, (int)39815, (int)39814);
			@@@var_0_bool:AddReply((int)537960, (int)39823, (int)39822);
			return 0;
		}
		var_116_bool = var_17_float == (int)39823;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537961);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537962, (int)-1, (int)39824);
			@@@var_0_bool:AddReply((int)537963, (int)-1, (int)39825);
			return 0;
		}
		var_126_bool = var_17_float == (int)39815;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537954);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537955, (int)39817, (int)39816);
			@@@var_0_bool:AddReply((int)537959, (int)39823, (int)39820);
			return 0;
		}
		var_136_bool = var_17_float == (int)39817;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537956);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537957, (int)-1, (int)39818);
			@@@var_0_bool:AddReply((int)537958, (int)-1, (int)39819);
			return 0;
		}
		var_146_bool = var_17_float == (int)39800;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537939);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537940, (int)39802, (int)39801);
			@@@var_0_bool:AddReply((int)537947, (int)39809, (int)39808);
			return 0;
		}
		var_156_bool = var_17_float == (int)39809;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537948);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537949, (int)-1, (int)39810);
			@@@var_0_bool:AddReply((int)537950, (int)-1, (int)39811);
			return 0;
		}
		var_166_bool = var_17_float == (int)39802;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537941);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537942, (int)39804, (int)39803);
			@@@var_0_bool:AddReply((int)537946, (int)-1, (int)39807);
			return 0;
		}
		var_176_bool = var_17_float == (int)39804;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_243(var_18_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537943);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537944, (int)-1, (int)39805);
			@@@var_0_bool:AddReply((int)537945, (int)-1, (int)39806);
			return 0;
		}
		var_3_object = true;
		var_185_bool = 0;
		func_3561(var_185_bool);
		if(var_185_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x10a";
	
}


task_3_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_19_bool = var_17_int == (int)1;
	if(var_19_bool != 0) {
		ResetAAS();
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_595();
	var_17_int = Obj();
	func_3521();
	return 0;
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_int = var_19_object;
	func_3563(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		return 0;
	}
	func_595();
	var_141_int = 0; var_142_object = Obj();
	var_17_int = var_142_object;
	TaskCall(1);
	func_40(var_143_object, var_141_int, var_142_object);
	TaskReturn();
	var_320_bool = (int)1000 == var_143_object;
	if(var_320_bool != 0) {
		var_321_object = Obj();
		var_17_int = var_321_object;
		func_3368(var_321_object);
	}
	return 0;
}


task_3_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_int = var_19_object;
	func_3400(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_595();
		var_142_object = Obj();
		var_17_int = var_142_object;
		func_3407(var_142_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_int = var_19_object;
	func_3387(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_595();
		var_142_bool = 0; var_143_object = Obj();
		var_17_int = var_143_object;
		func_2072(var_142_bool, var_143_object);
		if(var_142_bool != 0) {
			var_144_object = Obj();
			var_17_int = var_144_object;
			TaskCall(7);
			func_1950(var_144_object);
			TaskReturn();
		} else {
			var_156_object = Obj();
			var_17_int = var_156_object;
			func_3394(var_156_object);
		}
	}
	return 0;
	
}


	task_3_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_106_object)
	{
	var_107_bool = 0; var_108_object = Obj();
	var_106_object = var_108_object;
	func_2203(var_107_bool, var_108_object);
	var_135_bool = var_107_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_136_object = Obj();
		var_106_object = var_136_object;
		func_3424(var_136_object);
		return 0;
	}
	func_595();
	var_152_object = Obj();
	var_106_object = var_152_object;
	func_3448(var_152_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_17_bool = var_21_object;
	var_18_float = var_22_object;
	var_19_int = var_23_bool;
	func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool);
	if(var_20_bool != 0) {
		var_17_bool = Obj();
		func_681();
	}
	return 0;
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_object = Obj();
	var_17_int = var_18_object;
	func_3424(var_18_object);
	return 0;
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_17_bool = var_21_object;
	var_18_float = var_22_object;
	var_19_int = var_23_bool;
	func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool);
	return 0;
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_19_bool = var_17_int == (int)1;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_20_object = var_1_object;
		func_2795(var_20_object);
	} else {
		var_25_int = 0;
		var_17_int = var_25_int;
		func_1024(var_16_float, var_17_int, var_25_int);
	}
	return 0;
	
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
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
		func_2543(var_21_object);
	}
	return 0;
}


task_4_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
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


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	RequestClearPath(var_17_int);
	return 0;
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_880(var_17_int);
	var_17_int = Obj();
	func_3521();
	return 0;
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_3424(var_18_object);
	return 0;
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_17_object = var_21_object;
	var_18_object = var_22_object;
	var_19_bool = var_23_bool;
	func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool);
	return 0;
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsOverrideActive(var_19_bool);
	var_20_bool = var_19_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_17_object = var_21_object;
		func_2879(var_21_object);
	}
	return 2;
}


task_6_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	return 0;
}


task_6_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	return 0;
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	func_1962();
	var_17_object = Obj();
	func_3521();
	return 0;
}


task_7_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_object = var_19_object;
	func_3400(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_1962();
		var_141_object = Obj();
		var_17_object = var_141_object;
		func_3407(var_141_object);
	}
	return 0;
}


task_7_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_object = var_19_object;
	func_3387(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		var_141_bool = 0; var_142_object = Obj();
		var_17_object = var_142_object;
		func_2072(var_141_bool, var_142_object);
		if(var_141_bool != 0) {
			return 0;
		}
		func_1962();
		var_143_object = Obj();
		var_17_object = var_143_object;
		func_3394(var_143_object);
	}
	return 0;
}


	task_7_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool, var_106_object)
	{
	var_107_bool = 0; var_108_object = Obj();
	var_106_object = var_108_object;
	func_2203(var_107_bool, var_108_object);
	var_135_bool = var_107_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_136_object = Obj();
		var_106_object = var_136_object;
		func_3424(var_136_object);
		return 0;
	}
	func_1962();
	var_151_object = Obj();
	var_106_object = var_151_object;
	func_3448(var_151_object);
	return 0;
	}


task_7_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_17_object = var_21_object;
	var_18_object = var_22_object;
	var_19_bool = var_23_bool;
	func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool);
	if(var_20_bool != 0) {
		var_17_object = Obj();
		func_2010();
	}
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_2271(var_21_object, var_22_int, var_23_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	var_17_object = var_23_object;
	var_18_int = var_24_int;
	var_19_float = var_25_float;
	var_21_cvector = var_26_cvector;
	var_22_cvector = var_27_cvector;
	func_2339(var_25_float, var_26_cvector, var_27_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
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


event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	var_20_bool = var_18_string == "prc";
	if(var_20_bool != 0) {
		ResetAAS();
	}
	return 0;
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_3463(var_18_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int)
{
	func_3361();
	func_3162();
	func_714(var_15_float, var_16_int);
	return 0;
}


func_1024(var_0_bool, var_1_object, var_25_int)
{
	var_27_bool = var_25_int != (int)0;
	if(var_27_bool != 0) {
		return 0;
	}
	var_28_bool = 0; var_29_object = Obj();
	var_29_object = var_1_object;
	func_1062(var_28_bool, var_29_object);
	var_64_bool = var_28_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2561(var_64_string, var_65_int, var_66_int)
{
	var_67_bool = 0; var_68_bool = 0;
	var_69_bool = 0; var_70_int = 0; var_71_int = 0;
	var_65_int = var_70_int;
	var_66_int = var_71_int;
	func_2753(var_69_bool, var_70_int, var_71_int);
	if(var_69_bool != 0) {
		AddItem(var_68_bool, var_64_string, (int)0);
	}
	return 2;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_357_bool = 0;
	func_3561(var_357_bool);
	if(var_357_bool != 0) {
		var_358_string = "";
		func_2512("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_359_bool = var_0_bool;
	if(var_359_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_1541(var_588_bool, var_589_float)
{
	var_590_float = 0; var_591_bool = 0; var_592_float = 0; var_593_bool = 0;
	rand(var_592_float);
	var_594_bool = var_592_float < var_589_float;
	if(var_594_bool != 0) {

	Label_1546:
		IsAnimationPlaying(var_593_bool);
		var_595_bool = var_593_bool == 0; //@nz
		if(var_595_bool != 0) {
		} else {
			var_596_bool = 0;
			func_1639(var_596_bool);
			if(var_596_bool != 0) {
				var_588_bool = 1;
				sync();
				goto Label_1546;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1743(var_593_bool);
	}
	goto Label_1566;
	
Label_1566:
	var_588_bool = 0;
	return 4;
	
}


func_2057(var_51_cvector, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	GetPosition(var_55_cvector);
	@@var_52_object:GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
	return 4;
}


func_2572(var_34_string, var_35_int, var_36_int, var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_42_bool = 0; var_43_int = 0; var_44_int = 0;
	var_35_int = var_43_int;
	var_36_int = var_44_int;
	func_2753(var_42_bool, var_43_int, var_44_int);
	if(var_42_bool != 0) {
		irand(var_40_int, var_37_int);
		var_49_int = var_40_int + (int)1;
		AddItem(var_41_bool, var_34_string, (int)0, var_49_int);
	}
	return 4;
}


func_2064(var_96_float, var_97_object)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	GetPosition(var_101_cvector);
	@@var_97_object:GetPosition(var_102_cvector);
	var_103_cvector = var_102_cvector - var_101_cvector;
	var_96_float = var_103_cvector | var_103_cvector;
	return 6;
}


func_3091()
{
	var_253_int = 0; var_254_bool = 0; var_255_int = 0; var_256_int = 0; var_257_bool = 0; var_258_int = 0;
	ClearSubContainer((int)0);
	func_2786((int)0);
	var_260_int = var_258_int;
	var_261_int = 0; var_262_int = 0;
	var_265_float = var_258_int * (int)5;
	var_262_int = (int)10 + var_265_float;
	func_2892((int)0, var_262_int);
	var_266_string = ""; var_267_int = 0; var_268_int = 0;
	func_2561("bottle_water", (int)1, (int)3);
	var_269_string = ""; var_270_int = 0; var_271_int = 0;
	func_2561("rusk", (int)1, (int)20);
	var_272_string = ""; var_273_int = 0; var_274_int = 0;
	func_2561("hook", (int)1, (int)30);
	var_275_string = ""; var_276_int = 0; var_277_int = 0;
	func_2561("watch", (int)1, (int)30);
	var_279_bool = var_258_int >= (int)3;
	if(var_279_bool != 0) {
		var_280_string = ""; var_281_int = 0; var_282_int = 0; var_283_int = 0;
		func_2572("alpha_pills", (int)1, (int)4, (int)3);
	}
	var_285_bool = var_258_int >= (int)4;
	if(var_285_bool != 0) {
		var_286_string = ""; var_287_int = 0; var_288_int = 0; var_289_int = 0;
		func_2572("beta_pills", (int)1, (int)8, (int)3);
	}
	var_291_bool = var_258_int >= (int)6;
	if(var_291_bool != 0) {
		var_292_string = ""; var_293_int = 0; var_294_int = 0; var_295_int = 0;
		func_2572("gamma_pills", (int)1, (int)16, (int)3);
	}
	return 6;
}


func_1046(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2072(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
	return 2;
}


func_2587(var_194_string)
{
	var_195_bool = 0; var_196_int = 0; var_197_bool = 0; var_198_int = 0; var_199_bool = 0; var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_bool = 0; var_204_int = 0; var_205_bool = 0; var_206_int = 0; var_207_bool = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0);
	IsExisting3DSound(var_203_bool, var_194_string);
	var_211_bool = var_203_bool == 0; //@nz
	if(var_211_bool != 0) {
		var_204_int = 0;

	Label_2593:
		var_213_int = var_204_int + (int)1;
		var_214_int = var_194_string + var_213_int;
		IsExisting3DSound(var_205_bool, var_214_int);
		var_215_bool = var_205_bool == 0; //@nz
		if(var_215_bool != 0) {
		} else {
			var_204_int = var_204_int + (int)1;
			goto Label_2593;
		}
		var_216_bool = var_204_int == 0; //@nz
		if(var_216_bool != 0) {
			return 16;
		}
		irand(var_206_int, var_204_int);
		var_218_int = var_206_int + (int)1;
		var_194_string = var_194_string + var_218_int;
	}
	Is3DSoundLoaded(var_207_bool, var_194_string);
	var_219_bool = var_207_bool;
	if(var_219_bool != 0) {
		GetEyesHeight(var_208_float);
		GetDirection(var_209_cvector);
		var_210_cvector = var_209_cvector * (int)50;
		var_221_float = GetByIndex(var_210_cvector, 1);
		var_221_float = var_221_float + var_208_float;
		SetByIndex(var_210_cvector, 1) = var_221_float;
		PlayGlobalSound(var_194_string, var_210_cvector);
	}
	return 16;
	
}


func_2077(var_31_bool, var_32_object, var_33_string)
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


func_1568(var_0_bool, var_385_bool, var_386_float)
{
	var_387_bool = 0; var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0); var_390_cvector = CVector(0,0,0); var_391_float = 0; var_392_bool = 0; var_393_cvector = CVector(0,0,0); var_394_cvector = CVector(0,0,0); var_395_cvector = CVector(0,0,0); var_396_float = 0;
	
Label_1569:
	IsAnimationPlaying(var_392_bool);
	var_397_bool = var_392_bool == 0; //@nz
	if(var_397_bool != 0) {
	} else {
		var_398_bool = 0;
		func_1639(var_398_bool);
		if(var_398_bool != 0) {
			var_385_bool = 1;
			return 10;
		}
		var_441_bool = 0; var_442_object = Obj();
		var_442_object = var_0_bool;
		func_2203(var_441_bool, var_442_object);
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
			func_1404(var_395_cvector, var_396_float, var_446_bool, var_447_float);
			var_385_bool = 1;
			sync();
			goto Label_1569;
		}
		return 10;
	}
	func_1743(var_396_float);
	var_385_bool = 0;
	return 10;
	
}


func_1062(var_279_bool, var_280_object)
{
	var_281_bool = 0; var_282_object = Obj();
	var_280_object = var_282_object;
	func_2203(var_281_bool, var_282_object);
	var_281_bool = var_279_bool;
	return 0;
}


func_40(var_0_bool, var_141_int, var_142_object)
{
	var_144_object = Obj(); var_145_bool = 0; var_146_int = 0; var_147_bool = 0; var_148_object = Obj(); var_149_bool = 0; var_150_int = 0; var_151_bool = 0;
	var_0_bool = var_142_object;
	var_152_bool = 0; var_153_object = Obj(); var_154_float = 0;
	var_142_object = var_153_object;
	func_2364(var_152_bool, var_153_object, (float)70.0);
	var_199_bool = var_152_bool == 0; //@nz
	if(var_199_bool != 0) {
		var_141_int = -2;
		return 8;
	}
	CreateDialog(var_148_object);
	var_200_int = 0;
	func_3555(var_200_int);
	@@var_148_object:SetNPCName(var_200_int);
	var_201_int = 0;
	func_3553(var_201_int);
	@@var_148_object:SetNPCDescription(var_201_int);
	var_202_string = "";
	func_3557(var_202_string);
	@@var_148_object:SetPhoto(var_202_string);
	var_203_string = "";
	func_3559(var_203_string);
	@@var_148_object:SetPhoto2(var_203_string);
	var_204_int = 0;
	func_2856(var_204_int);
	@@var_148_object:SetPlayerName(var_204_int);
	IsOverrideActive(var_149_bool);
	var_212_bool = var_149_bool;
	if(var_212_bool != 0) {
		var_141_int = -2;
		return 8;
	}
	DoDialog(var_148_object);
	var_213_object = Obj(); var_214_object = Obj();
	var_142_object = var_213_object;
	var_148_object = var_214_object;
	TaskCall(2);
	func_114(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object);
	TaskReturn();
	@@var_148_object:IsDialogEnd(var_151_bool);
	
Label_96:
	var_311_bool = var_151_bool == 0; //@nz
	if(var_311_bool != 0) {
		sync();
		@@var_148_object:IsDialogEnd(var_151_bool);
		goto Label_96;
	}
	var_142_object = Obj();
	func_2433();
	StopDialog(var_148_object);
	@@var_148_object:GetReturnValue((int)-1);
	var_150_int = var_141_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2089(var_497_float, var_498_object, var_499_float, var_500_int)
{
	var_504_int = 0; var_505_string = ""; var_506_int = 0; var_507_float = 0; var_508_float = 0; var_509_float = 0; var_510_int = 0; var_511_string = ""; var_512_int = 0; var_513_float = 0; var_514_float = 0; var_515_float = 0;
	var_516_bool = 0; var_517_object = Obj(); var_518_string = "";
	var_498_object = var_517_object;
	func_2077(var_516_bool, var_517_object, "health");
	var_519_bool = var_516_bool == 0; //@nz
	if(var_519_bool != 0) {
		var_497_float = 0.0;
		return 12;
	}
	var_520_bool = 0; var_521_object = Obj(); var_522_string = "";
	var_498_object = var_521_object;
	func_2077(var_520_bool, var_521_object, "armor");
	var_523_bool = var_520_bool == 0; //@nz
	if(var_523_bool != 0) {
		var_510_int = 0;
	} else {
			@@var_498_object:GetProperty("armor", var_510_int);
	}
	var_525_string = ""; var_526_int = 0;
	var_500_int = var_526_int;
	func_2043(var_525_string, var_526_int);
	var_511_string = "armor_" + var_525_string;
	var_531_bool = 0; var_532_object = Obj(); var_533_string = "";
	var_498_object = var_532_object;
	var_511_string = var_533_string;
	func_2077(var_531_bool, var_532_object, var_533_string);
	var_534_bool = var_531_bool == 0; //@nz
	if(var_534_bool != 0) {
		var_512_int = 0;
	} else {
		@@var_498_object:GetProperty(var_511_string, var_512_int);

	}
	var_535_float = 0; var_536_float = 0; var_537_float = 0;
	var_538_int = var_510_int + var_512_int;
	var_536_float = var_538_int / (float)100.0;
	func_2735(var_535_float, var_536_float, (float)1);
	var_535_float = var_513_float;
	@@var_498_object:GetProperty("health", var_514_float);
	var_543_int = (int)1 - var_513_float;
	var_515_float = var_499_float * var_543_int;
	var_545_float = 0; var_546_float = 0; var_547_float = 0; var_548_float = 0;
	var_546_float = var_514_float - var_515_float;
	func_2742(var_545_float, var_546_float, (float)0, (float)1);
	@@var_498_object:SetProperty("health", var_545_float);
	var_551_bool = 0; var_552_object = Obj();
	var_498_object = var_552_object;
	func_2072(var_551_bool, var_552_object);
	if(var_551_bool != 0) {
		var_553_float = 0;
		var_553_float = -var_515_float;
		func_2769(var_553_float);
	}
	var_515_float = var_497_float;
	return 12;
	
}


func_1069(var_297_string)
{
	var_297_string = "walk";
	return 0;
}


func_1071(var_298_string)
{
	var_298_string = "run";
	return 0;
}


func_1073(var_153_object, var_154_bool)
{
	var_161_object = Obj(); var_162_bool = 0; var_163_float = 0;
	var_153_object = var_161_object;
	var_154_bool = var_162_bool;
	func_1101(var_158_bool, var_159_float, var_160_int, var_153_object, var_154_bool, var_161_object, var_162_bool, (float)180.0);
	return 0;
}


func_1081(var_494_float)
{
	var_494_float = 0.10000000149011612;
	return 0;
}


func_1084(var_501_int)
{
	var_501_int = 0;
	return 0;
}


func_2628(var_86_bool, var_87_string)
{
	var_86_bool = 1;
	var_88_bool = 0;
	var_88_bool = 1;
	var_89_bool = 0;
	var_89_bool = 1;
	var_90_bool = 0;
	var_90_bool = 1;
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
	var_100_bool = var_87_string == "woman";
	if(var_100_bool != 1) {
		var_102_bool = var_87_string == "worker";
		if(var_102_bool != 1) {
			var_98_bool = 0;
		}
	}
	if(var_98_bool != 1) {
		var_104_bool = var_87_string == "butcher";
		if(var_104_bool != 1) {
			var_97_bool = 0;
		}
	}
	if(var_97_bool != 1) {
		var_106_bool = var_87_string == "wasted_girl";
		if(var_106_bool != 1) {
			var_96_bool = 0;
		}
	}
	if(var_96_bool != 1) {
		var_108_bool = var_87_string == "boy";
		if(var_108_bool != 1) {
			var_95_bool = 0;
		}
	}
	if(var_95_bool != 1) {
		var_110_bool = var_87_string == "vaxxabitka";
		if(var_110_bool != 1) {
			var_94_bool = 0;
		}
	}
	if(var_94_bool != 1) {
		var_112_bool = var_87_string == "unosha";
		if(var_112_bool != 1) {
			var_93_bool = 0;
		}
	}
	if(var_93_bool != 1) {
		var_114_bool = var_87_string == "wasted_male";
		if(var_114_bool != 1) {
			var_92_bool = 0;
		}
	}
	if(var_92_bool != 1) {
		var_116_bool = var_87_string == "alkash";
		if(var_116_bool != 1) {
			var_91_bool = 0;
		}
	}
	if(var_91_bool != 1) {
		var_118_bool = var_87_string == "dohodyaga";
		if(var_118_bool != 1) {
			var_90_bool = 0;
		}
	}
	if(var_90_bool != 1) {
		var_120_bool = var_87_string == "vaxxabit";
		if(var_120_bool != 1) {
			var_89_bool = 0;
		}
	}
	if(var_89_bool != 1) {
		var_122_bool = var_87_string == "nudegirl";
		if(var_122_bool != 1) {
			var_88_bool = 0;
		}
	}
	if(var_88_bool != 1) {
		var_124_bool = var_87_string == "morlok";
		if(var_124_bool != 1) {
			var_86_bool = 0;
		}
	}
	return 0;
}


func_1611(var_0_bool, var_400_bool)
{
	var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_cvector = CVector(0,0,0); var_404_float = 0; var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_float = 0;
	var_411_bool = 0; var_412_object = Obj();
	var_412_object = var_0_bool;
	func_2203(var_411_bool, var_412_object);
	var_413_bool = var_411_bool == 0; //@nz
	if(var_413_bool != 0) {
		var_400_bool = 0;
		return 10;
	}
	var_414_bool = 0;
	func_1700(var_410_float, var_414_bool);
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


func_1101(var_0_bool, var_3_object, var_5_bool, var_161_object, var_162_bool, var_163_float, var_236_bool, var_326_bool)
{
	var_164_float = 0; var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_bool = 0; var_168_bool = 0; var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_bool = 0; var_174_float = 0; var_175_float = 0; var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_bool = 0; var_179_bool = 0; var_180_float = 0; var_181_cvector = CVector(0,0,0); var_182_float = 0; var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_float = 0;
	func_1330(var_183_cvector, var_184_bool, var_185_float);
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
		func_2715(var_216_object);
		SendPlayerEnemy(var_161_object, var_216_object);
	}
	var_217_bool = var_162_bool;
	if(var_217_bool != 0) {
		var_179_bool = 0;
	} else {
						var_179_bool = 1;

	}
	var_180_float = (float)300.0 + var_175_float;
	
Label_1141:
	var_219_bool = 0;
	var_219_bool = 0;
	var_220_bool = 0; var_221_object = Obj();
	var_221_object = var_0_bool;
	func_2203(var_220_bool, var_221_object);
	if(var_220_bool != 0) {
		var_222_bool = var_3_object == 0; //@nz
		if(var_222_bool != 0) {
			var_219_bool = 1;
		}
	}
	if(var_219_bool != 0) {
		func_1743(var_185_float);
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
			TaskCall(4);
			func_817(var_238_bool, var_230_bool, var_231_object, var_232_float, (float)3000.0, (bool)1, (bool)0);
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
						TaskCall(4);
						func_817(var_328_bool, var_320_bool, var_321_object, var_322_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_329_bool = var_326_bool == 0; //@nz
						if(var_329_bool != 0) {
							goto Label_1313;
						}
						var_179_bool = 0;
						goto Label_1141;
					}
					var_330_bool = var_179_bool == 0; //@nz
					if(var_330_bool != 0) {
						var_331_object = Obj();
						var_331_object = var_0_bool;
						func_2353(var_331_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1743(var_185_float);
						StopAsync();
						var_179_bool = 1;
						var_342_bool = 0; var_343_object = Obj();
						var_343_object = var_0_bool;
						func_2203(var_342_bool, var_343_object);
						var_344_bool = var_342_bool == 0; //@nz
						if(var_344_bool != 0) {
							goto Label_1313;
						}
					}
					rand(var_185_float);
					var_345_bool = 0;
					var_347_bool = var_185_float < (float)0.6000000238418579;
					if(var_347_bool != 1) {
						var_348_bool = 0;
						func_1700((bool)1, var_348_bool);
						if(var_348_bool != 1) {
							var_345_bool = 0;
						}
					}
					if(var_345_bool != 0) {
						Face(var_0_bool);
						func_1750();
						PlayAnimation("all", "attack_stay");
						var_385_bool = 0; var_386_float = 0;
						var_163_float = var_386_float;
						func_1568(var_185_float, var_385_bool, var_386_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1743(var_185_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_607_bool = 0;
						func_1700(var_185_float, var_607_bool);
						var_608_bool = var_607_bool == 0; //@nz
						if(var_608_bool == 0) goto Label_1303;
						var_609_bool = 0; var_610_object = Obj();
						var_610_object = var_0_bool;
						func_2203(var_609_bool, var_610_object);
						var_611_bool = var_609_bool == 0; //@nz
						if(var_611_bool != 0) {
							goto Label_1313;
						}
						@@@var_0_bool:GetPFPosition(var_176_cvector);
						GetPFPosition(var_177_cvector);
						var_181_cvector = var_176_cvector - var_177_cvector;
						var_182_float = var_181_cvector | var_181_cvector;
						var_612_float = var_163_float * var_163_float;
						var_613_bool = var_182_float < var_612_float;
						if(var_613_bool == 0) goto Label_1303;
						var_614_bool = 0; var_615_float = 0;
						var_163_float = var_615_float;
						func_1404(var_184_bool, var_185_float, var_614_bool, var_615_float);
						var_616_bool = var_614_bool == 0; //@nz
						if(var_616_bool == 0) goto Label_1303;
						goto Label_1313;
				}
					var_617_bool = 0; var_618_float = 0;
					var_163_float = var_618_float;
					func_1404(var_184_bool, var_185_float, var_617_bool, var_618_float);
					var_619_bool = var_617_bool == 0; //@nz
					if(var_619_bool != 0) {
						goto Label_1313;
					}
					var_179_bool = 1;

				}
			Label_1303:
				goto Label_1312;
		}
		Label_1312:
			goto Label_1141;

		}
	}
Label_1313:
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


func_595()
{
	KillTimer((int)1);
	func_798();
	return 0;
}


func_3162()
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0;
	ClearSubContainer((int)0);
	func_2786((int)0);
	var_28_int = var_26_int;
	var_34_string = ""; var_35_int = 0; var_36_int = 0; var_37_int = 0;
	func_2572("fresh_meat", (int)1, (int)4, (int)3);
	var_50_string = ""; var_51_int = 0; var_52_int = 0; var_53_int = 0;
	func_2572("dried_meat", (int)1, (int)4, (int)3);
	var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0;
	func_2572("smoked_meat", (int)1, (int)4, (int)3);
	var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0;
	func_2572("vegetables", (int)1, (int)3, (int)3);
	var_63_bool = var_26_int >= (int)3;
	if(var_63_bool != 0) {
		var_64_string = ""; var_65_int = 0; var_66_int = 0;
		func_2561("revolver_ammo", (int)1, (int)5);
		var_73_string = ""; var_74_int = 0; var_75_int = 0;
		func_2561("rifle_ammo", (int)1, (int)5);
		var_76_string = ""; var_77_int = 0; var_78_int = 0;
		func_2561("samopal_ammo", (int)1, (int)5);
	}
	return 6;
}


func_1639(var_398_bool)
{
	var_399_bool = 0;
	var_399_bool = 0;
	var_400_bool = 0;
	func_1611(var_399_bool, var_400_bool);
	if(var_400_bool != 0) {
		var_417_bool = 0;
		func_1655(var_398_bool, var_399_bool, var_417_bool);
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


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_213_object, var_214_object)
{
	var_0_bool = var_214_object;
	var_1_object = var_213_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_220_string = "";
		func_243(var_214_object, "Neutral");
		@@@var_0_bool:SetMessage((int)537935);
		@@@var_0_bool:ClearReplies();
		var_238_bool = 0; var_239_object = Obj();
		var_239_object = var_1_object;
		func_2832(var_239_object);
		var_246_bool = var_238_bool == 0; //@nz
		if(var_246_bool != 0) {
			@@@var_0_bool:AddReply((int)537936, (int)-1, (int)39797);
		}
		var_250_bool = 0; var_251_object = Obj();
		var_251_object = var_1_object;
		func_2832(var_251_object);
		if(var_250_bool != 0) {
			@@@var_0_bool:AddReply((int)537937, (int)-1, (int)39798);
		}
		var_255_bool = 0; var_256_object = Obj();
		var_256_object = var_1_object;
		func_2820(var_256_object);
		if(var_255_bool != 0) {
			@@@var_0_bool:AddReply((int)537938, (int)39800, (int)39799);
		}
		var_264_bool = 0; var_265_object = Obj();
		var_265_object = var_1_object;
		func_2832(var_265_object);
		if(var_264_bool != 0) {
			@@@var_0_bool:AddReply((int)537951, (int)39813, (int)39812);
		}
		var_269_bool = 0; var_270_object = Obj();
		var_270_object = var_1_object;
		func_2844(var_270_object);
		if(var_269_bool != 0) {
			@@@var_0_bool:AddReply((int)537964, (int)-1, (int)39826);
		}
		var_278_bool = 0; var_279_object = Obj();
		var_279_object = var_1_object;
		func_2820(var_279_object);
		if(var_278_bool != 0) {
			@@@var_0_bool:AddReply((int)537965, (int)-1, (int)39827);
		}
		var_283_bool = 0; var_284_object = Obj();
		var_284_object = var_1_object;
		func_2844(var_284_object);
		if(var_283_bool != 0) {
			@@@var_0_bool:AddReply((int)537966, (int)-1, (int)39828);
		}
		var_288_bool = 0; var_289_object = Obj();
		var_289_object = var_1_object;
		func_2832(var_289_object);
		if(var_288_bool != 0) {
			@@@var_0_bool:AddReply((int)537967, (int)-1, (int)39829);
		}
		goto Label_213;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_213:
	var_293_bool = 0;
	func_3561(var_293_bool);
	if(var_293_bool != 0) {

	Label_217:
		lshWaitForAnimEnd();
		var_294_object = var_3_object;
		if(var_294_object != 0) {
		} else {
			var_295_string = "";
			var_295_string = var_2_object;
			func_2512(var_295_string);
			goto Label_217;
	}
		PlayAnimation("all", "idle");

	Label_232:
		WaitForAnimEnd();
		var_308_object = var_3_object;
		if(var_308_object != 0) {
			goto Label_242;
		}
		PlayAnimation("all", "idle");
		goto Label_232;
	}
	goto Label_242;
	
Label_242:
	return 0;
	
}


func_2162(var_122_bool, var_123_object)
{
	var_124_bool = 0; var_125_bool = 0;
	@@var_123_object:IsDead(var_125_bool);
	var_125_bool = var_122_bool;
	return 2;
}


func_1655(var_0_bool, var_4_string, var_417_bool)
{
	var_418_object = Obj(); var_419_bool = 0; var_420_float = 0; var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_object = Obj(); var_424_bool = 0; var_425_float = 0; var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0);
	GetScene(var_423_object);
	var_424_bool = 0;
	
Label_1659:
	var_428_cvector = CVector(0,0,0); var_429_object = Obj();
	var_429_object = var_0_bool;
	func_2057(var_428_cvector, var_429_object);
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
		func_1743(var_427_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_424_bool = 1;
		var_439_bool = 0;
		func_1611(var_427_cvector, var_439_bool);
		var_440_bool = var_439_bool == 0; //@nz
		if(var_440_bool != 0) {
			goto Label_1697;
		}
		goto Label_1659;
	}
Label_1697:
	var_424_bool = var_417_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2167(var_111_bool, var_112_object)
{
	var_113_object = Obj(); var_114_object = Obj(); var_115_object = Obj(); var_116_object = Obj();
	var_117_bool = var_112_object == 0; //@ne
	if(var_117_bool != 0) {
		var_111_bool = 0;
		return 4;
	}
	var_118_bool = 0;
	var_118_bool = 0;
	var_121_bool = IsFuncExist(var_112_object, "IsDead", (int)1);
	if(var_121_bool != 0) {
		var_122_bool = 0; var_123_object = Obj();
		var_112_object = var_123_object;
		func_2162(var_122_bool, var_123_object);
		if(var_122_bool != 0) {
			var_118_bool = 1;
		}
	}
	if(var_118_bool != 0) {
		var_111_bool = 0;
		return 4;
	}
	GetScene(var_115_object);
	var_126_bool = var_115_object == 0; //@ne
	if(var_126_bool != 0) {
		var_111_bool = 0;
		return 4;
	}
	@@var_112_object:GetScene(var_116_object);
	var_127_bool = var_115_object != var_116_object;
	if(var_127_bool != 0) {
		var_111_bool = 0;
		return 4;
	}
	var_111_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_635()
{
	SetTimer((int)1, (float)2.0);
	return 0;
}


func_640()
{
	return 0;
}


func_3220(var_66_int, var_67_string)
{
	var_68_int = 0; var_69_int = 0;
	GetInvItemByName(var_69_int, var_67_string);
	var_69_int = var_66_int;
	return 2;
}


func_3225(var_26_bool, var_27_object, var_28_bool)
{
	var_29_string = ""; var_30_string = "";
	var_31_bool = 0; var_32_object = Obj(); var_33_string = "";
	var_27_object = var_32_object;
	func_2077(var_31_bool, var_32_object, "class");
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


func_2203(var_107_bool, var_108_object)
{
	var_109_int = 0; var_110_int = 0;
	var_111_bool = 0; var_112_object = Obj();
	var_108_object = var_112_object;
	func_2167(var_111_bool, var_112_object);
	var_128_bool = var_111_bool == 0; //@nz
	if(var_128_bool != 0) {
		var_107_bool = 0;
		return 2;
	}
	var_129_bool = 0; var_130_object = Obj(); var_131_string = "";
	var_108_object = var_130_object;
	func_2077(var_129_bool, var_130_object, "noaccess");
	var_132_bool = var_129_bool == 0; //@nz
	if(var_132_bool != 0) {
		var_107_bool = 1;
		return 2;
	}
	@@var_108_object:GetProperty("noaccess", var_110_int);
	var_107_bool = var_110_int == (int)0;
	return 2;
}


func_2715(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2721(var_49_cvector, var_50_cvector)
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


func_1700(var_0_bool, var_348_bool)
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


func_2731(var_93_float, var_94_cvector, var_95_cvector)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0);
	var_97_cvector = var_95_cvector - var_94_cvector;
	var_93_float = var_97_cvector | var_97_cvector;
	return 2;
}


func_1711(var_2_object, var_5_bool)
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
	func_1761(var_474_float);
	var_475_bool = var_467_float < var_474_float;
	if(var_475_bool != 0) {
		irand(var_468_int, var_2_object);
		var_468_int = var_468_int + (int)1;
		var_478_int = "attack" + var_468_int;
		Speak(var_478_int);
		var_479_int = 0;
		func_1759(var_479_int);
		var_5_bool = var_479_int;
	}
	return 4;
}


func_2735(var_535_float, var_536_float, var_537_float)
{
	var_540_bool = var_536_float < var_537_float;
	if(var_540_bool != 0) {
		var_536_float = var_535_float;
	} else {
		var_537_float = var_535_float;
	}
	return 0;
	
}


func_2227(var_34_object)
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


func_2742(var_545_float, var_546_float, var_547_float, var_548_float)
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


func_2753(var_42_bool, var_43_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0;
	irand(var_46_int, var_44_int);
	var_42_bool = var_46_int < var_43_int;
	return 2;
}


func_2758(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj();
	CreateObjectSet(var_20_object);
	var_20_object = var_18_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_714(var_0_bool, var_1_object)
{
	var_79_int = 0; var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_int = 0; var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_bool);
	
Label_719:
	func_635();
	irand(var_83_int, (int)10);
	var_91_int = var_83_int + (int)5;
	Sleep(var_91_int, var_84_bool);
	var_92_bool = var_84_bool;
	if(var_92_bool != 0) {
		func_640();
	} else {
		func_635();
		GetPFPosition(var_85_cvector);
		var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0);
		var_94_cvector = var_1_object;
		var_85_cvector = var_95_cvector;
		func_2731(var_93_float, var_94_cvector, var_95_cvector);
		var_99_bool = var_93_float > (int)40000;
		if(var_99_bool != 0) {
			FindPathTo(var_86_object, var_1_object);
			var_100_bool = var_86_object != 0; //@nn
			if(var_100_bool != 0) {
				RotatePath(var_86_object, var_84_bool);
				var_101_bool = var_84_bool == 0; //@nz
				if(var_101_bool != 0) {
				} else {
					FollowPath(var_86_object, (bool)0, var_84_bool);
					var_103_bool = var_84_bool == 0; //@nz
					if(var_103_bool != 0) {
						goto Label_795;
					}
					var_104_float = GetByIndex(var_0_bool, 0);
					var_105_float = GetByIndex(var_0_bool, 2);
					Rotate(var_104_float, var_105_float, var_84_bool);
					var_106_bool = var_84_bool == 0; //@nz
					if(var_106_bool != 0) {
						goto Label_795;
					}
					WaitForAnimEnd(var_84_bool);
					var_107_bool = var_84_bool == 0; //@nz
					if(var_107_bool != 0) {
						goto Label_795;
					}
					goto Label_796;
				EMIT "GOTO 0x30c";
			}
				Sleep((int)1);
				var_86_object = 0;
				goto Label_795;
		}
			var_109_float = GetByIndex(var_0_bool, 0);
			var_110_float = GetByIndex(var_0_bool, 2);
			Rotate(var_109_float, var_110_float, var_84_bool);
			var_111_bool = var_84_bool == 0; //@nz
			if(var_111_bool != 0) {
				goto Label_795;
			}
			WaitForAnimEnd(var_84_bool);
			var_112_bool = var_84_bool == 0; //@nz
			if(var_112_bool != 0) {
				goto Label_795;
			}
			goto Label_796;
		}
	Label_795:
		goto Label_735;
	}
Label_796:
	goto Label_719;
	
}
EMIT "Return(); Pop(8)";


func_2764(var_240_int, var_241_string)
{
	var_242_int = 0; var_243_int = 0;
	GetVariable(var_241_string, var_243_int);
	var_243_int = var_240_int;
	return 2;
}


func_1743(var_0_bool)
{
	var_223_object = Obj();
	var_223_object = var_0_bool;
	func_2795(var_223_object);
	return 0;
}


func_2769(var_553_float)
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


func_1748(var_562_int)
{
	var_562_int = 0;
	return 0;
}


func_1750()
{
	var_354_string = "";
	func_2587("attack_stay");
	return 0;
}


func_1755()
{
	return 0;
}


func_1757(var_587_bool)
{
	var_587_bool = 1;
	return 0;
}


func_1759(var_479_int)
{
	var_479_int = 1;
	return 0;
}


func_2271(var_21_object, var_22_int, var_23_float)
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
		func_2057(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_2721(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		CreateVectorVector(var_34_object);
		var_35_int = 1;

	Label_2300:
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
			goto Label_2300;
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
			func_2339(var_68_float, var_69_cvector, var_70_cvector);
			return 18;
		}
		var_34_object = 0;
	}
	var_111_object = Obj();
	var_21_object = var_111_object;
	func_2227(var_111_object);
	return 18;
	
}


func_1761(var_474_float)
{
	var_474_float = 0.5;
	return 0;
}


func_2786(var_28_int)
{
	var_29_float = 0; var_30_float = 0;
	GetGameTime(var_30_float);
	var_32_int = 0;
	var_32_int = var_30_float / (int)24;
	var_28_int = (int)1 + var_32_int;
	return 2;
}


func_1763(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	var_31_bool = 0; var_32_object = Obj();
	var_28_object = var_32_object;
	func_2072(var_31_bool, var_32_object);
	if(var_31_bool != 0) {
		GetScene(var_30_object);
		var_33_object = Obj();
		func_2715(var_33_object);
		@@var_30_object:RemoveStationaryActor(var_33_object);
		var_30_object = 0;
	}
	var_34_object = Obj();
	var_28_object = var_34_object;
	func_1782(var_34_object);
	return 2;
}


func_2795(var_223_object)
{
	var_224_bool = 0; var_225_bool = 0;
	IsPlayerActor(var_223_object, var_225_bool);
	var_226_bool = var_225_bool;
	if(var_226_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_243(var_2_object, var_220_string)
{
	var_221_bool = 0;
	func_3561(var_221_bool);
	var_222_bool = var_221_bool == 0; //@nz
	if(var_222_bool != 0) {
		return 0;
	}
	var_223_bool = var_220_string == var_2_object;
	if(var_223_bool != 0) {
		return 0;
	}
	var_224_string = ""; var_225_bool = 0;
	var_220_string = var_224_string;
	var_227_bool = var_220_string == "";
	if(var_227_bool != 0) {
		var_225_bool = 0;
	} else {
		var_225_bool = 1;
	}
	func_2528(var_224_string, var_225_bool);
	var_2_object = var_220_string;
	return 0;
	
}


func_2804()
{
	var_458_object = Obj(); var_459_object = Obj();
	GetScene(var_459_object);
	var_461_object = Obj();
	func_2715(var_461_object);
	BroadcastMessage("battle", var_461_object, var_459_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1782(var_34_object)
{
	var_35_bool = 0; var_36_bool = 0;
	IsPlayerActor(var_34_object, var_36_bool);
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_2964();
	} else {
		func_3091();
	}
	func_2940();
	var_170_object = Obj();
	var_34_object = var_170_object;
	func_1802(var_170_object);
	return 2;
	
}


func_2815(var_24_object)
{
	@@var_24_object:SetReturnValue((int)1000);
	return 0;
}


func_2820(var_255_bool)
{
	var_257_int = 0; var_258_string = "";
	func_2764(var_257_int, "branch");
	var_260_bool = var_257_int == (int)0;
	if(var_260_bool != 0) {
		var_255_bool = 1;
		return 0;
	}
	var_255_bool = 0;
	return 0;
}


func_1802(var_170_object)
{
	EventDisable(0);
	var_171_object = Obj();
	var_170_object = var_171_object;
	func_1827(var_171_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1813:
	Hold();
	goto Label_1813;
}
EMIT "Return(); Pop(0)";


func_2832(var_238_bool)
{
	var_240_int = 0; var_241_string = "";
	func_2764(var_240_int, "branch");
	var_245_bool = var_240_int == (int)1;
	if(var_245_bool != 0) {
		var_238_bool = 1;
		return 0;
	}
	var_238_bool = 0;
	return 0;
}


func_2844(var_269_bool)
{
	var_271_int = 0; var_272_string = "";
	func_2764(var_271_int, "branch");
	var_274_bool = var_271_int == (int)2;
	if(var_274_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_798()
{
	StopGroup0();
	Stop();
	return 0;
}


func_3361()
{
	var_17_object = GlobalVars[0];
	func_2758(Obj());
	var_18_object = var_17_object;
	GlobalVars[0] = var_17_object;
	return 0;
}


func_1827(var_171_object)
{
	var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_string = ""; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_float = 0; var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_string = ""; var_187_object = Obj(); var_188_bool = 0; var_189_bool = 0; var_190_float = 0; var_191_cvector = CVector(0,0,0);
	var_192_bool = var_171_object == 0; //@ne
	if(var_192_bool != 0) {
		var_193_string = "";
		func_1918("fdie");
	} else {
		@@var_171_object:GetPosition(var_182_cvector);
		GetPosition(var_183_cvector);
		GetDirection(var_184_cvector);
		var_185_cvector = var_183_cvector - var_182_cvector;
		var_225_float = GetByIndex(var_185_cvector, 0);
		var_226_float = GetByIndex(var_184_cvector, 0);
		var_227_float = var_225_float * var_226_float;
		var_228_float = GetByIndex(var_185_cvector, 2);
		var_229_float = GetByIndex(var_184_cvector, 2);
		var_230_float = var_228_float * var_229_float;
		var_231_int = var_227_float + var_230_float;
		var_233_bool = var_231_int >= (int)0;
		if(var_233_bool != 0) {
			var_186_string = "fdie";
		} else {
				var_186_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_171_object = var_187_object;
		var_236_bool = IsFuncExist(var_171_object, "GetScriptProperty", (int)2);
		if(var_236_bool != 0) {
			@@var_171_object:HasScriptProperty(var_188_bool, "Owner");
			var_238_bool = var_188_bool;
			if(var_238_bool != 0) {
				@@var_171_object:GetScriptProperty(var_187_object, "Owner");
				var_240_bool = var_187_object == 0; //@ne
				if(var_240_bool != 0) {
					var_171_object = var_187_object;
				}
			}
		}
		var_243_bool = IsFuncExist(var_187_object, "@GetEyesHeight", (int)1);
		if(var_243_bool != 0) {
			@@var_187_object:GetEyesHeight(var_190_float);
			var_191_cvector = CVector(0.0, 0.0, 0.0);
			var_244_float = GetByIndex(var_191_cvector, 1);
			var_190_float = var_244_float;
			SetByIndex(var_191_cvector, 1) = var_244_float;
			LookAsync(var_171_object, "head", var_191_cvector);
			var_189_bool = 1;
		} else {
			var_189_bool = 0;

		}
		var_246_string = "";
		var_186_string = var_246_string;
		func_2587(var_246_string);
		PlayAnimation("all", var_186_string);
		WaitForAnimEnd();
		var_248_bool = var_189_bool;
		if(var_248_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_186_string);
		RemoveEnvelope();
		var_187_object = 0;
	}
	return 20;
	
}


func_2339(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	GetScene(var_30_object);
	AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	var_34_object = Obj();
	var_23_object = var_34_object;
	func_2227(var_34_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2856(var_204_int)
{
	var_205_int = 0; var_206_int = 0;
	GetVariable("branch", var_206_int);
	var_209_bool = var_206_int == (int)0;
	if(var_209_bool != 0) {
		var_204_int = 1;
		return 2;
	EMIT "GOTO 0xb37";
	}
	var_211_bool = var_206_int == (int)1;
	if(var_211_bool != 0) {
		var_204_int = 2;
		return 2;
	}
	var_204_int = 3;
	return 2;
}


func_3368(var_321_object)
{
	var_322_bool = 0; var_323_object = Obj();
	var_321_object = var_323_object;
	func_2451(var_322_bool, var_323_object);
	var_354_bool = var_322_bool == 0; //@nz
	if(var_354_bool != 0) {
		return 0;
	}
	var_355_object = Obj();
	var_321_object = var_355_object;
	TaskCall(0);
	func_0(var_355_object);
	TaskReturn();
	var_321_object = Obj();
	func_2507();
	return 0;
}


func_817(var_2_object, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool)
{
	var_239_bool = 0; var_240_bool = 0; var_241_bool = 0; var_242_bool = 0;
	var_243_object = Obj();
	var_231_object = var_243_object;
	func_2795(var_243_object);
	SetTimer((int)1, (int)5);
	CanSee(var_241_bool, var_231_object);
	var_246_bool = var_241_bool;
	if(var_246_bool != 0) {
		var_2_object = true;
		var_247_object = Obj();
		var_231_object = var_247_object;
		func_2543(var_247_object);
	} else {
		var_2_object = false;
	}
	var_254_bool = 0; var_255_object = Obj();
	var_231_object = var_255_object;
	func_2072(var_254_bool, var_255_object);
	if(var_254_bool != 0) {
		var_256_object = Obj();
		func_2715(var_256_object);
		SendPlayerEnemy(var_231_object, var_256_object);
	}
	var_257_bool = 0; var_258_object = Obj(); var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_bool = 0;
	var_231_object = var_258_object;
	var_232_float = var_259_float;
	var_233_float = var_260_float;
	var_234_bool = var_261_bool;
	var_235_bool = var_262_bool;
	func_922(var_241_bool, var_242_bool, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool);
	var_257_bool = var_242_bool;
	var_308_object = var_2_object;
	if(var_308_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_242_bool = var_230_bool;
	return 4;
	
}


func_1330(var_1_object, var_2_object, var_4_string)
{
	var_186_bool = 0; var_187_bool = 0; var_188_cvector = CVector(0,0,0); var_189_bool = 0; var_190_bool = 0; var_191_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_1332:
	var_195_int = var_1_object + (int)1;
	var_196_int = "attack_begin" + var_195_int;
	HasAnimation(var_189_bool, "all", var_196_int);
	var_197_bool = var_189_bool == 0; //@nz
	if(var_197_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_1332;
	}
	var_2_object = 0;
	
Label_1346:
	var_200_int = var_2_object + (int)1;
	var_201_int = "attack" + var_200_int;
	IsExisting3DSound(var_190_bool, var_201_int);
	var_202_bool = var_190_bool == 0; //@nz
	if(var_202_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1346;

	}
	GetAnimationOffset(var_191_cvector, "all", "bjump");
	var_205_float = GetByIndex(var_191_cvector, 2);
	var_4_string = -var_205_float;
	return 6;
	
}


func_2353(var_331_object)
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


func_2873(var_150_int)
{
	var_151_int = 0; var_152_int = 0;
	GetVariable("branch", var_152_int);
	var_152_int = var_150_int;
	return 2;
}


func_3387(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_3563(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
	return 0;
}


func_2364(var_152_bool, var_153_object, var_154_float)
{
	var_155_float = 0; var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_bool = 0; var_163_bool = 0; var_164_float = 0; var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_bool = 0; var_172_bool = 0;
	@@var_153_object:GetPosition(var_165_cvector);
	@@var_153_object:GetEyesHeight(var_164_float);
	var_173_float = GetByIndex(var_165_cvector, 1);
	var_173_float = var_173_float + var_164_float;
	SetByIndex(var_165_cvector, 1) = var_173_float;
	GetPosition(var_166_cvector);
	GetEyesHeight(var_164_float);
	var_174_float = GetByIndex(var_166_cvector, 1);
	var_174_float = var_174_float + var_164_float;
	SetByIndex(var_166_cvector, 1) = var_174_float;
	var_167_cvector = var_165_cvector - var_166_cvector;
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (float)0;
	var_176_int = var_167_cvector | var_167_cvector;
	var_177_float = sqrt(var_176_int);
	var_167_cvector = var_167_cvector / var_177_float;
	var_168_cvector = -var_167_cvector;
	var_178_float = var_167_cvector * var_154_float;
	var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0);
	var_180_cvector = var_168_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2721(var_179_cvector, var_180_cvector);
	var_188_float = var_179_cvector * (int)25;
	var_189_int = var_178_float + var_188_float;
	var_169_cvector = var_189_int - CVector(0.0, 10.0, 0.0);
	var_170_cvector = var_166_cvector + var_169_cvector;
	IsOverrideActive(var_171_bool);
	var_191_bool = var_171_bool;
	if(var_191_bool != 0) {
		var_152_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_170_cvector, var_168_cvector, (bool)1);
	var_193_float = GetByIndex(var_169_cvector, 0);
	var_194_float = GetByIndex(var_169_cvector, 2);
	Rotate(var_193_float, var_194_float);
	var_195_bool = 0;
	func_3561(var_195_bool);
	if(var_195_bool != 0) {
	} else {
		HasAnimationTrack(var_172_bool, "head");
		var_197_bool = var_172_bool;
		if(var_197_bool == 0) goto Label_2427;
		LookAsyncCamera("head");
	}
Label_2427:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_152_bool = 1;
	return 18;
	
}


func_2879(var_21_object)
{
	var_22_int = 0;
	func_2873(var_22_int);
	var_27_bool = var_22_int == (int)1;
	if(var_27_bool != 0) {
		WorkWithCorpse(var_21_object);
	} else {
		Barter(var_21_object);
	}
	return 0;
	
}


func_3394(var_143_object)
{
	var_144_object = Obj();
	var_143_object = var_144_object;
	func_3413(var_144_object);
	return 0;
}


func_3400(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_3563(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
	return 0;
}


func_2892(var_51_int, var_52_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_60_bool = var_51_int > var_52_int;
	if(var_60_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_58_int = 0;
	var_62_bool = var_51_int != var_52_int;
	if(var_62_bool != 0) {
		var_63_int = var_52_int - var_51_int;
		irand(var_58_int, var_63_int);
	} else {
		var_72_bool = var_51_int == (int)0;
		if(var_72_bool == 0) goto Label_2910;
		return 4;
	}
Label_2910:
	var_58_int = var_58_int + var_51_int;
	var_65_bool = var_58_int == (int)0;
	if(var_65_bool != 0) {
		return 4;
	}
	var_66_int = 0; var_67_string = "";
	func_3220(var_66_int, "Money");
	AddItem(var_59_bool, var_66_int, (int)0, var_58_int);
	return 4;
	
}


func_3407(var_141_object)
{
	var_142_object = Obj();
	var_141_object = var_142_object;
	func_3413(var_142_object);
	return 0;
}


func_1365(var_0_bool, var_483_float, var_484_int)
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
		func_1081(var_496_int);
		var_494_float = var_489_float;
		var_497_float = 0; var_498_object = Obj(); var_499_float = 0; var_500_int = 0;
		var_488_object = var_498_object;
		var_489_float = var_499_float;
		var_501_int = 0; var_502_object = Obj(); var_503_int = 0;
		var_488_object = var_502_object;
		var_484_int = var_503_int;
		func_1084(var_503_int);
		var_501_int = var_500_int;
		func_2089(var_497_float, var_498_object, var_499_float, var_500_int);
		var_497_float = var_490_float;
		var_562_int = 0;
		func_1748(var_562_int);
		ReportHit(var_0_bool, var_562_int, var_490_float, var_489_float);
		var_563_object = Obj(); var_564_float = 0;
		var_488_object = var_563_object;
		var_490_float = var_564_float;
		func_1755();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_3413(var_144_object)
{
	var_145_object = Obj(); var_146_bool = 0;
	var_144_object = var_145_object;
	TaskCall(5);
	func_1073(var_145_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_3424(var_136_object)
{
	var_137_bool = 0; var_138_bool = 0;
	var_139_bool = var_136_object == 0; //@ne
	if(var_139_bool != 0) {
		return 2;
	}
	var_140_object = GlobalVars[0];
	@@var_140_object:in(var_138_bool, var_136_object);
	var_141_bool = var_138_bool == 0; //@nz
	if(var_141_bool != 0) {
		var_142_object = GlobalVars[0];
		@@var_142_object:add(var_136_object);
	}
	var_143_bool = 0; var_144_object = Obj();
	var_136_object = var_144_object;
	func_2072(var_143_bool, var_144_object);
	if(var_143_bool != 0) {
		var_147_object = Obj();
		func_2715(var_147_object);
		ReportReputationChange(var_136_object, var_147_object, (float)-0.07000000029802322);
	}
	return 2;
}


func_2923(var_156_string)
{
	var_157_object = Obj(); var_158_int = 0; var_159_bool = 0; var_160_object = Obj(); var_161_int = 0; var_162_bool = 0;
	CreateInvItem(var_160_object);
	@@var_160_object:SetItemName(var_156_string);
	@@var_160_object:SetProperty("Organ", (int)1);
	@@var_160_object:GetItemID(var_161_int);
	AddItem(var_162_bool, var_160_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_880(var_2_object)
{
	KillTimer((int)1);
	var_19_object = var_2_object;
	if(var_19_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1046(var_17_int);
	return 0;
}


func_3448(var_151_object)
{
	var_152_object = Obj();
	var_151_object = var_152_object;
	func_3424(var_152_object);
	var_153_object = Obj(); var_154_bool = 0;
	var_151_object = var_153_object;
	TaskCall(5);
	func_1073(var_153_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1404(var_0_bool, var_1_object, var_446_bool, var_447_float)
{
	var_448_int = 0; var_449_bool = 0; var_450_int = 0; var_451_string = ""; var_452_int = 0; var_453_bool = 0; var_454_int = 0; var_455_string = "";
	func_1743(var_455_string);
	irand(var_452_int, var_1_object);
	var_452_int = var_452_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2804();
	var_464_int = "attack_begin" + var_452_int;
	PlayAnimation("all", var_464_int);
	WaitForAnimEnd();
	func_1711(var_454_int, var_455_string);
	var_480_bool = 0; var_481_object = Obj();
	var_481_object = var_0_bool;
	func_2203(var_480_bool, var_481_object);
	var_482_bool = var_480_bool == 0; //@nz
	if(var_482_bool != 0) {
		StopAsync();
		var_446_bool = 0;
		return 8;
	}
	var_483_float = 0; var_484_int = 0;
	var_447_float = var_483_float;
	var_452_int = var_484_int;
	func_1365(var_455_string, var_483_float, var_484_int);
	var_567_int = "attack_middle" + var_452_int;
	HasAnimation(var_453_bool, "all", var_567_int);
	var_568_bool = var_453_bool;
	if(var_568_bool != 0) {
		func_2804();
		var_571_int = "attack_middle" + var_452_int;
		PlayAnimation("all", var_571_int);
		WaitForAnimEnd();
		func_1743(var_455_string);
		var_572_bool = 0; var_573_object = Obj();
		var_573_object = var_0_bool;
		func_2203(var_572_bool, var_573_object);
		var_574_bool = var_572_bool == 0; //@nz
		if(var_574_bool != 0) {
			StopAsync();
			var_446_bool = 0;
			return 8;
		}
		var_575_float = 0; var_576_int = 0;
		var_447_float = var_575_float;
		var_452_int = var_576_int;
		func_1365(var_455_string, var_575_float, var_576_int);
		var_454_int = 1;

	Label_1481:
		var_578_int = "attack_middle" + var_452_int;
		var_580_int = var_578_int + "_";
		var_455_string = var_580_int + var_454_int;
		HasAnimation(var_453_bool, "all", var_455_string);
		var_582_bool = var_453_bool == 0; //@nz
		if(var_582_bool != 0) {
		} else {
			func_2804();
			PlayAnimation("all", var_455_string);
			WaitForAnimEnd();
			func_1743(var_455_string);
			var_598_bool = 0; var_599_object = Obj();
			var_599_object = var_0_bool;
			func_2203(var_598_bool, var_599_object);
			var_600_bool = var_598_bool == 0; //@nz
			if(var_600_bool != 0) {
				StopAsync();
				var_446_bool = 0;
				var_601_float = 0; var_602_int = 0;
				var_447_float = var_601_float;
				var_452_int = var_602_int;
				func_1365(var_455_string, var_601_float, var_602_int);
				var_454_int = var_454_int + (int)1;
				goto Label_1481;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_586_int = "attack_end" + var_452_int;
	PlayAnimation("all", var_586_int);
	var_587_bool = 0;
	func_1757(var_587_bool);
	if(var_587_bool != 0) {
		var_588_bool = 0; var_589_float = 0;
		func_1541(var_588_bool, (float)0.75);
		StopAsync();
	}
	var_446_bool = 1;
	return 8;
	
}


func_2940()
{
	var_150_int = 0;
	func_2873(var_150_int);
	var_155_bool = var_150_int != (int)1;
	if(var_155_bool != 0) {
		return 0;
	}
	var_156_string = "";
	func_2923("liver");
	var_167_string = "";
	func_2923("kidney");
	var_168_string = "";
	func_2923("heart");
	var_169_string = "";
	func_2923("blood");
	return 0;
}


func_1918(var_193_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_194_string = "";
	var_193_string = var_194_string;
	func_2587(var_194_string);
	PlayAnimation("all", var_193_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_193_string);
	RemoveEnvelope();
	return 0;
}


func_2433()
{
	var_313_bool = 0; var_314_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_316_bool = 0;
	func_3561(var_316_bool);
	if(var_316_bool != 0) {
	} else {
		HasAnimationTrack(var_314_bool, "head");
		var_318_bool = var_314_bool;
		if(var_318_bool == 0) goto Label_2450;
		UnlookAsync("head");
	}
Label_2450:
	return 2;
	
}


func_3463(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_2072(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		var_23_object = Obj();
		func_2715(var_23_object);
		ReportReputationChange(var_18_object, var_23_object, (float)-0.12999999523162842, (bool)1);
	}
	var_28_object = Obj();
	var_18_object = var_28_object;
	TaskCall(6);
	func_1763(var_28_object);
	TaskReturn();
	return 0;
}


func_2451(var_322_bool, var_323_object)
{
	var_324_bool = 0; var_325_object = Obj(); var_326_float = 0;
	var_323_object = var_325_object;
	func_2459(var_324_bool, var_325_object, (float)70);
	var_324_bool = var_322_bool;
	return 0;
}


func_2964()
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0;
	ClearSubContainer((int)0);
	func_2786((int)0);
	var_45_int = var_43_int;
	var_51_int = 0; var_52_int = 0;
	var_55_float = var_43_int * (int)100;
	var_52_int = (int)100 + var_55_float;
	func_2892((int)0, var_52_int);
	var_73_string = ""; var_74_int = 0; var_75_int = 0;
	func_2561("tourniquet", (int)1, (int)7);
	var_84_string = ""; var_85_int = 0; var_86_int = 0;
	func_2561("bandage", (int)1, (int)7);
	var_87_string = ""; var_88_int = 0; var_89_int = 0;
	func_2561("packet", (int)1, (int)10);
	var_90_string = ""; var_91_int = 0; var_92_int = 0;
	func_2561("bottle_water", (int)1, (int)3);
	var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0;
	func_2572("rusk", (int)1, (int)3, (int)4);
	var_107_string = ""; var_108_int = 0; var_109_int = 0;
	func_2561("hook", (int)1, (int)20);
	var_110_string = ""; var_111_int = 0; var_112_int = 0;
	func_2561("watch", (int)1, (int)20);
	var_113_bool = 0;
	var_113_bool = 0;
	var_115_bool = var_43_int >= (int)3;
	if(var_115_bool != 0) {
		var_117_bool = var_43_int < (int)6;
		if(var_117_bool != 0) {
			var_113_bool = 1;
		}
	}
	if(var_113_bool != 0) {
		var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0;
		func_2572("alpha_pills", (int)1, (int)2, (int)3);
	}
	var_123_bool = var_43_int >= (int)4;
	if(var_123_bool != 0) {
		var_124_string = ""; var_125_int = 0; var_126_int = 0; var_127_int = 0;
		func_2572("beta_pills", (int)1, (int)4, (int)3);
	}
	var_129_bool = var_43_int >= (int)6;
	if(var_129_bool != 0) {
		var_130_string = ""; var_131_int = 0; var_132_int = 0; var_133_int = 0;
		func_2572("alpha_pills", (int)1, (int)2, (int)8);
		var_134_string = ""; var_135_int = 0; var_136_int = 0; var_137_int = 0;
		func_2572("gamma_pills", (int)1, (int)8, (int)3);
	}
	var_139_bool = var_43_int >= (int)8;
	if(var_139_bool != 0) {
		var_140_string = ""; var_141_int = 0; var_142_int = 0;
		func_2561("revolver_ammo", (int)1, (int)3);
		var_143_string = ""; var_144_int = 0; var_145_int = 0;
		func_2561("rifle_ammo", (int)1, (int)3);
	}
	var_146_int = 0; var_147_string = "";
	func_3220(var_146_int, "patrol_mark");
	AddItem(var_42_bool, var_146_int, (int)0, (int)1);
	return 6;
}


func_922(var_0_bool, var_1_object, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool)
{
	var_263_bool = 0; var_264_bool = 0; var_265_object = Obj(); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_float = 0; var_270_object = Obj(); var_271_bool = 0; var_272_bool = 0; var_273_object = Obj(); var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_float = 0; var_278_object = Obj();
	var_0_bool = false;
	var_1_object = var_258_object;
	var_262_bool = var_272_bool;
	
Label_926:
	var_279_bool = 0; var_280_object = Obj();
	var_258_object = var_280_object;
	func_1062(var_279_bool, var_280_object);
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
			if(var_293_bool == 0) goto Label_975;
			var_272_bool = 0;
			RotatePath(var_273_object, var_271_bool);
			var_294_bool = var_271_bool == 0; //@nz
			if(var_294_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_297_string = "";
				func_1069(var_297_string);
				var_298_string = "";
				func_1071(var_298_string);
				FollowPath(var_273_object, var_261_bool, var_271_bool, var_297_string, var_298_string);
				var_299_bool = var_271_bool == 0; //@nz
				if(var_299_bool != 0) {
					var_300_bool = var_0_bool;
					if(var_300_bool != 0) {
						var_273_object = 0;
						goto Label_1022;
					EMIT "GOTO 0x3e3";
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
							goto Label_1022;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1022;
	}
			var_278_object = 0;
			goto Label_1020;

		Label_1020:
			var_273_object = 0;

		}
		goto Label_926;
	}
Label_1022:
	var_257_bool = !var_0_bool;
	return 16;
	
}


func_2459(var_324_bool, var_325_object, var_326_float)
{
	var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_bool = 0;
	@@var_325_object:GetPosition(var_336_cvector);
	@@var_325_object:GetEyesHeight(var_335_float);
	var_343_float = GetByIndex(var_336_cvector, 1);
	var_343_float = var_343_float + var_335_float;
	SetByIndex(var_336_cvector, 1) = var_343_float;
	GetPosition(var_337_cvector);
	GetEyesHeight(var_335_float);
	var_344_float = GetByIndex(var_337_cvector, 1);
	var_344_float = var_344_float + var_335_float;
	SetByIndex(var_337_cvector, 1) = var_344_float;
	var_338_cvector = var_336_cvector - var_337_cvector;
	var_345_float = GetByIndex(var_338_cvector, 1);
	SetByIndex(var_338_cvector, 1) = (float)0;
	var_346_int = var_338_cvector | var_338_cvector;
	var_347_float = sqrt(var_346_int);
	var_338_cvector = var_338_cvector / var_347_float;
	var_339_cvector = -var_338_cvector;
	var_348_float = var_338_cvector * var_326_float;
	var_340_cvector = var_348_float - CVector(0.0, 10.0, 0.0);
	var_341_cvector = var_337_cvector + var_340_cvector;
	IsOverrideActive(var_342_bool);
	var_350_bool = var_342_bool;
	if(var_350_bool != 0) {
		var_324_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_341_cvector, var_339_cvector, (bool)1);
	var_352_float = GetByIndex(var_340_cvector, 0);
	var_353_float = GetByIndex(var_340_cvector, 2);
	Rotate(var_352_float, var_353_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_324_bool = 1;
	return 16;
}


func_1950(var_144_object)
{
	var_145_object = Obj();
	var_144_object = var_145_object;
	func_2353(var_145_object);
	PlayAnimation("all", "hunt");
	WaitForAnimEnd();
	return 0;
}


func_1962()
{
	StopAnimation();
	StopAsync();
	return 0;
}


func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	var_22_object = var_27_object;
	var_28_bool = !var_23_bool;
	func_3225(var_26_bool, var_27_object, var_28_bool);
	if(var_26_bool != 0) {
		CanSee(var_25_bool, var_21_object);
		var_94_bool = 0;
		var_94_bool = 1;
		var_95_bool = var_25_bool;
		if(var_95_bool != 1) {
			var_96_float = 0; var_97_object = Obj();
			var_21_object = var_97_object;
			func_2064(var_96_float, var_97_object);
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


func_2507()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_2512(var_295_string)
{
	var_296_bool = 0; var_297_float = 0; var_298_float = 0; var_299_bool = 0; var_300_float = 0; var_301_float = 0;
	lshHasAnimation(var_299_bool, var_295_string);
	var_302_bool = var_299_bool;
	if(var_302_bool != 0) {
		lshGetAnimTimes(var_295_string, var_300_float, var_301_float);
		lshPlayAnimation(var_300_float, var_301_float, (bool)0);
	} else {
		var_305_int = "Can't find lsh animation : " + var_295_string;
		Trace(var_305_int);
	}
	return 6;
	
}


func_2528(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0;
	lshHasAnimation(var_231_bool, var_224_string);
	var_234_bool = var_231_bool;
	if(var_234_bool != 0) {
		lshGetAnimTimes(var_224_string, var_232_float, var_233_float);
		lshPlayAnimation(var_232_float, var_233_float, var_225_bool);
	} else {
		var_236_int = "Can't find lsh animation : " + var_224_string;
		Trace(var_236_int);
	}
	return 6;
	
}


func_3553(var_201_int)
{
	var_201_int = 515572;
	return 0;
}


func_3555(var_200_int)
{
	var_200_int = 504031;
	return 0;
}


func_3557(var_202_string)
{
	var_202_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_3559(var_203_string)
{
	var_203_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_3561(var_195_bool)
{
	var_195_bool = 0;
	return 0;
}


func_3563(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_float = 0; var_24_string = ""; var_25_float = 0; var_26_bool = 0; var_27_float = 0; var_28_string = ""; var_29_float = 0;
	var_30_bool = 0; var_31_object = Obj();
	var_21_object = var_31_object;
	func_2203(var_30_bool, var_31_object);
	var_64_bool = var_30_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_20_bool = 0;
		return 8;
	}
	var_65_object = GlobalVars[0];
	@@var_65_object:in(var_26_bool, var_21_object);
	var_66_bool = var_26_bool;
	if(var_66_bool != 0) {
		var_20_bool = 1;
		return 8;
	}
	var_67_bool = 0; var_68_object = Obj();
	var_21_object = var_68_object;
	func_2072(var_67_bool, var_68_object);
	if(var_67_bool != 0) {
		@@var_21_object:GetProperty("reputation", var_27_float);
		var_20_bool = var_27_float < (float)0.33000001311302185;
		return 8;
	}
	var_73_bool = 0; var_74_object = Obj(); var_75_string = "";
	var_21_object = var_74_object;
	func_2077(var_73_bool, var_74_object, "class");
	if(var_73_bool != 0) {
		@@var_21_object:GetProperty("class", var_28_string);
		var_77_bool = 0;
		var_77_bool = 1;
		var_78_bool = 0;
		var_78_bool = 1;
		var_80_bool = var_28_string == "bomber";
		if(var_80_bool != 1) {
			var_82_bool = var_28_string == "hunter";
			if(var_82_bool != 1) {
				var_78_bool = 0;
			}
		}
		if(var_78_bool != 1) {
			var_84_bool = var_28_string == "grabitel";
			if(var_84_bool != 1) {
				var_77_bool = 0;
			}
		}
		if(var_77_bool != 0) {
			var_20_bool = 1;
			return 8;
		}
		var_85_bool = 0;
		var_85_bool = 0;
		var_86_bool = 0; var_87_string = "";
		var_28_string = var_87_string;
		func_2628(var_86_bool, var_87_string);
		if(var_86_bool != 0) {
			var_125_bool = 0; var_126_object = Obj(); var_127_string = "";
			var_21_object = var_126_object;
			func_2077(var_125_bool, var_126_object, "disease");
			if(var_125_bool != 0) {
				var_85_bool = 1;
			}
		}
		if(var_85_bool != 0) {
			@@var_21_object:GetProperty("disease", var_29_float);
			var_20_bool = 0;
			var_130_bool = var_29_float > (int)0;
			if(var_130_bool != 0) {
				var_131_float = 0; var_132_object = Obj();
				var_21_object = var_132_object;
				func_2064(var_131_float, var_132_object);
				var_140_bool = var_131_float <= (float)490000.0;
				if(var_140_bool != 0) {
					var_20_bool = 1;
				}
			}
			return 8;
		}
	}
	var_20_bool = 0;
	return 8;
}


func_2543(var_247_object)
{
	var_248_float = 0; var_249_cvector = CVector(0,0,0); var_250_float = 0; var_251_cvector = CVector(0,0,0);
	@@var_247_object:GetEyesHeight(var_250_float);
	var_251_cvector = CVector(0.0, 0.0, 0.0);
	var_252_float = GetByIndex(var_251_cvector, 1);
	var_250_float = var_252_float;
	SetByIndex(var_251_cvector, 1) = var_252_float;
	LookAsync(var_247_object, "head", var_251_cvector);
	return 4;
}


func_2554()
{
	var_20_bool = 0;
	func_3561(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2043(var_525_string, var_526_int)
{
	var_528_bool = var_526_int == (int)2;
	if(var_528_bool != 0) {
		var_525_string = "fire";
		return 0;
	EMIT "GOTO 0x807";
	}
	var_530_bool = var_526_int == (int)1;
	if(var_530_bool != 0) {
		var_525_string = "bullet";
		return 0;
	}
	var_525_string = "phys";
	return 0;
}


