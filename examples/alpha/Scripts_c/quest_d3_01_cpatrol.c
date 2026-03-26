// @IMPORTS: FindActor/2,HasAnimation/3,IsExisting3DSound/2,IsPlayerActor/2,GetPFPosition/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,GetPosition/1,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,CreateDialog/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FollowPath/3,Rotate/3,WaitForAnimEnd/1,StopGroup0/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,Trigger/2,AddItem/4,GetProperty/2,SignalDeath/1,GetDiaryRoot/1,SetVariable/2,SetDiarySection/1,GetVariable/2,CreateDiaryEntry/4
// @STRINGS: W:player|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |W:revolver_ammo|W:alpha_pills|W:quest_d3_01|W:patrol_talk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x40e
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
// @TASK_5: vars=cvector,cvector,bool params=0
// @EVENT_0: op=0x41f vars=object
// @EVENT_17: op=0x42c vars=object
// @STANDALONE_EVENT_22: op=0x600 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x608 vars=object,string
// @STANDALONE_EVENT_41: op=0x615 vars=object
// @PE: 0xf,0x12,0x1fa,0x266,0x278,0x283,0x28c,0x297,0x303,0x319,0x31b,0x31d,0x35e,0x393,0x3a3,0x415,0x41f,0x48a,0x5a5,0x5d0,0x5d7,0x600,0x615,0x61b

task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	var_17_bool = var_15_bool != (int)0;
	if(var_17_bool != 0) {
		return 0;
	}
	var_18_bool = 0; var_19_object = Obj();
	var_19_object = var_1_int;
	func_652(var_18_bool, var_19_object);
	var_54_bool = var_18_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	RequestClearPath(var_15_bool);
	return 0;
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	func_636(var_15_bool);
	var_15_bool = Obj();
	func_1557();
	return 0;
}


task_2_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	IsOverrideActive(var_17_bool);
	var_18_bool = var_17_bool == 0; //@nz
	if(var_18_bool != 0) {
		WorkWithCorpse(var_15_bool);
	}
	return 2;
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_cvector, var_17_cvector, var_18_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	return 0;
}


task_4_event_11(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_cvector, var_15_cvector, var_16_bool)
{
	if((int)1 != 0) {
		func_1467();
		var_20_bool = var_16_bool == (int)10005;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_int;
			var_22_object = var_0_object;
			func_1563();
		}
		var_55_bool = var_16_bool == (int)10006;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_int;
			var_57_object = var_0_object;
			func_1563();
		}
		var_59_bool = var_16_bool == (int)10009;
		if(var_59_bool != 0) {
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_int;
			var_61_object = var_0_object;
			func_1563();
		}
		var_63_bool = var_15_cvector == (int)10002;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_915(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9122);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9123, (int)10004, (int)10003);
			return 0;
		}
		var_84_bool = var_15_cvector == (int)10004;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_915(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9124);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9125, (int)-1, (int)10005);
			@@@var_0_object:AddReply((int)9126, (int)-1, (int)10006);
			@@@var_0_object:AddReply((int)9127, (int)10008, (int)10007);
			return 0;
		}
		var_97_bool = var_15_cvector == (int)10008;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_915(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9129, (int)-1, (int)10009);
			return 0;
		}
		var_3_bool = true;
		var_103_bool = 0;
		func_1652(var_103_bool);
		if(var_103_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3a4";
	
}


task_5_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_bool = 0;
	func_1043(var_15_object, var_16_bool);
	if(var_16_bool != 0) {
		func_1157();
		var_17_object = Obj();
		var_15_object = var_17_object;
		func_1045(var_15_object, var_17_object);
	}
	return 0;
}


task_5_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_object, var_17_bool);
	var_18_bool = var_17_bool;
	if(var_18_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	return 2;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0;
	var_15_object = var_19_object;
	var_16_int = var_20_int;
	var_17_float = var_21_float;
	func_1311(var_20_int, var_21_float);
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0;
	var_20_bool = var_16_string == "health";
	if(var_20_bool != 0) {
		GetProperty("health", var_18_float);
		var_23_bool = var_18_float <= (int)0;
		if(var_23_bool != 0) {
			SignalDeath(var_15_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_1518(var_16_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool)
{
	var_2_int = true;
	func_1079(var_13_cvector, var_14_bool);
	return 0;
}


func_512(var_0_object, var_1_int, var_111_bool, var_112_object, var_113_float, var_114_float, var_115_bool, var_116_bool)
{
	var_119_bool = 0; var_120_bool = 0; var_121_object = Obj(); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_float = 0; var_126_object = Obj(); var_127_bool = 0; var_128_bool = 0; var_129_object = Obj(); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_float = 0; var_134_object = Obj();
	var_0_object = false;
	var_1_int = var_112_object;
	var_116_bool = var_128_bool;
	
Label_516:
	var_135_bool = 0; var_136_object = Obj();
	var_112_object = var_136_object;
	func_652(var_135_bool, var_136_object);
	var_139_bool = var_135_bool == 0; //@nz
	if(var_139_bool != 0) {
		var_111_bool = 0;
		return 16;
	}
	@@var_112_object:GetPosition(var_130_cvector);
	GetPosition(var_131_cvector);
	var_132_cvector = var_130_cvector - var_131_cvector;
	var_133_float = var_132_cvector | var_132_cvector;
	var_140_bool = 0;
	var_140_bool = 0;
	var_142_bool = var_114_float > (int)0;
	if(var_142_bool != 0) {
		var_143_float = var_114_float * var_114_float;
		var_144_bool = var_133_float > var_143_float;
		if(var_144_bool != 0) {
			var_140_bool = 1;
		}
	}
	if(var_140_bool != 0) {
		Stop();
		var_111_bool = 0;
		return 16;
	}
	var_145_float = var_113_float * var_113_float;
	var_146_bool = var_133_float > var_145_float;
	if(var_146_bool != 0) {
		@@var_112_object:GetPFPosition(var_130_cvector);
		FindPathTo(var_134_object, var_130_cvector);
		var_147_bool = var_134_object != 0; //@nn
		if(var_147_bool != 0) {
			var_134_object = var_129_object;
			var_134_object = 0;
		}
		var_148_bool = var_129_object != 0; //@nn
		if(var_148_bool != 0) {
			var_149_bool = var_128_bool;
			if(var_149_bool == 0) goto Label_565;
			var_128_bool = 0;
			RotatePath(var_129_object, var_127_bool);
			var_150_bool = var_127_bool == 0; //@nz
			if(var_150_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_153_string = "";
				func_659(var_153_string);
				var_154_string = "";
				func_661(var_154_string);
				FollowPath(var_129_object, var_115_bool, var_127_bool, var_153_string, var_154_string);
				var_155_bool = var_127_bool == 0; //@nz
				if(var_155_bool != 0) {
					var_156_object = var_0_object;
					if(var_156_object != 0) {
						var_129_object = 0;
						goto Label_612;
					EMIT "GOTO 0x249";
					}
				} else {
					var_129_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_127_bool);
					var_159_bool = var_127_bool == 0; //@nz
					if(var_159_bool != 0) {
						var_160_object = var_0_object;
						if(var_160_object != 0) {
							var_129_object = 0;
							goto Label_612;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_612;
	}
			var_134_object = 0;
			goto Label_610;

		Label_610:
			var_129_object = 0;

		}
		goto Label_516;
	}
Label_612:
	var_111_bool = !var_0_object;
	return 16;
	
}


func_0()
{
	var_24_object = Obj(); var_25_object = Obj();
	FindActor(var_25_object, "player");
	var_27_bool = var_25_object == 0; //@nz
	if(var_27_bool != 0) {
		return 2;
	}
	var_28_object = Obj(); var_29_bool = 0; var_30_float = 0;
	var_25_object = var_28_object;
	func_21(var_20_int, var_21_int, var_22_bool, var_23_int, var_24_object, var_25_object, var_28_object, (bool)1, (float)180.0);
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


func_771(var_48_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_48_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_48_string);
	RemoveEnvelope();
	return 0;
}


func_1157()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1287(var_70_bool, var_71_object)
{
	var_72_int = 0; var_73_int = 0;
	var_74_bool = 0; var_75_object = Obj();
	var_71_object = var_75_object;
	func_1251(var_74_bool, var_75_object);
	var_91_bool = var_74_bool == 0; //@nz
	if(var_91_bool != 0) {
		var_70_bool = 0;
		return 2;
	}
	var_92_bool = 0; var_93_object = Obj(); var_94_string = "";
	var_71_object = var_93_object;
	func_1170(var_92_bool, var_93_object, "noaccess");
	var_101_bool = var_92_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_70_bool = 1;
		return 2;
	}
	@@var_71_object:GetProperty("noaccess", var_73_int);
	var_70_bool = var_73_int == (int)0;
	return 2;
}


func_265(var_0_object, var_1_int, var_238_bool, var_239_float)
{
	var_240_int = 0; var_241_bool = 0; var_242_int = 0; var_243_bool = 0;
	irand(var_242_int, var_1_int);
	var_242_int = var_242_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_248_int = "attack_begin" + var_242_int;
	PlayAnimation("all", var_248_int);
	WaitForAnimEnd();
	func_472(var_242_int, var_243_bool);
	var_264_bool = 0; var_265_object = Obj();
	var_265_object = var_0_object;
	func_1287(var_264_bool, var_265_object);
	var_266_bool = var_264_bool == 0; //@nz
	if(var_266_bool != 0) {
		StopAsync();
		var_238_bool = 0;
		return 4;
	}
	var_267_float = 0; var_268_int = 0;
	var_239_float = var_267_float;
	var_242_int = var_268_int;
	func_226(var_243_bool, var_267_float, var_268_int);
	var_339_int = "attack_middle" + var_242_int;
	HasAnimation(var_243_bool, "all", var_339_int);
	var_340_bool = var_243_bool;
	if(var_340_bool != 0) {
		var_343_int = "attack_middle" + var_242_int;
		PlayAnimation("all", var_343_int);
		WaitForAnimEnd();
		var_344_bool = 0; var_345_object = Obj();
		var_345_object = var_0_object;
		func_1287(var_344_bool, var_345_object);
		var_346_bool = var_344_bool == 0; //@nz
		if(var_346_bool != 0) {
			StopAsync();
			var_238_bool = 0;
			return 4;
		}
		var_347_float = 0; var_348_int = 0;
		var_239_float = var_347_float;
		var_242_int = var_348_int;
		func_226(var_243_bool, var_347_float, var_348_int);
	}
	SetAttackState((bool)0);
	var_352_int = "attack_end" + var_242_int;
	PlayAnimation("all", var_352_int);
	var_353_bool = 0; var_354_float = 0;
	func_345(var_353_bool, (float)0.75);
	StopAsync();
	var_238_bool = 1;
	return 4;
}


func_1162(var_309_string, var_310_int)
{
	var_312_bool = var_310_int == (int)1;
	if(var_312_bool != 0) {
		var_309_string = "fire";
		return 0;
	}
	var_309_string = "phys";
	return 0;
}


func_652(var_135_bool, var_136_object)
{
	var_137_bool = 0; var_138_object = Obj();
	var_136_object = var_138_object;
	func_1287(var_137_bool, var_138_object);
	var_137_bool = var_135_bool;
	return 0;
}


func_15(var_278_float)
{
	var_278_float = 0.30000001192092896;
	return 0;
}


func_18(var_285_int)
{
	var_285_int = 0;
	return 0;
}


func_659(var_153_string)
{
	var_153_string = "walk";
	return 0;
}


func_915(var_2_int, var_88_string)
{
	var_89_bool = 0;
	func_1652(var_89_bool);
	var_90_bool = var_89_bool == 0; //@nz
	if(var_90_bool != 0) {
		return 0;
	}
	var_91_bool = var_88_string == var_2_int;
	if(var_91_bool != 0) {
		return 0;
	}
	var_92_string = "";
	var_88_string = var_92_string;
	func_1449(var_92_string);
	var_2_int = var_88_string;
	return 0;
}


func_21(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_28_object, var_29_bool, var_30_float, var_117_bool)
{
	var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_float = 0; var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_float = 0;
	var_1_int = 0;
	
Label_23:
	var_54_int = var_1_int + (int)1;
	var_55_int = "attack_begin" + var_54_int;
	HasAnimation(var_41_bool, "all", var_55_int);
	var_56_bool = var_41_bool == 0; //@nz
	if(var_56_bool != 0) {
	} else {
									var_1_int = var_1_int + (int)1;
									goto Label_23;
	}
	var_2_int = 0;
	
Label_37:
	var_59_int = var_2_int + (int)1;
	var_60_int = "attack" + var_59_int;
	IsExisting3DSound(var_42_bool, var_60_int);
	var_61_bool = var_42_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
								var_2_int = var_2_int + (int)1;
								goto Label_37;

	}
	var_4_int = 0;
	var_64_bool = IsFuncExist(var_28_object, "@GetAttackDistance", (int)1);
	if(var_64_bool != 0) {
		@@var_28_object:GetAttackDistance(var_43_float);
		var_43_float = var_43_float + (int)50;
	} else {
							var_30_float = var_43_float;

	}
	var_67_bool = var_43_float >= (int)150;
	if(var_67_bool != 0) {
		var_43_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_28_object;
	IsPlayerActor(var_0_object, var_46_bool);
	var_68_bool = var_29_bool;
	if(var_68_bool != 0) {
		var_47_bool = 0;
	} else {
						var_47_bool = 1;

	}
Label_73:
	var_69_bool = 0;
	var_69_bool = 0;
	var_70_bool = 0; var_71_object = Obj();
	var_71_object = var_0_object;
	func_1287(var_70_bool, var_71_object);
	if(var_70_bool != 0) {
		var_104_bool = var_3_bool == 0; //@nz
		if(var_104_bool != 0) {
			var_69_bool = 1;
		}
	}
	if(var_69_bool != 0) {
		@@@var_0_object:GetPFPosition(var_44_cvector);
		GetPFPosition(var_45_cvector);
		var_48_cvector = var_44_cvector - var_45_cvector;
		var_49_float = var_48_cvector | var_48_cvector;
		var_106_int = (float)400.0 + var_43_float;
		var_108_int = (float)400.0 + var_43_float;
		var_109_float = var_106_int * var_108_int;
		var_110_bool = var_49_float >= var_109_float;
		if(var_110_bool != 0) {
			var_111_bool = 0; var_112_object = Obj(); var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_bool = 0;
			var_112_object = var_0_object;
			var_43_float = var_113_float;
			TaskCall(1);
			func_512(var_117_bool, var_118_object, var_111_bool, var_112_object, var_113_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_164_bool = var_117_bool == 0; //@nz
			if(var_164_bool != 0) {
			} else {
		} else {
				var_170_float = var_30_float * var_30_float;
				var_171_bool = var_49_float >= var_170_float;
				if(var_171_bool != 0) {
					var_172_bool = (bool)0 == 0; //@nz
					if(var_172_bool != 0) {
						var_173_object = Obj();
						var_173_object = var_0_object;
						func_1378(var_173_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_47_bool = 1;
					}
					rand(var_50_float);
					var_184_bool = 0;
					var_186_bool = var_50_float < (float)0.6000000238418579;
					if(var_186_bool != 1) {
						var_187_bool = 0;
						func_461((bool)1, var_187_bool);
						if(var_187_bool != 1) {
							var_184_bool = 0;
						}
					}
					if(var_184_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_195_bool = 0; var_196_float = 0;
						var_30_float = var_196_float;
						func_369(var_50_float, var_195_bool, var_196_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_365_bool = 0;
						func_461(var_50_float, var_365_bool);
						var_366_bool = var_365_bool == 0; //@nz
						if(var_366_bool == 0) goto Label_199;
						var_367_bool = 0; var_368_object = Obj();
						var_368_object = var_0_object;
						func_1287(var_367_bool, var_368_object);
						var_369_bool = var_367_bool == 0; //@nz
						if(var_369_bool != 0) {
							goto Label_209;
						}
						@@@var_0_object:GetPFPosition(var_44_cvector);
						GetPFPosition(var_45_cvector);
						var_48_cvector = var_44_cvector - var_45_cvector;
						var_49_float = var_48_cvector | var_48_cvector;
						var_370_float = var_30_float * var_30_float;
						var_371_bool = var_49_float < var_370_float;
						if(var_371_bool == 0) goto Label_199;
						var_372_bool = 0; var_373_float = 0;
						var_30_float = var_373_float;
						func_265(var_49_float, var_50_float, var_372_bool, var_373_float);
						var_374_bool = var_372_bool == 0; //@nz
						if(var_374_bool == 0) goto Label_199;
						goto Label_209;
				}
					var_375_bool = 0; var_376_float = 0;
					var_30_float = var_376_float;
					func_265(var_49_float, var_50_float, var_375_bool, var_376_float);
					var_377_bool = var_375_bool == 0; //@nz
					if(var_377_bool != 0) {
						goto Label_209;
					}
					var_47_bool = 1;

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
	var_165_bool = var_3_bool;
	if(var_165_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_168_bool = var_46_bool;
	if(var_168_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_661(var_154_string)
{
	var_154_string = "run";
	return 0;
}


func_663(var_25_object)
{
	var_26_object = Obj();
	var_25_object = var_26_object;
	func_684(var_26_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_672:
	Hold();
	goto Label_672;
}
EMIT "Return(); Pop(0)";


func_1043(var_2_int, var_16_bool)
{
	var_16_bool = var_2_int;
	return 0;
}


func_1045(var_2_int, var_17_object)
{
	var_18_int = 0; var_19_object = Obj();
	var_17_object = var_19_object;
	TaskCall(3);
	func_799(var_20_object, var_18_int, var_19_object);
	TaskReturn();
	var_2_int = false;
	return 0;
}


func_409(var_0_object, var_208_bool)
{
	var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_float = 0; var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_float = 0; var_218_float = 0;
	var_219_bool = 0; var_220_object = Obj();
	var_220_object = var_0_object;
	func_1287(var_219_bool, var_220_object);
	var_221_bool = var_219_bool == 0; //@nz
	if(var_221_bool != 0) {
		var_208_bool = 0;
		return 10;
	}
	var_222_bool = 0;
	func_461(var_218_float, var_222_bool);
	if(var_222_bool != 0) {
		@@@var_0_object:GetPFPosition(var_214_cvector);
		GetPFPosition(var_215_cvector);
		var_216_cvector = var_214_cvector - var_215_cvector;
		var_217_float = var_216_cvector | var_216_cvector;
		@@@var_0_object:GetAttackDistance(var_218_float);
		var_218_float = var_218_float + (int)50;
		var_224_float = var_218_float * var_218_float;
		var_225_bool = var_217_float <= var_224_float;
		if(var_225_bool != 0) {
			func_442(var_218_float);
			var_208_bool = 1;
			return 10;
		}
	}
	var_208_bool = 0;
	return 10;
}


func_1563()
{
	func_1632();
	var_48_bool = 0; var_49_string = ""; var_50_string = "";
	func_1506(var_48_bool, "quest_d3_01", "patrol_talk");
	return 0;
}


func_1182(var_281_float, var_282_object, var_283_float, var_284_int)
{
	var_288_int = 0; var_289_string = ""; var_290_int = 0; var_291_float = 0; var_292_float = 0; var_293_float = 0; var_294_int = 0; var_295_string = ""; var_296_int = 0; var_297_float = 0; var_298_float = 0; var_299_float = 0;
	var_300_bool = 0; var_301_object = Obj(); var_302_string = "";
	var_282_object = var_301_object;
	func_1170(var_300_bool, var_301_object, "health");
	var_303_bool = var_300_bool == 0; //@nz
	if(var_303_bool != 0) {
		var_281_float = 0.0;
		return 12;
	}
	var_304_bool = 0; var_305_object = Obj(); var_306_string = "";
	var_282_object = var_305_object;
	func_1170(var_304_bool, var_305_object, "armor");
	var_307_bool = var_304_bool == 0; //@nz
	if(var_307_bool != 0) {
		var_294_int = 0;
	} else {
			@@var_282_object:GetProperty("armor", var_294_int);
	}
	var_309_string = ""; var_310_int = 0;
	var_284_int = var_310_int;
	func_1162(var_309_string, var_310_int);
	var_295_string = "armor_" + var_309_string;
	var_313_bool = 0; var_314_object = Obj(); var_315_string = "";
	var_282_object = var_314_object;
	var_295_string = var_315_string;
	func_1170(var_313_bool, var_314_object, var_315_string);
	var_316_bool = var_313_bool == 0; //@nz
	if(var_316_bool != 0) {
		var_296_int = 0;
	} else {
		@@var_282_object:GetProperty(var_295_string, var_296_int);

	}
	var_317_float = 0; var_318_float = 0; var_319_float = 0;
	var_320_int = var_294_int + var_296_int;
	var_318_float = var_320_int / (float)100.0;
	func_1488(var_317_float, var_318_float, (float)1);
	var_317_float = var_297_float;
	@@var_282_object:GetProperty("health", var_298_float);
	var_325_int = (int)1 - var_297_float;
	var_299_float = var_283_float * var_325_int;
	var_327_float = 0; var_328_float = 0; var_329_float = 0; var_330_float = 0;
	var_328_float = var_298_float - var_299_float;
	func_1495(var_327_float, var_328_float, (float)0, (float)1);
	@@var_282_object:SetProperty("health", var_327_float);
	var_299_float = var_281_float;
	return 12;
	
}


func_799(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_0_object = var_19_object;
	var_29_bool = 0; var_30_object = Obj();
	var_19_object = var_30_object;
	func_1389(var_29_bool, var_30_object);
	var_69_bool = var_29_bool == 0; //@nz
	if(var_69_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	CreateDialog(var_25_object);
	var_70_int = 0;
	func_1648(var_70_int);
	@@var_25_object:SetNPCName(var_70_int);
	var_71_string = "";
	func_1650(var_71_string);
	@@var_25_object:SetPhoto(var_71_string);
	var_72_int = 0;
	func_1615(var_72_int);
	@@var_25_object:SetPlayerName(var_72_int);
	IsOverrideActive(var_26_bool);
	var_80_bool = var_26_bool;
	if(var_80_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	DoDialog(var_25_object);
	var_81_object = Obj(); var_82_object = Obj();
	var_19_object = var_81_object;
	var_25_object = var_82_object;
	TaskCall(4);
	func_862(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object);
	TaskReturn();
	@@var_25_object:IsDialogEnd(var_28_bool);
	
Label_844:
	var_115_bool = var_28_bool == 0; //@nz
	if(var_115_bool != 0) {
		sync();
		@@var_25_object:IsDialogEnd(var_28_bool);
		goto Label_844;
	}
	var_19_object = Obj();
	func_1445();
	StopDialog(var_25_object);
	@@var_25_object:GetReturnValue((int)-1);
	var_27_int = var_18_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1054()
{
	return 0;
}


func_1311(var_19_object, var_20_int)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_object = Obj(); var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_20_int != (int)4;
	if(var_44_bool != 0) {
		var_46_bool = var_20_int != (int)5;
		if(var_46_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		GetScene(var_32_object);
		GetPosition(var_34_cvector);
		GetEyesHeight(var_35_float);
		var_47_float = GetByIndex(var_34_cvector, 1);
		var_49_float = var_35_float / (int)2;
		var_47_float = var_47_float + var_49_float;
		SetByIndex(var_34_cvector, 1) = var_47_float;
		AddActorByType(var_33_object, "scripted", var_32_object, var_34_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_33_object = 0;
		var_32_object = 0;
	}
	var_53_bool = var_19_object == 0; //@ne
	if(var_53_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_36_int);
	var_55_bool = var_36_int < (int)0;
	if(var_55_bool != 0) {
		return 20;
	}
	@@var_19_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_56_float = GetByIndex(var_40_cvector, 0);
	var_57_float = GetByIndex(var_39_cvector, 0);
	var_58_float = var_56_float * var_57_float;
	var_59_float = GetByIndex(var_40_cvector, 2);
	var_60_float = GetByIndex(var_39_cvector, 2);
	var_61_float = var_59_float * var_60_float;
	var_62_int = var_58_float + var_61_float;
	var_64_bool = var_62_int >= (int)0;
	if(var_64_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_67_int = var_41_string + "1";
	var_69_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_67_int, var_69_int, (int)-10);
	return 20;
	
}


func_1445()
{
	CameraSwitchToNormal();
	return 0;
}


func_1573(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj();
	GetDiaryRoot(var_40_object);
	var_41_bool = var_40_object == 0; //@nz
	if(var_41_bool != 0) {
		Trace("Can't retrieve diary root");
		var_38_object = 0;
		return 2;
	}
	var_40_object = var_38_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1449(var_92_string)
{
	var_93_float = 0; var_94_float = 0; var_95_float = 0; var_96_float = 0;
	var_98_int = "playing " + var_92_string;
	Trace(var_98_int);
	lshGetAnimTimes(var_92_string, var_95_float, var_96_float);
	lshPlayAnimation(var_95_float, var_96_float);
	var_100_int = "start: " + var_95_float;
	Trace(var_100_int);
	var_102_int = "end: " + var_96_float;
	Trace(var_102_int);
	return 4;
}


func_684(var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_object = Obj(); var_43_bool = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0);
	var_47_bool = var_26_object == 0; //@ne
	if(var_47_bool != 0) {
		var_48_string = "";
		func_771("fdie");
	} else {
		@@var_26_object:GetPosition(var_37_cvector);
		GetPosition(var_38_cvector);
		GetDirection(var_39_cvector);
		var_40_cvector = var_38_cvector - var_37_cvector;
		var_51_float = GetByIndex(var_40_cvector, 0);
		var_52_float = GetByIndex(var_39_cvector, 0);
		var_53_float = var_51_float * var_52_float;
		var_54_float = GetByIndex(var_40_cvector, 2);
		var_55_float = GetByIndex(var_39_cvector, 2);
		var_56_float = var_54_float * var_55_float;
		var_57_int = var_53_float + var_56_float;
		var_59_bool = var_57_int >= (int)0;
		if(var_59_bool != 0) {
			var_41_string = "fdie";
		} else {
				var_41_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_26_object = var_42_object;
		var_62_bool = IsFuncExist(var_26_object, "GetScriptProperty", (int)2);
		if(var_62_bool != 0) {
			@@var_26_object:HasScriptProperty(var_43_bool, "Owner");
			var_64_bool = var_43_bool;
			if(var_64_bool != 0) {
				@@var_26_object:GetScriptProperty(var_42_object, "Owner");
				var_66_bool = var_42_object == 0; //@ne
				if(var_66_bool != 0) {
					var_26_object = var_42_object;
				}
			}
		}
		var_69_bool = IsFuncExist(var_42_object, "@GetEyesHeight", (int)1);
		if(var_69_bool != 0) {
			@@var_42_object:GetEyesHeight(var_45_float);
			var_46_cvector = CVector(0.0, 0.0, 0.0);
			var_70_float = GetByIndex(var_46_cvector, 1);
			var_45_float = var_70_float;
			SetByIndex(var_46_cvector, 1) = var_70_float;
			LookAsync(var_26_object, "head", var_46_cvector);
			var_44_bool = 1;
		} else {
			var_44_bool = 0;

		}
		PlayAnimation("all", var_41_string);
		WaitForAnimEnd();
		var_73_bool = var_44_bool;
		if(var_73_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_41_string);
		RemoveEnvelope();
		var_42_object = 0;
	}
	return 20;
	
}


func_1586(var_29_bool, var_30_object, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_int = 0; var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0;
	func_1573(Obj());
	var_38_object = var_35_object;
	@@var_35_object:Find(var_31_int, var_36_object);
	var_43_bool = var_36_object == 0; //@nz
	if(var_43_bool != 0) {
		var_45_int = "Can't find diary parent with id: " + var_31_int;
		Trace(var_45_int);
		var_29_bool = 0;
		return 6;
	}
	@@var_36_object:AddChild(var_30_object);
	SetVariable("player_diary", (int)1);
	@@var_30_object:GetCategory(var_37_int);
	SetDiarySection(var_37_int);
	var_29_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1079(var_0_object, var_1_int)
{
	var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	GetPFPosition(var_1_int);
	GetDirection(var_0_object);
	
Label_1084:
	irand(var_19_int, (int)60);
	var_25_int = var_19_int + (int)30;
	Sleep(var_25_int, var_20_bool);
	var_26_bool = var_20_bool;
	if(var_26_bool != 0) {
		func_1054();
	} else {
		GetPFPosition(var_21_cvector);
		var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
		var_28_cvector = var_1_int;
		var_21_cvector = var_29_cvector;
		func_1484(var_27_float, var_28_cvector, var_29_cvector);
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
						goto Label_1154;
					}
					var_38_float = GetByIndex(var_0_object, 0);
					var_39_float = GetByIndex(var_0_object, 2);
					Rotate(var_38_float, var_39_float, var_20_bool);
					var_40_bool = var_20_bool == 0; //@nz
					if(var_40_bool != 0) {
						goto Label_1154;
					}
					WaitForAnimEnd(var_20_bool);
					var_41_bool = var_20_bool == 0; //@nz
					if(var_41_bool != 0) {
						goto Label_1154;
					}
					goto Label_1155;
				EMIT "GOTO 0x473";
			}
				Sleep((int)1);
				var_22_object = 0;
				goto Label_1154;
		}
			var_43_float = GetByIndex(var_0_object, 0);
			var_44_float = GetByIndex(var_0_object, 2);
			Rotate(var_43_float, var_44_float, var_20_bool);
			var_45_bool = var_20_bool == 0; //@nz
			if(var_45_bool != 0) {
				goto Label_1154;
			}
			WaitForAnimEnd(var_20_bool);
			var_46_bool = var_20_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1154;
			}
			goto Label_1155;
		}
	Label_1154:
		goto Label_1097;
	}
Label_1155:
	goto Label_1084;
	
}
EMIT "Return(); Pop(8)";


func_442(var_0_object)
{
	var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0);
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_228_cvector);
	GetPFPosition(var_229_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1467()
{
	var_18_bool = 0;
	func_1652(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1474(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_55_cvector | var_55_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_54_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_54_cvector = var_55_cvector / var_58_float;
	return 2;
}


func_1484(var_27_float, var_28_cvector, var_29_cvector)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
	var_31_cvector = var_29_cvector - var_28_cvector;
	var_27_float = var_31_cvector | var_31_cvector;
	return 2;
}


func_461(var_0_object, var_187_bool)
{
	var_188_bool = 0; var_189_bool = 0;
	var_192_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_192_bool != 0) {
		@@@var_0_object:IsAttacking(var_189_bool);
		var_189_bool = var_187_bool;
		return 2;
	}
	var_187_bool = 0;
	return 2;
}


func_1615(var_72_int)
{
	var_73_int = 0; var_74_int = 0;
	GetVariable("player", var_74_int);
	var_77_bool = var_74_int == (int)0;
	if(var_77_bool != 0) {
		var_72_int = 200001;
		return 2;
	EMIT "GOTO 0x65e";
	}
	var_79_bool = var_74_int == (int)1;
	if(var_79_bool != 0) {
		var_72_int = 200002;
		return 2;
	}
	var_72_int = 200003;
	return 2;
}


func_1488(var_317_float, var_318_float, var_319_float)
{
	var_322_bool = var_318_float < var_319_float;
	if(var_322_bool != 0) {
		var_318_float = var_317_float;
	} else {
		var_319_float = var_317_float;
	}
	return 0;
	
}


func_1495(var_327_float, var_328_float, var_329_float, var_330_float)
{
	var_331_bool = var_328_float < var_329_float;
	if(var_331_bool != 0) {
		var_329_float = var_327_float;
		return 0;
	}
	var_332_bool = var_328_float > var_330_float;
	if(var_332_bool != 0) {
		var_330_float = var_327_float;
		return 0;
	}
	var_328_float = var_327_float;
	return 0;
}


func_472(var_2_int, var_4_int)
{
	var_249_float = 0; var_250_int = 0; var_251_float = 0; var_252_int = 0;
	var_253_bool = var_2_int == 0; //@nz
	if(var_253_bool != 0) {
		return 4;
	}
	var_254_int = var_4_int;
	if(var_254_int != 0) {
		var_4_int = var_4_int + (int)-1;
		var_257_bool = var_4_int > (int)0;
		if(var_257_bool != 0) {
			return 4;
		}
	}
	rand(var_251_float);
	var_258_float = 0;
	func_510(var_258_float);
	var_259_bool = var_251_float < var_258_float;
	if(var_259_bool != 0) {
		irand(var_252_int, var_2_int);
		var_252_int = var_252_int + (int)1;
		var_262_int = "attack" + var_252_int;
		Speak(var_262_int);
		var_263_int = 0;
		func_508(var_263_int);
		var_4_int = var_263_int;
	}
	return 4;
}


func_345(var_353_bool, var_354_float)
{
	var_355_float = 0; var_356_bool = 0; var_357_float = 0; var_358_bool = 0;
	rand(var_357_float);
	var_359_bool = var_357_float < var_354_float;
	if(var_359_bool != 0) {

	Label_350:
		IsAnimationPlaying(var_358_bool);
		var_360_bool = var_358_bool == 0; //@nz
		if(var_360_bool != 0) {
		} else {
			var_361_bool = 0;
			func_409(var_358_bool, var_361_bool);
			if(var_361_bool != 0) {
				var_353_bool = 1;
				sync();
				goto Label_350;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_367;
	
Label_367:
	var_353_bool = 0;
	return 4;
	
}


func_862(var_0_object, var_1_int, var_2_int, var_3_bool, var_81_object, var_82_object)
{
	var_0_object = var_82_object;
	var_1_int = var_81_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_88_string = "";
		func_915(var_82_object, "Neutral");
		@@@var_0_object:SetMessage((int)9122);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9123, (int)10004, (int)10003);
		goto Label_885;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x362";
	}
Label_885:
	var_107_bool = 0;
	func_1652(var_107_bool);
	if(var_107_bool != 0) {

	Label_889:
		lshWaitForAnimEnd();
		var_108_bool = var_3_bool;
		if(var_108_bool != 0) {
		} else {
			var_109_string = "";
			var_109_string = var_2_int;
			func_1449(var_109_string);
			goto Label_889;
	}
		PlayAnimation("all", "idle");

	Label_904:
		WaitForAnimEnd();
		var_112_bool = var_3_bool;
		if(var_112_bool != 0) {
			goto Label_914;
		}
		PlayAnimation("all", "idle");
		goto Label_904;
	}
	goto Label_914;
	
Label_914:
	return 0;
	
}


func_1246(var_85_bool, var_86_object)
{
	var_87_bool = 0; var_88_bool = 0;
	@@var_86_object:IsDead(var_88_bool);
	var_88_bool = var_85_bool;
	return 2;
}


func_1632()
{
	var_23_object = Obj(); var_24_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_24_object, (int)72, (int)1, (int)12154);
	var_29_bool = 0; var_30_object = Obj(); var_31_int = 0;
	var_24_object = var_30_object;
	func_1586(var_29_bool, var_30_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1378(var_173_object)
{
	var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0);
	@@var_173_object:GetPosition(var_177_cvector);
	GetPosition(var_178_cvector);
	var_179_cvector = var_177_cvector - var_178_cvector;
	var_180_float = GetByIndex(var_179_cvector, 0);
	var_181_float = GetByIndex(var_179_cvector, 2);
	RotateAsync(var_180_float, var_181_float);
	return 6;
}


func_226(var_0_object, var_267_float, var_268_int)
{
	var_269_object = Obj(); var_270_float = 0; var_271_float = 0; var_272_object = Obj(); var_273_float = 0; var_274_float = 0;
	var_276_float = var_267_float * (float)0.8999999761581421;
	GetVictim(var_276_float, var_272_object);
	ReportAttack(var_0_object);
	var_277_bool = var_272_object == var_0_object;
	if(var_277_bool != 0) {
		var_278_float = 0; var_279_object = Obj(); var_280_int = 0;
		var_272_object = var_279_object;
		var_268_int = var_280_int;
		func_15(var_280_int);
		var_278_float = var_273_float;
		var_281_float = 0; var_282_object = Obj(); var_283_float = 0; var_284_int = 0;
		var_272_object = var_282_object;
		var_273_float = var_283_float;
		var_285_int = 0; var_286_object = Obj(); var_287_int = 0;
		var_272_object = var_286_object;
		var_268_int = var_287_int;
		func_18(var_287_int);
		var_285_int = var_284_int;
		func_1182(var_281_float, var_282_object, var_283_float, var_284_int);
		var_281_float = var_274_float;
		var_334_int = 0;
		func_504(var_334_int);
		ReportHit(var_0_object, var_334_int, var_274_float, var_273_float);
		var_335_object = Obj(); var_336_float = 0;
		var_272_object = var_335_object;
		var_274_float = var_336_float;
		func_506();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1251(var_74_bool, var_75_object)
{
	var_76_object = Obj(); var_77_object = Obj(); var_78_object = Obj(); var_79_object = Obj();
	var_80_bool = var_75_object == 0; //@ne
	if(var_80_bool != 0) {
		var_74_bool = 0;
		return 4;
	}
	var_81_bool = 0;
	var_81_bool = 0;
	var_84_bool = IsFuncExist(var_75_object, "IsDead", (int)1);
	if(var_84_bool != 0) {
		var_85_bool = 0; var_86_object = Obj();
		var_75_object = var_86_object;
		func_1246(var_85_bool, var_86_object);
		if(var_85_bool != 0) {
			var_81_bool = 1;
		}
	}
	if(var_81_bool != 0) {
		var_74_bool = 0;
		return 4;
	}
	GetScene(var_78_object);
	var_89_bool = var_78_object == 0; //@ne
	if(var_89_bool != 0) {
		var_74_bool = 0;
		return 4;
	}
	@@var_75_object:GetScene(var_79_object);
	var_90_bool = var_78_object != var_79_object;
	if(var_90_bool != 0) {
		var_74_bool = 0;
		return 4;
	}
	var_74_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1506(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj();
	FindActor(var_52_object, var_49_string);
	var_53_bool = var_52_object == 0; //@ne
	if(var_53_bool != 0) {
		var_48_bool = 0;
		return 2;
	}
	Trigger(var_52_object, var_50_string);
	var_48_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1389(var_29_bool, var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0;
	@@var_30_object:GetPosition(var_40_cvector);
	@@var_30_object:GetEyesHeight(var_39_float);
	var_47_float = GetByIndex(var_40_cvector, 1);
	var_47_float = var_47_float + var_39_float;
	SetByIndex(var_40_cvector, 1) = var_47_float;
	GetPosition(var_41_cvector);
	GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_41_cvector, 1);
	var_48_float = var_48_float + var_39_float;
	SetByIndex(var_41_cvector, 1) = var_48_float;
	var_42_cvector = var_40_cvector - var_41_cvector;
	var_49_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_50_int = var_42_cvector | var_42_cvector;
	var_51_float = sqrt(var_50_int);
	var_42_cvector = var_42_cvector / var_51_float;
	var_43_cvector = -var_42_cvector;
	var_53_float = var_42_cvector * (int)70;
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	var_55_cvector = var_43_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1474(var_54_cvector, var_55_cvector);
	var_63_float = var_54_cvector * (int)25;
	var_64_int = var_53_float + var_63_float;
	var_44_cvector = var_64_int - CVector(0.0, 10.0, 0.0);
	var_45_cvector = var_41_cvector + var_44_cvector;
	IsOverrideActive(var_46_bool);
	var_66_bool = var_46_bool;
	if(var_66_bool != 0) {
		var_29_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_45_cvector, var_43_cvector);
	var_67_float = GetByIndex(var_44_cvector, 0);
	var_68_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_67_float, var_68_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_29_bool = 1;
	return 16;
}


func_1518(var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	AddItem(var_18_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_18_bool, "alpha_pills", (int)0, (int)2);
	var_25_object = Obj();
	var_16_object = var_25_object;
	TaskCall(2);
	func_663(var_25_object);
	TaskReturn();
	return 2;
}


func_1648(var_70_int)
{
	var_70_int = 4031;
	return 0;
}


func_369(var_0_object, var_195_bool, var_196_float)
{
	var_197_bool = 0; var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_bool = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_float = 0;
	
Label_370:
	IsAnimationPlaying(var_202_bool);
	var_207_bool = var_202_bool == 0; //@nz
	if(var_207_bool != 0) {
	} else {
		var_208_bool = 0;
		func_409(var_206_float, var_208_bool);
		if(var_208_bool != 0) {
			var_195_bool = 1;
			return 10;
		}
		var_233_bool = 0; var_234_object = Obj();
		var_234_object = var_0_object;
		func_1287(var_233_bool, var_234_object);
		var_235_bool = var_233_bool == 0; //@nz
		if(var_235_bool != 0) {
			var_195_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_203_cvector);
		GetPFPosition(var_204_cvector);
		var_205_cvector = var_203_cvector - var_204_cvector;
		var_206_float = var_205_cvector | var_205_cvector;
		var_236_float = var_196_float * var_196_float;
		var_237_bool = var_206_float < var_236_float;
		if(var_237_bool != 0) {
			var_238_bool = 0; var_239_float = 0;
			var_196_float = var_239_float;
			func_265(var_205_cvector, var_206_float, var_238_bool, var_239_float);
			var_195_bool = 1;
			sync();
			goto Label_370;
		}
		return 10;
	}
	var_195_bool = 0;
	return 10;
	
}


func_1650(var_71_string)
{
	var_71_string = "ui/NPC_Black.png";
	return 0;
}


func_1652(var_89_bool)
{
	var_89_bool = 0;
	return 0;
}


func_504(var_334_int)
{
	var_334_int = 0;
	return 0;
}


func_506()
{
	return 0;
}


func_508(var_263_int)
{
	var_263_int = 1;
	return 0;
}


func_510(var_258_float)
{
	var_258_float = 0.5;
	return 0;
}


func_1170(var_92_bool, var_93_object, var_94_string)
{
	var_95_bool = 0; var_96_bool = 0;
	var_99_bool = IsFuncExist(var_93_object, "HasProperty", (int)2);
	var_100_bool = var_99_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_92_bool = 0;
		return 2;
	}
	@@var_93_object:HasProperty(var_94_string, var_96_bool);
	var_96_bool = var_92_bool;
	return 2;
}


