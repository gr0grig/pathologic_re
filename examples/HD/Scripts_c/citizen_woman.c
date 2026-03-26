// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectVector/1,GetVariable/2,GetGameTime/1,HasInvItemProperty/3,GetInvItemProperty/3,FindActor/2,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,HasAnimation/3,CanSee/2,CreateIntVector/1,ChooseItem/4,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |A:SetReturnValue|W:branch|A:GetItemID|W:Price|W:BarterPrice|W:player|W:reputation|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:SetProperty|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:class|W:rat|W:rat_big|W:dog|A:GetSubContainerCount|A:GetItemCount|A:GetItem|W:HasDurability|W:durability|W:repair.xml|W:money|A:SetItem|W:Category|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
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
// @TASK_3: vars=bool,bool,bool params=0
// @EVENT_0: op=0x72d vars=object
// @EVENT_17: op=0x741 vars=object
// @EVENT_30: op=0x759 vars=object,object,bool
// @EVENT_40: op=0x775 vars=object
// @EVENT_42: op=0x789 vars=object,string
// @EVENT_26: op=0x7ae vars=string
// @EVENT_1: op=0x7bc vars=object
// @EVENT_3: op=0x7cf vars=object
// @EVENT_7: op=0x7d5 vars=int
// @EVENT_6: op=0x7e1 vars=
// @EVENT_41: op=0x7f8 vars=object
// @EVENT_10: op=0x869 vars=object
// @EVENT_28: op=0x86d vars=
// @TASK_4: vars= params=0
// @EVENT_0: op=0x886 vars=object
// @EVENT_17: op=0x89a vars=object
// @EVENT_30: op=0x8b2 vars=object,object,bool
// @EVENT_40: op=0x8ce vars=object
// @EVENT_42: op=0x8e2 vars=object,string
// @EVENT_26: op=0x907 vars=string
// @EVENT_6: op=0x915 vars=
// @EVENT_1: op=0x91c vars=object
// @TASK_5: vars=object params=1
// @EVENT_0: op=0x9b8 vars=object
// @EVENT_17: op=0x9cc vars=object
// @EVENT_30: op=0x9e4 vars=object,object,bool
// @EVENT_40: op=0xa00 vars=object
// @EVENT_42: op=0xa14 vars=object,string
// @EVENT_26: op=0xa39 vars=string
// @EVENT_41: op=0xa52 vars=object
// @EVENT_7: op=0xa5b vars=int
// @EVENT_6: op=0xa7e vars=
// @EVENT_1: op=0xa85 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0xaaf vars=
// @EVENT_7: op=0xb1d vars=int
// @EVENT_41: op=0xb58 vars=object
// @TASK_7: vars=object,cvector,bool params=1
// @EVENT_7: op=0xbd8 vars=int
// @EVENT_41: op=0xc13 vars=object
// @TASK_8: vars=object,cvector,bool params=1
// @EVENT_6: op=0xc2c vars=
// @EVENT_7: op=0xc9a vars=int
// @EVENT_41: op=0xcd5 vars=object
// @TASK_9: vars=object,cvector,bool params=1
// @EVENT_6: op=0xcee vars=
// @EVENT_7: op=0xd5c vars=int
// @EVENT_41: op=0xd97 vars=object
// @STANDALONE_EVENT_16: op=0x1232 vars=object,string
// @STANDALONE_EVENT_41: op=0x123f vars=object
// @STANDALONE_EVENT_22: op=0x1245 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x124d vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x289,0x29f,0x679,0x696,0x6f5,0x70f,0x711,0x713,0x7ae,0x7bc,0x7cf,0x7d5,0x7e1,0x7f8,0x869,0x907,0x915,0x91c,0xa39,0xa52,0xa7e,0xa85,0xa93,0xaaf,0xb58,0xc13,0xc2c,0xcd5,0xcee,0xd97,0xf6b,0xf73,0xf7c,0xf86,0xfad,0xfb2,0xfbe,0xfca,0xfd6,0xfe0,0xfea,0xff4,0xffe,0x1008,0x1012,0x101c,0x1026,0x1030,0x103a,0x1044,0x104e,0x1058,0x105f,0x1066,0x106d,0x1074,0x107b,0x1082,0x1089,0x1090,0x1097,0x109e,0x10a5,0x10ac,0x1121,0x122a,0x123f,0x1245,0x124d,0x1257,0x1277,0x12a7,0x12ad,0x12ef,0x12f8,0x1300,0x130a,0x1312,0x131c,0x1366,0x1369,0x136b,0x136e,0x1370,0x1373,0x137f,0x1396,0x139e,0x13a5,0x13ab,0x13ae,0x1453,0x1488,0x1491

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	if((int)1 != 0) {
		func_3877();
		var_26_bool = var_22_bool == (int)45638;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_4013(var_28_object);
		}
		var_31_bool = var_22_bool == (int)45639;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_4013(var_33_object);
		}
		var_35_bool = var_22_bool == (int)45643;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4013(var_37_object);
		}
		var_39_bool = var_22_bool == (int)45664;
		if(var_39_bool != 0) {
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4013(var_41_object);
		}
		var_43_bool = var_22_bool == (int)40043;
		if(var_43_bool != 0) {
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_4013(var_45_object);
		}
		var_47_bool = var_21_cvector == (int)45636;
		if(var_47_bool != 0) {
			var_48_bool = 0; var_49_object = Obj();
			var_49_object = var_1_object;
			func_4042(var_49_object);
			if(var_48_bool != 0) {
				var_56_string = "";
				func_649(var_22_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543180);
				@@@var_0_object:ClearReplies();
				var_74_bool = 0;
				var_74_bool = 1;
				var_75_bool = 0;
				var_75_bool = 1;
				var_76_bool = 0;
				var_76_bool = 1;
				var_77_bool = 0; var_78_object = Obj();
				var_78_object = var_1_object;
				func_4054(var_77_bool, var_78_object);
				if(var_77_bool != 1) {
					var_88_bool = 0; var_89_object = Obj();
					var_89_object = var_1_object;
					func_4074(var_88_bool, var_89_object);
					if(var_88_bool != 1) {
						var_76_bool = 0;
					}
				}
				if(var_76_bool != 1) {
					var_94_bool = 0; var_95_object = Obj();
					var_95_object = var_1_object;
					func_4084(var_94_bool, var_95_object);
					if(var_94_bool != 1) {
						var_75_bool = 0;
					}
				}
				if(var_75_bool != 1) {
					var_100_bool = 0; var_101_object = Obj();
					var_101_object = var_1_object;
					func_4094(var_100_bool, var_101_object);
					if(var_100_bool != 1) {
						var_74_bool = 0;
					}
				}
				if(var_74_bool != 0) {
					@@@var_0_object:AddReply((int)543189, (int)45648, (int)45645);
				}
				var_109_bool = 0;
				var_109_bool = 1;
				var_110_bool = 0;
				var_110_bool = 1;
				var_111_bool = 0;
				var_111_bool = 1;
				var_112_bool = 0; var_113_object = Obj();
				var_113_object = var_1_object;
				func_4064(var_112_bool, var_113_object);
				if(var_112_bool != 1) {
					var_118_bool = 0; var_119_object = Obj();
					var_119_object = var_1_object;
					func_4104(var_118_bool, var_119_object);
					if(var_118_bool != 1) {
						var_111_bool = 0;
					}
				}
				if(var_111_bool != 1) {
					var_124_bool = 0; var_125_object = Obj();
					var_125_object = var_1_object;
					func_4134(var_124_bool, var_125_object);
					if(var_124_bool != 1) {
						var_110_bool = 0;
					}
				}
				if(var_110_bool != 1) {
					var_130_bool = 0; var_131_object = Obj();
					var_131_object = var_1_object;
					func_4144(var_130_bool, var_131_object);
					if(var_130_bool != 1) {
						var_109_bool = 0;
					}
				}
				if(var_109_bool != 0) {
					@@@var_0_object:AddReply((int)543190, (int)45655, (int)45646);
				}
				var_139_bool = 0;
				var_139_bool = 1;
				var_140_bool = 0;
				var_140_bool = 1;
				var_141_bool = 0; var_142_object = Obj();
				var_142_object = var_1_object;
				func_4114(var_141_bool, var_142_object);
				if(var_141_bool != 1) {
					var_147_bool = 0; var_148_object = Obj();
					var_148_object = var_1_object;
					func_4124(var_147_bool, var_148_object);
					if(var_147_bool != 1) {
						var_140_bool = 0;
					}
				}
				if(var_140_bool != 1) {
					var_153_bool = 0; var_154_object = Obj();
					var_154_object = var_1_object;
					func_4074(var_153_bool, var_154_object);
					if(var_153_bool != 1) {
						var_139_bool = 0;
					}
				}
				if(var_139_bool != 0) {
					@@@var_0_object:AddReply((int)543191, (int)45656, (int)45647);
				}
				var_158_bool = 0;
				var_158_bool = 1;
				var_159_bool = 0;
				var_159_bool = 1;
				var_160_bool = 0; var_161_object = Obj();
				var_161_object = var_1_object;
				func_4054(var_160_bool, var_161_object);
				if(var_160_bool != 1) {
					var_162_bool = 0; var_163_object = Obj();
					var_163_object = var_1_object;
					func_4064(var_162_bool, var_163_object);
					if(var_162_bool != 1) {
						var_159_bool = 0;
					}
				}
				if(var_159_bool != 1) {
					var_164_bool = 0; var_165_object = Obj();
					var_165_object = var_1_object;
					func_4074(var_164_bool, var_165_object);
					if(var_164_bool != 1) {
						var_158_bool = 0;
					}
				}
				if(var_158_bool != 0) {
					@@@var_0_object:AddReply((int)543182, (int)-1, (int)45638);
				}
				var_169_bool = 0;
				var_169_bool = 1;
				var_170_bool = 0;
				var_170_bool = 1;
				var_171_bool = 0;
				var_171_bool = 1;
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_4054(var_172_bool, var_173_object);
				if(var_172_bool != 1) {
					var_174_bool = 0; var_175_object = Obj();
					var_175_object = var_1_object;
					func_4064(var_174_bool, var_175_object);
					if(var_174_bool != 1) {
						var_171_bool = 0;
					}
				}
				if(var_171_bool != 1) {
					var_176_bool = 0; var_177_object = Obj();
					var_177_object = var_1_object;
					func_4074(var_176_bool, var_177_object);
					if(var_176_bool != 1) {
						var_170_bool = 0;
					}
				}
				if(var_170_bool != 1) {
					var_178_bool = 0; var_179_object = Obj();
					var_179_object = var_1_object;
					func_4084(var_178_bool, var_179_object);
					if(var_178_bool != 1) {
						var_169_bool = 0;
					}
				}
				if(var_169_bool != 0) {
					@@@var_0_object:AddReply((int)543183, (int)-1, (int)45639);
				}
				var_183_bool = 0;
				var_183_bool = 1;
				var_184_bool = 0;
				var_184_bool = 1;
				var_185_bool = 0;
				var_185_bool = 1;
				var_186_bool = 0;
				var_186_bool = 1;
				var_187_bool = 0; var_188_object = Obj();
				var_188_object = var_1_object;
				func_4084(var_187_bool, var_188_object);
				if(var_187_bool != 1) {
					var_189_bool = 0; var_190_object = Obj();
					var_190_object = var_1_object;
					func_4094(var_189_bool, var_190_object);
					if(var_189_bool != 1) {
						var_186_bool = 0;
					}
				}
				if(var_186_bool != 1) {
					var_191_bool = 0; var_192_object = Obj();
					var_192_object = var_1_object;
					func_4104(var_191_bool, var_192_object);
					if(var_191_bool != 1) {
						var_185_bool = 0;
					}
				}
				if(var_185_bool != 1) {
					var_193_bool = 0; var_194_object = Obj();
					var_194_object = var_1_object;
					func_4114(var_193_bool, var_194_object);
					if(var_193_bool != 1) {
						var_184_bool = 0;
					}
				}
				if(var_184_bool != 1) {
					var_195_bool = 0; var_196_object = Obj();
					var_196_object = var_1_object;
					func_4124(var_195_bool, var_196_object);
					if(var_195_bool != 1) {
						var_183_bool = 0;
					}
				}
				if(var_183_bool != 0) {
					@@@var_0_object:AddReply((int)543187, (int)-1, (int)45643);
				}
				var_200_bool = 0;
				var_200_bool = 1;
				var_201_bool = 0;
				var_201_bool = 1;
				var_202_bool = 0;
				var_202_bool = 1;
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_4134(var_203_bool, var_204_object);
				if(var_203_bool != 1) {
					var_205_bool = 0; var_206_object = Obj();
					var_206_object = var_1_object;
					func_4144(var_205_bool, var_206_object);
					if(var_205_bool != 1) {
						var_202_bool = 0;
					}
				}
				if(var_202_bool != 1) {
					var_207_bool = 0; var_208_object = Obj();
					var_208_object = var_1_object;
					func_4154(var_207_bool, var_208_object);
					if(var_207_bool != 1) {
						var_201_bool = 0;
					}
				}
				if(var_201_bool != 1) {
					var_213_bool = 0; var_214_object = Obj();
					var_214_object = var_1_object;
					func_4164(var_213_bool, var_214_object);
					if(var_213_bool != 1) {
						var_200_bool = 0;
					}
				}
				if(var_200_bool != 0) {
					@@@var_0_object:AddReply((int)543208, (int)-1, (int)45664);
				}
				var_222_bool = 0;
				var_222_bool = 1;
				var_223_bool = 0;
				var_223_bool = 1;
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_4054(var_224_bool, var_225_object);
				if(var_224_bool != 1) {
					var_226_bool = 0; var_227_object = Obj();
					var_227_object = var_1_object;
					func_4064(var_226_bool, var_227_object);
					if(var_226_bool != 1) {
						var_223_bool = 0;
					}
				}
				if(var_223_bool != 1) {
					var_228_bool = 0; var_229_object = Obj();
					var_229_object = var_1_object;
					func_4074(var_228_bool, var_229_object);
					if(var_228_bool != 1) {
						var_222_bool = 0;
					}
				}
				if(var_222_bool != 0) {
					@@@var_0_object:AddReply((int)543181, (int)-1, (int)45637);
				}
				var_233_bool = 0;
				var_233_bool = 1;
				var_234_bool = 0;
				var_234_bool = 1;
				var_235_bool = 0; var_236_object = Obj();
				var_236_object = var_1_object;
				func_4084(var_235_bool, var_236_object);
				if(var_235_bool != 1) {
					var_237_bool = 0; var_238_object = Obj();
					var_238_object = var_1_object;
					func_4094(var_237_bool, var_238_object);
					if(var_237_bool != 1) {
						var_234_bool = 0;
					}
				}
				if(var_234_bool != 1) {
					var_239_bool = 0; var_240_object = Obj();
					var_240_object = var_1_object;
					func_4104(var_239_bool, var_240_object);
					if(var_239_bool != 1) {
						var_233_bool = 0;
					}
				}
				if(var_233_bool != 0) {
					@@@var_0_object:AddReply((int)543184, (int)-1, (int)45640);
				}
				var_244_bool = 0;
				var_244_bool = 1;
				var_245_bool = 0;
				var_245_bool = 1;
				var_246_bool = 0;
				var_246_bool = 1;
				var_247_bool = 0; var_248_object = Obj();
				var_248_object = var_1_object;
				func_4074(var_247_bool, var_248_object);
				if(var_247_bool != 1) {
					var_249_bool = 0; var_250_object = Obj();
					var_250_object = var_1_object;
					func_4104(var_249_bool, var_250_object);
					if(var_249_bool != 1) {
						var_246_bool = 0;
					}
				}
				if(var_246_bool != 1) {
					var_251_bool = 0; var_252_object = Obj();
					var_252_object = var_1_object;
					func_4114(var_251_bool, var_252_object);
					if(var_251_bool != 1) {
						var_245_bool = 0;
					}
				}
				if(var_245_bool != 1) {
					var_253_bool = 0; var_254_object = Obj();
					var_254_object = var_1_object;
					func_4124(var_253_bool, var_254_object);
					if(var_253_bool != 1) {
						var_244_bool = 0;
					}
				}
				if(var_244_bool != 0) {
					@@@var_0_object:AddReply((int)543185, (int)-1, (int)45641);
				}
				var_258_bool = 0;
				var_258_bool = 1;
				var_259_bool = 0;
				var_259_bool = 1;
				var_260_bool = 0; var_261_object = Obj();
				var_261_object = var_1_object;
				func_4134(var_260_bool, var_261_object);
				if(var_260_bool != 1) {
					var_262_bool = 0; var_263_object = Obj();
					var_263_object = var_1_object;
					func_4144(var_262_bool, var_263_object);
					if(var_262_bool != 1) {
						var_259_bool = 0;
					}
				}
				if(var_259_bool != 1) {
					var_264_bool = 0; var_265_object = Obj();
					var_265_object = var_1_object;
					func_4154(var_264_bool, var_265_object);
					if(var_264_bool != 1) {
						var_258_bool = 0;
					}
				}
				if(var_258_bool != 0) {
					@@@var_0_object:AddReply((int)543186, (int)-1, (int)45642);
				}
				var_269_bool = 0;
				var_269_bool = 1;
				var_270_bool = 0;
				var_270_bool = 1;
				var_271_bool = 0;
				var_271_bool = 1;
				var_272_bool = 0;
				var_272_bool = 1;
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_4104(var_273_bool, var_274_object);
				if(var_273_bool != 1) {
					var_275_bool = 0; var_276_object = Obj();
					var_276_object = var_1_object;
					func_4124(var_275_bool, var_276_object);
					if(var_275_bool != 1) {
						var_272_bool = 0;
					}
				}
				if(var_272_bool != 1) {
					var_277_bool = 0; var_278_object = Obj();
					var_278_object = var_1_object;
					func_4134(var_277_bool, var_278_object);
					if(var_277_bool != 1) {
						var_271_bool = 0;
					}
				}
				if(var_271_bool != 1) {
					var_279_bool = 0; var_280_object = Obj();
					var_280_object = var_1_object;
					func_4164(var_279_bool, var_280_object);
					if(var_279_bool != 1) {
						var_270_bool = 0;
					}
				}
				if(var_270_bool != 1) {
					var_281_bool = 0; var_282_object = Obj();
					var_282_object = var_1_object;
					func_4144(var_281_bool, var_282_object);
					if(var_281_bool != 1) {
						var_269_bool = 0;
					}
				}
				if(var_269_bool != 0) {
					@@@var_0_object:AddReply((int)543188, (int)-1, (int)45644);
				}
				return 0;
			}
			var_286_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538168, (int)-1, (int)40043);
			var_291_bool = 0;
			var_291_bool = 0;
			var_292_bool = 0; var_293_object = Obj();
			var_293_object = var_1_object;
			func_4054(var_292_bool, var_293_object);
			if(var_292_bool != 0) {
				var_294_bool = 0; var_295_object = Obj();
				var_295_object = var_1_object;
				func_4018(var_295_object);
				if(var_294_bool != 0) {
					var_291_bool = 1;
				}
			}
			if(var_291_bool != 0) {
				@@@var_0_object:AddReply((int)538169, (int)40045, (int)40044);
			}
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0;
			var_304_bool = 0;
			var_305_bool = 0; var_306_object = Obj();
			var_306_object = var_1_object;
			func_4054(var_305_bool, var_306_object);
			if(var_305_bool != 0) {
				var_307_bool = 0; var_308_object = Obj();
				var_308_object = var_1_object;
				func_4174(var_307_bool, var_308_object);
				if(var_307_bool != 0) {
					var_304_bool = 1;
				}
			}
			if(var_304_bool != 0) {
				var_318_bool = 0; var_319_object = Obj();
				var_319_object = var_1_object;
				func_4018(var_319_object);
				if(var_318_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)538179, (int)40055, (int)40054);
			}
			var_323_bool = 0;
			var_323_bool = 0;
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_4064(var_324_bool, var_325_object);
			if(var_324_bool != 0) {
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_4018(var_327_object);
				if(var_326_bool != 0) {
					var_323_bool = 1;
				}
			}
			if(var_323_bool != 0) {
				@@@var_0_object:AddReply((int)538190, (int)40067, (int)40066);
			}
			var_331_bool = 0;
			var_331_bool = 1;
			var_332_bool = 0; var_333_object = Obj();
			var_333_object = var_1_object;
			func_4018(var_333_object);
			if(var_332_bool != 1) {
				var_334_bool = 0; var_335_object = Obj();
				var_335_object = var_1_object;
				func_4030(var_335_object);
				if(var_334_bool != 1) {
					var_331_bool = 0;
				}
			}
			if(var_331_bool != 0) {
				@@@var_0_object:AddReply((int)538204, (int)-1, (int)40081);
			}
			@@@var_0_object:AddReply((int)538205, (int)-1, (int)40082);
			return 0;
		}
		var_347_bool = var_21_cvector == (int)40067;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538192, (int)40069, (int)40068);
			@@@var_0_object:AddReply((int)538203, (int)40069, (int)40079);
			return 0;
		}
		var_357_bool = var_21_cvector == (int)40069;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538193);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538194, (int)40071, (int)40070);
			@@@var_0_object:AddReply((int)538202, (int)-1, (int)40078);
			return 0;
		}
		var_367_bool = var_21_cvector == (int)40071;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538195);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538196, (int)40073, (int)40072);
			@@@var_0_object:AddReply((int)538201, (int)-1, (int)40077);
			return 0;
		}
		var_377_bool = var_21_cvector == (int)40073;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538198, (int)-1, (int)40074);
			@@@var_0_object:AddReply((int)538199, (int)-1, (int)40075);
			@@@var_0_object:AddReply((int)538200, (int)-1, (int)40076);
			return 0;
		}
		var_390_bool = var_21_cvector == (int)40055;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538181, (int)40057, (int)40056);
			@@@var_0_object:AddReply((int)538188, (int)40057, (int)40063);
			@@@var_0_object:AddReply((int)538189, (int)-1, (int)40065);
			return 0;
		}
		var_403_bool = var_21_cvector == (int)40057;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538183, (int)40059, (int)40058);
			@@@var_0_object:AddReply((int)538187, (int)-1, (int)40062);
			return 0;
		}
		var_413_bool = var_21_cvector == (int)40059;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538185, (int)-1, (int)40060);
			@@@var_0_object:AddReply((int)538186, (int)-1, (int)40061);
			return 0;
		}
		var_423_bool = var_21_cvector == (int)40045;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538171, (int)40047, (int)40046);
			@@@var_0_object:AddReply((int)538175, (int)40051, (int)40050);
			@@@var_0_object:AddReply((int)538178, (int)-1, (int)40053);
			return 0;
		}
		var_436_bool = var_21_cvector == (int)40051;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538177, (int)-1, (int)40052);
			return 0;
		}
		var_443_bool = var_21_cvector == (int)40047;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538173, (int)-1, (int)40048);
			@@@var_0_object:AddReply((int)538174, (int)-1, (int)40049);
			return 0;
		}
		var_453_bool = var_21_cvector == (int)45656;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543205, (int)-1, (int)45661);
			@@@var_0_object:AddReply((int)543206, (int)-1, (int)45662);
			@@@var_0_object:AddReply((int)543207, (int)-1, (int)45663);
			return 0;
		}
		var_466_bool = var_21_cvector == (int)45655;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_649(var_22_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543201, (int)-1, (int)45657);
			@@@var_0_object:AddReply((int)543202, (int)-1, (int)45658);
			var_475_bool = 0; var_476_object = Obj();
			var_476_object = var_1_object;
			func_4064(var_475_bool, var_476_object);
			if(var_475_bool != 0) {
				@@@var_0_object:AddReply((int)543203, (int)-1, (int)45659);
			}
			var_480_bool = 0; var_481_object = Obj();
			var_481_object = var_1_object;
			func_4104(var_480_bool, var_481_object);
			if(var_480_bool != 0) {
				@@@var_0_object:AddReply((int)543204, (int)-1, (int)45660);
			}
			return 0;
		}
		var_486_bool = var_21_cvector == (int)45648;
		if(var_486_bool != 0) {
			var_487_bool = 0; var_488_object = Obj();
			var_488_object = var_1_object;
			func_4054(var_487_bool, var_488_object);
			if(var_487_bool != 0) {
				var_489_string = "";
				func_649(var_22_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543192);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)543193, (int)-1, (int)45649);
				@@@var_0_object:AddReply((int)543194, (int)-1, (int)45650);
				@@@var_0_object:AddReply((int)543195, (int)-1, (int)45651);
				return 0;
			}
			var_500_bool = 0;
			var_500_bool = 1;
			var_501_bool = 0;
			var_501_bool = 1;
			var_502_bool = 0; var_503_object = Obj();
			var_503_object = var_1_object;
			func_4074(var_502_bool, var_503_object);
			if(var_502_bool != 1) {
				var_504_bool = 0; var_505_object = Obj();
				var_505_object = var_1_object;
				func_4084(var_504_bool, var_505_object);
				if(var_504_bool != 1) {
					var_501_bool = 0;
				}
			}
			if(var_501_bool != 1) {
				var_506_bool = 0; var_507_object = Obj();
				var_507_object = var_1_object;
				func_4094(var_506_bool, var_507_object);
				if(var_506_bool != 1) {
					var_500_bool = 0;
				}
			}
			if(var_500_bool != 0) {
				var_508_string = "";
				func_649(var_22_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543196);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)543197, (int)-1, (int)45653);
				@@@var_0_object:AddReply((int)543198, (int)-1, (int)45654);
				return 0;
			}
		}
		var_3_string = true;
		var_516_bool = 0;
		func_5226(var_516_bool);
		if(var_516_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2a0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_4976(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_28_object = Obj();
		var_21_bool = var_28_object;
		func_4979(var_28_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_4985();
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
	func_4976(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_2024(var_23_int);
		}
		var_31_object = Obj();
		var_21_bool = var_31_object;
		func_4979(var_31_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_object = Obj();
	var_21_bool = var_24_object;
	func_4781(var_24_object);
	var_33_int = 0; var_34_object = Obj();
	var_21_bool = var_34_object;
	func_4864(var_33_int, var_34_object);
	var_33_int = var_23_int;
	var_70_bool = var_23_int > (int)0;
	if(var_70_bool != 0) {
		var_72_bool = var_23_int > (int)1;
		if(var_72_bool != 0) {
			func_2024(var_23_int);
		}
		var_74_object = Obj();
		var_21_bool = var_74_object;
		func_4874(var_74_object);
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
	func_5256(var_27_object, var_28_object, var_29_bool);
	if(var_26_bool != 0) {
		var_73_int = 0; var_74_object = Obj(); var_75_bool = 0;
		var_21_object = var_74_object;
		var_23_bool = var_75_bool;
		func_4882(var_74_object, var_75_bool);
		var_73_int = var_25_int;
		var_105_bool = var_25_int > (int)0;
		if(var_105_bool != 0) {
			var_107_bool = var_25_int > (int)1;
			if(var_107_bool != 0) {
				func_2024(var_25_int);
			}
			var_109_object = Obj();
			var_21_object = var_109_object;
			func_4892(var_109_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_4966(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_2024(var_23_int);
		}
		var_21_bool = Obj();
		func_4969();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_cvector = var_26_object;
	var_22_bool = var_27_string;
	func_4695(var_25_bool, var_26_object, var_27_string);
	if(var_25_bool != 0) {
		func_2024(var_24_int);
		var_58_object = Obj(); var_59_string = "";
		var_21_cvector = var_58_object;
		var_22_bool = var_59_string;
		func_4727(var_58_object, var_59_string);
	} else {
		var_207_int = 0; var_208_string = ""; var_209_object = Obj();
		var_22_bool = var_208_string;
		var_21_cvector = var_209_object;
		func_4971(var_209_object);
		var_207_int = var_24_int;
		var_211_bool = var_24_int > (int)0;
		if(var_211_bool == 0) goto Label_1965;
		var_213_bool = var_24_int > (int)1;
		if(var_213_bool != 0) {
			func_2024(var_24_int);
		}
		var_214_string = ""; var_215_object = Obj();
		var_22_bool = var_214_string;
		var_21_cvector = var_215_object;
		func_4974();
	}
Label_1965:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = "";
	var_21_bool = var_23_string;
	func_4794(var_22_bool, var_23_string);
	if(var_22_bool != 0) {
		func_2024(var_21_bool);
		var_32_string = "";
		var_21_bool = var_32_string;
		func_4810(var_32_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_bool = var_23_object;
	func_4752(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		func_2024(var_21_bool);
		var_37_object = Obj();
		var_21_bool = var_37_object;
		func_4775(var_37_object);
	} else {
		var_111_object = Obj();
		var_21_bool = var_111_object;
		func_2049(var_21_bool, var_111_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_object = Obj();
	var_21_bool = var_22_object;
	func_2049(var_21_bool, var_22_object);
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
	func_2024(var_20_bool);
	func_4985();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2024(var_21_bool);
	var_21_bool = Obj();
	func_4671();
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
	func_4976(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_2427();
		}
		var_30_object = Obj();
		var_21_bool = var_30_object;
		func_4979(var_30_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_object = Obj();
	var_21_bool = var_24_object;
	func_4781(var_24_object);
	var_33_int = 0; var_34_object = Obj();
	var_21_bool = var_34_object;
	func_4864(var_33_int, var_34_object);
	var_33_int = var_23_int;
	var_70_bool = var_23_int > (int)0;
	if(var_70_bool != 0) {
		var_72_bool = var_23_int > (int)1;
		if(var_72_bool != 0) {
			func_2427();
		}
		var_73_object = Obj();
		var_21_bool = var_73_object;
		func_4874(var_73_object);
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
	func_5256(var_27_object, var_28_object, var_29_bool);
	if(var_26_bool != 0) {
		var_73_int = 0; var_74_object = Obj(); var_75_bool = 0;
		var_21_object = var_74_object;
		var_23_bool = var_75_bool;
		func_4882(var_74_object, var_75_bool);
		var_73_int = var_25_int;
		var_105_bool = var_25_int > (int)0;
		if(var_105_bool != 0) {
			var_107_bool = var_25_int > (int)1;
			if(var_107_bool != 0) {
				func_2427();
			}
			var_108_object = Obj();
			var_21_object = var_108_object;
			func_4892(var_108_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_4966(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_2427();
		}
		var_21_bool = Obj();
		func_4969();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_cvector = var_26_object;
	var_22_bool = var_27_string;
	func_4695(var_25_bool, var_26_object, var_27_string);
	if(var_25_bool != 0) {
		func_2427();
		var_57_object = Obj(); var_58_string = "";
		var_21_cvector = var_57_object;
		var_22_bool = var_58_string;
		func_4727(var_57_object, var_58_string);
	} else {
		var_206_int = 0; var_207_string = ""; var_208_object = Obj();
		var_22_bool = var_207_string;
		var_21_cvector = var_208_object;
		func_4971(var_208_object);
		var_206_int = var_24_int;
		var_210_bool = var_24_int > (int)0;
		if(var_210_bool == 0) goto Label_2310;
		var_212_bool = var_24_int > (int)1;
		if(var_212_bool != 0) {
			func_2427();
		}
		var_213_string = ""; var_214_object = Obj();
		var_22_bool = var_213_string;
		var_21_cvector = var_214_object;
		func_4974();
	}
Label_2310:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = "";
	var_21_bool = var_23_string;
	func_4794(var_22_bool, var_23_string);
	if(var_22_bool != 0) {
		func_2427();
		var_31_string = "";
		var_21_bool = var_31_string;
		func_4810(var_31_string);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2427();
	func_4985();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_bool = var_23_object;
	func_4752(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		func_2427();
		var_36_object = Obj();
		var_21_bool = var_36_object;
		func_4775(var_36_object);
	}
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_4976(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_2631();
		}
		var_32_object = Obj();
		var_21_bool = var_32_object;
		func_4979(var_32_object);
	}
	return 2;
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_object = Obj();
	var_21_bool = var_24_object;
	func_4781(var_24_object);
	var_33_int = 0; var_34_object = Obj();
	var_21_bool = var_34_object;
	func_4864(var_33_int, var_34_object);
	var_33_int = var_23_int;
	var_70_bool = var_23_int > (int)0;
	if(var_70_bool != 0) {
		var_72_bool = var_23_int > (int)1;
		if(var_72_bool != 0) {
			func_2631();
		}
		var_75_object = Obj();
		var_21_bool = var_75_object;
		func_4874(var_75_object);
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
	func_5256(var_27_object, var_28_object, var_29_bool);
	if(var_26_bool != 0) {
		var_73_int = 0; var_74_object = Obj(); var_75_bool = 0;
		var_21_object = var_74_object;
		var_23_bool = var_75_bool;
		func_4882(var_74_object, var_75_bool);
		var_73_int = var_25_int;
		var_105_bool = var_25_int > (int)0;
		if(var_105_bool != 0) {
			var_107_bool = var_25_int > (int)1;
			if(var_107_bool != 0) {
				func_2631();
			}
			var_110_object = Obj();
			var_21_object = var_110_object;
			func_4892(var_110_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_int = 0; var_25_object = Obj();
	var_21_bool = var_25_object;
	func_4966(var_25_object);
	var_24_int = var_23_int;
	var_27_bool = var_23_int > (int)0;
	if(var_27_bool != 0) {
		var_29_bool = var_23_int > (int)1;
		if(var_29_bool != 0) {
			func_2631();
		}
		var_21_bool = Obj();
		func_4969();
	}
	return 2;
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_cvector = var_26_object;
	var_22_bool = var_27_string;
	func_4695(var_25_bool, var_26_object, var_27_string);
	if(var_25_bool != 0) {
		func_2631();
		var_59_object = Obj(); var_60_string = "";
		var_21_cvector = var_59_object;
		var_22_bool = var_60_string;
		func_4727(var_59_object, var_60_string);
	} else {
		var_208_int = 0; var_209_string = ""; var_210_object = Obj();
		var_22_bool = var_209_string;
		var_21_cvector = var_210_object;
		func_4971(var_210_object);
		var_208_int = var_24_int;
		var_212_bool = var_24_int > (int)0;
		if(var_212_bool == 0) goto Label_2616;
		var_214_bool = var_24_int > (int)1;
		if(var_214_bool != 0) {
			func_2631();
		}
		var_215_string = ""; var_216_object = Obj();
		var_22_bool = var_215_string;
		var_21_cvector = var_216_object;
		func_4974();
	}
Label_2616:
	return 2;
	
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = "";
	var_21_bool = var_23_string;
	func_4794(var_22_bool, var_23_string);
	if(var_22_bool != 0) {
		func_2631();
		var_33_string = "";
		var_21_bool = var_33_string;
		func_4810(var_33_string);
	}
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2631();
	var_21_bool = Obj();
	func_4671();
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
	func_3582(var_28_bool, var_29_object);
	var_62_bool = var_28_bool == 0; //@nz
	if(var_62_bool != 0) {
		func_2631();
		return 4;
	}
	GetDirection(var_24_cvector);
	var_65_cvector = CVector(0,0,0); var_66_object = Obj();
	var_66_object = var_0_object;
	func_3509(var_65_cvector, var_66_object);
	var_65_cvector = var_25_cvector;
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_24_cvector = var_72_cvector;
	var_25_cvector = var_73_cvector;
	func_3974(var_71_float, var_72_cvector, var_73_cvector);
	var_96_bool = var_71_float < (float)0.4999999701976776;
	if(var_96_bool != 0) {
		var_97_object = Obj();
		var_97_object = var_0_object;
		func_3732(var_97_object);
	}
	return 4;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2631();
	func_4985();
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_bool = var_23_object;
	func_4752(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		func_2631();
		var_38_object = Obj();
		var_21_bool = var_38_object;
		func_4775(var_38_object);
	}
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2897(var_20_bool);
	func_4985();
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
		func_2742(var_29_float, var_35_cvector, (float)1.7453293800354004);
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
				func_2913((bool)1, var_73_bool);
				if(var_73_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool == 0) goto Label_2896;
		Stop();
		var_93_cvector = CVector(0,0,0);
		func_3504(var_93_cvector);
		var_1_object = var_93_cvector + var_28_cvector;
	}
Label_2896:
	return 8;
	
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2897(var_21_bool);
	var_21_bool = Obj();
	func_4671();
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
		func_2929(var_29_float, var_35_cvector, (float)1.7453293800354004);
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
				func_3100((bool)1, var_73_bool);
				if(var_73_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool == 0) goto Label_3083;
		Stop();
		var_93_cvector = CVector(0,0,0);
		func_3504(var_93_cvector);
		var_1_object = var_93_cvector + var_28_cvector;
	}
Label_3083:
	return 8;
	
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_3084(var_21_bool);
	var_21_bool = Obj();
	func_4671();
	return 0;
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_3278(var_20_bool);
	func_4985();
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
		func_3123(var_29_float, var_35_cvector, (float)1.7453293800354004);
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
				func_3294((bool)1, var_73_bool);
				if(var_73_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool == 0) goto Label_3277;
		Stop();
		var_93_cvector = CVector(0,0,0);
		func_3504(var_93_cvector);
		var_1_object = var_93_cvector + var_28_cvector;
	}
Label_3277:
	return 8;
	
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_cvector, var_21_bool)
{
	func_3278(var_21_bool);
	var_21_bool = Obj();
	func_4671();
	return 0;
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_3472(var_20_bool);
	func_4985();
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
		func_3317(var_29_float, var_35_cvector, (float)1.7453293800354004);
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
				func_3488((bool)1, var_73_bool);
				if(var_73_bool != 1) {
					var_68_bool = 0;
				}
			}
			if(var_68_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool == 0) goto Label_3471;
		Stop();
		var_93_cvector = CVector(0,0,0);
		func_3504(var_93_cvector);
		var_1_object = var_93_cvector + var_28_cvector;
	}
Label_3471:
	return 8;
	
}


task_9_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object)
{
	func_3472(var_21_object);
	var_21_object = Obj();
	func_4671();
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
	func_4650(var_22_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0;
	var_21_object = var_25_object;
	var_22_int = var_26_int;
	var_23_float = var_27_float;
	func_3650(var_25_object, var_26_int, var_27_float);
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
	func_3718(var_29_float, var_30_cvector, var_31_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	SensePlayerOnly((bool)1);
	func_5228();
	func_1828();
	
Label_1822:
	var_2_object = false;
	func_2089(var_19_cvector, var_20_bool);
	goto Label_1822;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0;
	var_0_object = var_47_object;
	var_57_bool = 0; var_58_object = Obj(); var_59_float = 0;
	var_47_object = var_58_object;
	func_3748(var_57_bool, var_58_object, (float)70.0);
	var_104_bool = var_57_bool == 0; //@nz
	if(var_104_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	CreateDialog(var_53_object);
	var_105_int = 0;
	func_5220(var_105_int);
	@@var_53_object:SetNPCName(var_105_int);
	var_106_int = 0;
	func_5218(var_106_int);
	@@var_53_object:SetNPCDescription(var_106_int);
	var_107_string = "";
	func_5222(var_107_string);
	@@var_53_object:SetPhoto(var_107_string);
	var_108_string = "";
	func_5224(var_108_string);
	@@var_53_object:SetPhoto2(var_108_string);
	var_109_int = 0;
	func_4279(var_109_int);
	@@var_53_object:SetPlayerName(var_109_int);
	IsOverrideActive(var_54_bool);
	var_117_bool = var_54_bool;
	if(var_117_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	DoDialog(var_53_object);
	var_118_object = Obj(); var_119_object = Obj();
	var_47_object = var_118_object;
	var_53_object = var_119_object;
	TaskCall(1);
	func_74(var_120_object, var_121_object, var_122_string, var_123_bool, var_118_object, var_119_object);
	TaskReturn();
	@@var_53_object:IsDialogEnd(var_56_bool);
	
Label_56:
	var_441_bool = var_56_bool == 0; //@nz
	if(var_441_bool != 0) {
		sync();
		@@var_53_object:IsDialogEnd(var_56_bool);
		goto Label_56;
	}
	var_47_object = Obj();
	func_3817();
	StopDialog(var_53_object);
	@@var_53_object:GetReturnValue((int)-1);
	var_55_int = var_46_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2049(var_2_object, var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_22_object = var_28_object;
	func_3582(var_27_bool, var_28_object);
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
	func_4847(var_65_object);
	var_64_int = var_26_int;
	var_77_bool = var_26_int > (int)0;
	if(var_77_bool != 0) {
		var_79_bool = var_26_int > (int)1;
		if(var_79_bool != 0) {
			func_2032(var_26_int);
		}
		var_81_object = Obj();
		var_22_object = var_81_object;
		func_4856(var_81_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_4104(var_195_bool, var_196_object)
{
	var_197_bool = 0; var_198_object = Obj();
	var_196_object = var_198_object;
	func_4219(var_198_object);
	if(var_197_bool != 0) {
		var_195_bool = 1;
		return 0;
	}
	var_195_bool = 0;
	return 0;
}


func_3084(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_4114(var_218_bool, var_219_object)
{
	var_220_bool = 0; var_221_object = Obj();
	var_219_object = var_221_object;
	func_4226(var_221_object);
	if(var_220_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_3606(var_38_object)
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


func_4124(var_224_bool, var_225_object)
{
	var_226_bool = 0; var_227_object = Obj();
	var_225_object = var_227_object;
	func_4233(var_227_object);
	if(var_226_bool != 0) {
		var_224_bool = 1;
		return 0;
	}
	var_224_bool = 0;
	return 0;
}


func_3100(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	GetDirection(var_76_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_object;
	func_3509(var_78_cvector, var_79_object);
	var_78_cvector = var_77_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_3947(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= (float)-0.3420201241970062;
	return 4;
}


func_4645(var_141_int, var_142_string)
{
	var_143_int = 0; var_144_int = 0;
	GetInvItemByName(var_144_int, var_142_string);
	var_144_int = var_141_int;
	return 2;
}


func_4134(var_201_bool, var_202_object)
{
	var_203_bool = 0; var_204_object = Obj();
	var_202_object = var_204_object;
	func_4240(var_204_object);
	if(var_203_bool != 0) {
		var_201_bool = 1;
		return 0;
	}
	var_201_bool = 0;
	return 0;
}


func_2089(var_0_object, var_1_object)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_33_float, (float)0.5);
	Sleep(var_33_float);
	
Label_2097:
	var_40_bool = var_0_object == 0; //@nz
	if(var_40_bool != 0) {
		var_41_bool = var_1_object == 0; //@nz
		if(var_41_bool != 0) {

		Label_2101:
			GetPosition(var_35_cvector);
			var_42_float = 0;
			func_2148(var_42_float);
			GetRandomPFPointInCircle(var_34_cvector, var_35_cvector, var_42_float, var_36_bool);
			var_45_bool = var_36_bool;
			if(var_45_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_2101;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_2117;
	
Label_2117:
	var_46_object = Obj(); var_47_cvector = CVector(0,0,0);
	var_34_cvector = var_47_cvector;
	func_2176(var_46_object, var_47_cvector);
	var_46_object = var_37_object;
	var_50_bool = var_37_object != 0; //@nn
	if(var_50_bool != 0) {
		RotatePath(var_37_object, var_38_bool);
		var_51_bool = var_38_bool;
		if(var_51_bool != 0) {
			var_52_bool = 0;
			func_2174(var_52_bool);
			FollowPath(var_37_object, var_52_bool, var_38_bool);
			var_37_object = 0;
			var_53_bool = var_38_bool;
			if(var_53_bool != 0) {
				TaskCall(4);
				func_2346();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_37_object = 0;
	goto Label_2097;
	
}


func_4650(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	TaskCall(2);
	func_1657(var_23_object);
	TaskReturn();
	return 0;
}


func_4144(var_207_bool, var_208_object)
{
	var_209_bool = 0; var_210_object = Obj();
	var_208_object = var_210_object;
	func_4247(var_210_object);
	if(var_209_bool != 0) {
		var_207_bool = 1;
		return 0;
	}
	var_207_bool = 0;
	return 0;
}


func_3123(var_0_object, var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	GetPosition(var_43_cvector);
	@@@var_0_object:GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_43_cvector - var_44_cvector;
	func_3931(var_51_cvector, var_52_cvector);
	var_59_float = var_45_cvector * (float)0.75;
	var_50_cvector = var_51_cvector + var_59_float;
	func_3931(var_49_cvector, var_50_cvector);
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


func_4154(var_284_bool, var_285_object)
{
	var_286_bool = 0; var_287_object = Obj();
	var_285_object = var_287_object;
	func_4254(var_287_object);
	if(var_286_bool != 0) {
		var_284_bool = 1;
		return 0;
	}
	var_284_bool = 0;
	return 0;
}


func_3650(var_25_object, var_26_int, var_27_float)
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
		func_3509(var_55_cvector, var_56_object);
		var_55_cvector = var_54_cvector;
		func_3931(var_53_cvector, var_54_cvector);
		var_53_cvector = var_37_cvector;
		CreateVectorVector(var_38_object);
		var_39_int = 1;

	Label_3679:
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
			goto Label_3679;
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
			func_3718(var_72_float, var_73_cvector, var_74_cvector);
			return 18;
		}
		var_38_object = 0;
	}
	var_115_object = Obj();
	var_25_object = var_115_object;
	func_3606(var_115_object);
	return 18;
	
}


func_5187(var_518_bool, var_519_object)
{
	var_520_int = 0; var_521_bool = 0; var_522_int = 0; var_523_int = 0; var_524_bool = 0; var_525_int = 0;
	@@var_519_object:GetItemID(var_523_int);
	HasInvItemProperty(var_524_bool, var_523_int, "Category");
	var_527_bool = var_524_bool == 0; //@nz
	if(var_527_bool != 0) {
		var_518_bool = 0;
		return 6;
	}
	GetInvItemProperty(var_525_int, var_523_int, "Category");
	var_518_bool = var_525_int == (int)1;
	return 6;
}


func_4164(var_290_bool, var_291_object)
{
	var_292_bool = 0; var_293_object = Obj();
	var_291_object = var_293_object;
	func_4261(var_293_object);
	if(var_292_bool != 0) {
		var_290_bool = 1;
		return 0;
	}
	var_290_bool = 0;
	return 0;
}


func_2631()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_118_object, var_119_object)
{
	var_0_object = var_119_object;
	var_1_object = var_118_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_125_bool = 0; var_126_object = Obj();
		var_126_object = var_1_object;
		func_4042(var_126_object);
		if(var_125_bool != 0) {
			var_133_string = "";
			func_649(var_119_object, "Neutral");
			@@@var_0_object:SetMessage((int)543180);
			@@@var_0_object:ClearReplies();
			var_151_bool = 0;
			var_151_bool = 1;
			var_152_bool = 0;
			var_152_bool = 1;
			var_153_bool = 0;
			var_153_bool = 1;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_4054(var_154_bool, var_155_object);
			if(var_154_bool != 1) {
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_object;
				func_4074(var_165_bool, var_166_object);
				if(var_165_bool != 1) {
					var_153_bool = 0;
				}
			}
			if(var_153_bool != 1) {
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_4084(var_171_bool, var_172_object);
				if(var_171_bool != 1) {
					var_152_bool = 0;
				}
			}
			if(var_152_bool != 1) {
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_4094(var_177_bool, var_178_object);
				if(var_177_bool != 1) {
					var_151_bool = 0;
				}
			}
			if(var_151_bool != 0) {
				@@@var_0_object:AddReply((int)543189, (int)45648, (int)45645);
			}
			var_186_bool = 0;
			var_186_bool = 1;
			var_187_bool = 0;
			var_187_bool = 1;
			var_188_bool = 0;
			var_188_bool = 1;
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_4064(var_189_bool, var_190_object);
			if(var_189_bool != 1) {
				var_195_bool = 0; var_196_object = Obj();
				var_196_object = var_1_object;
				func_4104(var_195_bool, var_196_object);
				if(var_195_bool != 1) {
					var_188_bool = 0;
				}
			}
			if(var_188_bool != 1) {
				var_201_bool = 0; var_202_object = Obj();
				var_202_object = var_1_object;
				func_4134(var_201_bool, var_202_object);
				if(var_201_bool != 1) {
					var_187_bool = 0;
				}
			}
			if(var_187_bool != 1) {
				var_207_bool = 0; var_208_object = Obj();
				var_208_object = var_1_object;
				func_4144(var_207_bool, var_208_object);
				if(var_207_bool != 1) {
					var_186_bool = 0;
				}
			}
			if(var_186_bool != 0) {
				@@@var_0_object:AddReply((int)543190, (int)45655, (int)45646);
			}
			var_216_bool = 0;
			var_216_bool = 1;
			var_217_bool = 0;
			var_217_bool = 1;
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_4114(var_218_bool, var_219_object);
			if(var_218_bool != 1) {
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_4124(var_224_bool, var_225_object);
				if(var_224_bool != 1) {
					var_217_bool = 0;
				}
			}
			if(var_217_bool != 1) {
				var_230_bool = 0; var_231_object = Obj();
				var_231_object = var_1_object;
				func_4074(var_230_bool, var_231_object);
				if(var_230_bool != 1) {
					var_216_bool = 0;
				}
			}
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)543191, (int)45656, (int)45647);
			}
			var_235_bool = 0;
			var_235_bool = 1;
			var_236_bool = 0;
			var_236_bool = 1;
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_4054(var_237_bool, var_238_object);
			if(var_237_bool != 1) {
				var_239_bool = 0; var_240_object = Obj();
				var_240_object = var_1_object;
				func_4064(var_239_bool, var_240_object);
				if(var_239_bool != 1) {
					var_236_bool = 0;
				}
			}
			if(var_236_bool != 1) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_4074(var_241_bool, var_242_object);
				if(var_241_bool != 1) {
					var_235_bool = 0;
				}
			}
			if(var_235_bool != 0) {
				@@@var_0_object:AddReply((int)543182, (int)-1, (int)45638);
			}
			var_246_bool = 0;
			var_246_bool = 1;
			var_247_bool = 0;
			var_247_bool = 1;
			var_248_bool = 0;
			var_248_bool = 1;
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_object;
			func_4054(var_249_bool, var_250_object);
			if(var_249_bool != 1) {
				var_251_bool = 0; var_252_object = Obj();
				var_252_object = var_1_object;
				func_4064(var_251_bool, var_252_object);
				if(var_251_bool != 1) {
					var_248_bool = 0;
				}
			}
			if(var_248_bool != 1) {
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_4074(var_253_bool, var_254_object);
				if(var_253_bool != 1) {
					var_247_bool = 0;
				}
			}
			if(var_247_bool != 1) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_4084(var_255_bool, var_256_object);
				if(var_255_bool != 1) {
					var_246_bool = 0;
				}
			}
			if(var_246_bool != 0) {
				@@@var_0_object:AddReply((int)543183, (int)-1, (int)45639);
			}
			var_260_bool = 0;
			var_260_bool = 1;
			var_261_bool = 0;
			var_261_bool = 1;
			var_262_bool = 0;
			var_262_bool = 1;
			var_263_bool = 0;
			var_263_bool = 1;
			var_264_bool = 0; var_265_object = Obj();
			var_265_object = var_1_object;
			func_4084(var_264_bool, var_265_object);
			if(var_264_bool != 1) {
				var_266_bool = 0; var_267_object = Obj();
				var_267_object = var_1_object;
				func_4094(var_266_bool, var_267_object);
				if(var_266_bool != 1) {
					var_263_bool = 0;
				}
			}
			if(var_263_bool != 1) {
				var_268_bool = 0; var_269_object = Obj();
				var_269_object = var_1_object;
				func_4104(var_268_bool, var_269_object);
				if(var_268_bool != 1) {
					var_262_bool = 0;
				}
			}
			if(var_262_bool != 1) {
				var_270_bool = 0; var_271_object = Obj();
				var_271_object = var_1_object;
				func_4114(var_270_bool, var_271_object);
				if(var_270_bool != 1) {
					var_261_bool = 0;
				}
			}
			if(var_261_bool != 1) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_4124(var_272_bool, var_273_object);
				if(var_272_bool != 1) {
					var_260_bool = 0;
				}
			}
			if(var_260_bool != 0) {
				@@@var_0_object:AddReply((int)543187, (int)-1, (int)45643);
			}
			var_277_bool = 0;
			var_277_bool = 1;
			var_278_bool = 0;
			var_278_bool = 1;
			var_279_bool = 0;
			var_279_bool = 1;
			var_280_bool = 0; var_281_object = Obj();
			var_281_object = var_1_object;
			func_4134(var_280_bool, var_281_object);
			if(var_280_bool != 1) {
				var_282_bool = 0; var_283_object = Obj();
				var_283_object = var_1_object;
				func_4144(var_282_bool, var_283_object);
				if(var_282_bool != 1) {
					var_279_bool = 0;
				}
			}
			if(var_279_bool != 1) {
				var_284_bool = 0; var_285_object = Obj();
				var_285_object = var_1_object;
				func_4154(var_284_bool, var_285_object);
				if(var_284_bool != 1) {
					var_278_bool = 0;
				}
			}
			if(var_278_bool != 1) {
				var_290_bool = 0; var_291_object = Obj();
				var_291_object = var_1_object;
				func_4164(var_290_bool, var_291_object);
				if(var_290_bool != 1) {
					var_277_bool = 0;
				}
			}
			if(var_277_bool != 0) {
				@@@var_0_object:AddReply((int)543208, (int)-1, (int)45664);
			}
			var_299_bool = 0;
			var_299_bool = 1;
			var_300_bool = 0;
			var_300_bool = 1;
			var_301_bool = 0; var_302_object = Obj();
			var_302_object = var_1_object;
			func_4054(var_301_bool, var_302_object);
			if(var_301_bool != 1) {
				var_303_bool = 0; var_304_object = Obj();
				var_304_object = var_1_object;
				func_4064(var_303_bool, var_304_object);
				if(var_303_bool != 1) {
					var_300_bool = 0;
				}
			}
			if(var_300_bool != 1) {
				var_305_bool = 0; var_306_object = Obj();
				var_306_object = var_1_object;
				func_4074(var_305_bool, var_306_object);
				if(var_305_bool != 1) {
					var_299_bool = 0;
				}
			}
			if(var_299_bool != 0) {
				@@@var_0_object:AddReply((int)543181, (int)-1, (int)45637);
			}
			var_310_bool = 0;
			var_310_bool = 1;
			var_311_bool = 0;
			var_311_bool = 1;
			var_312_bool = 0; var_313_object = Obj();
			var_313_object = var_1_object;
			func_4084(var_312_bool, var_313_object);
			if(var_312_bool != 1) {
				var_314_bool = 0; var_315_object = Obj();
				var_315_object = var_1_object;
				func_4094(var_314_bool, var_315_object);
				if(var_314_bool != 1) {
					var_311_bool = 0;
				}
			}
			if(var_311_bool != 1) {
				var_316_bool = 0; var_317_object = Obj();
				var_317_object = var_1_object;
				func_4104(var_316_bool, var_317_object);
				if(var_316_bool != 1) {
					var_310_bool = 0;
				}
			}
			if(var_310_bool != 0) {
				@@@var_0_object:AddReply((int)543184, (int)-1, (int)45640);
			}
			var_321_bool = 0;
			var_321_bool = 1;
			var_322_bool = 0;
			var_322_bool = 1;
			var_323_bool = 0;
			var_323_bool = 1;
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_4074(var_324_bool, var_325_object);
			if(var_324_bool != 1) {
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_4104(var_326_bool, var_327_object);
				if(var_326_bool != 1) {
					var_323_bool = 0;
				}
			}
			if(var_323_bool != 1) {
				var_328_bool = 0; var_329_object = Obj();
				var_329_object = var_1_object;
				func_4114(var_328_bool, var_329_object);
				if(var_328_bool != 1) {
					var_322_bool = 0;
				}
			}
			if(var_322_bool != 1) {
				var_330_bool = 0; var_331_object = Obj();
				var_331_object = var_1_object;
				func_4124(var_330_bool, var_331_object);
				if(var_330_bool != 1) {
					var_321_bool = 0;
				}
			}
			if(var_321_bool != 0) {
				@@@var_0_object:AddReply((int)543185, (int)-1, (int)45641);
			}
			var_335_bool = 0;
			var_335_bool = 1;
			var_336_bool = 0;
			var_336_bool = 1;
			var_337_bool = 0; var_338_object = Obj();
			var_338_object = var_1_object;
			func_4134(var_337_bool, var_338_object);
			if(var_337_bool != 1) {
				var_339_bool = 0; var_340_object = Obj();
				var_340_object = var_1_object;
				func_4144(var_339_bool, var_340_object);
				if(var_339_bool != 1) {
					var_336_bool = 0;
				}
			}
			if(var_336_bool != 1) {
				var_341_bool = 0; var_342_object = Obj();
				var_342_object = var_1_object;
				func_4154(var_341_bool, var_342_object);
				if(var_341_bool != 1) {
					var_335_bool = 0;
				}
			}
			if(var_335_bool != 0) {
				@@@var_0_object:AddReply((int)543186, (int)-1, (int)45642);
			}
			var_346_bool = 0;
			var_346_bool = 1;
			var_347_bool = 0;
			var_347_bool = 1;
			var_348_bool = 0;
			var_348_bool = 1;
			var_349_bool = 0;
			var_349_bool = 1;
			var_350_bool = 0; var_351_object = Obj();
			var_351_object = var_1_object;
			func_4104(var_350_bool, var_351_object);
			if(var_350_bool != 1) {
				var_352_bool = 0; var_353_object = Obj();
				var_353_object = var_1_object;
				func_4124(var_352_bool, var_353_object);
				if(var_352_bool != 1) {
					var_349_bool = 0;
				}
			}
			if(var_349_bool != 1) {
				var_354_bool = 0; var_355_object = Obj();
				var_355_object = var_1_object;
				func_4134(var_354_bool, var_355_object);
				if(var_354_bool != 1) {
					var_348_bool = 0;
				}
			}
			if(var_348_bool != 1) {
				var_356_bool = 0; var_357_object = Obj();
				var_357_object = var_1_object;
				func_4164(var_356_bool, var_357_object);
				if(var_356_bool != 1) {
					var_347_bool = 0;
				}
			}
			if(var_347_bool != 1) {
				var_358_bool = 0; var_359_object = Obj();
				var_359_object = var_1_object;
				func_4144(var_358_bool, var_359_object);
				if(var_358_bool != 1) {
					var_346_bool = 0;
				}
			}
			if(var_346_bool != 0) {
				@@@var_0_object:AddReply((int)543188, (int)-1, (int)45644);
			}
		} else {
				var_381_string = "";
				func_649(var_119_object, "Neutral");
				@@@var_0_object:SetMessage((int)538167);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)538168, (int)-1, (int)40043);
				var_386_bool = 0;
				var_386_bool = 0;
				var_387_bool = 0; var_388_object = Obj();
				var_388_object = var_1_object;
				func_4054(var_387_bool, var_388_object);
				if(var_387_bool != 0) {
					var_389_bool = 0; var_390_object = Obj();
					var_390_object = var_1_object;
					func_4018(var_390_object);
					if(var_389_bool != 0) {
						var_386_bool = 1;
					}
				}
				if(var_386_bool != 0) {
					@@@var_0_object:AddReply((int)538169, (int)40045, (int)40044);
				}
				var_398_bool = 0;
				var_398_bool = 0;
				var_399_bool = 0;
				var_399_bool = 0;
				var_400_bool = 0; var_401_object = Obj();
				var_401_object = var_1_object;
				func_4054(var_400_bool, var_401_object);
				if(var_400_bool != 0) {
					var_402_bool = 0; var_403_object = Obj();
					var_403_object = var_1_object;
					func_4174(var_402_bool, var_403_object);
					if(var_402_bool != 0) {
						var_399_bool = 1;
					}
				}
				if(var_399_bool != 0) {
					var_413_bool = 0; var_414_object = Obj();
					var_414_object = var_1_object;
					func_4018(var_414_object);
					if(var_413_bool != 0) {
						var_398_bool = 1;
					}
				}
				if(var_398_bool != 0) {
					@@@var_0_object:AddReply((int)538179, (int)40055, (int)40054);
				}
				var_418_bool = 0;
				var_418_bool = 0;
				var_419_bool = 0; var_420_object = Obj();
				var_420_object = var_1_object;
				func_4064(var_419_bool, var_420_object);
				if(var_419_bool != 0) {
					var_421_bool = 0; var_422_object = Obj();
					var_422_object = var_1_object;
					func_4018(var_422_object);
					if(var_421_bool != 0) {
						var_418_bool = 1;
					}
				}
				if(var_418_bool != 0) {
					@@@var_0_object:AddReply((int)538190, (int)40067, (int)40066);
				}
				var_426_bool = 0;
				var_426_bool = 1;
				var_427_bool = 0; var_428_object = Obj();
				var_428_object = var_1_object;
				func_4018(var_428_object);
				if(var_427_bool != 1) {
					var_429_bool = 0; var_430_object = Obj();
					var_430_object = var_1_object;
					func_4030(var_430_object);
					if(var_429_bool != 1) {
						var_426_bool = 0;
					}
				}
				if(var_426_bool != 0) {
					@@@var_0_object:AddReply((int)538204, (int)-1, (int)40081);
				}
				@@@var_0_object:AddReply((int)538205, (int)-1, (int)40082);
				goto Label_619;
		}
	}
Label_619:
	var_363_bool = 0;
	func_5226(var_363_bool);
	if(var_363_bool != 0) {

	Label_623:
		lshWaitForAnimEnd();
		var_364_string = var_3_string;
		if(var_364_string != 0) {
		} else {
			var_365_string = "";
			var_365_string = var_2_object;
			func_3835(var_365_string);
			goto Label_623;
	}
		PlayAnimation("all", "idle");

	Label_638:
		WaitForAnimEnd();
		var_378_string = var_3_string;
		if(var_378_string != 0) {
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


func_4174(var_402_bool, var_403_object)
{
	var_404_bool = 0; var_405_object = Obj();
	var_403_object = var_405_object;
	func_4268(var_405_object);
	if(var_404_bool != 0) {
		var_402_bool = 1;
		return 0;
	}
	var_402_bool = 0;
	return 0;
}


func_3153(var_0_object, var_1_object, var_2_object, var_40_object)
{
	var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_float = 0;
	var_0_object = var_40_object;
	var_54_cvector = CVector(0,0,0); var_55_float = 0;
	func_3123(var_53_float, var_54_cvector, (float)1.7453293800354004);
	var_54_cvector = var_49_cvector;
	var_50_float = var_49_cvector | var_49_cvector;
	var_85_bool = var_50_float < (float)2500.0;
	if(var_85_bool != 0) {
		var_86_cvector = CVector(0,0,0); var_87_float = 0;
		func_3123(var_53_float, var_86_cvector, (float)2.6179938316345215);
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
	func_3504(var_96_cvector);
	var_1_object = var_96_cvector + var_49_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_3195:
	MovePoint(var_1_object, (int)1, var_51_bool);
	var_102_bool = var_51_bool;
	if(var_102_bool != 0) {
		var_103_bool = var_0_object == 0; //@ne
		if(var_103_bool != 0) {
			goto Label_3225;
		EMIT "GOTO 0xc97";

		Label_3225:
			return 10;
		}
		var_104_cvector = CVector(0,0,0); var_105_float = 0;
		func_3123(var_53_float, var_104_cvector, (float)2.6179938316345215);
		var_104_cvector = var_52_cvector;
		var_53_float = var_52_cvector | var_52_cvector;
		var_107_bool = var_53_float >= (float)2500.0;
		if(var_107_bool != 0) {
			var_108_cvector = CVector(0,0,0);
			func_3504(var_108_cvector);
			var_1_object = var_108_cvector + var_52_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_3225;
		}
	}
	var_111_bool = var_2_object == 0; //@nz
	if(var_111_bool == 1) goto Label_3195;
	
}


func_5203(var_45_object, var_48_object)
{
	var_46_int = 0; var_47_object = Obj();
	var_45_object = var_47_object;
	TaskCall(0);
	func_0(var_48_object, var_46_int, var_47_object);
	TaskReturn();
	var_451_bool = var_48_object == (int)100;
	if(var_451_bool != 0) {
		var_452_object = Obj();
		var_45_object = var_452_object;
		func_5040(var_452_object);
	}
	return 0;
}


func_4695(var_25_bool, var_26_object, var_27_string)
{
	var_29_bool = var_27_string == "unholster";
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_4986(var_30_bool, var_31_object);
		var_30_bool = var_25_bool;
		return 0;
	EMIT "GOTO 0x1275";
	}
	var_35_bool = var_27_string == "player_shot";
	if(var_35_bool != 0) {
		var_36_bool = 0; var_37_object = Obj();
		var_26_object = var_37_object;
		func_4999(var_36_bool, var_37_object);
		var_36_bool = var_25_bool;
		return 0;
	EMIT "GOTO 0x1275";
	}
	var_52_bool = var_27_string == "battle";
	if(var_52_bool != 0) {
		var_53_bool = 0; var_54_object = Obj();
		var_26_object = var_54_object;
		func_5022(var_53_bool, var_54_object);
		var_53_bool = var_25_bool;
		return 0;
	}
	var_25_bool = 0;
	return 0;
}


func_4184(var_156_bool)
{
	var_158_int = 0;
	func_3996(var_158_int);
	var_156_bool = var_158_int == (int)1;
	return 0;
}


func_4191(var_191_bool)
{
	var_193_int = 0;
	func_3996(var_193_int);
	var_191_bool = var_193_int == (int)2;
	return 0;
}


func_5218(var_106_int)
{
	var_106_int = 515567;
	return 0;
}


func_5220(var_105_int)
{
	var_105_int = 503352;
	return 0;
}


func_2148(var_42_float)
{
	var_43_float = 0; var_44_float = 0;
	GetCameraFarDistance(var_44_float);
	var_44_float = var_42_float;
	return 2;
}


func_5222(var_107_string)
{
	var_107_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_4198(var_167_bool)
{
	var_169_int = 0;
	func_3996(var_169_int);
	var_167_bool = var_169_int == (int)3;
	return 0;
}


func_5224(var_108_string)
{
	var_108_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_5226(var_100_bool)
{
	var_100_bool = 0;
	return 0;
}


func_5228()
{
	var_22_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_4205(var_173_bool)
{
	var_175_int = 0;
	func_3996(var_175_int);
	var_173_bool = var_175_int == (int)4;
	return 0;
}


func_2160(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_5232(var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	var_36_bool = GlobalVars[0];
	if(var_36_bool != 0) {
		IsOverrideActive(var_35_bool);
		var_37_bool = var_35_bool == 0; //@nz
		if(var_37_bool != 0) {
			var_38_object = Obj();
			var_33_object = var_38_object;
			func_4385(var_38_object);
		}
		return 2;
	EMIT "GOTO 0x1481";
	}
	var_45_object = Obj();
	var_33_object = var_45_object;
	func_5203(var_35_bool, var_45_object);
	return 2;
}


func_4212(var_179_bool)
{
	var_181_int = 0;
	func_3996(var_181_int);
	var_179_bool = var_181_int == (int)5;
	return 0;
}


func_4094(var_177_bool, var_178_object)
{
	var_179_bool = 0; var_180_object = Obj();
	var_178_object = var_180_object;
	func_4212(var_180_object);
	if(var_179_bool != 0) {
		var_177_bool = 1;
		return 0;
	}
	var_177_bool = 0;
	return 0;
}


func_2167(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_4727(var_59_object, var_60_string)
{
	var_62_bool = var_60_string == "unholster";
	if(var_62_bool != 0) {
		var_63_object = Obj();
		var_59_object = var_63_object;
		func_4991(var_63_object);
	} else {
		var_137_bool = var_60_string == "player_shot";
		if(var_137_bool != 0) {
			var_138_object = Obj();
			var_59_object = var_138_object;
			func_5014(var_138_object);
			goto Label_4751;
		}
		var_205_bool = var_60_string == "battle";
		if(var_205_bool == 0) goto Label_4751;
		var_206_object = Obj();
		var_59_object = var_206_object;
		func_5029(var_206_object);
	}
Label_4751:
	return 0;
	
}


func_1657(var_23_object)
{
	EventDisable(0);
	var_24_object = Obj();
	var_23_object = var_24_object;
	func_1690(var_24_object);
	var_104_object = Obj();
	var_23_object = var_104_object;
	func_5265(var_104_object);
	EventEnable(0);
	
Label_1668:
	Hold();
	goto Label_1668;
}
EMIT "Return(); Pop(0)";


func_4219(var_197_bool)
{
	var_199_int = 0;
	func_3996(var_199_int);
	var_197_bool = var_199_int == (int)6;
	return 0;
}


func_2174(var_52_bool)
{
	var_52_bool = 0;
	return 0;
}


func_2176(var_46_object, var_47_cvector)
{
	var_48_object = Obj(); var_49_object = Obj();
	FindShiftedPathTo(var_49_object, var_47_cvector);
	var_49_object = var_46_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4226(var_220_bool)
{
	var_222_int = 0;
	func_3996(var_222_int);
	var_220_bool = var_222_int == (int)7;
	return 0;
}


func_5250(var_66_bool)
{
	var_67_float = 0;
	func_4371(var_67_float);
	var_66_bool = var_67_float > (float)0.699999988079071;
	return 0;
}


func_3718(var_27_object, var_30_cvector, var_31_cvector)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj();
	GetScene(var_34_object);
	AddActorByType(var_35_object, "scripted", var_34_object, var_30_cvector, var_31_cvector, "blood_dir.xml");
	var_38_object = Obj();
	var_27_object = var_38_object;
	func_3606(var_38_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5256(var_26_bool, var_27_object, var_28_object)
{
	var_30_bool = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_float = 0;
	var_27_object = var_31_object;
	var_28_object = var_32_object;
	func_4900(var_30_bool, var_31_object, var_32_object, (float)700.0);
	var_30_bool = var_26_bool;
	return 0;
}


func_649(var_2_object, var_133_string)
{
	var_134_bool = 0;
	func_5226(var_134_bool);
	var_135_bool = var_134_bool == 0; //@nz
	if(var_135_bool != 0) {
		return 0;
	}
	var_136_bool = var_133_string == var_2_object;
	if(var_136_bool != 0) {
		return 0;
	}
	var_137_string = ""; var_138_bool = 0;
	var_133_string = var_137_string;
	var_140_bool = var_133_string == "";
	if(var_140_bool != 0) {
		var_138_bool = 0;
	} else {
		var_138_bool = 1;
	}
	func_3851(var_137_string, var_138_bool);
	var_2_object = var_133_string;
	return 0;
	
}


func_4233(var_226_bool)
{
	var_228_int = 0;
	func_3996(var_228_int);
	var_226_bool = var_228_int == (int)8;
	return 0;
}


func_4752(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0;
	var_26_bool = 0;
	var_26_bool = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_23_object = var_28_object;
	func_4986(var_27_bool, var_28_object);
	if(var_27_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_23_object = var_32_object;
		func_3524(var_31_bool, var_32_object);
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


func_5265(var_104_object)
{
	var_105_bool = 0; var_106_object = Obj();
	var_104_object = var_106_object;
	func_3524(var_105_bool, var_106_object);
	if(var_105_bool != 0) {
		var_109_object = Obj();
		func_3925(var_109_object);
		ReportReputationChange(var_104_object, var_109_object, (float)-0.10000000149011612, (bool)1);
		var_114_bool = 0;
		func_4470((bool)0);
	}
	func_4446();
	var_248_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_4240(var_203_bool)
{
	var_205_int = 0;
	func_3996(var_205_int);
	var_203_bool = var_205_int == (int)9;
	return 0;
}


func_2707(var_76_object)
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
	func_2772(var_78_cvector, var_79_bool, var_76_object, var_86_object);
	return 0;
}


func_3732(var_97_object)
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


func_4247(var_209_bool)
{
	var_211_int = 0;
	func_3996(var_211_int);
	var_209_bool = var_211_int == (int)10;
	return 0;
}


func_1690(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0);
	var_45_bool = var_24_object == 0; //@ne
	if(var_45_bool != 0) {
		var_46_string = "";
		func_1781("fdie");
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
		func_3884(var_99_string);
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


func_4254(var_286_bool)
{
	var_288_int = 0;
	func_3996(var_288_int);
	var_286_bool = var_288_int == (int)11;
	return 0;
}


func_3743(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_3748(var_57_bool, var_58_object, var_59_float)
{
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0;
	@@var_58_object:GetPosition(var_70_cvector);
	@@var_58_object:GetEyesHeight(var_69_float);
	var_78_float = GetByIndex(var_70_cvector, 1);
	var_78_float = var_78_float + var_69_float;
	SetByIndex(var_70_cvector, 1) = var_78_float;
	GetPosition(var_71_cvector);
	GetEyesHeight(var_69_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	var_79_float = var_79_float + var_69_float;
	SetByIndex(var_71_cvector, 1) = var_79_float;
	var_72_cvector = var_70_cvector - var_71_cvector;
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (float)0;
	var_81_int = var_72_cvector | var_72_cvector;
	var_82_float = sqrt(var_81_int);
	var_72_cvector = var_72_cvector / var_82_float;
	var_73_cvector = -var_72_cvector;
	var_83_float = var_72_cvector * var_59_float;
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_85_cvector = var_73_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3931(var_84_cvector, var_85_cvector);
	var_93_float = var_84_cvector * (int)25;
	var_94_int = var_83_float + var_93_float;
	var_74_cvector = var_94_int - CVector(0.0, 10.0, 0.0);
	var_75_cvector = var_71_cvector + var_74_cvector;
	IsOverrideActive(var_76_bool);
	var_96_bool = var_76_bool;
	if(var_96_bool != 0) {
		var_57_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_75_cvector, var_73_cvector, (bool)1);
	var_98_float = GetByIndex(var_74_cvector, 0);
	var_99_float = GetByIndex(var_74_cvector, 2);
	Rotate(var_98_float, var_99_float);
	var_100_bool = 0;
	func_5226(var_100_bool);
	if(var_100_bool != 0) {
	} else {
		HasAnimationTrack(var_77_bool, "head");
		var_102_bool = var_77_bool;
		if(var_102_bool == 0) goto Label_3811;
		LookAsyncCamera("head");
	}
Label_3811:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_57_bool = 1;
	return 18;
	
}


func_4261(var_292_bool)
{
	var_294_int = 0;
	func_3996(var_294_int);
	var_292_bool = var_294_int == (int)12;
	return 0;
}


func_4775(var_38_object)
{
	var_39_object = Obj();
	var_38_object = var_39_object;
	func_4991(var_39_object);
	return 0;
}


func_4268(var_404_bool)
{
	var_406_int = 0;
	func_4005(var_406_int);
	var_412_bool = var_406_int >= (int)12;
	if(var_412_bool != 0) {
		var_404_bool = 1;
		return 0;
	}
	var_404_bool = 0;
	return 0;
}


func_4781(var_24_object)
{
	var_25_bool = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	func_3524(var_25_bool, var_26_object);
	if(var_25_bool != 0) {
		var_29_object = Obj();
		func_3925(var_29_object);
		ReportReputationChange(var_24_object, var_29_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_2742(var_0_object, var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	GetPosition(var_43_cvector);
	@@@var_0_object:GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_43_cvector - var_44_cvector;
	func_3931(var_51_cvector, var_52_cvector);
	var_59_float = var_45_cvector * (float)0.75;
	var_50_cvector = var_51_cvector + var_59_float;
	func_3931(var_49_cvector, var_50_cvector);
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


func_4279(var_109_int)
{
	var_110_int = 0; var_111_int = 0;
	GetVariable("branch", var_111_int);
	var_114_bool = var_111_int == (int)0;
	if(var_114_bool != 0) {
		var_109_int = 1;
		return 2;
	EMIT "GOTO 0x10c6";
	}
	var_116_bool = var_111_int == (int)1;
	if(var_116_bool != 0) {
		var_109_int = 2;
		return 2;
	}
	var_109_int = 3;
	return 2;
}


func_4794(var_22_bool, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj();
	var_27_bool = var_23_string == "heal";
	if(var_27_bool != 0) {
		FindActor(var_25_object, "player");
		var_29_bool = 0; var_30_object = Obj();
		var_25_object = var_30_object;
		func_5035(var_30_object);
		var_29_bool = var_22_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_22_bool = 0;
	return 2;
}


func_4296(var_228_int)
{
	var_229_int = 0; var_230_int = 0;
	GetVariable("branch", var_230_int);
	var_230_int = var_228_int;
	return 2;
}


func_4810(var_33_string)
{
	var_34_object = Obj(); var_35_object = Obj();
	var_37_bool = var_33_string == "heal";
	if(var_37_bool != 0) {
		FindActor(var_35_object, "player");
		var_35_object = Obj();
		func_5038();
		var_35_object = 0;
	}
	return 2;
}


func_3278(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_4302(var_553_int, var_554_object)
{
	var_555_int = 0; var_556_int = 0;
	@@var_554_object:GetItemID(var_556_int);
	var_556_int = var_553_int;
	return 2;
}


func_4307(var_530_int, var_531_object, var_532_int)
{
	var_533_int = 0; var_534_int = 0; var_535_int = 0; var_536_string = ""; var_537_bool = 0; var_538_bool = 0; var_539_int = 0; var_540_int = 0; var_541_int = 0; var_542_int = 0; var_543_string = ""; var_544_bool = 0; var_545_bool = 0; var_546_int = 0;
	var_548_bool = var_532_int == (int)0;
	if(var_548_bool != 0) {
		func_3996((int)0);
		var_549_int = var_540_int;
		var_542_int = 1;

	Label_4317:
		var_550_bool = var_542_int <= var_540_int;
		if(var_550_bool != 0) {
			var_552_bool = var_542_int != (int)1;
			if(var_552_bool != 0) {
				"Price" = "Price" + var_542_int;
			}
			var_553_int = 0; var_554_object = Obj();
			var_531_object = var_554_object;
			func_4302(var_553_int, var_554_object);
			HasInvItemProperty(var_544_bool, var_553_int, var_543_string);
			var_557_bool = var_544_bool == 0; //@nz
			if(var_557_bool != 0) {
			} else {
				var_559_int = 0; var_560_object = Obj();
				var_531_object = var_560_object;
				func_4302(var_559_int, var_560_object);
				GetInvItemProperty((int)0, var_559_int, var_543_string);
		}
			var_541_int = var_530_int;
			return 14;
	}
		var_561_int = 0; var_562_object = Obj();
		var_531_object = var_562_object;
		func_4302(var_561_int, var_562_object);
		var_564_int = "BarterPrice" + var_532_int;
		HasInvItemProperty(var_545_bool, var_561_int, var_564_int);
		var_565_bool = var_545_bool == 0; //@nz
		if(var_565_bool != 0) {
			return 14;
		}
		var_566_int = 0; var_567_object = Obj();
		var_531_object = var_567_object;
		func_4302(var_566_int, var_567_object);
		var_569_int = "BarterPrice" + var_532_int;
		GetInvItemProperty(var_546_int, var_566_int, var_569_int);
		var_571_bool = var_546_int > (int)0;
		if(var_571_bool != 0) {
			var_546_int = (int)0;
			return 14;
		}
		var_530_int = -var_546_int;
		return 14;
	}
	var_542_int = var_542_int + (int)1;
	goto Label_4317;
	
}


func_2772(var_0_object, var_1_object, var_2_object, var_86_object)
{
	var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_float = 0;
	var_0_object = var_86_object;
	var_97_cvector = CVector(0,0,0); var_98_float = 0;
	func_2742(var_96_float, var_97_cvector, (float)1.7453293800354004);
	var_97_cvector = var_92_cvector;
	var_93_float = var_92_cvector | var_92_cvector;
	var_128_bool = var_93_float < (float)2500.0;
	if(var_128_bool != 0) {
		var_129_cvector = CVector(0,0,0); var_130_float = 0;
		func_2742(var_96_float, var_129_cvector, (float)2.6179938316345215);
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
	func_3504(var_139_cvector);
	var_1_object = var_139_cvector + var_92_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_2814:
	MovePoint(var_1_object, (int)1, var_94_bool);
	var_145_bool = var_94_bool;
	if(var_145_bool != 0) {
		var_146_bool = var_0_object == 0; //@ne
		if(var_146_bool != 0) {
			goto Label_2844;
		EMIT "GOTO 0xb1a";

		Label_2844:
			return 10;
		}
		var_147_cvector = CVector(0,0,0); var_148_float = 0;
		func_2742(var_96_float, var_147_cvector, (float)2.6179938316345215);
		var_147_cvector = var_95_cvector;
		var_96_float = var_95_cvector | var_95_cvector;
		var_150_bool = var_96_float >= (float)2500.0;
		if(var_150_bool != 0) {
			var_151_cvector = CVector(0,0,0);
			func_3504(var_151_cvector);
			var_1_object = var_151_cvector + var_95_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_2844;
		}
	}
	var_154_bool = var_2_object == 0; //@nz
	if(var_154_bool == 1) goto Label_2814;
	
}


func_4823(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = "";
	var_80_int = var_77_int;
	if(var_80_int != 0) {
		"idle" = "idle" + var_77_int;
	}
	var_79_string = var_76_string;
	return 2;
}


func_4830(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	var_73_int = 0;
	
Label_4832:
	var_76_string = ""; var_77_int = 0;
	var_73_int = var_77_int;
	func_4823(var_76_string, var_77_int);
	HasAnimation(var_74_bool, "all", var_76_string);
	var_81_bool = var_74_bool == 0; //@nz
	if(var_81_bool != 0) {
	} else {
		var_73_int = var_73_int + (int)1;
		goto Label_4832;
	}
	var_73_int = var_70_int;
	return 4;
	
}


func_3294(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	GetDirection(var_76_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_object;
	func_3509(var_78_cvector, var_79_object);
	var_78_cvector = var_77_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_3947(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= (float)-0.3420201241970062;
	return 4;
}


func_3817()
{
	var_443_bool = 0; var_444_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_446_bool = 0;
	func_5226(var_446_bool);
	if(var_446_bool != 0) {
	} else {
		HasAnimationTrack(var_444_bool, "head");
		var_448_bool = var_444_bool;
		if(var_448_bool == 0) goto Label_3834;
		UnlookAsync("head");
	}
Label_3834:
	return 2;
	
}


func_4847(var_64_int)
{
	var_66_bool = 0;
	func_5250(var_66_bool);
	if(var_66_bool != 0) {
		var_64_int = 2;
	} else {
		var_64_int = 0;
	}
	return 0;
	
}


func_1781(var_46_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_47_string = "";
	var_46_string = var_47_string;
	func_3884(var_47_string);
	PlayAnimation("all", var_46_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_46_string);
	RemoveEnvelope();
	return 0;
}


func_3317(var_0_object, var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	GetPosition(var_43_cvector);
	@@@var_0_object:GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_43_cvector - var_44_cvector;
	func_3931(var_51_cvector, var_52_cvector);
	var_59_float = var_45_cvector * (float)0.75;
	var_50_cvector = var_51_cvector + var_59_float;
	func_3931(var_49_cvector, var_50_cvector);
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


func_4856(var_81_object)
{
	var_82_object = Obj();
	var_81_object = var_82_object;
	TaskCall(5);
	func_2432(var_83_object, var_82_object);
	TaskReturn();
	return 0;
}


func_3835(var_365_string)
{
	var_366_bool = 0; var_367_float = 0; var_368_float = 0; var_369_bool = 0; var_370_float = 0; var_371_float = 0;
	lshHasAnimation(var_369_bool, var_365_string);
	var_372_bool = var_369_bool;
	if(var_372_bool != 0) {
		lshGetAnimTimes(var_365_string, var_370_float, var_371_float);
		lshPlayAnimation(var_370_float, var_371_float, (bool)0);
	} else {
		var_375_int = "Can't find lsh animation : " + var_365_string;
		Trace(var_375_int);
	}
	return 6;
	
}


func_4864(var_33_int, var_34_object)
{
	var_35_bool = 0; var_36_object = Obj();
	var_34_object = var_36_object;
	func_3582(var_35_bool, var_36_object);
	if(var_35_bool != 0) {
		var_33_int = 2;
	} else {
		var_33_int = 0;
	}
	return 0;
	
}


func_4874(var_75_object)
{
	var_76_object = Obj();
	var_75_object = var_76_object;
	TaskCall(6);
	func_2707(var_76_object);
	TaskReturn();
	return 0;
}


func_3851(var_137_string, var_138_bool)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0;
	lshHasAnimation(var_144_bool, var_137_string);
	var_147_bool = var_144_bool;
	if(var_147_bool != 0) {
		lshGetAnimTimes(var_137_string, var_145_float, var_146_float);
		lshPlayAnimation(var_145_float, var_146_float, var_138_bool);
	} else {
		var_149_int = "Can't find lsh animation : " + var_137_string;
		Trace(var_149_int);
	}
	return 6;
	
}


func_4882(var_73_int, var_74_object)
{
	var_76_bool = 0; var_77_object = Obj();
	var_74_object = var_77_object;
	func_3582(var_76_bool, var_77_object);
	if(var_76_bool != 0) {
		var_73_int = 2;
	} else {
		var_73_int = 0;
	}
	return 0;
	
}


func_3347(var_0_object, var_1_object, var_2_object, var_139_object)
{
	var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_bool = 0; var_146_cvector = CVector(0,0,0); var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_bool = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0;
	var_0_object = var_139_object;
	var_153_cvector = CVector(0,0,0); var_154_float = 0;
	func_3317(var_152_float, var_153_cvector, (float)1.7453293800354004);
	var_153_cvector = var_148_cvector;
	var_149_float = var_148_cvector | var_148_cvector;
	var_179_bool = var_149_float < (float)2500.0;
	if(var_179_bool != 0) {
		var_180_cvector = CVector(0,0,0); var_181_float = 0;
		func_3317(var_152_float, var_180_cvector, (float)2.6179938316345215);
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
	func_3504(var_190_cvector);
	var_1_object = var_190_cvector + var_148_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_3389:
	MovePoint(var_1_object, (int)1, var_150_bool);
	var_194_bool = var_150_bool;
	if(var_194_bool != 0) {
		var_195_bool = var_0_object == 0; //@ne
		if(var_195_bool != 0) {
			goto Label_3419;
		EMIT "GOTO 0xd59";

		Label_3419:
			return 10;
		}
		var_196_cvector = CVector(0,0,0); var_197_float = 0;
		func_3317(var_152_float, var_196_cvector, (float)2.6179938316345215);
		var_196_cvector = var_151_cvector;
		var_152_float = var_151_cvector | var_151_cvector;
		var_199_bool = var_152_float >= (float)2500.0;
		if(var_199_bool != 0) {
			var_200_cvector = CVector(0,0,0);
			func_3504(var_200_cvector);
			var_1_object = var_200_cvector + var_151_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_3419;
		}
	}
	var_203_bool = var_2_object == 0; //@nz
	if(var_203_bool == 1) goto Label_3389;
	
}


func_4371(var_67_float)
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


func_3866(var_90_object)
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


func_4892(var_110_object)
{
	var_111_object = Obj();
	var_110_object = var_111_object;
	TaskCall(7);
	func_2959(var_112_object, var_113_cvector, var_114_bool, var_111_object);
	TaskReturn();
	return 0;
}


func_4385(var_38_object)
{
	var_39_int = 0;
	func_4296(var_39_int);
	var_44_bool = var_39_int == (int)1;
	if(var_44_bool != 0) {
		WorkWithCorpse(var_38_object);
	} else {
		Barter(var_38_object);
	}
	return 0;
	
}


func_1828()
{
	var_23_bool = 0;
	func_3743(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		func_4985();
	}
	return 0;
}


func_3877()
{
	var_24_bool = 0;
	func_5226(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4900(var_30_bool, var_31_object, var_32_object, var_33_float)
{
	var_34_string = ""; var_35_bool = 0; var_36_string = ""; var_37_bool = 0;
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_32_object = var_39_object;
	func_3529(var_38_bool, var_39_object, "class");
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
	EMIT "GOTO 0x1342";
	}
	var_52_bool = var_36_string == "rat_big";
	if(var_52_bool != 0) {
		var_30_bool = 0;
		return 4;
	EMIT "GOTO 0x1342";
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
		func_3516(var_57_float, var_58_object);
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
		func_3516(var_69_float, var_70_object);
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


func_2346()
{
	var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_bool = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_bool = 0;
	WaitForAnimEnd();
	var_68_bool = 0;
	func_3743(var_68_bool);
	var_69_bool = var_68_bool == 0; //@nz
	if(var_69_bool != 0) {
		return 14;
	}
	func_4830((int)0);
	var_70_int = var_61_int;
	var_62_int = 0;
	
Label_2360:
	var_83_bool = 0;
	var_83_bool = 0;
	var_85_bool = var_62_int < (int)5;
	if(var_85_bool != 0) {
		var_86_bool = 0;
		func_3743(var_86_bool);
		if(var_86_bool != 0) {
			var_83_bool = 1;
		}
	}
	if(var_83_bool != 0) {
		irand(var_63_int, (int)3);
		var_89_bool = var_63_int == (int)0;
		if(var_89_bool != 0) {
			var_90_int = var_61_int;
			if(var_90_int == 0) goto Label_2393;
			irand(var_64_int, var_61_int);
			var_92_string = ""; var_93_int = 0;
			var_64_int = var_93_int;
			func_4823(var_92_string, var_93_int);
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
						goto Label_2422;
					}
					goto Label_2411;
				}
				var_104_int = var_62_int;
				if(var_104_int == 0) goto Label_2411;
				goto Label_2422;
		}
		Label_2411:
			var_95_bool = 0;
			func_2425(var_95_bool);
			var_96_bool = var_95_bool == 0; //@nz
			if(var_96_bool != 0) {
				goto Label_2422;
			}
			ResetAAS();
			var_62_int = var_62_int + (int)1;
			goto Label_2360;

		}
	}
Label_2422:
	ResetAAS();
	return 14;
	
}


func_3884(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	IsExisting3DSound(var_56_bool, var_47_string);
	var_64_bool = var_56_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_57_int = 0;

	Label_3890:
		var_66_int = var_57_int + (int)1;
		var_67_int = var_47_string + var_66_int;
		IsExisting3DSound(var_58_bool, var_67_int);
		var_68_bool = var_58_bool == 0; //@nz
		if(var_68_bool != 0) {
		} else {
			var_57_int = var_57_int + (int)1;
			goto Label_3890;
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


func_4398(var_120_int, var_121_int)
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
		if(var_147_bool == 0) goto Label_4416;
		return 4;
	}
Label_4416:
	var_133_int = var_133_int + var_120_int;
	var_140_bool = var_133_int == (int)0;
	if(var_140_bool != 0) {
		return 4;
	}
	var_141_int = 0; var_142_string = "";
	func_4645(var_141_int, "Money");
	AddItem(var_134_bool, var_141_int, (int)0, var_133_int);
	return 4;
	
}


func_4429(var_234_string)
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


func_2897(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_3925(var_109_object)
{
	var_110_object = Obj(); var_111_object = Obj();
	self(var_111_object);
	var_111_object = var_109_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3931(var_53_cvector, var_54_cvector)
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


func_4446()
{
	var_228_int = 0;
	func_4296(var_228_int);
	var_233_bool = var_228_int != (int)1;
	if(var_233_bool != 0) {
		return 0;
	}
	var_234_string = "";
	func_4429("liver");
	var_245_string = "";
	func_4429("kidney");
	var_246_string = "";
	func_4429("heart");
	var_247_string = "";
	func_4429("blood");
	return 0;
}


func_2913(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	GetDirection(var_76_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_object;
	func_3509(var_78_cvector, var_79_object);
	var_78_cvector = var_77_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_3947(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= (float)-0.3420201241970062;
	return 4;
}


func_3941(var_505_object)
{
	var_506_object = Obj(); var_507_object = Obj();
	CreateObjectVector(var_507_object);
	var_507_object = var_505_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4966(var_24_int)
{
	var_24_int = 0;
	return 0;
}


func_4969()
{
	return 0;
}


func_4971(var_208_int)
{
	var_208_int = 0;
	return 0;
}


func_3947(var_84_float, var_85_cvector, var_86_cvector)
{
	var_87_int = var_85_cvector | var_86_cvector;
	var_88_int = var_85_cvector | var_85_cvector;
	var_89_int = var_86_cvector | var_86_cvector;
	var_90_float = var_88_int * var_89_int;
	var_91_float = sqrt(var_90_float);
	var_84_float = var_87_int / var_91_float;
	return 0;
}


func_4974()
{
	return 0;
}


func_4976(var_24_int)
{
	var_24_int = 2;
	return 0;
}


func_2929(var_0_object, var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0;
	GetPosition(var_43_cvector);
	@@@var_0_object:GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_43_cvector - var_44_cvector;
	func_3931(var_51_cvector, var_52_cvector);
	var_59_float = var_45_cvector * (float)0.75;
	var_50_cvector = var_51_cvector + var_59_float;
	func_3931(var_49_cvector, var_50_cvector);
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


func_4979(var_32_object)
{
	var_33_object = Obj();
	var_32_object = var_33_object;
	func_5232(var_33_object);
	return 0;
}


func_3955(var_74_float, var_75_cvector, var_76_cvector)
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


func_4470(var_114_bool)
{
	var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_bool = 0;
	var_119_bool = var_114_bool;
	if(var_119_bool != 0) {
		var_120_int = 0; var_121_int = 0;
		var_123_int = 0;
		func_3996(var_123_int);
		var_130_float = var_123_int * (int)100;
		var_121_int = (int)100 + var_130_float;
		func_4398((int)0, var_121_int);
		irand(var_117_int, (int)8);
		var_150_bool = var_117_int == (int)0;
		if(var_150_bool != 0) {
			var_151_int = 0; var_152_string = "";
			func_4645(var_151_int, "lemon");
			AddItem(var_118_bool, var_151_int, (int)0, (int)1);
		} else {
			var_156_bool = var_117_int == (int)1;
			if(var_156_bool != 0) {
				var_157_int = 0; var_158_string = "";
				func_4645(var_157_int, "rusk");
				AddItem(var_118_bool, var_157_int, (int)0, (int)1);
				goto Label_4558;
			}
			var_162_bool = var_117_int == (int)2;
			if(var_162_bool != 0) {
				var_163_int = 0; var_164_string = "";
				func_4645(var_163_int, "hook");
				AddItem(var_118_bool, var_163_int, (int)0, (int)1);
				goto Label_4558;
			}
			var_168_bool = var_117_int == (int)4;
			if(var_168_bool != 0) {
				var_169_int = 0; var_170_string = "";
				func_4645(var_169_int, "syringe");
				AddItem(var_118_bool, var_169_int, (int)0, (int)1);
				goto Label_4558;
			}
			var_174_bool = var_117_int == (int)5;
			if(var_174_bool != 0) {
				var_175_int = 0; var_176_string = "";
				func_4645(var_175_int, "watch");
				AddItem(var_118_bool, var_175_int, (int)0, (int)1);
				goto Label_4558;
			}
			var_180_bool = var_117_int == (int)6;
			if(var_180_bool == 0) goto Label_4558;
			var_181_int = 0; var_182_string = "";
			func_4645(var_181_int, "razor");
			AddItem(var_118_bool, var_181_int, (int)0, (int)1);
	}
		var_185_int = 0; var_186_int = 0;
		var_188_int = 0;
		func_3996(var_188_int);
		var_190_float = var_188_int * (int)50;
		var_186_int = (int)50 + var_190_float;
		func_4398((int)0, var_186_int);
		irand(var_117_int, (int)7);
		var_193_bool = var_117_int == (int)0;
		if(var_193_bool != 0) {
			var_194_int = 0; var_195_string = "";
			func_4645(var_194_int, "beads");
			AddItem(var_118_bool, var_194_int, (int)0, (int)1);
			goto Label_4644;
		}
		var_199_bool = var_117_int == (int)1;
		if(var_199_bool != 0) {
			var_200_int = 0; var_201_string = "";
			func_4645(var_200_int, "bracelet");
			AddItem(var_118_bool, var_200_int, (int)0, (int)1);
			goto Label_4644;
		}
		var_205_bool = var_117_int == (int)2;
		if(var_205_bool != 0) {
			var_206_int = 0; var_207_string = "";
			func_4645(var_206_int, "ear_ring");
			AddItem(var_118_bool, var_206_int, (int)0, (int)1);
			goto Label_4644;
		}
		var_211_bool = var_117_int == (int)3;
		if(var_211_bool != 0) {
			var_212_int = 0; var_213_string = "";
			func_4645(var_212_int, "gold_ring");
			AddItem(var_118_bool, var_212_int, (int)0, (int)1);
			goto Label_4644;
		}
		var_217_bool = var_117_int == (int)4;
		if(var_217_bool != 0) {
			var_218_int = 0; var_219_string = "";
			func_4645(var_218_int, "silver_ring");
			AddItem(var_118_bool, var_218_int, (int)0, (int)1);
			goto Label_4644;
		}
		var_223_bool = var_117_int == (int)5;
		if(var_223_bool == 0) goto Label_4644;
		var_224_int = 0; var_225_string = "";
		func_4645(var_224_int, "flower");
		AddItem(var_118_bool, var_224_int, (int)0, (int)1);
	}
Label_4558:
	goto Label_4644;
	
Label_4644:
	return 4;
	
}


func_2425(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_4985()
{
	return 0;
}


func_2427()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3964(var_83_float, var_84_cvector)
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


func_4986(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0;
	CanSee(var_30_bool, var_28_object);
	var_30_bool = var_27_bool;
	return 2;
}


func_4991(var_39_object)
{
	var_40_object = Obj();
	var_39_object = var_40_object;
	TaskCall(8);
	func_3153(var_41_object, var_42_cvector, var_43_bool, var_40_object);
	TaskReturn();
	return 0;
}


func_2432(var_0_object, var_82_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0;
	var_0_object = var_82_object;
	func_2483(var_89_bool);
	GetDirection(var_87_cvector);
	var_97_cvector = CVector(0,0,0); var_98_object = Obj();
	var_98_object = var_0_object;
	func_3509(var_97_cvector, var_98_object);
	var_97_cvector = var_88_cvector;
	var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0);
	var_87_cvector = var_104_cvector;
	var_88_cvector = var_105_cvector;
	func_3974(var_103_float, var_104_cvector, var_105_cvector);
	var_128_bool = var_103_float < (int)0;
	if(var_128_bool != 0) {
		var_129_object = Obj();
		var_129_object = var_0_object;
		func_3732(var_129_object);
		var_89_bool = 1;
	} else {
		Sleep((float)1.5, var_89_bool);
	}
	var_138_bool = var_89_bool;
	if(var_138_bool != 0) {
		var_139_object = Obj();
		var_139_object = var_0_object;
		func_3732(var_139_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_3974(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_72_cvector = var_75_cvector;
	var_73_cvector = var_76_cvector;
	func_3955(var_74_float, var_75_cvector, var_76_cvector);
	var_83_float = 0; var_84_cvector = CVector(0,0,0);
	var_72_cvector = var_84_cvector;
	func_3964(var_83_float, var_84_cvector);
	var_92_float = 0; var_93_cvector = CVector(0,0,0);
	var_73_cvector = var_93_cvector;
	func_3964(var_92_float, var_93_cvector);
	var_94_float = var_83_float * var_92_float;
	var_71_float = var_74_float / var_94_float;
	return 0;
}


func_4999(var_36_bool, var_37_object)
{
	var_38_bool = 0; var_39_bool = 0;
	CanSee(var_39_bool, var_37_object);
	var_36_bool = 1;
	var_40_bool = var_39_bool;
	if(var_40_bool != 1) {
		var_41_float = 0; var_42_object = Obj();
		var_37_object = var_42_object;
		func_3516(var_41_float, var_42_object);
		var_50_bool = var_41_float <= (int)4000000;
		if(var_50_bool != 1) {
			var_36_bool = 0;
		}
	}
	return 2;
}


func_2959(var_0_object, var_1_object, var_2_object, var_111_object)
{
	var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_float = 0; var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_float = 0;
	var_0_object = var_111_object;
	var_125_cvector = CVector(0,0,0); var_126_float = 0;
	func_2929(var_124_float, var_125_cvector, (float)1.7453293800354004);
	var_125_cvector = var_120_cvector;
	var_121_float = var_120_cvector | var_120_cvector;
	var_156_bool = var_121_float < (float)2500.0;
	if(var_156_bool != 0) {
		var_157_cvector = CVector(0,0,0); var_158_float = 0;
		func_2929(var_124_float, var_157_cvector, (float)2.6179938316345215);
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
	func_3504(var_167_cvector);
	var_1_object = var_167_cvector + var_120_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_3001:
	MovePoint(var_1_object, (int)1, var_122_bool);
	var_173_bool = var_122_bool;
	if(var_173_bool != 0) {
		var_174_bool = var_0_object == 0; //@ne
		if(var_174_bool != 0) {
			goto Label_3031;
		EMIT "GOTO 0xbd5";

		Label_3031:
			return 10;
		}
		var_175_cvector = CVector(0,0,0); var_176_float = 0;
		func_2929(var_124_float, var_175_cvector, (float)2.6179938316345215);
		var_175_cvector = var_123_cvector;
		var_124_float = var_123_cvector | var_123_cvector;
		var_178_bool = var_124_float >= (float)2500.0;
		if(var_178_bool != 0) {
			var_179_cvector = CVector(0,0,0);
			func_3504(var_179_cvector);
			var_1_object = var_179_cvector + var_123_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_3031;
		}
	}
	var_182_bool = var_2_object == 0; //@nz
	if(var_182_bool == 1) goto Label_3001;
	
}


func_3472(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_5014(var_138_object)
{
	var_139_object = Obj();
	var_138_object = var_139_object;
	TaskCall(9);
	func_3347(var_140_object, var_141_cvector, var_142_bool, var_139_object);
	TaskReturn();
	return 0;
}


func_3991(var_127_int, var_128_string)
{
	var_129_int = 0; var_130_int = 0;
	GetVariable(var_128_string, var_130_int);
	var_130_int = var_127_int;
	return 2;
}


func_3996(var_123_int)
{
	var_124_float = 0; var_125_float = 0;
	GetGameTime(var_125_float);
	var_127_int = 0;
	var_127_int = var_125_float / (int)24;
	var_123_int = (int)1 + var_127_int;
	return 2;
}


func_5022(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj();
	var_54_object = var_56_object;
	func_4999(var_55_bool, var_56_object);
	var_55_bool = var_53_bool;
	return 0;
}


func_3488(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	GetDirection(var_76_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_object;
	func_3509(var_78_cvector, var_79_object);
	var_78_cvector = var_77_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_3947(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= (float)-0.3420201241970062;
	return 4;
}


func_4005(var_406_int)
{
	var_407_float = 0; var_408_float = 0;
	GetGameTime(var_408_float);
	var_409_int = 0;
	var_408_float = var_409_int;
	var_406_int = var_409_int % (int)24;
	return 2;
}


func_5029(var_206_object)
{
	var_207_object = Obj();
	var_206_object = var_207_object;
	func_5014(var_207_object);
	return 0;
}


func_5035(var_29_bool)
{
	var_29_bool = 0;
	return 0;
}


func_4013(var_28_object)
{
	@@var_28_object:SetReturnValue((int)100);
	return 0;
}


func_5038()
{
	return 0;
}


func_3504(var_93_cvector)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0);
	GetPosition(var_95_cvector);
	var_95_cvector = var_93_cvector;
	return 2;
}


func_5040(var_452_object)
{
	var_453_object = Obj(); var_454_object = Obj(); var_455_object = Obj(); var_456_object = Obj(); var_457_int = 0; var_458_int = 0; var_459_int = 0; var_460_int = 0; var_461_object = Obj(); var_462_int = 0; var_463_bool = 0; var_464_int = 0; var_465_float = 0; var_466_int = 0; var_467_object = Obj(); var_468_int = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_int = 0; var_477_int = 0; var_478_object = Obj(); var_479_object = Obj(); var_480_object = Obj(); var_481_object = Obj(); var_482_object = Obj(); var_483_int = 0; var_484_int = 0; var_485_int = 0; var_486_int = 0; var_487_object = Obj(); var_488_int = 0; var_489_bool = 0; var_490_int = 0; var_491_float = 0; var_492_int = 0; var_493_object = Obj(); var_494_int = 0; var_495_int = 0; var_496_int = 0; var_497_int = 0; var_498_int = 0; var_499_int = 0; var_500_int = 0; var_501_int = 0; var_502_int = 0; var_503_int = 0; var_504_object = Obj();
	func_3941(Obj());
	var_505_object = var_479_object;
	CreateIntVector(var_480_object);
	CreateIntVector(var_481_object);
	CreateIntVector(var_482_object);
	@@var_452_object:GetSubContainerCount(var_483_int);
	var_484_int = 0;
	
Label_5054:
	var_508_bool = var_484_int < var_483_int;
	if(var_508_bool != 0) {
		@@var_452_object:GetItemCount(var_485_int, var_484_int);
		var_486_int = 0;

	Label_5059:
		var_509_bool = var_486_int < var_485_int;
		if(var_509_bool != 0) {
			@@var_452_object:GetItem(var_487_object, var_486_int, var_484_int);
			@@var_487_object:GetItemID(var_488_int);
			HasInvItemProperty(var_489_bool, var_488_int, "HasDurability");
			var_511_bool = var_489_bool;
			if(var_511_bool != 0) {
				@@var_487_object:HasProperty(var_489_bool, "durability");
				var_513_bool = var_489_bool;
				if(var_513_bool != 0) {
					@@var_487_object:GetProperty(var_490_int, "durability");
					var_515_bool = 0;
					var_515_bool = 0;
					var_517_bool = var_490_int < (int)100;
					if(var_517_bool != 0) {
						var_518_bool = 0; var_519_object = Obj();
						var_487_object = var_519_object;
						func_5187(var_518_bool, var_519_object);
						if(var_518_bool != 0) {
							var_515_bool = 1;
						}
					}
					if(var_515_bool != 0) {
						@@var_479_object:add(var_487_object);
						@@var_480_object:add(var_484_int);
						@@var_481_object:add(var_486_int);
						var_530_int = 0; var_531_object = Obj(); var_532_int = 0;
						var_487_object = var_531_object;
						func_4307(var_530_int, var_531_object, (int)0);
						var_530_int = var_491_float;
						var_574_float = (float)2.0 * var_490_int;
						var_576_float = var_574_float / (float)100.0;
						var_577_int = (float)1.0 + var_576_float;
						var_578_float = var_491_float * var_577_int;
						var_580_int = (int)100 - var_490_int;
						var_581_float = var_578_float * var_580_int;
						var_492_int = var_581_float / (int)300;
						var_583_bool = var_492_int == 0; //@nz
						if(var_583_bool != 0) {
							var_492_int = 1;
						}
						@@var_482_object:add(var_492_int);
					}
				}
			}
			var_487_object = 0;
			var_486_int = var_486_int + (int)1;
			goto Label_5059;
		}
		var_484_int = var_484_int + (int)1;
		goto Label_5054;
	}
	CreateIntVector(var_493_object);
	ChooseItem(var_479_object, var_493_object, var_482_object, "repair.xml");
	@@var_493_object:size(var_494_int);
	var_587_bool = var_494_int == 0; //@nz
	if(var_587_bool != 0) {
		return 52;
	}
	var_496_int = 0;
	
Label_5138:
	var_588_bool = var_496_int < var_494_int;
	if(var_588_bool != 0) {
		@@var_493_object:get(var_497_int, var_496_int);
		@@var_482_object:get(var_498_int, var_497_int);
		(int)0 = (int)0 + var_498_int;
		var_496_int = var_496_int + (int)1;
		goto Label_5138;
	}
	@@var_452_object:GetProperty("money", var_499_int);
	var_499_int = var_499_int - var_495_int;
	var_592_bool = var_499_int < (int)0;
	if(var_592_bool != 0) {
		return 52;
	}
	@@var_452_object:SetProperty("money", var_499_int);
	var_500_int = 0;
	
Label_5160:
	var_594_bool = var_500_int < var_494_int;
	if(var_594_bool != 0) {
		@@var_493_object:get(var_501_int, var_500_int);
		@@var_480_object:get(var_502_int, var_501_int);
		@@var_481_object:get(var_503_int, var_501_int);
		@@var_452_object:GetItem(var_504_object, var_503_int, var_502_int);
		@@var_504_object:SetProperty("durability", (int)100);
		@@var_452_object:SetItem(var_504_object, (int)1, var_503_int, var_502_int);
		var_504_object = 0;
		var_500_int = var_500_int + (int)1;
		goto Label_5160;
	}
	return 52;
}
EMIT "Stack[-12] = 0";
EMIT "Stack[-23] = 0";
EMIT "Stack[-24] = 0";
EMIT "Stack[-25] = 0";
EMIT "Stack[-26] = 0";


func_4018(var_389_bool)
{
	var_391_int = 0; var_392_string = "";
	func_3991(var_391_int, "branch");
	var_394_bool = var_391_int == (int)0;
	if(var_394_bool != 0) {
		var_389_bool = 1;
		return 0;
	}
	var_389_bool = 0;
	return 0;
}


func_2483(var_0_object)
{
	var_90_object = Obj();
	var_90_object = var_0_object;
	func_3866(var_90_object);
	return 0;
}


func_3509(var_55_cvector, var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	GetPosition(var_59_cvector);
	@@var_56_object:GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
	return 4;
}


func_3516(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_4030(var_429_bool)
{
	var_431_int = 0; var_432_string = "";
	func_3991(var_431_int, "branch");
	var_434_bool = var_431_int == (int)1;
	if(var_434_bool != 0) {
		var_429_bool = 1;
		return 0;
	}
	var_429_bool = 0;
	return 0;
}


func_3524(var_105_bool, var_106_object)
{
	var_107_bool = 0; var_108_bool = 0;
	IsPlayerActor(var_106_object, var_108_bool);
	var_108_bool = var_105_bool;
	return 2;
}


func_3529(var_50_bool, var_51_object, var_52_string)
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


func_4042(var_125_bool)
{
	var_127_int = 0; var_128_string = "";
	func_3991(var_127_int, "branch");
	var_132_bool = var_127_int == (int)2;
	if(var_132_bool != 0) {
		var_125_bool = 1;
		return 0;
	}
	var_125_bool = 0;
	return 0;
}


func_3541(var_43_bool, var_44_object)
{
	var_45_bool = 0; var_46_bool = 0;
	@@var_44_object:IsDead(var_46_bool);
	var_46_bool = var_43_bool;
	return 2;
}


func_4054(var_154_bool, var_155_object)
{
	var_156_bool = 0; var_157_object = Obj();
	var_155_object = var_157_object;
	func_4184(var_157_object);
	if(var_156_bool != 0) {
		var_154_bool = 1;
		return 0;
	}
	var_154_bool = 0;
	return 0;
}


func_3546(var_32_bool, var_33_object)
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
		func_3541(var_43_bool, var_44_object);
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


func_4064(var_189_bool, var_190_object)
{
	var_191_bool = 0; var_192_object = Obj();
	var_190_object = var_192_object;
	func_4191(var_192_object);
	if(var_191_bool != 0) {
		var_189_bool = 1;
		return 0;
	}
	var_189_bool = 0;
	return 0;
}


func_2024(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_2160(var_20_cvector, var_21_bool);
	return 0;
}


func_4074(var_165_bool, var_166_object)
{
	var_167_bool = 0; var_168_object = Obj();
	var_166_object = var_168_object;
	func_4198(var_168_object);
	if(var_167_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_2032(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_2167(var_25_bool, var_26_int);
	return 0;
}


func_4084(var_171_bool, var_172_object)
{
	var_173_bool = 0; var_174_object = Obj();
	var_172_object = var_174_object;
	func_4205(var_174_object);
	if(var_173_bool != 0) {
		var_171_bool = 1;
		return 0;
	}
	var_171_bool = 0;
	return 0;
}


func_3582(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0;
	var_32_bool = 0; var_33_object = Obj();
	var_29_object = var_33_object;
	func_3546(var_32_bool, var_33_object);
	var_49_bool = var_32_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_29_object = var_51_object;
	func_3529(var_50_bool, var_51_object, "noaccess");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_28_bool = 1;
		return 2;
	}
	@@var_29_object:GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == (int)0;
	return 2;
}


