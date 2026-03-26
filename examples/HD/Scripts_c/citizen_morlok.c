// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,IsOverrideActive/1,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:idle|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:killme
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
// @STANDALONE_EVENT_16: op=0xaca vars=object,string
// @STANDALONE_EVENT_41: op=0xad7 vars=object
// @STANDALONE_EVENT_22: op=0xadd vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xae5 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x135,0x143,0x156,0x15c,0x168,0x17f,0x1f0,0x28e,0x29c,0x2a3,0x3c0,0x3d9,0x405,0x40c,0x41a,0x422,0x425,0x6b6,0x6be,0x6f6,0x711,0x720,0x794,0x7a6,0x7b1,0x7ba,0x7c5,0x94f,0x956,0x961,0x96a,0x974,0x9b9,0xac2,0xad7,0xadd,0xae5,0xaef,0xb0f,0xb3f,0xb45,0xb87,0xb90,0xb98,0xba2,0xbf5,0xbfc,0xc1f,0xc22,0xc24,0xc30,0xc3a,0xc4c,0xc52,0xc55,0xc5c,0xc5f,0xc70,0xc76,0xc79,0xc7b,0xc7e,0xc93,0xc96,0xca0

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3154(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_13_bool = var_20_object;
		func_3157(var_20_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_3163();
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
	func_3154(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_367(var_15_int);
		}
		var_23_object = Obj();
		var_13_bool = var_23_object;
		func_3157(var_23_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2885(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2968(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_367(var_15_int);
		}
		var_66_object = Obj();
		var_13_bool = var_66_object;
		func_2978(var_66_object);
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
	func_3222(var_18_bool, var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_80_int = 0; var_81_object = Obj(); var_82_bool = 0;
		var_13_bool = var_81_object;
		var_15_bool = var_82_bool;
		func_3061(var_81_object, var_82_bool);
		var_80_int = var_17_int;
		var_114_bool = var_17_int > (int)0;
		if(var_114_bool != 0) {
			var_116_bool = var_17_int > (int)1;
			if(var_116_bool != 0) {
				func_367(var_17_int);
			}
			var_118_object = Obj();
			var_13_bool = var_118_object;
			func_3068(var_118_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3103(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_367(var_15_int);
		}
		var_13_bool = Obj();
		func_3106();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_object = var_18_object;
	var_14_bool = var_19_string;
	func_2799(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_367(var_16_int);
		var_46_object = Obj(); var_47_string = "";
		var_13_object = var_46_object;
		var_14_bool = var_47_string;
		func_2831(var_46_object, var_47_string);
	} else {
		var_122_int = 0; var_123_string = ""; var_124_object = Obj();
		var_14_bool = var_123_string;
		var_13_object = var_124_object;
		func_3108(var_122_int, var_123_string, var_124_object);
		var_122_int = var_16_int;
		var_167_bool = var_16_int > (int)0;
		if(var_167_bool == 0) goto Label_308;
		var_169_bool = var_16_int > (int)1;
		if(var_169_bool != 0) {
			func_367(var_16_int);
		}
		var_170_string = ""; var_171_object = Obj();
		var_14_bool = var_170_string;
		var_13_object = var_171_object;
		func_3120(var_170_string, var_171_object);
	}
Label_308:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2898(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_367(var_13_bool);
		var_24_string = "";
		var_13_bool = var_24_string;
		func_2914(var_24_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2856(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_367(var_13_bool);
		var_27_object = Obj();
		var_13_bool = var_27_object;
		func_2879(var_27_object);
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
	func_3163();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	func_367(var_13_bool);
	var_13_bool = Obj();
	func_2775();
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
	func_3154(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_770();
		}
		var_22_object = Obj();
		var_13_bool = var_22_object;
		func_3157(var_22_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2885(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2968(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_770();
		}
		var_65_object = Obj();
		var_13_bool = var_65_object;
		func_2978(var_65_object);
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
	func_3222(var_18_bool, var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_80_int = 0; var_81_object = Obj(); var_82_bool = 0;
		var_13_bool = var_81_object;
		var_15_bool = var_82_bool;
		func_3061(var_81_object, var_82_bool);
		var_80_int = var_17_int;
		var_114_bool = var_17_int > (int)0;
		if(var_114_bool != 0) {
			var_116_bool = var_17_int > (int)1;
			if(var_116_bool != 0) {
				func_770();
			}
			var_117_object = Obj();
			var_13_bool = var_117_object;
			func_3068(var_117_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3103(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_770();
		}
		var_13_bool = Obj();
		func_3106();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_object = var_18_object;
	var_14_bool = var_19_string;
	func_2799(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_770();
		var_45_object = Obj(); var_46_string = "";
		var_13_object = var_45_object;
		var_14_bool = var_46_string;
		func_2831(var_45_object, var_46_string);
	} else {
		var_121_int = 0; var_122_string = ""; var_123_object = Obj();
		var_14_bool = var_122_string;
		var_13_object = var_123_object;
		func_3108(var_121_int, var_122_string, var_123_object);
		var_121_int = var_16_int;
		var_166_bool = var_16_int > (int)0;
		if(var_166_bool == 0) goto Label_653;
		var_168_bool = var_16_int > (int)1;
		if(var_168_bool != 0) {
			func_770();
		}
		var_169_string = ""; var_170_object = Obj();
		var_14_bool = var_169_string;
		var_13_object = var_170_object;
		func_3120(var_169_string, var_170_object);
	}
Label_653:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2898(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_770();
		var_23_string = "";
		var_13_bool = var_23_string;
		func_2914(var_23_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_770();
	func_3163();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2856(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_770();
		var_26_object = Obj();
		var_13_bool = var_26_object;
		func_2879(var_26_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3154(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_974();
		}
		var_24_object = Obj();
		var_13_bool = var_24_object;
		func_3157(var_24_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2885(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2968(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_974();
		}
		var_67_object = Obj();
		var_13_bool = var_67_object;
		func_2978(var_67_object);
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
	func_3222(var_18_bool, var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_80_int = 0; var_81_object = Obj(); var_82_bool = 0;
		var_13_bool = var_81_object;
		var_15_bool = var_82_bool;
		func_3061(var_81_object, var_82_bool);
		var_80_int = var_17_int;
		var_114_bool = var_17_int > (int)0;
		if(var_114_bool != 0) {
			var_116_bool = var_17_int > (int)1;
			if(var_116_bool != 0) {
				func_974();
			}
			var_119_object = Obj();
			var_13_bool = var_119_object;
			func_3068(var_119_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_3103(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_974();
		}
		var_13_bool = Obj();
		func_3106();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_object = var_18_object;
	var_14_bool = var_19_string;
	func_2799(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_974();
		var_47_object = Obj(); var_48_string = "";
		var_13_object = var_47_object;
		var_14_bool = var_48_string;
		func_2831(var_47_object, var_48_string);
	} else {
		var_123_int = 0; var_124_string = ""; var_125_object = Obj();
		var_14_bool = var_124_string;
		var_13_object = var_125_object;
		func_3108(var_123_int, var_124_string, var_125_object);
		var_123_int = var_16_int;
		var_168_bool = var_16_int > (int)0;
		if(var_168_bool == 0) goto Label_959;
		var_170_bool = var_16_int > (int)1;
		if(var_170_bool != 0) {
			func_974();
		}
		var_171_string = ""; var_172_object = Obj();
		var_14_bool = var_171_string;
		var_13_object = var_172_object;
		func_3120(var_171_string, var_172_object);
	}
Label_959:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2898(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_974();
		var_25_string = "";
		var_13_bool = var_25_string;
		func_2914(var_25_string);
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	func_974();
	var_13_bool = Obj();
	func_2775();
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
	func_2420(var_63_float, var_64_cvector, var_65_cvector);
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
	func_3163();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2856(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_974();
		var_28_object = Obj();
		var_13_bool = var_28_object;
		func_2879(var_28_object);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_1796(var_12_bool);
	func_3163();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_int)
{
	var_15_bool = var_13_int == (int)1;
	if(var_15_bool != 0) {
		var_16_object = Obj();
		var_16_object = var_1_bool;
		func_2463(var_16_object);
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
	func_2775();
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
	func_2754(var_14_object);
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
	func_3200();
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
	func_3232(var_96_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_3074(var_22_bool, var_23_object, var_24_object, var_25_float, var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	var_29_bool = 0; var_30_object = Obj(); var_31_bool = 0;
	var_24_object = var_30_object;
	var_31_bool = !var_26_bool;
	func_2986(var_29_bool, var_30_object, var_31_bool);
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


func_517(var_44_bool)
{
	var_44_bool = 0;
	return 0;
}


func_519(var_38_object, var_39_cvector)
{
	var_40_object = Obj(); var_41_object = Obj();
	FindShiftedPathTo(var_41_object, var_39_cvector);
	var_41_object = var_38_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2574(var_106_bool)
{
	var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_bool = 0;
	var_111_bool = var_106_bool;
	if(var_111_bool != 0) {
		var_112_int = 0; var_113_int = 0;
		var_115_int = 0;
		func_2454(var_115_int);
		var_122_float = var_115_int * (int)100;
		var_113_int = (int)100 + var_122_float;
		func_2502((int)0, var_113_int);
		irand(var_109_int, (int)8);
		var_142_bool = var_109_int == (int)0;
		if(var_142_bool != 0) {
			var_143_int = 0; var_144_string = "";
			func_2749(var_143_int, "lemon");
			AddItem(var_110_bool, var_143_int, (int)0, (int)1);
		} else {
			var_148_bool = var_109_int == (int)1;
			if(var_148_bool != 0) {
				var_149_int = 0; var_150_string = "";
				func_2749(var_149_int, "rusk");
				AddItem(var_110_bool, var_149_int, (int)0, (int)1);
				goto Label_2662;
			}
			var_154_bool = var_109_int == (int)2;
			if(var_154_bool != 0) {
				var_155_int = 0; var_156_string = "";
				func_2749(var_155_int, "hook");
				AddItem(var_110_bool, var_155_int, (int)0, (int)1);
				goto Label_2662;
			}
			var_160_bool = var_109_int == (int)4;
			if(var_160_bool != 0) {
				var_161_int = 0; var_162_string = "";
				func_2749(var_161_int, "syringe");
				AddItem(var_110_bool, var_161_int, (int)0, (int)1);
				goto Label_2662;
			}
			var_166_bool = var_109_int == (int)5;
			if(var_166_bool != 0) {
				var_167_int = 0; var_168_string = "";
				func_2749(var_167_int, "watch");
				AddItem(var_110_bool, var_167_int, (int)0, (int)1);
				goto Label_2662;
			}
			var_172_bool = var_109_int == (int)6;
			if(var_172_bool == 0) goto Label_2662;
			var_173_int = 0; var_174_string = "";
			func_2749(var_173_int, "razor");
			AddItem(var_110_bool, var_173_int, (int)0, (int)1);
	}
		var_177_int = 0; var_178_int = 0;
		var_180_int = 0;
		func_2454(var_180_int);
		var_182_float = var_180_int * (int)50;
		var_178_int = (int)50 + var_182_float;
		func_2502((int)0, var_178_int);
		irand(var_109_int, (int)7);
		var_185_bool = var_109_int == (int)0;
		if(var_185_bool != 0) {
			var_186_int = 0; var_187_string = "";
			func_2749(var_186_int, "beads");
			AddItem(var_110_bool, var_186_int, (int)0, (int)1);
			goto Label_2748;
		}
		var_191_bool = var_109_int == (int)1;
		if(var_191_bool != 0) {
			var_192_int = 0; var_193_string = "";
			func_2749(var_192_int, "bracelet");
			AddItem(var_110_bool, var_192_int, (int)0, (int)1);
			goto Label_2748;
		}
		var_197_bool = var_109_int == (int)2;
		if(var_197_bool != 0) {
			var_198_int = 0; var_199_string = "";
			func_2749(var_198_int, "ear_ring");
			AddItem(var_110_bool, var_198_int, (int)0, (int)1);
			goto Label_2748;
		}
		var_203_bool = var_109_int == (int)3;
		if(var_203_bool != 0) {
			var_204_int = 0; var_205_string = "";
			func_2749(var_204_int, "gold_ring");
			AddItem(var_110_bool, var_204_int, (int)0, (int)1);
			goto Label_2748;
		}
		var_209_bool = var_109_int == (int)4;
		if(var_209_bool != 0) {
			var_210_int = 0; var_211_string = "";
			func_2749(var_210_int, "silver_ring");
			AddItem(var_110_bool, var_210_int, (int)0, (int)1);
			goto Label_2748;
		}
		var_215_bool = var_109_int == (int)5;
		if(var_215_bool == 0) goto Label_2748;
		var_216_int = 0; var_217_string = "";
		func_2749(var_216_int, "flower");
		AddItem(var_110_bool, var_216_int, (int)0, (int)1);
	}
Label_2662:
	goto Label_2748;
	
Label_2748:
	return 4;
	
}


func_1050(var_177_object)
{
	var_184_object = Obj(); var_185_bool = 0; var_186_float = 0;
	var_177_object = var_184_object;
	func_1064(var_180_int, var_181_bool, var_182_float, var_183_int, var_177_object, var_184_object, (bool)1, (float)180.0);
	return 0;
}


func_3103(var_16_int)
{
	var_16_int = 0;
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
		func_2326(var_91_string);
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


func_1058(var_503_float)
{
	var_503_float = 0.05000000074505806;
	return 0;
}


func_3108(var_123_int, var_124_string, var_125_object)
{
	var_127_bool = var_124_string == "killme";
	if(var_127_bool != 0) {
		var_128_int = 0; var_129_object = Obj();
		var_125_object = var_129_object;
		func_3130(var_128_int, var_129_object);
		var_128_int = var_123_int;
		return 0;
	}
	var_123_int = 0;
	return 0;
}


func_1061(var_510_int)
{
	var_510_int = 0;
	return 0;
}


func_1574(var_0_bool, var_413_bool)
{
	var_414_cvector = CVector(0,0,0); var_415_cvector = CVector(0,0,0); var_416_cvector = CVector(0,0,0); var_417_float = 0; var_418_float = 0; var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_float = 0; var_423_float = 0;
	var_424_bool = 0; var_425_object = Obj();
	var_425_object = var_0_bool;
	func_2149(var_424_bool, var_425_object);
	var_426_bool = var_424_bool == 0; //@nz
	if(var_426_bool != 0) {
		var_413_bool = 0;
		return 10;
	}
	var_427_bool = 0;
	func_1663(var_423_float, var_427_bool);
	if(var_427_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_419_cvector);
		GetPFPosition(var_420_cvector);
		var_421_cvector = var_419_cvector - var_420_cvector;
		var_422_float = var_421_cvector | var_421_cvector;
		@@@var_0_bool:GetAttackDistance(var_423_float);
		var_423_float = var_423_float + (int)50;
		var_429_float = var_423_float * var_423_float;
		var_413_bool = var_422_float <= var_429_float;
		return 10;
	}
	var_413_bool = 0;
	return 10;
}


func_1064(var_0_bool, var_3_object, var_5_string, var_184_object, var_185_bool, var_186_float, var_261_bool, var_347_bool)
{
	var_187_float = 0; var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_bool = 0; var_191_bool = 0; var_192_float = 0; var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_float = 0; var_198_float = 0; var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_bool = 0; var_202_bool = 0; var_203_float = 0; var_204_cvector = CVector(0,0,0); var_205_float = 0; var_206_cvector = CVector(0,0,0); var_207_bool = 0; var_208_float = 0;
	func_1293(var_206_cvector, var_207_bool, var_208_float);
	var_5_string = 0;
	var_233_bool = IsFuncExist(var_184_object, "@GetAttackDistance", (int)1);
	if(var_233_bool != 0) {
		@@var_184_object:GetAttackDistance(var_198_float);
		var_198_float = var_198_float + (int)50;
	} else {
							var_186_float = var_198_float;
	}
	var_236_bool = var_198_float >= (int)150;
	if(var_236_bool != 0) {
		var_198_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_184_object;
	IsPlayerActor(var_0_bool, var_201_bool);
	var_237_bool = var_201_bool;
	if(var_237_bool != 0) {
		PlayGlobalMusic("attack");
		var_239_object = Obj();
		func_2367(var_239_object);
		SendPlayerEnemy(var_184_object, var_239_object);
	}
	var_242_bool = var_185_bool;
	if(var_242_bool != 0) {
		var_202_bool = 0;
	} else {
						var_202_bool = 1;

	}
	var_203_float = (float)400.0 + var_198_float;
	
Label_1104:
	var_244_bool = 0;
	var_244_bool = 0;
	var_245_bool = 0; var_246_object = Obj();
	var_246_object = var_0_bool;
	func_2149(var_245_bool, var_246_object);
	if(var_245_bool != 0) {
		var_247_bool = var_3_object == 0; //@nz
		if(var_247_bool != 0) {
			var_244_bool = 1;
		}
	}
	if(var_244_bool != 0) {
		func_1706(var_208_float);
		@@@var_0_bool:GetPFPosition(var_199_cvector);
		GetPFPosition(var_200_cvector);
		var_204_cvector = var_199_cvector - var_200_cvector;
		var_205_float = var_204_cvector | var_204_cvector;
		var_253_float = var_203_float * var_203_float;
		var_254_bool = var_205_float >= var_253_float;
		if(var_254_bool != 0) {
			var_255_bool = 0; var_256_object = Obj(); var_257_float = 0; var_258_float = 0; var_259_bool = 0; var_260_bool = 0;
			var_256_object = var_0_bool;
			var_198_float = var_257_float;
			TaskCall(5);
			func_1733(var_263_bool, var_255_bool, var_256_object, var_257_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_332_bool = var_261_bool == 0; //@nz
			if(var_332_bool != 0) {
			} else {
				var_202_bool = 0;
		} else {
				var_338_float = var_186_float * var_186_float;
				var_339_bool = var_205_float >= var_338_float;
				if(var_339_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_206_cvector);
					CanReachByPF(var_207_bool, var_206_cvector);
					var_340_bool = var_207_bool == 0; //@nz
					if(var_340_bool != 0) {
						var_341_bool = 0; var_342_object = Obj(); var_343_float = 0; var_344_float = 0; var_345_bool = 0; var_346_bool = 0;
						var_342_object = var_0_bool;
						var_198_float = var_343_float;
						TaskCall(5);
						func_1733(var_349_bool, var_341_bool, var_342_object, var_343_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_350_bool = var_347_bool == 0; //@nz
						if(var_350_bool != 0) {
							goto Label_1276;
						}
						var_202_bool = 0;
						goto Label_1104;
					}
					var_351_bool = var_202_bool == 0; //@nz
					if(var_351_bool != 0) {
						var_352_object = Obj();
						var_352_object = var_0_bool;
						func_2299(var_352_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1706(var_208_float);
						StopAsync();
						var_202_bool = 1;
						var_355_bool = 0; var_356_object = Obj();
						var_356_object = var_0_bool;
						func_2149(var_355_bool, var_356_object);
						var_357_bool = var_355_bool == 0; //@nz
						if(var_357_bool != 0) {
							goto Label_1276;
						}
					}
					rand(var_208_float);
					var_358_bool = 0;
					var_360_bool = var_208_float < (float)0.25;
					if(var_360_bool != 1) {
						var_361_bool = 0;
						func_1663((bool)1, var_361_bool);
						if(var_361_bool != 1) {
							var_358_bool = 0;
						}
					}
					if(var_358_bool != 0) {
						Face(var_0_bool);
						func_1713();
						PlayAnimation("all", "attack_stay");
						var_398_bool = 0; var_399_float = 0;
						var_186_float = var_399_float;
						func_1531(var_208_float, var_398_bool, var_399_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1706(var_208_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_616_bool = 0;
						func_1663(var_208_float, var_616_bool);
						var_617_bool = var_616_bool == 0; //@nz
						if(var_617_bool == 0) goto Label_1266;
						var_618_bool = 0; var_619_object = Obj();
						var_619_object = var_0_bool;
						func_2149(var_618_bool, var_619_object);
						var_620_bool = var_618_bool == 0; //@nz
						if(var_620_bool != 0) {
							goto Label_1276;
						}
						@@@var_0_bool:GetPFPosition(var_199_cvector);
						GetPFPosition(var_200_cvector);
						var_204_cvector = var_199_cvector - var_200_cvector;
						var_205_float = var_204_cvector | var_204_cvector;
						var_621_float = var_186_float * var_186_float;
						var_622_bool = var_205_float < var_621_float;
						if(var_622_bool == 0) goto Label_1266;
						var_623_bool = 0; var_624_float = 0;
						var_186_float = var_624_float;
						func_1367(var_207_bool, var_208_float, var_623_bool, var_624_float);
						var_625_bool = var_623_bool == 0; //@nz
						if(var_625_bool == 0) goto Label_1266;
						goto Label_1276;
				}
					var_626_bool = 0; var_627_float = 0;
					var_186_float = var_627_float;
					func_1367(var_207_bool, var_208_float, var_626_bool, var_627_float);
					var_628_bool = var_626_bool == 0; //@nz
					if(var_628_bool != 0) {
						goto Label_1276;
					}
					var_202_bool = 1;

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
	var_333_object = var_3_object;
	if(var_333_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_336_bool = var_201_bool;
	if(var_336_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_3120(var_171_string, var_172_object)
{
	var_174_bool = var_171_string == "killme";
	if(var_174_bool != 0) {
		var_175_object = Obj();
		var_172_object = var_175_object;
		func_3148(var_175_object);
		return 0;
	}
	return 0;
}


func_3130(var_128_int, var_129_object)
{
	var_130_bool = 0; var_131_object = Obj();
	var_129_object = var_131_object;
	func_2149(var_130_bool, var_131_object);
	var_164_bool = var_130_bool == 0; //@nz
	if(var_164_bool != 0) {
		var_128_int = 0;
		return 0;
	}
	var_165_bool = 0; var_166_object = Obj();
	var_129_object = var_166_object;
	func_3219(var_166_object);
	if(var_165_bool != 0) {
		var_128_int = 2;
	} else {
		var_128_int = 0;
	}
	return 0;
	
}


func_2108(var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_bool = 0;
	@@var_42_object:IsDead(var_44_bool);
	var_44_bool = var_41_bool;
	return 2;
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


func_1602(var_411_bool)
{
	var_412_bool = 0;
	var_412_bool = 0;
	var_413_bool = 0;
	func_1574(var_412_bool, var_413_bool);
	if(var_413_bool != 0) {
		var_430_bool = 0;
		func_1618(var_411_bool, var_412_bool, var_430_bool);
		if(var_430_bool != 0) {
			var_412_bool = 1;
		}
	}
	if(var_412_bool != 0) {
		var_411_bool = 1;
		return 0;
	}
	var_411_bool = 0;
	return 0;
}


func_3148(var_175_object)
{
	var_176_object = Obj();
	var_175_object = var_176_object;
	func_2978(var_176_object);
	return 0;
}


func_3154(var_16_int)
{
	var_16_int = 2;
	return 0;
}


func_1618(var_0_bool, var_4_object, var_430_bool)
{
	var_431_object = Obj(); var_432_bool = 0; var_433_float = 0; var_434_cvector = CVector(0,0,0); var_435_cvector = CVector(0,0,0); var_436_object = Obj(); var_437_bool = 0; var_438_float = 0; var_439_cvector = CVector(0,0,0); var_440_cvector = CVector(0,0,0);
	GetScene(var_436_object);
	var_437_bool = 0;
	
Label_1622:
	var_441_cvector = CVector(0,0,0); var_442_object = Obj();
	var_442_object = var_0_bool;
	func_2003(var_441_cvector, var_442_object);
	var_443_int = -var_441_cvector;
	FindDirLength(var_438_float, var_443_int, var_4_object);
	var_444_bool = var_438_float < var_4_object;
	if(var_444_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_439_cvector);
		GetPFPosition(var_440_cvector);
		WaitForAnimEnd();
		func_1706(var_440_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_437_bool = 1;
		var_448_bool = 0;
		func_1574(var_440_cvector, var_448_bool);
		var_449_bool = var_448_bool == 0; //@nz
		if(var_449_bool != 0) {
			goto Label_1660;
		}
		goto Label_1622;
	}
Label_1660:
	var_437_bool = var_430_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_3157(var_24_object)
{
	var_25_object = Obj();
	var_24_object = var_25_object;
	func_3204(var_25_object);
	return 0;
}


func_3163()
{
	return 0;
}


func_3164(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_3167()
{
	return 0;
}


func_3169(var_26_bool, var_27_object)
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


func_3184(var_54_object)
{
	var_55_object = Obj();
	var_54_object = var_55_object;
	func_2960(var_55_object);
	return 0;
}


func_3190(var_43_bool)
{
	var_43_bool = 0;
	return 0;
}


func_3193()
{
	return 0;
}


func_3195(var_21_bool)
{
	var_21_bool = 0;
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
	func_2326(var_39_string);
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


func_3198()
{
	return 0;
}


func_1663(var_0_bool, var_361_bool)
{
	var_362_bool = 0; var_363_bool = 0;
	var_366_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_366_bool != 0) {
		@@@var_0_bool:IsAttacking(var_363_bool);
		var_363_bool = var_361_bool;
		return 2;
	}
	var_361_bool = 0;
	return 2;
}


func_3200()
{
	var_14_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_3204(var_25_object)
{
	var_26_bool = 0; var_27_bool = 0;
	var_28_bool = GlobalVars[0];
	if(var_28_bool != 0) {
		IsOverrideActive(var_27_bool);
		var_29_bool = var_27_bool == 0; //@nz
		if(var_29_bool != 0) {
			var_30_object = Obj();
			var_25_object = var_30_object;
			func_2489(var_30_object);
		}
		return 2;
	}
	return 2;
}


func_1674(var_2_bool, var_5_string)
{
	var_474_float = 0; var_475_int = 0; var_476_float = 0; var_477_int = 0;
	var_478_bool = var_2_bool == 0; //@nz
	if(var_478_bool != 0) {
		return 4;
	}
	var_479_string = var_5_string;
	if(var_479_string != 0) {
		var_5_string = var_5_string + (int)-1;
		var_482_bool = var_5_string > (int)0;
		if(var_482_bool != 0) {
			return 4;
		}
	}
	rand(var_476_float);
	var_483_float = 0;
	func_1724(var_483_float);
	var_484_bool = var_476_float < var_483_float;
	if(var_484_bool != 0) {
		irand(var_477_int, var_2_bool);
		var_477_int = var_477_int + (int)1;
		var_487_int = "attack" + var_477_int;
		Speak(var_487_int);
		var_488_int = 0;
		func_1722(var_488_int);
		var_5_string = var_488_int;
	}
	return 4;
}


func_3217(var_58_bool)
{
	var_58_bool = 0;
	return 0;
}


func_3219(var_165_bool)
{
	var_165_bool = 1;
	return 0;
}


func_3222(var_18_bool, var_19_object, var_20_object, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_float = 0; var_26_bool = 0;
	var_19_object = var_23_object;
	var_20_object = var_24_object;
	var_21_bool = var_26_bool;
	func_3074(var_22_bool, var_23_object, var_24_object, (float)700.0, var_26_bool);
	var_22_bool = var_18_bool;
	return 0;
}


func_3232(var_96_object)
{
	var_97_bool = 0; var_98_object = Obj();
	var_96_object = var_98_object;
	func_2018(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		var_101_object = Obj();
		func_2367(var_101_object);
		ReportReputationChange(var_96_object, var_101_object, (float)-0.07000000029802322, (bool)1);
		var_106_bool = 0;
		func_2574((bool)1);
	}
	func_2550();
	var_240_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
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
		func_2373(var_45_cvector, var_46_cvector);
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
	var_248_object = Obj();
	var_248_object = var_0_bool;
	func_2463(var_248_object);
	return 0;
}


func_171()
{
	var_15_bool = 0;
	func_2310(var_15_bool);
	var_18_bool = var_15_bool == 0; //@nz
	if(var_18_bool != 0) {
		func_3163();
	}
	return 0;
}


func_1711(var_571_int)
{
	var_571_int = 0;
	return 0;
}


func_689()
{
	var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_bool = 0;
	WaitForAnimEnd();
	var_60_bool = 0;
	func_2310(var_60_bool);
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		return 14;
	}
	func_2934((int)0);
	var_62_int = var_53_int;
	var_54_int = 0;
	
Label_703:
	var_75_bool = 0;
	var_75_bool = 0;
	var_77_bool = var_54_int < (int)5;
	if(var_77_bool != 0) {
		var_78_bool = 0;
		func_2310(var_78_bool);
		if(var_78_bool != 0) {
			var_75_bool = 1;
		}
	}
	if(var_75_bool != 0) {
		irand(var_55_int, (int)3);
		var_81_bool = var_55_int == (int)0;
		if(var_81_bool != 0) {
			var_82_int = var_53_int;
			if(var_82_int == 0) goto Label_736;
			irand(var_56_int, var_53_int);
			var_84_string = ""; var_85_int = 0;
			var_56_int = var_85_int;
			func_2927(var_84_string, var_85_int);
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
						goto Label_765;
					}
					goto Label_754;
				}
				var_96_int = var_54_int;
				if(var_96_int == 0) goto Label_754;
				goto Label_765;
		}
		Label_754:
			var_87_bool = 0;
			func_768(var_87_bool);
			var_88_bool = var_87_bool == 0; //@nz
			if(var_88_bool != 0) {
				goto Label_765;
			}
			ResetAAS();
			var_54_int = var_54_int + (int)1;
			goto Label_703;

		}
	}
Label_765:
	ResetAAS();
	return 14;
	
}


func_1713()
{
	var_367_string = "";
	func_2326("attack_stay");
	return 0;
}


func_1718()
{
	return 0;
}


func_1720(var_596_bool)
{
	var_596_bool = 1;
	return 0;
}


func_1722(var_488_int)
{
	var_488_int = 1;
	return 0;
}


func_1724(var_483_float)
{
	var_483_float = 0.5;
	return 0;
}


func_2749(var_133_int, var_134_string)
{
	var_135_int = 0; var_136_int = 0;
	GetInvItemByName(var_136_int, var_134_string);
	var_136_int = var_133_int;
	return 2;
}


func_2754(var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	TaskCall(0);
	func_0(var_15_object);
	TaskReturn();
	return 0;
}


func_1733(var_2_bool, var_255_bool, var_256_object, var_257_float, var_258_float, var_259_bool, var_260_bool)
{
	var_264_bool = 0; var_265_bool = 0; var_266_bool = 0; var_267_bool = 0;
	var_268_object = Obj();
	var_256_object = var_268_object;
	func_2463(var_268_object);
	SetTimer((int)1, (int)5);
	CanSee(var_266_bool, var_256_object);
	var_271_bool = var_266_bool;
	if(var_271_bool != 0) {
		var_2_bool = true;
		var_272_object = Obj();
		var_256_object = var_272_object;
		func_2315(var_272_object);
	} else {
		var_2_bool = false;
	}
	var_273_bool = 0; var_274_object = Obj();
	var_256_object = var_274_object;
	func_2018(var_273_bool, var_274_object);
	if(var_273_bool != 0) {
		var_277_object = Obj();
		func_2367(var_277_object);
		SendPlayerEnemy(var_256_object, var_277_object);
	}
	var_278_bool = 0; var_279_object = Obj(); var_280_float = 0; var_281_float = 0; var_282_bool = 0; var_283_bool = 0;
	var_256_object = var_279_object;
	var_257_float = var_280_float;
	var_258_float = var_281_float;
	var_259_bool = var_282_bool;
	var_260_bool = var_283_bool;
	func_1838(var_266_bool, var_267_bool, var_278_bool, var_279_object, var_280_float, var_281_float, var_282_bool, var_283_bool);
	var_278_bool = var_267_bool;
	var_329_bool = var_2_bool;
	if(var_329_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_267_bool = var_255_bool;
	return 4;
	
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


func_2799(var_17_bool, var_18_object, var_19_string)
{
	var_21_bool = var_19_string == "unholster";
	if(var_21_bool != 0) {
		var_22_bool = 0; var_23_object = Obj();
		var_18_object = var_23_object;
		func_3164(var_23_object);
		var_22_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0xb0d";
	}
	var_25_bool = var_19_string == "player_shot";
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_18_object = var_27_object;
		func_3169(var_26_bool, var_27_object);
		var_26_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0xb0d";
	}
	var_42_bool = var_19_string == "battle";
	if(var_42_bool != 0) {
		var_43_bool = 0; var_44_object = Obj();
		var_18_object = var_44_object;
		func_3190(var_44_object);
		var_43_bool = var_17_bool;
		return 0;
	}
	var_17_bool = 0;
	return 0;
}


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


func_768(var_87_bool)
{
	var_87_bool = 1;
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


func_2310(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
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
	func_2420(var_77_float, var_78_cvector, var_79_cvector);
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
	var_209_bool = 0; var_210_bool = 0; var_211_cvector = CVector(0,0,0); var_212_bool = 0; var_213_bool = 0; var_214_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_1295:
	var_218_int = var_1_bool + (int)1;
	var_219_int = "attack_begin" + var_218_int;
	HasAnimation(var_212_bool, "all", var_219_int);
	var_220_bool = var_212_bool == 0; //@nz
	if(var_220_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_1295;
	}
	var_2_bool = 0;
	
Label_1309:
	var_223_int = var_2_bool + (int)1;
	var_224_int = "attack" + var_223_int;
	IsExisting3DSound(var_213_bool, var_224_int);
	var_225_bool = var_213_bool == 0; //@nz
	if(var_225_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_1309;

	}
	GetAnimationOffset(var_214_cvector, "all", "bjump");
	var_228_float = GetByIndex(var_214_cvector, 2);
	var_4_object = -var_228_float;
	return 6;
	
}


func_2831(var_47_object, var_48_string)
{
	var_50_bool = var_48_string == "unholster";
	if(var_50_bool != 0) {
		var_47_object = Obj();
		func_3167();
	} else {
		var_53_bool = var_48_string == "player_shot";
		if(var_53_bool != 0) {
			var_54_object = Obj();
			var_47_object = var_54_object;
			func_3184(var_54_object);
			goto Label_2855;
		}
		var_121_bool = var_48_string == "battle";
		if(var_121_bool == 0) goto Label_2855;
		var_47_object = Obj();
		func_3193();
	}
Label_2855:
	return 0;
	
}


func_2326(var_39_string)
{
	var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	IsExisting3DSound(var_48_bool, var_39_string);
	var_56_bool = var_48_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_49_int = 0;

	Label_2332:
		var_58_int = var_49_int + (int)1;
		var_59_int = var_39_string + var_58_int;
		IsExisting3DSound(var_50_bool, var_59_int);
		var_60_bool = var_50_bool == 0; //@nz
		if(var_60_bool != 0) {
		} else {
			var_49_int = var_49_int + (int)1;
			goto Label_2332;
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


func_2856(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_15_object = var_20_object;
	func_3164(var_20_object);
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


func_1838(var_0_bool, var_1_bool, var_278_bool, var_279_object, var_280_float, var_281_float, var_282_bool, var_283_bool)
{
	var_284_bool = 0; var_285_bool = 0; var_286_object = Obj(); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_float = 0; var_291_object = Obj(); var_292_bool = 0; var_293_bool = 0; var_294_object = Obj(); var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_object = Obj();
	var_0_bool = false;
	var_1_bool = var_279_object;
	var_283_bool = var_293_bool;
	
Label_1842:
	var_300_bool = 0; var_301_object = Obj();
	var_279_object = var_301_object;
	func_1978(var_300_bool, var_301_object);
	var_304_bool = var_300_bool == 0; //@nz
	if(var_304_bool != 0) {
		var_278_bool = 0;
		return 16;
	}
	@@var_279_object:GetPosition(var_295_cvector);
	GetPosition(var_296_cvector);
	var_297_cvector = var_295_cvector - var_296_cvector;
	var_298_float = var_297_cvector | var_297_cvector;
	var_305_bool = 0;
	var_305_bool = 0;
	var_307_bool = var_281_float > (int)0;
	if(var_307_bool != 0) {
		var_308_float = var_281_float * var_281_float;
		var_309_bool = var_298_float > var_308_float;
		if(var_309_bool != 0) {
			var_305_bool = 1;
		}
	}
	if(var_305_bool != 0) {
		Stop();
		var_278_bool = 0;
		return 16;
	}
	var_310_float = var_280_float * var_280_float;
	var_311_bool = var_298_float > var_310_float;
	if(var_311_bool != 0) {
		@@var_279_object:GetPFPosition(var_295_cvector);
		FindPathTo(var_299_object, var_295_cvector);
		var_312_bool = var_299_object != 0; //@nn
		if(var_312_bool != 0) {
			var_299_object = var_294_object;
			var_299_object = 0;
		}
		var_313_bool = var_294_object != 0; //@nn
		if(var_313_bool != 0) {
			var_314_bool = var_293_bool;
			if(var_314_bool == 0) goto Label_1891;
			var_293_bool = 0;
			RotatePath(var_294_object, var_292_bool);
			var_315_bool = var_292_bool == 0; //@nz
			if(var_315_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_318_string = "";
				func_1985(var_318_string);
				var_319_string = "";
				func_1987(var_319_string);
				FollowPath(var_294_object, var_282_bool, var_292_bool, var_318_string, var_319_string);
				var_320_bool = var_292_bool == 0; //@nz
				if(var_320_bool != 0) {
					var_321_bool = var_0_bool;
					if(var_321_bool != 0) {
						var_294_object = 0;
						goto Label_1938;
					EMIT "GOTO 0x777";
					}
				} else {
					var_294_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_292_bool);
					var_324_bool = var_292_bool == 0; //@nz
					if(var_324_bool != 0) {
						var_325_bool = var_0_bool;
						if(var_325_bool != 0) {
							var_294_object = 0;
							goto Label_1938;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1938;
	}
			var_299_object = 0;
			goto Label_1936;

		Label_1936:
			var_294_object = 0;

		}
		goto Label_1842;
	}
Label_1938:
	var_278_bool = !var_0_bool;
	return 16;
	
}


func_1328(var_0_bool, var_492_float, var_493_int)
{
	var_494_object = Obj(); var_495_float = 0; var_496_float = 0; var_497_object = Obj(); var_498_float = 0; var_499_float = 0;
	var_501_float = var_492_float * (float)0.8999999761581421;
	GetVictim(var_501_float, var_497_object);
	ReportAttack(var_0_bool);
	var_502_bool = var_497_object == var_0_bool;
	if(var_502_bool != 0) {
		var_503_float = 0; var_504_object = Obj(); var_505_int = 0;
		var_497_object = var_504_object;
		var_493_int = var_505_int;
		func_1058(var_505_int);
		var_503_float = var_498_float;
		var_506_float = 0; var_507_object = Obj(); var_508_float = 0; var_509_int = 0;
		var_497_object = var_507_object;
		var_498_float = var_508_float;
		var_510_int = 0; var_511_object = Obj(); var_512_int = 0;
		var_497_object = var_511_object;
		var_493_int = var_512_int;
		func_1061(var_512_int);
		var_510_int = var_509_int;
		func_2035(var_506_float, var_507_object, var_508_float, var_509_int);
		var_506_float = var_499_float;
		var_571_int = 0;
		func_1711(var_571_int);
		ReportHit(var_0_bool, var_571_int, var_499_float, var_498_float);
		var_572_object = Obj(); var_573_float = 0;
		var_497_object = var_572_object;
		var_499_float = var_573_float;
		func_1718();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_826(var_0_bool)
{
	var_64_object = Obj();
	var_64_object = var_0_bool;
	func_2315(var_64_object);
	return 0;
}


func_2879(var_28_object)
{
	var_28_object = Obj();
	func_3167();
	return 0;
}


func_2367(var_101_object)
{
	var_102_object = Obj(); var_103_object = Obj();
	self(var_103_object);
	var_103_object = var_101_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2885(var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_2018(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_21_object = Obj();
		func_2367(var_21_object);
		ReportReputationChange(var_16_object, var_21_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_2373(var_45_cvector, var_46_cvector)
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


func_2383(var_544_float, var_545_float, var_546_float)
{
	var_549_bool = var_545_float < var_546_float;
	if(var_549_bool != 0) {
		var_545_float = var_544_float;
	} else {
		var_546_float = var_544_float;
	}
	return 0;
	
}


func_2898(var_14_bool, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj();
	var_19_bool = var_15_string == "heal";
	if(var_19_bool != 0) {
		FindActor(var_17_object, "player");
		var_21_bool = 0; var_22_object = Obj();
		var_17_object = var_22_object;
		func_3195(var_22_object);
		var_21_bool = var_14_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_14_bool = 0;
	return 2;
}


func_2390(var_554_float, var_555_float, var_556_float, var_557_float)
{
	var_558_bool = var_555_float < var_556_float;
	if(var_558_bool != 0) {
		var_556_float = var_554_float;
		return 0;
	}
	var_559_bool = var_555_float > var_557_float;
	if(var_559_bool != 0) {
		var_557_float = var_554_float;
		return 0;
	}
	var_555_float = var_554_float;
	return 0;
}


func_1367(var_0_bool, var_1_bool, var_455_bool, var_456_float)
{
	var_457_int = 0; var_458_bool = 0; var_459_int = 0; var_460_string = ""; var_461_int = 0; var_462_bool = 0; var_463_int = 0; var_464_string = "";
	func_1706(var_464_string);
	irand(var_461_int, var_1_bool);
	var_461_int = var_461_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2472();
	var_473_int = "attack_begin" + var_461_int;
	PlayAnimation("all", var_473_int);
	WaitForAnimEnd();
	func_1674(var_463_int, var_464_string);
	var_489_bool = 0; var_490_object = Obj();
	var_490_object = var_0_bool;
	func_2149(var_489_bool, var_490_object);
	var_491_bool = var_489_bool == 0; //@nz
	if(var_491_bool != 0) {
		StopAsync();
		var_455_bool = 0;
		return 8;
	}
	var_492_float = 0; var_493_int = 0;
	var_456_float = var_492_float;
	var_461_int = var_493_int;
	func_1328(var_464_string, var_492_float, var_493_int);
	var_576_int = "attack_middle" + var_461_int;
	HasAnimation(var_462_bool, "all", var_576_int);
	var_577_bool = var_462_bool;
	if(var_577_bool != 0) {
		func_2472();
		var_580_int = "attack_middle" + var_461_int;
		PlayAnimation("all", var_580_int);
		WaitForAnimEnd();
		func_1706(var_464_string);
		var_581_bool = 0; var_582_object = Obj();
		var_582_object = var_0_bool;
		func_2149(var_581_bool, var_582_object);
		var_583_bool = var_581_bool == 0; //@nz
		if(var_583_bool != 0) {
			StopAsync();
			var_455_bool = 0;
			return 8;
		}
		var_584_float = 0; var_585_int = 0;
		var_456_float = var_584_float;
		var_461_int = var_585_int;
		func_1328(var_464_string, var_584_float, var_585_int);
		var_463_int = 1;

	Label_1444:
		var_587_int = "attack_middle" + var_461_int;
		var_589_int = var_587_int + "_";
		var_464_string = var_589_int + var_463_int;
		HasAnimation(var_462_bool, "all", var_464_string);
		var_591_bool = var_462_bool == 0; //@nz
		if(var_591_bool != 0) {
		} else {
			func_2472();
			PlayAnimation("all", var_464_string);
			WaitForAnimEnd();
			func_1706(var_464_string);
			var_607_bool = 0; var_608_object = Obj();
			var_608_object = var_0_bool;
			func_2149(var_607_bool, var_608_object);
			var_609_bool = var_607_bool == 0; //@nz
			if(var_609_bool != 0) {
				StopAsync();
				var_455_bool = 0;
				var_610_float = 0; var_611_int = 0;
				var_456_float = var_610_float;
				var_461_int = var_611_int;
				func_1328(var_464_string, var_610_float, var_611_int);
				var_463_int = var_463_int + (int)1;
				goto Label_1444;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_595_int = "attack_end" + var_461_int;
	PlayAnimation("all", var_595_int);
	var_596_bool = 0;
	func_1720(var_596_bool);
	if(var_596_bool != 0) {
		var_597_bool = 0; var_598_float = 0;
		func_1504(var_597_bool, (float)0.75);
		StopAsync();
	}
	var_455_bool = 1;
	return 8;
	
}


func_2401(var_66_float, var_67_cvector, var_68_cvector)
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


func_2914(var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj();
	var_29_bool = var_25_string == "heal";
	if(var_29_bool != 0) {
		FindActor(var_27_object, "player");
		var_27_object = Obj();
		func_3198();
		var_27_object = 0;
	}
	return 2;
}


func_2410(var_75_float, var_76_cvector)
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


func_367(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_503(var_12_object, var_13_bool);
	return 0;
}


func_2927(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = "";
	var_72_int = var_69_int;
	if(var_72_int != 0) {
		"idle" = "idle" + var_69_int;
	}
	var_71_string = var_68_string;
	return 2;
}


func_2420(var_63_float, var_64_cvector, var_65_cvector)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	var_64_cvector = var_67_cvector;
	var_65_cvector = var_68_cvector;
	func_2401(var_66_float, var_67_cvector, var_68_cvector);
	var_75_float = 0; var_76_cvector = CVector(0,0,0);
	var_64_cvector = var_76_cvector;
	func_2410(var_75_float, var_76_cvector);
	var_84_float = 0; var_85_cvector = CVector(0,0,0);
	var_65_cvector = var_85_cvector;
	func_2410(var_84_float, var_85_cvector);
	var_86_float = var_75_float * var_84_float;
	var_63_float = var_66_float / var_86_float;
	return 0;
}


func_2934(var_62_int)
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_bool = 0;
	var_65_int = 0;
	
Label_2936:
	var_68_string = ""; var_69_int = 0;
	var_65_int = var_69_int;
	func_2927(var_68_string, var_69_int);
	HasAnimation(var_66_bool, "all", var_68_string);
	var_73_bool = var_66_bool == 0; //@nz
	if(var_73_bool != 0) {
	} else {
		var_65_int = var_65_int + (int)1;
		goto Label_2936;
	}
	var_65_int = var_62_int;
	return 4;
	
}


func_375(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_510(var_17_bool, var_18_int);
	return 0;
}


func_2437(var_562_float)
{
	var_563_object = Obj(); var_564_object = Obj();
	CreateFloatVector(var_564_object);
	@@var_564_object:add(var_562_float);
	var_566_bool = var_562_float < (int)0;
	if(var_566_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_564_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2951(var_56_int)
{
	var_58_bool = 0;
	func_3217(var_58_bool);
	if(var_58_bool != 0) {
		var_56_int = 2;
	} else {
		var_56_int = 0;
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
	func_2951(var_57_object);
	var_56_int = var_18_int;
	var_60_bool = var_18_int > (int)0;
	if(var_60_bool != 0) {
		var_62_bool = var_18_int > (int)1;
		if(var_62_bool != 0) {
			func_375(var_18_int);
		}
		var_64_object = Obj();
		var_14_object = var_64_object;
		func_2960(var_64_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2960(var_55_object)
{
	var_56_object = Obj();
	var_55_object = var_56_object;
	TaskCall(3);
	func_775(var_57_object, var_56_object);
	TaskReturn();
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


func_2454(var_115_int)
{
	var_116_float = 0; var_117_float = 0;
	GetGameTime(var_117_float);
	var_119_int = 0;
	var_119_int = var_117_float / (int)24;
	var_115_int = (int)1 + var_119_int;
	return 2;
}


func_2968(var_83_int, var_84_object)
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


func_2463(var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsPlayerActor(var_16_object, var_18_bool);
	var_19_bool = var_18_bool;
	if(var_19_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2978(var_176_object)
{
	var_177_object = Obj();
	var_176_object = var_177_object;
	TaskCall(4);
	func_1050(var_177_object);
	TaskReturn();
	return 0;
}


func_2472()
{
	var_467_object = Obj(); var_468_object = Obj();
	GetScene(var_468_object);
	var_470_object = Obj();
	func_2367(var_470_object);
	BroadcastMessage("battle", var_470_object, var_468_object);
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


func_2986(var_29_bool, var_30_object, var_31_bool)
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
	EMIT "GOTO 0xbf3";
	}
	var_54_bool = var_35_string == "rat_big";
	if(var_54_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	var_56_bool = var_35_string == "dog";
	if(var_56_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	var_58_bool = var_35_string == "grabitel";
	if(var_58_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	var_60_bool = var_35_string == "bomber";
	if(var_60_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	var_62_bool = var_35_string == "sanitar";
	if(var_62_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	var_64_bool = var_35_string == "hunter";
	if(var_64_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	var_66_bool = var_35_string == "soldier";
	if(var_66_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_29_bool = 1;
	return 4;
}


func_432(var_0_bool, var_1_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_25_float, (float)0.5);
	Sleep(var_25_float);
	
Label_440:
	var_32_bool = var_0_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_33_bool = var_1_bool == 0; //@nz
		if(var_33_bool != 0) {

		Label_444:
			GetPosition(var_27_cvector);
			var_34_float = 0;
			func_491(var_34_float);
			GetRandomPFPointInCircle(var_26_cvector, var_27_cvector, var_34_float, var_28_bool);
			var_37_bool = var_28_bool;
			if(var_37_bool != 0) {
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
	var_38_object = Obj(); var_39_cvector = CVector(0,0,0);
	var_26_cvector = var_39_cvector;
	func_519(var_38_object, var_39_cvector);
	var_38_object = var_29_object;
	var_42_bool = var_29_object != 0; //@nn
	if(var_42_bool != 0) {
		RotatePath(var_29_object, var_30_bool);
		var_43_bool = var_30_bool;
		if(var_43_bool != 0) {
			var_44_bool = 0;
			func_517(var_44_bool);
			FollowPath(var_29_object, var_44_bool, var_30_bool);
			var_29_object = 0;
			var_45_bool = var_30_bool;
			if(var_45_bool != 0) {
				TaskCall(2);
				func_689();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_29_object = 0;
	goto Label_440;
	
}


func_2483(var_220_int)
{
	var_221_int = 0; var_222_int = 0;
	GetVariable("branch", var_222_int);
	var_222_int = var_220_int;
	return 2;
}


func_2489(var_30_object)
{
	var_31_int = 0;
	func_2483(var_31_int);
	var_36_bool = var_31_int == (int)1;
	if(var_36_bool != 0) {
		WorkWithCorpse(var_30_object);
	} else {
		Barter(var_30_object);
	}
	return 0;
	
}


func_1978(var_24_bool, var_25_object)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	func_2149(var_26_bool, var_27_object);
	var_26_bool = var_24_bool;
	return 0;
}


func_1985(var_318_string)
{
	var_318_string = "walk";
	return 0;
}


func_1987(var_319_string)
{
	var_319_string = "run";
	return 0;
}


func_1989(var_534_string, var_535_int)
{
	var_537_bool = var_535_int == (int)2;
	if(var_537_bool != 0) {
		var_534_string = "fire";
		return 0;
	EMIT "GOTO 0x7d1";
	}
	var_539_bool = var_535_int == (int)1;
	if(var_539_bool != 0) {
		var_534_string = "bullet";
		return 0;
	}
	var_534_string = "phys";
	return 0;
}


func_2502(var_112_int, var_113_int)
{
	var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_bool = 0;
	var_127_bool = var_112_int > var_113_int;
	if(var_127_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_125_int = 0;
	var_129_bool = var_112_int != var_113_int;
	if(var_129_bool != 0) {
		var_130_int = var_113_int - var_112_int;
		irand(var_125_int, var_130_int);
	} else {
		var_139_bool = var_112_int == (int)0;
		if(var_139_bool == 0) goto Label_2520;
		return 4;
	}
Label_2520:
	var_125_int = var_125_int + var_112_int;
	var_132_bool = var_125_int == (int)0;
	if(var_132_bool != 0) {
		return 4;
	}
	var_133_int = 0; var_134_string = "";
	func_2749(var_133_int, "Money");
	AddItem(var_126_bool, var_133_int, (int)0, var_125_int);
	return 4;
	
}


func_974()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2003(var_47_cvector, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_48_object:GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
	return 4;
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


func_1504(var_597_bool, var_598_float)
{
	var_599_float = 0; var_600_bool = 0; var_601_float = 0; var_602_bool = 0;
	rand(var_601_float);
	var_603_bool = var_601_float < var_598_float;
	if(var_603_bool != 0) {

	Label_1509:
		IsAnimationPlaying(var_602_bool);
		var_604_bool = var_602_bool == 0; //@nz
		if(var_604_bool != 0) {
		} else {
			var_605_bool = 0;
			func_1602(var_605_bool);
			if(var_605_bool != 0) {
				var_597_bool = 1;
				sync();
				goto Label_1509;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1706(var_602_bool);
	}
	goto Label_1529;
	
Label_1529:
	var_597_bool = 0;
	return 4;
	
}


func_2018(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_bool = 0;
	IsPlayerActor(var_98_object, var_100_bool);
	var_100_bool = var_97_bool;
	return 2;
}


func_2533(var_226_string)
{
	var_227_object = Obj(); var_228_int = 0; var_229_bool = 0; var_230_object = Obj(); var_231_int = 0; var_232_bool = 0;
	CreateInvItem(var_230_object);
	@@var_230_object:SetItemName(var_226_string);
	@@var_230_object:SetProperty("Organ", (int)1);
	@@var_230_object:GetItemID(var_231_int);
	AddItem(var_232_bool, var_230_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


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


func_491(var_34_float)
{
	var_35_float = 0; var_36_float = 0;
	GetCameraFarDistance(var_36_float);
	var_36_float = var_34_float;
	return 2;
}


func_2035(var_506_float, var_507_object, var_508_float, var_509_int)
{
	var_513_int = 0; var_514_string = ""; var_515_int = 0; var_516_float = 0; var_517_float = 0; var_518_float = 0; var_519_int = 0; var_520_string = ""; var_521_int = 0; var_522_float = 0; var_523_float = 0; var_524_float = 0;
	var_525_bool = 0; var_526_object = Obj(); var_527_string = "";
	var_507_object = var_526_object;
	func_2023(var_525_bool, var_526_object, "health");
	var_528_bool = var_525_bool == 0; //@nz
	if(var_528_bool != 0) {
		var_506_float = 0.0;
		return 12;
	}
	var_529_bool = 0; var_530_object = Obj(); var_531_string = "";
	var_507_object = var_530_object;
	func_2023(var_529_bool, var_530_object, "armor");
	var_532_bool = var_529_bool == 0; //@nz
	if(var_532_bool != 0) {
		var_519_int = 0;
	} else {
			@@var_507_object:GetProperty("armor", var_519_int);
	}
	var_534_string = ""; var_535_int = 0;
	var_509_int = var_535_int;
	func_1989(var_534_string, var_535_int);
	var_520_string = "armor_" + var_534_string;
	var_540_bool = 0; var_541_object = Obj(); var_542_string = "";
	var_507_object = var_541_object;
	var_520_string = var_542_string;
	func_2023(var_540_bool, var_541_object, var_542_string);
	var_543_bool = var_540_bool == 0; //@nz
	if(var_543_bool != 0) {
		var_521_int = 0;
	} else {
		@@var_507_object:GetProperty(var_520_string, var_521_int);

	}
	var_544_float = 0; var_545_float = 0; var_546_float = 0;
	var_547_int = var_519_int + var_521_int;
	var_545_float = var_547_int / (float)100.0;
	func_2383(var_544_float, var_545_float, (float)1);
	var_544_float = var_522_float;
	@@var_507_object:GetProperty("health", var_523_float);
	var_552_int = (int)1 - var_522_float;
	var_524_float = var_508_float * var_552_int;
	var_554_float = 0; var_555_float = 0; var_556_float = 0; var_557_float = 0;
	var_555_float = var_523_float - var_524_float;
	func_2390(var_554_float, var_555_float, (float)0, (float)1);
	@@var_507_object:SetProperty("health", var_554_float);
	var_560_bool = 0; var_561_object = Obj();
	var_507_object = var_561_object;
	func_2018(var_560_bool, var_561_object);
	if(var_560_bool != 0) {
		var_562_float = 0;
		var_562_float = -var_524_float;
		func_2437(var_562_float);
	}
	var_524_float = var_506_float;
	return 12;
	
}


func_3061(var_80_int, var_81_object)
{
	var_83_int = 0; var_84_object = Obj();
	var_81_object = var_84_object;
	func_2968(var_83_int, var_84_object);
	var_83_int = var_80_int;
	return 0;
}


func_2550()
{
	var_220_int = 0;
	func_2483(var_220_int);
	var_225_bool = var_220_int != (int)1;
	if(var_225_bool != 0) {
		return 0;
	}
	var_226_string = "";
	func_2533("liver");
	var_237_string = "";
	func_2533("kidney");
	var_238_string = "";
	func_2533("heart");
	var_239_string = "";
	func_2533("blood");
	return 0;
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1531(var_0_bool, var_398_bool, var_399_float)
{
	var_400_bool = 0; var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_cvector = CVector(0,0,0); var_404_float = 0; var_405_bool = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0;
	
Label_1532:
	IsAnimationPlaying(var_405_bool);
	var_410_bool = var_405_bool == 0; //@nz
	if(var_410_bool != 0) {
	} else {
		var_411_bool = 0;
		func_1602(var_411_bool);
		if(var_411_bool != 0) {
			var_398_bool = 1;
			return 10;
		}
		var_450_bool = 0; var_451_object = Obj();
		var_451_object = var_0_bool;
		func_2149(var_450_bool, var_451_object);
		var_452_bool = var_450_bool == 0; //@nz
		if(var_452_bool != 0) {
			var_398_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_406_cvector);
		GetPFPosition(var_407_cvector);
		var_408_cvector = var_406_cvector - var_407_cvector;
		var_409_float = var_408_cvector | var_408_cvector;
		var_453_float = var_399_float * var_399_float;
		var_454_bool = var_409_float < var_453_float;
		if(var_454_bool != 0) {
			var_455_bool = 0; var_456_float = 0;
			var_399_float = var_456_float;
			func_1367(var_408_cvector, var_409_float, var_455_bool, var_456_float);
			var_398_bool = 1;
			sync();
			goto Label_1532;
		}
		return 10;
	}
	func_1706(var_409_float);
	var_398_bool = 0;
	return 10;
	
}


func_3068(var_119_object)
{
	var_120_object = Obj();
	var_119_object = var_120_object;
	func_2978(var_120_object);
	return 0;
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


