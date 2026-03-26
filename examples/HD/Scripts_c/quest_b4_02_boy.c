// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetScene/1,MovePoint/3,Rotate/3,Stop/0,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,FindActor/2,Trigger/2,BroadcastMessage/3,SetVariable/2,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:run|A:RemoveStationaryActor|W:pt_b4q02_boy_path|A:GetLocator|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:reputation|W:battle|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:oob4boy1|W:quest_b4_02|W:boy_run|W:oob4boy2|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1a6
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd1 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x1ae vars=object
// @EVENT_26: op=0x1b9 vars=string
// @EVENT_17: op=0x1c3 vars=object
// @EVENT_41: op=0x1ce vars=object
// @TASK_3: vars=bool params=0
// @EVENT_17: op=0x23d vars=object
// @EVENT_41: op=0x248 vars=object
// @TASK_4: vars=object,int,int,bool,float,int params=1
// @TASK_5: vars=bool,object,bool params=6
// @EVENT_7: op=0x56f vars=int
// @EVENT_1: op=0x58a vars=object
// @EVENT_2: op=0x599 vars=object
// @EVENT_10: op=0x61f vars=object
// @EVENT_41: op=0x62a vars=object
// @TASK_6: vars= params=1
// @EVENT_0: op=0x64d vars=object
// @EVENT_22: op=0x6cc vars=object,int,float,float
// @EVENT_16: op=0x6ce vars=object,string
// @EVENT_41: op=0x6d0 vars=object
// @STANDALONE_EVENT_22: op=0x9d5 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x9dd vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x9e7 vars=object,string
// @STANDALONE_EVENT_41: op=0x9f4 vars=object
// @PE: 0x4a,0xbb,0xd1,0x1a6,0x1ae,0x1b9,0x1c3,0x1ce,0x23d,0x248,0x28c,0x2a2,0x2a5,0x536,0x56f,0x58a,0x599,0x60d,0x61f,0x62a,0x633,0x63e,0x6b2,0x6cc,0x6ce,0x6d0,0x6d2,0x8e7,0x8ee,0x8fe,0x97e,0x984,0x98b,0x991,0x99d,0x9c0,0x9cd,0x9d5,0x9dd,0x9f4

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	if((int)1 != 0) {
		func_2215();
		var_20_bool = var_16_bool == (int)19674;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_2436();
		}
		var_30_bool = var_16_bool == (int)20848;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_2436();
		}
		var_34_bool = var_15_object == (int)19673;
		if(var_34_bool != 0) {
			var_35_bool = 0; var_36_object = Obj();
			var_36_object = var_1_object;
			func_2449(var_36_object);
			if(var_35_bool != 0) {
				var_43_object = Obj(); var_44_object = Obj();
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_2430();
				var_47_string = "";
				func_187(var_16_bool, "Neutral");
				@@@var_0_object:SetMessage((int)518563);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518962, (int)20075, (int)20074);
				return 0;
			}
			var_68_bool = 0; var_69_object = Obj();
			var_69_object = var_1_object;
			func_2461(var_69_object);
			if(var_68_bool != 0) {
				var_74_object = Obj(); var_75_object = Obj();
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_2443();
				var_78_string = "";
				func_187(var_16_bool, "Neutral");
				@@@var_0_object:SetMessage((int)518565);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518566, (int)20046, (int)19676);
				@@@var_0_object:AddReply((int)518934, (int)-1, (int)20045);
				return 0;
			}
			var_86_string = "";
			func_187(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518570, (int)-1, (int)19680);
			@@@var_0_object:AddReply((int)518940, (int)-1, (int)20051);
			return 0;
		}
		var_95_bool = var_15_object == (int)20046;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_187(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518936, (int)20048, (int)20047);
			return 0;
		}
		var_102_bool = var_15_object == (int)20048;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_187(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518938, (int)-1, (int)20049);
			@@@var_0_object:AddReply((int)518939, (int)-1, (int)20050);
			return 0;
		}
		var_112_bool = var_15_object == (int)20075;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_187(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518963);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527872, (int)29220, (int)29219);
			return 0;
		}
		var_119_bool = var_15_object == (int)29220;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_187(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518564, (int)-1, (int)19674);
			@@@var_0_object:AddReply((int)518933, (int)20847, (int)20044);
			return 0;
		}
		var_129_bool = var_15_object == (int)20847;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_187(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519689);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519690, (int)-1, (int)20848);
			return 0;
		}
		var_3_string = true;
		var_135_bool = 0;
		func_2404(var_135_bool);
		if(var_135_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd2";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_552();
	var_16_int = 0; var_17_object = Obj();
	var_15_bool = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_string, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_17_bool = var_15_bool == "run";
	if(var_17_bool != 0) {
		TaskCall(3);
		func_557();
		TaskReturn();
	}
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_552();
	var_16_object = Obj();
	var_15_bool = var_16_object;
	TaskCall(4);
	func_654(var_16_object);
	TaskReturn();
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_552();
	var_15_bool = Obj();
	func_2548();
	return 0;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_646(var_15_bool);
	var_16_object = Obj();
	var_15_bool = var_16_object;
	TaskCall(4);
	func_654(var_16_object);
	TaskReturn();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_646(var_15_bool);
	var_15_bool = Obj();
	func_2548();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_17_bool = var_15_int == (int)1;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_18_object = var_1_object;
		func_2376(var_18_object);
	} else {
		var_23_int = 0;
		var_15_int = var_23_int;
		func_1549(var_14_bool, var_15_int, var_23_int);
	}
	return 0;
	
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
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
		func_2204(var_19_object);
	}
	return 0;
}


task_5_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
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


task_5_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object);
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1405(var_15_object);
	var_15_object = Obj();
	func_2548();
	return 0;
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsOverrideActive(var_17_bool);
	var_18_bool = var_17_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_15_object = var_19_object;
		func_2496(var_19_object);
	}
	return 2;
}


task_6_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0;
}


task_6_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0;
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0;
	var_15_object = var_19_object;
	var_16_int = var_20_int;
	var_17_float = var_21_float;
	func_1988(var_19_object, var_20_int, var_21_float);
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
	func_2056(var_23_float, var_24_cvector, var_25_cvector);
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
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1767(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		var_20_bool = 0; var_21_object = Obj(); var_22_float = 0;
		var_15_object = var_21_object;
		func_2302(var_20_bool, var_21_object, (float)-0.10000000149011612);
	}
	var_58_object = Obj();
	var_15_object = var_58_object;
	func_2509(var_58_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	
Label_422:
	func_471();
	Sleep((int)3);
	goto Label_422;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_2086(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_2398(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_2396(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_2400(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_2402(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_2473(var_79_int);
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
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_56:
	var_172_bool = var_26_bool == 0; //@nz
	if(var_172_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_2155();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2056(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_1944(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1290(var_2_object, var_5_bool)
{
	var_366_float = 0; var_367_int = 0; var_368_float = 0; var_369_int = 0;
	var_370_bool = var_2_object == 0; //@nz
	if(var_370_bool != 0) {
		return 4;
	}
	var_371_bool = var_5_bool;
	if(var_371_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_374_bool = var_5_bool > (int)0;
		if(var_374_bool != 0) {
			return 4;
		}
	}
	rand(var_368_float);
	var_375_float = 0;
	func_1340(var_375_float);
	var_376_bool = var_368_float < var_375_float;
	if(var_376_bool != 0) {
		irand(var_369_int, var_2_object);
		var_369_int = var_369_int + (int)1;
		var_379_int = "attack" + var_369_int;
		Speak(var_379_int);
		var_380_int = 0;
		func_1338(var_380_int);
		var_5_bool = var_380_int;
	}
	return 4;
}


func_1549(var_0_object, var_1_object, var_23_int)
{
	var_25_bool = var_23_int != (int)0;
	if(var_25_bool != 0) {
		return 0;
	}
	var_26_bool = 0; var_27_object = Obj();
	var_27_object = var_1_object;
	func_1587(var_26_bool, var_27_object);
	var_62_bool = var_26_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1806(var_398_float, var_399_object, var_400_float, var_401_int)
{
	var_405_int = 0; var_406_string = ""; var_407_int = 0; var_408_float = 0; var_409_float = 0; var_410_float = 0; var_411_int = 0; var_412_string = ""; var_413_int = 0; var_414_float = 0; var_415_float = 0; var_416_float = 0;
	var_417_bool = 0; var_418_object = Obj(); var_419_string = "";
	var_399_object = var_418_object;
	func_1772(var_417_bool, var_418_object, "health");
	var_420_bool = var_417_bool == 0; //@nz
	if(var_420_bool != 0) {
		var_398_float = 0.0;
		return 12;
	}
	var_421_bool = 0; var_422_object = Obj(); var_423_string = "";
	var_399_object = var_422_object;
	func_1772(var_421_bool, var_422_object, "armor");
	var_424_bool = var_421_bool == 0; //@nz
	if(var_424_bool != 0) {
		var_411_int = 0;
	} else {
			@@var_399_object:GetProperty("armor", var_411_int);
	}
	var_426_string = ""; var_427_int = 0;
	var_401_int = var_427_int;
	func_1746(var_426_string, var_427_int);
	var_412_string = "armor_" + var_426_string;
	var_432_bool = 0; var_433_object = Obj(); var_434_string = "";
	var_399_object = var_433_object;
	var_412_string = var_434_string;
	func_1772(var_432_bool, var_433_object, var_434_string);
	var_435_bool = var_432_bool == 0; //@nz
	if(var_435_bool != 0) {
		var_413_int = 0;
	} else {
		@@var_399_object:GetProperty(var_412_string, var_413_int);

	}
	var_436_float = 0; var_437_float = 0; var_438_float = 0;
	var_439_int = var_411_int + var_413_int;
	var_437_float = var_439_int / (float)100.0;
	func_2279(var_436_float, var_437_float, (float)1);
	var_436_float = var_414_float;
	@@var_399_object:GetProperty("health", var_415_float);
	var_444_int = (int)1 - var_414_float;
	var_416_float = var_400_float * var_444_int;
	var_446_float = 0; var_447_float = 0; var_448_float = 0; var_449_float = 0;
	var_447_float = var_415_float - var_416_float;
	func_2286(var_446_float, var_447_float, (float)0, (float)1);
	@@var_399_object:SetProperty("health", var_446_float);
	var_452_bool = 0; var_453_object = Obj();
	var_399_object = var_453_object;
	func_1767(var_452_bool, var_453_object);
	if(var_452_bool != 0) {
		var_454_float = 0;
		var_454_float = -var_416_float;
		func_2337(var_454_float);
	}
	var_416_float = var_398_float;
	return 12;
	
}


func_2070(var_232_object)
{
	var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0);
	@@var_232_object:GetPosition(var_236_cvector);
	GetPosition(var_237_cvector);
	var_238_cvector = var_236_cvector - var_237_cvector;
	var_239_float = GetByIndex(var_238_cvector, 0);
	var_240_float = GetByIndex(var_238_cvector, 2);
	RotateAsync(var_239_float, var_240_float);
	return 6;
}


func_2081(var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0;
	IsLoaded(var_31_bool);
	var_31_bool = var_29_bool;
	return 2;
}


func_2337(var_454_float)
{
	var_455_object = Obj(); var_456_object = Obj();
	CreateFloatVector(var_456_object);
	@@var_456_object:add(var_454_float);
	var_458_bool = var_454_float < (int)0;
	if(var_458_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_456_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1571(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2086(var_27_bool, var_28_object, var_29_float)
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
	func_2269(var_54_cvector, var_55_cvector);
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
	func_2404(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_2149;
		LookAsyncCamera("head");
	}
Label_2149:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_550(var_58_bool)
{
	var_58_bool = 1;
	return 0;
}


func_552()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1322(var_0_object)
{
	var_122_object = Obj();
	var_122_object = var_0_object;
	func_2376(var_122_object);
	return 0;
}


func_557()
{
	var_19_object = Obj(); var_20_object = Obj();
	GetScene(var_20_object);
	var_21_object = Obj();
	func_2263(var_21_object);
	@@var_20_object:RemoveStationaryActor(var_21_object);
	var_24_bool = 0; var_25_string = ""; var_26_int = 0; var_27_bool = 0;
	func_593(var_24_bool, "pt_b4q02_boy_path", (int)0, (bool)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1327(var_463_int)
{
	var_463_int = 0;
	return 0;
}


func_1329()
{
	var_255_string = "";
	func_2222("attack_stay");
	return 0;
}


func_2354(var_27_float)
{
	var_28_object = Obj(); var_29_object = Obj();
	CreateFloatVector(var_29_object);
	@@var_29_object:add(var_27_float);
	SendWorldWndMessage((int)16, var_29_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1587(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_1920(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
	return 0;
}


func_1334()
{
	return 0;
}


func_1336(var_488_bool)
{
	var_488_bool = 1;
	return 0;
}


func_1594(var_198_string)
{
	var_198_string = "walk";
	return 0;
}


func_1338(var_380_int)
{
	var_380_int = 1;
	return 0;
}


func_1596(var_199_string)
{
	var_199_string = "run";
	return 0;
}


func_1340(var_375_float)
{
	var_375_float = 0.5;
	return 0;
}


func_1598(var_59_object)
{
	EventDisable(0);
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_1623(var_60_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1609:
	Hold();
	goto Label_1609;
}
EMIT "Return(); Pop(0)";


func_2364(var_23_bool, var_24_string, var_25_string)
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


func_1342(var_2_object, var_129_bool, var_130_object, var_131_float, var_132_float, var_133_bool, var_134_bool)
{
	var_138_bool = 0; var_139_bool = 0; var_140_bool = 0; var_141_bool = 0;
	var_142_object = Obj();
	var_130_object = var_142_object;
	func_2376(var_142_object);
	SetTimer((int)1, (int)5);
	CanSee(var_140_bool, var_130_object);
	var_145_bool = var_140_bool;
	if(var_145_bool != 0) {
		var_2_object = true;
		var_146_object = Obj();
		var_130_object = var_146_object;
		func_2204(var_146_object);
	} else {
		var_2_object = false;
	}
	var_153_bool = 0; var_154_object = Obj();
	var_130_object = var_154_object;
	func_1767(var_153_bool, var_154_object);
	if(var_153_bool != 0) {
		var_157_object = Obj();
		func_2263(var_157_object);
		SendPlayerEnemy(var_130_object, var_157_object);
	}
	var_158_bool = 0; var_159_object = Obj(); var_160_float = 0; var_161_float = 0; var_162_bool = 0; var_163_bool = 0;
	var_130_object = var_159_object;
	var_131_float = var_160_float;
	var_132_float = var_161_float;
	var_133_bool = var_162_bool;
	var_134_bool = var_163_bool;
	func_1447(var_140_bool, var_141_bool, var_158_bool, var_159_object, var_160_float, var_161_float, var_162_bool, var_163_bool);
	var_158_bool = var_141_bool;
	var_209_object = var_2_object;
	if(var_209_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_141_bool = var_129_bool;
	return 4;
	
}


func_2376(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	IsPlayerActor(var_18_object, var_20_bool);
	var_21_bool = var_20_bool;
	if(var_21_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_2449(var_96_object);
		if(var_95_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_2430();
			var_107_string = "";
			func_187(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)518563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518962, (int)20075, (int)20074);
		} else {
				var_146_bool = 0; var_147_object = Obj();
				var_147_object = var_1_object;
				func_2461(var_147_object);
				if(var_146_bool != 0) {
					var_152_object = Obj(); var_153_object = Obj();
					var_152_object = var_1_object;
					var_153_object = var_0_object;
					func_2443();
					var_156_string = "";
					func_187(var_89_object, "Neutral");
					@@@var_0_object:SetMessage((int)518565);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)518566, (int)20046, (int)19676);
					@@@var_0_object:AddReply((int)518934, (int)-1, (int)20045);
					goto Label_157;
				}
				var_164_string = "";
				func_187(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)518569);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518570, (int)-1, (int)19680);
				@@@var_0_object:AddReply((int)518940, (int)-1, (int)20051);
				goto Label_157;
		}
	}
Label_157:
	var_128_bool = 0;
	func_2404(var_128_bool);
	if(var_128_bool != 0) {

	Label_161:
		lshWaitForAnimEnd();
		var_129_string = var_3_string;
		if(var_129_string != 0) {
		} else {
			var_130_string = "";
			var_130_string = var_2_object;
			func_2173(var_130_string);
			goto Label_161;
	}
		PlayAnimation("all", "idle");

	Label_176:
		WaitForAnimEnd();
		var_143_string = var_3_string;
		if(var_143_string != 0) {
			goto Label_186;
		}
		PlayAnimation("all", "idle");
		goto Label_176;

	}
	goto Label_186;
	
Label_186:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_593(var_24_bool, var_25_string, var_26_int, var_27_bool)
{
	var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_object = Obj(); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0;
	GetScene(var_35_object);
	
Label_596:
	var_43_int = var_26_int + (int)1;
	var_44_int = var_25_string + var_43_int;
	@@var_35_object:GetLocator(var_44_int, var_38_bool, var_39_cvector, var_40_cvector);
	var_45_bool = var_38_bool == 0; //@nz
	if(var_45_bool != 0) {
	} else {
			var_40_cvector = var_36_cvector;
			MovePoint(var_39_cvector, var_27_bool, var_37_bool);
			var_52_bool = var_37_bool;
			if(var_52_bool != 0) {
				var_53_int = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
				var_26_int = var_53_int;
				var_39_cvector = var_54_cvector;
				var_40_cvector = var_55_cvector;
				func_652();
				var_26_int = var_26_int + (int)1;
			} else {
				var_57_object = var_0_object;
				if(var_57_object == 0) goto Label_622;
				var_24_bool = 0;
				goto Label_596;
			}
			return 14;
	}
	WaitForAnimEnd(var_37_bool);
	var_46_bool = var_37_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_47_object = var_0_object;
		if(var_47_object != 0) {
			var_24_bool = 0;
			return 14;
		}
	}
Label_631:
	var_48_float = GetByIndex(var_36_cvector, 0);
	var_49_float = GetByIndex(var_36_cvector, 2);
	Rotate(var_48_float, var_49_float, var_41_bool);
	var_50_bool = var_41_bool;
	if(var_50_bool != 0) {
	} else {
		var_51_object = var_0_object;
		if(var_51_object != 0) {
			var_24_bool = 0;
			goto Label_631;
		}
		return 14;

	}
	var_24_bool = 1;
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_2385()
{
	var_359_object = Obj(); var_360_object = Obj();
	GetScene(var_360_object);
	var_362_object = Obj();
	func_2263(var_362_object);
	BroadcastMessage("battle", var_362_object, var_360_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1623(var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_string = ""; var_76_object = Obj(); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0);
	var_81_bool = var_60_object == 0; //@ne
	if(var_81_bool != 0) {
		var_82_string = "";
		func_1714("fdie");
	} else {
		@@var_60_object:GetPosition(var_71_cvector);
		GetPosition(var_72_cvector);
		GetDirection(var_73_cvector);
		var_74_cvector = var_72_cvector - var_71_cvector;
		var_114_float = GetByIndex(var_74_cvector, 0);
		var_115_float = GetByIndex(var_73_cvector, 0);
		var_116_float = var_114_float * var_115_float;
		var_117_float = GetByIndex(var_74_cvector, 2);
		var_118_float = GetByIndex(var_73_cvector, 2);
		var_119_float = var_117_float * var_118_float;
		var_120_int = var_116_float + var_119_float;
		var_122_bool = var_120_int >= (int)0;
		if(var_122_bool != 0) {
			var_75_string = "fdie";
		} else {
				var_75_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_60_object = var_76_object;
		var_125_bool = IsFuncExist(var_60_object, "GetScriptProperty", (int)2);
		if(var_125_bool != 0) {
			@@var_60_object:HasScriptProperty(var_77_bool, "Owner");
			var_127_bool = var_77_bool;
			if(var_127_bool != 0) {
				@@var_60_object:GetScriptProperty(var_76_object, "Owner");
				var_129_bool = var_76_object == 0; //@ne
				if(var_129_bool != 0) {
					var_60_object = var_76_object;
				}
			}
		}
		var_132_bool = IsFuncExist(var_76_object, "@GetEyesHeight", (int)1);
		if(var_132_bool != 0) {
			@@var_76_object:GetEyesHeight(var_79_float);
			var_80_cvector = CVector(0.0, 0.0, 0.0);
			var_133_float = GetByIndex(var_80_cvector, 1);
			var_79_float = var_133_float;
			SetByIndex(var_80_cvector, 1) = var_133_float;
			LookAsync(var_60_object, "head", var_80_cvector);
			var_78_bool = 1;
		} else {
			var_78_bool = 0;

		}
		var_135_string = "";
		var_75_string = var_135_string;
		func_2222(var_135_string);
		PlayAnimation("all", var_75_string);
		WaitForAnimEnd();
		var_137_bool = var_78_bool;
		if(var_137_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_75_string);
		RemoveEnvelope();
		var_76_object = 0;
	}
	return 20;
	
}


func_1879(var_43_bool, var_44_object)
{
	var_45_bool = 0; var_46_bool = 0;
	@@var_44_object:IsDead(var_46_bool);
	var_46_bool = var_43_bool;
	return 2;
}


func_2396(var_76_int)
{
	var_76_int = 515558;
	return 0;
}


func_1884(var_32_bool, var_33_object)
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
		func_1879(var_43_bool, var_44_object);
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


func_2398(var_75_int)
{
	var_75_int = 503343;
	return 0;
}


func_1120(var_489_bool, var_490_float)
{
	var_491_float = 0; var_492_bool = 0; var_493_float = 0; var_494_bool = 0;
	rand(var_493_float);
	var_495_bool = var_493_float < var_490_float;
	if(var_495_bool != 0) {

	Label_1125:
		IsAnimationPlaying(var_494_bool);
		var_496_bool = var_494_bool == 0; //@nz
		if(var_496_bool != 0) {
		} else {
			var_497_bool = 0;
			func_1218(var_497_bool);
			if(var_497_bool != 0) {
				var_489_bool = 1;
				sync();
				goto Label_1125;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1322(var_494_bool);
	}
	goto Label_1145;
	
Label_1145:
	var_489_bool = 0;
	return 4;
	
}


func_2400(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_2402(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_2404(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_2406(var_39_string, var_40_int)
{
	var_41_string = ""; var_42_string = "";
	var_43_int = var_40_int;
	if(var_43_int != 0) {
		"idle" = "idle" + var_40_int;
	}
	var_42_string = var_39_string;
	return 2;
}


func_2155()
{
	var_174_bool = 0; var_175_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_177_bool = 0;
	func_2404(var_177_bool);
	if(var_177_bool != 0) {
	} else {
		HasAnimationTrack(var_175_bool, "head");
		var_179_bool = var_175_bool;
		if(var_179_bool == 0) goto Label_2172;
		UnlookAsync("head");
	}
Label_2172:
	return 2;
	
}


func_2413(var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0;
	var_36_int = 0;
	
Label_2415:
	var_39_string = ""; var_40_int = 0;
	var_36_int = var_40_int;
	func_2406(var_39_string, var_40_int);
	HasAnimation(var_37_bool, "all", var_39_string);
	var_44_bool = var_37_bool == 0; //@nz
	if(var_44_bool != 0) {
	} else {
		var_36_int = var_36_int + (int)1;
		goto Label_2415;
	}
	var_36_int = var_33_int;
	return 4;
	
}


func_1147(var_0_object, var_286_bool, var_287_float)
{
	var_288_bool = 0; var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_float = 0; var_293_bool = 0; var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_float = 0;
	
Label_1148:
	IsAnimationPlaying(var_293_bool);
	var_298_bool = var_293_bool == 0; //@nz
	if(var_298_bool != 0) {
	} else {
		var_299_bool = 0;
		func_1218(var_299_bool);
		if(var_299_bool != 0) {
			var_286_bool = 1;
			return 10;
		}
		var_342_bool = 0; var_343_object = Obj();
		var_343_object = var_0_object;
		func_1920(var_342_bool, var_343_object);
		var_344_bool = var_342_bool == 0; //@nz
		if(var_344_bool != 0) {
			var_286_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_294_cvector);
		GetPFPosition(var_295_cvector);
		var_296_cvector = var_294_cvector - var_295_cvector;
		var_297_float = var_296_cvector | var_296_cvector;
		var_345_float = var_287_float * var_287_float;
		var_346_bool = var_297_float < var_345_float;
		if(var_346_bool != 0) {
			var_347_bool = 0; var_348_float = 0;
			var_287_float = var_348_float;
			func_983(var_296_cvector, var_297_float, var_347_bool, var_348_float);
			var_286_bool = 1;
			sync();
			goto Label_1148;
		}
		return 10;
	}
	func_1322(var_297_float);
	var_286_bool = 0;
	return 10;
	
}


func_2173(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0;
	lshHasAnimation(var_134_bool, var_130_string);
	var_137_bool = var_134_bool;
	if(var_137_bool != 0) {
		lshGetAnimTimes(var_130_string, var_135_float, var_136_float);
		lshPlayAnimation(var_135_float, var_136_float, (bool)0);
	} else {
		var_140_int = "Can't find lsh animation : " + var_130_string;
		Trace(var_140_int);
	}
	return 6;
	
}


func_1405(var_2_object)
{
	KillTimer((int)1);
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1571(var_15_object);
	return 0;
}


func_2430()
{
	SetVariable("oob4boy1", (int)1);
	return 0;
}


func_1920(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	var_32_bool = 0; var_33_object = Obj();
	var_29_object = var_33_object;
	func_1884(var_32_bool, var_33_object);
	var_49_bool = var_32_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_29_object = var_51_object;
	func_1772(var_50_bool, var_51_object, "noaccess");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_28_bool = 1;
		return 2;
	}
	@@var_29_object:GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == (int)0;
	return 2;
}


func_2436()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = "";
	func_2364(var_23_bool, "quest_b4_02", "boy_run");
	return 0;
}


func_646(var_0_object)
{
	Stop();
	StopAnimation();
	var_0_object = true;
	return 0;
}


func_2443()
{
	SetVariable("oob4boy2", (int)1);
	return 0;
}


func_652()
{
	return 0;
}


func_2189(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0;
	lshHasAnimation(var_118_bool, var_111_string);
	var_121_bool = var_118_bool;
	if(var_121_bool != 0) {
		lshGetAnimTimes(var_111_string, var_119_float, var_120_float);
		lshPlayAnimation(var_119_float, var_120_float, var_112_bool);
	} else {
		var_123_int = "Can't find lsh animation : " + var_111_string;
		Trace(var_123_int);
	}
	return 6;
	
}


func_654(var_16_object)
{
	var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_24_object);
	var_25_object = Obj();
	func_2263(var_25_object);
	@@var_24_object:RemoveStationaryActor(var_25_object);
	
Label_662:
	var_28_object = Obj(); var_29_bool = 0; var_30_float = 0;
	var_16_object = var_28_object;
	func_680(var_21_float, var_22_int, var_16_object, var_23_object, var_24_object, var_28_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_662;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_909(var_1_object, var_2_object, var_4_bool)
{
	var_53_bool = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; var_58_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_911:
	var_62_int = var_1_object + (int)1;
	var_63_int = "attack_begin" + var_62_int;
	HasAnimation(var_56_bool, "all", var_63_int);
	var_64_bool = var_56_bool == 0; //@nz
	if(var_64_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_911;
	}
	var_2_object = 0;
	
Label_925:
	var_67_int = var_2_object + (int)1;
	var_68_int = "attack" + var_67_int;
	IsExisting3DSound(var_57_bool, var_68_int);
	var_69_bool = var_57_bool == 0; //@nz
	if(var_69_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_925;

	}
	GetAnimationOffset(var_58_cvector, "all", "bjump");
	var_72_float = GetByIndex(var_58_cvector, 2);
	var_4_bool = -var_72_float;
	return 6;
	
}


func_2449(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_2297(var_97_int, "oob4boy1");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_1944(var_32_object)
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


func_2204(var_19_object)
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


func_2461(var_146_bool)
{
	var_148_int = 0; var_149_string = "";
	func_2297(var_148_int, "oob4boy2");
	var_151_bool = var_148_int == (int)0;
	if(var_151_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_674(var_395_float)
{
	var_395_float = 0.029999999329447746;
	return 0;
}


func_677(var_402_int)
{
	var_402_int = 0;
	return 0;
}


func_1190(var_0_object, var_301_bool)
{
	var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0; var_306_float = 0; var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; var_311_float = 0;
	var_312_bool = 0; var_313_object = Obj();
	var_313_object = var_0_object;
	func_1920(var_312_bool, var_313_object);
	var_314_bool = var_312_bool == 0; //@nz
	if(var_314_bool != 0) {
		var_301_bool = 0;
		return 10;
	}
	var_315_bool = 0;
	func_1279(var_311_float, var_315_bool);
	if(var_315_bool != 0) {
		@@@var_0_object:GetPFPosition(var_307_cvector);
		GetPFPosition(var_308_cvector);
		var_309_cvector = var_307_cvector - var_308_cvector;
		var_310_float = var_309_cvector | var_309_cvector;
		@@@var_0_object:GetAttackDistance(var_311_float);
		var_311_float = var_311_float + (int)50;
		var_317_float = var_311_float * var_311_float;
		var_301_bool = var_310_float <= var_317_float;
		return 10;
	}
	var_301_bool = 0;
	return 10;
}


func_2215()
{
	var_18_bool = 0;
	func_2404(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_680(var_0_object, var_3_string, var_5_bool, var_28_object, var_29_bool, var_30_float, var_135_bool, var_227_bool)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_float = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_float = 0;
	func_909(var_50_cvector, var_51_bool, var_52_float);
	var_5_bool = 0;
	var_77_bool = IsFuncExist(var_28_object, "@GetAttackDistance", (int)1);
	if(var_77_bool != 0) {
		@@var_28_object:GetAttackDistance(var_42_float);
		var_42_float = var_42_float + (int)50;
	} else {
							var_30_float = var_42_float;
	}
	var_80_bool = var_42_float >= (int)150;
	if(var_80_bool != 0) {
		var_42_float = 150;
	}
	var_3_string = false;
	var_0_object = var_28_object;
	IsPlayerActor(var_0_object, var_45_bool);
	var_81_bool = var_45_bool;
	if(var_81_bool != 0) {
		PlayGlobalMusic("attack");
		var_83_object = Obj();
		func_2263(var_83_object);
		SendPlayerEnemy(var_28_object, var_83_object);
	}
	var_84_bool = var_29_bool;
	if(var_84_bool != 0) {
		var_46_bool = 0;
	} else {
						var_46_bool = 1;

	}
	var_47_float = (float)400.0 + var_42_float;
	
Label_720:
	var_86_bool = 0;
	var_86_bool = 0;
	var_87_bool = 0; var_88_object = Obj();
	var_88_object = var_0_object;
	func_1920(var_87_bool, var_88_object);
	if(var_87_bool != 0) {
		var_121_bool = var_3_string == 0; //@nz
		if(var_121_bool != 0) {
			var_86_bool = 1;
		}
	}
	if(var_86_bool != 0) {
		func_1322(var_52_float);
		@@@var_0_object:GetPFPosition(var_43_cvector);
		GetPFPosition(var_44_cvector);
		var_48_cvector = var_43_cvector - var_44_cvector;
		var_49_float = var_48_cvector | var_48_cvector;
		var_127_float = var_47_float * var_47_float;
		var_128_bool = var_49_float >= var_127_float;
		if(var_128_bool != 0) {
			var_129_bool = 0; var_130_object = Obj(); var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_bool = 0;
			var_130_object = var_0_object;
			var_42_float = var_131_float;
			TaskCall(5);
			func_1342(var_137_bool, var_129_bool, var_130_object, var_131_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_212_bool = var_135_bool == 0; //@nz
			if(var_212_bool != 0) {
			} else {
				var_46_bool = 0;
		} else {
				var_218_float = var_30_float * var_30_float;
				var_219_bool = var_49_float >= var_218_float;
				if(var_219_bool != 0) {
					@@@var_0_object:GetPFPosition(var_50_cvector);
					CanReachByPF(var_51_bool, var_50_cvector);
					var_220_bool = var_51_bool == 0; //@nz
					if(var_220_bool != 0) {
						var_221_bool = 0; var_222_object = Obj(); var_223_float = 0; var_224_float = 0; var_225_bool = 0; var_226_bool = 0;
						var_222_object = var_0_object;
						var_42_float = var_223_float;
						TaskCall(5);
						func_1342(var_229_bool, var_221_bool, var_222_object, var_223_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_230_bool = var_227_bool == 0; //@nz
						if(var_230_bool != 0) {
							goto Label_892;
						}
						var_46_bool = 0;
						goto Label_720;
					}
					var_231_bool = var_46_bool == 0; //@nz
					if(var_231_bool != 0) {
						var_232_object = Obj();
						var_232_object = var_0_object;
						func_2070(var_232_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1322(var_52_float);
						StopAsync();
						var_46_bool = 1;
						var_243_bool = 0; var_244_object = Obj();
						var_244_object = var_0_object;
						func_1920(var_243_bool, var_244_object);
						var_245_bool = var_243_bool == 0; //@nz
						if(var_245_bool != 0) {
							goto Label_892;
						}
					}
					rand(var_52_float);
					var_246_bool = 0;
					var_248_bool = var_52_float < (float)0.25;
					if(var_248_bool != 1) {
						var_249_bool = 0;
						func_1279((bool)1, var_249_bool);
						if(var_249_bool != 1) {
							var_246_bool = 0;
						}
					}
					if(var_246_bool != 0) {
						Face(var_0_object);
						func_1329();
						PlayAnimation("all", "attack_stay");
						var_286_bool = 0; var_287_float = 0;
						var_30_float = var_287_float;
						func_1147(var_52_float, var_286_bool, var_287_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1322(var_52_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_508_bool = 0;
						func_1279(var_52_float, var_508_bool);
						var_509_bool = var_508_bool == 0; //@nz
						if(var_509_bool == 0) goto Label_882;
						var_510_bool = 0; var_511_object = Obj();
						var_511_object = var_0_object;
						func_1920(var_510_bool, var_511_object);
						var_512_bool = var_510_bool == 0; //@nz
						if(var_512_bool != 0) {
							goto Label_892;
						}
						@@@var_0_object:GetPFPosition(var_43_cvector);
						GetPFPosition(var_44_cvector);
						var_48_cvector = var_43_cvector - var_44_cvector;
						var_49_float = var_48_cvector | var_48_cvector;
						var_513_float = var_30_float * var_30_float;
						var_514_bool = var_49_float < var_513_float;
						if(var_514_bool == 0) goto Label_882;
						var_515_bool = 0; var_516_float = 0;
						var_30_float = var_516_float;
						func_983(var_51_bool, var_52_float, var_515_bool, var_516_float);
						var_517_bool = var_515_bool == 0; //@nz
						if(var_517_bool == 0) goto Label_882;
						goto Label_892;
				}
					var_518_bool = 0; var_519_float = 0;
					var_30_float = var_519_float;
					func_983(var_51_bool, var_52_float, var_518_bool, var_519_float);
					var_520_bool = var_518_bool == 0; //@nz
					if(var_520_bool != 0) {
						goto Label_892;
					}
					var_46_bool = 1;

				}
			Label_882:
				goto Label_891;
		}
		Label_891:
			goto Label_720;

		}
	}
Label_892:
	WaitForAnimEnd();
	var_213_string = var_3_string;
	if(var_213_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_216_bool = var_45_bool;
	if(var_216_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1447(var_0_object, var_1_object, var_158_bool, var_159_object, var_160_float, var_161_float, var_162_bool, var_163_bool)
{
	var_164_bool = 0; var_165_bool = 0; var_166_object = Obj(); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_float = 0; var_171_object = Obj(); var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_object = Obj();
	var_0_object = false;
	var_1_object = var_159_object;
	var_163_bool = var_173_bool;
	
Label_1451:
	var_180_bool = 0; var_181_object = Obj();
	var_159_object = var_181_object;
	func_1587(var_180_bool, var_181_object);
	var_184_bool = var_180_bool == 0; //@nz
	if(var_184_bool != 0) {
		var_158_bool = 0;
		return 16;
	}
	@@var_159_object:GetPosition(var_175_cvector);
	GetPosition(var_176_cvector);
	var_177_cvector = var_175_cvector - var_176_cvector;
	var_178_float = var_177_cvector | var_177_cvector;
	var_185_bool = 0;
	var_185_bool = 0;
	var_187_bool = var_161_float > (int)0;
	if(var_187_bool != 0) {
		var_188_float = var_161_float * var_161_float;
		var_189_bool = var_178_float > var_188_float;
		if(var_189_bool != 0) {
			var_185_bool = 1;
		}
	}
	if(var_185_bool != 0) {
		Stop();
		var_158_bool = 0;
		return 16;
	}
	var_190_float = var_160_float * var_160_float;
	var_191_bool = var_178_float > var_190_float;
	if(var_191_bool != 0) {
		@@var_159_object:GetPFPosition(var_175_cvector);
		FindPathTo(var_179_object, var_175_cvector);
		var_192_bool = var_179_object != 0; //@nn
		if(var_192_bool != 0) {
			var_179_object = var_174_object;
			var_179_object = 0;
		}
		var_193_bool = var_174_object != 0; //@nn
		if(var_193_bool != 0) {
			var_194_bool = var_173_bool;
			if(var_194_bool == 0) goto Label_1500;
			var_173_bool = 0;
			RotatePath(var_174_object, var_172_bool);
			var_195_bool = var_172_bool == 0; //@nz
			if(var_195_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_198_string = "";
				func_1594(var_198_string);
				var_199_string = "";
				func_1596(var_199_string);
				FollowPath(var_174_object, var_162_bool, var_172_bool, var_198_string, var_199_string);
				var_200_bool = var_172_bool == 0; //@nz
				if(var_200_bool != 0) {
					var_201_object = var_0_object;
					if(var_201_object != 0) {
						var_174_object = 0;
						goto Label_1547;
					EMIT "GOTO 0x5f0";
					}
				} else {
					var_174_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_172_bool);
					var_204_bool = var_172_bool == 0; //@nz
					if(var_204_bool != 0) {
						var_205_object = var_0_object;
						if(var_205_object != 0) {
							var_174_object = 0;
							goto Label_1547;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1547;
	}
			var_179_object = 0;
			goto Label_1545;

		Label_1545:
			var_174_object = 0;

		}
		goto Label_1451;
	}
Label_1547:
	var_158_bool = !var_0_object;
	return 16;
	
}


func_2473(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x9b8";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_2222(var_83_string)
{
	var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0);
	IsExisting3DSound(var_92_bool, var_83_string);
	var_100_bool = var_92_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_93_int = 0;

	Label_2228:
		var_102_int = var_93_int + (int)1;
		var_103_int = var_83_string + var_102_int;
		IsExisting3DSound(var_94_bool, var_103_int);
		var_104_bool = var_94_bool == 0; //@nz
		if(var_104_bool != 0) {
		} else {
			var_93_int = var_93_int + (int)1;
			goto Label_2228;
		}
		var_105_bool = var_93_int == 0; //@nz
		if(var_105_bool != 0) {
			return 16;
		}
		irand(var_95_int, var_93_int);
		var_107_int = var_95_int + (int)1;
		var_83_string = var_83_string + var_107_int;
	}
	Is3DSoundLoaded(var_96_bool, var_83_string);
	var_108_bool = var_96_bool;
	if(var_108_bool != 0) {
		GetEyesHeight(var_97_float);
		GetDirection(var_98_cvector);
		var_99_cvector = var_98_cvector * (int)50;
		var_110_float = GetByIndex(var_99_cvector, 1);
		var_110_float = var_110_float + var_97_float;
		SetByIndex(var_99_cvector, 1) = var_110_float;
		PlayGlobalSound(var_83_string, var_99_cvector);
	}
	return 16;
	
}


func_944(var_0_object, var_384_float, var_385_int)
{
	var_386_object = Obj(); var_387_float = 0; var_388_float = 0; var_389_object = Obj(); var_390_float = 0; var_391_float = 0;
	var_393_float = var_384_float * (float)0.8999999761581421;
	GetVictim(var_393_float, var_389_object);
	ReportAttack(var_0_object);
	var_394_bool = var_389_object == var_0_object;
	if(var_394_bool != 0) {
		var_395_float = 0; var_396_object = Obj(); var_397_int = 0;
		var_389_object = var_396_object;
		var_385_int = var_397_int;
		func_674(var_397_int);
		var_395_float = var_390_float;
		var_398_float = 0; var_399_object = Obj(); var_400_float = 0; var_401_int = 0;
		var_389_object = var_399_object;
		var_390_float = var_400_float;
		var_402_int = 0; var_403_object = Obj(); var_404_int = 0;
		var_389_object = var_403_object;
		var_385_int = var_404_int;
		func_677(var_404_int);
		var_402_int = var_401_int;
		func_1806(var_398_float, var_399_object, var_400_float, var_401_int);
		var_398_float = var_391_float;
		var_463_int = 0;
		func_1327(var_463_int);
		ReportHit(var_0_object, var_463_int, var_391_float, var_390_float);
		var_464_object = Obj(); var_465_float = 0;
		var_389_object = var_464_object;
		var_391_float = var_465_float;
		func_1334();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1714(var_82_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_83_string = "";
	var_82_string = var_83_string;
	func_2222(var_83_string);
	PlayAnimation("all", var_82_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_82_string);
	RemoveEnvelope();
	return 0;
}


func_2490(var_20_int)
{
	var_21_int = 0; var_22_int = 0;
	GetVariable("branch", var_22_int);
	var_22_int = var_20_int;
	return 2;
}


func_187(var_2_object, var_107_string)
{
	var_108_bool = 0;
	func_2404(var_108_bool);
	var_109_bool = var_108_bool == 0; //@nz
	if(var_109_bool != 0) {
		return 0;
	}
	var_110_bool = var_107_string == var_2_object;
	if(var_110_bool != 0) {
		return 0;
	}
	var_111_string = ""; var_112_bool = 0;
	var_107_string = var_111_string;
	var_114_bool = var_107_string == "";
	if(var_114_bool != 0) {
		var_112_bool = 0;
	} else {
		var_112_bool = 1;
	}
	func_2189(var_111_string, var_112_bool);
	var_2_object = var_107_string;
	return 0;
	
}


func_2496(var_19_object)
{
	var_20_int = 0;
	func_2490(var_20_int);
	var_25_bool = var_20_int == (int)1;
	if(var_25_bool != 0) {
		WorkWithCorpse(var_19_object);
	} else {
		Barter(var_19_object);
	}
	return 0;
	
}


func_1218(var_299_bool)
{
	var_300_bool = 0;
	var_300_bool = 0;
	var_301_bool = 0;
	func_1190(var_300_bool, var_301_bool);
	if(var_301_bool != 0) {
		var_318_bool = 0;
		func_1234(var_299_bool, var_300_bool, var_318_bool);
		if(var_318_bool != 0) {
			var_300_bool = 1;
		}
	}
	if(var_300_bool != 0) {
		var_299_bool = 1;
		return 0;
	}
	var_299_bool = 0;
	return 0;
}


func_1988(var_19_object, var_20_int, var_21_float)
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
		func_1760(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_2269(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_2017:
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
			goto Label_2017;
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
			func_2056(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_1944(var_109_object);
	return 18;
	
}


func_2509(var_58_object)
{
	var_59_object = Obj();
	var_58_object = var_59_object;
	TaskCall(6);
	func_1598(var_59_object);
	TaskReturn();
	return 0;
}


func_1234(var_0_object, var_4_bool, var_318_bool)
{
	var_319_object = Obj(); var_320_bool = 0; var_321_float = 0; var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_object = Obj(); var_325_bool = 0; var_326_float = 0; var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0);
	GetScene(var_324_object);
	var_325_bool = 0;
	
Label_1238:
	var_329_cvector = CVector(0,0,0); var_330_object = Obj();
	var_330_object = var_0_object;
	func_1760(var_329_cvector, var_330_object);
	var_335_int = -var_329_cvector;
	FindDirLength(var_326_float, var_335_int, var_4_bool);
	var_336_bool = var_326_float < var_4_bool;
	if(var_336_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_327_cvector);
		GetPFPosition(var_328_cvector);
		WaitForAnimEnd();
		func_1322(var_328_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_325_bool = 1;
		var_340_bool = 0;
		func_1190(var_328_cvector, var_340_bool);
		var_341_bool = var_340_bool == 0; //@nz
		if(var_341_bool != 0) {
			goto Label_1276;
		}
		goto Label_1238;
	}
Label_1276:
	var_325_bool = var_318_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1746(var_426_string, var_427_int)
{
	var_429_bool = var_427_int == (int)2;
	if(var_429_bool != 0) {
		var_426_string = "fire";
		return 0;
	EMIT "GOTO 0x6de";
	}
	var_431_bool = var_427_int == (int)1;
	if(var_431_bool != 0) {
		var_426_string = "bullet";
		return 0;
	}
	var_426_string = "phys";
	return 0;
}


func_2263(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj();
	self(var_27_object);
	var_27_object = var_25_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_471()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_2081(var_29_bool);
	var_32_bool = var_29_bool == 0; //@nz
	if(var_32_bool != 0) {
		return 14;
	}
	func_2413((int)0);
	var_33_int = var_22_int;
	var_23_int = 0;
	
Label_485:
	var_46_bool = 0;
	var_46_bool = 0;
	var_48_bool = var_23_int < (int)5;
	if(var_48_bool != 0) {
		var_49_bool = 0;
		func_2081(var_49_bool);
		if(var_49_bool != 0) {
			var_46_bool = 1;
		}
	}
	if(var_46_bool != 0) {
		irand(var_24_int, (int)3);
		var_52_bool = var_24_int == (int)0;
		if(var_52_bool != 0) {
			var_53_int = var_22_int;
			if(var_53_int == 0) goto Label_518;
			irand(var_25_int, var_22_int);
			var_55_string = ""; var_56_int = 0;
			var_25_int = var_56_int;
			func_2406(var_55_string, var_56_int);
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
						goto Label_547;
					}
					goto Label_536;
				}
				var_67_int = var_23_int;
				if(var_67_int == 0) goto Label_536;
				goto Label_547;
		}
		Label_536:
			var_58_bool = 0;
			func_550(var_58_bool);
			var_59_bool = var_58_bool == 0; //@nz
			if(var_59_bool != 0) {
				goto Label_547;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_485;

		}
	}
Label_547:
	ResetAAS();
	return 14;
	
}


func_983(var_0_object, var_1_object, var_347_bool, var_348_float)
{
	var_349_int = 0; var_350_bool = 0; var_351_int = 0; var_352_string = ""; var_353_int = 0; var_354_bool = 0; var_355_int = 0; var_356_string = "";
	func_1322(var_356_string);
	irand(var_353_int, var_1_object);
	var_353_int = var_353_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2385();
	var_365_int = "attack_begin" + var_353_int;
	PlayAnimation("all", var_365_int);
	WaitForAnimEnd();
	func_1290(var_355_int, var_356_string);
	var_381_bool = 0; var_382_object = Obj();
	var_382_object = var_0_object;
	func_1920(var_381_bool, var_382_object);
	var_383_bool = var_381_bool == 0; //@nz
	if(var_383_bool != 0) {
		StopAsync();
		var_347_bool = 0;
		return 8;
	}
	var_384_float = 0; var_385_int = 0;
	var_348_float = var_384_float;
	var_353_int = var_385_int;
	func_944(var_356_string, var_384_float, var_385_int);
	var_468_int = "attack_middle" + var_353_int;
	HasAnimation(var_354_bool, "all", var_468_int);
	var_469_bool = var_354_bool;
	if(var_469_bool != 0) {
		func_2385();
		var_472_int = "attack_middle" + var_353_int;
		PlayAnimation("all", var_472_int);
		WaitForAnimEnd();
		func_1322(var_356_string);
		var_473_bool = 0; var_474_object = Obj();
		var_474_object = var_0_object;
		func_1920(var_473_bool, var_474_object);
		var_475_bool = var_473_bool == 0; //@nz
		if(var_475_bool != 0) {
			StopAsync();
			var_347_bool = 0;
			return 8;
		}
		var_476_float = 0; var_477_int = 0;
		var_348_float = var_476_float;
		var_353_int = var_477_int;
		func_944(var_356_string, var_476_float, var_477_int);
		var_355_int = 1;

	Label_1060:
		var_479_int = "attack_middle" + var_353_int;
		var_481_int = var_479_int + "_";
		var_356_string = var_481_int + var_355_int;
		HasAnimation(var_354_bool, "all", var_356_string);
		var_483_bool = var_354_bool == 0; //@nz
		if(var_483_bool != 0) {
		} else {
			func_2385();
			PlayAnimation("all", var_356_string);
			WaitForAnimEnd();
			func_1322(var_356_string);
			var_499_bool = 0; var_500_object = Obj();
			var_500_object = var_0_object;
			func_1920(var_499_bool, var_500_object);
			var_501_bool = var_499_bool == 0; //@nz
			if(var_501_bool != 0) {
				StopAsync();
				var_347_bool = 0;
				var_502_float = 0; var_503_int = 0;
				var_348_float = var_502_float;
				var_353_int = var_503_int;
				func_944(var_356_string, var_502_float, var_503_int);
				var_355_int = var_355_int + (int)1;
				goto Label_1060;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_487_int = "attack_end" + var_353_int;
	PlayAnimation("all", var_487_int);
	var_488_bool = 0;
	func_1336(var_488_bool);
	if(var_488_bool != 0) {
		var_489_bool = 0; var_490_float = 0;
		func_1120(var_489_bool, (float)0.75);
		StopAsync();
	}
	var_347_bool = 1;
	return 8;
	
}


func_2269(var_47_cvector, var_48_cvector)
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


func_1760(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_1767(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsPlayerActor(var_17_object, var_19_bool);
	var_19_bool = var_16_bool;
	return 2;
}


func_2279(var_436_float, var_437_float, var_438_float)
{
	var_441_bool = var_437_float < var_438_float;
	if(var_441_bool != 0) {
		var_437_float = var_436_float;
	} else {
		var_438_float = var_436_float;
	}
	return 0;
	
}


func_1772(var_39_bool, var_40_object, var_41_string)
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


func_2286(var_49_float, var_50_float, var_51_float, var_52_float)
{
	var_53_bool = var_50_float < var_51_float;
	if(var_53_bool != 0) {
		var_51_float = var_49_float;
		return 0;
	}
	var_54_bool = var_50_float > var_52_float;
	if(var_54_bool != 0) {
		var_52_float = var_49_float;
		return 0;
	}
	var_50_float = var_49_float;
	return 0;
}


func_1784(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float)
{
	var_37_float = 0; var_38_float = 0;
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_32_object = var_40_object;
	var_33_string = var_41_string;
	func_1772(var_39_bool, var_40_object, var_41_string);
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_31_bool = 0;
		return 2;
	}
	@@var_32_object:GetProperty(var_33_string, var_38_float);
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0;
	var_50_float = var_38_float + var_34_float;
	var_35_float = var_51_float;
	var_36_float = var_52_float;
	func_2286(var_49_float, var_50_float, var_51_float, var_52_float);
	@@var_32_object:SetProperty(var_33_string, var_49_float);
	var_31_bool = 1;
	return 2;
}


func_2297(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_2302(var_20_bool, var_21_object, var_22_float)
{
	var_23_bool = var_21_object == 0; //@nz
	if(var_23_bool != 0) {
		var_20_bool = 0;
		return 0;
	}
	var_25_bool = var_22_float > (int)0;
	if(var_25_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_56_bool = var_22_float < (int)0;
		if(var_56_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2323;
		}
		var_20_bool = 0;
		return 0;
	}
Label_2323:
	var_27_float = 0;
	var_22_float = var_27_float;
	func_2354(var_27_float);
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; var_34_float = 0; var_35_float = 0; var_36_float = 0;
	var_21_object = var_32_object;
	var_22_float = var_34_float;
	func_1784(var_31_bool, var_32_object, "reputation", var_34_float, (float)0, (float)1);
	var_20_bool = 1;
	return 0;
	
}


func_1279(var_0_object, var_249_bool)
{
	var_250_bool = 0; var_251_bool = 0;
	var_254_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_254_bool != 0) {
		@@@var_0_object:IsAttacking(var_251_bool);
		var_251_bool = var_249_bool;
		return 2;
	}
	var_249_bool = 0;
	return 2;
}


