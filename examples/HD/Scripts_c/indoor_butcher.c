// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,FindPathTo/4,SensePlayerOnly/1,GetRandomPFPointInCircle/4,FollowPath/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,AddItem/3,AddItem/4,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,IsOverrideActive/1,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rusk|W:peanut|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:idle
// @GLOBALS: 0:bool:
// @RUN_OP: 0x54b
// @RUN_TASK: 4
// @TASK_0: vars= params=1
// @EVENT_0: op=0xf vars=object
// @EVENT_6: op=0x1d vars=
// @EVENT_22: op=0x96 vars=object,int,float,float
// @EVENT_16: op=0x98 vars=object,string
// @EVENT_41: op=0x9a vars=object
// @TASK_1: vars= params=0
// @EVENT_0: op=0x9c vars=object
// @EVENT_17: op=0xb0 vars=object
// @EVENT_30: op=0xc8 vars=object,object,bool
// @EVENT_40: op=0xe4 vars=object
// @EVENT_42: op=0xf8 vars=object,string
// @EVENT_26: op=0x11d vars=string
// @EVENT_6: op=0x12b vars=
// @EVENT_1: op=0x132 vars=object
// @TASK_2: vars=object,int,int,bool,float,int params=1
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_6: op=0x43a vars=
// @EVENT_7: op=0x472 vars=int
// @EVENT_1: op=0x48d vars=object
// @EVENT_2: op=0x49c vars=object
// @EVENT_10: op=0x522 vars=object
// @EVENT_41: op=0x52d vars=object
// @TASK_4: vars=bool,bool params=0
// @EVENT_0: op=0x562 vars=object
// @EVENT_17: op=0x576 vars=object
// @EVENT_30: op=0x58e vars=object,object,bool
// @EVENT_40: op=0x5aa vars=object
// @EVENT_42: op=0x5be vars=object,string
// @EVENT_26: op=0x5e3 vars=string
// @EVENT_1: op=0x5f1 vars=object
// @EVENT_6: op=0x5ff vars=
// @EVENT_10: op=0x641 vars=object
// @EVENT_28: op=0x645 vars=
// @EVENT_41: op=0x64f vars=object
// @STANDALONE_EVENT_16: op=0x887 vars=object,string
// @STANDALONE_EVENT_41: op=0x894 vars=object
// @STANDALONE_EVENT_22: op=0x89a vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x8a2 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x11d,0x12b,0x132,0x196,0x19e,0x1a1,0x432,0x43a,0x472,0x48d,0x49c,0x510,0x522,0x52d,0x536,0x5e3,0x5f1,0x5ff,0x641,0x64f,0x65a,0x7f6,0x7fd,0x838,0x87f,0x894,0x89a,0x8a2,0x8ac,0x8cc,0x8fc,0x902,0x944,0x94e,0x956,0x959,0x95b,0x95e,0x960,0x963,0x965,0x968,0x96f,0x972,0x974,0x977,0x979,0x97c,0x97e,0x981,0x994,0x997

task_0_event_0(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_2405(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_11_bool = var_18_object;
		func_2408(var_18_object);
	}
	return 2;
}


task_0_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_2414();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_2405(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_401();
		}
		var_20_object = Obj();
		var_11_bool = var_20_object;
		func_2408(var_20_object);
	}
	return 2;
}


task_1_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_object = Obj();
	var_11_bool = var_14_object;
	func_2306(var_14_object);
	var_23_int = 0; var_24_object = Obj();
	var_11_bool = var_24_object;
	func_2372(var_23_int, var_24_object);
	var_23_int = var_13_int;
	var_60_bool = var_13_int > (int)0;
	if(var_60_bool != 0) {
		var_62_bool = var_13_int > (int)1;
		if(var_62_bool != 0) {
			func_401();
		}
		var_63_object = Obj();
		var_11_bool = var_63_object;
		func_2382(var_63_object);
	}
	return 2;
}


task_1_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_bool = 0;
	var_11_bool = var_17_object;
	var_12_bool = var_18_object;
	var_13_bool = var_19_bool;
	func_2452(var_19_bool);
	if(var_16_bool != 0) {
		var_20_int = 0; var_21_object = Obj(); var_22_bool = 0;
		var_11_bool = var_21_object;
		var_13_bool = var_22_bool;
		func_2390(var_22_bool);
		var_20_int = var_15_int;
		var_24_bool = var_15_int > (int)0;
		if(var_24_bool != 0) {
			var_26_bool = var_15_int > (int)1;
			if(var_26_bool != 0) {
				func_401();
			}
			var_11_bool = Obj();
			func_2393();
		}
	}
	return 2;
}


task_1_event_40(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_2395(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_401();
		}
		var_11_bool = Obj();
		func_2398();
	}
	return 2;
}


task_1_event_42(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_string = "";
	var_11_bool = var_16_object;
	var_12_bool = var_17_string;
	func_2220(var_15_bool, var_16_object, var_17_string);
	if(var_15_bool != 0) {
		func_401();
		var_30_object = Obj(); var_31_string = "";
		var_11_bool = var_30_object;
		var_12_bool = var_31_string;
		func_2252(var_30_object, var_31_string);
	} else {
		var_41_int = 0; var_42_string = ""; var_43_object = Obj();
		var_12_bool = var_42_string;
		var_11_bool = var_43_object;
		func_2400(var_43_object);
		var_41_int = var_14_int;
		var_45_bool = var_14_int > (int)0;
		if(var_45_bool == 0) goto Label_284;
		var_47_bool = var_14_int > (int)1;
		if(var_47_bool != 0) {
			func_401();
		}
		var_48_string = ""; var_49_object = Obj();
		var_12_bool = var_48_string;
		var_11_bool = var_49_object;
		func_2403();
	}
Label_284:
	return 2;
	
}


task_1_event_26(var_0_string, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_string = "";
	var_11_bool = var_13_string;
	func_2319(var_12_bool, var_13_string);
	if(var_12_bool != 0) {
		func_401();
		var_21_string = "";
		var_11_bool = var_21_string;
		func_2335(var_21_string);
	}
	return 0;
}


task_1_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_401();
	func_2414();
	return 0;
}


task_1_event_1(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_bool = var_13_object;
	func_2277(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_401();
		var_24_object = Obj();
		var_11_bool = var_24_object;
		func_2300(var_24_object);
	}
	return 0;
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_1152(var_10_bool);
	func_2414();
	return 0;
}


task_3_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int, var_10_bool, var_11_bool)
{
	var_13_bool = var_11_bool == (int)1;
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_14_object = var_1_int;
		func_2078(var_14_object);
	} else {
		var_19_int = 0;
		var_11_bool = var_19_int;
		func_1296(var_10_bool, var_11_bool, var_19_int);
	}
	return 0;
	
}


task_3_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_int == var_11_bool;
	if(var_13_bool != 0) {
		var_14_bool = var_2_int == 0; //@nz
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_int = true;
		var_15_object = Obj();
		var_11_bool = var_15_object;
		func_1944(var_15_object);
	}
	return 0;
}


task_3_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_int == var_11_bool;
	if(var_13_bool != 0) {
		var_14_int = var_2_int;
		if(var_14_int != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_3_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	RequestClearPath(var_11_bool);
	return 0;
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	func_1152(var_11_bool);
	var_11_bool = Obj();
	func_2196();
	return 0;
}


task_4_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_2405(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_1608(var_12_int, var_13_int);
		}
		var_20_object = Obj();
		var_11_object = var_20_object;
		func_2408(var_20_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_object = Obj();
	var_11_object = var_14_object;
	func_2306(var_14_object);
	var_23_int = 0; var_24_object = Obj();
	var_11_object = var_24_object;
	func_2372(var_23_int, var_24_object);
	var_23_int = var_13_int;
	var_60_bool = var_13_int > (int)0;
	if(var_60_bool != 0) {
		var_62_bool = var_13_int > (int)1;
		if(var_62_bool != 0) {
			func_1608(var_12_int, var_13_int);
		}
		var_63_object = Obj();
		var_11_object = var_63_object;
		func_2382(var_63_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_bool = 0;
	var_11_object = var_17_object;
	var_12_object = var_18_object;
	var_13_bool = var_19_bool;
	func_2452(var_19_bool);
	if(var_16_bool != 0) {
		var_20_int = 0; var_21_object = Obj(); var_22_bool = 0;
		var_11_object = var_21_object;
		var_13_bool = var_22_bool;
		func_2390(var_22_bool);
		var_20_int = var_15_int;
		var_24_bool = var_15_int > (int)0;
		if(var_24_bool != 0) {
			var_26_bool = var_15_int > (int)1;
			if(var_26_bool != 0) {
				func_1608(var_14_int, var_15_int);
			}
			var_11_object = Obj();
			func_2393();
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_2395(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_1608(var_12_int, var_13_int);
		}
		var_11_object = Obj();
		func_2398();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_string)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_string = "";
	var_11_object = var_16_object;
	var_12_string = var_17_string;
	func_2220(var_15_bool, var_16_object, var_17_string);
	if(var_15_bool != 0) {
		func_1608(var_13_int, var_14_int);
		var_30_object = Obj(); var_31_string = "";
		var_11_object = var_30_object;
		var_12_string = var_31_string;
		func_2252(var_30_object, var_31_string);
	} else {
		var_41_int = 0; var_42_string = ""; var_43_object = Obj();
		var_12_string = var_42_string;
		var_11_object = var_43_object;
		func_2400(var_43_object);
		var_41_int = var_14_int;
		var_45_bool = var_14_int > (int)0;
		if(var_45_bool == 0) goto Label_1506;
		var_47_bool = var_14_int > (int)1;
		if(var_47_bool != 0) {
			func_1608(var_13_int, var_14_int);
		}
		var_48_string = ""; var_49_object = Obj();
		var_12_string = var_48_string;
		var_11_object = var_49_object;
		func_2403();
	}
Label_1506:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_string)
{
	var_12_bool = 0; var_13_string = "";
	var_11_string = var_13_string;
	func_2319(var_12_bool, var_13_string);
	if(var_12_bool != 0) {
		func_1608(var_10_bool, var_11_string);
		var_21_string = "";
		var_11_string = var_21_string;
		func_2335(var_21_string);
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2277(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1608(var_10_bool, var_11_object);
		var_24_object = Obj();
		var_11_object = var_24_object;
		func_2300(var_24_object);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_1608(var_9_bool, var_10_bool);
	func_2414();
	return 0;
}


task_4_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_4_event_28(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	Stop();
	return 0;
}


task_4_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	func_1608(var_10_bool, var_11_object);
	var_11_object = Obj();
	func_2196();
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0;
	var_16_bool = var_12_string == "health";
	if(var_16_bool != 0) {
		GetProperty("health", var_14_float);
		var_19_bool = var_14_float <= (int)0;
		if(var_19_bool != 0) {
			SignalDeath(var_11_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_2175(var_12_object);
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1846(var_15_object, var_16_int, var_17_float);
	return 0;
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_11_object = var_17_object;
	var_12_int = var_18_int;
	var_13_float = var_19_float;
	var_15_cvector = var_20_cvector;
	var_16_cvector = var_21_cvector;
	func_1914(var_19_float, var_20_cvector, var_21_cvector);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	SensePlayerOnly((bool)1);
	func_2448();
	func_1369();
	
Label_1364:
	func_1542(var_9_bool, var_10_bool);
	goto Label_1364;
}
EMIT "Return(); Pop(0)";


func_0(var_13_object)
{
	EventDisable(0);
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_33(var_14_object);
	var_94_object = Obj();
	var_13_object = var_94_object;
	func_2455(var_94_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1030(var_2_int, var_5_int)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0;
	var_379_bool = var_2_int == 0; //@nz
	if(var_379_bool != 0) {
		return 4;
	}
	var_380_int = var_5_int;
	if(var_380_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_383_bool = var_5_int > (int)0;
		if(var_383_bool != 0) {
			return 4;
		}
	}
	rand(var_377_float);
	var_384_float = 0;
	func_1080(var_384_float);
	var_385_bool = var_377_float < var_384_float;
	if(var_385_bool != 0) {
		irand(var_378_int, var_2_int);
		var_378_int = var_378_int + (int)1;
		var_388_int = "attack" + var_378_int;
		Speak(var_388_int);
		var_389_int = 0;
		func_1078(var_389_int);
		var_5_int = var_389_int;
	}
	return 4;
}


func_1542(var_0_object, var_1_int)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	var_0_object = false;
	var_1_int = false;
	rand(var_23_float, (float)0.5);
	Sleep(var_23_float);
	
Label_1550:
	var_30_bool = var_0_object == 0; //@nz
	if(var_30_bool != 0) {
		var_31_bool = var_1_int == 0; //@nz
		if(var_31_bool != 0) {

		Label_1554:
			GetPosition(var_25_cvector);
			var_32_float = 0;
			func_1345(var_32_float);
			GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool);
			var_33_bool = var_26_bool;
			if(var_33_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_1554;
		}
				var_1_int = false;
	}
			return 12;
	}
	goto Label_1570;
	
Label_1570:
	var_34_object = Obj(); var_35_cvector = CVector(0,0,0);
	var_24_cvector = var_35_cvector;
	func_1347(var_34_object, var_35_cvector);
	var_34_object = var_27_object;
	var_40_bool = var_27_object != 0; //@nn
	if(var_40_bool != 0) {
		RotatePath(var_27_object, var_28_bool);
		var_41_bool = var_28_bool;
		if(var_41_bool != 0) {
			var_42_bool = 0;
			func_1624(var_42_bool);
			FollowPath(var_27_object, var_42_bool, var_28_bool);
			var_27_object = 0;
			var_43_bool = var_28_bool;
			if(var_43_bool != 0) {
				TaskCall(1);
				func_320();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_27_object = 0;
	goto Label_1550;
	
}


func_2056(var_113_bool, var_114_int, var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	irand(var_117_int, var_115_int);
	var_113_bool = var_117_int < var_114_int;
	return 2;
}


func_2061(var_463_float)
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


func_2078(var_133_object)
{
	var_134_bool = 0; var_135_bool = 0;
	IsPlayerActor(var_133_object, var_135_bool);
	var_136_bool = var_135_bool;
	if(var_136_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_33(var_14_object)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_string = ""; var_20_object = Obj(); var_21_bool = 0; var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = var_14_object == 0; //@ne
	if(var_35_bool != 0) {
		var_36_string = "";
		func_124("fdie");
	} else {
		@@var_14_object:GetPosition(var_25_cvector);
		GetPosition(var_26_cvector);
		GetDirection(var_27_cvector);
		var_28_cvector = var_26_cvector - var_25_cvector;
		var_68_float = GetByIndex(var_28_cvector, 0);
		var_69_float = GetByIndex(var_27_cvector, 0);
		var_70_float = var_68_float * var_69_float;
		var_71_float = GetByIndex(var_28_cvector, 2);
		var_72_float = GetByIndex(var_27_cvector, 2);
		var_73_float = var_71_float * var_72_float;
		var_74_int = var_70_float + var_73_float;
		var_76_bool = var_74_int >= (int)0;
		if(var_76_bool != 0) {
			var_29_string = "fdie";
		} else {
				var_29_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_14_object = var_30_object;
		var_79_bool = IsFuncExist(var_14_object, "GetScriptProperty", (int)2);
		if(var_79_bool != 0) {
			@@var_14_object:HasScriptProperty(var_31_bool, "Owner");
			var_81_bool = var_31_bool;
			if(var_81_bool != 0) {
				@@var_14_object:GetScriptProperty(var_30_object, "Owner");
				var_83_bool = var_30_object == 0; //@ne
				if(var_83_bool != 0) {
					var_14_object = var_30_object;
				}
			}
		}
		var_86_bool = IsFuncExist(var_30_object, "@GetEyesHeight", (int)1);
		if(var_86_bool != 0) {
			@@var_30_object:GetEyesHeight(var_33_float);
			var_34_cvector = CVector(0.0, 0.0, 0.0);
			var_87_float = GetByIndex(var_34_cvector, 1);
			var_33_float = var_87_float;
			SetByIndex(var_34_cvector, 1) = var_87_float;
			LookAsync(var_14_object, "head", var_34_cvector);
			var_32_bool = 1;
		} else {
			var_32_bool = 0;

		}
		var_89_string = "";
		var_29_string = var_89_string;
		func_1981(var_89_string);
		PlayAnimation("all", var_29_string);
		WaitForAnimEnd();
		var_91_bool = var_32_bool;
		if(var_91_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_29_string);
		RemoveEnvelope();
		var_30_object = 0;
	}
	return 20;
	
}


func_1062(var_0_object)
{
	var_133_object = Obj();
	var_133_object = var_0_object;
	func_2078(var_133_object);
	return 0;
}


func_2087()
{
	var_368_object = Obj(); var_369_object = Obj();
	GetScene(var_369_object);
	var_371_object = Obj();
	func_2022(var_371_object);
	BroadcastMessage("battle", var_371_object, var_369_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1067(var_472_int)
{
	var_472_int = 0;
	return 0;
}


func_1069()
{
	var_264_string = "";
	func_1981("attack_stay");
	return 0;
}


func_1074()
{
	return 0;
}


func_2098(var_130_int)
{
	var_131_int = 0; var_132_int = 0;
	GetVariable("branch", var_132_int);
	var_132_int = var_130_int;
	return 2;
}


func_1076(var_497_bool)
{
	var_497_bool = 1;
	return 0;
}


func_1078(var_389_int)
{
	var_389_int = 1;
	return 0;
}


func_1080(var_384_float)
{
	var_384_float = 0.5;
	return 0;
}


func_2104(var_26_object)
{
	var_27_int = 0;
	func_2098(var_27_int);
	var_32_bool = var_27_int == (int)1;
	if(var_32_bool != 0) {
		WorkWithCorpse(var_26_object);
	} else {
		Barter(var_26_object);
	}
	return 0;
	
}


func_1089(var_2_int, var_140_bool, var_141_object, var_142_float, var_143_float, var_144_bool, var_145_bool)
{
	var_149_bool = 0; var_150_bool = 0; var_151_bool = 0; var_152_bool = 0;
	var_153_object = Obj();
	var_141_object = var_153_object;
	func_2078(var_153_object);
	SetTimer((int)1, (int)5);
	CanSee(var_151_bool, var_141_object);
	var_156_bool = var_151_bool;
	if(var_156_bool != 0) {
		var_2_int = true;
		var_157_object = Obj();
		var_141_object = var_157_object;
		func_1944(var_157_object);
	} else {
		var_2_int = false;
	}
	var_164_bool = 0; var_165_object = Obj();
	var_141_object = var_165_object;
	func_1647(var_164_bool, var_165_object);
	if(var_164_bool != 0) {
		var_166_object = Obj();
		func_2022(var_166_object);
		SendPlayerEnemy(var_141_object, var_166_object);
	}
	var_167_bool = 0; var_168_object = Obj(); var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_bool = 0;
	var_141_object = var_168_object;
	var_142_float = var_169_float;
	var_143_float = var_170_float;
	var_144_bool = var_171_bool;
	var_145_bool = var_172_bool;
	func_1194(var_151_bool, var_152_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_152_bool;
	var_218_int = var_2_int;
	if(var_218_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_152_bool = var_140_bool;
	return 4;
	
}


func_2117(var_136_string)
{
	var_137_object = Obj(); var_138_int = 0; var_139_bool = 0; var_140_object = Obj(); var_141_int = 0; var_142_bool = 0;
	CreateInvItem(var_140_object);
	@@var_140_object:SetItemName(var_136_string);
	@@var_140_object:SetProperty("Organ", (int)1);
	@@var_140_object:GetItemID(var_141_int);
	AddItem(var_142_bool, var_140_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1608(var_0_object, var_1_int)
{
	var_0_object = true;
	var_1_int = false;
	Stop();
	StopGroup0();
	return 0;
}


func_2134()
{
	var_130_int = 0;
	func_2098(var_130_int);
	var_135_bool = var_130_int != (int)1;
	if(var_135_bool != 0) {
		return 0;
	}
	var_136_string = "";
	func_2117("liver");
	var_147_string = "";
	func_2117("kidney");
	var_148_string = "";
	func_2117("heart");
	var_149_string = "";
	func_2117("blood");
	return 0;
}


func_1624(var_42_bool)
{
	var_42_bool = 0;
	return 0;
}


func_1626(var_435_string, var_436_int)
{
	var_438_bool = var_436_int == (int)2;
	if(var_438_bool != 0) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x666";
	}
	var_440_bool = var_436_int == (int)1;
	if(var_440_bool != 0) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
	return 0;
}


func_1640(var_45_cvector, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	GetPosition(var_49_cvector);
	@@var_46_object:GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
	return 4;
}


func_2158()
{
	ClearSubContainer((int)0);
	var_105_string = ""; var_106_int = 0; var_107_int = 0; var_108_int = 0;
	func_1966("rusk", (int)1, (int)1, (int)3);
	var_121_string = ""; var_122_int = 0; var_123_int = 0;
	func_1955("peanut", (int)1, (int)5);
	return 0;
}


func_1647(var_95_bool, var_96_object)
{
	var_97_bool = 0; var_98_bool = 0;
	IsPlayerActor(var_96_object, var_98_bool);
	var_98_bool = var_95_bool;
	return 2;
}


func_1652(var_47_bool, var_48_object, var_49_string)
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


func_124(var_36_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_37_string = "";
	var_36_string = var_37_string;
	func_1981(var_37_string);
	PlayAnimation("all", var_36_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_36_string);
	RemoveEnvelope();
	return 0;
}


func_2175(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
	return 0;
}


func_1664(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0;
	var_426_bool = 0; var_427_object = Obj(); var_428_string = "";
	var_408_object = var_427_object;
	func_1652(var_426_bool, var_427_object, "health");
	var_429_bool = var_426_bool == 0; //@nz
	if(var_429_bool != 0) {
		var_407_float = 0.0;
		return 12;
	}
	var_430_bool = 0; var_431_object = Obj(); var_432_string = "";
	var_408_object = var_431_object;
	func_1652(var_430_bool, var_431_object, "armor");
	var_433_bool = var_430_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_420_int = 0;
	} else {
			@@var_408_object:GetProperty("armor", var_420_int);
	}
	var_435_string = ""; var_436_int = 0;
	var_410_int = var_436_int;
	func_1626(var_435_string, var_436_int);
	var_421_string = "armor_" + var_435_string;
	var_441_bool = 0; var_442_object = Obj(); var_443_string = "";
	var_408_object = var_442_object;
	var_421_string = var_443_string;
	func_1652(var_441_bool, var_442_object, var_443_string);
	var_444_bool = var_441_bool == 0; //@nz
	if(var_444_bool != 0) {
		var_422_int = 0;
	} else {
		@@var_408_object:GetProperty(var_421_string, var_422_int);

	}
	var_445_float = 0; var_446_float = 0; var_447_float = 0;
	var_448_int = var_420_int + var_422_int;
	var_446_float = var_448_int / (float)100.0;
	func_2038(var_445_float, var_446_float, (float)1);
	var_445_float = var_423_float;
	@@var_408_object:GetProperty("health", var_424_float);
	var_453_int = (int)1 - var_423_float;
	var_425_float = var_409_float * var_453_int;
	var_455_float = 0; var_456_float = 0; var_457_float = 0; var_458_float = 0;
	var_456_float = var_424_float - var_425_float;
	func_2045(var_455_float, var_456_float, (float)0, (float)1);
	@@var_408_object:SetProperty("health", var_455_float);
	var_461_bool = 0; var_462_object = Obj();
	var_408_object = var_462_object;
	func_1647(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		var_463_float = 0;
		var_463_float = -var_425_float;
		func_2061(var_463_float);
	}
	var_425_float = var_407_float;
	return 12;
	
}


func_1152(var_2_int)
{
	KillTimer((int)1);
	var_13_int = var_2_int;
	if(var_13_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1318(var_11_bool);
	return 0;
}


func_649(var_1_int, var_2_int, var_4_float)
{
	var_96_bool = 0; var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_bool = 0; var_101_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_651:
	var_105_int = var_1_int + (int)1;
	var_106_int = "attack_begin" + var_105_int;
	HasAnimation(var_99_bool, "all", var_106_int);
	var_107_bool = var_99_bool == 0; //@nz
	if(var_107_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_651;
	}
	var_2_int = 0;
	
Label_665:
	var_110_int = var_2_int + (int)1;
	var_111_int = "attack" + var_110_int;
	IsExisting3DSound(var_100_bool, var_111_int);
	var_112_bool = var_100_bool == 0; //@nz
	if(var_112_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_665;

	}
	GetAnimationOffset(var_101_cvector, "all", "bjump");
	var_115_float = GetByIndex(var_101_cvector, 2);
	var_4_float = -var_115_float;
	return 6;
	
}


func_1194(var_0_object, var_1_int, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool)
{
	var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_object = Obj(); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_float = 0; var_188_object = Obj();
	var_0_object = false;
	var_1_int = var_168_object;
	var_172_bool = var_182_bool;
	
Label_1198:
	var_189_bool = 0; var_190_object = Obj();
	var_168_object = var_190_object;
	func_1334(var_189_bool, var_190_object);
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
			if(var_203_bool == 0) goto Label_1247;
			var_182_bool = 0;
			RotatePath(var_183_object, var_181_bool);
			var_204_bool = var_181_bool == 0; //@nz
			if(var_204_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_207_string = "";
				func_1341(var_207_string);
				var_208_string = "";
				func_1343(var_208_string);
				FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
				var_209_bool = var_181_bool == 0; //@nz
				if(var_209_bool != 0) {
					var_210_object = var_0_object;
					if(var_210_object != 0) {
						var_183_object = 0;
						goto Label_1294;
					EMIT "GOTO 0x4f3";
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
							goto Label_1294;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1294;
	}
			var_188_object = 0;
			goto Label_1292;

		Label_1292:
			var_183_object = 0;

		}
		goto Label_1198;
	}
Label_1294:
	var_167_bool = !var_0_object;
	return 16;
	
}


func_2220(var_15_bool, var_16_object, var_17_string)
{
	var_19_bool = var_17_string == "unholster";
	if(var_19_bool != 0) {
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_2415(var_21_object);
		var_20_bool = var_15_bool;
		return 0;
	EMIT "GOTO 0x8ca";
	}
	var_23_bool = var_17_string == "player_shot";
	if(var_23_bool != 0) {
		var_24_bool = 0; var_25_object = Obj();
		var_16_object = var_25_object;
		func_2420(var_25_object);
		var_24_bool = var_15_bool;
		return 0;
	EMIT "GOTO 0x8ca";
	}
	var_27_bool = var_17_string == "battle";
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_16_object = var_29_object;
		func_2425(var_29_object);
		var_28_bool = var_15_bool;
		return 0;
	}
	var_15_bool = 0;
	return 0;
}


func_684(var_0_object, var_393_float, var_394_int)
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
		func_414(var_406_int);
		var_404_float = var_399_float;
		var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0;
		var_398_object = var_408_object;
		var_399_float = var_409_float;
		var_411_int = 0; var_412_object = Obj(); var_413_int = 0;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_417(var_413_int);
		var_411_int = var_410_int;
		func_1664(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		var_472_int = 0;
		func_1067(var_472_int);
		ReportHit(var_0_object, var_472_int, var_400_float, var_399_float);
		var_473_object = Obj(); var_474_float = 0;
		var_398_object = var_473_object;
		var_400_float = var_474_float;
		func_1074();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1737(var_40_bool, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	@@var_41_object:IsDead(var_43_bool);
	var_43_bool = var_40_bool;
	return 2;
}


func_2252(var_30_object, var_31_string)
{
	var_33_bool = var_31_string == "unholster";
	if(var_33_bool != 0) {
		var_30_object = Obj();
		func_2418();
	} else {
		var_36_bool = var_31_string == "player_shot";
		if(var_36_bool != 0) {
			var_30_object = Obj();
			func_2423();
			goto Label_2276;
		}
		var_39_bool = var_31_string == "battle";
		if(var_39_bool == 0) goto Label_2276;
		var_30_object = Obj();
		func_2428();
	}
Label_2276:
	return 0;
	
}


func_1742(var_29_bool, var_30_object)
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
		func_1737(var_40_bool, var_41_object);
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


func_723(var_0_object, var_1_int, var_356_bool, var_357_float)
{
	var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = "";
	func_1062(var_365_string);
	irand(var_362_int, var_1_int);
	var_362_int = var_362_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2087();
	var_374_int = "attack_begin" + var_362_int;
	PlayAnimation("all", var_374_int);
	WaitForAnimEnd();
	func_1030(var_364_int, var_365_string);
	var_390_bool = 0; var_391_object = Obj();
	var_391_object = var_0_object;
	func_1778(var_390_bool, var_391_object);
	var_392_bool = var_390_bool == 0; //@nz
	if(var_392_bool != 0) {
		StopAsync();
		var_356_bool = 0;
		return 8;
	}
	var_393_float = 0; var_394_int = 0;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_684(var_365_string, var_393_float, var_394_int);
	var_477_int = "attack_middle" + var_362_int;
	HasAnimation(var_363_bool, "all", var_477_int);
	var_478_bool = var_363_bool;
	if(var_478_bool != 0) {
		func_2087();
		var_481_int = "attack_middle" + var_362_int;
		PlayAnimation("all", var_481_int);
		WaitForAnimEnd();
		func_1062(var_365_string);
		var_482_bool = 0; var_483_object = Obj();
		var_483_object = var_0_object;
		func_1778(var_482_bool, var_483_object);
		var_484_bool = var_482_bool == 0; //@nz
		if(var_484_bool != 0) {
			StopAsync();
			var_356_bool = 0;
			return 8;
		}
		var_485_float = 0; var_486_int = 0;
		var_357_float = var_485_float;
		var_362_int = var_486_int;
		func_684(var_365_string, var_485_float, var_486_int);
		var_364_int = 1;

	Label_800:
		var_488_int = "attack_middle" + var_362_int;
		var_490_int = var_488_int + "_";
		var_365_string = var_490_int + var_364_int;
		HasAnimation(var_363_bool, "all", var_365_string);
		var_492_bool = var_363_bool == 0; //@nz
		if(var_492_bool != 0) {
		} else {
			func_2087();
			PlayAnimation("all", var_365_string);
			WaitForAnimEnd();
			func_1062(var_365_string);
			var_508_bool = 0; var_509_object = Obj();
			var_509_object = var_0_object;
			func_1778(var_508_bool, var_509_object);
			var_510_bool = var_508_bool == 0; //@nz
			if(var_510_bool != 0) {
				StopAsync();
				var_356_bool = 0;
				var_511_float = 0; var_512_int = 0;
				var_357_float = var_511_float;
				var_362_int = var_512_int;
				func_684(var_365_string, var_511_float, var_512_int);
				var_364_int = var_364_int + (int)1;
				goto Label_800;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_496_int = "attack_end" + var_362_int;
	PlayAnimation("all", var_496_int);
	var_497_bool = 0;
	func_1076(var_497_bool);
	if(var_497_bool != 0) {
		var_498_bool = 0; var_499_float = 0;
		func_860(var_498_bool, (float)0.75);
		StopAsync();
	}
	var_356_bool = 1;
	return 8;
	
}


func_2277(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_13_object = var_18_object;
	func_2415(var_18_object);
	if(var_17_bool != 0) {
		var_19_bool = 0; var_20_object = Obj();
		var_13_object = var_20_object;
		func_1647(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		@@var_13_object:IsWeaponHolstered(var_15_bool);
		var_23_bool = var_15_bool == 0; //@nz
		if(var_23_bool != 0) {
			var_12_bool = 1;
			return 2;
		}
	}
	var_12_bool = 0;
	return 2;
}


func_1778(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_1742(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_1652(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_2300(var_24_object)
{
	var_24_object = Obj();
	func_2418();
	return 0;
}


func_2306(var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_1647(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		var_19_object = Obj();
		func_2022(var_19_object);
		ReportReputationChange(var_14_object, var_19_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_1802(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = "";
	var_43_bool = var_28_object == 0; //@ne
	if(var_43_bool != 0) {
		return 14;
	}
	IsDead(var_36_bool);
	var_44_bool = var_36_bool;
	if(var_44_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_37_int);
	var_46_bool = var_37_int < (int)0;
	if(var_46_bool != 0) {
		return 14;
	}
	@@var_28_object:GetPosition(var_38_cvector);
	GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_49_float = var_47_float * var_48_float;
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	var_52_float = var_50_float * var_51_float;
	var_53_int = var_49_float + var_52_float;
	var_55_bool = var_53_int >= (int)0;
	if(var_55_bool != 0) {
		var_42_string = "fhit";
	} else {
		var_42_string = "bhit";
	}
	var_58_int = var_42_string + "1";
	var_60_int = var_42_string + "2";
	FadeSecondaryAnimation("hit_react", var_58_int, var_60_int, (int)-10);
	return 14;
	
}


func_2319(var_12_bool, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj();
	var_17_bool = var_13_string == "heal";
	if(var_17_bool != 0) {
		FindActor(var_15_object, "player");
		var_19_bool = 0; var_20_object = Obj();
		var_15_object = var_20_object;
		func_2430(var_20_object);
		var_19_bool = var_12_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_12_bool = 0;
	return 2;
}


func_1296(var_0_object, var_1_int, var_19_int)
{
	var_21_bool = var_19_int != (int)0;
	if(var_21_bool != 0) {
		return 0;
	}
	var_22_bool = 0; var_23_object = Obj();
	var_23_object = var_1_int;
	func_1334(var_22_bool, var_23_object);
	var_58_bool = var_22_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2335(var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj();
	var_25_bool = var_21_string == "heal";
	if(var_25_bool != 0) {
		FindActor(var_23_object, "player");
		var_23_object = Obj();
		func_2433();
		var_23_object = 0;
	}
	return 2;
}


func_1318(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2348(var_66_string, var_67_int)
{
	var_68_string = ""; var_69_string = "";
	var_70_int = var_67_int;
	if(var_70_int != 0) {
		"idle" = "idle" + var_67_int;
	}
	var_69_string = var_66_string;
	return 2;
}


func_2355(var_60_int)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_63_int = 0;
	
Label_2357:
	var_66_string = ""; var_67_int = 0;
	var_63_int = var_67_int;
	func_2348(var_66_string, var_67_int);
	HasAnimation(var_64_bool, "all", var_66_string);
	var_71_bool = var_64_bool == 0; //@nz
	if(var_71_bool != 0) {
	} else {
		var_63_int = var_63_int + (int)1;
		goto Label_2357;
	}
	var_63_int = var_60_int;
	return 4;
	
}


func_1334(var_189_bool, var_190_object)
{
	var_191_bool = 0; var_192_object = Obj();
	var_190_object = var_192_object;
	func_1778(var_191_bool, var_192_object);
	var_191_bool = var_189_bool;
	return 0;
}


func_1846(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0);
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_object = var_15_object;
	if(var_38_object != 0) {
		var_40_bool = var_16_int != (int)4;
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_42_bool = var_16_int != (int)5;
		if(var_42_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
		var_45_cvector = CVector(0,0,0); var_46_object = Obj();
		var_15_object = var_46_object;
		func_1640(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_2028(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		CreateVectorVector(var_28_object);
		var_29_int = 1;

	Label_1875:
		var_57_int = "hit" + var_29_int;
		GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector);
		var_58_bool = var_30_bool == 0; //@nz
		if(var_58_bool != 0) {
		} else {
			var_106_int = var_32_cvector | var_27_cvector;
			var_108_bool = var_106_int >= (float)0.7071067690849304;
			if(var_108_bool != 0) {
				@@var_28_object:add(var_31_cvector);
			}
			var_29_int = var_29_int + (int)1;
			goto Label_1875;
		}
		@@var_28_object:size(var_33_int);
		var_59_int = var_33_int;
		if(var_59_int != 0) {
			irand(var_34_int, var_33_int);
			@@var_28_object:get(var_35_cvector, var_34_int);
			var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
			var_15_object = var_60_object;
			var_16_int = var_61_int;
			var_17_float = var_62_float;
			var_35_cvector = var_63_cvector;
			var_64_cvector = -var_27_cvector;
			func_1914(var_62_float, var_63_cvector, var_64_cvector);
			return 18;
		}
		var_28_object = 0;
	}
	var_105_object = Obj();
	var_15_object = var_105_object;
	func_1802(var_105_object);
	return 18;
	
}


func_1341(var_207_string)
{
	var_207_string = "walk";
	return 0;
}


func_1343(var_208_string)
{
	var_208_string = "run";
	return 0;
}


func_320()
{
	var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0;
	WaitForAnimEnd();
	var_58_bool = 0;
	func_1939(var_58_bool);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		return 14;
	}
	func_2355((int)0);
	var_60_int = var_51_int;
	var_52_int = 0;
	
Label_334:
	var_73_bool = 0;
	var_73_bool = 0;
	var_75_bool = var_52_int < (int)5;
	if(var_75_bool != 0) {
		var_76_bool = 0;
		func_1939(var_76_bool);
		if(var_76_bool != 0) {
			var_73_bool = 1;
		}
	}
	if(var_73_bool != 0) {
		irand(var_53_int, (int)3);
		var_79_bool = var_53_int == (int)0;
		if(var_79_bool != 0) {
			var_80_int = var_51_int;
			if(var_80_int == 0) goto Label_367;
			irand(var_54_int, var_51_int);
			var_82_string = ""; var_83_int = 0;
			var_54_int = var_83_int;
			func_2348(var_82_string, var_83_int);
			PlayAnimation("all", var_82_string);
			WaitForAnimEnd(var_55_bool);
			var_84_bool = var_55_bool == 0; //@nz
			if(var_84_bool != 0) {
			} else {
		} else {
				var_89_bool = var_53_int == (int)1;
				if(var_89_bool != 0) {
					rand(var_56_float, (int)4);
					var_92_int = var_56_float + (int)1;
					Sleep(var_92_int, var_57_bool);
					var_93_bool = var_57_bool == 0; //@nz
					if(var_93_bool != 0) {
						goto Label_396;
					}
					goto Label_385;
				}
				var_94_int = var_52_int;
				if(var_94_int == 0) goto Label_385;
				goto Label_396;
		}
		Label_385:
			var_85_bool = 0;
			func_399(var_85_bool);
			var_86_bool = var_85_bool == 0; //@nz
			if(var_86_bool != 0) {
				goto Label_396;
			}
			ResetAAS();
			var_52_int = var_52_int + (int)1;
			goto Label_334;

		}
	}
Label_396:
	ResetAAS();
	return 14;
	
}


func_1345(var_32_float)
{
	var_32_float = 1000.0;
	return 0;
}


func_1347(var_34_object, var_35_cvector)
{
	var_36_object = Obj(); var_37_object = Obj();
	FindPathTo(var_37_object, var_35_cvector, (int)1, (int)1);
	var_37_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2372(var_23_int, var_24_object)
{
	var_25_bool = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	func_1778(var_25_bool, var_26_object);
	if(var_25_bool != 0) {
		var_23_int = 2;
	} else {
		var_23_int = 0;
	}
	return 0;
	
}


func_2382(var_63_object)
{
	var_64_object = Obj();
	var_63_object = var_64_object;
	TaskCall(2);
	func_406(var_64_object);
	TaskReturn();
	return 0;
}


func_2390(var_20_int)
{
	var_20_int = 0;
	return 0;
}


func_2393()
{
	return 0;
}


func_1369()
{
	var_13_bool = 0;
	func_1939(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		func_2414();
	}
	return 0;
}


func_2395(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_860(var_498_bool, var_499_float)
{
	var_500_float = 0; var_501_bool = 0; var_502_float = 0; var_503_bool = 0;
	rand(var_502_float);
	var_504_bool = var_502_float < var_499_float;
	if(var_504_bool != 0) {

	Label_865:
		IsAnimationPlaying(var_503_bool);
		var_505_bool = var_503_bool == 0; //@nz
		if(var_505_bool != 0) {
		} else {
			var_506_bool = 0;
			func_958(var_506_bool);
			if(var_506_bool != 0) {
				var_498_bool = 1;
				sync();
				goto Label_865;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1062(var_503_bool);
	}
	goto Label_885;
	
Label_885:
	var_498_bool = 0;
	return 4;
	
}


func_2398()
{
	return 0;
}


func_2400(var_41_int)
{
	var_41_int = 0;
	return 0;
}


func_2403()
{
	return 0;
}


func_2405(var_14_int)
{
	var_14_int = 2;
	return 0;
}


func_2408(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_2435(var_21_object);
	return 0;
}


func_2414()
{
	return 0;
}


func_2415(var_17_bool)
{
	var_17_bool = 0;
	return 0;
}


func_2418()
{
	return 0;
}


func_2420(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_887(var_0_object, var_295_bool, var_296_float)
{
	var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0;
	
Label_888:
	IsAnimationPlaying(var_302_bool);
	var_307_bool = var_302_bool == 0; //@nz
	if(var_307_bool != 0) {
	} else {
		var_308_bool = 0;
		func_958(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = 1;
			return 10;
		}
		var_351_bool = 0; var_352_object = Obj();
		var_352_object = var_0_object;
		func_1778(var_351_bool, var_352_object);
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
			func_723(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = 1;
			sync();
			goto Label_888;
		}
		return 10;
	}
	func_1062(var_306_float);
	var_295_bool = 0;
	return 10;
	
}


func_2423()
{
	return 0;
}


func_2425(var_28_bool)
{
	var_28_bool = 0;
	return 0;
}


func_1914(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetScene(var_24_object);
	AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	var_28_object = Obj();
	var_17_object = var_28_object;
	func_1802(var_28_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2428()
{
	return 0;
}


func_2430(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_2433()
{
	return 0;
}


func_2435(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = GlobalVars[0];
	if(var_24_bool != 0) {
		IsOverrideActive(var_23_bool);
		var_25_bool = var_23_bool == 0; //@nz
		if(var_25_bool != 0) {
			var_26_object = Obj();
			var_21_object = var_26_object;
			func_2104(var_26_object);
		}
		return 2;
	}
	return 2;
}


func_1928(var_241_object)
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


func_399(var_85_bool)
{
	var_85_bool = 1;
	return 0;
}


func_2448()
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_401()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1939(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_2452(var_16_bool)
{
	var_16_bool = 0;
	return 0;
}


func_406(var_64_object)
{
	var_71_object = Obj(); var_72_bool = 0; var_73_float = 0;
	var_64_object = var_71_object;
	func_420(var_67_int, var_68_bool, var_69_float, var_70_int, var_64_object, var_71_object, (bool)1, (float)180.0);
	return 0;
}


func_2455(var_94_object)
{
	var_95_bool = 0; var_96_object = Obj();
	var_94_object = var_96_object;
	func_1647(var_95_bool, var_96_object);
	if(var_95_bool != 0) {
		var_99_object = Obj();
		func_2022(var_99_object);
		ReportReputationChange(var_94_object, var_99_object, (float)-0.07000000029802322, (bool)1);
		func_2158();
	}
	func_2134();
	var_150_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1944(var_157_object)
{
	var_158_float = 0; var_159_cvector = CVector(0,0,0); var_160_float = 0; var_161_cvector = CVector(0,0,0);
	@@var_157_object:GetEyesHeight(var_160_float);
	var_161_cvector = CVector(0.0, 0.0, 0.0);
	var_162_float = GetByIndex(var_161_cvector, 1);
	var_160_float = var_162_float;
	SetByIndex(var_161_cvector, 1) = var_162_float;
	LookAsync(var_157_object, "head", var_161_cvector);
	return 4;
}


func_414(var_404_float)
{
	var_404_float = 0.05000000074505806;
	return 0;
}


func_417(var_411_int)
{
	var_411_int = 0;
	return 0;
}


func_930(var_0_object, var_310_bool)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0;
	var_321_bool = 0; var_322_object = Obj();
	var_322_object = var_0_object;
	func_1778(var_321_bool, var_322_object);
	var_323_bool = var_321_bool == 0; //@nz
	if(var_323_bool != 0) {
		var_310_bool = 0;
		return 10;
	}
	var_324_bool = 0;
	func_1019(var_320_float, var_324_bool);
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


func_1955(var_121_string, var_122_int, var_123_int)
{
	var_124_bool = 0; var_125_bool = 0;
	var_126_bool = 0; var_127_int = 0; var_128_int = 0;
	var_122_int = var_127_int;
	var_123_int = var_128_int;
	func_2056(var_126_bool, var_127_int, var_128_int);
	if(var_126_bool != 0) {
		AddItem(var_125_bool, var_121_string, (int)0);
	}
	return 2;
}


func_420(var_0_object, var_3_bool, var_5_int, var_71_object, var_72_bool, var_73_float, var_146_bool, var_236_bool)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_float = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_float = 0;
	func_649(var_93_cvector, var_94_bool, var_95_float);
	var_5_int = 0;
	var_120_bool = IsFuncExist(var_71_object, "@GetAttackDistance", (int)1);
	if(var_120_bool != 0) {
		@@var_71_object:GetAttackDistance(var_85_float);
		var_85_float = var_85_float + (int)50;
	} else {
							var_73_float = var_85_float;
	}
	var_123_bool = var_85_float >= (int)150;
	if(var_123_bool != 0) {
		var_85_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_71_object;
	IsPlayerActor(var_0_object, var_88_bool);
	var_124_bool = var_88_bool;
	if(var_124_bool != 0) {
		PlayGlobalMusic("attack");
		var_126_object = Obj();
		func_2022(var_126_object);
		SendPlayerEnemy(var_71_object, var_126_object);
	}
	var_127_bool = var_72_bool;
	if(var_127_bool != 0) {
		var_89_bool = 0;
	} else {
						var_89_bool = 1;

	}
	var_90_float = (float)400.0 + var_85_float;
	
Label_460:
	var_129_bool = 0;
	var_129_bool = 0;
	var_130_bool = 0; var_131_object = Obj();
	var_131_object = var_0_object;
	func_1778(var_130_bool, var_131_object);
	if(var_130_bool != 0) {
		var_132_bool = var_3_bool == 0; //@nz
		if(var_132_bool != 0) {
			var_129_bool = 1;
		}
	}
	if(var_129_bool != 0) {
		func_1062(var_95_float);
		@@@var_0_object:GetPFPosition(var_86_cvector);
		GetPFPosition(var_87_cvector);
		var_91_cvector = var_86_cvector - var_87_cvector;
		var_92_float = var_91_cvector | var_91_cvector;
		var_138_float = var_90_float * var_90_float;
		var_139_bool = var_92_float >= var_138_float;
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj(); var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_bool = 0;
			var_141_object = var_0_object;
			var_85_float = var_142_float;
			TaskCall(3);
			func_1089(var_148_bool, var_140_bool, var_141_object, var_142_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_221_bool = var_146_bool == 0; //@nz
			if(var_221_bool != 0) {
			} else {
				var_89_bool = 0;
		} else {
				var_227_float = var_73_float * var_73_float;
				var_228_bool = var_92_float >= var_227_float;
				if(var_228_bool != 0) {
					@@@var_0_object:GetPFPosition(var_93_cvector);
					CanReachByPF(var_94_bool, var_93_cvector);
					var_229_bool = var_94_bool == 0; //@nz
					if(var_229_bool != 0) {
						var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0;
						var_231_object = var_0_object;
						var_85_float = var_232_float;
						TaskCall(3);
						func_1089(var_238_bool, var_230_bool, var_231_object, var_232_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_239_bool = var_236_bool == 0; //@nz
						if(var_239_bool != 0) {
							goto Label_632;
						}
						var_89_bool = 0;
						goto Label_460;
					}
					var_240_bool = var_89_bool == 0; //@nz
					if(var_240_bool != 0) {
						var_241_object = Obj();
						var_241_object = var_0_object;
						func_1928(var_241_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1062(var_95_float);
						StopAsync();
						var_89_bool = 1;
						var_252_bool = 0; var_253_object = Obj();
						var_253_object = var_0_object;
						func_1778(var_252_bool, var_253_object);
						var_254_bool = var_252_bool == 0; //@nz
						if(var_254_bool != 0) {
							goto Label_632;
						}
					}
					rand(var_95_float);
					var_255_bool = 0;
					var_257_bool = var_95_float < (float)0.25;
					if(var_257_bool != 1) {
						var_258_bool = 0;
						func_1019((bool)1, var_258_bool);
						if(var_258_bool != 1) {
							var_255_bool = 0;
						}
					}
					if(var_255_bool != 0) {
						Face(var_0_object);
						func_1069();
						PlayAnimation("all", "attack_stay");
						var_295_bool = 0; var_296_float = 0;
						var_73_float = var_296_float;
						func_887(var_95_float, var_295_bool, var_296_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1062(var_95_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_517_bool = 0;
						func_1019(var_95_float, var_517_bool);
						var_518_bool = var_517_bool == 0; //@nz
						if(var_518_bool == 0) goto Label_622;
						var_519_bool = 0; var_520_object = Obj();
						var_520_object = var_0_object;
						func_1778(var_519_bool, var_520_object);
						var_521_bool = var_519_bool == 0; //@nz
						if(var_521_bool != 0) {
							goto Label_632;
						}
						@@@var_0_object:GetPFPosition(var_86_cvector);
						GetPFPosition(var_87_cvector);
						var_91_cvector = var_86_cvector - var_87_cvector;
						var_92_float = var_91_cvector | var_91_cvector;
						var_522_float = var_73_float * var_73_float;
						var_523_bool = var_92_float < var_522_float;
						if(var_523_bool == 0) goto Label_622;
						var_524_bool = 0; var_525_float = 0;
						var_73_float = var_525_float;
						func_723(var_94_bool, var_95_float, var_524_bool, var_525_float);
						var_526_bool = var_524_bool == 0; //@nz
						if(var_526_bool == 0) goto Label_622;
						goto Label_632;
				}
					var_527_bool = 0; var_528_float = 0;
					var_73_float = var_528_float;
					func_723(var_94_bool, var_95_float, var_527_bool, var_528_float);
					var_529_bool = var_527_bool == 0; //@nz
					if(var_529_bool != 0) {
						goto Label_632;
					}
					var_89_bool = 1;

				}
			Label_622:
				goto Label_631;
		}
		Label_631:
			goto Label_460;

		}
	}
Label_632:
	WaitForAnimEnd();
	var_222_bool = var_3_bool;
	if(var_222_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_225_bool = var_88_bool;
	if(var_225_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1966(var_105_string, var_106_int, var_107_int, var_108_int)
{
	var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_bool = 0;
	var_113_bool = 0; var_114_int = 0; var_115_int = 0;
	var_106_int = var_114_int;
	var_107_int = var_115_int;
	func_2056(var_113_bool, var_114_int, var_115_int);
	if(var_113_bool != 0) {
		irand(var_111_int, var_108_int);
		var_120_int = var_111_int + (int)1;
		AddItem(var_112_bool, var_105_string, (int)0, var_120_int);
	}
	return 4;
}


func_1981(var_37_string)
{
	var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	IsExisting3DSound(var_46_bool, var_37_string);
	var_54_bool = var_46_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_47_int = 0;

	Label_1987:
		var_56_int = var_47_int + (int)1;
		var_57_int = var_37_string + var_56_int;
		IsExisting3DSound(var_48_bool, var_57_int);
		var_58_bool = var_48_bool == 0; //@nz
		if(var_58_bool != 0) {
		} else {
			var_47_int = var_47_int + (int)1;
			goto Label_1987;
		}
		var_59_bool = var_47_int == 0; //@nz
		if(var_59_bool != 0) {
			return 16;
		}
		irand(var_49_int, var_47_int);
		var_61_int = var_49_int + (int)1;
		var_37_string = var_37_string + var_61_int;
	}
	Is3DSoundLoaded(var_50_bool, var_37_string);
	var_62_bool = var_50_bool;
	if(var_62_bool != 0) {
		GetEyesHeight(var_51_float);
		GetDirection(var_52_cvector);
		var_53_cvector = var_52_cvector * (int)50;
		var_64_float = GetByIndex(var_53_cvector, 1);
		var_64_float = var_64_float + var_51_float;
		SetByIndex(var_53_cvector, 1) = var_64_float;
		PlayGlobalSound(var_37_string, var_53_cvector);
	}
	return 16;
	
}


func_958(var_308_bool)
{
	var_309_bool = 0;
	var_309_bool = 0;
	var_310_bool = 0;
	func_930(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		var_327_bool = 0;
		func_974(var_308_bool, var_309_bool, var_327_bool);
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


func_974(var_0_object, var_4_float, var_327_bool)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0);
	GetScene(var_333_object);
	var_334_bool = 0;
	
Label_978:
	var_338_cvector = CVector(0,0,0); var_339_object = Obj();
	var_339_object = var_0_object;
	func_1640(var_338_cvector, var_339_object);
	var_344_int = -var_338_cvector;
	FindDirLength(var_335_float, var_344_int, var_4_float);
	var_345_bool = var_335_float < var_4_float;
	if(var_345_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_336_cvector);
		GetPFPosition(var_337_cvector);
		WaitForAnimEnd();
		func_1062(var_337_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_334_bool = 1;
		var_349_bool = 0;
		func_930(var_337_cvector, var_349_bool);
		var_350_bool = var_349_bool == 0; //@nz
		if(var_350_bool != 0) {
			goto Label_1016;
		}
		goto Label_978;
	}
Label_1016:
	var_334_bool = var_327_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2022(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj();
	self(var_101_object);
	var_101_object = var_99_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2028(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_52_float = sqrt(var_53_int);
	var_54_float = 9.999999974752427e-07;
	var_55_bool = var_52_float < var_54_float;
	if(var_55_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_52_float;
	return 2;
}


func_2038(var_445_float, var_446_float, var_447_float)
{
	var_450_bool = var_446_float < var_447_float;
	if(var_450_bool != 0) {
		var_446_float = var_445_float;
	} else {
		var_447_float = var_445_float;
	}
	return 0;
	
}


func_1019(var_0_object, var_258_bool)
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


func_2045(var_455_float, var_456_float, var_457_float, var_458_float)
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


