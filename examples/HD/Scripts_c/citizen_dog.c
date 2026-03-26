// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:Can't retreat, distance: |W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:idle|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier
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
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0x7c5 vars=
// @EVENT_7: op=0x833 vars=int
// @EVENT_41: op=0x86e vars=object
// @STANDALONE_EVENT_16: op=0xa81 vars=object,string
// @STANDALONE_EVENT_41: op=0xa8e vars=object
// @STANDALONE_EVENT_22: op=0xa94 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xa9c vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x135,0x143,0x156,0x15c,0x168,0x17f,0x1f0,0x28e,0x29c,0x2a3,0x3c0,0x3d9,0x405,0x40c,0x41a,0x422,0x425,0x6b6,0x6be,0x6f6,0x711,0x720,0x794,0x7a6,0x7b1,0x7ba,0x7c5,0x86e,0x887,0xa16,0xa1d,0xa28,0xa30,0xa39,0xa43,0xa79,0xa8e,0xa94,0xa9c,0xaa6,0xac6,0xaf6,0xafc,0xb3e,0xb47,0xb4f,0xb59,0xbac,0xbb3,0xbd6,0xbd9,0xbdb,0xbde,0xbe0,0xbe3,0xbea,0xbed,0xbfe,0xc06,0xc09,0xc0b,0xc0e,0xc14,0xc18,0xc22

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_3040(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_23_object = Obj();
		var_16_bool = var_23_object;
		func_3043(var_23_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_3049();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_3040(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_367(var_18_int);
		}
		var_26_object = Obj();
		var_16_bool = var_26_object;
		func_3043(var_26_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2812(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2895(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_367(var_18_int);
		}
		var_69_object = Obj();
		var_16_bool = var_69_object;
		func_2905(var_69_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_3096(var_21_bool, var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_83_int = 0; var_84_object = Obj(); var_85_bool = 0;
		var_16_object = var_84_object;
		var_18_bool = var_85_bool;
		func_2988(var_84_object, var_85_bool);
		var_83_int = var_20_int;
		var_117_bool = var_20_int > (int)0;
		if(var_117_bool != 0) {
			var_119_bool = var_20_int > (int)1;
			if(var_119_bool != 0) {
				func_367(var_20_int);
			}
			var_121_object = Obj();
			var_16_object = var_121_object;
			func_2995(var_121_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_3030(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_367(var_18_int);
		}
		var_16_bool = Obj();
		func_3033();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_2726(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_367(var_19_int);
		var_49_object = Obj(); var_50_string = "";
		var_16_cvector = var_49_object;
		var_17_bool = var_50_string;
		func_2758(var_49_object, var_50_string);
	} else {
		var_132_int = 0; var_133_string = ""; var_134_object = Obj();
		var_17_bool = var_133_string;
		var_16_cvector = var_134_object;
		func_3035(var_134_object);
		var_132_int = var_19_int;
		var_136_bool = var_19_int > (int)0;
		if(var_136_bool == 0) goto Label_308;
		var_138_bool = var_19_int > (int)1;
		if(var_138_bool != 0) {
			func_367(var_19_int);
		}
		var_139_string = ""; var_140_object = Obj();
		var_17_bool = var_139_string;
		var_16_cvector = var_140_object;
		func_3038();
	}
Label_308:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2825(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_367(var_16_bool);
		var_27_string = "";
		var_16_bool = var_27_string;
		func_2841(var_27_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2783(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_367(var_16_bool);
		var_30_object = Obj();
		var_16_bool = var_30_object;
		func_2806(var_30_object);
	} else {
		var_32_object = Obj();
		var_16_bool = var_32_object;
		func_392(var_16_bool, var_32_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_object = Obj();
	var_16_bool = var_17_object;
	func_392(var_16_bool, var_17_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_18_bool = var_16_bool != (int)110;
	if(var_18_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_367(var_15_bool);
	func_3049();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_367(var_16_bool);
	var_16_bool = Obj();
	func_2702();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	RequestClearPath(var_16_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_3040(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_770();
		}
		var_25_object = Obj();
		var_16_bool = var_25_object;
		func_3043(var_25_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2812(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2895(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_770();
		}
		var_68_object = Obj();
		var_16_bool = var_68_object;
		func_2905(var_68_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_3096(var_21_bool, var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_83_int = 0; var_84_object = Obj(); var_85_bool = 0;
		var_16_object = var_84_object;
		var_18_bool = var_85_bool;
		func_2988(var_84_object, var_85_bool);
		var_83_int = var_20_int;
		var_117_bool = var_20_int > (int)0;
		if(var_117_bool != 0) {
			var_119_bool = var_20_int > (int)1;
			if(var_119_bool != 0) {
				func_770();
			}
			var_120_object = Obj();
			var_16_object = var_120_object;
			func_2995(var_120_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_3030(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_770();
		}
		var_16_bool = Obj();
		func_3033();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_2726(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_770();
		var_48_object = Obj(); var_49_string = "";
		var_16_cvector = var_48_object;
		var_17_bool = var_49_string;
		func_2758(var_48_object, var_49_string);
	} else {
		var_131_int = 0; var_132_string = ""; var_133_object = Obj();
		var_17_bool = var_132_string;
		var_16_cvector = var_133_object;
		func_3035(var_133_object);
		var_131_int = var_19_int;
		var_135_bool = var_19_int > (int)0;
		if(var_135_bool == 0) goto Label_653;
		var_137_bool = var_19_int > (int)1;
		if(var_137_bool != 0) {
			func_770();
		}
		var_138_string = ""; var_139_object = Obj();
		var_17_bool = var_138_string;
		var_16_cvector = var_139_object;
		func_3038();
	}
Label_653:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2825(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_770();
		var_26_string = "";
		var_16_bool = var_26_string;
		func_2841(var_26_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_770();
	func_3049();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2783(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_770();
		var_29_object = Obj();
		var_16_bool = var_29_object;
		func_2806(var_29_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_3040(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_974();
		}
		var_27_object = Obj();
		var_16_bool = var_27_object;
		func_3043(var_27_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2812(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2895(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_974();
		}
		var_70_object = Obj();
		var_16_bool = var_70_object;
		func_2905(var_70_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_3096(var_21_bool, var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_83_int = 0; var_84_object = Obj(); var_85_bool = 0;
		var_16_object = var_84_object;
		var_18_bool = var_85_bool;
		func_2988(var_84_object, var_85_bool);
		var_83_int = var_20_int;
		var_117_bool = var_20_int > (int)0;
		if(var_117_bool != 0) {
			var_119_bool = var_20_int > (int)1;
			if(var_119_bool != 0) {
				func_974();
			}
			var_122_object = Obj();
			var_16_object = var_122_object;
			func_2995(var_122_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_3030(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_974();
		}
		var_16_bool = Obj();
		func_3033();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_2726(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_974();
		var_50_object = Obj(); var_51_string = "";
		var_16_cvector = var_50_object;
		var_17_bool = var_51_string;
		func_2758(var_50_object, var_51_string);
	} else {
		var_133_int = 0; var_134_string = ""; var_135_object = Obj();
		var_17_bool = var_134_string;
		var_16_cvector = var_135_object;
		func_3035(var_135_object);
		var_133_int = var_19_int;
		var_137_bool = var_19_int > (int)0;
		if(var_137_bool == 0) goto Label_959;
		var_139_bool = var_19_int > (int)1;
		if(var_139_bool != 0) {
			func_974();
		}
		var_140_string = ""; var_141_object = Obj();
		var_17_bool = var_140_string;
		var_16_cvector = var_141_object;
		func_3038();
	}
Label_959:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2825(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_974();
		var_28_string = "";
		var_16_bool = var_28_string;
		func_2841(var_28_string);
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_974();
	var_16_bool = Obj();
	func_2702();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_22_bool = var_16_bool != (int)111;
	if(var_22_bool != 0) {
		return 4;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_0_bool;
	func_2348(var_23_bool, var_24_object);
	var_57_bool = var_23_bool == 0; //@nz
	if(var_57_bool != 0) {
		func_974();
		return 4;
	}
	GetDirection(var_19_cvector);
	var_60_cvector = CVector(0,0,0); var_61_object = Obj();
	var_61_object = var_0_bool;
	func_2202(var_60_cvector, var_61_object);
	var_60_cvector = var_20_cvector;
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	var_19_cvector = var_67_cvector;
	var_20_cvector = var_68_cvector;
	func_2627(var_66_float, var_67_cvector, var_68_cvector);
	var_91_bool = var_66_float < (float)0.4999999701976776;
	if(var_91_bool != 0) {
		var_92_object = Obj();
		var_92_object = var_0_bool;
		func_2498(var_92_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_974();
	func_3049();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2783(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_974();
		var_31_object = Obj();
		var_16_bool = var_31_object;
		func_2806(var_31_object);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1796(var_15_bool);
	func_3049();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	var_18_bool = var_16_bool == (int)1;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_19_object = var_1_bool;
		func_2661(var_19_object);
	} else {
		var_24_int = 0;
		var_16_bool = var_24_int;
		func_1940(var_15_cvector, var_16_bool, var_24_int);
	}
	return 0;
	
}


task_5_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_bool == var_16_bool;
	if(var_18_bool != 0) {
		var_19_bool = var_2_bool == 0; //@nz
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_bool = true;
		var_20_object = Obj();
		var_16_bool = var_20_object;
		func_2514(var_20_object);
	}
	return 0;
}


task_5_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_bool == var_16_bool;
	if(var_18_bool != 0) {
		var_19_bool = var_2_bool;
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_5_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	RequestClearPath(var_16_bool);
	return 0;
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	func_1796(var_16_bool);
	var_16_bool = Obj();
	func_2702();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_2151(var_15_bool);
	func_3049();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_int)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_int != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1996(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_2167((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_2150;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_2197(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_2150:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	func_2151(var_16_object);
	var_16_object = Obj();
	func_2702();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0;
	var_21_bool = var_17_string == "health";
	if(var_21_bool != 0) {
		GetProperty("health", var_19_float);
		var_24_bool = var_19_float <= (int)0;
		if(var_24_bool != 0) {
			SignalDeath(var_16_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_2681(var_17_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	var_16_object = var_20_object;
	var_17_int = var_21_int;
	var_18_float = var_22_float;
	func_2416(var_20_object, var_21_int, var_22_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_16_object = var_22_object;
	var_17_int = var_23_int;
	var_18_float = var_24_float;
	var_20_cvector = var_25_cvector;
	var_21_cvector = var_26_cvector;
	func_2484(var_24_float, var_25_cvector, var_26_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	SensePlayerOnly((bool)1);
	func_3088();
	func_171();
	
Label_165:
	var_2_bool = false;
	func_432(var_14_cvector, var_15_bool);
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_0(var_18_object)
{
	EventDisable(0);
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_33(var_19_object);
	var_99_object = Obj();
	var_18_object = var_99_object;
	func_3106(var_99_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_517(var_47_bool)
{
	var_47_bool = 0;
	return 0;
}


func_3078(var_46_bool)
{
	var_46_bool = 0;
	return 0;
}


func_519(var_41_object, var_42_cvector)
{
	var_43_object = Obj(); var_44_object = Obj();
	FindShiftedPathTo(var_44_object, var_42_cvector);
	var_44_object = var_41_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2566(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj();
	self(var_106_object);
	var_106_object = var_104_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3081()
{
	return 0;
}


func_3083(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_2572(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0;
	var_58_int = var_49_cvector | var_49_cvector;
	var_57_float = sqrt(var_58_int);
	var_59_float = 9.999999974752427e-07;
	var_60_bool = var_57_float < var_59_float;
	if(var_60_bool != 0) {
		var_48_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_48_cvector = var_49_cvector / var_57_float;
	return 2;
}


func_3086()
{
	return 0;
}


func_3088()
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_3092()
{
	return 0;
}


func_2582(var_509_float, var_510_float, var_511_float)
{
	var_514_bool = var_510_float < var_511_float;
	if(var_514_bool != 0) {
		var_510_float = var_509_float;
	} else {
		var_511_float = var_509_float;
	}
	return 0;
	
}


func_3094(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_3096(var_21_bool, var_22_object, var_23_object, var_24_bool)
{
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_float = 0; var_29_bool = 0;
	var_22_object = var_26_object;
	var_23_object = var_27_object;
	var_24_bool = var_29_bool;
	func_3001(var_25_bool, var_26_object, var_27_object, (float)500.0, var_29_bool);
	var_25_bool = var_21_bool;
	return 0;
}


func_1050(var_124_object)
{
	var_131_object = Obj(); var_132_bool = 0; var_133_float = 0;
	var_124_object = var_131_object;
	func_1064(var_127_int, var_128_bool, var_129_float, var_130_int, var_124_object, var_131_object, (bool)1, (float)180.0);
	return 0;
}


func_2589(var_519_float, var_520_float, var_521_float, var_522_float)
{
	var_523_bool = var_520_float < var_521_float;
	if(var_523_bool != 0) {
		var_521_float = var_519_float;
		return 0;
	}
	var_524_bool = var_520_float > var_522_float;
	if(var_524_bool != 0) {
		var_522_float = var_519_float;
		return 0;
	}
	var_520_float = var_519_float;
	return 0;
}


func_33(var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0);
	var_40_bool = var_19_object == 0; //@ne
	if(var_40_bool != 0) {
		var_41_string = "";
		func_124("fdie");
	} else {
		@@var_19_object:GetPosition(var_30_cvector);
		GetPosition(var_31_cvector);
		GetDirection(var_32_cvector);
		var_33_cvector = var_31_cvector - var_30_cvector;
		var_73_float = GetByIndex(var_33_cvector, 0);
		var_74_float = GetByIndex(var_32_cvector, 0);
		var_75_float = var_73_float * var_74_float;
		var_76_float = GetByIndex(var_33_cvector, 2);
		var_77_float = GetByIndex(var_32_cvector, 2);
		var_78_float = var_76_float * var_77_float;
		var_79_int = var_75_float + var_78_float;
		var_81_bool = var_79_int >= (int)0;
		if(var_81_bool != 0) {
			var_34_string = "fdie";
		} else {
				var_34_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_19_object = var_35_object;
		var_84_bool = IsFuncExist(var_19_object, "GetScriptProperty", (int)2);
		if(var_84_bool != 0) {
			@@var_19_object:HasScriptProperty(var_36_bool, "Owner");
			var_86_bool = var_36_bool;
			if(var_86_bool != 0) {
				@@var_19_object:GetScriptProperty(var_35_object, "Owner");
				var_88_bool = var_35_object == 0; //@ne
				if(var_88_bool != 0) {
					var_19_object = var_35_object;
				}
			}
		}
		var_91_bool = IsFuncExist(var_35_object, "@GetEyesHeight", (int)1);
		if(var_91_bool != 0) {
			@@var_35_object:GetEyesHeight(var_38_float);
			var_39_cvector = CVector(0.0, 0.0, 0.0);
			var_92_float = GetByIndex(var_39_cvector, 1);
			var_38_float = var_92_float;
			SetByIndex(var_39_cvector, 1) = var_92_float;
			LookAsync(var_19_object, "head", var_39_cvector);
			var_37_bool = 1;
		} else {
			var_37_bool = 0;

		}
		var_94_string = "";
		var_34_string = var_94_string;
		func_2525(var_94_string);
		PlayAnimation("all", var_34_string);
		WaitForAnimEnd();
		var_96_bool = var_37_bool;
		if(var_96_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_34_string);
		RemoveEnvelope();
		var_35_object = 0;
	}
	return 20;
	
}


func_3106(var_99_object)
{
	var_100_bool = 0; var_101_object = Obj();
	var_99_object = var_101_object;
	func_2217(var_100_bool, var_101_object);
	if(var_100_bool != 0) {
		var_104_object = Obj();
		func_2566(var_104_object);
		ReportReputationChange(var_99_object, var_104_object, (float)0.0, (bool)1);
	}
	var_109_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1058(var_468_float)
{
	var_468_float = 0.20000000298023224;
	return 0;
}


func_1061(var_475_int)
{
	var_475_int = 0;
	return 0;
}


func_1574(var_0_bool, var_374_bool)
{
	var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_float = 0; var_379_float = 0; var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0); var_383_float = 0; var_384_float = 0;
	var_385_bool = 0; var_386_object = Obj();
	var_386_object = var_0_bool;
	func_2348(var_385_bool, var_386_object);
	var_387_bool = var_385_bool == 0; //@nz
	if(var_387_bool != 0) {
		var_374_bool = 0;
		return 10;
	}
	var_388_bool = 0;
	func_1663(var_384_float, var_388_bool);
	if(var_388_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_380_cvector);
		GetPFPosition(var_381_cvector);
		var_382_cvector = var_380_cvector - var_381_cvector;
		var_383_float = var_382_cvector | var_382_cvector;
		@@@var_0_bool:GetAttackDistance(var_384_float);
		var_384_float = var_384_float + (int)50;
		var_390_float = var_384_float * var_384_float;
		var_374_bool = var_383_float <= var_390_float;
		return 10;
	}
	var_374_bool = 0;
	return 10;
}


func_1064(var_0_bool, var_3_object, var_5_object, var_131_object, var_132_bool, var_133_float, var_208_bool, var_300_bool)
{
	var_134_float = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_bool = 0; var_138_bool = 0; var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_bool = 0; var_144_float = 0; var_145_float = 0; var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_bool = 0; var_149_bool = 0; var_150_float = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0; var_153_cvector = CVector(0,0,0); var_154_bool = 0; var_155_float = 0;
	func_1293(var_153_cvector, var_154_bool, var_155_float);
	var_5_object = 0;
	var_180_bool = IsFuncExist(var_131_object, "@GetAttackDistance", (int)1);
	if(var_180_bool != 0) {
		@@var_131_object:GetAttackDistance(var_145_float);
		var_145_float = var_145_float + (int)50;
	} else {
							var_133_float = var_145_float;
	}
	var_183_bool = var_145_float >= (int)150;
	if(var_183_bool != 0) {
		var_145_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_131_object;
	IsPlayerActor(var_0_bool, var_148_bool);
	var_184_bool = var_148_bool;
	if(var_184_bool != 0) {
		PlayGlobalMusic("attack");
		var_186_object = Obj();
		func_2566(var_186_object);
		SendPlayerEnemy(var_131_object, var_186_object);
	}
	var_189_bool = var_132_bool;
	if(var_189_bool != 0) {
		var_149_bool = 0;
	} else {
						var_149_bool = 1;

	}
	var_150_float = (float)400.0 + var_145_float;
	
Label_1104:
	var_191_bool = 0;
	var_191_bool = 0;
	var_192_bool = 0; var_193_object = Obj();
	var_193_object = var_0_bool;
	func_2348(var_192_bool, var_193_object);
	if(var_192_bool != 0) {
		var_194_bool = var_3_object == 0; //@nz
		if(var_194_bool != 0) {
			var_191_bool = 1;
		}
	}
	if(var_191_bool != 0) {
		func_1706(var_155_float);
		@@@var_0_bool:GetPFPosition(var_146_cvector);
		GetPFPosition(var_147_cvector);
		var_151_cvector = var_146_cvector - var_147_cvector;
		var_152_float = var_151_cvector | var_151_cvector;
		var_200_float = var_150_float * var_150_float;
		var_201_bool = var_152_float >= var_200_float;
		if(var_201_bool != 0) {
			var_202_bool = 0; var_203_object = Obj(); var_204_float = 0; var_205_float = 0; var_206_bool = 0; var_207_bool = 0;
			var_203_object = var_0_bool;
			var_145_float = var_204_float;
			TaskCall(5);
			func_1733(var_210_bool, var_202_bool, var_203_object, var_204_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_285_bool = var_208_bool == 0; //@nz
			if(var_285_bool != 0) {
			} else {
				var_149_bool = 0;
		} else {
				var_291_float = var_133_float * var_133_float;
				var_292_bool = var_152_float >= var_291_float;
				if(var_292_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_153_cvector);
					CanReachByPF(var_154_bool, var_153_cvector);
					var_293_bool = var_154_bool == 0; //@nz
					if(var_293_bool != 0) {
						var_294_bool = 0; var_295_object = Obj(); var_296_float = 0; var_297_float = 0; var_298_bool = 0; var_299_bool = 0;
						var_295_object = var_0_bool;
						var_145_float = var_296_float;
						TaskCall(5);
						func_1733(var_302_bool, var_294_bool, var_295_object, var_296_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_303_bool = var_300_bool == 0; //@nz
						if(var_303_bool != 0) {
							goto Label_1276;
						}
						var_149_bool = 0;
						goto Label_1104;
					}
					var_304_bool = var_149_bool == 0; //@nz
					if(var_304_bool != 0) {
						var_305_object = Obj();
						var_305_object = var_0_bool;
						func_2498(var_305_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1706(var_155_float);
						StopAsync();
						var_149_bool = 1;
						var_316_bool = 0; var_317_object = Obj();
						var_317_object = var_0_bool;
						func_2348(var_316_bool, var_317_object);
						var_318_bool = var_316_bool == 0; //@nz
						if(var_318_bool != 0) {
							goto Label_1276;
						}
					}
					rand(var_155_float);
					var_319_bool = 0;
					var_321_bool = var_155_float < (float)0.25;
					if(var_321_bool != 1) {
						var_322_bool = 0;
						func_1663((bool)1, var_322_bool);
						if(var_322_bool != 1) {
							var_319_bool = 0;
						}
					}
					if(var_319_bool != 0) {
						Face(var_0_bool);
						func_1713();
						PlayAnimation("all", "attack_stay");
						var_359_bool = 0; var_360_float = 0;
						var_133_float = var_360_float;
						func_1531(var_155_float, var_359_bool, var_360_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1706(var_155_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_581_bool = 0;
						func_1663(var_155_float, var_581_bool);
						var_582_bool = var_581_bool == 0; //@nz
						if(var_582_bool == 0) goto Label_1266;
						var_583_bool = 0; var_584_object = Obj();
						var_584_object = var_0_bool;
						func_2348(var_583_bool, var_584_object);
						var_585_bool = var_583_bool == 0; //@nz
						if(var_585_bool != 0) {
							goto Label_1276;
						}
						@@@var_0_bool:GetPFPosition(var_146_cvector);
						GetPFPosition(var_147_cvector);
						var_151_cvector = var_146_cvector - var_147_cvector;
						var_152_float = var_151_cvector | var_151_cvector;
						var_586_float = var_133_float * var_133_float;
						var_587_bool = var_152_float < var_586_float;
						if(var_587_bool == 0) goto Label_1266;
						var_588_bool = 0; var_589_float = 0;
						var_133_float = var_589_float;
						func_1367(var_154_bool, var_155_float, var_588_bool, var_589_float);
						var_590_bool = var_588_bool == 0; //@nz
						if(var_590_bool == 0) goto Label_1266;
						goto Label_1276;
				}
					var_591_bool = 0; var_592_float = 0;
					var_133_float = var_592_float;
					func_1367(var_154_bool, var_155_float, var_591_bool, var_592_float);
					var_593_bool = var_591_bool == 0; //@nz
					if(var_593_bool != 0) {
						goto Label_1276;
					}
					var_149_bool = 1;

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
	var_286_object = var_3_object;
	if(var_286_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_289_bool = var_148_bool;
	if(var_289_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2600(var_79_float, var_80_cvector, var_81_cvector)
{
	var_82_int = var_80_cvector | var_81_cvector;
	var_83_int = var_80_cvector | var_80_cvector;
	var_84_int = var_81_cvector | var_81_cvector;
	var_85_float = var_83_int * var_84_int;
	var_86_float = sqrt(var_85_float);
	var_79_float = var_82_int / var_86_float;
	return 0;
}


func_2608(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = var_72_float * var_73_float;
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = var_75_float * var_76_float;
	var_69_float = var_74_float + var_77_float;
	return 0;
}


func_2617(var_78_float, var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_82_float = var_80_float * var_81_float;
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_85_float = var_83_float * var_84_float;
	var_86_int = var_82_float + var_85_float;
	var_78_float = sqrt(var_86_int);
	return 0;
}


func_1602(var_372_bool)
{
	var_373_bool = 0;
	var_373_bool = 0;
	var_374_bool = 0;
	func_1574(var_373_bool, var_374_bool);
	if(var_374_bool != 0) {
		var_391_bool = 0;
		func_1618(var_372_bool, var_373_bool, var_391_bool);
		if(var_391_bool != 0) {
			var_373_bool = 1;
		}
	}
	if(var_373_bool != 0) {
		var_372_bool = 1;
		return 0;
	}
	var_372_bool = 0;
	return 0;
}


func_2627(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_67_cvector = var_70_cvector;
	var_68_cvector = var_71_cvector;
	func_2608(var_69_float, var_70_cvector, var_71_cvector);
	var_78_float = 0; var_79_cvector = CVector(0,0,0);
	var_67_cvector = var_79_cvector;
	func_2617(var_78_float, var_79_cvector);
	var_87_float = 0; var_88_cvector = CVector(0,0,0);
	var_68_cvector = var_88_cvector;
	func_2617(var_87_float, var_88_cvector);
	var_89_float = var_78_float * var_87_float;
	var_66_float = var_69_float / var_89_float;
	return 0;
}


func_1618(var_0_bool, var_4_object, var_391_bool)
{
	var_392_object = Obj(); var_393_bool = 0; var_394_float = 0; var_395_cvector = CVector(0,0,0); var_396_cvector = CVector(0,0,0); var_397_object = Obj(); var_398_bool = 0; var_399_float = 0; var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0);
	GetScene(var_397_object);
	var_398_bool = 0;
	
Label_1622:
	var_402_cvector = CVector(0,0,0); var_403_object = Obj();
	var_403_object = var_0_bool;
	func_2202(var_402_cvector, var_403_object);
	var_408_int = -var_402_cvector;
	FindDirLength(var_399_float, var_408_int, var_4_object);
	var_409_bool = var_399_float < var_4_object;
	if(var_409_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_400_cvector);
		GetPFPosition(var_401_cvector);
		WaitForAnimEnd();
		func_1706(var_401_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_398_bool = 1;
		var_413_bool = 0;
		func_1574(var_401_cvector, var_413_bool);
		var_414_bool = var_413_bool == 0; //@nz
		if(var_414_bool != 0) {
			goto Label_1660;
		}
		goto Label_1622;
	}
Label_1660:
	var_398_bool = var_391_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2644(var_527_float)
{
	var_528_object = Obj(); var_529_object = Obj();
	CreateFloatVector(var_529_object);
	@@var_529_object:add(var_527_float);
	var_531_bool = var_527_float < (int)0;
	if(var_531_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_529_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3070(var_57_object)
{
	var_58_object = Obj();
	var_57_object = var_58_object;
	TaskCall(6);
	func_2026(var_59_object, var_60_cvector, var_61_bool, var_58_object);
	TaskReturn();
	return 0;
}


func_2661(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsPlayerActor(var_19_object, var_21_bool);
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2151(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_2670()
{
	var_432_object = Obj(); var_433_object = Obj();
	GetScene(var_433_object);
	var_435_object = Obj();
	func_2566(var_435_object);
	BroadcastMessage("battle", var_435_object, var_433_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2167(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_2202(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2600(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_2681(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	TaskCall(0);
	func_0(var_18_object);
	TaskReturn();
	return 0;
}


func_124(var_41_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_42_string = "";
	var_41_string = var_42_string;
	func_2525(var_42_string);
	PlayAnimation("all", var_41_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_41_string);
	RemoveEnvelope();
	return 0;
}


func_1663(var_0_bool, var_322_bool)
{
	var_323_bool = 0; var_324_bool = 0;
	var_327_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_327_bool != 0) {
		@@@var_0_bool:IsAttacking(var_324_bool);
		var_324_bool = var_322_bool;
		return 2;
	}
	var_322_bool = 0;
	return 2;
}


func_2183(var_499_string, var_500_int)
{
	var_502_bool = var_500_int == (int)2;
	if(var_502_bool != 0) {
		var_499_string = "fire";
		return 0;
	EMIT "GOTO 0x893";
	}
	var_504_bool = var_500_int == (int)1;
	if(var_504_bool != 0) {
		var_499_string = "bullet";
		return 0;
	}
	var_499_string = "phys";
	return 0;
}


func_1674(var_2_bool, var_5_object)
{
	var_439_float = 0; var_440_int = 0; var_441_float = 0; var_442_int = 0;
	var_443_bool = var_2_bool == 0; //@nz
	if(var_443_bool != 0) {
		return 4;
	}
	var_444_object = var_5_object;
	if(var_444_object != 0) {
		var_5_object = var_5_object + (int)-1;
		var_447_bool = var_5_object > (int)0;
		if(var_447_bool != 0) {
			return 4;
		}
	}
	rand(var_441_float);
	var_448_float = 0;
	func_1724(var_448_float);
	var_449_bool = var_441_float < var_448_float;
	if(var_449_bool != 0) {
		irand(var_442_int, var_2_bool);
		var_442_int = var_442_int + (int)1;
		var_452_int = "attack" + var_442_int;
		Speak(var_452_int);
		var_453_int = 0;
		func_1722(var_453_int);
		var_5_object = var_453_int;
	}
	return 4;
}


func_2197(var_88_cvector)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0);
	GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
	return 2;
}


func_2202(var_50_cvector, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	@@var_51_object:GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
	return 4;
}


func_2209(var_34_float, var_35_object)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	GetPosition(var_39_cvector);
	@@var_35_object:GetPosition(var_40_cvector);
	var_41_cvector = var_40_cvector - var_39_cvector;
	var_34_float = var_41_cvector | var_41_cvector;
	return 6;
}


func_2726(var_20_bool, var_21_object, var_22_string)
{
	var_24_bool = var_22_string == "unholster";
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_3050(var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0xac4";
	}
	var_28_bool = var_22_string == "player_shot";
	if(var_28_bool != 0) {
		var_29_bool = 0; var_30_object = Obj();
		var_21_object = var_30_object;
		func_3055(var_29_bool, var_30_object);
		var_29_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0xac4";
	}
	var_45_bool = var_22_string == "battle";
	if(var_45_bool != 0) {
		var_46_bool = 0; var_47_object = Obj();
		var_21_object = var_47_object;
		func_3078(var_47_object);
		var_46_bool = var_20_bool;
		return 0;
	}
	var_20_bool = 0;
	return 0;
}


func_2217(var_100_bool, var_101_object)
{
	var_102_bool = 0; var_103_bool = 0;
	IsPlayerActor(var_101_object, var_103_bool);
	var_103_bool = var_100_bool;
	return 2;
}


func_1706(var_0_bool)
{
	var_195_object = Obj();
	var_195_object = var_0_bool;
	func_2661(var_195_object);
	return 0;
}


func_171()
{
	var_18_bool = 0;
	func_2509(var_18_bool);
	var_21_bool = var_18_bool == 0; //@nz
	if(var_21_bool != 0) {
		func_3049();
	}
	return 0;
}


func_2222(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0;
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", (int)2);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	@@var_52_object:HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
	return 2;
}


func_1711(var_536_int)
{
	var_536_int = 0;
	return 0;
}


func_689()
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_bool = 0;
	WaitForAnimEnd();
	var_63_bool = 0;
	func_2509(var_63_bool);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 14;
	}
	func_2861((int)0);
	var_65_int = var_56_int;
	var_57_int = 0;
	
Label_703:
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_57_int < (int)5;
	if(var_80_bool != 0) {
		var_81_bool = 0;
		func_2509(var_81_bool);
		if(var_81_bool != 0) {
			var_78_bool = 1;
		}
	}
	if(var_78_bool != 0) {
		irand(var_58_int, (int)3);
		var_84_bool = var_58_int == (int)0;
		if(var_84_bool != 0) {
			var_85_int = var_56_int;
			if(var_85_int == 0) goto Label_736;
			irand(var_59_int, var_56_int);
			var_87_string = ""; var_88_int = 0;
			var_59_int = var_88_int;
			func_2854(var_87_string, var_88_int);
			PlayAnimation("all", var_87_string);
			WaitForAnimEnd(var_60_bool);
			var_89_bool = var_60_bool == 0; //@nz
			if(var_89_bool != 0) {
			} else {
		} else {
				var_94_bool = var_58_int == (int)1;
				if(var_94_bool != 0) {
					rand(var_61_float, (int)4);
					var_97_int = var_61_float + (int)1;
					Sleep(var_97_int, var_62_bool);
					var_98_bool = var_62_bool == 0; //@nz
					if(var_98_bool != 0) {
						goto Label_765;
					}
					goto Label_754;
				}
				var_99_int = var_57_int;
				if(var_99_int == 0) goto Label_754;
				goto Label_765;
		}
		Label_754:
			var_90_bool = 0;
			func_768(var_90_bool);
			var_91_bool = var_90_bool == 0; //@nz
			if(var_91_bool != 0) {
				goto Label_765;
			}
			ResetAAS();
			var_57_int = var_57_int + (int)1;
			goto Label_703;

		}
	}
Label_765:
	ResetAAS();
	return 14;
	
}


func_1713()
{
	var_328_string = "";
	func_2525("attack_stay");
	return 0;
}


func_1718()
{
	return 0;
}


func_1720(var_561_bool)
{
	var_561_bool = 1;
	return 0;
}


func_2234(var_471_float, var_472_object, var_473_float, var_474_int)
{
	var_478_int = 0; var_479_string = ""; var_480_int = 0; var_481_float = 0; var_482_float = 0; var_483_float = 0; var_484_int = 0; var_485_string = ""; var_486_int = 0; var_487_float = 0; var_488_float = 0; var_489_float = 0;
	var_490_bool = 0; var_491_object = Obj(); var_492_string = "";
	var_472_object = var_491_object;
	func_2222(var_490_bool, var_491_object, "health");
	var_493_bool = var_490_bool == 0; //@nz
	if(var_493_bool != 0) {
		var_471_float = 0.0;
		return 12;
	}
	var_494_bool = 0; var_495_object = Obj(); var_496_string = "";
	var_472_object = var_495_object;
	func_2222(var_494_bool, var_495_object, "armor");
	var_497_bool = var_494_bool == 0; //@nz
	if(var_497_bool != 0) {
		var_484_int = 0;
	} else {
			@@var_472_object:GetProperty("armor", var_484_int);
	}
	var_499_string = ""; var_500_int = 0;
	var_474_int = var_500_int;
	func_2183(var_499_string, var_500_int);
	var_485_string = "armor_" + var_499_string;
	var_505_bool = 0; var_506_object = Obj(); var_507_string = "";
	var_472_object = var_506_object;
	var_485_string = var_507_string;
	func_2222(var_505_bool, var_506_object, var_507_string);
	var_508_bool = var_505_bool == 0; //@nz
	if(var_508_bool != 0) {
		var_486_int = 0;
	} else {
		@@var_472_object:GetProperty(var_485_string, var_486_int);

	}
	var_509_float = 0; var_510_float = 0; var_511_float = 0;
	var_512_int = var_484_int + var_486_int;
	var_510_float = var_512_int / (float)100.0;
	func_2582(var_509_float, var_510_float, (float)1);
	var_509_float = var_487_float;
	@@var_472_object:GetProperty("health", var_488_float);
	var_517_int = (int)1 - var_487_float;
	var_489_float = var_473_float * var_517_int;
	var_519_float = 0; var_520_float = 0; var_521_float = 0; var_522_float = 0;
	var_520_float = var_488_float - var_489_float;
	func_2589(var_519_float, var_520_float, (float)0, (float)1);
	@@var_472_object:SetProperty("health", var_519_float);
	var_525_bool = 0; var_526_object = Obj();
	var_472_object = var_526_object;
	func_2217(var_525_bool, var_526_object);
	if(var_525_bool != 0) {
		var_527_float = 0;
		var_527_float = -var_489_float;
		func_2644(var_527_float);
	}
	var_489_float = var_471_float;
	return 12;
	
}


func_1722(var_453_int)
{
	var_453_int = 1;
	return 0;
}


func_1724(var_448_float)
{
	var_448_float = 0.5;
	return 0;
}


func_1733(var_2_bool, var_202_bool, var_203_object, var_204_float, var_205_float, var_206_bool, var_207_bool)
{
	var_211_bool = 0; var_212_bool = 0; var_213_bool = 0; var_214_bool = 0;
	var_215_object = Obj();
	var_203_object = var_215_object;
	func_2661(var_215_object);
	SetTimer((int)1, (int)5);
	CanSee(var_213_bool, var_203_object);
	var_218_bool = var_213_bool;
	if(var_218_bool != 0) {
		var_2_bool = true;
		var_219_object = Obj();
		var_203_object = var_219_object;
		func_2514(var_219_object);
	} else {
		var_2_bool = false;
	}
	var_226_bool = 0; var_227_object = Obj();
	var_203_object = var_227_object;
	func_2217(var_226_bool, var_227_object);
	if(var_226_bool != 0) {
		var_230_object = Obj();
		func_2566(var_230_object);
		SendPlayerEnemy(var_203_object, var_230_object);
	}
	var_231_bool = 0; var_232_object = Obj(); var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_bool = 0;
	var_203_object = var_232_object;
	var_204_float = var_233_float;
	var_205_float = var_234_float;
	var_206_bool = var_235_bool;
	var_207_bool = var_236_bool;
	func_1838(var_213_bool, var_214_bool, var_231_bool, var_232_object, var_233_float, var_234_float, var_235_bool, var_236_bool);
	var_231_bool = var_214_bool;
	var_282_bool = var_2_bool;
	if(var_282_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_214_bool = var_202_bool;
	return 4;
	
}


func_2758(var_50_object, var_51_string)
{
	var_53_bool = var_51_string == "unholster";
	if(var_53_bool != 0) {
		var_50_object = Obj();
		func_3053();
	} else {
		var_56_bool = var_51_string == "player_shot";
		if(var_56_bool != 0) {
			var_57_object = Obj();
			var_50_object = var_57_object;
			func_3070(var_57_object);
			goto Label_2782;
		}
		var_131_bool = var_51_string == "battle";
		if(var_131_bool == 0) goto Label_2782;
		var_50_object = Obj();
		func_3081();
	}
Label_2782:
	return 0;
	
}


func_2783(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	var_21_bool = 0;
	var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_3050(var_23_object);
	if(var_22_bool != 0) {
		var_24_bool = 0; var_25_object = Obj();
		var_18_object = var_25_object;
		func_2217(var_24_bool, var_25_object);
		if(var_24_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		@@var_18_object:IsWeaponHolstered(var_20_bool);
		var_28_bool = var_20_bool == 0; //@nz
		if(var_28_bool != 0) {
			var_17_bool = 1;
			return 2;
		}
	}
	var_17_bool = 0;
	return 2;
}


func_2806(var_31_object)
{
	var_31_object = Obj();
	func_3053();
	return 0;
}


func_2812(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_2217(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		var_24_object = Obj();
		func_2566(var_24_object);
		ReportReputationChange(var_19_object, var_24_object, (float)0.0);
	}
	return 0;
}


func_768(var_90_bool)
{
	var_90_bool = 1;
	return 0;
}


func_770()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2307(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
}


func_1796(var_2_bool)
{
	KillTimer((int)1);
	var_18_bool = var_2_bool;
	if(var_18_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_1962(var_16_bool);
	return 0;
}


func_775(var_0_bool, var_68_object)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0;
	var_0_bool = var_68_object;
	func_826(var_75_bool);
	GetDirection(var_73_cvector);
	var_83_cvector = CVector(0,0,0); var_84_object = Obj();
	var_84_object = var_0_bool;
	func_2202(var_83_cvector, var_84_object);
	var_83_cvector = var_74_cvector;
	var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	var_73_cvector = var_90_cvector;
	var_74_cvector = var_91_cvector;
	func_2627(var_89_float, var_90_cvector, var_91_cvector);
	var_114_bool = var_89_float < (int)0;
	if(var_114_bool != 0) {
		var_115_object = Obj();
		var_115_object = var_0_bool;
		func_2498(var_115_object);
		var_75_bool = 1;
	} else {
		Sleep((float)1.5, var_75_bool);
	}
	var_124_bool = var_75_bool;
	if(var_124_bool != 0) {
		var_125_object = Obj();
		var_125_object = var_0_bool;
		func_2498(var_125_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_2312(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj();
	var_39_bool = var_34_object == 0; //@ne
	if(var_39_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_40_bool = 0;
	var_40_bool = 0;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", (int)1);
	if(var_43_bool != 0) {
		var_44_bool = 0; var_45_object = Obj();
		var_34_object = var_45_object;
		func_2307(var_44_bool, var_45_object);
		if(var_44_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetScene(var_37_object);
	var_48_bool = var_37_object == 0; //@ne
	if(var_48_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	@@var_34_object:GetScene(var_38_object);
	var_49_bool = var_37_object != var_38_object;
	if(var_49_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_33_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2825(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	var_22_bool = var_18_string == "heal";
	if(var_22_bool != 0) {
		FindActor(var_20_object, "player");
		var_24_bool = 0; var_25_object = Obj();
		var_20_object = var_25_object;
		func_3083(var_25_object);
		var_24_bool = var_17_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_17_bool = 0;
	return 2;
}


func_1293(var_1_bool, var_2_bool, var_4_object)
{
	var_156_bool = 0; var_157_bool = 0; var_158_cvector = CVector(0,0,0); var_159_bool = 0; var_160_bool = 0; var_161_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_1295:
	var_165_int = var_1_bool + (int)1;
	var_166_int = "attack_begin" + var_165_int;
	HasAnimation(var_159_bool, "all", var_166_int);
	var_167_bool = var_159_bool == 0; //@nz
	if(var_167_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_1295;
	}
	var_2_bool = 0;
	
Label_1309:
	var_170_int = var_2_bool + (int)1;
	var_171_int = "attack" + var_170_int;
	IsExisting3DSound(var_160_bool, var_171_int);
	var_172_bool = var_160_bool == 0; //@nz
	if(var_172_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_1309;

	}
	GetAnimationOffset(var_161_cvector, "all", "bjump");
	var_175_float = GetByIndex(var_161_cvector, 2);
	var_4_object = -var_175_float;
	return 6;
	
}


func_2841(var_28_string)
{
	var_29_object = Obj(); var_30_object = Obj();
	var_32_bool = var_28_string == "heal";
	if(var_32_bool != 0) {
		FindActor(var_30_object, "player");
		var_30_object = Obj();
		func_3086();
		var_30_object = 0;
	}
	return 2;
}


func_2854(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = "";
	var_75_int = var_72_int;
	if(var_75_int != 0) {
		"idle" = "idle" + var_72_int;
	}
	var_74_string = var_71_string;
	return 2;
}


func_2348(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_2312(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_2222(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
}


func_2861(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_68_int = 0;
	
Label_2863:
	var_71_string = ""; var_72_int = 0;
	var_68_int = var_72_int;
	func_2854(var_71_string, var_72_int);
	HasAnimation(var_69_bool, "all", var_71_string);
	var_76_bool = var_69_bool == 0; //@nz
	if(var_76_bool != 0) {
	} else {
		var_68_int = var_68_int + (int)1;
		goto Label_2863;
	}
	var_68_int = var_65_int;
	return 4;
	
}


func_1838(var_0_bool, var_1_bool, var_231_bool, var_232_object, var_233_float, var_234_float, var_235_bool, var_236_bool)
{
	var_237_bool = 0; var_238_bool = 0; var_239_object = Obj(); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_float = 0; var_244_object = Obj(); var_245_bool = 0; var_246_bool = 0; var_247_object = Obj(); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_float = 0; var_252_object = Obj();
	var_0_bool = false;
	var_1_bool = var_232_object;
	var_236_bool = var_246_bool;
	
Label_1842:
	var_253_bool = 0; var_254_object = Obj();
	var_232_object = var_254_object;
	func_1978(var_253_bool, var_254_object);
	var_257_bool = var_253_bool == 0; //@nz
	if(var_257_bool != 0) {
		var_231_bool = 0;
		return 16;
	}
	@@var_232_object:GetPosition(var_248_cvector);
	GetPosition(var_249_cvector);
	var_250_cvector = var_248_cvector - var_249_cvector;
	var_251_float = var_250_cvector | var_250_cvector;
	var_258_bool = 0;
	var_258_bool = 0;
	var_260_bool = var_234_float > (int)0;
	if(var_260_bool != 0) {
		var_261_float = var_234_float * var_234_float;
		var_262_bool = var_251_float > var_261_float;
		if(var_262_bool != 0) {
			var_258_bool = 1;
		}
	}
	if(var_258_bool != 0) {
		Stop();
		var_231_bool = 0;
		return 16;
	}
	var_263_float = var_233_float * var_233_float;
	var_264_bool = var_251_float > var_263_float;
	if(var_264_bool != 0) {
		@@var_232_object:GetPFPosition(var_248_cvector);
		FindPathTo(var_252_object, var_248_cvector);
		var_265_bool = var_252_object != 0; //@nn
		if(var_265_bool != 0) {
			var_252_object = var_247_object;
			var_252_object = 0;
		}
		var_266_bool = var_247_object != 0; //@nn
		if(var_266_bool != 0) {
			var_267_bool = var_246_bool;
			if(var_267_bool == 0) goto Label_1891;
			var_246_bool = 0;
			RotatePath(var_247_object, var_245_bool);
			var_268_bool = var_245_bool == 0; //@nz
			if(var_268_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_271_string = "";
				func_1985(var_271_string);
				var_272_string = "";
				func_1987(var_272_string);
				FollowPath(var_247_object, var_235_bool, var_245_bool, var_271_string, var_272_string);
				var_273_bool = var_245_bool == 0; //@nz
				if(var_273_bool != 0) {
					var_274_bool = var_0_bool;
					if(var_274_bool != 0) {
						var_247_object = 0;
						goto Label_1938;
					EMIT "GOTO 0x777";
					}
				} else {
					var_247_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_245_bool);
					var_277_bool = var_245_bool == 0; //@nz
					if(var_277_bool != 0) {
						var_278_bool = var_0_bool;
						if(var_278_bool != 0) {
							var_247_object = 0;
							goto Label_1938;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1938;
	}
			var_252_object = 0;
			goto Label_1936;

		Label_1936:
			var_247_object = 0;

		}
		goto Label_1842;
	}
Label_1938:
	var_231_bool = !var_0_bool;
	return 16;
	
}


func_1328(var_0_bool, var_457_float, var_458_int)
{
	var_459_object = Obj(); var_460_float = 0; var_461_float = 0; var_462_object = Obj(); var_463_float = 0; var_464_float = 0;
	var_466_float = var_457_float * (float)0.8999999761581421;
	GetVictim(var_466_float, var_462_object);
	ReportAttack(var_0_bool);
	var_467_bool = var_462_object == var_0_bool;
	if(var_467_bool != 0) {
		var_468_float = 0; var_469_object = Obj(); var_470_int = 0;
		var_462_object = var_469_object;
		var_458_int = var_470_int;
		func_1058(var_470_int);
		var_468_float = var_463_float;
		var_471_float = 0; var_472_object = Obj(); var_473_float = 0; var_474_int = 0;
		var_462_object = var_472_object;
		var_463_float = var_473_float;
		var_475_int = 0; var_476_object = Obj(); var_477_int = 0;
		var_462_object = var_476_object;
		var_458_int = var_477_int;
		func_1061(var_477_int);
		var_475_int = var_474_int;
		func_2234(var_471_float, var_472_object, var_473_float, var_474_int);
		var_471_float = var_464_float;
		var_536_int = 0;
		func_1711(var_536_int);
		ReportHit(var_0_bool, var_536_int, var_464_float, var_463_float);
		var_537_object = Obj(); var_538_float = 0;
		var_462_object = var_537_object;
		var_464_float = var_538_float;
		func_1718();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_826(var_0_bool)
{
	var_76_object = Obj();
	var_76_object = var_0_bool;
	func_2514(var_76_object);
	return 0;
}


func_2878(var_59_int)
{
	var_61_bool = 0;
	func_3094(var_61_bool);
	if(var_61_bool != 0) {
		var_59_int = 2;
	} else {
		var_59_int = 0;
	}
	return 0;
	
}


func_2372(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = "";
	var_48_bool = var_33_object == 0; //@ne
	if(var_48_bool != 0) {
		return 14;
	}
	IsDead(var_41_bool);
	var_49_bool = var_41_bool;
	if(var_49_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_42_int);
	var_51_bool = var_42_int < (int)0;
	if(var_51_bool != 0) {
		return 14;
	}
	@@var_33_object:GetPosition(var_43_cvector);
	GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_54_float = var_52_float * var_53_float;
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	var_57_float = var_55_float * var_56_float;
	var_58_int = var_54_float + var_57_float;
	var_60_bool = var_58_int >= (int)0;
	if(var_60_bool != 0) {
		var_47_string = "fhit";
	} else {
		var_47_string = "bhit";
	}
	var_63_int = var_47_string + "1";
	var_65_int = var_47_string + "2";
	FadeSecondaryAnimation("hit_react", var_63_int, var_65_int, (int)-10);
	return 14;
	
}


func_2887(var_67_object)
{
	var_68_object = Obj();
	var_67_object = var_68_object;
	TaskCall(3);
	func_775(var_69_object, var_68_object);
	TaskReturn();
	return 0;
}


func_2895(var_86_int, var_87_object)
{
	var_88_bool = 0; var_89_object = Obj();
	var_87_object = var_89_object;
	func_2348(var_88_bool, var_89_object);
	if(var_88_bool != 0) {
		var_86_int = 2;
	} else {
		var_86_int = 0;
	}
	return 0;
	
}


func_1367(var_0_bool, var_1_bool, var_420_bool, var_421_float)
{
	var_422_int = 0; var_423_bool = 0; var_424_int = 0; var_425_string = ""; var_426_int = 0; var_427_bool = 0; var_428_int = 0; var_429_string = "";
	func_1706(var_429_string);
	irand(var_426_int, var_1_bool);
	var_426_int = var_426_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2670();
	var_438_int = "attack_begin" + var_426_int;
	PlayAnimation("all", var_438_int);
	WaitForAnimEnd();
	func_1674(var_428_int, var_429_string);
	var_454_bool = 0; var_455_object = Obj();
	var_455_object = var_0_bool;
	func_2348(var_454_bool, var_455_object);
	var_456_bool = var_454_bool == 0; //@nz
	if(var_456_bool != 0) {
		StopAsync();
		var_420_bool = 0;
		return 8;
	}
	var_457_float = 0; var_458_int = 0;
	var_421_float = var_457_float;
	var_426_int = var_458_int;
	func_1328(var_429_string, var_457_float, var_458_int);
	var_541_int = "attack_middle" + var_426_int;
	HasAnimation(var_427_bool, "all", var_541_int);
	var_542_bool = var_427_bool;
	if(var_542_bool != 0) {
		func_2670();
		var_545_int = "attack_middle" + var_426_int;
		PlayAnimation("all", var_545_int);
		WaitForAnimEnd();
		func_1706(var_429_string);
		var_546_bool = 0; var_547_object = Obj();
		var_547_object = var_0_bool;
		func_2348(var_546_bool, var_547_object);
		var_548_bool = var_546_bool == 0; //@nz
		if(var_548_bool != 0) {
			StopAsync();
			var_420_bool = 0;
			return 8;
		}
		var_549_float = 0; var_550_int = 0;
		var_421_float = var_549_float;
		var_426_int = var_550_int;
		func_1328(var_429_string, var_549_float, var_550_int);
		var_428_int = 1;

	Label_1444:
		var_552_int = "attack_middle" + var_426_int;
		var_554_int = var_552_int + "_";
		var_429_string = var_554_int + var_428_int;
		HasAnimation(var_427_bool, "all", var_429_string);
		var_556_bool = var_427_bool == 0; //@nz
		if(var_556_bool != 0) {
		} else {
			func_2670();
			PlayAnimation("all", var_429_string);
			WaitForAnimEnd();
			func_1706(var_429_string);
			var_572_bool = 0; var_573_object = Obj();
			var_573_object = var_0_bool;
			func_2348(var_572_bool, var_573_object);
			var_574_bool = var_572_bool == 0; //@nz
			if(var_574_bool != 0) {
				StopAsync();
				var_420_bool = 0;
				var_575_float = 0; var_576_int = 0;
				var_421_float = var_575_float;
				var_426_int = var_576_int;
				func_1328(var_429_string, var_575_float, var_576_int);
				var_428_int = var_428_int + (int)1;
				goto Label_1444;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_560_int = "attack_end" + var_426_int;
	PlayAnimation("all", var_560_int);
	var_561_bool = 0;
	func_1720(var_561_bool);
	if(var_561_bool != 0) {
		var_562_bool = 0; var_563_float = 0;
		func_1504(var_562_bool, (float)0.75);
		StopAsync();
	}
	var_420_bool = 1;
	return 8;
	
}


func_2905(var_123_object)
{
	var_124_object = Obj();
	var_123_object = var_124_object;
	TaskCall(4);
	func_1050(var_124_object);
	TaskReturn();
	return 0;
}


func_2913(var_32_bool, var_33_object, var_34_bool)
{
	var_35_string = ""; var_36_string = ""; var_37_string = ""; var_38_string = "";
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_33_object = var_40_object;
	func_2222(var_39_bool, var_40_object, "class");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	GetProperty("class", var_37_string);
	@@var_33_object:GetProperty("class", var_38_string);
	var_51_bool = 0;
	var_51_bool = 0;
	var_52_bool = var_34_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_53_bool = var_37_string == var_38_string;
		if(var_53_bool != 0) {
			var_51_bool = 1;
		}
	}
	if(var_51_bool != 0) {
		var_32_bool = 1;
		return 4;
	}
	var_55_bool = var_38_string == "rat";
	if(var_55_bool != 0) {
		var_32_bool = 0;
		return 4;
	EMIT "GOTO 0xbaa";
	}
	var_57_bool = var_38_string == "rat_big";
	if(var_57_bool != 0) {
		var_32_bool = 0;
		return 4;
	EMIT "GOTO 0xbaa";
	}
	var_59_bool = var_38_string == "dog";
	if(var_59_bool != 0) {
		var_32_bool = 0;
		return 4;
	EMIT "GOTO 0xbaa";
	}
	var_61_bool = var_38_string == "grabitel";
	if(var_61_bool != 0) {
		var_32_bool = 0;
		return 4;
	EMIT "GOTO 0xbaa";
	}
	var_63_bool = var_38_string == "bomber";
	if(var_63_bool != 0) {
		var_32_bool = 0;
		return 4;
	EMIT "GOTO 0xbaa";
	}
	var_65_bool = var_38_string == "sanitar";
	if(var_65_bool != 0) {
		var_32_bool = 0;
		return 4;
	EMIT "GOTO 0xbaa";
	}
	var_67_bool = var_38_string == "hunter";
	if(var_67_bool != 0) {
		var_32_bool = 0;
		return 4;
	EMIT "GOTO 0xbaa";
	}
	var_69_bool = var_38_string == "soldier";
	if(var_69_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	var_32_bool = 1;
	return 4;
}


func_367(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_503(var_15_cvector, var_16_bool);
	return 0;
}


func_2416(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0);
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_object = var_20_object;
	if(var_43_object != 0) {
		var_45_bool = var_21_int != (int)4;
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_47_bool = var_21_int != (int)5;
		if(var_47_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
		var_50_cvector = CVector(0,0,0); var_51_object = Obj();
		var_20_object = var_51_object;
		func_2202(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2572(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		CreateVectorVector(var_33_object);
		var_34_int = 1;

	Label_2445:
		var_62_int = "hit" + var_34_int;
		GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector);
		var_63_bool = var_35_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_111_int = var_37_cvector | var_32_cvector;
			var_113_bool = var_111_int >= (float)0.7071067690849304;
			if(var_113_bool != 0) {
				@@var_33_object:add(var_36_cvector);
			}
			var_34_int = var_34_int + (int)1;
			goto Label_2445;
		}
		@@var_33_object:size(var_38_int);
		var_64_int = var_38_int;
		if(var_64_int != 0) {
			irand(var_39_int, var_38_int);
			@@var_33_object:get(var_40_cvector, var_39_int);
			var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
			var_20_object = var_65_object;
			var_21_int = var_66_int;
			var_22_float = var_67_float;
			var_40_cvector = var_68_cvector;
			var_69_cvector = -var_32_cvector;
			func_2484(var_67_float, var_68_cvector, var_69_cvector);
			return 18;
		}
		var_33_object = 0;
	}
	var_110_object = Obj();
	var_20_object = var_110_object;
	func_2372(var_110_object);
	return 18;
	
}


func_375(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_510(var_20_bool, var_21_int);
	return 0;
}


func_392(var_2_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_17_object = var_23_object;
	func_2348(var_22_bool, var_23_object);
	var_56_bool = var_22_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 4;
	}
	var_57_bool = var_2_bool;
	if(var_57_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_17_object, var_20_bool);
	var_58_bool = var_20_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 4;
	}
	var_59_int = 0; var_60_object = Obj();
	var_17_object = var_60_object;
	func_2878(var_60_object);
	var_59_int = var_21_int;
	var_63_bool = var_21_int > (int)0;
	if(var_63_bool != 0) {
		var_65_bool = var_21_int > (int)1;
		if(var_65_bool != 0) {
			func_375(var_21_int);
		}
		var_67_object = Obj();
		var_17_object = var_67_object;
		func_2887(var_67_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1940(var_0_bool, var_1_bool, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_bool;
	func_1978(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1962(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2988(var_83_int, var_84_object)
{
	var_86_int = 0; var_87_object = Obj();
	var_84_object = var_87_object;
	func_2895(var_86_int, var_87_object);
	var_86_int = var_83_int;
	return 0;
}


func_432(var_0_bool, var_1_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_28_float, (float)0.5);
	Sleep(var_28_float);
	
Label_440:
	var_35_bool = var_0_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_36_bool = var_1_bool == 0; //@nz
		if(var_36_bool != 0) {

		Label_444:
			GetPosition(var_30_cvector);
			var_37_float = 0;
			func_491(var_37_float);
			GetRandomPFPointInCircle(var_29_cvector, var_30_cvector, var_37_float, var_31_bool);
			var_40_bool = var_31_bool;
			if(var_40_bool != 0) {
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
	var_41_object = Obj(); var_42_cvector = CVector(0,0,0);
	var_29_cvector = var_42_cvector;
	func_519(var_41_object, var_42_cvector);
	var_41_object = var_32_object;
	var_45_bool = var_32_object != 0; //@nn
	if(var_45_bool != 0) {
		RotatePath(var_32_object, var_33_bool);
		var_46_bool = var_33_bool;
		if(var_46_bool != 0) {
			var_47_bool = 0;
			func_517(var_47_bool);
			FollowPath(var_32_object, var_47_bool, var_33_bool);
			var_32_object = 0;
			var_48_bool = var_33_bool;
			if(var_48_bool != 0) {
				TaskCall(2);
				func_689();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_32_object = 0;
	goto Label_440;
	
}


func_2995(var_122_object)
{
	var_123_object = Obj();
	var_122_object = var_123_object;
	func_2905(var_123_object);
	return 0;
}


func_2484(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetScene(var_29_object);
	AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	var_33_object = Obj();
	var_22_object = var_33_object;
	func_2372(var_33_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3001(var_25_bool, var_26_object, var_27_object, var_28_float, var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0;
	var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0;
	var_27_object = var_33_object;
	var_34_bool = !var_29_bool;
	func_2913(var_32_bool, var_33_object, var_34_bool);
	var_70_bool = var_32_bool == 0; //@nz
	if(var_70_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	CanSee(var_31_bool, var_26_object);
	var_71_bool = 0;
	var_71_bool = 1;
	var_72_bool = var_31_bool;
	if(var_72_bool != 1) {
		var_73_float = 0; var_74_object = Obj();
		var_26_object = var_74_object;
		func_2209(var_73_float, var_74_object);
		var_81_float = var_28_float * var_28_float;
		var_82_bool = var_73_float <= var_81_float;
		if(var_82_bool != 1) {
			var_71_bool = 0;
		}
	}
	if(var_71_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	var_25_bool = 0;
	return 2;
}


func_1978(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj();
	var_28_object = var_30_object;
	func_2348(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
	return 0;
}


func_1985(var_271_string)
{
	var_271_string = "walk";
	return 0;
}


func_2498(var_92_object)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	@@var_92_object:GetPosition(var_96_cvector);
	GetPosition(var_97_cvector);
	var_98_cvector = var_96_cvector - var_97_cvector;
	var_99_float = GetByIndex(var_98_cvector, 0);
	var_100_float = GetByIndex(var_98_cvector, 2);
	RotateAsync(var_99_float, var_100_float);
	return 6;
}


func_1987(var_272_string)
{
	var_272_string = "run";
	return 0;
}


func_1996(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_2572(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_2572(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_2509(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0;
	IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
	return 2;
}


func_974()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2514(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0);
	@@var_20_object:GetEyesHeight(var_23_float);
	var_24_cvector = CVector(0.0, 0.0, 0.0);
	var_25_float = GetByIndex(var_24_cvector, 1);
	var_23_float = var_25_float;
	SetByIndex(var_24_cvector, 1) = var_25_float;
	LookAsync(var_20_object, "head", var_24_cvector);
	return 4;
}


func_3030(var_19_int)
{
	var_19_int = 0;
	return 0;
}


func_3033()
{
	return 0;
}


func_3035(var_133_int)
{
	var_133_int = 0;
	return 0;
}


func_2525(var_42_string)
{
	var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	IsExisting3DSound(var_51_bool, var_42_string);
	var_59_bool = var_51_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_52_int = 0;

	Label_2531:
		var_61_int = var_52_int + (int)1;
		var_62_int = var_42_string + var_61_int;
		IsExisting3DSound(var_53_bool, var_62_int);
		var_63_bool = var_53_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_52_int = var_52_int + (int)1;
			goto Label_2531;
		}
		var_64_bool = var_52_int == 0; //@nz
		if(var_64_bool != 0) {
			return 16;
		}
		irand(var_54_int, var_52_int);
		var_66_int = var_54_int + (int)1;
		var_42_string = var_42_string + var_66_int;
	}
	Is3DSoundLoaded(var_55_bool, var_42_string);
	var_67_bool = var_55_bool;
	if(var_67_bool != 0) {
		GetEyesHeight(var_56_float);
		GetDirection(var_57_cvector);
		var_58_cvector = var_57_cvector * (int)50;
		var_69_float = GetByIndex(var_58_cvector, 1);
		var_69_float = var_69_float + var_56_float;
		SetByIndex(var_58_cvector, 1) = var_69_float;
		PlayGlobalSound(var_42_string, var_58_cvector);
	}
	return 16;
	
}


func_3038()
{
	return 0;
}


func_3040(var_19_int)
{
	var_19_int = 2;
	return 0;
}


func_1504(var_562_bool, var_563_float)
{
	var_564_float = 0; var_565_bool = 0; var_566_float = 0; var_567_bool = 0;
	rand(var_566_float);
	var_568_bool = var_566_float < var_563_float;
	if(var_568_bool != 0) {

	Label_1509:
		IsAnimationPlaying(var_567_bool);
		var_569_bool = var_567_bool == 0; //@nz
		if(var_569_bool != 0) {
		} else {
			var_570_bool = 0;
			func_1602(var_570_bool);
			if(var_570_bool != 0) {
				var_562_bool = 1;
				sync();
				goto Label_1509;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1706(var_567_bool);
	}
	goto Label_1529;
	
Label_1529:
	var_562_bool = 0;
	return 4;
	
}


func_3043(var_27_object)
{
	var_27_object = Obj();
	func_3092();
	return 0;
}


func_3049()
{
	return 0;
}


func_3050(var_22_bool)
{
	var_22_bool = 0;
	return 0;
}


func_491(var_37_float)
{
	var_38_float = 0; var_39_float = 0;
	GetCameraFarDistance(var_39_float);
	var_39_float = var_37_float;
	return 2;
}


func_2026(var_0_bool, var_1_bool, var_2_bool, var_58_object)
{
	var_62_cvector = CVector(0,0,0); var_63_float = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_float = 0;
	var_0_bool = var_58_object;
	var_72_cvector = CVector(0,0,0); var_73_float = 0;
	func_1996(var_71_float, var_72_cvector, (float)1.7453293800354004);
	var_72_cvector = var_67_cvector;
	var_68_float = var_67_cvector | var_67_cvector;
	var_103_bool = var_68_float < (float)2500.0;
	if(var_103_bool != 0) {
		var_104_cvector = CVector(0,0,0); var_105_float = 0;
		func_1996(var_71_float, var_104_cvector, (float)2.6179938316345215);
		var_104_cvector = var_67_cvector;
		var_68_float = var_67_cvector | var_67_cvector;
		var_107_bool = var_68_float < (float)2500.0;
		if(var_107_bool != 0) {
			var_109_float = sqrt(var_68_float);
			var_110_int = "Can't retreat, distance: " + var_109_float;
			Trace(var_110_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_112_float = GetByIndex(var_67_cvector, 0);
	var_113_float = GetByIndex(var_67_cvector, 2);
	Rotate(var_112_float, var_113_float);
	var_114_cvector = CVector(0,0,0);
	func_2197(var_114_cvector);
	var_1_bool = var_114_cvector + var_67_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_2068:
	MovePoint(var_1_bool, (int)1, var_69_bool);
	var_120_bool = var_69_bool;
	if(var_120_bool != 0) {
		var_121_bool = var_0_bool == 0; //@ne
		if(var_121_bool != 0) {
			goto Label_2098;
		EMIT "GOTO 0x830";

		Label_2098:
			return 10;
		}
		var_122_cvector = CVector(0,0,0); var_123_float = 0;
		func_1996(var_71_float, var_122_cvector, (float)2.6179938316345215);
		var_122_cvector = var_70_cvector;
		var_71_float = var_70_cvector | var_70_cvector;
		var_125_bool = var_71_float >= (float)2500.0;
		if(var_125_bool != 0) {
			var_126_cvector = CVector(0,0,0);
			func_2197(var_126_cvector);
			var_1_bool = var_126_cvector + var_70_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2098;
		}
	}
	var_129_bool = var_2_bool == 0; //@nz
	if(var_129_bool == 1) goto Label_2068;
	
}


func_3053()
{
	return 0;
}


func_3055(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_bool = 0;
	CanSee(var_32_bool, var_30_object);
	var_29_bool = 1;
	var_33_bool = var_32_bool;
	if(var_33_bool != 1) {
		var_34_float = 0; var_35_object = Obj();
		var_30_object = var_35_object;
		func_2209(var_34_float, var_35_object);
		var_43_bool = var_34_float <= (int)4000000;
		if(var_43_bool != 1) {
			var_29_bool = 0;
		}
	}
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


func_1531(var_0_bool, var_359_bool, var_360_float)
{
	var_361_bool = 0; var_362_cvector = CVector(0,0,0); var_363_cvector = CVector(0,0,0); var_364_cvector = CVector(0,0,0); var_365_float = 0; var_366_bool = 0; var_367_cvector = CVector(0,0,0); var_368_cvector = CVector(0,0,0); var_369_cvector = CVector(0,0,0); var_370_float = 0;
	
Label_1532:
	IsAnimationPlaying(var_366_bool);
	var_371_bool = var_366_bool == 0; //@nz
	if(var_371_bool != 0) {
	} else {
		var_372_bool = 0;
		func_1602(var_372_bool);
		if(var_372_bool != 0) {
			var_359_bool = 1;
			return 10;
		}
		var_415_bool = 0; var_416_object = Obj();
		var_416_object = var_0_bool;
		func_2348(var_415_bool, var_416_object);
		var_417_bool = var_415_bool == 0; //@nz
		if(var_417_bool != 0) {
			var_359_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_367_cvector);
		GetPFPosition(var_368_cvector);
		var_369_cvector = var_367_cvector - var_368_cvector;
		var_370_float = var_369_cvector | var_369_cvector;
		var_418_float = var_360_float * var_360_float;
		var_419_bool = var_370_float < var_418_float;
		if(var_419_bool != 0) {
			var_420_bool = 0; var_421_float = 0;
			var_360_float = var_421_float;
			func_1367(var_369_cvector, var_370_float, var_420_bool, var_421_float);
			var_359_bool = 1;
			sync();
			goto Label_1532;
		}
		return 10;
	}
	func_1706(var_370_float);
	var_359_bool = 0;
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


