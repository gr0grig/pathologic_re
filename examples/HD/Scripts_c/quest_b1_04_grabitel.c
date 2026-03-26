// @IMPORTS: Sleep/1,IsPlayerActor/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,SetVariable/2,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,GetScene/1,GetGeometryLocator/3,AddActorByType/6,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,GetProperty/2,SignalDeath/1,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4
// @STRINGS: W:all|W:b1q04_dead|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|A:SetScriptProperty|W:Target|W:StartDirection|W:kill|W:attack_off|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:reputation|W:battle|W:god_mode|W:idle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:b1q04_attack|A:RemoveStationaryActor
// @GLOBALS: 0:bool:
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
// @TASK_2: vars= params=2
// @TASK_3: vars=bool params=2
// @EVENT_17: op=0x1bb vars=object
// @EVENT_30: op=0x1c1 vars=object,object,bool
// @EVENT_26: op=0x1c8 vars=string
// @TASK_4: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0x206 vars=object
// @EVENT_30: op=0x20c vars=object,object,bool
// @EVENT_26: op=0x213 vars=string
// @TASK_5: vars=bool,object,bool params=6
// @EVENT_17: op=0x4af vars=object
// @EVENT_30: op=0x4b5 vars=object,object,bool
// @EVENT_26: op=0x4bc vars=string
// @EVENT_7: op=0x4f8 vars=int
// @EVENT_1: op=0x513 vars=object
// @EVENT_2: op=0x522 vars=object
// @EVENT_10: op=0x5a8 vars=object
// @EVENT_41: op=0x5b3 vars=object
// @TASK_6: vars= params=1
// @STANDALONE_EVENT_22: op=0x84f vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x857 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x861 vars=object,string
// @STANDALONE_EVENT_41: op=0x86e vars=object
// @PE: 0x8,0x80,0x97,0x10b,0x125,0x127,0x129,0x1bb,0x1c1,0x1c8,0x1ce,0x1ea,0x1ed,0x1f2,0x206,0x20c,0x213,0x4af,0x4b5,0x4bc,0x4f8,0x513,0x522,0x596,0x5a8,0x5b3,0x5bc,0x5c7,0x5d3,0x7a5,0x7ac,0x7c4,0x7cf,0x7d7,0x847,0x84f,0x857,0x86e,0x874,0x87b,0x887,0x8f4,0x8f6

	task_0_event_17(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_2164(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_123();
		var_51_object = Obj();
		var_14_object = var_51_object;
		func_2171(var_51_object);
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
		func_2183(var_14_object);
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
	func_2292();
	return 0;
}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2294(var_15_object);
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
	func_2292();
	return 0;
}


task_4_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2294(var_15_object);
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
	func_2292();
	return 0;
}


task_5_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_object = var_14_object;
	var_11_object = var_15_object;
	func_2294(var_15_object);
	return 0;
}


task_5_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_12_bool = var_10_string == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_1286(var_10_string);
	}
	return 0;
}


task_5_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_12_bool = var_10_int == (int)1;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_13_object = var_1_object;
		func_2069(var_13_object);
	} else {
		var_18_int = 0;
		var_10_int = var_18_int;
		func_1430(var_9_bool, var_10_int, var_18_int);
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
		func_1889(var_14_object);
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
	func_1286(var_10_object);
	var_10_object = Obj();
	func_2158();
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1791(var_14_object, var_15_int, var_16_float);
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
	func_1859(var_18_float, var_19_cvector, var_20_cvector);
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
	func_2119(var_11_object);
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


func_1537(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float)
{
	var_34_float = 0; var_35_float = 0;
	var_36_bool = 0; var_37_object = Obj(); var_38_string = "";
	var_29_object = var_37_object;
	var_30_string = var_38_string;
	func_1525(var_36_bool, var_37_object, var_38_string);
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
	func_1988(var_46_float, var_47_float, var_48_float, var_49_float);
	@@var_29_object:SetProperty(var_30_string, var_46_float);
	var_28_bool = 1;
	return 2;
}


func_2059(var_24_float)
{
	var_25_object = Obj(); var_26_object = Obj();
	CreateFloatVector(var_26_object);
	@@var_26_object:add(var_24_float);
	SendWorldWndMessage((int)16, var_26_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2069(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_16_bool = var_15_bool;
	if(var_16_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1559(var_537_float, var_538_object, var_539_float, var_540_int)
{
	var_544_int = 0; var_545_string = ""; var_546_int = 0; var_547_float = 0; var_548_float = 0; var_549_float = 0; var_550_int = 0; var_551_string = ""; var_552_int = 0; var_553_float = 0; var_554_float = 0; var_555_float = 0;
	var_556_bool = 0; var_557_object = Obj(); var_558_string = "";
	var_538_object = var_557_object;
	func_1525(var_556_bool, var_557_object, "health");
	var_559_bool = var_556_bool == 0; //@nz
	if(var_559_bool != 0) {
		var_537_float = 0.0;
		return 12;
	}
	var_560_bool = 0; var_561_object = Obj(); var_562_string = "";
	var_538_object = var_561_object;
	func_1525(var_560_bool, var_561_object, "armor");
	var_563_bool = var_560_bool == 0; //@nz
	if(var_563_bool != 0) {
		var_550_int = 0;
	} else {
			@@var_538_object:GetProperty("armor", var_550_int);
	}
	var_565_string = ""; var_566_int = 0;
	var_540_int = var_566_int;
	func_1491(var_565_string, var_566_int);
	var_551_string = "armor_" + var_565_string;
	var_571_bool = 0; var_572_object = Obj(); var_573_string = "";
	var_538_object = var_572_object;
	var_551_string = var_573_string;
	func_1525(var_571_bool, var_572_object, var_573_string);
	var_574_bool = var_571_bool == 0; //@nz
	if(var_574_bool != 0) {
		var_552_int = 0;
	} else {
		@@var_538_object:GetProperty(var_551_string, var_552_int);

	}
	var_575_float = 0; var_576_float = 0; var_577_float = 0;
	var_578_int = var_550_int + var_552_int;
	var_576_float = var_578_int / (float)100.0;
	func_1957(var_575_float, var_576_float, (float)1);
	var_575_float = var_553_float;
	@@var_538_object:GetProperty("health", var_554_float);
	var_583_int = (int)1 - var_553_float;
	var_555_float = var_539_float * var_583_int;
	var_585_float = 0; var_586_float = 0; var_587_float = 0; var_588_float = 0;
	var_586_float = var_554_float - var_555_float;
	func_1988(var_585_float, var_586_float, (float)0, (float)1);
	@@var_538_object:SetProperty("health", var_585_float);
	var_591_bool = 0; var_592_object = Obj();
	var_538_object = var_592_object;
	func_1520(var_591_bool, var_592_object);
	if(var_591_bool != 0) {
		var_593_float = 0;
		var_593_float = -var_555_float;
		func_2042(var_593_float);
	}
	var_555_float = var_537_float;
	return 12;
	
}


func_539(var_0_object, var_3_int, var_5_bool, var_207_object, var_208_bool, var_209_float, var_278_bool, var_370_bool)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_bool = 0; var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_float = 0; var_218_cvector = CVector(0,0,0); var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_bool = 0; var_225_bool = 0; var_226_float = 0; var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_cvector = CVector(0,0,0); var_230_bool = 0; var_231_float = 0;
	func_768(var_229_cvector, var_230_bool, var_231_float);
	var_5_bool = 0;
	var_256_bool = IsFuncExist(var_207_object, "@GetAttackDistance", (int)1);
	if(var_256_bool != 0) {
		@@var_207_object:GetAttackDistance(var_221_float);
		var_221_float = var_221_float + (int)50;
	} else {
							var_209_float = var_221_float;
	}
	var_259_bool = var_221_float >= (int)150;
	if(var_259_bool != 0) {
		var_221_float = 150;
	}
	var_3_int = false;
	var_0_object = var_207_object;
	IsPlayerActor(var_0_object, var_224_bool);
	var_260_bool = var_224_bool;
	if(var_260_bool != 0) {
		PlayGlobalMusic("attack");
		var_262_object = Obj();
		func_1941(var_262_object);
		SendPlayerEnemy(var_207_object, var_262_object);
	}
	var_263_bool = var_208_bool;
	if(var_263_bool != 0) {
		var_225_bool = 0;
	} else {
						var_225_bool = 1;

	}
	var_226_float = (float)300.0 + var_221_float;
	
Label_579:
	var_265_bool = 0;
	var_265_bool = 0;
	var_266_bool = 0; var_267_object = Obj();
	var_267_object = var_0_object;
	func_1704(var_266_bool, var_267_object);
	if(var_266_bool != 0) {
		var_268_bool = var_3_int == 0; //@nz
		if(var_268_bool != 0) {
			var_265_bool = 1;
		}
	}
	if(var_265_bool != 0) {
		func_1183(var_231_float);
		@@@var_0_object:GetPFPosition(var_222_cvector);
		GetPFPosition(var_223_cvector);
		var_227_cvector = var_222_cvector - var_223_cvector;
		var_228_float = var_227_cvector | var_227_cvector;
		var_270_float = var_226_float * var_226_float;
		var_271_bool = var_228_float >= var_270_float;
		if(var_271_bool != 0) {
			var_272_bool = 0; var_273_object = Obj(); var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_bool = 0;
			var_273_object = var_0_object;
			var_221_float = var_274_float;
			TaskCall(5);
			func_1223(var_280_bool, var_272_bool, var_273_object, var_274_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_355_bool = var_278_bool == 0; //@nz
			if(var_355_bool != 0) {
			} else {
				var_225_bool = 0;
		} else {
				var_361_float = var_209_float * var_209_float;
				var_362_bool = var_228_float >= var_361_float;
				if(var_362_bool != 0) {
					@@@var_0_object:GetPFPosition(var_229_cvector);
					CanReachByPF(var_230_bool, var_229_cvector);
					var_363_bool = var_230_bool == 0; //@nz
					if(var_363_bool != 0) {
						var_364_bool = 0; var_365_object = Obj(); var_366_float = 0; var_367_float = 0; var_368_bool = 0; var_369_bool = 0;
						var_365_object = var_0_object;
						var_221_float = var_366_float;
						TaskCall(5);
						func_1223(var_372_bool, var_364_bool, var_365_object, var_366_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_373_bool = var_370_bool == 0; //@nz
						if(var_373_bool != 0) {
							goto Label_751;
						}
						var_225_bool = 0;
						goto Label_579;
					}
					var_374_bool = var_225_bool == 0; //@nz
					if(var_374_bool != 0) {
						var_375_object = Obj();
						var_375_object = var_0_object;
						func_1873(var_375_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1183(var_231_float);
						StopAsync();
						var_225_bool = 1;
						var_386_bool = 0; var_387_object = Obj();
						var_387_object = var_0_object;
						func_1704(var_386_bool, var_387_object);
						var_388_bool = var_386_bool == 0; //@nz
						if(var_388_bool != 0) {
							goto Label_751;
						}
					}
					rand(var_231_float);
					var_389_bool = 0;
					var_391_bool = var_231_float < (float)0.19999998807907104;
					if(var_391_bool != 1) {
						var_392_bool = 0;
						func_1140((bool)1, var_392_bool);
						if(var_392_bool != 1) {
							var_389_bool = 0;
						}
					}
					if(var_389_bool != 0) {
						Face(var_0_object);
						func_1188();
						PlayAnimation("all", "attack_stay");
						var_429_bool = 0; var_430_float = 0;
						var_209_float = var_430_float;
						func_1008(var_231_float, var_429_bool, var_430_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1183(var_231_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_668_bool = 0;
						func_1140(var_231_float, var_668_bool);
						var_669_bool = var_668_bool == 0; //@nz
						if(var_669_bool == 0) goto Label_741;
						var_670_bool = 0; var_671_object = Obj();
						var_671_object = var_0_object;
						func_1704(var_670_bool, var_671_object);
						var_672_bool = var_670_bool == 0; //@nz
						if(var_672_bool != 0) {
							goto Label_751;
						}
						@@@var_0_object:GetPFPosition(var_222_cvector);
						GetPFPosition(var_223_cvector);
						var_227_cvector = var_222_cvector - var_223_cvector;
						var_228_float = var_227_cvector | var_227_cvector;
						var_673_float = var_209_float * var_209_float;
						var_674_bool = var_228_float < var_673_float;
						if(var_674_bool == 0) goto Label_741;
						var_675_bool = 0; var_676_float = 0;
						var_209_float = var_676_float;
						func_842(var_230_bool, var_231_float, var_675_bool, var_676_float);
						var_677_bool = var_675_bool == 0; //@nz
						if(var_677_bool == 0) goto Label_741;
						goto Label_751;
				}
					var_678_bool = 0; var_679_float = 0;
					var_209_float = var_679_float;
					func_842(var_230_bool, var_231_float, var_678_bool, var_679_float);
					var_680_bool = var_678_bool == 0; //@nz
					if(var_680_bool != 0) {
						goto Label_751;
					}
					var_225_bool = 1;

				}
			Label_741:
				goto Label_750;
		}
		Label_750:
			goto Label_579;

		}
	}
Label_751:
	WaitForAnimEnd();
	var_356_int = var_3_int;
	if(var_356_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_359_bool = var_224_bool;
	if(var_359_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1051(var_0_object, var_444_bool)
{
	var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0; var_449_float = 0; var_450_cvector = CVector(0,0,0); var_451_cvector = CVector(0,0,0); var_452_cvector = CVector(0,0,0); var_453_float = 0; var_454_float = 0;
	var_455_bool = 0; var_456_object = Obj();
	var_456_object = var_0_object;
	func_1704(var_455_bool, var_456_object);
	var_457_bool = var_455_bool == 0; //@nz
	if(var_457_bool != 0) {
		var_444_bool = 0;
		return 10;
	}
	var_458_bool = 0;
	func_1140(var_454_float, var_458_bool);
	if(var_458_bool != 0) {
		@@@var_0_object:GetPFPosition(var_450_cvector);
		GetPFPosition(var_451_cvector);
		var_452_cvector = var_450_cvector - var_451_cvector;
		var_453_float = var_452_cvector | var_452_cvector;
		@@@var_0_object:GetAttackDistance(var_454_float);
		var_454_float = var_454_float + (int)50;
		var_460_float = var_454_float * var_454_float;
		var_444_bool = var_453_float <= var_460_float;
		return 10;
	}
	var_444_bool = 0;
	return 10;
}


func_2078()
{
	var_121_object = Obj(); var_122_object = Obj();
	GetScene(var_122_object);
	var_124_object = Obj();
	func_1941(var_124_object);
	BroadcastMessage("battle", var_124_object, var_122_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2089(var_619_bool)
{
	var_620_bool = 0; var_621_bool = 0;
	GetVariable("god_mode", var_621_bool);
	var_621_bool = var_619_bool;
	return 2;
}


func_42()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_1884(var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 14;
	}
	func_2102((int)0);
	var_29_int = var_18_int;
	var_19_int = 0;
	
Label_56:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_19_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_1884(var_45_bool);
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
			func_2095(var_51_string, var_52_int);
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


func_2095(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_2102(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_2104:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_2095(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_2104;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_1079(var_442_bool)
{
	var_443_bool = 0;
	var_443_bool = 0;
	var_444_bool = 0;
	func_1051(var_443_bool, var_444_bool);
	if(var_444_bool != 0) {
		var_461_bool = 0;
		func_1095(var_442_bool, var_443_bool, var_461_bool);
		if(var_461_bool != 0) {
			var_443_bool = 1;
		}
	}
	if(var_443_bool != 0) {
		var_442_bool = 1;
		return 0;
	}
	var_442_bool = 0;
	return 0;
}


func_1095(var_0_object, var_4_int, var_461_bool)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_float = 0; var_465_cvector = CVector(0,0,0); var_466_cvector = CVector(0,0,0); var_467_object = Obj(); var_468_bool = 0; var_469_float = 0; var_470_cvector = CVector(0,0,0); var_471_cvector = CVector(0,0,0);
	GetScene(var_467_object);
	var_468_bool = 0;
	
Label_1099:
	var_472_cvector = CVector(0,0,0); var_473_object = Obj();
	var_473_object = var_0_object;
	func_1505(var_472_cvector, var_473_object);
	var_478_int = -var_472_cvector;
	FindDirLength(var_469_float, var_478_int, var_4_int);
	var_479_bool = var_469_float < var_4_int;
	if(var_479_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_470_cvector);
		GetPFPosition(var_471_cvector);
		WaitForAnimEnd();
		func_1183(var_471_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_468_bool = 1;
		var_483_bool = 0;
		func_1051(var_471_cvector, var_483_bool);
		var_484_bool = var_483_bool == 0; //@nz
		if(var_484_bool != 0) {
			goto Label_1137;
		}
		goto Label_1099;
	}
Label_1137:
	var_468_bool = var_461_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2119(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(1);
	func_128(var_12_object);
	TaskReturn();
	return 0;
}


func_1632(var_608_bool, var_609_object)
{
	var_610_float = 0; var_611_float = 0;
	var_612_bool = 0; var_613_object = Obj(); var_614_string = "";
	var_609_object = var_613_object;
	func_1525(var_612_bool, var_613_object, "health");
	var_615_bool = var_612_bool == 0; //@nz
	if(var_615_bool != 0) {
		var_608_bool = 0;
		return 2;
	}
	var_616_bool = 0;
	var_616_bool = 0;
	var_617_bool = 0; var_618_object = Obj();
	var_609_object = var_618_object;
	func_1520(var_617_bool, var_618_object);
	if(var_617_bool != 0) {
		var_619_bool = 0;
		func_2089(var_619_bool);
		if(var_619_bool != 0) {
			var_616_bool = 1;
		}
	}
	if(var_616_bool != 0) {
		var_608_bool = 0;
		return 2;
	}
	@@var_609_object:GetProperty("health", var_611_float);
	var_608_bool = var_611_float <= (float)0.0;
	return 2;
}


func_2164(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1704(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_1140(var_0_object, var_392_bool)
{
	var_393_bool = 0; var_394_bool = 0;
	var_397_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_397_bool != 0) {
		@@@var_0_object:IsAttacking(var_394_bool);
		var_394_bool = var_392_bool;
		return 2;
	}
	var_392_bool = 0;
	return 2;
}


func_121(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_2171(var_51_object)
{
	var_52_object = Obj();
	var_51_object = var_52_object;
	func_2237(var_52_object);
	return 0;
}


func_123()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1663(var_38_bool, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0;
	@@var_39_object:IsDead(var_41_bool);
	var_41_bool = var_38_bool;
	return 2;
}


func_128(var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1520(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		var_17_bool = 0; var_18_object = Obj(); var_19_float = 0;
		var_12_object = var_18_object;
		func_2007(var_17_bool, var_18_object, (float)0.029999999329447746);
	}
	func_2213();
	SetVariable("b1q04_dead", (int)1);
	var_77_object = Obj();
	var_12_object = var_77_object;
	func_151(var_77_object);
	return 0;
}


func_2177(var_55_int)
{
	var_56_int = 0; var_57_int = 0;
	GetVariable("branch", var_57_int);
	var_57_int = var_55_int;
	return 2;
}


func_1151(var_2_object, var_5_bool)
{
	var_505_float = 0; var_506_int = 0; var_507_float = 0; var_508_int = 0;
	var_509_bool = var_2_object == 0; //@nz
	if(var_509_bool != 0) {
		return 4;
	}
	var_510_bool = var_5_bool;
	if(var_510_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_513_bool = var_5_bool > (int)0;
		if(var_513_bool != 0) {
			return 4;
		}
	}
	rand(var_507_float);
	var_514_float = 0;
	func_1197(var_514_float);
	var_515_bool = var_507_float < var_514_float;
	if(var_515_bool != 0) {
		irand(var_508_int, var_2_object);
		var_508_int = var_508_int + (int)1;
		var_518_int = "attack" + var_508_int;
		Speak(var_518_int);
		var_519_int = 0;
		func_1195(var_519_int);
		var_5_bool = var_519_int;
	}
	return 4;
}


func_1668(var_27_bool, var_28_object)
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
		func_1663(var_38_bool, var_39_object);
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


func_2183(var_14_object)
{
	var_15_int = 0;
	func_2177(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_2196(var_61_string)
{
	var_62_object = Obj(); var_63_int = 0; var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; var_67_bool = 0;
	CreateInvItem(var_65_object);
	@@var_65_object:SetItemName(var_61_string);
	@@var_65_object:SetProperty("Organ", (int)1);
	@@var_65_object:GetItemID(var_66_int);
	AddItem(var_67_bool, var_65_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_151(var_77_object)
{
	EventDisable(0);
	var_78_object = Obj();
	var_77_object = var_78_object;
	func_176(var_78_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_162:
	Hold();
	goto Label_162;
}
EMIT "Return(); Pop(0)";


func_1183(var_0_object)
{
	var_269_object = Obj();
	var_269_object = var_0_object;
	func_2069(var_269_object);
	return 0;
}


func_1188()
{
	var_398_string = "";
	func_1900("attack_stay");
	return 0;
}


func_2213()
{
	var_55_int = 0;
	func_2177(var_55_int);
	var_60_bool = var_55_int != (int)1;
	if(var_60_bool != 0) {
		return 0;
	}
	var_61_string = "";
	func_2196("liver");
	var_72_string = "";
	func_2196("kidney");
	var_73_string = "";
	func_2196("heart");
	var_74_string = "";
	func_2196("blood");
	return 0;
}


func_1704(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_24_object = var_28_object;
	func_1668(var_27_bool, var_28_object);
	var_44_bool = var_27_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
	var_24_object = var_46_object;
	func_1525(var_45_bool, var_46_object, "noaccess");
	var_54_bool = var_45_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_23_bool = 1;
		return 2;
	}
	@@var_24_object:GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == (int)0;
	return 2;
}


func_1193(var_648_bool)
{
	var_648_bool = 1;
	return 0;
}


func_1195(var_519_int)
{
	var_519_int = 1;
	return 0;
}


func_1197(var_514_float)
{
	var_514_float = 0.5;
	return 0;
}


func_176(var_78_object)
{
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_string = ""; var_84_object = Obj(); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_string = ""; var_94_object = Obj(); var_95_bool = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0);
	var_99_bool = var_78_object == 0; //@ne
	if(var_99_bool != 0) {
		var_100_string = "";
		func_267("fdie");
	} else {
		@@var_78_object:GetPosition(var_89_cvector);
		GetPosition(var_90_cvector);
		GetDirection(var_91_cvector);
		var_92_cvector = var_90_cvector - var_89_cvector;
		var_132_float = GetByIndex(var_92_cvector, 0);
		var_133_float = GetByIndex(var_91_cvector, 0);
		var_134_float = var_132_float * var_133_float;
		var_135_float = GetByIndex(var_92_cvector, 2);
		var_136_float = GetByIndex(var_91_cvector, 2);
		var_137_float = var_135_float * var_136_float;
		var_138_int = var_134_float + var_137_float;
		var_140_bool = var_138_int >= (int)0;
		if(var_140_bool != 0) {
			var_93_string = "fdie";
		} else {
				var_93_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_78_object = var_94_object;
		var_143_bool = IsFuncExist(var_78_object, "GetScriptProperty", (int)2);
		if(var_143_bool != 0) {
			@@var_78_object:HasScriptProperty(var_95_bool, "Owner");
			var_145_bool = var_95_bool;
			if(var_145_bool != 0) {
				@@var_78_object:GetScriptProperty(var_94_object, "Owner");
				var_147_bool = var_94_object == 0; //@ne
				if(var_147_bool != 0) {
					var_78_object = var_94_object;
				}
			}
		}
		var_150_bool = IsFuncExist(var_94_object, "@GetEyesHeight", (int)1);
		if(var_150_bool != 0) {
			@@var_94_object:GetEyesHeight(var_97_float);
			var_98_cvector = CVector(0.0, 0.0, 0.0);
			var_151_float = GetByIndex(var_98_cvector, 1);
			var_97_float = var_151_float;
			SetByIndex(var_98_cvector, 1) = var_151_float;
			LookAsync(var_78_object, "head", var_98_cvector);
			var_96_bool = 1;
		} else {
			var_96_bool = 0;

		}
		var_153_string = "";
		var_93_string = var_153_string;
		func_1900(var_153_string);
		PlayAnimation("all", var_93_string);
		WaitForAnimEnd();
		var_155_bool = var_96_bool;
		if(var_155_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_93_string);
		RemoveEnvelope();
		var_94_object = 0;
	}
	return 20;
	
}


func_2237(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	SetVariable("b1q04_attack", (int)1);
	GetScene(var_54_object);
	var_57_object = Obj();
	func_1941(var_57_object);
	@@var_54_object:RemoveStationaryActor(var_57_object);
	var_60_object = Obj();
	var_52_object = var_60_object;
	TaskCall(6);
	func_1479(var_60_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1728(var_108_bool, var_109_cvector)
{
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0;
	GetPosition(var_113_cvector);
	var_114_cvector = var_109_cvector - var_113_cvector;
	var_116_float = GetByIndex(var_114_cvector, 0);
	var_117_float = GetByIndex(var_114_cvector, 2);
	Rotate(var_116_float, var_117_float, var_115_bool);
	var_115_bool = var_108_bool;
	return 6;
}


func_1223(var_2_object, var_272_bool, var_273_object, var_274_float, var_275_float, var_276_bool, var_277_bool)
{
	var_281_bool = 0; var_282_bool = 0; var_283_bool = 0; var_284_bool = 0;
	var_285_object = Obj();
	var_273_object = var_285_object;
	func_2069(var_285_object);
	SetTimer((int)1, (int)5);
	CanSee(var_283_bool, var_273_object);
	var_288_bool = var_283_bool;
	if(var_288_bool != 0) {
		var_2_object = true;
		var_289_object = Obj();
		var_273_object = var_289_object;
		func_1889(var_289_object);
	} else {
		var_2_object = false;
	}
	var_296_bool = 0; var_297_object = Obj();
	var_273_object = var_297_object;
	func_1520(var_296_bool, var_297_object);
	if(var_296_bool != 0) {
		var_300_object = Obj();
		func_1941(var_300_object);
		SendPlayerEnemy(var_273_object, var_300_object);
	}
	var_301_bool = 0; var_302_object = Obj(); var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_bool = 0;
	var_273_object = var_302_object;
	var_274_float = var_303_float;
	var_275_float = var_304_float;
	var_276_bool = var_305_bool;
	var_277_bool = var_306_bool;
	func_1328(var_283_bool, var_284_bool, var_301_bool, var_302_object, var_303_float, var_304_float, var_305_bool, var_306_bool);
	var_301_bool = var_284_bool;
	var_352_object = var_2_object;
	if(var_352_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_284_bool = var_272_bool;
	return 4;
	
}


func_1738(var_104_bool, var_105_object)
{
	var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0);
	@@var_105_object:GetPosition(var_107_cvector);
	var_108_bool = 0; var_109_cvector = CVector(0,0,0);
	var_107_cvector = var_109_cvector;
	func_1728(var_108_bool, var_109_cvector);
	var_108_bool = var_104_bool;
	return 2;
}


func_2257(var_142_cvector, var_143_cvector, var_144_cvector, var_145_float)
{
	var_146_cvector = CVector(0,0,0); var_147_float = 0; var_148_float = 0; var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_cvector = CVector(0,0,0); var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0;
	var_152_cvector = var_144_cvector - var_143_cvector;
	var_153_float = 250000;
	var_158_float = GetByIndex(var_152_cvector, 1);
	var_160_float = var_158_float * (int)1000;
	var_161_float = var_145_float * var_145_float;
	var_154_float = var_160_float - var_161_float;
	var_155_float = var_152_cvector | var_152_cvector;
	var_162_float = 0; var_163_float = 0; var_164_float = 0; var_165_float = 0;
	var_153_float = var_163_float;
	var_154_float = var_164_float;
	var_155_float = var_165_float;
	func_1964(var_162_float, var_163_float, var_164_float, var_165_float);
	var_162_float = var_156_float;
	var_171_bool = var_156_float < (int)0;
	if(var_171_bool != 0) {
		var_157_float = 1;
	} else {
		var_176_float = 0; var_177_float = 0; var_178_float = 0; var_179_float = 0; var_180_float = 0;
		var_153_float = var_177_float;
		var_154_float = var_178_float;
		var_155_float = var_179_float;
		var_180_float = sqrt(var_156_float);
		func_1971(var_177_float, var_178_float, var_179_float, var_180_float);
		var_157_float = sqrt(var_176_float);
	}
	var_173_float = CVector(0.0, 500.0, 0.0) * var_157_float;
	var_174_float = var_173_float * var_157_float;
	var_175_int = var_152_cvector + var_174_float;
	var_142_cvector = var_175_int / var_157_float;
	return 12;
	
}


func_1747(var_27_object)
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


func_2292()
{
	return 0;
}


func_2294(var_13_bool)
{
	var_13_bool = 0;
	return 0;
}


func_1791(var_14_object, var_15_int, var_16_float)
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
		func_1505(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1947(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1820:
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
			goto Label_1820;
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
			func_1859(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1747(var_104_object);
	return 18;
	
}


func_768(var_1_bool, var_2_object, var_4_int)
{
	var_232_bool = 0; var_233_bool = 0; var_234_cvector = CVector(0,0,0); var_235_bool = 0; var_236_bool = 0; var_237_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_770:
	var_241_int = var_1_bool + (int)1;
	var_242_int = "attack_begin" + var_241_int;
	HasAnimation(var_235_bool, "all", var_242_int);
	var_243_bool = var_235_bool == 0; //@nz
	if(var_243_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_770;
	}
	var_2_object = 0;
	
Label_784:
	var_246_int = var_2_object + (int)1;
	var_247_int = "attack" + var_246_int;
	IsExisting3DSound(var_236_bool, var_247_int);
	var_248_bool = var_236_bool == 0; //@nz
	if(var_248_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_784;

	}
	GetAnimationOffset(var_237_cvector, "all", "bjump");
	var_251_float = GetByIndex(var_237_cvector, 2);
	var_4_int = -var_251_float;
	return 6;
	
}


func_1286(var_2_int)
{
	KillTimer((int)1);
	var_12_int = var_2_int;
	if(var_12_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1452(var_10_object);
	return 0;
}


func_267(var_100_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_101_string = "";
	var_100_string = var_101_string;
	func_1900(var_101_string);
	PlayAnimation("all", var_100_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_100_string);
	RemoveEnvelope();
	return 0;
}


func_803(var_0_object, var_523_float, var_524_int)
{
	var_525_object = Obj(); var_526_float = 0; var_527_float = 0; var_528_object = Obj(); var_529_float = 0; var_530_float = 0;
	var_532_float = var_523_float * (float)0.8999999761581421;
	GetVictim(var_532_float, var_528_object);
	ReportAttack(var_0_object);
	var_533_bool = var_528_object == var_0_object;
	if(var_533_bool != 0) {
		var_534_float = 0; var_535_object = Obj(); var_536_int = 0;
		var_528_object = var_535_object;
		var_524_int = var_536_int;
		func_490(var_536_int);
		var_534_float = var_529_float;
		var_537_float = 0; var_538_object = Obj(); var_539_float = 0; var_540_int = 0;
		var_528_object = var_538_object;
		var_529_float = var_539_float;
		var_541_int = 0; var_542_object = Obj(); var_543_int = 0;
		var_528_object = var_542_object;
		var_524_int = var_543_int;
		func_493(var_543_int);
		var_541_int = var_540_int;
		func_1559(var_537_float, var_538_object, var_539_float, var_540_int);
		var_537_float = var_530_float;
		var_602_int = 0;
		func_496(var_602_int);
		ReportHit(var_0_object, var_602_int, var_530_float, var_529_float);
		var_603_object = Obj(); var_604_float = 0;
		var_528_object = var_603_object;
		var_530_float = var_604_float;
		func_498(var_603_object, var_604_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_299(var_61_bool, var_62_object, var_84_bool, var_689_object)
{
	var_63_float = 0; var_64_float = 0;
	var_65_bool = 0; var_66_object = Obj();
	var_62_object = var_66_object;
	func_1704(var_65_bool, var_66_object);
	var_67_bool = var_65_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	var_68_float = 0; var_69_object = Obj();
	var_62_object = var_69_object;
	func_1512(var_68_float, var_69_object);
	var_68_float = var_64_float;
	var_76_bool = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0;
	var_64_float = var_77_float;
	func_1999(var_76_bool, var_77_float, (float)250000.0, (float)3240000.0);
	if(var_76_bool != 0) {
		var_82_bool = 0; var_83_object = Obj();
		var_62_object = var_83_object;
		TaskCall(3);
		func_336(var_64_float, var_84_bool, var_82_bool, var_83_object);
		TaskReturn();
		var_84_bool = var_61_bool;
		return 2;
	}
	var_687_bool = 0; var_688_object = Obj();
	var_62_object = var_688_object;
	TaskCall(4);
	func_462(var_687_bool, var_688_object);
	TaskReturn();
	var_689_object = var_61_bool;
	return 2;
}


func_1328(var_0_object, var_1_bool, var_301_bool, var_302_object, var_303_float, var_304_float, var_305_bool, var_306_bool)
{
	var_307_bool = 0; var_308_bool = 0; var_309_object = Obj(); var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_object = Obj(); var_315_bool = 0; var_316_bool = 0; var_317_object = Obj(); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_float = 0; var_322_object = Obj();
	var_0_object = false;
	var_1_bool = var_302_object;
	var_306_bool = var_316_bool;
	
Label_1332:
	var_323_bool = 0; var_324_object = Obj();
	var_302_object = var_324_object;
	func_1468(var_323_bool, var_324_object);
	var_327_bool = var_323_bool == 0; //@nz
	if(var_327_bool != 0) {
		var_301_bool = 0;
		return 16;
	}
	@@var_302_object:GetPosition(var_318_cvector);
	GetPosition(var_319_cvector);
	var_320_cvector = var_318_cvector - var_319_cvector;
	var_321_float = var_320_cvector | var_320_cvector;
	var_328_bool = 0;
	var_328_bool = 0;
	var_330_bool = var_304_float > (int)0;
	if(var_330_bool != 0) {
		var_331_float = var_304_float * var_304_float;
		var_332_bool = var_321_float > var_331_float;
		if(var_332_bool != 0) {
			var_328_bool = 1;
		}
	}
	if(var_328_bool != 0) {
		Stop();
		var_301_bool = 0;
		return 16;
	}
	var_333_float = var_303_float * var_303_float;
	var_334_bool = var_321_float > var_333_float;
	if(var_334_bool != 0) {
		@@var_302_object:GetPFPosition(var_318_cvector);
		FindPathTo(var_322_object, var_318_cvector);
		var_335_bool = var_322_object != 0; //@nn
		if(var_335_bool != 0) {
			var_322_object = var_317_object;
			var_322_object = 0;
		}
		var_336_bool = var_317_object != 0; //@nn
		if(var_336_bool != 0) {
			var_337_bool = var_316_bool;
			if(var_337_bool == 0) goto Label_1381;
			var_316_bool = 0;
			RotatePath(var_317_object, var_315_bool);
			var_338_bool = var_315_bool == 0; //@nz
			if(var_338_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_341_string = "";
				func_1475(var_341_string);
				var_342_string = "";
				func_1477(var_342_string);
				FollowPath(var_317_object, var_305_bool, var_315_bool, var_341_string, var_342_string);
				var_343_bool = var_315_bool == 0; //@nz
				if(var_343_bool != 0) {
					var_344_object = var_0_object;
					if(var_344_object != 0) {
						var_317_object = 0;
						goto Label_1428;
					EMIT "GOTO 0x579";
					}
				} else {
					var_317_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_315_bool);
					var_347_bool = var_315_bool == 0; //@nz
					if(var_347_bool != 0) {
						var_348_object = var_0_object;
						if(var_348_object != 0) {
							var_317_object = 0;
							goto Label_1428;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1428;
	}
			var_322_object = 0;
			goto Label_1426;

		Label_1426:
			var_317_object = 0;

		}
		goto Label_1332;
	}
Label_1428:
	var_301_bool = !var_0_object;
	return 16;
	
}


func_1859(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1747(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_842(var_0_object, var_1_bool, var_490_bool, var_491_float)
{
	var_492_int = 0; var_493_bool = 0; var_494_int = 0; var_495_string = ""; var_496_int = 0; var_497_bool = 0; var_498_int = 0; var_499_string = "";
	func_1183(var_499_string);
	irand(var_496_int, var_1_bool);
	var_496_int = var_496_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2078();
	var_504_int = "attack_begin" + var_496_int;
	PlayAnimation("all", var_504_int);
	WaitForAnimEnd();
	func_1151(var_498_int, var_499_string);
	var_520_bool = 0; var_521_object = Obj();
	var_521_object = var_0_object;
	func_1704(var_520_bool, var_521_object);
	var_522_bool = var_520_bool == 0; //@nz
	if(var_522_bool != 0) {
		StopAsync();
		var_490_bool = 0;
		return 8;
	}
	var_523_float = 0; var_524_int = 0;
	var_491_float = var_523_float;
	var_496_int = var_524_int;
	func_803(var_499_string, var_523_float, var_524_int);
	var_628_int = "attack_middle" + var_496_int;
	HasAnimation(var_497_bool, "all", var_628_int);
	var_629_bool = var_497_bool;
	if(var_629_bool != 0) {
		func_2078();
		var_632_int = "attack_middle" + var_496_int;
		PlayAnimation("all", var_632_int);
		WaitForAnimEnd();
		func_1183(var_499_string);
		var_633_bool = 0; var_634_object = Obj();
		var_634_object = var_0_object;
		func_1704(var_633_bool, var_634_object);
		var_635_bool = var_633_bool == 0; //@nz
		if(var_635_bool != 0) {
			StopAsync();
			var_490_bool = 0;
			return 8;
		}
		var_636_float = 0; var_637_int = 0;
		var_491_float = var_636_float;
		var_496_int = var_637_int;
		func_803(var_499_string, var_636_float, var_637_int);
		var_498_int = 1;

	Label_919:
		var_639_int = "attack_middle" + var_496_int;
		var_641_int = var_639_int + "_";
		var_499_string = var_641_int + var_498_int;
		HasAnimation(var_497_bool, "all", var_499_string);
		var_643_bool = var_497_bool == 0; //@nz
		if(var_643_bool != 0) {
		} else {
			func_2078();
			PlayAnimation("all", var_499_string);
			WaitForAnimEnd();
			func_1183(var_499_string);
			var_659_bool = 0; var_660_object = Obj();
			var_660_object = var_0_object;
			func_1704(var_659_bool, var_660_object);
			var_661_bool = var_659_bool == 0; //@nz
			if(var_661_bool != 0) {
				StopAsync();
				var_490_bool = 0;
				var_662_float = 0; var_663_int = 0;
				var_491_float = var_662_float;
				var_496_int = var_663_int;
				func_803(var_499_string, var_662_float, var_663_int);
				var_498_int = var_498_int + (int)1;
				goto Label_919;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_647_int = "attack_end" + var_496_int;
	PlayAnimation("all", var_647_int);
	var_648_bool = 0;
	func_1193(var_648_bool);
	if(var_648_bool != 0) {
		var_649_bool = 0; var_650_float = 0;
		func_981(var_649_bool, (float)0.44999998807907104);
		StopAsync();
	}
	var_490_bool = 1;
	return 8;
	
}


func_336(var_0_object, var_82_bool, var_83_object, var_200_object)
{
	var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_object = Obj(); var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_cvector = CVector(0,0,0);
	var_99_object = Obj();
	var_83_object = var_99_object;
	func_2069(var_99_object);
	var_0_object = false;
	var_104_bool = 0; var_105_object = Obj();
	var_83_object = var_105_object;
	func_1738(var_104_bool, var_105_object);
	var_118_bool = 0; var_119_object = Obj();
	var_83_object = var_119_object;
	func_1704(var_118_bool, var_119_object);
	var_120_bool = var_118_bool == 0; //@nz
	if(var_120_bool != 0) {
		var_82_bool = 0;
		return 14;
	}
	func_2078();
	Face(var_83_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_127_bool = 0; var_128_object = Obj();
	var_83_object = var_128_object;
	func_1704(var_127_bool, var_128_object);
	var_129_bool = var_127_bool == 0; //@nz
	if(var_129_bool != 0) {
		StopAsync();
		var_82_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_92_object);
	GetGeometryLocator("knife", var_94_bool, var_93_cvector);
	AddActorByType(var_95_object, "scripted", var_92_object, var_93_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_137_object = Obj();
	func_1941(var_137_object);
	@@var_95_object:SetScriptProperty("Owner", var_137_object);
	@@var_95_object:SetScriptProperty("Target", var_83_object);
	@@var_83_object:GetPosition(var_96_cvector);
	@@var_83_object:GetEyesHeight(var_97_float);
	var_139_float = GetByIndex(var_96_cvector, 1);
	var_141_int = var_97_float - (int)10;
	var_139_float = var_139_float + var_141_int;
	SetByIndex(var_96_cvector, 1) = var_139_float;
	var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_float = 0;
	var_93_cvector = var_143_cvector;
	var_96_cvector = var_144_cvector;
	func_2257(var_142_cvector, var_143_cvector, var_144_cvector, (float)2000.0);
	var_142_cvector = var_98_cvector;
	@@var_95_object:SetScriptProperty("StartDirection", var_98_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_194_object = var_0_object;
	if(var_194_object != 0) {
		var_82_bool = 1;
		return 14;
	}
	var_195_bool = 0; var_196_object = Obj();
	var_83_object = var_196_object;
	func_1704(var_195_bool, var_196_object);
	var_197_bool = var_195_bool == 0; //@nz
	if(var_197_bool != 0) {
		var_82_bool = 0;
		return 14;
	}
	var_198_bool = 0; var_199_object = Obj();
	var_83_object = var_199_object;
	TaskCall(4);
	func_462(var_198_bool, var_199_object);
	TaskReturn();
	var_200_object = var_82_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_1873(var_375_object)
{
	var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0);
	@@var_375_object:GetPosition(var_379_cvector);
	GetPosition(var_380_cvector);
	var_381_cvector = var_379_cvector - var_380_cvector;
	var_382_float = GetByIndex(var_381_cvector, 0);
	var_383_float = GetByIndex(var_381_cvector, 2);
	RotateAsync(var_382_float, var_383_float);
	return 6;
}


func_1884(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
	return 2;
}


func_1889(var_14_object)
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


func_1900(var_101_string)
{
	var_102_bool = 0; var_103_int = 0; var_104_bool = 0; var_105_int = 0; var_106_bool = 0; var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_bool = 0; var_115_float = 0; var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0);
	IsExisting3DSound(var_110_bool, var_101_string);
	var_118_bool = var_110_bool == 0; //@nz
	if(var_118_bool != 0) {
		var_111_int = 0;

	Label_1906:
		var_120_int = var_111_int + (int)1;
		var_121_int = var_101_string + var_120_int;
		IsExisting3DSound(var_112_bool, var_121_int);
		var_122_bool = var_112_bool == 0; //@nz
		if(var_122_bool != 0) {
		} else {
			var_111_int = var_111_int + (int)1;
			goto Label_1906;
		}
		var_123_bool = var_111_int == 0; //@nz
		if(var_123_bool != 0) {
			return 16;
		}
		irand(var_113_int, var_111_int);
		var_125_int = var_113_int + (int)1;
		var_101_string = var_101_string + var_125_int;
	}
	Is3DSoundLoaded(var_114_bool, var_101_string);
	var_126_bool = var_114_bool;
	if(var_126_bool != 0) {
		GetEyesHeight(var_115_float);
		GetDirection(var_116_cvector);
		var_117_cvector = var_116_cvector * (int)50;
		var_128_float = GetByIndex(var_117_cvector, 1);
		var_128_float = var_128_float + var_115_float;
		SetByIndex(var_117_cvector, 1) = var_128_float;
		PlayGlobalSound(var_101_string, var_117_cvector);
	}
	return 16;
	
}


func_1941(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj();
	self(var_59_object);
	var_59_object = var_57_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1430(var_0_bool, var_1_object, var_18_int)
{
	var_20_bool = var_18_int != (int)0;
	if(var_20_bool != 0) {
		return 0;
	}
	var_21_bool = 0; var_22_object = Obj();
	var_22_object = var_1_object;
	func_1468(var_21_bool, var_22_object);
	var_57_bool = var_21_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1947(var_42_cvector, var_43_cvector)
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


func_1957(var_575_float, var_576_float, var_577_float)
{
	var_580_bool = var_576_float < var_577_float;
	if(var_580_bool != 0) {
		var_576_float = var_575_float;
	} else {
		var_577_float = var_575_float;
	}
	return 0;
	
}


func_1964(var_162_float, var_163_float, var_164_float, var_165_float)
{
	var_166_float = var_164_float * var_164_float;
	var_168_float = (int)4 * var_163_float;
	var_169_float = var_168_float * var_165_float;
	var_162_float = var_166_float - var_169_float;
	return 0;
}


func_1452(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1971(var_176_float, var_177_float, var_178_float, var_180_float)
{
	var_181_float = 0; var_182_float = 0;
	var_183_int = -var_178_float;
	var_184_int = var_183_int - var_180_float;
	var_186_float = (int)2 * var_177_float;
	var_182_float = var_184_int / var_186_float;
	var_188_bool = var_182_float > (int)0;
	if(var_188_bool != 0) {
		var_182_float = var_176_float;
		return 2;
	}
	var_189_int = -var_178_float;
	var_190_int = var_189_int + var_180_float;
	var_192_float = (int)2 * var_177_float;
	var_176_float = var_190_int / var_192_float;
	return 2;
}


func_1468(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_1704(var_23_bool, var_24_object);
	var_23_bool = var_21_bool;
	return 0;
}


func_1475(var_341_string)
{
	var_341_string = "walk";
	return 0;
}


func_1988(var_46_float, var_47_float, var_48_float, var_49_float)
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


func_1477(var_342_string)
{
	var_342_string = "run";
	return 0;
}


func_1479(var_60_object)
{
	
Label_1480:
	var_61_bool = 0; var_62_object = Obj();
	var_60_object = var_62_object;
	TaskCall(2);
	func_299(var_54_object, var_60_object, var_61_bool, var_62_object);
	TaskReturn();
	Sleep((int)1);
	goto Label_1480;
}
EMIT "Return(); Pop(0)";


func_462(var_198_bool, var_199_object)
{
	var_206_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_207_object = Obj(); var_208_bool = 0; var_209_float = 0;
	var_199_object = var_207_object;
	func_539(var_203_bool, var_204_float, var_205_int, var_198_bool, var_199_object, var_207_object, (bool)1, (float)200.0);
	var_681_bool = 0;
	var_681_bool = 0;
	var_682_bool = GlobalVars[0];
	if(var_682_bool != 0) {
		var_683_int = var_3_int;
		if(var_683_int != 0) {
			var_681_bool = 1;
		}
	}
	if(var_681_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_686_bool = GlobalVars[0];
	var_686_bool = var_198_bool;
	return 0;
}


func_1999(var_76_bool, var_77_float, var_78_float, var_79_float)
{
	var_76_bool = 0;
	var_80_bool = var_77_float >= var_78_float;
	if(var_80_bool != 0) {
		var_81_bool = var_77_float <= var_79_float;
		if(var_81_bool != 0) {
			var_76_bool = 1;
		}
	}
	return 0;
}


func_979(var_3_int)
{
	var_3_int = true;
	return 0;
}


func_1491(var_565_string, var_566_int)
{
	var_568_bool = var_566_int == (int)2;
	if(var_568_bool != 0) {
		var_565_string = "fire";
		return 0;
	EMIT "GOTO 0x5df";
	}
	var_570_bool = var_566_int == (int)1;
	if(var_570_bool != 0) {
		var_565_string = "bullet";
		return 0;
	}
	var_565_string = "phys";
	return 0;
}


func_981(var_649_bool, var_650_float)
{
	var_651_float = 0; var_652_bool = 0; var_653_float = 0; var_654_bool = 0;
	rand(var_653_float);
	var_655_bool = var_653_float < var_650_float;
	if(var_655_bool != 0) {

	Label_986:
		IsAnimationPlaying(var_654_bool);
		var_656_bool = var_654_bool == 0; //@nz
		if(var_656_bool != 0) {
		} else {
			var_657_bool = 0;
			func_1079(var_657_bool);
			if(var_657_bool != 0) {
				var_649_bool = 1;
				sync();
				goto Label_986;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1183(var_654_bool);
	}
	goto Label_1006;
	
Label_1006:
	var_649_bool = 0;
	return 4;
	
}


func_2007(var_17_bool, var_18_object, var_19_float)
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
			goto Label_2028;
		}
		var_17_bool = 0;
		return 0;
	}
Label_2028:
	var_24_float = 0;
	var_19_float = var_24_float;
	func_2059(var_24_float);
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; var_31_float = 0; var_32_float = 0; var_33_float = 0;
	var_18_object = var_29_object;
	var_19_float = var_31_float;
	func_1537(var_28_bool, var_29_object, "reputation", var_31_float, (float)0, (float)1);
	var_17_bool = 1;
	return 0;
	
}


func_1505(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_1512(var_68_float, var_69_object)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	GetPosition(var_73_cvector);
	@@var_69_object:GetPosition(var_74_cvector);
	var_75_cvector = var_74_cvector - var_73_cvector;
	var_68_float = var_75_cvector | var_75_cvector;
	return 6;
}


func_490(var_534_float)
{
	var_534_float = 0.15000000596046448;
	return 0;
}


func_493(var_541_int)
{
	var_541_int = 0;
	return 0;
}


func_1520(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
	return 2;
}


func_1008(var_0_object, var_429_bool, var_430_float)
{
	var_431_bool = 0; var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0; var_436_bool = 0; var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0;
	
Label_1009:
	IsAnimationPlaying(var_436_bool);
	var_441_bool = var_436_bool == 0; //@nz
	if(var_441_bool != 0) {
	} else {
		var_442_bool = 0;
		func_1079(var_442_bool);
		if(var_442_bool != 0) {
			var_429_bool = 1;
			return 10;
		}
		var_485_bool = 0; var_486_object = Obj();
		var_486_object = var_0_object;
		func_1704(var_485_bool, var_486_object);
		var_487_bool = var_485_bool == 0; //@nz
		if(var_487_bool != 0) {
			var_429_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_437_cvector);
		GetPFPosition(var_438_cvector);
		var_439_cvector = var_437_cvector - var_438_cvector;
		var_440_float = var_439_cvector | var_439_cvector;
		var_488_float = var_430_float * var_430_float;
		var_489_bool = var_440_float < var_488_float;
		if(var_489_bool != 0) {
			var_490_bool = 0; var_491_float = 0;
			var_430_float = var_491_float;
			func_842(var_439_cvector, var_440_float, var_490_bool, var_491_float);
			var_429_bool = 1;
			sync();
			goto Label_1009;
		}
		return 10;
	}
	func_1183(var_440_float);
	var_429_bool = 0;
	return 10;
	
}


func_496(var_602_int)
{
	var_602_int = 1;
	return 0;
}


func_498(var_603_object, var_604_float)
{
	var_605_bool = 0;
	var_605_bool = 0;
	var_607_bool = var_604_float > (int)0;
	if(var_607_bool != 0) {
		var_608_bool = 0; var_609_object = Obj();
		var_603_object = var_609_object;
		func_1632(var_608_bool, var_609_object);
		if(var_608_bool != 0) {
			var_605_bool = 1;
		}
	}
	if(var_605_bool != 0) {
		var_625_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_979(var_604_float);
	}
	return 0;
}


func_1525(var_36_bool, var_37_object, var_38_string)
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


func_2042(var_593_float)
{
	var_594_object = Obj(); var_595_object = Obj();
	CreateFloatVector(var_595_object);
	@@var_595_object:add(var_593_float);
	var_597_bool = var_593_float < (int)0;
	if(var_597_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_595_object);
	return 2;
}
EMIT "Stack[-1] = 0";


