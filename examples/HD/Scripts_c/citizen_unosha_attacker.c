// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:killme|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:reputation
// @GLOBALS: 0:bool:
// @RUN_OP: 0x833
// @RUN_TASK: 4
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1be vars=int,int
// @TASK_3: vars= params=1
// @EVENT_0: op=0x7a6 vars=object
// @EVENT_6: op=0x7b4 vars=
// @EVENT_22: op=0x82d vars=object,int,float,float
// @EVENT_16: op=0x82f vars=object,string
// @EVENT_41: op=0x831 vars=object
// @TASK_4: vars=bool,bool,bool params=0
// @EVENT_0: op=0x84b vars=object
// @EVENT_17: op=0x85f vars=object
// @EVENT_30: op=0x877 vars=object,object,bool
// @EVENT_40: op=0x893 vars=object
// @EVENT_42: op=0x8a7 vars=object,string
// @EVENT_26: op=0x8cc vars=string
// @EVENT_1: op=0x8da vars=object
// @EVENT_3: op=0x8ed vars=object
// @EVENT_7: op=0x8f3 vars=int
// @EVENT_6: op=0x8ff vars=
// @EVENT_41: op=0x916 vars=object
// @EVENT_10: op=0x987 vars=object
// @EVENT_28: op=0x98b vars=
// @TASK_5: vars= params=0
// @EVENT_0: op=0x9a4 vars=object
// @EVENT_17: op=0x9b8 vars=object
// @EVENT_30: op=0x9d0 vars=object,object,bool
// @EVENT_40: op=0x9ec vars=object
// @EVENT_42: op=0xa00 vars=object,string
// @EVENT_26: op=0xa25 vars=string
// @EVENT_6: op=0xa33 vars=
// @EVENT_1: op=0xa3a vars=object
// @TASK_6: vars=object,int,int,bool,float,int params=1
// @TASK_7: vars=bool,object,bool params=6
// @EVENT_6: op=0xd42 vars=
// @EVENT_7: op=0xd7a vars=int
// @EVENT_1: op=0xd95 vars=object
// @EVENT_2: op=0xda4 vars=object
// @EVENT_10: op=0xe2a vars=object
// @EVENT_41: op=0xe35 vars=object
// @STANDALONE_EVENT_16: op=0x1292 vars=object,string
// @STANDALONE_EVENT_41: op=0x129f vars=object
// @STANDALONE_EVENT_22: op=0x12a5 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x12ad vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1a,0x72,0x1a8,0x1be,0x797,0x7b4,0x813,0x82d,0x82f,0x831,0x8cc,0x8da,0x8ed,0x8f3,0x8ff,0x916,0x987,0xa25,0xa33,0xa3a,0xa9e,0xaa6,0xaa9,0xd3a,0xd42,0xd7a,0xd95,0xda4,0xe18,0xe2a,0xe35,0xe3e,0xe49,0xfe6,0x101e,0x108d,0x1094,0x10da,0x10e6,0x10f2,0x10fc,0x1106,0x1110,0x111a,0x1124,0x112e,0x1135,0x113c,0x1143,0x114a,0x115f,0x1181,0x128a,0x129f,0x12a5,0x12ad,0x12b7,0x12d7,0x1307,0x130d,0x134f,0x1359,0x135f,0x1369,0x13bc,0x13c3,0x13e6,0x13e9,0x13eb,0x13f7,0x1401,0x1413,0x1419,0x141c,0x1423,0x1426,0x1428,0x142b,0x142d,0x1430,0x1432,0x1435,0x1483,0x1486,0x1490

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0;
	func_5183(var_19_bool);
	if(var_19_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	if((int)1 != 0) {
		func_4173();
		var_23_bool = var_18_object == (int)45786;
		if(var_23_bool != 0) {
			var_24_bool = 0;
			var_24_bool = 0;
			var_25_bool = 0; var_26_object = Obj();
			var_26_object = var_1_object;
			func_4326(var_26_object);
			if(var_25_bool != 0) {
				var_33_bool = 0; var_34_object = Obj();
				var_34_object = var_1_object;
				func_4358(var_33_bool, var_34_object);
				if(var_33_bool != 0) {
					var_24_bool = 1;
				}
			}
			if(var_24_bool != 0) {
				var_44_string = "";
				func_424(var_19_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)543329);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)543330, (int)45790, (int)45787);
				@@@var_0_bool:AddReply((int)543332, (int)45790, (int)45789);
				@@@var_0_bool:AddReply((int)543331, (int)-1, (int)45788);
				return 0;
			}
			var_71_bool = 0;
			var_71_bool = 0;
			var_72_bool = 0; var_73_object = Obj();
			var_73_object = var_1_object;
			func_4326(var_73_object);
			if(var_72_bool != 0) {
				var_74_bool = 0; var_75_object = Obj();
				var_75_object = var_1_object;
				func_4358(var_74_bool, var_75_object);
				var_76_bool = var_74_bool == 0; //@nz
				if(var_76_bool != 0) {
					var_71_bool = 1;
				}
			}
			if(var_71_bool != 0) {
				var_77_string = "";
				func_424(var_19_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)543328);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)543336, (int)-1, (int)45794);
				return 0;
			}
			var_82_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537969);
			@@@var_0_bool:ClearReplies();
			var_84_bool = 0;
			var_84_bool = 0;
			var_85_bool = 0; var_86_object = Obj();
			var_86_object = var_1_object;
			func_4338(var_85_bool, var_86_object);
			if(var_85_bool != 0) {
				var_91_bool = 0; var_92_object = Obj();
				var_92_object = var_1_object;
				func_4314(var_92_object);
				if(var_91_bool != 0) {
					var_84_bool = 1;
				}
			}
			if(var_84_bool != 0) {
				@@@var_0_bool:AddReply((int)537970, (int)39833, (int)39832);
			}
			var_100_bool = 0;
			var_100_bool = 0;
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_4338(var_101_bool, var_102_object);
			if(var_101_bool != 0) {
				var_103_bool = 0; var_104_object = Obj();
				var_104_object = var_1_object;
				func_4314(var_104_object);
				if(var_103_bool != 0) {
					var_100_bool = 1;
				}
			}
			if(var_100_bool != 0) {
				@@@var_0_bool:AddReply((int)537995, (int)39861, (int)39860);
			}
			var_108_bool = 0;
			var_108_bool = 0;
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_4338(var_109_bool, var_110_object);
			if(var_109_bool != 0) {
				var_111_bool = 0; var_112_object = Obj();
				var_112_object = var_1_object;
				func_4314(var_112_object);
				if(var_111_bool != 0) {
					var_108_bool = 1;
				}
			}
			if(var_108_bool != 0) {
				@@@var_0_bool:AddReply((int)538003, (int)39869, (int)39868);
			}
			var_116_bool = 0;
			var_116_bool = 0;
			var_117_bool = 0; var_118_object = Obj();
			var_118_object = var_1_object;
			func_4338(var_117_bool, var_118_object);
			if(var_117_bool != 0) {
				var_119_bool = 0; var_120_object = Obj();
				var_120_object = var_1_object;
				func_4314(var_120_object);
				if(var_119_bool != 0) {
					var_116_bool = 1;
				}
			}
			if(var_116_bool != 0) {
				@@@var_0_bool:AddReply((int)538012, (int)39878, (int)39877);
			}
			var_124_bool = 0;
			var_124_bool = 0;
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_bool = 0; var_127_object = Obj();
			var_127_object = var_1_object;
			func_4338(var_126_bool, var_127_object);
			if(var_126_bool != 0) {
				var_128_bool = 0; var_129_object = Obj();
				var_129_object = var_1_object;
				func_4388(var_128_bool, var_129_object);
				if(var_128_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				var_139_bool = 0; var_140_object = Obj();
				var_140_object = var_1_object;
				func_4314(var_140_object);
				if(var_139_bool != 0) {
					var_124_bool = 1;
				}
			}
			if(var_124_bool != 0) {
				@@@var_0_bool:AddReply((int)538017, (int)39883, (int)39882);
			}
			var_144_bool = 0;
			var_144_bool = 0;
			var_145_bool = 0;
			var_145_bool = 0;
			var_146_bool = 0; var_147_object = Obj();
			var_147_object = var_1_object;
			func_4348(var_146_bool, var_147_object);
			if(var_146_bool != 0) {
				var_152_bool = 0; var_153_object = Obj();
				var_153_object = var_1_object;
				func_4378(var_152_bool, var_153_object);
				if(var_152_bool != 0) {
					var_145_bool = 1;
				}
			}
			if(var_145_bool != 0) {
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_4314(var_164_object);
				if(var_163_bool != 0) {
					var_144_bool = 1;
				}
			}
			if(var_144_bool != 0) {
				@@@var_0_bool:AddReply((int)538043, (int)39911, (int)39910);
			}
			var_168_bool = 0;
			var_168_bool = 0;
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_4368(var_170_bool, var_171_object);
			if(var_170_bool != 0) {
				var_176_bool = 0; var_177_object = Obj();
				var_177_object = var_1_object;
				func_4378(var_176_bool, var_177_object);
				if(var_176_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				var_178_bool = 0; var_179_object = Obj();
				var_179_object = var_1_object;
				func_4314(var_179_object);
				if(var_178_bool != 0) {
					var_168_bool = 1;
				}
			}
			if(var_168_bool != 0) {
				@@@var_0_bool:AddReply((int)538083, (int)39952, (int)39951);
			}
			var_183_bool = 0;
			var_183_bool = 0;
			var_184_bool = 0;
			var_184_bool = 0;
			var_185_bool = 0; var_186_object = Obj();
			var_186_object = var_1_object;
			func_4368(var_185_bool, var_186_object);
			if(var_185_bool != 0) {
				var_187_bool = 0; var_188_object = Obj();
				var_188_object = var_1_object;
				func_4388(var_187_bool, var_188_object);
				if(var_187_bool != 0) {
					var_184_bool = 1;
				}
			}
			if(var_184_bool != 0) {
				var_189_bool = 0; var_190_object = Obj();
				var_190_object = var_1_object;
				func_4314(var_190_object);
				if(var_189_bool != 0) {
					var_183_bool = 1;
				}
			}
			if(var_183_bool != 0) {
				@@@var_0_bool:AddReply((int)538110, (int)39980, (int)39979);
			}
			@@@var_0_bool:AddReply((int)538126, (int)-1, (int)39997);
			return 0;
		}
		var_198_bool = var_18_object == (int)39980;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538111);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538112, (int)39982, (int)39981);
			@@@var_0_bool:AddReply((int)538124, (int)39982, (int)39994);
			@@@var_0_bool:AddReply((int)538125, (int)-1, (int)39996);
			return 0;
		}
		var_211_bool = var_18_object == (int)39982;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538113);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538114, (int)39984, (int)39983);
			@@@var_0_bool:AddReply((int)538118, (int)39989, (int)39988);
			return 0;
		}
		var_221_bool = var_18_object == (int)39989;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538119);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538120, (int)39991, (int)39990);
			return 0;
		}
		var_228_bool = var_18_object == (int)39991;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538121);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538122, (int)-1, (int)39992);
			@@@var_0_bool:AddReply((int)538123, (int)-1, (int)39993);
			return 0;
		}
		var_238_bool = var_18_object == (int)39984;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538115);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538116, (int)-1, (int)39985);
			@@@var_0_bool:AddReply((int)538117, (int)39991, (int)39986);
			return 0;
		}
		var_248_bool = var_18_object == (int)39952;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538084);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538085, (int)39954, (int)39953);
			@@@var_0_bool:AddReply((int)538094, (int)39963, (int)39962);
			@@@var_0_bool:AddReply((int)538103, (int)39972, (int)39971);
			@@@var_0_bool:AddReply((int)538109, (int)-1, (int)39978);
			return 0;
		}
		var_264_bool = var_18_object == (int)39972;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538104);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538105, (int)39974, (int)39973);
			@@@var_0_bool:AddReply((int)538108, (int)-1, (int)39977);
			return 0;
		}
		var_274_bool = var_18_object == (int)39974;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538106);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538107, (int)39963, (int)39975);
			return 0;
		}
		var_281_bool = var_18_object == (int)39963;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538095);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538096, (int)39965, (int)39964);
			@@@var_0_bool:AddReply((int)538100, (int)39969, (int)39968);
			return 0;
		}
		var_291_bool = var_18_object == (int)39969;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538101);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538102, (int)-1, (int)39970);
			return 0;
		}
		var_298_bool = var_18_object == (int)39965;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538097);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538098, (int)-1, (int)39966);
			@@@var_0_bool:AddReply((int)538099, (int)-1, (int)39967);
			return 0;
		}
		var_308_bool = var_18_object == (int)39954;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538086);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538087, (int)39956, (int)39955);
			@@@var_0_bool:AddReply((int)538093, (int)-1, (int)39961);
			return 0;
		}
		var_318_bool = var_18_object == (int)39956;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538088);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538089, (int)39958, (int)39957);
			return 0;
		}
		var_325_bool = var_18_object == (int)39958;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538090);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538091, (int)-1, (int)39959);
			@@@var_0_bool:AddReply((int)538092, (int)-1, (int)39960);
			return 0;
		}
		var_335_bool = var_18_object == (int)39911;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538044);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538045, (int)39913, (int)39912);
			@@@var_0_bool:AddReply((int)538063, (int)39932, (int)39931);
			return 0;
		}
		var_345_bool = var_18_object == (int)39932;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538064);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538065, (int)39934, (int)39933);
			return 0;
		}
		var_352_bool = var_18_object == (int)39934;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538066);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538067, (int)39936, (int)39935);
			return 0;
		}
		var_359_bool = var_18_object == (int)39936;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538068);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538069, (int)39938, (int)39937);
			@@@var_0_bool:AddReply((int)538075, (int)39944, (int)39943);
			return 0;
		}
		var_369_bool = var_18_object == (int)39944;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538076);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538077, (int)39946, (int)39945);
			@@@var_0_bool:AddReply((int)538082, (int)-1, (int)39950);
			return 0;
		}
		var_379_bool = var_18_object == (int)39946;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538078);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538079, (int)39948, (int)39947);
			return 0;
		}
		var_386_bool = var_18_object == (int)39948;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538080);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538081, (int)-1, (int)39949);
			return 0;
		}
		var_393_bool = var_18_object == (int)39938;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538070);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538071, (int)39940, (int)39939);
			@@@var_0_bool:AddReply((int)538074, (int)-1, (int)39942);
			return 0;
		}
		var_403_bool = var_18_object == (int)39940;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538072);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538073, (int)-1, (int)39941);
			return 0;
		}
		var_410_bool = var_18_object == (int)39913;
		if(var_410_bool != 0) {
			var_411_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538046);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538047, (int)39915, (int)39914);
			@@@var_0_bool:AddReply((int)538060, (int)39928, (int)39927);
			return 0;
		}
		var_420_bool = var_18_object == (int)39928;
		if(var_420_bool != 0) {
			var_421_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538061);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538062, (int)39915, (int)39929);
			return 0;
		}
		var_427_bool = var_18_object == (int)39915;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538048);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538049, (int)39917, (int)39916);
			@@@var_0_bool:AddReply((int)538057, (int)39925, (int)39924);
			return 0;
		}
		var_437_bool = var_18_object == (int)39925;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538058);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538059, (int)-1, (int)39926);
			return 0;
		}
		var_444_bool = var_18_object == (int)39917;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538050);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538051, (int)39919, (int)39918);
			@@@var_0_bool:AddReply((int)538056, (int)-1, (int)39923);
			return 0;
		}
		var_454_bool = var_18_object == (int)39919;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538052);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538053, (int)39921, (int)39920);
			return 0;
		}
		var_461_bool = var_18_object == (int)39921;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538054);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538055, (int)-1, (int)39922);
			return 0;
		}
		var_468_bool = var_18_object == (int)39883;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538018);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538019, (int)39885, (int)39884);
			@@@var_0_bool:AddReply((int)538030, (int)39897, (int)39896);
			@@@var_0_bool:AddReply((int)538039, (int)39907, (int)39906);
			@@@var_0_bool:AddReply((int)538042, (int)-1, (int)39909);
			return 0;
		}
		var_484_bool = var_18_object == (int)39907;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538040);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538041, (int)-1, (int)39908);
			return 0;
		}
		var_491_bool = var_18_object == (int)39897;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538031);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538032, (int)39899, (int)39898);
			@@@var_0_bool:AddReply((int)538038, (int)39899, (int)39904);
			return 0;
		}
		var_501_bool = var_18_object == (int)39899;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538033);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538034, (int)39901, (int)39900);
			@@@var_0_bool:AddReply((int)538037, (int)-1, (int)39903);
			return 0;
		}
		var_511_bool = var_18_object == (int)39901;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538035);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538036, (int)-1, (int)39902);
			return 0;
		}
		var_518_bool = var_18_object == (int)39885;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538020);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538021, (int)39887, (int)39886);
			@@@var_0_bool:AddReply((int)538027, (int)39894, (int)39893);
			return 0;
		}
		var_528_bool = var_18_object == (int)39894;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538028);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538029, (int)-1, (int)39895);
			return 0;
		}
		var_535_bool = var_18_object == (int)39887;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538022);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538023, (int)39889, (int)39888);
			@@@var_0_bool:AddReply((int)538026, (int)39889, (int)39891);
			return 0;
		}
		var_545_bool = var_18_object == (int)39889;
		if(var_545_bool != 0) {
			var_546_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538024);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538025, (int)-1, (int)39890);
			return 0;
		}
		var_552_bool = var_18_object == (int)39878;
		if(var_552_bool != 0) {
			var_553_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538013);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538014, (int)39880, (int)39879);
			return 0;
		}
		var_559_bool = var_18_object == (int)39880;
		if(var_559_bool != 0) {
			var_560_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538015);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538016, (int)-1, (int)39881);
			return 0;
		}
		var_566_bool = var_18_object == (int)39869;
		if(var_566_bool != 0) {
			var_567_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538004);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538005, (int)39871, (int)39870);
			@@@var_0_bool:AddReply((int)538011, (int)-1, (int)39876);
			return 0;
		}
		var_576_bool = var_18_object == (int)39871;
		if(var_576_bool != 0) {
			var_577_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538006);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538007, (int)39873, (int)39872);
			return 0;
		}
		var_583_bool = var_18_object == (int)39873;
		if(var_583_bool != 0) {
			var_584_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538008);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538009, (int)-1, (int)39874);
			@@@var_0_bool:AddReply((int)538010, (int)-1, (int)39875);
			return 0;
		}
		var_593_bool = var_18_object == (int)39861;
		if(var_593_bool != 0) {
			var_594_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537996);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537997, (int)39863, (int)39862);
			return 0;
		}
		var_600_bool = var_18_object == (int)39863;
		if(var_600_bool != 0) {
			var_601_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537998);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537999, (int)39865, (int)39864);
			@@@var_0_bool:AddReply((int)538002, (int)-1, (int)39867);
			return 0;
		}
		var_610_bool = var_18_object == (int)39865;
		if(var_610_bool != 0) {
			var_611_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538000);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538001, (int)-1, (int)39866);
			return 0;
		}
		var_617_bool = var_18_object == (int)39833;
		if(var_617_bool != 0) {
			var_618_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537971);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537972, (int)39835, (int)39834);
			@@@var_0_bool:AddReply((int)537976, (int)39840, (int)39839);
			@@@var_0_bool:AddReply((int)537988, (int)39852, (int)39851);
			@@@var_0_bool:AddReply((int)537994, (int)-1, (int)39859);
			return 0;
		}
		var_633_bool = var_18_object == (int)39852;
		if(var_633_bool != 0) {
			var_634_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537989);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537990, (int)39835, (int)39853);
			@@@var_0_bool:AddReply((int)537991, (int)39856, (int)39855);
			return 0;
		}
		var_643_bool = var_18_object == (int)39856;
		if(var_643_bool != 0) {
			var_644_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537992);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537993, (int)39840, (int)39857);
			return 0;
		}
		var_650_bool = var_18_object == (int)39840;
		if(var_650_bool != 0) {
			var_651_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537977);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537978, (int)39842, (int)39841);
			@@@var_0_bool:AddReply((int)537987, (int)-1, (int)39850);
			return 0;
		}
		var_660_bool = var_18_object == (int)39842;
		if(var_660_bool != 0) {
			var_661_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537979);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537980, (int)39844, (int)39843);
			@@@var_0_bool:AddReply((int)537986, (int)-1, (int)39849);
			return 0;
		}
		var_670_bool = var_18_object == (int)39844;
		if(var_670_bool != 0) {
			var_671_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537981);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537982, (int)39846, (int)39845);
			@@@var_0_bool:AddReply((int)537985, (int)-1, (int)39848);
			return 0;
		}
		var_680_bool = var_18_object == (int)39846;
		if(var_680_bool != 0) {
			var_681_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537983);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537984, (int)-1, (int)39847);
			return 0;
		}
		var_687_bool = var_18_object == (int)39835;
		if(var_687_bool != 0) {
			var_688_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537973);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537974, (int)39840, (int)39836);
			@@@var_0_bool:AddReply((int)537975, (int)-1, (int)39838);
			return 0;
		}
		var_697_bool = var_18_object == (int)45790;
		if(var_697_bool != 0) {
			var_698_string = "";
			func_424(var_19_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543333);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543334, (int)-1, (int)45791);
			@@@var_0_bool:AddReply((int)543335, (int)-1, (int)45792);
			return 0;
		}
		var_3_object = true;
		var_706_bool = 0;
		func_5183(var_706_bool);
		if(var_706_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1bf";
	
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5145(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_25_object = Obj();
		var_18_bool = var_25_object;
		func_5148(var_25_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_5154();
	return 0;
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0;
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0;
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5145(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_2310(var_20_int);
		}
		var_28_object = Obj();
		var_18_bool = var_28_object;
		func_5148(var_28_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_4877(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_4959(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_2310(var_20_int);
		}
		var_71_object = Obj();
		var_18_bool = var_71_object;
		func_4969(var_71_object);
	}
	return 2;
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_5254(var_23_bool, var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_85_int = 0; var_86_object = Obj(); var_87_bool = 0;
		var_18_bool = var_86_object;
		var_20_bool = var_87_bool;
		func_5052(var_86_object, var_87_bool);
		var_85_int = var_22_int;
		var_119_bool = var_22_int > (int)0;
		if(var_119_bool != 0) {
			var_121_bool = var_22_int > (int)1;
			if(var_121_bool != 0) {
				func_2310(var_22_int);
			}
			var_123_object = Obj();
			var_18_bool = var_123_object;
			func_5059(var_123_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5094(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_2310(var_20_int);
		}
		var_18_bool = Obj();
		func_5097();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_4791(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_2310(var_21_int);
		var_38_object = Obj(); var_39_string = "";
		var_18_object = var_38_object;
		var_19_bool = var_39_string;
		func_4823(var_38_object, var_39_string);
	} else {
		var_49_int = 0; var_50_string = ""; var_51_object = Obj();
		var_19_bool = var_50_string;
		var_18_object = var_51_object;
		func_5099(var_49_int, var_50_string, var_51_object);
		var_49_int = var_21_int;
		var_94_bool = var_21_int > (int)0;
		if(var_94_bool == 0) goto Label_2251;
		var_96_bool = var_21_int > (int)1;
		if(var_96_bool != 0) {
			func_2310(var_21_int);
		}
		var_97_string = ""; var_98_object = Obj();
		var_19_bool = var_97_string;
		var_18_object = var_98_object;
		func_5111(var_97_string, var_98_object);
	}
Label_2251:
	return 2;
	
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_4890(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_2310(var_18_bool);
		var_29_string = "";
		var_18_bool = var_29_string;
		func_4906(var_29_string);
	}
	return 0;
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_4848(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_2310(var_18_bool);
		var_32_object = Obj();
		var_18_bool = var_32_object;
		func_4871(var_32_object);
	} else {
		var_34_object = Obj();
		var_18_bool = var_34_object;
		func_2335(var_18_bool, var_34_object);
	}
	return 0;
	
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj();
	var_18_bool = var_19_object;
	func_2335(var_18_bool, var_19_object);
	return 0;
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
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


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2310(var_17_bool);
	func_5154();
	return 0;
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2310(var_18_bool);
	var_18_bool = Obj();
	func_4767();
	return 0;
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool);
	return 0;
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop();
	return 0;
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5145(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_2713();
		}
		var_27_object = Obj();
		var_18_bool = var_27_object;
		func_5148(var_27_object);
	}
	return 2;
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_4877(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_4959(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_2713();
		}
		var_70_object = Obj();
		var_18_bool = var_70_object;
		func_4969(var_70_object);
	}
	return 2;
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_5254(var_23_bool, var_24_object, var_25_object, var_26_bool);
	if(var_23_bool != 0) {
		var_85_int = 0; var_86_object = Obj(); var_87_bool = 0;
		var_18_bool = var_86_object;
		var_20_bool = var_87_bool;
		func_5052(var_86_object, var_87_bool);
		var_85_int = var_22_int;
		var_119_bool = var_22_int > (int)0;
		if(var_119_bool != 0) {
			var_121_bool = var_22_int > (int)1;
			if(var_121_bool != 0) {
				func_2713();
			}
			var_122_object = Obj();
			var_18_bool = var_122_object;
			func_5059(var_122_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_5094(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_2713();
		}
		var_18_bool = Obj();
		func_5097();
	}
	return 2;
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_4791(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_2713();
		var_37_object = Obj(); var_38_string = "";
		var_18_object = var_37_object;
		var_19_bool = var_38_string;
		func_4823(var_37_object, var_38_string);
	} else {
		var_48_int = 0; var_49_string = ""; var_50_object = Obj();
		var_19_bool = var_49_string;
		var_18_object = var_50_object;
		func_5099(var_48_int, var_49_string, var_50_object);
		var_48_int = var_21_int;
		var_93_bool = var_21_int > (int)0;
		if(var_93_bool == 0) goto Label_2596;
		var_95_bool = var_21_int > (int)1;
		if(var_95_bool != 0) {
			func_2713();
		}
		var_96_string = ""; var_97_object = Obj();
		var_19_bool = var_96_string;
		var_18_object = var_97_object;
		func_5111(var_96_string, var_97_object);
	}
Label_2596:
	return 2;
	
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_4890(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_2713();
		var_28_string = "";
		var_18_bool = var_28_string;
		func_4906(var_28_string);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2713();
	func_5154();
	return 0;
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_4848(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_2713();
		var_31_object = Obj();
		var_18_bool = var_31_object;
		func_4871(var_31_object);
	}
	return 0;
}


task_7_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3464(var_17_bool);
	func_5154();
	return 0;
}


task_7_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_20_bool = var_18_int == (int)1;
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_21_object = var_1_object;
		func_4294(var_21_object);
	} else {
		var_26_int = 0;
		var_18_int = var_26_int;
		func_3608(var_17_bool, var_18_int, var_26_int);
	}
	return 0;
	
}


task_7_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
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
		func_4162(var_22_object);
	}
	return 0;
}


task_7_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
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


task_7_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object);
	return 0;
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_3464(var_18_object);
	var_18_object = Obj();
	func_4767();
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
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


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_4746(var_19_object);
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0;
	var_18_object = var_22_object;
	var_19_int = var_23_int;
	var_20_float = var_24_float;
	func_3885(var_22_object, var_23_int, var_24_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	var_18_object = var_24_object;
	var_19_int = var_25_int;
	var_20_float = var_26_float;
	var_22_cvector = var_27_cvector;
	var_23_cvector = var_28_cvector;
	func_3953(var_26_float, var_27_cvector, var_28_cvector);
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	SensePlayerOnly((bool)1);
	func_5185();
	func_2114();
	
Label_2108:
	var_2_object = false;
	func_2375(var_16_object, var_17_bool);
	goto Label_2108;
}
EMIT "Return(); Pop(0)";


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_368_bool = 0;
	func_5183(var_368_bool);
	if(var_368_bool != 0) {
		var_369_string = "";
		func_4131("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_370_bool = var_0_bool;
	if(var_370_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_5121(var_53_int, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj();
	var_54_object = var_56_object;
	func_3817(var_55_bool, var_56_object);
	var_89_bool = var_55_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_53_int = 0;
		return 0;
	}
	var_90_bool = 0; var_91_object = Obj();
	var_54_object = var_91_object;
	func_5251(var_91_object);
	if(var_90_bool != 0) {
		var_53_int = 2;
	} else {
		var_53_int = 0;
	}
	return 0;
	
}


func_2067(var_43_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_44_string = "";
	var_43_string = var_44_string;
	func_4180(var_44_string);
	PlayAnimation("all", var_43_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_43_string);
	RemoveEnvelope();
	return 0;
}


func_5139(var_100_object)
{
	var_101_object = Obj();
	var_100_object = var_101_object;
	func_4969(var_101_object);
	return 0;
}


func_3608(var_0_bool, var_1_object, var_26_int)
{
	var_28_bool = var_26_int != (int)0;
	if(var_28_bool != 0) {
		return 0;
	}
	var_29_bool = 0; var_30_object = Obj();
	var_30_object = var_1_object;
	func_3646(var_29_bool, var_30_object);
	var_65_bool = var_29_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_5145(var_21_int)
{
	var_21_int = 2;
	return 0;
}


func_5148(var_27_object)
{
	var_28_object = Obj();
	var_27_object = var_28_object;
	func_5189(var_27_object, var_28_object);
	return 0;
}


func_4126()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_5154()
{
	return 0;
}


func_4131(var_181_string)
{
	var_182_bool = 0; var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_float = 0; var_187_float = 0;
	lshHasAnimation(var_185_bool, var_181_string);
	var_188_bool = var_185_bool;
	if(var_188_bool != 0) {
		lshGetAnimTimes(var_181_string, var_186_float, var_187_float);
		lshPlayAnimation(var_186_float, var_187_float, (bool)0);
	} else {
		var_191_int = "Can't find lsh animation : " + var_181_string;
		Trace(var_191_int);
	}
	return 6;
	
}


func_5155(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_5158()
{
	return 0;
}


func_5160(var_31_bool)
{
	var_31_bool = 0;
	return 0;
}


func_40(var_0_bool, var_53_int, var_54_object)
{
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	var_0_bool = var_54_object;
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0;
	var_54_object = var_65_object;
	func_3983(var_64_bool, var_65_object, (float)70.0);
	var_111_bool = var_64_bool == 0; //@nz
	if(var_111_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	CreateDialog(var_60_object);
	var_112_int = 0;
	func_5177(var_112_int);
	@@var_60_object:SetNPCName(var_112_int);
	var_113_int = 0;
	func_5175(var_113_int);
	@@var_60_object:SetNPCDescription(var_113_int);
	var_114_string = "";
	func_5179(var_114_string);
	@@var_60_object:SetPhoto(var_114_string);
	var_115_string = "";
	func_5181(var_115_string);
	@@var_60_object:SetPhoto2(var_115_string);
	var_116_int = 0;
	func_4458(var_116_int);
	@@var_60_object:SetPlayerName(var_116_int);
	IsOverrideActive(var_61_bool);
	var_124_bool = var_61_bool;
	if(var_124_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	DoDialog(var_60_object);
	var_125_object = Obj(); var_126_object = Obj();
	var_54_object = var_125_object;
	var_60_object = var_126_object;
	TaskCall(2);
	func_114(var_127_object, var_128_object, var_129_string, var_130_bool, var_125_object, var_126_object);
	TaskReturn();
	@@var_60_object:IsDialogEnd(var_63_bool);
	
Label_96:
	var_323_bool = var_63_bool == 0; //@nz
	if(var_323_bool != 0) {
		sync();
		@@var_60_object:IsDialogEnd(var_63_bool);
		goto Label_96;
	}
	var_54_object = Obj();
	func_4052();
	StopDialog(var_60_object);
	@@var_60_object:GetReturnValue((int)-1);
	var_62_int = var_53_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5163()
{
	return 0;
}


func_5165(var_35_bool)
{
	var_35_bool = 0;
	return 0;
}


func_3630(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_5168()
{
	return 0;
}


func_5170(var_26_bool)
{
	var_26_bool = 0;
	return 0;
}


func_4147(var_156_string, var_157_bool)
{
	var_160_bool = 0; var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_float = 0; var_165_float = 0;
	lshHasAnimation(var_163_bool, var_156_string);
	var_166_bool = var_163_bool;
	if(var_166_bool != 0) {
		lshGetAnimTimes(var_156_string, var_164_float, var_165_float);
		lshPlayAnimation(var_164_float, var_165_float, var_157_bool);
	} else {
		var_168_int = "Can't find lsh animation : " + var_156_string;
		Trace(var_168_int);
	}
	return 6;
	
}


func_5173()
{
	return 0;
}


func_5175(var_113_int)
{
	var_113_int = 515564;
	return 0;
}


func_5177(var_112_int)
{
	var_112_int = 503349;
	return 0;
}


func_5179(var_114_string)
{
	var_114_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_5181(var_115_string)
{
	var_115_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_3646(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_object = var_32_object;
	func_3817(var_31_bool, var_32_object);
	var_31_bool = var_29_bool;
	return 0;
}


func_5183(var_107_bool)
{
	var_107_bool = 0;
	return 0;
}


func_5185()
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_2114()
{
	var_20_bool = 0;
	func_3978(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		func_5154();
	}
	return 0;
}


func_4162(var_22_object)
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


func_3653(var_249_string)
{
	var_249_string = "walk";
	return 0;
}


func_5189(var_28_object, var_55_object)
{
	var_29_bool = 0; var_30_bool = 0;
	var_31_bool = GlobalVars[0];
	if(var_31_bool != 0) {
		IsOverrideActive(var_30_bool);
		var_32_bool = var_30_bool == 0; //@nz
		if(var_32_bool != 0) {
			var_33_object = Obj();
			var_28_object = var_33_object;
			func_4481(var_33_object);
		}
		return 2;
	EMIT "GOTO 0x1472";
	}
	var_40_bool = 0; var_41_object = Obj();
	var_28_object = var_41_object;
	func_5235(var_40_bool, var_41_object);
	var_51_bool = var_40_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_53_int = 0; var_54_object = Obj();
		var_28_object = var_54_object;
		TaskCall(1);
		func_40(var_55_object, var_53_int, var_54_object);
		TaskReturn();
		var_332_bool = (int)1000 == var_55_object;
		if(var_332_bool != 0) {
			var_333_bool = 0; var_334_object = Obj();
			var_28_object = var_334_object;
			func_4070(var_333_bool, var_334_object);
			var_365_bool = var_333_bool == 0; //@nz
			if(var_365_bool != 0) {
				return 2;
			}
			var_366_object = Obj();
			var_28_object = var_366_object;
			TaskCall(0);
			func_0(var_366_object);
			TaskReturn();
			var_28_object = Obj();
			func_4126();
		}
	}
	return 2;
}


func_3655(var_250_string)
{
	var_250_string = "run";
	return 0;
}


func_2632()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0;
	WaitForAnimEnd();
	var_65_bool = 0;
	func_3978(var_65_bool);
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		return 14;
	}
	func_4926((int)0);
	var_67_int = var_58_int;
	var_59_int = 0;
	
Label_2646:
	var_80_bool = 0;
	var_80_bool = 0;
	var_82_bool = var_59_int < (int)5;
	if(var_82_bool != 0) {
		var_83_bool = 0;
		func_3978(var_83_bool);
		if(var_83_bool != 0) {
			var_80_bool = 1;
		}
	}
	if(var_80_bool != 0) {
		irand(var_60_int, (int)3);
		var_86_bool = var_60_int == (int)0;
		if(var_86_bool != 0) {
			var_87_int = var_58_int;
			if(var_87_int == 0) goto Label_2679;
			irand(var_61_int, var_58_int);
			var_89_string = ""; var_90_int = 0;
			var_61_int = var_90_int;
			func_4919(var_89_string, var_90_int);
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
						goto Label_2708;
					}
					goto Label_2697;
				}
				var_101_int = var_59_int;
				if(var_101_int == 0) goto Label_2697;
				goto Label_2708;
		}
		Label_2697:
			var_92_bool = 0;
			func_2711(var_92_bool);
			var_93_bool = var_92_bool == 0; //@nz
			if(var_93_bool != 0) {
				goto Label_2708;
			}
			ResetAAS();
			var_59_int = var_59_int + (int)1;
			goto Label_2646;

		}
	}
Label_2708:
	ResetAAS();
	return 14;
	
}


func_3657(var_477_string, var_478_int)
{
	var_480_bool = var_478_int == (int)2;
	if(var_480_bool != 0) {
		var_477_string = "fire";
		return 0;
	EMIT "GOTO 0xe55";
	}
	var_482_bool = var_478_int == (int)1;
	if(var_482_bool != 0) {
		var_477_string = "bullet";
		return 0;
	}
	var_477_string = "phys";
	return 0;
}


func_4173()
{
	var_21_bool = 0;
	func_5183(var_21_bool);
	if(var_21_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4180(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	IsExisting3DSound(var_53_bool, var_44_string);
	var_61_bool = var_53_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_54_int = 0;

	Label_4186:
		var_63_int = var_54_int + (int)1;
		var_64_int = var_44_string + var_63_int;
		IsExisting3DSound(var_55_bool, var_64_int);
		var_65_bool = var_55_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_54_int = var_54_int + (int)1;
			goto Label_4186;
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


func_3671(var_52_cvector, var_53_object)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_53_object:GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
	return 4;
}


func_3678(var_75_float, var_76_object)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	GetPosition(var_80_cvector);
	@@var_76_object:GetPosition(var_81_cvector);
	var_82_cvector = var_81_cvector - var_80_cvector;
	var_75_float = var_82_cvector | var_82_cvector;
	return 6;
}


func_3172(var_540_bool, var_541_float)
{
	var_542_float = 0; var_543_bool = 0; var_544_float = 0; var_545_bool = 0;
	rand(var_544_float);
	var_546_bool = var_544_float < var_541_float;
	if(var_546_bool != 0) {

	Label_3177:
		IsAnimationPlaying(var_545_bool);
		var_547_bool = var_545_bool == 0; //@nz
		if(var_547_bool != 0) {
		} else {
			var_548_bool = 0;
			func_3270(var_548_bool);
			if(var_548_bool != 0) {
				var_540_bool = 1;
				sync();
				goto Label_3177;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_3374(var_545_bool);
	}
	goto Label_3197;
	
Label_3197:
	var_540_bool = 0;
	return 4;
	
}


func_3686(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0;
	IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
	return 2;
}


func_3691(var_53_bool, var_54_object, var_55_string)
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


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_125_object, var_126_object)
{
	var_0_bool = var_126_object;
	var_1_object = var_125_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_132_bool = 0;
		var_132_bool = 0;
		var_133_bool = 0; var_134_object = Obj();
		var_134_object = var_1_object;
		func_4326(var_134_object);
		if(var_133_bool != 0) {
			var_141_bool = 0; var_142_object = Obj();
			var_142_object = var_1_object;
			func_4358(var_141_bool, var_142_object);
			if(var_141_bool != 0) {
				var_132_bool = 1;
			}
		}
		if(var_132_bool != 0) {
			var_152_string = "";
			func_424(var_126_object, "Neutral");
			@@@var_0_bool:SetMessage((int)543329);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543330, (int)45790, (int)45787);
			@@@var_0_bool:AddReply((int)543332, (int)45790, (int)45789);
			@@@var_0_bool:AddReply((int)543331, (int)-1, (int)45788);
		} else {
				var_197_bool = 0;
				var_197_bool = 0;
				var_198_bool = 0; var_199_object = Obj();
				var_199_object = var_1_object;
				func_4326(var_199_object);
				if(var_198_bool != 0) {
					var_200_bool = 0; var_201_object = Obj();
					var_201_object = var_1_object;
					func_4358(var_200_bool, var_201_object);
					var_202_bool = var_200_bool == 0; //@nz
					if(var_202_bool != 0) {
						var_197_bool = 1;
					}
				}
				if(var_197_bool != 0) {
					var_203_string = "";
					func_424(var_126_object, "Neutral");
					@@@var_0_bool:SetMessage((int)543328);
					@@@var_0_bool:ClearReplies();
					@@@var_0_bool:AddReply((int)543336, (int)-1, (int)45794);
					goto Label_394;
				}
				var_208_string = "";
				func_424(var_126_object, "Neutral");
				@@@var_0_bool:SetMessage((int)537969);
				@@@var_0_bool:ClearReplies();
				var_210_bool = 0;
				var_210_bool = 0;
				var_211_bool = 0; var_212_object = Obj();
				var_212_object = var_1_object;
				func_4338(var_211_bool, var_212_object);
				if(var_211_bool != 0) {
					var_217_bool = 0; var_218_object = Obj();
					var_218_object = var_1_object;
					func_4314(var_218_object);
					if(var_217_bool != 0) {
						var_210_bool = 1;
					}
				}
				if(var_210_bool != 0) {
					@@@var_0_bool:AddReply((int)537970, (int)39833, (int)39832);
				}
				var_226_bool = 0;
				var_226_bool = 0;
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_object;
				func_4338(var_227_bool, var_228_object);
				if(var_227_bool != 0) {
					var_229_bool = 0; var_230_object = Obj();
					var_230_object = var_1_object;
					func_4314(var_230_object);
					if(var_229_bool != 0) {
						var_226_bool = 1;
					}
				}
				if(var_226_bool != 0) {
					@@@var_0_bool:AddReply((int)537995, (int)39861, (int)39860);
				}
				var_234_bool = 0;
				var_234_bool = 0;
				var_235_bool = 0; var_236_object = Obj();
				var_236_object = var_1_object;
				func_4338(var_235_bool, var_236_object);
				if(var_235_bool != 0) {
					var_237_bool = 0; var_238_object = Obj();
					var_238_object = var_1_object;
					func_4314(var_238_object);
					if(var_237_bool != 0) {
						var_234_bool = 1;
					}
				}
				if(var_234_bool != 0) {
					@@@var_0_bool:AddReply((int)538003, (int)39869, (int)39868);
				}
				var_242_bool = 0;
				var_242_bool = 0;
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_4338(var_243_bool, var_244_object);
				if(var_243_bool != 0) {
					var_245_bool = 0; var_246_object = Obj();
					var_246_object = var_1_object;
					func_4314(var_246_object);
					if(var_245_bool != 0) {
						var_242_bool = 1;
					}
				}
				if(var_242_bool != 0) {
					@@@var_0_bool:AddReply((int)538012, (int)39878, (int)39877);
				}
				var_250_bool = 0;
				var_250_bool = 0;
				var_251_bool = 0;
				var_251_bool = 0;
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_4338(var_252_bool, var_253_object);
				if(var_252_bool != 0) {
					var_254_bool = 0; var_255_object = Obj();
					var_255_object = var_1_object;
					func_4388(var_254_bool, var_255_object);
					if(var_254_bool != 0) {
						var_251_bool = 1;
					}
				}
				if(var_251_bool != 0) {
					var_265_bool = 0; var_266_object = Obj();
					var_266_object = var_1_object;
					func_4314(var_266_object);
					if(var_265_bool != 0) {
						var_250_bool = 1;
					}
				}
				if(var_250_bool != 0) {
					@@@var_0_bool:AddReply((int)538017, (int)39883, (int)39882);
				}
				var_270_bool = 0;
				var_270_bool = 0;
				var_271_bool = 0;
				var_271_bool = 0;
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_4348(var_272_bool, var_273_object);
				if(var_272_bool != 0) {
					var_278_bool = 0; var_279_object = Obj();
					var_279_object = var_1_object;
					func_4378(var_278_bool, var_279_object);
					if(var_278_bool != 0) {
						var_271_bool = 1;
					}
				}
				if(var_271_bool != 0) {
					var_289_bool = 0; var_290_object = Obj();
					var_290_object = var_1_object;
					func_4314(var_290_object);
					if(var_289_bool != 0) {
						var_270_bool = 1;
					}
				}
				if(var_270_bool != 0) {
					@@@var_0_bool:AddReply((int)538043, (int)39911, (int)39910);
				}
				var_294_bool = 0;
				var_294_bool = 0;
				var_295_bool = 0;
				var_295_bool = 0;
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_4368(var_296_bool, var_297_object);
				if(var_296_bool != 0) {
					var_302_bool = 0; var_303_object = Obj();
					var_303_object = var_1_object;
					func_4378(var_302_bool, var_303_object);
					if(var_302_bool != 0) {
						var_295_bool = 1;
					}
				}
				if(var_295_bool != 0) {
					var_304_bool = 0; var_305_object = Obj();
					var_305_object = var_1_object;
					func_4314(var_305_object);
					if(var_304_bool != 0) {
						var_294_bool = 1;
					}
				}
				if(var_294_bool != 0) {
					@@@var_0_bool:AddReply((int)538083, (int)39952, (int)39951);
				}
				var_309_bool = 0;
				var_309_bool = 0;
				var_310_bool = 0;
				var_310_bool = 0;
				var_311_bool = 0; var_312_object = Obj();
				var_312_object = var_1_object;
				func_4368(var_311_bool, var_312_object);
				if(var_311_bool != 0) {
					var_313_bool = 0; var_314_object = Obj();
					var_314_object = var_1_object;
					func_4388(var_313_bool, var_314_object);
					if(var_313_bool != 0) {
						var_310_bool = 1;
					}
				}
				if(var_310_bool != 0) {
					var_315_bool = 0; var_316_object = Obj();
					var_316_object = var_1_object;
					func_4314(var_316_object);
					if(var_315_bool != 0) {
						var_309_bool = 1;
					}
				}
				if(var_309_bool != 0) {
					@@@var_0_bool:AddReply((int)538110, (int)39980, (int)39979);
				}
				@@@var_0_bool:AddReply((int)538126, (int)-1, (int)39997);
				goto Label_394;
		}
	}
Label_394:
	var_179_bool = 0;
	func_5183(var_179_bool);
	if(var_179_bool != 0) {

	Label_398:
		lshWaitForAnimEnd();
		var_180_object = var_3_object;
		if(var_180_object != 0) {
		} else {
			var_181_string = "";
			var_181_string = var_2_object;
			func_4131(var_181_string);
			goto Label_398;
	}
		PlayAnimation("all", "idle");

	Label_413:
		WaitForAnimEnd();
		var_194_object = var_3_object;
		if(var_194_object != 0) {
			goto Label_423;
		}
		PlayAnimation("all", "idle");
		goto Label_413;

	}
	goto Label_423;
	
Label_423:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


func_5235(var_40_bool, var_41_object)
{
	var_42_float = 0; var_43_float = 0;
	var_44_bool = 0; var_45_object = Obj();
	var_41_object = var_45_object;
	func_3686(var_44_bool, var_45_object);
	if(var_44_bool != 0) {
		@@var_41_object:GetProperty("reputation", var_43_float);
		var_50_bool = var_43_float < (float)0.4000000059604645;
		if(var_50_bool != 0) {
			var_40_bool = 1;
			return 2;
		}
	}
	var_40_bool = 0;
	return 2;
}


func_3703(var_449_float, var_450_object, var_451_float, var_452_int)
{
	var_456_int = 0; var_457_string = ""; var_458_int = 0; var_459_float = 0; var_460_float = 0; var_461_float = 0; var_462_int = 0; var_463_string = ""; var_464_int = 0; var_465_float = 0; var_466_float = 0; var_467_float = 0;
	var_468_bool = 0; var_469_object = Obj(); var_470_string = "";
	var_450_object = var_469_object;
	func_3691(var_468_bool, var_469_object, "health");
	var_471_bool = var_468_bool == 0; //@nz
	if(var_471_bool != 0) {
		var_449_float = 0.0;
		return 12;
	}
	var_472_bool = 0; var_473_object = Obj(); var_474_string = "";
	var_450_object = var_473_object;
	func_3691(var_472_bool, var_473_object, "armor");
	var_475_bool = var_472_bool == 0; //@nz
	if(var_475_bool != 0) {
		var_462_int = 0;
	} else {
			@@var_450_object:GetProperty("armor", var_462_int);
	}
	var_477_string = ""; var_478_int = 0;
	var_452_int = var_478_int;
	func_3657(var_477_string, var_478_int);
	var_463_string = "armor_" + var_477_string;
	var_483_bool = 0; var_484_object = Obj(); var_485_string = "";
	var_450_object = var_484_object;
	var_463_string = var_485_string;
	func_3691(var_483_bool, var_484_object, var_485_string);
	var_486_bool = var_483_bool == 0; //@nz
	if(var_486_bool != 0) {
		var_464_int = 0;
	} else {
		@@var_450_object:GetProperty(var_463_string, var_464_int);

	}
	var_487_float = 0; var_488_float = 0; var_489_float = 0;
	var_490_int = var_462_int + var_464_int;
	var_488_float = var_490_int / (float)100.0;
	func_4237(var_487_float, var_488_float, (float)1);
	var_487_float = var_465_float;
	@@var_450_object:GetProperty("health", var_466_float);
	var_495_int = (int)1 - var_465_float;
	var_467_float = var_451_float * var_495_int;
	var_497_float = 0; var_498_float = 0; var_499_float = 0; var_500_float = 0;
	var_498_float = var_466_float - var_467_float;
	func_4244(var_497_float, var_498_float, (float)0, (float)1);
	@@var_450_object:SetProperty("health", var_497_float);
	var_503_bool = 0; var_504_object = Obj();
	var_450_object = var_504_object;
	func_3686(var_503_bool, var_504_object);
	if(var_503_bool != 0) {
		var_505_float = 0;
		var_505_float = -var_467_float;
		func_4260(var_505_float);
	}
	var_467_float = var_449_float;
	return 12;
	
}


func_4221(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj();
	self(var_108_object);
	var_108_object = var_106_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3199(var_0_bool, var_337_bool, var_338_float)
{
	var_339_bool = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_float = 0; var_344_bool = 0; var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); var_348_float = 0;
	
Label_3200:
	IsAnimationPlaying(var_344_bool);
	var_349_bool = var_344_bool == 0; //@nz
	if(var_349_bool != 0) {
	} else {
		var_350_bool = 0;
		func_3270(var_350_bool);
		if(var_350_bool != 0) {
			var_337_bool = 1;
			return 10;
		}
		var_393_bool = 0; var_394_object = Obj();
		var_394_object = var_0_bool;
		func_3817(var_393_bool, var_394_object);
		var_395_bool = var_393_bool == 0; //@nz
		if(var_395_bool != 0) {
			var_337_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_345_cvector);
		GetPFPosition(var_346_cvector);
		var_347_cvector = var_345_cvector - var_346_cvector;
		var_348_float = var_347_cvector | var_347_cvector;
		var_396_float = var_338_float * var_338_float;
		var_397_bool = var_348_float < var_396_float;
		if(var_397_bool != 0) {
			var_398_bool = 0; var_399_float = 0;
			var_338_float = var_399_float;
			func_3035(var_347_cvector, var_348_float, var_398_bool, var_399_float);
			var_337_bool = 1;
			sync();
			goto Label_3200;
		}
		return 10;
	}
	func_3374(var_348_float);
	var_337_bool = 0;
	return 10;
	
}


func_4227(var_50_cvector, var_51_cvector)
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


func_5251(var_90_bool)
{
	var_90_bool = 1;
	return 0;
}


func_4741(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0;
	GetInvItemByName(var_141_int, var_139_string);
	var_141_int = var_138_int;
	return 2;
}


func_5254(var_23_bool, var_24_object, var_25_object, var_26_bool)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0; var_31_bool = 0;
	var_24_object = var_28_object;
	var_25_object = var_29_object;
	var_26_bool = var_31_bool;
	func_5065(var_27_bool, var_28_object, var_29_object, (float)700.0, var_31_bool);
	var_27_bool = var_23_bool;
	return 0;
}


func_4746(var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	TaskCall(3);
	func_1943(var_20_object);
	TaskReturn();
	return 0;
}


func_4237(var_487_float, var_488_float, var_489_float)
{
	var_492_bool = var_488_float < var_489_float;
	if(var_492_bool != 0) {
		var_488_float = var_487_float;
	} else {
		var_489_float = var_487_float;
	}
	return 0;
	
}


func_5264(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj();
	var_101_object = var_103_object;
	func_3686(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		var_106_object = Obj();
		func_4221(var_106_object);
		ReportReputationChange(var_101_object, var_106_object, (float)-0.03999999910593033, (bool)1);
		var_111_bool = 0;
		func_4566((bool)1);
	}
	func_4542();
	var_245_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_4244(var_497_float, var_498_float, var_499_float, var_500_float)
{
	var_501_bool = var_498_float < var_499_float;
	if(var_501_bool != 0) {
		var_499_float = var_497_float;
		return 0;
	}
	var_502_bool = var_498_float > var_500_float;
	if(var_502_bool != 0) {
		var_500_float = var_497_float;
		return 0;
	}
	var_498_float = var_497_float;
	return 0;
}


func_2711(var_92_bool)
{
	var_92_bool = 1;
	return 0;
}


func_2713()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2718(var_102_object)
{
	var_109_object = Obj(); var_110_bool = 0; var_111_float = 0;
	var_102_object = var_109_object;
	func_2732(var_105_int, var_106_bool, var_107_float, var_108_int, var_102_object, var_109_object, (bool)1, (float)180.0);
	return 0;
}


func_4255(var_135_int, var_136_string)
{
	var_137_int = 0; var_138_int = 0;
	GetVariable(var_136_string, var_138_int);
	var_138_int = var_135_int;
	return 2;
}


func_4260(var_505_float)
{
	var_506_object = Obj(); var_507_object = Obj();
	CreateFloatVector(var_507_object);
	@@var_507_object:add(var_505_float);
	var_509_bool = var_505_float < (int)0;
	if(var_509_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_507_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2726(var_446_float)
{
	var_446_float = 0.05000000074505806;
	return 0;
}


func_2729(var_453_int)
{
	var_453_int = 0;
	return 0;
}


func_3242(var_0_bool, var_352_bool)
{
	var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0); var_356_float = 0; var_357_float = 0; var_358_cvector = CVector(0,0,0); var_359_cvector = CVector(0,0,0); var_360_cvector = CVector(0,0,0); var_361_float = 0; var_362_float = 0;
	var_363_bool = 0; var_364_object = Obj();
	var_364_object = var_0_bool;
	func_3817(var_363_bool, var_364_object);
	var_365_bool = var_363_bool == 0; //@nz
	if(var_365_bool != 0) {
		var_352_bool = 0;
		return 10;
	}
	var_366_bool = 0;
	func_3331(var_362_float, var_366_bool);
	if(var_366_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_358_cvector);
		GetPFPosition(var_359_cvector);
		var_360_cvector = var_358_cvector - var_359_cvector;
		var_361_float = var_360_cvector | var_360_cvector;
		@@@var_0_bool:GetAttackDistance(var_362_float);
		var_362_float = var_362_float + (int)50;
		var_368_float = var_362_float * var_362_float;
		var_352_bool = var_361_float <= var_368_float;
		return 10;
	}
	var_352_bool = 0;
	return 10;
}


func_2732(var_0_bool, var_3_object, var_5_bool, var_109_object, var_110_bool, var_111_float, var_186_bool, var_278_bool)
{
	var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0; var_116_bool = 0; var_117_float = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_bool = 0; var_127_bool = 0; var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_float = 0; var_131_cvector = CVector(0,0,0); var_132_bool = 0; var_133_float = 0;
	func_2961(var_131_cvector, var_132_bool, var_133_float);
	var_5_bool = 0;
	var_158_bool = IsFuncExist(var_109_object, "@GetAttackDistance", (int)1);
	if(var_158_bool != 0) {
		@@var_109_object:GetAttackDistance(var_123_float);
		var_123_float = var_123_float + (int)50;
	} else {
							var_111_float = var_123_float;
	}
	var_161_bool = var_123_float >= (int)150;
	if(var_161_bool != 0) {
		var_123_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_109_object;
	IsPlayerActor(var_0_bool, var_126_bool);
	var_162_bool = var_126_bool;
	if(var_162_bool != 0) {
		PlayGlobalMusic("attack");
		var_164_object = Obj();
		func_4221(var_164_object);
		SendPlayerEnemy(var_109_object, var_164_object);
	}
	var_167_bool = var_110_bool;
	if(var_167_bool != 0) {
		var_127_bool = 0;
	} else {
						var_127_bool = 1;

	}
	var_128_float = (float)400.0 + var_123_float;
	
Label_2772:
	var_169_bool = 0;
	var_169_bool = 0;
	var_170_bool = 0; var_171_object = Obj();
	var_171_object = var_0_bool;
	func_3817(var_170_bool, var_171_object);
	if(var_170_bool != 0) {
		var_172_bool = var_3_object == 0; //@nz
		if(var_172_bool != 0) {
			var_169_bool = 1;
		}
	}
	if(var_169_bool != 0) {
		func_3374(var_133_float);
		@@@var_0_bool:GetPFPosition(var_124_cvector);
		GetPFPosition(var_125_cvector);
		var_129_cvector = var_124_cvector - var_125_cvector;
		var_130_float = var_129_cvector | var_129_cvector;
		var_178_float = var_128_float * var_128_float;
		var_179_bool = var_130_float >= var_178_float;
		if(var_179_bool != 0) {
			var_180_bool = 0; var_181_object = Obj(); var_182_float = 0; var_183_float = 0; var_184_bool = 0; var_185_bool = 0;
			var_181_object = var_0_bool;
			var_123_float = var_182_float;
			TaskCall(7);
			func_3401(var_188_bool, var_180_bool, var_181_object, var_182_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_263_bool = var_186_bool == 0; //@nz
			if(var_263_bool != 0) {
			} else {
				var_127_bool = 0;
		} else {
				var_269_float = var_111_float * var_111_float;
				var_270_bool = var_130_float >= var_269_float;
				if(var_270_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_131_cvector);
					CanReachByPF(var_132_bool, var_131_cvector);
					var_271_bool = var_132_bool == 0; //@nz
					if(var_271_bool != 0) {
						var_272_bool = 0; var_273_object = Obj(); var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_bool = 0;
						var_273_object = var_0_bool;
						var_123_float = var_274_float;
						TaskCall(7);
						func_3401(var_280_bool, var_272_bool, var_273_object, var_274_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_281_bool = var_278_bool == 0; //@nz
						if(var_281_bool != 0) {
							goto Label_2944;
						}
						var_127_bool = 0;
						goto Label_2772;
					}
					var_282_bool = var_127_bool == 0; //@nz
					if(var_282_bool != 0) {
						var_283_object = Obj();
						var_283_object = var_0_bool;
						func_3967(var_283_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_3374(var_133_float);
						StopAsync();
						var_127_bool = 1;
						var_294_bool = 0; var_295_object = Obj();
						var_295_object = var_0_bool;
						func_3817(var_294_bool, var_295_object);
						var_296_bool = var_294_bool == 0; //@nz
						if(var_296_bool != 0) {
							goto Label_2944;
						}
					}
					rand(var_133_float);
					var_297_bool = 0;
					var_299_bool = var_133_float < (float)0.25;
					if(var_299_bool != 1) {
						var_300_bool = 0;
						func_3331((bool)1, var_300_bool);
						if(var_300_bool != 1) {
							var_297_bool = 0;
						}
					}
					if(var_297_bool != 0) {
						Face(var_0_bool);
						func_3381();
						PlayAnimation("all", "attack_stay");
						var_337_bool = 0; var_338_float = 0;
						var_111_float = var_338_float;
						func_3199(var_133_float, var_337_bool, var_338_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_3374(var_133_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_559_bool = 0;
						func_3331(var_133_float, var_559_bool);
						var_560_bool = var_559_bool == 0; //@nz
						if(var_560_bool == 0) goto Label_2934;
						var_561_bool = 0; var_562_object = Obj();
						var_562_object = var_0_bool;
						func_3817(var_561_bool, var_562_object);
						var_563_bool = var_561_bool == 0; //@nz
						if(var_563_bool != 0) {
							goto Label_2944;
						}
						@@@var_0_bool:GetPFPosition(var_124_cvector);
						GetPFPosition(var_125_cvector);
						var_129_cvector = var_124_cvector - var_125_cvector;
						var_130_float = var_129_cvector | var_129_cvector;
						var_564_float = var_111_float * var_111_float;
						var_565_bool = var_130_float < var_564_float;
						if(var_565_bool == 0) goto Label_2934;
						var_566_bool = 0; var_567_float = 0;
						var_111_float = var_567_float;
						func_3035(var_132_bool, var_133_float, var_566_bool, var_567_float);
						var_568_bool = var_566_bool == 0; //@nz
						if(var_568_bool == 0) goto Label_2934;
						goto Label_2944;
				}
					var_569_bool = 0; var_570_float = 0;
					var_111_float = var_570_float;
					func_3035(var_132_bool, var_133_float, var_569_bool, var_570_float);
					var_571_bool = var_569_bool == 0; //@nz
					if(var_571_bool != 0) {
						goto Label_2944;
					}
					var_127_bool = 1;

				}
			Label_2934:
				goto Label_2943;
		}
		Label_2943:
			goto Label_2772;

		}
	}
Label_2944:
	WaitForAnimEnd();
	var_264_object = var_3_object;
	if(var_264_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_267_bool = var_126_bool;
	if(var_267_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_4277(var_120_int)
{
	var_121_float = 0; var_122_float = 0;
	GetGameTime(var_122_float);
	var_124_int = 0;
	var_124_int = var_122_float / (int)24;
	var_120_int = (int)1 + var_124_int;
	return 2;
}


func_4791(var_22_bool, var_23_object, var_24_string)
{
	var_26_bool = var_24_string == "unholster";
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_23_object = var_28_object;
		func_5155(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0x12d5";
	}
	var_30_bool = var_24_string == "player_shot";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_23_object = var_32_object;
		func_5160(var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0x12d5";
	}
	var_34_bool = var_24_string == "battle";
	if(var_34_bool != 0) {
		var_35_bool = 0; var_36_object = Obj();
		var_23_object = var_36_object;
		func_5165(var_36_object);
		var_35_bool = var_22_bool;
		return 0;
	}
	var_22_bool = 0;
	return 0;
}


func_4286(var_258_int)
{
	var_259_float = 0; var_260_float = 0;
	GetGameTime(var_260_float);
	var_261_int = 0;
	var_260_float = var_261_int;
	var_258_int = var_261_int % (int)24;
	return 2;
}


func_3776(var_46_bool, var_47_object)
{
	var_48_bool = 0; var_49_bool = 0;
	@@var_47_object:IsDead(var_49_bool);
	var_49_bool = var_46_bool;
	return 2;
}


func_3781(var_35_bool, var_36_object)
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
		func_3776(var_46_bool, var_47_object);
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


func_3270(var_350_bool)
{
	var_351_bool = 0;
	var_351_bool = 0;
	var_352_bool = 0;
	func_3242(var_351_bool, var_352_bool);
	if(var_352_bool != 0) {
		var_369_bool = 0;
		func_3286(var_350_bool, var_351_bool, var_369_bool);
		if(var_369_bool != 0) {
			var_351_bool = 1;
		}
	}
	if(var_351_bool != 0) {
		var_350_bool = 1;
		return 0;
	}
	var_350_bool = 0;
	return 0;
}


func_4294(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsPlayerActor(var_21_object, var_23_bool);
	var_24_bool = var_23_bool;
	if(var_24_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_4303()
{
	var_410_object = Obj(); var_411_object = Obj();
	GetScene(var_411_object);
	var_413_object = Obj();
	func_4221(var_413_object);
	BroadcastMessage("battle", var_413_object, var_411_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3286(var_0_bool, var_4_string, var_369_bool)
{
	var_370_object = Obj(); var_371_bool = 0; var_372_float = 0; var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_object = Obj(); var_376_bool = 0; var_377_float = 0; var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0);
	GetScene(var_375_object);
	var_376_bool = 0;
	
Label_3290:
	var_380_cvector = CVector(0,0,0); var_381_object = Obj();
	var_381_object = var_0_bool;
	func_3671(var_380_cvector, var_381_object);
	var_386_int = -var_380_cvector;
	FindDirLength(var_377_float, var_386_int, var_4_string);
	var_387_bool = var_377_float < var_4_string;
	if(var_387_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_378_cvector);
		GetPFPosition(var_379_cvector);
		WaitForAnimEnd();
		func_3374(var_379_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_376_bool = 1;
		var_391_bool = 0;
		func_3242(var_379_cvector, var_391_bool);
		var_392_bool = var_391_bool == 0; //@nz
		if(var_392_bool != 0) {
			goto Label_3328;
		}
		goto Label_3290;
	}
Label_3328:
	var_376_bool = var_369_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_4823(var_37_object, var_38_string)
{
	var_40_bool = var_38_string == "unholster";
	if(var_40_bool != 0) {
		var_37_object = Obj();
		func_5158();
	} else {
		var_43_bool = var_38_string == "player_shot";
		if(var_43_bool != 0) {
			var_37_object = Obj();
			func_5163();
			goto Label_4847;
		}
		var_46_bool = var_38_string == "battle";
		if(var_46_bool == 0) goto Label_4847;
		var_37_object = Obj();
		func_5168();
	}
Label_4847:
	return 0;
	
}


func_4314(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_4255(var_219_int, "branch");
	var_222_bool = var_219_int == (int)0;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_4326(var_133_bool)
{
	var_135_int = 0; var_136_string = "";
	func_4255(var_135_int, "branch");
	var_140_bool = var_135_int == (int)2;
	if(var_140_bool != 0) {
		var_133_bool = 1;
		return 0;
	}
	var_133_bool = 0;
	return 0;
}


func_3817(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0;
	var_35_bool = 0; var_36_object = Obj();
	var_32_object = var_36_object;
	func_3781(var_35_bool, var_36_object);
	var_52_bool = var_35_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_31_bool = 0;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_32_object = var_54_object;
	func_3691(var_53_bool, var_54_object, "noaccess");
	var_62_bool = var_53_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_31_bool = 1;
		return 2;
	}
	@@var_32_object:GetProperty("noaccess", var_34_int);
	var_31_bool = var_34_int == (int)0;
	return 2;
}


func_4848(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	var_23_bool = 0;
	var_23_bool = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_20_object = var_25_object;
	func_5155(var_25_object);
	if(var_24_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_20_object = var_27_object;
		func_3686(var_26_bool, var_27_object);
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


func_4338(var_211_bool, var_212_object)
{
	var_213_bool = 0; var_214_object = Obj();
	var_212_object = var_214_object;
	func_4398(var_214_object);
	if(var_213_bool != 0) {
		var_211_bool = 1;
		return 0;
	}
	var_211_bool = 0;
	return 0;
}


func_4348(var_272_bool, var_273_object)
{
	var_274_bool = 0; var_275_object = Obj();
	var_273_object = var_275_object;
	func_4405(var_275_object);
	if(var_274_bool != 0) {
		var_272_bool = 1;
		return 0;
	}
	var_272_bool = 0;
	return 0;
}


func_3841(var_35_object)
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


func_3331(var_0_bool, var_300_bool)
{
	var_301_bool = 0; var_302_bool = 0;
	var_305_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_305_bool != 0) {
		@@@var_0_bool:IsAttacking(var_302_bool);
		var_302_bool = var_300_bool;
		return 2;
	}
	var_300_bool = 0;
	return 2;
}


func_4358(var_141_bool, var_142_object)
{
	var_143_bool = 0; var_144_object = Obj();
	var_142_object = var_144_object;
	func_4412(var_144_object);
	if(var_143_bool != 0) {
		var_141_bool = 1;
		return 0;
	}
	var_141_bool = 0;
	return 0;
}


func_2310(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_2446(var_17_object, var_18_bool);
	return 0;
}


func_4871(var_31_object)
{
	var_31_object = Obj();
	func_5158();
	return 0;
}


func_4877(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_3686(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_object = Obj();
		func_4221(var_26_object);
		ReportReputationChange(var_21_object, var_26_object, (float)-0.009999999776482582);
	}
	return 0;
}


func_2318(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_2453(var_22_bool, var_23_int);
	return 0;
}


func_3342(var_2_object, var_5_bool)
{
	var_417_float = 0; var_418_int = 0; var_419_float = 0; var_420_int = 0;
	var_421_bool = var_2_object == 0; //@nz
	if(var_421_bool != 0) {
		return 4;
	}
	var_422_bool = var_5_bool;
	if(var_422_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_425_bool = var_5_bool > (int)0;
		if(var_425_bool != 0) {
			return 4;
		}
	}
	rand(var_419_float);
	var_426_float = 0;
	func_3392(var_426_float);
	var_427_bool = var_419_float < var_426_float;
	if(var_427_bool != 0) {
		irand(var_420_int, var_2_object);
		var_420_int = var_420_int + (int)1;
		var_430_int = "attack" + var_420_int;
		Speak(var_430_int);
		var_431_int = 0;
		func_3390(var_431_int);
		var_5_bool = var_431_int;
	}
	return 4;
}


func_4368(var_296_bool, var_297_object)
{
	var_298_bool = 0; var_299_object = Obj();
	var_297_object = var_299_object;
	func_4419(var_299_object);
	if(var_298_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_4378(var_278_bool, var_279_object)
{
	var_280_bool = 0; var_281_object = Obj();
	var_279_object = var_281_object;
	func_4426(var_281_object);
	if(var_280_bool != 0) {
		var_278_bool = 1;
		return 0;
	}
	var_278_bool = 0;
	return 0;
}


func_4890(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_string == "heal";
	if(var_24_bool != 0) {
		FindActor(var_22_object, "player");
		var_26_bool = 0; var_27_object = Obj();
		var_22_object = var_27_object;
		func_5170(var_27_object);
		var_26_bool = var_19_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = 0;
	return 2;
}


func_2335(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_19_object = var_25_object;
	func_3817(var_24_bool, var_25_object);
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
	func_4943(var_61_int, var_62_object);
	var_61_int = var_23_int;
	var_75_bool = var_23_int > (int)0;
	if(var_75_bool != 0) {
		var_77_bool = var_23_int > (int)1;
		if(var_77_bool != 0) {
			func_2318(var_23_int);
		}
		var_79_object = Obj();
		var_19_object = var_79_object;
		func_4953(var_79_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_4388(var_254_bool, var_255_object)
{
	var_256_bool = 0; var_257_object = Obj();
	var_255_object = var_257_object;
	func_4447(var_257_object);
	if(var_256_bool != 0) {
		var_254_bool = 1;
		return 0;
	}
	var_254_bool = 0;
	return 0;
}


func_4906(var_28_string)
{
	var_29_object = Obj(); var_30_object = Obj();
	var_32_bool = var_28_string == "heal";
	if(var_32_bool != 0) {
		FindActor(var_30_object, "player");
		var_30_object = Obj();
		func_5173();
		var_30_object = 0;
	}
	return 2;
}


func_3885(var_22_object, var_23_int, var_24_float)
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
		func_3671(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_4227(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		CreateVectorVector(var_35_object);
		var_36_int = 1;

	Label_3914:
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
			goto Label_3914;
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
			func_3953(var_69_float, var_70_cvector, var_71_cvector);
			return 18;
		}
		var_35_object = 0;
	}
	var_112_object = Obj();
	var_22_object = var_112_object;
	func_3841(var_112_object);
	return 18;
	
}


func_3374(var_0_bool)
{
	var_173_object = Obj();
	var_173_object = var_0_bool;
	func_4294(var_173_object);
	return 0;
}


func_4398(var_213_bool)
{
	var_215_int = 0;
	func_4277(var_215_int);
	var_213_bool = var_215_int == (int)1;
	return 0;
}


func_3379(var_514_int)
{
	var_514_int = 0;
	return 0;
}


func_3381()
{
	var_306_string = "";
	func_4180("attack_stay");
	return 0;
}


func_4405(var_274_bool)
{
	var_276_int = 0;
	func_4277(var_276_int);
	var_274_bool = var_276_int == (int)2;
	return 0;
}


func_4919(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = "";
	var_77_int = var_74_int;
	if(var_77_int != 0) {
		"idle" = "idle" + var_74_int;
	}
	var_76_string = var_73_string;
	return 2;
}


func_3386()
{
	return 0;
}


func_3388(var_539_bool)
{
	var_539_bool = 1;
	return 0;
}


func_4412(var_143_bool)
{
	var_145_int = 0;
	func_4277(var_145_int);
	var_143_bool = var_145_int == (int)4;
	return 0;
}


func_4926(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0;
	var_70_int = 0;
	
Label_4928:
	var_73_string = ""; var_74_int = 0;
	var_70_int = var_74_int;
	func_4919(var_73_string, var_74_int);
	HasAnimation(var_71_bool, "all", var_73_string);
	var_78_bool = var_71_bool == 0; //@nz
	if(var_78_bool != 0) {
	} else {
		var_70_int = var_70_int + (int)1;
		goto Label_4928;
	}
	var_70_int = var_67_int;
	return 4;
	
}


func_3390(var_431_int)
{
	var_431_int = 1;
	return 0;
}


func_3392(var_426_float)
{
	var_426_float = 0.5;
	return 0;
}


func_4419(var_298_bool)
{
	var_300_int = 0;
	func_4277(var_300_int);
	var_298_bool = var_300_int == (int)5;
	return 0;
}


func_2375(var_0_bool, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_30_float, (float)0.5);
	Sleep(var_30_float);
	
Label_2383:
	var_37_bool = var_0_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_38_bool = var_1_object == 0; //@nz
		if(var_38_bool != 0) {

		Label_2387:
			GetPosition(var_32_cvector);
			var_39_float = 0;
			func_2434(var_39_float);
			GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool);
			var_42_bool = var_33_bool;
			if(var_42_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_2387;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_2403;
	
Label_2403:
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0);
	var_31_cvector = var_44_cvector;
	func_2462(var_43_object, var_44_cvector);
	var_43_object = var_34_object;
	var_47_bool = var_34_object != 0; //@nn
	if(var_47_bool != 0) {
		RotatePath(var_34_object, var_35_bool);
		var_48_bool = var_35_bool;
		if(var_48_bool != 0) {
			var_49_bool = 0;
			func_2460(var_49_bool);
			FollowPath(var_34_object, var_49_bool, var_35_bool);
			var_34_object = 0;
			var_50_bool = var_35_bool;
			if(var_50_bool != 0) {
				TaskCall(5);
				func_2632();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_34_object = 0;
	goto Label_2383;
	
}


func_3401(var_2_object, var_180_bool, var_181_object, var_182_float, var_183_float, var_184_bool, var_185_bool)
{
	var_189_bool = 0; var_190_bool = 0; var_191_bool = 0; var_192_bool = 0;
	var_193_object = Obj();
	var_181_object = var_193_object;
	func_4294(var_193_object);
	SetTimer((int)1, (int)5);
	CanSee(var_191_bool, var_181_object);
	var_196_bool = var_191_bool;
	if(var_196_bool != 0) {
		var_2_object = true;
		var_197_object = Obj();
		var_181_object = var_197_object;
		func_4162(var_197_object);
	} else {
		var_2_object = false;
	}
	var_204_bool = 0; var_205_object = Obj();
	var_181_object = var_205_object;
	func_3686(var_204_bool, var_205_object);
	if(var_204_bool != 0) {
		var_208_object = Obj();
		func_4221(var_208_object);
		SendPlayerEnemy(var_181_object, var_208_object);
	}
	var_209_bool = 0; var_210_object = Obj(); var_211_float = 0; var_212_float = 0; var_213_bool = 0; var_214_bool = 0;
	var_181_object = var_210_object;
	var_182_float = var_211_float;
	var_183_float = var_212_float;
	var_184_bool = var_213_bool;
	var_185_bool = var_214_bool;
	func_3506(var_191_bool, var_192_bool, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool);
	var_209_bool = var_192_bool;
	var_260_object = var_2_object;
	if(var_260_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_192_bool = var_180_bool;
	return 4;
	
}


func_4426(var_280_bool)
{
	var_282_bool = 0;
	var_282_bool = 0;
	var_283_int = 0;
	func_4286(var_283_int);
	var_285_bool = var_283_int >= (int)0;
	if(var_285_bool != 0) {
		var_286_int = 0;
		func_4286(var_286_int);
		var_288_bool = var_286_int < (int)12;
		if(var_288_bool != 0) {
			var_282_bool = 1;
		}
	}
	if(var_282_bool != 0) {
		var_280_bool = 1;
		return 0;
	}
	var_280_bool = 0;
	return 0;
}


func_4943(var_61_int, var_62_object)
{
	var_63_bool = 0; var_64_object = Obj();
	var_62_object = var_64_object;
	func_5235(var_63_bool, var_64_object);
	if(var_63_bool != 0) {
		var_61_int = 2;
	} else {
		var_61_int = 0;
	}
	return 0;
	
}


func_4953(var_79_object)
{
	var_80_object = Obj();
	var_79_object = var_80_object;
	func_4969(var_80_object);
	return 0;
}


func_4959(var_88_int, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj();
	var_89_object = var_91_object;
	func_3817(var_90_bool, var_91_object);
	if(var_90_bool != 0) {
		var_88_int = 2;
	} else {
		var_88_int = 0;
	}
	return 0;
	
}


func_4447(var_256_bool)
{
	var_258_int = 0;
	func_4286(var_258_int);
	var_264_bool = var_258_int >= (int)12;
	if(var_264_bool != 0) {
		var_256_bool = 1;
		return 0;
	}
	var_256_bool = 0;
	return 0;
}


func_4969(var_101_object)
{
	var_102_object = Obj();
	var_101_object = var_102_object;
	TaskCall(6);
	func_2718(var_102_object);
	TaskReturn();
	return 0;
}


func_4458(var_116_int)
{
	var_117_int = 0; var_118_int = 0;
	GetVariable("branch", var_118_int);
	var_121_bool = var_118_int == (int)0;
	if(var_121_bool != 0) {
		var_116_int = 1;
		return 2;
	EMIT "GOTO 0x1179";
	}
	var_123_bool = var_118_int == (int)1;
	if(var_123_bool != 0) {
		var_116_int = 2;
		return 2;
	}
	var_116_int = 3;
	return 2;
}


func_3953(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetScene(var_31_object);
	AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	var_35_object = Obj();
	var_24_object = var_35_object;
	func_3841(var_35_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4977(var_34_bool, var_35_object, var_36_bool)
{
	var_37_string = ""; var_38_string = ""; var_39_string = ""; var_40_string = "";
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_35_object = var_42_object;
	func_3691(var_41_bool, var_42_object, "class");
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
	EMIT "GOTO 0x13ba";
	}
	var_59_bool = var_40_string == "rat_big";
	if(var_59_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	var_61_bool = var_40_string == "dog";
	if(var_61_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	var_63_bool = var_40_string == "grabitel";
	if(var_63_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	var_65_bool = var_40_string == "bomber";
	if(var_65_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	var_67_bool = var_40_string == "sanitar";
	if(var_67_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	var_69_bool = var_40_string == "hunter";
	if(var_69_bool != 0) {
		var_34_bool = 0;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	var_71_bool = var_40_string == "soldier";
	if(var_71_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_34_bool = 1;
	return 4;
}


func_4475(var_225_int)
{
	var_226_int = 0; var_227_int = 0;
	GetVariable("branch", var_227_int);
	var_227_int = var_225_int;
	return 2;
}


func_3967(var_283_object)
{
	var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0);
	@@var_283_object:GetPosition(var_287_cvector);
	GetPosition(var_288_cvector);
	var_289_cvector = var_287_cvector - var_288_cvector;
	var_290_float = GetByIndex(var_289_cvector, 0);
	var_291_float = GetByIndex(var_289_cvector, 2);
	RotateAsync(var_290_float, var_291_float);
	return 6;
}


func_4481(var_33_object)
{
	var_34_int = 0;
	func_4475(var_34_int);
	var_39_bool = var_34_int == (int)1;
	if(var_39_bool != 0) {
		WorkWithCorpse(var_33_object);
	} else {
		Barter(var_33_object);
	}
	return 0;
	
}


func_2434(var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	GetCameraFarDistance(var_41_float);
	var_41_float = var_39_float;
	return 2;
}


func_3464(var_2_object)
{
	KillTimer((int)1);
	var_20_object = var_2_object;
	if(var_20_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_3630(var_18_object);
	return 0;
}


func_3978(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_2446(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_3983(var_64_bool, var_65_object, var_66_float)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0;
	@@var_65_object:GetPosition(var_77_cvector);
	@@var_65_object:GetEyesHeight(var_76_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	var_85_float = var_85_float + var_76_float;
	SetByIndex(var_77_cvector, 1) = var_85_float;
	GetPosition(var_78_cvector);
	GetEyesHeight(var_76_float);
	var_86_float = GetByIndex(var_78_cvector, 1);
	var_86_float = var_86_float + var_76_float;
	SetByIndex(var_78_cvector, 1) = var_86_float;
	var_79_cvector = var_77_cvector - var_78_cvector;
	var_87_float = GetByIndex(var_79_cvector, 1);
	SetByIndex(var_79_cvector, 1) = (float)0;
	var_88_int = var_79_cvector | var_79_cvector;
	var_89_float = sqrt(var_88_int);
	var_79_cvector = var_79_cvector / var_89_float;
	var_80_cvector = -var_79_cvector;
	var_90_float = var_79_cvector * var_66_float;
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	var_92_cvector = var_80_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4227(var_91_cvector, var_92_cvector);
	var_100_float = var_91_cvector * (int)25;
	var_101_int = var_90_float + var_100_float;
	var_81_cvector = var_101_int - CVector(0.0, 10.0, 0.0);
	var_82_cvector = var_78_cvector + var_81_cvector;
	IsOverrideActive(var_83_bool);
	var_103_bool = var_83_bool;
	if(var_103_bool != 0) {
		var_64_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_82_cvector, var_80_cvector, (bool)1);
	var_105_float = GetByIndex(var_81_cvector, 0);
	var_106_float = GetByIndex(var_81_cvector, 2);
	Rotate(var_105_float, var_106_float);
	var_107_bool = 0;
	func_5183(var_107_bool);
	if(var_107_bool != 0) {
	} else {
		HasAnimationTrack(var_84_bool, "head");
		var_109_bool = var_84_bool;
		if(var_109_bool == 0) goto Label_4046;
		LookAsyncCamera("head");
	}
Label_4046:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_64_bool = 1;
	return 18;
	
}


func_4494(var_117_int, var_118_int)
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
		if(var_144_bool == 0) goto Label_4512;
		return 4;
	}
Label_4512:
	var_130_int = var_130_int + var_117_int;
	var_137_bool = var_130_int == (int)0;
	if(var_137_bool != 0) {
		return 4;
	}
	var_138_int = 0; var_139_string = "";
	func_4741(var_138_int, "Money");
	AddItem(var_131_bool, var_138_int, (int)0, var_130_int);
	return 4;
	
}


func_2961(var_1_object, var_2_object, var_4_string)
{
	var_134_bool = 0; var_135_bool = 0; var_136_cvector = CVector(0,0,0); var_137_bool = 0; var_138_bool = 0; var_139_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_2963:
	var_143_int = var_1_object + (int)1;
	var_144_int = "attack_begin" + var_143_int;
	HasAnimation(var_137_bool, "all", var_144_int);
	var_145_bool = var_137_bool == 0; //@nz
	if(var_145_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_2963;
	}
	var_2_object = 0;
	
Label_2977:
	var_148_int = var_2_object + (int)1;
	var_149_int = "attack" + var_148_int;
	IsExisting3DSound(var_138_bool, var_149_int);
	var_150_bool = var_138_bool == 0; //@nz
	if(var_150_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_2977;

	}
	GetAnimationOffset(var_139_cvector, "all", "bjump");
	var_153_float = GetByIndex(var_139_cvector, 2);
	var_4_string = -var_153_float;
	return 6;
	
}


func_2453(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_1943(var_20_object)
{
	EventDisable(0);
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_1976(var_21_object);
	var_101_object = Obj();
	var_20_object = var_101_object;
	func_5264(var_101_object);
	EventEnable(0);
	
Label_1954:
	Hold();
	goto Label_1954;
}
EMIT "Return(); Pop(0)";


func_2460(var_49_bool)
{
	var_49_bool = 0;
	return 0;
}


func_2462(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindShiftedPathTo(var_46_object, var_44_cvector);
	var_46_object = var_43_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_424(var_2_object, var_152_string)
{
	var_153_bool = 0;
	func_5183(var_153_bool);
	var_154_bool = var_153_bool == 0; //@nz
	if(var_154_bool != 0) {
		return 0;
	}
	var_155_bool = var_152_string == var_2_object;
	if(var_155_bool != 0) {
		return 0;
	}
	var_156_string = ""; var_157_bool = 0;
	var_152_string = var_156_string;
	var_159_bool = var_152_string == "";
	if(var_159_bool != 0) {
		var_157_bool = 0;
	} else {
		var_157_bool = 1;
	}
	func_4147(var_156_string, var_157_bool);
	var_2_object = var_152_string;
	return 0;
	
}


func_4525(var_231_string)
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


func_3506(var_0_bool, var_1_object, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool)
{
	var_215_bool = 0; var_216_bool = 0; var_217_object = Obj(); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_float = 0; var_222_object = Obj(); var_223_bool = 0; var_224_bool = 0; var_225_object = Obj(); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_float = 0; var_230_object = Obj();
	var_0_bool = false;
	var_1_object = var_210_object;
	var_214_bool = var_224_bool;
	
Label_3510:
	var_231_bool = 0; var_232_object = Obj();
	var_210_object = var_232_object;
	func_3646(var_231_bool, var_232_object);
	var_235_bool = var_231_bool == 0; //@nz
	if(var_235_bool != 0) {
		var_209_bool = 0;
		return 16;
	}
	@@var_210_object:GetPosition(var_226_cvector);
	GetPosition(var_227_cvector);
	var_228_cvector = var_226_cvector - var_227_cvector;
	var_229_float = var_228_cvector | var_228_cvector;
	var_236_bool = 0;
	var_236_bool = 0;
	var_238_bool = var_212_float > (int)0;
	if(var_238_bool != 0) {
		var_239_float = var_212_float * var_212_float;
		var_240_bool = var_229_float > var_239_float;
		if(var_240_bool != 0) {
			var_236_bool = 1;
		}
	}
	if(var_236_bool != 0) {
		Stop();
		var_209_bool = 0;
		return 16;
	}
	var_241_float = var_211_float * var_211_float;
	var_242_bool = var_229_float > var_241_float;
	if(var_242_bool != 0) {
		@@var_210_object:GetPFPosition(var_226_cvector);
		FindPathTo(var_230_object, var_226_cvector);
		var_243_bool = var_230_object != 0; //@nn
		if(var_243_bool != 0) {
			var_230_object = var_225_object;
			var_230_object = 0;
		}
		var_244_bool = var_225_object != 0; //@nn
		if(var_244_bool != 0) {
			var_245_bool = var_224_bool;
			if(var_245_bool == 0) goto Label_3559;
			var_224_bool = 0;
			RotatePath(var_225_object, var_223_bool);
			var_246_bool = var_223_bool == 0; //@nz
			if(var_246_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_249_string = "";
				func_3653(var_249_string);
				var_250_string = "";
				func_3655(var_250_string);
				FollowPath(var_225_object, var_213_bool, var_223_bool, var_249_string, var_250_string);
				var_251_bool = var_223_bool == 0; //@nz
				if(var_251_bool != 0) {
					var_252_bool = var_0_bool;
					if(var_252_bool != 0) {
						var_225_object = 0;
						goto Label_3606;
					EMIT "GOTO 0xdfb";
					}
				} else {
					var_225_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_223_bool);
					var_255_bool = var_223_bool == 0; //@nz
					if(var_255_bool != 0) {
						var_256_bool = var_0_bool;
						if(var_256_bool != 0) {
							var_225_object = 0;
							goto Label_3606;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_3606;
	}
			var_230_object = 0;
			goto Label_3604;

		Label_3604:
			var_225_object = 0;

		}
		goto Label_3510;
	}
Label_3606:
	var_209_bool = !var_0_bool;
	return 16;
	
}


func_2996(var_0_bool, var_435_float, var_436_int)
{
	var_437_object = Obj(); var_438_float = 0; var_439_float = 0; var_440_object = Obj(); var_441_float = 0; var_442_float = 0;
	var_444_float = var_435_float * (float)0.8999999761581421;
	GetVictim(var_444_float, var_440_object);
	ReportAttack(var_0_bool);
	var_445_bool = var_440_object == var_0_bool;
	if(var_445_bool != 0) {
		var_446_float = 0; var_447_object = Obj(); var_448_int = 0;
		var_440_object = var_447_object;
		var_436_int = var_448_int;
		func_2726(var_448_int);
		var_446_float = var_441_float;
		var_449_float = 0; var_450_object = Obj(); var_451_float = 0; var_452_int = 0;
		var_440_object = var_450_object;
		var_441_float = var_451_float;
		var_453_int = 0; var_454_object = Obj(); var_455_int = 0;
		var_440_object = var_454_object;
		var_436_int = var_455_int;
		func_2729(var_455_int);
		var_453_int = var_452_int;
		func_3703(var_449_float, var_450_object, var_451_float, var_452_int);
		var_449_float = var_442_float;
		var_514_int = 0;
		func_3379(var_514_int);
		ReportHit(var_0_bool, var_514_int, var_442_float, var_441_float);
		var_515_object = Obj(); var_516_float = 0;
		var_440_object = var_515_object;
		var_442_float = var_516_float;
		func_3386();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1976(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = var_21_object == 0; //@ne
	if(var_42_bool != 0) {
		var_43_string = "";
		func_2067("fdie");
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
		func_4180(var_96_string);
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


func_5052(var_85_int, var_86_object)
{
	var_88_int = 0; var_89_object = Obj();
	var_86_object = var_89_object;
	func_4959(var_88_int, var_89_object);
	var_88_int = var_85_int;
	return 0;
}


func_4542()
{
	var_225_int = 0;
	func_4475(var_225_int);
	var_230_bool = var_225_int != (int)1;
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_string = "";
	func_4525("liver");
	var_242_string = "";
	func_4525("kidney");
	var_243_string = "";
	func_4525("heart");
	var_244_string = "";
	func_4525("blood");
	return 0;
}


func_5059(var_122_object)
{
	var_123_object = Obj();
	var_122_object = var_123_object;
	func_4969(var_123_object);
	return 0;
}


func_5065(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0;
	var_29_object = var_35_object;
	var_36_bool = !var_31_bool;
	func_4977(var_34_bool, var_35_object, var_36_bool);
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
		func_3678(var_75_float, var_76_object);
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


func_4052()
{
	var_325_bool = 0; var_326_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_328_bool = 0;
	func_5183(var_328_bool);
	if(var_328_bool != 0) {
	} else {
		HasAnimationTrack(var_326_bool, "head");
		var_330_bool = var_326_bool;
		if(var_330_bool == 0) goto Label_4069;
		UnlookAsync("head");
	}
Label_4069:
	return 2;
	
}


func_4566(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0;
	var_116_bool = var_111_bool;
	if(var_116_bool != 0) {
		var_117_int = 0; var_118_int = 0;
		var_120_int = 0;
		func_4277(var_120_int);
		var_127_float = var_120_int * (int)100;
		var_118_int = (int)100 + var_127_float;
		func_4494((int)0, var_118_int);
		irand(var_114_int, (int)8);
		var_147_bool = var_114_int == (int)0;
		if(var_147_bool != 0) {
			var_148_int = 0; var_149_string = "";
			func_4741(var_148_int, "lemon");
			AddItem(var_115_bool, var_148_int, (int)0, (int)1);
		} else {
			var_153_bool = var_114_int == (int)1;
			if(var_153_bool != 0) {
				var_154_int = 0; var_155_string = "";
				func_4741(var_154_int, "rusk");
				AddItem(var_115_bool, var_154_int, (int)0, (int)1);
				goto Label_4654;
			}
			var_159_bool = var_114_int == (int)2;
			if(var_159_bool != 0) {
				var_160_int = 0; var_161_string = "";
				func_4741(var_160_int, "hook");
				AddItem(var_115_bool, var_160_int, (int)0, (int)1);
				goto Label_4654;
			}
			var_165_bool = var_114_int == (int)4;
			if(var_165_bool != 0) {
				var_166_int = 0; var_167_string = "";
				func_4741(var_166_int, "syringe");
				AddItem(var_115_bool, var_166_int, (int)0, (int)1);
				goto Label_4654;
			}
			var_171_bool = var_114_int == (int)5;
			if(var_171_bool != 0) {
				var_172_int = 0; var_173_string = "";
				func_4741(var_172_int, "watch");
				AddItem(var_115_bool, var_172_int, (int)0, (int)1);
				goto Label_4654;
			}
			var_177_bool = var_114_int == (int)6;
			if(var_177_bool == 0) goto Label_4654;
			var_178_int = 0; var_179_string = "";
			func_4741(var_178_int, "razor");
			AddItem(var_115_bool, var_178_int, (int)0, (int)1);
	}
		var_182_int = 0; var_183_int = 0;
		var_185_int = 0;
		func_4277(var_185_int);
		var_187_float = var_185_int * (int)50;
		var_183_int = (int)50 + var_187_float;
		func_4494((int)0, var_183_int);
		irand(var_114_int, (int)7);
		var_190_bool = var_114_int == (int)0;
		if(var_190_bool != 0) {
			var_191_int = 0; var_192_string = "";
			func_4741(var_191_int, "beads");
			AddItem(var_115_bool, var_191_int, (int)0, (int)1);
			goto Label_4740;
		}
		var_196_bool = var_114_int == (int)1;
		if(var_196_bool != 0) {
			var_197_int = 0; var_198_string = "";
			func_4741(var_197_int, "bracelet");
			AddItem(var_115_bool, var_197_int, (int)0, (int)1);
			goto Label_4740;
		}
		var_202_bool = var_114_int == (int)2;
		if(var_202_bool != 0) {
			var_203_int = 0; var_204_string = "";
			func_4741(var_203_int, "ear_ring");
			AddItem(var_115_bool, var_203_int, (int)0, (int)1);
			goto Label_4740;
		}
		var_208_bool = var_114_int == (int)3;
		if(var_208_bool != 0) {
			var_209_int = 0; var_210_string = "";
			func_4741(var_209_int, "gold_ring");
			AddItem(var_115_bool, var_209_int, (int)0, (int)1);
			goto Label_4740;
		}
		var_214_bool = var_114_int == (int)4;
		if(var_214_bool != 0) {
			var_215_int = 0; var_216_string = "";
			func_4741(var_215_int, "silver_ring");
			AddItem(var_115_bool, var_215_int, (int)0, (int)1);
			goto Label_4740;
		}
		var_220_bool = var_114_int == (int)5;
		if(var_220_bool == 0) goto Label_4740;
		var_221_int = 0; var_222_string = "";
		func_4741(var_221_int, "flower");
		AddItem(var_115_bool, var_221_int, (int)0, (int)1);
	}
Label_4654:
	goto Label_4740;
	
Label_4740:
	return 4;
	
}


func_3035(var_0_bool, var_1_object, var_398_bool, var_399_float)
{
	var_400_int = 0; var_401_bool = 0; var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_bool = 0; var_406_int = 0; var_407_string = "";
	func_3374(var_407_string);
	irand(var_404_int, var_1_object);
	var_404_int = var_404_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_4303();
	var_416_int = "attack_begin" + var_404_int;
	PlayAnimation("all", var_416_int);
	WaitForAnimEnd();
	func_3342(var_406_int, var_407_string);
	var_432_bool = 0; var_433_object = Obj();
	var_433_object = var_0_bool;
	func_3817(var_432_bool, var_433_object);
	var_434_bool = var_432_bool == 0; //@nz
	if(var_434_bool != 0) {
		StopAsync();
		var_398_bool = 0;
		return 8;
	}
	var_435_float = 0; var_436_int = 0;
	var_399_float = var_435_float;
	var_404_int = var_436_int;
	func_2996(var_407_string, var_435_float, var_436_int);
	var_519_int = "attack_middle" + var_404_int;
	HasAnimation(var_405_bool, "all", var_519_int);
	var_520_bool = var_405_bool;
	if(var_520_bool != 0) {
		func_4303();
		var_523_int = "attack_middle" + var_404_int;
		PlayAnimation("all", var_523_int);
		WaitForAnimEnd();
		func_3374(var_407_string);
		var_524_bool = 0; var_525_object = Obj();
		var_525_object = var_0_bool;
		func_3817(var_524_bool, var_525_object);
		var_526_bool = var_524_bool == 0; //@nz
		if(var_526_bool != 0) {
			StopAsync();
			var_398_bool = 0;
			return 8;
		}
		var_527_float = 0; var_528_int = 0;
		var_399_float = var_527_float;
		var_404_int = var_528_int;
		func_2996(var_407_string, var_527_float, var_528_int);
		var_406_int = 1;

	Label_3112:
		var_530_int = "attack_middle" + var_404_int;
		var_532_int = var_530_int + "_";
		var_407_string = var_532_int + var_406_int;
		HasAnimation(var_405_bool, "all", var_407_string);
		var_534_bool = var_405_bool == 0; //@nz
		if(var_534_bool != 0) {
		} else {
			func_4303();
			PlayAnimation("all", var_407_string);
			WaitForAnimEnd();
			func_3374(var_407_string);
			var_550_bool = 0; var_551_object = Obj();
			var_551_object = var_0_bool;
			func_3817(var_550_bool, var_551_object);
			var_552_bool = var_550_bool == 0; //@nz
			if(var_552_bool != 0) {
				StopAsync();
				var_398_bool = 0;
				var_553_float = 0; var_554_int = 0;
				var_399_float = var_553_float;
				var_404_int = var_554_int;
				func_2996(var_407_string, var_553_float, var_554_int);
				var_406_int = var_406_int + (int)1;
				goto Label_3112;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_538_int = "attack_end" + var_404_int;
	PlayAnimation("all", var_538_int);
	var_539_bool = 0;
	func_3388(var_539_bool);
	if(var_539_bool != 0) {
		var_540_bool = 0; var_541_float = 0;
		func_3172(var_540_bool, (float)0.75);
		StopAsync();
	}
	var_398_bool = 1;
	return 8;
	
}


func_5094(var_21_int)
{
	var_21_int = 0;
	return 0;
}


func_4070(var_333_bool, var_334_object)
{
	var_335_bool = 0; var_336_object = Obj(); var_337_float = 0;
	var_334_object = var_336_object;
	func_4078(var_335_bool, var_336_object, (float)70);
	var_335_bool = var_333_bool;
	return 0;
}


func_5097()
{
	return 0;
}


func_5099(var_48_int, var_49_string, var_50_object)
{
	var_52_bool = var_49_string == "killme";
	if(var_52_bool != 0) {
		var_53_int = 0; var_54_object = Obj();
		var_50_object = var_54_object;
		func_5121(var_53_int, var_54_object);
		var_53_int = var_48_int;
		return 0;
	}
	var_48_int = 0;
	return 0;
}


func_4078(var_335_bool, var_336_object, var_337_float)
{
	var_338_float = 0; var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_bool = 0; var_346_float = 0; var_347_cvector = CVector(0,0,0); var_348_cvector = CVector(0,0,0); var_349_cvector = CVector(0,0,0); var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0); var_352_cvector = CVector(0,0,0); var_353_bool = 0;
	@@var_336_object:GetPosition(var_347_cvector);
	@@var_336_object:GetEyesHeight(var_346_float);
	var_354_float = GetByIndex(var_347_cvector, 1);
	var_354_float = var_354_float + var_346_float;
	SetByIndex(var_347_cvector, 1) = var_354_float;
	GetPosition(var_348_cvector);
	GetEyesHeight(var_346_float);
	var_355_float = GetByIndex(var_348_cvector, 1);
	var_355_float = var_355_float + var_346_float;
	SetByIndex(var_348_cvector, 1) = var_355_float;
	var_349_cvector = var_347_cvector - var_348_cvector;
	var_356_float = GetByIndex(var_349_cvector, 1);
	SetByIndex(var_349_cvector, 1) = (float)0;
	var_357_int = var_349_cvector | var_349_cvector;
	var_358_float = sqrt(var_357_int);
	var_349_cvector = var_349_cvector / var_358_float;
	var_350_cvector = -var_349_cvector;
	var_359_float = var_349_cvector * var_337_float;
	var_351_cvector = var_359_float - CVector(0.0, 10.0, 0.0);
	var_352_cvector = var_348_cvector + var_351_cvector;
	IsOverrideActive(var_353_bool);
	var_361_bool = var_353_bool;
	if(var_361_bool != 0) {
		var_335_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_352_cvector, var_350_cvector, (bool)1);
	var_363_float = GetByIndex(var_351_cvector, 0);
	var_364_float = GetByIndex(var_351_cvector, 2);
	Rotate(var_363_float, var_364_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_335_bool = 1;
	return 16;
}


func_5111(var_96_string, var_97_object)
{
	var_99_bool = var_96_string == "killme";
	if(var_99_bool != 0) {
		var_100_object = Obj();
		var_97_object = var_100_object;
		func_5139(var_100_object);
		return 0;
	}
	return 0;
}


