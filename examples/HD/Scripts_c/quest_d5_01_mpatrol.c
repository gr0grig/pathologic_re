// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,Hold/0,RemoveActor/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,GetGameTime/1,BroadcastMessage/3,SetVariable/2,GetMainOutdoorScene/1,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:quest_d5_01|W:dead|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:factory_fight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:pt_map_grif|A:ShowMap|W:ood5PatrolGuard1|W:d5q01|W:d5q01PatrolGotoGrif|A:AddMark|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:revolver_ammo|W:alpha_pills
// @GLOBALS: 0:object:
// @RUN_OP: 0x5ce
// @RUN_TASK: 5
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=object,int,int,bool,float,int params=0
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_7: op=0x455 vars=int
// @EVENT_1: op=0x470 vars=object
// @EVENT_2: op=0x47f vars=object
// @EVENT_10: op=0x505 vars=object
// @EVENT_41: op=0x510 vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x539 vars=object
// @EVENT_6: op=0x543 vars=
// @EVENT_22: op=0x5c0 vars=object,int,float,float
// @EVENT_16: op=0x5c2 vars=object,string
// @EVENT_41: op=0x5c4 vars=object
// @TASK_5: vars= params=0
// @EVENT_0: op=0x5d2 vars=object
// @EVENT_17: op=0x5de vars=object
// @EVENT_26: op=0x5e9 vars=string
// @STANDALONE_EVENT_22: op=0x8ef vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x8f7 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x901 vars=object,string
// @STANDALONE_EVENT_41: op=0x90e vars=object
// @PE: 0x4a,0x9d,0xb3,0x188,0x18b,0x41c,0x455,0x470,0x47f,0x4f3,0x505,0x510,0x519,0x524,0x5a6,0x5c0,0x5c2,0x5c4,0x5c6,0x5d2,0x5e9,0x5f3,0x7ed,0x7f4,0x83a,0x84a,0x864,0x8b9,0x8ef,0x8f7,0x90e

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	if((int)1 != 0) {
		func_1965();
		var_19_bool = var_15_bool == (int)12905;
		if(var_19_bool != 0) {
			var_20_object = Obj(); var_21_object = Obj();
			var_20_object = var_1_object;
			var_21_object = var_0_object;
			func_2128();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_2106(var_41_object);
		}
		var_67_bool = var_15_bool == (int)12906;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_2128();
		}
		var_71_bool = var_15_bool == (int)16859;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_2128();
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_2106(var_75_object);
		}
		var_77_bool = var_14_object == (int)12892;
		if(var_77_bool != 0) {
			var_78_bool = 0; var_79_object = Obj();
			var_79_object = var_1_object;
			func_2148(var_79_object);
			if(var_78_bool != 0) {
				var_86_object = Obj(); var_87_object = Obj();
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_2122();
				var_90_string = "";
				func_157(var_15_bool, "Neutral");
				@@@var_0_object:SetMessage((int)511690);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511691, (int)12894, (int)12893);
				return 0;
			}
			var_111_string = "";
			func_157(var_15_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512484, (int)-1, (int)13652);
			@@@var_0_object:AddReply((int)515786, (int)-1, (int)16858);
			return 0;
		}
		var_120_bool = var_14_object == (int)12894;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_157(var_15_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511693, (int)12901, (int)12895);
			@@@var_0_object:AddReply((int)511694, (int)12898, (int)12896);
			@@@var_0_object:AddReply((int)511695, (int)12898, (int)12897);
			return 0;
		}
		var_133_bool = var_14_object == (int)12898;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_157(var_15_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511697, (int)12901, (int)12900);
			@@@var_0_object:AddReply((int)515787, (int)-1, (int)16859);
			return 0;
		}
		var_143_bool = var_14_object == (int)12901;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_157(var_15_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511699, (int)12904, (int)12902);
			@@@var_0_object:AddReply((int)515788, (int)-1, (int)16860);
			return 0;
		}
		var_153_bool = var_14_object == (int)12904;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_157(var_15_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511700);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511701, (int)-1, (int)12905);
			@@@var_0_object:AddReply((int)511702, (int)-1, (int)12906);
			return 0;
		}
		var_3_string = true;
		var_162_bool = 0;
		func_2332(var_162_bool);
		if(var_162_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int)
{
	var_16_bool = var_14_int == (int)1;
	if(var_16_bool != 0) {
		var_17_object = Obj();
		var_17_object = var_1_object;
		func_2086(var_17_object);
	} else {
		var_22_int = 0;
		var_14_int = var_22_int;
		func_1267(var_13_bool, var_14_int, var_22_int);
	}
	return 0;
	
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = var_1_object == var_14_object;
	if(var_16_bool != 0) {
		var_17_bool = var_2_object == 0; //@nz
		if(var_17_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_2_object = true;
		var_18_object = Obj();
		var_14_object = var_18_object;
		func_1954(var_18_object);
	}
	return 0;
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = var_1_object == var_14_object;
	if(var_16_bool != 0) {
		var_17_object = var_2_object;
		if(var_17_object != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	RequestClearPath(var_14_object);
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	func_1123(var_14_object);
	var_14_object = Obj();
	func_2318();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsOverrideActive(var_16_bool);
	var_17_bool = var_16_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_14_object = var_18_object;
		func_2233(var_18_object);
	}
	return 2;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_object = Obj();
	func_2013(var_14_object);
	RemoveActor(var_14_object);
	Hold();
	return 0;
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	return 0;
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0;
	func_1500(var_15_bool);
	if(var_15_bool != 0) {
		var_16_object = Obj();
		var_14_object = var_16_object;
		func_1478(var_16_object);
	}
	return 0;
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		var_18_bool = 0; var_19_string = ""; var_20_string = "";
		func_2069(var_18_bool, "quest_d5_01", "factory_fight");
	}
	return 2;
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_string)
{
	var_16_bool = var_14_string == "attack";
	if(var_16_bool != 0) {
		TaskCall(2);
		func_377();
		TaskReturn();
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0;
	var_14_object = var_18_object;
	var_15_int = var_19_int;
	var_16_float = var_20_float;
	func_1743(var_18_object, var_19_int, var_20_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	var_14_object = var_20_object;
	var_15_int = var_21_int;
	var_16_float = var_22_float;
	var_18_cvector = var_23_cvector;
	var_19_cvector = var_24_cvector;
	func_1811(var_22_float, var_23_cvector, var_24_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0;
	var_19_bool = var_15_string == "health";
	if(var_19_bool != 0) {
		GetProperty("health", var_17_float);
		var_22_bool = var_17_float <= (int)0;
		if(var_22_bool != 0) {
			SignalDeath(var_14_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_2334(var_15_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	
Label_1486:
	Hold();
	goto Label_1486;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_object = var_18_object;
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0;
	var_18_object = var_29_object;
	func_1836(var_28_bool, var_29_object, (float)70.0);
	var_75_bool = var_28_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_76_int = 0;
	func_2326(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_2324(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_2328(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_2330(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_2210(var_80_int);
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
	var_155_bool = var_27_bool == 0; //@nz
	if(var_155_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_56;
	}
	var_18_object = Obj();
	func_1905();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1537(var_48_cvector, var_49_object)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_52_cvector);
	@@var_49_object:GetPosition(var_53_cvector);
	var_48_cvector = var_53_cvector - var_52_cvector;
	return 4;
}


func_2052(var_455_float)
{
	var_456_object = Obj(); var_457_object = Obj();
	CreateFloatVector(var_457_object);
	@@var_457_object:add(var_455_float);
	var_459_bool = var_455_float < (int)0;
	if(var_459_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_457_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1544(var_154_bool, var_155_object)
{
	var_156_bool = 0; var_157_bool = 0;
	IsPlayerActor(var_155_object, var_157_bool);
	var_157_bool = var_154_bool;
	return 2;
}


func_1289(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1549(var_110_bool, var_111_object, var_112_string)
{
	var_113_bool = 0; var_114_bool = 0;
	var_117_bool = IsFuncExist(var_111_object, "HasProperty", (int)2);
	var_118_bool = var_117_bool == 0; //@nz
	if(var_118_bool != 0) {
		var_110_bool = 0;
		return 2;
	}
	@@var_111_object:HasProperty(var_112_string, var_114_bool);
	var_114_bool = var_110_bool;
	return 2;
}


func_1040(var_0_object)
{
	var_123_object = Obj();
	var_123_object = var_0_object;
	func_2086(var_123_object);
	return 0;
}


func_1811(var_20_object, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj();
	GetScene(var_27_object);
	AddActorByType(var_28_object, "scripted", var_27_object, var_23_cvector, var_24_cvector, "blood_dir.xml");
	var_31_object = Obj();
	var_20_object = var_31_object;
	func_1699(var_31_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2324(var_77_int)
{
	var_77_int = 515572;
	return 0;
}


func_1045(var_464_int)
{
	var_464_int = 0;
	return 0;
}


func_2069(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj();
	FindActor(var_29_object, var_26_string);
	var_30_bool = var_29_object == 0; //@ne
	if(var_30_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	Trigger(var_29_object, var_27_string);
	var_25_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1047()
{
	var_256_string = "";
	func_1972("attack_stay");
	return 0;
}


func_2326(var_76_int)
{
	var_76_int = 504031;
	return 0;
}


func_1561(var_399_float, var_400_object, var_401_float, var_402_int)
{
	var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_float = 0; var_410_float = 0; var_411_float = 0; var_412_int = 0; var_413_string = ""; var_414_int = 0; var_415_float = 0; var_416_float = 0; var_417_float = 0;
	var_418_bool = 0; var_419_object = Obj(); var_420_string = "";
	var_400_object = var_419_object;
	func_1549(var_418_bool, var_419_object, "health");
	var_421_bool = var_418_bool == 0; //@nz
	if(var_421_bool != 0) {
		var_399_float = 0.0;
		return 12;
	}
	var_422_bool = 0; var_423_object = Obj(); var_424_string = "";
	var_400_object = var_423_object;
	func_1549(var_422_bool, var_423_object, "armor");
	var_425_bool = var_422_bool == 0; //@nz
	if(var_425_bool != 0) {
		var_412_int = 0;
	} else {
			@@var_400_object:GetProperty("armor", var_412_int);
	}
	var_427_string = ""; var_428_int = 0;
	var_402_int = var_428_int;
	func_1523(var_427_string, var_428_int);
	var_413_string = "armor_" + var_427_string;
	var_433_bool = 0; var_434_object = Obj(); var_435_string = "";
	var_400_object = var_434_object;
	var_413_string = var_435_string;
	func_1549(var_433_bool, var_434_object, var_435_string);
	var_436_bool = var_433_bool == 0; //@nz
	if(var_436_bool != 0) {
		var_414_int = 0;
	} else {
		@@var_400_object:GetProperty(var_413_string, var_414_int);

	}
	var_437_float = 0; var_438_float = 0; var_439_float = 0;
	var_440_int = var_412_int + var_414_int;
	var_438_float = var_440_int / (float)100.0;
	func_2029(var_437_float, var_438_float, (float)1);
	var_437_float = var_415_float;
	@@var_400_object:GetProperty("health", var_416_float);
	var_445_int = (int)1 - var_415_float;
	var_417_float = var_401_float * var_445_int;
	var_447_float = 0; var_448_float = 0; var_449_float = 0; var_450_float = 0;
	var_448_float = var_416_float - var_417_float;
	func_2036(var_447_float, var_448_float, (float)0, (float)1);
	@@var_400_object:SetProperty("health", var_447_float);
	var_453_bool = 0; var_454_object = Obj();
	var_400_object = var_454_object;
	func_1544(var_453_bool, var_454_object);
	if(var_453_bool != 0) {
		var_455_float = 0;
		var_455_float = -var_417_float;
		func_2052(var_455_float);
	}
	var_417_float = var_399_float;
	return 12;
	
}


func_2328(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_1305(var_181_bool, var_182_object)
{
	var_183_bool = 0; var_184_object = Obj();
	var_182_object = var_184_object;
	func_1675(var_183_bool, var_184_object);
	var_183_bool = var_181_bool;
	return 0;
}


func_1052()
{
	return 0;
}


func_2330(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_1054(var_489_bool)
{
	var_489_bool = 1;
	return 0;
}


func_2332(var_71_bool)
{
	var_71_bool = 0;
	return 0;
}


func_1056(var_381_int)
{
	var_381_int = 1;
	return 0;
}


func_2081(var_37_float)
{
	var_38_float = 0; var_39_float = 0;
	GetGameTime(var_39_float);
	var_39_float = var_37_float;
	return 2;
}


func_1058(var_376_float)
{
	var_376_float = 0.5;
	return 0;
}


func_2334(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	AddItem(var_17_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_17_bool, "alpha_pills", (int)0, (int)2);
	var_24_object = Obj();
	var_15_object = var_24_object;
	TaskCall(4);
	func_1316(var_24_object);
	TaskReturn();
	return 2;
}


func_1060(var_2_object, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0;
	var_143_object = Obj();
	var_131_object = var_143_object;
	func_2086(var_143_object);
	SetTimer((int)1, (int)5);
	CanSee(var_141_bool, var_131_object);
	var_146_bool = var_141_bool;
	if(var_146_bool != 0) {
		var_2_object = true;
		var_147_object = Obj();
		var_131_object = var_147_object;
		func_1954(var_147_object);
	} else {
		var_2_object = false;
	}
	var_154_bool = 0; var_155_object = Obj();
	var_131_object = var_155_object;
	func_1544(var_154_bool, var_155_object);
	if(var_154_bool != 0) {
		var_158_object = Obj();
		func_2013(var_158_object);
		SendPlayerEnemy(var_131_object, var_158_object);
	}
	var_159_bool = 0; var_160_object = Obj(); var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_bool = 0;
	var_131_object = var_160_object;
	var_132_float = var_161_float;
	var_133_float = var_162_float;
	var_134_bool = var_163_bool;
	var_135_bool = var_164_bool;
	func_1165(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool);
	var_159_bool = var_142_bool;
	var_210_object = var_2_object;
	if(var_210_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_142_bool = var_130_bool;
	return 4;
	
}


func_1312(var_199_string)
{
	var_199_string = "walk";
	return 0;
}


func_2086(var_123_object)
{
	var_124_bool = 0; var_125_bool = 0;
	IsPlayerActor(var_123_object, var_125_bool);
	var_126_bool = var_125_bool;
	if(var_126_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1825(var_233_object)
{
	var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0);
	@@var_233_object:GetPosition(var_237_cvector);
	GetPosition(var_238_cvector);
	var_239_cvector = var_237_cvector - var_238_cvector;
	var_240_float = GetByIndex(var_239_cvector, 0);
	var_241_float = GetByIndex(var_239_cvector, 2);
	RotateAsync(var_240_float, var_241_float);
	return 6;
}


func_1314(var_200_string)
{
	var_200_string = "run";
	return 0;
}


func_1316(var_24_object)
{
	var_25_bool = 0; var_26_string = ""; var_27_string = "";
	func_2069(var_25_bool, "quest_d5_01", "dead");
	var_31_object = Obj();
	var_24_object = var_31_object;
	func_1355(var_31_object);
	SetRTEnvelope((int)50, (int)40);
	func_2263();
	
Label_1333:
	Hold();
	goto Label_1333;
}
EMIT "Return(); Pop(0)";


func_1836(var_28_bool, var_29_object, var_30_float)
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
	func_2019(var_55_cvector, var_56_cvector);
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
	func_2332(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		HasAnimationTrack(var_48_bool, "head");
		var_73_bool = var_48_bool;
		if(var_73_bool == 0) goto Label_1899;
		LookAsyncCamera("head");
	}
Label_1899:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 18;
	
}


func_2095()
{
	var_360_object = Obj(); var_361_object = Obj();
	GetScene(var_361_object);
	var_363_object = Obj();
	func_2013(var_363_object);
	BroadcastMessage("battle", var_363_object, var_361_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2106(var_41_object)
{
	var_42_object = Obj(); var_43_string = ""; var_44_float = 0;
	func_2160(Obj());
	var_45_object = var_42_object;
	func_2177(var_42_object, "pt_map_grif", (float)2);
	var_65_object = Obj();
	func_2160(var_65_object);
	@@var_41_object:ShowMap(var_65_object);
	return 0;
}


func_838(var_490_bool, var_491_float)
{
	var_492_float = 0; var_493_bool = 0; var_494_float = 0; var_495_bool = 0;
	rand(var_494_float);
	var_496_bool = var_494_float < var_491_float;
	if(var_496_bool != 0) {

	Label_843:
		IsAnimationPlaying(var_495_bool);
		var_497_bool = var_495_bool == 0; //@nz
		if(var_497_bool != 0) {
		} else {
			var_498_bool = 0;
			func_936(var_498_bool);
			if(var_498_bool != 0) {
				var_490_bool = 1;
				sync();
				goto Label_843;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1040(var_495_bool);
	}
	goto Label_863;
	
Label_863:
	var_490_bool = 0;
	return 4;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object;
	var_1_object = var_89_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_96_bool = 0; var_97_object = Obj();
		var_97_object = var_1_object;
		func_2148(var_97_object);
		if(var_96_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_2122();
			var_108_string = "";
			func_157(var_90_object, "Neutral");
			@@@var_0_object:SetMessage((int)511690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511691, (int)12894, (int)12893);
		} else {
				var_147_string = "";
				func_157(var_90_object, "Neutral");
				@@@var_0_object:SetMessage((int)512483);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512484, (int)-1, (int)13652);
				@@@var_0_object:AddReply((int)515786, (int)-1, (int)16858);
				goto Label_127;
		}
	}
Label_127:
	var_129_bool = 0;
	func_2332(var_129_bool);
	if(var_129_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_130_string = var_3_string;
		if(var_130_string != 0) {
		} else {
			var_131_string = "";
			var_131_string = var_2_object;
			func_1923(var_131_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_144_string = var_3_string;
		if(var_144_string != 0) {
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


func_2122()
{
	SetVariable("ood5PatrolGuard1", (int)1);
	return 0;
}


func_1355(var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; var_47_object = Obj(); var_48_bool = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0);
	var_52_bool = var_31_object == 0; //@ne
	if(var_52_bool != 0) {
		var_53_string = "";
		func_1446("fdie");
	} else {
		@@var_31_object:GetPosition(var_42_cvector);
		GetPosition(var_43_cvector);
		GetDirection(var_44_cvector);
		var_45_cvector = var_43_cvector - var_42_cvector;
		var_85_float = GetByIndex(var_45_cvector, 0);
		var_86_float = GetByIndex(var_44_cvector, 0);
		var_87_float = var_85_float * var_86_float;
		var_88_float = GetByIndex(var_45_cvector, 2);
		var_89_float = GetByIndex(var_44_cvector, 2);
		var_90_float = var_88_float * var_89_float;
		var_91_int = var_87_float + var_90_float;
		var_93_bool = var_91_int >= (int)0;
		if(var_93_bool != 0) {
			var_46_string = "fdie";
		} else {
				var_46_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_31_object = var_47_object;
		var_96_bool = IsFuncExist(var_31_object, "GetScriptProperty", (int)2);
		if(var_96_bool != 0) {
			@@var_31_object:HasScriptProperty(var_48_bool, "Owner");
			var_98_bool = var_48_bool;
			if(var_98_bool != 0) {
				@@var_31_object:GetScriptProperty(var_47_object, "Owner");
				var_100_bool = var_47_object == 0; //@ne
				if(var_100_bool != 0) {
					var_31_object = var_47_object;
				}
			}
		}
		var_103_bool = IsFuncExist(var_47_object, "@GetEyesHeight", (int)1);
		if(var_103_bool != 0) {
			@@var_47_object:GetEyesHeight(var_50_float);
			var_51_cvector = CVector(0.0, 0.0, 0.0);
			var_104_float = GetByIndex(var_51_cvector, 1);
			var_50_float = var_104_float;
			SetByIndex(var_51_cvector, 1) = var_104_float;
			LookAsync(var_31_object, "head", var_51_cvector);
			var_49_bool = 1;
		} else {
			var_49_bool = 0;

		}
		var_106_string = "";
		var_46_string = var_106_string;
		func_1972(var_106_string);
		PlayAnimation("all", var_46_string);
		WaitForAnimEnd();
		var_108_bool = var_49_bool;
		if(var_108_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_46_string);
		RemoveEnvelope();
		var_47_object = 0;
	}
	return 20;
	
}


func_2128()
{
	var_22_object = Obj(); var_23_object = Obj();
	SetVariable("d5q01", (int)6);
	func_2160(Obj());
	var_26_object = var_23_object;
	var_37_float = 0;
	func_2081(var_37_float);
	@@var_23_object:AddMark("d5q01PatrolGotoGrif", "pt_map_grif", (int)1, (int)515349, var_37_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_865(var_0_object, var_287_bool, var_288_float)
{
	var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0; var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0;
	
Label_866:
	IsAnimationPlaying(var_294_bool);
	var_299_bool = var_294_bool == 0; //@nz
	if(var_299_bool != 0) {
	} else {
		var_300_bool = 0;
		func_936(var_300_bool);
		if(var_300_bool != 0) {
			var_287_bool = 1;
			return 10;
		}
		var_343_bool = 0; var_344_object = Obj();
		var_344_object = var_0_object;
		func_1675(var_343_bool, var_344_object);
		var_345_bool = var_343_bool == 0; //@nz
		if(var_345_bool != 0) {
			var_287_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_295_cvector);
		GetPFPosition(var_296_cvector);
		var_297_cvector = var_295_cvector - var_296_cvector;
		var_298_float = var_297_cvector | var_297_cvector;
		var_346_float = var_288_float * var_288_float;
		var_347_bool = var_298_float < var_346_float;
		if(var_347_bool != 0) {
			var_348_bool = 0; var_349_float = 0;
			var_288_float = var_349_float;
			func_701(var_297_cvector, var_298_float, var_348_bool, var_349_float);
			var_287_bool = 1;
			sync();
			goto Label_866;
		}
		return 10;
	}
	func_1040(var_298_float);
	var_287_bool = 0;
	return 10;
	
}


func_1634(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0;
	@@var_104_object:IsDead(var_106_bool);
	var_106_bool = var_103_bool;
	return 2;
}


func_1123(var_2_object)
{
	KillTimer((int)1);
	var_16_object = var_2_object;
	if(var_16_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1289(var_14_object);
	return 0;
}


func_2148(var_96_bool)
{
	var_98_int = 0; var_99_string = "";
	func_2047(var_98_int, "ood5PatrolGuard1");
	var_103_bool = var_98_int == (int)0;
	if(var_103_bool != 0) {
		var_96_bool = 1;
		return 0;
	}
	var_96_bool = 0;
	return 0;
}


func_1639(var_92_bool, var_93_object)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj();
	var_98_bool = var_93_object == 0; //@ne
	if(var_98_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	var_99_bool = 0;
	var_99_bool = 0;
	var_102_bool = IsFuncExist(var_93_object, "IsDead", (int)1);
	if(var_102_bool != 0) {
		var_103_bool = 0; var_104_object = Obj();
		var_93_object = var_104_object;
		func_1634(var_103_bool, var_104_object);
		if(var_103_bool != 0) {
			var_99_bool = 1;
		}
	}
	if(var_99_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	GetScene(var_96_object);
	var_107_bool = var_96_object == 0; //@ne
	if(var_107_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	@@var_93_object:GetScene(var_97_object);
	var_108_bool = var_96_object != var_97_object;
	if(var_108_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	var_92_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2160(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetMainOutdoorScene(var_29_object);
	var_31_bool = var_29_object == 0; //@ne
	if(var_31_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_30_object = 0;
		var_30_object = var_26_object;
		return 4;
	}
	@@var_29_object:GetMap(var_30_object);
	var_30_object = var_26_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1905()
{
	var_157_bool = 0; var_158_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_160_bool = 0;
	func_2332(var_160_bool);
	if(var_160_bool != 0) {
	} else {
		HasAnimationTrack(var_158_bool, "head");
		var_162_bool = var_158_bool;
		if(var_162_bool == 0) goto Label_1922;
		UnlookAsync("head");
	}
Label_1922:
	return 2;
	
}


func_627(var_1_object, var_2_object, var_4_bool)
{
	var_52_bool = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; var_57_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_629:
	var_61_int = var_1_object + (int)1;
	var_62_int = "attack_begin" + var_61_int;
	HasAnimation(var_55_bool, "all", var_62_int);
	var_63_bool = var_55_bool == 0; //@nz
	if(var_63_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_629;
	}
	var_2_object = 0;
	
Label_643:
	var_66_int = var_2_object + (int)1;
	var_67_int = "attack" + var_66_int;
	IsExisting3DSound(var_56_bool, var_67_int);
	var_68_bool = var_56_bool == 0; //@nz
	if(var_68_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_643;

	}
	GetAnimationOffset(var_57_cvector, "all", "bjump");
	var_71_float = GetByIndex(var_57_cvector, 2);
	var_4_bool = -var_71_float;
	return 6;
	
}


func_377()
{
	var_23_object = Obj(); var_24_object = Obj();
	FindActor(var_24_object, "player");
	var_26_bool = var_24_object == 0; //@nz
	if(var_26_bool != 0) {
		return 2;
	}
	var_27_object = Obj(); var_28_bool = 0; var_29_float = 0;
	var_24_object = var_27_object;
	func_398(var_20_bool, var_21_float, var_22_int, var_23_object, var_24_object, var_27_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2177(var_42_object, var_43_string, var_44_float)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); var_53_bool = 0;
	GetMainOutdoorScene(var_52_object);
	var_54_bool = var_52_object == 0; //@ne
	if(var_54_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_52_object:GetLocator(var_43_string, var_53_bool, var_50_cvector, var_51_cvector);
	var_56_bool = var_53_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_58_int = "Warning: outdoor scene locator " + var_43_string;
		var_60_int = var_58_int + " doesnt exist";
		Trace(var_60_int);
	}
	@@var_52_object:GetMap(var_42_object);
	var_61_bool = var_42_object == 0; //@ne
	if(var_61_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_63_float = GetByIndex(var_50_cvector, 0);
	var_64_float = GetByIndex(var_50_cvector, 2);
	@@var_42_object:SetMapParams(var_63_float, var_64_float, var_44_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1923(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0;
	lshHasAnimation(var_135_bool, var_131_string);
	var_138_bool = var_135_bool;
	if(var_138_bool != 0) {
		lshGetAnimTimes(var_131_string, var_136_float, var_137_float);
		lshPlayAnimation(var_136_float, var_137_float, (bool)0);
	} else {
		var_141_int = "Can't find lsh animation : " + var_131_string;
		Trace(var_141_int);
	}
	return 6;
	
}


func_392(var_396_float)
{
	var_396_float = 0.30000001192092896;
	return 0;
}


func_1675(var_88_bool, var_89_object)
{
	var_90_int = 0; var_91_int = 0;
	var_92_bool = 0; var_93_object = Obj();
	var_89_object = var_93_object;
	func_1639(var_92_bool, var_93_object);
	var_109_bool = var_92_bool == 0; //@nz
	if(var_109_bool != 0) {
		var_88_bool = 0;
		return 2;
	}
	var_110_bool = 0; var_111_object = Obj(); var_112_string = "";
	var_89_object = var_111_object;
	func_1549(var_110_bool, var_111_object, "noaccess");
	var_119_bool = var_110_bool == 0; //@nz
	if(var_119_bool != 0) {
		var_88_bool = 1;
		return 2;
	}
	@@var_89_object:GetProperty("noaccess", var_91_int);
	var_88_bool = var_91_int == (int)0;
	return 2;
}


func_395(var_403_int)
{
	var_403_int = 0;
	return 0;
}


func_1165(var_0_object, var_1_object, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool)
{
	var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj();
	var_0_object = false;
	var_1_object = var_160_object;
	var_164_bool = var_174_bool;
	
Label_1169:
	var_181_bool = 0; var_182_object = Obj();
	var_160_object = var_182_object;
	func_1305(var_181_bool, var_182_object);
	var_185_bool = var_181_bool == 0; //@nz
	if(var_185_bool != 0) {
		var_159_bool = 0;
		return 16;
	}
	@@var_160_object:GetPosition(var_176_cvector);
	GetPosition(var_177_cvector);
	var_178_cvector = var_176_cvector - var_177_cvector;
	var_179_float = var_178_cvector | var_178_cvector;
	var_186_bool = 0;
	var_186_bool = 0;
	var_188_bool = var_162_float > (int)0;
	if(var_188_bool != 0) {
		var_189_float = var_162_float * var_162_float;
		var_190_bool = var_179_float > var_189_float;
		if(var_190_bool != 0) {
			var_186_bool = 1;
		}
	}
	if(var_186_bool != 0) {
		Stop();
		var_159_bool = 0;
		return 16;
	}
	var_191_float = var_161_float * var_161_float;
	var_192_bool = var_179_float > var_191_float;
	if(var_192_bool != 0) {
		@@var_160_object:GetPFPosition(var_176_cvector);
		FindPathTo(var_180_object, var_176_cvector);
		var_193_bool = var_180_object != 0; //@nn
		if(var_193_bool != 0) {
			var_180_object = var_175_object;
			var_180_object = 0;
		}
		var_194_bool = var_175_object != 0; //@nn
		if(var_194_bool != 0) {
			var_195_bool = var_174_bool;
			if(var_195_bool == 0) goto Label_1218;
			var_174_bool = 0;
			RotatePath(var_175_object, var_173_bool);
			var_196_bool = var_173_bool == 0; //@nz
			if(var_196_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_199_string = "";
				func_1312(var_199_string);
				var_200_string = "";
				func_1314(var_200_string);
				FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string);
				var_201_bool = var_173_bool == 0; //@nz
				if(var_201_bool != 0) {
					var_202_object = var_0_object;
					if(var_202_object != 0) {
						var_175_object = 0;
						goto Label_1265;
					EMIT "GOTO 0x4d6";
					}
				} else {
					var_175_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_173_bool);
					var_205_bool = var_173_bool == 0; //@nz
					if(var_205_bool != 0) {
						var_206_object = var_0_object;
						if(var_206_object != 0) {
							var_175_object = 0;
							goto Label_1265;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1265;
	}
			var_180_object = 0;
			goto Label_1263;

		Label_1263:
			var_175_object = 0;

		}
		goto Label_1169;
	}
Label_1265:
	var_159_bool = !var_0_object;
	return 16;
	
}


func_908(var_0_object, var_302_bool)
{
	var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0;
	var_313_bool = 0; var_314_object = Obj();
	var_314_object = var_0_object;
	func_1675(var_313_bool, var_314_object);
	var_315_bool = var_313_bool == 0; //@nz
	if(var_315_bool != 0) {
		var_302_bool = 0;
		return 10;
	}
	var_316_bool = 0;
	func_997(var_312_float, var_316_bool);
	if(var_316_bool != 0) {
		@@@var_0_object:GetPFPosition(var_308_cvector);
		GetPFPosition(var_309_cvector);
		var_310_cvector = var_308_cvector - var_309_cvector;
		var_311_float = var_310_cvector | var_310_cvector;
		@@@var_0_object:GetAttackDistance(var_312_float);
		var_312_float = var_312_float + (int)50;
		var_318_float = var_312_float * var_312_float;
		var_302_bool = var_311_float <= var_318_float;
		return 10;
	}
	var_302_bool = 0;
	return 10;
}


func_398(var_0_object, var_3_string, var_5_object, var_27_object, var_28_bool, var_29_float, var_136_bool, var_228_bool)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_float = 0;
	func_627(var_49_cvector, var_50_bool, var_51_float);
	var_5_object = 0;
	var_76_bool = IsFuncExist(var_27_object, "@GetAttackDistance", (int)1);
	if(var_76_bool != 0) {
		@@var_27_object:GetAttackDistance(var_41_float);
		var_41_float = var_41_float + (int)50;
	} else {
							var_29_float = var_41_float;
	}
	var_79_bool = var_41_float >= (int)150;
	if(var_79_bool != 0) {
		var_41_float = 150;
	}
	var_3_string = false;
	var_0_object = var_27_object;
	IsPlayerActor(var_0_object, var_44_bool);
	var_80_bool = var_44_bool;
	if(var_80_bool != 0) {
		PlayGlobalMusic("attack");
		var_82_object = Obj();
		func_2013(var_82_object);
		SendPlayerEnemy(var_27_object, var_82_object);
	}
	var_85_bool = var_28_bool;
	if(var_85_bool != 0) {
		var_45_bool = 0;
	} else {
						var_45_bool = 1;

	}
	var_46_float = (float)400.0 + var_41_float;
	
Label_438:
	var_87_bool = 0;
	var_87_bool = 0;
	var_88_bool = 0; var_89_object = Obj();
	var_89_object = var_0_object;
	func_1675(var_88_bool, var_89_object);
	if(var_88_bool != 0) {
		var_122_bool = var_3_string == 0; //@nz
		if(var_122_bool != 0) {
			var_87_bool = 1;
		}
	}
	if(var_87_bool != 0) {
		func_1040(var_51_float);
		@@@var_0_object:GetPFPosition(var_42_cvector);
		GetPFPosition(var_43_cvector);
		var_47_cvector = var_42_cvector - var_43_cvector;
		var_48_float = var_47_cvector | var_47_cvector;
		var_128_float = var_46_float * var_46_float;
		var_129_bool = var_48_float >= var_128_float;
		if(var_129_bool != 0) {
			var_130_bool = 0; var_131_object = Obj(); var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_bool = 0;
			var_131_object = var_0_object;
			var_41_float = var_132_float;
			TaskCall(3);
			func_1060(var_138_bool, var_130_bool, var_131_object, var_132_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_213_bool = var_136_bool == 0; //@nz
			if(var_213_bool != 0) {
			} else {
				var_45_bool = 0;
		} else {
				var_219_float = var_29_float * var_29_float;
				var_220_bool = var_48_float >= var_219_float;
				if(var_220_bool != 0) {
					@@@var_0_object:GetPFPosition(var_49_cvector);
					CanReachByPF(var_50_bool, var_49_cvector);
					var_221_bool = var_50_bool == 0; //@nz
					if(var_221_bool != 0) {
						var_222_bool = 0; var_223_object = Obj(); var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_bool = 0;
						var_223_object = var_0_object;
						var_41_float = var_224_float;
						TaskCall(3);
						func_1060(var_230_bool, var_222_bool, var_223_object, var_224_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_231_bool = var_228_bool == 0; //@nz
						if(var_231_bool != 0) {
							goto Label_610;
						}
						var_45_bool = 0;
						goto Label_438;
					}
					var_232_bool = var_45_bool == 0; //@nz
					if(var_232_bool != 0) {
						var_233_object = Obj();
						var_233_object = var_0_object;
						func_1825(var_233_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1040(var_51_float);
						StopAsync();
						var_45_bool = 1;
						var_244_bool = 0; var_245_object = Obj();
						var_245_object = var_0_object;
						func_1675(var_244_bool, var_245_object);
						var_246_bool = var_244_bool == 0; //@nz
						if(var_246_bool != 0) {
							goto Label_610;
						}
					}
					rand(var_51_float);
					var_247_bool = 0;
					var_249_bool = var_51_float < (float)0.25;
					if(var_249_bool != 1) {
						var_250_bool = 0;
						func_997((bool)1, var_250_bool);
						if(var_250_bool != 1) {
							var_247_bool = 0;
						}
					}
					if(var_247_bool != 0) {
						Face(var_0_object);
						func_1047();
						PlayAnimation("all", "attack_stay");
						var_287_bool = 0; var_288_float = 0;
						var_29_float = var_288_float;
						func_865(var_51_float, var_287_bool, var_288_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1040(var_51_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_509_bool = 0;
						func_997(var_51_float, var_509_bool);
						var_510_bool = var_509_bool == 0; //@nz
						if(var_510_bool == 0) goto Label_600;
						var_511_bool = 0; var_512_object = Obj();
						var_512_object = var_0_object;
						func_1675(var_511_bool, var_512_object);
						var_513_bool = var_511_bool == 0; //@nz
						if(var_513_bool != 0) {
							goto Label_610;
						}
						@@@var_0_object:GetPFPosition(var_42_cvector);
						GetPFPosition(var_43_cvector);
						var_47_cvector = var_42_cvector - var_43_cvector;
						var_48_float = var_47_cvector | var_47_cvector;
						var_514_float = var_29_float * var_29_float;
						var_515_bool = var_48_float < var_514_float;
						if(var_515_bool == 0) goto Label_600;
						var_516_bool = 0; var_517_float = 0;
						var_29_float = var_517_float;
						func_701(var_50_bool, var_51_float, var_516_bool, var_517_float);
						var_518_bool = var_516_bool == 0; //@nz
						if(var_518_bool == 0) goto Label_600;
						goto Label_610;
				}
					var_519_bool = 0; var_520_float = 0;
					var_29_float = var_520_float;
					func_701(var_50_bool, var_51_float, var_519_bool, var_520_float);
					var_521_bool = var_519_bool == 0; //@nz
					if(var_521_bool != 0) {
						goto Label_610;
					}
					var_45_bool = 1;

				}
			Label_600:
				goto Label_609;
		}
		Label_609:
			goto Label_438;

		}
	}
Label_610:
	WaitForAnimEnd();
	var_214_string = var_3_string;
	if(var_214_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_217_bool = var_44_bool;
	if(var_217_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1939(var_112_string, var_113_bool)
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


func_662(var_0_object, var_385_float, var_386_int)
{
	var_387_object = Obj(); var_388_float = 0; var_389_float = 0; var_390_object = Obj(); var_391_float = 0; var_392_float = 0;
	var_394_float = var_385_float * (float)0.8999999761581421;
	GetVictim(var_394_float, var_390_object);
	ReportAttack(var_0_object);
	var_395_bool = var_390_object == var_0_object;
	if(var_395_bool != 0) {
		var_396_float = 0; var_397_object = Obj(); var_398_int = 0;
		var_390_object = var_397_object;
		var_386_int = var_398_int;
		func_392(var_398_int);
		var_396_float = var_391_float;
		var_399_float = 0; var_400_object = Obj(); var_401_float = 0; var_402_int = 0;
		var_390_object = var_400_object;
		var_391_float = var_401_float;
		var_403_int = 0; var_404_object = Obj(); var_405_int = 0;
		var_390_object = var_404_object;
		var_386_int = var_405_int;
		func_395(var_405_int);
		var_403_int = var_402_int;
		func_1561(var_399_float, var_400_object, var_401_float, var_402_int);
		var_399_float = var_392_float;
		var_464_int = 0;
		func_1045(var_464_int);
		ReportHit(var_0_object, var_464_int, var_392_float, var_391_float);
		var_465_object = Obj(); var_466_float = 0;
		var_390_object = var_465_object;
		var_392_float = var_466_float;
		func_1052();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_157(var_2_object, var_108_string)
{
	var_109_bool = 0;
	func_2332(var_109_bool);
	var_110_bool = var_109_bool == 0; //@nz
	if(var_110_bool != 0) {
		return 0;
	}
	var_111_bool = var_108_string == var_2_object;
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
	func_1939(var_112_string, var_113_bool);
	var_2_object = var_108_string;
	return 0;
	
}


func_2210(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x8b1";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
}


func_1699(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = "";
	var_46_bool = var_31_object == 0; //@ne
	if(var_46_bool != 0) {
		return 14;
	}
	IsDead(var_39_bool);
	var_47_bool = var_39_bool;
	if(var_47_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_40_int);
	var_49_bool = var_40_int < (int)0;
	if(var_49_bool != 0) {
		return 14;
	}
	@@var_31_object:GetPosition(var_41_cvector);
	GetPosition(var_42_cvector);
	GetDirection(var_43_cvector);
	var_44_cvector = var_42_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_44_cvector, 0);
	var_51_float = GetByIndex(var_43_cvector, 0);
	var_52_float = var_50_float * var_51_float;
	var_53_float = GetByIndex(var_44_cvector, 2);
	var_54_float = GetByIndex(var_43_cvector, 2);
	var_55_float = var_53_float * var_54_float;
	var_56_int = var_52_float + var_55_float;
	var_58_bool = var_56_int >= (int)0;
	if(var_58_bool != 0) {
		var_45_string = "fhit";
	} else {
		var_45_string = "bhit";
	}
	var_61_int = var_45_string + "1";
	var_63_int = var_45_string + "2";
	FadeSecondaryAnimation("hit_react", var_61_int, var_63_int, (int)-10);
	return 14;
	
}


func_1954(var_147_object)
{
	var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_cvector = CVector(0,0,0);
	@@var_147_object:GetEyesHeight(var_150_float);
	var_151_cvector = CVector(0.0, 0.0, 0.0);
	var_152_float = GetByIndex(var_151_cvector, 1);
	var_150_float = var_152_float;
	SetByIndex(var_151_cvector, 1) = var_152_float;
	LookAsync(var_147_object, "head", var_151_cvector);
	return 4;
}


func_1446(var_53_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_54_string = "";
	var_53_string = var_54_string;
	func_1972(var_54_string);
	PlayAnimation("all", var_53_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_53_string);
	RemoveEnvelope();
	return 0;
}


func_936(var_300_bool)
{
	var_301_bool = 0;
	var_301_bool = 0;
	var_302_bool = 0;
	func_908(var_301_bool, var_302_bool);
	if(var_302_bool != 0) {
		var_319_bool = 0;
		func_952(var_300_bool, var_301_bool, var_319_bool);
		if(var_319_bool != 0) {
			var_301_bool = 1;
		}
	}
	if(var_301_bool != 0) {
		var_300_bool = 1;
		return 0;
	}
	var_300_bool = 0;
	return 0;
}


func_1965()
{
	var_17_bool = 0;
	func_2332(var_17_bool);
	if(var_17_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2227(var_113_int)
{
	var_114_int = 0; var_115_int = 0;
	GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
	return 2;
}


func_1972(var_54_string)
{
	var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	IsExisting3DSound(var_63_bool, var_54_string);
	var_71_bool = var_63_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_64_int = 0;

	Label_1978:
		var_73_int = var_64_int + (int)1;
		var_74_int = var_54_string + var_73_int;
		IsExisting3DSound(var_65_bool, var_74_int);
		var_75_bool = var_65_bool == 0; //@nz
		if(var_75_bool != 0) {
		} else {
			var_64_int = var_64_int + (int)1;
			goto Label_1978;
		}
		var_76_bool = var_64_int == 0; //@nz
		if(var_76_bool != 0) {
			return 16;
		}
		irand(var_66_int, var_64_int);
		var_78_int = var_66_int + (int)1;
		var_54_string = var_54_string + var_78_int;
	}
	Is3DSoundLoaded(var_67_bool, var_54_string);
	var_79_bool = var_67_bool;
	if(var_79_bool != 0) {
		GetEyesHeight(var_68_float);
		GetDirection(var_69_cvector);
		var_70_cvector = var_69_cvector * (int)50;
		var_81_float = GetByIndex(var_70_cvector, 1);
		var_81_float = var_81_float + var_68_float;
		SetByIndex(var_70_cvector, 1) = var_81_float;
		PlayGlobalSound(var_54_string, var_70_cvector);
	}
	return 16;
	
}


func_952(var_0_object, var_4_bool, var_319_bool)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0);
	GetScene(var_325_object);
	var_326_bool = 0;
	
Label_956:
	var_330_cvector = CVector(0,0,0); var_331_object = Obj();
	var_331_object = var_0_object;
	func_1537(var_330_cvector, var_331_object);
	var_336_int = -var_330_cvector;
	FindDirLength(var_327_float, var_336_int, var_4_bool);
	var_337_bool = var_327_float < var_4_bool;
	if(var_337_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_328_cvector);
		GetPFPosition(var_329_cvector);
		WaitForAnimEnd();
		func_1040(var_329_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_326_bool = 1;
		var_341_bool = 0;
		func_908(var_329_cvector, var_341_bool);
		var_342_bool = var_341_bool == 0; //@nz
		if(var_342_bool != 0) {
			goto Label_994;
		}
		goto Label_956;
	}
Label_994:
	var_326_bool = var_319_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2233(var_18_object)
{
	var_19_int = 0;
	func_2227(var_19_int);
	var_24_bool = var_19_int == (int)1;
	if(var_24_bool != 0) {
		WorkWithCorpse(var_18_object);
	} else {
		Barter(var_18_object);
	}
	return 0;
	
}


func_701(var_0_object, var_1_object, var_348_bool, var_349_float)
{
	var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_bool = 0; var_356_int = 0; var_357_string = "";
	func_1040(var_357_string);
	irand(var_354_int, var_1_object);
	var_354_int = var_354_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2095();
	var_366_int = "attack_begin" + var_354_int;
	PlayAnimation("all", var_366_int);
	WaitForAnimEnd();
	func_1008(var_356_int, var_357_string);
	var_382_bool = 0; var_383_object = Obj();
	var_383_object = var_0_object;
	func_1675(var_382_bool, var_383_object);
	var_384_bool = var_382_bool == 0; //@nz
	if(var_384_bool != 0) {
		StopAsync();
		var_348_bool = 0;
		return 8;
	}
	var_385_float = 0; var_386_int = 0;
	var_349_float = var_385_float;
	var_354_int = var_386_int;
	func_662(var_357_string, var_385_float, var_386_int);
	var_469_int = "attack_middle" + var_354_int;
	HasAnimation(var_355_bool, "all", var_469_int);
	var_470_bool = var_355_bool;
	if(var_470_bool != 0) {
		func_2095();
		var_473_int = "attack_middle" + var_354_int;
		PlayAnimation("all", var_473_int);
		WaitForAnimEnd();
		func_1040(var_357_string);
		var_474_bool = 0; var_475_object = Obj();
		var_475_object = var_0_object;
		func_1675(var_474_bool, var_475_object);
		var_476_bool = var_474_bool == 0; //@nz
		if(var_476_bool != 0) {
			StopAsync();
			var_348_bool = 0;
			return 8;
		}
		var_477_float = 0; var_478_int = 0;
		var_349_float = var_477_float;
		var_354_int = var_478_int;
		func_662(var_357_string, var_477_float, var_478_int);
		var_356_int = 1;

	Label_778:
		var_480_int = "attack_middle" + var_354_int;
		var_482_int = var_480_int + "_";
		var_357_string = var_482_int + var_356_int;
		HasAnimation(var_355_bool, "all", var_357_string);
		var_484_bool = var_355_bool == 0; //@nz
		if(var_484_bool != 0) {
		} else {
			func_2095();
			PlayAnimation("all", var_357_string);
			WaitForAnimEnd();
			func_1040(var_357_string);
			var_500_bool = 0; var_501_object = Obj();
			var_501_object = var_0_object;
			func_1675(var_500_bool, var_501_object);
			var_502_bool = var_500_bool == 0; //@nz
			if(var_502_bool != 0) {
				StopAsync();
				var_348_bool = 0;
				var_503_float = 0; var_504_int = 0;
				var_349_float = var_503_float;
				var_354_int = var_504_int;
				func_662(var_357_string, var_503_float, var_504_int);
				var_356_int = var_356_int + (int)1;
				goto Label_778;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_488_int = "attack_end" + var_354_int;
	PlayAnimation("all", var_488_int);
	var_489_bool = 0;
	func_1054(var_489_bool);
	if(var_489_bool != 0) {
		var_490_bool = 0; var_491_float = 0;
		func_838(var_490_bool, (float)0.75);
		StopAsync();
	}
	var_348_bool = 1;
	return 8;
	
}


func_2246(var_119_string)
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


func_1478(var_16_object)
{
	var_17_int = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	TaskCall(0);
	func_0(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


func_1743(var_18_object, var_19_int, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_int = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0);
	var_39_bool = 0;
	var_39_bool = 0;
	var_40_bool = 0;
	var_40_bool = 0;
	var_41_object = var_18_object;
	if(var_41_object != 0) {
		var_43_bool = var_19_int != (int)4;
		if(var_43_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_45_bool = var_19_int != (int)5;
		if(var_45_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
		var_48_cvector = CVector(0,0,0); var_49_object = Obj();
		var_18_object = var_49_object;
		func_1537(var_48_cvector, var_49_object);
		var_48_cvector = var_47_cvector;
		func_2019(var_46_cvector, var_47_cvector);
		var_46_cvector = var_30_cvector;
		CreateVectorVector(var_31_object);
		var_32_int = 1;

	Label_1772:
		var_60_int = "hit" + var_32_int;
		GetGeometryLocator(var_60_int, var_33_bool, var_34_cvector, var_35_cvector);
		var_61_bool = var_33_bool == 0; //@nz
		if(var_61_bool != 0) {
		} else {
			var_109_int = var_35_cvector | var_30_cvector;
			var_111_bool = var_109_int >= (float)0.7071067690849304;
			if(var_111_bool != 0) {
				@@var_31_object:add(var_34_cvector);
			}
			var_32_int = var_32_int + (int)1;
			goto Label_1772;
		}
		@@var_31_object:size(var_36_int);
		var_62_int = var_36_int;
		if(var_62_int != 0) {
			irand(var_37_int, var_36_int);
			@@var_31_object:get(var_38_cvector, var_37_int);
			var_63_object = Obj(); var_64_int = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
			var_18_object = var_63_object;
			var_19_int = var_64_int;
			var_20_float = var_65_float;
			var_38_cvector = var_66_cvector;
			var_67_cvector = -var_30_cvector;
			func_1811(var_65_float, var_66_cvector, var_67_cvector);
			return 18;
		}
		var_31_object = 0;
	}
	var_108_object = Obj();
	var_18_object = var_108_object;
	func_1699(var_108_object);
	return 18;
	
}


func_2263()
{
	var_113_int = 0;
	func_2227(var_113_int);
	var_118_bool = var_113_int != (int)1;
	if(var_118_bool != 0) {
		return 0;
	}
	var_119_string = "";
	func_2246("liver");
	var_130_string = "";
	func_2246("kidney");
	var_131_string = "";
	func_2246("heart");
	var_132_string = "";
	func_2246("blood");
	return 0;
}


func_1500(var_15_bool)
{
	var_15_bool = 1;
	return 0;
}


func_2013(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj();
	self(var_84_object);
	var_84_object = var_82_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2019(var_46_cvector, var_47_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_47_cvector | var_47_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_46_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_46_cvector = var_47_cvector / var_55_float;
	return 2;
}


func_997(var_0_object, var_250_bool)
{
	var_251_bool = 0; var_252_bool = 0;
	var_255_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_255_bool != 0) {
		@@@var_0_object:IsAttacking(var_252_bool);
		var_252_bool = var_250_bool;
		return 2;
	}
	var_250_bool = 0;
	return 2;
}


func_2029(var_437_float, var_438_float, var_439_float)
{
	var_442_bool = var_438_float < var_439_float;
	if(var_442_bool != 0) {
		var_438_float = var_437_float;
	} else {
		var_439_float = var_437_float;
	}
	return 0;
	
}


func_1008(var_2_object, var_5_object)
{
	var_367_float = 0; var_368_int = 0; var_369_float = 0; var_370_int = 0;
	var_371_bool = var_2_object == 0; //@nz
	if(var_371_bool != 0) {
		return 4;
	}
	var_372_object = var_5_object;
	if(var_372_object != 0) {
		var_5_object = var_5_object + (int)-1;
		var_375_bool = var_5_object > (int)0;
		if(var_375_bool != 0) {
			return 4;
		}
	}
	rand(var_369_float);
	var_376_float = 0;
	func_1058(var_376_float);
	var_377_bool = var_369_float < var_376_float;
	if(var_377_bool != 0) {
		irand(var_370_int, var_2_object);
		var_370_int = var_370_int + (int)1;
		var_380_int = "attack" + var_370_int;
		Speak(var_380_int);
		var_381_int = 0;
		func_1056(var_381_int);
		var_5_object = var_381_int;
	}
	return 4;
}


func_1267(var_0_object, var_1_object, var_22_int)
{
	var_24_bool = var_22_int != (int)0;
	if(var_24_bool != 0) {
		return 0;
	}
	var_25_bool = 0; var_26_object = Obj();
	var_26_object = var_1_object;
	func_1305(var_25_bool, var_26_object);
	var_61_bool = var_25_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1523(var_427_string, var_428_int)
{
	var_430_bool = var_428_int == (int)2;
	if(var_430_bool != 0) {
		var_427_string = "fire";
		return 0;
	EMIT "GOTO 0x5ff";
	}
	var_432_bool = var_428_int == (int)1;
	if(var_432_bool != 0) {
		var_427_string = "bullet";
		return 0;
	}
	var_427_string = "phys";
	return 0;
}


func_2036(var_447_float, var_448_float, var_449_float, var_450_float)
{
	var_451_bool = var_448_float < var_449_float;
	if(var_451_bool != 0) {
		var_449_float = var_447_float;
		return 0;
	}
	var_452_bool = var_448_float > var_450_float;
	if(var_452_bool != 0) {
		var_450_float = var_447_float;
		return 0;
	}
	var_448_float = var_447_float;
	return 0;
}


func_2047(var_98_int, var_99_string)
{
	var_100_int = 0; var_101_int = 0;
	GetVariable(var_99_string, var_101_int);
	var_101_int = var_98_int;
	return 2;
}


