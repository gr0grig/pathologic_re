// @IMPORTS: Sleep/1,IsPlayerActor/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,GetScene/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,GetGeometryLocator/3,AddActorByType/6,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,RotateAsync/2,IsLoaded/1,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,GetProperty/2,SignalDeath/1,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,ClearSubContainer/1,GetInvItemByName/2
// @STRINGS: W:all|A:RemoveStationaryActor|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|A:SetScriptProperty|W:Target|W:StartDirection|W:kill|W:attack_off|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:reputation|W:battle|W:god_mode|W:idle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|W:Knife|W:lockpick|W:grabitel_mark
// @GLOBALS: 0:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_17: op=0x8 vars=object
// @EVENT_1: op=0x16 vars=object
// @EVENT_3: op=0x20 vars=object
// @TASK_1: vars= params=1
// @EVENT_0: op=0xaa vars=object
// @EVENT_22: op=0x129 vars=object,int,float,float
// @EVENT_16: op=0x12b vars=object,string
// @EVENT_41: op=0x12d vars=object
// @TASK_2: vars= params=2
// @TASK_3: vars=bool params=2
// @EVENT_17: op=0x1bf vars=object
// @EVENT_30: op=0x1c5 vars=object,object,bool
// @EVENT_26: op=0x1cc vars=string
// @TASK_4: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0x20a vars=object
// @EVENT_30: op=0x210 vars=object,object,bool
// @EVENT_26: op=0x217 vars=string
// @TASK_5: vars=bool,object,bool params=6
// @EVENT_17: op=0x4b3 vars=object
// @EVENT_30: op=0x4b9 vars=object,object,bool
// @EVENT_26: op=0x4c0 vars=string
// @EVENT_7: op=0x4fc vars=int
// @EVENT_1: op=0x517 vars=object
// @EVENT_2: op=0x526 vars=object
// @EVENT_10: op=0x5ac vars=object
// @EVENT_41: op=0x5b7 vars=object
// @TASK_6: vars= params=1
// @STANDALONE_EVENT_22: op=0x863 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x86b vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x875 vars=object,string
// @STANDALONE_EVENT_41: op=0x882 vars=object
// @PE: 0x8,0x9b,0x10f,0x129,0x12b,0x12d,0x1bf,0x1c5,0x1cc,0x1d2,0x1ee,0x1f1,0x1f6,0x20a,0x210,0x217,0x4b3,0x4b9,0x4c0,0x4fc,0x517,0x526,0x59a,0x5ac,0x5b7,0x5c0,0x5cb,0x5d7,0x7b4,0x7bb,0x7d3,0x7de,0x7eb,0x85b,0x863,0x86b,0x882,0x888,0x88f,0x89b,0x8ea,0x915,0x917

	task_0_event_17(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_2184(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_123();
		var_51_object = Obj();
		var_14_object = var_51_object;
		func_2191(var_51_object);
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
		func_2203(var_14_object);
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
	func_2325();
	return 0;
}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2327(var_15_object);
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
	func_2325();
	return 0;
}


task_4_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2327(var_15_object);
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
	func_2325();
	return 0;
}


task_5_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_object = var_14_object;
	var_11_object = var_15_object;
	func_2327(var_15_object);
	return 0;
}


task_5_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_12_bool = var_10_string == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_1290(var_10_string);
	}
	return 0;
}


task_5_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_12_bool = var_10_int == (int)1;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_13_object = var_1_object;
		func_2089(var_13_object);
	} else {
		var_18_int = 0;
		var_10_int = var_18_int;
		func_1434(var_9_bool, var_10_int, var_18_int);
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
		func_1893(var_14_object);
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
	func_1290(var_10_object);
	var_10_object = Obj();
	func_2178();
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1795(var_14_object, var_15_int, var_16_float);
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
	func_1863(var_18_float, var_19_cvector, var_20_cvector);
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
	func_2139(var_11_object);
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


func_1541(var_72_bool, var_73_object, var_74_string, var_75_float, var_76_float, var_77_float)
{
	var_78_float = 0; var_79_float = 0;
	var_80_bool = 0; var_81_object = Obj(); var_82_string = "";
	var_73_object = var_81_object;
	var_74_string = var_82_string;
	func_1529(var_80_bool, var_81_object, var_82_string);
	var_89_bool = var_80_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_72_bool = 0;
		return 2;
	}
	@@var_73_object:GetProperty(var_74_string, var_79_float);
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0;
	var_91_float = var_79_float + var_75_float;
	var_76_float = var_92_float;
	var_77_float = var_93_float;
	func_2003(var_90_float, var_91_float, var_92_float, var_93_float);
	@@var_73_object:SetProperty(var_74_string, var_90_float);
	var_72_bool = 1;
	return 2;
}


func_2062(var_588_float)
{
	var_589_object = Obj(); var_590_object = Obj();
	CreateFloatVector(var_590_object);
	@@var_590_object:add(var_588_float);
	var_592_bool = var_588_float < (int)0;
	if(var_592_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_590_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1563(var_532_float, var_533_object, var_534_float, var_535_int)
{
	var_539_int = 0; var_540_string = ""; var_541_int = 0; var_542_float = 0; var_543_float = 0; var_544_float = 0; var_545_int = 0; var_546_string = ""; var_547_int = 0; var_548_float = 0; var_549_float = 0; var_550_float = 0;
	var_551_bool = 0; var_552_object = Obj(); var_553_string = "";
	var_533_object = var_552_object;
	func_1529(var_551_bool, var_552_object, "health");
	var_554_bool = var_551_bool == 0; //@nz
	if(var_554_bool != 0) {
		var_532_float = 0.0;
		return 12;
	}
	var_555_bool = 0; var_556_object = Obj(); var_557_string = "";
	var_533_object = var_556_object;
	func_1529(var_555_bool, var_556_object, "armor");
	var_558_bool = var_555_bool == 0; //@nz
	if(var_558_bool != 0) {
		var_545_int = 0;
	} else {
			@@var_533_object:GetProperty("armor", var_545_int);
	}
	var_560_string = ""; var_561_int = 0;
	var_535_int = var_561_int;
	func_1495(var_560_string, var_561_int);
	var_546_string = "armor_" + var_560_string;
	var_566_bool = 0; var_567_object = Obj(); var_568_string = "";
	var_533_object = var_567_object;
	var_546_string = var_568_string;
	func_1529(var_566_bool, var_567_object, var_568_string);
	var_569_bool = var_566_bool == 0; //@nz
	if(var_569_bool != 0) {
		var_547_int = 0;
	} else {
		@@var_533_object:GetProperty(var_546_string, var_547_int);

	}
	var_570_float = 0; var_571_float = 0; var_572_float = 0;
	var_573_int = var_545_int + var_547_int;
	var_571_float = var_573_int / (float)100.0;
	func_1972(var_570_float, var_571_float, (float)1);
	var_570_float = var_548_float;
	@@var_533_object:GetProperty("health", var_549_float);
	var_578_int = (int)1 - var_548_float;
	var_550_float = var_534_float * var_578_int;
	var_580_float = 0; var_581_float = 0; var_582_float = 0; var_583_float = 0;
	var_581_float = var_549_float - var_550_float;
	func_2003(var_580_float, var_581_float, (float)0, (float)1);
	@@var_533_object:SetProperty("health", var_580_float);
	var_586_bool = 0; var_587_object = Obj();
	var_533_object = var_587_object;
	func_1524(var_586_bool, var_587_object);
	if(var_586_bool != 0) {
		var_588_float = 0;
		var_588_float = -var_550_float;
		func_2062(var_588_float);
	}
	var_550_float = var_532_float;
	return 12;
	
}


func_543(var_0_object, var_3_int, var_5_bool, var_202_object, var_203_bool, var_204_float, var_273_bool, var_365_bool)
{
	var_205_float = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_bool = 0; var_209_bool = 0; var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_float = 0; var_213_cvector = CVector(0,0,0); var_214_bool = 0; var_215_float = 0; var_216_float = 0; var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_bool = 0; var_220_bool = 0; var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_bool = 0; var_226_float = 0;
	func_772(var_224_cvector, var_225_bool, var_226_float);
	var_5_bool = 0;
	var_251_bool = IsFuncExist(var_202_object, "@GetAttackDistance", (int)1);
	if(var_251_bool != 0) {
		@@var_202_object:GetAttackDistance(var_216_float);
		var_216_float = var_216_float + (int)50;
	} else {
							var_204_float = var_216_float;
	}
	var_254_bool = var_216_float >= (int)150;
	if(var_254_bool != 0) {
		var_216_float = 150;
	}
	var_3_int = false;
	var_0_object = var_202_object;
	IsPlayerActor(var_0_object, var_219_bool);
	var_255_bool = var_219_bool;
	if(var_255_bool != 0) {
		PlayGlobalMusic("attack");
		var_257_object = Obj();
		func_1956(var_257_object);
		SendPlayerEnemy(var_202_object, var_257_object);
	}
	var_258_bool = var_203_bool;
	if(var_258_bool != 0) {
		var_220_bool = 0;
	} else {
						var_220_bool = 1;

	}
	var_221_float = (float)300.0 + var_216_float;
	
Label_583:
	var_260_bool = 0;
	var_260_bool = 0;
	var_261_bool = 0; var_262_object = Obj();
	var_262_object = var_0_object;
	func_1708(var_261_bool, var_262_object);
	if(var_261_bool != 0) {
		var_263_bool = var_3_int == 0; //@nz
		if(var_263_bool != 0) {
			var_260_bool = 1;
		}
	}
	if(var_260_bool != 0) {
		func_1187(var_226_float);
		@@@var_0_object:GetPFPosition(var_217_cvector);
		GetPFPosition(var_218_cvector);
		var_222_cvector = var_217_cvector - var_218_cvector;
		var_223_float = var_222_cvector | var_222_cvector;
		var_265_float = var_221_float * var_221_float;
		var_266_bool = var_223_float >= var_265_float;
		if(var_266_bool != 0) {
			var_267_bool = 0; var_268_object = Obj(); var_269_float = 0; var_270_float = 0; var_271_bool = 0; var_272_bool = 0;
			var_268_object = var_0_object;
			var_216_float = var_269_float;
			TaskCall(5);
			func_1227(var_275_bool, var_267_bool, var_268_object, var_269_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_350_bool = var_273_bool == 0; //@nz
			if(var_350_bool != 0) {
			} else {
				var_220_bool = 0;
		} else {
				var_356_float = var_204_float * var_204_float;
				var_357_bool = var_223_float >= var_356_float;
				if(var_357_bool != 0) {
					@@@var_0_object:GetPFPosition(var_224_cvector);
					CanReachByPF(var_225_bool, var_224_cvector);
					var_358_bool = var_225_bool == 0; //@nz
					if(var_358_bool != 0) {
						var_359_bool = 0; var_360_object = Obj(); var_361_float = 0; var_362_float = 0; var_363_bool = 0; var_364_bool = 0;
						var_360_object = var_0_object;
						var_216_float = var_361_float;
						TaskCall(5);
						func_1227(var_367_bool, var_359_bool, var_360_object, var_361_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_368_bool = var_365_bool == 0; //@nz
						if(var_368_bool != 0) {
							goto Label_755;
						}
						var_220_bool = 0;
						goto Label_583;
					}
					var_369_bool = var_220_bool == 0; //@nz
					if(var_369_bool != 0) {
						var_370_object = Obj();
						var_370_object = var_0_object;
						func_1877(var_370_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1187(var_226_float);
						StopAsync();
						var_220_bool = 1;
						var_381_bool = 0; var_382_object = Obj();
						var_382_object = var_0_object;
						func_1708(var_381_bool, var_382_object);
						var_383_bool = var_381_bool == 0; //@nz
						if(var_383_bool != 0) {
							goto Label_755;
						}
					}
					rand(var_226_float);
					var_384_bool = 0;
					var_386_bool = var_226_float < (float)0.19999998807907104;
					if(var_386_bool != 1) {
						var_387_bool = 0;
						func_1144((bool)1, var_387_bool);
						if(var_387_bool != 1) {
							var_384_bool = 0;
						}
					}
					if(var_384_bool != 0) {
						Face(var_0_object);
						func_1192();
						PlayAnimation("all", "attack_stay");
						var_424_bool = 0; var_425_float = 0;
						var_204_float = var_425_float;
						func_1012(var_226_float, var_424_bool, var_425_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1187(var_226_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_663_bool = 0;
						func_1144(var_226_float, var_663_bool);
						var_664_bool = var_663_bool == 0; //@nz
						if(var_664_bool == 0) goto Label_745;
						var_665_bool = 0; var_666_object = Obj();
						var_666_object = var_0_object;
						func_1708(var_665_bool, var_666_object);
						var_667_bool = var_665_bool == 0; //@nz
						if(var_667_bool != 0) {
							goto Label_755;
						}
						@@@var_0_object:GetPFPosition(var_217_cvector);
						GetPFPosition(var_218_cvector);
						var_222_cvector = var_217_cvector - var_218_cvector;
						var_223_float = var_222_cvector | var_222_cvector;
						var_668_float = var_204_float * var_204_float;
						var_669_bool = var_223_float < var_668_float;
						if(var_669_bool == 0) goto Label_745;
						var_670_bool = 0; var_671_float = 0;
						var_204_float = var_671_float;
						func_846(var_225_bool, var_226_float, var_670_bool, var_671_float);
						var_672_bool = var_670_bool == 0; //@nz
						if(var_672_bool == 0) goto Label_745;
						goto Label_755;
				}
					var_673_bool = 0; var_674_float = 0;
					var_204_float = var_674_float;
					func_846(var_225_bool, var_226_float, var_673_bool, var_674_float);
					var_675_bool = var_673_bool == 0; //@nz
					if(var_675_bool != 0) {
						goto Label_755;
					}
					var_220_bool = 1;

				}
			Label_745:
				goto Label_754;
		}
		Label_754:
			goto Label_583;

		}
	}
Label_755:
	WaitForAnimEnd();
	var_351_int = var_3_int;
	if(var_351_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_354_bool = var_219_bool;
	if(var_354_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2079(var_68_float)
{
	var_69_object = Obj(); var_70_object = Obj();
	CreateFloatVector(var_70_object);
	@@var_70_object:add(var_68_float);
	SendWorldWndMessage((int)16, var_70_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1055(var_0_object, var_439_bool)
{
	var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_cvector = CVector(0,0,0); var_443_float = 0; var_444_float = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0; var_449_float = 0;
	var_450_bool = 0; var_451_object = Obj();
	var_451_object = var_0_object;
	func_1708(var_450_bool, var_451_object);
	var_452_bool = var_450_bool == 0; //@nz
	if(var_452_bool != 0) {
		var_439_bool = 0;
		return 10;
	}
	var_453_bool = 0;
	func_1144(var_449_float, var_453_bool);
	if(var_453_bool != 0) {
		@@@var_0_object:GetPFPosition(var_445_cvector);
		GetPFPosition(var_446_cvector);
		var_447_cvector = var_445_cvector - var_446_cvector;
		var_448_float = var_447_cvector | var_447_cvector;
		@@@var_0_object:GetAttackDistance(var_449_float);
		var_449_float = var_449_float + (int)50;
		var_455_float = var_449_float * var_449_float;
		var_439_bool = var_448_float <= var_455_float;
		return 10;
	}
	var_439_bool = 0;
	return 10;
}


func_2089(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_16_bool = var_15_bool;
	if(var_16_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_42()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_1888(var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 14;
	}
	func_2122((int)0);
	var_29_int = var_18_int;
	var_19_int = 0;
	
Label_56:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_19_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_1888(var_45_bool);
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
			func_2115(var_51_string, var_52_int);
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


func_2098()
{
	var_114_object = Obj(); var_115_object = Obj();
	GetScene(var_115_object);
	var_117_object = Obj();
	func_1956(var_117_object);
	BroadcastMessage("battle", var_117_object, var_115_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1083(var_437_bool)
{
	var_438_bool = 0;
	var_438_bool = 0;
	var_439_bool = 0;
	func_1055(var_438_bool, var_439_bool);
	if(var_439_bool != 0) {
		var_456_bool = 0;
		func_1099(var_437_bool, var_438_bool, var_456_bool);
		if(var_456_bool != 0) {
			var_438_bool = 1;
		}
	}
	if(var_438_bool != 0) {
		var_437_bool = 1;
		return 0;
	}
	var_437_bool = 0;
	return 0;
}


func_2109(var_614_bool)
{
	var_615_bool = 0; var_616_bool = 0;
	GetVariable("god_mode", var_616_bool);
	var_616_bool = var_614_bool;
	return 2;
}


func_2115(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_2122(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_2124:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_2115(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_2124;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_1099(var_0_object, var_4_int, var_456_bool)
{
	var_457_object = Obj(); var_458_bool = 0; var_459_float = 0; var_460_cvector = CVector(0,0,0); var_461_cvector = CVector(0,0,0); var_462_object = Obj(); var_463_bool = 0; var_464_float = 0; var_465_cvector = CVector(0,0,0); var_466_cvector = CVector(0,0,0);
	GetScene(var_462_object);
	var_463_bool = 0;
	
Label_1103:
	var_467_cvector = CVector(0,0,0); var_468_object = Obj();
	var_468_object = var_0_object;
	func_1509(var_467_cvector, var_468_object);
	var_473_int = -var_467_cvector;
	FindDirLength(var_464_float, var_473_int, var_4_int);
	var_474_bool = var_464_float < var_4_int;
	if(var_474_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_465_cvector);
		GetPFPosition(var_466_cvector);
		WaitForAnimEnd();
		func_1187(var_466_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_463_bool = 1;
		var_478_bool = 0;
		func_1055(var_466_cvector, var_478_bool);
		var_479_bool = var_478_bool == 0; //@nz
		if(var_479_bool != 0) {
			goto Label_1141;
		}
		goto Label_1103;
	}
Label_1141:
	var_463_bool = var_456_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2139(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(1);
	func_128(var_12_object);
	TaskReturn();
	return 0;
}


func_1636(var_603_bool, var_604_object)
{
	var_605_float = 0; var_606_float = 0;
	var_607_bool = 0; var_608_object = Obj(); var_609_string = "";
	var_604_object = var_608_object;
	func_1529(var_607_bool, var_608_object, "health");
	var_610_bool = var_607_bool == 0; //@nz
	if(var_610_bool != 0) {
		var_603_bool = 0;
		return 2;
	}
	var_611_bool = 0;
	var_611_bool = 0;
	var_612_bool = 0; var_613_object = Obj();
	var_604_object = var_613_object;
	func_1524(var_612_bool, var_613_object);
	if(var_612_bool != 0) {
		var_614_bool = 0;
		func_2109(var_614_bool);
		if(var_614_bool != 0) {
			var_611_bool = 1;
		}
	}
	if(var_611_bool != 0) {
		var_603_bool = 0;
		return 2;
	}
	@@var_604_object:GetProperty("health", var_606_float);
	var_603_bool = var_606_float <= (float)0.0;
	return 2;
}


func_1144(var_0_object, var_387_bool)
{
	var_388_bool = 0; var_389_bool = 0;
	var_392_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_392_bool != 0) {
		@@@var_0_object:IsAttacking(var_389_bool);
		var_389_bool = var_387_bool;
		return 2;
	}
	var_387_bool = 0;
	return 2;
}


func_121(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_123()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_128(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	func_2247();
	var_57_bool = 0; var_58_object = Obj();
	var_12_object = var_58_object;
	func_1524(var_57_bool, var_58_object);
	if(var_57_bool != 0) {
		var_61_bool = 0; var_62_object = Obj(); var_63_float = 0;
		var_12_object = var_62_object;
		func_2027(var_61_bool, var_62_object, (float)0.029999999329447746);
	}
	GetScene(var_14_object);
	var_99_object = Obj();
	func_1956(var_99_object);
	@@var_14_object:RemoveStationaryActor(var_99_object);
	var_102_object = Obj();
	var_12_object = var_102_object;
	func_155(var_102_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1155(var_2_object, var_5_bool)
{
	var_500_float = 0; var_501_int = 0; var_502_float = 0; var_503_int = 0;
	var_504_bool = var_2_object == 0; //@nz
	if(var_504_bool != 0) {
		return 4;
	}
	var_505_bool = var_5_bool;
	if(var_505_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_508_bool = var_5_bool > (int)0;
		if(var_508_bool != 0) {
			return 4;
		}
	}
	rand(var_502_float);
	var_509_float = 0;
	func_1201(var_509_float);
	var_510_bool = var_502_float < var_509_float;
	if(var_510_bool != 0) {
		irand(var_503_int, var_2_object);
		var_503_int = var_503_int + (int)1;
		var_513_int = "attack" + var_503_int;
		Speak(var_513_int);
		var_514_int = 0;
		func_1199(var_514_int);
		var_5_bool = var_514_int;
	}
	return 4;
}


func_1667(var_38_bool, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0;
	@@var_39_object:IsDead(var_41_bool);
	var_41_bool = var_38_bool;
	return 2;
}


func_2184(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1708(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_1672(var_27_bool, var_28_object)
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
		func_1667(var_38_bool, var_39_object);
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


func_2191(var_51_object)
{
	var_52_object = Obj();
	var_51_object = var_52_object;
	func_2282(var_52_object);
	return 0;
}


func_2197(var_15_int)
{
	var_16_int = 0; var_17_int = 0;
	GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
	return 2;
}


func_155(var_102_object)
{
	EventDisable(0);
	var_103_object = Obj();
	var_102_object = var_103_object;
	func_180(var_103_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_166:
	Hold();
	goto Label_166;
}
EMIT "Return(); Pop(0)";


func_2203(var_14_object)
{
	var_15_int = 0;
	func_2197(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_1187(var_0_object)
{
	var_264_object = Obj();
	var_264_object = var_0_object;
	func_2089(var_264_object);
	return 0;
}


func_1192()
{
	var_393_string = "";
	func_1915("attack_stay");
	return 0;
}


func_2216(var_20_int, var_21_int)
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0;
	var_26_bool = var_20_int > var_21_int;
	if(var_26_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_24_int = 0;
	var_28_bool = var_20_int != var_21_int;
	if(var_28_bool != 0) {
		var_29_int = var_21_int - var_20_int;
		irand(var_24_int, var_29_int);
	} else {
		var_38_bool = var_20_int == (int)0;
		if(var_38_bool == 0) goto Label_2234;
		return 4;
	}
Label_2234:
	var_24_int = var_24_int + var_20_int;
	var_31_bool = var_24_int == (int)0;
	if(var_31_bool != 0) {
		return 4;
	}
	var_32_int = 0; var_33_string = "";
	func_2277(var_32_int, "Money");
	AddItem(var_25_bool, var_32_int, (int)0, var_24_int);
	return 4;
	
}


func_1708(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_24_object = var_28_object;
	func_1672(var_27_bool, var_28_object);
	var_44_bool = var_27_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
	var_24_object = var_46_object;
	func_1529(var_45_bool, var_46_object, "noaccess");
	var_54_bool = var_45_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_23_bool = 1;
		return 2;
	}
	@@var_24_object:GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == (int)0;
	return 2;
}


func_1197(var_643_bool)
{
	var_643_bool = 1;
	return 0;
}


func_1199(var_514_int)
{
	var_514_int = 1;
	return 0;
}


func_1201(var_509_float)
{
	var_509_float = 0.5;
	return 0;
}


func_180(var_103_object)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_string = ""; var_109_object = Obj(); var_110_bool = 0; var_111_bool = 0; var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_string = ""; var_119_object = Obj(); var_120_bool = 0; var_121_bool = 0; var_122_float = 0; var_123_cvector = CVector(0,0,0);
	var_124_bool = var_103_object == 0; //@ne
	if(var_124_bool != 0) {
		var_125_string = "";
		func_271("fdie");
	} else {
		@@var_103_object:GetPosition(var_114_cvector);
		GetPosition(var_115_cvector);
		GetDirection(var_116_cvector);
		var_117_cvector = var_115_cvector - var_114_cvector;
		var_157_float = GetByIndex(var_117_cvector, 0);
		var_158_float = GetByIndex(var_116_cvector, 0);
		var_159_float = var_157_float * var_158_float;
		var_160_float = GetByIndex(var_117_cvector, 2);
		var_161_float = GetByIndex(var_116_cvector, 2);
		var_162_float = var_160_float * var_161_float;
		var_163_int = var_159_float + var_162_float;
		var_165_bool = var_163_int >= (int)0;
		if(var_165_bool != 0) {
			var_118_string = "fdie";
		} else {
				var_118_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_103_object = var_119_object;
		var_168_bool = IsFuncExist(var_103_object, "GetScriptProperty", (int)2);
		if(var_168_bool != 0) {
			@@var_103_object:HasScriptProperty(var_120_bool, "Owner");
			var_170_bool = var_120_bool;
			if(var_170_bool != 0) {
				@@var_103_object:GetScriptProperty(var_119_object, "Owner");
				var_172_bool = var_119_object == 0; //@ne
				if(var_172_bool != 0) {
					var_103_object = var_119_object;
				}
			}
		}
		var_175_bool = IsFuncExist(var_119_object, "@GetEyesHeight", (int)1);
		if(var_175_bool != 0) {
			@@var_119_object:GetEyesHeight(var_122_float);
			var_123_cvector = CVector(0.0, 0.0, 0.0);
			var_176_float = GetByIndex(var_123_cvector, 1);
			var_122_float = var_176_float;
			SetByIndex(var_123_cvector, 1) = var_176_float;
			LookAsync(var_103_object, "head", var_123_cvector);
			var_121_bool = 1;
		} else {
			var_121_bool = 0;

		}
		var_178_string = "";
		var_118_string = var_178_string;
		func_1915(var_178_string);
		PlayAnimation("all", var_118_string);
		WaitForAnimEnd();
		var_180_bool = var_121_bool;
		if(var_180_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_118_string);
		RemoveEnvelope();
		var_119_object = 0;
	}
	return 20;
	
}


func_1732(var_101_bool, var_102_cvector)
{
	var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_bool = 0;
	GetPosition(var_106_cvector);
	var_107_cvector = var_102_cvector - var_106_cvector;
	var_109_float = GetByIndex(var_107_cvector, 0);
	var_110_float = GetByIndex(var_107_cvector, 2);
	Rotate(var_109_float, var_110_float, var_108_bool);
	var_108_bool = var_101_bool;
	return 6;
}


func_2247()
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	ClearSubContainer((int)0);
	var_20_int = 0; var_21_int = 0;
	func_2216((int)300, (int)750);
	var_39_string = ""; var_40_int = 0; var_41_int = 0;
	func_1904("Knife", (int)1, (int)8);
	var_50_string = ""; var_51_int = 0; var_52_int = 0;
	func_1904("lockpick", (int)1, (int)6);
	var_53_int = 0; var_54_string = "";
	func_2277(var_53_int, "grabitel_mark");
	AddItem(var_18_bool, var_53_int, (int)0, (int)1);
	return 4;
}


func_1227(var_2_object, var_267_bool, var_268_object, var_269_float, var_270_float, var_271_bool, var_272_bool)
{
	var_276_bool = 0; var_277_bool = 0; var_278_bool = 0; var_279_bool = 0;
	var_280_object = Obj();
	var_268_object = var_280_object;
	func_2089(var_280_object);
	SetTimer((int)1, (int)5);
	CanSee(var_278_bool, var_268_object);
	var_283_bool = var_278_bool;
	if(var_283_bool != 0) {
		var_2_object = true;
		var_284_object = Obj();
		var_268_object = var_284_object;
		func_1893(var_284_object);
	} else {
		var_2_object = false;
	}
	var_291_bool = 0; var_292_object = Obj();
	var_268_object = var_292_object;
	func_1524(var_291_bool, var_292_object);
	if(var_291_bool != 0) {
		var_295_object = Obj();
		func_1956(var_295_object);
		SendPlayerEnemy(var_268_object, var_295_object);
	}
	var_296_bool = 0; var_297_object = Obj(); var_298_float = 0; var_299_float = 0; var_300_bool = 0; var_301_bool = 0;
	var_268_object = var_297_object;
	var_269_float = var_298_float;
	var_270_float = var_299_float;
	var_271_bool = var_300_bool;
	var_272_bool = var_301_bool;
	func_1332(var_278_bool, var_279_bool, var_296_bool, var_297_object, var_298_float, var_299_float, var_300_bool, var_301_bool);
	var_296_bool = var_279_bool;
	var_347_object = var_2_object;
	if(var_347_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_279_bool = var_267_bool;
	return 4;
	
}


func_1742(var_97_bool, var_98_object)
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	@@var_98_object:GetPosition(var_100_cvector);
	var_101_bool = 0; var_102_cvector = CVector(0,0,0);
	var_100_cvector = var_102_cvector;
	func_1732(var_101_bool, var_102_cvector);
	var_101_bool = var_97_bool;
	return 2;
}


func_1751(var_27_object)
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


func_2277(var_32_int, var_33_string)
{
	var_34_int = 0; var_35_int = 0;
	GetInvItemByName(var_35_int, var_33_string);
	var_35_int = var_32_int;
	return 2;
}


func_2282(var_52_object)
{
	var_53_object = Obj();
	var_52_object = var_53_object;
	TaskCall(6);
	func_1483(var_53_object);
	TaskReturn();
	return 0;
}


func_2290(var_137_cvector, var_138_cvector, var_139_cvector, var_140_float)
{
	var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_float = 0;
	var_147_cvector = var_139_cvector - var_138_cvector;
	var_148_float = 250000;
	var_153_float = GetByIndex(var_147_cvector, 1);
	var_155_float = var_153_float * (int)1000;
	var_156_float = var_140_float * var_140_float;
	var_149_float = var_155_float - var_156_float;
	var_150_float = var_147_cvector | var_147_cvector;
	var_157_float = 0; var_158_float = 0; var_159_float = 0; var_160_float = 0;
	var_148_float = var_158_float;
	var_149_float = var_159_float;
	var_150_float = var_160_float;
	func_1979(var_157_float, var_158_float, var_159_float, var_160_float);
	var_157_float = var_151_float;
	var_166_bool = var_151_float < (int)0;
	if(var_166_bool != 0) {
		var_152_float = 1;
	} else {
		var_171_float = 0; var_172_float = 0; var_173_float = 0; var_174_float = 0; var_175_float = 0;
		var_148_float = var_172_float;
		var_149_float = var_173_float;
		var_150_float = var_174_float;
		var_175_float = sqrt(var_151_float);
		func_1986(var_172_float, var_173_float, var_174_float, var_175_float);
		var_152_float = sqrt(var_171_float);
	}
	var_168_float = CVector(0.0, 500.0, 0.0) * var_152_float;
	var_169_float = var_168_float * var_152_float;
	var_170_int = var_147_cvector + var_169_float;
	var_137_cvector = var_170_int / var_152_float;
	return 12;
	
}


func_1795(var_14_object, var_15_int, var_16_float)
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
		func_1509(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1962(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1824:
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
			goto Label_1824;
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
			func_1863(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1751(var_104_object);
	return 18;
	
}


func_772(var_1_bool, var_2_object, var_4_int)
{
	var_227_bool = 0; var_228_bool = 0; var_229_cvector = CVector(0,0,0); var_230_bool = 0; var_231_bool = 0; var_232_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_774:
	var_236_int = var_1_bool + (int)1;
	var_237_int = "attack_begin" + var_236_int;
	HasAnimation(var_230_bool, "all", var_237_int);
	var_238_bool = var_230_bool == 0; //@nz
	if(var_238_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_774;
	}
	var_2_object = 0;
	
Label_788:
	var_241_int = var_2_object + (int)1;
	var_242_int = "attack" + var_241_int;
	IsExisting3DSound(var_231_bool, var_242_int);
	var_243_bool = var_231_bool == 0; //@nz
	if(var_243_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_788;

	}
	GetAnimationOffset(var_232_cvector, "all", "bjump");
	var_246_float = GetByIndex(var_232_cvector, 2);
	var_4_int = -var_246_float;
	return 6;
	
}


func_1290(var_2_int)
{
	KillTimer((int)1);
	var_12_int = var_2_int;
	if(var_12_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1456(var_10_object);
	return 0;
}


func_271(var_125_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_126_string = "";
	var_125_string = var_126_string;
	func_1915(var_126_string);
	PlayAnimation("all", var_125_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_125_string);
	RemoveEnvelope();
	return 0;
}


func_2325()
{
	return 0;
}


func_2327(var_13_bool)
{
	var_13_bool = 0;
	return 0;
}


func_807(var_0_object, var_518_float, var_519_int)
{
	var_520_object = Obj(); var_521_float = 0; var_522_float = 0; var_523_object = Obj(); var_524_float = 0; var_525_float = 0;
	var_527_float = var_518_float * (float)0.8999999761581421;
	GetVictim(var_527_float, var_523_object);
	ReportAttack(var_0_object);
	var_528_bool = var_523_object == var_0_object;
	if(var_528_bool != 0) {
		var_529_float = 0; var_530_object = Obj(); var_531_int = 0;
		var_523_object = var_530_object;
		var_519_int = var_531_int;
		func_494(var_531_int);
		var_529_float = var_524_float;
		var_532_float = 0; var_533_object = Obj(); var_534_float = 0; var_535_int = 0;
		var_523_object = var_533_object;
		var_524_float = var_534_float;
		var_536_int = 0; var_537_object = Obj(); var_538_int = 0;
		var_523_object = var_537_object;
		var_519_int = var_538_int;
		func_497(var_538_int);
		var_536_int = var_535_int;
		func_1563(var_532_float, var_533_object, var_534_float, var_535_int);
		var_532_float = var_525_float;
		var_597_int = 0;
		func_500(var_597_int);
		ReportHit(var_0_object, var_597_int, var_525_float, var_524_float);
		var_598_object = Obj(); var_599_float = 0;
		var_523_object = var_598_object;
		var_525_float = var_599_float;
		func_502(var_598_object, var_599_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_303(var_54_bool, var_55_object, var_77_bool, var_684_object)
{
	var_56_float = 0; var_57_float = 0;
	var_58_bool = 0; var_59_object = Obj();
	var_55_object = var_59_object;
	func_1708(var_58_bool, var_59_object);
	var_60_bool = var_58_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	var_61_float = 0; var_62_object = Obj();
	var_55_object = var_62_object;
	func_1516(var_61_float, var_62_object);
	var_61_float = var_57_float;
	var_69_bool = 0; var_70_float = 0; var_71_float = 0; var_72_float = 0;
	var_57_float = var_70_float;
	func_2014(var_69_bool, var_70_float, (float)250000.0, (float)3240000.0);
	if(var_69_bool != 0) {
		var_75_bool = 0; var_76_object = Obj();
		var_55_object = var_76_object;
		TaskCall(3);
		func_340(var_57_float, var_77_bool, var_75_bool, var_76_object);
		TaskReturn();
		var_77_bool = var_54_bool;
		return 2;
	}
	var_682_bool = 0; var_683_object = Obj();
	var_55_object = var_683_object;
	TaskCall(4);
	func_466(var_682_bool, var_683_object);
	TaskReturn();
	var_684_object = var_54_bool;
	return 2;
}


func_1332(var_0_object, var_1_bool, var_296_bool, var_297_object, var_298_float, var_299_float, var_300_bool, var_301_bool)
{
	var_302_bool = 0; var_303_bool = 0; var_304_object = Obj(); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_object = Obj(); var_310_bool = 0; var_311_bool = 0; var_312_object = Obj(); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_object = Obj();
	var_0_object = false;
	var_1_bool = var_297_object;
	var_301_bool = var_311_bool;
	
Label_1336:
	var_318_bool = 0; var_319_object = Obj();
	var_297_object = var_319_object;
	func_1472(var_318_bool, var_319_object);
	var_322_bool = var_318_bool == 0; //@nz
	if(var_322_bool != 0) {
		var_296_bool = 0;
		return 16;
	}
	@@var_297_object:GetPosition(var_313_cvector);
	GetPosition(var_314_cvector);
	var_315_cvector = var_313_cvector - var_314_cvector;
	var_316_float = var_315_cvector | var_315_cvector;
	var_323_bool = 0;
	var_323_bool = 0;
	var_325_bool = var_299_float > (int)0;
	if(var_325_bool != 0) {
		var_326_float = var_299_float * var_299_float;
		var_327_bool = var_316_float > var_326_float;
		if(var_327_bool != 0) {
			var_323_bool = 1;
		}
	}
	if(var_323_bool != 0) {
		Stop();
		var_296_bool = 0;
		return 16;
	}
	var_328_float = var_298_float * var_298_float;
	var_329_bool = var_316_float > var_328_float;
	if(var_329_bool != 0) {
		@@var_297_object:GetPFPosition(var_313_cvector);
		FindPathTo(var_317_object, var_313_cvector);
		var_330_bool = var_317_object != 0; //@nn
		if(var_330_bool != 0) {
			var_317_object = var_312_object;
			var_317_object = 0;
		}
		var_331_bool = var_312_object != 0; //@nn
		if(var_331_bool != 0) {
			var_332_bool = var_311_bool;
			if(var_332_bool == 0) goto Label_1385;
			var_311_bool = 0;
			RotatePath(var_312_object, var_310_bool);
			var_333_bool = var_310_bool == 0; //@nz
			if(var_333_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_336_string = "";
				func_1479(var_336_string);
				var_337_string = "";
				func_1481(var_337_string);
				FollowPath(var_312_object, var_300_bool, var_310_bool, var_336_string, var_337_string);
				var_338_bool = var_310_bool == 0; //@nz
				if(var_338_bool != 0) {
					var_339_object = var_0_object;
					if(var_339_object != 0) {
						var_312_object = 0;
						goto Label_1432;
					EMIT "GOTO 0x57d";
					}
				} else {
					var_312_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_310_bool);
					var_342_bool = var_310_bool == 0; //@nz
					if(var_342_bool != 0) {
						var_343_object = var_0_object;
						if(var_343_object != 0) {
							var_312_object = 0;
							goto Label_1432;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1432;
	}
			var_317_object = 0;
			goto Label_1430;

		Label_1430:
			var_312_object = 0;

		}
		goto Label_1336;
	}
Label_1432:
	var_296_bool = !var_0_object;
	return 16;
	
}


func_1863(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1751(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_846(var_0_object, var_1_bool, var_485_bool, var_486_float)
{
	var_487_int = 0; var_488_bool = 0; var_489_int = 0; var_490_string = ""; var_491_int = 0; var_492_bool = 0; var_493_int = 0; var_494_string = "";
	func_1187(var_494_string);
	irand(var_491_int, var_1_bool);
	var_491_int = var_491_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2098();
	var_499_int = "attack_begin" + var_491_int;
	PlayAnimation("all", var_499_int);
	WaitForAnimEnd();
	func_1155(var_493_int, var_494_string);
	var_515_bool = 0; var_516_object = Obj();
	var_516_object = var_0_object;
	func_1708(var_515_bool, var_516_object);
	var_517_bool = var_515_bool == 0; //@nz
	if(var_517_bool != 0) {
		StopAsync();
		var_485_bool = 0;
		return 8;
	}
	var_518_float = 0; var_519_int = 0;
	var_486_float = var_518_float;
	var_491_int = var_519_int;
	func_807(var_494_string, var_518_float, var_519_int);
	var_623_int = "attack_middle" + var_491_int;
	HasAnimation(var_492_bool, "all", var_623_int);
	var_624_bool = var_492_bool;
	if(var_624_bool != 0) {
		func_2098();
		var_627_int = "attack_middle" + var_491_int;
		PlayAnimation("all", var_627_int);
		WaitForAnimEnd();
		func_1187(var_494_string);
		var_628_bool = 0; var_629_object = Obj();
		var_629_object = var_0_object;
		func_1708(var_628_bool, var_629_object);
		var_630_bool = var_628_bool == 0; //@nz
		if(var_630_bool != 0) {
			StopAsync();
			var_485_bool = 0;
			return 8;
		}
		var_631_float = 0; var_632_int = 0;
		var_486_float = var_631_float;
		var_491_int = var_632_int;
		func_807(var_494_string, var_631_float, var_632_int);
		var_493_int = 1;

	Label_923:
		var_634_int = "attack_middle" + var_491_int;
		var_636_int = var_634_int + "_";
		var_494_string = var_636_int + var_493_int;
		HasAnimation(var_492_bool, "all", var_494_string);
		var_638_bool = var_492_bool == 0; //@nz
		if(var_638_bool != 0) {
		} else {
			func_2098();
			PlayAnimation("all", var_494_string);
			WaitForAnimEnd();
			func_1187(var_494_string);
			var_654_bool = 0; var_655_object = Obj();
			var_655_object = var_0_object;
			func_1708(var_654_bool, var_655_object);
			var_656_bool = var_654_bool == 0; //@nz
			if(var_656_bool != 0) {
				StopAsync();
				var_485_bool = 0;
				var_657_float = 0; var_658_int = 0;
				var_486_float = var_657_float;
				var_491_int = var_658_int;
				func_807(var_494_string, var_657_float, var_658_int);
				var_493_int = var_493_int + (int)1;
				goto Label_923;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_642_int = "attack_end" + var_491_int;
	PlayAnimation("all", var_642_int);
	var_643_bool = 0;
	func_1197(var_643_bool);
	if(var_643_bool != 0) {
		var_644_bool = 0; var_645_float = 0;
		func_985(var_644_bool, (float)0.44999998807907104);
		StopAsync();
	}
	var_485_bool = 1;
	return 8;
	
}


func_340(var_0_object, var_75_bool, var_76_object, var_195_object)
{
	var_78_object = Obj(); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_object = Obj(); var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0);
	var_92_object = Obj();
	var_76_object = var_92_object;
	func_2089(var_92_object);
	var_0_object = false;
	var_97_bool = 0; var_98_object = Obj();
	var_76_object = var_98_object;
	func_1742(var_97_bool, var_98_object);
	var_111_bool = 0; var_112_object = Obj();
	var_76_object = var_112_object;
	func_1708(var_111_bool, var_112_object);
	var_113_bool = var_111_bool == 0; //@nz
	if(var_113_bool != 0) {
		var_75_bool = 0;
		return 14;
	}
	func_2098();
	Face(var_76_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_122_bool = 0; var_123_object = Obj();
	var_76_object = var_123_object;
	func_1708(var_122_bool, var_123_object);
	var_124_bool = var_122_bool == 0; //@nz
	if(var_124_bool != 0) {
		StopAsync();
		var_75_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_85_object);
	GetGeometryLocator("knife", var_87_bool, var_86_cvector);
	AddActorByType(var_88_object, "scripted", var_85_object, var_86_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_132_object = Obj();
	func_1956(var_132_object);
	@@var_88_object:SetScriptProperty("Owner", var_132_object);
	@@var_88_object:SetScriptProperty("Target", var_76_object);
	@@var_76_object:GetPosition(var_89_cvector);
	@@var_76_object:GetEyesHeight(var_90_float);
	var_134_float = GetByIndex(var_89_cvector, 1);
	var_136_int = var_90_float - (int)10;
	var_134_float = var_134_float + var_136_int;
	SetByIndex(var_89_cvector, 1) = var_134_float;
	var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_float = 0;
	var_86_cvector = var_138_cvector;
	var_89_cvector = var_139_cvector;
	func_2290(var_137_cvector, var_138_cvector, var_139_cvector, (float)2000.0);
	var_137_cvector = var_91_cvector;
	@@var_88_object:SetScriptProperty("StartDirection", var_91_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_189_object = var_0_object;
	if(var_189_object != 0) {
		var_75_bool = 1;
		return 14;
	}
	var_190_bool = 0; var_191_object = Obj();
	var_76_object = var_191_object;
	func_1708(var_190_bool, var_191_object);
	var_192_bool = var_190_bool == 0; //@nz
	if(var_192_bool != 0) {
		var_75_bool = 0;
		return 14;
	}
	var_193_bool = 0; var_194_object = Obj();
	var_76_object = var_194_object;
	TaskCall(4);
	func_466(var_193_bool, var_194_object);
	TaskReturn();
	var_195_object = var_75_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_1877(var_370_object)
{
	var_371_cvector = CVector(0,0,0); var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0);
	@@var_370_object:GetPosition(var_374_cvector);
	GetPosition(var_375_cvector);
	var_376_cvector = var_374_cvector - var_375_cvector;
	var_377_float = GetByIndex(var_376_cvector, 0);
	var_378_float = GetByIndex(var_376_cvector, 2);
	RotateAsync(var_377_float, var_378_float);
	return 6;
}


func_1888(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
	return 2;
}


func_1893(var_14_object)
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


func_1904(var_39_string, var_40_int, var_41_int)
{
	var_42_bool = 0; var_43_bool = 0;
	var_44_bool = 0; var_45_int = 0; var_46_int = 0;
	var_40_int = var_45_int;
	var_41_int = var_46_int;
	func_2022(var_44_bool, var_45_int, var_46_int);
	if(var_44_bool != 0) {
		AddItem(var_43_bool, var_39_string, (int)0);
	}
	return 2;
}


func_1915(var_126_string)
{
	var_127_bool = 0; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0; var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_bool = 0; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_bool = 0; var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0);
	IsExisting3DSound(var_135_bool, var_126_string);
	var_143_bool = var_135_bool == 0; //@nz
	if(var_143_bool != 0) {
		var_136_int = 0;

	Label_1921:
		var_145_int = var_136_int + (int)1;
		var_146_int = var_126_string + var_145_int;
		IsExisting3DSound(var_137_bool, var_146_int);
		var_147_bool = var_137_bool == 0; //@nz
		if(var_147_bool != 0) {
		} else {
			var_136_int = var_136_int + (int)1;
			goto Label_1921;
		}
		var_148_bool = var_136_int == 0; //@nz
		if(var_148_bool != 0) {
			return 16;
		}
		irand(var_138_int, var_136_int);
		var_150_int = var_138_int + (int)1;
		var_126_string = var_126_string + var_150_int;
	}
	Is3DSoundLoaded(var_139_bool, var_126_string);
	var_151_bool = var_139_bool;
	if(var_151_bool != 0) {
		GetEyesHeight(var_140_float);
		GetDirection(var_141_cvector);
		var_142_cvector = var_141_cvector * (int)50;
		var_153_float = GetByIndex(var_142_cvector, 1);
		var_153_float = var_153_float + var_140_float;
		SetByIndex(var_142_cvector, 1) = var_153_float;
		PlayGlobalSound(var_126_string, var_142_cvector);
	}
	return 16;
	
}


func_1434(var_0_bool, var_1_object, var_18_int)
{
	var_20_bool = var_18_int != (int)0;
	if(var_20_bool != 0) {
		return 0;
	}
	var_21_bool = 0; var_22_object = Obj();
	var_22_object = var_1_object;
	func_1472(var_21_bool, var_22_object);
	var_57_bool = var_21_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1956(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj();
	self(var_101_object);
	var_101_object = var_99_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1962(var_42_cvector, var_43_cvector)
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


func_1456(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1972(var_570_float, var_571_float, var_572_float)
{
	var_575_bool = var_571_float < var_572_float;
	if(var_575_bool != 0) {
		var_571_float = var_570_float;
	} else {
		var_572_float = var_570_float;
	}
	return 0;
	
}


func_1979(var_157_float, var_158_float, var_159_float, var_160_float)
{
	var_161_float = var_159_float * var_159_float;
	var_163_float = (int)4 * var_158_float;
	var_164_float = var_163_float * var_160_float;
	var_157_float = var_161_float - var_164_float;
	return 0;
}


func_1472(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_1708(var_23_bool, var_24_object);
	var_23_bool = var_21_bool;
	return 0;
}


func_1986(var_171_float, var_172_float, var_173_float, var_175_float)
{
	var_176_float = 0; var_177_float = 0;
	var_178_int = -var_173_float;
	var_179_int = var_178_int - var_175_float;
	var_181_float = (int)2 * var_172_float;
	var_177_float = var_179_int / var_181_float;
	var_183_bool = var_177_float > (int)0;
	if(var_183_bool != 0) {
		var_177_float = var_171_float;
		return 2;
	}
	var_184_int = -var_173_float;
	var_185_int = var_184_int + var_175_float;
	var_187_float = (int)2 * var_172_float;
	var_171_float = var_185_int / var_187_float;
	return 2;
}


func_1479(var_336_string)
{
	var_336_string = "walk";
	return 0;
}


func_1481(var_337_string)
{
	var_337_string = "run";
	return 0;
}


func_1483(var_53_object)
{
	
Label_1484:
	var_54_bool = 0; var_55_object = Obj();
	var_53_object = var_55_object;
	TaskCall(2);
	func_303(var_52_object, var_53_object, var_54_bool, var_55_object);
	TaskReturn();
	Sleep((int)1);
	goto Label_1484;
}
EMIT "Return(); Pop(0)";


func_466(var_193_bool, var_194_object)
{
	var_201_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_202_object = Obj(); var_203_bool = 0; var_204_float = 0;
	var_194_object = var_202_object;
	func_543(var_198_bool, var_199_float, var_200_int, var_193_bool, var_194_object, var_202_object, (bool)1, (float)200.0);
	var_676_bool = 0;
	var_676_bool = 0;
	var_677_bool = GlobalVars[0];
	if(var_677_bool != 0) {
		var_678_int = var_3_int;
		if(var_678_int != 0) {
			var_676_bool = 1;
		}
	}
	if(var_676_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_681_bool = GlobalVars[0];
	var_681_bool = var_193_bool;
	return 0;
}


func_2003(var_90_float, var_91_float, var_92_float, var_93_float)
{
	var_94_bool = var_91_float < var_92_float;
	if(var_94_bool != 0) {
		var_92_float = var_90_float;
		return 0;
	}
	var_95_bool = var_91_float > var_93_float;
	if(var_95_bool != 0) {
		var_93_float = var_90_float;
		return 0;
	}
	var_91_float = var_90_float;
	return 0;
}


func_983(var_3_int)
{
	var_3_int = true;
	return 0;
}


func_1495(var_560_string, var_561_int)
{
	var_563_bool = var_561_int == (int)2;
	if(var_563_bool != 0) {
		var_560_string = "fire";
		return 0;
	EMIT "GOTO 0x5e3";
	}
	var_565_bool = var_561_int == (int)1;
	if(var_565_bool != 0) {
		var_560_string = "bullet";
		return 0;
	}
	var_560_string = "phys";
	return 0;
}


func_985(var_644_bool, var_645_float)
{
	var_646_float = 0; var_647_bool = 0; var_648_float = 0; var_649_bool = 0;
	rand(var_648_float);
	var_650_bool = var_648_float < var_645_float;
	if(var_650_bool != 0) {

	Label_990:
		IsAnimationPlaying(var_649_bool);
		var_651_bool = var_649_bool == 0; //@nz
		if(var_651_bool != 0) {
		} else {
			var_652_bool = 0;
			func_1083(var_652_bool);
			if(var_652_bool != 0) {
				var_644_bool = 1;
				sync();
				goto Label_990;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1187(var_649_bool);
	}
	goto Label_1010;
	
Label_1010:
	var_644_bool = 0;
	return 4;
	
}


func_2014(var_69_bool, var_70_float, var_71_float, var_72_float)
{
	var_69_bool = 0;
	var_73_bool = var_70_float >= var_71_float;
	if(var_73_bool != 0) {
		var_74_bool = var_70_float <= var_72_float;
		if(var_74_bool != 0) {
			var_69_bool = 1;
		}
	}
	return 0;
}


func_1509(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_2022(var_44_bool, var_45_int, var_46_int)
{
	var_47_int = 0; var_48_int = 0;
	irand(var_48_int, var_46_int);
	var_44_bool = var_48_int < var_45_int;
	return 2;
}


func_2027(var_61_bool, var_62_object, var_63_float)
{
	var_64_bool = var_62_object == 0; //@nz
	if(var_64_bool != 0) {
		var_61_bool = 0;
		return 0;
	}
	var_66_bool = var_63_float > (int)0;
	if(var_66_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_97_bool = var_63_float < (int)0;
		if(var_97_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2048;
		}
		var_61_bool = 0;
		return 0;
	}
Label_2048:
	var_68_float = 0;
	var_63_float = var_68_float;
	func_2079(var_68_float);
	var_72_bool = 0; var_73_object = Obj(); var_74_string = ""; var_75_float = 0; var_76_float = 0; var_77_float = 0;
	var_62_object = var_73_object;
	var_63_float = var_75_float;
	func_1541(var_72_bool, var_73_object, "reputation", var_75_float, (float)0, (float)1);
	var_61_bool = 1;
	return 0;
	
}


func_1516(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_494(var_529_float)
{
	var_529_float = 0.15000000596046448;
	return 0;
}


func_497(var_536_int)
{
	var_536_int = 0;
	return 0;
}


func_1524(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0;
	IsPlayerActor(var_58_object, var_60_bool);
	var_60_bool = var_57_bool;
	return 2;
}


func_1012(var_0_object, var_424_bool, var_425_float)
{
	var_426_bool = 0; var_427_cvector = CVector(0,0,0); var_428_cvector = CVector(0,0,0); var_429_cvector = CVector(0,0,0); var_430_float = 0; var_431_bool = 0; var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0;
	
Label_1013:
	IsAnimationPlaying(var_431_bool);
	var_436_bool = var_431_bool == 0; //@nz
	if(var_436_bool != 0) {
	} else {
		var_437_bool = 0;
		func_1083(var_437_bool);
		if(var_437_bool != 0) {
			var_424_bool = 1;
			return 10;
		}
		var_480_bool = 0; var_481_object = Obj();
		var_481_object = var_0_object;
		func_1708(var_480_bool, var_481_object);
		var_482_bool = var_480_bool == 0; //@nz
		if(var_482_bool != 0) {
			var_424_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_432_cvector);
		GetPFPosition(var_433_cvector);
		var_434_cvector = var_432_cvector - var_433_cvector;
		var_435_float = var_434_cvector | var_434_cvector;
		var_483_float = var_425_float * var_425_float;
		var_484_bool = var_435_float < var_483_float;
		if(var_484_bool != 0) {
			var_485_bool = 0; var_486_float = 0;
			var_425_float = var_486_float;
			func_846(var_434_cvector, var_435_float, var_485_bool, var_486_float);
			var_424_bool = 1;
			sync();
			goto Label_1013;
		}
		return 10;
	}
	func_1187(var_435_float);
	var_424_bool = 0;
	return 10;
	
}


func_500(var_597_int)
{
	var_597_int = 1;
	return 0;
}


func_502(var_598_object, var_599_float)
{
	var_600_bool = 0;
	var_600_bool = 0;
	var_602_bool = var_599_float > (int)0;
	if(var_602_bool != 0) {
		var_603_bool = 0; var_604_object = Obj();
		var_598_object = var_604_object;
		func_1636(var_603_bool, var_604_object);
		if(var_603_bool != 0) {
			var_600_bool = 1;
		}
	}
	if(var_600_bool != 0) {
		var_620_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_983(var_599_float);
	}
	return 0;
}


func_1529(var_80_bool, var_81_object, var_82_string)
{
	var_83_bool = 0; var_84_bool = 0;
	var_87_bool = IsFuncExist(var_81_object, "HasProperty", (int)2);
	var_88_bool = var_87_bool == 0; //@nz
	if(var_88_bool != 0) {
		var_80_bool = 0;
		return 2;
	}
	@@var_81_object:HasProperty(var_82_string, var_84_bool);
	var_84_bool = var_80_bool;
	return 2;
}


