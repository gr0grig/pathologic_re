// @IMPORTS: Sleep/1,IsPlayerActor/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,GetScene/1,GetGeometryLocator/3,AddActorByType/6,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,GetProperty/2,SignalDeath/1,WorkWithCorpse/1,Barter/1
// @STRINGS: W:all|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|A:SetScriptProperty|W:Target|W:StartDirection|W:kill|W:attack_off|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:reputation|W:battle|W:god_mode|W:idle|W:branch|A:RemoveStationaryActor
// @GLOBALS: 0:bool:
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
// @TASK_2: vars= params=2
// @TASK_3: vars=bool params=2
// @EVENT_17: op=0x1b4 vars=object
// @EVENT_30: op=0x1ba vars=object,object,bool
// @EVENT_26: op=0x1c1 vars=string
// @TASK_4: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0x1ff vars=object
// @EVENT_30: op=0x205 vars=object,object,bool
// @EVENT_26: op=0x20c vars=string
// @TASK_5: vars=bool,object,bool params=6
// @EVENT_17: op=0x4a8 vars=object
// @EVENT_30: op=0x4ae vars=object,object,bool
// @EVENT_26: op=0x4b5 vars=string
// @EVENT_7: op=0x4f1 vars=int
// @EVENT_1: op=0x50c vars=object
// @EVENT_2: op=0x51b vars=object
// @EVENT_10: op=0x5a1 vars=object
// @EVENT_41: op=0x5ac vars=object
// @TASK_6: vars= params=1
// @STANDALONE_EVENT_22: op=0x848 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x850 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x85a vars=object,string
// @STANDALONE_EVENT_41: op=0x867 vars=object
// @PE: 0x8,0x80,0x90,0x104,0x11e,0x120,0x122,0x1b4,0x1ba,0x1c1,0x1c7,0x1e3,0x1e6,0x1eb,0x1ff,0x205,0x20c,0x4a8,0x4ae,0x4b5,0x4f1,0x50c,0x51b,0x58f,0x5a1,0x5ac,0x5b5,0x5c0,0x5cc,0x79e,0x7a5,0x7bd,0x7c8,0x7d0,0x840,0x848,0x850,0x867,0x86d,0x874,0x880,0x8c0,0x8c2

	task_0_event_17(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_2157(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_123();
		var_51_object = Obj();
		var_14_object = var_51_object;
		func_2164(var_51_object);
	}
	return 0;
	}


task_0_event_1(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_bool, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_10_bool = Obj();
		func_8();
	}
	return 2;
}


task_0_event_3(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_bool, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_10_bool = Obj();
		func_8();
	}
	return 2;
}


task_1_event_0(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_bool = var_14_object;
		func_2176(var_14_object);
	}
	return 2;
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0;
}


task_1_event_16(var_0_object, var_1_string, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	return 0;
}


task_1_event_41(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0;
}


task_3_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_10_bool = Obj();
	func_2240();
	return 0;
}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2242(var_15_object);
	return 0;
}


task_3_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "kill";
	if(var_12_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


task_4_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_10_bool = Obj();
	func_2240();
	return 0;
}


task_4_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2242(var_15_object);
	return 0;
}


task_4_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
	}
	return 0;
}


task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_10_object = Obj();
	func_2240();
	return 0;
}


task_5_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_object = var_14_object;
	var_11_object = var_15_object;
	func_2242(var_15_object);
	return 0;
}


task_5_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_12_bool = var_10_string == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_1279(var_10_string);
	}
	return 0;
}


task_5_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_12_bool = var_10_int == (int)1;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_13_object = var_1_object;
		func_2062(var_13_object);
	} else {
		var_18_int = 0;
		var_10_int = var_18_int;
		func_1423(var_9_bool, var_10_int, var_18_int);
	}
	return 0;
	
}


task_5_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_bool = var_2_int == 0; //@nz
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = true;
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_1882(var_14_object);
	}
	return 0;
}


task_5_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_int = var_2_int;
		if(var_13_int != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_5_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object);
	return 0;
}


task_5_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_1279(var_10_object);
	var_10_object = Obj();
	func_2151();
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1784(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1852(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_2112(var_11_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	
Label_0:
	Sleep((int)3);
	func_42();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_2052(var_24_float)
{
	var_25_object = Obj(); var_26_object = Obj();
	CreateFloatVector(var_26_object);
	@@var_26_object:add(var_24_float);
	SendWorldWndMessage((int)16, var_26_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2062(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_16_bool = var_15_bool;
	if(var_16_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1552(var_535_float, var_536_object, var_537_float, var_538_int)
{
	var_542_int = 0; var_543_string = ""; var_544_int = 0; var_545_float = 0; var_546_float = 0; var_547_float = 0; var_548_int = 0; var_549_string = ""; var_550_int = 0; var_551_float = 0; var_552_float = 0; var_553_float = 0;
	var_554_bool = 0; var_555_object = Obj(); var_556_string = "";
	var_536_object = var_555_object;
	func_1518(var_554_bool, var_555_object, "health");
	var_557_bool = var_554_bool == 0; //@nz
	if(var_557_bool != 0) {
		var_535_float = 0.0;
		return 12;
	}
	var_558_bool = 0; var_559_object = Obj(); var_560_string = "";
	var_536_object = var_559_object;
	func_1518(var_558_bool, var_559_object, "armor");
	var_561_bool = var_558_bool == 0; //@nz
	if(var_561_bool != 0) {
		var_548_int = 0;
	} else {
			@@var_536_object:GetProperty("armor", var_548_int);
	}
	var_563_string = ""; var_564_int = 0;
	var_538_int = var_564_int;
	func_1484(var_563_string, var_564_int);
	var_549_string = "armor_" + var_563_string;
	var_569_bool = 0; var_570_object = Obj(); var_571_string = "";
	var_536_object = var_570_object;
	var_549_string = var_571_string;
	func_1518(var_569_bool, var_570_object, var_571_string);
	var_572_bool = var_569_bool == 0; //@nz
	if(var_572_bool != 0) {
		var_550_int = 0;
	} else {
		@@var_536_object:GetProperty(var_549_string, var_550_int);

	}
	var_573_float = 0; var_574_float = 0; var_575_float = 0;
	var_576_int = var_548_int + var_550_int;
	var_574_float = var_576_int / (float)100.0;
	func_1950(var_573_float, var_574_float, (float)1);
	var_573_float = var_551_float;
	@@var_536_object:GetProperty("health", var_552_float);
	var_581_int = (int)1 - var_551_float;
	var_553_float = var_537_float * var_581_int;
	var_583_float = 0; var_584_float = 0; var_585_float = 0; var_586_float = 0;
	var_584_float = var_552_float - var_553_float;
	func_1981(var_583_float, var_584_float, (float)0, (float)1);
	@@var_536_object:SetProperty("health", var_583_float);
	var_589_bool = 0; var_590_object = Obj();
	var_536_object = var_590_object;
	func_1513(var_589_bool, var_590_object);
	if(var_589_bool != 0) {
		var_591_float = 0;
		var_591_float = -var_553_float;
		func_2035(var_591_float);
	}
	var_553_float = var_535_float;
	return 12;
	
}


func_1044(var_0_object, var_442_bool)
{
	var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); var_446_float = 0; var_447_float = 0; var_448_cvector = CVector(0,0,0); var_449_cvector = CVector(0,0,0); var_450_cvector = CVector(0,0,0); var_451_float = 0; var_452_float = 0;
	var_453_bool = 0; var_454_object = Obj();
	var_454_object = var_0_object;
	func_1697(var_453_bool, var_454_object);
	var_455_bool = var_453_bool == 0; //@nz
	if(var_455_bool != 0) {
		var_442_bool = 0;
		return 10;
	}
	var_456_bool = 0;
	func_1133(var_452_float, var_456_bool);
	if(var_456_bool != 0) {
		@@@var_0_object:GetPFPosition(var_448_cvector);
		GetPFPosition(var_449_cvector);
		var_450_cvector = var_448_cvector - var_449_cvector;
		var_451_float = var_450_cvector | var_450_cvector;
		@@@var_0_object:GetAttackDistance(var_452_float);
		var_452_float = var_452_float + (int)50;
		var_458_float = var_452_float * var_452_float;
		var_442_bool = var_451_float <= var_458_float;
		return 10;
	}
	var_442_bool = 0;
	return 10;
}


func_532(var_0_object, var_3_int, var_5_bool, var_205_object, var_206_bool, var_207_float, var_276_bool, var_368_bool)
{
	var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_bool = 0; var_212_bool = 0; var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_bool = 0; var_223_bool = 0; var_224_float = 0; var_225_cvector = CVector(0,0,0); var_226_float = 0; var_227_cvector = CVector(0,0,0); var_228_bool = 0; var_229_float = 0;
	func_761(var_227_cvector, var_228_bool, var_229_float);
	var_5_bool = 0;
	var_254_bool = IsFuncExist(var_205_object, "@GetAttackDistance", (int)1);
	if(var_254_bool != 0) {
		@@var_205_object:GetAttackDistance(var_219_float);
		var_219_float = var_219_float + (int)50;
	} else {
							var_207_float = var_219_float;
	}
	var_257_bool = var_219_float >= (int)150;
	if(var_257_bool != 0) {
		var_219_float = 150;
	}
	var_3_int = false;
	var_0_object = var_205_object;
	IsPlayerActor(var_0_object, var_222_bool);
	var_258_bool = var_222_bool;
	if(var_258_bool != 0) {
		PlayGlobalMusic("attack");
		var_260_object = Obj();
		func_1934(var_260_object);
		SendPlayerEnemy(var_205_object, var_260_object);
	}
	var_261_bool = var_206_bool;
	if(var_261_bool != 0) {
		var_223_bool = 0;
	} else {
						var_223_bool = 1;

	}
	var_224_float = (float)300.0 + var_219_float;
	
Label_572:
	var_263_bool = 0;
	var_263_bool = 0;
	var_264_bool = 0; var_265_object = Obj();
	var_265_object = var_0_object;
	func_1697(var_264_bool, var_265_object);
	if(var_264_bool != 0) {
		var_266_bool = var_3_int == 0; //@nz
		if(var_266_bool != 0) {
			var_263_bool = 1;
		}
	}
	if(var_263_bool != 0) {
		func_1176(var_229_float);
		@@@var_0_object:GetPFPosition(var_220_cvector);
		GetPFPosition(var_221_cvector);
		var_225_cvector = var_220_cvector - var_221_cvector;
		var_226_float = var_225_cvector | var_225_cvector;
		var_268_float = var_224_float * var_224_float;
		var_269_bool = var_226_float >= var_268_float;
		if(var_269_bool != 0) {
			var_270_bool = 0; var_271_object = Obj(); var_272_float = 0; var_273_float = 0; var_274_bool = 0; var_275_bool = 0;
			var_271_object = var_0_object;
			var_219_float = var_272_float;
			TaskCall(5);
			func_1216(var_278_bool, var_270_bool, var_271_object, var_272_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_353_bool = var_276_bool == 0; //@nz
			if(var_353_bool != 0) {
			} else {
				var_223_bool = 0;
		} else {
				var_359_float = var_207_float * var_207_float;
				var_360_bool = var_226_float >= var_359_float;
				if(var_360_bool != 0) {
					@@@var_0_object:GetPFPosition(var_227_cvector);
					CanReachByPF(var_228_bool, var_227_cvector);
					var_361_bool = var_228_bool == 0; //@nz
					if(var_361_bool != 0) {
						var_362_bool = 0; var_363_object = Obj(); var_364_float = 0; var_365_float = 0; var_366_bool = 0; var_367_bool = 0;
						var_363_object = var_0_object;
						var_219_float = var_364_float;
						TaskCall(5);
						func_1216(var_370_bool, var_362_bool, var_363_object, var_364_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_371_bool = var_368_bool == 0; //@nz
						if(var_371_bool != 0) {
							goto Label_744;
						}
						var_223_bool = 0;
						goto Label_572;
					}
					var_372_bool = var_223_bool == 0; //@nz
					if(var_372_bool != 0) {
						var_373_object = Obj();
						var_373_object = var_0_object;
						func_1866(var_373_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1176(var_229_float);
						StopAsync();
						var_223_bool = 1;
						var_384_bool = 0; var_385_object = Obj();
						var_385_object = var_0_object;
						func_1697(var_384_bool, var_385_object);
						var_386_bool = var_384_bool == 0; //@nz
						if(var_386_bool != 0) {
							goto Label_744;
						}
					}
					rand(var_229_float);
					var_387_bool = 0;
					var_389_bool = var_229_float < (float)0.19999998807907104;
					if(var_389_bool != 1) {
						var_390_bool = 0;
						func_1133((bool)1, var_390_bool);
						if(var_390_bool != 1) {
							var_387_bool = 0;
						}
					}
					if(var_387_bool != 0) {
						Face(var_0_object);
						func_1181();
						PlayAnimation("all", "attack_stay");
						var_427_bool = 0; var_428_float = 0;
						var_207_float = var_428_float;
						func_1001(var_229_float, var_427_bool, var_428_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1176(var_229_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_666_bool = 0;
						func_1133(var_229_float, var_666_bool);
						var_667_bool = var_666_bool == 0; //@nz
						if(var_667_bool == 0) goto Label_734;
						var_668_bool = 0; var_669_object = Obj();
						var_669_object = var_0_object;
						func_1697(var_668_bool, var_669_object);
						var_670_bool = var_668_bool == 0; //@nz
						if(var_670_bool != 0) {
							goto Label_744;
						}
						@@@var_0_object:GetPFPosition(var_220_cvector);
						GetPFPosition(var_221_cvector);
						var_225_cvector = var_220_cvector - var_221_cvector;
						var_226_float = var_225_cvector | var_225_cvector;
						var_671_float = var_207_float * var_207_float;
						var_672_bool = var_226_float < var_671_float;
						if(var_672_bool == 0) goto Label_734;
						var_673_bool = 0; var_674_float = 0;
						var_207_float = var_674_float;
						func_835(var_228_bool, var_229_float, var_673_bool, var_674_float);
						var_675_bool = var_673_bool == 0; //@nz
						if(var_675_bool == 0) goto Label_734;
						goto Label_744;
				}
					var_676_bool = 0; var_677_float = 0;
					var_207_float = var_677_float;
					func_835(var_228_bool, var_229_float, var_676_bool, var_677_float);
					var_678_bool = var_676_bool == 0; //@nz
					if(var_678_bool != 0) {
						goto Label_744;
					}
					var_223_bool = 1;

				}
			Label_734:
				goto Label_743;
		}
		Label_743:
			goto Label_572;

		}
	}
Label_744:
	WaitForAnimEnd();
	var_354_int = var_3_int;
	if(var_354_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_357_bool = var_222_bool;
	if(var_357_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2071()
{
	var_119_object = Obj(); var_120_object = Obj();
	GetScene(var_120_object);
	var_122_object = Obj();
	func_1934(var_122_object);
	BroadcastMessage("battle", var_122_object, var_120_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2082(var_617_bool)
{
	var_618_bool = 0; var_619_bool = 0;
	GetVariable("god_mode", var_619_bool);
	var_619_bool = var_617_bool;
	return 2;
}


func_2088(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_42()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_1877(var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 14;
	}
	func_2095((int)0);
	var_29_int = var_18_int;
	var_19_int = 0;
	
Label_56:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_19_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_1877(var_45_bool);
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		irand(var_20_int, (int)3);
		var_48_bool = var_20_int == (int)0;
		if(var_48_bool != 0) {
			var_49_int = var_18_int;
			if(var_49_int == 0) goto Label_89;
			irand(var_21_int, var_18_int);
			var_51_string = ""; var_52_int = 0;
			var_21_int = var_52_int;
			func_2088(var_51_string, var_52_int);
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
						goto Label_118;
					}
					goto Label_107;
				}
				var_63_int = var_19_int;
				if(var_63_int == 0) goto Label_107;
				goto Label_118;
		}
		Label_107:
			var_54_bool = 0;
			func_121(var_54_bool);
			var_55_bool = var_54_bool == 0; //@nz
			if(var_55_bool != 0) {
				goto Label_118;
			}
			ResetAAS();
			var_19_int = var_19_int + (int)1;
			goto Label_56;

		}
	}
Label_118:
	ResetAAS();
	return 14;
	
}


func_2095(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_2097:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_2088(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_2097;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_1072(var_440_bool)
{
	var_441_bool = 0;
	var_441_bool = 0;
	var_442_bool = 0;
	func_1044(var_441_bool, var_442_bool);
	if(var_442_bool != 0) {
		var_459_bool = 0;
		func_1088(var_440_bool, var_441_bool, var_459_bool);
		if(var_459_bool != 0) {
			var_441_bool = 1;
		}
	}
	if(var_441_bool != 0) {
		var_440_bool = 1;
		return 0;
	}
	var_440_bool = 0;
	return 0;
}


func_1088(var_0_object, var_4_int, var_459_bool)
{
	var_460_object = Obj(); var_461_bool = 0; var_462_float = 0; var_463_cvector = CVector(0,0,0); var_464_cvector = CVector(0,0,0); var_465_object = Obj(); var_466_bool = 0; var_467_float = 0; var_468_cvector = CVector(0,0,0); var_469_cvector = CVector(0,0,0);
	GetScene(var_465_object);
	var_466_bool = 0;
	
Label_1092:
	var_470_cvector = CVector(0,0,0); var_471_object = Obj();
	var_471_object = var_0_object;
	func_1498(var_470_cvector, var_471_object);
	var_476_int = -var_470_cvector;
	FindDirLength(var_467_float, var_476_int, var_4_int);
	var_477_bool = var_467_float < var_4_int;
	if(var_477_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_468_cvector);
		GetPFPosition(var_469_cvector);
		WaitForAnimEnd();
		func_1176(var_469_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_466_bool = 1;
		var_481_bool = 0;
		func_1044(var_469_cvector, var_481_bool);
		var_482_bool = var_481_bool == 0; //@nz
		if(var_482_bool != 0) {
			goto Label_1130;
		}
		goto Label_1092;
	}
Label_1130:
	var_466_bool = var_459_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2112(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(1);
	func_128(var_12_object);
	TaskReturn();
	return 0;
}


func_1625(var_606_bool, var_607_object)
{
	var_608_float = 0; var_609_float = 0;
	var_610_bool = 0; var_611_object = Obj(); var_612_string = "";
	var_607_object = var_611_object;
	func_1518(var_610_bool, var_611_object, "health");
	var_613_bool = var_610_bool == 0; //@nz
	if(var_613_bool != 0) {
		var_606_bool = 0;
		return 2;
	}
	var_614_bool = 0;
	var_614_bool = 0;
	var_615_bool = 0; var_616_object = Obj();
	var_607_object = var_616_object;
	func_1513(var_615_bool, var_616_object);
	if(var_615_bool != 0) {
		var_617_bool = 0;
		func_2082(var_617_bool);
		if(var_617_bool != 0) {
			var_614_bool = 1;
		}
	}
	if(var_614_bool != 0) {
		var_606_bool = 0;
		return 2;
	}
	@@var_607_object:GetProperty("health", var_609_float);
	var_606_bool = var_609_float <= (float)0.0;
	return 2;
}


func_2157(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1697(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_1133(var_0_object, var_390_bool)
{
	var_391_bool = 0; var_392_bool = 0;
	var_395_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_395_bool != 0) {
		@@@var_0_object:IsAttacking(var_392_bool);
		var_392_bool = var_390_bool;
		return 2;
	}
	var_390_bool = 0;
	return 2;
}


func_2164(var_51_object)
{
	var_52_object = Obj();
	var_51_object = var_52_object;
	func_2189(var_52_object);
	return 0;
}


func_1656(var_38_bool, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0;
	@@var_39_object:IsDead(var_41_bool);
	var_41_bool = var_38_bool;
	return 2;
}


func_121(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_2170(var_15_int)
{
	var_16_int = 0; var_17_int = 0;
	GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
	return 2;
}


func_123()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1144(var_2_object, var_5_bool)
{
	var_503_float = 0; var_504_int = 0; var_505_float = 0; var_506_int = 0;
	var_507_bool = var_2_object == 0; //@nz
	if(var_507_bool != 0) {
		return 4;
	}
	var_508_bool = var_5_bool;
	if(var_508_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_511_bool = var_5_bool > (int)0;
		if(var_511_bool != 0) {
			return 4;
		}
	}
	rand(var_505_float);
	var_512_float = 0;
	func_1190(var_512_float);
	var_513_bool = var_505_float < var_512_float;
	if(var_513_bool != 0) {
		irand(var_506_int, var_2_object);
		var_506_int = var_506_int + (int)1;
		var_516_int = "attack" + var_506_int;
		Speak(var_516_int);
		var_517_int = 0;
		func_1188(var_517_int);
		var_5_bool = var_517_int;
	}
	return 4;
}


func_1661(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	var_33_bool = var_28_object == 0; //@ne
	if(var_33_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_34_bool = 0;
	var_34_bool = 0;
	var_37_bool = IsFuncExist(var_28_object, "IsDead", (int)1);
	if(var_37_bool != 0) {
		var_38_bool = 0; var_39_object = Obj();
		var_28_object = var_39_object;
		func_1656(var_38_bool, var_39_object);
		if(var_38_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	GetScene(var_31_object);
	var_42_bool = var_31_object == 0; //@ne
	if(var_42_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	@@var_28_object:GetScene(var_32_object);
	var_43_bool = var_31_object != var_32_object;
	if(var_43_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_27_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2176(var_14_object)
{
	var_15_int = 0;
	func_2170(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_128(var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1513(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		var_17_bool = 0; var_18_object = Obj(); var_19_float = 0;
		var_12_object = var_18_object;
		func_2000(var_17_bool, var_18_object, (float)0.029999999329447746);
	}
	var_55_object = Obj();
	var_12_object = var_55_object;
	func_144(var_55_object);
	return 0;
}


func_2189(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	GetScene(var_54_object);
	var_55_object = Obj();
	func_1934(var_55_object);
	@@var_54_object:RemoveStationaryActor(var_55_object);
	var_58_object = Obj();
	var_52_object = var_58_object;
	TaskCall(6);
	func_1472(var_58_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_144(var_55_object)
{
	EventDisable(0);
	var_56_object = Obj();
	var_55_object = var_56_object;
	func_169(var_56_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_155:
	Hold();
	goto Label_155;
}
EMIT "Return(); Pop(0)";


func_1176(var_0_object)
{
	var_267_object = Obj();
	var_267_object = var_0_object;
	func_2062(var_267_object);
	return 0;
}


func_2205(var_140_cvector, var_141_cvector, var_142_cvector, var_143_float)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0; var_149_float = 0; var_150_cvector = CVector(0,0,0); var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; var_155_float = 0;
	var_150_cvector = var_142_cvector - var_141_cvector;
	var_151_float = 250000;
	var_156_float = GetByIndex(var_150_cvector, 1);
	var_158_float = var_156_float * (int)1000;
	var_159_float = var_143_float * var_143_float;
	var_152_float = var_158_float - var_159_float;
	var_153_float = var_150_cvector | var_150_cvector;
	var_160_float = 0; var_161_float = 0; var_162_float = 0; var_163_float = 0;
	var_151_float = var_161_float;
	var_152_float = var_162_float;
	var_153_float = var_163_float;
	func_1957(var_160_float, var_161_float, var_162_float, var_163_float);
	var_160_float = var_154_float;
	var_169_bool = var_154_float < (int)0;
	if(var_169_bool != 0) {
		var_155_float = 1;
	} else {
		var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0;
		var_151_float = var_175_float;
		var_152_float = var_176_float;
		var_153_float = var_177_float;
		var_178_float = sqrt(var_154_float);
		func_1964(var_175_float, var_176_float, var_177_float, var_178_float);
		var_155_float = sqrt(var_174_float);
	}
	var_171_float = CVector(0.0, 500.0, 0.0) * var_155_float;
	var_172_float = var_171_float * var_155_float;
	var_173_int = var_150_cvector + var_172_float;
	var_140_cvector = var_173_int / var_155_float;
	return 12;
	
}


func_1181()
{
	var_396_string = "";
	func_1893("attack_stay");
	return 0;
}


func_1697(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_24_object = var_28_object;
	func_1661(var_27_bool, var_28_object);
	var_44_bool = var_27_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
	var_24_object = var_46_object;
	func_1518(var_45_bool, var_46_object, "noaccess");
	var_54_bool = var_45_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_23_bool = 1;
		return 2;
	}
	@@var_24_object:GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == (int)0;
	return 2;
}


func_1186(var_646_bool)
{
	var_646_bool = 1;
	return 0;
}


func_1188(var_517_int)
{
	var_517_int = 1;
	return 0;
}


func_1190(var_512_float)
{
	var_512_float = 0.5;
	return 0;
}


func_169(var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_object = Obj(); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_string = ""; var_72_object = Obj(); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0);
	var_77_bool = var_56_object == 0; //@ne
	if(var_77_bool != 0) {
		var_78_string = "";
		func_260("fdie");
	} else {
		@@var_56_object:GetPosition(var_67_cvector);
		GetPosition(var_68_cvector);
		GetDirection(var_69_cvector);
		var_70_cvector = var_68_cvector - var_67_cvector;
		var_110_float = GetByIndex(var_70_cvector, 0);
		var_111_float = GetByIndex(var_69_cvector, 0);
		var_112_float = var_110_float * var_111_float;
		var_113_float = GetByIndex(var_70_cvector, 2);
		var_114_float = GetByIndex(var_69_cvector, 2);
		var_115_float = var_113_float * var_114_float;
		var_116_int = var_112_float + var_115_float;
		var_118_bool = var_116_int >= (int)0;
		if(var_118_bool != 0) {
			var_71_string = "fdie";
		} else {
				var_71_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_56_object = var_72_object;
		var_121_bool = IsFuncExist(var_56_object, "GetScriptProperty", (int)2);
		if(var_121_bool != 0) {
			@@var_56_object:HasScriptProperty(var_73_bool, "Owner");
			var_123_bool = var_73_bool;
			if(var_123_bool != 0) {
				@@var_56_object:GetScriptProperty(var_72_object, "Owner");
				var_125_bool = var_72_object == 0; //@ne
				if(var_125_bool != 0) {
					var_56_object = var_72_object;
				}
			}
		}
		var_128_bool = IsFuncExist(var_72_object, "@GetEyesHeight", (int)1);
		if(var_128_bool != 0) {
			@@var_72_object:GetEyesHeight(var_75_float);
			var_76_cvector = CVector(0.0, 0.0, 0.0);
			var_129_float = GetByIndex(var_76_cvector, 1);
			var_75_float = var_129_float;
			SetByIndex(var_76_cvector, 1) = var_129_float;
			LookAsync(var_56_object, "head", var_76_cvector);
			var_74_bool = 1;
		} else {
			var_74_bool = 0;

		}
		var_131_string = "";
		var_71_string = var_131_string;
		func_1893(var_131_string);
		PlayAnimation("all", var_71_string);
		WaitForAnimEnd();
		var_133_bool = var_74_bool;
		if(var_133_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_71_string);
		RemoveEnvelope();
		var_72_object = 0;
	}
	return 20;
	
}


func_1721(var_106_bool, var_107_cvector)
{
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0;
	GetPosition(var_111_cvector);
	var_112_cvector = var_107_cvector - var_111_cvector;
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_115_float = GetByIndex(var_112_cvector, 2);
	Rotate(var_114_float, var_115_float, var_113_bool);
	var_113_bool = var_106_bool;
	return 6;
}


func_2240()
{
	return 0;
}


func_1216(var_2_object, var_270_bool, var_271_object, var_272_float, var_273_float, var_274_bool, var_275_bool)
{
	var_279_bool = 0; var_280_bool = 0; var_281_bool = 0; var_282_bool = 0;
	var_283_object = Obj();
	var_271_object = var_283_object;
	func_2062(var_283_object);
	SetTimer((int)1, (int)5);
	CanSee(var_281_bool, var_271_object);
	var_286_bool = var_281_bool;
	if(var_286_bool != 0) {
		var_2_object = true;
		var_287_object = Obj();
		var_271_object = var_287_object;
		func_1882(var_287_object);
	} else {
		var_2_object = false;
	}
	var_294_bool = 0; var_295_object = Obj();
	var_271_object = var_295_object;
	func_1513(var_294_bool, var_295_object);
	if(var_294_bool != 0) {
		var_298_object = Obj();
		func_1934(var_298_object);
		SendPlayerEnemy(var_271_object, var_298_object);
	}
	var_299_bool = 0; var_300_object = Obj(); var_301_float = 0; var_302_float = 0; var_303_bool = 0; var_304_bool = 0;
	var_271_object = var_300_object;
	var_272_float = var_301_float;
	var_273_float = var_302_float;
	var_274_bool = var_303_bool;
	var_275_bool = var_304_bool;
	func_1321(var_281_bool, var_282_bool, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool);
	var_299_bool = var_282_bool;
	var_350_object = var_2_object;
	if(var_350_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_282_bool = var_270_bool;
	return 4;
	
}


func_2242(var_13_bool)
{
	var_13_bool = 0;
	return 0;
}


func_1731(var_102_bool, var_103_object)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0);
	@@var_103_object:GetPosition(var_105_cvector);
	var_106_bool = 0; var_107_cvector = CVector(0,0,0);
	var_105_cvector = var_107_cvector;
	func_1721(var_106_bool, var_107_cvector);
	var_106_bool = var_102_bool;
	return 2;
}


func_1740(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = var_27_object == 0; //@ne
	if(var_42_bool != 0) {
		return 14;
	}
	IsDead(var_35_bool);
	var_43_bool = var_35_bool;
	if(var_43_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_36_int);
	var_45_bool = var_36_int < (int)0;
	if(var_45_bool != 0) {
		return 14;
	}
	@@var_27_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_57_int = var_41_string + "1";
	var_59_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 14;
	
}


func_1784(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_object = var_14_object;
	if(var_37_object != 0) {
		var_39_bool = var_15_int != (int)4;
		if(var_39_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
		var_44_cvector = CVector(0,0,0); var_45_object = Obj();
		var_14_object = var_45_object;
		func_1498(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1940(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1813:
		var_56_int = "hit" + var_28_int;
		GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector);
		var_57_bool = var_29_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_105_int = var_31_cvector | var_26_cvector;
			var_107_bool = var_105_int >= (float)0.7071067690849304;
			if(var_107_bool != 0) {
				@@var_27_object:add(var_30_cvector);
			}
			var_28_int = var_28_int + (int)1;
			goto Label_1813;
		}
		@@var_27_object:size(var_32_int);
		var_58_int = var_32_int;
		if(var_58_int != 0) {
			irand(var_33_int, var_32_int);
			@@var_27_object:get(var_34_cvector, var_33_int);
			var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
			var_14_object = var_59_object;
			var_15_int = var_60_int;
			var_16_float = var_61_float;
			var_34_cvector = var_62_cvector;
			var_63_cvector = -var_26_cvector;
			func_1852(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1740(var_104_object);
	return 18;
	
}


func_761(var_1_bool, var_2_object, var_4_int)
{
	var_230_bool = 0; var_231_bool = 0; var_232_cvector = CVector(0,0,0); var_233_bool = 0; var_234_bool = 0; var_235_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_763:
	var_239_int = var_1_bool + (int)1;
	var_240_int = "attack_begin" + var_239_int;
	HasAnimation(var_233_bool, "all", var_240_int);
	var_241_bool = var_233_bool == 0; //@nz
	if(var_241_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_763;
	}
	var_2_object = 0;
	
Label_777:
	var_244_int = var_2_object + (int)1;
	var_245_int = "attack" + var_244_int;
	IsExisting3DSound(var_234_bool, var_245_int);
	var_246_bool = var_234_bool == 0; //@nz
	if(var_246_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_777;

	}
	GetAnimationOffset(var_235_cvector, "all", "bjump");
	var_249_float = GetByIndex(var_235_cvector, 2);
	var_4_int = -var_249_float;
	return 6;
	
}


func_1279(var_2_int)
{
	KillTimer((int)1);
	var_12_int = var_2_int;
	if(var_12_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1445(var_10_object);
	return 0;
}


func_260(var_78_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_79_string = "";
	var_78_string = var_79_string;
	func_1893(var_79_string);
	PlayAnimation("all", var_78_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_78_string);
	RemoveEnvelope();
	return 0;
}


func_796(var_0_object, var_521_float, var_522_int)
{
	var_523_object = Obj(); var_524_float = 0; var_525_float = 0; var_526_object = Obj(); var_527_float = 0; var_528_float = 0;
	var_530_float = var_521_float * (float)0.8999999761581421;
	GetVictim(var_530_float, var_526_object);
	ReportAttack(var_0_object);
	var_531_bool = var_526_object == var_0_object;
	if(var_531_bool != 0) {
		var_532_float = 0; var_533_object = Obj(); var_534_int = 0;
		var_526_object = var_533_object;
		var_522_int = var_534_int;
		func_483(var_534_int);
		var_532_float = var_527_float;
		var_535_float = 0; var_536_object = Obj(); var_537_float = 0; var_538_int = 0;
		var_526_object = var_536_object;
		var_527_float = var_537_float;
		var_539_int = 0; var_540_object = Obj(); var_541_int = 0;
		var_526_object = var_540_object;
		var_522_int = var_541_int;
		func_486(var_541_int);
		var_539_int = var_538_int;
		func_1552(var_535_float, var_536_object, var_537_float, var_538_int);
		var_535_float = var_528_float;
		var_600_int = 0;
		func_489(var_600_int);
		ReportHit(var_0_object, var_600_int, var_528_float, var_527_float);
		var_601_object = Obj(); var_602_float = 0;
		var_526_object = var_601_object;
		var_528_float = var_602_float;
		func_491(var_601_object, var_602_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_292(var_59_bool, var_60_object, var_82_bool, var_687_object)
{
	var_61_float = 0; var_62_float = 0;
	var_63_bool = 0; var_64_object = Obj();
	var_60_object = var_64_object;
	func_1697(var_63_bool, var_64_object);
	var_65_bool = var_63_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_59_bool = 0;
		return 2;
	}
	var_66_float = 0; var_67_object = Obj();
	var_60_object = var_67_object;
	func_1505(var_66_float, var_67_object);
	var_66_float = var_62_float;
	var_74_bool = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0;
	var_62_float = var_75_float;
	func_1992(var_74_bool, var_75_float, (float)250000.0, (float)3240000.0);
	if(var_74_bool != 0) {
		var_80_bool = 0; var_81_object = Obj();
		var_60_object = var_81_object;
		TaskCall(3);
		func_329(var_62_float, var_82_bool, var_80_bool, var_81_object);
		TaskReturn();
		var_82_bool = var_59_bool;
		return 2;
	}
	var_685_bool = 0; var_686_object = Obj();
	var_60_object = var_686_object;
	TaskCall(4);
	func_455(var_685_bool, var_686_object);
	TaskReturn();
	var_687_object = var_59_bool;
	return 2;
}


func_1321(var_0_object, var_1_bool, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool)
{
	var_305_bool = 0; var_306_bool = 0; var_307_object = Obj(); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_object = Obj(); var_313_bool = 0; var_314_bool = 0; var_315_object = Obj(); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_object = Obj();
	var_0_object = false;
	var_1_bool = var_300_object;
	var_304_bool = var_314_bool;
	
Label_1325:
	var_321_bool = 0; var_322_object = Obj();
	var_300_object = var_322_object;
	func_1461(var_321_bool, var_322_object);
	var_325_bool = var_321_bool == 0; //@nz
	if(var_325_bool != 0) {
		var_299_bool = 0;
		return 16;
	}
	@@var_300_object:GetPosition(var_316_cvector);
	GetPosition(var_317_cvector);
	var_318_cvector = var_316_cvector - var_317_cvector;
	var_319_float = var_318_cvector | var_318_cvector;
	var_326_bool = 0;
	var_326_bool = 0;
	var_328_bool = var_302_float > (int)0;
	if(var_328_bool != 0) {
		var_329_float = var_302_float * var_302_float;
		var_330_bool = var_319_float > var_329_float;
		if(var_330_bool != 0) {
			var_326_bool = 1;
		}
	}
	if(var_326_bool != 0) {
		Stop();
		var_299_bool = 0;
		return 16;
	}
	var_331_float = var_301_float * var_301_float;
	var_332_bool = var_319_float > var_331_float;
	if(var_332_bool != 0) {
		@@var_300_object:GetPFPosition(var_316_cvector);
		FindPathTo(var_320_object, var_316_cvector);
		var_333_bool = var_320_object != 0; //@nn
		if(var_333_bool != 0) {
			var_320_object = var_315_object;
			var_320_object = 0;
		}
		var_334_bool = var_315_object != 0; //@nn
		if(var_334_bool != 0) {
			var_335_bool = var_314_bool;
			if(var_335_bool == 0) goto Label_1374;
			var_314_bool = 0;
			RotatePath(var_315_object, var_313_bool);
			var_336_bool = var_313_bool == 0; //@nz
			if(var_336_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_339_string = "";
				func_1468(var_339_string);
				var_340_string = "";
				func_1470(var_340_string);
				FollowPath(var_315_object, var_303_bool, var_313_bool, var_339_string, var_340_string);
				var_341_bool = var_313_bool == 0; //@nz
				if(var_341_bool != 0) {
					var_342_object = var_0_object;
					if(var_342_object != 0) {
						var_315_object = 0;
						goto Label_1421;
					EMIT "GOTO 0x572";
					}
				} else {
					var_315_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_313_bool);
					var_345_bool = var_313_bool == 0; //@nz
					if(var_345_bool != 0) {
						var_346_object = var_0_object;
						if(var_346_object != 0) {
							var_315_object = 0;
							goto Label_1421;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1421;
	}
			var_320_object = 0;
			goto Label_1419;

		Label_1419:
			var_315_object = 0;

		}
		goto Label_1325;
	}
Label_1421:
	var_299_bool = !var_0_object;
	return 16;
	
}


func_1852(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1740(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_835(var_0_object, var_1_bool, var_488_bool, var_489_float)
{
	var_490_int = 0; var_491_bool = 0; var_492_int = 0; var_493_string = ""; var_494_int = 0; var_495_bool = 0; var_496_int = 0; var_497_string = "";
	func_1176(var_497_string);
	irand(var_494_int, var_1_bool);
	var_494_int = var_494_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2071();
	var_502_int = "attack_begin" + var_494_int;
	PlayAnimation("all", var_502_int);
	WaitForAnimEnd();
	func_1144(var_496_int, var_497_string);
	var_518_bool = 0; var_519_object = Obj();
	var_519_object = var_0_object;
	func_1697(var_518_bool, var_519_object);
	var_520_bool = var_518_bool == 0; //@nz
	if(var_520_bool != 0) {
		StopAsync();
		var_488_bool = 0;
		return 8;
	}
	var_521_float = 0; var_522_int = 0;
	var_489_float = var_521_float;
	var_494_int = var_522_int;
	func_796(var_497_string, var_521_float, var_522_int);
	var_626_int = "attack_middle" + var_494_int;
	HasAnimation(var_495_bool, "all", var_626_int);
	var_627_bool = var_495_bool;
	if(var_627_bool != 0) {
		func_2071();
		var_630_int = "attack_middle" + var_494_int;
		PlayAnimation("all", var_630_int);
		WaitForAnimEnd();
		func_1176(var_497_string);
		var_631_bool = 0; var_632_object = Obj();
		var_632_object = var_0_object;
		func_1697(var_631_bool, var_632_object);
		var_633_bool = var_631_bool == 0; //@nz
		if(var_633_bool != 0) {
			StopAsync();
			var_488_bool = 0;
			return 8;
		}
		var_634_float = 0; var_635_int = 0;
		var_489_float = var_634_float;
		var_494_int = var_635_int;
		func_796(var_497_string, var_634_float, var_635_int);
		var_496_int = 1;

	Label_912:
		var_637_int = "attack_middle" + var_494_int;
		var_639_int = var_637_int + "_";
		var_497_string = var_639_int + var_496_int;
		HasAnimation(var_495_bool, "all", var_497_string);
		var_641_bool = var_495_bool == 0; //@nz
		if(var_641_bool != 0) {
		} else {
			func_2071();
			PlayAnimation("all", var_497_string);
			WaitForAnimEnd();
			func_1176(var_497_string);
			var_657_bool = 0; var_658_object = Obj();
			var_658_object = var_0_object;
			func_1697(var_657_bool, var_658_object);
			var_659_bool = var_657_bool == 0; //@nz
			if(var_659_bool != 0) {
				StopAsync();
				var_488_bool = 0;
				var_660_float = 0; var_661_int = 0;
				var_489_float = var_660_float;
				var_494_int = var_661_int;
				func_796(var_497_string, var_660_float, var_661_int);
				var_496_int = var_496_int + (int)1;
				goto Label_912;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_645_int = "attack_end" + var_494_int;
	PlayAnimation("all", var_645_int);
	var_646_bool = 0;
	func_1186(var_646_bool);
	if(var_646_bool != 0) {
		var_647_bool = 0; var_648_float = 0;
		func_974(var_647_bool, (float)0.44999998807907104);
		StopAsync();
	}
	var_488_bool = 1;
	return 8;
	
}


func_329(var_0_object, var_80_bool, var_81_object, var_198_object)
{
	var_83_object = Obj(); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_object = Obj(); var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_object = Obj(); var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_cvector = CVector(0,0,0);
	var_97_object = Obj();
	var_81_object = var_97_object;
	func_2062(var_97_object);
	var_0_object = false;
	var_102_bool = 0; var_103_object = Obj();
	var_81_object = var_103_object;
	func_1731(var_102_bool, var_103_object);
	var_116_bool = 0; var_117_object = Obj();
	var_81_object = var_117_object;
	func_1697(var_116_bool, var_117_object);
	var_118_bool = var_116_bool == 0; //@nz
	if(var_118_bool != 0) {
		var_80_bool = 0;
		return 14;
	}
	func_2071();
	Face(var_81_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_125_bool = 0; var_126_object = Obj();
	var_81_object = var_126_object;
	func_1697(var_125_bool, var_126_object);
	var_127_bool = var_125_bool == 0; //@nz
	if(var_127_bool != 0) {
		StopAsync();
		var_80_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_90_object);
	GetGeometryLocator("knife", var_92_bool, var_91_cvector);
	AddActorByType(var_93_object, "scripted", var_90_object, var_91_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_135_object = Obj();
	func_1934(var_135_object);
	@@var_93_object:SetScriptProperty("Owner", var_135_object);
	@@var_93_object:SetScriptProperty("Target", var_81_object);
	@@var_81_object:GetPosition(var_94_cvector);
	@@var_81_object:GetEyesHeight(var_95_float);
	var_137_float = GetByIndex(var_94_cvector, 1);
	var_139_int = var_95_float - (int)10;
	var_137_float = var_137_float + var_139_int;
	SetByIndex(var_94_cvector, 1) = var_137_float;
	var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_float = 0;
	var_91_cvector = var_141_cvector;
	var_94_cvector = var_142_cvector;
	func_2205(var_140_cvector, var_141_cvector, var_142_cvector, (float)2000.0);
	var_140_cvector = var_96_cvector;
	@@var_93_object:SetScriptProperty("StartDirection", var_96_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_192_object = var_0_object;
	if(var_192_object != 0) {
		var_80_bool = 1;
		return 14;
	}
	var_193_bool = 0; var_194_object = Obj();
	var_81_object = var_194_object;
	func_1697(var_193_bool, var_194_object);
	var_195_bool = var_193_bool == 0; //@nz
	if(var_195_bool != 0) {
		var_80_bool = 0;
		return 14;
	}
	var_196_bool = 0; var_197_object = Obj();
	var_81_object = var_197_object;
	TaskCall(4);
	func_455(var_196_bool, var_197_object);
	TaskReturn();
	var_198_object = var_80_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_1866(var_373_object)
{
	var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0);
	@@var_373_object:GetPosition(var_377_cvector);
	GetPosition(var_378_cvector);
	var_379_cvector = var_377_cvector - var_378_cvector;
	var_380_float = GetByIndex(var_379_cvector, 0);
	var_381_float = GetByIndex(var_379_cvector, 2);
	RotateAsync(var_380_float, var_381_float);
	return 6;
}


func_1877(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
	return 2;
}


func_1882(var_14_object)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0);
	@@var_14_object:GetEyesHeight(var_17_float);
	var_18_cvector = CVector(0.0, 0.0, 0.0);
	var_19_float = GetByIndex(var_18_cvector, 1);
	var_17_float = var_19_float;
	SetByIndex(var_18_cvector, 1) = var_19_float;
	LookAsync(var_14_object, "head", var_18_cvector);
	return 4;
}


func_1893(var_79_string)
{
	var_80_bool = 0; var_81_int = 0; var_82_bool = 0; var_83_int = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_int = 0; var_90_bool = 0; var_91_int = 0; var_92_bool = 0; var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0);
	IsExisting3DSound(var_88_bool, var_79_string);
	var_96_bool = var_88_bool == 0; //@nz
	if(var_96_bool != 0) {
		var_89_int = 0;

	Label_1899:
		var_98_int = var_89_int + (int)1;
		var_99_int = var_79_string + var_98_int;
		IsExisting3DSound(var_90_bool, var_99_int);
		var_100_bool = var_90_bool == 0; //@nz
		if(var_100_bool != 0) {
		} else {
			var_89_int = var_89_int + (int)1;
			goto Label_1899;
		}
		var_101_bool = var_89_int == 0; //@nz
		if(var_101_bool != 0) {
			return 16;
		}
		irand(var_91_int, var_89_int);
		var_103_int = var_91_int + (int)1;
		var_79_string = var_79_string + var_103_int;
	}
	Is3DSoundLoaded(var_92_bool, var_79_string);
	var_104_bool = var_92_bool;
	if(var_104_bool != 0) {
		GetEyesHeight(var_93_float);
		GetDirection(var_94_cvector);
		var_95_cvector = var_94_cvector * (int)50;
		var_106_float = GetByIndex(var_95_cvector, 1);
		var_106_float = var_106_float + var_93_float;
		SetByIndex(var_95_cvector, 1) = var_106_float;
		PlayGlobalSound(var_79_string, var_95_cvector);
	}
	return 16;
	
}


func_1934(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj();
	self(var_57_object);
	var_57_object = var_55_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1423(var_0_bool, var_1_object, var_18_int)
{
	var_20_bool = var_18_int != (int)0;
	if(var_20_bool != 0) {
		return 0;
	}
	var_21_bool = 0; var_22_object = Obj();
	var_22_object = var_1_object;
	func_1461(var_21_bool, var_22_object);
	var_57_bool = var_21_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1940(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_51_float;
	return 2;
}


func_1950(var_573_float, var_574_float, var_575_float)
{
	var_578_bool = var_574_float < var_575_float;
	if(var_578_bool != 0) {
		var_574_float = var_573_float;
	} else {
		var_575_float = var_573_float;
	}
	return 0;
	
}


func_1445(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1957(var_160_float, var_161_float, var_162_float, var_163_float)
{
	var_164_float = var_162_float * var_162_float;
	var_166_float = (int)4 * var_161_float;
	var_167_float = var_166_float * var_163_float;
	var_160_float = var_164_float - var_167_float;
	return 0;
}


func_1964(var_174_float, var_175_float, var_176_float, var_178_float)
{
	var_179_float = 0; var_180_float = 0;
	var_181_int = -var_176_float;
	var_182_int = var_181_int - var_178_float;
	var_184_float = (int)2 * var_175_float;
	var_180_float = var_182_int / var_184_float;
	var_186_bool = var_180_float > (int)0;
	if(var_186_bool != 0) {
		var_180_float = var_174_float;
		return 2;
	}
	var_187_int = -var_176_float;
	var_188_int = var_187_int + var_178_float;
	var_190_float = (int)2 * var_175_float;
	var_174_float = var_188_int / var_190_float;
	return 2;
}


func_1461(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_1697(var_23_bool, var_24_object);
	var_23_bool = var_21_bool;
	return 0;
}


func_1468(var_339_string)
{
	var_339_string = "walk";
	return 0;
}


func_1981(var_46_float, var_47_float, var_48_float, var_49_float)
{
	var_50_bool = var_47_float < var_48_float;
	if(var_50_bool != 0) {
		var_48_float = var_46_float;
		return 0;
	}
	var_51_bool = var_47_float > var_49_float;
	if(var_51_bool != 0) {
		var_49_float = var_46_float;
		return 0;
	}
	var_47_float = var_46_float;
	return 0;
}


func_1470(var_340_string)
{
	var_340_string = "run";
	return 0;
}


func_1472(var_58_object)
{
	
Label_1473:
	var_59_bool = 0; var_60_object = Obj();
	var_58_object = var_60_object;
	TaskCall(2);
	func_292(var_54_object, var_58_object, var_59_bool, var_60_object);
	TaskReturn();
	Sleep((int)1);
	goto Label_1473;
}
EMIT "Return(); Pop(0)";


func_455(var_196_bool, var_197_object)
{
	var_204_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_205_object = Obj(); var_206_bool = 0; var_207_float = 0;
	var_197_object = var_205_object;
	func_532(var_201_bool, var_202_float, var_203_int, var_196_bool, var_197_object, var_205_object, (bool)1, (float)200.0);
	var_679_bool = 0;
	var_679_bool = 0;
	var_680_bool = GlobalVars[0];
	if(var_680_bool != 0) {
		var_681_int = var_3_int;
		if(var_681_int != 0) {
			var_679_bool = 1;
		}
	}
	if(var_679_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_684_bool = GlobalVars[0];
	var_684_bool = var_196_bool;
	return 0;
}


func_1992(var_74_bool, var_75_float, var_76_float, var_77_float)
{
	var_74_bool = 0;
	var_78_bool = var_75_float >= var_76_float;
	if(var_78_bool != 0) {
		var_79_bool = var_75_float <= var_77_float;
		if(var_79_bool != 0) {
			var_74_bool = 1;
		}
	}
	return 0;
}


func_972(var_3_int)
{
	var_3_int = true;
	return 0;
}


func_1484(var_563_string, var_564_int)
{
	var_566_bool = var_564_int == (int)2;
	if(var_566_bool != 0) {
		var_563_string = "fire";
		return 0;
	EMIT "GOTO 0x5d8";
	}
	var_568_bool = var_564_int == (int)1;
	if(var_568_bool != 0) {
		var_563_string = "bullet";
		return 0;
	}
	var_563_string = "phys";
	return 0;
}


func_974(var_647_bool, var_648_float)
{
	var_649_float = 0; var_650_bool = 0; var_651_float = 0; var_652_bool = 0;
	rand(var_651_float);
	var_653_bool = var_651_float < var_648_float;
	if(var_653_bool != 0) {

	Label_979:
		IsAnimationPlaying(var_652_bool);
		var_654_bool = var_652_bool == 0; //@nz
		if(var_654_bool != 0) {
		} else {
			var_655_bool = 0;
			func_1072(var_655_bool);
			if(var_655_bool != 0) {
				var_647_bool = 1;
				sync();
				goto Label_979;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1176(var_652_bool);
	}
	goto Label_999;
	
Label_999:
	var_647_bool = 0;
	return 4;
	
}


func_2000(var_17_bool, var_18_object, var_19_float)
{
	var_20_bool = var_18_object == 0; //@nz
	if(var_20_bool != 0) {
		var_17_bool = 0;
		return 0;
	}
	var_22_bool = var_19_float > (int)0;
	if(var_22_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_53_bool = var_19_float < (int)0;
		if(var_53_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2021;
		}
		var_17_bool = 0;
		return 0;
	}
Label_2021:
	var_24_float = 0;
	var_19_float = var_24_float;
	func_2052(var_24_float);
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; var_31_float = 0; var_32_float = 0; var_33_float = 0;
	var_18_object = var_29_object;
	var_19_float = var_31_float;
	func_1530(var_28_bool, var_29_object, "reputation", var_31_float, (float)0, (float)1);
	var_17_bool = 1;
	return 0;
	
}


func_1498(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_1505(var_66_float, var_67_object)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	GetPosition(var_71_cvector);
	@@var_67_object:GetPosition(var_72_cvector);
	var_73_cvector = var_72_cvector - var_71_cvector;
	var_66_float = var_73_cvector | var_73_cvector;
	return 6;
}


func_483(var_532_float)
{
	var_532_float = 0.15000000596046448;
	return 0;
}


func_486(var_539_int)
{
	var_539_int = 0;
	return 0;
}


func_1513(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
	return 2;
}


func_1001(var_0_object, var_427_bool, var_428_float)
{
	var_429_bool = 0; var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_float = 0; var_434_bool = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_cvector = CVector(0,0,0); var_438_float = 0;
	
Label_1002:
	IsAnimationPlaying(var_434_bool);
	var_439_bool = var_434_bool == 0; //@nz
	if(var_439_bool != 0) {
	} else {
		var_440_bool = 0;
		func_1072(var_440_bool);
		if(var_440_bool != 0) {
			var_427_bool = 1;
			return 10;
		}
		var_483_bool = 0; var_484_object = Obj();
		var_484_object = var_0_object;
		func_1697(var_483_bool, var_484_object);
		var_485_bool = var_483_bool == 0; //@nz
		if(var_485_bool != 0) {
			var_427_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_435_cvector);
		GetPFPosition(var_436_cvector);
		var_437_cvector = var_435_cvector - var_436_cvector;
		var_438_float = var_437_cvector | var_437_cvector;
		var_486_float = var_428_float * var_428_float;
		var_487_bool = var_438_float < var_486_float;
		if(var_487_bool != 0) {
			var_488_bool = 0; var_489_float = 0;
			var_428_float = var_489_float;
			func_835(var_437_cvector, var_438_float, var_488_bool, var_489_float);
			var_427_bool = 1;
			sync();
			goto Label_1002;
		}
		return 10;
	}
	func_1176(var_438_float);
	var_427_bool = 0;
	return 10;
	
}


func_489(var_600_int)
{
	var_600_int = 1;
	return 0;
}


func_491(var_601_object, var_602_float)
{
	var_603_bool = 0;
	var_603_bool = 0;
	var_605_bool = var_602_float > (int)0;
	if(var_605_bool != 0) {
		var_606_bool = 0; var_607_object = Obj();
		var_601_object = var_607_object;
		func_1625(var_606_bool, var_607_object);
		if(var_606_bool != 0) {
			var_603_bool = 1;
		}
	}
	if(var_603_bool != 0) {
		var_623_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_972(var_602_float);
	}
	return 0;
}


func_1518(var_36_bool, var_37_object, var_38_string)
{
	var_39_bool = 0; var_40_bool = 0;
	var_43_bool = IsFuncExist(var_37_object, "HasProperty", (int)2);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_36_bool = 0;
		return 2;
	}
	@@var_37_object:HasProperty(var_38_string, var_40_bool);
	var_40_bool = var_36_bool;
	return 2;
}


func_2035(var_591_float)
{
	var_592_object = Obj(); var_593_object = Obj();
	CreateFloatVector(var_593_object);
	@@var_593_object:add(var_591_float);
	var_595_bool = var_591_float < (int)0;
	if(var_595_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_593_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1530(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float)
{
	var_34_float = 0; var_35_float = 0;
	var_36_bool = 0; var_37_object = Obj(); var_38_string = "";
	var_29_object = var_37_object;
	var_30_string = var_38_string;
	func_1518(var_36_bool, var_37_object, var_38_string);
	var_45_bool = var_36_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	@@var_29_object:GetProperty(var_30_string, var_35_float);
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0;
	var_47_float = var_35_float + var_31_float;
	var_32_float = var_48_float;
	var_33_float = var_49_float;
	func_1981(var_46_float, var_47_float, var_48_float, var_49_float);
	@@var_29_object:SetProperty(var_30_string, var_46_float);
	var_28_bool = 1;
	return 2;
}


