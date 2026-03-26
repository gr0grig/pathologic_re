// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectVector/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,HasInvItemProperty/3,GetInvItemProperty/3,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,CreateIntVector/1,ChooseItem/4,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|A:SetReturnValue|W:branch|A:GetItemID|W:Price|W:BarterPrice|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:killme|A:GetSubContainerCount|A:GetItemCount|A:GetItem|W:HasDurability|W:durability|W:repair.xml|W:money|A:SetItem|W:Weapon|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:reputation
// @GLOBALS: 0:bool:
// @RUN_OP: 0xb0f
// @RUN_TASK: 3
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x26f vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0xa82 vars=object
// @EVENT_6: op=0xa90 vars=
// @EVENT_22: op=0xb09 vars=object,int,float,float
// @EVENT_16: op=0xb0b vars=object,string
// @EVENT_41: op=0xb0d vars=object
// @TASK_3: vars=bool,bool,bool params=0
// @EVENT_0: op=0xb27 vars=object
// @EVENT_17: op=0xb3b vars=object
// @EVENT_30: op=0xb53 vars=object,object,bool
// @EVENT_40: op=0xb6f vars=object
// @EVENT_42: op=0xb83 vars=object,string
// @EVENT_26: op=0xba8 vars=string
// @EVENT_1: op=0xbb6 vars=object
// @EVENT_3: op=0xbc9 vars=object
// @EVENT_7: op=0xbcf vars=int
// @EVENT_6: op=0xbdb vars=
// @EVENT_41: op=0xbf2 vars=object
// @EVENT_10: op=0xc63 vars=object
// @EVENT_28: op=0xc67 vars=
// @TASK_4: vars= params=0
// @EVENT_0: op=0xc80 vars=object
// @EVENT_17: op=0xc94 vars=object
// @EVENT_30: op=0xcac vars=object,object,bool
// @EVENT_40: op=0xcc8 vars=object
// @EVENT_42: op=0xcdc vars=object,string
// @EVENT_26: op=0xd01 vars=string
// @EVENT_6: op=0xd0f vars=
// @EVENT_1: op=0xd16 vars=object
// @TASK_5: vars=object,int,int,bool,float,int params=1
// @TASK_6: vars=bool,object,bool params=6
// @EVENT_6: op=0x101e vars=
// @EVENT_7: op=0x1056 vars=int
// @EVENT_1: op=0x1071 vars=object
// @EVENT_2: op=0x1080 vars=object
// @EVENT_10: op=0x1106 vars=object
// @EVENT_41: op=0x1111 vars=object
// @STANDALONE_EVENT_16: op=0x15e6 vars=object,string
// @STANDALONE_EVENT_41: op=0x15f3 vars=object
// @STANDALONE_EVENT_22: op=0x15f9 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x1601 vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x259,0x26f,0xa73,0xa90,0xaef,0xb09,0xb0b,0xb0d,0xba8,0xbb6,0xbc9,0xbcf,0xbdb,0xbf2,0xc63,0xd01,0xd0f,0xd16,0xd7a,0xd82,0xd85,0x1016,0x101e,0x1056,0x1071,0x1080,0x10f4,0x1106,0x1111,0x111a,0x1125,0x132c,0x1333,0x1377,0x137c,0x1388,0x1394,0x13a0,0x13aa,0x13b4,0x13be,0x13c8,0x13d2,0x13dc,0x13e6,0x13f0,0x13fa,0x1404,0x140e,0x1418,0x1422,0x1429,0x142c,0x1433,0x143a,0x1441,0x1448,0x144f,0x1456,0x145d,0x1464,0x146b,0x1472,0x14d5,0x15de,0x15f3,0x15f9,0x1601,0x160b,0x162b,0x165b,0x1661,0x16a3,0x16ad,0x16b3,0x16bd,0x1710,0x1717,0x173a,0x173d,0x173f,0x174b,0x1755,0x1767,0x176d,0x1770,0x1777,0x177a,0x177c,0x177f,0x1781,0x1784,0x1786,0x1789,0x1826,0x186b,0x186e,0x1878

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	if((int)1 != 0) {
		func_4844();
		var_22_bool = var_18_bool == (int)40087;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_object;
			func_4983(var_24_object);
		}
		var_27_bool = var_18_bool == (int)45510;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_4983(var_29_object);
		}
		var_31_bool = var_18_bool == (int)45517;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_4983(var_33_object);
		}
		var_35_bool = var_18_bool == (int)40085;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4983(var_37_object);
		}
		var_39_bool = var_18_bool == (int)40086;
		if(var_39_bool != 0) {
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4983(var_41_object);
		}
		var_43_bool = var_17_object == (int)45493;
		if(var_43_bool != 0) {
			var_44_bool = 0; var_45_object = Obj();
			var_45_object = var_1_object;
			func_5012(var_45_object);
			if(var_44_bool != 0) {
				var_52_string = "";
				func_601(var_18_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543041);
				@@@var_0_object:ClearReplies();
				var_70_bool = 0;
				var_70_bool = 0;
				var_71_bool = 0;
				var_71_bool = 0;
				var_72_bool = 0; var_73_object = Obj();
				var_73_object = var_1_object;
				func_5044(var_72_bool, var_73_object);
				var_83_bool = var_72_bool == 0; //@nz
				if(var_83_bool != 0) {
					var_84_bool = 0; var_85_object = Obj();
					var_85_object = var_1_object;
					func_5054(var_84_bool, var_85_object);
					var_90_bool = var_84_bool == 0; //@nz
					if(var_90_bool != 0) {
						var_71_bool = 1;
					}
				}
				if(var_71_bool != 0) {
					var_91_bool = 0; var_92_object = Obj();
					var_92_object = var_1_object;
					func_5024(var_91_bool, var_92_object);
					if(var_91_bool != 0) {
						var_70_bool = 1;
					}
				}
				if(var_70_bool != 0) {
					@@@var_0_object:AddReply((int)543044, (int)45498, (int)45496);
				}
				var_100_bool = 0;
				var_100_bool = 1;
				var_101_bool = 0;
				var_101_bool = 1;
				var_102_bool = 0;
				var_102_bool = 1;
				var_103_bool = 0; var_104_object = Obj();
				var_104_object = var_1_object;
				func_5114(var_103_bool, var_104_object);
				if(var_103_bool != 1) {
					var_109_bool = 0; var_110_object = Obj();
					var_110_object = var_1_object;
					func_5124(var_109_bool, var_110_object);
					if(var_109_bool != 1) {
						var_102_bool = 0;
					}
				}
				if(var_102_bool != 1) {
					var_115_bool = 0; var_116_object = Obj();
					var_116_object = var_1_object;
					func_5134(var_115_bool, var_116_object);
					if(var_115_bool != 1) {
						var_101_bool = 0;
					}
				}
				if(var_101_bool != 1) {
					var_121_bool = 0; var_122_object = Obj();
					var_122_object = var_1_object;
					func_5144(var_121_bool, var_122_object);
					if(var_121_bool != 1) {
						var_100_bool = 0;
					}
				}
				if(var_100_bool != 0) {
					@@@var_0_object:AddReply((int)543057, (int)45513, (int)45512);
				}
				var_130_bool = 0;
				var_130_bool = 1;
				var_131_bool = 0; var_132_object = Obj();
				var_132_object = var_1_object;
				func_5094(var_131_bool, var_132_object);
				if(var_131_bool != 1) {
					var_137_bool = 0; var_138_object = Obj();
					var_138_object = var_1_object;
					func_5104(var_137_bool, var_138_object);
					if(var_137_bool != 1) {
						var_130_bool = 0;
					}
				}
				if(var_130_bool != 0) {
					@@@var_0_object:AddReply((int)543063, (int)45520, (int)45518);
				}
				var_146_bool = 0; var_147_object = Obj();
				var_147_object = var_1_object;
				func_5024(var_146_bool, var_147_object);
				if(var_146_bool != 0) {
					@@@var_0_object:AddReply((int)538210, (int)-1, (int)40087);
				}
				var_151_bool = 0; var_152_object = Obj();
				var_152_object = var_1_object;
				func_5024(var_151_bool, var_152_object);
				if(var_151_bool != 0) {
					@@@var_0_object:AddReply((int)543042, (int)-1, (int)45494);
				}
				var_156_bool = 0; var_157_object = Obj();
				var_157_object = var_1_object;
				func_5024(var_156_bool, var_157_object);
				if(var_156_bool != 0) {
					@@@var_0_object:AddReply((int)543043, (int)-1, (int)45495);
				}
				var_161_bool = 0;
				var_161_bool = 1;
				var_162_bool = 0;
				var_162_bool = 1;
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_5094(var_163_bool, var_164_object);
				if(var_163_bool != 1) {
					var_165_bool = 0; var_166_object = Obj();
					var_166_object = var_1_object;
					func_5104(var_165_bool, var_166_object);
					if(var_165_bool != 1) {
						var_162_bool = 0;
					}
				}
				if(var_162_bool != 1) {
					var_167_bool = 0; var_168_object = Obj();
					var_168_object = var_1_object;
					func_5114(var_167_bool, var_168_object);
					if(var_167_bool != 1) {
						var_161_bool = 0;
					}
				}
				if(var_161_bool != 0) {
					@@@var_0_object:AddReply((int)543055, (int)-1, (int)45510);
				}
				var_172_bool = 0;
				var_172_bool = 1;
				var_173_bool = 0; var_174_object = Obj();
				var_174_object = var_1_object;
				func_5094(var_173_bool, var_174_object);
				if(var_173_bool != 1) {
					var_175_bool = 0; var_176_object = Obj();
					var_176_object = var_1_object;
					func_5104(var_175_bool, var_176_object);
					if(var_175_bool != 1) {
						var_172_bool = 0;
					}
				}
				if(var_172_bool != 0) {
					@@@var_0_object:AddReply((int)543056, (int)-1, (int)45511);
				}
				var_180_bool = 0;
				var_180_bool = 1;
				var_181_bool = 0;
				var_181_bool = 1;
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_5124(var_182_bool, var_183_object);
				if(var_182_bool != 1) {
					var_184_bool = 0; var_185_object = Obj();
					var_185_object = var_1_object;
					func_5134(var_184_bool, var_185_object);
					if(var_184_bool != 1) {
						var_181_bool = 0;
					}
				}
				if(var_181_bool != 1) {
					var_186_bool = 0; var_187_object = Obj();
					var_187_object = var_1_object;
					func_5144(var_186_bool, var_187_object);
					if(var_186_bool != 1) {
						var_180_bool = 0;
					}
				}
				if(var_180_bool != 0) {
					@@@var_0_object:AddReply((int)543062, (int)-1, (int)45517);
				}
				var_191_bool = 0;
				var_191_bool = 1;
				var_192_bool = 0;
				var_192_bool = 1;
				var_193_bool = 0;
				var_193_bool = 1;
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_object;
				func_5114(var_194_bool, var_195_object);
				if(var_194_bool != 1) {
					var_196_bool = 0; var_197_object = Obj();
					var_197_object = var_1_object;
					func_5124(var_196_bool, var_197_object);
					if(var_196_bool != 1) {
						var_193_bool = 0;
					}
				}
				if(var_193_bool != 1) {
					var_198_bool = 0; var_199_object = Obj();
					var_199_object = var_1_object;
					func_5134(var_198_bool, var_199_object);
					if(var_198_bool != 1) {
						var_192_bool = 0;
					}
				}
				if(var_192_bool != 1) {
					var_200_bool = 0; var_201_object = Obj();
					var_201_object = var_1_object;
					func_5144(var_200_bool, var_201_object);
					if(var_200_bool != 1) {
						var_191_bool = 0;
					}
				}
				if(var_191_bool != 0) {
					@@@var_0_object:AddReply((int)543064, (int)-1, (int)45519);
				}
				return 0;
			}
			var_205_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538207);
			@@@var_0_object:ClearReplies();
			var_207_bool = 0; var_208_object = Obj();
			var_208_object = var_1_object;
			func_4988(var_208_object);
			if(var_207_bool != 0) {
				@@@var_0_object:AddReply((int)538208, (int)-1, (int)40085);
			}
			var_216_bool = 0; var_217_object = Obj();
			var_217_object = var_1_object;
			func_5000(var_217_object);
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)538209, (int)-1, (int)40086);
			}
			var_225_bool = 0;
			var_225_bool = 0;
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_4988(var_227_object);
			if(var_226_bool != 0) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_5044(var_228_bool, var_229_object);
				if(var_228_bool != 0) {
					var_225_bool = 1;
				}
			}
			if(var_225_bool != 0) {
				@@@var_0_object:AddReply((int)538211, (int)40089, (int)40088);
			}
			var_233_bool = 0;
			var_233_bool = 0;
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_4988(var_235_object);
			if(var_234_bool != 0) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_5044(var_236_bool, var_237_object);
				if(var_236_bool != 0) {
					var_233_bool = 1;
				}
			}
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)538222, (int)40100, (int)40099);
			}
			var_241_bool = 0;
			var_241_bool = 0;
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_4988(var_243_object);
			if(var_242_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_5054(var_244_bool, var_245_object);
				if(var_244_bool != 0) {
					var_241_bool = 1;
				}
			}
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)538235, (int)40114, (int)40113);
			}
			var_249_bool = 0;
			var_249_bool = 0;
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_4988(var_251_object);
			if(var_250_bool != 0) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_5064(var_252_bool, var_253_object);
				if(var_252_bool != 0) {
					var_249_bool = 1;
				}
			}
			if(var_249_bool != 0) {
				@@@var_0_object:AddReply((int)538253, (int)40135, (int)40134);
			}
			var_261_bool = 0;
			var_261_bool = 0;
			var_262_bool = 0; var_263_object = Obj();
			var_263_object = var_1_object;
			func_4988(var_263_object);
			if(var_262_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_5074(var_264_bool, var_265_object);
				if(var_264_bool != 0) {
					var_261_bool = 1;
				}
			}
			if(var_261_bool != 0) {
				@@@var_0_object:AddReply((int)538272, (int)40155, (int)40154);
			}
			var_273_bool = 0; var_274_object = Obj();
			var_274_object = var_1_object;
			func_5084(var_273_bool, var_274_object);
			if(var_273_bool != 0) {
				@@@var_0_object:AddReply((int)538291, (int)40174, (int)40173);
			}
			var_282_bool = 0;
			var_282_bool = 0;
			var_283_bool = 0; var_284_object = Obj();
			var_284_object = var_1_object;
			func_4988(var_284_object);
			if(var_283_bool != 0) {
				var_285_bool = 0; var_286_object = Obj();
				var_286_object = var_1_object;
				func_5094(var_285_bool, var_286_object);
				if(var_285_bool != 0) {
					var_282_bool = 1;
				}
			}
			if(var_282_bool != 0) {
				@@@var_0_object:AddReply((int)538308, (int)40192, (int)40191);
			}
			var_290_bool = 0; var_291_object = Obj();
			var_291_object = var_1_object;
			func_5104(var_290_bool, var_291_object);
			if(var_290_bool != 0) {
				@@@var_0_object:AddReply((int)538322, (int)40206, (int)40205);
			}
			var_295_bool = 0; var_296_object = Obj();
			var_296_object = var_1_object;
			func_5034(var_295_bool, var_296_object);
			if(var_295_bool != 0) {
				@@@var_0_object:AddReply((int)538332, (int)40216, (int)40215);
			}
			var_302_bool = 0;
			var_302_bool = 0;
			var_303_bool = 0; var_304_object = Obj();
			var_304_object = var_1_object;
			func_4988(var_304_object);
			if(var_303_bool != 0) {
				var_305_bool = 0; var_306_object = Obj();
				var_306_object = var_1_object;
				func_5114(var_305_bool, var_306_object);
				if(var_305_bool != 0) {
					var_302_bool = 1;
				}
			}
			if(var_302_bool != 0) {
				@@@var_0_object:AddReply((int)538347, (int)40233, (int)40232);
			}
			var_310_bool = 0; var_311_object = Obj();
			var_311_object = var_1_object;
			func_5124(var_310_bool, var_311_object);
			if(var_310_bool != 0) {
				@@@var_0_object:AddReply((int)538364, (int)40250, (int)40249);
			}
			var_315_bool = 0;
			var_315_bool = 0;
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_object;
			func_4988(var_317_object);
			if(var_316_bool != 0) {
				var_318_bool = 0; var_319_object = Obj();
				var_319_object = var_1_object;
				func_5134(var_318_bool, var_319_object);
				if(var_318_bool != 0) {
					var_315_bool = 1;
				}
			}
			if(var_315_bool != 0) {
				@@@var_0_object:AddReply((int)538375, (int)40262, (int)40261);
			}
			var_323_bool = 0;
			var_323_bool = 0;
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_4988(var_325_object);
			if(var_324_bool != 0) {
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_5134(var_326_bool, var_327_object);
				if(var_326_bool != 0) {
					var_323_bool = 1;
				}
			}
			if(var_323_bool != 0) {
				@@@var_0_object:AddReply((int)538385, (int)40272, (int)40271);
			}
			@@@var_0_object:AddReply((int)538396, (int)-1, (int)40282);
			return 0;
		}
		var_335_bool = var_17_object == (int)40272;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538386);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538387, (int)40274, (int)40273);
			@@@var_0_object:AddReply((int)538395, (int)-1, (int)40281);
			return 0;
		}
		var_345_bool = var_17_object == (int)40274;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538389, (int)40276, (int)40275);
			@@@var_0_object:AddReply((int)538392, (int)40279, (int)40278);
			return 0;
		}
		var_355_bool = var_17_object == (int)40279;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538394, (int)-1, (int)40280);
			return 0;
		}
		var_362_bool = var_17_object == (int)40276;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538390);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538391, (int)-1, (int)40277);
			return 0;
		}
		var_369_bool = var_17_object == (int)40262;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538377, (int)40264, (int)40263);
			@@@var_0_object:AddReply((int)538384, (int)-1, (int)40270);
			return 0;
		}
		var_379_bool = var_17_object == (int)40264;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538379, (int)40266, (int)40265);
			@@@var_0_object:AddReply((int)538383, (int)-1, (int)40269);
			return 0;
		}
		var_389_bool = var_17_object == (int)40266;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538381, (int)-1, (int)40267);
			@@@var_0_object:AddReply((int)538382, (int)-1, (int)40268);
			return 0;
		}
		var_399_bool = var_17_object == (int)40250;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538366, (int)40252, (int)40251);
			@@@var_0_object:AddReply((int)538370, (int)40256, (int)40255);
			@@@var_0_object:AddReply((int)538374, (int)-1, (int)40260);
			return 0;
		}
		var_412_bool = var_17_object == (int)40256;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538372, (int)40252, (int)40257);
			@@@var_0_object:AddReply((int)538373, (int)-1, (int)40259);
			return 0;
		}
		var_422_bool = var_17_object == (int)40252;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538367);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538368, (int)-1, (int)40253);
			@@@var_0_object:AddReply((int)538369, (int)-1, (int)40254);
			return 0;
		}
		var_432_bool = var_17_object == (int)40233;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538349, (int)40235, (int)40234);
			@@@var_0_object:AddReply((int)538363, (int)-1, (int)40248);
			return 0;
		}
		var_442_bool = var_17_object == (int)40235;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538351, (int)40237, (int)40236);
			@@@var_0_object:AddReply((int)538362, (int)-1, (int)40247);
			return 0;
		}
		var_452_bool = var_17_object == (int)40237;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538352);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538353, (int)40239, (int)40238);
			@@@var_0_object:AddReply((int)538359, (int)40245, (int)40244);
			return 0;
		}
		var_462_bool = var_17_object == (int)40245;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538361, (int)-1, (int)40246);
			return 0;
		}
		var_469_bool = var_17_object == (int)40239;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538355, (int)-1, (int)40240);
			@@@var_0_object:AddReply((int)538356, (int)40242, (int)40241);
			return 0;
		}
		var_479_bool = var_17_object == (int)40242;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538358, (int)-1, (int)40243);
			return 0;
		}
		var_486_bool = var_17_object == (int)40216;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538334, (int)40218, (int)40217);
			@@@var_0_object:AddReply((int)538346, (int)-1, (int)40231);
			return 0;
		}
		var_496_bool = var_17_object == (int)40218;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538336, (int)40220, (int)40219);
			@@@var_0_object:AddReply((int)538343, (int)40228, (int)40227);
			return 0;
		}
		var_506_bool = var_17_object == (int)40228;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538344);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538345, (int)40220, (int)40229);
			return 0;
		}
		var_513_bool = var_17_object == (int)40220;
		if(var_513_bool != 0) {
			var_514_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538337);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538338, (int)40222, (int)40221);
			@@@var_0_object:AddReply((int)538342, (int)40222, (int)40225);
			return 0;
		}
		var_523_bool = var_17_object == (int)40222;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538339);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538340, (int)-1, (int)40223);
			@@@var_0_object:AddReply((int)538341, (int)-1, (int)40224);
			return 0;
		}
		var_533_bool = var_17_object == (int)40206;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538324, (int)40208, (int)40207);
			@@@var_0_object:AddReply((int)538331, (int)-1, (int)40214);
			return 0;
		}
		var_543_bool = var_17_object == (int)40208;
		if(var_543_bool != 0) {
			var_544_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538326, (int)40210, (int)40209);
			@@@var_0_object:AddReply((int)538330, (int)-1, (int)40213);
			return 0;
		}
		var_553_bool = var_17_object == (int)40210;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538328, (int)-1, (int)40211);
			@@@var_0_object:AddReply((int)538329, (int)-1, (int)40212);
			return 0;
		}
		var_563_bool = var_17_object == (int)40192;
		if(var_563_bool != 0) {
			var_564_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538310, (int)40194, (int)40193);
			return 0;
		}
		var_570_bool = var_17_object == (int)40194;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538312, (int)40196, (int)40195);
			@@@var_0_object:AddReply((int)538316, (int)40200, (int)40199);
			return 0;
		}
		var_580_bool = var_17_object == (int)40200;
		if(var_580_bool != 0) {
			var_581_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538318, (int)40202, (int)40201);
			return 0;
		}
		var_587_bool = var_17_object == (int)40202;
		if(var_587_bool != 0) {
			var_588_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538320, (int)-1, (int)40203);
			@@@var_0_object:AddReply((int)538321, (int)-1, (int)40204);
			return 0;
		}
		var_597_bool = var_17_object == (int)40196;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538314, (int)-1, (int)40197);
			@@@var_0_object:AddReply((int)538315, (int)-1, (int)40198);
			return 0;
		}
		var_607_bool = var_17_object == (int)40174;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538292);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538293, (int)40176, (int)40175);
			@@@var_0_object:AddReply((int)538302, (int)40186, (int)40185);
			return 0;
		}
		var_617_bool = var_17_object == (int)40186;
		if(var_617_bool != 0) {
			var_618_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538304, (int)40188, (int)40187);
			return 0;
		}
		var_624_bool = var_17_object == (int)40188;
		if(var_624_bool != 0) {
			var_625_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538305);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538306, (int)-1, (int)40189);
			@@@var_0_object:AddReply((int)538307, (int)-1, (int)40190);
			return 0;
		}
		var_634_bool = var_17_object == (int)40176;
		if(var_634_bool != 0) {
			var_635_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538295, (int)40178, (int)40177);
			@@@var_0_object:AddReply((int)538299, (int)40182, (int)40181);
			return 0;
		}
		var_644_bool = var_17_object == (int)40182;
		if(var_644_bool != 0) {
			var_645_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538301, (int)40178, (int)40183);
			return 0;
		}
		var_651_bool = var_17_object == (int)40178;
		if(var_651_bool != 0) {
			var_652_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538297, (int)-1, (int)40179);
			var_657_bool = 0; var_658_object = Obj();
			var_658_object = var_1_object;
			func_4988(var_658_object);
			if(var_657_bool != 0) {
				@@@var_0_object:AddReply((int)538298, (int)-1, (int)40180);
			}
			return 0;
		}
		var_663_bool = var_17_object == (int)40155;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538273);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538274, (int)40157, (int)40156);
			@@@var_0_object:AddReply((int)538289, (int)-1, (int)40171);
			@@@var_0_object:AddReply((int)538290, (int)-1, (int)40172);
			return 0;
		}
		var_676_bool = var_17_object == (int)40157;
		if(var_676_bool != 0) {
			var_677_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538276, (int)40159, (int)40158);
			@@@var_0_object:AddReply((int)538288, (int)-1, (int)40170);
			return 0;
		}
		var_686_bool = var_17_object == (int)40159;
		if(var_686_bool != 0) {
			var_687_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538278, (int)40161, (int)40160);
			return 0;
		}
		var_693_bool = var_17_object == (int)40161;
		if(var_693_bool != 0) {
			var_694_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538279);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538280, (int)40163, (int)40162);
			@@@var_0_object:AddReply((int)538284, (int)40167, (int)40166);
			return 0;
		}
		var_703_bool = var_17_object == (int)40167;
		if(var_703_bool != 0) {
			var_704_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538286, (int)-1, (int)40168);
			@@@var_0_object:AddReply((int)538287, (int)-1, (int)40169);
			return 0;
		}
		var_713_bool = var_17_object == (int)40163;
		if(var_713_bool != 0) {
			var_714_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538282, (int)-1, (int)40164);
			@@@var_0_object:AddReply((int)538283, (int)-1, (int)40165);
			return 0;
		}
		var_723_bool = var_17_object == (int)40135;
		if(var_723_bool != 0) {
			var_724_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538254);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538255, (int)40137, (int)40136);
			@@@var_0_object:AddReply((int)538271, (int)-1, (int)40153);
			return 0;
		}
		var_733_bool = var_17_object == (int)40137;
		if(var_733_bool != 0) {
			var_734_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538256);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538257, (int)40139, (int)40138);
			@@@var_0_object:AddReply((int)538269, (int)40139, (int)40150);
			@@@var_0_object:AddReply((int)538270, (int)-1, (int)40152);
			return 0;
		}
		var_746_bool = var_17_object == (int)40139;
		if(var_746_bool != 0) {
			var_747_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538259, (int)40141, (int)40140);
			return 0;
		}
		var_753_bool = var_17_object == (int)40141;
		if(var_753_bool != 0) {
			var_754_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538261, (int)40143, (int)40142);
			@@@var_0_object:AddReply((int)538265, (int)40147, (int)40146);
			return 0;
		}
		var_763_bool = var_17_object == (int)40147;
		if(var_763_bool != 0) {
			var_764_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538267, (int)-1, (int)40148);
			@@@var_0_object:AddReply((int)538268, (int)-1, (int)40149);
			return 0;
		}
		var_773_bool = var_17_object == (int)40143;
		if(var_773_bool != 0) {
			var_774_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538263, (int)-1, (int)40144);
			@@@var_0_object:AddReply((int)538264, (int)-1, (int)40145);
			return 0;
		}
		var_783_bool = var_17_object == (int)40114;
		if(var_783_bool != 0) {
			var_784_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538236);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538237, (int)40116, (int)40115);
			@@@var_0_object:AddReply((int)538252, (int)-1, (int)40133);
			return 0;
		}
		var_793_bool = var_17_object == (int)40116;
		if(var_793_bool != 0) {
			var_794_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538239, (int)40118, (int)40117);
			@@@var_0_object:AddReply((int)538251, (int)40120, (int)40131);
			return 0;
		}
		var_803_bool = var_17_object == (int)40118;
		if(var_803_bool != 0) {
			var_804_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538240);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538241, (int)40120, (int)40119);
			@@@var_0_object:AddReply((int)538250, (int)40120, (int)40129);
			return 0;
		}
		var_813_bool = var_17_object == (int)40120;
		if(var_813_bool != 0) {
			var_814_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538242);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538243, (int)40122, (int)40121);
			@@@var_0_object:AddReply((int)538249, (int)40124, (int)40127);
			return 0;
		}
		var_823_bool = var_17_object == (int)40122;
		if(var_823_bool != 0) {
			var_824_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538244);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538245, (int)40124, (int)40123);
			return 0;
		}
		var_830_bool = var_17_object == (int)40124;
		if(var_830_bool != 0) {
			var_831_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538247, (int)-1, (int)40125);
			@@@var_0_object:AddReply((int)538248, (int)-1, (int)40126);
			return 0;
		}
		var_840_bool = var_17_object == (int)40100;
		if(var_840_bool != 0) {
			var_841_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538224, (int)40102, (int)40101);
			@@@var_0_object:AddReply((int)538234, (int)-1, (int)40112);
			return 0;
		}
		var_850_bool = var_17_object == (int)40102;
		if(var_850_bool != 0) {
			var_851_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538226, (int)40104, (int)40103);
			@@@var_0_object:AddReply((int)538230, (int)40108, (int)40107);
			return 0;
		}
		var_860_bool = var_17_object == (int)40108;
		if(var_860_bool != 0) {
			var_861_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538232, (int)40104, (int)40109);
			@@@var_0_object:AddReply((int)538233, (int)-1, (int)40111);
			return 0;
		}
		var_870_bool = var_17_object == (int)40104;
		if(var_870_bool != 0) {
			var_871_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538228, (int)-1, (int)40105);
			@@@var_0_object:AddReply((int)538229, (int)-1, (int)40106);
			return 0;
		}
		var_880_bool = var_17_object == (int)40089;
		if(var_880_bool != 0) {
			var_881_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538213, (int)40091, (int)40090);
			return 0;
		}
		var_887_bool = var_17_object == (int)40091;
		if(var_887_bool != 0) {
			var_888_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538215, (int)40093, (int)40092);
			@@@var_0_object:AddReply((int)538221, (int)-1, (int)40098);
			return 0;
		}
		var_897_bool = var_17_object == (int)40093;
		if(var_897_bool != 0) {
			var_898_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538217, (int)40095, (int)40094);
			return 0;
		}
		var_904_bool = var_17_object == (int)40095;
		if(var_904_bool != 0) {
			var_905_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538219, (int)-1, (int)40096);
			@@@var_0_object:AddReply((int)538220, (int)-1, (int)40097);
			return 0;
		}
		var_914_bool = var_17_object == (int)45520;
		if(var_914_bool != 0) {
			var_915_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543066, (int)-1, (int)45521);
			@@@var_0_object:AddReply((int)543067, (int)45524, (int)45522);
			@@@var_0_object:AddReply((int)543068, (int)-1, (int)45523);
			return 0;
		}
		var_927_bool = var_17_object == (int)45524;
		if(var_927_bool != 0) {
			var_928_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543070, (int)-1, (int)45525);
			@@@var_0_object:AddReply((int)543071, (int)-1, (int)45526);
			return 0;
		}
		var_937_bool = var_17_object == (int)45513;
		if(var_937_bool != 0) {
			var_938_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543059, (int)-1, (int)45514);
			@@@var_0_object:AddReply((int)543060, (int)-1, (int)45515);
			@@@var_0_object:AddReply((int)543061, (int)-1, (int)45516);
			return 0;
		}
		var_950_bool = var_17_object == (int)45498;
		if(var_950_bool != 0) {
			var_951_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543047, (int)45506, (int)45499);
			@@@var_0_object:AddReply((int)543050, (int)45503, (int)45502);
			@@@var_0_object:AddReply((int)543048, (int)-1, (int)45500);
			@@@var_0_object:AddReply((int)543049, (int)-1, (int)45501);
			return 0;
		}
		var_966_bool = var_17_object == (int)45503;
		if(var_966_bool != 0) {
			var_967_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543054, (int)-1, (int)45509);
			return 0;
		}
		var_973_bool = var_17_object == (int)45506;
		if(var_973_bool != 0) {
			var_974_string = "";
			func_601(var_18_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543053, (int)-1, (int)45507);
			return 0;
		}
		var_3_string = true;
		var_979_bool = 0;
		func_6205(var_979_bool);
		if(var_979_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x270";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5997(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_24_object = Obj();
		var_17_bool = var_24_object;
		func_6000(var_24_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_6006();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5997(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_3042(var_19_int);
		}
		var_27_object = Obj();
		var_17_bool = var_27_object;
		func_6000(var_27_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_object = Obj();
	var_17_bool = var_20_object;
	func_5729(var_20_object);
	var_29_int = 0; var_30_object = Obj();
	var_17_bool = var_30_object;
	func_5811(var_29_int, var_30_object);
	var_29_int = var_19_int;
	var_66_bool = var_19_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_19_int > (int)1;
		if(var_68_bool != 0) {
			func_3042(var_19_int);
		}
		var_70_object = Obj();
		var_17_bool = var_70_object;
		func_5821(var_70_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0;
	var_17_bool = var_23_object;
	var_18_object = var_24_object;
	var_19_bool = var_25_bool;
	func_6254(var_22_bool, var_23_object, var_24_object, var_25_bool);
	if(var_22_bool != 0) {
		var_84_int = 0; var_85_object = Obj(); var_86_bool = 0;
		var_17_bool = var_85_object;
		var_19_bool = var_86_bool;
		func_5904(var_85_object, var_86_bool);
		var_84_int = var_21_int;
		var_118_bool = var_21_int > (int)0;
		if(var_118_bool != 0) {
			var_120_bool = var_21_int > (int)1;
			if(var_120_bool != 0) {
				func_3042(var_21_int);
			}
			var_122_object = Obj();
			var_17_bool = var_122_object;
			func_5911(var_122_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5946(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_3042(var_19_int);
		}
		var_17_bool = Obj();
		func_5949();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_17_object = var_22_object;
	var_18_bool = var_23_string;
	func_5643(var_21_bool, var_22_object, var_23_string);
	if(var_21_bool != 0) {
		func_3042(var_20_int);
		var_37_object = Obj(); var_38_string = "";
		var_17_object = var_37_object;
		var_18_bool = var_38_string;
		func_5675(var_37_object, var_38_string);
	} else {
		var_48_int = 0; var_49_string = ""; var_50_object = Obj();
		var_18_bool = var_49_string;
		var_17_object = var_50_object;
		func_5951(var_48_int, var_49_string, var_50_object);
		var_48_int = var_20_int;
		var_93_bool = var_20_int > (int)0;
		if(var_93_bool == 0) goto Label_2983;
		var_95_bool = var_20_int > (int)1;
		if(var_95_bool != 0) {
			func_3042(var_20_int);
		}
		var_96_string = ""; var_97_object = Obj();
		var_18_bool = var_96_string;
		var_17_object = var_97_object;
		func_5963(var_96_string, var_97_object);
	}
Label_2983:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = "";
	var_17_bool = var_19_string;
	func_5742(var_18_bool, var_19_string);
	if(var_18_bool != 0) {
		func_3042(var_17_bool);
		var_28_string = "";
		var_17_bool = var_28_string;
		func_5758(var_28_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_bool = var_19_object;
	func_5700(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_3042(var_17_bool);
		var_31_object = Obj();
		var_17_bool = var_31_object;
		func_5723(var_31_object);
	} else {
		var_33_object = Obj();
		var_17_bool = var_33_object;
		func_3067(var_17_bool, var_33_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = Obj();
	var_17_bool = var_18_object;
	func_3067(var_17_bool, var_18_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_19_bool = var_17_bool != (int)110;
	if(var_19_bool != 0) {
		return 0;
	}
	var_2_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3042(var_16_bool);
	func_6006();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3042(var_17_bool);
	var_17_bool = Obj();
	func_5619();
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	RequestClearPath(var_17_bool);
	return 0;
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	Stop();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5997(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_3445();
		}
		var_26_object = Obj();
		var_17_bool = var_26_object;
		func_6000(var_26_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_object = Obj();
	var_17_bool = var_20_object;
	func_5729(var_20_object);
	var_29_int = 0; var_30_object = Obj();
	var_17_bool = var_30_object;
	func_5811(var_29_int, var_30_object);
	var_29_int = var_19_int;
	var_66_bool = var_19_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_19_int > (int)1;
		if(var_68_bool != 0) {
			func_3445();
		}
		var_69_object = Obj();
		var_17_bool = var_69_object;
		func_5821(var_69_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0;
	var_17_bool = var_23_object;
	var_18_object = var_24_object;
	var_19_bool = var_25_bool;
	func_6254(var_22_bool, var_23_object, var_24_object, var_25_bool);
	if(var_22_bool != 0) {
		var_84_int = 0; var_85_object = Obj(); var_86_bool = 0;
		var_17_bool = var_85_object;
		var_19_bool = var_86_bool;
		func_5904(var_85_object, var_86_bool);
		var_84_int = var_21_int;
		var_118_bool = var_21_int > (int)0;
		if(var_118_bool != 0) {
			var_120_bool = var_21_int > (int)1;
			if(var_120_bool != 0) {
				func_3445();
			}
			var_121_object = Obj();
			var_17_bool = var_121_object;
			func_5911(var_121_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5946(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_3445();
		}
		var_17_bool = Obj();
		func_5949();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_17_object = var_22_object;
	var_18_bool = var_23_string;
	func_5643(var_21_bool, var_22_object, var_23_string);
	if(var_21_bool != 0) {
		func_3445();
		var_36_object = Obj(); var_37_string = "";
		var_17_object = var_36_object;
		var_18_bool = var_37_string;
		func_5675(var_36_object, var_37_string);
	} else {
		var_47_int = 0; var_48_string = ""; var_49_object = Obj();
		var_18_bool = var_48_string;
		var_17_object = var_49_object;
		func_5951(var_47_int, var_48_string, var_49_object);
		var_47_int = var_20_int;
		var_92_bool = var_20_int > (int)0;
		if(var_92_bool == 0) goto Label_3328;
		var_94_bool = var_20_int > (int)1;
		if(var_94_bool != 0) {
			func_3445();
		}
		var_95_string = ""; var_96_object = Obj();
		var_18_bool = var_95_string;
		var_17_object = var_96_object;
		func_5963(var_95_string, var_96_object);
	}
Label_3328:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = "";
	var_17_bool = var_19_string;
	func_5742(var_18_bool, var_19_string);
	if(var_18_bool != 0) {
		func_3445();
		var_27_string = "";
		var_17_bool = var_27_string;
		func_5758(var_27_string);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3445();
	func_6006();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_bool = var_19_object;
	func_5700(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_3445();
		var_30_object = Obj();
		var_17_bool = var_30_object;
		func_5723(var_30_object);
	}
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_4196(var_16_bool);
	func_6006();
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_19_bool = var_17_int == (int)1;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_20_object = var_1_object;
		func_4963(var_20_object);
	} else {
		var_25_int = 0;
		var_17_int = var_25_int;
		func_4340(var_16_bool, var_17_int, var_25_int);
	}
	return 0;
	
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_object == var_17_object;
	if(var_19_bool != 0) {
		var_20_bool = var_2_object == 0; //@nz
		if(var_20_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_object = true;
		var_21_object = Obj();
		var_17_object = var_21_object;
		func_4833(var_21_object);
	}
	return 0;
}


task_6_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_object == var_17_object;
	if(var_19_bool != 0) {
		var_20_object = var_2_object;
		if(var_20_object != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_6_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object);
	return 0;
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_4196(var_17_object);
	var_17_object = Obj();
	func_5619();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0;
	var_22_bool = var_18_string == "health";
	if(var_22_bool != 0) {
		GetProperty("health", var_20_float);
		var_25_bool = var_20_float <= (int)0;
		if(var_25_bool != 0) {
			SignalDeath(var_17_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_5598(var_18_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_4617(var_21_object, var_22_int, var_23_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	var_17_object = var_23_object;
	var_18_int = var_24_int;
	var_19_float = var_25_float;
	var_21_cvector = var_26_cvector;
	var_22_cvector = var_27_cvector;
	func_4685(var_25_float, var_26_cvector, var_27_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	SensePlayerOnly((bool)1);
	func_6207();
	func_2846();
	
Label_2840:
	var_2_object = false;
	func_3107(var_15_object, var_16_bool);
	goto Label_2840;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_0_object = var_53_object;
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0;
	var_53_object = var_64_object;
	func_4715(var_63_bool, var_64_object, (float)70.0);
	var_110_bool = var_63_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	CreateDialog(var_59_object);
	var_111_int = 0;
	func_6199(var_111_int);
	@@var_59_object:SetNPCName(var_111_int);
	var_112_int = 0;
	func_6197(var_112_int);
	@@var_59_object:SetNPCDescription(var_112_int);
	var_113_string = "";
	func_6201(var_113_string);
	@@var_59_object:SetPhoto(var_113_string);
	var_114_string = "";
	func_6203(var_114_string);
	@@var_59_object:SetPhoto2(var_114_string);
	var_115_int = 0;
	func_5241(var_115_int);
	@@var_59_object:SetPlayerName(var_115_int);
	IsOverrideActive(var_60_bool);
	var_123_bool = var_60_bool;
	if(var_123_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	DoDialog(var_59_object);
	var_124_object = Obj(); var_125_object = Obj();
	var_53_object = var_124_object;
	var_59_object = var_125_object;
	TaskCall(1);
	func_74(var_126_object, var_127_object, var_128_string, var_129_bool, var_124_object, var_125_object);
	TaskReturn();
	@@var_59_object:IsDialogEnd(var_62_bool);
	
Label_56:
	var_439_bool = var_62_bool == 0; //@nz
	if(var_439_bool != 0) {
		sync();
		@@var_59_object:IsDialogEnd(var_62_bool);
		goto Label_56;
	}
	var_53_object = Obj();
	func_4784();
	StopDialog(var_59_object);
	@@var_59_object:GetReturnValue((int)-1);
	var_61_int = var_52_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5124(var_196_bool, var_197_object)
{
	var_198_bool = 0; var_199_object = Obj();
	var_197_object = var_199_object;
	func_5220(var_199_object);
	if(var_198_bool != 0) {
		var_196_bool = 1;
		return 0;
	}
	var_196_bool = 0;
	return 0;
}


func_4617(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_object = var_21_object;
	if(var_44_object != 0) {
		var_46_bool = var_22_int != (int)4;
		if(var_46_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_48_bool = var_22_int != (int)5;
		if(var_48_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
		var_51_cvector = CVector(0,0,0); var_52_object = Obj();
		var_21_object = var_52_object;
		func_4403(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_4898(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		CreateVectorVector(var_34_object);
		var_35_int = 1;

	Label_4646:
		var_63_int = "hit" + var_35_int;
		GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector);
		var_64_bool = var_36_bool == 0; //@nz
		if(var_64_bool != 0) {
		} else {
			var_112_int = var_38_cvector | var_33_cvector;
			var_114_bool = var_112_int >= (float)0.7071067690849304;
			if(var_114_bool != 0) {
				@@var_34_object:add(var_37_cvector);
			}
			var_35_int = var_35_int + (int)1;
			goto Label_4646;
		}
		@@var_34_object:size(var_39_int);
		var_65_int = var_39_int;
		if(var_65_int != 0) {
			irand(var_40_int, var_39_int);
			@@var_34_object:get(var_41_cvector, var_40_int);
			var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
			var_21_object = var_66_object;
			var_22_int = var_67_int;
			var_23_float = var_68_float;
			var_41_cvector = var_69_cvector;
			var_70_cvector = -var_33_cvector;
			func_4685(var_68_float, var_69_cvector, var_70_cvector);
			return 18;
		}
		var_34_object = 0;
	}
	var_111_object = Obj();
	var_21_object = var_111_object;
	func_4573(var_111_object);
	return 18;
	
}


func_4106(var_0_object)
{
	var_172_object = Obj();
	var_172_object = var_0_object;
	func_4963(var_172_object);
	return 0;
}


func_5643(var_21_bool, var_22_object, var_23_string)
{
	var_25_bool = var_23_string == "unholster";
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_22_object = var_27_object;
		func_6007(var_27_object);
		var_26_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0x1629";
	}
	var_29_bool = var_23_string == "player_shot";
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_22_object = var_31_object;
		func_6012(var_31_object);
		var_30_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0x1629";
	}
	var_33_bool = var_23_string == "battle";
	if(var_33_bool != 0) {
		var_34_bool = 0; var_35_object = Obj();
		var_22_object = var_35_object;
		func_6017(var_35_object);
		var_34_bool = var_21_bool;
		return 0;
	}
	var_21_bool = 0;
	return 0;
}


func_5134(var_202_bool, var_203_object)
{
	var_204_bool = 0; var_205_object = Obj();
	var_203_object = var_205_object;
	func_5227(var_205_object);
	if(var_204_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_4111(var_513_int)
{
	var_513_int = 0;
	return 0;
}


func_4113()
{
	var_305_string = "";
	func_4851("attack_stay");
	return 0;
}


func_4118()
{
	return 0;
}


func_5144(var_208_bool, var_209_object)
{
	var_210_bool = 0; var_211_object = Obj();
	var_209_object = var_211_object;
	func_5234(var_211_object);
	if(var_210_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_4120(var_538_bool)
{
	var_538_bool = 1;
	return 0;
}


func_4122(var_430_int)
{
	var_430_int = 1;
	return 0;
}


func_4124(var_425_float)
{
	var_425_float = 0.5;
	return 0;
}


func_6174(var_516_bool, var_517_object)
{
	var_518_int = 0; var_519_bool = 0; var_520_int = 0; var_521_bool = 0;
	@@var_517_object:GetItemID(var_520_int);
	HasInvItemProperty(var_521_bool, var_520_int, "Weapon");
	var_521_bool = var_516_bool;
	return 4;
}


func_5154(var_180_bool)
{
	var_182_int = 0;
	func_4954(var_182_int);
	var_180_bool = var_182_int <= (int)6;
	return 0;
}


func_3107(var_0_object, var_1_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_29_float, (float)0.5);
	Sleep(var_29_float);
	
Label_3115:
	var_36_bool = var_0_object == 0; //@nz
	if(var_36_bool != 0) {
		var_37_bool = var_1_object == 0; //@nz
		if(var_37_bool != 0) {

		Label_3119:
			GetPosition(var_31_cvector);
			var_38_float = 0;
			func_3166(var_38_float);
			GetRandomPFPointInCircle(var_30_cvector, var_31_cvector, var_38_float, var_32_bool);
			var_41_bool = var_32_bool;
			if(var_41_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_3119;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_3135;
	
Label_3135:
	var_42_object = Obj(); var_43_cvector = CVector(0,0,0);
	var_30_cvector = var_43_cvector;
	func_3194(var_42_object, var_43_cvector);
	var_42_object = var_33_object;
	var_46_bool = var_33_object != 0; //@nn
	if(var_46_bool != 0) {
		RotatePath(var_33_object, var_34_bool);
		var_47_bool = var_34_bool;
		if(var_47_bool != 0) {
			var_48_bool = 0;
			func_3192(var_48_bool);
			FollowPath(var_33_object, var_48_bool, var_34_bool);
			var_33_object = 0;
			var_49_bool = var_34_bool;
			if(var_49_bool != 0) {
				TaskCall(4);
				func_3364();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_33_object = 0;
	goto Label_3115;
	
}


func_4133(var_2_object, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool)
{
	var_188_bool = 0; var_189_bool = 0; var_190_bool = 0; var_191_bool = 0;
	var_192_object = Obj();
	var_180_object = var_192_object;
	func_4963(var_192_object);
	SetTimer((int)1, (int)5);
	CanSee(var_190_bool, var_180_object);
	var_195_bool = var_190_bool;
	if(var_195_bool != 0) {
		var_2_object = true;
		var_196_object = Obj();
		var_180_object = var_196_object;
		func_4833(var_196_object);
	} else {
		var_2_object = false;
	}
	var_203_bool = 0; var_204_object = Obj();
	var_180_object = var_204_object;
	func_4418(var_203_bool, var_204_object);
	if(var_203_bool != 0) {
		var_207_object = Obj();
		func_4892(var_207_object);
		SendPlayerEnemy(var_180_object, var_207_object);
	}
	var_208_bool = 0; var_209_object = Obj(); var_210_float = 0; var_211_float = 0; var_212_bool = 0; var_213_bool = 0;
	var_180_object = var_209_object;
	var_181_float = var_210_float;
	var_182_float = var_211_float;
	var_183_bool = var_212_bool;
	var_184_bool = var_213_bool;
	func_4238(var_190_bool, var_191_bool, var_208_bool, var_209_object, var_210_float, var_211_float, var_212_bool, var_213_bool);
	var_208_bool = var_191_bool;
	var_259_object = var_2_object;
	if(var_259_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_191_bool = var_179_bool;
	return 4;
	
}


func_6182(var_51_object, var_54_object)
{
	var_52_int = 0; var_53_object = Obj();
	var_51_object = var_53_object;
	TaskCall(0);
	func_0(var_54_object, var_52_int, var_53_object);
	TaskReturn();
	var_449_bool = var_54_object == (int)100;
	if(var_449_bool != 0) {
		var_450_object = Obj();
		var_51_object = var_450_object;
		func_6027(var_450_object);
	}
	return 0;
}


func_5161(var_402_bool)
{
	var_402_bool = 0;
	return 0;
}


func_5675(var_36_object, var_37_string)
{
	var_39_bool = var_37_string == "unholster";
	if(var_39_bool != 0) {
		var_36_object = Obj();
		func_6010();
	} else {
		var_42_bool = var_37_string == "player_shot";
		if(var_42_bool != 0) {
			var_36_object = Obj();
			func_6015();
			goto Label_5699;
		}
		var_45_bool = var_37_string == "battle";
		if(var_45_bool == 0) goto Label_5699;
		var_36_object = Obj();
		func_6020();
	}
Label_5699:
	return 0;
	
}


func_5164(var_161_bool)
{
	var_163_int = 0;
	func_4954(var_163_int);
	var_161_bool = var_163_int == (int)1;
	return 0;
}


func_5171(var_173_bool)
{
	var_175_int = 0;
	func_4954(var_175_int);
	var_173_bool = var_175_int == (int)2;
	return 0;
}


func_6197(var_112_int)
{
	var_112_int = 515568;
	return 0;
}


func_6199(var_111_int)
{
	var_111_int = 503353;
	return 0;
}


func_6201(var_113_string)
{
	var_113_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_5178(var_359_bool)
{
	var_361_int = 0;
	func_4954(var_361_int);
	var_359_bool = var_361_int == (int)3;
	return 0;
}


func_6203(var_114_string)
{
	var_114_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_6205(var_106_bool)
{
	var_106_bool = 0;
	return 0;
}


func_6207()
{
	var_18_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_5185(var_371_bool)
{
	var_373_int = 0;
	func_4954(var_373_int);
	var_371_bool = var_373_int == (int)5;
	return 0;
}


func_6211(var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	var_30_bool = GlobalVars[0];
	if(var_30_bool != 0) {
		IsOverrideActive(var_29_bool);
		var_31_bool = var_29_bool == 0; //@nz
		if(var_31_bool != 0) {
			var_32_object = Obj();
			var_27_object = var_32_object;
			func_5333(var_32_object);
		}
		return 2;
	EMIT "GOTO 0x185a";
	}
	var_39_bool = 0; var_40_object = Obj();
	var_27_object = var_40_object;
	func_6235(var_39_bool, var_40_object);
	var_50_bool = var_39_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_51_object = Obj();
		var_27_object = var_51_object;
		func_6182(var_29_bool, var_51_object);
	}
	return 2;
}


func_5700(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	var_22_bool = 0;
	var_22_bool = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_19_object = var_24_object;
	func_6007(var_24_object);
	if(var_23_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_19_object = var_26_object;
		func_4418(var_25_bool, var_26_object);
		if(var_25_bool != 0) {
			var_22_bool = 1;
		}
	}
	if(var_22_bool != 0) {
		@@var_19_object:IsWeaponHolstered(var_21_bool);
		var_29_bool = var_21_bool == 0; //@nz
		if(var_29_bool != 0) {
			var_18_bool = 1;
			return 2;
		}
	}
	var_18_bool = 0;
	return 2;
}


func_5192(var_380_bool)
{
	var_382_int = 0;
	func_4954(var_382_int);
	var_380_bool = var_382_int == (int)6;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_124_object, var_125_object)
{
	var_0_object = var_125_object;
	var_1_object = var_124_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_131_bool = 0; var_132_object = Obj();
		var_132_object = var_1_object;
		func_5012(var_132_object);
		if(var_131_bool != 0) {
			var_139_string = "";
			func_601(var_125_object, "Neutral");
			@@@var_0_object:SetMessage((int)543041);
			@@@var_0_object:ClearReplies();
			var_157_bool = 0;
			var_157_bool = 0;
			var_158_bool = 0;
			var_158_bool = 0;
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_5044(var_159_bool, var_160_object);
			var_170_bool = var_159_bool == 0; //@nz
			if(var_170_bool != 0) {
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_5054(var_171_bool, var_172_object);
				var_177_bool = var_171_bool == 0; //@nz
				if(var_177_bool != 0) {
					var_158_bool = 1;
				}
			}
			if(var_158_bool != 0) {
				var_178_bool = 0; var_179_object = Obj();
				var_179_object = var_1_object;
				func_5024(var_178_bool, var_179_object);
				if(var_178_bool != 0) {
					var_157_bool = 1;
				}
			}
			if(var_157_bool != 0) {
				@@@var_0_object:AddReply((int)543044, (int)45498, (int)45496);
			}
			var_187_bool = 0;
			var_187_bool = 1;
			var_188_bool = 0;
			var_188_bool = 1;
			var_189_bool = 0;
			var_189_bool = 1;
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_5114(var_190_bool, var_191_object);
			if(var_190_bool != 1) {
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_5124(var_196_bool, var_197_object);
				if(var_196_bool != 1) {
					var_189_bool = 0;
				}
			}
			if(var_189_bool != 1) {
				var_202_bool = 0; var_203_object = Obj();
				var_203_object = var_1_object;
				func_5134(var_202_bool, var_203_object);
				if(var_202_bool != 1) {
					var_188_bool = 0;
				}
			}
			if(var_188_bool != 1) {
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_object;
				func_5144(var_208_bool, var_209_object);
				if(var_208_bool != 1) {
					var_187_bool = 0;
				}
			}
			if(var_187_bool != 0) {
				@@@var_0_object:AddReply((int)543057, (int)45513, (int)45512);
			}
			var_217_bool = 0;
			var_217_bool = 1;
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_5094(var_218_bool, var_219_object);
			if(var_218_bool != 1) {
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_5104(var_224_bool, var_225_object);
				if(var_224_bool != 1) {
					var_217_bool = 0;
				}
			}
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)543063, (int)45520, (int)45518);
			}
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_5024(var_233_bool, var_234_object);
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)538210, (int)-1, (int)40087);
			}
			var_238_bool = 0; var_239_object = Obj();
			var_239_object = var_1_object;
			func_5024(var_238_bool, var_239_object);
			if(var_238_bool != 0) {
				@@@var_0_object:AddReply((int)543042, (int)-1, (int)45494);
			}
			var_243_bool = 0; var_244_object = Obj();
			var_244_object = var_1_object;
			func_5024(var_243_bool, var_244_object);
			if(var_243_bool != 0) {
				@@@var_0_object:AddReply((int)543043, (int)-1, (int)45495);
			}
			var_248_bool = 0;
			var_248_bool = 1;
			var_249_bool = 0;
			var_249_bool = 1;
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_5094(var_250_bool, var_251_object);
			if(var_250_bool != 1) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_5104(var_252_bool, var_253_object);
				if(var_252_bool != 1) {
					var_249_bool = 0;
				}
			}
			if(var_249_bool != 1) {
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_5114(var_254_bool, var_255_object);
				if(var_254_bool != 1) {
					var_248_bool = 0;
				}
			}
			if(var_248_bool != 0) {
				@@@var_0_object:AddReply((int)543055, (int)-1, (int)45510);
			}
			var_259_bool = 0;
			var_259_bool = 1;
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_object;
			func_5094(var_260_bool, var_261_object);
			if(var_260_bool != 1) {
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_5104(var_262_bool, var_263_object);
				if(var_262_bool != 1) {
					var_259_bool = 0;
				}
			}
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)543056, (int)-1, (int)45511);
			}
			var_267_bool = 0;
			var_267_bool = 1;
			var_268_bool = 0;
			var_268_bool = 1;
			var_269_bool = 0; var_270_object = Obj();
			var_270_object = var_1_object;
			func_5124(var_269_bool, var_270_object);
			if(var_269_bool != 1) {
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_5134(var_271_bool, var_272_object);
				if(var_271_bool != 1) {
					var_268_bool = 0;
				}
			}
			if(var_268_bool != 1) {
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_5144(var_273_bool, var_274_object);
				if(var_273_bool != 1) {
					var_267_bool = 0;
				}
			}
			if(var_267_bool != 0) {
				@@@var_0_object:AddReply((int)543062, (int)-1, (int)45517);
			}
			var_278_bool = 0;
			var_278_bool = 1;
			var_279_bool = 0;
			var_279_bool = 1;
			var_280_bool = 0;
			var_280_bool = 1;
			var_281_bool = 0; var_282_object = Obj();
			var_282_object = var_1_object;
			func_5114(var_281_bool, var_282_object);
			if(var_281_bool != 1) {
				var_283_bool = 0; var_284_object = Obj();
				var_284_object = var_1_object;
				func_5124(var_283_bool, var_284_object);
				if(var_283_bool != 1) {
					var_280_bool = 0;
				}
			}
			if(var_280_bool != 1) {
				var_285_bool = 0; var_286_object = Obj();
				var_286_object = var_1_object;
				func_5134(var_285_bool, var_286_object);
				if(var_285_bool != 1) {
					var_279_bool = 0;
				}
			}
			if(var_279_bool != 1) {
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_5144(var_287_bool, var_288_object);
				if(var_287_bool != 1) {
					var_278_bool = 0;
				}
			}
			if(var_278_bool != 0) {
				@@@var_0_object:AddReply((int)543064, (int)-1, (int)45519);
			}
		} else {
				var_310_string = "";
				func_601(var_125_object, "Neutral");
				@@@var_0_object:SetMessage((int)538207);
				@@@var_0_object:ClearReplies();
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_4988(var_313_object);
				if(var_312_bool != 0) {
					@@@var_0_object:AddReply((int)538208, (int)-1, (int)40085);
				}
				var_321_bool = 0; var_322_object = Obj();
				var_322_object = var_1_object;
				func_5000(var_322_object);
				if(var_321_bool != 0) {
					@@@var_0_object:AddReply((int)538209, (int)-1, (int)40086);
				}
				var_330_bool = 0;
				var_330_bool = 0;
				var_331_bool = 0; var_332_object = Obj();
				var_332_object = var_1_object;
				func_4988(var_332_object);
				if(var_331_bool != 0) {
					var_333_bool = 0; var_334_object = Obj();
					var_334_object = var_1_object;
					func_5044(var_333_bool, var_334_object);
					if(var_333_bool != 0) {
						var_330_bool = 1;
					}
				}
				if(var_330_bool != 0) {
					@@@var_0_object:AddReply((int)538211, (int)40089, (int)40088);
				}
				var_338_bool = 0;
				var_338_bool = 0;
				var_339_bool = 0; var_340_object = Obj();
				var_340_object = var_1_object;
				func_4988(var_340_object);
				if(var_339_bool != 0) {
					var_341_bool = 0; var_342_object = Obj();
					var_342_object = var_1_object;
					func_5044(var_341_bool, var_342_object);
					if(var_341_bool != 0) {
						var_338_bool = 1;
					}
				}
				if(var_338_bool != 0) {
					@@@var_0_object:AddReply((int)538222, (int)40100, (int)40099);
				}
				var_346_bool = 0;
				var_346_bool = 0;
				var_347_bool = 0; var_348_object = Obj();
				var_348_object = var_1_object;
				func_4988(var_348_object);
				if(var_347_bool != 0) {
					var_349_bool = 0; var_350_object = Obj();
					var_350_object = var_1_object;
					func_5054(var_349_bool, var_350_object);
					if(var_349_bool != 0) {
						var_346_bool = 1;
					}
				}
				if(var_346_bool != 0) {
					@@@var_0_object:AddReply((int)538235, (int)40114, (int)40113);
				}
				var_354_bool = 0;
				var_354_bool = 0;
				var_355_bool = 0; var_356_object = Obj();
				var_356_object = var_1_object;
				func_4988(var_356_object);
				if(var_355_bool != 0) {
					var_357_bool = 0; var_358_object = Obj();
					var_358_object = var_1_object;
					func_5064(var_357_bool, var_358_object);
					if(var_357_bool != 0) {
						var_354_bool = 1;
					}
				}
				if(var_354_bool != 0) {
					@@@var_0_object:AddReply((int)538253, (int)40135, (int)40134);
				}
				var_366_bool = 0;
				var_366_bool = 0;
				var_367_bool = 0; var_368_object = Obj();
				var_368_object = var_1_object;
				func_4988(var_368_object);
				if(var_367_bool != 0) {
					var_369_bool = 0; var_370_object = Obj();
					var_370_object = var_1_object;
					func_5074(var_369_bool, var_370_object);
					if(var_369_bool != 0) {
						var_366_bool = 1;
					}
				}
				if(var_366_bool != 0) {
					@@@var_0_object:AddReply((int)538272, (int)40155, (int)40154);
				}
				var_378_bool = 0; var_379_object = Obj();
				var_379_object = var_1_object;
				func_5084(var_378_bool, var_379_object);
				if(var_378_bool != 0) {
					@@@var_0_object:AddReply((int)538291, (int)40174, (int)40173);
				}
				var_387_bool = 0;
				var_387_bool = 0;
				var_388_bool = 0; var_389_object = Obj();
				var_389_object = var_1_object;
				func_4988(var_389_object);
				if(var_388_bool != 0) {
					var_390_bool = 0; var_391_object = Obj();
					var_391_object = var_1_object;
					func_5094(var_390_bool, var_391_object);
					if(var_390_bool != 0) {
						var_387_bool = 1;
					}
				}
				if(var_387_bool != 0) {
					@@@var_0_object:AddReply((int)538308, (int)40192, (int)40191);
				}
				var_395_bool = 0; var_396_object = Obj();
				var_396_object = var_1_object;
				func_5104(var_395_bool, var_396_object);
				if(var_395_bool != 0) {
					@@@var_0_object:AddReply((int)538322, (int)40206, (int)40205);
				}
				var_400_bool = 0; var_401_object = Obj();
				var_401_object = var_1_object;
				func_5034(var_400_bool, var_401_object);
				if(var_400_bool != 0) {
					@@@var_0_object:AddReply((int)538332, (int)40216, (int)40215);
				}
				var_407_bool = 0;
				var_407_bool = 0;
				var_408_bool = 0; var_409_object = Obj();
				var_409_object = var_1_object;
				func_4988(var_409_object);
				if(var_408_bool != 0) {
					var_410_bool = 0; var_411_object = Obj();
					var_411_object = var_1_object;
					func_5114(var_410_bool, var_411_object);
					if(var_410_bool != 0) {
						var_407_bool = 1;
					}
				}
				if(var_407_bool != 0) {
					@@@var_0_object:AddReply((int)538347, (int)40233, (int)40232);
				}
				var_415_bool = 0; var_416_object = Obj();
				var_416_object = var_1_object;
				func_5124(var_415_bool, var_416_object);
				if(var_415_bool != 0) {
					@@@var_0_object:AddReply((int)538364, (int)40250, (int)40249);
				}
				var_420_bool = 0;
				var_420_bool = 0;
				var_421_bool = 0; var_422_object = Obj();
				var_422_object = var_1_object;
				func_4988(var_422_object);
				if(var_421_bool != 0) {
					var_423_bool = 0; var_424_object = Obj();
					var_424_object = var_1_object;
					func_5134(var_423_bool, var_424_object);
					if(var_423_bool != 0) {
						var_420_bool = 1;
					}
				}
				if(var_420_bool != 0) {
					@@@var_0_object:AddReply((int)538375, (int)40262, (int)40261);
				}
				var_428_bool = 0;
				var_428_bool = 0;
				var_429_bool = 0; var_430_object = Obj();
				var_430_object = var_1_object;
				func_4988(var_430_object);
				if(var_429_bool != 0) {
					var_431_bool = 0; var_432_object = Obj();
					var_432_object = var_1_object;
					func_5134(var_431_bool, var_432_object);
					if(var_431_bool != 0) {
						var_428_bool = 1;
					}
				}
				if(var_428_bool != 0) {
					@@@var_0_object:AddReply((int)538385, (int)40272, (int)40271);
				}
				@@@var_0_object:AddReply((int)538396, (int)-1, (int)40282);
				goto Label_571;
		}
	}
Label_571:
	var_292_bool = 0;
	func_6205(var_292_bool);
	if(var_292_bool != 0) {

	Label_575:
		lshWaitForAnimEnd();
		var_293_string = var_3_string;
		if(var_293_string != 0) {
		} else {
			var_294_string = "";
			var_294_string = var_2_object;
			func_4802(var_294_string);
			goto Label_575;
	}
		PlayAnimation("all", "idle");

	Label_590:
		WaitForAnimEnd();
		var_307_string = var_3_string;
		if(var_307_string != 0) {
			goto Label_600;
		}
		PlayAnimation("all", "idle");
		goto Label_590;

	}
	goto Label_600;
	
Label_600:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_4685(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	GetScene(var_30_object);
	AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	var_34_object = Obj();
	var_23_object = var_34_object;
	func_4573(var_34_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5199(var_220_bool)
{
	var_222_int = 0;
	func_4954(var_222_int);
	var_220_bool = var_222_int == (int)7;
	return 0;
}


func_5206(var_226_bool)
{
	var_228_int = 0;
	func_4954(var_228_int);
	var_226_bool = var_228_int == (int)8;
	return 0;
}


func_601(var_2_object, var_139_string)
{
	var_140_bool = 0;
	func_6205(var_140_bool);
	var_141_bool = var_140_bool == 0; //@nz
	if(var_141_bool != 0) {
		return 0;
	}
	var_142_bool = var_139_string == var_2_object;
	if(var_142_bool != 0) {
		return 0;
	}
	var_143_string = ""; var_144_bool = 0;
	var_139_string = var_143_string;
	var_146_bool = var_139_string == "";
	if(var_146_bool != 0) {
		var_144_bool = 0;
	} else {
		var_144_bool = 1;
	}
	func_4818(var_143_string, var_144_bool);
	var_2_object = var_139_string;
	return 0;
	
}


func_5723(var_30_object)
{
	var_30_object = Obj();
	func_6010();
	return 0;
}


func_4699(var_282_object)
{
	var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0);
	@@var_282_object:GetPosition(var_286_cvector);
	GetPosition(var_287_cvector);
	var_288_cvector = var_286_cvector - var_287_cvector;
	var_289_float = GetByIndex(var_288_cvector, 0);
	var_290_float = GetByIndex(var_288_cvector, 2);
	RotateAsync(var_289_float, var_290_float);
	return 6;
}


func_5213(var_192_bool)
{
	var_194_int = 0;
	func_4954(var_194_int);
	var_192_bool = var_194_int == (int)9;
	return 0;
}


func_3166(var_38_float)
{
	var_39_float = 0; var_40_float = 0;
	GetCameraFarDistance(var_40_float);
	var_40_float = var_38_float;
	return 2;
}


func_6235(var_39_bool, var_40_object)
{
	var_41_float = 0; var_42_float = 0;
	var_43_bool = 0; var_44_object = Obj();
	var_40_object = var_44_object;
	func_4418(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		@@var_40_object:GetProperty("reputation", var_42_float);
		var_49_bool = var_42_float < (float)0.4000000059604645;
		if(var_49_bool != 0) {
			var_39_bool = 1;
			return 2;
		}
	}
	var_39_bool = 0;
	return 2;
}


func_5729(var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_4418(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		var_25_object = Obj();
		func_4892(var_25_object);
		ReportReputationChange(var_20_object, var_25_object, (float)-0.009999999776482582);
	}
	return 0;
}


func_4196(var_2_object)
{
	KillTimer((int)1);
	var_19_object = var_2_object;
	if(var_19_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_4362(var_17_object);
	return 0;
}


func_5220(var_198_bool)
{
	var_200_int = 0;
	func_4954(var_200_int);
	var_198_bool = var_200_int == (int)10;
	return 0;
}


func_4710(var_19_bool)
{
	var_20_bool = 0; var_21_bool = 0;
	IsLoaded(var_21_bool);
	var_21_bool = var_19_bool;
	return 2;
}


func_3178(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_4715(var_63_bool, var_64_object, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0;
	@@var_64_object:GetPosition(var_76_cvector);
	@@var_64_object:GetEyesHeight(var_75_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	var_84_float = var_84_float + var_75_float;
	SetByIndex(var_76_cvector, 1) = var_84_float;
	GetPosition(var_77_cvector);
	GetEyesHeight(var_75_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	var_85_float = var_85_float + var_75_float;
	SetByIndex(var_77_cvector, 1) = var_85_float;
	var_78_cvector = var_76_cvector - var_77_cvector;
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (float)0;
	var_87_int = var_78_cvector | var_78_cvector;
	var_88_float = sqrt(var_87_int);
	var_78_cvector = var_78_cvector / var_88_float;
	var_79_cvector = -var_78_cvector;
	var_89_float = var_78_cvector * var_65_float;
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	var_91_cvector = var_79_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4898(var_90_cvector, var_91_cvector);
	var_99_float = var_90_cvector * (int)25;
	var_100_int = var_89_float + var_99_float;
	var_80_cvector = var_100_int - CVector(0.0, 10.0, 0.0);
	var_81_cvector = var_77_cvector + var_80_cvector;
	IsOverrideActive(var_82_bool);
	var_102_bool = var_82_bool;
	if(var_102_bool != 0) {
		var_63_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_81_cvector, var_79_cvector, (bool)1);
	var_104_float = GetByIndex(var_80_cvector, 0);
	var_105_float = GetByIndex(var_80_cvector, 2);
	Rotate(var_104_float, var_105_float);
	var_106_bool = 0;
	func_6205(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		HasAnimationTrack(var_83_bool, "head");
		var_108_bool = var_83_bool;
		if(var_108_bool == 0) goto Label_4778;
		LookAsyncCamera("head");
	}
Label_4778:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_63_bool = 1;
	return 18;
	
}


func_5227(var_204_bool)
{
	var_206_int = 0;
	func_4954(var_206_int);
	var_204_bool = var_206_int == (int)11;
	return 0;
}


func_3693(var_1_object, var_2_object, var_4_bool)
{
	var_133_bool = 0; var_134_bool = 0; var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_bool = 0; var_138_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_3695:
	var_142_int = var_1_object + (int)1;
	var_143_int = "attack_begin" + var_142_int;
	HasAnimation(var_136_bool, "all", var_143_int);
	var_144_bool = var_136_bool == 0; //@nz
	if(var_144_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_3695;
	}
	var_2_object = 0;
	
Label_3709:
	var_147_int = var_2_object + (int)1;
	var_148_int = "attack" + var_147_int;
	IsExisting3DSound(var_137_bool, var_148_int);
	var_149_bool = var_137_bool == 0; //@nz
	if(var_149_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_3709;

	}
	GetAnimationOffset(var_138_cvector, "all", "bjump");
	var_152_float = GetByIndex(var_138_cvector, 2);
	var_4_bool = -var_152_float;
	return 6;
	
}


func_6254(var_22_bool, var_23_object, var_24_object, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_bool = 0;
	var_23_object = var_27_object;
	var_24_object = var_28_object;
	var_25_bool = var_30_bool;
	func_5917(var_26_bool, var_27_object, var_28_object, (float)700.0, var_30_bool);
	var_26_bool = var_22_bool;
	return 0;
}


func_5742(var_18_bool, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj();
	var_23_bool = var_19_string == "heal";
	if(var_23_bool != 0) {
		FindActor(var_21_object, "player");
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_6022(var_26_object);
		var_25_bool = var_18_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_18_bool = 0;
	return 2;
}


func_6251(var_89_bool)
{
	var_89_bool = 1;
	return 0;
}


func_3185(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_5234(var_210_bool)
{
	var_212_int = 0;
	func_4954(var_212_int);
	var_210_bool = var_212_int == (int)12;
	return 0;
}


func_2675(var_19_object)
{
	EventDisable(0);
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_2708(var_20_object);
	var_100_object = Obj();
	var_19_object = var_100_object;
	func_6264(var_100_object);
	EventEnable(0);
	
Label_2686:
	Hold();
	goto Label_2686;
}
EMIT "Return(); Pop(0)";


func_6264(var_100_object)
{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_4418(var_101_bool, var_102_object);
	if(var_101_bool != 0) {
		var_105_object = Obj();
		func_4892(var_105_object);
		ReportReputationChange(var_100_object, var_105_object, (float)-0.03999999910593033, (bool)1);
		var_110_bool = 0;
		func_5418((bool)1);
	}
	func_5394();
	var_244_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_3192(var_48_bool)
{
	var_48_bool = 0;
	return 0;
}


func_5241(var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	GetVariable("branch", var_117_int);
	var_120_bool = var_117_int == (int)0;
	if(var_120_bool != 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0x1488";
	}
	var_122_bool = var_117_int == (int)1;
	if(var_122_bool != 0) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
	return 2;
}


func_3194(var_42_object, var_43_cvector)
{
	var_44_object = Obj(); var_45_object = Obj();
	FindShiftedPathTo(var_45_object, var_43_cvector);
	var_45_object = var_42_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5758(var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj();
	var_31_bool = var_27_string == "heal";
	if(var_31_bool != 0) {
		FindActor(var_29_object, "player");
		var_29_object = Obj();
		func_6025();
		var_29_object = 0;
	}
	return 2;
}


func_5258(var_224_int)
{
	var_225_int = 0; var_226_int = 0;
	GetVariable("branch", var_226_int);
	var_226_int = var_224_int;
	return 2;
}


func_5771(var_72_string, var_73_int)
{
	var_74_string = ""; var_75_string = "";
	var_76_int = var_73_int;
	if(var_76_int != 0) {
		"idle" = "idle" + var_73_int;
	}
	var_75_string = var_72_string;
	return 2;
}


func_4238(var_0_object, var_1_object, var_208_bool, var_209_object, var_210_float, var_211_float, var_212_bool, var_213_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_object = Obj(); var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_float = 0; var_221_object = Obj(); var_222_bool = 0; var_223_bool = 0; var_224_object = Obj(); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_object = Obj();
	var_0_object = false;
	var_1_object = var_209_object;
	var_213_bool = var_223_bool;
	
Label_4242:
	var_230_bool = 0; var_231_object = Obj();
	var_209_object = var_231_object;
	func_4378(var_230_bool, var_231_object);
	var_234_bool = var_230_bool == 0; //@nz
	if(var_234_bool != 0) {
		var_208_bool = 0;
		return 16;
	}
	@@var_209_object:GetPosition(var_225_cvector);
	GetPosition(var_226_cvector);
	var_227_cvector = var_225_cvector - var_226_cvector;
	var_228_float = var_227_cvector | var_227_cvector;
	var_235_bool = 0;
	var_235_bool = 0;
	var_237_bool = var_211_float > (int)0;
	if(var_237_bool != 0) {
		var_238_float = var_211_float * var_211_float;
		var_239_bool = var_228_float > var_238_float;
		if(var_239_bool != 0) {
			var_235_bool = 1;
		}
	}
	if(var_235_bool != 0) {
		Stop();
		var_208_bool = 0;
		return 16;
	}
	var_240_float = var_210_float * var_210_float;
	var_241_bool = var_228_float > var_240_float;
	if(var_241_bool != 0) {
		@@var_209_object:GetPFPosition(var_225_cvector);
		FindPathTo(var_229_object, var_225_cvector);
		var_242_bool = var_229_object != 0; //@nn
		if(var_242_bool != 0) {
			var_229_object = var_224_object;
			var_229_object = 0;
		}
		var_243_bool = var_224_object != 0; //@nn
		if(var_243_bool != 0) {
			var_244_bool = var_223_bool;
			if(var_244_bool == 0) goto Label_4291;
			var_223_bool = 0;
			RotatePath(var_224_object, var_222_bool);
			var_245_bool = var_222_bool == 0; //@nz
			if(var_245_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_248_string = "";
				func_4385(var_248_string);
				var_249_string = "";
				func_4387(var_249_string);
				FollowPath(var_224_object, var_212_bool, var_222_bool, var_248_string, var_249_string);
				var_250_bool = var_222_bool == 0; //@nz
				if(var_250_bool != 0) {
					var_251_object = var_0_object;
					if(var_251_object != 0) {
						var_224_object = 0;
						goto Label_4338;
					EMIT "GOTO 0x10d7";
					}
				} else {
					var_224_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_222_bool);
					var_254_bool = var_222_bool == 0; //@nz
					if(var_254_bool != 0) {
						var_255_object = var_0_object;
						if(var_255_object != 0) {
							var_224_object = 0;
							goto Label_4338;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_4338;
	}
			var_229_object = 0;
			goto Label_4336;

		Label_4336:
			var_224_object = 0;

		}
		goto Label_4242;
	}
Label_4338:
	var_208_bool = !var_0_object;
	return 16;
	
}


func_3728(var_0_object, var_434_float, var_435_int)
{
	var_436_object = Obj(); var_437_float = 0; var_438_float = 0; var_439_object = Obj(); var_440_float = 0; var_441_float = 0;
	var_443_float = var_434_float * (float)0.8999999761581421;
	GetVictim(var_443_float, var_439_object);
	ReportAttack(var_0_object);
	var_444_bool = var_439_object == var_0_object;
	if(var_444_bool != 0) {
		var_445_float = 0; var_446_object = Obj(); var_447_int = 0;
		var_439_object = var_446_object;
		var_435_int = var_447_int;
		func_3458(var_447_int);
		var_445_float = var_440_float;
		var_448_float = 0; var_449_object = Obj(); var_450_float = 0; var_451_int = 0;
		var_439_object = var_449_object;
		var_440_float = var_450_float;
		var_452_int = 0; var_453_object = Obj(); var_454_int = 0;
		var_439_object = var_453_object;
		var_435_int = var_454_int;
		func_3461(var_454_int);
		var_452_int = var_451_int;
		func_4435(var_448_float, var_449_object, var_450_float, var_451_int);
		var_448_float = var_441_float;
		var_513_int = 0;
		func_4111(var_513_int);
		ReportHit(var_0_object, var_513_int, var_441_float, var_440_float);
		var_514_object = Obj(); var_515_float = 0;
		var_439_object = var_514_object;
		var_441_float = var_515_float;
		func_4118();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_5264(var_546_int, var_547_object)
{
	var_548_int = 0; var_549_int = 0;
	@@var_547_object:GetItemID(var_549_int);
	var_549_int = var_546_int;
	return 2;
}


func_5778(var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0;
	var_69_int = 0;
	
Label_5780:
	var_72_string = ""; var_73_int = 0;
	var_69_int = var_73_int;
	func_5771(var_72_string, var_73_int);
	HasAnimation(var_70_bool, "all", var_72_string);
	var_77_bool = var_70_bool == 0; //@nz
	if(var_77_bool != 0) {
	} else {
		var_69_int = var_69_int + (int)1;
		goto Label_5780;
	}
	var_69_int = var_66_int;
	return 4;
	
}


func_2708(var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_object = Obj(); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0);
	var_41_bool = var_20_object == 0; //@ne
	if(var_41_bool != 0) {
		var_42_string = "";
		func_2799("fdie");
	} else {
		@@var_20_object:GetPosition(var_31_cvector);
		GetPosition(var_32_cvector);
		GetDirection(var_33_cvector);
		var_34_cvector = var_32_cvector - var_31_cvector;
		var_74_float = GetByIndex(var_34_cvector, 0);
		var_75_float = GetByIndex(var_33_cvector, 0);
		var_76_float = var_74_float * var_75_float;
		var_77_float = GetByIndex(var_34_cvector, 2);
		var_78_float = GetByIndex(var_33_cvector, 2);
		var_79_float = var_77_float * var_78_float;
		var_80_int = var_76_float + var_79_float;
		var_82_bool = var_80_int >= (int)0;
		if(var_82_bool != 0) {
			var_35_string = "fdie";
		} else {
				var_35_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_20_object = var_36_object;
		var_85_bool = IsFuncExist(var_20_object, "GetScriptProperty", (int)2);
		if(var_85_bool != 0) {
			@@var_20_object:HasScriptProperty(var_37_bool, "Owner");
			var_87_bool = var_37_bool;
			if(var_87_bool != 0) {
				@@var_20_object:GetScriptProperty(var_36_object, "Owner");
				var_89_bool = var_36_object == 0; //@ne
				if(var_89_bool != 0) {
					var_20_object = var_36_object;
				}
			}
		}
		var_92_bool = IsFuncExist(var_36_object, "@GetEyesHeight", (int)1);
		if(var_92_bool != 0) {
			@@var_36_object:GetEyesHeight(var_39_float);
			var_40_cvector = CVector(0.0, 0.0, 0.0);
			var_93_float = GetByIndex(var_40_cvector, 1);
			var_39_float = var_93_float;
			SetByIndex(var_40_cvector, 1) = var_93_float;
			LookAsync(var_20_object, "head", var_40_cvector);
			var_38_bool = 1;
		} else {
			var_38_bool = 0;

		}
		var_95_string = "";
		var_35_string = var_95_string;
		func_4851(var_95_string);
		PlayAnimation("all", var_35_string);
		WaitForAnimEnd();
		var_97_bool = var_38_bool;
		if(var_97_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_35_string);
		RemoveEnvelope();
		var_36_object = 0;
	}
	return 20;
	
}


func_5269(var_523_int, var_524_object, var_525_int)
{
	var_526_int = 0; var_527_int = 0; var_528_int = 0; var_529_string = ""; var_530_bool = 0; var_531_bool = 0; var_532_int = 0; var_533_int = 0; var_534_int = 0; var_535_int = 0; var_536_string = ""; var_537_bool = 0; var_538_bool = 0; var_539_int = 0;
	var_541_bool = var_525_int == (int)0;
	if(var_541_bool != 0) {
		func_4954((int)0);
		var_542_int = var_533_int;
		var_535_int = 1;

	Label_5279:
		var_543_bool = var_535_int <= var_533_int;
		if(var_543_bool != 0) {
			var_545_bool = var_535_int != (int)1;
			if(var_545_bool != 0) {
				"Price" = "Price" + var_535_int;
			}
			var_546_int = 0; var_547_object = Obj();
			var_524_object = var_547_object;
			func_5264(var_546_int, var_547_object);
			HasInvItemProperty(var_537_bool, var_546_int, var_536_string);
			var_550_bool = var_537_bool == 0; //@nz
			if(var_550_bool != 0) {
			} else {
				var_552_int = 0; var_553_object = Obj();
				var_524_object = var_553_object;
				func_5264(var_552_int, var_553_object);
				GetInvItemProperty((int)0, var_552_int, var_536_string);
		}
			var_534_int = var_523_int;
			return 14;
	}
		var_554_int = 0; var_555_object = Obj();
		var_524_object = var_555_object;
		func_5264(var_554_int, var_555_object);
		var_557_int = "BarterPrice" + var_525_int;
		HasInvItemProperty(var_538_bool, var_554_int, var_557_int);
		var_558_bool = var_538_bool == 0; //@nz
		if(var_558_bool != 0) {
			return 14;
		}
		var_559_int = 0; var_560_object = Obj();
		var_524_object = var_560_object;
		func_5264(var_559_int, var_560_object);
		var_562_int = "BarterPrice" + var_525_int;
		GetInvItemProperty(var_539_int, var_559_int, var_562_int);
		var_564_bool = var_539_int > (int)0;
		if(var_564_bool != 0) {
			var_539_int = (int)0;
			return 14;
		}
		var_523_int = -var_539_int;
		return 14;
	}
	var_535_int = var_535_int + (int)1;
	goto Label_5279;
	
}


func_5795(var_60_int, var_61_object)
{
	var_62_bool = 0; var_63_object = Obj();
	var_61_object = var_63_object;
	func_6235(var_62_bool, var_63_object);
	if(var_62_bool != 0) {
		var_60_int = 2;
	} else {
		var_60_int = 0;
	}
	return 0;
	
}


func_5805(var_78_object)
{
	var_79_object = Obj();
	var_78_object = var_79_object;
	func_5821(var_79_object);
	return 0;
}


func_4784()
{
	var_441_bool = 0; var_442_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_444_bool = 0;
	func_6205(var_444_bool);
	if(var_444_bool != 0) {
	} else {
		HasAnimationTrack(var_442_bool, "head");
		var_446_bool = var_442_bool;
		if(var_446_bool == 0) goto Label_4801;
		UnlookAsync("head");
	}
Label_4801:
	return 2;
	
}


func_5811(var_87_int, var_88_object)
{
	var_89_bool = 0; var_90_object = Obj();
	var_88_object = var_90_object;
	func_4549(var_89_bool, var_90_object);
	if(var_89_bool != 0) {
		var_87_int = 2;
	} else {
		var_87_int = 0;
	}
	return 0;
	
}


func_3767(var_0_object, var_1_object, var_397_bool, var_398_float)
{
	var_399_int = 0; var_400_bool = 0; var_401_int = 0; var_402_string = ""; var_403_int = 0; var_404_bool = 0; var_405_int = 0; var_406_string = "";
	func_4106(var_406_string);
	irand(var_403_int, var_1_object);
	var_403_int = var_403_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_4972();
	var_415_int = "attack_begin" + var_403_int;
	PlayAnimation("all", var_415_int);
	WaitForAnimEnd();
	func_4074(var_405_int, var_406_string);
	var_431_bool = 0; var_432_object = Obj();
	var_432_object = var_0_object;
	func_4549(var_431_bool, var_432_object);
	var_433_bool = var_431_bool == 0; //@nz
	if(var_433_bool != 0) {
		StopAsync();
		var_397_bool = 0;
		return 8;
	}
	var_434_float = 0; var_435_int = 0;
	var_398_float = var_434_float;
	var_403_int = var_435_int;
	func_3728(var_406_string, var_434_float, var_435_int);
	var_518_int = "attack_middle" + var_403_int;
	HasAnimation(var_404_bool, "all", var_518_int);
	var_519_bool = var_404_bool;
	if(var_519_bool != 0) {
		func_4972();
		var_522_int = "attack_middle" + var_403_int;
		PlayAnimation("all", var_522_int);
		WaitForAnimEnd();
		func_4106(var_406_string);
		var_523_bool = 0; var_524_object = Obj();
		var_524_object = var_0_object;
		func_4549(var_523_bool, var_524_object);
		var_525_bool = var_523_bool == 0; //@nz
		if(var_525_bool != 0) {
			StopAsync();
			var_397_bool = 0;
			return 8;
		}
		var_526_float = 0; var_527_int = 0;
		var_398_float = var_526_float;
		var_403_int = var_527_int;
		func_3728(var_406_string, var_526_float, var_527_int);
		var_405_int = 1;

	Label_3844:
		var_529_int = "attack_middle" + var_403_int;
		var_531_int = var_529_int + "_";
		var_406_string = var_531_int + var_405_int;
		HasAnimation(var_404_bool, "all", var_406_string);
		var_533_bool = var_404_bool == 0; //@nz
		if(var_533_bool != 0) {
		} else {
			func_4972();
			PlayAnimation("all", var_406_string);
			WaitForAnimEnd();
			func_4106(var_406_string);
			var_549_bool = 0; var_550_object = Obj();
			var_550_object = var_0_object;
			func_4549(var_549_bool, var_550_object);
			var_551_bool = var_549_bool == 0; //@nz
			if(var_551_bool != 0) {
				StopAsync();
				var_397_bool = 0;
				var_552_float = 0; var_553_int = 0;
				var_398_float = var_552_float;
				var_403_int = var_553_int;
				func_3728(var_406_string, var_552_float, var_553_int);
				var_405_int = var_405_int + (int)1;
				goto Label_3844;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_537_int = "attack_end" + var_403_int;
	PlayAnimation("all", var_537_int);
	var_538_bool = 0;
	func_4120(var_538_bool);
	if(var_538_bool != 0) {
		var_539_bool = 0; var_540_float = 0;
		func_3904(var_539_bool, (float)0.75);
		StopAsync();
	}
	var_397_bool = 1;
	return 8;
	
}


func_5821(var_100_object)
{
	var_101_object = Obj();
	var_100_object = var_101_object;
	TaskCall(5);
	func_3450(var_101_object);
	TaskReturn();
	return 0;
}


func_4802(var_294_string)
{
	var_295_bool = 0; var_296_float = 0; var_297_float = 0; var_298_bool = 0; var_299_float = 0; var_300_float = 0;
	lshHasAnimation(var_298_bool, var_294_string);
	var_301_bool = var_298_bool;
	if(var_301_bool != 0) {
		lshGetAnimTimes(var_294_string, var_299_float, var_300_float);
		lshPlayAnimation(var_299_float, var_300_float, (bool)0);
	} else {
		var_304_int = "Can't find lsh animation : " + var_294_string;
		Trace(var_304_int);
	}
	return 6;
	
}


func_5829(var_33_bool, var_34_object, var_35_bool)
{
	var_36_string = ""; var_37_string = ""; var_38_string = ""; var_39_string = "";
	var_40_bool = 0; var_41_object = Obj(); var_42_string = "";
	var_34_object = var_41_object;
	func_4423(var_40_bool, var_41_object, "class");
	var_49_bool = var_40_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetProperty("class", var_38_string);
	@@var_34_object:GetProperty("class", var_39_string);
	var_52_bool = 0;
	var_52_bool = 0;
	var_53_bool = var_35_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_54_bool = var_38_string == var_39_string;
		if(var_54_bool != 0) {
			var_52_bool = 1;
		}
	}
	if(var_52_bool != 0) {
		var_33_bool = 1;
		return 4;
	}
	var_56_bool = var_39_string == "rat";
	if(var_56_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x170e";
	}
	var_58_bool = var_39_string == "rat_big";
	if(var_58_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x170e";
	}
	var_60_bool = var_39_string == "dog";
	if(var_60_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x170e";
	}
	var_62_bool = var_39_string == "grabitel";
	if(var_62_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x170e";
	}
	var_64_bool = var_39_string == "bomber";
	if(var_64_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x170e";
	}
	var_66_bool = var_39_string == "sanitar";
	if(var_66_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x170e";
	}
	var_68_bool = var_39_string == "hunter";
	if(var_68_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x170e";
	}
	var_70_bool = var_39_string == "soldier";
	if(var_70_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_33_bool = 1;
	return 4;
}


func_4818(var_143_string, var_144_bool)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0;
	lshHasAnimation(var_150_bool, var_143_string);
	var_153_bool = var_150_bool;
	if(var_153_bool != 0) {
		lshGetAnimTimes(var_143_string, var_151_float, var_152_float);
		lshPlayAnimation(var_151_float, var_152_float, var_144_bool);
	} else {
		var_155_int = "Can't find lsh animation : " + var_143_string;
		Trace(var_155_int);
	}
	return 6;
	
}


func_5333(var_32_object)
{
	var_33_int = 0;
	func_5258(var_33_int);
	var_38_bool = var_33_int == (int)1;
	if(var_38_bool != 0) {
		WorkWithCorpse(var_32_object);
	} else {
		Barter(var_32_object);
	}
	return 0;
	
}


func_4833(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0);
	@@var_21_object:GetEyesHeight(var_24_float);
	var_25_cvector = CVector(0.0, 0.0, 0.0);
	var_26_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_26_float;
	SetByIndex(var_25_cvector, 1) = var_26_float;
	LookAsync(var_21_object, "head", var_25_cvector);
	return 4;
}


func_5346(var_116_int, var_117_int)
{
	var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_bool = 0;
	var_131_bool = var_116_int > var_117_int;
	if(var_131_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_129_int = 0;
	var_133_bool = var_116_int != var_117_int;
	if(var_133_bool != 0) {
		var_134_int = var_117_int - var_116_int;
		irand(var_129_int, var_134_int);
	} else {
		var_143_bool = var_116_int == (int)0;
		if(var_143_bool == 0) goto Label_5364;
		return 4;
	}
Label_5364:
	var_129_int = var_129_int + var_116_int;
	var_136_bool = var_129_int == (int)0;
	if(var_136_bool != 0) {
		return 4;
	}
	var_137_int = 0; var_138_string = "";
	func_5593(var_137_int, "Money");
	AddItem(var_130_bool, var_137_int, (int)0, var_129_int);
	return 4;
	
}


func_4844()
{
	var_20_bool = 0;
	func_6205(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2799(var_42_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_43_string = "";
	var_42_string = var_43_string;
	func_4851(var_43_string);
	PlayAnimation("all", var_42_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_42_string);
	RemoveEnvelope();
	return 0;
}


func_4851(var_43_string)
{
	var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	IsExisting3DSound(var_52_bool, var_43_string);
	var_60_bool = var_52_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_53_int = 0;

	Label_4857:
		var_62_int = var_53_int + (int)1;
		var_63_int = var_43_string + var_62_int;
		IsExisting3DSound(var_54_bool, var_63_int);
		var_64_bool = var_54_bool == 0; //@nz
		if(var_64_bool != 0) {
		} else {
			var_53_int = var_53_int + (int)1;
			goto Label_4857;
		}
		var_65_bool = var_53_int == 0; //@nz
		if(var_65_bool != 0) {
			return 16;
		}
		irand(var_55_int, var_53_int);
		var_67_int = var_55_int + (int)1;
		var_43_string = var_43_string + var_67_int;
	}
	Is3DSoundLoaded(var_56_bool, var_43_string);
	var_68_bool = var_56_bool;
	if(var_68_bool != 0) {
		GetEyesHeight(var_57_float);
		GetDirection(var_58_cvector);
		var_59_cvector = var_58_cvector * (int)50;
		var_70_float = GetByIndex(var_59_cvector, 1);
		var_70_float = var_70_float + var_57_float;
		SetByIndex(var_59_cvector, 1) = var_70_float;
		PlayGlobalSound(var_43_string, var_59_cvector);
	}
	return 16;
	
}


func_4340(var_0_object, var_1_object, var_25_int)
{
	var_27_bool = var_25_int != (int)0;
	if(var_27_bool != 0) {
		return 0;
	}
	var_28_bool = 0; var_29_object = Obj();
	var_29_object = var_1_object;
	func_4378(var_28_bool, var_29_object);
	var_64_bool = var_28_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_5377(var_230_string)
{
	var_231_object = Obj(); var_232_int = 0; var_233_bool = 0; var_234_object = Obj(); var_235_int = 0; var_236_bool = 0;
	CreateInvItem(var_234_object);
	@@var_234_object:SetItemName(var_230_string);
	@@var_234_object:SetProperty("Organ", (int)1);
	@@var_234_object:GetItemID(var_235_int);
	AddItem(var_236_bool, var_234_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_4362(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_5904(var_84_int, var_85_object)
{
	var_87_int = 0; var_88_object = Obj();
	var_85_object = var_88_object;
	func_5811(var_87_int, var_88_object);
	var_87_int = var_84_int;
	return 0;
}


func_5394()
{
	var_224_int = 0;
	func_5258(var_224_int);
	var_229_bool = var_224_int != (int)1;
	if(var_229_bool != 0) {
		return 0;
	}
	var_230_string = "";
	func_5377("liver");
	var_241_string = "";
	func_5377("kidney");
	var_242_string = "";
	func_5377("heart");
	var_243_string = "";
	func_5377("blood");
	return 0;
}


func_5911(var_121_object)
{
	var_122_object = Obj();
	var_121_object = var_122_object;
	func_5821(var_122_object);
	return 0;
}


func_4378(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj();
	var_29_object = var_31_object;
	func_4549(var_30_bool, var_31_object);
	var_30_bool = var_28_bool;
	return 0;
}


func_4892(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj();
	self(var_107_object);
	var_107_object = var_105_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5917(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0;
	var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0;
	var_28_object = var_34_object;
	var_35_bool = !var_30_bool;
	func_5829(var_33_bool, var_34_object, var_35_bool);
	var_71_bool = var_33_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_26_bool = 0;
		return 2;
	}
	CanSee(var_32_bool, var_27_object);
	var_72_bool = 0;
	var_72_bool = 1;
	var_73_bool = var_32_bool;
	if(var_73_bool != 1) {
		var_74_float = 0; var_75_object = Obj();
		var_27_object = var_75_object;
		func_4410(var_74_float, var_75_object);
		var_82_float = var_29_float * var_29_float;
		var_83_bool = var_74_float <= var_82_float;
		if(var_83_bool != 1) {
			var_72_bool = 0;
		}
	}
	if(var_72_bool != 0) {
		var_26_bool = 1;
		return 2;
	}
	var_26_bool = 0;
	return 2;
}


func_2846()
{
	var_19_bool = 0;
	func_4710(var_19_bool);
	var_22_bool = var_19_bool == 0; //@nz
	if(var_22_bool != 0) {
		func_6006();
	}
	return 0;
}


func_4385(var_248_string)
{
	var_248_string = "walk";
	return 0;
}


func_4898(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_49_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_49_cvector = var_50_cvector / var_58_float;
	return 2;
}


func_4387(var_249_string)
{
	var_249_string = "run";
	return 0;
}


func_3364()
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_bool = 0;
	WaitForAnimEnd();
	var_64_bool = 0;
	func_4710(var_64_bool);
	var_65_bool = var_64_bool == 0; //@nz
	if(var_65_bool != 0) {
		return 14;
	}
	func_5778((int)0);
	var_66_int = var_57_int;
	var_58_int = 0;
	
Label_3378:
	var_79_bool = 0;
	var_79_bool = 0;
	var_81_bool = var_58_int < (int)5;
	if(var_81_bool != 0) {
		var_82_bool = 0;
		func_4710(var_82_bool);
		if(var_82_bool != 0) {
			var_79_bool = 1;
		}
	}
	if(var_79_bool != 0) {
		irand(var_59_int, (int)3);
		var_85_bool = var_59_int == (int)0;
		if(var_85_bool != 0) {
			var_86_int = var_57_int;
			if(var_86_int == 0) goto Label_3411;
			irand(var_60_int, var_57_int);
			var_88_string = ""; var_89_int = 0;
			var_60_int = var_89_int;
			func_5771(var_88_string, var_89_int);
			PlayAnimation("all", var_88_string);
			WaitForAnimEnd(var_61_bool);
			var_90_bool = var_61_bool == 0; //@nz
			if(var_90_bool != 0) {
			} else {
		} else {
				var_95_bool = var_59_int == (int)1;
				if(var_95_bool != 0) {
					rand(var_62_float, (int)4);
					var_98_int = var_62_float + (int)1;
					Sleep(var_98_int, var_63_bool);
					var_99_bool = var_63_bool == 0; //@nz
					if(var_99_bool != 0) {
						goto Label_3440;
					}
					goto Label_3429;
				}
				var_100_int = var_58_int;
				if(var_100_int == 0) goto Label_3429;
				goto Label_3440;
		}
		Label_3429:
			var_91_bool = 0;
			func_3443(var_91_bool);
			var_92_bool = var_91_bool == 0; //@nz
			if(var_92_bool != 0) {
				goto Label_3440;
			}
			ResetAAS();
			var_58_int = var_58_int + (int)1;
			goto Label_3378;

		}
	}
Label_3440:
	ResetAAS();
	return 14;
	
}


func_4389(var_476_string, var_477_int)
{
	var_479_bool = var_477_int == (int)2;
	if(var_479_bool != 0) {
		var_476_string = "fire";
		return 0;
	EMIT "GOTO 0x1131";
	}
	var_481_bool = var_477_int == (int)1;
	if(var_481_bool != 0) {
		var_476_string = "bullet";
		return 0;
	}
	var_476_string = "phys";
	return 0;
}


func_5418(var_110_bool)
{
	var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_bool = 0;
	var_115_bool = var_110_bool;
	if(var_115_bool != 0) {
		var_116_int = 0; var_117_int = 0;
		var_119_int = 0;
		func_4954(var_119_int);
		var_126_float = var_119_int * (int)100;
		var_117_int = (int)100 + var_126_float;
		func_5346((int)0, var_117_int);
		irand(var_113_int, (int)8);
		var_146_bool = var_113_int == (int)0;
		if(var_146_bool != 0) {
			var_147_int = 0; var_148_string = "";
			func_5593(var_147_int, "lemon");
			AddItem(var_114_bool, var_147_int, (int)0, (int)1);
		} else {
			var_152_bool = var_113_int == (int)1;
			if(var_152_bool != 0) {
				var_153_int = 0; var_154_string = "";
				func_5593(var_153_int, "rusk");
				AddItem(var_114_bool, var_153_int, (int)0, (int)1);
				goto Label_5506;
			}
			var_158_bool = var_113_int == (int)2;
			if(var_158_bool != 0) {
				var_159_int = 0; var_160_string = "";
				func_5593(var_159_int, "hook");
				AddItem(var_114_bool, var_159_int, (int)0, (int)1);
				goto Label_5506;
			}
			var_164_bool = var_113_int == (int)4;
			if(var_164_bool != 0) {
				var_165_int = 0; var_166_string = "";
				func_5593(var_165_int, "syringe");
				AddItem(var_114_bool, var_165_int, (int)0, (int)1);
				goto Label_5506;
			}
			var_170_bool = var_113_int == (int)5;
			if(var_170_bool != 0) {
				var_171_int = 0; var_172_string = "";
				func_5593(var_171_int, "watch");
				AddItem(var_114_bool, var_171_int, (int)0, (int)1);
				goto Label_5506;
			}
			var_176_bool = var_113_int == (int)6;
			if(var_176_bool == 0) goto Label_5506;
			var_177_int = 0; var_178_string = "";
			func_5593(var_177_int, "razor");
			AddItem(var_114_bool, var_177_int, (int)0, (int)1);
	}
		var_181_int = 0; var_182_int = 0;
		var_184_int = 0;
		func_4954(var_184_int);
		var_186_float = var_184_int * (int)50;
		var_182_int = (int)50 + var_186_float;
		func_5346((int)0, var_182_int);
		irand(var_113_int, (int)7);
		var_189_bool = var_113_int == (int)0;
		if(var_189_bool != 0) {
			var_190_int = 0; var_191_string = "";
			func_5593(var_190_int, "beads");
			AddItem(var_114_bool, var_190_int, (int)0, (int)1);
			goto Label_5592;
		}
		var_195_bool = var_113_int == (int)1;
		if(var_195_bool != 0) {
			var_196_int = 0; var_197_string = "";
			func_5593(var_196_int, "bracelet");
			AddItem(var_114_bool, var_196_int, (int)0, (int)1);
			goto Label_5592;
		}
		var_201_bool = var_113_int == (int)2;
		if(var_201_bool != 0) {
			var_202_int = 0; var_203_string = "";
			func_5593(var_202_int, "ear_ring");
			AddItem(var_114_bool, var_202_int, (int)0, (int)1);
			goto Label_5592;
		}
		var_207_bool = var_113_int == (int)3;
		if(var_207_bool != 0) {
			var_208_int = 0; var_209_string = "";
			func_5593(var_208_int, "gold_ring");
			AddItem(var_114_bool, var_208_int, (int)0, (int)1);
			goto Label_5592;
		}
		var_213_bool = var_113_int == (int)4;
		if(var_213_bool != 0) {
			var_214_int = 0; var_215_string = "";
			func_5593(var_214_int, "silver_ring");
			AddItem(var_114_bool, var_214_int, (int)0, (int)1);
			goto Label_5592;
		}
		var_219_bool = var_113_int == (int)5;
		if(var_219_bool == 0) goto Label_5592;
		var_220_int = 0; var_221_string = "";
		func_5593(var_220_int, "flower");
		AddItem(var_114_bool, var_220_int, (int)0, (int)1);
	}
Label_5506:
	goto Label_5592;
	
Label_5592:
	return 4;
	
}


func_4908(var_486_float, var_487_float, var_488_float)
{
	var_491_bool = var_487_float < var_488_float;
	if(var_491_bool != 0) {
		var_487_float = var_486_float;
	} else {
		var_488_float = var_486_float;
	}
	return 0;
	
}


func_4403(var_51_cvector, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	GetPosition(var_55_cvector);
	@@var_52_object:GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
	return 4;
}


func_4915(var_496_float, var_497_float, var_498_float, var_499_float)
{
	var_500_bool = var_497_float < var_498_float;
	if(var_500_bool != 0) {
		var_498_float = var_496_float;
		return 0;
	}
	var_501_bool = var_497_float > var_499_float;
	if(var_501_bool != 0) {
		var_499_float = var_496_float;
		return 0;
	}
	var_497_float = var_496_float;
	return 0;
}


func_5946(var_20_int)
{
	var_20_int = 0;
	return 0;
}


func_4410(var_74_float, var_75_object)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	GetPosition(var_79_cvector);
	@@var_75_object:GetPosition(var_80_cvector);
	var_81_cvector = var_80_cvector - var_79_cvector;
	var_74_float = var_81_cvector | var_81_cvector;
	return 6;
}


func_5949()
{
	return 0;
}


func_4926(var_503_object)
{
	var_504_object = Obj(); var_505_object = Obj();
	CreateObjectVector(var_505_object);
	var_505_object = var_503_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5951(var_47_int, var_48_string, var_49_object)
{
	var_51_bool = var_48_string == "killme";
	if(var_51_bool != 0) {
		var_52_int = 0; var_53_object = Obj();
		var_49_object = var_53_object;
		func_5973(var_52_int, var_53_object);
		var_52_int = var_47_int;
		return 0;
	}
	var_47_int = 0;
	return 0;
}


func_3904(var_539_bool, var_540_float)
{
	var_541_float = 0; var_542_bool = 0; var_543_float = 0; var_544_bool = 0;
	rand(var_543_float);
	var_545_bool = var_543_float < var_540_float;
	if(var_545_bool != 0) {

	Label_3909:
		IsAnimationPlaying(var_544_bool);
		var_546_bool = var_544_bool == 0; //@nz
		if(var_546_bool != 0) {
		} else {
			var_547_bool = 0;
			func_4002(var_547_bool);
			if(var_547_bool != 0) {
				var_539_bool = 1;
				sync();
				goto Label_3909;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_4106(var_544_bool);
	}
	goto Label_3929;
	
Label_3929:
	var_539_bool = 0;
	return 4;
	
}


func_4418(var_101_bool, var_102_object)
{
	var_103_bool = 0; var_104_bool = 0;
	IsPlayerActor(var_102_object, var_104_bool);
	var_104_bool = var_101_bool;
	return 2;
}


func_4932(var_133_int, var_134_string)
{
	var_135_int = 0; var_136_int = 0;
	GetVariable(var_134_string, var_136_int);
	var_136_int = var_133_int;
	return 2;
}


func_4423(var_52_bool, var_53_object, var_54_string)
{
	var_55_bool = 0; var_56_bool = 0;
	var_59_bool = IsFuncExist(var_53_object, "HasProperty", (int)2);
	var_60_bool = var_59_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_52_bool = 0;
		return 2;
	}
	@@var_53_object:HasProperty(var_54_string, var_56_bool);
	var_56_bool = var_52_bool;
	return 2;
}


func_4937(var_504_float)
{
	var_505_object = Obj(); var_506_object = Obj();
	CreateFloatVector(var_506_object);
	@@var_506_object:add(var_504_float);
	var_508_bool = var_504_float < (int)0;
	if(var_508_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_506_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5963(var_95_string, var_96_object)
{
	var_98_bool = var_95_string == "killme";
	if(var_98_bool != 0) {
		var_99_object = Obj();
		var_96_object = var_99_object;
		func_5991(var_99_object);
		return 0;
	}
	return 0;
}


func_4435(var_448_float, var_449_object, var_450_float, var_451_int)
{
	var_455_int = 0; var_456_string = ""; var_457_int = 0; var_458_float = 0; var_459_float = 0; var_460_float = 0; var_461_int = 0; var_462_string = ""; var_463_int = 0; var_464_float = 0; var_465_float = 0; var_466_float = 0;
	var_467_bool = 0; var_468_object = Obj(); var_469_string = "";
	var_449_object = var_468_object;
	func_4423(var_467_bool, var_468_object, "health");
	var_470_bool = var_467_bool == 0; //@nz
	if(var_470_bool != 0) {
		var_448_float = 0.0;
		return 12;
	}
	var_471_bool = 0; var_472_object = Obj(); var_473_string = "";
	var_449_object = var_472_object;
	func_4423(var_471_bool, var_472_object, "armor");
	var_474_bool = var_471_bool == 0; //@nz
	if(var_474_bool != 0) {
		var_461_int = 0;
	} else {
			@@var_449_object:GetProperty("armor", var_461_int);
	}
	var_476_string = ""; var_477_int = 0;
	var_451_int = var_477_int;
	func_4389(var_476_string, var_477_int);
	var_462_string = "armor_" + var_476_string;
	var_482_bool = 0; var_483_object = Obj(); var_484_string = "";
	var_449_object = var_483_object;
	var_462_string = var_484_string;
	func_4423(var_482_bool, var_483_object, var_484_string);
	var_485_bool = var_482_bool == 0; //@nz
	if(var_485_bool != 0) {
		var_463_int = 0;
	} else {
		@@var_449_object:GetProperty(var_462_string, var_463_int);

	}
	var_486_float = 0; var_487_float = 0; var_488_float = 0;
	var_489_int = var_461_int + var_463_int;
	var_487_float = var_489_int / (float)100.0;
	func_4908(var_486_float, var_487_float, (float)1);
	var_486_float = var_464_float;
	@@var_449_object:GetProperty("health", var_465_float);
	var_494_int = (int)1 - var_464_float;
	var_466_float = var_450_float * var_494_int;
	var_496_float = 0; var_497_float = 0; var_498_float = 0; var_499_float = 0;
	var_497_float = var_465_float - var_466_float;
	func_4915(var_496_float, var_497_float, (float)0, (float)1);
	@@var_449_object:SetProperty("health", var_496_float);
	var_502_bool = 0; var_503_object = Obj();
	var_449_object = var_503_object;
	func_4418(var_502_bool, var_503_object);
	if(var_502_bool != 0) {
		var_504_float = 0;
		var_504_float = -var_466_float;
		func_4937(var_504_float);
	}
	var_466_float = var_448_float;
	return 12;
	
}


func_5973(var_52_int, var_53_object)
{
	var_54_bool = 0; var_55_object = Obj();
	var_53_object = var_55_object;
	func_4549(var_54_bool, var_55_object);
	var_88_bool = var_54_bool == 0; //@nz
	if(var_88_bool != 0) {
		var_52_int = 0;
		return 0;
	}
	var_89_bool = 0; var_90_object = Obj();
	var_53_object = var_90_object;
	func_6251(var_90_object);
	if(var_89_bool != 0) {
		var_52_int = 2;
	} else {
		var_52_int = 0;
	}
	return 0;
	
}


func_4954(var_119_int)
{
	var_120_float = 0; var_121_float = 0;
	GetGameTime(var_121_float);
	var_123_int = 0;
	var_123_int = var_121_float / (int)24;
	var_119_int = (int)1 + var_123_int;
	return 2;
}


func_3931(var_0_object, var_336_bool, var_337_float)
{
	var_338_bool = 0; var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_float = 0; var_343_bool = 0; var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_float = 0;
	
Label_3932:
	IsAnimationPlaying(var_343_bool);
	var_348_bool = var_343_bool == 0; //@nz
	if(var_348_bool != 0) {
	} else {
		var_349_bool = 0;
		func_4002(var_349_bool);
		if(var_349_bool != 0) {
			var_336_bool = 1;
			return 10;
		}
		var_392_bool = 0; var_393_object = Obj();
		var_393_object = var_0_object;
		func_4549(var_392_bool, var_393_object);
		var_394_bool = var_392_bool == 0; //@nz
		if(var_394_bool != 0) {
			var_336_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_344_cvector);
		GetPFPosition(var_345_cvector);
		var_346_cvector = var_344_cvector - var_345_cvector;
		var_347_float = var_346_cvector | var_346_cvector;
		var_395_float = var_337_float * var_337_float;
		var_396_bool = var_347_float < var_395_float;
		if(var_396_bool != 0) {
			var_397_bool = 0; var_398_float = 0;
			var_337_float = var_398_float;
			func_3767(var_346_cvector, var_347_float, var_397_bool, var_398_float);
			var_336_bool = 1;
			sync();
			goto Label_3932;
		}
		return 10;
	}
	func_4106(var_347_float);
	var_336_bool = 0;
	return 10;
	
}


func_4963(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_23_bool = var_22_bool;
	if(var_23_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_5991(var_99_object)
{
	var_100_object = Obj();
	var_99_object = var_100_object;
	func_5821(var_100_object);
	return 0;
}


func_4972()
{
	var_409_object = Obj(); var_410_object = Obj();
	GetScene(var_410_object);
	var_412_object = Obj();
	func_4892(var_412_object);
	BroadcastMessage("battle", var_412_object, var_410_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5997(var_20_int)
{
	var_20_int = 2;
	return 0;
}


func_6000(var_26_object)
{
	var_27_object = Obj();
	var_26_object = var_27_object;
	func_6211(var_27_object);
	return 0;
}


func_3443(var_91_bool)
{
	var_91_bool = 1;
	return 0;
}


func_3445()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6006()
{
	return 0;
}


func_4983(var_24_object)
{
	@@var_24_object:SetReturnValue((int)100);
	return 0;
}


func_6007(var_23_bool)
{
	var_23_bool = 0;
	return 0;
}


func_6010()
{
	return 0;
}


func_3450(var_101_object)
{
	var_108_object = Obj(); var_109_bool = 0; var_110_float = 0;
	var_101_object = var_108_object;
	func_3464(var_104_int, var_105_bool, var_106_float, var_107_int, var_101_object, var_108_object, (bool)1, (float)180.0);
	return 0;
}


func_4988(var_312_bool)
{
	var_314_int = 0; var_315_string = "";
	func_4932(var_314_int, "branch");
	var_317_bool = var_314_int == (int)0;
	if(var_317_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_6012(var_30_bool)
{
	var_30_bool = 0;
	return 0;
}


func_6015()
{
	return 0;
}


func_6017(var_34_bool)
{
	var_34_bool = 0;
	return 0;
}


func_3458(var_445_float)
{
	var_445_float = 0.05000000074505806;
	return 0;
}


func_6020()
{
	return 0;
}


func_3461(var_452_int)
{
	var_452_int = 0;
	return 0;
}


func_3974(var_0_object, var_351_bool)
{
	var_352_cvector = CVector(0,0,0); var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); var_355_float = 0; var_356_float = 0; var_357_cvector = CVector(0,0,0); var_358_cvector = CVector(0,0,0); var_359_cvector = CVector(0,0,0); var_360_float = 0; var_361_float = 0;
	var_362_bool = 0; var_363_object = Obj();
	var_363_object = var_0_object;
	func_4549(var_362_bool, var_363_object);
	var_364_bool = var_362_bool == 0; //@nz
	if(var_364_bool != 0) {
		var_351_bool = 0;
		return 10;
	}
	var_365_bool = 0;
	func_4063(var_361_float, var_365_bool);
	if(var_365_bool != 0) {
		@@@var_0_object:GetPFPosition(var_357_cvector);
		GetPFPosition(var_358_cvector);
		var_359_cvector = var_357_cvector - var_358_cvector;
		var_360_float = var_359_cvector | var_359_cvector;
		@@@var_0_object:GetAttackDistance(var_361_float);
		var_361_float = var_361_float + (int)50;
		var_367_float = var_361_float * var_361_float;
		var_351_bool = var_360_float <= var_367_float;
		return 10;
	}
	var_351_bool = 0;
	return 10;
}


func_6022(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_5000(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_4932(var_323_int, "branch");
	var_326_bool = var_323_int == (int)1;
	if(var_326_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_3464(var_0_object, var_3_string, var_5_bool, var_108_object, var_109_bool, var_110_float, var_185_bool, var_277_bool)
{
	var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0; var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_bool = 0; var_132_float = 0;
	func_3693(var_130_cvector, var_131_bool, var_132_float);
	var_5_bool = 0;
	var_157_bool = IsFuncExist(var_108_object, "@GetAttackDistance", (int)1);
	if(var_157_bool != 0) {
		@@var_108_object:GetAttackDistance(var_122_float);
		var_122_float = var_122_float + (int)50;
	} else {
							var_110_float = var_122_float;
	}
	var_160_bool = var_122_float >= (int)150;
	if(var_160_bool != 0) {
		var_122_float = 150;
	}
	var_3_string = false;
	var_0_object = var_108_object;
	IsPlayerActor(var_0_object, var_125_bool);
	var_161_bool = var_125_bool;
	if(var_161_bool != 0) {
		PlayGlobalMusic("attack");
		var_163_object = Obj();
		func_4892(var_163_object);
		SendPlayerEnemy(var_108_object, var_163_object);
	}
	var_166_bool = var_109_bool;
	if(var_166_bool != 0) {
		var_126_bool = 0;
	} else {
						var_126_bool = 1;

	}
	var_127_float = (float)400.0 + var_122_float;
	
Label_3504:
	var_168_bool = 0;
	var_168_bool = 0;
	var_169_bool = 0; var_170_object = Obj();
	var_170_object = var_0_object;
	func_4549(var_169_bool, var_170_object);
	if(var_169_bool != 0) {
		var_171_bool = var_3_string == 0; //@nz
		if(var_171_bool != 0) {
			var_168_bool = 1;
		}
	}
	if(var_168_bool != 0) {
		func_4106(var_132_float);
		@@@var_0_object:GetPFPosition(var_123_cvector);
		GetPFPosition(var_124_cvector);
		var_128_cvector = var_123_cvector - var_124_cvector;
		var_129_float = var_128_cvector | var_128_cvector;
		var_177_float = var_127_float * var_127_float;
		var_178_bool = var_129_float >= var_177_float;
		if(var_178_bool != 0) {
			var_179_bool = 0; var_180_object = Obj(); var_181_float = 0; var_182_float = 0; var_183_bool = 0; var_184_bool = 0;
			var_180_object = var_0_object;
			var_122_float = var_181_float;
			TaskCall(6);
			func_4133(var_187_bool, var_179_bool, var_180_object, var_181_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_262_bool = var_185_bool == 0; //@nz
			if(var_262_bool != 0) {
			} else {
				var_126_bool = 0;
		} else {
				var_268_float = var_110_float * var_110_float;
				var_269_bool = var_129_float >= var_268_float;
				if(var_269_bool != 0) {
					@@@var_0_object:GetPFPosition(var_130_cvector);
					CanReachByPF(var_131_bool, var_130_cvector);
					var_270_bool = var_131_bool == 0; //@nz
					if(var_270_bool != 0) {
						var_271_bool = 0; var_272_object = Obj(); var_273_float = 0; var_274_float = 0; var_275_bool = 0; var_276_bool = 0;
						var_272_object = var_0_object;
						var_122_float = var_273_float;
						TaskCall(6);
						func_4133(var_279_bool, var_271_bool, var_272_object, var_273_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_280_bool = var_277_bool == 0; //@nz
						if(var_280_bool != 0) {
							goto Label_3676;
						}
						var_126_bool = 0;
						goto Label_3504;
					}
					var_281_bool = var_126_bool == 0; //@nz
					if(var_281_bool != 0) {
						var_282_object = Obj();
						var_282_object = var_0_object;
						func_4699(var_282_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_4106(var_132_float);
						StopAsync();
						var_126_bool = 1;
						var_293_bool = 0; var_294_object = Obj();
						var_294_object = var_0_object;
						func_4549(var_293_bool, var_294_object);
						var_295_bool = var_293_bool == 0; //@nz
						if(var_295_bool != 0) {
							goto Label_3676;
						}
					}
					rand(var_132_float);
					var_296_bool = 0;
					var_298_bool = var_132_float < (float)0.25;
					if(var_298_bool != 1) {
						var_299_bool = 0;
						func_4063((bool)1, var_299_bool);
						if(var_299_bool != 1) {
							var_296_bool = 0;
						}
					}
					if(var_296_bool != 0) {
						Face(var_0_object);
						func_4113();
						PlayAnimation("all", "attack_stay");
						var_336_bool = 0; var_337_float = 0;
						var_110_float = var_337_float;
						func_3931(var_132_float, var_336_bool, var_337_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_4106(var_132_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_558_bool = 0;
						func_4063(var_132_float, var_558_bool);
						var_559_bool = var_558_bool == 0; //@nz
						if(var_559_bool == 0) goto Label_3666;
						var_560_bool = 0; var_561_object = Obj();
						var_561_object = var_0_object;
						func_4549(var_560_bool, var_561_object);
						var_562_bool = var_560_bool == 0; //@nz
						if(var_562_bool != 0) {
							goto Label_3676;
						}
						@@@var_0_object:GetPFPosition(var_123_cvector);
						GetPFPosition(var_124_cvector);
						var_128_cvector = var_123_cvector - var_124_cvector;
						var_129_float = var_128_cvector | var_128_cvector;
						var_563_float = var_110_float * var_110_float;
						var_564_bool = var_129_float < var_563_float;
						if(var_564_bool == 0) goto Label_3666;
						var_565_bool = 0; var_566_float = 0;
						var_110_float = var_566_float;
						func_3767(var_131_bool, var_132_float, var_565_bool, var_566_float);
						var_567_bool = var_565_bool == 0; //@nz
						if(var_567_bool == 0) goto Label_3666;
						goto Label_3676;
				}
					var_568_bool = 0; var_569_float = 0;
					var_110_float = var_569_float;
					func_3767(var_131_bool, var_132_float, var_568_bool, var_569_float);
					var_570_bool = var_568_bool == 0; //@nz
					if(var_570_bool != 0) {
						goto Label_3676;
					}
					var_126_bool = 1;

				}
			Label_3666:
				goto Label_3675;
		}
		Label_3675:
			goto Label_3504;

		}
	}
Label_3676:
	WaitForAnimEnd();
	var_263_string = var_3_string;
	if(var_263_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_266_bool = var_125_bool;
	if(var_266_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_6025()
{
	return 0;
}


func_6027(var_450_object)
{
	var_451_object = Obj(); var_452_object = Obj(); var_453_object = Obj(); var_454_object = Obj(); var_455_int = 0; var_456_int = 0; var_457_int = 0; var_458_int = 0; var_459_object = Obj(); var_460_int = 0; var_461_bool = 0; var_462_int = 0; var_463_float = 0; var_464_int = 0; var_465_object = Obj(); var_466_int = 0; var_467_int = 0; var_468_int = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); var_480_object = Obj(); var_481_int = 0; var_482_int = 0; var_483_int = 0; var_484_int = 0; var_485_object = Obj(); var_486_int = 0; var_487_bool = 0; var_488_int = 0; var_489_float = 0; var_490_int = 0; var_491_object = Obj(); var_492_int = 0; var_493_int = 0; var_494_int = 0; var_495_int = 0; var_496_int = 0; var_497_int = 0; var_498_int = 0; var_499_int = 0; var_500_int = 0; var_501_int = 0; var_502_object = Obj();
	func_4926(Obj());
	var_503_object = var_477_object;
	CreateIntVector(var_478_object);
	CreateIntVector(var_479_object);
	CreateIntVector(var_480_object);
	@@var_450_object:GetSubContainerCount(var_481_int);
	var_482_int = 0;
	
Label_6041:
	var_506_bool = var_482_int < var_481_int;
	if(var_506_bool != 0) {
		@@var_450_object:GetItemCount(var_483_int, var_482_int);
		var_484_int = 0;

	Label_6046:
		var_507_bool = var_484_int < var_483_int;
		if(var_507_bool != 0) {
			@@var_450_object:GetItem(var_485_object, var_484_int, var_482_int);
			@@var_485_object:GetItemID(var_486_int);
			HasInvItemProperty(var_487_bool, var_486_int, "HasDurability");
			var_509_bool = var_487_bool;
			if(var_509_bool != 0) {
				@@var_485_object:HasProperty(var_487_bool, "durability");
				var_511_bool = var_487_bool;
				if(var_511_bool != 0) {
					@@var_485_object:GetProperty(var_488_int, "durability");
					var_513_bool = 0;
					var_513_bool = 0;
					var_515_bool = var_488_int < (int)100;
					if(var_515_bool != 0) {
						var_516_bool = 0; var_517_object = Obj();
						var_485_object = var_517_object;
						func_6174(var_516_bool, var_517_object);
						if(var_516_bool != 0) {
							var_513_bool = 1;
						}
					}
					if(var_513_bool != 0) {
						@@var_477_object:add(var_485_object);
						@@var_478_object:add(var_482_int);
						@@var_479_object:add(var_484_int);
						var_523_int = 0; var_524_object = Obj(); var_525_int = 0;
						var_485_object = var_524_object;
						func_5269(var_523_int, var_524_object, (int)0);
						var_523_int = var_489_float;
						var_567_float = (float)2.0 * var_488_int;
						var_569_float = var_567_float / (float)100.0;
						var_570_int = (float)1.0 + var_569_float;
						var_571_float = var_489_float * var_570_int;
						var_573_int = (int)100 - var_488_int;
						var_574_float = var_571_float * var_573_int;
						var_490_int = var_574_float / (int)300;
						var_576_bool = var_490_int == 0; //@nz
						if(var_576_bool != 0) {
							var_490_int = 1;
						}
						@@var_480_object:add(var_490_int);
					}
				}
			}
			var_485_object = 0;
			var_484_int = var_484_int + (int)1;
			goto Label_6046;
		}
		var_482_int = var_482_int + (int)1;
		goto Label_6041;
	}
	CreateIntVector(var_491_object);
	ChooseItem(var_477_object, var_491_object, var_480_object, "repair.xml");
	@@var_491_object:size(var_492_int);
	var_580_bool = var_492_int == 0; //@nz
	if(var_580_bool != 0) {
		return 52;
	}
	var_494_int = 0;
	
Label_6125:
	var_581_bool = var_494_int < var_492_int;
	if(var_581_bool != 0) {
		@@var_491_object:get(var_495_int, var_494_int);
		@@var_480_object:get(var_496_int, var_495_int);
		(int)0 = (int)0 + var_496_int;
		var_494_int = var_494_int + (int)1;
		goto Label_6125;
	}
	@@var_450_object:GetProperty("money", var_497_int);
	var_497_int = var_497_int - var_493_int;
	var_585_bool = var_497_int < (int)0;
	if(var_585_bool != 0) {
		return 52;
	}
	@@var_450_object:SetProperty("money", var_497_int);
	var_498_int = 0;
	
Label_6147:
	var_587_bool = var_498_int < var_492_int;
	if(var_587_bool != 0) {
		@@var_491_object:get(var_499_int, var_498_int);
		@@var_478_object:get(var_500_int, var_499_int);
		@@var_479_object:get(var_501_int, var_499_int);
		@@var_450_object:GetItem(var_502_object, var_501_int, var_500_int);
		@@var_502_object:SetProperty("durability", (int)100);
		@@var_450_object:SetItem(var_502_object, (int)1, var_501_int, var_500_int);
		var_502_object = 0;
		var_498_int = var_498_int + (int)1;
		goto Label_6147;
	}
	return 52;
}
EMIT "Stack[-12] = 0";
EMIT "Stack[-23] = 0";
EMIT "Stack[-24] = 0";
EMIT "Stack[-25] = 0";
EMIT "Stack[-26] = 0";


func_5012(var_131_bool)
{
	var_133_int = 0; var_134_string = "";
	func_4932(var_133_int, "branch");
	var_138_bool = var_133_int == (int)2;
	if(var_138_bool != 0) {
		var_131_bool = 1;
		return 0;
	}
	var_131_bool = 0;
	return 0;
}


func_4508(var_45_bool, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	@@var_46_object:IsDead(var_48_bool);
	var_48_bool = var_45_bool;
	return 2;
}


func_5024(var_178_bool, var_179_object)
{
	var_180_bool = 0; var_181_object = Obj();
	var_179_object = var_181_object;
	func_5154(var_181_object);
	if(var_180_bool != 0) {
		var_178_bool = 1;
		return 0;
	}
	var_178_bool = 0;
	return 0;
}


func_4513(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj();
	var_40_bool = var_35_object == 0; //@ne
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_41_bool = 0;
	var_41_bool = 0;
	var_44_bool = IsFuncExist(var_35_object, "IsDead", (int)1);
	if(var_44_bool != 0) {
		var_45_bool = 0; var_46_object = Obj();
		var_35_object = var_46_object;
		func_4508(var_45_bool, var_46_object);
		if(var_45_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	GetScene(var_38_object);
	var_49_bool = var_38_object == 0; //@ne
	if(var_49_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	@@var_35_object:GetScene(var_39_object);
	var_50_bool = var_38_object != var_39_object;
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_34_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4002(var_349_bool)
{
	var_350_bool = 0;
	var_350_bool = 0;
	var_351_bool = 0;
	func_3974(var_350_bool, var_351_bool);
	if(var_351_bool != 0) {
		var_368_bool = 0;
		func_4018(var_349_bool, var_350_bool, var_368_bool);
		if(var_368_bool != 0) {
			var_350_bool = 1;
		}
	}
	if(var_350_bool != 0) {
		var_349_bool = 1;
		return 0;
	}
	var_349_bool = 0;
	return 0;
}


func_5034(var_400_bool, var_401_object)
{
	var_402_bool = 0; var_403_object = Obj();
	var_401_object = var_403_object;
	func_5161(var_403_object);
	if(var_402_bool != 0) {
		var_400_bool = 1;
		return 0;
	}
	var_400_bool = 0;
	return 0;
}


func_4018(var_0_object, var_4_bool, var_368_bool)
{
	var_369_object = Obj(); var_370_bool = 0; var_371_float = 0; var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_object = Obj(); var_375_bool = 0; var_376_float = 0; var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0);
	GetScene(var_374_object);
	var_375_bool = 0;
	
Label_4022:
	var_379_cvector = CVector(0,0,0); var_380_object = Obj();
	var_380_object = var_0_object;
	func_4403(var_379_cvector, var_380_object);
	var_385_int = -var_379_cvector;
	FindDirLength(var_376_float, var_385_int, var_4_bool);
	var_386_bool = var_376_float < var_4_bool;
	if(var_386_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_377_cvector);
		GetPFPosition(var_378_cvector);
		WaitForAnimEnd();
		func_4106(var_378_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_375_bool = 1;
		var_390_bool = 0;
		func_3974(var_378_cvector, var_390_bool);
		var_391_bool = var_390_bool == 0; //@nz
		if(var_391_bool != 0) {
			goto Label_4060;
		}
		goto Label_4022;
	}
Label_4060:
	var_375_bool = var_368_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_5044(var_159_bool, var_160_object)
{
	var_161_bool = 0; var_162_object = Obj();
	var_160_object = var_162_object;
	func_5164(var_162_object);
	if(var_161_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_5054(var_171_bool, var_172_object)
{
	var_173_bool = 0; var_174_object = Obj();
	var_172_object = var_174_object;
	func_5171(var_174_object);
	if(var_173_bool != 0) {
		var_171_bool = 1;
		return 0;
	}
	var_171_bool = 0;
	return 0;
}


func_4549(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0;
	var_34_bool = 0; var_35_object = Obj();
	var_31_object = var_35_object;
	func_4513(var_34_bool, var_35_object);
	var_51_bool = var_34_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_30_bool = 0;
		return 2;
	}
	var_52_bool = 0; var_53_object = Obj(); var_54_string = "";
	var_31_object = var_53_object;
	func_4423(var_52_bool, var_53_object, "noaccess");
	var_61_bool = var_52_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_30_bool = 1;
		return 2;
	}
	@@var_31_object:GetProperty("noaccess", var_33_int);
	var_30_bool = var_33_int == (int)0;
	return 2;
}


func_5064(var_357_bool, var_358_object)
{
	var_359_bool = 0; var_360_object = Obj();
	var_358_object = var_360_object;
	func_5178(var_360_object);
	if(var_359_bool != 0) {
		var_357_bool = 1;
		return 0;
	}
	var_357_bool = 0;
	return 0;
}


func_5074(var_369_bool, var_370_object)
{
	var_371_bool = 0; var_372_object = Obj();
	var_370_object = var_372_object;
	func_5185(var_372_object);
	if(var_371_bool != 0) {
		var_369_bool = 1;
		return 0;
	}
	var_369_bool = 0;
	return 0;
}


func_5593(var_137_int, var_138_string)
{
	var_139_int = 0; var_140_int = 0;
	GetInvItemByName(var_140_int, var_138_string);
	var_140_int = var_137_int;
	return 2;
}


func_5084(var_378_bool, var_379_object)
{
	var_380_bool = 0; var_381_object = Obj();
	var_379_object = var_381_object;
	func_5192(var_381_object);
	if(var_380_bool != 0) {
		var_378_bool = 1;
		return 0;
	}
	var_378_bool = 0;
	return 0;
}


func_4573(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = "";
	var_49_bool = var_34_object == 0; //@ne
	if(var_49_bool != 0) {
		return 14;
	}
	IsDead(var_42_bool);
	var_50_bool = var_42_bool;
	if(var_50_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_43_int);
	var_52_bool = var_43_int < (int)0;
	if(var_52_bool != 0) {
		return 14;
	}
	@@var_34_object:GetPosition(var_44_cvector);
	GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_55_float = var_53_float * var_54_float;
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	var_58_float = var_56_float * var_57_float;
	var_59_int = var_55_float + var_58_float;
	var_61_bool = var_59_int >= (int)0;
	if(var_61_bool != 0) {
		var_48_string = "fhit";
	} else {
		var_48_string = "bhit";
	}
	var_64_int = var_48_string + "1";
	var_66_int = var_48_string + "2";
	FadeSecondaryAnimation("hit_react", var_64_int, var_66_int, (int)-10);
	return 14;
	
}


func_5598(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	TaskCall(2);
	func_2675(var_19_object);
	TaskReturn();
	return 0;
}


func_4063(var_0_object, var_299_bool)
{
	var_300_bool = 0; var_301_bool = 0;
	var_304_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_304_bool != 0) {
		@@@var_0_object:IsAttacking(var_301_bool);
		var_301_bool = var_299_bool;
		return 2;
	}
	var_299_bool = 0;
	return 2;
}


func_3042(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3178(var_16_object, var_17_bool);
	return 0;
}


func_5094(var_218_bool, var_219_object)
{
	var_220_bool = 0; var_221_object = Obj();
	var_219_object = var_221_object;
	func_5199(var_221_object);
	if(var_220_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_3050(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3185(var_21_bool, var_22_int);
	return 0;
}


func_4074(var_2_object, var_5_bool)
{
	var_416_float = 0; var_417_int = 0; var_418_float = 0; var_419_int = 0;
	var_420_bool = var_2_object == 0; //@nz
	if(var_420_bool != 0) {
		return 4;
	}
	var_421_bool = var_5_bool;
	if(var_421_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_424_bool = var_5_bool > (int)0;
		if(var_424_bool != 0) {
			return 4;
		}
	}
	rand(var_418_float);
	var_425_float = 0;
	func_4124(var_425_float);
	var_426_bool = var_418_float < var_425_float;
	if(var_426_bool != 0) {
		irand(var_419_int, var_2_object);
		var_419_int = var_419_int + (int)1;
		var_429_int = "attack" + var_419_int;
		Speak(var_429_int);
		var_430_int = 0;
		func_4122(var_430_int);
		var_5_bool = var_430_int;
	}
	return 4;
}


func_5104(var_224_bool, var_225_object)
{
	var_226_bool = 0; var_227_object = Obj();
	var_225_object = var_227_object;
	func_5206(var_227_object);
	if(var_226_bool != 0) {
		var_224_bool = 1;
		return 0;
	}
	var_224_bool = 0;
	return 0;
}


func_5114(var_190_bool, var_191_object)
{
	var_192_bool = 0; var_193_object = Obj();
	var_191_object = var_193_object;
	func_5213(var_193_object);
	if(var_192_bool != 0) {
		var_190_bool = 1;
		return 0;
	}
	var_190_bool = 0;
	return 0;
}


func_3067(var_2_object, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_18_object = var_24_object;
	func_4549(var_23_bool, var_24_object);
	var_57_bool = var_23_bool == 0; //@nz
	if(var_57_bool != 0) {
		return 4;
	}
	var_58_object = var_2_object;
	if(var_58_object != 0) {
		return 4;
	}
	IsPlayerActor(var_18_object, var_21_bool);
	var_59_bool = var_21_bool == 0; //@nz
	if(var_59_bool != 0) {
		return 4;
	}
	var_60_int = 0; var_61_object = Obj();
	var_18_object = var_61_object;
	func_5795(var_60_int, var_61_object);
	var_60_int = var_22_int;
	var_74_bool = var_22_int > (int)0;
	if(var_74_bool != 0) {
		var_76_bool = var_22_int > (int)1;
		if(var_76_bool != 0) {
			func_3050(var_22_int);
		}
		var_78_object = Obj();
		var_18_object = var_78_object;
		func_5805(var_78_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


