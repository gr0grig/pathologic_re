// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,irand/2,ResetAAS/0,Sleep/1,KillTimer/1,IsPlayerActor/2,SetTimer/2,Sleep/2,StopGroup0/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,IsOverrideActive/1,StopAnimation/0,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:Received steal|W:idle
// @GLOBALS: 0:bool:
// @RUN_OP: 0x9c
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0xf vars=object
// @EVENT_6: op=0x1d vars=
// @EVENT_22: op=0x96 vars=object,int,float,float
// @EVENT_16: op=0x98 vars=object,string
// @EVENT_41: op=0x9a vars=object
// @TASK_1: vars=bool,bool params=0
// @EVENT_0: op=0xc7 vars=object
// @EVENT_17: op=0xdb vars=object
// @EVENT_30: op=0xf3 vars=object,object,bool
// @EVENT_40: op=0x10f vars=object
// @EVENT_42: op=0x123 vars=object,string
// @EVENT_26: op=0x148 vars=string
// @EVENT_1: op=0x156 vars=object
// @EVENT_3: op=0x16c vars=object
// @EVENT_7: op=0x175 vars=int
// @EVENT_6: op=0x181 vars=
// @EVENT_41: op=0x195 vars=object
// @TASK_2: vars=object params=1
// @EVENT_0: op=0x1f7 vars=object
// @EVENT_17: op=0x20b vars=object
// @EVENT_30: op=0x223 vars=object,object,bool
// @EVENT_40: op=0x23f vars=object
// @EVENT_42: op=0x253 vars=object,string
// @EVENT_26: op=0x278 vars=string
// @EVENT_41: op=0x291 vars=object
// @EVENT_7: op=0x29a vars=int
// @EVENT_6: op=0x2bd vars=
// @EVENT_1: op=0x2c4 vars=object
// @TASK_3: vars=object,int,int,bool,float,int params=1
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_6: op=0x576 vars=
// @EVENT_7: op=0x5ae vars=int
// @EVENT_1: op=0x5c9 vars=object
// @EVENT_2: op=0x5d8 vars=object
// @EVENT_10: op=0x65e vars=object
// @EVENT_41: op=0x669 vars=object
// @STANDALONE_EVENT_16: op=0x982 vars=object,string
// @STANDALONE_EVENT_41: op=0x98f vars=object
// @STANDALONE_EVENT_22: op=0x995 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x99d vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x148,0x156,0x16c,0x175,0x181,0x195,0x278,0x291,0x2bd,0x2c4,0x2d2,0x2da,0x2dd,0x56e,0x576,0x5ae,0x5c9,0x5d8,0x64c,0x65e,0x669,0x672,0x67d,0x807,0x80e,0x819,0x822,0x82c,0x871,0x97a,0x98f,0x995,0x99d,0x9a7,0x9c7,0x9f7,0x9fd,0xa27,0xa30,0xa38,0xa42,0xa95,0xa9c,0xabf,0xac2,0xad9,0xadf,0xae2,0xae4,0xae7,0xaf8,0xafe,0xb01,0xb03,0xb06,0xb44,0xb4e

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2751(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_12_bool = var_19_object;
		func_2754(var_19_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_2760();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2751(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_392(var_14_int);
		}
		var_23_object = Obj();
		var_12_bool = var_23_object;
		func_2754(var_23_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_object = Obj();
	var_12_bool = var_15_object;
	func_2557(var_15_object);
	var_24_int = 0; var_25_object = Obj();
	var_12_bool = var_25_object;
	func_2616(var_24_int, var_25_object);
	var_24_int = var_14_int;
	var_61_bool = var_14_int > (int)0;
	if(var_61_bool != 0) {
		var_63_bool = var_14_int > (int)1;
		if(var_63_bool != 0) {
			func_392(var_14_int);
		}
		var_66_object = Obj();
		var_12_bool = var_66_object;
		func_2626(var_66_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_bool = 0;
	var_12_bool = var_18_object;
	var_13_object = var_19_object;
	var_14_bool = var_20_bool;
	func_2884(var_17_bool, var_18_object, var_19_object, var_20_bool);
	if(var_17_bool != 0) {
		var_79_int = 0; var_80_object = Obj(); var_81_bool = 0;
		var_12_bool = var_80_object;
		var_14_bool = var_81_bool;
		func_2709(var_80_object, var_81_bool);
		var_79_int = var_16_int;
		var_113_bool = var_16_int > (int)0;
		if(var_113_bool != 0) {
			var_115_bool = var_16_int > (int)1;
			if(var_115_bool != 0) {
				func_392(var_16_int);
			}
			var_118_object = Obj();
			var_12_bool = var_118_object;
			func_2716(var_118_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2761(var_15_int, var_16_object);
	var_15_int = var_14_int;
	var_58_bool = var_14_int > (int)0;
	if(var_58_bool != 0) {
		var_60_bool = var_14_int > (int)1;
		if(var_60_bool != 0) {
			func_392(var_14_int);
		}
		var_63_object = Obj();
		var_12_bool = var_63_object;
		func_2777(var_63_object);
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_string = "";
	var_12_object = var_17_object;
	var_13_bool = var_18_string;
	func_2471(var_16_bool, var_17_object, var_18_string);
	if(var_16_bool != 0) {
		func_392(var_15_int);
		var_46_object = Obj(); var_47_string = "";
		var_12_object = var_46_object;
		var_13_bool = var_47_string;
		func_2503(var_46_object, var_47_string);
	} else {
		var_122_int = 0; var_123_string = ""; var_124_object = Obj();
		var_13_bool = var_123_string;
		var_12_object = var_124_object;
		func_2783(var_124_object);
		var_122_int = var_15_int;
		var_126_bool = var_15_int > (int)0;
		if(var_126_bool == 0) goto Label_327;
		var_128_bool = var_15_int > (int)1;
		if(var_128_bool != 0) {
			func_392(var_15_int);
		}
		var_129_string = ""; var_130_object = Obj();
		var_13_bool = var_129_string;
		var_12_object = var_130_object;
		func_2786();
	}
Label_327:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_string, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_string = "";
	var_12_bool = var_14_string;
	func_2570(var_13_bool, var_14_string);
	if(var_13_bool != 0) {
		func_392(var_12_bool);
		var_24_string = "";
		var_12_bool = var_24_string;
		func_2586(var_24_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = var_0_bool;
	if(var_13_bool != 0) {
		return 0;
	}
	var_14_bool = 0; var_15_object = Obj();
	var_12_bool = var_15_object;
	func_2528(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_392(var_12_bool);
		var_28_object = Obj();
		var_12_bool = var_28_object;
		func_2551(var_28_object);
	} else {
		var_30_object = Obj();
		var_12_bool = var_30_object;
		func_414(var_12_bool, var_30_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = var_0_bool;
	if(var_13_bool != 0) {
		return 0;
	}
	var_14_object = Obj();
	var_12_bool = var_14_object;
	func_414(var_12_bool, var_14_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_14_bool = var_12_bool != (int)110;
	if(var_14_bool != 0) {
		return 0;
	}
	var_1_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_392(var_11_bool);
	func_2760();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_392(var_12_bool);
	var_12_bool = Obj();
	func_2447();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2751(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_646();
		}
		var_23_object = Obj();
		var_12_bool = var_23_object;
		func_2754(var_23_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_object = Obj();
	var_12_bool = var_15_object;
	func_2557(var_15_object);
	var_24_int = 0; var_25_object = Obj();
	var_12_bool = var_25_object;
	func_2616(var_24_int, var_25_object);
	var_24_int = var_14_int;
	var_61_bool = var_14_int > (int)0;
	if(var_61_bool != 0) {
		var_63_bool = var_14_int > (int)1;
		if(var_63_bool != 0) {
			func_646();
		}
		var_66_object = Obj();
		var_12_bool = var_66_object;
		func_2626(var_66_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_bool = 0;
	var_12_bool = var_18_object;
	var_13_object = var_19_object;
	var_14_bool = var_20_bool;
	func_2884(var_17_bool, var_18_object, var_19_object, var_20_bool);
	if(var_17_bool != 0) {
		var_79_int = 0; var_80_object = Obj(); var_81_bool = 0;
		var_12_bool = var_80_object;
		var_14_bool = var_81_bool;
		func_2709(var_80_object, var_81_bool);
		var_79_int = var_16_int;
		var_113_bool = var_16_int > (int)0;
		if(var_113_bool != 0) {
			var_115_bool = var_16_int > (int)1;
			if(var_115_bool != 0) {
				func_646();
			}
			var_118_object = Obj();
			var_12_bool = var_118_object;
			func_2716(var_118_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2761(var_15_int, var_16_object);
	var_15_int = var_14_int;
	var_58_bool = var_14_int > (int)0;
	if(var_58_bool != 0) {
		var_60_bool = var_14_int > (int)1;
		if(var_60_bool != 0) {
			func_646();
		}
		var_63_object = Obj();
		var_12_bool = var_63_object;
		func_2777(var_63_object);
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_string = "";
	var_12_object = var_17_object;
	var_13_bool = var_18_string;
	func_2471(var_16_bool, var_17_object, var_18_string);
	if(var_16_bool != 0) {
		func_646();
		var_46_object = Obj(); var_47_string = "";
		var_12_object = var_46_object;
		var_13_bool = var_47_string;
		func_2503(var_46_object, var_47_string);
	} else {
		var_122_int = 0; var_123_string = ""; var_124_object = Obj();
		var_13_bool = var_123_string;
		var_12_object = var_124_object;
		func_2783(var_124_object);
		var_122_int = var_15_int;
		var_126_bool = var_15_int > (int)0;
		if(var_126_bool == 0) goto Label_631;
		var_128_bool = var_15_int > (int)1;
		if(var_128_bool != 0) {
			func_646();
		}
		var_129_string = ""; var_130_object = Obj();
		var_13_bool = var_129_string;
		var_12_object = var_130_object;
		func_2786();
	}
Label_631:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_string = "";
	var_12_bool = var_14_string;
	func_2570(var_13_bool, var_14_string);
	if(var_13_bool != 0) {
		func_646();
		var_24_string = "";
		var_12_bool = var_24_string;
		func_2586(var_24_string);
	}
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_646();
	var_12_bool = Obj();
	func_2447();
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0);
	var_18_bool = var_12_bool != (int)111;
	if(var_18_bool != 0) {
		return 4;
	}
	var_19_bool = 0; var_20_object = Obj();
	var_20_object = var_0_bool;
	func_1821(var_19_bool, var_20_object);
	var_53_bool = var_19_bool == 0; //@nz
	if(var_53_bool != 0) {
		func_646();
		return 4;
	}
	GetDirection(var_15_cvector);
	var_56_cvector = CVector(0,0,0); var_57_object = Obj();
	var_57_object = var_0_bool;
	func_1675(var_56_cvector, var_57_object);
	var_56_cvector = var_16_cvector;
	var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	var_15_cvector = var_63_cvector;
	var_16_cvector = var_64_cvector;
	func_2092(var_62_float, var_63_cvector, var_64_cvector);
	var_87_bool = var_62_float < (float)0.4999999701976776;
	if(var_87_bool != 0) {
		var_88_object = Obj();
		var_88_object = var_0_bool;
		func_1971(var_88_object);
	}
	return 4;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_646();
	func_2760();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_bool = var_14_object;
	func_2528(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_646();
		var_27_object = Obj();
		var_12_bool = var_27_object;
		func_2551(var_27_object);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_1468(var_11_bool);
	func_2760();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)1;
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_15_object = var_1_bool;
		func_2135(var_15_object);
	} else {
		var_20_int = 0;
		var_12_int = var_20_int;
		func_1612(var_11_bool, var_12_int, var_20_int);
	}
	return 0;
	
}


task_4_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_1_bool == var_12_object;
	if(var_14_bool != 0) {
		var_15_bool = var_2_object == 0; //@nz
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_2_object = true;
		var_16_object = Obj();
		var_12_object = var_16_object;
		func_1987(var_16_object);
	}
	return 0;
}


task_4_event_2(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_1_bool == var_12_object;
	if(var_14_bool != 0) {
		var_15_object = var_2_object;
		if(var_15_object != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	func_1468(var_12_object);
	var_12_object = Obj();
	func_2447();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0;
	var_17_bool = var_13_string == "health";
	if(var_17_bool != 0) {
		GetProperty("health", var_15_float);
		var_20_bool = var_15_float <= (int)0;
		if(var_20_bool != 0) {
			SignalDeath(var_12_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_2426(var_13_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0;
	var_12_object = var_16_object;
	var_13_int = var_17_int;
	var_14_float = var_18_float;
	func_1889(var_16_object, var_17_int, var_18_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_12_object = var_18_object;
	var_13_int = var_19_int;
	var_14_float = var_20_float;
	var_16_cvector = var_21_cvector;
	var_17_cvector = var_22_cvector;
	func_1957(var_20_float, var_21_cvector, var_22_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0;
	var_0_bool = false;
	SensePlayerOnly((bool)1);
	func_2831();
	func_190();
	
Label_167:
	irand(var_14_int, (int)2);
	var_138_bool = var_14_int == (int)0;
	if(var_138_bool != 0) {
		var_0_bool = true;
		func_2852();
		var_0_bool = false;
		ResetAAS();
	} else {
		irand(var_15_int, (int)4);
		var_158_int = var_15_int + (int)1;
		Sleep(var_158_int);
	}
	goto Label_167;
	
}
EMIT "Return(); Pop(4)";


func_0(var_14_object)
{
	EventDisable(0);
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_33(var_15_object);
	var_95_object = Obj();
	var_14_object = var_95_object;
	func_2894(var_95_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_2055(var_450_float, var_451_float, var_452_float)
{
	var_455_bool = var_451_float < var_452_float;
	if(var_455_bool != 0) {
		var_451_float = var_450_float;
	} else {
		var_452_float = var_450_float;
	}
	return 0;
	
}


func_2570(var_13_bool, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj();
	var_18_bool = var_14_string == "heal";
	if(var_18_bool != 0) {
		FindActor(var_16_object, "player");
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_2819(var_21_object);
		var_20_bool = var_13_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_13_bool = 0;
	return 2;
}


func_2062(var_460_float, var_461_float, var_462_float, var_463_float)
{
	var_464_bool = var_461_float < var_462_float;
	if(var_464_bool != 0) {
		var_462_float = var_460_float;
		return 0;
	}
	var_465_bool = var_461_float > var_463_float;
	if(var_465_bool != 0) {
		var_463_float = var_460_float;
		return 0;
	}
	var_461_float = var_460_float;
	return 0;
}


func_1039(var_0_bool, var_1_bool, var_361_bool, var_362_float)
{
	var_363_int = 0; var_364_bool = 0; var_365_int = 0; var_366_string = ""; var_367_int = 0; var_368_bool = 0; var_369_int = 0; var_370_string = "";
	func_1378(var_370_string);
	irand(var_367_int, var_1_bool);
	var_367_int = var_367_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2144();
	var_379_int = "attack_begin" + var_367_int;
	PlayAnimation("all", var_379_int);
	WaitForAnimEnd();
	func_1346(var_369_int, var_370_string);
	var_395_bool = 0; var_396_object = Obj();
	var_396_object = var_0_bool;
	func_1821(var_395_bool, var_396_object);
	var_397_bool = var_395_bool == 0; //@nz
	if(var_397_bool != 0) {
		StopAsync();
		var_361_bool = 0;
		return 8;
	}
	var_398_float = 0; var_399_int = 0;
	var_362_float = var_398_float;
	var_367_int = var_399_int;
	func_1000(var_370_string, var_398_float, var_399_int);
	var_482_int = "attack_middle" + var_367_int;
	HasAnimation(var_368_bool, "all", var_482_int);
	var_483_bool = var_368_bool;
	if(var_483_bool != 0) {
		func_2144();
		var_486_int = "attack_middle" + var_367_int;
		PlayAnimation("all", var_486_int);
		WaitForAnimEnd();
		func_1378(var_370_string);
		var_487_bool = 0; var_488_object = Obj();
		var_488_object = var_0_bool;
		func_1821(var_487_bool, var_488_object);
		var_489_bool = var_487_bool == 0; //@nz
		if(var_489_bool != 0) {
			StopAsync();
			var_361_bool = 0;
			return 8;
		}
		var_490_float = 0; var_491_int = 0;
		var_362_float = var_490_float;
		var_367_int = var_491_int;
		func_1000(var_370_string, var_490_float, var_491_int);
		var_369_int = 1;

	Label_1116:
		var_493_int = "attack_middle" + var_367_int;
		var_495_int = var_493_int + "_";
		var_370_string = var_495_int + var_369_int;
		HasAnimation(var_368_bool, "all", var_370_string);
		var_497_bool = var_368_bool == 0; //@nz
		if(var_497_bool != 0) {
		} else {
			func_2144();
			PlayAnimation("all", var_370_string);
			WaitForAnimEnd();
			func_1378(var_370_string);
			var_513_bool = 0; var_514_object = Obj();
			var_514_object = var_0_bool;
			func_1821(var_513_bool, var_514_object);
			var_515_bool = var_513_bool == 0; //@nz
			if(var_515_bool != 0) {
				StopAsync();
				var_361_bool = 0;
				var_516_float = 0; var_517_int = 0;
				var_362_float = var_516_float;
				var_367_int = var_517_int;
				func_1000(var_370_string, var_516_float, var_517_int);
				var_369_int = var_369_int + (int)1;
				goto Label_1116;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_501_int = "attack_end" + var_367_int;
	PlayAnimation("all", var_501_int);
	var_502_bool = 0;
	func_1392(var_502_bool);
	if(var_502_bool != 0) {
		var_503_bool = 0; var_504_float = 0;
		func_1176(var_503_bool, (float)0.75);
		StopAsync();
	}
	var_361_bool = 1;
	return 8;
	
}


func_2073(var_65_float, var_66_cvector, var_67_cvector)
{
	var_68_float = GetByIndex(var_66_cvector, 0);
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_70_float = var_68_float * var_69_float;
	var_71_float = GetByIndex(var_66_cvector, 2);
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_73_float = var_71_float * var_72_float;
	var_65_float = var_70_float + var_73_float;
	return 0;
}


func_2586(var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	var_28_bool = var_24_string == "heal";
	if(var_28_bool != 0) {
		FindActor(var_26_object, "player");
		var_26_object = Obj();
		func_2822();
		var_26_object = 0;
	}
	return 2;
}


func_33(var_15_object)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_string = ""; var_21_object = Obj(); var_22_bool = 0; var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0);
	var_36_bool = var_15_object == 0; //@ne
	if(var_36_bool != 0) {
		var_37_string = "";
		func_124("fdie");
	} else {
		@@var_15_object:GetPosition(var_26_cvector);
		GetPosition(var_27_cvector);
		GetDirection(var_28_cvector);
		var_29_cvector = var_27_cvector - var_26_cvector;
		var_69_float = GetByIndex(var_29_cvector, 0);
		var_70_float = GetByIndex(var_28_cvector, 0);
		var_71_float = var_69_float * var_70_float;
		var_72_float = GetByIndex(var_29_cvector, 2);
		var_73_float = GetByIndex(var_28_cvector, 2);
		var_74_float = var_72_float * var_73_float;
		var_75_int = var_71_float + var_74_float;
		var_77_bool = var_75_int >= (int)0;
		if(var_77_bool != 0) {
			var_30_string = "fdie";
		} else {
				var_30_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_15_object = var_31_object;
		var_80_bool = IsFuncExist(var_15_object, "GetScriptProperty", (int)2);
		if(var_80_bool != 0) {
			@@var_15_object:HasScriptProperty(var_32_bool, "Owner");
			var_82_bool = var_32_bool;
			if(var_82_bool != 0) {
				@@var_15_object:GetScriptProperty(var_31_object, "Owner");
				var_84_bool = var_31_object == 0; //@ne
				if(var_84_bool != 0) {
					var_15_object = var_31_object;
				}
			}
		}
		var_87_bool = IsFuncExist(var_31_object, "@GetEyesHeight", (int)1);
		if(var_87_bool != 0) {
			@@var_31_object:GetEyesHeight(var_34_float);
			var_35_cvector = CVector(0.0, 0.0, 0.0);
			var_88_float = GetByIndex(var_35_cvector, 1);
			var_34_float = var_88_float;
			SetByIndex(var_35_cvector, 1) = var_88_float;
			LookAsync(var_15_object, "head", var_35_cvector);
			var_33_bool = 1;
		} else {
			var_33_bool = 0;

		}
		var_90_string = "";
		var_30_string = var_90_string;
		func_1998(var_90_string);
		PlayAnimation("all", var_30_string);
		WaitForAnimEnd();
		var_92_bool = var_33_bool;
		if(var_92_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_30_string);
		RemoveEnvelope();
		var_31_object = 0;
	}
	return 20;
	
}


func_2082(var_74_float, var_75_cvector)
{
	var_76_float = GetByIndex(var_75_cvector, 0);
	var_77_float = GetByIndex(var_75_cvector, 0);
	var_78_float = var_76_float * var_77_float;
	var_79_float = GetByIndex(var_75_cvector, 2);
	var_80_float = GetByIndex(var_75_cvector, 2);
	var_81_float = var_79_float * var_80_float;
	var_82_int = var_78_float + var_81_float;
	var_74_float = sqrt(var_82_int);
	return 0;
}


func_2551(var_27_object)
{
	var_27_object = Obj();
	func_2791();
	return 0;
}


func_2599(var_21_int)
{
	var_23_bool = 0;
	func_2882(var_23_bool);
	if(var_23_bool != 0) {
		var_21_int = 2;
	} else {
		var_21_int = 0;
	}
	return 0;
	
}


func_2092(var_62_float, var_63_cvector, var_64_cvector)
{
	var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	var_63_cvector = var_66_cvector;
	var_64_cvector = var_67_cvector;
	func_2073(var_65_float, var_66_cvector, var_67_cvector);
	var_74_float = 0; var_75_cvector = CVector(0,0,0);
	var_63_cvector = var_75_cvector;
	func_2082(var_74_float, var_75_cvector);
	var_83_float = 0; var_84_cvector = CVector(0,0,0);
	var_64_cvector = var_84_cvector;
	func_2082(var_83_float, var_84_cvector);
	var_85_float = var_74_float * var_83_float;
	var_62_float = var_65_float / var_85_float;
	return 0;
}


func_2608(var_54_object)
{
	var_55_object = Obj();
	var_54_object = var_55_object;
	TaskCall(2);
	func_447(var_56_object, var_55_object);
	TaskReturn();
	return 0;
}


func_2045(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0;
	var_54_int = var_45_cvector | var_45_cvector;
	var_53_float = sqrt(var_54_int);
	var_55_float = 9.999999974752427e-07;
	var_56_bool = var_53_float < var_55_float;
	if(var_56_bool != 0) {
		var_44_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_44_cvector = var_45_cvector / var_53_float;
	return 2;
}


func_2616(var_21_int, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_1821(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		var_21_int = 2;
	} else {
		var_21_int = 0;
	}
	return 0;
	
}


func_2109(var_468_float)
{
	var_469_object = Obj(); var_470_object = Obj();
	CreateFloatVector(var_470_object);
	@@var_470_object:add(var_468_float);
	var_472_bool = var_468_float < (int)0;
	if(var_472_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_470_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2626(var_64_object)
{
	var_65_object = Obj();
	var_64_object = var_65_object;
	TaskCall(3);
	func_722(var_65_object);
	TaskReturn();
	return 0;
}


func_2634(var_28_bool, var_29_object, var_30_bool)
{
	var_31_string = ""; var_32_string = ""; var_33_string = ""; var_34_string = "";
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_29_object = var_36_object;
	func_1695(var_35_bool, var_36_object, "class");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	GetProperty("class", var_33_string);
	@@var_29_object:GetProperty("class", var_34_string);
	var_47_bool = 0;
	var_47_bool = 0;
	var_48_bool = var_30_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_49_bool = var_33_string == var_34_string;
		if(var_49_bool != 0) {
			var_47_bool = 1;
		}
	}
	if(var_47_bool != 0) {
		var_28_bool = 1;
		return 4;
	}
	var_51_bool = var_34_string == "rat";
	if(var_51_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa93";
	}
	var_53_bool = var_34_string == "rat_big";
	if(var_53_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa93";
	}
	var_55_bool = var_34_string == "dog";
	if(var_55_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa93";
	}
	var_57_bool = var_34_string == "grabitel";
	if(var_57_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa93";
	}
	var_59_bool = var_34_string == "bomber";
	if(var_59_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa93";
	}
	var_61_bool = var_34_string == "sanitar";
	if(var_61_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa93";
	}
	var_63_bool = var_34_string == "hunter";
	if(var_63_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa93";
	}
	var_65_bool = var_34_string == "soldier";
	if(var_65_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	var_28_bool = 1;
	return 4;
}


func_1612(var_0_bool, var_1_bool, var_20_int)
{
	var_22_bool = var_20_int != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_1_bool;
	func_1650(var_23_bool, var_24_object);
	var_59_bool = var_23_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2126(var_27_int)
{
	var_28_float = 0; var_29_float = 0;
	GetGameTime(var_29_float);
	var_31_int = 0;
	var_31_int = var_29_float / (int)24;
	var_27_int = (int)1 + var_31_int;
	return 2;
}


func_2135(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_object, var_17_bool);
	var_18_bool = var_17_bool;
	if(var_18_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2144()
{
	var_373_object = Obj(); var_374_object = Obj();
	GetScene(var_374_object);
	var_376_object = Obj();
	func_2039(var_376_object);
	BroadcastMessage("battle", var_376_object, var_374_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1634(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2155(var_219_int)
{
	var_220_int = 0; var_221_int = 0;
	GetVariable("branch", var_221_int);
	var_221_int = var_219_int;
	return 2;
}


func_2161(var_29_object)
{
	var_30_int = 0;
	func_2155(var_30_int);
	var_35_bool = var_30_int == (int)1;
	if(var_35_bool != 0) {
		WorkWithCorpse(var_29_object);
	} else {
		Barter(var_29_object);
	}
	return 0;
	
}


func_1650(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	func_1821(var_25_bool, var_26_object);
	var_25_bool = var_23_bool;
	return 0;
}


func_1657(var_212_string)
{
	var_212_string = "walk";
	return 0;
}


func_1659(var_213_string)
{
	var_213_string = "run";
	return 0;
}


func_124(var_37_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_38_string = "";
	var_37_string = var_38_string;
	func_1998(var_38_string);
	PlayAnimation("all", var_37_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_37_string);
	RemoveEnvelope();
	return 0;
}


func_1661(var_440_string, var_441_int)
{
	var_443_bool = var_441_int == (int)2;
	if(var_443_bool != 0) {
		var_440_string = "fire";
		return 0;
	EMIT "GOTO 0x689";
	}
	var_445_bool = var_441_int == (int)1;
	if(var_445_bool != 0) {
		var_440_string = "bullet";
		return 0;
	}
	var_440_string = "phys";
	return 0;
}


func_2174(var_24_int, var_25_int)
{
	var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0;
	var_39_bool = var_24_int > var_25_int;
	if(var_39_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_37_int = 0;
	var_41_bool = var_24_int != var_25_int;
	if(var_41_bool != 0) {
		var_42_int = var_25_int - var_24_int;
		irand(var_37_int, var_42_int);
	} else {
		var_51_bool = var_24_int == (int)0;
		if(var_51_bool == 0) goto Label_2192;
		return 4;
	}
Label_2192:
	var_37_int = var_37_int + var_24_int;
	var_44_bool = var_37_int == (int)0;
	if(var_44_bool != 0) {
		return 4;
	}
	var_45_int = 0; var_46_string = "";
	func_2421(var_45_int, "Money");
	AddItem(var_38_bool, var_45_int, (int)0, var_37_int);
	return 4;
	
}


func_646()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1675(var_46_cvector, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	GetPosition(var_50_cvector);
	@@var_47_object:GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
	return 4;
}


func_1682(var_30_float, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0);
	GetPosition(var_35_cvector);
	@@var_31_object:GetPosition(var_36_cvector);
	var_37_cvector = var_36_cvector - var_35_cvector;
	var_30_float = var_37_cvector | var_37_cvector;
	return 6;
}


func_2709(var_79_int, var_80_object)
{
	var_82_int = 0; var_83_object = Obj();
	var_80_object = var_83_object;
	func_2616(var_82_int, var_83_object);
	var_82_int = var_79_int;
	return 0;
}


func_1176(var_503_bool, var_504_float)
{
	var_505_float = 0; var_506_bool = 0; var_507_float = 0; var_508_bool = 0;
	rand(var_507_float);
	var_509_bool = var_507_float < var_504_float;
	if(var_509_bool != 0) {

	Label_1181:
		IsAnimationPlaying(var_508_bool);
		var_510_bool = var_508_bool == 0; //@nz
		if(var_510_bool != 0) {
		} else {
			var_511_bool = 0;
			func_1274(var_511_bool);
			if(var_511_bool != 0) {
				var_503_bool = 1;
				sync();
				goto Label_1181;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1378(var_508_bool);
	}
	goto Label_1201;
	
Label_1201:
	var_503_bool = 0;
	return 4;
	
}


func_1690(var_96_bool, var_97_object)
{
	var_98_bool = 0; var_99_bool = 0;
	IsPlayerActor(var_97_object, var_99_bool);
	var_99_bool = var_96_bool;
	return 2;
}


func_2716(var_118_object)
{
	var_119_object = Obj();
	var_118_object = var_119_object;
	func_2626(var_119_object);
	return 0;
}


func_2205(var_225_string)
{
	var_226_object = Obj(); var_227_int = 0; var_228_bool = 0; var_229_object = Obj(); var_230_int = 0; var_231_bool = 0;
	CreateInvItem(var_229_object);
	@@var_229_object:SetItemName(var_225_string);
	@@var_229_object:SetProperty("Organ", (int)1);
	@@var_229_object:GetItemID(var_230_int);
	AddItem(var_231_bool, var_229_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1695(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0;
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", (int)2);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	@@var_48_object:HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
	return 2;
}


func_2722(var_21_bool, var_22_object, var_23_object, var_24_float, var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0;
	var_23_object = var_29_object;
	var_30_bool = !var_25_bool;
	func_2634(var_28_bool, var_29_object, var_30_bool);
	var_66_bool = var_28_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_21_bool = 0;
		return 2;
	}
	CanSee(var_27_bool, var_22_object);
	var_67_bool = 0;
	var_67_bool = 1;
	var_68_bool = var_27_bool;
	if(var_68_bool != 1) {
		var_69_float = 0; var_70_object = Obj();
		var_22_object = var_70_object;
		func_1682(var_69_float, var_70_object);
		var_77_float = var_24_float * var_24_float;
		var_78_bool = var_69_float <= var_77_float;
		if(var_78_bool != 1) {
			var_67_bool = 0;
		}
	}
	if(var_67_bool != 0) {
		var_21_bool = 1;
		return 2;
	}
	var_21_bool = 0;
	return 2;
}


func_1707(var_412_float, var_413_object, var_414_float, var_415_int)
{
	var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0; var_425_int = 0; var_426_string = ""; var_427_int = 0; var_428_float = 0; var_429_float = 0; var_430_float = 0;
	var_431_bool = 0; var_432_object = Obj(); var_433_string = "";
	var_413_object = var_432_object;
	func_1695(var_431_bool, var_432_object, "health");
	var_434_bool = var_431_bool == 0; //@nz
	if(var_434_bool != 0) {
		var_412_float = 0.0;
		return 12;
	}
	var_435_bool = 0; var_436_object = Obj(); var_437_string = "";
	var_413_object = var_436_object;
	func_1695(var_435_bool, var_436_object, "armor");
	var_438_bool = var_435_bool == 0; //@nz
	if(var_438_bool != 0) {
		var_425_int = 0;
	} else {
			@@var_413_object:GetProperty("armor", var_425_int);
	}
	var_440_string = ""; var_441_int = 0;
	var_415_int = var_441_int;
	func_1661(var_440_string, var_441_int);
	var_426_string = "armor_" + var_440_string;
	var_446_bool = 0; var_447_object = Obj(); var_448_string = "";
	var_413_object = var_447_object;
	var_426_string = var_448_string;
	func_1695(var_446_bool, var_447_object, var_448_string);
	var_449_bool = var_446_bool == 0; //@nz
	if(var_449_bool != 0) {
		var_427_int = 0;
	} else {
		@@var_413_object:GetProperty(var_426_string, var_427_int);

	}
	var_450_float = 0; var_451_float = 0; var_452_float = 0;
	var_453_int = var_425_int + var_427_int;
	var_451_float = var_453_int / (float)100.0;
	func_2055(var_450_float, var_451_float, (float)1);
	var_450_float = var_428_float;
	@@var_413_object:GetProperty("health", var_429_float);
	var_458_int = (int)1 - var_428_float;
	var_430_float = var_414_float * var_458_int;
	var_460_float = 0; var_461_float = 0; var_462_float = 0; var_463_float = 0;
	var_461_float = var_429_float - var_430_float;
	func_2062(var_460_float, var_461_float, (float)0, (float)1);
	@@var_413_object:SetProperty("health", var_460_float);
	var_466_bool = 0; var_467_object = Obj();
	var_413_object = var_467_object;
	func_1690(var_466_bool, var_467_object);
	if(var_466_bool != 0) {
		var_468_float = 0;
		var_468_float = -var_430_float;
		func_2109(var_468_float);
	}
	var_430_float = var_412_float;
	return 12;
	
}


func_2222()
{
	var_219_int = 0;
	func_2155(var_219_int);
	var_224_bool = var_219_int != (int)1;
	if(var_224_bool != 0) {
		return 0;
	}
	var_225_string = "";
	func_2205("liver");
	var_236_string = "";
	func_2205("kidney");
	var_237_string = "";
	func_2205("heart");
	var_238_string = "";
	func_2205("blood");
	return 0;
}


func_1203(var_0_bool, var_300_bool, var_301_float)
{
	var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_bool = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0;
	
Label_1204:
	IsAnimationPlaying(var_307_bool);
	var_312_bool = var_307_bool == 0; //@nz
	if(var_312_bool != 0) {
	} else {
		var_313_bool = 0;
		func_1274(var_313_bool);
		if(var_313_bool != 0) {
			var_300_bool = 1;
			return 10;
		}
		var_356_bool = 0; var_357_object = Obj();
		var_357_object = var_0_bool;
		func_1821(var_356_bool, var_357_object);
		var_358_bool = var_356_bool == 0; //@nz
		if(var_358_bool != 0) {
			var_300_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_308_cvector);
		GetPFPosition(var_309_cvector);
		var_310_cvector = var_308_cvector - var_309_cvector;
		var_311_float = var_310_cvector | var_310_cvector;
		var_359_float = var_301_float * var_301_float;
		var_360_bool = var_311_float < var_359_float;
		if(var_360_bool != 0) {
			var_361_bool = 0; var_362_float = 0;
			var_301_float = var_362_float;
			func_1039(var_310_cvector, var_311_float, var_361_bool, var_362_float);
			var_300_bool = 1;
			sync();
			goto Label_1204;
		}
		return 10;
	}
	func_1378(var_311_float);
	var_300_bool = 0;
	return 10;
	
}


func_190()
{
	var_132_bool = 0;
	func_1982(var_132_bool);
	var_135_bool = var_132_bool == 0; //@nz
	if(var_135_bool != 0) {
		func_2760();
	}
	return 0;
}


func_2751(var_15_int)
{
	var_15_int = 2;
	return 0;
}


func_2754(var_23_object)
{
	var_24_object = Obj();
	var_23_object = var_24_object;
	func_2839(var_24_object);
	return 0;
}


func_2246(var_18_bool)
{
	var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_bool = 0;
	var_23_bool = var_18_bool;
	if(var_23_bool != 0) {
		var_24_int = 0; var_25_int = 0;
		var_27_int = 0;
		func_2126(var_27_int);
		var_34_float = var_27_int * (int)100;
		var_25_int = (int)100 + var_34_float;
		func_2174((int)0, var_25_int);
		irand(var_21_int, (int)8);
		var_54_bool = var_21_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = 0; var_56_string = "";
			func_2421(var_55_int, "lemon");
			AddItem(var_22_bool, var_55_int, (int)0, (int)1);
		} else {
			var_60_bool = var_21_int == (int)1;
			if(var_60_bool != 0) {
				var_61_int = 0; var_62_string = "";
				func_2421(var_61_int, "rusk");
				AddItem(var_22_bool, var_61_int, (int)0, (int)1);
				goto Label_2334;
			}
			var_66_bool = var_21_int == (int)2;
			if(var_66_bool != 0) {
				var_67_int = 0; var_68_string = "";
				func_2421(var_67_int, "hook");
				AddItem(var_22_bool, var_67_int, (int)0, (int)1);
				goto Label_2334;
			}
			var_72_bool = var_21_int == (int)4;
			if(var_72_bool != 0) {
				var_73_int = 0; var_74_string = "";
				func_2421(var_73_int, "syringe");
				AddItem(var_22_bool, var_73_int, (int)0, (int)1);
				goto Label_2334;
			}
			var_78_bool = var_21_int == (int)5;
			if(var_78_bool != 0) {
				var_79_int = 0; var_80_string = "";
				func_2421(var_79_int, "watch");
				AddItem(var_22_bool, var_79_int, (int)0, (int)1);
				goto Label_2334;
			}
			var_84_bool = var_21_int == (int)6;
			if(var_84_bool == 0) goto Label_2334;
			var_85_int = 0; var_86_string = "";
			func_2421(var_85_int, "razor");
			AddItem(var_22_bool, var_85_int, (int)0, (int)1);
	}
		var_89_int = 0; var_90_int = 0;
		var_92_int = 0;
		func_2126(var_92_int);
		var_94_float = var_92_int * (int)50;
		var_90_int = (int)50 + var_94_float;
		func_2174((int)0, var_90_int);
		irand(var_21_int, (int)7);
		var_97_bool = var_21_int == (int)0;
		if(var_97_bool != 0) {
			var_98_int = 0; var_99_string = "";
			func_2421(var_98_int, "beads");
			AddItem(var_22_bool, var_98_int, (int)0, (int)1);
			goto Label_2420;
		}
		var_103_bool = var_21_int == (int)1;
		if(var_103_bool != 0) {
			var_104_int = 0; var_105_string = "";
			func_2421(var_104_int, "bracelet");
			AddItem(var_22_bool, var_104_int, (int)0, (int)1);
			goto Label_2420;
		}
		var_109_bool = var_21_int == (int)2;
		if(var_109_bool != 0) {
			var_110_int = 0; var_111_string = "";
			func_2421(var_110_int, "ear_ring");
			AddItem(var_22_bool, var_110_int, (int)0, (int)1);
			goto Label_2420;
		}
		var_115_bool = var_21_int == (int)3;
		if(var_115_bool != 0) {
			var_116_int = 0; var_117_string = "";
			func_2421(var_116_int, "gold_ring");
			AddItem(var_22_bool, var_116_int, (int)0, (int)1);
			goto Label_2420;
		}
		var_121_bool = var_21_int == (int)4;
		if(var_121_bool != 0) {
			var_122_int = 0; var_123_string = "";
			func_2421(var_122_int, "silver_ring");
			AddItem(var_22_bool, var_122_int, (int)0, (int)1);
			goto Label_2420;
		}
		var_127_bool = var_21_int == (int)5;
		if(var_127_bool == 0) goto Label_2420;
		var_128_int = 0; var_129_string = "";
		func_2421(var_128_int, "flower");
		AddItem(var_22_bool, var_128_int, (int)0, (int)1);
	}
Label_2334:
	goto Label_2420;
	
Label_2420:
	return 4;
	
}


func_2760()
{
	return 0;
}


func_2761(var_15_int, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	Trace("Received steal");
	CanSee(var_18_bool, var_16_object);
	var_20_bool = var_18_bool;
	if(var_20_bool != 0) {
		var_21_int = 0; var_22_object = Obj();
		var_16_object = var_22_object;
		func_2616(var_21_int, var_22_object);
		var_21_int = var_15_int;
		return 2;
	}
	var_15_int = 0;
	return 2;
}


func_722(var_65_object)
{
	var_72_object = Obj(); var_73_bool = 0; var_74_float = 0;
	var_65_object = var_72_object;
	func_736(var_68_int, var_69_bool, var_70_float, var_71_int, var_65_object, var_72_object, (bool)1, (float)180.0);
	return 0;
}


func_2777(var_63_object)
{
	var_64_object = Obj();
	var_63_object = var_64_object;
	func_2626(var_64_object);
	return 0;
}


func_730(var_409_float)
{
	var_409_float = 0.10000000149011612;
	return 0;
}


func_733(var_416_int)
{
	var_416_int = 0;
	return 0;
}


func_1246(var_0_bool, var_315_bool)
{
	var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_float = 0; var_325_float = 0;
	var_326_bool = 0; var_327_object = Obj();
	var_327_object = var_0_bool;
	func_1821(var_326_bool, var_327_object);
	var_328_bool = var_326_bool == 0; //@nz
	if(var_328_bool != 0) {
		var_315_bool = 0;
		return 10;
	}
	var_329_bool = 0;
	func_1335(var_325_float, var_329_bool);
	if(var_329_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_321_cvector);
		GetPFPosition(var_322_cvector);
		var_323_cvector = var_321_cvector - var_322_cvector;
		var_324_float = var_323_cvector | var_323_cvector;
		@@@var_0_bool:GetAttackDistance(var_325_float);
		var_325_float = var_325_float + (int)50;
		var_331_float = var_325_float * var_325_float;
		var_315_bool = var_324_float <= var_331_float;
		return 10;
	}
	var_315_bool = 0;
	return 10;
}


func_2783(var_122_int)
{
	var_122_int = 0;
	return 0;
}


func_736(var_0_bool, var_3_object, var_5_int, var_72_object, var_73_bool, var_74_float, var_149_bool, var_241_bool)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_float = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_float = 0;
	func_965(var_94_cvector, var_95_bool, var_96_float);
	var_5_int = 0;
	var_121_bool = IsFuncExist(var_72_object, "@GetAttackDistance", (int)1);
	if(var_121_bool != 0) {
		@@var_72_object:GetAttackDistance(var_86_float);
		var_86_float = var_86_float + (int)50;
	} else {
							var_74_float = var_86_float;
	}
	var_124_bool = var_86_float >= (int)150;
	if(var_124_bool != 0) {
		var_86_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_72_object;
	IsPlayerActor(var_0_bool, var_89_bool);
	var_125_bool = var_89_bool;
	if(var_125_bool != 0) {
		PlayGlobalMusic("attack");
		var_127_object = Obj();
		func_2039(var_127_object);
		SendPlayerEnemy(var_72_object, var_127_object);
	}
	var_130_bool = var_73_bool;
	if(var_130_bool != 0) {
		var_90_bool = 0;
	} else {
						var_90_bool = 1;

	}
	var_91_float = (float)400.0 + var_86_float;
	
Label_776:
	var_132_bool = 0;
	var_132_bool = 0;
	var_133_bool = 0; var_134_object = Obj();
	var_134_object = var_0_bool;
	func_1821(var_133_bool, var_134_object);
	if(var_133_bool != 0) {
		var_135_bool = var_3_object == 0; //@nz
		if(var_135_bool != 0) {
			var_132_bool = 1;
		}
	}
	if(var_132_bool != 0) {
		func_1378(var_96_float);
		@@@var_0_bool:GetPFPosition(var_87_cvector);
		GetPFPosition(var_88_cvector);
		var_92_cvector = var_87_cvector - var_88_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		var_141_float = var_91_float * var_91_float;
		var_142_bool = var_93_float >= var_141_float;
		if(var_142_bool != 0) {
			var_143_bool = 0; var_144_object = Obj(); var_145_float = 0; var_146_float = 0; var_147_bool = 0; var_148_bool = 0;
			var_144_object = var_0_bool;
			var_86_float = var_145_float;
			TaskCall(4);
			func_1405(var_151_bool, var_143_bool, var_144_object, var_145_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_226_bool = var_149_bool == 0; //@nz
			if(var_226_bool != 0) {
			} else {
				var_90_bool = 0;
		} else {
				var_232_float = var_74_float * var_74_float;
				var_233_bool = var_93_float >= var_232_float;
				if(var_233_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_94_cvector);
					CanReachByPF(var_95_bool, var_94_cvector);
					var_234_bool = var_95_bool == 0; //@nz
					if(var_234_bool != 0) {
						var_235_bool = 0; var_236_object = Obj(); var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_bool = 0;
						var_236_object = var_0_bool;
						var_86_float = var_237_float;
						TaskCall(4);
						func_1405(var_243_bool, var_235_bool, var_236_object, var_237_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_244_bool = var_241_bool == 0; //@nz
						if(var_244_bool != 0) {
							goto Label_948;
						}
						var_90_bool = 0;
						goto Label_776;
					}
					var_245_bool = var_90_bool == 0; //@nz
					if(var_245_bool != 0) {
						var_246_object = Obj();
						var_246_object = var_0_bool;
						func_1971(var_246_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1378(var_96_float);
						StopAsync();
						var_90_bool = 1;
						var_257_bool = 0; var_258_object = Obj();
						var_258_object = var_0_bool;
						func_1821(var_257_bool, var_258_object);
						var_259_bool = var_257_bool == 0; //@nz
						if(var_259_bool != 0) {
							goto Label_948;
						}
					}
					rand(var_96_float);
					var_260_bool = 0;
					var_262_bool = var_96_float < (float)0.25;
					if(var_262_bool != 1) {
						var_263_bool = 0;
						func_1335((bool)1, var_263_bool);
						if(var_263_bool != 1) {
							var_260_bool = 0;
						}
					}
					if(var_260_bool != 0) {
						Face(var_0_bool);
						func_1385();
						PlayAnimation("all", "attack_stay");
						var_300_bool = 0; var_301_float = 0;
						var_74_float = var_301_float;
						func_1203(var_96_float, var_300_bool, var_301_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1378(var_96_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_522_bool = 0;
						func_1335(var_96_float, var_522_bool);
						var_523_bool = var_522_bool == 0; //@nz
						if(var_523_bool == 0) goto Label_938;
						var_524_bool = 0; var_525_object = Obj();
						var_525_object = var_0_bool;
						func_1821(var_524_bool, var_525_object);
						var_526_bool = var_524_bool == 0; //@nz
						if(var_526_bool != 0) {
							goto Label_948;
						}
						@@@var_0_bool:GetPFPosition(var_87_cvector);
						GetPFPosition(var_88_cvector);
						var_92_cvector = var_87_cvector - var_88_cvector;
						var_93_float = var_92_cvector | var_92_cvector;
						var_527_float = var_74_float * var_74_float;
						var_528_bool = var_93_float < var_527_float;
						if(var_528_bool == 0) goto Label_938;
						var_529_bool = 0; var_530_float = 0;
						var_74_float = var_530_float;
						func_1039(var_95_bool, var_96_float, var_529_bool, var_530_float);
						var_531_bool = var_529_bool == 0; //@nz
						if(var_531_bool == 0) goto Label_938;
						goto Label_948;
				}
					var_532_bool = 0; var_533_float = 0;
					var_74_float = var_533_float;
					func_1039(var_95_bool, var_96_float, var_532_bool, var_533_float);
					var_534_bool = var_532_bool == 0; //@nz
					if(var_534_bool != 0) {
						goto Label_948;
					}
					var_90_bool = 1;

				}
			Label_938:
				goto Label_947;
		}
		Label_947:
			goto Label_776;

		}
	}
Label_948:
	WaitForAnimEnd();
	var_227_object = var_3_object;
	if(var_227_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_230_bool = var_89_bool;
	if(var_230_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2786()
{
	return 0;
}


func_2788(var_18_bool)
{
	var_18_bool = 0;
	return 0;
}


func_2791()
{
	return 0;
}


func_2793(var_25_bool, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	CanSee(var_28_bool, var_26_object);
	var_25_bool = 1;
	var_29_bool = var_28_bool;
	if(var_29_bool != 1) {
		var_30_float = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_1682(var_30_float, var_31_object);
		var_39_bool = var_30_float <= (int)2250000;
		if(var_39_bool != 1) {
			var_25_bool = 0;
		}
	}
	return 2;
}


func_1780(var_40_bool, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	@@var_41_object:IsDead(var_43_bool);
	var_43_bool = var_40_bool;
	return 2;
}


func_2808(var_53_object)
{
	var_54_object = Obj();
	var_53_object = var_54_object;
	func_2608(var_54_object);
	return 0;
}


func_1785(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	var_35_bool = var_30_object == 0; //@ne
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_bool = 0;
	var_36_bool = 0;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", (int)1);
	if(var_39_bool != 0) {
		var_40_bool = 0; var_41_object = Obj();
		var_30_object = var_41_object;
		func_1780(var_40_bool, var_41_object);
		if(var_40_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	GetScene(var_33_object);
	var_44_bool = var_33_object == 0; //@ne
	if(var_44_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	@@var_30_object:GetScene(var_34_object);
	var_45_bool = var_33_object != var_34_object;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_29_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1274(var_313_bool)
{
	var_314_bool = 0;
	var_314_bool = 0;
	var_315_bool = 0;
	func_1246(var_314_bool, var_315_bool);
	if(var_315_bool != 0) {
		var_332_bool = 0;
		func_1290(var_313_bool, var_314_bool, var_332_bool);
		if(var_332_bool != 0) {
			var_314_bool = 1;
		}
	}
	if(var_314_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_2814(var_42_bool)
{
	var_42_bool = 0;
	return 0;
}


func_2817()
{
	return 0;
}


func_2819(var_20_bool)
{
	var_20_bool = 0;
	return 0;
}


func_2822()
{
	return 0;
}


func_2824(var_146_string, var_147_int)
{
	var_148_string = ""; var_149_string = "";
	var_150_int = var_147_int;
	if(var_150_int != 0) {
		"idle" = "idle" + var_147_int;
	}
	var_149_string = var_146_string;
	return 2;
}


func_1290(var_0_bool, var_4_object, var_332_bool)
{
	var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_object = Obj(); var_339_bool = 0; var_340_float = 0; var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0);
	GetScene(var_338_object);
	var_339_bool = 0;
	
Label_1294:
	var_343_cvector = CVector(0,0,0); var_344_object = Obj();
	var_344_object = var_0_bool;
	func_1675(var_343_cvector, var_344_object);
	var_349_int = -var_343_cvector;
	FindDirLength(var_340_float, var_349_int, var_4_object);
	var_350_bool = var_340_float < var_4_object;
	if(var_350_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_341_cvector);
		GetPFPosition(var_342_cvector);
		WaitForAnimEnd();
		func_1378(var_342_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_339_bool = 1;
		var_354_bool = 0;
		func_1246(var_342_cvector, var_354_bool);
		var_355_bool = var_354_bool == 0; //@nz
		if(var_355_bool != 0) {
			goto Label_1332;
		}
		goto Label_1294;
	}
Label_1332:
	var_339_bool = var_332_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2831()
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_18_bool = 0;
	func_2246((bool)1);
	return 0;
}


func_2839(var_24_object)
{
	var_25_bool = 0; var_26_bool = 0;
	var_27_bool = GlobalVars[0];
	if(var_27_bool != 0) {
		IsOverrideActive(var_26_bool);
		var_28_bool = var_26_bool == 0; //@nz
		if(var_28_bool != 0) {
			var_29_object = Obj();
			var_24_object = var_29_object;
			func_2161(var_29_object);
		}
		return 2;
	}
	return 2;
}


func_1821(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_1785(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_1695(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_2852()
{
	var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_int = 0;
	var_142_int = 0;
	
Label_2854:
	var_146_string = ""; var_147_int = 0;
	var_142_int = var_147_int;
	func_2824(var_146_string, var_147_int);
	HasAnimation(var_143_bool, "all", var_146_string);
	var_151_bool = var_143_bool == 0; //@nz
	if(var_151_bool != 0) {
	} else {
		var_142_int = var_142_int + (int)1;
		goto Label_2854;
	}
	irand(var_144_int, var_142_int);
	var_153_string = ""; var_154_int = 0;
	var_144_int = var_154_int;
	func_2824(var_153_string, var_154_int);
	PlayAnimation("all", var_153_string);
	WaitForAnimEnd();
	return 6;
	
}


func_1845(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = "";
	var_44_bool = var_29_object == 0; //@ne
	if(var_44_bool != 0) {
		return 14;
	}
	IsDead(var_37_bool);
	var_45_bool = var_37_bool;
	if(var_45_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_38_int);
	var_47_bool = var_38_int < (int)0;
	if(var_47_bool != 0) {
		return 14;
	}
	@@var_29_object:GetPosition(var_39_cvector);
	GetPosition(var_40_cvector);
	GetDirection(var_41_cvector);
	var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_50_float = var_48_float * var_49_float;
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	var_53_float = var_51_float * var_52_float;
	var_54_int = var_50_float + var_53_float;
	var_56_bool = var_54_int >= (int)0;
	if(var_56_bool != 0) {
		var_43_string = "fhit";
	} else {
		var_43_string = "bhit";
	}
	var_59_int = var_43_string + "1";
	var_61_int = var_43_string + "2";
	FadeSecondaryAnimation("hit_react", var_59_int, var_61_int, (int)-10);
	return 14;
	
}


func_1335(var_0_bool, var_263_bool)
{
	var_264_bool = 0; var_265_bool = 0;
	var_268_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_268_bool != 0) {
		@@@var_0_bool:IsAttacking(var_265_bool);
		var_265_bool = var_263_bool;
		return 2;
	}
	var_263_bool = 0;
	return 2;
}


func_2879()
{
	StopAnimation();
	return 0;
}


func_1346(var_2_object, var_5_int)
{
	var_380_float = 0; var_381_int = 0; var_382_float = 0; var_383_int = 0;
	var_384_bool = var_2_object == 0; //@nz
	if(var_384_bool != 0) {
		return 4;
	}
	var_385_int = var_5_int;
	if(var_385_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_388_bool = var_5_int > (int)0;
		if(var_388_bool != 0) {
			return 4;
		}
	}
	rand(var_382_float);
	var_389_float = 0;
	func_1396(var_389_float);
	var_390_bool = var_382_float < var_389_float;
	if(var_390_bool != 0) {
		irand(var_383_int, var_2_object);
		var_383_int = var_383_int + (int)1;
		var_393_int = "attack" + var_383_int;
		Speak(var_393_int);
		var_394_int = 0;
		func_1394(var_394_int);
		var_5_int = var_394_int;
	}
	return 4;
}


func_2882(var_23_bool)
{
	var_23_bool = 1;
	return 0;
}


func_2884(var_17_bool, var_18_object, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_float = 0; var_25_bool = 0;
	var_18_object = var_22_object;
	var_19_object = var_23_object;
	var_20_bool = var_25_bool;
	func_2722(var_21_bool, var_22_object, var_23_object, (float)500.0, var_25_bool);
	var_21_bool = var_17_bool;
	return 0;
}


func_2894(var_95_object)
{
	var_96_bool = 0; var_97_object = Obj();
	var_95_object = var_97_object;
	func_1690(var_96_bool, var_97_object);
	if(var_96_bool != 0) {
		var_100_object = Obj();
		func_2039(var_100_object);
		ReportReputationChange(var_95_object, var_100_object, (float)-0.07000000029802322, (bool)1);
		var_105_bool = 0;
		func_2246((bool)1);
	}
	func_2222();
	var_239_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1889(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_bool = 0;
	var_38_bool = 0;
	var_39_object = var_16_object;
	if(var_39_object != 0) {
		var_41_bool = var_17_int != (int)4;
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_43_bool = var_17_int != (int)5;
		if(var_43_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
		var_46_cvector = CVector(0,0,0); var_47_object = Obj();
		var_16_object = var_47_object;
		func_1675(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_2045(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		CreateVectorVector(var_29_object);
		var_30_int = 1;

	Label_1918:
		var_58_int = "hit" + var_30_int;
		GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector);
		var_59_bool = var_31_bool == 0; //@nz
		if(var_59_bool != 0) {
		} else {
			var_107_int = var_33_cvector | var_28_cvector;
			var_109_bool = var_107_int >= (float)0.7071067690849304;
			if(var_109_bool != 0) {
				@@var_29_object:add(var_32_cvector);
			}
			var_30_int = var_30_int + (int)1;
			goto Label_1918;
		}
		@@var_29_object:size(var_34_int);
		var_60_int = var_34_int;
		if(var_60_int != 0) {
			irand(var_35_int, var_34_int);
			@@var_29_object:get(var_36_cvector, var_35_int);
			var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
			var_16_object = var_61_object;
			var_17_int = var_62_int;
			var_18_float = var_63_float;
			var_36_cvector = var_64_cvector;
			var_65_cvector = -var_28_cvector;
			func_1957(var_63_float, var_64_cvector, var_65_cvector);
			return 18;
		}
		var_29_object = 0;
	}
	var_106_object = Obj();
	var_16_object = var_106_object;
	func_1845(var_106_object);
	return 18;
	
}


func_1378(var_0_bool)
{
	var_136_object = Obj();
	var_136_object = var_0_bool;
	func_2135(var_136_object);
	return 0;
}


func_1383(var_477_int)
{
	var_477_int = 0;
	return 0;
}


func_1385()
{
	var_269_string = "";
	func_1998("attack_stay");
	return 0;
}


func_1390()
{
	return 0;
}


func_1392(var_502_bool)
{
	var_502_bool = 1;
	return 0;
}


func_1394(var_394_int)
{
	var_394_int = 1;
	return 0;
}


func_1396(var_389_float)
{
	var_389_float = 0.5;
	return 0;
}


func_2421(var_45_int, var_46_string)
{
	var_47_int = 0; var_48_int = 0;
	GetInvItemByName(var_48_int, var_46_string);
	var_48_int = var_45_int;
	return 2;
}


func_2426(var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	TaskCall(0);
	func_0(var_14_object);
	TaskReturn();
	return 0;
}


func_1405(var_2_object, var_143_bool, var_144_object, var_145_float, var_146_float, var_147_bool, var_148_bool)
{
	var_152_bool = 0; var_153_bool = 0; var_154_bool = 0; var_155_bool = 0;
	var_156_object = Obj();
	var_144_object = var_156_object;
	func_2135(var_156_object);
	SetTimer((int)1, (int)5);
	CanSee(var_154_bool, var_144_object);
	var_159_bool = var_154_bool;
	if(var_159_bool != 0) {
		var_2_object = true;
		var_160_object = Obj();
		var_144_object = var_160_object;
		func_1987(var_160_object);
	} else {
		var_2_object = false;
	}
	var_167_bool = 0; var_168_object = Obj();
	var_144_object = var_168_object;
	func_1690(var_167_bool, var_168_object);
	if(var_167_bool != 0) {
		var_171_object = Obj();
		func_2039(var_171_object);
		SendPlayerEnemy(var_144_object, var_171_object);
	}
	var_172_bool = 0; var_173_object = Obj(); var_174_float = 0; var_175_float = 0; var_176_bool = 0; var_177_bool = 0;
	var_144_object = var_173_object;
	var_145_float = var_174_float;
	var_146_float = var_175_float;
	var_147_bool = var_176_bool;
	var_148_bool = var_177_bool;
	func_1510(var_154_bool, var_155_bool, var_172_bool, var_173_object, var_174_float, var_175_float, var_176_bool, var_177_bool);
	var_172_bool = var_155_bool;
	var_223_object = var_2_object;
	if(var_223_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_155_bool = var_143_bool;
	return 4;
	
}


func_392(var_1_bool)
{
	KillTimer((int)110);
	var_1_bool = false;
	var_14_bool = var_0_bool;
	if(var_14_bool != 0) {
		func_2879();
	} else {
		Stop();
	}
	return 0;
	
}


func_414(var_1_bool, var_14_object)
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0;
	var_19_bool = var_1_bool;
	if(var_19_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_14_object, var_17_bool);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		return 4;
	}
	var_21_int = 0; var_22_object = Obj();
	var_14_object = var_22_object;
	func_2599(var_22_object);
	var_21_int = var_18_int;
	var_25_bool = var_18_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_18_int > (int)1;
		if(var_27_bool != 0) {
			func_392(var_18_int);
		}
		var_30_object = Obj();
		var_14_object = var_30_object;
		func_2608(var_30_object);
		var_1_bool = true;
		SetTimer((int)110, (float)5.0);
	}
	return 4;
}


func_1957(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	GetScene(var_25_object);
	AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	var_29_object = Obj();
	var_18_object = var_29_object;
	func_1845(var_29_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2471(var_16_bool, var_17_object, var_18_string)
{
	var_20_bool = var_18_string == "unholster";
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_17_object = var_22_object;
		func_2788(var_22_object);
		var_21_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x9c5";
	}
	var_24_bool = var_18_string == "player_shot";
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_17_object = var_26_object;
		func_2793(var_25_bool, var_26_object);
		var_25_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x9c5";
	}
	var_41_bool = var_18_string == "battle";
	if(var_41_bool != 0) {
		var_42_bool = 0; var_43_object = Obj();
		var_17_object = var_43_object;
		func_2814(var_43_object);
		var_42_bool = var_16_bool;
		return 0;
	}
	var_16_bool = 0;
	return 0;
}


func_1971(var_88_object)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0);
	@@var_88_object:GetPosition(var_92_cvector);
	GetPosition(var_93_cvector);
	var_94_cvector = var_92_cvector - var_93_cvector;
	var_95_float = GetByIndex(var_94_cvector, 0);
	var_96_float = GetByIndex(var_94_cvector, 2);
	RotateAsync(var_95_float, var_96_float);
	return 6;
}


func_1468(var_2_object)
{
	KillTimer((int)1);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1634(var_12_object);
	return 0;
}


func_1982(var_132_bool)
{
	var_133_bool = 0; var_134_bool = 0;
	IsLoaded(var_134_bool);
	var_134_bool = var_132_bool;
	return 2;
}


func_447(var_0_bool, var_55_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0;
	var_0_bool = var_55_object;
	func_498(var_62_bool);
	GetDirection(var_60_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_bool;
	func_1675(var_70_cvector, var_71_object);
	var_70_cvector = var_61_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_60_cvector = var_77_cvector;
	var_61_cvector = var_78_cvector;
	func_2092(var_76_float, var_77_cvector, var_78_cvector);
	var_101_bool = var_76_float < (int)0;
	if(var_101_bool != 0) {
		var_102_object = Obj();
		var_102_object = var_0_bool;
		func_1971(var_102_object);
		var_62_bool = 1;
	} else {
		Sleep((float)1.5, var_62_bool);
	}
	var_111_bool = var_62_bool;
	if(var_111_bool != 0) {
		var_112_object = Obj();
		var_112_object = var_0_bool;
		func_1971(var_112_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_1987(var_16_object)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0);
	@@var_16_object:GetEyesHeight(var_19_float);
	var_20_cvector = CVector(0.0, 0.0, 0.0);
	var_21_float = GetByIndex(var_20_cvector, 1);
	var_19_float = var_21_float;
	SetByIndex(var_20_cvector, 1) = var_21_float;
	LookAsync(var_16_object, "head", var_20_cvector);
	return 4;
}


func_965(var_1_bool, var_2_object, var_4_object)
{
	var_97_bool = 0; var_98_bool = 0; var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_bool = 0; var_102_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_967:
	var_106_int = var_1_bool + (int)1;
	var_107_int = "attack_begin" + var_106_int;
	HasAnimation(var_100_bool, "all", var_107_int);
	var_108_bool = var_100_bool == 0; //@nz
	if(var_108_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_967;
	}
	var_2_object = 0;
	
Label_981:
	var_111_int = var_2_object + (int)1;
	var_112_int = "attack" + var_111_int;
	IsExisting3DSound(var_101_bool, var_112_int);
	var_113_bool = var_101_bool == 0; //@nz
	if(var_113_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_981;

	}
	GetAnimationOffset(var_102_cvector, "all", "bjump");
	var_116_float = GetByIndex(var_102_cvector, 2);
	var_4_object = -var_116_float;
	return 6;
	
}


func_2503(var_46_object, var_47_string)
{
	var_49_bool = var_47_string == "unholster";
	if(var_49_bool != 0) {
		var_46_object = Obj();
		func_2791();
	} else {
		var_52_bool = var_47_string == "player_shot";
		if(var_52_bool != 0) {
			var_53_object = Obj();
			var_46_object = var_53_object;
			func_2808(var_53_object);
			goto Label_2527;
		}
		var_120_bool = var_47_string == "battle";
		if(var_120_bool == 0) goto Label_2527;
		var_46_object = Obj();
		func_2817();
	}
Label_2527:
	return 0;
	
}


func_1998(var_38_string)
{
	var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	IsExisting3DSound(var_47_bool, var_38_string);
	var_55_bool = var_47_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_48_int = 0;

	Label_2004:
		var_57_int = var_48_int + (int)1;
		var_58_int = var_38_string + var_57_int;
		IsExisting3DSound(var_49_bool, var_58_int);
		var_59_bool = var_49_bool == 0; //@nz
		if(var_59_bool != 0) {
		} else {
			var_48_int = var_48_int + (int)1;
			goto Label_2004;
		}
		var_60_bool = var_48_int == 0; //@nz
		if(var_60_bool != 0) {
			return 16;
		}
		irand(var_50_int, var_48_int);
		var_62_int = var_50_int + (int)1;
		var_38_string = var_38_string + var_62_int;
	}
	Is3DSoundLoaded(var_51_bool, var_38_string);
	var_63_bool = var_51_bool;
	if(var_63_bool != 0) {
		GetEyesHeight(var_52_float);
		GetDirection(var_53_cvector);
		var_54_cvector = var_53_cvector * (int)50;
		var_65_float = GetByIndex(var_54_cvector, 1);
		var_65_float = var_65_float + var_52_float;
		SetByIndex(var_54_cvector, 1) = var_65_float;
		PlayGlobalSound(var_38_string, var_54_cvector);
	}
	return 16;
	
}


func_2528(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = 0; var_19_object = Obj();
	var_14_object = var_19_object;
	func_2788(var_19_object);
	if(var_18_bool != 0) {
		var_20_bool = 0; var_21_object = Obj();
		var_14_object = var_21_object;
		func_1690(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		@@var_14_object:IsWeaponHolstered(var_16_bool);
		var_24_bool = var_16_bool == 0; //@nz
		if(var_24_bool != 0) {
			var_13_bool = 1;
			return 2;
		}
	}
	var_13_bool = 0;
	return 2;
}


func_1510(var_0_bool, var_1_bool, var_172_bool, var_173_object, var_174_float, var_175_float, var_176_bool, var_177_bool)
{
	var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj(); var_186_bool = 0; var_187_bool = 0; var_188_object = Obj(); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_float = 0; var_193_object = Obj();
	var_0_bool = false;
	var_1_bool = var_173_object;
	var_177_bool = var_187_bool;
	
Label_1514:
	var_194_bool = 0; var_195_object = Obj();
	var_173_object = var_195_object;
	func_1650(var_194_bool, var_195_object);
	var_198_bool = var_194_bool == 0; //@nz
	if(var_198_bool != 0) {
		var_172_bool = 0;
		return 16;
	}
	@@var_173_object:GetPosition(var_189_cvector);
	GetPosition(var_190_cvector);
	var_191_cvector = var_189_cvector - var_190_cvector;
	var_192_float = var_191_cvector | var_191_cvector;
	var_199_bool = 0;
	var_199_bool = 0;
	var_201_bool = var_175_float > (int)0;
	if(var_201_bool != 0) {
		var_202_float = var_175_float * var_175_float;
		var_203_bool = var_192_float > var_202_float;
		if(var_203_bool != 0) {
			var_199_bool = 1;
		}
	}
	if(var_199_bool != 0) {
		Stop();
		var_172_bool = 0;
		return 16;
	}
	var_204_float = var_174_float * var_174_float;
	var_205_bool = var_192_float > var_204_float;
	if(var_205_bool != 0) {
		@@var_173_object:GetPFPosition(var_189_cvector);
		FindPathTo(var_193_object, var_189_cvector);
		var_206_bool = var_193_object != 0; //@nn
		if(var_206_bool != 0) {
			var_193_object = var_188_object;
			var_193_object = 0;
		}
		var_207_bool = var_188_object != 0; //@nn
		if(var_207_bool != 0) {
			var_208_bool = var_187_bool;
			if(var_208_bool == 0) goto Label_1563;
			var_187_bool = 0;
			RotatePath(var_188_object, var_186_bool);
			var_209_bool = var_186_bool == 0; //@nz
			if(var_209_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_212_string = "";
				func_1657(var_212_string);
				var_213_string = "";
				func_1659(var_213_string);
				FollowPath(var_188_object, var_176_bool, var_186_bool, var_212_string, var_213_string);
				var_214_bool = var_186_bool == 0; //@nz
				if(var_214_bool != 0) {
					var_215_bool = var_0_bool;
					if(var_215_bool != 0) {
						var_188_object = 0;
						goto Label_1610;
					EMIT "GOTO 0x62f";
					}
				} else {
					var_188_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_186_bool);
					var_218_bool = var_186_bool == 0; //@nz
					if(var_218_bool != 0) {
						var_219_bool = var_0_bool;
						if(var_219_bool != 0) {
							var_188_object = 0;
							goto Label_1610;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1610;
	}
			var_193_object = 0;
			goto Label_1608;

		Label_1608:
			var_188_object = 0;

		}
		goto Label_1514;
	}
Label_1610:
	var_172_bool = !var_0_bool;
	return 16;
	
}


func_1000(var_0_bool, var_398_float, var_399_int)
{
	var_400_object = Obj(); var_401_float = 0; var_402_float = 0; var_403_object = Obj(); var_404_float = 0; var_405_float = 0;
	var_407_float = var_398_float * (float)0.8999999761581421;
	GetVictim(var_407_float, var_403_object);
	ReportAttack(var_0_bool);
	var_408_bool = var_403_object == var_0_bool;
	if(var_408_bool != 0) {
		var_409_float = 0; var_410_object = Obj(); var_411_int = 0;
		var_403_object = var_410_object;
		var_399_int = var_411_int;
		func_730(var_411_int);
		var_409_float = var_404_float;
		var_412_float = 0; var_413_object = Obj(); var_414_float = 0; var_415_int = 0;
		var_403_object = var_413_object;
		var_404_float = var_414_float;
		var_416_int = 0; var_417_object = Obj(); var_418_int = 0;
		var_403_object = var_417_object;
		var_399_int = var_418_int;
		func_733(var_418_int);
		var_416_int = var_415_int;
		func_1707(var_412_float, var_413_object, var_414_float, var_415_int);
		var_412_float = var_405_float;
		var_477_int = 0;
		func_1383(var_477_int);
		ReportHit(var_0_bool, var_477_int, var_405_float, var_404_float);
		var_478_object = Obj(); var_479_float = 0;
		var_403_object = var_478_object;
		var_405_float = var_479_float;
		func_1390();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_498(var_0_bool)
{
	var_63_object = Obj();
	var_63_object = var_0_bool;
	func_1987(var_63_object);
	return 0;
}


func_2039(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2557(var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1690(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		var_20_object = Obj();
		func_2039(var_20_object);
		ReportReputationChange(var_15_object, var_20_object, (float)-0.029999999329447746);
	}
	return 0;
}


