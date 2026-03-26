// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/3,AddItem/4,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|A:SetReturnValue|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:hook|W:watch|W:alpha_pills|W:meradorm|W:beta_pills|W:monomicin|W:lockpick|W:rifle_ammo|W:revolver_ammo|W:samopal_ammo|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:bool:
// @RUN_OP: 0xd7c
// @RUN_TASK: 4
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2fc vars=int,int
// @TASK_3: vars= params=1
// @EVENT_0: op=0xcef vars=object
// @EVENT_6: op=0xcfd vars=
// @EVENT_22: op=0xd76 vars=object,int,float,float
// @EVENT_16: op=0xd78 vars=object,string
// @EVENT_41: op=0xd7a vars=object
// @TASK_4: vars=bool,bool,bool params=0
// @EVENT_0: op=0xd94 vars=object
// @EVENT_17: op=0xda8 vars=object
// @EVENT_30: op=0xdc0 vars=object,object,bool
// @EVENT_40: op=0xddc vars=object
// @EVENT_42: op=0xdf0 vars=object,string
// @EVENT_26: op=0xe15 vars=string
// @EVENT_1: op=0xe23 vars=object
// @EVENT_3: op=0xe36 vars=object
// @EVENT_7: op=0xe3c vars=int
// @EVENT_6: op=0xe48 vars=
// @EVENT_41: op=0xe5f vars=object
// @EVENT_10: op=0xed0 vars=object
// @EVENT_28: op=0xed4 vars=
// @TASK_5: vars= params=0
// @EVENT_0: op=0xeed vars=object
// @EVENT_17: op=0xf01 vars=object
// @EVENT_30: op=0xf19 vars=object,object,bool
// @EVENT_40: op=0xf35 vars=object
// @EVENT_42: op=0xf49 vars=object,string
// @EVENT_26: op=0xf6e vars=string
// @EVENT_6: op=0xf7c vars=
// @EVENT_1: op=0xf83 vars=object
// @TASK_6: vars=object params=1
// @EVENT_0: op=0x101f vars=object
// @EVENT_17: op=0x1033 vars=object
// @EVENT_30: op=0x104b vars=object,object,bool
// @EVENT_40: op=0x1067 vars=object
// @EVENT_42: op=0x107b vars=object,string
// @EVENT_26: op=0x10a0 vars=string
// @EVENT_41: op=0x10b9 vars=object
// @EVENT_7: op=0x10c2 vars=int
// @EVENT_6: op=0x10e5 vars=
// @EVENT_1: op=0x10ec vars=object
// @TASK_7: vars=object,int,int,bool,float,int params=1
// @TASK_8: vars=bool,object,bool params=6
// @EVENT_6: op=0x139e vars=
// @EVENT_7: op=0x13d6 vars=int
// @EVENT_1: op=0x13f1 vars=object
// @EVENT_2: op=0x1400 vars=object
// @EVENT_10: op=0x1486 vars=object
// @EVENT_41: op=0x1491 vars=object
// @STANDALONE_EVENT_16: op=0x198f vars=object,string
// @STANDALONE_EVENT_41: op=0x199c vars=object
// @STANDALONE_EVENT_22: op=0x19a2 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x19aa vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1a,0x72,0x2e6,0x2fc,0xce0,0xcfd,0xd5c,0xd76,0xd78,0xd7a,0xe15,0xe23,0xe36,0xe3c,0xe48,0xe5f,0xed0,0xf6e,0xf7c,0xf83,0x10a0,0x10b9,0x10e5,0x10ec,0x10fa,0x1102,0x1105,0x1396,0x139e,0x13d6,0x13f1,0x1400,0x1474,0x1486,0x1491,0x149a,0x14a5,0x1642,0x167a,0x1703,0x170a,0x171a,0x1723,0x172d,0x1779,0x177e,0x178a,0x1796,0x17a0,0x17aa,0x17b4,0x17be,0x17c8,0x17d2,0x17dc,0x17e6,0x17f0,0x17fa,0x1804,0x180e,0x1818,0x1822,0x1829,0x1830,0x1837,0x183e,0x1845,0x184c,0x1853,0x185a,0x1861,0x1868,0x186f,0x1876,0x188b,0x18ad,0x1987,0x199c,0x19a2,0x19aa,0x19b4,0x19d4,0x1a04,0x1a0a,0x1a4c,0x1a55,0x1a5d,0x1a67,0x1aba,0x1ac1,0x1ae4,0x1ae7,0x1ae9,0x1aec,0x1aee,0x1af1,0x1af8,0x1afb,0x1b0c,0x1b12,0x1b15,0x1b17,0x1b1a,0x1b58,0x1b62

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0;
	func_6948(var_20_bool);
	if(var_20_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	if((int)1 != 0) {
		func_5801();
		var_24_bool = var_20_bool == (int)45532;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_bool;
			func_6009(var_26_object);
		}
		var_29_bool = var_20_bool == (int)45530;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_bool;
			func_6009(var_31_object);
		}
		var_33_bool = var_20_bool == (int)45555;
		if(var_33_bool != 0) {
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_bool;
			func_6009(var_35_object);
		}
		var_37_bool = var_20_bool == (int)45580;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_bool;
			func_6009(var_39_object);
		}
		var_41_bool = var_20_bool == (int)45602;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_bool;
			func_6009(var_43_object);
		}
		var_45_bool = var_20_bool == (int)45603;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_bool;
			func_6009(var_47_object);
		}
		var_49_bool = var_20_bool == (int)38691;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_bool;
			func_6009(var_51_object);
		}
		var_53_bool = var_19_object == (int)45527;
		if(var_53_bool != 0) {
			var_54_bool = 0; var_55_object = Obj();
			var_55_object = var_1_object;
			func_6026(var_55_object);
			if(var_54_bool != 0) {
				var_62_string = "";
				func_742(var_20_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)543072);
				@@@var_0_bool:ClearReplies();
				var_80_bool = 0; var_81_object = Obj();
				var_81_object = var_1_object;
				func_6038(var_80_bool, var_81_object);
				if(var_80_bool != 0) {
					@@@var_0_bool:AddReply((int)543073, (int)45531, (int)45528);
				}
				var_94_bool = 0; var_95_object = Obj();
				var_95_object = var_1_object;
				func_6048(var_94_bool, var_95_object);
				if(var_94_bool != 0) {
					@@@var_0_bool:AddReply((int)543092, (int)45550, (int)45547);
				}
				var_103_bool = 0;
				var_103_bool = 1;
				var_104_bool = 0; var_105_object = Obj();
				var_105_object = var_1_object;
				func_6058(var_104_bool, var_105_object);
				if(var_104_bool != 1) {
					var_110_bool = 0; var_111_object = Obj();
					var_111_object = var_1_object;
					func_6098(var_110_bool, var_111_object);
					if(var_110_bool != 1) {
						var_103_bool = 0;
					}
				}
				if(var_103_bool != 0) {
					@@@var_0_bool:AddReply((int)543108, (int)45564, (int)45563);
				}
				var_119_bool = 0; var_120_object = Obj();
				var_120_object = var_1_object;
				func_6068(var_119_bool, var_120_object);
				if(var_119_bool != 0) {
					@@@var_0_bool:AddReply((int)543101, (int)45557, (int)45556);
				}
				var_128_bool = 0; var_129_object = Obj();
				var_129_object = var_1_object;
				func_6078(var_128_bool, var_129_object);
				if(var_128_bool != 0) {
					@@@var_0_bool:AddReply((int)543117, (int)45573, (int)45572);
				}
				var_137_bool = 0; var_138_object = Obj();
				var_138_object = var_1_object;
				func_6088(var_137_bool, var_138_object);
				if(var_137_bool != 0) {
					@@@var_0_bool:AddReply((int)543127, (int)45583, (int)45582);
				}
				var_146_bool = 0;
				var_146_bool = 1;
				var_147_bool = 0; var_148_object = Obj();
				var_148_object = var_1_object;
				func_6108(var_147_bool, var_148_object);
				if(var_147_bool != 1) {
					var_153_bool = 0; var_154_object = Obj();
					var_154_object = var_1_object;
					func_6118(var_153_bool, var_154_object);
					if(var_153_bool != 1) {
						var_146_bool = 0;
					}
				}
				if(var_146_bool != 0) {
					@@@var_0_bool:AddReply((int)543139, (int)45595, (int)45594);
				}
				var_162_bool = 0; var_163_object = Obj();
				var_163_object = var_1_object;
				func_6038(var_162_bool, var_163_object);
				if(var_162_bool != 0) {
					@@@var_0_bool:AddReply((int)543075, (int)-1, (int)45530);
				}
				var_167_bool = 0;
				var_167_bool = 1;
				var_168_bool = 0;
				var_168_bool = 1;
				var_169_bool = 0;
				var_169_bool = 1;
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_6048(var_170_bool, var_171_object);
				if(var_170_bool != 1) {
					var_172_bool = 0; var_173_object = Obj();
					var_173_object = var_1_object;
					func_6058(var_172_bool, var_173_object);
					if(var_172_bool != 1) {
						var_169_bool = 0;
					}
				}
				if(var_169_bool != 1) {
					var_174_bool = 0; var_175_object = Obj();
					var_175_object = var_1_object;
					func_6068(var_174_bool, var_175_object);
					if(var_174_bool != 1) {
						var_168_bool = 0;
					}
				}
				if(var_168_bool != 1) {
					var_176_bool = 0; var_177_object = Obj();
					var_177_object = var_1_object;
					func_6078(var_176_bool, var_177_object);
					if(var_176_bool != 1) {
						var_167_bool = 0;
					}
				}
				if(var_167_bool != 0) {
					@@@var_0_bool:AddReply((int)543100, (int)-1, (int)45555);
				}
				var_181_bool = 0; var_182_object = Obj();
				var_182_object = var_1_object;
				func_6088(var_181_bool, var_182_object);
				if(var_181_bool != 0) {
					@@@var_0_bool:AddReply((int)543125, (int)-1, (int)45580);
				}
				var_186_bool = 0;
				var_186_bool = 1;
				var_187_bool = 0;
				var_187_bool = 1;
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_object;
				func_6098(var_188_bool, var_189_object);
				if(var_188_bool != 1) {
					var_190_bool = 0; var_191_object = Obj();
					var_191_object = var_1_object;
					func_6108(var_190_bool, var_191_object);
					if(var_190_bool != 1) {
						var_187_bool = 0;
					}
				}
				if(var_187_bool != 1) {
					var_192_bool = 0; var_193_object = Obj();
					var_193_object = var_1_object;
					func_6118(var_192_bool, var_193_object);
					if(var_192_bool != 1) {
						var_186_bool = 0;
					}
				}
				if(var_186_bool != 0) {
					@@@var_0_bool:AddReply((int)543147, (int)-1, (int)45602);
				}
				var_197_bool = 0;
				var_197_bool = 1;
				var_198_bool = 0;
				var_198_bool = 1;
				var_199_bool = 0; var_200_object = Obj();
				var_200_object = var_1_object;
				func_6128(var_199_bool, var_200_object);
				if(var_199_bool != 1) {
					var_205_bool = 0; var_206_object = Obj();
					var_206_object = var_1_object;
					func_6138(var_205_bool, var_206_object);
					if(var_205_bool != 1) {
						var_198_bool = 0;
					}
				}
				if(var_198_bool != 1) {
					var_211_bool = 0; var_212_object = Obj();
					var_212_object = var_1_object;
					func_6148(var_211_bool, var_212_object);
					if(var_211_bool != 1) {
						var_197_bool = 0;
					}
				}
				if(var_197_bool != 0) {
					@@@var_0_bool:AddReply((int)543148, (int)-1, (int)45603);
				}
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_6038(var_220_bool, var_221_object);
				if(var_220_bool != 0) {
					@@@var_0_bool:AddReply((int)543074, (int)-1, (int)45529);
				}
				var_225_bool = 0;
				var_225_bool = 1;
				var_226_bool = 0; var_227_object = Obj();
				var_227_object = var_1_object;
				func_6048(var_226_bool, var_227_object);
				if(var_226_bool != 1) {
					var_228_bool = 0; var_229_object = Obj();
					var_229_object = var_1_object;
					func_6058(var_228_bool, var_229_object);
					if(var_228_bool != 1) {
						var_225_bool = 0;
					}
				}
				if(var_225_bool != 0) {
					@@@var_0_bool:AddReply((int)543090, (int)-1, (int)45545);
				}
				var_233_bool = 0;
				var_233_bool = 1;
				var_234_bool = 0; var_235_object = Obj();
				var_235_object = var_1_object;
				func_6048(var_234_bool, var_235_object);
				if(var_234_bool != 1) {
					var_236_bool = 0; var_237_object = Obj();
					var_237_object = var_1_object;
					func_6058(var_236_bool, var_237_object);
					if(var_236_bool != 1) {
						var_233_bool = 0;
					}
				}
				if(var_233_bool != 0) {
					@@@var_0_bool:AddReply((int)543099, (int)-1, (int)45554);
				}
				var_241_bool = 0;
				var_241_bool = 1;
				var_242_bool = 0; var_243_object = Obj();
				var_243_object = var_1_object;
				func_6088(var_242_bool, var_243_object);
				if(var_242_bool != 1) {
					var_244_bool = 0; var_245_object = Obj();
					var_245_object = var_1_object;
					func_6118(var_244_bool, var_245_object);
					if(var_244_bool != 1) {
						var_241_bool = 0;
					}
				}
				if(var_241_bool != 0) {
					@@@var_0_bool:AddReply((int)543126, (int)-1, (int)45581);
				}
				var_249_bool = 0;
				var_249_bool = 1;
				var_250_bool = 0;
				var_250_bool = 1;
				var_251_bool = 0;
				var_251_bool = 1;
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_6098(var_252_bool, var_253_object);
				if(var_252_bool != 1) {
					var_254_bool = 0; var_255_object = Obj();
					var_255_object = var_1_object;
					func_6108(var_254_bool, var_255_object);
					if(var_254_bool != 1) {
						var_251_bool = 0;
					}
				}
				if(var_251_bool != 1) {
					var_256_bool = 0; var_257_object = Obj();
					var_257_object = var_1_object;
					func_6128(var_256_bool, var_257_object);
					if(var_256_bool != 1) {
						var_250_bool = 0;
					}
				}
				if(var_250_bool != 1) {
					var_258_bool = 0; var_259_object = Obj();
					var_259_object = var_1_object;
					func_6148(var_258_bool, var_259_object);
					if(var_258_bool != 1) {
						var_249_bool = 0;
					}
				}
				if(var_249_bool != 0) {
					@@@var_0_bool:AddReply((int)543149, (int)-1, (int)45604);
				}
				var_263_bool = 0;
				var_263_bool = 1;
				var_264_bool = 0;
				var_264_bool = 1;
				var_265_bool = 0;
				var_265_bool = 1;
				var_266_bool = 0;
				var_266_bool = 1;
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_6068(var_267_bool, var_268_object);
				if(var_267_bool != 1) {
					var_269_bool = 0; var_270_object = Obj();
					var_270_object = var_1_object;
					func_6078(var_269_bool, var_270_object);
					if(var_269_bool != 1) {
						var_266_bool = 0;
					}
				}
				if(var_266_bool != 1) {
					var_271_bool = 0; var_272_object = Obj();
					var_272_object = var_1_object;
					func_6118(var_271_bool, var_272_object);
					if(var_271_bool != 1) {
						var_265_bool = 0;
					}
				}
				if(var_265_bool != 1) {
					var_273_bool = 0; var_274_object = Obj();
					var_274_object = var_1_object;
					func_6138(var_273_bool, var_274_object);
					if(var_273_bool != 1) {
						var_264_bool = 0;
					}
				}
				if(var_264_bool != 1) {
					var_275_bool = 0; var_276_object = Obj();
					var_276_object = var_1_object;
					func_6148(var_275_bool, var_276_object);
					if(var_275_bool != 1) {
						var_263_bool = 0;
					}
				}
				if(var_263_bool != 0) {
					@@@var_0_bool:AddReply((int)543150, (int)-1, (int)45605);
				}
				return 0;
			}
			var_280_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536854);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536855, (int)-1, (int)38691);
			var_285_bool = 0;
			var_285_bool = 0;
			var_286_bool = 0; var_287_object = Obj();
			var_287_object = var_1_object;
			func_6038(var_286_bool, var_287_object);
			if(var_286_bool != 0) {
				var_288_bool = 0; var_289_object = Obj();
				var_289_object = var_1_object;
				func_6158(var_288_bool, var_289_object);
				if(var_288_bool != 0) {
					var_285_bool = 1;
				}
			}
			if(var_285_bool != 0) {
				@@@var_0_bool:AddReply((int)536856, (int)38693, (int)38692);
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_6038(var_307_bool, var_308_object);
			if(var_307_bool != 0) {
				var_309_bool = 0; var_310_object = Obj();
				var_310_object = var_1_object;
				func_6168(var_309_bool, var_310_object);
				if(var_309_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				@@@var_0_bool:AddReply((int)536870, (int)38709, (int)38708);
			}
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_object;
			func_6048(var_319_bool, var_320_object);
			if(var_319_bool != 0) {
				@@@var_0_bool:AddReply((int)536885, (int)38724, (int)38723);
			}
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_6058(var_324_bool, var_325_object);
			if(var_324_bool != 0) {
				@@@var_0_bool:AddReply((int)536904, (int)38743, (int)38742);
			}
			var_329_bool = 0; var_330_object = Obj();
			var_330_object = var_1_object;
			func_6068(var_329_bool, var_330_object);
			if(var_329_bool != 0) {
				@@@var_0_bool:AddReply((int)536916, (int)38755, (int)38754);
			}
			var_334_bool = 0;
			var_334_bool = 0;
			var_335_bool = 0; var_336_object = Obj();
			var_336_object = var_1_object;
			func_6088(var_335_bool, var_336_object);
			if(var_335_bool != 0) {
				var_337_bool = 0; var_338_object = Obj();
				var_338_object = var_1_object;
				func_6014(var_338_object);
				if(var_337_bool != 0) {
					var_334_bool = 1;
				}
			}
			if(var_334_bool != 0) {
				@@@var_0_bool:AddReply((int)536931, (int)38770, (int)38769);
			}
			var_346_bool = 0; var_347_object = Obj();
			var_347_object = var_1_object;
			func_6108(var_346_bool, var_347_object);
			if(var_346_bool != 0) {
				@@@var_0_bool:AddReply((int)536943, (int)38782, (int)38781);
			}
			var_351_bool = 0; var_352_object = Obj();
			var_352_object = var_1_object;
			func_6118(var_351_bool, var_352_object);
			if(var_351_bool != 0) {
				@@@var_0_bool:AddReply((int)536961, (int)38800, (int)38799);
			}
			var_356_bool = 0; var_357_object = Obj();
			var_357_object = var_1_object;
			func_6128(var_356_bool, var_357_object);
			if(var_356_bool != 0) {
				@@@var_0_bool:AddReply((int)536978, (int)38817, (int)38816);
			}
			var_361_bool = 0;
			var_361_bool = 0;
			var_362_bool = 0; var_363_object = Obj();
			var_363_object = var_1_object;
			func_6138(var_362_bool, var_363_object);
			if(var_362_bool != 0) {
				var_364_bool = 0; var_365_object = Obj();
				var_365_object = var_1_object;
				func_6014(var_365_object);
				if(var_364_bool != 0) {
					var_361_bool = 1;
				}
			}
			if(var_361_bool != 0) {
				@@@var_0_bool:AddReply((int)536993, (int)38832, (int)38831);
			}
			var_369_bool = 0;
			var_369_bool = 0;
			var_370_bool = 0; var_371_object = Obj();
			var_371_object = var_1_object;
			func_6038(var_370_bool, var_371_object);
			if(var_370_bool != 0) {
				var_372_bool = 0; var_373_object = Obj();
				var_373_object = var_1_object;
				func_6014(var_373_object);
				if(var_372_bool != 0) {
					var_369_bool = 1;
				}
			}
			if(var_369_bool != 0) {
				@@@var_0_bool:AddReply((int)537006, (int)38846, (int)38845);
			}
			var_377_bool = 0;
			var_377_bool = 0;
			var_378_bool = 0; var_379_object = Obj();
			var_379_object = var_1_object;
			func_6038(var_378_bool, var_379_object);
			if(var_378_bool != 0) {
				var_380_bool = 0; var_381_object = Obj();
				var_381_object = var_1_object;
				func_6014(var_381_object);
				if(var_380_bool != 0) {
					var_377_bool = 1;
				}
			}
			if(var_377_bool != 0) {
				@@@var_0_bool:AddReply((int)537017, (int)38857, (int)38856);
			}
			var_385_bool = 0; var_386_object = Obj();
			var_386_object = var_1_object;
			func_6038(var_385_bool, var_386_object);
			if(var_385_bool != 0) {
				@@@var_0_bool:AddReply((int)537025, (int)38865, (int)38864);
			}
			var_390_bool = 0; var_391_object = Obj();
			var_391_object = var_1_object;
			func_6038(var_390_bool, var_391_object);
			if(var_390_bool != 0) {
				@@@var_0_bool:AddReply((int)537035, (int)38875, (int)38874);
			}
			var_395_bool = 0; var_396_object = Obj();
			var_396_object = var_1_object;
			func_6038(var_395_bool, var_396_object);
			if(var_395_bool != 0) {
				@@@var_0_bool:AddReply((int)537044, (int)38884, (int)38883);
			}
			@@@var_0_bool:AddReply((int)537050, (int)-1, (int)38889);
			return 0;
		}
		var_404_bool = var_19_object == (int)38884;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537045);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537046, (int)38886, (int)38885);
			@@@var_0_bool:AddReply((int)537049, (int)-1, (int)38888);
			return 0;
		}
		var_414_bool = var_19_object == (int)38886;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537047);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537048, (int)-1, (int)38887);
			return 0;
		}
		var_421_bool = var_19_object == (int)38875;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537036);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537037, (int)38877, (int)38876);
			@@@var_0_bool:AddReply((int)537043, (int)-1, (int)38882);
			return 0;
		}
		var_431_bool = var_19_object == (int)38877;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537038);
			@@@var_0_bool:ClearReplies();
			var_434_bool = 0; var_435_object = Obj();
			var_435_object = var_1_object;
			func_6014(var_435_object);
			if(var_434_bool != 0) {
				@@@var_0_bool:AddReply((int)537039, (int)38879, (int)38878);
			}
			@@@var_0_bool:AddReply((int)537042, (int)-1, (int)38881);
			return 0;
		}
		var_443_bool = var_19_object == (int)38879;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537040);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537041, (int)-1, (int)38880);
			return 0;
		}
		var_450_bool = var_19_object == (int)38865;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537026);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537027, (int)38867, (int)38866);
			@@@var_0_bool:AddReply((int)537034, (int)-1, (int)38873);
			return 0;
		}
		var_460_bool = var_19_object == (int)38867;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537028);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537029, (int)38869, (int)38868);
			@@@var_0_bool:AddReply((int)537033, (int)-1, (int)38872);
			return 0;
		}
		var_470_bool = var_19_object == (int)38869;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537030);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537031, (int)-1, (int)38870);
			var_476_bool = 0; var_477_object = Obj();
			var_477_object = var_1_object;
			func_6014(var_477_object);
			if(var_476_bool != 0) {
				@@@var_0_bool:AddReply((int)537032, (int)-1, (int)38871);
			}
			return 0;
		}
		var_482_bool = var_19_object == (int)38857;
		if(var_482_bool != 0) {
			var_483_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537018);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537019, (int)38859, (int)38858);
			return 0;
		}
		var_489_bool = var_19_object == (int)38859;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537020);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537021, (int)38861, (int)38860);
			return 0;
		}
		var_496_bool = var_19_object == (int)38861;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537022);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537023, (int)-1, (int)38862);
			@@@var_0_bool:AddReply((int)537024, (int)-1, (int)38863);
			return 0;
		}
		var_506_bool = var_19_object == (int)38846;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537007);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537008, (int)38848, (int)38847);
			@@@var_0_bool:AddReply((int)537016, (int)-1, (int)38855);
			return 0;
		}
		var_516_bool = var_19_object == (int)38848;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537009);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537010, (int)38850, (int)38849);
			return 0;
		}
		var_523_bool = var_19_object == (int)38850;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537011);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537012, (int)38852, (int)38851);
			return 0;
		}
		var_530_bool = var_19_object == (int)38852;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537013);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537014, (int)-1, (int)38853);
			@@@var_0_bool:AddReply((int)537015, (int)-1, (int)38854);
			return 0;
		}
		var_540_bool = var_19_object == (int)38832;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536994);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536995, (int)38834, (int)38833);
			@@@var_0_bool:AddReply((int)537005, (int)-1, (int)38844);
			return 0;
		}
		var_550_bool = var_19_object == (int)38834;
		if(var_550_bool != 0) {
			var_551_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536996);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536997, (int)38836, (int)38835);
			@@@var_0_bool:AddReply((int)537004, (int)-1, (int)38843);
			return 0;
		}
		var_560_bool = var_19_object == (int)38836;
		if(var_560_bool != 0) {
			var_561_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536998);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536999, (int)38838, (int)38837);
			@@@var_0_bool:AddReply((int)537003, (int)38838, (int)38841);
			return 0;
		}
		var_570_bool = var_19_object == (int)38838;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537000);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537001, (int)-1, (int)38839);
			@@@var_0_bool:AddReply((int)537002, (int)-1, (int)38840);
			return 0;
		}
		var_580_bool = var_19_object == (int)38817;
		if(var_580_bool != 0) {
			var_581_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536979);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536980, (int)38819, (int)38818);
			@@@var_0_bool:AddReply((int)536992, (int)-1, (int)38830);
			return 0;
		}
		var_590_bool = var_19_object == (int)38819;
		if(var_590_bool != 0) {
			var_591_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536981);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536982, (int)38821, (int)38820);
			@@@var_0_bool:AddReply((int)536991, (int)-1, (int)38829);
			return 0;
		}
		var_600_bool = var_19_object == (int)38821;
		if(var_600_bool != 0) {
			var_601_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536983);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536984, (int)38823, (int)38822);
			return 0;
		}
		var_607_bool = var_19_object == (int)38823;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536985);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536986, (int)38825, (int)38824);
			@@@var_0_bool:AddReply((int)536990, (int)-1, (int)38828);
			return 0;
		}
		var_617_bool = var_19_object == (int)38825;
		if(var_617_bool != 0) {
			var_618_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536987);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536988, (int)-1, (int)38826);
			@@@var_0_bool:AddReply((int)536989, (int)-1, (int)38827);
			return 0;
		}
		var_627_bool = var_19_object == (int)38800;
		if(var_627_bool != 0) {
			var_628_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536962);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536963, (int)38802, (int)38801);
			@@@var_0_bool:AddReply((int)536971, (int)38810, (int)38809);
			return 0;
		}
		var_637_bool = var_19_object == (int)38810;
		if(var_637_bool != 0) {
			var_638_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536972);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536973, (int)38812, (int)38811);
			@@@var_0_bool:AddReply((int)536976, (int)-1, (int)38814);
			@@@var_0_bool:AddReply((int)536977, (int)-1, (int)38815);
			return 0;
		}
		var_650_bool = var_19_object == (int)38812;
		if(var_650_bool != 0) {
			var_651_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536974);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536975, (int)-1, (int)38813);
			return 0;
		}
		var_657_bool = var_19_object == (int)38802;
		if(var_657_bool != 0) {
			var_658_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536964);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536965, (int)38804, (int)38803);
			return 0;
		}
		var_664_bool = var_19_object == (int)38804;
		if(var_664_bool != 0) {
			var_665_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536966);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536967, (int)38806, (int)38805);
			return 0;
		}
		var_671_bool = var_19_object == (int)38806;
		if(var_671_bool != 0) {
			var_672_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536968);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536969, (int)-1, (int)38807);
			@@@var_0_bool:AddReply((int)536970, (int)-1, (int)38808);
			return 0;
		}
		var_681_bool = var_19_object == (int)38782;
		if(var_681_bool != 0) {
			var_682_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536944);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536945, (int)38784, (int)38783);
			@@@var_0_bool:AddReply((int)536960, (int)-1, (int)38798);
			return 0;
		}
		var_691_bool = var_19_object == (int)38784;
		if(var_691_bool != 0) {
			var_692_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536946);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536947, (int)38786, (int)38785);
			return 0;
		}
		var_698_bool = var_19_object == (int)38786;
		if(var_698_bool != 0) {
			var_699_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536948);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536949, (int)38788, (int)38787);
			var_704_bool = 0; var_705_object = Obj();
			var_705_object = var_1_object;
			func_6014(var_705_object);
			if(var_704_bool != 0) {
				@@@var_0_bool:AddReply((int)536957, (int)38796, (int)38795);
			}
			return 0;
		}
		var_710_bool = var_19_object == (int)38796;
		if(var_710_bool != 0) {
			var_711_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536958);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536959, (int)-1, (int)38797);
			return 0;
		}
		var_717_bool = var_19_object == (int)38788;
		if(var_717_bool != 0) {
			var_718_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536950);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536951, (int)38790, (int)38789);
			return 0;
		}
		var_724_bool = var_19_object == (int)38790;
		if(var_724_bool != 0) {
			var_725_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536952);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536953, (int)38792, (int)38791);
			@@@var_0_bool:AddReply((int)536956, (int)-1, (int)38794);
			return 0;
		}
		var_734_bool = var_19_object == (int)38792;
		if(var_734_bool != 0) {
			var_735_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536954);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536955, (int)-1, (int)38793);
			return 0;
		}
		var_741_bool = var_19_object == (int)38770;
		if(var_741_bool != 0) {
			var_742_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536932);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536933, (int)38772, (int)38771);
			@@@var_0_bool:AddReply((int)536942, (int)-1, (int)38780);
			return 0;
		}
		var_751_bool = var_19_object == (int)38772;
		if(var_751_bool != 0) {
			var_752_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536934);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536935, (int)38774, (int)38773);
			return 0;
		}
		var_758_bool = var_19_object == (int)38774;
		if(var_758_bool != 0) {
			var_759_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536936);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536937, (int)38776, (int)38775);
			@@@var_0_bool:AddReply((int)536941, (int)-1, (int)38779);
			return 0;
		}
		var_768_bool = var_19_object == (int)38776;
		if(var_768_bool != 0) {
			var_769_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536938);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536939, (int)-1, (int)38777);
			@@@var_0_bool:AddReply((int)536940, (int)-1, (int)38778);
			return 0;
		}
		var_778_bool = var_19_object == (int)38755;
		if(var_778_bool != 0) {
			var_779_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536917);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536918, (int)38757, (int)38756);
			var_784_bool = 0; var_785_object = Obj();
			var_785_object = var_1_object;
			func_6014(var_785_object);
			if(var_784_bool != 0) {
				@@@var_0_bool:AddReply((int)536930, (int)-1, (int)38768);
			}
			return 0;
		}
		var_790_bool = var_19_object == (int)38757;
		if(var_790_bool != 0) {
			var_791_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536919);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536920, (int)38759, (int)38758);
			@@@var_0_bool:AddReply((int)536929, (int)-1, (int)38767);
			return 0;
		}
		var_800_bool = var_19_object == (int)38759;
		if(var_800_bool != 0) {
			var_801_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536921);
			@@@var_0_bool:ClearReplies();
			var_803_bool = 0; var_804_object = Obj();
			var_804_object = var_1_object;
			func_6014(var_804_object);
			if(var_803_bool != 0) {
				@@@var_0_bool:AddReply((int)536922, (int)38761, (int)38760);
			}
			@@@var_0_bool:AddReply((int)536926, (int)38765, (int)38764);
			return 0;
		}
		var_812_bool = var_19_object == (int)38765;
		if(var_812_bool != 0) {
			var_813_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536927);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536928, (int)-1, (int)38766);
			return 0;
		}
		var_819_bool = var_19_object == (int)38761;
		if(var_819_bool != 0) {
			var_820_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536923);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536924, (int)-1, (int)38762);
			@@@var_0_bool:AddReply((int)536925, (int)-1, (int)38763);
			return 0;
		}
		var_829_bool = var_19_object == (int)38743;
		if(var_829_bool != 0) {
			var_830_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536905);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536906, (int)38745, (int)38744);
			return 0;
		}
		var_836_bool = var_19_object == (int)38745;
		if(var_836_bool != 0) {
			var_837_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536907);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536908, (int)38747, (int)38746);
			var_842_bool = 0; var_843_object = Obj();
			var_843_object = var_1_object;
			func_6014(var_843_object);
			if(var_842_bool != 0) {
				@@@var_0_bool:AddReply((int)536912, (int)38751, (int)38750);
			}
			return 0;
		}
		var_848_bool = var_19_object == (int)38751;
		if(var_848_bool != 0) {
			var_849_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536913);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536914, (int)-1, (int)38752);
			@@@var_0_bool:AddReply((int)536915, (int)-1, (int)38753);
			return 0;
		}
		var_858_bool = var_19_object == (int)38747;
		if(var_858_bool != 0) {
			var_859_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536909);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536910, (int)-1, (int)38748);
			@@@var_0_bool:AddReply((int)536911, (int)-1, (int)38749);
			return 0;
		}
		var_868_bool = var_19_object == (int)38724;
		if(var_868_bool != 0) {
			var_869_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536886);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536887, (int)38726, (int)38725);
			@@@var_0_bool:AddReply((int)536901, (int)38740, (int)38739);
			return 0;
		}
		var_878_bool = var_19_object == (int)38740;
		if(var_878_bool != 0) {
			var_879_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536902);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536903, (int)-1, (int)38741);
			return 0;
		}
		var_885_bool = var_19_object == (int)38726;
		if(var_885_bool != 0) {
			var_886_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536888);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536889, (int)38728, (int)38727);
			return 0;
		}
		var_892_bool = var_19_object == (int)38728;
		if(var_892_bool != 0) {
			var_893_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536890);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536891, (int)38730, (int)38729);
			@@@var_0_bool:AddReply((int)536900, (int)-1, (int)38738);
			return 0;
		}
		var_902_bool = var_19_object == (int)38730;
		if(var_902_bool != 0) {
			var_903_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536892);
			@@@var_0_bool:ClearReplies();
			var_905_bool = 0; var_906_object = Obj();
			var_906_object = var_1_object;
			func_6014(var_906_object);
			if(var_905_bool != 0) {
				@@@var_0_bool:AddReply((int)536893, (int)38732, (int)38731);
			}
			@@@var_0_bool:AddReply((int)536899, (int)-1, (int)38737);
			return 0;
		}
		var_914_bool = var_19_object == (int)38732;
		if(var_914_bool != 0) {
			var_915_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536894);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536895, (int)38734, (int)38733);
			@@@var_0_bool:AddReply((int)536898, (int)-1, (int)38736);
			return 0;
		}
		var_924_bool = var_19_object == (int)38734;
		if(var_924_bool != 0) {
			var_925_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536896);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536897, (int)-1, (int)38735);
			return 0;
		}
		var_931_bool = var_19_object == (int)38709;
		if(var_931_bool != 0) {
			var_932_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536871);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536872, (int)38711, (int)38710);
			@@@var_0_bool:AddReply((int)536882, (int)38721, (int)38720);
			return 0;
		}
		var_941_bool = var_19_object == (int)38721;
		if(var_941_bool != 0) {
			var_942_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536883);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536884, (int)-1, (int)38722);
			return 0;
		}
		var_948_bool = var_19_object == (int)38711;
		if(var_948_bool != 0) {
			var_949_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536873);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536874, (int)38713, (int)38712);
			@@@var_0_bool:AddReply((int)536881, (int)-1, (int)38719);
			return 0;
		}
		var_958_bool = var_19_object == (int)38713;
		if(var_958_bool != 0) {
			var_959_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536875);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536876, (int)38715, (int)38714);
			var_964_bool = 0; var_965_object = Obj();
			var_965_object = var_1_object;
			func_6014(var_965_object);
			if(var_964_bool != 0) {
				@@@var_0_bool:AddReply((int)536880, (int)-1, (int)38718);
			}
			return 0;
		}
		var_970_bool = var_19_object == (int)38715;
		if(var_970_bool != 0) {
			var_971_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536877);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536878, (int)-1, (int)38716);
			@@@var_0_bool:AddReply((int)536879, (int)-1, (int)38717);
			return 0;
		}
		var_980_bool = var_19_object == (int)38693;
		if(var_980_bool != 0) {
			var_981_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536857);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536858, (int)38695, (int)38694);
			@@@var_0_bool:AddReply((int)536867, (int)38705, (int)38704);
			return 0;
		}
		var_990_bool = var_19_object == (int)38705;
		if(var_990_bool != 0) {
			var_991_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536868);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536869, (int)38697, (int)38706);
			return 0;
		}
		var_997_bool = var_19_object == (int)38695;
		if(var_997_bool != 0) {
			var_998_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536859);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536860, (int)38697, (int)38696);
			@@@var_0_bool:AddReply((int)536864, (int)38701, (int)38700);
			return 0;
		}
		var_1007_bool = var_19_object == (int)38701;
		if(var_1007_bool != 0) {
			var_1008_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536865);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536866, (int)38697, (int)38702);
			return 0;
		}
		var_1014_bool = var_19_object == (int)38697;
		if(var_1014_bool != 0) {
			var_1015_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536861);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536862, (int)-1, (int)38698);
			@@@var_0_bool:AddReply((int)536863, (int)-1, (int)38699);
			return 0;
		}
		var_1024_bool = var_19_object == (int)45595;
		if(var_1024_bool != 0) {
			var_1025_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543140);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543141, (int)-1, (int)45596);
			@@@var_0_bool:AddReply((int)543142, (int)-1, (int)45597);
			@@@var_0_bool:AddReply((int)543143, (int)45599, (int)45598);
			return 0;
		}
		var_1037_bool = var_19_object == (int)45599;
		if(var_1037_bool != 0) {
			var_1038_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543144);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543145, (int)-1, (int)45600);
			@@@var_0_bool:AddReply((int)543146, (int)-1, (int)45601);
			return 0;
		}
		var_1047_bool = var_19_object == (int)45583;
		if(var_1047_bool != 0) {
			var_1048_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543128);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543129, (int)45587, (int)45584);
			@@@var_0_bool:AddReply((int)543130, (int)-1, (int)45585);
			@@@var_0_bool:AddReply((int)543131, (int)-1, (int)45586);
			return 0;
		}
		var_1060_bool = var_19_object == (int)45587;
		if(var_1060_bool != 0) {
			var_1061_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543132);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543133, (int)-1, (int)45588);
			@@@var_0_bool:AddReply((int)543134, (int)45591, (int)45589);
			@@@var_0_bool:AddReply((int)543135, (int)-1, (int)45590);
			return 0;
		}
		var_1073_bool = var_19_object == (int)45591;
		if(var_1073_bool != 0) {
			var_1074_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543136);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543137, (int)-1, (int)45592);
			@@@var_0_bool:AddReply((int)543138, (int)-1, (int)45593);
			return 0;
		}
		var_1083_bool = var_19_object == (int)45573;
		if(var_1083_bool != 0) {
			var_1084_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543118);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543119, (int)-1, (int)45574);
			@@@var_0_bool:AddReply((int)543120, (int)45577, (int)45575);
			@@@var_0_bool:AddReply((int)543121, (int)-1, (int)45576);
			return 0;
		}
		var_1096_bool = var_19_object == (int)45577;
		if(var_1096_bool != 0) {
			var_1097_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543122);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543123, (int)-1, (int)45578);
			@@@var_0_bool:AddReply((int)543124, (int)-1, (int)45579);
			return 0;
		}
		var_1106_bool = var_19_object == (int)45557;
		if(var_1106_bool != 0) {
			var_1107_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543102);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543103, (int)-1, (int)45558);
			@@@var_0_bool:AddReply((int)543104, (int)45560, (int)45559);
			return 0;
		}
		var_1116_bool = var_19_object == (int)45560;
		if(var_1116_bool != 0) {
			var_1117_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543105);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543106, (int)-1, (int)45561);
			@@@var_0_bool:AddReply((int)543107, (int)-1, (int)45562);
			return 0;
		}
		var_1126_bool = var_19_object == (int)45564;
		if(var_1126_bool != 0) {
			var_1127_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543109);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543110, (int)-1, (int)45565);
			@@@var_0_bool:AddReply((int)543111, (int)45568, (int)45566);
			return 0;
		}
		var_1136_bool = var_19_object == (int)45568;
		if(var_1136_bool != 0) {
			var_1137_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543113);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543114, (int)-1, (int)45569);
			@@@var_0_bool:AddReply((int)543116, (int)-1, (int)45571);
			return 0;
		}
		var_1146_bool = var_19_object == (int)45550;
		if(var_1146_bool != 0) {
			var_1147_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543095);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543096, (int)-1, (int)45551);
			@@@var_0_bool:AddReply((int)543098, (int)-1, (int)45553);
			return 0;
		}
		var_1156_bool = var_19_object == (int)45531;
		if(var_1156_bool != 0) {
			var_1157_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543076);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543077, (int)-1, (int)45532);
			@@@var_0_bool:AddReply((int)543078, (int)-1, (int)45533);
			@@@var_0_bool:AddReply((int)543079, (int)45535, (int)45534);
			return 0;
		}
		var_1169_bool = var_19_object == (int)45535;
		if(var_1169_bool != 0) {
			var_1170_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543080);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543081, (int)-1, (int)45536);
			@@@var_0_bool:AddReply((int)543082, (int)45538, (int)45537);
			return 0;
		}
		var_1179_bool = var_19_object == (int)45538;
		if(var_1179_bool != 0) {
			var_1180_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543083);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543084, (int)45541, (int)45539);
			@@@var_0_bool:AddReply((int)543085, (int)-1, (int)45540);
			return 0;
		}
		var_1189_bool = var_19_object == (int)45541;
		if(var_1189_bool != 0) {
			var_1190_string = "";
			func_742(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543086);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543087, (int)-1, (int)45542);
			@@@var_0_bool:AddReply((int)543088, (int)-1, (int)45543);
			return 0;
		}
		var_3_object = true;
		var_1198_bool = 0;
		func_6948(var_1198_bool);
		if(var_1198_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2fd";
	
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6894(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_26_object = Obj();
		var_19_bool = var_26_object;
		func_6897(var_26_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_6903();
	return 0;
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_20_bool, var_21_object, var_22_bool)
{
	return 0;
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0;
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6894(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_3663(var_21_int);
		}
		var_29_object = Obj();
		var_19_bool = var_29_object;
		func_6897(var_29_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_6666(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_6749(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_3663(var_21_int);
		}
		var_72_object = Obj();
		var_19_bool = var_72_object;
		func_6759(var_72_object);
	}
	return 2;
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0;
	var_19_bool = var_25_object;
	var_20_object = var_26_object;
	var_21_bool = var_27_bool;
	func_7000(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_6842(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_3663(var_23_int);
			}
			var_124_object = Obj();
			var_19_bool = var_124_object;
			func_6849(var_124_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6884(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_3663(var_21_int);
		}
		var_19_bool = Obj();
		func_6887();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_6580(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_3663(var_22_int);
		var_52_object = Obj(); var_53_string = "";
		var_19_object = var_52_object;
		var_20_bool = var_53_string;
		func_6612(var_52_object, var_53_string);
	} else {
		var_128_int = 0; var_129_string = ""; var_130_object = Obj();
		var_20_bool = var_129_string;
		var_19_object = var_130_object;
		func_6889(var_130_object);
		var_128_int = var_22_int;
		var_132_bool = var_22_int > (int)0;
		if(var_132_bool == 0) goto Label_3604;
		var_134_bool = var_22_int > (int)1;
		if(var_134_bool != 0) {
			func_3663(var_22_int);
		}
		var_135_string = ""; var_136_object = Obj();
		var_20_bool = var_135_string;
		var_19_object = var_136_object;
		func_6892();
	}
Label_3604:
	return 2;
	
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_6679(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_3663(var_19_bool);
		var_30_string = "";
		var_19_bool = var_30_string;
		func_6695(var_30_string);
	}
	return 0;
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_6637(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_3663(var_19_bool);
		var_33_object = Obj();
		var_19_bool = var_33_object;
		func_6660(var_33_object);
	} else {
		var_35_object = Obj();
		var_19_bool = var_35_object;
		func_3688(var_19_bool, var_35_object);
	}
	return 0;
	
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj();
	var_19_bool = var_20_object;
	func_3688(var_19_bool, var_20_object);
	return 0;
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_21_bool = var_19_bool != (int)110;
	if(var_21_bool != 0) {
		return 0;
	}
	var_2_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3663(var_18_bool);
	func_6903();
	return 0;
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_3663(var_19_bool);
	var_19_bool = Obj();
	func_6556();
	return 0;
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	RequestClearPath(var_19_bool);
	return 0;
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	Stop();
	return 0;
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6894(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_4066();
		}
		var_28_object = Obj();
		var_19_bool = var_28_object;
		func_6897(var_28_object);
	}
	return 2;
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_6666(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_6749(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_4066();
		}
		var_71_object = Obj();
		var_19_bool = var_71_object;
		func_6759(var_71_object);
	}
	return 2;
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0;
	var_19_bool = var_25_object;
	var_20_object = var_26_object;
	var_21_bool = var_27_bool;
	func_7000(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_6842(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_4066();
			}
			var_123_object = Obj();
			var_19_bool = var_123_object;
			func_6849(var_123_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6884(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_4066();
		}
		var_19_bool = Obj();
		func_6887();
	}
	return 2;
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_6580(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_4066();
		var_51_object = Obj(); var_52_string = "";
		var_19_object = var_51_object;
		var_20_bool = var_52_string;
		func_6612(var_51_object, var_52_string);
	} else {
		var_127_int = 0; var_128_string = ""; var_129_object = Obj();
		var_20_bool = var_128_string;
		var_19_object = var_129_object;
		func_6889(var_129_object);
		var_127_int = var_22_int;
		var_131_bool = var_22_int > (int)0;
		if(var_131_bool == 0) goto Label_3949;
		var_133_bool = var_22_int > (int)1;
		if(var_133_bool != 0) {
			func_4066();
		}
		var_134_string = ""; var_135_object = Obj();
		var_20_bool = var_134_string;
		var_19_object = var_135_object;
		func_6892();
	}
Label_3949:
	return 2;
	
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_6679(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_4066();
		var_29_string = "";
		var_19_bool = var_29_string;
		func_6695(var_29_string);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_4066();
	func_6903();
	return 0;
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_6637(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_4066();
		var_32_object = Obj();
		var_19_bool = var_32_object;
		func_6660(var_32_object);
	}
	return 0;
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6894(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_4270();
		}
		var_30_object = Obj();
		var_19_bool = var_30_object;
		func_6897(var_30_object);
	}
	return 2;
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_6666(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_6749(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_4270();
		}
		var_73_object = Obj();
		var_19_bool = var_73_object;
		func_6759(var_73_object);
	}
	return 2;
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0;
	var_19_bool = var_25_object;
	var_20_object = var_26_object;
	var_21_bool = var_27_bool;
	func_7000(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_6842(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_4270();
			}
			var_125_object = Obj();
			var_19_bool = var_125_object;
			func_6849(var_125_object);
		}
	}
	return 2;
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6884(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_4270();
		}
		var_19_bool = Obj();
		func_6887();
	}
	return 2;
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_6580(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_4270();
		var_53_object = Obj(); var_54_string = "";
		var_19_object = var_53_object;
		var_20_bool = var_54_string;
		func_6612(var_53_object, var_54_string);
	} else {
		var_129_int = 0; var_130_string = ""; var_131_object = Obj();
		var_20_bool = var_130_string;
		var_19_object = var_131_object;
		func_6889(var_131_object);
		var_129_int = var_22_int;
		var_133_bool = var_22_int > (int)0;
		if(var_133_bool == 0) goto Label_4255;
		var_135_bool = var_22_int > (int)1;
		if(var_135_bool != 0) {
			func_4270();
		}
		var_136_string = ""; var_137_object = Obj();
		var_20_bool = var_136_string;
		var_19_object = var_137_object;
		func_6892();
	}
Label_4255:
	return 2;
	
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_6679(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_4270();
		var_31_string = "";
		var_19_bool = var_31_string;
		func_6695(var_31_string);
	}
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_4270();
	var_19_bool = Obj();
	func_6556();
	return 0;
}


task_6_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	var_25_bool = var_19_bool != (int)111;
	if(var_25_bool != 0) {
		return 4;
	}
	var_26_bool = 0; var_27_object = Obj();
	var_27_object = var_0_bool;
	func_5445(var_26_bool, var_27_object);
	var_60_bool = var_26_bool == 0; //@nz
	if(var_60_bool != 0) {
		func_4270();
		return 4;
	}
	GetDirection(var_22_cvector);
	var_63_cvector = CVector(0,0,0); var_64_object = Obj();
	var_64_object = var_0_bool;
	func_5299(var_63_cvector, var_64_object);
	var_63_cvector = var_23_cvector;
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_22_cvector = var_70_cvector;
	var_23_cvector = var_71_cvector;
	func_5933(var_69_float, var_70_cvector, var_71_cvector);
	var_94_bool = var_69_float < (float)0.4999999701976776;
	if(var_94_bool != 0) {
		var_95_object = Obj();
		var_95_object = var_0_bool;
		func_5595(var_95_object);
	}
	return 4;
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_4270();
	func_6903();
	return 0;
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_6637(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_4270();
		var_34_object = Obj();
		var_19_bool = var_34_object;
		func_6660(var_34_object);
	}
	return 0;
}


task_8_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_5092(var_18_bool);
	func_6903();
	return 0;
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_21_bool = var_19_int == (int)1;
	if(var_21_bool != 0) {
		var_22_object = Obj();
		var_22_object = var_1_object;
		func_5989(var_22_object);
	} else {
		var_27_int = 0;
		var_19_int = var_27_int;
		func_5236(var_18_bool, var_19_int, var_27_int);
	}
	return 0;
	
}


task_8_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_1_object == var_19_object;
	if(var_21_bool != 0) {
		var_22_bool = var_2_object == 0; //@nz
		if(var_22_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_2_object = true;
		var_23_object = Obj();
		var_19_object = var_23_object;
		func_5790(var_23_object);
	}
	return 0;
}


task_8_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_1_object == var_19_object;
	if(var_21_bool != 0) {
		var_22_object = var_2_object;
		if(var_22_object != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_8_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object);
	return 0;
}


task_8_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_5092(var_19_object);
	var_19_object = Obj();
	func_6556();
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0;
	var_24_bool = var_20_string == "health";
	if(var_24_bool != 0) {
		GetProperty("health", var_22_float);
		var_27_bool = var_22_float <= (int)0;
		if(var_27_bool != 0) {
			SignalDeath(var_19_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_6535(var_20_object);
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0;
	var_19_object = var_23_object;
	var_20_int = var_24_int;
	var_21_float = var_25_float;
	func_5513(var_23_object, var_24_int, var_25_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	var_19_object = var_25_object;
	var_20_int = var_26_int;
	var_21_float = var_27_float;
	var_23_cvector = var_28_cvector;
	var_24_cvector = var_29_cvector;
	func_5581(var_27_float, var_28_cvector, var_29_cvector);
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	SensePlayerOnly((bool)1);
	func_6950();
	func_3467();
	
Label_3461:
	var_2_object = false;
	func_3728(var_17_object, var_18_bool);
	goto Label_3461;
}
EMIT "Return(); Pop(0)";


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_535_bool = 0;
	func_6948(var_535_bool);
	if(var_535_bool != 0) {
		var_536_string = "";
		func_5759("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_537_bool = var_0_bool;
	if(var_537_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_6148(var_280_bool, var_281_object)
{
	var_282_bool = 0; var_283_object = Obj();
	var_281_object = var_283_object;
	func_6255(var_283_object);
	if(var_282_bool != 0) {
		var_280_bool = 1;
		return 0;
	}
	var_280_bool = 0;
	return 0;
}


func_6660(var_34_object)
{
	var_34_object = Obj();
	func_6907();
	return 0;
}


func_6666(var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_5314(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		var_27_object = Obj();
		func_5875(var_27_object);
		ReportReputationChange(var_22_object, var_27_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_6158(var_375_bool, var_376_object)
{
	var_377_bool = 0; var_378_object = Obj();
	var_376_object = var_378_object;
	func_6262(var_378_object);
	if(var_377_bool != 0) {
		var_375_bool = 1;
		return 0;
	}
	var_375_bool = 0;
	return 0;
}


func_5134(var_0_bool, var_1_object, var_234_bool, var_235_object, var_236_float, var_237_float, var_238_bool, var_239_bool)
{
	var_240_bool = 0; var_241_bool = 0; var_242_object = Obj(); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_float = 0; var_247_object = Obj(); var_248_bool = 0; var_249_bool = 0; var_250_object = Obj(); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); var_253_cvector = CVector(0,0,0); var_254_float = 0; var_255_object = Obj();
	var_0_bool = false;
	var_1_object = var_235_object;
	var_239_bool = var_249_bool;
	
Label_5138:
	var_256_bool = 0; var_257_object = Obj();
	var_235_object = var_257_object;
	func_5274(var_256_bool, var_257_object);
	var_260_bool = var_256_bool == 0; //@nz
	if(var_260_bool != 0) {
		var_234_bool = 0;
		return 16;
	}
	@@var_235_object:GetPosition(var_251_cvector);
	GetPosition(var_252_cvector);
	var_253_cvector = var_251_cvector - var_252_cvector;
	var_254_float = var_253_cvector | var_253_cvector;
	var_261_bool = 0;
	var_261_bool = 0;
	var_263_bool = var_237_float > (int)0;
	if(var_263_bool != 0) {
		var_264_float = var_237_float * var_237_float;
		var_265_bool = var_254_float > var_264_float;
		if(var_265_bool != 0) {
			var_261_bool = 1;
		}
	}
	if(var_261_bool != 0) {
		Stop();
		var_234_bool = 0;
		return 16;
	}
	var_266_float = var_236_float * var_236_float;
	var_267_bool = var_254_float > var_266_float;
	if(var_267_bool != 0) {
		@@var_235_object:GetPFPosition(var_251_cvector);
		FindPathTo(var_255_object, var_251_cvector);
		var_268_bool = var_255_object != 0; //@nn
		if(var_268_bool != 0) {
			var_255_object = var_250_object;
			var_255_object = 0;
		}
		var_269_bool = var_250_object != 0; //@nn
		if(var_269_bool != 0) {
			var_270_bool = var_249_bool;
			if(var_270_bool == 0) goto Label_5187;
			var_249_bool = 0;
			RotatePath(var_250_object, var_248_bool);
			var_271_bool = var_248_bool == 0; //@nz
			if(var_271_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_274_string = "";
				func_5281(var_274_string);
				var_275_string = "";
				func_5283(var_275_string);
				FollowPath(var_250_object, var_238_bool, var_248_bool, var_274_string, var_275_string);
				var_276_bool = var_248_bool == 0; //@nz
				if(var_276_bool != 0) {
					var_277_bool = var_0_bool;
					if(var_277_bool != 0) {
						var_250_object = 0;
						goto Label_5234;
					EMIT "GOTO 0x1457";
					}
				} else {
					var_250_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_248_bool);
					var_280_bool = var_248_bool == 0; //@nz
					if(var_280_bool != 0) {
						var_281_bool = var_0_bool;
						if(var_281_bool != 0) {
							var_250_object = 0;
							goto Label_5234;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_5234;
	}
			var_255_object = 0;
			goto Label_5232;

		Label_5232:
			var_250_object = 0;

		}
		goto Label_5138;
	}
Label_5234:
	var_234_bool = !var_0_bool;
	return 16;
	
}


func_4624(var_0_bool, var_460_float, var_461_int)
{
	var_462_object = Obj(); var_463_float = 0; var_464_float = 0; var_465_object = Obj(); var_466_float = 0; var_467_float = 0;
	var_469_float = var_460_float * (float)0.8999999761581421;
	GetVictim(var_469_float, var_465_object);
	ReportAttack(var_0_bool);
	var_470_bool = var_465_object == var_0_bool;
	if(var_470_bool != 0) {
		var_471_float = 0; var_472_object = Obj(); var_473_int = 0;
		var_465_object = var_472_object;
		var_461_int = var_473_int;
		func_4354(var_473_int);
		var_471_float = var_466_float;
		var_474_float = 0; var_475_object = Obj(); var_476_float = 0; var_477_int = 0;
		var_465_object = var_475_object;
		var_466_float = var_476_float;
		var_478_int = 0; var_479_object = Obj(); var_480_int = 0;
		var_465_object = var_479_object;
		var_461_int = var_480_int;
		func_4357(var_480_int);
		var_478_int = var_477_int;
		func_5331(var_474_float, var_475_object, var_476_float, var_477_int);
		var_474_float = var_467_float;
		var_539_int = 0;
		func_5007(var_539_int);
		ReportHit(var_0_bool, var_539_int, var_467_float, var_466_float);
		var_540_object = Obj(); var_541_float = 0;
		var_465_object = var_540_object;
		var_467_float = var_541_float;
		func_5014();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_6679(var_20_bool, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj();
	var_25_bool = var_21_string == "heal";
	if(var_25_bool != 0) {
		FindActor(var_23_object, "player");
		var_27_bool = 0; var_28_object = Obj();
		var_23_object = var_28_object;
		func_6935(var_28_object);
		var_27_bool = var_20_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_20_bool = 0;
	return 2;
}


func_6168(var_396_bool, var_397_object)
{
	var_398_bool = 0; var_399_object = Obj();
	var_397_object = var_399_object;
	func_6283(var_399_object);
	if(var_398_bool != 0) {
		var_396_bool = 1;
		return 0;
	}
	var_396_bool = 0;
	return 0;
}


func_4122(var_0_bool)
{
	var_70_object = Obj();
	var_70_object = var_0_bool;
	func_5790(var_70_object);
	return 0;
}


func_6178(var_151_bool)
{
	var_153_int = 0;
	func_5972(var_153_int);
	var_151_bool = var_153_int == (int)1;
	return 0;
}


func_6695(var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj();
	var_35_bool = var_31_string == "heal";
	if(var_35_bool != 0) {
		FindActor(var_33_object, "player");
		var_33_object = Obj();
		func_6938();
		var_33_object = 0;
	}
	return 2;
}


func_40(var_0_bool, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_bool = var_45_object;
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0;
	var_45_object = var_56_object;
	func_5611(var_55_bool, var_56_object, (float)70.0);
	var_102_bool = var_55_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_103_int = 0;
	func_6942(var_103_int);
	@@var_51_object:SetNPCName(var_103_int);
	var_104_int = 0;
	func_6940(var_104_int);
	@@var_51_object:SetNPCDescription(var_104_int);
	var_105_string = "";
	func_6944(var_105_string);
	@@var_51_object:SetPhoto(var_105_string);
	var_106_string = "";
	func_6946(var_106_string);
	@@var_51_object:SetPhoto2(var_106_string);
	var_107_int = 0;
	func_6294(var_107_int);
	@@var_51_object:SetPlayerName(var_107_int);
	IsOverrideActive(var_52_bool);
	var_115_bool = var_52_bool;
	if(var_115_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	DoDialog(var_51_object);
	var_116_object = Obj(); var_117_object = Obj();
	var_45_object = var_116_object;
	var_51_object = var_117_object;
	TaskCall(2);
	func_114(var_118_object, var_119_object, var_120_string, var_121_bool, var_116_object, var_117_object);
	TaskReturn();
	@@var_51_object:IsDialogEnd(var_54_bool);
	
Label_96:
	var_490_bool = var_54_bool == 0; //@nz
	if(var_490_bool != 0) {
		sync();
		@@var_51_object:IsDialogEnd(var_54_bool);
		goto Label_96;
	}
	var_45_object = Obj();
	func_5680();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6185(var_165_bool)
{
	var_167_int = 0;
	func_5972(var_167_int);
	var_165_bool = var_167_int == (int)2;
	return 0;
}


func_5680()
{
	var_492_bool = 0; var_493_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_495_bool = 0;
	func_6948(var_495_bool);
	if(var_495_bool != 0) {
	} else {
		HasAnimationTrack(var_493_bool, "head");
		var_497_bool = var_493_bool;
		if(var_497_bool == 0) goto Label_5697;
		UnlookAsync("head");
	}
Label_5697:
	return 2;
	
}


func_6192(var_175_bool)
{
	var_177_int = 0;
	func_5972(var_177_int);
	var_175_bool = var_177_int == (int)3;
	return 0;
}


func_6708(var_155_string, var_156_int)
{
	var_157_string = ""; var_158_string = "";
	var_159_int = var_156_int;
	if(var_159_int != 0) {
		"idle" = "idle" + var_156_int;
	}
	var_158_string = var_155_string;
	return 2;
}


func_4663(var_0_bool, var_1_object, var_423_bool, var_424_float)
{
	var_425_int = 0; var_426_bool = 0; var_427_int = 0; var_428_string = ""; var_429_int = 0; var_430_bool = 0; var_431_int = 0; var_432_string = "";
	func_5002(var_432_string);
	irand(var_429_int, var_1_object);
	var_429_int = var_429_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_5998();
	var_441_int = "attack_begin" + var_429_int;
	PlayAnimation("all", var_441_int);
	WaitForAnimEnd();
	func_4970(var_431_int, var_432_string);
	var_457_bool = 0; var_458_object = Obj();
	var_458_object = var_0_bool;
	func_5445(var_457_bool, var_458_object);
	var_459_bool = var_457_bool == 0; //@nz
	if(var_459_bool != 0) {
		StopAsync();
		var_423_bool = 0;
		return 8;
	}
	var_460_float = 0; var_461_int = 0;
	var_424_float = var_460_float;
	var_429_int = var_461_int;
	func_4624(var_432_string, var_460_float, var_461_int);
	var_544_int = "attack_middle" + var_429_int;
	HasAnimation(var_430_bool, "all", var_544_int);
	var_545_bool = var_430_bool;
	if(var_545_bool != 0) {
		func_5998();
		var_548_int = "attack_middle" + var_429_int;
		PlayAnimation("all", var_548_int);
		WaitForAnimEnd();
		func_5002(var_432_string);
		var_549_bool = 0; var_550_object = Obj();
		var_550_object = var_0_bool;
		func_5445(var_549_bool, var_550_object);
		var_551_bool = var_549_bool == 0; //@nz
		if(var_551_bool != 0) {
			StopAsync();
			var_423_bool = 0;
			return 8;
		}
		var_552_float = 0; var_553_int = 0;
		var_424_float = var_552_float;
		var_429_int = var_553_int;
		func_4624(var_432_string, var_552_float, var_553_int);
		var_431_int = 1;

	Label_4740:
		var_555_int = "attack_middle" + var_429_int;
		var_557_int = var_555_int + "_";
		var_432_string = var_557_int + var_431_int;
		HasAnimation(var_430_bool, "all", var_432_string);
		var_559_bool = var_430_bool == 0; //@nz
		if(var_559_bool != 0) {
		} else {
			func_5998();
			PlayAnimation("all", var_432_string);
			WaitForAnimEnd();
			func_5002(var_432_string);
			var_575_bool = 0; var_576_object = Obj();
			var_576_object = var_0_bool;
			func_5445(var_575_bool, var_576_object);
			var_577_bool = var_575_bool == 0; //@nz
			if(var_577_bool != 0) {
				StopAsync();
				var_423_bool = 0;
				var_578_float = 0; var_579_int = 0;
				var_424_float = var_578_float;
				var_429_int = var_579_int;
				func_4624(var_432_string, var_578_float, var_579_int);
				var_431_int = var_431_int + (int)1;
				goto Label_4740;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_563_int = "attack_end" + var_429_int;
	PlayAnimation("all", var_563_int);
	var_564_bool = 0;
	func_5016(var_564_bool);
	if(var_564_bool != 0) {
		var_565_bool = 0; var_566_float = 0;
		func_4800(var_565_bool, (float)0.75);
		StopAsync();
	}
	var_423_bool = 1;
	return 8;
	
}


func_6199(var_190_bool)
{
	var_192_int = 0;
	func_5972(var_192_int);
	var_190_bool = var_192_int == (int)4;
	return 0;
}


func_6715(var_149_int)
{
	var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_bool = 0;
	var_152_int = 0;
	
Label_6717:
	var_155_string = ""; var_156_int = 0;
	var_152_int = var_156_int;
	func_6708(var_155_string, var_156_int);
	HasAnimation(var_153_bool, "all", var_155_string);
	var_160_bool = var_153_bool == 0; //@nz
	if(var_160_bool != 0) {
	} else {
		var_152_int = var_152_int + (int)1;
		goto Label_6717;
	}
	var_152_int = var_149_int;
	return 4;
	
}


func_6206(var_199_bool)
{
	var_201_int = 0;
	func_5972(var_201_int);
	var_199_bool = var_201_int == (int)5;
	return 0;
}


func_5698(var_500_bool, var_501_object)
{
	var_502_bool = 0; var_503_object = Obj(); var_504_float = 0;
	var_501_object = var_503_object;
	func_5706(var_502_bool, var_503_object, (float)70);
	var_502_bool = var_500_bool;
	return 0;
}


func_6213(var_208_bool)
{
	var_210_int = 0;
	func_5972(var_210_int);
	var_208_bool = var_210_int == (int)6;
	return 0;
}


func_5706(var_502_bool, var_503_object, var_504_float)
{
	var_505_float = 0; var_506_cvector = CVector(0,0,0); var_507_cvector = CVector(0,0,0); var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_cvector = CVector(0,0,0); var_512_bool = 0; var_513_float = 0; var_514_cvector = CVector(0,0,0); var_515_cvector = CVector(0,0,0); var_516_cvector = CVector(0,0,0); var_517_cvector = CVector(0,0,0); var_518_cvector = CVector(0,0,0); var_519_cvector = CVector(0,0,0); var_520_bool = 0;
	@@var_503_object:GetPosition(var_514_cvector);
	@@var_503_object:GetEyesHeight(var_513_float);
	var_521_float = GetByIndex(var_514_cvector, 1);
	var_521_float = var_521_float + var_513_float;
	SetByIndex(var_514_cvector, 1) = var_521_float;
	GetPosition(var_515_cvector);
	GetEyesHeight(var_513_float);
	var_522_float = GetByIndex(var_515_cvector, 1);
	var_522_float = var_522_float + var_513_float;
	SetByIndex(var_515_cvector, 1) = var_522_float;
	var_516_cvector = var_514_cvector - var_515_cvector;
	var_523_float = GetByIndex(var_516_cvector, 1);
	SetByIndex(var_516_cvector, 1) = (float)0;
	var_524_int = var_516_cvector | var_516_cvector;
	var_525_float = sqrt(var_524_int);
	var_516_cvector = var_516_cvector / var_525_float;
	var_517_cvector = -var_516_cvector;
	var_526_float = var_516_cvector * var_504_float;
	var_518_cvector = var_526_float - CVector(0.0, 10.0, 0.0);
	var_519_cvector = var_515_cvector + var_518_cvector;
	IsOverrideActive(var_520_bool);
	var_528_bool = var_520_bool;
	if(var_528_bool != 0) {
		var_502_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_519_cvector, var_517_cvector, (bool)1);
	var_530_float = GetByIndex(var_518_cvector, 0);
	var_531_float = GetByIndex(var_518_cvector, 2);
	Rotate(var_530_float, var_531_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_502_bool = 1;
	return 16;
}


func_6732(var_62_int)
{
	var_64_bool = 0;
	func_6998(var_64_bool);
	if(var_64_bool != 0) {
		var_62_int = 2;
	} else {
		var_62_int = 0;
	}
	return 0;
	
}


func_6220(var_181_bool)
{
	var_183_int = 0;
	func_5972(var_183_int);
	var_181_bool = var_183_int == (int)7;
	return 0;
}


func_3663(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3799(var_18_object, var_19_bool);
	return 0;
}


func_6227(var_218_bool)
{
	var_220_int = 0;
	func_5972(var_220_int);
	var_218_bool = var_220_int == (int)8;
	return 0;
}


func_6741(var_61_object)
{
	var_62_object = Obj();
	var_61_object = var_62_object;
	TaskCall(6);
	func_4071(var_63_object, var_62_object);
	TaskReturn();
	return 0;
}


func_3671(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3806(var_23_bool, var_24_int);
	return 0;
}


func_6234(var_224_bool)
{
	var_226_int = 0;
	func_5972(var_226_int);
	var_224_bool = var_226_int == (int)9;
	return 0;
}


func_6749(var_89_int, var_90_object)
{
	var_91_bool = 0; var_92_object = Obj();
	var_90_object = var_92_object;
	func_5445(var_91_bool, var_92_object);
	if(var_91_bool != 0) {
		var_89_int = 2;
	} else {
		var_89_int = 0;
	}
	return 0;
	
}


func_6241(var_270_bool)
{
	var_272_int = 0;
	func_5972(var_272_int);
	var_270_bool = var_272_int == (int)10;
	return 0;
}


func_6759(var_126_object)
{
	var_127_object = Obj();
	var_126_object = var_127_object;
	TaskCall(7);
	func_4346(var_127_object);
	TaskReturn();
	return 0;
}


func_3688(var_2_object, var_20_object)
{
	var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj();
	var_20_object = var_26_object;
	func_5445(var_25_bool, var_26_object);
	var_59_bool = var_25_bool == 0; //@nz
	if(var_59_bool != 0) {
		return 4;
	}
	var_60_object = var_2_object;
	if(var_60_object != 0) {
		return 4;
	}
	IsPlayerActor(var_20_object, var_23_bool);
	var_61_bool = var_23_bool == 0; //@nz
	if(var_61_bool != 0) {
		return 4;
	}
	var_62_int = 0; var_63_object = Obj();
	var_20_object = var_63_object;
	func_6732(var_63_object);
	var_62_int = var_24_int;
	var_66_bool = var_24_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_24_int > (int)1;
		if(var_68_bool != 0) {
			func_3671(var_24_int);
		}
		var_70_object = Obj();
		var_20_object = var_70_object;
		func_6741(var_70_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_6248(var_276_bool)
{
	var_278_int = 0;
	func_5972(var_278_int);
	var_276_bool = var_278_int == (int)11;
	return 0;
}


func_6255(var_282_bool)
{
	var_284_int = 0;
	func_5972(var_284_int);
	var_282_bool = var_284_int == (int)12;
	return 0;
}


func_6767(var_35_bool, var_36_object, var_37_bool)
{
	var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = "";
	var_42_bool = 0; var_43_object = Obj(); var_44_string = "";
	var_36_object = var_43_object;
	func_5319(var_42_bool, var_43_object, "class");
	var_51_bool = var_42_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	GetProperty("class", var_40_string);
	@@var_36_object:GetProperty("class", var_41_string);
	var_54_bool = 0;
	var_54_bool = 0;
	var_55_bool = var_37_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_56_bool = var_40_string == var_41_string;
		if(var_56_bool != 0) {
			var_54_bool = 1;
		}
	}
	if(var_54_bool != 0) {
		var_35_bool = 1;
		return 4;
	}
	var_58_bool = var_41_string == "rat";
	if(var_58_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	var_60_bool = var_41_string == "rat_big";
	if(var_60_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	var_62_bool = var_41_string == "dog";
	if(var_62_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	var_64_bool = var_41_string == "grabitel";
	if(var_64_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	var_66_bool = var_41_string == "bomber";
	if(var_66_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	var_68_bool = var_41_string == "sanitar";
	if(var_68_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	var_70_bool = var_41_string == "hunter";
	if(var_70_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	var_72_bool = var_41_string == "soldier";
	if(var_72_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_35_bool = 1;
	return 4;
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_116_object, var_117_object)
{
	var_0_bool = var_117_object;
	var_1_object = var_116_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_123_bool = 0; var_124_object = Obj();
		var_124_object = var_1_object;
		func_6026(var_124_object);
		if(var_123_bool != 0) {
			var_131_string = "";
			func_742(var_117_object, "Neutral");
			@@@var_0_bool:SetMessage((int)543072);
			@@@var_0_bool:ClearReplies();
			var_149_bool = 0; var_150_object = Obj();
			var_150_object = var_1_object;
			func_6038(var_149_bool, var_150_object);
			if(var_149_bool != 0) {
				@@@var_0_bool:AddReply((int)543073, (int)45531, (int)45528);
			}
			var_163_bool = 0; var_164_object = Obj();
			var_164_object = var_1_object;
			func_6048(var_163_bool, var_164_object);
			if(var_163_bool != 0) {
				@@@var_0_bool:AddReply((int)543092, (int)45550, (int)45547);
			}
			var_172_bool = 0;
			var_172_bool = 1;
			var_173_bool = 0; var_174_object = Obj();
			var_174_object = var_1_object;
			func_6058(var_173_bool, var_174_object);
			if(var_173_bool != 1) {
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_6098(var_179_bool, var_180_object);
				if(var_179_bool != 1) {
					var_172_bool = 0;
				}
			}
			if(var_172_bool != 0) {
				@@@var_0_bool:AddReply((int)543108, (int)45564, (int)45563);
			}
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_6068(var_188_bool, var_189_object);
			if(var_188_bool != 0) {
				@@@var_0_bool:AddReply((int)543101, (int)45557, (int)45556);
			}
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_6078(var_197_bool, var_198_object);
			if(var_197_bool != 0) {
				@@@var_0_bool:AddReply((int)543117, (int)45573, (int)45572);
			}
			var_206_bool = 0; var_207_object = Obj();
			var_207_object = var_1_object;
			func_6088(var_206_bool, var_207_object);
			if(var_206_bool != 0) {
				@@@var_0_bool:AddReply((int)543127, (int)45583, (int)45582);
			}
			var_215_bool = 0;
			var_215_bool = 1;
			var_216_bool = 0; var_217_object = Obj();
			var_217_object = var_1_object;
			func_6108(var_216_bool, var_217_object);
			if(var_216_bool != 1) {
				var_222_bool = 0; var_223_object = Obj();
				var_223_object = var_1_object;
				func_6118(var_222_bool, var_223_object);
				if(var_222_bool != 1) {
					var_215_bool = 0;
				}
			}
			if(var_215_bool != 0) {
				@@@var_0_bool:AddReply((int)543139, (int)45595, (int)45594);
			}
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_6038(var_231_bool, var_232_object);
			if(var_231_bool != 0) {
				@@@var_0_bool:AddReply((int)543075, (int)-1, (int)45530);
			}
			var_236_bool = 0;
			var_236_bool = 1;
			var_237_bool = 0;
			var_237_bool = 1;
			var_238_bool = 0;
			var_238_bool = 1;
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_6048(var_239_bool, var_240_object);
			if(var_239_bool != 1) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_6058(var_241_bool, var_242_object);
				if(var_241_bool != 1) {
					var_238_bool = 0;
				}
			}
			if(var_238_bool != 1) {
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_6068(var_243_bool, var_244_object);
				if(var_243_bool != 1) {
					var_237_bool = 0;
				}
			}
			if(var_237_bool != 1) {
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_6078(var_245_bool, var_246_object);
				if(var_245_bool != 1) {
					var_236_bool = 0;
				}
			}
			if(var_236_bool != 0) {
				@@@var_0_bool:AddReply((int)543100, (int)-1, (int)45555);
			}
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_6088(var_250_bool, var_251_object);
			if(var_250_bool != 0) {
				@@@var_0_bool:AddReply((int)543125, (int)-1, (int)45580);
			}
			var_255_bool = 0;
			var_255_bool = 1;
			var_256_bool = 0;
			var_256_bool = 1;
			var_257_bool = 0; var_258_object = Obj();
			var_258_object = var_1_object;
			func_6098(var_257_bool, var_258_object);
			if(var_257_bool != 1) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_6108(var_259_bool, var_260_object);
				if(var_259_bool != 1) {
					var_256_bool = 0;
				}
			}
			if(var_256_bool != 1) {
				var_261_bool = 0; var_262_object = Obj();
				var_262_object = var_1_object;
				func_6118(var_261_bool, var_262_object);
				if(var_261_bool != 1) {
					var_255_bool = 0;
				}
			}
			if(var_255_bool != 0) {
				@@@var_0_bool:AddReply((int)543147, (int)-1, (int)45602);
			}
			var_266_bool = 0;
			var_266_bool = 1;
			var_267_bool = 0;
			var_267_bool = 1;
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_6128(var_268_bool, var_269_object);
			if(var_268_bool != 1) {
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_6138(var_274_bool, var_275_object);
				if(var_274_bool != 1) {
					var_267_bool = 0;
				}
			}
			if(var_267_bool != 1) {
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_object;
				func_6148(var_280_bool, var_281_object);
				if(var_280_bool != 1) {
					var_266_bool = 0;
				}
			}
			if(var_266_bool != 0) {
				@@@var_0_bool:AddReply((int)543148, (int)-1, (int)45603);
			}
			var_289_bool = 0; var_290_object = Obj();
			var_290_object = var_1_object;
			func_6038(var_289_bool, var_290_object);
			if(var_289_bool != 0) {
				@@@var_0_bool:AddReply((int)543074, (int)-1, (int)45529);
			}
			var_294_bool = 0;
			var_294_bool = 1;
			var_295_bool = 0; var_296_object = Obj();
			var_296_object = var_1_object;
			func_6048(var_295_bool, var_296_object);
			if(var_295_bool != 1) {
				var_297_bool = 0; var_298_object = Obj();
				var_298_object = var_1_object;
				func_6058(var_297_bool, var_298_object);
				if(var_297_bool != 1) {
					var_294_bool = 0;
				}
			}
			if(var_294_bool != 0) {
				@@@var_0_bool:AddReply((int)543090, (int)-1, (int)45545);
			}
			var_302_bool = 0;
			var_302_bool = 1;
			var_303_bool = 0; var_304_object = Obj();
			var_304_object = var_1_object;
			func_6048(var_303_bool, var_304_object);
			if(var_303_bool != 1) {
				var_305_bool = 0; var_306_object = Obj();
				var_306_object = var_1_object;
				func_6058(var_305_bool, var_306_object);
				if(var_305_bool != 1) {
					var_302_bool = 0;
				}
			}
			if(var_302_bool != 0) {
				@@@var_0_bool:AddReply((int)543099, (int)-1, (int)45554);
			}
			var_310_bool = 0;
			var_310_bool = 1;
			var_311_bool = 0; var_312_object = Obj();
			var_312_object = var_1_object;
			func_6088(var_311_bool, var_312_object);
			if(var_311_bool != 1) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_6118(var_313_bool, var_314_object);
				if(var_313_bool != 1) {
					var_310_bool = 0;
				}
			}
			if(var_310_bool != 0) {
				@@@var_0_bool:AddReply((int)543126, (int)-1, (int)45581);
			}
			var_318_bool = 0;
			var_318_bool = 1;
			var_319_bool = 0;
			var_319_bool = 1;
			var_320_bool = 0;
			var_320_bool = 1;
			var_321_bool = 0; var_322_object = Obj();
			var_322_object = var_1_object;
			func_6098(var_321_bool, var_322_object);
			if(var_321_bool != 1) {
				var_323_bool = 0; var_324_object = Obj();
				var_324_object = var_1_object;
				func_6108(var_323_bool, var_324_object);
				if(var_323_bool != 1) {
					var_320_bool = 0;
				}
			}
			if(var_320_bool != 1) {
				var_325_bool = 0; var_326_object = Obj();
				var_326_object = var_1_object;
				func_6128(var_325_bool, var_326_object);
				if(var_325_bool != 1) {
					var_319_bool = 0;
				}
			}
			if(var_319_bool != 1) {
				var_327_bool = 0; var_328_object = Obj();
				var_328_object = var_1_object;
				func_6148(var_327_bool, var_328_object);
				if(var_327_bool != 1) {
					var_318_bool = 0;
				}
			}
			if(var_318_bool != 0) {
				@@@var_0_bool:AddReply((int)543149, (int)-1, (int)45604);
			}
			var_332_bool = 0;
			var_332_bool = 1;
			var_333_bool = 0;
			var_333_bool = 1;
			var_334_bool = 0;
			var_334_bool = 1;
			var_335_bool = 0;
			var_335_bool = 1;
			var_336_bool = 0; var_337_object = Obj();
			var_337_object = var_1_object;
			func_6068(var_336_bool, var_337_object);
			if(var_336_bool != 1) {
				var_338_bool = 0; var_339_object = Obj();
				var_339_object = var_1_object;
				func_6078(var_338_bool, var_339_object);
				if(var_338_bool != 1) {
					var_335_bool = 0;
				}
			}
			if(var_335_bool != 1) {
				var_340_bool = 0; var_341_object = Obj();
				var_341_object = var_1_object;
				func_6118(var_340_bool, var_341_object);
				if(var_340_bool != 1) {
					var_334_bool = 0;
				}
			}
			if(var_334_bool != 1) {
				var_342_bool = 0; var_343_object = Obj();
				var_343_object = var_1_object;
				func_6138(var_342_bool, var_343_object);
				if(var_342_bool != 1) {
					var_333_bool = 0;
				}
			}
			if(var_333_bool != 1) {
				var_344_bool = 0; var_345_object = Obj();
				var_345_object = var_1_object;
				func_6148(var_344_bool, var_345_object);
				if(var_344_bool != 1) {
					var_332_bool = 0;
				}
			}
			if(var_332_bool != 0) {
				@@@var_0_bool:AddReply((int)543150, (int)-1, (int)45605);
			}
		} else {
				var_367_string = "";
				func_742(var_117_object, "Neutral");
				@@@var_0_bool:SetMessage((int)536854);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)536855, (int)-1, (int)38691);
				var_372_bool = 0;
				var_372_bool = 0;
				var_373_bool = 0; var_374_object = Obj();
				var_374_object = var_1_object;
				func_6038(var_373_bool, var_374_object);
				if(var_373_bool != 0) {
					var_375_bool = 0; var_376_object = Obj();
					var_376_object = var_1_object;
					func_6158(var_375_bool, var_376_object);
					if(var_375_bool != 0) {
						var_372_bool = 1;
					}
				}
				if(var_372_bool != 0) {
					@@@var_0_bool:AddReply((int)536856, (int)38693, (int)38692);
				}
				var_393_bool = 0;
				var_393_bool = 0;
				var_394_bool = 0; var_395_object = Obj();
				var_395_object = var_1_object;
				func_6038(var_394_bool, var_395_object);
				if(var_394_bool != 0) {
					var_396_bool = 0; var_397_object = Obj();
					var_397_object = var_1_object;
					func_6168(var_396_bool, var_397_object);
					if(var_396_bool != 0) {
						var_393_bool = 1;
					}
				}
				if(var_393_bool != 0) {
					@@@var_0_bool:AddReply((int)536870, (int)38709, (int)38708);
				}
				var_406_bool = 0; var_407_object = Obj();
				var_407_object = var_1_object;
				func_6048(var_406_bool, var_407_object);
				if(var_406_bool != 0) {
					@@@var_0_bool:AddReply((int)536885, (int)38724, (int)38723);
				}
				var_411_bool = 0; var_412_object = Obj();
				var_412_object = var_1_object;
				func_6058(var_411_bool, var_412_object);
				if(var_411_bool != 0) {
					@@@var_0_bool:AddReply((int)536904, (int)38743, (int)38742);
				}
				var_416_bool = 0; var_417_object = Obj();
				var_417_object = var_1_object;
				func_6068(var_416_bool, var_417_object);
				if(var_416_bool != 0) {
					@@@var_0_bool:AddReply((int)536916, (int)38755, (int)38754);
				}
				var_421_bool = 0;
				var_421_bool = 0;
				var_422_bool = 0; var_423_object = Obj();
				var_423_object = var_1_object;
				func_6088(var_422_bool, var_423_object);
				if(var_422_bool != 0) {
					var_424_bool = 0; var_425_object = Obj();
					var_425_object = var_1_object;
					func_6014(var_425_object);
					if(var_424_bool != 0) {
						var_421_bool = 1;
					}
				}
				if(var_421_bool != 0) {
					@@@var_0_bool:AddReply((int)536931, (int)38770, (int)38769);
				}
				var_433_bool = 0; var_434_object = Obj();
				var_434_object = var_1_object;
				func_6108(var_433_bool, var_434_object);
				if(var_433_bool != 0) {
					@@@var_0_bool:AddReply((int)536943, (int)38782, (int)38781);
				}
				var_438_bool = 0; var_439_object = Obj();
				var_439_object = var_1_object;
				func_6118(var_438_bool, var_439_object);
				if(var_438_bool != 0) {
					@@@var_0_bool:AddReply((int)536961, (int)38800, (int)38799);
				}
				var_443_bool = 0; var_444_object = Obj();
				var_444_object = var_1_object;
				func_6128(var_443_bool, var_444_object);
				if(var_443_bool != 0) {
					@@@var_0_bool:AddReply((int)536978, (int)38817, (int)38816);
				}
				var_448_bool = 0;
				var_448_bool = 0;
				var_449_bool = 0; var_450_object = Obj();
				var_450_object = var_1_object;
				func_6138(var_449_bool, var_450_object);
				if(var_449_bool != 0) {
					var_451_bool = 0; var_452_object = Obj();
					var_452_object = var_1_object;
					func_6014(var_452_object);
					if(var_451_bool != 0) {
						var_448_bool = 1;
					}
				}
				if(var_448_bool != 0) {
					@@@var_0_bool:AddReply((int)536993, (int)38832, (int)38831);
				}
				var_456_bool = 0;
				var_456_bool = 0;
				var_457_bool = 0; var_458_object = Obj();
				var_458_object = var_1_object;
				func_6038(var_457_bool, var_458_object);
				if(var_457_bool != 0) {
					var_459_bool = 0; var_460_object = Obj();
					var_460_object = var_1_object;
					func_6014(var_460_object);
					if(var_459_bool != 0) {
						var_456_bool = 1;
					}
				}
				if(var_456_bool != 0) {
					@@@var_0_bool:AddReply((int)537006, (int)38846, (int)38845);
				}
				var_464_bool = 0;
				var_464_bool = 0;
				var_465_bool = 0; var_466_object = Obj();
				var_466_object = var_1_object;
				func_6038(var_465_bool, var_466_object);
				if(var_465_bool != 0) {
					var_467_bool = 0; var_468_object = Obj();
					var_468_object = var_1_object;
					func_6014(var_468_object);
					if(var_467_bool != 0) {
						var_464_bool = 1;
					}
				}
				if(var_464_bool != 0) {
					@@@var_0_bool:AddReply((int)537017, (int)38857, (int)38856);
				}
				var_472_bool = 0; var_473_object = Obj();
				var_473_object = var_1_object;
				func_6038(var_472_bool, var_473_object);
				if(var_472_bool != 0) {
					@@@var_0_bool:AddReply((int)537025, (int)38865, (int)38864);
				}
				var_477_bool = 0; var_478_object = Obj();
				var_478_object = var_1_object;
				func_6038(var_477_bool, var_478_object);
				if(var_477_bool != 0) {
					@@@var_0_bool:AddReply((int)537035, (int)38875, (int)38874);
				}
				var_482_bool = 0; var_483_object = Obj();
				var_483_object = var_1_object;
				func_6038(var_482_bool, var_483_object);
				if(var_482_bool != 0) {
					@@@var_0_bool:AddReply((int)537044, (int)38884, (int)38883);
				}
				@@@var_0_bool:AddReply((int)537050, (int)-1, (int)38889);
				goto Label_712;
		}
	}
Label_712:
	var_349_bool = 0;
	func_6948(var_349_bool);
	if(var_349_bool != 0) {

	Label_716:
		lshWaitForAnimEnd();
		var_350_object = var_3_object;
		if(var_350_object != 0) {
		} else {
			var_351_string = "";
			var_351_string = var_2_object;
			func_5759(var_351_string);
			goto Label_716;
	}
		PlayAnimation("all", "idle");

	Label_731:
		WaitForAnimEnd();
		var_364_object = var_3_object;
		if(var_364_object != 0) {
			goto Label_741;
		}
		PlayAnimation("all", "idle");
		goto Label_731;

	}
	goto Label_741;
	
Label_741:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


func_5236(var_0_bool, var_1_object, var_27_int)
{
	var_29_bool = var_27_int != (int)0;
	if(var_29_bool != 0) {
		return 0;
	}
	var_30_bool = 0; var_31_object = Obj();
	var_31_object = var_1_object;
	func_5274(var_30_bool, var_31_object);
	var_66_bool = var_30_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_6262(var_377_bool)
{
	var_379_bool = 0;
	var_379_bool = 0;
	var_380_int = 0;
	func_5981(var_380_int);
	var_386_bool = var_380_int >= (int)0;
	if(var_386_bool != 0) {
		var_387_int = 0;
		func_5981(var_387_int);
		var_389_bool = var_387_int < (int)12;
		if(var_389_bool != 0) {
			var_379_bool = 1;
		}
	}
	if(var_379_bool != 0) {
		var_377_bool = 1;
		return 0;
	}
	var_377_bool = 0;
	return 0;
}


func_5754()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_5759(var_351_string)
{
	var_352_bool = 0; var_353_float = 0; var_354_float = 0; var_355_bool = 0; var_356_float = 0; var_357_float = 0;
	lshHasAnimation(var_355_bool, var_351_string);
	var_358_bool = var_355_bool;
	if(var_358_bool != 0) {
		lshGetAnimTimes(var_351_string, var_356_float, var_357_float);
		lshPlayAnimation(var_356_float, var_357_float, (bool)0);
	} else {
		var_361_int = "Can't find lsh animation : " + var_351_string;
		Trace(var_361_int);
	}
	return 6;
	
}


func_5258(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_6283(var_398_bool)
{
	var_400_int = 0;
	func_5981(var_400_int);
	var_402_bool = var_400_int >= (int)12;
	if(var_402_bool != 0) {
		var_398_bool = 1;
		return 0;
	}
	var_398_bool = 0;
	return 0;
}


func_5775(var_135_string, var_136_bool)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0;
	lshHasAnimation(var_142_bool, var_135_string);
	var_145_bool = var_142_bool;
	if(var_145_bool != 0) {
		lshGetAnimTimes(var_135_string, var_143_float, var_144_float);
		lshPlayAnimation(var_143_float, var_144_float, var_136_bool);
	} else {
		var_147_int = "Can't find lsh animation : " + var_135_string;
		Trace(var_147_int);
	}
	return 6;
	
}


func_3728(var_0_bool, var_1_object)
{
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_object = Obj(); var_111_bool = 0; var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0; var_116_object = Obj(); var_117_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_112_float, (float)0.5);
	Sleep(var_112_float);
	
Label_3736:
	var_119_bool = var_0_bool == 0; //@nz
	if(var_119_bool != 0) {
		var_120_bool = var_1_object == 0; //@nz
		if(var_120_bool != 0) {

		Label_3740:
			GetPosition(var_114_cvector);
			var_121_float = 0;
			func_3787(var_121_float);
			GetRandomPFPointInCircle(var_113_cvector, var_114_cvector, var_121_float, var_115_bool);
			var_124_bool = var_115_bool;
			if(var_124_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_3740;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_3756;
	
Label_3756:
	var_125_object = Obj(); var_126_cvector = CVector(0,0,0);
	var_113_cvector = var_126_cvector;
	func_3815(var_125_object, var_126_cvector);
	var_125_object = var_116_object;
	var_129_bool = var_116_object != 0; //@nn
	if(var_129_bool != 0) {
		RotatePath(var_116_object, var_117_bool);
		var_130_bool = var_117_bool;
		if(var_130_bool != 0) {
			var_131_bool = 0;
			func_3813(var_131_bool);
			FollowPath(var_116_object, var_131_bool, var_117_bool);
			var_116_object = 0;
			var_132_bool = var_117_bool;
			if(var_132_bool != 0) {
				TaskCall(5);
				func_3985();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_116_object = 0;
	goto Label_3736;
	
}


func_6294(var_107_int)
{
	var_108_int = 0; var_109_int = 0;
	GetVariable("branch", var_109_int);
	var_112_bool = var_109_int == (int)0;
	if(var_112_bool != 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x18a5";
	}
	var_114_bool = var_109_int == (int)1;
	if(var_114_bool != 0) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
	return 2;
}


func_5274(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_5445(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
	return 0;
}


func_5790(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0);
	@@var_23_object:GetEyesHeight(var_26_float);
	var_27_cvector = CVector(0.0, 0.0, 0.0);
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	LookAsync(var_23_object, "head", var_27_cvector);
	return 4;
}


func_5281(var_274_string)
{
	var_274_string = "walk";
	return 0;
}


func_5283(var_275_string)
{
	var_275_string = "run";
	return 0;
}


func_5285(var_502_string, var_503_int)
{
	var_505_bool = var_503_int == (int)2;
	if(var_505_bool != 0) {
		var_502_string = "fire";
		return 0;
	EMIT "GOTO 0x14b1";
	}
	var_507_bool = var_503_int == (int)1;
	if(var_507_bool != 0) {
		var_502_string = "bullet";
		return 0;
	}
	var_502_string = "phys";
	return 0;
}


func_6311(var_158_int)
{
	var_159_int = 0; var_160_int = 0;
	GetVariable("branch", var_160_int);
	var_160_int = var_158_int;
	return 2;
}


func_5801()
{
	var_22_bool = 0;
	func_6948(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_6317(var_36_object)
{
	var_37_int = 0;
	func_6311(var_37_int);
	var_42_bool = var_37_int == (int)1;
	if(var_42_bool != 0) {
		WorkWithCorpse(var_36_object);
	} else {
		Barter(var_36_object);
	}
	return 0;
	
}


func_4270()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_5808(var_58_string, var_59_int, var_60_int)
{
	var_61_bool = 0; var_62_bool = 0;
	var_63_bool = 0; var_64_int = 0; var_65_int = 0;
	var_59_int = var_64_int;
	var_60_int = var_65_int;
	func_5909(var_63_bool, var_64_int, var_65_int);
	if(var_63_bool != 0) {
		AddItem(var_62_bool, var_58_string, (int)0);
	}
	return 2;
}


func_5299(var_53_cvector, var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_57_cvector);
	@@var_54_object:GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
	return 4;
}


func_6842(var_86_int, var_87_object)
{
	var_89_int = 0; var_90_object = Obj();
	var_87_object = var_90_object;
	func_6749(var_89_int, var_90_object);
	var_89_int = var_86_int;
	return 0;
}


func_6330(var_116_int, var_117_int)
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
		if(var_143_bool == 0) goto Label_6348;
		return 4;
	}
Label_6348:
	var_129_int = var_129_int + var_116_int;
	var_136_bool = var_129_int == (int)0;
	if(var_136_bool != 0) {
		return 4;
	}
	var_137_int = 0; var_138_string = "";
	func_6530(var_137_int, "Money");
	AddItem(var_130_bool, var_137_int, (int)0, var_129_int);
	return 4;
	
}


func_5819(var_36_string, var_37_int, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_44_bool = 0; var_45_int = 0; var_46_int = 0;
	var_37_int = var_45_int;
	var_38_int = var_46_int;
	func_5909(var_44_bool, var_45_int, var_46_int);
	if(var_44_bool != 0) {
		irand(var_42_int, var_39_int);
		var_51_int = var_42_int + (int)1;
		AddItem(var_43_bool, var_36_string, (int)0, var_51_int);
	}
	return 4;
}


func_5306(var_37_float, var_38_object)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	GetPosition(var_42_cvector);
	@@var_38_object:GetPosition(var_43_cvector);
	var_44_cvector = var_43_cvector - var_42_cvector;
	var_37_float = var_44_cvector | var_44_cvector;
	return 6;
}


func_4800(var_565_bool, var_566_float)
{
	var_567_float = 0; var_568_bool = 0; var_569_float = 0; var_570_bool = 0;
	rand(var_569_float);
	var_571_bool = var_569_float < var_566_float;
	if(var_571_bool != 0) {

	Label_4805:
		IsAnimationPlaying(var_570_bool);
		var_572_bool = var_570_bool == 0; //@nz
		if(var_572_bool != 0) {
		} else {
			var_573_bool = 0;
			func_4898(var_573_bool);
			if(var_573_bool != 0) {
				var_565_bool = 1;
				sync();
				goto Label_4805;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_5002(var_570_bool);
	}
	goto Label_4825;
	
Label_4825:
	var_565_bool = 0;
	return 4;
	
}


func_6849(var_125_object)
{
	var_126_object = Obj();
	var_125_object = var_126_object;
	func_6759(var_126_object);
	return 0;
}


func_5314(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0;
	IsPlayerActor(var_104_object, var_106_bool);
	var_106_bool = var_103_bool;
	return 2;
}


func_5319(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0;
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", (int)2);
	var_62_bool = var_61_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	@@var_55_object:HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
	return 2;
}


func_6855(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0;
	var_30_object = var_36_object;
	var_37_bool = !var_32_bool;
	func_6767(var_35_bool, var_36_object, var_37_bool);
	var_73_bool = var_35_bool == 0; //@nz
	if(var_73_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	CanSee(var_34_bool, var_29_object);
	var_74_bool = 0;
	var_74_bool = 1;
	var_75_bool = var_34_bool;
	if(var_75_bool != 1) {
		var_76_float = 0; var_77_object = Obj();
		var_29_object = var_77_object;
		func_5306(var_76_float, var_77_object);
		var_84_float = var_31_float * var_31_float;
		var_85_bool = var_76_float <= var_84_float;
		if(var_85_bool != 1) {
			var_74_bool = 0;
		}
	}
	if(var_74_bool != 0) {
		var_28_bool = 1;
		return 2;
	}
	var_28_bool = 0;
	return 2;
}


func_5834(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	IsExisting3DSound(var_54_bool, var_45_string);
	var_62_bool = var_54_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_55_int = 0;

	Label_5840:
		var_64_int = var_55_int + (int)1;
		var_65_int = var_45_string + var_64_int;
		IsExisting3DSound(var_56_bool, var_65_int);
		var_66_bool = var_56_bool == 0; //@nz
		if(var_66_bool != 0) {
		} else {
			var_55_int = var_55_int + (int)1;
			goto Label_5840;
		}
		var_67_bool = var_55_int == 0; //@nz
		if(var_67_bool != 0) {
			return 16;
		}
		irand(var_57_int, var_55_int);
		var_69_int = var_57_int + (int)1;
		var_45_string = var_45_string + var_69_int;
	}
	Is3DSoundLoaded(var_58_bool, var_45_string);
	var_70_bool = var_58_bool;
	if(var_70_bool != 0) {
		GetEyesHeight(var_59_float);
		GetDirection(var_60_cvector);
		var_61_cvector = var_60_cvector * (int)50;
		var_72_float = GetByIndex(var_61_cvector, 1);
		var_72_float = var_72_float + var_59_float;
		SetByIndex(var_61_cvector, 1) = var_72_float;
		PlayGlobalSound(var_45_string, var_61_cvector);
	}
	return 16;
	
}


func_3787(var_121_float)
{
	var_122_float = 0; var_123_float = 0;
	GetCameraFarDistance(var_123_float);
	var_123_float = var_121_float;
	return 2;
}


func_5331(var_474_float, var_475_object, var_476_float, var_477_int)
{
	var_481_int = 0; var_482_string = ""; var_483_int = 0; var_484_float = 0; var_485_float = 0; var_486_float = 0; var_487_int = 0; var_488_string = ""; var_489_int = 0; var_490_float = 0; var_491_float = 0; var_492_float = 0;
	var_493_bool = 0; var_494_object = Obj(); var_495_string = "";
	var_475_object = var_494_object;
	func_5319(var_493_bool, var_494_object, "health");
	var_496_bool = var_493_bool == 0; //@nz
	if(var_496_bool != 0) {
		var_474_float = 0.0;
		return 12;
	}
	var_497_bool = 0; var_498_object = Obj(); var_499_string = "";
	var_475_object = var_498_object;
	func_5319(var_497_bool, var_498_object, "armor");
	var_500_bool = var_497_bool == 0; //@nz
	if(var_500_bool != 0) {
		var_487_int = 0;
	} else {
			@@var_475_object:GetProperty("armor", var_487_int);
	}
	var_502_string = ""; var_503_int = 0;
	var_477_int = var_503_int;
	func_5285(var_502_string, var_503_int);
	var_488_string = "armor_" + var_502_string;
	var_508_bool = 0; var_509_object = Obj(); var_510_string = "";
	var_475_object = var_509_object;
	var_488_string = var_510_string;
	func_5319(var_508_bool, var_509_object, var_510_string);
	var_511_bool = var_508_bool == 0; //@nz
	if(var_511_bool != 0) {
		var_489_int = 0;
	} else {
		@@var_475_object:GetProperty(var_488_string, var_489_int);

	}
	var_512_float = 0; var_513_float = 0; var_514_float = 0;
	var_515_int = var_487_int + var_489_int;
	var_513_float = var_515_int / (float)100.0;
	func_5891(var_512_float, var_513_float, (float)1);
	var_512_float = var_490_float;
	@@var_475_object:GetProperty("health", var_491_float);
	var_520_int = (int)1 - var_490_float;
	var_492_float = var_476_float * var_520_int;
	var_522_float = 0; var_523_float = 0; var_524_float = 0; var_525_float = 0;
	var_523_float = var_491_float - var_492_float;
	func_5898(var_522_float, var_523_float, (float)0, (float)1);
	@@var_475_object:SetProperty("health", var_522_float);
	var_528_bool = 0; var_529_object = Obj();
	var_475_object = var_529_object;
	func_5314(var_528_bool, var_529_object);
	if(var_528_bool != 0) {
		var_530_float = 0;
		var_530_float = -var_492_float;
		func_5955(var_530_float);
	}
	var_492_float = var_474_float;
	return 12;
	
}


func_3799(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_6361(var_164_string)
{
	var_165_object = Obj(); var_166_int = 0; var_167_bool = 0; var_168_object = Obj(); var_169_int = 0; var_170_bool = 0;
	CreateInvItem(var_168_object);
	@@var_168_object:SetItemName(var_164_string);
	@@var_168_object:SetProperty("Organ", (int)1);
	@@var_168_object:GetItemID(var_169_int);
	AddItem(var_170_bool, var_168_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_4827(var_0_bool, var_362_bool, var_363_float)
{
	var_364_bool = 0; var_365_cvector = CVector(0,0,0); var_366_cvector = CVector(0,0,0); var_367_cvector = CVector(0,0,0); var_368_float = 0; var_369_bool = 0; var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_cvector = CVector(0,0,0); var_373_float = 0;
	
Label_4828:
	IsAnimationPlaying(var_369_bool);
	var_374_bool = var_369_bool == 0; //@nz
	if(var_374_bool != 0) {
	} else {
		var_375_bool = 0;
		func_4898(var_375_bool);
		if(var_375_bool != 0) {
			var_362_bool = 1;
			return 10;
		}
		var_418_bool = 0; var_419_object = Obj();
		var_419_object = var_0_bool;
		func_5445(var_418_bool, var_419_object);
		var_420_bool = var_418_bool == 0; //@nz
		if(var_420_bool != 0) {
			var_362_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_370_cvector);
		GetPFPosition(var_371_cvector);
		var_372_cvector = var_370_cvector - var_371_cvector;
		var_373_float = var_372_cvector | var_372_cvector;
		var_421_float = var_363_float * var_363_float;
		var_422_bool = var_373_float < var_421_float;
		if(var_422_bool != 0) {
			var_423_bool = 0; var_424_float = 0;
			var_363_float = var_424_float;
			func_4663(var_372_cvector, var_373_float, var_423_bool, var_424_float);
			var_362_bool = 1;
			sync();
			goto Label_4828;
		}
		return 10;
	}
	func_5002(var_373_float);
	var_362_bool = 0;
	return 10;
	
}


func_3806(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_3296(var_21_object)
{
	EventDisable(0);
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_3329(var_22_object);
	var_102_object = Obj();
	var_21_object = var_102_object;
	func_7010(var_102_object);
	EventEnable(0);
	
Label_3307:
	Hold();
	goto Label_3307;
}
EMIT "Return(); Pop(0)";


func_6884(var_22_int)
{
	var_22_int = 0;
	return 0;
}


func_3813(var_131_bool)
{
	var_131_bool = 0;
	return 0;
}


func_742(var_2_object, var_131_string)
{
	var_132_bool = 0;
	func_6948(var_132_bool);
	var_133_bool = var_132_bool == 0; //@nz
	if(var_133_bool != 0) {
		return 0;
	}
	var_134_bool = var_131_string == var_2_object;
	if(var_134_bool != 0) {
		return 0;
	}
	var_135_string = ""; var_136_bool = 0;
	var_131_string = var_135_string;
	var_138_bool = var_131_string == "";
	if(var_138_bool != 0) {
		var_136_bool = 0;
	} else {
		var_136_bool = 1;
	}
	func_5775(var_135_string, var_136_bool);
	var_2_object = var_131_string;
	return 0;
	
}


func_6887()
{
	return 0;
}


func_3815(var_125_object, var_126_cvector)
{
	var_127_object = Obj(); var_128_object = Obj();
	FindShiftedPathTo(var_128_object, var_126_cvector);
	var_128_object = var_125_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6889(var_129_int)
{
	var_129_int = 0;
	return 0;
}


func_6378()
{
	var_158_int = 0;
	func_6311(var_158_int);
	var_163_bool = var_158_int != (int)1;
	if(var_163_bool != 0) {
		return 0;
	}
	var_164_string = "";
	func_6361("liver");
	var_175_string = "";
	func_6361("kidney");
	var_176_string = "";
	func_6361("heart");
	var_177_string = "";
	func_6361("blood");
	return 0;
}


func_6892()
{
	return 0;
}


func_6894(var_22_int)
{
	var_22_int = 2;
	return 0;
}


func_6897(var_30_object)
{
	var_31_object = Obj();
	var_30_object = var_31_object;
	func_6958(var_30_object, var_31_object);
	return 0;
}


func_5875(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj();
	self(var_109_object);
	var_109_object = var_107_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6903()
{
	return 0;
}


func_6904(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_5881(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_60_float = sqrt(var_61_int);
	var_62_float = 9.999999974752427e-07;
	var_63_bool = var_60_float < var_62_float;
	if(var_63_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_60_float;
	return 2;
}


func_4346(var_127_object)
{
	var_134_object = Obj(); var_135_bool = 0; var_136_float = 0;
	var_127_object = var_134_object;
	func_4360(var_130_int, var_131_bool, var_132_float, var_133_int, var_127_object, var_134_object, (bool)1, (float)180.0);
	return 0;
}


func_6907()
{
	return 0;
}


func_6909(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	CanSee(var_35_bool, var_33_object);
	var_32_bool = 1;
	var_36_bool = var_35_bool;
	if(var_36_bool != 1) {
		var_37_float = 0; var_38_object = Obj();
		var_33_object = var_38_object;
		func_5306(var_37_float, var_38_object);
		var_46_bool = var_37_float <= (int)2250000;
		if(var_46_bool != 1) {
			var_32_bool = 0;
		}
	}
	return 2;
}


func_3329(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0);
	var_43_bool = var_22_object == 0; //@ne
	if(var_43_bool != 0) {
		var_44_string = "";
		func_3420("fdie");
	} else {
		@@var_22_object:GetPosition(var_33_cvector);
		GetPosition(var_34_cvector);
		GetDirection(var_35_cvector);
		var_36_cvector = var_34_cvector - var_33_cvector;
		var_76_float = GetByIndex(var_36_cvector, 0);
		var_77_float = GetByIndex(var_35_cvector, 0);
		var_78_float = var_76_float * var_77_float;
		var_79_float = GetByIndex(var_36_cvector, 2);
		var_80_float = GetByIndex(var_35_cvector, 2);
		var_81_float = var_79_float * var_80_float;
		var_82_int = var_78_float + var_81_float;
		var_84_bool = var_82_int >= (int)0;
		if(var_84_bool != 0) {
			var_37_string = "fdie";
		} else {
				var_37_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_22_object = var_38_object;
		var_87_bool = IsFuncExist(var_22_object, "GetScriptProperty", (int)2);
		if(var_87_bool != 0) {
			@@var_22_object:HasScriptProperty(var_39_bool, "Owner");
			var_89_bool = var_39_bool;
			if(var_89_bool != 0) {
				@@var_22_object:GetScriptProperty(var_38_object, "Owner");
				var_91_bool = var_38_object == 0; //@ne
				if(var_91_bool != 0) {
					var_22_object = var_38_object;
				}
			}
		}
		var_94_bool = IsFuncExist(var_38_object, "@GetEyesHeight", (int)1);
		if(var_94_bool != 0) {
			@@var_38_object:GetEyesHeight(var_41_float);
			var_42_cvector = CVector(0.0, 0.0, 0.0);
			var_95_float = GetByIndex(var_42_cvector, 1);
			var_41_float = var_95_float;
			SetByIndex(var_42_cvector, 1) = var_95_float;
			LookAsync(var_22_object, "head", var_42_cvector);
			var_40_bool = 1;
		} else {
			var_40_bool = 0;

		}
		var_97_string = "";
		var_37_string = var_97_string;
		func_5834(var_97_string);
		PlayAnimation("all", var_37_string);
		WaitForAnimEnd();
		var_99_bool = var_40_bool;
		if(var_99_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_37_string);
		RemoveEnvelope();
		var_38_object = 0;
	}
	return 20;
	
}


func_4354(var_471_float)
{
	var_471_float = 0.029999999329447746;
	return 0;
}


func_5891(var_512_float, var_513_float, var_514_float)
{
	var_517_bool = var_513_float < var_514_float;
	if(var_517_bool != 0) {
		var_513_float = var_512_float;
	} else {
		var_514_float = var_512_float;
	}
	return 0;
	
}


func_6402()
{
	var_113_bool = 0; var_114_bool = 0;
	ClearSubContainer((int)0);
	var_116_int = 0; var_117_int = 0;
	var_119_int = 0;
	func_5972(var_119_int);
	var_126_float = var_119_int * (int)10;
	var_117_int = (int)10 + var_126_float;
	func_6330((int)0, var_117_int);
	var_144_string = ""; var_145_int = 0; var_146_int = 0;
	func_5808("hook", (int)1, (int)4);
	var_155_string = ""; var_156_int = 0; var_157_int = 0;
	func_5808("watch", (int)1, (int)10);
	return 2;
}


func_4357(var_478_int)
{
	var_478_int = 0;
	return 0;
}


func_4870(var_0_bool, var_377_bool)
{
	var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_float = 0; var_382_float = 0; var_383_cvector = CVector(0,0,0); var_384_cvector = CVector(0,0,0); var_385_cvector = CVector(0,0,0); var_386_float = 0; var_387_float = 0;
	var_388_bool = 0; var_389_object = Obj();
	var_389_object = var_0_bool;
	func_5445(var_388_bool, var_389_object);
	var_390_bool = var_388_bool == 0; //@nz
	if(var_390_bool != 0) {
		var_377_bool = 0;
		return 10;
	}
	var_391_bool = 0;
	func_4959(var_387_float, var_391_bool);
	if(var_391_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_383_cvector);
		GetPFPosition(var_384_cvector);
		var_385_cvector = var_383_cvector - var_384_cvector;
		var_386_float = var_385_cvector | var_385_cvector;
		@@@var_0_bool:GetAttackDistance(var_387_float);
		var_387_float = var_387_float + (int)50;
		var_393_float = var_387_float * var_387_float;
		var_377_bool = var_386_float <= var_393_float;
		return 10;
	}
	var_377_bool = 0;
	return 10;
}


func_4360(var_0_bool, var_3_object, var_5_bool, var_134_object, var_135_bool, var_136_float, var_211_bool, var_303_bool)
{
	var_137_float = 0; var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_bool = 0; var_141_bool = 0; var_142_float = 0; var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_bool = 0; var_147_float = 0; var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_cvector = CVector(0,0,0); var_155_float = 0; var_156_cvector = CVector(0,0,0); var_157_bool = 0; var_158_float = 0;
	func_4589(var_156_cvector, var_157_bool, var_158_float);
	var_5_bool = 0;
	var_183_bool = IsFuncExist(var_134_object, "@GetAttackDistance", (int)1);
	if(var_183_bool != 0) {
		@@var_134_object:GetAttackDistance(var_148_float);
		var_148_float = var_148_float + (int)50;
	} else {
							var_136_float = var_148_float;
	}
	var_186_bool = var_148_float >= (int)150;
	if(var_186_bool != 0) {
		var_148_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_134_object;
	IsPlayerActor(var_0_bool, var_151_bool);
	var_187_bool = var_151_bool;
	if(var_187_bool != 0) {
		PlayGlobalMusic("attack");
		var_189_object = Obj();
		func_5875(var_189_object);
		SendPlayerEnemy(var_134_object, var_189_object);
	}
	var_192_bool = var_135_bool;
	if(var_192_bool != 0) {
		var_152_bool = 0;
	} else {
						var_152_bool = 1;

	}
	var_153_float = (float)400.0 + var_148_float;
	
Label_4400:
	var_194_bool = 0;
	var_194_bool = 0;
	var_195_bool = 0; var_196_object = Obj();
	var_196_object = var_0_bool;
	func_5445(var_195_bool, var_196_object);
	if(var_195_bool != 0) {
		var_197_bool = var_3_object == 0; //@nz
		if(var_197_bool != 0) {
			var_194_bool = 1;
		}
	}
	if(var_194_bool != 0) {
		func_5002(var_158_float);
		@@@var_0_bool:GetPFPosition(var_149_cvector);
		GetPFPosition(var_150_cvector);
		var_154_cvector = var_149_cvector - var_150_cvector;
		var_155_float = var_154_cvector | var_154_cvector;
		var_203_float = var_153_float * var_153_float;
		var_204_bool = var_155_float >= var_203_float;
		if(var_204_bool != 0) {
			var_205_bool = 0; var_206_object = Obj(); var_207_float = 0; var_208_float = 0; var_209_bool = 0; var_210_bool = 0;
			var_206_object = var_0_bool;
			var_148_float = var_207_float;
			TaskCall(8);
			func_5029(var_213_bool, var_205_bool, var_206_object, var_207_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_288_bool = var_211_bool == 0; //@nz
			if(var_288_bool != 0) {
			} else {
				var_152_bool = 0;
		} else {
				var_294_float = var_136_float * var_136_float;
				var_295_bool = var_155_float >= var_294_float;
				if(var_295_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_156_cvector);
					CanReachByPF(var_157_bool, var_156_cvector);
					var_296_bool = var_157_bool == 0; //@nz
					if(var_296_bool != 0) {
						var_297_bool = 0; var_298_object = Obj(); var_299_float = 0; var_300_float = 0; var_301_bool = 0; var_302_bool = 0;
						var_298_object = var_0_bool;
						var_148_float = var_299_float;
						TaskCall(8);
						func_5029(var_305_bool, var_297_bool, var_298_object, var_299_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_306_bool = var_303_bool == 0; //@nz
						if(var_306_bool != 0) {
							goto Label_4572;
						}
						var_152_bool = 0;
						goto Label_4400;
					}
					var_307_bool = var_152_bool == 0; //@nz
					if(var_307_bool != 0) {
						var_308_object = Obj();
						var_308_object = var_0_bool;
						func_5595(var_308_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_5002(var_158_float);
						StopAsync();
						var_152_bool = 1;
						var_319_bool = 0; var_320_object = Obj();
						var_320_object = var_0_bool;
						func_5445(var_319_bool, var_320_object);
						var_321_bool = var_319_bool == 0; //@nz
						if(var_321_bool != 0) {
							goto Label_4572;
						}
					}
					rand(var_158_float);
					var_322_bool = 0;
					var_324_bool = var_158_float < (float)0.25;
					if(var_324_bool != 1) {
						var_325_bool = 0;
						func_4959((bool)1, var_325_bool);
						if(var_325_bool != 1) {
							var_322_bool = 0;
						}
					}
					if(var_322_bool != 0) {
						Face(var_0_bool);
						func_5009();
						PlayAnimation("all", "attack_stay");
						var_362_bool = 0; var_363_float = 0;
						var_136_float = var_363_float;
						func_4827(var_158_float, var_362_bool, var_363_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_5002(var_158_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_584_bool = 0;
						func_4959(var_158_float, var_584_bool);
						var_585_bool = var_584_bool == 0; //@nz
						if(var_585_bool == 0) goto Label_4562;
						var_586_bool = 0; var_587_object = Obj();
						var_587_object = var_0_bool;
						func_5445(var_586_bool, var_587_object);
						var_588_bool = var_586_bool == 0; //@nz
						if(var_588_bool != 0) {
							goto Label_4572;
						}
						@@@var_0_bool:GetPFPosition(var_149_cvector);
						GetPFPosition(var_150_cvector);
						var_154_cvector = var_149_cvector - var_150_cvector;
						var_155_float = var_154_cvector | var_154_cvector;
						var_589_float = var_136_float * var_136_float;
						var_590_bool = var_155_float < var_589_float;
						if(var_590_bool == 0) goto Label_4562;
						var_591_bool = 0; var_592_float = 0;
						var_136_float = var_592_float;
						func_4663(var_157_bool, var_158_float, var_591_bool, var_592_float);
						var_593_bool = var_591_bool == 0; //@nz
						if(var_593_bool == 0) goto Label_4562;
						goto Label_4572;
				}
					var_594_bool = 0; var_595_float = 0;
					var_136_float = var_595_float;
					func_4663(var_157_bool, var_158_float, var_594_bool, var_595_float);
					var_596_bool = var_594_bool == 0; //@nz
					if(var_596_bool != 0) {
						goto Label_4572;
					}
					var_152_bool = 1;

				}
			Label_4562:
				goto Label_4571;
		}
		Label_4571:
			goto Label_4400;

		}
	}
Label_4572:
	WaitForAnimEnd();
	var_289_object = var_3_object;
	if(var_289_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_292_bool = var_151_bool;
	if(var_292_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_5898(var_522_float, var_523_float, var_524_float, var_525_float)
{
	var_526_bool = var_523_float < var_524_float;
	if(var_526_bool != 0) {
		var_524_float = var_522_float;
		return 0;
	}
	var_527_bool = var_523_float > var_525_float;
	if(var_527_bool != 0) {
		var_525_float = var_522_float;
		return 0;
	}
	var_523_float = var_522_float;
	return 0;
}


func_6924(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	func_6741(var_61_object);
	return 0;
}


func_6930(var_49_bool)
{
	var_49_bool = 0;
	return 0;
}


func_5909(var_44_bool, var_45_int, var_46_int)
{
	var_47_int = 0; var_48_int = 0;
	irand(var_48_int, var_46_int);
	var_44_bool = var_48_int < var_45_int;
	return 2;
}


func_6933()
{
	return 0;
}


func_6935(var_27_bool)
{
	var_27_bool = 0;
	return 0;
}


func_5914(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_77_float = var_75_float * var_76_float;
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_80_float = var_78_float * var_79_float;
	var_72_float = var_77_float + var_80_float;
	return 0;
}


func_6938()
{
	return 0;
}


func_6940(var_104_int)
{
	var_104_int = 515558;
	return 0;
}


func_5404(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	@@var_48_object:IsDead(var_50_bool);
	var_50_bool = var_47_bool;
	return 2;
}


func_6942(var_103_int)
{
	var_103_int = 503343;
	return 0;
}


func_6430(var_21_bool)
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0;
	ClearSubContainer((int)0);
	func_5972((int)0);
	var_29_int = var_27_int;
	var_35_bool = var_21_bool;
	if(var_35_bool != 0) {
		var_36_string = ""; var_37_int = 0; var_38_int = 0; var_39_int = 0;
		func_5819("alpha_pills", (int)1, (int)2, (int)4);
		var_52_string = ""; var_53_int = 0; var_54_int = 0; var_55_int = 0;
		func_5819("meradorm", (int)2, (int)3, (int)3);
		var_57_bool = var_27_int >= (int)3;
		if(var_57_bool != 0) {
			var_58_string = ""; var_59_int = 0; var_60_int = 0;
			func_5808("beta_pills", (int)1, (int)4);
		}
		var_68_bool = var_27_int >= (int)8;
		if(var_68_bool != 0) {
			var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0;
			func_5819("monomicin", (int)1, (int)2, (int)2);
		} else {
			var_74_bool = var_27_int >= (int)4;
			if(var_74_bool == 0) goto Label_6483;
			var_75_string = ""; var_76_int = 0; var_77_int = 0;
			func_5808("monomicin", (int)1, (int)2);
	}
		var_78_string = ""; var_79_int = 0; var_80_int = 0;
		func_5808("lockpick", (int)1, (int)4);
		var_81_string = ""; var_82_int = 0; var_83_int = 0;
		func_5808("rifle_ammo", (int)1, (int)2);
		var_84_string = ""; var_85_int = 0; var_86_int = 0;
		func_5808("revolver_ammo", (int)1, (int)2);
		var_87_string = ""; var_88_int = 0; var_89_int = 0; var_90_int = 0;
		func_5819("samopal_ammo", (int)1, (int)2, (int)2);
		var_92_bool = var_27_int >= (int)8;
		if(var_92_bool != 0) {
			var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0;
			func_5819("monomicin", (int)1, (int)2, (int)2);
			goto Label_6529;
		}
		var_98_bool = var_27_int >= (int)4;
		if(var_98_bool == 0) goto Label_6529;
		var_99_string = ""; var_100_int = 0; var_101_int = 0;
		func_5808("monomicin", (int)1, (int)2);
	}
Label_6483:
	goto Label_6529;
	
Label_6529:
	return 6;
	
}


func_6944(var_105_string)
{
	var_105_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_5409(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj();
	var_42_bool = var_37_object == 0; //@ne
	if(var_42_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	var_43_bool = 0;
	var_43_bool = 0;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", (int)1);
	if(var_46_bool != 0) {
		var_47_bool = 0; var_48_object = Obj();
		var_37_object = var_48_object;
		func_5404(var_47_bool, var_48_object);
		if(var_47_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	GetScene(var_40_object);
	var_51_bool = var_40_object == 0; //@ne
	if(var_51_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	@@var_37_object:GetScene(var_41_object);
	var_52_bool = var_40_object != var_41_object;
	if(var_52_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	var_36_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6946(var_106_string)
{
	var_106_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_4898(var_375_bool)
{
	var_376_bool = 0;
	var_376_bool = 0;
	var_377_bool = 0;
	func_4870(var_376_bool, var_377_bool);
	if(var_377_bool != 0) {
		var_394_bool = 0;
		func_4914(var_375_bool, var_376_bool, var_394_bool);
		if(var_394_bool != 0) {
			var_376_bool = 1;
		}
	}
	if(var_376_bool != 0) {
		var_375_bool = 1;
		return 0;
	}
	var_375_bool = 0;
	return 0;
}


func_6948(var_98_bool)
{
	var_98_bool = 0;
	return 0;
}


func_5923(var_81_float, var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0);
	var_84_float = GetByIndex(var_82_cvector, 0);
	var_85_float = var_83_float * var_84_float;
	var_86_float = GetByIndex(var_82_cvector, 2);
	var_87_float = GetByIndex(var_82_cvector, 2);
	var_88_float = var_86_float * var_87_float;
	var_89_int = var_85_float + var_88_float;
	var_81_float = sqrt(var_89_int);
	return 0;
}


func_6950()
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_21_bool = 0;
	func_6430((bool)1);
	return 0;
}


func_5933(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_70_cvector = var_73_cvector;
	var_71_cvector = var_74_cvector;
	func_5914(var_72_float, var_73_cvector, var_74_cvector);
	var_81_float = 0; var_82_cvector = CVector(0,0,0);
	var_70_cvector = var_82_cvector;
	func_5923(var_81_float, var_82_cvector);
	var_90_float = 0; var_91_cvector = CVector(0,0,0);
	var_71_cvector = var_91_cvector;
	func_5923(var_90_float, var_91_cvector);
	var_92_float = var_81_float * var_90_float;
	var_69_float = var_72_float / var_92_float;
	return 0;
}


func_6958(var_31_object, var_46_object)
{
	var_32_bool = 0; var_33_bool = 0;
	var_34_bool = GlobalVars[0];
	if(var_34_bool != 0) {
		IsOverrideActive(var_33_bool);
		var_35_bool = var_33_bool == 0; //@nz
		if(var_35_bool != 0) {
			var_36_object = Obj();
			var_31_object = var_36_object;
			func_6317(var_36_object);
		}
		return 2;
	EMIT "GOTO 0x1b55";
	}
	var_44_int = 0; var_45_object = Obj();
	var_31_object = var_45_object;
	TaskCall(1);
	func_40(var_46_object, var_44_int, var_45_object);
	TaskReturn();
	var_499_bool = (int)1000 == var_46_object;
	if(var_499_bool != 0) {
		var_500_bool = 0; var_501_object = Obj();
		var_31_object = var_501_object;
		func_5698(var_500_bool, var_501_object);
		var_532_bool = var_500_bool == 0; //@nz
		if(var_532_bool != 0) {
			return 2;
		}
		var_533_object = Obj();
		var_31_object = var_533_object;
		TaskCall(0);
		func_0(var_533_object);
		TaskReturn();
		var_31_object = Obj();
		func_5754();
	}
	return 2;
}


func_4914(var_0_bool, var_4_string, var_394_bool)
{
	var_395_object = Obj(); var_396_bool = 0; var_397_float = 0; var_398_cvector = CVector(0,0,0); var_399_cvector = CVector(0,0,0); var_400_object = Obj(); var_401_bool = 0; var_402_float = 0; var_403_cvector = CVector(0,0,0); var_404_cvector = CVector(0,0,0);
	GetScene(var_400_object);
	var_401_bool = 0;
	
Label_4918:
	var_405_cvector = CVector(0,0,0); var_406_object = Obj();
	var_406_object = var_0_bool;
	func_5299(var_405_cvector, var_406_object);
	var_411_int = -var_405_cvector;
	FindDirLength(var_402_float, var_411_int, var_4_string);
	var_412_bool = var_402_float < var_4_string;
	if(var_412_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_403_cvector);
		GetPFPosition(var_404_cvector);
		WaitForAnimEnd();
		func_5002(var_404_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_401_bool = 1;
		var_416_bool = 0;
		func_4870(var_404_cvector, var_416_bool);
		var_417_bool = var_416_bool == 0; //@nz
		if(var_417_bool != 0) {
			goto Label_4956;
		}
		goto Label_4918;
	}
Label_4956:
	var_401_bool = var_394_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_5950(var_125_int, var_126_string)
{
	var_127_int = 0; var_128_int = 0;
	GetVariable(var_126_string, var_128_int);
	var_128_int = var_125_int;
	return 2;
}


func_5955(var_530_float)
{
	var_531_object = Obj(); var_532_object = Obj();
	CreateFloatVector(var_532_object);
	@@var_532_object:add(var_530_float);
	var_534_bool = var_530_float < (int)0;
	if(var_534_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_532_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5445(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0;
	var_36_bool = 0; var_37_object = Obj();
	var_33_object = var_37_object;
	func_5409(var_36_bool, var_37_object);
	var_53_bool = var_36_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_54_bool = 0; var_55_object = Obj(); var_56_string = "";
	var_33_object = var_55_object;
	func_5319(var_54_bool, var_55_object, "noaccess");
	var_63_bool = var_54_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_32_bool = 1;
		return 2;
	}
	@@var_33_object:GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == (int)0;
	return 2;
}


func_5972(var_29_int)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_33_int = 0;
	var_33_int = var_31_float / (int)24;
	var_29_int = (int)1 + var_33_int;
	return 2;
}


func_6998(var_64_bool)
{
	var_64_bool = 0;
	return 0;
}


func_7000(var_24_bool, var_25_object, var_26_object, var_27_bool)
{
	var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_float = 0; var_32_bool = 0;
	var_25_object = var_29_object;
	var_26_object = var_30_object;
	var_27_bool = var_32_bool;
	func_6855(var_28_bool, var_29_object, var_30_object, (float)700.0, var_32_bool);
	var_28_bool = var_24_bool;
	return 0;
}


func_3420(var_44_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_45_string = "";
	var_44_string = var_45_string;
	func_5834(var_45_string);
	PlayAnimation("all", var_44_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_44_string);
	RemoveEnvelope();
	return 0;
}


func_5469(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = "";
	var_51_bool = var_36_object == 0; //@ne
	if(var_51_bool != 0) {
		return 14;
	}
	IsDead(var_44_bool);
	var_52_bool = var_44_bool;
	if(var_52_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_45_int);
	var_54_bool = var_45_int < (int)0;
	if(var_54_bool != 0) {
		return 14;
	}
	@@var_36_object:GetPosition(var_46_cvector);
	GetPosition(var_47_cvector);
	GetDirection(var_48_cvector);
	var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_57_float = var_55_float * var_56_float;
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	var_60_float = var_58_float * var_59_float;
	var_61_int = var_57_float + var_60_float;
	var_63_bool = var_61_int >= (int)0;
	if(var_63_bool != 0) {
		var_50_string = "fhit";
	} else {
		var_50_string = "bhit";
	}
	var_66_int = var_50_string + "1";
	var_68_int = var_50_string + "2";
	FadeSecondaryAnimation("hit_react", var_66_int, var_68_int, (int)-10);
	return 14;
	
}


func_5981(var_380_int)
{
	var_381_float = 0; var_382_float = 0;
	GetGameTime(var_382_float);
	var_383_int = 0;
	var_382_float = var_383_int;
	var_380_int = var_383_int % (int)24;
	return 2;
}


func_4959(var_0_bool, var_325_bool)
{
	var_326_bool = 0; var_327_bool = 0;
	var_330_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_330_bool != 0) {
		@@@var_0_bool:IsAttacking(var_327_bool);
		var_327_bool = var_325_bool;
		return 2;
	}
	var_325_bool = 0;
	return 2;
}


func_7010(var_102_object)
{
	var_103_bool = 0; var_104_object = Obj();
	var_102_object = var_104_object;
	func_5314(var_103_bool, var_104_object);
	if(var_103_bool != 0) {
		var_107_object = Obj();
		func_5875(var_107_object);
		ReportReputationChange(var_102_object, var_107_object, (float)-0.10000000149011612, (bool)1);
		var_112_bool = 0;
		var_112_bool = 1;
		func_6402();
	}
	func_6378();
	var_178_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_5989(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	IsPlayerActor(var_22_object, var_24_bool);
	var_25_bool = var_24_bool;
	if(var_25_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_4970(var_2_object, var_5_bool)
{
	var_442_float = 0; var_443_int = 0; var_444_float = 0; var_445_int = 0;
	var_446_bool = var_2_object == 0; //@nz
	if(var_446_bool != 0) {
		return 4;
	}
	var_447_bool = var_5_bool;
	if(var_447_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_450_bool = var_5_bool > (int)0;
		if(var_450_bool != 0) {
			return 4;
		}
	}
	rand(var_444_float);
	var_451_float = 0;
	func_5020(var_451_float);
	var_452_bool = var_444_float < var_451_float;
	if(var_452_bool != 0) {
		irand(var_445_int, var_2_object);
		var_445_int = var_445_int + (int)1;
		var_455_int = "attack" + var_445_int;
		Speak(var_455_int);
		var_456_int = 0;
		func_5018(var_456_int);
		var_5_bool = var_456_int;
	}
	return 4;
}


func_5998()
{
	var_435_object = Obj(); var_436_object = Obj();
	GetScene(var_436_object);
	var_438_object = Obj();
	func_5875(var_438_object);
	BroadcastMessage("battle", var_438_object, var_436_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6009(var_26_object)
{
	@@var_26_object:SetReturnValue((int)1000);
	return 0;
}


func_6014(var_424_bool)
{
	var_426_int = 0; var_427_string = "";
	func_5950(var_426_int, "branch");
	var_429_bool = var_426_int == (int)0;
	if(var_429_bool != 0) {
		var_424_bool = 1;
		return 0;
	}
	var_424_bool = 0;
	return 0;
}


func_6530(var_137_int, var_138_string)
{
	var_139_int = 0; var_140_int = 0;
	GetInvItemByName(var_140_int, var_138_string);
	var_140_int = var_137_int;
	return 2;
}


func_6535(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	TaskCall(3);
	func_3296(var_21_object);
	TaskReturn();
	return 0;
}


func_5513(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0);
	var_44_bool = 0;
	var_44_bool = 0;
	var_45_bool = 0;
	var_45_bool = 0;
	var_46_object = var_23_object;
	if(var_46_object != 0) {
		var_48_bool = var_24_int != (int)4;
		if(var_48_bool != 0) {
			var_45_bool = 1;
		}
	}
	if(var_45_bool != 0) {
		var_50_bool = var_24_int != (int)5;
		if(var_50_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
		var_53_cvector = CVector(0,0,0); var_54_object = Obj();
		var_23_object = var_54_object;
		func_5299(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_5881(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		CreateVectorVector(var_36_object);
		var_37_int = 1;

	Label_5542:
		var_65_int = "hit" + var_37_int;
		GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector);
		var_66_bool = var_38_bool == 0; //@nz
		if(var_66_bool != 0) {
		} else {
			var_114_int = var_40_cvector | var_35_cvector;
			var_116_bool = var_114_int >= (float)0.7071067690849304;
			if(var_116_bool != 0) {
				@@var_36_object:add(var_39_cvector);
			}
			var_37_int = var_37_int + (int)1;
			goto Label_5542;
		}
		@@var_36_object:size(var_41_int);
		var_67_int = var_41_int;
		if(var_67_int != 0) {
			irand(var_42_int, var_41_int);
			@@var_36_object:get(var_43_cvector, var_42_int);
			var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
			var_23_object = var_68_object;
			var_24_int = var_69_int;
			var_25_float = var_70_float;
			var_43_cvector = var_71_cvector;
			var_72_cvector = -var_35_cvector;
			func_5581(var_70_float, var_71_cvector, var_72_cvector);
			return 18;
		}
		var_36_object = 0;
	}
	var_113_object = Obj();
	var_23_object = var_113_object;
	func_5469(var_113_object);
	return 18;
	
}


func_6026(var_123_bool)
{
	var_125_int = 0; var_126_string = "";
	func_5950(var_125_int, "branch");
	var_130_bool = var_125_int == (int)2;
	if(var_130_bool != 0) {
		var_123_bool = 1;
		return 0;
	}
	var_123_bool = 0;
	return 0;
}


func_3467()
{
	var_102_bool = 0;
	func_5606(var_102_bool);
	var_105_bool = var_102_bool == 0; //@nz
	if(var_105_bool != 0) {
		func_6903();
	}
	return 0;
}


func_5002(var_0_bool)
{
	var_198_object = Obj();
	var_198_object = var_0_bool;
	func_5989(var_198_object);
	return 0;
}


func_5007(var_539_int)
{
	var_539_int = 0;
	return 0;
}


func_3985()
{
	var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_bool = 0; var_138_float = 0; var_139_bool = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; var_144_bool = 0; var_145_float = 0; var_146_bool = 0;
	WaitForAnimEnd();
	var_147_bool = 0;
	func_5606(var_147_bool);
	var_148_bool = var_147_bool == 0; //@nz
	if(var_148_bool != 0) {
		return 14;
	}
	func_6715((int)0);
	var_149_int = var_140_int;
	var_141_int = 0;
	
Label_3999:
	var_162_bool = 0;
	var_162_bool = 0;
	var_164_bool = var_141_int < (int)5;
	if(var_164_bool != 0) {
		var_165_bool = 0;
		func_5606(var_165_bool);
		if(var_165_bool != 0) {
			var_162_bool = 1;
		}
	}
	if(var_162_bool != 0) {
		irand(var_142_int, (int)3);
		var_168_bool = var_142_int == (int)0;
		if(var_168_bool != 0) {
			var_169_int = var_140_int;
			if(var_169_int == 0) goto Label_4032;
			irand(var_143_int, var_140_int);
			var_171_string = ""; var_172_int = 0;
			var_143_int = var_172_int;
			func_6708(var_171_string, var_172_int);
			PlayAnimation("all", var_171_string);
			WaitForAnimEnd(var_144_bool);
			var_173_bool = var_144_bool == 0; //@nz
			if(var_173_bool != 0) {
			} else {
		} else {
				var_178_bool = var_142_int == (int)1;
				if(var_178_bool != 0) {
					rand(var_145_float, (int)4);
					var_181_int = var_145_float + (int)1;
					Sleep(var_181_int, var_146_bool);
					var_182_bool = var_146_bool == 0; //@nz
					if(var_182_bool != 0) {
						goto Label_4061;
					}
					goto Label_4050;
				}
				var_183_int = var_141_int;
				if(var_183_int == 0) goto Label_4050;
				goto Label_4061;
		}
		Label_4050:
			var_174_bool = 0;
			func_4064(var_174_bool);
			var_175_bool = var_174_bool == 0; //@nz
			if(var_175_bool != 0) {
				goto Label_4061;
			}
			ResetAAS();
			var_141_int = var_141_int + (int)1;
			goto Label_3999;

		}
	}
Label_4061:
	ResetAAS();
	return 14;
	
}


func_5009()
{
	var_331_string = "";
	func_5834("attack_stay");
	return 0;
}


func_6038(var_149_bool, var_150_object)
{
	var_151_bool = 0; var_152_object = Obj();
	var_150_object = var_152_object;
	func_6178(var_152_object);
	if(var_151_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_5014()
{
	return 0;
}


func_5016(var_564_bool)
{
	var_564_bool = 1;
	return 0;
}


func_5018(var_456_int)
{
	var_456_int = 1;
	return 0;
}


func_5020(var_451_float)
{
	var_451_float = 0.5;
	return 0;
}


func_6048(var_163_bool, var_164_object)
{
	var_165_bool = 0; var_166_object = Obj();
	var_164_object = var_166_object;
	func_6185(var_166_object);
	if(var_165_bool != 0) {
		var_163_bool = 1;
		return 0;
	}
	var_163_bool = 0;
	return 0;
}


func_5029(var_2_object, var_205_bool, var_206_object, var_207_float, var_208_float, var_209_bool, var_210_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_bool = 0; var_217_bool = 0;
	var_218_object = Obj();
	var_206_object = var_218_object;
	func_5989(var_218_object);
	SetTimer((int)1, (int)5);
	CanSee(var_216_bool, var_206_object);
	var_221_bool = var_216_bool;
	if(var_221_bool != 0) {
		var_2_object = true;
		var_222_object = Obj();
		var_206_object = var_222_object;
		func_5790(var_222_object);
	} else {
		var_2_object = false;
	}
	var_229_bool = 0; var_230_object = Obj();
	var_206_object = var_230_object;
	func_5314(var_229_bool, var_230_object);
	if(var_229_bool != 0) {
		var_233_object = Obj();
		func_5875(var_233_object);
		SendPlayerEnemy(var_206_object, var_233_object);
	}
	var_234_bool = 0; var_235_object = Obj(); var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_bool = 0;
	var_206_object = var_235_object;
	var_207_float = var_236_float;
	var_208_float = var_237_float;
	var_209_bool = var_238_bool;
	var_210_bool = var_239_bool;
	func_5134(var_216_bool, var_217_bool, var_234_bool, var_235_object, var_236_float, var_237_float, var_238_bool, var_239_bool);
	var_234_bool = var_217_bool;
	var_285_object = var_2_object;
	if(var_285_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_217_bool = var_205_bool;
	return 4;
	
}


func_6058(var_173_bool, var_174_object)
{
	var_175_bool = 0; var_176_object = Obj();
	var_174_object = var_176_object;
	func_6192(var_176_object);
	if(var_175_bool != 0) {
		var_173_bool = 1;
		return 0;
	}
	var_173_bool = 0;
	return 0;
}


func_6068(var_188_bool, var_189_object)
{
	var_190_bool = 0; var_191_object = Obj();
	var_189_object = var_191_object;
	func_6199(var_191_object);
	if(var_190_bool != 0) {
		var_188_bool = 1;
		return 0;
	}
	var_188_bool = 0;
	return 0;
}


func_6580(var_23_bool, var_24_object, var_25_string)
{
	var_27_bool = var_25_string == "unholster";
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_24_object = var_29_object;
		func_6904(var_29_object);
		var_28_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x19d2";
	}
	var_31_bool = var_25_string == "player_shot";
	if(var_31_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_24_object = var_33_object;
		func_6909(var_32_bool, var_33_object);
		var_32_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x19d2";
	}
	var_48_bool = var_25_string == "battle";
	if(var_48_bool != 0) {
		var_49_bool = 0; var_50_object = Obj();
		var_24_object = var_50_object;
		func_6930(var_50_object);
		var_49_bool = var_23_bool;
		return 0;
	}
	var_23_bool = 0;
	return 0;
}


func_6078(var_197_bool, var_198_object)
{
	var_199_bool = 0; var_200_object = Obj();
	var_198_object = var_200_object;
	func_6206(var_200_object);
	if(var_199_bool != 0) {
		var_197_bool = 1;
		return 0;
	}
	var_197_bool = 0;
	return 0;
}


func_6088(var_206_bool, var_207_object)
{
	var_208_bool = 0; var_209_object = Obj();
	var_207_object = var_209_object;
	func_6213(var_209_object);
	if(var_208_bool != 0) {
		var_206_bool = 1;
		return 0;
	}
	var_206_bool = 0;
	return 0;
}


func_5581(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	GetScene(var_32_object);
	AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	var_36_object = Obj();
	var_25_object = var_36_object;
	func_5469(var_36_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6098(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_object = Obj();
	var_180_object = var_182_object;
	func_6220(var_182_object);
	if(var_181_bool != 0) {
		var_179_bool = 1;
		return 0;
	}
	var_179_bool = 0;
	return 0;
}


func_6612(var_53_object, var_54_string)
{
	var_56_bool = var_54_string == "unholster";
	if(var_56_bool != 0) {
		var_53_object = Obj();
		func_6907();
	} else {
		var_59_bool = var_54_string == "player_shot";
		if(var_59_bool != 0) {
			var_60_object = Obj();
			var_53_object = var_60_object;
			func_6924(var_60_object);
			goto Label_6636;
		}
		var_127_bool = var_54_string == "battle";
		if(var_127_bool == 0) goto Label_6636;
		var_53_object = Obj();
		func_6933();
	}
Label_6636:
	return 0;
	
}


func_5595(var_95_object)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0);
	@@var_95_object:GetPosition(var_99_cvector);
	GetPosition(var_100_cvector);
	var_101_cvector = var_99_cvector - var_100_cvector;
	var_102_float = GetByIndex(var_101_cvector, 0);
	var_103_float = GetByIndex(var_101_cvector, 2);
	RotateAsync(var_102_float, var_103_float);
	return 6;
}


func_6108(var_216_bool, var_217_object)
{
	var_218_bool = 0; var_219_object = Obj();
	var_217_object = var_219_object;
	func_6227(var_219_object);
	if(var_218_bool != 0) {
		var_216_bool = 1;
		return 0;
	}
	var_216_bool = 0;
	return 0;
}


func_4064(var_174_bool)
{
	var_174_bool = 1;
	return 0;
}


func_4066()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_5092(var_2_object)
{
	KillTimer((int)1);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_5258(var_19_object);
	return 0;
}


func_6118(var_222_bool, var_223_object)
{
	var_224_bool = 0; var_225_object = Obj();
	var_223_object = var_225_object;
	func_6234(var_225_object);
	if(var_224_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_5606(var_102_bool)
{
	var_103_bool = 0; var_104_bool = 0;
	IsLoaded(var_104_bool);
	var_104_bool = var_102_bool;
	return 2;
}


func_4071(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0;
	var_0_bool = var_62_object;
	func_4122(var_69_bool);
	GetDirection(var_67_cvector);
	var_77_cvector = CVector(0,0,0); var_78_object = Obj();
	var_78_object = var_0_bool;
	func_5299(var_77_cvector, var_78_object);
	var_77_cvector = var_68_cvector;
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_5933(var_83_float, var_84_cvector, var_85_cvector);
	var_108_bool = var_83_float < (int)0;
	if(var_108_bool != 0) {
		var_109_object = Obj();
		var_109_object = var_0_bool;
		func_5595(var_109_object);
		var_69_bool = 1;
	} else {
		Sleep((float)1.5, var_69_bool);
	}
	var_118_bool = var_69_bool;
	if(var_118_bool != 0) {
		var_119_object = Obj();
		var_119_object = var_0_bool;
		func_5595(var_119_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_5611(var_55_bool, var_56_object, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0;
	@@var_56_object:GetPosition(var_68_cvector);
	@@var_56_object:GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	var_76_float = var_76_float + var_67_float;
	SetByIndex(var_68_cvector, 1) = var_76_float;
	GetPosition(var_69_cvector);
	GetEyesHeight(var_67_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	var_77_float = var_77_float + var_67_float;
	SetByIndex(var_69_cvector, 1) = var_77_float;
	var_70_cvector = var_68_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_79_int = var_70_cvector | var_70_cvector;
	var_80_float = sqrt(var_79_int);
	var_70_cvector = var_70_cvector / var_80_float;
	var_71_cvector = -var_70_cvector;
	var_81_float = var_70_cvector * var_57_float;
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	var_83_cvector = var_71_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5881(var_82_cvector, var_83_cvector);
	var_91_float = var_82_cvector * (int)25;
	var_92_int = var_81_float + var_91_float;
	var_72_cvector = var_92_int - CVector(0.0, 10.0, 0.0);
	var_73_cvector = var_69_cvector + var_72_cvector;
	IsOverrideActive(var_74_bool);
	var_94_bool = var_74_bool;
	if(var_94_bool != 0) {
		var_55_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_73_cvector, var_71_cvector, (bool)1);
	var_96_float = GetByIndex(var_72_cvector, 0);
	var_97_float = GetByIndex(var_72_cvector, 2);
	Rotate(var_96_float, var_97_float);
	var_98_bool = 0;
	func_6948(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		HasAnimationTrack(var_75_bool, "head");
		var_100_bool = var_75_bool;
		if(var_100_bool == 0) goto Label_5674;
		LookAsyncCamera("head");
	}
Label_5674:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_55_bool = 1;
	return 18;
	
}


func_6637(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = 0;
	var_24_bool = 0;
	var_25_bool = 0; var_26_object = Obj();
	var_21_object = var_26_object;
	func_6904(var_26_object);
	if(var_25_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_21_object = var_28_object;
		func_5314(var_27_bool, var_28_object);
		if(var_27_bool != 0) {
			var_24_bool = 1;
		}
	}
	if(var_24_bool != 0) {
		@@var_21_object:IsWeaponHolstered(var_23_bool);
		var_31_bool = var_23_bool == 0; //@nz
		if(var_31_bool != 0) {
			var_20_bool = 1;
			return 2;
		}
	}
	var_20_bool = 0;
	return 2;
}


func_4589(var_1_object, var_2_object, var_4_string)
{
	var_159_bool = 0; var_160_bool = 0; var_161_cvector = CVector(0,0,0); var_162_bool = 0; var_163_bool = 0; var_164_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_4591:
	var_168_int = var_1_object + (int)1;
	var_169_int = "attack_begin" + var_168_int;
	HasAnimation(var_162_bool, "all", var_169_int);
	var_170_bool = var_162_bool == 0; //@nz
	if(var_170_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_4591;
	}
	var_2_object = 0;
	
Label_4605:
	var_173_int = var_2_object + (int)1;
	var_174_int = "attack" + var_173_int;
	IsExisting3DSound(var_163_bool, var_174_int);
	var_175_bool = var_163_bool == 0; //@nz
	if(var_175_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_4605;

	}
	GetAnimationOffset(var_164_cvector, "all", "bjump");
	var_178_float = GetByIndex(var_164_cvector, 2);
	var_4_string = -var_178_float;
	return 6;
	
}


func_6128(var_268_bool, var_269_object)
{
	var_270_bool = 0; var_271_object = Obj();
	var_269_object = var_271_object;
	func_6241(var_271_object);
	if(var_270_bool != 0) {
		var_268_bool = 1;
		return 0;
	}
	var_268_bool = 0;
	return 0;
}


func_6138(var_274_bool, var_275_object)
{
	var_276_bool = 0; var_277_object = Obj();
	var_275_object = var_277_object;
	func_6248(var_277_object);
	if(var_276_bool != 0) {
		var_274_bool = 1;
		return 0;
	}
	var_274_bool = 0;
	return 0;
}


