// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:grabitel|W:bomber|W:sanitar|W:hunter|W:soldier|W:killme|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
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
// @TASK_6: vars=object params=1
// @EVENT_0: op=0xad6 vars=object
// @EVENT_17: op=0xaea vars=object
// @EVENT_30: op=0xb02 vars=object,object,bool
// @EVENT_40: op=0xb1e vars=object
// @EVENT_42: op=0xb32 vars=object,string
// @EVENT_26: op=0xb57 vars=string
// @EVENT_41: op=0xb70 vars=object
// @EVENT_7: op=0xb79 vars=int
// @EVENT_6: op=0xb9c vars=
// @EVENT_1: op=0xba3 vars=object
// @TASK_7: vars=object,int,int,bool,float,int params=1
// @TASK_8: vars=bool,object,bool params=6
// @EVENT_6: op=0xe55 vars=
// @EVENT_7: op=0xe8d vars=int
// @EVENT_1: op=0xea8 vars=object
// @EVENT_2: op=0xeb7 vars=object
// @EVENT_10: op=0xf3d vars=object
// @EVENT_41: op=0xf48 vars=object
// @STANDALONE_EVENT_16: op=0x13c9 vars=object,string
// @STANDALONE_EVENT_41: op=0x13d6 vars=object
// @STANDALONE_EVENT_22: op=0x13dc vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x13e4 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1a,0x72,0x1a8,0x1be,0x797,0x7b4,0x813,0x82d,0x82f,0x831,0x8cc,0x8da,0x8ed,0x8f3,0x8ff,0x916,0x987,0xa25,0xa33,0xa3a,0xb57,0xb70,0xb9c,0xba3,0xbb1,0xbb9,0xbbc,0xe4d,0xe55,0xe8d,0xea8,0xeb7,0xf2b,0xf3d,0xf48,0xf51,0xf5c,0x10f9,0x1131,0x11a0,0x11a7,0x11b2,0x11bb,0x11c5,0x1211,0x121d,0x1229,0x1233,0x123d,0x1247,0x1251,0x125b,0x1265,0x126c,0x1273,0x127a,0x1281,0x1296,0x12b8,0x13c1,0x13d6,0x13dc,0x13e4,0x13ee,0x140e,0x143e,0x1444,0x1486,0x148f,0x1497,0x14a1,0x14f4,0x14fb,0x151e,0x1521,0x1523,0x152f,0x1539,0x154b,0x1551,0x1554,0x155b,0x155e,0x156f,0x1575,0x1578,0x157a,0x157d,0x15b7,0x15ba,0x15c4

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0;
	func_5511(var_20_bool);
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
		func_4448();
		var_24_bool = var_19_object == (int)45786;
		if(var_24_bool != 0) {
			var_25_bool = 0;
			var_25_bool = 0;
			var_26_bool = 0; var_27_object = Obj();
			var_27_object = var_1_object;
			func_4637(var_27_object);
			if(var_26_bool != 0) {
				var_34_bool = 0; var_35_object = Obj();
				var_35_object = var_1_object;
				func_4669(var_34_bool, var_35_object);
				if(var_34_bool != 0) {
					var_25_bool = 1;
				}
			}
			if(var_25_bool != 0) {
				var_45_string = "";
				func_424(var_20_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)543329);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)543330, (int)45790, (int)45787);
				@@@var_0_bool:AddReply((int)543332, (int)45790, (int)45789);
				@@@var_0_bool:AddReply((int)543331, (int)-1, (int)45788);
				return 0;
			}
			var_72_bool = 0;
			var_72_bool = 0;
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_4637(var_74_object);
			if(var_73_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				var_76_object = var_1_object;
				func_4669(var_75_bool, var_76_object);
				var_77_bool = var_75_bool == 0; //@nz
				if(var_77_bool != 0) {
					var_72_bool = 1;
				}
			}
			if(var_72_bool != 0) {
				var_78_string = "";
				func_424(var_20_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)543328);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)543336, (int)-1, (int)45794);
				return 0;
			}
			var_83_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537969);
			@@@var_0_bool:ClearReplies();
			var_85_bool = 0;
			var_85_bool = 0;
			var_86_bool = 0; var_87_object = Obj();
			var_87_object = var_1_object;
			func_4649(var_86_bool, var_87_object);
			if(var_86_bool != 0) {
				var_92_bool = 0; var_93_object = Obj();
				var_93_object = var_1_object;
				func_4625(var_93_object);
				if(var_92_bool != 0) {
					var_85_bool = 1;
				}
			}
			if(var_85_bool != 0) {
				@@@var_0_bool:AddReply((int)537970, (int)39833, (int)39832);
			}
			var_101_bool = 0;
			var_101_bool = 0;
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_4649(var_102_bool, var_103_object);
			if(var_102_bool != 0) {
				var_104_bool = 0; var_105_object = Obj();
				var_105_object = var_1_object;
				func_4625(var_105_object);
				if(var_104_bool != 0) {
					var_101_bool = 1;
				}
			}
			if(var_101_bool != 0) {
				@@@var_0_bool:AddReply((int)537995, (int)39861, (int)39860);
			}
			var_109_bool = 0;
			var_109_bool = 0;
			var_110_bool = 0; var_111_object = Obj();
			var_111_object = var_1_object;
			func_4649(var_110_bool, var_111_object);
			if(var_110_bool != 0) {
				var_112_bool = 0; var_113_object = Obj();
				var_113_object = var_1_object;
				func_4625(var_113_object);
				if(var_112_bool != 0) {
					var_109_bool = 1;
				}
			}
			if(var_109_bool != 0) {
				@@@var_0_bool:AddReply((int)538003, (int)39869, (int)39868);
			}
			var_117_bool = 0;
			var_117_bool = 0;
			var_118_bool = 0; var_119_object = Obj();
			var_119_object = var_1_object;
			func_4649(var_118_bool, var_119_object);
			if(var_118_bool != 0) {
				var_120_bool = 0; var_121_object = Obj();
				var_121_object = var_1_object;
				func_4625(var_121_object);
				if(var_120_bool != 0) {
					var_117_bool = 1;
				}
			}
			if(var_117_bool != 0) {
				@@@var_0_bool:AddReply((int)538012, (int)39878, (int)39877);
			}
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_bool = 0;
			var_126_bool = 0;
			var_127_bool = 0; var_128_object = Obj();
			var_128_object = var_1_object;
			func_4649(var_127_bool, var_128_object);
			if(var_127_bool != 0) {
				var_129_bool = 0; var_130_object = Obj();
				var_130_object = var_1_object;
				func_4699(var_129_bool, var_130_object);
				if(var_129_bool != 0) {
					var_126_bool = 1;
				}
			}
			if(var_126_bool != 0) {
				var_140_bool = 0; var_141_object = Obj();
				var_141_object = var_1_object;
				func_4625(var_141_object);
				if(var_140_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				@@@var_0_bool:AddReply((int)538017, (int)39883, (int)39882);
			}
			var_145_bool = 0;
			var_145_bool = 0;
			var_146_bool = 0;
			var_146_bool = 0;
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_object;
			func_4659(var_147_bool, var_148_object);
			if(var_147_bool != 0) {
				var_153_bool = 0; var_154_object = Obj();
				var_154_object = var_1_object;
				func_4689(var_153_bool, var_154_object);
				if(var_153_bool != 0) {
					var_146_bool = 1;
				}
			}
			if(var_146_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_4625(var_165_object);
				if(var_164_bool != 0) {
					var_145_bool = 1;
				}
			}
			if(var_145_bool != 0) {
				@@@var_0_bool:AddReply((int)538043, (int)39911, (int)39910);
			}
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0;
			var_170_bool = 0;
			var_171_bool = 0; var_172_object = Obj();
			var_172_object = var_1_object;
			func_4679(var_171_bool, var_172_object);
			if(var_171_bool != 0) {
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_4689(var_177_bool, var_178_object);
				if(var_177_bool != 0) {
					var_170_bool = 1;
				}
			}
			if(var_170_bool != 0) {
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_4625(var_180_object);
				if(var_179_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				@@@var_0_bool:AddReply((int)538083, (int)39952, (int)39951);
			}
			var_184_bool = 0;
			var_184_bool = 0;
			var_185_bool = 0;
			var_185_bool = 0;
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_4679(var_186_bool, var_187_object);
			if(var_186_bool != 0) {
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_object;
				func_4699(var_188_bool, var_189_object);
				if(var_188_bool != 0) {
					var_185_bool = 1;
				}
			}
			if(var_185_bool != 0) {
				var_190_bool = 0; var_191_object = Obj();
				var_191_object = var_1_object;
				func_4625(var_191_object);
				if(var_190_bool != 0) {
					var_184_bool = 1;
				}
			}
			if(var_184_bool != 0) {
				@@@var_0_bool:AddReply((int)538110, (int)39980, (int)39979);
			}
			@@@var_0_bool:AddReply((int)538126, (int)-1, (int)39997);
			return 0;
		}
		var_199_bool = var_19_object == (int)39980;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538111);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538112, (int)39982, (int)39981);
			@@@var_0_bool:AddReply((int)538124, (int)39982, (int)39994);
			@@@var_0_bool:AddReply((int)538125, (int)-1, (int)39996);
			return 0;
		}
		var_212_bool = var_19_object == (int)39982;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538113);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538114, (int)39984, (int)39983);
			@@@var_0_bool:AddReply((int)538118, (int)39989, (int)39988);
			return 0;
		}
		var_222_bool = var_19_object == (int)39989;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538119);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538120, (int)39991, (int)39990);
			return 0;
		}
		var_229_bool = var_19_object == (int)39991;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538121);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538122, (int)-1, (int)39992);
			@@@var_0_bool:AddReply((int)538123, (int)-1, (int)39993);
			return 0;
		}
		var_239_bool = var_19_object == (int)39984;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538115);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538116, (int)-1, (int)39985);
			@@@var_0_bool:AddReply((int)538117, (int)39991, (int)39986);
			return 0;
		}
		var_249_bool = var_19_object == (int)39952;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538084);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538085, (int)39954, (int)39953);
			@@@var_0_bool:AddReply((int)538094, (int)39963, (int)39962);
			@@@var_0_bool:AddReply((int)538103, (int)39972, (int)39971);
			@@@var_0_bool:AddReply((int)538109, (int)-1, (int)39978);
			return 0;
		}
		var_265_bool = var_19_object == (int)39972;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538104);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538105, (int)39974, (int)39973);
			@@@var_0_bool:AddReply((int)538108, (int)-1, (int)39977);
			return 0;
		}
		var_275_bool = var_19_object == (int)39974;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538106);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538107, (int)39963, (int)39975);
			return 0;
		}
		var_282_bool = var_19_object == (int)39963;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538095);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538096, (int)39965, (int)39964);
			@@@var_0_bool:AddReply((int)538100, (int)39969, (int)39968);
			return 0;
		}
		var_292_bool = var_19_object == (int)39969;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538101);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538102, (int)-1, (int)39970);
			return 0;
		}
		var_299_bool = var_19_object == (int)39965;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538097);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538098, (int)-1, (int)39966);
			@@@var_0_bool:AddReply((int)538099, (int)-1, (int)39967);
			return 0;
		}
		var_309_bool = var_19_object == (int)39954;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538086);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538087, (int)39956, (int)39955);
			@@@var_0_bool:AddReply((int)538093, (int)-1, (int)39961);
			return 0;
		}
		var_319_bool = var_19_object == (int)39956;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538088);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538089, (int)39958, (int)39957);
			return 0;
		}
		var_326_bool = var_19_object == (int)39958;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538090);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538091, (int)-1, (int)39959);
			@@@var_0_bool:AddReply((int)538092, (int)-1, (int)39960);
			return 0;
		}
		var_336_bool = var_19_object == (int)39911;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538044);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538045, (int)39913, (int)39912);
			@@@var_0_bool:AddReply((int)538063, (int)39932, (int)39931);
			return 0;
		}
		var_346_bool = var_19_object == (int)39932;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538064);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538065, (int)39934, (int)39933);
			return 0;
		}
		var_353_bool = var_19_object == (int)39934;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538066);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538067, (int)39936, (int)39935);
			return 0;
		}
		var_360_bool = var_19_object == (int)39936;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538068);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538069, (int)39938, (int)39937);
			@@@var_0_bool:AddReply((int)538075, (int)39944, (int)39943);
			return 0;
		}
		var_370_bool = var_19_object == (int)39944;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538076);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538077, (int)39946, (int)39945);
			@@@var_0_bool:AddReply((int)538082, (int)-1, (int)39950);
			return 0;
		}
		var_380_bool = var_19_object == (int)39946;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538078);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538079, (int)39948, (int)39947);
			return 0;
		}
		var_387_bool = var_19_object == (int)39948;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538080);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538081, (int)-1, (int)39949);
			return 0;
		}
		var_394_bool = var_19_object == (int)39938;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538070);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538071, (int)39940, (int)39939);
			@@@var_0_bool:AddReply((int)538074, (int)-1, (int)39942);
			return 0;
		}
		var_404_bool = var_19_object == (int)39940;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538072);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538073, (int)-1, (int)39941);
			return 0;
		}
		var_411_bool = var_19_object == (int)39913;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538046);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538047, (int)39915, (int)39914);
			@@@var_0_bool:AddReply((int)538060, (int)39928, (int)39927);
			return 0;
		}
		var_421_bool = var_19_object == (int)39928;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538061);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538062, (int)39915, (int)39929);
			return 0;
		}
		var_428_bool = var_19_object == (int)39915;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538048);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538049, (int)39917, (int)39916);
			@@@var_0_bool:AddReply((int)538057, (int)39925, (int)39924);
			return 0;
		}
		var_438_bool = var_19_object == (int)39925;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538058);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538059, (int)-1, (int)39926);
			return 0;
		}
		var_445_bool = var_19_object == (int)39917;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538050);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538051, (int)39919, (int)39918);
			@@@var_0_bool:AddReply((int)538056, (int)-1, (int)39923);
			return 0;
		}
		var_455_bool = var_19_object == (int)39919;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538052);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538053, (int)39921, (int)39920);
			return 0;
		}
		var_462_bool = var_19_object == (int)39921;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538054);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538055, (int)-1, (int)39922);
			return 0;
		}
		var_469_bool = var_19_object == (int)39883;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538018);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538019, (int)39885, (int)39884);
			@@@var_0_bool:AddReply((int)538030, (int)39897, (int)39896);
			@@@var_0_bool:AddReply((int)538039, (int)39907, (int)39906);
			@@@var_0_bool:AddReply((int)538042, (int)-1, (int)39909);
			return 0;
		}
		var_485_bool = var_19_object == (int)39907;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538040);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538041, (int)-1, (int)39908);
			return 0;
		}
		var_492_bool = var_19_object == (int)39897;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538031);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538032, (int)39899, (int)39898);
			@@@var_0_bool:AddReply((int)538038, (int)39899, (int)39904);
			return 0;
		}
		var_502_bool = var_19_object == (int)39899;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538033);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538034, (int)39901, (int)39900);
			@@@var_0_bool:AddReply((int)538037, (int)-1, (int)39903);
			return 0;
		}
		var_512_bool = var_19_object == (int)39901;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538035);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538036, (int)-1, (int)39902);
			return 0;
		}
		var_519_bool = var_19_object == (int)39885;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538020);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538021, (int)39887, (int)39886);
			@@@var_0_bool:AddReply((int)538027, (int)39894, (int)39893);
			return 0;
		}
		var_529_bool = var_19_object == (int)39894;
		if(var_529_bool != 0) {
			var_530_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538028);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538029, (int)-1, (int)39895);
			return 0;
		}
		var_536_bool = var_19_object == (int)39887;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538022);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538023, (int)39889, (int)39888);
			@@@var_0_bool:AddReply((int)538026, (int)39889, (int)39891);
			return 0;
		}
		var_546_bool = var_19_object == (int)39889;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538024);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538025, (int)-1, (int)39890);
			return 0;
		}
		var_553_bool = var_19_object == (int)39878;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538013);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538014, (int)39880, (int)39879);
			return 0;
		}
		var_560_bool = var_19_object == (int)39880;
		if(var_560_bool != 0) {
			var_561_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538015);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538016, (int)-1, (int)39881);
			return 0;
		}
		var_567_bool = var_19_object == (int)39869;
		if(var_567_bool != 0) {
			var_568_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538004);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538005, (int)39871, (int)39870);
			@@@var_0_bool:AddReply((int)538011, (int)-1, (int)39876);
			return 0;
		}
		var_577_bool = var_19_object == (int)39871;
		if(var_577_bool != 0) {
			var_578_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538006);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538007, (int)39873, (int)39872);
			return 0;
		}
		var_584_bool = var_19_object == (int)39873;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538008);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538009, (int)-1, (int)39874);
			@@@var_0_bool:AddReply((int)538010, (int)-1, (int)39875);
			return 0;
		}
		var_594_bool = var_19_object == (int)39861;
		if(var_594_bool != 0) {
			var_595_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537996);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537997, (int)39863, (int)39862);
			return 0;
		}
		var_601_bool = var_19_object == (int)39863;
		if(var_601_bool != 0) {
			var_602_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537998);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537999, (int)39865, (int)39864);
			@@@var_0_bool:AddReply((int)538002, (int)-1, (int)39867);
			return 0;
		}
		var_611_bool = var_19_object == (int)39865;
		if(var_611_bool != 0) {
			var_612_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)538000);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538001, (int)-1, (int)39866);
			return 0;
		}
		var_618_bool = var_19_object == (int)39833;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537971);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537972, (int)39835, (int)39834);
			@@@var_0_bool:AddReply((int)537976, (int)39840, (int)39839);
			@@@var_0_bool:AddReply((int)537988, (int)39852, (int)39851);
			@@@var_0_bool:AddReply((int)537994, (int)-1, (int)39859);
			return 0;
		}
		var_634_bool = var_19_object == (int)39852;
		if(var_634_bool != 0) {
			var_635_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537989);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537990, (int)39835, (int)39853);
			@@@var_0_bool:AddReply((int)537991, (int)39856, (int)39855);
			return 0;
		}
		var_644_bool = var_19_object == (int)39856;
		if(var_644_bool != 0) {
			var_645_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537992);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537993, (int)39840, (int)39857);
			return 0;
		}
		var_651_bool = var_19_object == (int)39840;
		if(var_651_bool != 0) {
			var_652_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537977);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537978, (int)39842, (int)39841);
			@@@var_0_bool:AddReply((int)537987, (int)-1, (int)39850);
			return 0;
		}
		var_661_bool = var_19_object == (int)39842;
		if(var_661_bool != 0) {
			var_662_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537979);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537980, (int)39844, (int)39843);
			@@@var_0_bool:AddReply((int)537986, (int)-1, (int)39849);
			return 0;
		}
		var_671_bool = var_19_object == (int)39844;
		if(var_671_bool != 0) {
			var_672_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537981);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537982, (int)39846, (int)39845);
			@@@var_0_bool:AddReply((int)537985, (int)-1, (int)39848);
			return 0;
		}
		var_681_bool = var_19_object == (int)39846;
		if(var_681_bool != 0) {
			var_682_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537983);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537984, (int)-1, (int)39847);
			return 0;
		}
		var_688_bool = var_19_object == (int)39835;
		if(var_688_bool != 0) {
			var_689_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)537973);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537974, (int)39840, (int)39836);
			@@@var_0_bool:AddReply((int)537975, (int)-1, (int)39838);
			return 0;
		}
		var_698_bool = var_19_object == (int)45790;
		if(var_698_bool != 0) {
			var_699_string = "";
			func_424(var_20_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)543333);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543334, (int)-1, (int)45791);
			@@@var_0_bool:AddReply((int)543335, (int)-1, (int)45792);
			return 0;
		}
		var_3_object = true;
		var_707_bool = 0;
		func_5511(var_707_bool);
		if(var_707_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1bf";
	
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_5457(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_26_object = Obj();
		var_19_bool = var_26_object;
		func_5460(var_26_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_5466();
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
	func_5457(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_2310(var_21_int);
		}
		var_29_object = Obj();
		var_19_bool = var_29_object;
		func_5460(var_29_object);
	}
	return 2;
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_5188(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_5271(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_2310(var_21_int);
		}
		var_72_object = Obj();
		var_19_bool = var_72_object;
		func_5281(var_72_object);
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
	func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_5364(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_2310(var_23_int);
			}
			var_124_object = Obj();
			var_19_bool = var_124_object;
			func_5371(var_124_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_5406(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_2310(var_21_int);
		}
		var_19_bool = Obj();
		func_5409();
	}
	return 2;
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_5102(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_2310(var_22_int);
		var_52_object = Obj(); var_53_string = "";
		var_19_object = var_52_object;
		var_20_bool = var_53_string;
		func_5134(var_52_object, var_53_string);
	} else {
		var_128_int = 0; var_129_string = ""; var_130_object = Obj();
		var_20_bool = var_129_string;
		var_19_object = var_130_object;
		func_5411(var_128_int, var_129_string, var_130_object);
		var_128_int = var_22_int;
		var_173_bool = var_22_int > (int)0;
		if(var_173_bool == 0) goto Label_2251;
		var_175_bool = var_22_int > (int)1;
		if(var_175_bool != 0) {
			func_2310(var_22_int);
		}
		var_176_string = ""; var_177_object = Obj();
		var_20_bool = var_176_string;
		var_19_object = var_177_object;
		func_5423(var_176_string, var_177_object);
	}
Label_2251:
	return 2;
	
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_5201(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_2310(var_19_bool);
		var_30_string = "";
		var_19_bool = var_30_string;
		func_5217(var_30_string);
	}
	return 0;
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_5159(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_2310(var_19_bool);
		var_33_object = Obj();
		var_19_bool = var_33_object;
		func_5182(var_33_object);
	} else {
		var_35_object = Obj();
		var_19_bool = var_35_object;
		func_2335(var_19_bool, var_35_object);
	}
	return 0;
	
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj();
	var_19_bool = var_20_object;
	func_2335(var_19_bool, var_20_object);
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
	func_2310(var_18_bool);
	func_5466();
	return 0;
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_2310(var_19_bool);
	var_19_bool = Obj();
	func_5078();
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
	func_5457(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_2713();
		}
		var_28_object = Obj();
		var_19_bool = var_28_object;
		func_5460(var_28_object);
	}
	return 2;
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_5188(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_5271(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_2713();
		}
		var_71_object = Obj();
		var_19_bool = var_71_object;
		func_5281(var_71_object);
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
	func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_5364(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_2713();
			}
			var_123_object = Obj();
			var_19_bool = var_123_object;
			func_5371(var_123_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_5406(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_2713();
		}
		var_19_bool = Obj();
		func_5409();
	}
	return 2;
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_5102(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_2713();
		var_51_object = Obj(); var_52_string = "";
		var_19_object = var_51_object;
		var_20_bool = var_52_string;
		func_5134(var_51_object, var_52_string);
	} else {
		var_127_int = 0; var_128_string = ""; var_129_object = Obj();
		var_20_bool = var_128_string;
		var_19_object = var_129_object;
		func_5411(var_127_int, var_128_string, var_129_object);
		var_127_int = var_22_int;
		var_172_bool = var_22_int > (int)0;
		if(var_172_bool == 0) goto Label_2596;
		var_174_bool = var_22_int > (int)1;
		if(var_174_bool != 0) {
			func_2713();
		}
		var_175_string = ""; var_176_object = Obj();
		var_20_bool = var_175_string;
		var_19_object = var_176_object;
		func_5423(var_175_string, var_176_object);
	}
Label_2596:
	return 2;
	
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_5201(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_2713();
		var_29_string = "";
		var_19_bool = var_29_string;
		func_5217(var_29_string);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2713();
	func_5466();
	return 0;
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_5159(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_2713();
		var_32_object = Obj();
		var_19_bool = var_32_object;
		func_5182(var_32_object);
	}
	return 0;
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_5457(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_2917();
		}
		var_30_object = Obj();
		var_19_bool = var_30_object;
		func_5460(var_30_object);
	}
	return 2;
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_object = Obj();
	var_19_bool = var_22_object;
	func_5188(var_22_object);
	var_31_int = 0; var_32_object = Obj();
	var_19_bool = var_32_object;
	func_5271(var_31_int, var_32_object);
	var_31_int = var_21_int;
	var_68_bool = var_21_int > (int)0;
	if(var_68_bool != 0) {
		var_70_bool = var_21_int > (int)1;
		if(var_70_bool != 0) {
			func_2917();
		}
		var_73_object = Obj();
		var_19_bool = var_73_object;
		func_5281(var_73_object);
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
	func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool);
	if(var_24_bool != 0) {
		var_86_int = 0; var_87_object = Obj(); var_88_bool = 0;
		var_19_bool = var_87_object;
		var_21_bool = var_88_bool;
		func_5364(var_87_object, var_88_bool);
		var_86_int = var_23_int;
		var_120_bool = var_23_int > (int)0;
		if(var_120_bool != 0) {
			var_122_bool = var_23_int > (int)1;
			if(var_122_bool != 0) {
				func_2917();
			}
			var_125_object = Obj();
			var_19_bool = var_125_object;
			func_5371(var_125_object);
		}
	}
	return 2;
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_int = 0; var_23_object = Obj();
	var_19_bool = var_23_object;
	func_5406(var_23_object);
	var_22_int = var_21_int;
	var_25_bool = var_21_int > (int)0;
	if(var_25_bool != 0) {
		var_27_bool = var_21_int > (int)1;
		if(var_27_bool != 0) {
			func_2917();
		}
		var_19_bool = Obj();
		func_5409();
	}
	return 2;
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_19_object = var_24_object;
	var_20_bool = var_25_string;
	func_5102(var_23_bool, var_24_object, var_25_string);
	if(var_23_bool != 0) {
		func_2917();
		var_53_object = Obj(); var_54_string = "";
		var_19_object = var_53_object;
		var_20_bool = var_54_string;
		func_5134(var_53_object, var_54_string);
	} else {
		var_129_int = 0; var_130_string = ""; var_131_object = Obj();
		var_20_bool = var_130_string;
		var_19_object = var_131_object;
		func_5411(var_129_int, var_130_string, var_131_object);
		var_129_int = var_22_int;
		var_174_bool = var_22_int > (int)0;
		if(var_174_bool == 0) goto Label_2902;
		var_176_bool = var_22_int > (int)1;
		if(var_176_bool != 0) {
			func_2917();
		}
		var_177_string = ""; var_178_object = Obj();
		var_20_bool = var_177_string;
		var_19_object = var_178_object;
		func_5423(var_177_string, var_178_object);
	}
Label_2902:
	return 2;
	
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = "";
	var_19_bool = var_21_string;
	func_5201(var_20_bool, var_21_string);
	if(var_20_bool != 0) {
		func_2917();
		var_31_string = "";
		var_19_bool = var_31_string;
		func_5217(var_31_string);
	}
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_2917();
	var_19_bool = Obj();
	func_5078();
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
	func_4092(var_26_bool, var_27_object);
	var_60_bool = var_26_bool == 0; //@nz
	if(var_60_bool != 0) {
		func_2917();
		return 4;
	}
	GetDirection(var_22_cvector);
	var_63_cvector = CVector(0,0,0); var_64_object = Obj();
	var_64_object = var_0_bool;
	func_3946(var_63_cvector, var_64_object);
	var_63_cvector = var_23_cvector;
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_22_cvector = var_70_cvector;
	var_23_cvector = var_71_cvector;
	func_4549(var_69_float, var_70_cvector, var_71_cvector);
	var_94_bool = var_69_float < (float)0.4999999701976776;
	if(var_94_bool != 0) {
		var_95_object = Obj();
		var_95_object = var_0_bool;
		func_4242(var_95_object);
	}
	return 4;
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2917();
	func_5466();
	return 0;
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_bool = var_21_object;
	func_5159(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_2917();
		var_34_object = Obj();
		var_19_bool = var_34_object;
		func_5182(var_34_object);
	}
	return 0;
}


task_8_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3739(var_18_bool);
	func_5466();
	return 0;
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_21_bool = var_19_int == (int)1;
	if(var_21_bool != 0) {
		var_22_object = Obj();
		var_22_object = var_1_object;
		func_4605(var_22_object);
	} else {
		var_27_int = 0;
		var_19_int = var_27_int;
		func_3883(var_18_bool, var_19_int, var_27_int);
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
		func_4437(var_23_object);
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
	func_3739(var_19_object);
	var_19_object = Obj();
	func_5078();
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
	func_5057(var_20_object);
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0;
	var_19_object = var_23_object;
	var_20_int = var_24_int;
	var_21_float = var_25_float;
	func_4160(var_23_object, var_24_int, var_25_float);
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
	func_4228(var_27_float, var_28_cvector, var_29_cvector);
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	SensePlayerOnly((bool)1);
	func_5513();
	func_2114();
	
Label_2108:
	var_2_object = false;
	func_2375(var_17_object, var_18_bool);
	goto Label_2108;
}
EMIT "Return(); Pop(0)";


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_359_bool = 0;
	func_5511(var_359_bool);
	if(var_359_bool != 0) {
		var_360_string = "";
		func_4406("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_361_bool = var_0_bool;
	if(var_361_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_4614()
{
	var_473_object = Obj(); var_474_object = Obj();
	GetScene(var_474_object);
	var_476_object = Obj();
	func_4496(var_476_object);
	BroadcastMessage("battle", var_476_object, var_474_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5134(var_53_object, var_54_string)
{
	var_56_bool = var_54_string == "unholster";
	if(var_56_bool != 0) {
		var_53_object = Obj();
		func_5470();
	} else {
		var_59_bool = var_54_string == "player_shot";
		if(var_59_bool != 0) {
			var_60_object = Obj();
			var_53_object = var_60_object;
			func_5487(var_60_object);
			goto Label_5158;
		}
		var_127_bool = var_54_string == "battle";
		if(var_127_bool == 0) goto Label_5158;
		var_53_object = Obj();
		func_5496();
	}
Label_5158:
	return 0;
	
}


func_4625(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_4566(var_210_int, "branch");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_2067(var_44_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_45_string = "";
	var_44_string = var_45_string;
	func_4455(var_45_string);
	PlayAnimation("all", var_44_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_44_string);
	RemoveEnvelope();
	return 0;
}


func_4116(var_36_object)
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


func_3606(var_0_bool, var_367_bool)
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


func_4637(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_4566(var_126_int, "branch");
	var_131_bool = var_126_int == (int)2;
	if(var_131_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_3617(var_2_object, var_5_bool)
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
	func_3667(var_489_float);
	var_490_bool = var_482_float < var_489_float;
	if(var_490_bool != 0) {
		irand(var_483_int, var_2_object);
		var_483_int = var_483_int + (int)1;
		var_493_int = "attack" + var_483_int;
		Speak(var_493_int);
		var_494_int = 0;
		func_3665(var_494_int);
		var_5_bool = var_494_int;
	}
	return 4;
}


func_5159(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = 0;
	var_24_bool = 0;
	var_25_bool = 0; var_26_object = Obj();
	var_21_object = var_26_object;
	func_5467(var_26_object);
	if(var_25_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_21_object = var_28_object;
		func_3961(var_27_bool, var_28_object);
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


func_40(var_0_bool, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_bool = var_45_object;
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0;
	var_45_object = var_56_object;
	func_4258(var_55_bool, var_56_object, (float)70.0);
	var_102_bool = var_55_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_103_int = 0;
	func_5505(var_103_int);
	@@var_51_object:SetNPCName(var_103_int);
	var_104_int = 0;
	func_5503(var_104_int);
	@@var_51_object:SetNPCDescription(var_104_int);
	var_105_string = "";
	func_5507(var_105_string);
	@@var_51_object:SetPhoto(var_105_string);
	var_106_string = "";
	func_5509(var_106_string);
	@@var_51_object:SetPhoto2(var_106_string);
	var_107_int = 0;
	func_4769(var_107_int);
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
	var_314_bool = var_54_bool == 0; //@nz
	if(var_314_bool != 0) {
		sync();
		@@var_51_object:IsDialogEnd(var_54_bool);
		goto Label_96;
	}
	var_45_object = Obj();
	func_4327();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4649(var_202_bool, var_203_object)
{
	var_204_bool = 0; var_205_object = Obj();
	var_203_object = var_205_object;
	func_4709(var_205_object);
	if(var_204_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_4659(var_263_bool, var_264_object)
{
	var_265_bool = 0; var_266_object = Obj();
	var_264_object = var_266_object;
	func_4716(var_266_object);
	if(var_265_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


func_4669(var_132_bool, var_133_object)
{
	var_134_bool = 0; var_135_object = Obj();
	var_133_object = var_135_object;
	func_4723(var_135_object);
	if(var_134_bool != 0) {
		var_132_bool = 1;
		return 0;
	}
	var_132_bool = 0;
	return 0;
}


func_5182(var_34_object)
{
	var_34_object = Obj();
	func_5470();
	return 0;
}


func_4160(var_23_object, var_24_int, var_25_float)
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
		func_3946(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_4502(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		CreateVectorVector(var_36_object);
		var_37_int = 1;

	Label_4189:
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
			goto Label_4189;
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
			func_4228(var_70_float, var_71_cvector, var_72_cvector);
			return 18;
		}
		var_36_object = 0;
	}
	var_113_object = Obj();
	var_23_object = var_113_object;
	func_4116(var_113_object);
	return 18;
	
}


func_3649(var_0_bool)
{
	var_254_object = Obj();
	var_254_object = var_0_bool;
	func_4605(var_254_object);
	return 0;
}


func_2114()
{
	var_21_bool = 0;
	func_4253(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		func_5466();
	}
	return 0;
}


func_5188(var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_3961(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		var_27_object = Obj();
		func_4496(var_27_object);
		ReportReputationChange(var_22_object, var_27_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_3654(var_577_int)
{
	var_577_int = 0;
	return 0;
}


func_4679(var_287_bool, var_288_object)
{
	var_289_bool = 0; var_290_object = Obj();
	var_288_object = var_290_object;
	func_4730(var_290_object);
	if(var_289_bool != 0) {
		var_287_bool = 1;
		return 0;
	}
	var_287_bool = 0;
	return 0;
}


func_2632()
{
	var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_float = 0; var_65_bool = 0;
	WaitForAnimEnd();
	var_66_bool = 0;
	func_4253(var_66_bool);
	var_67_bool = var_66_bool == 0; //@nz
	if(var_67_bool != 0) {
		return 14;
	}
	func_5237((int)0);
	var_68_int = var_59_int;
	var_60_int = 0;
	
Label_2646:
	var_81_bool = 0;
	var_81_bool = 0;
	var_83_bool = var_60_int < (int)5;
	if(var_83_bool != 0) {
		var_84_bool = 0;
		func_4253(var_84_bool);
		if(var_84_bool != 0) {
			var_81_bool = 1;
		}
	}
	if(var_81_bool != 0) {
		irand(var_61_int, (int)3);
		var_87_bool = var_61_int == (int)0;
		if(var_87_bool != 0) {
			var_88_int = var_59_int;
			if(var_88_int == 0) goto Label_2679;
			irand(var_62_int, var_59_int);
			var_90_string = ""; var_91_int = 0;
			var_62_int = var_91_int;
			func_5230(var_90_string, var_91_int);
			PlayAnimation("all", var_90_string);
			WaitForAnimEnd(var_63_bool);
			var_92_bool = var_63_bool == 0; //@nz
			if(var_92_bool != 0) {
			} else {
		} else {
				var_97_bool = var_61_int == (int)1;
				if(var_97_bool != 0) {
					rand(var_64_float, (int)4);
					var_100_int = var_64_float + (int)1;
					Sleep(var_100_int, var_65_bool);
					var_101_bool = var_65_bool == 0; //@nz
					if(var_101_bool != 0) {
						goto Label_2708;
					}
					goto Label_2697;
				}
				var_102_int = var_60_int;
				if(var_102_int == 0) goto Label_2697;
				goto Label_2708;
		}
		Label_2697:
			var_93_bool = 0;
			func_2711(var_93_bool);
			var_94_bool = var_93_bool == 0; //@nz
			if(var_94_bool != 0) {
				goto Label_2708;
			}
			ResetAAS();
			var_60_int = var_60_int + (int)1;
			goto Label_2646;

		}
	}
Label_2708:
	ResetAAS();
	return 14;
	
}


func_3656()
{
	var_373_string = "";
	func_4455("attack_stay");
	return 0;
}


func_3661()
{
	return 0;
}


func_3663(var_602_bool)
{
	var_602_bool = 1;
	return 0;
}


func_4689(var_269_bool, var_270_object)
{
	var_271_bool = 0; var_272_object = Obj();
	var_270_object = var_272_object;
	func_4737(var_272_object);
	if(var_271_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_5201(var_20_bool, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj();
	var_25_bool = var_21_string == "heal";
	if(var_25_bool != 0) {
		FindActor(var_23_object, "player");
		var_27_bool = 0; var_28_object = Obj();
		var_23_object = var_28_object;
		func_5498(var_28_object);
		var_27_bool = var_20_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_20_bool = 0;
	return 2;
}


func_3667(var_489_float)
{
	var_489_float = 0.5;
	return 0;
}


func_3665(var_494_int)
{
	var_494_int = 1;
	return 0;
}


func_4699(var_245_bool, var_246_object)
{
	var_247_bool = 0; var_248_object = Obj();
	var_246_object = var_248_object;
	func_4758(var_248_object);
	if(var_247_bool != 0) {
		var_245_bool = 1;
		return 0;
	}
	var_245_bool = 0;
	return 0;
}


func_3676(var_2_object, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool)
{
	var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; var_273_bool = 0;
	var_274_object = Obj();
	var_262_object = var_274_object;
	func_4605(var_274_object);
	SetTimer((int)1, (int)5);
	CanSee(var_272_bool, var_262_object);
	var_277_bool = var_272_bool;
	if(var_277_bool != 0) {
		var_2_object = true;
		var_278_object = Obj();
		var_262_object = var_278_object;
		func_4437(var_278_object);
	} else {
		var_2_object = false;
	}
	var_279_bool = 0; var_280_object = Obj();
	var_262_object = var_280_object;
	func_3961(var_279_bool, var_280_object);
	if(var_279_bool != 0) {
		var_283_object = Obj();
		func_4496(var_283_object);
		SendPlayerEnemy(var_262_object, var_283_object);
	}
	var_284_bool = 0; var_285_object = Obj(); var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_bool = 0;
	var_262_object = var_285_object;
	var_263_float = var_286_float;
	var_264_float = var_287_float;
	var_265_bool = var_288_bool;
	var_266_bool = var_289_bool;
	func_3781(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool);
	var_284_bool = var_273_bool;
	var_335_object = var_2_object;
	if(var_335_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_273_bool = var_261_bool;
	return 4;
	
}


func_5217(var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj();
	var_35_bool = var_31_string == "heal";
	if(var_35_bool != 0) {
		FindActor(var_33_object, "player");
		var_33_object = Obj();
		func_5501();
		var_33_object = 0;
	}
	return 2;
}


func_4709(var_204_bool)
{
	var_206_int = 0;
	func_4588(var_206_int);
	var_204_bool = var_206_int == (int)1;
	return 0;
}


func_4716(var_265_bool)
{
	var_267_int = 0;
	func_4588(var_267_int);
	var_265_bool = var_267_int == (int)2;
	return 0;
}


func_5230(var_74_string, var_75_int)
{
	var_76_string = ""; var_77_string = "";
	var_78_int = var_75_int;
	if(var_78_int != 0) {
		"idle" = "idle" + var_75_int;
	}
	var_77_string = var_74_string;
	return 2;
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_116_object, var_117_object)
{
	var_0_bool = var_117_object;
	var_1_object = var_116_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_123_bool = 0;
		var_123_bool = 0;
		var_124_bool = 0; var_125_object = Obj();
		var_125_object = var_1_object;
		func_4637(var_125_object);
		if(var_124_bool != 0) {
			var_132_bool = 0; var_133_object = Obj();
			var_133_object = var_1_object;
			func_4669(var_132_bool, var_133_object);
			if(var_132_bool != 0) {
				var_123_bool = 1;
			}
		}
		if(var_123_bool != 0) {
			var_143_string = "";
			func_424(var_117_object, "Neutral");
			@@@var_0_bool:SetMessage((int)543329);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543330, (int)45790, (int)45787);
			@@@var_0_bool:AddReply((int)543332, (int)45790, (int)45789);
			@@@var_0_bool:AddReply((int)543331, (int)-1, (int)45788);
		} else {
				var_188_bool = 0;
				var_188_bool = 0;
				var_189_bool = 0; var_190_object = Obj();
				var_190_object = var_1_object;
				func_4637(var_190_object);
				if(var_189_bool != 0) {
					var_191_bool = 0; var_192_object = Obj();
					var_192_object = var_1_object;
					func_4669(var_191_bool, var_192_object);
					var_193_bool = var_191_bool == 0; //@nz
					if(var_193_bool != 0) {
						var_188_bool = 1;
					}
				}
				if(var_188_bool != 0) {
					var_194_string = "";
					func_424(var_117_object, "Neutral");
					@@@var_0_bool:SetMessage((int)543328);
					@@@var_0_bool:ClearReplies();
					@@@var_0_bool:AddReply((int)543336, (int)-1, (int)45794);
					goto Label_394;
				}
				var_199_string = "";
				func_424(var_117_object, "Neutral");
				@@@var_0_bool:SetMessage((int)537969);
				@@@var_0_bool:ClearReplies();
				var_201_bool = 0;
				var_201_bool = 0;
				var_202_bool = 0; var_203_object = Obj();
				var_203_object = var_1_object;
				func_4649(var_202_bool, var_203_object);
				if(var_202_bool != 0) {
					var_208_bool = 0; var_209_object = Obj();
					var_209_object = var_1_object;
					func_4625(var_209_object);
					if(var_208_bool != 0) {
						var_201_bool = 1;
					}
				}
				if(var_201_bool != 0) {
					@@@var_0_bool:AddReply((int)537970, (int)39833, (int)39832);
				}
				var_217_bool = 0;
				var_217_bool = 0;
				var_218_bool = 0; var_219_object = Obj();
				var_219_object = var_1_object;
				func_4649(var_218_bool, var_219_object);
				if(var_218_bool != 0) {
					var_220_bool = 0; var_221_object = Obj();
					var_221_object = var_1_object;
					func_4625(var_221_object);
					if(var_220_bool != 0) {
						var_217_bool = 1;
					}
				}
				if(var_217_bool != 0) {
					@@@var_0_bool:AddReply((int)537995, (int)39861, (int)39860);
				}
				var_225_bool = 0;
				var_225_bool = 0;
				var_226_bool = 0; var_227_object = Obj();
				var_227_object = var_1_object;
				func_4649(var_226_bool, var_227_object);
				if(var_226_bool != 0) {
					var_228_bool = 0; var_229_object = Obj();
					var_229_object = var_1_object;
					func_4625(var_229_object);
					if(var_228_bool != 0) {
						var_225_bool = 1;
					}
				}
				if(var_225_bool != 0) {
					@@@var_0_bool:AddReply((int)538003, (int)39869, (int)39868);
				}
				var_233_bool = 0;
				var_233_bool = 0;
				var_234_bool = 0; var_235_object = Obj();
				var_235_object = var_1_object;
				func_4649(var_234_bool, var_235_object);
				if(var_234_bool != 0) {
					var_236_bool = 0; var_237_object = Obj();
					var_237_object = var_1_object;
					func_4625(var_237_object);
					if(var_236_bool != 0) {
						var_233_bool = 1;
					}
				}
				if(var_233_bool != 0) {
					@@@var_0_bool:AddReply((int)538012, (int)39878, (int)39877);
				}
				var_241_bool = 0;
				var_241_bool = 0;
				var_242_bool = 0;
				var_242_bool = 0;
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_4649(var_243_bool, var_244_object);
				if(var_243_bool != 0) {
					var_245_bool = 0; var_246_object = Obj();
					var_246_object = var_1_object;
					func_4699(var_245_bool, var_246_object);
					if(var_245_bool != 0) {
						var_242_bool = 1;
					}
				}
				if(var_242_bool != 0) {
					var_256_bool = 0; var_257_object = Obj();
					var_257_object = var_1_object;
					func_4625(var_257_object);
					if(var_256_bool != 0) {
						var_241_bool = 1;
					}
				}
				if(var_241_bool != 0) {
					@@@var_0_bool:AddReply((int)538017, (int)39883, (int)39882);
				}
				var_261_bool = 0;
				var_261_bool = 0;
				var_262_bool = 0;
				var_262_bool = 0;
				var_263_bool = 0; var_264_object = Obj();
				var_264_object = var_1_object;
				func_4659(var_263_bool, var_264_object);
				if(var_263_bool != 0) {
					var_269_bool = 0; var_270_object = Obj();
					var_270_object = var_1_object;
					func_4689(var_269_bool, var_270_object);
					if(var_269_bool != 0) {
						var_262_bool = 1;
					}
				}
				if(var_262_bool != 0) {
					var_280_bool = 0; var_281_object = Obj();
					var_281_object = var_1_object;
					func_4625(var_281_object);
					if(var_280_bool != 0) {
						var_261_bool = 1;
					}
				}
				if(var_261_bool != 0) {
					@@@var_0_bool:AddReply((int)538043, (int)39911, (int)39910);
				}
				var_285_bool = 0;
				var_285_bool = 0;
				var_286_bool = 0;
				var_286_bool = 0;
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_4679(var_287_bool, var_288_object);
				if(var_287_bool != 0) {
					var_293_bool = 0; var_294_object = Obj();
					var_294_object = var_1_object;
					func_4689(var_293_bool, var_294_object);
					if(var_293_bool != 0) {
						var_286_bool = 1;
					}
				}
				if(var_286_bool != 0) {
					var_295_bool = 0; var_296_object = Obj();
					var_296_object = var_1_object;
					func_4625(var_296_object);
					if(var_295_bool != 0) {
						var_285_bool = 1;
					}
				}
				if(var_285_bool != 0) {
					@@@var_0_bool:AddReply((int)538083, (int)39952, (int)39951);
				}
				var_300_bool = 0;
				var_300_bool = 0;
				var_301_bool = 0;
				var_301_bool = 0;
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_4679(var_302_bool, var_303_object);
				if(var_302_bool != 0) {
					var_304_bool = 0; var_305_object = Obj();
					var_305_object = var_1_object;
					func_4699(var_304_bool, var_305_object);
					if(var_304_bool != 0) {
						var_301_bool = 1;
					}
				}
				if(var_301_bool != 0) {
					var_306_bool = 0; var_307_object = Obj();
					var_307_object = var_1_object;
					func_4625(var_307_object);
					if(var_306_bool != 0) {
						var_300_bool = 1;
					}
				}
				if(var_300_bool != 0) {
					@@@var_0_bool:AddReply((int)538110, (int)39980, (int)39979);
				}
				@@@var_0_bool:AddReply((int)538126, (int)-1, (int)39997);
				goto Label_394;
		}
	}
Label_394:
	var_170_bool = 0;
	func_5511(var_170_bool);
	if(var_170_bool != 0) {

	Label_398:
		lshWaitForAnimEnd();
		var_171_object = var_3_object;
		if(var_171_object != 0) {
		} else {
			var_172_string = "";
			var_172_string = var_2_object;
			func_4406(var_172_string);
			goto Label_398;
	}
		PlayAnimation("all", "idle");

	Label_413:
		WaitForAnimEnd();
		var_185_object = var_3_object;
		if(var_185_object != 0) {
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


func_4723(var_134_bool)
{
	var_136_int = 0;
	func_4588(var_136_int);
	var_134_bool = var_136_int == (int)4;
	return 0;
}


func_5237(var_68_int)
{
	var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_bool = 0;
	var_71_int = 0;
	
Label_5239:
	var_74_string = ""; var_75_int = 0;
	var_71_int = var_75_int;
	func_5230(var_74_string, var_75_int);
	HasAnimation(var_72_bool, "all", var_74_string);
	var_79_bool = var_72_bool == 0; //@nz
	if(var_79_bool != 0) {
	} else {
		var_71_int = var_71_int + (int)1;
		goto Label_5239;
	}
	var_71_int = var_68_int;
	return 4;
	
}


func_4730(var_289_bool)
{
	var_291_int = 0;
	func_4588(var_291_int);
	var_289_bool = var_291_int == (int)5;
	return 0;
}


func_4737(var_271_bool)
{
	var_273_bool = 0;
	var_273_bool = 0;
	var_274_int = 0;
	func_4597(var_274_int);
	var_276_bool = var_274_int >= (int)0;
	if(var_276_bool != 0) {
		var_277_int = 0;
		func_4597(var_277_int);
		var_279_bool = var_277_int < (int)12;
		if(var_279_bool != 0) {
			var_273_bool = 1;
		}
	}
	if(var_273_bool != 0) {
		var_271_bool = 1;
		return 0;
	}
	var_271_bool = 0;
	return 0;
}


func_4228(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	GetScene(var_32_object);
	AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	var_36_object = Obj();
	var_25_object = var_36_object;
	func_4116(var_36_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5254(var_62_int)
{
	var_64_bool = 0;
	func_5557(var_64_bool);
	if(var_64_bool != 0) {
		var_62_int = 2;
	} else {
		var_62_int = 0;
	}
	return 0;
	
}


func_5263(var_61_object)
{
	var_62_object = Obj();
	var_61_object = var_62_object;
	TaskCall(6);
	func_2718(var_63_object, var_62_object);
	TaskReturn();
	return 0;
}


func_4242(var_95_object)
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


func_4758(var_247_bool)
{
	var_249_int = 0;
	func_4597(var_249_int);
	var_255_bool = var_249_int >= (int)12;
	if(var_255_bool != 0) {
		var_247_bool = 1;
		return 0;
	}
	var_247_bool = 0;
	return 0;
}


func_5271(var_89_int, var_90_object)
{
	var_91_bool = 0; var_92_object = Obj();
	var_90_object = var_92_object;
	func_4092(var_91_bool, var_92_object);
	if(var_91_bool != 0) {
		var_89_int = 2;
	} else {
		var_89_int = 0;
	}
	return 0;
	
}


func_2711(var_93_bool)
{
	var_93_bool = 1;
	return 0;
}


func_2713()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3739(var_2_object)
{
	KillTimer((int)1);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_3905(var_19_object);
	return 0;
}


func_4253(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_2718(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0;
	var_0_bool = var_62_object;
	func_2769(var_69_bool);
	GetDirection(var_67_cvector);
	var_77_cvector = CVector(0,0,0); var_78_object = Obj();
	var_78_object = var_0_bool;
	func_3946(var_77_cvector, var_78_object);
	var_77_cvector = var_68_cvector;
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_4549(var_83_float, var_84_cvector, var_85_cvector);
	var_108_bool = var_83_float < (int)0;
	if(var_108_bool != 0) {
		var_109_object = Obj();
		var_109_object = var_0_bool;
		func_4242(var_109_object);
		var_69_bool = 1;
	} else {
		Sleep((float)1.5, var_69_bool);
	}
	var_118_bool = var_69_bool;
	if(var_118_bool != 0) {
		var_119_object = Obj();
		var_119_object = var_0_bool;
		func_4242(var_119_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_4769(var_107_int)
{
	var_108_int = 0; var_109_int = 0;
	GetVariable("branch", var_109_int);
	var_112_bool = var_109_int == (int)0;
	if(var_112_bool != 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x12b0";
	}
	var_114_bool = var_109_int == (int)1;
	if(var_114_bool != 0) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
	return 2;
}


func_4258(var_55_bool, var_56_object, var_57_float)
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
	func_4502(var_82_cvector, var_83_cvector);
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
	func_5511(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		HasAnimationTrack(var_75_bool, "head");
		var_100_bool = var_75_bool;
		if(var_100_bool == 0) goto Label_4321;
		LookAsyncCamera("head");
	}
Label_4321:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_55_bool = 1;
	return 18;
	
}


func_5281(var_182_object)
{
	var_183_object = Obj();
	var_182_object = var_183_object;
	TaskCall(7);
	func_2993(var_183_object);
	TaskReturn();
	return 0;
}


func_3236(var_1_object, var_2_object, var_4_string)
{
	var_215_bool = 0; var_216_bool = 0; var_217_cvector = CVector(0,0,0); var_218_bool = 0; var_219_bool = 0; var_220_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_3238:
	var_224_int = var_1_object + (int)1;
	var_225_int = "attack_begin" + var_224_int;
	HasAnimation(var_218_bool, "all", var_225_int);
	var_226_bool = var_218_bool == 0; //@nz
	if(var_226_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_3238;
	}
	var_2_object = 0;
	
Label_3252:
	var_229_int = var_2_object + (int)1;
	var_230_int = "attack" + var_229_int;
	IsExisting3DSound(var_219_bool, var_230_int);
	var_231_bool = var_219_bool == 0; //@nz
	if(var_231_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_3252;

	}
	GetAnimationOffset(var_220_cvector, "all", "bjump");
	var_234_float = GetByIndex(var_220_cvector, 2);
	var_4_string = -var_234_float;
	return 6;
	
}


func_5289(var_35_bool, var_36_object, var_37_bool)
{
	var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = "";
	var_42_bool = 0; var_43_object = Obj(); var_44_string = "";
	var_36_object = var_43_object;
	func_3966(var_42_bool, var_43_object, "class");
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
	EMIT "GOTO 0x14f2";
	}
	var_60_bool = var_41_string == "rat_big";
	if(var_60_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	var_62_bool = var_41_string == "dog";
	if(var_62_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	var_64_bool = var_41_string == "grabitel";
	if(var_64_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	var_66_bool = var_41_string == "bomber";
	if(var_66_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	var_68_bool = var_41_string == "sanitar";
	if(var_68_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	var_70_bool = var_41_string == "hunter";
	if(var_70_bool != 0) {
		var_35_bool = 0;
		return 4;
	EMIT "GOTO 0x14f2";
	}
	var_72_bool = var_41_string == "soldier";
	if(var_72_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_35_bool = 1;
	return 4;
}


func_4786(var_226_int)
{
	var_227_int = 0; var_228_int = 0;
	GetVariable("branch", var_228_int);
	var_228_int = var_226_int;
	return 2;
}


func_4792(var_36_object)
{
	var_37_int = 0;
	func_4786(var_37_int);
	var_42_bool = var_37_int == (int)1;
	if(var_42_bool != 0) {
		WorkWithCorpse(var_36_object);
	} else {
		Barter(var_36_object);
	}
	return 0;
	
}


func_3781(var_0_bool, var_1_object, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool)
{
	var_290_bool = 0; var_291_bool = 0; var_292_object = Obj(); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_object = Obj(); var_298_bool = 0; var_299_bool = 0; var_300_object = Obj(); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_object = Obj();
	var_0_bool = false;
	var_1_object = var_285_object;
	var_289_bool = var_299_bool;
	
Label_3785:
	var_306_bool = 0; var_307_object = Obj();
	var_285_object = var_307_object;
	func_3921(var_306_bool, var_307_object);
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
			if(var_320_bool == 0) goto Label_3834;
			var_299_bool = 0;
			RotatePath(var_300_object, var_298_bool);
			var_321_bool = var_298_bool == 0; //@nz
			if(var_321_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_324_string = "";
				func_3928(var_324_string);
				var_325_string = "";
				func_3930(var_325_string);
				FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string);
				var_326_bool = var_298_bool == 0; //@nz
				if(var_326_bool != 0) {
					var_327_bool = var_0_bool;
					if(var_327_bool != 0) {
						var_300_object = 0;
						goto Label_3881;
					EMIT "GOTO 0xf0e";
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
							goto Label_3881;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_3881;
	}
			var_305_object = 0;
			goto Label_3879;

		Label_3879:
			var_300_object = 0;

		}
		goto Label_3785;
	}
Label_3881:
	var_284_bool = !var_0_bool;
	return 16;
	
}


func_4805(var_118_int, var_119_int)
{
	var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_bool = 0;
	var_133_bool = var_118_int > var_119_int;
	if(var_133_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_131_int = 0;
	var_135_bool = var_118_int != var_119_int;
	if(var_135_bool != 0) {
		var_136_int = var_119_int - var_118_int;
		irand(var_131_int, var_136_int);
	} else {
		var_145_bool = var_118_int == (int)0;
		if(var_145_bool == 0) goto Label_4823;
		return 4;
	}
Label_4823:
	var_131_int = var_131_int + var_118_int;
	var_138_bool = var_131_int == (int)0;
	if(var_138_bool != 0) {
		return 4;
	}
	var_139_int = 0; var_140_string = "";
	func_5052(var_139_int, "Money");
	AddItem(var_132_bool, var_139_int, (int)0, var_131_int);
	return 4;
	
}


func_3271(var_0_bool, var_498_float, var_499_int)
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
		func_3001(var_511_int);
		var_509_float = var_504_float;
		var_512_float = 0; var_513_object = Obj(); var_514_float = 0; var_515_int = 0;
		var_503_object = var_513_object;
		var_504_float = var_514_float;
		var_516_int = 0; var_517_object = Obj(); var_518_int = 0;
		var_503_object = var_517_object;
		var_499_int = var_518_int;
		func_3004(var_518_int);
		var_516_int = var_515_int;
		func_3978(var_512_float, var_513_object, var_514_float, var_515_int);
		var_512_float = var_505_float;
		var_577_int = 0;
		func_3654(var_577_int);
		ReportHit(var_0_bool, var_577_int, var_505_float, var_504_float);
		var_578_object = Obj(); var_579_float = 0;
		var_503_object = var_578_object;
		var_505_float = var_579_float;
		func_3661();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2769(var_0_bool)
{
	var_70_object = Obj();
	var_70_object = var_0_bool;
	func_4437(var_70_object);
	return 0;
}


func_4836(var_232_string)
{
	var_233_object = Obj(); var_234_int = 0; var_235_bool = 0; var_236_object = Obj(); var_237_int = 0; var_238_bool = 0;
	CreateInvItem(var_236_object);
	@@var_236_object:SetItemName(var_232_string);
	@@var_236_object:SetProperty("Organ", (int)1);
	@@var_236_object:GetItemID(var_237_int);
	AddItem(var_238_bool, var_236_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_4327()
{
	var_316_bool = 0; var_317_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_319_bool = 0;
	func_5511(var_319_bool);
	if(var_319_bool != 0) {
	} else {
		HasAnimationTrack(var_317_bool, "head");
		var_321_bool = var_317_bool;
		if(var_321_bool == 0) goto Label_4344;
		UnlookAsync("head");
	}
Label_4344:
	return 2;
	
}


func_3310(var_0_bool, var_1_object, var_461_bool, var_462_float)
{
	var_463_int = 0; var_464_bool = 0; var_465_int = 0; var_466_string = ""; var_467_int = 0; var_468_bool = 0; var_469_int = 0; var_470_string = "";
	func_3649(var_470_string);
	irand(var_467_int, var_1_object);
	var_467_int = var_467_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_4614();
	var_479_int = "attack_begin" + var_467_int;
	PlayAnimation("all", var_479_int);
	WaitForAnimEnd();
	func_3617(var_469_int, var_470_string);
	var_495_bool = 0; var_496_object = Obj();
	var_496_object = var_0_bool;
	func_4092(var_495_bool, var_496_object);
	var_497_bool = var_495_bool == 0; //@nz
	if(var_497_bool != 0) {
		StopAsync();
		var_461_bool = 0;
		return 8;
	}
	var_498_float = 0; var_499_int = 0;
	var_462_float = var_498_float;
	var_467_int = var_499_int;
	func_3271(var_470_string, var_498_float, var_499_int);
	var_582_int = "attack_middle" + var_467_int;
	HasAnimation(var_468_bool, "all", var_582_int);
	var_583_bool = var_468_bool;
	if(var_583_bool != 0) {
		func_4614();
		var_586_int = "attack_middle" + var_467_int;
		PlayAnimation("all", var_586_int);
		WaitForAnimEnd();
		func_3649(var_470_string);
		var_587_bool = 0; var_588_object = Obj();
		var_588_object = var_0_bool;
		func_4092(var_587_bool, var_588_object);
		var_589_bool = var_587_bool == 0; //@nz
		if(var_589_bool != 0) {
			StopAsync();
			var_461_bool = 0;
			return 8;
		}
		var_590_float = 0; var_591_int = 0;
		var_462_float = var_590_float;
		var_467_int = var_591_int;
		func_3271(var_470_string, var_590_float, var_591_int);
		var_469_int = 1;

	Label_3387:
		var_593_int = "attack_middle" + var_467_int;
		var_595_int = var_593_int + "_";
		var_470_string = var_595_int + var_469_int;
		HasAnimation(var_468_bool, "all", var_470_string);
		var_597_bool = var_468_bool == 0; //@nz
		if(var_597_bool != 0) {
		} else {
			func_4614();
			PlayAnimation("all", var_470_string);
			WaitForAnimEnd();
			func_3649(var_470_string);
			var_613_bool = 0; var_614_object = Obj();
			var_614_object = var_0_bool;
			func_4092(var_613_bool, var_614_object);
			var_615_bool = var_613_bool == 0; //@nz
			if(var_615_bool != 0) {
				StopAsync();
				var_461_bool = 0;
				var_616_float = 0; var_617_int = 0;
				var_462_float = var_616_float;
				var_467_int = var_617_int;
				func_3271(var_470_string, var_616_float, var_617_int);
				var_469_int = var_469_int + (int)1;
				goto Label_3387;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_601_int = "attack_end" + var_467_int;
	PlayAnimation("all", var_601_int);
	var_602_bool = 0;
	func_3663(var_602_bool);
	if(var_602_bool != 0) {
		var_603_bool = 0; var_604_float = 0;
		func_3447(var_603_bool, (float)0.75);
		StopAsync();
	}
	var_461_bool = 1;
	return 8;
	
}


func_5364(var_86_int, var_87_object)
{
	var_89_int = 0; var_90_object = Obj();
	var_87_object = var_90_object;
	func_5271(var_89_int, var_90_object);
	var_89_int = var_86_int;
	return 0;
}


func_4853()
{
	var_226_int = 0;
	func_4786(var_226_int);
	var_231_bool = var_226_int != (int)1;
	if(var_231_bool != 0) {
		return 0;
	}
	var_232_string = "";
	func_4836("liver");
	var_243_string = "";
	func_4836("kidney");
	var_244_string = "";
	func_4836("heart");
	var_245_string = "";
	func_4836("blood");
	return 0;
}


func_4345(var_324_bool, var_325_object)
{
	var_326_bool = 0; var_327_object = Obj(); var_328_float = 0;
	var_325_object = var_327_object;
	func_4353(var_326_bool, var_327_object, (float)70);
	var_326_bool = var_324_bool;
	return 0;
}


func_5371(var_125_object)
{
	var_126_object = Obj();
	var_125_object = var_126_object;
	func_5281(var_126_object);
	return 0;
}


func_4353(var_326_bool, var_327_object, var_328_float)
{
	var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_bool = 0; var_337_float = 0; var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_bool = 0;
	@@var_327_object:GetPosition(var_338_cvector);
	@@var_327_object:GetEyesHeight(var_337_float);
	var_345_float = GetByIndex(var_338_cvector, 1);
	var_345_float = var_345_float + var_337_float;
	SetByIndex(var_338_cvector, 1) = var_345_float;
	GetPosition(var_339_cvector);
	GetEyesHeight(var_337_float);
	var_346_float = GetByIndex(var_339_cvector, 1);
	var_346_float = var_346_float + var_337_float;
	SetByIndex(var_339_cvector, 1) = var_346_float;
	var_340_cvector = var_338_cvector - var_339_cvector;
	var_347_float = GetByIndex(var_340_cvector, 1);
	SetByIndex(var_340_cvector, 1) = (float)0;
	var_348_int = var_340_cvector | var_340_cvector;
	var_349_float = sqrt(var_348_int);
	var_340_cvector = var_340_cvector / var_349_float;
	var_341_cvector = -var_340_cvector;
	var_350_float = var_340_cvector * var_328_float;
	var_342_cvector = var_350_float - CVector(0.0, 10.0, 0.0);
	var_343_cvector = var_339_cvector + var_342_cvector;
	IsOverrideActive(var_344_bool);
	var_352_bool = var_344_bool;
	if(var_352_bool != 0) {
		var_326_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_343_cvector, var_341_cvector, (bool)1);
	var_354_float = GetByIndex(var_342_cvector, 0);
	var_355_float = GetByIndex(var_342_cvector, 2);
	Rotate(var_354_float, var_355_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_326_bool = 1;
	return 16;
}


func_5377(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0;
	var_30_object = var_36_object;
	var_37_bool = !var_32_bool;
	func_5289(var_35_bool, var_36_object, var_37_bool);
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
		func_3953(var_76_float, var_77_object);
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


func_2310(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_2446(var_18_object, var_19_bool);
	return 0;
}


func_4877(var_112_bool)
{
	var_113_int = 0; var_114_bool = 0; var_115_int = 0; var_116_bool = 0;
	var_117_bool = var_112_bool;
	if(var_117_bool != 0) {
		var_118_int = 0; var_119_int = 0;
		var_121_int = 0;
		func_4588(var_121_int);
		var_128_float = var_121_int * (int)100;
		var_119_int = (int)100 + var_128_float;
		func_4805((int)0, var_119_int);
		irand(var_115_int, (int)8);
		var_148_bool = var_115_int == (int)0;
		if(var_148_bool != 0) {
			var_149_int = 0; var_150_string = "";
			func_5052(var_149_int, "lemon");
			AddItem(var_116_bool, var_149_int, (int)0, (int)1);
		} else {
			var_154_bool = var_115_int == (int)1;
			if(var_154_bool != 0) {
				var_155_int = 0; var_156_string = "";
				func_5052(var_155_int, "rusk");
				AddItem(var_116_bool, var_155_int, (int)0, (int)1);
				goto Label_4965;
			}
			var_160_bool = var_115_int == (int)2;
			if(var_160_bool != 0) {
				var_161_int = 0; var_162_string = "";
				func_5052(var_161_int, "hook");
				AddItem(var_116_bool, var_161_int, (int)0, (int)1);
				goto Label_4965;
			}
			var_166_bool = var_115_int == (int)4;
			if(var_166_bool != 0) {
				var_167_int = 0; var_168_string = "";
				func_5052(var_167_int, "syringe");
				AddItem(var_116_bool, var_167_int, (int)0, (int)1);
				goto Label_4965;
			}
			var_172_bool = var_115_int == (int)5;
			if(var_172_bool != 0) {
				var_173_int = 0; var_174_string = "";
				func_5052(var_173_int, "watch");
				AddItem(var_116_bool, var_173_int, (int)0, (int)1);
				goto Label_4965;
			}
			var_178_bool = var_115_int == (int)6;
			if(var_178_bool == 0) goto Label_4965;
			var_179_int = 0; var_180_string = "";
			func_5052(var_179_int, "razor");
			AddItem(var_116_bool, var_179_int, (int)0, (int)1);
	}
		var_183_int = 0; var_184_int = 0;
		var_186_int = 0;
		func_4588(var_186_int);
		var_188_float = var_186_int * (int)50;
		var_184_int = (int)50 + var_188_float;
		func_4805((int)0, var_184_int);
		irand(var_115_int, (int)7);
		var_191_bool = var_115_int == (int)0;
		if(var_191_bool != 0) {
			var_192_int = 0; var_193_string = "";
			func_5052(var_192_int, "beads");
			AddItem(var_116_bool, var_192_int, (int)0, (int)1);
			goto Label_5051;
		}
		var_197_bool = var_115_int == (int)1;
		if(var_197_bool != 0) {
			var_198_int = 0; var_199_string = "";
			func_5052(var_198_int, "bracelet");
			AddItem(var_116_bool, var_198_int, (int)0, (int)1);
			goto Label_5051;
		}
		var_203_bool = var_115_int == (int)2;
		if(var_203_bool != 0) {
			var_204_int = 0; var_205_string = "";
			func_5052(var_204_int, "ear_ring");
			AddItem(var_116_bool, var_204_int, (int)0, (int)1);
			goto Label_5051;
		}
		var_209_bool = var_115_int == (int)3;
		if(var_209_bool != 0) {
			var_210_int = 0; var_211_string = "";
			func_5052(var_210_int, "gold_ring");
			AddItem(var_116_bool, var_210_int, (int)0, (int)1);
			goto Label_5051;
		}
		var_215_bool = var_115_int == (int)4;
		if(var_215_bool != 0) {
			var_216_int = 0; var_217_string = "";
			func_5052(var_216_int, "silver_ring");
			AddItem(var_116_bool, var_216_int, (int)0, (int)1);
			goto Label_5051;
		}
		var_221_bool = var_115_int == (int)5;
		if(var_221_bool == 0) goto Label_5051;
		var_222_int = 0; var_223_string = "";
		func_5052(var_222_int, "flower");
		AddItem(var_116_bool, var_222_int, (int)0, (int)1);
	}
Label_4965:
	goto Label_5051;
	
Label_5051:
	return 4;
	
}


func_2318(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_2453(var_23_bool, var_24_int);
	return 0;
}


func_5406(var_22_int)
{
	var_22_int = 0;
	return 0;
}


func_2335(var_2_object, var_20_object)
{
	var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0;
	var_25_bool = 0; var_26_object = Obj();
	var_20_object = var_26_object;
	func_4092(var_25_bool, var_26_object);
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
	func_5254(var_63_object);
	var_62_int = var_24_int;
	var_66_bool = var_24_int > (int)0;
	if(var_66_bool != 0) {
		var_68_bool = var_24_int > (int)1;
		if(var_68_bool != 0) {
			func_2318(var_24_int);
		}
		var_70_object = Obj();
		var_20_object = var_70_object;
		func_5263(var_70_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_5409()
{
	return 0;
}


func_5411(var_129_int, var_130_string, var_131_object)
{
	var_133_bool = var_130_string == "killme";
	if(var_133_bool != 0) {
		var_134_int = 0; var_135_object = Obj();
		var_131_object = var_135_object;
		func_5433(var_134_int, var_135_object);
		var_134_int = var_129_int;
		return 0;
	}
	var_129_int = 0;
	return 0;
}


func_3883(var_0_bool, var_1_object, var_27_int)
{
	var_29_bool = var_27_int != (int)0;
	if(var_29_bool != 0) {
		return 0;
	}
	var_30_bool = 0; var_31_object = Obj();
	var_31_object = var_1_object;
	func_3921(var_30_bool, var_31_object);
	var_66_bool = var_30_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_5423(var_177_string, var_178_object)
{
	var_180_bool = var_177_string == "killme";
	if(var_180_bool != 0) {
		var_181_object = Obj();
		var_178_object = var_181_object;
		func_5451(var_181_object);
		return 0;
	}
	return 0;
}


func_4401()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_4406(var_172_string)
{
	var_173_bool = 0; var_174_float = 0; var_175_float = 0; var_176_bool = 0; var_177_float = 0; var_178_float = 0;
	lshHasAnimation(var_176_bool, var_172_string);
	var_179_bool = var_176_bool;
	if(var_179_bool != 0) {
		lshGetAnimTimes(var_172_string, var_177_float, var_178_float);
		lshPlayAnimation(var_177_float, var_178_float, (bool)0);
	} else {
		var_182_int = "Can't find lsh animation : " + var_172_string;
		Trace(var_182_int);
	}
	return 6;
	
}


func_5433(var_134_int, var_135_object)
{
	var_136_bool = 0; var_137_object = Obj();
	var_135_object = var_137_object;
	func_4092(var_136_bool, var_137_object);
	var_170_bool = var_136_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_134_int = 0;
		return 0;
	}
	var_171_bool = 0; var_172_object = Obj();
	var_135_object = var_172_object;
	func_5559(var_172_object);
	if(var_171_bool != 0) {
		var_134_int = 2;
	} else {
		var_134_int = 0;
	}
	return 0;
	
}


func_3905(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_4422(var_147_string, var_148_bool)
{
	var_151_bool = 0; var_152_float = 0; var_153_float = 0; var_154_bool = 0; var_155_float = 0; var_156_float = 0;
	lshHasAnimation(var_154_bool, var_147_string);
	var_157_bool = var_154_bool;
	if(var_157_bool != 0) {
		lshGetAnimTimes(var_147_string, var_155_float, var_156_float);
		lshPlayAnimation(var_155_float, var_156_float, var_148_bool);
	} else {
		var_159_int = "Can't find lsh animation : " + var_147_string;
		Trace(var_159_int);
	}
	return 6;
	
}


func_2375(var_0_bool, var_1_object)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_31_float, (float)0.5);
	Sleep(var_31_float);
	
Label_2383:
	var_38_bool = var_0_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_39_bool = var_1_object == 0; //@nz
		if(var_39_bool != 0) {

		Label_2387:
			GetPosition(var_33_cvector);
			var_40_float = 0;
			func_2434(var_40_float);
			GetRandomPFPointInCircle(var_32_cvector, var_33_cvector, var_40_float, var_34_bool);
			var_43_bool = var_34_bool;
			if(var_43_bool != 0) {
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
	var_44_object = Obj(); var_45_cvector = CVector(0,0,0);
	var_32_cvector = var_45_cvector;
	func_2462(var_44_object, var_45_cvector);
	var_44_object = var_35_object;
	var_48_bool = var_35_object != 0; //@nn
	if(var_48_bool != 0) {
		RotatePath(var_35_object, var_36_bool);
		var_49_bool = var_36_bool;
		if(var_49_bool != 0) {
			var_50_bool = 0;
			func_2460(var_50_bool);
			FollowPath(var_35_object, var_50_bool, var_36_bool);
			var_35_object = 0;
			var_51_bool = var_36_bool;
			if(var_51_bool != 0) {
				TaskCall(5);
				func_2632();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_35_object = 0;
	goto Label_2383;
	
}


func_5451(var_181_object)
{
	var_182_object = Obj();
	var_181_object = var_182_object;
	func_5281(var_182_object);
	return 0;
}


func_5457(var_22_int)
{
	var_22_int = 2;
	return 0;
}


func_3921(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_4092(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
	return 0;
}


func_5460(var_30_object)
{
	var_31_object = Obj();
	var_30_object = var_31_object;
	func_5517(var_30_object, var_31_object);
	return 0;
}


func_4437(var_23_object)
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


func_3928(var_324_string)
{
	var_324_string = "walk";
	return 0;
}


func_5466()
{
	return 0;
}


func_3930(var_325_string)
{
	var_325_string = "run";
	return 0;
}


func_3932(var_540_string, var_541_int)
{
	var_543_bool = var_541_int == (int)2;
	if(var_543_bool != 0) {
		var_540_string = "fire";
		return 0;
	EMIT "GOTO 0xf68";
	}
	var_545_bool = var_541_int == (int)1;
	if(var_545_bool != 0) {
		var_540_string = "bullet";
		return 0;
	}
	var_540_string = "phys";
	return 0;
}


func_5467(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_5470()
{
	return 0;
}


func_4448()
{
	var_22_bool = 0;
	func_5511(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5472(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	CanSee(var_35_bool, var_33_object);
	var_32_bool = 1;
	var_36_bool = var_35_bool;
	if(var_36_bool != 1) {
		var_37_float = 0; var_38_object = Obj();
		var_33_object = var_38_object;
		func_3953(var_37_float, var_38_object);
		var_46_bool = var_37_float <= (int)2250000;
		if(var_46_bool != 1) {
			var_32_bool = 0;
		}
	}
	return 2;
}


func_2917()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_4455(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	IsExisting3DSound(var_54_bool, var_45_string);
	var_62_bool = var_54_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_55_int = 0;

	Label_4461:
		var_64_int = var_55_int + (int)1;
		var_65_int = var_45_string + var_64_int;
		IsExisting3DSound(var_56_bool, var_65_int);
		var_66_bool = var_56_bool == 0; //@nz
		if(var_66_bool != 0) {
		} else {
			var_55_int = var_55_int + (int)1;
			goto Label_4461;
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


func_3946(var_53_cvector, var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_57_cvector);
	@@var_54_object:GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
	return 4;
}


func_5487(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	func_5263(var_61_object);
	return 0;
}


func_3953(var_37_float, var_38_object)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	GetPosition(var_42_cvector);
	@@var_38_object:GetPosition(var_43_cvector);
	var_44_cvector = var_43_cvector - var_42_cvector;
	var_37_float = var_44_cvector | var_44_cvector;
	return 6;
}


func_5493(var_49_bool)
{
	var_49_bool = 0;
	return 0;
}


func_3447(var_603_bool, var_604_float)
{
	var_605_float = 0; var_606_bool = 0; var_607_float = 0; var_608_bool = 0;
	rand(var_607_float);
	var_609_bool = var_607_float < var_604_float;
	if(var_609_bool != 0) {

	Label_3452:
		IsAnimationPlaying(var_608_bool);
		var_610_bool = var_608_bool == 0; //@nz
		if(var_610_bool != 0) {
		} else {
			var_611_bool = 0;
			func_3545(var_611_bool);
			if(var_611_bool != 0) {
				var_603_bool = 1;
				sync();
				goto Label_3452;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_3649(var_608_bool);
	}
	goto Label_3472;
	
Label_3472:
	var_603_bool = 0;
	return 4;
	
}


func_5496()
{
	return 0;
}


func_3961(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0;
	IsPlayerActor(var_104_object, var_106_bool);
	var_106_bool = var_103_bool;
	return 2;
}


func_5498(var_27_bool)
{
	var_27_bool = 0;
	return 0;
}


func_5501()
{
	return 0;
}


func_3966(var_54_bool, var_55_object, var_56_string)
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


func_5503(var_104_int)
{
	var_104_int = 515564;
	return 0;
}


func_5505(var_103_int)
{
	var_103_int = 503349;
	return 0;
}


func_2434(var_40_float)
{
	var_41_float = 0; var_42_float = 0;
	GetCameraFarDistance(var_42_float);
	var_42_float = var_40_float;
	return 2;
}


func_5507(var_105_string)
{
	var_105_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_5509(var_106_string)
{
	var_106_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_5511(var_98_bool)
{
	var_98_bool = 0;
	return 0;
}


func_5513()
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_3978(var_512_float, var_513_object, var_514_float, var_515_int)
{
	var_519_int = 0; var_520_string = ""; var_521_int = 0; var_522_float = 0; var_523_float = 0; var_524_float = 0; var_525_int = 0; var_526_string = ""; var_527_int = 0; var_528_float = 0; var_529_float = 0; var_530_float = 0;
	var_531_bool = 0; var_532_object = Obj(); var_533_string = "";
	var_513_object = var_532_object;
	func_3966(var_531_bool, var_532_object, "health");
	var_534_bool = var_531_bool == 0; //@nz
	if(var_534_bool != 0) {
		var_512_float = 0.0;
		return 12;
	}
	var_535_bool = 0; var_536_object = Obj(); var_537_string = "";
	var_513_object = var_536_object;
	func_3966(var_535_bool, var_536_object, "armor");
	var_538_bool = var_535_bool == 0; //@nz
	if(var_538_bool != 0) {
		var_525_int = 0;
	} else {
			@@var_513_object:GetProperty("armor", var_525_int);
	}
	var_540_string = ""; var_541_int = 0;
	var_515_int = var_541_int;
	func_3932(var_540_string, var_541_int);
	var_526_string = "armor_" + var_540_string;
	var_546_bool = 0; var_547_object = Obj(); var_548_string = "";
	var_513_object = var_547_object;
	var_526_string = var_548_string;
	func_3966(var_546_bool, var_547_object, var_548_string);
	var_549_bool = var_546_bool == 0; //@nz
	if(var_549_bool != 0) {
		var_527_int = 0;
	} else {
		@@var_513_object:GetProperty(var_526_string, var_527_int);

	}
	var_550_float = 0; var_551_float = 0; var_552_float = 0;
	var_553_int = var_525_int + var_527_int;
	var_551_float = var_553_int / (float)100.0;
	func_4512(var_550_float, var_551_float, (float)1);
	var_550_float = var_528_float;
	@@var_513_object:GetProperty("health", var_529_float);
	var_558_int = (int)1 - var_528_float;
	var_530_float = var_514_float * var_558_int;
	var_560_float = 0; var_561_float = 0; var_562_float = 0; var_563_float = 0;
	var_561_float = var_529_float - var_530_float;
	func_4519(var_560_float, var_561_float, (float)0, (float)1);
	@@var_513_object:SetProperty("health", var_560_float);
	var_566_bool = 0; var_567_object = Obj();
	var_513_object = var_567_object;
	func_3961(var_566_bool, var_567_object);
	if(var_566_bool != 0) {
		var_568_float = 0;
		var_568_float = -var_530_float;
		func_4571(var_568_float);
	}
	var_530_float = var_512_float;
	return 12;
	
}


func_5517(var_31_object, var_46_object)
{
	var_32_bool = 0; var_33_bool = 0;
	var_34_bool = GlobalVars[0];
	if(var_34_bool != 0) {
		IsOverrideActive(var_33_bool);
		var_35_bool = var_33_bool == 0; //@nz
		if(var_35_bool != 0) {
			var_36_object = Obj();
			var_31_object = var_36_object;
			func_4792(var_36_object);
		}
		return 2;
	EMIT "GOTO 0x15b4";
	}
	var_44_int = 0; var_45_object = Obj();
	var_31_object = var_45_object;
	TaskCall(1);
	func_40(var_46_object, var_44_int, var_45_object);
	TaskReturn();
	var_323_bool = (int)1000 == var_46_object;
	if(var_323_bool != 0) {
		var_324_bool = 0; var_325_object = Obj();
		var_31_object = var_325_object;
		func_4345(var_324_bool, var_325_object);
		var_356_bool = var_324_bool == 0; //@nz
		if(var_356_bool != 0) {
			return 2;
		}
		var_357_object = Obj();
		var_31_object = var_357_object;
		TaskCall(0);
		func_0(var_357_object);
		TaskReturn();
		var_31_object = Obj();
		func_4401();
	}
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


func_4496(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj();
	self(var_109_object);
	var_109_object = var_107_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3474(var_0_bool, var_404_bool, var_405_float)
{
	var_406_bool = 0; var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_float = 0; var_411_bool = 0; var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_float = 0;
	
Label_3475:
	IsAnimationPlaying(var_411_bool);
	var_416_bool = var_411_bool == 0; //@nz
	if(var_416_bool != 0) {
	} else {
		var_417_bool = 0;
		func_3545(var_417_bool);
		if(var_417_bool != 0) {
			var_404_bool = 1;
			return 10;
		}
		var_456_bool = 0; var_457_object = Obj();
		var_457_object = var_0_bool;
		func_4092(var_456_bool, var_457_object);
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
			func_3310(var_414_cvector, var_415_float, var_461_bool, var_462_float);
			var_404_bool = 1;
			sync();
			goto Label_3475;
		}
		return 10;
	}
	func_3649(var_415_float);
	var_404_bool = 0;
	return 10;
	
}


func_2453(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_4502(var_51_cvector, var_52_cvector)
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


func_1943(var_21_object)
{
	EventDisable(0);
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_1976(var_22_object);
	var_102_object = Obj();
	var_21_object = var_102_object;
	func_5572(var_102_object);
	EventEnable(0);
	
Label_1954:
	Hold();
	goto Label_1954;
}
EMIT "Return(); Pop(0)";


func_2460(var_50_bool)
{
	var_50_bool = 0;
	return 0;
}


func_2462(var_44_object, var_45_cvector)
{
	var_46_object = Obj(); var_47_object = Obj();
	FindShiftedPathTo(var_47_object, var_45_cvector);
	var_47_object = var_44_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4512(var_550_float, var_551_float, var_552_float)
{
	var_555_bool = var_551_float < var_552_float;
	if(var_555_bool != 0) {
		var_551_float = var_550_float;
	} else {
		var_552_float = var_550_float;
	}
	return 0;
	
}


func_4519(var_560_float, var_561_float, var_562_float, var_563_float)
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


func_424(var_2_object, var_143_string)
{
	var_144_bool = 0;
	func_5511(var_144_bool);
	var_145_bool = var_144_bool == 0; //@nz
	if(var_145_bool != 0) {
		return 0;
	}
	var_146_bool = var_143_string == var_2_object;
	if(var_146_bool != 0) {
		return 0;
	}
	var_147_string = ""; var_148_bool = 0;
	var_143_string = var_147_string;
	var_150_bool = var_143_string == "";
	if(var_150_bool != 0) {
		var_148_bool = 0;
	} else {
		var_148_bool = 1;
	}
	func_4422(var_147_string, var_148_bool);
	var_2_object = var_143_string;
	return 0;
	
}


func_2993(var_183_object)
{
	var_190_object = Obj(); var_191_bool = 0; var_192_float = 0;
	var_183_object = var_190_object;
	func_3007(var_186_int, var_187_bool, var_188_float, var_189_int, var_183_object, var_190_object, (bool)1, (float)180.0);
	return 0;
}


func_4530(var_72_float, var_73_cvector, var_74_cvector)
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


func_5557(var_64_bool)
{
	var_64_bool = 0;
	return 0;
}


func_5559(var_171_bool)
{
	var_171_bool = 1;
	return 0;
}


func_1976(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0);
	var_43_bool = var_22_object == 0; //@ne
	if(var_43_bool != 0) {
		var_44_string = "";
		func_2067("fdie");
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
		func_4455(var_97_string);
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


func_3001(var_509_float)
{
	var_509_float = 0.05000000074505806;
	return 0;
}


func_5562(var_24_bool, var_25_object, var_26_object, var_27_bool)
{
	var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_float = 0; var_32_bool = 0;
	var_25_object = var_29_object;
	var_26_object = var_30_object;
	var_27_bool = var_32_bool;
	func_5377(var_28_bool, var_29_object, var_30_object, (float)700.0, var_32_bool);
	var_28_bool = var_24_bool;
	return 0;
}


func_4539(var_81_float, var_82_cvector)
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


func_3004(var_516_int)
{
	var_516_int = 0;
	return 0;
}


func_3517(var_0_bool, var_419_bool)
{
	var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_float = 0; var_424_float = 0; var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); var_428_float = 0; var_429_float = 0;
	var_430_bool = 0; var_431_object = Obj();
	var_431_object = var_0_bool;
	func_4092(var_430_bool, var_431_object);
	var_432_bool = var_430_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_419_bool = 0;
		return 10;
	}
	var_433_bool = 0;
	func_3606(var_429_float, var_433_bool);
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


func_5052(var_139_int, var_140_string)
{
	var_141_int = 0; var_142_int = 0;
	GetInvItemByName(var_142_int, var_140_string);
	var_142_int = var_139_int;
	return 2;
}


func_3007(var_0_bool, var_3_object, var_5_bool, var_190_object, var_191_bool, var_192_float, var_267_bool, var_353_bool)
{
	var_193_float = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_bool = 0; var_198_float = 0; var_199_cvector = CVector(0,0,0); var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_bool = 0; var_203_float = 0; var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_bool = 0; var_208_bool = 0; var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_float = 0;
	func_3236(var_212_cvector, var_213_bool, var_214_float);
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
		func_4496(var_245_object);
		SendPlayerEnemy(var_190_object, var_245_object);
	}
	var_248_bool = var_191_bool;
	if(var_248_bool != 0) {
		var_208_bool = 0;
	} else {
						var_208_bool = 1;

	}
	var_209_float = (float)400.0 + var_204_float;
	
Label_3047:
	var_250_bool = 0;
	var_250_bool = 0;
	var_251_bool = 0; var_252_object = Obj();
	var_252_object = var_0_bool;
	func_4092(var_251_bool, var_252_object);
	if(var_251_bool != 0) {
		var_253_bool = var_3_object == 0; //@nz
		if(var_253_bool != 0) {
			var_250_bool = 1;
		}
	}
	if(var_250_bool != 0) {
		func_3649(var_214_float);
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
			func_3676(var_269_bool, var_261_bool, var_262_object, var_263_float, (float)3000.0, (bool)1, (bool)0);
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
						func_3676(var_355_bool, var_347_bool, var_348_object, var_349_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_356_bool = var_353_bool == 0; //@nz
						if(var_356_bool != 0) {
							goto Label_3219;
						}
						var_208_bool = 0;
						goto Label_3047;
					}
					var_357_bool = var_208_bool == 0; //@nz
					if(var_357_bool != 0) {
						var_358_object = Obj();
						var_358_object = var_0_bool;
						func_4242(var_358_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_3649(var_214_float);
						StopAsync();
						var_208_bool = 1;
						var_361_bool = 0; var_362_object = Obj();
						var_362_object = var_0_bool;
						func_4092(var_361_bool, var_362_object);
						var_363_bool = var_361_bool == 0; //@nz
						if(var_363_bool != 0) {
							goto Label_3219;
						}
					}
					rand(var_214_float);
					var_364_bool = 0;
					var_366_bool = var_214_float < (float)0.25;
					if(var_366_bool != 1) {
						var_367_bool = 0;
						func_3606((bool)1, var_367_bool);
						if(var_367_bool != 1) {
							var_364_bool = 0;
						}
					}
					if(var_364_bool != 0) {
						Face(var_0_bool);
						func_3656();
						PlayAnimation("all", "attack_stay");
						var_404_bool = 0; var_405_float = 0;
						var_192_float = var_405_float;
						func_3474(var_214_float, var_404_bool, var_405_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_3649(var_214_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_622_bool = 0;
						func_3606(var_214_float, var_622_bool);
						var_623_bool = var_622_bool == 0; //@nz
						if(var_623_bool == 0) goto Label_3209;
						var_624_bool = 0; var_625_object = Obj();
						var_625_object = var_0_bool;
						func_4092(var_624_bool, var_625_object);
						var_626_bool = var_624_bool == 0; //@nz
						if(var_626_bool != 0) {
							goto Label_3219;
						}
						@@@var_0_bool:GetPFPosition(var_205_cvector);
						GetPFPosition(var_206_cvector);
						var_210_cvector = var_205_cvector - var_206_cvector;
						var_211_float = var_210_cvector | var_210_cvector;
						var_627_float = var_192_float * var_192_float;
						var_628_bool = var_211_float < var_627_float;
						if(var_628_bool == 0) goto Label_3209;
						var_629_bool = 0; var_630_float = 0;
						var_192_float = var_630_float;
						func_3310(var_213_bool, var_214_float, var_629_bool, var_630_float);
						var_631_bool = var_629_bool == 0; //@nz
						if(var_631_bool == 0) goto Label_3209;
						goto Label_3219;
				}
					var_632_bool = 0; var_633_float = 0;
					var_192_float = var_633_float;
					func_3310(var_213_bool, var_214_float, var_632_bool, var_633_float);
					var_634_bool = var_632_bool == 0; //@nz
					if(var_634_bool != 0) {
						goto Label_3219;
					}
					var_208_bool = 1;

				}
			Label_3209:
				goto Label_3218;
		}
		Label_3218:
			goto Label_3047;

		}
	}
Label_3219:
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


func_5057(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	TaskCall(3);
	func_1943(var_21_object);
	TaskReturn();
	return 0;
}


func_5572(var_102_object)
{
	var_103_bool = 0; var_104_object = Obj();
	var_102_object = var_104_object;
	func_3961(var_103_bool, var_104_object);
	if(var_103_bool != 0) {
		var_107_object = Obj();
		func_4496(var_107_object);
		ReportReputationChange(var_102_object, var_107_object, (float)-0.07000000029802322, (bool)1);
		var_112_bool = 0;
		func_4877((bool)1);
	}
	func_4853();
	var_246_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_4549(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_70_cvector = var_73_cvector;
	var_71_cvector = var_74_cvector;
	func_4530(var_72_float, var_73_cvector, var_74_cvector);
	var_81_float = 0; var_82_cvector = CVector(0,0,0);
	var_70_cvector = var_82_cvector;
	func_4539(var_81_float, var_82_cvector);
	var_90_float = 0; var_91_cvector = CVector(0,0,0);
	var_71_cvector = var_91_cvector;
	func_4539(var_90_float, var_91_cvector);
	var_92_float = var_81_float * var_90_float;
	var_69_float = var_72_float / var_92_float;
	return 0;
}


func_4051(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	@@var_48_object:IsDead(var_50_bool);
	var_50_bool = var_47_bool;
	return 2;
}


func_4566(var_126_int, var_127_string)
{
	var_128_int = 0; var_129_int = 0;
	GetVariable(var_127_string, var_129_int);
	var_129_int = var_126_int;
	return 2;
}


func_4056(var_36_bool, var_37_object)
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
		func_4051(var_47_bool, var_48_object);
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


func_3545(var_417_bool)
{
	var_418_bool = 0;
	var_418_bool = 0;
	var_419_bool = 0;
	func_3517(var_418_bool, var_419_bool);
	if(var_419_bool != 0) {
		var_436_bool = 0;
		func_3561(var_417_bool, var_418_bool, var_436_bool);
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


func_4571(var_568_float)
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


func_3561(var_0_bool, var_4_string, var_436_bool)
{
	var_437_object = Obj(); var_438_bool = 0; var_439_float = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_object = Obj(); var_443_bool = 0; var_444_float = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0);
	GetScene(var_442_object);
	var_443_bool = 0;
	
Label_3565:
	var_447_cvector = CVector(0,0,0); var_448_object = Obj();
	var_448_object = var_0_bool;
	func_3946(var_447_cvector, var_448_object);
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
		func_3649(var_446_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_443_bool = 1;
		var_454_bool = 0;
		func_3517(var_446_cvector, var_454_bool);
		var_455_bool = var_454_bool == 0; //@nz
		if(var_455_bool != 0) {
			goto Label_3603;
		}
		goto Label_3565;
	}
Label_3603:
	var_443_bool = var_436_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_4588(var_121_int)
{
	var_122_float = 0; var_123_float = 0;
	GetGameTime(var_123_float);
	var_125_int = 0;
	var_125_int = var_123_float / (int)24;
	var_121_int = (int)1 + var_125_int;
	return 2;
}


func_5102(var_23_bool, var_24_object, var_25_string)
{
	var_27_bool = var_25_string == "unholster";
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_24_object = var_29_object;
		func_5467(var_29_object);
		var_28_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x140c";
	}
	var_31_bool = var_25_string == "player_shot";
	if(var_31_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_24_object = var_33_object;
		func_5472(var_32_bool, var_33_object);
		var_32_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x140c";
	}
	var_48_bool = var_25_string == "battle";
	if(var_48_bool != 0) {
		var_49_bool = 0; var_50_object = Obj();
		var_24_object = var_50_object;
		func_5493(var_50_object);
		var_49_bool = var_23_bool;
		return 0;
	}
	var_23_bool = 0;
	return 0;
}


func_4597(var_249_int)
{
	var_250_float = 0; var_251_float = 0;
	GetGameTime(var_251_float);
	var_252_int = 0;
	var_251_float = var_252_int;
	var_249_int = var_252_int % (int)24;
	return 2;
}


func_4092(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0;
	var_36_bool = 0; var_37_object = Obj();
	var_33_object = var_37_object;
	func_4056(var_36_bool, var_37_object);
	var_53_bool = var_36_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_54_bool = 0; var_55_object = Obj(); var_56_string = "";
	var_33_object = var_55_object;
	func_3966(var_54_bool, var_55_object, "noaccess");
	var_63_bool = var_54_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_32_bool = 1;
		return 2;
	}
	@@var_33_object:GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == (int)0;
	return 2;
}


func_4605(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	IsPlayerActor(var_22_object, var_24_bool);
	var_25_bool = var_24_bool;
	if(var_25_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


