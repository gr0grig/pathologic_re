// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SetTimer/2,CanSee/2,SendPlayerEnemy/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetAnimationOffset/3,FindLongestDir/6,SetDirection/1,irand/2,IsPlayerActor/2,PlayGlobalMusic/1,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,rand/2,GetRandomPFPointInCircle/4,FollowPath/3,GetCameraFarDistance/1,StopGroup0/0,FindShiftedPathTo/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateObjectSet/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|A:GetPFPosition|W:walk|W:run|W:jump1|W:jump2|W:jump|W:@GetAttackDistance|A:GetAttackDistance|W:attack|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:revolver_ammo|W:samopal_ammo|W:rifle_ammo|W:lockpick|W:hunter_mark|W:idle|A:in
// @GLOBALS: 0:object:
// @RUN_OP: 0x4b4
// @RUN_TASK: 3
// @TASK_0: vars= params=1
// @EVENT_0: op=0x1b vars=object
// @EVENT_22: op=0x9a vars=object,int,float,float
// @EVENT_16: op=0x9c vars=object,string
// @EVENT_41: op=0x9e vars=object
// @TASK_1: vars=bool,object,bool params=6
// @EVENT_17: op=0xa0 vars=object
// @EVENT_7: op=0xd7 vars=int
// @EVENT_1: op=0xf2 vars=object
// @EVENT_2: op=0x101 vars=object
// @EVENT_10: op=0x187 vars=object
// @EVENT_41: op=0x192 vars=object
// @TASK_2: vars=object,int,int,bool,float,int,bool params=2
// @EVENT_17: op=0x1b4 vars=object
// @TASK_3: vars=bool,bool params=0
// @EVENT_1: op=0x4bc vars=object
// @EVENT_3: op=0x4ca vars=object
// @EVENT_17: op=0x4d8 vars=object
// @EVENT_10: op=0x52c vars=object
// @EVENT_28: op=0x530 vars=
// @EVENT_41: op=0x53a vars=object
// @TASK_4: vars= params=0
// @EVENT_1: op=0x54b vars=object
// @EVENT_3: op=0x559 vars=object
// @EVENT_17: op=0x567 vars=object
// @STANDALONE_EVENT_22: op=0x8ab vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x8b3 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x8bd vars=object,string
// @STANDALONE_EVENT_41: op=0x8ca vars=object
// @PE: 0x0,0xc,0x80,0x9a,0x9c,0x9e,0xa0,0xd7,0xf2,0x101,0x175,0x187,0x192,0x19b,0x1a6,0x1ae,0x1b1,0x1b4,0x4ae,0x4b4,0x4bc,0x4ca,0x4d8,0x52c,0x53a,0x54b,0x559,0x567,0x5d1,0x774,0x77b,0x783,0x79e,0x7ff,0x883,0x8ab,0x8b3,0x8ca,0x911,0x917,0x91e,0x924,0x93c

task_0_event_0(var_0_object, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsOverrideActive(var_14_bool);
	var_15_bool = var_14_bool == 0; //@nz
	if(var_15_bool != 0) {
		var_16_object = Obj();
		var_12_bool = var_16_object;
		func_2047(var_16_object);
	}
	return 2;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_bool, var_15_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_bool, var_13_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	return 0;
}


task_1_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_object = Obj();
	var_12_bool = var_13_object;
	func_2351(var_13_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)1;
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_15_object = var_1_object;
		func_2021(var_15_object);
	} else {
		var_20_int = 0;
		var_12_bool = var_20_int;
		func_373(var_11_bool, var_12_bool, var_20_int);
	}
	return 0;
	
}


task_1_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_1_object == var_12_bool;
	if(var_14_bool != 0) {
		var_15_bool = var_2_bool == 0; //@nz
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_2_bool = true;
		var_16_object = Obj();
		var_12_bool = var_16_object;
		func_1829(var_16_object);
	}
	return 0;
}


task_1_event_2(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_1_object == var_12_bool;
	if(var_14_bool != 0) {
		var_15_bool = var_2_bool;
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	RequestClearPath(var_12_bool);
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	func_229(var_12_bool);
	var_12_bool = Obj();
	func_2250();
	return 0;
}


task_2_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_bool)
{
	var_13_object = Obj();
	var_12_bool = var_13_object;
	func_2351(var_13_object);
	return 0;
}


task_3_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_2327(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_1331(var_11_bool, var_12_object);
		var_23_object = Obj();
		var_12_object = var_23_object;
		func_2334(var_23_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_2299(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_1331(var_11_bool, var_12_object);
		var_37_object = Obj();
		var_12_object = var_37_object;
		func_2321(var_37_object);
	}
	return 0;
}


task_3_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1663(var_13_bool, var_14_object);
	var_47_bool = var_13_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_48_object = Obj();
		var_12_object = var_48_object;
		func_2351(var_48_object);
		return 0;
	}
	func_1331(var_11_bool, var_12_object);
	var_55_object = Obj();
	var_12_object = var_55_object;
	func_2364(var_55_object);
	return 0;
}


task_3_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object);
	return 0;
}


task_3_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool)
{
	Stop();
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	func_1331(var_11_bool, var_12_object);
	var_12_object = Obj();
	func_2250();
	return 0;
}


task_4_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_2327(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_1484();
		var_23_object = Obj();
		var_12_object = var_23_object;
		func_2334(var_23_object);
	}
	return 0;
}


task_4_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_2299(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_1484();
		var_37_object = Obj();
		var_12_object = var_37_object;
		func_2321(var_37_object);
	}
	return 0;
}


task_4_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1663(var_13_bool, var_14_object);
	var_47_bool = var_13_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_48_object = Obj();
		var_12_object = var_48_object;
		func_2351(var_48_object);
		return 0;
	}
	func_1484();
	var_55_object = Obj();
	var_12_object = var_55_object;
	func_2364(var_55_object);
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0;
	var_12_object = var_16_object;
	var_13_int = var_17_int;
	var_14_float = var_18_float;
	func_1731(var_16_object, var_17_int, var_18_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_12_object = var_18_object;
	var_13_int = var_19_int;
	var_14_float = var_20_float;
	var_16_cvector = var_21_cvector;
	var_17_cvector = var_22_cvector;
	func_1799(var_20_float, var_21_cvector, var_22_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0;
	var_17_bool = var_13_string == "health";
	if(var_17_bool != 0) {
		GetProperty("health", var_15_float);
		var_20_bool = var_15_float <= (int)0;
		if(var_20_bool != 0) {
			SignalDeath(var_12_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_2179(var_13_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool)
{
	func_2280();
	
Label_1207:
	func_1260(var_10_bool, var_11_bool);
	goto Label_1207;
}
EMIT "Return(); Pop(0)";


func_0(var_71_object)
{
	func_2132();
	func_2108();
	var_137_object = Obj();
	var_71_object = var_137_object;
	func_12(var_137_object);
	return 0;
}


func_2060(var_77_int, var_78_int)
{
	var_79_int = 0; var_80_bool = 0; var_81_int = 0; var_82_bool = 0;
	var_83_bool = var_77_int > var_78_int;
	if(var_83_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_81_int = 0;
	var_85_bool = var_77_int != var_78_int;
	if(var_85_bool != 0) {
		var_86_int = var_78_int - var_77_int;
		irand(var_81_int, var_86_int);
	} else {
		var_95_bool = var_77_int == (int)0;
		if(var_95_bool == 0) goto Label_2078;
		return 4;
	}
Label_2078:
	var_81_int = var_81_int + var_77_int;
	var_88_bool = var_81_int == (int)0;
	if(var_88_bool != 0) {
		return 4;
	}
	var_89_int = 0; var_90_string = "";
	func_2174(var_89_int, "Money");
	AddItem(var_82_bool, var_89_int, (int)0, var_81_int);
	return 4;
	
}


func_1549(var_406_float, var_407_object, var_408_float, var_409_int)
{
	var_413_int = 0; var_414_string = ""; var_415_int = 0; var_416_float = 0; var_417_float = 0; var_418_float = 0; var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0;
	var_425_bool = 0; var_426_object = Obj(); var_427_string = "";
	var_407_object = var_426_object;
	func_1515(var_425_bool, var_426_object, "health");
	var_428_bool = var_425_bool == 0; //@nz
	if(var_428_bool != 0) {
		var_406_float = 0.0;
		return 12;
	}
	var_429_bool = 0; var_430_object = Obj(); var_431_string = "";
	var_407_object = var_430_object;
	func_1515(var_429_bool, var_430_object, "armor");
	var_432_bool = var_429_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_419_int = 0;
	} else {
			@@var_407_object:GetProperty("armor", var_419_int);
	}
	var_434_string = ""; var_435_int = 0;
	var_409_int = var_435_int;
	func_1489(var_434_string, var_435_int);
	var_420_string = "armor_" + var_434_string;
	var_440_bool = 0; var_441_object = Obj(); var_442_string = "";
	var_407_object = var_441_object;
	var_420_string = var_442_string;
	func_1515(var_440_bool, var_441_object, var_442_string);
	var_443_bool = var_440_bool == 0; //@nz
	if(var_443_bool != 0) {
		var_421_int = 0;
	} else {
		@@var_407_object:GetProperty(var_420_string, var_421_int);

	}
	var_444_float = 0; var_445_float = 0; var_446_float = 0;
	var_447_int = var_419_int + var_421_int;
	var_445_float = var_447_int / (float)100.0;
	func_1908(var_444_float, var_445_float, (float)1);
	var_444_float = var_422_float;
	@@var_407_object:GetProperty("health", var_423_float);
	var_452_int = (int)1 - var_422_float;
	var_424_float = var_408_float * var_452_int;
	var_454_float = 0; var_455_float = 0; var_456_float = 0; var_457_float = 0;
	var_455_float = var_423_float - var_424_float;
	func_1923(var_454_float, var_455_float, (float)0, (float)1);
	@@var_407_object:SetProperty("health", var_454_float);
	var_460_bool = 0; var_461_object = Obj();
	var_407_object = var_461_object;
	func_1510(var_460_bool, var_461_object);
	if(var_460_bool != 0) {
		var_462_float = 0;
		var_462_float = -var_424_float;
		func_1985(var_462_float);
	}
	var_424_float = var_406_float;
	return 12;
	
}


func_12(var_137_object)
{
	EventDisable(0);
	var_138_object = Obj();
	var_137_object = var_138_object;
	func_37(var_138_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_23:
	Hold();
	goto Label_23;
}
EMIT "Return(); Pop(0)";


func_1054(var_0_bool, var_309_bool)
{
	var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_float = 0;
	var_320_bool = 0; var_321_object = Obj();
	var_321_object = var_0_bool;
	func_1663(var_320_bool, var_321_object);
	var_322_bool = var_320_bool == 0; //@nz
	if(var_322_bool != 0) {
		var_309_bool = 0;
		return 10;
	}
	var_323_bool = 0;
	func_1143(var_319_float, var_323_bool);
	if(var_323_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_315_cvector);
		GetPFPosition(var_316_cvector);
		var_317_cvector = var_315_cvector - var_316_cvector;
		var_318_float = var_317_cvector | var_317_cvector;
		@@@var_0_bool:GetAttackDistance(var_319_float);
		var_319_float = var_319_float + (int)50;
		var_325_float = var_319_float * var_319_float;
		var_309_bool = var_318_float <= var_325_float;
		return 10;
	}
	var_309_bool = 0;
	return 10;
}


func_544(var_0_bool, var_3_object, var_5_int, var_66_object, var_67_bool, var_68_float, var_143_bool, var_235_bool)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_float = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_float = 0;
	func_773(var_88_cvector, var_89_bool, var_90_float);
	var_5_int = 0;
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
	var_3_object = false;
	var_0_bool = var_66_object;
	IsPlayerActor(var_0_bool, var_83_bool);
	var_119_bool = var_83_bool;
	if(var_119_bool != 0) {
		PlayGlobalMusic("attack");
		var_121_object = Obj();
		func_1892(var_121_object);
		SendPlayerEnemy(var_66_object, var_121_object);
	}
	var_124_bool = var_67_bool;
	if(var_124_bool != 0) {
		var_84_bool = 0;
	} else {
						var_84_bool = 1;

	}
	var_85_float = (float)300.0 + var_80_float;
	
Label_584:
	var_126_bool = 0;
	var_126_bool = 0;
	var_127_bool = 0; var_128_object = Obj();
	var_128_object = var_0_bool;
	func_1663(var_127_bool, var_128_object);
	if(var_127_bool != 0) {
		var_129_bool = var_3_object == 0; //@nz
		if(var_129_bool != 0) {
			var_126_bool = 1;
		}
	}
	if(var_126_bool != 0) {
		func_1186(var_90_float);
		@@@var_0_bool:GetPFPosition(var_81_cvector);
		GetPFPosition(var_82_cvector);
		var_86_cvector = var_81_cvector - var_82_cvector;
		var_87_float = var_86_cvector | var_86_cvector;
		var_135_float = var_85_float * var_85_float;
		var_136_bool = var_87_float >= var_135_float;
		if(var_136_bool != 0) {
			var_137_bool = 0; var_138_object = Obj(); var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_bool = 0;
			var_138_object = var_0_bool;
			var_80_float = var_139_float;
			TaskCall(1);
			func_166(var_145_bool, var_137_bool, var_138_object, var_139_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_220_bool = var_143_bool == 0; //@nz
			if(var_220_bool != 0) {
			} else {
				var_84_bool = 0;
		} else {
				var_226_float = var_68_float * var_68_float;
				var_227_bool = var_87_float >= var_226_float;
				if(var_227_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_88_cvector);
					CanReachByPF(var_89_bool, var_88_cvector);
					var_228_bool = var_89_bool == 0; //@nz
					if(var_228_bool != 0) {
						var_229_bool = 0; var_230_object = Obj(); var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_bool = 0;
						var_230_object = var_0_bool;
						var_80_float = var_231_float;
						TaskCall(1);
						func_166(var_237_bool, var_229_bool, var_230_object, var_231_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_238_bool = var_235_bool == 0; //@nz
						if(var_238_bool != 0) {
							goto Label_756;
						}
						var_84_bool = 0;
						goto Label_584;
					}
					var_239_bool = var_84_bool == 0; //@nz
					if(var_239_bool != 0) {
						var_240_object = Obj();
						var_240_object = var_0_bool;
						func_1813(var_240_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1186(var_90_float);
						StopAsync();
						var_84_bool = 1;
						var_251_bool = 0; var_252_object = Obj();
						var_252_object = var_0_bool;
						func_1663(var_251_bool, var_252_object);
						var_253_bool = var_251_bool == 0; //@nz
						if(var_253_bool != 0) {
							goto Label_756;
						}
					}
					rand(var_90_float);
					var_254_bool = 0;
					var_256_bool = var_90_float < (float)0.6000000238418579;
					if(var_256_bool != 1) {
						var_257_bool = 0;
						func_1143((bool)1, var_257_bool);
						if(var_257_bool != 1) {
							var_254_bool = 0;
						}
					}
					if(var_254_bool != 0) {
						Face(var_0_bool);
						func_1193();
						PlayAnimation("all", "attack_stay");
						var_294_bool = 0; var_295_float = 0;
						var_68_float = var_295_float;
						func_1011(var_90_float, var_294_bool, var_295_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1186(var_90_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_588_bool = 0;
						func_1143(var_90_float, var_588_bool);
						var_589_bool = var_588_bool == 0; //@nz
						if(var_589_bool == 0) goto Label_746;
						var_590_bool = 0; var_591_object = Obj();
						var_591_object = var_0_bool;
						func_1663(var_590_bool, var_591_object);
						var_592_bool = var_590_bool == 0; //@nz
						if(var_592_bool != 0) {
							goto Label_756;
						}
						@@@var_0_bool:GetPFPosition(var_81_cvector);
						GetPFPosition(var_82_cvector);
						var_86_cvector = var_81_cvector - var_82_cvector;
						var_87_float = var_86_cvector | var_86_cvector;
						var_593_float = var_68_float * var_68_float;
						var_594_bool = var_87_float < var_593_float;
						if(var_594_bool == 0) goto Label_746;
						var_595_bool = 0; var_596_float = 0;
						var_68_float = var_596_float;
						func_847(var_89_bool, var_90_float, var_595_bool, var_596_float);
						var_597_bool = var_595_bool == 0; //@nz
						if(var_597_bool == 0) goto Label_746;
						goto Label_756;
				}
					var_598_bool = 0; var_599_float = 0;
					var_68_float = var_599_float;
					func_847(var_89_bool, var_90_float, var_598_bool, var_599_float);
					var_600_bool = var_598_bool == 0; //@nz
					if(var_600_bool != 0) {
						goto Label_756;
					}
					var_84_bool = 1;

				}
			Label_746:
				goto Label_755;
		}
		Label_755:
			goto Label_584;

		}
	}
Label_756:
	WaitForAnimEnd();
	var_221_object = var_3_object;
	if(var_221_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_224_bool = var_83_bool;
	if(var_224_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_37(var_138_object)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_string = ""; var_144_object = Obj(); var_145_bool = 0; var_146_bool = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_string = ""; var_154_object = Obj(); var_155_bool = 0; var_156_bool = 0; var_157_float = 0; var_158_cvector = CVector(0,0,0);
	var_159_bool = var_138_object == 0; //@ne
	if(var_159_bool != 0) {
		var_160_string = "";
		func_128("fdie");
	} else {
		@@var_138_object:GetPosition(var_149_cvector);
		GetPosition(var_150_cvector);
		GetDirection(var_151_cvector);
		var_152_cvector = var_150_cvector - var_149_cvector;
		var_192_float = GetByIndex(var_152_cvector, 0);
		var_193_float = GetByIndex(var_151_cvector, 0);
		var_194_float = var_192_float * var_193_float;
		var_195_float = GetByIndex(var_152_cvector, 2);
		var_196_float = GetByIndex(var_151_cvector, 2);
		var_197_float = var_195_float * var_196_float;
		var_198_int = var_194_float + var_197_float;
		var_200_bool = var_198_int >= (int)0;
		if(var_200_bool != 0) {
			var_153_string = "fdie";
		} else {
				var_153_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_138_object = var_154_object;
		var_203_bool = IsFuncExist(var_138_object, "GetScriptProperty", (int)2);
		if(var_203_bool != 0) {
			@@var_138_object:HasScriptProperty(var_155_bool, "Owner");
			var_205_bool = var_155_bool;
			if(var_205_bool != 0) {
				@@var_138_object:GetScriptProperty(var_154_object, "Owner");
				var_207_bool = var_154_object == 0; //@ne
				if(var_207_bool != 0) {
					var_138_object = var_154_object;
				}
			}
		}
		var_210_bool = IsFuncExist(var_154_object, "@GetEyesHeight", (int)1);
		if(var_210_bool != 0) {
			@@var_154_object:GetEyesHeight(var_157_float);
			var_158_cvector = CVector(0.0, 0.0, 0.0);
			var_211_float = GetByIndex(var_158_cvector, 1);
			var_157_float = var_211_float;
			SetByIndex(var_158_cvector, 1) = var_211_float;
			LookAsync(var_138_object, "head", var_158_cvector);
			var_156_bool = 1;
		} else {
			var_156_bool = 0;

		}
		var_213_string = "";
		var_153_string = var_213_string;
		func_1851(var_213_string);
		PlayAnimation("all", var_153_string);
		WaitForAnimEnd();
		var_215_bool = var_156_bool;
		if(var_215_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_153_string);
		RemoveEnvelope();
		var_154_object = 0;
	}
	return 20;
	
}


func_2091(var_123_string)
{
	var_124_object = Obj(); var_125_int = 0; var_126_bool = 0; var_127_object = Obj(); var_128_int = 0; var_129_bool = 0;
	CreateInvItem(var_127_object);
	@@var_127_object:SetItemName(var_123_string);
	@@var_127_object:SetProperty("Organ", (int)1);
	@@var_127_object:GetItemID(var_128_int);
	AddItem(var_129_bool, var_127_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1082(var_307_bool)
{
	var_308_bool = 0;
	var_308_bool = 0;
	var_309_bool = 0;
	func_1054(var_308_bool, var_309_bool);
	if(var_309_bool != 0) {
		var_326_bool = 0;
		func_1098(var_307_bool, var_308_bool, var_326_bool);
		if(var_326_bool != 0) {
			var_308_bool = 1;
		}
	}
	if(var_308_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_2108()
{
	var_120_int = 0;
	func_2041(var_120_int);
	var_122_bool = var_120_int != (int)1;
	if(var_122_bool != 0) {
		return 0;
	}
	var_123_string = "";
	func_2091("liver");
	var_134_string = "";
	func_2091("kidney");
	var_135_string = "";
	func_2091("heart");
	var_136_string = "";
	func_2091("blood");
	return 0;
}


func_1098(var_0_bool, var_4_int, var_326_bool)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_object = Obj(); var_333_bool = 0; var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0);
	GetScene(var_332_object);
	var_333_bool = 0;
	
Label_1102:
	var_337_cvector = CVector(0,0,0); var_338_object = Obj();
	var_338_object = var_0_bool;
	func_1503(var_337_cvector, var_338_object);
	var_343_int = -var_337_cvector;
	FindDirLength(var_334_float, var_343_int, var_4_int);
	var_344_bool = var_334_float < var_4_int;
	if(var_344_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_335_cvector);
		GetPFPosition(var_336_cvector);
		WaitForAnimEnd();
		func_1186(var_336_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_333_bool = 1;
		var_348_bool = 0;
		func_1054(var_336_cvector, var_348_bool);
		var_349_bool = var_348_bool == 0; //@nz
		if(var_349_bool != 0) {
			goto Label_1140;
		}
		goto Label_1102;
	}
Label_1140:
	var_333_bool = var_326_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2132()
{
	var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0;
	ClearSubContainer((int)0);
	var_77_int = 0; var_78_int = 0;
	func_2060((int)200, (int)500);
	var_96_string = ""; var_97_int = 0; var_98_int = 0;
	func_1840("revolver_ammo", (int)1, (int)80);
	var_107_string = ""; var_108_int = 0; var_109_int = 0;
	func_1840("samopal_ammo", (int)1, (int)80);
	var_110_string = ""; var_111_int = 0; var_112_int = 0;
	func_1840("rifle_ammo", (int)1, (int)80);
	var_113_string = ""; var_114_int = 0; var_115_int = 0;
	func_1840("lockpick", (int)1, (int)80);
	var_116_int = 0; var_117_string = "";
	func_2174(var_116_int, "hunter_mark");
	AddItem(var_75_bool, var_116_int, (int)0, (int)1);
	return 4;
}


func_1622(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_1627(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	var_23_bool = var_18_object == 0; //@ne
	if(var_23_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_24_bool = 0;
	var_24_bool = 0;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", (int)1);
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_18_object = var_29_object;
		func_1622(var_28_bool, var_29_object);
		if(var_28_bool != 0) {
			var_24_bool = 1;
		}
	}
	if(var_24_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	GetScene(var_21_object);
	var_32_bool = var_21_object == 0; //@ne
	if(var_32_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	@@var_18_object:GetScene(var_22_object);
	var_33_bool = var_21_object != var_22_object;
	if(var_33_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_17_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1143(var_0_bool, var_257_bool)
{
	var_258_bool = 0; var_259_bool = 0;
	var_262_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_262_bool != 0) {
		@@@var_0_bool:IsAttacking(var_259_bool);
		var_259_bool = var_257_bool;
		return 2;
	}
	var_257_bool = 0;
	return 2;
}


func_2174(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0;
	GetInvItemByName(var_92_int, var_90_string);
	var_92_int = var_89_int;
	return 2;
}


func_1663(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_1627(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_1515(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


func_128(var_160_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_161_string = "";
	var_160_string = var_161_string;
	func_1851(var_161_string);
	PlayAnimation("all", var_160_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_160_string);
	RemoveEnvelope();
	return 0;
}


func_1154(var_2_bool, var_5_int)
{
	var_374_float = 0; var_375_int = 0; var_376_float = 0; var_377_int = 0;
	var_378_bool = var_2_bool == 0; //@nz
	if(var_378_bool != 0) {
		return 4;
	}
	var_379_int = var_5_int;
	if(var_379_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_382_bool = var_5_int > (int)0;
		if(var_382_bool != 0) {
			return 4;
		}
	}
	rand(var_376_float);
	var_383_float = 0;
	func_1202(var_383_float);
	var_384_bool = var_376_float < var_383_float;
	if(var_384_bool != 0) {
		irand(var_377_int, var_2_bool);
		var_377_int = var_377_int + (int)1;
		var_387_int = "attack" + var_377_int;
		Speak(var_387_int);
		var_388_int = 0;
		func_1200(var_388_int);
		var_5_int = var_388_int;
	}
	return 4;
}


func_2179(var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_1510(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		var_18_bool = 0;
		var_18_bool = 0;
		var_19_int = 0;
		func_2041(var_19_int);
		var_24_bool = var_19_int == (int)2;
		if(var_24_bool != 0) {
			var_25_int = 0;
			func_2012(var_25_int);
			var_32_bool = var_25_int == (int)6;
			if(var_32_bool != 0) {
				var_18_bool = 1;
			}
		}
		if(var_18_bool != 0) {
			var_33_bool = 0; var_34_object = Obj(); var_35_float = 0;
			var_13_object = var_34_object;
			func_1950(var_33_bool, var_34_object, (float)0.10000000149011612);
		} else {
			var_220_bool = 0; var_221_object = Obj(); var_222_float = 0;
			var_13_object = var_221_object;
			func_1950(var_220_bool, var_221_object, (float)0.05000000074505806);
		}
	}
	var_71_object = Obj();
	var_13_object = var_71_object;
	TaskCall(0);
	func_0(var_71_object);
	TaskReturn();
	return 0;
	
}


func_1687(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = "";
	var_44_bool = var_29_object == 0; //@ne
	if(var_44_bool != 0) {
		return 14;
	}
	IsDead(var_37_bool);
	var_45_bool = var_37_bool;
	if(var_45_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_38_int);
	var_47_bool = var_38_int < (int)0;
	if(var_47_bool != 0) {
		return 14;
	}
	@@var_29_object:GetPosition(var_39_cvector);
	GetPosition(var_40_cvector);
	GetDirection(var_41_cvector);
	var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_50_float = var_48_float * var_49_float;
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	var_53_float = var_51_float * var_52_float;
	var_54_int = var_50_float + var_53_float;
	var_56_bool = var_54_int >= (int)0;
	if(var_56_bool != 0) {
		var_43_string = "fhit";
	} else {
		var_43_string = "bhit";
	}
	var_59_int = var_43_string + "1";
	var_61_int = var_43_string + "2";
	FadeSecondaryAnimation("hit_react", var_59_int, var_61_int, (int)-10);
	return 14;
	
}


func_1186(var_0_bool)
{
	var_130_object = Obj();
	var_130_object = var_0_bool;
	func_2021(var_130_object);
	return 0;
}


func_166(var_2_bool, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool)
{
	var_146_bool = 0; var_147_bool = 0; var_148_bool = 0; var_149_bool = 0;
	var_150_object = Obj();
	var_138_object = var_150_object;
	func_2021(var_150_object);
	SetTimer((int)1, (int)5);
	CanSee(var_148_bool, var_138_object);
	var_153_bool = var_148_bool;
	if(var_153_bool != 0) {
		var_2_bool = true;
		var_154_object = Obj();
		var_138_object = var_154_object;
		func_1829(var_154_object);
	} else {
		var_2_bool = false;
	}
	var_161_bool = 0; var_162_object = Obj();
	var_138_object = var_162_object;
	func_1510(var_161_bool, var_162_object);
	if(var_161_bool != 0) {
		var_165_object = Obj();
		func_1892(var_165_object);
		SendPlayerEnemy(var_138_object, var_165_object);
	}
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0; var_169_float = 0; var_170_bool = 0; var_171_bool = 0;
	var_138_object = var_167_object;
	var_139_float = var_168_float;
	var_140_float = var_169_float;
	var_141_bool = var_170_bool;
	var_142_bool = var_171_bool;
	func_271(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool);
	var_166_bool = var_149_bool;
	var_217_bool = var_2_bool;
	if(var_217_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_149_bool = var_137_bool;
	return 4;
	
}


func_1191(var_471_int)
{
	var_471_int = 0;
	return 0;
}


func_1193()
{
	var_263_string = "";
	func_1851("attack_stay");
	return 0;
}


func_1198()
{
	return 0;
}


func_1200(var_388_int)
{
	var_388_int = 1;
	return 0;
}


func_1202(var_383_float)
{
	var_383_float = 0.5;
	return 0;
}


func_1731(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_bool = 0;
	var_38_bool = 0;
	var_39_object = var_16_object;
	if(var_39_object != 0) {
		var_41_bool = var_17_int != (int)4;
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_43_bool = var_17_int != (int)5;
		if(var_43_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
		var_46_cvector = CVector(0,0,0); var_47_object = Obj();
		var_16_object = var_47_object;
		func_1503(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_1898(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		CreateVectorVector(var_29_object);
		var_30_int = 1;

	Label_1760:
		var_58_int = "hit" + var_30_int;
		GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector);
		var_59_bool = var_31_bool == 0; //@nz
		if(var_59_bool != 0) {
		} else {
			var_107_int = var_33_cvector | var_28_cvector;
			var_109_bool = var_107_int >= (float)0.7071067690849304;
			if(var_109_bool != 0) {
				@@var_29_object:add(var_32_cvector);
			}
			var_30_int = var_30_int + (int)1;
			goto Label_1760;
		}
		@@var_29_object:size(var_34_int);
		var_60_int = var_34_int;
		if(var_60_int != 0) {
			irand(var_35_int, var_34_int);
			@@var_29_object:get(var_36_cvector, var_35_int);
			var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
			var_16_object = var_61_object;
			var_17_int = var_62_int;
			var_18_float = var_63_float;
			var_36_cvector = var_64_cvector;
			var_65_cvector = -var_28_cvector;
			func_1799(var_63_float, var_64_cvector, var_65_cvector);
			return 18;
		}
		var_29_object = 0;
	}
	var_106_object = Obj();
	var_16_object = var_106_object;
	func_1687(var_106_object);
	return 18;
	
}


func_2256(var_67_string, var_68_int)
{
	var_69_string = ""; var_70_string = "";
	var_71_int = var_68_int;
	if(var_71_int != 0) {
		"idle" = "idle" + var_68_int;
	}
	var_70_string = var_67_string;
	return 2;
}


func_2263(var_61_int)
{
	var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_bool = 0;
	var_64_int = 0;
	
Label_2265:
	var_67_string = ""; var_68_int = 0;
	var_64_int = var_68_int;
	func_2256(var_67_string, var_68_int);
	HasAnimation(var_65_bool, "all", var_67_string);
	var_72_bool = var_65_bool == 0; //@nz
	if(var_72_bool != 0) {
	} else {
		var_64_int = var_64_int + (int)1;
		goto Label_2265;
	}
	var_64_int = var_61_int;
	return 4;
	
}


func_229(var_2_bool)
{
	KillTimer((int)1);
	var_14_bool = var_2_bool;
	if(var_14_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_395(var_12_bool);
	return 0;
}


func_2280()
{
	var_12_object = GlobalVars[0];
	func_1944(Obj());
	var_13_object = var_12_object;
	GlobalVars[0] = var_12_object;
	return 0;
}


func_1260(var_0_bool, var_1_object)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_22_float, (float)0.5);
	Sleep(var_22_float);
	
Label_1268:
	var_29_bool = var_0_bool == 0; //@nz
	if(var_29_bool != 0) {
		var_30_bool = var_1_object == 0; //@nz
		if(var_30_bool != 0) {

		Label_1272:
			GetPosition(var_24_cvector);
			var_31_float = 0;
			func_1319(var_31_float);
			GetRandomPFPointInCircle(var_23_cvector, var_24_cvector, var_31_float, var_25_bool);
			var_34_bool = var_25_bool;
			if(var_34_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_1272;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_1288;
	
Label_1288:
	var_35_object = Obj(); var_36_cvector = CVector(0,0,0);
	var_23_cvector = var_36_cvector;
	func_1349(var_35_object, var_36_cvector);
	var_35_object = var_26_object;
	var_39_bool = var_26_object != 0; //@nn
	if(var_39_bool != 0) {
		RotatePath(var_26_object, var_27_bool);
		var_40_bool = var_27_bool;
		if(var_40_bool != 0) {
			var_41_bool = 0;
			func_1347(var_41_bool);
			FollowPath(var_26_object, var_41_bool, var_27_bool);
			var_26_object = 0;
			var_42_bool = var_27_bool;
			if(var_42_bool != 0) {
				TaskCall(4);
				func_1403();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_26_object = 0;
	goto Label_1268;
	
}


func_2287(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; var_21_bool = 0; var_22_bool = 0;
	var_23_object = GlobalVars[0];
	@@var_23_object:in(var_21_bool, var_18_object);
	var_24_bool = var_21_bool;
	if(var_24_bool != 0) {
		var_17_bool = 1;
		return 4;
	}
	IsPlayerActor(var_18_object, var_22_bool);
	var_22_bool = var_17_bool;
	return 4;
}


func_2299(var_13_bool, var_14_object)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0);
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_2287(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_25_cvector = CVector(0,0,0); var_26_object = Obj();
		var_14_object = var_26_object;
		func_1503(var_25_cvector, var_26_object);
		var_25_cvector = var_16_cvector;
		var_31_float = 0; var_32_float = 0;
		var_33_float = GetByIndex(var_16_cvector, 1);
		var_33_float = var_32_float;
		func_1915(var_31_float, var_32_float);
		var_13_bool = var_31_float < (int)200;
		return 2;
	}
	var_13_bool = 0;
	return 2;
}


func_773(var_1_object, var_2_bool, var_4_int)
{
	var_91_bool = 0; var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_775:
	var_100_int = var_1_object + (int)1;
	var_101_int = "attack_begin" + var_100_int;
	HasAnimation(var_94_bool, "all", var_101_int);
	var_102_bool = var_94_bool == 0; //@nz
	if(var_102_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_775;
	}
	var_2_bool = 0;
	
Label_789:
	var_105_int = var_2_bool + (int)1;
	var_106_int = "attack" + var_105_int;
	IsExisting3DSound(var_95_bool, var_106_int);
	var_107_bool = var_95_bool == 0; //@nz
	if(var_107_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_789;

	}
	GetAnimationOffset(var_96_cvector, "all", "bjump");
	var_110_float = GetByIndex(var_96_cvector, 2);
	var_4_int = -var_110_float;
	return 6;
	
}


func_1799(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	GetScene(var_25_object);
	AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	var_29_object = Obj();
	var_18_object = var_29_object;
	func_1687(var_29_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_271(var_0_bool, var_1_object, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool)
{
	var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_object = Obj(); var_180_bool = 0; var_181_bool = 0; var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_float = 0; var_187_object = Obj();
	var_0_bool = false;
	var_1_object = var_167_object;
	var_171_bool = var_181_bool;
	
Label_275:
	var_188_bool = 0; var_189_object = Obj();
	var_167_object = var_189_object;
	func_411(var_188_bool, var_189_object);
	var_192_bool = var_188_bool == 0; //@nz
	if(var_192_bool != 0) {
		var_166_bool = 0;
		return 16;
	}
	@@var_167_object:GetPosition(var_183_cvector);
	GetPosition(var_184_cvector);
	var_185_cvector = var_183_cvector - var_184_cvector;
	var_186_float = var_185_cvector | var_185_cvector;
	var_193_bool = 0;
	var_193_bool = 0;
	var_195_bool = var_169_float > (int)0;
	if(var_195_bool != 0) {
		var_196_float = var_169_float * var_169_float;
		var_197_bool = var_186_float > var_196_float;
		if(var_197_bool != 0) {
			var_193_bool = 1;
		}
	}
	if(var_193_bool != 0) {
		Stop();
		var_166_bool = 0;
		return 16;
	}
	var_198_float = var_168_float * var_168_float;
	var_199_bool = var_186_float > var_198_float;
	if(var_199_bool != 0) {
		@@var_167_object:GetPFPosition(var_183_cvector);
		FindPathTo(var_187_object, var_183_cvector);
		var_200_bool = var_187_object != 0; //@nn
		if(var_200_bool != 0) {
			var_187_object = var_182_object;
			var_187_object = 0;
		}
		var_201_bool = var_182_object != 0; //@nn
		if(var_201_bool != 0) {
			var_202_bool = var_181_bool;
			if(var_202_bool == 0) goto Label_324;
			var_181_bool = 0;
			RotatePath(var_182_object, var_180_bool);
			var_203_bool = var_180_bool == 0; //@nz
			if(var_203_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_206_string = "";
				func_418(var_206_string);
				var_207_string = "";
				func_420(var_207_string);
				FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string);
				var_208_bool = var_180_bool == 0; //@nz
				if(var_208_bool != 0) {
					var_209_bool = var_0_bool;
					if(var_209_bool != 0) {
						var_182_object = 0;
						goto Label_371;
					EMIT "GOTO 0x158";
					}
				} else {
					var_182_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_180_bool);
					var_212_bool = var_180_bool == 0; //@nz
					if(var_212_bool != 0) {
						var_213_bool = var_0_bool;
						if(var_213_bool != 0) {
							var_182_object = 0;
							goto Label_371;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_371;
	}
			var_187_object = 0;
			goto Label_369;

		Label_369:
			var_182_object = 0;

		}
		goto Label_275;
	}
Label_371:
	var_166_bool = !var_0_bool;
	return 16;
	
}


func_2321(var_37_object)
{
	var_38_object = Obj();
	var_37_object = var_38_object;
	func_2340(var_38_object);
	return 0;
}


func_1813(var_240_object)
{
	var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0);
	@@var_240_object:GetPosition(var_244_cvector);
	GetPosition(var_245_cvector);
	var_246_cvector = var_244_cvector - var_245_cvector;
	var_247_float = GetByIndex(var_246_cvector, 0);
	var_248_float = GetByIndex(var_246_cvector, 2);
	RotateAsync(var_247_float, var_248_float);
	return 6;
}


func_2327(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_2287(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
	return 0;
}


func_2334(var_23_object)
{
	var_24_object = Obj();
	var_23_object = var_24_object;
	func_2340(var_24_object);
	return 0;
}


func_1824(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0;
	IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
	return 2;
}


func_2340(var_38_object)
{
	var_39_object = Obj(); var_40_bool = 0;
	var_38_object = var_39_object;
	TaskCall(2);
	func_422(var_39_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1829(var_154_object)
{
	var_155_float = 0; var_156_cvector = CVector(0,0,0); var_157_float = 0; var_158_cvector = CVector(0,0,0);
	@@var_154_object:GetEyesHeight(var_157_float);
	var_158_cvector = CVector(0.0, 0.0, 0.0);
	var_159_float = GetByIndex(var_158_cvector, 1);
	var_157_float = var_159_float;
	SetByIndex(var_158_cvector, 1) = var_159_float;
	LookAsync(var_154_object, "head", var_158_cvector);
	return 4;
}


func_1319(var_31_float)
{
	var_32_float = 0; var_33_float = 0;
	GetCameraFarDistance(var_33_float);
	var_33_float = var_31_float;
	return 2;
}


func_808(var_0_bool, var_392_float, var_393_int)
{
	var_394_object = Obj(); var_395_float = 0; var_396_float = 0; var_397_object = Obj(); var_398_float = 0; var_399_float = 0;
	var_401_float = var_392_float * (float)0.8999999761581421;
	GetVictim(var_401_float, var_397_object);
	ReportAttack(var_0_bool);
	var_402_bool = var_397_object == var_0_bool;
	if(var_402_bool != 0) {
		var_403_float = 0; var_404_object = Obj(); var_405_int = 0;
		var_397_object = var_404_object;
		var_393_int = var_405_int;
		func_430(var_405_int);
		var_403_float = var_398_float;
		var_406_float = 0; var_407_object = Obj(); var_408_float = 0; var_409_int = 0;
		var_397_object = var_407_object;
		var_398_float = var_408_float;
		var_410_int = 0; var_411_object = Obj(); var_412_int = 0;
		var_397_object = var_411_object;
		var_393_int = var_412_int;
		func_433(var_412_int);
		var_410_int = var_409_int;
		func_1549(var_406_float, var_407_object, var_408_float, var_409_int);
		var_406_float = var_399_float;
		var_471_int = 0;
		func_1191(var_471_int);
		ReportHit(var_0_bool, var_471_int, var_399_float, var_398_float);
		var_472_object = Obj(); var_473_float = 0;
		var_397_object = var_472_object;
		var_399_float = var_473_float;
		func_1198();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2351(var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	var_51_bool = var_48_object == 0; //@ne
	if(var_51_bool != 0) {
		return 2;
	}
	var_52_object = GlobalVars[0];
	@@var_52_object:in(var_50_bool, var_48_object);
	var_53_bool = var_50_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_54_object = GlobalVars[0];
		@@var_54_object:add(var_48_object);
	}
	return 2;
}


func_1840(var_96_string, var_97_int, var_98_int)
{
	var_99_bool = 0; var_100_bool = 0;
	var_101_bool = 0; var_102_int = 0; var_103_int = 0;
	var_97_int = var_102_int;
	var_98_int = var_103_int;
	func_1939(var_101_bool, var_102_int, var_103_int);
	if(var_101_bool != 0) {
		AddItem(var_100_bool, var_96_string, (int)0);
	}
	return 2;
}


func_1331(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1851(var_161_string)
{
	var_162_bool = 0; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_bool = 0; var_167_float = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_bool = 0; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_bool = 0; var_175_float = 0; var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0);
	IsExisting3DSound(var_170_bool, var_161_string);
	var_178_bool = var_170_bool == 0; //@nz
	if(var_178_bool != 0) {
		var_171_int = 0;

	Label_1857:
		var_180_int = var_171_int + (int)1;
		var_181_int = var_161_string + var_180_int;
		IsExisting3DSound(var_172_bool, var_181_int);
		var_182_bool = var_172_bool == 0; //@nz
		if(var_182_bool != 0) {
		} else {
			var_171_int = var_171_int + (int)1;
			goto Label_1857;
		}
		var_183_bool = var_171_int == 0; //@nz
		if(var_183_bool != 0) {
			return 16;
		}
		irand(var_173_int, var_171_int);
		var_185_int = var_173_int + (int)1;
		var_161_string = var_161_string + var_185_int;
	}
	Is3DSoundLoaded(var_174_bool, var_161_string);
	var_186_bool = var_174_bool;
	if(var_186_bool != 0) {
		GetEyesHeight(var_175_float);
		GetDirection(var_176_cvector);
		var_177_cvector = var_176_cvector * (int)50;
		var_188_float = GetByIndex(var_177_cvector, 1);
		var_188_float = var_188_float + var_175_float;
		SetByIndex(var_177_cvector, 1) = var_188_float;
		PlayGlobalSound(var_161_string, var_177_cvector);
	}
	return 16;
	
}


func_2364(var_55_object)
{
	var_56_object = Obj();
	var_55_object = var_56_object;
	func_2351(var_56_object);
	var_57_object = Obj(); var_58_bool = 0;
	var_55_object = var_57_object;
	TaskCall(2);
	func_422(var_57_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1347(var_41_bool)
{
	var_41_bool = 0;
	return 0;
}


func_1349(var_35_object, var_36_cvector)
{
	var_37_object = Obj(); var_38_object = Obj();
	FindShiftedPathTo(var_38_object, var_36_cvector);
	var_38_object = var_35_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_847(var_0_bool, var_1_object, var_355_bool, var_356_float)
{
	var_357_int = 0; var_358_bool = 0; var_359_int = 0; var_360_string = ""; var_361_int = 0; var_362_bool = 0; var_363_int = 0; var_364_string = "";
	func_1186(var_364_string);
	irand(var_361_int, var_1_object);
	var_361_int = var_361_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2030();
	var_373_int = "attack_begin" + var_361_int;
	PlayAnimation("all", var_373_int);
	WaitForAnimEnd();
	func_1154(var_363_int, var_364_string);
	var_389_bool = 0; var_390_object = Obj();
	var_390_object = var_0_bool;
	func_1663(var_389_bool, var_390_object);
	var_391_bool = var_389_bool == 0; //@nz
	if(var_391_bool != 0) {
		StopAsync();
		var_355_bool = 0;
		return 8;
	}
	var_392_float = 0; var_393_int = 0;
	var_356_float = var_392_float;
	var_361_int = var_393_int;
	func_808(var_364_string, var_392_float, var_393_int);
	var_476_int = "attack_middle" + var_361_int;
	HasAnimation(var_362_bool, "all", var_476_int);
	var_477_bool = var_362_bool;
	if(var_477_bool != 0) {
		func_2030();
		var_480_int = "attack_middle" + var_361_int;
		PlayAnimation("all", var_480_int);
		WaitForAnimEnd();
		func_1186(var_364_string);
		var_481_bool = 0; var_482_object = Obj();
		var_482_object = var_0_bool;
		func_1663(var_481_bool, var_482_object);
		var_483_bool = var_481_bool == 0; //@nz
		if(var_483_bool != 0) {
			StopAsync();
			var_355_bool = 0;
			return 8;
		}
		var_484_float = 0; var_485_int = 0;
		var_356_float = var_484_float;
		var_361_int = var_485_int;
		func_808(var_364_string, var_484_float, var_485_int);
		var_363_int = 1;

	Label_924:
		var_487_int = "attack_middle" + var_361_int;
		var_489_int = var_487_int + "_";
		var_364_string = var_489_int + var_363_int;
		HasAnimation(var_362_bool, "all", var_364_string);
		var_491_bool = var_362_bool == 0; //@nz
		if(var_491_bool != 0) {
		} else {
			func_2030();
			PlayAnimation("all", var_364_string);
			WaitForAnimEnd();
			func_1186(var_364_string);
			var_579_bool = 0; var_580_object = Obj();
			var_580_object = var_0_bool;
			func_1663(var_579_bool, var_580_object);
			var_581_bool = var_579_bool == 0; //@nz
			if(var_581_bool != 0) {
				StopAsync();
				var_355_bool = 0;
				var_582_float = 0; var_583_int = 0;
				var_356_float = var_582_float;
				var_361_int = var_583_int;
				func_808(var_364_string, var_582_float, var_583_int);
				var_363_int = var_363_int + (int)1;
				goto Label_924;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_495_int = "attack_end" + var_361_int;
	PlayAnimation("all", var_495_int);
	var_496_bool = 0;
	func_442(var_363_int, var_364_string, var_496_bool);
	if(var_496_bool != 0) {
		var_569_bool = 0; var_570_float = 0;
		func_984(var_569_bool, (float)0.75);
		StopAsync();
	}
	var_355_bool = 1;
	return 8;
	
}


func_1892(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj();
	self(var_123_object);
	var_123_object = var_121_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1898(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0;
	var_54_int = var_45_cvector | var_45_cvector;
	var_53_float = sqrt(var_54_int);
	var_55_float = 9.999999974752427e-07;
	var_56_bool = var_53_float < var_55_float;
	if(var_56_bool != 0) {
		var_44_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_44_cvector = var_45_cvector / var_53_float;
	return 2;
}


func_1908(var_444_float, var_445_float, var_446_float)
{
	var_449_bool = var_445_float < var_446_float;
	if(var_449_bool != 0) {
		var_445_float = var_444_float;
	} else {
		var_446_float = var_444_float;
	}
	return 0;
	
}


func_373(var_0_bool, var_1_object, var_20_int)
{
	var_22_bool = var_20_int != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_1_object;
	func_411(var_23_bool, var_24_object);
	var_59_bool = var_23_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1403()
{
	var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0;
	WaitForAnimEnd();
	var_57_bool = 0;
	func_1824(var_57_bool);
	var_60_bool = var_57_bool == 0; //@nz
	if(var_60_bool != 0) {
		return 14;
	}
	func_2263((int)0);
	var_61_int = var_50_int;
	var_51_int = 0;
	
Label_1417:
	var_74_bool = 0;
	var_74_bool = 0;
	var_76_bool = var_51_int < (int)5;
	if(var_76_bool != 0) {
		var_77_bool = 0;
		func_1824(var_77_bool);
		if(var_77_bool != 0) {
			var_74_bool = 1;
		}
	}
	if(var_74_bool != 0) {
		irand(var_52_int, (int)3);
		var_80_bool = var_52_int == (int)0;
		if(var_80_bool != 0) {
			var_81_int = var_50_int;
			if(var_81_int == 0) goto Label_1450;
			irand(var_53_int, var_50_int);
			var_83_string = ""; var_84_int = 0;
			var_53_int = var_84_int;
			func_2256(var_83_string, var_84_int);
			PlayAnimation("all", var_83_string);
			WaitForAnimEnd(var_54_bool);
			var_85_bool = var_54_bool == 0; //@nz
			if(var_85_bool != 0) {
			} else {
		} else {
				var_90_bool = var_52_int == (int)1;
				if(var_90_bool != 0) {
					rand(var_55_float, (int)4);
					var_93_int = var_55_float + (int)1;
					Sleep(var_93_int, var_56_bool);
					var_94_bool = var_56_bool == 0; //@nz
					if(var_94_bool != 0) {
						goto Label_1479;
					}
					goto Label_1468;
				}
				var_95_int = var_51_int;
				if(var_95_int == 0) goto Label_1468;
				goto Label_1479;
		}
		Label_1468:
			var_86_bool = 0;
			func_1482(var_86_bool);
			var_87_bool = var_86_bool == 0; //@nz
			if(var_87_bool != 0) {
				goto Label_1479;
			}
			ResetAAS();
			var_51_int = var_51_int + (int)1;
			goto Label_1417;

		}
	}
Label_1479:
	ResetAAS();
	return 14;
	
}


func_1915(var_31_float, var_32_float)
{
	var_35_bool = var_32_float < (int)0;
	if(var_35_bool != 0) {
		var_31_float = -var_32_float;
	} else {
		var_32_float = var_31_float;
	}
	return 0;
	
}


func_1923(var_62_float, var_63_float, var_64_float, var_65_float)
{
	var_66_bool = var_63_float < var_64_float;
	if(var_66_bool != 0) {
		var_64_float = var_62_float;
		return 0;
	}
	var_67_bool = var_63_float > var_65_float;
	if(var_67_bool != 0) {
		var_65_float = var_62_float;
		return 0;
	}
	var_63_float = var_62_float;
	return 0;
}


func_395(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1934(var_522_bool, var_523_float)
{
	var_524_float = 0; var_525_float = 0;
	rand(var_525_float);
	var_522_bool = var_525_float < var_523_float;
	return 2;
}


func_1939(var_101_bool, var_102_int, var_103_int)
{
	var_104_int = 0; var_105_int = 0;
	irand(var_105_int, var_103_int);
	var_101_bool = var_105_int < var_102_int;
	return 2;
}


func_1944(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_411(var_188_bool, var_189_object)
{
	var_190_bool = 0; var_191_object = Obj();
	var_189_object = var_191_object;
	func_1663(var_190_bool, var_191_object);
	var_190_bool = var_188_bool;
	return 0;
}


func_1950(var_33_bool, var_34_object, var_35_float)
{
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_33_bool = 0;
		return 0;
	}
	var_38_bool = var_35_float > (int)0;
	if(var_38_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_69_bool = var_35_float < (int)0;
		if(var_69_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1971;
		}
		var_33_bool = 0;
		return 0;
	}
Label_1971:
	var_40_float = 0;
	var_35_float = var_40_float;
	func_2002(var_40_float);
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; var_47_float = 0; var_48_float = 0; var_49_float = 0;
	var_34_object = var_45_object;
	var_35_float = var_47_float;
	func_1527(var_44_bool, var_45_object, "reputation", var_47_float, (float)0, (float)1);
	var_33_bool = 1;
	return 0;
	
}


func_418(var_206_string)
{
	var_206_string = "walk";
	return 0;
}


func_420(var_207_string)
{
	var_207_string = "run";
	return 0;
}


func_422(var_57_object, var_58_bool)
{
	var_66_object = Obj(); var_67_bool = 0; var_68_float = 0;
	var_57_object = var_66_object;
	var_58_bool = var_67_bool;
	func_544(var_63_float, var_64_int, var_65_bool, var_57_object, var_58_bool, var_66_object, var_67_bool, (float)180.0);
	return 0;
}


func_430(var_403_float)
{
	var_403_float = 0.20000000298023224;
	return 0;
}


func_433(var_410_int)
{
	var_410_int = 0;
	return 0;
}


func_442(var_0_bool, var_6_bool, var_496_bool)
{
	var_497_cvector = CVector(0,0,0); var_498_cvector = CVector(0,0,0); var_499_cvector = CVector(0,0,0); var_500_cvector = CVector(0,0,0); var_501_cvector = CVector(0,0,0); var_502_cvector = CVector(0,0,0); var_503_float = 0; var_504_float = 0; var_505_cvector = CVector(0,0,0); var_506_float = 0; var_507_int = 0; var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_cvector = CVector(0,0,0); var_512_cvector = CVector(0,0,0); var_513_cvector = CVector(0,0,0); var_514_float = 0; var_515_float = 0; var_516_cvector = CVector(0,0,0); var_517_float = 0; var_518_int = 0;
	var_519_bool = 0;
	var_519_bool = 0;
	var_520_bool = 0; var_521_object = Obj();
	var_521_object = var_0_bool;
	func_1663(var_520_bool, var_521_object);
	if(var_520_bool != 0) {
		var_522_bool = 0; var_523_float = 0;
		func_1934(var_522_bool, (float)0.5);
		if(var_522_bool != 0) {
			var_519_bool = 1;
		}
	}
	if(var_519_bool != 0) {
		GetPosition(var_508_cvector);
		@@@var_0_bool:GetPosition(var_509_cvector);
		GetDirection(var_510_cvector);
		var_526_cvector = CVector(0,0,0); var_527_cvector = CVector(0,0,0);
		var_527_cvector = var_508_cvector - var_509_cvector;
		func_1898(var_526_cvector, var_527_cvector);
		var_526_cvector = var_511_cvector;
		GetAnimationOffset(var_512_cvector, "all", "jump1");
		GetAnimationOffset(var_513_cvector, "all", "jump2");
		var_537_float = GetByIndex(var_512_cvector, 2);
		var_538_float = GetByIndex(var_513_cvector, 2);
		var_539_bool = var_537_float < var_538_float;
		if(var_539_bool != 0) {
			var_540_float = GetByIndex(var_513_cvector, 2);
			var_514_float = -var_540_float;
			var_541_float = GetByIndex(var_512_cvector, 2);
			var_515_float = -var_541_float;
		} else {
				var_567_float = GetByIndex(var_512_cvector, 2);
				var_514_float = -var_567_float;
				var_568_float = GetByIndex(var_513_cvector, 2);
				var_515_float = -var_568_float;
		}
		var_545_float = var_515_float * (int)3;
		FindLongestDir(var_516_cvector, var_517_float, var_511_cvector, (float)0.1745329350233078, (int)6, var_545_float);
		var_546_bool = var_517_float < var_514_float;
		if(var_546_bool != 0) {
			var_550_float = var_515_float * (int)3;
			FindLongestDir(var_516_cvector, var_517_float, var_511_cvector, (float)0.5235987901687622, (int)16, var_550_float);
		}
		var_551_bool = var_517_float >= var_514_float;
		if(var_551_bool != 0) {
			StopAsync();
			var_552_int = -var_516_cvector;
			SetDirection(var_552_int);
			var_6_bool = true;
			var_553_bool = var_517_float >= var_515_float;
			if(var_553_bool != 0) {
				irand(var_518_int, (int)2);
				var_558_int = var_518_int + (int)1;
				var_559_int = "jump" + var_558_int;
				PlayAnimation("all", var_559_int);
			} else {
				var_560_float = GetByIndex(var_512_cvector, 2);
				var_561_int = -var_560_float;
				var_562_bool = var_561_int <= var_517_float;
				if(var_562_bool != 0) {
					PlayAnimation("all", "jump1");
					goto Label_537;
				}
				PlayAnimation("all", "jump2");
		}
	}
		var_496_bool = 1;
		return 22;

	}
Label_537:
	WaitForAnimEnd();
	var_6_bool = false;
	var_496_bool = 0;
	return 22;
	
}


func_1985(var_462_float)
{
	var_463_object = Obj(); var_464_object = Obj();
	CreateFloatVector(var_464_object);
	@@var_464_object:add(var_462_float);
	var_466_bool = var_462_float < (int)0;
	if(var_466_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_464_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1482(var_86_bool)
{
	var_86_bool = 1;
	return 0;
}


func_1484()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1489(var_434_string, var_435_int)
{
	var_437_bool = var_435_int == (int)2;
	if(var_437_bool != 0) {
		var_434_string = "fire";
		return 0;
	EMIT "GOTO 0x5dd";
	}
	var_439_bool = var_435_int == (int)1;
	if(var_439_bool != 0) {
		var_434_string = "bullet";
		return 0;
	}
	var_434_string = "phys";
	return 0;
}


func_2002(var_40_float)
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateFloatVector(var_42_object);
	@@var_42_object:add(var_40_float);
	SendWorldWndMessage((int)16, var_42_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_984(var_569_bool, var_570_float)
{
	var_571_float = 0; var_572_bool = 0; var_573_float = 0; var_574_bool = 0;
	rand(var_573_float);
	var_575_bool = var_573_float < var_570_float;
	if(var_575_bool != 0) {

	Label_989:
		IsAnimationPlaying(var_574_bool);
		var_576_bool = var_574_bool == 0; //@nz
		if(var_576_bool != 0) {
		} else {
			var_577_bool = 0;
			func_1082(var_577_bool);
			if(var_577_bool != 0) {
				var_569_bool = 1;
				sync();
				goto Label_989;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1186(var_574_bool);
	}
	goto Label_1009;
	
Label_1009:
	var_569_bool = 0;
	return 4;
	
}


func_2012(var_25_int)
{
	var_26_float = 0; var_27_float = 0;
	GetGameTime(var_27_float);
	var_29_int = 0;
	var_29_int = var_27_float / (int)24;
	var_25_int = (int)1 + var_29_int;
	return 2;
}


func_1503(var_46_cvector, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	GetPosition(var_50_cvector);
	@@var_47_object:GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
	return 4;
}


func_2021(var_130_object)
{
	var_131_bool = 0; var_132_bool = 0;
	IsPlayerActor(var_130_object, var_132_bool);
	var_133_bool = var_132_bool;
	if(var_133_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1510(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_object, var_17_bool);
	var_17_bool = var_14_bool;
	return 2;
}


func_1515(var_52_bool, var_53_object, var_54_string)
{
	var_55_bool = 0; var_56_bool = 0;
	var_59_bool = IsFuncExist(var_53_object, "HasProperty", (int)2);
	var_60_bool = var_59_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_52_bool = 0;
		return 2;
	}
	@@var_53_object:HasProperty(var_54_string, var_56_bool);
	var_56_bool = var_52_bool;
	return 2;
}


func_2030()
{
	var_367_object = Obj(); var_368_object = Obj();
	GetScene(var_368_object);
	var_370_object = Obj();
	func_1892(var_370_object);
	BroadcastMessage("battle", var_370_object, var_368_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1011(var_0_bool, var_294_bool, var_295_float)
{
	var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0;
	
Label_1012:
	IsAnimationPlaying(var_301_bool);
	var_306_bool = var_301_bool == 0; //@nz
	if(var_306_bool != 0) {
	} else {
		var_307_bool = 0;
		func_1082(var_307_bool);
		if(var_307_bool != 0) {
			var_294_bool = 1;
			return 10;
		}
		var_350_bool = 0; var_351_object = Obj();
		var_351_object = var_0_bool;
		func_1663(var_350_bool, var_351_object);
		var_352_bool = var_350_bool == 0; //@nz
		if(var_352_bool != 0) {
			var_294_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_302_cvector);
		GetPFPosition(var_303_cvector);
		var_304_cvector = var_302_cvector - var_303_cvector;
		var_305_float = var_304_cvector | var_304_cvector;
		var_353_float = var_295_float * var_295_float;
		var_354_bool = var_305_float < var_353_float;
		if(var_354_bool != 0) {
			var_355_bool = 0; var_356_float = 0;
			var_295_float = var_356_float;
			func_847(var_304_cvector, var_305_float, var_355_bool, var_356_float);
			var_294_bool = 1;
			sync();
			goto Label_1012;
		}
		return 10;
	}
	func_1186(var_305_float);
	var_294_bool = 0;
	return 10;
	
}


func_1527(var_44_bool, var_45_object, var_46_string, var_47_float, var_48_float, var_49_float)
{
	var_50_float = 0; var_51_float = 0;
	var_52_bool = 0; var_53_object = Obj(); var_54_string = "";
	var_45_object = var_53_object;
	var_46_string = var_54_string;
	func_1515(var_52_bool, var_53_object, var_54_string);
	var_61_bool = var_52_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_44_bool = 0;
		return 2;
	}
	@@var_45_object:GetProperty(var_46_string, var_51_float);
	var_62_float = 0; var_63_float = 0; var_64_float = 0; var_65_float = 0;
	var_63_float = var_51_float + var_47_float;
	var_48_float = var_64_float;
	var_49_float = var_65_float;
	func_1923(var_62_float, var_63_float, var_64_float, var_65_float);
	@@var_45_object:SetProperty(var_46_string, var_62_float);
	var_44_bool = 1;
	return 2;
}


func_2041(var_19_int)
{
	var_20_int = 0; var_21_int = 0;
	GetVariable("branch", var_21_int);
	var_21_int = var_19_int;
	return 2;
}


func_2047(var_16_object)
{
	var_17_int = 0;
	func_2041(var_17_int);
	var_22_bool = var_17_int == (int)1;
	if(var_22_bool != 0) {
		WorkWithCorpse(var_16_object);
	} else {
		Barter(var_16_object);
	}
	return 0;
	
}


