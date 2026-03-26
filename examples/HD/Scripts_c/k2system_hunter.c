// @IMPORTS: Sleep/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,RemoveActor/1,SetProperty/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:idle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:dead
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_1: op=0xe vars=object
// @EVENT_3: op=0x27 vars=object
// @EVENT_17: op=0x40 vars=object
// @TASK_1: vars=object,int,int,bool,float,int params=1
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_7: op=0x37a vars=int
// @EVENT_1: op=0x395 vars=object
// @EVENT_2: op=0x3a4 vars=object
// @EVENT_10: op=0x42a vars=object
// @EVENT_41: op=0x435 vars=object
// @TASK_3: vars= params=1
// @EVENT_0: op=0x458 vars=object
// @EVENT_22: op=0x4d7 vars=object,int,float,float
// @EVENT_16: op=0x4d9 vars=object,string
// @EVENT_41: op=0x4db vars=object
// @STANDALONE_EVENT_6: op=0x6ea vars=
// @STANDALONE_EVENT_22: op=0x704 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x70c vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x716 vars=object,string
// @STANDALONE_EVENT_41: op=0x723 vars=object
// @PE: 0xe,0x27,0x40,0xa1,0xad,0xb0,0x341,0x37a,0x395,0x3a4,0x418,0x42a,0x435,0x43e,0x449,0x4bd,0x4d7,0x4d9,0x4db,0x4dd,0x65f,0x666,0x6b4,0x704,0x70c,0x723

task_0_event_1(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_9_bool = var_12_object;
	func_1266(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		var_15_bool = 0; var_16_object = Obj();
		var_9_bool = var_16_object;
		func_1397(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		func_156();
		var_49_object = Obj();
		var_9_bool = var_49_object;
		TaskCall(1);
		func_161(var_49_object);
		TaskReturn();
	}
	return 0;
}


task_0_event_3(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_9_bool = var_12_object;
	func_1266(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		var_15_bool = 0; var_16_object = Obj();
		var_9_bool = var_16_object;
		func_1397(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		func_156();
		var_49_object = Obj();
		var_9_bool = var_49_object;
		TaskCall(1);
		func_161(var_49_object);
		TaskReturn();
	}
	return 0;
}


task_0_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	func_156();
	var_10_object = Obj();
	var_9_bool = var_10_object;
	TaskCall(1);
	func_161(var_10_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_11_bool = var_9_int == (int)1;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_1_int;
		func_1666(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_1048(var_8_bool, var_9_int, var_17_int);
	}
	return 0;
	
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
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
		func_1563(var_13_object);
	}
	return 0;
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
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


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_904(var_9_object);
	var_9_object = Obj();
	func_1827();
	return 0;
}


task_3_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0;
	IsOverrideActive(var_11_bool);
	var_12_bool = var_11_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_9_object = var_13_object;
		func_1716(var_13_object);
	}
	return 2;
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0;
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0;
}


event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1615(var_9_object);
	RemoveActor(var_9_object);
	Hold();
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1465(var_13_object, var_14_int, var_15_float);
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
	func_1533(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1778(var_10_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	EventDisable(1);
	EventDisable(3);
	Sleep((int)3);
	EventEnable(1);
	EventEnable(3);
	
Label_7:
	if((bool)1 != 0) {
		func_75();
		goto Label_7;
	}
	return 0;
}


func_1666(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsPlayerActor(var_12_object, var_14_bool);
	var_15_bool = var_14_bool;
	if(var_15_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1283(var_389_float, var_390_object, var_391_float, var_392_int)
{
	var_396_int = 0; var_397_string = ""; var_398_int = 0; var_399_float = 0; var_400_float = 0; var_401_float = 0; var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_float = 0; var_406_float = 0; var_407_float = 0;
	var_408_bool = 0; var_409_object = Obj(); var_410_string = "";
	var_390_object = var_409_object;
	func_1271(var_408_bool, var_409_object, "health");
	var_411_bool = var_408_bool == 0; //@nz
	if(var_411_bool != 0) {
		var_389_float = 0.0;
		return 12;
	}
	var_412_bool = 0; var_413_object = Obj(); var_414_string = "";
	var_390_object = var_413_object;
	func_1271(var_412_bool, var_413_object, "armor");
	var_415_bool = var_412_bool == 0; //@nz
	if(var_415_bool != 0) {
		var_402_int = 0;
	} else {
			@@var_390_object:GetProperty("armor", var_402_int);
	}
	var_417_string = ""; var_418_int = 0;
	var_392_int = var_418_int;
	func_1245(var_417_string, var_418_int);
	var_403_string = "armor_" + var_417_string;
	var_423_bool = 0; var_424_object = Obj(); var_425_string = "";
	var_390_object = var_424_object;
	var_403_string = var_425_string;
	func_1271(var_423_bool, var_424_object, var_425_string);
	var_426_bool = var_423_bool == 0; //@nz
	if(var_426_bool != 0) {
		var_404_int = 0;
	} else {
		@@var_390_object:GetProperty(var_403_string, var_404_int);

	}
	var_427_float = 0; var_428_float = 0; var_429_float = 0;
	var_430_int = var_402_int + var_404_int;
	var_428_float = var_430_int / (float)100.0;
	func_1631(var_427_float, var_428_float, (float)1);
	var_427_float = var_405_float;
	@@var_390_object:GetProperty("health", var_406_float);
	var_435_int = (int)1 - var_405_float;
	var_407_float = var_391_float * var_435_int;
	var_437_float = 0; var_438_float = 0; var_439_float = 0; var_440_float = 0;
	var_438_float = var_406_float - var_407_float;
	func_1638(var_437_float, var_438_float, (float)0, (float)1);
	@@var_390_object:SetProperty("health", var_437_float);
	var_443_bool = 0; var_444_object = Obj();
	var_390_object = var_444_object;
	func_1266(var_443_bool, var_444_object);
	if(var_443_bool != 0) {
		var_445_float = 0;
		var_445_float = -var_407_float;
		func_1649(var_445_float);
	}
	var_407_float = var_389_float;
	return 12;
	
}


func_646(var_0_object, var_277_bool, var_278_float)
{
	var_279_bool = 0; var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_float = 0; var_284_bool = 0; var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_float = 0;
	
Label_647:
	IsAnimationPlaying(var_284_bool);
	var_289_bool = var_284_bool == 0; //@nz
	if(var_289_bool != 0) {
	} else {
		var_290_bool = 0;
		func_717(var_290_bool);
		if(var_290_bool != 0) {
			var_277_bool = 1;
			return 10;
		}
		var_333_bool = 0; var_334_object = Obj();
		var_334_object = var_0_object;
		func_1397(var_333_bool, var_334_object);
		var_335_bool = var_333_bool == 0; //@nz
		if(var_335_bool != 0) {
			var_277_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_285_cvector);
		GetPFPosition(var_286_cvector);
		var_287_cvector = var_285_cvector - var_286_cvector;
		var_288_float = var_287_cvector | var_287_cvector;
		var_336_float = var_278_float * var_278_float;
		var_337_bool = var_288_float < var_336_float;
		if(var_337_bool != 0) {
			var_338_bool = 0; var_339_float = 0;
			var_278_float = var_339_float;
			func_482(var_287_cvector, var_288_float, var_338_bool, var_339_float);
			var_277_bool = 1;
			sync();
			goto Label_647;
		}
		return 10;
	}
	func_821(var_288_float);
	var_277_bool = 0;
	return 10;
	
}


func_904(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1070(var_9_object);
	return 0;
}


func_778(var_0_object, var_240_bool)
{
	var_241_bool = 0; var_242_bool = 0;
	var_245_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_245_bool != 0) {
		@@@var_0_object:IsAttacking(var_242_bool);
		var_242_bool = var_240_bool;
		return 2;
	}
	var_240_bool = 0;
	return 2;
}


func_1547(var_223_object)
{
	var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0);
	@@var_223_object:GetPosition(var_227_cvector);
	GetPosition(var_228_cvector);
	var_229_cvector = var_227_cvector - var_228_cvector;
	var_230_float = GetByIndex(var_229_cvector, 0);
	var_231_float = GetByIndex(var_229_cvector, 2);
	RotateAsync(var_230_float, var_231_float);
	return 6;
}


func_1675()
{
	var_350_object = Obj(); var_351_object = Obj();
	GetScene(var_351_object);
	var_353_object = Obj();
	func_1615(var_353_object);
	BroadcastMessage("battle", var_353_object, var_351_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1421(var_26_object)
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


func_789(var_2_int, var_5_float)
{
	var_357_float = 0; var_358_int = 0; var_359_float = 0; var_360_int = 0;
	var_361_bool = var_2_int == 0; //@nz
	if(var_361_bool != 0) {
		return 4;
	}
	var_362_float = var_5_float;
	if(var_362_float != 0) {
		var_5_float = var_5_float + (int)-1;
		var_365_bool = var_5_float > (int)0;
		if(var_365_bool != 0) {
			return 4;
		}
	}
	rand(var_359_float);
	var_366_float = 0;
	func_839(var_366_float);
	var_367_bool = var_359_float < var_366_float;
	if(var_367_bool != 0) {
		irand(var_360_int, var_2_int);
		var_360_int = var_360_int + (int)1;
		var_370_int = "attack" + var_360_int;
		Speak(var_370_int);
		var_371_int = 0;
		func_837(var_371_int);
		var_5_float = var_371_int;
	}
	return 4;
}


func_1558(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
	return 2;
}


func_1686(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_408(var_1_object, var_2_int, var_4_bool)
{
	var_42_bool = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_410:
	var_51_int = var_1_object + (int)1;
	var_52_int = "attack_begin" + var_51_int;
	HasAnimation(var_45_bool, "all", var_52_int);
	var_53_bool = var_45_bool == 0; //@nz
	if(var_53_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_410;
	}
	var_2_int = 0;
	
Label_424:
	var_56_int = var_2_int + (int)1;
	var_57_int = "attack" + var_56_int;
	IsExisting3DSound(var_46_bool, var_57_int);
	var_58_bool = var_46_bool == 0; //@nz
	if(var_58_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_424;

	}
	GetAnimationOffset(var_47_cvector, "all", "bjump");
	var_61_float = GetByIndex(var_47_cvector, 2);
	var_4_bool = -var_61_float;
	return 6;
	
}


func_1048(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_1086(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_154(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_1563(var_13_object)
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


func_156()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1693(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_1695:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_1686(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_1695;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_161(var_10_object)
{
	
Label_162:
	var_17_object = Obj(); var_18_bool = 0; var_19_float = 0;
	var_10_object = var_17_object;
	func_179(var_13_int, var_14_bool, var_15_float, var_16_int, var_10_object, var_17_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_162;
}
EMIT "Return(); Pop(0)";


func_1574(var_59_string)
{
	var_60_bool = 0; var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	IsExisting3DSound(var_68_bool, var_59_string);
	var_76_bool = var_68_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_69_int = 0;

	Label_1580:
		var_78_int = var_69_int + (int)1;
		var_79_int = var_59_string + var_78_int;
		IsExisting3DSound(var_70_bool, var_79_int);
		var_80_bool = var_70_bool == 0; //@nz
		if(var_80_bool != 0) {
		} else {
			var_69_int = var_69_int + (int)1;
			goto Label_1580;
		}
		var_81_bool = var_69_int == 0; //@nz
		if(var_81_bool != 0) {
			return 16;
		}
		irand(var_71_int, var_69_int);
		var_83_int = var_71_int + (int)1;
		var_59_string = var_59_string + var_83_int;
	}
	Is3DSoundLoaded(var_72_bool, var_59_string);
	var_84_bool = var_72_bool;
	if(var_84_bool != 0) {
		GetEyesHeight(var_73_float);
		GetDirection(var_74_cvector);
		var_75_cvector = var_74_cvector * (int)50;
		var_86_float = GetByIndex(var_75_cvector, 1);
		var_86_float = var_86_float + var_73_float;
		SetByIndex(var_75_cvector, 1) = var_86_float;
		PlayGlobalSound(var_59_string, var_75_cvector);
	}
	return 16;
	
}


func_173(var_386_float)
{
	var_386_float = 0.20000000298023224;
	return 0;
}


func_1070(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1710(var_13_int)
{
	var_14_int = 0; var_15_int = 0;
	GetVariable("branch", var_15_int);
	var_15_int = var_13_int;
	return 2;
}


func_176(var_393_int)
{
	var_393_int = 0;
	return 0;
}


func_689(var_0_object, var_292_bool)
{
	var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_float = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_float = 0;
	var_303_bool = 0; var_304_object = Obj();
	var_304_object = var_0_object;
	func_1397(var_303_bool, var_304_object);
	var_305_bool = var_303_bool == 0; //@nz
	if(var_305_bool != 0) {
		var_292_bool = 0;
		return 10;
	}
	var_306_bool = 0;
	func_778(var_302_float, var_306_bool);
	if(var_306_bool != 0) {
		@@@var_0_object:GetPFPosition(var_298_cvector);
		GetPFPosition(var_299_cvector);
		var_300_cvector = var_298_cvector - var_299_cvector;
		var_301_float = var_300_cvector | var_300_cvector;
		@@@var_0_object:GetAttackDistance(var_302_float);
		var_302_float = var_302_float + (int)50;
		var_308_float = var_302_float * var_302_float;
		var_292_bool = var_301_float <= var_308_float;
		return 10;
	}
	var_292_bool = 0;
	return 10;
}


func_946(var_0_object, var_1_object, var_149_bool, var_150_object, var_151_float, var_152_float, var_153_bool, var_154_bool)
{
	var_155_bool = 0; var_156_bool = 0; var_157_object = Obj(); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_float = 0; var_162_object = Obj(); var_163_bool = 0; var_164_bool = 0; var_165_object = Obj(); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_float = 0; var_170_object = Obj();
	var_0_object = false;
	var_1_object = var_150_object;
	var_154_bool = var_164_bool;
	
Label_950:
	var_171_bool = 0; var_172_object = Obj();
	var_150_object = var_172_object;
	func_1086(var_171_bool, var_172_object);
	var_175_bool = var_171_bool == 0; //@nz
	if(var_175_bool != 0) {
		var_149_bool = 0;
		return 16;
	}
	@@var_150_object:GetPosition(var_166_cvector);
	GetPosition(var_167_cvector);
	var_168_cvector = var_166_cvector - var_167_cvector;
	var_169_float = var_168_cvector | var_168_cvector;
	var_176_bool = 0;
	var_176_bool = 0;
	var_178_bool = var_152_float > (int)0;
	if(var_178_bool != 0) {
		var_179_float = var_152_float * var_152_float;
		var_180_bool = var_169_float > var_179_float;
		if(var_180_bool != 0) {
			var_176_bool = 1;
		}
	}
	if(var_176_bool != 0) {
		Stop();
		var_149_bool = 0;
		return 16;
	}
	var_181_float = var_151_float * var_151_float;
	var_182_bool = var_169_float > var_181_float;
	if(var_182_bool != 0) {
		@@var_150_object:GetPFPosition(var_166_cvector);
		FindPathTo(var_170_object, var_166_cvector);
		var_183_bool = var_170_object != 0; //@nn
		if(var_183_bool != 0) {
			var_170_object = var_165_object;
			var_170_object = 0;
		}
		var_184_bool = var_165_object != 0; //@nn
		if(var_184_bool != 0) {
			var_185_bool = var_164_bool;
			if(var_185_bool == 0) goto Label_999;
			var_164_bool = 0;
			RotatePath(var_165_object, var_163_bool);
			var_186_bool = var_163_bool == 0; //@nz
			if(var_186_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_189_string = "";
				func_1093(var_189_string);
				var_190_string = "";
				func_1095(var_190_string);
				FollowPath(var_165_object, var_153_bool, var_163_bool, var_189_string, var_190_string);
				var_191_bool = var_163_bool == 0; //@nz
				if(var_191_bool != 0) {
					var_192_object = var_0_object;
					if(var_192_object != 0) {
						var_165_object = 0;
						goto Label_1046;
					EMIT "GOTO 0x3fb";
					}
				} else {
					var_165_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_163_bool);
					var_195_bool = var_163_bool == 0; //@nz
					if(var_195_bool != 0) {
						var_196_object = var_0_object;
						if(var_196_object != 0) {
							var_165_object = 0;
							goto Label_1046;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1046;
	}
			var_170_object = 0;
			goto Label_1044;

		Label_1044:
			var_165_object = 0;

		}
		goto Label_950;
	}
Label_1046:
	var_149_bool = !var_0_object;
	return 16;
	
}


func_179(var_0_object, var_3_int, var_5_float, var_17_object, var_18_bool, var_19_float, var_126_bool, var_218_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_float = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_float = 0;
	func_408(var_39_cvector, var_40_bool, var_41_float);
	var_5_float = 0;
	var_66_bool = IsFuncExist(var_17_object, "@GetAttackDistance", (int)1);
	if(var_66_bool != 0) {
		@@var_17_object:GetAttackDistance(var_31_float);
		var_31_float = var_31_float + (int)50;
	} else {
							var_19_float = var_31_float;
	}
	var_69_bool = var_31_float >= (int)150;
	if(var_69_bool != 0) {
		var_31_float = 150;
	}
	var_3_int = false;
	var_0_object = var_17_object;
	IsPlayerActor(var_0_object, var_34_bool);
	var_70_bool = var_34_bool;
	if(var_70_bool != 0) {
		PlayGlobalMusic("attack");
		var_72_object = Obj();
		func_1615(var_72_object);
		SendPlayerEnemy(var_17_object, var_72_object);
	}
	var_75_bool = var_18_bool;
	if(var_75_bool != 0) {
		var_35_bool = 0;
	} else {
						var_35_bool = 1;

	}
	var_36_float = (float)400.0 + var_31_float;
	
Label_219:
	var_77_bool = 0;
	var_77_bool = 0;
	var_78_bool = 0; var_79_object = Obj();
	var_79_object = var_0_object;
	func_1397(var_78_bool, var_79_object);
	if(var_78_bool != 0) {
		var_112_bool = var_3_int == 0; //@nz
		if(var_112_bool != 0) {
			var_77_bool = 1;
		}
	}
	if(var_77_bool != 0) {
		func_821(var_41_float);
		@@@var_0_object:GetPFPosition(var_32_cvector);
		GetPFPosition(var_33_cvector);
		var_37_cvector = var_32_cvector - var_33_cvector;
		var_38_float = var_37_cvector | var_37_cvector;
		var_118_float = var_36_float * var_36_float;
		var_119_bool = var_38_float >= var_118_float;
		if(var_119_bool != 0) {
			var_120_bool = 0; var_121_object = Obj(); var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_bool = 0;
			var_121_object = var_0_object;
			var_31_float = var_122_float;
			TaskCall(2);
			func_841(var_128_bool, var_120_bool, var_121_object, var_122_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_203_bool = var_126_bool == 0; //@nz
			if(var_203_bool != 0) {
			} else {
				var_35_bool = 0;
		} else {
				var_209_float = var_19_float * var_19_float;
				var_210_bool = var_38_float >= var_209_float;
				if(var_210_bool != 0) {
					@@@var_0_object:GetPFPosition(var_39_cvector);
					CanReachByPF(var_40_bool, var_39_cvector);
					var_211_bool = var_40_bool == 0; //@nz
					if(var_211_bool != 0) {
						var_212_bool = 0; var_213_object = Obj(); var_214_float = 0; var_215_float = 0; var_216_bool = 0; var_217_bool = 0;
						var_213_object = var_0_object;
						var_31_float = var_214_float;
						TaskCall(2);
						func_841(var_220_bool, var_212_bool, var_213_object, var_214_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_221_bool = var_218_bool == 0; //@nz
						if(var_221_bool != 0) {
							goto Label_391;
						}
						var_35_bool = 0;
						goto Label_219;
					}
					var_222_bool = var_35_bool == 0; //@nz
					if(var_222_bool != 0) {
						var_223_object = Obj();
						var_223_object = var_0_object;
						func_1547(var_223_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_821(var_41_float);
						StopAsync();
						var_35_bool = 1;
						var_234_bool = 0; var_235_object = Obj();
						var_235_object = var_0_object;
						func_1397(var_234_bool, var_235_object);
						var_236_bool = var_234_bool == 0; //@nz
						if(var_236_bool != 0) {
							goto Label_391;
						}
					}
					rand(var_41_float);
					var_237_bool = 0;
					var_239_bool = var_41_float < (float)0.25;
					if(var_239_bool != 1) {
						var_240_bool = 0;
						func_778((bool)1, var_240_bool);
						if(var_240_bool != 1) {
							var_237_bool = 0;
						}
					}
					if(var_237_bool != 0) {
						Face(var_0_object);
						func_828();
						PlayAnimation("all", "attack_stay");
						var_277_bool = 0; var_278_float = 0;
						var_19_float = var_278_float;
						func_646(var_41_float, var_277_bool, var_278_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_821(var_41_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_499_bool = 0;
						func_778(var_41_float, var_499_bool);
						var_500_bool = var_499_bool == 0; //@nz
						if(var_500_bool == 0) goto Label_381;
						var_501_bool = 0; var_502_object = Obj();
						var_502_object = var_0_object;
						func_1397(var_501_bool, var_502_object);
						var_503_bool = var_501_bool == 0; //@nz
						if(var_503_bool != 0) {
							goto Label_391;
						}
						@@@var_0_object:GetPFPosition(var_32_cvector);
						GetPFPosition(var_33_cvector);
						var_37_cvector = var_32_cvector - var_33_cvector;
						var_38_float = var_37_cvector | var_37_cvector;
						var_504_float = var_19_float * var_19_float;
						var_505_bool = var_38_float < var_504_float;
						if(var_505_bool == 0) goto Label_381;
						var_506_bool = 0; var_507_float = 0;
						var_19_float = var_507_float;
						func_482(var_40_bool, var_41_float, var_506_bool, var_507_float);
						var_508_bool = var_506_bool == 0; //@nz
						if(var_508_bool == 0) goto Label_381;
						goto Label_391;
				}
					var_509_bool = 0; var_510_float = 0;
					var_19_float = var_510_float;
					func_482(var_40_bool, var_41_float, var_509_bool, var_510_float);
					var_511_bool = var_509_bool == 0; //@nz
					if(var_511_bool != 0) {
						goto Label_391;
					}
					var_35_bool = 1;

				}
			Label_381:
				goto Label_390;
		}
		Label_390:
			goto Label_219;

		}
	}
Label_391:
	WaitForAnimEnd();
	var_204_int = var_3_int;
	if(var_204_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_207_bool = var_34_bool;
	if(var_207_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1716(var_13_object)
{
	var_14_int = 0;
	func_1710(var_14_int);
	var_19_bool = var_14_int == (int)1;
	if(var_19_bool != 0) {
		WorkWithCorpse(var_13_object);
	} else {
		Barter(var_13_object);
	}
	return 0;
	
}


func_821(var_0_object)
{
	var_113_object = Obj();
	var_113_object = var_0_object;
	func_1666(var_113_object);
	return 0;
}


func_1465(var_13_object, var_14_int, var_15_float)
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
		func_1259(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1621(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1494:
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
			goto Label_1494;
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
			func_1533(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1421(var_103_object);
	return 18;
	
}


func_826(var_454_int)
{
	var_454_int = 0;
	return 0;
}


func_443(var_0_object, var_375_float, var_376_int)
{
	var_377_object = Obj(); var_378_float = 0; var_379_float = 0; var_380_object = Obj(); var_381_float = 0; var_382_float = 0;
	var_384_float = var_375_float * (float)0.8999999761581421;
	GetVictim(var_384_float, var_380_object);
	ReportAttack(var_0_object);
	var_385_bool = var_380_object == var_0_object;
	if(var_385_bool != 0) {
		var_386_float = 0; var_387_object = Obj(); var_388_int = 0;
		var_380_object = var_387_object;
		var_376_int = var_388_int;
		func_173(var_388_int);
		var_386_float = var_381_float;
		var_389_float = 0; var_390_object = Obj(); var_391_float = 0; var_392_int = 0;
		var_380_object = var_390_object;
		var_381_float = var_391_float;
		var_393_int = 0; var_394_object = Obj(); var_395_int = 0;
		var_380_object = var_394_object;
		var_376_int = var_395_int;
		func_176(var_395_int);
		var_393_int = var_392_int;
		func_1283(var_389_float, var_390_object, var_391_float, var_392_int);
		var_389_float = var_382_float;
		var_454_int = 0;
		func_826(var_454_int);
		ReportHit(var_0_object, var_454_int, var_382_float, var_381_float);
		var_455_object = Obj(); var_456_float = 0;
		var_380_object = var_455_object;
		var_382_float = var_456_float;
		func_833();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_828()
{
	var_246_string = "";
	func_1574("attack_stay");
	return 0;
}


func_1213(var_58_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_59_string = "";
	var_58_string = var_59_string;
	func_1574(var_59_string);
	PlayAnimation("all", var_58_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_58_string);
	RemoveEnvelope();
	return 0;
}


func_1086(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_1397(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
	return 0;
}


func_833()
{
	return 0;
}


func_1729(var_19_string)
{
	var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; var_25_bool = 0;
	CreateInvItem(var_23_object);
	@@var_23_object:SetItemName(var_19_string);
	@@var_23_object:SetProperty("Organ", (int)1);
	@@var_23_object:GetItemID(var_24_int);
	AddItem(var_25_bool, var_23_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_835(var_479_bool)
{
	var_479_bool = 1;
	return 0;
}


func_837(var_371_int)
{
	var_371_int = 1;
	return 0;
}


func_1093(var_189_string)
{
	var_189_string = "walk";
	return 0;
}


func_839(var_366_float)
{
	var_366_float = 0.5;
	return 0;
}


func_1095(var_190_string)
{
	var_190_string = "run";
	return 0;
}


func_841(var_2_int, var_120_bool, var_121_object, var_122_float, var_123_float, var_124_bool, var_125_bool)
{
	var_129_bool = 0; var_130_bool = 0; var_131_bool = 0; var_132_bool = 0;
	var_133_object = Obj();
	var_121_object = var_133_object;
	func_1666(var_133_object);
	SetTimer((int)1, (int)5);
	CanSee(var_131_bool, var_121_object);
	var_136_bool = var_131_bool;
	if(var_136_bool != 0) {
		var_2_int = true;
		var_137_object = Obj();
		var_121_object = var_137_object;
		func_1563(var_137_object);
	} else {
		var_2_int = false;
	}
	var_144_bool = 0; var_145_object = Obj();
	var_121_object = var_145_object;
	func_1266(var_144_bool, var_145_object);
	if(var_144_bool != 0) {
		var_148_object = Obj();
		func_1615(var_148_object);
		SendPlayerEnemy(var_121_object, var_148_object);
	}
	var_149_bool = 0; var_150_object = Obj(); var_151_float = 0; var_152_float = 0; var_153_bool = 0; var_154_bool = 0;
	var_121_object = var_150_object;
	var_122_float = var_151_float;
	var_123_float = var_152_float;
	var_124_bool = var_153_bool;
	var_125_bool = var_154_bool;
	func_946(var_131_bool, var_132_bool, var_149_bool, var_150_object, var_151_float, var_152_float, var_153_bool, var_154_bool);
	var_149_bool = var_132_bool;
	var_200_int = var_2_int;
	if(var_200_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_132_bool = var_120_bool;
	return 4;
	
}


func_1097(var_35_object)
{
	EventDisable(0);
	var_36_object = Obj();
	var_35_object = var_36_object;
	func_1122(var_36_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1108:
	Hold();
	goto Label_1108;
}
EMIT "Return(); Pop(0)";


func_75()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_1558(var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 14;
	}
	func_1693((int)0);
	var_29_int = var_18_int;
	var_19_int = 0;
	
Label_89:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_19_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_1558(var_45_bool);
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		irand(var_20_int, (int)3);
		var_48_bool = var_20_int == (int)0;
		if(var_48_bool != 0) {
			var_49_int = var_18_int;
			if(var_49_int == 0) goto Label_122;
			irand(var_21_int, var_18_int);
			var_51_string = ""; var_52_int = 0;
			var_21_int = var_52_int;
			func_1686(var_51_string, var_52_int);
			PlayAnimation("all", var_51_string);
			WaitForAnimEnd(var_22_bool);
			var_53_bool = var_22_bool == 0; //@nz
			if(var_53_bool != 0) {
			} else {
		} else {
				var_58_bool = var_20_int == (int)1;
				if(var_58_bool != 0) {
					rand(var_23_float, (int)4);
					var_61_int = var_23_float + (int)1;
					Sleep(var_61_int, var_24_bool);
					var_62_bool = var_24_bool == 0; //@nz
					if(var_62_bool != 0) {
						goto Label_151;
					}
					goto Label_140;
				}
				var_63_int = var_19_int;
				if(var_63_int == 0) goto Label_140;
				goto Label_151;
		}
		Label_140:
			var_54_bool = 0;
			func_154(var_54_bool);
			var_55_bool = var_54_bool == 0; //@nz
			if(var_55_bool != 0) {
				goto Label_151;
			}
			ResetAAS();
			var_19_int = var_19_int + (int)1;
			goto Label_89;

		}
	}
Label_151:
	ResetAAS();
	return 14;
	
}


func_1356(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	@@var_38_object:IsDead(var_40_bool);
	var_40_bool = var_37_bool;
	return 2;
}


func_717(var_290_bool)
{
	var_291_bool = 0;
	var_291_bool = 0;
	var_292_bool = 0;
	func_689(var_291_bool, var_292_bool);
	if(var_292_bool != 0) {
		var_309_bool = 0;
		func_733(var_290_bool, var_291_bool, var_309_bool);
		if(var_309_bool != 0) {
			var_291_bool = 1;
		}
	}
	if(var_291_bool != 0) {
		var_290_bool = 1;
		return 0;
	}
	var_290_bool = 0;
	return 0;
}


func_1615(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1361(var_26_bool, var_27_object)
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
		func_1356(var_37_bool, var_38_object);
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


func_1746()
{
	var_13_int = 0;
	func_1710(var_13_int);
	var_18_bool = var_13_int != (int)1;
	if(var_18_bool != 0) {
		return 0;
	}
	var_19_string = "";
	func_1729("liver");
	var_30_string = "";
	func_1729("kidney");
	var_31_string = "";
	func_1729("heart");
	var_32_string = "";
	func_1729("blood");
	return 0;
}


func_1621(var_41_cvector, var_42_cvector)
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


func_733(var_0_object, var_4_bool, var_309_bool)
{
	var_310_object = Obj(); var_311_bool = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_object = Obj(); var_316_bool = 0; var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0);
	GetScene(var_315_object);
	var_316_bool = 0;
	
Label_737:
	var_320_cvector = CVector(0,0,0); var_321_object = Obj();
	var_321_object = var_0_object;
	func_1259(var_320_cvector, var_321_object);
	var_326_int = -var_320_cvector;
	FindDirLength(var_317_float, var_326_int, var_4_bool);
	var_327_bool = var_317_float < var_4_bool;
	if(var_327_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_318_cvector);
		GetPFPosition(var_319_cvector);
		WaitForAnimEnd();
		func_821(var_319_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_316_bool = 1;
		var_331_bool = 0;
		func_689(var_319_cvector, var_331_bool);
		var_332_bool = var_331_bool == 0; //@nz
		if(var_332_bool != 0) {
			goto Label_775;
		}
		goto Label_737;
	}
Label_775:
	var_316_bool = var_309_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1245(var_417_string, var_418_int)
{
	var_420_bool = var_418_int == (int)2;
	if(var_420_bool != 0) {
		var_417_string = "fire";
		return 0;
	EMIT "GOTO 0x4e9";
	}
	var_422_bool = var_418_int == (int)1;
	if(var_422_bool != 0) {
		var_417_string = "bullet";
		return 0;
	}
	var_417_string = "phys";
	return 0;
}


func_1631(var_427_float, var_428_float, var_429_float)
{
	var_432_bool = var_428_float < var_429_float;
	if(var_432_bool != 0) {
		var_428_float = var_427_float;
	} else {
		var_429_float = var_427_float;
	}
	return 0;
	
}


func_482(var_0_object, var_1_object, var_338_bool, var_339_float)
{
	var_340_int = 0; var_341_bool = 0; var_342_int = 0; var_343_string = ""; var_344_int = 0; var_345_bool = 0; var_346_int = 0; var_347_string = "";
	func_821(var_347_string);
	irand(var_344_int, var_1_object);
	var_344_int = var_344_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1675();
	var_356_int = "attack_begin" + var_344_int;
	PlayAnimation("all", var_356_int);
	WaitForAnimEnd();
	func_789(var_346_int, var_347_string);
	var_372_bool = 0; var_373_object = Obj();
	var_373_object = var_0_object;
	func_1397(var_372_bool, var_373_object);
	var_374_bool = var_372_bool == 0; //@nz
	if(var_374_bool != 0) {
		StopAsync();
		var_338_bool = 0;
		return 8;
	}
	var_375_float = 0; var_376_int = 0;
	var_339_float = var_375_float;
	var_344_int = var_376_int;
	func_443(var_347_string, var_375_float, var_376_int);
	var_459_int = "attack_middle" + var_344_int;
	HasAnimation(var_345_bool, "all", var_459_int);
	var_460_bool = var_345_bool;
	if(var_460_bool != 0) {
		func_1675();
		var_463_int = "attack_middle" + var_344_int;
		PlayAnimation("all", var_463_int);
		WaitForAnimEnd();
		func_821(var_347_string);
		var_464_bool = 0; var_465_object = Obj();
		var_465_object = var_0_object;
		func_1397(var_464_bool, var_465_object);
		var_466_bool = var_464_bool == 0; //@nz
		if(var_466_bool != 0) {
			StopAsync();
			var_338_bool = 0;
			return 8;
		}
		var_467_float = 0; var_468_int = 0;
		var_339_float = var_467_float;
		var_344_int = var_468_int;
		func_443(var_347_string, var_467_float, var_468_int);
		var_346_int = 1;

	Label_559:
		var_470_int = "attack_middle" + var_344_int;
		var_472_int = var_470_int + "_";
		var_347_string = var_472_int + var_346_int;
		HasAnimation(var_345_bool, "all", var_347_string);
		var_474_bool = var_345_bool == 0; //@nz
		if(var_474_bool != 0) {
		} else {
			func_1675();
			PlayAnimation("all", var_347_string);
			WaitForAnimEnd();
			func_821(var_347_string);
			var_490_bool = 0; var_491_object = Obj();
			var_491_object = var_0_object;
			func_1397(var_490_bool, var_491_object);
			var_492_bool = var_490_bool == 0; //@nz
			if(var_492_bool != 0) {
				StopAsync();
				var_338_bool = 0;
				var_493_float = 0; var_494_int = 0;
				var_339_float = var_493_float;
				var_344_int = var_494_int;
				func_443(var_347_string, var_493_float, var_494_int);
				var_346_int = var_346_int + (int)1;
				goto Label_559;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_478_int = "attack_end" + var_344_int;
	PlayAnimation("all", var_478_int);
	var_479_bool = 0;
	func_835(var_479_bool);
	if(var_479_bool != 0) {
		var_480_bool = 0; var_481_float = 0;
		func_619(var_480_bool, (float)0.75);
		StopAsync();
	}
	var_338_bool = 1;
	return 8;
	
}


func_1122(var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_object = Obj(); var_43_bool = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = ""; var_52_object = Obj(); var_53_bool = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0);
	var_57_bool = var_36_object == 0; //@ne
	if(var_57_bool != 0) {
		var_58_string = "";
		func_1213("fdie");
	} else {
		@@var_36_object:GetPosition(var_47_cvector);
		GetPosition(var_48_cvector);
		GetDirection(var_49_cvector);
		var_50_cvector = var_48_cvector - var_47_cvector;
		var_90_float = GetByIndex(var_50_cvector, 0);
		var_91_float = GetByIndex(var_49_cvector, 0);
		var_92_float = var_90_float * var_91_float;
		var_93_float = GetByIndex(var_50_cvector, 2);
		var_94_float = GetByIndex(var_49_cvector, 2);
		var_95_float = var_93_float * var_94_float;
		var_96_int = var_92_float + var_95_float;
		var_98_bool = var_96_int >= (int)0;
		if(var_98_bool != 0) {
			var_51_string = "fdie";
		} else {
				var_51_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_36_object = var_52_object;
		var_101_bool = IsFuncExist(var_36_object, "GetScriptProperty", (int)2);
		if(var_101_bool != 0) {
			@@var_36_object:HasScriptProperty(var_53_bool, "Owner");
			var_103_bool = var_53_bool;
			if(var_103_bool != 0) {
				@@var_36_object:GetScriptProperty(var_52_object, "Owner");
				var_105_bool = var_52_object == 0; //@ne
				if(var_105_bool != 0) {
					var_36_object = var_52_object;
				}
			}
		}
		var_108_bool = IsFuncExist(var_52_object, "@GetEyesHeight", (int)1);
		if(var_108_bool != 0) {
			@@var_52_object:GetEyesHeight(var_55_float);
			var_56_cvector = CVector(0.0, 0.0, 0.0);
			var_109_float = GetByIndex(var_56_cvector, 1);
			var_55_float = var_109_float;
			SetByIndex(var_56_cvector, 1) = var_109_float;
			LookAsync(var_36_object, "head", var_56_cvector);
			var_54_bool = 1;
		} else {
			var_54_bool = 0;

		}
		var_111_string = "";
		var_51_string = var_111_string;
		func_1574(var_111_string);
		PlayAnimation("all", var_51_string);
		WaitForAnimEnd();
		var_113_bool = var_54_bool;
		if(var_113_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_51_string);
		RemoveEnvelope();
		var_52_object = 0;
	}
	return 20;
	
}


func_1638(var_437_float, var_438_float, var_439_float, var_440_float)
{
	var_441_bool = var_438_float < var_439_float;
	if(var_441_bool != 0) {
		var_439_float = var_437_float;
		return 0;
	}
	var_442_bool = var_438_float > var_440_float;
	if(var_442_bool != 0) {
		var_440_float = var_437_float;
		return 0;
	}
	var_438_float = var_437_float;
	return 0;
}


func_619(var_480_bool, var_481_float)
{
	var_482_float = 0; var_483_bool = 0; var_484_float = 0; var_485_bool = 0;
	rand(var_484_float);
	var_486_bool = var_484_float < var_481_float;
	if(var_486_bool != 0) {

	Label_624:
		IsAnimationPlaying(var_485_bool);
		var_487_bool = var_485_bool == 0; //@nz
		if(var_487_bool != 0) {
		} else {
			var_488_bool = 0;
			func_717(var_488_bool);
			if(var_488_bool != 0) {
				var_480_bool = 1;
				sync();
				goto Label_624;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_821(var_485_bool);
	}
	goto Label_644;
	
Label_644:
	var_480_bool = 0;
	return 4;
	
}


func_1259(var_43_cvector, var_44_object)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_44_object:GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
	return 4;
}


func_1649(var_445_float)
{
	var_446_object = Obj(); var_447_object = Obj();
	CreateFloatVector(var_447_object);
	@@var_447_object:add(var_445_float);
	var_449_bool = var_445_float < (int)0;
	if(var_449_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_447_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1266(var_144_bool, var_145_object)
{
	var_146_bool = 0; var_147_bool = 0;
	IsPlayerActor(var_145_object, var_147_bool);
	var_147_bool = var_144_bool;
	return 2;
}


func_1778(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	GetScene(var_12_object);
	func_1746();
	SetProperty("dead", (int)1);
	var_35_object = Obj();
	var_10_object = var_35_object;
	TaskCall(3);
	func_1097(var_35_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1397(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_23_object = var_27_object;
	func_1361(var_26_bool, var_27_object);
	var_43_bool = var_26_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_23_object = var_45_object;
	func_1271(var_44_bool, var_45_object, "noaccess");
	var_53_bool = var_44_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	@@var_23_object:GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == (int)0;
	return 2;
}


func_1271(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0;
	var_51_bool = IsFuncExist(var_45_object, "HasProperty", (int)2);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_44_bool = 0;
		return 2;
	}
	@@var_45_object:HasProperty(var_46_string, var_48_bool);
	var_48_bool = var_44_bool;
	return 2;
}


func_1533(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1421(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


