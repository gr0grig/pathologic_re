// @IMPORTS: FindActor/2,HasAnimation/3,IsExisting3DSound/2,IsPlayerActor/2,GetPFPosition/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,GetPosition/1,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,RemoveActor/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,CreateDialog/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,Trigger/2,GetGameTime/1,GetProperty/2,SignalDeath/1,SetVariable/2,GetMainOutdoorScene/1,AddItem/4
// @STRINGS: W:player|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:quest_d5_01|W:dead|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|W:factory_fight|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2|W:playing |W:start: |W:end: |W:ood5PatrolGuard1|W:d5q01|W:d5q01PatrolGotoGrif|W:pt_map_grif|A:AddMark|W:Can't find main outdoor scene|A:GetMap|W:ui/NPC_Black.png|W:revolver_ammo|W:alpha_pills
// @GLOBALS: 0:object:
// @RUN_OP: 0x476
// @RUN_TASK: 5
// @TASK_0: vars=object,int,int,bool,int params=0
// @TASK_1: vars=bool,object params=6
// @EVENT_7: op=0x266 vars=int
// @EVENT_10: op=0x278 vars=object
// @EVENT_41: op=0x283 vars=object
// @TASK_2: vars= params=1
// @EVENT_0: op=0x2a9 vars=object
// @EVENT_6: op=0x2b1 vars=
// @EVENT_22: op=0x326 vars=object,int,float,float
// @EVENT_16: op=0x328 vars=object,string
// @EVENT_41: op=0x32a vars=object
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3c4 vars=int,int
// @TASK_5: vars= params=0
// @EVENT_0: op=0x47a vars=object
// @EVENT_17: op=0x486 vars=object
// @EVENT_26: op=0x491 vars=string
// @STANDALONE_EVENT_22: op=0x60b vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x613 vars=object,string
// @STANDALONE_EVENT_41: op=0x620 vars=object
// @PE: 0xf,0x12,0x1fa,0x266,0x278,0x283,0x28c,0x297,0x310,0x326,0x328,0x32a,0x36b,0x3b4,0x3c4,0x46e,0x47a,0x491,0x49b,0x5b6,0x5e3,0x5ea,0x60b,0x620,0x626,0x640

task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_14_bool = var_12_bool != (int)0;
	if(var_14_bool != 0) {
		return 0;
	}
	var_15_bool = 0; var_16_object = Obj();
	var_16_object = var_1_int;
	func_652(var_15_bool, var_16_object);
	var_51_bool = var_15_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	RequestClearPath(var_12_bool);
	return 0;
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	func_636(var_12_bool);
	var_12_bool = Obj();
	func_1568();
	return 0;
}


task_2_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsOverrideActive(var_14_bool);
	var_15_bool = var_14_bool == 0; //@nz
	if(var_15_bool != 0) {
		WorkWithCorpse(var_12_bool);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_object = Obj();
	func_1491(var_12_object);
	RemoveActor(var_12_object);
	Hold();
	return 0;
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	return 0;
}


task_4_event_11(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int)
{
	if((int)1 != 0) {
		func_1484();
		var_17_bool = var_13_int == (int)12905;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_int;
			var_19_object = var_0_object;
			func_1574();
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_int;
			var_23_object = var_0_object;
			func_1580();
		}
		var_43_bool = var_13_int == (int)12906;
		if(var_43_bool != 0) {
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_int;
			var_45_object = var_0_object;
			func_1574();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_int;
			var_47_object = var_0_object;
			func_1580();
		}
		var_49_bool = var_12_int == (int)12892;
		if(var_49_bool != 0) {
			var_50_bool = 0; var_51_object = Obj();
			var_51_object = var_1_int;
			func_1600(var_51_object);
			if(var_50_bool != 0) {
				var_58_string = "";
				func_948(var_13_int, "Neutral");
				@@@var_0_object:SetMessage((int)11690);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11691, (int)12894, (int)12893);
				return 0;
			}
			var_77_string = "";
			func_948(var_13_int, "Neutral");
			@@@var_0_object:SetMessage((int)12483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12484, (int)-1, (int)13652);
			return 0;
		}
		var_83_bool = var_12_int == (int)12894;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_948(var_13_int, "Neutral");
			@@@var_0_object:SetMessage((int)11692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11693, (int)12901, (int)12895);
			@@@var_0_object:AddReply((int)11694, (int)12898, (int)12896);
			@@@var_0_object:AddReply((int)11695, (int)12898, (int)12897);
			return 0;
		}
		var_96_bool = var_12_int == (int)12898;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_948(var_13_int, "Neutral");
			@@@var_0_object:SetMessage((int)11696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11697, (int)12901, (int)12900);
			return 0;
		}
		var_103_bool = var_12_int == (int)12901;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_948(var_13_int, "Neutral");
			@@@var_0_object:SetMessage((int)11698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11699, (int)12904, (int)12902);
			return 0;
		}
		var_110_bool = var_12_int == (int)12904;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_948(var_13_int, "Neutral");
			@@@var_0_object:SetMessage((int)11700);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11701, (int)-1, (int)12905);
			@@@var_0_object:AddReply((int)11702, (int)-1, (int)12906);
			return 0;
		}
		var_3_bool = true;
		var_119_bool = 0;
		func_1650(var_119_bool);
		if(var_119_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3c5";
	
}


task_5_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object)
{
	var_13_bool = 0;
	func_1156(var_13_bool);
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_12_object = var_14_object;
		func_1134(var_14_object);
	}
	return 0;
}


task_5_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsPlayerActor(var_12_object, var_14_bool);
	var_15_bool = var_14_bool;
	if(var_15_bool != 0) {
		var_16_bool = 0; var_17_string = ""; var_18_string = "";
		func_1530(var_16_bool, "quest_d5_01", "factory_fight");
	}
	return 2;
}


task_5_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "attack";
	if(var_14_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0;
	var_12_object = var_16_object;
	var_13_int = var_17_int;
	var_14_float = var_18_float;
	func_1328(var_17_int, var_18_float);
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_string)
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


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_1652(var_13_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	
Label_1142:
	Hold();
	goto Label_1142;
}
EMIT "Return(); Pop(0)";


func_512(var_0_object, var_1_int, var_107_bool, var_108_object, var_109_float, var_110_float, var_111_bool, var_112_bool)
{
	var_115_bool = 0; var_116_bool = 0; var_117_object = Obj(); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_float = 0; var_122_object = Obj(); var_123_bool = 0; var_124_bool = 0; var_125_object = Obj(); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_float = 0; var_130_object = Obj();
	var_0_object = false;
	var_1_int = var_108_object;
	var_112_bool = var_124_bool;
	
Label_516:
	var_131_bool = 0; var_132_object = Obj();
	var_108_object = var_132_object;
	func_652(var_131_bool, var_132_object);
	var_135_bool = var_131_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_107_bool = 0;
		return 16;
	}
	@@var_108_object:GetPosition(var_126_cvector);
	GetPosition(var_127_cvector);
	var_128_cvector = var_126_cvector - var_127_cvector;
	var_129_float = var_128_cvector | var_128_cvector;
	var_136_bool = 0;
	var_136_bool = 0;
	var_138_bool = var_110_float > (int)0;
	if(var_138_bool != 0) {
		var_139_float = var_110_float * var_110_float;
		var_140_bool = var_129_float > var_139_float;
		if(var_140_bool != 0) {
			var_136_bool = 1;
		}
	}
	if(var_136_bool != 0) {
		Stop();
		var_107_bool = 0;
		return 16;
	}
	var_141_float = var_109_float * var_109_float;
	var_142_bool = var_129_float > var_141_float;
	if(var_142_bool != 0) {
		@@var_108_object:GetPFPosition(var_126_cvector);
		FindPathTo(var_130_object, var_126_cvector);
		var_143_bool = var_130_object != 0; //@nn
		if(var_143_bool != 0) {
			var_130_object = var_125_object;
			var_130_object = 0;
		}
		var_144_bool = var_125_object != 0; //@nn
		if(var_144_bool != 0) {
			var_145_bool = var_124_bool;
			if(var_145_bool == 0) goto Label_565;
			var_124_bool = 0;
			RotatePath(var_125_object, var_123_bool);
			var_146_bool = var_123_bool == 0; //@nz
			if(var_146_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_149_string = "";
				func_659(var_149_string);
				var_150_string = "";
				func_661(var_150_string);
				FollowPath(var_125_object, var_111_bool, var_123_bool, var_149_string, var_150_string);
				var_151_bool = var_123_bool == 0; //@nz
				if(var_151_bool != 0) {
					var_152_object = var_0_object;
					if(var_152_object != 0) {
						var_125_object = 0;
						goto Label_612;
					EMIT "GOTO 0x249";
					}
				} else {
					var_125_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_123_bool);
					var_155_bool = var_123_bool == 0; //@nz
					if(var_155_bool != 0) {
						var_156_object = var_0_object;
						if(var_156_object != 0) {
							var_125_object = 0;
							goto Label_612;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_612;
	}
			var_130_object = 0;
			goto Label_610;

		Label_610:
			var_125_object = 0;

		}
		goto Label_516;
	}
Label_612:
	var_107_bool = !var_0_object;
	return 16;
	
}


func_0()
{
	var_20_object = Obj(); var_21_object = Obj();
	FindActor(var_21_object, "player");
	var_23_bool = var_21_object == 0; //@nz
	if(var_23_bool != 0) {
		return 2;
	}
	var_24_object = Obj(); var_25_bool = 0; var_26_float = 0;
	var_21_object = var_24_object;
	func_21(var_16_int, var_17_int, var_18_bool, var_19_int, var_20_object, var_21_object, var_24_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_636(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1156(var_13_bool)
{
	var_13_bool = 1;
	return 0;
}


func_1542(var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	GetGameTime(var_41_float);
	var_41_float = var_39_float;
	return 2;
}


func_265(var_0_object, var_1_int, var_234_bool, var_235_float)
{
	var_236_int = 0; var_237_bool = 0; var_238_int = 0; var_239_bool = 0;
	irand(var_238_int, var_1_int);
	var_238_int = var_238_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_244_int = "attack_begin" + var_238_int;
	PlayAnimation("all", var_244_int);
	WaitForAnimEnd();
	func_472(var_238_int, var_239_bool);
	var_260_bool = 0; var_261_object = Obj();
	var_261_object = var_0_object;
	func_1304(var_260_bool, var_261_object);
	var_262_bool = var_260_bool == 0; //@nz
	if(var_262_bool != 0) {
		StopAsync();
		var_234_bool = 0;
		return 4;
	}
	var_263_float = 0; var_264_int = 0;
	var_235_float = var_263_float;
	var_238_int = var_264_int;
	func_226(var_239_bool, var_263_float, var_264_int);
	var_335_int = "attack_middle" + var_238_int;
	HasAnimation(var_239_bool, "all", var_335_int);
	var_336_bool = var_239_bool;
	if(var_336_bool != 0) {
		var_339_int = "attack_middle" + var_238_int;
		PlayAnimation("all", var_339_int);
		WaitForAnimEnd();
		var_340_bool = 0; var_341_object = Obj();
		var_341_object = var_0_object;
		func_1304(var_340_bool, var_341_object);
		var_342_bool = var_340_bool == 0; //@nz
		if(var_342_bool != 0) {
			StopAsync();
			var_234_bool = 0;
			return 4;
		}
		var_343_float = 0; var_344_int = 0;
		var_235_float = var_343_float;
		var_238_int = var_344_int;
		func_226(var_239_bool, var_343_float, var_344_int);
	}
	SetAttackState((bool)0);
	var_348_int = "attack_end" + var_238_int;
	PlayAnimation("all", var_348_int);
	var_349_bool = 0; var_350_float = 0;
	func_345(var_349_bool, (float)0.75);
	StopAsync();
	var_234_bool = 1;
	return 4;
}


func_652(var_131_bool, var_132_object)
{
	var_133_bool = 0; var_134_object = Obj();
	var_132_object = var_134_object;
	func_1304(var_133_bool, var_134_object);
	var_133_bool = var_131_bool;
	return 0;
}


func_15(var_274_float)
{
	var_274_float = 0.30000001192092896;
	return 0;
}


func_784(var_51_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_51_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_51_string);
	RemoveEnvelope();
	return 0;
}


func_18(var_281_int)
{
	var_281_int = 0;
	return 0;
}


func_659(var_149_string)
{
	var_149_string = "walk";
	return 0;
}


func_1530(var_23_bool, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj();
	FindActor(var_27_object, var_24_string);
	var_28_bool = var_27_object == 0; //@ne
	if(var_28_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	Trigger(var_27_object, var_25_string);
	var_23_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_21(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_24_object, var_25_bool, var_26_float, var_113_bool)
{
	var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_float = 0; var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_float = 0;
	var_1_int = 0;
	
Label_23:
	var_50_int = var_1_int + (int)1;
	var_51_int = "attack_begin" + var_50_int;
	HasAnimation(var_37_bool, "all", var_51_int);
	var_52_bool = var_37_bool == 0; //@nz
	if(var_52_bool != 0) {
	} else {
									var_1_int = var_1_int + (int)1;
									goto Label_23;
	}
	var_2_int = 0;
	
Label_37:
	var_55_int = var_2_int + (int)1;
	var_56_int = "attack" + var_55_int;
	IsExisting3DSound(var_38_bool, var_56_int);
	var_57_bool = var_38_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
								var_2_int = var_2_int + (int)1;
								goto Label_37;

	}
	var_4_int = 0;
	var_60_bool = IsFuncExist(var_24_object, "@GetAttackDistance", (int)1);
	if(var_60_bool != 0) {
		@@var_24_object:GetAttackDistance(var_39_float);
		var_39_float = var_39_float + (int)50;
	} else {
							var_26_float = var_39_float;

	}
	var_63_bool = var_39_float >= (int)150;
	if(var_63_bool != 0) {
		var_39_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_24_object;
	IsPlayerActor(var_0_object, var_42_bool);
	var_64_bool = var_25_bool;
	if(var_64_bool != 0) {
		var_43_bool = 0;
	} else {
						var_43_bool = 1;

	}
Label_73:
	var_65_bool = 0;
	var_65_bool = 0;
	var_66_bool = 0; var_67_object = Obj();
	var_67_object = var_0_object;
	func_1304(var_66_bool, var_67_object);
	if(var_66_bool != 0) {
		var_100_bool = var_3_bool == 0; //@nz
		if(var_100_bool != 0) {
			var_65_bool = 1;
		}
	}
	if(var_65_bool != 0) {
		@@@var_0_object:GetPFPosition(var_40_cvector);
		GetPFPosition(var_41_cvector);
		var_44_cvector = var_40_cvector - var_41_cvector;
		var_45_float = var_44_cvector | var_44_cvector;
		var_102_int = (float)400.0 + var_39_float;
		var_104_int = (float)400.0 + var_39_float;
		var_105_float = var_102_int * var_104_int;
		var_106_bool = var_45_float >= var_105_float;
		if(var_106_bool != 0) {
			var_107_bool = 0; var_108_object = Obj(); var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_bool = 0;
			var_108_object = var_0_object;
			var_39_float = var_109_float;
			TaskCall(1);
			func_512(var_113_bool, var_114_object, var_107_bool, var_108_object, var_109_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_160_bool = var_113_bool == 0; //@nz
			if(var_160_bool != 0) {
			} else {
		} else {
				var_166_float = var_26_float * var_26_float;
				var_167_bool = var_45_float >= var_166_float;
				if(var_167_bool != 0) {
					var_168_bool = (bool)0 == 0; //@nz
					if(var_168_bool != 0) {
						var_169_object = Obj();
						var_169_object = var_0_object;
						func_1395(var_169_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_43_bool = 1;
					}
					rand(var_46_float);
					var_180_bool = 0;
					var_182_bool = var_46_float < (float)0.6000000238418579;
					if(var_182_bool != 1) {
						var_183_bool = 0;
						func_461((bool)1, var_183_bool);
						if(var_183_bool != 1) {
							var_180_bool = 0;
						}
					}
					if(var_180_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_191_bool = 0; var_192_float = 0;
						var_26_float = var_192_float;
						func_369(var_46_float, var_191_bool, var_192_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_361_bool = 0;
						func_461(var_46_float, var_361_bool);
						var_362_bool = var_361_bool == 0; //@nz
						if(var_362_bool == 0) goto Label_199;
						var_363_bool = 0; var_364_object = Obj();
						var_364_object = var_0_object;
						func_1304(var_363_bool, var_364_object);
						var_365_bool = var_363_bool == 0; //@nz
						if(var_365_bool != 0) {
							goto Label_209;
						}
						@@@var_0_object:GetPFPosition(var_40_cvector);
						GetPFPosition(var_41_cvector);
						var_44_cvector = var_40_cvector - var_41_cvector;
						var_45_float = var_44_cvector | var_44_cvector;
						var_366_float = var_26_float * var_26_float;
						var_367_bool = var_45_float < var_366_float;
						if(var_367_bool == 0) goto Label_199;
						var_368_bool = 0; var_369_float = 0;
						var_26_float = var_369_float;
						func_265(var_45_float, var_46_float, var_368_bool, var_369_float);
						var_370_bool = var_368_bool == 0; //@nz
						if(var_370_bool == 0) goto Label_199;
						goto Label_209;
				}
					var_371_bool = 0; var_372_float = 0;
					var_26_float = var_372_float;
					func_265(var_45_float, var_46_float, var_371_bool, var_372_float);
					var_373_bool = var_371_bool == 0; //@nz
					if(var_373_bool != 0) {
						goto Label_209;
					}
					var_43_bool = 1;

				}
			Label_199:
				goto Label_208;
		}
		Label_208:
			goto Label_73;

		}
	}
Label_209:
	WaitForAnimEnd();
	var_161_bool = var_3_bool;
	if(var_161_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_164_bool = var_42_bool;
	if(var_164_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_661(var_150_string)
{
	var_150_string = "run";
	return 0;
}


func_663(var_22_object)
{
	var_23_bool = 0; var_24_string = ""; var_25_string = "";
	func_1530(var_23_bool, "quest_d5_01", "dead");
	var_29_object = Obj();
	var_22_object = var_29_object;
	func_697(var_29_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_677:
	Hold();
	goto Label_677;
}
EMIT "Return(); Pop(0)";


func_1304(var_66_bool, var_67_object)
{
	var_68_int = 0; var_69_int = 0;
	var_70_bool = 0; var_71_object = Obj();
	var_67_object = var_71_object;
	func_1268(var_70_bool, var_71_object);
	var_87_bool = var_70_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	var_88_bool = 0; var_89_object = Obj(); var_90_string = "";
	var_67_object = var_89_object;
	func_1187(var_88_bool, var_89_object, "noaccess");
	var_97_bool = var_88_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_66_bool = 1;
		return 2;
	}
	@@var_67_object:GetProperty("noaccess", var_69_int);
	var_66_bool = var_69_int == (int)0;
	return 2;
}


func_409(var_0_object, var_204_bool)
{
	var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_float = 0; var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_float = 0; var_214_float = 0;
	var_215_bool = 0; var_216_object = Obj();
	var_216_object = var_0_object;
	func_1304(var_215_bool, var_216_object);
	var_217_bool = var_215_bool == 0; //@nz
	if(var_217_bool != 0) {
		var_204_bool = 0;
		return 10;
	}
	var_218_bool = 0;
	func_461(var_214_float, var_218_bool);
	if(var_218_bool != 0) {
		@@@var_0_object:GetPFPosition(var_210_cvector);
		GetPFPosition(var_211_cvector);
		var_212_cvector = var_210_cvector - var_211_cvector;
		var_213_float = var_212_cvector | var_212_cvector;
		@@@var_0_object:GetAttackDistance(var_214_float);
		var_214_float = var_214_float + (int)50;
		var_220_float = var_214_float * var_214_float;
		var_221_bool = var_213_float <= var_220_float;
		if(var_221_bool != 0) {
			func_442(var_214_float);
			var_204_bool = 1;
			return 10;
		}
	}
	var_204_bool = 0;
	return 10;
}


func_1179(var_305_string, var_306_int)
{
	var_308_bool = var_306_int == (int)1;
	if(var_308_bool != 0) {
		var_305_string = "fire";
		return 0;
	}
	var_305_string = "phys";
	return 0;
}


func_1406(var_26_bool, var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0;
	@@var_27_object:GetPosition(var_37_cvector);
	@@var_27_object:GetEyesHeight(var_36_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	var_44_float = var_44_float + var_36_float;
	SetByIndex(var_37_cvector, 1) = var_44_float;
	GetPosition(var_38_cvector);
	GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	var_45_float = var_45_float + var_36_float;
	SetByIndex(var_38_cvector, 1) = var_45_float;
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_47_int = var_39_cvector | var_39_cvector;
	var_48_float = sqrt(var_47_int);
	var_39_cvector = var_39_cvector / var_48_float;
	var_40_cvector = -var_39_cvector;
	var_50_float = var_39_cvector * (int)70;
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_40_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1497(var_51_cvector, var_52_cvector);
	var_60_float = var_51_cvector * (int)25;
	var_61_int = var_50_float + var_60_float;
	var_41_cvector = var_61_int - CVector(0.0, 10.0, 0.0);
	var_42_cvector = var_38_cvector + var_41_cvector;
	IsOverrideActive(var_43_bool);
	var_63_bool = var_43_bool;
	if(var_63_bool != 0) {
		var_26_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_42_cvector, var_40_cvector);
	var_64_float = GetByIndex(var_41_cvector, 0);
	var_65_float = GetByIndex(var_41_cvector, 2);
	Rotate(var_64_float, var_65_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_26_bool = 1;
	return 16;
}


func_1187(var_88_bool, var_89_object, var_90_string)
{
	var_91_bool = 0; var_92_bool = 0;
	var_95_bool = IsFuncExist(var_89_object, "HasProperty", (int)2);
	var_96_bool = var_95_bool == 0; //@nz
	if(var_96_bool != 0) {
		var_88_bool = 0;
		return 2;
	}
	@@var_89_object:HasProperty(var_90_string, var_92_bool);
	var_92_bool = var_88_bool;
	return 2;
}


func_1574()
{
	SetVariable("ood5PatrolGuard1", (int)1);
	return 0;
}


func_1580()
{
	var_24_object = Obj(); var_25_object = Obj();
	SetVariable("d5q01", (int)6);
	func_1612(Obj());
	var_28_object = var_25_object;
	var_39_float = 0;
	func_1542(var_39_float);
	@@var_25_object:AddMark("d5q01PatrolGotoGrif", "pt_map_grif", (int)1, (int)15349, var_39_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_812(var_0_object, var_15_int, var_16_object)
{
	var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0;
	var_0_object = var_16_object;
	var_26_bool = 0; var_27_object = Obj();
	var_16_object = var_27_object;
	func_1406(var_26_bool, var_27_object);
	var_66_bool = var_26_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	CreateDialog(var_22_object);
	var_67_int = 0;
	func_1646(var_67_int);
	@@var_22_object:SetNPCName(var_67_int);
	var_68_string = "";
	func_1648(var_68_string);
	@@var_22_object:SetPhoto(var_68_string);
	var_69_int = 0;
	func_1629(var_69_int);
	@@var_22_object:SetPlayerName(var_69_int);
	IsOverrideActive(var_23_bool);
	var_77_bool = var_23_bool;
	if(var_77_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	DoDialog(var_22_object);
	var_78_object = Obj(); var_79_object = Obj();
	var_16_object = var_78_object;
	var_22_object = var_79_object;
	TaskCall(4);
	func_875(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	@@var_22_object:IsDialogEnd(var_25_bool);
	
Label_857:
	var_125_bool = var_25_bool == 0; //@nz
	if(var_125_bool != 0) {
		sync();
		@@var_22_object:IsDialogEnd(var_25_bool);
		goto Label_857;
	}
	var_16_object = Obj();
	func_1462();
	StopDialog(var_22_object);
	@@var_22_object:GetReturnValue((int)-1);
	var_24_int = var_15_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1199(var_277_float, var_278_object, var_279_float, var_280_int)
{
	var_284_int = 0; var_285_string = ""; var_286_int = 0; var_287_float = 0; var_288_float = 0; var_289_float = 0; var_290_int = 0; var_291_string = ""; var_292_int = 0; var_293_float = 0; var_294_float = 0; var_295_float = 0;
	var_296_bool = 0; var_297_object = Obj(); var_298_string = "";
	var_278_object = var_297_object;
	func_1187(var_296_bool, var_297_object, "health");
	var_299_bool = var_296_bool == 0; //@nz
	if(var_299_bool != 0) {
		var_277_float = 0.0;
		return 12;
	}
	var_300_bool = 0; var_301_object = Obj(); var_302_string = "";
	var_278_object = var_301_object;
	func_1187(var_300_bool, var_301_object, "armor");
	var_303_bool = var_300_bool == 0; //@nz
	if(var_303_bool != 0) {
		var_290_int = 0;
	} else {
			@@var_278_object:GetProperty("armor", var_290_int);
	}
	var_305_string = ""; var_306_int = 0;
	var_280_int = var_306_int;
	func_1179(var_305_string, var_306_int);
	var_291_string = "armor_" + var_305_string;
	var_309_bool = 0; var_310_object = Obj(); var_311_string = "";
	var_278_object = var_310_object;
	var_291_string = var_311_string;
	func_1187(var_309_bool, var_310_object, var_311_string);
	var_312_bool = var_309_bool == 0; //@nz
	if(var_312_bool != 0) {
		var_292_int = 0;
	} else {
		@@var_278_object:GetProperty(var_291_string, var_292_int);

	}
	var_313_float = 0; var_314_float = 0; var_315_float = 0;
	var_316_int = var_290_int + var_292_int;
	var_314_float = var_316_int / (float)100.0;
	func_1507(var_313_float, var_314_float, (float)1);
	var_313_float = var_293_float;
	@@var_278_object:GetProperty("health", var_294_float);
	var_321_int = (int)1 - var_293_float;
	var_295_float = var_279_float * var_321_int;
	var_323_float = 0; var_324_float = 0; var_325_float = 0; var_326_float = 0;
	var_324_float = var_294_float - var_295_float;
	func_1514(var_323_float, var_324_float, (float)0, (float)1);
	@@var_278_object:SetProperty("health", var_323_float);
	var_295_float = var_277_float;
	return 12;
	
}


func_1328(var_16_object, var_17_int)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = "";
	var_39_bool = 0;
	var_39_bool = 0;
	var_41_bool = var_17_int != (int)4;
	if(var_41_bool != 0) {
		var_43_bool = var_17_int != (int)5;
		if(var_43_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		GetScene(var_29_object);
		GetPosition(var_31_cvector);
		GetEyesHeight(var_32_float);
		var_44_float = GetByIndex(var_31_cvector, 1);
		var_46_float = var_32_float / (int)2;
		var_44_float = var_44_float + var_46_float;
		SetByIndex(var_31_cvector, 1) = var_44_float;
		AddActorByType(var_30_object, "scripted", var_29_object, var_31_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_30_object = 0;
		var_29_object = 0;
	}
	var_50_bool = var_16_object == 0; //@ne
	if(var_50_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_33_int);
	var_52_bool = var_33_int < (int)0;
	if(var_52_bool != 0) {
		return 20;
	}
	@@var_16_object:GetPosition(var_34_cvector);
	GetPosition(var_35_cvector);
	GetDirection(var_36_cvector);
	var_37_cvector = var_35_cvector - var_34_cvector;
	var_53_float = GetByIndex(var_37_cvector, 0);
	var_54_float = GetByIndex(var_36_cvector, 0);
	var_55_float = var_53_float * var_54_float;
	var_56_float = GetByIndex(var_37_cvector, 2);
	var_57_float = GetByIndex(var_36_cvector, 2);
	var_58_float = var_56_float * var_57_float;
	var_59_int = var_55_float + var_58_float;
	var_61_bool = var_59_int >= (int)0;
	if(var_61_bool != 0) {
		var_38_string = "fhit";
	} else {
		var_38_string = "bhit";
	}
	var_64_int = var_38_string + "1";
	var_66_int = var_38_string + "2";
	FadeSecondaryAnimation("hit_react", var_64_int, var_66_int, (int)-10);
	return 20;
	
}


func_948(var_2_int, var_93_string)
{
	var_94_bool = 0;
	func_1650(var_94_bool);
	var_95_bool = var_94_bool == 0; //@nz
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_bool = var_93_string == var_2_int;
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_string = "";
	var_93_string = var_97_string;
	func_1466(var_97_string);
	var_2_int = var_93_string;
	return 0;
}


func_1462()
{
	CameraSwitchToNormal();
	return 0;
}


func_697(var_29_object)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_object = Obj(); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0);
	var_50_bool = var_29_object == 0; //@ne
	if(var_50_bool != 0) {
		var_51_string = "";
		func_784("fdie");
	} else {
		@@var_29_object:GetPosition(var_40_cvector);
		GetPosition(var_41_cvector);
		GetDirection(var_42_cvector);
		var_43_cvector = var_41_cvector - var_40_cvector;
		var_54_float = GetByIndex(var_43_cvector, 0);
		var_55_float = GetByIndex(var_42_cvector, 0);
		var_56_float = var_54_float * var_55_float;
		var_57_float = GetByIndex(var_43_cvector, 2);
		var_58_float = GetByIndex(var_42_cvector, 2);
		var_59_float = var_57_float * var_58_float;
		var_60_int = var_56_float + var_59_float;
		var_62_bool = var_60_int >= (int)0;
		if(var_62_bool != 0) {
			var_44_string = "fdie";
		} else {
				var_44_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_29_object = var_45_object;
		var_65_bool = IsFuncExist(var_29_object, "GetScriptProperty", (int)2);
		if(var_65_bool != 0) {
			@@var_29_object:HasScriptProperty(var_46_bool, "Owner");
			var_67_bool = var_46_bool;
			if(var_67_bool != 0) {
				@@var_29_object:GetScriptProperty(var_45_object, "Owner");
				var_69_bool = var_45_object == 0; //@ne
				if(var_69_bool != 0) {
					var_29_object = var_45_object;
				}
			}
		}
		var_72_bool = IsFuncExist(var_45_object, "@GetEyesHeight", (int)1);
		if(var_72_bool != 0) {
			@@var_45_object:GetEyesHeight(var_48_float);
			var_49_cvector = CVector(0.0, 0.0, 0.0);
			var_73_float = GetByIndex(var_49_cvector, 1);
			var_48_float = var_73_float;
			SetByIndex(var_49_cvector, 1) = var_73_float;
			LookAsync(var_29_object, "head", var_49_cvector);
			var_47_bool = 1;
		} else {
			var_47_bool = 0;

		}
		PlayAnimation("all", var_44_string);
		WaitForAnimEnd();
		var_76_bool = var_47_bool;
		if(var_76_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_44_string);
		RemoveEnvelope();
		var_45_object = 0;
	}
	return 20;
	
}


func_442(var_0_object)
{
	var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0);
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_224_cvector);
	GetPFPosition(var_225_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1466(var_97_string)
{
	var_98_float = 0; var_99_float = 0; var_100_float = 0; var_101_float = 0;
	var_103_int = "playing " + var_97_string;
	Trace(var_103_int);
	lshGetAnimTimes(var_97_string, var_100_float, var_101_float);
	lshPlayAnimation(var_100_float, var_101_float);
	var_105_int = "start: " + var_100_float;
	Trace(var_105_int);
	var_107_int = "end: " + var_101_float;
	Trace(var_107_int);
	return 4;
}


func_1600(var_85_bool)
{
	var_87_int = 0; var_88_string = "";
	func_1525(var_87_int, "ood5PatrolGuard1");
	var_92_bool = var_87_int == (int)0;
	if(var_92_bool != 0) {
		var_85_bool = 1;
		return 0;
	}
	var_85_bool = 0;
	return 0;
}


func_1484()
{
	var_15_bool = 0;
	func_1650(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_461(var_0_object, var_183_bool)
{
	var_184_bool = 0; var_185_bool = 0;
	var_188_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_188_bool != 0) {
		@@@var_0_object:IsAttacking(var_185_bool);
		var_185_bool = var_183_bool;
		return 2;
	}
	var_183_bool = 0;
	return 2;
}


func_1612(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetMainOutdoorScene(var_31_object);
	var_33_bool = var_31_object == 0; //@ne
	if(var_33_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_32_object = 0;
		var_32_object = var_28_object;
		return 4;
	}
	@@var_31_object:GetMap(var_32_object);
	var_32_object = var_28_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1491(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	self(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_472(var_2_int, var_4_int)
{
	var_245_float = 0; var_246_int = 0; var_247_float = 0; var_248_int = 0;
	var_249_bool = var_2_int == 0; //@nz
	if(var_249_bool != 0) {
		return 4;
	}
	var_250_int = var_4_int;
	if(var_250_int != 0) {
		var_4_int = var_4_int + (int)-1;
		var_253_bool = var_4_int > (int)0;
		if(var_253_bool != 0) {
			return 4;
		}
	}
	rand(var_247_float);
	var_254_float = 0;
	func_510(var_254_float);
	var_255_bool = var_247_float < var_254_float;
	if(var_255_bool != 0) {
		irand(var_248_int, var_2_int);
		var_248_int = var_248_int + (int)1;
		var_258_int = "attack" + var_248_int;
		Speak(var_258_int);
		var_259_int = 0;
		func_508(var_259_int);
		var_4_int = var_259_int;
	}
	return 4;
}


func_345(var_349_bool, var_350_float)
{
	var_351_float = 0; var_352_bool = 0; var_353_float = 0; var_354_bool = 0;
	rand(var_353_float);
	var_355_bool = var_353_float < var_350_float;
	if(var_355_bool != 0) {

	Label_350:
		IsAnimationPlaying(var_354_bool);
		var_356_bool = var_354_bool == 0; //@nz
		if(var_356_bool != 0) {
		} else {
			var_357_bool = 0;
			func_409(var_354_bool, var_357_bool);
			if(var_357_bool != 0) {
				var_349_bool = 1;
				sync();
				goto Label_350;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_367;
	
Label_367:
	var_349_bool = 0;
	return 4;
	
}


func_1497(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_52_cvector | var_52_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_55_float;
	return 2;
}


func_1629(var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("player", var_71_int);
	var_74_bool = var_71_int == (int)0;
	if(var_74_bool != 0) {
		var_69_int = 200001;
		return 2;
	EMIT "GOTO 0x66c";
	}
	var_76_bool = var_71_int == (int)1;
	if(var_76_bool != 0) {
		var_69_int = 200002;
		return 2;
	}
	var_69_int = 200003;
	return 2;
}


func_226(var_0_object, var_263_float, var_264_int)
{
	var_265_object = Obj(); var_266_float = 0; var_267_float = 0; var_268_object = Obj(); var_269_float = 0; var_270_float = 0;
	var_272_float = var_263_float * (float)0.8999999761581421;
	GetVictim(var_272_float, var_268_object);
	ReportAttack(var_0_object);
	var_273_bool = var_268_object == var_0_object;
	if(var_273_bool != 0) {
		var_274_float = 0; var_275_object = Obj(); var_276_int = 0;
		var_268_object = var_275_object;
		var_264_int = var_276_int;
		func_15(var_276_int);
		var_274_float = var_269_float;
		var_277_float = 0; var_278_object = Obj(); var_279_float = 0; var_280_int = 0;
		var_268_object = var_278_object;
		var_269_float = var_279_float;
		var_281_int = 0; var_282_object = Obj(); var_283_int = 0;
		var_268_object = var_282_object;
		var_264_int = var_283_int;
		func_18(var_283_int);
		var_281_int = var_280_int;
		func_1199(var_277_float, var_278_object, var_279_float, var_280_int);
		var_277_float = var_270_float;
		var_330_int = 0;
		func_504(var_330_int);
		ReportHit(var_0_object, var_330_int, var_270_float, var_269_float);
		var_331_object = Obj(); var_332_float = 0;
		var_268_object = var_331_object;
		var_270_float = var_332_float;
		func_506();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1507(var_313_float, var_314_float, var_315_float)
{
	var_318_bool = var_314_float < var_315_float;
	if(var_318_bool != 0) {
		var_314_float = var_313_float;
	} else {
		var_315_float = var_313_float;
	}
	return 0;
	
}


func_1514(var_323_float, var_324_float, var_325_float, var_326_float)
{
	var_327_bool = var_324_float < var_325_float;
	if(var_327_bool != 0) {
		var_325_float = var_323_float;
		return 0;
	}
	var_328_bool = var_324_float > var_326_float;
	if(var_328_bool != 0) {
		var_326_float = var_323_float;
		return 0;
	}
	var_324_float = var_323_float;
	return 0;
}


func_875(var_0_object, var_1_int, var_2_int, var_3_bool, var_78_object, var_79_object)
{
	var_0_object = var_79_object;
	var_1_int = var_78_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_85_bool = 0; var_86_object = Obj();
		var_86_object = var_1_int;
		func_1600(var_86_object);
		if(var_85_bool != 0) {
			var_93_string = "";
			func_948(var_79_object, "Neutral");
			@@@var_0_object:SetMessage((int)11690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11691, (int)12894, (int)12893);
		} else {
				var_120_string = "";
				func_948(var_79_object, "Neutral");
				@@@var_0_object:SetMessage((int)12483);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12484, (int)-1, (int)13652);
				goto Label_918;
		}
	}
Label_918:
	var_112_bool = 0;
	func_1650(var_112_bool);
	if(var_112_bool != 0) {

	Label_922:
		lshWaitForAnimEnd();
		var_113_bool = var_3_bool;
		if(var_113_bool != 0) {
		} else {
			var_114_string = "";
			var_114_string = var_2_int;
			func_1466(var_114_string);
			goto Label_922;
	}
		PlayAnimation("all", "idle");

	Label_937:
		WaitForAnimEnd();
		var_117_bool = var_3_bool;
		if(var_117_bool != 0) {
			goto Label_947;
		}
		PlayAnimation("all", "idle");
		goto Label_937;

	}
	goto Label_947;
	
Label_947:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x36f";


func_1646(var_67_int)
{
	var_67_int = 4031;
	return 0;
}


func_1134(var_14_object)
{
	var_15_int = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	TaskCall(3);
	func_812(var_17_object, var_15_int, var_16_object);
	TaskReturn();
	return 0;
}


func_1648(var_68_string)
{
	var_68_string = "ui/NPC_Black.png";
	return 0;
}


func_369(var_0_object, var_191_bool, var_192_float)
{
	var_193_bool = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_float = 0; var_198_bool = 0; var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); var_202_float = 0;
	
Label_370:
	IsAnimationPlaying(var_198_bool);
	var_203_bool = var_198_bool == 0; //@nz
	if(var_203_bool != 0) {
	} else {
		var_204_bool = 0;
		func_409(var_202_float, var_204_bool);
		if(var_204_bool != 0) {
			var_191_bool = 1;
			return 10;
		}
		var_229_bool = 0; var_230_object = Obj();
		var_230_object = var_0_object;
		func_1304(var_229_bool, var_230_object);
		var_231_bool = var_229_bool == 0; //@nz
		if(var_231_bool != 0) {
			var_191_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_199_cvector);
		GetPFPosition(var_200_cvector);
		var_201_cvector = var_199_cvector - var_200_cvector;
		var_202_float = var_201_cvector | var_201_cvector;
		var_232_float = var_192_float * var_192_float;
		var_233_bool = var_202_float < var_232_float;
		if(var_233_bool != 0) {
			var_234_bool = 0; var_235_float = 0;
			var_192_float = var_235_float;
			func_265(var_201_cvector, var_202_float, var_234_bool, var_235_float);
			var_191_bool = 1;
			sync();
			goto Label_370;
		}
		return 10;
	}
	var_191_bool = 0;
	return 10;
	
}


func_1650(var_94_bool)
{
	var_94_bool = 0;
	return 0;
}


func_1395(var_169_object)
{
	var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0);
	@@var_169_object:GetPosition(var_173_cvector);
	GetPosition(var_174_cvector);
	var_175_cvector = var_173_cvector - var_174_cvector;
	var_176_float = GetByIndex(var_175_cvector, 0);
	var_177_float = GetByIndex(var_175_cvector, 2);
	RotateAsync(var_176_float, var_177_float);
	return 6;
}


func_1263(var_81_bool, var_82_object)
{
	var_83_bool = 0; var_84_bool = 0;
	@@var_82_object:IsDead(var_84_bool);
	var_84_bool = var_81_bool;
	return 2;
}


func_1268(var_70_bool, var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); var_74_object = Obj(); var_75_object = Obj();
	var_76_bool = var_71_object == 0; //@ne
	if(var_76_bool != 0) {
		var_70_bool = 0;
		return 4;
	}
	var_77_bool = 0;
	var_77_bool = 0;
	var_80_bool = IsFuncExist(var_71_object, "IsDead", (int)1);
	if(var_80_bool != 0) {
		var_81_bool = 0; var_82_object = Obj();
		var_71_object = var_82_object;
		func_1263(var_81_bool, var_82_object);
		if(var_81_bool != 0) {
			var_77_bool = 1;
		}
	}
	if(var_77_bool != 0) {
		var_70_bool = 0;
		return 4;
	}
	GetScene(var_74_object);
	var_85_bool = var_74_object == 0; //@ne
	if(var_85_bool != 0) {
		var_70_bool = 0;
		return 4;
	}
	@@var_71_object:GetScene(var_75_object);
	var_86_bool = var_74_object != var_75_object;
	if(var_86_bool != 0) {
		var_70_bool = 0;
		return 4;
	}
	var_70_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1652(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	AddItem(var_15_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_15_bool, "alpha_pills", (int)0, (int)2);
	var_22_object = Obj();
	var_13_object = var_22_object;
	TaskCall(2);
	func_663(var_22_object);
	TaskReturn();
	return 2;
}


func_1525(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
	return 2;
}


func_504(var_330_int)
{
	var_330_int = 0;
	return 0;
}


func_506()
{
	return 0;
}


func_508(var_259_int)
{
	var_259_int = 1;
	return 0;
}


func_510(var_254_float)
{
	var_254_float = 0.5;
	return 0;
}


