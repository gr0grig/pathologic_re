// @IMPORTS: Sleep/1,IsPlayerActor/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,SetVariable/2,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4
// @STRINGS: W:all|W:b1q04_dead|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle|W:idle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:b1q04_attack|A:RemoveStationaryActor
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_17: op=0x8 vars=object
// @EVENT_1: op=0x16 vars=object
// @EVENT_3: op=0x20 vars=object
// @TASK_1: vars= params=1
// @EVENT_0: op=0xa6 vars=object
// @EVENT_22: op=0x125 vars=object,int,float,float
// @EVENT_16: op=0x127 vars=object,string
// @EVENT_41: op=0x129 vars=object
// @TASK_2: vars=object,int,int,bool,float,int params=1
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_7: op=0x404 vars=int
// @EVENT_1: op=0x41f vars=object
// @EVENT_2: op=0x42e vars=object
// @EVENT_10: op=0x4b4 vars=object
// @EVENT_41: op=0x4bf vars=object
// @STANDALONE_EVENT_22: op=0x6ef vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x6f7 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x701 vars=object,string
// @STANDALONE_EVENT_41: op=0x70e vars=object
// @PE: 0x8,0x80,0x97,0x10b,0x125,0x127,0x129,0x12b,0x137,0x13a,0x3cb,0x404,0x41f,0x42e,0x4a2,0x4b4,0x4bf,0x4c8,0x4d3,0x66b,0x672,0x67d,0x6e7,0x6ef,0x6f7,0x70e,0x714,0x71b,0x727

	task_0_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_13_object)
	{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_1812(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_123();
		var_50_object = Obj();
		var_13_object = var_50_object;
		func_1819(var_50_object);
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
		func_1831(var_13_object);
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
		func_1723(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_1186(var_8_bool, var_9_int, var_17_int);
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
		func_1575(var_13_object);
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
	func_1042(var_9_object);
	var_9_object = Obj();
	func_1806();
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1477(var_13_object, var_14_int, var_15_float);
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
	func_1545(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1767(var_10_object);
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


func_1545(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1433(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_267(var_99_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_100_string = "";
	var_99_string = var_100_string;
	func_1586(var_100_string);
	PlayAnimation("all", var_99_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_99_string);
	RemoveEnvelope();
	return 0;
}


func_1295(var_404_float, var_405_object, var_406_float, var_407_int)
{
	var_411_int = 0; var_412_string = ""; var_413_int = 0; var_414_float = 0; var_415_float = 0; var_416_float = 0; var_417_int = 0; var_418_string = ""; var_419_int = 0; var_420_float = 0; var_421_float = 0; var_422_float = 0;
	var_423_bool = 0; var_424_object = Obj(); var_425_string = "";
	var_405_object = var_424_object;
	func_1261(var_423_bool, var_424_object, "health");
	var_426_bool = var_423_bool == 0; //@nz
	if(var_426_bool != 0) {
		var_404_float = 0.0;
		return 12;
	}
	var_427_bool = 0; var_428_object = Obj(); var_429_string = "";
	var_405_object = var_428_object;
	func_1261(var_427_bool, var_428_object, "armor");
	var_430_bool = var_427_bool == 0; //@nz
	if(var_430_bool != 0) {
		var_417_int = 0;
	} else {
			@@var_405_object:GetProperty("armor", var_417_int);
	}
	var_432_string = ""; var_433_int = 0;
	var_407_int = var_433_int;
	func_1235(var_432_string, var_433_int);
	var_418_string = "armor_" + var_432_string;
	var_438_bool = 0; var_439_object = Obj(); var_440_string = "";
	var_405_object = var_439_object;
	var_418_string = var_440_string;
	func_1261(var_438_bool, var_439_object, var_440_string);
	var_441_bool = var_438_bool == 0; //@nz
	if(var_441_bool != 0) {
		var_419_int = 0;
	} else {
		@@var_405_object:GetProperty(var_418_string, var_419_int);

	}
	var_442_float = 0; var_443_float = 0; var_444_float = 0;
	var_445_int = var_417_int + var_419_int;
	var_443_float = var_445_int / (float)100.0;
	func_1643(var_442_float, var_443_float, (float)1);
	var_442_float = var_420_float;
	@@var_405_object:GetProperty("health", var_421_float);
	var_450_int = (int)1 - var_420_float;
	var_422_float = var_406_float * var_450_int;
	var_452_float = 0; var_453_float = 0; var_454_float = 0; var_455_float = 0;
	var_453_float = var_421_float - var_422_float;
	func_1650(var_452_float, var_453_float, (float)0, (float)1);
	@@var_405_object:SetProperty("health", var_452_float);
	var_458_bool = 0; var_459_object = Obj();
	var_405_object = var_459_object;
	func_1256(var_458_bool, var_459_object);
	if(var_458_bool != 0) {
		var_460_float = 0;
		var_460_float = -var_422_float;
		func_1696(var_460_float);
	}
	var_422_float = var_404_float;
	return 12;
	
}


func_784(var_0_object, var_292_bool, var_293_float)
{
	var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0;
	
Label_785:
	IsAnimationPlaying(var_299_bool);
	var_304_bool = var_299_bool == 0; //@nz
	if(var_304_bool != 0) {
	} else {
		var_305_bool = 0;
		func_855(var_305_bool);
		if(var_305_bool != 0) {
			var_292_bool = 1;
			return 10;
		}
		var_348_bool = 0; var_349_object = Obj();
		var_349_object = var_0_object;
		func_1409(var_348_bool, var_349_object);
		var_350_bool = var_348_bool == 0; //@nz
		if(var_350_bool != 0) {
			var_292_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_300_cvector);
		GetPFPosition(var_301_cvector);
		var_302_cvector = var_300_cvector - var_301_cvector;
		var_303_float = var_302_cvector | var_302_cvector;
		var_351_float = var_293_float * var_293_float;
		var_352_bool = var_303_float < var_351_float;
		if(var_352_bool != 0) {
			var_353_bool = 0; var_354_float = 0;
			var_293_float = var_354_float;
			func_620(var_302_cvector, var_303_float, var_353_bool, var_354_float);
			var_292_bool = 1;
			sync();
			goto Label_785;
		}
		return 10;
	}
	func_959(var_303_float);
	var_292_bool = 0;
	return 10;
	
}


func_1042(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1208(var_9_object);
	return 0;
}


func_1812(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1409(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
	return 0;
}


func_1559(var_238_object)
{
	var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0);
	@@var_238_object:GetPosition(var_242_cvector);
	GetPosition(var_243_cvector);
	var_244_cvector = var_242_cvector - var_243_cvector;
	var_245_float = GetByIndex(var_244_cvector, 0);
	var_246_float = GetByIndex(var_244_cvector, 2);
	RotateAsync(var_245_float, var_246_float);
	return 6;
}


func_1819(var_50_object)
{
	var_51_object = Obj();
	var_50_object = var_51_object;
	func_1885(var_51_object);
	return 0;
}


func_1825(var_54_int)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("branch", var_56_int);
	var_56_int = var_54_int;
	return 2;
}


func_1570(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0;
	IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
	return 2;
}


func_546(var_1_object, var_2_int, var_4_bool)
{
	var_91_bool = 0; var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_548:
	var_100_int = var_1_object + (int)1;
	var_101_int = "attack_begin" + var_100_int;
	HasAnimation(var_94_bool, "all", var_101_int);
	var_102_bool = var_94_bool == 0; //@nz
	if(var_102_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_548;
	}
	var_2_int = 0;
	
Label_562:
	var_105_int = var_2_int + (int)1;
	var_106_int = "attack" + var_105_int;
	IsExisting3DSound(var_95_bool, var_106_int);
	var_107_bool = var_95_bool == 0; //@nz
	if(var_107_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_562;

	}
	GetAnimationOffset(var_96_cvector, "all", "bjump");
	var_110_float = GetByIndex(var_96_cvector, 2);
	var_4_bool = -var_110_float;
	return 6;
	
}


func_1831(var_13_object)
{
	var_14_int = 0;
	func_1825(var_14_int);
	var_19_bool = var_14_int == (int)1;
	if(var_19_bool != 0) {
		WorkWithCorpse(var_13_object);
	} else {
		Barter(var_13_object);
	}
	return 0;
	
}


func_1575(var_13_object)
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


func_42()
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_float = 0; var_23_bool = 0;
	WaitForAnimEnd();
	var_24_bool = 0;
	func_1570(var_24_bool);
	var_27_bool = var_24_bool == 0; //@nz
	if(var_27_bool != 0) {
		return 14;
	}
	func_1750((int)0);
	var_28_int = var_17_int;
	var_18_int = 0;
	
Label_56:
	var_41_bool = 0;
	var_41_bool = 0;
	var_43_bool = var_18_int < (int)5;
	if(var_43_bool != 0) {
		var_44_bool = 0;
		func_1570(var_44_bool);
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
			func_1743(var_50_string, var_51_int);
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


func_299(var_59_object)
{
	
Label_300:
	var_66_object = Obj(); var_67_bool = 0; var_68_float = 0;
	var_59_object = var_66_object;
	func_317(var_62_int, var_63_bool, var_64_float, var_65_int, var_59_object, var_66_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_300;
}
EMIT "Return(); Pop(0)";


func_1586(var_100_string)
{
	var_101_bool = 0; var_102_int = 0; var_103_bool = 0; var_104_int = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_bool = 0; var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
	IsExisting3DSound(var_109_bool, var_100_string);
	var_117_bool = var_109_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_110_int = 0;

	Label_1592:
		var_119_int = var_110_int + (int)1;
		var_120_int = var_100_string + var_119_int;
		IsExisting3DSound(var_111_bool, var_120_int);
		var_121_bool = var_111_bool == 0; //@nz
		if(var_121_bool != 0) {
		} else {
			var_110_int = var_110_int + (int)1;
			goto Label_1592;
		}
		var_122_bool = var_110_int == 0; //@nz
		if(var_122_bool != 0) {
			return 16;
		}
		irand(var_112_int, var_110_int);
		var_124_int = var_112_int + (int)1;
		var_100_string = var_100_string + var_124_int;
	}
	Is3DSoundLoaded(var_113_bool, var_100_string);
	var_125_bool = var_113_bool;
	if(var_125_bool != 0) {
		GetEyesHeight(var_114_float);
		GetDirection(var_115_cvector);
		var_116_cvector = var_115_cvector * (int)50;
		var_127_float = GetByIndex(var_116_cvector, 1);
		var_127_float = var_127_float + var_114_float;
		SetByIndex(var_116_cvector, 1) = var_127_float;
		PlayGlobalSound(var_100_string, var_116_cvector);
	}
	return 16;
	
}


func_1844(var_60_string)
{
	var_61_object = Obj(); var_62_int = 0; var_63_bool = 0; var_64_object = Obj(); var_65_int = 0; var_66_bool = 0;
	CreateInvItem(var_64_object);
	@@var_64_object:SetItemName(var_60_string);
	@@var_64_object:SetProperty("Organ", (int)1);
	@@var_64_object:GetItemID(var_65_int);
	AddItem(var_66_bool, var_64_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_311(var_401_float)
{
	var_401_float = 0.029999999329447746;
	return 0;
}


func_314(var_408_int)
{
	var_408_int = 0;
	return 0;
}


func_827(var_0_object, var_307_bool)
{
	var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_float = 0;
	var_318_bool = 0; var_319_object = Obj();
	var_319_object = var_0_object;
	func_1409(var_318_bool, var_319_object);
	var_320_bool = var_318_bool == 0; //@nz
	if(var_320_bool != 0) {
		var_307_bool = 0;
		return 10;
	}
	var_321_bool = 0;
	func_916(var_317_float, var_321_bool);
	if(var_321_bool != 0) {
		@@@var_0_object:GetPFPosition(var_313_cvector);
		GetPFPosition(var_314_cvector);
		var_315_cvector = var_313_cvector - var_314_cvector;
		var_316_float = var_315_cvector | var_315_cvector;
		@@@var_0_object:GetAttackDistance(var_317_float);
		var_317_float = var_317_float + (int)50;
		var_323_float = var_317_float * var_317_float;
		var_307_bool = var_316_float <= var_323_float;
		return 10;
	}
	var_307_bool = 0;
	return 10;
}


func_1084(var_0_object, var_1_object, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool)
{
	var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj();
	var_0_object = false;
	var_1_object = var_165_object;
	var_169_bool = var_179_bool;
	
Label_1088:
	var_186_bool = 0; var_187_object = Obj();
	var_165_object = var_187_object;
	func_1224(var_186_bool, var_187_object);
	var_190_bool = var_186_bool == 0; //@nz
	if(var_190_bool != 0) {
		var_164_bool = 0;
		return 16;
	}
	@@var_165_object:GetPosition(var_181_cvector);
	GetPosition(var_182_cvector);
	var_183_cvector = var_181_cvector - var_182_cvector;
	var_184_float = var_183_cvector | var_183_cvector;
	var_191_bool = 0;
	var_191_bool = 0;
	var_193_bool = var_167_float > (int)0;
	if(var_193_bool != 0) {
		var_194_float = var_167_float * var_167_float;
		var_195_bool = var_184_float > var_194_float;
		if(var_195_bool != 0) {
			var_191_bool = 1;
		}
	}
	if(var_191_bool != 0) {
		Stop();
		var_164_bool = 0;
		return 16;
	}
	var_196_float = var_166_float * var_166_float;
	var_197_bool = var_184_float > var_196_float;
	if(var_197_bool != 0) {
		@@var_165_object:GetPFPosition(var_181_cvector);
		FindPathTo(var_185_object, var_181_cvector);
		var_198_bool = var_185_object != 0; //@nn
		if(var_198_bool != 0) {
			var_185_object = var_180_object;
			var_185_object = 0;
		}
		var_199_bool = var_180_object != 0; //@nn
		if(var_199_bool != 0) {
			var_200_bool = var_179_bool;
			if(var_200_bool == 0) goto Label_1137;
			var_179_bool = 0;
			RotatePath(var_180_object, var_178_bool);
			var_201_bool = var_178_bool == 0; //@nz
			if(var_201_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_204_string = "";
				func_1231(var_204_string);
				var_205_string = "";
				func_1233(var_205_string);
				FollowPath(var_180_object, var_168_bool, var_178_bool, var_204_string, var_205_string);
				var_206_bool = var_178_bool == 0; //@nz
				if(var_206_bool != 0) {
					var_207_object = var_0_object;
					if(var_207_object != 0) {
						var_180_object = 0;
						goto Label_1184;
					EMIT "GOTO 0x485";
					}
				} else {
					var_180_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_178_bool);
					var_210_bool = var_178_bool == 0; //@nz
					if(var_210_bool != 0) {
						var_211_object = var_0_object;
						if(var_211_object != 0) {
							var_180_object = 0;
							goto Label_1184;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1184;
	}
			var_185_object = 0;
			goto Label_1182;

		Label_1182:
			var_180_object = 0;

		}
		goto Label_1088;
	}
Label_1184:
	var_164_bool = !var_0_object;
	return 16;
	
}


func_317(var_0_object, var_3_int, var_5_float, var_66_object, var_67_bool, var_68_float, var_141_bool, var_233_bool)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_float = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_float = 0;
	func_546(var_88_cvector, var_89_bool, var_90_float);
	var_5_float = 0;
	var_115_bool = IsFuncExist(var_66_object, "@GetAttackDistance", (int)1);
	if(var_115_bool != 0) {
		@@var_66_object:GetAttackDistance(var_80_float);
		var_80_float = var_80_float + (int)50;
	} else {
							var_68_float = var_80_float;
	}
	var_118_bool = var_80_float >= (int)150;
	if(var_118_bool != 0) {
		var_80_float = 150;
	}
	var_3_int = false;
	var_0_object = var_66_object;
	IsPlayerActor(var_0_object, var_83_bool);
	var_119_bool = var_83_bool;
	if(var_119_bool != 0) {
		PlayGlobalMusic("attack");
		var_121_object = Obj();
		func_1627(var_121_object);
		SendPlayerEnemy(var_66_object, var_121_object);
	}
	var_122_bool = var_67_bool;
	if(var_122_bool != 0) {
		var_84_bool = 0;
	} else {
						var_84_bool = 1;

	}
	var_85_float = (float)400.0 + var_80_float;
	
Label_357:
	var_124_bool = 0;
	var_124_bool = 0;
	var_125_bool = 0; var_126_object = Obj();
	var_126_object = var_0_object;
	func_1409(var_125_bool, var_126_object);
	if(var_125_bool != 0) {
		var_127_bool = var_3_int == 0; //@nz
		if(var_127_bool != 0) {
			var_124_bool = 1;
		}
	}
	if(var_124_bool != 0) {
		func_959(var_90_float);
		@@@var_0_object:GetPFPosition(var_81_cvector);
		GetPFPosition(var_82_cvector);
		var_86_cvector = var_81_cvector - var_82_cvector;
		var_87_float = var_86_cvector | var_86_cvector;
		var_133_float = var_85_float * var_85_float;
		var_134_bool = var_87_float >= var_133_float;
		if(var_134_bool != 0) {
			var_135_bool = 0; var_136_object = Obj(); var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_bool = 0;
			var_136_object = var_0_object;
			var_80_float = var_137_float;
			TaskCall(3);
			func_979(var_143_bool, var_135_bool, var_136_object, var_137_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_218_bool = var_141_bool == 0; //@nz
			if(var_218_bool != 0) {
			} else {
				var_84_bool = 0;
		} else {
				var_224_float = var_68_float * var_68_float;
				var_225_bool = var_87_float >= var_224_float;
				if(var_225_bool != 0) {
					@@@var_0_object:GetPFPosition(var_88_cvector);
					CanReachByPF(var_89_bool, var_88_cvector);
					var_226_bool = var_89_bool == 0; //@nz
					if(var_226_bool != 0) {
						var_227_bool = 0; var_228_object = Obj(); var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_bool = 0;
						var_228_object = var_0_object;
						var_80_float = var_229_float;
						TaskCall(3);
						func_979(var_235_bool, var_227_bool, var_228_object, var_229_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_236_bool = var_233_bool == 0; //@nz
						if(var_236_bool != 0) {
							goto Label_529;
						}
						var_84_bool = 0;
						goto Label_357;
					}
					var_237_bool = var_84_bool == 0; //@nz
					if(var_237_bool != 0) {
						var_238_object = Obj();
						var_238_object = var_0_object;
						func_1559(var_238_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_959(var_90_float);
						StopAsync();
						var_84_bool = 1;
						var_249_bool = 0; var_250_object = Obj();
						var_250_object = var_0_object;
						func_1409(var_249_bool, var_250_object);
						var_251_bool = var_249_bool == 0; //@nz
						if(var_251_bool != 0) {
							goto Label_529;
						}
					}
					rand(var_90_float);
					var_252_bool = 0;
					var_254_bool = var_90_float < (float)0.25;
					if(var_254_bool != 1) {
						var_255_bool = 0;
						func_916((bool)1, var_255_bool);
						if(var_255_bool != 1) {
							var_252_bool = 0;
						}
					}
					if(var_252_bool != 0) {
						Face(var_0_object);
						func_966();
						PlayAnimation("all", "attack_stay");
						var_292_bool = 0; var_293_float = 0;
						var_68_float = var_293_float;
						func_784(var_90_float, var_292_bool, var_293_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_959(var_90_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_514_bool = 0;
						func_916(var_90_float, var_514_bool);
						var_515_bool = var_514_bool == 0; //@nz
						if(var_515_bool == 0) goto Label_519;
						var_516_bool = 0; var_517_object = Obj();
						var_517_object = var_0_object;
						func_1409(var_516_bool, var_517_object);
						var_518_bool = var_516_bool == 0; //@nz
						if(var_518_bool != 0) {
							goto Label_529;
						}
						@@@var_0_object:GetPFPosition(var_81_cvector);
						GetPFPosition(var_82_cvector);
						var_86_cvector = var_81_cvector - var_82_cvector;
						var_87_float = var_86_cvector | var_86_cvector;
						var_519_float = var_68_float * var_68_float;
						var_520_bool = var_87_float < var_519_float;
						if(var_520_bool == 0) goto Label_519;
						var_521_bool = 0; var_522_float = 0;
						var_68_float = var_522_float;
						func_620(var_89_bool, var_90_float, var_521_bool, var_522_float);
						var_523_bool = var_521_bool == 0; //@nz
						if(var_523_bool == 0) goto Label_519;
						goto Label_529;
				}
					var_524_bool = 0; var_525_float = 0;
					var_68_float = var_525_float;
					func_620(var_89_bool, var_90_float, var_524_bool, var_525_float);
					var_526_bool = var_524_bool == 0; //@nz
					if(var_526_bool != 0) {
						goto Label_529;
					}
					var_84_bool = 1;

				}
			Label_519:
				goto Label_528;
		}
		Label_528:
			goto Label_357;

		}
	}
Label_529:
	WaitForAnimEnd();
	var_219_int = var_3_int;
	if(var_219_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_222_bool = var_83_bool;
	if(var_222_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1861()
{
	var_54_int = 0;
	func_1825(var_54_int);
	var_59_bool = var_54_int != (int)1;
	if(var_59_bool != 0) {
		return 0;
	}
	var_60_string = "";
	func_1844("liver");
	var_71_string = "";
	func_1844("kidney");
	var_72_string = "";
	func_1844("heart");
	var_73_string = "";
	func_1844("blood");
	return 0;
}


func_581(var_0_object, var_390_float, var_391_int)
{
	var_392_object = Obj(); var_393_float = 0; var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_float = 0;
	var_399_float = var_390_float * (float)0.8999999761581421;
	GetVictim(var_399_float, var_395_object);
	ReportAttack(var_0_object);
	var_400_bool = var_395_object == var_0_object;
	if(var_400_bool != 0) {
		var_401_float = 0; var_402_object = Obj(); var_403_int = 0;
		var_395_object = var_402_object;
		var_391_int = var_403_int;
		func_311(var_403_int);
		var_401_float = var_396_float;
		var_404_float = 0; var_405_object = Obj(); var_406_float = 0; var_407_int = 0;
		var_395_object = var_405_object;
		var_396_float = var_406_float;
		var_408_int = 0; var_409_object = Obj(); var_410_int = 0;
		var_395_object = var_409_object;
		var_391_int = var_410_int;
		func_314(var_410_int);
		var_408_int = var_407_int;
		func_1295(var_404_float, var_405_object, var_406_float, var_407_int);
		var_404_float = var_397_float;
		var_469_int = 0;
		func_964(var_469_int);
		ReportHit(var_0_object, var_469_int, var_397_float, var_396_float);
		var_470_object = Obj(); var_471_float = 0;
		var_395_object = var_470_object;
		var_397_float = var_471_float;
		func_971();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_855(var_305_bool)
{
	var_306_bool = 0;
	var_306_bool = 0;
	var_307_bool = 0;
	func_827(var_306_bool, var_307_bool);
	if(var_307_bool != 0) {
		var_324_bool = 0;
		func_871(var_305_bool, var_306_bool, var_324_bool);
		if(var_324_bool != 0) {
			var_306_bool = 1;
		}
	}
	if(var_306_bool != 0) {
		var_305_bool = 1;
		return 0;
	}
	var_305_bool = 0;
	return 0;
}


func_1368(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	@@var_38_object:IsDead(var_40_bool);
	var_40_bool = var_37_bool;
	return 2;
}


func_1627(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj();
	self(var_58_object);
	var_58_object = var_56_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1373(var_26_bool, var_27_object)
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
		func_1368(var_37_bool, var_38_object);
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


func_1885(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	SetVariable("b1q04_attack", (int)1);
	GetScene(var_53_object);
	var_56_object = Obj();
	func_1627(var_56_object);
	@@var_53_object:RemoveStationaryActor(var_56_object);
	var_59_object = Obj();
	var_51_object = var_59_object;
	TaskCall(2);
	func_299(var_59_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1633(var_41_cvector, var_42_cvector)
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


func_871(var_0_object, var_4_bool, var_324_bool)
{
	var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_object = Obj(); var_331_bool = 0; var_332_float = 0; var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0);
	GetScene(var_330_object);
	var_331_bool = 0;
	
Label_875:
	var_335_cvector = CVector(0,0,0); var_336_object = Obj();
	var_336_object = var_0_object;
	func_1249(var_335_cvector, var_336_object);
	var_341_int = -var_335_cvector;
	FindDirLength(var_332_float, var_341_int, var_4_bool);
	var_342_bool = var_332_float < var_4_bool;
	if(var_342_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_333_cvector);
		GetPFPosition(var_334_cvector);
		WaitForAnimEnd();
		func_959(var_334_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_331_bool = 1;
		var_346_bool = 0;
		func_827(var_334_cvector, var_346_bool);
		var_347_bool = var_346_bool == 0; //@nz
		if(var_347_bool != 0) {
			goto Label_913;
		}
		goto Label_875;
	}
Label_913:
	var_331_bool = var_324_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1643(var_442_float, var_443_float, var_444_float)
{
	var_447_bool = var_443_float < var_444_float;
	if(var_447_bool != 0) {
		var_443_float = var_442_float;
	} else {
		var_444_float = var_442_float;
	}
	return 0;
	
}


func_620(var_0_object, var_1_object, var_353_bool, var_354_float)
{
	var_355_int = 0; var_356_bool = 0; var_357_int = 0; var_358_string = ""; var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_string = "";
	func_959(var_362_string);
	irand(var_359_int, var_1_object);
	var_359_int = var_359_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1732();
	var_371_int = "attack_begin" + var_359_int;
	PlayAnimation("all", var_371_int);
	WaitForAnimEnd();
	func_927(var_361_int, var_362_string);
	var_387_bool = 0; var_388_object = Obj();
	var_388_object = var_0_object;
	func_1409(var_387_bool, var_388_object);
	var_389_bool = var_387_bool == 0; //@nz
	if(var_389_bool != 0) {
		StopAsync();
		var_353_bool = 0;
		return 8;
	}
	var_390_float = 0; var_391_int = 0;
	var_354_float = var_390_float;
	var_359_int = var_391_int;
	func_581(var_362_string, var_390_float, var_391_int);
	var_474_int = "attack_middle" + var_359_int;
	HasAnimation(var_360_bool, "all", var_474_int);
	var_475_bool = var_360_bool;
	if(var_475_bool != 0) {
		func_1732();
		var_478_int = "attack_middle" + var_359_int;
		PlayAnimation("all", var_478_int);
		WaitForAnimEnd();
		func_959(var_362_string);
		var_479_bool = 0; var_480_object = Obj();
		var_480_object = var_0_object;
		func_1409(var_479_bool, var_480_object);
		var_481_bool = var_479_bool == 0; //@nz
		if(var_481_bool != 0) {
			StopAsync();
			var_353_bool = 0;
			return 8;
		}
		var_482_float = 0; var_483_int = 0;
		var_354_float = var_482_float;
		var_359_int = var_483_int;
		func_581(var_362_string, var_482_float, var_483_int);
		var_361_int = 1;

	Label_697:
		var_485_int = "attack_middle" + var_359_int;
		var_487_int = var_485_int + "_";
		var_362_string = var_487_int + var_361_int;
		HasAnimation(var_360_bool, "all", var_362_string);
		var_489_bool = var_360_bool == 0; //@nz
		if(var_489_bool != 0) {
		} else {
			func_1732();
			PlayAnimation("all", var_362_string);
			WaitForAnimEnd();
			func_959(var_362_string);
			var_505_bool = 0; var_506_object = Obj();
			var_506_object = var_0_object;
			func_1409(var_505_bool, var_506_object);
			var_507_bool = var_505_bool == 0; //@nz
			if(var_507_bool != 0) {
				StopAsync();
				var_353_bool = 0;
				var_508_float = 0; var_509_int = 0;
				var_354_float = var_508_float;
				var_359_int = var_509_int;
				func_581(var_362_string, var_508_float, var_509_int);
				var_361_int = var_361_int + (int)1;
				goto Label_697;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_493_int = "attack_end" + var_359_int;
	PlayAnimation("all", var_493_int);
	var_494_bool = 0;
	func_973(var_494_bool);
	if(var_494_bool != 0) {
		var_495_bool = 0; var_496_float = 0;
		func_757(var_495_bool, (float)0.75);
		StopAsync();
	}
	var_353_bool = 1;
	return 8;
	
}


func_1650(var_45_float, var_46_float, var_47_float, var_48_float)
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


func_121(var_53_bool)
{
	var_53_bool = 1;
	return 0;
}


func_123()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1661(var_16_bool, var_17_object, var_18_float)
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
			goto Label_1682;
		}
		var_16_bool = 0;
		return 0;
	}
Label_1682:
	var_23_float = 0;
	var_18_float = var_23_float;
	func_1713(var_23_float);
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0;
	var_17_object = var_28_object;
	var_18_float = var_30_float;
	func_1273(var_27_bool, var_28_object, "reputation", var_30_float, (float)0, (float)1);
	var_16_bool = 1;
	return 0;
	
}


func_128(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1256(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		var_16_bool = 0; var_17_object = Obj(); var_18_float = 0;
		var_11_object = var_17_object;
		func_1661(var_16_bool, var_17_object, (float)0.0);
	}
	func_1861();
	SetVariable("b1q04_dead", (int)1);
	var_76_object = Obj();
	var_11_object = var_76_object;
	func_151(var_76_object);
	return 0;
}


func_1409(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_23_object = var_27_object;
	func_1373(var_26_bool, var_27_object);
	var_43_bool = var_26_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_23_object = var_45_object;
	func_1261(var_44_bool, var_45_object, "noaccess");
	var_53_bool = var_44_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	@@var_23_object:GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == (int)0;
	return 2;
}


func_916(var_0_object, var_255_bool)
{
	var_256_bool = 0; var_257_bool = 0;
	var_260_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_260_bool != 0) {
		@@@var_0_object:IsAttacking(var_257_bool);
		var_257_bool = var_255_bool;
		return 2;
	}
	var_255_bool = 0;
	return 2;
}


func_151(var_76_object)
{
	EventDisable(0);
	var_77_object = Obj();
	var_76_object = var_77_object;
	func_176(var_77_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_162:
	Hold();
	goto Label_162;
}
EMIT "Return(); Pop(0)";


func_1433(var_26_object)
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


func_927(var_2_int, var_5_float)
{
	var_372_float = 0; var_373_int = 0; var_374_float = 0; var_375_int = 0;
	var_376_bool = var_2_int == 0; //@nz
	if(var_376_bool != 0) {
		return 4;
	}
	var_377_float = var_5_float;
	if(var_377_float != 0) {
		var_5_float = var_5_float + (int)-1;
		var_380_bool = var_5_float > (int)0;
		if(var_380_bool != 0) {
			return 4;
		}
	}
	rand(var_374_float);
	var_381_float = 0;
	func_977(var_381_float);
	var_382_bool = var_374_float < var_381_float;
	if(var_382_bool != 0) {
		irand(var_375_int, var_2_int);
		var_375_int = var_375_int + (int)1;
		var_385_int = "attack" + var_375_int;
		Speak(var_385_int);
		var_386_int = 0;
		func_975(var_386_int);
		var_5_float = var_386_int;
	}
	return 4;
}


func_1696(var_460_float)
{
	var_461_object = Obj(); var_462_object = Obj();
	CreateFloatVector(var_462_object);
	@@var_462_object:add(var_460_float);
	var_464_bool = var_460_float < (int)0;
	if(var_464_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_462_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1186(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_1224(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_176(var_77_object)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_string = ""; var_83_object = Obj(); var_84_bool = 0; var_85_bool = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_string = ""; var_93_object = Obj(); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0);
	var_98_bool = var_77_object == 0; //@ne
	if(var_98_bool != 0) {
		var_99_string = "";
		func_267("fdie");
	} else {
		@@var_77_object:GetPosition(var_88_cvector);
		GetPosition(var_89_cvector);
		GetDirection(var_90_cvector);
		var_91_cvector = var_89_cvector - var_88_cvector;
		var_131_float = GetByIndex(var_91_cvector, 0);
		var_132_float = GetByIndex(var_90_cvector, 0);
		var_133_float = var_131_float * var_132_float;
		var_134_float = GetByIndex(var_91_cvector, 2);
		var_135_float = GetByIndex(var_90_cvector, 2);
		var_136_float = var_134_float * var_135_float;
		var_137_int = var_133_float + var_136_float;
		var_139_bool = var_137_int >= (int)0;
		if(var_139_bool != 0) {
			var_92_string = "fdie";
		} else {
				var_92_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_77_object = var_93_object;
		var_142_bool = IsFuncExist(var_77_object, "GetScriptProperty", (int)2);
		if(var_142_bool != 0) {
			@@var_77_object:HasScriptProperty(var_94_bool, "Owner");
			var_144_bool = var_94_bool;
			if(var_144_bool != 0) {
				@@var_77_object:GetScriptProperty(var_93_object, "Owner");
				var_146_bool = var_93_object == 0; //@ne
				if(var_146_bool != 0) {
					var_77_object = var_93_object;
				}
			}
		}
		var_149_bool = IsFuncExist(var_93_object, "@GetEyesHeight", (int)1);
		if(var_149_bool != 0) {
			@@var_93_object:GetEyesHeight(var_96_float);
			var_97_cvector = CVector(0.0, 0.0, 0.0);
			var_150_float = GetByIndex(var_97_cvector, 1);
			var_96_float = var_150_float;
			SetByIndex(var_97_cvector, 1) = var_150_float;
			LookAsync(var_77_object, "head", var_97_cvector);
			var_95_bool = 1;
		} else {
			var_95_bool = 0;

		}
		var_152_string = "";
		var_92_string = var_152_string;
		func_1586(var_152_string);
		PlayAnimation("all", var_92_string);
		WaitForAnimEnd();
		var_154_bool = var_95_bool;
		if(var_154_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_92_string);
		RemoveEnvelope();
		var_93_object = 0;
	}
	return 20;
	
}


func_1713(var_23_float)
{
	var_24_object = Obj(); var_25_object = Obj();
	CreateFloatVector(var_25_object);
	@@var_25_object:add(var_23_float);
	SendWorldWndMessage((int)16, var_25_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1208(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1723(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsPlayerActor(var_12_object, var_14_bool);
	var_15_bool = var_14_bool;
	if(var_15_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_959(var_0_object)
{
	var_128_object = Obj();
	var_128_object = var_0_object;
	func_1723(var_128_object);
	return 0;
}


func_964(var_469_int)
{
	var_469_int = 0;
	return 0;
}


func_1732()
{
	var_365_object = Obj(); var_366_object = Obj();
	GetScene(var_366_object);
	var_368_object = Obj();
	func_1627(var_368_object);
	BroadcastMessage("battle", var_368_object, var_366_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_966()
{
	var_261_string = "";
	func_1586("attack_stay");
	return 0;
}


func_1477(var_13_object, var_14_int, var_15_float)
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
		func_1249(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1633(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1506:
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
			goto Label_1506;
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
			func_1545(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1433(var_103_object);
	return 18;
	
}


func_1224(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_1409(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
	return 0;
}


func_971()
{
	return 0;
}


func_973(var_494_bool)
{
	var_494_bool = 1;
	return 0;
}


func_1743(var_34_string, var_35_int)
{
	var_36_string = ""; var_37_string = "";
	var_38_int = var_35_int;
	if(var_38_int != 0) {
		"idle" = "idle" + var_35_int;
	}
	var_37_string = var_34_string;
	return 2;
}


func_975(var_386_int)
{
	var_386_int = 1;
	return 0;
}


func_977(var_381_float)
{
	var_381_float = 0.5;
	return 0;
}


func_1231(var_204_string)
{
	var_204_string = "walk";
	return 0;
}


func_979(var_2_int, var_135_bool, var_136_object, var_137_float, var_138_float, var_139_bool, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0;
	var_148_object = Obj();
	var_136_object = var_148_object;
	func_1723(var_148_object);
	SetTimer((int)1, (int)5);
	CanSee(var_146_bool, var_136_object);
	var_151_bool = var_146_bool;
	if(var_151_bool != 0) {
		var_2_int = true;
		var_152_object = Obj();
		var_136_object = var_152_object;
		func_1575(var_152_object);
	} else {
		var_2_int = false;
	}
	var_159_bool = 0; var_160_object = Obj();
	var_136_object = var_160_object;
	func_1256(var_159_bool, var_160_object);
	if(var_159_bool != 0) {
		var_163_object = Obj();
		func_1627(var_163_object);
		SendPlayerEnemy(var_136_object, var_163_object);
	}
	var_164_bool = 0; var_165_object = Obj(); var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_bool = 0;
	var_136_object = var_165_object;
	var_137_float = var_166_float;
	var_138_float = var_167_float;
	var_139_bool = var_168_bool;
	var_140_bool = var_169_bool;
	func_1084(var_146_bool, var_147_bool, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool);
	var_164_bool = var_147_bool;
	var_215_int = var_2_int;
	if(var_215_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_147_bool = var_135_bool;
	return 4;
	
}


func_1233(var_205_string)
{
	var_205_string = "run";
	return 0;
}


func_1235(var_432_string, var_433_int)
{
	var_435_bool = var_433_int == (int)2;
	if(var_435_bool != 0) {
		var_432_string = "fire";
		return 0;
	EMIT "GOTO 0x4df";
	}
	var_437_bool = var_433_int == (int)1;
	if(var_437_bool != 0) {
		var_432_string = "bullet";
		return 0;
	}
	var_432_string = "phys";
	return 0;
}


func_1750(var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0;
	var_31_int = 0;
	
Label_1752:
	var_34_string = ""; var_35_int = 0;
	var_31_int = var_35_int;
	func_1743(var_34_string, var_35_int);
	HasAnimation(var_32_bool, "all", var_34_string);
	var_39_bool = var_32_bool == 0; //@nz
	if(var_39_bool != 0) {
	} else {
		var_31_int = var_31_int + (int)1;
		goto Label_1752;
	}
	var_31_int = var_28_int;
	return 4;
	
}


func_1249(var_43_cvector, var_44_object)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_44_object:GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
	return 4;
}


func_1767(var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	TaskCall(1);
	func_128(var_11_object);
	TaskReturn();
	return 0;
}


func_1256(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
	return 2;
}


func_1261(var_35_bool, var_36_object, var_37_string)
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


func_757(var_495_bool, var_496_float)
{
	var_497_float = 0; var_498_bool = 0; var_499_float = 0; var_500_bool = 0;
	rand(var_499_float);
	var_501_bool = var_499_float < var_496_float;
	if(var_501_bool != 0) {

	Label_762:
		IsAnimationPlaying(var_500_bool);
		var_502_bool = var_500_bool == 0; //@nz
		if(var_502_bool != 0) {
		} else {
			var_503_bool = 0;
			func_855(var_503_bool);
			if(var_503_bool != 0) {
				var_495_bool = 1;
				sync();
				goto Label_762;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_959(var_500_bool);
	}
	goto Label_782;
	
Label_782:
	var_495_bool = 0;
	return 4;
	
}


func_1273(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_28_object = var_36_object;
	var_29_string = var_37_string;
	func_1261(var_35_bool, var_36_object, var_37_string);
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
	func_1650(var_45_float, var_46_float, var_47_float, var_48_float);
	@@var_28_object:SetProperty(var_29_string, var_45_float);
	var_27_bool = 1;
	return 2;
}


