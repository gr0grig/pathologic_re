// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SensePlayerOnly/1,Hold/0,IsPlayerActor/2,IsLoaded/1,SetDeathStateAndRemove/0,FindActor/2,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,Speak/1,GetPosition/1,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,Trigger/2,GetVariable/2,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:quest_d1_03|W:butcher_battle|W:player|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:playing |W:start: |W:end: |W:ui/NPC_None.png|W:butcher_fail|W:butcher_death
// @GLOBALS: 0:object:
// @RUN_OP: 0xb3
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x89 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0xbb vars=object
// @EVENT_17: op=0xc8 vars=object
// @EVENT_26: op=0xd3 vars=string
// @EVENT_6: op=0xdf vars=
// @TASK_3: vars=object,int,int,bool,int params=0
// @EVENT_6: op=0xfe vars=
// @TASK_4: vars=bool,object params=6
// @EVENT_6: op=0x2ef vars=
// @EVENT_7: op=0x35b vars=int
// @EVENT_10: op=0x36d vars=object
// @EVENT_41: op=0x378 vars=object
// @TASK_5: vars= params=1
// @EVENT_6: op=0x38c vars=
// @EVENT_22: op=0x405 vars=object,int,float,float
// @EVENT_16: op=0x407 vars=object,string
// @EVENT_41: op=0x409 vars=object
// @STANDALONE_EVENT_22: op=0x597 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x59f vars=object,string
// @STANDALONE_EVENT_41: op=0x5ac vars=object
// @PE: 0x3f,0x79,0x89,0xbb,0xf8,0xfb,0x2e9,0x35b,0x36d,0x378,0x381,0x38f,0x3ef,0x405,0x407,0x409,0x40b,0x526,0x54d,0x554,0x58a,0x597,0x5ac

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	if((int)1 != 0) {
		func_1340();
		var_18_bool = var_13_bool == (int)5801;
		if(var_18_bool != 0) {
			var_19_string = "";
			func_121(var_14_object, "Neutral");
			@@@var_0_object:SetMessage((int)5264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5265, (int)-1, (int)5802);
			@@@var_0_object:AddReply((int)6042, (int)-1, (int)6665);
			return 0;
		}
		var_3_string = true;
		var_41_bool = 0;
		func_1408(var_41_bool);
		if(var_41_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8a";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	TaskCall(3);
	func_228();
	TaskReturn();
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_16_bool = var_15_bool;
	if(var_16_bool != 0) {
		TaskCall(3);
		func_228();
		TaskReturn();
	}
	return 2;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	var_17_bool = var_13_object == "cleanup";
	if(var_17_bool != 0) {
		var_0_object = true;
		IsLoaded(var_15_bool);
		var_18_bool = var_15_bool == 0; //@nz
		if(var_18_bool != 0) {
			SetDeathStateAndRemove();
		}
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_object = var_0_object;
	if(var_13_object != 0) {
		SetDeathStateAndRemove();
	}
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_1410();
	Hold();
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_1410();
	Hold();
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_int)
{
	var_15_bool = var_13_int != (int)0;
	if(var_15_bool != 0) {
		return 0;
	}
	var_16_bool = 0; var_17_object = Obj();
	var_17_object = var_1_object;
	func_897(var_16_bool, var_17_object);
	var_52_bool = var_16_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object)
{
	RequestClearPath(var_13_object);
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object)
{
	func_881(var_13_object);
	var_13_object = Obj();
	func_1452();
	return 0;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	SetDeathStateAndRemove();
	return 0;
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_float, var_16_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0;
	var_13_object = var_17_object;
	var_14_int = var_18_int;
	var_15_float = var_19_float;
	func_1184(var_18_int, var_19_float);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0;
	var_18_bool = var_14_string == "health";
	if(var_18_bool != 0) {
		GetProperty("health", var_16_float);
		var_21_bool = var_16_float <= (int)0;
		if(var_21_bool != 0) {
			SignalDeath(var_13_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_1418(var_14_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_0_object = false;
	SensePlayerOnly((bool)1);
	
Label_183:
	Hold();
	goto Label_183;
}
EMIT "Return(); Pop(0)";


func_1408(var_85_bool)
{
	var_85_bool = 0;
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj();
	var_15_object = var_26_object;
	func_1262(var_25_bool, var_26_object);
	var_65_bool = var_25_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_66_int = 0;
	func_1404(var_66_int);
	@@var_21_object:SetNPCName(var_66_int);
	var_67_string = "";
	func_1406(var_67_string);
	@@var_21_object:SetPhoto(var_67_string);
	var_68_int = 0;
	func_1387(var_68_int);
	@@var_21_object:SetPlayerName(var_68_int);
	IsOverrideActive(var_22_bool);
	var_76_bool = var_22_bool;
	if(var_76_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_77_object = Obj(); var_78_object = Obj();
	var_15_object = var_77_object;
	var_21_object = var_78_object;
	TaskCall(1);
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_45:
	var_114_bool = var_24_bool == 0; //@nz
	if(var_114_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_45;
	}
	var_15_object = Obj();
	func_1318();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1410()
{
	SetDeathStateAndRemove();
	var_13_bool = 0; var_14_string = ""; var_15_string = "";
	func_1375(var_13_bool, "quest_d1_03", "butcher_fail");
	return 0;
}


func_897(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_object = var_19_object;
	func_1160(var_18_bool, var_19_object);
	var_18_bool = var_16_bool;
	return 0;
}


func_260(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_31_object, var_32_bool, var_33_float, var_120_bool)
{
	var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_float = 0; var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_float = 0;
	var_1_object = 0;
	
Label_262:
	var_57_int = var_1_object + (int)1;
	var_58_int = "attack_begin" + var_57_int;
	HasAnimation(var_44_bool, "all", var_58_int);
	var_59_bool = var_44_bool == 0; //@nz
	if(var_59_bool != 0) {
	} else {
									var_1_object = var_1_object + (int)1;
									goto Label_262;
	}
	var_2_object = 0;
	
Label_276:
	var_62_int = var_2_object + (int)1;
	var_63_int = "attack" + var_62_int;
	IsExisting3DSound(var_45_bool, var_63_int);
	var_64_bool = var_45_bool == 0; //@nz
	if(var_64_bool != 0) {
	} else {
								var_2_object = var_2_object + (int)1;
								goto Label_276;

	}
	var_4_bool = 0;
	var_67_bool = IsFuncExist(var_31_object, "@GetAttackDistance", (int)1);
	if(var_67_bool != 0) {
		@@var_31_object:GetAttackDistance(var_46_float);
		var_46_float = var_46_float + (int)50;
	} else {
							var_33_float = var_46_float;

	}
	var_70_bool = var_46_float >= (int)150;
	if(var_70_bool != 0) {
		var_46_float = 150;
	}
	var_3_string = false;
	var_0_object = var_31_object;
	IsPlayerActor(var_0_object, var_49_bool);
	var_71_bool = var_32_bool;
	if(var_71_bool != 0) {
		var_50_bool = 0;
	} else {
						var_50_bool = 1;

	}
Label_312:
	var_72_bool = 0;
	var_72_bool = 0;
	var_73_bool = 0; var_74_object = Obj();
	var_74_object = var_0_object;
	func_1160(var_73_bool, var_74_object);
	if(var_73_bool != 0) {
		var_107_bool = var_3_string == 0; //@nz
		if(var_107_bool != 0) {
			var_72_bool = 1;
		}
	}
	if(var_72_bool != 0) {
		@@@var_0_object:GetPFPosition(var_47_cvector);
		GetPFPosition(var_48_cvector);
		var_51_cvector = var_47_cvector - var_48_cvector;
		var_52_float = var_51_cvector | var_51_cvector;
		var_109_int = (float)400.0 + var_46_float;
		var_111_int = (float)400.0 + var_46_float;
		var_112_float = var_109_int * var_111_int;
		var_113_bool = var_52_float >= var_112_float;
		if(var_113_bool != 0) {
			var_114_bool = 0; var_115_object = Obj(); var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_bool = 0;
			var_115_object = var_0_object;
			var_46_float = var_116_float;
			TaskCall(4);
			func_757(var_120_bool, var_121_object, var_114_bool, var_115_object, var_116_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_167_bool = var_120_bool == 0; //@nz
			if(var_167_bool != 0) {
			} else {
		} else {
				var_173_float = var_33_float * var_33_float;
				var_174_bool = var_52_float >= var_173_float;
				if(var_174_bool != 0) {
					var_175_bool = (bool)0 == 0; //@nz
					if(var_175_bool != 0) {
						var_176_object = Obj();
						var_176_object = var_0_object;
						func_1251(var_176_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_50_bool = 1;
					}
					rand(var_53_float);
					var_187_bool = 0;
					var_189_bool = var_53_float < (float)0.6000000238418579;
					if(var_189_bool != 1) {
						var_190_bool = 0;
						func_700((bool)1, var_190_bool);
						if(var_190_bool != 1) {
							var_187_bool = 0;
						}
					}
					if(var_187_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_198_bool = 0; var_199_float = 0;
						var_33_float = var_199_float;
						func_608(var_53_float, var_198_bool, var_199_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_368_bool = 0;
						func_700(var_53_float, var_368_bool);
						var_369_bool = var_368_bool == 0; //@nz
						if(var_369_bool == 0) goto Label_438;
						var_370_bool = 0; var_371_object = Obj();
						var_371_object = var_0_object;
						func_1160(var_370_bool, var_371_object);
						var_372_bool = var_370_bool == 0; //@nz
						if(var_372_bool != 0) {
							goto Label_448;
						}
						@@@var_0_object:GetPFPosition(var_47_cvector);
						GetPFPosition(var_48_cvector);
						var_51_cvector = var_47_cvector - var_48_cvector;
						var_52_float = var_51_cvector | var_51_cvector;
						var_373_float = var_33_float * var_33_float;
						var_374_bool = var_52_float < var_373_float;
						if(var_374_bool == 0) goto Label_438;
						var_375_bool = 0; var_376_float = 0;
						var_33_float = var_376_float;
						func_504(var_52_float, var_53_float, var_375_bool, var_376_float);
						var_377_bool = var_375_bool == 0; //@nz
						if(var_377_bool == 0) goto Label_438;
						goto Label_448;
				}
					var_378_bool = 0; var_379_float = 0;
					var_33_float = var_379_float;
					func_504(var_52_float, var_53_float, var_378_bool, var_379_float);
					var_380_bool = var_378_bool == 0; //@nz
					if(var_380_bool != 0) {
						goto Label_448;
					}
					var_50_bool = 1;

				}
			Label_438:
				goto Label_447;
		}
		Label_447:
			goto Label_312;

		}
	}
Label_448:
	WaitForAnimEnd();
	var_168_string = var_3_string;
	if(var_168_string != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_171_bool = var_49_bool;
	if(var_171_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_1160(var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_19_object = var_23_object;
	func_1124(var_22_bool, var_23_object);
	var_39_bool = var_22_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	var_40_bool = 0; var_41_object = Obj(); var_42_string = "";
	var_19_object = var_41_object;
	func_1043(var_40_bool, var_41_object, "noaccess");
	var_49_bool = var_40_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_18_bool = 1;
		return 2;
	}
	@@var_19_object:GetProperty("noaccess", var_21_int);
	var_18_bool = var_21_int == (int)0;
	return 2;
}


func_648(var_0_object, var_211_bool)
{
	var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_float = 0; var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_float = 0; var_221_float = 0;
	var_222_bool = 0; var_223_object = Obj();
	var_223_object = var_0_object;
	func_1160(var_222_bool, var_223_object);
	var_224_bool = var_222_bool == 0; //@nz
	if(var_224_bool != 0) {
		var_211_bool = 0;
		return 10;
	}
	var_225_bool = 0;
	func_700(var_221_float, var_225_bool);
	if(var_225_bool != 0) {
		@@@var_0_object:GetPFPosition(var_217_cvector);
		GetPFPosition(var_218_cvector);
		var_219_cvector = var_217_cvector - var_218_cvector;
		var_220_float = var_219_cvector | var_219_cvector;
		@@@var_0_object:GetAttackDistance(var_221_float);
		var_221_float = var_221_float + (int)50;
		var_227_float = var_221_float * var_221_float;
		var_228_bool = var_220_float <= var_227_float;
		if(var_228_bool != 0) {
			func_681(var_221_float);
			var_211_bool = 1;
			return 10;
		}
	}
	var_211_bool = 0;
	return 10;
}


func_904(var_156_string)
{
	var_156_string = "walk";
	return 0;
}


func_906(var_157_string)
{
	var_157_string = "run";
	return 0;
}


func_1035(var_312_string, var_313_int)
{
	var_315_bool = var_313_int == (int)1;
	if(var_315_bool != 0) {
		var_312_string = "fire";
		return 0;
	}
	var_312_string = "phys";
	return 0;
}


func_1418(var_14_object)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = "";
	func_1375(var_15_bool, "quest_d1_03", "butcher_death");
	var_21_object = Obj();
	var_14_object = var_21_object;
	TaskCall(5);
	func_911(var_21_object);
	TaskReturn();
	return 0;
}


func_911(var_21_object)
{
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_920(var_22_object);
	
Label_916:
	Hold();
	goto Label_916;
}
EMIT "Return(); Pop(0)";


func_1043(var_40_bool, var_41_object, var_42_string)
{
	var_43_bool = 0; var_44_bool = 0;
	var_47_bool = IsFuncExist(var_41_object, "HasProperty", (int)2);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_40_bool = 0;
		return 2;
	}
	@@var_41_object:HasProperty(var_42_string, var_44_bool);
	var_44_bool = var_40_bool;
	return 2;
}


func_920(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0);
	var_43_bool = var_22_object == 0; //@ne
	if(var_43_bool != 0) {
		var_44_string = "";
		func_1007("fdie");
	} else {
		@@var_22_object:GetPosition(var_33_cvector);
		GetPosition(var_34_cvector);
		GetDirection(var_35_cvector);
		var_36_cvector = var_34_cvector - var_33_cvector;
		var_47_float = GetByIndex(var_36_cvector, 0);
		var_48_float = GetByIndex(var_35_cvector, 0);
		var_49_float = var_47_float * var_48_float;
		var_50_float = GetByIndex(var_36_cvector, 2);
		var_51_float = GetByIndex(var_35_cvector, 2);
		var_52_float = var_50_float * var_51_float;
		var_53_int = var_49_float + var_52_float;
		var_55_bool = var_53_int >= (int)0;
		if(var_55_bool != 0) {
			var_37_string = "fdie";
		} else {
				var_37_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_22_object = var_38_object;
		var_58_bool = IsFuncExist(var_22_object, "GetScriptProperty", (int)2);
		if(var_58_bool != 0) {
			@@var_22_object:HasScriptProperty(var_39_bool, "Owner");
			var_60_bool = var_39_bool;
			if(var_60_bool != 0) {
				@@var_22_object:GetScriptProperty(var_38_object, "Owner");
				var_62_bool = var_38_object == 0; //@ne
				if(var_62_bool != 0) {
					var_22_object = var_38_object;
				}
			}
		}
		var_65_bool = IsFuncExist(var_38_object, "@GetEyesHeight", (int)1);
		if(var_65_bool != 0) {
			@@var_38_object:GetEyesHeight(var_41_float);
			var_42_cvector = CVector(0.0, 0.0, 0.0);
			var_66_float = GetByIndex(var_42_cvector, 1);
			var_41_float = var_66_float;
			SetByIndex(var_42_cvector, 1) = var_66_float;
			LookAsync(var_22_object, "head", var_42_cvector);
			var_40_bool = 1;
		} else {
			var_40_bool = 0;

		}
		PlayAnimation("all", var_37_string);
		WaitForAnimEnd();
		var_69_bool = var_40_bool;
		if(var_69_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_37_string);
		RemoveEnvelope();
		var_38_object = 0;
	}
	return 20;
	
}


func_1055(var_284_float, var_285_object, var_286_float, var_287_int)
{
	var_291_int = 0; var_292_string = ""; var_293_int = 0; var_294_float = 0; var_295_float = 0; var_296_float = 0; var_297_int = 0; var_298_string = ""; var_299_int = 0; var_300_float = 0; var_301_float = 0; var_302_float = 0;
	var_303_bool = 0; var_304_object = Obj(); var_305_string = "";
	var_285_object = var_304_object;
	func_1043(var_303_bool, var_304_object, "health");
	var_306_bool = var_303_bool == 0; //@nz
	if(var_306_bool != 0) {
		var_284_float = 0.0;
		return 12;
	}
	var_307_bool = 0; var_308_object = Obj(); var_309_string = "";
	var_285_object = var_308_object;
	func_1043(var_307_bool, var_308_object, "armor");
	var_310_bool = var_307_bool == 0; //@nz
	if(var_310_bool != 0) {
		var_297_int = 0;
	} else {
			@@var_285_object:GetProperty("armor", var_297_int);
	}
	var_312_string = ""; var_313_int = 0;
	var_287_int = var_313_int;
	func_1035(var_312_string, var_313_int);
	var_298_string = "armor_" + var_312_string;
	var_316_bool = 0; var_317_object = Obj(); var_318_string = "";
	var_285_object = var_317_object;
	var_298_string = var_318_string;
	func_1043(var_316_bool, var_317_object, var_318_string);
	var_319_bool = var_316_bool == 0; //@nz
	if(var_319_bool != 0) {
		var_299_int = 0;
	} else {
		@@var_285_object:GetProperty(var_298_string, var_299_int);

	}
	var_320_float = 0; var_321_float = 0; var_322_float = 0;
	var_323_int = var_297_int + var_299_int;
	var_321_float = var_323_int / (float)100.0;
	func_1357(var_320_float, var_321_float, (float)1);
	var_320_float = var_300_float;
	@@var_285_object:GetProperty("health", var_301_float);
	var_328_int = (int)1 - var_300_float;
	var_302_float = var_286_float * var_328_int;
	var_330_float = 0; var_331_float = 0; var_332_float = 0; var_333_float = 0;
	var_331_float = var_301_float - var_302_float;
	func_1364(var_330_float, var_331_float, (float)0, (float)1);
	@@var_285_object:SetProperty("health", var_330_float);
	var_302_float = var_284_float;
	return 12;
	
}


func_1184(var_17_object, var_18_int)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = "";
	var_40_bool = 0;
	var_40_bool = 0;
	var_42_bool = var_18_int != (int)4;
	if(var_42_bool != 0) {
		var_44_bool = var_18_int != (int)5;
		if(var_44_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		GetScene(var_30_object);
		GetPosition(var_32_cvector);
		GetEyesHeight(var_33_float);
		var_45_float = GetByIndex(var_32_cvector, 1);
		var_47_float = var_33_float / (int)2;
		var_45_float = var_45_float + var_47_float;
		SetByIndex(var_32_cvector, 1) = var_45_float;
		AddActorByType(var_31_object, "scripted", var_30_object, var_32_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_31_object = 0;
		var_30_object = 0;
	}
	var_51_bool = var_17_object == 0; //@ne
	if(var_51_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_34_int);
	var_53_bool = var_34_int < (int)0;
	if(var_53_bool != 0) {
		return 20;
	}
	@@var_17_object:GetPosition(var_35_cvector);
	GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_38_cvector = var_36_cvector - var_35_cvector;
	var_54_float = GetByIndex(var_38_cvector, 0);
	var_55_float = GetByIndex(var_37_cvector, 0);
	var_56_float = var_54_float * var_55_float;
	var_57_float = GetByIndex(var_38_cvector, 2);
	var_58_float = GetByIndex(var_37_cvector, 2);
	var_59_float = var_57_float * var_58_float;
	var_60_int = var_56_float + var_59_float;
	var_62_bool = var_60_int >= (int)0;
	if(var_62_bool != 0) {
		var_39_string = "fhit";
	} else {
		var_39_string = "bhit";
	}
	var_65_int = var_39_string + "1";
	var_67_int = var_39_string + "2";
	FadeSecondaryAnimation("hit_react", var_65_int, var_67_int, (int)-10);
	return 20;
	
}


func_1318()
{
	CameraSwitchToNormal();
	return 0;
}


func_681(var_0_object)
{
	var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0);
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_231_cvector);
	GetPFPosition(var_232_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1322(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0;
	var_94_int = "playing " + var_88_string;
	Trace(var_94_int);
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float);
	lshPlayAnimation(var_91_float, var_92_float);
	var_96_int = "start: " + var_91_float;
	Trace(var_96_int);
	var_98_int = "end: " + var_92_float;
	Trace(var_98_int);
	return 4;
}


func_700(var_0_object, var_190_bool)
{
	var_191_bool = 0; var_192_bool = 0;
	var_195_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_195_bool != 0) {
		@@@var_0_object:IsAttacking(var_192_bool);
		var_192_bool = var_190_bool;
		return 2;
	}
	var_190_bool = 0;
	return 2;
}


func_1340()
{
	var_16_bool = 0;
	func_1408(var_16_bool);
	if(var_16_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_84_string = "";
		func_121(var_78_object, "Neutral");
		@@@var_0_object:SetMessage((int)5264);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)5265, (int)-1, (int)5802);
		@@@var_0_object:AddReply((int)6042, (int)-1, (int)6665);
		goto Label_91;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_91:
	var_106_bool = 0;
	func_1408(var_106_bool);
	if(var_106_bool != 0) {

	Label_95:
		lshWaitForAnimEnd();
		var_107_string = var_3_string;
		if(var_107_string != 0) {
		} else {
			var_108_string = "";
			var_108_string = var_2_object;
			func_1322(var_108_string);
			goto Label_95;
	}
		PlayAnimation("all", "idle");

	Label_110:
		WaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
			goto Label_120;
		}
		PlayAnimation("all", "idle");
		goto Label_110;
	}
	goto Label_120;
	
Label_120:
	return 0;
	
}


func_1347(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0;
	var_55_int = var_51_cvector | var_51_cvector;
	var_54_float = sqrt(var_55_int);
	var_56_float = 9.999999974752427e-07;
	var_57_bool = var_54_float < var_56_float;
	if(var_57_bool != 0) {
		var_50_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_50_cvector = var_51_cvector / var_54_float;
	return 2;
}


func_711(var_2_object, var_4_bool)
{
	var_252_float = 0; var_253_int = 0; var_254_float = 0; var_255_int = 0;
	var_256_bool = var_2_object == 0; //@nz
	if(var_256_bool != 0) {
		return 4;
	}
	var_257_bool = var_4_bool;
	if(var_257_bool != 0) {
		var_4_bool = var_4_bool + (int)-1;
		var_260_bool = var_4_bool > (int)0;
		if(var_260_bool != 0) {
			return 4;
		}
	}
	rand(var_254_float);
	var_261_float = 0;
	func_749(var_261_float);
	var_262_bool = var_254_float < var_261_float;
	if(var_262_bool != 0) {
		irand(var_255_int, var_2_object);
		var_255_int = var_255_int + (int)1;
		var_265_int = "attack" + var_255_int;
		Speak(var_265_int);
		var_266_int = 0;
		func_747(var_266_int);
		var_4_bool = var_266_int;
	}
	return 4;
}


func_584(var_356_bool, var_357_float)
{
	var_358_float = 0; var_359_bool = 0; var_360_float = 0; var_361_bool = 0;
	rand(var_360_float);
	var_362_bool = var_360_float < var_357_float;
	if(var_362_bool != 0) {

	Label_589:
		IsAnimationPlaying(var_361_bool);
		var_363_bool = var_361_bool == 0; //@nz
		if(var_363_bool != 0) {
		} else {
			var_364_bool = 0;
			func_648(var_361_bool, var_364_bool);
			if(var_364_bool != 0) {
				var_356_bool = 1;
				sync();
				goto Label_589;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_606;
	
Label_606:
	var_356_bool = 0;
	return 4;
	
}


func_1357(var_320_float, var_321_float, var_322_float)
{
	var_325_bool = var_321_float < var_322_float;
	if(var_325_bool != 0) {
		var_321_float = var_320_float;
	} else {
		var_322_float = var_320_float;
	}
	return 0;
	
}


func_465(var_0_object, var_270_float, var_271_int)
{
	var_272_object = Obj(); var_273_float = 0; var_274_float = 0; var_275_object = Obj(); var_276_float = 0; var_277_float = 0;
	var_279_float = var_270_float * (float)0.8999999761581421;
	GetVictim(var_279_float, var_275_object);
	ReportAttack(var_0_object);
	var_280_bool = var_275_object == var_0_object;
	if(var_280_bool != 0) {
		var_281_float = 0; var_282_object = Obj(); var_283_int = 0;
		var_275_object = var_282_object;
		var_271_int = var_283_int;
		func_248(var_283_int);
		var_281_float = var_276_float;
		var_284_float = 0; var_285_object = Obj(); var_286_float = 0; var_287_int = 0;
		var_275_object = var_285_object;
		var_276_float = var_286_float;
		var_288_int = 0; var_289_object = Obj(); var_290_int = 0;
		var_275_object = var_289_object;
		var_271_int = var_290_int;
		func_251(var_290_int);
		var_288_int = var_287_int;
		func_1055(var_284_float, var_285_object, var_286_float, var_287_int);
		var_284_float = var_277_float;
		var_337_int = 0;
		func_743(var_337_int);
		ReportHit(var_0_object, var_337_int, var_277_float, var_276_float);
		var_338_object = Obj(); var_339_float = 0;
		var_275_object = var_338_object;
		var_277_float = var_339_float;
		func_745();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1364(var_330_float, var_331_float, var_332_float, var_333_float)
{
	var_334_bool = var_331_float < var_332_float;
	if(var_334_bool != 0) {
		var_332_float = var_330_float;
		return 0;
	}
	var_335_bool = var_331_float > var_333_float;
	if(var_335_bool != 0) {
		var_333_float = var_330_float;
		return 0;
	}
	var_331_float = var_330_float;
	return 0;
}


func_1375(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj();
	FindActor(var_19_object, var_16_string);
	var_20_bool = var_19_object == 0; //@ne
	if(var_20_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	Trigger(var_19_object, var_17_string);
	var_15_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_608(var_0_object, var_198_bool, var_199_float)
{
	var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_float = 0; var_205_bool = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_float = 0;
	
Label_609:
	IsAnimationPlaying(var_205_bool);
	var_210_bool = var_205_bool == 0; //@nz
	if(var_210_bool != 0) {
	} else {
		var_211_bool = 0;
		func_648(var_209_float, var_211_bool);
		if(var_211_bool != 0) {
			var_198_bool = 1;
			return 10;
		}
		var_236_bool = 0; var_237_object = Obj();
		var_237_object = var_0_object;
		func_1160(var_236_bool, var_237_object);
		var_238_bool = var_236_bool == 0; //@nz
		if(var_238_bool != 0) {
			var_198_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_206_cvector);
		GetPFPosition(var_207_cvector);
		var_208_cvector = var_206_cvector - var_207_cvector;
		var_209_float = var_208_cvector | var_208_cvector;
		var_239_float = var_199_float * var_199_float;
		var_240_bool = var_209_float < var_239_float;
		if(var_240_bool != 0) {
			var_241_bool = 0; var_242_float = 0;
			var_199_float = var_242_float;
			func_504(var_208_cvector, var_209_float, var_241_bool, var_242_float);
			var_198_bool = 1;
			sync();
			goto Label_609;
		}
		return 10;
	}
	var_198_bool = 0;
	return 10;
	
}


func_1119(var_33_bool, var_34_object)
{
	var_35_bool = 0; var_36_bool = 0;
	@@var_34_object:IsDead(var_36_bool);
	var_36_bool = var_33_bool;
	return 2;
}


func_248(var_281_float)
{
	var_281_float = 0.10000000149011612;
	return 0;
}


func_1251(var_176_object)
{
	var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0);
	@@var_176_object:GetPosition(var_180_cvector);
	GetPosition(var_181_cvector);
	var_182_cvector = var_180_cvector - var_181_cvector;
	var_183_float = GetByIndex(var_182_cvector, 0);
	var_184_float = GetByIndex(var_182_cvector, 2);
	RotateAsync(var_183_float, var_184_float);
	return 6;
}


func_228()
{
	var_22_object = Obj(); var_23_object = Obj();
	var_24_bool = 0; var_25_string = ""; var_26_string = "";
	func_1375(var_24_bool, "quest_d1_03", "butcher_battle");
	FindActor(var_23_object, "player");
	var_31_object = Obj(); var_32_bool = 0; var_33_float = 0;
	var_23_object = var_31_object;
	func_260(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_23_object, var_31_object, (bool)1, (float)180.0);
	func_1410();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1124(var_22_bool, var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	var_28_bool = var_23_object == 0; //@ne
	if(var_28_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	var_29_bool = 0;
	var_29_bool = 0;
	var_32_bool = IsFuncExist(var_23_object, "IsDead", (int)1);
	if(var_32_bool != 0) {
		var_33_bool = 0; var_34_object = Obj();
		var_23_object = var_34_object;
		func_1119(var_33_bool, var_34_object);
		if(var_33_bool != 0) {
			var_29_bool = 1;
		}
	}
	if(var_29_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	GetScene(var_26_object);
	var_37_bool = var_26_object == 0; //@ne
	if(var_37_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	@@var_23_object:GetScene(var_27_object);
	var_38_bool = var_26_object != var_27_object;
	if(var_38_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	var_22_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_743(var_337_int)
{
	var_337_int = 0;
	return 0;
}


func_745()
{
	return 0;
}


func_1387(var_68_int)
{
	var_69_int = 0; var_70_int = 0;
	GetVariable("player", var_70_int);
	var_73_bool = var_70_int == (int)0;
	if(var_73_bool != 0) {
		var_68_int = 200001;
		return 2;
	EMIT "GOTO 0x57a";
	}
	var_75_bool = var_70_int == (int)1;
	if(var_75_bool != 0) {
		var_68_int = 200002;
		return 2;
	}
	var_68_int = 200003;
	return 2;
}


func_747(var_266_int)
{
	var_266_int = 1;
	return 0;
}


func_749(var_261_float)
{
	var_261_float = 0.5;
	return 0;
}


func_1262(var_25_bool, var_26_object)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0;
	@@var_26_object:GetPosition(var_36_cvector);
	@@var_26_object:GetEyesHeight(var_35_float);
	var_43_float = GetByIndex(var_36_cvector, 1);
	var_43_float = var_43_float + var_35_float;
	SetByIndex(var_36_cvector, 1) = var_43_float;
	GetPosition(var_37_cvector);
	GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	var_44_float = var_44_float + var_35_float;
	SetByIndex(var_37_cvector, 1) = var_44_float;
	var_38_cvector = var_36_cvector - var_37_cvector;
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_46_int = var_38_cvector | var_38_cvector;
	var_47_float = sqrt(var_46_int);
	var_38_cvector = var_38_cvector / var_47_float;
	var_39_cvector = -var_38_cvector;
	var_49_float = var_38_cvector * (int)70;
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_39_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1347(var_50_cvector, var_51_cvector);
	var_59_float = var_50_cvector * (int)25;
	var_60_int = var_49_float + var_59_float;
	var_40_cvector = var_60_int - CVector(0.0, 10.0, 0.0);
	var_41_cvector = var_37_cvector + var_40_cvector;
	IsOverrideActive(var_42_bool);
	var_62_bool = var_42_bool;
	if(var_62_bool != 0) {
		var_25_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_41_cvector, var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	Rotate(var_63_float, var_64_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 16;
}


func_1007(var_44_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_44_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_44_string);
	RemoveEnvelope();
	return 0;
}


func_881(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_757(var_0_object, var_1_object, var_114_bool, var_115_object, var_116_float, var_117_float, var_118_bool, var_119_bool)
{
	var_122_bool = 0; var_123_bool = 0; var_124_object = Obj(); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_float = 0; var_129_object = Obj(); var_130_bool = 0; var_131_bool = 0; var_132_object = Obj(); var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_float = 0; var_137_object = Obj();
	var_0_object = false;
	var_1_object = var_115_object;
	var_119_bool = var_131_bool;
	
Label_761:
	var_138_bool = 0; var_139_object = Obj();
	var_115_object = var_139_object;
	func_897(var_138_bool, var_139_object);
	var_142_bool = var_138_bool == 0; //@nz
	if(var_142_bool != 0) {
		var_114_bool = 0;
		return 16;
	}
	@@var_115_object:GetPosition(var_133_cvector);
	GetPosition(var_134_cvector);
	var_135_cvector = var_133_cvector - var_134_cvector;
	var_136_float = var_135_cvector | var_135_cvector;
	var_143_bool = 0;
	var_143_bool = 0;
	var_145_bool = var_117_float > (int)0;
	if(var_145_bool != 0) {
		var_146_float = var_117_float * var_117_float;
		var_147_bool = var_136_float > var_146_float;
		if(var_147_bool != 0) {
			var_143_bool = 1;
		}
	}
	if(var_143_bool != 0) {
		Stop();
		var_114_bool = 0;
		return 16;
	}
	var_148_float = var_116_float * var_116_float;
	var_149_bool = var_136_float > var_148_float;
	if(var_149_bool != 0) {
		@@var_115_object:GetPFPosition(var_133_cvector);
		FindPathTo(var_137_object, var_133_cvector);
		var_150_bool = var_137_object != 0; //@nn
		if(var_150_bool != 0) {
			var_137_object = var_132_object;
			var_137_object = 0;
		}
		var_151_bool = var_132_object != 0; //@nn
		if(var_151_bool != 0) {
			var_152_bool = var_131_bool;
			if(var_152_bool == 0) goto Label_810;
			var_131_bool = 0;
			RotatePath(var_132_object, var_130_bool);
			var_153_bool = var_130_bool == 0; //@nz
			if(var_153_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_156_string = "";
				func_904(var_156_string);
				var_157_string = "";
				func_906(var_157_string);
				FollowPath(var_132_object, var_118_bool, var_130_bool, var_156_string, var_157_string);
				var_158_bool = var_130_bool == 0; //@nz
				if(var_158_bool != 0) {
					var_159_object = var_0_object;
					if(var_159_object != 0) {
						var_132_object = 0;
						goto Label_857;
					EMIT "GOTO 0x33e";
					}
				} else {
					var_132_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_130_bool);
					var_162_bool = var_130_bool == 0; //@nz
					if(var_162_bool != 0) {
						var_163_object = var_0_object;
						if(var_163_object != 0) {
							var_132_object = 0;
							goto Label_857;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_857;
	}
			var_137_object = 0;
			goto Label_855;

		Label_855:
			var_132_object = 0;

		}
		goto Label_761;
	}
Label_857:
	var_114_bool = !var_0_object;
	return 16;
	
}


func_504(var_0_object, var_1_object, var_241_bool, var_242_float)
{
	var_243_int = 0; var_244_bool = 0; var_245_int = 0; var_246_bool = 0;
	irand(var_245_int, var_1_object);
	var_245_int = var_245_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_251_int = "attack_begin" + var_245_int;
	PlayAnimation("all", var_251_int);
	WaitForAnimEnd();
	func_711(var_245_int, var_246_bool);
	var_267_bool = 0; var_268_object = Obj();
	var_268_object = var_0_object;
	func_1160(var_267_bool, var_268_object);
	var_269_bool = var_267_bool == 0; //@nz
	if(var_269_bool != 0) {
		StopAsync();
		var_241_bool = 0;
		return 4;
	}
	var_270_float = 0; var_271_int = 0;
	var_242_float = var_270_float;
	var_245_int = var_271_int;
	func_465(var_246_bool, var_270_float, var_271_int);
	var_342_int = "attack_middle" + var_245_int;
	HasAnimation(var_246_bool, "all", var_342_int);
	var_343_bool = var_246_bool;
	if(var_343_bool != 0) {
		var_346_int = "attack_middle" + var_245_int;
		PlayAnimation("all", var_346_int);
		WaitForAnimEnd();
		var_347_bool = 0; var_348_object = Obj();
		var_348_object = var_0_object;
		func_1160(var_347_bool, var_348_object);
		var_349_bool = var_347_bool == 0; //@nz
		if(var_349_bool != 0) {
			StopAsync();
			var_241_bool = 0;
			return 4;
		}
		var_350_float = 0; var_351_int = 0;
		var_242_float = var_350_float;
		var_245_int = var_351_int;
		func_465(var_246_bool, var_350_float, var_351_int);
	}
	SetAttackState((bool)0);
	var_355_int = "attack_end" + var_245_int;
	PlayAnimation("all", var_355_int);
	var_356_bool = 0; var_357_float = 0;
	func_584(var_356_bool, (float)0.75);
	StopAsync();
	var_241_bool = 1;
	return 4;
}


func_121(var_2_object, var_84_string)
{
	var_85_bool = 0;
	func_1408(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 0;
	}
	var_87_bool = var_84_string == var_2_object;
	if(var_87_bool != 0) {
		return 0;
	}
	var_88_string = "";
	var_84_string = var_88_string;
	func_1322(var_88_string);
	var_2_object = var_84_string;
	return 0;
}


func_251(var_288_int)
{
	var_288_int = 0;
	return 0;
}


func_1404(var_66_int)
{
	var_66_int = 3347;
	return 0;
}


func_1406(var_67_string)
{
	var_67_string = "ui/NPC_None.png";
	return 0;
}


