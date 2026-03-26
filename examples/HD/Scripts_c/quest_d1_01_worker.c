// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsPlayerActor/2,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FindActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d1_01|W:attack|W:cleanup|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x129
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0xfa vars=object
// @EVENT_17: op=0x105 vars=object
// @EVENT_26: op=0x110 vars=string
// @EVENT_5: op=0x15a vars=
// @EVENT_6: op=0x15f vars=
// @TASK_3: vars=object,int,int,bool,float,int params=1
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_7: op=0x4a0 vars=int
// @EVENT_1: op=0x4bb vars=object
// @EVENT_2: op=0x4ca vars=object
// @EVENT_10: op=0x550 vars=object
// @EVENT_41: op=0x55b vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x57e vars=object
// @EVENT_22: op=0x5fd vars=object,int,float,float
// @EVENT_16: op=0x5ff vars=object,string
// @EVENT_41: op=0x601 vars=object
// @STANDALONE_EVENT_22: op=0x8a1 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x8a9 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x8b3 vars=object,string
// @STANDALONE_EVENT_41: op=0x8c0 vars=object
// @STANDALONE_EVENT_6: op=0x8c6 vars=
// @PE: 0x4a,0x84,0x9a,0xfa,0x110,0x152,0x1c7,0x1d3,0x1d6,0x467,0x4a0,0x4bb,0x4ca,0x53e,0x550,0x55b,0x564,0x56f,0x5e3,0x5fd,0x5ff,0x601,0x603,0x809,0x810,0x864,0x882,0x899,0x8a1,0x8a9,0x8c0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	if((int)1 != 0) {
		func_1993();
		var_20_bool = var_16_bool == (int)22775;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_2148();
		}
		var_30_bool = var_15_object == (int)22657;
		if(var_30_bool != 0) {
			var_31_string = "";
			func_132(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)521496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521497, (int)34596, (int)22658);
			@@@var_0_object:AddReply((int)533084, (int)-1, (int)34595);
			return 0;
		}
		var_56_bool = var_15_object == (int)34596;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_132(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533085);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533086, (int)34598, (int)34597);
			@@@var_0_object:AddReply((int)533088, (int)-1, (int)34599);
			return 0;
		}
		var_66_bool = var_15_object == (int)34598;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_132(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521608, (int)-1, (int)22775);
			@@@var_0_object:AddReply((int)533089, (int)-1, (int)34600);
			return 0;
		}
		var_3_string = true;
		var_75_bool = 0;
		func_2199(var_75_bool);
		if(var_75_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_450();
	var_16_int = 0; var_17_object = Obj();
	var_15_bool = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_bool, var_17_bool);
	var_18_bool = var_17_bool;
	if(var_18_bool != 0) {
		var_19_bool = 0; var_20_string = ""; var_21_string = "";
		func_2092(var_19_bool, "quest_d1_01", "attack");
	}
	return 2;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_17_bool = var_15_bool == "attack";
	if(var_17_bool != 0) {
		func_450();
		func_318(var_15_bool);
		var_26_object = Obj();
		func_1560(Obj());
		var_27_object = var_26_object;
		TaskCall(3);
		func_455(var_26_object);
		TaskReturn();
	} else {
		var_531_string = "";
		var_15_bool = var_531_string;
		func_338(var_531_string);
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
		func_367(var_17_bool);
		if(var_17_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_18_object = Obj();
		func_2041(var_18_object);
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
		func_2104(var_18_object);
	} else {
		var_23_int = 0;
		var_15_int = var_23_int;
		func_1342(var_14_bool, var_15_int, var_23_int);
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
		func_1982(var_19_object);
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
	func_1198(var_15_object);
	var_15_object = Obj();
	func_2240();
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
		func_2178(var_19_object);
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
	func_1766(var_19_object, var_20_int, var_21_float);
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
	func_1834(var_23_float, var_24_cvector, var_25_cvector);
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
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_2201(var_16_object);
	return 0;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj();
	func_2041(var_15_object);
	RemoveActor(var_15_object);
	Hold();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_float = 0; var_16_float = 0;
	
Label_298:
	var_17_bool = 0;
	func_1859(var_17_bool);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		Hold();
		goto Label_298;
	}
	rand(var_16_float, (int)3);
	var_23_int = var_16_float + (int)3;
	Sleep(var_23_int);
	func_369();
	goto Label_298;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_1864(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_2193(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_2191(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_2195(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_2197(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_2155(var_79_int);
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
	var_137_bool = var_26_bool == 0; //@nz
	if(var_137_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_1933();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1027(var_0_object, var_4_bool, var_327_bool)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0);
	GetScene(var_333_object);
	var_334_bool = 0;
	
Label_1031:
	var_338_cvector = CVector(0,0,0); var_339_object = Obj();
	var_339_object = var_0_object;
	func_1553(var_338_cvector, var_339_object);
	var_344_int = -var_338_cvector;
	FindDirLength(var_335_float, var_344_int, var_4_bool);
	var_345_bool = var_335_float < var_4_bool;
	if(var_345_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_336_cvector);
		GetPFPosition(var_337_cvector);
		WaitForAnimEnd();
		func_1115(var_337_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_334_bool = 1;
		var_349_bool = 0;
		func_983(var_337_cvector, var_349_bool);
		var_350_bool = var_349_bool == 0; //@nz
		if(var_350_bool != 0) {
			goto Label_1069;
		}
		goto Label_1031;
	}
Label_1069:
	var_334_bool = var_327_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1539(var_435_string, var_436_int)
{
	var_438_bool = var_436_int == (int)2;
	if(var_438_bool != 0) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x60f";
	}
	var_440_bool = var_436_int == (int)1;
	if(var_440_bool != 0) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
	return 0;
}


func_2057(var_445_float, var_446_float, var_447_float)
{
	var_450_bool = var_446_float < var_447_float;
	if(var_450_bool != 0) {
		var_446_float = var_445_float;
	} else {
		var_447_float = var_445_float;
	}
	return 0;
	
}


func_2064(var_455_float, var_456_float, var_457_float, var_458_float)
{
	var_459_bool = var_456_float < var_457_float;
	if(var_459_bool != 0) {
		var_457_float = var_455_float;
		return 0;
	}
	var_460_bool = var_456_float > var_458_float;
	if(var_460_bool != 0) {
		var_458_float = var_455_float;
		return 0;
	}
	var_456_float = var_455_float;
	return 0;
}


func_1553(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_1560(var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj();
	FindActor(var_29_object, "player");
	var_29_object = var_27_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2075(var_463_float)
{
	var_464_object = Obj(); var_465_object = Obj();
	CreateFloatVector(var_465_object);
	@@var_465_object:add(var_463_float);
	var_467_bool = var_463_float < (int)0;
	if(var_467_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_465_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1567(var_162_bool, var_163_object)
{
	var_164_bool = 0; var_165_bool = 0;
	IsPlayerActor(var_163_object, var_165_bool);
	var_165_bool = var_162_bool;
	return 2;
}


func_1572(var_50_bool, var_51_object, var_52_string)
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


func_2092(var_19_bool, var_20_string, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj();
	FindActor(var_23_object, var_20_string);
	var_24_bool = var_23_object == 0; //@ne
	if(var_24_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	Trigger(var_23_object, var_21_string);
	var_19_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1072(var_0_object, var_258_bool)
{
	var_259_bool = 0; var_260_bool = 0;
	var_263_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_263_bool != 0) {
		@@@var_0_object:IsAttacking(var_260_bool);
		var_260_bool = var_258_bool;
		return 2;
	}
	var_258_bool = 0;
	return 2;
}


func_1584(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0;
	var_426_bool = 0; var_427_object = Obj(); var_428_string = "";
	var_408_object = var_427_object;
	func_1572(var_426_bool, var_427_object, "health");
	var_429_bool = var_426_bool == 0; //@nz
	if(var_429_bool != 0) {
		var_407_float = 0.0;
		return 12;
	}
	var_430_bool = 0; var_431_object = Obj(); var_432_string = "";
	var_408_object = var_431_object;
	func_1572(var_430_bool, var_431_object, "armor");
	var_433_bool = var_430_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_420_int = 0;
	} else {
			@@var_408_object:GetProperty("armor", var_420_int);
	}
	var_435_string = ""; var_436_int = 0;
	var_410_int = var_436_int;
	func_1539(var_435_string, var_436_int);
	var_421_string = "armor_" + var_435_string;
	var_441_bool = 0; var_442_object = Obj(); var_443_string = "";
	var_408_object = var_442_object;
	var_421_string = var_443_string;
	func_1572(var_441_bool, var_442_object, var_443_string);
	var_444_bool = var_441_bool == 0; //@nz
	if(var_444_bool != 0) {
		var_422_int = 0;
	} else {
		@@var_408_object:GetProperty(var_421_string, var_422_int);

	}
	var_445_float = 0; var_446_float = 0; var_447_float = 0;
	var_448_int = var_420_int + var_422_int;
	var_446_float = var_448_int / (float)100.0;
	func_2057(var_445_float, var_446_float, (float)1);
	var_445_float = var_423_float;
	@@var_408_object:GetProperty("health", var_424_float);
	var_453_int = (int)1 - var_423_float;
	var_425_float = var_409_float * var_453_int;
	var_455_float = 0; var_456_float = 0; var_457_float = 0; var_458_float = 0;
	var_456_float = var_424_float - var_425_float;
	func_2064(var_455_float, var_456_float, (float)0, (float)1);
	@@var_408_object:SetProperty("health", var_455_float);
	var_461_bool = 0; var_462_object = Obj();
	var_408_object = var_462_object;
	func_1567(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		var_463_float = 0;
		var_463_float = -var_425_float;
		func_2075(var_463_float);
	}
	var_425_float = var_407_float;
	return 12;
	
}


func_2104(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	IsPlayerActor(var_18_object, var_20_bool);
	var_21_bool = var_20_bool;
	if(var_21_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1083(var_2_object, var_5_bool)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0;
	var_379_bool = var_2_object == 0; //@nz
	if(var_379_bool != 0) {
		return 4;
	}
	var_380_bool = var_5_bool;
	if(var_380_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_383_bool = var_5_bool > (int)0;
		if(var_383_bool != 0) {
			return 4;
		}
	}
	rand(var_377_float);
	var_384_float = 0;
	func_1133(var_384_float);
	var_385_bool = var_377_float < var_384_float;
	if(var_385_bool != 0) {
		irand(var_378_int, var_2_object);
		var_378_int = var_378_int + (int)1;
		var_388_int = "attack" + var_378_int;
		Speak(var_388_int);
		var_389_int = 0;
		func_1131(var_389_int);
		var_5_bool = var_389_int;
	}
	return 4;
}


func_2113()
{
	var_368_object = Obj(); var_369_object = Obj();
	GetScene(var_369_object);
	var_371_object = Obj();
	func_2041(var_371_object);
	BroadcastMessage("battle", var_371_object, var_369_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_string = "";
		func_132(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)521496);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)521497, (int)34596, (int)22658);
		@@@var_0_object:AddReply((int)533084, (int)-1, (int)34595);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_119_bool = 0;
	func_2199(var_119_bool);
	if(var_119_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_120_string = var_3_string;
		if(var_120_string != 0) {
		} else {
			var_121_string = "";
			var_121_string = var_2_object;
			func_1951(var_121_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_134_string = var_3_string;
		if(var_134_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_2124(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_2131(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_2133:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_2124(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_2133;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_1115(var_0_object)
{
	var_131_object = Obj();
	var_131_object = var_0_object;
	func_2104(var_131_object);
	return 0;
}


func_1120(var_472_int)
{
	var_472_int = 0;
	return 0;
}


func_1122()
{
	var_264_string = "";
	func_2000("attack_stay");
	return 0;
}


func_2148()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = "";
	func_2092(var_23_bool, "quest_d1_01", "attack");
	return 0;
}


func_1127()
{
	return 0;
}


func_1129(var_497_bool)
{
	var_497_bool = 1;
	return 0;
}


func_2155(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x87a";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_1131(var_389_int)
{
	var_389_int = 1;
	return 0;
}


func_1133(var_384_float)
{
	var_384_float = 0.5;
	return 0;
}


func_1135(var_2_object, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool)
{
	var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; var_150_bool = 0;
	var_151_object = Obj();
	var_139_object = var_151_object;
	func_2104(var_151_object);
	SetTimer((int)1, (int)5);
	CanSee(var_149_bool, var_139_object);
	var_154_bool = var_149_bool;
	if(var_154_bool != 0) {
		var_2_object = true;
		var_155_object = Obj();
		var_139_object = var_155_object;
		func_1982(var_155_object);
	} else {
		var_2_object = false;
	}
	var_162_bool = 0; var_163_object = Obj();
	var_139_object = var_163_object;
	func_1567(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		var_166_object = Obj();
		func_2041(var_166_object);
		SendPlayerEnemy(var_139_object, var_166_object);
	}
	var_167_bool = 0; var_168_object = Obj(); var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_bool = 0;
	var_139_object = var_168_object;
	var_140_float = var_169_float;
	var_141_float = var_170_float;
	var_142_bool = var_171_bool;
	var_143_bool = var_172_bool;
	func_1240(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_150_bool;
	var_218_object = var_2_object;
	if(var_218_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_150_bool = var_138_bool;
	return 4;
	
}


func_1657(var_43_bool, var_44_object)
{
	var_45_bool = 0; var_46_bool = 0;
	@@var_44_object:IsDead(var_46_bool);
	var_46_bool = var_43_bool;
	return 2;
}


func_2172(var_20_int)
{
	var_21_int = 0; var_22_int = 0;
	GetVariable("branch", var_22_int);
	var_22_int = var_20_int;
	return 2;
}


func_1662(var_32_bool, var_33_object)
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
		func_1657(var_43_bool, var_44_object);
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


func_2178(var_19_object)
{
	var_20_int = 0;
	func_2172(var_20_int);
	var_25_bool = var_20_int == (int)1;
	if(var_25_bool != 0) {
		WorkWithCorpse(var_19_object);
	} else {
		Barter(var_19_object);
	}
	return 0;
	
}


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0;
	func_2199(var_96_bool);
	var_97_bool = var_96_bool == 0; //@nz
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_bool = var_95_string == var_2_object;
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_string = ""; var_100_bool = 0;
	var_95_string = var_99_string;
	var_102_bool = var_95_string == "";
	if(var_102_bool != 0) {
		var_100_bool = 0;
	} else {
		var_100_bool = 1;
	}
	func_1967(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	return 0;
	
}


func_2191(var_76_int)
{
	var_76_int = 515568;
	return 0;
}


func_2193(var_75_int)
{
	var_75_int = 503353;
	return 0;
}


func_2195(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_2197(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_2199(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_2201(var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	TaskCall(5);
	func_1391(var_17_object);
	TaskReturn();
	return 0;
}


func_1698(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	var_32_bool = 0; var_33_object = Obj();
	var_29_object = var_33_object;
	func_1662(var_32_bool, var_33_object);
	var_49_bool = var_32_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_29_object = var_51_object;
	func_1572(var_50_bool, var_51_object, "noaccess");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_28_bool = 1;
		return 2;
	}
	@@var_29_object:GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == (int)0;
	return 2;
}


func_1198(var_2_object)
{
	KillTimer((int)1);
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1364(var_15_object);
	return 0;
}


func_1722(var_32_object)
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


func_702(var_1_object, var_2_object, var_4_bool)
{
	var_62_bool = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_704:
	var_71_int = var_1_object + (int)1;
	var_72_int = "attack_begin" + var_71_int;
	HasAnimation(var_65_bool, "all", var_72_int);
	var_73_bool = var_65_bool == 0; //@nz
	if(var_73_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_704;
	}
	var_2_object = 0;
	
Label_718:
	var_76_int = var_2_object + (int)1;
	var_77_int = "attack" + var_76_int;
	IsExisting3DSound(var_66_bool, var_77_int);
	var_78_bool = var_66_bool == 0; //@nz
	if(var_78_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_718;

	}
	GetAnimationOffset(var_67_cvector, "all", "bjump");
	var_81_float = GetByIndex(var_67_cvector, 2);
	var_4_bool = -var_81_float;
	return 6;
	
}


func_1240(var_0_object, var_1_object, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool)
{
	var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_object = Obj(); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_float = 0; var_188_object = Obj();
	var_0_object = false;
	var_1_object = var_168_object;
	var_172_bool = var_182_bool;
	
Label_1244:
	var_189_bool = 0; var_190_object = Obj();
	var_168_object = var_190_object;
	func_1380(var_189_bool, var_190_object);
	var_193_bool = var_189_bool == 0; //@nz
	if(var_193_bool != 0) {
		var_167_bool = 0;
		return 16;
	}
	@@var_168_object:GetPosition(var_184_cvector);
	GetPosition(var_185_cvector);
	var_186_cvector = var_184_cvector - var_185_cvector;
	var_187_float = var_186_cvector | var_186_cvector;
	var_194_bool = 0;
	var_194_bool = 0;
	var_196_bool = var_170_float > (int)0;
	if(var_196_bool != 0) {
		var_197_float = var_170_float * var_170_float;
		var_198_bool = var_187_float > var_197_float;
		if(var_198_bool != 0) {
			var_194_bool = 1;
		}
	}
	if(var_194_bool != 0) {
		Stop();
		var_167_bool = 0;
		return 16;
	}
	var_199_float = var_169_float * var_169_float;
	var_200_bool = var_187_float > var_199_float;
	if(var_200_bool != 0) {
		@@var_168_object:GetPFPosition(var_184_cvector);
		FindPathTo(var_188_object, var_184_cvector);
		var_201_bool = var_188_object != 0; //@nn
		if(var_201_bool != 0) {
			var_188_object = var_183_object;
			var_188_object = 0;
		}
		var_202_bool = var_183_object != 0; //@nn
		if(var_202_bool != 0) {
			var_203_bool = var_182_bool;
			if(var_203_bool == 0) goto Label_1293;
			var_182_bool = 0;
			RotatePath(var_183_object, var_181_bool);
			var_204_bool = var_181_bool == 0; //@nz
			if(var_204_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_207_string = "";
				func_1387(var_207_string);
				var_208_string = "";
				func_1389(var_208_string);
				FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
				var_209_bool = var_181_bool == 0; //@nz
				if(var_209_bool != 0) {
					var_210_object = var_0_object;
					if(var_210_object != 0) {
						var_183_object = 0;
						goto Label_1340;
					EMIT "GOTO 0x521";
					}
				} else {
					var_183_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_181_bool);
					var_213_bool = var_181_bool == 0; //@nz
					if(var_213_bool != 0) {
						var_214_object = var_0_object;
						if(var_214_object != 0) {
							var_183_object = 0;
							goto Label_1340;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1340;
	}
			var_188_object = 0;
			goto Label_1338;

		Label_1338:
			var_183_object = 0;

		}
		goto Label_1244;
	}
Label_1340:
	var_167_bool = !var_0_object;
	return 16;
	
}


func_737(var_0_object, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0;
	var_402_float = var_393_float * (float)0.8999999761581421;
	GetVictim(var_402_float, var_398_object);
	ReportAttack(var_0_object);
	var_403_bool = var_398_object == var_0_object;
	if(var_403_bool != 0) {
		var_404_float = 0; var_405_object = Obj(); var_406_int = 0;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_467(var_406_int);
		var_404_float = var_399_float;
		var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0;
		var_398_object = var_408_object;
		var_399_float = var_409_float;
		var_411_int = 0; var_412_object = Obj(); var_413_int = 0;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_470(var_413_int);
		var_411_int = var_410_int;
		func_1584(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		var_472_int = 0;
		func_1120(var_472_int);
		ReportHit(var_0_object, var_472_int, var_400_float, var_399_float);
		var_473_object = Obj(); var_474_float = 0;
		var_398_object = var_473_object;
		var_400_float = var_474_float;
		func_1127();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1766(var_19_object, var_20_int, var_21_float)
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
		func_1553(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_2047(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_1795:
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
			goto Label_1795;
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
			func_1834(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_1722(var_109_object);
	return 18;
	
}


func_776(var_0_object, var_1_object, var_356_bool, var_357_float)
{
	var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = "";
	func_1115(var_365_string);
	irand(var_362_int, var_1_object);
	var_362_int = var_362_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2113();
	var_374_int = "attack_begin" + var_362_int;
	PlayAnimation("all", var_374_int);
	WaitForAnimEnd();
	func_1083(var_364_int, var_365_string);
	var_390_bool = 0; var_391_object = Obj();
	var_391_object = var_0_object;
	func_1698(var_390_bool, var_391_object);
	var_392_bool = var_390_bool == 0; //@nz
	if(var_392_bool != 0) {
		StopAsync();
		var_356_bool = 0;
		return 8;
	}
	var_393_float = 0; var_394_int = 0;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_737(var_365_string, var_393_float, var_394_int);
	var_477_int = "attack_middle" + var_362_int;
	HasAnimation(var_363_bool, "all", var_477_int);
	var_478_bool = var_363_bool;
	if(var_478_bool != 0) {
		func_2113();
		var_481_int = "attack_middle" + var_362_int;
		PlayAnimation("all", var_481_int);
		WaitForAnimEnd();
		func_1115(var_365_string);
		var_482_bool = 0; var_483_object = Obj();
		var_483_object = var_0_object;
		func_1698(var_482_bool, var_483_object);
		var_484_bool = var_482_bool == 0; //@nz
		if(var_484_bool != 0) {
			StopAsync();
			var_356_bool = 0;
			return 8;
		}
		var_485_float = 0; var_486_int = 0;
		var_357_float = var_485_float;
		var_362_int = var_486_int;
		func_737(var_365_string, var_485_float, var_486_int);
		var_364_int = 1;

	Label_853:
		var_488_int = "attack_middle" + var_362_int;
		var_490_int = var_488_int + "_";
		var_365_string = var_490_int + var_364_int;
		HasAnimation(var_363_bool, "all", var_365_string);
		var_492_bool = var_363_bool == 0; //@nz
		if(var_492_bool != 0) {
		} else {
			func_2113();
			PlayAnimation("all", var_365_string);
			WaitForAnimEnd();
			func_1115(var_365_string);
			var_508_bool = 0; var_509_object = Obj();
			var_509_object = var_0_object;
			func_1698(var_508_bool, var_509_object);
			var_510_bool = var_508_bool == 0; //@nz
			if(var_510_bool != 0) {
				StopAsync();
				var_356_bool = 0;
				var_511_float = 0; var_512_int = 0;
				var_357_float = var_511_float;
				var_362_int = var_512_int;
				func_737(var_365_string, var_511_float, var_512_int);
				var_364_int = var_364_int + (int)1;
				goto Label_853;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_496_int = "attack_end" + var_362_int;
	PlayAnimation("all", var_496_int);
	var_497_bool = 0;
	func_1129(var_497_bool);
	if(var_497_bool != 0) {
		var_498_bool = 0; var_499_float = 0;
		func_913(var_498_bool, (float)0.75);
		StopAsync();
	}
	var_356_bool = 1;
	return 8;
	
}


func_1834(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_1722(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1848(var_241_object)
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0);
	@@var_241_object:GetPosition(var_245_cvector);
	GetPosition(var_246_cvector);
	var_247_cvector = var_245_cvector - var_246_cvector;
	var_248_float = GetByIndex(var_247_cvector, 0);
	var_249_float = GetByIndex(var_247_cvector, 2);
	RotateAsync(var_248_float, var_249_float);
	return 6;
}


func_318(var_0_object)
{
	var_18_bool = 0; var_19_bool = 0;
	var_0_object = true;
	IsLoaded(var_19_bool);
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_19_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_22_bool = 0;
		func_367(var_22_bool);
		if(var_22_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_23_object = Obj();
		func_2041(var_23_object);
		RemoveActor(var_23_object);
	}
	return 2;
}


func_1342(var_0_object, var_1_object, var_23_int)
{
	var_25_bool = var_23_int != (int)0;
	if(var_25_bool != 0) {
		return 0;
	}
	var_26_bool = 0; var_27_object = Obj();
	var_27_object = var_1_object;
	func_1380(var_26_bool, var_27_object);
	var_62_bool = var_26_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1859(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
	return 2;
}


func_1864(var_27_bool, var_28_object, var_29_float)
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
	func_2047(var_54_cvector, var_55_cvector);
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
	func_2199(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_1927;
		LookAsyncCamera("head");
	}
Label_1927:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_338(var_531_string)
{
	var_533_bool = var_531_string == "cleanup";
	if(var_533_bool != 0) {
		func_318(var_531_string);
	}
	return 0;
}


func_1364(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1380(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_1698(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
	return 0;
}


func_1387(var_207_string)
{
	var_207_string = "walk";
	return 0;
}


func_1389(var_208_string)
{
	var_208_string = "run";
	return 0;
}


func_367(var_17_bool)
{
	var_17_bool = 1;
	return 0;
}


func_1391(var_17_object)
{
	EventDisable(0);
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_1416(var_18_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1402:
	Hold();
	goto Label_1402;
}
EMIT "Return(); Pop(0)";


func_369()
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_1859(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 14;
	}
	func_2131((int)0);
	var_40_int = var_31_int;
	var_32_int = 0;
	
Label_383:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_32_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_1859(var_56_bool);
		if(var_56_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		irand(var_33_int, (int)3);
		var_59_bool = var_33_int == (int)0;
		if(var_59_bool != 0) {
			var_60_int = var_31_int;
			if(var_60_int == 0) goto Label_416;
			irand(var_34_int, var_31_int);
			var_62_string = ""; var_63_int = 0;
			var_34_int = var_63_int;
			func_2124(var_62_string, var_63_int);
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
						goto Label_445;
					}
					goto Label_434;
				}
				var_74_int = var_32_int;
				if(var_74_int == 0) goto Label_434;
				goto Label_445;
		}
		Label_434:
			var_65_bool = 0;
			func_448(var_65_bool);
			var_66_bool = var_65_bool == 0; //@nz
			if(var_66_bool != 0) {
				goto Label_445;
			}
			ResetAAS();
			var_32_int = var_32_int + (int)1;
			goto Label_383;

		}
	}
Label_445:
	ResetAAS();
	return 14;
	
}


func_1416(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0);
	var_39_bool = var_18_object == 0; //@ne
	if(var_39_bool != 0) {
		var_40_string = "";
		func_1507("fdie");
	} else {
		@@var_18_object:GetPosition(var_29_cvector);
		GetPosition(var_30_cvector);
		GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_74_float = var_72_float * var_73_float;
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		var_77_float = var_75_float * var_76_float;
		var_78_int = var_74_float + var_77_float;
		var_80_bool = var_78_int >= (int)0;
		if(var_80_bool != 0) {
			var_33_string = "fdie";
		} else {
				var_33_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", (int)2);
		if(var_83_bool != 0) {
			@@var_18_object:HasScriptProperty(var_35_bool, "Owner");
			var_85_bool = var_35_bool;
			if(var_85_bool != 0) {
				@@var_18_object:GetScriptProperty(var_34_object, "Owner");
				var_87_bool = var_34_object == 0; //@ne
				if(var_87_bool != 0) {
					var_18_object = var_34_object;
				}
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", (int)1);
		if(var_90_bool != 0) {
			@@var_34_object:GetEyesHeight(var_37_float);
			var_38_cvector = CVector(0.0, 0.0, 0.0);
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = 1;
		} else {
			var_36_bool = 0;

		}
		var_93_string = "";
		var_33_string = var_93_string;
		func_2000(var_93_string);
		PlayAnimation("all", var_33_string);
		WaitForAnimEnd();
		var_95_bool = var_36_bool;
		if(var_95_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_33_string);
		RemoveEnvelope();
		var_34_object = 0;
	}
	return 20;
	
}


func_1933()
{
	var_139_bool = 0; var_140_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_142_bool = 0;
	func_2199(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		HasAnimationTrack(var_140_bool, "head");
		var_144_bool = var_140_bool;
		if(var_144_bool == 0) goto Label_1950;
		UnlookAsync("head");
	}
Label_1950:
	return 2;
	
}


func_913(var_498_bool, var_499_float)
{
	var_500_float = 0; var_501_bool = 0; var_502_float = 0; var_503_bool = 0;
	rand(var_502_float);
	var_504_bool = var_502_float < var_499_float;
	if(var_504_bool != 0) {

	Label_918:
		IsAnimationPlaying(var_503_bool);
		var_505_bool = var_503_bool == 0; //@nz
		if(var_505_bool != 0) {
		} else {
			var_506_bool = 0;
			func_1011(var_506_bool);
			if(var_506_bool != 0) {
				var_498_bool = 1;
				sync();
				goto Label_918;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1115(var_503_bool);
	}
	goto Label_938;
	
Label_938:
	var_498_bool = 0;
	return 4;
	
}


func_1951(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0;
	lshHasAnimation(var_125_bool, var_121_string);
	var_128_bool = var_125_bool;
	if(var_128_bool != 0) {
		lshGetAnimTimes(var_121_string, var_126_float, var_127_float);
		lshPlayAnimation(var_126_float, var_127_float, (bool)0);
	} else {
		var_131_int = "Can't find lsh animation : " + var_121_string;
		Trace(var_131_int);
	}
	return 6;
	
}


func_940(var_0_object, var_295_bool, var_296_float)
{
	var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0;
	
Label_941:
	IsAnimationPlaying(var_302_bool);
	var_307_bool = var_302_bool == 0; //@nz
	if(var_307_bool != 0) {
	} else {
		var_308_bool = 0;
		func_1011(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = 1;
			return 10;
		}
		var_351_bool = 0; var_352_object = Obj();
		var_352_object = var_0_object;
		func_1698(var_351_bool, var_352_object);
		var_353_bool = var_351_bool == 0; //@nz
		if(var_353_bool != 0) {
			var_295_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_303_cvector);
		GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		var_354_float = var_296_float * var_296_float;
		var_355_bool = var_306_float < var_354_float;
		if(var_355_bool != 0) {
			var_356_bool = 0; var_357_float = 0;
			var_296_float = var_357_float;
			func_776(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = 1;
			sync();
			goto Label_941;
		}
		return 10;
	}
	func_1115(var_306_float);
	var_295_bool = 0;
	return 10;
	
}


func_1967(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0;
	lshHasAnimation(var_106_bool, var_99_string);
	var_109_bool = var_106_bool;
	if(var_109_bool != 0) {
		lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		var_111_int = "Can't find lsh animation : " + var_99_string;
		Trace(var_111_int);
	}
	return 6;
	
}


func_1982(var_19_object)
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


func_448(var_65_bool)
{
	var_65_bool = 1;
	return 0;
}


func_450()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_455(var_26_object)
{
	
Label_456:
	var_37_object = Obj(); var_38_bool = 0; var_39_float = 0;
	var_26_object = var_37_object;
	func_473(var_33_int, var_34_bool, var_35_float, var_36_int, var_26_object, var_37_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_456;
}
EMIT "Return(); Pop(0)";


func_1993()
{
	var_18_bool = 0;
	func_2199(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2000(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	IsExisting3DSound(var_50_bool, var_41_string);
	var_58_bool = var_50_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_51_int = 0;

	Label_2006:
		var_60_int = var_51_int + (int)1;
		var_61_int = var_41_string + var_60_int;
		IsExisting3DSound(var_52_bool, var_61_int);
		var_62_bool = var_52_bool == 0; //@nz
		if(var_62_bool != 0) {
		} else {
			var_51_int = var_51_int + (int)1;
			goto Label_2006;
		}
		var_63_bool = var_51_int == 0; //@nz
		if(var_63_bool != 0) {
			return 16;
		}
		irand(var_53_int, var_51_int);
		var_65_int = var_53_int + (int)1;
		var_41_string = var_41_string + var_65_int;
	}
	Is3DSoundLoaded(var_54_bool, var_41_string);
	var_66_bool = var_54_bool;
	if(var_66_bool != 0) {
		GetEyesHeight(var_55_float);
		GetDirection(var_56_cvector);
		var_57_cvector = var_56_cvector * (int)50;
		var_68_float = GetByIndex(var_57_cvector, 1);
		var_68_float = var_68_float + var_55_float;
		SetByIndex(var_57_cvector, 1) = var_68_float;
		PlayGlobalSound(var_41_string, var_57_cvector);
	}
	return 16;
	
}


func_467(var_404_float)
{
	var_404_float = 0.10000000149011612;
	return 0;
}


func_470(var_411_int)
{
	var_411_int = 0;
	return 0;
}


func_983(var_0_object, var_310_bool)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0;
	var_321_bool = 0; var_322_object = Obj();
	var_322_object = var_0_object;
	func_1698(var_321_bool, var_322_object);
	var_323_bool = var_321_bool == 0; //@nz
	if(var_323_bool != 0) {
		var_310_bool = 0;
		return 10;
	}
	var_324_bool = 0;
	func_1072(var_320_float, var_324_bool);
	if(var_324_bool != 0) {
		@@@var_0_object:GetPFPosition(var_316_cvector);
		GetPFPosition(var_317_cvector);
		var_318_cvector = var_316_cvector - var_317_cvector;
		var_319_float = var_318_cvector | var_318_cvector;
		@@@var_0_object:GetAttackDistance(var_320_float);
		var_320_float = var_320_float + (int)50;
		var_326_float = var_320_float * var_320_float;
		var_310_bool = var_319_float <= var_326_float;
		return 10;
	}
	var_310_bool = 0;
	return 10;
}


func_473(var_0_object, var_3_string, var_5_bool, var_37_object, var_38_bool, var_39_float, var_144_bool, var_236_bool)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_float = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_float = 0;
	func_702(var_59_cvector, var_60_bool, var_61_float);
	var_5_bool = 0;
	var_86_bool = IsFuncExist(var_37_object, "@GetAttackDistance", (int)1);
	if(var_86_bool != 0) {
		@@var_37_object:GetAttackDistance(var_51_float);
		var_51_float = var_51_float + (int)50;
	} else {
							var_39_float = var_51_float;
	}
	var_89_bool = var_51_float >= (int)150;
	if(var_89_bool != 0) {
		var_51_float = 150;
	}
	var_3_string = false;
	var_0_object = var_37_object;
	IsPlayerActor(var_0_object, var_54_bool);
	var_90_bool = var_54_bool;
	if(var_90_bool != 0) {
		PlayGlobalMusic("attack");
		var_92_object = Obj();
		func_2041(var_92_object);
		SendPlayerEnemy(var_37_object, var_92_object);
	}
	var_93_bool = var_38_bool;
	if(var_93_bool != 0) {
		var_55_bool = 0;
	} else {
						var_55_bool = 1;

	}
	var_56_float = (float)400.0 + var_51_float;
	
Label_513:
	var_95_bool = 0;
	var_95_bool = 0;
	var_96_bool = 0; var_97_object = Obj();
	var_97_object = var_0_object;
	func_1698(var_96_bool, var_97_object);
	if(var_96_bool != 0) {
		var_130_bool = var_3_string == 0; //@nz
		if(var_130_bool != 0) {
			var_95_bool = 1;
		}
	}
	if(var_95_bool != 0) {
		func_1115(var_61_float);
		@@@var_0_object:GetPFPosition(var_52_cvector);
		GetPFPosition(var_53_cvector);
		var_57_cvector = var_52_cvector - var_53_cvector;
		var_58_float = var_57_cvector | var_57_cvector;
		var_136_float = var_56_float * var_56_float;
		var_137_bool = var_58_float >= var_136_float;
		if(var_137_bool != 0) {
			var_138_bool = 0; var_139_object = Obj(); var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_bool = 0;
			var_139_object = var_0_object;
			var_51_float = var_140_float;
			TaskCall(4);
			func_1135(var_146_bool, var_138_bool, var_139_object, var_140_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_221_bool = var_144_bool == 0; //@nz
			if(var_221_bool != 0) {
			} else {
				var_55_bool = 0;
		} else {
				var_227_float = var_39_float * var_39_float;
				var_228_bool = var_58_float >= var_227_float;
				if(var_228_bool != 0) {
					@@@var_0_object:GetPFPosition(var_59_cvector);
					CanReachByPF(var_60_bool, var_59_cvector);
					var_229_bool = var_60_bool == 0; //@nz
					if(var_229_bool != 0) {
						var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0;
						var_231_object = var_0_object;
						var_51_float = var_232_float;
						TaskCall(4);
						func_1135(var_238_bool, var_230_bool, var_231_object, var_232_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_239_bool = var_236_bool == 0; //@nz
						if(var_239_bool != 0) {
							goto Label_685;
						}
						var_55_bool = 0;
						goto Label_513;
					}
					var_240_bool = var_55_bool == 0; //@nz
					if(var_240_bool != 0) {
						var_241_object = Obj();
						var_241_object = var_0_object;
						func_1848(var_241_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1115(var_61_float);
						StopAsync();
						var_55_bool = 1;
						var_252_bool = 0; var_253_object = Obj();
						var_253_object = var_0_object;
						func_1698(var_252_bool, var_253_object);
						var_254_bool = var_252_bool == 0; //@nz
						if(var_254_bool != 0) {
							goto Label_685;
						}
					}
					rand(var_61_float);
					var_255_bool = 0;
					var_257_bool = var_61_float < (float)0.25;
					if(var_257_bool != 1) {
						var_258_bool = 0;
						func_1072((bool)1, var_258_bool);
						if(var_258_bool != 1) {
							var_255_bool = 0;
						}
					}
					if(var_255_bool != 0) {
						Face(var_0_object);
						func_1122();
						PlayAnimation("all", "attack_stay");
						var_295_bool = 0; var_296_float = 0;
						var_39_float = var_296_float;
						func_940(var_61_float, var_295_bool, var_296_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1115(var_61_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_517_bool = 0;
						func_1072(var_61_float, var_517_bool);
						var_518_bool = var_517_bool == 0; //@nz
						if(var_518_bool == 0) goto Label_675;
						var_519_bool = 0; var_520_object = Obj();
						var_520_object = var_0_object;
						func_1698(var_519_bool, var_520_object);
						var_521_bool = var_519_bool == 0; //@nz
						if(var_521_bool != 0) {
							goto Label_685;
						}
						@@@var_0_object:GetPFPosition(var_52_cvector);
						GetPFPosition(var_53_cvector);
						var_57_cvector = var_52_cvector - var_53_cvector;
						var_58_float = var_57_cvector | var_57_cvector;
						var_522_float = var_39_float * var_39_float;
						var_523_bool = var_58_float < var_522_float;
						if(var_523_bool == 0) goto Label_675;
						var_524_bool = 0; var_525_float = 0;
						var_39_float = var_525_float;
						func_776(var_60_bool, var_61_float, var_524_bool, var_525_float);
						var_526_bool = var_524_bool == 0; //@nz
						if(var_526_bool == 0) goto Label_675;
						goto Label_685;
				}
					var_527_bool = 0; var_528_float = 0;
					var_39_float = var_528_float;
					func_776(var_60_bool, var_61_float, var_527_bool, var_528_float);
					var_529_bool = var_527_bool == 0; //@nz
					if(var_529_bool != 0) {
						goto Label_685;
					}
					var_55_bool = 1;

				}
			Label_675:
				goto Label_684;
		}
		Label_684:
			goto Label_513;

		}
	}
Label_685:
	WaitForAnimEnd();
	var_222_string = var_3_string;
	if(var_222_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_225_bool = var_54_bool;
	if(var_225_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1507(var_40_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_41_string = "";
	var_40_string = var_41_string;
	func_2000(var_41_string);
	PlayAnimation("all", var_40_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_40_string);
	RemoveEnvelope();
	return 0;
}


func_1011(var_308_bool)
{
	var_309_bool = 0;
	var_309_bool = 0;
	var_310_bool = 0;
	func_983(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		var_327_bool = 0;
		func_1027(var_308_bool, var_309_bool, var_327_bool);
		if(var_327_bool != 0) {
			var_309_bool = 1;
		}
	}
	if(var_309_bool != 0) {
		var_308_bool = 1;
		return 0;
	}
	var_308_bool = 0;
	return 0;
}


func_2041(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	self(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2047(var_47_cvector, var_48_cvector)
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


