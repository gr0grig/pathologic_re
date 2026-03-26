// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,AddItem/3,AddItem/4,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,IsOverrideActive/1,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:hook|W:watch|W:alpha_pills|W:meradorm|W:beta_pills|W:monomicin|W:lockpick|W:rifle_ammo|W:revolver_ammo|W:samopal_ammo|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:idle|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier
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
// @TASK_3: vars=object params=1
// @EVENT_0: op=0x33f vars=object
// @EVENT_17: op=0x353 vars=object
// @EVENT_30: op=0x36b vars=object,object,bool
// @EVENT_40: op=0x387 vars=object
// @EVENT_42: op=0x39b vars=object,string
// @EVENT_26: op=0x3c0 vars=string
// @EVENT_41: op=0x3d9 vars=object
// @EVENT_7: op=0x3e2 vars=int
// @EVENT_6: op=0x405 vars=
// @EVENT_1: op=0x40c vars=object
// @TASK_4: vars=object,int,int,bool,float,int params=1
// @TASK_5: vars=bool,object,bool params=6
// @EVENT_6: op=0x6be vars=
// @EVENT_7: op=0x6f6 vars=int
// @EVENT_1: op=0x711 vars=object
// @EVENT_2: op=0x720 vars=object
// @EVENT_10: op=0x7a6 vars=object
// @EVENT_41: op=0x7b1 vars=object
// @STANDALONE_EVENT_16: op=0xaba vars=object,string
// @STANDALONE_EVENT_41: op=0xac7 vars=object
// @STANDALONE_EVENT_22: op=0xacd vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xad5 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x135,0x143,0x156,0x15c,0x168,0x17f,0x1f0,0x28e,0x29c,0x2a3,0x3c0,0x3d9,0x405,0x40c,0x41a,0x422,0x425,0x6b6,0x6be,0x6f6,0x711,0x720,0x794,0x7a6,0x7b1,0x7ba,0x7c5,0x969,0x970,0x980,0x989,0x993,0x9d8,0xab2,0xac7,0xacd,0xad5,0xadf,0xaff,0xb2f,0xb35,0xb77,0xb80,0xb88,0xb92,0xbe5,0xbec,0xc0f,0xc12,0xc14,0xc17,0xc19,0xc1c,0xc23,0xc26,0xc37,0xc3d,0xc40,0xc42,0xc45,0xc5f,0xc69

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3097(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_13_bool = var_20_object;
		func_3100(var_20_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_3106();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3097(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_367(var_15_int);
		}
		var_23_object = Obj();
		var_13_bool = var_23_object;
		func_3100(var_23_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2869(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2952(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_367(var_15_int);
		}
		var_66_object = Obj();
		var_13_bool = var_66_object;
		func_2962(var_66_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0;
	var_13_bool = var_19_object;
	var_14_object = var_20_object;
	var_15_bool = var_21_bool;
	func_3167(var_18_bool, var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_80_int = 0; var_81_object = Obj(); var_82_bool = 0;
		var_13_bool = var_81_object;
		var_15_bool = var_82_bool;
		func_3045(var_81_object, var_82_bool);
		var_80_int = var_17_int;
		var_114_bool = var_17_int > (int)0;
		if(var_114_bool != 0) {
			var_116_bool = var_17_int > (int)1;
			if(var_116_bool != 0) {
				func_367(var_17_int);
			}
			var_118_object = Obj();
			var_13_bool = var_118_object;
			func_3052(var_118_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3087(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_367(var_15_int);
		}
		var_13_bool = Obj();
		func_3090();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_object = var_18_object;
	var_14_bool = var_19_string;
	func_2783(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_367(var_16_int);
		var_46_object = Obj(); var_47_string = "";
		var_13_object = var_46_object;
		var_14_bool = var_47_string;
		func_2815(var_46_object, var_47_string);
	} else {
		var_122_int = 0; var_123_string = ""; var_124_object = Obj();
		var_14_bool = var_123_string;
		var_13_object = var_124_object;
		func_3092(var_124_object);
		var_122_int = var_16_int;
		var_126_bool = var_16_int > (int)0;
		if(var_126_bool == 0) goto Label_308;
		var_128_bool = var_16_int > (int)1;
		if(var_128_bool != 0) {
			func_367(var_16_int);
		}
		var_129_string = ""; var_130_object = Obj();
		var_14_bool = var_129_string;
		var_13_object = var_130_object;
		func_3095();
	}
Label_308:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2882(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_367(var_13_bool);
		var_24_string = "";
		var_13_bool = var_24_string;
		func_2898(var_24_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2840(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_367(var_13_bool);
		var_27_object = Obj();
		var_13_bool = var_27_object;
		func_2863(var_27_object);
	} else {
		var_29_object = Obj();
		var_13_bool = var_29_object;
		func_392(var_13_bool, var_29_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_object = Obj();
	var_13_bool = var_14_object;
	func_392(var_13_bool, var_14_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_15_bool = var_13_bool != (int)110;
	if(var_15_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_367(var_12_bool);
	func_3106();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	func_367(var_13_bool);
	var_13_bool = Obj();
	func_2759();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	RequestClearPath(var_13_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3097(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_770();
		}
		var_22_object = Obj();
		var_13_bool = var_22_object;
		func_3100(var_22_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2869(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2952(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_770();
		}
		var_65_object = Obj();
		var_13_bool = var_65_object;
		func_2962(var_65_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0;
	var_13_bool = var_19_object;
	var_14_object = var_20_object;
	var_15_bool = var_21_bool;
	func_3167(var_18_bool, var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_80_int = 0; var_81_object = Obj(); var_82_bool = 0;
		var_13_bool = var_81_object;
		var_15_bool = var_82_bool;
		func_3045(var_81_object, var_82_bool);
		var_80_int = var_17_int;
		var_114_bool = var_17_int > (int)0;
		if(var_114_bool != 0) {
			var_116_bool = var_17_int > (int)1;
			if(var_116_bool != 0) {
				func_770();
			}
			var_117_object = Obj();
			var_13_bool = var_117_object;
			func_3052(var_117_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3087(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_770();
		}
		var_13_bool = Obj();
		func_3090();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_object = var_18_object;
	var_14_bool = var_19_string;
	func_2783(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_770();
		var_45_object = Obj(); var_46_string = "";
		var_13_object = var_45_object;
		var_14_bool = var_46_string;
		func_2815(var_45_object, var_46_string);
	} else {
		var_121_int = 0; var_122_string = ""; var_123_object = Obj();
		var_14_bool = var_122_string;
		var_13_object = var_123_object;
		func_3092(var_123_object);
		var_121_int = var_16_int;
		var_125_bool = var_16_int > (int)0;
		if(var_125_bool == 0) goto Label_653;
		var_127_bool = var_16_int > (int)1;
		if(var_127_bool != 0) {
			func_770();
		}
		var_128_string = ""; var_129_object = Obj();
		var_14_bool = var_128_string;
		var_13_object = var_129_object;
		func_3095();
	}
Label_653:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2882(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_770();
		var_23_string = "";
		var_13_bool = var_23_string;
		func_2898(var_23_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_770();
	func_3106();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2840(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_770();
		var_26_object = Obj();
		var_13_bool = var_26_object;
		func_2863(var_26_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3097(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_974();
		}
		var_24_object = Obj();
		var_13_bool = var_24_object;
		func_3100(var_24_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2869(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2952(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_974();
		}
		var_67_object = Obj();
		var_13_bool = var_67_object;
		func_2962(var_67_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0;
	var_13_bool = var_19_object;
	var_14_object = var_20_object;
	var_15_bool = var_21_bool;
	func_3167(var_18_bool, var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_80_int = 0; var_81_object = Obj(); var_82_bool = 0;
		var_13_bool = var_81_object;
		var_15_bool = var_82_bool;
		func_3045(var_81_object, var_82_bool);
		var_80_int = var_17_int;
		var_114_bool = var_17_int > (int)0;
		if(var_114_bool != 0) {
			var_116_bool = var_17_int > (int)1;
			if(var_116_bool != 0) {
				func_974();
			}
			var_119_object = Obj();
			var_13_bool = var_119_object;
			func_3052(var_119_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3087(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_974();
		}
		var_13_bool = Obj();
		func_3090();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_object = var_18_object;
	var_14_bool = var_19_string;
	func_2783(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_974();
		var_47_object = Obj(); var_48_string = "";
		var_13_object = var_47_object;
		var_14_bool = var_48_string;
		func_2815(var_47_object, var_48_string);
	} else {
		var_123_int = 0; var_124_string = ""; var_125_object = Obj();
		var_14_bool = var_124_string;
		var_13_object = var_125_object;
		func_3092(var_125_object);
		var_123_int = var_16_int;
		var_127_bool = var_16_int > (int)0;
		if(var_127_bool == 0) goto Label_959;
		var_129_bool = var_16_int > (int)1;
		if(var_129_bool != 0) {
			func_974();
		}
		var_130_string = ""; var_131_object = Obj();
		var_14_bool = var_130_string;
		var_13_object = var_131_object;
		func_3095();
	}
Label_959:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2882(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_974();
		var_25_string = "";
		var_13_bool = var_25_string;
		func_2898(var_25_string);
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	func_974();
	var_13_bool = Obj();
	func_2759();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0);
	var_19_bool = var_13_bool != (int)111;
	if(var_19_bool != 0) {
		return 4;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_0_bool;
	func_2149(var_20_bool, var_21_object);
	var_54_bool = var_20_bool == 0; //@nz
	if(var_54_bool != 0) {
		func_974();
		return 4;
	}
	GetDirection(var_16_cvector);
	var_57_cvector = CVector(0,0,0); var_58_object = Obj();
	var_58_object = var_0_bool;
	func_2003(var_57_cvector, var_58_object);
	var_57_cvector = var_17_cvector;
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_16_cvector = var_64_cvector;
	var_17_cvector = var_65_cvector;
	func_2451(var_63_float, var_64_cvector, var_65_cvector);
	var_88_bool = var_63_float < (float)0.4999999701976776;
	if(var_88_bool != 0) {
		var_89_object = Obj();
		var_89_object = var_0_bool;
		func_2299(var_89_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_974();
	func_3106();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2840(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_974();
		var_28_object = Obj();
		var_13_bool = var_28_object;
		func_2863(var_28_object);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_1796(var_12_bool);
	func_3106();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_int)
{
	var_15_bool = var_13_int == (int)1;
	if(var_15_bool != 0) {
		var_16_object = Obj();
		var_16_object = var_1_bool;
		func_2494(var_16_object);
	} else {
		var_21_int = 0;
		var_13_int = var_21_int;
		func_1940(var_12_bool, var_13_int, var_21_int);
	}
	return 0;
	
}


task_5_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object)
{
	var_14_bool = 0;
	var_14_bool = 0;
	var_15_bool = var_1_bool == var_13_object;
	if(var_15_bool != 0) {
		var_16_bool = var_2_bool == 0; //@nz
		if(var_16_bool != 0) {
			var_14_bool = 1;
		}
	}
	if(var_14_bool != 0) {
		var_2_bool = true;
		var_17_object = Obj();
		var_13_object = var_17_object;
		func_2315(var_17_object);
	}
	return 0;
}


task_5_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object)
{
	var_14_bool = 0;
	var_14_bool = 0;
	var_15_bool = var_1_bool == var_13_object;
	if(var_15_bool != 0) {
		var_16_bool = var_2_bool;
		if(var_16_bool != 0) {
			var_14_bool = 1;
		}
	}
	if(var_14_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_5_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object)
{
	RequestClearPath(var_13_object);
	return 0;
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object)
{
	func_1796(var_13_object);
	var_13_object = Obj();
	func_2759();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0;
	var_18_bool = var_14_string == "health";
	if(var_18_bool != 0) {
		GetProperty("health", var_16_float);
		var_21_bool = var_16_float <= (int)0;
		if(var_21_bool != 0) {
			SignalDeath(var_13_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_2738(var_14_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0;
	var_13_object = var_17_object;
	var_14_int = var_18_int;
	var_15_float = var_19_float;
	func_2217(var_17_object, var_18_int, var_19_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	var_13_object = var_19_object;
	var_14_int = var_20_int;
	var_15_float = var_21_float;
	var_17_cvector = var_22_cvector;
	var_18_cvector = var_23_cvector;
	func_2285(var_21_float, var_22_cvector, var_23_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	SensePlayerOnly((bool)1);
	func_3143();
	func_171();
	
Label_165:
	var_2_bool = false;
	func_432(var_11_object, var_12_bool);
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_0(var_15_object)
{
	EventDisable(0);
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_33(var_16_object);
	var_96_object = Obj();
	var_15_object = var_96_object;
	func_3177(var_96_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_2564(var_158_string)
{
	var_159_object = Obj(); var_160_int = 0; var_161_bool = 0; var_162_object = Obj(); var_163_int = 0; var_164_bool = 0;
	CreateInvItem(var_162_object);
	@@var_162_object:SetItemName(var_158_string);
	@@var_162_object:SetProperty("Organ", (int)1);
	@@var_162_object:GetItemID(var_163_int);
	AddItem(var_164_bool, var_162_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_517(var_125_bool)
{
	var_125_bool = 0;
	return 0;
}


func_519(var_119_object, var_120_cvector)
{
	var_121_object = Obj(); var_122_object = Obj();
	FindShiftedPathTo(var_122_object, var_120_cvector);
	var_122_object = var_119_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3087(var_16_int)
{
	var_16_int = 0;
	return 0;
}


func_3090()
{
	return 0;
}


func_3092(var_123_int)
{
	var_123_int = 0;
	return 0;
}


func_2581()
{
	var_152_int = 0;
	func_2514(var_152_int);
	var_157_bool = var_152_int != (int)1;
	if(var_157_bool != 0) {
		return 0;
	}
	var_158_string = "";
	func_2564("liver");
	var_169_string = "";
	func_2564("kidney");
	var_170_string = "";
	func_2564("heart");
	var_171_string = "";
	func_2564("blood");
	return 0;
}


func_3095()
{
	return 0;
}


func_3097(var_16_int)
{
	var_16_int = 2;
	return 0;
}


func_1050(var_121_object)
{
	var_128_object = Obj(); var_129_bool = 0; var_130_float = 0;
	var_121_object = var_128_object;
	func_1064(var_124_int, var_125_bool, var_126_float, var_127_int, var_121_object, var_128_object, (bool)1, (float)180.0);
	return 0;
}


func_3100(var_24_object)
{
	var_25_object = Obj();
	var_24_object = var_25_object;
	func_3151(var_25_object);
	return 0;
}


func_33(var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = var_16_object == 0; //@ne
	if(var_37_bool != 0) {
		var_38_string = "";
		func_124("fdie");
	} else {
		@@var_16_object:GetPosition(var_27_cvector);
		GetPosition(var_28_cvector);
		GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_70_float = GetByIndex(var_30_cvector, 0);
		var_71_float = GetByIndex(var_29_cvector, 0);
		var_72_float = var_70_float * var_71_float;
		var_73_float = GetByIndex(var_30_cvector, 2);
		var_74_float = GetByIndex(var_29_cvector, 2);
		var_75_float = var_73_float * var_74_float;
		var_76_int = var_72_float + var_75_float;
		var_78_bool = var_76_int >= (int)0;
		if(var_78_bool != 0) {
			var_31_string = "fdie";
		} else {
				var_31_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_16_object = var_32_object;
		var_81_bool = IsFuncExist(var_16_object, "GetScriptProperty", (int)2);
		if(var_81_bool != 0) {
			@@var_16_object:HasScriptProperty(var_33_bool, "Owner");
			var_83_bool = var_33_bool;
			if(var_83_bool != 0) {
				@@var_16_object:GetScriptProperty(var_32_object, "Owner");
				var_85_bool = var_32_object == 0; //@ne
				if(var_85_bool != 0) {
					var_16_object = var_32_object;
				}
			}
		}
		var_88_bool = IsFuncExist(var_32_object, "@GetEyesHeight", (int)1);
		if(var_88_bool != 0) {
			@@var_32_object:GetEyesHeight(var_35_float);
			var_36_cvector = CVector(0.0, 0.0, 0.0);
			var_89_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_89_float;
			SetByIndex(var_36_cvector, 1) = var_89_float;
			LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = 1;
		} else {
			var_34_bool = 0;

		}
		var_91_string = "";
		var_31_string = var_91_string;
		func_2352(var_91_string);
		PlayAnimation("all", var_31_string);
		WaitForAnimEnd();
		var_93_bool = var_34_bool;
		if(var_93_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_31_string);
		RemoveEnvelope();
		var_32_object = 0;
	}
	return 20;
	
}


func_3106()
{
	return 0;
}


func_1058(var_465_float)
{
	var_465_float = 0.029999999329447746;
	return 0;
}


func_3107(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_1061(var_472_int)
{
	var_472_int = 0;
	return 0;
}


func_1574(var_0_bool, var_371_bool)
{
	var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_float = 0; var_376_float = 0; var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_float = 0; var_381_float = 0;
	var_382_bool = 0; var_383_object = Obj();
	var_383_object = var_0_bool;
	func_2149(var_382_bool, var_383_object);
	var_384_bool = var_382_bool == 0; //@nz
	if(var_384_bool != 0) {
		var_371_bool = 0;
		return 10;
	}
	var_385_bool = 0;
	func_1663(var_381_float, var_385_bool);
	if(var_385_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_377_cvector);
		GetPFPosition(var_378_cvector);
		var_379_cvector = var_377_cvector - var_378_cvector;
		var_380_float = var_379_cvector | var_379_cvector;
		@@@var_0_bool:GetAttackDistance(var_381_float);
		var_381_float = var_381_float + (int)50;
		var_387_float = var_381_float * var_381_float;
		var_371_bool = var_380_float <= var_387_float;
		return 10;
	}
	var_371_bool = 0;
	return 10;
}


func_3110()
{
	return 0;
}


func_1064(var_0_bool, var_3_object, var_5_object, var_128_object, var_129_bool, var_130_float, var_205_bool, var_297_bool)
{
	var_131_float = 0; var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_bool = 0; var_135_bool = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_bool = 0; var_141_float = 0; var_142_float = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_bool = 0; var_146_bool = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_cvector = CVector(0,0,0); var_151_bool = 0; var_152_float = 0;
	func_1293(var_150_cvector, var_151_bool, var_152_float);
	var_5_object = 0;
	var_177_bool = IsFuncExist(var_128_object, "@GetAttackDistance", (int)1);
	if(var_177_bool != 0) {
		@@var_128_object:GetAttackDistance(var_142_float);
		var_142_float = var_142_float + (int)50;
	} else {
							var_130_float = var_142_float;
	}
	var_180_bool = var_142_float >= (int)150;
	if(var_180_bool != 0) {
		var_142_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_128_object;
	IsPlayerActor(var_0_bool, var_145_bool);
	var_181_bool = var_145_bool;
	if(var_181_bool != 0) {
		PlayGlobalMusic("attack");
		var_183_object = Obj();
		func_2393(var_183_object);
		SendPlayerEnemy(var_128_object, var_183_object);
	}
	var_186_bool = var_129_bool;
	if(var_186_bool != 0) {
		var_146_bool = 0;
	} else {
						var_146_bool = 1;

	}
	var_147_float = (float)400.0 + var_142_float;
	
Label_1104:
	var_188_bool = 0;
	var_188_bool = 0;
	var_189_bool = 0; var_190_object = Obj();
	var_190_object = var_0_bool;
	func_2149(var_189_bool, var_190_object);
	if(var_189_bool != 0) {
		var_191_bool = var_3_object == 0; //@nz
		if(var_191_bool != 0) {
			var_188_bool = 1;
		}
	}
	if(var_188_bool != 0) {
		func_1706(var_152_float);
		@@@var_0_bool:GetPFPosition(var_143_cvector);
		GetPFPosition(var_144_cvector);
		var_148_cvector = var_143_cvector - var_144_cvector;
		var_149_float = var_148_cvector | var_148_cvector;
		var_197_float = var_147_float * var_147_float;
		var_198_bool = var_149_float >= var_197_float;
		if(var_198_bool != 0) {
			var_199_bool = 0; var_200_object = Obj(); var_201_float = 0; var_202_float = 0; var_203_bool = 0; var_204_bool = 0;
			var_200_object = var_0_bool;
			var_142_float = var_201_float;
			TaskCall(5);
			func_1733(var_207_bool, var_199_bool, var_200_object, var_201_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_282_bool = var_205_bool == 0; //@nz
			if(var_282_bool != 0) {
			} else {
				var_146_bool = 0;
		} else {
				var_288_float = var_130_float * var_130_float;
				var_289_bool = var_149_float >= var_288_float;
				if(var_289_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_150_cvector);
					CanReachByPF(var_151_bool, var_150_cvector);
					var_290_bool = var_151_bool == 0; //@nz
					if(var_290_bool != 0) {
						var_291_bool = 0; var_292_object = Obj(); var_293_float = 0; var_294_float = 0; var_295_bool = 0; var_296_bool = 0;
						var_292_object = var_0_bool;
						var_142_float = var_293_float;
						TaskCall(5);
						func_1733(var_299_bool, var_291_bool, var_292_object, var_293_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_300_bool = var_297_bool == 0; //@nz
						if(var_300_bool != 0) {
							goto Label_1276;
						}
						var_146_bool = 0;
						goto Label_1104;
					}
					var_301_bool = var_146_bool == 0; //@nz
					if(var_301_bool != 0) {
						var_302_object = Obj();
						var_302_object = var_0_bool;
						func_2299(var_302_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1706(var_152_float);
						StopAsync();
						var_146_bool = 1;
						var_313_bool = 0; var_314_object = Obj();
						var_314_object = var_0_bool;
						func_2149(var_313_bool, var_314_object);
						var_315_bool = var_313_bool == 0; //@nz
						if(var_315_bool != 0) {
							goto Label_1276;
						}
					}
					rand(var_152_float);
					var_316_bool = 0;
					var_318_bool = var_152_float < (float)0.25;
					if(var_318_bool != 1) {
						var_319_bool = 0;
						func_1663((bool)1, var_319_bool);
						if(var_319_bool != 1) {
							var_316_bool = 0;
						}
					}
					if(var_316_bool != 0) {
						Face(var_0_bool);
						func_1713();
						PlayAnimation("all", "attack_stay");
						var_356_bool = 0; var_357_float = 0;
						var_130_float = var_357_float;
						func_1531(var_152_float, var_356_bool, var_357_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1706(var_152_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_578_bool = 0;
						func_1663(var_152_float, var_578_bool);
						var_579_bool = var_578_bool == 0; //@nz
						if(var_579_bool == 0) goto Label_1266;
						var_580_bool = 0; var_581_object = Obj();
						var_581_object = var_0_bool;
						func_2149(var_580_bool, var_581_object);
						var_582_bool = var_580_bool == 0; //@nz
						if(var_582_bool != 0) {
							goto Label_1276;
						}
						@@@var_0_bool:GetPFPosition(var_143_cvector);
						GetPFPosition(var_144_cvector);
						var_148_cvector = var_143_cvector - var_144_cvector;
						var_149_float = var_148_cvector | var_148_cvector;
						var_583_float = var_130_float * var_130_float;
						var_584_bool = var_149_float < var_583_float;
						if(var_584_bool == 0) goto Label_1266;
						var_585_bool = 0; var_586_float = 0;
						var_130_float = var_586_float;
						func_1367(var_151_bool, var_152_float, var_585_bool, var_586_float);
						var_587_bool = var_585_bool == 0; //@nz
						if(var_587_bool == 0) goto Label_1266;
						goto Label_1276;
				}
					var_588_bool = 0; var_589_float = 0;
					var_130_float = var_589_float;
					func_1367(var_151_bool, var_152_float, var_588_bool, var_589_float);
					var_590_bool = var_588_bool == 0; //@nz
					if(var_590_bool != 0) {
						goto Label_1276;
					}
					var_146_bool = 1;

				}
			Label_1266:
				goto Label_1275;
		}
		Label_1275:
			goto Label_1104;

		}
	}
Label_1276:
	WaitForAnimEnd();
	var_283_object = var_3_object;
	if(var_283_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_286_bool = var_145_bool;
	if(var_286_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_3112(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	CanSee(var_29_bool, var_27_object);
	var_26_bool = 1;
	var_30_bool = var_29_bool;
	if(var_30_bool != 1) {
		var_31_float = 0; var_32_object = Obj();
		var_27_object = var_32_object;
		func_2010(var_31_float, var_32_object);
		var_40_bool = var_31_float <= (int)2250000;
		if(var_40_bool != 1) {
			var_26_bool = 0;
		}
	}
	return 2;
}


func_2605()
{
	var_107_bool = 0; var_108_bool = 0;
	ClearSubContainer((int)0);
	var_110_int = 0; var_111_int = 0;
	var_113_int = 0;
	func_2485(var_113_int);
	var_120_float = var_113_int * (int)10;
	var_111_int = (int)10 + var_120_float;
	func_2533((int)0, var_111_int);
	var_138_string = ""; var_139_int = 0; var_140_int = 0;
	func_2326("hook", (int)1, (int)4);
	var_149_string = ""; var_150_int = 0; var_151_int = 0;
	func_2326("watch", (int)1, (int)10);
	return 2;
}


func_3127(var_54_object)
{
	var_55_object = Obj();
	var_54_object = var_55_object;
	func_2944(var_55_object);
	return 0;
}


func_2108(var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_bool = 0;
	@@var_42_object:IsDead(var_44_bool);
	var_44_bool = var_41_bool;
	return 2;
}


func_3133(var_43_bool)
{
	var_43_bool = 0;
	return 0;
}


func_3136()
{
	return 0;
}


func_2113(var_30_bool, var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj();
	var_36_bool = var_31_object == 0; //@ne
	if(var_36_bool != 0) {
		var_30_bool = 0;
		return 4;
	}
	var_37_bool = 0;
	var_37_bool = 0;
	var_40_bool = IsFuncExist(var_31_object, "IsDead", (int)1);
	if(var_40_bool != 0) {
		var_41_bool = 0; var_42_object = Obj();
		var_31_object = var_42_object;
		func_2108(var_41_bool, var_42_object);
		if(var_41_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_30_bool = 0;
		return 4;
	}
	GetScene(var_34_object);
	var_45_bool = var_34_object == 0; //@ne
	if(var_45_bool != 0) {
		var_30_bool = 0;
		return 4;
	}
	@@var_31_object:GetScene(var_35_object);
	var_46_bool = var_34_object != var_35_object;
	if(var_46_bool != 0) {
		var_30_bool = 0;
		return 4;
	}
	var_30_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1602(var_369_bool)
{
	var_370_bool = 0;
	var_370_bool = 0;
	var_371_bool = 0;
	func_1574(var_370_bool, var_371_bool);
	if(var_371_bool != 0) {
		var_388_bool = 0;
		func_1618(var_369_bool, var_370_bool, var_388_bool);
		if(var_388_bool != 0) {
			var_370_bool = 1;
		}
	}
	if(var_370_bool != 0) {
		var_369_bool = 1;
		return 0;
	}
	var_369_bool = 0;
	return 0;
}


func_3138(var_21_bool)
{
	var_21_bool = 0;
	return 0;
}


func_3141()
{
	return 0;
}


func_3143()
{
	var_14_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_15_bool = 0;
	func_2633((bool)1);
	return 0;
}


func_2633(var_15_bool)
{
	var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0;
	ClearSubContainer((int)0);
	func_2485((int)0);
	var_23_int = var_21_int;
	var_29_bool = var_15_bool;
	if(var_29_bool != 0) {
		var_30_string = ""; var_31_int = 0; var_32_int = 0; var_33_int = 0;
		func_2337("alpha_pills", (int)1, (int)2, (int)4);
		var_46_string = ""; var_47_int = 0; var_48_int = 0; var_49_int = 0;
		func_2337("meradorm", (int)2, (int)3, (int)3);
		var_51_bool = var_21_int >= (int)3;
		if(var_51_bool != 0) {
			var_52_string = ""; var_53_int = 0; var_54_int = 0;
			func_2326("beta_pills", (int)1, (int)4);
		}
		var_62_bool = var_21_int >= (int)8;
		if(var_62_bool != 0) {
			var_63_string = ""; var_64_int = 0; var_65_int = 0; var_66_int = 0;
			func_2337("monomicin", (int)1, (int)2, (int)2);
		} else {
			var_68_bool = var_21_int >= (int)4;
			if(var_68_bool == 0) goto Label_2686;
			var_69_string = ""; var_70_int = 0; var_71_int = 0;
			func_2326("monomicin", (int)1, (int)2);
	}
		var_72_string = ""; var_73_int = 0; var_74_int = 0;
		func_2326("lockpick", (int)1, (int)4);
		var_75_string = ""; var_76_int = 0; var_77_int = 0;
		func_2326("rifle_ammo", (int)1, (int)2);
		var_78_string = ""; var_79_int = 0; var_80_int = 0;
		func_2326("revolver_ammo", (int)1, (int)2);
		var_81_string = ""; var_82_int = 0; var_83_int = 0; var_84_int = 0;
		func_2337("samopal_ammo", (int)1, (int)2, (int)2);
		var_86_bool = var_21_int >= (int)8;
		if(var_86_bool != 0) {
			var_87_string = ""; var_88_int = 0; var_89_int = 0; var_90_int = 0;
			func_2337("monomicin", (int)1, (int)2, (int)2);
			goto Label_2732;
		}
		var_92_bool = var_21_int >= (int)4;
		if(var_92_bool == 0) goto Label_2732;
		var_93_string = ""; var_94_int = 0; var_95_int = 0;
		func_2326("monomicin", (int)1, (int)2);
	}
Label_2686:
	goto Label_2732;
	
Label_2732:
	return 6;
	
}


func_3151(var_25_object)
{
	var_26_bool = 0; var_27_bool = 0;
	var_28_bool = GlobalVars[0];
	if(var_28_bool != 0) {
		IsOverrideActive(var_27_bool);
		var_29_bool = var_27_bool == 0; //@nz
		if(var_29_bool != 0) {
			var_30_object = Obj();
			var_25_object = var_30_object;
			func_2520(var_30_object);
		}
		return 2;
	EMIT "GOTO 0xc5c";
	}
	return 2;
}


func_1618(var_0_bool, var_4_object, var_388_bool)
{
	var_389_object = Obj(); var_390_bool = 0; var_391_float = 0; var_392_cvector = CVector(0,0,0); var_393_cvector = CVector(0,0,0); var_394_object = Obj(); var_395_bool = 0; var_396_float = 0; var_397_cvector = CVector(0,0,0); var_398_cvector = CVector(0,0,0);
	GetScene(var_394_object);
	var_395_bool = 0;
	
Label_1622:
	var_399_cvector = CVector(0,0,0); var_400_object = Obj();
	var_400_object = var_0_bool;
	func_2003(var_399_cvector, var_400_object);
	var_405_int = -var_399_cvector;
	FindDirLength(var_396_float, var_405_int, var_4_object);
	var_406_bool = var_396_float < var_4_object;
	if(var_406_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_397_cvector);
		GetPFPosition(var_398_cvector);
		WaitForAnimEnd();
		func_1706(var_398_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_395_bool = 1;
		var_410_bool = 0;
		func_1574(var_398_cvector, var_410_bool);
		var_411_bool = var_410_bool == 0; //@nz
		if(var_411_bool != 0) {
			goto Label_1660;
		}
		goto Label_1622;
	}
Label_1660:
	var_395_bool = var_388_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_3165(var_58_bool)
{
	var_58_bool = 0;
	return 0;
}


func_3167(var_18_bool, var_19_object, var_20_object, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_float = 0; var_26_bool = 0;
	var_19_object = var_23_object;
	var_20_object = var_24_object;
	var_21_bool = var_26_bool;
	func_3058(var_22_bool, var_23_object, var_24_object, (float)700.0, var_26_bool);
	var_22_bool = var_18_bool;
	return 0;
}


func_2149(var_26_bool, var_27_object)
{
	var_28_int = 0; var_29_int = 0;
	var_30_bool = 0; var_31_object = Obj();
	var_27_object = var_31_object;
	func_2113(var_30_bool, var_31_object);
	var_47_bool = var_30_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_26_bool = 0;
		return 2;
	}
	var_48_bool = 0; var_49_object = Obj(); var_50_string = "";
	var_27_object = var_49_object;
	func_2023(var_48_bool, var_49_object, "noaccess");
	var_57_bool = var_48_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_26_bool = 1;
		return 2;
	}
	@@var_27_object:GetProperty("noaccess", var_29_int);
	var_26_bool = var_29_int == (int)0;
	return 2;
}


func_3177(var_96_object)
{
	var_97_bool = 0; var_98_object = Obj();
	var_96_object = var_98_object;
	func_2018(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		var_101_object = Obj();
		func_2393(var_101_object);
		ReportReputationChange(var_96_object, var_101_object, (float)-0.10000000149011612, (bool)1);
		var_106_bool = 0;
		var_106_bool = 1;
		func_2605();
	}
	func_2581();
	var_172_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_124(var_38_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_39_string = "";
	var_38_string = var_39_string;
	func_2352(var_39_string);
	PlayAnimation("all", var_38_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_38_string);
	RemoveEnvelope();
	return 0;
}


func_2173(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = "";
	var_45_bool = var_30_object == 0; //@ne
	if(var_45_bool != 0) {
		return 14;
	}
	IsDead(var_38_bool);
	var_46_bool = var_38_bool;
	if(var_46_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_39_int);
	var_48_bool = var_39_int < (int)0;
	if(var_48_bool != 0) {
		return 14;
	}
	@@var_30_object:GetPosition(var_40_cvector);
	GetPosition(var_41_cvector);
	GetDirection(var_42_cvector);
	var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_51_float = var_49_float * var_50_float;
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	var_54_float = var_52_float * var_53_float;
	var_55_int = var_51_float + var_54_float;
	var_57_bool = var_55_int >= (int)0;
	if(var_57_bool != 0) {
		var_44_string = "fhit";
	} else {
		var_44_string = "bhit";
	}
	var_60_int = var_44_string + "1";
	var_62_int = var_44_string + "2";
	FadeSecondaryAnimation("hit_react", var_60_int, var_62_int, (int)-10);
	return 14;
	
}


func_1663(var_0_bool, var_319_bool)
{
	var_320_bool = 0; var_321_bool = 0;
	var_324_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_324_bool != 0) {
		@@@var_0_bool:IsAttacking(var_321_bool);
		var_321_bool = var_319_bool;
		return 2;
	}
	var_319_bool = 0;
	return 2;
}


func_1674(var_2_bool, var_5_object)
{
	var_436_float = 0; var_437_int = 0; var_438_float = 0; var_439_int = 0;
	var_440_bool = var_2_bool == 0; //@nz
	if(var_440_bool != 0) {
		return 4;
	}
	var_441_object = var_5_object;
	if(var_441_object != 0) {
		var_5_object = var_5_object + (int)-1;
		var_444_bool = var_5_object > (int)0;
		if(var_444_bool != 0) {
			return 4;
		}
	}
	rand(var_438_float);
	var_445_float = 0;
	func_1724(var_445_float);
	var_446_bool = var_438_float < var_445_float;
	if(var_446_bool != 0) {
		irand(var_439_int, var_2_bool);
		var_439_int = var_439_int + (int)1;
		var_449_int = "attack" + var_439_int;
		Speak(var_449_int);
		var_450_int = 0;
		func_1722(var_450_int);
		var_5_object = var_450_int;
	}
	return 4;
}


func_2217(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0);
	var_38_bool = 0;
	var_38_bool = 0;
	var_39_bool = 0;
	var_39_bool = 0;
	var_40_object = var_17_object;
	if(var_40_object != 0) {
		var_42_bool = var_18_int != (int)4;
		if(var_42_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		var_44_bool = var_18_int != (int)5;
		if(var_44_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
		var_47_cvector = CVector(0,0,0); var_48_object = Obj();
		var_17_object = var_48_object;
		func_2003(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_2399(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		CreateVectorVector(var_30_object);
		var_31_int = 1;

	Label_2246:
		var_59_int = "hit" + var_31_int;
		GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector);
		var_60_bool = var_32_bool == 0; //@nz
		if(var_60_bool != 0) {
		} else {
			var_108_int = var_34_cvector | var_29_cvector;
			var_110_bool = var_108_int >= (float)0.7071067690849304;
			if(var_110_bool != 0) {
				@@var_30_object:add(var_33_cvector);
			}
			var_31_int = var_31_int + (int)1;
			goto Label_2246;
		}
		@@var_30_object:size(var_35_int);
		var_61_int = var_35_int;
		if(var_61_int != 0) {
			irand(var_36_int, var_35_int);
			@@var_30_object:get(var_37_cvector, var_36_int);
			var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
			var_17_object = var_62_object;
			var_18_int = var_63_int;
			var_19_float = var_64_float;
			var_37_cvector = var_65_cvector;
			var_66_cvector = -var_29_cvector;
			func_2285(var_64_float, var_65_cvector, var_66_cvector);
			return 18;
		}
		var_30_object = 0;
	}
	var_107_object = Obj();
	var_17_object = var_107_object;
	func_2173(var_107_object);
	return 18;
	
}


func_1706(var_0_bool)
{
	var_192_object = Obj();
	var_192_object = var_0_bool;
	func_2494(var_192_object);
	return 0;
}


func_171()
{
	var_96_bool = 0;
	func_2310(var_96_bool);
	var_99_bool = var_96_bool == 0; //@nz
	if(var_99_bool != 0) {
		func_3106();
	}
	return 0;
}


func_2733(var_131_int, var_132_string)
{
	var_133_int = 0; var_134_int = 0;
	GetInvItemByName(var_134_int, var_132_string);
	var_134_int = var_131_int;
	return 2;
}


func_1711(var_533_int)
{
	var_533_int = 0;
	return 0;
}


func_689()
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_bool = 0; var_132_float = 0; var_133_bool = 0; var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_bool = 0; var_139_float = 0; var_140_bool = 0;
	WaitForAnimEnd();
	var_141_bool = 0;
	func_2310(var_141_bool);
	var_142_bool = var_141_bool == 0; //@nz
	if(var_142_bool != 0) {
		return 14;
	}
	func_2918((int)0);
	var_143_int = var_134_int;
	var_135_int = 0;
	
Label_703:
	var_156_bool = 0;
	var_156_bool = 0;
	var_158_bool = var_135_int < (int)5;
	if(var_158_bool != 0) {
		var_159_bool = 0;
		func_2310(var_159_bool);
		if(var_159_bool != 0) {
			var_156_bool = 1;
		}
	}
	if(var_156_bool != 0) {
		irand(var_136_int, (int)3);
		var_162_bool = var_136_int == (int)0;
		if(var_162_bool != 0) {
			var_163_int = var_134_int;
			if(var_163_int == 0) goto Label_736;
			irand(var_137_int, var_134_int);
			var_165_string = ""; var_166_int = 0;
			var_137_int = var_166_int;
			func_2911(var_165_string, var_166_int);
			PlayAnimation("all", var_165_string);
			WaitForAnimEnd(var_138_bool);
			var_167_bool = var_138_bool == 0; //@nz
			if(var_167_bool != 0) {
			} else {
		} else {
				var_172_bool = var_136_int == (int)1;
				if(var_172_bool != 0) {
					rand(var_139_float, (int)4);
					var_175_int = var_139_float + (int)1;
					Sleep(var_175_int, var_140_bool);
					var_176_bool = var_140_bool == 0; //@nz
					if(var_176_bool != 0) {
						goto Label_765;
					}
					goto Label_754;
				}
				var_177_int = var_135_int;
				if(var_177_int == 0) goto Label_754;
				goto Label_765;
		}
		Label_754:
			var_168_bool = 0;
			func_768(var_168_bool);
			var_169_bool = var_168_bool == 0; //@nz
			if(var_169_bool != 0) {
				goto Label_765;
			}
			ResetAAS();
			var_135_int = var_135_int + (int)1;
			goto Label_703;

		}
	}
Label_765:
	ResetAAS();
	return 14;
	
}


func_1713()
{
	var_325_string = "";
	func_2352("attack_stay");
	return 0;
}


func_2738(var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	TaskCall(0);
	func_0(var_15_object);
	TaskReturn();
	return 0;
}


func_1718()
{
	return 0;
}


func_1720(var_558_bool)
{
	var_558_bool = 1;
	return 0;
}


func_1722(var_450_int)
{
	var_450_int = 1;
	return 0;
}


func_1724(var_445_float)
{
	var_445_float = 0.5;
	return 0;
}


func_1733(var_2_bool, var_199_bool, var_200_object, var_201_float, var_202_float, var_203_bool, var_204_bool)
{
	var_208_bool = 0; var_209_bool = 0; var_210_bool = 0; var_211_bool = 0;
	var_212_object = Obj();
	var_200_object = var_212_object;
	func_2494(var_212_object);
	SetTimer((int)1, (int)5);
	CanSee(var_210_bool, var_200_object);
	var_215_bool = var_210_bool;
	if(var_215_bool != 0) {
		var_2_bool = true;
		var_216_object = Obj();
		var_200_object = var_216_object;
		func_2315(var_216_object);
	} else {
		var_2_bool = false;
	}
	var_223_bool = 0; var_224_object = Obj();
	var_200_object = var_224_object;
	func_2018(var_223_bool, var_224_object);
	if(var_223_bool != 0) {
		var_227_object = Obj();
		func_2393(var_227_object);
		SendPlayerEnemy(var_200_object, var_227_object);
	}
	var_228_bool = 0; var_229_object = Obj(); var_230_float = 0; var_231_float = 0; var_232_bool = 0; var_233_bool = 0;
	var_200_object = var_229_object;
	var_201_float = var_230_float;
	var_202_float = var_231_float;
	var_203_bool = var_232_bool;
	var_204_bool = var_233_bool;
	func_1838(var_210_bool, var_211_bool, var_228_bool, var_229_object, var_230_float, var_231_float, var_232_bool, var_233_bool);
	var_228_bool = var_211_bool;
	var_279_bool = var_2_bool;
	if(var_279_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_211_bool = var_199_bool;
	return 4;
	
}


func_2783(var_17_bool, var_18_object, var_19_string)
{
	var_21_bool = var_19_string == "unholster";
	if(var_21_bool != 0) {
		var_22_bool = 0; var_23_object = Obj();
		var_18_object = var_23_object;
		func_3107(var_23_object);
		var_22_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0xafd";
	}
	var_25_bool = var_19_string == "player_shot";
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_18_object = var_27_object;
		func_3112(var_26_bool, var_27_object);
		var_26_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0xafd";
	}
	var_42_bool = var_19_string == "battle";
	if(var_42_bool != 0) {
		var_43_bool = 0; var_44_object = Obj();
		var_18_object = var_44_object;
		func_3133(var_44_object);
		var_43_bool = var_17_bool;
		return 0;
	}
	var_17_bool = 0;
	return 0;
}


func_2285(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	GetScene(var_26_object);
	AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	var_30_object = Obj();
	var_19_object = var_30_object;
	func_2173(var_30_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2299(var_89_object)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0);
	@@var_89_object:GetPosition(var_93_cvector);
	GetPosition(var_94_cvector);
	var_95_cvector = var_93_cvector - var_94_cvector;
	var_96_float = GetByIndex(var_95_cvector, 0);
	var_97_float = GetByIndex(var_95_cvector, 2);
	RotateAsync(var_96_float, var_97_float);
	return 6;
}


func_2815(var_47_object, var_48_string)
{
	var_50_bool = var_48_string == "unholster";
	if(var_50_bool != 0) {
		var_47_object = Obj();
		func_3110();
	} else {
		var_53_bool = var_48_string == "player_shot";
		if(var_53_bool != 0) {
			var_54_object = Obj();
			var_47_object = var_54_object;
			func_3127(var_54_object);
			goto Label_2839;
		}
		var_121_bool = var_48_string == "battle";
		if(var_121_bool == 0) goto Label_2839;
		var_47_object = Obj();
		func_3136();
	}
Label_2839:
	return 0;
	
}


func_768(var_168_bool)
{
	var_168_bool = 1;
	return 0;
}


func_770()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1796(var_2_bool)
{
	KillTimer((int)1);
	var_15_bool = var_2_bool;
	if(var_15_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_1962(var_13_object);
	return 0;
}


func_2310(var_96_bool)
{
	var_97_bool = 0; var_98_bool = 0;
	IsLoaded(var_98_bool);
	var_98_bool = var_96_bool;
	return 2;
}


func_775(var_0_bool, var_56_object)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0;
	var_0_bool = var_56_object;
	func_826(var_63_bool);
	GetDirection(var_61_cvector);
	var_71_cvector = CVector(0,0,0); var_72_object = Obj();
	var_72_object = var_0_bool;
	func_2003(var_71_cvector, var_72_object);
	var_71_cvector = var_62_cvector;
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	var_61_cvector = var_78_cvector;
	var_62_cvector = var_79_cvector;
	func_2451(var_77_float, var_78_cvector, var_79_cvector);
	var_102_bool = var_77_float < (int)0;
	if(var_102_bool != 0) {
		var_103_object = Obj();
		var_103_object = var_0_bool;
		func_2299(var_103_object);
		var_63_bool = 1;
	} else {
		Sleep((float)1.5, var_63_bool);
	}
	var_112_bool = var_63_bool;
	if(var_112_bool != 0) {
		var_113_object = Obj();
		var_113_object = var_0_bool;
		func_2299(var_113_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_2315(var_17_object)
{
	var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0);
	@@var_17_object:GetEyesHeight(var_20_float);
	var_21_cvector = CVector(0.0, 0.0, 0.0);
	var_22_float = GetByIndex(var_21_cvector, 1);
	var_20_float = var_22_float;
	SetByIndex(var_21_cvector, 1) = var_22_float;
	LookAsync(var_17_object, "head", var_21_cvector);
	return 4;
}


func_1293(var_1_bool, var_2_bool, var_4_object)
{
	var_153_bool = 0; var_154_bool = 0; var_155_cvector = CVector(0,0,0); var_156_bool = 0; var_157_bool = 0; var_158_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_1295:
	var_162_int = var_1_bool + (int)1;
	var_163_int = "attack_begin" + var_162_int;
	HasAnimation(var_156_bool, "all", var_163_int);
	var_164_bool = var_156_bool == 0; //@nz
	if(var_164_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_1295;
	}
	var_2_bool = 0;
	
Label_1309:
	var_167_int = var_2_bool + (int)1;
	var_168_int = "attack" + var_167_int;
	IsExisting3DSound(var_157_bool, var_168_int);
	var_169_bool = var_157_bool == 0; //@nz
	if(var_169_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_1309;

	}
	GetAnimationOffset(var_158_cvector, "all", "bjump");
	var_172_float = GetByIndex(var_158_cvector, 2);
	var_4_object = -var_172_float;
	return 6;
	
}


func_2326(var_52_string, var_53_int, var_54_int)
{
	var_55_bool = 0; var_56_bool = 0;
	var_57_bool = 0; var_58_int = 0; var_59_int = 0;
	var_53_int = var_58_int;
	var_54_int = var_59_int;
	func_2427(var_57_bool, var_58_int, var_59_int);
	if(var_57_bool != 0) {
		AddItem(var_56_bool, var_52_string, (int)0);
	}
	return 2;
}


func_2840(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_15_object = var_20_object;
	func_3107(var_20_object);
	if(var_19_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_15_object = var_22_object;
		func_2018(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		@@var_15_object:IsWeaponHolstered(var_17_bool);
		var_25_bool = var_17_bool == 0; //@nz
		if(var_25_bool != 0) {
			var_14_bool = 1;
			return 2;
		}
	}
	var_14_bool = 0;
	return 2;
}


func_2337(var_30_string, var_31_int, var_32_int, var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0;
	var_38_bool = 0; var_39_int = 0; var_40_int = 0;
	var_31_int = var_39_int;
	var_32_int = var_40_int;
	func_2427(var_38_bool, var_39_int, var_40_int);
	if(var_38_bool != 0) {
		irand(var_36_int, var_33_int);
		var_45_int = var_36_int + (int)1;
		AddItem(var_37_bool, var_30_string, (int)0, var_45_int);
	}
	return 4;
}


func_1838(var_0_bool, var_1_bool, var_228_bool, var_229_object, var_230_float, var_231_float, var_232_bool, var_233_bool)
{
	var_234_bool = 0; var_235_bool = 0; var_236_object = Obj(); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_float = 0; var_241_object = Obj(); var_242_bool = 0; var_243_bool = 0; var_244_object = Obj(); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_float = 0; var_249_object = Obj();
	var_0_bool = false;
	var_1_bool = var_229_object;
	var_233_bool = var_243_bool;
	
Label_1842:
	var_250_bool = 0; var_251_object = Obj();
	var_229_object = var_251_object;
	func_1978(var_250_bool, var_251_object);
	var_254_bool = var_250_bool == 0; //@nz
	if(var_254_bool != 0) {
		var_228_bool = 0;
		return 16;
	}
	@@var_229_object:GetPosition(var_245_cvector);
	GetPosition(var_246_cvector);
	var_247_cvector = var_245_cvector - var_246_cvector;
	var_248_float = var_247_cvector | var_247_cvector;
	var_255_bool = 0;
	var_255_bool = 0;
	var_257_bool = var_231_float > (int)0;
	if(var_257_bool != 0) {
		var_258_float = var_231_float * var_231_float;
		var_259_bool = var_248_float > var_258_float;
		if(var_259_bool != 0) {
			var_255_bool = 1;
		}
	}
	if(var_255_bool != 0) {
		Stop();
		var_228_bool = 0;
		return 16;
	}
	var_260_float = var_230_float * var_230_float;
	var_261_bool = var_248_float > var_260_float;
	if(var_261_bool != 0) {
		@@var_229_object:GetPFPosition(var_245_cvector);
		FindPathTo(var_249_object, var_245_cvector);
		var_262_bool = var_249_object != 0; //@nn
		if(var_262_bool != 0) {
			var_249_object = var_244_object;
			var_249_object = 0;
		}
		var_263_bool = var_244_object != 0; //@nn
		if(var_263_bool != 0) {
			var_264_bool = var_243_bool;
			if(var_264_bool == 0) goto Label_1891;
			var_243_bool = 0;
			RotatePath(var_244_object, var_242_bool);
			var_265_bool = var_242_bool == 0; //@nz
			if(var_265_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_268_string = "";
				func_1985(var_268_string);
				var_269_string = "";
				func_1987(var_269_string);
				FollowPath(var_244_object, var_232_bool, var_242_bool, var_268_string, var_269_string);
				var_270_bool = var_242_bool == 0; //@nz
				if(var_270_bool != 0) {
					var_271_bool = var_0_bool;
					if(var_271_bool != 0) {
						var_244_object = 0;
						goto Label_1938;
					EMIT "GOTO 0x777";
					}
				} else {
					var_244_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_242_bool);
					var_274_bool = var_242_bool == 0; //@nz
					if(var_274_bool != 0) {
						var_275_bool = var_0_bool;
						if(var_275_bool != 0) {
							var_244_object = 0;
							goto Label_1938;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1938;
	}
			var_249_object = 0;
			goto Label_1936;

		Label_1936:
			var_244_object = 0;

		}
		goto Label_1842;
	}
Label_1938:
	var_228_bool = !var_0_bool;
	return 16;
	
}


func_2863(var_28_object)
{
	var_28_object = Obj();
	func_3110();
	return 0;
}


func_2352(var_39_string)
{
	var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	IsExisting3DSound(var_48_bool, var_39_string);
	var_56_bool = var_48_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_49_int = 0;

	Label_2358:
		var_58_int = var_49_int + (int)1;
		var_59_int = var_39_string + var_58_int;
		IsExisting3DSound(var_50_bool, var_59_int);
		var_60_bool = var_50_bool == 0; //@nz
		if(var_60_bool != 0) {
		} else {
			var_49_int = var_49_int + (int)1;
			goto Label_2358;
		}
		var_61_bool = var_49_int == 0; //@nz
		if(var_61_bool != 0) {
			return 16;
		}
		irand(var_51_int, var_49_int);
		var_63_int = var_51_int + (int)1;
		var_39_string = var_39_string + var_63_int;
	}
	Is3DSoundLoaded(var_52_bool, var_39_string);
	var_64_bool = var_52_bool;
	if(var_64_bool != 0) {
		GetEyesHeight(var_53_float);
		GetDirection(var_54_cvector);
		var_55_cvector = var_54_cvector * (int)50;
		var_66_float = GetByIndex(var_55_cvector, 1);
		var_66_float = var_66_float + var_53_float;
		SetByIndex(var_55_cvector, 1) = var_66_float;
		PlayGlobalSound(var_39_string, var_55_cvector);
	}
	return 16;
	
}


func_1328(var_0_bool, var_454_float, var_455_int)
{
	var_456_object = Obj(); var_457_float = 0; var_458_float = 0; var_459_object = Obj(); var_460_float = 0; var_461_float = 0;
	var_463_float = var_454_float * (float)0.8999999761581421;
	GetVictim(var_463_float, var_459_object);
	ReportAttack(var_0_bool);
	var_464_bool = var_459_object == var_0_bool;
	if(var_464_bool != 0) {
		var_465_float = 0; var_466_object = Obj(); var_467_int = 0;
		var_459_object = var_466_object;
		var_455_int = var_467_int;
		func_1058(var_467_int);
		var_465_float = var_460_float;
		var_468_float = 0; var_469_object = Obj(); var_470_float = 0; var_471_int = 0;
		var_459_object = var_469_object;
		var_460_float = var_470_float;
		var_472_int = 0; var_473_object = Obj(); var_474_int = 0;
		var_459_object = var_473_object;
		var_455_int = var_474_int;
		func_1061(var_474_int);
		var_472_int = var_471_int;
		func_2035(var_468_float, var_469_object, var_470_float, var_471_int);
		var_468_float = var_461_float;
		var_533_int = 0;
		func_1711(var_533_int);
		ReportHit(var_0_bool, var_533_int, var_461_float, var_460_float);
		var_534_object = Obj(); var_535_float = 0;
		var_459_object = var_534_object;
		var_461_float = var_535_float;
		func_1718();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2869(var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_2018(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_21_object = Obj();
		func_2393(var_21_object);
		ReportReputationChange(var_16_object, var_21_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_826(var_0_bool)
{
	var_64_object = Obj();
	var_64_object = var_0_bool;
	func_2315(var_64_object);
	return 0;
}


func_2882(var_14_bool, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj();
	var_19_bool = var_15_string == "heal";
	if(var_19_bool != 0) {
		FindActor(var_17_object, "player");
		var_21_bool = 0; var_22_object = Obj();
		var_17_object = var_22_object;
		func_3138(var_22_object);
		var_21_bool = var_14_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_14_bool = 0;
	return 2;
}


func_2898(var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj();
	var_29_bool = var_25_string == "heal";
	if(var_29_bool != 0) {
		FindActor(var_27_object, "player");
		var_27_object = Obj();
		func_3141();
		var_27_object = 0;
	}
	return 2;
}


func_1367(var_0_bool, var_1_bool, var_417_bool, var_418_float)
{
	var_419_int = 0; var_420_bool = 0; var_421_int = 0; var_422_string = ""; var_423_int = 0; var_424_bool = 0; var_425_int = 0; var_426_string = "";
	func_1706(var_426_string);
	irand(var_423_int, var_1_bool);
	var_423_int = var_423_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2503();
	var_435_int = "attack_begin" + var_423_int;
	PlayAnimation("all", var_435_int);
	WaitForAnimEnd();
	func_1674(var_425_int, var_426_string);
	var_451_bool = 0; var_452_object = Obj();
	var_452_object = var_0_bool;
	func_2149(var_451_bool, var_452_object);
	var_453_bool = var_451_bool == 0; //@nz
	if(var_453_bool != 0) {
		StopAsync();
		var_417_bool = 0;
		return 8;
	}
	var_454_float = 0; var_455_int = 0;
	var_418_float = var_454_float;
	var_423_int = var_455_int;
	func_1328(var_426_string, var_454_float, var_455_int);
	var_538_int = "attack_middle" + var_423_int;
	HasAnimation(var_424_bool, "all", var_538_int);
	var_539_bool = var_424_bool;
	if(var_539_bool != 0) {
		func_2503();
		var_542_int = "attack_middle" + var_423_int;
		PlayAnimation("all", var_542_int);
		WaitForAnimEnd();
		func_1706(var_426_string);
		var_543_bool = 0; var_544_object = Obj();
		var_544_object = var_0_bool;
		func_2149(var_543_bool, var_544_object);
		var_545_bool = var_543_bool == 0; //@nz
		if(var_545_bool != 0) {
			StopAsync();
			var_417_bool = 0;
			return 8;
		}
		var_546_float = 0; var_547_int = 0;
		var_418_float = var_546_float;
		var_423_int = var_547_int;
		func_1328(var_426_string, var_546_float, var_547_int);
		var_425_int = 1;

	Label_1444:
		var_549_int = "attack_middle" + var_423_int;
		var_551_int = var_549_int + "_";
		var_426_string = var_551_int + var_425_int;
		HasAnimation(var_424_bool, "all", var_426_string);
		var_553_bool = var_424_bool == 0; //@nz
		if(var_553_bool != 0) {
		} else {
			func_2503();
			PlayAnimation("all", var_426_string);
			WaitForAnimEnd();
			func_1706(var_426_string);
			var_569_bool = 0; var_570_object = Obj();
			var_570_object = var_0_bool;
			func_2149(var_569_bool, var_570_object);
			var_571_bool = var_569_bool == 0; //@nz
			if(var_571_bool != 0) {
				StopAsync();
				var_417_bool = 0;
				var_572_float = 0; var_573_int = 0;
				var_418_float = var_572_float;
				var_423_int = var_573_int;
				func_1328(var_426_string, var_572_float, var_573_int);
				var_425_int = var_425_int + (int)1;
				goto Label_1444;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_557_int = "attack_end" + var_423_int;
	PlayAnimation("all", var_557_int);
	var_558_bool = 0;
	func_1720(var_558_bool);
	if(var_558_bool != 0) {
		var_559_bool = 0; var_560_float = 0;
		func_1504(var_559_bool, (float)0.75);
		StopAsync();
	}
	var_417_bool = 1;
	return 8;
	
}


func_2393(var_101_object)
{
	var_102_object = Obj(); var_103_object = Obj();
	self(var_103_object);
	var_103_object = var_101_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2911(var_149_string, var_150_int)
{
	var_151_string = ""; var_152_string = "";
	var_153_int = var_150_int;
	if(var_153_int != 0) {
		"idle" = "idle" + var_150_int;
	}
	var_152_string = var_149_string;
	return 2;
}


func_2399(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0;
	var_55_int = var_46_cvector | var_46_cvector;
	var_54_float = sqrt(var_55_int);
	var_56_float = 9.999999974752427e-07;
	var_57_bool = var_54_float < var_56_float;
	if(var_57_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_54_float;
	return 2;
}


func_2918(var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0;
	var_146_int = 0;
	
Label_2920:
	var_149_string = ""; var_150_int = 0;
	var_146_int = var_150_int;
	func_2911(var_149_string, var_150_int);
	HasAnimation(var_147_bool, "all", var_149_string);
	var_154_bool = var_147_bool == 0; //@nz
	if(var_154_bool != 0) {
	} else {
		var_146_int = var_146_int + (int)1;
		goto Label_2920;
	}
	var_146_int = var_143_int;
	return 4;
	
}


func_2409(var_506_float, var_507_float, var_508_float)
{
	var_511_bool = var_507_float < var_508_float;
	if(var_511_bool != 0) {
		var_507_float = var_506_float;
	} else {
		var_508_float = var_506_float;
	}
	return 0;
	
}


func_367(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_503(var_12_object, var_13_bool);
	return 0;
}


func_2416(var_516_float, var_517_float, var_518_float, var_519_float)
{
	var_520_bool = var_517_float < var_518_float;
	if(var_520_bool != 0) {
		var_518_float = var_516_float;
		return 0;
	}
	var_521_bool = var_517_float > var_519_float;
	if(var_521_bool != 0) {
		var_519_float = var_516_float;
		return 0;
	}
	var_517_float = var_516_float;
	return 0;
}


func_2935(var_56_int)
{
	var_58_bool = 0;
	func_3165(var_58_bool);
	if(var_58_bool != 0) {
		var_56_int = 2;
	} else {
		var_56_int = 0;
	}
	return 0;
	
}


func_375(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_510(var_17_bool, var_18_int);
	return 0;
}


func_2427(var_38_bool, var_39_int, var_40_int)
{
	var_41_int = 0; var_42_int = 0;
	irand(var_42_int, var_40_int);
	var_38_bool = var_42_int < var_39_int;
	return 2;
}


func_2944(var_55_object)
{
	var_56_object = Obj();
	var_55_object = var_56_object;
	TaskCall(3);
	func_775(var_57_object, var_56_object);
	TaskReturn();
	return 0;
}


func_2432(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_70_float = GetByIndex(var_68_cvector, 0);
	var_71_float = var_69_float * var_70_float;
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_73_float = GetByIndex(var_68_cvector, 2);
	var_74_float = var_72_float * var_73_float;
	var_66_float = var_71_float + var_74_float;
	return 0;
}


func_2952(var_83_int, var_84_object)
{
	var_85_bool = 0; var_86_object = Obj();
	var_84_object = var_86_object;
	func_2149(var_85_bool, var_86_object);
	if(var_85_bool != 0) {
		var_83_int = 2;
	} else {
		var_83_int = 0;
	}
	return 0;
	
}


func_392(var_2_bool, var_14_object)
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_14_object = var_20_object;
	func_2149(var_19_bool, var_20_object);
	var_53_bool = var_19_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 4;
	}
	var_54_bool = var_2_bool;
	if(var_54_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_14_object, var_17_bool);
	var_55_bool = var_17_bool == 0; //@nz
	if(var_55_bool != 0) {
		return 4;
	}
	var_56_int = 0; var_57_object = Obj();
	var_14_object = var_57_object;
	func_2935(var_57_object);
	var_56_int = var_18_int;
	var_60_bool = var_18_int > (int)0;
	if(var_60_bool != 0) {
		var_62_bool = var_18_int > (int)1;
		if(var_62_bool != 0) {
			func_375(var_18_int);
		}
		var_64_object = Obj();
		var_14_object = var_64_object;
		func_2944(var_64_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2441(var_75_float, var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = var_77_float * var_78_float;
	var_80_float = GetByIndex(var_76_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = var_80_float * var_81_float;
	var_83_int = var_79_float + var_82_float;
	var_75_float = sqrt(var_83_int);
	return 0;
}


func_2962(var_120_object)
{
	var_121_object = Obj();
	var_120_object = var_121_object;
	TaskCall(4);
	func_1050(var_121_object);
	TaskReturn();
	return 0;
}


func_2451(var_63_float, var_64_cvector, var_65_cvector)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	var_64_cvector = var_67_cvector;
	var_65_cvector = var_68_cvector;
	func_2432(var_66_float, var_67_cvector, var_68_cvector);
	var_75_float = 0; var_76_cvector = CVector(0,0,0);
	var_64_cvector = var_76_cvector;
	func_2441(var_75_float, var_76_cvector);
	var_84_float = 0; var_85_cvector = CVector(0,0,0);
	var_65_cvector = var_85_cvector;
	func_2441(var_84_float, var_85_cvector);
	var_86_float = var_75_float * var_84_float;
	var_63_float = var_66_float / var_86_float;
	return 0;
}


func_1940(var_0_bool, var_1_bool, var_21_int)
{
	var_23_bool = var_21_int != (int)0;
	if(var_23_bool != 0) {
		return 0;
	}
	var_24_bool = 0; var_25_object = Obj();
	var_25_object = var_1_bool;
	func_1978(var_24_bool, var_25_object);
	var_60_bool = var_24_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2970(var_29_bool, var_30_object, var_31_bool)
{
	var_32_string = ""; var_33_string = ""; var_34_string = ""; var_35_string = "";
	var_36_bool = 0; var_37_object = Obj(); var_38_string = "";
	var_30_object = var_37_object;
	func_2023(var_36_bool, var_37_object, "class");
	var_45_bool = var_36_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	GetProperty("class", var_34_string);
	@@var_30_object:GetProperty("class", var_35_string);
	var_48_bool = 0;
	var_48_bool = 0;
	var_49_bool = var_31_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_50_bool = var_34_string == var_35_string;
		if(var_50_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		var_29_bool = 1;
		return 4;
	}
	var_52_bool = var_35_string == "rat";
	if(var_52_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbe3";
	}
	var_54_bool = var_35_string == "rat_big";
	if(var_54_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbe3";
	}
	var_56_bool = var_35_string == "dog";
	if(var_56_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbe3";
	}
	var_58_bool = var_35_string == "grabitel";
	if(var_58_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbe3";
	}
	var_60_bool = var_35_string == "bomber";
	if(var_60_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbe3";
	}
	var_62_bool = var_35_string == "sanitar";
	if(var_62_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbe3";
	}
	var_64_bool = var_35_string == "hunter";
	if(var_64_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbe3";
	}
	var_66_bool = var_35_string == "soldier";
	if(var_66_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_29_bool = 1;
	return 4;
}


func_2468(var_524_float)
{
	var_525_object = Obj(); var_526_object = Obj();
	CreateFloatVector(var_526_object);
	@@var_526_object:add(var_524_float);
	var_528_bool = var_524_float < (int)0;
	if(var_528_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_526_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1962(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_432(var_0_bool, var_1_bool)
{
	var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_object = Obj(); var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_object = Obj(); var_111_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_106_float, (float)0.5);
	Sleep(var_106_float);
	
Label_440:
	var_113_bool = var_0_bool == 0; //@nz
	if(var_113_bool != 0) {
		var_114_bool = var_1_bool == 0; //@nz
		if(var_114_bool != 0) {

		Label_444:
			GetPosition(var_108_cvector);
			var_115_float = 0;
			func_491(var_115_float);
			GetRandomPFPointInCircle(var_107_cvector, var_108_cvector, var_115_float, var_109_bool);
			var_118_bool = var_109_bool;
			if(var_118_bool != 0) {
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
	var_119_object = Obj(); var_120_cvector = CVector(0,0,0);
	var_107_cvector = var_120_cvector;
	func_519(var_119_object, var_120_cvector);
	var_119_object = var_110_object;
	var_123_bool = var_110_object != 0; //@nn
	if(var_123_bool != 0) {
		RotatePath(var_110_object, var_111_bool);
		var_124_bool = var_111_bool;
		if(var_124_bool != 0) {
			var_125_bool = 0;
			func_517(var_125_bool);
			FollowPath(var_110_object, var_125_bool, var_111_bool);
			var_110_object = 0;
			var_126_bool = var_111_bool;
			if(var_126_bool != 0) {
				TaskCall(2);
				func_689();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_110_object = 0;
	goto Label_440;
	
}


func_2485(var_23_int)
{
	var_24_float = 0; var_25_float = 0;
	GetGameTime(var_25_float);
	var_27_int = 0;
	var_27_int = var_25_float / (int)24;
	var_23_int = (int)1 + var_27_int;
	return 2;
}


func_1978(var_24_bool, var_25_object)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	func_2149(var_26_bool, var_27_object);
	var_26_bool = var_24_bool;
	return 0;
}


func_2494(var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsPlayerActor(var_16_object, var_18_bool);
	var_19_bool = var_18_bool;
	if(var_19_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1985(var_268_string)
{
	var_268_string = "walk";
	return 0;
}


func_1987(var_269_string)
{
	var_269_string = "run";
	return 0;
}


func_1989(var_496_string, var_497_int)
{
	var_499_bool = var_497_int == (int)2;
	if(var_499_bool != 0) {
		var_496_string = "fire";
		return 0;
	EMIT "GOTO 0x7d1";
	}
	var_501_bool = var_497_int == (int)1;
	if(var_501_bool != 0) {
		var_496_string = "bullet";
		return 0;
	}
	var_496_string = "phys";
	return 0;
}


func_2503()
{
	var_429_object = Obj(); var_430_object = Obj();
	GetScene(var_430_object);
	var_432_object = Obj();
	func_2393(var_432_object);
	BroadcastMessage("battle", var_432_object, var_430_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_974()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2514(var_152_int)
{
	var_153_int = 0; var_154_int = 0;
	GetVariable("branch", var_154_int);
	var_154_int = var_152_int;
	return 2;
}


func_2003(var_47_cvector, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_48_object:GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
	return 4;
}


func_2520(var_30_object)
{
	var_31_int = 0;
	func_2514(var_31_int);
	var_36_bool = var_31_int == (int)1;
	if(var_36_bool != 0) {
		WorkWithCorpse(var_30_object);
	} else {
		Barter(var_30_object);
	}
	return 0;
	
}


func_2010(var_31_float, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	GetPosition(var_36_cvector);
	@@var_32_object:GetPosition(var_37_cvector);
	var_38_cvector = var_37_cvector - var_36_cvector;
	var_31_float = var_38_cvector | var_38_cvector;
	return 6;
}


func_1504(var_559_bool, var_560_float)
{
	var_561_float = 0; var_562_bool = 0; var_563_float = 0; var_564_bool = 0;
	rand(var_563_float);
	var_565_bool = var_563_float < var_560_float;
	if(var_565_bool != 0) {

	Label_1509:
		IsAnimationPlaying(var_564_bool);
		var_566_bool = var_564_bool == 0; //@nz
		if(var_566_bool != 0) {
		} else {
			var_567_bool = 0;
			func_1602(var_567_bool);
			if(var_567_bool != 0) {
				var_559_bool = 1;
				sync();
				goto Label_1509;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1706(var_564_bool);
	}
	goto Label_1529;
	
Label_1529:
	var_559_bool = 0;
	return 4;
	
}


func_2018(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_bool = 0;
	IsPlayerActor(var_98_object, var_100_bool);
	var_100_bool = var_97_bool;
	return 2;
}


func_3045(var_80_int, var_81_object)
{
	var_83_int = 0; var_84_object = Obj();
	var_81_object = var_84_object;
	func_2952(var_83_int, var_84_object);
	var_83_int = var_80_int;
	return 0;
}


func_2533(var_110_int, var_111_int)
{
	var_121_int = 0; var_122_bool = 0; var_123_int = 0; var_124_bool = 0;
	var_125_bool = var_110_int > var_111_int;
	if(var_125_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_123_int = 0;
	var_127_bool = var_110_int != var_111_int;
	if(var_127_bool != 0) {
		var_128_int = var_111_int - var_110_int;
		irand(var_123_int, var_128_int);
	} else {
		var_137_bool = var_110_int == (int)0;
		if(var_137_bool == 0) goto Label_2551;
		return 4;
	}
Label_2551:
	var_123_int = var_123_int + var_110_int;
	var_130_bool = var_123_int == (int)0;
	if(var_130_bool != 0) {
		return 4;
	}
	var_131_int = 0; var_132_string = "";
	func_2733(var_131_int, "Money");
	AddItem(var_124_bool, var_131_int, (int)0, var_123_int);
	return 4;
	
}


func_2023(var_48_bool, var_49_object, var_50_string)
{
	var_51_bool = 0; var_52_bool = 0;
	var_55_bool = IsFuncExist(var_49_object, "HasProperty", (int)2);
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_48_bool = 0;
		return 2;
	}
	@@var_49_object:HasProperty(var_50_string, var_52_bool);
	var_52_bool = var_48_bool;
	return 2;
}


func_491(var_115_float)
{
	var_116_float = 0; var_117_float = 0;
	GetCameraFarDistance(var_117_float);
	var_117_float = var_115_float;
	return 2;
}


func_3052(var_119_object)
{
	var_120_object = Obj();
	var_119_object = var_120_object;
	func_2962(var_120_object);
	return 0;
}


func_3058(var_22_bool, var_23_object, var_24_object, var_25_float, var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	var_29_bool = 0; var_30_object = Obj(); var_31_bool = 0;
	var_24_object = var_30_object;
	var_31_bool = !var_26_bool;
	func_2970(var_29_bool, var_30_object, var_31_bool);
	var_67_bool = var_29_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	CanSee(var_28_bool, var_23_object);
	var_68_bool = 0;
	var_68_bool = 1;
	var_69_bool = var_28_bool;
	if(var_69_bool != 1) {
		var_70_float = 0; var_71_object = Obj();
		var_23_object = var_71_object;
		func_2010(var_70_float, var_71_object);
		var_78_float = var_25_float * var_25_float;
		var_79_bool = var_70_float <= var_78_float;
		if(var_79_bool != 1) {
			var_68_bool = 0;
		}
	}
	if(var_68_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	var_22_bool = 0;
	return 2;
}


func_2035(var_468_float, var_469_object, var_470_float, var_471_int)
{
	var_475_int = 0; var_476_string = ""; var_477_int = 0; var_478_float = 0; var_479_float = 0; var_480_float = 0; var_481_int = 0; var_482_string = ""; var_483_int = 0; var_484_float = 0; var_485_float = 0; var_486_float = 0;
	var_487_bool = 0; var_488_object = Obj(); var_489_string = "";
	var_469_object = var_488_object;
	func_2023(var_487_bool, var_488_object, "health");
	var_490_bool = var_487_bool == 0; //@nz
	if(var_490_bool != 0) {
		var_468_float = 0.0;
		return 12;
	}
	var_491_bool = 0; var_492_object = Obj(); var_493_string = "";
	var_469_object = var_492_object;
	func_2023(var_491_bool, var_492_object, "armor");
	var_494_bool = var_491_bool == 0; //@nz
	if(var_494_bool != 0) {
		var_481_int = 0;
	} else {
			@@var_469_object:GetProperty("armor", var_481_int);
	}
	var_496_string = ""; var_497_int = 0;
	var_471_int = var_497_int;
	func_1989(var_496_string, var_497_int);
	var_482_string = "armor_" + var_496_string;
	var_502_bool = 0; var_503_object = Obj(); var_504_string = "";
	var_469_object = var_503_object;
	var_482_string = var_504_string;
	func_2023(var_502_bool, var_503_object, var_504_string);
	var_505_bool = var_502_bool == 0; //@nz
	if(var_505_bool != 0) {
		var_483_int = 0;
	} else {
		@@var_469_object:GetProperty(var_482_string, var_483_int);

	}
	var_506_float = 0; var_507_float = 0; var_508_float = 0;
	var_509_int = var_481_int + var_483_int;
	var_507_float = var_509_int / (float)100.0;
	func_2409(var_506_float, var_507_float, (float)1);
	var_506_float = var_484_float;
	@@var_469_object:GetProperty("health", var_485_float);
	var_514_int = (int)1 - var_484_float;
	var_486_float = var_470_float * var_514_int;
	var_516_float = 0; var_517_float = 0; var_518_float = 0; var_519_float = 0;
	var_517_float = var_485_float - var_486_float;
	func_2416(var_516_float, var_517_float, (float)0, (float)1);
	@@var_469_object:SetProperty("health", var_516_float);
	var_522_bool = 0; var_523_object = Obj();
	var_469_object = var_523_object;
	func_2018(var_522_bool, var_523_object);
	if(var_522_bool != 0) {
		var_524_float = 0;
		var_524_float = -var_486_float;
		func_2468(var_524_float);
	}
	var_486_float = var_468_float;
	return 12;
	
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1531(var_0_bool, var_356_bool, var_357_float)
{
	var_358_bool = 0; var_359_cvector = CVector(0,0,0); var_360_cvector = CVector(0,0,0); var_361_cvector = CVector(0,0,0); var_362_float = 0; var_363_bool = 0; var_364_cvector = CVector(0,0,0); var_365_cvector = CVector(0,0,0); var_366_cvector = CVector(0,0,0); var_367_float = 0;
	
Label_1532:
	IsAnimationPlaying(var_363_bool);
	var_368_bool = var_363_bool == 0; //@nz
	if(var_368_bool != 0) {
	} else {
		var_369_bool = 0;
		func_1602(var_369_bool);
		if(var_369_bool != 0) {
			var_356_bool = 1;
			return 10;
		}
		var_412_bool = 0; var_413_object = Obj();
		var_413_object = var_0_bool;
		func_2149(var_412_bool, var_413_object);
		var_414_bool = var_412_bool == 0; //@nz
		if(var_414_bool != 0) {
			var_356_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_364_cvector);
		GetPFPosition(var_365_cvector);
		var_366_cvector = var_364_cvector - var_365_cvector;
		var_367_float = var_366_cvector | var_366_cvector;
		var_415_float = var_357_float * var_357_float;
		var_416_bool = var_367_float < var_415_float;
		if(var_416_bool != 0) {
			var_417_bool = 0; var_418_float = 0;
			var_357_float = var_418_float;
			func_1367(var_366_cvector, var_367_float, var_417_bool, var_418_float);
			var_356_bool = 1;
			sync();
			goto Label_1532;
		}
		return 10;
	}
	func_1706(var_367_float);
	var_356_bool = 0;
	return 10;
	
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


