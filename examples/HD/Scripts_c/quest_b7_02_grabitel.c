// @IMPORTS: Face/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,GetScene/1,GetGeometryLocator/3,AddActorByType/6,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,Hold/0,RemoveActor/1,FindActor/2,SetRTEnvelope/2,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,RotateAsync/2,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:all|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|W:Owner|A:SetScriptProperty|W:Target|A:GetPosition|A:GetEyesHeight|W:StartDirection|W:kill|W:attack_off|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|W:walk|W:run|W:cleanup|W:player|W:fdie|W:bdie|W:GetScriptProperty|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:reputation|W:battle|W:god_mode|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:Knife|W:lockpick|W:grabitel_mark
// @GLOBALS: 0:bool:
// @RUN_OP: 0x477
// @RUN_TASK: 3
// @TASK_0: vars=bool params=2
// @EVENT_17: op=0x6b vars=object
// @EVENT_30: op=0x71 vars=object,object,bool
// @EVENT_26: op=0x78 vars=string
// @TASK_1: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0xb6 vars=object
// @EVENT_30: op=0xbc vars=object,object,bool
// @EVENT_26: op=0xc3 vars=string
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_17: op=0x35f vars=object
// @EVENT_30: op=0x365 vars=object,object,bool
// @EVENT_26: op=0x36c vars=string
// @EVENT_7: op=0x3a8 vars=int
// @EVENT_1: op=0x3c3 vars=object
// @EVENT_2: op=0x3d2 vars=object
// @EVENT_10: op=0x458 vars=object
// @EVENT_41: op=0x463 vars=object
// @TASK_3: vars= params=0
// @EVENT_5: op=0x47a vars=
// @EVENT_26: op=0x480 vars=string
// @TASK_4: vars= params=0
// @TASK_5: vars= params=1
// @EVENT_0: op=0x4cf vars=object
// @EVENT_22: op=0x54e vars=object,int,float,float
// @EVENT_16: op=0x550 vars=object,string
// @EVENT_41: op=0x552 vars=object
// @STANDALONE_EVENT_6: op=0x85c vars=
// @STANDALONE_EVENT_22: op=0x881 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x889 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x893 vars=object,string
// @STANDALONE_EVENT_41: op=0x8a0 vars=object
// @PE: 0x6b,0x71,0x78,0x7e,0x9a,0x9d,0xa2,0xb6,0xbc,0xc3,0x35f,0x365,0x36c,0x3a8,0x3c3,0x3d2,0x446,0x458,0x463,0x46c,0x480,0x4c0,0x534,0x54e,0x550,0x552,0x554,0x72c,0x733,0x74b,0x756,0x763,0x7e4,0x864,0x87c,0x87e,0x881,0x889,0x8a0

task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_10_bool = Obj();
	func_2172();
	return 0;
}


task_0_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2174(var_15_object);
	return 0;
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "kill";
	if(var_12_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


task_1_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_10_bool = Obj();
	func_2172();
	return 0;
}


task_1_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2174(var_15_object);
	return 0;
}


task_1_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
	}
	return 0;
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_10_object = Obj();
	func_2172();
	return 0;
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_object = var_14_object;
	var_11_object = var_15_object;
	func_2174(var_15_object);
	return 0;
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_12_bool = var_10_string == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_950(var_10_string);
	}
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_12_bool = var_10_int == (int)1;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_13_object = var_1_object;
		func_1953(var_13_object);
	} else {
		var_18_int = 0;
		var_10_int = var_18_int;
		func_1094(var_9_bool, var_10_int, var_18_int);
	}
	return 0;
	
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_bool = var_2_int == 0; //@nz
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = true;
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_1757(var_14_object);
	}
	return 0;
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_int = var_2_int;
		if(var_13_int != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object);
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_950(var_10_object);
	var_10_object = Obj();
	func_2208();
	return 0;
}


task_3_event_5(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	TaskCall(4);
	func_1162();
	TaskReturn();
	return 0;
}


task_3_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_12_bool = var_10_string == "cleanup";
	if(var_12_bool != 0) {
		var_13_object = Obj();
		func_1820(var_13_object);
		RemoveActor(var_13_object);
	}
	return 0;
}


task_5_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_2020(var_14_object);
	}
	return 2;
}


task_5_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0;
}


task_5_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0;
}


task_5_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0;
}


event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_object = Obj();
	func_1820(var_10_object);
	RemoveActor(var_10_object);
	Hold();
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1664(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1732(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_2148(var_11_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	Hold();
	return 0;
}


func_0(var_0_bool, var_67_bool, var_68_object, var_187_object)
{
	var_70_object = Obj(); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_object = Obj(); var_74_cvector = CVector(0,0,0); var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_object = Obj(); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_object = Obj(); var_81_cvector = CVector(0,0,0); var_82_float = 0; var_83_cvector = CVector(0,0,0);
	var_84_object = Obj();
	var_68_object = var_84_object;
	func_1953(var_84_object);
	var_0_bool = false;
	var_89_bool = 0; var_90_object = Obj();
	var_68_object = var_90_object;
	func_1611(var_89_bool, var_90_object);
	var_103_bool = 0; var_104_object = Obj();
	var_68_object = var_104_object;
	func_1577(var_103_bool, var_104_object);
	var_105_bool = var_103_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_67_bool = 0;
		return 14;
	}
	func_1962();
	Face(var_68_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_114_bool = 0; var_115_object = Obj();
	var_68_object = var_115_object;
	func_1577(var_114_bool, var_115_object);
	var_116_bool = var_114_bool == 0; //@nz
	if(var_116_bool != 0) {
		StopAsync();
		var_67_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_77_object);
	GetGeometryLocator("knife", var_79_bool, var_78_cvector);
	AddActorByType(var_80_object, "scripted", var_77_object, var_78_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_124_object = Obj();
	func_1820(var_124_object);
	@@var_80_object:SetScriptProperty("Owner", var_124_object);
	@@var_80_object:SetScriptProperty("Target", var_68_object);
	@@var_68_object:GetPosition(var_81_cvector);
	@@var_68_object:GetEyesHeight(var_82_float);
	var_126_float = GetByIndex(var_81_cvector, 1);
	var_128_int = var_82_float - (int)10;
	var_126_float = var_126_float + var_128_int;
	SetByIndex(var_81_cvector, 1) = var_126_float;
	var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_float = 0;
	var_78_cvector = var_130_cvector;
	var_81_cvector = var_131_cvector;
	func_1979(var_129_cvector, var_130_cvector, var_131_cvector, (float)2000.0);
	var_129_cvector = var_83_cvector;
	@@var_80_object:SetScriptProperty("StartDirection", var_83_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_181_bool = var_0_bool;
	if(var_181_bool != 0) {
		var_67_bool = 1;
		return 14;
	}
	var_182_bool = 0; var_183_object = Obj();
	var_68_object = var_183_object;
	func_1577(var_182_bool, var_183_object);
	var_184_bool = var_182_bool == 0; //@nz
	if(var_184_bool != 0) {
		var_67_bool = 0;
		return 14;
	}
	var_185_bool = 0; var_186_object = Obj();
	var_68_object = var_186_object;
	TaskCall(1);
	func_126(var_185_bool, var_186_object);
	TaskReturn();
	var_187_object = var_67_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_1536(var_33_bool, var_34_object)
{
	var_35_bool = 0; var_36_bool = 0;
	@@var_34_object:IsDead(var_36_bool);
	var_36_bool = var_33_bool;
	return 2;
}


func_1541(var_22_bool, var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	var_28_bool = var_23_object == 0; //@ne
	if(var_28_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	var_29_bool = 0;
	var_29_bool = 0;
	var_32_bool = IsFuncExist(var_23_object, "IsDead", (int)1);
	if(var_32_bool != 0) {
		var_33_bool = 0; var_34_object = Obj();
		var_23_object = var_34_object;
		func_1536(var_33_bool, var_34_object);
		if(var_33_bool != 0) {
			var_29_bool = 1;
		}
	}
	if(var_29_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	GetScene(var_26_object);
	var_37_bool = var_26_object == 0; //@ne
	if(var_37_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	@@var_23_object:GetScene(var_27_object);
	var_38_bool = var_26_object != var_27_object;
	if(var_38_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	var_22_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2064(var_102_string)
{
	var_103_object = Obj(); var_104_int = 0; var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; var_108_bool = 0;
	CreateInvItem(var_106_object);
	@@var_106_object:SetItemName(var_102_string);
	@@var_106_object:SetProperty("Organ", (int)1);
	@@var_106_object:GetItemID(var_107_int);
	AddItem(var_108_bool, var_106_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2081()
{
	var_96_int = 0;
	func_2014(var_96_int);
	var_101_bool = var_96_int != (int)1;
	if(var_101_bool != 0) {
		return 0;
	}
	var_102_string = "";
	func_2064("liver");
	var_113_string = "";
	func_2064("kidney");
	var_114_string = "";
	func_2064("heart");
	var_115_string = "";
	func_2064("blood");
	return 0;
}


func_1577(var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_19_object = var_23_object;
	func_1541(var_22_bool, var_23_object);
	var_39_bool = var_22_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	var_40_bool = 0; var_41_object = Obj(); var_42_string = "";
	var_19_object = var_41_object;
	func_1398(var_40_bool, var_41_object, "noaccess");
	var_49_bool = var_40_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_18_bool = 1;
		return 2;
	}
	@@var_19_object:GetProperty("noaccess", var_21_int);
	var_18_bool = var_21_int == (int)0;
	return 2;
}


func_2105()
{
	var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	ClearSubContainer((int)0);
	var_21_int = 0; var_22_int = 0;
	func_2033((int)300, (int)750);
	var_40_string = ""; var_41_int = 0; var_42_int = 0;
	func_1768("Knife", (int)1, (int)8);
	var_51_string = ""; var_52_int = 0; var_53_int = 0;
	func_1768("lockpick", (int)1, (int)6);
	var_54_int = 0; var_55_string = "";
	func_2135(var_54_int, "grabitel_mark");
	AddItem(var_19_bool, var_54_int, (int)0, (int)1);
	return 4;
}


func_1601(var_93_bool, var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0;
	GetPosition(var_98_cvector);
	var_99_cvector = var_94_cvector - var_98_cvector;
	var_101_float = GetByIndex(var_99_cvector, 0);
	var_102_float = GetByIndex(var_99_cvector, 2);
	Rotate(var_101_float, var_102_float, var_100_bool);
	var_100_bool = var_93_bool;
	return 6;
}


func_1094(var_0_bool, var_1_object, var_18_int)
{
	var_20_bool = var_18_int != (int)0;
	if(var_20_bool != 0) {
		return 0;
	}
	var_21_bool = 0; var_22_object = Obj();
	var_22_object = var_1_object;
	func_1132(var_21_bool, var_22_object);
	var_57_bool = var_21_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1611(var_89_bool, var_90_object)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	@@var_90_object:GetPosition(var_92_cvector);
	var_93_bool = 0; var_94_cvector = CVector(0,0,0);
	var_92_cvector = var_94_cvector;
	func_1601(var_93_bool, var_94_cvector);
	var_93_bool = var_89_bool;
	return 2;
}


func_1620(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = var_27_object == 0; //@ne
	if(var_42_bool != 0) {
		return 14;
	}
	IsDead(var_35_bool);
	var_43_bool = var_35_bool;
	if(var_43_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_36_int);
	var_45_bool = var_36_int < (int)0;
	if(var_45_bool != 0) {
		return 14;
	}
	@@var_27_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_57_int = var_41_string + "1";
	var_59_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 14;
	
}


func_2135(var_33_int, var_34_string)
{
	var_35_int = 0; var_36_int = 0;
	GetInvItemByName(var_36_int, var_34_string);
	var_36_int = var_33_int;
	return 2;
}


func_1116(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2148(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1393(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_2105();
		var_58_bool = 0; var_59_object = Obj(); var_60_float = 0;
		var_11_object = var_59_object;
		func_1891(var_58_bool, var_59_object, (float)0.029999999329447746);
	}
	func_2081();
	var_116_object = Obj();
	var_11_object = var_116_object;
	TaskCall(5);
	func_1216(var_116_object);
	TaskReturn();
	return 0;
}


func_1132(var_310_bool, var_311_object)
{
	var_312_bool = 0; var_313_object = Obj();
	var_311_object = var_313_object;
	func_1577(var_312_bool, var_313_object);
	var_312_bool = var_310_bool;
	return 0;
}


func_1139(var_328_string)
{
	var_328_string = "walk";
	return 0;
}


func_1141(var_329_string)
{
	var_329_string = "run";
	return 0;
}


func_2172()
{
	return 0;
}


func_126(var_185_bool, var_186_object)
{
	var_193_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_194_object = Obj(); var_195_bool = 0; var_196_float = 0;
	var_186_object = var_194_object;
	func_203(var_190_bool, var_191_float, var_192_int, var_185_bool, var_186_object, var_194_object, (bool)1, (float)200.0);
	var_668_bool = 0;
	var_668_bool = 0;
	var_669_bool = GlobalVars[0];
	if(var_669_bool != 0) {
		var_670_int = var_3_int;
		if(var_670_int != 0) {
			var_668_bool = 1;
		}
	}
	if(var_668_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_673_bool = GlobalVars[0];
	var_673_bool = var_185_bool;
	return 0;
}


func_2174(var_13_bool)
{
	var_13_bool = 0;
	return 0;
}


func_1664(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_object = var_14_object;
	if(var_37_object != 0) {
		var_39_bool = var_15_int != (int)4;
		if(var_39_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
		var_44_cvector = CVector(0,0,0); var_45_object = Obj();
		var_14_object = var_45_object;
		func_1378(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1826(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1693:
		var_56_int = "hit" + var_28_int;
		GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector);
		var_57_bool = var_29_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_105_int = var_31_cvector | var_26_cvector;
			var_107_bool = var_105_int >= (float)0.7071067690849304;
			if(var_107_bool != 0) {
				@@var_27_object:add(var_30_cvector);
			}
			var_28_int = var_28_int + (int)1;
			goto Label_1693;
		}
		@@var_27_object:size(var_32_int);
		var_58_int = var_32_int;
		if(var_58_int != 0) {
			irand(var_33_int, var_32_int);
			@@var_27_object:get(var_34_cvector, var_33_int);
			var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
			var_14_object = var_59_object;
			var_15_int = var_60_int;
			var_16_float = var_61_float;
			var_34_cvector = var_62_cvector;
			var_63_cvector = -var_26_cvector;
			func_1732(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1620(var_104_object);
	return 18;
	
}


func_643(var_3_int)
{
	var_3_int = true;
	return 0;
}


func_645(var_636_bool, var_637_float)
{
	var_638_float = 0; var_639_bool = 0; var_640_float = 0; var_641_bool = 0;
	rand(var_640_float);
	var_642_bool = var_640_float < var_637_float;
	if(var_642_bool != 0) {

	Label_650:
		IsAnimationPlaying(var_641_bool);
		var_643_bool = var_641_bool == 0; //@nz
		if(var_643_bool != 0) {
		} else {
			var_644_bool = 0;
			func_743(var_644_bool);
			if(var_644_bool != 0) {
				var_636_bool = 1;
				sync();
				goto Label_650;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_847(var_641_bool);
	}
	goto Label_670;
	
Label_670:
	var_636_bool = 0;
	return 4;
	
}


func_1162()
{
	var_10_object = Obj(); var_11_object = Obj();
	FindActor(var_11_object, "player");
	var_13_bool = var_11_object == 0; //@nz
	if(var_13_bool != 0) {
		return 2;
	}
Label_1169:
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1179(var_10_object, var_11_object, var_14_bool, var_15_object);
	Sleep((int)1);
	goto Label_1169;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_154(var_521_float)
{
	var_521_float = 0.15000000596046448;
	return 0;
}


func_1179(var_14_bool, var_15_object, var_69_bool, var_676_object)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = 0; var_19_object = Obj();
	var_15_object = var_19_object;
	func_1577(var_18_bool, var_19_object);
	var_52_bool = var_18_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	var_53_float = 0; var_54_object = Obj();
	var_15_object = var_54_object;
	func_1385(var_53_float, var_54_object);
	var_53_float = var_17_float;
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_float = 0;
	var_17_float = var_62_float;
	func_1878(var_61_bool, var_62_float, (float)250000.0, (float)3240000.0);
	if(var_61_bool != 0) {
		var_67_bool = 0; var_68_object = Obj();
		var_15_object = var_68_object;
		TaskCall(0);
		func_0(var_17_float, var_69_bool, var_67_bool, var_68_object);
		TaskReturn();
		var_69_bool = var_14_bool;
		return 2;
	}
	var_674_bool = 0; var_675_object = Obj();
	var_15_object = var_675_object;
	TaskCall(1);
	func_126(var_674_bool, var_675_object);
	TaskReturn();
	var_676_object = var_14_bool;
	return 2;
}


func_157(var_528_int)
{
	var_528_int = 0;
	return 0;
}


func_672(var_0_bool, var_416_bool, var_417_float)
{
	var_418_bool = 0; var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_float = 0; var_423_bool = 0; var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_float = 0;
	
Label_673:
	IsAnimationPlaying(var_423_bool);
	var_428_bool = var_423_bool == 0; //@nz
	if(var_428_bool != 0) {
	} else {
		var_429_bool = 0;
		func_743(var_429_bool);
		if(var_429_bool != 0) {
			var_416_bool = 1;
			return 10;
		}
		var_472_bool = 0; var_473_object = Obj();
		var_473_object = var_0_bool;
		func_1577(var_472_bool, var_473_object);
		var_474_bool = var_472_bool == 0; //@nz
		if(var_474_bool != 0) {
			var_416_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_424_cvector);
		GetPFPosition(var_425_cvector);
		var_426_cvector = var_424_cvector - var_425_cvector;
		var_427_float = var_426_cvector | var_426_cvector;
		var_475_float = var_417_float * var_417_float;
		var_476_bool = var_427_float < var_475_float;
		if(var_476_bool != 0) {
			var_477_bool = 0; var_478_float = 0;
			var_417_float = var_478_float;
			func_506(var_426_cvector, var_427_float, var_477_bool, var_478_float);
			var_416_bool = 1;
			sync();
			goto Label_673;
		}
		return 10;
	}
	func_847(var_427_float);
	var_416_bool = 0;
	return 10;
	
}


func_160(var_589_int)
{
	var_589_int = 1;
	return 0;
}


func_162(var_590_object, var_591_float)
{
	var_592_bool = 0;
	var_592_bool = 0;
	var_594_bool = var_591_float > (int)0;
	if(var_594_bool != 0) {
		var_595_bool = 0; var_596_object = Obj();
		var_590_object = var_596_object;
		func_1505(var_595_bool, var_596_object);
		if(var_595_bool != 0) {
			var_592_bool = 1;
		}
	}
	if(var_592_bool != 0) {
		var_612_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_643(var_591_float);
	}
	return 0;
}


func_1216(var_116_object)
{
	EventDisable(0);
	var_117_object = Obj();
	var_116_object = var_117_object;
	func_1241(var_117_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1227:
	Hold();
	goto Label_1227;
}
EMIT "Return(); Pop(0)";


func_1732(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1620(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_203(var_0_bool, var_3_int, var_5_float, var_194_object, var_195_bool, var_196_float, var_265_bool, var_357_bool)
{
	var_197_float = 0; var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_bool = 0; var_201_bool = 0; var_202_float = 0; var_203_cvector = CVector(0,0,0); var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_bool = 0; var_207_float = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_bool = 0; var_212_bool = 0; var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_float = 0;
	func_432(var_216_cvector, var_217_bool, var_218_float);
	var_5_float = 0;
	var_243_bool = IsFuncExist(var_194_object, "@GetAttackDistance", (int)1);
	if(var_243_bool != 0) {
		@@var_194_object:GetAttackDistance(var_208_float);
		var_208_float = var_208_float + (int)50;
	} else {
							var_196_float = var_208_float;
	}
	var_246_bool = var_208_float >= (int)150;
	if(var_246_bool != 0) {
		var_208_float = 150;
	}
	var_3_int = false;
	var_0_bool = var_194_object;
	IsPlayerActor(var_0_bool, var_211_bool);
	var_247_bool = var_211_bool;
	if(var_247_bool != 0) {
		PlayGlobalMusic("attack");
		var_249_object = Obj();
		func_1820(var_249_object);
		SendPlayerEnemy(var_194_object, var_249_object);
	}
	var_250_bool = var_195_bool;
	if(var_250_bool != 0) {
		var_212_bool = 0;
	} else {
						var_212_bool = 1;

	}
	var_213_float = (float)300.0 + var_208_float;
	
Label_243:
	var_252_bool = 0;
	var_252_bool = 0;
	var_253_bool = 0; var_254_object = Obj();
	var_254_object = var_0_bool;
	func_1577(var_253_bool, var_254_object);
	if(var_253_bool != 0) {
		var_255_bool = var_3_int == 0; //@nz
		if(var_255_bool != 0) {
			var_252_bool = 1;
		}
	}
	if(var_252_bool != 0) {
		func_847(var_218_float);
		@@@var_0_bool:GetPFPosition(var_209_cvector);
		GetPFPosition(var_210_cvector);
		var_214_cvector = var_209_cvector - var_210_cvector;
		var_215_float = var_214_cvector | var_214_cvector;
		var_257_float = var_213_float * var_213_float;
		var_258_bool = var_215_float >= var_257_float;
		if(var_258_bool != 0) {
			var_259_bool = 0; var_260_object = Obj(); var_261_float = 0; var_262_float = 0; var_263_bool = 0; var_264_bool = 0;
			var_260_object = var_0_bool;
			var_208_float = var_261_float;
			TaskCall(2);
			func_887(var_267_bool, var_259_bool, var_260_object, var_261_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_342_bool = var_265_bool == 0; //@nz
			if(var_342_bool != 0) {
			} else {
				var_212_bool = 0;
		} else {
				var_348_float = var_196_float * var_196_float;
				var_349_bool = var_215_float >= var_348_float;
				if(var_349_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_216_cvector);
					CanReachByPF(var_217_bool, var_216_cvector);
					var_350_bool = var_217_bool == 0; //@nz
					if(var_350_bool != 0) {
						var_351_bool = 0; var_352_object = Obj(); var_353_float = 0; var_354_float = 0; var_355_bool = 0; var_356_bool = 0;
						var_352_object = var_0_bool;
						var_208_float = var_353_float;
						TaskCall(2);
						func_887(var_359_bool, var_351_bool, var_352_object, var_353_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_360_bool = var_357_bool == 0; //@nz
						if(var_360_bool != 0) {
							goto Label_415;
						}
						var_212_bool = 0;
						goto Label_243;
					}
					var_361_bool = var_212_bool == 0; //@nz
					if(var_361_bool != 0) {
						var_362_object = Obj();
						var_362_object = var_0_bool;
						func_1746(var_362_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_847(var_218_float);
						StopAsync();
						var_212_bool = 1;
						var_373_bool = 0; var_374_object = Obj();
						var_374_object = var_0_bool;
						func_1577(var_373_bool, var_374_object);
						var_375_bool = var_373_bool == 0; //@nz
						if(var_375_bool != 0) {
							goto Label_415;
						}
					}
					rand(var_218_float);
					var_376_bool = 0;
					var_378_bool = var_218_float < (float)0.19999998807907104;
					if(var_378_bool != 1) {
						var_379_bool = 0;
						func_804((bool)1, var_379_bool);
						if(var_379_bool != 1) {
							var_376_bool = 0;
						}
					}
					if(var_376_bool != 0) {
						Face(var_0_bool);
						func_852();
						PlayAnimation("all", "attack_stay");
						var_416_bool = 0; var_417_float = 0;
						var_196_float = var_417_float;
						func_672(var_218_float, var_416_bool, var_417_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_847(var_218_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_655_bool = 0;
						func_804(var_218_float, var_655_bool);
						var_656_bool = var_655_bool == 0; //@nz
						if(var_656_bool == 0) goto Label_405;
						var_657_bool = 0; var_658_object = Obj();
						var_658_object = var_0_bool;
						func_1577(var_657_bool, var_658_object);
						var_659_bool = var_657_bool == 0; //@nz
						if(var_659_bool != 0) {
							goto Label_415;
						}
						@@@var_0_bool:GetPFPosition(var_209_cvector);
						GetPFPosition(var_210_cvector);
						var_214_cvector = var_209_cvector - var_210_cvector;
						var_215_float = var_214_cvector | var_214_cvector;
						var_660_float = var_196_float * var_196_float;
						var_661_bool = var_215_float < var_660_float;
						if(var_661_bool == 0) goto Label_405;
						var_662_bool = 0; var_663_float = 0;
						var_196_float = var_663_float;
						func_506(var_217_bool, var_218_float, var_662_bool, var_663_float);
						var_664_bool = var_662_bool == 0; //@nz
						if(var_664_bool == 0) goto Label_405;
						goto Label_415;
				}
					var_665_bool = 0; var_666_float = 0;
					var_196_float = var_666_float;
					func_506(var_217_bool, var_218_float, var_665_bool, var_666_float);
					var_667_bool = var_665_bool == 0; //@nz
					if(var_667_bool != 0) {
						goto Label_415;
					}
					var_212_bool = 1;

				}
			Label_405:
				goto Label_414;
		}
		Label_414:
			goto Label_243;

		}
	}
Label_415:
	WaitForAnimEnd();
	var_343_int = var_3_int;
	if(var_343_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_346_bool = var_211_bool;
	if(var_346_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_715(var_0_bool, var_431_bool)
{
	var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0; var_436_float = 0; var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0; var_441_float = 0;
	var_442_bool = 0; var_443_object = Obj();
	var_443_object = var_0_bool;
	func_1577(var_442_bool, var_443_object);
	var_444_bool = var_442_bool == 0; //@nz
	if(var_444_bool != 0) {
		var_431_bool = 0;
		return 10;
	}
	var_445_bool = 0;
	func_804(var_441_float, var_445_bool);
	if(var_445_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_437_cvector);
		GetPFPosition(var_438_cvector);
		var_439_cvector = var_437_cvector - var_438_cvector;
		var_440_float = var_439_cvector | var_439_cvector;
		@@@var_0_bool:GetAttackDistance(var_441_float);
		var_441_float = var_441_float + (int)50;
		var_447_float = var_441_float * var_441_float;
		var_431_bool = var_440_float <= var_447_float;
		return 10;
	}
	var_431_bool = 0;
	return 10;
}


func_1746(var_362_object)
{
	var_363_cvector = CVector(0,0,0); var_364_cvector = CVector(0,0,0); var_365_cvector = CVector(0,0,0); var_366_cvector = CVector(0,0,0); var_367_cvector = CVector(0,0,0); var_368_cvector = CVector(0,0,0);
	@@var_362_object:GetPosition(var_366_cvector);
	GetPosition(var_367_cvector);
	var_368_cvector = var_366_cvector - var_367_cvector;
	var_369_float = GetByIndex(var_368_cvector, 0);
	var_370_float = GetByIndex(var_368_cvector, 2);
	RotateAsync(var_369_float, var_370_float);
	return 6;
}


func_1241(var_117_object)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_string = ""; var_123_object = Obj(); var_124_bool = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_string = ""; var_133_object = Obj(); var_134_bool = 0; var_135_bool = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0);
	var_138_bool = var_117_object == 0; //@ne
	if(var_138_bool != 0) {
		var_139_string = "";
		func_1332("fdie");
	} else {
		@@var_117_object:GetPosition(var_128_cvector);
		GetPosition(var_129_cvector);
		GetDirection(var_130_cvector);
		var_131_cvector = var_129_cvector - var_128_cvector;
		var_171_float = GetByIndex(var_131_cvector, 0);
		var_172_float = GetByIndex(var_130_cvector, 0);
		var_173_float = var_171_float * var_172_float;
		var_174_float = GetByIndex(var_131_cvector, 2);
		var_175_float = GetByIndex(var_130_cvector, 2);
		var_176_float = var_174_float * var_175_float;
		var_177_int = var_173_float + var_176_float;
		var_179_bool = var_177_int >= (int)0;
		if(var_179_bool != 0) {
			var_132_string = "fdie";
		} else {
				var_132_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_117_object = var_133_object;
		var_182_bool = IsFuncExist(var_117_object, "GetScriptProperty", (int)2);
		if(var_182_bool != 0) {
			@@var_117_object:HasScriptProperty(var_134_bool, "Owner");
			var_184_bool = var_134_bool;
			if(var_184_bool != 0) {
				@@var_117_object:GetScriptProperty(var_133_object, "Owner");
				var_186_bool = var_133_object == 0; //@ne
				if(var_186_bool != 0) {
					var_117_object = var_133_object;
				}
			}
		}
		var_189_bool = IsFuncExist(var_133_object, "@GetEyesHeight", (int)1);
		if(var_189_bool != 0) {
			@@var_133_object:GetEyesHeight(var_136_float);
			var_137_cvector = CVector(0.0, 0.0, 0.0);
			var_190_float = GetByIndex(var_137_cvector, 1);
			var_136_float = var_190_float;
			SetByIndex(var_137_cvector, 1) = var_190_float;
			LookAsync(var_117_object, "head", var_137_cvector);
			var_135_bool = 1;
		} else {
			var_135_bool = 0;

		}
		var_192_string = "";
		var_132_string = var_192_string;
		func_1779(var_192_string);
		PlayAnimation("all", var_132_string);
		WaitForAnimEnd();
		var_194_bool = var_135_bool;
		if(var_194_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_132_string);
		RemoveEnvelope();
		var_133_object = 0;
	}
	return 20;
	
}


func_1757(var_276_object)
{
	var_277_float = 0; var_278_cvector = CVector(0,0,0); var_279_float = 0; var_280_cvector = CVector(0,0,0);
	@@var_276_object:GetEyesHeight(var_279_float);
	var_280_cvector = CVector(0.0, 0.0, 0.0);
	var_281_float = GetByIndex(var_280_cvector, 1);
	var_279_float = var_281_float;
	SetByIndex(var_280_cvector, 1) = var_281_float;
	LookAsync(var_276_object, "head", var_280_cvector);
	return 4;
}


func_743(var_429_bool)
{
	var_430_bool = 0;
	var_430_bool = 0;
	var_431_bool = 0;
	func_715(var_430_bool, var_431_bool);
	if(var_431_bool != 0) {
		var_448_bool = 0;
		func_759(var_429_bool, var_430_bool, var_448_bool);
		if(var_448_bool != 0) {
			var_430_bool = 1;
		}
	}
	if(var_430_bool != 0) {
		var_429_bool = 1;
		return 0;
	}
	var_429_bool = 0;
	return 0;
}


func_1768(var_40_string, var_41_int, var_42_int)
{
	var_43_bool = 0; var_44_bool = 0;
	var_45_bool = 0; var_46_int = 0; var_47_int = 0;
	var_41_int = var_46_int;
	var_42_int = var_47_int;
	func_1886(var_45_bool, var_46_int, var_47_int);
	if(var_45_bool != 0) {
		AddItem(var_44_bool, var_40_string, (int)0);
	}
	return 2;
}


func_1779(var_140_string)
{
	var_141_bool = 0; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_bool = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_bool = 0; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_bool = 0; var_154_float = 0; var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0);
	IsExisting3DSound(var_149_bool, var_140_string);
	var_157_bool = var_149_bool == 0; //@nz
	if(var_157_bool != 0) {
		var_150_int = 0;

	Label_1785:
		var_159_int = var_150_int + (int)1;
		var_160_int = var_140_string + var_159_int;
		IsExisting3DSound(var_151_bool, var_160_int);
		var_161_bool = var_151_bool == 0; //@nz
		if(var_161_bool != 0) {
		} else {
			var_150_int = var_150_int + (int)1;
			goto Label_1785;
		}
		var_162_bool = var_150_int == 0; //@nz
		if(var_162_bool != 0) {
			return 16;
		}
		irand(var_152_int, var_150_int);
		var_164_int = var_152_int + (int)1;
		var_140_string = var_140_string + var_164_int;
	}
	Is3DSoundLoaded(var_153_bool, var_140_string);
	var_165_bool = var_153_bool;
	if(var_165_bool != 0) {
		GetEyesHeight(var_154_float);
		GetDirection(var_155_cvector);
		var_156_cvector = var_155_cvector * (int)50;
		var_167_float = GetByIndex(var_156_cvector, 1);
		var_167_float = var_167_float + var_154_float;
		SetByIndex(var_156_cvector, 1) = var_167_float;
		PlayGlobalSound(var_140_string, var_156_cvector);
	}
	return 16;
	
}


func_759(var_0_bool, var_4_bool, var_448_bool)
{
	var_449_object = Obj(); var_450_bool = 0; var_451_float = 0; var_452_cvector = CVector(0,0,0); var_453_cvector = CVector(0,0,0); var_454_object = Obj(); var_455_bool = 0; var_456_float = 0; var_457_cvector = CVector(0,0,0); var_458_cvector = CVector(0,0,0);
	GetScene(var_454_object);
	var_455_bool = 0;
	
Label_763:
	var_459_cvector = CVector(0,0,0); var_460_object = Obj();
	var_460_object = var_0_bool;
	func_1378(var_459_cvector, var_460_object);
	var_465_int = -var_459_cvector;
	FindDirLength(var_456_float, var_465_int, var_4_bool);
	var_466_bool = var_456_float < var_4_bool;
	if(var_466_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_457_cvector);
		GetPFPosition(var_458_cvector);
		WaitForAnimEnd();
		func_847(var_458_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_455_bool = 1;
		var_470_bool = 0;
		func_715(var_458_cvector, var_470_bool);
		var_471_bool = var_470_bool == 0; //@nz
		if(var_471_bool != 0) {
			goto Label_801;
		}
		goto Label_763;
	}
Label_801:
	var_455_bool = var_448_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1820(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1826(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_51_float;
	return 2;
}


func_804(var_0_bool, var_379_bool)
{
	var_380_bool = 0; var_381_bool = 0;
	var_384_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_384_bool != 0) {
		@@@var_0_bool:IsAttacking(var_381_bool);
		var_381_bool = var_379_bool;
		return 2;
	}
	var_379_bool = 0;
	return 2;
}


func_1836(var_562_float, var_563_float, var_564_float)
{
	var_567_bool = var_563_float < var_564_float;
	if(var_567_bool != 0) {
		var_563_float = var_562_float;
	} else {
		var_564_float = var_562_float;
	}
	return 0;
	
}


func_815(var_2_int, var_5_float)
{
	var_492_float = 0; var_493_int = 0; var_494_float = 0; var_495_int = 0;
	var_496_bool = var_2_int == 0; //@nz
	if(var_496_bool != 0) {
		return 4;
	}
	var_497_float = var_5_float;
	if(var_497_float != 0) {
		var_5_float = var_5_float + (int)-1;
		var_500_bool = var_5_float > (int)0;
		if(var_500_bool != 0) {
			return 4;
		}
	}
	rand(var_494_float);
	var_501_float = 0;
	func_861(var_501_float);
	var_502_bool = var_494_float < var_501_float;
	if(var_502_bool != 0) {
		irand(var_495_int, var_2_int);
		var_495_int = var_495_int + (int)1;
		var_505_int = "attack" + var_495_int;
		Speak(var_505_int);
		var_506_int = 0;
		func_859(var_506_int);
		var_5_float = var_506_int;
	}
	return 4;
}


func_1843(var_149_float, var_150_float, var_151_float, var_152_float)
{
	var_153_float = var_151_float * var_151_float;
	var_155_float = (int)4 * var_150_float;
	var_156_float = var_155_float * var_152_float;
	var_149_float = var_153_float - var_156_float;
	return 0;
}


func_1332(var_139_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_140_string = "";
	var_139_string = var_140_string;
	func_1779(var_140_string);
	PlayAnimation("all", var_139_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_139_string);
	RemoveEnvelope();
	return 0;
}


func_1850(var_163_float, var_164_float, var_165_float, var_167_float)
{
	var_168_float = 0; var_169_float = 0;
	var_170_int = -var_165_float;
	var_171_int = var_170_int - var_167_float;
	var_173_float = (int)2 * var_164_float;
	var_169_float = var_171_int / var_173_float;
	var_175_bool = var_169_float > (int)0;
	if(var_175_bool != 0) {
		var_169_float = var_163_float;
		return 2;
	}
	var_176_int = -var_165_float;
	var_177_int = var_176_int + var_167_float;
	var_179_float = (int)2 * var_164_float;
	var_163_float = var_177_int / var_179_float;
	return 2;
}


func_1867(var_87_float, var_88_float, var_89_float, var_90_float)
{
	var_91_bool = var_88_float < var_89_float;
	if(var_91_bool != 0) {
		var_89_float = var_87_float;
		return 0;
	}
	var_92_bool = var_88_float > var_90_float;
	if(var_92_bool != 0) {
		var_90_float = var_87_float;
		return 0;
	}
	var_88_float = var_87_float;
	return 0;
}


func_847(var_0_bool)
{
	var_256_object = Obj();
	var_256_object = var_0_bool;
	func_1953(var_256_object);
	return 0;
}


func_852()
{
	var_385_string = "";
	func_1779("attack_stay");
	return 0;
}


func_1364(var_552_string, var_553_int)
{
	var_555_bool = var_553_int == (int)2;
	if(var_555_bool != 0) {
		var_552_string = "fire";
		return 0;
	EMIT "GOTO 0x560";
	}
	var_557_bool = var_553_int == (int)1;
	if(var_557_bool != 0) {
		var_552_string = "bullet";
		return 0;
	}
	var_552_string = "phys";
	return 0;
}


func_1878(var_61_bool, var_62_float, var_63_float, var_64_float)
{
	var_61_bool = 0;
	var_65_bool = var_62_float >= var_63_float;
	if(var_65_bool != 0) {
		var_66_bool = var_62_float <= var_64_float;
		if(var_66_bool != 0) {
			var_61_bool = 1;
		}
	}
	return 0;
}


func_857(var_635_bool)
{
	var_635_bool = 1;
	return 0;
}


func_859(var_506_int)
{
	var_506_int = 1;
	return 0;
}


func_861(var_501_float)
{
	var_501_float = 0.5;
	return 0;
}


func_1886(var_45_bool, var_46_int, var_47_int)
{
	var_48_int = 0; var_49_int = 0;
	irand(var_49_int, var_47_int);
	var_45_bool = var_49_int < var_46_int;
	return 2;
}


func_1378(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_1891(var_58_bool, var_59_object, var_60_float)
{
	var_61_bool = var_59_object == 0; //@nz
	if(var_61_bool != 0) {
		var_58_bool = 0;
		return 0;
	}
	var_63_bool = var_60_float > (int)0;
	if(var_63_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_94_bool = var_60_float < (int)0;
		if(var_94_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1912;
		}
		var_58_bool = 0;
		return 0;
	}
Label_1912:
	var_65_float = 0;
	var_60_float = var_65_float;
	func_1943(var_65_float);
	var_69_bool = 0; var_70_object = Obj(); var_71_string = ""; var_72_float = 0; var_73_float = 0; var_74_float = 0;
	var_59_object = var_70_object;
	var_60_float = var_72_float;
	func_1410(var_69_bool, var_70_object, "reputation", var_72_float, (float)0, (float)1);
	var_58_bool = 1;
	return 0;
	
}


func_1385(var_53_float, var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	GetPosition(var_58_cvector);
	@@var_54_object:GetPosition(var_59_cvector);
	var_60_cvector = var_59_cvector - var_58_cvector;
	var_53_float = var_60_cvector | var_60_cvector;
	return 6;
}


func_1393(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
	return 2;
}


func_1398(var_77_bool, var_78_object, var_79_string)
{
	var_80_bool = 0; var_81_bool = 0;
	var_84_bool = IsFuncExist(var_78_object, "HasProperty", (int)2);
	var_85_bool = var_84_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_77_bool = 0;
		return 2;
	}
	@@var_78_object:HasProperty(var_79_string, var_81_bool);
	var_81_bool = var_77_bool;
	return 2;
}


func_887(var_2_int, var_259_bool, var_260_object, var_261_float, var_262_float, var_263_bool, var_264_bool)
{
	var_268_bool = 0; var_269_bool = 0; var_270_bool = 0; var_271_bool = 0;
	var_272_object = Obj();
	var_260_object = var_272_object;
	func_1953(var_272_object);
	SetTimer((int)1, (int)5);
	CanSee(var_270_bool, var_260_object);
	var_275_bool = var_270_bool;
	if(var_275_bool != 0) {
		var_2_int = true;
		var_276_object = Obj();
		var_260_object = var_276_object;
		func_1757(var_276_object);
	} else {
		var_2_int = false;
	}
	var_283_bool = 0; var_284_object = Obj();
	var_260_object = var_284_object;
	func_1393(var_283_bool, var_284_object);
	if(var_283_bool != 0) {
		var_287_object = Obj();
		func_1820(var_287_object);
		SendPlayerEnemy(var_260_object, var_287_object);
	}
	var_288_bool = 0; var_289_object = Obj(); var_290_float = 0; var_291_float = 0; var_292_bool = 0; var_293_bool = 0;
	var_260_object = var_289_object;
	var_261_float = var_290_float;
	var_262_float = var_291_float;
	var_263_bool = var_292_bool;
	var_264_bool = var_293_bool;
	func_992(var_270_bool, var_271_bool, var_288_bool, var_289_object, var_290_float, var_291_float, var_292_bool, var_293_bool);
	var_288_bool = var_271_bool;
	var_339_int = var_2_int;
	if(var_339_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_271_bool = var_259_bool;
	return 4;
	
}


func_1410(var_69_bool, var_70_object, var_71_string, var_72_float, var_73_float, var_74_float)
{
	var_75_float = 0; var_76_float = 0;
	var_77_bool = 0; var_78_object = Obj(); var_79_string = "";
	var_70_object = var_78_object;
	var_71_string = var_79_string;
	func_1398(var_77_bool, var_78_object, var_79_string);
	var_86_bool = var_77_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_69_bool = 0;
		return 2;
	}
	@@var_70_object:GetProperty(var_71_string, var_76_float);
	var_87_float = 0; var_88_float = 0; var_89_float = 0; var_90_float = 0;
	var_88_float = var_76_float + var_72_float;
	var_73_float = var_89_float;
	var_74_float = var_90_float;
	func_1867(var_87_float, var_88_float, var_89_float, var_90_float);
	@@var_70_object:SetProperty(var_71_string, var_87_float);
	var_69_bool = 1;
	return 2;
}


func_1926(var_580_float)
{
	var_581_object = Obj(); var_582_object = Obj();
	CreateFloatVector(var_582_object);
	@@var_582_object:add(var_580_float);
	var_584_bool = var_580_float < (int)0;
	if(var_584_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_582_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1943(var_65_float)
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateFloatVector(var_67_object);
	@@var_67_object:add(var_65_float);
	SendWorldWndMessage((int)16, var_67_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1432(var_524_float, var_525_object, var_526_float, var_527_int)
{
	var_531_int = 0; var_532_string = ""; var_533_int = 0; var_534_float = 0; var_535_float = 0; var_536_float = 0; var_537_int = 0; var_538_string = ""; var_539_int = 0; var_540_float = 0; var_541_float = 0; var_542_float = 0;
	var_543_bool = 0; var_544_object = Obj(); var_545_string = "";
	var_525_object = var_544_object;
	func_1398(var_543_bool, var_544_object, "health");
	var_546_bool = var_543_bool == 0; //@nz
	if(var_546_bool != 0) {
		var_524_float = 0.0;
		return 12;
	}
	var_547_bool = 0; var_548_object = Obj(); var_549_string = "";
	var_525_object = var_548_object;
	func_1398(var_547_bool, var_548_object, "armor");
	var_550_bool = var_547_bool == 0; //@nz
	if(var_550_bool != 0) {
		var_537_int = 0;
	} else {
			@@var_525_object:GetProperty("armor", var_537_int);
	}
	var_552_string = ""; var_553_int = 0;
	var_527_int = var_553_int;
	func_1364(var_552_string, var_553_int);
	var_538_string = "armor_" + var_552_string;
	var_558_bool = 0; var_559_object = Obj(); var_560_string = "";
	var_525_object = var_559_object;
	var_538_string = var_560_string;
	func_1398(var_558_bool, var_559_object, var_560_string);
	var_561_bool = var_558_bool == 0; //@nz
	if(var_561_bool != 0) {
		var_539_int = 0;
	} else {
		@@var_525_object:GetProperty(var_538_string, var_539_int);

	}
	var_562_float = 0; var_563_float = 0; var_564_float = 0;
	var_565_int = var_537_int + var_539_int;
	var_563_float = var_565_int / (float)100.0;
	func_1836(var_562_float, var_563_float, (float)1);
	var_562_float = var_540_float;
	@@var_525_object:GetProperty("health", var_541_float);
	var_570_int = (int)1 - var_540_float;
	var_542_float = var_526_float * var_570_int;
	var_572_float = 0; var_573_float = 0; var_574_float = 0; var_575_float = 0;
	var_573_float = var_541_float - var_542_float;
	func_1867(var_572_float, var_573_float, (float)0, (float)1);
	@@var_525_object:SetProperty("health", var_572_float);
	var_578_bool = 0; var_579_object = Obj();
	var_525_object = var_579_object;
	func_1393(var_578_bool, var_579_object);
	if(var_578_bool != 0) {
		var_580_float = 0;
		var_580_float = -var_542_float;
		func_1926(var_580_float);
	}
	var_542_float = var_524_float;
	return 12;
	
}


func_1953(var_84_object)
{
	var_85_bool = 0; var_86_bool = 0;
	IsPlayerActor(var_84_object, var_86_bool);
	var_87_bool = var_86_bool;
	if(var_87_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1962()
{
	var_106_object = Obj(); var_107_object = Obj();
	GetScene(var_107_object);
	var_109_object = Obj();
	func_1820(var_109_object);
	BroadcastMessage("battle", var_109_object, var_107_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_432(var_1_object, var_2_int, var_4_bool)
{
	var_219_bool = 0; var_220_bool = 0; var_221_cvector = CVector(0,0,0); var_222_bool = 0; var_223_bool = 0; var_224_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_434:
	var_228_int = var_1_object + (int)1;
	var_229_int = "attack_begin" + var_228_int;
	HasAnimation(var_222_bool, "all", var_229_int);
	var_230_bool = var_222_bool == 0; //@nz
	if(var_230_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_434;
	}
	var_2_int = 0;
	
Label_448:
	var_233_int = var_2_int + (int)1;
	var_234_int = "attack" + var_233_int;
	IsExisting3DSound(var_223_bool, var_234_int);
	var_235_bool = var_223_bool == 0; //@nz
	if(var_235_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_448;

	}
	GetAnimationOffset(var_224_cvector, "all", "bjump");
	var_238_float = GetByIndex(var_224_cvector, 2);
	var_4_bool = -var_238_float;
	return 6;
	
}


func_1973(var_606_bool)
{
	var_607_bool = 0; var_608_bool = 0;
	GetVariable("god_mode", var_608_bool);
	var_608_bool = var_606_bool;
	return 2;
}


func_950(var_2_int)
{
	KillTimer((int)1);
	var_12_int = var_2_int;
	if(var_12_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1116(var_10_object);
	return 0;
}


func_1979(var_129_cvector, var_130_cvector, var_131_cvector, var_132_float)
{
	var_133_cvector = CVector(0,0,0); var_134_float = 0; var_135_float = 0; var_136_float = 0; var_137_float = 0; var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_float = 0; var_141_float = 0; var_142_float = 0; var_143_float = 0; var_144_float = 0;
	var_139_cvector = var_131_cvector - var_130_cvector;
	var_140_float = 250000;
	var_145_float = GetByIndex(var_139_cvector, 1);
	var_147_float = var_145_float * (int)1000;
	var_148_float = var_132_float * var_132_float;
	var_141_float = var_147_float - var_148_float;
	var_142_float = var_139_cvector | var_139_cvector;
	var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_float = 0;
	var_140_float = var_150_float;
	var_141_float = var_151_float;
	var_142_float = var_152_float;
	func_1843(var_149_float, var_150_float, var_151_float, var_152_float);
	var_149_float = var_143_float;
	var_158_bool = var_143_float < (int)0;
	if(var_158_bool != 0) {
		var_144_float = 1;
	} else {
		var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_float = 0;
		var_140_float = var_164_float;
		var_141_float = var_165_float;
		var_142_float = var_166_float;
		var_167_float = sqrt(var_143_float);
		func_1850(var_164_float, var_165_float, var_166_float, var_167_float);
		var_144_float = sqrt(var_163_float);
	}
	var_160_float = CVector(0.0, 500.0, 0.0) * var_144_float;
	var_161_float = var_160_float * var_144_float;
	var_162_int = var_139_cvector + var_161_float;
	var_129_cvector = var_162_int / var_144_float;
	return 12;
	
}


func_467(var_0_bool, var_510_float, var_511_int)
{
	var_512_object = Obj(); var_513_float = 0; var_514_float = 0; var_515_object = Obj(); var_516_float = 0; var_517_float = 0;
	var_519_float = var_510_float * (float)0.8999999761581421;
	GetVictim(var_519_float, var_515_object);
	ReportAttack(var_0_bool);
	var_520_bool = var_515_object == var_0_bool;
	if(var_520_bool != 0) {
		var_521_float = 0; var_522_object = Obj(); var_523_int = 0;
		var_515_object = var_522_object;
		var_511_int = var_523_int;
		func_154(var_523_int);
		var_521_float = var_516_float;
		var_524_float = 0; var_525_object = Obj(); var_526_float = 0; var_527_int = 0;
		var_515_object = var_525_object;
		var_516_float = var_526_float;
		var_528_int = 0; var_529_object = Obj(); var_530_int = 0;
		var_515_object = var_529_object;
		var_511_int = var_530_int;
		func_157(var_530_int);
		var_528_int = var_527_int;
		func_1432(var_524_float, var_525_object, var_526_float, var_527_int);
		var_524_float = var_517_float;
		var_589_int = 0;
		func_160(var_589_int);
		ReportHit(var_0_bool, var_589_int, var_517_float, var_516_float);
		var_590_object = Obj(); var_591_float = 0;
		var_515_object = var_590_object;
		var_517_float = var_591_float;
		func_162(var_590_object, var_591_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2014(var_96_int)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable("branch", var_98_int);
	var_98_int = var_96_int;
	return 2;
}


func_992(var_0_bool, var_1_object, var_288_bool, var_289_object, var_290_float, var_291_float, var_292_bool, var_293_bool)
{
	var_294_bool = 0; var_295_bool = 0; var_296_object = Obj(); var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_object = Obj(); var_302_bool = 0; var_303_bool = 0; var_304_object = Obj(); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_object = Obj();
	var_0_bool = false;
	var_1_object = var_289_object;
	var_293_bool = var_303_bool;
	
Label_996:
	var_310_bool = 0; var_311_object = Obj();
	var_289_object = var_311_object;
	func_1132(var_310_bool, var_311_object);
	var_314_bool = var_310_bool == 0; //@nz
	if(var_314_bool != 0) {
		var_288_bool = 0;
		return 16;
	}
	@@var_289_object:GetPosition(var_305_cvector);
	GetPosition(var_306_cvector);
	var_307_cvector = var_305_cvector - var_306_cvector;
	var_308_float = var_307_cvector | var_307_cvector;
	var_315_bool = 0;
	var_315_bool = 0;
	var_317_bool = var_291_float > (int)0;
	if(var_317_bool != 0) {
		var_318_float = var_291_float * var_291_float;
		var_319_bool = var_308_float > var_318_float;
		if(var_319_bool != 0) {
			var_315_bool = 1;
		}
	}
	if(var_315_bool != 0) {
		Stop();
		var_288_bool = 0;
		return 16;
	}
	var_320_float = var_290_float * var_290_float;
	var_321_bool = var_308_float > var_320_float;
	if(var_321_bool != 0) {
		@@var_289_object:GetPFPosition(var_305_cvector);
		FindPathTo(var_309_object, var_305_cvector);
		var_322_bool = var_309_object != 0; //@nn
		if(var_322_bool != 0) {
			var_309_object = var_304_object;
			var_309_object = 0;
		}
		var_323_bool = var_304_object != 0; //@nn
		if(var_323_bool != 0) {
			var_324_bool = var_303_bool;
			if(var_324_bool == 0) goto Label_1045;
			var_303_bool = 0;
			RotatePath(var_304_object, var_302_bool);
			var_325_bool = var_302_bool == 0; //@nz
			if(var_325_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_328_string = "";
				func_1139(var_328_string);
				var_329_string = "";
				func_1141(var_329_string);
				FollowPath(var_304_object, var_292_bool, var_302_bool, var_328_string, var_329_string);
				var_330_bool = var_302_bool == 0; //@nz
				if(var_330_bool != 0) {
					var_331_bool = var_0_bool;
					if(var_331_bool != 0) {
						var_304_object = 0;
						goto Label_1092;
					EMIT "GOTO 0x429";
					}
				} else {
					var_304_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_302_bool);
					var_334_bool = var_302_bool == 0; //@nz
					if(var_334_bool != 0) {
						var_335_bool = var_0_bool;
						if(var_335_bool != 0) {
							var_304_object = 0;
							goto Label_1092;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1092;
	}
			var_309_object = 0;
			goto Label_1090;

		Label_1090:
			var_304_object = 0;

		}
		goto Label_996;
	}
Label_1092:
	var_288_bool = !var_0_bool;
	return 16;
	
}


func_1505(var_595_bool, var_596_object)
{
	var_597_float = 0; var_598_float = 0;
	var_599_bool = 0; var_600_object = Obj(); var_601_string = "";
	var_596_object = var_600_object;
	func_1398(var_599_bool, var_600_object, "health");
	var_602_bool = var_599_bool == 0; //@nz
	if(var_602_bool != 0) {
		var_595_bool = 0;
		return 2;
	}
	var_603_bool = 0;
	var_603_bool = 0;
	var_604_bool = 0; var_605_object = Obj();
	var_596_object = var_605_object;
	func_1393(var_604_bool, var_605_object);
	if(var_604_bool != 0) {
		var_606_bool = 0;
		func_1973(var_606_bool);
		if(var_606_bool != 0) {
			var_603_bool = 1;
		}
	}
	if(var_603_bool != 0) {
		var_595_bool = 0;
		return 2;
	}
	@@var_596_object:GetProperty("health", var_598_float);
	var_595_bool = var_598_float <= (float)0.0;
	return 2;
}


func_2020(var_14_object)
{
	var_15_int = 0;
	func_2014(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_2033(var_21_int, var_22_int)
{
	var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_27_bool = var_21_int > var_22_int;
	if(var_27_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_25_int = 0;
	var_29_bool = var_21_int != var_22_int;
	if(var_29_bool != 0) {
		var_30_int = var_22_int - var_21_int;
		irand(var_25_int, var_30_int);
	} else {
		var_39_bool = var_21_int == (int)0;
		if(var_39_bool == 0) goto Label_2051;
		return 4;
	}
Label_2051:
	var_25_int = var_25_int + var_21_int;
	var_32_bool = var_25_int == (int)0;
	if(var_32_bool != 0) {
		return 4;
	}
	var_33_int = 0; var_34_string = "";
	func_2135(var_33_int, "Money");
	AddItem(var_26_bool, var_33_int, (int)0, var_25_int);
	return 4;
	
}


func_506(var_0_bool, var_1_object, var_477_bool, var_478_float)
{
	var_479_int = 0; var_480_bool = 0; var_481_int = 0; var_482_string = ""; var_483_int = 0; var_484_bool = 0; var_485_int = 0; var_486_string = "";
	func_847(var_486_string);
	irand(var_483_int, var_1_object);
	var_483_int = var_483_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_1962();
	var_491_int = "attack_begin" + var_483_int;
	PlayAnimation("all", var_491_int);
	WaitForAnimEnd();
	func_815(var_485_int, var_486_string);
	var_507_bool = 0; var_508_object = Obj();
	var_508_object = var_0_bool;
	func_1577(var_507_bool, var_508_object);
	var_509_bool = var_507_bool == 0; //@nz
	if(var_509_bool != 0) {
		StopAsync();
		var_477_bool = 0;
		return 8;
	}
	var_510_float = 0; var_511_int = 0;
	var_478_float = var_510_float;
	var_483_int = var_511_int;
	func_467(var_486_string, var_510_float, var_511_int);
	var_615_int = "attack_middle" + var_483_int;
	HasAnimation(var_484_bool, "all", var_615_int);
	var_616_bool = var_484_bool;
	if(var_616_bool != 0) {
		func_1962();
		var_619_int = "attack_middle" + var_483_int;
		PlayAnimation("all", var_619_int);
		WaitForAnimEnd();
		func_847(var_486_string);
		var_620_bool = 0; var_621_object = Obj();
		var_621_object = var_0_bool;
		func_1577(var_620_bool, var_621_object);
		var_622_bool = var_620_bool == 0; //@nz
		if(var_622_bool != 0) {
			StopAsync();
			var_477_bool = 0;
			return 8;
		}
		var_623_float = 0; var_624_int = 0;
		var_478_float = var_623_float;
		var_483_int = var_624_int;
		func_467(var_486_string, var_623_float, var_624_int);
		var_485_int = 1;

	Label_583:
		var_626_int = "attack_middle" + var_483_int;
		var_628_int = var_626_int + "_";
		var_486_string = var_628_int + var_485_int;
		HasAnimation(var_484_bool, "all", var_486_string);
		var_630_bool = var_484_bool == 0; //@nz
		if(var_630_bool != 0) {
		} else {
			func_1962();
			PlayAnimation("all", var_486_string);
			WaitForAnimEnd();
			func_847(var_486_string);
			var_646_bool = 0; var_647_object = Obj();
			var_647_object = var_0_bool;
			func_1577(var_646_bool, var_647_object);
			var_648_bool = var_646_bool == 0; //@nz
			if(var_648_bool != 0) {
				StopAsync();
				var_477_bool = 0;
				var_649_float = 0; var_650_int = 0;
				var_478_float = var_649_float;
				var_483_int = var_650_int;
				func_467(var_486_string, var_649_float, var_650_int);
				var_485_int = var_485_int + (int)1;
				goto Label_583;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_634_int = "attack_end" + var_483_int;
	PlayAnimation("all", var_634_int);
	var_635_bool = 0;
	func_857(var_635_bool);
	if(var_635_bool != 0) {
		var_636_bool = 0; var_637_float = 0;
		func_645(var_636_bool, (float)0.44999998807907104);
		StopAsync();
	}
	var_477_bool = 1;
	return 8;
	
}


