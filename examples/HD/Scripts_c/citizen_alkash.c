// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/3,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|A:SetReturnValue|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:tourniquet|W:bandage|W:bottle_empty|W:tvirin|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:killme|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:bool:
// @RUN_OP: 0xb0c
// @RUN_TASK: 4
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0x226 vars=int,int
// @TASK_3: vars= params=1
// @EVENT_0: op=0xa7f vars=object
// @EVENT_6: op=0xa8d vars=
// @EVENT_22: op=0xb06 vars=object,int,float,float
// @EVENT_16: op=0xb08 vars=object,string
// @EVENT_41: op=0xb0a vars=object
// @TASK_4: vars=bool,bool,bool params=0
// @EVENT_0: op=0xb24 vars=object
// @EVENT_17: op=0xb38 vars=object
// @EVENT_30: op=0xb50 vars=object,object,bool
// @EVENT_40: op=0xb6c vars=object
// @EVENT_42: op=0xb80 vars=object,string
// @EVENT_26: op=0xba5 vars=string
// @EVENT_1: op=0xbb3 vars=object
// @EVENT_3: op=0xbc6 vars=object
// @EVENT_7: op=0xbcc vars=int
// @EVENT_6: op=0xbd8 vars=
// @EVENT_41: op=0xbef vars=object
// @EVENT_10: op=0xc60 vars=object
// @EVENT_28: op=0xc64 vars=
// @TASK_5: vars= params=0
// @EVENT_0: op=0xc7d vars=object
// @EVENT_17: op=0xc91 vars=object
// @EVENT_30: op=0xca9 vars=object,object,bool
// @EVENT_40: op=0xcc5 vars=object
// @EVENT_42: op=0xcd9 vars=object,string
// @EVENT_26: op=0xcfe vars=string
// @EVENT_6: op=0xd0c vars=
// @EVENT_1: op=0xd13 vars=object
// @TASK_6: vars=object params=1
// @EVENT_0: op=0xdaf vars=object
// @EVENT_17: op=0xdc3 vars=object
// @EVENT_30: op=0xddb vars=object,object,bool
// @EVENT_40: op=0xdf7 vars=object
// @EVENT_42: op=0xe0b vars=object,string
// @EVENT_26: op=0xe30 vars=string
// @EVENT_41: op=0xe49 vars=object
// @EVENT_7: op=0xe52 vars=int
// @EVENT_6: op=0xe75 vars=
// @EVENT_1: op=0xe7c vars=object
// @TASK_7: vars=object,int,int,bool,float,int params=1
// @TASK_8: vars=bool,object,bool params=6
// @EVENT_6: op=0x112e vars=
// @EVENT_7: op=0x1166 vars=int
// @EVENT_1: op=0x1181 vars=object
// @EVENT_2: op=0x1190 vars=object
// @EVENT_10: op=0x1216 vars=object
// @EVENT_41: op=0x1221 vars=object
// @STANDALONE_EVENT_16: op=0x1699 vars=object,string
// @STANDALONE_EVENT_41: op=0x16a6 vars=object
// @STANDALONE_EVENT_22: op=0x16ac vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x16b4 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1a,0x72,0x210,0x226,0xa70,0xa8d,0xaec,0xb06,0xb08,0xb0a,0xba5,0xbb3,0xbc6,0xbcc,0xbd8,0xbef,0xc60,0xcfe,0xd0c,0xd13,0xe30,0xe49,0xe75,0xe7c,0xe8a,0xe92,0xe95,0x1126,0x112e,0x1166,0x1181,0x1190,0x1204,0x1216,0x1221,0x122a,0x1235,0x13d2,0x140a,0x1484,0x148b,0x149b,0x14a4,0x14ae,0x14f2,0x14f7,0x1503,0x150f,0x151b,0x1525,0x152f,0x1539,0x1543,0x154d,0x1557,0x1561,0x156b,0x1575,0x157f,0x1589,0x1593,0x159a,0x15a1,0x15a8,0x15af,0x15b6,0x15bd,0x15c4,0x15cb,0x15d2,0x15d9,0x15e0,0x15fe,0x1691,0x16a6,0x16ac,0x16b4,0x16be,0x16de,0x170e,0x1714,0x1756,0x175f,0x1767,0x1771,0x17c4,0x17cb,0x17ee,0x17f1,0x17f3,0x17ff,0x1809,0x181b,0x1821,0x1824,0x182b,0x182e,0x183f,0x1845,0x1848,0x184a,0x184d,0x188a,0x188d,0x1897

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0;
	func_6231(var_20_bool);
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
		func_5177();
		var_24_bool = var_20_bool == (int)38471;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_bool;
			func_5362(var_26_object);
		}
		var_29_bool = var_20_bool == (int)38466;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_bool;
			func_5362(var_31_object);
		}
		var_33_bool = var_20_bool == (int)38472;
		if(var_33_bool != 0) {
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_bool;
			func_5362(var_35_object);
		}
		var_37_bool = var_20_bool == (int)38469;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_bool;
			func_5362(var_39_object);
		}
		var_41_bool = var_20_bool == (int)38470;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_bool;
			func_5362(var_43_object);
		}
		var_45_bool = var_19_object == (int)45464;
		if(var_45_bool != 0) {
			var_46_bool = 0; var_47_object = Obj();
			var_47_object = var_1_object;
			func_5391(var_47_object);
			if(var_46_bool != 0) {
				var_54_string = "";
				func_528(var_20_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)543012);
				@@@var_0_bool:ClearReplies();
				var_72_bool = 0; var_73_object = Obj();
				var_73_object = var_1_object;
				func_5413(var_72_bool, var_73_object);
				if(var_72_bool != 0) {
					@@@var_0_bool:AddReply((int)543015, (int)45468, (int)45467);
				}
				var_86_bool = 0; var_87_object = Obj();
				var_87_object = var_1_object;
				func_5423(var_86_bool, var_87_object);
				if(var_86_bool != 0) {
					@@@var_0_bool:AddReply((int)543022, (int)45475, (int)45474);
				}
				var_95_bool = 0;
				var_95_bool = 1;
				var_96_bool = 0;
				var_96_bool = 1;
				var_97_bool = 0; var_98_object = Obj();
				var_98_object = var_1_object;
				func_5433(var_97_bool, var_98_object);
				if(var_97_bool != 1) {
					var_103_bool = 0; var_104_object = Obj();
					var_104_object = var_1_object;
					func_5443(var_103_bool, var_104_object);
					if(var_103_bool != 1) {
						var_96_bool = 0;
					}
				}
				if(var_96_bool != 1) {
					var_109_bool = 0; var_110_object = Obj();
					var_110_object = var_1_object;
					func_5453(var_109_bool, var_110_object);
					if(var_109_bool != 1) {
						var_95_bool = 0;
					}
				}
				if(var_95_bool != 0) {
					@@@var_0_bool:AddReply((int)543026, (int)45480, (int)45478);
				}
				var_118_bool = 0;
				var_118_bool = 1;
				var_119_bool = 0; var_120_object = Obj();
				var_120_object = var_1_object;
				func_5463(var_119_bool, var_120_object);
				if(var_119_bool != 1) {
					var_125_bool = 0; var_126_object = Obj();
					var_126_object = var_1_object;
					func_5473(var_125_bool, var_126_object);
					if(var_125_bool != 1) {
						var_118_bool = 0;
					}
				}
				if(var_118_bool != 0) {
					@@@var_0_bool:AddReply((int)543034, (int)45487, (int)45486);
				}
				@@@var_0_bool:AddReply((int)536643, (int)-1, (int)38471);
				var_137_bool = 0; var_138_object = Obj();
				var_138_object = var_1_object;
				func_5413(var_137_bool, var_138_object);
				if(var_137_bool != 0) {
					@@@var_0_bool:AddReply((int)543014, (int)-1, (int)45466);
				}
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_5413(var_142_bool, var_143_object);
				var_144_bool = var_142_bool == 0; //@nz
				if(var_144_bool != 0) {
					@@@var_0_bool:AddReply((int)543027, (int)-1, (int)45479);
				}
				@@@var_0_bool:AddReply((int)536852, (int)-1, (int)38688);
				return 0;
			}
			var_151_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536636);
			@@@var_0_bool:ClearReplies();
			var_153_bool = 0;
			var_153_bool = 0;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_5367(var_155_object);
			if(var_154_bool != 0) {
				var_160_bool = 0; var_161_object = Obj();
				var_161_object = var_1_object;
				func_5403(var_160_bool, var_161_object);
				if(var_160_bool != 0) {
					var_153_bool = 1;
				}
			}
			if(var_153_bool != 0) {
				@@@var_0_bool:AddReply((int)536638, (int)-1, (int)38466);
			}
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_5367(var_171_object);
			if(var_170_bool != 0) {
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_5403(var_172_bool, var_173_object);
				var_174_bool = var_172_bool == 0; //@nz
				if(var_174_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				@@@var_0_bool:AddReply((int)536644, (int)-1, (int)38472);
			}
			var_178_bool = 0;
			var_178_bool = 0;
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_5379(var_180_object);
			if(var_179_bool != 0) {
				var_185_bool = 0; var_186_object = Obj();
				var_186_object = var_1_object;
				func_5403(var_185_bool, var_186_object);
				if(var_185_bool != 0) {
					var_178_bool = 1;
				}
			}
			if(var_178_bool != 0) {
				@@@var_0_bool:AddReply((int)536639, (int)38468, (int)38467);
			}
			var_190_bool = 0;
			var_190_bool = 0;
			var_191_bool = 0; var_192_object = Obj();
			var_192_object = var_1_object;
			func_5379(var_192_object);
			if(var_191_bool != 0) {
				var_193_bool = 0; var_194_object = Obj();
				var_194_object = var_1_object;
				func_5403(var_193_bool, var_194_object);
				var_195_bool = var_193_bool == 0; //@nz
				if(var_195_bool != 0) {
					var_190_bool = 1;
				}
			}
			if(var_190_bool != 0) {
				@@@var_0_bool:AddReply((int)536642, (int)-1, (int)38470);
			}
			var_199_bool = 0;
			var_199_bool = 0;
			var_200_bool = 0; var_201_object = Obj();
			var_201_object = var_1_object;
			func_5413(var_200_bool, var_201_object);
			if(var_200_bool != 0) {
				var_202_bool = 0; var_203_object = Obj();
				var_203_object = var_1_object;
				func_5367(var_203_object);
				if(var_202_bool != 0) {
					var_199_bool = 1;
				}
			}
			if(var_199_bool != 0) {
				@@@var_0_bool:AddReply((int)536645, (int)38474, (int)38473);
			}
			var_207_bool = 0; var_208_object = Obj();
			var_208_object = var_1_object;
			func_5423(var_207_bool, var_208_object);
			if(var_207_bool != 0) {
				@@@var_0_bool:AddReply((int)536663, (int)38493, (int)38492);
			}
			var_212_bool = 0; var_213_object = Obj();
			var_213_object = var_1_object;
			func_5433(var_212_bool, var_213_object);
			if(var_212_bool != 0) {
				@@@var_0_bool:AddReply((int)536685, (int)38517, (int)38516);
			}
			var_217_bool = 0;
			var_217_bool = 0;
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_5443(var_218_bool, var_219_object);
			if(var_218_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_5367(var_221_object);
				if(var_220_bool != 0) {
					var_217_bool = 1;
				}
			}
			if(var_217_bool != 0) {
				@@@var_0_bool:AddReply((int)536710, (int)38542, (int)38541);
			}
			var_225_bool = 0; var_226_object = Obj();
			var_226_object = var_1_object;
			func_5453(var_225_bool, var_226_object);
			if(var_225_bool != 0) {
				@@@var_0_bool:AddReply((int)536747, (int)38579, (int)38578);
			}
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_5463(var_231_bool, var_232_object);
			if(var_231_bool != 0) {
				var_233_bool = 0; var_234_object = Obj();
				var_234_object = var_1_object;
				func_5367(var_234_object);
				if(var_233_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				@@@var_0_bool:AddReply((int)536769, (int)38602, (int)38601);
			}
			var_238_bool = 0; var_239_object = Obj();
			var_239_object = var_1_object;
			func_5473(var_238_bool, var_239_object);
			if(var_238_bool != 0) {
				@@@var_0_bool:AddReply((int)536782, (int)38617, (int)38616);
			}
			var_243_bool = 0;
			var_243_bool = 0;
			var_244_bool = 0; var_245_object = Obj();
			var_245_object = var_1_object;
			func_5483(var_244_bool, var_245_object);
			if(var_244_bool != 0) {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_object;
				func_5367(var_251_object);
				if(var_250_bool != 0) {
					var_243_bool = 1;
				}
			}
			if(var_243_bool != 0) {
				@@@var_0_bool:AddReply((int)536792, (int)38627, (int)38626);
			}
			var_255_bool = 0; var_256_object = Obj();
			var_256_object = var_1_object;
			func_5493(var_255_bool, var_256_object);
			if(var_255_bool != 0) {
				@@@var_0_bool:AddReply((int)536814, (int)38651, (int)38650);
			}
			var_264_bool = 0;
			var_264_bool = 0;
			var_265_bool = 0; var_266_object = Obj();
			var_266_object = var_1_object;
			func_5503(var_265_bool, var_266_object);
			if(var_265_bool != 0) {
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_5367(var_272_object);
				if(var_271_bool != 0) {
					var_264_bool = 1;
				}
			}
			if(var_264_bool != 0) {
				@@@var_0_bool:AddReply((int)536833, (int)38670, (int)38669);
			}
			var_276_bool = 0; var_277_object = Obj();
			var_277_object = var_1_object;
			func_5513(var_276_bool, var_277_object);
			if(var_276_bool != 0) {
				@@@var_0_bool:AddReply((int)536843, (int)38680, (int)38679);
			}
			var_285_bool = 0; var_286_object = Obj();
			var_286_object = var_1_object;
			func_5367(var_286_object);
			if(var_285_bool != 0) {
				@@@var_0_bool:AddReply((int)536850, (int)-1, (int)38686);
			}
			var_290_bool = 0; var_291_object = Obj();
			var_291_object = var_1_object;
			func_5379(var_291_object);
			if(var_290_bool != 0) {
				@@@var_0_bool:AddReply((int)536851, (int)-1, (int)38687);
			}
			return 0;
		}
		var_296_bool = var_19_object == (int)38680;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536844);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536845, (int)38682, (int)38681);
			var_302_bool = 0; var_303_object = Obj();
			var_303_object = var_1_object;
			func_5367(var_303_object);
			if(var_302_bool != 0) {
				@@@var_0_bool:AddReply((int)536849, (int)-1, (int)38685);
			}
			return 0;
		}
		var_308_bool = var_19_object == (int)38682;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536846);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536847, (int)-1, (int)38683);
			@@@var_0_bool:AddReply((int)536848, (int)-1, (int)38684);
			return 0;
		}
		var_318_bool = var_19_object == (int)38670;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536834);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536835, (int)38672, (int)38671);
			@@@var_0_bool:AddReply((int)536842, (int)-1, (int)38678);
			return 0;
		}
		var_328_bool = var_19_object == (int)38672;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536836);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536837, (int)38674, (int)38673);
			@@@var_0_bool:AddReply((int)536841, (int)-1, (int)38677);
			return 0;
		}
		var_338_bool = var_19_object == (int)38674;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536838);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536839, (int)-1, (int)38675);
			@@@var_0_bool:AddReply((int)536840, (int)-1, (int)38676);
			return 0;
		}
		var_348_bool = var_19_object == (int)38651;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536815);
			@@@var_0_bool:ClearReplies();
			var_351_bool = 0; var_352_object = Obj();
			var_352_object = var_1_object;
			func_5367(var_352_object);
			if(var_351_bool != 0) {
				@@@var_0_bool:AddReply((int)536816, (int)38653, (int)38652);
			}
			@@@var_0_bool:AddReply((int)536823, (int)38660, (int)38659);
			@@@var_0_bool:AddReply((int)536832, (int)-1, (int)38668);
			return 0;
		}
		var_363_bool = var_19_object == (int)38660;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536824);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536825, (int)38662, (int)38661);
			@@@var_0_bool:AddReply((int)536830, (int)-1, (int)38666);
			@@@var_0_bool:AddReply((int)536831, (int)-1, (int)38667);
			return 0;
		}
		var_376_bool = var_19_object == (int)38662;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536826);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536827, (int)38664, (int)38663);
			return 0;
		}
		var_383_bool = var_19_object == (int)38664;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536828);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536829, (int)-1, (int)38665);
			return 0;
		}
		var_390_bool = var_19_object == (int)38653;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536817);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536818, (int)38655, (int)38654);
			@@@var_0_bool:AddReply((int)536822, (int)-1, (int)38658);
			return 0;
		}
		var_400_bool = var_19_object == (int)38655;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536819);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536820, (int)-1, (int)38656);
			@@@var_0_bool:AddReply((int)536821, (int)-1, (int)38657);
			return 0;
		}
		var_410_bool = var_19_object == (int)38627;
		if(var_410_bool != 0) {
			var_411_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536793);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536794, (int)38629, (int)38628);
			@@@var_0_bool:AddReply((int)536806, (int)38642, (int)38641);
			@@@var_0_bool:AddReply((int)536813, (int)-1, (int)38649);
			return 0;
		}
		var_423_bool = var_19_object == (int)38642;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536807);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536808, (int)38644, (int)38643);
			@@@var_0_bool:AddReply((int)536812, (int)38644, (int)38647);
			return 0;
		}
		var_433_bool = var_19_object == (int)38644;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536809);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536810, (int)-1, (int)38645);
			@@@var_0_bool:AddReply((int)536811, (int)-1, (int)38646);
			return 0;
		}
		var_443_bool = var_19_object == (int)38629;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536795);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536796, (int)38631, (int)38630);
			@@@var_0_bool:AddReply((int)536805, (int)-1, (int)38640);
			return 0;
		}
		var_453_bool = var_19_object == (int)38631;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536797);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536798, (int)38633, (int)38632);
			@@@var_0_bool:AddReply((int)536804, (int)-1, (int)38639);
			return 0;
		}
		var_463_bool = var_19_object == (int)38633;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536799);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536800, (int)38635, (int)38634);
			@@@var_0_bool:AddReply((int)536803, (int)38635, (int)38637);
			return 0;
		}
		var_473_bool = var_19_object == (int)38635;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536801);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536802, (int)-1, (int)38636);
			return 0;
		}
		var_480_bool = var_19_object == (int)38617;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536783);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536784, (int)38619, (int)38618);
			@@@var_0_bool:AddReply((int)536791, (int)-1, (int)38625);
			return 0;
		}
		var_490_bool = var_19_object == (int)38619;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536785);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536786, (int)38621, (int)38620);
			@@@var_0_bool:AddReply((int)536790, (int)-1, (int)38624);
			return 0;
		}
		var_500_bool = var_19_object == (int)38621;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536787);
			@@@var_0_bool:ClearReplies();
			var_503_bool = 0; var_504_object = Obj();
			var_504_object = var_1_object;
			func_5367(var_504_object);
			if(var_503_bool != 0) {
				@@@var_0_bool:AddReply((int)536788, (int)-1, (int)38622);
			}
			@@@var_0_bool:AddReply((int)536789, (int)-1, (int)38623);
			return 0;
		}
		var_512_bool = var_19_object == (int)38602;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536770);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536771, (int)38604, (int)38603);
			@@@var_0_bool:AddReply((int)536781, (int)-1, (int)38615);
			return 0;
		}
		var_522_bool = var_19_object == (int)38604;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536772);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536773, (int)38606, (int)38605);
			@@@var_0_bool:AddReply((int)536780, (int)38606, (int)38613);
			return 0;
		}
		var_532_bool = var_19_object == (int)38606;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536774);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536775, (int)38608, (int)38607);
			@@@var_0_bool:AddReply((int)536779, (int)38608, (int)38611);
			return 0;
		}
		var_542_bool = var_19_object == (int)38608;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536776);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536777, (int)-1, (int)38609);
			@@@var_0_bool:AddReply((int)536778, (int)-1, (int)38610);
			return 0;
		}
		var_552_bool = var_19_object == (int)38579;
		if(var_552_bool != 0) {
			var_553_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536748);
			@@@var_0_bool:ClearReplies();
			var_555_bool = 0; var_556_object = Obj();
			var_556_object = var_1_object;
			func_5367(var_556_object);
			if(var_555_bool != 0) {
				@@@var_0_bool:AddReply((int)536749, (int)38581, (int)38580);
			}
			@@@var_0_bool:AddReply((int)536761, (int)38593, (int)38592);
			@@@var_0_bool:AddReply((int)536768, (int)-1, (int)38600);
			return 0;
		}
		var_567_bool = var_19_object == (int)38593;
		if(var_567_bool != 0) {
			var_568_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536762);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536763, (int)38595, (int)38594);
			@@@var_0_bool:AddReply((int)536767, (int)38595, (int)38598);
			return 0;
		}
		var_577_bool = var_19_object == (int)38595;
		if(var_577_bool != 0) {
			var_578_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536764);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536765, (int)-1, (int)38596);
			@@@var_0_bool:AddReply((int)536766, (int)-1, (int)38597);
			return 0;
		}
		var_587_bool = var_19_object == (int)38581;
		if(var_587_bool != 0) {
			var_588_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536750);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536751, (int)38583, (int)38582);
			@@@var_0_bool:AddReply((int)536760, (int)-1, (int)38591);
			return 0;
		}
		var_597_bool = var_19_object == (int)38583;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536752);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536753, (int)38585, (int)38584);
			return 0;
		}
		var_604_bool = var_19_object == (int)38585;
		if(var_604_bool != 0) {
			var_605_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536754);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536755, (int)38587, (int)38586);
			@@@var_0_bool:AddReply((int)536759, (int)-1, (int)38590);
			return 0;
		}
		var_614_bool = var_19_object == (int)38587;
		if(var_614_bool != 0) {
			var_615_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536756);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536757, (int)-1, (int)38588);
			@@@var_0_bool:AddReply((int)536758, (int)-1, (int)38589);
			return 0;
		}
		var_624_bool = var_19_object == (int)38542;
		if(var_624_bool != 0) {
			var_625_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536711);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536712, (int)38544, (int)38543);
			@@@var_0_bool:AddReply((int)536730, (int)38562, (int)38561);
			@@@var_0_bool:AddReply((int)536746, (int)-1, (int)38577);
			return 0;
		}
		var_637_bool = var_19_object == (int)38562;
		if(var_637_bool != 0) {
			var_638_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536731);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536732, (int)38564, (int)38563);
			@@@var_0_bool:AddReply((int)536745, (int)-1, (int)38576);
			return 0;
		}
		var_647_bool = var_19_object == (int)38564;
		if(var_647_bool != 0) {
			var_648_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536733);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536734, (int)38566, (int)38565);
			@@@var_0_bool:AddReply((int)536744, (int)-1, (int)38575);
			return 0;
		}
		var_657_bool = var_19_object == (int)38566;
		if(var_657_bool != 0) {
			var_658_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536735);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536736, (int)-1, (int)38567);
			@@@var_0_bool:AddReply((int)536737, (int)38569, (int)38568);
			return 0;
		}
		var_667_bool = var_19_object == (int)38569;
		if(var_667_bool != 0) {
			var_668_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536738);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536739, (int)38571, (int)38570);
			@@@var_0_bool:AddReply((int)536743, (int)-1, (int)38574);
			return 0;
		}
		var_677_bool = var_19_object == (int)38571;
		if(var_677_bool != 0) {
			var_678_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536740);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536741, (int)-1, (int)38572);
			@@@var_0_bool:AddReply((int)536742, (int)-1, (int)38573);
			return 0;
		}
		var_687_bool = var_19_object == (int)38544;
		if(var_687_bool != 0) {
			var_688_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536713);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536714, (int)38546, (int)38545);
			@@@var_0_bool:AddReply((int)536729, (int)-1, (int)38560);
			return 0;
		}
		var_697_bool = var_19_object == (int)38546;
		if(var_697_bool != 0) {
			var_698_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536715);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536716, (int)38548, (int)38547);
			@@@var_0_bool:AddReply((int)536726, (int)38558, (int)38557);
			return 0;
		}
		var_707_bool = var_19_object == (int)38558;
		if(var_707_bool != 0) {
			var_708_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536727);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536728, (int)-1, (int)38559);
			return 0;
		}
		var_714_bool = var_19_object == (int)38548;
		if(var_714_bool != 0) {
			var_715_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536717);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536718, (int)38550, (int)38549);
			return 0;
		}
		var_721_bool = var_19_object == (int)38550;
		if(var_721_bool != 0) {
			var_722_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536719);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536720, (int)38552, (int)38551);
			@@@var_0_bool:AddReply((int)536723, (int)38555, (int)38554);
			return 0;
		}
		var_731_bool = var_19_object == (int)38555;
		if(var_731_bool != 0) {
			var_732_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536724);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536725, (int)-1, (int)38556);
			return 0;
		}
		var_738_bool = var_19_object == (int)38552;
		if(var_738_bool != 0) {
			var_739_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536721);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536722, (int)-1, (int)38553);
			return 0;
		}
		var_745_bool = var_19_object == (int)38517;
		if(var_745_bool != 0) {
			var_746_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536686);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536687, (int)38519, (int)38518);
			@@@var_0_bool:AddReply((int)536699, (int)38531, (int)38530);
			@@@var_0_bool:AddReply((int)536709, (int)-1, (int)38540);
			return 0;
		}
		var_758_bool = var_19_object == (int)38531;
		if(var_758_bool != 0) {
			var_759_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536700);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536701, (int)38533, (int)38532);
			var_764_bool = 0; var_765_object = Obj();
			var_765_object = var_1_object;
			func_5367(var_765_object);
			if(var_764_bool != 0) {
				@@@var_0_bool:AddReply((int)536705, (int)38537, (int)38536);
			}
			return 0;
		}
		var_770_bool = var_19_object == (int)38537;
		if(var_770_bool != 0) {
			var_771_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536706);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536707, (int)-1, (int)38538);
			@@@var_0_bool:AddReply((int)536708, (int)-1, (int)38539);
			return 0;
		}
		var_780_bool = var_19_object == (int)38533;
		if(var_780_bool != 0) {
			var_781_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536702);
			@@@var_0_bool:ClearReplies();
			var_783_bool = 0; var_784_object = Obj();
			var_784_object = var_1_object;
			func_5367(var_784_object);
			if(var_783_bool != 0) {
				@@@var_0_bool:AddReply((int)536703, (int)-1, (int)38534);
			}
			@@@var_0_bool:AddReply((int)536704, (int)-1, (int)38535);
			return 0;
		}
		var_792_bool = var_19_object == (int)38519;
		if(var_792_bool != 0) {
			var_793_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536688);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536689, (int)38521, (int)38520);
			@@@var_0_bool:AddReply((int)536695, (int)38527, (int)38526);
			return 0;
		}
		var_802_bool = var_19_object == (int)38527;
		if(var_802_bool != 0) {
			var_803_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536696);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536697, (int)-1, (int)38528);
			@@@var_0_bool:AddReply((int)536698, (int)-1, (int)38529);
			return 0;
		}
		var_812_bool = var_19_object == (int)38521;
		if(var_812_bool != 0) {
			var_813_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536690);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536691, (int)-1, (int)38522);
			@@@var_0_bool:AddReply((int)536692, (int)38524, (int)38523);
			return 0;
		}
		var_822_bool = var_19_object == (int)38524;
		if(var_822_bool != 0) {
			var_823_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536693);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536694, (int)-1, (int)38525);
			return 0;
		}
		var_829_bool = var_19_object == (int)38493;
		if(var_829_bool != 0) {
			var_830_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536664);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536665, (int)38495, (int)38494);
			@@@var_0_bool:AddReply((int)536675, (int)38507, (int)38506);
			@@@var_0_bool:AddReply((int)536684, (int)-1, (int)38515);
			return 0;
		}
		var_842_bool = var_19_object == (int)38507;
		if(var_842_bool != 0) {
			var_843_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536676);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536677, (int)38509, (int)38508);
			return 0;
		}
		var_849_bool = var_19_object == (int)38509;
		if(var_849_bool != 0) {
			var_850_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536678);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536679, (int)38511, (int)38510);
			@@@var_0_bool:AddReply((int)536683, (int)-1, (int)38514);
			return 0;
		}
		var_859_bool = var_19_object == (int)38511;
		if(var_859_bool != 0) {
			var_860_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536680);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536681, (int)-1, (int)38512);
			@@@var_0_bool:AddReply((int)536682, (int)-1, (int)38513);
			return 0;
		}
		var_869_bool = var_19_object == (int)38495;
		if(var_869_bool != 0) {
			var_870_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536666);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536667, (int)38497, (int)38496);
			@@@var_0_bool:AddReply((int)536674, (int)38499, (int)38504);
			return 0;
		}
		var_879_bool = var_19_object == (int)38497;
		if(var_879_bool != 0) {
			var_880_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536668);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536669, (int)38499, (int)38498);
			@@@var_0_bool:AddReply((int)536673, (int)38499, (int)38502);
			return 0;
		}
		var_889_bool = var_19_object == (int)38499;
		if(var_889_bool != 0) {
			var_890_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536670);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536671, (int)-1, (int)38500);
			@@@var_0_bool:AddReply((int)536672, (int)-1, (int)38501);
			return 0;
		}
		var_899_bool = var_19_object == (int)38474;
		if(var_899_bool != 0) {
			var_900_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536646);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536647, (int)38476, (int)38475);
			@@@var_0_bool:AddReply((int)536653, (int)38482, (int)38481);
			@@@var_0_bool:AddReply((int)536662, (int)-1, (int)38491);
			return 0;
		}
		var_912_bool = var_19_object == (int)38482;
		if(var_912_bool != 0) {
			var_913_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536654);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536655, (int)38484, (int)38483);
			@@@var_0_bool:AddReply((int)536659, (int)38488, (int)38487);
			return 0;
		}
		var_922_bool = var_19_object == (int)38488;
		if(var_922_bool != 0) {
			var_923_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536660);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536661, (int)38484, (int)38489);
			return 0;
		}
		var_929_bool = var_19_object == (int)38484;
		if(var_929_bool != 0) {
			var_930_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536656);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536657, (int)-1, (int)38485);
			@@@var_0_bool:AddReply((int)536658, (int)-1, (int)38486);
			return 0;
		}
		var_939_bool = var_19_object == (int)38476;
		if(var_939_bool != 0) {
			var_940_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536648);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536649, (int)38478, (int)38477);
			@@@var_0_bool:AddReply((int)536652, (int)-1, (int)38480);
			return 0;
		}
		var_949_bool = var_19_object == (int)38478;
		if(var_949_bool != 0) {
			var_950_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536650);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536651, (int)-1, (int)38479);
			return 0;
		}
		var_956_bool = var_19_object == (int)38468;
		if(var_956_bool != 0) {
			var_957_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)536640);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536641, (int)-1, (int)38469);
			return 0;
		}
		var_963_bool = var_19_object == (int)45487;
		if(var_963_bool != 0) {
			var_964_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543035);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543036, (int)-1, (int)45488);
			@@@var_0_bool:AddReply((int)543037, (int)-1, (int)45489);
			return 0;
		}
		var_973_bool = var_19_object == (int)45480;
		if(var_973_bool != 0) {
			var_974_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543028);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543029, (int)-1, (int)45481);
			@@@var_0_bool:AddReply((int)543030, (int)45483, (int)45482);
			return 0;
		}
		var_983_bool = var_19_object == (int)45483;
		if(var_983_bool != 0) {
			var_984_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543031);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543032, (int)-1, (int)45484);
			@@@var_0_bool:AddReply((int)543033, (int)-1, (int)45485);
			return 0;
		}
		var_993_bool = var_19_object == (int)45475;
		if(var_993_bool != 0) {
			var_994_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543023);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543024, (int)-1, (int)45476);
			@@@var_0_bool:AddReply((int)543025, (int)-1, (int)45477);
			return 0;
		}
		var_1003_bool = var_19_object == (int)45468;
		if(var_1003_bool != 0) {
			var_1004_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543016);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543017, (int)45471, (int)45469);
			@@@var_0_bool:AddReply((int)543018, (int)-1, (int)45470);
			return 0;
		}
		var_1013_bool = var_19_object == (int)45471;
		if(var_1013_bool != 0) {
			var_1014_string = "";
			func_528(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543019);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543020, (int)-1, (int)45472);
			@@@var_0_bool:AddReply((int)543021, (int)-1, (int)45473);
			return 0;
		}
		var_3_object = true;
		var_1022_bool = 0;
		func_6231(var_1022_bool);
		if(var_1022_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x227";
	
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6177(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_26_object = Obj();
		var_19_bool = var_26_object;
		func_6180(var_26_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_6186();
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
	func_6177(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_3039(var_21_int);
		}
		var_29_object = Obj();
		var_19_bool = var_29_object;
		func_6180(var_29_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_5908(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_5991(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_3039(var_21_int);
		}
		var_72_object = Obj();
		var_19_bool = var_72_object;
		func_6001(var_72_object);
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
	func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_6084(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_3039(var_23_int);
			}
			var_124_object = Obj();
			var_19_bool = var_124_object;
			func_6091(var_124_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6126(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_3039(var_21_int);
		}
		var_19_bool = Obj();
		func_6129();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_5822(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_3039(var_22_int);
		var_52_object = Obj(); var_53_string = "";
		var_19_object = var_52_object;
		var_20_bool = var_53_string;
		func_5854(var_52_object, var_53_string);
	} else {
		var_128_int = 0; var_129_string = ""; var_130_object = Obj();
		var_20_bool = var_129_string;
		var_19_object = var_130_object;
		func_6131(var_128_int, var_129_string, var_130_object);
		var_128_int = var_22_int;
		var_173_bool = var_22_int > (int)0;
		if(var_173_bool == 0) goto Label_2980;
		var_175_bool = var_22_int > (int)1;
		if(var_175_bool != 0) {
			func_3039(var_22_int);
		}
		var_176_string = ""; var_177_object = Obj();
		var_20_bool = var_176_string;
		var_19_object = var_177_object;
		func_6143(var_176_string, var_177_object);
	}
Label_2980:
	return 2;
	
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_5921(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_3039(var_19_bool);
		var_30_string = "";
		var_19_bool = var_30_string;
		func_5937(var_30_string);
	}
	return 0;
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_5879(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_3039(var_19_bool);
		var_33_object = Obj();
		var_19_bool = var_33_object;
		func_5902(var_33_object);
	} else {
		var_35_object = Obj();
		var_19_bool = var_35_object;
		func_3064(var_19_bool, var_35_object);
	}
	return 0;
	
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj();
	var_19_bool = var_20_object;
	func_3064(var_19_bool, var_20_object);
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
	func_3039(var_18_bool);
	func_6186();
	return 0;
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_3039(var_19_bool);
	var_19_bool = Obj();
	func_5798();
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
	func_6177(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_3442();
		}
		var_28_object = Obj();
		var_19_bool = var_28_object;
		func_6180(var_28_object);
	}
	return 2;
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_5908(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_5991(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_3442();
		}
		var_71_object = Obj();
		var_19_bool = var_71_object;
		func_6001(var_71_object);
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
	func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_6084(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_3442();
			}
			var_123_object = Obj();
			var_19_bool = var_123_object;
			func_6091(var_123_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6126(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_3442();
		}
		var_19_bool = Obj();
		func_6129();
	}
	return 2;
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_5822(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_3442();
		var_51_object = Obj(); var_52_string = "";
		var_19_object = var_51_object;
		var_20_bool = var_52_string;
		func_5854(var_51_object, var_52_string);
	} else {
		var_127_int = 0; var_128_string = ""; var_129_object = Obj();
		var_20_bool = var_128_string;
		var_19_object = var_129_object;
		func_6131(var_127_int, var_128_string, var_129_object);
		var_127_int = var_22_int;
		var_172_bool = var_22_int > (int)0;
		if(var_172_bool == 0) goto Label_3325;
		var_174_bool = var_22_int > (int)1;
		if(var_174_bool != 0) {
			func_3442();
		}
		var_175_string = ""; var_176_object = Obj();
		var_20_bool = var_175_string;
		var_19_object = var_176_object;
		func_6143(var_175_string, var_176_object);
	}
Label_3325:
	return 2;
	
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_5921(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_3442();
		var_29_string = "";
		var_19_bool = var_29_string;
		func_5937(var_29_string);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3442();
	func_6186();
	return 0;
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_5879(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_3442();
		var_32_object = Obj();
		var_19_bool = var_32_object;
		func_5902(var_32_object);
	}
	return 0;
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6177(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_3646();
		}
		var_30_object = Obj();
		var_19_bool = var_30_object;
		func_6180(var_30_object);
	}
	return 2;
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_5908(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_5991(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_3646();
		}
		var_73_object = Obj();
		var_19_bool = var_73_object;
		func_6001(var_73_object);
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
	func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_6084(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_3646();
			}
			var_125_object = Obj();
			var_19_bool = var_125_object;
			func_6091(var_125_object);
		}
	}
	return 2;
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_6126(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_3646();
		}
		var_19_bool = Obj();
		func_6129();
	}
	return 2;
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_5822(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_3646();
		var_53_object = Obj(); var_54_string = "";
		var_19_object = var_53_object;
		var_20_bool = var_54_string;
		func_5854(var_53_object, var_54_string);
	} else {
		var_129_int = 0; var_130_string = ""; var_131_object = Obj();
		var_20_bool = var_130_string;
		var_19_object = var_131_object;
		func_6131(var_129_int, var_130_string, var_131_object);
		var_129_int = var_22_int;
		var_174_bool = var_22_int > (int)0;
		if(var_174_bool == 0) goto Label_3631;
		var_176_bool = var_22_int > (int)1;
		if(var_176_bool != 0) {
			func_3646();
		}
		var_177_string = ""; var_178_object = Obj();
		var_20_bool = var_177_string;
		var_19_object = var_178_object;
		func_6143(var_177_string, var_178_object);
	}
Label_3631:
	return 2;
	
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_5921(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_3646();
		var_31_string = "";
		var_19_bool = var_31_string;
		func_5937(var_31_string);
	}
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_3646();
	var_19_bool = Obj();
	func_5798();
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
	func_4821(var_26_bool, var_27_object);
	var_60_bool = var_26_bool == 0; //@nz
	if(var_60_bool != 0) {
		func_3646();
		return 4;
	}
	GetDirection(var_22_cvector);
	var_63_cvector = CVector(0,0,0); var_64_object = Obj();
	var_64_object = var_0_bool;
	func_4675(var_63_cvector, var_64_object);
	var_63_cvector = var_23_cvector;
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_22_cvector = var_70_cvector;
	var_23_cvector = var_71_cvector;
	func_5294(var_69_float, var_70_cvector, var_71_cvector);
	var_94_bool = var_69_float < (float)0.4999999701976776;
	if(var_94_bool != 0) {
		var_95_object = Obj();
		var_95_object = var_0_bool;
		func_4971(var_95_object);
	}
	return 4;
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3646();
	func_6186();
	return 0;
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_5879(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_3646();
		var_34_object = Obj();
		var_19_bool = var_34_object;
		func_5902(var_34_object);
	}
	return 0;
}


task_8_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_4468(var_18_bool);
	func_6186();
	return 0;
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_21_bool = var_19_int == (int)1;
	if(var_21_bool != 0) {
		var_22_object = Obj();
		var_22_object = var_1_object;
		func_5342(var_22_object);
	} else {
		var_27_int = 0;
		var_19_int = var_27_int;
		func_4612(var_18_bool, var_19_int, var_27_int);
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
		func_5166(var_23_object);
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
	func_4468(var_19_object);
	var_19_object = Obj();
	func_5798();
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
	func_5777(var_20_object);
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0;
	var_19_object = var_23_object;
	var_20_int = var_24_int;
	var_21_float = var_25_float;
	func_4889(var_23_object, var_24_int, var_25_float);
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
	func_4957(var_27_float, var_28_cvector, var_29_cvector);
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	SensePlayerOnly((bool)1);
	func_6233();
	func_2843();
	
Label_2837:
	var_2_object = false;
	func_3104(var_17_object, var_18_bool);
	goto Label_2837;
}
EMIT "Return(); Pop(0)";


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_435_bool = 0;
	func_6231(var_435_bool);
	if(var_435_bool != 0) {
		var_436_string = "";
		func_5135("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_437_bool = var_0_bool;
	if(var_437_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_4612(var_0_bool, var_1_object, var_27_int)
{
	var_29_bool = var_27_int != (int)0;
	if(var_29_bool != 0) {
		return 0;
	}
	var_30_bool = 0; var_31_object = Obj();
	var_31_object = var_1_object;
	func_4650(var_30_bool, var_31_object);
	var_66_bool = var_30_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_6153(var_134_int, var_135_object)
{
	var_136_bool = 0; var_137_object = Obj();
	var_135_object = var_137_object;
	func_4821(var_136_bool, var_137_object);
	var_170_bool = var_136_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_134_int = 0;
		return 0;
	}
	var_171_bool = 0; var_172_object = Obj();
	var_135_object = var_172_object;
	func_6282(var_172_object);
	if(var_171_bool != 0) {
		var_134_int = 2;
	} else {
		var_134_int = 0;
	}
	return 0;
	
}


func_5130()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_5643(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0;
	var_130_bool = var_115_int > var_116_int;
	if(var_130_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_128_int = 0;
	var_132_bool = var_115_int != var_116_int;
	if(var_132_bool != 0) {
		var_133_int = var_116_int - var_115_int;
		irand(var_128_int, var_133_int);
	} else {
		var_142_bool = var_115_int == (int)0;
		if(var_142_bool == 0) goto Label_5661;
		return 4;
	}
Label_5661:
	var_128_int = var_128_int + var_115_int;
	var_135_bool = var_128_int == (int)0;
	if(var_135_bool != 0) {
		return 4;
	}
	var_136_int = 0; var_137_string = "";
	func_5772(var_136_int, "Money");
	AddItem(var_129_bool, var_136_int, (int)0, var_128_int);
	return 4;
	
}


func_5135(var_230_string)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0;
	lshHasAnimation(var_234_bool, var_230_string);
	var_237_bool = var_234_bool;
	if(var_237_bool != 0) {
		lshGetAnimTimes(var_230_string, var_235_float, var_236_float);
		lshPlayAnimation(var_235_float, var_236_float, (bool)0);
	} else {
		var_240_int = "Can't find lsh animation : " + var_230_string;
		Trace(var_240_int);
	}
	return 6;
	
}


func_528(var_2_object, var_131_string)
{
	var_132_bool = 0;
	func_6231(var_132_bool);
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
	func_5151(var_135_string, var_136_bool);
	var_2_object = var_131_string;
	return 0;
	
}


func_4634(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_6171(var_181_object)
{
	var_182_object = Obj();
	var_181_object = var_182_object;
	func_6001(var_182_object);
	return 0;
}


func_5151(var_135_string, var_136_bool)
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


func_3104(var_0_bool, var_1_object)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_48_float, (float)0.5);
	Sleep(var_48_float);
	
Label_3112:
	var_55_bool = var_0_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_56_bool = var_1_object == 0; //@nz
		if(var_56_bool != 0) {

		Label_3116:
			GetPosition(var_50_cvector);
			var_57_float = 0;
			func_3163(var_57_float);
			GetRandomPFPointInCircle(var_49_cvector, var_50_cvector, var_57_float, var_51_bool);
			var_60_bool = var_51_bool;
			if(var_60_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_3116;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_3132;
	
Label_3132:
	var_61_object = Obj(); var_62_cvector = CVector(0,0,0);
	var_49_cvector = var_62_cvector;
	func_3191(var_61_object, var_62_cvector);
	var_61_object = var_52_object;
	var_65_bool = var_52_object != 0; //@nn
	if(var_65_bool != 0) {
		RotatePath(var_52_object, var_53_bool);
		var_66_bool = var_53_bool;
		if(var_66_bool != 0) {
			var_67_bool = 0;
			func_3189(var_67_bool);
			FollowPath(var_52_object, var_67_bool, var_53_bool);
			var_52_object = 0;
			var_68_bool = var_53_bool;
			if(var_68_bool != 0) {
				TaskCall(5);
				func_3361();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_52_object = 0;
	goto Label_3112;
	
}


func_6177(var_22_int)
{
	var_22_int = 2;
	return 0;
}


func_6180(var_30_object)
{
	var_31_object = Obj();
	var_30_object = var_31_object;
	func_6240(var_30_object, var_31_object);
	return 0;
}


func_40(var_0_bool, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_bool = var_45_object;
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0;
	var_45_object = var_56_object;
	func_4987(var_55_bool, var_56_object, (float)70.0);
	var_102_bool = var_55_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_103_int = 0;
	func_6225(var_103_int);
	@@var_51_object:SetNPCName(var_103_int);
	var_104_int = 0;
	func_6223(var_104_int);
	@@var_51_object:SetNPCDescription(var_104_int);
	var_105_string = "";
	func_6227(var_105_string);
	@@var_51_object:SetPhoto(var_105_string);
	var_106_string = "";
	func_6229(var_106_string);
	@@var_51_object:SetPhoto2(var_106_string);
	var_107_int = 0;
	func_5607(var_107_int);
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
	var_390_bool = var_54_bool == 0; //@nz
	if(var_390_bool != 0) {
		sync();
		@@var_51_object:IsDialogEnd(var_54_bool);
		goto Label_96;
	}
	var_45_object = Obj();
	func_5056();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6186()
{
	return 0;
}


func_4650(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_4821(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
	return 0;
}


func_5674(var_169_string)
{
	var_170_object = Obj(); var_171_int = 0; var_172_bool = 0; var_173_object = Obj(); var_174_int = 0; var_175_bool = 0;
	CreateInvItem(var_173_object);
	@@var_173_object:SetItemName(var_169_string);
	@@var_173_object:SetProperty("Organ", (int)1);
	@@var_173_object:GetItemID(var_174_int);
	AddItem(var_175_bool, var_173_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_6187(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_5166(var_23_object)
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


func_6190()
{
	return 0;
}


func_6192(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	CanSee(var_35_bool, var_33_object);
	var_32_bool = 1;
	var_36_bool = var_35_bool;
	if(var_36_bool != 1) {
		var_37_float = 0; var_38_object = Obj();
		var_33_object = var_38_object;
		func_4682(var_37_float, var_38_object);
		var_46_bool = var_37_float <= (int)2250000;
		if(var_46_bool != 1) {
			var_32_bool = 0;
		}
	}
	return 2;
}


func_4657(var_324_string)
{
	var_324_string = "walk";
	return 0;
}


func_4659(var_325_string)
{
	var_325_string = "run";
	return 0;
}


func_4661(var_540_string, var_541_int)
{
	var_543_bool = var_541_int == (int)2;
	if(var_543_bool != 0) {
		var_540_string = "fire";
		return 0;
	EMIT "GOTO 0x1241";
	}
	var_545_bool = var_541_int == (int)1;
	if(var_545_bool != 0) {
		var_540_string = "bullet";
		return 0;
	}
	var_540_string = "phys";
	return 0;
}


func_5177()
{
	var_22_bool = 0;
	func_6231(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5691()
{
	var_163_int = 0;
	func_5624(var_163_int);
	var_168_bool = var_163_int != (int)1;
	if(var_168_bool != 0) {
		return 0;
	}
	var_169_string = "";
	func_5674("liver");
	var_180_string = "";
	func_5674("kidney");
	var_181_string = "";
	func_5674("heart");
	var_182_string = "";
	func_5674("blood");
	return 0;
}


func_3646()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_6207(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	func_5983(var_61_object);
	return 0;
}


func_5184(var_24_string, var_25_int, var_26_int)
{
	var_27_bool = 0; var_28_bool = 0;
	var_29_bool = 0; var_30_int = 0; var_31_int = 0;
	var_25_int = var_30_int;
	var_26_int = var_31_int;
	func_5270(var_29_bool, var_30_int, var_31_int);
	if(var_29_bool != 0) {
		AddItem(var_28_bool, var_24_string, (int)0);
	}
	return 2;
}


func_4675(var_53_cvector, var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_57_cvector);
	@@var_54_object:GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
	return 4;
}


func_6213(var_49_bool)
{
	var_49_bool = 0;
	return 0;
}


func_6216()
{
	return 0;
}


func_6218(var_27_bool)
{
	var_27_bool = 0;
	return 0;
}


func_5195(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	IsExisting3DSound(var_54_bool, var_45_string);
	var_62_bool = var_54_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_55_int = 0;

	Label_5201:
		var_64_int = var_55_int + (int)1;
		var_65_int = var_45_string + var_64_int;
		IsExisting3DSound(var_56_bool, var_65_int);
		var_66_bool = var_56_bool == 0; //@nz
		if(var_66_bool != 0) {
		} else {
			var_55_int = var_55_int + (int)1;
			goto Label_5201;
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


func_4682(var_37_float, var_38_object)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	GetPosition(var_42_cvector);
	@@var_38_object:GetPosition(var_43_cvector);
	var_44_cvector = var_43_cvector - var_42_cvector;
	var_37_float = var_44_cvector | var_44_cvector;
	return 6;
}


func_6221()
{
	return 0;
}


func_6223(var_104_int)
{
	var_104_int = 515557;
	return 0;
}


func_4176(var_603_bool, var_604_float)
{
	var_605_float = 0; var_606_bool = 0; var_607_float = 0; var_608_bool = 0;
	rand(var_607_float);
	var_609_bool = var_607_float < var_604_float;
	if(var_609_bool != 0) {

	Label_4181:
		IsAnimationPlaying(var_608_bool);
		var_610_bool = var_608_bool == 0; //@nz
		if(var_610_bool != 0) {
		} else {
			var_611_bool = 0;
			func_4274(var_611_bool);
			if(var_611_bool != 0) {
				var_603_bool = 1;
				sync();
				goto Label_4181;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_4378(var_608_bool);
	}
	goto Label_4201;
	
Label_4201:
	var_603_bool = 0;
	return 4;
	
}


func_6225(var_103_int)
{
	var_103_int = 503342;
	return 0;
}


func_4690(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0;
	IsPlayerActor(var_104_object, var_106_bool);
	var_106_bool = var_103_bool;
	return 2;
}


func_6227(var_105_string)
{
	var_105_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_5715()
{
	var_112_bool = 0; var_113_bool = 0;
	ClearSubContainer((int)0);
	var_115_int = 0; var_116_int = 0;
	var_118_int = 0;
	func_5333(var_118_int);
	var_125_float = var_118_int * (int)40;
	var_116_int = (int)50 + var_125_float;
	func_5643((int)30, var_116_int);
	var_143_string = ""; var_144_int = 0; var_145_int = 0;
	func_5184("tourniquet", (int)1, (int)10);
	var_154_string = ""; var_155_int = 0; var_156_int = 0;
	func_5184("bandage", (int)1, (int)10);
	var_157_string = ""; var_158_int = 0; var_159_int = 0;
	func_5184("bottle_empty", (int)1, (int)2);
	var_160_string = ""; var_161_int = 0; var_162_int = 0;
	func_5184("tvirin", (int)1, (int)8);
	return 2;
}


func_6229(var_106_string)
{
	var_106_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_6231(var_98_bool)
{
	var_98_bool = 0;
	return 0;
}


func_4695(var_54_bool, var_55_object, var_56_string)
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


func_6233()
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	func_5755();
	return 0;
}


func_3163(var_57_float)
{
	var_58_float = 0; var_59_float = 0;
	GetCameraFarDistance(var_59_float);
	var_59_float = var_57_float;
	return 2;
}


func_6240(var_31_object, var_46_object)
{
	var_32_bool = 0; var_33_bool = 0;
	var_34_bool = GlobalVars[0];
	if(var_34_bool != 0) {
		IsOverrideActive(var_33_bool);
		var_35_bool = var_33_bool == 0; //@nz
		if(var_35_bool != 0) {
			var_36_object = Obj();
			var_31_object = var_36_object;
			func_5630(var_36_object);
		}
		return 2;
	EMIT "GOTO 0x1887";
	}
	var_44_int = 0; var_45_object = Obj();
	var_31_object = var_45_object;
	TaskCall(1);
	func_40(var_46_object, var_44_int, var_45_object);
	TaskReturn();
	var_399_bool = (int)1000 == var_46_object;
	if(var_399_bool != 0) {
		var_400_bool = 0; var_401_object = Obj();
		var_31_object = var_401_object;
		func_5074(var_400_bool, var_401_object);
		var_432_bool = var_400_bool == 0; //@nz
		if(var_432_bool != 0) {
			return 2;
		}
		var_433_object = Obj();
		var_31_object = var_433_object;
		TaskCall(0);
		func_0(var_433_object);
		TaskReturn();
		var_31_object = Obj();
		func_5130();
	}
	return 2;
}


func_4707(var_512_float, var_513_object, var_514_float, var_515_int)
{
	var_519_int = 0; var_520_string = ""; var_521_int = 0; var_522_float = 0; var_523_float = 0; var_524_float = 0; var_525_int = 0; var_526_string = ""; var_527_int = 0; var_528_float = 0; var_529_float = 0; var_530_float = 0;
	var_531_bool = 0; var_532_object = Obj(); var_533_string = "";
	var_513_object = var_532_object;
	func_4695(var_531_bool, var_532_object, "health");
	var_534_bool = var_531_bool == 0; //@nz
	if(var_534_bool != 0) {
		var_512_float = 0.0;
		return 12;
	}
	var_535_bool = 0; var_536_object = Obj(); var_537_string = "";
	var_513_object = var_536_object;
	func_4695(var_535_bool, var_536_object, "armor");
	var_538_bool = var_535_bool == 0; //@nz
	if(var_538_bool != 0) {
		var_525_int = 0;
	} else {
			@@var_513_object:GetProperty("armor", var_525_int);
	}
	var_540_string = ""; var_541_int = 0;
	var_515_int = var_541_int;
	func_4661(var_540_string, var_541_int);
	var_526_string = "armor_" + var_540_string;
	var_546_bool = 0; var_547_object = Obj(); var_548_string = "";
	var_513_object = var_547_object;
	var_526_string = var_548_string;
	func_4695(var_546_bool, var_547_object, var_548_string);
	var_549_bool = var_546_bool == 0; //@nz
	if(var_549_bool != 0) {
		var_527_int = 0;
	} else {
		@@var_513_object:GetProperty(var_526_string, var_527_int);

	}
	var_550_float = 0; var_551_float = 0; var_552_float = 0;
	var_553_int = var_525_int + var_527_int;
	var_551_float = var_553_int / (float)100.0;
	func_5252(var_550_float, var_551_float, (float)1);
	var_550_float = var_528_float;
	@@var_513_object:GetProperty("health", var_529_float);
	var_558_int = (int)1 - var_528_float;
	var_530_float = var_514_float * var_558_int;
	var_560_float = 0; var_561_float = 0; var_562_float = 0; var_563_float = 0;
	var_561_float = var_529_float - var_530_float;
	func_5259(var_560_float, var_561_float, (float)0, (float)1);
	@@var_513_object:SetProperty("health", var_560_float);
	var_566_bool = 0; var_567_object = Obj();
	var_513_object = var_567_object;
	func_4690(var_566_bool, var_567_object);
	if(var_566_bool != 0) {
		var_568_float = 0;
		var_568_float = -var_530_float;
		func_5316(var_568_float);
	}
	var_530_float = var_512_float;
	return 12;
	
}


func_3175(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_4203(var_0_bool, var_404_bool, var_405_float)
{
	var_406_bool = 0; var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_float = 0; var_411_bool = 0; var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_float = 0;
	
Label_4204:
	IsAnimationPlaying(var_411_bool);
	var_416_bool = var_411_bool == 0; //@nz
	if(var_416_bool != 0) {
	} else {
		var_417_bool = 0;
		func_4274(var_417_bool);
		if(var_417_bool != 0) {
			var_404_bool = 1;
			return 10;
		}
		var_456_bool = 0; var_457_object = Obj();
		var_457_object = var_0_bool;
		func_4821(var_456_bool, var_457_object);
		var_458_bool = var_456_bool == 0; //@nz
		if(var_458_bool != 0) {
			var_404_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_412_cvector);
		GetPFPosition(var_413_cvector);
		var_414_cvector = var_412_cvector - var_413_cvector;
		var_415_float = var_414_cvector | var_414_cvector;
		var_459_float = var_405_float * var_405_float;
		var_460_bool = var_415_float < var_459_float;
		if(var_460_bool != 0) {
			var_461_bool = 0; var_462_float = 0;
			var_405_float = var_462_float;
			func_4039(var_414_cvector, var_415_float, var_461_bool, var_462_float);
			var_404_bool = 1;
			sync();
			goto Label_4204;
		}
		return 10;
	}
	func_4378(var_415_float);
	var_404_bool = 0;
	return 10;
	
}


func_3182(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_2672(var_21_object)
{
	EventDisable(0);
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_2705(var_22_object);
	var_102_object = Obj();
	var_21_object = var_102_object;
	func_6295(var_102_object);
	EventEnable(0);
	
Label_2683:
	Hold();
	goto Label_2683;
}
EMIT "Return(); Pop(0)";


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_116_object, var_117_object)
{
	var_0_bool = var_117_object;
	var_1_object = var_116_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_123_bool = 0; var_124_object = Obj();
		var_124_object = var_1_object;
		func_5391(var_124_object);
		if(var_123_bool != 0) {
			var_131_string = "";
			func_528(var_117_object, "Neutral");
			@@@var_0_bool:SetMessage((int)543012);
			@@@var_0_bool:ClearReplies();
			var_149_bool = 0; var_150_object = Obj();
			var_150_object = var_1_object;
			func_5413(var_149_bool, var_150_object);
			if(var_149_bool != 0) {
				@@@var_0_bool:AddReply((int)543015, (int)45468, (int)45467);
			}
			var_163_bool = 0; var_164_object = Obj();
			var_164_object = var_1_object;
			func_5423(var_163_bool, var_164_object);
			if(var_163_bool != 0) {
				@@@var_0_bool:AddReply((int)543022, (int)45475, (int)45474);
			}
			var_172_bool = 0;
			var_172_bool = 1;
			var_173_bool = 0;
			var_173_bool = 1;
			var_174_bool = 0; var_175_object = Obj();
			var_175_object = var_1_object;
			func_5433(var_174_bool, var_175_object);
			if(var_174_bool != 1) {
				var_180_bool = 0; var_181_object = Obj();
				var_181_object = var_1_object;
				func_5443(var_180_bool, var_181_object);
				if(var_180_bool != 1) {
					var_173_bool = 0;
				}
			}
			if(var_173_bool != 1) {
				var_186_bool = 0; var_187_object = Obj();
				var_187_object = var_1_object;
				func_5453(var_186_bool, var_187_object);
				if(var_186_bool != 1) {
					var_172_bool = 0;
				}
			}
			if(var_172_bool != 0) {
				@@@var_0_bool:AddReply((int)543026, (int)45480, (int)45478);
			}
			var_195_bool = 0;
			var_195_bool = 1;
			var_196_bool = 0; var_197_object = Obj();
			var_197_object = var_1_object;
			func_5463(var_196_bool, var_197_object);
			if(var_196_bool != 1) {
				var_202_bool = 0; var_203_object = Obj();
				var_203_object = var_1_object;
				func_5473(var_202_bool, var_203_object);
				if(var_202_bool != 1) {
					var_195_bool = 0;
				}
			}
			if(var_195_bool != 0) {
				@@@var_0_bool:AddReply((int)543034, (int)45487, (int)45486);
			}
			@@@var_0_bool:AddReply((int)536643, (int)-1, (int)38471);
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_5413(var_214_bool, var_215_object);
			if(var_214_bool != 0) {
				@@@var_0_bool:AddReply((int)543014, (int)-1, (int)45466);
			}
			var_219_bool = 0; var_220_object = Obj();
			var_220_object = var_1_object;
			func_5413(var_219_bool, var_220_object);
			var_221_bool = var_219_bool == 0; //@nz
			if(var_221_bool != 0) {
				@@@var_0_bool:AddReply((int)543027, (int)-1, (int)45479);
			}
			@@@var_0_bool:AddReply((int)536852, (int)-1, (int)38688);
		} else {
				var_246_string = "";
				func_528(var_117_object, "Neutral");
				@@@var_0_bool:SetMessage((int)536636);
				@@@var_0_bool:ClearReplies();
				var_248_bool = 0;
				var_248_bool = 0;
				var_249_bool = 0; var_250_object = Obj();
				var_250_object = var_1_object;
				func_5367(var_250_object);
				if(var_249_bool != 0) {
					var_255_bool = 0; var_256_object = Obj();
					var_256_object = var_1_object;
					func_5403(var_255_bool, var_256_object);
					if(var_255_bool != 0) {
						var_248_bool = 1;
					}
				}
				if(var_248_bool != 0) {
					@@@var_0_bool:AddReply((int)536638, (int)-1, (int)38466);
				}
				var_264_bool = 0;
				var_264_bool = 0;
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_5367(var_266_object);
				if(var_265_bool != 0) {
					var_267_bool = 0; var_268_object = Obj();
					var_268_object = var_1_object;
					func_5403(var_267_bool, var_268_object);
					var_269_bool = var_267_bool == 0; //@nz
					if(var_269_bool != 0) {
						var_264_bool = 1;
					}
				}
				if(var_264_bool != 0) {
					@@@var_0_bool:AddReply((int)536644, (int)-1, (int)38472);
				}
				var_273_bool = 0;
				var_273_bool = 0;
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_5379(var_275_object);
				if(var_274_bool != 0) {
					var_280_bool = 0; var_281_object = Obj();
					var_281_object = var_1_object;
					func_5403(var_280_bool, var_281_object);
					if(var_280_bool != 0) {
						var_273_bool = 1;
					}
				}
				if(var_273_bool != 0) {
					@@@var_0_bool:AddReply((int)536639, (int)38468, (int)38467);
				}
				var_285_bool = 0;
				var_285_bool = 0;
				var_286_bool = 0; var_287_object = Obj();
				var_287_object = var_1_object;
				func_5379(var_287_object);
				if(var_286_bool != 0) {
					var_288_bool = 0; var_289_object = Obj();
					var_289_object = var_1_object;
					func_5403(var_288_bool, var_289_object);
					var_290_bool = var_288_bool == 0; //@nz
					if(var_290_bool != 0) {
						var_285_bool = 1;
					}
				}
				if(var_285_bool != 0) {
					@@@var_0_bool:AddReply((int)536642, (int)-1, (int)38470);
				}
				var_294_bool = 0;
				var_294_bool = 0;
				var_295_bool = 0; var_296_object = Obj();
				var_296_object = var_1_object;
				func_5413(var_295_bool, var_296_object);
				if(var_295_bool != 0) {
					var_297_bool = 0; var_298_object = Obj();
					var_298_object = var_1_object;
					func_5367(var_298_object);
					if(var_297_bool != 0) {
						var_294_bool = 1;
					}
				}
				if(var_294_bool != 0) {
					@@@var_0_bool:AddReply((int)536645, (int)38474, (int)38473);
				}
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_5423(var_302_bool, var_303_object);
				if(var_302_bool != 0) {
					@@@var_0_bool:AddReply((int)536663, (int)38493, (int)38492);
				}
				var_307_bool = 0; var_308_object = Obj();
				var_308_object = var_1_object;
				func_5433(var_307_bool, var_308_object);
				if(var_307_bool != 0) {
					@@@var_0_bool:AddReply((int)536685, (int)38517, (int)38516);
				}
				var_312_bool = 0;
				var_312_bool = 0;
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_5443(var_313_bool, var_314_object);
				if(var_313_bool != 0) {
					var_315_bool = 0; var_316_object = Obj();
					var_316_object = var_1_object;
					func_5367(var_316_object);
					if(var_315_bool != 0) {
						var_312_bool = 1;
					}
				}
				if(var_312_bool != 0) {
					@@@var_0_bool:AddReply((int)536710, (int)38542, (int)38541);
				}
				var_320_bool = 0; var_321_object = Obj();
				var_321_object = var_1_object;
				func_5453(var_320_bool, var_321_object);
				if(var_320_bool != 0) {
					@@@var_0_bool:AddReply((int)536747, (int)38579, (int)38578);
				}
				var_325_bool = 0;
				var_325_bool = 0;
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_5463(var_326_bool, var_327_object);
				if(var_326_bool != 0) {
					var_328_bool = 0; var_329_object = Obj();
					var_329_object = var_1_object;
					func_5367(var_329_object);
					if(var_328_bool != 0) {
						var_325_bool = 1;
					}
				}
				if(var_325_bool != 0) {
					@@@var_0_bool:AddReply((int)536769, (int)38602, (int)38601);
				}
				var_333_bool = 0; var_334_object = Obj();
				var_334_object = var_1_object;
				func_5473(var_333_bool, var_334_object);
				if(var_333_bool != 0) {
					@@@var_0_bool:AddReply((int)536782, (int)38617, (int)38616);
				}
				var_338_bool = 0;
				var_338_bool = 0;
				var_339_bool = 0; var_340_object = Obj();
				var_340_object = var_1_object;
				func_5483(var_339_bool, var_340_object);
				if(var_339_bool != 0) {
					var_345_bool = 0; var_346_object = Obj();
					var_346_object = var_1_object;
					func_5367(var_346_object);
					if(var_345_bool != 0) {
						var_338_bool = 1;
					}
				}
				if(var_338_bool != 0) {
					@@@var_0_bool:AddReply((int)536792, (int)38627, (int)38626);
				}
				var_350_bool = 0; var_351_object = Obj();
				var_351_object = var_1_object;
				func_5493(var_350_bool, var_351_object);
				if(var_350_bool != 0) {
					@@@var_0_bool:AddReply((int)536814, (int)38651, (int)38650);
				}
				var_359_bool = 0;
				var_359_bool = 0;
				var_360_bool = 0; var_361_object = Obj();
				var_361_object = var_1_object;
				func_5503(var_360_bool, var_361_object);
				if(var_360_bool != 0) {
					var_366_bool = 0; var_367_object = Obj();
					var_367_object = var_1_object;
					func_5367(var_367_object);
					if(var_366_bool != 0) {
						var_359_bool = 1;
					}
				}
				if(var_359_bool != 0) {
					@@@var_0_bool:AddReply((int)536833, (int)38670, (int)38669);
				}
				var_371_bool = 0; var_372_object = Obj();
				var_372_object = var_1_object;
				func_5513(var_371_bool, var_372_object);
				if(var_371_bool != 0) {
					@@@var_0_bool:AddReply((int)536843, (int)38680, (int)38679);
				}
				var_380_bool = 0; var_381_object = Obj();
				var_381_object = var_1_object;
				func_5367(var_381_object);
				if(var_380_bool != 0) {
					@@@var_0_bool:AddReply((int)536850, (int)-1, (int)38686);
				}
				var_385_bool = 0; var_386_object = Obj();
				var_386_object = var_1_object;
				func_5379(var_386_object);
				if(var_385_bool != 0) {
					@@@var_0_bool:AddReply((int)536851, (int)-1, (int)38687);
				}
				goto Label_498;
		}
	}
Label_498:
	var_228_bool = 0;
	func_6231(var_228_bool);
	if(var_228_bool != 0) {

	Label_502:
		lshWaitForAnimEnd();
		var_229_object = var_3_object;
		if(var_229_object != 0) {
		} else {
			var_230_string = "";
			var_230_string = var_2_object;
			func_5135(var_230_string);
			goto Label_502;
	}
		PlayAnimation("all", "idle");

	Label_517:
		WaitForAnimEnd();
		var_243_object = var_3_object;
		if(var_243_object != 0) {
			goto Label_527;
		}
		PlayAnimation("all", "idle");
		goto Label_517;

	}
	goto Label_527;
	
Label_527:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


func_5236(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj();
	self(var_109_object);
	var_109_object = var_107_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3189(var_67_bool)
{
	var_67_bool = 0;
	return 0;
}


func_3191(var_61_object, var_62_cvector)
{
	var_63_object = Obj(); var_64_object = Obj();
	FindShiftedPathTo(var_64_object, var_62_cvector);
	var_64_object = var_61_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5242(var_51_cvector, var_52_cvector)
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


func_5755()
{
	var_21_bool = 0; var_22_bool = 0;
	ClearSubContainer((int)0);
	var_24_string = ""; var_25_int = 0; var_26_int = 0;
	func_5184("tourniquet", (int)1, (int)4);
	var_35_string = ""; var_36_int = 0; var_37_int = 0;
	func_5184("bandage", (int)1, (int)2);
	return 2;
}


func_5252(var_550_float, var_551_float, var_552_float)
{
	var_555_bool = var_551_float < var_552_float;
	if(var_555_bool != 0) {
		var_551_float = var_550_float;
	} else {
		var_552_float = var_550_float;
	}
	return 0;
	
}


func_6280(var_64_bool)
{
	var_64_bool = 0;
	return 0;
}


func_5624(var_163_int)
{
	var_164_int = 0; var_165_int = 0;
	GetVariable("branch", var_165_int);
	var_165_int = var_163_int;
	return 2;
}


func_3722(var_183_object)
{
	var_190_object = Obj(); var_191_bool = 0; var_192_float = 0;
	var_183_object = var_190_object;
	func_3736(var_186_int, var_187_bool, var_188_float, var_189_int, var_183_object, var_190_object, (bool)1, (float)180.0);
	return 0;
}


func_5259(var_560_float, var_561_float, var_562_float, var_563_float)
{
	var_564_bool = var_561_float < var_562_float;
	if(var_564_bool != 0) {
		var_562_float = var_560_float;
		return 0;
	}
	var_565_bool = var_561_float > var_563_float;
	if(var_565_bool != 0) {
		var_563_float = var_560_float;
		return 0;
	}
	var_561_float = var_560_float;
	return 0;
}


func_5772(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0;
	GetInvItemByName(var_139_int, var_137_string);
	var_139_int = var_136_int;
	return 2;
}


func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool)
{
	var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_float = 0; var_32_bool = 0;
	var_25_object = var_29_object;
	var_26_object = var_30_object;
	var_27_bool = var_32_bool;
	func_6097(var_28_bool, var_29_object, var_30_object, (float)700.0, var_32_bool);
	var_28_bool = var_24_bool;
	return 0;
}


func_6282(var_171_bool)
{
	var_171_bool = 1;
	return 0;
}


func_2705(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0);
	var_43_bool = var_22_object == 0; //@ne
	if(var_43_bool != 0) {
		var_44_string = "";
		func_2796("fdie");
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
		func_5195(var_97_string);
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


func_3730(var_509_float)
{
	var_509_float = 0.05000000074505806;
	return 0;
}


func_5777(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	TaskCall(3);
	func_2672(var_21_object);
	TaskReturn();
	return 0;
}


func_3733(var_516_int)
{
	var_516_int = 0;
	return 0;
}


func_4246(var_0_bool, var_419_bool)
{
	var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_float = 0; var_424_float = 0; var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); var_428_float = 0; var_429_float = 0;
	var_430_bool = 0; var_431_object = Obj();
	var_431_object = var_0_bool;
	func_4821(var_430_bool, var_431_object);
	var_432_bool = var_430_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_419_bool = 0;
		return 10;
	}
	var_433_bool = 0;
	func_4335(var_429_float, var_433_bool);
	if(var_433_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_425_cvector);
		GetPFPosition(var_426_cvector);
		var_427_cvector = var_425_cvector - var_426_cvector;
		var_428_float = var_427_cvector | var_427_cvector;
		@@@var_0_bool:GetAttackDistance(var_429_float);
		var_429_float = var_429_float + (int)50;
		var_435_float = var_429_float * var_429_float;
		var_419_bool = var_428_float <= var_435_float;
		return 10;
	}
	var_419_bool = 0;
	return 10;
}


func_6295(var_102_object)
{
	var_103_bool = 0; var_104_object = Obj();
	var_102_object = var_104_object;
	func_4690(var_103_bool, var_104_object);
	if(var_103_bool != 0) {
		var_107_object = Obj();
		func_5236(var_107_object);
		ReportReputationChange(var_102_object, var_107_object, (float)-0.029999999329447746, (bool)1);
		func_5715();
	}
	func_5691();
	var_183_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_3736(var_0_bool, var_3_object, var_5_bool, var_190_object, var_191_bool, var_192_float, var_267_bool, var_353_bool)
{
	var_193_float = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_bool = 0; var_198_float = 0; var_199_cvector = CVector(0,0,0); var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_bool = 0; var_203_float = 0; var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_bool = 0; var_208_bool = 0; var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_float = 0;
	func_3965(var_212_cvector, var_213_bool, var_214_float);
	var_5_bool = 0;
	var_239_bool = IsFuncExist(var_190_object, "@GetAttackDistance", (int)1);
	if(var_239_bool != 0) {
		@@var_190_object:GetAttackDistance(var_204_float);
		var_204_float = var_204_float + (int)50;
	} else {
							var_192_float = var_204_float;
	}
	var_242_bool = var_204_float >= (int)150;
	if(var_242_bool != 0) {
		var_204_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_190_object;
	IsPlayerActor(var_0_bool, var_207_bool);
	var_243_bool = var_207_bool;
	if(var_243_bool != 0) {
		PlayGlobalMusic("attack");
		var_245_object = Obj();
		func_5236(var_245_object);
		SendPlayerEnemy(var_190_object, var_245_object);
	}
	var_248_bool = var_191_bool;
	if(var_248_bool != 0) {
		var_208_bool = 0;
	} else {
						var_208_bool = 1;

	}
	var_209_float = (float)400.0 + var_204_float;
	
Label_3776:
	var_250_bool = 0;
	var_250_bool = 0;
	var_251_bool = 0; var_252_object = Obj();
	var_252_object = var_0_bool;
	func_4821(var_251_bool, var_252_object);
	if(var_251_bool != 0) {
		var_253_bool = var_3_object == 0; //@nz
		if(var_253_bool != 0) {
			var_250_bool = 1;
		}
	}
	if(var_250_bool != 0) {
		func_4378(var_214_float);
		@@@var_0_bool:GetPFPosition(var_205_cvector);
		GetPFPosition(var_206_cvector);
		var_210_cvector = var_205_cvector - var_206_cvector;
		var_211_float = var_210_cvector | var_210_cvector;
		var_259_float = var_209_float * var_209_float;
		var_260_bool = var_211_float >= var_259_float;
		if(var_260_bool != 0) {
			var_261_bool = 0; var_262_object = Obj(); var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_bool = 0;
			var_262_object = var_0_bool;
			var_204_float = var_263_float;
			TaskCall(8);
			func_4405(var_269_bool, var_261_bool, var_262_object, var_263_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_338_bool = var_267_bool == 0; //@nz
			if(var_338_bool != 0) {
			} else {
				var_208_bool = 0;
		} else {
				var_344_float = var_192_float * var_192_float;
				var_345_bool = var_211_float >= var_344_float;
				if(var_345_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_212_cvector);
					CanReachByPF(var_213_bool, var_212_cvector);
					var_346_bool = var_213_bool == 0; //@nz
					if(var_346_bool != 0) {
						var_347_bool = 0; var_348_object = Obj(); var_349_float = 0; var_350_float = 0; var_351_bool = 0; var_352_bool = 0;
						var_348_object = var_0_bool;
						var_204_float = var_349_float;
						TaskCall(8);
						func_4405(var_355_bool, var_347_bool, var_348_object, var_349_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_356_bool = var_353_bool == 0; //@nz
						if(var_356_bool != 0) {
							goto Label_3948;
						}
						var_208_bool = 0;
						goto Label_3776;
					}
					var_357_bool = var_208_bool == 0; //@nz
					if(var_357_bool != 0) {
						var_358_object = Obj();
						var_358_object = var_0_bool;
						func_4971(var_358_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_4378(var_214_float);
						StopAsync();
						var_208_bool = 1;
						var_361_bool = 0; var_362_object = Obj();
						var_362_object = var_0_bool;
						func_4821(var_361_bool, var_362_object);
						var_363_bool = var_361_bool == 0; //@nz
						if(var_363_bool != 0) {
							goto Label_3948;
						}
					}
					rand(var_214_float);
					var_364_bool = 0;
					var_366_bool = var_214_float < (float)0.25;
					if(var_366_bool != 1) {
						var_367_bool = 0;
						func_4335((bool)1, var_367_bool);
						if(var_367_bool != 1) {
							var_364_bool = 0;
						}
					}
					if(var_364_bool != 0) {
						Face(var_0_bool);
						func_4385();
						PlayAnimation("all", "attack_stay");
						var_404_bool = 0; var_405_float = 0;
						var_192_float = var_405_float;
						func_4203(var_214_float, var_404_bool, var_405_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_4378(var_214_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_622_bool = 0;
						func_4335(var_214_float, var_622_bool);
						var_623_bool = var_622_bool == 0; //@nz
						if(var_623_bool == 0) goto Label_3938;
						var_624_bool = 0; var_625_object = Obj();
						var_625_object = var_0_bool;
						func_4821(var_624_bool, var_625_object);
						var_626_bool = var_624_bool == 0; //@nz
						if(var_626_bool != 0) {
							goto Label_3948;
						}
						@@@var_0_bool:GetPFPosition(var_205_cvector);
						GetPFPosition(var_206_cvector);
						var_210_cvector = var_205_cvector - var_206_cvector;
						var_211_float = var_210_cvector | var_210_cvector;
						var_627_float = var_192_float * var_192_float;
						var_628_bool = var_211_float < var_627_float;
						if(var_628_bool == 0) goto Label_3938;
						var_629_bool = 0; var_630_float = 0;
						var_192_float = var_630_float;
						func_4039(var_213_bool, var_214_float, var_629_bool, var_630_float);
						var_631_bool = var_629_bool == 0; //@nz
						if(var_631_bool == 0) goto Label_3938;
						goto Label_3948;
				}
					var_632_bool = 0; var_633_float = 0;
					var_192_float = var_633_float;
					func_4039(var_213_bool, var_214_float, var_632_bool, var_633_float);
					var_634_bool = var_632_bool == 0; //@nz
					if(var_634_bool != 0) {
						goto Label_3948;
					}
					var_208_bool = 1;

				}
			Label_3938:
				goto Label_3947;
		}
		Label_3947:
			goto Label_3776;

		}
	}
Label_3948:
	WaitForAnimEnd();
	var_339_object = var_3_object;
	if(var_339_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_342_bool = var_207_bool;
	if(var_342_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_5270(var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 0; var_33_int = 0;
	irand(var_33_int, var_31_int);
	var_29_bool = var_33_int < var_30_int;
	return 2;
}


func_5275(var_72_float, var_73_cvector, var_74_cvector)
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


func_5284(var_81_float, var_82_cvector)
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


func_4780(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	@@var_48_object:IsDead(var_50_bool);
	var_50_bool = var_47_bool;
	return 2;
}


func_5294(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_70_cvector = var_73_cvector;
	var_71_cvector = var_74_cvector;
	func_5275(var_72_float, var_73_cvector, var_74_cvector);
	var_81_float = 0; var_82_cvector = CVector(0,0,0);
	var_70_cvector = var_82_cvector;
	func_5284(var_81_float, var_82_cvector);
	var_90_float = 0; var_91_cvector = CVector(0,0,0);
	var_71_cvector = var_91_cvector;
	func_5284(var_90_float, var_91_cvector);
	var_92_float = var_81_float * var_90_float;
	var_69_float = var_72_float / var_92_float;
	return 0;
}


func_4785(var_36_bool, var_37_object)
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
		func_4780(var_47_bool, var_48_object);
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


func_4274(var_417_bool)
{
	var_418_bool = 0;
	var_418_bool = 0;
	var_419_bool = 0;
	func_4246(var_418_bool, var_419_bool);
	if(var_419_bool != 0) {
		var_436_bool = 0;
		func_4290(var_417_bool, var_418_bool, var_436_bool);
		if(var_436_bool != 0) {
			var_418_bool = 1;
		}
	}
	if(var_418_bool != 0) {
		var_417_bool = 1;
		return 0;
	}
	var_417_bool = 0;
	return 0;
}


func_5822(var_23_bool, var_24_object, var_25_string)
{
	var_27_bool = var_25_string == "unholster";
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_24_object = var_29_object;
		func_6187(var_29_object);
		var_28_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x16dc";
	}
	var_31_bool = var_25_string == "player_shot";
	if(var_31_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_24_object = var_33_object;
		func_6192(var_32_bool, var_33_object);
		var_32_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x16dc";
	}
	var_48_bool = var_25_string == "battle";
	if(var_48_bool != 0) {
		var_49_bool = 0; var_50_object = Obj();
		var_24_object = var_50_object;
		func_6213(var_50_object);
		var_49_bool = var_23_bool;
		return 0;
	}
	var_23_bool = 0;
	return 0;
}


func_5311(var_125_int, var_126_string)
{
	var_127_int = 0; var_128_int = 0;
	GetVariable(var_126_string, var_128_int);
	var_128_int = var_125_int;
	return 2;
}


func_4290(var_0_bool, var_4_string, var_436_bool)
{
	var_437_object = Obj(); var_438_bool = 0; var_439_float = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_object = Obj(); var_443_bool = 0; var_444_float = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0);
	GetScene(var_442_object);
	var_443_bool = 0;
	
Label_4294:
	var_447_cvector = CVector(0,0,0); var_448_object = Obj();
	var_448_object = var_0_bool;
	func_4675(var_447_cvector, var_448_object);
	var_449_int = -var_447_cvector;
	FindDirLength(var_444_float, var_449_int, var_4_string);
	var_450_bool = var_444_float < var_4_string;
	if(var_450_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_445_cvector);
		GetPFPosition(var_446_cvector);
		WaitForAnimEnd();
		func_4378(var_446_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_443_bool = 1;
		var_454_bool = 0;
		func_4246(var_446_cvector, var_454_bool);
		var_455_bool = var_454_bool == 0; //@nz
		if(var_455_bool != 0) {
			goto Label_4332;
		}
		goto Label_4294;
	}
Label_4332:
	var_443_bool = var_436_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_5316(var_568_float)
{
	var_569_object = Obj(); var_570_object = Obj();
	CreateFloatVector(var_570_object);
	@@var_570_object:add(var_568_float);
	var_572_bool = var_568_float < (int)0;
	if(var_572_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_570_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4821(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0;
	var_36_bool = 0; var_37_object = Obj();
	var_33_object = var_37_object;
	func_4785(var_36_bool, var_37_object);
	var_53_bool = var_36_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_54_bool = 0; var_55_object = Obj(); var_56_string = "";
	var_33_object = var_55_object;
	func_4695(var_54_bool, var_55_object, "noaccess");
	var_63_bool = var_54_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_32_bool = 1;
		return 2;
	}
	@@var_33_object:GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == (int)0;
	return 2;
}


func_5333(var_118_int)
{
	var_119_float = 0; var_120_float = 0;
	GetGameTime(var_120_float);
	var_122_int = 0;
	var_122_int = var_120_float / (int)24;
	var_118_int = (int)1 + var_122_int;
	return 2;
}


func_5854(var_53_object, var_54_string)
{
	var_56_bool = var_54_string == "unholster";
	if(var_56_bool != 0) {
		var_53_object = Obj();
		func_6190();
	} else {
		var_59_bool = var_54_string == "player_shot";
		if(var_59_bool != 0) {
			var_60_object = Obj();
			var_53_object = var_60_object;
			func_6207(var_60_object);
			goto Label_5878;
		}
		var_127_bool = var_54_string == "battle";
		if(var_127_bool == 0) goto Label_5878;
		var_53_object = Obj();
		func_6216();
	}
Label_5878:
	return 0;
	
}


func_5342(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	IsPlayerActor(var_22_object, var_24_bool);
	var_25_bool = var_24_bool;
	if(var_25_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_5351()
{
	var_473_object = Obj(); var_474_object = Obj();
	GetScene(var_474_object);
	var_476_object = Obj();
	func_5236(var_476_object);
	BroadcastMessage("battle", var_476_object, var_474_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2796(var_44_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_45_string = "";
	var_44_string = var_45_string;
	func_5195(var_45_string);
	PlayAnimation("all", var_44_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_44_string);
	RemoveEnvelope();
	return 0;
}


func_4845(var_36_object)
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


func_4335(var_0_bool, var_367_bool)
{
	var_368_bool = 0; var_369_bool = 0;
	var_372_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_372_bool != 0) {
		@@@var_0_bool:IsAttacking(var_369_bool);
		var_369_bool = var_367_bool;
		return 2;
	}
	var_367_bool = 0;
	return 2;
}


func_5362(var_26_object)
{
	@@var_26_object:SetReturnValue((int)1000);
	return 0;
}


func_5879(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = 0;
	var_24_bool = 0;
	var_25_bool = 0; var_26_object = Obj();
	var_21_object = var_26_object;
	func_6187(var_26_object);
	if(var_25_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_21_object = var_28_object;
		func_4690(var_27_bool, var_28_object);
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


func_5367(var_249_bool)
{
	var_251_int = 0; var_252_string = "";
	func_5311(var_251_int, "branch");
	var_254_bool = var_251_int == (int)0;
	if(var_254_bool != 0) {
		var_249_bool = 1;
		return 0;
	}
	var_249_bool = 0;
	return 0;
}


func_4346(var_2_object, var_5_bool)
{
	var_480_float = 0; var_481_int = 0; var_482_float = 0; var_483_int = 0;
	var_484_bool = var_2_object == 0; //@nz
	if(var_484_bool != 0) {
		return 4;
	}
	var_485_bool = var_5_bool;
	if(var_485_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_488_bool = var_5_bool > (int)0;
		if(var_488_bool != 0) {
			return 4;
		}
	}
	rand(var_482_float);
	var_489_float = 0;
	func_4396(var_489_float);
	var_490_bool = var_482_float < var_489_float;
	if(var_490_bool != 0) {
		irand(var_483_int, var_2_object);
		var_483_int = var_483_int + (int)1;
		var_493_int = "attack" + var_483_int;
		Speak(var_493_int);
		var_494_int = 0;
		func_4394(var_494_int);
		var_5_bool = var_494_int;
	}
	return 4;
}


func_5379(var_274_bool)
{
	var_276_int = 0; var_277_string = "";
	func_5311(var_276_int, "branch");
	var_279_bool = var_276_int == (int)1;
	if(var_279_bool != 0) {
		var_274_bool = 1;
		return 0;
	}
	var_274_bool = 0;
	return 0;
}


func_5902(var_34_object)
{
	var_34_object = Obj();
	func_6190();
	return 0;
}


func_5391(var_123_bool)
{
	var_125_int = 0; var_126_string = "";
	func_5311(var_125_int, "branch");
	var_130_bool = var_125_int == (int)2;
	if(var_130_bool != 0) {
		var_123_bool = 1;
		return 0;
	}
	var_123_bool = 0;
	return 0;
}


func_5908(var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_4690(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		var_27_object = Obj();
		func_5236(var_27_object);
		ReportReputationChange(var_22_object, var_27_object, (float)-0.019999999552965164);
	}
	return 0;
}


func_4889(var_23_object, var_24_int, var_25_float)
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
		func_4675(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_5242(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		CreateVectorVector(var_36_object);
		var_37_int = 1;

	Label_4918:
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
			goto Label_4918;
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
			func_4957(var_70_float, var_71_cvector, var_72_cvector);
			return 18;
		}
		var_36_object = 0;
	}
	var_113_object = Obj();
	var_23_object = var_113_object;
	func_4845(var_113_object);
	return 18;
	
}


func_4378(var_0_bool)
{
	var_254_object = Obj();
	var_254_object = var_0_bool;
	func_5342(var_254_object);
	return 0;
}


func_5403(var_255_bool, var_256_object)
{
	var_257_bool = 0; var_258_object = Obj();
	var_256_object = var_258_object;
	func_5523(var_258_object);
	if(var_257_bool != 0) {
		var_255_bool = 1;
		return 0;
	}
	var_255_bool = 0;
	return 0;
}


func_2843()
{
	var_38_bool = 0;
	func_4982(var_38_bool);
	var_41_bool = var_38_bool == 0; //@nz
	if(var_41_bool != 0) {
		func_6186();
	}
	return 0;
}


func_4383(var_577_int)
{
	var_577_int = 0;
	return 0;
}


func_5921(var_20_bool, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj();
	var_25_bool = var_21_string == "heal";
	if(var_25_bool != 0) {
		FindActor(var_23_object, "player");
		var_27_bool = 0; var_28_object = Obj();
		var_23_object = var_28_object;
		func_6218(var_28_object);
		var_27_bool = var_20_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_20_bool = 0;
	return 2;
}


func_3361()
{
	var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_int = 0; var_73_bool = 0; var_74_float = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_bool = 0; var_81_float = 0; var_82_bool = 0;
	WaitForAnimEnd();
	var_83_bool = 0;
	func_4982(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 14;
	}
	func_5957((int)0);
	var_85_int = var_76_int;
	var_77_int = 0;
	
Label_3375:
	var_98_bool = 0;
	var_98_bool = 0;
	var_100_bool = var_77_int < (int)5;
	if(var_100_bool != 0) {
		var_101_bool = 0;
		func_4982(var_101_bool);
		if(var_101_bool != 0) {
			var_98_bool = 1;
		}
	}
	if(var_98_bool != 0) {
		irand(var_78_int, (int)3);
		var_104_bool = var_78_int == (int)0;
		if(var_104_bool != 0) {
			var_105_int = var_76_int;
			if(var_105_int == 0) goto Label_3408;
			irand(var_79_int, var_76_int);
			var_107_string = ""; var_108_int = 0;
			var_79_int = var_108_int;
			func_5950(var_107_string, var_108_int);
			PlayAnimation("all", var_107_string);
			WaitForAnimEnd(var_80_bool);
			var_109_bool = var_80_bool == 0; //@nz
			if(var_109_bool != 0) {
			} else {
		} else {
				var_114_bool = var_78_int == (int)1;
				if(var_114_bool != 0) {
					rand(var_81_float, (int)4);
					var_117_int = var_81_float + (int)1;
					Sleep(var_117_int, var_82_bool);
					var_118_bool = var_82_bool == 0; //@nz
					if(var_118_bool != 0) {
						goto Label_3437;
					}
					goto Label_3426;
				}
				var_119_int = var_77_int;
				if(var_119_int == 0) goto Label_3426;
				goto Label_3437;
		}
		Label_3426:
			var_110_bool = 0;
			func_3440(var_110_bool);
			var_111_bool = var_110_bool == 0; //@nz
			if(var_111_bool != 0) {
				goto Label_3437;
			}
			ResetAAS();
			var_77_int = var_77_int + (int)1;
			goto Label_3375;

		}
	}
Label_3437:
	ResetAAS();
	return 14;
	
}


func_4385()
{
	var_373_string = "";
	func_5195("attack_stay");
	return 0;
}


func_5413(var_149_bool, var_150_object)
{
	var_151_bool = 0; var_152_object = Obj();
	var_150_object = var_152_object;
	func_5530(var_152_object);
	if(var_151_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_4390()
{
	return 0;
}


func_4392(var_602_bool)
{
	var_602_bool = 1;
	return 0;
}


func_4394(var_494_int)
{
	var_494_int = 1;
	return 0;
}


func_4396(var_489_float)
{
	var_489_float = 0.5;
	return 0;
}


func_5423(var_163_bool, var_164_object)
{
	var_165_bool = 0; var_166_object = Obj();
	var_164_object = var_166_object;
	func_5537(var_166_object);
	if(var_165_bool != 0) {
		var_163_bool = 1;
		return 0;
	}
	var_163_bool = 0;
	return 0;
}


func_5937(var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj();
	var_35_bool = var_31_string == "heal";
	if(var_35_bool != 0) {
		FindActor(var_33_object, "player");
		var_33_object = Obj();
		func_6221();
		var_33_object = 0;
	}
	return 2;
}


func_4405(var_2_object, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool)
{
	var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; var_273_bool = 0;
	var_274_object = Obj();
	var_262_object = var_274_object;
	func_5342(var_274_object);
	SetTimer((int)1, (int)5);
	CanSee(var_272_bool, var_262_object);
	var_277_bool = var_272_bool;
	if(var_277_bool != 0) {
		var_2_object = true;
		var_278_object = Obj();
		var_262_object = var_278_object;
		func_5166(var_278_object);
	} else {
		var_2_object = false;
	}
	var_279_bool = 0; var_280_object = Obj();
	var_262_object = var_280_object;
	func_4690(var_279_bool, var_280_object);
	if(var_279_bool != 0) {
		var_283_object = Obj();
		func_5236(var_283_object);
		SendPlayerEnemy(var_262_object, var_283_object);
	}
	var_284_bool = 0; var_285_object = Obj(); var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_bool = 0;
	var_262_object = var_285_object;
	var_263_float = var_286_float;
	var_264_float = var_287_float;
	var_265_bool = var_288_bool;
	var_266_bool = var_289_bool;
	func_4510(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool);
	var_284_bool = var_273_bool;
	var_335_object = var_2_object;
	if(var_335_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_273_bool = var_261_bool;
	return 4;
	
}


func_5433(var_174_bool, var_175_object)
{
	var_176_bool = 0; var_177_object = Obj();
	var_175_object = var_177_object;
	func_5544(var_177_object);
	if(var_176_bool != 0) {
		var_174_bool = 1;
		return 0;
	}
	var_174_bool = 0;
	return 0;
}


func_5950(var_91_string, var_92_int)
{
	var_93_string = ""; var_94_string = "";
	var_95_int = var_92_int;
	if(var_95_int != 0) {
		"idle" = "idle" + var_92_int;
	}
	var_94_string = var_91_string;
	return 2;
}


func_5443(var_180_bool, var_181_object)
{
	var_182_bool = 0; var_183_object = Obj();
	var_181_object = var_183_object;
	func_5551(var_183_object);
	if(var_182_bool != 0) {
		var_180_bool = 1;
		return 0;
	}
	var_180_bool = 0;
	return 0;
}


func_5957(var_85_int)
{
	var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_bool = 0;
	var_88_int = 0;
	
Label_5959:
	var_91_string = ""; var_92_int = 0;
	var_88_int = var_92_int;
	func_5950(var_91_string, var_92_int);
	HasAnimation(var_89_bool, "all", var_91_string);
	var_96_bool = var_89_bool == 0; //@nz
	if(var_96_bool != 0) {
	} else {
		var_88_int = var_88_int + (int)1;
		goto Label_5959;
	}
	var_88_int = var_85_int;
	return 4;
	
}


func_5453(var_186_bool, var_187_object)
{
	var_188_bool = 0; var_189_object = Obj();
	var_187_object = var_189_object;
	func_5558(var_189_object);
	if(var_188_bool != 0) {
		var_186_bool = 1;
		return 0;
	}
	var_186_bool = 0;
	return 0;
}


func_5974(var_62_int)
{
	var_64_bool = 0;
	func_6280(var_64_bool);
	if(var_64_bool != 0) {
		var_62_int = 2;
	} else {
		var_62_int = 0;
	}
	return 0;
	
}


func_5463(var_196_bool, var_197_object)
{
	var_198_bool = 0; var_199_object = Obj();
	var_197_object = var_199_object;
	func_5565(var_199_object);
	if(var_198_bool != 0) {
		var_196_bool = 1;
		return 0;
	}
	var_196_bool = 0;
	return 0;
}


func_4957(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	GetScene(var_32_object);
	AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	var_36_object = Obj();
	var_25_object = var_36_object;
	func_4845(var_36_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5983(var_61_object)
{
	var_62_object = Obj();
	var_61_object = var_62_object;
	TaskCall(6);
	func_3447(var_63_object, var_62_object);
	TaskReturn();
	return 0;
}


func_5473(var_202_bool, var_203_object)
{
	var_204_bool = 0; var_205_object = Obj();
	var_203_object = var_205_object;
	func_5572(var_205_object);
	if(var_204_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_5991(var_89_int, var_90_object)
{
	var_91_bool = 0; var_92_object = Obj();
	var_90_object = var_92_object;
	func_4821(var_91_bool, var_92_object);
	if(var_91_bool != 0) {
		var_89_int = 2;
	} else {
		var_89_int = 0;
	}
	return 0;
	
}


func_5483(var_339_bool, var_340_object)
{
	var_341_bool = 0; var_342_object = Obj();
	var_340_object = var_342_object;
	func_5579(var_342_object);
	if(var_341_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_4971(var_95_object)
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


func_3440(var_110_bool)
{
	var_110_bool = 1;
	return 0;
}


func_6001(var_182_object)
{
	var_183_object = Obj();
	var_182_object = var_183_object;
	TaskCall(7);
	func_3722(var_183_object);
	TaskReturn();
	return 0;
}


func_3442()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4468(var_2_object)
{
	KillTimer((int)1);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_4634(var_19_object);
	return 0;
}


func_5493(var_350_bool, var_351_object)
{
	var_352_bool = 0; var_353_object = Obj();
	var_351_object = var_353_object;
	func_5586(var_353_object);
	if(var_352_bool != 0) {
		var_350_bool = 1;
		return 0;
	}
	var_350_bool = 0;
	return 0;
}


func_4982(var_38_bool)
{
	var_39_bool = 0; var_40_bool = 0;
	IsLoaded(var_40_bool);
	var_40_bool = var_38_bool;
	return 2;
}


func_3447(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0;
	var_0_bool = var_62_object;
	func_3498(var_69_bool);
	GetDirection(var_67_cvector);
	var_77_cvector = CVector(0,0,0); var_78_object = Obj();
	var_78_object = var_0_bool;
	func_4675(var_77_cvector, var_78_object);
	var_77_cvector = var_68_cvector;
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_5294(var_83_float, var_84_cvector, var_85_cvector);
	var_108_bool = var_83_float < (int)0;
	if(var_108_bool != 0) {
		var_109_object = Obj();
		var_109_object = var_0_bool;
		func_4971(var_109_object);
		var_69_bool = 1;
	} else {
		Sleep((float)1.5, var_69_bool);
	}
	var_118_bool = var_69_bool;
	if(var_118_bool != 0) {
		var_119_object = Obj();
		var_119_object = var_0_bool;
		func_4971(var_119_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_6009(var_35_bool, var_36_object, var_37_bool)
{
	var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = "";
	var_42_bool = 0; var_43_object = Obj(); var_44_string = "";
	var_36_object = var_43_object;
	func_4695(var_42_bool, var_43_object, "class");
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
	EMIT "GOTO 0x17c2";
	}
	var_60_bool = var_41_string == "rat_big";
	if(var_60_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	var_62_bool = var_41_string == "dog";
	if(var_62_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	var_64_bool = var_41_string == "grabitel";
	if(var_64_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	var_66_bool = var_41_string == "bomber";
	if(var_66_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	var_68_bool = var_41_string == "sanitar";
	if(var_68_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	var_70_bool = var_41_string == "hunter";
	if(var_70_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x17c2";
	}
	var_72_bool = var_41_string == "soldier";
	if(var_72_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_35_bool = 1;
	return 4;
}


func_4987(var_55_bool, var_56_object, var_57_float)
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
	func_5242(var_82_cvector, var_83_cvector);
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
	func_6231(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		HasAnimationTrack(var_75_bool, "head");
		var_100_bool = var_75_bool;
		if(var_100_bool == 0) goto Label_5050;
		LookAsyncCamera("head");
	}
Label_5050:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_55_bool = 1;
	return 18;
	
}


func_3965(var_1_object, var_2_object, var_4_string)
{
	var_215_bool = 0; var_216_bool = 0; var_217_cvector = CVector(0,0,0); var_218_bool = 0; var_219_bool = 0; var_220_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_3967:
	var_224_int = var_1_object + (int)1;
	var_225_int = "attack_begin" + var_224_int;
	HasAnimation(var_218_bool, "all", var_225_int);
	var_226_bool = var_218_bool == 0; //@nz
	if(var_226_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_3967;
	}
	var_2_object = 0;
	
Label_3981:
	var_229_int = var_2_object + (int)1;
	var_230_int = "attack" + var_229_int;
	IsExisting3DSound(var_219_bool, var_230_int);
	var_231_bool = var_219_bool == 0; //@nz
	if(var_231_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_3981;

	}
	GetAnimationOffset(var_220_cvector, "all", "bjump");
	var_234_float = GetByIndex(var_220_cvector, 2);
	var_4_string = -var_234_float;
	return 6;
	
}


func_5503(var_360_bool, var_361_object)
{
	var_362_bool = 0; var_363_object = Obj();
	var_361_object = var_363_object;
	func_5593(var_363_object);
	if(var_362_bool != 0) {
		var_360_bool = 1;
		return 0;
	}
	var_360_bool = 0;
	return 0;
}


func_5513(var_371_bool, var_372_object)
{
	var_373_bool = 0; var_374_object = Obj();
	var_372_object = var_374_object;
	func_5600(var_374_object);
	if(var_373_bool != 0) {
		var_371_bool = 1;
		return 0;
	}
	var_371_bool = 0;
	return 0;
}


func_5523(var_257_bool)
{
	var_259_int = 0;
	func_5333(var_259_int);
	var_257_bool = var_259_int <= (int)6;
	return 0;
}


func_5530(var_151_bool)
{
	var_153_int = 0;
	func_5333(var_153_int);
	var_151_bool = var_153_int == (int)1;
	return 0;
}


func_4510(var_0_bool, var_1_object, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool)
{
	var_290_bool = 0; var_291_bool = 0; var_292_object = Obj(); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_object = Obj(); var_298_bool = 0; var_299_bool = 0; var_300_object = Obj(); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_object = Obj();
	var_0_bool = false;
	var_1_object = var_285_object;
	var_289_bool = var_299_bool;
	
Label_4514:
	var_306_bool = 0; var_307_object = Obj();
	var_285_object = var_307_object;
	func_4650(var_306_bool, var_307_object);
	var_310_bool = var_306_bool == 0; //@nz
	if(var_310_bool != 0) {
		var_284_bool = 0;
		return 16;
	}
	@@var_285_object:GetPosition(var_301_cvector);
	GetPosition(var_302_cvector);
	var_303_cvector = var_301_cvector - var_302_cvector;
	var_304_float = var_303_cvector | var_303_cvector;
	var_311_bool = 0;
	var_311_bool = 0;
	var_313_bool = var_287_float > (int)0;
	if(var_313_bool != 0) {
		var_314_float = var_287_float * var_287_float;
		var_315_bool = var_304_float > var_314_float;
		if(var_315_bool != 0) {
			var_311_bool = 1;
		}
	}
	if(var_311_bool != 0) {
		Stop();
		var_284_bool = 0;
		return 16;
	}
	var_316_float = var_286_float * var_286_float;
	var_317_bool = var_304_float > var_316_float;
	if(var_317_bool != 0) {
		@@var_285_object:GetPFPosition(var_301_cvector);
		FindPathTo(var_305_object, var_301_cvector);
		var_318_bool = var_305_object != 0; //@nn
		if(var_318_bool != 0) {
			var_305_object = var_300_object;
			var_305_object = 0;
		}
		var_319_bool = var_300_object != 0; //@nn
		if(var_319_bool != 0) {
			var_320_bool = var_299_bool;
			if(var_320_bool == 0) goto Label_4563;
			var_299_bool = 0;
			RotatePath(var_300_object, var_298_bool);
			var_321_bool = var_298_bool == 0; //@nz
			if(var_321_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_324_string = "";
				func_4657(var_324_string);
				var_325_string = "";
				func_4659(var_325_string);
				FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string);
				var_326_bool = var_298_bool == 0; //@nz
				if(var_326_bool != 0) {
					var_327_bool = var_0_bool;
					if(var_327_bool != 0) {
						var_300_object = 0;
						goto Label_4610;
					EMIT "GOTO 0x11e7";
					}
				} else {
					var_300_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_298_bool);
					var_330_bool = var_298_bool == 0; //@nz
					if(var_330_bool != 0) {
						var_331_bool = var_0_bool;
						if(var_331_bool != 0) {
							var_300_object = 0;
							goto Label_4610;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_4610;
	}
			var_305_object = 0;
			goto Label_4608;

		Label_4608:
			var_300_object = 0;

		}
		goto Label_4514;
	}
Label_4610:
	var_284_bool = !var_0_bool;
	return 16;
	
}


func_4000(var_0_bool, var_498_float, var_499_int)
{
	var_500_object = Obj(); var_501_float = 0; var_502_float = 0; var_503_object = Obj(); var_504_float = 0; var_505_float = 0;
	var_507_float = var_498_float * (float)0.8999999761581421;
	GetVictim(var_507_float, var_503_object);
	ReportAttack(var_0_bool);
	var_508_bool = var_503_object == var_0_bool;
	if(var_508_bool != 0) {
		var_509_float = 0; var_510_object = Obj(); var_511_int = 0;
		var_503_object = var_510_object;
		var_499_int = var_511_int;
		func_3730(var_511_int);
		var_509_float = var_504_float;
		var_512_float = 0; var_513_object = Obj(); var_514_float = 0; var_515_int = 0;
		var_503_object = var_513_object;
		var_504_float = var_514_float;
		var_516_int = 0; var_517_object = Obj(); var_518_int = 0;
		var_503_object = var_517_object;
		var_499_int = var_518_int;
		func_3733(var_518_int);
		var_516_int = var_515_int;
		func_4707(var_512_float, var_513_object, var_514_float, var_515_int);
		var_512_float = var_505_float;
		var_577_int = 0;
		func_4383(var_577_int);
		ReportHit(var_0_bool, var_577_int, var_505_float, var_504_float);
		var_578_object = Obj(); var_579_float = 0;
		var_503_object = var_578_object;
		var_505_float = var_579_float;
		func_4390();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_5537(var_165_bool)
{
	var_167_int = 0;
	func_5333(var_167_int);
	var_165_bool = var_167_int == (int)2;
	return 0;
}


func_5544(var_176_bool)
{
	var_178_int = 0;
	func_5333(var_178_int);
	var_176_bool = var_178_int == (int)3;
	return 0;
}


func_3498(var_0_bool)
{
	var_70_object = Obj();
	var_70_object = var_0_bool;
	func_5166(var_70_object);
	return 0;
}


func_5551(var_182_bool)
{
	var_184_int = 0;
	func_5333(var_184_int);
	var_182_bool = var_184_int == (int)4;
	return 0;
}


func_5558(var_188_bool)
{
	var_190_int = 0;
	func_5333(var_190_int);
	var_188_bool = var_190_int == (int)5;
	return 0;
}


func_5565(var_198_bool)
{
	var_200_int = 0;
	func_5333(var_200_int);
	var_198_bool = var_200_int == (int)6;
	return 0;
}


func_5056()
{
	var_392_bool = 0; var_393_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_395_bool = 0;
	func_6231(var_395_bool);
	if(var_395_bool != 0) {
	} else {
		HasAnimationTrack(var_393_bool, "head");
		var_397_bool = var_393_bool;
		if(var_397_bool == 0) goto Label_5073;
		UnlookAsync("head");
	}
Label_5073:
	return 2;
	
}


func_6084(var_86_int, var_87_object)
{
	var_89_int = 0; var_90_object = Obj();
	var_87_object = var_90_object;
	func_5991(var_89_int, var_90_object);
	var_89_int = var_86_int;
	return 0;
}


func_5572(var_204_bool)
{
	var_206_int = 0;
	func_5333(var_206_int);
	var_204_bool = var_206_int == (int)7;
	return 0;
}


func_4039(var_0_bool, var_1_object, var_461_bool, var_462_float)
{
	var_463_int = 0; var_464_bool = 0; var_465_int = 0; var_466_string = ""; var_467_int = 0; var_468_bool = 0; var_469_int = 0; var_470_string = "";
	func_4378(var_470_string);
	irand(var_467_int, var_1_object);
	var_467_int = var_467_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_5351();
	var_479_int = "attack_begin" + var_467_int;
	PlayAnimation("all", var_479_int);
	WaitForAnimEnd();
	func_4346(var_469_int, var_470_string);
	var_495_bool = 0; var_496_object = Obj();
	var_496_object = var_0_bool;
	func_4821(var_495_bool, var_496_object);
	var_497_bool = var_495_bool == 0; //@nz
	if(var_497_bool != 0) {
		StopAsync();
		var_461_bool = 0;
		return 8;
	}
	var_498_float = 0; var_499_int = 0;
	var_462_float = var_498_float;
	var_467_int = var_499_int;
	func_4000(var_470_string, var_498_float, var_499_int);
	var_582_int = "attack_middle" + var_467_int;
	HasAnimation(var_468_bool, "all", var_582_int);
	var_583_bool = var_468_bool;
	if(var_583_bool != 0) {
		func_5351();
		var_586_int = "attack_middle" + var_467_int;
		PlayAnimation("all", var_586_int);
		WaitForAnimEnd();
		func_4378(var_470_string);
		var_587_bool = 0; var_588_object = Obj();
		var_588_object = var_0_bool;
		func_4821(var_587_bool, var_588_object);
		var_589_bool = var_587_bool == 0; //@nz
		if(var_589_bool != 0) {
			StopAsync();
			var_461_bool = 0;
			return 8;
		}
		var_590_float = 0; var_591_int = 0;
		var_462_float = var_590_float;
		var_467_int = var_591_int;
		func_4000(var_470_string, var_590_float, var_591_int);
		var_469_int = 1;

	Label_4116:
		var_593_int = "attack_middle" + var_467_int;
		var_595_int = var_593_int + "_";
		var_470_string = var_595_int + var_469_int;
		HasAnimation(var_468_bool, "all", var_470_string);
		var_597_bool = var_468_bool == 0; //@nz
		if(var_597_bool != 0) {
		} else {
			func_5351();
			PlayAnimation("all", var_470_string);
			WaitForAnimEnd();
			func_4378(var_470_string);
			var_613_bool = 0; var_614_object = Obj();
			var_614_object = var_0_bool;
			func_4821(var_613_bool, var_614_object);
			var_615_bool = var_613_bool == 0; //@nz
			if(var_615_bool != 0) {
				StopAsync();
				var_461_bool = 0;
				var_616_float = 0; var_617_int = 0;
				var_462_float = var_616_float;
				var_467_int = var_617_int;
				func_4000(var_470_string, var_616_float, var_617_int);
				var_469_int = var_469_int + (int)1;
				goto Label_4116;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_601_int = "attack_end" + var_467_int;
	PlayAnimation("all", var_601_int);
	var_602_bool = 0;
	func_4392(var_602_bool);
	if(var_602_bool != 0) {
		var_603_bool = 0; var_604_float = 0;
		func_4176(var_603_bool, (float)0.75);
		StopAsync();
	}
	var_461_bool = 1;
	return 8;
	
}


func_6091(var_125_object)
{
	var_126_object = Obj();
	var_125_object = var_126_object;
	func_6001(var_126_object);
	return 0;
}


func_5579(var_341_bool)
{
	var_343_int = 0;
	func_5333(var_343_int);
	var_341_bool = var_343_int == (int)8;
	return 0;
}


func_6097(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0;
	var_30_object = var_36_object;
	var_37_bool = !var_32_bool;
	func_6009(var_35_bool, var_36_object, var_37_bool);
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
		func_4682(var_76_float, var_77_object);
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


func_5586(var_352_bool)
{
	var_354_int = 0;
	func_5333(var_354_int);
	var_352_bool = var_354_int == (int)9;
	return 0;
}


func_5074(var_400_bool, var_401_object)
{
	var_402_bool = 0; var_403_object = Obj(); var_404_float = 0;
	var_401_object = var_403_object;
	func_5082(var_402_bool, var_403_object, (float)70);
	var_402_bool = var_400_bool;
	return 0;
}


func_5593(var_362_bool)
{
	var_364_int = 0;
	func_5333(var_364_int);
	var_362_bool = var_364_int == (int)10;
	return 0;
}


func_5082(var_402_bool, var_403_object, var_404_float)
{
	var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_cvector = CVector(0,0,0); var_411_cvector = CVector(0,0,0); var_412_bool = 0; var_413_float = 0; var_414_cvector = CVector(0,0,0); var_415_cvector = CVector(0,0,0); var_416_cvector = CVector(0,0,0); var_417_cvector = CVector(0,0,0); var_418_cvector = CVector(0,0,0); var_419_cvector = CVector(0,0,0); var_420_bool = 0;
	@@var_403_object:GetPosition(var_414_cvector);
	@@var_403_object:GetEyesHeight(var_413_float);
	var_421_float = GetByIndex(var_414_cvector, 1);
	var_421_float = var_421_float + var_413_float;
	SetByIndex(var_414_cvector, 1) = var_421_float;
	GetPosition(var_415_cvector);
	GetEyesHeight(var_413_float);
	var_422_float = GetByIndex(var_415_cvector, 1);
	var_422_float = var_422_float + var_413_float;
	SetByIndex(var_415_cvector, 1) = var_422_float;
	var_416_cvector = var_414_cvector - var_415_cvector;
	var_423_float = GetByIndex(var_416_cvector, 1);
	SetByIndex(var_416_cvector, 1) = (float)0;
	var_424_int = var_416_cvector | var_416_cvector;
	var_425_float = sqrt(var_424_int);
	var_416_cvector = var_416_cvector / var_425_float;
	var_417_cvector = -var_416_cvector;
	var_426_float = var_416_cvector * var_404_float;
	var_418_cvector = var_426_float - CVector(0.0, 10.0, 0.0);
	var_419_cvector = var_415_cvector + var_418_cvector;
	IsOverrideActive(var_420_bool);
	var_428_bool = var_420_bool;
	if(var_428_bool != 0) {
		var_402_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_419_cvector, var_417_cvector, (bool)1);
	var_430_float = GetByIndex(var_418_cvector, 0);
	var_431_float = GetByIndex(var_418_cvector, 2);
	Rotate(var_430_float, var_431_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_402_bool = 1;
	return 16;
}


func_3039(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3175(var_18_object, var_19_bool);
	return 0;
}


func_5600(var_373_bool)
{
	var_375_int = 0;
	func_5333(var_375_int);
	var_373_bool = var_375_int == (int)11;
	return 0;
}


func_5607(var_107_int)
{
	var_108_int = 0; var_109_int = 0;
	GetVariable("branch", var_109_int);
	var_112_bool = var_109_int == (int)0;
	if(var_112_bool != 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x15f6";
	}
	var_114_bool = var_109_int == (int)1;
	if(var_114_bool != 0) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
	return 2;
}


func_3047(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_3182(var_23_bool, var_24_int);
	return 0;
}


func_6126(var_22_int)
{
	var_22_int = 0;
	return 0;
}


func_6129()
{
	return 0;
}


func_6131(var_129_int, var_130_string, var_131_object)
{
	var_133_bool = var_130_string == "killme";
	if(var_133_bool != 0) {
		var_134_int = 0; var_135_object = Obj();
		var_131_object = var_135_object;
		func_6153(var_134_int, var_135_object);
		var_134_int = var_129_int;
		return 0;
	}
	var_129_int = 0;
	return 0;
}


func_3064(var_2_object, var_20_object)
{
	var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj();
	var_20_object = var_26_object;
	func_4821(var_25_bool, var_26_object);
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
	func_5974(var_63_object);
	var_62_int = var_24_int;
	var_66_bool = var_24_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_24_int > (int)1;
		if(var_68_bool != 0) {
			func_3047(var_24_int);
		}
		var_70_object = Obj();
		var_20_object = var_70_object;
		func_5983(var_70_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_5630(var_36_object)
{
	var_37_int = 0;
	func_5624(var_37_int);
	var_42_bool = var_37_int == (int)1;
	if(var_42_bool != 0) {
		WorkWithCorpse(var_36_object);
	} else {
		Barter(var_36_object);
	}
	return 0;
	
}


func_6143(var_177_string, var_178_object)
{
	var_180_bool = var_177_string == "killme";
	if(var_180_bool != 0) {
		var_181_object = Obj();
		var_178_object = var_181_object;
		func_6171(var_181_object);
		return 0;
	}
	return 0;
}


