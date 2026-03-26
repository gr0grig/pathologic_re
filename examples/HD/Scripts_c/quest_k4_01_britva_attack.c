// @IMPORTS: FindActor/2,RemoveActor/1,Hold/0,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1
// @STRINGS: W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,int,int,bool,float,int params=0
// @EVENT_6: op=0x16 vars=
// @TASK_1: vars=bool,object,bool params=6
// @EVENT_6: op=0x2b4 vars=
// @EVENT_7: op=0x2ed vars=int
// @EVENT_1: op=0x308 vars=object
// @EVENT_2: op=0x317 vars=object
// @EVENT_10: op=0x39d vars=object
// @EVENT_41: op=0x3a8 vars=object
// @TASK_2: vars= params=1
// @EVENT_6: op=0x3bc vars=
// @EVENT_22: op=0x442 vars=object,int,float,float
// @EVENT_16: op=0x444 vars=object,string
// @EVENT_41: op=0x446 vars=object
// @STANDALONE_EVENT_22: op=0x651 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x659 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x663 vars=object,string
// @STANDALONE_EVENT_41: op=0x670 vars=object
// @PE: 0x0,0x10,0x13,0x2ac,0x2ed,0x308,0x317,0x38b,0x39d,0x3a8,0x3b1,0x3c4,0x428,0x442,0x444,0x446,0x448,0x5db,0x5e2,0x5ed,0x63f,0x651,0x659,0x670

task_0_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1483(var_9_object);
	RemoveActor(var_9_object);
	Hold();
	return 0;
}


task_1_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1483(var_9_object);
	RemoveActor(var_9_object);
	Hold();
	return 0;
}


task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_11_bool = var_9_int == (int)1;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_1_int;
		func_1579(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_907(var_8_bool, var_9_int, var_17_int);
	}
	return 0;
	
}


task_1_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
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
		func_1431(var_13_object);
	}
	return 0;
}


task_1_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
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


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_763(var_9_object);
	var_9_object = Obj();
	func_1648();
	return 0;
}


task_2_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1483(var_9_object);
	RemoveActor(var_9_object);
	Hold();
	return 0;
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1338(var_13_object, var_14_int, var_15_float);
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
	func_1406(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1599(var_10_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	func_4();
	return 0;
}


func_640(var_2_int, var_5_int)
{
	var_352_float = 0; var_353_int = 0; var_354_float = 0; var_355_int = 0;
	var_356_bool = var_2_int == 0; //@nz
	if(var_356_bool != 0) {
		return 4;
	}
	var_357_int = var_5_int;
	if(var_357_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_360_bool = var_5_int > (int)0;
		if(var_360_bool != 0) {
			return 4;
		}
	}
	rand(var_354_float);
	var_361_float = 0;
	func_690(var_361_float);
	var_362_bool = var_354_float < var_361_float;
	if(var_362_bool != 0) {
		irand(var_355_int, var_2_int);
		var_355_int = var_355_int + (int)1;
		var_365_int = "attack" + var_355_int;
		Speak(var_365_int);
		var_366_int = 0;
		func_688(var_366_int);
		var_5_int = var_366_int;
	}
	return 4;
}


func_259(var_1_int, var_2_int, var_4_float)
{
	var_37_bool = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_261:
	var_46_int = var_1_int + (int)1;
	var_47_int = "attack_begin" + var_46_int;
	HasAnimation(var_40_bool, "all", var_47_int);
	var_48_bool = var_40_bool == 0; //@nz
	if(var_48_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_261;
	}
	var_2_int = 0;
	
Label_275:
	var_51_int = var_2_int + (int)1;
	var_52_int = "attack" + var_51_int;
	IsExisting3DSound(var_41_bool, var_52_int);
	var_53_bool = var_41_bool == 0; //@nz
	if(var_53_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_275;

	}
	GetAnimationOffset(var_42_cvector, "all", "bjump");
	var_56_float = GetByIndex(var_42_cvector, 2);
	var_4_float = -var_56_float;
	return 6;
	
}


func_1156(var_384_float, var_385_object, var_386_float, var_387_int)
{
	var_391_int = 0; var_392_string = ""; var_393_int = 0; var_394_float = 0; var_395_float = 0; var_396_float = 0; var_397_int = 0; var_398_string = ""; var_399_int = 0; var_400_float = 0; var_401_float = 0; var_402_float = 0;
	var_403_bool = 0; var_404_object = Obj(); var_405_string = "";
	var_385_object = var_404_object;
	func_1122(var_403_bool, var_404_object, "health");
	var_406_bool = var_403_bool == 0; //@nz
	if(var_406_bool != 0) {
		var_384_float = 0.0;
		return 12;
	}
	var_407_bool = 0; var_408_object = Obj(); var_409_string = "";
	var_385_object = var_408_object;
	func_1122(var_407_bool, var_408_object, "armor");
	var_410_bool = var_407_bool == 0; //@nz
	if(var_410_bool != 0) {
		var_397_int = 0;
	} else {
			@@var_385_object:GetProperty("armor", var_397_int);
	}
	var_412_string = ""; var_413_int = 0;
	var_387_int = var_413_int;
	func_1096(var_412_string, var_413_int);
	var_398_string = "armor_" + var_412_string;
	var_418_bool = 0; var_419_object = Obj(); var_420_string = "";
	var_385_object = var_419_object;
	var_398_string = var_420_string;
	func_1122(var_418_bool, var_419_object, var_420_string);
	var_421_bool = var_418_bool == 0; //@nz
	if(var_421_bool != 0) {
		var_399_int = 0;
	} else {
		@@var_385_object:GetProperty(var_398_string, var_399_int);

	}
	var_422_float = 0; var_423_float = 0; var_424_float = 0;
	var_425_int = var_397_int + var_399_int;
	var_423_float = var_425_int / (float)100.0;
	func_1499(var_422_float, var_423_float, (float)1);
	var_422_float = var_400_float;
	@@var_385_object:GetProperty("health", var_401_float);
	var_430_int = (int)1 - var_400_float;
	var_402_float = var_386_float * var_430_int;
	var_432_float = 0; var_433_float = 0; var_434_float = 0; var_435_float = 0;
	var_433_float = var_401_float - var_402_float;
	func_1506(var_432_float, var_433_float, (float)0, (float)1);
	@@var_385_object:SetProperty("health", var_432_float);
	var_438_bool = 0; var_439_object = Obj();
	var_385_object = var_439_object;
	func_1117(var_438_bool, var_439_object);
	if(var_438_bool != 0) {
		var_440_float = 0;
		var_440_float = -var_402_float;
		func_1552(var_440_float);
	}
	var_402_float = var_384_float;
	return 12;
	
}


func_4()
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, "player");
	var_12_object = Obj(); var_13_bool = 0; var_14_float = 0;
	var_10_object = var_12_object;
	func_30(var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_object, var_12_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_907(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_945(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1420(var_218_object)
{
	var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0);
	@@var_218_object:GetPosition(var_222_cvector);
	GetPosition(var_223_cvector);
	var_224_cvector = var_222_cvector - var_223_cvector;
	var_225_float = GetByIndex(var_224_cvector, 0);
	var_226_float = GetByIndex(var_224_cvector, 2);
	RotateAsync(var_225_float, var_226_float);
	return 6;
}


func_1294(var_26_object)
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


func_16(var_381_float)
{
	var_381_float = 0.10000000149011612;
	return 0;
}


func_1552(var_440_float)
{
	var_441_object = Obj(); var_442_object = Obj();
	CreateFloatVector(var_442_object);
	@@var_442_object:add(var_440_float);
	var_444_bool = var_440_float < (int)0;
	if(var_444_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_442_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_19(var_388_int)
{
	var_388_int = 1;
	return 0;
}


func_1431(var_132_object)
{
	var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_float = 0; var_136_cvector = CVector(0,0,0);
	@@var_132_object:GetEyesHeight(var_135_float);
	var_136_cvector = CVector(0.0, 0.0, 0.0);
	var_137_float = GetByIndex(var_136_cvector, 1);
	var_135_float = var_137_float;
	SetByIndex(var_136_cvector, 1) = var_137_float;
	LookAsync(var_132_object, "head", var_136_cvector);
	return 4;
}


func_540(var_0_object, var_287_bool)
{
	var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_float = 0; var_292_float = 0; var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_float = 0;
	var_298_bool = 0; var_299_object = Obj();
	var_299_object = var_0_object;
	func_1270(var_298_bool, var_299_object);
	var_300_bool = var_298_bool == 0; //@nz
	if(var_300_bool != 0) {
		var_287_bool = 0;
		return 10;
	}
	var_301_bool = 0;
	func_629(var_297_float, var_301_bool);
	if(var_301_bool != 0) {
		@@@var_0_object:GetPFPosition(var_293_cvector);
		GetPFPosition(var_294_cvector);
		var_295_cvector = var_293_cvector - var_294_cvector;
		var_296_float = var_295_cvector | var_295_cvector;
		@@@var_0_object:GetAttackDistance(var_297_float);
		var_297_float = var_297_float + (int)50;
		var_303_float = var_297_float * var_297_float;
		var_287_bool = var_296_float <= var_303_float;
		return 10;
	}
	var_287_bool = 0;
	return 10;
}


func_30(var_0_object, var_3_bool, var_5_int, var_12_object, var_13_bool, var_14_float, var_121_bool, var_213_bool)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_float = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0;
	func_259(var_34_cvector, var_35_bool, var_36_float);
	var_5_int = 0;
	var_61_bool = IsFuncExist(var_12_object, "@GetAttackDistance", (int)1);
	if(var_61_bool != 0) {
		@@var_12_object:GetAttackDistance(var_26_float);
		var_26_float = var_26_float + (int)50;
	} else {
							var_14_float = var_26_float;
	}
	var_64_bool = var_26_float >= (int)150;
	if(var_64_bool != 0) {
		var_26_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_12_object;
	IsPlayerActor(var_0_object, var_29_bool);
	var_65_bool = var_29_bool;
	if(var_65_bool != 0) {
		PlayGlobalMusic("attack");
		var_67_object = Obj();
		func_1483(var_67_object);
		SendPlayerEnemy(var_12_object, var_67_object);
	}
	var_70_bool = var_13_bool;
	if(var_70_bool != 0) {
		var_30_bool = 0;
	} else {
						var_30_bool = 1;

	}
	var_31_float = (float)400.0 + var_26_float;
	
Label_70:
	var_72_bool = 0;
	var_72_bool = 0;
	var_73_bool = 0; var_74_object = Obj();
	var_74_object = var_0_object;
	func_1270(var_73_bool, var_74_object);
	if(var_73_bool != 0) {
		var_107_bool = var_3_bool == 0; //@nz
		if(var_107_bool != 0) {
			var_72_bool = 1;
		}
	}
	if(var_72_bool != 0) {
		func_672(var_36_float);
		@@@var_0_object:GetPFPosition(var_27_cvector);
		GetPFPosition(var_28_cvector);
		var_32_cvector = var_27_cvector - var_28_cvector;
		var_33_float = var_32_cvector | var_32_cvector;
		var_113_float = var_31_float * var_31_float;
		var_114_bool = var_33_float >= var_113_float;
		if(var_114_bool != 0) {
			var_115_bool = 0; var_116_object = Obj(); var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_bool = 0;
			var_116_object = var_0_object;
			var_26_float = var_117_float;
			TaskCall(1);
			func_700(var_123_bool, var_115_bool, var_116_object, var_117_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_198_bool = var_121_bool == 0; //@nz
			if(var_198_bool != 0) {
			} else {
				var_30_bool = 0;
		} else {
				var_204_float = var_14_float * var_14_float;
				var_205_bool = var_33_float >= var_204_float;
				if(var_205_bool != 0) {
					@@@var_0_object:GetPFPosition(var_34_cvector);
					CanReachByPF(var_35_bool, var_34_cvector);
					var_206_bool = var_35_bool == 0; //@nz
					if(var_206_bool != 0) {
						var_207_bool = 0; var_208_object = Obj(); var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_bool = 0;
						var_208_object = var_0_object;
						var_26_float = var_209_float;
						TaskCall(1);
						func_700(var_215_bool, var_207_bool, var_208_object, var_209_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_216_bool = var_213_bool == 0; //@nz
						if(var_216_bool != 0) {
							goto Label_242;
						}
						var_30_bool = 0;
						goto Label_70;
					}
					var_217_bool = var_30_bool == 0; //@nz
					if(var_217_bool != 0) {
						var_218_object = Obj();
						var_218_object = var_0_object;
						func_1420(var_218_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_672(var_36_float);
						StopAsync();
						var_30_bool = 1;
						var_229_bool = 0; var_230_object = Obj();
						var_230_object = var_0_object;
						func_1270(var_229_bool, var_230_object);
						var_231_bool = var_229_bool == 0; //@nz
						if(var_231_bool != 0) {
							goto Label_242;
						}
					}
					rand(var_36_float);
					var_232_bool = 0;
					var_234_bool = var_36_float < (float)0.25;
					if(var_234_bool != 1) {
						var_235_bool = 0;
						func_629((bool)1, var_235_bool);
						if(var_235_bool != 1) {
							var_232_bool = 0;
						}
					}
					if(var_232_bool != 0) {
						Face(var_0_object);
						func_679();
						PlayAnimation("all", "attack_stay");
						var_272_bool = 0; var_273_float = 0;
						var_14_float = var_273_float;
						func_497(var_36_float, var_272_bool, var_273_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_672(var_36_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_494_bool = 0;
						func_629(var_36_float, var_494_bool);
						var_495_bool = var_494_bool == 0; //@nz
						if(var_495_bool == 0) goto Label_232;
						var_496_bool = 0; var_497_object = Obj();
						var_497_object = var_0_object;
						func_1270(var_496_bool, var_497_object);
						var_498_bool = var_496_bool == 0; //@nz
						if(var_498_bool != 0) {
							goto Label_242;
						}
						@@@var_0_object:GetPFPosition(var_27_cvector);
						GetPFPosition(var_28_cvector);
						var_32_cvector = var_27_cvector - var_28_cvector;
						var_33_float = var_32_cvector | var_32_cvector;
						var_499_float = var_14_float * var_14_float;
						var_500_bool = var_33_float < var_499_float;
						if(var_500_bool == 0) goto Label_232;
						var_501_bool = 0; var_502_float = 0;
						var_14_float = var_502_float;
						func_333(var_35_bool, var_36_float, var_501_bool, var_502_float);
						var_503_bool = var_501_bool == 0; //@nz
						if(var_503_bool == 0) goto Label_232;
						goto Label_242;
				}
					var_504_bool = 0; var_505_float = 0;
					var_14_float = var_505_float;
					func_333(var_35_bool, var_36_float, var_504_bool, var_505_float);
					var_506_bool = var_504_bool == 0; //@nz
					if(var_506_bool != 0) {
						goto Label_242;
					}
					var_30_bool = 1;

				}
			Label_232:
				goto Label_241;
		}
		Label_241:
			goto Label_70;

		}
	}
Label_242:
	WaitForAnimEnd();
	var_199_bool = var_3_bool;
	if(var_199_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_202_bool = var_29_bool;
	if(var_202_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_672(var_0_object)
{
	var_108_object = Obj();
	var_108_object = var_0_object;
	func_1579(var_108_object);
	return 0;
}


func_929(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1442(var_241_string)
{
	var_242_bool = 0; var_243_int = 0; var_244_bool = 0; var_245_int = 0; var_246_bool = 0; var_247_float = 0; var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_bool = 0; var_251_int = 0; var_252_bool = 0; var_253_int = 0; var_254_bool = 0; var_255_float = 0; var_256_cvector = CVector(0,0,0); var_257_cvector = CVector(0,0,0);
	IsExisting3DSound(var_250_bool, var_241_string);
	var_258_bool = var_250_bool == 0; //@nz
	if(var_258_bool != 0) {
		var_251_int = 0;

	Label_1448:
		var_260_int = var_251_int + (int)1;
		var_261_int = var_241_string + var_260_int;
		IsExisting3DSound(var_252_bool, var_261_int);
		var_262_bool = var_252_bool == 0; //@nz
		if(var_262_bool != 0) {
		} else {
			var_251_int = var_251_int + (int)1;
			goto Label_1448;
		}
		var_263_bool = var_251_int == 0; //@nz
		if(var_263_bool != 0) {
			return 16;
		}
		irand(var_253_int, var_251_int);
		var_265_int = var_253_int + (int)1;
		var_241_string = var_241_string + var_265_int;
	}
	Is3DSoundLoaded(var_254_bool, var_241_string);
	var_266_bool = var_254_bool;
	if(var_266_bool != 0) {
		GetEyesHeight(var_255_float);
		GetDirection(var_256_cvector);
		var_257_cvector = var_256_cvector * (int)50;
		var_268_float = GetByIndex(var_257_cvector, 1);
		var_268_float = var_268_float + var_255_float;
		SetByIndex(var_257_cvector, 1) = var_268_float;
		PlayGlobalSound(var_241_string, var_257_cvector);
	}
	return 16;
	
}


func_1569(var_22_float)
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateFloatVector(var_24_object);
	@@var_24_object:add(var_22_float);
	SendWorldWndMessage((int)16, var_24_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_677(var_449_int)
{
	var_449_int = 0;
	return 0;
}


func_294(var_0_object, var_370_float, var_371_int)
{
	var_372_object = Obj(); var_373_float = 0; var_374_float = 0; var_375_object = Obj(); var_376_float = 0; var_377_float = 0;
	var_379_float = var_370_float * (float)0.8999999761581421;
	GetVictim(var_379_float, var_375_object);
	ReportAttack(var_0_object);
	var_380_bool = var_375_object == var_0_object;
	if(var_380_bool != 0) {
		var_381_float = 0; var_382_object = Obj(); var_383_int = 0;
		var_375_object = var_382_object;
		var_371_int = var_383_int;
		func_16(var_383_int);
		var_381_float = var_376_float;
		var_384_float = 0; var_385_object = Obj(); var_386_float = 0; var_387_int = 0;
		var_375_object = var_385_object;
		var_376_float = var_386_float;
		var_388_int = 0; var_389_object = Obj(); var_390_int = 0;
		var_375_object = var_389_object;
		var_371_int = var_390_int;
		func_19(var_390_int);
		var_388_int = var_387_int;
		func_1156(var_384_float, var_385_object, var_386_float, var_387_int);
		var_384_float = var_377_float;
		var_449_int = 0;
		func_677(var_449_int);
		ReportHit(var_0_object, var_449_int, var_377_float, var_376_float);
		var_450_object = Obj(); var_451_float = 0;
		var_375_object = var_450_object;
		var_377_float = var_451_float;
		func_684();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_679()
{
	var_241_string = "";
	func_1442("attack_stay");
	return 0;
}


func_805(var_0_object, var_1_int, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool)
{
	var_150_bool = 0; var_151_bool = 0; var_152_object = Obj(); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0); var_156_float = 0; var_157_object = Obj(); var_158_bool = 0; var_159_bool = 0; var_160_object = Obj(); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_float = 0; var_165_object = Obj();
	var_0_object = false;
	var_1_int = var_145_object;
	var_149_bool = var_159_bool;
	
Label_809:
	var_166_bool = 0; var_167_object = Obj();
	var_145_object = var_167_object;
	func_945(var_166_bool, var_167_object);
	var_170_bool = var_166_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_144_bool = 0;
		return 16;
	}
	@@var_145_object:GetPosition(var_161_cvector);
	GetPosition(var_162_cvector);
	var_163_cvector = var_161_cvector - var_162_cvector;
	var_164_float = var_163_cvector | var_163_cvector;
	var_171_bool = 0;
	var_171_bool = 0;
	var_173_bool = var_147_float > (int)0;
	if(var_173_bool != 0) {
		var_174_float = var_147_float * var_147_float;
		var_175_bool = var_164_float > var_174_float;
		if(var_175_bool != 0) {
			var_171_bool = 1;
		}
	}
	if(var_171_bool != 0) {
		Stop();
		var_144_bool = 0;
		return 16;
	}
	var_176_float = var_146_float * var_146_float;
	var_177_bool = var_164_float > var_176_float;
	if(var_177_bool != 0) {
		@@var_145_object:GetPFPosition(var_161_cvector);
		FindPathTo(var_165_object, var_161_cvector);
		var_178_bool = var_165_object != 0; //@nn
		if(var_178_bool != 0) {
			var_165_object = var_160_object;
			var_165_object = 0;
		}
		var_179_bool = var_160_object != 0; //@nn
		if(var_179_bool != 0) {
			var_180_bool = var_159_bool;
			if(var_180_bool == 0) goto Label_858;
			var_159_bool = 0;
			RotatePath(var_160_object, var_158_bool);
			var_181_bool = var_158_bool == 0; //@nz
			if(var_181_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_184_string = "";
				func_952(var_184_string);
				var_185_string = "";
				func_954(var_185_string);
				FollowPath(var_160_object, var_148_bool, var_158_bool, var_184_string, var_185_string);
				var_186_bool = var_158_bool == 0; //@nz
				if(var_186_bool != 0) {
					var_187_object = var_0_object;
					if(var_187_object != 0) {
						var_160_object = 0;
						goto Label_905;
					EMIT "GOTO 0x36e";
					}
				} else {
					var_160_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_158_bool);
					var_190_bool = var_158_bool == 0; //@nz
					if(var_190_bool != 0) {
						var_191_object = var_0_object;
						if(var_191_object != 0) {
							var_160_object = 0;
							goto Label_905;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_905;
	}
			var_165_object = 0;
			goto Label_903;

		Label_903:
			var_160_object = 0;

		}
		goto Label_809;
	}
Label_905:
	var_144_bool = !var_0_object;
	return 16;
	
}


func_1064(var_76_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_77_string = "";
	var_76_string = var_77_string;
	func_1442(var_77_string);
	PlayAnimation("all", var_76_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_76_string);
	RemoveEnvelope();
	return 0;
}


func_1579(var_108_object)
{
	var_109_bool = 0; var_110_bool = 0;
	IsPlayerActor(var_108_object, var_110_bool);
	var_111_bool = var_110_bool;
	if(var_111_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_684()
{
	return 0;
}


func_686(var_474_bool)
{
	var_474_bool = 1;
	return 0;
}


func_688(var_366_int)
{
	var_366_int = 1;
	return 0;
}


func_945(var_166_bool, var_167_object)
{
	var_168_bool = 0; var_169_object = Obj();
	var_167_object = var_169_object;
	func_1270(var_168_bool, var_169_object);
	var_168_bool = var_166_bool;
	return 0;
}


func_690(var_361_float)
{
	var_361_float = 0.5;
	return 0;
}


func_1588()
{
	var_345_object = Obj(); var_346_object = Obj();
	GetScene(var_346_object);
	var_348_object = Obj();
	func_1483(var_348_object);
	BroadcastMessage("battle", var_348_object, var_346_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_568(var_285_bool)
{
	var_286_bool = 0;
	var_286_bool = 0;
	var_287_bool = 0;
	func_540(var_286_bool, var_287_bool);
	if(var_287_bool != 0) {
		var_304_bool = 0;
		func_584(var_285_bool, var_286_bool, var_304_bool);
		if(var_304_bool != 0) {
			var_286_bool = 1;
		}
	}
	if(var_286_bool != 0) {
		var_285_bool = 1;
		return 0;
	}
	var_285_bool = 0;
	return 0;
}


func_952(var_184_string)
{
	var_184_string = "walk";
	return 0;
}


func_954(var_185_string)
{
	var_185_string = "run";
	return 0;
}


func_1338(var_13_object, var_14_int, var_15_float)
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
		func_1110(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1489(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1367:
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
			goto Label_1367;
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
			func_1406(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1294(var_103_object);
	return 18;
	
}


func_700(var_2_int, var_115_bool, var_116_object, var_117_float, var_118_float, var_119_bool, var_120_bool)
{
	var_124_bool = 0; var_125_bool = 0; var_126_bool = 0; var_127_bool = 0;
	var_128_object = Obj();
	var_116_object = var_128_object;
	func_1579(var_128_object);
	SetTimer((int)1, (int)5);
	CanSee(var_126_bool, var_116_object);
	var_131_bool = var_126_bool;
	if(var_131_bool != 0) {
		var_2_int = true;
		var_132_object = Obj();
		var_116_object = var_132_object;
		func_1431(var_132_object);
	} else {
		var_2_int = false;
	}
	var_139_bool = 0; var_140_object = Obj();
	var_116_object = var_140_object;
	func_1117(var_139_bool, var_140_object);
	if(var_139_bool != 0) {
		var_143_object = Obj();
		func_1483(var_143_object);
		SendPlayerEnemy(var_116_object, var_143_object);
	}
	var_144_bool = 0; var_145_object = Obj(); var_146_float = 0; var_147_float = 0; var_148_bool = 0; var_149_bool = 0;
	var_116_object = var_145_object;
	var_117_float = var_146_float;
	var_118_float = var_147_float;
	var_119_bool = var_148_bool;
	var_120_bool = var_149_bool;
	func_805(var_126_bool, var_127_bool, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool);
	var_144_bool = var_127_bool;
	var_195_int = var_2_int;
	if(var_195_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_127_bool = var_115_bool;
	return 4;
	
}


func_1599(var_10_object)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_object = var_12_object;
	func_1117(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		var_15_bool = 0; var_16_object = Obj(); var_17_float = 0;
		var_10_object = var_16_object;
		func_1517(var_15_bool, var_16_object, (float)0.019999999552965164);
	}
	var_53_object = Obj();
	var_10_object = var_53_object;
	TaskCall(2);
	func_964(var_53_object);
	TaskReturn();
	return 0;
}


func_964(var_53_object)
{
	var_54_object = Obj();
	var_53_object = var_54_object;
	func_973(var_54_object);
	
Label_969:
	Hold();
	goto Label_969;
}
EMIT "Return(); Pop(0)";


func_584(var_0_object, var_4_float, var_304_bool)
{
	var_305_object = Obj(); var_306_bool = 0; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_object = Obj(); var_311_bool = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0);
	GetScene(var_310_object);
	var_311_bool = 0;
	
Label_588:
	var_315_cvector = CVector(0,0,0); var_316_object = Obj();
	var_316_object = var_0_object;
	func_1110(var_315_cvector, var_316_object);
	var_321_int = -var_315_cvector;
	FindDirLength(var_312_float, var_321_int, var_4_float);
	var_322_bool = var_312_float < var_4_float;
	if(var_322_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_313_cvector);
		GetPFPosition(var_314_cvector);
		WaitForAnimEnd();
		func_672(var_314_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_311_bool = 1;
		var_326_bool = 0;
		func_540(var_314_cvector, var_326_bool);
		var_327_bool = var_326_bool == 0; //@nz
		if(var_327_bool != 0) {
			goto Label_626;
		}
		goto Label_588;
	}
Label_626:
	var_311_bool = var_304_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1096(var_412_string, var_413_int)
{
	var_415_bool = var_413_int == (int)2;
	if(var_415_bool != 0) {
		var_412_string = "fire";
		return 0;
	EMIT "GOTO 0x454";
	}
	var_417_bool = var_413_int == (int)1;
	if(var_417_bool != 0) {
		var_412_string = "bullet";
		return 0;
	}
	var_412_string = "phys";
	return 0;
}


func_1483(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj();
	self(var_69_object);
	var_69_object = var_67_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_333(var_0_object, var_1_int, var_333_bool, var_334_float)
{
	var_335_int = 0; var_336_bool = 0; var_337_int = 0; var_338_string = ""; var_339_int = 0; var_340_bool = 0; var_341_int = 0; var_342_string = "";
	func_672(var_342_string);
	irand(var_339_int, var_1_int);
	var_339_int = var_339_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1588();
	var_351_int = "attack_begin" + var_339_int;
	PlayAnimation("all", var_351_int);
	WaitForAnimEnd();
	func_640(var_341_int, var_342_string);
	var_367_bool = 0; var_368_object = Obj();
	var_368_object = var_0_object;
	func_1270(var_367_bool, var_368_object);
	var_369_bool = var_367_bool == 0; //@nz
	if(var_369_bool != 0) {
		StopAsync();
		var_333_bool = 0;
		return 8;
	}
	var_370_float = 0; var_371_int = 0;
	var_334_float = var_370_float;
	var_339_int = var_371_int;
	func_294(var_342_string, var_370_float, var_371_int);
	var_454_int = "attack_middle" + var_339_int;
	HasAnimation(var_340_bool, "all", var_454_int);
	var_455_bool = var_340_bool;
	if(var_455_bool != 0) {
		func_1588();
		var_458_int = "attack_middle" + var_339_int;
		PlayAnimation("all", var_458_int);
		WaitForAnimEnd();
		func_672(var_342_string);
		var_459_bool = 0; var_460_object = Obj();
		var_460_object = var_0_object;
		func_1270(var_459_bool, var_460_object);
		var_461_bool = var_459_bool == 0; //@nz
		if(var_461_bool != 0) {
			StopAsync();
			var_333_bool = 0;
			return 8;
		}
		var_462_float = 0; var_463_int = 0;
		var_334_float = var_462_float;
		var_339_int = var_463_int;
		func_294(var_342_string, var_462_float, var_463_int);
		var_341_int = 1;

	Label_410:
		var_465_int = "attack_middle" + var_339_int;
		var_467_int = var_465_int + "_";
		var_342_string = var_467_int + var_341_int;
		HasAnimation(var_340_bool, "all", var_342_string);
		var_469_bool = var_340_bool == 0; //@nz
		if(var_469_bool != 0) {
		} else {
			func_1588();
			PlayAnimation("all", var_342_string);
			WaitForAnimEnd();
			func_672(var_342_string);
			var_485_bool = 0; var_486_object = Obj();
			var_486_object = var_0_object;
			func_1270(var_485_bool, var_486_object);
			var_487_bool = var_485_bool == 0; //@nz
			if(var_487_bool != 0) {
				StopAsync();
				var_333_bool = 0;
				var_488_float = 0; var_489_int = 0;
				var_334_float = var_488_float;
				var_339_int = var_489_int;
				func_294(var_342_string, var_488_float, var_489_int);
				var_341_int = var_341_int + (int)1;
				goto Label_410;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_473_int = "attack_end" + var_339_int;
	PlayAnimation("all", var_473_int);
	var_474_bool = 0;
	func_686(var_474_bool);
	if(var_474_bool != 0) {
		var_475_bool = 0; var_476_float = 0;
		func_470(var_475_bool, (float)0.75);
		StopAsync();
	}
	var_333_bool = 1;
	return 8;
	
}


func_973(var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_string = ""; var_60_object = Obj(); var_61_bool = 0; var_62_bool = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_string = ""; var_70_object = Obj(); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0);
	var_75_bool = var_54_object == 0; //@ne
	if(var_75_bool != 0) {
		var_76_string = "";
		func_1064("fdie");
	} else {
		@@var_54_object:GetPosition(var_65_cvector);
		GetPosition(var_66_cvector);
		GetDirection(var_67_cvector);
		var_68_cvector = var_66_cvector - var_65_cvector;
		var_108_float = GetByIndex(var_68_cvector, 0);
		var_109_float = GetByIndex(var_67_cvector, 0);
		var_110_float = var_108_float * var_109_float;
		var_111_float = GetByIndex(var_68_cvector, 2);
		var_112_float = GetByIndex(var_67_cvector, 2);
		var_113_float = var_111_float * var_112_float;
		var_114_int = var_110_float + var_113_float;
		var_116_bool = var_114_int >= (int)0;
		if(var_116_bool != 0) {
			var_69_string = "fdie";
		} else {
				var_69_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_54_object = var_70_object;
		var_119_bool = IsFuncExist(var_54_object, "GetScriptProperty", (int)2);
		if(var_119_bool != 0) {
			@@var_54_object:HasScriptProperty(var_71_bool, "Owner");
			var_121_bool = var_71_bool;
			if(var_121_bool != 0) {
				@@var_54_object:GetScriptProperty(var_70_object, "Owner");
				var_123_bool = var_70_object == 0; //@ne
				if(var_123_bool != 0) {
					var_54_object = var_70_object;
				}
			}
		}
		var_126_bool = IsFuncExist(var_70_object, "@GetEyesHeight", (int)1);
		if(var_126_bool != 0) {
			@@var_70_object:GetEyesHeight(var_73_float);
			var_74_cvector = CVector(0.0, 0.0, 0.0);
			var_127_float = GetByIndex(var_74_cvector, 1);
			var_73_float = var_127_float;
			SetByIndex(var_74_cvector, 1) = var_127_float;
			LookAsync(var_54_object, "head", var_74_cvector);
			var_72_bool = 1;
		} else {
			var_72_bool = 0;

		}
		var_129_string = "";
		var_69_string = var_129_string;
		func_1442(var_129_string);
		PlayAnimation("all", var_69_string);
		WaitForAnimEnd();
		var_131_bool = var_72_bool;
		if(var_131_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_69_string);
		RemoveEnvelope();
		var_70_object = 0;
	}
	return 20;
	
}


func_1229(var_88_bool, var_89_object)
{
	var_90_bool = 0; var_91_bool = 0;
	@@var_89_object:IsDead(var_91_bool);
	var_91_bool = var_88_bool;
	return 2;
}


func_1489(var_41_cvector, var_42_cvector)
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


func_1234(var_77_bool, var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj();
	var_83_bool = var_78_object == 0; //@ne
	if(var_83_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	var_84_bool = 0;
	var_84_bool = 0;
	var_87_bool = IsFuncExist(var_78_object, "IsDead", (int)1);
	if(var_87_bool != 0) {
		var_88_bool = 0; var_89_object = Obj();
		var_78_object = var_89_object;
		func_1229(var_88_bool, var_89_object);
		if(var_88_bool != 0) {
			var_84_bool = 1;
		}
	}
	if(var_84_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	GetScene(var_81_object);
	var_92_bool = var_81_object == 0; //@ne
	if(var_92_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	@@var_78_object:GetScene(var_82_object);
	var_93_bool = var_81_object != var_82_object;
	if(var_93_bool != 0) {
		var_77_bool = 0;
		return 4;
	}
	var_77_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_470(var_475_bool, var_476_float)
{
	var_477_float = 0; var_478_bool = 0; var_479_float = 0; var_480_bool = 0;
	rand(var_479_float);
	var_481_bool = var_479_float < var_476_float;
	if(var_481_bool != 0) {

	Label_475:
		IsAnimationPlaying(var_480_bool);
		var_482_bool = var_480_bool == 0; //@nz
		if(var_482_bool != 0) {
		} else {
			var_483_bool = 0;
			func_568(var_483_bool);
			if(var_483_bool != 0) {
				var_475_bool = 1;
				sync();
				goto Label_475;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_672(var_480_bool);
	}
	goto Label_495;
	
Label_495:
	var_475_bool = 0;
	return 4;
	
}


func_1110(var_315_cvector, var_316_object)
{
	var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0);
	GetPosition(var_319_cvector);
	@@var_316_object:GetPosition(var_320_cvector);
	var_315_cvector = var_320_cvector - var_319_cvector;
	return 4;
}


func_1499(var_422_float, var_423_float, var_424_float)
{
	var_427_bool = var_423_float < var_424_float;
	if(var_427_bool != 0) {
		var_423_float = var_422_float;
	} else {
		var_424_float = var_422_float;
	}
	return 0;
	
}


func_1117(var_139_bool, var_140_object)
{
	var_141_bool = 0; var_142_bool = 0;
	IsPlayerActor(var_140_object, var_142_bool);
	var_142_bool = var_139_bool;
	return 2;
}


func_1122(var_95_bool, var_96_object, var_97_string)
{
	var_98_bool = 0; var_99_bool = 0;
	var_102_bool = IsFuncExist(var_96_object, "HasProperty", (int)2);
	var_103_bool = var_102_bool == 0; //@nz
	if(var_103_bool != 0) {
		var_95_bool = 0;
		return 2;
	}
	@@var_96_object:HasProperty(var_97_string, var_99_bool);
	var_99_bool = var_95_bool;
	return 2;
}


func_1506(var_432_float, var_433_float, var_434_float, var_435_float)
{
	var_436_bool = var_433_float < var_434_float;
	if(var_436_bool != 0) {
		var_434_float = var_432_float;
		return 0;
	}
	var_437_bool = var_433_float > var_435_float;
	if(var_437_bool != 0) {
		var_435_float = var_432_float;
		return 0;
	}
	var_433_float = var_432_float;
	return 0;
}


func_1517(var_15_bool, var_16_object, var_17_float)
{
	var_18_bool = var_16_object == 0; //@nz
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 0;
	}
	var_20_bool = var_17_float > (int)0;
	if(var_20_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_51_bool = var_17_float < (int)0;
		if(var_51_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1538;
		}
		var_15_bool = 0;
		return 0;
	}
Label_1538:
	var_22_float = 0;
	var_17_float = var_22_float;
	func_1569(var_22_float);
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; var_29_float = 0; var_30_float = 0; var_31_float = 0;
	var_16_object = var_27_object;
	var_17_float = var_29_float;
	func_1134(var_26_bool, var_27_object, "reputation", var_29_float, (float)0, (float)1);
	var_15_bool = 1;
	return 0;
	
}


func_1134(var_26_bool, var_27_object, var_28_string, var_29_float, var_30_float, var_31_float)
{
	var_32_float = 0; var_33_float = 0;
	var_34_bool = 0; var_35_object = Obj(); var_36_string = "";
	var_27_object = var_35_object;
	var_28_string = var_36_string;
	func_1122(var_34_bool, var_35_object, var_36_string);
	var_43_bool = var_34_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_26_bool = 0;
		return 2;
	}
	@@var_27_object:GetProperty(var_28_string, var_33_float);
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0;
	var_45_float = var_33_float + var_29_float;
	var_30_float = var_46_float;
	var_31_float = var_47_float;
	func_1506(var_44_float, var_45_float, var_46_float, var_47_float);
	@@var_27_object:SetProperty(var_28_string, var_44_float);
	var_26_bool = 1;
	return 2;
}


func_497(var_0_object, var_272_bool, var_273_float)
{
	var_274_bool = 0; var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_cvector = CVector(0,0,0); var_278_float = 0; var_279_bool = 0; var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_float = 0;
	
Label_498:
	IsAnimationPlaying(var_279_bool);
	var_284_bool = var_279_bool == 0; //@nz
	if(var_284_bool != 0) {
	} else {
		var_285_bool = 0;
		func_568(var_285_bool);
		if(var_285_bool != 0) {
			var_272_bool = 1;
			return 10;
		}
		var_328_bool = 0; var_329_object = Obj();
		var_329_object = var_0_object;
		func_1270(var_328_bool, var_329_object);
		var_330_bool = var_328_bool == 0; //@nz
		if(var_330_bool != 0) {
			var_272_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_280_cvector);
		GetPFPosition(var_281_cvector);
		var_282_cvector = var_280_cvector - var_281_cvector;
		var_283_float = var_282_cvector | var_282_cvector;
		var_331_float = var_273_float * var_273_float;
		var_332_bool = var_283_float < var_331_float;
		if(var_332_bool != 0) {
			var_333_bool = 0; var_334_float = 0;
			var_273_float = var_334_float;
			func_333(var_282_cvector, var_283_float, var_333_bool, var_334_float);
			var_272_bool = 1;
			sync();
			goto Label_498;
		}
		return 10;
	}
	func_672(var_283_float);
	var_272_bool = 0;
	return 10;
	
}


func_629(var_0_object, var_235_bool)
{
	var_236_bool = 0; var_237_bool = 0;
	var_240_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_240_bool != 0) {
		@@@var_0_object:IsAttacking(var_237_bool);
		var_237_bool = var_235_bool;
		return 2;
	}
	var_235_bool = 0;
	return 2;
}


func_1270(var_73_bool, var_74_object)
{
	var_75_int = 0; var_76_int = 0;
	var_77_bool = 0; var_78_object = Obj();
	var_74_object = var_78_object;
	func_1234(var_77_bool, var_78_object);
	var_94_bool = var_77_bool == 0; //@nz
	if(var_94_bool != 0) {
		var_73_bool = 0;
		return 2;
	}
	var_95_bool = 0; var_96_object = Obj(); var_97_string = "";
	var_74_object = var_96_object;
	func_1122(var_95_bool, var_96_object, "noaccess");
	var_104_bool = var_95_bool == 0; //@nz
	if(var_104_bool != 0) {
		var_73_bool = 1;
		return 2;
	}
	@@var_74_object:GetProperty("noaccess", var_76_int);
	var_73_bool = var_76_int == (int)0;
	return 2;
}


func_763(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_929(var_9_object);
	return 0;
}


func_1406(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1294(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


