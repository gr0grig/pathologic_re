// @IMPORTS: FindActor/2,HasAnimation/3,IsExisting3DSound/2,IsPlayerActor/2,GetPFPosition/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,GetPosition/1,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,CreateDialog/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FollowPath/3,Rotate/3,WaitForAnimEnd/1,StopGroup0/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,Trigger/2,AddItem/4,GetProperty/2,SignalDeath/1,GetVariable/2
// @STRINGS: W:player|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|W:kill_player|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |W:quest_d2_02|W:player_attack|W:patrol1_unload|W:revolver_ammo|W:alpha_pills|W:ui/NPC_Black.png
// @GLOBALS: 0:bool:,1:object:
// @RUN_OP: 0x3d0
// @RUN_TASK: 5
// @TASK_0: vars=object,int,int,bool,int params=0
// @TASK_1: vars=bool,object params=6
// @EVENT_7: op=0x266 vars=int
// @EVENT_10: op=0x278 vars=object
// @EVENT_41: op=0x283 vars=object
// @TASK_2: vars= params=1
// @EVENT_0: op=0x2a4 vars=object
// @EVENT_22: op=0x319 vars=object,int,float,float
// @EVENT_16: op=0x31b vars=object,string
// @EVENT_41: op=0x31d vars=object
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3a3 vars=int,int
// @TASK_5: vars=cvector,cvector params=0
// @EVENT_0: op=0x3d8 vars=object
// @EVENT_26: op=0x3e5 vars=string
// @STANDALONE_EVENT_17: op=0x5a8 vars=object
// @STANDALONE_EVENT_6: op=0x5b9 vars=
// @STANDALONE_EVENT_22: op=0x5d1 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x5d9 vars=object,string
// @STANDALONE_EVENT_41: op=0x5e6 vars=object
// @PE: 0xf,0x12,0x1fa,0x266,0x278,0x283,0x28c,0x297,0x303,0x319,0x31b,0x31d,0x35e,0x393,0x3a3,0x3c8,0x3d8,0x3e5,0x444,0x55f,0x58a,0x591,0x5d1,0x5e6

task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_16_bool = var_14_cvector != (int)0;
	if(var_16_bool != 0) {
		return 0;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_18_object = var_1_int;
	func_652(var_17_bool, var_18_object);
	var_53_bool = var_17_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	RequestClearPath(var_14_cvector);
	return 0;
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	func_636(var_14_cvector);
	var_14_cvector = Obj();
	func_1510();
	return 0;
}


task_2_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_15_bool = 0; var_16_bool = 0;
	IsOverrideActive(var_16_bool);
	var_17_bool = var_16_bool == 0; //@nz
	if(var_17_bool != 0) {
		WorkWithCorpse(var_14_cvector);
	}
	return 2;
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_cvector, var_17_cvector)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool, var_14_cvector, var_15_cvector)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	return 0;
}


task_4_event_11(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_cvector, var_15_cvector)
{
	if((int)1 != 0) {
		func_1397();
		var_19_bool = var_14_cvector == (int)8308;
		if(var_19_bool != 0) {
			var_20_string = "";
			func_915(var_15_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)7526);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7527, (int)-1, (int)8309);
			return 0;
		}
		var_3_bool = true;
		var_39_bool = 0;
		func_1537(var_39_bool);
		if(var_39_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3a4";
	
}


task_5_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_bool = 0;
	func_1007(var_15_bool);
	if(var_15_bool != 0) {
		func_1087();
		var_16_object = Obj();
		var_14_object = var_16_object;
		func_968(var_16_object);
	}
	return 0;
}


task_5_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_string)
{
	var_16_bool = var_14_string == "kill_player";
	if(var_16_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	return 0;
}


event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	var_17_bool = GlobalVars[0];
	if(var_17_bool != 0) {
		return 2;
	}
	IsPlayerActor(var_14_object, var_16_bool);
	var_18_bool = var_16_bool;
	if(var_18_bool != 0) {
		var_19_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		var_20_bool = 0; var_21_string = ""; var_22_string = "";
		func_1436(var_20_bool, "quest_d2_02", "player_attack");
	}
	return 2;
}


event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_string = ""; var_16_string = "";
	func_1436(var_14_bool, "quest_d2_02", "patrol1_unload");
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0;
	var_14_object = var_18_object;
	var_15_int = var_19_int;
	var_16_float = var_20_float;
	func_1241(var_19_int, var_20_float);
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0;
	var_19_bool = var_15_string == "health";
	if(var_19_bool != 0) {
		GetProperty("health", var_17_float);
		var_22_bool = var_17_float <= (int)0;
		if(var_22_bool != 0) {
			SignalDeath(var_14_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_1471(var_15_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	func_1009(var_12_cvector, var_13_cvector);
	return 0;
}


func_512(var_0_object, var_1_int, var_109_bool, var_110_object, var_111_float, var_112_float, var_113_bool, var_114_bool)
{
	var_117_bool = 0; var_118_bool = 0; var_119_object = Obj(); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_float = 0; var_124_object = Obj(); var_125_bool = 0; var_126_bool = 0; var_127_object = Obj(); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_object = Obj();
	var_0_object = false;
	var_1_int = var_110_object;
	var_114_bool = var_126_bool;
	
Label_516:
	var_133_bool = 0; var_134_object = Obj();
	var_110_object = var_134_object;
	func_652(var_133_bool, var_134_object);
	var_137_bool = var_133_bool == 0; //@nz
	if(var_137_bool != 0) {
		var_109_bool = 0;
		return 16;
	}
	@@var_110_object:GetPosition(var_128_cvector);
	GetPosition(var_129_cvector);
	var_130_cvector = var_128_cvector - var_129_cvector;
	var_131_float = var_130_cvector | var_130_cvector;
	var_138_bool = 0;
	var_138_bool = 0;
	var_140_bool = var_112_float > (int)0;
	if(var_140_bool != 0) {
		var_141_float = var_112_float * var_112_float;
		var_142_bool = var_131_float > var_141_float;
		if(var_142_bool != 0) {
			var_138_bool = 1;
		}
	}
	if(var_138_bool != 0) {
		Stop();
		var_109_bool = 0;
		return 16;
	}
	var_143_float = var_111_float * var_111_float;
	var_144_bool = var_131_float > var_143_float;
	if(var_144_bool != 0) {
		@@var_110_object:GetPFPosition(var_128_cvector);
		FindPathTo(var_132_object, var_128_cvector);
		var_145_bool = var_132_object != 0; //@nn
		if(var_145_bool != 0) {
			var_132_object = var_127_object;
			var_132_object = 0;
		}
		var_146_bool = var_127_object != 0; //@nn
		if(var_146_bool != 0) {
			var_147_bool = var_126_bool;
			if(var_147_bool == 0) goto Label_565;
			var_126_bool = 0;
			RotatePath(var_127_object, var_125_bool);
			var_148_bool = var_125_bool == 0; //@nz
			if(var_148_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_151_string = "";
				func_659(var_151_string);
				var_152_string = "";
				func_661(var_152_string);
				FollowPath(var_127_object, var_113_bool, var_125_bool, var_151_string, var_152_string);
				var_153_bool = var_125_bool == 0; //@nz
				if(var_153_bool != 0) {
					var_154_object = var_0_object;
					if(var_154_object != 0) {
						var_127_object = 0;
						goto Label_612;
					EMIT "GOTO 0x249";
					}
				} else {
					var_127_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_125_bool);
					var_157_bool = var_125_bool == 0; //@nz
					if(var_157_bool != 0) {
						var_158_object = var_0_object;
						if(var_158_object != 0) {
							var_127_object = 0;
							goto Label_612;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_612;
	}
			var_132_object = 0;
			goto Label_610;

		Label_610:
			var_127_object = 0;

		}
		goto Label_516;
	}
Label_612:
	var_109_bool = !var_0_object;
	return 16;
	
}


func_1537(var_88_bool)
{
	var_88_bool = 0;
	return 0;
}


func_0()
{
	var_22_object = Obj(); var_23_object = Obj();
	FindActor(var_23_object, "player");
	var_25_bool = var_23_object == 0; //@nz
	if(var_25_bool != 0) {
		return 2;
	}
	var_26_object = Obj(); var_27_bool = 0; var_28_float = 0;
	var_23_object = var_26_object;
	func_21(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_23_object, var_26_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_771(var_47_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_47_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_47_string);
	RemoveEnvelope();
	return 0;
}


func_636(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1414(var_27_float, var_28_cvector, var_29_cvector)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
	var_31_cvector = var_29_cvector - var_28_cvector;
	var_27_float = var_31_cvector | var_31_cvector;
	return 2;
}


func_265(var_0_object, var_1_int, var_236_bool, var_237_float)
{
	var_238_int = 0; var_239_bool = 0; var_240_int = 0; var_241_bool = 0;
	irand(var_240_int, var_1_int);
	var_240_int = var_240_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_246_int = "attack_begin" + var_240_int;
	PlayAnimation("all", var_246_int);
	WaitForAnimEnd();
	func_472(var_240_int, var_241_bool);
	var_262_bool = 0; var_263_object = Obj();
	var_263_object = var_0_object;
	func_1217(var_262_bool, var_263_object);
	var_264_bool = var_262_bool == 0; //@nz
	if(var_264_bool != 0) {
		StopAsync();
		var_236_bool = 0;
		return 4;
	}
	var_265_float = 0; var_266_int = 0;
	var_237_float = var_265_float;
	var_240_int = var_266_int;
	func_226(var_241_bool, var_265_float, var_266_int);
	var_337_int = "attack_middle" + var_240_int;
	HasAnimation(var_241_bool, "all", var_337_int);
	var_338_bool = var_241_bool;
	if(var_338_bool != 0) {
		var_341_int = "attack_middle" + var_240_int;
		PlayAnimation("all", var_341_int);
		WaitForAnimEnd();
		var_342_bool = 0; var_343_object = Obj();
		var_343_object = var_0_object;
		func_1217(var_342_bool, var_343_object);
		var_344_bool = var_342_bool == 0; //@nz
		if(var_344_bool != 0) {
			StopAsync();
			var_236_bool = 0;
			return 4;
		}
		var_345_float = 0; var_346_int = 0;
		var_237_float = var_345_float;
		var_240_int = var_346_int;
		func_226(var_241_bool, var_345_float, var_346_int);
	}
	SetAttackState((bool)0);
	var_350_int = "attack_end" + var_240_int;
	PlayAnimation("all", var_350_int);
	var_351_bool = 0; var_352_float = 0;
	func_345(var_351_bool, (float)0.75);
	StopAsync();
	var_236_bool = 1;
	return 4;
}


func_1418(var_315_float, var_316_float, var_317_float)
{
	var_320_bool = var_316_float < var_317_float;
	if(var_320_bool != 0) {
		var_316_float = var_315_float;
	} else {
		var_317_float = var_315_float;
	}
	return 0;
	
}


func_652(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj();
	var_134_object = var_136_object;
	func_1217(var_135_bool, var_136_object);
	var_135_bool = var_133_bool;
	return 0;
}


func_15(var_276_float)
{
	var_276_float = 0.30000001192092896;
	return 0;
}


func_1425(var_325_float, var_326_float, var_327_float, var_328_float)
{
	var_329_bool = var_326_float < var_327_float;
	if(var_329_bool != 0) {
		var_327_float = var_325_float;
		return 0;
	}
	var_330_bool = var_326_float > var_328_float;
	if(var_330_bool != 0) {
		var_328_float = var_325_float;
		return 0;
	}
	var_326_float = var_325_float;
	return 0;
}


func_18(var_283_int)
{
	var_283_int = 0;
	return 0;
}


func_659(var_151_string)
{
	var_151_string = "walk";
	return 0;
}


func_915(var_2_int, var_87_string)
{
	var_88_bool = 0;
	func_1537(var_88_bool);
	var_89_bool = var_88_bool == 0; //@nz
	if(var_89_bool != 0) {
		return 0;
	}
	var_90_bool = var_87_string == var_2_int;
	if(var_90_bool != 0) {
		return 0;
	}
	var_91_string = "";
	var_87_string = var_91_string;
	func_1379(var_91_string);
	var_2_int = var_87_string;
	return 0;
}


func_21(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_26_object, var_27_bool, var_28_float, var_115_bool)
{
	var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_float = 0; var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_float = 0;
	var_1_int = 0;
	
Label_23:
	var_52_int = var_1_int + (int)1;
	var_53_int = "attack_begin" + var_52_int;
	HasAnimation(var_39_bool, "all", var_53_int);
	var_54_bool = var_39_bool == 0; //@nz
	if(var_54_bool != 0) {
	} else {
									var_1_int = var_1_int + (int)1;
									goto Label_23;
	}
	var_2_int = 0;
	
Label_37:
	var_57_int = var_2_int + (int)1;
	var_58_int = "attack" + var_57_int;
	IsExisting3DSound(var_40_bool, var_58_int);
	var_59_bool = var_40_bool == 0; //@nz
	if(var_59_bool != 0) {
	} else {
								var_2_int = var_2_int + (int)1;
								goto Label_37;

	}
	var_4_int = 0;
	var_62_bool = IsFuncExist(var_26_object, "@GetAttackDistance", (int)1);
	if(var_62_bool != 0) {
		@@var_26_object:GetAttackDistance(var_41_float);
		var_41_float = var_41_float + (int)50;
	} else {
							var_28_float = var_41_float;

	}
	var_65_bool = var_41_float >= (int)150;
	if(var_65_bool != 0) {
		var_41_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_26_object;
	IsPlayerActor(var_0_object, var_44_bool);
	var_66_bool = var_27_bool;
	if(var_66_bool != 0) {
		var_45_bool = 0;
	} else {
						var_45_bool = 1;

	}
Label_73:
	var_67_bool = 0;
	var_67_bool = 0;
	var_68_bool = 0; var_69_object = Obj();
	var_69_object = var_0_object;
	func_1217(var_68_bool, var_69_object);
	if(var_68_bool != 0) {
		var_102_bool = var_3_bool == 0; //@nz
		if(var_102_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		@@@var_0_object:GetPFPosition(var_42_cvector);
		GetPFPosition(var_43_cvector);
		var_46_cvector = var_42_cvector - var_43_cvector;
		var_47_float = var_46_cvector | var_46_cvector;
		var_104_int = (float)400.0 + var_41_float;
		var_106_int = (float)400.0 + var_41_float;
		var_107_float = var_104_int * var_106_int;
		var_108_bool = var_47_float >= var_107_float;
		if(var_108_bool != 0) {
			var_109_bool = 0; var_110_object = Obj(); var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_bool = 0;
			var_110_object = var_0_object;
			var_41_float = var_111_float;
			TaskCall(1);
			func_512(var_115_bool, var_116_object, var_109_bool, var_110_object, var_111_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_162_bool = var_115_bool == 0; //@nz
			if(var_162_bool != 0) {
			} else {
		} else {
				var_168_float = var_28_float * var_28_float;
				var_169_bool = var_47_float >= var_168_float;
				if(var_169_bool != 0) {
					var_170_bool = (bool)0 == 0; //@nz
					if(var_170_bool != 0) {
						var_171_object = Obj();
						var_171_object = var_0_object;
						func_1308(var_171_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_45_bool = 1;
					}
					rand(var_48_float);
					var_182_bool = 0;
					var_184_bool = var_48_float < (float)0.6000000238418579;
					if(var_184_bool != 1) {
						var_185_bool = 0;
						func_461((bool)1, var_185_bool);
						if(var_185_bool != 1) {
							var_182_bool = 0;
						}
					}
					if(var_182_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_193_bool = 0; var_194_float = 0;
						var_28_float = var_194_float;
						func_369(var_48_float, var_193_bool, var_194_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_363_bool = 0;
						func_461(var_48_float, var_363_bool);
						var_364_bool = var_363_bool == 0; //@nz
						if(var_364_bool == 0) goto Label_199;
						var_365_bool = 0; var_366_object = Obj();
						var_366_object = var_0_object;
						func_1217(var_365_bool, var_366_object);
						var_367_bool = var_365_bool == 0; //@nz
						if(var_367_bool != 0) {
							goto Label_209;
						}
						@@@var_0_object:GetPFPosition(var_42_cvector);
						GetPFPosition(var_43_cvector);
						var_46_cvector = var_42_cvector - var_43_cvector;
						var_47_float = var_46_cvector | var_46_cvector;
						var_368_float = var_28_float * var_28_float;
						var_369_bool = var_47_float < var_368_float;
						if(var_369_bool == 0) goto Label_199;
						var_370_bool = 0; var_371_float = 0;
						var_28_float = var_371_float;
						func_265(var_47_float, var_48_float, var_370_bool, var_371_float);
						var_372_bool = var_370_bool == 0; //@nz
						if(var_372_bool == 0) goto Label_199;
						goto Label_209;
				}
					var_373_bool = 0; var_374_float = 0;
					var_28_float = var_374_float;
					func_265(var_47_float, var_48_float, var_373_bool, var_374_float);
					var_375_bool = var_373_bool == 0; //@nz
					if(var_375_bool != 0) {
						goto Label_209;
					}
					var_45_bool = 1;

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
	var_163_bool = var_3_bool;
	if(var_163_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_166_bool = var_44_bool;
	if(var_166_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_661(var_152_string)
{
	var_152_string = "run";
	return 0;
}


func_663(var_24_object)
{
	var_25_object = Obj();
	var_24_object = var_25_object;
	func_684(var_25_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_672:
	Hold();
	goto Label_672;
}
EMIT "Return(); Pop(0)";


func_1176(var_83_bool, var_84_object)
{
	var_85_bool = 0; var_86_bool = 0;
	@@var_84_object:IsDead(var_86_bool);
	var_86_bool = var_83_bool;
	return 2;
}


func_409(var_0_object, var_206_bool)
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_float = 0;
	var_217_bool = 0; var_218_object = Obj();
	var_218_object = var_0_object;
	func_1217(var_217_bool, var_218_object);
	var_219_bool = var_217_bool == 0; //@nz
	if(var_219_bool != 0) {
		var_206_bool = 0;
		return 10;
	}
	var_220_bool = 0;
	func_461(var_216_float, var_220_bool);
	if(var_220_bool != 0) {
		@@@var_0_object:GetPFPosition(var_212_cvector);
		GetPFPosition(var_213_cvector);
		var_214_cvector = var_212_cvector - var_213_cvector;
		var_215_float = var_214_cvector | var_214_cvector;
		@@@var_0_object:GetAttackDistance(var_216_float);
		var_216_float = var_216_float + (int)50;
		var_222_float = var_216_float * var_216_float;
		var_223_bool = var_215_float <= var_222_float;
		if(var_223_bool != 0) {
			func_442(var_216_float);
			var_206_bool = 1;
			return 10;
		}
	}
	var_206_bool = 0;
	return 10;
}


func_1308(var_171_object)
{
	var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0);
	@@var_171_object:GetPosition(var_175_cvector);
	GetPosition(var_176_cvector);
	var_177_cvector = var_175_cvector - var_176_cvector;
	var_178_float = GetByIndex(var_177_cvector, 0);
	var_179_float = GetByIndex(var_177_cvector, 2);
	RotateAsync(var_178_float, var_179_float);
	return 6;
}


func_1181(var_72_bool, var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); var_77_object = Obj();
	var_78_bool = var_73_object == 0; //@ne
	if(var_78_bool != 0) {
		var_72_bool = 0;
		return 4;
	}
	var_79_bool = 0;
	var_79_bool = 0;
	var_82_bool = IsFuncExist(var_73_object, "IsDead", (int)1);
	if(var_82_bool != 0) {
		var_83_bool = 0; var_84_object = Obj();
		var_73_object = var_84_object;
		func_1176(var_83_bool, var_84_object);
		if(var_83_bool != 0) {
			var_79_bool = 1;
		}
	}
	if(var_79_bool != 0) {
		var_72_bool = 0;
		return 4;
	}
	GetScene(var_76_object);
	var_87_bool = var_76_object == 0; //@ne
	if(var_87_bool != 0) {
		var_72_bool = 0;
		return 4;
	}
	@@var_73_object:GetScene(var_77_object);
	var_88_bool = var_76_object != var_77_object;
	if(var_88_bool != 0) {
		var_72_bool = 0;
		return 4;
	}
	var_72_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1436(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, var_15_string);
	var_19_bool = var_18_object == 0; //@ne
	if(var_19_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	Trigger(var_18_object, var_16_string);
	var_14_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_799(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_object = var_18_object;
	var_28_bool = 0; var_29_object = Obj();
	var_18_object = var_29_object;
	func_1319(var_28_bool, var_29_object);
	var_68_bool = var_28_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_69_int = 0;
	func_1533(var_69_int);
	@@var_24_object:SetNPCName(var_69_int);
	var_70_string = "";
	func_1535(var_70_string);
	@@var_24_object:SetPhoto(var_70_string);
	var_71_int = 0;
	func_1516(var_71_int);
	@@var_24_object:SetPlayerName(var_71_int);
	IsOverrideActive(var_25_bool);
	var_79_bool = var_25_bool;
	if(var_79_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	DoDialog(var_24_object);
	var_80_object = Obj(); var_81_object = Obj();
	var_18_object = var_80_object;
	var_24_object = var_81_object;
	TaskCall(4);
	func_862(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object);
	TaskReturn();
	@@var_24_object:IsDialogEnd(var_27_bool);
	
Label_844:
	var_114_bool = var_27_bool == 0; //@nz
	if(var_114_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_844;
	}
	var_18_object = Obj();
	func_1375();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1319(var_28_bool, var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0;
	@@var_29_object:GetPosition(var_39_cvector);
	@@var_29_object:GetEyesHeight(var_38_float);
	var_46_float = GetByIndex(var_39_cvector, 1);
	var_46_float = var_46_float + var_38_float;
	SetByIndex(var_39_cvector, 1) = var_46_float;
	GetPosition(var_40_cvector);
	GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_40_cvector, 1);
	var_47_float = var_47_float + var_38_float;
	SetByIndex(var_40_cvector, 1) = var_47_float;
	var_41_cvector = var_39_cvector - var_40_cvector;
	var_48_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_49_int = var_41_cvector | var_41_cvector;
	var_50_float = sqrt(var_49_int);
	var_41_cvector = var_41_cvector / var_50_float;
	var_42_cvector = -var_41_cvector;
	var_52_float = var_41_cvector * (int)70;
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	var_54_cvector = var_42_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1404(var_53_cvector, var_54_cvector);
	var_62_float = var_53_cvector * (int)25;
	var_63_int = var_52_float + var_62_float;
	var_43_cvector = var_63_int - CVector(0.0, 10.0, 0.0);
	var_44_cvector = var_40_cvector + var_43_cvector;
	IsOverrideActive(var_45_bool);
	var_65_bool = var_45_bool;
	if(var_65_bool != 0) {
		var_28_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_44_cvector, var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	Rotate(var_66_float, var_67_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 16;
}


func_684(var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_object = Obj(); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0);
	var_46_bool = var_25_object == 0; //@ne
	if(var_46_bool != 0) {
		var_47_string = "";
		func_771("fdie");
	} else {
		@@var_25_object:GetPosition(var_36_cvector);
		GetPosition(var_37_cvector);
		GetDirection(var_38_cvector);
		var_39_cvector = var_37_cvector - var_36_cvector;
		var_50_float = GetByIndex(var_39_cvector, 0);
		var_51_float = GetByIndex(var_38_cvector, 0);
		var_52_float = var_50_float * var_51_float;
		var_53_float = GetByIndex(var_39_cvector, 2);
		var_54_float = GetByIndex(var_38_cvector, 2);
		var_55_float = var_53_float * var_54_float;
		var_56_int = var_52_float + var_55_float;
		var_58_bool = var_56_int >= (int)0;
		if(var_58_bool != 0) {
			var_40_string = "fdie";
		} else {
				var_40_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_25_object = var_41_object;
		var_61_bool = IsFuncExist(var_25_object, "GetScriptProperty", (int)2);
		if(var_61_bool != 0) {
			@@var_25_object:HasScriptProperty(var_42_bool, "Owner");
			var_63_bool = var_42_bool;
			if(var_63_bool != 0) {
				@@var_25_object:GetScriptProperty(var_41_object, "Owner");
				var_65_bool = var_41_object == 0; //@ne
				if(var_65_bool != 0) {
					var_25_object = var_41_object;
				}
			}
		}
		var_68_bool = IsFuncExist(var_41_object, "@GetEyesHeight", (int)1);
		if(var_68_bool != 0) {
			@@var_41_object:GetEyesHeight(var_44_float);
			var_45_cvector = CVector(0.0, 0.0, 0.0);
			var_69_float = GetByIndex(var_45_cvector, 1);
			var_44_float = var_69_float;
			SetByIndex(var_45_cvector, 1) = var_69_float;
			LookAsync(var_25_object, "head", var_45_cvector);
			var_43_bool = 1;
		} else {
			var_43_bool = 0;

		}
		PlayAnimation("all", var_40_string);
		WaitForAnimEnd();
		var_72_bool = var_43_bool;
		if(var_72_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_40_string);
		RemoveEnvelope();
		var_41_object = 0;
	}
	return 20;
	
}


func_442(var_0_object)
{
	var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0);
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_226_cvector);
	GetPFPosition(var_227_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1087()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1471(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	AddItem(var_17_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_17_bool, "alpha_pills", (int)0, (int)2);
	var_24_object = Obj();
	var_15_object = var_24_object;
	TaskCall(2);
	func_663(var_24_object);
	TaskReturn();
	return 2;
}


func_1217(var_68_bool, var_69_object)
{
	var_70_int = 0; var_71_int = 0;
	var_72_bool = 0; var_73_object = Obj();
	var_69_object = var_73_object;
	func_1181(var_72_bool, var_73_object);
	var_89_bool = var_72_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_68_bool = 0;
		return 2;
	}
	var_90_bool = 0; var_91_object = Obj(); var_92_string = "";
	var_69_object = var_91_object;
	func_1100(var_90_bool, var_91_object, "noaccess");
	var_99_bool = var_90_bool == 0; //@nz
	if(var_99_bool != 0) {
		var_68_bool = 1;
		return 2;
	}
	@@var_69_object:GetProperty("noaccess", var_71_int);
	var_68_bool = var_71_int == (int)0;
	return 2;
}


func_1092(var_307_string, var_308_int)
{
	var_310_bool = var_308_int == (int)1;
	if(var_310_bool != 0) {
		var_307_string = "fire";
		return 0;
	}
	var_307_string = "phys";
	return 0;
}


func_968(var_16_object)
{
	var_17_int = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	TaskCall(3);
	func_799(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


func_1100(var_90_bool, var_91_object, var_92_string)
{
	var_93_bool = 0; var_94_bool = 0;
	var_97_bool = IsFuncExist(var_91_object, "HasProperty", (int)2);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		var_90_bool = 0;
		return 2;
	}
	@@var_91_object:HasProperty(var_92_string, var_94_bool);
	var_94_bool = var_90_bool;
	return 2;
}


func_461(var_0_object, var_185_bool)
{
	var_186_bool = 0; var_187_bool = 0;
	var_190_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_190_bool != 0) {
		@@@var_0_object:IsAttacking(var_187_bool);
		var_187_bool = var_185_bool;
		return 2;
	}
	var_185_bool = 0;
	return 2;
}


func_983()
{
	return 0;
}


func_472(var_2_int, var_4_int)
{
	var_247_float = 0; var_248_int = 0; var_249_float = 0; var_250_int = 0;
	var_251_bool = var_2_int == 0; //@nz
	if(var_251_bool != 0) {
		return 4;
	}
	var_252_int = var_4_int;
	if(var_252_int != 0) {
		var_4_int = var_4_int + (int)-1;
		var_255_bool = var_4_int > (int)0;
		if(var_255_bool != 0) {
			return 4;
		}
	}
	rand(var_249_float);
	var_256_float = 0;
	func_510(var_256_float);
	var_257_bool = var_249_float < var_256_float;
	if(var_257_bool != 0) {
		irand(var_250_int, var_2_int);
		var_250_int = var_250_int + (int)1;
		var_260_int = "attack" + var_250_int;
		Speak(var_260_int);
		var_261_int = 0;
		func_508(var_261_int);
		var_4_int = var_261_int;
	}
	return 4;
}


func_1112(var_279_float, var_280_object, var_281_float, var_282_int)
{
	var_286_int = 0; var_287_string = ""; var_288_int = 0; var_289_float = 0; var_290_float = 0; var_291_float = 0; var_292_int = 0; var_293_string = ""; var_294_int = 0; var_295_float = 0; var_296_float = 0; var_297_float = 0;
	var_298_bool = 0; var_299_object = Obj(); var_300_string = "";
	var_280_object = var_299_object;
	func_1100(var_298_bool, var_299_object, "health");
	var_301_bool = var_298_bool == 0; //@nz
	if(var_301_bool != 0) {
		var_279_float = 0.0;
		return 12;
	}
	var_302_bool = 0; var_303_object = Obj(); var_304_string = "";
	var_280_object = var_303_object;
	func_1100(var_302_bool, var_303_object, "armor");
	var_305_bool = var_302_bool == 0; //@nz
	if(var_305_bool != 0) {
		var_292_int = 0;
	} else {
			@@var_280_object:GetProperty("armor", var_292_int);
	}
	var_307_string = ""; var_308_int = 0;
	var_282_int = var_308_int;
	func_1092(var_307_string, var_308_int);
	var_293_string = "armor_" + var_307_string;
	var_311_bool = 0; var_312_object = Obj(); var_313_string = "";
	var_280_object = var_312_object;
	var_293_string = var_313_string;
	func_1100(var_311_bool, var_312_object, var_313_string);
	var_314_bool = var_311_bool == 0; //@nz
	if(var_314_bool != 0) {
		var_294_int = 0;
	} else {
		@@var_280_object:GetProperty(var_293_string, var_294_int);

	}
	var_315_float = 0; var_316_float = 0; var_317_float = 0;
	var_318_int = var_292_int + var_294_int;
	var_316_float = var_318_int / (float)100.0;
	func_1418(var_315_float, var_316_float, (float)1);
	var_315_float = var_295_float;
	@@var_280_object:GetProperty("health", var_296_float);
	var_323_int = (int)1 - var_295_float;
	var_297_float = var_281_float * var_323_int;
	var_325_float = 0; var_326_float = 0; var_327_float = 0; var_328_float = 0;
	var_326_float = var_296_float - var_297_float;
	func_1425(var_325_float, var_326_float, (float)0, (float)1);
	@@var_280_object:SetProperty("health", var_325_float);
	var_297_float = var_279_float;
	return 12;
	
}


func_345(var_351_bool, var_352_float)
{
	var_353_float = 0; var_354_bool = 0; var_355_float = 0; var_356_bool = 0;
	rand(var_355_float);
	var_357_bool = var_355_float < var_352_float;
	if(var_357_bool != 0) {

	Label_350:
		IsAnimationPlaying(var_356_bool);
		var_358_bool = var_356_bool == 0; //@nz
		if(var_358_bool != 0) {
		} else {
			var_359_bool = 0;
			func_409(var_356_bool, var_359_bool);
			if(var_359_bool != 0) {
				var_351_bool = 1;
				sync();
				goto Label_350;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_367;
	
Label_367:
	var_351_bool = 0;
	return 4;
	
}


func_1241(var_18_object, var_19_int)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_object = Obj(); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = "";
	var_41_bool = 0;
	var_41_bool = 0;
	var_43_bool = var_19_int != (int)4;
	if(var_43_bool != 0) {
		var_45_bool = var_19_int != (int)5;
		if(var_45_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		GetScene(var_31_object);
		GetPosition(var_33_cvector);
		GetEyesHeight(var_34_float);
		var_46_float = GetByIndex(var_33_cvector, 1);
		var_48_float = var_34_float / (int)2;
		var_46_float = var_46_float + var_48_float;
		SetByIndex(var_33_cvector, 1) = var_46_float;
		AddActorByType(var_32_object, "scripted", var_31_object, var_33_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_32_object = 0;
		var_31_object = 0;
	}
	var_52_bool = var_18_object == 0; //@ne
	if(var_52_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_35_int);
	var_54_bool = var_35_int < (int)0;
	if(var_54_bool != 0) {
		return 20;
	}
	@@var_18_object:GetPosition(var_36_cvector);
	GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_39_cvector = var_37_cvector - var_36_cvector;
	var_55_float = GetByIndex(var_39_cvector, 0);
	var_56_float = GetByIndex(var_38_cvector, 0);
	var_57_float = var_55_float * var_56_float;
	var_58_float = GetByIndex(var_39_cvector, 2);
	var_59_float = GetByIndex(var_38_cvector, 2);
	var_60_float = var_58_float * var_59_float;
	var_61_int = var_57_float + var_60_float;
	var_63_bool = var_61_int >= (int)0;
	if(var_63_bool != 0) {
		var_40_string = "fhit";
	} else {
		var_40_string = "bhit";
	}
	var_66_int = var_40_string + "1";
	var_68_int = var_40_string + "2";
	FadeSecondaryAnimation("hit_react", var_66_int, var_68_int, (int)-10);
	return 20;
	
}


func_862(var_0_object, var_1_int, var_2_int, var_3_bool, var_80_object, var_81_object)
{
	var_0_object = var_81_object;
	var_1_int = var_80_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_87_string = "";
		func_915(var_81_object, "Neutral");
		@@@var_0_object:SetMessage((int)7526);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)7527, (int)-1, (int)8309);
		goto Label_885;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x362";
	}
Label_885:
	var_106_bool = 0;
	func_1537(var_106_bool);
	if(var_106_bool != 0) {

	Label_889:
		lshWaitForAnimEnd();
		var_107_bool = var_3_bool;
		if(var_107_bool != 0) {
		} else {
			var_108_string = "";
			var_108_string = var_2_int;
			func_1379(var_108_string);
			goto Label_889;
	}
		PlayAnimation("all", "idle");

	Label_904:
		WaitForAnimEnd();
		var_111_bool = var_3_bool;
		if(var_111_bool != 0) {
			goto Label_914;
		}
		PlayAnimation("all", "idle");
		goto Label_904;
	}
	goto Label_914;
	
Label_914:
	return 0;
	
}


func_1375()
{
	CameraSwitchToNormal();
	return 0;
}


func_226(var_0_object, var_265_float, var_266_int)
{
	var_267_object = Obj(); var_268_float = 0; var_269_float = 0; var_270_object = Obj(); var_271_float = 0; var_272_float = 0;
	var_274_float = var_265_float * (float)0.8999999761581421;
	GetVictim(var_274_float, var_270_object);
	ReportAttack(var_0_object);
	var_275_bool = var_270_object == var_0_object;
	if(var_275_bool != 0) {
		var_276_float = 0; var_277_object = Obj(); var_278_int = 0;
		var_270_object = var_277_object;
		var_266_int = var_278_int;
		func_15(var_278_int);
		var_276_float = var_271_float;
		var_279_float = 0; var_280_object = Obj(); var_281_float = 0; var_282_int = 0;
		var_270_object = var_280_object;
		var_271_float = var_281_float;
		var_283_int = 0; var_284_object = Obj(); var_285_int = 0;
		var_270_object = var_284_object;
		var_266_int = var_285_int;
		func_18(var_285_int);
		var_283_int = var_282_int;
		func_1112(var_279_float, var_280_object, var_281_float, var_282_int);
		var_279_float = var_272_float;
		var_332_int = 0;
		func_504(var_332_int);
		ReportHit(var_0_object, var_332_int, var_272_float, var_271_float);
		var_333_object = Obj(); var_334_float = 0;
		var_270_object = var_333_object;
		var_272_float = var_334_float;
		func_506();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1379(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0;
	var_97_int = "playing " + var_91_string;
	Trace(var_97_int);
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float);
	lshPlayAnimation(var_94_float, var_95_float);
	var_99_int = "start: " + var_94_float;
	Trace(var_99_int);
	var_101_int = "end: " + var_95_float;
	Trace(var_101_int);
	return 4;
}


func_1516(var_71_int)
{
	var_72_int = 0; var_73_int = 0;
	GetVariable("player", var_73_int);
	var_76_bool = var_73_int == (int)0;
	if(var_76_bool != 0) {
		var_71_int = 200001;
		return 2;
	EMIT "GOTO 0x5fb";
	}
	var_78_bool = var_73_int == (int)1;
	if(var_78_bool != 0) {
		var_71_int = 200002;
		return 2;
	}
	var_71_int = 200003;
	return 2;
}


func_508(var_261_int)
{
	var_261_int = 1;
	return 0;
}


func_1007(var_15_bool)
{
	var_15_bool = 1;
	return 0;
}


func_369(var_0_object, var_193_bool, var_194_float)
{
	var_195_bool = 0; var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_float = 0;
	
Label_370:
	IsAnimationPlaying(var_200_bool);
	var_205_bool = var_200_bool == 0; //@nz
	if(var_205_bool != 0) {
	} else {
		var_206_bool = 0;
		func_409(var_204_float, var_206_bool);
		if(var_206_bool != 0) {
			var_193_bool = 1;
			return 10;
		}
		var_231_bool = 0; var_232_object = Obj();
		var_232_object = var_0_object;
		func_1217(var_231_bool, var_232_object);
		var_233_bool = var_231_bool == 0; //@nz
		if(var_233_bool != 0) {
			var_193_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_201_cvector);
		GetPFPosition(var_202_cvector);
		var_203_cvector = var_201_cvector - var_202_cvector;
		var_204_float = var_203_cvector | var_203_cvector;
		var_234_float = var_194_float * var_194_float;
		var_235_bool = var_204_float < var_234_float;
		if(var_235_bool != 0) {
			var_236_bool = 0; var_237_float = 0;
			var_194_float = var_237_float;
			func_265(var_203_cvector, var_204_float, var_236_bool, var_237_float);
			var_193_bool = 1;
			sync();
			goto Label_370;
		}
		return 10;
	}
	var_193_bool = 0;
	return 10;
	
}


func_1009(var_0_object, var_1_int)
{
	var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	GetPFPosition(var_1_int);
	GetDirection(var_0_object);
	
Label_1014:
	irand(var_19_int, (int)60);
	var_25_int = var_19_int + (int)30;
	Sleep(var_25_int, var_20_bool);
	var_26_bool = var_20_bool;
	if(var_26_bool != 0) {
		func_983();
	} else {
		GetPFPosition(var_21_cvector);
		var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
		var_28_cvector = var_1_int;
		var_21_cvector = var_29_cvector;
		func_1414(var_27_float, var_28_cvector, var_29_cvector);
		var_33_bool = var_27_float > (int)40000;
		if(var_33_bool != 0) {
			FindPathTo(var_22_object, var_1_int);
			var_34_bool = var_22_object != 0; //@nn
			if(var_34_bool != 0) {
				RotatePath(var_22_object, var_20_bool);
				var_35_bool = var_20_bool == 0; //@nz
				if(var_35_bool != 0) {
				} else {
					FollowPath(var_22_object, (bool)0, var_20_bool);
					var_37_bool = var_20_bool == 0; //@nz
					if(var_37_bool != 0) {
						goto Label_1084;
					}
					var_38_float = GetByIndex(var_0_object, 0);
					var_39_float = GetByIndex(var_0_object, 2);
					Rotate(var_38_float, var_39_float, var_20_bool);
					var_40_bool = var_20_bool == 0; //@nz
					if(var_40_bool != 0) {
						goto Label_1084;
					}
					WaitForAnimEnd(var_20_bool);
					var_41_bool = var_20_bool == 0; //@nz
					if(var_41_bool != 0) {
						goto Label_1084;
					}
					goto Label_1085;
				EMIT "GOTO 0x42d";
			}
				Sleep((int)1);
				var_22_object = 0;
				goto Label_1084;
		}
			var_43_float = GetByIndex(var_0_object, 0);
			var_44_float = GetByIndex(var_0_object, 2);
			Rotate(var_43_float, var_44_float, var_20_bool);
			var_45_bool = var_20_bool == 0; //@nz
			if(var_45_bool != 0) {
				goto Label_1084;
			}
			WaitForAnimEnd(var_20_bool);
			var_46_bool = var_20_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1084;
			}
			goto Label_1085;
		}
	Label_1084:
		goto Label_1027;
	}
Label_1085:
	goto Label_1014;
	
}
EMIT "Return(); Pop(8)";


func_1397()
{
	var_17_bool = 0;
	func_1537(var_17_bool);
	if(var_17_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_504(var_332_int)
{
	var_332_int = 0;
	return 0;
}


func_506()
{
	return 0;
}


func_1404(var_53_cvector, var_54_cvector)
{
	var_56_float = 0; var_57_float = 0;
	var_58_int = var_54_cvector | var_54_cvector;
	var_57_float = sqrt(var_58_int);
	var_59_float = 9.999999974752427e-07;
	var_60_bool = var_57_float < var_59_float;
	if(var_60_bool != 0) {
		var_53_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_53_cvector = var_54_cvector / var_57_float;
	return 2;
}


func_1533(var_69_int)
{
	var_69_int = 4031;
	return 0;
}


func_510(var_256_float)
{
	var_256_float = 0.5;
	return 0;
}


func_1535(var_70_string)
{
	var_70_string = "ui/NPC_Black.png";
	return 0;
}


