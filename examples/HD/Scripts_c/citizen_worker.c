// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectVector/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,HasInvItemProperty/3,GetInvItemProperty/3,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,CreateIntVector/1,ChooseItem/4,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|A:SetReturnValue|W:branch|A:GetItemID|W:Price|W:BarterPrice|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:killme|A:GetSubContainerCount|A:GetItemCount|A:GetItem|W:HasDurability|W:durability|W:repair.xml|W:money|A:SetItem|W:Weapon|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
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
// @TASK_5: vars=object params=1
// @EVENT_0: op=0xdb2 vars=object
// @EVENT_17: op=0xdc6 vars=object
// @EVENT_30: op=0xdde vars=object,object,bool
// @EVENT_40: op=0xdfa vars=object
// @EVENT_42: op=0xe0e vars=object,string
// @EVENT_26: op=0xe33 vars=string
// @EVENT_41: op=0xe4c vars=object
// @EVENT_7: op=0xe55 vars=int
// @EVENT_6: op=0xe78 vars=
// @EVENT_1: op=0xe7f vars=object
// @TASK_6: vars=object,int,int,bool,float,int params=1
// @TASK_7: vars=bool,object,bool params=6
// @EVENT_6: op=0x1131 vars=
// @EVENT_7: op=0x1169 vars=int
// @EVENT_1: op=0x1184 vars=object
// @EVENT_2: op=0x1193 vars=object
// @EVENT_10: op=0x1219 vars=object
// @EVENT_41: op=0x1224 vars=object
// @STANDALONE_EVENT_16: op=0x171d vars=object,string
// @STANDALONE_EVENT_41: op=0x172a vars=object
// @STANDALONE_EVENT_22: op=0x1730 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x1738 vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x259,0x26f,0xa73,0xa90,0xaef,0xb09,0xb0b,0xb0d,0xba8,0xbb6,0xbc9,0xbcf,0xbdb,0xbf2,0xc63,0xd01,0xd0f,0xd16,0xe33,0xe4c,0xe78,0xe7f,0xe8d,0xe95,0xe98,0x1129,0x1131,0x1169,0x1184,0x1193,0x1207,0x1219,0x1224,0x122d,0x1238,0x143f,0x1446,0x1457,0x1460,0x146a,0x14ae,0x14b3,0x14bf,0x14cb,0x14d7,0x14e1,0x14eb,0x14f5,0x14ff,0x1509,0x1513,0x151d,0x1527,0x1531,0x153b,0x1545,0x154f,0x1559,0x1560,0x1563,0x156a,0x1571,0x1578,0x157f,0x1586,0x158d,0x1594,0x159b,0x15a2,0x15a9,0x160c,0x1715,0x172a,0x1730,0x1738,0x1742,0x1762,0x1792,0x1798,0x17da,0x17e3,0x17eb,0x17f5,0x1848,0x184f,0x1872,0x1875,0x1877,0x1883,0x188d,0x189f,0x18a5,0x18a8,0x18af,0x18b2,0x18c3,0x18c9,0x18cc,0x18ce,0x18d1,0x196e,0x199f,0x19a2,0x19ac

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	if((int)1 != 0) {
		func_5119();
		var_23_bool = var_19_bool == (int)40087;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_5294(var_25_object);
		}
		var_28_bool = var_19_bool == (int)45510;
		if(var_28_bool != 0) {
			var_29_object = Obj(); var_30_object = Obj();
			var_29_object = var_1_object;
			var_30_object = var_0_object;
			func_5294(var_30_object);
		}
		var_32_bool = var_19_bool == (int)45517;
		if(var_32_bool != 0) {
			var_33_object = Obj(); var_34_object = Obj();
			var_33_object = var_1_object;
			var_34_object = var_0_object;
			func_5294(var_34_object);
		}
		var_36_bool = var_19_bool == (int)40085;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_5294(var_38_object);
		}
		var_40_bool = var_19_bool == (int)40086;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5294(var_42_object);
		}
		var_44_bool = var_18_object == (int)45493;
		if(var_44_bool != 0) {
			var_45_bool = 0; var_46_object = Obj();
			var_46_object = var_1_object;
			func_5323(var_46_object);
			if(var_45_bool != 0) {
				var_53_string = "";
				func_601(var_19_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543041);
				@@@var_0_object:ClearReplies();
				var_71_bool = 0;
				var_71_bool = 0;
				var_72_bool = 0;
				var_72_bool = 0;
				var_73_bool = 0; var_74_object = Obj();
				var_74_object = var_1_object;
				func_5355(var_73_bool, var_74_object);
				var_84_bool = var_73_bool == 0; //@nz
				if(var_84_bool != 0) {
					var_85_bool = 0; var_86_object = Obj();
					var_86_object = var_1_object;
					func_5365(var_85_bool, var_86_object);
					var_91_bool = var_85_bool == 0; //@nz
					if(var_91_bool != 0) {
						var_72_bool = 1;
					}
				}
				if(var_72_bool != 0) {
					var_92_bool = 0; var_93_object = Obj();
					var_93_object = var_1_object;
					func_5335(var_92_bool, var_93_object);
					if(var_92_bool != 0) {
						var_71_bool = 1;
					}
				}
				if(var_71_bool != 0) {
					@@@var_0_object:AddReply((int)543044, (int)45498, (int)45496);
				}
				var_101_bool = 0;
				var_101_bool = 1;
				var_102_bool = 0;
				var_102_bool = 1;
				var_103_bool = 0;
				var_103_bool = 1;
				var_104_bool = 0; var_105_object = Obj();
				var_105_object = var_1_object;
				func_5425(var_104_bool, var_105_object);
				if(var_104_bool != 1) {
					var_110_bool = 0; var_111_object = Obj();
					var_111_object = var_1_object;
					func_5435(var_110_bool, var_111_object);
					if(var_110_bool != 1) {
						var_103_bool = 0;
					}
				}
				if(var_103_bool != 1) {
					var_116_bool = 0; var_117_object = Obj();
					var_117_object = var_1_object;
					func_5445(var_116_bool, var_117_object);
					if(var_116_bool != 1) {
						var_102_bool = 0;
					}
				}
				if(var_102_bool != 1) {
					var_122_bool = 0; var_123_object = Obj();
					var_123_object = var_1_object;
					func_5455(var_122_bool, var_123_object);
					if(var_122_bool != 1) {
						var_101_bool = 0;
					}
				}
				if(var_101_bool != 0) {
					@@@var_0_object:AddReply((int)543057, (int)45513, (int)45512);
				}
				var_131_bool = 0;
				var_131_bool = 1;
				var_132_bool = 0; var_133_object = Obj();
				var_133_object = var_1_object;
				func_5405(var_132_bool, var_133_object);
				if(var_132_bool != 1) {
					var_138_bool = 0; var_139_object = Obj();
					var_139_object = var_1_object;
					func_5415(var_138_bool, var_139_object);
					if(var_138_bool != 1) {
						var_131_bool = 0;
					}
				}
				if(var_131_bool != 0) {
					@@@var_0_object:AddReply((int)543063, (int)45520, (int)45518);
				}
				var_147_bool = 0; var_148_object = Obj();
				var_148_object = var_1_object;
				func_5335(var_147_bool, var_148_object);
				if(var_147_bool != 0) {
					@@@var_0_object:AddReply((int)538210, (int)-1, (int)40087);
				}
				var_152_bool = 0; var_153_object = Obj();
				var_153_object = var_1_object;
				func_5335(var_152_bool, var_153_object);
				if(var_152_bool != 0) {
					@@@var_0_object:AddReply((int)543042, (int)-1, (int)45494);
				}
				var_157_bool = 0; var_158_object = Obj();
				var_158_object = var_1_object;
				func_5335(var_157_bool, var_158_object);
				if(var_157_bool != 0) {
					@@@var_0_object:AddReply((int)543043, (int)-1, (int)45495);
				}
				var_162_bool = 0;
				var_162_bool = 1;
				var_163_bool = 0;
				var_163_bool = 1;
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_5405(var_164_bool, var_165_object);
				if(var_164_bool != 1) {
					var_166_bool = 0; var_167_object = Obj();
					var_167_object = var_1_object;
					func_5415(var_166_bool, var_167_object);
					if(var_166_bool != 1) {
						var_163_bool = 0;
					}
				}
				if(var_163_bool != 1) {
					var_168_bool = 0; var_169_object = Obj();
					var_169_object = var_1_object;
					func_5425(var_168_bool, var_169_object);
					if(var_168_bool != 1) {
						var_162_bool = 0;
					}
				}
				if(var_162_bool != 0) {
					@@@var_0_object:AddReply((int)543055, (int)-1, (int)45510);
				}
				var_173_bool = 0;
				var_173_bool = 1;
				var_174_bool = 0; var_175_object = Obj();
				var_175_object = var_1_object;
				func_5405(var_174_bool, var_175_object);
				if(var_174_bool != 1) {
					var_176_bool = 0; var_177_object = Obj();
					var_177_object = var_1_object;
					func_5415(var_176_bool, var_177_object);
					if(var_176_bool != 1) {
						var_173_bool = 0;
					}
				}
				if(var_173_bool != 0) {
					@@@var_0_object:AddReply((int)543056, (int)-1, (int)45511);
				}
				var_181_bool = 0;
				var_181_bool = 1;
				var_182_bool = 0;
				var_182_bool = 1;
				var_183_bool = 0; var_184_object = Obj();
				var_184_object = var_1_object;
				func_5435(var_183_bool, var_184_object);
				if(var_183_bool != 1) {
					var_185_bool = 0; var_186_object = Obj();
					var_186_object = var_1_object;
					func_5445(var_185_bool, var_186_object);
					if(var_185_bool != 1) {
						var_182_bool = 0;
					}
				}
				if(var_182_bool != 1) {
					var_187_bool = 0; var_188_object = Obj();
					var_188_object = var_1_object;
					func_5455(var_187_bool, var_188_object);
					if(var_187_bool != 1) {
						var_181_bool = 0;
					}
				}
				if(var_181_bool != 0) {
					@@@var_0_object:AddReply((int)543062, (int)-1, (int)45517);
				}
				var_192_bool = 0;
				var_192_bool = 1;
				var_193_bool = 0;
				var_193_bool = 1;
				var_194_bool = 0;
				var_194_bool = 1;
				var_195_bool = 0; var_196_object = Obj();
				var_196_object = var_1_object;
				func_5425(var_195_bool, var_196_object);
				if(var_195_bool != 1) {
					var_197_bool = 0; var_198_object = Obj();
					var_198_object = var_1_object;
					func_5435(var_197_bool, var_198_object);
					if(var_197_bool != 1) {
						var_194_bool = 0;
					}
				}
				if(var_194_bool != 1) {
					var_199_bool = 0; var_200_object = Obj();
					var_200_object = var_1_object;
					func_5445(var_199_bool, var_200_object);
					if(var_199_bool != 1) {
						var_193_bool = 0;
					}
				}
				if(var_193_bool != 1) {
					var_201_bool = 0; var_202_object = Obj();
					var_202_object = var_1_object;
					func_5455(var_201_bool, var_202_object);
					if(var_201_bool != 1) {
						var_192_bool = 0;
					}
				}
				if(var_192_bool != 0) {
					@@@var_0_object:AddReply((int)543064, (int)-1, (int)45519);
				}
				return 0;
			}
			var_206_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538207);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_5299(var_209_object);
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)538208, (int)-1, (int)40085);
			}
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_5311(var_218_object);
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)538209, (int)-1, (int)40086);
			}
			var_226_bool = 0;
			var_226_bool = 0;
			var_227_bool = 0; var_228_object = Obj();
			var_228_object = var_1_object;
			func_5299(var_228_object);
			if(var_227_bool != 0) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_5355(var_229_bool, var_230_object);
				if(var_229_bool != 0) {
					var_226_bool = 1;
				}
			}
			if(var_226_bool != 0) {
				@@@var_0_object:AddReply((int)538211, (int)40089, (int)40088);
			}
			var_234_bool = 0;
			var_234_bool = 0;
			var_235_bool = 0; var_236_object = Obj();
			var_236_object = var_1_object;
			func_5299(var_236_object);
			if(var_235_bool != 0) {
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_5355(var_237_bool, var_238_object);
				if(var_237_bool != 0) {
					var_234_bool = 1;
				}
			}
			if(var_234_bool != 0) {
				@@@var_0_object:AddReply((int)538222, (int)40100, (int)40099);
			}
			var_242_bool = 0;
			var_242_bool = 0;
			var_243_bool = 0; var_244_object = Obj();
			var_244_object = var_1_object;
			func_5299(var_244_object);
			if(var_243_bool != 0) {
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_5365(var_245_bool, var_246_object);
				if(var_245_bool != 0) {
					var_242_bool = 1;
				}
			}
			if(var_242_bool != 0) {
				@@@var_0_object:AddReply((int)538235, (int)40114, (int)40113);
			}
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_5299(var_252_object);
			if(var_251_bool != 0) {
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_5375(var_253_bool, var_254_object);
				if(var_253_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)538253, (int)40135, (int)40134);
			}
			var_262_bool = 0;
			var_262_bool = 0;
			var_263_bool = 0; var_264_object = Obj();
			var_264_object = var_1_object;
			func_5299(var_264_object);
			if(var_263_bool != 0) {
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_5385(var_265_bool, var_266_object);
				if(var_265_bool != 0) {
					var_262_bool = 1;
				}
			}
			if(var_262_bool != 0) {
				@@@var_0_object:AddReply((int)538272, (int)40155, (int)40154);
			}
			var_274_bool = 0; var_275_object = Obj();
			var_275_object = var_1_object;
			func_5395(var_274_bool, var_275_object);
			if(var_274_bool != 0) {
				@@@var_0_object:AddReply((int)538291, (int)40174, (int)40173);
			}
			var_283_bool = 0;
			var_283_bool = 0;
			var_284_bool = 0; var_285_object = Obj();
			var_285_object = var_1_object;
			func_5299(var_285_object);
			if(var_284_bool != 0) {
				var_286_bool = 0; var_287_object = Obj();
				var_287_object = var_1_object;
				func_5405(var_286_bool, var_287_object);
				if(var_286_bool != 0) {
					var_283_bool = 1;
				}
			}
			if(var_283_bool != 0) {
				@@@var_0_object:AddReply((int)538308, (int)40192, (int)40191);
			}
			var_291_bool = 0; var_292_object = Obj();
			var_292_object = var_1_object;
			func_5415(var_291_bool, var_292_object);
			if(var_291_bool != 0) {
				@@@var_0_object:AddReply((int)538322, (int)40206, (int)40205);
			}
			var_296_bool = 0; var_297_object = Obj();
			var_297_object = var_1_object;
			func_5345(var_296_bool, var_297_object);
			if(var_296_bool != 0) {
				@@@var_0_object:AddReply((int)538332, (int)40216, (int)40215);
			}
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_5299(var_305_object);
			if(var_304_bool != 0) {
				var_306_bool = 0; var_307_object = Obj();
				var_307_object = var_1_object;
				func_5425(var_306_bool, var_307_object);
				if(var_306_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)538347, (int)40233, (int)40232);
			}
			var_311_bool = 0; var_312_object = Obj();
			var_312_object = var_1_object;
			func_5435(var_311_bool, var_312_object);
			if(var_311_bool != 0) {
				@@@var_0_object:AddReply((int)538364, (int)40250, (int)40249);
			}
			var_316_bool = 0;
			var_316_bool = 0;
			var_317_bool = 0; var_318_object = Obj();
			var_318_object = var_1_object;
			func_5299(var_318_object);
			if(var_317_bool != 0) {
				var_319_bool = 0; var_320_object = Obj();
				var_320_object = var_1_object;
				func_5445(var_319_bool, var_320_object);
				if(var_319_bool != 0) {
					var_316_bool = 1;
				}
			}
			if(var_316_bool != 0) {
				@@@var_0_object:AddReply((int)538375, (int)40262, (int)40261);
			}
			var_324_bool = 0;
			var_324_bool = 0;
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_5299(var_326_object);
			if(var_325_bool != 0) {
				var_327_bool = 0; var_328_object = Obj();
				var_328_object = var_1_object;
				func_5445(var_327_bool, var_328_object);
				if(var_327_bool != 0) {
					var_324_bool = 1;
				}
			}
			if(var_324_bool != 0) {
				@@@var_0_object:AddReply((int)538385, (int)40272, (int)40271);
			}
			@@@var_0_object:AddReply((int)538396, (int)-1, (int)40282);
			return 0;
		}
		var_336_bool = var_18_object == (int)40272;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538386);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538387, (int)40274, (int)40273);
			@@@var_0_object:AddReply((int)538395, (int)-1, (int)40281);
			return 0;
		}
		var_346_bool = var_18_object == (int)40274;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538389, (int)40276, (int)40275);
			@@@var_0_object:AddReply((int)538392, (int)40279, (int)40278);
			return 0;
		}
		var_356_bool = var_18_object == (int)40279;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538394, (int)-1, (int)40280);
			return 0;
		}
		var_363_bool = var_18_object == (int)40276;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538390);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538391, (int)-1, (int)40277);
			return 0;
		}
		var_370_bool = var_18_object == (int)40262;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538377, (int)40264, (int)40263);
			@@@var_0_object:AddReply((int)538384, (int)-1, (int)40270);
			return 0;
		}
		var_380_bool = var_18_object == (int)40264;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538379, (int)40266, (int)40265);
			@@@var_0_object:AddReply((int)538383, (int)-1, (int)40269);
			return 0;
		}
		var_390_bool = var_18_object == (int)40266;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538381, (int)-1, (int)40267);
			@@@var_0_object:AddReply((int)538382, (int)-1, (int)40268);
			return 0;
		}
		var_400_bool = var_18_object == (int)40250;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538366, (int)40252, (int)40251);
			@@@var_0_object:AddReply((int)538370, (int)40256, (int)40255);
			@@@var_0_object:AddReply((int)538374, (int)-1, (int)40260);
			return 0;
		}
		var_413_bool = var_18_object == (int)40256;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538372, (int)40252, (int)40257);
			@@@var_0_object:AddReply((int)538373, (int)-1, (int)40259);
			return 0;
		}
		var_423_bool = var_18_object == (int)40252;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538367);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538368, (int)-1, (int)40253);
			@@@var_0_object:AddReply((int)538369, (int)-1, (int)40254);
			return 0;
		}
		var_433_bool = var_18_object == (int)40233;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538349, (int)40235, (int)40234);
			@@@var_0_object:AddReply((int)538363, (int)-1, (int)40248);
			return 0;
		}
		var_443_bool = var_18_object == (int)40235;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538351, (int)40237, (int)40236);
			@@@var_0_object:AddReply((int)538362, (int)-1, (int)40247);
			return 0;
		}
		var_453_bool = var_18_object == (int)40237;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538352);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538353, (int)40239, (int)40238);
			@@@var_0_object:AddReply((int)538359, (int)40245, (int)40244);
			return 0;
		}
		var_463_bool = var_18_object == (int)40245;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538361, (int)-1, (int)40246);
			return 0;
		}
		var_470_bool = var_18_object == (int)40239;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538355, (int)-1, (int)40240);
			@@@var_0_object:AddReply((int)538356, (int)40242, (int)40241);
			return 0;
		}
		var_480_bool = var_18_object == (int)40242;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538358, (int)-1, (int)40243);
			return 0;
		}
		var_487_bool = var_18_object == (int)40216;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538334, (int)40218, (int)40217);
			@@@var_0_object:AddReply((int)538346, (int)-1, (int)40231);
			return 0;
		}
		var_497_bool = var_18_object == (int)40218;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538336, (int)40220, (int)40219);
			@@@var_0_object:AddReply((int)538343, (int)40228, (int)40227);
			return 0;
		}
		var_507_bool = var_18_object == (int)40228;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538344);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538345, (int)40220, (int)40229);
			return 0;
		}
		var_514_bool = var_18_object == (int)40220;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538337);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538338, (int)40222, (int)40221);
			@@@var_0_object:AddReply((int)538342, (int)40222, (int)40225);
			return 0;
		}
		var_524_bool = var_18_object == (int)40222;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538339);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538340, (int)-1, (int)40223);
			@@@var_0_object:AddReply((int)538341, (int)-1, (int)40224);
			return 0;
		}
		var_534_bool = var_18_object == (int)40206;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538324, (int)40208, (int)40207);
			@@@var_0_object:AddReply((int)538331, (int)-1, (int)40214);
			return 0;
		}
		var_544_bool = var_18_object == (int)40208;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538326, (int)40210, (int)40209);
			@@@var_0_object:AddReply((int)538330, (int)-1, (int)40213);
			return 0;
		}
		var_554_bool = var_18_object == (int)40210;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538328, (int)-1, (int)40211);
			@@@var_0_object:AddReply((int)538329, (int)-1, (int)40212);
			return 0;
		}
		var_564_bool = var_18_object == (int)40192;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538310, (int)40194, (int)40193);
			return 0;
		}
		var_571_bool = var_18_object == (int)40194;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538312, (int)40196, (int)40195);
			@@@var_0_object:AddReply((int)538316, (int)40200, (int)40199);
			return 0;
		}
		var_581_bool = var_18_object == (int)40200;
		if(var_581_bool != 0) {
			var_582_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538318, (int)40202, (int)40201);
			return 0;
		}
		var_588_bool = var_18_object == (int)40202;
		if(var_588_bool != 0) {
			var_589_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538320, (int)-1, (int)40203);
			@@@var_0_object:AddReply((int)538321, (int)-1, (int)40204);
			return 0;
		}
		var_598_bool = var_18_object == (int)40196;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538314, (int)-1, (int)40197);
			@@@var_0_object:AddReply((int)538315, (int)-1, (int)40198);
			return 0;
		}
		var_608_bool = var_18_object == (int)40174;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538292);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538293, (int)40176, (int)40175);
			@@@var_0_object:AddReply((int)538302, (int)40186, (int)40185);
			return 0;
		}
		var_618_bool = var_18_object == (int)40186;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538304, (int)40188, (int)40187);
			return 0;
		}
		var_625_bool = var_18_object == (int)40188;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538305);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538306, (int)-1, (int)40189);
			@@@var_0_object:AddReply((int)538307, (int)-1, (int)40190);
			return 0;
		}
		var_635_bool = var_18_object == (int)40176;
		if(var_635_bool != 0) {
			var_636_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538295, (int)40178, (int)40177);
			@@@var_0_object:AddReply((int)538299, (int)40182, (int)40181);
			return 0;
		}
		var_645_bool = var_18_object == (int)40182;
		if(var_645_bool != 0) {
			var_646_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538301, (int)40178, (int)40183);
			return 0;
		}
		var_652_bool = var_18_object == (int)40178;
		if(var_652_bool != 0) {
			var_653_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538297, (int)-1, (int)40179);
			var_658_bool = 0; var_659_object = Obj();
			var_659_object = var_1_object;
			func_5299(var_659_object);
			if(var_658_bool != 0) {
				@@@var_0_object:AddReply((int)538298, (int)-1, (int)40180);
			}
			return 0;
		}
		var_664_bool = var_18_object == (int)40155;
		if(var_664_bool != 0) {
			var_665_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538273);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538274, (int)40157, (int)40156);
			@@@var_0_object:AddReply((int)538289, (int)-1, (int)40171);
			@@@var_0_object:AddReply((int)538290, (int)-1, (int)40172);
			return 0;
		}
		var_677_bool = var_18_object == (int)40157;
		if(var_677_bool != 0) {
			var_678_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538276, (int)40159, (int)40158);
			@@@var_0_object:AddReply((int)538288, (int)-1, (int)40170);
			return 0;
		}
		var_687_bool = var_18_object == (int)40159;
		if(var_687_bool != 0) {
			var_688_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538278, (int)40161, (int)40160);
			return 0;
		}
		var_694_bool = var_18_object == (int)40161;
		if(var_694_bool != 0) {
			var_695_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538279);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538280, (int)40163, (int)40162);
			@@@var_0_object:AddReply((int)538284, (int)40167, (int)40166);
			return 0;
		}
		var_704_bool = var_18_object == (int)40167;
		if(var_704_bool != 0) {
			var_705_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538286, (int)-1, (int)40168);
			@@@var_0_object:AddReply((int)538287, (int)-1, (int)40169);
			return 0;
		}
		var_714_bool = var_18_object == (int)40163;
		if(var_714_bool != 0) {
			var_715_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538282, (int)-1, (int)40164);
			@@@var_0_object:AddReply((int)538283, (int)-1, (int)40165);
			return 0;
		}
		var_724_bool = var_18_object == (int)40135;
		if(var_724_bool != 0) {
			var_725_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538254);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538255, (int)40137, (int)40136);
			@@@var_0_object:AddReply((int)538271, (int)-1, (int)40153);
			return 0;
		}
		var_734_bool = var_18_object == (int)40137;
		if(var_734_bool != 0) {
			var_735_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538256);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538257, (int)40139, (int)40138);
			@@@var_0_object:AddReply((int)538269, (int)40139, (int)40150);
			@@@var_0_object:AddReply((int)538270, (int)-1, (int)40152);
			return 0;
		}
		var_747_bool = var_18_object == (int)40139;
		if(var_747_bool != 0) {
			var_748_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538259, (int)40141, (int)40140);
			return 0;
		}
		var_754_bool = var_18_object == (int)40141;
		if(var_754_bool != 0) {
			var_755_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538261, (int)40143, (int)40142);
			@@@var_0_object:AddReply((int)538265, (int)40147, (int)40146);
			return 0;
		}
		var_764_bool = var_18_object == (int)40147;
		if(var_764_bool != 0) {
			var_765_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538267, (int)-1, (int)40148);
			@@@var_0_object:AddReply((int)538268, (int)-1, (int)40149);
			return 0;
		}
		var_774_bool = var_18_object == (int)40143;
		if(var_774_bool != 0) {
			var_775_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538263, (int)-1, (int)40144);
			@@@var_0_object:AddReply((int)538264, (int)-1, (int)40145);
			return 0;
		}
		var_784_bool = var_18_object == (int)40114;
		if(var_784_bool != 0) {
			var_785_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538236);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538237, (int)40116, (int)40115);
			@@@var_0_object:AddReply((int)538252, (int)-1, (int)40133);
			return 0;
		}
		var_794_bool = var_18_object == (int)40116;
		if(var_794_bool != 0) {
			var_795_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538239, (int)40118, (int)40117);
			@@@var_0_object:AddReply((int)538251, (int)40120, (int)40131);
			return 0;
		}
		var_804_bool = var_18_object == (int)40118;
		if(var_804_bool != 0) {
			var_805_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538240);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538241, (int)40120, (int)40119);
			@@@var_0_object:AddReply((int)538250, (int)40120, (int)40129);
			return 0;
		}
		var_814_bool = var_18_object == (int)40120;
		if(var_814_bool != 0) {
			var_815_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538242);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538243, (int)40122, (int)40121);
			@@@var_0_object:AddReply((int)538249, (int)40124, (int)40127);
			return 0;
		}
		var_824_bool = var_18_object == (int)40122;
		if(var_824_bool != 0) {
			var_825_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538244);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538245, (int)40124, (int)40123);
			return 0;
		}
		var_831_bool = var_18_object == (int)40124;
		if(var_831_bool != 0) {
			var_832_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538247, (int)-1, (int)40125);
			@@@var_0_object:AddReply((int)538248, (int)-1, (int)40126);
			return 0;
		}
		var_841_bool = var_18_object == (int)40100;
		if(var_841_bool != 0) {
			var_842_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538224, (int)40102, (int)40101);
			@@@var_0_object:AddReply((int)538234, (int)-1, (int)40112);
			return 0;
		}
		var_851_bool = var_18_object == (int)40102;
		if(var_851_bool != 0) {
			var_852_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538226, (int)40104, (int)40103);
			@@@var_0_object:AddReply((int)538230, (int)40108, (int)40107);
			return 0;
		}
		var_861_bool = var_18_object == (int)40108;
		if(var_861_bool != 0) {
			var_862_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538232, (int)40104, (int)40109);
			@@@var_0_object:AddReply((int)538233, (int)-1, (int)40111);
			return 0;
		}
		var_871_bool = var_18_object == (int)40104;
		if(var_871_bool != 0) {
			var_872_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538228, (int)-1, (int)40105);
			@@@var_0_object:AddReply((int)538229, (int)-1, (int)40106);
			return 0;
		}
		var_881_bool = var_18_object == (int)40089;
		if(var_881_bool != 0) {
			var_882_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538213, (int)40091, (int)40090);
			return 0;
		}
		var_888_bool = var_18_object == (int)40091;
		if(var_888_bool != 0) {
			var_889_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538215, (int)40093, (int)40092);
			@@@var_0_object:AddReply((int)538221, (int)-1, (int)40098);
			return 0;
		}
		var_898_bool = var_18_object == (int)40093;
		if(var_898_bool != 0) {
			var_899_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538217, (int)40095, (int)40094);
			return 0;
		}
		var_905_bool = var_18_object == (int)40095;
		if(var_905_bool != 0) {
			var_906_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538219, (int)-1, (int)40096);
			@@@var_0_object:AddReply((int)538220, (int)-1, (int)40097);
			return 0;
		}
		var_915_bool = var_18_object == (int)45520;
		if(var_915_bool != 0) {
			var_916_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543066, (int)-1, (int)45521);
			@@@var_0_object:AddReply((int)543067, (int)45524, (int)45522);
			@@@var_0_object:AddReply((int)543068, (int)-1, (int)45523);
			return 0;
		}
		var_928_bool = var_18_object == (int)45524;
		if(var_928_bool != 0) {
			var_929_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543070, (int)-1, (int)45525);
			@@@var_0_object:AddReply((int)543071, (int)-1, (int)45526);
			return 0;
		}
		var_938_bool = var_18_object == (int)45513;
		if(var_938_bool != 0) {
			var_939_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543059, (int)-1, (int)45514);
			@@@var_0_object:AddReply((int)543060, (int)-1, (int)45515);
			@@@var_0_object:AddReply((int)543061, (int)-1, (int)45516);
			return 0;
		}
		var_951_bool = var_18_object == (int)45498;
		if(var_951_bool != 0) {
			var_952_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543047, (int)45506, (int)45499);
			@@@var_0_object:AddReply((int)543050, (int)45503, (int)45502);
			@@@var_0_object:AddReply((int)543048, (int)-1, (int)45500);
			@@@var_0_object:AddReply((int)543049, (int)-1, (int)45501);
			return 0;
		}
		var_967_bool = var_18_object == (int)45503;
		if(var_967_bool != 0) {
			var_968_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543054, (int)-1, (int)45509);
			return 0;
		}
		var_974_bool = var_18_object == (int)45506;
		if(var_974_bool != 0) {
			var_975_string = "";
			func_601(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543053, (int)-1, (int)45507);
			return 0;
		}
		var_3_string = true;
		var_980_bool = 0;
		func_6533(var_980_bool);
		if(var_980_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x270";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_6309(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_25_object = Obj();
		var_18_bool = var_25_object;
		func_6312(var_25_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_6318();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_6309(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3042(var_20_int);
		}
		var_28_object = Obj();
		var_18_bool = var_28_object;
		func_6312(var_28_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_6040(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_6123(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_3042(var_20_int);
		}
		var_71_object = Obj();
		var_18_bool = var_71_object;
		func_6133(var_71_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_6562(var_23_bool, var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_85_int = 0; var_86_object = Obj(); var_87_bool = 0;
		var_18_bool = var_86_object;
		var_20_bool = var_87_bool;
		func_6216(var_86_object, var_87_bool);
		var_85_int = var_22_int;
		var_119_bool = var_22_int > (int)0;
		if(var_119_bool != 0) {
			var_121_bool = var_22_int > (int)1;
			if(var_121_bool != 0) {
				func_3042(var_22_int);
			}
			var_123_object = Obj();
			var_18_bool = var_123_object;
			func_6223(var_123_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_6258(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3042(var_20_int);
		}
		var_18_bool = Obj();
		func_6261();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_5954(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_3042(var_21_int);
		var_51_object = Obj(); var_52_string = "";
		var_18_object = var_51_object;
		var_19_bool = var_52_string;
		func_5986(var_51_object, var_52_string);
	} else {
		var_127_int = 0; var_128_string = ""; var_129_object = Obj();
		var_19_bool = var_128_string;
		var_18_object = var_129_object;
		func_6263(var_127_int, var_128_string, var_129_object);
		var_127_int = var_21_int;
		var_172_bool = var_21_int > (int)0;
		if(var_172_bool == 0) goto Label_2983;
		var_174_bool = var_21_int > (int)1;
		if(var_174_bool != 0) {
			func_3042(var_21_int);
		}
		var_175_string = ""; var_176_object = Obj();
		var_19_bool = var_175_string;
		var_18_object = var_176_object;
		func_6275(var_175_string, var_176_object);
	}
Label_2983:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_6053(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_3042(var_18_bool);
		var_29_string = "";
		var_18_bool = var_29_string;
		func_6069(var_29_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_6011(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_3042(var_18_bool);
		var_32_object = Obj();
		var_18_bool = var_32_object;
		func_6034(var_32_object);
	} else {
		var_34_object = Obj();
		var_18_bool = var_34_object;
		func_3067(var_18_bool, var_34_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj();
	var_18_bool = var_19_object;
	func_3067(var_18_bool, var_19_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_20_bool = var_18_bool != (int)110;
	if(var_20_bool != 0) {
		return 0;
	}
	var_2_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3042(var_17_bool);
	func_6318();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3042(var_18_bool);
	var_18_bool = Obj();
	func_5930();
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool);
	return 0;
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_6309(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3445();
		}
		var_27_object = Obj();
		var_18_bool = var_27_object;
		func_6312(var_27_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_6040(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_6123(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_3445();
		}
		var_70_object = Obj();
		var_18_bool = var_70_object;
		func_6133(var_70_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_6562(var_23_bool, var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_85_int = 0; var_86_object = Obj(); var_87_bool = 0;
		var_18_bool = var_86_object;
		var_20_bool = var_87_bool;
		func_6216(var_86_object, var_87_bool);
		var_85_int = var_22_int;
		var_119_bool = var_22_int > (int)0;
		if(var_119_bool != 0) {
			var_121_bool = var_22_int > (int)1;
			if(var_121_bool != 0) {
				func_3445();
			}
			var_122_object = Obj();
			var_18_bool = var_122_object;
			func_6223(var_122_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_6258(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3445();
		}
		var_18_bool = Obj();
		func_6261();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_5954(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_3445();
		var_50_object = Obj(); var_51_string = "";
		var_18_object = var_50_object;
		var_19_bool = var_51_string;
		func_5986(var_50_object, var_51_string);
	} else {
		var_126_int = 0; var_127_string = ""; var_128_object = Obj();
		var_19_bool = var_127_string;
		var_18_object = var_128_object;
		func_6263(var_126_int, var_127_string, var_128_object);
		var_126_int = var_21_int;
		var_171_bool = var_21_int > (int)0;
		if(var_171_bool == 0) goto Label_3328;
		var_173_bool = var_21_int > (int)1;
		if(var_173_bool != 0) {
			func_3445();
		}
		var_174_string = ""; var_175_object = Obj();
		var_19_bool = var_174_string;
		var_18_object = var_175_object;
		func_6275(var_174_string, var_175_object);
	}
Label_3328:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_6053(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_3445();
		var_28_string = "";
		var_18_bool = var_28_string;
		func_6069(var_28_string);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3445();
	func_6318();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_6011(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_3445();
		var_31_object = Obj();
		var_18_bool = var_31_object;
		func_6034(var_31_object);
	}
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_6309(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3649();
		}
		var_29_object = Obj();
		var_18_bool = var_29_object;
		func_6312(var_29_object);
	}
	return 2;
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_6040(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_6123(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_3649();
		}
		var_72_object = Obj();
		var_18_bool = var_72_object;
		func_6133(var_72_object);
	}
	return 2;
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_6562(var_23_bool, var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_85_int = 0; var_86_object = Obj(); var_87_bool = 0;
		var_18_bool = var_86_object;
		var_20_bool = var_87_bool;
		func_6216(var_86_object, var_87_bool);
		var_85_int = var_22_int;
		var_119_bool = var_22_int > (int)0;
		if(var_119_bool != 0) {
			var_121_bool = var_22_int > (int)1;
			if(var_121_bool != 0) {
				func_3649();
			}
			var_124_object = Obj();
			var_18_bool = var_124_object;
			func_6223(var_124_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_6258(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3649();
		}
		var_18_bool = Obj();
		func_6261();
	}
	return 2;
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_5954(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_3649();
		var_52_object = Obj(); var_53_string = "";
		var_18_object = var_52_object;
		var_19_bool = var_53_string;
		func_5986(var_52_object, var_53_string);
	} else {
		var_128_int = 0; var_129_string = ""; var_130_object = Obj();
		var_19_bool = var_129_string;
		var_18_object = var_130_object;
		func_6263(var_128_int, var_129_string, var_130_object);
		var_128_int = var_21_int;
		var_173_bool = var_21_int > (int)0;
		if(var_173_bool == 0) goto Label_3634;
		var_175_bool = var_21_int > (int)1;
		if(var_175_bool != 0) {
			func_3649();
		}
		var_176_string = ""; var_177_object = Obj();
		var_19_bool = var_176_string;
		var_18_object = var_177_object;
		func_6275(var_176_string, var_177_object);
	}
Label_3634:
	return 2;
	
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_6053(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_3649();
		var_30_string = "";
		var_18_bool = var_30_string;
		func_6069(var_30_string);
	}
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3649();
	var_18_bool = Obj();
	func_5930();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_24_bool = var_18_bool != (int)111;
	if(var_24_bool != 0) {
		return 4;
	}
	var_25_bool = 0; var_26_object = Obj();
	var_26_object = var_0_object;
	func_4824(var_25_bool, var_26_object);
	var_59_bool = var_25_bool == 0; //@nz
	if(var_59_bool != 0) {
		func_3649();
		return 4;
	}
	GetDirection(var_21_cvector);
	var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	var_63_object = var_0_object;
	func_4678(var_62_cvector, var_63_object);
	var_62_cvector = var_22_cvector;
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_21_cvector = var_69_cvector;
	var_22_cvector = var_70_cvector;
	func_5226(var_68_float, var_69_cvector, var_70_cvector);
	var_93_bool = var_68_float < (float)0.4999999701976776;
	if(var_93_bool != 0) {
		var_94_object = Obj();
		var_94_object = var_0_object;
		func_4974(var_94_object);
	}
	return 4;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3649();
	func_6318();
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_6011(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_3649();
		var_33_object = Obj();
		var_18_bool = var_33_object;
		func_6034(var_33_object);
	}
	return 0;
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_4471(var_17_bool);
	func_6318();
	return 0;
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_20_bool = var_18_int == (int)1;
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_21_object = var_1_object;
		func_5274(var_21_object);
	} else {
		var_26_int = 0;
		var_18_int = var_26_int;
		func_4615(var_17_bool, var_18_int, var_26_int);
	}
	return 0;
	
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = var_1_object == var_18_object;
	if(var_20_bool != 0) {
		var_21_bool = var_2_object == 0; //@nz
		if(var_21_bool != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		var_2_object = true;
		var_22_object = Obj();
		var_18_object = var_22_object;
		func_5108(var_22_object);
	}
	return 0;
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = var_1_object == var_18_object;
	if(var_20_bool != 0) {
		var_21_object = var_2_object;
		if(var_21_object != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object);
	return 0;
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_4471(var_18_object);
	var_18_object = Obj();
	func_5930();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0;
	var_23_bool = var_19_string == "health";
	if(var_23_bool != 0) {
		GetProperty("health", var_21_float);
		var_26_bool = var_21_float <= (int)0;
		if(var_26_bool != 0) {
			SignalDeath(var_18_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_5909(var_19_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0;
	var_18_object = var_22_object;
	var_19_int = var_23_int;
	var_20_float = var_24_float;
	func_4892(var_22_object, var_23_int, var_24_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	var_18_object = var_24_object;
	var_19_int = var_25_int;
	var_20_float = var_26_float;
	var_22_cvector = var_27_cvector;
	var_23_cvector = var_28_cvector;
	func_4960(var_26_float, var_27_cvector, var_28_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	SensePlayerOnly((bool)1);
	func_6535();
	func_2846();
	
Label_2840:
	var_2_object = false;
	func_3107(var_16_object, var_17_bool);
	goto Label_2840;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_0_object = var_44_object;
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0;
	var_44_object = var_55_object;
	func_4990(var_54_bool, var_55_object, (float)70.0);
	var_101_bool = var_54_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	CreateDialog(var_50_object);
	var_102_int = 0;
	func_6527(var_102_int);
	@@var_50_object:SetNPCName(var_102_int);
	var_103_int = 0;
	func_6525(var_103_int);
	@@var_50_object:SetNPCDescription(var_103_int);
	var_104_string = "";
	func_6529(var_104_string);
	@@var_50_object:SetPhoto(var_104_string);
	var_105_string = "";
	func_6531(var_105_string);
	@@var_50_object:SetPhoto2(var_105_string);
	var_106_int = 0;
	func_5552(var_106_int);
	@@var_50_object:SetPlayerName(var_106_int);
	IsOverrideActive(var_51_bool);
	var_114_bool = var_51_bool;
	if(var_114_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	DoDialog(var_50_object);
	var_115_object = Obj(); var_116_object = Obj();
	var_44_object = var_115_object;
	var_50_object = var_116_object;
	TaskCall(1);
	func_74(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object);
	TaskReturn();
	@@var_50_object:IsDialogEnd(var_53_bool);
	
Label_56:
	var_430_bool = var_53_bool == 0; //@nz
	if(var_430_bool != 0) {
		sync();
		@@var_50_object:IsDialogEnd(var_53_bool);
		goto Label_56;
	}
	var_44_object = Obj();
	func_5059();
	StopDialog(var_50_object);
	@@var_50_object:GetReturnValue((int)-1);
	var_52_int = var_43_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5126(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	IsExisting3DSound(var_53_bool, var_44_string);
	var_61_bool = var_53_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_54_int = 0;

	Label_5132:
		var_63_int = var_54_int + (int)1;
		var_64_int = var_44_string + var_63_int;
		IsExisting3DSound(var_55_bool, var_64_int);
		var_65_bool = var_55_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_54_int = var_54_int + (int)1;
			goto Label_5132;
		}
		var_66_bool = var_54_int == 0; //@nz
		if(var_66_bool != 0) {
			return 16;
		}
		irand(var_56_int, var_54_int);
		var_68_int = var_56_int + (int)1;
		var_44_string = var_44_string + var_68_int;
	}
	Is3DSoundLoaded(var_57_bool, var_44_string);
	var_69_bool = var_57_bool;
	if(var_69_bool != 0) {
		GetEyesHeight(var_58_float);
		GetDirection(var_59_cvector);
		var_60_cvector = var_59_cvector * (int)50;
		var_71_float = GetByIndex(var_60_cvector, 1);
		var_71_float = var_71_float + var_58_float;
		SetByIndex(var_60_cvector, 1) = var_71_float;
		PlayGlobalSound(var_44_string, var_60_cvector);
	}
	return 16;
	
}


func_4615(var_0_object, var_1_object, var_26_int)
{
	var_28_bool = var_26_int != (int)0;
	if(var_28_bool != 0) {
		return 0;
	}
	var_29_bool = 0; var_30_object = Obj();
	var_30_object = var_1_object;
	func_4653(var_29_bool, var_30_object);
	var_65_bool = var_29_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_5644(var_35_object)
{
	var_36_int = 0;
	func_5569(var_36_int);
	var_41_bool = var_36_int == (int)1;
	if(var_41_bool != 0) {
		WorkWithCorpse(var_35_object);
	} else {
		Barter(var_35_object);
	}
	return 0;
	
}


func_5657(var_117_int, var_118_int)
{
	var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0;
	var_132_bool = var_117_int > var_118_int;
	if(var_132_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_130_int = 0;
	var_134_bool = var_117_int != var_118_int;
	if(var_134_bool != 0) {
		var_135_int = var_118_int - var_117_int;
		irand(var_130_int, var_135_int);
	} else {
		var_144_bool = var_117_int == (int)0;
		if(var_144_bool == 0) goto Label_5675;
		return 4;
	}
Label_5675:
	var_130_int = var_130_int + var_117_int;
	var_137_bool = var_130_int == (int)0;
	if(var_137_bool != 0) {
		return 4;
	}
	var_138_int = 0; var_139_string = "";
	func_5904(var_138_int, "Money");
	AddItem(var_131_bool, var_138_int, (int)0, var_130_int);
	return 4;
	
}


func_4637(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_3107(var_0_object, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_30_float, (float)0.5);
	Sleep(var_30_float);
	
Label_3115:
	var_37_bool = var_0_object == 0; //@nz
	if(var_37_bool != 0) {
		var_38_bool = var_1_object == 0; //@nz
		if(var_38_bool != 0) {

		Label_3119:
			GetPosition(var_32_cvector);
			var_39_float = 0;
			func_3166(var_39_float);
			GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool);
			var_42_bool = var_33_bool;
			if(var_42_bool != 0) {
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
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0);
	var_31_cvector = var_44_cvector;
	func_3194(var_43_object, var_44_cvector);
	var_43_object = var_34_object;
	var_47_bool = var_34_object != 0; //@nn
	if(var_47_bool != 0) {
		RotatePath(var_34_object, var_35_bool);
		var_48_bool = var_35_bool;
		if(var_48_bool != 0) {
			var_49_bool = 0;
			func_3192(var_49_bool);
			FollowPath(var_34_object, var_49_bool, var_35_bool);
			var_34_object = 0;
			var_50_bool = var_35_bool;
			if(var_50_bool != 0) {
				TaskCall(4);
				func_3364();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_34_object = 0;
	goto Label_3115;
	
}


func_4653(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_object = var_32_object;
	func_4824(var_31_bool, var_32_object);
	var_31_bool = var_29_bool;
	return 0;
}


func_5167(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj();
	self(var_108_object);
	var_108_object = var_106_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4660(var_323_string)
{
	var_323_string = "walk";
	return 0;
}


func_5173(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0;
	var_60_int = var_51_cvector | var_51_cvector;
	var_59_float = sqrt(var_60_int);
	var_61_float = 9.999999974752427e-07;
	var_62_bool = var_59_float < var_61_float;
	if(var_62_bool != 0) {
		var_50_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_50_cvector = var_51_cvector / var_59_float;
	return 2;
}


func_4662(var_324_string)
{
	var_324_string = "run";
	return 0;
}


func_4664(var_539_string, var_540_int)
{
	var_542_bool = var_540_int == (int)2;
	if(var_542_bool != 0) {
		var_539_string = "fire";
		return 0;
	EMIT "GOTO 0x1244";
	}
	var_544_bool = var_540_int == (int)1;
	if(var_544_bool != 0) {
		var_539_string = "bullet";
		return 0;
	}
	var_539_string = "phys";
	return 0;
}


func_5688(var_231_string)
{
	var_232_object = Obj(); var_233_int = 0; var_234_bool = 0; var_235_object = Obj(); var_236_int = 0; var_237_bool = 0;
	CreateInvItem(var_235_object);
	@@var_235_object:SetItemName(var_231_string);
	@@var_235_object:SetProperty("Organ", (int)1);
	@@var_235_object:GetItemID(var_236_int);
	AddItem(var_237_bool, var_235_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_5183(var_549_float, var_550_float, var_551_float)
{
	var_554_bool = var_550_float < var_551_float;
	if(var_554_bool != 0) {
		var_550_float = var_549_float;
	} else {
		var_551_float = var_549_float;
	}
	return 0;
	
}


func_3649()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_4678(var_52_cvector, var_53_object)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_53_object:GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
	return 4;
}


func_5190(var_559_float, var_560_float, var_561_float, var_562_float)
{
	var_563_bool = var_560_float < var_561_float;
	if(var_563_bool != 0) {
		var_561_float = var_559_float;
		return 0;
	}
	var_564_bool = var_560_float > var_562_float;
	if(var_564_bool != 0) {
		var_562_float = var_559_float;
		return 0;
	}
	var_560_float = var_559_float;
	return 0;
}


func_6216(var_85_int, var_86_object)
{
	var_88_int = 0; var_89_object = Obj();
	var_86_object = var_89_object;
	func_6123(var_88_int, var_89_object);
	var_88_int = var_85_int;
	return 0;
}


func_5705()
{
	var_225_int = 0;
	func_5569(var_225_int);
	var_230_bool = var_225_int != (int)1;
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_string = "";
	func_5688("liver");
	var_242_string = "";
	func_5688("kidney");
	var_243_string = "";
	func_5688("heart");
	var_244_string = "";
	func_5688("blood");
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_115_object, var_116_object)
{
	var_0_object = var_116_object;
	var_1_object = var_115_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_122_bool = 0; var_123_object = Obj();
		var_123_object = var_1_object;
		func_5323(var_123_object);
		if(var_122_bool != 0) {
			var_130_string = "";
			func_601(var_116_object, "Neutral");
			@@@var_0_object:SetMessage((int)543041);
			@@@var_0_object:ClearReplies();
			var_148_bool = 0;
			var_148_bool = 0;
			var_149_bool = 0;
			var_149_bool = 0;
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_5355(var_150_bool, var_151_object);
			var_161_bool = var_150_bool == 0; //@nz
			if(var_161_bool != 0) {
				var_162_bool = 0; var_163_object = Obj();
				var_163_object = var_1_object;
				func_5365(var_162_bool, var_163_object);
				var_168_bool = var_162_bool == 0; //@nz
				if(var_168_bool != 0) {
					var_149_bool = 1;
				}
			}
			if(var_149_bool != 0) {
				var_169_bool = 0; var_170_object = Obj();
				var_170_object = var_1_object;
				func_5335(var_169_bool, var_170_object);
				if(var_169_bool != 0) {
					var_148_bool = 1;
				}
			}
			if(var_148_bool != 0) {
				@@@var_0_object:AddReply((int)543044, (int)45498, (int)45496);
			}
			var_178_bool = 0;
			var_178_bool = 1;
			var_179_bool = 0;
			var_179_bool = 1;
			var_180_bool = 0;
			var_180_bool = 1;
			var_181_bool = 0; var_182_object = Obj();
			var_182_object = var_1_object;
			func_5425(var_181_bool, var_182_object);
			if(var_181_bool != 1) {
				var_187_bool = 0; var_188_object = Obj();
				var_188_object = var_1_object;
				func_5435(var_187_bool, var_188_object);
				if(var_187_bool != 1) {
					var_180_bool = 0;
				}
			}
			if(var_180_bool != 1) {
				var_193_bool = 0; var_194_object = Obj();
				var_194_object = var_1_object;
				func_5445(var_193_bool, var_194_object);
				if(var_193_bool != 1) {
					var_179_bool = 0;
				}
			}
			if(var_179_bool != 1) {
				var_199_bool = 0; var_200_object = Obj();
				var_200_object = var_1_object;
				func_5455(var_199_bool, var_200_object);
				if(var_199_bool != 1) {
					var_178_bool = 0;
				}
			}
			if(var_178_bool != 0) {
				@@@var_0_object:AddReply((int)543057, (int)45513, (int)45512);
			}
			var_208_bool = 0;
			var_208_bool = 1;
			var_209_bool = 0; var_210_object = Obj();
			var_210_object = var_1_object;
			func_5405(var_209_bool, var_210_object);
			if(var_209_bool != 1) {
				var_215_bool = 0; var_216_object = Obj();
				var_216_object = var_1_object;
				func_5415(var_215_bool, var_216_object);
				if(var_215_bool != 1) {
					var_208_bool = 0;
				}
			}
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)543063, (int)45520, (int)45518);
			}
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_5335(var_224_bool, var_225_object);
			if(var_224_bool != 0) {
				@@@var_0_object:AddReply((int)538210, (int)-1, (int)40087);
			}
			var_229_bool = 0; var_230_object = Obj();
			var_230_object = var_1_object;
			func_5335(var_229_bool, var_230_object);
			if(var_229_bool != 0) {
				@@@var_0_object:AddReply((int)543042, (int)-1, (int)45494);
			}
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_5335(var_234_bool, var_235_object);
			if(var_234_bool != 0) {
				@@@var_0_object:AddReply((int)543043, (int)-1, (int)45495);
			}
			var_239_bool = 0;
			var_239_bool = 1;
			var_240_bool = 0;
			var_240_bool = 1;
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_5405(var_241_bool, var_242_object);
			if(var_241_bool != 1) {
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_5415(var_243_bool, var_244_object);
				if(var_243_bool != 1) {
					var_240_bool = 0;
				}
			}
			if(var_240_bool != 1) {
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_5425(var_245_bool, var_246_object);
				if(var_245_bool != 1) {
					var_239_bool = 0;
				}
			}
			if(var_239_bool != 0) {
				@@@var_0_object:AddReply((int)543055, (int)-1, (int)45510);
			}
			var_250_bool = 0;
			var_250_bool = 1;
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_5405(var_251_bool, var_252_object);
			if(var_251_bool != 1) {
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_5415(var_253_bool, var_254_object);
				if(var_253_bool != 1) {
					var_250_bool = 0;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)543056, (int)-1, (int)45511);
			}
			var_258_bool = 0;
			var_258_bool = 1;
			var_259_bool = 0;
			var_259_bool = 1;
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_object;
			func_5435(var_260_bool, var_261_object);
			if(var_260_bool != 1) {
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_5445(var_262_bool, var_263_object);
				if(var_262_bool != 1) {
					var_259_bool = 0;
				}
			}
			if(var_259_bool != 1) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_5455(var_264_bool, var_265_object);
				if(var_264_bool != 1) {
					var_258_bool = 0;
				}
			}
			if(var_258_bool != 0) {
				@@@var_0_object:AddReply((int)543062, (int)-1, (int)45517);
			}
			var_269_bool = 0;
			var_269_bool = 1;
			var_270_bool = 0;
			var_270_bool = 1;
			var_271_bool = 0;
			var_271_bool = 1;
			var_272_bool = 0; var_273_object = Obj();
			var_273_object = var_1_object;
			func_5425(var_272_bool, var_273_object);
			if(var_272_bool != 1) {
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_5435(var_274_bool, var_275_object);
				if(var_274_bool != 1) {
					var_271_bool = 0;
				}
			}
			if(var_271_bool != 1) {
				var_276_bool = 0; var_277_object = Obj();
				var_277_object = var_1_object;
				func_5445(var_276_bool, var_277_object);
				if(var_276_bool != 1) {
					var_270_bool = 0;
				}
			}
			if(var_270_bool != 1) {
				var_278_bool = 0; var_279_object = Obj();
				var_279_object = var_1_object;
				func_5455(var_278_bool, var_279_object);
				if(var_278_bool != 1) {
					var_269_bool = 0;
				}
			}
			if(var_269_bool != 0) {
				@@@var_0_object:AddReply((int)543064, (int)-1, (int)45519);
			}
		} else {
				var_301_string = "";
				func_601(var_116_object, "Neutral");
				@@@var_0_object:SetMessage((int)538207);
				@@@var_0_object:ClearReplies();
				var_303_bool = 0; var_304_object = Obj();
				var_304_object = var_1_object;
				func_5299(var_304_object);
				if(var_303_bool != 0) {
					@@@var_0_object:AddReply((int)538208, (int)-1, (int)40085);
				}
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_5311(var_313_object);
				if(var_312_bool != 0) {
					@@@var_0_object:AddReply((int)538209, (int)-1, (int)40086);
				}
				var_321_bool = 0;
				var_321_bool = 0;
				var_322_bool = 0; var_323_object = Obj();
				var_323_object = var_1_object;
				func_5299(var_323_object);
				if(var_322_bool != 0) {
					var_324_bool = 0; var_325_object = Obj();
					var_325_object = var_1_object;
					func_5355(var_324_bool, var_325_object);
					if(var_324_bool != 0) {
						var_321_bool = 1;
					}
				}
				if(var_321_bool != 0) {
					@@@var_0_object:AddReply((int)538211, (int)40089, (int)40088);
				}
				var_329_bool = 0;
				var_329_bool = 0;
				var_330_bool = 0; var_331_object = Obj();
				var_331_object = var_1_object;
				func_5299(var_331_object);
				if(var_330_bool != 0) {
					var_332_bool = 0; var_333_object = Obj();
					var_333_object = var_1_object;
					func_5355(var_332_bool, var_333_object);
					if(var_332_bool != 0) {
						var_329_bool = 1;
					}
				}
				if(var_329_bool != 0) {
					@@@var_0_object:AddReply((int)538222, (int)40100, (int)40099);
				}
				var_337_bool = 0;
				var_337_bool = 0;
				var_338_bool = 0; var_339_object = Obj();
				var_339_object = var_1_object;
				func_5299(var_339_object);
				if(var_338_bool != 0) {
					var_340_bool = 0; var_341_object = Obj();
					var_341_object = var_1_object;
					func_5365(var_340_bool, var_341_object);
					if(var_340_bool != 0) {
						var_337_bool = 1;
					}
				}
				if(var_337_bool != 0) {
					@@@var_0_object:AddReply((int)538235, (int)40114, (int)40113);
				}
				var_345_bool = 0;
				var_345_bool = 0;
				var_346_bool = 0; var_347_object = Obj();
				var_347_object = var_1_object;
				func_5299(var_347_object);
				if(var_346_bool != 0) {
					var_348_bool = 0; var_349_object = Obj();
					var_349_object = var_1_object;
					func_5375(var_348_bool, var_349_object);
					if(var_348_bool != 0) {
						var_345_bool = 1;
					}
				}
				if(var_345_bool != 0) {
					@@@var_0_object:AddReply((int)538253, (int)40135, (int)40134);
				}
				var_357_bool = 0;
				var_357_bool = 0;
				var_358_bool = 0; var_359_object = Obj();
				var_359_object = var_1_object;
				func_5299(var_359_object);
				if(var_358_bool != 0) {
					var_360_bool = 0; var_361_object = Obj();
					var_361_object = var_1_object;
					func_5385(var_360_bool, var_361_object);
					if(var_360_bool != 0) {
						var_357_bool = 1;
					}
				}
				if(var_357_bool != 0) {
					@@@var_0_object:AddReply((int)538272, (int)40155, (int)40154);
				}
				var_369_bool = 0; var_370_object = Obj();
				var_370_object = var_1_object;
				func_5395(var_369_bool, var_370_object);
				if(var_369_bool != 0) {
					@@@var_0_object:AddReply((int)538291, (int)40174, (int)40173);
				}
				var_378_bool = 0;
				var_378_bool = 0;
				var_379_bool = 0; var_380_object = Obj();
				var_380_object = var_1_object;
				func_5299(var_380_object);
				if(var_379_bool != 0) {
					var_381_bool = 0; var_382_object = Obj();
					var_382_object = var_1_object;
					func_5405(var_381_bool, var_382_object);
					if(var_381_bool != 0) {
						var_378_bool = 1;
					}
				}
				if(var_378_bool != 0) {
					@@@var_0_object:AddReply((int)538308, (int)40192, (int)40191);
				}
				var_386_bool = 0; var_387_object = Obj();
				var_387_object = var_1_object;
				func_5415(var_386_bool, var_387_object);
				if(var_386_bool != 0) {
					@@@var_0_object:AddReply((int)538322, (int)40206, (int)40205);
				}
				var_391_bool = 0; var_392_object = Obj();
				var_392_object = var_1_object;
				func_5345(var_391_bool, var_392_object);
				if(var_391_bool != 0) {
					@@@var_0_object:AddReply((int)538332, (int)40216, (int)40215);
				}
				var_398_bool = 0;
				var_398_bool = 0;
				var_399_bool = 0; var_400_object = Obj();
				var_400_object = var_1_object;
				func_5299(var_400_object);
				if(var_399_bool != 0) {
					var_401_bool = 0; var_402_object = Obj();
					var_402_object = var_1_object;
					func_5425(var_401_bool, var_402_object);
					if(var_401_bool != 0) {
						var_398_bool = 1;
					}
				}
				if(var_398_bool != 0) {
					@@@var_0_object:AddReply((int)538347, (int)40233, (int)40232);
				}
				var_406_bool = 0; var_407_object = Obj();
				var_407_object = var_1_object;
				func_5435(var_406_bool, var_407_object);
				if(var_406_bool != 0) {
					@@@var_0_object:AddReply((int)538364, (int)40250, (int)40249);
				}
				var_411_bool = 0;
				var_411_bool = 0;
				var_412_bool = 0; var_413_object = Obj();
				var_413_object = var_1_object;
				func_5299(var_413_object);
				if(var_412_bool != 0) {
					var_414_bool = 0; var_415_object = Obj();
					var_415_object = var_1_object;
					func_5445(var_414_bool, var_415_object);
					if(var_414_bool != 0) {
						var_411_bool = 1;
					}
				}
				if(var_411_bool != 0) {
					@@@var_0_object:AddReply((int)538375, (int)40262, (int)40261);
				}
				var_419_bool = 0;
				var_419_bool = 0;
				var_420_bool = 0; var_421_object = Obj();
				var_421_object = var_1_object;
				func_5299(var_421_object);
				if(var_420_bool != 0) {
					var_422_bool = 0; var_423_object = Obj();
					var_423_object = var_1_object;
					func_5445(var_422_bool, var_423_object);
					if(var_422_bool != 0) {
						var_419_bool = 1;
					}
				}
				if(var_419_bool != 0) {
					@@@var_0_object:AddReply((int)538385, (int)40272, (int)40271);
				}
				@@@var_0_object:AddReply((int)538396, (int)-1, (int)40282);
				goto Label_571;
		}
	}
Label_571:
	var_283_bool = 0;
	func_6533(var_283_bool);
	if(var_283_bool != 0) {

	Label_575:
		lshWaitForAnimEnd();
		var_284_string = var_3_string;
		if(var_284_string != 0) {
		} else {
			var_285_string = "";
			var_285_string = var_2_object;
			func_5077(var_285_string);
			goto Label_575;
	}
		PlayAnimation("all", "idle");

	Label_590:
		WaitForAnimEnd();
		var_298_string = var_3_string;
		if(var_298_string != 0) {
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


func_4685(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_6223(var_124_object)
{
	var_125_object = Obj();
	var_124_object = var_125_object;
	func_6133(var_125_object);
	return 0;
}


func_5201(var_494_object)
{
	var_495_object = Obj(); var_496_object = Obj();
	CreateObjectVector(var_496_object);
	var_496_object = var_494_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4179(var_602_bool, var_603_float)
{
	var_604_float = 0; var_605_bool = 0; var_606_float = 0; var_607_bool = 0;
	rand(var_606_float);
	var_608_bool = var_606_float < var_603_float;
	if(var_608_bool != 0) {

	Label_4184:
		IsAnimationPlaying(var_607_bool);
		var_609_bool = var_607_bool == 0; //@nz
		if(var_609_bool != 0) {
		} else {
			var_610_bool = 0;
			func_4277(var_610_bool);
			if(var_610_bool != 0) {
				var_602_bool = 1;
				sync();
				goto Label_4184;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_4381(var_607_bool);
	}
	goto Label_4204;
	
Label_4204:
	var_602_bool = 0;
	return 4;
	
}


func_4693(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0;
	IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
	return 2;
}


func_6229(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0;
	var_29_object = var_35_object;
	var_36_bool = !var_31_bool;
	func_6141(var_34_bool, var_35_object, var_36_bool);
	var_72_bool = var_34_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	CanSee(var_33_bool, var_28_object);
	var_73_bool = 0;
	var_73_bool = 1;
	var_74_bool = var_33_bool;
	if(var_74_bool != 1) {
		var_75_float = 0; var_76_object = Obj();
		var_28_object = var_76_object;
		func_4685(var_75_float, var_76_object);
		var_83_float = var_30_float * var_30_float;
		var_84_bool = var_75_float <= var_83_float;
		if(var_84_bool != 1) {
			var_73_bool = 0;
		}
	}
	if(var_73_bool != 0) {
		var_27_bool = 1;
		return 2;
	}
	var_27_bool = 0;
	return 2;
}


func_5207(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = var_74_float * var_75_float;
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = var_77_float * var_78_float;
	var_71_float = var_76_float + var_79_float;
	return 0;
}


func_601(var_2_object, var_130_string)
{
	var_131_bool = 0;
	func_6533(var_131_bool);
	var_132_bool = var_131_bool == 0; //@nz
	if(var_132_bool != 0) {
		return 0;
	}
	var_133_bool = var_130_string == var_2_object;
	if(var_133_bool != 0) {
		return 0;
	}
	var_134_string = ""; var_135_bool = 0;
	var_130_string = var_134_string;
	var_137_bool = var_130_string == "";
	if(var_137_bool != 0) {
		var_135_bool = 0;
	} else {
		var_135_bool = 1;
	}
	func_5093(var_134_string, var_135_bool);
	var_2_object = var_130_string;
	return 0;
	
}


func_4698(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0;
	var_60_bool = IsFuncExist(var_54_object, "HasProperty", (int)2);
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_53_bool = 0;
		return 2;
	}
	@@var_54_object:HasProperty(var_55_string, var_57_bool);
	var_57_bool = var_53_bool;
	return 2;
}


func_3166(var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	GetCameraFarDistance(var_41_float);
	var_41_float = var_39_float;
	return 2;
}


func_5216(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0);
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = var_82_float * var_83_float;
	var_85_float = GetByIndex(var_81_cvector, 2);
	var_86_float = GetByIndex(var_81_cvector, 2);
	var_87_float = var_85_float * var_86_float;
	var_88_int = var_84_float + var_87_float;
	var_80_float = sqrt(var_88_int);
	return 0;
}


func_5729(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0;
	var_116_bool = var_111_bool;
	if(var_116_bool != 0) {
		var_117_int = 0; var_118_int = 0;
		var_120_int = 0;
		func_5265(var_120_int);
		var_127_float = var_120_int * (int)100;
		var_118_int = (int)100 + var_127_float;
		func_5657((int)0, var_118_int);
		irand(var_114_int, (int)8);
		var_147_bool = var_114_int == (int)0;
		if(var_147_bool != 0) {
			var_148_int = 0; var_149_string = "";
			func_5904(var_148_int, "lemon");
			AddItem(var_115_bool, var_148_int, (int)0, (int)1);
		} else {
			var_153_bool = var_114_int == (int)1;
			if(var_153_bool != 0) {
				var_154_int = 0; var_155_string = "";
				func_5904(var_154_int, "rusk");
				AddItem(var_115_bool, var_154_int, (int)0, (int)1);
				goto Label_5817;
			}
			var_159_bool = var_114_int == (int)2;
			if(var_159_bool != 0) {
				var_160_int = 0; var_161_string = "";
				func_5904(var_160_int, "hook");
				AddItem(var_115_bool, var_160_int, (int)0, (int)1);
				goto Label_5817;
			}
			var_165_bool = var_114_int == (int)4;
			if(var_165_bool != 0) {
				var_166_int = 0; var_167_string = "";
				func_5904(var_166_int, "syringe");
				AddItem(var_115_bool, var_166_int, (int)0, (int)1);
				goto Label_5817;
			}
			var_171_bool = var_114_int == (int)5;
			if(var_171_bool != 0) {
				var_172_int = 0; var_173_string = "";
				func_5904(var_172_int, "watch");
				AddItem(var_115_bool, var_172_int, (int)0, (int)1);
				goto Label_5817;
			}
			var_177_bool = var_114_int == (int)6;
			if(var_177_bool == 0) goto Label_5817;
			var_178_int = 0; var_179_string = "";
			func_5904(var_178_int, "razor");
			AddItem(var_115_bool, var_178_int, (int)0, (int)1);
	}
		var_182_int = 0; var_183_int = 0;
		var_185_int = 0;
		func_5265(var_185_int);
		var_187_float = var_185_int * (int)50;
		var_183_int = (int)50 + var_187_float;
		func_5657((int)0, var_183_int);
		irand(var_114_int, (int)7);
		var_190_bool = var_114_int == (int)0;
		if(var_190_bool != 0) {
			var_191_int = 0; var_192_string = "";
			func_5904(var_191_int, "beads");
			AddItem(var_115_bool, var_191_int, (int)0, (int)1);
			goto Label_5903;
		}
		var_196_bool = var_114_int == (int)1;
		if(var_196_bool != 0) {
			var_197_int = 0; var_198_string = "";
			func_5904(var_197_int, "bracelet");
			AddItem(var_115_bool, var_197_int, (int)0, (int)1);
			goto Label_5903;
		}
		var_202_bool = var_114_int == (int)2;
		if(var_202_bool != 0) {
			var_203_int = 0; var_204_string = "";
			func_5904(var_203_int, "ear_ring");
			AddItem(var_115_bool, var_203_int, (int)0, (int)1);
			goto Label_5903;
		}
		var_208_bool = var_114_int == (int)3;
		if(var_208_bool != 0) {
			var_209_int = 0; var_210_string = "";
			func_5904(var_209_int, "gold_ring");
			AddItem(var_115_bool, var_209_int, (int)0, (int)1);
			goto Label_5903;
		}
		var_214_bool = var_114_int == (int)4;
		if(var_214_bool != 0) {
			var_215_int = 0; var_216_string = "";
			func_5904(var_215_int, "silver_ring");
			AddItem(var_115_bool, var_215_int, (int)0, (int)1);
			goto Label_5903;
		}
		var_220_bool = var_114_int == (int)5;
		if(var_220_bool == 0) goto Label_5903;
		var_221_int = 0; var_222_string = "";
		func_5904(var_221_int, "flower");
		AddItem(var_115_bool, var_221_int, (int)0, (int)1);
	}
Label_5817:
	goto Label_5903;
	
Label_5903:
	return 4;
	
}


func_4710(var_511_float, var_512_object, var_513_float, var_514_int)
{
	var_518_int = 0; var_519_string = ""; var_520_int = 0; var_521_float = 0; var_522_float = 0; var_523_float = 0; var_524_int = 0; var_525_string = ""; var_526_int = 0; var_527_float = 0; var_528_float = 0; var_529_float = 0;
	var_530_bool = 0; var_531_object = Obj(); var_532_string = "";
	var_512_object = var_531_object;
	func_4698(var_530_bool, var_531_object, "health");
	var_533_bool = var_530_bool == 0; //@nz
	if(var_533_bool != 0) {
		var_511_float = 0.0;
		return 12;
	}
	var_534_bool = 0; var_535_object = Obj(); var_536_string = "";
	var_512_object = var_535_object;
	func_4698(var_534_bool, var_535_object, "armor");
	var_537_bool = var_534_bool == 0; //@nz
	if(var_537_bool != 0) {
		var_524_int = 0;
	} else {
			@@var_512_object:GetProperty("armor", var_524_int);
	}
	var_539_string = ""; var_540_int = 0;
	var_514_int = var_540_int;
	func_4664(var_539_string, var_540_int);
	var_525_string = "armor_" + var_539_string;
	var_545_bool = 0; var_546_object = Obj(); var_547_string = "";
	var_512_object = var_546_object;
	var_525_string = var_547_string;
	func_4698(var_545_bool, var_546_object, var_547_string);
	var_548_bool = var_545_bool == 0; //@nz
	if(var_548_bool != 0) {
		var_526_int = 0;
	} else {
		@@var_512_object:GetProperty(var_525_string, var_526_int);

	}
	var_549_float = 0; var_550_float = 0; var_551_float = 0;
	var_552_int = var_524_int + var_526_int;
	var_550_float = var_552_int / (float)100.0;
	func_5183(var_549_float, var_550_float, (float)1);
	var_549_float = var_527_float;
	@@var_512_object:GetProperty("health", var_528_float);
	var_557_int = (int)1 - var_527_float;
	var_529_float = var_513_float * var_557_int;
	var_559_float = 0; var_560_float = 0; var_561_float = 0; var_562_float = 0;
	var_560_float = var_528_float - var_529_float;
	func_5190(var_559_float, var_560_float, (float)0, (float)1);
	@@var_512_object:SetProperty("health", var_559_float);
	var_565_bool = 0; var_566_object = Obj();
	var_512_object = var_566_object;
	func_4693(var_565_bool, var_566_object);
	if(var_565_bool != 0) {
		var_567_float = 0;
		var_567_float = -var_529_float;
		func_5248(var_567_float);
	}
	var_529_float = var_511_float;
	return 12;
	
}


func_3178(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_5226(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_69_cvector = var_72_cvector;
	var_70_cvector = var_73_cvector;
	func_5207(var_71_float, var_72_cvector, var_73_cvector);
	var_80_float = 0; var_81_cvector = CVector(0,0,0);
	var_69_cvector = var_81_cvector;
	func_5216(var_80_float, var_81_cvector);
	var_89_float = 0; var_90_cvector = CVector(0,0,0);
	var_70_cvector = var_90_cvector;
	func_5216(var_89_float, var_90_cvector);
	var_91_float = var_80_float * var_89_float;
	var_68_float = var_71_float / var_91_float;
	return 0;
}


func_4206(var_0_object, var_403_bool, var_404_float)
{
	var_405_bool = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_bool = 0; var_411_cvector = CVector(0,0,0); var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_float = 0;
	
Label_4207:
	IsAnimationPlaying(var_410_bool);
	var_415_bool = var_410_bool == 0; //@nz
	if(var_415_bool != 0) {
	} else {
		var_416_bool = 0;
		func_4277(var_416_bool);
		if(var_416_bool != 0) {
			var_403_bool = 1;
			return 10;
		}
		var_455_bool = 0; var_456_object = Obj();
		var_456_object = var_0_object;
		func_4824(var_455_bool, var_456_object);
		var_457_bool = var_455_bool == 0; //@nz
		if(var_457_bool != 0) {
			var_403_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_411_cvector);
		GetPFPosition(var_412_cvector);
		var_413_cvector = var_411_cvector - var_412_cvector;
		var_414_float = var_413_cvector | var_413_cvector;
		var_458_float = var_404_float * var_404_float;
		var_459_bool = var_414_float < var_458_float;
		if(var_459_bool != 0) {
			var_460_bool = 0; var_461_float = 0;
			var_404_float = var_461_float;
			func_4042(var_413_cvector, var_414_float, var_460_bool, var_461_float);
			var_403_bool = 1;
			sync();
			goto Label_4207;
		}
		return 10;
	}
	func_4381(var_414_float);
	var_403_bool = 0;
	return 10;
	
}


func_3185(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_6258(var_21_int)
{
	var_21_int = 0;
	return 0;
}


func_2675(var_20_object)
{
	EventDisable(0);
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_2708(var_21_object);
	var_101_object = Obj();
	var_20_object = var_101_object;
	func_6572(var_101_object);
	EventEnable(0);
	
Label_2686:
	Hold();
	goto Label_2686;
}
EMIT "Return(); Pop(0)";


func_6261()
{
	return 0;
}


func_6263(var_128_int, var_129_string, var_130_object)
{
	var_132_bool = var_129_string == "killme";
	if(var_132_bool != 0) {
		var_133_int = 0; var_134_object = Obj();
		var_130_object = var_134_object;
		func_6285(var_133_int, var_134_object);
		var_133_int = var_128_int;
		return 0;
	}
	var_128_int = 0;
	return 0;
}


func_3192(var_49_bool)
{
	var_49_bool = 0;
	return 0;
}


func_3194(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindShiftedPathTo(var_46_object, var_44_cvector);
	var_46_object = var_43_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5243(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0;
	GetVariable(var_125_string, var_127_int);
	var_127_int = var_124_int;
	return 2;
}


func_5248(var_567_float)
{
	var_568_object = Obj(); var_569_object = Obj();
	CreateFloatVector(var_569_object);
	@@var_569_object:add(var_567_float);
	var_571_bool = var_567_float < (int)0;
	if(var_571_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_569_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6275(var_176_string, var_177_object)
{
	var_179_bool = var_176_string == "killme";
	if(var_179_bool != 0) {
		var_180_object = Obj();
		var_177_object = var_180_object;
		func_6303(var_180_object);
		return 0;
	}
	return 0;
}


func_3725(var_182_object)
{
	var_189_object = Obj(); var_190_bool = 0; var_191_float = 0;
	var_182_object = var_189_object;
	func_3739(var_185_int, var_186_bool, var_187_float, var_188_int, var_182_object, var_189_object, (bool)1, (float)180.0);
	return 0;
}


func_6285(var_133_int, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj();
	var_134_object = var_136_object;
	func_4824(var_135_bool, var_136_object);
	var_169_bool = var_135_bool == 0; //@nz
	if(var_169_bool != 0) {
		var_133_int = 0;
		return 0;
	}
	var_170_bool = 0; var_171_object = Obj();
	var_134_object = var_171_object;
	func_6559(var_171_object);
	if(var_170_bool != 0) {
		var_133_int = 2;
	} else {
		var_133_int = 0;
	}
	return 0;
	
}


func_5265(var_120_int)
{
	var_121_float = 0; var_122_float = 0;
	GetGameTime(var_122_float);
	var_124_int = 0;
	var_124_int = var_122_float / (int)24;
	var_120_int = (int)1 + var_124_int;
	return 2;
}


func_2708(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = var_21_object == 0; //@ne
	if(var_42_bool != 0) {
		var_43_string = "";
		func_2799("fdie");
	} else {
		@@var_21_object:GetPosition(var_32_cvector);
		GetPosition(var_33_cvector);
		GetDirection(var_34_cvector);
		var_35_cvector = var_33_cvector - var_32_cvector;
		var_75_float = GetByIndex(var_35_cvector, 0);
		var_76_float = GetByIndex(var_34_cvector, 0);
		var_77_float = var_75_float * var_76_float;
		var_78_float = GetByIndex(var_35_cvector, 2);
		var_79_float = GetByIndex(var_34_cvector, 2);
		var_80_float = var_78_float * var_79_float;
		var_81_int = var_77_float + var_80_float;
		var_83_bool = var_81_int >= (int)0;
		if(var_83_bool != 0) {
			var_36_string = "fdie";
		} else {
				var_36_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_21_object = var_37_object;
		var_86_bool = IsFuncExist(var_21_object, "GetScriptProperty", (int)2);
		if(var_86_bool != 0) {
			@@var_21_object:HasScriptProperty(var_38_bool, "Owner");
			var_88_bool = var_38_bool;
			if(var_88_bool != 0) {
				@@var_21_object:GetScriptProperty(var_37_object, "Owner");
				var_90_bool = var_37_object == 0; //@ne
				if(var_90_bool != 0) {
					var_21_object = var_37_object;
				}
			}
		}
		var_93_bool = IsFuncExist(var_37_object, "@GetEyesHeight", (int)1);
		if(var_93_bool != 0) {
			@@var_37_object:GetEyesHeight(var_40_float);
			var_41_cvector = CVector(0.0, 0.0, 0.0);
			var_94_float = GetByIndex(var_41_cvector, 1);
			var_40_float = var_94_float;
			SetByIndex(var_41_cvector, 1) = var_94_float;
			LookAsync(var_21_object, "head", var_41_cvector);
			var_39_bool = 1;
		} else {
			var_39_bool = 0;

		}
		var_96_string = "";
		var_36_string = var_96_string;
		func_5126(var_96_string);
		PlayAnimation("all", var_36_string);
		WaitForAnimEnd();
		var_98_bool = var_39_bool;
		if(var_98_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_36_string);
		RemoveEnvelope();
		var_37_object = 0;
	}
	return 20;
	
}


func_3733(var_508_float)
{
	var_508_float = 0.05000000074505806;
	return 0;
}


func_3736(var_515_int)
{
	var_515_int = 0;
	return 0;
}


func_4249(var_0_object, var_418_bool)
{
	var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_float = 0; var_423_float = 0; var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_float = 0; var_428_float = 0;
	var_429_bool = 0; var_430_object = Obj();
	var_430_object = var_0_object;
	func_4824(var_429_bool, var_430_object);
	var_431_bool = var_429_bool == 0; //@nz
	if(var_431_bool != 0) {
		var_418_bool = 0;
		return 10;
	}
	var_432_bool = 0;
	func_4338(var_428_float, var_432_bool);
	if(var_432_bool != 0) {
		@@@var_0_object:GetPFPosition(var_424_cvector);
		GetPFPosition(var_425_cvector);
		var_426_cvector = var_424_cvector - var_425_cvector;
		var_427_float = var_426_cvector | var_426_cvector;
		@@@var_0_object:GetAttackDistance(var_428_float);
		var_428_float = var_428_float + (int)50;
		var_434_float = var_428_float * var_428_float;
		var_418_bool = var_427_float <= var_434_float;
		return 10;
	}
	var_418_bool = 0;
	return 10;
}


func_5274(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsPlayerActor(var_21_object, var_23_bool);
	var_24_bool = var_23_bool;
	if(var_24_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_3739(var_0_object, var_3_string, var_5_bool, var_189_object, var_190_bool, var_191_float, var_266_bool, var_352_bool)
{
	var_192_float = 0; var_193_cvector = CVector(0,0,0); var_194_cvector = CVector(0,0,0); var_195_bool = 0; var_196_bool = 0; var_197_float = 0; var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_cvector = CVector(0,0,0); var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_bool = 0; var_207_bool = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_bool = 0; var_213_float = 0;
	func_3968(var_211_cvector, var_212_bool, var_213_float);
	var_5_bool = 0;
	var_238_bool = IsFuncExist(var_189_object, "@GetAttackDistance", (int)1);
	if(var_238_bool != 0) {
		@@var_189_object:GetAttackDistance(var_203_float);
		var_203_float = var_203_float + (int)50;
	} else {
							var_191_float = var_203_float;
	}
	var_241_bool = var_203_float >= (int)150;
	if(var_241_bool != 0) {
		var_203_float = 150;
	}
	var_3_string = false;
	var_0_object = var_189_object;
	IsPlayerActor(var_0_object, var_206_bool);
	var_242_bool = var_206_bool;
	if(var_242_bool != 0) {
		PlayGlobalMusic("attack");
		var_244_object = Obj();
		func_5167(var_244_object);
		SendPlayerEnemy(var_189_object, var_244_object);
	}
	var_247_bool = var_190_bool;
	if(var_247_bool != 0) {
		var_207_bool = 0;
	} else {
						var_207_bool = 1;

	}
	var_208_float = (float)400.0 + var_203_float;
	
Label_3779:
	var_249_bool = 0;
	var_249_bool = 0;
	var_250_bool = 0; var_251_object = Obj();
	var_251_object = var_0_object;
	func_4824(var_250_bool, var_251_object);
	if(var_250_bool != 0) {
		var_252_bool = var_3_string == 0; //@nz
		if(var_252_bool != 0) {
			var_249_bool = 1;
		}
	}
	if(var_249_bool != 0) {
		func_4381(var_213_float);
		@@@var_0_object:GetPFPosition(var_204_cvector);
		GetPFPosition(var_205_cvector);
		var_209_cvector = var_204_cvector - var_205_cvector;
		var_210_float = var_209_cvector | var_209_cvector;
		var_258_float = var_208_float * var_208_float;
		var_259_bool = var_210_float >= var_258_float;
		if(var_259_bool != 0) {
			var_260_bool = 0; var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_bool = 0;
			var_261_object = var_0_object;
			var_203_float = var_262_float;
			TaskCall(7);
			func_4408(var_268_bool, var_260_bool, var_261_object, var_262_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_337_bool = var_266_bool == 0; //@nz
			if(var_337_bool != 0) {
			} else {
				var_207_bool = 0;
		} else {
				var_343_float = var_191_float * var_191_float;
				var_344_bool = var_210_float >= var_343_float;
				if(var_344_bool != 0) {
					@@@var_0_object:GetPFPosition(var_211_cvector);
					CanReachByPF(var_212_bool, var_211_cvector);
					var_345_bool = var_212_bool == 0; //@nz
					if(var_345_bool != 0) {
						var_346_bool = 0; var_347_object = Obj(); var_348_float = 0; var_349_float = 0; var_350_bool = 0; var_351_bool = 0;
						var_347_object = var_0_object;
						var_203_float = var_348_float;
						TaskCall(7);
						func_4408(var_354_bool, var_346_bool, var_347_object, var_348_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_355_bool = var_352_bool == 0; //@nz
						if(var_355_bool != 0) {
							goto Label_3951;
						}
						var_207_bool = 0;
						goto Label_3779;
					}
					var_356_bool = var_207_bool == 0; //@nz
					if(var_356_bool != 0) {
						var_357_object = Obj();
						var_357_object = var_0_object;
						func_4974(var_357_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_4381(var_213_float);
						StopAsync();
						var_207_bool = 1;
						var_360_bool = 0; var_361_object = Obj();
						var_361_object = var_0_object;
						func_4824(var_360_bool, var_361_object);
						var_362_bool = var_360_bool == 0; //@nz
						if(var_362_bool != 0) {
							goto Label_3951;
						}
					}
					rand(var_213_float);
					var_363_bool = 0;
					var_365_bool = var_213_float < (float)0.25;
					if(var_365_bool != 1) {
						var_366_bool = 0;
						func_4338((bool)1, var_366_bool);
						if(var_366_bool != 1) {
							var_363_bool = 0;
						}
					}
					if(var_363_bool != 0) {
						Face(var_0_object);
						func_4388();
						PlayAnimation("all", "attack_stay");
						var_403_bool = 0; var_404_float = 0;
						var_191_float = var_404_float;
						func_4206(var_213_float, var_403_bool, var_404_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_4381(var_213_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_621_bool = 0;
						func_4338(var_213_float, var_621_bool);
						var_622_bool = var_621_bool == 0; //@nz
						if(var_622_bool == 0) goto Label_3941;
						var_623_bool = 0; var_624_object = Obj();
						var_624_object = var_0_object;
						func_4824(var_623_bool, var_624_object);
						var_625_bool = var_623_bool == 0; //@nz
						if(var_625_bool != 0) {
							goto Label_3951;
						}
						@@@var_0_object:GetPFPosition(var_204_cvector);
						GetPFPosition(var_205_cvector);
						var_209_cvector = var_204_cvector - var_205_cvector;
						var_210_float = var_209_cvector | var_209_cvector;
						var_626_float = var_191_float * var_191_float;
						var_627_bool = var_210_float < var_626_float;
						if(var_627_bool == 0) goto Label_3941;
						var_628_bool = 0; var_629_float = 0;
						var_191_float = var_629_float;
						func_4042(var_212_bool, var_213_float, var_628_bool, var_629_float);
						var_630_bool = var_628_bool == 0; //@nz
						if(var_630_bool == 0) goto Label_3941;
						goto Label_3951;
				}
					var_631_bool = 0; var_632_float = 0;
					var_191_float = var_632_float;
					func_4042(var_212_bool, var_213_float, var_631_bool, var_632_float);
					var_633_bool = var_631_bool == 0; //@nz
					if(var_633_bool != 0) {
						goto Label_3951;
					}
					var_207_bool = 1;

				}
			Label_3941:
				goto Label_3950;
		}
		Label_3950:
			goto Label_3779;

		}
	}
Label_3951:
	WaitForAnimEnd();
	var_338_string = var_3_string;
	if(var_338_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_341_bool = var_206_bool;
	if(var_341_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_6303(var_180_object)
{
	var_181_object = Obj();
	var_180_object = var_181_object;
	func_6133(var_181_object);
	return 0;
}


func_5283()
{
	var_472_object = Obj(); var_473_object = Obj();
	GetScene(var_473_object);
	var_475_object = Obj();
	func_5167(var_475_object);
	BroadcastMessage("battle", var_475_object, var_473_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6309(var_21_int)
{
	var_21_int = 2;
	return 0;
}


func_6312(var_29_object)
{
	var_30_object = Obj();
	var_29_object = var_30_object;
	func_6539(var_30_object);
	return 0;
}


func_5294(var_25_object)
{
	@@var_25_object:SetReturnValue((int)100);
	return 0;
}


func_6318()
{
	return 0;
}


func_4783(var_46_bool, var_47_object)
{
	var_48_bool = 0; var_49_bool = 0;
	@@var_47_object:IsDead(var_49_bool);
	var_49_bool = var_46_bool;
	return 2;
}


func_6319(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_6322()
{
	return 0;
}


func_5299(var_303_bool)
{
	var_305_int = 0; var_306_string = "";
	func_5243(var_305_int, "branch");
	var_308_bool = var_305_int == (int)0;
	if(var_308_bool != 0) {
		var_303_bool = 1;
		return 0;
	}
	var_303_bool = 0;
	return 0;
}


func_4788(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj();
	var_41_bool = var_36_object == 0; //@ne
	if(var_41_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_42_bool = 0;
	var_42_bool = 0;
	var_45_bool = IsFuncExist(var_36_object, "IsDead", (int)1);
	if(var_45_bool != 0) {
		var_46_bool = 0; var_47_object = Obj();
		var_36_object = var_47_object;
		func_4783(var_46_bool, var_47_object);
		if(var_46_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	GetScene(var_39_object);
	var_50_bool = var_39_object == 0; //@ne
	if(var_50_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	@@var_36_object:GetScene(var_40_object);
	var_51_bool = var_39_object != var_40_object;
	if(var_51_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_35_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4277(var_416_bool)
{
	var_417_bool = 0;
	var_417_bool = 0;
	var_418_bool = 0;
	func_4249(var_417_bool, var_418_bool);
	if(var_418_bool != 0) {
		var_435_bool = 0;
		func_4293(var_416_bool, var_417_bool, var_435_bool);
		if(var_435_bool != 0) {
			var_417_bool = 1;
		}
	}
	if(var_417_bool != 0) {
		var_416_bool = 1;
		return 0;
	}
	var_416_bool = 0;
	return 0;
}


func_6324(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	CanSee(var_34_bool, var_32_object);
	var_31_bool = 1;
	var_35_bool = var_34_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_4685(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (int)2250000;
		if(var_45_bool != 1) {
			var_31_bool = 0;
		}
	}
	return 2;
}


func_5311(var_312_bool)
{
	var_314_int = 0; var_315_string = "";
	func_5243(var_314_int, "branch");
	var_317_bool = var_314_int == (int)1;
	if(var_317_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_6339(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_6115(var_60_object);
	return 0;
}


func_4293(var_0_object, var_4_bool, var_435_bool)
{
	var_436_object = Obj(); var_437_bool = 0; var_438_float = 0; var_439_cvector = CVector(0,0,0); var_440_cvector = CVector(0,0,0); var_441_object = Obj(); var_442_bool = 0; var_443_float = 0; var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0);
	GetScene(var_441_object);
	var_442_bool = 0;
	
Label_4297:
	var_446_cvector = CVector(0,0,0); var_447_object = Obj();
	var_447_object = var_0_object;
	func_4678(var_446_cvector, var_447_object);
	var_448_int = -var_446_cvector;
	FindDirLength(var_443_float, var_448_int, var_4_bool);
	var_449_bool = var_443_float < var_4_bool;
	if(var_449_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_444_cvector);
		GetPFPosition(var_445_cvector);
		WaitForAnimEnd();
		func_4381(var_445_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_442_bool = 1;
		var_453_bool = 0;
		func_4249(var_445_cvector, var_453_bool);
		var_454_bool = var_453_bool == 0; //@nz
		if(var_454_bool != 0) {
			goto Label_4335;
		}
		goto Label_4297;
	}
Label_4335:
	var_442_bool = var_435_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_6345(var_48_bool)
{
	var_48_bool = 0;
	return 0;
}


func_5323(var_122_bool)
{
	var_124_int = 0; var_125_string = "";
	func_5243(var_124_int, "branch");
	var_129_bool = var_124_int == (int)2;
	if(var_129_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_6348()
{
	return 0;
}


func_6350(var_26_bool)
{
	var_26_bool = 0;
	return 0;
}


func_6353()
{
	return 0;
}


func_6355(var_441_object)
{
	var_442_object = Obj(); var_443_object = Obj(); var_444_object = Obj(); var_445_object = Obj(); var_446_int = 0; var_447_int = 0; var_448_int = 0; var_449_int = 0; var_450_object = Obj(); var_451_int = 0; var_452_bool = 0; var_453_int = 0; var_454_float = 0; var_455_int = 0; var_456_object = Obj(); var_457_int = 0; var_458_int = 0; var_459_int = 0; var_460_int = 0; var_461_int = 0; var_462_int = 0; var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_object = Obj(); var_468_object = Obj(); var_469_object = Obj(); var_470_object = Obj(); var_471_object = Obj(); var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_object = Obj(); var_477_int = 0; var_478_bool = 0; var_479_int = 0; var_480_float = 0; var_481_int = 0; var_482_object = Obj(); var_483_int = 0; var_484_int = 0; var_485_int = 0; var_486_int = 0; var_487_int = 0; var_488_int = 0; var_489_int = 0; var_490_int = 0; var_491_int = 0; var_492_int = 0; var_493_object = Obj();
	func_5201(Obj());
	var_494_object = var_468_object;
	CreateIntVector(var_469_object);
	CreateIntVector(var_470_object);
	CreateIntVector(var_471_object);
	@@var_441_object:GetSubContainerCount(var_472_int);
	var_473_int = 0;
	
Label_6369:
	var_497_bool = var_473_int < var_472_int;
	if(var_497_bool != 0) {
		@@var_441_object:GetItemCount(var_474_int, var_473_int);
		var_475_int = 0;

	Label_6374:
		var_498_bool = var_475_int < var_474_int;
		if(var_498_bool != 0) {
			@@var_441_object:GetItem(var_476_object, var_475_int, var_473_int);
			@@var_476_object:GetItemID(var_477_int);
			HasInvItemProperty(var_478_bool, var_477_int, "HasDurability");
			var_500_bool = var_478_bool;
			if(var_500_bool != 0) {
				@@var_476_object:HasProperty(var_478_bool, "durability");
				var_502_bool = var_478_bool;
				if(var_502_bool != 0) {
					@@var_476_object:GetProperty(var_479_int, "durability");
					var_504_bool = 0;
					var_504_bool = 0;
					var_506_bool = var_479_int < (int)100;
					if(var_506_bool != 0) {
						var_507_bool = 0; var_508_object = Obj();
						var_476_object = var_508_object;
						func_6502(var_507_bool, var_508_object);
						if(var_507_bool != 0) {
							var_504_bool = 1;
						}
					}
					if(var_504_bool != 0) {
						@@var_468_object:add(var_476_object);
						@@var_469_object:add(var_473_int);
						@@var_470_object:add(var_475_int);
						var_514_int = 0; var_515_object = Obj(); var_516_int = 0;
						var_476_object = var_515_object;
						func_5580(var_514_int, var_515_object, (int)0);
						var_514_int = var_480_float;
						var_558_float = (float)2.0 * var_479_int;
						var_560_float = var_558_float / (float)100.0;
						var_561_int = (float)1.0 + var_560_float;
						var_562_float = var_480_float * var_561_int;
						var_564_int = (int)100 - var_479_int;
						var_565_float = var_562_float * var_564_int;
						var_481_int = var_565_float / (int)300;
						var_567_bool = var_481_int == 0; //@nz
						if(var_567_bool != 0) {
							var_481_int = 1;
						}
						@@var_471_object:add(var_481_int);
					}
				}
			}
			var_476_object = 0;
			var_475_int = var_475_int + (int)1;
			goto Label_6374;
		}
		var_473_int = var_473_int + (int)1;
		goto Label_6369;
	}
	CreateIntVector(var_482_object);
	ChooseItem(var_468_object, var_482_object, var_471_object, "repair.xml");
	@@var_482_object:size(var_483_int);
	var_571_bool = var_483_int == 0; //@nz
	if(var_571_bool != 0) {
		return 52;
	}
	var_485_int = 0;
	
Label_6453:
	var_572_bool = var_485_int < var_483_int;
	if(var_572_bool != 0) {
		@@var_482_object:get(var_486_int, var_485_int);
		@@var_471_object:get(var_487_int, var_486_int);
		(int)0 = (int)0 + var_487_int;
		var_485_int = var_485_int + (int)1;
		goto Label_6453;
	}
	@@var_441_object:GetProperty("money", var_488_int);
	var_488_int = var_488_int - var_484_int;
	var_576_bool = var_488_int < (int)0;
	if(var_576_bool != 0) {
		return 52;
	}
	@@var_441_object:SetProperty("money", var_488_int);
	var_489_int = 0;
	
Label_6475:
	var_578_bool = var_489_int < var_483_int;
	if(var_578_bool != 0) {
		@@var_482_object:get(var_490_int, var_489_int);
		@@var_469_object:get(var_491_int, var_490_int);
		@@var_470_object:get(var_492_int, var_490_int);
		@@var_441_object:GetItem(var_493_object, var_492_int, var_491_int);
		@@var_493_object:SetProperty("durability", (int)100);
		@@var_441_object:SetItem(var_493_object, (int)1, var_492_int, var_491_int);
		var_493_object = 0;
		var_489_int = var_489_int + (int)1;
		goto Label_6475;
	}
	return 52;
}
EMIT "Stack[-12] = 0";
EMIT "Stack[-23] = 0";
EMIT "Stack[-24] = 0";
EMIT "Stack[-25] = 0";
EMIT "Stack[-26] = 0";


func_5335(var_169_bool, var_170_object)
{
	var_171_bool = 0; var_172_object = Obj();
	var_170_object = var_172_object;
	func_5465(var_172_object);
	if(var_171_bool != 0) {
		var_169_bool = 1;
		return 0;
	}
	var_169_bool = 0;
	return 0;
}


func_4824(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0;
	var_35_bool = 0; var_36_object = Obj();
	var_32_object = var_36_object;
	func_4788(var_35_bool, var_36_object);
	var_52_bool = var_35_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_31_bool = 0;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_32_object = var_54_object;
	func_4698(var_53_bool, var_54_object, "noaccess");
	var_62_bool = var_53_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_31_bool = 1;
		return 2;
	}
	@@var_32_object:GetProperty("noaccess", var_34_int);
	var_31_bool = var_34_int == (int)0;
	return 2;
}


func_5345(var_391_bool, var_392_object)
{
	var_393_bool = 0; var_394_object = Obj();
	var_392_object = var_394_object;
	func_5472(var_394_object);
	if(var_393_bool != 0) {
		var_391_bool = 1;
		return 0;
	}
	var_391_bool = 0;
	return 0;
}


func_5355(var_150_bool, var_151_object)
{
	var_152_bool = 0; var_153_object = Obj();
	var_151_object = var_153_object;
	func_5475(var_153_object);
	if(var_152_bool != 0) {
		var_150_bool = 1;
		return 0;
	}
	var_150_bool = 0;
	return 0;
}


func_2799(var_43_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_44_string = "";
	var_43_string = var_44_string;
	func_5126(var_44_string);
	PlayAnimation("all", var_43_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_43_string);
	RemoveEnvelope();
	return 0;
}


func_4848(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = "";
	var_50_bool = var_35_object == 0; //@ne
	if(var_50_bool != 0) {
		return 14;
	}
	IsDead(var_43_bool);
	var_51_bool = var_43_bool;
	if(var_51_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_44_int);
	var_53_bool = var_44_int < (int)0;
	if(var_53_bool != 0) {
		return 14;
	}
	@@var_35_object:GetPosition(var_45_cvector);
	GetPosition(var_46_cvector);
	GetDirection(var_47_cvector);
	var_48_cvector = var_46_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_48_cvector, 0);
	var_55_float = GetByIndex(var_47_cvector, 0);
	var_56_float = var_54_float * var_55_float;
	var_57_float = GetByIndex(var_48_cvector, 2);
	var_58_float = GetByIndex(var_47_cvector, 2);
	var_59_float = var_57_float * var_58_float;
	var_60_int = var_56_float + var_59_float;
	var_62_bool = var_60_int >= (int)0;
	if(var_62_bool != 0) {
		var_49_string = "fhit";
	} else {
		var_49_string = "bhit";
	}
	var_65_int = var_49_string + "1";
	var_67_int = var_49_string + "2";
	FadeSecondaryAnimation("hit_react", var_65_int, var_67_int, (int)-10);
	return 14;
	
}


func_4338(var_0_object, var_366_bool)
{
	var_367_bool = 0; var_368_bool = 0;
	var_371_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_371_bool != 0) {
		@@@var_0_object:IsAttacking(var_368_bool);
		var_368_bool = var_366_bool;
		return 2;
	}
	var_366_bool = 0;
	return 2;
}


func_5365(var_162_bool, var_163_object)
{
	var_164_bool = 0; var_165_object = Obj();
	var_163_object = var_165_object;
	func_5482(var_165_object);
	if(var_164_bool != 0) {
		var_162_bool = 1;
		return 0;
	}
	var_162_bool = 0;
	return 0;
}


func_4349(var_2_object, var_5_bool)
{
	var_479_float = 0; var_480_int = 0; var_481_float = 0; var_482_int = 0;
	var_483_bool = var_2_object == 0; //@nz
	if(var_483_bool != 0) {
		return 4;
	}
	var_484_bool = var_5_bool;
	if(var_484_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_487_bool = var_5_bool > (int)0;
		if(var_487_bool != 0) {
			return 4;
		}
	}
	rand(var_481_float);
	var_488_float = 0;
	func_4399(var_488_float);
	var_489_bool = var_481_float < var_488_float;
	if(var_489_bool != 0) {
		irand(var_482_int, var_2_object);
		var_482_int = var_482_int + (int)1;
		var_492_int = "attack" + var_482_int;
		Speak(var_492_int);
		var_493_int = 0;
		func_4397(var_493_int);
		var_5_bool = var_493_int;
	}
	return 4;
}


func_5375(var_348_bool, var_349_object)
{
	var_350_bool = 0; var_351_object = Obj();
	var_349_object = var_351_object;
	func_5489(var_351_object);
	if(var_350_bool != 0) {
		var_348_bool = 1;
		return 0;
	}
	var_348_bool = 0;
	return 0;
}


func_5385(var_360_bool, var_361_object)
{
	var_362_bool = 0; var_363_object = Obj();
	var_361_object = var_363_object;
	func_5496(var_363_object);
	if(var_362_bool != 0) {
		var_360_bool = 1;
		return 0;
	}
	var_360_bool = 0;
	return 0;
}


func_5904(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0;
	GetInvItemByName(var_141_int, var_139_string);
	var_141_int = var_138_int;
	return 2;
}


func_5395(var_369_bool, var_370_object)
{
	var_371_bool = 0; var_372_object = Obj();
	var_370_object = var_372_object;
	func_5503(var_372_object);
	if(var_371_bool != 0) {
		var_369_bool = 1;
		return 0;
	}
	var_369_bool = 0;
	return 0;
}


func_5909(var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	TaskCall(2);
	func_2675(var_20_object);
	TaskReturn();
	return 0;
}


func_4892(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0);
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_bool = 0;
	var_44_bool = 0;
	var_45_object = var_22_object;
	if(var_45_object != 0) {
		var_47_bool = var_23_int != (int)4;
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		var_49_bool = var_23_int != (int)5;
		if(var_49_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
		var_52_cvector = CVector(0,0,0); var_53_object = Obj();
		var_22_object = var_53_object;
		func_4678(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_5173(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		CreateVectorVector(var_35_object);
		var_36_int = 1;

	Label_4921:
		var_64_int = "hit" + var_36_int;
		GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector);
		var_65_bool = var_37_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_113_int = var_39_cvector | var_34_cvector;
			var_115_bool = var_113_int >= (float)0.7071067690849304;
			if(var_115_bool != 0) {
				@@var_35_object:add(var_38_cvector);
			}
			var_36_int = var_36_int + (int)1;
			goto Label_4921;
		}
		@@var_35_object:size(var_40_int);
		var_66_int = var_40_int;
		if(var_66_int != 0) {
			irand(var_41_int, var_40_int);
			@@var_35_object:get(var_42_cvector, var_41_int);
			var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
			var_22_object = var_67_object;
			var_23_int = var_68_int;
			var_24_float = var_69_float;
			var_42_cvector = var_70_cvector;
			var_71_cvector = -var_34_cvector;
			func_4960(var_69_float, var_70_cvector, var_71_cvector);
			return 18;
		}
		var_35_object = 0;
	}
	var_112_object = Obj();
	var_22_object = var_112_object;
	func_4848(var_112_object);
	return 18;
	
}


func_5405(var_209_bool, var_210_object)
{
	var_211_bool = 0; var_212_object = Obj();
	var_210_object = var_212_object;
	func_5510(var_212_object);
	if(var_211_bool != 0) {
		var_209_bool = 1;
		return 0;
	}
	var_209_bool = 0;
	return 0;
}


func_2846()
{
	var_20_bool = 0;
	func_4985(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		func_6318();
	}
	return 0;
}


func_4381(var_0_object)
{
	var_253_object = Obj();
	var_253_object = var_0_object;
	func_5274(var_253_object);
	return 0;
}


func_4386(var_576_int)
{
	var_576_int = 0;
	return 0;
}


func_3364()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0;
	WaitForAnimEnd();
	var_65_bool = 0;
	func_4985(var_65_bool);
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		return 14;
	}
	func_6089((int)0);
	var_67_int = var_58_int;
	var_59_int = 0;
	
Label_3378:
	var_80_bool = 0;
	var_80_bool = 0;
	var_82_bool = var_59_int < (int)5;
	if(var_82_bool != 0) {
		var_83_bool = 0;
		func_4985(var_83_bool);
		if(var_83_bool != 0) {
			var_80_bool = 1;
		}
	}
	if(var_80_bool != 0) {
		irand(var_60_int, (int)3);
		var_86_bool = var_60_int == (int)0;
		if(var_86_bool != 0) {
			var_87_int = var_58_int;
			if(var_87_int == 0) goto Label_3411;
			irand(var_61_int, var_58_int);
			var_89_string = ""; var_90_int = 0;
			var_61_int = var_90_int;
			func_6082(var_89_string, var_90_int);
			PlayAnimation("all", var_89_string);
			WaitForAnimEnd(var_62_bool);
			var_91_bool = var_62_bool == 0; //@nz
			if(var_91_bool != 0) {
			} else {
		} else {
				var_96_bool = var_60_int == (int)1;
				if(var_96_bool != 0) {
					rand(var_63_float, (int)4);
					var_99_int = var_63_float + (int)1;
					Sleep(var_99_int, var_64_bool);
					var_100_bool = var_64_bool == 0; //@nz
					if(var_100_bool != 0) {
						goto Label_3440;
					}
					goto Label_3429;
				}
				var_101_int = var_59_int;
				if(var_101_int == 0) goto Label_3429;
				goto Label_3440;
		}
		Label_3429:
			var_92_bool = 0;
			func_3443(var_92_bool);
			var_93_bool = var_92_bool == 0; //@nz
			if(var_93_bool != 0) {
				goto Label_3440;
			}
			ResetAAS();
			var_59_int = var_59_int + (int)1;
			goto Label_3378;

		}
	}
Label_3440:
	ResetAAS();
	return 14;
	
}


func_4388()
{
	var_372_string = "";
	func_5126("attack_stay");
	return 0;
}


func_5415(var_215_bool, var_216_object)
{
	var_217_bool = 0; var_218_object = Obj();
	var_216_object = var_218_object;
	func_5517(var_218_object);
	if(var_217_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_4393()
{
	return 0;
}


func_4395(var_601_bool)
{
	var_601_bool = 1;
	return 0;
}


func_4397(var_493_int)
{
	var_493_int = 1;
	return 0;
}


func_4399(var_488_float)
{
	var_488_float = 0.5;
	return 0;
}


func_5425(var_181_bool, var_182_object)
{
	var_183_bool = 0; var_184_object = Obj();
	var_182_object = var_184_object;
	func_5524(var_184_object);
	if(var_183_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_4408(var_2_object, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool)
{
	var_269_bool = 0; var_270_bool = 0; var_271_bool = 0; var_272_bool = 0;
	var_273_object = Obj();
	var_261_object = var_273_object;
	func_5274(var_273_object);
	SetTimer((int)1, (int)5);
	CanSee(var_271_bool, var_261_object);
	var_276_bool = var_271_bool;
	if(var_276_bool != 0) {
		var_2_object = true;
		var_277_object = Obj();
		var_261_object = var_277_object;
		func_5108(var_277_object);
	} else {
		var_2_object = false;
	}
	var_278_bool = 0; var_279_object = Obj();
	var_261_object = var_279_object;
	func_4693(var_278_bool, var_279_object);
	if(var_278_bool != 0) {
		var_282_object = Obj();
		func_5167(var_282_object);
		SendPlayerEnemy(var_261_object, var_282_object);
	}
	var_283_bool = 0; var_284_object = Obj(); var_285_float = 0; var_286_float = 0; var_287_bool = 0; var_288_bool = 0;
	var_261_object = var_284_object;
	var_262_float = var_285_float;
	var_263_float = var_286_float;
	var_264_bool = var_287_bool;
	var_265_bool = var_288_bool;
	func_4513(var_271_bool, var_272_bool, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool);
	var_283_bool = var_272_bool;
	var_334_object = var_2_object;
	if(var_334_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_272_bool = var_260_bool;
	return 4;
	
}


func_5435(var_187_bool, var_188_object)
{
	var_189_bool = 0; var_190_object = Obj();
	var_188_object = var_190_object;
	func_5531(var_190_object);
	if(var_189_bool != 0) {
		var_187_bool = 1;
		return 0;
	}
	var_187_bool = 0;
	return 0;
}


func_5954(var_22_bool, var_23_object, var_24_string)
{
	var_26_bool = var_24_string == "unholster";
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_23_object = var_28_object;
		func_6319(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0x1760";
	}
	var_30_bool = var_24_string == "player_shot";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_23_object = var_32_object;
		func_6324(var_31_bool, var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0x1760";
	}
	var_47_bool = var_24_string == "battle";
	if(var_47_bool != 0) {
		var_48_bool = 0; var_49_object = Obj();
		var_23_object = var_49_object;
		func_6345(var_49_object);
		var_48_bool = var_22_bool;
		return 0;
	}
	var_22_bool = 0;
	return 0;
}


func_5445(var_193_bool, var_194_object)
{
	var_195_bool = 0; var_196_object = Obj();
	var_194_object = var_196_object;
	func_5538(var_196_object);
	if(var_195_bool != 0) {
		var_193_bool = 1;
		return 0;
	}
	var_193_bool = 0;
	return 0;
}


func_5455(var_199_bool, var_200_object)
{
	var_201_bool = 0; var_202_object = Obj();
	var_200_object = var_202_object;
	func_5545(var_202_object);
	if(var_201_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_5465(var_171_bool)
{
	var_173_int = 0;
	func_5265(var_173_int);
	var_171_bool = var_173_int <= (int)6;
	return 0;
}


func_4960(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetScene(var_31_object);
	AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	var_35_object = Obj();
	var_24_object = var_35_object;
	func_4848(var_35_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5472(var_393_bool)
{
	var_393_bool = 0;
	return 0;
}


func_5986(var_52_object, var_53_string)
{
	var_55_bool = var_53_string == "unholster";
	if(var_55_bool != 0) {
		var_52_object = Obj();
		func_6322();
	} else {
		var_58_bool = var_53_string == "player_shot";
		if(var_58_bool != 0) {
			var_59_object = Obj();
			var_52_object = var_59_object;
			func_6339(var_59_object);
			goto Label_6010;
		}
		var_126_bool = var_53_string == "battle";
		if(var_126_bool == 0) goto Label_6010;
		var_52_object = Obj();
		func_6348();
	}
Label_6010:
	return 0;
	
}


func_5475(var_152_bool)
{
	var_154_int = 0;
	func_5265(var_154_int);
	var_152_bool = var_154_int == (int)1;
	return 0;
}


func_6502(var_507_bool, var_508_object)
{
	var_509_int = 0; var_510_bool = 0; var_511_int = 0; var_512_bool = 0;
	@@var_508_object:GetItemID(var_511_int);
	HasInvItemProperty(var_512_bool, var_511_int, "Weapon");
	var_512_bool = var_507_bool;
	return 4;
}


func_5482(var_164_bool)
{
	var_166_int = 0;
	func_5265(var_166_int);
	var_164_bool = var_166_int == (int)2;
	return 0;
}


func_4974(var_94_object)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	@@var_94_object:GetPosition(var_98_cvector);
	GetPosition(var_99_cvector);
	var_100_cvector = var_98_cvector - var_99_cvector;
	var_101_float = GetByIndex(var_100_cvector, 0);
	var_102_float = GetByIndex(var_100_cvector, 2);
	RotateAsync(var_101_float, var_102_float);
	return 6;
}


func_6510(var_42_object, var_45_object)
{
	var_43_int = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	TaskCall(0);
	func_0(var_45_object, var_43_int, var_44_object);
	TaskReturn();
	var_440_bool = var_45_object == (int)100;
	if(var_440_bool != 0) {
		var_441_object = Obj();
		var_42_object = var_441_object;
		func_6355(var_441_object);
	}
	return 0;
}


func_5489(var_350_bool)
{
	var_352_int = 0;
	func_5265(var_352_int);
	var_350_bool = var_352_int == (int)3;
	return 0;
}


func_3443(var_92_bool)
{
	var_92_bool = 1;
	return 0;
}


func_3445()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4471(var_2_object)
{
	KillTimer((int)1);
	var_20_object = var_2_object;
	if(var_20_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_4637(var_18_object);
	return 0;
}


func_5496(var_362_bool)
{
	var_364_int = 0;
	func_5265(var_364_int);
	var_362_bool = var_364_int == (int)5;
	return 0;
}


func_4985(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_3450(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0;
	var_0_object = var_61_object;
	func_3501(var_68_bool);
	GetDirection(var_66_cvector);
	var_76_cvector = CVector(0,0,0); var_77_object = Obj();
	var_77_object = var_0_object;
	func_4678(var_76_cvector, var_77_object);
	var_76_cvector = var_67_cvector;
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	var_66_cvector = var_83_cvector;
	var_67_cvector = var_84_cvector;
	func_5226(var_82_float, var_83_cvector, var_84_cvector);
	var_107_bool = var_82_float < (int)0;
	if(var_107_bool != 0) {
		var_108_object = Obj();
		var_108_object = var_0_object;
		func_4974(var_108_object);
		var_68_bool = 1;
	} else {
		Sleep((float)1.5, var_68_bool);
	}
	var_117_bool = var_68_bool;
	if(var_117_bool != 0) {
		var_118_object = Obj();
		var_118_object = var_0_object;
		func_4974(var_118_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_6011(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	var_23_bool = 0;
	var_23_bool = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_20_object = var_25_object;
	func_6319(var_25_object);
	if(var_24_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_20_object = var_27_object;
		func_4693(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		@@var_20_object:IsWeaponHolstered(var_22_bool);
		var_30_bool = var_22_bool == 0; //@nz
		if(var_30_bool != 0) {
			var_19_bool = 1;
			return 2;
		}
	}
	var_19_bool = 0;
	return 2;
}


func_6525(var_103_int)
{
	var_103_int = 515568;
	return 0;
}


func_4990(var_54_bool, var_55_object, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0;
	@@var_55_object:GetPosition(var_67_cvector);
	@@var_55_object:GetEyesHeight(var_66_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_66_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	GetPosition(var_68_cvector);
	GetEyesHeight(var_66_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	var_76_float = var_76_float + var_66_float;
	SetByIndex(var_68_cvector, 1) = var_76_float;
	var_69_cvector = var_67_cvector - var_68_cvector;
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (float)0;
	var_78_int = var_69_cvector | var_69_cvector;
	var_79_float = sqrt(var_78_int);
	var_69_cvector = var_69_cvector / var_79_float;
	var_70_cvector = -var_69_cvector;
	var_80_float = var_69_cvector * var_56_float;
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	var_82_cvector = var_70_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5173(var_81_cvector, var_82_cvector);
	var_90_float = var_81_cvector * (int)25;
	var_91_int = var_80_float + var_90_float;
	var_71_cvector = var_91_int - CVector(0.0, 10.0, 0.0);
	var_72_cvector = var_68_cvector + var_71_cvector;
	IsOverrideActive(var_73_bool);
	var_93_bool = var_73_bool;
	if(var_93_bool != 0) {
		var_54_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_72_cvector, var_70_cvector, (bool)1);
	var_95_float = GetByIndex(var_71_cvector, 0);
	var_96_float = GetByIndex(var_71_cvector, 2);
	Rotate(var_95_float, var_96_float);
	var_97_bool = 0;
	func_6533(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		HasAnimationTrack(var_74_bool, "head");
		var_99_bool = var_74_bool;
		if(var_99_bool == 0) goto Label_5053;
		LookAsyncCamera("head");
	}
Label_5053:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_54_bool = 1;
	return 18;
	
}


func_6527(var_102_int)
{
	var_102_int = 503353;
	return 0;
}


func_3968(var_1_object, var_2_object, var_4_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_bool = 0; var_219_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_3970:
	var_223_int = var_1_object + (int)1;
	var_224_int = "attack_begin" + var_223_int;
	HasAnimation(var_217_bool, "all", var_224_int);
	var_225_bool = var_217_bool == 0; //@nz
	if(var_225_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_3970;
	}
	var_2_object = 0;
	
Label_3984:
	var_228_int = var_2_object + (int)1;
	var_229_int = "attack" + var_228_int;
	IsExisting3DSound(var_218_bool, var_229_int);
	var_230_bool = var_218_bool == 0; //@nz
	if(var_230_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_3984;

	}
	GetAnimationOffset(var_219_cvector, "all", "bjump");
	var_233_float = GetByIndex(var_219_cvector, 2);
	var_4_bool = -var_233_float;
	return 6;
	
}


func_6529(var_104_string)
{
	var_104_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_5503(var_371_bool)
{
	var_373_int = 0;
	func_5265(var_373_int);
	var_371_bool = var_373_int == (int)6;
	return 0;
}


func_6531(var_105_string)
{
	var_105_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_6533(var_97_bool)
{
	var_97_bool = 0;
	return 0;
}


func_5510(var_211_bool)
{
	var_213_int = 0;
	func_5265(var_213_int);
	var_211_bool = var_213_int == (int)7;
	return 0;
}


func_6535()
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_6539(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0;
	var_33_bool = GlobalVars[0];
	if(var_33_bool != 0) {
		IsOverrideActive(var_32_bool);
		var_34_bool = var_32_bool == 0; //@nz
		if(var_34_bool != 0) {
			var_35_object = Obj();
			var_30_object = var_35_object;
			func_5644(var_35_object);
		}
		return 2;
	EMIT "GOTO 0x199c";
	}
	var_42_object = Obj();
	var_30_object = var_42_object;
	func_6510(var_32_bool, var_42_object);
	return 2;
}


func_5517(var_217_bool)
{
	var_219_int = 0;
	func_5265(var_219_int);
	var_217_bool = var_219_int == (int)8;
	return 0;
}


func_6034(var_33_object)
{
	var_33_object = Obj();
	func_6322();
	return 0;
}


func_5524(var_183_bool)
{
	var_185_int = 0;
	func_5265(var_185_int);
	var_183_bool = var_185_int == (int)9;
	return 0;
}


func_6040(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_4693(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_object = Obj();
		func_5167(var_26_object);
		ReportReputationChange(var_21_object, var_26_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_5531(var_189_bool)
{
	var_191_int = 0;
	func_5265(var_191_int);
	var_189_bool = var_191_int == (int)10;
	return 0;
}


func_6557(var_63_bool)
{
	var_63_bool = 0;
	return 0;
}


func_6559(var_170_bool)
{
	var_170_bool = 1;
	return 0;
}


func_4513(var_0_object, var_1_object, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool)
{
	var_289_bool = 0; var_290_bool = 0; var_291_object = Obj(); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_object = Obj(); var_297_bool = 0; var_298_bool = 0; var_299_object = Obj(); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_object = Obj();
	var_0_object = false;
	var_1_object = var_284_object;
	var_288_bool = var_298_bool;
	
Label_4517:
	var_305_bool = 0; var_306_object = Obj();
	var_284_object = var_306_object;
	func_4653(var_305_bool, var_306_object);
	var_309_bool = var_305_bool == 0; //@nz
	if(var_309_bool != 0) {
		var_283_bool = 0;
		return 16;
	}
	@@var_284_object:GetPosition(var_300_cvector);
	GetPosition(var_301_cvector);
	var_302_cvector = var_300_cvector - var_301_cvector;
	var_303_float = var_302_cvector | var_302_cvector;
	var_310_bool = 0;
	var_310_bool = 0;
	var_312_bool = var_286_float > (int)0;
	if(var_312_bool != 0) {
		var_313_float = var_286_float * var_286_float;
		var_314_bool = var_303_float > var_313_float;
		if(var_314_bool != 0) {
			var_310_bool = 1;
		}
	}
	if(var_310_bool != 0) {
		Stop();
		var_283_bool = 0;
		return 16;
	}
	var_315_float = var_285_float * var_285_float;
	var_316_bool = var_303_float > var_315_float;
	if(var_316_bool != 0) {
		@@var_284_object:GetPFPosition(var_300_cvector);
		FindPathTo(var_304_object, var_300_cvector);
		var_317_bool = var_304_object != 0; //@nn
		if(var_317_bool != 0) {
			var_304_object = var_299_object;
			var_304_object = 0;
		}
		var_318_bool = var_299_object != 0; //@nn
		if(var_318_bool != 0) {
			var_319_bool = var_298_bool;
			if(var_319_bool == 0) goto Label_4566;
			var_298_bool = 0;
			RotatePath(var_299_object, var_297_bool);
			var_320_bool = var_297_bool == 0; //@nz
			if(var_320_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_323_string = "";
				func_4660(var_323_string);
				var_324_string = "";
				func_4662(var_324_string);
				FollowPath(var_299_object, var_287_bool, var_297_bool, var_323_string, var_324_string);
				var_325_bool = var_297_bool == 0; //@nz
				if(var_325_bool != 0) {
					var_326_object = var_0_object;
					if(var_326_object != 0) {
						var_299_object = 0;
						goto Label_4613;
					EMIT "GOTO 0x11ea";
					}
				} else {
					var_299_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_297_bool);
					var_329_bool = var_297_bool == 0; //@nz
					if(var_329_bool != 0) {
						var_330_object = var_0_object;
						if(var_330_object != 0) {
							var_299_object = 0;
							goto Label_4613;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_4613;
	}
			var_304_object = 0;
			goto Label_4611;

		Label_4611:
			var_299_object = 0;

		}
		goto Label_4517;
	}
Label_4613:
	var_283_bool = !var_0_object;
	return 16;
	
}


func_6562(var_23_bool, var_24_object, var_25_object, var_26_bool)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0; var_31_bool = 0;
	var_24_object = var_28_object;
	var_25_object = var_29_object;
	var_26_bool = var_31_bool;
	func_6229(var_27_bool, var_28_object, var_29_object, (float)700.0, var_31_bool);
	var_27_bool = var_23_bool;
	return 0;
}


func_4003(var_0_object, var_497_float, var_498_int)
{
	var_499_object = Obj(); var_500_float = 0; var_501_float = 0; var_502_object = Obj(); var_503_float = 0; var_504_float = 0;
	var_506_float = var_497_float * (float)0.8999999761581421;
	GetVictim(var_506_float, var_502_object);
	ReportAttack(var_0_object);
	var_507_bool = var_502_object == var_0_object;
	if(var_507_bool != 0) {
		var_508_float = 0; var_509_object = Obj(); var_510_int = 0;
		var_502_object = var_509_object;
		var_498_int = var_510_int;
		func_3733(var_510_int);
		var_508_float = var_503_float;
		var_511_float = 0; var_512_object = Obj(); var_513_float = 0; var_514_int = 0;
		var_502_object = var_512_object;
		var_503_float = var_513_float;
		var_515_int = 0; var_516_object = Obj(); var_517_int = 0;
		var_502_object = var_516_object;
		var_498_int = var_517_int;
		func_3736(var_517_int);
		var_515_int = var_514_int;
		func_4710(var_511_float, var_512_object, var_513_float, var_514_int);
		var_511_float = var_504_float;
		var_576_int = 0;
		func_4386(var_576_int);
		ReportHit(var_0_object, var_576_int, var_504_float, var_503_float);
		var_577_object = Obj(); var_578_float = 0;
		var_502_object = var_577_object;
		var_504_float = var_578_float;
		func_4393();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_5538(var_195_bool)
{
	var_197_int = 0;
	func_5265(var_197_int);
	var_195_bool = var_197_int == (int)11;
	return 0;
}


func_6053(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_string == "heal";
	if(var_24_bool != 0) {
		FindActor(var_22_object, "player");
		var_26_bool = 0; var_27_object = Obj();
		var_22_object = var_27_object;
		func_6350(var_27_object);
		var_26_bool = var_19_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = 0;
	return 2;
}


func_5545(var_201_bool)
{
	var_203_int = 0;
	func_5265(var_203_int);
	var_201_bool = var_203_int == (int)12;
	return 0;
}


func_6572(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj();
	var_101_object = var_103_object;
	func_4693(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		var_106_object = Obj();
		func_5167(var_106_object);
		ReportReputationChange(var_101_object, var_106_object, (float)-0.07000000029802322, (bool)1);
		var_111_bool = 0;
		func_5729((bool)1);
	}
	func_5705();
	var_245_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_3501(var_0_object)
{
	var_69_object = Obj();
	var_69_object = var_0_object;
	func_5108(var_69_object);
	return 0;
}


func_5552(var_106_int)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable("branch", var_108_int);
	var_111_bool = var_108_int == (int)0;
	if(var_111_bool != 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0x15bf";
	}
	var_113_bool = var_108_int == (int)1;
	if(var_113_bool != 0) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
	return 2;
}


func_6069(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj();
	var_34_bool = var_30_string == "heal";
	if(var_34_bool != 0) {
		FindActor(var_32_object, "player");
		var_32_object = Obj();
		func_6353();
		var_32_object = 0;
	}
	return 2;
}


func_5569(var_225_int)
{
	var_226_int = 0; var_227_int = 0;
	GetVariable("branch", var_227_int);
	var_227_int = var_225_int;
	return 2;
}


func_6082(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = "";
	var_77_int = var_74_int;
	if(var_77_int != 0) {
		"idle" = "idle" + var_74_int;
	}
	var_76_string = var_73_string;
	return 2;
}


func_5059()
{
	var_432_bool = 0; var_433_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_435_bool = 0;
	func_6533(var_435_bool);
	if(var_435_bool != 0) {
	} else {
		HasAnimationTrack(var_433_bool, "head");
		var_437_bool = var_433_bool;
		if(var_437_bool == 0) goto Label_5076;
		UnlookAsync("head");
	}
Label_5076:
	return 2;
	
}


func_5575(var_537_int, var_538_object)
{
	var_539_int = 0; var_540_int = 0;
	@@var_538_object:GetItemID(var_540_int);
	var_540_int = var_537_int;
	return 2;
}


func_6089(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0;
	var_70_int = 0;
	
Label_6091:
	var_73_string = ""; var_74_int = 0;
	var_70_int = var_74_int;
	func_6082(var_73_string, var_74_int);
	HasAnimation(var_71_bool, "all", var_73_string);
	var_78_bool = var_71_bool == 0; //@nz
	if(var_78_bool != 0) {
	} else {
		var_70_int = var_70_int + (int)1;
		goto Label_6091;
	}
	var_70_int = var_67_int;
	return 4;
	
}


func_4042(var_0_object, var_1_object, var_460_bool, var_461_float)
{
	var_462_int = 0; var_463_bool = 0; var_464_int = 0; var_465_string = ""; var_466_int = 0; var_467_bool = 0; var_468_int = 0; var_469_string = "";
	func_4381(var_469_string);
	irand(var_466_int, var_1_object);
	var_466_int = var_466_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_5283();
	var_478_int = "attack_begin" + var_466_int;
	PlayAnimation("all", var_478_int);
	WaitForAnimEnd();
	func_4349(var_468_int, var_469_string);
	var_494_bool = 0; var_495_object = Obj();
	var_495_object = var_0_object;
	func_4824(var_494_bool, var_495_object);
	var_496_bool = var_494_bool == 0; //@nz
	if(var_496_bool != 0) {
		StopAsync();
		var_460_bool = 0;
		return 8;
	}
	var_497_float = 0; var_498_int = 0;
	var_461_float = var_497_float;
	var_466_int = var_498_int;
	func_4003(var_469_string, var_497_float, var_498_int);
	var_581_int = "attack_middle" + var_466_int;
	HasAnimation(var_467_bool, "all", var_581_int);
	var_582_bool = var_467_bool;
	if(var_582_bool != 0) {
		func_5283();
		var_585_int = "attack_middle" + var_466_int;
		PlayAnimation("all", var_585_int);
		WaitForAnimEnd();
		func_4381(var_469_string);
		var_586_bool = 0; var_587_object = Obj();
		var_587_object = var_0_object;
		func_4824(var_586_bool, var_587_object);
		var_588_bool = var_586_bool == 0; //@nz
		if(var_588_bool != 0) {
			StopAsync();
			var_460_bool = 0;
			return 8;
		}
		var_589_float = 0; var_590_int = 0;
		var_461_float = var_589_float;
		var_466_int = var_590_int;
		func_4003(var_469_string, var_589_float, var_590_int);
		var_468_int = 1;

	Label_4119:
		var_592_int = "attack_middle" + var_466_int;
		var_594_int = var_592_int + "_";
		var_469_string = var_594_int + var_468_int;
		HasAnimation(var_467_bool, "all", var_469_string);
		var_596_bool = var_467_bool == 0; //@nz
		if(var_596_bool != 0) {
		} else {
			func_5283();
			PlayAnimation("all", var_469_string);
			WaitForAnimEnd();
			func_4381(var_469_string);
			var_612_bool = 0; var_613_object = Obj();
			var_613_object = var_0_object;
			func_4824(var_612_bool, var_613_object);
			var_614_bool = var_612_bool == 0; //@nz
			if(var_614_bool != 0) {
				StopAsync();
				var_460_bool = 0;
				var_615_float = 0; var_616_int = 0;
				var_461_float = var_615_float;
				var_466_int = var_616_int;
				func_4003(var_469_string, var_615_float, var_616_int);
				var_468_int = var_468_int + (int)1;
				goto Label_4119;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_600_int = "attack_end" + var_466_int;
	PlayAnimation("all", var_600_int);
	var_601_bool = 0;
	func_4395(var_601_bool);
	if(var_601_bool != 0) {
		var_602_bool = 0; var_603_float = 0;
		func_4179(var_602_bool, (float)0.75);
		StopAsync();
	}
	var_460_bool = 1;
	return 8;
	
}


func_5580(var_514_int, var_515_object, var_516_int)
{
	var_517_int = 0; var_518_int = 0; var_519_int = 0; var_520_string = ""; var_521_bool = 0; var_522_bool = 0; var_523_int = 0; var_524_int = 0; var_525_int = 0; var_526_int = 0; var_527_string = ""; var_528_bool = 0; var_529_bool = 0; var_530_int = 0;
	var_532_bool = var_516_int == (int)0;
	if(var_532_bool != 0) {
		func_5265((int)0);
		var_533_int = var_524_int;
		var_526_int = 1;

	Label_5590:
		var_534_bool = var_526_int <= var_524_int;
		if(var_534_bool != 0) {
			var_536_bool = var_526_int != (int)1;
			if(var_536_bool != 0) {
				"Price" = "Price" + var_526_int;
			}
			var_537_int = 0; var_538_object = Obj();
			var_515_object = var_538_object;
			func_5575(var_537_int, var_538_object);
			HasInvItemProperty(var_528_bool, var_537_int, var_527_string);
			var_541_bool = var_528_bool == 0; //@nz
			if(var_541_bool != 0) {
			} else {
				var_543_int = 0; var_544_object = Obj();
				var_515_object = var_544_object;
				func_5575(var_543_int, var_544_object);
				GetInvItemProperty((int)0, var_543_int, var_527_string);
		}
			var_525_int = var_514_int;
			return 14;
	}
		var_545_int = 0; var_546_object = Obj();
		var_515_object = var_546_object;
		func_5575(var_545_int, var_546_object);
		var_548_int = "BarterPrice" + var_516_int;
		HasInvItemProperty(var_529_bool, var_545_int, var_548_int);
		var_549_bool = var_529_bool == 0; //@nz
		if(var_549_bool != 0) {
			return 14;
		}
		var_550_int = 0; var_551_object = Obj();
		var_515_object = var_551_object;
		func_5575(var_550_int, var_551_object);
		var_553_int = "BarterPrice" + var_516_int;
		GetInvItemProperty(var_530_int, var_550_int, var_553_int);
		var_555_bool = var_530_int > (int)0;
		if(var_555_bool != 0) {
			var_530_int = (int)0;
			return 14;
		}
		var_514_int = -var_530_int;
		return 14;
	}
	var_526_int = var_526_int + (int)1;
	goto Label_5590;
	
}


func_5077(var_285_string)
{
	var_286_bool = 0; var_287_float = 0; var_288_float = 0; var_289_bool = 0; var_290_float = 0; var_291_float = 0;
	lshHasAnimation(var_289_bool, var_285_string);
	var_292_bool = var_289_bool;
	if(var_292_bool != 0) {
		lshGetAnimTimes(var_285_string, var_290_float, var_291_float);
		lshPlayAnimation(var_290_float, var_291_float, (bool)0);
	} else {
		var_295_int = "Can't find lsh animation : " + var_285_string;
		Trace(var_295_int);
	}
	return 6;
	
}


func_6106(var_61_int)
{
	var_63_bool = 0;
	func_6557(var_63_bool);
	if(var_63_bool != 0) {
		var_61_int = 2;
	} else {
		var_61_int = 0;
	}
	return 0;
	
}


func_3042(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3178(var_17_object, var_18_bool);
	return 0;
}


func_6115(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	TaskCall(5);
	func_3450(var_62_object, var_61_object);
	TaskReturn();
	return 0;
}


func_5093(var_134_string, var_135_bool)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0;
	lshHasAnimation(var_141_bool, var_134_string);
	var_144_bool = var_141_bool;
	if(var_144_bool != 0) {
		lshGetAnimTimes(var_134_string, var_142_float, var_143_float);
		lshPlayAnimation(var_142_float, var_143_float, var_135_bool);
	} else {
		var_146_int = "Can't find lsh animation : " + var_134_string;
		Trace(var_146_int);
	}
	return 6;
	
}


func_3050(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3185(var_22_bool, var_23_int);
	return 0;
}


func_6123(var_88_int, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj();
	var_89_object = var_91_object;
	func_4824(var_90_bool, var_91_object);
	if(var_90_bool != 0) {
		var_88_int = 2;
	} else {
		var_88_int = 0;
	}
	return 0;
	
}


func_5108(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0);
	@@var_22_object:GetEyesHeight(var_25_float);
	var_26_cvector = CVector(0.0, 0.0, 0.0);
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	LookAsync(var_22_object, "head", var_26_cvector);
	return 4;
}


func_6133(var_181_object)
{
	var_182_object = Obj();
	var_181_object = var_182_object;
	TaskCall(6);
	func_3725(var_182_object);
	TaskReturn();
	return 0;
}


func_3067(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_19_object = var_25_object;
	func_4824(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 4;
	}
	var_59_object = var_2_object;
	if(var_59_object != 0) {
		return 4;
	}
	IsPlayerActor(var_19_object, var_22_bool);
	var_60_bool = var_22_bool == 0; //@nz
	if(var_60_bool != 0) {
		return 4;
	}
	var_61_int = 0; var_62_object = Obj();
	var_19_object = var_62_object;
	func_6106(var_62_object);
	var_61_int = var_23_int;
	var_65_bool = var_23_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_23_int > (int)1;
		if(var_67_bool != 0) {
			func_3050(var_23_int);
		}
		var_69_object = Obj();
		var_19_object = var_69_object;
		func_6115(var_69_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_6141(var_34_bool, var_35_object, var_36_bool)
{
	var_37_string = ""; var_38_string = ""; var_39_string = ""; var_40_string = "";
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_35_object = var_42_object;
	func_4698(var_41_bool, var_42_object, "class");
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	GetProperty("class", var_39_string);
	@@var_35_object:GetProperty("class", var_40_string);
	var_53_bool = 0;
	var_53_bool = 0;
	var_54_bool = var_36_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_55_bool = var_39_string == var_40_string;
		if(var_55_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		var_34_bool = 1;
		return 4;
	}
	var_57_bool = var_40_string == "rat";
	if(var_57_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x1846";
	}
	var_59_bool = var_40_string == "rat_big";
	if(var_59_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x1846";
	}
	var_61_bool = var_40_string == "dog";
	if(var_61_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x1846";
	}
	var_63_bool = var_40_string == "grabitel";
	if(var_63_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x1846";
	}
	var_65_bool = var_40_string == "bomber";
	if(var_65_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x1846";
	}
	var_67_bool = var_40_string == "sanitar";
	if(var_67_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x1846";
	}
	var_69_bool = var_40_string == "hunter";
	if(var_69_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x1846";
	}
	var_71_bool = var_40_string == "soldier";
	if(var_71_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_34_bool = 1;
	return 4;
}


func_5119()
{
	var_21_bool = 0;
	func_6533(var_21_bool);
	if(var_21_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


