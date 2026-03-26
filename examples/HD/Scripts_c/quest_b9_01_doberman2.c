// @IMPORTS: FindActor/2,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,RemoveActor/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,GetProperty/2,SignalDeath/1
// @STRINGS: W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:quest_b9_01|W:doberman_dead|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:factory_fight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood
// @GLOBALS: 0:object:
// @RUN_OP: 0x459
// @RUN_TASK: 3
// @TASK_0: vars=object,int,int,bool,float,int params=0
// @TASK_1: vars=bool,object,bool params=6
// @EVENT_7: op=0x2dc vars=int
// @EVENT_1: op=0x2f7 vars=object
// @EVENT_2: op=0x306 vars=object
// @EVENT_10: op=0x38c vars=object
// @EVENT_41: op=0x397 vars=object
// @TASK_2: vars= params=1
// @EVENT_0: op=0x3ca vars=object
// @EVENT_6: op=0x3d4 vars=
// @EVENT_22: op=0x451 vars=object,int,float,float
// @EVENT_16: op=0x453 vars=object,string
// @EVENT_41: op=0x455 vars=object
// @TASK_3: vars= params=0
// @EVENT_0: op=0x45d vars=object
// @EVENT_17: op=0x469 vars=object
// @EVENT_26: op=0x474 vars=string
// @STANDALONE_EVENT_22: op=0x6bd vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x6c5 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x6cf vars=object,string
// @STANDALONE_EVENT_41: op=0x6dc vars=object
// @PE: 0xf,0x12,0x2a3,0x2dc,0x2f7,0x306,0x37a,0x38c,0x397,0x3a0,0x3ab,0x437,0x451,0x453,0x455,0x457,0x45d,0x474,0x47e,0x611,0x618,0x623,0x687,0x6bd,0x6c5,0x6dc,0x6e2

task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_11_bool = var_9_int == (int)1;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_1_int;
		func_1645(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_890(var_8_bool, var_9_int, var_17_int);
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
		func_1485(var_13_object);
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
	func_746(var_9_object);
	var_9_object = Obj();
	func_1756();
	return 0;
}


task_2_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0;
	IsOverrideActive(var_11_bool);
	var_12_bool = var_11_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_9_object = var_13_object;
		func_1671(var_13_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1537(var_9_object);
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


task_3_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	func_1127(var_10_bool);
	if(var_10_bool != 0) {
		var_9_object = Obj();
		func_1111();
	}
	return 0;
}


task_3_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0;
	IsPlayerActor(var_9_object, var_11_bool);
	var_12_bool = var_11_bool;
	if(var_12_bool != 0) {
		var_13_bool = 0; var_14_string = ""; var_15_string = "";
		func_1633(var_13_bool, "quest_b9_01", "factory_fight");
	}
	return 2;
}


task_3_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_string)
{
	var_11_bool = var_9_string == "attack";
	if(var_11_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1392(var_13_object, var_14_int, var_15_float);
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
	func_1460(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1762(var_10_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	
Label_1113:
	Hold();
	goto Label_1113;
}
EMIT "Return(); Pop(0)";


func_0()
{
	var_18_object = Obj(); var_19_object = Obj();
	FindActor(var_19_object, "player");
	var_21_bool = var_19_object == 0; //@nz
	if(var_21_bool != 0) {
		return 2;
	}
	var_22_object = Obj(); var_23_bool = 0; var_24_float = 0;
	var_19_object = var_22_object;
	func_21(var_15_bool, var_16_float, var_17_int, var_18_object, var_19_object, var_22_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1537(var_77_object)
{
	var_78_object = Obj(); var_79_object = Obj();
	self(var_79_object);
	var_79_object = var_77_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1665(var_100_int)
{
	var_101_int = 0; var_102_int = 0;
	GetVariable("branch", var_102_int);
	var_102_int = var_100_int;
	return 2;
}


func_1283(var_98_bool, var_99_object)
{
	var_100_bool = 0; var_101_bool = 0;
	@@var_99_object:IsDead(var_101_bool);
	var_101_bool = var_98_bool;
	return 2;
}


func_1671(var_13_object)
{
	var_14_int = 0;
	func_1665(var_14_int);
	var_19_bool = var_14_int == (int)1;
	if(var_19_bool != 0) {
		WorkWithCorpse(var_13_object);
	} else {
		Barter(var_13_object);
	}
	return 0;
	
}


func_1288(var_87_bool, var_88_object)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj();
	var_93_bool = var_88_object == 0; //@ne
	if(var_93_bool != 0) {
		var_87_bool = 0;
		return 4;
	}
	var_94_bool = 0;
	var_94_bool = 0;
	var_97_bool = IsFuncExist(var_88_object, "IsDead", (int)1);
	if(var_97_bool != 0) {
		var_98_bool = 0; var_99_object = Obj();
		var_88_object = var_99_object;
		func_1283(var_98_bool, var_99_object);
		if(var_98_bool != 0) {
			var_94_bool = 1;
		}
	}
	if(var_94_bool != 0) {
		var_87_bool = 0;
		return 4;
	}
	GetScene(var_91_object);
	var_102_bool = var_91_object == 0; //@ne
	if(var_102_bool != 0) {
		var_87_bool = 0;
		return 4;
	}
	@@var_88_object:GetScene(var_92_object);
	var_103_bool = var_91_object != var_92_object;
	if(var_103_bool != 0) {
		var_87_bool = 0;
		return 4;
	}
	var_87_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1543(var_41_cvector, var_42_cvector)
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


func_1164(var_43_cvector, var_44_object)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_44_object:GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
	return 4;
}


func_15(var_391_float)
{
	var_391_float = 0.30000001192092896;
	return 0;
}


func_912(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1553(var_432_float, var_433_float, var_434_float)
{
	var_437_bool = var_433_float < var_434_float;
	if(var_437_bool != 0) {
		var_433_float = var_432_float;
	} else {
		var_434_float = var_432_float;
	}
	return 0;
	
}


func_18(var_398_int)
{
	var_398_int = 0;
	return 0;
}


func_531(var_0_object, var_297_bool)
{
	var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_float = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0;
	var_308_bool = 0; var_309_object = Obj();
	var_309_object = var_0_object;
	func_1324(var_308_bool, var_309_object);
	var_310_bool = var_308_bool == 0; //@nz
	if(var_310_bool != 0) {
		var_297_bool = 0;
		return 10;
	}
	var_311_bool = 0;
	func_620(var_307_float, var_311_bool);
	if(var_311_bool != 0) {
		@@@var_0_object:GetPFPosition(var_303_cvector);
		GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		@@@var_0_object:GetAttackDistance(var_307_float);
		var_307_float = var_307_float + (int)50;
		var_313_float = var_307_float * var_307_float;
		var_297_bool = var_306_float <= var_313_float;
		return 10;
	}
	var_297_bool = 0;
	return 10;
}


func_1171(var_120_bool, var_121_object)
{
	var_122_bool = 0; var_123_bool = 0;
	IsPlayerActor(var_121_object, var_123_bool);
	var_123_bool = var_120_bool;
	return 2;
}


func_21(var_0_object, var_3_bool, var_5_int, var_22_object, var_23_bool, var_24_float, var_131_bool, var_223_bool)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_float = 0;
	func_250(var_44_cvector, var_45_bool, var_46_float);
	var_5_int = 0;
	var_71_bool = IsFuncExist(var_22_object, "@GetAttackDistance", (int)1);
	if(var_71_bool != 0) {
		@@var_22_object:GetAttackDistance(var_36_float);
		var_36_float = var_36_float + (int)50;
	} else {
							var_24_float = var_36_float;
	}
	var_74_bool = var_36_float >= (int)150;
	if(var_74_bool != 0) {
		var_36_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_22_object;
	IsPlayerActor(var_0_object, var_39_bool);
	var_75_bool = var_39_bool;
	if(var_75_bool != 0) {
		PlayGlobalMusic("attack");
		var_77_object = Obj();
		func_1537(var_77_object);
		SendPlayerEnemy(var_22_object, var_77_object);
	}
	var_80_bool = var_23_bool;
	if(var_80_bool != 0) {
		var_40_bool = 0;
	} else {
						var_40_bool = 1;

	}
	var_41_float = (float)400.0 + var_36_float;
	
Label_61:
	var_82_bool = 0;
	var_82_bool = 0;
	var_83_bool = 0; var_84_object = Obj();
	var_84_object = var_0_object;
	func_1324(var_83_bool, var_84_object);
	if(var_83_bool != 0) {
		var_117_bool = var_3_bool == 0; //@nz
		if(var_117_bool != 0) {
			var_82_bool = 1;
		}
	}
	if(var_82_bool != 0) {
		func_663(var_46_float);
		@@@var_0_object:GetPFPosition(var_37_cvector);
		GetPFPosition(var_38_cvector);
		var_42_cvector = var_37_cvector - var_38_cvector;
		var_43_float = var_42_cvector | var_42_cvector;
		var_123_float = var_41_float * var_41_float;
		var_124_bool = var_43_float >= var_123_float;
		if(var_124_bool != 0) {
			var_125_bool = 0; var_126_object = Obj(); var_127_float = 0; var_128_float = 0; var_129_bool = 0; var_130_bool = 0;
			var_126_object = var_0_object;
			var_36_float = var_127_float;
			TaskCall(1);
			func_683(var_133_bool, var_125_bool, var_126_object, var_127_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_208_bool = var_131_bool == 0; //@nz
			if(var_208_bool != 0) {
			} else {
				var_40_bool = 0;
		} else {
				var_214_float = var_24_float * var_24_float;
				var_215_bool = var_43_float >= var_214_float;
				if(var_215_bool != 0) {
					@@@var_0_object:GetPFPosition(var_44_cvector);
					CanReachByPF(var_45_bool, var_44_cvector);
					var_216_bool = var_45_bool == 0; //@nz
					if(var_216_bool != 0) {
						var_217_bool = 0; var_218_object = Obj(); var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_bool = 0;
						var_218_object = var_0_object;
						var_36_float = var_219_float;
						TaskCall(1);
						func_683(var_225_bool, var_217_bool, var_218_object, var_219_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_226_bool = var_223_bool == 0; //@nz
						if(var_226_bool != 0) {
							goto Label_233;
						}
						var_40_bool = 0;
						goto Label_61;
					}
					var_227_bool = var_40_bool == 0; //@nz
					if(var_227_bool != 0) {
						var_228_object = Obj();
						var_228_object = var_0_object;
						func_1474(var_228_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_663(var_46_float);
						StopAsync();
						var_40_bool = 1;
						var_239_bool = 0; var_240_object = Obj();
						var_240_object = var_0_object;
						func_1324(var_239_bool, var_240_object);
						var_241_bool = var_239_bool == 0; //@nz
						if(var_241_bool != 0) {
							goto Label_233;
						}
					}
					rand(var_46_float);
					var_242_bool = 0;
					var_244_bool = var_46_float < (float)0.25;
					if(var_244_bool != 1) {
						var_245_bool = 0;
						func_620((bool)1, var_245_bool);
						if(var_245_bool != 1) {
							var_242_bool = 0;
						}
					}
					if(var_242_bool != 0) {
						Face(var_0_object);
						func_670();
						PlayAnimation("all", "attack_stay");
						var_282_bool = 0; var_283_float = 0;
						var_24_float = var_283_float;
						func_488(var_46_float, var_282_bool, var_283_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_663(var_46_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_504_bool = 0;
						func_620(var_46_float, var_504_bool);
						var_505_bool = var_504_bool == 0; //@nz
						if(var_505_bool == 0) goto Label_223;
						var_506_bool = 0; var_507_object = Obj();
						var_507_object = var_0_object;
						func_1324(var_506_bool, var_507_object);
						var_508_bool = var_506_bool == 0; //@nz
						if(var_508_bool != 0) {
							goto Label_233;
						}
						@@@var_0_object:GetPFPosition(var_37_cvector);
						GetPFPosition(var_38_cvector);
						var_42_cvector = var_37_cvector - var_38_cvector;
						var_43_float = var_42_cvector | var_42_cvector;
						var_509_float = var_24_float * var_24_float;
						var_510_bool = var_43_float < var_509_float;
						if(var_510_bool == 0) goto Label_223;
						var_511_bool = 0; var_512_float = 0;
						var_24_float = var_512_float;
						func_324(var_45_bool, var_46_float, var_511_bool, var_512_float);
						var_513_bool = var_511_bool == 0; //@nz
						if(var_513_bool == 0) goto Label_223;
						goto Label_233;
				}
					var_514_bool = 0; var_515_float = 0;
					var_24_float = var_515_float;
					func_324(var_45_bool, var_46_float, var_514_bool, var_515_float);
					var_516_bool = var_514_bool == 0; //@nz
					if(var_516_bool != 0) {
						goto Label_233;
					}
					var_40_bool = 1;

				}
			Label_223:
				goto Label_232;
		}
		Label_232:
			goto Label_61;

		}
	}
Label_233:
	WaitForAnimEnd();
	var_209_bool = var_3_bool;
	if(var_209_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_212_bool = var_39_bool;
	if(var_212_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_788(var_0_object, var_1_int, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool)
{
	var_160_bool = 0; var_161_bool = 0; var_162_object = Obj(); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_float = 0; var_167_object = Obj(); var_168_bool = 0; var_169_bool = 0; var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_object = Obj();
	var_0_object = false;
	var_1_int = var_155_object;
	var_159_bool = var_169_bool;
	
Label_792:
	var_176_bool = 0; var_177_object = Obj();
	var_155_object = var_177_object;
	func_928(var_176_bool, var_177_object);
	var_180_bool = var_176_bool == 0; //@nz
	if(var_180_bool != 0) {
		var_154_bool = 0;
		return 16;
	}
	@@var_155_object:GetPosition(var_171_cvector);
	GetPosition(var_172_cvector);
	var_173_cvector = var_171_cvector - var_172_cvector;
	var_174_float = var_173_cvector | var_173_cvector;
	var_181_bool = 0;
	var_181_bool = 0;
	var_183_bool = var_157_float > (int)0;
	if(var_183_bool != 0) {
		var_184_float = var_157_float * var_157_float;
		var_185_bool = var_174_float > var_184_float;
		if(var_185_bool != 0) {
			var_181_bool = 1;
		}
	}
	if(var_181_bool != 0) {
		Stop();
		var_154_bool = 0;
		return 16;
	}
	var_186_float = var_156_float * var_156_float;
	var_187_bool = var_174_float > var_186_float;
	if(var_187_bool != 0) {
		@@var_155_object:GetPFPosition(var_171_cvector);
		FindPathTo(var_175_object, var_171_cvector);
		var_188_bool = var_175_object != 0; //@nn
		if(var_188_bool != 0) {
			var_175_object = var_170_object;
			var_175_object = 0;
		}
		var_189_bool = var_170_object != 0; //@nn
		if(var_189_bool != 0) {
			var_190_bool = var_169_bool;
			if(var_190_bool == 0) goto Label_841;
			var_169_bool = 0;
			RotatePath(var_170_object, var_168_bool);
			var_191_bool = var_168_bool == 0; //@nz
			if(var_191_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_194_string = "";
				func_935(var_194_string);
				var_195_string = "";
				func_937(var_195_string);
				FollowPath(var_170_object, var_158_bool, var_168_bool, var_194_string, var_195_string);
				var_196_bool = var_168_bool == 0; //@nz
				if(var_196_bool != 0) {
					var_197_object = var_0_object;
					if(var_197_object != 0) {
						var_170_object = 0;
						goto Label_888;
					EMIT "GOTO 0x35d";
					}
				} else {
					var_170_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_168_bool);
					var_200_bool = var_168_bool == 0; //@nz
					if(var_200_bool != 0) {
						var_201_object = var_0_object;
						if(var_201_object != 0) {
							var_170_object = 0;
							goto Label_888;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_888;
	}
			var_175_object = 0;
			goto Label_886;

		Label_886:
			var_170_object = 0;

		}
		goto Label_792;
	}
Label_888:
	var_154_bool = !var_0_object;
	return 16;
	
}


func_663(var_0_object)
{
	var_118_object = Obj();
	var_118_object = var_0_object;
	func_1645(var_118_object);
	return 0;
}


func_1560(var_153_float, var_154_float, var_155_float, var_156_float)
{
	var_157_bool = var_154_float < var_155_float;
	if(var_157_bool != 0) {
		var_155_float = var_153_float;
		return 0;
	}
	var_158_bool = var_154_float > var_156_float;
	if(var_158_bool != 0) {
		var_156_float = var_153_float;
		return 0;
	}
	var_154_float = var_153_float;
	return 0;
}


func_1176(var_143_bool, var_144_object, var_145_string)
{
	var_146_bool = 0; var_147_bool = 0;
	var_150_bool = IsFuncExist(var_144_object, "HasProperty", (int)2);
	var_151_bool = var_150_bool == 0; //@nz
	if(var_151_bool != 0) {
		var_143_bool = 0;
		return 2;
	}
	@@var_144_object:HasProperty(var_145_string, var_147_bool);
	var_147_bool = var_143_bool;
	return 2;
}


func_1684(var_106_string)
{
	var_107_object = Obj(); var_108_int = 0; var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; var_112_bool = 0;
	CreateInvItem(var_110_object);
	@@var_110_object:SetItemName(var_106_string);
	@@var_110_object:SetProperty("Organ", (int)1);
	@@var_110_object:GetItemID(var_111_int);
	AddItem(var_112_bool, var_110_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_668(var_459_int)
{
	var_459_int = 0;
	return 0;
}


func_285(var_0_object, var_380_float, var_381_int)
{
	var_382_object = Obj(); var_383_float = 0; var_384_float = 0; var_385_object = Obj(); var_386_float = 0; var_387_float = 0;
	var_389_float = var_380_float * (float)0.8999999761581421;
	GetVictim(var_389_float, var_385_object);
	ReportAttack(var_0_object);
	var_390_bool = var_385_object == var_0_object;
	if(var_390_bool != 0) {
		var_391_float = 0; var_392_object = Obj(); var_393_int = 0;
		var_385_object = var_392_object;
		var_381_int = var_393_int;
		func_15(var_393_int);
		var_391_float = var_386_float;
		var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_int = 0;
		var_385_object = var_395_object;
		var_386_float = var_396_float;
		var_398_int = 0; var_399_object = Obj(); var_400_int = 0;
		var_385_object = var_399_object;
		var_381_int = var_400_int;
		func_18(var_400_int);
		var_398_int = var_397_int;
		func_1210(var_394_float, var_395_object, var_396_float, var_397_int);
		var_394_float = var_387_float;
		var_459_int = 0;
		func_668(var_459_int);
		ReportHit(var_0_object, var_459_int, var_387_float, var_386_float);
		var_460_object = Obj(); var_461_float = 0;
		var_385_object = var_460_object;
		var_387_float = var_461_float;
		func_675();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_670()
{
	var_251_string = "";
	func_1496("attack_stay");
	return 0;
}


func_928(var_176_bool, var_177_object)
{
	var_178_bool = 0; var_179_object = Obj();
	var_177_object = var_179_object;
	func_1324(var_178_bool, var_179_object);
	var_178_bool = var_176_bool;
	return 0;
}


func_675()
{
	return 0;
}


func_1571(var_124_bool, var_125_object, var_126_float)
{
	var_127_bool = var_125_object == 0; //@nz
	if(var_127_bool != 0) {
		var_124_bool = 0;
		return 0;
	}
	var_129_bool = var_126_float > (int)0;
	if(var_129_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_160_bool = var_126_float < (int)0;
		if(var_160_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1592;
		}
		var_124_bool = 0;
		return 0;
	}
Label_1592:
	var_131_float = 0;
	var_126_float = var_131_float;
	func_1623(var_131_float);
	var_135_bool = 0; var_136_object = Obj(); var_137_string = ""; var_138_float = 0; var_139_float = 0; var_140_float = 0;
	var_125_object = var_136_object;
	var_126_float = var_138_float;
	func_1188(var_135_bool, var_136_object, "reputation", var_138_float, (float)0, (float)1);
	var_124_bool = 1;
	return 0;
	
}


func_677(var_484_bool)
{
	var_484_bool = 1;
	return 0;
}


func_1701()
{
	var_100_int = 0;
	func_1665(var_100_int);
	var_105_bool = var_100_int != (int)1;
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_string = "";
	func_1684("liver");
	var_117_string = "";
	func_1684("kidney");
	var_118_string = "";
	func_1684("heart");
	var_119_string = "";
	func_1684("blood");
	return 0;
}


func_679(var_376_int)
{
	var_376_int = 1;
	return 0;
}


func_935(var_194_string)
{
	var_194_string = "walk";
	return 0;
}


func_681(var_371_float)
{
	var_371_float = 0.5;
	return 0;
}


func_937(var_195_string)
{
	var_195_string = "run";
	return 0;
}


func_683(var_2_int, var_125_bool, var_126_object, var_127_float, var_128_float, var_129_bool, var_130_bool)
{
	var_134_bool = 0; var_135_bool = 0; var_136_bool = 0; var_137_bool = 0;
	var_138_object = Obj();
	var_126_object = var_138_object;
	func_1645(var_138_object);
	SetTimer((int)1, (int)5);
	CanSee(var_136_bool, var_126_object);
	var_141_bool = var_136_bool;
	if(var_141_bool != 0) {
		var_2_int = true;
		var_142_object = Obj();
		var_126_object = var_142_object;
		func_1485(var_142_object);
	} else {
		var_2_int = false;
	}
	var_149_bool = 0; var_150_object = Obj();
	var_126_object = var_150_object;
	func_1171(var_149_bool, var_150_object);
	if(var_149_bool != 0) {
		var_153_object = Obj();
		func_1537(var_153_object);
		SendPlayerEnemy(var_126_object, var_153_object);
	}
	var_154_bool = 0; var_155_object = Obj(); var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_bool = 0;
	var_126_object = var_155_object;
	var_127_float = var_156_float;
	var_128_float = var_157_float;
	var_129_bool = var_158_bool;
	var_130_bool = var_159_bool;
	func_788(var_136_bool, var_137_bool, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool);
	var_154_bool = var_137_bool;
	var_205_int = var_2_int;
	if(var_205_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_137_bool = var_125_bool;
	return 4;
	
}


func_1324(var_83_bool, var_84_object)
{
	var_85_int = 0; var_86_int = 0;
	var_87_bool = 0; var_88_object = Obj();
	var_84_object = var_88_object;
	func_1288(var_87_bool, var_88_object);
	var_104_bool = var_87_bool == 0; //@nz
	if(var_104_bool != 0) {
		var_83_bool = 0;
		return 2;
	}
	var_105_bool = 0; var_106_object = Obj(); var_107_string = "";
	var_84_object = var_106_object;
	func_1176(var_105_bool, var_106_object, "noaccess");
	var_114_bool = var_105_bool == 0; //@nz
	if(var_114_bool != 0) {
		var_83_bool = 1;
		return 2;
	}
	@@var_84_object:GetProperty("noaccess", var_86_int);
	var_83_bool = var_86_int == (int)0;
	return 2;
}


func_1188(var_135_bool, var_136_object, var_137_string, var_138_float, var_139_float, var_140_float)
{
	var_141_float = 0; var_142_float = 0;
	var_143_bool = 0; var_144_object = Obj(); var_145_string = "";
	var_136_object = var_144_object;
	var_137_string = var_145_string;
	func_1176(var_143_bool, var_144_object, var_145_string);
	var_152_bool = var_143_bool == 0; //@nz
	if(var_152_bool != 0) {
		var_135_bool = 0;
		return 2;
	}
	@@var_136_object:GetProperty(var_137_string, var_142_float);
	var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0;
	var_154_float = var_142_float + var_138_float;
	var_139_float = var_155_float;
	var_140_float = var_156_float;
	func_1560(var_153_float, var_154_float, var_155_float, var_156_float);
	@@var_136_object:SetProperty(var_137_string, var_153_float);
	var_135_bool = 1;
	return 2;
}


func_939(var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1633(var_12_bool, "quest_b9_01", "doberman_dead");
	var_18_object = Obj();
	var_11_object = var_18_object;
	func_988(var_18_object);
	SetRTEnvelope((int)50, (int)40);
	func_1701();
	var_120_bool = 0; var_121_object = Obj();
	var_11_object = var_121_object;
	func_1171(var_120_bool, var_121_object);
	if(var_120_bool != 0) {
		var_124_bool = 0; var_125_object = Obj(); var_126_float = 0;
		var_11_object = var_125_object;
		func_1571(var_124_bool, var_125_object, (float)-0.029999999329447746);
	}
Label_966:
	Hold();
	goto Label_966;
}
EMIT "Return(); Pop(0)";


func_559(var_295_bool)
{
	var_296_bool = 0;
	var_296_bool = 0;
	var_297_bool = 0;
	func_531(var_296_bool, var_297_bool);
	if(var_297_bool != 0) {
		var_314_bool = 0;
		func_575(var_295_bool, var_296_bool, var_314_bool);
		if(var_314_bool != 0) {
			var_296_bool = 1;
		}
	}
	if(var_296_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_1460(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1348(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1079(var_40_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_41_string = "";
	var_40_string = var_41_string;
	func_1496(var_41_string);
	PlayAnimation("all", var_40_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_40_string);
	RemoveEnvelope();
	return 0;
}


func_1210(var_394_float, var_395_object, var_396_float, var_397_int)
{
	var_401_int = 0; var_402_string = ""; var_403_int = 0; var_404_float = 0; var_405_float = 0; var_406_float = 0; var_407_int = 0; var_408_string = ""; var_409_int = 0; var_410_float = 0; var_411_float = 0; var_412_float = 0;
	var_413_bool = 0; var_414_object = Obj(); var_415_string = "";
	var_395_object = var_414_object;
	func_1176(var_413_bool, var_414_object, "health");
	var_416_bool = var_413_bool == 0; //@nz
	if(var_416_bool != 0) {
		var_394_float = 0.0;
		return 12;
	}
	var_417_bool = 0; var_418_object = Obj(); var_419_string = "";
	var_395_object = var_418_object;
	func_1176(var_417_bool, var_418_object, "armor");
	var_420_bool = var_417_bool == 0; //@nz
	if(var_420_bool != 0) {
		var_407_int = 0;
	} else {
			@@var_395_object:GetProperty("armor", var_407_int);
	}
	var_422_string = ""; var_423_int = 0;
	var_397_int = var_423_int;
	func_1150(var_422_string, var_423_int);
	var_408_string = "armor_" + var_422_string;
	var_428_bool = 0; var_429_object = Obj(); var_430_string = "";
	var_395_object = var_429_object;
	var_408_string = var_430_string;
	func_1176(var_428_bool, var_429_object, var_430_string);
	var_431_bool = var_428_bool == 0; //@nz
	if(var_431_bool != 0) {
		var_409_int = 0;
	} else {
		@@var_395_object:GetProperty(var_408_string, var_409_int);

	}
	var_432_float = 0; var_433_float = 0; var_434_float = 0;
	var_435_int = var_407_int + var_409_int;
	var_433_float = var_435_int / (float)100.0;
	func_1553(var_432_float, var_433_float, (float)1);
	var_432_float = var_410_float;
	@@var_395_object:GetProperty("health", var_411_float);
	var_440_int = (int)1 - var_410_float;
	var_412_float = var_396_float * var_440_int;
	var_442_float = 0; var_443_float = 0; var_444_float = 0; var_445_float = 0;
	var_443_float = var_411_float - var_412_float;
	func_1560(var_442_float, var_443_float, (float)0, (float)1);
	@@var_395_object:SetProperty("health", var_442_float);
	var_448_bool = 0; var_449_object = Obj();
	var_395_object = var_449_object;
	func_1171(var_448_bool, var_449_object);
	if(var_448_bool != 0) {
		var_450_float = 0;
		var_450_float = -var_412_float;
		func_1606(var_450_float);
	}
	var_412_float = var_394_float;
	return 12;
	
}


func_575(var_0_object, var_4_float, var_314_bool)
{
	var_315_object = Obj(); var_316_bool = 0; var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0);
	GetScene(var_320_object);
	var_321_bool = 0;
	
Label_579:
	var_325_cvector = CVector(0,0,0); var_326_object = Obj();
	var_326_object = var_0_object;
	func_1164(var_325_cvector, var_326_object);
	var_331_int = -var_325_cvector;
	FindDirLength(var_322_float, var_331_int, var_4_float);
	var_332_bool = var_322_float < var_4_float;
	if(var_332_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_323_cvector);
		GetPFPosition(var_324_cvector);
		WaitForAnimEnd();
		func_663(var_324_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_321_bool = 1;
		var_336_bool = 0;
		func_531(var_324_cvector, var_336_bool);
		var_337_bool = var_336_bool == 0; //@nz
		if(var_337_bool != 0) {
			goto Label_617;
		}
		goto Label_579;
	}
Label_617:
	var_321_bool = var_314_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1474(var_228_object)
{
	var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0);
	@@var_228_object:GetPosition(var_232_cvector);
	GetPosition(var_233_cvector);
	var_234_cvector = var_232_cvector - var_233_cvector;
	var_235_float = GetByIndex(var_234_cvector, 0);
	var_236_float = GetByIndex(var_234_cvector, 2);
	RotateAsync(var_235_float, var_236_float);
	return 6;
}


func_324(var_0_object, var_1_int, var_343_bool, var_344_float)
{
	var_345_int = 0; var_346_bool = 0; var_347_int = 0; var_348_string = ""; var_349_int = 0; var_350_bool = 0; var_351_int = 0; var_352_string = "";
	func_663(var_352_string);
	irand(var_349_int, var_1_int);
	var_349_int = var_349_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1654();
	var_361_int = "attack_begin" + var_349_int;
	PlayAnimation("all", var_361_int);
	WaitForAnimEnd();
	func_631(var_351_int, var_352_string);
	var_377_bool = 0; var_378_object = Obj();
	var_378_object = var_0_object;
	func_1324(var_377_bool, var_378_object);
	var_379_bool = var_377_bool == 0; //@nz
	if(var_379_bool != 0) {
		StopAsync();
		var_343_bool = 0;
		return 8;
	}
	var_380_float = 0; var_381_int = 0;
	var_344_float = var_380_float;
	var_349_int = var_381_int;
	func_285(var_352_string, var_380_float, var_381_int);
	var_464_int = "attack_middle" + var_349_int;
	HasAnimation(var_350_bool, "all", var_464_int);
	var_465_bool = var_350_bool;
	if(var_465_bool != 0) {
		func_1654();
		var_468_int = "attack_middle" + var_349_int;
		PlayAnimation("all", var_468_int);
		WaitForAnimEnd();
		func_663(var_352_string);
		var_469_bool = 0; var_470_object = Obj();
		var_470_object = var_0_object;
		func_1324(var_469_bool, var_470_object);
		var_471_bool = var_469_bool == 0; //@nz
		if(var_471_bool != 0) {
			StopAsync();
			var_343_bool = 0;
			return 8;
		}
		var_472_float = 0; var_473_int = 0;
		var_344_float = var_472_float;
		var_349_int = var_473_int;
		func_285(var_352_string, var_472_float, var_473_int);
		var_351_int = 1;

	Label_401:
		var_475_int = "attack_middle" + var_349_int;
		var_477_int = var_475_int + "_";
		var_352_string = var_477_int + var_351_int;
		HasAnimation(var_350_bool, "all", var_352_string);
		var_479_bool = var_350_bool == 0; //@nz
		if(var_479_bool != 0) {
		} else {
			func_1654();
			PlayAnimation("all", var_352_string);
			WaitForAnimEnd();
			func_663(var_352_string);
			var_495_bool = 0; var_496_object = Obj();
			var_496_object = var_0_object;
			func_1324(var_495_bool, var_496_object);
			var_497_bool = var_495_bool == 0; //@nz
			if(var_497_bool != 0) {
				StopAsync();
				var_343_bool = 0;
				var_498_float = 0; var_499_int = 0;
				var_344_float = var_498_float;
				var_349_int = var_499_int;
				func_285(var_352_string, var_498_float, var_499_int);
				var_351_int = var_351_int + (int)1;
				goto Label_401;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_483_int = "attack_end" + var_349_int;
	PlayAnimation("all", var_483_int);
	var_484_bool = 0;
	func_677(var_484_bool);
	if(var_484_bool != 0) {
		var_485_bool = 0; var_486_float = 0;
		func_461(var_485_bool, (float)0.75);
		StopAsync();
	}
	var_343_bool = 1;
	return 8;
	
}


func_1348(var_26_object)
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


func_1606(var_450_float)
{
	var_451_object = Obj(); var_452_object = Obj();
	CreateFloatVector(var_452_object);
	@@var_452_object:add(var_450_float);
	var_454_bool = var_450_float < (int)0;
	if(var_454_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_452_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_461(var_485_bool, var_486_float)
{
	var_487_float = 0; var_488_bool = 0; var_489_float = 0; var_490_bool = 0;
	rand(var_489_float);
	var_491_bool = var_489_float < var_486_float;
	if(var_491_bool != 0) {

	Label_466:
		IsAnimationPlaying(var_490_bool);
		var_492_bool = var_490_bool == 0; //@nz
		if(var_492_bool != 0) {
		} else {
			var_493_bool = 0;
			func_559(var_493_bool);
			if(var_493_bool != 0) {
				var_485_bool = 1;
				sync();
				goto Label_466;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_663(var_490_bool);
	}
	goto Label_486;
	
Label_486:
	var_485_bool = 0;
	return 4;
	
}


func_1485(var_142_object)
{
	var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_cvector = CVector(0,0,0);
	@@var_142_object:GetEyesHeight(var_145_float);
	var_146_cvector = CVector(0.0, 0.0, 0.0);
	var_147_float = GetByIndex(var_146_cvector, 1);
	var_145_float = var_147_float;
	SetByIndex(var_146_cvector, 1) = var_147_float;
	LookAsync(var_142_object, "head", var_146_cvector);
	return 4;
}


func_1111()
{
	return 0;
}


func_1496(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	IsExisting3DSound(var_50_bool, var_41_string);
	var_58_bool = var_50_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_51_int = 0;

	Label_1502:
		var_60_int = var_51_int + (int)1;
		var_61_int = var_41_string + var_60_int;
		IsExisting3DSound(var_52_bool, var_61_int);
		var_62_bool = var_52_bool == 0; //@nz
		if(var_62_bool != 0) {
		} else {
			var_51_int = var_51_int + (int)1;
			goto Label_1502;
		}
		var_63_bool = var_51_int == 0; //@nz
		if(var_63_bool != 0) {
			return 16;
		}
		irand(var_53_int, var_51_int);
		var_65_int = var_53_int + (int)1;
		var_41_string = var_41_string + var_65_int;
	}
	Is3DSoundLoaded(var_54_bool, var_41_string);
	var_66_bool = var_54_bool;
	if(var_66_bool != 0) {
		GetEyesHeight(var_55_float);
		GetDirection(var_56_cvector);
		var_57_cvector = var_56_cvector * (int)50;
		var_68_float = GetByIndex(var_57_cvector, 1);
		var_68_float = var_68_float + var_55_float;
		SetByIndex(var_57_cvector, 1) = var_68_float;
		PlayGlobalSound(var_41_string, var_57_cvector);
	}
	return 16;
	
}


func_1623(var_131_float)
{
	var_132_object = Obj(); var_133_object = Obj();
	CreateFloatVector(var_133_object);
	@@var_133_object:add(var_131_float);
	SendWorldWndMessage((int)16, var_133_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_988(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0);
	var_39_bool = var_18_object == 0; //@ne
	if(var_39_bool != 0) {
		var_40_string = "";
		func_1079("fdie");
	} else {
		@@var_18_object:GetPosition(var_29_cvector);
		GetPosition(var_30_cvector);
		GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_74_float = var_72_float * var_73_float;
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		var_77_float = var_75_float * var_76_float;
		var_78_int = var_74_float + var_77_float;
		var_80_bool = var_78_int >= (int)0;
		if(var_80_bool != 0) {
			var_33_string = "fdie";
		} else {
				var_33_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", (int)2);
		if(var_83_bool != 0) {
			@@var_18_object:HasScriptProperty(var_35_bool, "Owner");
			var_85_bool = var_35_bool;
			if(var_85_bool != 0) {
				@@var_18_object:GetScriptProperty(var_34_object, "Owner");
				var_87_bool = var_34_object == 0; //@ne
				if(var_87_bool != 0) {
					var_18_object = var_34_object;
				}
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", (int)1);
		if(var_90_bool != 0) {
			@@var_34_object:GetEyesHeight(var_37_float);
			var_38_cvector = CVector(0.0, 0.0, 0.0);
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = 1;
		} else {
			var_36_bool = 0;

		}
		var_93_string = "";
		var_33_string = var_93_string;
		func_1496(var_93_string);
		PlayAnimation("all", var_33_string);
		WaitForAnimEnd();
		var_95_bool = var_36_bool;
		if(var_95_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_33_string);
		RemoveEnvelope();
		var_34_object = 0;
	}
	return 20;
	
}


func_1633(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, var_13_string);
	var_17_bool = var_16_object == 0; //@ne
	if(var_17_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	Trigger(var_16_object, var_14_string);
	var_12_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1762(var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	TaskCall(2);
	func_939(var_11_object);
	TaskReturn();
	return 0;
}


func_1127(var_10_bool)
{
	var_10_bool = 1;
	return 0;
}


func_488(var_0_object, var_282_bool, var_283_float)
{
	var_284_bool = 0; var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_float = 0; var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0;
	
Label_489:
	IsAnimationPlaying(var_289_bool);
	var_294_bool = var_289_bool == 0; //@nz
	if(var_294_bool != 0) {
	} else {
		var_295_bool = 0;
		func_559(var_295_bool);
		if(var_295_bool != 0) {
			var_282_bool = 1;
			return 10;
		}
		var_338_bool = 0; var_339_object = Obj();
		var_339_object = var_0_object;
		func_1324(var_338_bool, var_339_object);
		var_340_bool = var_338_bool == 0; //@nz
		if(var_340_bool != 0) {
			var_282_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_290_cvector);
		GetPFPosition(var_291_cvector);
		var_292_cvector = var_290_cvector - var_291_cvector;
		var_293_float = var_292_cvector | var_292_cvector;
		var_341_float = var_283_float * var_283_float;
		var_342_bool = var_293_float < var_341_float;
		if(var_342_bool != 0) {
			var_343_bool = 0; var_344_float = 0;
			var_283_float = var_344_float;
			func_324(var_292_cvector, var_293_float, var_343_bool, var_344_float);
			var_282_bool = 1;
			sync();
			goto Label_489;
		}
		return 10;
	}
	func_663(var_293_float);
	var_282_bool = 0;
	return 10;
	
}


func_746(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_912(var_9_object);
	return 0;
}


func_250(var_1_int, var_2_int, var_4_float)
{
	var_47_bool = 0; var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_252:
	var_56_int = var_1_int + (int)1;
	var_57_int = "attack_begin" + var_56_int;
	HasAnimation(var_50_bool, "all", var_57_int);
	var_58_bool = var_50_bool == 0; //@nz
	if(var_58_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_252;
	}
	var_2_int = 0;
	
Label_266:
	var_61_int = var_2_int + (int)1;
	var_62_int = "attack" + var_61_int;
	IsExisting3DSound(var_51_bool, var_62_int);
	var_63_bool = var_51_bool == 0; //@nz
	if(var_63_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_266;

	}
	GetAnimationOffset(var_52_cvector, "all", "bjump");
	var_66_float = GetByIndex(var_52_cvector, 2);
	var_4_float = -var_66_float;
	return 6;
	
}


func_620(var_0_object, var_245_bool)
{
	var_246_bool = 0; var_247_bool = 0;
	var_250_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_250_bool != 0) {
		@@@var_0_object:IsAttacking(var_247_bool);
		var_247_bool = var_245_bool;
		return 2;
	}
	var_245_bool = 0;
	return 2;
}


func_1645(var_118_object)
{
	var_119_bool = 0; var_120_bool = 0;
	IsPlayerActor(var_118_object, var_120_bool);
	var_121_bool = var_120_bool;
	if(var_121_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1392(var_13_object, var_14_int, var_15_float)
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
		func_1164(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1543(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1421:
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
			goto Label_1421;
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
			func_1460(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1348(var_103_object);
	return 18;
	
}


func_1654()
{
	var_355_object = Obj(); var_356_object = Obj();
	GetScene(var_356_object);
	var_358_object = Obj();
	func_1537(var_358_object);
	BroadcastMessage("battle", var_358_object, var_356_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_631(var_2_int, var_5_int)
{
	var_362_float = 0; var_363_int = 0; var_364_float = 0; var_365_int = 0;
	var_366_bool = var_2_int == 0; //@nz
	if(var_366_bool != 0) {
		return 4;
	}
	var_367_int = var_5_int;
	if(var_367_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_370_bool = var_5_int > (int)0;
		if(var_370_bool != 0) {
			return 4;
		}
	}
	rand(var_364_float);
	var_371_float = 0;
	func_681(var_371_float);
	var_372_bool = var_364_float < var_371_float;
	if(var_372_bool != 0) {
		irand(var_365_int, var_2_int);
		var_365_int = var_365_int + (int)1;
		var_375_int = "attack" + var_365_int;
		Speak(var_375_int);
		var_376_int = 0;
		func_679(var_376_int);
		var_5_int = var_376_int;
	}
	return 4;
}


func_890(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_928(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1150(var_422_string, var_423_int)
{
	var_425_bool = var_423_int == (int)2;
	if(var_425_bool != 0) {
		var_422_string = "fire";
		return 0;
	EMIT "GOTO 0x48a";
	}
	var_427_bool = var_423_int == (int)1;
	if(var_427_bool != 0) {
		var_422_string = "bullet";
		return 0;
	}
	var_422_string = "phys";
	return 0;
}


