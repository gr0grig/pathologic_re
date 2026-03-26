// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,GetGameTime/1,FindActor/2,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,HasAnimation/3,CanSee/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:branch|W:player|W:reputation|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:SetProperty|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:class|W:rat|W:rat_big|W:dog|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:bool:
// @RUN_OP: 0x982
// @RUN_TASK: 3
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x294 vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0x8f5 vars=object
// @EVENT_6: op=0x903 vars=
// @EVENT_22: op=0x97c vars=object,int,float,float
// @EVENT_16: op=0x97e vars=object,string
// @EVENT_41: op=0x980 vars=object
// @TASK_3: vars=bool,bool,bool params=0
// @EVENT_0: op=0x99a vars=object
// @EVENT_17: op=0x9ae vars=object
// @EVENT_30: op=0x9c6 vars=object,object,bool
// @EVENT_40: op=0x9e2 vars=object
// @EVENT_42: op=0x9f6 vars=object,string
// @EVENT_26: op=0xa1b vars=string
// @EVENT_1: op=0xa29 vars=object
// @EVENT_3: op=0xa3c vars=object
// @EVENT_7: op=0xa42 vars=int
// @EVENT_6: op=0xa4e vars=
// @EVENT_41: op=0xa65 vars=object
// @EVENT_10: op=0xad6 vars=object
// @EVENT_28: op=0xada vars=
// @TASK_4: vars= params=0
// @EVENT_0: op=0xaf3 vars=object
// @EVENT_17: op=0xb07 vars=object
// @EVENT_30: op=0xb1f vars=object,object,bool
// @EVENT_40: op=0xb3b vars=object
// @EVENT_42: op=0xb4f vars=object,string
// @EVENT_26: op=0xb74 vars=string
// @EVENT_6: op=0xb82 vars=
// @EVENT_1: op=0xb89 vars=object
// @TASK_5: vars=object params=1
// @EVENT_0: op=0xc25 vars=object
// @EVENT_17: op=0xc39 vars=object
// @EVENT_30: op=0xc51 vars=object,object,bool
// @EVENT_40: op=0xc6d vars=object
// @EVENT_42: op=0xc81 vars=object,string
// @EVENT_26: op=0xca6 vars=string
// @EVENT_41: op=0xcbf vars=object
// @EVENT_7: op=0xcc8 vars=int
// @EVENT_6: op=0xceb vars=
// @EVENT_1: op=0xcf2 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0xd1c vars=
// @EVENT_7: op=0xd8a vars=int
// @EVENT_41: op=0xdc5 vars=object
// @TASK_7: vars=object,cvector,bool params=1
// @EVENT_7: op=0xe45 vars=int
// @EVENT_41: op=0xe80 vars=object
// @TASK_8: vars=object,cvector,bool params=1
// @EVENT_6: op=0xe99 vars=
// @EVENT_7: op=0xf07 vars=int
// @EVENT_41: op=0xf42 vars=object
// @TASK_9: vars=object,cvector,bool params=1
// @EVENT_6: op=0xf5b vars=
// @EVENT_7: op=0xfc9 vars=int
// @EVENT_41: op=0x1004 vars=object
// @STANDALONE_EVENT_16: op=0x1433 vars=object,string
// @STANDALONE_EVENT_41: op=0x1440 vars=object
// @STANDALONE_EVENT_22: op=0x1446 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x144e vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x27e,0x294,0x8e6,0x903,0x962,0x97c,0x97e,0x980,0xa1b,0xa29,0xa3c,0xa42,0xa4e,0xa65,0xad6,0xb74,0xb82,0xb89,0xca6,0xcbf,0xceb,0xcf2,0xd00,0xd1c,0xdc5,0xe80,0xe99,0xf42,0xf5b,0x1004,0x11d2,0x11da,0x11e3,0x11ed,0x120c,0x1218,0x1224,0x122e,0x1238,0x1242,0x124c,0x1256,0x1260,0x126a,0x1274,0x127e,0x1288,0x1292,0x129c,0x12a6,0x12a9,0x12b0,0x12b7,0x12be,0x12c5,0x12cc,0x12d3,0x12da,0x12e1,0x12e8,0x12ef,0x12f6,0x1322,0x142b,0x1440,0x1446,0x144e,0x1458,0x1478,0x14a8,0x14ae,0x14f0,0x14f9,0x1501,0x150b,0x1513,0x151d,0x1567,0x156a,0x156c,0x156f,0x1571,0x1574,0x1580,0x1597,0x159f,0x15a6,0x15ac,0x15af,0x15d9,0x15e2

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	if((int)1 != 0) {
		func_4498();
		var_26_bool = var_21_cvector == (int)45769;
		if(var_26_bool != 0) {
			var_27_bool = 0; var_28_object = Obj();
			var_28_object = var_1_object;
			func_4632(var_28_object);
			if(var_27_bool != 0) {
				var_35_string = "";
				func_638(var_22_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543313);
				@@@var_0_object:ClearReplies();
				var_53_bool = 0;
				var_53_bool = 1;
				var_54_bool = 0;
				var_54_bool = 1;
				var_55_bool = 0;
				var_55_bool = 1;
				var_56_bool = 0;
				var_56_bool = 1;
				var_57_bool = 0;
				var_57_bool = 1;
				var_58_bool = 0; var_59_object = Obj();
				var_59_object = var_1_object;
				func_4654(var_58_bool, var_59_object);
				if(var_58_bool != 1) {
					var_69_bool = 0; var_70_object = Obj();
					var_70_object = var_1_object;
					func_4674(var_69_bool, var_70_object);
					if(var_69_bool != 1) {
						var_57_bool = 0;
					}
				}
				if(var_57_bool != 1) {
					var_75_bool = 0; var_76_object = Obj();
					var_76_object = var_1_object;
					func_4694(var_75_bool, var_76_object);
					if(var_75_bool != 1) {
						var_56_bool = 0;
					}
				}
				if(var_56_bool != 1) {
					var_81_bool = 0; var_82_object = Obj();
					var_82_object = var_1_object;
					func_4714(var_81_bool, var_82_object);
					if(var_81_bool != 1) {
						var_55_bool = 0;
					}
				}
				if(var_55_bool != 1) {
					var_87_bool = 0; var_88_object = Obj();
					var_88_object = var_1_object;
					func_4734(var_87_bool, var_88_object);
					if(var_87_bool != 1) {
						var_54_bool = 0;
					}
				}
				if(var_54_bool != 1) {
					var_93_bool = 0; var_94_object = Obj();
					var_94_object = var_1_object;
					func_4754(var_93_bool, var_94_object);
					if(var_93_bool != 1) {
						var_53_bool = 0;
					}
				}
				if(var_53_bool != 0) {
					@@@var_0_object:AddReply((int)543314, (int)45774, (int)45770);
				}
				var_102_bool = 0;
				var_102_bool = 1;
				var_103_bool = 0;
				var_103_bool = 1;
				var_104_bool = 0;
				var_104_bool = 1;
				var_105_bool = 0;
				var_105_bool = 1;
				var_106_bool = 0;
				var_106_bool = 1;
				var_107_bool = 0; var_108_object = Obj();
				var_108_object = var_1_object;
				func_4694(var_107_bool, var_108_object);
				if(var_107_bool != 1) {
					var_109_bool = 0; var_110_object = Obj();
					var_110_object = var_1_object;
					func_4714(var_109_bool, var_110_object);
					if(var_109_bool != 1) {
						var_106_bool = 0;
					}
				}
				if(var_106_bool != 1) {
					var_111_bool = 0; var_112_object = Obj();
					var_112_object = var_1_object;
					func_4734(var_111_bool, var_112_object);
					if(var_111_bool != 1) {
						var_105_bool = 0;
					}
				}
				if(var_105_bool != 1) {
					var_113_bool = 0; var_114_object = Obj();
					var_114_object = var_1_object;
					func_4654(var_113_bool, var_114_object);
					if(var_113_bool != 1) {
						var_104_bool = 0;
					}
				}
				if(var_104_bool != 1) {
					var_115_bool = 0; var_116_object = Obj();
					var_116_object = var_1_object;
					func_4674(var_115_bool, var_116_object);
					if(var_115_bool != 1) {
						var_103_bool = 0;
					}
				}
				if(var_103_bool != 1) {
					var_117_bool = 0; var_118_object = Obj();
					var_118_object = var_1_object;
					func_4754(var_117_bool, var_118_object);
					if(var_117_bool != 1) {
						var_102_bool = 0;
					}
				}
				if(var_102_bool != 0) {
					@@@var_0_object:AddReply((int)543316, (int)45775, (int)45772);
				}
				var_122_bool = 0;
				var_122_bool = 1;
				var_123_bool = 0;
				var_123_bool = 1;
				var_124_bool = 0;
				var_124_bool = 1;
				var_125_bool = 0;
				var_125_bool = 1;
				var_126_bool = 0;
				var_126_bool = 1;
				var_127_bool = 0; var_128_object = Obj();
				var_128_object = var_1_object;
				func_4664(var_127_bool, var_128_object);
				if(var_127_bool != 1) {
					var_133_bool = 0; var_134_object = Obj();
					var_134_object = var_1_object;
					func_4684(var_133_bool, var_134_object);
					if(var_133_bool != 1) {
						var_126_bool = 0;
					}
				}
				if(var_126_bool != 1) {
					var_139_bool = 0; var_140_object = Obj();
					var_140_object = var_1_object;
					func_4704(var_139_bool, var_140_object);
					if(var_139_bool != 1) {
						var_125_bool = 0;
					}
				}
				if(var_125_bool != 1) {
					var_145_bool = 0; var_146_object = Obj();
					var_146_object = var_1_object;
					func_4724(var_145_bool, var_146_object);
					if(var_145_bool != 1) {
						var_124_bool = 0;
					}
				}
				if(var_124_bool != 1) {
					var_151_bool = 0; var_152_object = Obj();
					var_152_object = var_1_object;
					func_4744(var_151_bool, var_152_object);
					if(var_151_bool != 1) {
						var_123_bool = 0;
					}
				}
				if(var_123_bool != 1) {
					var_157_bool = 0; var_158_object = Obj();
					var_158_object = var_1_object;
					func_4764(var_157_bool, var_158_object);
					if(var_157_bool != 1) {
						var_122_bool = 0;
					}
				}
				if(var_122_bool != 0) {
					@@@var_0_object:AddReply((int)543317, (int)45779, (int)45773);
				}
				var_166_bool = 0;
				var_166_bool = 1;
				var_167_bool = 0;
				var_167_bool = 1;
				var_168_bool = 0;
				var_168_bool = 1;
				var_169_bool = 0;
				var_169_bool = 1;
				var_170_bool = 0;
				var_170_bool = 1;
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_4664(var_171_bool, var_172_object);
				if(var_171_bool != 1) {
					var_173_bool = 0; var_174_object = Obj();
					var_174_object = var_1_object;
					func_4684(var_173_bool, var_174_object);
					if(var_173_bool != 1) {
						var_170_bool = 0;
					}
				}
				if(var_170_bool != 1) {
					var_175_bool = 0; var_176_object = Obj();
					var_176_object = var_1_object;
					func_4704(var_175_bool, var_176_object);
					if(var_175_bool != 1) {
						var_169_bool = 0;
					}
				}
				if(var_169_bool != 1) {
					var_177_bool = 0; var_178_object = Obj();
					var_178_object = var_1_object;
					func_4724(var_177_bool, var_178_object);
					if(var_177_bool != 1) {
						var_168_bool = 0;
					}
				}
				if(var_168_bool != 1) {
					var_179_bool = 0; var_180_object = Obj();
					var_180_object = var_1_object;
					func_4744(var_179_bool, var_180_object);
					if(var_179_bool != 1) {
						var_167_bool = 0;
					}
				}
				if(var_167_bool != 1) {
					var_181_bool = 0; var_182_object = Obj();
					var_182_object = var_1_object;
					func_4764(var_181_bool, var_182_object);
					if(var_181_bool != 1) {
						var_166_bool = 0;
					}
				}
				if(var_166_bool != 0) {
					@@@var_0_object:AddReply((int)543324, (int)45779, (int)45780);
				}
				var_186_bool = 0;
				var_186_bool = 1;
				var_187_bool = 0;
				var_187_bool = 1;
				var_188_bool = 0;
				var_188_bool = 1;
				var_189_bool = 0;
				var_189_bool = 1;
				var_190_bool = 0;
				var_190_bool = 1;
				var_191_bool = 0; var_192_object = Obj();
				var_192_object = var_1_object;
				func_4654(var_191_bool, var_192_object);
				if(var_191_bool != 1) {
					var_193_bool = 0; var_194_object = Obj();
					var_194_object = var_1_object;
					func_4674(var_193_bool, var_194_object);
					if(var_193_bool != 1) {
						var_190_bool = 0;
					}
				}
				if(var_190_bool != 1) {
					var_195_bool = 0; var_196_object = Obj();
					var_196_object = var_1_object;
					func_4694(var_195_bool, var_196_object);
					if(var_195_bool != 1) {
						var_189_bool = 0;
					}
				}
				if(var_189_bool != 1) {
					var_197_bool = 0; var_198_object = Obj();
					var_198_object = var_1_object;
					func_4714(var_197_bool, var_198_object);
					if(var_197_bool != 1) {
						var_188_bool = 0;
					}
				}
				if(var_188_bool != 1) {
					var_199_bool = 0; var_200_object = Obj();
					var_200_object = var_1_object;
					func_4734(var_199_bool, var_200_object);
					if(var_199_bool != 1) {
						var_187_bool = 0;
					}
				}
				if(var_187_bool != 1) {
					var_201_bool = 0; var_202_object = Obj();
					var_202_object = var_1_object;
					func_4754(var_201_bool, var_202_object);
					if(var_201_bool != 1) {
						var_186_bool = 0;
					}
				}
				if(var_186_bool != 0) {
					@@@var_0_object:AddReply((int)543315, (int)-1, (int)45771);
				}
				@@@var_0_object:AddReply((int)543327, (int)-1, (int)45784);
				return 0;
			}
			var_209_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537786);
			@@@var_0_object:ClearReplies();
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_object;
			func_4644(var_211_bool, var_212_object);
			if(var_211_bool != 0) {
				@@@var_0_object:AddReply((int)537787, (int)-1, (int)39638);
			}
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_4644(var_218_bool, var_219_object);
			if(var_218_bool != 0) {
				@@@var_0_object:AddReply((int)537788, (int)-1, (int)39639);
			}
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_4644(var_223_bool, var_224_object);
			if(var_223_bool != 0) {
				@@@var_0_object:AddReply((int)537789, (int)39641, (int)39640);
			}
			var_228_bool = 0; var_229_object = Obj();
			var_229_object = var_1_object;
			func_4644(var_228_bool, var_229_object);
			if(var_228_bool != 0) {
				@@@var_0_object:AddReply((int)537792, (int)39644, (int)39643);
			}
			var_233_bool = 0;
			var_233_bool = 0;
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_4620(var_235_object);
			if(var_234_bool != 0) {
				var_240_bool = 0; var_241_object = Obj();
				var_241_object = var_1_object;
				func_4654(var_240_bool, var_241_object);
				if(var_240_bool != 0) {
					var_233_bool = 1;
				}
			}
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)537805, (int)39658, (int)39657);
			}
			var_245_bool = 0;
			var_245_bool = 0;
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_4620(var_247_object);
			if(var_246_bool != 0) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_4664(var_248_bool, var_249_object);
				if(var_248_bool != 0) {
					var_245_bool = 1;
				}
			}
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)537826, (int)39679, (int)39678);
			}
			var_253_bool = 0;
			var_253_bool = 0;
			var_254_bool = 0; var_255_object = Obj();
			var_255_object = var_1_object;
			func_4620(var_255_object);
			if(var_254_bool != 0) {
				var_256_bool = 0; var_257_object = Obj();
				var_257_object = var_1_object;
				func_4674(var_256_bool, var_257_object);
				if(var_256_bool != 0) {
					var_253_bool = 1;
				}
			}
			if(var_253_bool != 0) {
				@@@var_0_object:AddReply((int)537846, (int)39703, (int)39702);
			}
			var_261_bool = 0;
			var_261_bool = 0;
			var_262_bool = 0; var_263_object = Obj();
			var_263_object = var_1_object;
			func_4620(var_263_object);
			if(var_262_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_4684(var_264_bool, var_265_object);
				if(var_264_bool != 0) {
					var_261_bool = 1;
				}
			}
			if(var_261_bool != 0) {
				@@@var_0_object:AddReply((int)537855, (int)39713, (int)39712);
			}
			var_269_bool = 0;
			var_269_bool = 0;
			var_270_bool = 0; var_271_object = Obj();
			var_271_object = var_1_object;
			func_4620(var_271_object);
			if(var_270_bool != 0) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_4704(var_272_bool, var_273_object);
				if(var_272_bool != 0) {
					var_269_bool = 1;
				}
			}
			if(var_269_bool != 0) {
				@@@var_0_object:AddReply((int)537867, (int)39726, (int)39725);
			}
			var_277_bool = 0;
			var_277_bool = 0;
			var_278_bool = 0; var_279_object = Obj();
			var_279_object = var_1_object;
			func_4620(var_279_object);
			if(var_278_bool != 0) {
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_object;
				func_4714(var_280_bool, var_281_object);
				if(var_280_bool != 0) {
					var_277_bool = 1;
				}
			}
			if(var_277_bool != 0) {
				@@@var_0_object:AddReply((int)537881, (int)39741, (int)39740);
			}
			var_285_bool = 0;
			var_285_bool = 0;
			var_286_bool = 0; var_287_object = Obj();
			var_287_object = var_1_object;
			func_4620(var_287_object);
			if(var_286_bool != 0) {
				var_288_bool = 0; var_289_object = Obj();
				var_289_object = var_1_object;
				func_4724(var_288_bool, var_289_object);
				if(var_288_bool != 0) {
					var_285_bool = 1;
				}
			}
			if(var_285_bool != 0) {
				@@@var_0_object:AddReply((int)537895, (int)39756, (int)39755);
			}
			var_293_bool = 0;
			var_293_bool = 0;
			var_294_bool = 0; var_295_object = Obj();
			var_295_object = var_1_object;
			func_4620(var_295_object);
			if(var_294_bool != 0) {
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_4744(var_296_bool, var_297_object);
				if(var_296_bool != 0) {
					var_293_bool = 1;
				}
			}
			if(var_293_bool != 0) {
				@@@var_0_object:AddReply((int)537905, (int)39766, (int)39765);
			}
			var_301_bool = 0;
			var_301_bool = 0;
			var_302_bool = 0; var_303_object = Obj();
			var_303_object = var_1_object;
			func_4620(var_303_object);
			if(var_302_bool != 0) {
				var_304_bool = 0; var_305_object = Obj();
				var_305_object = var_1_object;
				func_4754(var_304_bool, var_305_object);
				if(var_304_bool != 0) {
					var_301_bool = 1;
				}
			}
			if(var_301_bool != 0) {
				@@@var_0_object:AddReply((int)537918, (int)39780, (int)39779);
			}
			@@@var_0_object:AddReply((int)537927, (int)-1, (int)39788);
			@@@var_0_object:AddReply((int)537928, (int)-1, (int)39789);
			return 0;
		}
		var_316_bool = var_21_cvector == (int)39780;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537920, (int)39782, (int)39781);
			@@@var_0_object:AddReply((int)537926, (int)-1, (int)39787);
			return 0;
		}
		var_326_bool = var_21_cvector == (int)39782;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537922, (int)39784, (int)39783);
			return 0;
		}
		var_333_bool = var_21_cvector == (int)39784;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537924, (int)-1, (int)39785);
			@@@var_0_object:AddReply((int)537925, (int)-1, (int)39786);
			return 0;
		}
		var_343_bool = var_21_cvector == (int)39766;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537907, (int)39768, (int)39767);
			@@@var_0_object:AddReply((int)537917, (int)-1, (int)39778);
			return 0;
		}
		var_353_bool = var_21_cvector == (int)39768;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537909, (int)39770, (int)39769);
			@@@var_0_object:AddReply((int)537913, (int)39774, (int)39773);
			return 0;
		}
		var_363_bool = var_21_cvector == (int)39774;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537915, (int)39770, (int)39775);
			@@@var_0_object:AddReply((int)537916, (int)-1, (int)39777);
			return 0;
		}
		var_373_bool = var_21_cvector == (int)39770;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537911, (int)-1, (int)39771);
			@@@var_0_object:AddReply((int)537912, (int)-1, (int)39772);
			return 0;
		}
		var_383_bool = var_21_cvector == (int)39756;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537897, (int)39758, (int)39757);
			@@@var_0_object:AddReply((int)537904, (int)-1, (int)39764);
			return 0;
		}
		var_393_bool = var_21_cvector == (int)39758;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537899, (int)39760, (int)39759);
			@@@var_0_object:AddReply((int)537903, (int)-1, (int)39763);
			return 0;
		}
		var_403_bool = var_21_cvector == (int)39760;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537901, (int)-1, (int)39761);
			@@@var_0_object:AddReply((int)537902, (int)-1, (int)39762);
			return 0;
		}
		var_413_bool = var_21_cvector == (int)39741;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537883, (int)39743, (int)39742);
			@@@var_0_object:AddReply((int)537891, (int)39751, (int)39750);
			return 0;
		}
		var_423_bool = var_21_cvector == (int)39751;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537893, (int)39745, (int)39752);
			@@@var_0_object:AddReply((int)537894, (int)-1, (int)39754);
			return 0;
		}
		var_433_bool = var_21_cvector == (int)39743;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537885, (int)39745, (int)39744);
			return 0;
		}
		var_440_bool = var_21_cvector == (int)39745;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537887, (int)39747, (int)39746);
			@@@var_0_object:AddReply((int)537890, (int)-1, (int)39749);
			return 0;
		}
		var_450_bool = var_21_cvector == (int)39747;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537889, (int)-1, (int)39748);
			return 0;
		}
		var_457_bool = var_21_cvector == (int)39726;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537868);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537869, (int)39728, (int)39727);
			@@@var_0_object:AddReply((int)537880, (int)-1, (int)39739);
			return 0;
		}
		var_467_bool = var_21_cvector == (int)39728;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537871, (int)39730, (int)39729);
			@@@var_0_object:AddReply((int)537877, (int)39736, (int)39735);
			return 0;
		}
		var_477_bool = var_21_cvector == (int)39736;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537878);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537879, (int)39730, (int)39737);
			return 0;
		}
		var_484_bool = var_21_cvector == (int)39730;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537873, (int)39732, (int)39731);
			return 0;
		}
		var_491_bool = var_21_cvector == (int)39732;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537875, (int)-1, (int)39733);
			@@@var_0_object:AddReply((int)537876, (int)-1, (int)39734);
			return 0;
		}
		var_501_bool = var_21_cvector == (int)39713;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537856);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537857, (int)39715, (int)39714);
			@@@var_0_object:AddReply((int)537864, (int)39722, (int)39721);
			return 0;
		}
		var_511_bool = var_21_cvector == (int)39722;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537866, (int)39717, (int)39723);
			return 0;
		}
		var_518_bool = var_21_cvector == (int)39715;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537859, (int)39717, (int)39716);
			@@@var_0_object:AddReply((int)537863, (int)-1, (int)39720);
			return 0;
		}
		var_528_bool = var_21_cvector == (int)39717;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537861, (int)-1, (int)39718);
			@@@var_0_object:AddReply((int)537862, (int)-1, (int)39719);
			return 0;
		}
		var_538_bool = var_21_cvector == (int)39703;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537848, (int)39705, (int)39704);
			@@@var_0_object:AddReply((int)537854, (int)39707, (int)39710);
			return 0;
		}
		var_548_bool = var_21_cvector == (int)39705;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537849);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537850, (int)39707, (int)39706);
			return 0;
		}
		var_555_bool = var_21_cvector == (int)39707;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537852, (int)-1, (int)39708);
			@@@var_0_object:AddReply((int)537853, (int)-1, (int)39709);
			return 0;
		}
		var_565_bool = var_21_cvector == (int)39679;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537827);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537828, (int)39681, (int)39680);
			@@@var_0_object:AddReply((int)537843, (int)39699, (int)39698);
			return 0;
		}
		var_575_bool = var_21_cvector == (int)39699;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537844);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537845, (int)39681, (int)39700);
			return 0;
		}
		var_582_bool = var_21_cvector == (int)39681;
		if(var_582_bool != 0) {
			var_583_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537830, (int)39683, (int)39682);
			@@@var_0_object:AddReply((int)537840, (int)39695, (int)39694);
			return 0;
		}
		var_592_bool = var_21_cvector == (int)39695;
		if(var_592_bool != 0) {
			var_593_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537842, (int)39685, (int)39696);
			return 0;
		}
		var_599_bool = var_21_cvector == (int)39683;
		if(var_599_bool != 0) {
			var_600_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537832, (int)39685, (int)39684);
			return 0;
		}
		var_606_bool = var_21_cvector == (int)39685;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537834, (int)39687, (int)39686);
			@@@var_0_object:AddReply((int)537838, (int)39687, (int)39690);
			@@@var_0_object:AddReply((int)537839, (int)39687, (int)39692);
			return 0;
		}
		var_619_bool = var_21_cvector == (int)39687;
		if(var_619_bool != 0) {
			var_620_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537836, (int)-1, (int)39688);
			@@@var_0_object:AddReply((int)537837, (int)-1, (int)39689);
			return 0;
		}
		var_629_bool = var_21_cvector == (int)39658;
		if(var_629_bool != 0) {
			var_630_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537807, (int)39660, (int)39659);
			@@@var_0_object:AddReply((int)537818, (int)39671, (int)39670);
			return 0;
		}
		var_639_bool = var_21_cvector == (int)39671;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537819);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537820, (int)39673, (int)39672);
			return 0;
		}
		var_646_bool = var_21_cvector == (int)39673;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537822, (int)39675, (int)39674);
			return 0;
		}
		var_653_bool = var_21_cvector == (int)39675;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537824, (int)-1, (int)39676);
			@@@var_0_object:AddReply((int)537825, (int)-1, (int)39677);
			return 0;
		}
		var_663_bool = var_21_cvector == (int)39660;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537809, (int)39662, (int)39661);
			@@@var_0_object:AddReply((int)537815, (int)39668, (int)39667);
			return 0;
		}
		var_673_bool = var_21_cvector == (int)39668;
		if(var_673_bool != 0) {
			var_674_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537817, (int)-1, (int)39669);
			return 0;
		}
		var_680_bool = var_21_cvector == (int)39662;
		if(var_680_bool != 0) {
			var_681_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537810);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537811, (int)39664, (int)39663);
			@@@var_0_object:AddReply((int)537814, (int)-1, (int)39666);
			return 0;
		}
		var_690_bool = var_21_cvector == (int)39664;
		if(var_690_bool != 0) {
			var_691_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537813, (int)-1, (int)39665);
			return 0;
		}
		var_697_bool = var_21_cvector == (int)39644;
		if(var_697_bool != 0) {
			var_698_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537794, (int)39646, (int)39645);
			@@@var_0_object:AddReply((int)537804, (int)-1, (int)39656);
			return 0;
		}
		var_707_bool = var_21_cvector == (int)39646;
		if(var_707_bool != 0) {
			var_708_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537795);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537796, (int)39648, (int)39647);
			@@@var_0_object:AddReply((int)537803, (int)39648, (int)39654);
			return 0;
		}
		var_717_bool = var_21_cvector == (int)39648;
		if(var_717_bool != 0) {
			var_718_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537798, (int)39650, (int)39649);
			@@@var_0_object:AddReply((int)537802, (int)-1, (int)39653);
			return 0;
		}
		var_727_bool = var_21_cvector == (int)39650;
		if(var_727_bool != 0) {
			var_728_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537800, (int)-1, (int)39651);
			@@@var_0_object:AddReply((int)537801, (int)-1, (int)39652);
			return 0;
		}
		var_737_bool = var_21_cvector == (int)39641;
		if(var_737_bool != 0) {
			var_738_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537790);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537791, (int)-1, (int)39642);
			return 0;
		}
		var_744_bool = var_21_cvector == (int)45779;
		if(var_744_bool != 0) {
			var_745_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543325, (int)-1, (int)45781);
			@@@var_0_object:AddReply((int)543326, (int)-1, (int)45782);
			return 0;
		}
		var_754_bool = var_21_cvector == (int)45775;
		if(var_754_bool != 0) {
			var_755_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543320, (int)-1, (int)45776);
			return 0;
		}
		var_761_bool = var_21_cvector == (int)45774;
		if(var_761_bool != 0) {
			var_762_string = "";
			func_638(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543321, (int)-1, (int)45777);
			return 0;
		}
		var_3_string = true;
		var_767_bool = 0;
		func_5561(var_767_bool);
		if(var_767_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x295";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_5489(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_28_object = Obj();
		var_21_bool = var_28_object;
		func_5492(var_28_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_5498();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_5489(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_2645(var_23_int);
		}
		var_31_object = Obj();
		var_21_bool = var_31_object;
		func_5492(var_31_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_object = Obj();
	var_21_bool = var_24_object;
	func_5294(var_24_object);
	var_33_int = 0; var_34_object = Obj();
	var_21_bool = var_34_object;
	func_5377(var_33_int, var_34_object);
	var_33_int = var_23_int;
	var_70_bool = var_23_int > (int)0;
	if(var_70_bool != 0) {
		var_72_bool = var_23_int > (int)1;
		if(var_72_bool != 0) {
			func_2645(var_23_int);
		}
		var_74_object = Obj();
		var_21_bool = var_74_object;
		func_5387(var_74_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0;
	var_21_object = var_27_object;
	var_22_cvector = var_28_object;
	var_23_bool = var_29_bool;
	func_5593(var_27_object, var_28_object, var_29_bool);
	if(var_26_bool != 0) {
		var_73_int = 0; var_74_object = Obj(); var_75_bool = 0;
		var_21_object = var_74_object;
		var_23_bool = var_75_bool;
		func_5395(var_74_object, var_75_bool);
		var_73_int = var_25_int;
		var_105_bool = var_25_int > (int)0;
		if(var_105_bool != 0) {
			var_107_bool = var_25_int > (int)1;
			if(var_107_bool != 0) {
				func_2645(var_25_int);
			}
			var_109_object = Obj();
			var_21_object = var_109_object;
			func_5405(var_109_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_5479(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_2645(var_23_int);
		}
		var_21_bool = Obj();
		func_5482();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_cvector = var_26_object;
	var_22_bool = var_27_string;
	func_5208(var_25_bool, var_26_object, var_27_string);
	if(var_25_bool != 0) {
		func_2645(var_24_int);
		var_58_object = Obj(); var_59_string = "";
		var_21_cvector = var_58_object;
		var_22_bool = var_59_string;
		func_5240(var_58_object, var_59_string);
	} else {
		var_207_int = 0; var_208_string = ""; var_209_object = Obj();
		var_22_bool = var_208_string;
		var_21_cvector = var_209_object;
		func_5484(var_209_object);
		var_207_int = var_24_int;
		var_211_bool = var_24_int > (int)0;
		if(var_211_bool == 0) goto Label_2586;
		var_213_bool = var_24_int > (int)1;
		if(var_213_bool != 0) {
			func_2645(var_24_int);
		}
		var_214_string = ""; var_215_object = Obj();
		var_22_bool = var_214_string;
		var_21_cvector = var_215_object;
		func_5487();
	}
Label_2586:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = "";
	var_21_bool = var_23_string;
	func_5307(var_22_bool, var_23_string);
	if(var_22_bool != 0) {
		func_2645(var_21_bool);
		var_32_string = "";
		var_21_bool = var_32_string;
		func_5323(var_32_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_bool = var_23_object;
	func_5265(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		func_2645(var_21_bool);
		var_37_object = Obj();
		var_21_bool = var_37_object;
		func_5288(var_37_object);
	} else {
		var_111_object = Obj();
		var_21_bool = var_111_object;
		func_2670(var_21_bool, var_111_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_object = Obj();
	var_21_bool = var_22_object;
	func_2670(var_21_bool, var_22_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_23_bool = var_21_bool != (int)110;
	if(var_23_bool != 0) {
		return 0;
	}
	var_2_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2645(var_20_bool);
	func_5498();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2645(var_21_bool);
	var_21_bool = Obj();
	func_5184();
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	RequestClearPath(var_21_bool);
	return 0;
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	Stop();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_5489(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_3048();
		}
		var_30_object = Obj();
		var_21_bool = var_30_object;
		func_5492(var_30_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_object = Obj();
	var_21_bool = var_24_object;
	func_5294(var_24_object);
	var_33_int = 0; var_34_object = Obj();
	var_21_bool = var_34_object;
	func_5377(var_33_int, var_34_object);
	var_33_int = var_23_int;
	var_70_bool = var_23_int > (int)0;
	if(var_70_bool != 0) {
		var_72_bool = var_23_int > (int)1;
		if(var_72_bool != 0) {
			func_3048();
		}
		var_73_object = Obj();
		var_21_bool = var_73_object;
		func_5387(var_73_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0;
	var_21_object = var_27_object;
	var_22_cvector = var_28_object;
	var_23_bool = var_29_bool;
	func_5593(var_27_object, var_28_object, var_29_bool);
	if(var_26_bool != 0) {
		var_73_int = 0; var_74_object = Obj(); var_75_bool = 0;
		var_21_object = var_74_object;
		var_23_bool = var_75_bool;
		func_5395(var_74_object, var_75_bool);
		var_73_int = var_25_int;
		var_105_bool = var_25_int > (int)0;
		if(var_105_bool != 0) {
			var_107_bool = var_25_int > (int)1;
			if(var_107_bool != 0) {
				func_3048();
			}
			var_108_object = Obj();
			var_21_object = var_108_object;
			func_5405(var_108_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_5479(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_3048();
		}
		var_21_bool = Obj();
		func_5482();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_cvector = var_26_object;
	var_22_bool = var_27_string;
	func_5208(var_25_bool, var_26_object, var_27_string);
	if(var_25_bool != 0) {
		func_3048();
		var_57_object = Obj(); var_58_string = "";
		var_21_cvector = var_57_object;
		var_22_bool = var_58_string;
		func_5240(var_57_object, var_58_string);
	} else {
		var_206_int = 0; var_207_string = ""; var_208_object = Obj();
		var_22_bool = var_207_string;
		var_21_cvector = var_208_object;
		func_5484(var_208_object);
		var_206_int = var_24_int;
		var_210_bool = var_24_int > (int)0;
		if(var_210_bool == 0) goto Label_2931;
		var_212_bool = var_24_int > (int)1;
		if(var_212_bool != 0) {
			func_3048();
		}
		var_213_string = ""; var_214_object = Obj();
		var_22_bool = var_213_string;
		var_21_cvector = var_214_object;
		func_5487();
	}
Label_2931:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = "";
	var_21_bool = var_23_string;
	func_5307(var_22_bool, var_23_string);
	if(var_22_bool != 0) {
		func_3048();
		var_31_string = "";
		var_21_bool = var_31_string;
		func_5323(var_31_string);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_3048();
	func_5498();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_bool = var_23_object;
	func_5265(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		func_3048();
		var_36_object = Obj();
		var_21_bool = var_36_object;
		func_5288(var_36_object);
	}
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_5489(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_3252();
		}
		var_32_object = Obj();
		var_21_bool = var_32_object;
		func_5492(var_32_object);
	}
	return 2;
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_object = Obj();
	var_21_bool = var_24_object;
	func_5294(var_24_object);
	var_33_int = 0; var_34_object = Obj();
	var_21_bool = var_34_object;
	func_5377(var_33_int, var_34_object);
	var_33_int = var_23_int;
	var_70_bool = var_23_int > (int)0;
	if(var_70_bool != 0) {
		var_72_bool = var_23_int > (int)1;
		if(var_72_bool != 0) {
			func_3252();
		}
		var_75_object = Obj();
		var_21_bool = var_75_object;
		func_5387(var_75_object);
	}
	return 2;
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0;
	var_21_object = var_27_object;
	var_22_cvector = var_28_object;
	var_23_bool = var_29_bool;
	func_5593(var_27_object, var_28_object, var_29_bool);
	if(var_26_bool != 0) {
		var_73_int = 0; var_74_object = Obj(); var_75_bool = 0;
		var_21_object = var_74_object;
		var_23_bool = var_75_bool;
		func_5395(var_74_object, var_75_bool);
		var_73_int = var_25_int;
		var_105_bool = var_25_int > (int)0;
		if(var_105_bool != 0) {
			var_107_bool = var_25_int > (int)1;
			if(var_107_bool != 0) {
				func_3252();
			}
			var_110_object = Obj();
			var_21_object = var_110_object;
			func_5405(var_110_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_5479(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_3252();
		}
		var_21_bool = Obj();
		func_5482();
	}
	return 2;
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_cvector = var_26_object;
	var_22_bool = var_27_string;
	func_5208(var_25_bool, var_26_object, var_27_string);
	if(var_25_bool != 0) {
		func_3252();
		var_59_object = Obj(); var_60_string = "";
		var_21_cvector = var_59_object;
		var_22_bool = var_60_string;
		func_5240(var_59_object, var_60_string);
	} else {
		var_208_int = 0; var_209_string = ""; var_210_object = Obj();
		var_22_bool = var_209_string;
		var_21_cvector = var_210_object;
		func_5484(var_210_object);
		var_208_int = var_24_int;
		var_212_bool = var_24_int > (int)0;
		if(var_212_bool == 0) goto Label_3237;
		var_214_bool = var_24_int > (int)1;
		if(var_214_bool != 0) {
			func_3252();
		}
		var_215_string = ""; var_216_object = Obj();
		var_22_bool = var_215_string;
		var_21_cvector = var_216_object;
		func_5487();
	}
Label_3237:
	return 2;
	
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = "";
	var_21_bool = var_23_string;
	func_5307(var_22_bool, var_23_string);
	if(var_22_bool != 0) {
		func_3252();
		var_33_string = "";
		var_21_bool = var_33_string;
		func_5323(var_33_string);
	}
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_3252();
	var_21_bool = Obj();
	func_5184();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
	var_27_bool = var_21_bool != (int)111;
	if(var_27_bool != 0) {
		return 4;
	}
	var_28_bool = 0; var_29_object = Obj();
	var_29_object = var_0_object;
	func_4203(var_28_bool, var_29_object);
	var_62_bool = var_28_bool == 0; //@nz
	if(var_62_bool != 0) {
		func_3252();
		return 4;
	}
	GetDirection(var_24_cvector);
	var_65_cvector = CVector(0,0,0); var_66_object = Obj();
	var_66_object = var_0_object;
	func_4130(var_65_cvector, var_66_object);
	var_65_cvector = var_25_cvector;
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_24_cvector = var_72_cvector;
	var_25_cvector = var_73_cvector;
	func_4589(var_71_float, var_72_cvector, var_73_cvector);
	var_96_bool = var_71_float < (float)0.4999999701976776;
	if(var_96_bool != 0) {
		var_97_object = Obj();
		var_97_object = var_0_object;
		func_4353(var_97_object);
	}
	return 4;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_3252();
	func_5498();
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_bool = var_23_object;
	func_5265(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		func_3252();
		var_38_object = Obj();
		var_21_bool = var_38_object;
		func_5288(var_38_object);
	}
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_3518(var_20_bool);
	func_5498();
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0;
	var_31_bool = var_21_bool != (int)120;
	if(var_31_bool != 0) {
		return 8;
	}
	var_32_bool = var_0_object == 0; //@ne
	if(var_32_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_26_cvector);
		FindDirLength(var_27_float, var_26_cvector, (float)7000.0);
		var_35_cvector = CVector(0,0,0); var_36_float = 0;
		func_3363(var_29_float, var_35_cvector, (float)1.7453293800354004);
		var_35_cvector = var_28_cvector;
		var_29_float = var_28_cvector | var_28_cvector;
		var_65_bool = 0;
		var_65_bool = 0;
		var_67_bool = var_29_float >= (float)2500.0;
		if(var_67_bool != 0) {
			var_68_bool = 0;
			var_69_float = var_27_float * var_27_float;
			var_71_float = var_69_float * (float)2.25;
			var_72_bool = var_29_float >= var_71_float;
			if(var_72_bool != 1) {
				var_73_bool = 0;
				func_3534((bool)1, var_73_bool);
				if(var_73_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool == 0) goto Label_3517;
		Stop();
		var_93_cvector = CVector(0,0,0);
		func_4125(var_93_cvector);
		var_1_object = var_93_cvector + var_28_cvector;
	}
Label_3517:
	return 8;
	
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_3518(var_21_bool);
	var_21_bool = Obj();
	func_5184();
	return 0;
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_int, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0;
	var_31_bool = var_21_bool != (int)120;
	if(var_31_bool != 0) {
		return 8;
	}
	var_32_bool = var_0_object == 0; //@ne
	if(var_32_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_26_cvector);
		FindDirLength(var_27_float, var_26_cvector, (float)7000.0);
		var_35_cvector = CVector(0,0,0); var_36_float = 0;
		func_3550(var_29_float, var_35_cvector, (float)1.7453293800354004);
		var_35_cvector = var_28_cvector;
		var_29_float = var_28_cvector | var_28_cvector;
		var_65_bool = 0;
		var_65_bool = 0;
		var_67_bool = var_29_float >= (float)2500.0;
		if(var_67_bool != 0) {
			var_68_bool = 0;
			var_69_float = var_27_float * var_27_float;
			var_71_float = var_69_float * (float)2.25;
			var_72_bool = var_29_float >= var_71_float;
			if(var_72_bool != 1) {
				var_73_bool = 0;
				func_3721((bool)1, var_73_bool);
				if(var_73_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool == 0) goto Label_3704;
		Stop();
		var_93_cvector = CVector(0,0,0);
		func_4125(var_93_cvector);
		var_1_object = var_93_cvector + var_28_cvector;
	}
Label_3704:
	return 8;
	
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_3705(var_21_bool);
	var_21_bool = Obj();
	func_5184();
	return 0;
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_3899(var_20_bool);
	func_5498();
	return 0;
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_int, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0;
	var_31_bool = var_21_bool != (int)120;
	if(var_31_bool != 0) {
		return 8;
	}
	var_32_bool = var_0_object == 0; //@ne
	if(var_32_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_26_cvector);
		FindDirLength(var_27_float, var_26_cvector, (float)7000.0);
		var_35_cvector = CVector(0,0,0); var_36_float = 0;
		func_3744(var_29_float, var_35_cvector, (float)1.7453293800354004);
		var_35_cvector = var_28_cvector;
		var_29_float = var_28_cvector | var_28_cvector;
		var_65_bool = 0;
		var_65_bool = 0;
		var_67_bool = var_29_float >= (float)2500.0;
		if(var_67_bool != 0) {
			var_68_bool = 0;
			var_69_float = var_27_float * var_27_float;
			var_71_float = var_69_float * (float)2.25;
			var_72_bool = var_29_float >= var_71_float;
			if(var_72_bool != 1) {
				var_73_bool = 0;
				func_3915((bool)1, var_73_bool);
				if(var_73_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool == 0) goto Label_3898;
		Stop();
		var_93_cvector = CVector(0,0,0);
		func_4125(var_93_cvector);
		var_1_object = var_93_cvector + var_28_cvector;
	}
Label_3898:
	return 8;
	
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_cvector, var_21_bool)
{
	func_3899(var_21_bool);
	var_21_bool = Obj();
	func_5184();
	return 0;
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_4093(var_20_bool);
	func_5498();
	return 0;
}


task_9_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_int)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0;
	var_31_bool = var_21_int != (int)120;
	if(var_31_bool != 0) {
		return 8;
	}
	var_32_bool = var_0_object == 0; //@ne
	if(var_32_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_26_cvector);
		FindDirLength(var_27_float, var_26_cvector, (float)7000.0);
		var_35_cvector = CVector(0,0,0); var_36_float = 0;
		func_3938(var_29_float, var_35_cvector, (float)1.7453293800354004);
		var_35_cvector = var_28_cvector;
		var_29_float = var_28_cvector | var_28_cvector;
		var_65_bool = 0;
		var_65_bool = 0;
		var_67_bool = var_29_float >= (float)2500.0;
		if(var_67_bool != 0) {
			var_68_bool = 0;
			var_69_float = var_27_float * var_27_float;
			var_71_float = var_69_float * (float)2.25;
			var_72_bool = var_29_float >= var_71_float;
			if(var_72_bool != 1) {
				var_73_bool = 0;
				func_4109((bool)1, var_73_bool);
				if(var_73_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool == 0) goto Label_4092;
		Stop();
		var_93_cvector = CVector(0,0,0);
		func_4125(var_93_cvector);
		var_1_object = var_93_cvector + var_28_cvector;
	}
Label_4092:
	return 8;
	
}


task_9_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object)
{
	func_4093(var_21_object);
	var_21_object = Obj();
	func_5184();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_string)
{
	var_23_float = 0; var_24_float = 0;
	var_26_bool = var_22_string == "health";
	if(var_26_bool != 0) {
		GetProperty("health", var_24_float);
		var_29_bool = var_24_float <= (int)0;
		if(var_29_bool != 0) {
			SignalDeath(var_21_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object)
{
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_5163(var_22_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0;
	var_21_object = var_25_object;
	var_22_int = var_26_int;
	var_23_float = var_27_float;
	func_4271(var_25_object, var_26_int, var_27_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_int = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
	var_21_object = var_27_object;
	var_22_int = var_28_int;
	var_23_float = var_29_float;
	var_25_cvector = var_30_cvector;
	var_26_cvector = var_31_cvector;
	func_4339(var_29_float, var_30_cvector, var_31_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	SensePlayerOnly((bool)1);
	func_5563();
	func_2449();
	
Label_2443:
	var_2_object = false;
	func_2710(var_19_cvector, var_20_bool);
	goto Label_2443;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_45_int, var_46_object)
{
	var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0;
	var_0_object = var_46_object;
	var_56_bool = 0; var_57_object = Obj(); var_58_float = 0;
	var_46_object = var_57_object;
	func_4369(var_56_bool, var_57_object, (float)70.0);
	var_103_bool = var_56_bool == 0; //@nz
	if(var_103_bool != 0) {
		var_45_int = -2;
		return 8;
	}
	CreateDialog(var_52_object);
	var_104_int = 0;
	func_5555(var_104_int);
	@@var_52_object:SetNPCName(var_104_int);
	var_105_int = 0;
	func_5553(var_105_int);
	@@var_52_object:SetNPCDescription(var_105_int);
	var_106_string = "";
	func_5557(var_106_string);
	@@var_52_object:SetPhoto(var_106_string);
	var_107_string = "";
	func_5559(var_107_string);
	@@var_52_object:SetPhoto2(var_107_string);
	var_108_int = 0;
	func_4861(var_108_int);
	@@var_52_object:SetPlayerName(var_108_int);
	IsOverrideActive(var_53_bool);
	var_116_bool = var_53_bool;
	if(var_116_bool != 0) {
		var_45_int = -2;
		return 8;
	}
	DoDialog(var_52_object);
	var_117_object = Obj(); var_118_object = Obj();
	var_46_object = var_117_object;
	var_52_object = var_118_object;
	TaskCall(1);
	func_74(var_119_object, var_120_object, var_121_string, var_122_bool, var_117_object, var_118_object);
	TaskReturn();
	@@var_52_object:IsDialogEnd(var_55_bool);
	
Label_56:
	var_430_bool = var_55_bool == 0; //@nz
	if(var_430_bool != 0) {
		sync();
		@@var_52_object:IsDialogEnd(var_55_bool);
		goto Label_56;
	}
	var_46_object = Obj();
	func_4438();
	StopDialog(var_52_object);
	@@var_52_object:GetReturnValue((int)-1);
	var_54_int = var_45_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4611(var_123_int)
{
	var_124_float = 0; var_125_float = 0;
	GetGameTime(var_125_float);
	var_127_int = 0;
	var_127_int = var_125_float / (int)24;
	var_123_int = (int)1 + var_127_int;
	return 2;
}


func_4620(var_349_bool)
{
	var_351_int = 0; var_352_string = "";
	func_4606(var_351_int, "branch");
	var_354_bool = var_351_int == (int)0;
	if(var_354_bool != 0) {
		var_349_bool = 1;
		return 0;
	}
	var_349_bool = 0;
	return 0;
}


func_4109(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	GetDirection(var_76_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_object;
	func_4130(var_78_cvector, var_79_object);
	var_78_cvector = var_77_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_4562(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= (float)-0.3420201241970062;
	return 4;
}


func_4632(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_4606(var_126_int, "branch");
	var_131_bool = var_126_int == (int)2;
	if(var_131_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_4125(var_93_cvector)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0);
	GetPosition(var_95_cvector);
	var_95_cvector = var_93_cvector;
	return 2;
}


func_3104(var_0_object)
{
	var_90_object = Obj();
	var_90_object = var_0_object;
	func_4487(var_90_object);
	return 0;
}


func_4130(var_55_cvector, var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	GetPosition(var_59_cvector);
	@@var_56_object:GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
	return 4;
}


func_4644(var_326_bool, var_327_object)
{
	var_328_bool = 0; var_329_object = Obj();
	var_327_object = var_329_object;
	func_4774(var_329_object);
	if(var_328_bool != 0) {
		var_326_bool = 1;
		return 0;
	}
	var_326_bool = 0;
	return 0;
}


func_5158(var_141_int, var_142_string)
{
	var_143_int = 0; var_144_int = 0;
	GetInvItemByName(var_144_int, var_142_string);
	var_144_int = var_141_int;
	return 2;
}


func_4137(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_5163(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	TaskCall(2);
	func_2278(var_23_object);
	TaskReturn();
	return 0;
}


func_4654(var_155_bool, var_156_object)
{
	var_157_bool = 0; var_158_object = Obj();
	var_156_object = var_158_object;
	func_4777(var_158_object);
	if(var_157_bool != 0) {
		var_155_bool = 1;
		return 0;
	}
	var_155_bool = 0;
	return 0;
}


func_4145(var_105_bool, var_106_object)
{
	var_107_bool = 0; var_108_bool = 0;
	IsPlayerActor(var_106_object, var_108_bool);
	var_108_bool = var_105_bool;
	return 2;
}


func_4150(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0;
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", (int)2);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_50_bool = 0;
		return 2;
	}
	@@var_51_object:HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
	return 2;
}


func_4664(var_224_bool, var_225_object)
{
	var_226_bool = 0; var_227_object = Obj();
	var_225_object = var_227_object;
	func_4784(var_227_object);
	if(var_226_bool != 0) {
		var_224_bool = 1;
		return 0;
	}
	var_224_bool = 0;
	return 0;
}


func_4674(var_166_bool, var_167_object)
{
	var_168_bool = 0; var_169_object = Obj();
	var_167_object = var_169_object;
	func_4791(var_169_object);
	if(var_168_bool != 0) {
		var_166_bool = 1;
		return 0;
	}
	var_166_bool = 0;
	return 0;
}


func_4162(var_43_bool, var_44_object)
{
	var_45_bool = 0; var_46_bool = 0;
	@@var_44_object:IsDead(var_46_bool);
	var_46_bool = var_43_bool;
	return 2;
}


func_4167(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj();
	var_38_bool = var_33_object == 0; //@ne
	if(var_38_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	var_39_bool = 0;
	var_39_bool = 0;
	var_42_bool = IsFuncExist(var_33_object, "IsDead", (int)1);
	if(var_42_bool != 0) {
		var_43_bool = 0; var_44_object = Obj();
		var_33_object = var_44_object;
		func_4162(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	GetScene(var_36_object);
	var_47_bool = var_36_object == 0; //@ne
	if(var_47_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	@@var_33_object:GetScene(var_37_object);
	var_48_bool = var_36_object != var_37_object;
	if(var_48_bool != 0) {
		var_32_bool = 0;
		return 4;
	}
	var_32_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_117_object, var_118_object)
{
	var_0_object = var_118_object;
	var_1_object = var_117_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_124_bool = 0; var_125_object = Obj();
		var_125_object = var_1_object;
		func_4632(var_125_object);
		if(var_124_bool != 0) {
			var_132_string = "";
			func_638(var_118_object, "Neutral");
			@@@var_0_object:SetMessage((int)543313);
			@@@var_0_object:ClearReplies();
			var_150_bool = 0;
			var_150_bool = 1;
			var_151_bool = 0;
			var_151_bool = 1;
			var_152_bool = 0;
			var_152_bool = 1;
			var_153_bool = 0;
			var_153_bool = 1;
			var_154_bool = 0;
			var_154_bool = 1;
			var_155_bool = 0; var_156_object = Obj();
			var_156_object = var_1_object;
			func_4654(var_155_bool, var_156_object);
			if(var_155_bool != 1) {
				var_166_bool = 0; var_167_object = Obj();
				var_167_object = var_1_object;
				func_4674(var_166_bool, var_167_object);
				if(var_166_bool != 1) {
					var_154_bool = 0;
				}
			}
			if(var_154_bool != 1) {
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_4694(var_172_bool, var_173_object);
				if(var_172_bool != 1) {
					var_153_bool = 0;
				}
			}
			if(var_153_bool != 1) {
				var_178_bool = 0; var_179_object = Obj();
				var_179_object = var_1_object;
				func_4714(var_178_bool, var_179_object);
				if(var_178_bool != 1) {
					var_152_bool = 0;
				}
			}
			if(var_152_bool != 1) {
				var_184_bool = 0; var_185_object = Obj();
				var_185_object = var_1_object;
				func_4734(var_184_bool, var_185_object);
				if(var_184_bool != 1) {
					var_151_bool = 0;
				}
			}
			if(var_151_bool != 1) {
				var_190_bool = 0; var_191_object = Obj();
				var_191_object = var_1_object;
				func_4754(var_190_bool, var_191_object);
				if(var_190_bool != 1) {
					var_150_bool = 0;
				}
			}
			if(var_150_bool != 0) {
				@@@var_0_object:AddReply((int)543314, (int)45774, (int)45770);
			}
			var_199_bool = 0;
			var_199_bool = 1;
			var_200_bool = 0;
			var_200_bool = 1;
			var_201_bool = 0;
			var_201_bool = 1;
			var_202_bool = 0;
			var_202_bool = 1;
			var_203_bool = 0;
			var_203_bool = 1;
			var_204_bool = 0; var_205_object = Obj();
			var_205_object = var_1_object;
			func_4694(var_204_bool, var_205_object);
			if(var_204_bool != 1) {
				var_206_bool = 0; var_207_object = Obj();
				var_207_object = var_1_object;
				func_4714(var_206_bool, var_207_object);
				if(var_206_bool != 1) {
					var_203_bool = 0;
				}
			}
			if(var_203_bool != 1) {
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_object;
				func_4734(var_208_bool, var_209_object);
				if(var_208_bool != 1) {
					var_202_bool = 0;
				}
			}
			if(var_202_bool != 1) {
				var_210_bool = 0; var_211_object = Obj();
				var_211_object = var_1_object;
				func_4654(var_210_bool, var_211_object);
				if(var_210_bool != 1) {
					var_201_bool = 0;
				}
			}
			if(var_201_bool != 1) {
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_4674(var_212_bool, var_213_object);
				if(var_212_bool != 1) {
					var_200_bool = 0;
				}
			}
			if(var_200_bool != 1) {
				var_214_bool = 0; var_215_object = Obj();
				var_215_object = var_1_object;
				func_4754(var_214_bool, var_215_object);
				if(var_214_bool != 1) {
					var_199_bool = 0;
				}
			}
			if(var_199_bool != 0) {
				@@@var_0_object:AddReply((int)543316, (int)45775, (int)45772);
			}
			var_219_bool = 0;
			var_219_bool = 1;
			var_220_bool = 0;
			var_220_bool = 1;
			var_221_bool = 0;
			var_221_bool = 1;
			var_222_bool = 0;
			var_222_bool = 1;
			var_223_bool = 0;
			var_223_bool = 1;
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_4664(var_224_bool, var_225_object);
			if(var_224_bool != 1) {
				var_230_bool = 0; var_231_object = Obj();
				var_231_object = var_1_object;
				func_4684(var_230_bool, var_231_object);
				if(var_230_bool != 1) {
					var_223_bool = 0;
				}
			}
			if(var_223_bool != 1) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_4704(var_236_bool, var_237_object);
				if(var_236_bool != 1) {
					var_222_bool = 0;
				}
			}
			if(var_222_bool != 1) {
				var_242_bool = 0; var_243_object = Obj();
				var_243_object = var_1_object;
				func_4724(var_242_bool, var_243_object);
				if(var_242_bool != 1) {
					var_221_bool = 0;
				}
			}
			if(var_221_bool != 1) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_4744(var_248_bool, var_249_object);
				if(var_248_bool != 1) {
					var_220_bool = 0;
				}
			}
			if(var_220_bool != 1) {
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_4764(var_254_bool, var_255_object);
				if(var_254_bool != 1) {
					var_219_bool = 0;
				}
			}
			if(var_219_bool != 0) {
				@@@var_0_object:AddReply((int)543317, (int)45779, (int)45773);
			}
			var_263_bool = 0;
			var_263_bool = 1;
			var_264_bool = 0;
			var_264_bool = 1;
			var_265_bool = 0;
			var_265_bool = 1;
			var_266_bool = 0;
			var_266_bool = 1;
			var_267_bool = 0;
			var_267_bool = 1;
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_4664(var_268_bool, var_269_object);
			if(var_268_bool != 1) {
				var_270_bool = 0; var_271_object = Obj();
				var_271_object = var_1_object;
				func_4684(var_270_bool, var_271_object);
				if(var_270_bool != 1) {
					var_267_bool = 0;
				}
			}
			if(var_267_bool != 1) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_4704(var_272_bool, var_273_object);
				if(var_272_bool != 1) {
					var_266_bool = 0;
				}
			}
			if(var_266_bool != 1) {
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_4724(var_274_bool, var_275_object);
				if(var_274_bool != 1) {
					var_265_bool = 0;
				}
			}
			if(var_265_bool != 1) {
				var_276_bool = 0; var_277_object = Obj();
				var_277_object = var_1_object;
				func_4744(var_276_bool, var_277_object);
				if(var_276_bool != 1) {
					var_264_bool = 0;
				}
			}
			if(var_264_bool != 1) {
				var_278_bool = 0; var_279_object = Obj();
				var_279_object = var_1_object;
				func_4764(var_278_bool, var_279_object);
				if(var_278_bool != 1) {
					var_263_bool = 0;
				}
			}
			if(var_263_bool != 0) {
				@@@var_0_object:AddReply((int)543324, (int)45779, (int)45780);
			}
			var_283_bool = 0;
			var_283_bool = 1;
			var_284_bool = 0;
			var_284_bool = 1;
			var_285_bool = 0;
			var_285_bool = 1;
			var_286_bool = 0;
			var_286_bool = 1;
			var_287_bool = 0;
			var_287_bool = 1;
			var_288_bool = 0; var_289_object = Obj();
			var_289_object = var_1_object;
			func_4654(var_288_bool, var_289_object);
			if(var_288_bool != 1) {
				var_290_bool = 0; var_291_object = Obj();
				var_291_object = var_1_object;
				func_4674(var_290_bool, var_291_object);
				if(var_290_bool != 1) {
					var_287_bool = 0;
				}
			}
			if(var_287_bool != 1) {
				var_292_bool = 0; var_293_object = Obj();
				var_293_object = var_1_object;
				func_4694(var_292_bool, var_293_object);
				if(var_292_bool != 1) {
					var_286_bool = 0;
				}
			}
			if(var_286_bool != 1) {
				var_294_bool = 0; var_295_object = Obj();
				var_295_object = var_1_object;
				func_4714(var_294_bool, var_295_object);
				if(var_294_bool != 1) {
					var_285_bool = 0;
				}
			}
			if(var_285_bool != 1) {
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_4734(var_296_bool, var_297_object);
				if(var_296_bool != 1) {
					var_284_bool = 0;
				}
			}
			if(var_284_bool != 1) {
				var_298_bool = 0; var_299_object = Obj();
				var_299_object = var_1_object;
				func_4754(var_298_bool, var_299_object);
				if(var_298_bool != 1) {
					var_283_bool = 0;
				}
			}
			if(var_283_bool != 0) {
				@@@var_0_object:AddReply((int)543315, (int)-1, (int)45771);
			}
			@@@var_0_object:AddReply((int)543327, (int)-1, (int)45784);
		} else {
				var_324_string = "";
				func_638(var_118_object, "Neutral");
				@@@var_0_object:SetMessage((int)537786);
				@@@var_0_object:ClearReplies();
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_4644(var_326_bool, var_327_object);
				if(var_326_bool != 0) {
					@@@var_0_object:AddReply((int)537787, (int)-1, (int)39638);
				}
				var_333_bool = 0; var_334_object = Obj();
				var_334_object = var_1_object;
				func_4644(var_333_bool, var_334_object);
				if(var_333_bool != 0) {
					@@@var_0_object:AddReply((int)537788, (int)-1, (int)39639);
				}
				var_338_bool = 0; var_339_object = Obj();
				var_339_object = var_1_object;
				func_4644(var_338_bool, var_339_object);
				if(var_338_bool != 0) {
					@@@var_0_object:AddReply((int)537789, (int)39641, (int)39640);
				}
				var_343_bool = 0; var_344_object = Obj();
				var_344_object = var_1_object;
				func_4644(var_343_bool, var_344_object);
				if(var_343_bool != 0) {
					@@@var_0_object:AddReply((int)537792, (int)39644, (int)39643);
				}
				var_348_bool = 0;
				var_348_bool = 0;
				var_349_bool = 0; var_350_object = Obj();
				var_350_object = var_1_object;
				func_4620(var_350_object);
				if(var_349_bool != 0) {
					var_355_bool = 0; var_356_object = Obj();
					var_356_object = var_1_object;
					func_4654(var_355_bool, var_356_object);
					if(var_355_bool != 0) {
						var_348_bool = 1;
					}
				}
				if(var_348_bool != 0) {
					@@@var_0_object:AddReply((int)537805, (int)39658, (int)39657);
				}
				var_360_bool = 0;
				var_360_bool = 0;
				var_361_bool = 0; var_362_object = Obj();
				var_362_object = var_1_object;
				func_4620(var_362_object);
				if(var_361_bool != 0) {
					var_363_bool = 0; var_364_object = Obj();
					var_364_object = var_1_object;
					func_4664(var_363_bool, var_364_object);
					if(var_363_bool != 0) {
						var_360_bool = 1;
					}
				}
				if(var_360_bool != 0) {
					@@@var_0_object:AddReply((int)537826, (int)39679, (int)39678);
				}
				var_368_bool = 0;
				var_368_bool = 0;
				var_369_bool = 0; var_370_object = Obj();
				var_370_object = var_1_object;
				func_4620(var_370_object);
				if(var_369_bool != 0) {
					var_371_bool = 0; var_372_object = Obj();
					var_372_object = var_1_object;
					func_4674(var_371_bool, var_372_object);
					if(var_371_bool != 0) {
						var_368_bool = 1;
					}
				}
				if(var_368_bool != 0) {
					@@@var_0_object:AddReply((int)537846, (int)39703, (int)39702);
				}
				var_376_bool = 0;
				var_376_bool = 0;
				var_377_bool = 0; var_378_object = Obj();
				var_378_object = var_1_object;
				func_4620(var_378_object);
				if(var_377_bool != 0) {
					var_379_bool = 0; var_380_object = Obj();
					var_380_object = var_1_object;
					func_4684(var_379_bool, var_380_object);
					if(var_379_bool != 0) {
						var_376_bool = 1;
					}
				}
				if(var_376_bool != 0) {
					@@@var_0_object:AddReply((int)537855, (int)39713, (int)39712);
				}
				var_384_bool = 0;
				var_384_bool = 0;
				var_385_bool = 0; var_386_object = Obj();
				var_386_object = var_1_object;
				func_4620(var_386_object);
				if(var_385_bool != 0) {
					var_387_bool = 0; var_388_object = Obj();
					var_388_object = var_1_object;
					func_4704(var_387_bool, var_388_object);
					if(var_387_bool != 0) {
						var_384_bool = 1;
					}
				}
				if(var_384_bool != 0) {
					@@@var_0_object:AddReply((int)537867, (int)39726, (int)39725);
				}
				var_392_bool = 0;
				var_392_bool = 0;
				var_393_bool = 0; var_394_object = Obj();
				var_394_object = var_1_object;
				func_4620(var_394_object);
				if(var_393_bool != 0) {
					var_395_bool = 0; var_396_object = Obj();
					var_396_object = var_1_object;
					func_4714(var_395_bool, var_396_object);
					if(var_395_bool != 0) {
						var_392_bool = 1;
					}
				}
				if(var_392_bool != 0) {
					@@@var_0_object:AddReply((int)537881, (int)39741, (int)39740);
				}
				var_400_bool = 0;
				var_400_bool = 0;
				var_401_bool = 0; var_402_object = Obj();
				var_402_object = var_1_object;
				func_4620(var_402_object);
				if(var_401_bool != 0) {
					var_403_bool = 0; var_404_object = Obj();
					var_404_object = var_1_object;
					func_4724(var_403_bool, var_404_object);
					if(var_403_bool != 0) {
						var_400_bool = 1;
					}
				}
				if(var_400_bool != 0) {
					@@@var_0_object:AddReply((int)537895, (int)39756, (int)39755);
				}
				var_408_bool = 0;
				var_408_bool = 0;
				var_409_bool = 0; var_410_object = Obj();
				var_410_object = var_1_object;
				func_4620(var_410_object);
				if(var_409_bool != 0) {
					var_411_bool = 0; var_412_object = Obj();
					var_412_object = var_1_object;
					func_4744(var_411_bool, var_412_object);
					if(var_411_bool != 0) {
						var_408_bool = 1;
					}
				}
				if(var_408_bool != 0) {
					@@@var_0_object:AddReply((int)537905, (int)39766, (int)39765);
				}
				var_416_bool = 0;
				var_416_bool = 0;
				var_417_bool = 0; var_418_object = Obj();
				var_418_object = var_1_object;
				func_4620(var_418_object);
				if(var_417_bool != 0) {
					var_419_bool = 0; var_420_object = Obj();
					var_420_object = var_1_object;
					func_4754(var_419_bool, var_420_object);
					if(var_419_bool != 0) {
						var_416_bool = 1;
					}
				}
				if(var_416_bool != 0) {
					@@@var_0_object:AddReply((int)537918, (int)39780, (int)39779);
				}
				@@@var_0_object:AddReply((int)537927, (int)-1, (int)39788);
				@@@var_0_object:AddReply((int)537928, (int)-1, (int)39789);
				goto Label_608;
		}
	}
Label_608:
	var_306_bool = 0;
	func_5561(var_306_bool);
	if(var_306_bool != 0) {

	Label_612:
		lshWaitForAnimEnd();
		var_307_string = var_3_string;
		if(var_307_string != 0) {
		} else {
			var_308_string = "";
			var_308_string = var_2_object;
			func_4456(var_308_string);
			goto Label_612;
	}
		PlayAnimation("all", "idle");

	Label_627:
		WaitForAnimEnd();
		var_321_string = var_3_string;
		if(var_321_string != 0) {
			goto Label_637;
		}
		PlayAnimation("all", "idle");
		goto Label_627;

	}
	goto Label_637;
	
Label_637:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_4684(var_230_bool, var_231_object)
{
	var_232_bool = 0; var_233_object = Obj();
	var_231_object = var_233_object;
	func_4798(var_233_object);
	if(var_232_bool != 0) {
		var_230_bool = 1;
		return 0;
	}
	var_230_bool = 0;
	return 0;
}


func_2645(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_2781(var_20_cvector, var_21_bool);
	return 0;
}


func_4694(var_172_bool, var_173_object)
{
	var_174_bool = 0; var_175_object = Obj();
	var_173_object = var_175_object;
	func_4805(var_175_object);
	if(var_174_bool != 0) {
		var_172_bool = 1;
		return 0;
	}
	var_172_bool = 0;
	return 0;
}


func_5208(var_25_bool, var_26_object, var_27_string)
{
	var_29_bool = var_27_string == "unholster";
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_5499(var_30_bool, var_31_object);
		var_30_bool = var_25_bool;
		return 0;
	EMIT "GOTO 0x1476";
	}
	var_35_bool = var_27_string == "player_shot";
	if(var_35_bool != 0) {
		var_36_bool = 0; var_37_object = Obj();
		var_26_object = var_37_object;
		func_5512(var_36_bool, var_37_object);
		var_36_bool = var_25_bool;
		return 0;
	EMIT "GOTO 0x1476";
	}
	var_52_bool = var_27_string == "battle";
	if(var_52_bool != 0) {
		var_53_bool = 0; var_54_object = Obj();
		var_26_object = var_54_object;
		func_5535(var_53_bool, var_54_object);
		var_53_bool = var_25_bool;
		return 0;
	}
	var_25_bool = 0;
	return 0;
}


func_2653(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_2788(var_25_bool, var_26_int);
	return 0;
}


func_4704(var_236_bool, var_237_object)
{
	var_238_bool = 0; var_239_object = Obj();
	var_237_object = var_239_object;
	func_4812(var_239_object);
	if(var_238_bool != 0) {
		var_236_bool = 1;
		return 0;
	}
	var_236_bool = 0;
	return 0;
}


func_4714(var_178_bool, var_179_object)
{
	var_180_bool = 0; var_181_object = Obj();
	var_179_object = var_181_object;
	func_4819(var_181_object);
	if(var_180_bool != 0) {
		var_178_bool = 1;
		return 0;
	}
	var_178_bool = 0;
	return 0;
}


func_4203(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	var_32_bool = 0; var_33_object = Obj();
	var_29_object = var_33_object;
	func_4167(var_32_bool, var_33_object);
	var_49_bool = var_32_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_29_object = var_51_object;
	func_4150(var_50_bool, var_51_object, "noaccess");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_28_bool = 1;
		return 2;
	}
	@@var_29_object:GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == (int)0;
	return 2;
}


func_2670(var_2_object, var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_22_object = var_28_object;
	func_4203(var_27_bool, var_28_object);
	var_61_bool = var_27_bool == 0; //@nz
	if(var_61_bool != 0) {
		return 4;
	}
	var_62_object = var_2_object;
	if(var_62_object != 0) {
		return 4;
	}
	IsPlayerActor(var_22_object, var_25_bool);
	var_63_bool = var_25_bool == 0; //@nz
	if(var_63_bool != 0) {
		return 4;
	}
	var_64_int = 0; var_65_object = Obj();
	var_22_object = var_65_object;
	func_5360(var_65_object);
	var_64_int = var_26_int;
	var_77_bool = var_26_int > (int)0;
	if(var_77_bool != 0) {
		var_79_bool = var_26_int > (int)1;
		if(var_79_bool != 0) {
			func_2653(var_26_int);
		}
		var_81_object = Obj();
		var_22_object = var_81_object;
		func_5369(var_81_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_4724(var_242_bool, var_243_object)
{
	var_244_bool = 0; var_245_object = Obj();
	var_243_object = var_245_object;
	func_4826(var_245_object);
	if(var_244_bool != 0) {
		var_242_bool = 1;
		return 0;
	}
	var_242_bool = 0;
	return 0;
}


func_5240(var_59_object, var_60_string)
{
	var_62_bool = var_60_string == "unholster";
	if(var_62_bool != 0) {
		var_63_object = Obj();
		var_59_object = var_63_object;
		func_5504(var_63_object);
	} else {
		var_137_bool = var_60_string == "player_shot";
		if(var_137_bool != 0) {
			var_138_object = Obj();
			var_59_object = var_138_object;
			func_5527(var_138_object);
			goto Label_5264;
		}
		var_205_bool = var_60_string == "battle";
		if(var_205_bool == 0) goto Label_5264;
		var_206_object = Obj();
		var_59_object = var_206_object;
		func_5542(var_206_object);
	}
Label_5264:
	return 0;
	
}


func_3705(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_638(var_2_object, var_132_string)
{
	var_133_bool = 0;
	func_5561(var_133_bool);
	var_134_bool = var_133_bool == 0; //@nz
	if(var_134_bool != 0) {
		return 0;
	}
	var_135_bool = var_132_string == var_2_object;
	if(var_135_bool != 0) {
		return 0;
	}
	var_136_string = ""; var_137_bool = 0;
	var_132_string = var_136_string;
	var_139_bool = var_132_string == "";
	if(var_139_bool != 0) {
		var_137_bool = 0;
	} else {
		var_137_bool = 1;
	}
	func_4472(var_136_string, var_137_bool);
	var_2_object = var_132_string;
	return 0;
	
}


func_4734(var_184_bool, var_185_object)
{
	var_186_bool = 0; var_187_object = Obj();
	var_185_object = var_187_object;
	func_4833(var_187_object);
	if(var_186_bool != 0) {
		var_184_bool = 1;
		return 0;
	}
	var_184_bool = 0;
	return 0;
}


func_4227(var_38_object)
{
	var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; var_46_bool = 0; var_47_int = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = "";
	var_53_bool = var_38_object == 0; //@ne
	if(var_53_bool != 0) {
		return 14;
	}
	IsDead(var_46_bool);
	var_54_bool = var_46_bool;
	if(var_54_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_47_int);
	var_56_bool = var_47_int < (int)0;
	if(var_56_bool != 0) {
		return 14;
	}
	@@var_38_object:GetPosition(var_48_cvector);
	GetPosition(var_49_cvector);
	GetDirection(var_50_cvector);
	var_51_cvector = var_49_cvector - var_48_cvector;
	var_57_float = GetByIndex(var_51_cvector, 0);
	var_58_float = GetByIndex(var_50_cvector, 0);
	var_59_float = var_57_float * var_58_float;
	var_60_float = GetByIndex(var_51_cvector, 2);
	var_61_float = GetByIndex(var_50_cvector, 2);
	var_62_float = var_60_float * var_61_float;
	var_63_int = var_59_float + var_62_float;
	var_65_bool = var_63_int >= (int)0;
	if(var_65_bool != 0) {
		var_52_string = "fhit";
	} else {
		var_52_string = "bhit";
	}
	var_68_int = var_52_string + "1";
	var_70_int = var_52_string + "2";
	FadeSecondaryAnimation("hit_react", var_68_int, var_70_int, (int)-10);
	return 14;
	
}


func_4744(var_248_bool, var_249_object)
{
	var_250_bool = 0; var_251_object = Obj();
	var_249_object = var_251_object;
	func_4840(var_251_object);
	if(var_250_bool != 0) {
		var_248_bool = 1;
		return 0;
	}
	var_248_bool = 0;
	return 0;
}


func_3721(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	GetDirection(var_76_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_object;
	func_4130(var_78_cvector, var_79_object);
	var_78_cvector = var_77_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_4562(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= (float)-0.3420201241970062;
	return 4;
}


func_5265(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0;
	var_26_bool = 0;
	var_26_bool = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_23_object = var_28_object;
	func_5499(var_27_bool, var_28_object);
	if(var_27_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_23_object = var_32_object;
		func_4145(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			var_26_bool = 1;
		}
	}
	if(var_26_bool != 0) {
		@@var_23_object:IsWeaponHolstered(var_25_bool);
		var_35_bool = var_25_bool == 0; //@nz
		if(var_35_bool != 0) {
			var_22_bool = 1;
			return 2;
		}
	}
	var_22_bool = 0;
	return 2;
}


func_4754(var_190_bool, var_191_object)
{
	var_192_bool = 0; var_193_object = Obj();
	var_191_object = var_193_object;
	func_4847(var_193_object);
	if(var_192_bool != 0) {
		var_190_bool = 1;
		return 0;
	}
	var_190_bool = 0;
	return 0;
}


func_2710(var_0_object, var_1_object)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_33_float, (float)0.5);
	Sleep(var_33_float);
	
Label_2718:
	var_40_bool = var_0_object == 0; //@nz
	if(var_40_bool != 0) {
		var_41_bool = var_1_object == 0; //@nz
		if(var_41_bool != 0) {

		Label_2722:
			GetPosition(var_35_cvector);
			var_42_float = 0;
			func_2769(var_42_float);
			GetRandomPFPointInCircle(var_34_cvector, var_35_cvector, var_42_float, var_36_bool);
			var_45_bool = var_36_bool;
			if(var_45_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_2722;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_2738;
	
Label_2738:
	var_46_object = Obj(); var_47_cvector = CVector(0,0,0);
	var_34_cvector = var_47_cvector;
	func_2797(var_46_object, var_47_cvector);
	var_46_object = var_37_object;
	var_50_bool = var_37_object != 0; //@nn
	if(var_50_bool != 0) {
		RotatePath(var_37_object, var_38_bool);
		var_51_bool = var_38_bool;
		if(var_51_bool != 0) {
			var_52_bool = 0;
			func_2795(var_52_bool);
			FollowPath(var_37_object, var_52_bool, var_38_bool);
			var_37_object = 0;
			var_53_bool = var_38_bool;
			if(var_53_bool != 0) {
				TaskCall(4);
				func_2967();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_37_object = 0;
	goto Label_2718;
	
}


func_4764(var_254_bool, var_255_object)
{
	var_256_bool = 0; var_257_object = Obj();
	var_255_object = var_257_object;
	func_4854(var_257_object);
	if(var_256_bool != 0) {
		var_254_bool = 1;
		return 0;
	}
	var_254_bool = 0;
	return 0;
}


func_3744(var_0_object, var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	GetPosition(var_43_cvector);
	@@@var_0_object:GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_43_cvector - var_44_cvector;
	func_4552(var_51_cvector, var_52_cvector);
	var_59_float = var_45_cvector * (float)0.75;
	var_50_cvector = var_51_cvector + var_59_float;
	func_4552(var_49_cvector, var_50_cvector);
	var_49_cvector = var_46_cvector;
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, (int)32, (float)7000.0);
	var_48_float = var_48_float - (int)100;
	var_64_bool = var_48_float < (int)0;
	if(var_64_bool != 0) {
		var_48_float = 0;
	}
	var_35_cvector = var_47_cvector * var_48_float;
	return 12;
}


func_4774(var_328_bool)
{
	var_328_bool = 0;
	return 0;
}


func_5288(var_38_object)
{
	var_39_object = Obj();
	var_38_object = var_39_object;
	func_5504(var_39_object);
	return 0;
}


func_4777(var_157_bool)
{
	var_159_int = 0;
	func_4611(var_159_int);
	var_157_bool = var_159_int == (int)1;
	return 0;
}


func_5294(var_24_object)
{
	var_25_bool = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	func_4145(var_25_bool, var_26_object);
	if(var_25_bool != 0) {
		var_29_object = Obj();
		func_4546(var_29_object);
		ReportReputationChange(var_24_object, var_29_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_4271(var_25_object, var_26_int, var_27_float)
{
	var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_int = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_int = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0);
	var_46_bool = 0;
	var_46_bool = 0;
	var_47_bool = 0;
	var_47_bool = 0;
	var_48_object = var_25_object;
	if(var_48_object != 0) {
		var_50_bool = var_26_int != (int)4;
		if(var_50_bool != 0) {
			var_47_bool = 1;
		}
	}
	if(var_47_bool != 0) {
		var_52_bool = var_26_int != (int)5;
		if(var_52_bool != 0) {
			var_46_bool = 1;
		}
	}
	if(var_46_bool != 0) {
		var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
		var_55_cvector = CVector(0,0,0); var_56_object = Obj();
		var_25_object = var_56_object;
		func_4130(var_55_cvector, var_56_object);
		var_55_cvector = var_54_cvector;
		func_4552(var_53_cvector, var_54_cvector);
		var_53_cvector = var_37_cvector;
		CreateVectorVector(var_38_object);
		var_39_int = 1;

	Label_4300:
		var_67_int = "hit" + var_39_int;
		GetGeometryLocator(var_67_int, var_40_bool, var_41_cvector, var_42_cvector);
		var_68_bool = var_40_bool == 0; //@nz
		if(var_68_bool != 0) {
		} else {
			var_116_int = var_42_cvector | var_37_cvector;
			var_118_bool = var_116_int >= (float)0.7071067690849304;
			if(var_118_bool != 0) {
				@@var_38_object:add(var_41_cvector);
			}
			var_39_int = var_39_int + (int)1;
			goto Label_4300;
		}
		@@var_38_object:size(var_43_int);
		var_69_int = var_43_int;
		if(var_69_int != 0) {
			irand(var_44_int, var_43_int);
			@@var_38_object:get(var_45_cvector, var_44_int);
			var_70_object = Obj(); var_71_int = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
			var_25_object = var_70_object;
			var_26_int = var_71_int;
			var_27_float = var_72_float;
			var_45_cvector = var_73_cvector;
			var_74_cvector = -var_37_cvector;
			func_4339(var_72_float, var_73_cvector, var_74_cvector);
			return 18;
		}
		var_38_object = 0;
	}
	var_115_object = Obj();
	var_25_object = var_115_object;
	func_4227(var_115_object);
	return 18;
	
}


func_4784(var_226_bool)
{
	var_228_int = 0;
	func_4611(var_228_int);
	var_226_bool = var_228_int == (int)2;
	return 0;
}


func_3252()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_4791(var_168_bool)
{
	var_170_int = 0;
	func_4611(var_170_int);
	var_168_bool = var_170_int == (int)3;
	return 0;
}


func_5307(var_22_bool, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj();
	var_27_bool = var_23_string == "heal";
	if(var_27_bool != 0) {
		FindActor(var_25_object, "player");
		var_29_bool = 0; var_30_object = Obj();
		var_25_object = var_30_object;
		func_5548(var_30_object);
		var_29_bool = var_22_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_22_bool = 0;
	return 2;
}


func_4798(var_232_bool)
{
	var_234_int = 0;
	func_4611(var_234_int);
	var_232_bool = var_234_int == (int)4;
	return 0;
}


func_3774(var_0_object, var_1_object, var_2_object, var_40_object)
{
	var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_float = 0;
	var_0_object = var_40_object;
	var_54_cvector = CVector(0,0,0); var_55_float = 0;
	func_3744(var_53_float, var_54_cvector, (float)1.7453293800354004);
	var_54_cvector = var_49_cvector;
	var_50_float = var_49_cvector | var_49_cvector;
	var_85_bool = var_50_float < (float)2500.0;
	if(var_85_bool != 0) {
		var_86_cvector = CVector(0,0,0); var_87_float = 0;
		func_3744(var_53_float, var_86_cvector, (float)2.6179938316345215);
		var_86_cvector = var_49_cvector;
		var_50_float = var_49_cvector | var_49_cvector;
		var_89_bool = var_50_float < (float)2500.0;
		if(var_89_bool != 0) {
			var_91_float = sqrt(var_50_float);
			var_92_int = "Can't retreat, distance: " + var_91_float;
			Trace(var_92_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_94_float = GetByIndex(var_49_cvector, 0);
	var_95_float = GetByIndex(var_49_cvector, 2);
	Rotate(var_94_float, var_95_float);
	var_96_cvector = CVector(0,0,0);
	func_4125(var_96_cvector);
	var_1_object = var_96_cvector + var_49_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_3816:
	MovePoint(var_1_object, (int)1, var_51_bool);
	var_102_bool = var_51_bool;
	if(var_102_bool != 0) {
		var_103_bool = var_0_object == 0; //@ne
		if(var_103_bool != 0) {
			goto Label_3846;
		EMIT "GOTO 0xf04";

		Label_3846:
			return 10;
		}
		var_104_cvector = CVector(0,0,0); var_105_float = 0;
		func_3744(var_53_float, var_104_cvector, (float)2.6179938316345215);
		var_104_cvector = var_52_cvector;
		var_53_float = var_52_cvector | var_52_cvector;
		var_107_bool = var_53_float >= (float)2500.0;
		if(var_107_bool != 0) {
			var_108_cvector = CVector(0,0,0);
			func_4125(var_108_cvector);
			var_1_object = var_108_cvector + var_52_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_3846;
		}
	}
	var_111_bool = var_2_object == 0; //@nz
	if(var_111_bool == 1) goto Label_3816;
	
}


func_4805(var_174_bool)
{
	var_176_int = 0;
	func_4611(var_176_int);
	var_174_bool = var_176_int == (int)5;
	return 0;
}


func_5323(var_33_string)
{
	var_34_object = Obj(); var_35_object = Obj();
	var_37_bool = var_33_string == "heal";
	if(var_37_bool != 0) {
		FindActor(var_35_object, "player");
		var_35_object = Obj();
		func_5551();
		var_35_object = 0;
	}
	return 2;
}


func_4812(var_238_bool)
{
	var_240_int = 0;
	func_4611(var_240_int);
	var_238_bool = var_240_int == (int)6;
	return 0;
}


func_2769(var_42_float)
{
	var_43_float = 0; var_44_float = 0;
	GetCameraFarDistance(var_44_float);
	var_44_float = var_42_float;
	return 2;
}


func_4819(var_180_bool)
{
	var_182_int = 0;
	func_4611(var_182_int);
	var_180_bool = var_182_int == (int)7;
	return 0;
}


func_5336(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = "";
	var_80_int = var_77_int;
	if(var_80_int != 0) {
		"idle" = "idle" + var_77_int;
	}
	var_79_string = var_76_string;
	return 2;
}


func_4826(var_244_bool)
{
	var_246_int = 0;
	func_4611(var_246_int);
	var_244_bool = var_246_int == (int)8;
	return 0;
}


func_2781(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_5343(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	var_73_int = 0;
	
Label_5345:
	var_76_string = ""; var_77_int = 0;
	var_73_int = var_77_int;
	func_5336(var_76_string, var_77_int);
	HasAnimation(var_74_bool, "all", var_76_string);
	var_81_bool = var_74_bool == 0; //@nz
	if(var_81_bool != 0) {
	} else {
		var_73_int = var_73_int + (int)1;
		goto Label_5345;
	}
	var_73_int = var_70_int;
	return 4;
	
}


func_4833(var_186_bool)
{
	var_188_int = 0;
	func_4611(var_188_int);
	var_186_bool = var_188_int == (int)9;
	return 0;
}


func_2788(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_2278(var_23_object)
{
	EventDisable(0);
	var_24_object = Obj();
	var_23_object = var_24_object;
	func_2311(var_24_object);
	var_104_object = Obj();
	var_23_object = var_104_object;
	func_5602(var_104_object);
	EventEnable(0);
	
Label_2289:
	Hold();
	goto Label_2289;
}
EMIT "Return(); Pop(0)";


func_4840(var_250_bool)
{
	var_252_int = 0;
	func_4611(var_252_int);
	var_250_bool = var_252_int == (int)10;
	return 0;
}


func_2795(var_52_bool)
{
	var_52_bool = 0;
	return 0;
}


func_2797(var_46_object, var_47_cvector)
{
	var_48_object = Obj(); var_49_object = Obj();
	FindShiftedPathTo(var_49_object, var_47_cvector);
	var_49_object = var_46_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4847(var_192_bool)
{
	var_194_int = 0;
	func_4611(var_194_int);
	var_192_bool = var_194_int == (int)11;
	return 0;
}


func_5360(var_64_int)
{
	var_66_bool = 0;
	func_5587(var_66_bool);
	if(var_66_bool != 0) {
		var_64_int = 2;
	} else {
		var_64_int = 0;
	}
	return 0;
	
}


func_4339(var_27_object, var_30_cvector, var_31_cvector)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj();
	GetScene(var_34_object);
	AddActorByType(var_35_object, "scripted", var_34_object, var_30_cvector, var_31_cvector, "blood_dir.xml");
	var_38_object = Obj();
	var_27_object = var_38_object;
	func_4227(var_38_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4854(var_256_bool)
{
	var_258_int = 0;
	func_4611(var_258_int);
	var_256_bool = var_258_int == (int)12;
	return 0;
}


func_5369(var_81_object)
{
	var_82_object = Obj();
	var_81_object = var_82_object;
	TaskCall(5);
	func_3053(var_83_object, var_82_object);
	TaskReturn();
	return 0;
}


func_4861(var_108_int)
{
	var_109_int = 0; var_110_int = 0;
	GetVariable("branch", var_110_int);
	var_113_bool = var_110_int == (int)0;
	if(var_113_bool != 0) {
		var_108_int = 1;
		return 2;
	EMIT "GOTO 0x130c";
	}
	var_115_bool = var_110_int == (int)1;
	if(var_115_bool != 0) {
		var_108_int = 2;
		return 2;
	}
	var_108_int = 3;
	return 2;
}


func_3328(var_76_object)
{
	Face(var_76_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_86_object = Obj();
	var_76_object = var_86_object;
	func_3393(var_78_cvector, var_79_bool, var_76_object, var_86_object);
	return 0;
}


func_5377(var_33_int, var_34_object)
{
	var_35_bool = 0; var_36_object = Obj();
	var_34_object = var_36_object;
	func_4203(var_35_bool, var_36_object);
	if(var_35_bool != 0) {
		var_33_int = 2;
	} else {
		var_33_int = 0;
	}
	return 0;
	
}


func_4353(var_97_object)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	@@var_97_object:GetPosition(var_101_cvector);
	GetPosition(var_102_cvector);
	var_103_cvector = var_101_cvector - var_102_cvector;
	var_104_float = GetByIndex(var_103_cvector, 0);
	var_105_float = GetByIndex(var_103_cvector, 2);
	RotateAsync(var_104_float, var_105_float);
	return 6;
}


func_2311(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0);
	var_45_bool = var_24_object == 0; //@ne
	if(var_45_bool != 0) {
		var_46_string = "";
		func_2402("fdie");
	} else {
		@@var_24_object:GetPosition(var_35_cvector);
		GetPosition(var_36_cvector);
		GetDirection(var_37_cvector);
		var_38_cvector = var_36_cvector - var_35_cvector;
		var_78_float = GetByIndex(var_38_cvector, 0);
		var_79_float = GetByIndex(var_37_cvector, 0);
		var_80_float = var_78_float * var_79_float;
		var_81_float = GetByIndex(var_38_cvector, 2);
		var_82_float = GetByIndex(var_37_cvector, 2);
		var_83_float = var_81_float * var_82_float;
		var_84_int = var_80_float + var_83_float;
		var_86_bool = var_84_int >= (int)0;
		if(var_86_bool != 0) {
			var_39_string = "fdie";
		} else {
				var_39_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_24_object = var_40_object;
		var_89_bool = IsFuncExist(var_24_object, "GetScriptProperty", (int)2);
		if(var_89_bool != 0) {
			@@var_24_object:HasScriptProperty(var_41_bool, "Owner");
			var_91_bool = var_41_bool;
			if(var_91_bool != 0) {
				@@var_24_object:GetScriptProperty(var_40_object, "Owner");
				var_93_bool = var_40_object == 0; //@ne
				if(var_93_bool != 0) {
					var_24_object = var_40_object;
				}
			}
		}
		var_96_bool = IsFuncExist(var_40_object, "@GetEyesHeight", (int)1);
		if(var_96_bool != 0) {
			@@var_40_object:GetEyesHeight(var_43_float);
			var_44_cvector = CVector(0.0, 0.0, 0.0);
			var_97_float = GetByIndex(var_44_cvector, 1);
			var_43_float = var_97_float;
			SetByIndex(var_44_cvector, 1) = var_97_float;
			LookAsync(var_24_object, "head", var_44_cvector);
			var_42_bool = 1;
		} else {
			var_42_bool = 0;

		}
		var_99_string = "";
		var_39_string = var_99_string;
		func_4505(var_99_string);
		PlayAnimation("all", var_39_string);
		WaitForAnimEnd();
		var_101_bool = var_42_bool;
		if(var_101_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_39_string);
		RemoveEnvelope();
		var_40_object = 0;
	}
	return 20;
	
}


func_5387(var_75_object)
{
	var_76_object = Obj();
	var_75_object = var_76_object;
	TaskCall(6);
	func_3328(var_76_object);
	TaskReturn();
	return 0;
}


func_4364(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_4878(var_228_int)
{
	var_229_int = 0; var_230_int = 0;
	GetVariable("branch", var_230_int);
	var_230_int = var_228_int;
	return 2;
}


func_4369(var_56_bool, var_57_object, var_58_float)
{
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_bool = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0;
	@@var_57_object:GetPosition(var_69_cvector);
	@@var_57_object:GetEyesHeight(var_68_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	var_77_float = var_77_float + var_68_float;
	SetByIndex(var_69_cvector, 1) = var_77_float;
	GetPosition(var_70_cvector);
	GetEyesHeight(var_68_float);
	var_78_float = GetByIndex(var_70_cvector, 1);
	var_78_float = var_78_float + var_68_float;
	SetByIndex(var_70_cvector, 1) = var_78_float;
	var_71_cvector = var_69_cvector - var_70_cvector;
	var_79_float = GetByIndex(var_71_cvector, 1);
	SetByIndex(var_71_cvector, 1) = (float)0;
	var_80_int = var_71_cvector | var_71_cvector;
	var_81_float = sqrt(var_80_int);
	var_71_cvector = var_71_cvector / var_81_float;
	var_72_cvector = -var_71_cvector;
	var_82_float = var_71_cvector * var_58_float;
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	var_84_cvector = var_72_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4552(var_83_cvector, var_84_cvector);
	var_92_float = var_83_cvector * (int)25;
	var_93_int = var_82_float + var_92_float;
	var_73_cvector = var_93_int - CVector(0.0, 10.0, 0.0);
	var_74_cvector = var_70_cvector + var_73_cvector;
	IsOverrideActive(var_75_bool);
	var_95_bool = var_75_bool;
	if(var_95_bool != 0) {
		var_56_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_74_cvector, var_72_cvector, (bool)1);
	var_97_float = GetByIndex(var_73_cvector, 0);
	var_98_float = GetByIndex(var_73_cvector, 2);
	Rotate(var_97_float, var_98_float);
	var_99_bool = 0;
	func_5561(var_99_bool);
	if(var_99_bool != 0) {
	} else {
		HasAnimationTrack(var_76_bool, "head");
		var_101_bool = var_76_bool;
		if(var_101_bool == 0) goto Label_4432;
		LookAsyncCamera("head");
	}
Label_4432:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_56_bool = 1;
	return 18;
	
}


func_5395(var_73_int, var_74_object)
{
	var_76_bool = 0; var_77_object = Obj();
	var_74_object = var_77_object;
	func_4203(var_76_bool, var_77_object);
	if(var_76_bool != 0) {
		var_73_int = 2;
	} else {
		var_73_int = 0;
	}
	return 0;
	
}


func_4884(var_67_float)
{
	var_68_object = Obj(); var_69_float = 0; var_70_object = Obj(); var_71_float = 0;
	FindActor(var_70_object, "player");
	var_73_bool = var_70_object == 0; //@nz
	if(var_73_bool != 0) {
		var_67_float = 0;
		return 4;
	}
	@@var_70_object:GetProperty("reputation", var_71_float);
	var_71_float = var_67_float;
	return 4;
}
EMIT "Stack[-2] = 0";


func_5405(var_110_object)
{
	var_111_object = Obj();
	var_110_object = var_111_object;
	TaskCall(7);
	func_3580(var_112_object, var_113_cvector, var_114_bool, var_111_object);
	TaskReturn();
	return 0;
}


func_4898(var_38_object)
{
	var_39_int = 0;
	func_4878(var_39_int);
	var_44_bool = var_39_int == (int)1;
	if(var_44_bool != 0) {
		WorkWithCorpse(var_38_object);
	} else {
		Barter(var_38_object);
	}
	return 0;
	
}


func_3363(var_0_object, var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	GetPosition(var_43_cvector);
	@@@var_0_object:GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_43_cvector - var_44_cvector;
	func_4552(var_51_cvector, var_52_cvector);
	var_59_float = var_45_cvector * (float)0.75;
	var_50_cvector = var_51_cvector + var_59_float;
	func_4552(var_49_cvector, var_50_cvector);
	var_49_cvector = var_46_cvector;
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, (int)32, (float)7000.0);
	var_48_float = var_48_float - (int)100;
	var_64_bool = var_48_float < (int)0;
	if(var_64_bool != 0) {
		var_48_float = 0;
	}
	var_35_cvector = var_47_cvector * var_48_float;
	return 12;
}


func_5413(var_30_bool, var_31_object, var_32_object, var_33_float)
{
	var_34_string = ""; var_35_bool = 0; var_36_string = ""; var_37_bool = 0;
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_32_object = var_39_object;
	func_4150(var_38_bool, var_39_object, "class");
	var_47_bool = var_38_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_30_bool = 0;
		return 4;
	}
	@@var_32_object:GetProperty("class", var_36_string);
	var_50_bool = var_36_string == "rat";
	if(var_50_bool != 0) {
		var_30_bool = 0;
		return 4;
	EMIT "GOTO 0x1543";
	}
	var_52_bool = var_36_string == "rat_big";
	if(var_52_bool != 0) {
		var_30_bool = 0;
		return 4;
	EMIT "GOTO 0x1543";
	}
	var_54_bool = var_36_string == "dog";
	if(var_54_bool != 0) {
		var_30_bool = 0;
		return 4;
	}
	CanSee(var_37_bool, var_31_object);
	var_55_bool = 0;
	var_55_bool = 1;
	var_56_bool = var_37_bool;
	if(var_56_bool != 1) {
		var_57_float = 0; var_58_object = Obj();
		var_31_object = var_58_object;
		func_4137(var_57_float, var_58_object);
		var_65_float = var_33_float * var_33_float;
		var_66_bool = var_57_float <= var_65_float;
		if(var_66_bool != 1) {
			var_55_bool = 0;
		}
	}
	if(var_55_bool != 0) {
		var_30_bool = 1;
		return 4;
	}
	CanSee(var_37_bool, var_32_object);
	var_67_bool = 0;
	var_67_bool = 1;
	var_68_bool = var_37_bool;
	if(var_68_bool != 1) {
		var_69_float = 0; var_70_object = Obj();
		var_32_object = var_70_object;
		func_4137(var_69_float, var_70_object);
		var_71_float = var_33_float * var_33_float;
		var_72_bool = var_69_float <= var_71_float;
		if(var_72_bool != 1) {
			var_67_bool = 0;
		}
	}
	if(var_67_bool != 0) {
		var_30_bool = 1;
		return 4;
	}
	var_30_bool = 0;
	return 4;
}


func_4911(var_120_int, var_121_int)
{
	var_131_int = 0; var_132_bool = 0; var_133_int = 0; var_134_bool = 0;
	var_135_bool = var_120_int > var_121_int;
	if(var_135_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_133_int = 0;
	var_137_bool = var_120_int != var_121_int;
	if(var_137_bool != 0) {
		var_138_int = var_121_int - var_120_int;
		irand(var_133_int, var_138_int);
	} else {
		var_147_bool = var_120_int == (int)0;
		if(var_147_bool == 0) goto Label_4929;
		return 4;
	}
Label_4929:
	var_133_int = var_133_int + var_120_int;
	var_140_bool = var_133_int == (int)0;
	if(var_140_bool != 0) {
		return 4;
	}
	var_141_int = 0; var_142_string = "";
	func_5158(var_141_int, "Money");
	AddItem(var_134_bool, var_141_int, (int)0, var_133_int);
	return 4;
	
}


func_3899(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3393(var_0_object, var_1_object, var_2_object, var_86_object)
{
	var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_float = 0;
	var_0_object = var_86_object;
	var_97_cvector = CVector(0,0,0); var_98_float = 0;
	func_3363(var_96_float, var_97_cvector, (float)1.7453293800354004);
	var_97_cvector = var_92_cvector;
	var_93_float = var_92_cvector | var_92_cvector;
	var_128_bool = var_93_float < (float)2500.0;
	if(var_128_bool != 0) {
		var_129_cvector = CVector(0,0,0); var_130_float = 0;
		func_3363(var_96_float, var_129_cvector, (float)2.6179938316345215);
		var_129_cvector = var_92_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		var_132_bool = var_93_float < (float)2500.0;
		if(var_132_bool != 0) {
			var_134_float = sqrt(var_93_float);
			var_135_int = "Can't retreat, distance: " + var_134_float;
			Trace(var_135_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_137_float = GetByIndex(var_92_cvector, 0);
	var_138_float = GetByIndex(var_92_cvector, 2);
	Rotate(var_137_float, var_138_float);
	var_139_cvector = CVector(0,0,0);
	func_4125(var_139_cvector);
	var_1_object = var_139_cvector + var_92_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_3435:
	MovePoint(var_1_object, (int)1, var_94_bool);
	var_145_bool = var_94_bool;
	if(var_145_bool != 0) {
		var_146_bool = var_0_object == 0; //@ne
		if(var_146_bool != 0) {
			goto Label_3465;
		EMIT "GOTO 0xd87";

		Label_3465:
			return 10;
		}
		var_147_cvector = CVector(0,0,0); var_148_float = 0;
		func_3363(var_96_float, var_147_cvector, (float)2.6179938316345215);
		var_147_cvector = var_95_cvector;
		var_96_float = var_95_cvector | var_95_cvector;
		var_150_bool = var_96_float >= (float)2500.0;
		if(var_150_bool != 0) {
			var_151_cvector = CVector(0,0,0);
			func_4125(var_151_cvector);
			var_1_object = var_151_cvector + var_95_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_3465;
		}
	}
	var_154_bool = var_2_object == 0; //@nz
	if(var_154_bool == 1) goto Label_3435;
	
}


func_3915(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	GetDirection(var_76_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_object;
	func_4130(var_78_cvector, var_79_object);
	var_78_cvector = var_77_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_4562(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= (float)-0.3420201241970062;
	return 4;
}


func_4942(var_234_string)
{
	var_235_object = Obj(); var_236_int = 0; var_237_bool = 0; var_238_object = Obj(); var_239_int = 0; var_240_bool = 0;
	CreateInvItem(var_238_object);
	@@var_238_object:SetItemName(var_234_string);
	@@var_238_object:SetProperty("Organ", (int)1);
	@@var_238_object:GetItemID(var_239_int);
	AddItem(var_240_bool, var_238_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_4438()
{
	var_432_bool = 0; var_433_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_435_bool = 0;
	func_5561(var_435_bool);
	if(var_435_bool != 0) {
	} else {
		HasAnimationTrack(var_433_bool, "head");
		var_437_bool = var_433_bool;
		if(var_437_bool == 0) goto Label_4455;
		UnlookAsync("head");
	}
Label_4455:
	return 2;
	
}


func_4959()
{
	var_228_int = 0;
	func_4878(var_228_int);
	var_233_bool = var_228_int != (int)1;
	if(var_233_bool != 0) {
		return 0;
	}
	var_234_string = "";
	func_4942("liver");
	var_245_string = "";
	func_4942("kidney");
	var_246_string = "";
	func_4942("heart");
	var_247_string = "";
	func_4942("blood");
	return 0;
}


func_2402(var_46_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_47_string = "";
	var_46_string = var_47_string;
	func_4505(var_47_string);
	PlayAnimation("all", var_46_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_46_string);
	RemoveEnvelope();
	return 0;
}


func_3938(var_0_object, var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	GetPosition(var_43_cvector);
	@@@var_0_object:GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_43_cvector - var_44_cvector;
	func_4552(var_51_cvector, var_52_cvector);
	var_59_float = var_45_cvector * (float)0.75;
	var_50_cvector = var_51_cvector + var_59_float;
	func_4552(var_49_cvector, var_50_cvector);
	var_49_cvector = var_46_cvector;
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, (int)32, (float)7000.0);
	var_48_float = var_48_float - (int)100;
	var_64_bool = var_48_float < (int)0;
	if(var_64_bool != 0) {
		var_48_float = 0;
	}
	var_35_cvector = var_47_cvector * var_48_float;
	return 12;
}


func_5479(var_24_int)
{
	var_24_int = 0;
	return 0;
}


func_4456(var_308_string)
{
	var_309_bool = 0; var_310_float = 0; var_311_float = 0; var_312_bool = 0; var_313_float = 0; var_314_float = 0;
	lshHasAnimation(var_312_bool, var_308_string);
	var_315_bool = var_312_bool;
	if(var_315_bool != 0) {
		lshGetAnimTimes(var_308_string, var_313_float, var_314_float);
		lshPlayAnimation(var_313_float, var_314_float, (bool)0);
	} else {
		var_318_int = "Can't find lsh animation : " + var_308_string;
		Trace(var_318_int);
	}
	return 6;
	
}


func_5482()
{
	return 0;
}


func_5484(var_208_int)
{
	var_208_int = 0;
	return 0;
}


func_5487()
{
	return 0;
}


func_5489(var_24_int)
{
	var_24_int = 2;
	return 0;
}


func_5492(var_32_object)
{
	var_33_object = Obj();
	var_32_object = var_33_object;
	func_5567(var_33_object);
	return 0;
}


func_4983(var_114_bool)
{
	var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_bool = 0;
	var_119_bool = var_114_bool;
	if(var_119_bool != 0) {
		var_120_int = 0; var_121_int = 0;
		var_123_int = 0;
		func_4611(var_123_int);
		var_130_float = var_123_int * (int)100;
		var_121_int = (int)100 + var_130_float;
		func_4911((int)0, var_121_int);
		irand(var_117_int, (int)8);
		var_150_bool = var_117_int == (int)0;
		if(var_150_bool != 0) {
			var_151_int = 0; var_152_string = "";
			func_5158(var_151_int, "lemon");
			AddItem(var_118_bool, var_151_int, (int)0, (int)1);
		} else {
			var_156_bool = var_117_int == (int)1;
			if(var_156_bool != 0) {
				var_157_int = 0; var_158_string = "";
				func_5158(var_157_int, "rusk");
				AddItem(var_118_bool, var_157_int, (int)0, (int)1);
				goto Label_5071;
			}
			var_162_bool = var_117_int == (int)2;
			if(var_162_bool != 0) {
				var_163_int = 0; var_164_string = "";
				func_5158(var_163_int, "hook");
				AddItem(var_118_bool, var_163_int, (int)0, (int)1);
				goto Label_5071;
			}
			var_168_bool = var_117_int == (int)4;
			if(var_168_bool != 0) {
				var_169_int = 0; var_170_string = "";
				func_5158(var_169_int, "syringe");
				AddItem(var_118_bool, var_169_int, (int)0, (int)1);
				goto Label_5071;
			}
			var_174_bool = var_117_int == (int)5;
			if(var_174_bool != 0) {
				var_175_int = 0; var_176_string = "";
				func_5158(var_175_int, "watch");
				AddItem(var_118_bool, var_175_int, (int)0, (int)1);
				goto Label_5071;
			}
			var_180_bool = var_117_int == (int)6;
			if(var_180_bool == 0) goto Label_5071;
			var_181_int = 0; var_182_string = "";
			func_5158(var_181_int, "razor");
			AddItem(var_118_bool, var_181_int, (int)0, (int)1);
	}
		var_185_int = 0; var_186_int = 0;
		var_188_int = 0;
		func_4611(var_188_int);
		var_190_float = var_188_int * (int)50;
		var_186_int = (int)50 + var_190_float;
		func_4911((int)0, var_186_int);
		irand(var_117_int, (int)7);
		var_193_bool = var_117_int == (int)0;
		if(var_193_bool != 0) {
			var_194_int = 0; var_195_string = "";
			func_5158(var_194_int, "beads");
			AddItem(var_118_bool, var_194_int, (int)0, (int)1);
			goto Label_5157;
		}
		var_199_bool = var_117_int == (int)1;
		if(var_199_bool != 0) {
			var_200_int = 0; var_201_string = "";
			func_5158(var_200_int, "bracelet");
			AddItem(var_118_bool, var_200_int, (int)0, (int)1);
			goto Label_5157;
		}
		var_205_bool = var_117_int == (int)2;
		if(var_205_bool != 0) {
			var_206_int = 0; var_207_string = "";
			func_5158(var_206_int, "ear_ring");
			AddItem(var_118_bool, var_206_int, (int)0, (int)1);
			goto Label_5157;
		}
		var_211_bool = var_117_int == (int)3;
		if(var_211_bool != 0) {
			var_212_int = 0; var_213_string = "";
			func_5158(var_212_int, "gold_ring");
			AddItem(var_118_bool, var_212_int, (int)0, (int)1);
			goto Label_5157;
		}
		var_217_bool = var_117_int == (int)4;
		if(var_217_bool != 0) {
			var_218_int = 0; var_219_string = "";
			func_5158(var_218_int, "silver_ring");
			AddItem(var_118_bool, var_218_int, (int)0, (int)1);
			goto Label_5157;
		}
		var_223_bool = var_117_int == (int)5;
		if(var_223_bool == 0) goto Label_5157;
		var_224_int = 0; var_225_string = "";
		func_5158(var_224_int, "flower");
		AddItem(var_118_bool, var_224_int, (int)0, (int)1);
	}
Label_5071:
	goto Label_5157;
	
Label_5157:
	return 4;
	
}


func_4472(var_136_string, var_137_bool)
{
	var_140_bool = 0; var_141_float = 0; var_142_float = 0; var_143_bool = 0; var_144_float = 0; var_145_float = 0;
	lshHasAnimation(var_143_bool, var_136_string);
	var_146_bool = var_143_bool;
	if(var_146_bool != 0) {
		lshGetAnimTimes(var_136_string, var_144_float, var_145_float);
		lshPlayAnimation(var_144_float, var_145_float, var_137_bool);
	} else {
		var_148_int = "Can't find lsh animation : " + var_136_string;
		Trace(var_148_int);
	}
	return 6;
	
}


func_5498()
{
	return 0;
}


func_5499(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0;
	CanSee(var_30_bool, var_28_object);
	var_30_bool = var_27_bool;
	return 2;
}


func_5504(var_39_object)
{
	var_40_object = Obj();
	var_39_object = var_40_object;
	TaskCall(8);
	func_3774(var_41_object, var_42_cvector, var_43_bool, var_40_object);
	TaskReturn();
	return 0;
}


func_3968(var_0_object, var_1_object, var_2_object, var_139_object)
{
	var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_bool = 0; var_146_cvector = CVector(0,0,0); var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_bool = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0;
	var_0_object = var_139_object;
	var_153_cvector = CVector(0,0,0); var_154_float = 0;
	func_3938(var_152_float, var_153_cvector, (float)1.7453293800354004);
	var_153_cvector = var_148_cvector;
	var_149_float = var_148_cvector | var_148_cvector;
	var_179_bool = var_149_float < (float)2500.0;
	if(var_179_bool != 0) {
		var_180_cvector = CVector(0,0,0); var_181_float = 0;
		func_3938(var_152_float, var_180_cvector, (float)2.6179938316345215);
		var_180_cvector = var_148_cvector;
		var_149_float = var_148_cvector | var_148_cvector;
		var_183_bool = var_149_float < (float)2500.0;
		if(var_183_bool != 0) {
			var_185_float = sqrt(var_149_float);
			var_186_int = "Can't retreat, distance: " + var_185_float;
			Trace(var_186_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_188_float = GetByIndex(var_148_cvector, 0);
	var_189_float = GetByIndex(var_148_cvector, 2);
	Rotate(var_188_float, var_189_float);
	var_190_cvector = CVector(0,0,0);
	func_4125(var_190_cvector);
	var_1_object = var_190_cvector + var_148_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_4010:
	MovePoint(var_1_object, (int)1, var_150_bool);
	var_194_bool = var_150_bool;
	if(var_194_bool != 0) {
		var_195_bool = var_0_object == 0; //@ne
		if(var_195_bool != 0) {
			goto Label_4040;
		EMIT "GOTO 0xfc6";

		Label_4040:
			return 10;
		}
		var_196_cvector = CVector(0,0,0); var_197_float = 0;
		func_3938(var_152_float, var_196_cvector, (float)2.6179938316345215);
		var_196_cvector = var_151_cvector;
		var_152_float = var_151_cvector | var_151_cvector;
		var_199_bool = var_152_float >= (float)2500.0;
		if(var_199_bool != 0) {
			var_200_cvector = CVector(0,0,0);
			func_4125(var_200_cvector);
			var_1_object = var_200_cvector + var_151_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_4040;
		}
	}
	var_203_bool = var_2_object == 0; //@nz
	if(var_203_bool == 1) goto Label_4010;
	
}


func_4487(var_90_object)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0);
	@@var_90_object:GetEyesHeight(var_93_float);
	var_94_cvector = CVector(0.0, 0.0, 0.0);
	var_95_float = GetByIndex(var_94_cvector, 1);
	var_93_float = var_95_float;
	SetByIndex(var_94_cvector, 1) = var_95_float;
	LookAsync(var_90_object, "head", var_94_cvector);
	return 4;
}


func_5512(var_36_bool, var_37_object)
{
	var_38_bool = 0; var_39_bool = 0;
	CanSee(var_39_bool, var_37_object);
	var_36_bool = 1;
	var_40_bool = var_39_bool;
	if(var_40_bool != 1) {
		var_41_float = 0; var_42_object = Obj();
		var_37_object = var_42_object;
		func_4137(var_41_float, var_42_object);
		var_50_bool = var_41_float <= (int)4000000;
		if(var_50_bool != 1) {
			var_36_bool = 0;
		}
	}
	return 2;
}


func_2449()
{
	var_23_bool = 0;
	func_4364(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		func_5498();
	}
	return 0;
}


func_4498()
{
	var_24_bool = 0;
	func_5561(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2967()
{
	var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_bool = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_bool = 0;
	WaitForAnimEnd();
	var_68_bool = 0;
	func_4364(var_68_bool);
	var_69_bool = var_68_bool == 0; //@nz
	if(var_69_bool != 0) {
		return 14;
	}
	func_5343((int)0);
	var_70_int = var_61_int;
	var_62_int = 0;
	
Label_2981:
	var_83_bool = 0;
	var_83_bool = 0;
	var_85_bool = var_62_int < (int)5;
	if(var_85_bool != 0) {
		var_86_bool = 0;
		func_4364(var_86_bool);
		if(var_86_bool != 0) {
			var_83_bool = 1;
		}
	}
	if(var_83_bool != 0) {
		irand(var_63_int, (int)3);
		var_89_bool = var_63_int == (int)0;
		if(var_89_bool != 0) {
			var_90_int = var_61_int;
			if(var_90_int == 0) goto Label_3014;
			irand(var_64_int, var_61_int);
			var_92_string = ""; var_93_int = 0;
			var_64_int = var_93_int;
			func_5336(var_92_string, var_93_int);
			PlayAnimation("all", var_92_string);
			WaitForAnimEnd(var_65_bool);
			var_94_bool = var_65_bool == 0; //@nz
			if(var_94_bool != 0) {
			} else {
		} else {
				var_99_bool = var_63_int == (int)1;
				if(var_99_bool != 0) {
					rand(var_66_float, (int)4);
					var_102_int = var_66_float + (int)1;
					Sleep(var_102_int, var_67_bool);
					var_103_bool = var_67_bool == 0; //@nz
					if(var_103_bool != 0) {
						goto Label_3043;
					}
					goto Label_3032;
				}
				var_104_int = var_62_int;
				if(var_104_int == 0) goto Label_3032;
				goto Label_3043;
		}
		Label_3032:
			var_95_bool = 0;
			func_3046(var_95_bool);
			var_96_bool = var_95_bool == 0; //@nz
			if(var_96_bool != 0) {
				goto Label_3043;
			}
			ResetAAS();
			var_62_int = var_62_int + (int)1;
			goto Label_2981;

		}
	}
Label_3043:
	ResetAAS();
	return 14;
	
}


func_5527(var_138_object)
{
	var_139_object = Obj();
	var_138_object = var_139_object;
	TaskCall(9);
	func_3968(var_140_object, var_141_cvector, var_142_bool, var_139_object);
	TaskReturn();
	return 0;
}


func_4505(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	IsExisting3DSound(var_56_bool, var_47_string);
	var_64_bool = var_56_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_57_int = 0;

	Label_4511:
		var_66_int = var_57_int + (int)1;
		var_67_int = var_47_string + var_66_int;
		IsExisting3DSound(var_58_bool, var_67_int);
		var_68_bool = var_58_bool == 0; //@nz
		if(var_68_bool != 0) {
		} else {
			var_57_int = var_57_int + (int)1;
			goto Label_4511;
		}
		var_69_bool = var_57_int == 0; //@nz
		if(var_69_bool != 0) {
			return 16;
		}
		irand(var_59_int, var_57_int);
		var_71_int = var_59_int + (int)1;
		var_47_string = var_47_string + var_71_int;
	}
	Is3DSoundLoaded(var_60_bool, var_47_string);
	var_72_bool = var_60_bool;
	if(var_72_bool != 0) {
		GetEyesHeight(var_61_float);
		GetDirection(var_62_cvector);
		var_63_cvector = var_62_cvector * (int)50;
		var_74_float = GetByIndex(var_63_cvector, 1);
		var_74_float = var_74_float + var_61_float;
		SetByIndex(var_63_cvector, 1) = var_74_float;
		PlayGlobalSound(var_47_string, var_63_cvector);
	}
	return 16;
	
}


func_5535(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj();
	var_54_object = var_56_object;
	func_5512(var_55_bool, var_56_object);
	var_55_bool = var_53_bool;
	return 0;
}


func_5542(var_206_object)
{
	var_207_object = Obj();
	var_206_object = var_207_object;
	func_5527(var_207_object);
	return 0;
}


func_5548(var_29_bool)
{
	var_29_bool = 0;
	return 0;
}


func_5551()
{
	return 0;
}


func_5553(var_105_int)
{
	var_105_int = 515596;
	return 0;
}


func_5555(var_104_int)
{
	var_104_int = 514839;
	return 0;
}


func_5557(var_106_string)
{
	var_106_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_5559(var_107_string)
{
	var_107_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_5561(var_99_bool)
{
	var_99_bool = 0;
	return 0;
}


func_5563()
{
	var_22_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_3518(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_5567(var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	var_36_bool = GlobalVars[0];
	if(var_36_bool != 0) {
		IsOverrideActive(var_35_bool);
		var_37_bool = var_35_bool == 0; //@nz
		if(var_37_bool != 0) {
			var_38_object = Obj();
			var_33_object = var_38_object;
			func_4898(var_38_object);
		}
		return 2;
	EMIT "GOTO 0x15d2";
	}
	var_45_int = 0; var_46_object = Obj();
	var_33_object = var_46_object;
	TaskCall(0);
	func_0(var_47_object, var_45_int, var_46_object);
	TaskReturn();
	return 2;
}


func_4546(var_109_object)
{
	var_110_object = Obj(); var_111_object = Obj();
	self(var_111_object);
	var_111_object = var_109_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4552(var_53_cvector, var_54_cvector)
{
	var_61_float = 0; var_62_float = 0;
	var_63_int = var_54_cvector | var_54_cvector;
	var_62_float = sqrt(var_63_int);
	var_64_float = 9.999999974752427e-07;
	var_65_bool = var_62_float < var_64_float;
	if(var_65_bool != 0) {
		var_53_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_53_cvector = var_54_cvector / var_62_float;
	return 2;
}


func_3534(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	GetDirection(var_76_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_object;
	func_4130(var_78_cvector, var_79_object);
	var_78_cvector = var_77_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_4562(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= (float)-0.3420201241970062;
	return 4;
}


func_4562(var_84_float, var_85_cvector, var_86_cvector)
{
	var_87_int = var_85_cvector | var_86_cvector;
	var_88_int = var_85_cvector | var_85_cvector;
	var_89_int = var_86_cvector | var_86_cvector;
	var_90_float = var_88_int * var_89_int;
	var_91_float = sqrt(var_90_float);
	var_84_float = var_87_int / var_91_float;
	return 0;
}


func_5587(var_66_bool)
{
	var_67_float = 0;
	func_4884(var_67_float);
	var_66_bool = var_67_float > (float)0.20000000298023224;
	return 0;
}


func_5593(var_26_bool, var_27_object, var_28_object)
{
	var_30_bool = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_float = 0;
	var_27_object = var_31_object;
	var_28_object = var_32_object;
	func_5413(var_30_bool, var_31_object, var_32_object, (float)700.0);
	var_30_bool = var_26_bool;
	return 0;
}


func_4570(var_74_float, var_75_cvector, var_76_cvector)
{
	var_77_float = GetByIndex(var_75_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = var_77_float * var_78_float;
	var_80_float = GetByIndex(var_75_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = var_80_float * var_81_float;
	var_74_float = var_79_float + var_82_float;
	return 0;
}


func_3550(var_0_object, var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	GetPosition(var_43_cvector);
	@@@var_0_object:GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_43_cvector - var_44_cvector;
	func_4552(var_51_cvector, var_52_cvector);
	var_59_float = var_45_cvector * (float)0.75;
	var_50_cvector = var_51_cvector + var_59_float;
	func_4552(var_49_cvector, var_50_cvector);
	var_49_cvector = var_46_cvector;
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, (int)32, (float)7000.0);
	var_48_float = var_48_float - (int)100;
	var_64_bool = var_48_float < (int)0;
	if(var_64_bool != 0) {
		var_48_float = 0;
	}
	var_35_cvector = var_47_cvector * var_48_float;
	return 12;
}


func_5602(var_104_object)
{
	var_105_bool = 0; var_106_object = Obj();
	var_104_object = var_106_object;
	func_4145(var_105_bool, var_106_object);
	if(var_105_bool != 0) {
		var_109_object = Obj();
		func_4546(var_109_object);
		ReportReputationChange(var_104_object, var_109_object, (float)-0.07000000029802322, (bool)1);
		var_114_bool = 0;
		func_4983((bool)0);
	}
	func_4959();
	var_248_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_4579(var_83_float, var_84_cvector)
{
	var_85_float = GetByIndex(var_84_cvector, 0);
	var_86_float = GetByIndex(var_84_cvector, 0);
	var_87_float = var_85_float * var_86_float;
	var_88_float = GetByIndex(var_84_cvector, 2);
	var_89_float = GetByIndex(var_84_cvector, 2);
	var_90_float = var_88_float * var_89_float;
	var_91_int = var_87_float + var_90_float;
	var_83_float = sqrt(var_91_int);
	return 0;
}


func_3046(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_3048()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4589(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_72_cvector = var_75_cvector;
	var_73_cvector = var_76_cvector;
	func_4570(var_74_float, var_75_cvector, var_76_cvector);
	var_83_float = 0; var_84_cvector = CVector(0,0,0);
	var_72_cvector = var_84_cvector;
	func_4579(var_83_float, var_84_cvector);
	var_92_float = 0; var_93_cvector = CVector(0,0,0);
	var_73_cvector = var_93_cvector;
	func_4579(var_92_float, var_93_cvector);
	var_94_float = var_83_float * var_92_float;
	var_71_float = var_74_float / var_94_float;
	return 0;
}


func_3053(var_0_object, var_82_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0;
	var_0_object = var_82_object;
	func_3104(var_89_bool);
	GetDirection(var_87_cvector);
	var_97_cvector = CVector(0,0,0); var_98_object = Obj();
	var_98_object = var_0_object;
	func_4130(var_97_cvector, var_98_object);
	var_97_cvector = var_88_cvector;
	var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0);
	var_87_cvector = var_104_cvector;
	var_88_cvector = var_105_cvector;
	func_4589(var_103_float, var_104_cvector, var_105_cvector);
	var_128_bool = var_103_float < (int)0;
	if(var_128_bool != 0) {
		var_129_object = Obj();
		var_129_object = var_0_object;
		func_4353(var_129_object);
		var_89_bool = 1;
	} else {
		Sleep((float)1.5, var_89_bool);
	}
	var_138_bool = var_89_bool;
	if(var_138_bool != 0) {
		var_139_object = Obj();
		var_139_object = var_0_object;
		func_4353(var_139_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_3580(var_0_object, var_1_object, var_2_object, var_111_object)
{
	var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_float = 0; var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_float = 0;
	var_0_object = var_111_object;
	var_125_cvector = CVector(0,0,0); var_126_float = 0;
	func_3550(var_124_float, var_125_cvector, (float)1.7453293800354004);
	var_125_cvector = var_120_cvector;
	var_121_float = var_120_cvector | var_120_cvector;
	var_156_bool = var_121_float < (float)2500.0;
	if(var_156_bool != 0) {
		var_157_cvector = CVector(0,0,0); var_158_float = 0;
		func_3550(var_124_float, var_157_cvector, (float)2.6179938316345215);
		var_157_cvector = var_120_cvector;
		var_121_float = var_120_cvector | var_120_cvector;
		var_160_bool = var_121_float < (float)2500.0;
		if(var_160_bool != 0) {
			var_162_float = sqrt(var_121_float);
			var_163_int = "Can't retreat, distance: " + var_162_float;
			Trace(var_163_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_165_float = GetByIndex(var_120_cvector, 0);
	var_166_float = GetByIndex(var_120_cvector, 2);
	Rotate(var_165_float, var_166_float);
	var_167_cvector = CVector(0,0,0);
	func_4125(var_167_cvector);
	var_1_object = var_167_cvector + var_120_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_3622:
	MovePoint(var_1_object, (int)1, var_122_bool);
	var_173_bool = var_122_bool;
	if(var_173_bool != 0) {
		var_174_bool = var_0_object == 0; //@ne
		if(var_174_bool != 0) {
			goto Label_3652;
		EMIT "GOTO 0xe42";

		Label_3652:
			return 10;
		}
		var_175_cvector = CVector(0,0,0); var_176_float = 0;
		func_3550(var_124_float, var_175_cvector, (float)2.6179938316345215);
		var_175_cvector = var_123_cvector;
		var_124_float = var_123_cvector | var_123_cvector;
		var_178_bool = var_124_float >= (float)2500.0;
		if(var_178_bool != 0) {
			var_179_cvector = CVector(0,0,0);
			func_4125(var_179_cvector);
			var_1_object = var_179_cvector + var_123_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_3652;
		}
	}
	var_182_bool = var_2_object == 0; //@nz
	if(var_182_bool == 1) goto Label_3622;
	
}


func_4093(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_4606(var_126_int, var_127_string)
{
	var_128_int = 0; var_129_int = 0;
	GetVariable(var_127_string, var_129_int);
	var_129_int = var_126_int;
	return 2;
}


