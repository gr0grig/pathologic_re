// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Confusion|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Threat|W:Arrogance|W:Isee|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:oob12AglajaSobor1|W:oob12AglajaSobor2|W:oob12AglajaSobor3|W:oob12AglajaSobor4|W:oob12AglajaSobor5|W:oob12AglajaSobor6|W:oob12AglajaSobor7|W:b12q01ChildsAreVisited|W:b12q01TheaterIsVisited|W:game_final|W:branch|W:ui/NPC_Aglaja.png|W:ui/NPC_Aglaja_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x4be
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x127 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x4c2 vars=object
// @EVENT_26: op=0x4ca vars=string
// @EVENT_6: op=0x4e6 vars=
// @PE: 0x51,0x111,0x127,0x4c2,0x62c,0x632,0x638,0x63e,0x644,0x64a,0x650,0x656,0x662,0x66e,0x67a,0x686,0x692,0x69e,0x6aa,0x6b6,0x6c2

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1543();
		var_11_bool = var_7_bool == (int)23336;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1580();
		}
		var_17_bool = var_7_bool == (int)23902;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1586();
		}
		var_23_bool = var_7_bool == (int)23903;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_1592();
		}
		var_29_bool = var_7_bool == (int)23909;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_1598();
		}
		var_35_bool = var_7_bool == (int)23916;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_1604();
		}
		var_41_bool = var_7_bool == (int)23957;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_1610();
		}
		var_47_bool = var_7_bool == (int)23967;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_1616();
		}
		var_53_bool = var_6_int == (int)23335;
		if(var_53_bool != 0) {
			var_54_bool = 0; var_55_object = Obj();
			var_55_object = var_1_object;
			func_1730(var_55_object);
			var_62_bool = var_54_bool == 0; //@nz
			if(var_62_bool != 0) {
				var_63_string = "";
				func_273(var_7_bool, "Confusion");
				@@@var_0_object:SetMessage((int)522168);
				@@@var_0_object:ClearReplies();
				var_81_bool = 0; var_82_object = Obj();
				var_82_object = var_1_object;
				func_1646(var_82_object);
				if(var_81_bool != 0) {
					@@@var_0_object:AddReply((int)522169, (int)23901, (int)23336);
				}
				var_90_bool = 0; var_91_object = Obj();
				var_91_object = var_1_object;
				func_1658(var_91_object);
				if(var_90_bool != 0) {
					@@@var_0_object:AddReply((int)522721, (int)23904, (int)23902);
				}
				var_99_bool = 0; var_100_object = Obj();
				var_100_object = var_1_object;
				func_1670(var_100_object);
				if(var_99_bool != 0) {
					@@@var_0_object:AddReply((int)522722, (int)23905, (int)23903);
				}
				var_108_bool = 0;
				var_108_bool = 0;
				var_109_bool = 0;
				var_109_bool = 0;
				var_110_bool = 0; var_111_object = Obj();
				var_111_object = var_1_object;
				func_1622(var_111_object);
				var_116_bool = var_110_bool == 0; //@nz
				if(var_116_bool != 0) {
					var_117_bool = 0; var_118_object = Obj();
					var_118_object = var_1_object;
					func_1634(var_118_object);
					var_123_bool = var_117_bool == 0; //@nz
					if(var_123_bool != 0) {
						var_109_bool = 1;
					}
				}
				if(var_109_bool != 0) {
					var_124_bool = 0; var_125_object = Obj();
					var_125_object = var_1_object;
					func_1682(var_125_object);
					if(var_124_bool != 0) {
						var_108_bool = 1;
					}
				}
				if(var_108_bool != 0) {
					@@@var_0_object:AddReply((int)522728, (int)23910, (int)23909);
				}
				var_133_bool = 0; var_134_object = Obj();
				var_134_object = var_1_object;
				func_1694(var_134_object);
				if(var_133_bool != 0) {
					@@@var_0_object:AddReply((int)522735, (int)23921, (int)23916);
				}
				var_142_bool = 0;
				var_142_bool = 0;
				var_143_bool = 0; var_144_object = Obj();
				var_144_object = var_1_object;
				func_1622(var_144_object);
				if(var_143_bool != 0) {
					var_145_bool = 0; var_146_object = Obj();
					var_146_object = var_1_object;
					func_1706(var_146_object);
					if(var_145_bool != 0) {
						var_142_bool = 1;
					}
				}
				if(var_142_bool != 0) {
					@@@var_0_object:AddReply((int)522774, (int)23968, (int)23957);
				}
				var_154_bool = 0;
				var_154_bool = 0;
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_1634(var_156_object);
				if(var_155_bool != 0) {
					var_157_bool = 0; var_158_object = Obj();
					var_158_object = var_1_object;
					func_1718(var_158_object);
					if(var_157_bool != 0) {
						var_154_bool = 1;
					}
				}
				if(var_154_bool != 0) {
					@@@var_0_object:AddReply((int)522784, (int)23978, (int)23967);
				}
				@@@var_0_object:AddReply((int)522727, (int)-1, (int)23908);
				return 0;
			}
			var_169_string = "";
			func_273(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523161);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523162, (int)-1, (int)24364);
			@@@var_0_object:AddReply((int)523168, (int)-1, (int)24370);
			@@@var_0_object:AddReply((int)523169, (int)-1, (int)24371);
			return 0;
		}
		var_181_bool = var_6_int == (int)23978;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522795);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522798, (int)-1, (int)23981);
			@@@var_0_object:AddReply((int)522796, (int)23980, (int)23979);
			return 0;
		}
		var_191_bool = var_6_int == (int)23980;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_273(var_7_bool, "Arrogance");
			@@@var_0_object:SetMessage((int)522797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522800, (int)-1, (int)23983);
			@@@var_0_object:AddReply((int)522799, (int)23984, (int)23982);
			return 0;
		}
		var_201_bool = var_6_int == (int)23984;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_273(var_7_bool, "Arrogance");
			@@@var_0_object:SetMessage((int)522801);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522802, (int)-1, (int)23985);
			@@@var_0_object:AddReply((int)522803, (int)23987, (int)23986);
			return 0;
		}
		var_211_bool = var_6_int == (int)23987;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_273(var_7_bool, "Arrogance");
			@@@var_0_object:SetMessage((int)522804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522805, (int)-1, (int)23988);
			@@@var_0_object:AddReply((int)522806, (int)-1, (int)23989);
			return 0;
		}
		var_221_bool = var_6_int == (int)23968;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522786, (int)23970, (int)23969);
			return 0;
		}
		var_228_bool = var_6_int == (int)23970;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522787);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522788, (int)23972, (int)23971);
			return 0;
		}
		var_235_bool = var_6_int == (int)23972;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_273(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522789);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522790, (int)23974, (int)23973);
			return 0;
		}
		var_242_bool = var_6_int == (int)23974;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_273(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522792, (int)23976, (int)23975);
			@@@var_0_object:AddReply((int)540111, (int)-1, (int)42078);
			return 0;
		}
		var_252_bool = var_6_int == (int)23976;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_273(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522794, (int)-1, (int)23977);
			return 0;
		}
		var_259_bool = var_6_int == (int)23921;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_273(var_7_bool, "Isee");
			@@@var_0_object:SetMessage((int)522740);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522741, (int)23923, (int)23922);
			return 0;
		}
		var_266_bool = var_6_int == (int)23923;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522742);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522743, (int)-1, (int)23924);
			@@@var_0_object:AddReply((int)522744, (int)-1, (int)23925);
			return 0;
		}
		var_276_bool = var_6_int == (int)23910;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_273(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522730, (int)-1, (int)23911);
			@@@var_0_object:AddReply((int)540108, (int)42076, (int)42075);
			return 0;
		}
		var_286_bool = var_6_int == (int)42076;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_273(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540109);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540110, (int)-1, (int)42077);
			return 0;
		}
		var_293_bool = var_6_int == (int)23905;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522725, (int)23920, (int)23906);
			@@@var_0_object:AddReply((int)522726, (int)-1, (int)23907);
			return 0;
		}
		var_303_bool = var_6_int == (int)23920;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522770, (int)23954, (int)23953);
			@@@var_0_object:AddReply((int)522769, (int)-1, (int)23952);
			return 0;
		}
		var_313_bool = var_6_int == (int)23954;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522771);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522772, (int)-1, (int)23955);
			@@@var_0_object:AddReply((int)522773, (int)-1, (int)23956);
			return 0;
		}
		var_323_bool = var_6_int == (int)23904;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522732, (int)23914, (int)23913);
			return 0;
		}
		var_330_bool = var_6_int == (int)23914;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522733);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522734, (int)-1, (int)23915);
			return 0;
		}
		var_337_bool = var_6_int == (int)23901;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522731, (int)23917, (int)23912);
			@@@var_0_object:AddReply((int)522745, (int)23927, (int)23926);
			@@@var_0_object:AddReply((int)522753, (int)23936, (int)23935);
			@@@var_0_object:AddReply((int)522766, (int)23950, (int)23949);
			return 0;
		}
		var_353_bool = var_6_int == (int)23950;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_273(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522768, (int)-1, (int)23951);
			return 0;
		}
		var_360_bool = var_6_int == (int)23936;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_273(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522754);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522755, (int)23938, (int)23937);
			return 0;
		}
		var_367_bool = var_6_int == (int)23938;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_273(var_7_bool, "Arrogance");
			@@@var_0_object:SetMessage((int)522756);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522757, (int)-1, (int)23939);
			@@@var_0_object:AddReply((int)522758, (int)-1, (int)23940);
			return 0;
		}
		var_377_bool = var_6_int == (int)23927;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522746);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522747, (int)23929, (int)23928);
			@@@var_0_object:AddReply((int)522775, (int)23959, (int)23958);
			return 0;
		}
		var_387_bool = var_6_int == (int)23959;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522776);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522777, (int)23961, (int)23960);
			return 0;
		}
		var_394_bool = var_6_int == (int)23961;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522778);
			@@@var_0_object:ClearReplies();
			var_397_bool = 0; var_398_object = Obj();
			var_398_object = var_1_object;
			func_1622(var_398_object);
			var_399_bool = var_397_bool == 0; //@nz
			if(var_399_bool != 0) {
				@@@var_0_object:AddReply((int)522779, (int)-1, (int)23962);
			}
			var_403_bool = 0; var_404_object = Obj();
			var_404_object = var_1_object;
			func_1622(var_404_object);
			if(var_403_bool != 0) {
				@@@var_0_object:AddReply((int)522780, (int)23964, (int)23963);
			}
			return 0;
		}
		var_409_bool = var_6_int == (int)23964;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_273(var_7_bool, "Arrogance");
			@@@var_0_object:SetMessage((int)522781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522783, (int)-1, (int)23966);
			@@@var_0_object:AddReply((int)522782, (int)-1, (int)23965);
			return 0;
		}
		var_419_bool = var_6_int == (int)23929;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522749, (int)23932, (int)23930);
			@@@var_0_object:AddReply((int)522750, (int)-1, (int)23931);
			return 0;
		}
		var_429_bool = var_6_int == (int)23932;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522752, (int)23917, (int)23933);
			return 0;
		}
		var_436_bool = var_6_int == (int)23917;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522736);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522737, (int)23919, (int)23918);
			return 0;
		}
		var_443_bool = var_6_int == (int)23919;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522738);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522759, (int)23945, (int)23941);
			@@@var_0_object:AddReply((int)522760, (int)23943, (int)23942);
			return 0;
		}
		var_453_bool = var_6_int == (int)23943;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_273(var_7_bool, "Confusion");
			@@@var_0_object:SetMessage((int)522761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522762, (int)23945, (int)23944);
			return 0;
		}
		var_460_bool = var_6_int == (int)23945;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_273(var_7_bool, "Threat");
			@@@var_0_object:SetMessage((int)522763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522764, (int)-1, (int)23947);
			@@@var_0_object:AddReply((int)522765, (int)-1, (int)23948);
			return 0;
		}
		var_3_string = true;
		var_469_bool = 0;
		func_1767(var_469_bool);
		if(var_469_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x128";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_1270(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_1550(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_1253;
		var_0_object = false;
	}
Label_1253:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_1270(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1550(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_1214:
	Hold();
	goto Label_1214;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_1272(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1761(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1759(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1763(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1765(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1742(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_1550(Obj());
	var_81_object = var_80_object;
	func_1359(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_325_bool = var_17_bool == 0; //@nz
	if(var_325_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_1341();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1272(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1556(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_1767(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_1335;
		LookAsyncCamera("head");
	}
Label_1335:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_1670(var_226_bool)
{
	var_228_int = 0; var_229_string = "";
	func_1566(var_228_int, "oob12AglajaSobor3");
	var_231_bool = var_228_int == (int)0;
	if(var_231_bool != 0) {
		var_226_bool = 1;
		return 0;
	}
	var_226_bool = 0;
	return 0;
}


func_1543()
{
	var_9_bool = 0;
	func_1767(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1417(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_1420:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_1420;
		}
	}
	var_107_bool = var_98_int == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 10;
	}
	var_100_int = 0;
	var_109_bool = var_98_int > (int)1;
	if(var_109_bool != 0) {
		irand(var_100_int, var_98_int);
	}
	var_111_int = var_100_int + (int)1;
	var_112_int = var_97_string + var_111_int;
	@@var_91_object:GetProperty(var_112_int, var_101_string);
	var_113_bool = 0; var_114_string = "";
	var_101_string = var_114_string;
	func_1528(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_1550(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_273(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_1767(var_191_bool);
	var_192_bool = var_191_bool == 0; //@nz
	if(var_192_bool != 0) {
		return 0;
	}
	var_193_bool = var_190_string == var_2_object;
	if(var_193_bool != 0) {
		return 0;
	}
	var_194_string = ""; var_195_bool = 0;
	var_190_string = var_194_string;
	var_197_bool = var_190_string == "";
	if(var_197_bool != 0) {
		var_195_bool = 0;
	} else {
		var_195_bool = 1;
	}
	func_1513(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	return 0;
	
}


func_1682(var_251_bool)
{
	var_253_int = 0; var_254_string = "";
	func_1566(var_253_int, "oob12AglajaSobor4");
	var_256_bool = var_253_int == (int)0;
	if(var_256_bool != 0) {
		var_251_bool = 1;
		return 0;
	}
	var_251_bool = 0;
	return 0;
}


func_1556(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_1566(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_1694(var_260_bool)
{
	var_262_int = 0; var_263_string = "";
	func_1566(var_262_int, "oob12AglajaSobor5");
	var_265_bool = var_262_int == (int)0;
	if(var_265_bool != 0) {
		var_260_bool = 1;
		return 0;
	}
	var_260_bool = 0;
	return 0;
}


func_1571(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1706(var_272_bool)
{
	var_274_int = 0; var_275_string = "";
	func_1566(var_274_int, "oob12AglajaSobor6");
	var_277_bool = var_274_int == (int)0;
	if(var_277_bool != 0) {
		var_272_bool = 1;
		return 0;
	}
	var_272_bool = 0;
	return 0;
}


func_1580()
{
	SetVariable("oob12AglajaSobor1", (int)1);
	return 0;
}


func_1454(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1571(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_1463:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_1463;
		}
	}
	var_147_bool = var_129_int == 0; //@nz
	if(var_147_bool != 0) {
		var_121_bool = 0;
		return 10;
	}
	var_131_int = 0;
	var_149_bool = var_129_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_131_int, var_129_int);
	}
	var_151_int = var_131_int + (int)1;
	var_152_int = var_128_string + var_151_int;
	@@var_122_object:GetProperty(var_152_int, var_132_string);
	var_153_bool = 0; var_154_string = "";
	var_132_string = var_154_string;
	func_1528(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1586()
{
	SetVariable("oob12AglajaSobor2", (int)1);
	return 0;
}


func_1718(var_284_bool)
{
	var_286_int = 0; var_287_string = "";
	func_1566(var_286_int, "oob12AglajaSobor7");
	var_289_bool = var_286_int == (int)0;
	if(var_289_bool != 0) {
		var_284_bool = 1;
		return 0;
	}
	var_284_bool = 0;
	return 0;
}


func_1592()
{
	SetVariable("oob12AglajaSobor3", (int)1);
	return 0;
}


func_1341()
{
	var_327_bool = 0; var_328_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_330_bool = 0;
	func_1767(var_330_bool);
	if(var_330_bool != 0) {
	} else {
		HasAnimationTrack(var_328_bool, "head");
		var_332_bool = var_328_bool;
		if(var_332_bool == 0) goto Label_1358;
		UnlookAsync("head");
	}
Label_1358:
	return 2;
	
}


func_1598()
{
	SetVariable("oob12AglajaSobor4", (int)1);
	return 0;
}


func_1730(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_1566(var_183_int, "game_final");
	var_188_bool = var_183_int != (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_1604()
{
	SetVariable("oob12AglajaSobor5", (int)1);
	return 0;
}


func_1610()
{
	SetVariable("oob12AglajaSobor6", (int)1);
	return 0;
}


func_1742(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x6dd";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1359(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_1417(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_1454(var_121_bool, var_122_object);
			var_156_bool = var_121_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		irand(var_87_int, (int)2);
		var_158_int = var_87_int;
		if(var_158_int != 0) {
			var_161_int = var_86_int + (int)1;
			var_163_int = var_161_int % (int)3;
			SetVariable("voice_common", var_163_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_166_bool = 0; var_167_object = Obj();
		var_80_object = var_167_object;
		func_1454(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_1417(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1415;
	
Label_1415:
	var_79_bool = 1;
	return 4;
	
}


func_1616()
{
	SetVariable("oob12AglajaSobor7", (int)1);
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_1730(var_182_object);
		var_189_bool = var_181_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_string = "";
			func_273(var_175_object, "Confusion");
			@@@var_0_object:SetMessage((int)522168);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_1646(var_209_object);
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)522169, (int)23901, (int)23336);
			}
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_1658(var_218_object);
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)522721, (int)23904, (int)23902);
			}
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_1670(var_227_object);
			if(var_226_bool != 0) {
				@@@var_0_object:AddReply((int)522722, (int)23905, (int)23903);
			}
			var_235_bool = 0;
			var_235_bool = 0;
			var_236_bool = 0;
			var_236_bool = 0;
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_1622(var_238_object);
			var_243_bool = var_237_bool == 0; //@nz
			if(var_243_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_1634(var_245_object);
				var_250_bool = var_244_bool == 0; //@nz
				if(var_250_bool != 0) {
					var_236_bool = 1;
				}
			}
			if(var_236_bool != 0) {
				var_251_bool = 0; var_252_object = Obj();
				var_252_object = var_1_object;
				func_1682(var_252_object);
				if(var_251_bool != 0) {
					var_235_bool = 1;
				}
			}
			if(var_235_bool != 0) {
				@@@var_0_object:AddReply((int)522728, (int)23910, (int)23909);
			}
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_object;
			func_1694(var_261_object);
			if(var_260_bool != 0) {
				@@@var_0_object:AddReply((int)522735, (int)23921, (int)23916);
			}
			var_269_bool = 0;
			var_269_bool = 0;
			var_270_bool = 0; var_271_object = Obj();
			var_271_object = var_1_object;
			func_1622(var_271_object);
			if(var_270_bool != 0) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_1706(var_273_object);
				if(var_272_bool != 0) {
					var_269_bool = 1;
				}
			}
			if(var_269_bool != 0) {
				@@@var_0_object:AddReply((int)522774, (int)23968, (int)23957);
			}
			var_281_bool = 0;
			var_281_bool = 0;
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_object;
			func_1634(var_283_object);
			if(var_282_bool != 0) {
				var_284_bool = 0; var_285_object = Obj();
				var_285_object = var_1_object;
				func_1718(var_285_object);
				if(var_284_bool != 0) {
					var_281_bool = 1;
				}
			}
			if(var_281_bool != 0) {
				@@@var_0_object:AddReply((int)522784, (int)23978, (int)23967);
			}
			@@@var_0_object:AddReply((int)522727, (int)-1, (int)23908);
		} else {
				var_314_string = "";
				func_273(var_175_object, "Neutral");
				@@@var_0_object:SetMessage((int)523161);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523162, (int)-1, (int)24364);
				@@@var_0_object:AddReply((int)523168, (int)-1, (int)24370);
				@@@var_0_object:AddReply((int)523169, (int)-1, (int)24371);
				goto Label_243;
		}
	}
Label_243:
	var_296_bool = 0;
	func_1767(var_296_bool);
	if(var_296_bool != 0) {

	Label_247:
		lshWaitForAnimEnd();
		var_297_string = var_3_string;
		if(var_297_string != 0) {
		} else {
			var_298_string = "";
			var_298_string = var_2_object;
			func_1497(var_298_string);
			goto Label_247;
	}
		PlayAnimation("all", "idle");

	Label_262:
		WaitForAnimEnd();
		var_311_string = var_3_string;
		if(var_311_string != 0) {
			goto Label_272;
		}
		PlayAnimation("all", "idle");
		goto Label_262;

	}
	goto Label_272;
	
Label_272:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1622(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_1566(var_239_int, "b12q01ChildsAreVisited");
	var_242_bool = var_239_int != (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_1497(var_298_string)
{
	var_299_bool = 0; var_300_float = 0; var_301_float = 0; var_302_bool = 0; var_303_float = 0; var_304_float = 0;
	lshHasAnimation(var_302_bool, var_298_string);
	var_305_bool = var_302_bool;
	if(var_305_bool != 0) {
		lshGetAnimTimes(var_298_string, var_303_float, var_304_float);
		lshPlayAnimation(var_303_float, var_304_float, (bool)0);
	} else {
		var_308_int = "Can't find lsh animation : " + var_298_string;
		Trace(var_308_int);
	}
	return 6;
	
}


func_1759(var_67_int)
{
	var_67_int = 515527;
	return 0;
}


func_1761(var_66_int)
{
	var_66_int = 513334;
	return 0;
}


func_1634(var_244_bool)
{
	var_246_int = 0; var_247_string = "";
	func_1566(var_246_int, "b12q01TheaterIsVisited");
	var_249_bool = var_246_int != (int)0;
	if(var_249_bool != 0) {
		var_244_bool = 1;
		return 0;
	}
	var_244_bool = 0;
	return 0;
}


func_1763(var_68_string)
{
	var_68_string = "ui/NPC_Aglaja.png";
	return 0;
}


func_1765(var_69_string)
{
	var_69_string = "ui/NPC_Aglaja_b.png";
	return 0;
}


func_1767(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_1513(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0;
	lshHasAnimation(var_201_bool, var_194_string);
	var_204_bool = var_201_bool;
	if(var_204_bool != 0) {
		lshGetAnimTimes(var_194_string, var_202_float, var_203_float);
		lshPlayAnimation(var_202_float, var_203_float, var_195_bool);
	} else {
		var_206_int = "Can't find lsh animation : " + var_194_string;
		Trace(var_206_int);
	}
	return 6;
	
}


func_1646(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_1566(var_210_int, "oob12AglajaSobor1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_1270(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_1528(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1767(var_117_bool);
	if(var_117_bool != 0) {
		lshHasSpeech(var_116_bool, var_114_string);
		var_118_bool = var_116_bool;
		if(var_118_bool != 0) {
			lshPlaySpeech(var_114_string);
			var_113_bool = 1;
			return 2;
		}
	}
	var_113_bool = 0;
	return 2;
}


func_1658(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_1566(var_219_int, "oob12AglajaSobor2");
	var_222_bool = var_219_int == (int)0;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


