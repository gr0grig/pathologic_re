// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,Hold/0,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FollowPath/3,Rotate/3,WaitForAnimEnd/1,StopGroup0/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:reputation|W:battle|W:quest_d3_01|W:patrol_talk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:revolver_ammo|W:alpha_pills|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x53d
// @RUN_TASK: 5
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x95 vars=int,int
// @TASK_2: vars=object,int,int,bool,float,int params=0
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_7: op=0x3dc vars=int
// @EVENT_1: op=0x3f7 vars=object
// @EVENT_2: op=0x406 vars=object
// @EVENT_10: op=0x48c vars=object
// @EVENT_41: op=0x497 vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x4b8 vars=object
// @EVENT_22: op=0x537 vars=object,int,float,float
// @EVENT_16: op=0x539 vars=object,string
// @EVENT_41: op=0x53b vars=object
// @TASK_5: vars=cvector,cvector,bool params=0
// @EVENT_0: op=0x54e vars=object
// @EVENT_17: op=0x55b vars=object
// @STANDALONE_EVENT_22: op=0x8f0 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x8f8 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x902 vars=object,string
// @STANDALONE_EVENT_41: op=0x90f vars=object
// @PE: 0x4a,0x7f,0x95,0x10f,0x112,0x3a3,0x3dc,0x3f7,0x406,0x47a,0x48c,0x497,0x4a0,0x4ab,0x51d,0x537,0x539,0x53b,0x544,0x54e,0x5c0,0x7d4,0x7db,0x7e6,0x844,0x89b,0x8f0,0x8f8,0x90f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_cvector, var_17_cvector, var_18_bool)
{
	if((int)1 != 0) {
		func_1936();
		var_22_bool = var_18_bool == (int)10005;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_object;
			func_2116();
		}
		var_55_bool = var_18_bool == (int)10006;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_2116();
		}
		var_59_bool = var_18_bool == (int)10009;
		if(var_59_bool != 0) {
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_2116();
		}
		var_63_bool = var_17_cvector == (int)10002;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_127(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509122);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509123, (int)10004, (int)10003);
			return 0;
		}
		var_86_bool = var_17_cvector == (int)10004;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_127(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509124);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509125, (int)-1, (int)10005);
			@@@var_0_object:AddReply((int)509126, (int)-1, (int)10006);
			@@@var_0_object:AddReply((int)509127, (int)10008, (int)10007);
			return 0;
		}
		var_99_bool = var_17_cvector == (int)10008;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_127(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509129, (int)-1, (int)10009);
			return 0;
		}
		var_3_string = true;
		var_105_bool = 0;
		func_2333(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x96";
	
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int, var_15_cvector, var_16_cvector, var_17_bool)
{
	var_19_bool = var_17_bool == (int)1;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_20_object = var_1_object;
		func_2096(var_20_object);
	} else {
		var_25_int = 0;
		var_17_bool = var_25_int;
		func_1146(var_16_cvector, var_17_bool, var_25_int);
	}
	return 0;
	
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_object == var_17_bool;
	if(var_19_bool != 0) {
		var_20_bool = var_2_object == 0; //@nz
		if(var_20_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_object = true;
		var_21_object = Obj();
		var_17_bool = var_21_object;
		func_1925(var_21_object);
	}
	return 0;
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_object == var_17_bool;
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


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	RequestClearPath(var_17_bool);
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	func_1002(var_17_bool);
	var_17_bool = Obj();
	func_2319();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	IsOverrideActive(var_19_bool);
	var_20_bool = var_19_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_17_bool = var_21_object;
		func_2203(var_21_object);
	}
	return 2;
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector, var_20_bool)
{
	return 0;
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string, var_16_cvector, var_17_cvector, var_18_bool)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object)
{
	var_18_bool = 0;
	func_1346(var_17_object, var_18_bool);
	if(var_18_bool != 0) {
		func_1466();
		var_19_object = Obj();
		var_17_object = var_19_object;
		func_1348(var_17_object, var_19_object);
	}
	return 0;
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsPlayerActor(var_17_object, var_19_bool);
	var_20_bool = var_19_bool;
	if(var_20_bool != 0) {
		TaskCall(2);
		func_256();
		TaskReturn();
	}
	return 2;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_1714(var_21_object, var_22_int, var_23_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	var_17_object = var_23_object;
	var_18_int = var_24_int;
	var_19_float = var_25_float;
	var_21_cvector = var_26_cvector;
	var_22_cvector = var_27_cvector;
	func_1782(var_25_float, var_26_cvector, var_27_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object, var_18_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_2257(var_18_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool)
{
	var_2_object = true;
	func_1382(var_15_cvector, var_16_bool);
	return 0;
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_0_object = var_21_object;
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0;
	var_21_object = var_32_object;
	func_1807(var_31_bool, var_32_object, (float)70.0);
	var_78_bool = var_31_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	CreateDialog(var_27_object);
	var_79_int = 0;
	func_2327(var_79_int);
	@@var_27_object:SetNPCName(var_79_int);
	var_80_int = 0;
	func_2325(var_80_int);
	@@var_27_object:SetNPCDescription(var_80_int);
	var_81_string = "";
	func_2329(var_81_string);
	@@var_27_object:SetPhoto(var_81_string);
	var_82_string = "";
	func_2331(var_82_string);
	@@var_27_object:SetPhoto2(var_82_string);
	var_83_int = 0;
	func_2180(var_83_int);
	@@var_27_object:SetPlayerName(var_83_int);
	IsOverrideActive(var_28_bool);
	var_91_bool = var_28_bool;
	if(var_91_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	DoDialog(var_27_object);
	var_92_object = Obj(); var_93_object = Obj();
	var_21_object = var_92_object;
	var_27_object = var_93_object;
	TaskCall(1);
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object);
	TaskReturn();
	@@var_27_object:IsDialogEnd(var_30_bool);
	
Label_56:
	var_138_bool = var_30_bool == 0; //@nz
	if(var_138_bool != 0) {
		sync();
		@@var_27_object:IsDialogEnd(var_30_bool);
		goto Label_56;
	}
	var_21_object = Obj();
	func_1876();
	StopDialog(var_27_object);
	@@var_27_object:GetReturnValue((int)-1);
	var_29_int = var_20_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_256()
{
	var_27_object = Obj(); var_28_object = Obj();
	FindActor(var_28_object, "player");
	var_30_bool = var_28_object == 0; //@nz
	if(var_30_bool != 0) {
		return 2;
	}
	var_31_object = Obj(); var_32_bool = 0; var_33_float = 0;
	var_28_object = var_31_object;
	func_277(var_24_bool, var_25_float, var_26_int, var_27_object, var_28_object, var_31_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1796(var_237_object)
{
	var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0);
	@@var_237_object:GetPosition(var_241_cvector);
	GetPosition(var_242_cvector);
	var_243_cvector = var_241_cvector - var_242_cvector;
	var_244_float = GetByIndex(var_243_cvector, 0);
	var_245_float = GetByIndex(var_243_cvector, 2);
	RotateAsync(var_244_float, var_245_float);
	return 6;
}


func_2057(var_459_float)
{
	var_460_object = Obj(); var_461_object = Obj();
	CreateFloatVector(var_461_object);
	@@var_461_object:add(var_459_float);
	var_463_bool = var_459_float < (int)0;
	if(var_463_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_461_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1807(var_31_bool, var_32_object, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0;
	@@var_32_object:GetPosition(var_44_cvector);
	@@var_32_object:GetEyesHeight(var_43_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	var_52_float = var_52_float + var_43_float;
	SetByIndex(var_44_cvector, 1) = var_52_float;
	GetPosition(var_45_cvector);
	GetEyesHeight(var_43_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	var_53_float = var_53_float + var_43_float;
	SetByIndex(var_45_cvector, 1) = var_53_float;
	var_46_cvector = var_44_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (float)0;
	var_55_int = var_46_cvector | var_46_cvector;
	var_56_float = sqrt(var_55_int);
	var_46_cvector = var_46_cvector / var_56_float;
	var_47_cvector = -var_46_cvector;
	var_57_float = var_46_cvector * var_33_float;
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	var_59_cvector = var_47_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1990(var_58_cvector, var_59_cvector);
	var_67_float = var_58_cvector * (int)25;
	var_68_int = var_57_float + var_67_float;
	var_48_cvector = var_68_int - CVector(0.0, 10.0, 0.0);
	var_49_cvector = var_45_cvector + var_48_cvector;
	IsOverrideActive(var_50_bool);
	var_70_bool = var_50_bool;
	if(var_70_bool != 0) {
		var_31_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_49_cvector, var_47_cvector, (bool)1);
	var_72_float = GetByIndex(var_48_cvector, 0);
	var_73_float = GetByIndex(var_48_cvector, 2);
	Rotate(var_72_float, var_73_float);
	var_74_bool = 0;
	func_2333(var_74_bool);
	if(var_74_bool != 0) {
	} else {
		HasAnimationTrack(var_51_bool, "head");
		var_76_bool = var_51_bool;
		if(var_76_bool == 0) goto Label_1870;
		LookAsyncCamera("head");
	}
Label_1870:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_31_bool = 1;
	return 18;
	
}


func_271(var_400_float)
{
	var_400_float = 0.30000001192092896;
	return 0;
}


func_274(var_407_int)
{
	var_407_int = 0;
	return 0;
}


func_787(var_0_object, var_306_bool)
{
	var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; var_311_float = 0; var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_float = 0;
	var_317_bool = 0; var_318_object = Obj();
	var_318_object = var_0_object;
	func_1646(var_317_bool, var_318_object);
	var_319_bool = var_317_bool == 0; //@nz
	if(var_319_bool != 0) {
		var_306_bool = 0;
		return 10;
	}
	var_320_bool = 0;
	func_876(var_316_float, var_320_bool);
	if(var_320_bool != 0) {
		@@@var_0_object:GetPFPosition(var_312_cvector);
		GetPFPosition(var_313_cvector);
		var_314_cvector = var_312_cvector - var_313_cvector;
		var_315_float = var_314_cvector | var_314_cvector;
		@@@var_0_object:GetAttackDistance(var_316_float);
		var_316_float = var_316_float + (int)50;
		var_322_float = var_316_float * var_316_float;
		var_306_bool = var_315_float <= var_322_float;
		return 10;
	}
	var_306_bool = 0;
	return 10;
}


func_1044(var_0_object, var_1_object, var_163_bool, var_164_object, var_165_float, var_166_float, var_167_bool, var_168_bool)
{
	var_169_bool = 0; var_170_bool = 0; var_171_object = Obj(); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj(); var_177_bool = 0; var_178_bool = 0; var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_float = 0; var_184_object = Obj();
	var_0_object = false;
	var_1_object = var_164_object;
	var_168_bool = var_178_bool;
	
Label_1048:
	var_185_bool = 0; var_186_object = Obj();
	var_164_object = var_186_object;
	func_1184(var_185_bool, var_186_object);
	var_189_bool = var_185_bool == 0; //@nz
	if(var_189_bool != 0) {
		var_163_bool = 0;
		return 16;
	}
	@@var_164_object:GetPosition(var_180_cvector);
	GetPosition(var_181_cvector);
	var_182_cvector = var_180_cvector - var_181_cvector;
	var_183_float = var_182_cvector | var_182_cvector;
	var_190_bool = 0;
	var_190_bool = 0;
	var_192_bool = var_166_float > (int)0;
	if(var_192_bool != 0) {
		var_193_float = var_166_float * var_166_float;
		var_194_bool = var_183_float > var_193_float;
		if(var_194_bool != 0) {
			var_190_bool = 1;
		}
	}
	if(var_190_bool != 0) {
		Stop();
		var_163_bool = 0;
		return 16;
	}
	var_195_float = var_165_float * var_165_float;
	var_196_bool = var_183_float > var_195_float;
	if(var_196_bool != 0) {
		@@var_164_object:GetPFPosition(var_180_cvector);
		FindPathTo(var_184_object, var_180_cvector);
		var_197_bool = var_184_object != 0; //@nn
		if(var_197_bool != 0) {
			var_184_object = var_179_object;
			var_184_object = 0;
		}
		var_198_bool = var_179_object != 0; //@nn
		if(var_198_bool != 0) {
			var_199_bool = var_178_bool;
			if(var_199_bool == 0) goto Label_1097;
			var_178_bool = 0;
			RotatePath(var_179_object, var_177_bool);
			var_200_bool = var_177_bool == 0; //@nz
			if(var_200_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_203_string = "";
				func_1191(var_203_string);
				var_204_string = "";
				func_1193(var_204_string);
				FollowPath(var_179_object, var_167_bool, var_177_bool, var_203_string, var_204_string);
				var_205_bool = var_177_bool == 0; //@nz
				if(var_205_bool != 0) {
					var_206_object = var_0_object;
					if(var_206_object != 0) {
						var_179_object = 0;
						goto Label_1144;
					EMIT "GOTO 0x45d";
					}
				} else {
					var_179_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_177_bool);
					var_209_bool = var_177_bool == 0; //@nz
					if(var_209_bool != 0) {
						var_210_object = var_0_object;
						if(var_210_object != 0) {
							var_179_object = 0;
							goto Label_1144;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1144;
	}
			var_184_object = 0;
			goto Label_1142;

		Label_1142:
			var_179_object = 0;

		}
		goto Label_1048;
	}
Label_1144:
	var_163_bool = !var_0_object;
	return 16;
	
}


func_2325(var_80_int)
{
	var_80_int = 515572;
	return 0;
}


func_277(var_0_object, var_3_string, var_5_object, var_31_object, var_32_bool, var_33_float, var_140_bool, var_232_bool)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_float = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0;
	func_506(var_53_cvector, var_54_bool, var_55_float);
	var_5_object = 0;
	var_80_bool = IsFuncExist(var_31_object, "@GetAttackDistance", (int)1);
	if(var_80_bool != 0) {
		@@var_31_object:GetAttackDistance(var_45_float);
		var_45_float = var_45_float + (int)50;
	} else {
							var_33_float = var_45_float;
	}
	var_83_bool = var_45_float >= (int)150;
	if(var_83_bool != 0) {
		var_45_float = 150;
	}
	var_3_string = false;
	var_0_object = var_31_object;
	IsPlayerActor(var_0_object, var_48_bool);
	var_84_bool = var_48_bool;
	if(var_84_bool != 0) {
		PlayGlobalMusic("attack");
		var_86_object = Obj();
		func_1984(var_86_object);
		SendPlayerEnemy(var_31_object, var_86_object);
	}
	var_89_bool = var_32_bool;
	if(var_89_bool != 0) {
		var_49_bool = 0;
	} else {
						var_49_bool = 1;

	}
	var_50_float = (float)400.0 + var_45_float;
	
Label_317:
	var_91_bool = 0;
	var_91_bool = 0;
	var_92_bool = 0; var_93_object = Obj();
	var_93_object = var_0_object;
	func_1646(var_92_bool, var_93_object);
	if(var_92_bool != 0) {
		var_126_bool = var_3_string == 0; //@nz
		if(var_126_bool != 0) {
			var_91_bool = 1;
		}
	}
	if(var_91_bool != 0) {
		func_919(var_55_float);
		@@@var_0_object:GetPFPosition(var_46_cvector);
		GetPFPosition(var_47_cvector);
		var_51_cvector = var_46_cvector - var_47_cvector;
		var_52_float = var_51_cvector | var_51_cvector;
		var_132_float = var_50_float * var_50_float;
		var_133_bool = var_52_float >= var_132_float;
		if(var_133_bool != 0) {
			var_134_bool = 0; var_135_object = Obj(); var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_bool = 0;
			var_135_object = var_0_object;
			var_45_float = var_136_float;
			TaskCall(3);
			func_939(var_142_bool, var_134_bool, var_135_object, var_136_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_217_bool = var_140_bool == 0; //@nz
			if(var_217_bool != 0) {
			} else {
				var_49_bool = 0;
		} else {
				var_223_float = var_33_float * var_33_float;
				var_224_bool = var_52_float >= var_223_float;
				if(var_224_bool != 0) {
					@@@var_0_object:GetPFPosition(var_53_cvector);
					CanReachByPF(var_54_bool, var_53_cvector);
					var_225_bool = var_54_bool == 0; //@nz
					if(var_225_bool != 0) {
						var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_bool = 0;
						var_227_object = var_0_object;
						var_45_float = var_228_float;
						TaskCall(3);
						func_939(var_234_bool, var_226_bool, var_227_object, var_228_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_235_bool = var_232_bool == 0; //@nz
						if(var_235_bool != 0) {
							goto Label_489;
						}
						var_49_bool = 0;
						goto Label_317;
					}
					var_236_bool = var_49_bool == 0; //@nz
					if(var_236_bool != 0) {
						var_237_object = Obj();
						var_237_object = var_0_object;
						func_1796(var_237_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_919(var_55_float);
						StopAsync();
						var_49_bool = 1;
						var_248_bool = 0; var_249_object = Obj();
						var_249_object = var_0_object;
						func_1646(var_248_bool, var_249_object);
						var_250_bool = var_248_bool == 0; //@nz
						if(var_250_bool != 0) {
							goto Label_489;
						}
					}
					rand(var_55_float);
					var_251_bool = 0;
					var_253_bool = var_55_float < (float)0.25;
					if(var_253_bool != 1) {
						var_254_bool = 0;
						func_876((bool)1, var_254_bool);
						if(var_254_bool != 1) {
							var_251_bool = 0;
						}
					}
					if(var_251_bool != 0) {
						Face(var_0_object);
						func_926();
						PlayAnimation("all", "attack_stay");
						var_291_bool = 0; var_292_float = 0;
						var_33_float = var_292_float;
						func_744(var_55_float, var_291_bool, var_292_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_919(var_55_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_513_bool = 0;
						func_876(var_55_float, var_513_bool);
						var_514_bool = var_513_bool == 0; //@nz
						if(var_514_bool == 0) goto Label_479;
						var_515_bool = 0; var_516_object = Obj();
						var_516_object = var_0_object;
						func_1646(var_515_bool, var_516_object);
						var_517_bool = var_515_bool == 0; //@nz
						if(var_517_bool != 0) {
							goto Label_489;
						}
						@@@var_0_object:GetPFPosition(var_46_cvector);
						GetPFPosition(var_47_cvector);
						var_51_cvector = var_46_cvector - var_47_cvector;
						var_52_float = var_51_cvector | var_51_cvector;
						var_518_float = var_33_float * var_33_float;
						var_519_bool = var_52_float < var_518_float;
						if(var_519_bool == 0) goto Label_479;
						var_520_bool = 0; var_521_float = 0;
						var_33_float = var_521_float;
						func_580(var_54_bool, var_55_float, var_520_bool, var_521_float);
						var_522_bool = var_520_bool == 0; //@nz
						if(var_522_bool == 0) goto Label_479;
						goto Label_489;
				}
					var_523_bool = 0; var_524_float = 0;
					var_33_float = var_524_float;
					func_580(var_54_bool, var_55_float, var_523_bool, var_524_float);
					var_525_bool = var_523_bool == 0; //@nz
					if(var_525_bool != 0) {
						goto Label_489;
					}
					var_49_bool = 1;

				}
			Label_479:
				goto Label_488;
		}
		Label_488:
			goto Label_317;

		}
	}
Label_489:
	WaitForAnimEnd();
	var_218_string = var_3_string;
	if(var_218_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_221_bool = var_48_bool;
	if(var_221_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2327(var_79_int)
{
	var_79_int = 504031;
	return 0;
}


func_2329(var_81_string)
{
	var_81_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_2074(var_58_float)
{
	var_59_object = Obj(); var_60_object = Obj();
	CreateFloatVector(var_60_object);
	@@var_60_object:add(var_58_float);
	SendWorldWndMessage((int)16, var_60_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2331(var_82_string)
{
	var_82_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_541(var_0_object, var_389_float, var_390_int)
{
	var_391_object = Obj(); var_392_float = 0; var_393_float = 0; var_394_object = Obj(); var_395_float = 0; var_396_float = 0;
	var_398_float = var_389_float * (float)0.8999999761581421;
	GetVictim(var_398_float, var_394_object);
	ReportAttack(var_0_object);
	var_399_bool = var_394_object == var_0_object;
	if(var_399_bool != 0) {
		var_400_float = 0; var_401_object = Obj(); var_402_int = 0;
		var_394_object = var_401_object;
		var_390_int = var_402_int;
		func_271(var_402_int);
		var_400_float = var_395_float;
		var_403_float = 0; var_404_object = Obj(); var_405_float = 0; var_406_int = 0;
		var_394_object = var_404_object;
		var_395_float = var_405_float;
		var_407_int = 0; var_408_object = Obj(); var_409_int = 0;
		var_394_object = var_408_object;
		var_390_int = var_409_int;
		func_274(var_409_int);
		var_407_int = var_406_int;
		func_1532(var_403_float, var_404_object, var_405_float, var_406_int);
		var_403_float = var_396_float;
		var_468_int = 0;
		func_924(var_468_int);
		ReportHit(var_0_object, var_468_int, var_396_float, var_395_float);
		var_469_object = Obj(); var_470_float = 0;
		var_394_object = var_469_object;
		var_396_float = var_470_float;
		func_931();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2333(var_74_bool)
{
	var_74_bool = 0;
	return 0;
}


func_1309(var_112_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_113_string = "";
	var_112_string = var_113_string;
	func_1943(var_113_string);
	PlayAnimation("all", var_112_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_112_string);
	RemoveEnvelope();
	return 0;
}


func_2084(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj();
	FindActor(var_52_object, var_49_string);
	var_53_bool = var_52_object == 0; //@ne
	if(var_53_bool != 0) {
		var_48_bool = 0;
		return 2;
	}
	Trigger(var_52_object, var_50_string);
	var_48_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_815(var_304_bool)
{
	var_305_bool = 0;
	var_305_bool = 0;
	var_306_bool = 0;
	func_787(var_305_bool, var_306_bool);
	if(var_306_bool != 0) {
		var_323_bool = 0;
		func_831(var_304_bool, var_305_bool, var_323_bool);
		if(var_323_bool != 0) {
			var_305_bool = 1;
		}
	}
	if(var_305_bool != 0) {
		var_304_bool = 1;
		return 0;
	}
	var_304_bool = 0;
	return 0;
}


func_2096(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0;
	IsPlayerActor(var_127_object, var_129_bool);
	var_130_bool = var_129_bool;
	if(var_130_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2105()
{
	var_364_object = Obj(); var_365_object = Obj();
	GetScene(var_365_object);
	var_367_object = Obj();
	func_1984(var_367_object);
	BroadcastMessage("battle", var_367_object, var_365_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_831(var_0_object, var_4_bool, var_323_bool)
{
	var_324_object = Obj(); var_325_bool = 0; var_326_float = 0; var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_object = Obj(); var_330_bool = 0; var_331_float = 0; var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0);
	GetScene(var_329_object);
	var_330_bool = 0;
	
Label_835:
	var_334_cvector = CVector(0,0,0); var_335_object = Obj();
	var_335_object = var_0_object;
	func_1486(var_334_cvector, var_335_object);
	var_340_int = -var_334_cvector;
	FindDirLength(var_331_float, var_340_int, var_4_bool);
	var_341_bool = var_331_float < var_4_bool;
	if(var_341_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_332_cvector);
		GetPFPosition(var_333_cvector);
		WaitForAnimEnd();
		func_919(var_333_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_330_bool = 1;
		var_345_bool = 0;
		func_787(var_333_cvector, var_345_bool);
		var_346_bool = var_345_bool == 0; //@nz
		if(var_346_bool != 0) {
			goto Label_873;
		}
		goto Label_835;
	}
Label_873:
	var_330_bool = var_323_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1346(var_2_object, var_18_bool)
{
	var_18_bool = var_2_object;
	return 0;
}


func_2116()
{
	func_2126();
	var_48_bool = 0; var_49_string = ""; var_50_string = "";
	func_2084(var_48_bool, "quest_d3_01", "patrol_talk");
	return 0;
}


func_580(var_0_object, var_1_object, var_352_bool, var_353_float)
{
	var_354_int = 0; var_355_bool = 0; var_356_int = 0; var_357_string = ""; var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = "";
	func_919(var_361_string);
	irand(var_358_int, var_1_object);
	var_358_int = var_358_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2105();
	var_370_int = "attack_begin" + var_358_int;
	PlayAnimation("all", var_370_int);
	WaitForAnimEnd();
	func_887(var_360_int, var_361_string);
	var_386_bool = 0; var_387_object = Obj();
	var_387_object = var_0_object;
	func_1646(var_386_bool, var_387_object);
	var_388_bool = var_386_bool == 0; //@nz
	if(var_388_bool != 0) {
		StopAsync();
		var_352_bool = 0;
		return 8;
	}
	var_389_float = 0; var_390_int = 0;
	var_353_float = var_389_float;
	var_358_int = var_390_int;
	func_541(var_361_string, var_389_float, var_390_int);
	var_473_int = "attack_middle" + var_358_int;
	HasAnimation(var_359_bool, "all", var_473_int);
	var_474_bool = var_359_bool;
	if(var_474_bool != 0) {
		func_2105();
		var_477_int = "attack_middle" + var_358_int;
		PlayAnimation("all", var_477_int);
		WaitForAnimEnd();
		func_919(var_361_string);
		var_478_bool = 0; var_479_object = Obj();
		var_479_object = var_0_object;
		func_1646(var_478_bool, var_479_object);
		var_480_bool = var_478_bool == 0; //@nz
		if(var_480_bool != 0) {
			StopAsync();
			var_352_bool = 0;
			return 8;
		}
		var_481_float = 0; var_482_int = 0;
		var_353_float = var_481_float;
		var_358_int = var_482_int;
		func_541(var_361_string, var_481_float, var_482_int);
		var_360_int = 1;

	Label_657:
		var_484_int = "attack_middle" + var_358_int;
		var_486_int = var_484_int + "_";
		var_361_string = var_486_int + var_360_int;
		HasAnimation(var_359_bool, "all", var_361_string);
		var_488_bool = var_359_bool == 0; //@nz
		if(var_488_bool != 0) {
		} else {
			func_2105();
			PlayAnimation("all", var_361_string);
			WaitForAnimEnd();
			func_919(var_361_string);
			var_504_bool = 0; var_505_object = Obj();
			var_505_object = var_0_object;
			func_1646(var_504_bool, var_505_object);
			var_506_bool = var_504_bool == 0; //@nz
			if(var_506_bool != 0) {
				StopAsync();
				var_352_bool = 0;
				var_507_float = 0; var_508_int = 0;
				var_353_float = var_507_float;
				var_358_int = var_508_int;
				func_541(var_361_string, var_507_float, var_508_int);
				var_360_int = var_360_int + (int)1;
				goto Label_657;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_492_int = "attack_end" + var_358_int;
	PlayAnimation("all", var_492_int);
	var_493_bool = 0;
	func_933(var_493_bool);
	if(var_493_bool != 0) {
		var_494_bool = 0; var_495_float = 0;
		func_717(var_494_bool, (float)0.75);
		StopAsync();
	}
	var_352_bool = 1;
	return 8;
	
}


func_1605(var_107_bool, var_108_object)
{
	var_109_bool = 0; var_110_bool = 0;
	@@var_108_object:IsDead(var_110_bool);
	var_110_bool = var_107_bool;
	return 2;
}


func_1348(var_2_object, var_19_object)
{
	var_20_int = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	TaskCall(0);
	func_0(var_22_object, var_20_int, var_21_object);
	TaskReturn();
	var_2_object = false;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_92_object, var_93_object)
{
	var_0_object = var_93_object;
	var_1_object = var_92_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_99_string = "";
		func_127(var_93_object, "Neutral");
		@@@var_0_object:SetMessage((int)509122);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)509123, (int)10004, (int)10003);
		goto Label_97;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_97:
	var_120_bool = 0;
	func_2333(var_120_bool);
	if(var_120_bool != 0) {

	Label_101:
		lshWaitForAnimEnd();
		var_121_string = var_3_string;
		if(var_121_string != 0) {
		} else {
			var_122_string = "";
			var_122_string = var_2_object;
			func_1894(var_122_string);
			goto Label_101;
	}
		PlayAnimation("all", "idle");

	Label_116:
		WaitForAnimEnd();
		var_135_string = var_3_string;
		if(var_135_string != 0) {
			goto Label_126;
		}
		PlayAnimation("all", "idle");
		goto Label_116;
	}
	goto Label_126;
	
Label_126:
	return 0;
	
}


func_1610(var_96_bool, var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); var_100_object = Obj(); var_101_object = Obj();
	var_102_bool = var_97_object == 0; //@ne
	if(var_102_bool != 0) {
		var_96_bool = 0;
		return 4;
	}
	var_103_bool = 0;
	var_103_bool = 0;
	var_106_bool = IsFuncExist(var_97_object, "IsDead", (int)1);
	if(var_106_bool != 0) {
		var_107_bool = 0; var_108_object = Obj();
		var_97_object = var_108_object;
		func_1605(var_107_bool, var_108_object);
		if(var_107_bool != 0) {
			var_103_bool = 1;
		}
	}
	if(var_103_bool != 0) {
		var_96_bool = 0;
		return 4;
	}
	GetScene(var_100_object);
	var_111_bool = var_100_object == 0; //@ne
	if(var_111_bool != 0) {
		var_96_bool = 0;
		return 4;
	}
	@@var_97_object:GetScene(var_101_object);
	var_112_bool = var_100_object != var_101_object;
	if(var_112_bool != 0) {
		var_96_bool = 0;
		return 4;
	}
	var_96_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1357()
{
	return 0;
}


func_2126()
{
	var_25_object = Obj(); var_26_object = Obj();
	CreateDiaryEntry(var_26_object, (int)72, (int)1, (int)512154);
	var_30_bool = 0; var_31_object = Obj(); var_32_int = 0;
	var_26_object = var_31_object;
	func_2152(var_30_bool, var_31_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1876()
{
	var_140_bool = 0; var_141_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_143_bool = 0;
	func_2333(var_143_bool);
	if(var_143_bool != 0) {
	} else {
		HasAnimationTrack(var_141_bool, "head");
		var_145_bool = var_141_bool;
		if(var_145_bool == 0) goto Label_1893;
		UnlookAsync("head");
	}
Label_1893:
	return 2;
	
}


func_2139(var_39_object)
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


func_1894(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0;
	lshHasAnimation(var_126_bool, var_122_string);
	var_129_bool = var_126_bool;
	if(var_129_bool != 0) {
		lshGetAnimTimes(var_122_string, var_127_float, var_128_float);
		lshPlayAnimation(var_127_float, var_128_float, (bool)0);
	} else {
		var_132_int = "Can't find lsh animation : " + var_122_string;
		Trace(var_132_int);
	}
	return 6;
	
}


func_1382(var_0_object, var_1_object)
{
	var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_1387:
	func_1471();
	irand(var_21_int, (int)10);
	var_27_int = var_21_int + (int)5;
	Sleep(var_27_int, var_22_bool);
	var_28_bool = var_22_bool;
	if(var_28_bool != 0) {
		func_1357();
	} else {
		func_1471();
		GetPFPosition(var_23_cvector);
		var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
		var_30_cvector = var_1_object;
		var_23_cvector = var_31_cvector;
		func_2000(var_29_float, var_30_cvector, var_31_cvector);
		var_35_bool = var_29_float > (int)40000;
		if(var_35_bool != 0) {
			FindPathTo(var_24_object, var_1_object);
			var_36_bool = var_24_object != 0; //@nn
			if(var_36_bool != 0) {
				RotatePath(var_24_object, var_22_bool);
				var_37_bool = var_22_bool == 0; //@nz
				if(var_37_bool != 0) {
				} else {
					FollowPath(var_24_object, (bool)0, var_22_bool);
					var_39_bool = var_22_bool == 0; //@nz
					if(var_39_bool != 0) {
						goto Label_1463;
					}
					var_40_float = GetByIndex(var_0_object, 0);
					var_41_float = GetByIndex(var_0_object, 2);
					Rotate(var_40_float, var_41_float, var_22_bool);
					var_42_bool = var_22_bool == 0; //@nz
					if(var_42_bool != 0) {
						goto Label_1463;
					}
					WaitForAnimEnd(var_22_bool);
					var_43_bool = var_22_bool == 0; //@nz
					if(var_43_bool != 0) {
						goto Label_1463;
					}
					goto Label_1464;
				EMIT "GOTO 0x5a8";
			}
				Sleep((int)1);
				var_24_object = 0;
				goto Label_1463;
		}
			var_45_float = GetByIndex(var_0_object, 0);
			var_46_float = GetByIndex(var_0_object, 2);
			Rotate(var_45_float, var_46_float, var_22_bool);
			var_47_bool = var_22_bool == 0; //@nz
			if(var_47_bool != 0) {
				goto Label_1463;
			}
			WaitForAnimEnd(var_22_bool);
			var_48_bool = var_22_bool == 0; //@nz
			if(var_48_bool != 0) {
				goto Label_1463;
			}
			goto Label_1464;
		}
	Label_1463:
		goto Label_1403;
	}
Label_1464:
	goto Label_1387;
	
}
EMIT "Return(); Pop(8)";


func_2152(var_30_bool, var_31_object, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0;
	func_2139(Obj());
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


func_876(var_0_object, var_254_bool)
{
	var_255_bool = 0; var_256_bool = 0;
	var_259_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_259_bool != 0) {
		@@@var_0_object:IsAttacking(var_256_bool);
		var_256_bool = var_254_bool;
		return 2;
	}
	var_254_bool = 0;
	return 2;
}


func_1646(var_92_bool, var_93_object)
{
	var_94_int = 0; var_95_int = 0;
	var_96_bool = 0; var_97_object = Obj();
	var_93_object = var_97_object;
	func_1610(var_96_bool, var_97_object);
	var_113_bool = var_96_bool == 0; //@nz
	if(var_113_bool != 0) {
		var_92_bool = 0;
		return 2;
	}
	var_114_bool = 0; var_115_object = Obj(); var_116_string = "";
	var_93_object = var_115_object;
	func_1498(var_114_bool, var_115_object, "noaccess");
	var_123_bool = var_114_bool == 0; //@nz
	if(var_123_bool != 0) {
		var_92_bool = 1;
		return 2;
	}
	@@var_93_object:GetProperty("noaccess", var_95_int);
	var_92_bool = var_95_int == (int)0;
	return 2;
}


func_1910(var_103_string, var_104_bool)
{
	var_107_bool = 0; var_108_float = 0; var_109_float = 0; var_110_bool = 0; var_111_float = 0; var_112_float = 0;
	lshHasAnimation(var_110_bool, var_103_string);
	var_113_bool = var_110_bool;
	if(var_113_bool != 0) {
		lshGetAnimTimes(var_103_string, var_111_float, var_112_float);
		lshPlayAnimation(var_111_float, var_112_float, var_104_bool);
	} else {
		var_115_int = "Can't find lsh animation : " + var_103_string;
		Trace(var_115_int);
	}
	return 6;
	
}


func_887(var_2_object, var_5_object)
{
	var_371_float = 0; var_372_int = 0; var_373_float = 0; var_374_int = 0;
	var_375_bool = var_2_object == 0; //@nz
	if(var_375_bool != 0) {
		return 4;
	}
	var_376_object = var_5_object;
	if(var_376_object != 0) {
		var_5_object = var_5_object + (int)-1;
		var_379_bool = var_5_object > (int)0;
		if(var_379_bool != 0) {
			return 4;
		}
	}
	rand(var_373_float);
	var_380_float = 0;
	func_937(var_380_float);
	var_381_bool = var_373_float < var_380_float;
	if(var_381_bool != 0) {
		irand(var_374_int, var_2_object);
		var_374_int = var_374_int + (int)1;
		var_384_int = "attack" + var_374_int;
		Speak(var_384_int);
		var_385_int = 0;
		func_935(var_385_int);
		var_5_object = var_385_int;
	}
	return 4;
}


func_1146(var_0_object, var_1_object, var_25_int)
{
	var_27_bool = var_25_int != (int)0;
	if(var_27_bool != 0) {
		return 0;
	}
	var_28_bool = 0; var_29_object = Obj();
	var_29_object = var_1_object;
	func_1184(var_28_bool, var_29_object);
	var_64_bool = var_28_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_127(var_2_object, var_99_string)
{
	var_100_bool = 0;
	func_2333(var_100_bool);
	var_101_bool = var_100_bool == 0; //@nz
	if(var_101_bool != 0) {
		return 0;
	}
	var_102_bool = var_99_string == var_2_object;
	if(var_102_bool != 0) {
		return 0;
	}
	var_103_string = ""; var_104_bool = 0;
	var_99_string = var_103_string;
	var_106_bool = var_99_string == "";
	if(var_106_bool != 0) {
		var_104_bool = 0;
	} else {
		var_104_bool = 1;
	}
	func_1910(var_103_string, var_104_bool);
	var_2_object = var_99_string;
	return 0;
	
}


func_2180(var_83_int)
{
	var_84_int = 0; var_85_int = 0;
	GetVariable("branch", var_85_int);
	var_88_bool = var_85_int == (int)0;
	if(var_88_bool != 0) {
		var_83_int = 1;
		return 2;
	EMIT "GOTO 0x893";
	}
	var_90_bool = var_85_int == (int)1;
	if(var_90_bool != 0) {
		var_83_int = 2;
		return 2;
	}
	var_83_int = 3;
	return 2;
}


func_1925(var_151_object)
{
	var_152_float = 0; var_153_cvector = CVector(0,0,0); var_154_float = 0; var_155_cvector = CVector(0,0,0);
	@@var_151_object:GetEyesHeight(var_154_float);
	var_155_cvector = CVector(0.0, 0.0, 0.0);
	var_156_float = GetByIndex(var_155_cvector, 1);
	var_154_float = var_156_float;
	SetByIndex(var_155_cvector, 1) = var_156_float;
	LookAsync(var_151_object, "head", var_155_cvector);
	return 4;
}


func_1670(var_34_object)
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


func_1168(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1936()
{
	var_20_bool = 0;
	func_2333(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2197(var_27_int)
{
	var_28_int = 0; var_29_int = 0;
	GetVariable("branch", var_29_int);
	var_29_int = var_27_int;
	return 2;
}


func_1943(var_113_string)
{
	var_114_bool = 0; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_bool = 0; var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_bool = 0; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0);
	IsExisting3DSound(var_122_bool, var_113_string);
	var_130_bool = var_122_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_123_int = 0;

	Label_1949:
		var_132_int = var_123_int + (int)1;
		var_133_int = var_113_string + var_132_int;
		IsExisting3DSound(var_124_bool, var_133_int);
		var_134_bool = var_124_bool == 0; //@nz
		if(var_134_bool != 0) {
		} else {
			var_123_int = var_123_int + (int)1;
			goto Label_1949;
		}
		var_135_bool = var_123_int == 0; //@nz
		if(var_135_bool != 0) {
			return 16;
		}
		irand(var_125_int, var_123_int);
		var_137_int = var_125_int + (int)1;
		var_113_string = var_113_string + var_137_int;
	}
	Is3DSoundLoaded(var_126_bool, var_113_string);
	var_138_bool = var_126_bool;
	if(var_138_bool != 0) {
		GetEyesHeight(var_127_float);
		GetDirection(var_128_cvector);
		var_129_cvector = var_128_cvector * (int)50;
		var_140_float = GetByIndex(var_129_cvector, 1);
		var_140_float = var_140_float + var_127_float;
		SetByIndex(var_129_cvector, 1) = var_140_float;
		PlayGlobalSound(var_113_string, var_129_cvector);
	}
	return 16;
	
}


func_919(var_0_object)
{
	var_127_object = Obj();
	var_127_object = var_0_object;
	func_2096(var_127_object);
	return 0;
}


func_2203(var_21_object)
{
	var_22_int = 0;
	func_2197(var_22_int);
	var_27_bool = var_22_int == (int)1;
	if(var_27_bool != 0) {
		WorkWithCorpse(var_21_object);
	} else {
		Barter(var_21_object);
	}
	return 0;
	
}


func_924(var_468_int)
{
	var_468_int = 0;
	return 0;
}


func_926()
{
	var_260_string = "";
	func_1943("attack_stay");
	return 0;
}


func_1184(var_185_bool, var_186_object)
{
	var_187_bool = 0; var_188_object = Obj();
	var_186_object = var_188_object;
	func_1646(var_187_bool, var_188_object);
	var_187_bool = var_185_bool;
	return 0;
}


func_931()
{
	return 0;
}


func_933(var_493_bool)
{
	var_493_bool = 1;
	return 0;
}


func_1191(var_203_string)
{
	var_203_string = "walk";
	return 0;
}


func_2216(var_33_string)
{
	var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; var_39_bool = 0;
	CreateInvItem(var_37_object);
	@@var_37_object:SetItemName(var_33_string);
	@@var_37_object:SetProperty("Organ", (int)1);
	@@var_37_object:GetItemID(var_38_int);
	AddItem(var_39_bool, var_37_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1193(var_204_string)
{
	var_204_string = "run";
	return 0;
}


func_935(var_385_int)
{
	var_385_int = 1;
	return 0;
}


func_1195(var_89_object)
{
	var_90_object = Obj();
	var_89_object = var_90_object;
	func_1218(var_90_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_1204:
	Hold();
	goto Label_1204;
}
EMIT "Return(); Pop(0)";


func_937(var_380_float)
{
	var_380_float = 0.5;
	return 0;
}


func_939(var_2_object, var_134_bool, var_135_object, var_136_float, var_137_float, var_138_bool, var_139_bool)
{
	var_143_bool = 0; var_144_bool = 0; var_145_bool = 0; var_146_bool = 0;
	var_147_object = Obj();
	var_135_object = var_147_object;
	func_2096(var_147_object);
	SetTimer((int)1, (int)5);
	CanSee(var_145_bool, var_135_object);
	var_150_bool = var_145_bool;
	if(var_150_bool != 0) {
		var_2_object = true;
		var_151_object = Obj();
		var_135_object = var_151_object;
		func_1925(var_151_object);
	} else {
		var_2_object = false;
	}
	var_158_bool = 0; var_159_object = Obj();
	var_135_object = var_159_object;
	func_1493(var_158_bool, var_159_object);
	if(var_158_bool != 0) {
		var_162_object = Obj();
		func_1984(var_162_object);
		SendPlayerEnemy(var_135_object, var_162_object);
	}
	var_163_bool = 0; var_164_object = Obj(); var_165_float = 0; var_166_float = 0; var_167_bool = 0; var_168_bool = 0;
	var_135_object = var_164_object;
	var_136_float = var_165_float;
	var_137_float = var_166_float;
	var_138_bool = var_167_bool;
	var_139_bool = var_168_bool;
	func_1044(var_145_bool, var_146_bool, var_163_bool, var_164_object, var_165_float, var_166_float, var_167_bool, var_168_bool);
	var_163_bool = var_146_bool;
	var_214_object = var_2_object;
	if(var_214_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_146_bool = var_134_bool;
	return 4;
	
}


func_1714(var_21_object, var_22_int, var_23_float)
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
		func_1486(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_1990(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		CreateVectorVector(var_34_object);
		var_35_int = 1;

	Label_1743:
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
			goto Label_1743;
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
			func_1782(var_68_float, var_69_cvector, var_70_cvector);
			return 18;
		}
		var_34_object = 0;
	}
	var_111_object = Obj();
	var_21_object = var_111_object;
	func_1670(var_111_object);
	return 18;
	
}


func_2233()
{
	var_27_int = 0;
	func_2197(var_27_int);
	var_32_bool = var_27_int != (int)1;
	if(var_32_bool != 0) {
		return 0;
	}
	var_33_string = "";
	func_2216("liver");
	var_44_string = "";
	func_2216("kidney");
	var_45_string = "";
	func_2216("heart");
	var_46_string = "";
	func_2216("blood");
	return 0;
}


func_1466()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1471()
{
	return 0;
}


func_1984(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj();
	self(var_88_object);
	var_88_object = var_86_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1472(var_431_string, var_432_int)
{
	var_434_bool = var_432_int == (int)2;
	if(var_434_bool != 0) {
		var_431_string = "fire";
		return 0;
	EMIT "GOTO 0x5cc";
	}
	var_436_bool = var_432_int == (int)1;
	if(var_436_bool != 0) {
		var_431_string = "bullet";
		return 0;
	}
	var_431_string = "phys";
	return 0;
}


func_1218(var_90_object)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_string = ""; var_96_object = Obj(); var_97_bool = 0; var_98_bool = 0; var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_string = ""; var_106_object = Obj(); var_107_bool = 0; var_108_bool = 0; var_109_float = 0; var_110_cvector = CVector(0,0,0);
	var_111_bool = var_90_object == 0; //@ne
	if(var_111_bool != 0) {
		var_112_string = "";
		func_1309("fdie");
	} else {
		@@var_90_object:GetPosition(var_101_cvector);
		GetPosition(var_102_cvector);
		GetDirection(var_103_cvector);
		var_104_cvector = var_102_cvector - var_101_cvector;
		var_144_float = GetByIndex(var_104_cvector, 0);
		var_145_float = GetByIndex(var_103_cvector, 0);
		var_146_float = var_144_float * var_145_float;
		var_147_float = GetByIndex(var_104_cvector, 2);
		var_148_float = GetByIndex(var_103_cvector, 2);
		var_149_float = var_147_float * var_148_float;
		var_150_int = var_146_float + var_149_float;
		var_152_bool = var_150_int >= (int)0;
		if(var_152_bool != 0) {
			var_105_string = "fdie";
		} else {
				var_105_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_90_object = var_106_object;
		var_155_bool = IsFuncExist(var_90_object, "GetScriptProperty", (int)2);
		if(var_155_bool != 0) {
			@@var_90_object:HasScriptProperty(var_107_bool, "Owner");
			var_157_bool = var_107_bool;
			if(var_157_bool != 0) {
				@@var_90_object:GetScriptProperty(var_106_object, "Owner");
				var_159_bool = var_106_object == 0; //@ne
				if(var_159_bool != 0) {
					var_90_object = var_106_object;
				}
			}
		}
		var_162_bool = IsFuncExist(var_106_object, "@GetEyesHeight", (int)1);
		if(var_162_bool != 0) {
			@@var_106_object:GetEyesHeight(var_109_float);
			var_110_cvector = CVector(0.0, 0.0, 0.0);
			var_163_float = GetByIndex(var_110_cvector, 1);
			var_109_float = var_163_float;
			SetByIndex(var_110_cvector, 1) = var_163_float;
			LookAsync(var_90_object, "head", var_110_cvector);
			var_108_bool = 1;
		} else {
			var_108_bool = 0;

		}
		var_165_string = "";
		var_105_string = var_165_string;
		func_1943(var_165_string);
		PlayAnimation("all", var_105_string);
		WaitForAnimEnd();
		var_167_bool = var_108_bool;
		if(var_167_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_105_string);
		RemoveEnvelope();
		var_106_object = 0;
	}
	return 20;
	
}


func_1990(var_49_cvector, var_50_cvector)
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


func_717(var_494_bool, var_495_float)
{
	var_496_float = 0; var_497_bool = 0; var_498_float = 0; var_499_bool = 0;
	rand(var_498_float);
	var_500_bool = var_498_float < var_495_float;
	if(var_500_bool != 0) {

	Label_722:
		IsAnimationPlaying(var_499_bool);
		var_501_bool = var_499_bool == 0; //@nz
		if(var_501_bool != 0) {
		} else {
			var_502_bool = 0;
			func_815(var_502_bool);
			if(var_502_bool != 0) {
				var_494_bool = 1;
				sync();
				goto Label_722;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_919(var_499_bool);
	}
	goto Label_742;
	
Label_742:
	var_494_bool = 0;
	return 4;
	
}


func_1486(var_51_cvector, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	GetPosition(var_55_cvector);
	@@var_52_object:GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
	return 4;
}


func_2000(var_29_float, var_30_cvector, var_31_cvector)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	var_33_cvector = var_31_cvector - var_30_cvector;
	var_29_float = var_33_cvector | var_33_cvector;
	return 2;
}


func_2257(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	AddItem(var_20_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_20_bool, "alpha_pills", (int)0, (int)2);
	func_2233();
	var_47_bool = 0; var_48_object = Obj();
	var_18_object = var_48_object;
	func_1493(var_47_bool, var_48_object);
	if(var_47_bool != 0) {
		var_51_bool = 0; var_52_object = Obj(); var_53_float = 0;
		var_18_object = var_52_object;
		func_2022(var_51_bool, var_52_object, (float)-0.20000000298023224);
	}
	var_89_object = Obj();
	var_18_object = var_89_object;
	TaskCall(4);
	func_1195(var_89_object);
	TaskReturn();
	return 2;
}


func_2004(var_441_float, var_442_float, var_443_float)
{
	var_446_bool = var_442_float < var_443_float;
	if(var_446_bool != 0) {
		var_442_float = var_441_float;
	} else {
		var_443_float = var_441_float;
	}
	return 0;
	
}


func_1493(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	IsPlayerActor(var_48_object, var_50_bool);
	var_50_bool = var_47_bool;
	return 2;
}


func_1498(var_70_bool, var_71_object, var_72_string)
{
	var_73_bool = 0; var_74_bool = 0;
	var_77_bool = IsFuncExist(var_71_object, "HasProperty", (int)2);
	var_78_bool = var_77_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_70_bool = 0;
		return 2;
	}
	@@var_71_object:HasProperty(var_72_string, var_74_bool);
	var_74_bool = var_70_bool;
	return 2;
}


func_2011(var_80_float, var_81_float, var_82_float, var_83_float)
{
	var_84_bool = var_81_float < var_82_float;
	if(var_84_bool != 0) {
		var_82_float = var_80_float;
		return 0;
	}
	var_85_bool = var_81_float > var_83_float;
	if(var_85_bool != 0) {
		var_83_float = var_80_float;
		return 0;
	}
	var_81_float = var_80_float;
	return 0;
}


func_1510(var_62_bool, var_63_object, var_64_string, var_65_float, var_66_float, var_67_float)
{
	var_68_float = 0; var_69_float = 0;
	var_70_bool = 0; var_71_object = Obj(); var_72_string = "";
	var_63_object = var_71_object;
	var_64_string = var_72_string;
	func_1498(var_70_bool, var_71_object, var_72_string);
	var_79_bool = var_70_bool == 0; //@nz
	if(var_79_bool != 0) {
		var_62_bool = 0;
		return 2;
	}
	@@var_63_object:GetProperty(var_64_string, var_69_float);
	var_80_float = 0; var_81_float = 0; var_82_float = 0; var_83_float = 0;
	var_81_float = var_69_float + var_65_float;
	var_66_float = var_82_float;
	var_67_float = var_83_float;
	func_2011(var_80_float, var_81_float, var_82_float, var_83_float);
	@@var_63_object:SetProperty(var_64_string, var_80_float);
	var_62_bool = 1;
	return 2;
}


func_2022(var_51_bool, var_52_object, var_53_float)
{
	var_54_bool = var_52_object == 0; //@nz
	if(var_54_bool != 0) {
		var_51_bool = 0;
		return 0;
	}
	var_56_bool = var_53_float > (int)0;
	if(var_56_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_87_bool = var_53_float < (int)0;
		if(var_87_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2043;
		}
		var_51_bool = 0;
		return 0;
	}
Label_2043:
	var_58_float = 0;
	var_53_float = var_58_float;
	func_2074(var_58_float);
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; var_65_float = 0; var_66_float = 0; var_67_float = 0;
	var_52_object = var_63_object;
	var_53_float = var_65_float;
	func_1510(var_62_bool, var_63_object, "reputation", var_65_float, (float)0, (float)1);
	var_51_bool = 1;
	return 0;
	
}


func_744(var_0_object, var_291_bool, var_292_float)
{
	var_293_bool = 0; var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_float = 0; var_298_bool = 0; var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_float = 0;
	
Label_745:
	IsAnimationPlaying(var_298_bool);
	var_303_bool = var_298_bool == 0; //@nz
	if(var_303_bool != 0) {
	} else {
		var_304_bool = 0;
		func_815(var_304_bool);
		if(var_304_bool != 0) {
			var_291_bool = 1;
			return 10;
		}
		var_347_bool = 0; var_348_object = Obj();
		var_348_object = var_0_object;
		func_1646(var_347_bool, var_348_object);
		var_349_bool = var_347_bool == 0; //@nz
		if(var_349_bool != 0) {
			var_291_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_299_cvector);
		GetPFPosition(var_300_cvector);
		var_301_cvector = var_299_cvector - var_300_cvector;
		var_302_float = var_301_cvector | var_301_cvector;
		var_350_float = var_292_float * var_292_float;
		var_351_bool = var_302_float < var_350_float;
		if(var_351_bool != 0) {
			var_352_bool = 0; var_353_float = 0;
			var_292_float = var_353_float;
			func_580(var_301_cvector, var_302_float, var_352_bool, var_353_float);
			var_291_bool = 1;
			sync();
			goto Label_745;
		}
		return 10;
	}
	func_919(var_302_float);
	var_291_bool = 0;
	return 10;
	
}


func_1002(var_2_object)
{
	KillTimer((int)1);
	var_19_object = var_2_object;
	if(var_19_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1168(var_17_bool);
	return 0;
}


func_1782(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	GetScene(var_30_object);
	AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	var_34_object = Obj();
	var_23_object = var_34_object;
	func_1670(var_34_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_506(var_1_object, var_2_object, var_4_bool)
{
	var_56_bool = 0; var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_bool = 0; var_61_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_508:
	var_65_int = var_1_object + (int)1;
	var_66_int = "attack_begin" + var_65_int;
	HasAnimation(var_59_bool, "all", var_66_int);
	var_67_bool = var_59_bool == 0; //@nz
	if(var_67_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_508;
	}
	var_2_object = 0;
	
Label_522:
	var_70_int = var_2_object + (int)1;
	var_71_int = "attack" + var_70_int;
	IsExisting3DSound(var_60_bool, var_71_int);
	var_72_bool = var_60_bool == 0; //@nz
	if(var_72_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_522;

	}
	GetAnimationOffset(var_61_cvector, "all", "bjump");
	var_75_float = GetByIndex(var_61_cvector, 2);
	var_4_bool = -var_75_float;
	return 6;
	
}


func_1532(var_403_float, var_404_object, var_405_float, var_406_int)
{
	var_410_int = 0; var_411_string = ""; var_412_int = 0; var_413_float = 0; var_414_float = 0; var_415_float = 0; var_416_int = 0; var_417_string = ""; var_418_int = 0; var_419_float = 0; var_420_float = 0; var_421_float = 0;
	var_422_bool = 0; var_423_object = Obj(); var_424_string = "";
	var_404_object = var_423_object;
	func_1498(var_422_bool, var_423_object, "health");
	var_425_bool = var_422_bool == 0; //@nz
	if(var_425_bool != 0) {
		var_403_float = 0.0;
		return 12;
	}
	var_426_bool = 0; var_427_object = Obj(); var_428_string = "";
	var_404_object = var_427_object;
	func_1498(var_426_bool, var_427_object, "armor");
	var_429_bool = var_426_bool == 0; //@nz
	if(var_429_bool != 0) {
		var_416_int = 0;
	} else {
			@@var_404_object:GetProperty("armor", var_416_int);
	}
	var_431_string = ""; var_432_int = 0;
	var_406_int = var_432_int;
	func_1472(var_431_string, var_432_int);
	var_417_string = "armor_" + var_431_string;
	var_437_bool = 0; var_438_object = Obj(); var_439_string = "";
	var_404_object = var_438_object;
	var_417_string = var_439_string;
	func_1498(var_437_bool, var_438_object, var_439_string);
	var_440_bool = var_437_bool == 0; //@nz
	if(var_440_bool != 0) {
		var_418_int = 0;
	} else {
		@@var_404_object:GetProperty(var_417_string, var_418_int);

	}
	var_441_float = 0; var_442_float = 0; var_443_float = 0;
	var_444_int = var_416_int + var_418_int;
	var_442_float = var_444_int / (float)100.0;
	func_2004(var_441_float, var_442_float, (float)1);
	var_441_float = var_419_float;
	@@var_404_object:GetProperty("health", var_420_float);
	var_449_int = (int)1 - var_419_float;
	var_421_float = var_405_float * var_449_int;
	var_451_float = 0; var_452_float = 0; var_453_float = 0; var_454_float = 0;
	var_452_float = var_420_float - var_421_float;
	func_2011(var_451_float, var_452_float, (float)0, (float)1);
	@@var_404_object:SetProperty("health", var_451_float);
	var_457_bool = 0; var_458_object = Obj();
	var_404_object = var_458_object;
	func_1493(var_457_bool, var_458_object);
	if(var_457_bool != 0) {
		var_459_float = 0;
		var_459_float = -var_421_float;
		func_2057(var_459_float);
	}
	var_421_float = var_403_float;
	return 12;
	
}


