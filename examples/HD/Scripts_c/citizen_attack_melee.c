// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,Trace/1,AddItem/4,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:GenerateMoney: iMin > iMax|W:Money|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:idle|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier
// @GLOBALS: 0:bool:
// @RUN_OP: 0x9c
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0xf vars=object
// @EVENT_6: op=0x1d vars=
// @EVENT_22: op=0x96 vars=object,int,float,float
// @EVENT_16: op=0x98 vars=object,string
// @EVENT_41: op=0x9a vars=object
// @TASK_1: vars=bool,bool,bool params=0
// @EVENT_0: op=0xb4 vars=object
// @EVENT_17: op=0xc8 vars=object
// @EVENT_30: op=0xe0 vars=object,object,bool
// @EVENT_40: op=0xfc vars=object
// @EVENT_42: op=0x110 vars=object,string
// @EVENT_26: op=0x135 vars=string
// @EVENT_1: op=0x143 vars=object
// @EVENT_3: op=0x156 vars=object
// @EVENT_7: op=0x15c vars=int
// @EVENT_6: op=0x168 vars=
// @EVENT_41: op=0x17f vars=object
// @EVENT_10: op=0x1f0 vars=object
// @EVENT_28: op=0x1f4 vars=
// @TASK_2: vars= params=0
// @EVENT_0: op=0x20d vars=object
// @EVENT_17: op=0x221 vars=object
// @EVENT_30: op=0x239 vars=object,object,bool
// @EVENT_40: op=0x255 vars=object
// @EVENT_42: op=0x269 vars=object,string
// @EVENT_26: op=0x28e vars=string
// @EVENT_6: op=0x29c vars=
// @EVENT_1: op=0x2a3 vars=object
// @TASK_3: vars=object,int,int,bool,float,int params=1
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_6: op=0x5ab vars=
// @EVENT_7: op=0x5e3 vars=int
// @EVENT_1: op=0x5fe vars=object
// @EVENT_2: op=0x60d vars=object
// @EVENT_10: op=0x693 vars=object
// @EVENT_41: op=0x69e vars=object
// @STANDALONE_EVENT_16: op=0x957 vars=object,string
// @STANDALONE_EVENT_41: op=0x964 vars=object
// @STANDALONE_EVENT_22: op=0x96a vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x972 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x135,0x143,0x156,0x15c,0x168,0x17f,0x1f0,0x28e,0x29c,0x2a3,0x307,0x30f,0x312,0x5a3,0x5ab,0x5e3,0x5fe,0x60d,0x681,0x693,0x69e,0x6a7,0x6b2,0x83c,0x843,0x94f,0x964,0x96a,0x972,0x97c,0x99c,0x9cc,0x9d2,0xa14,0xa1e,0xa24,0xa2e,0xa81,0xa88,0xaab,0xaae,0xab0,0xab3,0xab5,0xab8,0xabb,0xabe,0xac0,0xac3,0xac5,0xac8,0xaca,0xacd,0xadc,0xae6

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2741(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_12_bool = Obj();
		func_2744();
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_2746();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2741(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_367(var_14_int);
		}
		var_12_bool = Obj();
		func_2744();
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_object = Obj();
	var_12_bool = var_15_object;
	func_2514(var_15_object);
	var_24_int = 0; var_25_object = Obj();
	var_12_bool = var_25_object;
	func_2596(var_24_int, var_25_object);
	var_24_int = var_14_int;
	var_61_bool = var_14_int > (int)0;
	if(var_61_bool != 0) {
		var_63_bool = var_14_int > (int)1;
		if(var_63_bool != 0) {
			func_367(var_14_int);
		}
		var_65_object = Obj();
		var_12_bool = var_65_object;
		func_2606(var_65_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_bool = 0;
	var_12_bool = var_18_object;
	var_13_object = var_19_object;
	var_14_bool = var_20_bool;
	func_2780(var_17_bool, var_18_object, var_19_object, var_20_bool);
	if(var_17_bool != 0) {
		var_79_int = 0; var_80_object = Obj(); var_81_bool = 0;
		var_12_bool = var_80_object;
		var_14_bool = var_81_bool;
		func_2689(var_80_object, var_81_bool);
		var_79_int = var_16_int;
		var_113_bool = var_16_int > (int)0;
		if(var_113_bool != 0) {
			var_115_bool = var_16_int > (int)1;
			if(var_115_bool != 0) {
				func_367(var_16_int);
			}
			var_117_object = Obj();
			var_12_bool = var_117_object;
			func_2696(var_117_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2731(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_367(var_14_int);
		}
		var_12_bool = Obj();
		func_2734();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_string = "";
	var_12_object = var_17_object;
	var_13_bool = var_18_string;
	func_2428(var_16_bool, var_17_object, var_18_string);
	if(var_16_bool != 0) {
		func_367(var_15_int);
		var_32_object = Obj(); var_33_string = "";
		var_12_object = var_32_object;
		var_13_bool = var_33_string;
		func_2460(var_32_object, var_33_string);
	} else {
		var_43_int = 0; var_44_string = ""; var_45_object = Obj();
		var_13_bool = var_44_string;
		var_12_object = var_45_object;
		func_2736(var_45_object);
		var_43_int = var_15_int;
		var_47_bool = var_15_int > (int)0;
		if(var_47_bool == 0) goto Label_308;
		var_49_bool = var_15_int > (int)1;
		if(var_49_bool != 0) {
			func_367(var_15_int);
		}
		var_50_string = ""; var_51_object = Obj();
		var_13_bool = var_50_string;
		var_12_object = var_51_object;
		func_2739();
	}
Label_308:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_string = "";
	var_12_bool = var_14_string;
	func_2527(var_13_bool, var_14_string);
	if(var_13_bool != 0) {
		func_367(var_12_bool);
		var_23_string = "";
		var_12_bool = var_23_string;
		func_2543(var_23_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_bool = var_14_object;
	func_2485(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_367(var_12_bool);
		var_26_object = Obj();
		var_12_bool = var_26_object;
		func_2508(var_26_object);
	} else {
		var_28_object = Obj();
		var_12_bool = var_28_object;
		func_392(var_12_bool, var_28_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_object = Obj();
	var_12_bool = var_13_object;
	func_392(var_12_bool, var_13_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_14_bool = var_12_bool != (int)110;
	if(var_14_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_367(var_11_bool);
	func_2746();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_367(var_12_bool);
	var_12_bool = Obj();
	func_2404();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	RequestClearPath(var_12_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2741(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_770();
		}
		var_12_bool = Obj();
		func_2744();
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_object = Obj();
	var_12_bool = var_15_object;
	func_2514(var_15_object);
	var_24_int = 0; var_25_object = Obj();
	var_12_bool = var_25_object;
	func_2596(var_24_int, var_25_object);
	var_24_int = var_14_int;
	var_61_bool = var_14_int > (int)0;
	if(var_61_bool != 0) {
		var_63_bool = var_14_int > (int)1;
		if(var_63_bool != 0) {
			func_770();
		}
		var_64_object = Obj();
		var_12_bool = var_64_object;
		func_2606(var_64_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_bool = 0;
	var_12_bool = var_18_object;
	var_13_object = var_19_object;
	var_14_bool = var_20_bool;
	func_2780(var_17_bool, var_18_object, var_19_object, var_20_bool);
	if(var_17_bool != 0) {
		var_79_int = 0; var_80_object = Obj(); var_81_bool = 0;
		var_12_bool = var_80_object;
		var_14_bool = var_81_bool;
		func_2689(var_80_object, var_81_bool);
		var_79_int = var_16_int;
		var_113_bool = var_16_int > (int)0;
		if(var_113_bool != 0) {
			var_115_bool = var_16_int > (int)1;
			if(var_115_bool != 0) {
				func_770();
			}
			var_116_object = Obj();
			var_12_bool = var_116_object;
			func_2696(var_116_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2731(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_770();
		}
		var_12_bool = Obj();
		func_2734();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_string = "";
	var_12_object = var_17_object;
	var_13_bool = var_18_string;
	func_2428(var_16_bool, var_17_object, var_18_string);
	if(var_16_bool != 0) {
		func_770();
		var_31_object = Obj(); var_32_string = "";
		var_12_object = var_31_object;
		var_13_bool = var_32_string;
		func_2460(var_31_object, var_32_string);
	} else {
		var_42_int = 0; var_43_string = ""; var_44_object = Obj();
		var_13_bool = var_43_string;
		var_12_object = var_44_object;
		func_2736(var_44_object);
		var_42_int = var_15_int;
		var_46_bool = var_15_int > (int)0;
		if(var_46_bool == 0) goto Label_653;
		var_48_bool = var_15_int > (int)1;
		if(var_48_bool != 0) {
			func_770();
		}
		var_49_string = ""; var_50_object = Obj();
		var_13_bool = var_49_string;
		var_12_object = var_50_object;
		func_2739();
	}
Label_653:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_string = "";
	var_12_bool = var_14_string;
	func_2527(var_13_bool, var_14_string);
	if(var_13_bool != 0) {
		func_770();
		var_22_string = "";
		var_12_bool = var_22_string;
		func_2543(var_22_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_770();
	func_2746();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_bool = var_14_object;
	func_2485(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_770();
		var_25_object = Obj();
		var_12_bool = var_25_object;
		func_2508(var_25_object);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_1521(var_11_bool);
	func_2746();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)1;
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_15_object = var_1_bool;
		func_2152(var_15_object);
	} else {
		var_20_int = 0;
		var_12_int = var_20_int;
		func_1665(var_11_bool, var_12_int, var_20_int);
	}
	return 0;
	
}


task_4_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_1_bool == var_12_object;
	if(var_14_bool != 0) {
		var_15_bool = var_2_bool == 0; //@nz
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_2_bool = true;
		var_16_object = Obj();
		var_12_object = var_16_object;
		func_2040(var_16_object);
	}
	return 0;
}


task_4_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_1_bool == var_12_object;
	if(var_14_bool != 0) {
		var_15_bool = var_2_bool;
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	func_1521(var_12_object);
	var_12_object = Obj();
	func_2404();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_string)
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


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_2383(var_13_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0;
	var_12_object = var_16_object;
	var_13_int = var_17_int;
	var_14_float = var_18_float;
	func_1942(var_16_object, var_17_int, var_18_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_12_object = var_18_object;
	var_13_int = var_19_int;
	var_14_float = var_20_float;
	var_16_cvector = var_21_cvector;
	var_17_cvector = var_22_cvector;
	func_2010(var_20_float, var_21_cvector, var_22_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	SensePlayerOnly((bool)1);
	func_2767();
	func_171();
	
Label_165:
	var_2_bool = false;
	func_432(var_10_object, var_11_bool);
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_0(var_14_object)
{
	EventDisable(0);
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_33(var_15_object);
	var_95_object = Obj();
	var_14_object = var_95_object;
	func_2790(var_95_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_2051(var_38_string)
{
	var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	IsExisting3DSound(var_47_bool, var_38_string);
	var_55_bool = var_47_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_48_int = 0;

	Label_2057:
		var_57_int = var_48_int + (int)1;
		var_58_int = var_38_string + var_57_int;
		IsExisting3DSound(var_49_bool, var_58_int);
		var_59_bool = var_49_bool == 0; //@nz
		if(var_59_bool != 0) {
		} else {
			var_48_int = var_48_int + (int)1;
			goto Label_2057;
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


func_2563(var_175_int)
{
	var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_bool = 0;
	var_178_int = 0;
	
Label_2565:
	var_181_string = ""; var_182_int = 0;
	var_178_int = var_182_int;
	func_2556(var_181_string, var_182_int);
	HasAnimation(var_179_bool, "all", var_181_string);
	var_186_bool = var_179_bool == 0; //@nz
	if(var_186_bool != 0) {
	} else {
		var_178_int = var_178_int + (int)1;
		goto Label_2565;
	}
	var_178_int = var_175_int;
	return 4;
	
}


func_517(var_157_bool)
{
	var_157_bool = 0;
	return 0;
}


func_519(var_151_object, var_152_cvector)
{
	var_153_object = Obj(); var_154_object = Obj();
	FindShiftedPathTo(var_154_object, var_152_cvector);
	var_154_object = var_151_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2580(var_55_int, var_56_object)
{
	var_57_bool = 0; var_58_object = Obj();
	var_56_object = var_58_object;
	func_2775(var_57_bool, var_58_object);
	if(var_57_bool != 0) {
		var_55_int = 2;
	} else {
		var_55_int = 0;
	}
	return 0;
	
}


func_1563(var_0_bool, var_1_bool, var_225_bool, var_226_object, var_227_float, var_228_float, var_229_bool, var_230_bool)
{
	var_231_bool = 0; var_232_bool = 0; var_233_object = Obj(); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_float = 0; var_238_object = Obj(); var_239_bool = 0; var_240_bool = 0; var_241_object = Obj(); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_float = 0; var_246_object = Obj();
	var_0_bool = false;
	var_1_bool = var_226_object;
	var_230_bool = var_240_bool;
	
Label_1567:
	var_247_bool = 0; var_248_object = Obj();
	var_226_object = var_248_object;
	func_1703(var_247_bool, var_248_object);
	var_251_bool = var_247_bool == 0; //@nz
	if(var_251_bool != 0) {
		var_225_bool = 0;
		return 16;
	}
	@@var_226_object:GetPosition(var_242_cvector);
	GetPosition(var_243_cvector);
	var_244_cvector = var_242_cvector - var_243_cvector;
	var_245_float = var_244_cvector | var_244_cvector;
	var_252_bool = 0;
	var_252_bool = 0;
	var_254_bool = var_228_float > (int)0;
	if(var_254_bool != 0) {
		var_255_float = var_228_float * var_228_float;
		var_256_bool = var_245_float > var_255_float;
		if(var_256_bool != 0) {
			var_252_bool = 1;
		}
	}
	if(var_252_bool != 0) {
		Stop();
		var_225_bool = 0;
		return 16;
	}
	var_257_float = var_227_float * var_227_float;
	var_258_bool = var_245_float > var_257_float;
	if(var_258_bool != 0) {
		@@var_226_object:GetPFPosition(var_242_cvector);
		FindPathTo(var_246_object, var_242_cvector);
		var_259_bool = var_246_object != 0; //@nn
		if(var_259_bool != 0) {
			var_246_object = var_241_object;
			var_246_object = 0;
		}
		var_260_bool = var_241_object != 0; //@nn
		if(var_260_bool != 0) {
			var_261_bool = var_240_bool;
			if(var_261_bool == 0) goto Label_1616;
			var_240_bool = 0;
			RotatePath(var_241_object, var_239_bool);
			var_262_bool = var_239_bool == 0; //@nz
			if(var_262_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_265_string = "";
				func_1710(var_265_string);
				var_266_string = "";
				func_1712(var_266_string);
				FollowPath(var_241_object, var_229_bool, var_239_bool, var_265_string, var_266_string);
				var_267_bool = var_239_bool == 0; //@nz
				if(var_267_bool != 0) {
					var_268_bool = var_0_bool;
					if(var_268_bool != 0) {
						var_241_object = 0;
						goto Label_1663;
					EMIT "GOTO 0x664";
					}
				} else {
					var_241_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_239_bool);
					var_271_bool = var_239_bool == 0; //@nz
					if(var_271_bool != 0) {
						var_272_bool = var_0_bool;
						if(var_272_bool != 0) {
							var_241_object = 0;
							goto Label_1663;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1663;
	}
			var_246_object = 0;
			goto Label_1661;

		Label_1661:
			var_241_object = 0;

		}
		goto Label_1567;
	}
Label_1663:
	var_225_bool = !var_0_bool;
	return 16;
	
}


func_1053(var_0_bool, var_451_float, var_452_int)
{
	var_453_object = Obj(); var_454_float = 0; var_455_float = 0; var_456_object = Obj(); var_457_float = 0; var_458_float = 0;
	var_460_float = var_451_float * (float)0.8999999761581421;
	GetVictim(var_460_float, var_456_object);
	ReportAttack(var_0_bool);
	var_461_bool = var_456_object == var_0_bool;
	if(var_461_bool != 0) {
		var_462_float = 0; var_463_object = Obj(); var_464_int = 0;
		var_456_object = var_463_object;
		var_452_int = var_464_int;
		func_783(var_464_int);
		var_462_float = var_457_float;
		var_465_float = 0; var_466_object = Obj(); var_467_float = 0; var_468_int = 0;
		var_456_object = var_466_object;
		var_457_float = var_467_float;
		var_469_int = 0; var_470_object = Obj(); var_471_int = 0;
		var_456_object = var_470_object;
		var_452_int = var_471_int;
		func_786(var_471_int);
		var_469_int = var_468_int;
		func_1760(var_465_float, var_466_object, var_467_float, var_468_int);
		var_465_float = var_458_float;
		var_530_int = 0;
		func_1436(var_530_int);
		ReportHit(var_0_bool, var_530_int, var_458_float, var_457_float);
		var_531_object = Obj(); var_532_float = 0;
		var_456_object = var_531_object;
		var_458_float = var_532_float;
		func_1443();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2590(var_66_object)
{
	var_67_object = Obj();
	var_66_object = var_67_object;
	func_2606(var_67_object);
	return 0;
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
		func_2051(var_90_string);
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


func_2596(var_82_int, var_83_object)
{
	var_84_bool = 0; var_85_object = Obj();
	var_83_object = var_85_object;
	func_1874(var_84_bool, var_85_object);
	if(var_84_bool != 0) {
		var_82_int = 2;
	} else {
		var_82_int = 0;
	}
	return 0;
	
}


func_2092(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2606(var_117_object)
{
	var_118_object = Obj();
	var_117_object = var_118_object;
	TaskCall(3);
	func_775(var_118_object);
	TaskReturn();
	return 0;
}


func_2098(var_44_cvector, var_45_cvector)
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


func_2614(var_28_bool, var_29_object, var_30_bool)
{
	var_31_string = ""; var_32_string = ""; var_33_string = ""; var_34_string = "";
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_29_object = var_36_object;
	func_1748(var_35_bool, var_36_object, "class");
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
	EMIT "GOTO 0xa7f";
	}
	var_53_bool = var_34_string == "rat_big";
	if(var_53_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa7f";
	}
	var_55_bool = var_34_string == "dog";
	if(var_55_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa7f";
	}
	var_57_bool = var_34_string == "grabitel";
	if(var_57_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa7f";
	}
	var_59_bool = var_34_string == "bomber";
	if(var_59_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa7f";
	}
	var_61_bool = var_34_string == "sanitar";
	if(var_61_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa7f";
	}
	var_63_bool = var_34_string == "hunter";
	if(var_63_bool != 0) {
		var_28_bool = 0;
		return 4;
	EMIT "GOTO 0xa7f";
	}
	var_65_bool = var_34_string == "soldier";
	if(var_65_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	var_28_bool = 1;
	return 4;
}


func_2108(var_503_float, var_504_float, var_505_float)
{
	var_508_bool = var_504_float < var_505_float;
	if(var_508_bool != 0) {
		var_504_float = var_503_float;
	} else {
		var_505_float = var_503_float;
	}
	return 0;
	
}


func_2115(var_513_float, var_514_float, var_515_float, var_516_float)
{
	var_517_bool = var_514_float < var_515_float;
	if(var_517_bool != 0) {
		var_515_float = var_513_float;
		return 0;
	}
	var_518_bool = var_514_float > var_516_float;
	if(var_518_bool != 0) {
		var_516_float = var_513_float;
		return 0;
	}
	var_514_float = var_513_float;
	return 0;
}


func_1092(var_0_bool, var_1_bool, var_414_bool, var_415_float)
{
	var_416_int = 0; var_417_bool = 0; var_418_int = 0; var_419_string = ""; var_420_int = 0; var_421_bool = 0; var_422_int = 0; var_423_string = "";
	func_1431(var_423_string);
	irand(var_420_int, var_1_bool);
	var_420_int = var_420_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2161();
	var_432_int = "attack_begin" + var_420_int;
	PlayAnimation("all", var_432_int);
	WaitForAnimEnd();
	func_1399(var_422_int, var_423_string);
	var_448_bool = 0; var_449_object = Obj();
	var_449_object = var_0_bool;
	func_1874(var_448_bool, var_449_object);
	var_450_bool = var_448_bool == 0; //@nz
	if(var_450_bool != 0) {
		StopAsync();
		var_414_bool = 0;
		return 8;
	}
	var_451_float = 0; var_452_int = 0;
	var_415_float = var_451_float;
	var_420_int = var_452_int;
	func_1053(var_423_string, var_451_float, var_452_int);
	var_535_int = "attack_middle" + var_420_int;
	HasAnimation(var_421_bool, "all", var_535_int);
	var_536_bool = var_421_bool;
	if(var_536_bool != 0) {
		func_2161();
		var_539_int = "attack_middle" + var_420_int;
		PlayAnimation("all", var_539_int);
		WaitForAnimEnd();
		func_1431(var_423_string);
		var_540_bool = 0; var_541_object = Obj();
		var_541_object = var_0_bool;
		func_1874(var_540_bool, var_541_object);
		var_542_bool = var_540_bool == 0; //@nz
		if(var_542_bool != 0) {
			StopAsync();
			var_414_bool = 0;
			return 8;
		}
		var_543_float = 0; var_544_int = 0;
		var_415_float = var_543_float;
		var_420_int = var_544_int;
		func_1053(var_423_string, var_543_float, var_544_int);
		var_422_int = 1;

	Label_1169:
		var_546_int = "attack_middle" + var_420_int;
		var_548_int = var_546_int + "_";
		var_423_string = var_548_int + var_422_int;
		HasAnimation(var_421_bool, "all", var_423_string);
		var_550_bool = var_421_bool == 0; //@nz
		if(var_550_bool != 0) {
		} else {
			func_2161();
			PlayAnimation("all", var_423_string);
			WaitForAnimEnd();
			func_1431(var_423_string);
			var_566_bool = 0; var_567_object = Obj();
			var_567_object = var_0_bool;
			func_1874(var_566_bool, var_567_object);
			var_568_bool = var_566_bool == 0; //@nz
			if(var_568_bool != 0) {
				StopAsync();
				var_414_bool = 0;
				var_569_float = 0; var_570_int = 0;
				var_415_float = var_569_float;
				var_420_int = var_570_int;
				func_1053(var_423_string, var_569_float, var_570_int);
				var_422_int = var_422_int + (int)1;
				goto Label_1169;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_554_int = "attack_end" + var_420_int;
	PlayAnimation("all", var_554_int);
	var_555_bool = 0;
	func_1445(var_555_bool);
	if(var_555_bool != 0) {
		var_556_bool = 0; var_557_float = 0;
		func_1229(var_556_bool, (float)0.75);
		StopAsync();
	}
	var_414_bool = 1;
	return 8;
	
}


func_2126(var_521_float)
{
	var_522_object = Obj(); var_523_object = Obj();
	CreateFloatVector(var_523_object);
	@@var_523_object:add(var_521_float);
	var_525_bool = var_521_float < (int)0;
	if(var_525_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_523_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2143(var_23_int)
{
	var_24_float = 0; var_25_float = 0;
	GetGameTime(var_25_float);
	var_27_int = 0;
	var_27_int = var_25_float / (int)24;
	var_23_int = (int)1 + var_27_int;
	return 2;
}


func_2152(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_object, var_17_bool);
	var_18_bool = var_17_bool;
	if(var_18_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2161()
{
	var_426_object = Obj(); var_427_object = Obj();
	GetScene(var_427_object);
	var_429_object = Obj();
	func_2092(var_429_object);
	BroadcastMessage("battle", var_429_object, var_427_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_124(var_37_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_38_string = "";
	var_37_string = var_38_string;
	func_2051(var_38_string);
	PlayAnimation("all", var_37_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_37_string);
	RemoveEnvelope();
	return 0;
}


func_2172(var_20_int, var_21_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_35_bool = var_20_int > var_21_int;
	if(var_35_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_33_int = 0;
	var_37_bool = var_20_int != var_21_int;
	if(var_37_bool != 0) {
		var_38_int = var_21_int - var_20_int;
		irand(var_33_int, var_38_int);
	} else {
		var_47_bool = var_20_int == (int)0;
		if(var_47_bool == 0) goto Label_2190;
		return 4;
	}
Label_2190:
	var_33_int = var_33_int + var_20_int;
	var_40_bool = var_33_int == (int)0;
	if(var_40_bool != 0) {
		return 4;
	}
	var_41_int = 0; var_42_string = "";
	func_2378(var_41_int, "Money");
	AddItem(var_34_bool, var_41_int, (int)0, var_33_int);
	return 4;
	
}


func_2689(var_79_int, var_80_object)
{
	var_82_int = 0; var_83_object = Obj();
	var_80_object = var_83_object;
	func_2596(var_82_int, var_83_object);
	var_82_int = var_79_int;
	return 0;
}


func_1665(var_0_bool, var_1_bool, var_20_int)
{
	var_22_bool = var_20_int != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_1_bool;
	func_1703(var_23_bool, var_24_object);
	var_59_bool = var_23_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2696(var_116_object)
{
	var_117_object = Obj();
	var_116_object = var_117_object;
	func_2606(var_117_object);
	return 0;
}


func_2702(var_21_bool, var_22_object, var_23_object, var_24_float, var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0;
	var_23_object = var_29_object;
	var_30_bool = !var_25_bool;
	func_2614(var_28_bool, var_29_object, var_30_bool);
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
		func_1735(var_69_float, var_70_object);
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


func_1687(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2203(var_14_bool)
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	var_19_bool = var_14_bool;
	if(var_19_bool != 0) {
		var_20_int = 0; var_21_int = 0;
		var_23_int = 0;
		func_2143(var_23_int);
		var_30_float = var_23_int * (int)100;
		var_21_int = (int)100 + var_30_float;
		func_2172((int)0, var_21_int);
		irand(var_17_int, (int)8);
		var_50_bool = var_17_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = 0; var_52_string = "";
			func_2378(var_51_int, "lemon");
			AddItem(var_18_bool, var_51_int, (int)0, (int)1);
		} else {
			var_56_bool = var_17_int == (int)1;
			if(var_56_bool != 0) {
				var_57_int = 0; var_58_string = "";
				func_2378(var_57_int, "rusk");
				AddItem(var_18_bool, var_57_int, (int)0, (int)1);
				goto Label_2291;
			}
			var_62_bool = var_17_int == (int)2;
			if(var_62_bool != 0) {
				var_63_int = 0; var_64_string = "";
				func_2378(var_63_int, "hook");
				AddItem(var_18_bool, var_63_int, (int)0, (int)1);
				goto Label_2291;
			}
			var_68_bool = var_17_int == (int)4;
			if(var_68_bool != 0) {
				var_69_int = 0; var_70_string = "";
				func_2378(var_69_int, "syringe");
				AddItem(var_18_bool, var_69_int, (int)0, (int)1);
				goto Label_2291;
			}
			var_74_bool = var_17_int == (int)5;
			if(var_74_bool != 0) {
				var_75_int = 0; var_76_string = "";
				func_2378(var_75_int, "watch");
				AddItem(var_18_bool, var_75_int, (int)0, (int)1);
				goto Label_2291;
			}
			var_80_bool = var_17_int == (int)6;
			if(var_80_bool == 0) goto Label_2291;
			var_81_int = 0; var_82_string = "";
			func_2378(var_81_int, "razor");
			AddItem(var_18_bool, var_81_int, (int)0, (int)1);
	}
		var_85_int = 0; var_86_int = 0;
		var_88_int = 0;
		func_2143(var_88_int);
		var_90_float = var_88_int * (int)50;
		var_86_int = (int)50 + var_90_float;
		func_2172((int)0, var_86_int);
		irand(var_17_int, (int)7);
		var_93_bool = var_17_int == (int)0;
		if(var_93_bool != 0) {
			var_94_int = 0; var_95_string = "";
			func_2378(var_94_int, "beads");
			AddItem(var_18_bool, var_94_int, (int)0, (int)1);
			goto Label_2377;
		}
		var_99_bool = var_17_int == (int)1;
		if(var_99_bool != 0) {
			var_100_int = 0; var_101_string = "";
			func_2378(var_100_int, "bracelet");
			AddItem(var_18_bool, var_100_int, (int)0, (int)1);
			goto Label_2377;
		}
		var_105_bool = var_17_int == (int)2;
		if(var_105_bool != 0) {
			var_106_int = 0; var_107_string = "";
			func_2378(var_106_int, "ear_ring");
			AddItem(var_18_bool, var_106_int, (int)0, (int)1);
			goto Label_2377;
		}
		var_111_bool = var_17_int == (int)3;
		if(var_111_bool != 0) {
			var_112_int = 0; var_113_string = "";
			func_2378(var_112_int, "gold_ring");
			AddItem(var_18_bool, var_112_int, (int)0, (int)1);
			goto Label_2377;
		}
		var_117_bool = var_17_int == (int)4;
		if(var_117_bool != 0) {
			var_118_int = 0; var_119_string = "";
			func_2378(var_118_int, "silver_ring");
			AddItem(var_18_bool, var_118_int, (int)0, (int)1);
			goto Label_2377;
		}
		var_123_bool = var_17_int == (int)5;
		if(var_123_bool == 0) goto Label_2377;
		var_124_int = 0; var_125_string = "";
		func_2378(var_124_int, "flower");
		AddItem(var_18_bool, var_124_int, (int)0, (int)1);
	}
Label_2291:
	goto Label_2377;
	
Label_2377:
	return 4;
	
}


func_1703(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	func_1874(var_25_bool, var_26_object);
	var_25_bool = var_23_bool;
	return 0;
}


func_171()
{
	var_128_bool = 0;
	func_2035(var_128_bool);
	var_131_bool = var_128_bool == 0; //@nz
	if(var_131_bool != 0) {
		func_2746();
	}
	return 0;
}


func_2731(var_15_int)
{
	var_15_int = 0;
	return 0;
}


func_2734()
{
	return 0;
}


func_1710(var_265_string)
{
	var_265_string = "walk";
	return 0;
}


func_2736(var_42_int)
{
	var_42_int = 0;
	return 0;
}


func_689()
{
	var_159_int = 0; var_160_int = 0; var_161_int = 0; var_162_int = 0; var_163_bool = 0; var_164_float = 0; var_165_bool = 0; var_166_int = 0; var_167_int = 0; var_168_int = 0; var_169_int = 0; var_170_bool = 0; var_171_float = 0; var_172_bool = 0;
	WaitForAnimEnd();
	var_173_bool = 0;
	func_2035(var_173_bool);
	var_174_bool = var_173_bool == 0; //@nz
	if(var_174_bool != 0) {
		return 14;
	}
	func_2563((int)0);
	var_175_int = var_166_int;
	var_167_int = 0;
	
Label_703:
	var_188_bool = 0;
	var_188_bool = 0;
	var_190_bool = var_167_int < (int)5;
	if(var_190_bool != 0) {
		var_191_bool = 0;
		func_2035(var_191_bool);
		if(var_191_bool != 0) {
			var_188_bool = 1;
		}
	}
	if(var_188_bool != 0) {
		irand(var_168_int, (int)3);
		var_194_bool = var_168_int == (int)0;
		if(var_194_bool != 0) {
			var_195_int = var_166_int;
			if(var_195_int == 0) goto Label_736;
			irand(var_169_int, var_166_int);
			var_197_string = ""; var_198_int = 0;
			var_169_int = var_198_int;
			func_2556(var_197_string, var_198_int);
			PlayAnimation("all", var_197_string);
			WaitForAnimEnd(var_170_bool);
			var_199_bool = var_170_bool == 0; //@nz
			if(var_199_bool != 0) {
			} else {
		} else {
				var_204_bool = var_168_int == (int)1;
				if(var_204_bool != 0) {
					rand(var_171_float, (int)4);
					var_207_int = var_171_float + (int)1;
					Sleep(var_207_int, var_172_bool);
					var_208_bool = var_172_bool == 0; //@nz
					if(var_208_bool != 0) {
						goto Label_765;
					}
					goto Label_754;
				}
				var_209_int = var_167_int;
				if(var_209_int == 0) goto Label_754;
				goto Label_765;
		}
		Label_754:
			var_200_bool = 0;
			func_768(var_200_bool);
			var_201_bool = var_200_bool == 0; //@nz
			if(var_201_bool != 0) {
				goto Label_765;
			}
			ResetAAS();
			var_167_int = var_167_int + (int)1;
			goto Label_703;

		}
	}
Label_765:
	ResetAAS();
	return 14;
	
}


func_1712(var_266_string)
{
	var_266_string = "run";
	return 0;
}


func_2739()
{
	return 0;
}


func_1714(var_493_string, var_494_int)
{
	var_496_bool = var_494_int == (int)2;
	if(var_496_bool != 0) {
		var_493_string = "fire";
		return 0;
	EMIT "GOTO 0x6be";
	}
	var_498_bool = var_494_int == (int)1;
	if(var_498_bool != 0) {
		var_493_string = "bullet";
		return 0;
	}
	var_493_string = "phys";
	return 0;
}


func_2741(var_15_int)
{
	var_15_int = 0;
	return 0;
}


func_2744()
{
	return 0;
}


func_2746()
{
	return 0;
}


func_2747(var_18_bool)
{
	var_18_bool = 0;
	return 0;
}


func_2750()
{
	return 0;
}


func_1728(var_46_cvector, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	GetPosition(var_50_cvector);
	@@var_47_object:GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
	return 4;
}


func_2752(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_2755()
{
	return 0;
}


func_2757(var_29_bool)
{
	var_29_bool = 0;
	return 0;
}


func_1735(var_69_float, var_70_object)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	GetPosition(var_74_cvector);
	@@var_70_object:GetPosition(var_75_cvector);
	var_76_cvector = var_75_cvector - var_74_cvector;
	var_69_float = var_76_cvector | var_76_cvector;
	return 6;
}


func_2760()
{
	return 0;
}


func_2762(var_20_bool)
{
	var_20_bool = 0;
	return 0;
}


func_1229(var_556_bool, var_557_float)
{
	var_558_float = 0; var_559_bool = 0; var_560_float = 0; var_561_bool = 0;
	rand(var_560_float);
	var_562_bool = var_560_float < var_557_float;
	if(var_562_bool != 0) {

	Label_1234:
		IsAnimationPlaying(var_561_bool);
		var_563_bool = var_561_bool == 0; //@nz
		if(var_563_bool != 0) {
		} else {
			var_564_bool = 0;
			func_1327(var_564_bool);
			if(var_564_bool != 0) {
				var_556_bool = 1;
				sync();
				goto Label_1234;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1431(var_561_bool);
	}
	goto Label_1254;
	
Label_1254:
	var_556_bool = 0;
	return 4;
	
}


func_2765()
{
	return 0;
}


func_2767()
{
	var_13_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_14_bool = 0;
	func_2203((bool)1);
	return 0;
}


func_1743(var_96_bool, var_97_object)
{
	var_98_bool = 0; var_99_bool = 0;
	IsPlayerActor(var_97_object, var_99_bool);
	var_99_bool = var_96_bool;
	return 2;
}


func_1748(var_47_bool, var_48_object, var_49_string)
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


func_2775(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0;
	IsPlayerActor(var_58_object, var_60_bool);
	var_60_bool = var_57_bool;
	return 2;
}


func_2780(var_17_bool, var_18_object, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_float = 0; var_25_bool = 0;
	var_18_object = var_22_object;
	var_19_object = var_23_object;
	var_20_bool = var_25_bool;
	func_2702(var_21_bool, var_22_object, var_23_object, (float)700.0, var_25_bool);
	var_21_bool = var_17_bool;
	return 0;
}


func_1760(var_465_float, var_466_object, var_467_float, var_468_int)
{
	var_472_int = 0; var_473_string = ""; var_474_int = 0; var_475_float = 0; var_476_float = 0; var_477_float = 0; var_478_int = 0; var_479_string = ""; var_480_int = 0; var_481_float = 0; var_482_float = 0; var_483_float = 0;
	var_484_bool = 0; var_485_object = Obj(); var_486_string = "";
	var_466_object = var_485_object;
	func_1748(var_484_bool, var_485_object, "health");
	var_487_bool = var_484_bool == 0; //@nz
	if(var_487_bool != 0) {
		var_465_float = 0.0;
		return 12;
	}
	var_488_bool = 0; var_489_object = Obj(); var_490_string = "";
	var_466_object = var_489_object;
	func_1748(var_488_bool, var_489_object, "armor");
	var_491_bool = var_488_bool == 0; //@nz
	if(var_491_bool != 0) {
		var_478_int = 0;
	} else {
			@@var_466_object:GetProperty("armor", var_478_int);
	}
	var_493_string = ""; var_494_int = 0;
	var_468_int = var_494_int;
	func_1714(var_493_string, var_494_int);
	var_479_string = "armor_" + var_493_string;
	var_499_bool = 0; var_500_object = Obj(); var_501_string = "";
	var_466_object = var_500_object;
	var_479_string = var_501_string;
	func_1748(var_499_bool, var_500_object, var_501_string);
	var_502_bool = var_499_bool == 0; //@nz
	if(var_502_bool != 0) {
		var_480_int = 0;
	} else {
		@@var_466_object:GetProperty(var_479_string, var_480_int);

	}
	var_503_float = 0; var_504_float = 0; var_505_float = 0;
	var_506_int = var_478_int + var_480_int;
	var_504_float = var_506_int / (float)100.0;
	func_2108(var_503_float, var_504_float, (float)1);
	var_503_float = var_481_float;
	@@var_466_object:GetProperty("health", var_482_float);
	var_511_int = (int)1 - var_481_float;
	var_483_float = var_467_float * var_511_int;
	var_513_float = 0; var_514_float = 0; var_515_float = 0; var_516_float = 0;
	var_514_float = var_482_float - var_483_float;
	func_2115(var_513_float, var_514_float, (float)0, (float)1);
	@@var_466_object:SetProperty("health", var_513_float);
	var_519_bool = 0; var_520_object = Obj();
	var_466_object = var_520_object;
	func_1743(var_519_bool, var_520_object);
	if(var_519_bool != 0) {
		var_521_float = 0;
		var_521_float = -var_483_float;
		func_2126(var_521_float);
	}
	var_483_float = var_465_float;
	return 12;
	
}


func_2790(var_95_object)
{
	var_96_bool = 0; var_97_object = Obj();
	var_95_object = var_97_object;
	func_1743(var_96_bool, var_97_object);
	if(var_96_bool != 0) {
		var_100_object = Obj();
		func_2092(var_100_object);
		ReportReputationChange(var_95_object, var_100_object, (float)-0.05000000074505806, (bool)1);
	}
	var_105_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1256(var_0_bool, var_353_bool, var_354_float)
{
	var_355_bool = 0; var_356_cvector = CVector(0,0,0); var_357_cvector = CVector(0,0,0); var_358_cvector = CVector(0,0,0); var_359_float = 0; var_360_bool = 0; var_361_cvector = CVector(0,0,0); var_362_cvector = CVector(0,0,0); var_363_cvector = CVector(0,0,0); var_364_float = 0;
	
Label_1257:
	IsAnimationPlaying(var_360_bool);
	var_365_bool = var_360_bool == 0; //@nz
	if(var_365_bool != 0) {
	} else {
		var_366_bool = 0;
		func_1327(var_366_bool);
		if(var_366_bool != 0) {
			var_353_bool = 1;
			return 10;
		}
		var_409_bool = 0; var_410_object = Obj();
		var_410_object = var_0_bool;
		func_1874(var_409_bool, var_410_object);
		var_411_bool = var_409_bool == 0; //@nz
		if(var_411_bool != 0) {
			var_353_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_361_cvector);
		GetPFPosition(var_362_cvector);
		var_363_cvector = var_361_cvector - var_362_cvector;
		var_364_float = var_363_cvector | var_363_cvector;
		var_412_float = var_354_float * var_354_float;
		var_413_bool = var_364_float < var_412_float;
		if(var_413_bool != 0) {
			var_414_bool = 0; var_415_float = 0;
			var_354_float = var_415_float;
			func_1092(var_363_cvector, var_364_float, var_414_bool, var_415_float);
			var_353_bool = 1;
			sync();
			goto Label_1257;
		}
		return 10;
	}
	func_1431(var_364_float);
	var_353_bool = 0;
	return 10;
	
}


func_768(var_200_bool)
{
	var_200_bool = 1;
	return 0;
}


func_770()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_775(var_118_object)
{
	var_125_object = Obj(); var_126_bool = 0; var_127_float = 0;
	var_118_object = var_125_object;
	func_789(var_121_int, var_122_bool, var_123_float, var_124_int, var_118_object, var_125_object, (bool)1, (float)180.0);
	return 0;
}


func_783(var_462_float)
{
	var_462_float = 0.05000000074505806;
	return 0;
}


func_786(var_469_int)
{
	var_469_int = 0;
	return 0;
}


func_1299(var_0_bool, var_368_bool)
{
	var_369_cvector = CVector(0,0,0); var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_float = 0; var_373_float = 0; var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_float = 0; var_378_float = 0;
	var_379_bool = 0; var_380_object = Obj();
	var_380_object = var_0_bool;
	func_1874(var_379_bool, var_380_object);
	var_381_bool = var_379_bool == 0; //@nz
	if(var_381_bool != 0) {
		var_368_bool = 0;
		return 10;
	}
	var_382_bool = 0;
	func_1388(var_378_float, var_382_bool);
	if(var_382_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_374_cvector);
		GetPFPosition(var_375_cvector);
		var_376_cvector = var_374_cvector - var_375_cvector;
		var_377_float = var_376_cvector | var_376_cvector;
		@@@var_0_bool:GetAttackDistance(var_378_float);
		var_378_float = var_378_float + (int)50;
		var_384_float = var_378_float * var_378_float;
		var_368_bool = var_377_float <= var_384_float;
		return 10;
	}
	var_368_bool = 0;
	return 10;
}


func_789(var_0_bool, var_3_object, var_5_bool, var_125_object, var_126_bool, var_127_float, var_202_bool, var_294_bool)
{
	var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_bool = 0; var_132_bool = 0; var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_bool = 0; var_143_bool = 0; var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_bool = 0; var_149_float = 0;
	func_1018(var_147_cvector, var_148_bool, var_149_float);
	var_5_bool = 0;
	var_174_bool = IsFuncExist(var_125_object, "@GetAttackDistance", (int)1);
	if(var_174_bool != 0) {
		@@var_125_object:GetAttackDistance(var_139_float);
		var_139_float = var_139_float + (int)50;
	} else {
							var_127_float = var_139_float;
	}
	var_177_bool = var_139_float >= (int)150;
	if(var_177_bool != 0) {
		var_139_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_125_object;
	IsPlayerActor(var_0_bool, var_142_bool);
	var_178_bool = var_142_bool;
	if(var_178_bool != 0) {
		PlayGlobalMusic("attack");
		var_180_object = Obj();
		func_2092(var_180_object);
		SendPlayerEnemy(var_125_object, var_180_object);
	}
	var_183_bool = var_126_bool;
	if(var_183_bool != 0) {
		var_143_bool = 0;
	} else {
						var_143_bool = 1;

	}
	var_144_float = (float)400.0 + var_139_float;
	
Label_829:
	var_185_bool = 0;
	var_185_bool = 0;
	var_186_bool = 0; var_187_object = Obj();
	var_187_object = var_0_bool;
	func_1874(var_186_bool, var_187_object);
	if(var_186_bool != 0) {
		var_188_bool = var_3_object == 0; //@nz
		if(var_188_bool != 0) {
			var_185_bool = 1;
		}
	}
	if(var_185_bool != 0) {
		func_1431(var_149_float);
		@@@var_0_bool:GetPFPosition(var_140_cvector);
		GetPFPosition(var_141_cvector);
		var_145_cvector = var_140_cvector - var_141_cvector;
		var_146_float = var_145_cvector | var_145_cvector;
		var_194_float = var_144_float * var_144_float;
		var_195_bool = var_146_float >= var_194_float;
		if(var_195_bool != 0) {
			var_196_bool = 0; var_197_object = Obj(); var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_bool = 0;
			var_197_object = var_0_bool;
			var_139_float = var_198_float;
			TaskCall(4);
			func_1458(var_204_bool, var_196_bool, var_197_object, var_198_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_279_bool = var_202_bool == 0; //@nz
			if(var_279_bool != 0) {
			} else {
				var_143_bool = 0;
		} else {
				var_285_float = var_127_float * var_127_float;
				var_286_bool = var_146_float >= var_285_float;
				if(var_286_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_147_cvector);
					CanReachByPF(var_148_bool, var_147_cvector);
					var_287_bool = var_148_bool == 0; //@nz
					if(var_287_bool != 0) {
						var_288_bool = 0; var_289_object = Obj(); var_290_float = 0; var_291_float = 0; var_292_bool = 0; var_293_bool = 0;
						var_289_object = var_0_bool;
						var_139_float = var_290_float;
						TaskCall(4);
						func_1458(var_296_bool, var_288_bool, var_289_object, var_290_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_297_bool = var_294_bool == 0; //@nz
						if(var_297_bool != 0) {
							goto Label_1001;
						}
						var_143_bool = 0;
						goto Label_829;
					}
					var_298_bool = var_143_bool == 0; //@nz
					if(var_298_bool != 0) {
						var_299_object = Obj();
						var_299_object = var_0_bool;
						func_2024(var_299_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1431(var_149_float);
						StopAsync();
						var_143_bool = 1;
						var_310_bool = 0; var_311_object = Obj();
						var_311_object = var_0_bool;
						func_1874(var_310_bool, var_311_object);
						var_312_bool = var_310_bool == 0; //@nz
						if(var_312_bool != 0) {
							goto Label_1001;
						}
					}
					rand(var_149_float);
					var_313_bool = 0;
					var_315_bool = var_149_float < (float)0.25;
					if(var_315_bool != 1) {
						var_316_bool = 0;
						func_1388((bool)1, var_316_bool);
						if(var_316_bool != 1) {
							var_313_bool = 0;
						}
					}
					if(var_313_bool != 0) {
						Face(var_0_bool);
						func_1438();
						PlayAnimation("all", "attack_stay");
						var_353_bool = 0; var_354_float = 0;
						var_127_float = var_354_float;
						func_1256(var_149_float, var_353_bool, var_354_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1431(var_149_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_575_bool = 0;
						func_1388(var_149_float, var_575_bool);
						var_576_bool = var_575_bool == 0; //@nz
						if(var_576_bool == 0) goto Label_991;
						var_577_bool = 0; var_578_object = Obj();
						var_578_object = var_0_bool;
						func_1874(var_577_bool, var_578_object);
						var_579_bool = var_577_bool == 0; //@nz
						if(var_579_bool != 0) {
							goto Label_1001;
						}
						@@@var_0_bool:GetPFPosition(var_140_cvector);
						GetPFPosition(var_141_cvector);
						var_145_cvector = var_140_cvector - var_141_cvector;
						var_146_float = var_145_cvector | var_145_cvector;
						var_580_float = var_127_float * var_127_float;
						var_581_bool = var_146_float < var_580_float;
						if(var_581_bool == 0) goto Label_991;
						var_582_bool = 0; var_583_float = 0;
						var_127_float = var_583_float;
						func_1092(var_148_bool, var_149_float, var_582_bool, var_583_float);
						var_584_bool = var_582_bool == 0; //@nz
						if(var_584_bool == 0) goto Label_991;
						goto Label_1001;
				}
					var_585_bool = 0; var_586_float = 0;
					var_127_float = var_586_float;
					func_1092(var_148_bool, var_149_float, var_585_bool, var_586_float);
					var_587_bool = var_585_bool == 0; //@nz
					if(var_587_bool != 0) {
						goto Label_1001;
					}
					var_143_bool = 1;

				}
			Label_991:
				goto Label_1000;
		}
		Label_1000:
			goto Label_829;

		}
	}
Label_1001:
	WaitForAnimEnd();
	var_280_object = var_3_object;
	if(var_280_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_283_bool = var_142_bool;
	if(var_283_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1833(var_40_bool, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	@@var_41_object:IsDead(var_43_bool);
	var_43_bool = var_40_bool;
	return 2;
}


func_1838(var_29_bool, var_30_object)
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
		func_1833(var_40_bool, var_41_object);
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


func_1327(var_366_bool)
{
	var_367_bool = 0;
	var_367_bool = 0;
	var_368_bool = 0;
	func_1299(var_367_bool, var_368_bool);
	if(var_368_bool != 0) {
		var_385_bool = 0;
		func_1343(var_366_bool, var_367_bool, var_385_bool);
		if(var_385_bool != 0) {
			var_367_bool = 1;
		}
	}
	if(var_367_bool != 0) {
		var_366_bool = 1;
		return 0;
	}
	var_366_bool = 0;
	return 0;
}


func_1343(var_0_bool, var_4_object, var_385_bool)
{
	var_386_object = Obj(); var_387_bool = 0; var_388_float = 0; var_389_cvector = CVector(0,0,0); var_390_cvector = CVector(0,0,0); var_391_object = Obj(); var_392_bool = 0; var_393_float = 0; var_394_cvector = CVector(0,0,0); var_395_cvector = CVector(0,0,0);
	GetScene(var_391_object);
	var_392_bool = 0;
	
Label_1347:
	var_396_cvector = CVector(0,0,0); var_397_object = Obj();
	var_397_object = var_0_bool;
	func_1728(var_396_cvector, var_397_object);
	var_402_int = -var_396_cvector;
	FindDirLength(var_393_float, var_402_int, var_4_object);
	var_403_bool = var_393_float < var_4_object;
	if(var_403_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_394_cvector);
		GetPFPosition(var_395_cvector);
		WaitForAnimEnd();
		func_1431(var_395_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_392_bool = 1;
		var_407_bool = 0;
		func_1299(var_395_cvector, var_407_bool);
		var_408_bool = var_407_bool == 0; //@nz
		if(var_408_bool != 0) {
			goto Label_1385;
		}
		goto Label_1347;
	}
Label_1385:
	var_392_bool = var_385_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2378(var_41_int, var_42_string)
{
	var_43_int = 0; var_44_int = 0;
	GetInvItemByName(var_44_int, var_42_string);
	var_44_int = var_41_int;
	return 2;
}


func_2383(var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	TaskCall(0);
	func_0(var_14_object);
	TaskReturn();
	return 0;
}


func_1874(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_1838(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_1748(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_1898(var_29_object)
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


func_1388(var_0_bool, var_316_bool)
{
	var_317_bool = 0; var_318_bool = 0;
	var_321_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_321_bool != 0) {
		@@@var_0_bool:IsAttacking(var_318_bool);
		var_318_bool = var_316_bool;
		return 2;
	}
	var_316_bool = 0;
	return 2;
}


func_367(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_503(var_11_object, var_12_bool);
	return 0;
}


func_375(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_510(var_16_bool, var_17_int);
	return 0;
}


func_1399(var_2_bool, var_5_bool)
{
	var_433_float = 0; var_434_int = 0; var_435_float = 0; var_436_int = 0;
	var_437_bool = var_2_bool == 0; //@nz
	if(var_437_bool != 0) {
		return 4;
	}
	var_438_bool = var_5_bool;
	if(var_438_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_441_bool = var_5_bool > (int)0;
		if(var_441_bool != 0) {
			return 4;
		}
	}
	rand(var_435_float);
	var_442_float = 0;
	func_1449(var_442_float);
	var_443_bool = var_435_float < var_442_float;
	if(var_443_bool != 0) {
		irand(var_436_int, var_2_bool);
		var_436_int = var_436_int + (int)1;
		var_446_int = "attack" + var_436_int;
		Speak(var_446_int);
		var_447_int = 0;
		func_1447(var_447_int);
		var_5_bool = var_447_int;
	}
	return 4;
}


func_2428(var_16_bool, var_17_object, var_18_string)
{
	var_20_bool = var_18_string == "unholster";
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_17_object = var_22_object;
		func_2747(var_22_object);
		var_21_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x99a";
	}
	var_24_bool = var_18_string == "player_shot";
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_17_object = var_26_object;
		func_2752(var_26_object);
		var_25_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x99a";
	}
	var_28_bool = var_18_string == "battle";
	if(var_28_bool != 0) {
		var_29_bool = 0; var_30_object = Obj();
		var_17_object = var_30_object;
		func_2757(var_30_object);
		var_29_bool = var_16_bool;
		return 0;
	}
	var_16_bool = 0;
	return 0;
}


func_392(var_2_bool, var_13_object)
{
	var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj();
	var_13_object = var_19_object;
	func_1874(var_18_bool, var_19_object);
	var_52_bool = var_18_bool == 0; //@nz
	if(var_52_bool != 0) {
		return 4;
	}
	var_53_bool = var_2_bool;
	if(var_53_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_13_object, var_16_bool);
	var_54_bool = var_16_bool == 0; //@nz
	if(var_54_bool != 0) {
		return 4;
	}
	var_55_int = 0; var_56_object = Obj();
	var_13_object = var_56_object;
	func_2580(var_55_int, var_56_object);
	var_55_int = var_17_int;
	var_62_bool = var_17_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_17_int > (int)1;
		if(var_64_bool != 0) {
			func_375(var_17_int);
		}
		var_66_object = Obj();
		var_13_object = var_66_object;
		func_2590(var_66_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1942(var_16_object, var_17_int, var_18_float)
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
		func_1728(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_2098(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		CreateVectorVector(var_29_object);
		var_30_int = 1;

	Label_1971:
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
			goto Label_1971;
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
			func_2010(var_63_float, var_64_cvector, var_65_cvector);
			return 18;
		}
		var_29_object = 0;
	}
	var_106_object = Obj();
	var_16_object = var_106_object;
	func_1898(var_106_object);
	return 18;
	
}


func_1431(var_0_bool)
{
	var_189_object = Obj();
	var_189_object = var_0_bool;
	func_2152(var_189_object);
	return 0;
}


func_2460(var_31_object, var_32_string)
{
	var_34_bool = var_32_string == "unholster";
	if(var_34_bool != 0) {
		var_31_object = Obj();
		func_2750();
	} else {
		var_37_bool = var_32_string == "player_shot";
		if(var_37_bool != 0) {
			var_31_object = Obj();
			func_2755();
			goto Label_2484;
		}
		var_40_bool = var_32_string == "battle";
		if(var_40_bool == 0) goto Label_2484;
		var_31_object = Obj();
		func_2760();
	}
Label_2484:
	return 0;
	
}


func_1436(var_530_int)
{
	var_530_int = 0;
	return 0;
}


func_1438()
{
	var_322_string = "";
	func_2051("attack_stay");
	return 0;
}


func_1443()
{
	return 0;
}


func_1445(var_555_bool)
{
	var_555_bool = 1;
	return 0;
}


func_1447(var_447_int)
{
	var_447_int = 1;
	return 0;
}


func_1449(var_442_float)
{
	var_442_float = 0.5;
	return 0;
}


func_432(var_0_bool, var_1_bool)
{
	var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_bool = 0; var_136_object = Obj(); var_137_bool = 0; var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_bool = 0; var_142_object = Obj(); var_143_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_138_float, (float)0.5);
	Sleep(var_138_float);
	
Label_440:
	var_145_bool = var_0_bool == 0; //@nz
	if(var_145_bool != 0) {
		var_146_bool = var_1_bool == 0; //@nz
		if(var_146_bool != 0) {

		Label_444:
			GetPosition(var_140_cvector);
			var_147_float = 0;
			func_491(var_147_float);
			GetRandomPFPointInCircle(var_139_cvector, var_140_cvector, var_147_float, var_141_bool);
			var_150_bool = var_141_bool;
			if(var_150_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_444;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_460;
	
Label_460:
	var_151_object = Obj(); var_152_cvector = CVector(0,0,0);
	var_139_cvector = var_152_cvector;
	func_519(var_151_object, var_152_cvector);
	var_151_object = var_142_object;
	var_155_bool = var_142_object != 0; //@nn
	if(var_155_bool != 0) {
		RotatePath(var_142_object, var_143_bool);
		var_156_bool = var_143_bool;
		if(var_156_bool != 0) {
			var_157_bool = 0;
			func_517(var_157_bool);
			FollowPath(var_142_object, var_157_bool, var_143_bool);
			var_142_object = 0;
			var_158_bool = var_143_bool;
			if(var_158_bool != 0) {
				TaskCall(2);
				func_689();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_142_object = 0;
	goto Label_440;
	
}


func_1458(var_2_bool, var_196_bool, var_197_object, var_198_float, var_199_float, var_200_bool, var_201_bool)
{
	var_205_bool = 0; var_206_bool = 0; var_207_bool = 0; var_208_bool = 0;
	var_209_object = Obj();
	var_197_object = var_209_object;
	func_2152(var_209_object);
	SetTimer((int)1, (int)5);
	CanSee(var_207_bool, var_197_object);
	var_212_bool = var_207_bool;
	if(var_212_bool != 0) {
		var_2_bool = true;
		var_213_object = Obj();
		var_197_object = var_213_object;
		func_2040(var_213_object);
	} else {
		var_2_bool = false;
	}
	var_220_bool = 0; var_221_object = Obj();
	var_197_object = var_221_object;
	func_1743(var_220_bool, var_221_object);
	if(var_220_bool != 0) {
		var_224_object = Obj();
		func_2092(var_224_object);
		SendPlayerEnemy(var_197_object, var_224_object);
	}
	var_225_bool = 0; var_226_object = Obj(); var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_bool = 0;
	var_197_object = var_226_object;
	var_198_float = var_227_float;
	var_199_float = var_228_float;
	var_200_bool = var_229_bool;
	var_201_bool = var_230_bool;
	func_1563(var_207_bool, var_208_bool, var_225_bool, var_226_object, var_227_float, var_228_float, var_229_bool, var_230_bool);
	var_225_bool = var_208_bool;
	var_276_bool = var_2_bool;
	if(var_276_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_208_bool = var_196_bool;
	return 4;
	
}


func_2485(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = 0; var_19_object = Obj();
	var_14_object = var_19_object;
	func_2747(var_19_object);
	if(var_18_bool != 0) {
		var_20_bool = 0; var_21_object = Obj();
		var_14_object = var_21_object;
		func_1743(var_20_bool, var_21_object);
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


func_2508(var_25_object)
{
	var_25_object = Obj();
	func_2750();
	return 0;
}


func_2514(var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1743(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		var_20_object = Obj();
		func_2092(var_20_object);
		ReportReputationChange(var_15_object, var_20_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_2010(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	GetScene(var_25_object);
	AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	var_29_object = Obj();
	var_18_object = var_29_object;
	func_1898(var_29_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2527(var_13_bool, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj();
	var_18_bool = var_14_string == "heal";
	if(var_18_bool != 0) {
		FindActor(var_16_object, "player");
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_2762(var_21_object);
		var_20_bool = var_13_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_13_bool = 0;
	return 2;
}


func_2024(var_299_object)
{
	var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0);
	@@var_299_object:GetPosition(var_303_cvector);
	GetPosition(var_304_cvector);
	var_305_cvector = var_303_cvector - var_304_cvector;
	var_306_float = GetByIndex(var_305_cvector, 0);
	var_307_float = GetByIndex(var_305_cvector, 2);
	RotateAsync(var_306_float, var_307_float);
	return 6;
}


func_491(var_147_float)
{
	var_148_float = 0; var_149_float = 0;
	GetCameraFarDistance(var_149_float);
	var_149_float = var_147_float;
	return 2;
}


func_2543(var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj();
	var_26_bool = var_22_string == "heal";
	if(var_26_bool != 0) {
		FindActor(var_24_object, "player");
		var_24_object = Obj();
		func_2765();
		var_24_object = 0;
	}
	return 2;
}


func_1521(var_2_bool)
{
	KillTimer((int)1);
	var_14_bool = var_2_bool;
	if(var_14_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_1687(var_12_object);
	return 0;
}


func_2035(var_128_bool)
{
	var_129_bool = 0; var_130_bool = 0;
	IsLoaded(var_130_bool);
	var_130_bool = var_128_bool;
	return 2;
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_2040(var_16_object)
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


func_1018(var_1_bool, var_2_bool, var_4_object)
{
	var_150_bool = 0; var_151_bool = 0; var_152_cvector = CVector(0,0,0); var_153_bool = 0; var_154_bool = 0; var_155_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_1020:
	var_159_int = var_1_bool + (int)1;
	var_160_int = "attack_begin" + var_159_int;
	HasAnimation(var_153_bool, "all", var_160_int);
	var_161_bool = var_153_bool == 0; //@nz
	if(var_161_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_1020;
	}
	var_2_bool = 0;
	
Label_1034:
	var_164_int = var_2_bool + (int)1;
	var_165_int = "attack" + var_164_int;
	IsExisting3DSound(var_154_bool, var_165_int);
	var_166_bool = var_154_bool == 0; //@nz
	if(var_166_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_1034;

	}
	GetAnimationOffset(var_155_cvector, "all", "bjump");
	var_169_float = GetByIndex(var_155_cvector, 2);
	var_4_object = -var_169_float;
	return 6;
	
}


func_2556(var_181_string, var_182_int)
{
	var_183_string = ""; var_184_string = "";
	var_185_int = var_182_int;
	if(var_185_int != 0) {
		"idle" = "idle" + var_182_int;
	}
	var_184_string = var_181_string;
	return 2;
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


