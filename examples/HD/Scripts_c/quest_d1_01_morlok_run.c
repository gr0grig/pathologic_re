// @IMPORTS: FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,Hold/0,GetMainOutdoorScene/1,Trace/1,RotatePath/2,FollowPath/3,RotateAsync/2,FindPathTo/2,Stop/0,StopAsync/0,Sleep/1,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,GetPosition/1,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,RemoveActor/1,GetProperty/2,SignalDeath/1
// @STRINGS: W:player|W:head|W:all|W:pt_d1q01_morlok_run_path|A:GetLocator|W:Can't find path to point |W:Error rotating path|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:idle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood
// @RUN_OP: 0xe3
// @RUN_TASK: 1
// @TASK_0: vars=int,int,bool,bool,object params=0
// @EVENT_1: op=0x9 vars=object
// @EVENT_3: op=0x22 vars=object
// @EVENT_7: op=0x65 vars=int
// @TASK_1: vars=bool params=0
// @EVENT_5: op=0xe0 vars=
// @EVENT_17: op=0x138 vars=object
// @TASK_2: vars=object,int,int,bool,float,int params=1
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_7: op=0x41c vars=int
// @EVENT_1: op=0x437 vars=object
// @EVENT_2: op=0x446 vars=object
// @EVENT_10: op=0x4cc vars=object
// @EVENT_41: op=0x4d7 vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x4fa vars=object
// @EVENT_22: op=0x579 vars=object,int,float,float
// @EVENT_16: op=0x57b vars=object,string
// @EVENT_41: op=0x57d vars=object
// @STANDALONE_EVENT_6: op=0x794 vars=
// @STANDALONE_EVENT_22: op=0x7aa vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x7b2 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x7bc vars=object,string
// @STANDALONE_EVENT_41: op=0x7c9 vars=object
// @PE: 0x9,0x22,0x3b,0x65,0x7c,0x138,0x143,0x14f,0x152,0x3e3,0x41c,0x437,0x446,0x4ba,0x4cc,0x4d7,0x4e0,0x4eb,0x55f,0x579,0x57b,0x57d,0x57f,0x709,0x710,0x75e,0x7aa,0x7b2,0x7c9

task_0_event_1(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_15_bool = var_18_object;
	func_1436(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_15_bool = var_22_object;
		func_1567(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		func_124(var_14_object, var_15_bool);
		var_58_object = Obj();
		var_15_bool = var_58_object;
		TaskCall(2);
		func_323(var_58_object);
		TaskReturn();
	}
	return 0;
}


task_0_event_3(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_15_bool = var_18_object;
	func_1436(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_15_bool = var_22_object;
		func_1567(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		func_124(var_14_object, var_15_bool);
		var_58_object = Obj();
		var_15_bool = var_58_object;
		TaskCall(2);
		func_323(var_58_object);
		TaskReturn();
	}
	return 0;
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_17_bool = var_15_bool == (int)10;
	if(var_17_bool != 0) {
		var_18_bool = 0;
		func_86(var_13_bool, var_14_object, var_15_bool, var_18_bool);
		if(var_18_bool != 0) {
			var_31_bool = var_2_bool == 0; //@nz
			if(var_31_bool != 0) {
				var_32_object = Obj();
				var_32_object = var_4_object;
				func_1733(var_32_object);
				var_2_bool = true;
			}
		} else {
			var_39_bool = var_2_bool;
			if(var_39_bool == 0) goto Label_123;
			UnlookAsync("head");
			var_2_bool = false;
		}
	}
Label_123:
	return 0;
	
}


task_1_event_5(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_17(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_304(var_15_bool);
	var_16_object = Obj();
	var_15_bool = var_16_object;
	TaskCall(2);
	func_323(var_16_object);
	TaskReturn();
	return 0;
}


task_3_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_17_bool = var_15_int == (int)1;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_18_object = var_1_int;
		func_1836(var_18_object);
	} else {
		var_23_int = 0;
		var_15_int = var_23_int;
		func_1210(var_14_bool, var_15_int, var_23_int);
	}
	return 0;
	
}


task_3_event_1(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_1_int == var_15_object;
	if(var_17_bool != 0) {
		var_18_bool = var_2_bool == 0; //@nz
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_2_bool = true;
		var_19_object = Obj();
		var_15_object = var_19_object;
		func_1733(var_19_object);
	}
	return 0;
}


task_3_event_2(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_1_int == var_15_object;
	if(var_17_bool != 0) {
		var_18_bool = var_2_bool;
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_3_event_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object);
	return 0;
}


task_3_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1066(var_15_object);
	var_15_object = Obj();
	func_1993();
	return 0;
}


task_4_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsOverrideActive(var_17_bool);
	var_18_bool = var_17_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_15_object = var_19_object;
		func_1886(var_19_object);
	}
	return 2;
}


task_4_event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0;
}


task_4_event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0;
}


task_4_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0;
}


event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj();
	func_1785(var_15_object);
	RemoveActor(var_15_object);
	Hold();
	return 0;
}


event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0;
	var_15_object = var_19_object;
	var_16_int = var_20_int;
	var_17_float = var_21_float;
	func_1635(var_19_object, var_20_int, var_21_float);
	return 0;
}


event_43(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
	var_15_object = var_21_object;
	var_16_int = var_22_int;
	var_17_float = var_23_float;
	var_19_cvector = var_24_cvector;
	var_20_cvector = var_25_cvector;
	func_1703(var_23_float, var_24_cvector, var_25_cvector);
	return 0;
}


event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
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


event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_1948(var_16_object);
	return 0;
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); var_16_int = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	Hold();
	GetMainOutdoorScene(var_22_object);
	
Label_233:
	if((bool)1 != 0) {
		(int)0 = (int)0 + (int)1;
		var_32_int = "pt_d1q01_morlok_run_path" + var_23_int;
		@@var_22_object:GetLocator(var_32_int, var_26_bool, var_24_cvector, var_25_cvector);
		var_33_bool = var_26_bool == 0; //@nz
		if(var_33_bool != 0) {
		} else {
				var_107_int = "pt_d1q01_morlok_run_path" + var_23_int;
				Trace(var_107_int);
				var_108_object = Obj(); var_109_cvector = CVector(0,0,0);
				var_24_cvector = var_109_cvector;
				func_298(var_108_object, var_109_cvector);
				var_108_object = var_27_object;
				var_112_bool = var_27_object == 0; //@nz
				if(var_112_bool != 0) {
					var_114_int = "Can't find path to point " + var_23_int;
					Trace(var_114_int);
					goto Label_279;
				EMIT "GOTO 0x115";
				}
				RotatePath(var_27_object, var_28_bool);
				var_115_bool = var_28_bool;
				if(var_115_bool != 0) {
					FollowPath(var_27_object, (bool)1, var_28_bool);
					var_27_object = 0;
					var_117_bool = var_28_bool == 0; //@nz
					if(var_117_bool != 0) {
						goto Label_279;
					}
				} else {
					var_119_int = "Error rotating path" + var_23_int;
					Trace(var_119_int);
				}
				var_27_object = 0;
				goto Label_233;
		}
	}
Label_279:
	var_34_bool = var_0_int == 0; //@nz
	if(var_34_bool != 0) {
		var_35_float = GetByIndex(var_25_cvector, 0);
		var_36_float = GetByIndex(var_25_cvector, 2);
		RotateAsync(var_35_float, var_36_float);
		TaskCall(0);
		func_0();
		TaskReturn();
	} else {
		if((bool)1 == 0) goto Label_296;
		Hold();
		goto Label_291;

	}
Label_296:
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_0()
{
	
Label_0:
	if((bool)1 != 0) {
		var_43_float = 0; var_44_float = 0;
		func_59(var_37_int, var_38_int, var_39_bool, var_40_bool, var_41_object, (float)300, (float)100);
		goto Label_0;
	}
	return 0;
}


func_644(var_0_int, var_1_int, var_344_bool, var_345_float)
{
	var_346_int = 0; var_347_bool = 0; var_348_int = 0; var_349_string = ""; var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = "";
	func_983(var_353_string);
	irand(var_350_int, var_1_int);
	var_350_int = var_350_int + (int)1;
	Face(var_0_int);
	SetAttackState((bool)1);
	func_1845();
	var_362_int = "attack_begin" + var_350_int;
	PlayAnimation("all", var_362_int);
	WaitForAnimEnd();
	func_951(var_352_int, var_353_string);
	var_378_bool = 0; var_379_object = Obj();
	var_379_object = var_0_int;
	func_1567(var_378_bool, var_379_object);
	var_380_bool = var_378_bool == 0; //@nz
	if(var_380_bool != 0) {
		StopAsync();
		var_344_bool = 0;
		return 8;
	}
	var_381_float = 0; var_382_int = 0;
	var_345_float = var_381_float;
	var_350_int = var_382_int;
	func_605(var_353_string, var_381_float, var_382_int);
	var_465_int = "attack_middle" + var_350_int;
	HasAnimation(var_351_bool, "all", var_465_int);
	var_466_bool = var_351_bool;
	if(var_466_bool != 0) {
		func_1845();
		var_469_int = "attack_middle" + var_350_int;
		PlayAnimation("all", var_469_int);
		WaitForAnimEnd();
		func_983(var_353_string);
		var_470_bool = 0; var_471_object = Obj();
		var_471_object = var_0_int;
		func_1567(var_470_bool, var_471_object);
		var_472_bool = var_470_bool == 0; //@nz
		if(var_472_bool != 0) {
			StopAsync();
			var_344_bool = 0;
			return 8;
		}
		var_473_float = 0; var_474_int = 0;
		var_345_float = var_473_float;
		var_350_int = var_474_int;
		func_605(var_353_string, var_473_float, var_474_int);
		var_352_int = 1;

	Label_721:
		var_476_int = "attack_middle" + var_350_int;
		var_478_int = var_476_int + "_";
		var_353_string = var_478_int + var_352_int;
		HasAnimation(var_351_bool, "all", var_353_string);
		var_480_bool = var_351_bool == 0; //@nz
		if(var_480_bool != 0) {
		} else {
			func_1845();
			PlayAnimation("all", var_353_string);
			WaitForAnimEnd();
			func_983(var_353_string);
			var_496_bool = 0; var_497_object = Obj();
			var_497_object = var_0_int;
			func_1567(var_496_bool, var_497_object);
			var_498_bool = var_496_bool == 0; //@nz
			if(var_498_bool != 0) {
				StopAsync();
				var_344_bool = 0;
				var_499_float = 0; var_500_int = 0;
				var_345_float = var_499_float;
				var_350_int = var_500_int;
				func_605(var_353_string, var_499_float, var_500_int);
				var_352_int = var_352_int + (int)1;
				goto Label_721;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_484_int = "attack_end" + var_350_int;
	PlayAnimation("all", var_484_int);
	var_485_bool = 0;
	func_997(var_485_bool);
	if(var_485_bool != 0) {
		var_486_bool = 0; var_487_float = 0;
		func_781(var_486_bool, (float)0.75);
		StopAsync();
	}
	var_344_bool = 1;
	return 8;
	
}


func_1284(var_40_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; var_46_object = Obj(); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_string = ""; var_56_object = Obj(); var_57_bool = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0);
	var_61_bool = var_40_object == 0; //@ne
	if(var_61_bool != 0) {
		var_62_string = "";
		func_1375("fdie");
	} else {
		@@var_40_object:GetPosition(var_51_cvector);
		GetPosition(var_52_cvector);
		GetDirection(var_53_cvector);
		var_54_cvector = var_52_cvector - var_51_cvector;
		var_94_float = GetByIndex(var_54_cvector, 0);
		var_95_float = GetByIndex(var_53_cvector, 0);
		var_96_float = var_94_float * var_95_float;
		var_97_float = GetByIndex(var_54_cvector, 2);
		var_98_float = GetByIndex(var_53_cvector, 2);
		var_99_float = var_97_float * var_98_float;
		var_100_int = var_96_float + var_99_float;
		var_102_bool = var_100_int >= (int)0;
		if(var_102_bool != 0) {
			var_55_string = "fdie";
		} else {
				var_55_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_40_object = var_56_object;
		var_105_bool = IsFuncExist(var_40_object, "GetScriptProperty", (int)2);
		if(var_105_bool != 0) {
			@@var_40_object:HasScriptProperty(var_57_bool, "Owner");
			var_107_bool = var_57_bool;
			if(var_107_bool != 0) {
				@@var_40_object:GetScriptProperty(var_56_object, "Owner");
				var_109_bool = var_56_object == 0; //@ne
				if(var_109_bool != 0) {
					var_40_object = var_56_object;
				}
			}
		}
		var_112_bool = IsFuncExist(var_56_object, "@GetEyesHeight", (int)1);
		if(var_112_bool != 0) {
			@@var_56_object:GetEyesHeight(var_59_float);
			var_60_cvector = CVector(0.0, 0.0, 0.0);
			var_113_float = GetByIndex(var_60_cvector, 1);
			var_59_float = var_113_float;
			SetByIndex(var_60_cvector, 1) = var_113_float;
			LookAsync(var_40_object, "head", var_60_cvector);
			var_58_bool = 1;
		} else {
			var_58_bool = 0;

		}
		var_115_string = "";
		var_55_string = var_115_string;
		func_1744(var_115_string);
		PlayAnimation("all", var_55_string);
		WaitForAnimEnd();
		var_117_bool = var_58_bool;
		if(var_117_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_55_string);
		RemoveEnvelope();
		var_56_object = 0;
	}
	return 20;
	
}


func_1801(var_433_float, var_434_float, var_435_float)
{
	var_438_bool = var_434_float < var_435_float;
	if(var_438_bool != 0) {
		var_434_float = var_433_float;
	} else {
		var_435_float = var_433_float;
	}
	return 0;
	
}


func_138()
{
	var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_float = 0; var_65_bool = 0;
	WaitForAnimEnd();
	var_66_bool = 0;
	func_1728(var_66_bool);
	var_67_bool = var_66_bool == 0; //@nz
	if(var_67_bool != 0) {
		return 14;
	}
	func_1863((int)0);
	var_68_int = var_59_int;
	var_60_int = 0;
	
Label_152:
	var_81_bool = 0;
	var_81_bool = 0;
	var_83_bool = var_60_int < (int)5;
	if(var_83_bool != 0) {
		var_84_bool = 0;
		func_1728(var_84_bool);
		if(var_84_bool != 0) {
			var_81_bool = 1;
		}
	}
	if(var_81_bool != 0) {
		irand(var_61_int, (int)3);
		var_87_bool = var_61_int == (int)0;
		if(var_87_bool != 0) {
			var_88_int = var_59_int;
			if(var_88_int == 0) goto Label_185;
			irand(var_62_int, var_59_int);
			var_90_string = ""; var_91_int = 0;
			var_62_int = var_91_int;
			func_1856(var_90_string, var_91_int);
			PlayAnimation("all", var_90_string);
			WaitForAnimEnd(var_63_bool);
			var_92_bool = var_63_bool == 0; //@nz
			if(var_92_bool != 0) {
			} else {
		} else {
				var_97_bool = var_61_int == (int)1;
				if(var_97_bool != 0) {
					rand(var_64_float, (int)4);
					var_100_int = var_64_float + (int)1;
					Sleep(var_100_int, var_65_bool);
					var_101_bool = var_65_bool == 0; //@nz
					if(var_101_bool != 0) {
						goto Label_214;
					}
					goto Label_203;
				}
				var_102_int = var_60_int;
				if(var_102_int == 0) goto Label_203;
				goto Label_214;
		}
		Label_203:
			var_93_bool = 0;
			func_217(var_93_bool);
			var_94_bool = var_93_bool == 0; //@nz
			if(var_94_bool != 0) {
				goto Label_214;
			}
			ResetAAS();
			var_60_int = var_60_int + (int)1;
			goto Label_152;

		}
	}
Label_214:
	ResetAAS();
	return 14;
	
}


func_781(var_486_bool, var_487_float)
{
	var_488_float = 0; var_489_bool = 0; var_490_float = 0; var_491_bool = 0;
	rand(var_490_float);
	var_492_bool = var_490_float < var_487_float;
	if(var_492_bool != 0) {

	Label_786:
		IsAnimationPlaying(var_491_bool);
		var_493_bool = var_491_bool == 0; //@nz
		if(var_493_bool != 0) {
		} else {
			var_494_bool = 0;
			func_879(var_494_bool);
			if(var_494_bool != 0) {
				var_486_bool = 1;
				sync();
				goto Label_786;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_983(var_491_bool);
	}
	goto Label_806;
	
Label_806:
	var_486_bool = 0;
	return 4;
	
}


func_1421(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_1808(var_443_float, var_444_float, var_445_float, var_446_float)
{
	var_447_bool = var_444_float < var_445_float;
	if(var_447_bool != 0) {
		var_445_float = var_443_float;
		return 0;
	}
	var_448_bool = var_444_float > var_446_float;
	if(var_448_bool != 0) {
		var_446_float = var_443_float;
		return 0;
	}
	var_444_float = var_443_float;
	return 0;
}


func_1428(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1819(var_451_float)
{
	var_452_object = Obj(); var_453_object = Obj();
	CreateFloatVector(var_453_object);
	@@var_453_object:add(var_451_float);
	var_455_bool = var_451_float < (int)0;
	if(var_455_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_453_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1436(var_150_bool, var_151_object)
{
	var_152_bool = 0; var_153_bool = 0;
	IsPlayerActor(var_151_object, var_153_bool);
	var_153_bool = var_150_bool;
	return 2;
}


func_1948(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	GetScene(var_18_object);
	func_1916();
	var_39_object = Obj();
	var_16_object = var_39_object;
	TaskCall(4);
	func_1259(var_39_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1567(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	var_32_bool = 0; var_33_object = Obj();
	var_29_object = var_33_object;
	func_1531(var_32_bool, var_33_object);
	var_49_bool = var_32_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_29_object = var_51_object;
	func_1441(var_50_bool, var_51_object, "noaccess");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_28_bool = 1;
		return 2;
	}
	@@var_29_object:GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == (int)0;
	return 2;
}


func_1441(var_50_bool, var_51_object, var_52_string)
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


func_1703(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_1591(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_808(var_0_int, var_283_bool, var_284_float)
{
	var_285_bool = 0; var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_float = 0; var_290_bool = 0; var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_float = 0;
	
Label_809:
	IsAnimationPlaying(var_290_bool);
	var_295_bool = var_290_bool == 0; //@nz
	if(var_295_bool != 0) {
	} else {
		var_296_bool = 0;
		func_879(var_296_bool);
		if(var_296_bool != 0) {
			var_283_bool = 1;
			return 10;
		}
		var_339_bool = 0; var_340_object = Obj();
		var_340_object = var_0_int;
		func_1567(var_339_bool, var_340_object);
		var_341_bool = var_339_bool == 0; //@nz
		if(var_341_bool != 0) {
			var_283_bool = 0;
			return 10;
		}
		@@@var_0_int:GetPFPosition(var_291_cvector);
		GetPFPosition(var_292_cvector);
		var_293_cvector = var_291_cvector - var_292_cvector;
		var_294_float = var_293_cvector | var_293_cvector;
		var_342_float = var_284_float * var_284_float;
		var_343_bool = var_294_float < var_342_float;
		if(var_343_bool != 0) {
			var_344_bool = 0; var_345_float = 0;
			var_284_float = var_345_float;
			func_644(var_293_cvector, var_294_float, var_344_bool, var_345_float);
			var_283_bool = 1;
			sync();
			goto Label_809;
		}
		return 10;
	}
	func_983(var_294_float);
	var_283_bool = 0;
	return 10;
	
}


func_1916()
{
	var_19_int = 0;
	func_1880(var_19_int);
	var_24_bool = var_19_int != (int)1;
	if(var_24_bool != 0) {
		return 0;
	}
	var_25_string = "";
	func_1899("liver");
	var_36_string = "";
	func_1899("kidney");
	var_37_string = "";
	func_1899("heart");
	var_38_string = "";
	func_1899("blood");
	return 0;
}


func_298(var_108_object, var_109_cvector)
{
	var_110_object = Obj(); var_111_object = Obj();
	FindPathTo(var_111_object, var_109_cvector);
	var_111_object = var_108_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1066(var_2_bool)
{
	KillTimer((int)1);
	var_17_bool = var_2_bool;
	if(var_17_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_1232(var_15_object);
	return 0;
}


func_940(var_0_int, var_246_bool)
{
	var_247_bool = 0; var_248_bool = 0;
	var_251_bool = IsFuncExist(var_0_int, "IsAttacking", (int)1);
	if(var_251_bool != 0) {
		@@@var_0_int:IsAttacking(var_248_bool);
		var_248_bool = var_246_bool;
		return 2;
	}
	var_246_bool = 0;
	return 2;
}


func_1453(var_395_float, var_396_object, var_397_float, var_398_int)
{
	var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_float = 0; var_406_float = 0; var_407_float = 0; var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0;
	var_414_bool = 0; var_415_object = Obj(); var_416_string = "";
	var_396_object = var_415_object;
	func_1441(var_414_bool, var_415_object, "health");
	var_417_bool = var_414_bool == 0; //@nz
	if(var_417_bool != 0) {
		var_395_float = 0.0;
		return 12;
	}
	var_418_bool = 0; var_419_object = Obj(); var_420_string = "";
	var_396_object = var_419_object;
	func_1441(var_418_bool, var_419_object, "armor");
	var_421_bool = var_418_bool == 0; //@nz
	if(var_421_bool != 0) {
		var_408_int = 0;
	} else {
			@@var_396_object:GetProperty("armor", var_408_int);
	}
	var_423_string = ""; var_424_int = 0;
	var_398_int = var_424_int;
	func_1407(var_423_string, var_424_int);
	var_409_string = "armor_" + var_423_string;
	var_429_bool = 0; var_430_object = Obj(); var_431_string = "";
	var_396_object = var_430_object;
	var_409_string = var_431_string;
	func_1441(var_429_bool, var_430_object, var_431_string);
	var_432_bool = var_429_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_410_int = 0;
	} else {
		@@var_396_object:GetProperty(var_409_string, var_410_int);

	}
	var_433_float = 0; var_434_float = 0; var_435_float = 0;
	var_436_int = var_408_int + var_410_int;
	var_434_float = var_436_int / (float)100.0;
	func_1801(var_433_float, var_434_float, (float)1);
	var_433_float = var_411_float;
	@@var_396_object:GetProperty("health", var_412_float);
	var_441_int = (int)1 - var_411_float;
	var_413_float = var_397_float * var_441_int;
	var_443_float = 0; var_444_float = 0; var_445_float = 0; var_446_float = 0;
	var_444_float = var_412_float - var_413_float;
	func_1808(var_443_float, var_444_float, (float)0, (float)1);
	@@var_396_object:SetProperty("health", var_443_float);
	var_449_bool = 0; var_450_object = Obj();
	var_396_object = var_450_object;
	func_1436(var_449_bool, var_450_object);
	if(var_449_bool != 0) {
		var_451_float = 0;
		var_451_float = -var_413_float;
		func_1819(var_451_float);
	}
	var_413_float = var_395_float;
	return 12;
	
}


func_1836(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	IsPlayerActor(var_18_object, var_20_bool);
	var_21_bool = var_20_bool;
	if(var_21_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1407(var_423_string, var_424_int)
{
	var_426_bool = var_424_int == (int)2;
	if(var_426_bool != 0) {
		var_423_string = "fire";
		return 0;
	EMIT "GOTO 0x58b";
	}
	var_428_bool = var_424_int == (int)1;
	if(var_428_bool != 0) {
		var_423_string = "bullet";
		return 0;
	}
	var_423_string = "phys";
	return 0;
}


func_304(var_0_int)
{
	var_0_int = true;
	Stop();
	StopGroup0();
	StopAsync();
	return 0;
}


func_1791(var_47_cvector, var_48_cvector)
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


func_1717(var_229_object)
{
	var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0);
	@@var_229_object:GetPosition(var_233_cvector);
	GetPosition(var_234_cvector);
	var_235_cvector = var_233_cvector - var_234_cvector;
	var_236_float = GetByIndex(var_235_cvector, 0);
	var_237_float = GetByIndex(var_235_cvector, 2);
	RotateAsync(var_236_float, var_237_float);
	return 6;
}


func_1845()
{
	var_356_object = Obj(); var_357_object = Obj();
	GetScene(var_357_object);
	var_359_object = Obj();
	func_1785(var_359_object);
	BroadcastMessage("battle", var_359_object, var_357_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_951(var_2_bool, var_5_bool)
{
	var_363_float = 0; var_364_int = 0; var_365_float = 0; var_366_int = 0;
	var_367_bool = var_2_bool == 0; //@nz
	if(var_367_bool != 0) {
		return 4;
	}
	var_368_bool = var_5_bool;
	if(var_368_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_371_bool = var_5_bool > (int)0;
		if(var_371_bool != 0) {
			return 4;
		}
	}
	rand(var_365_float);
	var_372_float = 0;
	func_1001(var_372_float);
	var_373_bool = var_365_float < var_372_float;
	if(var_373_bool != 0) {
		irand(var_366_int, var_2_bool);
		var_366_int = var_366_int + (int)1;
		var_376_int = "attack" + var_366_int;
		Speak(var_376_int);
		var_377_int = 0;
		func_999(var_377_int);
		var_5_bool = var_377_int;
	}
	return 4;
}


func_1591(var_32_object)
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


func_570(var_1_int, var_2_bool, var_4_object)
{
	var_48_bool = 0; var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_572:
	var_57_int = var_1_int + (int)1;
	var_58_int = "attack_begin" + var_57_int;
	HasAnimation(var_51_bool, "all", var_58_int);
	var_59_bool = var_51_bool == 0; //@nz
	if(var_59_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_572;
	}
	var_2_bool = 0;
	
Label_586:
	var_62_int = var_2_bool + (int)1;
	var_63_int = "attack" + var_62_int;
	IsExisting3DSound(var_52_bool, var_63_int);
	var_64_bool = var_52_bool == 0; //@nz
	if(var_64_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_586;

	}
	GetAnimationOffset(var_53_cvector, "all", "bjump");
	var_67_float = GetByIndex(var_53_cvector, 2);
	var_4_object = -var_67_float;
	return 6;
	
}


func_59(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_43_float, var_44_float)
{
	var_45_bool = 0;
	func_1728(var_45_bool);
	var_48_bool = var_45_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 0;
	}
	FindActor(var_4_object, "player");
	var_2_bool = false;
	var_3_bool = false;
	var_0_int = var_43_float;
	var_1_int = var_44_float;
	SetTimer((int)10, (float)1.0);
	func_138();
	var_103_bool = var_3_bool == 0; //@nz
	if(var_103_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1210(var_0_int, var_1_int, var_23_int)
{
	var_25_bool = var_23_int != (int)0;
	if(var_25_bool != 0) {
		return 0;
	}
	var_26_bool = 0; var_27_object = Obj();
	var_27_object = var_1_int;
	func_1248(var_26_bool, var_27_object);
	var_62_bool = var_26_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_0_int = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1728(var_45_bool)
{
	var_46_bool = 0; var_47_bool = 0;
	IsLoaded(var_47_bool);
	var_47_bool = var_45_bool;
	return 2;
}


func_1856(var_74_string, var_75_int)
{
	var_76_string = ""; var_77_string = "";
	var_78_int = var_75_int;
	if(var_78_int != 0) {
		"idle" = "idle" + var_75_int;
	}
	var_77_string = var_74_string;
	return 2;
}


func_323(var_16_object)
{
	
Label_324:
	var_23_object = Obj(); var_24_bool = 0; var_25_float = 0;
	var_16_object = var_23_object;
	func_341(var_19_int, var_20_bool, var_21_float, var_22_int, var_16_object, var_23_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_324;
}
EMIT "Return(); Pop(0)";


func_1733(var_19_object)
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


func_1863(var_68_int)
{
	var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_bool = 0;
	var_71_int = 0;
	
Label_1865:
	var_74_string = ""; var_75_int = 0;
	var_71_int = var_75_int;
	func_1856(var_74_string, var_75_int);
	HasAnimation(var_72_bool, "all", var_74_string);
	var_79_bool = var_72_bool == 0; //@nz
	if(var_79_bool != 0) {
	} else {
		var_71_int = var_71_int + (int)1;
		goto Label_1865;
	}
	var_71_int = var_68_int;
	return 4;
	
}


func_335(var_392_float)
{
	var_392_float = 0.20000000298023224;
	return 0;
}


func_1744(var_63_string)
{
	var_64_bool = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	IsExisting3DSound(var_72_bool, var_63_string);
	var_80_bool = var_72_bool == 0; //@nz
	if(var_80_bool != 0) {
		var_73_int = 0;

	Label_1750:
		var_82_int = var_73_int + (int)1;
		var_83_int = var_63_string + var_82_int;
		IsExisting3DSound(var_74_bool, var_83_int);
		var_84_bool = var_74_bool == 0; //@nz
		if(var_84_bool != 0) {
		} else {
			var_73_int = var_73_int + (int)1;
			goto Label_1750;
		}
		var_85_bool = var_73_int == 0; //@nz
		if(var_85_bool != 0) {
			return 16;
		}
		irand(var_75_int, var_73_int);
		var_87_int = var_75_int + (int)1;
		var_63_string = var_63_string + var_87_int;
	}
	Is3DSoundLoaded(var_76_bool, var_63_string);
	var_88_bool = var_76_bool;
	if(var_88_bool != 0) {
		GetEyesHeight(var_77_float);
		GetDirection(var_78_cvector);
		var_79_cvector = var_78_cvector * (int)50;
		var_90_float = GetByIndex(var_79_cvector, 1);
		var_90_float = var_90_float + var_77_float;
		SetByIndex(var_79_cvector, 1) = var_90_float;
		PlayGlobalSound(var_63_string, var_79_cvector);
	}
	return 16;
	
}


func_1232(var_0_int)
{
	var_0_int = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_338(var_399_int)
{
	var_399_int = 0;
	return 0;
}


func_851(var_0_int, var_298_bool)
{
	var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_float = 0; var_303_float = 0; var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_float = 0; var_308_float = 0;
	var_309_bool = 0; var_310_object = Obj();
	var_310_object = var_0_int;
	func_1567(var_309_bool, var_310_object);
	var_311_bool = var_309_bool == 0; //@nz
	if(var_311_bool != 0) {
		var_298_bool = 0;
		return 10;
	}
	var_312_bool = 0;
	func_940(var_308_float, var_312_bool);
	if(var_312_bool != 0) {
		@@@var_0_int:GetPFPosition(var_304_cvector);
		GetPFPosition(var_305_cvector);
		var_306_cvector = var_304_cvector - var_305_cvector;
		var_307_float = var_306_cvector | var_306_cvector;
		@@@var_0_int:GetAttackDistance(var_308_float);
		var_308_float = var_308_float + (int)50;
		var_314_float = var_308_float * var_308_float;
		var_298_bool = var_307_float <= var_314_float;
		return 10;
	}
	var_298_bool = 0;
	return 10;
}


func_1108(var_0_int, var_1_int, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool)
{
	var_161_bool = 0; var_162_bool = 0; var_163_object = Obj(); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_float = 0; var_168_object = Obj(); var_169_bool = 0; var_170_bool = 0; var_171_object = Obj(); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj();
	var_0_int = false;
	var_1_int = var_156_object;
	var_160_bool = var_170_bool;
	
Label_1112:
	var_177_bool = 0; var_178_object = Obj();
	var_156_object = var_178_object;
	func_1248(var_177_bool, var_178_object);
	var_181_bool = var_177_bool == 0; //@nz
	if(var_181_bool != 0) {
		var_155_bool = 0;
		return 16;
	}
	@@var_156_object:GetPosition(var_172_cvector);
	GetPosition(var_173_cvector);
	var_174_cvector = var_172_cvector - var_173_cvector;
	var_175_float = var_174_cvector | var_174_cvector;
	var_182_bool = 0;
	var_182_bool = 0;
	var_184_bool = var_158_float > (int)0;
	if(var_184_bool != 0) {
		var_185_float = var_158_float * var_158_float;
		var_186_bool = var_175_float > var_185_float;
		if(var_186_bool != 0) {
			var_182_bool = 1;
		}
	}
	if(var_182_bool != 0) {
		Stop();
		var_155_bool = 0;
		return 16;
	}
	var_187_float = var_157_float * var_157_float;
	var_188_bool = var_175_float > var_187_float;
	if(var_188_bool != 0) {
		@@var_156_object:GetPFPosition(var_172_cvector);
		FindPathTo(var_176_object, var_172_cvector);
		var_189_bool = var_176_object != 0; //@nn
		if(var_189_bool != 0) {
			var_176_object = var_171_object;
			var_176_object = 0;
		}
		var_190_bool = var_171_object != 0; //@nn
		if(var_190_bool != 0) {
			var_191_bool = var_170_bool;
			if(var_191_bool == 0) goto Label_1161;
			var_170_bool = 0;
			RotatePath(var_171_object, var_169_bool);
			var_192_bool = var_169_bool == 0; //@nz
			if(var_192_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_195_string = "";
				func_1255(var_195_string);
				var_196_string = "";
				func_1257(var_196_string);
				FollowPath(var_171_object, var_159_bool, var_169_bool, var_195_string, var_196_string);
				var_197_bool = var_169_bool == 0; //@nz
				if(var_197_bool != 0) {
					var_198_int = var_0_int;
					if(var_198_int != 0) {
						var_171_object = 0;
						goto Label_1208;
					EMIT "GOTO 0x49d";
					}
				} else {
					var_171_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_169_bool);
					var_201_bool = var_169_bool == 0; //@nz
					if(var_201_bool != 0) {
						var_202_int = var_0_int;
						if(var_202_int != 0) {
							var_171_object = 0;
							goto Label_1208;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1208;
	}
			var_176_object = 0;
			goto Label_1206;

		Label_1206:
			var_171_object = 0;

		}
		goto Label_1112;
	}
Label_1208:
	var_155_bool = !var_0_int;
	return 16;
	
}


func_341(var_0_int, var_3_bool, var_5_bool, var_23_object, var_24_bool, var_25_float, var_132_bool, var_224_bool)
{
	var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_float = 0;
	func_570(var_45_cvector, var_46_bool, var_47_float);
	var_5_bool = 0;
	var_72_bool = IsFuncExist(var_23_object, "@GetAttackDistance", (int)1);
	if(var_72_bool != 0) {
		@@var_23_object:GetAttackDistance(var_37_float);
		var_37_float = var_37_float + (int)50;
	} else {
							var_25_float = var_37_float;
	}
	var_75_bool = var_37_float >= (int)150;
	if(var_75_bool != 0) {
		var_37_float = 150;
	}
	var_3_bool = false;
	var_0_int = var_23_object;
	IsPlayerActor(var_0_int, var_40_bool);
	var_76_bool = var_40_bool;
	if(var_76_bool != 0) {
		PlayGlobalMusic("attack");
		var_78_object = Obj();
		func_1785(var_78_object);
		SendPlayerEnemy(var_23_object, var_78_object);
	}
	var_81_bool = var_24_bool;
	if(var_81_bool != 0) {
		var_41_bool = 0;
	} else {
						var_41_bool = 1;

	}
	var_42_float = (float)400.0 + var_37_float;
	
Label_381:
	var_83_bool = 0;
	var_83_bool = 0;
	var_84_bool = 0; var_85_object = Obj();
	var_85_object = var_0_int;
	func_1567(var_84_bool, var_85_object);
	if(var_84_bool != 0) {
		var_118_bool = var_3_bool == 0; //@nz
		if(var_118_bool != 0) {
			var_83_bool = 1;
		}
	}
	if(var_83_bool != 0) {
		func_983(var_47_float);
		@@@var_0_int:GetPFPosition(var_38_cvector);
		GetPFPosition(var_39_cvector);
		var_43_cvector = var_38_cvector - var_39_cvector;
		var_44_float = var_43_cvector | var_43_cvector;
		var_124_float = var_42_float * var_42_float;
		var_125_bool = var_44_float >= var_124_float;
		if(var_125_bool != 0) {
			var_126_bool = 0; var_127_object = Obj(); var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_bool = 0;
			var_127_object = var_0_int;
			var_37_float = var_128_float;
			TaskCall(3);
			func_1003(var_134_bool, var_126_bool, var_127_object, var_128_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_209_bool = var_132_bool == 0; //@nz
			if(var_209_bool != 0) {
			} else {
				var_41_bool = 0;
		} else {
				var_215_float = var_25_float * var_25_float;
				var_216_bool = var_44_float >= var_215_float;
				if(var_216_bool != 0) {
					@@@var_0_int:GetPFPosition(var_45_cvector);
					CanReachByPF(var_46_bool, var_45_cvector);
					var_217_bool = var_46_bool == 0; //@nz
					if(var_217_bool != 0) {
						var_218_bool = 0; var_219_object = Obj(); var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_bool = 0;
						var_219_object = var_0_int;
						var_37_float = var_220_float;
						TaskCall(3);
						func_1003(var_226_bool, var_218_bool, var_219_object, var_220_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_227_bool = var_224_bool == 0; //@nz
						if(var_227_bool != 0) {
							goto Label_553;
						}
						var_41_bool = 0;
						goto Label_381;
					}
					var_228_bool = var_41_bool == 0; //@nz
					if(var_228_bool != 0) {
						var_229_object = Obj();
						var_229_object = var_0_int;
						func_1717(var_229_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_983(var_47_float);
						StopAsync();
						var_41_bool = 1;
						var_240_bool = 0; var_241_object = Obj();
						var_241_object = var_0_int;
						func_1567(var_240_bool, var_241_object);
						var_242_bool = var_240_bool == 0; //@nz
						if(var_242_bool != 0) {
							goto Label_553;
						}
					}
					rand(var_47_float);
					var_243_bool = 0;
					var_245_bool = var_47_float < (float)0.25;
					if(var_245_bool != 1) {
						var_246_bool = 0;
						func_940((bool)1, var_246_bool);
						if(var_246_bool != 1) {
							var_243_bool = 0;
						}
					}
					if(var_243_bool != 0) {
						Face(var_0_int);
						func_990();
						PlayAnimation("all", "attack_stay");
						var_283_bool = 0; var_284_float = 0;
						var_25_float = var_284_float;
						func_808(var_47_float, var_283_bool, var_284_float);
						StopAsync();
					} else {
						Face(var_0_int);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_983(var_47_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_505_bool = 0;
						func_940(var_47_float, var_505_bool);
						var_506_bool = var_505_bool == 0; //@nz
						if(var_506_bool == 0) goto Label_543;
						var_507_bool = 0; var_508_object = Obj();
						var_508_object = var_0_int;
						func_1567(var_507_bool, var_508_object);
						var_509_bool = var_507_bool == 0; //@nz
						if(var_509_bool != 0) {
							goto Label_553;
						}
						@@@var_0_int:GetPFPosition(var_38_cvector);
						GetPFPosition(var_39_cvector);
						var_43_cvector = var_38_cvector - var_39_cvector;
						var_44_float = var_43_cvector | var_43_cvector;
						var_510_float = var_25_float * var_25_float;
						var_511_bool = var_44_float < var_510_float;
						if(var_511_bool == 0) goto Label_543;
						var_512_bool = 0; var_513_float = 0;
						var_25_float = var_513_float;
						func_644(var_46_bool, var_47_float, var_512_bool, var_513_float);
						var_514_bool = var_512_bool == 0; //@nz
						if(var_514_bool == 0) goto Label_543;
						goto Label_553;
				}
					var_515_bool = 0; var_516_float = 0;
					var_25_float = var_516_float;
					func_644(var_46_bool, var_47_float, var_515_bool, var_516_float);
					var_517_bool = var_515_bool == 0; //@nz
					if(var_517_bool != 0) {
						goto Label_553;
					}
					var_41_bool = 1;

				}
			Label_543:
				goto Label_552;
		}
		Label_552:
			goto Label_381;

		}
	}
Label_553:
	WaitForAnimEnd();
	var_210_bool = var_3_bool;
	if(var_210_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_213_bool = var_40_bool;
	if(var_213_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_86(var_0_int, var_1_int, var_4_object, var_18_bool)
{
	var_19_float = 0; var_20_float = 0;
	var_21_bool = var_4_object == 0; //@ne
	if(var_21_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	var_22_float = 0; var_23_object = Obj();
	var_23_object = var_4_object;
	func_1428(var_22_float, var_23_object);
	var_20_float = sqrt(var_22_float);
	var_30_bool = var_2_bool;
	if(var_30_bool != 0) {
		var_20_float = var_20_float - var_1_int;
	}
	var_18_bool = var_20_float < var_0_int;
	return 2;
}


func_983(var_0_int)
{
	var_119_object = Obj();
	var_119_object = var_0_int;
	func_1836(var_119_object);
	return 0;
}


func_1880(var_19_int)
{
	var_20_int = 0; var_21_int = 0;
	GetVariable("branch", var_21_int);
	var_21_int = var_19_int;
	return 2;
}


func_217(var_93_bool)
{
	var_93_bool = 1;
	return 0;
}


func_219()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_988(var_460_int)
{
	var_460_int = 0;
	return 0;
}


func_605(var_0_int, var_381_float, var_382_int)
{
	var_383_object = Obj(); var_384_float = 0; var_385_float = 0; var_386_object = Obj(); var_387_float = 0; var_388_float = 0;
	var_390_float = var_381_float * (float)0.8999999761581421;
	GetVictim(var_390_float, var_386_object);
	ReportAttack(var_0_int);
	var_391_bool = var_386_object == var_0_int;
	if(var_391_bool != 0) {
		var_392_float = 0; var_393_object = Obj(); var_394_int = 0;
		var_386_object = var_393_object;
		var_382_int = var_394_int;
		func_335(var_394_int);
		var_392_float = var_387_float;
		var_395_float = 0; var_396_object = Obj(); var_397_float = 0; var_398_int = 0;
		var_386_object = var_396_object;
		var_387_float = var_397_float;
		var_399_int = 0; var_400_object = Obj(); var_401_int = 0;
		var_386_object = var_400_object;
		var_382_int = var_401_int;
		func_338(var_401_int);
		var_399_int = var_398_int;
		func_1453(var_395_float, var_396_object, var_397_float, var_398_int);
		var_395_float = var_388_float;
		var_460_int = 0;
		func_988(var_460_int);
		ReportHit(var_0_int, var_460_int, var_388_float, var_387_float);
		var_461_object = Obj(); var_462_float = 0;
		var_386_object = var_461_object;
		var_388_float = var_462_float;
		func_995();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_990()
{
	var_252_string = "";
	func_1744("attack_stay");
	return 0;
}


func_1886(var_19_object)
{
	var_20_int = 0;
	func_1880(var_20_int);
	var_25_bool = var_20_int == (int)1;
	if(var_25_bool != 0) {
		WorkWithCorpse(var_19_object);
	} else {
		Barter(var_19_object);
	}
	return 0;
	
}


func_1248(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_1567(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
	return 0;
}


func_1375(var_62_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_63_string = "";
	var_62_string = var_63_string;
	func_1744(var_63_string);
	PlayAnimation("all", var_62_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_62_string);
	RemoveEnvelope();
	return 0;
}


func_995()
{
	return 0;
}


func_1635(var_19_object, var_20_int, var_21_float)
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
		func_1421(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1791(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_1664:
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
			goto Label_1664;
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
			func_1703(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_1591(var_109_object);
	return 18;
	
}


func_997(var_485_bool)
{
	var_485_bool = 1;
	return 0;
}


func_999(var_377_int)
{
	var_377_int = 1;
	return 0;
}


func_1255(var_195_string)
{
	var_195_string = "walk";
	return 0;
}


func_1001(var_372_float)
{
	var_372_float = 0.5;
	return 0;
}


func_1257(var_196_string)
{
	var_196_string = "run";
	return 0;
}


func_1003(var_2_bool, var_126_bool, var_127_object, var_128_float, var_129_float, var_130_bool, var_131_bool)
{
	var_135_bool = 0; var_136_bool = 0; var_137_bool = 0; var_138_bool = 0;
	var_139_object = Obj();
	var_127_object = var_139_object;
	func_1836(var_139_object);
	SetTimer((int)1, (int)5);
	CanSee(var_137_bool, var_127_object);
	var_142_bool = var_137_bool;
	if(var_142_bool != 0) {
		var_2_bool = true;
		var_143_object = Obj();
		var_127_object = var_143_object;
		func_1733(var_143_object);
	} else {
		var_2_bool = false;
	}
	var_150_bool = 0; var_151_object = Obj();
	var_127_object = var_151_object;
	func_1436(var_150_bool, var_151_object);
	if(var_150_bool != 0) {
		var_154_object = Obj();
		func_1785(var_154_object);
		SendPlayerEnemy(var_127_object, var_154_object);
	}
	var_155_bool = 0; var_156_object = Obj(); var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_bool = 0;
	var_127_object = var_156_object;
	var_128_float = var_157_float;
	var_129_float = var_158_float;
	var_130_bool = var_159_bool;
	var_131_bool = var_160_bool;
	func_1108(var_137_bool, var_138_bool, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool);
	var_155_bool = var_138_bool;
	var_206_bool = var_2_bool;
	if(var_206_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_138_bool = var_126_bool;
	return 4;
	
}


func_1899(var_25_string)
{
	var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; var_31_bool = 0;
	CreateInvItem(var_29_object);
	@@var_29_object:SetItemName(var_25_string);
	@@var_29_object:SetProperty("Organ", (int)1);
	@@var_29_object:GetItemID(var_30_int);
	AddItem(var_31_bool, var_29_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1259(var_39_object)
{
	EventDisable(0);
	var_40_object = Obj();
	var_39_object = var_40_object;
	func_1284(var_40_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1270:
	Hold();
	goto Label_1270;
}
EMIT "Return(); Pop(0)";


func_879(var_296_bool)
{
	var_297_bool = 0;
	var_297_bool = 0;
	var_298_bool = 0;
	func_851(var_297_bool, var_298_bool);
	if(var_298_bool != 0) {
		var_315_bool = 0;
		func_895(var_296_bool, var_297_bool, var_315_bool);
		if(var_315_bool != 0) {
			var_297_bool = 1;
		}
	}
	if(var_297_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_1526(var_43_bool, var_44_object)
{
	var_45_bool = 0; var_46_bool = 0;
	@@var_44_object:IsDead(var_46_bool);
	var_46_bool = var_43_bool;
	return 2;
}


func_1785(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	self(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1531(var_32_bool, var_33_object)
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
		func_1526(var_43_bool, var_44_object);
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


func_124(var_2_bool, var_3_bool)
{
	func_219();
	KillTimer((int)10);
	var_56_bool = var_2_bool;
	if(var_56_bool != 0) {
		UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
	return 0;
}


func_895(var_0_int, var_4_object, var_315_bool)
{
	var_316_object = Obj(); var_317_bool = 0; var_318_float = 0; var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_object = Obj(); var_322_bool = 0; var_323_float = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0);
	GetScene(var_321_object);
	var_322_bool = 0;
	
Label_899:
	var_326_cvector = CVector(0,0,0); var_327_object = Obj();
	var_327_object = var_0_int;
	func_1421(var_326_cvector, var_327_object);
	var_332_int = -var_326_cvector;
	FindDirLength(var_323_float, var_332_int, var_4_object);
	var_333_bool = var_323_float < var_4_object;
	if(var_333_bool != 0) {
	} else {
		Face(var_0_int);
		PlayAnimation("all", "bjump");
		@@@var_0_int:GetPFPosition(var_324_cvector);
		GetPFPosition(var_325_cvector);
		WaitForAnimEnd();
		func_983(var_325_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_322_bool = 1;
		var_337_bool = 0;
		func_851(var_325_cvector, var_337_bool);
		var_338_bool = var_337_bool == 0; //@nz
		if(var_338_bool != 0) {
			goto Label_937;
		}
		goto Label_899;
	}
Label_937:
	var_322_bool = var_315_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


