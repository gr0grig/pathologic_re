// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsPlayerActor/2,Hold/0,rand/2,Sleep/1,StopGroup0/0,RemoveActor/1,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FindActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d8_04|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|A:SetReturnValue|W:d8q04|W:fail|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png|W:death
// @GLOBALS: 0:object:
// @RUN_OP: 0x1b3
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa4 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x184 vars=object
// @EVENT_17: op=0x197 vars=object
// @EVENT_26: op=0x1a2 vars=string
// @EVENT_5: op=0x1c8 vars=
// @EVENT_6: op=0x1cd vars=
// @TASK_3: vars=object,int,int,bool,float,int params=1
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_7: op=0x50e vars=int
// @EVENT_1: op=0x529 vars=object
// @EVENT_2: op=0x538 vars=object
// @EVENT_10: op=0x5be vars=object
// @EVENT_41: op=0x5c9 vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x5ec vars=object
// @EVENT_22: op=0x66b vars=object,int,float,float
// @EVENT_16: op=0x66d vars=object,string
// @EVENT_41: op=0x66f vars=object
// @STANDALONE_EVENT_22: op=0x974 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x97c vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x986 vars=object,string
// @STANDALONE_EVENT_41: op=0x993 vars=object
// @STANDALONE_EVENT_6: op=0x99e vars=
// @PE: 0x4a,0x8e,0xa4,0x184,0x1a2,0x235,0x241,0x244,0x4d5,0x50e,0x529,0x538,0x5ac,0x5be,0x5c9,0x5d2,0x5dd,0x651,0x66b,0x66d,0x66f,0x671,0x877,0x87e,0x8d7,0x8dc,0x8e5,0x8ef,0x955,0x96c,0x974,0x97c,0x993

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	if((int)1 != 0) {
		func_2103();
		var_20_bool = var_16_bool == (int)34838;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_2268();
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_2263(var_49_object);
		}
		var_52_bool = var_16_bool == (int)34839;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_2268();
		}
		var_56_bool = var_16_bool == (int)34836;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_2277();
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_2263(var_74_object);
		}
		var_76_bool = var_15_object == (int)34832;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533328);
			@@@var_0_object:ClearReplies();
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_2287(var_96_object);
			if(var_95_bool != 0) {
				@@@var_0_object:AddReply((int)533329, (int)37766, (int)34833);
			}
			@@@var_0_object:AddReply((int)533336, (int)-1, (int)34840);
			@@@var_0_object:AddReply((int)536033, (int)-1, (int)37770);
			return 0;
		}
		var_113_bool = var_15_object == (int)37766;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)536029);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536030, (int)37768, (int)37767);
			@@@var_0_object:AddReply((int)536034, (int)37768, (int)37771);
			return 0;
		}
		var_123_bool = var_15_object == (int)37768;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)536031);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536032, (int)34834, (int)37769);
			@@@var_0_object:AddReply((int)536035, (int)34834, (int)37773);
			@@@var_0_object:AddReply((int)533332, (int)-1, (int)34836);
			return 0;
		}
		var_136_bool = var_15_object == (int)34834;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533331, (int)34837, (int)34835);
			@@@var_0_object:AddReply((int)536036, (int)37776, (int)37775);
			return 0;
		}
		var_146_bool = var_15_object == (int)37776;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)536037);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536038, (int)37778, (int)37777);
			@@@var_0_object:AddReply((int)536040, (int)34837, (int)37779);
			return 0;
		}
		var_156_bool = var_15_object == (int)37778;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)536039);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536041, (int)34837, (int)37781);
			return 0;
		}
		var_163_bool = var_15_object == (int)34837;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_142(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533334, (int)-1, (int)34838);
			@@@var_0_object:AddReply((int)533335, (int)-1, (int)34839);
			return 0;
		}
		var_3_string = true;
		var_172_bool = 0;
		func_2410(var_172_bool);
		if(var_172_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_560();
	var_17_int = 0; var_18_object = Obj();
	var_15_bool = var_18_object;
	TaskCall(0);
	func_0(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	var_158_bool = (int)-1 != var_19_object;
	if(var_158_bool != 0) {
		var_159_bool = 0; var_160_string = ""; var_161_string = "";
		func_2207(var_159_bool, "quest_d8_04", "attack");
	}
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_bool, var_17_bool);
	var_18_bool = var_17_bool;
	if(var_18_bool != 0) {
		var_19_bool = 0; var_20_string = ""; var_21_string = "";
		func_2207(var_19_bool, "quest_d8_04", "attack");
	}
	return 2;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_17_bool = var_15_bool == "attack";
	if(var_17_bool != 0) {
		func_560();
		var_18_object = Obj();
		func_1670(Obj());
		var_19_object = var_18_object;
		TaskCall(3);
		func_565(var_18_object);
		TaskReturn();
	}
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_object = var_0_object;
	if(var_16_object != 0) {
		var_17_bool = 0;
		func_477(var_17_bool);
		if(var_17_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_18_object = Obj();
		func_2151(var_18_object);
		RemoveActor(var_18_object);
	}
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_17_bool = var_15_int == (int)1;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_18_object = var_1_object;
		func_2219(var_18_object);
	} else {
		var_23_int = 0;
		var_15_int = var_23_int;
		func_1452(var_14_bool, var_15_int, var_23_int);
	}
	return 0;
	
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_1_object == var_15_object;
	if(var_17_bool != 0) {
		var_18_bool = var_2_object == 0; //@nz
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_2_object = true;
		var_19_object = Obj();
		var_15_object = var_19_object;
		func_2092(var_19_object);
	}
	return 0;
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_1_object == var_15_object;
	if(var_17_bool != 0) {
		var_18_object = var_2_object;
		if(var_18_object != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object);
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1308(var_15_object);
	var_15_object = Obj();
	func_2451();
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsOverrideActive(var_17_bool);
	var_18_bool = var_17_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_15_object = var_19_object;
		func_2389(var_19_object);
	}
	return 2;
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0;
	var_15_object = var_19_object;
	var_16_int = var_20_int;
	var_17_float = var_21_float;
	func_1876(var_19_object, var_20_int, var_21_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
	var_15_object = var_21_object;
	var_16_int = var_22_int;
	var_17_float = var_23_float;
	var_19_cvector = var_24_cvector;
	var_20_cvector = var_25_cvector;
	func_1944(var_23_float, var_24_cvector, var_25_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_string = ""; var_18_string = "";
	func_2207(var_16_bool, "quest_d8_04", "death");
	var_22_object = Obj();
	var_15_object = var_22_object;
	func_2412(var_22_object);
	return 0;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj();
	func_2151(var_15_object);
	RemoveActor(var_15_object);
	Hold();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_float = 0; var_16_float = 0;
	
Label_436:
	var_17_bool = 0;
	func_1969(var_17_bool);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		Hold();
		goto Label_436;
	}
	rand(var_16_float, (int)3);
	var_23_int = var_16_float + (int)3;
	Sleep(var_23_int);
	func_479();
	goto Label_436;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_object = var_18_object;
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0;
	var_18_object = var_29_object;
	func_1974(var_28_bool, var_29_object, (float)110.0);
	var_75_bool = var_28_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_76_int = 0;
	func_2404(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_2402(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_2406(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_2408(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_2366(var_80_int);
	@@var_24_object:SetPlayerName(var_80_int);
	IsOverrideActive(var_25_bool);
	var_88_bool = var_25_bool;
	if(var_88_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	DoDialog(var_24_object);
	var_89_object = Obj(); var_90_object = Obj();
	var_18_object = var_89_object;
	var_24_object = var_90_object;
	TaskCall(1);
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object);
	TaskReturn();
	@@var_24_object:IsDialogEnd(var_27_bool);
	
Label_56:
	var_149_bool = var_27_bool == 0; //@nz
	if(var_149_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_56;
	}
	var_18_object = Obj();
	func_2043();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2312()
{
	var_25_object = Obj(); var_26_object = Obj();
	CreateDiaryEntry(var_26_object, (int)651, (int)2, (int)533364);
	var_30_bool = 0; var_31_object = Obj(); var_32_int = 0;
	var_26_object = var_31_object;
	func_2338(var_30_bool, var_31_object, (int)649);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2061(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0;
	lshHasAnimation(var_137_bool, var_133_string);
	var_140_bool = var_137_bool;
	if(var_140_bool != 0) {
		lshGetAnimTimes(var_133_string, var_138_float, var_139_float);
		lshPlayAnimation(var_138_float, var_139_float, (bool)0);
	} else {
		var_143_int = "Can't find lsh animation : " + var_133_string;
		Trace(var_143_int);
	}
	return 6;
	
}


func_1808(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	var_32_bool = 0; var_33_object = Obj();
	var_29_object = var_33_object;
	func_1772(var_32_bool, var_33_object);
	var_49_bool = var_32_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_29_object = var_51_object;
	func_1682(var_50_bool, var_51_object, "noaccess");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_28_bool = 1;
		return 2;
	}
	@@var_29_object:GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == (int)0;
	return 2;
}


func_2325(var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj();
	GetDiaryRoot(var_41_object);
	var_42_bool = var_41_object == 0; //@nz
	if(var_42_bool != 0) {
		Trace("Can't retrieve diary root");
		var_39_object = 0;
		return 2;
	}
	var_41_object = var_39_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1050(var_0_object, var_289_bool, var_290_float)
{
	var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0;
	
Label_1051:
	IsAnimationPlaying(var_296_bool);
	var_301_bool = var_296_bool == 0; //@nz
	if(var_301_bool != 0) {
	} else {
		var_302_bool = 0;
		func_1121(var_302_bool);
		if(var_302_bool != 0) {
			var_289_bool = 1;
			return 10;
		}
		var_345_bool = 0; var_346_object = Obj();
		var_346_object = var_0_object;
		func_1808(var_345_bool, var_346_object);
		var_347_bool = var_345_bool == 0; //@nz
		if(var_347_bool != 0) {
			var_289_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_297_cvector);
		GetPFPosition(var_298_cvector);
		var_299_cvector = var_297_cvector - var_298_cvector;
		var_300_float = var_299_cvector | var_299_cvector;
		var_348_float = var_290_float * var_290_float;
		var_349_bool = var_300_float < var_348_float;
		if(var_349_bool != 0) {
			var_350_bool = 0; var_351_float = 0;
			var_290_float = var_351_float;
			func_886(var_299_cvector, var_300_float, var_350_bool, var_351_float);
			var_289_bool = 1;
			sync();
			goto Label_1051;
		}
		return 10;
	}
	func_1225(var_300_float);
	var_289_bool = 0;
	return 10;
	
}


func_1308(var_2_object)
{
	KillTimer((int)1);
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1474(var_15_object);
	return 0;
}


func_2077(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0;
	lshHasAnimation(var_107_bool, var_100_string);
	var_110_bool = var_107_bool;
	if(var_110_bool != 0) {
		lshGetAnimTimes(var_100_string, var_108_float, var_109_float);
		lshPlayAnimation(var_108_float, var_109_float, var_101_bool);
	} else {
		var_112_int = "Can't find lsh animation : " + var_100_string;
		Trace(var_112_int);
	}
	return 6;
	
}


func_2338(var_30_bool, var_31_object, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0;
	func_2325(Obj());
	var_39_object = var_36_object;
	@@var_36_object:Find(var_32_int, var_37_object);
	var_44_bool = var_37_object == 0; //@nz
	if(var_44_bool != 0) {
		var_46_int = "Can't find diary parent with id: " + var_32_int;
		Trace(var_46_int);
		var_30_bool = 0;
		return 6;
	}
	@@var_37_object:AddChild(var_31_object);
	SendWorldWndMessage((int)7);
	@@var_31_object:GetCategory(var_38_int);
	SetDiarySection(var_38_int);
	var_30_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2043()
{
	var_151_bool = 0; var_152_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_154_bool = 0;
	func_2410(var_154_bool);
	if(var_154_bool != 0) {
	} else {
		HasAnimationTrack(var_152_bool, "head");
		var_156_bool = var_152_bool;
		if(var_156_bool == 0) goto Label_2060;
		UnlookAsync("head");
	}
Label_2060:
	return 2;
	
}


func_1832(var_32_object)
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


func_2092(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0);
	@@var_19_object:GetEyesHeight(var_22_float);
	var_23_cvector = CVector(0.0, 0.0, 0.0);
	var_24_float = GetByIndex(var_23_cvector, 1);
	var_22_float = var_24_float;
	SetByIndex(var_23_cvector, 1) = var_24_float;
	LookAsync(var_19_object, "head", var_23_cvector);
	return 4;
}


func_812(var_1_object, var_2_object, var_4_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_814:
	var_63_int = var_1_object + (int)1;
	var_64_int = "attack_begin" + var_63_int;
	HasAnimation(var_57_bool, "all", var_64_int);
	var_65_bool = var_57_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_814;
	}
	var_2_object = 0;
	
Label_828:
	var_68_int = var_2_object + (int)1;
	var_69_int = "attack" + var_68_int;
	IsExisting3DSound(var_58_bool, var_69_int);
	var_70_bool = var_58_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_828;

	}
	GetAnimationOffset(var_59_cvector, "all", "bjump");
	var_73_float = GetByIndex(var_59_cvector, 2);
	var_4_bool = -var_73_float;
	return 6;
	
}


func_558(var_65_bool)
{
	var_65_bool = 1;
	return 0;
}


func_560()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_565(var_18_object)
{
	
Label_566:
	var_29_object = Obj(); var_30_bool = 0; var_31_float = 0;
	var_18_object = var_29_object;
	func_583(var_25_int, var_26_bool, var_27_float, var_28_int, var_18_object, var_29_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_566;
}
EMIT "Return(); Pop(0)";


func_2103()
{
	var_18_bool = 0;
	func_2410(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2110(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	IsExisting3DSound(var_56_bool, var_47_string);
	var_64_bool = var_56_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_57_int = 0;

	Label_2116:
		var_66_int = var_57_int + (int)1;
		var_67_int = var_47_string + var_66_int;
		IsExisting3DSound(var_58_bool, var_67_int);
		var_68_bool = var_58_bool == 0; //@nz
		if(var_68_bool != 0) {
		} else {
			var_57_int = var_57_int + (int)1;
			goto Label_2116;
		}
		var_69_bool = var_57_int == 0; //@nz
		if(var_69_bool != 0) {
			return 16;
		}
		irand(var_59_int, var_57_int);
		var_71_int = var_59_int + (int)1;
		var_47_string = var_47_string + var_71_int;
	}
	Is3DSoundLoaded(var_60_bool, var_47_string);
	var_72_bool = var_60_bool;
	if(var_72_bool != 0) {
		GetEyesHeight(var_61_float);
		GetDirection(var_62_cvector);
		var_63_cvector = var_62_cvector * (int)50;
		var_74_float = GetByIndex(var_63_cvector, 1);
		var_74_float = var_74_float + var_61_float;
		SetByIndex(var_63_cvector, 1) = var_74_float;
		PlayGlobalSound(var_47_string, var_63_cvector);
	}
	return 16;
	
}


func_2366(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x94d";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
}


func_577(var_398_float)
{
	var_398_float = 0.10000000149011612;
	return 0;
}


func_580(var_405_int)
{
	var_405_int = 0;
	return 0;
}


func_1093(var_0_object, var_304_bool)
{
	var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0;
	var_315_bool = 0; var_316_object = Obj();
	var_316_object = var_0_object;
	func_1808(var_315_bool, var_316_object);
	var_317_bool = var_315_bool == 0; //@nz
	if(var_317_bool != 0) {
		var_304_bool = 0;
		return 10;
	}
	var_318_bool = 0;
	func_1182(var_314_float, var_318_bool);
	if(var_318_bool != 0) {
		@@@var_0_object:GetPFPosition(var_310_cvector);
		GetPFPosition(var_311_cvector);
		var_312_cvector = var_310_cvector - var_311_cvector;
		var_313_float = var_312_cvector | var_312_cvector;
		@@@var_0_object:GetAttackDistance(var_314_float);
		var_314_float = var_314_float + (int)50;
		var_320_float = var_314_float * var_314_float;
		var_304_bool = var_313_float <= var_320_float;
		return 10;
	}
	var_304_bool = 0;
	return 10;
}


func_1350(var_0_object, var_1_object, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj();
	var_0_object = false;
	var_1_object = var_162_object;
	var_166_bool = var_176_bool;
	
Label_1354:
	var_183_bool = 0; var_184_object = Obj();
	var_162_object = var_184_object;
	func_1490(var_183_bool, var_184_object);
	var_187_bool = var_183_bool == 0; //@nz
	if(var_187_bool != 0) {
		var_161_bool = 0;
		return 16;
	}
	@@var_162_object:GetPosition(var_178_cvector);
	GetPosition(var_179_cvector);
	var_180_cvector = var_178_cvector - var_179_cvector;
	var_181_float = var_180_cvector | var_180_cvector;
	var_188_bool = 0;
	var_188_bool = 0;
	var_190_bool = var_164_float > (int)0;
	if(var_190_bool != 0) {
		var_191_float = var_164_float * var_164_float;
		var_192_bool = var_181_float > var_191_float;
		if(var_192_bool != 0) {
			var_188_bool = 1;
		}
	}
	if(var_188_bool != 0) {
		Stop();
		var_161_bool = 0;
		return 16;
	}
	var_193_float = var_163_float * var_163_float;
	var_194_bool = var_181_float > var_193_float;
	if(var_194_bool != 0) {
		@@var_162_object:GetPFPosition(var_178_cvector);
		FindPathTo(var_182_object, var_178_cvector);
		var_195_bool = var_182_object != 0; //@nn
		if(var_195_bool != 0) {
			var_182_object = var_177_object;
			var_182_object = 0;
		}
		var_196_bool = var_177_object != 0; //@nn
		if(var_196_bool != 0) {
			var_197_bool = var_176_bool;
			if(var_197_bool == 0) goto Label_1403;
			var_176_bool = 0;
			RotatePath(var_177_object, var_175_bool);
			var_198_bool = var_175_bool == 0; //@nz
			if(var_198_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_201_string = "";
				func_1497(var_201_string);
				var_202_string = "";
				func_1499(var_202_string);
				FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string);
				var_203_bool = var_175_bool == 0; //@nz
				if(var_203_bool != 0) {
					var_204_object = var_0_object;
					if(var_204_object != 0) {
						var_177_object = 0;
						goto Label_1450;
					EMIT "GOTO 0x58f";
					}
				} else {
					var_177_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_175_bool);
					var_207_bool = var_175_bool == 0; //@nz
					if(var_207_bool != 0) {
						var_208_object = var_0_object;
						if(var_208_object != 0) {
							var_177_object = 0;
							goto Label_1450;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1450;
	}
			var_182_object = 0;
			goto Label_1448;

		Label_1448:
			var_177_object = 0;

		}
		goto Label_1354;
	}
Label_1450:
	var_161_bool = !var_0_object;
	return 16;
	
}


func_583(var_0_object, var_3_string, var_5_bool, var_29_object, var_30_bool, var_31_float, var_138_bool, var_230_bool)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_float = 0;
	func_812(var_51_cvector, var_52_bool, var_53_float);
	var_5_bool = 0;
	var_78_bool = IsFuncExist(var_29_object, "@GetAttackDistance", (int)1);
	if(var_78_bool != 0) {
		@@var_29_object:GetAttackDistance(var_43_float);
		var_43_float = var_43_float + (int)50;
	} else {
							var_31_float = var_43_float;
	}
	var_81_bool = var_43_float >= (int)150;
	if(var_81_bool != 0) {
		var_43_float = 150;
	}
	var_3_string = false;
	var_0_object = var_29_object;
	IsPlayerActor(var_0_object, var_46_bool);
	var_82_bool = var_46_bool;
	if(var_82_bool != 0) {
		PlayGlobalMusic("attack");
		var_84_object = Obj();
		func_2151(var_84_object);
		SendPlayerEnemy(var_29_object, var_84_object);
	}
	var_87_bool = var_30_bool;
	if(var_87_bool != 0) {
		var_47_bool = 0;
	} else {
						var_47_bool = 1;

	}
	var_48_float = (float)400.0 + var_43_float;
	
Label_623:
	var_89_bool = 0;
	var_89_bool = 0;
	var_90_bool = 0; var_91_object = Obj();
	var_91_object = var_0_object;
	func_1808(var_90_bool, var_91_object);
	if(var_90_bool != 0) {
		var_124_bool = var_3_string == 0; //@nz
		if(var_124_bool != 0) {
			var_89_bool = 1;
		}
	}
	if(var_89_bool != 0) {
		func_1225(var_53_float);
		@@@var_0_object:GetPFPosition(var_44_cvector);
		GetPFPosition(var_45_cvector);
		var_49_cvector = var_44_cvector - var_45_cvector;
		var_50_float = var_49_cvector | var_49_cvector;
		var_130_float = var_48_float * var_48_float;
		var_131_bool = var_50_float >= var_130_float;
		if(var_131_bool != 0) {
			var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_bool = 0;
			var_133_object = var_0_object;
			var_43_float = var_134_float;
			TaskCall(4);
			func_1245(var_140_bool, var_132_bool, var_133_object, var_134_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_215_bool = var_138_bool == 0; //@nz
			if(var_215_bool != 0) {
			} else {
				var_47_bool = 0;
		} else {
				var_221_float = var_31_float * var_31_float;
				var_222_bool = var_50_float >= var_221_float;
				if(var_222_bool != 0) {
					@@@var_0_object:GetPFPosition(var_51_cvector);
					CanReachByPF(var_52_bool, var_51_cvector);
					var_223_bool = var_52_bool == 0; //@nz
					if(var_223_bool != 0) {
						var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0;
						var_225_object = var_0_object;
						var_43_float = var_226_float;
						TaskCall(4);
						func_1245(var_232_bool, var_224_bool, var_225_object, var_226_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_233_bool = var_230_bool == 0; //@nz
						if(var_233_bool != 0) {
							goto Label_795;
						}
						var_47_bool = 0;
						goto Label_623;
					}
					var_234_bool = var_47_bool == 0; //@nz
					if(var_234_bool != 0) {
						var_235_object = Obj();
						var_235_object = var_0_object;
						func_1958(var_235_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1225(var_53_float);
						StopAsync();
						var_47_bool = 1;
						var_246_bool = 0; var_247_object = Obj();
						var_247_object = var_0_object;
						func_1808(var_246_bool, var_247_object);
						var_248_bool = var_246_bool == 0; //@nz
						if(var_248_bool != 0) {
							goto Label_795;
						}
					}
					rand(var_53_float);
					var_249_bool = 0;
					var_251_bool = var_53_float < (float)0.25;
					if(var_251_bool != 1) {
						var_252_bool = 0;
						func_1182((bool)1, var_252_bool);
						if(var_252_bool != 1) {
							var_249_bool = 0;
						}
					}
					if(var_249_bool != 0) {
						Face(var_0_object);
						func_1232();
						PlayAnimation("all", "attack_stay");
						var_289_bool = 0; var_290_float = 0;
						var_31_float = var_290_float;
						func_1050(var_53_float, var_289_bool, var_290_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1225(var_53_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_511_bool = 0;
						func_1182(var_53_float, var_511_bool);
						var_512_bool = var_511_bool == 0; //@nz
						if(var_512_bool == 0) goto Label_785;
						var_513_bool = 0; var_514_object = Obj();
						var_514_object = var_0_object;
						func_1808(var_513_bool, var_514_object);
						var_515_bool = var_513_bool == 0; //@nz
						if(var_515_bool != 0) {
							goto Label_795;
						}
						@@@var_0_object:GetPFPosition(var_44_cvector);
						GetPFPosition(var_45_cvector);
						var_49_cvector = var_44_cvector - var_45_cvector;
						var_50_float = var_49_cvector | var_49_cvector;
						var_516_float = var_31_float * var_31_float;
						var_517_bool = var_50_float < var_516_float;
						if(var_517_bool == 0) goto Label_785;
						var_518_bool = 0; var_519_float = 0;
						var_31_float = var_519_float;
						func_886(var_52_bool, var_53_float, var_518_bool, var_519_float);
						var_520_bool = var_518_bool == 0; //@nz
						if(var_520_bool == 0) goto Label_785;
						goto Label_795;
				}
					var_521_bool = 0; var_522_float = 0;
					var_31_float = var_522_float;
					func_886(var_52_bool, var_53_float, var_521_bool, var_522_float);
					var_523_bool = var_521_bool == 0; //@nz
					if(var_523_bool != 0) {
						goto Label_795;
					}
					var_47_bool = 1;

				}
			Label_785:
				goto Label_794;
		}
		Label_794:
			goto Label_623;

		}
	}
Label_795:
	WaitForAnimEnd();
	var_216_string = var_3_string;
	if(var_216_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_219_bool = var_46_bool;
	if(var_219_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object;
	var_1_object = var_89_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_96_string = "";
		func_142(var_90_object, "Neutral");
		@@@var_0_object:SetMessage((int)533328);
		@@@var_0_object:ClearReplies();
		var_114_bool = 0; var_115_object = Obj();
		var_115_object = var_1_object;
		func_2287(var_115_object);
		if(var_114_bool != 0) {
			@@@var_0_object:AddReply((int)533329, (int)37766, (int)34833);
		}
		@@@var_0_object:AddReply((int)533336, (int)-1, (int)34840);
		@@@var_0_object:AddReply((int)536033, (int)-1, (int)37770);
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	var_131_bool = 0;
	func_2410(var_131_bool);
	if(var_131_bool != 0) {

	Label_116:
		lshWaitForAnimEnd();
		var_132_string = var_3_string;
		if(var_132_string != 0) {
		} else {
			var_133_string = "";
			var_133_string = var_2_object;
			func_2061(var_133_string);
			goto Label_116;
	}
		PlayAnimation("all", "idle");

	Label_131:
		WaitForAnimEnd();
		var_146_string = var_3_string;
		if(var_146_string != 0) {
			goto Label_141;
		}
		PlayAnimation("all", "idle");
		goto Label_131;
	}
	goto Label_141;
	
Label_141:
	return 0;
	
}


func_847(var_0_object, var_387_float, var_388_int)
{
	var_389_object = Obj(); var_390_float = 0; var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_float = 0;
	var_396_float = var_387_float * (float)0.8999999761581421;
	GetVictim(var_396_float, var_392_object);
	ReportAttack(var_0_object);
	var_397_bool = var_392_object == var_0_object;
	if(var_397_bool != 0) {
		var_398_float = 0; var_399_object = Obj(); var_400_int = 0;
		var_392_object = var_399_object;
		var_388_int = var_400_int;
		func_577(var_400_int);
		var_398_float = var_393_float;
		var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_int = 0;
		var_392_object = var_402_object;
		var_393_float = var_403_float;
		var_405_int = 0; var_406_object = Obj(); var_407_int = 0;
		var_392_object = var_406_object;
		var_388_int = var_407_int;
		func_580(var_407_int);
		var_405_int = var_404_int;
		func_1694(var_401_float, var_402_object, var_403_float, var_404_int);
		var_401_float = var_394_float;
		var_466_int = 0;
		func_1230(var_466_int);
		ReportHit(var_0_object, var_466_int, var_394_float, var_393_float);
		var_467_object = Obj(); var_468_float = 0;
		var_392_object = var_467_object;
		var_394_float = var_468_float;
		func_1237();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2383(var_20_int)
{
	var_21_int = 0; var_22_int = 0;
	GetVariable("branch", var_22_int);
	var_22_int = var_20_int;
	return 2;
}


func_1617(var_46_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_47_string = "";
	var_46_string = var_47_string;
	func_2110(var_47_string);
	PlayAnimation("all", var_46_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_46_string);
	RemoveEnvelope();
	return 0;
}


func_1876(var_19_object, var_20_int, var_21_float)
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
		func_1663(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_2157(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_1905:
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
			goto Label_1905;
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
			func_1944(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_1832(var_109_object);
	return 18;
	
}


func_2389(var_19_object)
{
	var_20_int = 0;
	func_2383(var_20_int);
	var_25_bool = var_20_int == (int)1;
	if(var_25_bool != 0) {
		WorkWithCorpse(var_19_object);
	} else {
		Barter(var_19_object);
	}
	return 0;
	
}


func_1121(var_302_bool)
{
	var_303_bool = 0;
	var_303_bool = 0;
	var_304_bool = 0;
	func_1093(var_303_bool, var_304_bool);
	if(var_304_bool != 0) {
		var_321_bool = 0;
		func_1137(var_302_bool, var_303_bool, var_321_bool);
		if(var_321_bool != 0) {
			var_303_bool = 1;
		}
	}
	if(var_303_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_2402(var_77_int)
{
	var_77_int = 521048;
	return 0;
}


func_2404(var_76_int)
{
	var_76_int = 521047;
	return 0;
}


func_2406(var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png";
	return 0;
}


func_2151(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	self(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2408(var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png";
	return 0;
}


func_2410(var_71_bool)
{
	var_71_bool = 0;
	return 0;
}


func_2412(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	TaskCall(5);
	func_1501(var_23_object);
	TaskReturn();
	return 0;
}


func_2157(var_47_cvector, var_48_cvector)
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


func_1137(var_0_object, var_4_bool, var_321_bool)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0);
	GetScene(var_327_object);
	var_328_bool = 0;
	
Label_1141:
	var_332_cvector = CVector(0,0,0); var_333_object = Obj();
	var_333_object = var_0_object;
	func_1663(var_332_cvector, var_333_object);
	var_338_int = -var_332_cvector;
	FindDirLength(var_329_float, var_338_int, var_4_bool);
	var_339_bool = var_329_float < var_4_bool;
	if(var_339_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_330_cvector);
		GetPFPosition(var_331_cvector);
		WaitForAnimEnd();
		func_1225(var_331_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_328_bool = 1;
		var_343_bool = 0;
		func_1093(var_331_cvector, var_343_bool);
		var_344_bool = var_343_bool == 0; //@nz
		if(var_344_bool != 0) {
			goto Label_1179;
		}
		goto Label_1141;
	}
Label_1179:
	var_328_bool = var_321_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1649(var_429_string, var_430_int)
{
	var_432_bool = var_430_int == (int)2;
	if(var_432_bool != 0) {
		var_429_string = "fire";
		return 0;
	EMIT "GOTO 0x67d";
	}
	var_434_bool = var_430_int == (int)1;
	if(var_434_bool != 0) {
		var_429_string = "bullet";
		return 0;
	}
	var_429_string = "phys";
	return 0;
}


func_886(var_0_object, var_1_object, var_350_bool, var_351_float)
{
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; var_356_int = 0; var_357_bool = 0; var_358_int = 0; var_359_string = "";
	func_1225(var_359_string);
	irand(var_356_int, var_1_object);
	var_356_int = var_356_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2228();
	var_368_int = "attack_begin" + var_356_int;
	PlayAnimation("all", var_368_int);
	WaitForAnimEnd();
	func_1193(var_358_int, var_359_string);
	var_384_bool = 0; var_385_object = Obj();
	var_385_object = var_0_object;
	func_1808(var_384_bool, var_385_object);
	var_386_bool = var_384_bool == 0; //@nz
	if(var_386_bool != 0) {
		StopAsync();
		var_350_bool = 0;
		return 8;
	}
	var_387_float = 0; var_388_int = 0;
	var_351_float = var_387_float;
	var_356_int = var_388_int;
	func_847(var_359_string, var_387_float, var_388_int);
	var_471_int = "attack_middle" + var_356_int;
	HasAnimation(var_357_bool, "all", var_471_int);
	var_472_bool = var_357_bool;
	if(var_472_bool != 0) {
		func_2228();
		var_475_int = "attack_middle" + var_356_int;
		PlayAnimation("all", var_475_int);
		WaitForAnimEnd();
		func_1225(var_359_string);
		var_476_bool = 0; var_477_object = Obj();
		var_477_object = var_0_object;
		func_1808(var_476_bool, var_477_object);
		var_478_bool = var_476_bool == 0; //@nz
		if(var_478_bool != 0) {
			StopAsync();
			var_350_bool = 0;
			return 8;
		}
		var_479_float = 0; var_480_int = 0;
		var_351_float = var_479_float;
		var_356_int = var_480_int;
		func_847(var_359_string, var_479_float, var_480_int);
		var_358_int = 1;

	Label_963:
		var_482_int = "attack_middle" + var_356_int;
		var_484_int = var_482_int + "_";
		var_359_string = var_484_int + var_358_int;
		HasAnimation(var_357_bool, "all", var_359_string);
		var_486_bool = var_357_bool == 0; //@nz
		if(var_486_bool != 0) {
		} else {
			func_2228();
			PlayAnimation("all", var_359_string);
			WaitForAnimEnd();
			func_1225(var_359_string);
			var_502_bool = 0; var_503_object = Obj();
			var_503_object = var_0_object;
			func_1808(var_502_bool, var_503_object);
			var_504_bool = var_502_bool == 0; //@nz
			if(var_504_bool != 0) {
				StopAsync();
				var_350_bool = 0;
				var_505_float = 0; var_506_int = 0;
				var_351_float = var_505_float;
				var_356_int = var_506_int;
				func_847(var_359_string, var_505_float, var_506_int);
				var_358_int = var_358_int + (int)1;
				goto Label_963;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_490_int = "attack_end" + var_356_int;
	PlayAnimation("all", var_490_int);
	var_491_bool = 0;
	func_1239(var_491_bool);
	if(var_491_bool != 0) {
		var_492_bool = 0; var_493_float = 0;
		func_1023(var_492_bool, (float)0.75);
		StopAsync();
	}
	var_350_bool = 1;
	return 8;
	
}


func_2167(var_439_float, var_440_float, var_441_float)
{
	var_444_bool = var_440_float < var_441_float;
	if(var_444_bool != 0) {
		var_440_float = var_439_float;
	} else {
		var_441_float = var_439_float;
	}
	return 0;
	
}


func_2174(var_449_float, var_450_float, var_451_float, var_452_float)
{
	var_453_bool = var_450_float < var_451_float;
	if(var_453_bool != 0) {
		var_451_float = var_449_float;
		return 0;
	}
	var_454_bool = var_450_float > var_452_float;
	if(var_454_bool != 0) {
		var_452_float = var_449_float;
		return 0;
	}
	var_450_float = var_449_float;
	return 0;
}


func_1663(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_1670(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	FindActor(var_21_object, "player");
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2185(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0;
	GetVariable(var_117_string, var_119_int);
	var_119_int = var_116_int;
	return 2;
}


func_1677(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_bool = 0;
	IsPlayerActor(var_157_object, var_159_bool);
	var_159_bool = var_156_bool;
	return 2;
}


func_142(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_2410(var_97_bool);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_bool = var_96_string == var_2_object;
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_string = ""; var_101_bool = 0;
	var_96_string = var_100_string;
	var_103_bool = var_96_string == "";
	if(var_103_bool != 0) {
		var_101_bool = 0;
	} else {
		var_101_bool = 1;
	}
	func_2077(var_100_string, var_101_bool);
	var_2_object = var_96_string;
	return 0;
	
}


func_2190(var_457_float)
{
	var_458_object = Obj(); var_459_object = Obj();
	CreateFloatVector(var_459_object);
	@@var_459_object:add(var_457_float);
	var_461_bool = var_457_float < (int)0;
	if(var_461_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_459_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1682(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0;
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", (int)2);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_50_bool = 0;
		return 2;
	}
	@@var_51_object:HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
	return 2;
}


func_1944(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_1832(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1182(var_0_object, var_252_bool)
{
	var_253_bool = 0; var_254_bool = 0;
	var_257_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_257_bool != 0) {
		@@@var_0_object:IsAttacking(var_254_bool);
		var_254_bool = var_252_bool;
		return 2;
	}
	var_252_bool = 0;
	return 2;
}


func_2207(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	FindActor(var_20_object, var_17_string);
	var_21_bool = var_20_object == 0; //@ne
	if(var_21_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	Trigger(var_20_object, var_18_string);
	var_16_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1694(var_401_float, var_402_object, var_403_float, var_404_int)
{
	var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0;
	var_420_bool = 0; var_421_object = Obj(); var_422_string = "";
	var_402_object = var_421_object;
	func_1682(var_420_bool, var_421_object, "health");
	var_423_bool = var_420_bool == 0; //@nz
	if(var_423_bool != 0) {
		var_401_float = 0.0;
		return 12;
	}
	var_424_bool = 0; var_425_object = Obj(); var_426_string = "";
	var_402_object = var_425_object;
	func_1682(var_424_bool, var_425_object, "armor");
	var_427_bool = var_424_bool == 0; //@nz
	if(var_427_bool != 0) {
		var_414_int = 0;
	} else {
			@@var_402_object:GetProperty("armor", var_414_int);
	}
	var_429_string = ""; var_430_int = 0;
	var_404_int = var_430_int;
	func_1649(var_429_string, var_430_int);
	var_415_string = "armor_" + var_429_string;
	var_435_bool = 0; var_436_object = Obj(); var_437_string = "";
	var_402_object = var_436_object;
	var_415_string = var_437_string;
	func_1682(var_435_bool, var_436_object, var_437_string);
	var_438_bool = var_435_bool == 0; //@nz
	if(var_438_bool != 0) {
		var_416_int = 0;
	} else {
		@@var_402_object:GetProperty(var_415_string, var_416_int);

	}
	var_439_float = 0; var_440_float = 0; var_441_float = 0;
	var_442_int = var_414_int + var_416_int;
	var_440_float = var_442_int / (float)100.0;
	func_2167(var_439_float, var_440_float, (float)1);
	var_439_float = var_417_float;
	@@var_402_object:GetProperty("health", var_418_float);
	var_447_int = (int)1 - var_417_float;
	var_419_float = var_403_float * var_447_int;
	var_449_float = 0; var_450_float = 0; var_451_float = 0; var_452_float = 0;
	var_450_float = var_418_float - var_419_float;
	func_2174(var_449_float, var_450_float, (float)0, (float)1);
	@@var_402_object:SetProperty("health", var_449_float);
	var_455_bool = 0; var_456_object = Obj();
	var_402_object = var_456_object;
	func_1677(var_455_bool, var_456_object);
	if(var_455_bool != 0) {
		var_457_float = 0;
		var_457_float = -var_419_float;
		func_2190(var_457_float);
	}
	var_419_float = var_401_float;
	return 12;
	
}


func_1958(var_235_object)
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0);
	@@var_235_object:GetPosition(var_239_cvector);
	GetPosition(var_240_cvector);
	var_241_cvector = var_239_cvector - var_240_cvector;
	var_242_float = GetByIndex(var_241_cvector, 0);
	var_243_float = GetByIndex(var_241_cvector, 2);
	RotateAsync(var_242_float, var_243_float);
	return 6;
}


func_1193(var_2_object, var_5_bool)
{
	var_369_float = 0; var_370_int = 0; var_371_float = 0; var_372_int = 0;
	var_373_bool = var_2_object == 0; //@nz
	if(var_373_bool != 0) {
		return 4;
	}
	var_374_bool = var_5_bool;
	if(var_374_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_377_bool = var_5_bool > (int)0;
		if(var_377_bool != 0) {
			return 4;
		}
	}
	rand(var_371_float);
	var_378_float = 0;
	func_1243(var_378_float);
	var_379_bool = var_371_float < var_378_float;
	if(var_379_bool != 0) {
		irand(var_372_int, var_2_object);
		var_372_int = var_372_int + (int)1;
		var_382_int = "attack" + var_372_int;
		Speak(var_382_int);
		var_383_int = 0;
		func_1241(var_383_int);
		var_5_bool = var_383_int;
	}
	return 4;
}


func_2219(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	IsPlayerActor(var_18_object, var_20_bool);
	var_21_bool = var_20_bool;
	if(var_21_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1452(var_0_object, var_1_object, var_23_int)
{
	var_25_bool = var_23_int != (int)0;
	if(var_25_bool != 0) {
		return 0;
	}
	var_26_bool = 0; var_27_object = Obj();
	var_27_object = var_1_object;
	func_1490(var_26_bool, var_27_object);
	var_62_bool = var_26_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1969(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
	return 2;
}


func_2228()
{
	var_362_object = Obj(); var_363_object = Obj();
	GetScene(var_363_object);
	var_365_object = Obj();
	func_2151(var_365_object);
	BroadcastMessage("battle", var_365_object, var_363_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1974(var_28_bool, var_29_object, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0;
	@@var_29_object:GetPosition(var_41_cvector);
	@@var_29_object:GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_40_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	GetPosition(var_42_cvector);
	GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	var_50_float = var_50_float + var_40_float;
	SetByIndex(var_42_cvector, 1) = var_50_float;
	var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_53_float = sqrt(var_52_int);
	var_43_cvector = var_43_cvector / var_53_float;
	var_44_cvector = -var_43_cvector;
	var_54_float = var_43_cvector * var_30_float;
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	var_56_cvector = var_44_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2157(var_55_cvector, var_56_cvector);
	var_64_float = var_55_cvector * (int)25;
	var_65_int = var_54_float + var_64_float;
	var_45_cvector = var_65_int - CVector(0.0, 10.0, 0.0);
	var_46_cvector = var_42_cvector + var_45_cvector;
	IsOverrideActive(var_47_bool);
	var_67_bool = var_47_bool;
	if(var_67_bool != 0) {
		var_28_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_46_cvector, var_44_cvector, (bool)1);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	Rotate(var_69_float, var_70_float);
	var_71_bool = 0;
	func_2410(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		HasAnimationTrack(var_48_bool, "head");
		var_73_bool = var_48_bool;
		if(var_73_bool == 0) goto Label_2037;
		LookAsyncCamera("head");
	}
Label_2037:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 18;
	
}


func_2239(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_1474(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2246(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_2248:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_2239(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_2248;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_1225(var_0_object)
{
	var_125_object = Obj();
	var_125_object = var_0_object;
	func_2219(var_125_object);
	return 0;
}


func_1230(var_466_int)
{
	var_466_int = 0;
	return 0;
}


func_1232()
{
	var_258_string = "";
	func_2110("attack_stay");
	return 0;
}


func_1490(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_1808(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
	return 0;
}


func_1237()
{
	return 0;
}


func_2263(var_49_object)
{
	@@var_49_object:SetReturnValue((int)1);
	return 0;
}


func_1239(var_491_bool)
{
	var_491_bool = 1;
	return 0;
}


func_1241(var_383_int)
{
	var_383_int = 1;
	return 0;
}


func_1497(var_201_string)
{
	var_201_string = "walk";
	return 0;
}


func_1243(var_378_float)
{
	var_378_float = 0.5;
	return 0;
}


func_2268()
{
	SetVariable("d8q04", (int)2);
	func_2312();
	return 0;
}


func_1245(var_2_object, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0;
	var_145_object = Obj();
	var_133_object = var_145_object;
	func_2219(var_145_object);
	SetTimer((int)1, (int)5);
	CanSee(var_143_bool, var_133_object);
	var_148_bool = var_143_bool;
	if(var_148_bool != 0) {
		var_2_object = true;
		var_149_object = Obj();
		var_133_object = var_149_object;
		func_2092(var_149_object);
	} else {
		var_2_object = false;
	}
	var_156_bool = 0; var_157_object = Obj();
	var_133_object = var_157_object;
	func_1677(var_156_bool, var_157_object);
	if(var_156_bool != 0) {
		var_160_object = Obj();
		func_2151(var_160_object);
		SendPlayerEnemy(var_133_object, var_160_object);
	}
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_bool = 0;
	var_133_object = var_162_object;
	var_134_float = var_163_float;
	var_135_float = var_164_float;
	var_136_bool = var_165_bool;
	var_137_bool = var_166_bool;
	func_1350(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool);
	var_161_bool = var_144_bool;
	var_212_object = var_2_object;
	if(var_212_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_144_bool = var_132_bool;
	return 4;
	
}


func_1499(var_202_string)
{
	var_202_string = "run";
	return 0;
}


func_477(var_17_bool)
{
	var_17_bool = 1;
	return 0;
}


func_1501(var_23_object)
{
	EventDisable(0);
	var_24_object = Obj();
	var_23_object = var_24_object;
	func_1526(var_24_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1512:
	Hold();
	goto Label_1512;
}
EMIT "Return(); Pop(0)";


func_479()
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_1969(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 14;
	}
	func_2246((int)0);
	var_40_int = var_31_int;
	var_32_int = 0;
	
Label_493:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_32_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_1969(var_56_bool);
		if(var_56_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		irand(var_33_int, (int)3);
		var_59_bool = var_33_int == (int)0;
		if(var_59_bool != 0) {
			var_60_int = var_31_int;
			if(var_60_int == 0) goto Label_526;
			irand(var_34_int, var_31_int);
			var_62_string = ""; var_63_int = 0;
			var_34_int = var_63_int;
			func_2239(var_62_string, var_63_int);
			PlayAnimation("all", var_62_string);
			WaitForAnimEnd(var_35_bool);
			var_64_bool = var_35_bool == 0; //@nz
			if(var_64_bool != 0) {
			} else {
		} else {
				var_69_bool = var_33_int == (int)1;
				if(var_69_bool != 0) {
					rand(var_36_float, (int)4);
					var_72_int = var_36_float + (int)1;
					Sleep(var_72_int, var_37_bool);
					var_73_bool = var_37_bool == 0; //@nz
					if(var_73_bool != 0) {
						goto Label_555;
					}
					goto Label_544;
				}
				var_74_int = var_32_int;
				if(var_74_int == 0) goto Label_544;
				goto Label_555;
		}
		Label_544:
			var_65_bool = 0;
			func_558(var_65_bool);
			var_66_bool = var_65_bool == 0; //@nz
			if(var_66_bool != 0) {
				goto Label_555;
			}
			ResetAAS();
			var_32_int = var_32_int + (int)1;
			goto Label_493;

		}
	}
Label_555:
	ResetAAS();
	return 14;
	
}


func_2277()
{
	func_2299();
	var_67_bool = 0; var_68_string = ""; var_69_string = "";
	func_2207(var_67_bool, "quest_d8_04", "fail");
	return 0;
}


func_1767(var_43_bool, var_44_object)
{
	var_45_bool = 0; var_46_bool = 0;
	@@var_44_object:IsDead(var_46_bool);
	var_46_bool = var_43_bool;
	return 2;
}


func_1772(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj();
	var_38_bool = var_33_object == 0; //@ne
	if(var_38_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	var_39_bool = 0;
	var_39_bool = 0;
	var_42_bool = IsFuncExist(var_33_object, "IsDead", (int)1);
	if(var_42_bool != 0) {
		var_43_bool = 0; var_44_object = Obj();
		var_33_object = var_44_object;
		func_1767(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	GetScene(var_36_object);
	var_47_bool = var_36_object == 0; //@ne
	if(var_47_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	@@var_33_object:GetScene(var_37_object);
	var_48_bool = var_36_object != var_37_object;
	if(var_48_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	var_32_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2287(var_114_bool)
{
	var_116_int = 0; var_117_string = "";
	func_2185(var_116_int, "d8q04");
	var_121_bool = var_116_int == (int)1;
	if(var_121_bool != 0) {
		var_114_bool = 1;
		return 0;
	}
	var_114_bool = 0;
	return 0;
}


func_1526(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0);
	var_45_bool = var_24_object == 0; //@ne
	if(var_45_bool != 0) {
		var_46_string = "";
		func_1617("fdie");
	} else {
		@@var_24_object:GetPosition(var_35_cvector);
		GetPosition(var_36_cvector);
		GetDirection(var_37_cvector);
		var_38_cvector = var_36_cvector - var_35_cvector;
		var_78_float = GetByIndex(var_38_cvector, 0);
		var_79_float = GetByIndex(var_37_cvector, 0);
		var_80_float = var_78_float * var_79_float;
		var_81_float = GetByIndex(var_38_cvector, 2);
		var_82_float = GetByIndex(var_37_cvector, 2);
		var_83_float = var_81_float * var_82_float;
		var_84_int = var_80_float + var_83_float;
		var_86_bool = var_84_int >= (int)0;
		if(var_86_bool != 0) {
			var_39_string = "fdie";
		} else {
				var_39_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_24_object = var_40_object;
		var_89_bool = IsFuncExist(var_24_object, "GetScriptProperty", (int)2);
		if(var_89_bool != 0) {
			@@var_24_object:HasScriptProperty(var_41_bool, "Owner");
			var_91_bool = var_41_bool;
			if(var_91_bool != 0) {
				@@var_24_object:GetScriptProperty(var_40_object, "Owner");
				var_93_bool = var_40_object == 0; //@ne
				if(var_93_bool != 0) {
					var_24_object = var_40_object;
				}
			}
		}
		var_96_bool = IsFuncExist(var_40_object, "@GetEyesHeight", (int)1);
		if(var_96_bool != 0) {
			@@var_40_object:GetEyesHeight(var_43_float);
			var_44_cvector = CVector(0.0, 0.0, 0.0);
			var_97_float = GetByIndex(var_44_cvector, 1);
			var_43_float = var_97_float;
			SetByIndex(var_44_cvector, 1) = var_97_float;
			LookAsync(var_24_object, "head", var_44_cvector);
			var_42_bool = 1;
		} else {
			var_42_bool = 0;

		}
		var_99_string = "";
		var_39_string = var_99_string;
		func_2110(var_99_string);
		PlayAnimation("all", var_39_string);
		WaitForAnimEnd();
		var_101_bool = var_42_bool;
		if(var_101_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_39_string);
		RemoveEnvelope();
		var_40_object = 0;
	}
	return 20;
	
}


func_2299()
{
	var_59_object = Obj(); var_60_object = Obj();
	CreateDiaryEntry(var_60_object, (int)654, (int)2, (int)533367);
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0;
	var_60_object = var_65_object;
	func_2338(var_64_bool, var_65_object, (int)649);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1023(var_492_bool, var_493_float)
{
	var_494_float = 0; var_495_bool = 0; var_496_float = 0; var_497_bool = 0;
	rand(var_496_float);
	var_498_bool = var_496_float < var_493_float;
	if(var_498_bool != 0) {

	Label_1028:
		IsAnimationPlaying(var_497_bool);
		var_499_bool = var_497_bool == 0; //@nz
		if(var_499_bool != 0) {
		} else {
			var_500_bool = 0;
			func_1121(var_500_bool);
			if(var_500_bool != 0) {
				var_492_bool = 1;
				sync();
				goto Label_1028;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1225(var_497_bool);
	}
	goto Label_1048;
	
Label_1048:
	var_492_bool = 0;
	return 4;
	
}


