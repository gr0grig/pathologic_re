// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,irand/2,ResetAAS/0,Sleep/1,KillTimer/1,IsPlayerActor/2,SetTimer/2,Sleep/2,StopGroup0/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectVector/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,HasInvItemProperty/3,GetInvItemProperty/3,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,CreateIntVector/1,ChooseItem/4,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|A:SetReturnValue|W:branch|A:GetItemID|W:Price|W:BarterPrice|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:Received steal|A:GetSubContainerCount|A:GetItemCount|A:GetItem|W:HasDurability|W:durability|W:repair.xml|W:money|A:SetItem|W:Weapon|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
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
// @TASK_3: vars=bool,bool params=0
// @EVENT_0: op=0xb3a vars=object
// @EVENT_17: op=0xb4e vars=object
// @EVENT_30: op=0xb66 vars=object,object,bool
// @EVENT_40: op=0xb82 vars=object
// @EVENT_42: op=0xb96 vars=object,string
// @EVENT_26: op=0xbbb vars=string
// @EVENT_1: op=0xbc9 vars=object
// @EVENT_3: op=0xbdf vars=object
// @EVENT_7: op=0xbe8 vars=int
// @EVENT_6: op=0xbf4 vars=
// @EVENT_41: op=0xc08 vars=object
// @TASK_4: vars=object params=1
// @EVENT_0: op=0xc6a vars=object
// @EVENT_17: op=0xc7e vars=object
// @EVENT_30: op=0xc96 vars=object,object,bool
// @EVENT_40: op=0xcb2 vars=object
// @EVENT_42: op=0xcc6 vars=object,string
// @EVENT_26: op=0xceb vars=string
// @EVENT_41: op=0xd04 vars=object
// @EVENT_7: op=0xd0d vars=int
// @EVENT_6: op=0xd30 vars=
// @EVENT_1: op=0xd37 vars=object
// @TASK_5: vars=object,int,int,bool,float,int params=1
// @TASK_6: vars=bool,object,bool params=6
// @EVENT_6: op=0xfe9 vars=
// @EVENT_7: op=0x1021 vars=int
// @EVENT_1: op=0x103c vars=object
// @EVENT_2: op=0x104b vars=object
// @EVENT_10: op=0x10d1 vars=object
// @EVENT_41: op=0x10dc vars=object
// @STANDALONE_EVENT_16: op=0x15d5 vars=object,string
// @STANDALONE_EVENT_41: op=0x15e2 vars=object
// @STANDALONE_EVENT_22: op=0x15e8 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x15f0 vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x259,0x26f,0xa73,0xa90,0xaef,0xb09,0xb0b,0xb0d,0xbbb,0xbc9,0xbdf,0xbe8,0xbf4,0xc08,0xceb,0xd04,0xd30,0xd37,0xd45,0xd4d,0xd50,0xfe1,0xfe9,0x1021,0x103c,0x104b,0x10bf,0x10d1,0x10dc,0x10e5,0x10f0,0x12f7,0x12fe,0x130f,0x1318,0x1322,0x1366,0x136b,0x1377,0x1383,0x138f,0x1399,0x13a3,0x13ad,0x13b7,0x13c1,0x13cb,0x13d5,0x13df,0x13e9,0x13f3,0x13fd,0x1407,0x1411,0x1418,0x141b,0x1422,0x1429,0x1430,0x1437,0x143e,0x1445,0x144c,0x1453,0x145a,0x1461,0x14c4,0x15cd,0x15e2,0x15e8,0x15f0,0x15fa,0x161a,0x164a,0x1650,0x167a,0x1683,0x168b,0x1695,0x16e8,0x16ef,0x1712,0x1715,0x172c,0x1732,0x1735,0x1737,0x173a,0x174b,0x1751,0x1754,0x1756,0x1759,0x17fd,0x1850,0x185a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	if((int)1 != 0) {
		func_4791();
		var_22_bool = var_18_bool == (int)40087;
		if(var_22_bool != 0) {
			var_23_object = Obj(); var_24_object = Obj();
			var_23_object = var_1_object;
			var_24_object = var_0_object;
			func_4966(var_24_object);
		}
		var_27_bool = var_18_bool == (int)45510;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_4966(var_29_object);
		}
		var_31_bool = var_18_bool == (int)45517;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_4966(var_33_object);
		}
		var_35_bool = var_18_bool == (int)40085;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4966(var_37_object);
		}
		var_39_bool = var_18_bool == (int)40086;
		if(var_39_bool != 0) {
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4966(var_41_object);
		}
		var_43_bool = var_17_object == (int)45493;
		if(var_43_bool != 0) {
			var_44_bool = 0; var_45_object = Obj();
			var_45_object = var_1_object;
			func_4995(var_45_object);
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
				func_5027(var_72_bool, var_73_object);
				var_83_bool = var_72_bool == 0; //@nz
				if(var_83_bool != 0) {
					var_84_bool = 0; var_85_object = Obj();
					var_85_object = var_1_object;
					func_5037(var_84_bool, var_85_object);
					var_90_bool = var_84_bool == 0; //@nz
					if(var_90_bool != 0) {
						var_71_bool = 1;
					}
				}
				if(var_71_bool != 0) {
					var_91_bool = 0; var_92_object = Obj();
					var_92_object = var_1_object;
					func_5007(var_91_bool, var_92_object);
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
				func_5097(var_103_bool, var_104_object);
				if(var_103_bool != 1) {
					var_109_bool = 0; var_110_object = Obj();
					var_110_object = var_1_object;
					func_5107(var_109_bool, var_110_object);
					if(var_109_bool != 1) {
						var_102_bool = 0;
					}
				}
				if(var_102_bool != 1) {
					var_115_bool = 0; var_116_object = Obj();
					var_116_object = var_1_object;
					func_5117(var_115_bool, var_116_object);
					if(var_115_bool != 1) {
						var_101_bool = 0;
					}
				}
				if(var_101_bool != 1) {
					var_121_bool = 0; var_122_object = Obj();
					var_122_object = var_1_object;
					func_5127(var_121_bool, var_122_object);
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
				func_5077(var_131_bool, var_132_object);
				if(var_131_bool != 1) {
					var_137_bool = 0; var_138_object = Obj();
					var_138_object = var_1_object;
					func_5087(var_137_bool, var_138_object);
					if(var_137_bool != 1) {
						var_130_bool = 0;
					}
				}
				if(var_130_bool != 0) {
					@@@var_0_object:AddReply((int)543063, (int)45520, (int)45518);
				}
				var_146_bool = 0; var_147_object = Obj();
				var_147_object = var_1_object;
				func_5007(var_146_bool, var_147_object);
				if(var_146_bool != 0) {
					@@@var_0_object:AddReply((int)538210, (int)-1, (int)40087);
				}
				var_151_bool = 0; var_152_object = Obj();
				var_152_object = var_1_object;
				func_5007(var_151_bool, var_152_object);
				if(var_151_bool != 0) {
					@@@var_0_object:AddReply((int)543042, (int)-1, (int)45494);
				}
				var_156_bool = 0; var_157_object = Obj();
				var_157_object = var_1_object;
				func_5007(var_156_bool, var_157_object);
				if(var_156_bool != 0) {
					@@@var_0_object:AddReply((int)543043, (int)-1, (int)45495);
				}
				var_161_bool = 0;
				var_161_bool = 1;
				var_162_bool = 0;
				var_162_bool = 1;
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_5077(var_163_bool, var_164_object);
				if(var_163_bool != 1) {
					var_165_bool = 0; var_166_object = Obj();
					var_166_object = var_1_object;
					func_5087(var_165_bool, var_166_object);
					if(var_165_bool != 1) {
						var_162_bool = 0;
					}
				}
				if(var_162_bool != 1) {
					var_167_bool = 0; var_168_object = Obj();
					var_168_object = var_1_object;
					func_5097(var_167_bool, var_168_object);
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
				func_5077(var_173_bool, var_174_object);
				if(var_173_bool != 1) {
					var_175_bool = 0; var_176_object = Obj();
					var_176_object = var_1_object;
					func_5087(var_175_bool, var_176_object);
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
				func_5107(var_182_bool, var_183_object);
				if(var_182_bool != 1) {
					var_184_bool = 0; var_185_object = Obj();
					var_185_object = var_1_object;
					func_5117(var_184_bool, var_185_object);
					if(var_184_bool != 1) {
						var_181_bool = 0;
					}
				}
				if(var_181_bool != 1) {
					var_186_bool = 0; var_187_object = Obj();
					var_187_object = var_1_object;
					func_5127(var_186_bool, var_187_object);
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
				func_5097(var_194_bool, var_195_object);
				if(var_194_bool != 1) {
					var_196_bool = 0; var_197_object = Obj();
					var_197_object = var_1_object;
					func_5107(var_196_bool, var_197_object);
					if(var_196_bool != 1) {
						var_193_bool = 0;
					}
				}
				if(var_193_bool != 1) {
					var_198_bool = 0; var_199_object = Obj();
					var_199_object = var_1_object;
					func_5117(var_198_bool, var_199_object);
					if(var_198_bool != 1) {
						var_192_bool = 0;
					}
				}
				if(var_192_bool != 1) {
					var_200_bool = 0; var_201_object = Obj();
					var_201_object = var_1_object;
					func_5127(var_200_bool, var_201_object);
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
			func_4971(var_208_object);
			if(var_207_bool != 0) {
				@@@var_0_object:AddReply((int)538208, (int)-1, (int)40085);
			}
			var_216_bool = 0; var_217_object = Obj();
			var_217_object = var_1_object;
			func_4983(var_217_object);
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)538209, (int)-1, (int)40086);
			}
			var_225_bool = 0;
			var_225_bool = 0;
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_4971(var_227_object);
			if(var_226_bool != 0) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_5027(var_228_bool, var_229_object);
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
			func_4971(var_235_object);
			if(var_234_bool != 0) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_5027(var_236_bool, var_237_object);
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
			func_4971(var_243_object);
			if(var_242_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_5037(var_244_bool, var_245_object);
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
			func_4971(var_251_object);
			if(var_250_bool != 0) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_5047(var_252_bool, var_253_object);
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
			func_4971(var_263_object);
			if(var_262_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_5057(var_264_bool, var_265_object);
				if(var_264_bool != 0) {
					var_261_bool = 1;
				}
			}
			if(var_261_bool != 0) {
				@@@var_0_object:AddReply((int)538272, (int)40155, (int)40154);
			}
			var_273_bool = 0; var_274_object = Obj();
			var_274_object = var_1_object;
			func_5067(var_273_bool, var_274_object);
			if(var_273_bool != 0) {
				@@@var_0_object:AddReply((int)538291, (int)40174, (int)40173);
			}
			var_282_bool = 0;
			var_282_bool = 0;
			var_283_bool = 0; var_284_object = Obj();
			var_284_object = var_1_object;
			func_4971(var_284_object);
			if(var_283_bool != 0) {
				var_285_bool = 0; var_286_object = Obj();
				var_286_object = var_1_object;
				func_5077(var_285_bool, var_286_object);
				if(var_285_bool != 0) {
					var_282_bool = 1;
				}
			}
			if(var_282_bool != 0) {
				@@@var_0_object:AddReply((int)538308, (int)40192, (int)40191);
			}
			var_290_bool = 0; var_291_object = Obj();
			var_291_object = var_1_object;
			func_5087(var_290_bool, var_291_object);
			if(var_290_bool != 0) {
				@@@var_0_object:AddReply((int)538322, (int)40206, (int)40205);
			}
			var_295_bool = 0; var_296_object = Obj();
			var_296_object = var_1_object;
			func_5017(var_295_bool, var_296_object);
			if(var_295_bool != 0) {
				@@@var_0_object:AddReply((int)538332, (int)40216, (int)40215);
			}
			var_302_bool = 0;
			var_302_bool = 0;
			var_303_bool = 0; var_304_object = Obj();
			var_304_object = var_1_object;
			func_4971(var_304_object);
			if(var_303_bool != 0) {
				var_305_bool = 0; var_306_object = Obj();
				var_306_object = var_1_object;
				func_5097(var_305_bool, var_306_object);
				if(var_305_bool != 0) {
					var_302_bool = 1;
				}
			}
			if(var_302_bool != 0) {
				@@@var_0_object:AddReply((int)538347, (int)40233, (int)40232);
			}
			var_310_bool = 0; var_311_object = Obj();
			var_311_object = var_1_object;
			func_5107(var_310_bool, var_311_object);
			if(var_310_bool != 0) {
				@@@var_0_object:AddReply((int)538364, (int)40250, (int)40249);
			}
			var_315_bool = 0;
			var_315_bool = 0;
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_object;
			func_4971(var_317_object);
			if(var_316_bool != 0) {
				var_318_bool = 0; var_319_object = Obj();
				var_319_object = var_1_object;
				func_5117(var_318_bool, var_319_object);
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
			func_4971(var_325_object);
			if(var_324_bool != 0) {
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_5117(var_326_bool, var_327_object);
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
			func_4971(var_658_object);
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
		func_6164(var_979_bool);
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


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5906(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_24_object = Obj();
		var_17_bool = var_24_object;
		func_5909(var_24_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_5915();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5906(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_3067(var_19_int);
		}
		var_28_object = Obj();
		var_17_bool = var_28_object;
		func_5909(var_28_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_object = Obj();
	var_17_bool = var_20_object;
	func_5712(var_20_object);
	var_29_int = 0; var_30_object = Obj();
	var_17_bool = var_30_object;
	func_5771(var_29_int, var_30_object);
	var_29_int = var_19_int;
	var_66_bool = var_19_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_19_int > (int)1;
		if(var_68_bool != 0) {
			func_3067(var_19_int);
		}
		var_71_object = Obj();
		var_17_bool = var_71_object;
		func_5781(var_71_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0;
	var_17_bool = var_23_object;
	var_18_object = var_24_object;
	var_19_bool = var_25_bool;
	func_6224(var_22_bool, var_23_object, var_24_object, var_25_bool);
	if(var_22_bool != 0) {
		var_84_int = 0; var_85_object = Obj(); var_86_bool = 0;
		var_17_bool = var_85_object;
		var_19_bool = var_86_bool;
		func_5864(var_85_object, var_86_bool);
		var_84_int = var_21_int;
		var_118_bool = var_21_int > (int)0;
		if(var_118_bool != 0) {
			var_120_bool = var_21_int > (int)1;
			if(var_120_bool != 0) {
				func_3067(var_21_int);
			}
			var_123_object = Obj();
			var_17_bool = var_123_object;
			func_5871(var_123_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5916(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_63_bool = var_19_int > (int)0;
	if(var_63_bool != 0) {
		var_65_bool = var_19_int > (int)1;
		if(var_65_bool != 0) {
			func_3067(var_19_int);
		}
		var_68_object = Obj();
		var_17_bool = var_68_object;
		func_5932(var_68_object);
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_17_object = var_22_object;
	var_18_bool = var_23_string;
	func_5626(var_21_bool, var_22_object, var_23_string);
	if(var_21_bool != 0) {
		func_3067(var_20_int);
		var_51_object = Obj(); var_52_string = "";
		var_17_object = var_51_object;
		var_18_bool = var_52_string;
		func_5658(var_51_object, var_52_string);
	} else {
		var_127_int = 0; var_128_string = ""; var_129_object = Obj();
		var_18_bool = var_128_string;
		var_17_object = var_129_object;
		func_5938(var_129_object);
		var_127_int = var_20_int;
		var_131_bool = var_20_int > (int)0;
		if(var_131_bool == 0) goto Label_3002;
		var_133_bool = var_20_int > (int)1;
		if(var_133_bool != 0) {
			func_3067(var_20_int);
		}
		var_134_string = ""; var_135_object = Obj();
		var_18_bool = var_134_string;
		var_17_object = var_135_object;
		func_5941();
	}
Label_3002:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = "";
	var_17_bool = var_19_string;
	func_5725(var_18_bool, var_19_string);
	if(var_18_bool != 0) {
		func_3067(var_17_bool);
		var_29_string = "";
		var_17_bool = var_29_string;
		func_5741(var_29_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = var_0_object;
	if(var_18_object != 0) {
		return 0;
	}
	var_19_bool = 0; var_20_object = Obj();
	var_17_bool = var_20_object;
	func_5683(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_3067(var_17_bool);
		var_33_object = Obj();
		var_17_bool = var_33_object;
		func_5706(var_33_object);
	} else {
		var_35_object = Obj();
		var_17_bool = var_35_object;
		func_3089(var_17_bool, var_35_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = var_0_object;
	if(var_18_object != 0) {
		return 0;
	}
	var_19_object = Obj();
	var_17_bool = var_19_object;
	func_3089(var_17_bool, var_19_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_19_bool = var_17_bool != (int)110;
	if(var_19_bool != 0) {
		return 0;
	}
	var_1_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3067(var_16_bool);
	func_5915();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3067(var_17_bool);
	var_17_bool = Obj();
	func_5602();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5906(var_21_object);
	var_20_int = var_19_int;
	var_23_bool = var_19_int > (int)0;
	if(var_23_bool != 0) {
		var_25_bool = var_19_int > (int)1;
		if(var_25_bool != 0) {
			func_3321();
		}
		var_28_object = Obj();
		var_17_bool = var_28_object;
		func_5909(var_28_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_object = Obj();
	var_17_bool = var_20_object;
	func_5712(var_20_object);
	var_29_int = 0; var_30_object = Obj();
	var_17_bool = var_30_object;
	func_5771(var_29_int, var_30_object);
	var_29_int = var_19_int;
	var_66_bool = var_19_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_19_int > (int)1;
		if(var_68_bool != 0) {
			func_3321();
		}
		var_71_object = Obj();
		var_17_bool = var_71_object;
		func_5781(var_71_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0;
	var_17_bool = var_23_object;
	var_18_object = var_24_object;
	var_19_bool = var_25_bool;
	func_6224(var_22_bool, var_23_object, var_24_object, var_25_bool);
	if(var_22_bool != 0) {
		var_84_int = 0; var_85_object = Obj(); var_86_bool = 0;
		var_17_bool = var_85_object;
		var_19_bool = var_86_bool;
		func_5864(var_85_object, var_86_bool);
		var_84_int = var_21_int;
		var_118_bool = var_21_int > (int)0;
		if(var_118_bool != 0) {
			var_120_bool = var_21_int > (int)1;
			if(var_120_bool != 0) {
				func_3321();
			}
			var_123_object = Obj();
			var_17_bool = var_123_object;
			func_5871(var_123_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_int = 0; var_21_object = Obj();
	var_17_bool = var_21_object;
	func_5916(var_20_int, var_21_object);
	var_20_int = var_19_int;
	var_63_bool = var_19_int > (int)0;
	if(var_63_bool != 0) {
		var_65_bool = var_19_int > (int)1;
		if(var_65_bool != 0) {
			func_3321();
		}
		var_68_object = Obj();
		var_17_bool = var_68_object;
		func_5932(var_68_object);
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_17_object = var_22_object;
	var_18_bool = var_23_string;
	func_5626(var_21_bool, var_22_object, var_23_string);
	if(var_21_bool != 0) {
		func_3321();
		var_51_object = Obj(); var_52_string = "";
		var_17_object = var_51_object;
		var_18_bool = var_52_string;
		func_5658(var_51_object, var_52_string);
	} else {
		var_127_int = 0; var_128_string = ""; var_129_object = Obj();
		var_18_bool = var_128_string;
		var_17_object = var_129_object;
		func_5938(var_129_object);
		var_127_int = var_20_int;
		var_131_bool = var_20_int > (int)0;
		if(var_131_bool == 0) goto Label_3306;
		var_133_bool = var_20_int > (int)1;
		if(var_133_bool != 0) {
			func_3321();
		}
		var_134_string = ""; var_135_object = Obj();
		var_18_bool = var_134_string;
		var_17_object = var_135_object;
		func_5941();
	}
Label_3306:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = "";
	var_17_bool = var_19_string;
	func_5725(var_18_bool, var_19_string);
	if(var_18_bool != 0) {
		func_3321();
		var_29_string = "";
		var_17_bool = var_29_string;
		func_5741(var_29_string);
	}
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3321();
	var_17_bool = Obj();
	func_5602();
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_23_bool = var_17_bool != (int)111;
	if(var_23_bool != 0) {
		return 4;
	}
	var_24_bool = 0; var_25_object = Obj();
	var_25_object = var_0_object;
	func_4496(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		func_3321();
		return 4;
	}
	GetDirection(var_20_cvector);
	var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	var_62_object = var_0_object;
	func_4350(var_61_cvector, var_62_object);
	var_61_cvector = var_21_cvector;
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	var_20_cvector = var_68_cvector;
	var_21_cvector = var_69_cvector;
	func_4898(var_67_float, var_68_cvector, var_69_cvector);
	var_92_bool = var_67_float < (float)0.4999999701976776;
	if(var_92_bool != 0) {
		var_93_object = Obj();
		var_93_object = var_0_object;
		func_4646(var_93_object);
	}
	return 4;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3321();
	func_5915();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_bool = var_19_object;
	func_5683(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_3321();
		var_32_object = Obj();
		var_17_bool = var_32_object;
		func_5706(var_32_object);
	}
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_4143(var_16_bool);
	func_5915();
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_19_bool = var_17_int == (int)1;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_20_object = var_1_object;
		func_4946(var_20_object);
	} else {
		var_25_int = 0;
		var_17_int = var_25_int;
		func_4287(var_16_bool, var_17_int, var_25_int);
	}
	return 0;
	
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
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
		func_4780(var_21_object);
	}
	return 0;
}


task_6_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
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


task_6_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object);
	return 0;
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_4143(var_17_object);
	var_17_object = Obj();
	func_5602();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_5581(var_18_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_4564(var_21_object, var_22_int, var_23_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	var_17_object = var_23_object;
	var_18_int = var_24_int;
	var_19_float = var_25_float;
	var_21_cvector = var_26_cvector;
	var_22_cvector = var_27_cvector;
	func_4632(var_25_float, var_26_cvector, var_27_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0;
	var_0_object = false;
	SensePlayerOnly((bool)1);
	func_6166();
	func_2865();
	
Label_2842:
	irand(var_19_int, (int)2);
	var_143_bool = var_19_int == (int)0;
	if(var_143_bool != 0) {
		var_0_object = true;
		func_6192();
		var_0_object = false;
		ResetAAS();
	} else {
		irand(var_20_int, (int)4);
		var_163_int = var_20_int + (int)1;
		Sleep(var_163_int);
	}
	goto Label_2842;
	
}
EMIT "Return(); Pop(4)";


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_4662(var_53_bool, var_54_object, (float)70.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_6158(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_6156(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_6160(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_6162(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_5224(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_object = Obj(); var_115_object = Obj();
	var_43_object = var_114_object;
	var_49_object = var_115_object;
	TaskCall(1);
	func_74(var_116_object, var_117_object, var_118_string, var_119_bool, var_114_object, var_115_object);
	TaskReturn();
	@@var_49_object:IsDialogEnd(var_52_bool);
	
Label_56:
	var_429_bool = var_52_bool == 0; //@nz
	if(var_429_bool != 0) {
		sync();
		@@var_49_object:IsDialogEnd(var_52_bool);
		goto Label_56;
	}
	var_43_object = Obj();
	func_4731();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5127(var_198_bool, var_199_object)
{
	var_200_bool = 0; var_201_object = Obj();
	var_199_object = var_201_object;
	func_5217(var_201_object);
	if(var_200_bool != 0) {
		var_198_bool = 1;
		return 0;
	}
	var_198_bool = 0;
	return 0;
}


func_6156(var_102_int)
{
	var_102_int = 515568;
	return 0;
}


func_6158(var_101_int)
{
	var_101_int = 503353;
	return 0;
}


func_6160(var_103_string)
{
	var_103_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_3089(var_1_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0;
	var_24_object = var_1_object;
	if(var_24_object != 0) {
		return 4;
	}
	IsPlayerActor(var_19_object, var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		return 4;
	}
	var_26_int = 0; var_27_object = Obj();
	var_19_object = var_27_object;
	func_5754(var_27_object);
	var_26_int = var_23_int;
	var_30_bool = var_23_int > (int)0;
	if(var_30_bool != 0) {
		var_32_bool = var_23_int > (int)1;
		if(var_32_bool != 0) {
			func_3067(var_23_int);
		}
		var_35_object = Obj();
		var_19_object = var_35_object;
		func_5763(var_35_object);
		var_1_object = true;
		SetTimer((int)110, (float)5.0);
	}
	return 4;
}


func_6162(var_104_string)
{
	var_104_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_5137(var_170_bool)
{
	var_172_int = 0;
	func_4937(var_172_int);
	var_170_bool = var_172_int <= (int)6;
	return 0;
}


func_6164(var_96_bool)
{
	var_96_bool = 0;
	return 0;
}


func_6166()
{
	var_22_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_23_bool = 0;
	func_5401((bool)1);
	return 0;
}


func_4632(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	GetScene(var_30_object);
	AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	var_34_object = Obj();
	var_23_object = var_34_object;
	func_4520(var_34_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5144(var_392_bool)
{
	var_392_bool = 0;
	return 0;
}


func_5658(var_51_object, var_52_string)
{
	var_54_bool = var_52_string == "unholster";
	if(var_54_bool != 0) {
		var_51_object = Obj();
		func_5946();
	} else {
		var_57_bool = var_52_string == "player_shot";
		if(var_57_bool != 0) {
			var_58_object = Obj();
			var_51_object = var_58_object;
			func_5963(var_58_object);
			goto Label_5682;
		}
		var_125_bool = var_52_string == "battle";
		if(var_125_bool == 0) goto Label_5682;
		var_51_object = Obj();
		func_5972();
	}
Label_5682:
	return 0;
	
}


func_5147(var_151_bool)
{
	var_153_int = 0;
	func_4937(var_153_int);
	var_151_bool = var_153_int == (int)1;
	return 0;
}


func_6174(var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	var_32_bool = GlobalVars[0];
	if(var_32_bool != 0) {
		IsOverrideActive(var_31_bool);
		var_33_bool = var_31_bool == 0; //@nz
		if(var_33_bool != 0) {
			var_34_object = Obj();
			var_29_object = var_34_object;
			func_5316(var_34_object);
		}
		return 2;
	EMIT "GOTO 0x182f";
	}
	var_41_object = Obj();
	var_29_object = var_41_object;
	func_6141(var_31_bool, var_41_object);
	return 2;
}


func_5154(var_163_bool)
{
	var_165_int = 0;
	func_4937(var_165_int);
	var_163_bool = var_165_int == (int)2;
	return 0;
}


func_4646(var_93_object)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0);
	@@var_93_object:GetPosition(var_97_cvector);
	GetPosition(var_98_cvector);
	var_99_cvector = var_97_cvector - var_98_cvector;
	var_100_float = GetByIndex(var_99_cvector, 0);
	var_101_float = GetByIndex(var_99_cvector, 2);
	RotateAsync(var_100_float, var_101_float);
	return 6;
}


func_5161(var_349_bool)
{
	var_351_int = 0;
	func_4937(var_351_int);
	var_349_bool = var_351_int == (int)3;
	return 0;
}


func_4143(var_2_object)
{
	KillTimer((int)1);
	var_19_object = var_2_object;
	if(var_19_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_4309(var_17_object);
	return 0;
}


func_6192()
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_int = 0; var_148_bool = 0; var_149_int = 0;
	var_147_int = 0;
	
Label_6194:
	var_151_string = ""; var_152_int = 0;
	var_147_int = var_152_int;
	func_5979(var_151_string, var_152_int);
	HasAnimation(var_148_bool, "all", var_151_string);
	var_156_bool = var_148_bool == 0; //@nz
	if(var_156_bool != 0) {
	} else {
		var_147_int = var_147_int + (int)1;
		goto Label_6194;
	}
	irand(var_149_int, var_147_int);
	var_158_string = ""; var_159_int = 0;
	var_149_int = var_159_int;
	func_5979(var_158_string, var_159_int);
	PlayAnimation("all", var_158_string);
	WaitForAnimEnd();
	return 6;
	
}


func_4657(var_137_bool)
{
	var_138_bool = 0; var_139_bool = 0;
	IsLoaded(var_139_bool);
	var_139_bool = var_137_bool;
	return 2;
}


func_5168(var_361_bool)
{
	var_363_int = 0;
	func_4937(var_363_int);
	var_361_bool = var_363_int == (int)5;
	return 0;
}


func_5683(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	var_22_bool = 0;
	var_22_bool = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_19_object = var_24_object;
	func_5943(var_24_object);
	if(var_23_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_19_object = var_26_object;
		func_4365(var_25_bool, var_26_object);
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


func_3122(var_0_object, var_60_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0;
	var_0_object = var_60_object;
	func_3173(var_67_bool);
	GetDirection(var_65_cvector);
	var_75_cvector = CVector(0,0,0); var_76_object = Obj();
	var_76_object = var_0_object;
	func_4350(var_75_cvector, var_76_object);
	var_75_cvector = var_66_cvector;
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	var_65_cvector = var_82_cvector;
	var_66_cvector = var_83_cvector;
	func_4898(var_81_float, var_82_cvector, var_83_cvector);
	var_106_bool = var_81_float < (int)0;
	if(var_106_bool != 0) {
		var_107_object = Obj();
		var_107_object = var_0_object;
		func_4646(var_107_object);
		var_67_bool = 1;
	} else {
		Sleep((float)1.5, var_67_bool);
	}
	var_116_bool = var_67_bool;
	if(var_116_bool != 0) {
		var_117_object = Obj();
		var_117_object = var_0_object;
		func_4646(var_117_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_4662(var_53_bool, var_54_object, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0;
	@@var_54_object:GetPosition(var_66_cvector);
	@@var_54_object:GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	var_74_float = var_74_float + var_65_float;
	SetByIndex(var_66_cvector, 1) = var_74_float;
	GetPosition(var_67_cvector);
	GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_65_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_int = var_68_cvector | var_68_cvector;
	var_78_float = sqrt(var_77_int);
	var_68_cvector = var_68_cvector / var_78_float;
	var_69_cvector = -var_68_cvector;
	var_79_float = var_68_cvector * var_55_float;
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_69_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4845(var_80_cvector, var_81_cvector);
	var_89_float = var_80_cvector * (int)25;
	var_90_int = var_79_float + var_89_float;
	var_70_cvector = var_90_int - CVector(0.0, 10.0, 0.0);
	var_71_cvector = var_67_cvector + var_70_cvector;
	IsOverrideActive(var_72_bool);
	var_92_bool = var_72_bool;
	if(var_92_bool != 0) {
		var_53_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_71_cvector, var_69_cvector, (bool)1);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_94_float, var_95_float);
	var_96_bool = 0;
	func_6164(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_4725;
		LookAsyncCamera("head");
	}
Label_4725:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_5175(var_370_bool)
{
	var_372_int = 0;
	func_4937(var_372_int);
	var_370_bool = var_372_int == (int)6;
	return 0;
}


func_3640(var_1_object, var_2_object, var_4_bool)
{
	var_102_bool = 0; var_103_bool = 0; var_104_cvector = CVector(0,0,0); var_105_bool = 0; var_106_bool = 0; var_107_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_3642:
	var_111_int = var_1_object + (int)1;
	var_112_int = "attack_begin" + var_111_int;
	HasAnimation(var_105_bool, "all", var_112_int);
	var_113_bool = var_105_bool == 0; //@nz
	if(var_113_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_3642;
	}
	var_2_object = 0;
	
Label_3656:
	var_116_int = var_2_object + (int)1;
	var_117_int = "attack" + var_116_int;
	IsExisting3DSound(var_106_bool, var_117_int);
	var_118_bool = var_106_bool == 0; //@nz
	if(var_118_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_3656;

	}
	GetAnimationOffset(var_107_cvector, "all", "bjump");
	var_121_float = GetByIndex(var_107_cvector, 2);
	var_4_bool = -var_121_float;
	return 6;
	
}


func_5182(var_210_bool)
{
	var_212_int = 0;
	func_4937(var_212_int);
	var_210_bool = var_212_int == (int)7;
	return 0;
}


func_5189(var_216_bool)
{
	var_218_int = 0;
	func_4937(var_218_int);
	var_216_bool = var_218_int == (int)8;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_114_object, var_115_object)
{
	var_0_object = var_115_object;
	var_1_object = var_114_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_121_bool = 0; var_122_object = Obj();
		var_122_object = var_1_object;
		func_4995(var_122_object);
		if(var_121_bool != 0) {
			var_129_string = "";
			func_601(var_115_object, "Neutral");
			@@@var_0_object:SetMessage((int)543041);
			@@@var_0_object:ClearReplies();
			var_147_bool = 0;
			var_147_bool = 0;
			var_148_bool = 0;
			var_148_bool = 0;
			var_149_bool = 0; var_150_object = Obj();
			var_150_object = var_1_object;
			func_5027(var_149_bool, var_150_object);
			var_160_bool = var_149_bool == 0; //@nz
			if(var_160_bool != 0) {
				var_161_bool = 0; var_162_object = Obj();
				var_162_object = var_1_object;
				func_5037(var_161_bool, var_162_object);
				var_167_bool = var_161_bool == 0; //@nz
				if(var_167_bool != 0) {
					var_148_bool = 1;
				}
			}
			if(var_148_bool != 0) {
				var_168_bool = 0; var_169_object = Obj();
				var_169_object = var_1_object;
				func_5007(var_168_bool, var_169_object);
				if(var_168_bool != 0) {
					var_147_bool = 1;
				}
			}
			if(var_147_bool != 0) {
				@@@var_0_object:AddReply((int)543044, (int)45498, (int)45496);
			}
			var_177_bool = 0;
			var_177_bool = 1;
			var_178_bool = 0;
			var_178_bool = 1;
			var_179_bool = 0;
			var_179_bool = 1;
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_5097(var_180_bool, var_181_object);
			if(var_180_bool != 1) {
				var_186_bool = 0; var_187_object = Obj();
				var_187_object = var_1_object;
				func_5107(var_186_bool, var_187_object);
				if(var_186_bool != 1) {
					var_179_bool = 0;
				}
			}
			if(var_179_bool != 1) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_5117(var_192_bool, var_193_object);
				if(var_192_bool != 1) {
					var_178_bool = 0;
				}
			}
			if(var_178_bool != 1) {
				var_198_bool = 0; var_199_object = Obj();
				var_199_object = var_1_object;
				func_5127(var_198_bool, var_199_object);
				if(var_198_bool != 1) {
					var_177_bool = 0;
				}
			}
			if(var_177_bool != 0) {
				@@@var_0_object:AddReply((int)543057, (int)45513, (int)45512);
			}
			var_207_bool = 0;
			var_207_bool = 1;
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_5077(var_208_bool, var_209_object);
			if(var_208_bool != 1) {
				var_214_bool = 0; var_215_object = Obj();
				var_215_object = var_1_object;
				func_5087(var_214_bool, var_215_object);
				if(var_214_bool != 1) {
					var_207_bool = 0;
				}
			}
			if(var_207_bool != 0) {
				@@@var_0_object:AddReply((int)543063, (int)45520, (int)45518);
			}
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_5007(var_223_bool, var_224_object);
			if(var_223_bool != 0) {
				@@@var_0_object:AddReply((int)538210, (int)-1, (int)40087);
			}
			var_228_bool = 0; var_229_object = Obj();
			var_229_object = var_1_object;
			func_5007(var_228_bool, var_229_object);
			if(var_228_bool != 0) {
				@@@var_0_object:AddReply((int)543042, (int)-1, (int)45494);
			}
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_5007(var_233_bool, var_234_object);
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)543043, (int)-1, (int)45495);
			}
			var_238_bool = 0;
			var_238_bool = 1;
			var_239_bool = 0;
			var_239_bool = 1;
			var_240_bool = 0; var_241_object = Obj();
			var_241_object = var_1_object;
			func_5077(var_240_bool, var_241_object);
			if(var_240_bool != 1) {
				var_242_bool = 0; var_243_object = Obj();
				var_243_object = var_1_object;
				func_5087(var_242_bool, var_243_object);
				if(var_242_bool != 1) {
					var_239_bool = 0;
				}
			}
			if(var_239_bool != 1) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_5097(var_244_bool, var_245_object);
				if(var_244_bool != 1) {
					var_238_bool = 0;
				}
			}
			if(var_238_bool != 0) {
				@@@var_0_object:AddReply((int)543055, (int)-1, (int)45510);
			}
			var_249_bool = 0;
			var_249_bool = 1;
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_5077(var_250_bool, var_251_object);
			if(var_250_bool != 1) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_5087(var_252_bool, var_253_object);
				if(var_252_bool != 1) {
					var_249_bool = 0;
				}
			}
			if(var_249_bool != 0) {
				@@@var_0_object:AddReply((int)543056, (int)-1, (int)45511);
			}
			var_257_bool = 0;
			var_257_bool = 1;
			var_258_bool = 0;
			var_258_bool = 1;
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_5107(var_259_bool, var_260_object);
			if(var_259_bool != 1) {
				var_261_bool = 0; var_262_object = Obj();
				var_262_object = var_1_object;
				func_5117(var_261_bool, var_262_object);
				if(var_261_bool != 1) {
					var_258_bool = 0;
				}
			}
			if(var_258_bool != 1) {
				var_263_bool = 0; var_264_object = Obj();
				var_264_object = var_1_object;
				func_5127(var_263_bool, var_264_object);
				if(var_263_bool != 1) {
					var_257_bool = 0;
				}
			}
			if(var_257_bool != 0) {
				@@@var_0_object:AddReply((int)543062, (int)-1, (int)45517);
			}
			var_268_bool = 0;
			var_268_bool = 1;
			var_269_bool = 0;
			var_269_bool = 1;
			var_270_bool = 0;
			var_270_bool = 1;
			var_271_bool = 0; var_272_object = Obj();
			var_272_object = var_1_object;
			func_5097(var_271_bool, var_272_object);
			if(var_271_bool != 1) {
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_5107(var_273_bool, var_274_object);
				if(var_273_bool != 1) {
					var_270_bool = 0;
				}
			}
			if(var_270_bool != 1) {
				var_275_bool = 0; var_276_object = Obj();
				var_276_object = var_1_object;
				func_5117(var_275_bool, var_276_object);
				if(var_275_bool != 1) {
					var_269_bool = 0;
				}
			}
			if(var_269_bool != 1) {
				var_277_bool = 0; var_278_object = Obj();
				var_278_object = var_1_object;
				func_5127(var_277_bool, var_278_object);
				if(var_277_bool != 1) {
					var_268_bool = 0;
				}
			}
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)543064, (int)-1, (int)45519);
			}
		} else {
				var_300_string = "";
				func_601(var_115_object, "Neutral");
				@@@var_0_object:SetMessage((int)538207);
				@@@var_0_object:ClearReplies();
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_4971(var_303_object);
				if(var_302_bool != 0) {
					@@@var_0_object:AddReply((int)538208, (int)-1, (int)40085);
				}
				var_311_bool = 0; var_312_object = Obj();
				var_312_object = var_1_object;
				func_4983(var_312_object);
				if(var_311_bool != 0) {
					@@@var_0_object:AddReply((int)538209, (int)-1, (int)40086);
				}
				var_320_bool = 0;
				var_320_bool = 0;
				var_321_bool = 0; var_322_object = Obj();
				var_322_object = var_1_object;
				func_4971(var_322_object);
				if(var_321_bool != 0) {
					var_323_bool = 0; var_324_object = Obj();
					var_324_object = var_1_object;
					func_5027(var_323_bool, var_324_object);
					if(var_323_bool != 0) {
						var_320_bool = 1;
					}
				}
				if(var_320_bool != 0) {
					@@@var_0_object:AddReply((int)538211, (int)40089, (int)40088);
				}
				var_328_bool = 0;
				var_328_bool = 0;
				var_329_bool = 0; var_330_object = Obj();
				var_330_object = var_1_object;
				func_4971(var_330_object);
				if(var_329_bool != 0) {
					var_331_bool = 0; var_332_object = Obj();
					var_332_object = var_1_object;
					func_5027(var_331_bool, var_332_object);
					if(var_331_bool != 0) {
						var_328_bool = 1;
					}
				}
				if(var_328_bool != 0) {
					@@@var_0_object:AddReply((int)538222, (int)40100, (int)40099);
				}
				var_336_bool = 0;
				var_336_bool = 0;
				var_337_bool = 0; var_338_object = Obj();
				var_338_object = var_1_object;
				func_4971(var_338_object);
				if(var_337_bool != 0) {
					var_339_bool = 0; var_340_object = Obj();
					var_340_object = var_1_object;
					func_5037(var_339_bool, var_340_object);
					if(var_339_bool != 0) {
						var_336_bool = 1;
					}
				}
				if(var_336_bool != 0) {
					@@@var_0_object:AddReply((int)538235, (int)40114, (int)40113);
				}
				var_344_bool = 0;
				var_344_bool = 0;
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_4971(var_346_object);
				if(var_345_bool != 0) {
					var_347_bool = 0; var_348_object = Obj();
					var_348_object = var_1_object;
					func_5047(var_347_bool, var_348_object);
					if(var_347_bool != 0) {
						var_344_bool = 1;
					}
				}
				if(var_344_bool != 0) {
					@@@var_0_object:AddReply((int)538253, (int)40135, (int)40134);
				}
				var_356_bool = 0;
				var_356_bool = 0;
				var_357_bool = 0; var_358_object = Obj();
				var_358_object = var_1_object;
				func_4971(var_358_object);
				if(var_357_bool != 0) {
					var_359_bool = 0; var_360_object = Obj();
					var_360_object = var_1_object;
					func_5057(var_359_bool, var_360_object);
					if(var_359_bool != 0) {
						var_356_bool = 1;
					}
				}
				if(var_356_bool != 0) {
					@@@var_0_object:AddReply((int)538272, (int)40155, (int)40154);
				}
				var_368_bool = 0; var_369_object = Obj();
				var_369_object = var_1_object;
				func_5067(var_368_bool, var_369_object);
				if(var_368_bool != 0) {
					@@@var_0_object:AddReply((int)538291, (int)40174, (int)40173);
				}
				var_377_bool = 0;
				var_377_bool = 0;
				var_378_bool = 0; var_379_object = Obj();
				var_379_object = var_1_object;
				func_4971(var_379_object);
				if(var_378_bool != 0) {
					var_380_bool = 0; var_381_object = Obj();
					var_381_object = var_1_object;
					func_5077(var_380_bool, var_381_object);
					if(var_380_bool != 0) {
						var_377_bool = 1;
					}
				}
				if(var_377_bool != 0) {
					@@@var_0_object:AddReply((int)538308, (int)40192, (int)40191);
				}
				var_385_bool = 0; var_386_object = Obj();
				var_386_object = var_1_object;
				func_5087(var_385_bool, var_386_object);
				if(var_385_bool != 0) {
					@@@var_0_object:AddReply((int)538322, (int)40206, (int)40205);
				}
				var_390_bool = 0; var_391_object = Obj();
				var_391_object = var_1_object;
				func_5017(var_390_bool, var_391_object);
				if(var_390_bool != 0) {
					@@@var_0_object:AddReply((int)538332, (int)40216, (int)40215);
				}
				var_397_bool = 0;
				var_397_bool = 0;
				var_398_bool = 0; var_399_object = Obj();
				var_399_object = var_1_object;
				func_4971(var_399_object);
				if(var_398_bool != 0) {
					var_400_bool = 0; var_401_object = Obj();
					var_401_object = var_1_object;
					func_5097(var_400_bool, var_401_object);
					if(var_400_bool != 0) {
						var_397_bool = 1;
					}
				}
				if(var_397_bool != 0) {
					@@@var_0_object:AddReply((int)538347, (int)40233, (int)40232);
				}
				var_405_bool = 0; var_406_object = Obj();
				var_406_object = var_1_object;
				func_5107(var_405_bool, var_406_object);
				if(var_405_bool != 0) {
					@@@var_0_object:AddReply((int)538364, (int)40250, (int)40249);
				}
				var_410_bool = 0;
				var_410_bool = 0;
				var_411_bool = 0; var_412_object = Obj();
				var_412_object = var_1_object;
				func_4971(var_412_object);
				if(var_411_bool != 0) {
					var_413_bool = 0; var_414_object = Obj();
					var_414_object = var_1_object;
					func_5117(var_413_bool, var_414_object);
					if(var_413_bool != 0) {
						var_410_bool = 1;
					}
				}
				if(var_410_bool != 0) {
					@@@var_0_object:AddReply((int)538375, (int)40262, (int)40261);
				}
				var_418_bool = 0;
				var_418_bool = 0;
				var_419_bool = 0; var_420_object = Obj();
				var_420_object = var_1_object;
				func_4971(var_420_object);
				if(var_419_bool != 0) {
					var_421_bool = 0; var_422_object = Obj();
					var_422_object = var_1_object;
					func_5117(var_421_bool, var_422_object);
					if(var_421_bool != 0) {
						var_418_bool = 1;
					}
				}
				if(var_418_bool != 0) {
					@@@var_0_object:AddReply((int)538385, (int)40272, (int)40271);
				}
				@@@var_0_object:AddReply((int)538396, (int)-1, (int)40282);
				goto Label_571;
		}
	}
Label_571:
	var_282_bool = 0;
	func_6164(var_282_bool);
	if(var_282_bool != 0) {

	Label_575:
		lshWaitForAnimEnd();
		var_283_string = var_3_string;
		if(var_283_string != 0) {
		} else {
			var_284_string = "";
			var_284_string = var_2_object;
			func_4749(var_284_string);
			goto Label_575;
	}
		PlayAnimation("all", "idle");

	Label_590:
		WaitForAnimEnd();
		var_297_string = var_3_string;
		if(var_297_string != 0) {
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


func_5706(var_32_object)
{
	var_32_object = Obj();
	func_5946();
	return 0;
}


func_6219()
{
	StopAnimation();
	return 0;
}


func_5196(var_182_bool)
{
	var_184_int = 0;
	func_4937(var_184_int);
	var_182_bool = var_184_int == (int)9;
	return 0;
}


func_6222(var_28_bool)
{
	var_28_bool = 1;
	return 0;
}


func_5712(var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_4365(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		var_25_object = Obj();
		func_4839(var_25_object);
		ReportReputationChange(var_20_object, var_25_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_6224(var_22_bool, var_23_object, var_24_object, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_bool = 0;
	var_23_object = var_27_object;
	var_24_object = var_28_object;
	var_25_bool = var_30_bool;
	func_5877(var_26_bool, var_27_object, var_28_object, (float)500.0, var_30_bool);
	var_26_bool = var_22_bool;
	return 0;
}


func_5203(var_188_bool)
{
	var_190_int = 0;
	func_4937(var_190_int);
	var_188_bool = var_190_int == (int)10;
	return 0;
}


func_601(var_2_object, var_129_string)
{
	var_130_bool = 0;
	func_6164(var_130_bool);
	var_131_bool = var_130_bool == 0; //@nz
	if(var_131_bool != 0) {
		return 0;
	}
	var_132_bool = var_129_string == var_2_object;
	if(var_132_bool != 0) {
		return 0;
	}
	var_133_string = ""; var_134_bool = 0;
	var_129_string = var_133_string;
	var_136_bool = var_129_string == "";
	if(var_136_bool != 0) {
		var_134_bool = 0;
	} else {
		var_134_bool = 1;
	}
	func_4765(var_133_string, var_134_bool);
	var_2_object = var_129_string;
	return 0;
	
}


func_6234(var_100_object)
{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_4365(var_101_bool, var_102_object);
	if(var_101_bool != 0) {
		var_105_object = Obj();
		func_4839(var_105_object);
		ReportReputationChange(var_100_object, var_105_object, (float)-0.07000000029802322, (bool)1);
		var_110_bool = 0;
		func_5401((bool)1);
	}
	func_5377();
	var_244_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_3675(var_0_object, var_403_float, var_404_int)
{
	var_405_object = Obj(); var_406_float = 0; var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_float = 0;
	var_412_float = var_403_float * (float)0.8999999761581421;
	GetVictim(var_412_float, var_408_object);
	ReportAttack(var_0_object);
	var_413_bool = var_408_object == var_0_object;
	if(var_413_bool != 0) {
		var_414_float = 0; var_415_object = Obj(); var_416_int = 0;
		var_408_object = var_415_object;
		var_404_int = var_416_int;
		func_3405(var_416_int);
		var_414_float = var_409_float;
		var_417_float = 0; var_418_object = Obj(); var_419_float = 0; var_420_int = 0;
		var_408_object = var_418_object;
		var_409_float = var_419_float;
		var_421_int = 0; var_422_object = Obj(); var_423_int = 0;
		var_408_object = var_422_object;
		var_404_int = var_423_int;
		func_3408(var_423_int);
		var_421_int = var_420_int;
		func_4382(var_417_float, var_418_object, var_419_float, var_420_int);
		var_417_float = var_410_float;
		var_482_int = 0;
		func_4058(var_482_int);
		ReportHit(var_0_object, var_482_int, var_410_float, var_409_float);
		var_483_object = Obj(); var_484_float = 0;
		var_408_object = var_483_object;
		var_410_float = var_484_float;
		func_4065();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_4185(var_0_object, var_1_object, var_177_bool, var_178_object, var_179_float, var_180_float, var_181_bool, var_182_bool)
{
	var_183_bool = 0; var_184_bool = 0; var_185_object = Obj(); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_object = Obj(); var_191_bool = 0; var_192_bool = 0; var_193_object = Obj(); var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_float = 0; var_198_object = Obj();
	var_0_object = false;
	var_1_object = var_178_object;
	var_182_bool = var_192_bool;
	
Label_4189:
	var_199_bool = 0; var_200_object = Obj();
	var_178_object = var_200_object;
	func_4325(var_199_bool, var_200_object);
	var_203_bool = var_199_bool == 0; //@nz
	if(var_203_bool != 0) {
		var_177_bool = 0;
		return 16;
	}
	@@var_178_object:GetPosition(var_194_cvector);
	GetPosition(var_195_cvector);
	var_196_cvector = var_194_cvector - var_195_cvector;
	var_197_float = var_196_cvector | var_196_cvector;
	var_204_bool = 0;
	var_204_bool = 0;
	var_206_bool = var_180_float > (int)0;
	if(var_206_bool != 0) {
		var_207_float = var_180_float * var_180_float;
		var_208_bool = var_197_float > var_207_float;
		if(var_208_bool != 0) {
			var_204_bool = 1;
		}
	}
	if(var_204_bool != 0) {
		Stop();
		var_177_bool = 0;
		return 16;
	}
	var_209_float = var_179_float * var_179_float;
	var_210_bool = var_197_float > var_209_float;
	if(var_210_bool != 0) {
		@@var_178_object:GetPFPosition(var_194_cvector);
		FindPathTo(var_198_object, var_194_cvector);
		var_211_bool = var_198_object != 0; //@nn
		if(var_211_bool != 0) {
			var_198_object = var_193_object;
			var_198_object = 0;
		}
		var_212_bool = var_193_object != 0; //@nn
		if(var_212_bool != 0) {
			var_213_bool = var_192_bool;
			if(var_213_bool == 0) goto Label_4238;
			var_192_bool = 0;
			RotatePath(var_193_object, var_191_bool);
			var_214_bool = var_191_bool == 0; //@nz
			if(var_214_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_217_string = "";
				func_4332(var_217_string);
				var_218_string = "";
				func_4334(var_218_string);
				FollowPath(var_193_object, var_181_bool, var_191_bool, var_217_string, var_218_string);
				var_219_bool = var_191_bool == 0; //@nz
				if(var_219_bool != 0) {
					var_220_object = var_0_object;
					if(var_220_object != 0) {
						var_193_object = 0;
						goto Label_4285;
					EMIT "GOTO 0x10a2";
					}
				} else {
					var_193_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_191_bool);
					var_223_bool = var_191_bool == 0; //@nz
					if(var_223_bool != 0) {
						var_224_object = var_0_object;
						if(var_224_object != 0) {
							var_193_object = 0;
							goto Label_4285;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_4285;
	}
			var_198_object = 0;
			goto Label_4283;

		Label_4283:
			var_193_object = 0;

		}
		goto Label_4189;
	}
Label_4285:
	var_177_bool = !var_0_object;
	return 16;
	
}


func_5725(var_18_bool, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj();
	var_23_bool = var_19_string == "heal";
	if(var_23_bool != 0) {
		FindActor(var_21_object, "player");
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_5974(var_26_object);
		var_25_bool = var_18_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_18_bool = 0;
	return 2;
}


func_5210(var_194_bool)
{
	var_196_int = 0;
	func_4937(var_196_int);
	var_194_bool = var_196_int == (int)11;
	return 0;
}


func_5217(var_200_bool)
{
	var_202_int = 0;
	func_4937(var_202_int);
	var_200_bool = var_202_int == (int)12;
	return 0;
}


func_3173(var_0_object)
{
	var_68_object = Obj();
	var_68_object = var_0_object;
	func_4780(var_68_object);
	return 0;
}


func_5224(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x1477";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_5741(var_29_string)
{
	var_30_object = Obj(); var_31_object = Obj();
	var_33_bool = var_29_string == "heal";
	if(var_33_bool != 0) {
		FindActor(var_31_object, "player");
		var_31_object = Obj();
		func_5977();
		var_31_object = 0;
	}
	return 2;
}


func_2675(var_19_object)
{
	EventDisable(0);
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_2708(var_20_object);
	var_100_object = Obj();
	var_19_object = var_100_object;
	func_6234(var_100_object);
	EventEnable(0);
	
Label_2686:
	Hold();
	goto Label_2686;
}
EMIT "Return(); Pop(0)";


func_5241(var_224_int)
{
	var_225_int = 0; var_226_int = 0;
	GetVariable("branch", var_226_int);
	var_226_int = var_224_int;
	return 2;
}


func_5754(var_26_int)
{
	var_28_bool = 0;
	func_6222(var_28_bool);
	if(var_28_bool != 0) {
		var_26_int = 2;
	} else {
		var_26_int = 0;
	}
	return 0;
	
}


func_4731()
{
	var_431_bool = 0; var_432_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_434_bool = 0;
	func_6164(var_434_bool);
	if(var_434_bool != 0) {
	} else {
		HasAnimationTrack(var_432_bool, "head");
		var_436_bool = var_432_bool;
		if(var_436_bool == 0) goto Label_4748;
		UnlookAsync("head");
	}
Label_4748:
	return 2;
	
}


func_5247(var_536_int, var_537_object)
{
	var_538_int = 0; var_539_int = 0;
	@@var_537_object:GetItemID(var_539_int);
	var_539_int = var_536_int;
	return 2;
}


func_3714(var_0_object, var_1_object, var_366_bool, var_367_float)
{
	var_368_int = 0; var_369_bool = 0; var_370_int = 0; var_371_string = ""; var_372_int = 0; var_373_bool = 0; var_374_int = 0; var_375_string = "";
	func_4053(var_375_string);
	irand(var_372_int, var_1_object);
	var_372_int = var_372_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_4955();
	var_384_int = "attack_begin" + var_372_int;
	PlayAnimation("all", var_384_int);
	WaitForAnimEnd();
	func_4021(var_374_int, var_375_string);
	var_400_bool = 0; var_401_object = Obj();
	var_401_object = var_0_object;
	func_4496(var_400_bool, var_401_object);
	var_402_bool = var_400_bool == 0; //@nz
	if(var_402_bool != 0) {
		StopAsync();
		var_366_bool = 0;
		return 8;
	}
	var_403_float = 0; var_404_int = 0;
	var_367_float = var_403_float;
	var_372_int = var_404_int;
	func_3675(var_375_string, var_403_float, var_404_int);
	var_487_int = "attack_middle" + var_372_int;
	HasAnimation(var_373_bool, "all", var_487_int);
	var_488_bool = var_373_bool;
	if(var_488_bool != 0) {
		func_4955();
		var_491_int = "attack_middle" + var_372_int;
		PlayAnimation("all", var_491_int);
		WaitForAnimEnd();
		func_4053(var_375_string);
		var_492_bool = 0; var_493_object = Obj();
		var_493_object = var_0_object;
		func_4496(var_492_bool, var_493_object);
		var_494_bool = var_492_bool == 0; //@nz
		if(var_494_bool != 0) {
			StopAsync();
			var_366_bool = 0;
			return 8;
		}
		var_495_float = 0; var_496_int = 0;
		var_367_float = var_495_float;
		var_372_int = var_496_int;
		func_3675(var_375_string, var_495_float, var_496_int);
		var_374_int = 1;

	Label_3791:
		var_498_int = "attack_middle" + var_372_int;
		var_500_int = var_498_int + "_";
		var_375_string = var_500_int + var_374_int;
		HasAnimation(var_373_bool, "all", var_375_string);
		var_502_bool = var_373_bool == 0; //@nz
		if(var_502_bool != 0) {
		} else {
			func_4955();
			PlayAnimation("all", var_375_string);
			WaitForAnimEnd();
			func_4053(var_375_string);
			var_518_bool = 0; var_519_object = Obj();
			var_519_object = var_0_object;
			func_4496(var_518_bool, var_519_object);
			var_520_bool = var_518_bool == 0; //@nz
			if(var_520_bool != 0) {
				StopAsync();
				var_366_bool = 0;
				var_521_float = 0; var_522_int = 0;
				var_367_float = var_521_float;
				var_372_int = var_522_int;
				func_3675(var_375_string, var_521_float, var_522_int);
				var_374_int = var_374_int + (int)1;
				goto Label_3791;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_506_int = "attack_end" + var_372_int;
	PlayAnimation("all", var_506_int);
	var_507_bool = 0;
	func_4067(var_507_bool);
	if(var_507_bool != 0) {
		var_508_bool = 0; var_509_float = 0;
		func_3851(var_508_bool, (float)0.75);
		StopAsync();
	}
	var_366_bool = 1;
	return 8;
	
}


func_5763(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	TaskCall(4);
	func_3122(var_61_object, var_60_object);
	TaskReturn();
	return 0;
}


func_5252(var_513_int, var_514_object, var_515_int)
{
	var_516_int = 0; var_517_int = 0; var_518_int = 0; var_519_string = ""; var_520_bool = 0; var_521_bool = 0; var_522_int = 0; var_523_int = 0; var_524_int = 0; var_525_int = 0; var_526_string = ""; var_527_bool = 0; var_528_bool = 0; var_529_int = 0;
	var_531_bool = var_515_int == (int)0;
	if(var_531_bool != 0) {
		func_4937((int)0);
		var_532_int = var_523_int;
		var_525_int = 1;

	Label_5262:
		var_533_bool = var_525_int <= var_523_int;
		if(var_533_bool != 0) {
			var_535_bool = var_525_int != (int)1;
			if(var_535_bool != 0) {
				"Price" = "Price" + var_525_int;
			}
			var_536_int = 0; var_537_object = Obj();
			var_514_object = var_537_object;
			func_5247(var_536_int, var_537_object);
			HasInvItemProperty(var_527_bool, var_536_int, var_526_string);
			var_540_bool = var_527_bool == 0; //@nz
			if(var_540_bool != 0) {
			} else {
				var_542_int = 0; var_543_object = Obj();
				var_514_object = var_543_object;
				func_5247(var_542_int, var_543_object);
				GetInvItemProperty((int)0, var_542_int, var_526_string);
		}
			var_524_int = var_513_int;
			return 14;
	}
		var_544_int = 0; var_545_object = Obj();
		var_514_object = var_545_object;
		func_5247(var_544_int, var_545_object);
		var_547_int = "BarterPrice" + var_515_int;
		HasInvItemProperty(var_528_bool, var_544_int, var_547_int);
		var_548_bool = var_528_bool == 0; //@nz
		if(var_548_bool != 0) {
			return 14;
		}
		var_549_int = 0; var_550_object = Obj();
		var_514_object = var_550_object;
		func_5247(var_549_int, var_550_object);
		var_552_int = "BarterPrice" + var_515_int;
		GetInvItemProperty(var_529_int, var_549_int, var_552_int);
		var_554_bool = var_529_int > (int)0;
		if(var_554_bool != 0) {
			var_529_int = (int)0;
			return 14;
		}
		var_513_int = -var_529_int;
		return 14;
	}
	var_525_int = var_525_int + (int)1;
	goto Label_5262;
	
}


func_5771(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_4496(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		var_26_int = 2;
	} else {
		var_26_int = 0;
	}
	return 0;
	
}


func_4749(var_284_string)
{
	var_285_bool = 0; var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_float = 0; var_290_float = 0;
	lshHasAnimation(var_288_bool, var_284_string);
	var_291_bool = var_288_bool;
	if(var_291_bool != 0) {
		lshGetAnimTimes(var_284_string, var_289_float, var_290_float);
		lshPlayAnimation(var_289_float, var_290_float, (bool)0);
	} else {
		var_294_int = "Can't find lsh animation : " + var_284_string;
		Trace(var_294_int);
	}
	return 6;
	
}


func_5117(var_192_bool, var_193_object)
{
	var_194_bool = 0; var_195_object = Obj();
	var_193_object = var_195_object;
	func_5210(var_195_object);
	if(var_194_bool != 0) {
		var_192_bool = 1;
		return 0;
	}
	var_192_bool = 0;
	return 0;
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
		func_4798(var_95_string);
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


func_5781(var_69_object)
{
	var_70_object = Obj();
	var_69_object = var_70_object;
	TaskCall(5);
	func_3397(var_70_object);
	TaskReturn();
	return 0;
}


func_4765(var_133_string, var_134_bool)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0;
	lshHasAnimation(var_140_bool, var_133_string);
	var_143_bool = var_140_bool;
	if(var_143_bool != 0) {
		lshGetAnimTimes(var_133_string, var_141_float, var_142_float);
		lshPlayAnimation(var_141_float, var_142_float, var_134_bool);
	} else {
		var_145_int = "Can't find lsh animation : " + var_133_string;
		Trace(var_145_int);
	}
	return 6;
	
}


func_5789(var_33_bool, var_34_object, var_35_bool)
{
	var_36_string = ""; var_37_string = ""; var_38_string = ""; var_39_string = "";
	var_40_bool = 0; var_41_object = Obj(); var_42_string = "";
	var_34_object = var_41_object;
	func_4370(var_40_bool, var_41_object, "class");
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
	EMIT "GOTO 0x16e6";
	}
	var_58_bool = var_39_string == "rat_big";
	if(var_58_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x16e6";
	}
	var_60_bool = var_39_string == "dog";
	if(var_60_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x16e6";
	}
	var_62_bool = var_39_string == "grabitel";
	if(var_62_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x16e6";
	}
	var_64_bool = var_39_string == "bomber";
	if(var_64_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x16e6";
	}
	var_66_bool = var_39_string == "sanitar";
	if(var_66_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x16e6";
	}
	var_68_bool = var_39_string == "hunter";
	if(var_68_bool != 0) {
		var_33_bool = 0;
		return 4;
	EMIT "GOTO 0x16e6";
	}
	var_70_bool = var_39_string == "soldier";
	if(var_70_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_33_bool = 1;
	return 4;
}


func_4780(var_21_object)
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


func_4791()
{
	var_20_bool = 0;
	func_6164(var_20_bool);
	if(var_20_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4798(var_43_string)
{
	var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	IsExisting3DSound(var_52_bool, var_43_string);
	var_60_bool = var_52_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_53_int = 0;

	Label_4804:
		var_62_int = var_53_int + (int)1;
		var_63_int = var_43_string + var_62_int;
		IsExisting3DSound(var_54_bool, var_63_int);
		var_64_bool = var_54_bool == 0; //@nz
		if(var_64_bool != 0) {
		} else {
			var_53_int = var_53_int + (int)1;
			goto Label_4804;
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


func_4287(var_0_object, var_1_object, var_25_int)
{
	var_27_bool = var_25_int != (int)0;
	if(var_27_bool != 0) {
		return 0;
	}
	var_28_bool = 0; var_29_object = Obj();
	var_29_object = var_1_object;
	func_4325(var_28_bool, var_29_object);
	var_64_bool = var_28_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_5316(var_34_object)
{
	var_35_int = 0;
	func_5241(var_35_int);
	var_40_bool = var_35_int == (int)1;
	if(var_40_bool != 0) {
		WorkWithCorpse(var_34_object);
	} else {
		Barter(var_34_object);
	}
	return 0;
	
}


func_5329(var_29_int, var_30_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_44_bool = var_29_int > var_30_int;
	if(var_44_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_42_int = 0;
	var_46_bool = var_29_int != var_30_int;
	if(var_46_bool != 0) {
		var_47_int = var_30_int - var_29_int;
		irand(var_42_int, var_47_int);
	} else {
		var_56_bool = var_29_int == (int)0;
		if(var_56_bool == 0) goto Label_5347;
		return 4;
	}
Label_5347:
	var_42_int = var_42_int + var_29_int;
	var_49_bool = var_42_int == (int)0;
	if(var_49_bool != 0) {
		return 4;
	}
	var_50_int = 0; var_51_string = "";
	func_5576(var_50_int, "Money");
	AddItem(var_43_bool, var_50_int, (int)0, var_42_int);
	return 4;
	
}


func_4309(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_4325(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj();
	var_29_object = var_31_object;
	func_4496(var_30_bool, var_31_object);
	var_30_bool = var_28_bool;
	return 0;
}


func_4839(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj();
	self(var_107_object);
	var_107_object = var_105_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5864(var_84_int, var_85_object)
{
	var_87_int = 0; var_88_object = Obj();
	var_85_object = var_88_object;
	func_5771(var_87_int, var_88_object);
	var_87_int = var_84_int;
	return 0;
}


func_4332(var_217_string)
{
	var_217_string = "walk";
	return 0;
}


func_4845(var_49_cvector, var_50_cvector)
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


func_4334(var_218_string)
{
	var_218_string = "run";
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
	func_4798(var_43_string);
	PlayAnimation("all", var_42_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_42_string);
	RemoveEnvelope();
	return 0;
}


func_5871(var_123_object)
{
	var_124_object = Obj();
	var_123_object = var_124_object;
	func_5781(var_124_object);
	return 0;
}


func_4336(var_445_string, var_446_int)
{
	var_448_bool = var_446_int == (int)2;
	if(var_448_bool != 0) {
		var_445_string = "fire";
		return 0;
	EMIT "GOTO 0x10fc";
	}
	var_450_bool = var_446_int == (int)1;
	if(var_450_bool != 0) {
		var_445_string = "bullet";
		return 0;
	}
	var_445_string = "phys";
	return 0;
}


func_5360(var_230_string)
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


func_5877(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0;
	var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0;
	var_28_object = var_34_object;
	var_35_bool = !var_30_bool;
	func_5789(var_33_bool, var_34_object, var_35_bool);
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
		func_4357(var_74_float, var_75_object);
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


func_4855(var_455_float, var_456_float, var_457_float)
{
	var_460_bool = var_456_float < var_457_float;
	if(var_460_bool != 0) {
		var_456_float = var_455_float;
	} else {
		var_457_float = var_455_float;
	}
	return 0;
	
}


func_3321()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_4350(var_51_cvector, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	GetPosition(var_55_cvector);
	@@var_52_object:GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
	return 4;
}


func_4862(var_465_float, var_466_float, var_467_float, var_468_float)
{
	var_469_bool = var_466_float < var_467_float;
	if(var_469_bool != 0) {
		var_467_float = var_465_float;
		return 0;
	}
	var_470_bool = var_466_float > var_468_float;
	if(var_470_bool != 0) {
		var_468_float = var_465_float;
		return 0;
	}
	var_466_float = var_465_float;
	return 0;
}


func_5377()
{
	var_224_int = 0;
	func_5241(var_224_int);
	var_229_bool = var_224_int != (int)1;
	if(var_229_bool != 0) {
		return 0;
	}
	var_230_string = "";
	func_5360("liver");
	var_241_string = "";
	func_5360("kidney");
	var_242_string = "";
	func_5360("heart");
	var_243_string = "";
	func_5360("blood");
	return 0;
}


func_4357(var_35_float, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	GetPosition(var_40_cvector);
	@@var_36_object:GetPosition(var_41_cvector);
	var_42_cvector = var_41_cvector - var_40_cvector;
	var_35_float = var_42_cvector | var_42_cvector;
	return 6;
}


func_4873(var_493_object)
{
	var_494_object = Obj(); var_495_object = Obj();
	CreateObjectVector(var_495_object);
	var_495_object = var_493_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3851(var_508_bool, var_509_float)
{
	var_510_float = 0; var_511_bool = 0; var_512_float = 0; var_513_bool = 0;
	rand(var_512_float);
	var_514_bool = var_512_float < var_509_float;
	if(var_514_bool != 0) {

	Label_3856:
		IsAnimationPlaying(var_513_bool);
		var_515_bool = var_513_bool == 0; //@nz
		if(var_515_bool != 0) {
		} else {
			var_516_bool = 0;
			func_3949(var_516_bool);
			if(var_516_bool != 0) {
				var_508_bool = 1;
				sync();
				goto Label_3856;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_4053(var_513_bool);
	}
	goto Label_3876;
	
Label_3876:
	var_508_bool = 0;
	return 4;
	
}


func_4365(var_101_bool, var_102_object)
{
	var_103_bool = 0; var_104_bool = 0;
	IsPlayerActor(var_102_object, var_104_bool);
	var_104_bool = var_101_bool;
	return 2;
}


func_4879(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = var_73_float * var_74_float;
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = var_76_float * var_77_float;
	var_70_float = var_75_float + var_78_float;
	return 0;
}


func_5906(var_20_int)
{
	var_20_int = 2;
	return 0;
}


func_4370(var_52_bool, var_53_object, var_54_string)
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


func_5909(var_28_object)
{
	var_29_object = Obj();
	var_28_object = var_29_object;
	func_6174(var_29_object);
	return 0;
}


func_4888(var_79_float, var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0);
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_83_float = var_81_float * var_82_float;
	var_84_float = GetByIndex(var_80_cvector, 2);
	var_85_float = GetByIndex(var_80_cvector, 2);
	var_86_float = var_84_float * var_85_float;
	var_87_int = var_83_float + var_86_float;
	var_79_float = sqrt(var_87_int);
	return 0;
}


func_5401(var_23_bool)
{
	var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_28_bool = var_23_bool;
	if(var_28_bool != 0) {
		var_29_int = 0; var_30_int = 0;
		var_32_int = 0;
		func_4937(var_32_int);
		var_39_float = var_32_int * (int)100;
		var_30_int = (int)100 + var_39_float;
		func_5329((int)0, var_30_int);
		irand(var_26_int, (int)8);
		var_59_bool = var_26_int == (int)0;
		if(var_59_bool != 0) {
			var_60_int = 0; var_61_string = "";
			func_5576(var_60_int, "lemon");
			AddItem(var_27_bool, var_60_int, (int)0, (int)1);
		} else {
			var_65_bool = var_26_int == (int)1;
			if(var_65_bool != 0) {
				var_66_int = 0; var_67_string = "";
				func_5576(var_66_int, "rusk");
				AddItem(var_27_bool, var_66_int, (int)0, (int)1);
				goto Label_5489;
			}
			var_71_bool = var_26_int == (int)2;
			if(var_71_bool != 0) {
				var_72_int = 0; var_73_string = "";
				func_5576(var_72_int, "hook");
				AddItem(var_27_bool, var_72_int, (int)0, (int)1);
				goto Label_5489;
			}
			var_77_bool = var_26_int == (int)4;
			if(var_77_bool != 0) {
				var_78_int = 0; var_79_string = "";
				func_5576(var_78_int, "syringe");
				AddItem(var_27_bool, var_78_int, (int)0, (int)1);
				goto Label_5489;
			}
			var_83_bool = var_26_int == (int)5;
			if(var_83_bool != 0) {
				var_84_int = 0; var_85_string = "";
				func_5576(var_84_int, "watch");
				AddItem(var_27_bool, var_84_int, (int)0, (int)1);
				goto Label_5489;
			}
			var_89_bool = var_26_int == (int)6;
			if(var_89_bool == 0) goto Label_5489;
			var_90_int = 0; var_91_string = "";
			func_5576(var_90_int, "razor");
			AddItem(var_27_bool, var_90_int, (int)0, (int)1);
	}
		var_94_int = 0; var_95_int = 0;
		var_97_int = 0;
		func_4937(var_97_int);
		var_99_float = var_97_int * (int)50;
		var_95_int = (int)50 + var_99_float;
		func_5329((int)0, var_95_int);
		irand(var_26_int, (int)7);
		var_102_bool = var_26_int == (int)0;
		if(var_102_bool != 0) {
			var_103_int = 0; var_104_string = "";
			func_5576(var_103_int, "beads");
			AddItem(var_27_bool, var_103_int, (int)0, (int)1);
			goto Label_5575;
		}
		var_108_bool = var_26_int == (int)1;
		if(var_108_bool != 0) {
			var_109_int = 0; var_110_string = "";
			func_5576(var_109_int, "bracelet");
			AddItem(var_27_bool, var_109_int, (int)0, (int)1);
			goto Label_5575;
		}
		var_114_bool = var_26_int == (int)2;
		if(var_114_bool != 0) {
			var_115_int = 0; var_116_string = "";
			func_5576(var_115_int, "ear_ring");
			AddItem(var_27_bool, var_115_int, (int)0, (int)1);
			goto Label_5575;
		}
		var_120_bool = var_26_int == (int)3;
		if(var_120_bool != 0) {
			var_121_int = 0; var_122_string = "";
			func_5576(var_121_int, "gold_ring");
			AddItem(var_27_bool, var_121_int, (int)0, (int)1);
			goto Label_5575;
		}
		var_126_bool = var_26_int == (int)4;
		if(var_126_bool != 0) {
			var_127_int = 0; var_128_string = "";
			func_5576(var_127_int, "silver_ring");
			AddItem(var_27_bool, var_127_int, (int)0, (int)1);
			goto Label_5575;
		}
		var_132_bool = var_26_int == (int)5;
		if(var_132_bool == 0) goto Label_5575;
		var_133_int = 0; var_134_string = "";
		func_5576(var_133_int, "flower");
		AddItem(var_27_bool, var_133_int, (int)0, (int)1);
	}
Label_5489:
	goto Label_5575;
	
Label_5575:
	return 4;
	
}


func_5915()
{
	return 0;
}


func_5916(var_20_int, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	Trace("Received steal");
	CanSee(var_23_bool, var_21_object);
	var_25_bool = var_23_bool;
	if(var_25_bool != 0) {
		var_26_int = 0; var_27_object = Obj();
		var_21_object = var_27_object;
		func_5771(var_26_int, var_27_object);
		var_26_int = var_20_int;
		return 2;
	}
	var_20_int = 0;
	return 2;
}


func_4382(var_417_float, var_418_object, var_419_float, var_420_int)
{
	var_424_int = 0; var_425_string = ""; var_426_int = 0; var_427_float = 0; var_428_float = 0; var_429_float = 0; var_430_int = 0; var_431_string = ""; var_432_int = 0; var_433_float = 0; var_434_float = 0; var_435_float = 0;
	var_436_bool = 0; var_437_object = Obj(); var_438_string = "";
	var_418_object = var_437_object;
	func_4370(var_436_bool, var_437_object, "health");
	var_439_bool = var_436_bool == 0; //@nz
	if(var_439_bool != 0) {
		var_417_float = 0.0;
		return 12;
	}
	var_440_bool = 0; var_441_object = Obj(); var_442_string = "";
	var_418_object = var_441_object;
	func_4370(var_440_bool, var_441_object, "armor");
	var_443_bool = var_440_bool == 0; //@nz
	if(var_443_bool != 0) {
		var_430_int = 0;
	} else {
			@@var_418_object:GetProperty("armor", var_430_int);
	}
	var_445_string = ""; var_446_int = 0;
	var_420_int = var_446_int;
	func_4336(var_445_string, var_446_int);
	var_431_string = "armor_" + var_445_string;
	var_451_bool = 0; var_452_object = Obj(); var_453_string = "";
	var_418_object = var_452_object;
	var_431_string = var_453_string;
	func_4370(var_451_bool, var_452_object, var_453_string);
	var_454_bool = var_451_bool == 0; //@nz
	if(var_454_bool != 0) {
		var_432_int = 0;
	} else {
		@@var_418_object:GetProperty(var_431_string, var_432_int);

	}
	var_455_float = 0; var_456_float = 0; var_457_float = 0;
	var_458_int = var_430_int + var_432_int;
	var_456_float = var_458_int / (float)100.0;
	func_4855(var_455_float, var_456_float, (float)1);
	var_455_float = var_433_float;
	@@var_418_object:GetProperty("health", var_434_float);
	var_463_int = (int)1 - var_433_float;
	var_435_float = var_419_float * var_463_int;
	var_465_float = 0; var_466_float = 0; var_467_float = 0; var_468_float = 0;
	var_466_float = var_434_float - var_435_float;
	func_4862(var_465_float, var_466_float, (float)0, (float)1);
	@@var_418_object:SetProperty("health", var_465_float);
	var_471_bool = 0; var_472_object = Obj();
	var_418_object = var_472_object;
	func_4365(var_471_bool, var_472_object);
	if(var_471_bool != 0) {
		var_473_float = 0;
		var_473_float = -var_435_float;
		func_4920(var_473_float);
	}
	var_435_float = var_417_float;
	return 12;
	
}


func_4898(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_68_cvector = var_71_cvector;
	var_69_cvector = var_72_cvector;
	func_4879(var_70_float, var_71_cvector, var_72_cvector);
	var_79_float = 0; var_80_cvector = CVector(0,0,0);
	var_68_cvector = var_80_cvector;
	func_4888(var_79_float, var_80_cvector);
	var_88_float = 0; var_89_cvector = CVector(0,0,0);
	var_69_cvector = var_89_cvector;
	func_4888(var_88_float, var_89_cvector);
	var_90_float = var_79_float * var_88_float;
	var_67_float = var_70_float / var_90_float;
	return 0;
}


func_3878(var_0_object, var_305_bool, var_306_float)
{
	var_307_bool = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_bool = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0;
	
Label_3879:
	IsAnimationPlaying(var_312_bool);
	var_317_bool = var_312_bool == 0; //@nz
	if(var_317_bool != 0) {
	} else {
		var_318_bool = 0;
		func_3949(var_318_bool);
		if(var_318_bool != 0) {
			var_305_bool = 1;
			return 10;
		}
		var_361_bool = 0; var_362_object = Obj();
		var_362_object = var_0_object;
		func_4496(var_361_bool, var_362_object);
		var_363_bool = var_361_bool == 0; //@nz
		if(var_363_bool != 0) {
			var_305_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_313_cvector);
		GetPFPosition(var_314_cvector);
		var_315_cvector = var_313_cvector - var_314_cvector;
		var_316_float = var_315_cvector | var_315_cvector;
		var_364_float = var_306_float * var_306_float;
		var_365_bool = var_316_float < var_364_float;
		if(var_365_bool != 0) {
			var_366_bool = 0; var_367_float = 0;
			var_306_float = var_367_float;
			func_3714(var_315_cvector, var_316_float, var_366_bool, var_367_float);
			var_305_bool = 1;
			sync();
			goto Label_3879;
		}
		return 10;
	}
	func_4053(var_316_float);
	var_305_bool = 0;
	return 10;
	
}


func_5932(var_68_object)
{
	var_69_object = Obj();
	var_68_object = var_69_object;
	func_5781(var_69_object);
	return 0;
}


func_2865()
{
	var_137_bool = 0;
	func_4657(var_137_bool);
	var_140_bool = var_137_bool == 0; //@nz
	if(var_140_bool != 0) {
		func_5915();
	}
	return 0;
}


func_5938(var_127_int)
{
	var_127_int = 0;
	return 0;
}


func_4915(var_123_int, var_124_string)
{
	var_125_int = 0; var_126_int = 0;
	GetVariable(var_124_string, var_126_int);
	var_126_int = var_123_int;
	return 2;
}


func_5941()
{
	return 0;
}


func_5943(var_23_bool)
{
	var_23_bool = 0;
	return 0;
}


func_4920(var_473_float)
{
	var_474_object = Obj(); var_475_object = Obj();
	CreateFloatVector(var_475_object);
	@@var_475_object:add(var_473_float);
	var_477_bool = var_473_float < (int)0;
	if(var_477_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_475_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5946()
{
	return 0;
}


func_5948(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	CanSee(var_33_bool, var_31_object);
	var_30_bool = 1;
	var_34_bool = var_33_bool;
	if(var_34_bool != 1) {
		var_35_float = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_4357(var_35_float, var_36_object);
		var_44_bool = var_35_float <= (int)2250000;
		if(var_44_bool != 1) {
			var_30_bool = 0;
		}
	}
	return 2;
}


func_3397(var_70_object)
{
	var_77_object = Obj(); var_78_bool = 0; var_79_float = 0;
	var_70_object = var_77_object;
	func_3411(var_73_int, var_74_bool, var_75_float, var_76_int, var_70_object, var_77_object, (bool)1, (float)180.0);
	return 0;
}


func_4937(var_32_int)
{
	var_33_float = 0; var_34_float = 0;
	GetGameTime(var_34_float);
	var_36_int = 0;
	var_36_int = var_34_float / (int)24;
	var_32_int = (int)1 + var_36_int;
	return 2;
}


func_5963(var_58_object)
{
	var_59_object = Obj();
	var_58_object = var_59_object;
	func_5763(var_59_object);
	return 0;
}


func_3405(var_414_float)
{
	var_414_float = 0.05000000074505806;
	return 0;
}


func_3408(var_421_int)
{
	var_421_int = 0;
	return 0;
}


func_3921(var_0_object, var_320_bool)
{
	var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_float = 0; var_325_float = 0; var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_float = 0; var_330_float = 0;
	var_331_bool = 0; var_332_object = Obj();
	var_332_object = var_0_object;
	func_4496(var_331_bool, var_332_object);
	var_333_bool = var_331_bool == 0; //@nz
	if(var_333_bool != 0) {
		var_320_bool = 0;
		return 10;
	}
	var_334_bool = 0;
	func_4010(var_330_float, var_334_bool);
	if(var_334_bool != 0) {
		@@@var_0_object:GetPFPosition(var_326_cvector);
		GetPFPosition(var_327_cvector);
		var_328_cvector = var_326_cvector - var_327_cvector;
		var_329_float = var_328_cvector | var_328_cvector;
		@@@var_0_object:GetAttackDistance(var_330_float);
		var_330_float = var_330_float + (int)50;
		var_336_float = var_330_float * var_330_float;
		var_320_bool = var_329_float <= var_336_float;
		return 10;
	}
	var_320_bool = 0;
	return 10;
}


func_4946(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_23_bool = var_22_bool;
	if(var_23_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_3411(var_0_object, var_3_string, var_5_bool, var_77_object, var_78_bool, var_79_float, var_154_bool, var_246_bool)
{
	var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_float = 0;
	func_3640(var_99_cvector, var_100_bool, var_101_float);
	var_5_bool = 0;
	var_126_bool = IsFuncExist(var_77_object, "@GetAttackDistance", (int)1);
	if(var_126_bool != 0) {
		@@var_77_object:GetAttackDistance(var_91_float);
		var_91_float = var_91_float + (int)50;
	} else {
							var_79_float = var_91_float;
	}
	var_129_bool = var_91_float >= (int)150;
	if(var_129_bool != 0) {
		var_91_float = 150;
	}
	var_3_string = false;
	var_0_object = var_77_object;
	IsPlayerActor(var_0_object, var_94_bool);
	var_130_bool = var_94_bool;
	if(var_130_bool != 0) {
		PlayGlobalMusic("attack");
		var_132_object = Obj();
		func_4839(var_132_object);
		SendPlayerEnemy(var_77_object, var_132_object);
	}
	var_135_bool = var_78_bool;
	if(var_135_bool != 0) {
		var_95_bool = 0;
	} else {
						var_95_bool = 1;

	}
	var_96_float = (float)400.0 + var_91_float;
	
Label_3451:
	var_137_bool = 0;
	var_137_bool = 0;
	var_138_bool = 0; var_139_object = Obj();
	var_139_object = var_0_object;
	func_4496(var_138_bool, var_139_object);
	if(var_138_bool != 0) {
		var_140_bool = var_3_string == 0; //@nz
		if(var_140_bool != 0) {
			var_137_bool = 1;
		}
	}
	if(var_137_bool != 0) {
		func_4053(var_101_float);
		@@@var_0_object:GetPFPosition(var_92_cvector);
		GetPFPosition(var_93_cvector);
		var_97_cvector = var_92_cvector - var_93_cvector;
		var_98_float = var_97_cvector | var_97_cvector;
		var_146_float = var_96_float * var_96_float;
		var_147_bool = var_98_float >= var_146_float;
		if(var_147_bool != 0) {
			var_148_bool = 0; var_149_object = Obj(); var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_bool = 0;
			var_149_object = var_0_object;
			var_91_float = var_150_float;
			TaskCall(6);
			func_4080(var_156_bool, var_148_bool, var_149_object, var_150_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_231_bool = var_154_bool == 0; //@nz
			if(var_231_bool != 0) {
			} else {
				var_95_bool = 0;
		} else {
				var_237_float = var_79_float * var_79_float;
				var_238_bool = var_98_float >= var_237_float;
				if(var_238_bool != 0) {
					@@@var_0_object:GetPFPosition(var_99_cvector);
					CanReachByPF(var_100_bool, var_99_cvector);
					var_239_bool = var_100_bool == 0; //@nz
					if(var_239_bool != 0) {
						var_240_bool = 0; var_241_object = Obj(); var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_bool = 0;
						var_241_object = var_0_object;
						var_91_float = var_242_float;
						TaskCall(6);
						func_4080(var_248_bool, var_240_bool, var_241_object, var_242_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_249_bool = var_246_bool == 0; //@nz
						if(var_249_bool != 0) {
							goto Label_3623;
						}
						var_95_bool = 0;
						goto Label_3451;
					}
					var_250_bool = var_95_bool == 0; //@nz
					if(var_250_bool != 0) {
						var_251_object = Obj();
						var_251_object = var_0_object;
						func_4646(var_251_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_4053(var_101_float);
						StopAsync();
						var_95_bool = 1;
						var_262_bool = 0; var_263_object = Obj();
						var_263_object = var_0_object;
						func_4496(var_262_bool, var_263_object);
						var_264_bool = var_262_bool == 0; //@nz
						if(var_264_bool != 0) {
							goto Label_3623;
						}
					}
					rand(var_101_float);
					var_265_bool = 0;
					var_267_bool = var_101_float < (float)0.25;
					if(var_267_bool != 1) {
						var_268_bool = 0;
						func_4010((bool)1, var_268_bool);
						if(var_268_bool != 1) {
							var_265_bool = 0;
						}
					}
					if(var_265_bool != 0) {
						Face(var_0_object);
						func_4060();
						PlayAnimation("all", "attack_stay");
						var_305_bool = 0; var_306_float = 0;
						var_79_float = var_306_float;
						func_3878(var_101_float, var_305_bool, var_306_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_4053(var_101_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_527_bool = 0;
						func_4010(var_101_float, var_527_bool);
						var_528_bool = var_527_bool == 0; //@nz
						if(var_528_bool == 0) goto Label_3613;
						var_529_bool = 0; var_530_object = Obj();
						var_530_object = var_0_object;
						func_4496(var_529_bool, var_530_object);
						var_531_bool = var_529_bool == 0; //@nz
						if(var_531_bool != 0) {
							goto Label_3623;
						}
						@@@var_0_object:GetPFPosition(var_92_cvector);
						GetPFPosition(var_93_cvector);
						var_97_cvector = var_92_cvector - var_93_cvector;
						var_98_float = var_97_cvector | var_97_cvector;
						var_532_float = var_79_float * var_79_float;
						var_533_bool = var_98_float < var_532_float;
						if(var_533_bool == 0) goto Label_3613;
						var_534_bool = 0; var_535_float = 0;
						var_79_float = var_535_float;
						func_3714(var_100_bool, var_101_float, var_534_bool, var_535_float);
						var_536_bool = var_534_bool == 0; //@nz
						if(var_536_bool == 0) goto Label_3613;
						goto Label_3623;
				}
					var_537_bool = 0; var_538_float = 0;
					var_79_float = var_538_float;
					func_3714(var_100_bool, var_101_float, var_537_bool, var_538_float);
					var_539_bool = var_537_bool == 0; //@nz
					if(var_539_bool != 0) {
						goto Label_3623;
					}
					var_95_bool = 1;

				}
			Label_3613:
				goto Label_3622;
		}
		Label_3622:
			goto Label_3451;

		}
	}
Label_3623:
	WaitForAnimEnd();
	var_232_string = var_3_string;
	if(var_232_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_235_bool = var_94_bool;
	if(var_235_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_5969(var_47_bool)
{
	var_47_bool = 0;
	return 0;
}


func_5972()
{
	return 0;
}


func_5974(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_5977()
{
	return 0;
}


func_4955()
{
	var_378_object = Obj(); var_379_object = Obj();
	GetScene(var_379_object);
	var_381_object = Obj();
	func_4839(var_381_object);
	BroadcastMessage("battle", var_381_object, var_379_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5979(var_151_string, var_152_int)
{
	var_153_string = ""; var_154_string = "";
	var_155_int = var_152_int;
	if(var_155_int != 0) {
		"idle" = "idle" + var_152_int;
	}
	var_154_string = var_151_string;
	return 2;
}


func_5986(var_440_object)
{
	var_441_object = Obj(); var_442_object = Obj(); var_443_object = Obj(); var_444_object = Obj(); var_445_int = 0; var_446_int = 0; var_447_int = 0; var_448_int = 0; var_449_object = Obj(); var_450_int = 0; var_451_bool = 0; var_452_int = 0; var_453_float = 0; var_454_int = 0; var_455_object = Obj(); var_456_int = 0; var_457_int = 0; var_458_int = 0; var_459_int = 0; var_460_int = 0; var_461_int = 0; var_462_int = 0; var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_object = Obj(); var_467_object = Obj(); var_468_object = Obj(); var_469_object = Obj(); var_470_object = Obj(); var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_object = Obj(); var_476_int = 0; var_477_bool = 0; var_478_int = 0; var_479_float = 0; var_480_int = 0; var_481_object = Obj(); var_482_int = 0; var_483_int = 0; var_484_int = 0; var_485_int = 0; var_486_int = 0; var_487_int = 0; var_488_int = 0; var_489_int = 0; var_490_int = 0; var_491_int = 0; var_492_object = Obj();
	func_4873(Obj());
	var_493_object = var_467_object;
	CreateIntVector(var_468_object);
	CreateIntVector(var_469_object);
	CreateIntVector(var_470_object);
	@@var_440_object:GetSubContainerCount(var_471_int);
	var_472_int = 0;
	
Label_6000:
	var_496_bool = var_472_int < var_471_int;
	if(var_496_bool != 0) {
		@@var_440_object:GetItemCount(var_473_int, var_472_int);
		var_474_int = 0;

	Label_6005:
		var_497_bool = var_474_int < var_473_int;
		if(var_497_bool != 0) {
			@@var_440_object:GetItem(var_475_object, var_474_int, var_472_int);
			@@var_475_object:GetItemID(var_476_int);
			HasInvItemProperty(var_477_bool, var_476_int, "HasDurability");
			var_499_bool = var_477_bool;
			if(var_499_bool != 0) {
				@@var_475_object:HasProperty(var_477_bool, "durability");
				var_501_bool = var_477_bool;
				if(var_501_bool != 0) {
					@@var_475_object:GetProperty(var_478_int, "durability");
					var_503_bool = 0;
					var_503_bool = 0;
					var_505_bool = var_478_int < (int)100;
					if(var_505_bool != 0) {
						var_506_bool = 0; var_507_object = Obj();
						var_475_object = var_507_object;
						func_6133(var_506_bool, var_507_object);
						if(var_506_bool != 0) {
							var_503_bool = 1;
						}
					}
					if(var_503_bool != 0) {
						@@var_467_object:add(var_475_object);
						@@var_468_object:add(var_472_int);
						@@var_469_object:add(var_474_int);
						var_513_int = 0; var_514_object = Obj(); var_515_int = 0;
						var_475_object = var_514_object;
						func_5252(var_513_int, var_514_object, (int)0);
						var_513_int = var_479_float;
						var_557_float = (float)2.0 * var_478_int;
						var_559_float = var_557_float / (float)100.0;
						var_560_int = (float)1.0 + var_559_float;
						var_561_float = var_479_float * var_560_int;
						var_563_int = (int)100 - var_478_int;
						var_564_float = var_561_float * var_563_int;
						var_480_int = var_564_float / (int)300;
						var_566_bool = var_480_int == 0; //@nz
						if(var_566_bool != 0) {
							var_480_int = 1;
						}
						@@var_470_object:add(var_480_int);
					}
				}
			}
			var_475_object = 0;
			var_474_int = var_474_int + (int)1;
			goto Label_6005;
		}
		var_472_int = var_472_int + (int)1;
		goto Label_6000;
	}
	CreateIntVector(var_481_object);
	ChooseItem(var_467_object, var_481_object, var_470_object, "repair.xml");
	@@var_481_object:size(var_482_int);
	var_570_bool = var_482_int == 0; //@nz
	if(var_570_bool != 0) {
		return 52;
	}
	var_484_int = 0;
	
Label_6084:
	var_571_bool = var_484_int < var_482_int;
	if(var_571_bool != 0) {
		@@var_481_object:get(var_485_int, var_484_int);
		@@var_470_object:get(var_486_int, var_485_int);
		(int)0 = (int)0 + var_486_int;
		var_484_int = var_484_int + (int)1;
		goto Label_6084;
	}
	@@var_440_object:GetProperty("money", var_487_int);
	var_487_int = var_487_int - var_483_int;
	var_575_bool = var_487_int < (int)0;
	if(var_575_bool != 0) {
		return 52;
	}
	@@var_440_object:SetProperty("money", var_487_int);
	var_488_int = 0;
	
Label_6106:
	var_577_bool = var_488_int < var_482_int;
	if(var_577_bool != 0) {
		@@var_481_object:get(var_489_int, var_488_int);
		@@var_468_object:get(var_490_int, var_489_int);
		@@var_469_object:get(var_491_int, var_489_int);
		@@var_440_object:GetItem(var_492_object, var_491_int, var_490_int);
		@@var_492_object:SetProperty("durability", (int)100);
		@@var_440_object:SetItem(var_492_object, (int)1, var_491_int, var_490_int);
		var_492_object = 0;
		var_488_int = var_488_int + (int)1;
		goto Label_6106;
	}
	return 52;
}
EMIT "Stack[-12] = 0";
EMIT "Stack[-23] = 0";
EMIT "Stack[-24] = 0";
EMIT "Stack[-25] = 0";
EMIT "Stack[-26] = 0";


func_4966(var_24_object)
{
	@@var_24_object:SetReturnValue((int)100);
	return 0;
}


func_4455(var_45_bool, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	@@var_46_object:IsDead(var_48_bool);
	var_48_bool = var_45_bool;
	return 2;
}


func_4971(var_302_bool)
{
	var_304_int = 0; var_305_string = "";
	func_4915(var_304_int, "branch");
	var_307_bool = var_304_int == (int)0;
	if(var_307_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_4460(var_34_bool, var_35_object)
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
		func_4455(var_45_bool, var_46_object);
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


func_3949(var_318_bool)
{
	var_319_bool = 0;
	var_319_bool = 0;
	var_320_bool = 0;
	func_3921(var_319_bool, var_320_bool);
	if(var_320_bool != 0) {
		var_337_bool = 0;
		func_3965(var_318_bool, var_319_bool, var_337_bool);
		if(var_337_bool != 0) {
			var_319_bool = 1;
		}
	}
	if(var_319_bool != 0) {
		var_318_bool = 1;
		return 0;
	}
	var_318_bool = 0;
	return 0;
}


func_4983(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_4915(var_313_int, "branch");
	var_316_bool = var_313_int == (int)1;
	if(var_316_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_3965(var_0_object, var_4_bool, var_337_bool)
{
	var_338_object = Obj(); var_339_bool = 0; var_340_float = 0; var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_object = Obj(); var_344_bool = 0; var_345_float = 0; var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0);
	GetScene(var_343_object);
	var_344_bool = 0;
	
Label_3969:
	var_348_cvector = CVector(0,0,0); var_349_object = Obj();
	var_349_object = var_0_object;
	func_4350(var_348_cvector, var_349_object);
	var_354_int = -var_348_cvector;
	FindDirLength(var_345_float, var_354_int, var_4_bool);
	var_355_bool = var_345_float < var_4_bool;
	if(var_355_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_346_cvector);
		GetPFPosition(var_347_cvector);
		WaitForAnimEnd();
		func_4053(var_347_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_344_bool = 1;
		var_359_bool = 0;
		func_3921(var_347_cvector, var_359_bool);
		var_360_bool = var_359_bool == 0; //@nz
		if(var_360_bool != 0) {
			goto Label_4007;
		}
		goto Label_3969;
	}
Label_4007:
	var_344_bool = var_337_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_4995(var_121_bool)
{
	var_123_int = 0; var_124_string = "";
	func_4915(var_123_int, "branch");
	var_128_bool = var_123_int == (int)2;
	if(var_128_bool != 0) {
		var_121_bool = 1;
		return 0;
	}
	var_121_bool = 0;
	return 0;
}


func_5007(var_168_bool, var_169_object)
{
	var_170_bool = 0; var_171_object = Obj();
	var_169_object = var_171_object;
	func_5137(var_171_object);
	if(var_170_bool != 0) {
		var_168_bool = 1;
		return 0;
	}
	var_168_bool = 0;
	return 0;
}


func_4496(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0;
	var_34_bool = 0; var_35_object = Obj();
	var_31_object = var_35_object;
	func_4460(var_34_bool, var_35_object);
	var_51_bool = var_34_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_30_bool = 0;
		return 2;
	}
	var_52_bool = 0; var_53_object = Obj(); var_54_string = "";
	var_31_object = var_53_object;
	func_4370(var_52_bool, var_53_object, "noaccess");
	var_61_bool = var_52_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_30_bool = 1;
		return 2;
	}
	@@var_31_object:GetProperty("noaccess", var_33_int);
	var_30_bool = var_33_int == (int)0;
	return 2;
}


func_5017(var_390_bool, var_391_object)
{
	var_392_bool = 0; var_393_object = Obj();
	var_391_object = var_393_object;
	func_5144(var_393_object);
	if(var_392_bool != 0) {
		var_390_bool = 1;
		return 0;
	}
	var_390_bool = 0;
	return 0;
}


func_5027(var_149_bool, var_150_object)
{
	var_151_bool = 0; var_152_object = Obj();
	var_150_object = var_152_object;
	func_5147(var_152_object);
	if(var_151_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_4520(var_34_object)
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


func_4010(var_0_object, var_268_bool)
{
	var_269_bool = 0; var_270_bool = 0;
	var_273_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_273_bool != 0) {
		@@@var_0_object:IsAttacking(var_270_bool);
		var_270_bool = var_268_bool;
		return 2;
	}
	var_268_bool = 0;
	return 2;
}


func_5037(var_161_bool, var_162_object)
{
	var_163_bool = 0; var_164_object = Obj();
	var_162_object = var_164_object;
	func_5154(var_164_object);
	if(var_163_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_4021(var_2_object, var_5_bool)
{
	var_385_float = 0; var_386_int = 0; var_387_float = 0; var_388_int = 0;
	var_389_bool = var_2_object == 0; //@nz
	if(var_389_bool != 0) {
		return 4;
	}
	var_390_bool = var_5_bool;
	if(var_390_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_393_bool = var_5_bool > (int)0;
		if(var_393_bool != 0) {
			return 4;
		}
	}
	rand(var_387_float);
	var_394_float = 0;
	func_4071(var_394_float);
	var_395_bool = var_387_float < var_394_float;
	if(var_395_bool != 0) {
		irand(var_388_int, var_2_object);
		var_388_int = var_388_int + (int)1;
		var_398_int = "attack" + var_388_int;
		Speak(var_398_int);
		var_399_int = 0;
		func_4069(var_399_int);
		var_5_bool = var_399_int;
	}
	return 4;
}


func_5047(var_347_bool, var_348_object)
{
	var_349_bool = 0; var_350_object = Obj();
	var_348_object = var_350_object;
	func_5161(var_350_object);
	if(var_349_bool != 0) {
		var_347_bool = 1;
		return 0;
	}
	var_347_bool = 0;
	return 0;
}


func_5057(var_359_bool, var_360_object)
{
	var_361_bool = 0; var_362_object = Obj();
	var_360_object = var_362_object;
	func_5168(var_362_object);
	if(var_361_bool != 0) {
		var_359_bool = 1;
		return 0;
	}
	var_359_bool = 0;
	return 0;
}


func_5576(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0;
	GetInvItemByName(var_53_int, var_51_string);
	var_53_int = var_50_int;
	return 2;
}


func_5067(var_368_bool, var_369_object)
{
	var_370_bool = 0; var_371_object = Obj();
	var_369_object = var_371_object;
	func_5175(var_371_object);
	if(var_370_bool != 0) {
		var_368_bool = 1;
		return 0;
	}
	var_368_bool = 0;
	return 0;
}


func_5581(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	TaskCall(2);
	func_2675(var_19_object);
	TaskReturn();
	return 0;
}


func_4564(var_21_object, var_22_int, var_23_float)
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
		func_4350(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_4845(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		CreateVectorVector(var_34_object);
		var_35_int = 1;

	Label_4593:
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
			goto Label_4593;
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
			func_4632(var_68_float, var_69_cvector, var_70_cvector);
			return 18;
		}
		var_34_object = 0;
	}
	var_111_object = Obj();
	var_21_object = var_111_object;
	func_4520(var_111_object);
	return 18;
	
}


func_5077(var_208_bool, var_209_object)
{
	var_210_bool = 0; var_211_object = Obj();
	var_209_object = var_211_object;
	func_5182(var_211_object);
	if(var_210_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_4053(var_0_object)
{
	var_141_object = Obj();
	var_141_object = var_0_object;
	func_4946(var_141_object);
	return 0;
}


func_4058(var_482_int)
{
	var_482_int = 0;
	return 0;
}


func_4060()
{
	var_274_string = "";
	func_4798("attack_stay");
	return 0;
}


func_5087(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj();
	var_215_object = var_217_object;
	func_5189(var_217_object);
	if(var_216_bool != 0) {
		var_214_bool = 1;
		return 0;
	}
	var_214_bool = 0;
	return 0;
}


func_4065()
{
	return 0;
}


func_4067(var_507_bool)
{
	var_507_bool = 1;
	return 0;
}


func_4069(var_399_int)
{
	var_399_int = 1;
	return 0;
}


func_4071(var_394_float)
{
	var_394_float = 0.5;
	return 0;
}


func_5097(var_180_bool, var_181_object)
{
	var_182_bool = 0; var_183_object = Obj();
	var_181_object = var_183_object;
	func_5196(var_183_object);
	if(var_182_bool != 0) {
		var_180_bool = 1;
		return 0;
	}
	var_180_bool = 0;
	return 0;
}


func_4080(var_2_object, var_148_bool, var_149_object, var_150_float, var_151_float, var_152_bool, var_153_bool)
{
	var_157_bool = 0; var_158_bool = 0; var_159_bool = 0; var_160_bool = 0;
	var_161_object = Obj();
	var_149_object = var_161_object;
	func_4946(var_161_object);
	SetTimer((int)1, (int)5);
	CanSee(var_159_bool, var_149_object);
	var_164_bool = var_159_bool;
	if(var_164_bool != 0) {
		var_2_object = true;
		var_165_object = Obj();
		var_149_object = var_165_object;
		func_4780(var_165_object);
	} else {
		var_2_object = false;
	}
	var_172_bool = 0; var_173_object = Obj();
	var_149_object = var_173_object;
	func_4365(var_172_bool, var_173_object);
	if(var_172_bool != 0) {
		var_176_object = Obj();
		func_4839(var_176_object);
		SendPlayerEnemy(var_149_object, var_176_object);
	}
	var_177_bool = 0; var_178_object = Obj(); var_179_float = 0; var_180_float = 0; var_181_bool = 0; var_182_bool = 0;
	var_149_object = var_178_object;
	var_150_float = var_179_float;
	var_151_float = var_180_float;
	var_152_bool = var_181_bool;
	var_153_bool = var_182_bool;
	func_4185(var_159_bool, var_160_bool, var_177_bool, var_178_object, var_179_float, var_180_float, var_181_bool, var_182_bool);
	var_177_bool = var_160_bool;
	var_228_object = var_2_object;
	if(var_228_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_160_bool = var_148_bool;
	return 4;
	
}


func_5107(var_186_bool, var_187_object)
{
	var_188_bool = 0; var_189_object = Obj();
	var_187_object = var_189_object;
	func_5203(var_189_object);
	if(var_188_bool != 0) {
		var_186_bool = 1;
		return 0;
	}
	var_186_bool = 0;
	return 0;
}


func_6133(var_506_bool, var_507_object)
{
	var_508_int = 0; var_509_bool = 0; var_510_int = 0; var_511_bool = 0;
	@@var_507_object:GetItemID(var_510_int);
	HasInvItemProperty(var_511_bool, var_510_int, "Weapon");
	var_511_bool = var_506_bool;
	return 4;
}


func_5626(var_21_bool, var_22_object, var_23_string)
{
	var_25_bool = var_23_string == "unholster";
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_22_object = var_27_object;
		func_5943(var_27_object);
		var_26_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0x1618";
	}
	var_29_bool = var_23_string == "player_shot";
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_22_object = var_31_object;
		func_5948(var_30_bool, var_31_object);
		var_30_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0x1618";
	}
	var_46_bool = var_23_string == "battle";
	if(var_46_bool != 0) {
		var_47_bool = 0; var_48_object = Obj();
		var_22_object = var_48_object;
		func_5969(var_48_object);
		var_47_bool = var_21_bool;
		return 0;
	}
	var_21_bool = 0;
	return 0;
}


func_3067(var_1_object)
{
	KillTimer((int)110);
	var_1_object = false;
	var_19_object = var_0_object;
	if(var_19_object != 0) {
		func_6219();
	} else {
		Stop();
	}
	return 0;
	
}


func_6141(var_41_object, var_44_object)
{
	var_42_int = 0; var_43_object = Obj();
	var_41_object = var_43_object;
	TaskCall(0);
	func_0(var_44_object, var_42_int, var_43_object);
	TaskReturn();
	var_439_bool = var_44_object == (int)100;
	if(var_439_bool != 0) {
		var_440_object = Obj();
		var_41_object = var_440_object;
		func_5986(var_440_object);
	}
	return 0;
}


