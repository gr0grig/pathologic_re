// @IMPORTS: Sleep/1,FindActor/2,HasAnimation/3,IsExisting3DSound/2,IsPlayerActor/2,GetPFPosition/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,GetPosition/1,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,RemoveActor/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,self/1,Trigger/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:player|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:quest_d5_01|W:dead|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @TASK_1: vars=object,int,int,bool,int params=0
// @TASK_2: vars=bool,object params=6
// @EVENT_7: op=0x270 vars=int
// @EVENT_10: op=0x282 vars=object
// @EVENT_41: op=0x28d vars=object
// @TASK_3: vars= params=1
// @EVENT_0: op=0x2b3 vars=object
// @EVENT_6: op=0x2bb vars=
// @EVENT_22: op=0x330 vars=object,int,float,float
// @EVENT_16: op=0x332 vars=object,string
// @EVENT_41: op=0x334 vars=object
// @STANDALONE_EVENT_22: op=0x445 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x44d vars=object,string
// @STANDALONE_EVENT_41: op=0x45a vars=object
// @PE: 0x19,0x1c,0x204,0x270,0x282,0x28d,0x296,0x2a1,0x31a,0x330,0x332,0x334,0x336,0x41f,0x426,0x43d,0x445,0x45a

task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int)
{
	var_9_bool = var_7_int != (int)0;
	if(var_9_bool != 0) {
		return 0;
	}
	var_10_bool = 0; var_11_object = Obj();
	var_11_object = var_1_int;
	func_662(var_10_bool, var_11_object);
	var_46_bool = var_10_bool == 0; //@nz
	if(var_46_bool != 0) {
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
	func_646(var_7_object);
	var_7_object = Obj();
	func_1114();
	return 0;
}


task_3_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		WorkWithCorpse(var_7_object);
	}
	return 2;
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object)
{
	var_7_object = Obj();
	func_1049(var_7_object);
	RemoveActor(var_7_object);
	Hold();
	return 0;
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float)
{
	return 0;
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0;
	var_7_object = var_11_object;
	var_8_int = var_12_int;
	var_9_float = var_13_float;
	func_971(var_12_int, var_13_float);
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
	func_1085(var_8_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object)
{
	
Label_0:
	TaskCall(1);
	func_10();
	TaskReturn();
	Sleep((float)0.5);
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_514(var_322_int)
{
	var_322_int = 0;
	return 0;
}


func_516()
{
	return 0;
}


func_646(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_518(var_251_int)
{
	var_251_int = 1;
	return 0;
}


func_520(var_246_float)
{
	var_246_float = 0.5;
	return 0;
}


func_522(var_0_object, var_1_int, var_99_bool, var_100_object, var_101_float, var_102_float, var_103_bool, var_104_bool)
{
	var_107_bool = 0; var_108_bool = 0; var_109_object = Obj(); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_float = 0; var_114_object = Obj(); var_115_bool = 0; var_116_bool = 0; var_117_object = Obj(); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_float = 0; var_122_object = Obj();
	var_0_object = false;
	var_1_int = var_100_object;
	var_104_bool = var_116_bool;
	
Label_526:
	var_123_bool = 0; var_124_object = Obj();
	var_100_object = var_124_object;
	func_662(var_123_bool, var_124_object);
	var_127_bool = var_123_bool == 0; //@nz
	if(var_127_bool != 0) {
		var_99_bool = 0;
		return 16;
	}
	@@var_100_object:GetPosition(var_118_cvector);
	GetPosition(var_119_cvector);
	var_120_cvector = var_118_cvector - var_119_cvector;
	var_121_float = var_120_cvector | var_120_cvector;
	var_128_bool = 0;
	var_128_bool = 0;
	var_130_bool = var_102_float > (int)0;
	if(var_130_bool != 0) {
		var_131_float = var_102_float * var_102_float;
		var_132_bool = var_121_float > var_131_float;
		if(var_132_bool != 0) {
			var_128_bool = 1;
		}
	}
	if(var_128_bool != 0) {
		Stop();
		var_99_bool = 0;
		return 16;
	}
	var_133_float = var_101_float * var_101_float;
	var_134_bool = var_121_float > var_133_float;
	if(var_134_bool != 0) {
		@@var_100_object:GetPFPosition(var_118_cvector);
		FindPathTo(var_122_object, var_118_cvector);
		var_135_bool = var_122_object != 0; //@nn
		if(var_135_bool != 0) {
			var_122_object = var_117_object;
			var_122_object = 0;
		}
		var_136_bool = var_117_object != 0; //@nn
		if(var_136_bool != 0) {
			var_137_bool = var_116_bool;
			if(var_137_bool == 0) goto Label_575;
			var_116_bool = 0;
			RotatePath(var_117_object, var_115_bool);
			var_138_bool = var_115_bool == 0; //@nz
			if(var_138_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_141_string = "";
				func_669(var_141_string);
				var_142_string = "";
				func_671(var_142_string);
				FollowPath(var_117_object, var_103_bool, var_115_bool, var_141_string, var_142_string);
				var_143_bool = var_115_bool == 0; //@nz
				if(var_143_bool != 0) {
					var_144_object = var_0_object;
					if(var_144_object != 0) {
						var_117_object = 0;
						goto Label_622;
					EMIT "GOTO 0x253";
					}
				} else {
					var_117_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_115_bool);
					var_147_bool = var_115_bool == 0; //@nz
					if(var_147_bool != 0) {
						var_148_object = var_0_object;
						if(var_148_object != 0) {
							var_117_object = 0;
							goto Label_622;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_622;
	}
			var_122_object = 0;
			goto Label_620;

		Label_620:
			var_117_object = 0;

		}
		goto Label_526;
	}
Label_622:
	var_99_bool = !var_0_object;
	return 16;
	
}


func_10()
{
	var_12_object = Obj(); var_13_object = Obj();
	FindActor(var_13_object, "player");
	var_15_bool = var_13_object == 0; //@nz
	if(var_15_bool != 0) {
		return 2;
	}
	var_16_object = Obj(); var_17_bool = 0; var_18_float = 0;
	var_13_object = var_16_object;
	func_31(var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_object, var_16_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_906(var_73_bool, var_74_object)
{
	var_75_bool = 0; var_76_bool = 0;
	@@var_74_object:IsDead(var_76_bool);
	var_76_bool = var_73_bool;
	return 2;
}


func_1038(var_161_object)
{
	var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0);
	@@var_161_object:GetPosition(var_165_cvector);
	GetPosition(var_166_cvector);
	var_167_cvector = var_165_cvector - var_166_cvector;
	var_168_float = GetByIndex(var_167_cvector, 0);
	var_169_float = GetByIndex(var_167_cvector, 2);
	RotateAsync(var_168_float, var_169_float);
	return 6;
}


func_911(var_62_bool, var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj();
	var_68_bool = var_63_object == 0; //@ne
	if(var_68_bool != 0) {
		var_62_bool = 0;
		return 4;
	}
	var_69_bool = 0;
	var_69_bool = 0;
	var_72_bool = IsFuncExist(var_63_object, "IsDead", (int)1);
	if(var_72_bool != 0) {
		var_73_bool = 0; var_74_object = Obj();
		var_63_object = var_74_object;
		func_906(var_73_bool, var_74_object);
		if(var_73_bool != 0) {
			var_69_bool = 1;
		}
	}
	if(var_69_bool != 0) {
		var_62_bool = 0;
		return 4;
	}
	GetScene(var_66_object);
	var_77_bool = var_66_object == 0; //@ne
	if(var_77_bool != 0) {
		var_62_bool = 0;
		return 4;
	}
	@@var_63_object:GetScene(var_67_object);
	var_78_bool = var_66_object != var_67_object;
	if(var_78_bool != 0) {
		var_62_bool = 0;
		return 4;
	}
	var_62_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_275(var_0_object, var_1_int, var_226_bool, var_227_float)
{
	var_228_int = 0; var_229_bool = 0; var_230_int = 0; var_231_bool = 0;
	irand(var_230_int, var_1_int);
	var_230_int = var_230_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_236_int = "attack_begin" + var_230_int;
	PlayAnimation("all", var_236_int);
	WaitForAnimEnd();
	func_482(var_230_int, var_231_bool);
	var_252_bool = 0; var_253_object = Obj();
	var_253_object = var_0_object;
	func_947(var_252_bool, var_253_object);
	var_254_bool = var_252_bool == 0; //@nz
	if(var_254_bool != 0) {
		StopAsync();
		var_226_bool = 0;
		return 4;
	}
	var_255_float = 0; var_256_int = 0;
	var_227_float = var_255_float;
	var_230_int = var_256_int;
	func_236(var_231_bool, var_255_float, var_256_int);
	var_327_int = "attack_middle" + var_230_int;
	HasAnimation(var_231_bool, "all", var_327_int);
	var_328_bool = var_231_bool;
	if(var_328_bool != 0) {
		var_331_int = "attack_middle" + var_230_int;
		PlayAnimation("all", var_331_int);
		WaitForAnimEnd();
		var_332_bool = 0; var_333_object = Obj();
		var_333_object = var_0_object;
		func_947(var_332_bool, var_333_object);
		var_334_bool = var_332_bool == 0; //@nz
		if(var_334_bool != 0) {
			StopAsync();
			var_226_bool = 0;
			return 4;
		}
		var_335_float = 0; var_336_int = 0;
		var_227_float = var_335_float;
		var_230_int = var_336_int;
		func_236(var_231_bool, var_335_float, var_336_int);
	}
	SetAttackState((bool)0);
	var_340_int = "attack_end" + var_230_int;
	PlayAnimation("all", var_340_int);
	var_341_bool = 0; var_342_float = 0;
	func_355(var_341_bool, (float)0.75);
	StopAsync();
	var_226_bool = 1;
	return 4;
}


func_662(var_123_bool, var_124_object)
{
	var_125_bool = 0; var_126_object = Obj();
	var_124_object = var_126_object;
	func_947(var_125_bool, var_126_object);
	var_125_bool = var_123_bool;
	return 0;
}


func_25(var_266_float)
{
	var_266_float = 0.30000001192092896;
	return 0;
}


func_794(var_38_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_38_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_38_string);
	RemoveEnvelope();
	return 0;
}


func_1049(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj();
	self(var_9_object);
	var_9_object = var_7_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_28(var_273_int)
{
	var_273_int = 0;
	return 0;
}


func_669(var_141_string)
{
	var_141_string = "walk";
	return 0;
}


func_31(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_16_object, var_17_bool, var_18_float, var_105_bool)
{
	var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_float = 0;
	var_1_int = 0;
	
Label_33:
	var_42_int = var_1_int + (int)1;
	var_43_int = "attack_begin" + var_42_int;
	HasAnimation(var_29_bool, "all", var_43_int);
	var_44_bool = var_29_bool == 0; //@nz
	if(var_44_bool != 0) {
	} else {
									var_1_int = var_1_int + (int)1;
									goto Label_33;
	}
	var_2_int = 0;
	
Label_47:
	var_47_int = var_2_int + (int)1;
	var_48_int = "attack" + var_47_int;
	IsExisting3DSound(var_30_bool, var_48_int);
	var_49_bool = var_30_bool == 0; //@nz
	if(var_49_bool != 0) {
	} else {
								var_2_int = var_2_int + (int)1;
								goto Label_47;

	}
	var_4_int = 0;
	var_52_bool = IsFuncExist(var_16_object, "@GetAttackDistance", (int)1);
	if(var_52_bool != 0) {
		@@var_16_object:GetAttackDistance(var_31_float);
		var_31_float = var_31_float + (int)50;
	} else {
							var_18_float = var_31_float;

	}
	var_55_bool = var_31_float >= (int)150;
	if(var_55_bool != 0) {
		var_31_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_16_object;
	IsPlayerActor(var_0_object, var_34_bool);
	var_56_bool = var_17_bool;
	if(var_56_bool != 0) {
		var_35_bool = 0;
	} else {
						var_35_bool = 1;

	}
Label_83:
	var_57_bool = 0;
	var_57_bool = 0;
	var_58_bool = 0; var_59_object = Obj();
	var_59_object = var_0_object;
	func_947(var_58_bool, var_59_object);
	if(var_58_bool != 0) {
		var_92_bool = var_3_bool == 0; //@nz
		if(var_92_bool != 0) {
			var_57_bool = 1;
		}
	}
	if(var_57_bool != 0) {
		@@@var_0_object:GetPFPosition(var_32_cvector);
		GetPFPosition(var_33_cvector);
		var_36_cvector = var_32_cvector - var_33_cvector;
		var_37_float = var_36_cvector | var_36_cvector;
		var_94_int = (float)400.0 + var_31_float;
		var_96_int = (float)400.0 + var_31_float;
		var_97_float = var_94_int * var_96_int;
		var_98_bool = var_37_float >= var_97_float;
		if(var_98_bool != 0) {
			var_99_bool = 0; var_100_object = Obj(); var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_bool = 0;
			var_100_object = var_0_object;
			var_31_float = var_101_float;
			TaskCall(2);
			func_522(var_105_bool, var_106_object, var_99_bool, var_100_object, var_101_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_152_bool = var_105_bool == 0; //@nz
			if(var_152_bool != 0) {
			} else {
		} else {
				var_158_float = var_18_float * var_18_float;
				var_159_bool = var_37_float >= var_158_float;
				if(var_159_bool != 0) {
					var_160_bool = (bool)0 == 0; //@nz
					if(var_160_bool != 0) {
						var_161_object = Obj();
						var_161_object = var_0_object;
						func_1038(var_161_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_35_bool = 1;
					}
					rand(var_38_float);
					var_172_bool = 0;
					var_174_bool = var_38_float < (float)0.6000000238418579;
					if(var_174_bool != 1) {
						var_175_bool = 0;
						func_471((bool)1, var_175_bool);
						if(var_175_bool != 1) {
							var_172_bool = 0;
						}
					}
					if(var_172_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_183_bool = 0; var_184_float = 0;
						var_18_float = var_184_float;
						func_379(var_38_float, var_183_bool, var_184_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_353_bool = 0;
						func_471(var_38_float, var_353_bool);
						var_354_bool = var_353_bool == 0; //@nz
						if(var_354_bool == 0) goto Label_209;
						var_355_bool = 0; var_356_object = Obj();
						var_356_object = var_0_object;
						func_947(var_355_bool, var_356_object);
						var_357_bool = var_355_bool == 0; //@nz
						if(var_357_bool != 0) {
							goto Label_219;
						}
						@@@var_0_object:GetPFPosition(var_32_cvector);
						GetPFPosition(var_33_cvector);
						var_36_cvector = var_32_cvector - var_33_cvector;
						var_37_float = var_36_cvector | var_36_cvector;
						var_358_float = var_18_float * var_18_float;
						var_359_bool = var_37_float < var_358_float;
						if(var_359_bool == 0) goto Label_209;
						var_360_bool = 0; var_361_float = 0;
						var_18_float = var_361_float;
						func_275(var_37_float, var_38_float, var_360_bool, var_361_float);
						var_362_bool = var_360_bool == 0; //@nz
						if(var_362_bool == 0) goto Label_209;
						goto Label_219;
				}
					var_363_bool = 0; var_364_float = 0;
					var_18_float = var_364_float;
					func_275(var_37_float, var_38_float, var_363_bool, var_364_float);
					var_365_bool = var_363_bool == 0; //@nz
					if(var_365_bool != 0) {
						goto Label_219;
					}
					var_35_bool = 1;

				}
			Label_209:
				goto Label_218;
		}
		Label_218:
			goto Label_83;

		}
	}
Label_219:
	WaitForAnimEnd();
	var_153_bool = var_3_bool;
	if(var_153_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_156_bool = var_34_bool;
	if(var_156_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_671(var_142_string)
{
	var_142_string = "run";
	return 0;
}


func_1055(var_305_float, var_306_float, var_307_float)
{
	var_310_bool = var_306_float < var_307_float;
	if(var_310_bool != 0) {
		var_306_float = var_305_float;
	} else {
		var_307_float = var_305_float;
	}
	return 0;
	
}


func_673(var_9_object)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = "";
	func_1073(var_10_bool, "quest_d5_01", "dead");
	var_16_object = Obj();
	var_9_object = var_16_object;
	func_707(var_16_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_687:
	Hold();
	goto Label_687;
}
EMIT "Return(); Pop(0)";


func_419(var_0_object, var_196_bool)
{
	var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_float = 0; var_201_float = 0; var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); var_205_float = 0; var_206_float = 0;
	var_207_bool = 0; var_208_object = Obj();
	var_208_object = var_0_object;
	func_947(var_207_bool, var_208_object);
	var_209_bool = var_207_bool == 0; //@nz
	if(var_209_bool != 0) {
		var_196_bool = 0;
		return 10;
	}
	var_210_bool = 0;
	func_471(var_206_float, var_210_bool);
	if(var_210_bool != 0) {
		@@@var_0_object:GetPFPosition(var_202_cvector);
		GetPFPosition(var_203_cvector);
		var_204_cvector = var_202_cvector - var_203_cvector;
		var_205_float = var_204_cvector | var_204_cvector;
		@@@var_0_object:GetAttackDistance(var_206_float);
		var_206_float = var_206_float + (int)50;
		var_212_float = var_206_float * var_206_float;
		var_213_bool = var_205_float <= var_212_float;
		if(var_213_bool != 0) {
			func_452(var_206_float);
			var_196_bool = 1;
			return 10;
		}
	}
	var_196_bool = 0;
	return 10;
}


func_1062(var_315_float, var_316_float, var_317_float, var_318_float)
{
	var_319_bool = var_316_float < var_317_float;
	if(var_319_bool != 0) {
		var_317_float = var_315_float;
		return 0;
	}
	var_320_bool = var_316_float > var_318_float;
	if(var_320_bool != 0) {
		var_318_float = var_315_float;
		return 0;
	}
	var_316_float = var_315_float;
	return 0;
}


func_1073(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, var_11_string);
	var_15_bool = var_14_object == 0; //@ne
	if(var_15_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	Trigger(var_14_object, var_12_string);
	var_10_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_947(var_58_bool, var_59_object)
{
	var_60_int = 0; var_61_int = 0;
	var_62_bool = 0; var_63_object = Obj();
	var_59_object = var_63_object;
	func_911(var_62_bool, var_63_object);
	var_79_bool = var_62_bool == 0; //@nz
	if(var_79_bool != 0) {
		var_58_bool = 0;
		return 2;
	}
	var_80_bool = 0; var_81_object = Obj(); var_82_string = "";
	var_59_object = var_81_object;
	func_830(var_80_bool, var_81_object, "noaccess");
	var_89_bool = var_80_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_58_bool = 1;
		return 2;
	}
	@@var_59_object:GetProperty("noaccess", var_61_int);
	var_58_bool = var_61_int == (int)0;
	return 2;
}


func_822(var_297_string, var_298_int)
{
	var_300_bool = var_298_int == (int)1;
	if(var_300_bool != 0) {
		var_297_string = "fire";
		return 0;
	}
	var_297_string = "phys";
	return 0;
}


func_1085(var_8_object)
{
	var_9_object = Obj();
	var_8_object = var_9_object;
	TaskCall(3);
	func_673(var_9_object);
	TaskReturn();
	return 0;
}


func_830(var_80_bool, var_81_object, var_82_string)
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


func_707(var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = var_16_object == 0; //@ne
	if(var_37_bool != 0) {
		var_38_string = "";
		func_794("fdie");
	} else {
		@@var_16_object:GetPosition(var_27_cvector);
		GetPosition(var_28_cvector);
		GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_41_float = GetByIndex(var_30_cvector, 0);
		var_42_float = GetByIndex(var_29_cvector, 0);
		var_43_float = var_41_float * var_42_float;
		var_44_float = GetByIndex(var_30_cvector, 2);
		var_45_float = GetByIndex(var_29_cvector, 2);
		var_46_float = var_44_float * var_45_float;
		var_47_int = var_43_float + var_46_float;
		var_49_bool = var_47_int >= (int)0;
		if(var_49_bool != 0) {
			var_31_string = "fdie";
		} else {
				var_31_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_16_object = var_32_object;
		var_52_bool = IsFuncExist(var_16_object, "GetScriptProperty", (int)2);
		if(var_52_bool != 0) {
			@@var_16_object:HasScriptProperty(var_33_bool, "Owner");
			var_54_bool = var_33_bool;
			if(var_54_bool != 0) {
				@@var_16_object:GetScriptProperty(var_32_object, "Owner");
				var_56_bool = var_32_object == 0; //@ne
				if(var_56_bool != 0) {
					var_16_object = var_32_object;
				}
			}
		}
		var_59_bool = IsFuncExist(var_32_object, "@GetEyesHeight", (int)1);
		if(var_59_bool != 0) {
			@@var_32_object:GetEyesHeight(var_35_float);
			var_36_cvector = CVector(0.0, 0.0, 0.0);
			var_60_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_60_float;
			SetByIndex(var_36_cvector, 1) = var_60_float;
			LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = 1;
		} else {
			var_34_bool = 0;

		}
		PlayAnimation("all", var_31_string);
		WaitForAnimEnd();
		var_63_bool = var_34_bool;
		if(var_63_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_31_string);
		RemoveEnvelope();
		var_32_object = 0;
	}
	return 20;
	
}


func_452(var_0_object)
{
	var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0);
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_216_cvector);
	GetPFPosition(var_217_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_842(var_269_float, var_270_object, var_271_float, var_272_int)
{
	var_276_int = 0; var_277_string = ""; var_278_int = 0; var_279_float = 0; var_280_float = 0; var_281_float = 0; var_282_int = 0; var_283_string = ""; var_284_int = 0; var_285_float = 0; var_286_float = 0; var_287_float = 0;
	var_288_bool = 0; var_289_object = Obj(); var_290_string = "";
	var_270_object = var_289_object;
	func_830(var_288_bool, var_289_object, "health");
	var_291_bool = var_288_bool == 0; //@nz
	if(var_291_bool != 0) {
		var_269_float = 0.0;
		return 12;
	}
	var_292_bool = 0; var_293_object = Obj(); var_294_string = "";
	var_270_object = var_293_object;
	func_830(var_292_bool, var_293_object, "armor");
	var_295_bool = var_292_bool == 0; //@nz
	if(var_295_bool != 0) {
		var_282_int = 0;
	} else {
			@@var_270_object:GetProperty("armor", var_282_int);
	}
	var_297_string = ""; var_298_int = 0;
	var_272_int = var_298_int;
	func_822(var_297_string, var_298_int);
	var_283_string = "armor_" + var_297_string;
	var_301_bool = 0; var_302_object = Obj(); var_303_string = "";
	var_270_object = var_302_object;
	var_283_string = var_303_string;
	func_830(var_301_bool, var_302_object, var_303_string);
	var_304_bool = var_301_bool == 0; //@nz
	if(var_304_bool != 0) {
		var_284_int = 0;
	} else {
		@@var_270_object:GetProperty(var_283_string, var_284_int);

	}
	var_305_float = 0; var_306_float = 0; var_307_float = 0;
	var_308_int = var_282_int + var_284_int;
	var_306_float = var_308_int / (float)100.0;
	func_1055(var_305_float, var_306_float, (float)1);
	var_305_float = var_285_float;
	@@var_270_object:GetProperty("health", var_286_float);
	var_313_int = (int)1 - var_285_float;
	var_287_float = var_271_float * var_313_int;
	var_315_float = 0; var_316_float = 0; var_317_float = 0; var_318_float = 0;
	var_316_float = var_286_float - var_287_float;
	func_1062(var_315_float, var_316_float, (float)0, (float)1);
	@@var_270_object:SetProperty("health", var_315_float);
	var_287_float = var_269_float;
	return 12;
	
}


func_971(var_11_object, var_12_int)
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


func_471(var_0_object, var_175_bool)
{
	var_176_bool = 0; var_177_bool = 0;
	var_180_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_180_bool != 0) {
		@@@var_0_object:IsAttacking(var_177_bool);
		var_177_bool = var_175_bool;
		return 2;
	}
	var_175_bool = 0;
	return 2;
}


func_482(var_2_int, var_4_int)
{
	var_237_float = 0; var_238_int = 0; var_239_float = 0; var_240_int = 0;
	var_241_bool = var_2_int == 0; //@nz
	if(var_241_bool != 0) {
		return 4;
	}
	var_242_int = var_4_int;
	if(var_242_int != 0) {
		var_4_int = var_4_int + (int)-1;
		var_245_bool = var_4_int > (int)0;
		if(var_245_bool != 0) {
			return 4;
		}
	}
	rand(var_239_float);
	var_246_float = 0;
	func_520(var_246_float);
	var_247_bool = var_239_float < var_246_float;
	if(var_247_bool != 0) {
		irand(var_240_int, var_2_int);
		var_240_int = var_240_int + (int)1;
		var_250_int = "attack" + var_240_int;
		Speak(var_250_int);
		var_251_int = 0;
		func_518(var_251_int);
		var_4_int = var_251_int;
	}
	return 4;
}


func_355(var_341_bool, var_342_float)
{
	var_343_float = 0; var_344_bool = 0; var_345_float = 0; var_346_bool = 0;
	rand(var_345_float);
	var_347_bool = var_345_float < var_342_float;
	if(var_347_bool != 0) {

	Label_360:
		IsAnimationPlaying(var_346_bool);
		var_348_bool = var_346_bool == 0; //@nz
		if(var_348_bool != 0) {
		} else {
			var_349_bool = 0;
			func_419(var_346_bool, var_349_bool);
			if(var_349_bool != 0) {
				var_341_bool = 1;
				sync();
				goto Label_360;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_377;
	
Label_377:
	var_341_bool = 0;
	return 4;
	
}


func_236(var_0_object, var_255_float, var_256_int)
{
	var_257_object = Obj(); var_258_float = 0; var_259_float = 0; var_260_object = Obj(); var_261_float = 0; var_262_float = 0;
	var_264_float = var_255_float * (float)0.8999999761581421;
	GetVictim(var_264_float, var_260_object);
	ReportAttack(var_0_object);
	var_265_bool = var_260_object == var_0_object;
	if(var_265_bool != 0) {
		var_266_float = 0; var_267_object = Obj(); var_268_int = 0;
		var_260_object = var_267_object;
		var_256_int = var_268_int;
		func_25(var_268_int);
		var_266_float = var_261_float;
		var_269_float = 0; var_270_object = Obj(); var_271_float = 0; var_272_int = 0;
		var_260_object = var_270_object;
		var_261_float = var_271_float;
		var_273_int = 0; var_274_object = Obj(); var_275_int = 0;
		var_260_object = var_274_object;
		var_256_int = var_275_int;
		func_28(var_275_int);
		var_273_int = var_272_int;
		func_842(var_269_float, var_270_object, var_271_float, var_272_int);
		var_269_float = var_262_float;
		var_322_int = 0;
		func_514(var_322_int);
		ReportHit(var_0_object, var_322_int, var_262_float, var_261_float);
		var_323_object = Obj(); var_324_float = 0;
		var_260_object = var_323_object;
		var_262_float = var_324_float;
		func_516();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_379(var_0_object, var_183_bool, var_184_float)
{
	var_185_bool = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_bool = 0; var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_float = 0;
	
Label_380:
	IsAnimationPlaying(var_190_bool);
	var_195_bool = var_190_bool == 0; //@nz
	if(var_195_bool != 0) {
	} else {
		var_196_bool = 0;
		func_419(var_194_float, var_196_bool);
		if(var_196_bool != 0) {
			var_183_bool = 1;
			return 10;
		}
		var_221_bool = 0; var_222_object = Obj();
		var_222_object = var_0_object;
		func_947(var_221_bool, var_222_object);
		var_223_bool = var_221_bool == 0; //@nz
		if(var_223_bool != 0) {
			var_183_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_191_cvector);
		GetPFPosition(var_192_cvector);
		var_193_cvector = var_191_cvector - var_192_cvector;
		var_194_float = var_193_cvector | var_193_cvector;
		var_224_float = var_184_float * var_184_float;
		var_225_bool = var_194_float < var_224_float;
		if(var_225_bool != 0) {
			var_226_bool = 0; var_227_float = 0;
			var_184_float = var_227_float;
			func_275(var_193_cvector, var_194_float, var_226_bool, var_227_float);
			var_183_bool = 1;
			sync();
			goto Label_380;
		}
		return 10;
	}
	var_183_bool = 0;
	return 10;
	
}


