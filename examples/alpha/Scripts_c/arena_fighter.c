// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,Sleep/1,FindActor/2,HasAnimation/3,IsExisting3DSound/2,IsPlayerActor/2,GetPFPosition/1,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:player|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2
// @RUN_OP: 0x7c
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_22: op=0x76 vars=object,int,float,float
// @EVENT_16: op=0x78 vars=object,string
// @EVENT_41: op=0x7a vars=object
// @TASK_1: vars=object,int,int,bool,int params=0
// @TASK_2: vars=bool,object params=6
// @EVENT_7: op=0x2f3 vars=int
// @EVENT_10: op=0x305 vars=object
// @EVENT_41: op=0x310 vars=object
// @STANDALONE_EVENT_22: op=0x402 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x40a vars=object,string
// @STANDALONE_EVENT_41: op=0x417 vars=object
// @PE: 0x0,0x60,0x76,0x78,0x7a,0x8e,0x91,0x94,0x280,0x286,0x2f3,0x305,0x310,0x31d,0x3e8,0x3ef,0x3fa,0x402,0x417

task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	return 0;
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int)
{
	var_9_bool = var_7_int != (int)0;
	if(var_9_bool != 0) {
		return 0;
	}
	var_10_bool = 0; var_11_object = Obj();
	var_11_object = var_1_int;
	func_646(var_10_bool, var_11_object);
	var_29_bool = var_10_bool == 0; //@nz
	if(var_29_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	RequestClearPath(var_7_object);
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	func_777(var_7_object);
	var_7_object = Obj();
	func_1047();
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0;
	var_7_object = var_11_object;
	var_8_int = var_12_int;
	var_9_float = var_13_float;
	func_922(var_12_int, var_13_float);
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string)
{
	var_9_float = 0; var_10_float = 0;
	var_12_bool = var_8_string == "health";
	if(var_12_bool != 0) {
		GetProperty("health", var_10_float);
		var_15_bool = var_10_float <= (int)0;
		if(var_15_bool != 0) {
			SignalDeath(var_7_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	var_8_object = Obj();
	var_7_object = var_8_object;
	func_1018(var_8_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	SensePlayerOnly((bool)1);
	Sleep((float)1.5);
	FindActor(var_8_object, "player");
	var_12_object = Obj(); var_13_bool = 0; var_14_float = 0;
	var_8_object = var_12_object;
	func_155(var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_12_object, (bool)1, (float)155.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_640()
{
	return 0;
}


func_0(var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_9(var_10_object);
	
Label_5:
	Hold();
	goto Label_5;
}
EMIT "Return(); Pop(0)";


func_642(var_232_int)
{
	var_232_int = 1;
	return 0;
}


func_644(var_227_float)
{
	var_227_float = 0.5;
	return 0;
}


func_646(var_104_bool, var_105_object)
{
	var_106_bool = 0; var_107_object = Obj();
	var_105_object = var_107_object;
	func_886(var_106_bool, var_107_object);
	var_106_bool = var_104_bool;
	return 0;
}


func_9(var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_string = ""; var_16_object = Obj(); var_17_bool = 0; var_18_bool = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0);
	var_31_bool = var_10_object == 0; //@ne
	if(var_31_bool != 0) {
		var_32_string = "";
		func_96("fdie");
	} else {
		@@var_10_object:GetPosition(var_21_cvector);
		GetPosition(var_22_cvector);
		GetDirection(var_23_cvector);
		var_24_cvector = var_22_cvector - var_21_cvector;
		var_35_float = GetByIndex(var_24_cvector, 0);
		var_36_float = GetByIndex(var_23_cvector, 0);
		var_37_float = var_35_float * var_36_float;
		var_38_float = GetByIndex(var_24_cvector, 2);
		var_39_float = GetByIndex(var_23_cvector, 2);
		var_40_float = var_38_float * var_39_float;
		var_41_int = var_37_float + var_40_float;
		var_43_bool = var_41_int >= (int)0;
		if(var_43_bool != 0) {
			var_25_string = "fdie";
		} else {
				var_25_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_10_object = var_26_object;
		var_46_bool = IsFuncExist(var_10_object, "GetScriptProperty", (int)2);
		if(var_46_bool != 0) {
			@@var_10_object:HasScriptProperty(var_27_bool, "Owner");
			var_48_bool = var_27_bool;
			if(var_48_bool != 0) {
				@@var_10_object:GetScriptProperty(var_26_object, "Owner");
				var_50_bool = var_26_object == 0; //@ne
				if(var_50_bool != 0) {
					var_10_object = var_26_object;
				}
			}
		}
		var_53_bool = IsFuncExist(var_26_object, "@GetEyesHeight", (int)1);
		if(var_53_bool != 0) {
			@@var_26_object:GetEyesHeight(var_29_float);
			var_30_cvector = CVector(0.0, 0.0, 0.0);
			var_54_float = GetByIndex(var_30_cvector, 1);
			var_29_float = var_54_float;
			SetByIndex(var_30_cvector, 1) = var_54_float;
			LookAsync(var_10_object, "head", var_30_cvector);
			var_28_bool = 1;
		} else {
			var_28_bool = 0;

		}
		PlayAnimation("all", var_25_string);
		WaitForAnimEnd();
		var_57_bool = var_28_bool;
		if(var_57_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_25_string);
		RemoveEnvelope();
		var_26_object = 0;
	}
	return 20;
	
}


func_777(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_653(var_0_object, var_1_int, var_80_bool, var_81_object, var_82_float, var_83_float, var_84_bool, var_85_bool)
{
	var_88_bool = 0; var_89_bool = 0; var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_object = Obj(); var_96_bool = 0; var_97_bool = 0; var_98_object = Obj(); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_object = Obj();
	var_0_object = false;
	var_1_int = var_81_object;
	var_85_bool = var_97_bool;
	
Label_657:
	var_104_bool = 0; var_105_object = Obj();
	var_81_object = var_105_object;
	func_646(var_104_bool, var_105_object);
	var_108_bool = var_104_bool == 0; //@nz
	if(var_108_bool != 0) {
		var_80_bool = 0;
		return 16;
	}
	@@var_81_object:GetPosition(var_99_cvector);
	GetPosition(var_100_cvector);
	var_101_cvector = var_99_cvector - var_100_cvector;
	var_102_float = var_101_cvector | var_101_cvector;
	var_109_bool = 0;
	var_109_bool = 0;
	var_111_bool = var_83_float > (int)0;
	if(var_111_bool != 0) {
		var_112_float = var_83_float * var_83_float;
		var_113_bool = var_102_float > var_112_float;
		if(var_113_bool != 0) {
			var_109_bool = 1;
		}
	}
	if(var_109_bool != 0) {
		Stop();
		var_80_bool = 0;
		return 16;
	}
	var_114_float = var_82_float * var_82_float;
	var_115_bool = var_102_float > var_114_float;
	if(var_115_bool != 0) {
		@@var_81_object:GetPFPosition(var_99_cvector);
		FindPathTo(var_103_object, var_99_cvector);
		var_116_bool = var_103_object != 0; //@nn
		if(var_116_bool != 0) {
			var_103_object = var_98_object;
			var_103_object = 0;
		}
		var_117_bool = var_98_object != 0; //@nn
		if(var_117_bool != 0) {
			var_118_bool = var_97_bool;
			if(var_118_bool == 0) goto Label_706;
			var_97_bool = 0;
			RotatePath(var_98_object, var_96_bool);
			var_119_bool = var_96_bool == 0; //@nz
			if(var_119_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_122_string = "";
				func_793(var_122_string);
				var_123_string = "";
				func_795(var_123_string);
				FollowPath(var_98_object, var_84_bool, var_96_bool, var_122_string, var_123_string);
				var_124_bool = var_96_bool == 0; //@nz
				if(var_124_bool != 0) {
					var_125_object = var_0_object;
					if(var_125_object != 0) {
						var_98_object = 0;
						goto Label_753;
					EMIT "GOTO 0x2d6";
					}
				} else {
					var_98_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_96_bool);
					var_128_bool = var_96_bool == 0; //@nz
					if(var_128_bool != 0) {
						var_129_object = var_0_object;
						if(var_129_object != 0) {
							var_98_object = 0;
							goto Label_753;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_753;
	}
			var_103_object = 0;
			goto Label_751;

		Label_751:
			var_98_object = 0;

		}
		goto Label_657;
	}
Label_753:
	var_80_bool = !var_0_object;
	return 16;
	
}


func_142(var_247_float)
{
	var_247_float = 0.10000000149011612;
	return 0;
}


func_399(var_0_object, var_1_int, var_207_bool, var_208_float)
{
	var_209_int = 0; var_210_bool = 0; var_211_int = 0; var_212_bool = 0;
	irand(var_211_int, var_1_int);
	var_211_int = var_211_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_217_int = "attack_begin" + var_211_int;
	PlayAnimation("all", var_217_int);
	WaitForAnimEnd();
	func_606(var_211_int, var_212_bool);
	var_233_bool = 0; var_234_object = Obj();
	var_234_object = var_0_object;
	func_148(var_233_bool, var_234_object);
	var_235_bool = var_233_bool == 0; //@nz
	if(var_235_bool != 0) {
		StopAsync();
		var_207_bool = 0;
		return 4;
	}
	var_236_float = 0; var_237_int = 0;
	var_208_float = var_236_float;
	var_211_int = var_237_int;
	func_360(var_212_bool, var_236_float, var_237_int);
	var_314_int = "attack_middle" + var_211_int;
	HasAnimation(var_212_bool, "all", var_314_int);
	var_315_bool = var_212_bool;
	if(var_315_bool != 0) {
		var_318_int = "attack_middle" + var_211_int;
		PlayAnimation("all", var_318_int);
		WaitForAnimEnd();
		var_319_bool = 0; var_320_object = Obj();
		var_320_object = var_0_object;
		func_148(var_319_bool, var_320_object);
		var_321_bool = var_319_bool == 0; //@nz
		if(var_321_bool != 0) {
			StopAsync();
			var_207_bool = 0;
			return 4;
		}
		var_322_float = 0; var_323_int = 0;
		var_208_float = var_322_float;
		var_211_int = var_323_int;
		func_360(var_212_bool, var_322_float, var_323_int);
	}
	SetAttackState((bool)0);
	var_327_int = "attack_end" + var_211_int;
	PlayAnimation("all", var_327_int);
	var_328_bool = 0; var_329_float = 0;
	func_479(var_328_bool, (float)0.75);
	StopAsync();
	var_207_bool = 1;
	return 4;
}


func_145(var_254_int)
{
	var_254_int = 0;
	return 0;
}


func_148(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj();
	var_55_object = var_57_object;
	func_886(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
	return 0;
}


func_793(var_122_string)
{
	var_122_string = "walk";
	return 0;
}


func_922(var_11_object, var_12_int)
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_int = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = "";
	var_34_bool = 0;
	var_34_bool = 0;
	var_36_bool = var_12_int != (int)4;
	if(var_36_bool != 0) {
		var_38_bool = var_12_int != (int)5;
		if(var_38_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		GetScene(var_24_object);
		GetPosition(var_26_cvector);
		GetEyesHeight(var_27_float);
		var_39_float = GetByIndex(var_26_cvector, 1);
		var_41_float = var_27_float / (int)2;
		var_39_float = var_39_float + var_41_float;
		SetByIndex(var_26_cvector, 1) = var_39_float;
		AddActorByType(var_25_object, "scripted", var_24_object, var_26_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_25_object = 0;
		var_24_object = 0;
	}
	var_45_bool = var_11_object == 0; //@ne
	if(var_45_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_28_int);
	var_47_bool = var_28_int < (int)0;
	if(var_47_bool != 0) {
		return 20;
	}
	@@var_11_object:GetPosition(var_29_cvector);
	GetPosition(var_30_cvector);
	GetDirection(var_31_cvector);
	var_32_cvector = var_30_cvector - var_29_cvector;
	var_48_float = GetByIndex(var_32_cvector, 0);
	var_49_float = GetByIndex(var_31_cvector, 0);
	var_50_float = var_48_float * var_49_float;
	var_51_float = GetByIndex(var_32_cvector, 2);
	var_52_float = GetByIndex(var_31_cvector, 2);
	var_53_float = var_51_float * var_52_float;
	var_54_int = var_50_float + var_53_float;
	var_56_bool = var_54_int >= (int)0;
	if(var_56_bool != 0) {
		var_33_string = "fhit";
	} else {
		var_33_string = "bhit";
	}
	var_59_int = var_33_string + "1";
	var_61_int = var_33_string + "2";
	FadeSecondaryAnimation("hit_react", var_59_int, var_61_int, (int)-10);
	return 20;
	
}


func_155(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_12_object, var_13_bool, var_14_float, var_86_bool)
{
	var_15_bool = 0; var_16_bool = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_float = 0;
	var_1_int = 0;
	
Label_157:
	var_38_int = var_1_int + (int)1;
	var_39_int = "attack_begin" + var_38_int;
	HasAnimation(var_25_bool, "all", var_39_int);
	var_40_bool = var_25_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
									var_1_int = var_1_int + (int)1;
									goto Label_157;
	}
	var_2_int = 0;
	
Label_171:
	var_43_int = var_2_int + (int)1;
	var_44_int = "attack" + var_43_int;
	IsExisting3DSound(var_26_bool, var_44_int);
	var_45_bool = var_26_bool == 0; //@nz
	if(var_45_bool != 0) {
	} else {
								var_2_int = var_2_int + (int)1;
								goto Label_171;

	}
	var_4_int = 0;
	var_48_bool = IsFuncExist(var_12_object, "@GetAttackDistance", (int)1);
	if(var_48_bool != 0) {
		@@var_12_object:GetAttackDistance(var_27_float);
		var_27_float = var_27_float + (int)50;
	} else {
							var_14_float = var_27_float;

	}
	var_51_bool = var_27_float >= (int)150;
	if(var_51_bool != 0) {
		var_27_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_12_object;
	IsPlayerActor(var_0_object, var_30_bool);
	var_52_bool = var_13_bool;
	if(var_52_bool != 0) {
		var_31_bool = 0;
	} else {
						var_31_bool = 1;

	}
Label_207:
	var_53_bool = 0;
	var_53_bool = 0;
	var_54_bool = 0; var_55_object = Obj();
	var_55_object = var_0_object;
	func_148(var_54_bool, var_55_object);
	if(var_54_bool != 0) {
		var_73_bool = var_3_bool == 0; //@nz
		if(var_73_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		@@@var_0_object:GetPFPosition(var_28_cvector);
		GetPFPosition(var_29_cvector);
		var_32_cvector = var_28_cvector - var_29_cvector;
		var_33_float = var_32_cvector | var_32_cvector;
		var_75_int = (float)300.0 + var_27_float;
		var_77_int = (float)300.0 + var_27_float;
		var_78_float = var_75_int * var_77_int;
		var_79_bool = var_33_float >= var_78_float;
		if(var_79_bool != 0) {
			var_80_bool = 0; var_81_object = Obj(); var_82_float = 0; var_83_float = 0; var_84_bool = 0; var_85_bool = 0;
			var_81_object = var_0_object;
			var_27_float = var_82_float;
			TaskCall(2);
			func_653(var_86_bool, var_87_object, var_80_bool, var_81_object, var_82_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_133_bool = var_86_bool == 0; //@nz
			if(var_133_bool != 0) {
			} else {
		} else {
				var_139_float = var_14_float * var_14_float;
				var_140_bool = var_33_float >= var_139_float;
				if(var_140_bool != 0) {
					var_141_bool = (bool)0 == 0; //@nz
					if(var_141_bool != 0) {
						var_142_object = Obj();
						var_142_object = var_0_object;
						func_989(var_142_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_31_bool = 1;
					}
					rand(var_34_float);
					var_153_bool = 0;
					var_155_bool = var_34_float < (float)0.6000000238418579;
					if(var_155_bool != 1) {
						var_156_bool = 0;
						func_595((bool)1, var_156_bool);
						if(var_156_bool != 1) {
							var_153_bool = 0;
						}
					}
					if(var_153_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_164_bool = 0; var_165_float = 0;
						var_14_float = var_165_float;
						func_503(var_34_float, var_164_bool, var_165_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_340_bool = 0;
						func_595(var_34_float, var_340_bool);
						var_341_bool = var_340_bool == 0; //@nz
						if(var_341_bool == 0) goto Label_333;
						var_342_bool = 0; var_343_object = Obj();
						var_343_object = var_0_object;
						func_148(var_342_bool, var_343_object);
						var_344_bool = var_342_bool == 0; //@nz
						if(var_344_bool != 0) {
							goto Label_343;
						}
						@@@var_0_object:GetPFPosition(var_28_cvector);
						GetPFPosition(var_29_cvector);
						var_32_cvector = var_28_cvector - var_29_cvector;
						var_33_float = var_32_cvector | var_32_cvector;
						var_345_float = var_14_float * var_14_float;
						var_346_bool = var_33_float < var_345_float;
						if(var_346_bool == 0) goto Label_333;
						var_347_bool = 0; var_348_float = 0;
						var_14_float = var_348_float;
						func_399(var_33_float, var_34_float, var_347_bool, var_348_float);
						var_349_bool = var_347_bool == 0; //@nz
						if(var_349_bool == 0) goto Label_333;
						goto Label_343;
				}
					var_350_bool = 0; var_351_float = 0;
					var_14_float = var_351_float;
					func_399(var_33_float, var_34_float, var_350_bool, var_351_float);
					var_352_bool = var_350_bool == 0; //@nz
					if(var_352_bool != 0) {
						goto Label_343;
					}
					var_31_bool = 1;

				}
			Label_333:
				goto Label_342;
		}
		Label_342:
			goto Label_207;

		}
	}
Label_343:
	WaitForAnimEnd();
	var_134_bool = var_3_bool;
	if(var_134_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_137_bool = var_30_bool;
	if(var_137_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_795(var_123_string)
{
	var_123_string = "run";
	return 0;
}


func_797(var_284_string, var_285_int)
{
	var_287_bool = var_285_int == (int)1;
	if(var_287_bool != 0) {
		var_284_string = "fire";
		return 0;
	}
	var_284_string = "phys";
	return 0;
}


func_543(var_0_object, var_177_bool)
{
	var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_float = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_float = 0; var_187_float = 0;
	var_188_bool = 0; var_189_object = Obj();
	var_189_object = var_0_object;
	func_148(var_188_bool, var_189_object);
	var_190_bool = var_188_bool == 0; //@nz
	if(var_190_bool != 0) {
		var_177_bool = 0;
		return 10;
	}
	var_191_bool = 0;
	func_595(var_187_float, var_191_bool);
	if(var_191_bool != 0) {
		@@@var_0_object:GetPFPosition(var_183_cvector);
		GetPFPosition(var_184_cvector);
		var_185_cvector = var_183_cvector - var_184_cvector;
		var_186_float = var_185_cvector | var_185_cvector;
		@@@var_0_object:GetAttackDistance(var_187_float);
		var_187_float = var_187_float + (int)50;
		var_193_float = var_187_float * var_187_float;
		var_194_bool = var_186_float <= var_193_float;
		if(var_194_bool != 0) {
			func_576(var_187_float);
			var_177_bool = 1;
			return 10;
		}
	}
	var_177_bool = 0;
	return 10;
}


func_805(var_269_bool, var_270_object, var_271_string)
{
	var_272_bool = 0; var_273_bool = 0;
	var_276_bool = IsFuncExist(var_270_object, "HasProperty", (int)2);
	var_277_bool = var_276_bool == 0; //@nz
	if(var_277_bool != 0) {
		var_269_bool = 0;
		return 2;
	}
	@@var_270_object:HasProperty(var_271_string, var_273_bool);
	var_273_bool = var_269_bool;
	return 2;
}


func_817(var_250_float, var_251_object, var_252_float, var_253_int)
{
	var_257_int = 0; var_258_string = ""; var_259_int = 0; var_260_float = 0; var_261_float = 0; var_262_float = 0; var_263_int = 0; var_264_string = ""; var_265_int = 0; var_266_float = 0; var_267_float = 0; var_268_float = 0;
	var_269_bool = 0; var_270_object = Obj(); var_271_string = "";
	var_251_object = var_270_object;
	func_805(var_269_bool, var_270_object, "health");
	var_278_bool = var_269_bool == 0; //@nz
	if(var_278_bool != 0) {
		var_250_float = 0.0;
		return 12;
	}
	var_279_bool = 0; var_280_object = Obj(); var_281_string = "";
	var_251_object = var_280_object;
	func_805(var_279_bool, var_280_object, "armor");
	var_282_bool = var_279_bool == 0; //@nz
	if(var_282_bool != 0) {
		var_263_int = 0;
	} else {
			@@var_251_object:GetProperty("armor", var_263_int);
	}
	var_284_string = ""; var_285_int = 0;
	var_253_int = var_285_int;
	func_797(var_284_string, var_285_int);
	var_264_string = "armor_" + var_284_string;
	var_288_bool = 0; var_289_object = Obj(); var_290_string = "";
	var_251_object = var_289_object;
	var_264_string = var_290_string;
	func_805(var_288_bool, var_289_object, var_290_string);
	var_291_bool = var_288_bool == 0; //@nz
	if(var_291_bool != 0) {
		var_265_int = 0;
	} else {
		@@var_251_object:GetProperty(var_264_string, var_265_int);

	}
	var_292_float = 0; var_293_float = 0; var_294_float = 0;
	var_295_int = var_263_int + var_265_int;
	var_293_float = var_295_int / (float)100.0;
	func_1000(var_292_float, var_293_float, (float)1);
	var_292_float = var_266_float;
	@@var_251_object:GetProperty("health", var_267_float);
	var_300_int = (int)1 - var_266_float;
	var_268_float = var_252_float * var_300_int;
	var_302_float = 0; var_303_float = 0; var_304_float = 0; var_305_float = 0;
	var_303_float = var_267_float - var_268_float;
	func_1007(var_302_float, var_303_float, (float)0, (float)1);
	@@var_251_object:SetProperty("health", var_302_float);
	var_268_float = var_250_float;
	return 12;
	
}


func_576(var_0_object)
{
	var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0);
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_197_cvector);
	GetPFPosition(var_198_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_595(var_0_object, var_156_bool)
{
	var_157_bool = 0; var_158_bool = 0;
	var_161_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_161_bool != 0) {
		@@@var_0_object:IsAttacking(var_158_bool);
		var_158_bool = var_156_bool;
		return 2;
	}
	var_156_bool = 0;
	return 2;
}


func_989(var_142_object)
{
	var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0);
	@@var_142_object:GetPosition(var_146_cvector);
	GetPosition(var_147_cvector);
	var_148_cvector = var_146_cvector - var_147_cvector;
	var_149_float = GetByIndex(var_148_cvector, 0);
	var_150_float = GetByIndex(var_148_cvector, 2);
	RotateAsync(var_149_float, var_150_float);
	return 6;
}


func_606(var_2_int, var_4_int)
{
	var_218_float = 0; var_219_int = 0; var_220_float = 0; var_221_int = 0;
	var_222_bool = var_2_int == 0; //@nz
	if(var_222_bool != 0) {
		return 4;
	}
	var_223_int = var_4_int;
	if(var_223_int != 0) {
		var_4_int = var_4_int + (int)-1;
		var_226_bool = var_4_int > (int)0;
		if(var_226_bool != 0) {
			return 4;
		}
	}
	rand(var_220_float);
	var_227_float = 0;
	func_644(var_227_float);
	var_228_bool = var_220_float < var_227_float;
	if(var_228_bool != 0) {
		irand(var_221_int, var_2_int);
		var_221_int = var_221_int + (int)1;
		var_231_int = "attack" + var_221_int;
		Speak(var_231_int);
		var_232_int = 0;
		func_642(var_232_int);
		var_4_int = var_232_int;
	}
	return 4;
}


func_479(var_328_bool, var_329_float)
{
	var_330_float = 0; var_331_bool = 0; var_332_float = 0; var_333_bool = 0;
	rand(var_332_float);
	var_334_bool = var_332_float < var_329_float;
	if(var_334_bool != 0) {

	Label_484:
		IsAnimationPlaying(var_333_bool);
		var_335_bool = var_333_bool == 0; //@nz
		if(var_335_bool != 0) {
		} else {
			var_336_bool = 0;
			func_543(var_333_bool, var_336_bool);
			if(var_336_bool != 0) {
				var_328_bool = 1;
				sync();
				goto Label_484;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_501;
	
Label_501:
	var_328_bool = 0;
	return 4;
	
}


func_96(var_32_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_32_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_32_string);
	RemoveEnvelope();
	return 0;
}


func_360(var_0_object, var_236_float, var_237_int)
{
	var_238_object = Obj(); var_239_float = 0; var_240_float = 0; var_241_object = Obj(); var_242_float = 0; var_243_float = 0;
	var_245_float = var_236_float * (float)0.8999999761581421;
	GetVictim(var_245_float, var_241_object);
	ReportAttack(var_0_object);
	var_246_bool = var_241_object == var_0_object;
	if(var_246_bool != 0) {
		var_247_float = 0; var_248_object = Obj(); var_249_int = 0;
		var_241_object = var_248_object;
		var_237_int = var_249_int;
		func_142(var_249_int);
		var_247_float = var_242_float;
		var_250_float = 0; var_251_object = Obj(); var_252_float = 0; var_253_int = 0;
		var_241_object = var_251_object;
		var_242_float = var_252_float;
		var_254_int = 0; var_255_object = Obj(); var_256_int = 0;
		var_241_object = var_255_object;
		var_237_int = var_256_int;
		func_145(var_256_int);
		var_254_int = var_253_int;
		func_817(var_250_float, var_251_object, var_252_float, var_253_int);
		var_250_float = var_243_float;
		var_309_int = 0;
		func_638(var_309_int);
		ReportHit(var_0_object, var_309_int, var_243_float, var_242_float);
		var_310_object = Obj(); var_311_float = 0;
		var_241_object = var_310_object;
		var_243_float = var_311_float;
		func_640();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1000(var_292_float, var_293_float, var_294_float)
{
	var_297_bool = var_293_float < var_294_float;
	if(var_297_bool != 0) {
		var_293_float = var_292_float;
	} else {
		var_294_float = var_292_float;
	}
	return 0;
	
}


func_1007(var_302_float, var_303_float, var_304_float, var_305_float)
{
	var_306_bool = var_303_float < var_304_float;
	if(var_306_bool != 0) {
		var_304_float = var_302_float;
		return 0;
	}
	var_307_bool = var_303_float > var_305_float;
	if(var_307_bool != 0) {
		var_305_float = var_302_float;
		return 0;
	}
	var_303_float = var_302_float;
	return 0;
}


func_881(var_67_bool, var_68_object)
{
	var_69_bool = 0; var_70_bool = 0;
	@@var_68_object:IsDead(var_70_bool);
	var_70_bool = var_67_bool;
	return 2;
}


func_886(var_56_bool, var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj();
	var_62_bool = var_57_object == 0; //@ne
	if(var_62_bool != 0) {
		var_56_bool = 0;
		return 4;
	}
	var_63_bool = 0;
	var_63_bool = 0;
	var_66_bool = IsFuncExist(var_57_object, "IsDead", (int)1);
	if(var_66_bool != 0) {
		var_67_bool = 0; var_68_object = Obj();
		var_57_object = var_68_object;
		func_881(var_67_bool, var_68_object);
		if(var_67_bool != 0) {
			var_63_bool = 1;
		}
	}
	if(var_63_bool != 0) {
		var_56_bool = 0;
		return 4;
	}
	GetScene(var_60_object);
	var_71_bool = var_60_object == 0; //@ne
	if(var_71_bool != 0) {
		var_56_bool = 0;
		return 4;
	}
	@@var_57_object:GetScene(var_61_object);
	var_72_bool = var_60_object != var_61_object;
	if(var_72_bool != 0) {
		var_56_bool = 0;
		return 4;
	}
	var_56_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_503(var_0_object, var_164_bool, var_165_float)
{
	var_166_bool = 0; var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_float = 0; var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_float = 0;
	
Label_504:
	IsAnimationPlaying(var_171_bool);
	var_176_bool = var_171_bool == 0; //@nz
	if(var_176_bool != 0) {
	} else {
		var_177_bool = 0;
		func_543(var_175_float, var_177_bool);
		if(var_177_bool != 0) {
			var_164_bool = 1;
			return 10;
		}
		var_202_bool = 0; var_203_object = Obj();
		var_203_object = var_0_object;
		func_148(var_202_bool, var_203_object);
		var_204_bool = var_202_bool == 0; //@nz
		if(var_204_bool != 0) {
			var_164_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_172_cvector);
		GetPFPosition(var_173_cvector);
		var_174_cvector = var_172_cvector - var_173_cvector;
		var_175_float = var_174_cvector | var_174_cvector;
		var_205_float = var_165_float * var_165_float;
		var_206_bool = var_175_float < var_205_float;
		if(var_206_bool != 0) {
			var_207_bool = 0; var_208_float = 0;
			var_165_float = var_208_float;
			func_399(var_174_cvector, var_175_float, var_207_bool, var_208_float);
			var_164_bool = 1;
			sync();
			goto Label_504;
		}
		return 10;
	}
	var_164_bool = 0;
	return 10;
	
}


func_1018(var_8_object)
{
	var_9_object = Obj();
	var_8_object = var_9_object;
	TaskCall(0);
	func_0(var_9_object);
	TaskReturn();
	return 0;
}


func_638(var_309_int)
{
	var_309_int = 0;
	return 0;
}


