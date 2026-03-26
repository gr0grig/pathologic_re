// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SensePlayerOnly/1,Hold/0,IsPlayerActor/2,IsLoaded/1,RemoveActor/1,FindActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,GetVariable/2,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:quest_d1_03|W:butcher_battle|W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:butcher_fail|W:butcher_death
// @GLOBALS: 0:object:
// @RUN_OP: 0xc4
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0xcc vars=object
// @EVENT_17: op=0xd9 vars=object
// @EVENT_26: op=0xe4 vars=string
// @EVENT_6: op=0xf3 vars=
// @TASK_3: vars=object,int,int,bool,float,int params=0
// @EVENT_6: op=0x115 vars=
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_6: op=0x3b1 vars=
// @EVENT_7: op=0x3e8 vars=int
// @EVENT_1: op=0x403 vars=object
// @EVENT_2: op=0x412 vars=object
// @EVENT_10: op=0x498 vars=object
// @EVENT_41: op=0x4a3 vars=object
// @TASK_5: vars= params=1
// @EVENT_6: op=0x4b7 vars=
// @EVENT_22: op=0x53b vars=object,int,float,float
// @EVENT_16: op=0x53d vars=object,string
// @EVENT_41: op=0x53f vars=object
// @STANDALONE_EVENT_22: op=0x7b1 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x7b9 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x7c3 vars=object,string
// @STANDALONE_EVENT_41: op=0x7d0 vars=object
// @PE: 0x4a,0x84,0x9a,0xcc,0x10f,0x112,0x115,0x3a9,0x3b1,0x3e8,0x403,0x412,0x486,0x498,0x4a3,0x4ac,0x4bd,0x521,0x53b,0x53d,0x53f,0x541,0x73b,0x742,0x7a4,0x7b1,0x7b9,0x7d0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	if((int)1 != 0) {
		func_1787();
		var_20_bool = var_15_object == (int)5801;
		if(var_20_bool != 0) {
			var_21_string = "";
			func_132(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)505264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505265, (int)-1, (int)5802);
			@@@var_0_object:AddReply((int)506042, (int)-1, (int)6665);
			return 0;
		}
		var_3_string = true;
		var_45_bool = 0;
		func_1943(var_45_bool);
		if(var_45_bool != 0) {
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
	var_16_int = 0; var_17_object = Obj();
	var_15_bool = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	TaskCall(3);
	func_251();
	TaskReturn();
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_bool, var_17_bool);
	var_18_bool = var_17_bool;
	if(var_18_bool != 0) {
		TaskCall(3);
		func_251();
		TaskReturn();
	}
	return 2;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	var_19_bool = var_15_bool == "cleanup";
	if(var_19_bool != 0) {
		var_0_object = true;
		IsLoaded(var_17_bool);
		var_20_bool = var_17_bool == 0; //@nz
		if(var_20_bool != 0) {
			var_21_object = Obj();
			func_1835(var_21_object);
			RemoveActor(var_21_object);
		}
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = var_0_object;
	if(var_15_object != 0) {
		var_16_object = Obj();
		func_1835(var_16_object);
		RemoveActor(var_16_object);
	}
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	func_1945();
	Hold();
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	func_1945();
	Hold();
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_17_bool = var_15_int == (int)1;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_18_object = var_1_object;
		func_1898(var_18_object);
	} else {
		var_23_int = 0;
		var_15_int = var_23_int;
		func_1158(var_14_bool, var_15_int, var_23_int);
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
		func_1776(var_19_object);
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
	func_1014(var_15_object);
	var_15_object = Obj();
	func_2000();
	return 0;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj();
	func_1835(var_15_object);
	RemoveActor(var_15_object);
	return 0;
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
	func_1565(var_19_object, var_20_int, var_21_float);
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
	func_1633(var_23_float, var_24_cvector, var_25_cvector);
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
	func_1956(var_16_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_0_object = false;
	SensePlayerOnly((bool)1);
	
Label_200:
	Hold();
	goto Label_200;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_1658(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1937(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1935(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1939(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1941(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_1918(var_79_int);
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
	func_1727();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_512(var_1_object, var_2_object, var_4_bool)
{
	var_59_bool = 0; var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_514:
	var_68_int = var_1_object + (int)1;
	var_69_int = "attack_begin" + var_68_int;
	HasAnimation(var_62_bool, "all", var_69_int);
	var_70_bool = var_62_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_514;
	}
	var_2_object = 0;
	
Label_528:
	var_73_int = var_2_object + (int)1;
	var_74_int = "attack" + var_73_int;
	IsExisting3DSound(var_63_bool, var_74_int);
	var_75_bool = var_63_bool == 0; //@nz
	if(var_75_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_528;

	}
	GetAnimationOffset(var_64_cvector, "all", "bjump");
	var_78_float = GetByIndex(var_64_cvector, 2);
	var_4_bool = -var_78_float;
	return 6;
	
}


func_1794(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	IsExisting3DSound(var_56_bool, var_47_string);
	var_64_bool = var_56_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_57_int = 0;

	Label_1800:
		var_66_int = var_57_int + (int)1;
		var_67_int = var_47_string + var_66_int;
		IsExisting3DSound(var_58_bool, var_67_int);
		var_68_bool = var_58_bool == 0; //@nz
		if(var_68_bool != 0) {
		} else {
			var_57_int = var_57_int + (int)1;
			goto Label_1800;
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


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0;
	func_1943(var_96_bool);
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
	func_1761(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	return 0;
	
}


func_1158(var_0_object, var_1_object, var_23_int)
{
	var_25_bool = var_23_int != (int)0;
	if(var_25_bool != 0) {
		return 0;
	}
	var_26_bool = 0; var_27_object = Obj();
	var_27_object = var_1_object;
	func_1196(var_26_bool, var_27_object);
	var_62_bool = var_26_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1935(var_76_int)
{
	var_76_int = 515562;
	return 0;
}


func_271(var_403_float)
{
	var_403_float = 0.10000000149011612;
	return 0;
}


func_1937(var_75_int)
{
	var_75_int = 503347;
	return 0;
}


func_274(var_410_int)
{
	var_410_int = 0;
	return 0;
}


func_1939(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_1941(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_1943(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_793(var_0_object, var_309_bool)
{
	var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_float = 0;
	var_320_bool = 0; var_321_object = Obj();
	var_321_object = var_0_object;
	func_1497(var_320_bool, var_321_object);
	var_322_bool = var_320_bool == 0; //@nz
	if(var_322_bool != 0) {
		var_309_bool = 0;
		return 10;
	}
	var_323_bool = 0;
	func_882(var_319_float, var_323_bool);
	if(var_323_bool != 0) {
		@@@var_0_object:GetPFPosition(var_315_cvector);
		GetPFPosition(var_316_cvector);
		var_317_cvector = var_315_cvector - var_316_cvector;
		var_318_float = var_317_cvector | var_317_cvector;
		@@@var_0_object:GetAttackDistance(var_319_float);
		var_319_float = var_319_float + (int)50;
		var_325_float = var_319_float * var_319_float;
		var_309_bool = var_318_float <= var_325_float;
		return 10;
	}
	var_309_bool = 0;
	return 10;
}


func_1945()
{
	var_15_object = Obj();
	func_1835(var_15_object);
	RemoveActor(var_15_object);
	var_18_bool = 0; var_19_string = ""; var_20_string = "";
	func_1886(var_18_bool, "quest_d1_03", "butcher_fail");
	return 0;
}


func_283(var_0_object, var_3_string, var_5_bool, var_34_object, var_35_bool, var_36_float, var_143_bool, var_235_bool)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_float = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_float = 0;
	func_512(var_56_cvector, var_57_bool, var_58_float);
	var_5_bool = 0;
	var_83_bool = IsFuncExist(var_34_object, "@GetAttackDistance", (int)1);
	if(var_83_bool != 0) {
		@@var_34_object:GetAttackDistance(var_48_float);
		var_48_float = var_48_float + (int)50;
	} else {
							var_36_float = var_48_float;
	}
	var_86_bool = var_48_float >= (int)150;
	if(var_86_bool != 0) {
		var_48_float = 150;
	}
	var_3_string = false;
	var_0_object = var_34_object;
	IsPlayerActor(var_0_object, var_51_bool);
	var_87_bool = var_51_bool;
	if(var_87_bool != 0) {
		PlayGlobalMusic("attack");
		var_89_object = Obj();
		func_1835(var_89_object);
		SendPlayerEnemy(var_34_object, var_89_object);
	}
	var_92_bool = var_35_bool;
	if(var_92_bool != 0) {
		var_52_bool = 0;
	} else {
						var_52_bool = 1;

	}
	var_53_float = (float)400.0 + var_48_float;
	
Label_323:
	var_94_bool = 0;
	var_94_bool = 0;
	var_95_bool = 0; var_96_object = Obj();
	var_96_object = var_0_object;
	func_1497(var_95_bool, var_96_object);
	if(var_95_bool != 0) {
		var_129_bool = var_3_string == 0; //@nz
		if(var_129_bool != 0) {
			var_94_bool = 1;
		}
	}
	if(var_94_bool != 0) {
		func_925(var_58_float);
		@@@var_0_object:GetPFPosition(var_49_cvector);
		GetPFPosition(var_50_cvector);
		var_54_cvector = var_49_cvector - var_50_cvector;
		var_55_float = var_54_cvector | var_54_cvector;
		var_135_float = var_53_float * var_53_float;
		var_136_bool = var_55_float >= var_135_float;
		if(var_136_bool != 0) {
			var_137_bool = 0; var_138_object = Obj(); var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_bool = 0;
			var_138_object = var_0_object;
			var_48_float = var_139_float;
			TaskCall(4);
			func_951(var_145_bool, var_137_bool, var_138_object, var_139_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_220_bool = var_143_bool == 0; //@nz
			if(var_220_bool != 0) {
			} else {
				var_52_bool = 0;
		} else {
				var_226_float = var_36_float * var_36_float;
				var_227_bool = var_55_float >= var_226_float;
				if(var_227_bool != 0) {
					@@@var_0_object:GetPFPosition(var_56_cvector);
					CanReachByPF(var_57_bool, var_56_cvector);
					var_228_bool = var_57_bool == 0; //@nz
					if(var_228_bool != 0) {
						var_229_bool = 0; var_230_object = Obj(); var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_bool = 0;
						var_230_object = var_0_object;
						var_48_float = var_231_float;
						TaskCall(4);
						func_951(var_237_bool, var_229_bool, var_230_object, var_231_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_238_bool = var_235_bool == 0; //@nz
						if(var_238_bool != 0) {
							goto Label_495;
						}
						var_52_bool = 0;
						goto Label_323;
					}
					var_239_bool = var_52_bool == 0; //@nz
					if(var_239_bool != 0) {
						var_240_object = Obj();
						var_240_object = var_0_object;
						func_1647(var_240_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_925(var_58_float);
						StopAsync();
						var_52_bool = 1;
						var_251_bool = 0; var_252_object = Obj();
						var_252_object = var_0_object;
						func_1497(var_251_bool, var_252_object);
						var_253_bool = var_251_bool == 0; //@nz
						if(var_253_bool != 0) {
							goto Label_495;
						}
					}
					rand(var_58_float);
					var_254_bool = 0;
					var_256_bool = var_58_float < (float)0.25;
					if(var_256_bool != 1) {
						var_257_bool = 0;
						func_882((bool)1, var_257_bool);
						if(var_257_bool != 1) {
							var_254_bool = 0;
						}
					}
					if(var_254_bool != 0) {
						Face(var_0_object);
						func_932();
						PlayAnimation("all", "attack_stay");
						var_294_bool = 0; var_295_float = 0;
						var_36_float = var_295_float;
						func_750(var_58_float, var_294_bool, var_295_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_925(var_58_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_516_bool = 0;
						func_882(var_58_float, var_516_bool);
						var_517_bool = var_516_bool == 0; //@nz
						if(var_517_bool == 0) goto Label_485;
						var_518_bool = 0; var_519_object = Obj();
						var_519_object = var_0_object;
						func_1497(var_518_bool, var_519_object);
						var_520_bool = var_518_bool == 0; //@nz
						if(var_520_bool != 0) {
							goto Label_495;
						}
						@@@var_0_object:GetPFPosition(var_49_cvector);
						GetPFPosition(var_50_cvector);
						var_54_cvector = var_49_cvector - var_50_cvector;
						var_55_float = var_54_cvector | var_54_cvector;
						var_521_float = var_36_float * var_36_float;
						var_522_bool = var_55_float < var_521_float;
						if(var_522_bool == 0) goto Label_485;
						var_523_bool = 0; var_524_float = 0;
						var_36_float = var_524_float;
						func_586(var_57_bool, var_58_float, var_523_bool, var_524_float);
						var_525_bool = var_523_bool == 0; //@nz
						if(var_525_bool == 0) goto Label_485;
						goto Label_495;
				}
					var_526_bool = 0; var_527_float = 0;
					var_36_float = var_527_float;
					func_586(var_57_bool, var_58_float, var_526_bool, var_527_float);
					var_528_bool = var_526_bool == 0; //@nz
					if(var_528_bool != 0) {
						goto Label_495;
					}
					var_52_bool = 1;

				}
			Label_485:
				goto Label_494;
		}
		Label_494:
			goto Label_323;

		}
	}
Label_495:
	WaitForAnimEnd();
	var_221_string = var_3_string;
	if(var_221_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_224_bool = var_51_bool;
	if(var_224_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1180(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_925(var_0_object)
{
	var_130_object = Obj();
	var_130_object = var_0_object;
	func_1898(var_130_object);
	return 0;
}


func_1565(var_19_object, var_20_int, var_21_float)
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
		func_1359(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1841(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_1594:
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
			goto Label_1594;
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
			func_1633(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_1521(var_109_object);
	return 18;
	
}


func_1787()
{
	var_18_bool = 0;
	func_1943(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1056(var_0_object, var_1_object, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool)
{
	var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_object = Obj(); var_180_bool = 0; var_181_bool = 0; var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_float = 0; var_187_object = Obj();
	var_0_object = false;
	var_1_object = var_167_object;
	var_171_bool = var_181_bool;
	
Label_1060:
	var_188_bool = 0; var_189_object = Obj();
	var_167_object = var_189_object;
	func_1196(var_188_bool, var_189_object);
	var_192_bool = var_188_bool == 0; //@nz
	if(var_192_bool != 0) {
		var_166_bool = 0;
		return 16;
	}
	@@var_167_object:GetPosition(var_183_cvector);
	GetPosition(var_184_cvector);
	var_185_cvector = var_183_cvector - var_184_cvector;
	var_186_float = var_185_cvector | var_185_cvector;
	var_193_bool = 0;
	var_193_bool = 0;
	var_195_bool = var_169_float > (int)0;
	if(var_195_bool != 0) {
		var_196_float = var_169_float * var_169_float;
		var_197_bool = var_186_float > var_196_float;
		if(var_197_bool != 0) {
			var_193_bool = 1;
		}
	}
	if(var_193_bool != 0) {
		Stop();
		var_166_bool = 0;
		return 16;
	}
	var_198_float = var_168_float * var_168_float;
	var_199_bool = var_186_float > var_198_float;
	if(var_199_bool != 0) {
		@@var_167_object:GetPFPosition(var_183_cvector);
		FindPathTo(var_187_object, var_183_cvector);
		var_200_bool = var_187_object != 0; //@nn
		if(var_200_bool != 0) {
			var_187_object = var_182_object;
			var_187_object = 0;
		}
		var_201_bool = var_182_object != 0; //@nn
		if(var_201_bool != 0) {
			var_202_bool = var_181_bool;
			if(var_202_bool == 0) goto Label_1109;
			var_181_bool = 0;
			RotatePath(var_182_object, var_180_bool);
			var_203_bool = var_180_bool == 0; //@nz
			if(var_203_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_206_string = "";
				func_1203(var_206_string);
				var_207_string = "";
				func_1205(var_207_string);
				FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string);
				var_208_bool = var_180_bool == 0; //@nz
				if(var_208_bool != 0) {
					var_209_object = var_0_object;
					if(var_209_object != 0) {
						var_182_object = 0;
						goto Label_1156;
					EMIT "GOTO 0x469";
					}
				} else {
					var_182_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_180_bool);
					var_212_bool = var_180_bool == 0; //@nz
					if(var_212_bool != 0) {
						var_213_object = var_0_object;
						if(var_213_object != 0) {
							var_182_object = 0;
							goto Label_1156;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1156;
	}
			var_187_object = 0;
			goto Label_1154;

		Label_1154:
			var_182_object = 0;

		}
		goto Label_1060;
	}
Label_1156:
	var_166_bool = !var_0_object;
	return 16;
	
}


func_1313(var_46_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_47_string = "";
	var_46_string = var_47_string;
	func_1794(var_47_string);
	PlayAnimation("all", var_46_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_46_string);
	RemoveEnvelope();
	return 0;
}


func_930(var_471_int)
{
	var_471_int = 0;
	return 0;
}


func_547(var_0_object, var_392_float, var_393_int)
{
	var_394_object = Obj(); var_395_float = 0; var_396_float = 0; var_397_object = Obj(); var_398_float = 0; var_399_float = 0;
	var_401_float = var_392_float * (float)0.8999999761581421;
	GetVictim(var_401_float, var_397_object);
	ReportAttack(var_0_object);
	var_402_bool = var_397_object == var_0_object;
	if(var_402_bool != 0) {
		var_403_float = 0; var_404_object = Obj(); var_405_int = 0;
		var_397_object = var_404_object;
		var_393_int = var_405_int;
		func_271(var_405_int);
		var_403_float = var_398_float;
		var_406_float = 0; var_407_object = Obj(); var_408_float = 0; var_409_int = 0;
		var_397_object = var_407_object;
		var_398_float = var_408_float;
		var_410_int = 0; var_411_object = Obj(); var_412_int = 0;
		var_397_object = var_411_object;
		var_393_int = var_412_int;
		func_274(var_412_int);
		var_410_int = var_409_int;
		func_1383(var_406_float, var_407_object, var_408_float, var_409_int);
		var_406_float = var_399_float;
		var_471_int = 0;
		func_930(var_471_int);
		ReportHit(var_0_object, var_471_int, var_399_float, var_398_float);
		var_472_object = Obj(); var_473_float = 0;
		var_397_object = var_472_object;
		var_399_float = var_473_float;
		func_937();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_932()
{
	var_263_string = "";
	func_1794("attack_stay");
	return 0;
}


func_1956(var_16_object)
{
	var_17_bool = 0; var_18_string = ""; var_19_string = "";
	func_1886(var_17_bool, "quest_d1_03", "butcher_death");
	var_23_object = Obj();
	var_16_object = var_23_object;
	TaskCall(5);
	func_1213(var_23_object);
	TaskReturn();
	return 0;
}


func_937()
{
	return 0;
}


func_1835(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	self(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_939(var_496_bool)
{
	var_496_bool = 1;
	return 0;
}


func_941(var_388_int)
{
	var_388_int = 1;
	return 0;
}


func_1196(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_1497(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
	return 0;
}


func_943(var_383_float)
{
	var_383_float = 0.5;
	return 0;
}


func_1456(var_43_bool, var_44_object)
{
	var_45_bool = 0; var_46_bool = 0;
	@@var_44_object:IsDead(var_46_bool);
	var_46_bool = var_43_bool;
	return 2;
}


func_1841(var_47_cvector, var_48_cvector)
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


func_1203(var_206_string)
{
	var_206_string = "walk";
	return 0;
}


func_821(var_307_bool)
{
	var_308_bool = 0;
	var_308_bool = 0;
	var_309_bool = 0;
	func_793(var_308_bool, var_309_bool);
	if(var_309_bool != 0) {
		var_326_bool = 0;
		func_837(var_307_bool, var_308_bool, var_326_bool);
		if(var_326_bool != 0) {
			var_308_bool = 1;
		}
	}
	if(var_308_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_1205(var_207_string)
{
	var_207_string = "run";
	return 0;
}


func_951(var_2_object, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool)
{
	var_146_bool = 0; var_147_bool = 0; var_148_bool = 0; var_149_bool = 0;
	var_150_object = Obj();
	var_138_object = var_150_object;
	func_1898(var_150_object);
	SetTimer((int)1, (int)5);
	CanSee(var_148_bool, var_138_object);
	var_153_bool = var_148_bool;
	if(var_153_bool != 0) {
		var_2_object = true;
		var_154_object = Obj();
		var_138_object = var_154_object;
		func_1776(var_154_object);
	} else {
		var_2_object = false;
	}
	var_161_bool = 0; var_162_object = Obj();
	var_138_object = var_162_object;
	func_1366(var_161_bool, var_162_object);
	if(var_161_bool != 0) {
		var_165_object = Obj();
		func_1835(var_165_object);
		SendPlayerEnemy(var_138_object, var_165_object);
	}
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0; var_169_float = 0; var_170_bool = 0; var_171_bool = 0;
	var_138_object = var_167_object;
	var_139_float = var_168_float;
	var_140_float = var_169_float;
	var_141_bool = var_170_bool;
	var_142_bool = var_171_bool;
	func_1056(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool);
	var_166_bool = var_149_bool;
	var_217_object = var_2_object;
	if(var_217_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_149_bool = var_137_bool;
	return 4;
	
}


func_1461(var_32_bool, var_33_object)
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
		func_1456(var_43_bool, var_44_object);
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


func_1851(var_444_float, var_445_float, var_446_float)
{
	var_449_bool = var_445_float < var_446_float;
	if(var_449_bool != 0) {
		var_445_float = var_444_float;
	} else {
		var_446_float = var_444_float;
	}
	return 0;
	
}


func_1213(var_23_object)
{
	var_24_object = Obj();
	var_23_object = var_24_object;
	func_1222(var_24_object);
	
Label_1218:
	Hold();
	goto Label_1218;
}
EMIT "Return(); Pop(0)";


func_1727()
{
	var_139_bool = 0; var_140_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_142_bool = 0;
	func_1943(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		HasAnimationTrack(var_140_bool, "head");
		var_144_bool = var_140_bool;
		if(var_144_bool == 0) goto Label_1744;
		UnlookAsync("head");
	}
Label_1744:
	return 2;
	
}


func_1345(var_434_string, var_435_int)
{
	var_437_bool = var_435_int == (int)2;
	if(var_437_bool != 0) {
		var_434_string = "fire";
		return 0;
	EMIT "GOTO 0x54d";
	}
	var_439_bool = var_435_int == (int)1;
	if(var_439_bool != 0) {
		var_434_string = "bullet";
		return 0;
	}
	var_434_string = "phys";
	return 0;
}


func_1858(var_454_float, var_455_float, var_456_float, var_457_float)
{
	var_458_bool = var_455_float < var_456_float;
	if(var_458_bool != 0) {
		var_456_float = var_454_float;
		return 0;
	}
	var_459_bool = var_455_float > var_457_float;
	if(var_459_bool != 0) {
		var_457_float = var_454_float;
		return 0;
	}
	var_455_float = var_454_float;
	return 0;
}


func_837(var_0_object, var_4_bool, var_326_bool)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_object = Obj(); var_333_bool = 0; var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0);
	GetScene(var_332_object);
	var_333_bool = 0;
	
Label_841:
	var_337_cvector = CVector(0,0,0); var_338_object = Obj();
	var_338_object = var_0_object;
	func_1359(var_337_cvector, var_338_object);
	var_343_int = -var_337_cvector;
	FindDirLength(var_334_float, var_343_int, var_4_bool);
	var_344_bool = var_334_float < var_4_bool;
	if(var_344_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_335_cvector);
		GetPFPosition(var_336_cvector);
		WaitForAnimEnd();
		func_925(var_336_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_333_bool = 1;
		var_348_bool = 0;
		func_793(var_336_cvector, var_348_bool);
		var_349_bool = var_348_bool == 0; //@nz
		if(var_349_bool != 0) {
			goto Label_879;
		}
		goto Label_841;
	}
Label_879:
	var_333_bool = var_326_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1222(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0);
	var_45_bool = var_24_object == 0; //@ne
	if(var_45_bool != 0) {
		var_46_string = "";
		func_1313("fdie");
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
		func_1794(var_99_string);
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_string = "";
		func_132(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)505264);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)505265, (int)-1, (int)5802);
		@@@var_0_object:AddReply((int)506042, (int)-1, (int)6665);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_119_bool = 0;
	func_1943(var_119_bool);
	if(var_119_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_120_string = var_3_string;
		if(var_120_string != 0) {
		} else {
			var_121_string = "";
			var_121_string = var_2_object;
			func_1745(var_121_string);
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


func_586(var_0_object, var_1_object, var_355_bool, var_356_float)
{
	var_357_int = 0; var_358_bool = 0; var_359_int = 0; var_360_string = ""; var_361_int = 0; var_362_bool = 0; var_363_int = 0; var_364_string = "";
	func_925(var_364_string);
	irand(var_361_int, var_1_object);
	var_361_int = var_361_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1907();
	var_373_int = "attack_begin" + var_361_int;
	PlayAnimation("all", var_373_int);
	WaitForAnimEnd();
	func_893(var_363_int, var_364_string);
	var_389_bool = 0; var_390_object = Obj();
	var_390_object = var_0_object;
	func_1497(var_389_bool, var_390_object);
	var_391_bool = var_389_bool == 0; //@nz
	if(var_391_bool != 0) {
		StopAsync();
		var_355_bool = 0;
		return 8;
	}
	var_392_float = 0; var_393_int = 0;
	var_356_float = var_392_float;
	var_361_int = var_393_int;
	func_547(var_364_string, var_392_float, var_393_int);
	var_476_int = "attack_middle" + var_361_int;
	HasAnimation(var_362_bool, "all", var_476_int);
	var_477_bool = var_362_bool;
	if(var_477_bool != 0) {
		func_1907();
		var_480_int = "attack_middle" + var_361_int;
		PlayAnimation("all", var_480_int);
		WaitForAnimEnd();
		func_925(var_364_string);
		var_481_bool = 0; var_482_object = Obj();
		var_482_object = var_0_object;
		func_1497(var_481_bool, var_482_object);
		var_483_bool = var_481_bool == 0; //@nz
		if(var_483_bool != 0) {
			StopAsync();
			var_355_bool = 0;
			return 8;
		}
		var_484_float = 0; var_485_int = 0;
		var_356_float = var_484_float;
		var_361_int = var_485_int;
		func_547(var_364_string, var_484_float, var_485_int);
		var_363_int = 1;

	Label_663:
		var_487_int = "attack_middle" + var_361_int;
		var_489_int = var_487_int + "_";
		var_364_string = var_489_int + var_363_int;
		HasAnimation(var_362_bool, "all", var_364_string);
		var_491_bool = var_362_bool == 0; //@nz
		if(var_491_bool != 0) {
		} else {
			func_1907();
			PlayAnimation("all", var_364_string);
			WaitForAnimEnd();
			func_925(var_364_string);
			var_507_bool = 0; var_508_object = Obj();
			var_508_object = var_0_object;
			func_1497(var_507_bool, var_508_object);
			var_509_bool = var_507_bool == 0; //@nz
			if(var_509_bool != 0) {
				StopAsync();
				var_355_bool = 0;
				var_510_float = 0; var_511_int = 0;
				var_356_float = var_510_float;
				var_361_int = var_511_int;
				func_547(var_364_string, var_510_float, var_511_int);
				var_363_int = var_363_int + (int)1;
				goto Label_663;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_495_int = "attack_end" + var_361_int;
	PlayAnimation("all", var_495_int);
	var_496_bool = 0;
	func_939(var_496_bool);
	if(var_496_bool != 0) {
		var_497_bool = 0; var_498_float = 0;
		func_723(var_497_bool, (float)0.75);
		StopAsync();
	}
	var_355_bool = 1;
	return 8;
	
}


func_1869(var_462_float)
{
	var_463_object = Obj(); var_464_object = Obj();
	CreateFloatVector(var_464_object);
	@@var_464_object:add(var_462_float);
	var_466_bool = var_462_float < (int)0;
	if(var_466_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_464_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1359(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_1745(var_121_string)
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


func_723(var_497_bool, var_498_float)
{
	var_499_float = 0; var_500_bool = 0; var_501_float = 0; var_502_bool = 0;
	rand(var_501_float);
	var_503_bool = var_501_float < var_498_float;
	if(var_503_bool != 0) {

	Label_728:
		IsAnimationPlaying(var_502_bool);
		var_504_bool = var_502_bool == 0; //@nz
		if(var_504_bool != 0) {
		} else {
			var_505_bool = 0;
			func_821(var_505_bool);
			if(var_505_bool != 0) {
				var_497_bool = 1;
				sync();
				goto Label_728;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_925(var_502_bool);
	}
	goto Label_748;
	
Label_748:
	var_497_bool = 0;
	return 4;
	
}


func_1366(var_161_bool, var_162_object)
{
	var_163_bool = 0; var_164_bool = 0;
	IsPlayerActor(var_162_object, var_164_bool);
	var_164_bool = var_161_bool;
	return 2;
}


func_1497(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	var_32_bool = 0; var_33_object = Obj();
	var_29_object = var_33_object;
	func_1461(var_32_bool, var_33_object);
	var_49_bool = var_32_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_29_object = var_51_object;
	func_1371(var_50_bool, var_51_object, "noaccess");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_28_bool = 1;
		return 2;
	}
	@@var_29_object:GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == (int)0;
	return 2;
}


func_1371(var_50_bool, var_51_object, var_52_string)
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


func_1886(var_17_bool, var_18_string, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj();
	FindActor(var_21_object, var_18_string);
	var_22_bool = var_21_object == 0; //@ne
	if(var_22_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	Trigger(var_21_object, var_19_string);
	var_17_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1761(var_99_string, var_100_bool)
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


func_1633(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_1521(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1383(var_406_float, var_407_object, var_408_float, var_409_int)
{
	var_413_int = 0; var_414_string = ""; var_415_int = 0; var_416_float = 0; var_417_float = 0; var_418_float = 0; var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0;
	var_425_bool = 0; var_426_object = Obj(); var_427_string = "";
	var_407_object = var_426_object;
	func_1371(var_425_bool, var_426_object, "health");
	var_428_bool = var_425_bool == 0; //@nz
	if(var_428_bool != 0) {
		var_406_float = 0.0;
		return 12;
	}
	var_429_bool = 0; var_430_object = Obj(); var_431_string = "";
	var_407_object = var_430_object;
	func_1371(var_429_bool, var_430_object, "armor");
	var_432_bool = var_429_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_419_int = 0;
	} else {
			@@var_407_object:GetProperty("armor", var_419_int);
	}
	var_434_string = ""; var_435_int = 0;
	var_409_int = var_435_int;
	func_1345(var_434_string, var_435_int);
	var_420_string = "armor_" + var_434_string;
	var_440_bool = 0; var_441_object = Obj(); var_442_string = "";
	var_407_object = var_441_object;
	var_420_string = var_442_string;
	func_1371(var_440_bool, var_441_object, var_442_string);
	var_443_bool = var_440_bool == 0; //@nz
	if(var_443_bool != 0) {
		var_421_int = 0;
	} else {
		@@var_407_object:GetProperty(var_420_string, var_421_int);

	}
	var_444_float = 0; var_445_float = 0; var_446_float = 0;
	var_447_int = var_419_int + var_421_int;
	var_445_float = var_447_int / (float)100.0;
	func_1851(var_444_float, var_445_float, (float)1);
	var_444_float = var_422_float;
	@@var_407_object:GetProperty("health", var_423_float);
	var_452_int = (int)1 - var_422_float;
	var_424_float = var_408_float * var_452_int;
	var_454_float = 0; var_455_float = 0; var_456_float = 0; var_457_float = 0;
	var_455_float = var_423_float - var_424_float;
	func_1858(var_454_float, var_455_float, (float)0, (float)1);
	@@var_407_object:SetProperty("health", var_454_float);
	var_460_bool = 0; var_461_object = Obj();
	var_407_object = var_461_object;
	func_1366(var_460_bool, var_461_object);
	if(var_460_bool != 0) {
		var_462_float = 0;
		var_462_float = -var_424_float;
		func_1869(var_462_float);
	}
	var_424_float = var_406_float;
	return 12;
	
}


func_1898(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	IsPlayerActor(var_18_object, var_20_bool);
	var_21_bool = var_20_bool;
	if(var_21_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_750(var_0_object, var_294_bool, var_295_float)
{
	var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0;
	
Label_751:
	IsAnimationPlaying(var_301_bool);
	var_306_bool = var_301_bool == 0; //@nz
	if(var_306_bool != 0) {
	} else {
		var_307_bool = 0;
		func_821(var_307_bool);
		if(var_307_bool != 0) {
			var_294_bool = 1;
			return 10;
		}
		var_350_bool = 0; var_351_object = Obj();
		var_351_object = var_0_object;
		func_1497(var_350_bool, var_351_object);
		var_352_bool = var_350_bool == 0; //@nz
		if(var_352_bool != 0) {
			var_294_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_302_cvector);
		GetPFPosition(var_303_cvector);
		var_304_cvector = var_302_cvector - var_303_cvector;
		var_305_float = var_304_cvector | var_304_cvector;
		var_353_float = var_295_float * var_295_float;
		var_354_bool = var_305_float < var_353_float;
		if(var_354_bool != 0) {
			var_355_bool = 0; var_356_float = 0;
			var_295_float = var_356_float;
			func_586(var_304_cvector, var_305_float, var_355_bool, var_356_float);
			var_294_bool = 1;
			sync();
			goto Label_751;
		}
		return 10;
	}
	func_925(var_305_float);
	var_294_bool = 0;
	return 10;
	
}


func_1647(var_240_object)
{
	var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0);
	@@var_240_object:GetPosition(var_244_cvector);
	GetPosition(var_245_cvector);
	var_246_cvector = var_244_cvector - var_245_cvector;
	var_247_float = GetByIndex(var_246_cvector, 0);
	var_248_float = GetByIndex(var_246_cvector, 2);
	RotateAsync(var_247_float, var_248_float);
	return 6;
}


func_1776(var_19_object)
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


func_1521(var_32_object)
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


func_882(var_0_object, var_257_bool)
{
	var_258_bool = 0; var_259_bool = 0;
	var_262_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_262_bool != 0) {
		@@@var_0_object:IsAttacking(var_259_bool);
		var_259_bool = var_257_bool;
		return 2;
	}
	var_257_bool = 0;
	return 2;
}


func_1907()
{
	var_367_object = Obj(); var_368_object = Obj();
	GetScene(var_368_object);
	var_370_object = Obj();
	func_1835(var_370_object);
	BroadcastMessage("battle", var_370_object, var_368_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1014(var_2_object)
{
	KillTimer((int)1);
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1180(var_15_object);
	return 0;
}


func_1658(var_27_bool, var_28_object, var_29_float)
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
	func_1841(var_54_cvector, var_55_cvector);
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
	func_1943(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_1721;
		LookAsyncCamera("head");
	}
Label_1721:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_251()
{
	var_25_object = Obj(); var_26_object = Obj();
	var_27_bool = 0; var_28_string = ""; var_29_string = "";
	func_1886(var_27_bool, "quest_d1_03", "butcher_battle");
	FindActor(var_26_object, "player");
	var_34_object = Obj(); var_35_bool = 0; var_36_float = 0;
	var_26_object = var_34_object;
	func_283(var_22_bool, var_23_float, var_24_int, var_25_object, var_26_object, var_34_object, (bool)1, (float)180.0);
	func_1945();
	return 2;
}
EMIT "Stack[-1] = 0";


func_893(var_2_object, var_5_bool)
{
	var_374_float = 0; var_375_int = 0; var_376_float = 0; var_377_int = 0;
	var_378_bool = var_2_object == 0; //@nz
	if(var_378_bool != 0) {
		return 4;
	}
	var_379_bool = var_5_bool;
	if(var_379_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_382_bool = var_5_bool > (int)0;
		if(var_382_bool != 0) {
			return 4;
		}
	}
	rand(var_376_float);
	var_383_float = 0;
	func_943(var_383_float);
	var_384_bool = var_376_float < var_383_float;
	if(var_384_bool != 0) {
		irand(var_377_int, var_2_object);
		var_377_int = var_377_int + (int)1;
		var_387_int = "attack" + var_377_int;
		Speak(var_387_int);
		var_388_int = 0;
		func_941(var_388_int);
		var_5_bool = var_388_int;
	}
	return 4;
}


func_1918(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x78d";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


