// @IMPORTS: Sleep/1,IsPlayerActor/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1,GetVariable/2,WorkWithCorpse/1,Barter/1
// @STRINGS: W:all|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle|W:idle|W:branch|A:RemoveStationaryActor
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_17: op=0x8 vars=object
// @EVENT_1: op=0x16 vars=object
// @EVENT_3: op=0x20 vars=object
// @TASK_1: vars= params=1
// @EVENT_0: op=0x9f vars=object
// @EVENT_22: op=0x11e vars=object,int,float,float
// @EVENT_16: op=0x120 vars=object,string
// @EVENT_41: op=0x122 vars=object
// @TASK_2: vars=object,int,int,bool,float,int params=1
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_7: op=0x3fd vars=int
// @EVENT_1: op=0x418 vars=object
// @EVENT_2: op=0x427 vars=object
// @EVENT_10: op=0x4ad vars=object
// @EVENT_41: op=0x4b8 vars=object
// @STANDALONE_EVENT_22: op=0x6e8 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x6f0 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x6fa vars=object,string
// @STANDALONE_EVENT_41: op=0x707 vars=object
// @PE: 0x8,0x80,0x90,0x104,0x11e,0x120,0x122,0x124,0x130,0x133,0x3c4,0x3fd,0x418,0x427,0x49b,0x4ad,0x4b8,0x4c1,0x4cc,0x664,0x66b,0x676,0x6e0,0x6e8,0x6f0,0x707,0x70d,0x714,0x720

	task_0_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_13_object)
	{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_1805(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_123();
		var_50_object = Obj();
		var_13_object = var_50_object;
		func_1812(var_50_object);
	}
	return 0;
	}


task_0_event_1(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	IsPlayerActor(var_9_bool, var_11_bool);
	var_12_bool = var_11_bool;
	if(var_12_bool != 0) {
		var_9_bool = Obj();
		func_8();
	}
	return 2;
}


task_0_event_3(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	IsPlayerActor(var_9_bool, var_11_bool);
	var_12_bool = var_11_bool;
	if(var_12_bool != 0) {
		var_9_bool = Obj();
		func_8();
	}
	return 2;
}


task_1_event_0(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	IsOverrideActive(var_11_bool);
	var_12_bool = var_11_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_9_bool = var_13_object;
		func_1824(var_13_object);
	}
	return 2;
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0;
}


task_1_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0;
}


task_1_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	return 0;
}


task_3_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_11_bool = var_9_int == (int)1;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_1_int;
		func_1716(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_1179(var_8_bool, var_9_int, var_17_int);
	}
	return 0;
	
}


task_3_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_1_int == var_9_object;
	if(var_11_bool != 0) {
		var_12_bool = var_2_int == 0; //@nz
		if(var_12_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_2_int = true;
		var_13_object = Obj();
		var_9_object = var_13_object;
		func_1568(var_13_object);
	}
	return 0;
}


task_3_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_1_int == var_9_object;
	if(var_11_bool != 0) {
		var_12_int = var_2_int;
		if(var_12_int != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_3_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_1035(var_9_object);
	var_9_object = Obj();
	func_1799();
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1470(var_13_object, var_14_int, var_15_float);
	return 0;
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	var_9_object = var_15_object;
	var_10_int = var_16_int;
	var_11_float = var_17_float;
	var_13_cvector = var_18_cvector;
	var_14_cvector = var_19_cvector;
	func_1538(var_17_float, var_18_cvector, var_19_cvector);
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0;
	var_14_bool = var_10_string == "health";
	if(var_14_bool != 0) {
		GetProperty("health", var_12_float);
		var_17_bool = var_12_float <= (int)0;
		if(var_17_bool != 0) {
			SignalDeath(var_9_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_1760(var_10_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	
Label_0:
	Sleep((int)3);
	func_42();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_128(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1249(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		var_16_bool = 0; var_17_object = Obj(); var_18_float = 0;
		var_11_object = var_17_object;
		func_1654(var_16_bool, var_17_object, (float)0.0);
	}
	var_54_object = Obj();
	var_11_object = var_54_object;
	func_144(var_54_object);
	return 0;
}


func_1538(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1426(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_260(var_77_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_78_string = "";
	var_77_string = var_78_string;
	func_1579(var_78_string);
	PlayAnimation("all", var_77_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_77_string);
	RemoveEnvelope();
	return 0;
}


func_1288(var_402_float, var_403_object, var_404_float, var_405_int)
{
	var_409_int = 0; var_410_string = ""; var_411_int = 0; var_412_float = 0; var_413_float = 0; var_414_float = 0; var_415_int = 0; var_416_string = ""; var_417_int = 0; var_418_float = 0; var_419_float = 0; var_420_float = 0;
	var_421_bool = 0; var_422_object = Obj(); var_423_string = "";
	var_403_object = var_422_object;
	func_1254(var_421_bool, var_422_object, "health");
	var_424_bool = var_421_bool == 0; //@nz
	if(var_424_bool != 0) {
		var_402_float = 0.0;
		return 12;
	}
	var_425_bool = 0; var_426_object = Obj(); var_427_string = "";
	var_403_object = var_426_object;
	func_1254(var_425_bool, var_426_object, "armor");
	var_428_bool = var_425_bool == 0; //@nz
	if(var_428_bool != 0) {
		var_415_int = 0;
	} else {
			@@var_403_object:GetProperty("armor", var_415_int);
	}
	var_430_string = ""; var_431_int = 0;
	var_405_int = var_431_int;
	func_1228(var_430_string, var_431_int);
	var_416_string = "armor_" + var_430_string;
	var_436_bool = 0; var_437_object = Obj(); var_438_string = "";
	var_403_object = var_437_object;
	var_416_string = var_438_string;
	func_1254(var_436_bool, var_437_object, var_438_string);
	var_439_bool = var_436_bool == 0; //@nz
	if(var_439_bool != 0) {
		var_417_int = 0;
	} else {
		@@var_403_object:GetProperty(var_416_string, var_417_int);

	}
	var_440_float = 0; var_441_float = 0; var_442_float = 0;
	var_443_int = var_415_int + var_417_int;
	var_441_float = var_443_int / (float)100.0;
	func_1636(var_440_float, var_441_float, (float)1);
	var_440_float = var_418_float;
	@@var_403_object:GetProperty("health", var_419_float);
	var_448_int = (int)1 - var_418_float;
	var_420_float = var_404_float * var_448_int;
	var_450_float = 0; var_451_float = 0; var_452_float = 0; var_453_float = 0;
	var_451_float = var_419_float - var_420_float;
	func_1643(var_450_float, var_451_float, (float)0, (float)1);
	@@var_403_object:SetProperty("health", var_450_float);
	var_456_bool = 0; var_457_object = Obj();
	var_403_object = var_457_object;
	func_1249(var_456_bool, var_457_object);
	if(var_456_bool != 0) {
		var_458_float = 0;
		var_458_float = -var_420_float;
		func_1689(var_458_float);
	}
	var_420_float = var_402_float;
	return 12;
	
}


func_777(var_0_object, var_290_bool, var_291_float)
{
	var_292_bool = 0; var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0;
	
Label_778:
	IsAnimationPlaying(var_297_bool);
	var_302_bool = var_297_bool == 0; //@nz
	if(var_302_bool != 0) {
	} else {
		var_303_bool = 0;
		func_848(var_303_bool);
		if(var_303_bool != 0) {
			var_290_bool = 1;
			return 10;
		}
		var_346_bool = 0; var_347_object = Obj();
		var_347_object = var_0_object;
		func_1402(var_346_bool, var_347_object);
		var_348_bool = var_346_bool == 0; //@nz
		if(var_348_bool != 0) {
			var_290_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_298_cvector);
		GetPFPosition(var_299_cvector);
		var_300_cvector = var_298_cvector - var_299_cvector;
		var_301_float = var_300_cvector | var_300_cvector;
		var_349_float = var_291_float * var_291_float;
		var_350_bool = var_301_float < var_349_float;
		if(var_350_bool != 0) {
			var_351_bool = 0; var_352_float = 0;
			var_291_float = var_352_float;
			func_613(var_300_cvector, var_301_float, var_351_bool, var_352_float);
			var_290_bool = 1;
			sync();
			goto Label_778;
		}
		return 10;
	}
	func_952(var_301_float);
	var_290_bool = 0;
	return 10;
	
}


func_1035(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1201(var_9_object);
	return 0;
}


func_1805(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1402(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
	return 0;
}


func_909(var_0_object, var_253_bool)
{
	var_254_bool = 0; var_255_bool = 0;
	var_258_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_258_bool != 0) {
		@@@var_0_object:IsAttacking(var_255_bool);
		var_255_bool = var_253_bool;
		return 2;
	}
	var_253_bool = 0;
	return 2;
}


func_144(var_54_object)
{
	EventDisable(0);
	var_55_object = Obj();
	var_54_object = var_55_object;
	func_169(var_55_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_155:
	Hold();
	goto Label_155;
}
EMIT "Return(); Pop(0)";


func_1552(var_236_object)
{
	var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0);
	@@var_236_object:GetPosition(var_240_cvector);
	GetPosition(var_241_cvector);
	var_242_cvector = var_240_cvector - var_241_cvector;
	var_243_float = GetByIndex(var_242_cvector, 0);
	var_244_float = GetByIndex(var_242_cvector, 2);
	RotateAsync(var_243_float, var_244_float);
	return 6;
}


func_1426(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = "";
	var_41_bool = var_26_object == 0; //@ne
	if(var_41_bool != 0) {
		return 14;
	}
	IsDead(var_34_bool);
	var_42_bool = var_34_bool;
	if(var_42_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_35_int);
	var_44_bool = var_35_int < (int)0;
	if(var_44_bool != 0) {
		return 14;
	}
	@@var_26_object:GetPosition(var_36_cvector);
	GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_39_cvector = var_37_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_39_cvector, 0);
	var_46_float = GetByIndex(var_38_cvector, 0);
	var_47_float = var_45_float * var_46_float;
	var_48_float = GetByIndex(var_39_cvector, 2);
	var_49_float = GetByIndex(var_38_cvector, 2);
	var_50_float = var_48_float * var_49_float;
	var_51_int = var_47_float + var_50_float;
	var_53_bool = var_51_int >= (int)0;
	if(var_53_bool != 0) {
		var_40_string = "fhit";
	} else {
		var_40_string = "bhit";
	}
	var_56_int = var_40_string + "1";
	var_58_int = var_40_string + "2";
	FadeSecondaryAnimation("hit_react", var_56_int, var_58_int, (int)-10);
	return 14;
	
}


func_1812(var_50_object)
{
	var_51_object = Obj();
	var_50_object = var_51_object;
	func_1837(var_51_object);
	return 0;
}


func_920(var_2_int, var_5_float)
{
	var_370_float = 0; var_371_int = 0; var_372_float = 0; var_373_int = 0;
	var_374_bool = var_2_int == 0; //@nz
	if(var_374_bool != 0) {
		return 4;
	}
	var_375_float = var_5_float;
	if(var_375_float != 0) {
		var_5_float = var_5_float + (int)-1;
		var_378_bool = var_5_float > (int)0;
		if(var_378_bool != 0) {
			return 4;
		}
	}
	rand(var_372_float);
	var_379_float = 0;
	func_970(var_379_float);
	var_380_bool = var_372_float < var_379_float;
	if(var_380_bool != 0) {
		irand(var_373_int, var_2_int);
		var_373_int = var_373_int + (int)1;
		var_383_int = "attack" + var_373_int;
		Speak(var_383_int);
		var_384_int = 0;
		func_968(var_384_int);
		var_5_float = var_384_int;
	}
	return 4;
}


func_1689(var_458_float)
{
	var_459_object = Obj(); var_460_object = Obj();
	CreateFloatVector(var_460_object);
	@@var_460_object:add(var_458_float);
	var_462_bool = var_458_float < (int)0;
	if(var_462_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_460_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1818(var_14_int)
{
	var_15_int = 0; var_16_int = 0;
	GetVariable("branch", var_16_int);
	var_16_int = var_14_int;
	return 2;
}


func_1179(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_1217(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1563(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0;
	IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
	return 2;
}


func_539(var_1_object, var_2_int, var_4_bool)
{
	var_89_bool = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_bool = 0; var_94_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_541:
	var_98_int = var_1_object + (int)1;
	var_99_int = "attack_begin" + var_98_int;
	HasAnimation(var_92_bool, "all", var_99_int);
	var_100_bool = var_92_bool == 0; //@nz
	if(var_100_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_541;
	}
	var_2_int = 0;
	
Label_555:
	var_103_int = var_2_int + (int)1;
	var_104_int = "attack" + var_103_int;
	IsExisting3DSound(var_93_bool, var_104_int);
	var_105_bool = var_93_bool == 0; //@nz
	if(var_105_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_555;

	}
	GetAnimationOffset(var_94_cvector, "all", "bjump");
	var_108_float = GetByIndex(var_94_cvector, 2);
	var_4_bool = -var_108_float;
	return 6;
	
}


func_1824(var_13_object)
{
	var_14_int = 0;
	func_1818(var_14_int);
	var_19_bool = var_14_int == (int)1;
	if(var_19_bool != 0) {
		WorkWithCorpse(var_13_object);
	} else {
		Barter(var_13_object);
	}
	return 0;
	
}


func_1568(var_13_object)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0);
	@@var_13_object:GetEyesHeight(var_16_float);
	var_17_cvector = CVector(0.0, 0.0, 0.0);
	var_18_float = GetByIndex(var_17_cvector, 1);
	var_16_float = var_18_float;
	SetByIndex(var_17_cvector, 1) = var_18_float;
	LookAsync(var_13_object, "head", var_17_cvector);
	return 4;
}


func_292(var_57_object)
{
	
Label_293:
	var_64_object = Obj(); var_65_bool = 0; var_66_float = 0;
	var_57_object = var_64_object;
	func_310(var_60_int, var_61_bool, var_62_float, var_63_int, var_57_object, var_64_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_293;
}
EMIT "Return(); Pop(0)";


func_169(var_55_object)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_string = ""; var_61_object = Obj(); var_62_bool = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_string = ""; var_71_object = Obj(); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0);
	var_76_bool = var_55_object == 0; //@ne
	if(var_76_bool != 0) {
		var_77_string = "";
		func_260("fdie");
	} else {
		@@var_55_object:GetPosition(var_66_cvector);
		GetPosition(var_67_cvector);
		GetDirection(var_68_cvector);
		var_69_cvector = var_67_cvector - var_66_cvector;
		var_109_float = GetByIndex(var_69_cvector, 0);
		var_110_float = GetByIndex(var_68_cvector, 0);
		var_111_float = var_109_float * var_110_float;
		var_112_float = GetByIndex(var_69_cvector, 2);
		var_113_float = GetByIndex(var_68_cvector, 2);
		var_114_float = var_112_float * var_113_float;
		var_115_int = var_111_float + var_114_float;
		var_117_bool = var_115_int >= (int)0;
		if(var_117_bool != 0) {
			var_70_string = "fdie";
		} else {
				var_70_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_55_object = var_71_object;
		var_120_bool = IsFuncExist(var_55_object, "GetScriptProperty", (int)2);
		if(var_120_bool != 0) {
			@@var_55_object:HasScriptProperty(var_72_bool, "Owner");
			var_122_bool = var_72_bool;
			if(var_122_bool != 0) {
				@@var_55_object:GetScriptProperty(var_71_object, "Owner");
				var_124_bool = var_71_object == 0; //@ne
				if(var_124_bool != 0) {
					var_55_object = var_71_object;
				}
			}
		}
		var_127_bool = IsFuncExist(var_71_object, "@GetEyesHeight", (int)1);
		if(var_127_bool != 0) {
			@@var_71_object:GetEyesHeight(var_74_float);
			var_75_cvector = CVector(0.0, 0.0, 0.0);
			var_128_float = GetByIndex(var_75_cvector, 1);
			var_74_float = var_128_float;
			SetByIndex(var_75_cvector, 1) = var_128_float;
			LookAsync(var_55_object, "head", var_75_cvector);
			var_73_bool = 1;
		} else {
			var_73_bool = 0;

		}
		var_130_string = "";
		var_70_string = var_130_string;
		func_1579(var_130_string);
		PlayAnimation("all", var_70_string);
		WaitForAnimEnd();
		var_132_bool = var_73_bool;
		if(var_132_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_70_string);
		RemoveEnvelope();
		var_71_object = 0;
	}
	return 20;
	
}


func_42()
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_float = 0; var_23_bool = 0;
	WaitForAnimEnd();
	var_24_bool = 0;
	func_1563(var_24_bool);
	var_27_bool = var_24_bool == 0; //@nz
	if(var_27_bool != 0) {
		return 14;
	}
	func_1743((int)0);
	var_28_int = var_17_int;
	var_18_int = 0;
	
Label_56:
	var_41_bool = 0;
	var_41_bool = 0;
	var_43_bool = var_18_int < (int)5;
	if(var_43_bool != 0) {
		var_44_bool = 0;
		func_1563(var_44_bool);
		if(var_44_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		irand(var_19_int, (int)3);
		var_47_bool = var_19_int == (int)0;
		if(var_47_bool != 0) {
			var_48_int = var_17_int;
			if(var_48_int == 0) goto Label_89;
			irand(var_20_int, var_17_int);
			var_50_string = ""; var_51_int = 0;
			var_20_int = var_51_int;
			func_1736(var_50_string, var_51_int);
			PlayAnimation("all", var_50_string);
			WaitForAnimEnd(var_21_bool);
			var_52_bool = var_21_bool == 0; //@nz
			if(var_52_bool != 0) {
			} else {
		} else {
				var_57_bool = var_19_int == (int)1;
				if(var_57_bool != 0) {
					rand(var_22_float, (int)4);
					var_60_int = var_22_float + (int)1;
					Sleep(var_60_int, var_23_bool);
					var_61_bool = var_23_bool == 0; //@nz
					if(var_61_bool != 0) {
						goto Label_118;
					}
					goto Label_107;
				}
				var_62_int = var_18_int;
				if(var_62_int == 0) goto Label_107;
				goto Label_118;
		}
		Label_107:
			var_53_bool = 0;
			func_121(var_53_bool);
			var_54_bool = var_53_bool == 0; //@nz
			if(var_54_bool != 0) {
				goto Label_118;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_56;

		}
	}
Label_118:
	ResetAAS();
	return 14;
	
}


func_1579(var_78_string)
{
	var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0);
	IsExisting3DSound(var_87_bool, var_78_string);
	var_95_bool = var_87_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_88_int = 0;

	Label_1585:
		var_97_int = var_88_int + (int)1;
		var_98_int = var_78_string + var_97_int;
		IsExisting3DSound(var_89_bool, var_98_int);
		var_99_bool = var_89_bool == 0; //@nz
		if(var_99_bool != 0) {
		} else {
			var_88_int = var_88_int + (int)1;
			goto Label_1585;
		}
		var_100_bool = var_88_int == 0; //@nz
		if(var_100_bool != 0) {
			return 16;
		}
		irand(var_90_int, var_88_int);
		var_102_int = var_90_int + (int)1;
		var_78_string = var_78_string + var_102_int;
	}
	Is3DSoundLoaded(var_91_bool, var_78_string);
	var_103_bool = var_91_bool;
	if(var_103_bool != 0) {
		GetEyesHeight(var_92_float);
		GetDirection(var_93_cvector);
		var_94_cvector = var_93_cvector * (int)50;
		var_105_float = GetByIndex(var_94_cvector, 1);
		var_105_float = var_105_float + var_92_float;
		SetByIndex(var_94_cvector, 1) = var_105_float;
		PlayGlobalSound(var_78_string, var_94_cvector);
	}
	return 16;
	
}


func_1706(var_23_float)
{
	var_24_object = Obj(); var_25_object = Obj();
	CreateFloatVector(var_25_object);
	@@var_25_object:add(var_23_float);
	SendWorldWndMessage((int)16, var_25_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1837(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	GetScene(var_53_object);
	var_54_object = Obj();
	func_1620(var_54_object);
	@@var_53_object:RemoveStationaryActor(var_54_object);
	var_57_object = Obj();
	var_51_object = var_57_object;
	TaskCall(2);
	func_292(var_57_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_304(var_399_float)
{
	var_399_float = 0.029999999329447746;
	return 0;
}


func_1201(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_307(var_406_int)
{
	var_406_int = 0;
	return 0;
}


func_820(var_0_object, var_305_bool)
{
	var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_float = 0; var_310_float = 0; var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0;
	var_316_bool = 0; var_317_object = Obj();
	var_317_object = var_0_object;
	func_1402(var_316_bool, var_317_object);
	var_318_bool = var_316_bool == 0; //@nz
	if(var_318_bool != 0) {
		var_305_bool = 0;
		return 10;
	}
	var_319_bool = 0;
	func_909(var_315_float, var_319_bool);
	if(var_319_bool != 0) {
		@@@var_0_object:GetPFPosition(var_311_cvector);
		GetPFPosition(var_312_cvector);
		var_313_cvector = var_311_cvector - var_312_cvector;
		var_314_float = var_313_cvector | var_313_cvector;
		@@@var_0_object:GetAttackDistance(var_315_float);
		var_315_float = var_315_float + (int)50;
		var_321_float = var_315_float * var_315_float;
		var_305_bool = var_314_float <= var_321_float;
		return 10;
	}
	var_305_bool = 0;
	return 10;
}


func_1716(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsPlayerActor(var_12_object, var_14_bool);
	var_15_bool = var_14_bool;
	if(var_15_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_310(var_0_object, var_3_int, var_5_float, var_64_object, var_65_bool, var_66_float, var_139_bool, var_231_bool)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_float = 0; var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_bool = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_float = 0;
	func_539(var_86_cvector, var_87_bool, var_88_float);
	var_5_float = 0;
	var_113_bool = IsFuncExist(var_64_object, "@GetAttackDistance", (int)1);
	if(var_113_bool != 0) {
		@@var_64_object:GetAttackDistance(var_78_float);
		var_78_float = var_78_float + (int)50;
	} else {
							var_66_float = var_78_float;
	}
	var_116_bool = var_78_float >= (int)150;
	if(var_116_bool != 0) {
		var_78_float = 150;
	}
	var_3_int = false;
	var_0_object = var_64_object;
	IsPlayerActor(var_0_object, var_81_bool);
	var_117_bool = var_81_bool;
	if(var_117_bool != 0) {
		PlayGlobalMusic("attack");
		var_119_object = Obj();
		func_1620(var_119_object);
		SendPlayerEnemy(var_64_object, var_119_object);
	}
	var_120_bool = var_65_bool;
	if(var_120_bool != 0) {
		var_82_bool = 0;
	} else {
						var_82_bool = 1;

	}
	var_83_float = (float)400.0 + var_78_float;
	
Label_350:
	var_122_bool = 0;
	var_122_bool = 0;
	var_123_bool = 0; var_124_object = Obj();
	var_124_object = var_0_object;
	func_1402(var_123_bool, var_124_object);
	if(var_123_bool != 0) {
		var_125_bool = var_3_int == 0; //@nz
		if(var_125_bool != 0) {
			var_122_bool = 1;
		}
	}
	if(var_122_bool != 0) {
		func_952(var_88_float);
		@@@var_0_object:GetPFPosition(var_79_cvector);
		GetPFPosition(var_80_cvector);
		var_84_cvector = var_79_cvector - var_80_cvector;
		var_85_float = var_84_cvector | var_84_cvector;
		var_131_float = var_83_float * var_83_float;
		var_132_bool = var_85_float >= var_131_float;
		if(var_132_bool != 0) {
			var_133_bool = 0; var_134_object = Obj(); var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_bool = 0;
			var_134_object = var_0_object;
			var_78_float = var_135_float;
			TaskCall(3);
			func_972(var_141_bool, var_133_bool, var_134_object, var_135_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_216_bool = var_139_bool == 0; //@nz
			if(var_216_bool != 0) {
			} else {
				var_82_bool = 0;
		} else {
				var_222_float = var_66_float * var_66_float;
				var_223_bool = var_85_float >= var_222_float;
				if(var_223_bool != 0) {
					@@@var_0_object:GetPFPosition(var_86_cvector);
					CanReachByPF(var_87_bool, var_86_cvector);
					var_224_bool = var_87_bool == 0; //@nz
					if(var_224_bool != 0) {
						var_225_bool = 0; var_226_object = Obj(); var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_bool = 0;
						var_226_object = var_0_object;
						var_78_float = var_227_float;
						TaskCall(3);
						func_972(var_233_bool, var_225_bool, var_226_object, var_227_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_234_bool = var_231_bool == 0; //@nz
						if(var_234_bool != 0) {
							goto Label_522;
						}
						var_82_bool = 0;
						goto Label_350;
					}
					var_235_bool = var_82_bool == 0; //@nz
					if(var_235_bool != 0) {
						var_236_object = Obj();
						var_236_object = var_0_object;
						func_1552(var_236_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_952(var_88_float);
						StopAsync();
						var_82_bool = 1;
						var_247_bool = 0; var_248_object = Obj();
						var_248_object = var_0_object;
						func_1402(var_247_bool, var_248_object);
						var_249_bool = var_247_bool == 0; //@nz
						if(var_249_bool != 0) {
							goto Label_522;
						}
					}
					rand(var_88_float);
					var_250_bool = 0;
					var_252_bool = var_88_float < (float)0.25;
					if(var_252_bool != 1) {
						var_253_bool = 0;
						func_909((bool)1, var_253_bool);
						if(var_253_bool != 1) {
							var_250_bool = 0;
						}
					}
					if(var_250_bool != 0) {
						Face(var_0_object);
						func_959();
						PlayAnimation("all", "attack_stay");
						var_290_bool = 0; var_291_float = 0;
						var_66_float = var_291_float;
						func_777(var_88_float, var_290_bool, var_291_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_952(var_88_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_512_bool = 0;
						func_909(var_88_float, var_512_bool);
						var_513_bool = var_512_bool == 0; //@nz
						if(var_513_bool == 0) goto Label_512;
						var_514_bool = 0; var_515_object = Obj();
						var_515_object = var_0_object;
						func_1402(var_514_bool, var_515_object);
						var_516_bool = var_514_bool == 0; //@nz
						if(var_516_bool != 0) {
							goto Label_522;
						}
						@@@var_0_object:GetPFPosition(var_79_cvector);
						GetPFPosition(var_80_cvector);
						var_84_cvector = var_79_cvector - var_80_cvector;
						var_85_float = var_84_cvector | var_84_cvector;
						var_517_float = var_66_float * var_66_float;
						var_518_bool = var_85_float < var_517_float;
						if(var_518_bool == 0) goto Label_512;
						var_519_bool = 0; var_520_float = 0;
						var_66_float = var_520_float;
						func_613(var_87_bool, var_88_float, var_519_bool, var_520_float);
						var_521_bool = var_519_bool == 0; //@nz
						if(var_521_bool == 0) goto Label_512;
						goto Label_522;
				}
					var_522_bool = 0; var_523_float = 0;
					var_66_float = var_523_float;
					func_613(var_87_bool, var_88_float, var_522_bool, var_523_float);
					var_524_bool = var_522_bool == 0; //@nz
					if(var_524_bool != 0) {
						goto Label_522;
					}
					var_82_bool = 1;

				}
			Label_512:
				goto Label_521;
		}
		Label_521:
			goto Label_350;

		}
	}
Label_522:
	WaitForAnimEnd();
	var_217_int = var_3_int;
	if(var_217_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_220_bool = var_81_bool;
	if(var_220_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1077(var_0_object, var_1_object, var_162_bool, var_163_object, var_164_float, var_165_float, var_166_bool, var_167_bool)
{
	var_168_bool = 0; var_169_bool = 0; var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_object = Obj(); var_176_bool = 0; var_177_bool = 0; var_178_object = Obj(); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_float = 0; var_183_object = Obj();
	var_0_object = false;
	var_1_object = var_163_object;
	var_167_bool = var_177_bool;
	
Label_1081:
	var_184_bool = 0; var_185_object = Obj();
	var_163_object = var_185_object;
	func_1217(var_184_bool, var_185_object);
	var_188_bool = var_184_bool == 0; //@nz
	if(var_188_bool != 0) {
		var_162_bool = 0;
		return 16;
	}
	@@var_163_object:GetPosition(var_179_cvector);
	GetPosition(var_180_cvector);
	var_181_cvector = var_179_cvector - var_180_cvector;
	var_182_float = var_181_cvector | var_181_cvector;
	var_189_bool = 0;
	var_189_bool = 0;
	var_191_bool = var_165_float > (int)0;
	if(var_191_bool != 0) {
		var_192_float = var_165_float * var_165_float;
		var_193_bool = var_182_float > var_192_float;
		if(var_193_bool != 0) {
			var_189_bool = 1;
		}
	}
	if(var_189_bool != 0) {
		Stop();
		var_162_bool = 0;
		return 16;
	}
	var_194_float = var_164_float * var_164_float;
	var_195_bool = var_182_float > var_194_float;
	if(var_195_bool != 0) {
		@@var_163_object:GetPFPosition(var_179_cvector);
		FindPathTo(var_183_object, var_179_cvector);
		var_196_bool = var_183_object != 0; //@nn
		if(var_196_bool != 0) {
			var_183_object = var_178_object;
			var_183_object = 0;
		}
		var_197_bool = var_178_object != 0; //@nn
		if(var_197_bool != 0) {
			var_198_bool = var_177_bool;
			if(var_198_bool == 0) goto Label_1130;
			var_177_bool = 0;
			RotatePath(var_178_object, var_176_bool);
			var_199_bool = var_176_bool == 0; //@nz
			if(var_199_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_202_string = "";
				func_1224(var_202_string);
				var_203_string = "";
				func_1226(var_203_string);
				FollowPath(var_178_object, var_166_bool, var_176_bool, var_202_string, var_203_string);
				var_204_bool = var_176_bool == 0; //@nz
				if(var_204_bool != 0) {
					var_205_object = var_0_object;
					if(var_205_object != 0) {
						var_178_object = 0;
						goto Label_1177;
					EMIT "GOTO 0x47e";
					}
				} else {
					var_178_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_176_bool);
					var_208_bool = var_176_bool == 0; //@nz
					if(var_208_bool != 0) {
						var_209_object = var_0_object;
						if(var_209_object != 0) {
							var_178_object = 0;
							goto Label_1177;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1177;
	}
			var_183_object = 0;
			goto Label_1175;

		Label_1175:
			var_178_object = 0;

		}
		goto Label_1081;
	}
Label_1177:
	var_162_bool = !var_0_object;
	return 16;
	
}


func_952(var_0_object)
{
	var_126_object = Obj();
	var_126_object = var_0_object;
	func_1716(var_126_object);
	return 0;
}


func_957(var_467_int)
{
	var_467_int = 0;
	return 0;
}


func_1725()
{
	var_363_object = Obj(); var_364_object = Obj();
	GetScene(var_364_object);
	var_366_object = Obj();
	func_1620(var_366_object);
	BroadcastMessage("battle", var_366_object, var_364_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_959()
{
	var_259_string = "";
	func_1579("attack_stay");
	return 0;
}


func_574(var_0_object, var_388_float, var_389_int)
{
	var_390_object = Obj(); var_391_float = 0; var_392_float = 0; var_393_object = Obj(); var_394_float = 0; var_395_float = 0;
	var_397_float = var_388_float * (float)0.8999999761581421;
	GetVictim(var_397_float, var_393_object);
	ReportAttack(var_0_object);
	var_398_bool = var_393_object == var_0_object;
	if(var_398_bool != 0) {
		var_399_float = 0; var_400_object = Obj(); var_401_int = 0;
		var_393_object = var_400_object;
		var_389_int = var_401_int;
		func_304(var_401_int);
		var_399_float = var_394_float;
		var_402_float = 0; var_403_object = Obj(); var_404_float = 0; var_405_int = 0;
		var_393_object = var_403_object;
		var_394_float = var_404_float;
		var_406_int = 0; var_407_object = Obj(); var_408_int = 0;
		var_393_object = var_407_object;
		var_389_int = var_408_int;
		func_307(var_408_int);
		var_406_int = var_405_int;
		func_1288(var_402_float, var_403_object, var_404_float, var_405_int);
		var_402_float = var_395_float;
		var_467_int = 0;
		func_957(var_467_int);
		ReportHit(var_0_object, var_467_int, var_395_float, var_394_float);
		var_468_object = Obj(); var_469_float = 0;
		var_393_object = var_468_object;
		var_395_float = var_469_float;
		func_964();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1217(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_1402(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
	return 0;
}


func_1470(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_object = var_13_object;
	if(var_36_object != 0) {
		var_38_bool = var_14_int != (int)4;
		if(var_38_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_40_bool = var_14_int != (int)5;
		if(var_40_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
		var_43_cvector = CVector(0,0,0); var_44_object = Obj();
		var_13_object = var_44_object;
		func_1242(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1626(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1499:
		var_55_int = "hit" + var_27_int;
		GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector);
		var_56_bool = var_28_bool == 0; //@nz
		if(var_56_bool != 0) {
		} else {
			var_104_int = var_30_cvector | var_25_cvector;
			var_106_bool = var_104_int >= (float)0.7071067690849304;
			if(var_106_bool != 0) {
				@@var_26_object:add(var_29_cvector);
			}
			var_27_int = var_27_int + (int)1;
			goto Label_1499;
		}
		@@var_26_object:size(var_31_int);
		var_57_int = var_31_int;
		if(var_57_int != 0) {
			irand(var_32_int, var_31_int);
			@@var_26_object:get(var_33_cvector, var_32_int);
			var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
			var_13_object = var_58_object;
			var_14_int = var_59_int;
			var_15_float = var_60_float;
			var_33_cvector = var_61_cvector;
			var_62_cvector = -var_25_cvector;
			func_1538(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1426(var_103_object);
	return 18;
	
}


func_964()
{
	return 0;
}


func_966(var_492_bool)
{
	var_492_bool = 1;
	return 0;
}


func_1736(var_34_string, var_35_int)
{
	var_36_string = ""; var_37_string = "";
	var_38_int = var_35_int;
	if(var_38_int != 0) {
		"idle" = "idle" + var_35_int;
	}
	var_37_string = var_34_string;
	return 2;
}


func_968(var_384_int)
{
	var_384_int = 1;
	return 0;
}


func_970(var_379_float)
{
	var_379_float = 0.5;
	return 0;
}


func_1224(var_202_string)
{
	var_202_string = "walk";
	return 0;
}


func_972(var_2_int, var_133_bool, var_134_object, var_135_float, var_136_float, var_137_bool, var_138_bool)
{
	var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; var_145_bool = 0;
	var_146_object = Obj();
	var_134_object = var_146_object;
	func_1716(var_146_object);
	SetTimer((int)1, (int)5);
	CanSee(var_144_bool, var_134_object);
	var_149_bool = var_144_bool;
	if(var_149_bool != 0) {
		var_2_int = true;
		var_150_object = Obj();
		var_134_object = var_150_object;
		func_1568(var_150_object);
	} else {
		var_2_int = false;
	}
	var_157_bool = 0; var_158_object = Obj();
	var_134_object = var_158_object;
	func_1249(var_157_bool, var_158_object);
	if(var_157_bool != 0) {
		var_161_object = Obj();
		func_1620(var_161_object);
		SendPlayerEnemy(var_134_object, var_161_object);
	}
	var_162_bool = 0; var_163_object = Obj(); var_164_float = 0; var_165_float = 0; var_166_bool = 0; var_167_bool = 0;
	var_134_object = var_163_object;
	var_135_float = var_164_float;
	var_136_float = var_165_float;
	var_137_bool = var_166_bool;
	var_138_bool = var_167_bool;
	func_1077(var_144_bool, var_145_bool, var_162_bool, var_163_object, var_164_float, var_165_float, var_166_bool, var_167_bool);
	var_162_bool = var_145_bool;
	var_213_int = var_2_int;
	if(var_213_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_145_bool = var_133_bool;
	return 4;
	
}


func_1226(var_203_string)
{
	var_203_string = "run";
	return 0;
}


func_1228(var_430_string, var_431_int)
{
	var_433_bool = var_431_int == (int)2;
	if(var_433_bool != 0) {
		var_430_string = "fire";
		return 0;
	EMIT "GOTO 0x4d8";
	}
	var_435_bool = var_431_int == (int)1;
	if(var_435_bool != 0) {
		var_430_string = "bullet";
		return 0;
	}
	var_430_string = "phys";
	return 0;
}


func_1743(var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0;
	var_31_int = 0;
	
Label_1745:
	var_34_string = ""; var_35_int = 0;
	var_31_int = var_35_int;
	func_1736(var_34_string, var_35_int);
	HasAnimation(var_32_bool, "all", var_34_string);
	var_39_bool = var_32_bool == 0; //@nz
	if(var_39_bool != 0) {
	} else {
		var_31_int = var_31_int + (int)1;
		goto Label_1745;
	}
	var_31_int = var_28_int;
	return 4;
	
}


func_848(var_303_bool)
{
	var_304_bool = 0;
	var_304_bool = 0;
	var_305_bool = 0;
	func_820(var_304_bool, var_305_bool);
	if(var_305_bool != 0) {
		var_322_bool = 0;
		func_864(var_303_bool, var_304_bool, var_322_bool);
		if(var_322_bool != 0) {
			var_304_bool = 1;
		}
	}
	if(var_304_bool != 0) {
		var_303_bool = 1;
		return 0;
	}
	var_303_bool = 0;
	return 0;
}


func_1361(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	@@var_38_object:IsDead(var_40_bool);
	var_40_bool = var_37_bool;
	return 2;
}


func_1620(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj();
	self(var_56_object);
	var_56_object = var_54_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1366(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	var_32_bool = var_27_object == 0; //@ne
	if(var_32_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	var_33_bool = 0;
	var_33_bool = 0;
	var_36_bool = IsFuncExist(var_27_object, "IsDead", (int)1);
	if(var_36_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_27_object = var_38_object;
		func_1361(var_37_bool, var_38_object);
		if(var_37_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	GetScene(var_30_object);
	var_41_bool = var_30_object == 0; //@ne
	if(var_41_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	@@var_27_object:GetScene(var_31_object);
	var_42_bool = var_30_object != var_31_object;
	if(var_42_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	var_26_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1242(var_43_cvector, var_44_object)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_44_object:GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
	return 4;
}


func_1626(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_50_float = sqrt(var_51_int);
	var_52_float = 9.999999974752427e-07;
	var_53_bool = var_50_float < var_52_float;
	if(var_53_bool != 0) {
		var_41_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_41_cvector = var_42_cvector / var_50_float;
	return 2;
}


func_864(var_0_object, var_4_bool, var_322_bool)
{
	var_323_object = Obj(); var_324_bool = 0; var_325_float = 0; var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0);
	GetScene(var_328_object);
	var_329_bool = 0;
	
Label_868:
	var_333_cvector = CVector(0,0,0); var_334_object = Obj();
	var_334_object = var_0_object;
	func_1242(var_333_cvector, var_334_object);
	var_339_int = -var_333_cvector;
	FindDirLength(var_330_float, var_339_int, var_4_bool);
	var_340_bool = var_330_float < var_4_bool;
	if(var_340_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_331_cvector);
		GetPFPosition(var_332_cvector);
		WaitForAnimEnd();
		func_952(var_332_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_329_bool = 1;
		var_344_bool = 0;
		func_820(var_332_cvector, var_344_bool);
		var_345_bool = var_344_bool == 0; //@nz
		if(var_345_bool != 0) {
			goto Label_906;
		}
		goto Label_868;
	}
Label_906:
	var_329_bool = var_322_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1249(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
	return 2;
}


func_1760(var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	TaskCall(1);
	func_128(var_11_object);
	TaskReturn();
	return 0;
}


func_1636(var_440_float, var_441_float, var_442_float)
{
	var_445_bool = var_441_float < var_442_float;
	if(var_445_bool != 0) {
		var_441_float = var_440_float;
	} else {
		var_442_float = var_440_float;
	}
	return 0;
	
}


func_613(var_0_object, var_1_object, var_351_bool, var_352_float)
{
	var_353_int = 0; var_354_bool = 0; var_355_int = 0; var_356_string = ""; var_357_int = 0; var_358_bool = 0; var_359_int = 0; var_360_string = "";
	func_952(var_360_string);
	irand(var_357_int, var_1_object);
	var_357_int = var_357_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1725();
	var_369_int = "attack_begin" + var_357_int;
	PlayAnimation("all", var_369_int);
	WaitForAnimEnd();
	func_920(var_359_int, var_360_string);
	var_385_bool = 0; var_386_object = Obj();
	var_386_object = var_0_object;
	func_1402(var_385_bool, var_386_object);
	var_387_bool = var_385_bool == 0; //@nz
	if(var_387_bool != 0) {
		StopAsync();
		var_351_bool = 0;
		return 8;
	}
	var_388_float = 0; var_389_int = 0;
	var_352_float = var_388_float;
	var_357_int = var_389_int;
	func_574(var_360_string, var_388_float, var_389_int);
	var_472_int = "attack_middle" + var_357_int;
	HasAnimation(var_358_bool, "all", var_472_int);
	var_473_bool = var_358_bool;
	if(var_473_bool != 0) {
		func_1725();
		var_476_int = "attack_middle" + var_357_int;
		PlayAnimation("all", var_476_int);
		WaitForAnimEnd();
		func_952(var_360_string);
		var_477_bool = 0; var_478_object = Obj();
		var_478_object = var_0_object;
		func_1402(var_477_bool, var_478_object);
		var_479_bool = var_477_bool == 0; //@nz
		if(var_479_bool != 0) {
			StopAsync();
			var_351_bool = 0;
			return 8;
		}
		var_480_float = 0; var_481_int = 0;
		var_352_float = var_480_float;
		var_357_int = var_481_int;
		func_574(var_360_string, var_480_float, var_481_int);
		var_359_int = 1;

	Label_690:
		var_483_int = "attack_middle" + var_357_int;
		var_485_int = var_483_int + "_";
		var_360_string = var_485_int + var_359_int;
		HasAnimation(var_358_bool, "all", var_360_string);
		var_487_bool = var_358_bool == 0; //@nz
		if(var_487_bool != 0) {
		} else {
			func_1725();
			PlayAnimation("all", var_360_string);
			WaitForAnimEnd();
			func_952(var_360_string);
			var_503_bool = 0; var_504_object = Obj();
			var_504_object = var_0_object;
			func_1402(var_503_bool, var_504_object);
			var_505_bool = var_503_bool == 0; //@nz
			if(var_505_bool != 0) {
				StopAsync();
				var_351_bool = 0;
				var_506_float = 0; var_507_int = 0;
				var_352_float = var_506_float;
				var_357_int = var_507_int;
				func_574(var_360_string, var_506_float, var_507_int);
				var_359_int = var_359_int + (int)1;
				goto Label_690;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_491_int = "attack_end" + var_357_int;
	PlayAnimation("all", var_491_int);
	var_492_bool = 0;
	func_966(var_492_bool);
	if(var_492_bool != 0) {
		var_493_bool = 0; var_494_float = 0;
		func_750(var_493_bool, (float)0.75);
		StopAsync();
	}
	var_351_bool = 1;
	return 8;
	
}


func_1254(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0;
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", (int)2);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	@@var_36_object:HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
	return 2;
}


func_1643(var_45_float, var_46_float, var_47_float, var_48_float)
{
	var_49_bool = var_46_float < var_47_float;
	if(var_49_bool != 0) {
		var_47_float = var_45_float;
		return 0;
	}
	var_50_bool = var_46_float > var_48_float;
	if(var_50_bool != 0) {
		var_48_float = var_45_float;
		return 0;
	}
	var_46_float = var_45_float;
	return 0;
}


func_750(var_493_bool, var_494_float)
{
	var_495_float = 0; var_496_bool = 0; var_497_float = 0; var_498_bool = 0;
	rand(var_497_float);
	var_499_bool = var_497_float < var_494_float;
	if(var_499_bool != 0) {

	Label_755:
		IsAnimationPlaying(var_498_bool);
		var_500_bool = var_498_bool == 0; //@nz
		if(var_500_bool != 0) {
		} else {
			var_501_bool = 0;
			func_848(var_501_bool);
			if(var_501_bool != 0) {
				var_493_bool = 1;
				sync();
				goto Label_755;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_952(var_498_bool);
	}
	goto Label_775;
	
Label_775:
	var_493_bool = 0;
	return 4;
	
}


func_1266(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_28_object = var_36_object;
	var_29_string = var_37_string;
	func_1254(var_35_bool, var_36_object, var_37_string);
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	@@var_28_object:GetProperty(var_29_string, var_34_float);
	var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0;
	var_46_float = var_34_float + var_30_float;
	var_31_float = var_47_float;
	var_32_float = var_48_float;
	func_1643(var_45_float, var_46_float, var_47_float, var_48_float);
	@@var_28_object:SetProperty(var_29_string, var_45_float);
	var_27_bool = 1;
	return 2;
}


func_1654(var_16_bool, var_17_object, var_18_float)
{
	var_19_bool = var_17_object == 0; //@nz
	if(var_19_bool != 0) {
		var_16_bool = 0;
		return 0;
	}
	var_21_bool = var_18_float > (int)0;
	if(var_21_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_52_bool = var_18_float < (int)0;
		if(var_52_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1675;
		}
		var_16_bool = 0;
		return 0;
	}
Label_1675:
	var_23_float = 0;
	var_18_float = var_23_float;
	func_1706(var_23_float);
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0;
	var_17_object = var_28_object;
	var_18_float = var_30_float;
	func_1266(var_27_bool, var_28_object, "reputation", var_30_float, (float)0, (float)1);
	var_16_bool = 1;
	return 0;
	
}


func_121(var_53_bool)
{
	var_53_bool = 1;
	return 0;
}


func_1402(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_23_object = var_27_object;
	func_1366(var_26_bool, var_27_object);
	var_43_bool = var_26_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_23_object = var_45_object;
	func_1254(var_44_bool, var_45_object, "noaccess");
	var_53_bool = var_44_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	@@var_23_object:GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == (int)0;
	return 2;
}


func_123()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


