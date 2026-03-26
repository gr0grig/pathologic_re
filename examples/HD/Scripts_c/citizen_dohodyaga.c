// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,GetGameTime/1,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,HasAnimation/3,CanSee/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:money|W:Money|W:reputation|A:SetReturnValue|W:branch|W:GenerateMoney: iMin > iMax|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:bool:,1:bool:
// @RUN_OP: 0xb13
// @RUN_TASK: 3
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x23e vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0xa86 vars=object
// @EVENT_6: op=0xa94 vars=
// @EVENT_22: op=0xb0d vars=object,int,float,float
// @EVENT_16: op=0xb0f vars=object,string
// @EVENT_41: op=0xb11 vars=object
// @TASK_3: vars=bool,bool,bool params=0
// @EVENT_0: op=0xb2b vars=object
// @EVENT_17: op=0xb3f vars=object
// @EVENT_30: op=0xb57 vars=object,object,bool
// @EVENT_40: op=0xb73 vars=object
// @EVENT_42: op=0xb87 vars=object,string
// @EVENT_26: op=0xbac vars=string
// @EVENT_1: op=0xbba vars=object
// @EVENT_3: op=0xbcd vars=object
// @EVENT_7: op=0xbd3 vars=int
// @EVENT_6: op=0xbdf vars=
// @EVENT_41: op=0xbf6 vars=object
// @EVENT_10: op=0xc67 vars=object
// @EVENT_28: op=0xc6b vars=
// @TASK_4: vars= params=0
// @EVENT_0: op=0xc84 vars=object
// @EVENT_17: op=0xc98 vars=object
// @EVENT_30: op=0xcb0 vars=object,object,bool
// @EVENT_40: op=0xccc vars=object
// @EVENT_42: op=0xce0 vars=object,string
// @EVENT_26: op=0xd05 vars=string
// @EVENT_6: op=0xd13 vars=
// @EVENT_1: op=0xd1a vars=object
// @TASK_5: vars=object params=1
// @EVENT_0: op=0xdb6 vars=object
// @EVENT_17: op=0xdca vars=object
// @EVENT_30: op=0xde2 vars=object,object,bool
// @EVENT_40: op=0xdfe vars=object
// @EVENT_42: op=0xe12 vars=object,string
// @EVENT_26: op=0xe37 vars=string
// @EVENT_41: op=0xe50 vars=object
// @EVENT_7: op=0xe59 vars=int
// @EVENT_6: op=0xe7c vars=
// @EVENT_1: op=0xe83 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0xead vars=
// @EVENT_7: op=0xf1b vars=int
// @EVENT_41: op=0xf56 vars=object
// @TASK_7: vars=object,cvector,bool params=1
// @EVENT_7: op=0xfd6 vars=int
// @EVENT_41: op=0x1011 vars=object
// @TASK_8: vars=object,cvector,bool params=1
// @EVENT_6: op=0x102a vars=
// @EVENT_7: op=0x1098 vars=int
// @EVENT_41: op=0x10d3 vars=object
// @STANDALONE_EVENT_16: op=0x1614 vars=object,string
// @STANDALONE_EVENT_41: op=0x1621 vars=object
// @STANDALONE_EVENT_22: op=0x1627 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x162f vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0x228,0x23e,0xa77,0xa94,0xaf3,0xb0d,0xb0f,0xb11,0xbac,0xbba,0xbcd,0xbd3,0xbdf,0xbf6,0xc67,0xd05,0xd13,0xd1a,0xe37,0xe50,0xe7c,0xe83,0xe91,0xead,0xf56,0x1011,0x102a,0x10d3,0x12be,0x12c9,0x12d1,0x12da,0x12e4,0x1319,0x134f,0x1354,0x1359,0x135e,0x1363,0x1368,0x136d,0x1379,0x1385,0x1391,0x139b,0x13a5,0x13af,0x13b9,0x13c3,0x13cd,0x13d7,0x13e1,0x13eb,0x13f5,0x13ff,0x1409,0x1413,0x141d,0x1427,0x1431,0x143b,0x1445,0x1491,0x1498,0x149f,0x14a6,0x14ad,0x14b4,0x14bb,0x14c2,0x14c9,0x14d0,0x14d7,0x14de,0x14e5,0x1503,0x160c,0x1621,0x1627,0x162f,0x1639,0x1659,0x1689,0x168f,0x16d1,0x16da,0x16e2,0x16ec,0x16f4,0x16fe,0x1748,0x174b,0x174d,0x1750,0x1752,0x1755,0x175c,0x175f,0x1770,0x1778,0x177b,0x177d,0x1780,0x1808,0x1811

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	if((int)1 != 0) {
		func_4734();
		var_23_bool = var_19_bool == (int)45611;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_4943(var_25_object);
		}
		var_28_bool = var_19_bool == (int)45612;
		if(var_28_bool != 0) {
			var_29_object = Obj(); var_30_object = Obj();
			var_29_object = var_1_object;
			var_30_object = var_0_object;
			func_4948(var_30_object);
		}
		var_33_bool = var_19_bool == (int)45613;
		if(var_33_bool != 0) {
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_object;
			func_4953(var_35_object);
		}
		var_38_bool = var_19_bool == (int)45614;
		if(var_38_bool != 0) {
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_4958(var_40_object);
		}
		var_43_bool = var_19_bool == (int)45615;
		if(var_43_bool != 0) {
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_4963(var_45_object);
		}
		var_48_bool = var_19_bool == (int)45616;
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_4968(var_50_object);
		}
		var_53_bool = var_19_bool == (int)38894;
		if(var_53_bool != 0) {
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_4943(var_55_object);
		}
		var_57_bool = var_19_bool == (int)38895;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_4948(var_59_object);
		}
		var_61_bool = var_19_bool == (int)38896;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_4953(var_63_object);
		}
		var_65_bool = var_19_bool == (int)38897;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_4958(var_67_object);
		}
		var_69_bool = var_19_bool == (int)38898;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_4963(var_71_object);
		}
		var_73_bool = var_19_bool == (int)38899;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_4968(var_75_object);
		}
		var_77_bool = var_18_cvector == (int)45606;
		if(var_77_bool != 0) {
			var_78_bool = 0; var_79_object = Obj();
			var_79_object = var_1_object;
			func_4997(var_79_object);
			if(var_78_bool != 0) {
				var_86_string = "";
				func_552(var_19_bool, "Neutral");
				@@@var_0_object:SetMessage((int)543151);
				@@@var_0_object:ClearReplies();
				var_104_bool = 0; var_105_object = Obj();
				var_105_object = var_1_object;
				func_5069(var_104_bool, var_105_object);
				if(var_104_bool != 0) {
					@@@var_0_object:AddReply((int)543163, (int)45619, (int)45618);
				}
				var_118_bool = 0;
				var_118_bool = 1;
				var_119_bool = 0;
				var_119_bool = 1;
				var_120_bool = 0; var_121_object = Obj();
				var_121_object = var_1_object;
				func_5139(var_120_bool, var_121_object);
				if(var_120_bool != 1) {
					var_126_bool = 0; var_127_object = Obj();
					var_127_object = var_1_object;
					func_5149(var_126_bool, var_127_object);
					if(var_126_bool != 1) {
						var_119_bool = 0;
					}
				}
				if(var_119_bool != 1) {
					var_132_bool = 0; var_133_object = Obj();
					var_133_object = var_1_object;
					func_5159(var_132_bool, var_133_object);
					if(var_132_bool != 1) {
						var_118_bool = 0;
					}
				}
				if(var_118_bool != 0) {
					@@@var_0_object:AddReply((int)543171, (int)45628, (int)45627);
				}
				var_141_bool = 0;
				var_141_bool = 1;
				var_142_bool = 0;
				var_142_bool = 1;
				var_143_bool = 0; var_144_object = Obj();
				var_144_object = var_1_object;
				func_5169(var_143_bool, var_144_object);
				if(var_143_bool != 1) {
					var_149_bool = 0; var_150_object = Obj();
					var_150_object = var_1_object;
					func_5179(var_149_bool, var_150_object);
					if(var_149_bool != 1) {
						var_142_bool = 0;
					}
				}
				if(var_142_bool != 1) {
					var_155_bool = 0; var_156_object = Obj();
					var_156_object = var_1_object;
					func_5189(var_155_bool, var_156_object);
					if(var_155_bool != 1) {
						var_141_bool = 0;
					}
				}
				if(var_141_bool != 0) {
					@@@var_0_object:AddReply((int)543176, (int)45633, (int)45632);
				}
				var_164_bool = 0;
				var_164_bool = 1;
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_object;
				func_5069(var_165_bool, var_166_object);
				if(var_165_bool != 1) {
					var_167_bool = 0; var_168_object = Obj();
					var_168_object = var_1_object;
					func_5139(var_167_bool, var_168_object);
					if(var_167_bool != 1) {
						var_164_bool = 0;
					}
				}
				if(var_164_bool != 0) {
					@@@var_0_object:AddReply((int)543153, (int)45610, (int)45608);
				}
				var_172_bool = 0;
				var_172_bool = 1;
				var_173_bool = 0;
				var_173_bool = 1;
				var_174_bool = 0;
				var_174_bool = 1;
				var_175_bool = 0;
				var_175_bool = 1;
				var_176_bool = 0; var_177_object = Obj();
				var_177_object = var_1_object;
				func_5149(var_176_bool, var_177_object);
				if(var_176_bool != 1) {
					var_178_bool = 0; var_179_object = Obj();
					var_179_object = var_1_object;
					func_5159(var_178_bool, var_179_object);
					if(var_178_bool != 1) {
						var_175_bool = 0;
					}
				}
				if(var_175_bool != 1) {
					var_180_bool = 0; var_181_object = Obj();
					var_181_object = var_1_object;
					func_5169(var_180_bool, var_181_object);
					if(var_180_bool != 1) {
						var_174_bool = 0;
					}
				}
				if(var_174_bool != 1) {
					var_182_bool = 0; var_183_object = Obj();
					var_183_object = var_1_object;
					func_5179(var_182_bool, var_183_object);
					if(var_182_bool != 1) {
						var_173_bool = 0;
					}
				}
				if(var_173_bool != 1) {
					var_184_bool = 0; var_185_object = Obj();
					var_185_object = var_1_object;
					func_5189(var_184_bool, var_185_object);
					if(var_184_bool != 1) {
						var_172_bool = 0;
					}
				}
				if(var_172_bool != 0) {
					@@@var_0_object:AddReply((int)543169, (int)45610, (int)45624);
				}
				var_189_bool = 0; var_190_object = Obj();
				var_190_object = var_1_object;
				func_5069(var_189_bool, var_190_object);
				if(var_189_bool != 0) {
					@@@var_0_object:AddReply((int)543152, (int)-1, (int)45607);
				}
				var_194_bool = 0;
				var_194_bool = 1;
				var_195_bool = 0;
				var_195_bool = 1;
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_5139(var_196_bool, var_197_object);
				if(var_196_bool != 1) {
					var_198_bool = 0; var_199_object = Obj();
					var_199_object = var_1_object;
					func_5149(var_198_bool, var_199_object);
					if(var_198_bool != 1) {
						var_195_bool = 0;
					}
				}
				if(var_195_bool != 1) {
					var_200_bool = 0; var_201_object = Obj();
					var_201_object = var_1_object;
					func_5159(var_200_bool, var_201_object);
					if(var_200_bool != 1) {
						var_194_bool = 0;
					}
				}
				if(var_194_bool != 0) {
					@@@var_0_object:AddReply((int)543168, (int)-1, (int)45623);
				}
				var_205_bool = 0;
				var_205_bool = 1;
				var_206_bool = 0;
				var_206_bool = 1;
				var_207_bool = 0; var_208_object = Obj();
				var_208_object = var_1_object;
				func_5169(var_207_bool, var_208_object);
				if(var_207_bool != 1) {
					var_209_bool = 0; var_210_object = Obj();
					var_210_object = var_1_object;
					func_5179(var_209_bool, var_210_object);
					if(var_209_bool != 1) {
						var_206_bool = 0;
					}
				}
				if(var_206_bool != 1) {
					var_211_bool = 0; var_212_object = Obj();
					var_212_object = var_1_object;
					func_5189(var_211_bool, var_212_object);
					if(var_211_bool != 1) {
						var_205_bool = 0;
					}
				}
				if(var_205_bool != 0) {
					@@@var_0_object:AddReply((int)543167, (int)-1, (int)45622);
				}
				@@@var_0_object:AddReply((int)543154, (int)-1, (int)45609);
				return 0;
			}
			var_219_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537053, (int)38893, (int)38892);
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_5079(var_224_bool, var_225_object);
			if(var_224_bool != 0) {
				@@@var_0_object:AddReply((int)537062, (int)38902, (int)38901);
			}
			var_233_bool = 0;
			var_233_bool = 0;
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_4973(var_235_object);
			if(var_234_bool != 0) {
				var_240_bool = 0; var_241_object = Obj();
				var_241_object = var_1_object;
				func_5099(var_240_bool, var_241_object);
				if(var_240_bool != 0) {
					var_233_bool = 1;
				}
			}
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)537065, (int)38905, (int)38904);
			}
			var_249_bool = 0;
			var_249_bool = 0;
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_4973(var_251_object);
			if(var_250_bool != 0) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_5089(var_252_bool, var_253_object);
				if(var_252_bool != 0) {
					var_249_bool = 1;
				}
			}
			if(var_249_bool != 0) {
				@@@var_0_object:AddReply((int)537089, (int)38929, (int)38928);
			}
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_5089(var_261_bool, var_262_object);
			if(var_261_bool != 0) {
				@@@var_0_object:AddReply((int)537104, (int)38945, (int)38944);
			}
			var_266_bool = 0;
			var_266_bool = 0;
			var_267_bool = 0; var_268_object = Obj();
			var_268_object = var_1_object;
			func_4973(var_268_object);
			if(var_267_bool != 0) {
				var_269_bool = 0; var_270_object = Obj();
				var_270_object = var_1_object;
				func_5099(var_269_bool, var_270_object);
				if(var_269_bool != 0) {
					var_266_bool = 1;
				}
			}
			if(var_266_bool != 0) {
				@@@var_0_object:AddReply((int)537124, (int)38966, (int)38965);
			}
			var_274_bool = 0; var_275_object = Obj();
			var_275_object = var_1_object;
			func_5109(var_274_bool, var_275_object);
			if(var_274_bool != 0) {
				@@@var_0_object:AddReply((int)537140, (int)38982, (int)38981);
			}
			var_283_bool = 0; var_284_object = Obj();
			var_284_object = var_1_object;
			func_5119(var_283_bool, var_284_object);
			if(var_283_bool != 0) {
				@@@var_0_object:AddReply((int)537157, (int)38999, (int)38998);
			}
			var_292_bool = 0;
			var_292_bool = 0;
			var_293_bool = 0; var_294_object = Obj();
			var_294_object = var_1_object;
			func_4973(var_294_object);
			if(var_293_bool != 0) {
				var_295_bool = 0; var_296_object = Obj();
				var_296_object = var_1_object;
				func_5129(var_295_bool, var_296_object);
				if(var_295_bool != 0) {
					var_292_bool = 1;
				}
			}
			if(var_292_bool != 0) {
				@@@var_0_object:AddReply((int)537175, (int)39019, (int)39018);
			}
			var_304_bool = 0;
			var_304_bool = 0;
			var_305_bool = 0; var_306_object = Obj();
			var_306_object = var_1_object;
			func_4973(var_306_object);
			if(var_305_bool != 0) {
				var_307_bool = 0; var_308_object = Obj();
				var_308_object = var_1_object;
				func_5139(var_307_bool, var_308_object);
				if(var_307_bool != 0) {
					var_304_bool = 1;
				}
			}
			if(var_304_bool != 0) {
				@@@var_0_object:AddReply((int)537187, (int)39031, (int)39030);
			}
			var_312_bool = 0;
			var_312_bool = 0;
			var_313_bool = 0; var_314_object = Obj();
			var_314_object = var_1_object;
			func_4973(var_314_object);
			if(var_313_bool != 0) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_5149(var_315_bool, var_316_object);
				if(var_315_bool != 0) {
					var_312_bool = 1;
				}
			}
			if(var_312_bool != 0) {
				@@@var_0_object:AddReply((int)537199, (int)39043, (int)39042);
			}
			var_320_bool = 0; var_321_object = Obj();
			var_321_object = var_1_object;
			func_5159(var_320_bool, var_321_object);
			if(var_320_bool != 0) {
				@@@var_0_object:AddReply((int)537209, (int)39053, (int)39052);
			}
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_5169(var_325_bool, var_326_object);
			if(var_325_bool != 0) {
				@@@var_0_object:AddReply((int)537219, (int)39063, (int)39062);
			}
			var_330_bool = 0; var_331_object = Obj();
			var_331_object = var_1_object;
			func_5179(var_330_bool, var_331_object);
			if(var_330_bool != 0) {
				@@@var_0_object:AddReply((int)537226, (int)39070, (int)39069);
			}
			@@@var_0_object:AddReply((int)537237, (int)-1, (int)39080);
			var_338_bool = 0;
			var_338_bool = 1;
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_4985(var_340_object);
			if(var_339_bool != 1) {
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_4973(var_346_object);
				if(var_345_bool != 1) {
					var_338_bool = 0;
				}
			}
			if(var_338_bool != 0) {
				@@@var_0_object:AddReply((int)537238, (int)-1, (int)39081);
			}
			return 0;
		}
		var_351_bool = var_18_cvector == (int)39070;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537228, (int)39072, (int)39071);
			@@@var_0_object:AddReply((int)537235, (int)-1, (int)39078);
			@@@var_0_object:AddReply((int)537236, (int)-1, (int)39079);
			return 0;
		}
		var_364_bool = var_18_cvector == (int)39072;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537229);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537230, (int)39074, (int)39073);
			@@@var_0_object:AddReply((int)537234, (int)-1, (int)39077);
			return 0;
		}
		var_374_bool = var_18_cvector == (int)39074;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537232, (int)-1, (int)39075);
			@@@var_0_object:AddReply((int)537233, (int)-1, (int)39076);
			return 0;
		}
		var_384_bool = var_18_cvector == (int)39063;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537220);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537221, (int)39065, (int)39064);
			@@@var_0_object:AddReply((int)537225, (int)-1, (int)39068);
			return 0;
		}
		var_394_bool = var_18_cvector == (int)39065;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537222);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537223, (int)-1, (int)39066);
			@@@var_0_object:AddReply((int)537224, (int)-1, (int)39067);
			return 0;
		}
		var_404_bool = var_18_cvector == (int)39053;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537211, (int)39055, (int)39054);
			@@@var_0_object:AddReply((int)537218, (int)-1, (int)39061);
			return 0;
		}
		var_414_bool = var_18_cvector == (int)39055;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537213, (int)39057, (int)39056);
			var_420_bool = 0; var_421_object = Obj();
			var_421_object = var_1_object;
			func_4973(var_421_object);
			if(var_420_bool != 0) {
				@@@var_0_object:AddReply((int)537217, (int)-1, (int)39060);
			}
			return 0;
		}
		var_426_bool = var_18_cvector == (int)39057;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537215, (int)-1, (int)39058);
			@@@var_0_object:AddReply((int)537216, (int)-1, (int)39059);
			return 0;
		}
		var_436_bool = var_18_cvector == (int)39043;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537201, (int)39045, (int)39044);
			@@@var_0_object:AddReply((int)537208, (int)-1, (int)39051);
			return 0;
		}
		var_446_bool = var_18_cvector == (int)39045;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537202);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537203, (int)39047, (int)39046);
			@@@var_0_object:AddReply((int)537207, (int)-1, (int)39050);
			return 0;
		}
		var_456_bool = var_18_cvector == (int)39047;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537204);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537205, (int)-1, (int)39048);
			@@@var_0_object:AddReply((int)537206, (int)-1, (int)39049);
			return 0;
		}
		var_466_bool = var_18_cvector == (int)39031;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537189, (int)39033, (int)39032);
			@@@var_0_object:AddReply((int)537193, (int)39037, (int)39036);
			return 0;
		}
		var_476_bool = var_18_cvector == (int)39037;
		if(var_476_bool != 0) {
			var_477_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537195, (int)39039, (int)39038);
			@@@var_0_object:AddReply((int)537198, (int)-1, (int)39041);
			return 0;
		}
		var_486_bool = var_18_cvector == (int)39039;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537197, (int)-1, (int)39040);
			return 0;
		}
		var_493_bool = var_18_cvector == (int)39033;
		if(var_493_bool != 0) {
			var_494_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537191, (int)-1, (int)39034);
			@@@var_0_object:AddReply((int)537192, (int)-1, (int)39035);
			return 0;
		}
		var_503_bool = var_18_cvector == (int)39019;
		if(var_503_bool != 0) {
			var_504_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537177, (int)39021, (int)39020);
			@@@var_0_object:AddReply((int)537186, (int)-1, (int)39029);
			return 0;
		}
		var_513_bool = var_18_cvector == (int)39021;
		if(var_513_bool != 0) {
			var_514_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537179, (int)39023, (int)39022);
			@@@var_0_object:AddReply((int)537185, (int)-1, (int)39028);
			return 0;
		}
		var_523_bool = var_18_cvector == (int)39023;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537181, (int)39025, (int)39024);
			@@@var_0_object:AddReply((int)537184, (int)-1, (int)39027);
			return 0;
		}
		var_533_bool = var_18_cvector == (int)39025;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537183, (int)-1, (int)39026);
			return 0;
		}
		var_540_bool = var_18_cvector == (int)38999;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537158);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537159, (int)39001, (int)39000);
			var_546_bool = 0; var_547_object = Obj();
			var_547_object = var_1_object;
			func_4973(var_547_object);
			if(var_546_bool != 0) {
				@@@var_0_object:AddReply((int)537170, (int)39012, (int)39011);
			}
			@@@var_0_object:AddReply((int)537174, (int)-1, (int)39017);
			return 0;
		}
		var_555_bool = var_18_cvector == (int)39012;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537171);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537172, (int)39001, (int)39013);
			@@@var_0_object:AddReply((int)537173, (int)39001, (int)39015);
			return 0;
		}
		var_565_bool = var_18_cvector == (int)39001;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537160);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537161, (int)39003, (int)39002);
			var_571_bool = 0; var_572_object = Obj();
			var_572_object = var_1_object;
			func_4973(var_572_object);
			if(var_571_bool != 0) {
				@@@var_0_object:AddReply((int)537165, (int)39007, (int)39006);
			}
			return 0;
		}
		var_577_bool = var_18_cvector == (int)39007;
		if(var_577_bool != 0) {
			var_578_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537167, (int)39009, (int)39008);
			return 0;
		}
		var_584_bool = var_18_cvector == (int)39009;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537168);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537169, (int)-1, (int)39010);
			return 0;
		}
		var_591_bool = var_18_cvector == (int)39003;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537163, (int)-1, (int)39004);
			var_597_bool = 0; var_598_object = Obj();
			var_598_object = var_1_object;
			func_4973(var_598_object);
			if(var_597_bool != 0) {
				@@@var_0_object:AddReply((int)537164, (int)-1, (int)39005);
			}
			return 0;
		}
		var_603_bool = var_18_cvector == (int)38982;
		if(var_603_bool != 0) {
			var_604_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537141);
			@@@var_0_object:ClearReplies();
			var_606_bool = 0; var_607_object = Obj();
			var_607_object = var_1_object;
			func_4973(var_607_object);
			if(var_606_bool != 0) {
				@@@var_0_object:AddReply((int)537142, (int)38984, (int)38983);
			}
			@@@var_0_object:AddReply((int)537148, (int)38990, (int)38989);
			@@@var_0_object:AddReply((int)537156, (int)-1, (int)38997);
			return 0;
		}
		var_618_bool = var_18_cvector == (int)38990;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537149);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537150, (int)38992, (int)38991);
			return 0;
		}
		var_625_bool = var_18_cvector == (int)38992;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537151);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537152, (int)38994, (int)38993);
			return 0;
		}
		var_632_bool = var_18_cvector == (int)38994;
		if(var_632_bool != 0) {
			var_633_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537153);
			@@@var_0_object:ClearReplies();
			var_635_bool = 0; var_636_object = Obj();
			var_636_object = var_1_object;
			func_4973(var_636_object);
			if(var_635_bool != 0) {
				@@@var_0_object:AddReply((int)537154, (int)-1, (int)38995);
			}
			@@@var_0_object:AddReply((int)537155, (int)-1, (int)38996);
			return 0;
		}
		var_644_bool = var_18_cvector == (int)38984;
		if(var_644_bool != 0) {
			var_645_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537143);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537144, (int)38986, (int)38985);
			return 0;
		}
		var_651_bool = var_18_cvector == (int)38986;
		if(var_651_bool != 0) {
			var_652_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537145);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537146, (int)-1, (int)38987);
			@@@var_0_object:AddReply((int)537147, (int)-1, (int)38988);
			return 0;
		}
		var_661_bool = var_18_cvector == (int)38966;
		if(var_661_bool != 0) {
			var_662_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537126, (int)38968, (int)38967);
			@@@var_0_object:AddReply((int)537130, (int)38972, (int)38971);
			@@@var_0_object:AddReply((int)537139, (int)-1, (int)38980);
			return 0;
		}
		var_674_bool = var_18_cvector == (int)38972;
		if(var_674_bool != 0) {
			var_675_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537132, (int)38974, (int)38973);
			@@@var_0_object:AddReply((int)537136, (int)38978, (int)38977);
			return 0;
		}
		var_684_bool = var_18_cvector == (int)38978;
		if(var_684_bool != 0) {
			var_685_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537137);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537138, (int)-1, (int)38979);
			return 0;
		}
		var_691_bool = var_18_cvector == (int)38974;
		if(var_691_bool != 0) {
			var_692_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537134, (int)-1, (int)38975);
			@@@var_0_object:AddReply((int)537135, (int)-1, (int)38976);
			return 0;
		}
		var_701_bool = var_18_cvector == (int)38968;
		if(var_701_bool != 0) {
			var_702_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537128, (int)-1, (int)38969);
			@@@var_0_object:AddReply((int)537129, (int)-1, (int)38970);
			return 0;
		}
		var_711_bool = var_18_cvector == (int)38945;
		if(var_711_bool != 0) {
			var_712_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537105);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537106, (int)38947, (int)38946);
			@@@var_0_object:AddReply((int)537123, (int)-1, (int)38964);
			return 0;
		}
		var_721_bool = var_18_cvector == (int)38947;
		if(var_721_bool != 0) {
			var_722_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537107);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537108, (int)38949, (int)38948);
			var_727_bool = 0; var_728_object = Obj();
			var_728_object = var_1_object;
			func_4973(var_728_object);
			if(var_727_bool != 0) {
				@@@var_0_object:AddReply((int)537116, (int)38958, (int)38957);
			}
			return 0;
		}
		var_733_bool = var_18_cvector == (int)38958;
		if(var_733_bool != 0) {
			var_734_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537117);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537118, (int)38960, (int)38959);
			@@@var_0_object:AddReply((int)537122, (int)-1, (int)38963);
			return 0;
		}
		var_743_bool = var_18_cvector == (int)38960;
		if(var_743_bool != 0) {
			var_744_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537119);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537120, (int)-1, (int)38961);
			@@@var_0_object:AddReply((int)537121, (int)-1, (int)38962);
			return 0;
		}
		var_753_bool = var_18_cvector == (int)38949;
		if(var_753_bool != 0) {
			var_754_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537109);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537110, (int)38951, (int)38950);
			@@@var_0_object:AddReply((int)537115, (int)38951, (int)38955);
			return 0;
		}
		var_763_bool = var_18_cvector == (int)38951;
		if(var_763_bool != 0) {
			var_764_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537111);
			@@@var_0_object:ClearReplies();
			var_766_bool = 0; var_767_object = Obj();
			var_767_object = var_1_object;
			func_4973(var_767_object);
			if(var_766_bool != 0) {
				@@@var_0_object:AddReply((int)537112, (int)-1, (int)38952);
			}
			@@@var_0_object:AddReply((int)537113, (int)-1, (int)38953);
			@@@var_0_object:AddReply((int)537114, (int)-1, (int)38954);
			return 0;
		}
		var_778_bool = var_18_cvector == (int)38929;
		if(var_778_bool != 0) {
			var_779_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537091, (int)38931, (int)38930);
			@@@var_0_object:AddReply((int)537100, (int)38940, (int)38939);
			@@@var_0_object:AddReply((int)537103, (int)-1, (int)38943);
			return 0;
		}
		var_791_bool = var_18_cvector == (int)38940;
		if(var_791_bool != 0) {
			var_792_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537101);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537102, (int)38933, (int)38941);
			return 0;
		}
		var_798_bool = var_18_cvector == (int)38931;
		if(var_798_bool != 0) {
			var_799_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537093, (int)38933, (int)38932);
			return 0;
		}
		var_805_bool = var_18_cvector == (int)38933;
		if(var_805_bool != 0) {
			var_806_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537095, (int)38935, (int)38934);
			@@@var_0_object:AddReply((int)537099, (int)-1, (int)38938);
			return 0;
		}
		var_815_bool = var_18_cvector == (int)38935;
		if(var_815_bool != 0) {
			var_816_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537096);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537097, (int)-1, (int)38936);
			@@@var_0_object:AddReply((int)537098, (int)-1, (int)38937);
			return 0;
		}
		var_825_bool = var_18_cvector == (int)38905;
		if(var_825_bool != 0) {
			var_826_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537067, (int)38907, (int)38906);
			@@@var_0_object:AddReply((int)537085, (int)38925, (int)38924);
			return 0;
		}
		var_835_bool = var_18_cvector == (int)38925;
		if(var_835_bool != 0) {
			var_836_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537087, (int)-1, (int)38926);
			@@@var_0_object:AddReply((int)537088, (int)-1, (int)38927);
			return 0;
		}
		var_845_bool = var_18_cvector == (int)38907;
		if(var_845_bool != 0) {
			var_846_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537069, (int)38909, (int)38908);
			@@@var_0_object:AddReply((int)537080, (int)38920, (int)38919);
			return 0;
		}
		var_855_bool = var_18_cvector == (int)38920;
		if(var_855_bool != 0) {
			var_856_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537082, (int)38922, (int)38921);
			return 0;
		}
		var_862_bool = var_18_cvector == (int)38922;
		if(var_862_bool != 0) {
			var_863_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537084, (int)-1, (int)38923);
			return 0;
		}
		var_869_bool = var_18_cvector == (int)38909;
		if(var_869_bool != 0) {
			var_870_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537071, (int)38911, (int)38910);
			@@@var_0_object:AddReply((int)537077, (int)38917, (int)38916);
			return 0;
		}
		var_879_bool = var_18_cvector == (int)38917;
		if(var_879_bool != 0) {
			var_880_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537078);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537079, (int)-1, (int)38918);
			return 0;
		}
		var_886_bool = var_18_cvector == (int)38911;
		if(var_886_bool != 0) {
			var_887_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537073, (int)38913, (int)38912);
			@@@var_0_object:AddReply((int)537076, (int)-1, (int)38915);
			return 0;
		}
		var_896_bool = var_18_cvector == (int)38913;
		if(var_896_bool != 0) {
			var_897_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537075, (int)-1, (int)38914);
			return 0;
		}
		var_903_bool = var_18_cvector == (int)38902;
		if(var_903_bool != 0) {
			var_904_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)537064, (int)-1, (int)38903);
			return 0;
		}
		var_910_bool = var_18_cvector == (int)38893;
		if(var_910_bool != 0) {
			var_911_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)537054);
			@@@var_0_object:ClearReplies();
			var_913_bool = 0; var_914_object = Obj();
			var_914_object = var_1_object;
			func_5009(var_913_bool, var_914_object);
			if(var_913_bool != 0) {
				@@@var_0_object:AddReply((int)537055, (int)-1, (int)38894);
			}
			var_925_bool = 0; var_926_object = Obj();
			var_926_object = var_1_object;
			func_5019(var_925_bool, var_926_object);
			if(var_925_bool != 0) {
				@@@var_0_object:AddReply((int)537056, (int)-1, (int)38895);
			}
			var_937_bool = 0; var_938_object = Obj();
			var_938_object = var_1_object;
			func_5029(var_937_bool, var_938_object);
			if(var_937_bool != 0) {
				@@@var_0_object:AddReply((int)537057, (int)-1, (int)38896);
			}
			var_949_bool = 0; var_950_object = Obj();
			var_950_object = var_1_object;
			func_5039(var_949_bool, var_950_object);
			if(var_949_bool != 0) {
				@@@var_0_object:AddReply((int)537058, (int)-1, (int)38897);
			}
			var_961_bool = 0; var_962_object = Obj();
			var_962_object = var_1_object;
			func_5049(var_961_bool, var_962_object);
			if(var_961_bool != 0) {
				@@@var_0_object:AddReply((int)537059, (int)-1, (int)38898);
			}
			var_973_bool = 0; var_974_object = Obj();
			var_974_object = var_1_object;
			func_5059(var_973_bool, var_974_object);
			if(var_973_bool != 0) {
				@@@var_0_object:AddReply((int)537060, (int)-1, (int)38899);
			}
			@@@var_0_object:AddReply((int)537061, (int)-1, (int)38900);
			return 0;
		}
		var_989_bool = var_18_cvector == (int)45610;
		if(var_989_bool != 0) {
			var_990_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543155);
			@@@var_0_object:ClearReplies();
			var_992_bool = 0; var_993_object = Obj();
			var_993_object = var_1_object;
			func_5009(var_992_bool, var_993_object);
			if(var_992_bool != 0) {
				@@@var_0_object:AddReply((int)543156, (int)-1, (int)45611);
			}
			var_997_bool = 0; var_998_object = Obj();
			var_998_object = var_1_object;
			func_5019(var_997_bool, var_998_object);
			if(var_997_bool != 0) {
				@@@var_0_object:AddReply((int)543157, (int)-1, (int)45612);
			}
			var_1002_bool = 0; var_1003_object = Obj();
			var_1003_object = var_1_object;
			func_5029(var_1002_bool, var_1003_object);
			if(var_1002_bool != 0) {
				@@@var_0_object:AddReply((int)543158, (int)-1, (int)45613);
			}
			var_1007_bool = 0; var_1008_object = Obj();
			var_1008_object = var_1_object;
			func_5039(var_1007_bool, var_1008_object);
			if(var_1007_bool != 0) {
				@@@var_0_object:AddReply((int)543159, (int)-1, (int)45614);
			}
			var_1012_bool = 0; var_1013_object = Obj();
			var_1013_object = var_1_object;
			func_5049(var_1012_bool, var_1013_object);
			if(var_1012_bool != 0) {
				@@@var_0_object:AddReply((int)543160, (int)-1, (int)45615);
			}
			var_1017_bool = 0; var_1018_object = Obj();
			var_1018_object = var_1_object;
			func_5059(var_1017_bool, var_1018_object);
			if(var_1017_bool != 0) {
				@@@var_0_object:AddReply((int)543161, (int)-1, (int)45616);
			}
			var_1022_bool = 0; var_1023_object = Obj();
			var_1023_object = var_1_object;
			func_5069(var_1022_bool, var_1023_object);
			var_1024_bool = var_1022_bool == 0; //@nz
			if(var_1024_bool != 0) {
				@@@var_0_object:AddReply((int)543162, (int)-1, (int)45617);
			}
			var_1028_bool = 0; var_1029_object = Obj();
			var_1029_object = var_1_object;
			func_5069(var_1028_bool, var_1029_object);
			if(var_1028_bool != 0) {
				@@@var_0_object:AddReply((int)543170, (int)-1, (int)45625);
			}
			return 0;
		}
		var_1034_bool = var_18_cvector == (int)45633;
		if(var_1034_bool != 0) {
			var_1035_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543178, (int)-1, (int)45634);
			@@@var_0_object:AddReply((int)543179, (int)-1, (int)45635);
			return 0;
		}
		var_1044_bool = var_18_cvector == (int)45628;
		if(var_1044_bool != 0) {
			var_1045_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543173, (int)-1, (int)45629);
			@@@var_0_object:AddReply((int)543174, (int)-1, (int)45630);
			return 0;
		}
		var_1054_bool = var_18_cvector == (int)45619;
		if(var_1054_bool != 0) {
			var_1055_string = "";
			func_552(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)543164);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)543165, (int)-1, (int)45620);
			@@@var_0_object:AddReply((int)543166, (int)-1, (int)45621);
			return 0;
		}
		var_3_string = true;
		var_1063_bool = 0;
		func_6026(var_1063_bool);
		if(var_1063_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x23f";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5970(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_25_object = Obj();
		var_18_bool = var_25_object;
		func_5973(var_25_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	func_5979();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5970(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3046(var_20_int);
		}
		var_28_object = Obj();
		var_18_bool = var_28_object;
		func_5973(var_28_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_5775(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_5858(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_3046(var_20_int);
		}
		var_71_object = Obj();
		var_18_bool = var_71_object;
		func_5868(var_71_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_object = var_24_object;
	var_19_cvector = var_25_object;
	var_20_bool = var_26_bool;
	func_6152(var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_70_int = 0; var_71_object = Obj(); var_72_bool = 0;
		var_18_object = var_71_object;
		var_20_bool = var_72_bool;
		func_5876(var_71_object, var_72_bool);
		var_70_int = var_22_int;
		var_102_bool = var_22_int > (int)0;
		if(var_102_bool != 0) {
			var_104_bool = var_22_int > (int)1;
			if(var_104_bool != 0) {
				func_3046(var_22_int);
			}
			var_106_object = Obj();
			var_18_object = var_106_object;
			func_5886(var_106_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5960(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3046(var_20_int);
		}
		var_18_bool = Obj();
		func_5963();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_cvector = var_23_object;
	var_19_bool = var_24_string;
	func_5689(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_3046(var_21_int);
		var_51_object = Obj(); var_52_string = "";
		var_18_cvector = var_51_object;
		var_19_bool = var_52_string;
		func_5721(var_51_object, var_52_string);
	} else {
		var_134_int = 0; var_135_string = ""; var_136_object = Obj();
		var_19_bool = var_135_string;
		var_18_cvector = var_136_object;
		func_5965(var_136_object);
		var_134_int = var_21_int;
		var_138_bool = var_21_int > (int)0;
		if(var_138_bool == 0) goto Label_2987;
		var_140_bool = var_21_int > (int)1;
		if(var_140_bool != 0) {
			func_3046(var_21_int);
		}
		var_141_string = ""; var_142_object = Obj();
		var_19_bool = var_141_string;
		var_18_cvector = var_142_object;
		func_5968();
	}
Label_2987:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_5788(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_3046(var_18_bool);
		var_29_string = "";
		var_18_bool = var_29_string;
		func_5804(var_29_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_5746(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_3046(var_18_bool);
		var_32_object = Obj();
		var_18_bool = var_32_object;
		func_5769(var_32_object);
	} else {
		var_34_object = Obj();
		var_18_bool = var_34_object;
		func_3071(var_18_bool, var_34_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_object = Obj();
	var_18_bool = var_19_object;
	func_3071(var_18_bool, var_19_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
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


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	func_3046(var_17_bool);
	func_5979();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	func_3046(var_18_bool);
	var_18_bool = Obj();
	func_5665();
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	RequestClearPath(var_18_bool);
	return 0;
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	Stop();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5970(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3449();
		}
		var_27_object = Obj();
		var_18_bool = var_27_object;
		func_5973(var_27_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_5775(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_5858(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_3449();
		}
		var_70_object = Obj();
		var_18_bool = var_70_object;
		func_5868(var_70_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_object = var_24_object;
	var_19_cvector = var_25_object;
	var_20_bool = var_26_bool;
	func_6152(var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_70_int = 0; var_71_object = Obj(); var_72_bool = 0;
		var_18_object = var_71_object;
		var_20_bool = var_72_bool;
		func_5876(var_71_object, var_72_bool);
		var_70_int = var_22_int;
		var_102_bool = var_22_int > (int)0;
		if(var_102_bool != 0) {
			var_104_bool = var_22_int > (int)1;
			if(var_104_bool != 0) {
				func_3449();
			}
			var_105_object = Obj();
			var_18_object = var_105_object;
			func_5886(var_105_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5960(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3449();
		}
		var_18_bool = Obj();
		func_5963();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_cvector = var_23_object;
	var_19_bool = var_24_string;
	func_5689(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_3449();
		var_50_object = Obj(); var_51_string = "";
		var_18_cvector = var_50_object;
		var_19_bool = var_51_string;
		func_5721(var_50_object, var_51_string);
	} else {
		var_133_int = 0; var_134_string = ""; var_135_object = Obj();
		var_19_bool = var_134_string;
		var_18_cvector = var_135_object;
		func_5965(var_135_object);
		var_133_int = var_21_int;
		var_137_bool = var_21_int > (int)0;
		if(var_137_bool == 0) goto Label_3332;
		var_139_bool = var_21_int > (int)1;
		if(var_139_bool != 0) {
			func_3449();
		}
		var_140_string = ""; var_141_object = Obj();
		var_19_bool = var_140_string;
		var_18_cvector = var_141_object;
		func_5968();
	}
Label_3332:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_5788(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_3449();
		var_28_string = "";
		var_18_bool = var_28_string;
		func_5804(var_28_string);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	func_3449();
	func_5979();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_5746(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_3449();
		var_31_object = Obj();
		var_18_bool = var_31_object;
		func_5769(var_31_object);
	}
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5970(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3653();
		}
		var_29_object = Obj();
		var_18_bool = var_29_object;
		func_5973(var_29_object);
	}
	return 2;
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_5775(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_5858(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_3653();
		}
		var_72_object = Obj();
		var_18_bool = var_72_object;
		func_5868(var_72_object);
	}
	return 2;
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_object = var_24_object;
	var_19_cvector = var_25_object;
	var_20_bool = var_26_bool;
	func_6152(var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_70_int = 0; var_71_object = Obj(); var_72_bool = 0;
		var_18_object = var_71_object;
		var_20_bool = var_72_bool;
		func_5876(var_71_object, var_72_bool);
		var_70_int = var_22_int;
		var_102_bool = var_22_int > (int)0;
		if(var_102_bool != 0) {
			var_104_bool = var_22_int > (int)1;
			if(var_104_bool != 0) {
				func_3653();
			}
			var_107_object = Obj();
			var_18_object = var_107_object;
			func_5886(var_107_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5960(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_3653();
		}
		var_18_bool = Obj();
		func_5963();
	}
	return 2;
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_cvector = var_23_object;
	var_19_bool = var_24_string;
	func_5689(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_3653();
		var_52_object = Obj(); var_53_string = "";
		var_18_cvector = var_52_object;
		var_19_bool = var_53_string;
		func_5721(var_52_object, var_53_string);
	} else {
		var_135_int = 0; var_136_string = ""; var_137_object = Obj();
		var_19_bool = var_136_string;
		var_18_cvector = var_137_object;
		func_5965(var_137_object);
		var_135_int = var_21_int;
		var_139_bool = var_21_int > (int)0;
		if(var_139_bool == 0) goto Label_3638;
		var_141_bool = var_21_int > (int)1;
		if(var_141_bool != 0) {
			func_3653();
		}
		var_142_string = ""; var_143_object = Obj();
		var_19_bool = var_142_string;
		var_18_cvector = var_143_object;
		func_5968();
	}
Label_3638:
	return 2;
	
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_5788(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_3653();
		var_30_string = "";
		var_18_bool = var_30_string;
		func_5804(var_30_string);
	}
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	func_3653();
	var_18_bool = Obj();
	func_5665();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_24_bool = var_18_bool != (int)111;
	if(var_24_bool != 0) {
		return 4;
	}
	var_25_bool = 0; var_26_object = Obj();
	var_26_object = var_0_object;
	func_4439(var_25_bool, var_26_object);
	var_59_bool = var_25_bool == 0; //@nz
	if(var_59_bool != 0) {
		func_3653();
		return 4;
	}
	GetDirection(var_21_cvector);
	var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	var_63_object = var_0_object;
	func_4337(var_62_cvector, var_63_object);
	var_62_cvector = var_22_cvector;
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_21_cvector = var_69_cvector;
	var_22_cvector = var_70_cvector;
	func_4836(var_68_float, var_69_cvector, var_70_cvector);
	var_93_bool = var_68_float < (float)0.4999999701976776;
	if(var_93_bool != 0) {
		var_94_object = Obj();
		var_94_object = var_0_object;
		func_4589(var_94_object);
	}
	return 4;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	func_3653();
	func_5979();
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_5746(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_3653();
		var_33_object = Obj();
		var_18_bool = var_33_object;
		func_5769(var_33_object);
	}
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	func_3919(var_17_bool);
	func_5979();
	return 0;
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0;
	var_28_bool = var_18_bool != (int)120;
	if(var_28_bool != 0) {
		return 8;
	}
	var_29_bool = var_0_object == 0; //@ne
	if(var_29_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_23_cvector);
		FindDirLength(var_24_float, var_23_cvector, (float)7000.0);
		var_32_cvector = CVector(0,0,0); var_33_float = 0;
		func_3764(var_26_float, var_32_cvector, (float)1.7453293800354004);
		var_32_cvector = var_25_cvector;
		var_26_float = var_25_cvector | var_25_cvector;
		var_62_bool = 0;
		var_62_bool = 0;
		var_64_bool = var_26_float >= (float)2500.0;
		if(var_64_bool != 0) {
			var_65_bool = 0;
			var_66_float = var_24_float * var_24_float;
			var_68_float = var_66_float * (float)2.25;
			var_69_bool = var_26_float >= var_68_float;
			if(var_69_bool != 1) {
				var_70_bool = 0;
				func_3935((bool)1, var_70_bool);
				if(var_70_bool != 1) {
					var_65_bool = 0;
				}
			}
			if(var_65_bool != 0) {
				var_62_bool = 1;
			}
		}
		if(var_62_bool == 0) goto Label_3918;
		Stop();
		var_90_cvector = CVector(0,0,0);
		func_4332(var_90_cvector);
		var_1_object = var_90_cvector + var_25_cvector;
	}
Label_3918:
	return 8;
	
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	func_3919(var_18_bool);
	var_18_bool = Obj();
	func_5665();
	return 0;
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_int, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0;
	var_28_bool = var_18_bool != (int)120;
	if(var_28_bool != 0) {
		return 8;
	}
	var_29_bool = var_0_object == 0; //@ne
	if(var_29_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_23_cvector);
		FindDirLength(var_24_float, var_23_cvector, (float)7000.0);
		var_32_cvector = CVector(0,0,0); var_33_float = 0;
		func_3951(var_26_float, var_32_cvector, (float)1.7453293800354004);
		var_32_cvector = var_25_cvector;
		var_26_float = var_25_cvector | var_25_cvector;
		var_62_bool = 0;
		var_62_bool = 0;
		var_64_bool = var_26_float >= (float)2500.0;
		if(var_64_bool != 0) {
			var_65_bool = 0;
			var_66_float = var_24_float * var_24_float;
			var_68_float = var_66_float * (float)2.25;
			var_69_bool = var_26_float >= var_68_float;
			if(var_69_bool != 1) {
				var_70_bool = 0;
				func_4122((bool)1, var_70_bool);
				if(var_70_bool != 1) {
					var_65_bool = 0;
				}
			}
			if(var_65_bool != 0) {
				var_62_bool = 1;
			}
		}
		if(var_62_bool == 0) goto Label_4105;
		Stop();
		var_90_cvector = CVector(0,0,0);
		func_4332(var_90_cvector);
		var_1_object = var_90_cvector + var_25_cvector;
	}
Label_4105:
	return 8;
	
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_object, var_17_cvector, var_18_bool)
{
	func_4106(var_18_bool);
	var_18_bool = Obj();
	func_5665();
	return 0;
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	func_4300(var_17_bool);
	func_5979();
	return 0;
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_int)
{
	var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0;
	var_28_bool = var_18_int != (int)120;
	if(var_28_bool != 0) {
		return 8;
	}
	var_29_bool = var_0_object == 0; //@ne
	if(var_29_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_23_cvector);
		FindDirLength(var_24_float, var_23_cvector, (float)7000.0);
		var_32_cvector = CVector(0,0,0); var_33_float = 0;
		func_4145(var_26_float, var_32_cvector, (float)1.7453293800354004);
		var_32_cvector = var_25_cvector;
		var_26_float = var_25_cvector | var_25_cvector;
		var_62_bool = 0;
		var_62_bool = 0;
		var_64_bool = var_26_float >= (float)2500.0;
		if(var_64_bool != 0) {
			var_65_bool = 0;
			var_66_float = var_24_float * var_24_float;
			var_68_float = var_66_float * (float)2.25;
			var_69_bool = var_26_float >= var_68_float;
			if(var_69_bool != 1) {
				var_70_bool = 0;
				func_4316((bool)1, var_70_bool);
				if(var_70_bool != 1) {
					var_65_bool = 0;
				}
			}
			if(var_65_bool != 0) {
				var_62_bool = 1;
			}
		}
		if(var_62_bool == 0) goto Label_4299;
		Stop();
		var_90_cvector = CVector(0,0,0);
		func_4332(var_90_cvector);
		var_1_object = var_90_cvector + var_25_cvector;
	}
Label_4299:
	return 8;
	
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object)
{
	func_4300(var_18_object);
	var_18_object = Obj();
	func_5665();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_string)
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


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_5644(var_19_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0;
	var_18_object = var_22_object;
	var_19_int = var_23_int;
	var_20_float = var_24_float;
	func_4507(var_22_object, var_23_int, var_24_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	var_18_object = var_24_object;
	var_19_int = var_25_int;
	var_20_float = var_26_float;
	var_22_cvector = var_27_cvector;
	var_23_cvector = var_28_cvector;
	func_4575(var_26_float, var_27_cvector, var_28_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	SensePlayerOnly((bool)1);
	func_6028();
	func_2850();
	
Label_2844:
	var_2_object = false;
	func_3111(var_16_cvector, var_17_bool);
	goto Label_2844;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_49_int, var_50_object)
{
	var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_0_object = var_50_object;
	var_60_bool = 0; var_61_object = Obj(); var_62_float = 0;
	var_50_object = var_61_object;
	func_4605(var_60_bool, var_61_object, (float)70.0);
	var_107_bool = var_60_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	CreateDialog(var_56_object);
	var_108_int = 0;
	func_6020(var_108_int);
	@@var_56_object:SetNPCName(var_108_int);
	var_109_int = 0;
	func_6018(var_109_int);
	@@var_56_object:SetNPCDescription(var_109_int);
	var_110_string = "";
	func_6022(var_110_string);
	@@var_56_object:SetPhoto(var_110_string);
	var_111_string = "";
	func_6024(var_111_string);
	@@var_56_object:SetPhoto2(var_111_string);
	var_112_int = 0;
	func_5356(var_112_int);
	@@var_56_object:SetPlayerName(var_112_int);
	IsOverrideActive(var_57_bool);
	var_120_bool = var_57_bool;
	if(var_120_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	DoDialog(var_56_object);
	var_121_object = Obj(); var_122_object = Obj();
	var_50_object = var_121_object;
	var_56_object = var_122_object;
	TaskCall(1);
	func_74(var_123_object, var_124_object, var_125_string, var_126_bool, var_121_object, var_122_object);
	TaskReturn();
	@@var_56_object:IsDialogEnd(var_59_bool);
	
Label_56:
	var_418_bool = var_59_bool == 0; //@nz
	if(var_418_bool != 0) {
		sync();
		@@var_56_object:IsDialogEnd(var_59_bool);
		goto Label_56;
	}
	var_50_object = Obj();
	func_4674();
	StopDialog(var_56_object);
	@@var_56_object:GetReturnValue((int)-1);
	var_58_int = var_49_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6150(var_63_bool)
{
	var_63_bool = 0;
	return 0;
}


func_5639(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0;
	GetInvItemByName(var_141_int, var_139_string);
	var_141_int = var_138_int;
	return 2;
}


func_6152(var_23_bool, var_24_object, var_25_object)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0;
	var_24_object = var_28_object;
	var_25_object = var_29_object;
	func_5894(var_27_bool, var_28_object, var_29_object, (float)700.0);
	var_27_bool = var_23_bool;
	return 0;
}


func_5129(var_363_bool, var_364_object)
{
	var_365_bool = 0; var_366_object = Obj();
	var_364_object = var_366_object;
	func_5307(var_366_object);
	if(var_365_bool != 0) {
		var_363_bool = 1;
		return 0;
	}
	var_363_bool = 0;
	return 0;
}


func_4106(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_5644(var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	TaskCall(2);
	func_2679(var_20_object);
	TaskReturn();
	return 0;
}


func_6161(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj();
	var_101_object = var_103_object;
	func_4352(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		var_106_object = Obj();
		func_4782(var_106_object);
		ReportReputationChange(var_101_object, var_106_object, (float)-0.029999999329447746, (bool)1);
		var_111_bool = 0;
		func_5464((bool)1);
	}
	func_5440();
	var_245_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_5139(var_170_bool, var_171_object)
{
	var_172_bool = 0; var_173_object = Obj();
	var_171_object = var_173_object;
	func_5314(var_173_object);
	if(var_172_bool != 0) {
		var_170_bool = 1;
		return 0;
	}
	var_170_bool = 0;
	return 0;
}


func_4122(var_0_object, var_70_bool)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	GetDirection(var_73_cvector);
	var_75_cvector = CVector(0,0,0); var_76_object = Obj();
	var_76_object = var_0_object;
	func_4337(var_75_cvector, var_76_object);
	var_75_cvector = var_74_cvector;
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	var_73_cvector = var_82_cvector;
	var_74_cvector = var_83_cvector;
	func_4809(var_81_float, var_82_cvector, var_83_cvector);
	var_70_bool = var_81_float >= (float)-0.3420201241970062;
	return 4;
}


func_5149(var_176_bool, var_177_object)
{
	var_178_bool = 0; var_179_object = Obj();
	var_177_object = var_179_object;
	func_5321(var_179_object);
	if(var_178_bool != 0) {
		var_176_bool = 1;
		return 0;
	}
	var_176_bool = 0;
	return 0;
}


func_5159(var_182_bool, var_183_object)
{
	var_184_bool = 0; var_185_object = Obj();
	var_183_object = var_185_object;
	func_5328(var_185_object);
	if(var_184_bool != 0) {
		var_182_bool = 1;
		return 0;
	}
	var_182_bool = 0;
	return 0;
}


func_552(var_2_object, var_136_string)
{
	var_137_bool = 0;
	func_6026(var_137_bool);
	var_138_bool = var_137_bool == 0; //@nz
	if(var_138_bool != 0) {
		return 0;
	}
	var_139_bool = var_136_string == var_2_object;
	if(var_139_bool != 0) {
		return 0;
	}
	var_140_string = ""; var_141_bool = 0;
	var_136_string = var_140_string;
	var_143_bool = var_136_string == "";
	if(var_143_bool != 0) {
		var_141_bool = 0;
	} else {
		var_141_bool = 1;
	}
	func_4708(var_140_string, var_141_bool);
	var_2_object = var_136_string;
	return 0;
	
}


func_3111(var_0_object, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_30_float, (float)0.5);
	Sleep(var_30_float);
	
Label_3119:
	var_37_bool = var_0_object == 0; //@nz
	if(var_37_bool != 0) {
		var_38_bool = var_1_object == 0; //@nz
		if(var_38_bool != 0) {

		Label_3123:
			GetPosition(var_32_cvector);
			var_39_float = 0;
			func_3170(var_39_float);
			GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool);
			var_42_bool = var_33_bool;
			if(var_42_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_3123;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_3139;
	
Label_3139:
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0);
	var_31_cvector = var_44_cvector;
	func_3198(var_43_object, var_44_cvector);
	var_43_object = var_34_object;
	var_47_bool = var_34_object != 0; //@nn
	if(var_47_bool != 0) {
		RotatePath(var_34_object, var_35_bool);
		var_48_bool = var_35_bool;
		if(var_48_bool != 0) {
			var_49_bool = 0;
			func_3196(var_49_bool);
			FollowPath(var_34_object, var_49_bool, var_35_bool);
			var_34_object = 0;
			var_50_bool = var_35_bool;
			if(var_50_bool != 0) {
				TaskCall(4);
				func_3368();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_34_object = 0;
	goto Label_3119;
	
}


func_5169(var_193_bool, var_194_object)
{
	var_195_bool = 0; var_196_object = Obj();
	var_194_object = var_196_object;
	func_5335(var_196_object);
	if(var_195_bool != 0) {
		var_193_bool = 1;
		return 0;
	}
	var_193_bool = 0;
	return 0;
}


func_4145(var_0_object, var_32_cvector, var_33_float)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_float = 0;
	GetPosition(var_40_cvector);
	@@@var_0_object:GetPosition(var_41_cvector);
	GetDirection(var_42_cvector);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_49_cvector = var_40_cvector - var_41_cvector;
	func_4788(var_48_cvector, var_49_cvector);
	var_56_float = var_42_cvector * (float)0.75;
	var_47_cvector = var_48_cvector + var_56_float;
	func_4788(var_46_cvector, var_47_cvector);
	var_46_cvector = var_43_cvector;
	FindLongestDir(var_44_cvector, var_45_float, var_43_cvector, var_33_float, (int)32, (float)7000.0);
	var_45_float = var_45_float - (int)100;
	var_61_bool = var_45_float < (int)0;
	if(var_61_bool != 0) {
		var_45_float = 0;
	}
	var_32_cvector = var_44_cvector * var_45_float;
	return 12;
}


func_5689(var_22_bool, var_23_object, var_24_string)
{
	var_26_bool = var_24_string == "unholster";
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_23_object = var_28_object;
		func_5980(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0x1657";
	}
	var_30_bool = var_24_string == "player_shot";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_23_object = var_32_object;
		func_5985(var_31_bool, var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0x1657";
	}
	var_47_bool = var_24_string == "battle";
	if(var_47_bool != 0) {
		var_48_bool = 0; var_49_object = Obj();
		var_23_object = var_49_object;
		func_6008(var_49_object);
		var_48_bool = var_22_bool;
		return 0;
	}
	var_22_bool = 0;
	return 0;
}


func_5179(var_199_bool, var_200_object)
{
	var_201_bool = 0; var_202_object = Obj();
	var_200_object = var_202_object;
	func_5342(var_202_object);
	if(var_201_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_4674()
{
	var_420_bool = 0; var_421_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_423_bool = 0;
	func_6026(var_423_bool);
	if(var_423_bool != 0) {
	} else {
		HasAnimationTrack(var_421_bool, "head");
		var_425_bool = var_421_bool;
		if(var_425_bool == 0) goto Label_4691;
		UnlookAsync("head");
	}
Label_4691:
	return 2;
	
}


func_5189(var_205_bool, var_206_object)
{
	var_207_bool = 0; var_208_object = Obj();
	var_206_object = var_208_object;
	func_5349(var_208_object);
	if(var_207_bool != 0) {
		var_205_bool = 1;
		return 0;
	}
	var_205_bool = 0;
	return 0;
}


func_3653()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_121_object, var_122_object)
{
	var_0_object = var_122_object;
	var_1_object = var_121_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_128_bool = 0; var_129_object = Obj();
		var_129_object = var_1_object;
		func_4997(var_129_object);
		if(var_128_bool != 0) {
			var_136_string = "";
			func_552(var_122_object, "Neutral");
			@@@var_0_object:SetMessage((int)543151);
			@@@var_0_object:ClearReplies();
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_5069(var_154_bool, var_155_object);
			if(var_154_bool != 0) {
				@@@var_0_object:AddReply((int)543163, (int)45619, (int)45618);
			}
			var_168_bool = 0;
			var_168_bool = 1;
			var_169_bool = 0;
			var_169_bool = 1;
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_5139(var_170_bool, var_171_object);
			if(var_170_bool != 1) {
				var_176_bool = 0; var_177_object = Obj();
				var_177_object = var_1_object;
				func_5149(var_176_bool, var_177_object);
				if(var_176_bool != 1) {
					var_169_bool = 0;
				}
			}
			if(var_169_bool != 1) {
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_5159(var_182_bool, var_183_object);
				if(var_182_bool != 1) {
					var_168_bool = 0;
				}
			}
			if(var_168_bool != 0) {
				@@@var_0_object:AddReply((int)543171, (int)45628, (int)45627);
			}
			var_191_bool = 0;
			var_191_bool = 1;
			var_192_bool = 0;
			var_192_bool = 1;
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_5169(var_193_bool, var_194_object);
			if(var_193_bool != 1) {
				var_199_bool = 0; var_200_object = Obj();
				var_200_object = var_1_object;
				func_5179(var_199_bool, var_200_object);
				if(var_199_bool != 1) {
					var_192_bool = 0;
				}
			}
			if(var_192_bool != 1) {
				var_205_bool = 0; var_206_object = Obj();
				var_206_object = var_1_object;
				func_5189(var_205_bool, var_206_object);
				if(var_205_bool != 1) {
					var_191_bool = 0;
				}
			}
			if(var_191_bool != 0) {
				@@@var_0_object:AddReply((int)543176, (int)45633, (int)45632);
			}
			var_214_bool = 0;
			var_214_bool = 1;
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_5069(var_215_bool, var_216_object);
			if(var_215_bool != 1) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_object;
				func_5139(var_217_bool, var_218_object);
				if(var_217_bool != 1) {
					var_214_bool = 0;
				}
			}
			if(var_214_bool != 0) {
				@@@var_0_object:AddReply((int)543153, (int)45610, (int)45608);
			}
			var_222_bool = 0;
			var_222_bool = 1;
			var_223_bool = 0;
			var_223_bool = 1;
			var_224_bool = 0;
			var_224_bool = 1;
			var_225_bool = 0;
			var_225_bool = 1;
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_5149(var_226_bool, var_227_object);
			if(var_226_bool != 1) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_5159(var_228_bool, var_229_object);
				if(var_228_bool != 1) {
					var_225_bool = 0;
				}
			}
			if(var_225_bool != 1) {
				var_230_bool = 0; var_231_object = Obj();
				var_231_object = var_1_object;
				func_5169(var_230_bool, var_231_object);
				if(var_230_bool != 1) {
					var_224_bool = 0;
				}
			}
			if(var_224_bool != 1) {
				var_232_bool = 0; var_233_object = Obj();
				var_233_object = var_1_object;
				func_5179(var_232_bool, var_233_object);
				if(var_232_bool != 1) {
					var_223_bool = 0;
				}
			}
			if(var_223_bool != 1) {
				var_234_bool = 0; var_235_object = Obj();
				var_235_object = var_1_object;
				func_5189(var_234_bool, var_235_object);
				if(var_234_bool != 1) {
					var_222_bool = 0;
				}
			}
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)543169, (int)45610, (int)45624);
			}
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_5069(var_239_bool, var_240_object);
			if(var_239_bool != 0) {
				@@@var_0_object:AddReply((int)543152, (int)-1, (int)45607);
			}
			var_244_bool = 0;
			var_244_bool = 1;
			var_245_bool = 0;
			var_245_bool = 1;
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_5139(var_246_bool, var_247_object);
			if(var_246_bool != 1) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_5149(var_248_bool, var_249_object);
				if(var_248_bool != 1) {
					var_245_bool = 0;
				}
			}
			if(var_245_bool != 1) {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_object;
				func_5159(var_250_bool, var_251_object);
				if(var_250_bool != 1) {
					var_244_bool = 0;
				}
			}
			if(var_244_bool != 0) {
				@@@var_0_object:AddReply((int)543168, (int)-1, (int)45623);
			}
			var_255_bool = 0;
			var_255_bool = 1;
			var_256_bool = 0;
			var_256_bool = 1;
			var_257_bool = 0; var_258_object = Obj();
			var_258_object = var_1_object;
			func_5169(var_257_bool, var_258_object);
			if(var_257_bool != 1) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_5179(var_259_bool, var_260_object);
				if(var_259_bool != 1) {
					var_256_bool = 0;
				}
			}
			if(var_256_bool != 1) {
				var_261_bool = 0; var_262_object = Obj();
				var_262_object = var_1_object;
				func_5189(var_261_bool, var_262_object);
				if(var_261_bool != 1) {
					var_255_bool = 0;
				}
			}
			if(var_255_bool != 0) {
				@@@var_0_object:AddReply((int)543167, (int)-1, (int)45622);
			}
			@@@var_0_object:AddReply((int)543154, (int)-1, (int)45609);
		} else {
				var_287_string = "";
				func_552(var_122_object, "Neutral");
				@@@var_0_object:SetMessage((int)537052);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)537053, (int)38893, (int)38892);
				var_292_bool = 0; var_293_object = Obj();
				var_293_object = var_1_object;
				func_5079(var_292_bool, var_293_object);
				if(var_292_bool != 0) {
					@@@var_0_object:AddReply((int)537062, (int)38902, (int)38901);
				}
				var_301_bool = 0;
				var_301_bool = 0;
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_4973(var_303_object);
				if(var_302_bool != 0) {
					var_308_bool = 0; var_309_object = Obj();
					var_309_object = var_1_object;
					func_5099(var_308_bool, var_309_object);
					if(var_308_bool != 0) {
						var_301_bool = 1;
					}
				}
				if(var_301_bool != 0) {
					@@@var_0_object:AddReply((int)537065, (int)38905, (int)38904);
				}
				var_317_bool = 0;
				var_317_bool = 0;
				var_318_bool = 0; var_319_object = Obj();
				var_319_object = var_1_object;
				func_4973(var_319_object);
				if(var_318_bool != 0) {
					var_320_bool = 0; var_321_object = Obj();
					var_321_object = var_1_object;
					func_5089(var_320_bool, var_321_object);
					if(var_320_bool != 0) {
						var_317_bool = 1;
					}
				}
				if(var_317_bool != 0) {
					@@@var_0_object:AddReply((int)537089, (int)38929, (int)38928);
				}
				var_329_bool = 0; var_330_object = Obj();
				var_330_object = var_1_object;
				func_5089(var_329_bool, var_330_object);
				if(var_329_bool != 0) {
					@@@var_0_object:AddReply((int)537104, (int)38945, (int)38944);
				}
				var_334_bool = 0;
				var_334_bool = 0;
				var_335_bool = 0; var_336_object = Obj();
				var_336_object = var_1_object;
				func_4973(var_336_object);
				if(var_335_bool != 0) {
					var_337_bool = 0; var_338_object = Obj();
					var_338_object = var_1_object;
					func_5099(var_337_bool, var_338_object);
					if(var_337_bool != 0) {
						var_334_bool = 1;
					}
				}
				if(var_334_bool != 0) {
					@@@var_0_object:AddReply((int)537124, (int)38966, (int)38965);
				}
				var_342_bool = 0; var_343_object = Obj();
				var_343_object = var_1_object;
				func_5109(var_342_bool, var_343_object);
				if(var_342_bool != 0) {
					@@@var_0_object:AddReply((int)537140, (int)38982, (int)38981);
				}
				var_351_bool = 0; var_352_object = Obj();
				var_352_object = var_1_object;
				func_5119(var_351_bool, var_352_object);
				if(var_351_bool != 0) {
					@@@var_0_object:AddReply((int)537157, (int)38999, (int)38998);
				}
				var_360_bool = 0;
				var_360_bool = 0;
				var_361_bool = 0; var_362_object = Obj();
				var_362_object = var_1_object;
				func_4973(var_362_object);
				if(var_361_bool != 0) {
					var_363_bool = 0; var_364_object = Obj();
					var_364_object = var_1_object;
					func_5129(var_363_bool, var_364_object);
					if(var_363_bool != 0) {
						var_360_bool = 1;
					}
				}
				if(var_360_bool != 0) {
					@@@var_0_object:AddReply((int)537175, (int)39019, (int)39018);
				}
				var_372_bool = 0;
				var_372_bool = 0;
				var_373_bool = 0; var_374_object = Obj();
				var_374_object = var_1_object;
				func_4973(var_374_object);
				if(var_373_bool != 0) {
					var_375_bool = 0; var_376_object = Obj();
					var_376_object = var_1_object;
					func_5139(var_375_bool, var_376_object);
					if(var_375_bool != 0) {
						var_372_bool = 1;
					}
				}
				if(var_372_bool != 0) {
					@@@var_0_object:AddReply((int)537187, (int)39031, (int)39030);
				}
				var_380_bool = 0;
				var_380_bool = 0;
				var_381_bool = 0; var_382_object = Obj();
				var_382_object = var_1_object;
				func_4973(var_382_object);
				if(var_381_bool != 0) {
					var_383_bool = 0; var_384_object = Obj();
					var_384_object = var_1_object;
					func_5149(var_383_bool, var_384_object);
					if(var_383_bool != 0) {
						var_380_bool = 1;
					}
				}
				if(var_380_bool != 0) {
					@@@var_0_object:AddReply((int)537199, (int)39043, (int)39042);
				}
				var_388_bool = 0; var_389_object = Obj();
				var_389_object = var_1_object;
				func_5159(var_388_bool, var_389_object);
				if(var_388_bool != 0) {
					@@@var_0_object:AddReply((int)537209, (int)39053, (int)39052);
				}
				var_393_bool = 0; var_394_object = Obj();
				var_394_object = var_1_object;
				func_5169(var_393_bool, var_394_object);
				if(var_393_bool != 0) {
					@@@var_0_object:AddReply((int)537219, (int)39063, (int)39062);
				}
				var_398_bool = 0; var_399_object = Obj();
				var_399_object = var_1_object;
				func_5179(var_398_bool, var_399_object);
				if(var_398_bool != 0) {
					@@@var_0_object:AddReply((int)537226, (int)39070, (int)39069);
				}
				@@@var_0_object:AddReply((int)537237, (int)-1, (int)39080);
				var_406_bool = 0;
				var_406_bool = 1;
				var_407_bool = 0; var_408_object = Obj();
				var_408_object = var_1_object;
				func_4985(var_408_object);
				if(var_407_bool != 1) {
					var_413_bool = 0; var_414_object = Obj();
					var_414_object = var_1_object;
					func_4973(var_414_object);
					if(var_413_bool != 1) {
						var_406_bool = 0;
					}
				}
				if(var_406_bool != 0) {
					@@@var_0_object:AddReply((int)537238, (int)-1, (int)39081);
				}
				goto Label_522;
		}
	}
Label_522:
	var_269_bool = 0;
	func_6026(var_269_bool);
	if(var_269_bool != 0) {

	Label_526:
		lshWaitForAnimEnd();
		var_270_string = var_3_string;
		if(var_270_string != 0) {
		} else {
			var_271_string = "";
			var_271_string = var_2_object;
			func_4692(var_271_string);
			goto Label_526;
	}
		PlayAnimation("all", "idle");

	Label_541:
		WaitForAnimEnd();
		var_284_string = var_3_string;
		if(var_284_string != 0) {
			goto Label_551;
		}
		PlayAnimation("all", "idle");
		goto Label_541;

	}
	goto Label_551;
	
Label_551:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_5199(var_915_bool, var_916_object)
{
	var_917_float = 0; var_918_float = 0;
	@@var_916_object:GetProperty("money", var_918_float);
	var_921_bool = var_918_float >= (int)100;
	if(var_921_bool != 0) {
		var_915_bool = 1;
		return 2;
	}
	var_915_bool = 0;
	return 2;
}


func_4175(var_0_object, var_1_object, var_2_object, var_60_object)
{
	var_64_cvector = CVector(0,0,0); var_65_float = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_float = 0; var_71_bool = 0; var_72_cvector = CVector(0,0,0); var_73_float = 0;
	var_0_object = var_60_object;
	var_74_cvector = CVector(0,0,0); var_75_float = 0;
	func_4145(var_73_float, var_74_cvector, (float)1.7453293800354004);
	var_74_cvector = var_69_cvector;
	var_70_float = var_69_cvector | var_69_cvector;
	var_105_bool = var_70_float < (float)2500.0;
	if(var_105_bool != 0) {
		var_106_cvector = CVector(0,0,0); var_107_float = 0;
		func_4145(var_73_float, var_106_cvector, (float)2.6179938316345215);
		var_106_cvector = var_69_cvector;
		var_70_float = var_69_cvector | var_69_cvector;
		var_109_bool = var_70_float < (float)2500.0;
		if(var_109_bool != 0) {
			var_111_float = sqrt(var_70_float);
			var_112_int = "Can't retreat, distance: " + var_111_float;
			Trace(var_112_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_114_float = GetByIndex(var_69_cvector, 0);
	var_115_float = GetByIndex(var_69_cvector, 2);
	Rotate(var_114_float, var_115_float);
	var_116_cvector = CVector(0,0,0);
	func_4332(var_116_cvector);
	var_1_object = var_116_cvector + var_69_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_4217:
	MovePoint(var_1_object, (int)1, var_71_bool);
	var_122_bool = var_71_bool;
	if(var_122_bool != 0) {
		var_123_bool = var_0_object == 0; //@ne
		if(var_123_bool != 0) {
			goto Label_4247;
		EMIT "GOTO 0x1095";

		Label_4247:
			return 10;
		}
		var_124_cvector = CVector(0,0,0); var_125_float = 0;
		func_4145(var_73_float, var_124_cvector, (float)2.6179938316345215);
		var_124_cvector = var_72_cvector;
		var_73_float = var_72_cvector | var_72_cvector;
		var_127_bool = var_73_float >= (float)2500.0;
		if(var_127_bool != 0) {
			var_128_cvector = CVector(0,0,0);
			func_4332(var_128_cvector);
			var_1_object = var_128_cvector + var_72_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_4247;
		}
	}
	var_131_bool = var_2_object == 0; //@nz
	if(var_131_bool == 1) goto Label_4217;
	
}


func_4692(var_271_string)
{
	var_272_bool = 0; var_273_float = 0; var_274_float = 0; var_275_bool = 0; var_276_float = 0; var_277_float = 0;
	lshHasAnimation(var_275_bool, var_271_string);
	var_278_bool = var_275_bool;
	if(var_278_bool != 0) {
		lshGetAnimTimes(var_271_string, var_276_float, var_277_float);
		lshPlayAnimation(var_276_float, var_277_float, (bool)0);
	} else {
		var_281_int = "Can't find lsh animation : " + var_271_string;
		Trace(var_281_int);
	}
	return 6;
	
}


func_5721(var_52_object, var_53_string)
{
	var_55_bool = var_53_string == "unholster";
	if(var_55_bool != 0) {
		var_52_object = Obj();
		func_5983();
	} else {
		var_58_bool = var_53_string == "player_shot";
		if(var_58_bool != 0) {
			var_59_object = Obj();
			var_52_object = var_59_object;
			func_6000(var_59_object);
			goto Label_5745;
		}
		var_133_bool = var_53_string == "battle";
		if(var_133_bool == 0) goto Label_5745;
		var_52_object = Obj();
		func_6011();
	}
Label_5745:
	return 0;
	
}


func_5210(var_927_bool, var_928_object)
{
	var_929_float = 0; var_930_float = 0;
	@@var_928_object:GetProperty("money", var_930_float);
	var_933_bool = var_930_float >= (int)500;
	if(var_933_bool != 0) {
		var_927_bool = 1;
		return 2;
	}
	var_927_bool = 0;
	return 2;
}


func_3170(var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	GetCameraFarDistance(var_41_float);
	var_41_float = var_39_float;
	return 2;
}


func_4708(var_140_string, var_141_bool)
{
	var_144_bool = 0; var_145_float = 0; var_146_float = 0; var_147_bool = 0; var_148_float = 0; var_149_float = 0;
	lshHasAnimation(var_147_bool, var_140_string);
	var_150_bool = var_147_bool;
	if(var_150_bool != 0) {
		lshGetAnimTimes(var_140_string, var_148_float, var_149_float);
		lshPlayAnimation(var_148_float, var_149_float, var_141_bool);
	} else {
		var_152_int = "Can't find lsh animation : " + var_140_string;
		Trace(var_152_int);
	}
	return 6;
	
}


func_5221(var_939_bool, var_940_object)
{
	var_941_float = 0; var_942_float = 0;
	@@var_940_object:GetProperty("money", var_942_float);
	var_945_bool = var_942_float >= (int)1000;
	if(var_945_bool != 0) {
		var_939_bool = 1;
		return 2;
	}
	var_939_bool = 0;
	return 2;
}


func_3182(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_5232(var_951_bool, var_952_object)
{
	var_953_float = 0; var_954_float = 0;
	@@var_952_object:GetProperty("money", var_954_float);
	var_957_bool = var_954_float >= (int)2000;
	if(var_957_bool != 0) {
		var_951_bool = 1;
		return 2;
	}
	var_951_bool = 0;
	return 2;
}


func_5746(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	var_23_bool = 0;
	var_23_bool = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_20_object = var_25_object;
	func_5980(var_25_object);
	if(var_24_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_20_object = var_27_object;
		func_4352(var_26_bool, var_27_object);
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


func_4723(var_78_object)
{
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0);
	@@var_78_object:GetEyesHeight(var_81_float);
	var_82_cvector = CVector(0.0, 0.0, 0.0);
	var_83_float = GetByIndex(var_82_cvector, 1);
	var_81_float = var_83_float;
	SetByIndex(var_82_cvector, 1) = var_83_float;
	LookAsync(var_78_object, "head", var_82_cvector);
	return 4;
}


func_3189(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_2679(var_20_object)
{
	EventDisable(0);
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_2712(var_21_object);
	var_101_object = Obj();
	var_20_object = var_101_object;
	func_6161(var_101_object);
	EventEnable(0);
	
Label_2690:
	Hold();
	goto Label_2690;
}
EMIT "Return(); Pop(0)";


func_5243(var_963_bool, var_964_object)
{
	var_965_float = 0; var_966_float = 0;
	@@var_964_object:GetProperty("money", var_966_float);
	var_969_bool = var_966_float >= (int)3000;
	if(var_969_bool != 0) {
		var_963_bool = 1;
		return 2;
	}
	var_963_bool = 0;
	return 2;
}


func_3196(var_49_bool)
{
	var_49_bool = 0;
	return 0;
}


func_4734()
{
	var_21_bool = 0;
	func_6026(var_21_bool);
	if(var_21_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3198(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindShiftedPathTo(var_46_object, var_44_cvector);
	var_46_object = var_43_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4741(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	IsExisting3DSound(var_53_bool, var_44_string);
	var_61_bool = var_53_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_54_int = 0;

	Label_4747:
		var_63_int = var_54_int + (int)1;
		var_64_int = var_44_string + var_63_int;
		IsExisting3DSound(var_55_bool, var_64_int);
		var_65_bool = var_55_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_54_int = var_54_int + (int)1;
			goto Label_4747;
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


func_5254(var_975_bool, var_976_object)
{
	var_977_float = 0; var_978_float = 0;
	@@var_976_object:GetProperty("money", var_978_float);
	var_981_bool = var_978_float >= (int)4000;
	if(var_981_bool != 0) {
		var_975_bool = 1;
		return 2;
	}
	var_975_bool = 0;
	return 2;
}


func_5769(var_33_object)
{
	var_33_object = Obj();
	func_5983();
	return 0;
}


func_5775(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_4352(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_object = Obj();
		func_4782(var_26_object);
		ReportReputationChange(var_21_object, var_26_object, (float)-0.019999999552965164);
	}
	return 0;
}


func_5265(var_156_bool)
{
	var_158_int = 0;
	func_4934(var_158_int);
	var_156_bool = var_158_int <= (int)6;
	return 0;
}


func_3729(var_73_object)
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
	func_3794(var_75_cvector, var_76_bool, var_73_object, var_83_object);
	return 0;
}


func_2712(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = var_21_object == 0; //@ne
	if(var_42_bool != 0) {
		var_43_string = "";
		func_2803("fdie");
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
		func_4741(var_96_string);
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


func_5272(var_294_bool)
{
	var_296_int = 0;
	func_4934(var_296_int);
	var_294_bool = var_296_int == (int)1;
	return 0;
}


func_5119(var_351_bool, var_352_object)
{
	var_353_bool = 0; var_354_object = Obj();
	var_352_object = var_354_object;
	func_5300(var_354_object);
	if(var_353_bool != 0) {
		var_351_bool = 1;
		return 0;
	}
	var_351_bool = 0;
	return 0;
}


func_5788(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_string == "heal";
	if(var_24_bool != 0) {
		FindActor(var_22_object, "player");
		var_26_bool = 0; var_27_object = Obj();
		var_22_object = var_27_object;
		func_6013(var_27_object);
		var_26_bool = var_19_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = 0;
	return 2;
}


func_5279(var_322_bool)
{
	var_324_int = 0;
	func_4934(var_324_int);
	var_322_bool = var_324_int == (int)2;
	return 0;
}


func_5286(var_310_bool)
{
	var_312_int = 0;
	func_4934(var_312_int);
	var_310_bool = var_312_int == (int)3;
	return 0;
}


func_5804(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj();
	var_34_bool = var_30_string == "heal";
	if(var_34_bool != 0) {
		FindActor(var_32_object, "player");
		var_32_object = Obj();
		func_6016();
		var_32_object = 0;
	}
	return 2;
}


func_5293(var_344_bool)
{
	var_346_int = 0;
	func_4934(var_346_int);
	var_344_bool = var_346_int == (int)4;
	return 0;
}


func_4782(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj();
	self(var_108_object);
	var_108_object = var_106_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4788(var_50_cvector, var_51_cvector)
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


func_3764(var_0_object, var_32_cvector, var_33_float)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_float = 0;
	GetPosition(var_40_cvector);
	@@@var_0_object:GetPosition(var_41_cvector);
	GetDirection(var_42_cvector);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_49_cvector = var_40_cvector - var_41_cvector;
	func_4788(var_48_cvector, var_49_cvector);
	var_56_float = var_42_cvector * (float)0.75;
	var_47_cvector = var_48_cvector + var_56_float;
	func_4788(var_46_cvector, var_47_cvector);
	var_46_cvector = var_43_cvector;
	FindLongestDir(var_44_cvector, var_45_float, var_43_cvector, var_33_float, (int)32, (float)7000.0);
	var_45_float = var_45_float - (int)100;
	var_61_bool = var_45_float < (int)0;
	if(var_61_bool != 0) {
		var_45_float = 0;
	}
	var_32_cvector = var_44_cvector * var_45_float;
	return 12;
}


func_5300(var_353_bool)
{
	var_355_int = 0;
	func_4934(var_355_int);
	var_353_bool = var_355_int == (int)5;
	return 0;
}


func_5817(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = "";
	var_77_int = var_74_int;
	if(var_77_int != 0) {
		"idle" = "idle" + var_74_int;
	}
	var_76_string = var_73_string;
	return 2;
}


func_5307(var_365_bool)
{
	var_367_int = 0;
	func_4934(var_367_int);
	var_365_bool = var_367_int == (int)6;
	return 0;
}


func_4798(var_464_float, var_465_float, var_466_float, var_467_float)
{
	var_468_bool = var_465_float < var_466_float;
	if(var_468_bool != 0) {
		var_466_float = var_464_float;
		return 0;
	}
	var_469_bool = var_465_float > var_467_float;
	if(var_469_bool != 0) {
		var_467_float = var_464_float;
		return 0;
	}
	var_465_float = var_464_float;
	return 0;
}


func_5824(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0;
	var_70_int = 0;
	
Label_5826:
	var_73_string = ""; var_74_int = 0;
	var_70_int = var_74_int;
	func_5817(var_73_string, var_74_int);
	HasAnimation(var_71_bool, "all", var_73_string);
	var_78_bool = var_71_bool == 0; //@nz
	if(var_78_bool != 0) {
	} else {
		var_70_int = var_70_int + (int)1;
		goto Label_5826;
	}
	var_70_int = var_67_int;
	return 4;
	
}


func_5314(var_172_bool)
{
	var_174_int = 0;
	func_4934(var_174_int);
	var_172_bool = var_174_int == (int)7;
	return 0;
}


func_4809(var_81_float, var_82_cvector, var_83_cvector)
{
	var_84_int = var_82_cvector | var_83_cvector;
	var_85_int = var_82_cvector | var_82_cvector;
	var_86_int = var_83_cvector | var_83_cvector;
	var_87_float = var_85_int * var_86_int;
	var_88_float = sqrt(var_87_float);
	var_81_float = var_84_int / var_88_float;
	return 0;
}


func_5321(var_178_bool)
{
	var_180_int = 0;
	func_4934(var_180_int);
	var_178_bool = var_180_int == (int)8;
	return 0;
}


func_4300(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_5328(var_184_bool)
{
	var_186_int = 0;
	func_4934(var_186_int);
	var_184_bool = var_186_int == (int)9;
	return 0;
}


func_5841(var_61_int)
{
	var_63_bool = 0;
	func_6150(var_63_bool);
	if(var_63_bool != 0) {
		var_61_int = 2;
	} else {
		var_61_int = 0;
	}
	return 0;
	
}


func_3794(var_0_object, var_1_object, var_2_object, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0;
	var_0_object = var_83_object;
	var_94_cvector = CVector(0,0,0); var_95_float = 0;
	func_3764(var_93_float, var_94_cvector, (float)1.7453293800354004);
	var_94_cvector = var_89_cvector;
	var_90_float = var_89_cvector | var_89_cvector;
	var_125_bool = var_90_float < (float)2500.0;
	if(var_125_bool != 0) {
		var_126_cvector = CVector(0,0,0); var_127_float = 0;
		func_3764(var_93_float, var_126_cvector, (float)2.6179938316345215);
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
	func_4332(var_136_cvector);
	var_1_object = var_136_cvector + var_89_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_3836:
	MovePoint(var_1_object, (int)1, var_91_bool);
	var_142_bool = var_91_bool;
	if(var_142_bool != 0) {
		var_143_bool = var_0_object == 0; //@ne
		if(var_143_bool != 0) {
			goto Label_3866;
		EMIT "GOTO 0xf18";

		Label_3866:
			return 10;
		}
		var_144_cvector = CVector(0,0,0); var_145_float = 0;
		func_3764(var_93_float, var_144_cvector, (float)2.6179938316345215);
		var_144_cvector = var_92_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		var_147_bool = var_93_float >= (float)2500.0;
		if(var_147_bool != 0) {
			var_148_cvector = CVector(0,0,0);
			func_4332(var_148_cvector);
			var_1_object = var_148_cvector + var_92_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_3866;
		}
	}
	var_151_bool = var_2_object == 0; //@nz
	if(var_151_bool == 1) goto Label_3836;
	
}


func_4817(var_71_float, var_72_cvector, var_73_cvector)
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


func_5335(var_195_bool)
{
	var_197_int = 0;
	func_4934(var_197_int);
	var_195_bool = var_197_int == (int)10;
	return 0;
}


func_5850(var_69_object)
{
	var_70_object = Obj();
	var_69_object = var_70_object;
	TaskCall(5);
	func_3454(var_71_object, var_70_object);
	TaskReturn();
	return 0;
}


func_4826(var_80_float, var_81_cvector)
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


func_4316(var_0_object, var_70_bool)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	GetDirection(var_73_cvector);
	var_75_cvector = CVector(0,0,0); var_76_object = Obj();
	var_76_object = var_0_object;
	func_4337(var_75_cvector, var_76_object);
	var_75_cvector = var_74_cvector;
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	var_73_cvector = var_82_cvector;
	var_74_cvector = var_83_cvector;
	func_4809(var_81_float, var_82_cvector, var_83_cvector);
	var_70_bool = var_81_float >= (float)-0.3420201241970062;
	return 4;
}


func_5342(var_201_bool)
{
	var_203_int = 0;
	func_4934(var_203_int);
	var_201_bool = var_203_int == (int)11;
	return 0;
}


func_5858(var_30_int, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_4439(var_32_bool, var_33_object);
	if(var_32_bool != 0) {
		var_30_int = 2;
	} else {
		var_30_int = 0;
	}
	return 0;
	
}


func_4836(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_69_cvector = var_72_cvector;
	var_70_cvector = var_73_cvector;
	func_4817(var_71_float, var_72_cvector, var_73_cvector);
	var_80_float = 0; var_81_cvector = CVector(0,0,0);
	var_69_cvector = var_81_cvector;
	func_4826(var_80_float, var_81_cvector);
	var_89_float = 0; var_90_cvector = CVector(0,0,0);
	var_70_cvector = var_90_cvector;
	func_4826(var_89_float, var_90_cvector);
	var_91_float = var_80_float * var_89_float;
	var_68_float = var_71_float / var_91_float;
	return 0;
}


func_5349(var_207_bool)
{
	var_209_int = 0;
	func_4934(var_209_int);
	var_207_bool = var_209_int == (int)12;
	return 0;
}


func_5356(var_112_int)
{
	var_113_int = 0; var_114_int = 0;
	GetVariable("branch", var_114_int);
	var_117_bool = var_114_int == (int)0;
	if(var_117_bool != 0) {
		var_112_int = 1;
		return 2;
	EMIT "GOTO 0x14fb";
	}
	var_119_bool = var_114_int == (int)1;
	if(var_119_bool != 0) {
		var_112_int = 2;
		return 2;
	}
	var_112_int = 3;
	return 2;
}


func_5868(var_72_object)
{
	var_73_object = Obj();
	var_72_object = var_73_object;
	TaskCall(6);
	func_3729(var_73_object);
	TaskReturn();
	return 0;
}


func_4332(var_90_cvector)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	GetPosition(var_92_cvector);
	var_92_cvector = var_90_cvector;
	return 2;
}


func_4337(var_52_cvector, var_53_object)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_53_object:GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
	return 4;
}


func_2803(var_43_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_44_string = "";
	var_43_string = var_44_string;
	func_4741(var_44_string);
	PlayAnimation("all", var_43_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_43_string);
	RemoveEnvelope();
	return 0;
}


func_5876(var_70_int, var_71_object)
{
	var_73_bool = 0; var_74_object = Obj();
	var_71_object = var_74_object;
	func_4439(var_73_bool, var_74_object);
	if(var_73_bool != 0) {
		var_70_int = 2;
	} else {
		var_70_int = 0;
	}
	return 0;
	
}


func_4853(var_130_int, var_131_string)
{
	var_132_int = 0; var_133_int = 0;
	GetVariable(var_131_string, var_133_int);
	var_133_int = var_130_int;
	return 2;
}


func_4344(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_4858(var_486_int, var_487_int)
{
	var_488_object = Obj(); var_489_object = Obj();
	CreateIntVector(var_489_object);
	@@var_489_object:add(var_486_int);
	@@var_489_object:add(var_487_int);
	SendWorldWndMessage((int)3, var_489_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5373(var_225_int)
{
	var_226_int = 0; var_227_int = 0;
	GetVariable("branch", var_227_int);
	var_227_int = var_225_int;
	return 2;
}


func_5886(var_107_object)
{
	var_108_object = Obj();
	var_107_object = var_108_object;
	TaskCall(7);
	func_3981(var_109_object, var_110_cvector, var_111_bool, var_108_object);
	TaskReturn();
	return 0;
}


func_4352(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0;
	IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
	return 2;
}


func_5379(var_41_object)
{
	var_42_int = 0;
	func_5373(var_42_int);
	var_47_bool = var_42_int == (int)1;
	if(var_47_bool != 0) {
		WorkWithCorpse(var_41_object);
	} else {
		Barter(var_41_object);
	}
	return 0;
	
}


func_4357(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0;
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", (int)2);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	@@var_48_object:HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
	return 2;
}


func_4870(var_473_object, var_474_int)
{
	var_475_int = 0; var_476_int = 0;
	var_477_object = Obj(); var_478_string = ""; var_479_int = 0;
	var_473_object = var_477_object;
	var_474_int = var_479_int;
	func_4391(var_477_object, "money", var_479_int);
	var_484_bool = var_474_int > (int)0;
	if(var_484_bool != 0) {
		GetInvItemByName(var_476_int, "Money");
		var_486_int = 0; var_487_int = 0;
		var_476_int = var_486_int;
		var_474_int = var_487_int;
		func_4858(var_486_int, var_487_int);
	}
	return 2;
}


func_5894(var_27_bool, var_28_object, var_29_object, var_30_float)
{
	var_31_string = ""; var_32_bool = 0; var_33_string = ""; var_34_bool = 0;
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_29_object = var_36_object;
	func_4357(var_35_bool, var_36_object, "class");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	@@var_29_object:GetProperty("class", var_33_string);
	var_47_bool = var_33_string == "rat";
	if(var_47_bool != 0) {
		var_27_bool = 0;
		return 4;
	EMIT "GOTO 0x1724";
	}
	var_49_bool = var_33_string == "rat_big";
	if(var_49_bool != 0) {
		var_27_bool = 0;
		return 4;
	EMIT "GOTO 0x1724";
	}
	var_51_bool = var_33_string == "dog";
	if(var_51_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	CanSee(var_34_bool, var_28_object);
	var_52_bool = 0;
	var_52_bool = 1;
	var_53_bool = var_34_bool;
	if(var_53_bool != 1) {
		var_54_float = 0; var_55_object = Obj();
		var_28_object = var_55_object;
		func_4344(var_54_float, var_55_object);
		var_62_float = var_30_float * var_30_float;
		var_63_bool = var_54_float <= var_62_float;
		if(var_63_bool != 1) {
			var_52_bool = 0;
		}
	}
	if(var_52_bool != 0) {
		var_27_bool = 1;
		return 4;
	}
	CanSee(var_34_bool, var_29_object);
	var_64_bool = 0;
	var_64_bool = 1;
	var_65_bool = var_34_bool;
	if(var_65_bool != 1) {
		var_66_float = 0; var_67_object = Obj();
		var_29_object = var_67_object;
		func_4344(var_66_float, var_67_object);
		var_68_float = var_30_float * var_30_float;
		var_69_bool = var_66_float <= var_68_float;
		if(var_69_bool != 1) {
			var_64_bool = 0;
		}
	}
	if(var_64_bool != 0) {
		var_27_bool = 1;
		return 4;
	}
	var_27_bool = 0;
	return 4;
}


func_5392(var_117_int, var_118_int)
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
		if(var_144_bool == 0) goto Label_5410;
		return 4;
	}
Label_5410:
	var_130_int = var_130_int + var_117_int;
	var_137_bool = var_130_int == (int)0;
	if(var_137_bool != 0) {
		return 4;
	}
	var_138_int = 0; var_139_string = "";
	func_5639(var_138_int, "Money");
	AddItem(var_131_bool, var_138_int, (int)0, var_130_int);
	return 4;
	
}


func_4369(var_446_bool, var_447_object, var_448_string, var_449_float, var_450_float, var_451_float)
{
	var_452_float = 0; var_453_float = 0;
	var_454_bool = 0; var_455_object = Obj(); var_456_string = "";
	var_447_object = var_455_object;
	var_448_string = var_456_string;
	func_4357(var_454_bool, var_455_object, var_456_string);
	var_463_bool = var_454_bool == 0; //@nz
	if(var_463_bool != 0) {
		var_446_bool = 0;
		return 2;
	}
	@@var_447_object:GetProperty(var_448_string, var_453_float);
	var_464_float = 0; var_465_float = 0; var_466_float = 0; var_467_float = 0;
	var_465_float = var_453_float + var_449_float;
	var_450_float = var_466_float;
	var_451_float = var_467_float;
	func_4798(var_464_float, var_465_float, var_466_float, var_467_float);
	@@var_447_object:SetProperty(var_448_string, var_464_float);
	var_446_bool = 1;
	return 2;
}


func_4889(var_435_bool, var_436_object, var_437_float)
{
	var_438_bool = var_436_object == 0; //@nz
	if(var_438_bool != 0) {
		var_435_bool = 0;
		return 0;
	}
	var_440_bool = var_437_float > (int)0;
	if(var_440_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_471_bool = var_437_float < (int)0;
		if(var_471_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_4910;
		}
		var_435_bool = 0;
		return 0;
	}
Label_4910:
	var_442_float = 0;
	var_437_float = var_442_float;
	func_4924(var_442_float);
	var_446_bool = 0; var_447_object = Obj(); var_448_string = ""; var_449_float = 0; var_450_float = 0; var_451_float = 0;
	var_436_object = var_447_object;
	var_437_float = var_449_float;
	func_4369(var_446_bool, var_447_object, "reputation", var_449_float, (float)0, (float)1);
	var_435_bool = 1;
	return 0;
	
}


func_2850()
{
	var_20_bool = 0;
	func_4600(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		func_5979();
	}
	return 0;
}


func_4391(var_477_object, var_478_string, var_479_int)
{
	var_480_int = 0; var_481_int = 0;
	@@var_477_object:GetProperty(var_478_string, var_481_int);
	var_482_int = var_481_int + var_479_int;
	@@var_477_object:SetProperty(var_478_string, var_482_int);
	return 2;
}


func_3368()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0;
	WaitForAnimEnd();
	var_65_bool = 0;
	func_4600(var_65_bool);
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		return 14;
	}
	func_5824((int)0);
	var_67_int = var_58_int;
	var_59_int = 0;
	
Label_3382:
	var_80_bool = 0;
	var_80_bool = 0;
	var_82_bool = var_59_int < (int)5;
	if(var_82_bool != 0) {
		var_83_bool = 0;
		func_4600(var_83_bool);
		if(var_83_bool != 0) {
			var_80_bool = 1;
		}
	}
	if(var_80_bool != 0) {
		irand(var_60_int, (int)3);
		var_86_bool = var_60_int == (int)0;
		if(var_86_bool != 0) {
			var_87_int = var_58_int;
			if(var_87_int == 0) goto Label_3415;
			irand(var_61_int, var_58_int);
			var_89_string = ""; var_90_int = 0;
			var_61_int = var_90_int;
			func_5817(var_89_string, var_90_int);
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
						goto Label_3444;
					}
					goto Label_3433;
				}
				var_101_int = var_59_int;
				if(var_101_int == 0) goto Label_3433;
				goto Label_3444;
		}
		Label_3433:
			var_92_bool = 0;
			func_3447(var_92_bool);
			var_93_bool = var_92_bool == 0; //@nz
			if(var_93_bool != 0) {
				goto Label_3444;
			}
			ResetAAS();
			var_59_int = var_59_int + (int)1;
			goto Label_3382;

		}
	}
Label_3444:
	ResetAAS();
	return 14;
	
}


func_4398(var_40_bool, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	@@var_41_object:IsDead(var_43_bool);
	var_43_bool = var_40_bool;
	return 2;
}


func_5423(var_231_string)
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


func_4403(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	var_35_bool = var_30_object == 0; //@ne
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_bool = 0;
	var_36_bool = 0;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", (int)1);
	if(var_39_bool != 0) {
		var_40_bool = 0; var_41_object = Obj();
		var_30_object = var_41_object;
		func_4398(var_40_bool, var_41_object);
		if(var_40_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	GetScene(var_33_object);
	var_44_bool = var_33_object == 0; //@ne
	if(var_44_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	@@var_30_object:GetScene(var_34_object);
	var_45_bool = var_33_object != var_34_object;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_29_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4924(var_442_float)
{
	var_443_object = Obj(); var_444_object = Obj();
	CreateFloatVector(var_444_object);
	@@var_444_object:add(var_442_float);
	SendWorldWndMessage((int)16, var_444_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5440()
{
	var_225_int = 0;
	func_5373(var_225_int);
	var_230_bool = var_225_int != (int)1;
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_string = "";
	func_5423("liver");
	var_242_string = "";
	func_5423("kidney");
	var_243_string = "";
	func_5423("heart");
	var_244_string = "";
	func_5423("blood");
	return 0;
}


func_4934(var_120_int)
{
	var_121_float = 0; var_122_float = 0;
	GetGameTime(var_122_float);
	var_124_int = 0;
	var_124_int = var_122_float / (int)24;
	var_120_int = (int)1 + var_124_int;
	return 2;
}


func_5960(var_21_int)
{
	var_21_int = 0;
	return 0;
}


func_5963()
{
	return 0;
}


func_5965(var_135_int)
{
	var_135_int = 0;
	return 0;
}


func_4943(var_25_object)
{
	@@var_25_object:SetReturnValue((int)100);
	return 0;
}


func_5968()
{
	return 0;
}


func_3919(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_5970(var_21_int)
{
	var_21_int = 2;
	return 0;
}


func_4948(var_30_object)
{
	@@var_30_object:SetReturnValue((int)500);
	return 0;
}


func_5973(var_29_object)
{
	var_30_object = Obj();
	var_29_object = var_30_object;
	func_6032(var_29_object, var_30_object);
	return 0;
}


func_4439(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_4403(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_4357(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_5464(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0;
	var_116_bool = var_111_bool;
	if(var_116_bool != 0) {
		var_117_int = 0; var_118_int = 0;
		var_120_int = 0;
		func_4934(var_120_int);
		var_127_float = var_120_int * (int)100;
		var_118_int = (int)100 + var_127_float;
		func_5392((int)0, var_118_int);
		irand(var_114_int, (int)8);
		var_147_bool = var_114_int == (int)0;
		if(var_147_bool != 0) {
			var_148_int = 0; var_149_string = "";
			func_5639(var_148_int, "lemon");
			AddItem(var_115_bool, var_148_int, (int)0, (int)1);
		} else {
			var_153_bool = var_114_int == (int)1;
			if(var_153_bool != 0) {
				var_154_int = 0; var_155_string = "";
				func_5639(var_154_int, "rusk");
				AddItem(var_115_bool, var_154_int, (int)0, (int)1);
				goto Label_5552;
			}
			var_159_bool = var_114_int == (int)2;
			if(var_159_bool != 0) {
				var_160_int = 0; var_161_string = "";
				func_5639(var_160_int, "hook");
				AddItem(var_115_bool, var_160_int, (int)0, (int)1);
				goto Label_5552;
			}
			var_165_bool = var_114_int == (int)4;
			if(var_165_bool != 0) {
				var_166_int = 0; var_167_string = "";
				func_5639(var_166_int, "syringe");
				AddItem(var_115_bool, var_166_int, (int)0, (int)1);
				goto Label_5552;
			}
			var_171_bool = var_114_int == (int)5;
			if(var_171_bool != 0) {
				var_172_int = 0; var_173_string = "";
				func_5639(var_172_int, "watch");
				AddItem(var_115_bool, var_172_int, (int)0, (int)1);
				goto Label_5552;
			}
			var_177_bool = var_114_int == (int)6;
			if(var_177_bool == 0) goto Label_5552;
			var_178_int = 0; var_179_string = "";
			func_5639(var_178_int, "razor");
			AddItem(var_115_bool, var_178_int, (int)0, (int)1);
	}
		var_182_int = 0; var_183_int = 0;
		var_185_int = 0;
		func_4934(var_185_int);
		var_187_float = var_185_int * (int)50;
		var_183_int = (int)50 + var_187_float;
		func_5392((int)0, var_183_int);
		irand(var_114_int, (int)7);
		var_190_bool = var_114_int == (int)0;
		if(var_190_bool != 0) {
			var_191_int = 0; var_192_string = "";
			func_5639(var_191_int, "beads");
			AddItem(var_115_bool, var_191_int, (int)0, (int)1);
			goto Label_5638;
		}
		var_196_bool = var_114_int == (int)1;
		if(var_196_bool != 0) {
			var_197_int = 0; var_198_string = "";
			func_5639(var_197_int, "bracelet");
			AddItem(var_115_bool, var_197_int, (int)0, (int)1);
			goto Label_5638;
		}
		var_202_bool = var_114_int == (int)2;
		if(var_202_bool != 0) {
			var_203_int = 0; var_204_string = "";
			func_5639(var_203_int, "ear_ring");
			AddItem(var_115_bool, var_203_int, (int)0, (int)1);
			goto Label_5638;
		}
		var_208_bool = var_114_int == (int)3;
		if(var_208_bool != 0) {
			var_209_int = 0; var_210_string = "";
			func_5639(var_209_int, "gold_ring");
			AddItem(var_115_bool, var_209_int, (int)0, (int)1);
			goto Label_5638;
		}
		var_214_bool = var_114_int == (int)4;
		if(var_214_bool != 0) {
			var_215_int = 0; var_216_string = "";
			func_5639(var_215_int, "silver_ring");
			AddItem(var_115_bool, var_215_int, (int)0, (int)1);
			goto Label_5638;
		}
		var_220_bool = var_114_int == (int)5;
		if(var_220_bool == 0) goto Label_5638;
		var_221_int = 0; var_222_string = "";
		func_5639(var_221_int, "flower");
		AddItem(var_115_bool, var_221_int, (int)0, (int)1);
	}
Label_5552:
	goto Label_5638;
	
Label_5638:
	return 4;
	
}


func_4953(var_35_object)
{
	@@var_35_object:SetReturnValue((int)1000);
	return 0;
}


func_5979()
{
	return 0;
}


func_5980(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_4958(var_40_object)
{
	@@var_40_object:SetReturnValue((int)2000);
	return 0;
}


func_3935(var_0_object, var_70_bool)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	GetDirection(var_73_cvector);
	var_75_cvector = CVector(0,0,0); var_76_object = Obj();
	var_76_object = var_0_object;
	func_4337(var_75_cvector, var_76_object);
	var_75_cvector = var_74_cvector;
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	var_73_cvector = var_82_cvector;
	var_74_cvector = var_83_cvector;
	func_4809(var_81_float, var_82_cvector, var_83_cvector);
	var_70_bool = var_81_float >= (float)-0.3420201241970062;
	return 4;
}


func_5983()
{
	return 0;
}


func_5985(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	CanSee(var_34_bool, var_32_object);
	var_31_bool = 1;
	var_35_bool = var_34_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_4344(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (int)4000000;
		if(var_45_bool != 1) {
			var_31_bool = 0;
		}
	}
	return 2;
}


func_4963(var_45_object)
{
	@@var_45_object:SetReturnValue((int)3000);
	return 0;
}


func_4968(var_50_object)
{
	@@var_50_object:SetReturnValue((int)4000);
	return 0;
}


func_4973(var_302_bool)
{
	var_304_int = 0; var_305_string = "";
	func_4853(var_304_int, "branch");
	var_307_bool = var_304_int == (int)0;
	if(var_307_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_3951(var_0_object, var_32_cvector, var_33_float)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_float = 0;
	GetPosition(var_40_cvector);
	@@@var_0_object:GetPosition(var_41_cvector);
	GetDirection(var_42_cvector);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_49_cvector = var_40_cvector - var_41_cvector;
	func_4788(var_48_cvector, var_49_cvector);
	var_56_float = var_42_cvector * (float)0.75;
	var_47_cvector = var_48_cvector + var_56_float;
	func_4788(var_46_cvector, var_47_cvector);
	var_46_cvector = var_43_cvector;
	FindLongestDir(var_44_cvector, var_45_float, var_43_cvector, var_33_float, (int)32, (float)7000.0);
	var_45_float = var_45_float - (int)100;
	var_61_bool = var_45_float < (int)0;
	if(var_61_bool != 0) {
		var_45_float = 0;
	}
	var_32_cvector = var_44_cvector * var_45_float;
	return 12;
}


func_4463(var_35_object)
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


func_6000(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	TaskCall(8);
	func_4175(var_61_object, var_62_cvector, var_63_bool, var_60_object);
	TaskReturn();
	return 0;
}


func_3447(var_92_bool)
{
	var_92_bool = 1;
	return 0;
}


func_6008(var_48_bool)
{
	var_48_bool = 0;
	return 0;
}


func_4985(var_407_bool)
{
	var_409_int = 0; var_410_string = "";
	func_4853(var_409_int, "branch");
	var_412_bool = var_409_int == (int)1;
	if(var_412_bool != 0) {
		var_407_bool = 1;
		return 0;
	}
	var_407_bool = 0;
	return 0;
}


func_3449()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6011()
{
	return 0;
}


func_6013(var_26_bool)
{
	var_26_bool = 0;
	return 0;
}


func_3454(var_0_object, var_70_object)
{
	var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0;
	var_0_object = var_70_object;
	func_3505(var_77_bool);
	GetDirection(var_75_cvector);
	var_85_cvector = CVector(0,0,0); var_86_object = Obj();
	var_86_object = var_0_object;
	func_4337(var_85_cvector, var_86_object);
	var_85_cvector = var_76_cvector;
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
	var_75_cvector = var_92_cvector;
	var_76_cvector = var_93_cvector;
	func_4836(var_91_float, var_92_cvector, var_93_cvector);
	var_116_bool = var_91_float < (int)0;
	if(var_116_bool != 0) {
		var_117_object = Obj();
		var_117_object = var_0_object;
		func_4589(var_117_object);
		var_77_bool = 1;
	} else {
		Sleep((float)1.5, var_77_bool);
	}
	var_126_bool = var_77_bool;
	if(var_126_bool != 0) {
		var_127_object = Obj();
		var_127_object = var_0_object;
		func_4589(var_127_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_6016()
{
	return 0;
}


func_6018(var_109_int)
{
	var_109_int = 515563;
	return 0;
}


func_6020(var_108_int)
{
	var_108_int = 503348;
	return 0;
}


func_4997(var_128_bool)
{
	var_130_int = 0; var_131_string = "";
	func_4853(var_130_int, "branch");
	var_135_bool = var_130_int == (int)2;
	if(var_135_bool != 0) {
		var_128_bool = 1;
		return 0;
	}
	var_128_bool = 0;
	return 0;
}


func_6022(var_110_string)
{
	var_110_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_6024(var_111_string)
{
	var_111_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_6026(var_103_bool)
{
	var_103_bool = 0;
	return 0;
}


func_6028()
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_3981(var_0_object, var_1_object, var_2_object, var_108_object)
{
	var_112_cvector = CVector(0,0,0); var_113_float = 0; var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_float = 0; var_119_bool = 0; var_120_cvector = CVector(0,0,0); var_121_float = 0;
	var_0_object = var_108_object;
	var_122_cvector = CVector(0,0,0); var_123_float = 0;
	func_3951(var_121_float, var_122_cvector, (float)1.7453293800354004);
	var_122_cvector = var_117_cvector;
	var_118_float = var_117_cvector | var_117_cvector;
	var_153_bool = var_118_float < (float)2500.0;
	if(var_153_bool != 0) {
		var_154_cvector = CVector(0,0,0); var_155_float = 0;
		func_3951(var_121_float, var_154_cvector, (float)2.6179938316345215);
		var_154_cvector = var_117_cvector;
		var_118_float = var_117_cvector | var_117_cvector;
		var_157_bool = var_118_float < (float)2500.0;
		if(var_157_bool != 0) {
			var_159_float = sqrt(var_118_float);
			var_160_int = "Can't retreat, distance: " + var_159_float;
			Trace(var_160_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_162_float = GetByIndex(var_117_cvector, 0);
	var_163_float = GetByIndex(var_117_cvector, 2);
	Rotate(var_162_float, var_163_float);
	var_164_cvector = CVector(0,0,0);
	func_4332(var_164_cvector);
	var_1_object = var_164_cvector + var_117_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_4023:
	MovePoint(var_1_object, (int)1, var_119_bool);
	var_170_bool = var_119_bool;
	if(var_170_bool != 0) {
		var_171_bool = var_0_object == 0; //@ne
		if(var_171_bool != 0) {
			goto Label_4053;
		EMIT "GOTO 0xfd3";

		Label_4053:
			return 10;
		}
		var_172_cvector = CVector(0,0,0); var_173_float = 0;
		func_3951(var_121_float, var_172_cvector, (float)2.6179938316345215);
		var_172_cvector = var_120_cvector;
		var_121_float = var_120_cvector | var_120_cvector;
		var_175_bool = var_121_float >= (float)2500.0;
		if(var_175_bool != 0) {
			var_176_cvector = CVector(0,0,0);
			func_4332(var_176_cvector);
			var_1_object = var_176_cvector + var_120_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_4053;
		}
	}
	var_179_bool = var_2_object == 0; //@nz
	if(var_179_bool == 1) goto Label_4023;
	
}


func_6032(var_30_object, var_51_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_float = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_float = 0; var_38_int = 0;
	var_39_bool = GlobalVars[0];
	if(var_39_bool != 0) {
		IsOverrideActive(var_35_bool);
		var_40_bool = var_35_bool == 0; //@nz
		if(var_40_bool != 0) {
			var_41_object = Obj();
			var_30_object = var_41_object;
			func_5379(var_41_object);
		}
		return 8;
	EMIT "GOTO 0x1805";
	}
	var_48_bool = GlobalVars[1];
	if(var_48_bool != 0) {
		return 8;
	}
	var_49_int = 0; var_50_object = Obj();
	var_30_object = var_50_object;
	TaskCall(0);
	func_0(var_51_object, var_49_int, var_50_object);
	TaskReturn();
	var_51_object = var_36_int;
	var_428_bool = var_36_int == (int)-1;
	if(var_428_bool != 0) {
		return 8;
	}
	var_429_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	var_37_float = var_36_int / (float)10000.0;
	func_4934((int)0);
	var_431_int = var_38_int;
	var_433_bool = var_38_int == (int)1;
	if(var_433_bool != 0) {
		var_37_float = var_37_float * (float)3.3333332538604736;
	} else {
		var_492_bool = var_38_int == (int)2;
		if(var_492_bool != 0) {
			var_37_float = var_37_float * (float)0.3333333432674408;
			goto Label_6139;
		}
		var_495_bool = var_38_int == (int)3;
		if(var_495_bool != 0) {
			var_37_float = var_37_float * (float)0.6666666865348816;
			goto Label_6139;
		}
		var_498_bool = var_38_int == (int)4;
		if(var_498_bool != 0) {
			var_37_float = var_37_float * (float)1.25;
			goto Label_6139;
		}
		var_501_bool = var_38_int == (int)5;
		if(var_501_bool != 0) {
			var_37_float = var_37_float * (float)0.8333333134651184;
			goto Label_6139;
		}
		var_504_bool = var_38_int == (int)6;
		if(var_504_bool != 0) {
			var_37_float = var_37_float * (float)0.5;
			goto Label_6139;
		}
		var_507_bool = var_38_int == (int)7;
		if(var_507_bool != 0) {
			var_37_float = var_37_float * (float)1.0;
			goto Label_6139;
		}
		var_510_bool = var_38_int == (int)8;
		if(var_510_bool != 0) {
			var_37_float = var_37_float * (float)0.8333333134651184;
			goto Label_6139;
		}
		var_513_bool = var_38_int == (int)9;
		if(var_513_bool != 0) {
			var_37_float = var_37_float * (float)0.3333333432674408;
			goto Label_6139;
		}
		var_516_bool = var_38_int == (int)10;
		if(var_516_bool != 0) {
			var_37_float = var_37_float * (float)0.37037035822868347;
			goto Label_6139;
		}
		var_519_bool = var_38_int == (int)11;
		if(var_519_bool != 0) {
			var_37_float = var_37_float * (float)0.4166666567325592;
			goto Label_6139;
		}
		var_522_bool = var_38_int == (int)12;
		if(var_522_bool == 0) goto Label_6139;
		var_37_float = var_37_float * (float)0.5;
	}
Label_6139:
	var_435_bool = 0; var_436_object = Obj(); var_437_float = 0;
	var_30_object = var_436_object;
	var_37_float = var_437_float;
	func_4889(var_435_bool, var_436_object, var_437_float);
	var_473_object = Obj(); var_474_int = 0;
	var_30_object = var_473_object;
	var_474_int = -var_36_int;
	func_4870(var_473_object, var_474_int);
	return 8;
	
}


func_5009(var_913_bool, var_914_object)
{
	var_915_bool = 0; var_916_object = Obj();
	var_914_object = var_916_object;
	func_5199(var_915_bool, var_916_object);
	if(var_915_bool != 0) {
		var_913_bool = 1;
		return 0;
	}
	var_913_bool = 0;
	return 0;
}


func_5019(var_925_bool, var_926_object)
{
	var_927_bool = 0; var_928_object = Obj();
	var_926_object = var_928_object;
	func_5210(var_927_bool, var_928_object);
	if(var_927_bool != 0) {
		var_925_bool = 1;
		return 0;
	}
	var_925_bool = 0;
	return 0;
}


func_4507(var_22_object, var_23_int, var_24_float)
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
		func_4337(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_4788(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		CreateVectorVector(var_35_object);
		var_36_int = 1;

	Label_4536:
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
			goto Label_4536;
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
			func_4575(var_69_float, var_70_cvector, var_71_cvector);
			return 18;
		}
		var_35_object = 0;
	}
	var_112_object = Obj();
	var_22_object = var_112_object;
	func_4463(var_112_object);
	return 18;
	
}


func_5029(var_937_bool, var_938_object)
{
	var_939_bool = 0; var_940_object = Obj();
	var_938_object = var_940_object;
	func_5221(var_939_bool, var_940_object);
	if(var_939_bool != 0) {
		var_937_bool = 1;
		return 0;
	}
	var_937_bool = 0;
	return 0;
}


func_5039(var_949_bool, var_950_object)
{
	var_951_bool = 0; var_952_object = Obj();
	var_950_object = var_952_object;
	func_5232(var_951_bool, var_952_object);
	if(var_951_bool != 0) {
		var_949_bool = 1;
		return 0;
	}
	var_949_bool = 0;
	return 0;
}


func_3505(var_0_object)
{
	var_78_object = Obj();
	var_78_object = var_0_object;
	func_4723(var_78_object);
	return 0;
}


func_5049(var_961_bool, var_962_object)
{
	var_963_bool = 0; var_964_object = Obj();
	var_962_object = var_964_object;
	func_5243(var_963_bool, var_964_object);
	if(var_963_bool != 0) {
		var_961_bool = 1;
		return 0;
	}
	var_961_bool = 0;
	return 0;
}


func_5059(var_973_bool, var_974_object)
{
	var_975_bool = 0; var_976_object = Obj();
	var_974_object = var_976_object;
	func_5254(var_975_bool, var_976_object);
	if(var_975_bool != 0) {
		var_973_bool = 1;
		return 0;
	}
	var_973_bool = 0;
	return 0;
}


func_5069(var_154_bool, var_155_object)
{
	var_156_bool = 0; var_157_object = Obj();
	var_155_object = var_157_object;
	func_5265(var_157_object);
	if(var_156_bool != 0) {
		var_154_bool = 1;
		return 0;
	}
	var_154_bool = 0;
	return 0;
}


func_5079(var_292_bool, var_293_object)
{
	var_294_bool = 0; var_295_object = Obj();
	var_293_object = var_295_object;
	func_5272(var_295_object);
	if(var_294_bool != 0) {
		var_292_bool = 1;
		return 0;
	}
	var_292_bool = 0;
	return 0;
}


func_4575(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetScene(var_31_object);
	AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	var_35_object = Obj();
	var_24_object = var_35_object;
	func_4463(var_35_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5089(var_320_bool, var_321_object)
{
	var_322_bool = 0; var_323_object = Obj();
	var_321_object = var_323_object;
	func_5279(var_323_object);
	if(var_322_bool != 0) {
		var_320_bool = 1;
		return 0;
	}
	var_320_bool = 0;
	return 0;
}


func_3046(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3182(var_17_cvector, var_18_bool);
	return 0;
}


func_5099(var_308_bool, var_309_object)
{
	var_310_bool = 0; var_311_object = Obj();
	var_309_object = var_311_object;
	func_5286(var_311_object);
	if(var_310_bool != 0) {
		var_308_bool = 1;
		return 0;
	}
	var_308_bool = 0;
	return 0;
}


func_4589(var_94_object)
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


func_3054(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3189(var_22_bool, var_23_int);
	return 0;
}


func_5109(var_342_bool, var_343_object)
{
	var_344_bool = 0; var_345_object = Obj();
	var_343_object = var_345_object;
	func_5293(var_345_object);
	if(var_344_bool != 0) {
		var_342_bool = 1;
		return 0;
	}
	var_342_bool = 0;
	return 0;
}


func_4600(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_4605(var_60_bool, var_61_object, var_62_float)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0;
	@@var_61_object:GetPosition(var_73_cvector);
	@@var_61_object:GetEyesHeight(var_72_float);
	var_81_float = GetByIndex(var_73_cvector, 1);
	var_81_float = var_81_float + var_72_float;
	SetByIndex(var_73_cvector, 1) = var_81_float;
	GetPosition(var_74_cvector);
	GetEyesHeight(var_72_float);
	var_82_float = GetByIndex(var_74_cvector, 1);
	var_82_float = var_82_float + var_72_float;
	SetByIndex(var_74_cvector, 1) = var_82_float;
	var_75_cvector = var_73_cvector - var_74_cvector;
	var_83_float = GetByIndex(var_75_cvector, 1);
	SetByIndex(var_75_cvector, 1) = (float)0;
	var_84_int = var_75_cvector | var_75_cvector;
	var_85_float = sqrt(var_84_int);
	var_75_cvector = var_75_cvector / var_85_float;
	var_76_cvector = -var_75_cvector;
	var_86_float = var_75_cvector * var_62_float;
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0);
	var_88_cvector = var_76_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4788(var_87_cvector, var_88_cvector);
	var_96_float = var_87_cvector * (int)25;
	var_97_int = var_86_float + var_96_float;
	var_77_cvector = var_97_int - CVector(0.0, 10.0, 0.0);
	var_78_cvector = var_74_cvector + var_77_cvector;
	IsOverrideActive(var_79_bool);
	var_99_bool = var_79_bool;
	if(var_99_bool != 0) {
		var_60_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_78_cvector, var_76_cvector, (bool)1);
	var_101_float = GetByIndex(var_77_cvector, 0);
	var_102_float = GetByIndex(var_77_cvector, 2);
	Rotate(var_101_float, var_102_float);
	var_103_bool = 0;
	func_6026(var_103_bool);
	if(var_103_bool != 0) {
	} else {
		HasAnimationTrack(var_80_bool, "head");
		var_105_bool = var_80_bool;
		if(var_105_bool == 0) goto Label_4668;
		LookAsyncCamera("head");
	}
Label_4668:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_60_bool = 1;
	return 18;
	
}


func_3071(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_19_object = var_25_object;
	func_4439(var_24_bool, var_25_object);
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
	func_5841(var_62_object);
	var_61_int = var_23_int;
	var_65_bool = var_23_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_23_int > (int)1;
		if(var_67_bool != 0) {
			func_3054(var_23_int);
		}
		var_69_object = Obj();
		var_19_object = var_69_object;
		func_5850(var_69_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


