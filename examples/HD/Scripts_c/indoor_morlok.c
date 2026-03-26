// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,FindPathTo/4,SensePlayerOnly/1,GetRandomPFPointInCircle/4,FollowPath/3,GetCameraFarDistance/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,AddItem/3,AddItem/4,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,IsOverrideActive/1,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rusk|W:peanut|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:idle|W:class|W:butcher|W:morlok
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
// @EVENT_10: op=0x646 vars=object
// @EVENT_28: op=0x64a vars=
// @EVENT_41: op=0x654 vars=object
// @STANDALONE_EVENT_16: op=0x88a vars=object,string
// @STANDALONE_EVENT_41: op=0x897 vars=object
// @STANDALONE_EVENT_22: op=0x89d vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x8a5 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x11d,0x12b,0x132,0x196,0x19e,0x1a1,0x432,0x43a,0x472,0x48d,0x49c,0x510,0x522,0x52d,0x536,0x5e3,0x5f1,0x5ff,0x646,0x654,0x65d,0x7f9,0x800,0x83b,0x882,0x897,0x89d,0x8a5,0x8af,0x8cf,0x8ff,0x905,0x947,0x951,0x959,0x960,0x966,0x969,0x96b,0x96e,0x970,0x973,0x97a,0x97d,0x97f,0x982,0x984,0x987,0x989,0x98c,0x9b5

task_0_event_0(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_2416(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_11_bool = var_18_object;
		func_2419(var_18_object);
	}
	return 2;
}


task_0_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_2425();
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
	func_2416(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_401();
		}
		var_20_object = Obj();
		var_11_bool = var_20_object;
		func_2419(var_20_object);
	}
	return 2;
}


task_1_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_object = Obj();
	var_11_bool = var_14_object;
	func_2309(var_14_object);
	var_23_int = 0; var_24_object = Obj();
	var_11_bool = var_24_object;
	func_2375(var_23_int, var_24_object);
	var_23_int = var_13_int;
	var_60_bool = var_13_int > (int)0;
	if(var_60_bool != 0) {
		var_62_bool = var_13_int > (int)1;
		if(var_62_bool != 0) {
			func_401();
		}
		var_63_object = Obj();
		var_11_bool = var_63_object;
		func_2385(var_63_object);
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
	func_2463(var_18_object, var_19_bool);
	if(var_16_bool != 0) {
		var_37_int = 0; var_38_object = Obj(); var_39_bool = 0;
		var_11_bool = var_38_object;
		var_13_bool = var_39_bool;
		func_2393(var_38_object, var_39_bool);
		var_37_int = var_15_int;
		var_71_bool = var_15_int > (int)0;
		if(var_71_bool != 0) {
			var_73_bool = var_15_int > (int)1;
			if(var_73_bool != 0) {
				func_401();
			}
			var_74_object = Obj();
			var_11_bool = var_74_object;
			func_2400(var_74_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_2406(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_401();
		}
		var_11_bool = Obj();
		func_2409();
	}
	return 2;
}


task_1_event_42(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_string = "";
	var_11_bool = var_16_object;
	var_12_bool = var_17_string;
	func_2223(var_15_bool, var_16_object, var_17_string);
	if(var_15_bool != 0) {
		func_401();
		var_30_object = Obj(); var_31_string = "";
		var_11_bool = var_30_object;
		var_12_bool = var_31_string;
		func_2255(var_30_object, var_31_string);
	} else {
		var_41_int = 0; var_42_string = ""; var_43_object = Obj();
		var_12_bool = var_42_string;
		var_11_bool = var_43_object;
		func_2411(var_43_object);
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
		func_2414();
	}
Label_284:
	return 2;
	
}


task_1_event_26(var_0_string, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_string = "";
	var_11_bool = var_13_string;
	func_2322(var_12_bool, var_13_string);
	if(var_12_bool != 0) {
		func_401();
		var_21_string = "";
		var_11_bool = var_21_string;
		func_2338(var_21_string);
	}
	return 0;
}


task_1_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_401();
	func_2425();
	return 0;
}


task_1_event_1(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_bool = var_13_object;
	func_2280(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_401();
		var_24_object = Obj();
		var_11_bool = var_24_object;
		func_2303(var_24_object);
	}
	return 0;
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_1152(var_10_bool);
	func_2425();
	return 0;
}


task_3_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int, var_10_bool, var_11_bool)
{
	var_13_bool = var_11_bool == (int)1;
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_14_object = var_1_int;
		func_2081(var_14_object);
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
		func_1947(var_15_object);
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
	func_2199();
	return 0;
}


task_4_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_2416(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_1613(var_12_int, var_13_int);
		}
		var_20_object = Obj();
		var_11_object = var_20_object;
		func_2419(var_20_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_object = Obj();
	var_11_object = var_14_object;
	func_2309(var_14_object);
	var_23_int = 0; var_24_object = Obj();
	var_11_object = var_24_object;
	func_2375(var_23_int, var_24_object);
	var_23_int = var_13_int;
	var_60_bool = var_13_int > (int)0;
	if(var_60_bool != 0) {
		var_62_bool = var_13_int > (int)1;
		if(var_62_bool != 0) {
			func_1613(var_12_int, var_13_int);
		}
		var_63_object = Obj();
		var_11_object = var_63_object;
		func_2385(var_63_object);
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
	func_2463(var_18_object, var_19_bool);
	if(var_16_bool != 0) {
		var_37_int = 0; var_38_object = Obj(); var_39_bool = 0;
		var_11_object = var_38_object;
		var_13_bool = var_39_bool;
		func_2393(var_38_object, var_39_bool);
		var_37_int = var_15_int;
		var_71_bool = var_15_int > (int)0;
		if(var_71_bool != 0) {
			var_73_bool = var_15_int > (int)1;
			if(var_73_bool != 0) {
				func_1613(var_14_int, var_15_int);
			}
			var_74_object = Obj();
			var_11_object = var_74_object;
			func_2400(var_74_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_2406(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_1613(var_12_int, var_13_int);
		}
		var_11_object = Obj();
		func_2409();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_string)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_string = "";
	var_11_object = var_16_object;
	var_12_string = var_17_string;
	func_2223(var_15_bool, var_16_object, var_17_string);
	if(var_15_bool != 0) {
		func_1613(var_13_int, var_14_int);
		var_30_object = Obj(); var_31_string = "";
		var_11_object = var_30_object;
		var_12_string = var_31_string;
		func_2255(var_30_object, var_31_string);
	} else {
		var_41_int = 0; var_42_string = ""; var_43_object = Obj();
		var_12_string = var_42_string;
		var_11_object = var_43_object;
		func_2411(var_43_object);
		var_41_int = var_14_int;
		var_45_bool = var_14_int > (int)0;
		if(var_45_bool == 0) goto Label_1506;
		var_47_bool = var_14_int > (int)1;
		if(var_47_bool != 0) {
			func_1613(var_13_int, var_14_int);
		}
		var_48_string = ""; var_49_object = Obj();
		var_12_string = var_48_string;
		var_11_object = var_49_object;
		func_2414();
	}
Label_1506:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_string)
{
	var_12_bool = 0; var_13_string = "";
	var_11_string = var_13_string;
	func_2322(var_12_bool, var_13_string);
	if(var_12_bool != 0) {
		func_1613(var_10_bool, var_11_string);
		var_21_string = "";
		var_11_string = var_21_string;
		func_2338(var_21_string);
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2280(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1613(var_10_bool, var_11_object);
		var_24_object = Obj();
		var_11_object = var_24_object;
		func_2303(var_24_object);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	func_1613(var_9_bool, var_10_bool);
	func_2425();
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
	func_1613(var_10_bool, var_11_object);
	var_11_object = Obj();
	func_2199();
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
	func_2178(var_12_object);
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1849(var_15_object, var_16_int, var_17_float);
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
	func_1917(var_19_float, var_20_cvector, var_21_cvector);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_bool, var_10_bool)
{
	SensePlayerOnly((bool)1);
	func_2459();
	func_1369();
	
Label_1364:
	func_1542(var_9_bool, var_10_bool);
	goto Label_1364;
}
EMIT "Return(); Pop(0)";


func_2048(var_471_float, var_472_float, var_473_float, var_474_float)
{
	var_475_bool = var_472_float < var_473_float;
	if(var_475_bool != 0) {
		var_473_float = var_471_float;
		return 0;
	}
	var_476_bool = var_472_float > var_474_float;
	if(var_476_bool != 0) {
		var_474_float = var_471_float;
		return 0;
	}
	var_472_float = var_471_float;
	return 0;
}


func_0(var_13_object)
{
	EventDisable(0);
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_33(var_14_object);
	var_94_object = Obj();
	var_13_object = var_94_object;
	func_2485(var_94_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1030(var_2_int, var_5_int)
{
	var_391_float = 0; var_392_int = 0; var_393_float = 0; var_394_int = 0;
	var_395_bool = var_2_int == 0; //@nz
	if(var_395_bool != 0) {
		return 4;
	}
	var_396_int = var_5_int;
	if(var_396_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_399_bool = var_5_int > (int)0;
		if(var_399_bool != 0) {
			return 4;
		}
	}
	rand(var_393_float);
	var_400_float = 0;
	func_1080(var_400_float);
	var_401_bool = var_393_float < var_400_float;
	if(var_401_bool != 0) {
		irand(var_394_int, var_2_int);
		var_394_int = var_394_int + (int)1;
		var_404_int = "attack" + var_394_int;
		Speak(var_404_int);
		var_405_int = 0;
		func_1078(var_405_int);
		var_5_int = var_405_int;
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
			func_1601(var_32_float);
			GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool);
			var_35_bool = var_26_bool;
			if(var_35_bool != 0) {
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
	var_36_object = Obj(); var_37_cvector = CVector(0,0,0);
	var_24_cvector = var_37_cvector;
	func_1347(var_36_object, var_37_cvector);
	var_36_object = var_27_object;
	var_42_bool = var_27_object != 0; //@nn
	if(var_42_bool != 0) {
		RotatePath(var_27_object, var_28_bool);
		var_43_bool = var_28_bool;
		if(var_43_bool != 0) {
			var_44_bool = 0;
			func_1345(var_44_bool);
			FollowPath(var_27_object, var_44_bool, var_28_bool);
			var_27_object = 0;
			var_45_bool = var_28_bool;
			if(var_45_bool != 0) {
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


func_2059(var_113_bool, var_114_int, var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	irand(var_117_int, var_115_int);
	var_113_bool = var_117_int < var_114_int;
	return 2;
}


func_2064(var_479_float)
{
	var_480_object = Obj(); var_481_object = Obj();
	CreateFloatVector(var_481_object);
	@@var_481_object:add(var_479_float);
	var_483_bool = var_479_float < (int)0;
	if(var_483_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_481_object);
	return 2;
}
EMIT "Stack[-1] = 0";


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
		func_1984(var_89_string);
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


func_2081(var_147_object)
{
	var_148_bool = 0; var_149_bool = 0;
	IsPlayerActor(var_147_object, var_149_bool);
	var_150_bool = var_149_bool;
	if(var_150_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1062(var_0_object)
{
	var_147_object = Obj();
	var_147_object = var_0_object;
	func_2081(var_147_object);
	return 0;
}


func_2090()
{
	var_384_object = Obj(); var_385_object = Obj();
	GetScene(var_385_object);
	var_387_object = Obj();
	func_2025(var_387_object);
	BroadcastMessage("battle", var_387_object, var_385_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1067(var_488_int)
{
	var_488_int = 0;
	return 0;
}


func_1069()
{
	var_280_string = "";
	func_1984("attack_stay");
	return 0;
}


func_1074()
{
	return 0;
}


func_1076(var_513_bool)
{
	var_513_bool = 1;
	return 0;
}


func_2101(var_130_int)
{
	var_131_int = 0; var_132_int = 0;
	GetVariable("branch", var_132_int);
	var_132_int = var_130_int;
	return 2;
}


func_1078(var_405_int)
{
	var_405_int = 1;
	return 0;
}


func_1080(var_400_float)
{
	var_400_float = 0.5;
	return 0;
}


func_2107(var_26_object)
{
	var_27_int = 0;
	func_2101(var_27_int);
	var_32_bool = var_27_int == (int)1;
	if(var_32_bool != 0) {
		WorkWithCorpse(var_26_object);
	} else {
		Barter(var_26_object);
	}
	return 0;
	
}


func_1089(var_2_int, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool)
{
	var_163_bool = 0; var_164_bool = 0; var_165_bool = 0; var_166_bool = 0;
	var_167_object = Obj();
	var_155_object = var_167_object;
	func_2081(var_167_object);
	SetTimer((int)1, (int)5);
	CanSee(var_165_bool, var_155_object);
	var_170_bool = var_165_bool;
	if(var_170_bool != 0) {
		var_2_int = true;
		var_171_object = Obj();
		var_155_object = var_171_object;
		func_1947(var_171_object);
	} else {
		var_2_int = false;
	}
	var_178_bool = 0; var_179_object = Obj();
	var_155_object = var_179_object;
	func_1650(var_178_bool, var_179_object);
	if(var_178_bool != 0) {
		var_182_object = Obj();
		func_2025(var_182_object);
		SendPlayerEnemy(var_155_object, var_182_object);
	}
	var_183_bool = 0; var_184_object = Obj(); var_185_float = 0; var_186_float = 0; var_187_bool = 0; var_188_bool = 0;
	var_155_object = var_184_object;
	var_156_float = var_185_float;
	var_157_float = var_186_float;
	var_158_bool = var_187_bool;
	var_159_bool = var_188_bool;
	func_1194(var_165_bool, var_166_bool, var_183_bool, var_184_object, var_185_float, var_186_float, var_187_bool, var_188_bool);
	var_183_bool = var_166_bool;
	var_234_int = var_2_int;
	if(var_234_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_166_bool = var_154_bool;
	return 4;
	
}


func_1601(var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	GetCameraFarDistance(var_34_float);
	var_34_float = var_32_float;
	return 2;
}


func_2120(var_136_string)
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


func_1613(var_0_object, var_1_int)
{
	var_0_object = true;
	var_1_int = false;
	Stop();
	StopGroup0();
	return 0;
}


func_2137()
{
	var_130_int = 0;
	func_2101(var_130_int);
	var_135_bool = var_130_int != (int)1;
	if(var_135_bool != 0) {
		return 0;
	}
	var_136_string = "";
	func_2120("liver");
	var_147_string = "";
	func_2120("kidney");
	var_148_string = "";
	func_2120("heart");
	var_149_string = "";
	func_2120("blood");
	return 0;
}


func_1629(var_451_string, var_452_int)
{
	var_454_bool = var_452_int == (int)2;
	if(var_454_bool != 0) {
		var_451_string = "fire";
		return 0;
	EMIT "GOTO 0x669";
	}
	var_456_bool = var_452_int == (int)1;
	if(var_456_bool != 0) {
		var_451_string = "bullet";
		return 0;
	}
	var_451_string = "phys";
	return 0;
}


func_1643(var_45_cvector, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	GetPosition(var_49_cvector);
	@@var_46_object:GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
	return 4;
}


func_2161()
{
	ClearSubContainer((int)0);
	var_105_string = ""; var_106_int = 0; var_107_int = 0; var_108_int = 0;
	func_1969("rusk", (int)1, (int)1, (int)2);
	var_121_string = ""; var_122_int = 0; var_123_int = 0;
	func_1958("peanut", (int)1, (int)4);
	return 0;
}


func_1650(var_95_bool, var_96_object)
{
	var_97_bool = 0; var_98_bool = 0;
	IsPlayerActor(var_96_object, var_98_bool);
	var_98_bool = var_95_bool;
	return 2;
}


func_1655(var_22_bool, var_23_object, var_24_string)
{
	var_25_bool = 0; var_26_bool = 0;
	var_29_bool = IsFuncExist(var_23_object, "HasProperty", (int)2);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	@@var_23_object:HasProperty(var_24_string, var_26_bool);
	var_26_bool = var_22_bool;
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
	func_1984(var_37_string);
	PlayAnimation("all", var_36_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_36_string);
	RemoveEnvelope();
	return 0;
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


func_2178(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
	return 0;
}


func_1667(var_423_float, var_424_object, var_425_float, var_426_int)
{
	var_430_int = 0; var_431_string = ""; var_432_int = 0; var_433_float = 0; var_434_float = 0; var_435_float = 0; var_436_int = 0; var_437_string = ""; var_438_int = 0; var_439_float = 0; var_440_float = 0; var_441_float = 0;
	var_442_bool = 0; var_443_object = Obj(); var_444_string = "";
	var_424_object = var_443_object;
	func_1655(var_442_bool, var_443_object, "health");
	var_445_bool = var_442_bool == 0; //@nz
	if(var_445_bool != 0) {
		var_423_float = 0.0;
		return 12;
	}
	var_446_bool = 0; var_447_object = Obj(); var_448_string = "";
	var_424_object = var_447_object;
	func_1655(var_446_bool, var_447_object, "armor");
	var_449_bool = var_446_bool == 0; //@nz
	if(var_449_bool != 0) {
		var_436_int = 0;
	} else {
			@@var_424_object:GetProperty("armor", var_436_int);
	}
	var_451_string = ""; var_452_int = 0;
	var_426_int = var_452_int;
	func_1629(var_451_string, var_452_int);
	var_437_string = "armor_" + var_451_string;
	var_457_bool = 0; var_458_object = Obj(); var_459_string = "";
	var_424_object = var_458_object;
	var_437_string = var_459_string;
	func_1655(var_457_bool, var_458_object, var_459_string);
	var_460_bool = var_457_bool == 0; //@nz
	if(var_460_bool != 0) {
		var_438_int = 0;
	} else {
		@@var_424_object:GetProperty(var_437_string, var_438_int);

	}
	var_461_float = 0; var_462_float = 0; var_463_float = 0;
	var_464_int = var_436_int + var_438_int;
	var_462_float = var_464_int / (float)100.0;
	func_2041(var_461_float, var_462_float, (float)1);
	var_461_float = var_439_float;
	@@var_424_object:GetProperty("health", var_440_float);
	var_469_int = (int)1 - var_439_float;
	var_441_float = var_425_float * var_469_int;
	var_471_float = 0; var_472_float = 0; var_473_float = 0; var_474_float = 0;
	var_472_float = var_440_float - var_441_float;
	func_2048(var_471_float, var_472_float, (float)0, (float)1);
	@@var_424_object:SetProperty("health", var_471_float);
	var_477_bool = 0; var_478_object = Obj();
	var_424_object = var_478_object;
	func_1650(var_477_bool, var_478_object);
	if(var_477_bool != 0) {
		var_479_float = 0;
		var_479_float = -var_441_float;
		func_2064(var_479_float);
	}
	var_441_float = var_423_float;
	return 12;
	
}


func_649(var_1_int, var_2_int, var_4_float)
{
	var_108_bool = 0; var_109_bool = 0; var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_651:
	var_117_int = var_1_int + (int)1;
	var_118_int = "attack_begin" + var_117_int;
	HasAnimation(var_111_bool, "all", var_118_int);
	var_119_bool = var_111_bool == 0; //@nz
	if(var_119_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_651;
	}
	var_2_int = 0;
	
Label_665:
	var_122_int = var_2_int + (int)1;
	var_123_int = "attack" + var_122_int;
	IsExisting3DSound(var_112_bool, var_123_int);
	var_124_bool = var_112_bool == 0; //@nz
	if(var_124_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_665;

	}
	GetAnimationOffset(var_113_cvector, "all", "bjump");
	var_127_float = GetByIndex(var_113_cvector, 2);
	var_4_float = -var_127_float;
	return 6;
	
}


func_1194(var_0_object, var_1_int, var_183_bool, var_184_object, var_185_float, var_186_float, var_187_bool, var_188_bool)
{
	var_189_bool = 0; var_190_bool = 0; var_191_object = Obj(); var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_cvector = CVector(0,0,0); var_195_float = 0; var_196_object = Obj(); var_197_bool = 0; var_198_bool = 0; var_199_object = Obj(); var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_float = 0; var_204_object = Obj();
	var_0_object = false;
	var_1_int = var_184_object;
	var_188_bool = var_198_bool;
	
Label_1198:
	var_205_bool = 0; var_206_object = Obj();
	var_184_object = var_206_object;
	func_1334(var_205_bool, var_206_object);
	var_209_bool = var_205_bool == 0; //@nz
	if(var_209_bool != 0) {
		var_183_bool = 0;
		return 16;
	}
	@@var_184_object:GetPosition(var_200_cvector);
	GetPosition(var_201_cvector);
	var_202_cvector = var_200_cvector - var_201_cvector;
	var_203_float = var_202_cvector | var_202_cvector;
	var_210_bool = 0;
	var_210_bool = 0;
	var_212_bool = var_186_float > (int)0;
	if(var_212_bool != 0) {
		var_213_float = var_186_float * var_186_float;
		var_214_bool = var_203_float > var_213_float;
		if(var_214_bool != 0) {
			var_210_bool = 1;
		}
	}
	if(var_210_bool != 0) {
		Stop();
		var_183_bool = 0;
		return 16;
	}
	var_215_float = var_185_float * var_185_float;
	var_216_bool = var_203_float > var_215_float;
	if(var_216_bool != 0) {
		@@var_184_object:GetPFPosition(var_200_cvector);
		FindPathTo(var_204_object, var_200_cvector);
		var_217_bool = var_204_object != 0; //@nn
		if(var_217_bool != 0) {
			var_204_object = var_199_object;
			var_204_object = 0;
		}
		var_218_bool = var_199_object != 0; //@nn
		if(var_218_bool != 0) {
			var_219_bool = var_198_bool;
			if(var_219_bool == 0) goto Label_1247;
			var_198_bool = 0;
			RotatePath(var_199_object, var_197_bool);
			var_220_bool = var_197_bool == 0; //@nz
			if(var_220_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_223_string = "";
				func_1341(var_223_string);
				var_224_string = "";
				func_1343(var_224_string);
				FollowPath(var_199_object, var_187_bool, var_197_bool, var_223_string, var_224_string);
				var_225_bool = var_197_bool == 0; //@nz
				if(var_225_bool != 0) {
					var_226_object = var_0_object;
					if(var_226_object != 0) {
						var_199_object = 0;
						goto Label_1294;
					EMIT "GOTO 0x4f3";
					}
				} else {
					var_199_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_197_bool);
					var_229_bool = var_197_bool == 0; //@nz
					if(var_229_bool != 0) {
						var_230_object = var_0_object;
						if(var_230_object != 0) {
							var_199_object = 0;
							goto Label_1294;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1294;
	}
			var_204_object = 0;
			goto Label_1292;

		Label_1292:
			var_199_object = 0;

		}
		goto Label_1198;
	}
Label_1294:
	var_183_bool = !var_0_object;
	return 16;
	
}


func_684(var_0_object, var_409_float, var_410_int)
{
	var_411_object = Obj(); var_412_float = 0; var_413_float = 0; var_414_object = Obj(); var_415_float = 0; var_416_float = 0;
	var_418_float = var_409_float * (float)0.8999999761581421;
	GetVictim(var_418_float, var_414_object);
	ReportAttack(var_0_object);
	var_419_bool = var_414_object == var_0_object;
	if(var_419_bool != 0) {
		var_420_float = 0; var_421_object = Obj(); var_422_int = 0;
		var_414_object = var_421_object;
		var_410_int = var_422_int;
		func_414(var_422_int);
		var_420_float = var_415_float;
		var_423_float = 0; var_424_object = Obj(); var_425_float = 0; var_426_int = 0;
		var_414_object = var_424_object;
		var_415_float = var_425_float;
		var_427_int = 0; var_428_object = Obj(); var_429_int = 0;
		var_414_object = var_428_object;
		var_410_int = var_429_int;
		func_417(var_429_int);
		var_427_int = var_426_int;
		func_1667(var_423_float, var_424_object, var_425_float, var_426_int);
		var_423_float = var_416_float;
		var_488_int = 0;
		func_1067(var_488_int);
		ReportHit(var_0_object, var_488_int, var_416_float, var_415_float);
		var_489_object = Obj(); var_490_float = 0;
		var_414_object = var_489_object;
		var_416_float = var_490_float;
		func_1074();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2223(var_15_bool, var_16_object, var_17_string)
{
	var_19_bool = var_17_string == "unholster";
	if(var_19_bool != 0) {
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_2426(var_21_object);
		var_20_bool = var_15_bool;
		return 0;
	EMIT "GOTO 0x8cd";
	}
	var_23_bool = var_17_string == "player_shot";
	if(var_23_bool != 0) {
		var_24_bool = 0; var_25_object = Obj();
		var_16_object = var_25_object;
		func_2431(var_25_object);
		var_24_bool = var_15_bool;
		return 0;
	EMIT "GOTO 0x8cd";
	}
	var_27_bool = var_17_string == "battle";
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_16_object = var_29_object;
		func_2436(var_29_object);
		var_28_bool = var_15_bool;
		return 0;
	}
	var_15_bool = 0;
	return 0;
}


func_1740(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0;
	@@var_58_object:IsDead(var_60_bool);
	var_60_bool = var_57_bool;
	return 2;
}


func_2255(var_30_object, var_31_string)
{
	var_33_bool = var_31_string == "unholster";
	if(var_33_bool != 0) {
		var_30_object = Obj();
		func_2429();
	} else {
		var_36_bool = var_31_string == "player_shot";
		if(var_36_bool != 0) {
			var_30_object = Obj();
			func_2434();
			goto Label_2279;
		}
		var_39_bool = var_31_string == "battle";
		if(var_39_bool == 0) goto Label_2279;
		var_30_object = Obj();
		func_2439();
	}
Label_2279:
	return 0;
	
}


func_1745(var_46_bool, var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj();
	var_52_bool = var_47_object == 0; //@ne
	if(var_52_bool != 0) {
		var_46_bool = 0;
		return 4;
	}
	var_53_bool = 0;
	var_53_bool = 0;
	var_56_bool = IsFuncExist(var_47_object, "IsDead", (int)1);
	if(var_56_bool != 0) {
		var_57_bool = 0; var_58_object = Obj();
		var_47_object = var_58_object;
		func_1740(var_57_bool, var_58_object);
		if(var_57_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		var_46_bool = 0;
		return 4;
	}
	GetScene(var_50_object);
	var_61_bool = var_50_object == 0; //@ne
	if(var_61_bool != 0) {
		var_46_bool = 0;
		return 4;
	}
	@@var_47_object:GetScene(var_51_object);
	var_62_bool = var_50_object != var_51_object;
	if(var_62_bool != 0) {
		var_46_bool = 0;
		return 4;
	}
	var_46_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_723(var_0_object, var_1_int, var_372_bool, var_373_float)
{
	var_374_int = 0; var_375_bool = 0; var_376_int = 0; var_377_string = ""; var_378_int = 0; var_379_bool = 0; var_380_int = 0; var_381_string = "";
	func_1062(var_381_string);
	irand(var_378_int, var_1_int);
	var_378_int = var_378_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2090();
	var_390_int = "attack_begin" + var_378_int;
	PlayAnimation("all", var_390_int);
	WaitForAnimEnd();
	func_1030(var_380_int, var_381_string);
	var_406_bool = 0; var_407_object = Obj();
	var_407_object = var_0_object;
	func_1781(var_406_bool, var_407_object);
	var_408_bool = var_406_bool == 0; //@nz
	if(var_408_bool != 0) {
		StopAsync();
		var_372_bool = 0;
		return 8;
	}
	var_409_float = 0; var_410_int = 0;
	var_373_float = var_409_float;
	var_378_int = var_410_int;
	func_684(var_381_string, var_409_float, var_410_int);
	var_493_int = "attack_middle" + var_378_int;
	HasAnimation(var_379_bool, "all", var_493_int);
	var_494_bool = var_379_bool;
	if(var_494_bool != 0) {
		func_2090();
		var_497_int = "attack_middle" + var_378_int;
		PlayAnimation("all", var_497_int);
		WaitForAnimEnd();
		func_1062(var_381_string);
		var_498_bool = 0; var_499_object = Obj();
		var_499_object = var_0_object;
		func_1781(var_498_bool, var_499_object);
		var_500_bool = var_498_bool == 0; //@nz
		if(var_500_bool != 0) {
			StopAsync();
			var_372_bool = 0;
			return 8;
		}
		var_501_float = 0; var_502_int = 0;
		var_373_float = var_501_float;
		var_378_int = var_502_int;
		func_684(var_381_string, var_501_float, var_502_int);
		var_380_int = 1;

	Label_800:
		var_504_int = "attack_middle" + var_378_int;
		var_506_int = var_504_int + "_";
		var_381_string = var_506_int + var_380_int;
		HasAnimation(var_379_bool, "all", var_381_string);
		var_508_bool = var_379_bool == 0; //@nz
		if(var_508_bool != 0) {
		} else {
			func_2090();
			PlayAnimation("all", var_381_string);
			WaitForAnimEnd();
			func_1062(var_381_string);
			var_524_bool = 0; var_525_object = Obj();
			var_525_object = var_0_object;
			func_1781(var_524_bool, var_525_object);
			var_526_bool = var_524_bool == 0; //@nz
			if(var_526_bool != 0) {
				StopAsync();
				var_372_bool = 0;
				var_527_float = 0; var_528_int = 0;
				var_373_float = var_527_float;
				var_378_int = var_528_int;
				func_684(var_381_string, var_527_float, var_528_int);
				var_380_int = var_380_int + (int)1;
				goto Label_800;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_512_int = "attack_end" + var_378_int;
	PlayAnimation("all", var_512_int);
	var_513_bool = 0;
	func_1076(var_513_bool);
	if(var_513_bool != 0) {
		var_514_bool = 0; var_515_float = 0;
		func_860(var_514_bool, (float)0.75);
		StopAsync();
	}
	var_372_bool = 1;
	return 8;
	
}


func_2280(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_13_object = var_18_object;
	func_2426(var_18_object);
	if(var_17_bool != 0) {
		var_19_bool = 0; var_20_object = Obj();
		var_13_object = var_20_object;
		func_1650(var_19_bool, var_20_object);
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


func_1781(var_42_bool, var_43_object)
{
	var_44_int = 0; var_45_int = 0;
	var_46_bool = 0; var_47_object = Obj();
	var_43_object = var_47_object;
	func_1745(var_46_bool, var_47_object);
	var_63_bool = var_46_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	var_64_bool = 0; var_65_object = Obj(); var_66_string = "";
	var_43_object = var_65_object;
	func_1655(var_64_bool, var_65_object, "noaccess");
	var_67_bool = var_64_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_42_bool = 1;
		return 2;
	}
	@@var_43_object:GetProperty("noaccess", var_45_int);
	var_42_bool = var_45_int == (int)0;
	return 2;
}


func_2303(var_24_object)
{
	var_24_object = Obj();
	func_2429();
	return 0;
}


func_2309(var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_1650(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		var_19_object = Obj();
		func_2025(var_19_object);
		ReportReputationChange(var_14_object, var_19_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_1805(var_28_object)
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


func_2322(var_12_bool, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj();
	var_17_bool = var_13_string == "heal";
	if(var_17_bool != 0) {
		FindActor(var_15_object, "player");
		var_19_bool = 0; var_20_object = Obj();
		var_15_object = var_20_object;
		func_2441(var_20_object);
		var_19_bool = var_12_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_12_bool = 0;
	return 2;
}


func_2338(var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj();
	var_25_bool = var_21_string == "heal";
	if(var_25_bool != 0) {
		FindActor(var_23_object, "player");
		var_23_object = Obj();
		func_2444();
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


func_2351(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = "";
	var_72_int = var_69_int;
	if(var_72_int != 0) {
		"idle" = "idle" + var_69_int;
	}
	var_71_string = var_68_string;
	return 2;
}


func_2358(var_62_int)
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_bool = 0;
	var_65_int = 0;
	
Label_2360:
	var_68_string = ""; var_69_int = 0;
	var_65_int = var_69_int;
	func_2351(var_68_string, var_69_int);
	HasAnimation(var_66_bool, "all", var_68_string);
	var_73_bool = var_66_bool == 0; //@nz
	if(var_73_bool != 0) {
	} else {
		var_65_int = var_65_int + (int)1;
		goto Label_2360;
	}
	var_65_int = var_62_int;
	return 4;
	
}


func_1334(var_205_bool, var_206_object)
{
	var_207_bool = 0; var_208_object = Obj();
	var_206_object = var_208_object;
	func_1781(var_207_bool, var_208_object);
	var_207_bool = var_205_bool;
	return 0;
}


func_1849(var_15_object, var_16_int, var_17_float)
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
		func_1643(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_2031(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		CreateVectorVector(var_28_object);
		var_29_int = 1;

	Label_1878:
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
			goto Label_1878;
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
			func_1917(var_62_float, var_63_cvector, var_64_cvector);
			return 18;
		}
		var_28_object = 0;
	}
	var_105_object = Obj();
	var_15_object = var_105_object;
	func_1805(var_105_object);
	return 18;
	
}


func_1341(var_223_string)
{
	var_223_string = "walk";
	return 0;
}


func_1343(var_224_string)
{
	var_224_string = "run";
	return 0;
}


func_320()
{
	var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_bool = 0;
	WaitForAnimEnd();
	var_60_bool = 0;
	func_1942(var_60_bool);
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		return 14;
	}
	func_2358((int)0);
	var_62_int = var_53_int;
	var_54_int = 0;
	
Label_334:
	var_75_bool = 0;
	var_75_bool = 0;
	var_77_bool = var_54_int < (int)5;
	if(var_77_bool != 0) {
		var_78_bool = 0;
		func_1942(var_78_bool);
		if(var_78_bool != 0) {
			var_75_bool = 1;
		}
	}
	if(var_75_bool != 0) {
		irand(var_55_int, (int)3);
		var_81_bool = var_55_int == (int)0;
		if(var_81_bool != 0) {
			var_82_int = var_53_int;
			if(var_82_int == 0) goto Label_367;
			irand(var_56_int, var_53_int);
			var_84_string = ""; var_85_int = 0;
			var_56_int = var_85_int;
			func_2351(var_84_string, var_85_int);
			PlayAnimation("all", var_84_string);
			WaitForAnimEnd(var_57_bool);
			var_86_bool = var_57_bool == 0; //@nz
			if(var_86_bool != 0) {
			} else {
		} else {
				var_91_bool = var_55_int == (int)1;
				if(var_91_bool != 0) {
					rand(var_58_float, (int)4);
					var_94_int = var_58_float + (int)1;
					Sleep(var_94_int, var_59_bool);
					var_95_bool = var_59_bool == 0; //@nz
					if(var_95_bool != 0) {
						goto Label_396;
					}
					goto Label_385;
				}
				var_96_int = var_54_int;
				if(var_96_int == 0) goto Label_385;
				goto Label_396;
		}
		Label_385:
			var_87_bool = 0;
			func_399(var_87_bool);
			var_88_bool = var_87_bool == 0; //@nz
			if(var_88_bool != 0) {
				goto Label_396;
			}
			ResetAAS();
			var_54_int = var_54_int + (int)1;
			goto Label_334;

		}
	}
Label_396:
	ResetAAS();
	return 14;
	
}


func_1345(var_44_bool)
{
	var_44_bool = 1;
	return 0;
}


func_1347(var_36_object, var_37_cvector)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindPathTo(var_39_object, var_37_cvector, (int)1, (int)1);
	var_39_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2375(var_40_int, var_41_object)
{
	var_42_bool = 0; var_43_object = Obj();
	var_41_object = var_43_object;
	func_1781(var_42_bool, var_43_object);
	if(var_42_bool != 0) {
		var_40_int = 2;
	} else {
		var_40_int = 0;
	}
	return 0;
	
}


func_2385(var_75_object)
{
	var_76_object = Obj();
	var_75_object = var_76_object;
	TaskCall(2);
	func_406(var_76_object);
	TaskReturn();
	return 0;
}


func_2393(var_37_int, var_38_object)
{
	var_40_int = 0; var_41_object = Obj();
	var_38_object = var_41_object;
	func_2375(var_40_int, var_41_object);
	var_40_int = var_37_int;
	return 0;
}


func_1369()
{
	var_13_bool = 0;
	func_1942(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		func_2425();
	}
	return 0;
}


func_860(var_514_bool, var_515_float)
{
	var_516_float = 0; var_517_bool = 0; var_518_float = 0; var_519_bool = 0;
	rand(var_518_float);
	var_520_bool = var_518_float < var_515_float;
	if(var_520_bool != 0) {

	Label_865:
		IsAnimationPlaying(var_519_bool);
		var_521_bool = var_519_bool == 0; //@nz
		if(var_521_bool != 0) {
		} else {
			var_522_bool = 0;
			func_958(var_522_bool);
			if(var_522_bool != 0) {
				var_514_bool = 1;
				sync();
				goto Label_865;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1062(var_519_bool);
	}
	goto Label_885;
	
Label_885:
	var_514_bool = 0;
	return 4;
	
}


func_2400(var_74_object)
{
	var_75_object = Obj();
	var_74_object = var_75_object;
	func_2385(var_75_object);
	return 0;
}


func_2406(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_2409()
{
	return 0;
}


func_2411(var_41_int)
{
	var_41_int = 0;
	return 0;
}


func_2414()
{
	return 0;
}


func_2416(var_14_int)
{
	var_14_int = 2;
	return 0;
}


func_2419(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_2446(var_21_object);
	return 0;
}


func_887(var_0_object, var_311_bool, var_312_float)
{
	var_313_bool = 0; var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_float = 0; var_318_bool = 0; var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_float = 0;
	
Label_888:
	IsAnimationPlaying(var_318_bool);
	var_323_bool = var_318_bool == 0; //@nz
	if(var_323_bool != 0) {
	} else {
		var_324_bool = 0;
		func_958(var_324_bool);
		if(var_324_bool != 0) {
			var_311_bool = 1;
			return 10;
		}
		var_367_bool = 0; var_368_object = Obj();
		var_368_object = var_0_object;
		func_1781(var_367_bool, var_368_object);
		var_369_bool = var_367_bool == 0; //@nz
		if(var_369_bool != 0) {
			var_311_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_319_cvector);
		GetPFPosition(var_320_cvector);
		var_321_cvector = var_319_cvector - var_320_cvector;
		var_322_float = var_321_cvector | var_321_cvector;
		var_370_float = var_312_float * var_312_float;
		var_371_bool = var_322_float < var_370_float;
		if(var_371_bool != 0) {
			var_372_bool = 0; var_373_float = 0;
			var_312_float = var_373_float;
			func_723(var_321_cvector, var_322_float, var_372_bool, var_373_float);
			var_311_bool = 1;
			sync();
			goto Label_888;
		}
		return 10;
	}
	func_1062(var_322_float);
	var_311_bool = 0;
	return 10;
	
}


func_2425()
{
	return 0;
}


func_2426(var_17_bool)
{
	var_17_bool = 0;
	return 0;
}


func_1917(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetScene(var_24_object);
	AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	var_28_object = Obj();
	var_17_object = var_28_object;
	func_1805(var_28_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2429()
{
	return 0;
}


func_2431(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_2434()
{
	return 0;
}


func_2436(var_28_bool)
{
	var_28_bool = 0;
	return 0;
}


func_2439()
{
	return 0;
}


func_2441(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_1931(var_257_object)
{
	var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0);
	@@var_257_object:GetPosition(var_261_cvector);
	GetPosition(var_262_cvector);
	var_263_cvector = var_261_cvector - var_262_cvector;
	var_264_float = GetByIndex(var_263_cvector, 0);
	var_265_float = GetByIndex(var_263_cvector, 2);
	RotateAsync(var_264_float, var_265_float);
	return 6;
}


func_2444()
{
	return 0;
}


func_2446(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = GlobalVars[0];
	if(var_24_bool != 0) {
		IsOverrideActive(var_23_bool);
		var_25_bool = var_23_bool == 0; //@nz
		if(var_25_bool != 0) {
			var_26_object = Obj();
			var_21_object = var_26_object;
			func_2107(var_26_object);
		}
		return 2;
	}
	return 2;
}


func_399(var_87_bool)
{
	var_87_bool = 1;
	return 0;
}


func_401()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1942(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_406(var_76_object)
{
	var_83_object = Obj(); var_84_bool = 0; var_85_float = 0;
	var_76_object = var_83_object;
	func_420(var_79_int, var_80_bool, var_81_float, var_82_int, var_76_object, var_83_object, (bool)1, (float)180.0);
	return 0;
}


func_1947(var_171_object)
{
	var_172_float = 0; var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_cvector = CVector(0,0,0);
	@@var_171_object:GetEyesHeight(var_174_float);
	var_175_cvector = CVector(0.0, 0.0, 0.0);
	var_176_float = GetByIndex(var_175_cvector, 1);
	var_174_float = var_176_float;
	SetByIndex(var_175_cvector, 1) = var_176_float;
	LookAsync(var_171_object, "head", var_175_cvector);
	return 4;
}


func_2459()
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_414(var_420_float)
{
	var_420_float = 0.05000000074505806;
	return 0;
}


func_2463(var_16_bool, var_18_object)
{
	var_20_string = ""; var_21_string = "";
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	func_1655(var_22_bool, var_23_object, "class");
	var_31_bool = var_22_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	@@var_18_object:GetProperty("class", var_21_string);
	var_16_bool = 1;
	var_34_bool = var_21_string == "butcher";
	if(var_34_bool != 1) {
		var_36_bool = var_21_string == "morlok";
		if(var_36_bool != 1) {
			var_16_bool = 0;
		}
	}
	return 2;
}


func_417(var_427_int)
{
	var_427_int = 0;
	return 0;
}


func_930(var_0_object, var_326_bool)
{
	var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_float = 0; var_331_float = 0; var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_float = 0; var_336_float = 0;
	var_337_bool = 0; var_338_object = Obj();
	var_338_object = var_0_object;
	func_1781(var_337_bool, var_338_object);
	var_339_bool = var_337_bool == 0; //@nz
	if(var_339_bool != 0) {
		var_326_bool = 0;
		return 10;
	}
	var_340_bool = 0;
	func_1019(var_336_float, var_340_bool);
	if(var_340_bool != 0) {
		@@@var_0_object:GetPFPosition(var_332_cvector);
		GetPFPosition(var_333_cvector);
		var_334_cvector = var_332_cvector - var_333_cvector;
		var_335_float = var_334_cvector | var_334_cvector;
		@@@var_0_object:GetAttackDistance(var_336_float);
		var_336_float = var_336_float + (int)50;
		var_342_float = var_336_float * var_336_float;
		var_326_bool = var_335_float <= var_342_float;
		return 10;
	}
	var_326_bool = 0;
	return 10;
}


func_420(var_0_object, var_3_bool, var_5_int, var_83_object, var_84_bool, var_85_float, var_160_bool, var_252_bool)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_float = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_bool = 0; var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_bool = 0; var_107_float = 0;
	func_649(var_105_cvector, var_106_bool, var_107_float);
	var_5_int = 0;
	var_132_bool = IsFuncExist(var_83_object, "@GetAttackDistance", (int)1);
	if(var_132_bool != 0) {
		@@var_83_object:GetAttackDistance(var_97_float);
		var_97_float = var_97_float + (int)50;
	} else {
							var_85_float = var_97_float;
	}
	var_135_bool = var_97_float >= (int)150;
	if(var_135_bool != 0) {
		var_97_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_83_object;
	IsPlayerActor(var_0_object, var_100_bool);
	var_136_bool = var_100_bool;
	if(var_136_bool != 0) {
		PlayGlobalMusic("attack");
		var_138_object = Obj();
		func_2025(var_138_object);
		SendPlayerEnemy(var_83_object, var_138_object);
	}
	var_141_bool = var_84_bool;
	if(var_141_bool != 0) {
		var_101_bool = 0;
	} else {
						var_101_bool = 1;

	}
	var_102_float = (float)400.0 + var_97_float;
	
Label_460:
	var_143_bool = 0;
	var_143_bool = 0;
	var_144_bool = 0; var_145_object = Obj();
	var_145_object = var_0_object;
	func_1781(var_144_bool, var_145_object);
	if(var_144_bool != 0) {
		var_146_bool = var_3_bool == 0; //@nz
		if(var_146_bool != 0) {
			var_143_bool = 1;
		}
	}
	if(var_143_bool != 0) {
		func_1062(var_107_float);
		@@@var_0_object:GetPFPosition(var_98_cvector);
		GetPFPosition(var_99_cvector);
		var_103_cvector = var_98_cvector - var_99_cvector;
		var_104_float = var_103_cvector | var_103_cvector;
		var_152_float = var_102_float * var_102_float;
		var_153_bool = var_104_float >= var_152_float;
		if(var_153_bool != 0) {
			var_154_bool = 0; var_155_object = Obj(); var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_bool = 0;
			var_155_object = var_0_object;
			var_97_float = var_156_float;
			TaskCall(3);
			func_1089(var_162_bool, var_154_bool, var_155_object, var_156_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_237_bool = var_160_bool == 0; //@nz
			if(var_237_bool != 0) {
			} else {
				var_101_bool = 0;
		} else {
				var_243_float = var_85_float * var_85_float;
				var_244_bool = var_104_float >= var_243_float;
				if(var_244_bool != 0) {
					@@@var_0_object:GetPFPosition(var_105_cvector);
					CanReachByPF(var_106_bool, var_105_cvector);
					var_245_bool = var_106_bool == 0; //@nz
					if(var_245_bool != 0) {
						var_246_bool = 0; var_247_object = Obj(); var_248_float = 0; var_249_float = 0; var_250_bool = 0; var_251_bool = 0;
						var_247_object = var_0_object;
						var_97_float = var_248_float;
						TaskCall(3);
						func_1089(var_254_bool, var_246_bool, var_247_object, var_248_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_255_bool = var_252_bool == 0; //@nz
						if(var_255_bool != 0) {
							goto Label_632;
						}
						var_101_bool = 0;
						goto Label_460;
					}
					var_256_bool = var_101_bool == 0; //@nz
					if(var_256_bool != 0) {
						var_257_object = Obj();
						var_257_object = var_0_object;
						func_1931(var_257_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1062(var_107_float);
						StopAsync();
						var_101_bool = 1;
						var_268_bool = 0; var_269_object = Obj();
						var_269_object = var_0_object;
						func_1781(var_268_bool, var_269_object);
						var_270_bool = var_268_bool == 0; //@nz
						if(var_270_bool != 0) {
							goto Label_632;
						}
					}
					rand(var_107_float);
					var_271_bool = 0;
					var_273_bool = var_107_float < (float)0.25;
					if(var_273_bool != 1) {
						var_274_bool = 0;
						func_1019((bool)1, var_274_bool);
						if(var_274_bool != 1) {
							var_271_bool = 0;
						}
					}
					if(var_271_bool != 0) {
						Face(var_0_object);
						func_1069();
						PlayAnimation("all", "attack_stay");
						var_311_bool = 0; var_312_float = 0;
						var_85_float = var_312_float;
						func_887(var_107_float, var_311_bool, var_312_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1062(var_107_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_533_bool = 0;
						func_1019(var_107_float, var_533_bool);
						var_534_bool = var_533_bool == 0; //@nz
						if(var_534_bool == 0) goto Label_622;
						var_535_bool = 0; var_536_object = Obj();
						var_536_object = var_0_object;
						func_1781(var_535_bool, var_536_object);
						var_537_bool = var_535_bool == 0; //@nz
						if(var_537_bool != 0) {
							goto Label_632;
						}
						@@@var_0_object:GetPFPosition(var_98_cvector);
						GetPFPosition(var_99_cvector);
						var_103_cvector = var_98_cvector - var_99_cvector;
						var_104_float = var_103_cvector | var_103_cvector;
						var_538_float = var_85_float * var_85_float;
						var_539_bool = var_104_float < var_538_float;
						if(var_539_bool == 0) goto Label_622;
						var_540_bool = 0; var_541_float = 0;
						var_85_float = var_541_float;
						func_723(var_106_bool, var_107_float, var_540_bool, var_541_float);
						var_542_bool = var_540_bool == 0; //@nz
						if(var_542_bool == 0) goto Label_622;
						goto Label_632;
				}
					var_543_bool = 0; var_544_float = 0;
					var_85_float = var_544_float;
					func_723(var_106_bool, var_107_float, var_543_bool, var_544_float);
					var_545_bool = var_543_bool == 0; //@nz
					if(var_545_bool != 0) {
						goto Label_632;
					}
					var_101_bool = 1;

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
	var_238_bool = var_3_bool;
	if(var_238_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_241_bool = var_100_bool;
	if(var_241_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1958(var_121_string, var_122_int, var_123_int)
{
	var_124_bool = 0; var_125_bool = 0;
	var_126_bool = 0; var_127_int = 0; var_128_int = 0;
	var_122_int = var_127_int;
	var_123_int = var_128_int;
	func_2059(var_126_bool, var_127_int, var_128_int);
	if(var_126_bool != 0) {
		AddItem(var_125_bool, var_121_string, (int)0);
	}
	return 2;
}


func_1969(var_105_string, var_106_int, var_107_int, var_108_int)
{
	var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_bool = 0;
	var_113_bool = 0; var_114_int = 0; var_115_int = 0;
	var_106_int = var_114_int;
	var_107_int = var_115_int;
	func_2059(var_113_bool, var_114_int, var_115_int);
	if(var_113_bool != 0) {
		irand(var_111_int, var_108_int);
		var_120_int = var_111_int + (int)1;
		AddItem(var_112_bool, var_105_string, (int)0, var_120_int);
	}
	return 4;
}


func_2485(var_94_object)
{
	var_95_bool = 0; var_96_object = Obj();
	var_94_object = var_96_object;
	func_1650(var_95_bool, var_96_object);
	if(var_95_bool != 0) {
		var_99_object = Obj();
		func_2025(var_99_object);
		ReportReputationChange(var_94_object, var_99_object, (float)-0.07000000029802322, (bool)1);
		func_2161();
	}
	func_2137();
	var_150_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_958(var_324_bool)
{
	var_325_bool = 0;
	var_325_bool = 0;
	var_326_bool = 0;
	func_930(var_325_bool, var_326_bool);
	if(var_326_bool != 0) {
		var_343_bool = 0;
		func_974(var_324_bool, var_325_bool, var_343_bool);
		if(var_343_bool != 0) {
			var_325_bool = 1;
		}
	}
	if(var_325_bool != 0) {
		var_324_bool = 1;
		return 0;
	}
	var_324_bool = 0;
	return 0;
}


func_1984(var_37_string)
{
	var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	IsExisting3DSound(var_46_bool, var_37_string);
	var_54_bool = var_46_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_47_int = 0;

	Label_1990:
		var_56_int = var_47_int + (int)1;
		var_57_int = var_37_string + var_56_int;
		IsExisting3DSound(var_48_bool, var_57_int);
		var_58_bool = var_48_bool == 0; //@nz
		if(var_58_bool != 0) {
		} else {
			var_47_int = var_47_int + (int)1;
			goto Label_1990;
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


func_974(var_0_object, var_4_float, var_343_bool)
{
	var_344_object = Obj(); var_345_bool = 0; var_346_float = 0; var_347_cvector = CVector(0,0,0); var_348_cvector = CVector(0,0,0); var_349_object = Obj(); var_350_bool = 0; var_351_float = 0; var_352_cvector = CVector(0,0,0); var_353_cvector = CVector(0,0,0);
	GetScene(var_349_object);
	var_350_bool = 0;
	
Label_978:
	var_354_cvector = CVector(0,0,0); var_355_object = Obj();
	var_355_object = var_0_object;
	func_1643(var_354_cvector, var_355_object);
	var_360_int = -var_354_cvector;
	FindDirLength(var_351_float, var_360_int, var_4_float);
	var_361_bool = var_351_float < var_4_float;
	if(var_361_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_352_cvector);
		GetPFPosition(var_353_cvector);
		WaitForAnimEnd();
		func_1062(var_353_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_350_bool = 1;
		var_365_bool = 0;
		func_930(var_353_cvector, var_365_bool);
		var_366_bool = var_365_bool == 0; //@nz
		if(var_366_bool != 0) {
			goto Label_1016;
		}
		goto Label_978;
	}
Label_1016:
	var_350_bool = var_343_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2025(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj();
	self(var_101_object);
	var_101_object = var_99_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2031(var_43_cvector, var_44_cvector)
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


func_2041(var_461_float, var_462_float, var_463_float)
{
	var_466_bool = var_462_float < var_463_float;
	if(var_466_bool != 0) {
		var_462_float = var_461_float;
	} else {
		var_463_float = var_461_float;
	}
	return 0;
	
}


func_1019(var_0_object, var_274_bool)
{
	var_275_bool = 0; var_276_bool = 0;
	var_279_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_279_bool != 0) {
		@@@var_0_object:IsAttacking(var_276_bool);
		var_276_bool = var_274_bool;
		return 2;
	}
	var_274_bool = 0;
	return 2;
}


