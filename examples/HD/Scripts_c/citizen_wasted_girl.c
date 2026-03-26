// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,GetGameTime/1,FindActor/2,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,HasAnimation/3,CanSee/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:branch|W:player|W:reputation|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:SetProperty|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:class|W:rat|W:rat_big|W:dog|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:bool:
// @RUN_OP: 0x42a
// @RUN_TASK: 4
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0x184 vars=int,int
// @TASK_3: vars= params=1
// @EVENT_0: op=0x39d vars=object
// @EVENT_6: op=0x3ab vars=
// @EVENT_22: op=0x424 vars=object,int,float,float
// @EVENT_16: op=0x426 vars=object,string
// @EVENT_41: op=0x428 vars=object
// @TASK_4: vars=bool,bool,bool params=0
// @EVENT_0: op=0x442 vars=object
// @EVENT_17: op=0x456 vars=object
// @EVENT_30: op=0x46e vars=object,object,bool
// @EVENT_40: op=0x48a vars=object
// @EVENT_42: op=0x49e vars=object,string
// @EVENT_26: op=0x4c3 vars=string
// @EVENT_1: op=0x4d1 vars=object
// @EVENT_3: op=0x4e4 vars=object
// @EVENT_7: op=0x4ea vars=int
// @EVENT_6: op=0x4f6 vars=
// @EVENT_41: op=0x50d vars=object
// @EVENT_10: op=0x57e vars=object
// @EVENT_28: op=0x582 vars=
// @TASK_5: vars= params=0
// @EVENT_0: op=0x59b vars=object
// @EVENT_17: op=0x5af vars=object
// @EVENT_30: op=0x5c7 vars=object,object,bool
// @EVENT_40: op=0x5e3 vars=object
// @EVENT_42: op=0x5f7 vars=object,string
// @EVENT_26: op=0x61c vars=string
// @EVENT_6: op=0x62a vars=
// @EVENT_1: op=0x631 vars=object
// @TASK_6: vars=object params=1
// @EVENT_0: op=0x6cd vars=object
// @EVENT_17: op=0x6e1 vars=object
// @EVENT_30: op=0x6f9 vars=object,object,bool
// @EVENT_40: op=0x715 vars=object
// @EVENT_42: op=0x729 vars=object,string
// @EVENT_26: op=0x74e vars=string
// @EVENT_41: op=0x767 vars=object
// @EVENT_7: op=0x770 vars=int
// @EVENT_6: op=0x793 vars=
// @EVENT_1: op=0x79a vars=object
// @TASK_7: vars=object,cvector,bool params=1
// @EVENT_6: op=0x7c4 vars=
// @EVENT_7: op=0x832 vars=int
// @EVENT_41: op=0x86d vars=object
// @TASK_8: vars=object,cvector,bool params=1
// @EVENT_7: op=0x8ed vars=int
// @EVENT_41: op=0x928 vars=object
// @TASK_9: vars=object,cvector,bool params=1
// @EVENT_6: op=0x941 vars=
// @EVENT_7: op=0x9af vars=int
// @EVENT_41: op=0x9ea vars=object
// @TASK_10: vars=object,cvector,bool params=1
// @EVENT_6: op=0xa03 vars=
// @EVENT_7: op=0xa71 vars=int
// @EVENT_41: op=0xaac vars=object
// @STANDALONE_EVENT_16: op=0xe94 vars=object,string
// @STANDALONE_EVENT_41: op=0xea1 vars=object
// @STANDALONE_EVENT_22: op=0xea7 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xeaf vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1a,0x72,0x16e,0x184,0x38e,0x3ab,0x40a,0x424,0x426,0x428,0x4c3,0x4d1,0x4e4,0x4ea,0x4f6,0x50d,0x57e,0x61c,0x62a,0x631,0x74e,0x767,0x793,0x79a,0x7a8,0x7c4,0x86d,0x928,0x941,0x9ea,0xa03,0xaac,0xc10,0xc48,0xcb7,0xcbf,0xcc8,0xcd2,0xcf1,0xcfd,0xd09,0xd13,0xd1d,0xd27,0xd31,0xd3b,0xd42,0xd49,0xd50,0xd57,0xd83,0xe8c,0xea1,0xea7,0xeaf,0xeb9,0xed9,0xf09,0xf0f,0xf51,0xf5a,0xf62,0xf6c,0xf74,0xf7e,0xfc8,0xfcb,0xfcd,0xfd0,0xfd2,0xfd5,0xfe1,0xff8,0x1000,0x1007,0x100d,0x1010,0x104e,0x1057

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0;
	func_4122(var_23_bool);
	if(var_23_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	if((int)1 != 0) {
		func_3191();
		var_27_bool = var_22_cvector == (int)45802;
		if(var_27_bool != 0) {
			var_28_bool = 0;
			var_28_bool = 0;
			var_29_bool = 0;
			var_29_bool = 0;
			var_30_bool = 0;
			var_30_bool = 0;
			var_31_bool = 0;
			var_31_bool = 0;
			var_32_bool = 0; var_33_object = Obj();
			var_33_object = var_1_object;
			func_3325(var_33_object);
			if(var_32_bool != 0) {
				var_40_bool = 0; var_41_object = Obj();
				var_41_object = var_1_object;
				func_3337(var_40_bool, var_41_object);
				var_51_bool = var_40_bool == 0; //@nz
				if(var_51_bool != 0) {
					var_31_bool = 1;
				}
			}
			if(var_31_bool != 0) {
				var_52_bool = 0; var_53_object = Obj();
				var_53_object = var_1_object;
				func_3347(var_52_bool, var_53_object);
				var_58_bool = var_52_bool == 0; //@nz
				if(var_58_bool != 0) {
					var_30_bool = 1;
				}
			}
			if(var_30_bool != 0) {
				var_59_bool = 0; var_60_object = Obj();
				var_60_object = var_1_object;
				func_3357(var_59_bool, var_60_object);
				var_65_bool = var_59_bool == 0; //@nz
				if(var_65_bool != 0) {
					var_29_bool = 1;
				}
			}
			if(var_29_bool != 0) {
				var_66_bool = 0; var_67_object = Obj();
				var_67_object = var_1_object;
				func_3367(var_66_bool, var_67_object);
				var_72_bool = var_66_bool == 0; //@nz
				if(var_72_bool != 0) {
					var_28_bool = 1;
				}
			}
			if(var_28_bool != 0) {
				var_73_string = "";
				func_366(var_23_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)543344);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)543362, (int)45824, (int)45822);
				@@@var_0_bool:AddReply((int)543361, (int)-1, (int)45821);
				return 0;
			}
			var_97_bool = 0; var_98_object = Obj();
			var_98_object = var_1_object;
			func_3325(var_98_object);
			if(var_97_bool != 0) {
				var_99_string = "";
				func_366(var_23_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)543343);
				@@@var_0_bool:ClearReplies();
				var_101_bool = 0;
				var_101_bool = 1;
				var_102_bool = 0; var_103_object = Obj();
				var_103_object = var_1_object;
				func_3337(var_102_bool, var_103_object);
				if(var_102_bool != 1) {
					var_104_bool = 0; var_105_object = Obj();
					var_105_object = var_1_object;
					func_3347(var_104_bool, var_105_object);
					if(var_104_bool != 1) {
						var_101_bool = 0;
					}
				}
				if(var_101_bool != 0) {
					@@@var_0_bool:AddReply((int)543349, (int)45804, (int)45807);
				}
				var_109_bool = 0;
				var_109_bool = 1;
				var_110_bool = 0; var_111_object = Obj();
				var_111_object = var_1_object;
				func_3337(var_110_bool, var_111_object);
				if(var_110_bool != 1) {
					var_112_bool = 0; var_113_object = Obj();
					var_113_object = var_1_object;
					func_3347(var_112_bool, var_113_object);
					if(var_112_bool != 1) {
						var_109_bool = 0;
					}
				}
				if(var_109_bool != 0) {
					@@@var_0_bool:AddReply((int)543345, (int)45804, (int)45803);
				}
				var_117_bool = 0;
				var_117_bool = 1;
				var_118_bool = 0; var_119_object = Obj();
				var_119_object = var_1_object;
				func_3357(var_118_bool, var_119_object);
				if(var_118_bool != 1) {
					var_120_bool = 0; var_121_object = Obj();
					var_121_object = var_1_object;
					func_3367(var_120_bool, var_121_object);
					if(var_120_bool != 1) {
						var_117_bool = 0;
					}
				}
				if(var_117_bool != 0) {
					@@@var_0_bool:AddReply((int)543347, (int)45806, (int)45805);
				}
				var_125_bool = 0;
				var_125_bool = 1;
				var_126_bool = 0; var_127_object = Obj();
				var_127_object = var_1_object;
				func_3357(var_126_bool, var_127_object);
				if(var_126_bool != 1) {
					var_128_bool = 0; var_129_object = Obj();
					var_129_object = var_1_object;
					func_3367(var_128_bool, var_129_object);
					if(var_128_bool != 1) {
						var_125_bool = 0;
					}
				}
				if(var_125_bool != 0) {
					@@@var_0_bool:AddReply((int)543357, (int)45806, (int)45816);
				}
				var_133_bool = 0;
				var_133_bool = 1;
				var_134_bool = 0; var_135_object = Obj();
				var_135_object = var_1_object;
				func_3357(var_134_bool, var_135_object);
				if(var_134_bool != 1) {
					var_136_bool = 0; var_137_object = Obj();
					var_137_object = var_1_object;
					func_3367(var_136_bool, var_137_object);
					if(var_136_bool != 1) {
						var_133_bool = 0;
					}
				}
				if(var_133_bool != 0) {
					@@@var_0_bool:AddReply((int)543355, (int)-1, (int)45814);
				}
				@@@var_0_bool:AddReply((int)543351, (int)-1, (int)45809);
				return 0;
			}
			var_144_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538136);
			@@@var_0_bool:ClearReplies();
			var_146_bool = 0;
			var_146_bool = 0;
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_object;
			func_3313(var_148_object);
			if(var_147_bool != 0) {
				var_153_bool = 0; var_154_object = Obj();
				var_154_object = var_1_object;
				func_3377(var_153_bool, var_154_object);
				if(var_153_bool != 0) {
					var_146_bool = 1;
				}
			}
			if(var_146_bool != 0) {
				@@@var_0_bool:AddReply((int)538137, (int)40009, (int)40008);
			}
			@@@var_0_bool:AddReply((int)538165, (int)-1, (int)40040);
			return 0;
		}
		var_166_bool = var_22_cvector == (int)40009;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538138);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538139, (int)40011, (int)40010);
			@@@var_0_bool:AddReply((int)538164, (int)40019, (int)40038);
			return 0;
		}
		var_176_bool = var_22_cvector == (int)40011;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538140);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538141, (int)40013, (int)40012);
			@@@var_0_bool:AddReply((int)538163, (int)40019, (int)40036);
			return 0;
		}
		var_186_bool = var_22_cvector == (int)40013;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538142);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538143, (int)40015, (int)40014);
			@@@var_0_bool:AddReply((int)538162, (int)40015, (int)40034);
			return 0;
		}
		var_196_bool = var_22_cvector == (int)40015;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538144);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538145, (int)40017, (int)40016);
			@@@var_0_bool:AddReply((int)538157, (int)40017, (int)40028);
			@@@var_0_bool:AddReply((int)538158, (int)40031, (int)40030);
			return 0;
		}
		var_209_bool = var_22_cvector == (int)40031;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538159);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538160, (int)-1, (int)40032);
			@@@var_0_bool:AddReply((int)538161, (int)-1, (int)40033);
			return 0;
		}
		var_219_bool = var_22_cvector == (int)40017;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538146);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538147, (int)40019, (int)40018);
			return 0;
		}
		var_226_bool = var_22_cvector == (int)40019;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538148);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538149, (int)40021, (int)40020);
			@@@var_0_bool:AddReply((int)538156, (int)-1, (int)40027);
			return 0;
		}
		var_236_bool = var_22_cvector == (int)40021;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538150);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538151, (int)-1, (int)40022);
			@@@var_0_bool:AddReply((int)538152, (int)40024, (int)40023);
			return 0;
		}
		var_246_bool = var_22_cvector == (int)40024;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538153);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538154, (int)-1, (int)40025);
			@@@var_0_bool:AddReply((int)538155, (int)-1, (int)40026);
			return 0;
		}
		var_256_bool = var_22_cvector == (int)45806;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543348);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543358, (int)-1, (int)45818);
			@@@var_0_bool:AddReply((int)543359, (int)-1, (int)45819);
			@@@var_0_bool:AddReply((int)543360, (int)-1, (int)45820);
			return 0;
		}
		var_269_bool = var_22_cvector == (int)45804;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543346);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543352, (int)-1, (int)45810);
			@@@var_0_bool:AddReply((int)543353, (int)-1, (int)45812);
			@@@var_0_bool:AddReply((int)543354, (int)-1, (int)45813);
			return 0;
		}
		var_282_bool = var_22_cvector == (int)45824;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_366(var_23_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543364);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543365, (int)-1, (int)45825);
			@@@var_0_bool:AddReply((int)543366, (int)-1, (int)45826);
			return 0;
		}
		var_3_object = true;
		var_291_bool = 0;
		func_4122(var_291_bool);
		if(var_291_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x185";
	
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_4050(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_29_object = Obj();
		var_22_bool = var_29_object;
		func_4053(var_29_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_4059();
	return 0;
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool, var_23_object, var_24_cvector, var_25_bool)
{
	return 0;
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	return 0;
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_4050(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_1277(var_24_int);
		}
		var_32_object = Obj();
		var_22_bool = var_32_object;
		func_4053(var_32_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_3855(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_3938(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_1277(var_24_int);
		}
		var_75_object = Obj();
		var_22_bool = var_75_object;
		func_3948(var_75_object);
	}
	return 2;
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0;
	var_22_object = var_28_object;
	var_23_cvector = var_29_object;
	var_24_bool = var_30_bool;
	func_4174(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_3956(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_1277(var_26_int);
			}
			var_110_object = Obj();
			var_22_object = var_110_object;
			func_3966(var_110_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_4040(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_1277(var_24_int);
		}
		var_22_bool = Obj();
		func_4043();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_cvector = var_27_object;
	var_23_bool = var_28_string;
	func_3769(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_1277(var_25_int);
		var_59_object = Obj(); var_60_string = "";
		var_22_cvector = var_59_object;
		var_23_bool = var_60_string;
		func_3801(var_59_object, var_60_string);
	} else {
		var_208_int = 0; var_209_string = ""; var_210_object = Obj();
		var_23_bool = var_209_string;
		var_22_cvector = var_210_object;
		func_4045(var_210_object);
		var_208_int = var_25_int;
		var_212_bool = var_25_int > (int)0;
		if(var_212_bool == 0) goto Label_1218;
		var_214_bool = var_25_int > (int)1;
		if(var_214_bool != 0) {
			func_1277(var_25_int);
		}
		var_215_string = ""; var_216_object = Obj();
		var_23_bool = var_215_string;
		var_22_cvector = var_216_object;
		func_4048();
	}
Label_1218:
	return 2;
	
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_3868(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_1277(var_22_bool);
		var_33_string = "";
		var_22_bool = var_33_string;
		func_3884(var_33_string);
	}
	return 0;
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_3826(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_1277(var_22_bool);
		var_38_object = Obj();
		var_22_bool = var_38_object;
		func_3849(var_38_object);
	} else {
		var_112_object = Obj();
		var_22_bool = var_112_object;
		func_1302(var_22_bool, var_112_object);
	}
	return 0;
	
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_object = Obj();
	var_22_bool = var_23_object;
	func_1302(var_22_bool, var_23_object);
	return 0;
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_24_bool = var_22_bool != (int)110;
	if(var_24_bool != 0) {
		return 0;
	}
	var_2_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_1277(var_21_bool);
	func_4059();
	return 0;
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_1277(var_22_bool);
	var_22_bool = Obj();
	func_3745();
	return 0;
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	RequestClearPath(var_22_bool);
	return 0;
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	Stop();
	return 0;
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_4050(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_1680();
		}
		var_31_object = Obj();
		var_22_bool = var_31_object;
		func_4053(var_31_object);
	}
	return 2;
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_3855(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_3938(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_1680();
		}
		var_74_object = Obj();
		var_22_bool = var_74_object;
		func_3948(var_74_object);
	}
	return 2;
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0;
	var_22_object = var_28_object;
	var_23_cvector = var_29_object;
	var_24_bool = var_30_bool;
	func_4174(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_3956(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_1680();
			}
			var_109_object = Obj();
			var_22_object = var_109_object;
			func_3966(var_109_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_4040(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_1680();
		}
		var_22_bool = Obj();
		func_4043();
	}
	return 2;
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_cvector = var_27_object;
	var_23_bool = var_28_string;
	func_3769(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_1680();
		var_58_object = Obj(); var_59_string = "";
		var_22_cvector = var_58_object;
		var_23_bool = var_59_string;
		func_3801(var_58_object, var_59_string);
	} else {
		var_207_int = 0; var_208_string = ""; var_209_object = Obj();
		var_23_bool = var_208_string;
		var_22_cvector = var_209_object;
		func_4045(var_209_object);
		var_207_int = var_25_int;
		var_211_bool = var_25_int > (int)0;
		if(var_211_bool == 0) goto Label_1563;
		var_213_bool = var_25_int > (int)1;
		if(var_213_bool != 0) {
			func_1680();
		}
		var_214_string = ""; var_215_object = Obj();
		var_23_bool = var_214_string;
		var_22_cvector = var_215_object;
		func_4048();
	}
Label_1563:
	return 2;
	
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_3868(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_1680();
		var_32_string = "";
		var_22_bool = var_32_string;
		func_3884(var_32_string);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_1680();
	func_4059();
	return 0;
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_3826(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_1680();
		var_37_object = Obj();
		var_22_bool = var_37_object;
		func_3849(var_37_object);
	}
	return 0;
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_4050(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_1884();
		}
		var_33_object = Obj();
		var_22_bool = var_33_object;
		func_4053(var_33_object);
	}
	return 2;
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_3855(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_3938(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_1884();
		}
		var_76_object = Obj();
		var_22_bool = var_76_object;
		func_3948(var_76_object);
	}
	return 2;
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0;
	var_22_object = var_28_object;
	var_23_cvector = var_29_object;
	var_24_bool = var_30_bool;
	func_4174(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_3956(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_1884();
			}
			var_111_object = Obj();
			var_22_object = var_111_object;
			func_3966(var_111_object);
		}
	}
	return 2;
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_4040(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_1884();
		}
		var_22_bool = Obj();
		func_4043();
	}
	return 2;
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_cvector = var_27_object;
	var_23_bool = var_28_string;
	func_3769(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_1884();
		var_60_object = Obj(); var_61_string = "";
		var_22_cvector = var_60_object;
		var_23_bool = var_61_string;
		func_3801(var_60_object, var_61_string);
	} else {
		var_209_int = 0; var_210_string = ""; var_211_object = Obj();
		var_23_bool = var_210_string;
		var_22_cvector = var_211_object;
		func_4045(var_211_object);
		var_209_int = var_25_int;
		var_213_bool = var_25_int > (int)0;
		if(var_213_bool == 0) goto Label_1869;
		var_215_bool = var_25_int > (int)1;
		if(var_215_bool != 0) {
			func_1884();
		}
		var_216_string = ""; var_217_object = Obj();
		var_23_bool = var_216_string;
		var_22_cvector = var_217_object;
		func_4048();
	}
Label_1869:
	return 2;
	
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_3868(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_1884();
		var_34_string = "";
		var_22_bool = var_34_string;
		func_3884(var_34_string);
	}
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_1884();
	var_22_bool = Obj();
	func_3745();
	return 0;
}


task_6_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_28_bool = var_22_bool != (int)111;
	if(var_28_bool != 0) {
		return 4;
	}
	var_29_bool = 0; var_30_object = Obj();
	var_30_object = var_0_bool;
	func_2835(var_29_bool, var_30_object);
	var_63_bool = var_29_bool == 0; //@nz
	if(var_63_bool != 0) {
		func_1884();
		return 4;
	}
	GetDirection(var_25_cvector);
	var_66_cvector = CVector(0,0,0); var_67_object = Obj();
	var_67_object = var_0_bool;
	func_2762(var_66_cvector, var_67_object);
	var_66_cvector = var_26_cvector;
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_25_cvector = var_73_cvector;
	var_26_cvector = var_74_cvector;
	func_3282(var_72_float, var_73_cvector, var_74_cvector);
	var_97_bool = var_72_float < (float)0.4999999701976776;
	if(var_97_bool != 0) {
		var_98_object = Obj();
		var_98_object = var_0_bool;
		func_2985(var_98_object);
	}
	return 4;
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_1884();
	func_4059();
	return 0;
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_3826(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_1884();
		var_39_object = Obj();
		var_22_bool = var_39_object;
		func_3849(var_39_object);
	}
	return 0;
}


task_7_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2150(var_21_bool);
	func_4059();
	return 0;
}


task_7_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0;
	var_32_bool = var_22_bool != (int)120;
	if(var_32_bool != 0) {
		return 8;
	}
	var_33_bool = var_0_bool == 0; //@ne
	if(var_33_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_27_cvector);
		FindDirLength(var_28_float, var_27_cvector, (float)7000.0);
		var_36_cvector = CVector(0,0,0); var_37_float = 0;
		func_1995(var_30_float, var_36_cvector, (float)1.7453293800354004);
		var_36_cvector = var_29_cvector;
		var_30_float = var_29_cvector | var_29_cvector;
		var_66_bool = 0;
		var_66_bool = 0;
		var_68_bool = var_30_float >= (float)2500.0;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_70_float = var_28_float * var_28_float;
			var_72_float = var_70_float * (float)2.25;
			var_73_bool = var_30_float >= var_72_float;
			if(var_73_bool != 1) {
				var_74_bool = 0;
				func_2166((bool)1, var_74_bool);
				if(var_74_bool != 1) {
					var_69_bool = 0;
				}
			}
			if(var_69_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool == 0) goto Label_2149;
		Stop();
		var_94_cvector = CVector(0,0,0);
		func_2757(var_94_cvector);
		var_1_object = var_94_cvector + var_29_cvector;
	}
Label_2149:
	return 8;
	
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_2150(var_22_bool);
	var_22_bool = Obj();
	func_3745();
	return 0;
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_int, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0;
	var_32_bool = var_22_bool != (int)120;
	if(var_32_bool != 0) {
		return 8;
	}
	var_33_bool = var_0_bool == 0; //@ne
	if(var_33_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_27_cvector);
		FindDirLength(var_28_float, var_27_cvector, (float)7000.0);
		var_36_cvector = CVector(0,0,0); var_37_float = 0;
		func_2182(var_30_float, var_36_cvector, (float)1.7453293800354004);
		var_36_cvector = var_29_cvector;
		var_30_float = var_29_cvector | var_29_cvector;
		var_66_bool = 0;
		var_66_bool = 0;
		var_68_bool = var_30_float >= (float)2500.0;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_70_float = var_28_float * var_28_float;
			var_72_float = var_70_float * (float)2.25;
			var_73_bool = var_30_float >= var_72_float;
			if(var_73_bool != 1) {
				var_74_bool = 0;
				func_2353((bool)1, var_74_bool);
				if(var_74_bool != 1) {
					var_69_bool = 0;
				}
			}
			if(var_69_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool == 0) goto Label_2336;
		Stop();
		var_94_cvector = CVector(0,0,0);
		func_2757(var_94_cvector);
		var_1_object = var_94_cvector + var_29_cvector;
	}
Label_2336:
	return 8;
	
}


task_8_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_2337(var_22_bool);
	var_22_bool = Obj();
	func_3745();
	return 0;
}


task_9_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2531(var_21_bool);
	func_4059();
	return 0;
}


task_9_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0;
	var_32_bool = var_22_bool != (int)120;
	if(var_32_bool != 0) {
		return 8;
	}
	var_33_bool = var_0_bool == 0; //@ne
	if(var_33_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_27_cvector);
		FindDirLength(var_28_float, var_27_cvector, (float)7000.0);
		var_36_cvector = CVector(0,0,0); var_37_float = 0;
		func_2376(var_30_float, var_36_cvector, (float)1.7453293800354004);
		var_36_cvector = var_29_cvector;
		var_30_float = var_29_cvector | var_29_cvector;
		var_66_bool = 0;
		var_66_bool = 0;
		var_68_bool = var_30_float >= (float)2500.0;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_70_float = var_28_float * var_28_float;
			var_72_float = var_70_float * (float)2.25;
			var_73_bool = var_30_float >= var_72_float;
			if(var_73_bool != 1) {
				var_74_bool = 0;
				func_2547((bool)1, var_74_bool);
				if(var_74_bool != 1) {
					var_69_bool = 0;
				}
			}
			if(var_69_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool == 0) goto Label_2530;
		Stop();
		var_94_cvector = CVector(0,0,0);
		func_2757(var_94_cvector);
		var_1_object = var_94_cvector + var_29_cvector;
	}
Label_2530:
	return 8;
	
}


task_9_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_cvector, var_22_bool)
{
	func_2531(var_22_bool);
	var_22_bool = Obj();
	func_3745();
	return 0;
}


task_10_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2725(var_21_bool);
	func_4059();
	return 0;
}


task_10_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_int)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0;
	var_32_bool = var_22_int != (int)120;
	if(var_32_bool != 0) {
		return 8;
	}
	var_33_bool = var_0_bool == 0; //@ne
	if(var_33_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_27_cvector);
		FindDirLength(var_28_float, var_27_cvector, (float)7000.0);
		var_36_cvector = CVector(0,0,0); var_37_float = 0;
		func_2570(var_30_float, var_36_cvector, (float)1.7453293800354004);
		var_36_cvector = var_29_cvector;
		var_30_float = var_29_cvector | var_29_cvector;
		var_66_bool = 0;
		var_66_bool = 0;
		var_68_bool = var_30_float >= (float)2500.0;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_70_float = var_28_float * var_28_float;
			var_72_float = var_70_float * (float)2.25;
			var_73_bool = var_30_float >= var_72_float;
			if(var_73_bool != 1) {
				var_74_bool = 0;
				func_2741((bool)1, var_74_bool);
				if(var_74_bool != 1) {
					var_69_bool = 0;
				}
			}
			if(var_69_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool == 0) goto Label_2724;
		Stop();
		var_94_cvector = CVector(0,0,0);
		func_2757(var_94_cvector);
		var_1_object = var_94_cvector + var_29_cvector;
	}
Label_2724:
	return 8;
	
}


task_10_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object)
{
	func_2725(var_22_object);
	var_22_object = Obj();
	func_3745();
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_string)
{
	var_24_float = 0; var_25_float = 0;
	var_27_bool = var_23_string == "health";
	if(var_27_bool != 0) {
		GetProperty("health", var_25_float);
		var_30_bool = var_25_float <= (int)0;
		if(var_30_bool != 0) {
			SignalDeath(var_22_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	func_3724(var_23_object);
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0;
	var_22_object = var_26_object;
	var_23_int = var_27_int;
	var_24_float = var_28_float;
	func_2903(var_26_object, var_27_int, var_28_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_int = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0);
	var_22_object = var_28_object;
	var_23_int = var_29_int;
	var_24_float = var_30_float;
	var_26_cvector = var_31_cvector;
	var_27_cvector = var_32_cvector;
	func_2971(var_30_float, var_31_cvector, var_32_cvector);
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	SensePlayerOnly((bool)1);
	func_4124();
	func_1081();
	
Label_1075:
	var_2_object = false;
	func_1342(var_20_cvector, var_21_bool);
	goto Label_1075;
}
EMIT "Return(); Pop(0)";


func_4096(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj();
	var_55_object = var_57_object;
	func_4073(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_326_bool = 0;
	func_4122(var_326_bool);
	if(var_326_bool != 0) {
		var_327_string = "";
		func_3149("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_328_bool = var_0_bool;
	if(var_328_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_4103(var_207_object)
{
	var_208_object = Obj();
	var_207_object = var_208_object;
	func_4088(var_208_object);
	return 0;
}


func_1034(var_47_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_48_string = "";
	var_47_string = var_48_string;
	func_3198(var_48_string);
	PlayAnimation("all", var_47_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_47_string);
	RemoveEnvelope();
	return 0;
}


func_2570(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_3245(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_3245(var_50_cvector, var_51_cvector);
	var_50_cvector = var_47_cvector;
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, (int)32, (float)7000.0);
	var_49_float = var_49_float - (int)100;
	var_65_bool = var_49_float < (int)0;
	if(var_65_bool != 0) {
		var_49_float = 0;
	}
	var_36_cvector = var_48_cvector * var_49_float;
	return 12;
}


func_4109(var_30_bool)
{
	var_30_bool = 0;
	return 0;
}


func_4112()
{
	return 0;
}


func_3088(var_291_bool, var_292_object)
{
	var_293_bool = 0; var_294_object = Obj(); var_295_float = 0;
	var_292_object = var_294_object;
	func_3096(var_293_bool, var_294_object, (float)70);
	var_293_bool = var_291_bool;
	return 0;
}


func_4114(var_107_int)
{
	var_107_int = 515555;
	return 0;
}


func_4116(var_106_int)
{
	var_106_int = 503340;
	return 0;
}


func_4118(var_108_string)
{
	var_108_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_4120(var_109_string)
{
	var_109_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_3096(var_293_bool, var_294_object, var_295_float)
{
	var_296_float = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_bool = 0; var_304_float = 0; var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_bool = 0;
	@@var_294_object:GetPosition(var_305_cvector);
	@@var_294_object:GetEyesHeight(var_304_float);
	var_312_float = GetByIndex(var_305_cvector, 1);
	var_312_float = var_312_float + var_304_float;
	SetByIndex(var_305_cvector, 1) = var_312_float;
	GetPosition(var_306_cvector);
	GetEyesHeight(var_304_float);
	var_313_float = GetByIndex(var_306_cvector, 1);
	var_313_float = var_313_float + var_304_float;
	SetByIndex(var_306_cvector, 1) = var_313_float;
	var_307_cvector = var_305_cvector - var_306_cvector;
	var_314_float = GetByIndex(var_307_cvector, 1);
	SetByIndex(var_307_cvector, 1) = (float)0;
	var_315_int = var_307_cvector | var_307_cvector;
	var_316_float = sqrt(var_315_int);
	var_307_cvector = var_307_cvector / var_316_float;
	var_308_cvector = -var_307_cvector;
	var_317_float = var_307_cvector * var_295_float;
	var_309_cvector = var_317_float - CVector(0.0, 10.0, 0.0);
	var_310_cvector = var_306_cvector + var_309_cvector;
	IsOverrideActive(var_311_bool);
	var_319_bool = var_311_bool;
	if(var_319_bool != 0) {
		var_293_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_310_cvector, var_308_cvector, (bool)1);
	var_321_float = GetByIndex(var_309_cvector, 0);
	var_322_float = GetByIndex(var_309_cvector, 2);
	Rotate(var_321_float, var_322_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_293_bool = 1;
	return 16;
}


func_4122(var_101_bool)
{
	var_101_bool = 0;
	return 0;
}


func_4124()
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_4128(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		IsOverrideActive(var_36_bool);
		var_38_bool = var_36_bool == 0; //@nz
		if(var_38_bool != 0) {
			var_39_object = Obj();
			var_34_object = var_39_object;
			func_3459(var_39_object);
		}
		return 2;
	EMIT "GOTO 0x1047";
	}
	var_47_int = 0; var_48_object = Obj();
	var_34_object = var_48_object;
	TaskCall(1);
	func_40(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	var_290_bool = (int)1000 == var_49_object;
	if(var_290_bool != 0) {
		var_291_bool = 0; var_292_object = Obj();
		var_34_object = var_292_object;
		func_3088(var_291_bool, var_292_object);
		var_323_bool = var_291_bool == 0; //@nz
		if(var_323_bool != 0) {
			return 2;
		}
		var_324_object = Obj();
		var_34_object = var_324_object;
		TaskCall(0);
		func_0(var_324_object);
		TaskReturn();
		var_34_object = Obj();
		func_3144();
	}
	return 2;
}


func_2600(var_0_bool, var_1_object, var_2_object, var_140_object)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_bool = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_bool = 0; var_152_cvector = CVector(0,0,0); var_153_float = 0;
	var_0_bool = var_140_object;
	var_154_cvector = CVector(0,0,0); var_155_float = 0;
	func_2570(var_153_float, var_154_cvector, (float)1.7453293800354004);
	var_154_cvector = var_149_cvector;
	var_150_float = var_149_cvector | var_149_cvector;
	var_180_bool = var_150_float < (float)2500.0;
	if(var_180_bool != 0) {
		var_181_cvector = CVector(0,0,0); var_182_float = 0;
		func_2570(var_153_float, var_181_cvector, (float)2.6179938316345215);
		var_181_cvector = var_149_cvector;
		var_150_float = var_149_cvector | var_149_cvector;
		var_184_bool = var_150_float < (float)2500.0;
		if(var_184_bool != 0) {
			var_186_float = sqrt(var_150_float);
			var_187_int = "Can't retreat, distance: " + var_186_float;
			Trace(var_187_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_189_float = GetByIndex(var_149_cvector, 0);
	var_190_float = GetByIndex(var_149_cvector, 2);
	Rotate(var_189_float, var_190_float);
	var_191_cvector = CVector(0,0,0);
	func_2757(var_191_cvector);
	var_1_object = var_191_cvector + var_149_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_2642:
	MovePoint(var_1_object, (int)1, var_151_bool);
	var_195_bool = var_151_bool;
	if(var_195_bool != 0) {
		var_196_bool = var_0_bool == 0; //@ne
		if(var_196_bool != 0) {
			goto Label_2672;
		EMIT "GOTO 0xa6e";

		Label_2672:
			return 10;
		}
		var_197_cvector = CVector(0,0,0); var_198_float = 0;
		func_2570(var_153_float, var_197_cvector, (float)2.6179938316345215);
		var_197_cvector = var_152_cvector;
		var_153_float = var_152_cvector | var_152_cvector;
		var_200_bool = var_153_float >= (float)2500.0;
		if(var_200_bool != 0) {
			var_201_cvector = CVector(0,0,0);
			func_2757(var_201_cvector);
			var_1_object = var_201_cvector + var_152_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2672;
		}
	}
	var_204_bool = var_2_object == 0; //@nz
	if(var_204_bool == 1) goto Label_2642;
	
}


func_40(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_0_bool = var_48_object;
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0;
	var_48_object = var_59_object;
	func_3001(var_58_bool, var_59_object, (float)70.0);
	var_105_bool = var_58_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	CreateDialog(var_54_object);
	var_106_int = 0;
	func_4116(var_106_int);
	@@var_54_object:SetNPCName(var_106_int);
	var_107_int = 0;
	func_4114(var_107_int);
	@@var_54_object:SetNPCDescription(var_107_int);
	var_108_string = "";
	func_4118(var_108_string);
	@@var_54_object:SetPhoto(var_108_string);
	var_109_string = "";
	func_4120(var_109_string);
	@@var_54_object:SetPhoto2(var_109_string);
	var_110_int = 0;
	func_3422(var_110_int);
	@@var_54_object:SetPlayerName(var_110_int);
	IsOverrideActive(var_55_bool);
	var_118_bool = var_55_bool;
	if(var_118_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	DoDialog(var_54_object);
	var_119_object = Obj(); var_120_object = Obj();
	var_48_object = var_119_object;
	var_54_object = var_120_object;
	TaskCall(2);
	func_114(var_121_object, var_122_object, var_123_string, var_124_bool, var_119_object, var_120_object);
	TaskReturn();
	@@var_54_object:IsDialogEnd(var_57_bool);
	
Label_96:
	var_281_bool = var_57_bool == 0; //@nz
	if(var_281_bool != 0) {
		sync();
		@@var_54_object:IsDialogEnd(var_57_bool);
		goto Label_96;
	}
	var_48_object = Obj();
	func_3070();
	StopDialog(var_54_object);
	@@var_54_object:GetReturnValue((int)-1);
	var_56_int = var_47_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1081()
{
	var_24_bool = 0;
	func_2996(var_24_bool);
	var_27_bool = var_24_bool == 0; //@nz
	if(var_27_bool != 0) {
		func_4059();
	}
	return 0;
}


func_1599()
{
	var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_float = 0; var_68_bool = 0;
	WaitForAnimEnd();
	var_69_bool = 0;
	func_2996(var_69_bool);
	var_70_bool = var_69_bool == 0; //@nz
	if(var_70_bool != 0) {
		return 14;
	}
	func_3904((int)0);
	var_71_int = var_62_int;
	var_63_int = 0;
	
Label_1613:
	var_84_bool = 0;
	var_84_bool = 0;
	var_86_bool = var_63_int < (int)5;
	if(var_86_bool != 0) {
		var_87_bool = 0;
		func_2996(var_87_bool);
		if(var_87_bool != 0) {
			var_84_bool = 1;
		}
	}
	if(var_84_bool != 0) {
		irand(var_64_int, (int)3);
		var_90_bool = var_64_int == (int)0;
		if(var_90_bool != 0) {
			var_91_int = var_62_int;
			if(var_91_int == 0) goto Label_1646;
			irand(var_65_int, var_62_int);
			var_93_string = ""; var_94_int = 0;
			var_65_int = var_94_int;
			func_3897(var_93_string, var_94_int);
			PlayAnimation("all", var_93_string);
			WaitForAnimEnd(var_66_bool);
			var_95_bool = var_66_bool == 0; //@nz
			if(var_95_bool != 0) {
			} else {
		} else {
				var_100_bool = var_64_int == (int)1;
				if(var_100_bool != 0) {
					rand(var_67_float, (int)4);
					var_103_int = var_67_float + (int)1;
					Sleep(var_103_int, var_68_bool);
					var_104_bool = var_68_bool == 0; //@nz
					if(var_104_bool != 0) {
						goto Label_1675;
					}
					goto Label_1664;
				}
				var_105_int = var_63_int;
				if(var_105_int == 0) goto Label_1664;
				goto Label_1675;
		}
		Label_1664:
			var_96_bool = 0;
			func_1678(var_96_bool);
			var_97_bool = var_96_bool == 0; //@nz
			if(var_97_bool != 0) {
				goto Label_1675;
			}
			ResetAAS();
			var_63_int = var_63_int + (int)1;
			goto Label_1613;

		}
	}
Label_1675:
	ResetAAS();
	return 14;
	
}


func_4168(var_67_bool)
{
	var_68_float = 0;
	func_3445(var_68_float);
	var_67_bool = var_68_float > (float)0.699999988079071;
	return 0;
}


func_3144()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_3149(var_197_string)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0;
	lshHasAnimation(var_201_bool, var_197_string);
	var_204_bool = var_201_bool;
	if(var_204_bool != 0) {
		lshGetAnimTimes(var_197_string, var_202_float, var_203_float);
		lshPlayAnimation(var_202_float, var_203_float, (bool)0);
	} else {
		var_207_int = "Can't find lsh animation : " + var_197_string;
		Trace(var_207_int);
	}
	return 6;
	
}


func_4174(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0;
	var_28_object = var_32_object;
	var_29_object = var_33_object;
	func_3974(var_31_bool, var_32_object, var_33_object, (float)700.0);
	var_31_bool = var_27_bool;
	return 0;
}


func_4183(var_105_object)
{
	var_106_bool = 0; var_107_object = Obj();
	var_105_object = var_107_object;
	func_2777(var_106_bool, var_107_object);
	if(var_106_bool != 0) {
		var_110_object = Obj();
		func_3239(var_110_object);
		ReportReputationChange(var_105_object, var_110_object, (float)-0.10000000149011612, (bool)1);
		var_115_bool = 0;
		func_3544((bool)0);
	}
	func_3520();
	var_249_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_3165(var_175_string, var_176_bool)
{
	var_179_bool = 0; var_180_float = 0; var_181_float = 0; var_182_bool = 0; var_183_float = 0; var_184_float = 0;
	lshHasAnimation(var_182_bool, var_175_string);
	var_185_bool = var_182_bool;
	if(var_185_bool != 0) {
		lshGetAnimTimes(var_175_string, var_183_float, var_184_float);
		lshPlayAnimation(var_183_float, var_184_float, var_176_bool);
	} else {
		var_187_int = "Can't find lsh animation : " + var_175_string;
		Trace(var_187_int);
	}
	return 6;
	
}


func_2150(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3180(var_91_object)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0);
	@@var_91_object:GetEyesHeight(var_94_float);
	var_95_cvector = CVector(0.0, 0.0, 0.0);
	var_96_float = GetByIndex(var_95_cvector, 1);
	var_94_float = var_96_float;
	SetByIndex(var_95_cvector, 1) = var_96_float;
	LookAsync(var_91_object, "head", var_95_cvector);
	return 4;
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_119_object, var_120_object)
{
	var_0_bool = var_120_object;
	var_1_object = var_119_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_126_bool = 0;
		var_126_bool = 0;
		var_127_bool = 0;
		var_127_bool = 0;
		var_128_bool = 0;
		var_128_bool = 0;
		var_129_bool = 0;
		var_129_bool = 0;
		var_130_bool = 0; var_131_object = Obj();
		var_131_object = var_1_object;
		func_3325(var_131_object);
		if(var_130_bool != 0) {
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_object;
			func_3337(var_138_bool, var_139_object);
			var_149_bool = var_138_bool == 0; //@nz
			if(var_149_bool != 0) {
				var_129_bool = 1;
			}
		}
		if(var_129_bool != 0) {
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_3347(var_150_bool, var_151_object);
			var_156_bool = var_150_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_128_bool = 1;
			}
		}
		if(var_128_bool != 0) {
			var_157_bool = 0; var_158_object = Obj();
			var_158_object = var_1_object;
			func_3357(var_157_bool, var_158_object);
			var_163_bool = var_157_bool == 0; //@nz
			if(var_163_bool != 0) {
				var_127_bool = 1;
			}
		}
		if(var_127_bool != 0) {
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_3367(var_164_bool, var_165_object);
			var_170_bool = var_164_bool == 0; //@nz
			if(var_170_bool != 0) {
				var_126_bool = 1;
			}
		}
		if(var_126_bool != 0) {
			var_171_string = "";
			func_366(var_120_object, "Neutral");
			@@@var_0_bool:SetMessage((int)543344);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543362, (int)45824, (int)45822);
			@@@var_0_bool:AddReply((int)543361, (int)-1, (int)45821);
		} else {
				var_213_bool = 0; var_214_object = Obj();
				var_214_object = var_1_object;
				func_3325(var_214_object);
				if(var_213_bool != 0) {
					var_215_string = "";
					func_366(var_120_object, "Neutral");
					@@@var_0_bool:SetMessage((int)543343);
					@@@var_0_bool:ClearReplies();
					var_217_bool = 0;
					var_217_bool = 1;
					var_218_bool = 0; var_219_object = Obj();
					var_219_object = var_1_object;
					func_3337(var_218_bool, var_219_object);
					if(var_218_bool != 1) {
						var_220_bool = 0; var_221_object = Obj();
						var_221_object = var_1_object;
						func_3347(var_220_bool, var_221_object);
						if(var_220_bool != 1) {
							var_217_bool = 0;
						}
					}
					if(var_217_bool != 0) {
						@@@var_0_bool:AddReply((int)543349, (int)45804, (int)45807);
					}
					var_225_bool = 0;
					var_225_bool = 1;
					var_226_bool = 0; var_227_object = Obj();
					var_227_object = var_1_object;
					func_3337(var_226_bool, var_227_object);
					if(var_226_bool != 1) {
						var_228_bool = 0; var_229_object = Obj();
						var_229_object = var_1_object;
						func_3347(var_228_bool, var_229_object);
						if(var_228_bool != 1) {
							var_225_bool = 0;
						}
					}
					if(var_225_bool != 0) {
						@@@var_0_bool:AddReply((int)543345, (int)45804, (int)45803);
					}
					var_233_bool = 0;
					var_233_bool = 1;
					var_234_bool = 0; var_235_object = Obj();
					var_235_object = var_1_object;
					func_3357(var_234_bool, var_235_object);
					if(var_234_bool != 1) {
						var_236_bool = 0; var_237_object = Obj();
						var_237_object = var_1_object;
						func_3367(var_236_bool, var_237_object);
						if(var_236_bool != 1) {
							var_233_bool = 0;
						}
					}
					if(var_233_bool != 0) {
						@@@var_0_bool:AddReply((int)543347, (int)45806, (int)45805);
					}
					var_241_bool = 0;
					var_241_bool = 1;
					var_242_bool = 0; var_243_object = Obj();
					var_243_object = var_1_object;
					func_3357(var_242_bool, var_243_object);
					if(var_242_bool != 1) {
						var_244_bool = 0; var_245_object = Obj();
						var_245_object = var_1_object;
						func_3367(var_244_bool, var_245_object);
						if(var_244_bool != 1) {
							var_241_bool = 0;
						}
					}
					if(var_241_bool != 0) {
						@@@var_0_bool:AddReply((int)543357, (int)45806, (int)45816);
					}
					var_249_bool = 0;
					var_249_bool = 1;
					var_250_bool = 0; var_251_object = Obj();
					var_251_object = var_1_object;
					func_3357(var_250_bool, var_251_object);
					if(var_250_bool != 1) {
						var_252_bool = 0; var_253_object = Obj();
						var_253_object = var_1_object;
						func_3367(var_252_bool, var_253_object);
						if(var_252_bool != 1) {
							var_249_bool = 0;
						}
					}
					if(var_249_bool != 0) {
						@@@var_0_bool:AddReply((int)543355, (int)-1, (int)45814);
					}
					@@@var_0_bool:AddReply((int)543351, (int)-1, (int)45809);
					goto Label_336;
				}
				var_260_string = "";
				func_366(var_120_object, "Neutral");
				@@@var_0_bool:SetMessage((int)538136);
				@@@var_0_bool:ClearReplies();
				var_262_bool = 0;
				var_262_bool = 0;
				var_263_bool = 0; var_264_object = Obj();
				var_264_object = var_1_object;
				func_3313(var_264_object);
				if(var_263_bool != 0) {
					var_269_bool = 0; var_270_object = Obj();
					var_270_object = var_1_object;
					func_3377(var_269_bool, var_270_object);
					if(var_269_bool != 0) {
						var_262_bool = 1;
					}
				}
				if(var_262_bool != 0) {
					@@@var_0_bool:AddReply((int)538137, (int)40009, (int)40008);
				}
				@@@var_0_bool:AddReply((int)538165, (int)-1, (int)40040);
				goto Label_336;
		}
	}
Label_336:
	var_195_bool = 0;
	func_4122(var_195_bool);
	if(var_195_bool != 0) {

	Label_340:
		lshWaitForAnimEnd();
		var_196_object = var_3_object;
		if(var_196_object != 0) {
		} else {
			var_197_string = "";
			var_197_string = var_2_object;
			func_3149(var_197_string);
			goto Label_340;
	}
		PlayAnimation("all", "idle");

	Label_355:
		WaitForAnimEnd();
		var_210_object = var_3_object;
		if(var_210_object != 0) {
			goto Label_365;
		}
		PlayAnimation("all", "idle");
		goto Label_355;

	}
	goto Label_365;
	
Label_365:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


func_2166(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_2762(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3255(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_3191()
{
	var_25_bool = 0;
	func_4122(var_25_bool);
	if(var_25_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3198(var_48_string)
{
	var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	IsExisting3DSound(var_57_bool, var_48_string);
	var_65_bool = var_57_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_58_int = 0;

	Label_3204:
		var_67_int = var_58_int + (int)1;
		var_68_int = var_48_string + var_67_int;
		IsExisting3DSound(var_59_bool, var_68_int);
		var_69_bool = var_59_bool == 0; //@nz
		if(var_69_bool != 0) {
		} else {
			var_58_int = var_58_int + (int)1;
			goto Label_3204;
		}
		var_70_bool = var_58_int == 0; //@nz
		if(var_70_bool != 0) {
			return 16;
		}
		irand(var_60_int, var_58_int);
		var_72_int = var_60_int + (int)1;
		var_48_string = var_48_string + var_72_int;
	}
	Is3DSoundLoaded(var_61_bool, var_48_string);
	var_73_bool = var_61_bool;
	if(var_73_bool != 0) {
		GetEyesHeight(var_62_float);
		GetDirection(var_63_cvector);
		var_64_cvector = var_63_cvector * (int)50;
		var_75_float = GetByIndex(var_64_cvector, 1);
		var_75_float = var_75_float + var_62_float;
		SetByIndex(var_64_cvector, 1) = var_75_float;
		PlayGlobalSound(var_48_string, var_64_cvector);
	}
	return 16;
	
}


func_2182(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_3245(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_3245(var_50_cvector, var_51_cvector);
	var_50_cvector = var_47_cvector;
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, (int)32, (float)7000.0);
	var_49_float = var_49_float - (int)100;
	var_65_bool = var_49_float < (int)0;
	if(var_65_bool != 0) {
		var_49_float = 0;
	}
	var_36_cvector = var_48_cvector * var_49_float;
	return 12;
}


func_3719(var_142_int, var_143_string)
{
	var_144_int = 0; var_145_int = 0;
	GetInvItemByName(var_145_int, var_143_string);
	var_145_int = var_142_int;
	return 2;
}


func_3724(var_23_object)
{
	var_24_object = Obj();
	var_23_object = var_24_object;
	TaskCall(3);
	func_910(var_24_object);
	TaskReturn();
	return 0;
}


func_1678(var_96_bool)
{
	var_96_bool = 1;
	return 0;
}


func_1680()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1685(var_0_bool, var_83_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0;
	var_0_bool = var_83_object;
	func_1736(var_90_bool);
	GetDirection(var_88_cvector);
	var_98_cvector = CVector(0,0,0); var_99_object = Obj();
	var_99_object = var_0_bool;
	func_2762(var_98_cvector, var_99_object);
	var_98_cvector = var_89_cvector;
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	var_88_cvector = var_105_cvector;
	var_89_cvector = var_106_cvector;
	func_3282(var_104_float, var_105_cvector, var_106_cvector);
	var_129_bool = var_104_float < (int)0;
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_130_object = var_0_bool;
		func_2985(var_130_object);
		var_90_bool = 1;
	} else {
		Sleep((float)1.5, var_90_bool);
	}
	var_139_bool = var_90_bool;
	if(var_139_bool != 0) {
		var_140_object = Obj();
		var_140_object = var_0_bool;
		func_2985(var_140_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_2212(var_0_bool, var_1_object, var_2_object, var_112_object)
{
	var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_float = 0;
	var_0_bool = var_112_object;
	var_126_cvector = CVector(0,0,0); var_127_float = 0;
	func_2182(var_125_float, var_126_cvector, (float)1.7453293800354004);
	var_126_cvector = var_121_cvector;
	var_122_float = var_121_cvector | var_121_cvector;
	var_157_bool = var_122_float < (float)2500.0;
	if(var_157_bool != 0) {
		var_158_cvector = CVector(0,0,0); var_159_float = 0;
		func_2182(var_125_float, var_158_cvector, (float)2.6179938316345215);
		var_158_cvector = var_121_cvector;
		var_122_float = var_121_cvector | var_121_cvector;
		var_161_bool = var_122_float < (float)2500.0;
		if(var_161_bool != 0) {
			var_163_float = sqrt(var_122_float);
			var_164_int = "Can't retreat, distance: " + var_163_float;
			Trace(var_164_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_166_float = GetByIndex(var_121_cvector, 0);
	var_167_float = GetByIndex(var_121_cvector, 2);
	Rotate(var_166_float, var_167_float);
	var_168_cvector = CVector(0,0,0);
	func_2757(var_168_cvector);
	var_1_object = var_168_cvector + var_121_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_2254:
	MovePoint(var_1_object, (int)1, var_123_bool);
	var_174_bool = var_123_bool;
	if(var_174_bool != 0) {
		var_175_bool = var_0_bool == 0; //@ne
		if(var_175_bool != 0) {
			goto Label_2284;
		EMIT "GOTO 0x8ea";

		Label_2284:
			return 10;
		}
		var_176_cvector = CVector(0,0,0); var_177_float = 0;
		func_2182(var_125_float, var_176_cvector, (float)2.6179938316345215);
		var_176_cvector = var_124_cvector;
		var_125_float = var_124_cvector | var_124_cvector;
		var_179_bool = var_125_float >= (float)2500.0;
		if(var_179_bool != 0) {
			var_180_cvector = CVector(0,0,0);
			func_2757(var_180_cvector);
			var_1_object = var_180_cvector + var_124_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2284;
		}
	}
	var_183_bool = var_2_object == 0; //@nz
	if(var_183_bool == 1) goto Label_2254;
	
}


func_2725(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3239(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj();
	self(var_112_object);
	var_112_object = var_110_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3245(var_54_cvector, var_55_cvector)
{
	var_62_float = 0; var_63_float = 0;
	var_64_int = var_55_cvector | var_55_cvector;
	var_63_float = sqrt(var_64_int);
	var_65_float = 9.999999974752427e-07;
	var_66_bool = var_63_float < var_65_float;
	if(var_66_bool != 0) {
		var_54_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_54_cvector = var_55_cvector / var_63_float;
	return 2;
}


func_2741(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_2762(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3255(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_3255(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector;
	var_89_int = var_86_cvector | var_86_cvector;
	var_90_int = var_87_cvector | var_87_cvector;
	var_91_float = var_89_int * var_90_int;
	var_92_float = sqrt(var_91_float);
	var_85_float = var_88_int / var_92_float;
	return 0;
}


func_3769(var_26_bool, var_27_object, var_28_string)
{
	var_30_bool = var_28_string == "unholster";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_27_object = var_32_object;
		func_4060(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xed7";
	}
	var_36_bool = var_28_string == "player_shot";
	if(var_36_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_27_object = var_38_object;
		func_4073(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xed7";
	}
	var_53_bool = var_28_string == "battle";
	if(var_53_bool != 0) {
		var_54_bool = 0; var_55_object = Obj();
		var_27_object = var_55_object;
		func_4096(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = 0;
	return 0;
}


func_3263(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_80_float = var_78_float * var_79_float;
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_83_float = var_81_float * var_82_float;
	var_75_float = var_80_float + var_83_float;
	return 0;
}


func_2757(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
	GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
	return 2;
}


func_1736(var_0_bool)
{
	var_91_object = Obj();
	var_91_object = var_0_bool;
	func_3180(var_91_object);
	return 0;
}


func_3272(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_88_float = var_86_float * var_87_float;
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_91_float = var_89_float * var_90_float;
	var_92_int = var_88_float + var_91_float;
	var_84_float = sqrt(var_92_int);
	return 0;
}


func_2762(var_56_cvector, var_57_object)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	GetPosition(var_60_cvector);
	@@var_57_object:GetPosition(var_61_cvector);
	var_56_cvector = var_61_cvector - var_60_cvector;
	return 4;
}


func_2769(var_42_float, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_43_object:GetPosition(var_48_cvector);
	var_49_cvector = var_48_cvector - var_47_cvector;
	var_42_float = var_49_cvector | var_49_cvector;
	return 6;
}


func_3282(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	var_73_cvector = var_76_cvector;
	var_74_cvector = var_77_cvector;
	func_3263(var_75_float, var_76_cvector, var_77_cvector);
	var_84_float = 0; var_85_cvector = CVector(0,0,0);
	var_73_cvector = var_85_cvector;
	func_3272(var_84_float, var_85_cvector);
	var_93_float = 0; var_94_cvector = CVector(0,0,0);
	var_74_cvector = var_94_cvector;
	func_3272(var_93_float, var_94_cvector);
	var_95_float = var_84_float * var_93_float;
	var_72_float = var_75_float / var_95_float;
	return 0;
}


func_3801(var_60_object, var_61_string)
{
	var_63_bool = var_61_string == "unholster";
	if(var_63_bool != 0) {
		var_64_object = Obj();
		var_60_object = var_64_object;
		func_4065(var_64_object);
	} else {
		var_138_bool = var_61_string == "player_shot";
		if(var_138_bool != 0) {
			var_139_object = Obj();
			var_60_object = var_139_object;
			func_4088(var_139_object);
			goto Label_3825;
		}
		var_206_bool = var_61_string == "battle";
		if(var_206_bool == 0) goto Label_3825;
		var_207_object = Obj();
		var_60_object = var_207_object;
		func_4103(var_207_object);
	}
Label_3825:
	return 0;
	
}


func_2777(var_106_bool, var_107_object)
{
	var_108_bool = 0; var_109_bool = 0;
	IsPlayerActor(var_107_object, var_109_bool);
	var_109_bool = var_106_bool;
	return 2;
}


func_2782(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0;
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", (int)2);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	@@var_52_object:HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
	return 2;
}


func_3299(var_132_int, var_133_string)
{
	var_134_int = 0; var_135_int = 0;
	GetVariable(var_133_string, var_135_int);
	var_135_int = var_132_int;
	return 2;
}


func_3304(var_124_int)
{
	var_125_float = 0; var_126_float = 0;
	GetGameTime(var_126_float);
	var_128_int = 0;
	var_128_int = var_126_float / (int)24;
	var_124_int = (int)1 + var_128_int;
	return 2;
}


func_2794(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
}


func_2799(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj();
	var_39_bool = var_34_object == 0; //@ne
	if(var_39_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_40_bool = 0;
	var_40_bool = 0;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", (int)1);
	if(var_43_bool != 0) {
		var_44_bool = 0; var_45_object = Obj();
		var_34_object = var_45_object;
		func_2794(var_44_bool, var_45_object);
		if(var_44_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetScene(var_37_object);
	var_48_bool = var_37_object == 0; //@ne
	if(var_48_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	@@var_34_object:GetScene(var_38_object);
	var_49_bool = var_37_object != var_38_object;
	if(var_49_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_33_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3313(var_263_bool)
{
	var_265_int = 0; var_266_string = "";
	func_3299(var_265_int, "branch");
	var_268_bool = var_265_int == (int)0;
	if(var_268_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


func_3826(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0;
	var_27_bool = 0;
	var_27_bool = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_24_object = var_29_object;
	func_4060(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_24_object = var_33_object;
		func_2777(var_32_bool, var_33_object);
		if(var_32_bool != 0) {
			var_27_bool = 1;
		}
	}
	if(var_27_bool != 0) {
		@@var_24_object:IsWeaponHolstered(var_26_bool);
		var_36_bool = var_26_bool == 0; //@nz
		if(var_36_bool != 0) {
			var_23_bool = 1;
			return 2;
		}
	}
	var_23_bool = 0;
	return 2;
}


func_1277(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_1413(var_21_cvector, var_22_bool);
	return 0;
}


func_3325(var_130_bool)
{
	var_132_int = 0; var_133_string = "";
	func_3299(var_132_int, "branch");
	var_137_bool = var_132_int == (int)2;
	if(var_137_bool != 0) {
		var_130_bool = 1;
		return 0;
	}
	var_130_bool = 0;
	return 0;
}


func_1285(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_1420(var_26_bool, var_27_int);
	return 0;
}


func_3337(var_138_bool, var_139_object)
{
	var_140_bool = 0; var_141_object = Obj();
	var_139_object = var_141_object;
	func_3387(var_141_object);
	if(var_140_bool != 0) {
		var_138_bool = 1;
		return 0;
	}
	var_138_bool = 0;
	return 0;
}


func_3849(var_39_object)
{
	var_40_object = Obj();
	var_39_object = var_40_object;
	func_4065(var_40_object);
	return 0;
}


func_3855(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	func_2777(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		var_30_object = Obj();
		func_3239(var_30_object);
		ReportReputationChange(var_25_object, var_30_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_2835(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_2799(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_2782(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
}


func_3347(var_150_bool, var_151_object)
{
	var_152_bool = 0; var_153_object = Obj();
	var_151_object = var_153_object;
	func_3394(var_153_object);
	if(var_152_bool != 0) {
		var_150_bool = 1;
		return 0;
	}
	var_150_bool = 0;
	return 0;
}


func_1302(var_2_object, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_23_object = var_29_object;
	func_2835(var_28_bool, var_29_object);
	var_62_bool = var_28_bool == 0; //@nz
	if(var_62_bool != 0) {
		return 4;
	}
	var_63_object = var_2_object;
	if(var_63_object != 0) {
		return 4;
	}
	IsPlayerActor(var_23_object, var_26_bool);
	var_64_bool = var_26_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 4;
	}
	var_65_int = 0; var_66_object = Obj();
	var_23_object = var_66_object;
	func_3921(var_66_object);
	var_65_int = var_27_int;
	var_78_bool = var_27_int > (int)0;
	if(var_78_bool != 0) {
		var_80_bool = var_27_int > (int)1;
		if(var_80_bool != 0) {
			func_1285(var_27_int);
		}
		var_82_object = Obj();
		var_23_object = var_82_object;
		func_3930(var_82_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_3868(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	var_28_bool = var_24_string == "heal";
	if(var_28_bool != 0) {
		FindActor(var_26_object, "player");
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_4109(var_31_object);
		var_30_bool = var_23_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = 0;
	return 2;
}


func_3357(var_157_bool, var_158_object)
{
	var_159_bool = 0; var_160_object = Obj();
	var_158_object = var_160_object;
	func_3401(var_160_object);
	if(var_159_bool != 0) {
		var_157_bool = 1;
		return 0;
	}
	var_157_bool = 0;
	return 0;
}


func_2337(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3367(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj();
	var_165_object = var_167_object;
	func_3408(var_167_object);
	if(var_166_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_2859(var_39_object)
{
	var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; var_47_bool = 0; var_48_int = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_string = "";
	var_54_bool = var_39_object == 0; //@ne
	if(var_54_bool != 0) {
		return 14;
	}
	IsDead(var_47_bool);
	var_55_bool = var_47_bool;
	if(var_55_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_48_int);
	var_57_bool = var_48_int < (int)0;
	if(var_57_bool != 0) {
		return 14;
	}
	@@var_39_object:GetPosition(var_49_cvector);
	GetPosition(var_50_cvector);
	GetDirection(var_51_cvector);
	var_52_cvector = var_50_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_52_cvector, 0);
	var_59_float = GetByIndex(var_51_cvector, 0);
	var_60_float = var_58_float * var_59_float;
	var_61_float = GetByIndex(var_52_cvector, 2);
	var_62_float = GetByIndex(var_51_cvector, 2);
	var_63_float = var_61_float * var_62_float;
	var_64_int = var_60_float + var_63_float;
	var_66_bool = var_64_int >= (int)0;
	if(var_66_bool != 0) {
		var_53_string = "fhit";
	} else {
		var_53_string = "bhit";
	}
	var_69_int = var_53_string + "1";
	var_71_int = var_53_string + "2";
	FadeSecondaryAnimation("hit_react", var_69_int, var_71_int, (int)-10);
	return 14;
	
}


func_3884(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj();
	var_38_bool = var_34_string == "heal";
	if(var_38_bool != 0) {
		FindActor(var_36_object, "player");
		var_36_object = Obj();
		func_4112();
		var_36_object = 0;
	}
	return 2;
}


func_3377(var_269_bool, var_270_object)
{
	var_271_bool = 0; var_272_object = Obj();
	var_270_object = var_272_object;
	func_3415(var_272_object);
	if(var_271_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_2353(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_2762(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3255(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_3897(var_77_string, var_78_int)
{
	var_79_string = ""; var_80_string = "";
	var_81_int = var_78_int;
	if(var_81_int != 0) {
		"idle" = "idle" + var_78_int;
	}
	var_80_string = var_77_string;
	return 2;
}


func_3387(var_140_bool)
{
	var_142_int = 0;
	func_3304(var_142_int);
	var_140_bool = var_142_int == (int)3;
	return 0;
}


func_1342(var_0_bool, var_1_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_34_float, (float)0.5);
	Sleep(var_34_float);
	
Label_1350:
	var_41_bool = var_0_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_42_bool = var_1_object == 0; //@nz
		if(var_42_bool != 0) {

		Label_1354:
			GetPosition(var_36_cvector);
			var_43_float = 0;
			func_1401(var_43_float);
			GetRandomPFPointInCircle(var_35_cvector, var_36_cvector, var_43_float, var_37_bool);
			var_46_bool = var_37_bool;
			if(var_46_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_1354;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_1370;
	
Label_1370:
	var_47_object = Obj(); var_48_cvector = CVector(0,0,0);
	var_35_cvector = var_48_cvector;
	func_1429(var_47_object, var_48_cvector);
	var_47_object = var_38_object;
	var_51_bool = var_38_object != 0; //@nn
	if(var_51_bool != 0) {
		RotatePath(var_38_object, var_39_bool);
		var_52_bool = var_39_bool;
		if(var_52_bool != 0) {
			var_53_bool = 0;
			func_1427(var_53_bool);
			FollowPath(var_38_object, var_53_bool, var_39_bool);
			var_38_object = 0;
			var_54_bool = var_39_bool;
			if(var_54_bool != 0) {
				TaskCall(5);
				func_1599();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_38_object = 0;
	goto Label_1350;
	
}


func_3904(var_71_int)
{
	var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0;
	var_74_int = 0;
	
Label_3906:
	var_77_string = ""; var_78_int = 0;
	var_74_int = var_78_int;
	func_3897(var_77_string, var_78_int);
	HasAnimation(var_75_bool, "all", var_77_string);
	var_82_bool = var_75_bool == 0; //@nz
	if(var_82_bool != 0) {
	} else {
		var_74_int = var_74_int + (int)1;
		goto Label_3906;
	}
	var_74_int = var_71_int;
	return 4;
	
}


func_3394(var_152_bool)
{
	var_154_int = 0;
	func_3304(var_154_int);
	var_152_bool = var_154_int == (int)4;
	return 0;
}


func_2376(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_3245(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_3245(var_50_cvector, var_51_cvector);
	var_50_cvector = var_47_cvector;
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, (int)32, (float)7000.0);
	var_49_float = var_49_float - (int)100;
	var_65_bool = var_49_float < (int)0;
	if(var_65_bool != 0) {
		var_49_float = 0;
	}
	var_36_cvector = var_48_cvector * var_49_float;
	return 12;
}


func_3401(var_159_bool)
{
	var_161_int = 0;
	func_3304(var_161_int);
	var_159_bool = var_161_int == (int)5;
	return 0;
}


func_3408(var_166_bool)
{
	var_168_int = 0;
	func_3304(var_168_int);
	var_166_bool = var_168_int == (int)6;
	return 0;
}


func_3921(var_65_int)
{
	var_67_bool = 0;
	func_4168(var_67_bool);
	if(var_67_bool != 0) {
		var_65_int = 2;
	} else {
		var_65_int = 0;
	}
	return 0;
	
}


func_3415(var_271_bool)
{
	var_273_int = 0;
	func_3304(var_273_int);
	var_271_bool = var_273_int == (int)7;
	return 0;
}


func_2903(var_26_object, var_27_int, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_int = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_int = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0);
	var_47_bool = 0;
	var_47_bool = 0;
	var_48_bool = 0;
	var_48_bool = 0;
	var_49_object = var_26_object;
	if(var_49_object != 0) {
		var_51_bool = var_27_int != (int)4;
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		var_53_bool = var_27_int != (int)5;
		if(var_53_bool != 0) {
			var_47_bool = 1;
		}
	}
	if(var_47_bool != 0) {
		var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
		var_56_cvector = CVector(0,0,0); var_57_object = Obj();
		var_26_object = var_57_object;
		func_2762(var_56_cvector, var_57_object);
		var_56_cvector = var_55_cvector;
		func_3245(var_54_cvector, var_55_cvector);
		var_54_cvector = var_38_cvector;
		CreateVectorVector(var_39_object);
		var_40_int = 1;

	Label_2932:
		var_68_int = "hit" + var_40_int;
		GetGeometryLocator(var_68_int, var_41_bool, var_42_cvector, var_43_cvector);
		var_69_bool = var_41_bool == 0; //@nz
		if(var_69_bool != 0) {
		} else {
			var_117_int = var_43_cvector | var_38_cvector;
			var_119_bool = var_117_int >= (float)0.7071067690849304;
			if(var_119_bool != 0) {
				@@var_39_object:add(var_42_cvector);
			}
			var_40_int = var_40_int + (int)1;
			goto Label_2932;
		}
		@@var_39_object:size(var_44_int);
		var_70_int = var_44_int;
		if(var_70_int != 0) {
			irand(var_45_int, var_44_int);
			@@var_39_object:get(var_46_cvector, var_45_int);
			var_71_object = Obj(); var_72_int = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
			var_26_object = var_71_object;
			var_27_int = var_72_int;
			var_28_float = var_73_float;
			var_46_cvector = var_74_cvector;
			var_75_cvector = -var_38_cvector;
			func_2971(var_73_float, var_74_cvector, var_75_cvector);
			return 18;
		}
		var_39_object = 0;
	}
	var_116_object = Obj();
	var_26_object = var_116_object;
	func_2859(var_116_object);
	return 18;
	
}


func_3930(var_82_object)
{
	var_83_object = Obj();
	var_82_object = var_83_object;
	TaskCall(6);
	func_1685(var_84_object, var_83_object);
	TaskReturn();
	return 0;
}


func_1884()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_3422(var_110_int)
{
	var_111_int = 0; var_112_int = 0;
	GetVariable("branch", var_112_int);
	var_115_bool = var_112_int == (int)0;
	if(var_115_bool != 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0xd6d";
	}
	var_117_bool = var_112_int == (int)1;
	if(var_117_bool != 0) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
	return 2;
}


func_3938(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_object = var_37_object;
	func_2835(var_36_bool, var_37_object);
	if(var_36_bool != 0) {
		var_34_int = 2;
	} else {
		var_34_int = 0;
	}
	return 0;
	
}


func_2406(var_0_bool, var_1_object, var_2_object, var_41_object)
{
	var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_float = 0;
	var_0_bool = var_41_object;
	var_55_cvector = CVector(0,0,0); var_56_float = 0;
	func_2376(var_54_float, var_55_cvector, (float)1.7453293800354004);
	var_55_cvector = var_50_cvector;
	var_51_float = var_50_cvector | var_50_cvector;
	var_86_bool = var_51_float < (float)2500.0;
	if(var_86_bool != 0) {
		var_87_cvector = CVector(0,0,0); var_88_float = 0;
		func_2376(var_54_float, var_87_cvector, (float)2.6179938316345215);
		var_87_cvector = var_50_cvector;
		var_51_float = var_50_cvector | var_50_cvector;
		var_90_bool = var_51_float < (float)2500.0;
		if(var_90_bool != 0) {
			var_92_float = sqrt(var_51_float);
			var_93_int = "Can't retreat, distance: " + var_92_float;
			Trace(var_93_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_95_float = GetByIndex(var_50_cvector, 0);
	var_96_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_95_float, var_96_float);
	var_97_cvector = CVector(0,0,0);
	func_2757(var_97_cvector);
	var_1_object = var_97_cvector + var_50_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_2448:
	MovePoint(var_1_object, (int)1, var_52_bool);
	var_103_bool = var_52_bool;
	if(var_103_bool != 0) {
		var_104_bool = var_0_bool == 0; //@ne
		if(var_104_bool != 0) {
			goto Label_2478;
		EMIT "GOTO 0x9ac";

		Label_2478:
			return 10;
		}
		var_105_cvector = CVector(0,0,0); var_106_float = 0;
		func_2376(var_54_float, var_105_cvector, (float)2.6179938316345215);
		var_105_cvector = var_53_cvector;
		var_54_float = var_53_cvector | var_53_cvector;
		var_108_bool = var_54_float >= (float)2500.0;
		if(var_108_bool != 0) {
			var_109_cvector = CVector(0,0,0);
			func_2757(var_109_cvector);
			var_1_object = var_109_cvector + var_53_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2478;
		}
	}
	var_112_bool = var_2_object == 0; //@nz
	if(var_112_bool == 1) goto Label_2448;
	
}


func_3948(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	TaskCall(7);
	func_1960(var_77_object);
	TaskReturn();
	return 0;
}


func_366(var_2_object, var_171_string)
{
	var_172_bool = 0;
	func_4122(var_172_bool);
	var_173_bool = var_172_bool == 0; //@nz
	if(var_173_bool != 0) {
		return 0;
	}
	var_174_bool = var_171_string == var_2_object;
	if(var_174_bool != 0) {
		return 0;
	}
	var_175_string = ""; var_176_bool = 0;
	var_171_string = var_175_string;
	var_178_bool = var_171_string == "";
	if(var_178_bool != 0) {
		var_176_bool = 0;
	} else {
		var_176_bool = 1;
	}
	func_3165(var_175_string, var_176_bool);
	var_2_object = var_171_string;
	return 0;
	
}


func_3439(var_229_int)
{
	var_230_int = 0; var_231_int = 0;
	GetVariable("branch", var_231_int);
	var_231_int = var_229_int;
	return 2;
}


func_3956(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj();
	var_75_object = var_78_object;
	func_2835(var_77_bool, var_78_object);
	if(var_77_bool != 0) {
		var_74_int = 2;
	} else {
		var_74_int = 0;
	}
	return 0;
	
}


func_3445(var_68_float)
{
	var_69_object = Obj(); var_70_float = 0; var_71_object = Obj(); var_72_float = 0;
	FindActor(var_71_object, "player");
	var_74_bool = var_71_object == 0; //@nz
	if(var_74_bool != 0) {
		var_68_float = 0;
		return 4;
	}
	@@var_71_object:GetProperty("reputation", var_72_float);
	var_72_float = var_68_float;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1401(var_43_float)
{
	var_44_float = 0; var_45_float = 0;
	GetCameraFarDistance(var_45_float);
	var_45_float = var_43_float;
	return 2;
}


func_3966(var_111_object)
{
	var_112_object = Obj();
	var_111_object = var_112_object;
	TaskCall(8);
	func_2212(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
	return 0;
}


func_3459(var_39_object)
{
	var_40_int = 0;
	func_3439(var_40_int);
	var_45_bool = var_40_int == (int)1;
	if(var_45_bool != 0) {
		WorkWithCorpse(var_39_object);
	} else {
		Barter(var_39_object);
	}
	return 0;
	
}


func_1413(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_3974(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0;
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_33_object = var_40_object;
	func_2782(var_39_bool, var_40_object, "class");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	@@var_33_object:GetProperty("class", var_37_string);
	var_51_bool = var_37_string == "rat";
	if(var_51_bool != 0) {
		var_31_bool = 0;
		return 4;
	EMIT "GOTO 0xfa4";
	}
	var_53_bool = var_37_string == "rat_big";
	if(var_53_bool != 0) {
		var_31_bool = 0;
		return 4;
	EMIT "GOTO 0xfa4";
	}
	var_55_bool = var_37_string == "dog";
	if(var_55_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	CanSee(var_38_bool, var_32_object);
	var_56_bool = 0;
	var_56_bool = 1;
	var_57_bool = var_38_bool;
	if(var_57_bool != 1) {
		var_58_float = 0; var_59_object = Obj();
		var_32_object = var_59_object;
		func_2769(var_58_float, var_59_object);
		var_66_float = var_34_float * var_34_float;
		var_67_bool = var_58_float <= var_66_float;
		if(var_67_bool != 1) {
			var_56_bool = 0;
		}
	}
	if(var_56_bool != 0) {
		var_31_bool = 1;
		return 4;
	}
	CanSee(var_38_bool, var_33_object);
	var_68_bool = 0;
	var_68_bool = 1;
	var_69_bool = var_38_bool;
	if(var_69_bool != 1) {
		var_70_float = 0; var_71_object = Obj();
		var_33_object = var_71_object;
		func_2769(var_70_float, var_71_object);
		var_72_float = var_34_float * var_34_float;
		var_73_bool = var_70_float <= var_72_float;
		if(var_73_bool != 1) {
			var_68_bool = 0;
		}
	}
	if(var_68_bool != 0) {
		var_31_bool = 1;
		return 4;
	}
	var_31_bool = 0;
	return 4;
}


func_1420(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_910(var_24_object)
{
	EventDisable(0);
	var_25_object = Obj();
	var_24_object = var_25_object;
	func_943(var_25_object);
	var_105_object = Obj();
	var_24_object = var_105_object;
	func_4183(var_105_object);
	EventEnable(0);
	
Label_921:
	Hold();
	goto Label_921;
}
EMIT "Return(); Pop(0)";


func_3472(var_121_int, var_122_int)
{
	var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_bool = 0;
	var_136_bool = var_121_int > var_122_int;
	if(var_136_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_134_int = 0;
	var_138_bool = var_121_int != var_122_int;
	if(var_138_bool != 0) {
		var_139_int = var_122_int - var_121_int;
		irand(var_134_int, var_139_int);
	} else {
		var_148_bool = var_121_int == (int)0;
		if(var_148_bool == 0) goto Label_3490;
		return 4;
	}
Label_3490:
	var_134_int = var_134_int + var_121_int;
	var_141_bool = var_134_int == (int)0;
	if(var_141_bool != 0) {
		return 4;
	}
	var_142_int = 0; var_143_string = "";
	func_3719(var_142_int, "Money");
	AddItem(var_135_bool, var_142_int, (int)0, var_134_int);
	return 4;
	
}


func_1427(var_53_bool)
{
	var_53_bool = 0;
	return 0;
}


func_1429(var_47_object, var_48_cvector)
{
	var_49_object = Obj(); var_50_object = Obj();
	FindShiftedPathTo(var_50_object, var_48_cvector);
	var_50_object = var_47_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2971(var_28_object, var_31_cvector, var_32_cvector)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj();
	GetScene(var_35_object);
	AddActorByType(var_36_object, "scripted", var_35_object, var_31_cvector, var_32_cvector, "blood_dir.xml");
	var_39_object = Obj();
	var_28_object = var_39_object;
	func_2859(var_39_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1960(var_77_object)
{
	Face(var_77_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_87_object = Obj();
	var_77_object = var_87_object;
	func_2025(var_79_cvector, var_80_bool, var_77_object, var_87_object);
	return 0;
}


func_2985(var_98_object)
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0);
	@@var_98_object:GetPosition(var_102_cvector);
	GetPosition(var_103_cvector);
	var_104_cvector = var_102_cvector - var_103_cvector;
	var_105_float = GetByIndex(var_104_cvector, 0);
	var_106_float = GetByIndex(var_104_cvector, 2);
	RotateAsync(var_105_float, var_106_float);
	return 6;
}


func_943(var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_object = Obj(); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0);
	var_46_bool = var_25_object == 0; //@ne
	if(var_46_bool != 0) {
		var_47_string = "";
		func_1034("fdie");
	} else {
		@@var_25_object:GetPosition(var_36_cvector);
		GetPosition(var_37_cvector);
		GetDirection(var_38_cvector);
		var_39_cvector = var_37_cvector - var_36_cvector;
		var_79_float = GetByIndex(var_39_cvector, 0);
		var_80_float = GetByIndex(var_38_cvector, 0);
		var_81_float = var_79_float * var_80_float;
		var_82_float = GetByIndex(var_39_cvector, 2);
		var_83_float = GetByIndex(var_38_cvector, 2);
		var_84_float = var_82_float * var_83_float;
		var_85_int = var_81_float + var_84_float;
		var_87_bool = var_85_int >= (int)0;
		if(var_87_bool != 0) {
			var_40_string = "fdie";
		} else {
				var_40_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_25_object = var_41_object;
		var_90_bool = IsFuncExist(var_25_object, "GetScriptProperty", (int)2);
		if(var_90_bool != 0) {
			@@var_25_object:HasScriptProperty(var_42_bool, "Owner");
			var_92_bool = var_42_bool;
			if(var_92_bool != 0) {
				@@var_25_object:GetScriptProperty(var_41_object, "Owner");
				var_94_bool = var_41_object == 0; //@ne
				if(var_94_bool != 0) {
					var_25_object = var_41_object;
				}
			}
		}
		var_97_bool = IsFuncExist(var_41_object, "@GetEyesHeight", (int)1);
		if(var_97_bool != 0) {
			@@var_41_object:GetEyesHeight(var_44_float);
			var_45_cvector = CVector(0.0, 0.0, 0.0);
			var_98_float = GetByIndex(var_45_cvector, 1);
			var_44_float = var_98_float;
			SetByIndex(var_45_cvector, 1) = var_98_float;
			LookAsync(var_25_object, "head", var_45_cvector);
			var_43_bool = 1;
		} else {
			var_43_bool = 0;

		}
		var_100_string = "";
		var_40_string = var_100_string;
		func_3198(var_100_string);
		PlayAnimation("all", var_40_string);
		WaitForAnimEnd();
		var_102_bool = var_43_bool;
		if(var_102_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_40_string);
		RemoveEnvelope();
		var_41_object = 0;
	}
	return 20;
	
}


func_3503(var_235_string)
{
	var_236_object = Obj(); var_237_int = 0; var_238_bool = 0; var_239_object = Obj(); var_240_int = 0; var_241_bool = 0;
	CreateInvItem(var_239_object);
	@@var_239_object:SetItemName(var_235_string);
	@@var_239_object:SetProperty("Organ", (int)1);
	@@var_239_object:GetItemID(var_240_int);
	AddItem(var_241_bool, var_239_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2996(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0;
	IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
	return 2;
}


func_3001(var_58_bool, var_59_object, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0;
	@@var_59_object:GetPosition(var_71_cvector);
	@@var_59_object:GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	var_79_float = var_79_float + var_70_float;
	SetByIndex(var_71_cvector, 1) = var_79_float;
	GetPosition(var_72_cvector);
	GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	var_80_float = var_80_float + var_70_float;
	SetByIndex(var_72_cvector, 1) = var_80_float;
	var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_82_int = var_73_cvector | var_73_cvector;
	var_83_float = sqrt(var_82_int);
	var_73_cvector = var_73_cvector / var_83_float;
	var_74_cvector = -var_73_cvector;
	var_84_float = var_73_cvector * var_60_float;
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_86_cvector = var_74_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3245(var_85_cvector, var_86_cvector);
	var_94_float = var_85_cvector * (int)25;
	var_95_int = var_84_float + var_94_float;
	var_75_cvector = var_95_int - CVector(0.0, 10.0, 0.0);
	var_76_cvector = var_72_cvector + var_75_cvector;
	IsOverrideActive(var_77_bool);
	var_97_bool = var_77_bool;
	if(var_97_bool != 0) {
		var_58_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_76_cvector, var_74_cvector, (bool)1);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	Rotate(var_99_float, var_100_float);
	var_101_bool = 0;
	func_4122(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		HasAnimationTrack(var_78_bool, "head");
		var_103_bool = var_78_bool;
		if(var_103_bool == 0) goto Label_3064;
		LookAsyncCamera("head");
	}
Label_3064:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_58_bool = 1;
	return 18;
	
}


func_3520()
{
	var_229_int = 0;
	func_3439(var_229_int);
	var_234_bool = var_229_int != (int)1;
	if(var_234_bool != 0) {
		return 0;
	}
	var_235_string = "";
	func_3503("liver");
	var_246_string = "";
	func_3503("kidney");
	var_247_string = "";
	func_3503("heart");
	var_248_string = "";
	func_3503("blood");
	return 0;
}


func_4040(var_25_int)
{
	var_25_int = 0;
	return 0;
}


func_4043()
{
	return 0;
}


func_1995(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_3245(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_3245(var_50_cvector, var_51_cvector);
	var_50_cvector = var_47_cvector;
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, (int)32, (float)7000.0);
	var_49_float = var_49_float - (int)100;
	var_65_bool = var_49_float < (int)0;
	if(var_65_bool != 0) {
		var_49_float = 0;
	}
	var_36_cvector = var_48_cvector * var_49_float;
	return 12;
}


func_4045(var_209_int)
{
	var_209_int = 0;
	return 0;
}


func_4048()
{
	return 0;
}


func_4050(var_25_int)
{
	var_25_int = 2;
	return 0;
}


func_4053(var_33_object)
{
	var_34_object = Obj();
	var_33_object = var_34_object;
	func_4128(var_33_object, var_34_object);
	return 0;
}


func_3544(var_115_bool)
{
	var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_bool = 0;
	var_120_bool = var_115_bool;
	if(var_120_bool != 0) {
		var_121_int = 0; var_122_int = 0;
		var_124_int = 0;
		func_3304(var_124_int);
		var_131_float = var_124_int * (int)100;
		var_122_int = (int)100 + var_131_float;
		func_3472((int)0, var_122_int);
		irand(var_118_int, (int)8);
		var_151_bool = var_118_int == (int)0;
		if(var_151_bool != 0) {
			var_152_int = 0; var_153_string = "";
			func_3719(var_152_int, "lemon");
			AddItem(var_119_bool, var_152_int, (int)0, (int)1);
		} else {
			var_157_bool = var_118_int == (int)1;
			if(var_157_bool != 0) {
				var_158_int = 0; var_159_string = "";
				func_3719(var_158_int, "rusk");
				AddItem(var_119_bool, var_158_int, (int)0, (int)1);
				goto Label_3632;
			}
			var_163_bool = var_118_int == (int)2;
			if(var_163_bool != 0) {
				var_164_int = 0; var_165_string = "";
				func_3719(var_164_int, "hook");
				AddItem(var_119_bool, var_164_int, (int)0, (int)1);
				goto Label_3632;
			}
			var_169_bool = var_118_int == (int)4;
			if(var_169_bool != 0) {
				var_170_int = 0; var_171_string = "";
				func_3719(var_170_int, "syringe");
				AddItem(var_119_bool, var_170_int, (int)0, (int)1);
				goto Label_3632;
			}
			var_175_bool = var_118_int == (int)5;
			if(var_175_bool != 0) {
				var_176_int = 0; var_177_string = "";
				func_3719(var_176_int, "watch");
				AddItem(var_119_bool, var_176_int, (int)0, (int)1);
				goto Label_3632;
			}
			var_181_bool = var_118_int == (int)6;
			if(var_181_bool == 0) goto Label_3632;
			var_182_int = 0; var_183_string = "";
			func_3719(var_182_int, "razor");
			AddItem(var_119_bool, var_182_int, (int)0, (int)1);
	}
		var_186_int = 0; var_187_int = 0;
		var_189_int = 0;
		func_3304(var_189_int);
		var_191_float = var_189_int * (int)50;
		var_187_int = (int)50 + var_191_float;
		func_3472((int)0, var_187_int);
		irand(var_118_int, (int)7);
		var_194_bool = var_118_int == (int)0;
		if(var_194_bool != 0) {
			var_195_int = 0; var_196_string = "";
			func_3719(var_195_int, "beads");
			AddItem(var_119_bool, var_195_int, (int)0, (int)1);
			goto Label_3718;
		}
		var_200_bool = var_118_int == (int)1;
		if(var_200_bool != 0) {
			var_201_int = 0; var_202_string = "";
			func_3719(var_201_int, "bracelet");
			AddItem(var_119_bool, var_201_int, (int)0, (int)1);
			goto Label_3718;
		}
		var_206_bool = var_118_int == (int)2;
		if(var_206_bool != 0) {
			var_207_int = 0; var_208_string = "";
			func_3719(var_207_int, "ear_ring");
			AddItem(var_119_bool, var_207_int, (int)0, (int)1);
			goto Label_3718;
		}
		var_212_bool = var_118_int == (int)3;
		if(var_212_bool != 0) {
			var_213_int = 0; var_214_string = "";
			func_3719(var_213_int, "gold_ring");
			AddItem(var_119_bool, var_213_int, (int)0, (int)1);
			goto Label_3718;
		}
		var_218_bool = var_118_int == (int)4;
		if(var_218_bool != 0) {
			var_219_int = 0; var_220_string = "";
			func_3719(var_219_int, "silver_ring");
			AddItem(var_119_bool, var_219_int, (int)0, (int)1);
			goto Label_3718;
		}
		var_224_bool = var_118_int == (int)5;
		if(var_224_bool == 0) goto Label_3718;
		var_225_int = 0; var_226_string = "";
		func_3719(var_225_int, "flower");
		AddItem(var_119_bool, var_225_int, (int)0, (int)1);
	}
Label_3632:
	goto Label_3718;
	
Label_3718:
	return 4;
	
}


func_4059()
{
	return 0;
}


func_4060(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
	return 2;
}


func_4065(var_40_object)
{
	var_41_object = Obj();
	var_40_object = var_41_object;
	TaskCall(9);
	func_2406(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
	return 0;
}


func_2531(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_2025(var_0_bool, var_1_object, var_2_object, var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0;
	var_0_bool = var_87_object;
	var_98_cvector = CVector(0,0,0); var_99_float = 0;
	func_1995(var_97_float, var_98_cvector, (float)1.7453293800354004);
	var_98_cvector = var_93_cvector;
	var_94_float = var_93_cvector | var_93_cvector;
	var_129_bool = var_94_float < (float)2500.0;
	if(var_129_bool != 0) {
		var_130_cvector = CVector(0,0,0); var_131_float = 0;
		func_1995(var_97_float, var_130_cvector, (float)2.6179938316345215);
		var_130_cvector = var_93_cvector;
		var_94_float = var_93_cvector | var_93_cvector;
		var_133_bool = var_94_float < (float)2500.0;
		if(var_133_bool != 0) {
			var_135_float = sqrt(var_94_float);
			var_136_int = "Can't retreat, distance: " + var_135_float;
			Trace(var_136_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_138_float = GetByIndex(var_93_cvector, 0);
	var_139_float = GetByIndex(var_93_cvector, 2);
	Rotate(var_138_float, var_139_float);
	var_140_cvector = CVector(0,0,0);
	func_2757(var_140_cvector);
	var_1_object = var_140_cvector + var_93_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_2067:
	MovePoint(var_1_object, (int)1, var_95_bool);
	var_146_bool = var_95_bool;
	if(var_146_bool != 0) {
		var_147_bool = var_0_bool == 0; //@ne
		if(var_147_bool != 0) {
			goto Label_2097;
		EMIT "GOTO 0x82f";

		Label_2097:
			return 10;
		}
		var_148_cvector = CVector(0,0,0); var_149_float = 0;
		func_1995(var_97_float, var_148_cvector, (float)2.6179938316345215);
		var_148_cvector = var_96_cvector;
		var_97_float = var_96_cvector | var_96_cvector;
		var_151_bool = var_97_float >= (float)2500.0;
		if(var_151_bool != 0) {
			var_152_cvector = CVector(0,0,0);
			func_2757(var_152_cvector);
			var_1_object = var_152_cvector + var_96_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2097;
		}
	}
	var_155_bool = var_2_object == 0; //@nz
	if(var_155_bool == 1) goto Label_2067;
	
}


func_4073(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	CanSee(var_40_bool, var_38_object);
	var_37_bool = 1;
	var_41_bool = var_40_bool;
	if(var_41_bool != 1) {
		var_42_float = 0; var_43_object = Obj();
		var_38_object = var_43_object;
		func_2769(var_42_float, var_43_object);
		var_51_bool = var_42_float <= (int)4000000;
		if(var_51_bool != 1) {
			var_37_bool = 0;
		}
	}
	return 2;
}


func_2547(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_2762(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3255(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_4088(var_139_object)
{
	var_140_object = Obj();
	var_139_object = var_140_object;
	TaskCall(10);
	func_2600(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
	return 0;
}


func_3070()
{
	var_283_bool = 0; var_284_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_286_bool = 0;
	func_4122(var_286_bool);
	if(var_286_bool != 0) {
	} else {
		HasAnimationTrack(var_284_bool, "head");
		var_288_bool = var_284_bool;
		if(var_288_bool == 0) goto Label_3087;
		UnlookAsync("head");
	}
Label_3087:
	return 2;
	
}


