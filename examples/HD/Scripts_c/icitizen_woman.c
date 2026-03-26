// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,irand/2,ResetAAS/0,Sleep/1,KillTimer/1,IsPlayerActor/2,SetTimer/2,Sleep/2,StopGroup0/0,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectVector/1,GetVariable/2,GetGameTime/1,HasInvItemProperty/3,GetInvItemProperty/3,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,CanSee/2,CreateIntVector/1,ChooseItem/4,HasAnimation/3,SetProperty/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |A:SetReturnValue|W:branch|A:GetItemID|W:Price|W:BarterPrice|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:SetProperty|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:Received steal|A:GetSubContainerCount|A:GetItemCount|A:GetItem|W:HasDurability|W:durability|W:repair.xml|W:money|A:SetItem|W:Category|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:ToDie
// @GLOBALS: 0:bool:
// @RUN_OP: 0x715
// @RUN_TASK: 3
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x29f vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0x688 vars=object
// @EVENT_6: op=0x696 vars=
// @EVENT_22: op=0x70f vars=object,int,float,float
// @EVENT_16: op=0x711 vars=object,string
// @EVENT_41: op=0x713 vars=object
// @TASK_3: vars=bool,bool params=0
// @EVENT_0: op=0x740 vars=object
// @EVENT_17: op=0x754 vars=object
// @EVENT_30: op=0x76c vars=object,object,bool
// @EVENT_40: op=0x788 vars=object
// @EVENT_42: op=0x79c vars=object,string
// @EVENT_26: op=0x7c1 vars=string
// @EVENT_1: op=0x7cf vars=object
// @EVENT_3: op=0x7e5 vars=object
// @EVENT_7: op=0x7ee vars=int
// @EVENT_6: op=0x7fa vars=
// @EVENT_41: op=0x80e vars=object
// @TASK_4: vars=object params=1
// @EVENT_0: op=0x870 vars=object
// @EVENT_17: op=0x884 vars=object
// @EVENT_30: op=0x89c vars=object,object,bool
// @EVENT_40: op=0x8b8 vars=object
// @EVENT_42: op=0x8cc vars=object,string
// @EVENT_26: op=0x8f1 vars=string
// @EVENT_41: op=0x90a vars=object
// @EVENT_7: op=0x913 vars=int
// @EVENT_6: op=0x936 vars=
// @EVENT_1: op=0x93d vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_6: op=0x967 vars=
// @EVENT_7: op=0x9d5 vars=int
// @EVENT_41: op=0xa10 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_7: op=0xa90 vars=int
// @EVENT_41: op=0xacb vars=object
// @TASK_7: vars=object,cvector,bool params=1
// @EVENT_6: op=0xae4 vars=
// @EVENT_7: op=0xb52 vars=int
// @EVENT_41: op=0xb8d vars=object
// @TASK_8: vars=object,cvector,bool params=1
// @EVENT_6: op=0xba6 vars=
// @EVENT_7: op=0xc14 vars=int
// @EVENT_41: op=0xc4f vars=object
// @STANDALONE_EVENT_16: op=0x10dc vars=object,string
// @STANDALONE_EVENT_41: op=0x10e9 vars=object
// @STANDALONE_EVENT_22: op=0x10ef vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x10f7 vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x289,0x29f,0x679,0x696,0x6f5,0x70f,0x711,0x713,0x7c1,0x7cf,0x7e5,0x7ee,0x7fa,0x80e,0x8f1,0x90a,0x936,0x93d,0x94b,0x967,0xa10,0xacb,0xae4,0xb8d,0xba6,0xc4f,0xe23,0xe2b,0xe34,0xe3e,0xe65,0xe6a,0xe76,0xe82,0xe8e,0xe98,0xea2,0xeac,0xeb6,0xec0,0xeca,0xed4,0xede,0xee8,0xef2,0xefc,0xf06,0xf10,0xf17,0xf1e,0xf25,0xf2c,0xf33,0xf3a,0xf41,0xf48,0xf4f,0xf56,0xf5d,0xf64,0xfcb,0x10d4,0x10e9,0x10ef,0x10f7,0x1101,0x1121,0x1151,0x1157,0x1181,0x118a,0x1192,0x119c,0x11a4,0x11ae,0x11f8,0x11fb,0x1212,0x1218,0x121b,0x1222,0x1239,0x1241,0x1248,0x124e,0x1251,0x12f6,0x1350,0x1360

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	if((int)1 != 0) {
		func_3549();
		var_25_bool = var_21_bool == (int)45638;
		if(var_25_bool != 0) {
			var_26_object = Obj(); var_27_object = Obj();
			var_26_object = var_1_object;
			var_27_object = var_0_object;
			func_3685(var_27_object);
		}
		var_30_bool = var_21_bool == (int)45639;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_3685(var_32_object);
		}
		var_34_bool = var_21_bool == (int)45643;
		if(var_34_bool != 0) {
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_3685(var_36_object);
		}
		var_38_bool = var_21_bool == (int)45664;
		if(var_38_bool != 0) {
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_3685(var_40_object);
		}
		var_42_bool = var_21_bool == (int)40043;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_3685(var_44_object);
		}
		var_46_bool = var_20_cvector == (int)45636;
		if(var_46_bool != 0) {
			var_47_bool = 0; var_48_object = Obj();
			var_48_object = var_1_object;
			func_3714(var_48_object);
			if(var_47_bool != 0) {
				var_55_string = "";
				func_649(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543180);
				@@@var_0_object:ClearReplies();
				var_73_bool = 0;
				var_73_bool = 1;
				var_74_bool = 0;
				var_74_bool = 1;
				var_75_bool = 0;
				var_75_bool = 1;
				var_76_bool = 0; var_77_object = Obj();
				var_77_object = var_1_object;
				func_3726(var_76_bool, var_77_object);
				if(var_76_bool != 1) {
					var_87_bool = 0; var_88_object = Obj();
					var_88_object = var_1_object;
					func_3746(var_87_bool, var_88_object);
					if(var_87_bool != 1) {
						var_75_bool = 0;
					}
				}
				if(var_75_bool != 1) {
					var_93_bool = 0; var_94_object = Obj();
					var_94_object = var_1_object;
					func_3756(var_93_bool, var_94_object);
					if(var_93_bool != 1) {
						var_74_bool = 0;
					}
				}
				if(var_74_bool != 1) {
					var_99_bool = 0; var_100_object = Obj();
					var_100_object = var_1_object;
					func_3766(var_99_bool, var_100_object);
					if(var_99_bool != 1) {
						var_73_bool = 0;
					}
				}
				if(var_73_bool != 0) {
					@@@var_0_object:AddReply((int)543189, (int)45648, (int)45645);
				}
				var_108_bool = 0;
				var_108_bool = 1;
				var_109_bool = 0;
				var_109_bool = 1;
				var_110_bool = 0;
				var_110_bool = 1;
				var_111_bool = 0; var_112_object = Obj();
				var_112_object = var_1_object;
				func_3736(var_111_bool, var_112_object);
				if(var_111_bool != 1) {
					var_117_bool = 0; var_118_object = Obj();
					var_118_object = var_1_object;
					func_3776(var_117_bool, var_118_object);
					if(var_117_bool != 1) {
						var_110_bool = 0;
					}
				}
				if(var_110_bool != 1) {
					var_123_bool = 0; var_124_object = Obj();
					var_124_object = var_1_object;
					func_3806(var_123_bool, var_124_object);
					if(var_123_bool != 1) {
						var_109_bool = 0;
					}
				}
				if(var_109_bool != 1) {
					var_129_bool = 0; var_130_object = Obj();
					var_130_object = var_1_object;
					func_3816(var_129_bool, var_130_object);
					if(var_129_bool != 1) {
						var_108_bool = 0;
					}
				}
				if(var_108_bool != 0) {
					@@@var_0_object:AddReply((int)543190, (int)45655, (int)45646);
				}
				var_138_bool = 0;
				var_138_bool = 1;
				var_139_bool = 0;
				var_139_bool = 1;
				var_140_bool = 0; var_141_object = Obj();
				var_141_object = var_1_object;
				func_3786(var_140_bool, var_141_object);
				if(var_140_bool != 1) {
					var_146_bool = 0; var_147_object = Obj();
					var_147_object = var_1_object;
					func_3796(var_146_bool, var_147_object);
					if(var_146_bool != 1) {
						var_139_bool = 0;
					}
				}
				if(var_139_bool != 1) {
					var_152_bool = 0; var_153_object = Obj();
					var_153_object = var_1_object;
					func_3746(var_152_bool, var_153_object);
					if(var_152_bool != 1) {
						var_138_bool = 0;
					}
				}
				if(var_138_bool != 0) {
					@@@var_0_object:AddReply((int)543191, (int)45656, (int)45647);
				}
				var_157_bool = 0;
				var_157_bool = 1;
				var_158_bool = 0;
				var_158_bool = 1;
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_3726(var_159_bool, var_160_object);
				if(var_159_bool != 1) {
					var_161_bool = 0; var_162_object = Obj();
					var_162_object = var_1_object;
					func_3736(var_161_bool, var_162_object);
					if(var_161_bool != 1) {
						var_158_bool = 0;
					}
				}
				if(var_158_bool != 1) {
					var_163_bool = 0; var_164_object = Obj();
					var_164_object = var_1_object;
					func_3746(var_163_bool, var_164_object);
					if(var_163_bool != 1) {
						var_157_bool = 0;
					}
				}
				if(var_157_bool != 0) {
					@@@var_0_object:AddReply((int)543182, (int)-1, (int)45638);
				}
				var_168_bool = 0;
				var_168_bool = 1;
				var_169_bool = 0;
				var_169_bool = 1;
				var_170_bool = 0;
				var_170_bool = 1;
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_3726(var_171_bool, var_172_object);
				if(var_171_bool != 1) {
					var_173_bool = 0; var_174_object = Obj();
					var_174_object = var_1_object;
					func_3736(var_173_bool, var_174_object);
					if(var_173_bool != 1) {
						var_170_bool = 0;
					}
				}
				if(var_170_bool != 1) {
					var_175_bool = 0; var_176_object = Obj();
					var_176_object = var_1_object;
					func_3746(var_175_bool, var_176_object);
					if(var_175_bool != 1) {
						var_169_bool = 0;
					}
				}
				if(var_169_bool != 1) {
					var_177_bool = 0; var_178_object = Obj();
					var_178_object = var_1_object;
					func_3756(var_177_bool, var_178_object);
					if(var_177_bool != 1) {
						var_168_bool = 0;
					}
				}
				if(var_168_bool != 0) {
					@@@var_0_object:AddReply((int)543183, (int)-1, (int)45639);
				}
				var_182_bool = 0;
				var_182_bool = 1;
				var_183_bool = 0;
				var_183_bool = 1;
				var_184_bool = 0;
				var_184_bool = 1;
				var_185_bool = 0;
				var_185_bool = 1;
				var_186_bool = 0; var_187_object = Obj();
				var_187_object = var_1_object;
				func_3756(var_186_bool, var_187_object);
				if(var_186_bool != 1) {
					var_188_bool = 0; var_189_object = Obj();
					var_189_object = var_1_object;
					func_3766(var_188_bool, var_189_object);
					if(var_188_bool != 1) {
						var_185_bool = 0;
					}
				}
				if(var_185_bool != 1) {
					var_190_bool = 0; var_191_object = Obj();
					var_191_object = var_1_object;
					func_3776(var_190_bool, var_191_object);
					if(var_190_bool != 1) {
						var_184_bool = 0;
					}
				}
				if(var_184_bool != 1) {
					var_192_bool = 0; var_193_object = Obj();
					var_193_object = var_1_object;
					func_3786(var_192_bool, var_193_object);
					if(var_192_bool != 1) {
						var_183_bool = 0;
					}
				}
				if(var_183_bool != 1) {
					var_194_bool = 0; var_195_object = Obj();
					var_195_object = var_1_object;
					func_3796(var_194_bool, var_195_object);
					if(var_194_bool != 1) {
						var_182_bool = 0;
					}
				}
				if(var_182_bool != 0) {
					@@@var_0_object:AddReply((int)543187, (int)-1, (int)45643);
				}
				var_199_bool = 0;
				var_199_bool = 1;
				var_200_bool = 0;
				var_200_bool = 1;
				var_201_bool = 0;
				var_201_bool = 1;
				var_202_bool = 0; var_203_object = Obj();
				var_203_object = var_1_object;
				func_3806(var_202_bool, var_203_object);
				if(var_202_bool != 1) {
					var_204_bool = 0; var_205_object = Obj();
					var_205_object = var_1_object;
					func_3816(var_204_bool, var_205_object);
					if(var_204_bool != 1) {
						var_201_bool = 0;
					}
				}
				if(var_201_bool != 1) {
					var_206_bool = 0; var_207_object = Obj();
					var_207_object = var_1_object;
					func_3826(var_206_bool, var_207_object);
					if(var_206_bool != 1) {
						var_200_bool = 0;
					}
				}
				if(var_200_bool != 1) {
					var_212_bool = 0; var_213_object = Obj();
					var_213_object = var_1_object;
					func_3836(var_212_bool, var_213_object);
					if(var_212_bool != 1) {
						var_199_bool = 0;
					}
				}
				if(var_199_bool != 0) {
					@@@var_0_object:AddReply((int)543208, (int)-1, (int)45664);
				}
				var_221_bool = 0;
				var_221_bool = 1;
				var_222_bool = 0;
				var_222_bool = 1;
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_object;
				func_3726(var_223_bool, var_224_object);
				if(var_223_bool != 1) {
					var_225_bool = 0; var_226_object = Obj();
					var_226_object = var_1_object;
					func_3736(var_225_bool, var_226_object);
					if(var_225_bool != 1) {
						var_222_bool = 0;
					}
				}
				if(var_222_bool != 1) {
					var_227_bool = 0; var_228_object = Obj();
					var_228_object = var_1_object;
					func_3746(var_227_bool, var_228_object);
					if(var_227_bool != 1) {
						var_221_bool = 0;
					}
				}
				if(var_221_bool != 0) {
					@@@var_0_object:AddReply((int)543181, (int)-1, (int)45637);
				}
				var_232_bool = 0;
				var_232_bool = 1;
				var_233_bool = 0;
				var_233_bool = 1;
				var_234_bool = 0; var_235_object = Obj();
				var_235_object = var_1_object;
				func_3756(var_234_bool, var_235_object);
				if(var_234_bool != 1) {
					var_236_bool = 0; var_237_object = Obj();
					var_237_object = var_1_object;
					func_3766(var_236_bool, var_237_object);
					if(var_236_bool != 1) {
						var_233_bool = 0;
					}
				}
				if(var_233_bool != 1) {
					var_238_bool = 0; var_239_object = Obj();
					var_239_object = var_1_object;
					func_3776(var_238_bool, var_239_object);
					if(var_238_bool != 1) {
						var_232_bool = 0;
					}
				}
				if(var_232_bool != 0) {
					@@@var_0_object:AddReply((int)543184, (int)-1, (int)45640);
				}
				var_243_bool = 0;
				var_243_bool = 1;
				var_244_bool = 0;
				var_244_bool = 1;
				var_245_bool = 0;
				var_245_bool = 1;
				var_246_bool = 0; var_247_object = Obj();
				var_247_object = var_1_object;
				func_3746(var_246_bool, var_247_object);
				if(var_246_bool != 1) {
					var_248_bool = 0; var_249_object = Obj();
					var_249_object = var_1_object;
					func_3776(var_248_bool, var_249_object);
					if(var_248_bool != 1) {
						var_245_bool = 0;
					}
				}
				if(var_245_bool != 1) {
					var_250_bool = 0; var_251_object = Obj();
					var_251_object = var_1_object;
					func_3786(var_250_bool, var_251_object);
					if(var_250_bool != 1) {
						var_244_bool = 0;
					}
				}
				if(var_244_bool != 1) {
					var_252_bool = 0; var_253_object = Obj();
					var_253_object = var_1_object;
					func_3796(var_252_bool, var_253_object);
					if(var_252_bool != 1) {
						var_243_bool = 0;
					}
				}
				if(var_243_bool != 0) {
					@@@var_0_object:AddReply((int)543185, (int)-1, (int)45641);
				}
				var_257_bool = 0;
				var_257_bool = 1;
				var_258_bool = 0;
				var_258_bool = 1;
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_3806(var_259_bool, var_260_object);
				if(var_259_bool != 1) {
					var_261_bool = 0; var_262_object = Obj();
					var_262_object = var_1_object;
					func_3816(var_261_bool, var_262_object);
					if(var_261_bool != 1) {
						var_258_bool = 0;
					}
				}
				if(var_258_bool != 1) {
					var_263_bool = 0; var_264_object = Obj();
					var_264_object = var_1_object;
					func_3826(var_263_bool, var_264_object);
					if(var_263_bool != 1) {
						var_257_bool = 0;
					}
				}
				if(var_257_bool != 0) {
					@@@var_0_object:AddReply((int)543186, (int)-1, (int)45642);
				}
				var_268_bool = 0;
				var_268_bool = 1;
				var_269_bool = 0;
				var_269_bool = 1;
				var_270_bool = 0;
				var_270_bool = 1;
				var_271_bool = 0;
				var_271_bool = 1;
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_3776(var_272_bool, var_273_object);
				if(var_272_bool != 1) {
					var_274_bool = 0; var_275_object = Obj();
					var_275_object = var_1_object;
					func_3796(var_274_bool, var_275_object);
					if(var_274_bool != 1) {
						var_271_bool = 0;
					}
				}
				if(var_271_bool != 1) {
					var_276_bool = 0; var_277_object = Obj();
					var_277_object = var_1_object;
					func_3806(var_276_bool, var_277_object);
					if(var_276_bool != 1) {
						var_270_bool = 0;
					}
				}
				if(var_270_bool != 1) {
					var_278_bool = 0; var_279_object = Obj();
					var_279_object = var_1_object;
					func_3836(var_278_bool, var_279_object);
					if(var_278_bool != 1) {
						var_269_bool = 0;
					}
				}
				if(var_269_bool != 1) {
					var_280_bool = 0; var_281_object = Obj();
					var_281_object = var_1_object;
					func_3816(var_280_bool, var_281_object);
					if(var_280_bool != 1) {
						var_268_bool = 0;
					}
				}
				if(var_268_bool != 0) {
					@@@var_0_object:AddReply((int)543188, (int)-1, (int)45644);
				}
				return 0;
			}
			var_285_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538168, (int)-1, (int)40043);
			var_290_bool = 0;
			var_290_bool = 0;
			var_291_bool = 0; var_292_object = Obj();
			var_292_object = var_1_object;
			func_3726(var_291_bool, var_292_object);
			if(var_291_bool != 0) {
				var_293_bool = 0; var_294_object = Obj();
				var_294_object = var_1_object;
				func_3690(var_294_object);
				if(var_293_bool != 0) {
					var_290_bool = 1;
				}
			}
			if(var_290_bool != 0) {
				@@@var_0_object:AddReply((int)538169, (int)40045, (int)40044);
			}
			var_302_bool = 0;
			var_302_bool = 0;
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_3726(var_304_bool, var_305_object);
			if(var_304_bool != 0) {
				var_306_bool = 0; var_307_object = Obj();
				var_307_object = var_1_object;
				func_3846(var_306_bool, var_307_object);
				if(var_306_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				var_317_bool = 0; var_318_object = Obj();
				var_318_object = var_1_object;
				func_3690(var_318_object);
				if(var_317_bool != 0) {
					var_302_bool = 1;
				}
			}
			if(var_302_bool != 0) {
				@@@var_0_object:AddReply((int)538179, (int)40055, (int)40054);
			}
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_3736(var_323_bool, var_324_object);
			if(var_323_bool != 0) {
				var_325_bool = 0; var_326_object = Obj();
				var_326_object = var_1_object;
				func_3690(var_326_object);
				if(var_325_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				@@@var_0_object:AddReply((int)538190, (int)40067, (int)40066);
			}
			var_330_bool = 0;
			var_330_bool = 1;
			var_331_bool = 0; var_332_object = Obj();
			var_332_object = var_1_object;
			func_3690(var_332_object);
			if(var_331_bool != 1) {
				var_333_bool = 0; var_334_object = Obj();
				var_334_object = var_1_object;
				func_3702(var_334_object);
				if(var_333_bool != 1) {
					var_330_bool = 0;
				}
			}
			if(var_330_bool != 0) {
				@@@var_0_object:AddReply((int)538204, (int)-1, (int)40081);
			}
			@@@var_0_object:AddReply((int)538205, (int)-1, (int)40082);
			return 0;
		}
		var_346_bool = var_20_cvector == (int)40067;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538192, (int)40069, (int)40068);
			@@@var_0_object:AddReply((int)538203, (int)40069, (int)40079);
			return 0;
		}
		var_356_bool = var_20_cvector == (int)40069;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538193);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538194, (int)40071, (int)40070);
			@@@var_0_object:AddReply((int)538202, (int)-1, (int)40078);
			return 0;
		}
		var_366_bool = var_20_cvector == (int)40071;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538195);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538196, (int)40073, (int)40072);
			@@@var_0_object:AddReply((int)538201, (int)-1, (int)40077);
			return 0;
		}
		var_376_bool = var_20_cvector == (int)40073;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538198, (int)-1, (int)40074);
			@@@var_0_object:AddReply((int)538199, (int)-1, (int)40075);
			@@@var_0_object:AddReply((int)538200, (int)-1, (int)40076);
			return 0;
		}
		var_389_bool = var_20_cvector == (int)40055;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538181, (int)40057, (int)40056);
			@@@var_0_object:AddReply((int)538188, (int)40057, (int)40063);
			@@@var_0_object:AddReply((int)538189, (int)-1, (int)40065);
			return 0;
		}
		var_402_bool = var_20_cvector == (int)40057;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538183, (int)40059, (int)40058);
			@@@var_0_object:AddReply((int)538187, (int)-1, (int)40062);
			return 0;
		}
		var_412_bool = var_20_cvector == (int)40059;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538185, (int)-1, (int)40060);
			@@@var_0_object:AddReply((int)538186, (int)-1, (int)40061);
			return 0;
		}
		var_422_bool = var_20_cvector == (int)40045;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538171, (int)40047, (int)40046);
			@@@var_0_object:AddReply((int)538175, (int)40051, (int)40050);
			@@@var_0_object:AddReply((int)538178, (int)-1, (int)40053);
			return 0;
		}
		var_435_bool = var_20_cvector == (int)40051;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538177, (int)-1, (int)40052);
			return 0;
		}
		var_442_bool = var_20_cvector == (int)40047;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538173, (int)-1, (int)40048);
			@@@var_0_object:AddReply((int)538174, (int)-1, (int)40049);
			return 0;
		}
		var_452_bool = var_20_cvector == (int)45656;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543205, (int)-1, (int)45661);
			@@@var_0_object:AddReply((int)543206, (int)-1, (int)45662);
			@@@var_0_object:AddReply((int)543207, (int)-1, (int)45663);
			return 0;
		}
		var_465_bool = var_20_cvector == (int)45655;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_649(var_21_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543201, (int)-1, (int)45657);
			@@@var_0_object:AddReply((int)543202, (int)-1, (int)45658);
			var_474_bool = 0; var_475_object = Obj();
			var_475_object = var_1_object;
			func_3736(var_474_bool, var_475_object);
			if(var_474_bool != 0) {
				@@@var_0_object:AddReply((int)543203, (int)-1, (int)45659);
			}
			var_479_bool = 0; var_480_object = Obj();
			var_480_object = var_1_object;
			func_3776(var_479_bool, var_480_object);
			if(var_479_bool != 0) {
				@@@var_0_object:AddReply((int)543204, (int)-1, (int)45660);
			}
			return 0;
		}
		var_485_bool = var_20_cvector == (int)45648;
		if(var_485_bool != 0) {
			var_486_bool = 0; var_487_object = Obj();
			var_487_object = var_1_object;
			func_3726(var_486_bool, var_487_object);
			if(var_486_bool != 0) {
				var_488_string = "";
				func_649(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543192);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)543193, (int)-1, (int)45649);
				@@@var_0_object:AddReply((int)543194, (int)-1, (int)45650);
				@@@var_0_object:AddReply((int)543195, (int)-1, (int)45651);
				return 0;
			}
			var_499_bool = 0;
			var_499_bool = 1;
			var_500_bool = 0;
			var_500_bool = 1;
			var_501_bool = 0; var_502_object = Obj();
			var_502_object = var_1_object;
			func_3746(var_501_bool, var_502_object);
			if(var_501_bool != 1) {
				var_503_bool = 0; var_504_object = Obj();
				var_504_object = var_1_object;
				func_3756(var_503_bool, var_504_object);
				if(var_503_bool != 1) {
					var_500_bool = 0;
				}
			}
			if(var_500_bool != 1) {
				var_505_bool = 0; var_506_object = Obj();
				var_506_object = var_1_object;
				func_3766(var_505_bool, var_506_object);
				if(var_505_bool != 1) {
					var_499_bool = 0;
				}
			}
			if(var_499_bool != 0) {
				var_507_string = "";
				func_649(var_21_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543196);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)543197, (int)-1, (int)45653);
				@@@var_0_object:AddReply((int)543198, (int)-1, (int)45654);
				return 0;
			}
		}
		var_3_string = true;
		var_515_bool = 0;
		func_4884(var_515_bool);
		if(var_515_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2a0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_int = 0; var_24_object = Obj();
	var_20_bool = var_24_object;
	func_4600(var_24_object);
	var_23_int = var_22_int;
	var_26_bool = var_22_int > (int)0;
	if(var_26_bool != 0) {
		var_27_object = Obj();
		var_20_bool = var_27_object;
		func_4603(var_27_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_4609();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_int = 0; var_24_object = Obj();
	var_20_bool = var_24_object;
	func_4600(var_24_object);
	var_23_int = var_22_int;
	var_26_bool = var_22_int > (int)0;
	if(var_26_bool != 0) {
		var_28_bool = var_22_int > (int)1;
		if(var_28_bool != 0) {
			func_2049(var_22_int);
		}
		var_31_object = Obj();
		var_20_bool = var_31_object;
		func_4603(var_31_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_object = Obj();
	var_20_bool = var_23_object;
	func_4439(var_23_object);
	var_32_int = 0; var_33_object = Obj();
	var_20_bool = var_33_object;
	func_4498(var_32_int, var_33_object);
	var_32_int = var_22_int;
	var_69_bool = var_22_int > (int)0;
	if(var_69_bool != 0) {
		var_71_bool = var_22_int > (int)1;
		if(var_71_bool != 0) {
			func_2049(var_22_int);
		}
		var_74_object = Obj();
		var_20_bool = var_74_object;
		func_4508(var_74_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_bool = 0;
	var_20_object = var_26_object;
	var_21_cvector = var_27_object;
	var_22_bool = var_28_bool;
	func_4944(var_26_object, var_27_object, var_28_bool);
	if(var_25_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_20_object = var_75_object;
		var_22_bool = var_76_bool;
		func_4516(var_75_object, var_76_bool);
		var_74_int = var_24_int;
		var_106_bool = var_24_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_24_int > (int)1;
			if(var_108_bool != 0) {
				func_2049(var_24_int);
			}
			var_111_object = Obj();
			var_20_object = var_111_object;
			func_4526(var_111_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_int = 0; var_24_object = Obj();
	var_20_bool = var_24_object;
	func_4610(var_23_int, var_24_object);
	var_23_int = var_22_int;
	var_66_bool = var_22_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_22_int > (int)1;
		if(var_68_bool != 0) {
			func_2049(var_22_int);
		}
		var_71_object = Obj();
		var_20_bool = var_71_object;
		func_4626(var_71_object);
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj(); var_26_string = "";
	var_20_cvector = var_25_object;
	var_21_bool = var_26_string;
	func_4353(var_24_bool, var_25_object, var_26_string);
	if(var_24_bool != 0) {
		func_2049(var_23_int);
		var_58_object = Obj(); var_59_string = "";
		var_20_cvector = var_58_object;
		var_21_bool = var_59_string;
		func_4385(var_58_object, var_59_string);
	} else {
		var_207_int = 0; var_208_string = ""; var_209_object = Obj();
		var_21_bool = var_208_string;
		var_20_cvector = var_209_object;
		func_4632(var_209_object);
		var_207_int = var_23_int;
		var_211_bool = var_23_int > (int)0;
		if(var_211_bool == 0) goto Label_1984;
		var_213_bool = var_23_int > (int)1;
		if(var_213_bool != 0) {
			func_2049(var_23_int);
		}
		var_214_string = ""; var_215_object = Obj();
		var_21_bool = var_214_string;
		var_20_cvector = var_215_object;
		func_4635();
	}
Label_1984:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_string = "";
	var_20_bool = var_22_string;
	func_4452(var_21_bool, var_22_string);
	if(var_21_bool != 0) {
		func_2049(var_20_bool);
		var_32_string = "";
		var_20_bool = var_32_string;
		func_4468(var_32_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_object = var_0_object;
	if(var_21_object != 0) {
		return 0;
	}
	var_22_bool = 0; var_23_object = Obj();
	var_20_bool = var_23_object;
	func_4410(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		func_2049(var_20_bool);
		var_38_object = Obj();
		var_20_bool = var_38_object;
		func_4433(var_38_object);
	} else {
		var_112_object = Obj();
		var_20_bool = var_112_object;
		func_2071(var_20_bool, var_112_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_object = var_0_object;
	if(var_21_object != 0) {
		return 0;
	}
	var_22_object = Obj();
	var_20_bool = var_22_object;
	func_2071(var_20_bool, var_22_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_22_bool = var_20_bool != (int)110;
	if(var_22_bool != 0) {
		return 0;
	}
	var_1_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2049(var_19_bool);
	func_4609();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2049(var_20_bool);
	var_20_bool = Obj();
	func_4329();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_int = 0; var_24_object = Obj();
	var_20_bool = var_24_object;
	func_4600(var_24_object);
	var_23_int = var_22_int;
	var_26_bool = var_22_int > (int)0;
	if(var_26_bool != 0) {
		var_28_bool = var_22_int > (int)1;
		if(var_28_bool != 0) {
			func_2303();
		}
		var_31_object = Obj();
		var_20_bool = var_31_object;
		func_4603(var_31_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_object = Obj();
	var_20_bool = var_23_object;
	func_4439(var_23_object);
	var_32_int = 0; var_33_object = Obj();
	var_20_bool = var_33_object;
	func_4498(var_32_int, var_33_object);
	var_32_int = var_22_int;
	var_69_bool = var_22_int > (int)0;
	if(var_69_bool != 0) {
		var_71_bool = var_22_int > (int)1;
		if(var_71_bool != 0) {
			func_2303();
		}
		var_74_object = Obj();
		var_20_bool = var_74_object;
		func_4508(var_74_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_bool = 0;
	var_20_object = var_26_object;
	var_21_cvector = var_27_object;
	var_22_bool = var_28_bool;
	func_4944(var_26_object, var_27_object, var_28_bool);
	if(var_25_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_20_object = var_75_object;
		var_22_bool = var_76_bool;
		func_4516(var_75_object, var_76_bool);
		var_74_int = var_24_int;
		var_106_bool = var_24_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_24_int > (int)1;
			if(var_108_bool != 0) {
				func_2303();
			}
			var_111_object = Obj();
			var_20_object = var_111_object;
			func_4526(var_111_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_int = 0; var_24_object = Obj();
	var_20_bool = var_24_object;
	func_4610(var_23_int, var_24_object);
	var_23_int = var_22_int;
	var_66_bool = var_22_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_22_int > (int)1;
		if(var_68_bool != 0) {
			func_2303();
		}
		var_71_object = Obj();
		var_20_bool = var_71_object;
		func_4626(var_71_object);
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj(); var_26_string = "";
	var_20_cvector = var_25_object;
	var_21_bool = var_26_string;
	func_4353(var_24_bool, var_25_object, var_26_string);
	if(var_24_bool != 0) {
		func_2303();
		var_58_object = Obj(); var_59_string = "";
		var_20_cvector = var_58_object;
		var_21_bool = var_59_string;
		func_4385(var_58_object, var_59_string);
	} else {
		var_207_int = 0; var_208_string = ""; var_209_object = Obj();
		var_21_bool = var_208_string;
		var_20_cvector = var_209_object;
		func_4632(var_209_object);
		var_207_int = var_23_int;
		var_211_bool = var_23_int > (int)0;
		if(var_211_bool == 0) goto Label_2288;
		var_213_bool = var_23_int > (int)1;
		if(var_213_bool != 0) {
			func_2303();
		}
		var_214_string = ""; var_215_object = Obj();
		var_21_bool = var_214_string;
		var_20_cvector = var_215_object;
		func_4635();
	}
Label_2288:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_string = "";
	var_20_bool = var_22_string;
	func_4452(var_21_bool, var_22_string);
	if(var_21_bool != 0) {
		func_2303();
		var_32_string = "";
		var_20_bool = var_32_string;
		func_4468(var_32_string);
	}
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2303();
	var_20_bool = Obj();
	func_4329();
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	var_26_bool = var_20_bool != (int)111;
	if(var_26_bool != 0) {
		return 4;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_0_object;
	func_3254(var_27_bool, var_28_object);
	var_61_bool = var_27_bool == 0; //@nz
	if(var_61_bool != 0) {
		func_2303();
		return 4;
	}
	GetDirection(var_23_cvector);
	var_64_cvector = CVector(0,0,0); var_65_object = Obj();
	var_65_object = var_0_object;
	func_3181(var_64_cvector, var_65_object);
	var_64_cvector = var_24_cvector;
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_23_cvector = var_71_cvector;
	var_24_cvector = var_72_cvector;
	func_3646(var_70_float, var_71_cvector, var_72_cvector);
	var_95_bool = var_70_float < (float)0.4999999701976776;
	if(var_95_bool != 0) {
		var_96_object = Obj();
		var_96_object = var_0_object;
		func_3404(var_96_object);
	}
	return 4;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2303();
	func_4609();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_bool = var_22_object;
	func_4410(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_2303();
		var_37_object = Obj();
		var_20_bool = var_37_object;
		func_4433(var_37_object);
	}
	return 0;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2569(var_19_bool);
	func_4609();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0;
	var_30_bool = var_20_bool != (int)120;
	if(var_30_bool != 0) {
		return 8;
	}
	var_31_bool = var_0_object == 0; //@ne
	if(var_31_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_25_cvector);
		FindDirLength(var_26_float, var_25_cvector, (float)7000.0);
		var_34_cvector = CVector(0,0,0); var_35_float = 0;
		func_2414(var_28_float, var_34_cvector, (float)1.7453293800354004);
		var_34_cvector = var_27_cvector;
		var_28_float = var_27_cvector | var_27_cvector;
		var_64_bool = 0;
		var_64_bool = 0;
		var_66_bool = var_28_float >= (float)2500.0;
		if(var_66_bool != 0) {
			var_67_bool = 0;
			var_68_float = var_26_float * var_26_float;
			var_70_float = var_68_float * (float)2.25;
			var_71_bool = var_28_float >= var_70_float;
			if(var_71_bool != 1) {
				var_72_bool = 0;
				func_2585((bool)1, var_72_bool);
				if(var_72_bool != 1) {
					var_67_bool = 0;
				}
			}
			if(var_67_bool != 0) {
				var_64_bool = 1;
			}
		}
		if(var_64_bool == 0) goto Label_2568;
		Stop();
		var_92_cvector = CVector(0,0,0);
		func_3176(var_92_cvector);
		var_1_object = var_92_cvector + var_27_cvector;
	}
Label_2568:
	return 8;
	
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2569(var_20_bool);
	var_20_bool = Obj();
	func_4329();
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_int, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0;
	var_30_bool = var_20_bool != (int)120;
	if(var_30_bool != 0) {
		return 8;
	}
	var_31_bool = var_0_object == 0; //@ne
	if(var_31_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_25_cvector);
		FindDirLength(var_26_float, var_25_cvector, (float)7000.0);
		var_34_cvector = CVector(0,0,0); var_35_float = 0;
		func_2601(var_28_float, var_34_cvector, (float)1.7453293800354004);
		var_34_cvector = var_27_cvector;
		var_28_float = var_27_cvector | var_27_cvector;
		var_64_bool = 0;
		var_64_bool = 0;
		var_66_bool = var_28_float >= (float)2500.0;
		if(var_66_bool != 0) {
			var_67_bool = 0;
			var_68_float = var_26_float * var_26_float;
			var_70_float = var_68_float * (float)2.25;
			var_71_bool = var_28_float >= var_70_float;
			if(var_71_bool != 1) {
				var_72_bool = 0;
				func_2772((bool)1, var_72_bool);
				if(var_72_bool != 1) {
					var_67_bool = 0;
				}
			}
			if(var_67_bool != 0) {
				var_64_bool = 1;
			}
		}
		if(var_64_bool == 0) goto Label_2755;
		Stop();
		var_92_cvector = CVector(0,0,0);
		func_3176(var_92_cvector);
		var_1_object = var_92_cvector + var_27_cvector;
	}
Label_2755:
	return 8;
	
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2756(var_20_bool);
	var_20_bool = Obj();
	func_4329();
	return 0;
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2950(var_19_bool);
	func_4609();
	return 0;
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_int, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0;
	var_30_bool = var_20_bool != (int)120;
	if(var_30_bool != 0) {
		return 8;
	}
	var_31_bool = var_0_object == 0; //@ne
	if(var_31_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_25_cvector);
		FindDirLength(var_26_float, var_25_cvector, (float)7000.0);
		var_34_cvector = CVector(0,0,0); var_35_float = 0;
		func_2795(var_28_float, var_34_cvector, (float)1.7453293800354004);
		var_34_cvector = var_27_cvector;
		var_28_float = var_27_cvector | var_27_cvector;
		var_64_bool = 0;
		var_64_bool = 0;
		var_66_bool = var_28_float >= (float)2500.0;
		if(var_66_bool != 0) {
			var_67_bool = 0;
			var_68_float = var_26_float * var_26_float;
			var_70_float = var_68_float * (float)2.25;
			var_71_bool = var_28_float >= var_70_float;
			if(var_71_bool != 1) {
				var_72_bool = 0;
				func_2966((bool)1, var_72_bool);
				if(var_72_bool != 1) {
					var_67_bool = 0;
				}
			}
			if(var_67_bool != 0) {
				var_64_bool = 1;
			}
		}
		if(var_64_bool == 0) goto Label_2949;
		Stop();
		var_92_cvector = CVector(0,0,0);
		func_3176(var_92_cvector);
		var_1_object = var_92_cvector + var_27_cvector;
	}
Label_2949:
	return 8;
	
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_cvector, var_20_bool)
{
	func_2950(var_20_bool);
	var_20_bool = Obj();
	func_4329();
	return 0;
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_3144(var_19_bool);
	func_4609();
	return 0;
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0;
	var_30_bool = var_20_int != (int)120;
	if(var_30_bool != 0) {
		return 8;
	}
	var_31_bool = var_0_object == 0; //@ne
	if(var_31_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_25_cvector);
		FindDirLength(var_26_float, var_25_cvector, (float)7000.0);
		var_34_cvector = CVector(0,0,0); var_35_float = 0;
		func_2989(var_28_float, var_34_cvector, (float)1.7453293800354004);
		var_34_cvector = var_27_cvector;
		var_28_float = var_27_cvector | var_27_cvector;
		var_64_bool = 0;
		var_64_bool = 0;
		var_66_bool = var_28_float >= (float)2500.0;
		if(var_66_bool != 0) {
			var_67_bool = 0;
			var_68_float = var_26_float * var_26_float;
			var_70_float = var_68_float * (float)2.25;
			var_71_bool = var_28_float >= var_70_float;
			if(var_71_bool != 1) {
				var_72_bool = 0;
				func_3160((bool)1, var_72_bool);
				if(var_72_bool != 1) {
					var_67_bool = 0;
				}
			}
			if(var_67_bool != 0) {
				var_64_bool = 1;
			}
		}
		if(var_64_bool == 0) goto Label_3143;
		Stop();
		var_92_cvector = CVector(0,0,0);
		func_3176(var_92_cvector);
		var_1_object = var_92_cvector + var_27_cvector;
	}
Label_3143:
	return 8;
	
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object)
{
	func_3144(var_20_object);
	var_20_object = Obj();
	func_4329();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_string)
{
	var_22_float = 0; var_23_float = 0;
	var_25_bool = var_21_string == "health";
	if(var_25_bool != 0) {
		GetProperty("health", var_23_float);
		var_28_bool = var_23_float <= (int)0;
		if(var_28_bool != 0) {
			SignalDeath(var_20_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_4308(var_21_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0;
	var_20_object = var_24_object;
	var_21_int = var_25_int;
	var_22_float = var_26_float;
	func_3322(var_24_object, var_25_int, var_26_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0);
	var_20_object = var_26_object;
	var_21_int = var_27_int;
	var_22_float = var_28_float;
	var_24_cvector = var_29_cvector;
	var_25_cvector = var_30_cvector;
	func_3390(var_28_float, var_29_cvector, var_30_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0;
	var_0_object = false;
	SensePlayerOnly((bool)1);
	func_4886();
	func_1847();
	
Label_1824:
	irand(var_22_int, (int)2);
	var_146_bool = var_22_int == (int)0;
	if(var_146_bool != 0) {
		var_0_object = true;
		func_4912();
		var_0_object = false;
		ResetAAS();
	} else {
		irand(var_23_int, (int)4);
		var_166_int = var_23_int + (int)1;
		Sleep(var_166_int);
	}
	goto Label_1824;
	
}
EMIT "Return(); Pop(4)";


func_0(var_0_object, var_45_int, var_46_object)
{
	var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0;
	var_0_object = var_46_object;
	var_56_bool = 0; var_57_object = Obj(); var_58_float = 0;
	var_46_object = var_57_object;
	func_3420(var_56_bool, var_57_object, (float)70.0);
	var_103_bool = var_56_bool == 0; //@nz
	if(var_103_bool != 0) {
		var_45_int = -2;
		return 8;
	}
	CreateDialog(var_52_object);
	var_104_int = 0;
	func_4878(var_104_int);
	@@var_52_object:SetNPCName(var_104_int);
	var_105_int = 0;
	func_4876(var_105_int);
	@@var_52_object:SetNPCDescription(var_105_int);
	var_106_string = "";
	func_4880(var_106_string);
	@@var_52_object:SetPhoto(var_106_string);
	var_107_string = "";
	func_4882(var_107_string);
	@@var_52_object:SetPhoto2(var_107_string);
	var_108_int = 0;
	func_3951(var_108_int);
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
	var_440_bool = var_55_bool == 0; //@nz
	if(var_440_bool != 0) {
		sync();
		@@var_52_object:IsDialogEnd(var_55_bool);
		goto Label_56;
	}
	var_46_object = Obj();
	func_3489();
	StopDialog(var_52_object);
	@@var_52_object:GetReturnValue((int)-1);
	var_54_int = var_45_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4609()
{
	return 0;
}


func_4610(var_23_int, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0;
	Trace("Received steal");
	CanSee(var_26_bool, var_24_object);
	var_28_bool = var_26_bool;
	if(var_28_bool != 0) {
		var_29_int = 0; var_30_object = Obj();
		var_24_object = var_30_object;
		func_4498(var_29_int, var_30_object);
		var_29_int = var_23_int;
		return 2;
	}
	var_23_int = 0;
	return 2;
}


func_2049(var_1_object)
{
	KillTimer((int)110);
	var_1_object = false;
	var_22_object = var_0_object;
	if(var_22_object != 0) {
		func_4939();
	} else {
		Stop();
	}
	return 0;
	
}


func_4104()
{
	var_227_int = 0;
	func_3968(var_227_int);
	var_232_bool = var_227_int != (int)1;
	if(var_232_bool != 0) {
		return 0;
	}
	var_233_string = "";
	func_4087("liver");
	var_244_string = "";
	func_4087("kidney");
	var_245_string = "";
	func_4087("heart");
	var_246_string = "";
	func_4087("blood");
	return 0;
}


func_2569(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3597(var_108_object)
{
	var_109_object = Obj(); var_110_object = Obj();
	self(var_110_object);
	var_110_object = var_108_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4626(var_71_object)
{
	var_72_object = Obj();
	var_71_object = var_72_object;
	func_4508(var_72_object);
	return 0;
}


func_3603(var_52_cvector, var_53_cvector)
{
	var_60_float = 0; var_61_float = 0;
	var_62_int = var_53_cvector | var_53_cvector;
	var_61_float = sqrt(var_62_int);
	var_63_float = 9.999999974752427e-07;
	var_64_bool = var_61_float < var_63_float;
	if(var_64_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_61_float;
	return 2;
}


func_2071(var_1_object, var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0;
	var_27_object = var_1_object;
	if(var_27_object != 0) {
		return 4;
	}
	IsPlayerActor(var_22_object, var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 4;
	}
	var_29_int = 0; var_30_object = Obj();
	var_22_object = var_30_object;
	func_4481(var_30_object);
	var_29_int = var_26_int;
	var_33_bool = var_26_int > (int)0;
	if(var_33_bool != 0) {
		var_35_bool = var_26_int > (int)1;
		if(var_35_bool != 0) {
			func_2049(var_26_int);
		}
		var_38_object = Obj();
		var_22_object = var_38_object;
		func_4490(var_38_object);
		var_1_object = true;
		SetTimer((int)110, (float)5.0);
	}
	return 4;
}


func_4632(var_207_int)
{
	var_207_int = 0;
	return 0;
}


func_2585(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	GetDirection(var_75_cvector);
	var_77_cvector = CVector(0,0,0); var_78_object = Obj();
	var_78_object = var_0_object;
	func_3181(var_77_cvector, var_78_object);
	var_77_cvector = var_76_cvector;
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_75_cvector = var_84_cvector;
	var_76_cvector = var_85_cvector;
	func_3619(var_83_float, var_84_cvector, var_85_cvector);
	var_72_bool = var_83_float >= (float)-0.3420201241970062;
	return 4;
}


func_4635()
{
	return 0;
}


func_4637(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	CanSee(var_29_bool, var_27_object);
	var_29_bool = var_26_bool;
	return 2;
}


func_3613(var_504_object)
{
	var_505_object = Obj(); var_506_object = Obj();
	CreateObjectVector(var_506_object);
	var_506_object = var_504_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4128(var_26_bool)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_31_bool = var_26_bool;
	if(var_31_bool != 0) {
		var_32_int = 0; var_33_int = 0;
		var_35_int = 0;
		func_3668(var_35_int);
		var_42_float = var_35_int * (int)100;
		var_33_int = (int)100 + var_42_float;
		func_4056((int)0, var_33_int);
		irand(var_29_int, (int)8);
		var_62_bool = var_29_int == (int)0;
		if(var_62_bool != 0) {
			var_63_int = 0; var_64_string = "";
			func_4303(var_63_int, "lemon");
			AddItem(var_30_bool, var_63_int, (int)0, (int)1);
		} else {
			var_68_bool = var_29_int == (int)1;
			if(var_68_bool != 0) {
				var_69_int = 0; var_70_string = "";
				func_4303(var_69_int, "rusk");
				AddItem(var_30_bool, var_69_int, (int)0, (int)1);
				goto Label_4216;
			}
			var_74_bool = var_29_int == (int)2;
			if(var_74_bool != 0) {
				var_75_int = 0; var_76_string = "";
				func_4303(var_75_int, "hook");
				AddItem(var_30_bool, var_75_int, (int)0, (int)1);
				goto Label_4216;
			}
			var_80_bool = var_29_int == (int)4;
			if(var_80_bool != 0) {
				var_81_int = 0; var_82_string = "";
				func_4303(var_81_int, "syringe");
				AddItem(var_30_bool, var_81_int, (int)0, (int)1);
				goto Label_4216;
			}
			var_86_bool = var_29_int == (int)5;
			if(var_86_bool != 0) {
				var_87_int = 0; var_88_string = "";
				func_4303(var_87_int, "watch");
				AddItem(var_30_bool, var_87_int, (int)0, (int)1);
				goto Label_4216;
			}
			var_92_bool = var_29_int == (int)6;
			if(var_92_bool == 0) goto Label_4216;
			var_93_int = 0; var_94_string = "";
			func_4303(var_93_int, "razor");
			AddItem(var_30_bool, var_93_int, (int)0, (int)1);
	}
		var_97_int = 0; var_98_int = 0;
		var_100_int = 0;
		func_3668(var_100_int);
		var_102_float = var_100_int * (int)50;
		var_98_int = (int)50 + var_102_float;
		func_4056((int)0, var_98_int);
		irand(var_29_int, (int)7);
		var_105_bool = var_29_int == (int)0;
		if(var_105_bool != 0) {
			var_106_int = 0; var_107_string = "";
			func_4303(var_106_int, "beads");
			AddItem(var_30_bool, var_106_int, (int)0, (int)1);
			goto Label_4302;
		}
		var_111_bool = var_29_int == (int)1;
		if(var_111_bool != 0) {
			var_112_int = 0; var_113_string = "";
			func_4303(var_112_int, "bracelet");
			AddItem(var_30_bool, var_112_int, (int)0, (int)1);
			goto Label_4302;
		}
		var_117_bool = var_29_int == (int)2;
		if(var_117_bool != 0) {
			var_118_int = 0; var_119_string = "";
			func_4303(var_118_int, "ear_ring");
			AddItem(var_30_bool, var_118_int, (int)0, (int)1);
			goto Label_4302;
		}
		var_123_bool = var_29_int == (int)3;
		if(var_123_bool != 0) {
			var_124_int = 0; var_125_string = "";
			func_4303(var_124_int, "gold_ring");
			AddItem(var_30_bool, var_124_int, (int)0, (int)1);
			goto Label_4302;
		}
		var_129_bool = var_29_int == (int)4;
		if(var_129_bool != 0) {
			var_130_int = 0; var_131_string = "";
			func_4303(var_130_int, "silver_ring");
			AddItem(var_30_bool, var_130_int, (int)0, (int)1);
			goto Label_4302;
		}
		var_135_bool = var_29_int == (int)5;
		if(var_135_bool == 0) goto Label_4302;
		var_136_int = 0; var_137_string = "";
		func_4303(var_136_int, "flower");
		AddItem(var_30_bool, var_136_int, (int)0, (int)1);
	}
Label_4216:
	goto Label_4302;
	
Label_4302:
	return 4;
	
}


func_4642(var_38_object)
{
	var_39_object = Obj();
	var_38_object = var_39_object;
	TaskCall(7);
	func_2825(var_40_object, var_41_cvector, var_42_bool, var_39_object);
	TaskReturn();
	return 0;
}


func_3619(var_83_float, var_84_cvector, var_85_cvector)
{
	var_86_int = var_84_cvector | var_85_cvector;
	var_87_int = var_84_cvector | var_84_cvector;
	var_88_int = var_85_cvector | var_85_cvector;
	var_89_float = var_87_int * var_88_int;
	var_90_float = sqrt(var_89_float);
	var_83_float = var_86_int / var_90_float;
	return 0;
}


func_2601(var_0_object, var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0;
	GetPosition(var_42_cvector);
	@@@var_0_object:GetPosition(var_43_cvector);
	GetDirection(var_44_cvector);
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_42_cvector - var_43_cvector;
	func_3603(var_50_cvector, var_51_cvector);
	var_58_float = var_44_cvector * (float)0.75;
	var_49_cvector = var_50_cvector + var_58_float;
	func_3603(var_48_cvector, var_49_cvector);
	var_48_cvector = var_45_cvector;
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, (int)32, (float)7000.0);
	var_47_float = var_47_float - (int)100;
	var_63_bool = var_47_float < (int)0;
	if(var_63_bool != 0) {
		var_47_float = 0;
	}
	var_34_cvector = var_46_cvector * var_47_float;
	return 12;
}


func_4650(var_35_bool, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0;
	CanSee(var_38_bool, var_36_object);
	var_35_bool = 1;
	var_39_bool = var_38_bool;
	if(var_39_bool != 1) {
		var_40_float = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_3188(var_40_float, var_41_object);
		var_49_bool = var_40_float <= (int)4000000;
		if(var_49_bool != 1) {
			var_35_bool = 0;
		}
	}
	return 2;
}


func_3627(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_77_float = GetByIndex(var_75_cvector, 0);
	var_78_float = var_76_float * var_77_float;
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_80_float = GetByIndex(var_75_cvector, 2);
	var_81_float = var_79_float * var_80_float;
	var_73_float = var_78_float + var_81_float;
	return 0;
}


func_3636(var_82_float, var_83_cvector)
{
	var_84_float = GetByIndex(var_83_cvector, 0);
	var_85_float = GetByIndex(var_83_cvector, 0);
	var_86_float = var_84_float * var_85_float;
	var_87_float = GetByIndex(var_83_cvector, 2);
	var_88_float = GetByIndex(var_83_cvector, 2);
	var_89_float = var_87_float * var_88_float;
	var_90_int = var_86_float + var_89_float;
	var_82_float = sqrt(var_90_int);
	return 0;
}


func_2104(var_0_object, var_39_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0;
	var_0_object = var_39_object;
	func_2155(var_46_bool);
	GetDirection(var_44_cvector);
	var_54_cvector = CVector(0,0,0); var_55_object = Obj();
	var_55_object = var_0_object;
	func_3181(var_54_cvector, var_55_object);
	var_54_cvector = var_45_cvector;
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
	var_44_cvector = var_61_cvector;
	var_45_cvector = var_62_cvector;
	func_3646(var_60_float, var_61_cvector, var_62_cvector);
	var_85_bool = var_60_float < (int)0;
	if(var_85_bool != 0) {
		var_86_object = Obj();
		var_86_object = var_0_object;
		func_3404(var_86_object);
		var_46_bool = 1;
	} else {
		Sleep((float)1.5, var_46_bool);
	}
	var_95_bool = var_46_bool;
	if(var_95_bool != 0) {
		var_96_object = Obj();
		var_96_object = var_0_object;
		func_3404(var_96_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_4665(var_137_object)
{
	var_138_object = Obj();
	var_137_object = var_138_object;
	TaskCall(8);
	func_3019(var_139_object, var_140_cvector, var_141_bool, var_138_object);
	TaskReturn();
	return 0;
}


func_3646(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	var_71_cvector = var_74_cvector;
	var_72_cvector = var_75_cvector;
	func_3627(var_73_float, var_74_cvector, var_75_cvector);
	var_82_float = 0; var_83_cvector = CVector(0,0,0);
	var_71_cvector = var_83_cvector;
	func_3636(var_82_float, var_83_cvector);
	var_91_float = 0; var_92_cvector = CVector(0,0,0);
	var_72_cvector = var_92_cvector;
	func_3636(var_91_float, var_92_cvector);
	var_93_float = var_82_float * var_91_float;
	var_70_float = var_73_float / var_93_float;
	return 0;
}


func_4673(var_52_bool, var_53_object)
{
	var_54_bool = 0; var_55_object = Obj();
	var_53_object = var_55_object;
	func_4650(var_54_bool, var_55_object);
	var_54_bool = var_52_bool;
	return 0;
}


func_2631(var_0_object, var_1_object, var_2_object, var_112_object)
{
	var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_float = 0;
	var_0_object = var_112_object;
	var_126_cvector = CVector(0,0,0); var_127_float = 0;
	func_2601(var_125_float, var_126_cvector, (float)1.7453293800354004);
	var_126_cvector = var_121_cvector;
	var_122_float = var_121_cvector | var_121_cvector;
	var_157_bool = var_122_float < (float)2500.0;
	if(var_157_bool != 0) {
		var_158_cvector = CVector(0,0,0); var_159_float = 0;
		func_2601(var_125_float, var_158_cvector, (float)2.6179938316345215);
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
	func_3176(var_168_cvector);
	var_1_object = var_168_cvector + var_121_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_2673:
	MovePoint(var_1_object, (int)1, var_123_bool);
	var_174_bool = var_123_bool;
	if(var_174_bool != 0) {
		var_175_bool = var_0_object == 0; //@ne
		if(var_175_bool != 0) {
			goto Label_2703;
		EMIT "GOTO 0xa8d";

		Label_2703:
			return 10;
		}
		var_176_cvector = CVector(0,0,0); var_177_float = 0;
		func_2601(var_125_float, var_176_cvector, (float)2.6179938316345215);
		var_176_cvector = var_124_cvector;
		var_125_float = var_124_cvector | var_124_cvector;
		var_179_bool = var_125_float >= (float)2500.0;
		if(var_179_bool != 0) {
			var_180_cvector = CVector(0,0,0);
			func_3176(var_180_cvector);
			var_1_object = var_180_cvector + var_124_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2703;
		}
	}
	var_183_bool = var_2_object == 0; //@nz
	if(var_183_bool == 1) goto Label_2673;
	
}


func_3144(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_4680(var_205_object)
{
	var_206_object = Obj();
	var_205_object = var_206_object;
	func_4665(var_206_object);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_117_object, var_118_object)
{
	var_0_object = var_118_object;
	var_1_object = var_117_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_124_bool = 0; var_125_object = Obj();
		var_125_object = var_1_object;
		func_3714(var_125_object);
		if(var_124_bool != 0) {
			var_132_string = "";
			func_649(var_118_object, "Neutral");
			@@@var_0_object:SetMessage((int)543180);
			@@@var_0_object:ClearReplies();
			var_150_bool = 0;
			var_150_bool = 1;
			var_151_bool = 0;
			var_151_bool = 1;
			var_152_bool = 0;
			var_152_bool = 1;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_3726(var_153_bool, var_154_object);
			if(var_153_bool != 1) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_3746(var_164_bool, var_165_object);
				if(var_164_bool != 1) {
					var_152_bool = 0;
				}
			}
			if(var_152_bool != 1) {
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_3756(var_170_bool, var_171_object);
				if(var_170_bool != 1) {
					var_151_bool = 0;
				}
			}
			if(var_151_bool != 1) {
				var_176_bool = 0; var_177_object = Obj();
				var_177_object = var_1_object;
				func_3766(var_176_bool, var_177_object);
				if(var_176_bool != 1) {
					var_150_bool = 0;
				}
			}
			if(var_150_bool != 0) {
				@@@var_0_object:AddReply((int)543189, (int)45648, (int)45645);
			}
			var_185_bool = 0;
			var_185_bool = 1;
			var_186_bool = 0;
			var_186_bool = 1;
			var_187_bool = 0;
			var_187_bool = 1;
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_3736(var_188_bool, var_189_object);
			if(var_188_bool != 1) {
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_object;
				func_3776(var_194_bool, var_195_object);
				if(var_194_bool != 1) {
					var_187_bool = 0;
				}
			}
			if(var_187_bool != 1) {
				var_200_bool = 0; var_201_object = Obj();
				var_201_object = var_1_object;
				func_3806(var_200_bool, var_201_object);
				if(var_200_bool != 1) {
					var_186_bool = 0;
				}
			}
			if(var_186_bool != 1) {
				var_206_bool = 0; var_207_object = Obj();
				var_207_object = var_1_object;
				func_3816(var_206_bool, var_207_object);
				if(var_206_bool != 1) {
					var_185_bool = 0;
				}
			}
			if(var_185_bool != 0) {
				@@@var_0_object:AddReply((int)543190, (int)45655, (int)45646);
			}
			var_215_bool = 0;
			var_215_bool = 1;
			var_216_bool = 0;
			var_216_bool = 1;
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_3786(var_217_bool, var_218_object);
			if(var_217_bool != 1) {
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_object;
				func_3796(var_223_bool, var_224_object);
				if(var_223_bool != 1) {
					var_216_bool = 0;
				}
			}
			if(var_216_bool != 1) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_3746(var_229_bool, var_230_object);
				if(var_229_bool != 1) {
					var_215_bool = 0;
				}
			}
			if(var_215_bool != 0) {
				@@@var_0_object:AddReply((int)543191, (int)45656, (int)45647);
			}
			var_234_bool = 0;
			var_234_bool = 1;
			var_235_bool = 0;
			var_235_bool = 1;
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_3726(var_236_bool, var_237_object);
			if(var_236_bool != 1) {
				var_238_bool = 0; var_239_object = Obj();
				var_239_object = var_1_object;
				func_3736(var_238_bool, var_239_object);
				if(var_238_bool != 1) {
					var_235_bool = 0;
				}
			}
			if(var_235_bool != 1) {
				var_240_bool = 0; var_241_object = Obj();
				var_241_object = var_1_object;
				func_3746(var_240_bool, var_241_object);
				if(var_240_bool != 1) {
					var_234_bool = 0;
				}
			}
			if(var_234_bool != 0) {
				@@@var_0_object:AddReply((int)543182, (int)-1, (int)45638);
			}
			var_245_bool = 0;
			var_245_bool = 1;
			var_246_bool = 0;
			var_246_bool = 1;
			var_247_bool = 0;
			var_247_bool = 1;
			var_248_bool = 0; var_249_object = Obj();
			var_249_object = var_1_object;
			func_3726(var_248_bool, var_249_object);
			if(var_248_bool != 1) {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_object;
				func_3736(var_250_bool, var_251_object);
				if(var_250_bool != 1) {
					var_247_bool = 0;
				}
			}
			if(var_247_bool != 1) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_3746(var_252_bool, var_253_object);
				if(var_252_bool != 1) {
					var_246_bool = 0;
				}
			}
			if(var_246_bool != 1) {
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_3756(var_254_bool, var_255_object);
				if(var_254_bool != 1) {
					var_245_bool = 0;
				}
			}
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)543183, (int)-1, (int)45639);
			}
			var_259_bool = 0;
			var_259_bool = 1;
			var_260_bool = 0;
			var_260_bool = 1;
			var_261_bool = 0;
			var_261_bool = 1;
			var_262_bool = 0;
			var_262_bool = 1;
			var_263_bool = 0; var_264_object = Obj();
			var_264_object = var_1_object;
			func_3756(var_263_bool, var_264_object);
			if(var_263_bool != 1) {
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_3766(var_265_bool, var_266_object);
				if(var_265_bool != 1) {
					var_262_bool = 0;
				}
			}
			if(var_262_bool != 1) {
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_3776(var_267_bool, var_268_object);
				if(var_267_bool != 1) {
					var_261_bool = 0;
				}
			}
			if(var_261_bool != 1) {
				var_269_bool = 0; var_270_object = Obj();
				var_270_object = var_1_object;
				func_3786(var_269_bool, var_270_object);
				if(var_269_bool != 1) {
					var_260_bool = 0;
				}
			}
			if(var_260_bool != 1) {
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_3796(var_271_bool, var_272_object);
				if(var_271_bool != 1) {
					var_259_bool = 0;
				}
			}
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)543187, (int)-1, (int)45643);
			}
			var_276_bool = 0;
			var_276_bool = 1;
			var_277_bool = 0;
			var_277_bool = 1;
			var_278_bool = 0;
			var_278_bool = 1;
			var_279_bool = 0; var_280_object = Obj();
			var_280_object = var_1_object;
			func_3806(var_279_bool, var_280_object);
			if(var_279_bool != 1) {
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_object;
				func_3816(var_281_bool, var_282_object);
				if(var_281_bool != 1) {
					var_278_bool = 0;
				}
			}
			if(var_278_bool != 1) {
				var_283_bool = 0; var_284_object = Obj();
				var_284_object = var_1_object;
				func_3826(var_283_bool, var_284_object);
				if(var_283_bool != 1) {
					var_277_bool = 0;
				}
			}
			if(var_277_bool != 1) {
				var_289_bool = 0; var_290_object = Obj();
				var_290_object = var_1_object;
				func_3836(var_289_bool, var_290_object);
				if(var_289_bool != 1) {
					var_276_bool = 0;
				}
			}
			if(var_276_bool != 0) {
				@@@var_0_object:AddReply((int)543208, (int)-1, (int)45664);
			}
			var_298_bool = 0;
			var_298_bool = 1;
			var_299_bool = 0;
			var_299_bool = 1;
			var_300_bool = 0; var_301_object = Obj();
			var_301_object = var_1_object;
			func_3726(var_300_bool, var_301_object);
			if(var_300_bool != 1) {
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_3736(var_302_bool, var_303_object);
				if(var_302_bool != 1) {
					var_299_bool = 0;
				}
			}
			if(var_299_bool != 1) {
				var_304_bool = 0; var_305_object = Obj();
				var_305_object = var_1_object;
				func_3746(var_304_bool, var_305_object);
				if(var_304_bool != 1) {
					var_298_bool = 0;
				}
			}
			if(var_298_bool != 0) {
				@@@var_0_object:AddReply((int)543181, (int)-1, (int)45637);
			}
			var_309_bool = 0;
			var_309_bool = 1;
			var_310_bool = 0;
			var_310_bool = 1;
			var_311_bool = 0; var_312_object = Obj();
			var_312_object = var_1_object;
			func_3756(var_311_bool, var_312_object);
			if(var_311_bool != 1) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_3766(var_313_bool, var_314_object);
				if(var_313_bool != 1) {
					var_310_bool = 0;
				}
			}
			if(var_310_bool != 1) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_3776(var_315_bool, var_316_object);
				if(var_315_bool != 1) {
					var_309_bool = 0;
				}
			}
			if(var_309_bool != 0) {
				@@@var_0_object:AddReply((int)543184, (int)-1, (int)45640);
			}
			var_320_bool = 0;
			var_320_bool = 1;
			var_321_bool = 0;
			var_321_bool = 1;
			var_322_bool = 0;
			var_322_bool = 1;
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_3746(var_323_bool, var_324_object);
			if(var_323_bool != 1) {
				var_325_bool = 0; var_326_object = Obj();
				var_326_object = var_1_object;
				func_3776(var_325_bool, var_326_object);
				if(var_325_bool != 1) {
					var_322_bool = 0;
				}
			}
			if(var_322_bool != 1) {
				var_327_bool = 0; var_328_object = Obj();
				var_328_object = var_1_object;
				func_3786(var_327_bool, var_328_object);
				if(var_327_bool != 1) {
					var_321_bool = 0;
				}
			}
			if(var_321_bool != 1) {
				var_329_bool = 0; var_330_object = Obj();
				var_330_object = var_1_object;
				func_3796(var_329_bool, var_330_object);
				if(var_329_bool != 1) {
					var_320_bool = 0;
				}
			}
			if(var_320_bool != 0) {
				@@@var_0_object:AddReply((int)543185, (int)-1, (int)45641);
			}
			var_334_bool = 0;
			var_334_bool = 1;
			var_335_bool = 0;
			var_335_bool = 1;
			var_336_bool = 0; var_337_object = Obj();
			var_337_object = var_1_object;
			func_3806(var_336_bool, var_337_object);
			if(var_336_bool != 1) {
				var_338_bool = 0; var_339_object = Obj();
				var_339_object = var_1_object;
				func_3816(var_338_bool, var_339_object);
				if(var_338_bool != 1) {
					var_335_bool = 0;
				}
			}
			if(var_335_bool != 1) {
				var_340_bool = 0; var_341_object = Obj();
				var_341_object = var_1_object;
				func_3826(var_340_bool, var_341_object);
				if(var_340_bool != 1) {
					var_334_bool = 0;
				}
			}
			if(var_334_bool != 0) {
				@@@var_0_object:AddReply((int)543186, (int)-1, (int)45642);
			}
			var_345_bool = 0;
			var_345_bool = 1;
			var_346_bool = 0;
			var_346_bool = 1;
			var_347_bool = 0;
			var_347_bool = 1;
			var_348_bool = 0;
			var_348_bool = 1;
			var_349_bool = 0; var_350_object = Obj();
			var_350_object = var_1_object;
			func_3776(var_349_bool, var_350_object);
			if(var_349_bool != 1) {
				var_351_bool = 0; var_352_object = Obj();
				var_352_object = var_1_object;
				func_3796(var_351_bool, var_352_object);
				if(var_351_bool != 1) {
					var_348_bool = 0;
				}
			}
			if(var_348_bool != 1) {
				var_353_bool = 0; var_354_object = Obj();
				var_354_object = var_1_object;
				func_3806(var_353_bool, var_354_object);
				if(var_353_bool != 1) {
					var_347_bool = 0;
				}
			}
			if(var_347_bool != 1) {
				var_355_bool = 0; var_356_object = Obj();
				var_356_object = var_1_object;
				func_3836(var_355_bool, var_356_object);
				if(var_355_bool != 1) {
					var_346_bool = 0;
				}
			}
			if(var_346_bool != 1) {
				var_357_bool = 0; var_358_object = Obj();
				var_358_object = var_1_object;
				func_3816(var_357_bool, var_358_object);
				if(var_357_bool != 1) {
					var_345_bool = 0;
				}
			}
			if(var_345_bool != 0) {
				@@@var_0_object:AddReply((int)543188, (int)-1, (int)45644);
			}
		} else {
				var_380_string = "";
				func_649(var_118_object, "Neutral");
				@@@var_0_object:SetMessage((int)538167);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)538168, (int)-1, (int)40043);
				var_385_bool = 0;
				var_385_bool = 0;
				var_386_bool = 0; var_387_object = Obj();
				var_387_object = var_1_object;
				func_3726(var_386_bool, var_387_object);
				if(var_386_bool != 0) {
					var_388_bool = 0; var_389_object = Obj();
					var_389_object = var_1_object;
					func_3690(var_389_object);
					if(var_388_bool != 0) {
						var_385_bool = 1;
					}
				}
				if(var_385_bool != 0) {
					@@@var_0_object:AddReply((int)538169, (int)40045, (int)40044);
				}
				var_397_bool = 0;
				var_397_bool = 0;
				var_398_bool = 0;
				var_398_bool = 0;
				var_399_bool = 0; var_400_object = Obj();
				var_400_object = var_1_object;
				func_3726(var_399_bool, var_400_object);
				if(var_399_bool != 0) {
					var_401_bool = 0; var_402_object = Obj();
					var_402_object = var_1_object;
					func_3846(var_401_bool, var_402_object);
					if(var_401_bool != 0) {
						var_398_bool = 1;
					}
				}
				if(var_398_bool != 0) {
					var_412_bool = 0; var_413_object = Obj();
					var_413_object = var_1_object;
					func_3690(var_413_object);
					if(var_412_bool != 0) {
						var_397_bool = 1;
					}
				}
				if(var_397_bool != 0) {
					@@@var_0_object:AddReply((int)538179, (int)40055, (int)40054);
				}
				var_417_bool = 0;
				var_417_bool = 0;
				var_418_bool = 0; var_419_object = Obj();
				var_419_object = var_1_object;
				func_3736(var_418_bool, var_419_object);
				if(var_418_bool != 0) {
					var_420_bool = 0; var_421_object = Obj();
					var_421_object = var_1_object;
					func_3690(var_421_object);
					if(var_420_bool != 0) {
						var_417_bool = 1;
					}
				}
				if(var_417_bool != 0) {
					@@@var_0_object:AddReply((int)538190, (int)40067, (int)40066);
				}
				var_425_bool = 0;
				var_425_bool = 1;
				var_426_bool = 0; var_427_object = Obj();
				var_427_object = var_1_object;
				func_3690(var_427_object);
				if(var_426_bool != 1) {
					var_428_bool = 0; var_429_object = Obj();
					var_429_object = var_1_object;
					func_3702(var_429_object);
					if(var_428_bool != 1) {
						var_425_bool = 0;
					}
				}
				if(var_425_bool != 0) {
					@@@var_0_object:AddReply((int)538204, (int)-1, (int)40081);
				}
				@@@var_0_object:AddReply((int)538205, (int)-1, (int)40082);
				goto Label_619;
		}
	}
Label_619:
	var_362_bool = 0;
	func_4884(var_362_bool);
	if(var_362_bool != 0) {

	Label_623:
		lshWaitForAnimEnd();
		var_363_string = var_3_string;
		if(var_363_string != 0) {
		} else {
			var_364_string = "";
			var_364_string = var_2_object;
			func_3507(var_364_string);
			goto Label_623;
	}
		PlayAnimation("all", "idle");

	Label_638:
		WaitForAnimEnd();
		var_377_string = var_3_string;
		if(var_377_string != 0) {
			goto Label_648;
		}
		PlayAnimation("all", "idle");
		goto Label_638;

	}
	goto Label_648;
	
Label_648:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_4686(var_28_bool)
{
	var_28_bool = 0;
	return 0;
}


func_3663(var_126_int, var_127_string)
{
	var_128_int = 0; var_129_int = 0;
	GetVariable(var_127_string, var_129_int);
	var_129_int = var_126_int;
	return 2;
}


func_4689()
{
	return 0;
}


func_4691(var_451_object)
{
	var_452_object = Obj(); var_453_object = Obj(); var_454_object = Obj(); var_455_object = Obj(); var_456_int = 0; var_457_int = 0; var_458_int = 0; var_459_int = 0; var_460_object = Obj(); var_461_int = 0; var_462_bool = 0; var_463_int = 0; var_464_float = 0; var_465_int = 0; var_466_object = Obj(); var_467_int = 0; var_468_int = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_int = 0; var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); var_480_object = Obj(); var_481_object = Obj(); var_482_int = 0; var_483_int = 0; var_484_int = 0; var_485_int = 0; var_486_object = Obj(); var_487_int = 0; var_488_bool = 0; var_489_int = 0; var_490_float = 0; var_491_int = 0; var_492_object = Obj(); var_493_int = 0; var_494_int = 0; var_495_int = 0; var_496_int = 0; var_497_int = 0; var_498_int = 0; var_499_int = 0; var_500_int = 0; var_501_int = 0; var_502_int = 0; var_503_object = Obj();
	func_3613(Obj());
	var_504_object = var_478_object;
	CreateIntVector(var_479_object);
	CreateIntVector(var_480_object);
	CreateIntVector(var_481_object);
	@@var_451_object:GetSubContainerCount(var_482_int);
	var_483_int = 0;
	
Label_4705:
	var_507_bool = var_483_int < var_482_int;
	if(var_507_bool != 0) {
		@@var_451_object:GetItemCount(var_484_int, var_483_int);
		var_485_int = 0;

	Label_4710:
		var_508_bool = var_485_int < var_484_int;
		if(var_508_bool != 0) {
			@@var_451_object:GetItem(var_486_object, var_485_int, var_483_int);
			@@var_486_object:GetItemID(var_487_int);
			HasInvItemProperty(var_488_bool, var_487_int, "HasDurability");
			var_510_bool = var_488_bool;
			if(var_510_bool != 0) {
				@@var_486_object:HasProperty(var_488_bool, "durability");
				var_512_bool = var_488_bool;
				if(var_512_bool != 0) {
					@@var_486_object:GetProperty(var_489_int, "durability");
					var_514_bool = 0;
					var_514_bool = 0;
					var_516_bool = var_489_int < (int)100;
					if(var_516_bool != 0) {
						var_517_bool = 0; var_518_object = Obj();
						var_486_object = var_518_object;
						func_4838(var_517_bool, var_518_object);
						if(var_517_bool != 0) {
							var_514_bool = 1;
						}
					}
					if(var_514_bool != 0) {
						@@var_478_object:add(var_486_object);
						@@var_479_object:add(var_483_int);
						@@var_480_object:add(var_485_int);
						var_529_int = 0; var_530_object = Obj(); var_531_int = 0;
						var_486_object = var_530_object;
						func_3979(var_529_int, var_530_object, (int)0);
						var_529_int = var_490_float;
						var_573_float = (float)2.0 * var_489_int;
						var_575_float = var_573_float / (float)100.0;
						var_576_int = (float)1.0 + var_575_float;
						var_577_float = var_490_float * var_576_int;
						var_579_int = (int)100 - var_489_int;
						var_580_float = var_577_float * var_579_int;
						var_491_int = var_580_float / (int)300;
						var_582_bool = var_491_int == 0; //@nz
						if(var_582_bool != 0) {
							var_491_int = 1;
						}
						@@var_481_object:add(var_491_int);
					}
				}
			}
			var_486_object = 0;
			var_485_int = var_485_int + (int)1;
			goto Label_4710;
		}
		var_483_int = var_483_int + (int)1;
		goto Label_4705;
	}
	CreateIntVector(var_492_object);
	ChooseItem(var_478_object, var_492_object, var_481_object, "repair.xml");
	@@var_492_object:size(var_493_int);
	var_586_bool = var_493_int == 0; //@nz
	if(var_586_bool != 0) {
		return 52;
	}
	var_495_int = 0;
	
Label_4789:
	var_587_bool = var_495_int < var_493_int;
	if(var_587_bool != 0) {
		@@var_492_object:get(var_496_int, var_495_int);
		@@var_481_object:get(var_497_int, var_496_int);
		(int)0 = (int)0 + var_497_int;
		var_495_int = var_495_int + (int)1;
		goto Label_4789;
	}
	@@var_451_object:GetProperty("money", var_498_int);
	var_498_int = var_498_int - var_494_int;
	var_591_bool = var_498_int < (int)0;
	if(var_591_bool != 0) {
		return 52;
	}
	@@var_451_object:SetProperty("money", var_498_int);
	var_499_int = 0;
	
Label_4811:
	var_593_bool = var_499_int < var_493_int;
	if(var_593_bool != 0) {
		@@var_492_object:get(var_500_int, var_499_int);
		@@var_479_object:get(var_501_int, var_500_int);
		@@var_480_object:get(var_502_int, var_500_int);
		@@var_451_object:GetItem(var_503_object, var_502_int, var_501_int);
		@@var_503_object:SetProperty("durability", (int)100);
		@@var_451_object:SetItem(var_503_object, (int)1, var_502_int, var_501_int);
		var_503_object = 0;
		var_499_int = var_499_int + (int)1;
		goto Label_4811;
	}
	return 52;
}
EMIT "Stack[-12] = 0";
EMIT "Stack[-23] = 0";
EMIT "Stack[-24] = 0";
EMIT "Stack[-25] = 0";
EMIT "Stack[-26] = 0";


func_3668(var_35_int)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_39_int = 0;
	var_39_int = var_37_float / (int)24;
	var_35_int = (int)1 + var_39_int;
	return 2;
}


func_3160(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	GetDirection(var_75_cvector);
	var_77_cvector = CVector(0,0,0); var_78_object = Obj();
	var_78_object = var_0_object;
	func_3181(var_77_cvector, var_78_object);
	var_77_cvector = var_76_cvector;
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_75_cvector = var_84_cvector;
	var_76_cvector = var_85_cvector;
	func_3619(var_83_float, var_84_cvector, var_85_cvector);
	var_72_bool = var_83_float >= (float)-0.3420201241970062;
	return 4;
}


func_3677(var_405_int)
{
	var_406_float = 0; var_407_float = 0;
	GetGameTime(var_407_float);
	var_408_int = 0;
	var_407_float = var_408_int;
	var_405_int = var_408_int % (int)24;
	return 2;
}


func_3685(var_27_object)
{
	@@var_27_object:SetReturnValue((int)100);
	return 0;
}


func_3176(var_92_cvector)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0);
	GetPosition(var_94_cvector);
	var_94_cvector = var_92_cvector;
	return 2;
}


func_3690(var_388_bool)
{
	var_390_int = 0; var_391_string = "";
	func_3663(var_390_int, "branch");
	var_393_bool = var_390_int == (int)0;
	if(var_393_bool != 0) {
		var_388_bool = 1;
		return 0;
	}
	var_388_bool = 0;
	return 0;
}


func_2155(var_0_object)
{
	var_47_object = Obj();
	var_47_object = var_0_object;
	func_3538(var_47_object);
	return 0;
}


func_3181(var_54_cvector, var_55_object)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	GetPosition(var_58_cvector);
	@@var_55_object:GetPosition(var_59_cvector);
	var_54_cvector = var_59_cvector - var_58_cvector;
	return 4;
}


func_3188(var_40_float, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	GetPosition(var_45_cvector);
	@@var_41_object:GetPosition(var_46_cvector);
	var_47_cvector = var_46_cvector - var_45_cvector;
	var_40_float = var_47_cvector | var_47_cvector;
	return 6;
}


func_3702(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_3663(var_430_int, "branch");
	var_433_bool = var_430_int == (int)1;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_1657(var_22_object)
{
	EventDisable(0);
	var_23_object = Obj();
	var_22_object = var_23_object;
	func_1690(var_23_object);
	var_103_object = Obj();
	var_22_object = var_103_object;
	func_4960(var_103_object);
	EventEnable(0);
	
Label_1668:
	Hold();
	goto Label_1668;
}
EMIT "Return(); Pop(0)";


func_3196(var_104_bool, var_105_object)
{
	var_106_bool = 0; var_107_bool = 0;
	IsPlayerActor(var_105_object, var_107_bool);
	var_107_bool = var_104_bool;
	return 2;
}


func_3201(var_49_bool, var_50_object, var_51_string)
{
	var_52_bool = 0; var_53_bool = 0;
	var_56_bool = IsFuncExist(var_50_object, "HasProperty", (int)2);
	var_57_bool = var_56_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_49_bool = 0;
		return 2;
	}
	@@var_50_object:HasProperty(var_51_string, var_53_bool);
	var_53_bool = var_49_bool;
	return 2;
}


func_3714(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_3663(var_126_int, "branch");
	var_131_bool = var_126_int == (int)2;
	if(var_131_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_649(var_2_object, var_132_string)
{
	var_133_bool = 0;
	func_4884(var_133_bool);
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
	func_3523(var_136_string, var_137_bool);
	var_2_object = var_132_string;
	return 0;
	
}


func_3213(var_42_bool, var_43_object)
{
	var_44_bool = 0; var_45_bool = 0;
	@@var_43_object:IsDead(var_45_bool);
	var_45_bool = var_42_bool;
	return 2;
}


func_3726(var_153_bool, var_154_object)
{
	var_155_bool = 0; var_156_object = Obj();
	var_154_object = var_156_object;
	func_3856(var_156_object);
	if(var_155_bool != 0) {
		var_153_bool = 1;
		return 0;
	}
	var_153_bool = 0;
	return 0;
}


func_3218(var_31_bool, var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj();
	var_37_bool = var_32_object == 0; //@ne
	if(var_37_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	var_38_bool = 0;
	var_38_bool = 0;
	var_41_bool = IsFuncExist(var_32_object, "IsDead", (int)1);
	if(var_41_bool != 0) {
		var_42_bool = 0; var_43_object = Obj();
		var_32_object = var_43_object;
		func_3213(var_42_bool, var_43_object);
		if(var_42_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	GetScene(var_35_object);
	var_46_bool = var_35_object == 0; //@ne
	if(var_46_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	@@var_32_object:GetScene(var_36_object);
	var_47_bool = var_35_object != var_36_object;
	if(var_47_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	var_31_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3736(var_188_bool, var_189_object)
{
	var_190_bool = 0; var_191_object = Obj();
	var_189_object = var_191_object;
	func_3863(var_191_object);
	if(var_190_bool != 0) {
		var_188_bool = 1;
		return 0;
	}
	var_188_bool = 0;
	return 0;
}


func_1690(var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_object = Obj(); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0);
	var_44_bool = var_23_object == 0; //@ne
	if(var_44_bool != 0) {
		var_45_string = "";
		func_1781("fdie");
	} else {
		@@var_23_object:GetPosition(var_34_cvector);
		GetPosition(var_35_cvector);
		GetDirection(var_36_cvector);
		var_37_cvector = var_35_cvector - var_34_cvector;
		var_77_float = GetByIndex(var_37_cvector, 0);
		var_78_float = GetByIndex(var_36_cvector, 0);
		var_79_float = var_77_float * var_78_float;
		var_80_float = GetByIndex(var_37_cvector, 2);
		var_81_float = GetByIndex(var_36_cvector, 2);
		var_82_float = var_80_float * var_81_float;
		var_83_int = var_79_float + var_82_float;
		var_85_bool = var_83_int >= (int)0;
		if(var_85_bool != 0) {
			var_38_string = "fdie";
		} else {
				var_38_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_23_object = var_39_object;
		var_88_bool = IsFuncExist(var_23_object, "GetScriptProperty", (int)2);
		if(var_88_bool != 0) {
			@@var_23_object:HasScriptProperty(var_40_bool, "Owner");
			var_90_bool = var_40_bool;
			if(var_90_bool != 0) {
				@@var_23_object:GetScriptProperty(var_39_object, "Owner");
				var_92_bool = var_39_object == 0; //@ne
				if(var_92_bool != 0) {
					var_23_object = var_39_object;
				}
			}
		}
		var_95_bool = IsFuncExist(var_39_object, "@GetEyesHeight", (int)1);
		if(var_95_bool != 0) {
			@@var_39_object:GetEyesHeight(var_42_float);
			var_43_cvector = CVector(0.0, 0.0, 0.0);
			var_96_float = GetByIndex(var_43_cvector, 1);
			var_42_float = var_96_float;
			SetByIndex(var_43_cvector, 1) = var_96_float;
			LookAsync(var_23_object, "head", var_43_cvector);
			var_41_bool = 1;
		} else {
			var_41_bool = 0;

		}
		var_98_string = "";
		var_38_string = var_98_string;
		func_3556(var_98_string);
		PlayAnimation("all", var_38_string);
		WaitForAnimEnd();
		var_100_bool = var_41_bool;
		if(var_100_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_38_string);
		RemoveEnvelope();
		var_39_object = 0;
	}
	return 20;
	
}


func_3746(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj();
	var_165_object = var_167_object;
	func_3870(var_167_object);
	if(var_166_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_3756(var_170_bool, var_171_object)
{
	var_172_bool = 0; var_173_object = Obj();
	var_171_object = var_173_object;
	func_3877(var_173_object);
	if(var_172_bool != 0) {
		var_170_bool = 1;
		return 0;
	}
	var_170_bool = 0;
	return 0;
}


func_3766(var_176_bool, var_177_object)
{
	var_178_bool = 0; var_179_object = Obj();
	var_177_object = var_179_object;
	func_3884(var_179_object);
	if(var_178_bool != 0) {
		var_176_bool = 1;
		return 0;
	}
	var_176_bool = 0;
	return 0;
}


func_3254(var_27_bool, var_28_object)
{
	var_29_int = 0; var_30_int = 0;
	var_31_bool = 0; var_32_object = Obj();
	var_28_object = var_32_object;
	func_3218(var_31_bool, var_32_object);
	var_48_bool = var_31_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	var_49_bool = 0; var_50_object = Obj(); var_51_string = "";
	var_28_object = var_50_object;
	func_3201(var_49_bool, var_50_object, "noaccess");
	var_58_bool = var_49_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_27_bool = 1;
		return 2;
	}
	@@var_28_object:GetProperty("noaccess", var_30_int);
	var_27_bool = var_30_int == (int)0;
	return 2;
}


func_3776(var_194_bool, var_195_object)
{
	var_196_bool = 0; var_197_object = Obj();
	var_195_object = var_197_object;
	func_3891(var_197_object);
	if(var_196_bool != 0) {
		var_194_bool = 1;
		return 0;
	}
	var_194_bool = 0;
	return 0;
}


func_2756(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3786(var_217_bool, var_218_object)
{
	var_219_bool = 0; var_220_object = Obj();
	var_218_object = var_220_object;
	func_3898(var_220_object);
	if(var_219_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_3278(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_bool = 0; var_46_int = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = "";
	var_52_bool = var_37_object == 0; //@ne
	if(var_52_bool != 0) {
		return 14;
	}
	IsDead(var_45_bool);
	var_53_bool = var_45_bool;
	if(var_53_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_46_int);
	var_55_bool = var_46_int < (int)0;
	if(var_55_bool != 0) {
		return 14;
	}
	@@var_37_object:GetPosition(var_47_cvector);
	GetPosition(var_48_cvector);
	GetDirection(var_49_cvector);
	var_50_cvector = var_48_cvector - var_47_cvector;
	var_56_float = GetByIndex(var_50_cvector, 0);
	var_57_float = GetByIndex(var_49_cvector, 0);
	var_58_float = var_56_float * var_57_float;
	var_59_float = GetByIndex(var_50_cvector, 2);
	var_60_float = GetByIndex(var_49_cvector, 2);
	var_61_float = var_59_float * var_60_float;
	var_62_int = var_58_float + var_61_float;
	var_64_bool = var_62_int >= (int)0;
	if(var_64_bool != 0) {
		var_51_string = "fhit";
	} else {
		var_51_string = "bhit";
	}
	var_67_int = var_51_string + "1";
	var_69_int = var_51_string + "2";
	FadeSecondaryAnimation("hit_react", var_67_int, var_69_int, (int)-10);
	return 14;
	
}


func_4303(var_53_int, var_54_string)
{
	var_55_int = 0; var_56_int = 0;
	GetInvItemByName(var_56_int, var_54_string);
	var_56_int = var_53_int;
	return 2;
}


func_3796(var_223_bool, var_224_object)
{
	var_225_bool = 0; var_226_object = Obj();
	var_224_object = var_226_object;
	func_3905(var_226_object);
	if(var_225_bool != 0) {
		var_223_bool = 1;
		return 0;
	}
	var_223_bool = 0;
	return 0;
}


func_2772(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	GetDirection(var_75_cvector);
	var_77_cvector = CVector(0,0,0); var_78_object = Obj();
	var_78_object = var_0_object;
	func_3181(var_77_cvector, var_78_object);
	var_77_cvector = var_76_cvector;
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_75_cvector = var_84_cvector;
	var_76_cvector = var_85_cvector;
	func_3619(var_83_float, var_84_cvector, var_85_cvector);
	var_72_bool = var_83_float >= (float)-0.3420201241970062;
	return 4;
}


func_4308(var_21_object)
{
	var_22_object = Obj();
	var_21_object = var_22_object;
	TaskCall(2);
	func_1657(var_22_object);
	TaskReturn();
	return 0;
}


func_3806(var_200_bool, var_201_object)
{
	var_202_bool = 0; var_203_object = Obj();
	var_201_object = var_203_object;
	func_3912(var_203_object);
	if(var_202_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_4838(var_517_bool, var_518_object)
{
	var_519_int = 0; var_520_bool = 0; var_521_int = 0; var_522_int = 0; var_523_bool = 0; var_524_int = 0;
	@@var_518_object:GetItemID(var_522_int);
	HasInvItemProperty(var_523_bool, var_522_int, "Category");
	var_526_bool = var_523_bool == 0; //@nz
	if(var_526_bool != 0) {
		var_517_bool = 0;
		return 6;
	}
	GetInvItemProperty(var_524_int, var_522_int, "Category");
	var_517_bool = var_524_int == (int)1;
	return 6;
}


func_3816(var_206_bool, var_207_object)
{
	var_208_bool = 0; var_209_object = Obj();
	var_207_object = var_209_object;
	func_3919(var_209_object);
	if(var_208_bool != 0) {
		var_206_bool = 1;
		return 0;
	}
	var_206_bool = 0;
	return 0;
}


func_2795(var_0_object, var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0;
	GetPosition(var_42_cvector);
	@@@var_0_object:GetPosition(var_43_cvector);
	GetDirection(var_44_cvector);
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_42_cvector - var_43_cvector;
	func_3603(var_50_cvector, var_51_cvector);
	var_58_float = var_44_cvector * (float)0.75;
	var_49_cvector = var_50_cvector + var_58_float;
	func_3603(var_48_cvector, var_49_cvector);
	var_48_cvector = var_45_cvector;
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, (int)32, (float)7000.0);
	var_47_float = var_47_float - (int)100;
	var_63_bool = var_47_float < (int)0;
	if(var_63_bool != 0) {
		var_47_float = 0;
	}
	var_34_cvector = var_46_cvector * var_47_float;
	return 12;
}


func_3826(var_283_bool, var_284_object)
{
	var_285_bool = 0; var_286_object = Obj();
	var_284_object = var_286_object;
	func_3926(var_286_object);
	if(var_285_bool != 0) {
		var_283_bool = 1;
		return 0;
	}
	var_283_bool = 0;
	return 0;
}


func_1781(var_45_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_46_string = "";
	var_45_string = var_46_string;
	func_3556(var_46_string);
	PlayAnimation("all", var_45_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_45_string);
	RemoveEnvelope();
	return 0;
}


func_4854(var_44_object, var_47_object)
{
	var_45_int = 0; var_46_object = Obj();
	var_44_object = var_46_object;
	TaskCall(0);
	func_0(var_47_object, var_45_int, var_46_object);
	TaskReturn();
	var_450_bool = var_47_object == (int)100;
	if(var_450_bool != 0) {
		var_451_object = Obj();
		var_44_object = var_451_object;
		func_4691(var_451_object);
	}
	return 0;
}


func_3322(var_24_object, var_25_int, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_int = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0);
	var_45_bool = 0;
	var_45_bool = 0;
	var_46_bool = 0;
	var_46_bool = 0;
	var_47_object = var_24_object;
	if(var_47_object != 0) {
		var_49_bool = var_25_int != (int)4;
		if(var_49_bool != 0) {
			var_46_bool = 1;
		}
	}
	if(var_46_bool != 0) {
		var_51_bool = var_25_int != (int)5;
		if(var_51_bool != 0) {
			var_45_bool = 1;
		}
	}
	if(var_45_bool != 0) {
		var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
		var_54_cvector = CVector(0,0,0); var_55_object = Obj();
		var_24_object = var_55_object;
		func_3181(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_3603(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		CreateVectorVector(var_37_object);
		var_38_int = 1;

	Label_3351:
		var_66_int = "hit" + var_38_int;
		GetGeometryLocator(var_66_int, var_39_bool, var_40_cvector, var_41_cvector);
		var_67_bool = var_39_bool == 0; //@nz
		if(var_67_bool != 0) {
		} else {
			var_115_int = var_41_cvector | var_36_cvector;
			var_117_bool = var_115_int >= (float)0.7071067690849304;
			if(var_117_bool != 0) {
				@@var_37_object:add(var_40_cvector);
			}
			var_38_int = var_38_int + (int)1;
			goto Label_3351;
		}
		@@var_37_object:size(var_42_int);
		var_68_int = var_42_int;
		if(var_68_int != 0) {
			irand(var_43_int, var_42_int);
			@@var_37_object:get(var_44_cvector, var_43_int);
			var_69_object = Obj(); var_70_int = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
			var_24_object = var_69_object;
			var_25_int = var_70_int;
			var_26_float = var_71_float;
			var_44_cvector = var_72_cvector;
			var_73_cvector = -var_36_cvector;
			func_3390(var_71_float, var_72_cvector, var_73_cvector);
			return 18;
		}
		var_37_object = 0;
	}
	var_114_object = Obj();
	var_24_object = var_114_object;
	func_3278(var_114_object);
	return 18;
	
}


func_3836(var_289_bool, var_290_object)
{
	var_291_bool = 0; var_292_object = Obj();
	var_290_object = var_292_object;
	func_3933(var_292_object);
	if(var_291_bool != 0) {
		var_289_bool = 1;
		return 0;
	}
	var_289_bool = 0;
	return 0;
}


func_2303()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_4353(var_24_bool, var_25_object, var_26_string)
{
	var_28_bool = var_26_string == "unholster";
	if(var_28_bool != 0) {
		var_29_bool = 0; var_30_object = Obj();
		var_25_object = var_30_object;
		func_4637(var_29_bool, var_30_object);
		var_29_bool = var_24_bool;
		return 0;
	EMIT "GOTO 0x111f";
	}
	var_34_bool = var_26_string == "player_shot";
	if(var_34_bool != 0) {
		var_35_bool = 0; var_36_object = Obj();
		var_25_object = var_36_object;
		func_4650(var_35_bool, var_36_object);
		var_35_bool = var_24_bool;
		return 0;
	EMIT "GOTO 0x111f";
	}
	var_51_bool = var_26_string == "battle";
	if(var_51_bool != 0) {
		var_52_bool = 0; var_53_object = Obj();
		var_25_object = var_53_object;
		func_4673(var_52_bool, var_53_object);
		var_52_bool = var_24_bool;
		return 0;
	}
	var_24_bool = 0;
	return 0;
}


func_4869(var_154_string, var_155_int)
{
	var_156_string = ""; var_157_string = "";
	var_158_int = var_155_int;
	if(var_158_int != 0) {
		"idle" = "idle" + var_155_int;
	}
	var_157_string = var_154_string;
	return 2;
}


func_3846(var_401_bool, var_402_object)
{
	var_403_bool = 0; var_404_object = Obj();
	var_402_object = var_404_object;
	func_3940(var_404_object);
	if(var_403_bool != 0) {
		var_401_bool = 1;
		return 0;
	}
	var_401_bool = 0;
	return 0;
}


func_2825(var_0_object, var_1_object, var_2_object, var_39_object)
{
	var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0;
	var_0_object = var_39_object;
	var_53_cvector = CVector(0,0,0); var_54_float = 0;
	func_2795(var_52_float, var_53_cvector, (float)1.7453293800354004);
	var_53_cvector = var_48_cvector;
	var_49_float = var_48_cvector | var_48_cvector;
	var_84_bool = var_49_float < (float)2500.0;
	if(var_84_bool != 0) {
		var_85_cvector = CVector(0,0,0); var_86_float = 0;
		func_2795(var_52_float, var_85_cvector, (float)2.6179938316345215);
		var_85_cvector = var_48_cvector;
		var_49_float = var_48_cvector | var_48_cvector;
		var_88_bool = var_49_float < (float)2500.0;
		if(var_88_bool != 0) {
			var_90_float = sqrt(var_49_float);
			var_91_int = "Can't retreat, distance: " + var_90_float;
			Trace(var_91_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_93_float = GetByIndex(var_48_cvector, 0);
	var_94_float = GetByIndex(var_48_cvector, 2);
	Rotate(var_93_float, var_94_float);
	var_95_cvector = CVector(0,0,0);
	func_3176(var_95_cvector);
	var_1_object = var_95_cvector + var_48_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_2867:
	MovePoint(var_1_object, (int)1, var_50_bool);
	var_101_bool = var_50_bool;
	if(var_101_bool != 0) {
		var_102_bool = var_0_object == 0; //@ne
		if(var_102_bool != 0) {
			goto Label_2897;
		EMIT "GOTO 0xb4f";

		Label_2897:
			return 10;
		}
		var_103_cvector = CVector(0,0,0); var_104_float = 0;
		func_2795(var_52_float, var_103_cvector, (float)2.6179938316345215);
		var_103_cvector = var_51_cvector;
		var_52_float = var_51_cvector | var_51_cvector;
		var_106_bool = var_52_float >= (float)2500.0;
		if(var_106_bool != 0) {
			var_107_cvector = CVector(0,0,0);
			func_3176(var_107_cvector);
			var_1_object = var_107_cvector + var_51_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2897;
		}
	}
	var_110_bool = var_2_object == 0; //@nz
	if(var_110_bool == 1) goto Label_2867;
	
}


func_4876(var_105_int)
{
	var_105_int = 515567;
	return 0;
}


func_4878(var_104_int)
{
	var_104_int = 503352;
	return 0;
}


func_4880(var_106_string)
{
	var_106_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_3856(var_155_bool)
{
	var_157_int = 0;
	func_3668(var_157_int);
	var_155_bool = var_157_int == (int)1;
	return 0;
}


func_4882(var_107_string)
{
	var_107_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_4884(var_99_bool)
{
	var_99_bool = 0;
	return 0;
}


func_4886()
{
	var_25_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_26_bool = 0;
	func_4128((bool)0);
	return 0;
}


func_3863(var_190_bool)
{
	var_192_int = 0;
	func_3668(var_192_int);
	var_190_bool = var_192_int == (int)2;
	return 0;
}


func_3870(var_166_bool)
{
	var_168_int = 0;
	func_3668(var_168_int);
	var_166_bool = var_168_int == (int)3;
	return 0;
}


func_4894(var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	var_35_bool = GlobalVars[0];
	if(var_35_bool != 0) {
		IsOverrideActive(var_34_bool);
		var_36_bool = var_34_bool == 0; //@nz
		if(var_36_bool != 0) {
			var_37_object = Obj();
			var_32_object = var_37_object;
			func_4043(var_37_object);
		}
		return 2;
	EMIT "GOTO 0x132f";
	}
	var_44_object = Obj();
	var_32_object = var_44_object;
	func_4854(var_34_bool, var_44_object);
	return 2;
}


func_4385(var_58_object, var_59_string)
{
	var_61_bool = var_59_string == "unholster";
	if(var_61_bool != 0) {
		var_62_object = Obj();
		var_58_object = var_62_object;
		func_4642(var_62_object);
	} else {
		var_136_bool = var_59_string == "player_shot";
		if(var_136_bool != 0) {
			var_137_object = Obj();
			var_58_object = var_137_object;
			func_4665(var_137_object);
			goto Label_4409;
		}
		var_204_bool = var_59_string == "battle";
		if(var_204_bool == 0) goto Label_4409;
		var_205_object = Obj();
		var_58_object = var_205_object;
		func_4680(var_205_object);
	}
Label_4409:
	return 0;
	
}


func_3877(var_172_bool)
{
	var_174_int = 0;
	func_3668(var_174_int);
	var_172_bool = var_174_int == (int)4;
	return 0;
}


func_3884(var_178_bool)
{
	var_180_int = 0;
	func_3668(var_180_int);
	var_178_bool = var_180_int == (int)5;
	return 0;
}


func_4912()
{
	var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_int = 0; var_151_bool = 0; var_152_int = 0;
	var_150_int = 0;
	
Label_4914:
	var_154_string = ""; var_155_int = 0;
	var_150_int = var_155_int;
	func_4869(var_154_string, var_155_int);
	HasAnimation(var_151_bool, "all", var_154_string);
	var_159_bool = var_151_bool == 0; //@nz
	if(var_159_bool != 0) {
	} else {
		var_150_int = var_150_int + (int)1;
		goto Label_4914;
	}
	irand(var_152_int, var_150_int);
	var_161_string = ""; var_162_int = 0;
	var_152_int = var_162_int;
	func_4869(var_161_string, var_162_int);
	PlayAnimation("all", var_161_string);
	WaitForAnimEnd();
	return 6;
	
}


func_3891(var_196_bool)
{
	var_198_int = 0;
	func_3668(var_198_int);
	var_196_bool = var_198_int == (int)6;
	return 0;
}


func_1847()
{
	var_140_bool = 0;
	func_3415(var_140_bool);
	var_143_bool = var_140_bool == 0; //@nz
	if(var_143_bool != 0) {
		func_4609();
	}
	return 0;
}


func_4410(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	var_25_bool = 0;
	var_25_bool = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_22_object = var_27_object;
	func_4637(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_22_object = var_31_object;
		func_3196(var_30_bool, var_31_object);
		if(var_30_bool != 0) {
			var_25_bool = 1;
		}
	}
	if(var_25_bool != 0) {
		@@var_22_object:IsWeaponHolstered(var_24_bool);
		var_34_bool = var_24_bool == 0; //@nz
		if(var_34_bool != 0) {
			var_21_bool = 1;
			return 2;
		}
	}
	var_21_bool = 0;
	return 2;
}


func_3898(var_219_bool)
{
	var_221_int = 0;
	func_3668(var_221_int);
	var_219_bool = var_221_int == (int)7;
	return 0;
}


func_3390(var_26_object, var_29_cvector, var_30_cvector)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	GetScene(var_33_object);
	AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	var_37_object = Obj();
	var_26_object = var_37_object;
	func_3278(var_37_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3905(var_225_bool)
{
	var_227_int = 0;
	func_3668(var_227_int);
	var_225_bool = var_227_int == (int)8;
	return 0;
}


func_3912(var_202_bool)
{
	var_204_int = 0;
	func_3668(var_204_int);
	var_202_bool = var_204_int == (int)9;
	return 0;
}


func_4939()
{
	StopAnimation();
	return 0;
}


func_3404(var_96_object)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0);
	@@var_96_object:GetPosition(var_100_cvector);
	GetPosition(var_101_cvector);
	var_102_cvector = var_100_cvector - var_101_cvector;
	var_103_float = GetByIndex(var_102_cvector, 0);
	var_104_float = GetByIndex(var_102_cvector, 2);
	RotateAsync(var_103_float, var_104_float);
	return 6;
}


func_2379(var_73_object)
{
	Face(var_73_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_83_object = Obj();
	var_73_object = var_83_object;
	func_2444(var_75_cvector, var_76_bool, var_73_object, var_83_object);
	return 0;
}


func_4942(var_31_bool)
{
	var_31_bool = 1;
	return 0;
}


func_3919(var_208_bool)
{
	var_210_int = 0;
	func_3668(var_210_int);
	var_208_bool = var_210_int == (int)10;
	return 0;
}


func_4944(var_25_bool, var_26_object, var_27_object)
{
	var_29_bool = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_float = 0;
	var_26_object = var_30_object;
	var_27_object = var_31_object;
	func_4534(var_29_bool, var_30_object, var_31_object, (float)500.0);
	if(var_29_bool != 0) {
		SetProperty("ToDie", (bool)1);
		var_25_bool = 1;
		return 0;
	}
	var_25_bool = 0;
	return 0;
}


func_4433(var_37_object)
{
	var_38_object = Obj();
	var_37_object = var_38_object;
	func_4642(var_38_object);
	return 0;
}


func_3926(var_285_bool)
{
	var_287_int = 0;
	func_3668(var_287_int);
	var_285_bool = var_287_int == (int)11;
	return 0;
}


func_3415(var_140_bool)
{
	var_141_bool = 0; var_142_bool = 0;
	IsLoaded(var_142_bool);
	var_142_bool = var_140_bool;
	return 2;
}


func_4439(var_23_object)
{
	var_24_bool = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	func_3196(var_24_bool, var_25_object);
	if(var_24_bool != 0) {
		var_28_object = Obj();
		func_3597(var_28_object);
		ReportReputationChange(var_23_object, var_28_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_3420(var_56_bool, var_57_object, var_58_float)
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
	func_3603(var_83_cvector, var_84_cvector);
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
	func_4884(var_99_bool);
	if(var_99_bool != 0) {
	} else {
		HasAnimationTrack(var_76_bool, "head");
		var_101_bool = var_76_bool;
		if(var_101_bool == 0) goto Label_3483;
		LookAsyncCamera("head");
	}
Label_3483:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_56_bool = 1;
	return 18;
	
}


func_3933(var_291_bool)
{
	var_293_int = 0;
	func_3668(var_293_int);
	var_291_bool = var_293_int == (int)12;
	return 0;
}


func_4960(var_103_object)
{
	var_104_bool = 0; var_105_object = Obj();
	var_103_object = var_105_object;
	func_3196(var_104_bool, var_105_object);
	if(var_104_bool != 0) {
		var_108_object = Obj();
		func_3597(var_108_object);
		ReportReputationChange(var_103_object, var_108_object, (float)-0.10000000149011612, (bool)1);
		var_113_bool = 0;
		func_4128((bool)0);
	}
	func_4104();
	var_247_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_4452(var_21_bool, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj();
	var_26_bool = var_22_string == "heal";
	if(var_26_bool != 0) {
		FindActor(var_24_object, "player");
		var_28_bool = 0; var_29_object = Obj();
		var_24_object = var_29_object;
		func_4686(var_29_object);
		var_28_bool = var_21_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_21_bool = 0;
	return 2;
}


func_3940(var_403_bool)
{
	var_405_int = 0;
	func_3677(var_405_int);
	var_411_bool = var_405_int >= (int)12;
	if(var_411_bool != 0) {
		var_403_bool = 1;
		return 0;
	}
	var_403_bool = 0;
	return 0;
}


func_2414(var_0_object, var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0;
	GetPosition(var_42_cvector);
	@@@var_0_object:GetPosition(var_43_cvector);
	GetDirection(var_44_cvector);
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_42_cvector - var_43_cvector;
	func_3603(var_50_cvector, var_51_cvector);
	var_58_float = var_44_cvector * (float)0.75;
	var_49_cvector = var_50_cvector + var_58_float;
	func_3603(var_48_cvector, var_49_cvector);
	var_48_cvector = var_45_cvector;
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, (int)32, (float)7000.0);
	var_47_float = var_47_float - (int)100;
	var_63_bool = var_47_float < (int)0;
	if(var_63_bool != 0) {
		var_47_float = 0;
	}
	var_34_cvector = var_46_cvector * var_47_float;
	return 12;
}


func_3951(var_108_int)
{
	var_109_int = 0; var_110_int = 0;
	GetVariable("branch", var_110_int);
	var_113_bool = var_110_int == (int)0;
	if(var_113_bool != 0) {
		var_108_int = 1;
		return 2;
	EMIT "GOTO 0xf7e";
	}
	var_115_bool = var_110_int == (int)1;
	if(var_115_bool != 0) {
		var_108_int = 2;
		return 2;
	}
	var_108_int = 3;
	return 2;
}


func_4468(var_32_string)
{
	var_33_object = Obj(); var_34_object = Obj();
	var_36_bool = var_32_string == "heal";
	if(var_36_bool != 0) {
		FindActor(var_34_object, "player");
		var_34_object = Obj();
		func_4689();
		var_34_object = 0;
	}
	return 2;
}


func_3968(var_227_int)
{
	var_228_int = 0; var_229_int = 0;
	GetVariable("branch", var_229_int);
	var_229_int = var_227_int;
	return 2;
}


func_4481(var_29_int)
{
	var_31_bool = 0;
	func_4942(var_31_bool);
	if(var_31_bool != 0) {
		var_29_int = 2;
	} else {
		var_29_int = 0;
	}
	return 0;
	
}


func_2950(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3974(var_552_int, var_553_object)
{
	var_554_int = 0; var_555_int = 0;
	@@var_553_object:GetItemID(var_555_int);
	var_555_int = var_552_int;
	return 2;
}


func_4490(var_38_object)
{
	var_39_object = Obj();
	var_38_object = var_39_object;
	TaskCall(4);
	func_2104(var_40_object, var_39_object);
	TaskReturn();
	return 0;
}


func_3979(var_529_int, var_530_object, var_531_int)
{
	var_532_int = 0; var_533_int = 0; var_534_int = 0; var_535_string = ""; var_536_bool = 0; var_537_bool = 0; var_538_int = 0; var_539_int = 0; var_540_int = 0; var_541_int = 0; var_542_string = ""; var_543_bool = 0; var_544_bool = 0; var_545_int = 0;
	var_547_bool = var_531_int == (int)0;
	if(var_547_bool != 0) {
		func_3668((int)0);
		var_548_int = var_539_int;
		var_541_int = 1;

	Label_3989:
		var_549_bool = var_541_int <= var_539_int;
		if(var_549_bool != 0) {
			var_551_bool = var_541_int != (int)1;
			if(var_551_bool != 0) {
				"Price" = "Price" + var_541_int;
			}
			var_552_int = 0; var_553_object = Obj();
			var_530_object = var_553_object;
			func_3974(var_552_int, var_553_object);
			HasInvItemProperty(var_543_bool, var_552_int, var_542_string);
			var_556_bool = var_543_bool == 0; //@nz
			if(var_556_bool != 0) {
			} else {
				var_558_int = 0; var_559_object = Obj();
				var_530_object = var_559_object;
				func_3974(var_558_int, var_559_object);
				GetInvItemProperty((int)0, var_558_int, var_542_string);
		}
			var_540_int = var_529_int;
			return 14;
	}
		var_560_int = 0; var_561_object = Obj();
		var_530_object = var_561_object;
		func_3974(var_560_int, var_561_object);
		var_563_int = "BarterPrice" + var_531_int;
		HasInvItemProperty(var_544_bool, var_560_int, var_563_int);
		var_564_bool = var_544_bool == 0; //@nz
		if(var_564_bool != 0) {
			return 14;
		}
		var_565_int = 0; var_566_object = Obj();
		var_530_object = var_566_object;
		func_3974(var_565_int, var_566_object);
		var_568_int = "BarterPrice" + var_531_int;
		GetInvItemProperty(var_545_int, var_565_int, var_568_int);
		var_570_bool = var_545_int > (int)0;
		if(var_570_bool != 0) {
			var_545_int = (int)0;
			return 14;
		}
		var_529_int = -var_545_int;
		return 14;
	}
	var_541_int = var_541_int + (int)1;
	goto Label_3989;
	
}


func_2444(var_0_object, var_1_object, var_2_object, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0;
	var_0_object = var_83_object;
	var_94_cvector = CVector(0,0,0); var_95_float = 0;
	func_2414(var_93_float, var_94_cvector, (float)1.7453293800354004);
	var_94_cvector = var_89_cvector;
	var_90_float = var_89_cvector | var_89_cvector;
	var_125_bool = var_90_float < (float)2500.0;
	if(var_125_bool != 0) {
		var_126_cvector = CVector(0,0,0); var_127_float = 0;
		func_2414(var_93_float, var_126_cvector, (float)2.6179938316345215);
		var_126_cvector = var_89_cvector;
		var_90_float = var_89_cvector | var_89_cvector;
		var_129_bool = var_90_float < (float)2500.0;
		if(var_129_bool != 0) {
			var_131_float = sqrt(var_90_float);
			var_132_int = "Can't retreat, distance: " + var_131_float;
			Trace(var_132_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_134_float = GetByIndex(var_89_cvector, 0);
	var_135_float = GetByIndex(var_89_cvector, 2);
	Rotate(var_134_float, var_135_float);
	var_136_cvector = CVector(0,0,0);
	func_3176(var_136_cvector);
	var_1_object = var_136_cvector + var_89_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_2486:
	MovePoint(var_1_object, (int)1, var_91_bool);
	var_142_bool = var_91_bool;
	if(var_142_bool != 0) {
		var_143_bool = var_0_object == 0; //@ne
		if(var_143_bool != 0) {
			goto Label_2516;
		EMIT "GOTO 0x9d2";

		Label_2516:
			return 10;
		}
		var_144_cvector = CVector(0,0,0); var_145_float = 0;
		func_2414(var_93_float, var_144_cvector, (float)2.6179938316345215);
		var_144_cvector = var_92_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		var_147_bool = var_93_float >= (float)2500.0;
		if(var_147_bool != 0) {
			var_148_cvector = CVector(0,0,0);
			func_3176(var_148_cvector);
			var_1_object = var_148_cvector + var_92_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2516;
		}
	}
	var_151_bool = var_2_object == 0; //@nz
	if(var_151_bool == 1) goto Label_2486;
	
}


func_4498(var_29_int, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_object = var_32_object;
	func_3254(var_31_bool, var_32_object);
	if(var_31_bool != 0) {
		var_29_int = 2;
	} else {
		var_29_int = 0;
	}
	return 0;
	
}


func_2966(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	GetDirection(var_75_cvector);
	var_77_cvector = CVector(0,0,0); var_78_object = Obj();
	var_78_object = var_0_object;
	func_3181(var_77_cvector, var_78_object);
	var_77_cvector = var_76_cvector;
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_75_cvector = var_84_cvector;
	var_76_cvector = var_85_cvector;
	func_3619(var_83_float, var_84_cvector, var_85_cvector);
	var_72_bool = var_83_float >= (float)-0.3420201241970062;
	return 4;
}


func_4508(var_72_object)
{
	var_73_object = Obj();
	var_72_object = var_73_object;
	TaskCall(5);
	func_2379(var_73_object);
	TaskReturn();
	return 0;
}


func_3489()
{
	var_442_bool = 0; var_443_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_445_bool = 0;
	func_4884(var_445_bool);
	if(var_445_bool != 0) {
	} else {
		HasAnimationTrack(var_443_bool, "head");
		var_447_bool = var_443_bool;
		if(var_447_bool == 0) goto Label_3506;
		UnlookAsync("head");
	}
Label_3506:
	return 2;
	
}


func_4516(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj();
	var_75_object = var_78_object;
	func_3254(var_77_bool, var_78_object);
	if(var_77_bool != 0) {
		var_74_int = 2;
	} else {
		var_74_int = 0;
	}
	return 0;
	
}


func_2989(var_0_object, var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0;
	GetPosition(var_42_cvector);
	@@@var_0_object:GetPosition(var_43_cvector);
	GetDirection(var_44_cvector);
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_42_cvector - var_43_cvector;
	func_3603(var_50_cvector, var_51_cvector);
	var_58_float = var_44_cvector * (float)0.75;
	var_49_cvector = var_50_cvector + var_58_float;
	func_3603(var_48_cvector, var_49_cvector);
	var_48_cvector = var_45_cvector;
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, (int)32, (float)7000.0);
	var_47_float = var_47_float - (int)100;
	var_63_bool = var_47_float < (int)0;
	if(var_63_bool != 0) {
		var_47_float = 0;
	}
	var_34_cvector = var_46_cvector * var_47_float;
	return 12;
}


func_4526(var_111_object)
{
	var_112_object = Obj();
	var_111_object = var_112_object;
	TaskCall(6);
	func_2631(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
	return 0;
}


func_3507(var_364_string)
{
	var_365_bool = 0; var_366_float = 0; var_367_float = 0; var_368_bool = 0; var_369_float = 0; var_370_float = 0;
	lshHasAnimation(var_368_bool, var_364_string);
	var_371_bool = var_368_bool;
	if(var_371_bool != 0) {
		lshGetAnimTimes(var_364_string, var_369_float, var_370_float);
		lshPlayAnimation(var_369_float, var_370_float, (bool)0);
	} else {
		var_374_int = "Can't find lsh animation : " + var_364_string;
		Trace(var_374_int);
	}
	return 6;
	
}


func_4534(var_29_bool, var_30_object, var_31_object, var_32_float)
{
	var_33_string = ""; var_34_bool = 0; var_35_string = ""; var_36_bool = 0;
	var_37_bool = 0; var_38_object = Obj(); var_39_string = "";
	var_31_object = var_38_object;
	func_3201(var_37_bool, var_38_object, "class");
	var_46_bool = var_37_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	@@var_31_object:GetProperty("class", var_35_string);
	var_49_bool = var_35_string == "rat";
	if(var_49_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0x11d4";
	}
	var_51_bool = var_35_string == "rat_big";
	if(var_51_bool != 0) {
		var_29_bool = 0;
		return 4;
	EMIT "GOTO 0x11d4";
	}
	var_53_bool = var_35_string == "dog";
	if(var_53_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	CanSee(var_36_bool, var_30_object);
	var_54_bool = 0;
	var_54_bool = 1;
	var_55_bool = var_36_bool;
	if(var_55_bool != 1) {
		var_56_float = 0; var_57_object = Obj();
		var_30_object = var_57_object;
		func_3188(var_56_float, var_57_object);
		var_64_float = var_32_float * var_32_float;
		var_65_bool = var_56_float <= var_64_float;
		if(var_65_bool != 1) {
			var_54_bool = 0;
		}
	}
	if(var_54_bool != 0) {
		var_29_bool = 1;
		return 4;
	}
	CanSee(var_36_bool, var_31_object);
	var_66_bool = 0;
	var_66_bool = 1;
	var_67_bool = var_36_bool;
	if(var_67_bool != 1) {
		var_68_float = 0; var_69_object = Obj();
		var_31_object = var_69_object;
		func_3188(var_68_float, var_69_object);
		var_70_float = var_32_float * var_32_float;
		var_71_bool = var_68_float <= var_70_float;
		if(var_71_bool != 1) {
			var_66_bool = 0;
		}
	}
	if(var_66_bool != 0) {
		var_29_bool = 1;
		return 4;
	}
	var_29_bool = 0;
	return 4;
}


func_3523(var_136_string, var_137_bool)
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


func_3019(var_0_object, var_1_object, var_2_object, var_138_object)
{
	var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_bool = 0; var_145_cvector = CVector(0,0,0); var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_bool = 0; var_150_cvector = CVector(0,0,0); var_151_float = 0;
	var_0_object = var_138_object;
	var_152_cvector = CVector(0,0,0); var_153_float = 0;
	func_2989(var_151_float, var_152_cvector, (float)1.7453293800354004);
	var_152_cvector = var_147_cvector;
	var_148_float = var_147_cvector | var_147_cvector;
	var_178_bool = var_148_float < (float)2500.0;
	if(var_178_bool != 0) {
		var_179_cvector = CVector(0,0,0); var_180_float = 0;
		func_2989(var_151_float, var_179_cvector, (float)2.6179938316345215);
		var_179_cvector = var_147_cvector;
		var_148_float = var_147_cvector | var_147_cvector;
		var_182_bool = var_148_float < (float)2500.0;
		if(var_182_bool != 0) {
			var_184_float = sqrt(var_148_float);
			var_185_int = "Can't retreat, distance: " + var_184_float;
			Trace(var_185_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_187_float = GetByIndex(var_147_cvector, 0);
	var_188_float = GetByIndex(var_147_cvector, 2);
	Rotate(var_187_float, var_188_float);
	var_189_cvector = CVector(0,0,0);
	func_3176(var_189_cvector);
	var_1_object = var_189_cvector + var_147_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_3061:
	MovePoint(var_1_object, (int)1, var_149_bool);
	var_193_bool = var_149_bool;
	if(var_193_bool != 0) {
		var_194_bool = var_0_object == 0; //@ne
		if(var_194_bool != 0) {
			goto Label_3091;
		EMIT "GOTO 0xc11";

		Label_3091:
			return 10;
		}
		var_195_cvector = CVector(0,0,0); var_196_float = 0;
		func_2989(var_151_float, var_195_cvector, (float)2.6179938316345215);
		var_195_cvector = var_150_cvector;
		var_151_float = var_150_cvector | var_150_cvector;
		var_198_bool = var_151_float >= (float)2500.0;
		if(var_198_bool != 0) {
			var_199_cvector = CVector(0,0,0);
			func_3176(var_199_cvector);
			var_1_object = var_199_cvector + var_150_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_3091;
		}
	}
	var_202_bool = var_2_object == 0; //@nz
	if(var_202_bool == 1) goto Label_3061;
	
}


func_4043(var_37_object)
{
	var_38_int = 0;
	func_3968(var_38_int);
	var_43_bool = var_38_int == (int)1;
	if(var_43_bool != 0) {
		WorkWithCorpse(var_37_object);
	} else {
		Barter(var_37_object);
	}
	return 0;
	
}


func_3538(var_47_object)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0);
	@@var_47_object:GetEyesHeight(var_50_float);
	var_51_cvector = CVector(0.0, 0.0, 0.0);
	var_52_float = GetByIndex(var_51_cvector, 1);
	var_50_float = var_52_float;
	SetByIndex(var_51_cvector, 1) = var_52_float;
	LookAsync(var_47_object, "head", var_51_cvector);
	return 4;
}


func_4056(var_32_int, var_33_int)
{
	var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0;
	var_47_bool = var_32_int > var_33_int;
	if(var_47_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_45_int = 0;
	var_49_bool = var_32_int != var_33_int;
	if(var_49_bool != 0) {
		var_50_int = var_33_int - var_32_int;
		irand(var_45_int, var_50_int);
	} else {
		var_59_bool = var_32_int == (int)0;
		if(var_59_bool == 0) goto Label_4074;
		return 4;
	}
Label_4074:
	var_45_int = var_45_int + var_32_int;
	var_52_bool = var_45_int == (int)0;
	if(var_52_bool != 0) {
		return 4;
	}
	var_53_int = 0; var_54_string = "";
	func_4303(var_53_int, "Money");
	AddItem(var_46_bool, var_53_int, (int)0, var_45_int);
	return 4;
	
}


func_3549()
{
	var_23_bool = 0;
	func_4884(var_23_bool);
	if(var_23_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3556(var_46_string)
{
	var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
	IsExisting3DSound(var_55_bool, var_46_string);
	var_63_bool = var_55_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_56_int = 0;

	Label_3562:
		var_65_int = var_56_int + (int)1;
		var_66_int = var_46_string + var_65_int;
		IsExisting3DSound(var_57_bool, var_66_int);
		var_67_bool = var_57_bool == 0; //@nz
		if(var_67_bool != 0) {
		} else {
			var_56_int = var_56_int + (int)1;
			goto Label_3562;
		}
		var_68_bool = var_56_int == 0; //@nz
		if(var_68_bool != 0) {
			return 16;
		}
		irand(var_58_int, var_56_int);
		var_70_int = var_58_int + (int)1;
		var_46_string = var_46_string + var_70_int;
	}
	Is3DSoundLoaded(var_59_bool, var_46_string);
	var_71_bool = var_59_bool;
	if(var_71_bool != 0) {
		GetEyesHeight(var_60_float);
		GetDirection(var_61_cvector);
		var_62_cvector = var_61_cvector * (int)50;
		var_73_float = GetByIndex(var_62_cvector, 1);
		var_73_float = var_73_float + var_60_float;
		SetByIndex(var_62_cvector, 1) = var_73_float;
		PlayGlobalSound(var_46_string, var_62_cvector);
	}
	return 16;
	
}


func_4087(var_233_string)
{
	var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; var_237_object = Obj(); var_238_int = 0; var_239_bool = 0;
	CreateInvItem(var_237_object);
	@@var_237_object:SetItemName(var_233_string);
	@@var_237_object:SetProperty("Organ", (int)1);
	@@var_237_object:GetItemID(var_238_int);
	AddItem(var_239_bool, var_237_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_4600(var_23_int)
{
	var_23_int = 2;
	return 0;
}


func_4603(var_31_object)
{
	var_32_object = Obj();
	var_31_object = var_32_object;
	func_4894(var_32_object);
	return 0;
}


