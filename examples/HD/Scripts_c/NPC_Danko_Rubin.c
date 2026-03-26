// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,GetSceneByName/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Warning|W:Rage|W:Confusion|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|A:RemoveItemByType|W:ui/NPC_Rubin.png|W:ui/NPC_Rubin_b.png|W:playsound|W:giveitem|W:d3q01_blood|W:d10q02|W:d10q02RubinGotoMaria|W:pt_map_maria|A:AddMark|W:bluevaccine is given|W:blue_vaccine|W:ood4Rubin1|W:ood4Rubin2|W:lens is given|W:lens|W:ood6Rubin1|W:d3q01|W:d3q01RubinGotoAlexandr|W:pt_map_alexandr|W:ood3Rubin1|W:ood3Rubin2|W:ood3Rubin3|W:ood3Rubin4|A:ShowMap|W:pt_map_bigvlad|W:quest_d3_01|W:completed|W:d3RubinToldWhereIsSimon|W:ood5Rubin1|W:d5q01|W:d5q01RubinGotoBigVlad|W:d5q01RubinGotoBigVladSelf|W:pt_map_rubin|W:ood5Rubin2|W:d5q01AlexandrGotoKaterina|A:FindMark|A:Remove|W:d5q01BigVladGotoAlexandr|W:d5q01BurahMeeting|W:d7q04NudeGotoAndrei|W:d5q01GrifWantsMoney|W:d5q01GrifWillHelp|W:d5q01BigVladGotoLara|W:d5q01PatrolGotoGrif|W:d5q01_heart|W:quest_d5_01|W:d6RubinGoesToGeorg|W:warehouse_rubin|W:norubin|W:whitevaccine is given|W:white_vaccine|W:d3RubinVisit|W:d5RubinVisit|W:ood5Rubin3|W:microscope_d3q01_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1173
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x14a vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7a7 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc0a vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd7b vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xebd vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x104b vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1149 vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0x11bc vars=int
// @EVENT_6: op=0x11e2 vars=
// @EVENT_5: op=0x11f1 vars=
// @EVENT_45: op=0x11fe vars=bool
// @EVENT_0: op=0x120a vars=object
// @PE: 0x51,0x134,0x14a,0x6e2,0x791,0x7a7,0xba6,0xbf4,0xc0a,0xd03,0xd65,0xd7b,0xe63,0xea7,0xebd,0xff6,0x1035,0x104b,0x10f9,0x1133,0x1149,0x1173,0x11bc,0x11e2,0x11fe,0x1428,0x1450,0x1456,0x1474,0x147f,0x1485,0x148b,0x1496,0x149c,0x14bc,0x14c2,0x14c8,0x14ce,0x14d4,0x14e4,0x14f4,0x14fe,0x1504,0x152d,0x159a,0x15a5,0x15b5,0x15bb,0x15c1,0x15c7,0x15d3,0x15df,0x15eb,0x15f7,0x1603,0x160f,0x161b,0x1627,0x1633,0x163f,0x164b,0x1656,0x1662,0x166e,0x167a,0x1685,0x1691,0x169d,0x16a9,0x1792

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_5026();
		var_41_bool = var_37_cvector == (int)9647;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5308();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_5282();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_5332(var_98_object);
		}
		var_124_bool = var_37_cvector == (int)9649;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_5308();
		}
		var_128_bool = var_37_cvector == (int)9639;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_5308();
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_5282();
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_5332(var_134_object);
		}
		var_136_bool = var_37_cvector == (int)9594;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_5308();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_5282();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_5332(var_142_object);
		}
		var_144_bool = var_37_cvector == (int)9963;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_5364();
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_5206(var_162_object);
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_5276();
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_5259(var_184_object);
		}
		var_208_bool = var_37_cvector == (int)12332;
		if(var_208_bool != 0) {
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_5282();
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_5332(var_212_object);
		}
		var_214_bool = var_37_cvector == (int)9684;
		if(var_214_bool != 0) {
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_5314();
		}
		var_220_bool = var_37_cvector == (int)9627;
		if(var_220_bool != 0) {
			var_221_object = Obj(); var_222_object = Obj();
			var_221_object = var_1_object;
			var_222_object = var_0_object;
			func_5374();
		}
		var_226_bool = var_37_cvector == (int)9672;
		if(var_226_bool != 0) {
			var_227_object = Obj(); var_228_object = Obj();
			var_227_object = var_1_object;
			var_228_object = var_0_object;
			func_5320();
		}
		var_232_bool = var_37_cvector == (int)9678;
		if(var_232_bool != 0) {
			var_233_object = Obj(); var_234_object = Obj();
			var_233_object = var_1_object;
			var_234_object = var_0_object;
			func_5320();
		}
		var_236_bool = var_37_cvector == (int)9679;
		if(var_236_bool != 0) {
			var_237_object = Obj(); var_238_object = Obj();
			var_237_object = var_1_object;
			var_238_object = var_0_object;
			func_5320();
		}
		var_240_bool = var_37_cvector == (int)9667;
		if(var_240_bool != 0) {
			var_241_object = Obj(); var_242_object = Obj();
			var_241_object = var_1_object;
			var_242_object = var_0_object;
			func_5320();
		}
		var_244_bool = var_37_cvector == (int)9644;
		if(var_244_bool != 0) {
			var_245_object = Obj(); var_246_object = Obj();
			var_245_object = var_1_object;
			var_246_object = var_0_object;
			func_5326();
		}
		var_250_bool = var_37_cvector == (int)9641;
		if(var_250_bool != 0) {
			var_251_object = Obj(); var_252_object = Obj();
			var_251_object = var_1_object;
			var_252_object = var_0_object;
			func_5326();
		}
		var_254_bool = var_36_bool == (int)9574;
		if(var_254_bool != 0) {
			var_255_bool = 0;
			var_255_bool = 0;
			var_256_bool = 0; var_257_object = Obj();
			var_257_object = var_1_object;
			func_5635(var_257_object);
			if(var_256_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_5647(var_265_object);
				if(var_264_bool != 0) {
					var_255_bool = 1;
				}
			}
			if(var_255_bool != 0) {
				var_270_object = Obj(); var_271_object = Obj();
				var_270_object = var_1_object;
				var_271_object = var_0_object;
				func_5557();
				var_274_string = "";
				func_308(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)508737);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)508777, (int)9633, (int)9624);
				@@@var_0_object:AddReply((int)508781, (int)9629, (int)9628);
				return 0;
			}
			var_298_bool = 0;
			var_298_bool = 0;
			var_299_bool = 0;
			var_299_bool = 0;
			var_300_bool = 0; var_301_object = Obj();
			var_301_object = var_1_object;
			func_5707(var_300_bool, var_301_object);
			if(var_300_bool != 0) {
				var_309_bool = 0; var_310_object = Obj();
				var_310_object = var_1_object;
				func_5695(var_310_object);
				var_315_bool = var_309_bool == 0; //@nz
				if(var_315_bool != 0) {
					var_299_bool = 1;
				}
			}
			if(var_299_bool != 0) {
				var_316_bool = 0; var_317_object = Obj();
				var_317_object = var_1_object;
				func_5587(var_317_object);
				var_322_bool = var_316_bool == 0; //@nz
				if(var_322_bool != 0) {
					var_298_bool = 1;
				}
			}
			if(var_298_bool != 0) {
				var_323_string = "";
				func_308(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)536148);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)536149, (int)37916, (int)37914);
				@@@var_0_object:AddReply((int)536150, (int)37916, (int)37915);
				return 0;
			}
			var_331_bool = 0;
			var_331_bool = 0;
			var_332_bool = 0; var_333_object = Obj();
			var_333_object = var_1_object;
			func_5707(var_332_bool, var_333_object);
			if(var_332_bool != 0) {
				var_334_bool = 0; var_335_object = Obj();
				var_335_object = var_1_object;
				func_5695(var_335_object);
				var_336_bool = var_334_bool == 0; //@nz
				if(var_336_bool != 0) {
					var_331_bool = 1;
				}
			}
			if(var_331_bool != 0) {
				var_337_string = "";
				func_308(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)509078);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)509079, (int)9958, (int)9957);
				return 0;
			}
			var_342_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508778);
			@@@var_0_object:ClearReplies();
			var_344_bool = 0; var_345_object = Obj();
			var_345_object = var_1_object;
			func_5635(var_345_object);
			if(var_344_bool != 0) {
				@@@var_0_object:AddReply((int)511141, (int)12331, (int)12330);
			}
			var_349_bool = 0; var_350_object = Obj();
			var_350_object = var_1_object;
			func_5659(var_350_object);
			if(var_349_bool != 0) {
				@@@var_0_object:AddReply((int)508779, (int)9681, (int)9626);
			}
			var_358_bool = 0; var_359_object = Obj();
			var_359_object = var_1_object;
			func_5671(var_359_object);
			if(var_358_bool != 0) {
				@@@var_0_object:AddReply((int)508780, (int)9669, (int)9627);
			}
			var_367_bool = 0;
			var_367_bool = 0;
			var_368_bool = 0;
			var_368_bool = 0;
			var_369_bool = 0; var_370_object = Obj();
			var_370_object = var_1_object;
			func_5683(var_370_object);
			if(var_369_bool != 0) {
				var_375_bool = 0; var_376_object = Obj();
				var_376_object = var_1_object;
				func_5635(var_376_object);
				var_377_bool = var_375_bool == 0; //@nz
				if(var_377_bool != 0) {
					var_368_bool = 1;
				}
			}
			if(var_368_bool != 0) {
				var_378_bool = 0; var_379_object = Obj();
				var_379_object = var_1_object;
				func_5695(var_379_object);
				var_380_bool = var_378_bool == 0; //@nz
				if(var_380_bool != 0) {
					var_367_bool = 1;
				}
			}
			if(var_367_bool != 0) {
				@@@var_0_object:AddReply((int)508802, (int)9651, (int)9650);
			}
			@@@var_0_object:AddReply((int)511140, (int)-1, (int)12329);
			return 0;
		}
		var_388_bool = var_36_bool == (int)9651;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508804, (int)9640, (int)9652);
			return 0;
		}
		var_395_bool = var_36_bool == (int)9640;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_308(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)508793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508795, (int)9643, (int)9642);
			@@@var_0_object:AddReply((int)508794, (int)-1, (int)9641);
			return 0;
		}
		var_405_bool = var_36_bool == (int)9643;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_308(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)508796);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508797, (int)-1, (int)9644);
			return 0;
		}
		var_412_bool = var_36_bool == (int)9669;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508818);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508819, (int)9666, (int)9670);
			var_418_bool = 0; var_419_object = Obj();
			var_419_object = var_1_object;
			func_5695(var_419_object);
			if(var_418_bool != 0) {
				@@@var_0_object:AddReply((int)536147, (int)9616, (int)37912);
			}
			return 0;
		}
		var_424_bool = var_36_bool == (int)9616;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508770, (int)9621, (int)9617);
			@@@var_0_object:AddReply((int)508771, (int)9619, (int)9618);
			return 0;
		}
		var_434_bool = var_36_bool == (int)9619;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508772);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508773, (int)9621, (int)9620);
			@@@var_0_object:AddReply((int)508814, (int)-1, (int)9663);
			return 0;
		}
		var_444_bool = var_36_bool == (int)9621;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508774);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508775, (int)9623, (int)9622);
			@@@var_0_object:AddReply((int)510448, (int)9623, (int)11518);
			return 0;
		}
		var_454_bool = var_36_bool == (int)9623;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508776);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508739, (int)9577, (int)9576);
			@@@var_0_object:AddReply((int)508764, (int)9577, (int)9608);
			@@@var_0_object:AddReply((int)508765, (int)9611, (int)9610);
			return 0;
		}
		var_467_bool = var_36_bool == (int)9611;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508766);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508767, (int)9587, (int)9612);
			@@@var_0_object:AddReply((int)508768, (int)9587, (int)9614);
			return 0;
		}
		var_477_bool = var_36_bool == (int)9577;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508740);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508746, (int)9587, (int)9586);
			return 0;
		}
		var_484_bool = var_36_bool == (int)9587;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508747);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508748, (int)9589, (int)9588);
			@@@var_0_object:AddReply((int)508762, (int)-1, (int)9604);
			@@@var_0_object:AddReply((int)508763, (int)9589, (int)9606);
			return 0;
		}
		var_497_bool = var_36_bool == (int)9589;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508761, (int)-1, (int)9603);
			@@@var_0_object:AddReply((int)536153, (int)-1, (int)37918);
			return 0;
		}
		var_507_bool = var_36_bool == (int)9666;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508817, (int)9671, (int)9668);
			@@@var_0_object:AddReply((int)508816, (int)-1, (int)9667);
			return 0;
		}
		var_517_bool = var_36_bool == (int)9671;
		if(var_517_bool != 0) {
			var_518_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508821, (int)-1, (int)9672);
			@@@var_0_object:AddReply((int)508822, (int)9674, (int)9673);
			return 0;
		}
		var_527_bool = var_36_bool == (int)9674;
		if(var_527_bool != 0) {
			var_528_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508824, (int)9677, (int)9675);
			return 0;
		}
		var_534_bool = var_36_bool == (int)9677;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508826);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508827, (int)-1, (int)9678);
			@@@var_0_object:AddReply((int)508828, (int)-1, (int)9679);
			return 0;
		}
		var_544_bool = var_36_bool == (int)9681;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_308(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)508829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508830, (int)9683, (int)9682);
			return 0;
		}
		var_551_bool = var_36_bool == (int)9683;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508832, (int)-1, (int)9684);
			return 0;
		}
		var_558_bool = var_36_bool == (int)12331;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511142);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511143, (int)-1, (int)12332);
			return 0;
		}
		var_565_bool = var_36_bool == (int)9958;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_308(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)509080);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509081, (int)11530, (int)9959);
			@@@var_0_object:AddReply((int)536146, (int)10799, (int)37906);
			return 0;
		}
		var_575_bool = var_36_bool == (int)10799;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_308(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)509805);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509806, (int)10801, (int)10800);
			return 0;
		}
		var_582_bool = var_36_bool == (int)10801;
		if(var_582_bool != 0) {
			var_583_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509807);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509808, (int)10803, (int)10802);
			@@@var_0_object:AddReply((int)509821, (int)10803, (int)10816);
			return 0;
		}
		var_592_bool = var_36_bool == (int)10803;
		if(var_592_bool != 0) {
			var_593_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509810, (int)10805, (int)10804);
			@@@var_0_object:AddReply((int)509814, (int)10809, (int)10808);
			@@@var_0_object:AddReply((int)509820, (int)10809, (int)10814);
			return 0;
		}
		var_605_bool = var_36_bool == (int)10809;
		if(var_605_bool != 0) {
			var_606_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509816, (int)10811, (int)10810);
			return 0;
		}
		var_612_bool = var_36_bool == (int)10811;
		if(var_612_bool != 0) {
			var_613_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509818, (int)11530, (int)10812);
			@@@var_0_object:AddReply((int)509819, (int)11530, (int)10813);
			return 0;
		}
		var_622_bool = var_36_bool == (int)10805;
		if(var_622_bool != 0) {
			var_623_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509812, (int)11530, (int)10806);
			@@@var_0_object:AddReply((int)509813, (int)11530, (int)10807);
			return 0;
		}
		var_632_bool = var_36_bool == (int)11530;
		if(var_632_bool != 0) {
			var_633_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510458, (int)11532, (int)11531);
			return 0;
		}
		var_639_bool = var_36_bool == (int)11532;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510460, (int)11534, (int)11533);
			return 0;
		}
		var_646_bool = var_36_bool == (int)11534;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510461);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510462, (int)9960, (int)11535);
			return 0;
		}
		var_653_bool = var_36_bool == (int)9960;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509082);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509083, (int)9962, (int)9961);
			return 0;
		}
		var_660_bool = var_36_bool == (int)9962;
		if(var_660_bool != 0) {
			var_661_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509085, (int)-1, (int)9963);
			return 0;
		}
		var_667_bool = var_36_bool == (int)37916;
		if(var_667_bool != 0) {
			var_668_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536151);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536152, (int)-1, (int)37917);
			return 0;
		}
		var_674_bool = var_36_bool == (int)9629;
		if(var_674_bool != 0) {
			var_675_object = Obj(); var_676_object = Obj();
			var_675_object = var_1_object;
			var_676_object = var_0_object;
			func_5374();
			var_677_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508782);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508783, (int)9631, (int)9630);
			@@@var_0_object:AddReply((int)510447, (int)9631, (int)11516);
			return 0;
		}
		var_686_bool = var_36_bool == (int)9631;
		if(var_686_bool != 0) {
			var_687_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508785, (int)9591, (int)9632);
			return 0;
		}
		var_693_bool = var_36_bool == (int)9633;
		if(var_693_bool != 0) {
			var_694_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508786);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508787, (int)9591, (int)9634);
			return 0;
		}
		var_700_bool = var_36_bool == (int)9591;
		if(var_700_bool != 0) {
			var_701_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508752, (int)9657, (int)9592);
			@@@var_0_object:AddReply((int)508757, (int)9598, (int)9597);
			return 0;
		}
		var_710_bool = var_36_bool == (int)9598;
		if(var_710_bool != 0) {
			var_711_string = "";
			func_308(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)508758);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508759, (int)9593, (int)9599);
			@@@var_0_object:AddReply((int)508760, (int)9593, (int)9601);
			return 0;
		}
		var_720_bool = var_36_bool == (int)9657;
		if(var_720_bool != 0) {
			var_721_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508809, (int)9659, (int)9658);
			@@@var_0_object:AddReply((int)510449, (int)11521, (int)11520);
			return 0;
		}
		var_730_bool = var_36_bool == (int)11521;
		if(var_730_bool != 0) {
			var_731_string = "";
			func_308(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)510450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510451, (int)11523, (int)11522);
			return 0;
		}
		var_737_bool = var_36_bool == (int)11523;
		if(var_737_bool != 0) {
			var_738_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)510452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510453, (int)9659, (int)11524);
			return 0;
		}
		var_744_bool = var_36_bool == (int)9659;
		if(var_744_bool != 0) {
			var_745_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)508810);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508811, (int)9661, (int)9660);
			@@@var_0_object:AddReply((int)510454, (int)11527, (int)11526);
			return 0;
		}
		var_754_bool = var_36_bool == (int)11527;
		if(var_754_bool != 0) {
			var_755_string = "";
			func_308(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)510455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510456, (int)9593, (int)11528);
			return 0;
		}
		var_761_bool = var_36_bool == (int)9661;
		if(var_761_bool != 0) {
			var_762_string = "";
			func_308(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)508812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508813, (int)9593, (int)9662);
			return 0;
		}
		var_768_bool = var_36_bool == (int)9593;
		if(var_768_bool != 0) {
			var_769_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508790, (int)9638, (int)9637);
			@@@var_0_object:AddReply((int)508754, (int)-1, (int)9594);
			return 0;
		}
		var_778_bool = var_36_bool == (int)9638;
		if(var_778_bool != 0) {
			var_779_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508798, (int)9646, (int)9645);
			@@@var_0_object:AddReply((int)508792, (int)-1, (int)9639);
			return 0;
		}
		var_788_bool = var_36_bool == (int)9646;
		if(var_788_bool != 0) {
			var_789_string = "";
			func_308(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508800, (int)-1, (int)9647);
			@@@var_0_object:AddReply((int)508801, (int)-1, (int)9649);
			return 0;
		}
		var_3_string = true;
		var_797_bool = 0;
		func_5198(var_797_bool);
		if(var_797_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x14b";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_5026();
		var_41_bool = var_37_cvector == (int)11563;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5386();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_5348(var_99_object);
		}
		var_125_bool = var_37_cvector == (int)11566;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5386();
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_5348(var_129_object);
		}
		var_131_bool = var_37_cvector == (int)11569;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_5380();
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_5386();
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_5348(var_139_object);
		}
		var_141_bool = var_37_cvector == (int)11599;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_5427(var_143_object);
		}
		var_188_bool = var_37_cvector == (int)11600;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_5427(var_190_object);
		}
		var_192_bool = var_37_cvector == (int)11601;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_5427(var_194_object);
		}
		var_196_bool = var_37_cvector == (int)11583;
		if(var_196_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_5569();
		}
		var_202_bool = var_37_cvector == (int)11570;
		if(var_202_bool != 0) {
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_5386();
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_5348(var_206_object);
		}
		var_208_bool = var_36_bool == (int)12720;
		if(var_208_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_210_object = var_1_object;
			func_5718(var_210_object);
			if(var_209_bool != 0) {
				var_217_object = Obj(); var_218_object = Obj();
				var_217_object = var_1_object;
				var_218_object = var_0_object;
				func_5563();
				var_221_object = Obj(); var_222_object = Obj();
				var_221_object = var_1_object;
				var_222_object = var_0_object;
				func_5380();
				var_223_string = "";
				func_1937(var_37_cvector, "Rage");
				@@@var_0_object:SetMessage((int)511527);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511528, (int)12722, (int)12721);
				@@@var_0_object:AddReply((int)515598, (int)16625, (int)16624);
				return 0;
			}
			var_247_bool = 0;
			var_247_bool = 0;
			var_248_bool = 0;
			var_248_bool = 0;
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_object;
			func_5742(var_250_object);
			if(var_249_bool != 0) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_5730(var_256_object);
				if(var_255_bool != 0) {
					var_248_bool = 1;
				}
			}
			if(var_248_bool != 0) {
				var_261_bool = 0; var_262_object = Obj();
				var_262_object = var_1_object;
				func_5754(var_261_bool, var_262_object);
				if(var_261_bool != 0) {
					var_247_bool = 1;
				}
			}
			if(var_247_bool != 0) {
				var_270_object = Obj(); var_271_object = Obj();
				var_270_object = var_1_object;
				var_271_object = var_0_object;
				func_5421();
				var_274_string = "";
				func_1937(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)510510);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)510511, (int)11594, (int)11593);
				@@@var_0_object:AddReply((int)510521, (int)11594, (int)11604);
				return 0;
			}
			var_282_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510500);
			@@@var_0_object:ClearReplies();
			var_284_bool = 0; var_285_object = Obj();
			var_285_object = var_1_object;
			func_5801(var_285_object);
			if(var_284_bool != 0) {
				@@@var_0_object:AddReply((int)510509, (int)16679, (int)11591);
			}
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_5789(var_305_object);
			if(var_304_bool != 0) {
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_object;
				func_5801(var_311_object);
				if(var_310_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)510501, (int)11584, (int)11583);
			}
			var_315_bool = 0; var_316_object = Obj();
			var_316_object = var_1_object;
			func_5777(var_316_object);
			if(var_315_bool != 0) {
				@@@var_0_object:AddReply((int)515653, (int)16690, (int)16689);
			}
			@@@var_0_object:AddReply((int)515647, (int)-1, (int)16682);
			return 0;
		}
		var_328_bool = var_36_bool == (int)16690;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510492, (int)-1, (int)11570);
			return 0;
		}
		var_335_bool = var_36_bool == (int)11584;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510504, (int)-1, (int)11586);
			@@@var_0_object:AddReply((int)510505, (int)11588, (int)11587);
			return 0;
		}
		var_345_bool = var_36_bool == (int)11588;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510508, (int)-1, (int)11590);
			@@@var_0_object:AddReply((int)510507, (int)-1, (int)11589);
			return 0;
		}
		var_355_bool = var_36_bool == (int)16679;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_1937(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)515644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515645, (int)-1, (int)16680);
			return 0;
		}
		var_362_bool = var_36_bool == (int)11594;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510513, (int)11596, (int)11595);
			@@@var_0_object:AddReply((int)510520, (int)11598, (int)11602);
			return 0;
		}
		var_372_bool = var_36_bool == (int)11596;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510515, (int)11598, (int)11597);
			@@@var_0_object:AddReply((int)515650, (int)11598, (int)16685);
			return 0;
		}
		var_382_bool = var_36_bool == (int)11598;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511550, (int)12745, (int)12744);
			@@@var_0_object:AddReply((int)510519, (int)-1, (int)11601);
			return 0;
		}
		var_392_bool = var_36_bool == (int)12745;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511552, (int)12747, (int)12746);
			return 0;
		}
		var_399_bool = var_36_bool == (int)12747;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511554, (int)12749, (int)12748);
			@@@var_0_object:AddReply((int)510518, (int)-1, (int)11600);
			return 0;
		}
		var_409_bool = var_36_bool == (int)12749;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510517, (int)-1, (int)11599);
			return 0;
		}
		var_416_bool = var_36_bool == (int)16625;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_1937(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)515599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515600, (int)16627, (int)16626);
			return 0;
		}
		var_423_bool = var_36_bool == (int)16627;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_1937(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)515601);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515602, (int)12722, (int)16628);
			return 0;
		}
		var_430_bool = var_36_bool == (int)12722;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_1937(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511529);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511530, (int)11554, (int)12723);
			@@@var_0_object:AddReply((int)515603, (int)16631, (int)16630);
			return 0;
		}
		var_440_bool = var_36_bool == (int)16631;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_1937(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)515604);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515605, (int)16633, (int)16632);
			return 0;
		}
		var_447_bool = var_36_bool == (int)16633;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_1937(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)515606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515607, (int)11554, (int)16634);
			@@@var_0_object:AddReply((int)515608, (int)11554, (int)16636);
			return 0;
		}
		var_457_bool = var_36_bool == (int)11554;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_1937(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)510476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510477, (int)11556, (int)11555);
			return 0;
		}
		var_464_bool = var_36_bool == (int)11556;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_1937(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)510478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510479, (int)11558, (int)11557);
			@@@var_0_object:AddReply((int)515610, (int)16640, (int)16639);
			return 0;
		}
		var_474_bool = var_36_bool == (int)16640;
		if(var_474_bool != 0) {
			var_475_string = "";
			func_1937(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)515611);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515614, (int)16644, (int)16643);
			@@@var_0_object:AddReply((int)515612, (int)16642, (int)16641);
			return 0;
		}
		var_484_bool = var_36_bool == (int)16642;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515616, (int)16644, (int)16645);
			return 0;
		}
		var_491_bool = var_36_bool == (int)16644;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_1937(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)515615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515618, (int)11558, (int)16648);
			@@@var_0_object:AddReply((int)515617, (int)-1, (int)16647);
			return 0;
		}
		var_501_bool = var_36_bool == (int)11558;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_1937(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)510480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515623, (int)16655, (int)16654);
			@@@var_0_object:AddReply((int)515628, (int)16661, (int)16660);
			return 0;
		}
		var_511_bool = var_36_bool == (int)16661;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_1937(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)515629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515630, (int)16655, (int)16662);
			return 0;
		}
		var_518_bool = var_36_bool == (int)16655;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_1937(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)515624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510481, (int)11560, (int)11559);
			@@@var_0_object:AddReply((int)515626, (int)16665, (int)16657);
			return 0;
		}
		var_528_bool = var_36_bool == (int)16665;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_1937(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)515632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515633, (int)11560, (int)16666);
			return 0;
		}
		var_535_bool = var_36_bool == (int)11560;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_1937(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)510482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510483, (int)11562, (int)11561);
			@@@var_0_object:AddReply((int)510494, (int)16650, (int)11572);
			@@@var_0_object:AddReply((int)515627, (int)16650, (int)16658);
			return 0;
		}
		var_548_bool = var_36_bool == (int)16650;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_1937(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)515619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515620, (int)16652, (int)16651);
			return 0;
		}
		var_555_bool = var_36_bool == (int)16652;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_1937(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)515621);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510489, (int)11568, (int)11567);
			return 0;
		}
		var_562_bool = var_36_bool == (int)11568;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_1937(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)510490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510491, (int)-1, (int)11569);
			@@@var_0_object:AddReply((int)515655, (int)-1, (int)16691);
			return 0;
		}
		var_572_bool = var_36_bool == (int)11562;
		if(var_572_bool != 0) {
			var_573_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510484);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515635, (int)16670, (int)16669);
			@@@var_0_object:AddReply((int)515641, (int)16676, (int)16675);
			@@@var_0_object:AddReply((int)510486, (int)11565, (int)11564);
			return 0;
		}
		var_585_bool = var_36_bool == (int)11565;
		if(var_585_bool != 0) {
			var_586_string = "";
			func_1937(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)510487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510488, (int)-1, (int)11566);
			@@@var_0_object:AddReply((int)515643, (int)-1, (int)16678);
			return 0;
		}
		var_595_bool = var_36_bool == (int)16676;
		if(var_595_bool != 0) {
			var_596_string = "";
			func_1937(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)515642);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515637, (int)16672, (int)16671);
			return 0;
		}
		var_602_bool = var_36_bool == (int)16672;
		if(var_602_bool != 0) {
			var_603_string = "";
			func_1937(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)515638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515640, (int)16670, (int)16674);
			@@@var_0_object:AddReply((int)515639, (int)-1, (int)16673);
			return 0;
		}
		var_612_bool = var_36_bool == (int)16670;
		if(var_612_bool != 0) {
			var_613_string = "";
			func_1937(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510485, (int)-1, (int)11563);
			return 0;
		}
		var_3_string = true;
		var_618_bool = 0;
		func_5198(var_618_bool);
		if(var_618_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7a8";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_5026();
		var_41_bool = var_37_cvector == (int)12312;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5247();
		}
		var_47_bool = var_37_cvector == (int)12313;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_5253();
		}
		var_53_bool = var_37_cvector == (int)12315;
		if(var_53_bool != 0) {
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_5236(var_55_object);
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_5276();
		}
		var_83_bool = var_36_bool == (int)12311;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_3060(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511122);
			@@@var_0_object:ClearReplies();
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_5599(var_103_object);
			if(var_102_bool != 0) {
				@@@var_0_object:AddReply((int)511123, (int)12316, (int)12312);
			}
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_5611(var_114_object);
			if(var_113_bool != 0) {
				@@@var_0_object:AddReply((int)511124, (int)12314, (int)12313);
			}
			@@@var_0_object:AddReply((int)536267, (int)-1, (int)38051);
			@@@var_0_object:AddReply((int)536268, (int)-1, (int)38052);
			return 0;
		}
		var_129_bool = var_36_bool == (int)12314;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_3060(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)511125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511126, (int)-1, (int)12315);
			return 0;
		}
		var_136_bool = var_36_bool == (int)12316;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_3060(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511128, (int)12318, (int)12317);
			return 0;
		}
		var_143_bool = var_36_bool == (int)12318;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_3060(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511130, (int)12320, (int)12319);
			return 0;
		}
		var_150_bool = var_36_bool == (int)12320;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_3060(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)511131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511132, (int)-1, (int)12321);
			@@@var_0_object:AddReply((int)541854, (int)-1, (int)44078);
			return 0;
		}
		var_3_string = true;
		var_159_bool = 0;
		func_5198(var_159_bool);
		if(var_159_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0b";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_5026();
		var_41_bool = var_37_cvector == (int)13243;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5517();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_5530(var_51_object);
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_5200();
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_5259(var_79_object);
		}
		var_85_bool = var_36_bool == (int)13238;
		if(var_85_bool != 0) {
			var_86_bool = 0;
			var_86_bool = 0;
			var_87_bool = 0; var_88_object = Obj();
			var_88_object = var_1_object;
			func_5765(var_88_object);
			var_95_bool = var_87_bool == 0; //@nz
			if(var_95_bool != 0) {
				var_96_bool = 0; var_97_object = Obj();
				var_97_object = var_1_object;
				func_5623(var_97_object);
				if(var_96_bool != 0) {
					var_86_bool = 1;
				}
			}
			if(var_86_bool != 0) {
				var_102_object = Obj(); var_103_object = Obj();
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_5270();
				var_106_string = "";
				func_3429(var_37_cvector, "Warning");
				@@@var_0_object:SetMessage((int)512020);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512021, (int)13240, (int)13239);
				return 0;
			}
			var_127_string = "";
			func_3429(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513723);
			@@@var_0_object:ClearReplies();
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_5765(var_130_object);
			if(var_129_bool != 0) {
				@@@var_0_object:AddReply((int)541857, (int)-1, (int)44082);
			}
			@@@var_0_object:AddReply((int)513724, (int)-1, (int)14990);
			return 0;
		}
		var_138_bool = var_36_bool == (int)13240;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_3429(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)512022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512023, (int)13242, (int)13241);
			@@@var_0_object:AddReply((int)541856, (int)13242, (int)44080);
			return 0;
		}
		var_148_bool = var_36_bool == (int)13242;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_3429(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)512024);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512025, (int)-1, (int)13243);
			@@@var_0_object:AddReply((int)541855, (int)-1, (int)44079);
			return 0;
		}
		var_3_string = true;
		var_157_bool = 0;
		func_5198(var_157_bool);
		if(var_157_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd7c";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_5026();
		var_41_bool = var_37_cvector == (int)35688;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5213();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_5541(var_86_object);
		}
		var_112_bool = var_37_cvector == (int)38195;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_5213();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_5541(var_116_object);
		}
		var_118_bool = var_36_bool == (int)35685;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_3751(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)534092);
			@@@var_0_object:ClearReplies();
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_object;
			func_5575(var_138_object);
			if(var_137_bool != 0) {
				@@@var_0_object:AddReply((int)534093, (int)38177, (int)35686);
			}
			@@@var_0_object:AddReply((int)536401, (int)-1, (int)38180);
			@@@var_0_object:AddReply((int)536402, (int)-1, (int)38181);
			return 0;
		}
		var_155_bool = var_36_bool == (int)38177;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_3751(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)536398);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536399, (int)38179, (int)38178);
			@@@var_0_object:AddReply((int)536408, (int)38190, (int)38187);
			return 0;
		}
		var_165_bool = var_36_bool == (int)38190;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_3751(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536411);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536412, (int)38192, (int)38191);
			return 0;
		}
		var_172_bool = var_36_bool == (int)38192;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_3751(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536414, (int)38189, (int)38193);
			return 0;
		}
		var_179_bool = var_36_bool == (int)38179;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_3751(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)536400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536409, (int)38189, (int)38188);
			@@@var_0_object:AddReply((int)536415, (int)-1, (int)38195);
			return 0;
		}
		var_189_bool = var_36_bool == (int)38189;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_3751(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)536410);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536403, (int)38183, (int)38182);
			return 0;
		}
		var_196_bool = var_36_bool == (int)38183;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_3751(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536405, (int)38185, (int)38184);
			return 0;
		}
		var_203_bool = var_36_bool == (int)38185;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_3751(var_37_cvector, "Rage");
			@@@var_0_object:SetMessage((int)536406);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536407, (int)35687, (int)38186);
			return 0;
		}
		var_210_bool = var_36_bool == (int)35687;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_3751(var_37_cvector, "Warning");
			@@@var_0_object:SetMessage((int)534094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534095, (int)-1, (int)35688);
			return 0;
		}
		var_3_string = true;
		var_216_bool = 0;
		func_5198(var_216_bool);
		if(var_216_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xebe";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_5026();
		var_41_bool = var_36_bool == (int)36971;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_4149(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_70_bool = var_36_bool == (int)36973;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_4149(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_80_bool = var_36_bool == (int)36975;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_4149(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_89_bool = 0;
		func_5198(var_89_bool);
		if(var_89_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x104c";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_5026();
		var_41_bool = var_36_int == (int)42551;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_4403(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_5198(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x114a";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_4536();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_4750(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_4505(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_4485(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_5033(Obj());
				var_82_object = var_81_object;
				func_4900(var_80_bool, var_81_object);
			}
		} else {
			func_4500(var_36_int);
			func_4527();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_4718();
	func_4536();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_4536();
	var_37_string = "";
	func_4980("Neutral");
	func_4527();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_4527();
	} else {
		var_43_string = "";
		func_4980("Neutral");
	}
	return 0;
	
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0;
	IsOverrideActive(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		EventDisable(0);
		func_4718();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_4741(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_6034(var_54_object);
		var_882_string = "";
		func_4980("Neutral");
		func_4536();
		func_4527();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_4471(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_63_int, var_64_object)
{
	var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0;
	var_0_object = var_64_object;
	var_74_bool = 0; var_75_object = Obj(); var_76_float = 0;
	var_64_object = var_75_object;
	func_4755(var_74_bool, var_75_object, (float)70.0);
	var_121_bool = var_74_bool == 0; //@nz
	if(var_121_bool != 0) {
		var_63_int = -2;
		return 8;
	}
	CreateDialog(var_70_object);
	var_122_int = 0;
	func_5192(var_122_int);
	@@var_70_object:SetNPCName(var_122_int);
	var_123_int = 0;
	func_5190(var_123_int);
	@@var_70_object:SetNPCDescription(var_123_int);
	var_124_string = "";
	func_5194(var_124_string);
	@@var_70_object:SetPhoto(var_124_string);
	var_125_string = "";
	func_5196(var_125_string);
	@@var_70_object:SetPhoto2(var_125_string);
	var_126_int = 0;
	func_6017(var_126_int);
	@@var_70_object:SetPlayerName(var_126_int);
	IsOverrideActive(var_71_bool);
	var_134_bool = var_71_bool;
	if(var_134_bool != 0) {
		var_63_int = -2;
		return 8;
	}
	DoDialog(var_70_object);
	var_135_bool = 0; var_136_object = Obj();
	func_5033(Obj());
	var_137_object = var_136_object;
	func_4842(var_135_bool, var_136_object);
	var_225_object = Obj(); var_226_object = Obj();
	var_64_object = var_225_object;
	var_70_object = var_226_object;
	TaskCall(1);
	func_81(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object);
	TaskReturn();
	@@var_70_object:IsDialogEnd(var_73_bool);
	
Label_63:
	var_382_bool = var_73_bool == 0; //@nz
	if(var_382_bool != 0) {
		sync();
		@@var_70_object:IsDialogEnd(var_73_bool);
		goto Label_63;
	}
	var_64_object = Obj();
	func_4824();
	StopDialog(var_70_object);
	@@var_70_object:GetReturnValue((int)-1);
	var_72_int = var_63_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5635(var_233_bool)
{
	var_235_int = 0; var_236_string = "";
	func_5049(var_235_int, "d3q01");
	var_240_bool = var_235_int == (int)0;
	if(var_240_bool != 0) {
		var_233_bool = 1;
		return 0;
	}
	var_233_bool = 0;
	return 0;
}


func_3331(var_0_object, var_1_object, var_2_object, var_3_string, var_641_object, var_642_object)
{
	var_0_object = var_642_object;
	var_1_object = var_641_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_648_bool = 0;
		var_648_bool = 0;
		var_649_bool = 0; var_650_object = Obj();
		var_650_object = var_1_object;
		func_5765(var_650_object);
		var_655_bool = var_649_bool == 0; //@nz
		if(var_655_bool != 0) {
			var_656_bool = 0; var_657_object = Obj();
			var_657_object = var_1_object;
			func_5623(var_657_object);
			if(var_656_bool != 0) {
				var_648_bool = 1;
			}
		}
		if(var_648_bool != 0) {
			var_662_object = Obj(); var_663_object = Obj();
			var_662_object = var_1_object;
			var_663_object = var_0_object;
			func_5270();
			var_666_string = "";
			func_3429(var_642_object, "Warning");
			@@@var_0_object:SetMessage((int)512020);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512021, (int)13240, (int)13239);
		} else {
				var_686_string = "";
				func_3429(var_642_object, "Neutral");
				@@@var_0_object:SetMessage((int)513723);
				@@@var_0_object:ClearReplies();
				var_688_bool = 0; var_689_object = Obj();
				var_689_object = var_1_object;
				func_5765(var_689_object);
				if(var_688_bool != 0) {
					@@@var_0_object:AddReply((int)541857, (int)-1, (int)44082);
				}
				@@@var_0_object:AddReply((int)513724, (int)-1, (int)14990);
				goto Label_3399;
		}
	}
Label_3399:
	var_678_bool = 0;
	func_5198(var_678_bool);
	if(var_678_bool != 0) {

	Label_3403:
		lshWaitForAnimEnd();
		var_679_string = var_3_string;
		if(var_679_string != 0) {
		} else {
			var_680_string = "";
			var_680_string = var_2_object;
			func_4980(var_680_string);
			goto Label_3403;
	}
		PlayAnimation("all", "idle");

	Label_3418:
		WaitForAnimEnd();
		var_683_string = var_3_string;
		if(var_683_string != 0) {
			goto Label_3428;
		}
		PlayAnimation("all", "idle");
		goto Label_3418;

	}
	goto Label_3428;
	
Label_3428:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd07";


func_5380()
{
	SetVariable("ood5Rubin1", (int)1);
	return 0;
}


func_5386()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("d5q01", (int)1);
	func_5967(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_5146(var_59_float);
	@@var_45_object:AddMark("d5q01RubinGotoBigVlad", "pt_map_bigvlad", (int)1, (int)511956, var_59_float);
	var_66_float = 0;
	func_5146(var_66_float);
	@@var_45_object:AddMark("d5q01RubinGotoBigVladSelf", "pt_map_rubin", (int)1, (int)515348, var_66_float);
	func_5887();
	func_5900();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5900()
{
	var_90_object = Obj(); var_91_object = Obj();
	CreateDiaryEntry(var_91_object, (int)140, (int)1, (int)515340);
	var_95_bool = 0; var_96_object = Obj(); var_97_int = 0;
	var_91_object = var_96_object;
	func_5939(var_95_bool, var_96_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5134(var_181_bool, var_182_string, var_183_string)
{
	var_184_object = Obj(); var_185_object = Obj();
	FindActor(var_185_object, var_182_string);
	var_186_bool = var_185_object == 0; //@ne
	if(var_186_bool != 0) {
		var_181_bool = 0;
		return 2;
	}
	Trigger(var_185_object, var_183_string);
	var_181_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5647(var_241_bool)
{
	var_243_int = 0; var_244_string = "";
	func_5049(var_243_int, "ood3Rubin1");
	var_246_bool = var_243_int == (int)0;
	if(var_246_bool != 0) {
		var_241_bool = 1;
		return 0;
	}
	var_241_bool = 0;
	return 0;
}


func_3602(var_0_object, var_700_int, var_701_object)
{
	var_703_object = Obj(); var_704_bool = 0; var_705_int = 0; var_706_bool = 0; var_707_object = Obj(); var_708_bool = 0; var_709_int = 0; var_710_bool = 0;
	var_0_object = var_701_object;
	var_711_bool = 0; var_712_object = Obj(); var_713_float = 0;
	var_701_object = var_712_object;
	func_4755(var_711_bool, var_712_object, (float)70.0);
	var_714_bool = var_711_bool == 0; //@nz
	if(var_714_bool != 0) {
		var_700_int = -2;
		return 8;
	}
	CreateDialog(var_707_object);
	var_715_int = 0;
	func_5192(var_715_int);
	@@var_707_object:SetNPCName(var_715_int);
	var_716_int = 0;
	func_5190(var_716_int);
	@@var_707_object:SetNPCDescription(var_716_int);
	var_717_string = "";
	func_5194(var_717_string);
	@@var_707_object:SetPhoto(var_717_string);
	var_718_string = "";
	func_5196(var_718_string);
	@@var_707_object:SetPhoto2(var_718_string);
	var_719_int = 0;
	func_6017(var_719_int);
	@@var_707_object:SetPlayerName(var_719_int);
	IsOverrideActive(var_708_bool);
	var_720_bool = var_708_bool;
	if(var_720_bool != 0) {
		var_700_int = -2;
		return 8;
	}
	DoDialog(var_707_object);
	var_721_bool = 0; var_722_object = Obj();
	func_5033(Obj());
	var_723_object = var_722_object;
	func_4842(var_721_bool, var_722_object);
	var_724_object = Obj(); var_725_object = Obj();
	var_701_object = var_724_object;
	var_707_object = var_725_object;
	TaskCall(9);
	func_3683(var_726_object, var_727_object, var_728_string, var_729_bool, var_724_object, var_725_object);
	TaskReturn();
	@@var_707_object:IsDialogEnd(var_710_bool);
	
Label_3665:
	var_763_bool = var_710_bool == 0; //@nz
	if(var_763_bool != 0) {
		sync();
		@@var_707_object:IsDialogEnd(var_710_bool);
		goto Label_3665;
	}
	var_701_object = Obj();
	func_4824();
	StopDialog(var_707_object);
	@@var_707_object:GetReturnValue((int)-1);
	var_709_int = var_700_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5913()
{
	var_171_object = Obj(); var_172_object = Obj();
	CreateDiaryEntry(var_172_object, (int)147, (int)1, (int)515347);
	var_176_bool = 0; var_177_object = Obj(); var_178_int = 0;
	var_172_object = var_177_object;
	func_5939(var_176_bool, var_177_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5146(var_59_float)
{
	var_60_float = 0; var_61_float = 0;
	GetGameTime(var_61_float);
	var_61_float = var_59_float;
	return 2;
}


func_5659(var_344_bool)
{
	var_346_int = 0; var_347_string = "";
	func_5049(var_346_int, "ood3Rubin2");
	var_349_bool = var_346_int == (int)0;
	if(var_349_bool != 0) {
		var_344_bool = 1;
		return 0;
	}
	var_344_bool = 0;
	return 0;
}


func_5151(var_57_int)
{
	var_58_float = 0; var_59_float = 0;
	GetGameTime(var_59_float);
	var_61_int = 0;
	var_61_int = var_59_float / (int)24;
	var_57_int = (int)1 + var_61_int;
	return 2;
}


func_4900(var_146_bool, var_147_object)
{
	var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = ""; var_153_string = ""; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_string = "";
	var_153_string = "c";
	var_154_int = 0;
	
Label_4903:
	if((int)1 != 0) {
		var_160_int = var_154_int + (int)1;
		var_161_int = var_153_string + var_160_int;
		@@var_147_object:HasProperty(var_161_int, var_155_bool);
		var_162_bool = var_155_bool == 0; //@nz
		if(var_162_bool != 0) {
		} else {
			var_154_int = var_154_int + (int)1;
			goto Label_4903;
		}
	}
	var_163_bool = var_154_int == 0; //@nz
	if(var_163_bool != 0) {
		var_146_bool = 0;
		return 10;
	}
	var_156_int = 0;
	var_165_bool = var_154_int > (int)1;
	if(var_165_bool != 0) {
		irand(var_156_int, var_154_int);
	}
	var_167_int = var_156_int + (int)1;
	var_168_int = var_153_string + var_167_int;
	@@var_147_object:GetProperty(var_168_int, var_157_string);
	var_169_bool = 0; var_170_string = "";
	var_157_string = var_170_string;
	func_5011(var_169_bool, var_170_string);
	var_169_bool = var_146_bool;
	return 10;
	
}


func_5926(var_76_object)
{
	var_77_object = Obj(); var_78_object = Obj();
	GetDiaryRoot(var_78_object);
	var_79_bool = var_78_object == 0; //@nz
	if(var_79_bool != 0) {
		Trace("Can't retrieve diary root");
		var_76_object = 0;
		return 2;
	}
	var_78_object = var_76_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5671(var_353_bool)
{
	var_355_int = 0; var_356_string = "";
	func_5049(var_355_int, "ood3Rubin3");
	var_358_bool = var_355_int == (int)0;
	if(var_358_bool != 0) {
		var_353_bool = 1;
		return 0;
	}
	var_353_bool = 0;
	return 0;
}


func_4647()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0;
	WaitForAnimEnd();
	var_52_bool = 0;
	func_4750(var_52_bool);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 12;
	}
	func_5173((int)0);
	var_54_int = var_46_int;
	var_47_int = 0;
	
Label_4661:
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_47_int < (int)5;
	if(var_69_bool != 0) {
		var_70_bool = 0;
		func_4750(var_70_bool);
		if(var_70_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		var_71_bool = var_46_int == 0; //@nz
		if(var_71_bool != 0) {
			Sleep((int)3, var_48_bool);
			var_73_bool = var_48_bool == 0; //@nz
			if(var_73_bool != 0) {
			} else {
		} else {
				irand(var_49_int, var_46_int);
				irand(var_50_int, (int)5);
				var_79_bool = var_50_int != (int)0;
				if(var_79_bool != 0) {
					var_49_int = 0;
				}
				var_81_string = ""; var_82_int = 0;
				var_49_int = var_82_int;
				func_5166(var_81_string, var_82_int);
				PlayAnimation("all", var_81_string);
				WaitForAnimEnd(var_51_bool);
				var_83_bool = var_51_bool == 0; //@nz
				if(var_83_bool == 0) goto Label_4702;
				goto Label_4713;
		}
		Label_4702:
			var_74_bool = 0;
			func_4716(var_74_bool);
			var_75_bool = var_74_bool == 0; //@nz
			if(var_75_bool != 0) {
				goto Label_4713;
			}
			ResetAAS();
			var_47_int = var_47_int + (int)1;
			goto Label_4661;

		}
	}
Label_4713:
	ResetAAS();
	return 12;
	
}


func_5160(var_55_bool, var_56_int)
{
	var_57_int = 0;
	func_5151(var_57_int);
	var_55_bool = var_57_int == var_56_int;
	return 0;
}


func_5421()
{
	SetVariable("ood5Rubin2", (int)1);
	return 0;
}


func_5166(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = "";
	var_64_int = var_61_int;
	if(var_64_int != 0) {
		"idle" = "idle" + var_61_int;
	}
	var_63_string = var_60_string;
	return 2;
}


func_5683(var_364_bool)
{
	var_366_int = 0; var_367_string = "";
	func_5049(var_366_int, "ood3Rubin4");
	var_369_bool = var_366_int == (int)0;
	if(var_369_bool != 0) {
		var_364_bool = 1;
		return 0;
	}
	var_364_bool = 0;
	return 0;
}


func_5427(var_142_object)
{
	var_144_object = Obj(); var_145_object = Obj(); var_146_int = 0; var_147_object = Obj(); var_148_object = Obj(); var_149_int = 0;
	func_5967(Obj());
	var_150_object = var_147_object;
	@@var_147_object:FindMark(var_148_object, "d5q01AlexandrGotoKaterina");
	var_152_object = var_148_object;
	if(var_152_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d5q01BigVladGotoAlexandr");
	var_154_object = var_148_object;
	if(var_154_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d5q01BurahMeeting");
	var_156_object = var_148_object;
	if(var_156_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d7q04NudeGotoAndrei");
	var_158_object = var_148_object;
	if(var_158_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d5q01GrifWantsMoney");
	var_160_object = var_148_object;
	if(var_160_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d5q01GrifWillHelp");
	var_162_object = var_148_object;
	if(var_162_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d5q01BigVladGotoLara");
	var_164_object = var_148_object;
	if(var_164_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d5q01PatrolGotoGrif");
	var_166_object = var_148_object;
	if(var_166_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d5q01RubinGotoBigVlad");
	var_168_object = var_148_object;
	if(var_168_object != 0) {
		@@var_148_object:Remove();
	}
	@@var_147_object:FindMark(var_148_object, "d5q01RubinGotoBigVladSelf");
	var_170_object = var_148_object;
	if(var_170_object != 0) {
		@@var_148_object:Remove();
	}
	func_5913();
	@@var_142_object:RemoveItemByType(var_149_int, "d5q01_heart", (int)1);
	var_181_bool = 0; var_182_string = ""; var_183_string = "";
	func_5134(var_181_bool, "quest_d5_01", "completed");
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4149(var_2_object, var_798_string)
{
	var_799_bool = 0;
	func_5198(var_799_bool);
	var_800_bool = var_799_bool == 0; //@nz
	if(var_800_bool != 0) {
		return 0;
	}
	var_801_bool = var_798_string == var_2_object;
	if(var_801_bool != 0) {
		return 0;
	}
	var_802_string = ""; var_803_bool = 0;
	var_798_string = var_802_string;
	var_805_bool = var_798_string == "";
	if(var_805_bool != 0) {
		var_803_bool = 0;
	} else {
		var_803_bool = 1;
	}
	func_4996(var_802_string, var_803_bool);
	var_2_object = var_798_string;
	return 0;
	
}


func_5173(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_57_int = 0;
	
Label_5175:
	var_60_string = ""; var_61_int = 0;
	var_57_int = var_61_int;
	func_5166(var_60_string, var_61_int);
	HasAnimation(var_58_bool, "all", var_60_string);
	var_65_bool = var_58_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_57_int = var_57_int + (int)1;
		goto Label_5175;
	}
	var_57_int = var_54_int;
	return 4;
	
}


func_308(var_2_object, var_251_string)
{
	var_252_bool = 0;
	func_5198(var_252_bool);
	var_253_bool = var_252_bool == 0; //@nz
	if(var_253_bool != 0) {
		return 0;
	}
	var_254_bool = var_251_string == var_2_object;
	if(var_254_bool != 0) {
		return 0;
	}
	var_255_string = ""; var_256_bool = 0;
	var_251_string = var_255_string;
	var_258_bool = var_251_string == "";
	if(var_258_bool != 0) {
		var_256_bool = 0;
	} else {
		var_256_bool = 1;
	}
	func_4996(var_255_string, var_256_bool);
	var_2_object = var_251_string;
	return 0;
	
}


func_4403(var_2_object, var_857_string)
{
	var_858_bool = 0;
	func_5198(var_858_bool);
	var_859_bool = var_858_bool == 0; //@nz
	if(var_859_bool != 0) {
		return 0;
	}
	var_860_bool = var_857_string == var_2_object;
	if(var_860_bool != 0) {
		return 0;
	}
	var_861_string = ""; var_862_bool = 0;
	var_857_string = var_861_string;
	var_864_bool = var_857_string == "";
	if(var_864_bool != 0) {
		var_862_bool = 0;
	} else {
		var_862_bool = 1;
	}
	func_4996(var_861_string, var_862_bool);
	var_2_object = var_857_string;
	return 0;
	
}


func_5939(var_67_bool, var_68_object, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0;
	func_5926(Obj());
	var_76_object = var_73_object;
	@@var_73_object:Find(var_69_int, var_74_object);
	var_81_bool = var_74_object == 0; //@nz
	if(var_81_bool != 0) {
		var_83_int = "Can't find diary parent with id: " + var_69_int;
		Trace(var_83_int);
		var_67_bool = 0;
		return 6;
	}
	@@var_74_object:AddChild(var_68_object);
	SendWorldWndMessage((int)7);
	@@var_68_object:GetCategory(var_75_int);
	SetDiarySection(var_75_int);
	var_67_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5695(var_304_bool)
{
	var_306_int = 0; var_307_string = "";
	func_5049(var_306_int, "d3q01");
	var_309_bool = var_306_int == (int)1000;
	if(var_309_bool != 0) {
		var_304_bool = 1;
		return 0;
	}
	var_304_bool = 0;
	return 0;
}


func_5190(var_123_int)
{
	var_123_int = 515551;
	return 0;
}


func_5192(var_122_int)
{
	var_122_int = 502876;
	return 0;
}


func_4937(var_177_bool, var_178_object)
{
	var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; var_184_string = ""; var_185_int = 0; var_186_bool = 0; var_187_int = 0; var_188_string = "";
	var_190_int = 0;
	func_5151(var_190_int);
	var_191_int = "d" + var_190_int;
	var_184_string = var_191_int + "m";
	var_185_int = 0;
	
Label_4946:
	if((int)1 != 0) {
		var_195_int = var_185_int + (int)1;
		var_196_int = var_184_string + var_195_int;
		@@var_178_object:HasProperty(var_196_int, var_186_bool);
		var_197_bool = var_186_bool == 0; //@nz
		if(var_197_bool != 0) {
		} else {
			var_185_int = var_185_int + (int)1;
			goto Label_4946;
		}
	}
	var_198_bool = var_185_int == 0; //@nz
	if(var_198_bool != 0) {
		var_177_bool = 0;
		return 10;
	}
	var_187_int = 0;
	var_200_bool = var_185_int > (int)1;
	if(var_200_bool != 0) {
		irand(var_187_int, var_185_int);
	}
	var_202_int = var_187_int + (int)1;
	var_203_int = var_184_string + var_202_int;
	@@var_178_object:GetProperty(var_203_int, var_188_string);
	var_204_bool = 0; var_205_string = "";
	var_188_string = var_205_string;
	func_5011(var_204_bool, var_205_string);
	var_204_bool = var_177_bool;
	return 10;
	
}


func_5194(var_124_string)
{
	var_124_string = "ui/NPC_Rubin.png";
	return 0;
}


func_5707(var_295_bool, var_296_object)
{
	var_297_bool = 0; var_298_object = Obj(); var_299_string = "";
	var_296_object = var_298_object;
	func_5110(var_297_bool, var_298_object, "d3q01_blood");
	if(var_297_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_5196(var_125_string)
{
	var_125_string = "ui/NPC_Rubin_b.png";
	return 0;
}


func_5198(var_117_bool)
{
	var_117_bool = 1;
	return 0;
}


func_5967(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj();
	GetMainOutdoorScene(var_51_object);
	var_53_bool = var_51_object == 0; //@ne
	if(var_53_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_52_object = 0;
		var_52_object = var_48_object;
		return 4;
	}
	@@var_51_object:GetMap(var_52_object);
	var_52_object = var_48_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5200()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_225_object, var_226_object)
{
	var_0_object = var_226_object;
	var_1_object = var_225_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_232_bool = 0;
		var_232_bool = 0;
		var_233_bool = 0; var_234_object = Obj();
		var_234_object = var_1_object;
		func_5635(var_234_object);
		if(var_233_bool != 0) {
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_5647(var_242_object);
			if(var_241_bool != 0) {
				var_232_bool = 1;
			}
		}
		if(var_232_bool != 0) {
			var_247_object = Obj(); var_248_object = Obj();
			var_247_object = var_1_object;
			var_248_object = var_0_object;
			func_5557();
			var_251_string = "";
			func_308(var_226_object, "Neutral");
			@@@var_0_object:SetMessage((int)508737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508777, (int)9633, (int)9624);
			@@@var_0_object:AddReply((int)508781, (int)9629, (int)9628);
		} else {
				var_293_bool = 0;
				var_293_bool = 0;
				var_294_bool = 0;
				var_294_bool = 0;
				var_295_bool = 0; var_296_object = Obj();
				var_296_object = var_1_object;
				func_5707(var_295_bool, var_296_object);
				if(var_295_bool != 0) {
					var_304_bool = 0; var_305_object = Obj();
					var_305_object = var_1_object;
					func_5695(var_305_object);
					var_310_bool = var_304_bool == 0; //@nz
					if(var_310_bool != 0) {
						var_294_bool = 1;
					}
				}
				if(var_294_bool != 0) {
					var_311_bool = 0; var_312_object = Obj();
					var_312_object = var_1_object;
					func_5587(var_312_object);
					var_317_bool = var_311_bool == 0; //@nz
					if(var_317_bool != 0) {
						var_293_bool = 1;
					}
				}
				if(var_293_bool != 0) {
					var_318_string = "";
					func_308(var_226_object, "Neutral");
					@@@var_0_object:SetMessage((int)536148);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)536149, (int)37916, (int)37914);
					@@@var_0_object:AddReply((int)536150, (int)37916, (int)37915);
					goto Label_278;
				}
				var_326_bool = 0;
				var_326_bool = 0;
				var_327_bool = 0; var_328_object = Obj();
				var_328_object = var_1_object;
				func_5707(var_327_bool, var_328_object);
				if(var_327_bool != 0) {
					var_329_bool = 0; var_330_object = Obj();
					var_330_object = var_1_object;
					func_5695(var_330_object);
					var_331_bool = var_329_bool == 0; //@nz
					if(var_331_bool != 0) {
						var_326_bool = 1;
					}
				}
				if(var_326_bool != 0) {
					var_332_string = "";
					func_308(var_226_object, "Neutral");
					@@@var_0_object:SetMessage((int)509078);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)509079, (int)9958, (int)9957);
					goto Label_278;
				}
				var_337_string = "";
				func_308(var_226_object, "Neutral");
				@@@var_0_object:SetMessage((int)508778);
				@@@var_0_object:ClearReplies();
				var_339_bool = 0; var_340_object = Obj();
				var_340_object = var_1_object;
				func_5635(var_340_object);
				if(var_339_bool != 0) {
					@@@var_0_object:AddReply((int)511141, (int)12331, (int)12330);
				}
				var_344_bool = 0; var_345_object = Obj();
				var_345_object = var_1_object;
				func_5659(var_345_object);
				if(var_344_bool != 0) {
					@@@var_0_object:AddReply((int)508779, (int)9681, (int)9626);
				}
				var_353_bool = 0; var_354_object = Obj();
				var_354_object = var_1_object;
				func_5671(var_354_object);
				if(var_353_bool != 0) {
					@@@var_0_object:AddReply((int)508780, (int)9669, (int)9627);
				}
				var_362_bool = 0;
				var_362_bool = 0;
				var_363_bool = 0;
				var_363_bool = 0;
				var_364_bool = 0; var_365_object = Obj();
				var_365_object = var_1_object;
				func_5683(var_365_object);
				if(var_364_bool != 0) {
					var_370_bool = 0; var_371_object = Obj();
					var_371_object = var_1_object;
					func_5635(var_371_object);
					var_372_bool = var_370_bool == 0; //@nz
					if(var_372_bool != 0) {
						var_363_bool = 1;
					}
				}
				if(var_363_bool != 0) {
					var_373_bool = 0; var_374_object = Obj();
					var_374_object = var_1_object;
					func_5695(var_374_object);
					var_375_bool = var_373_bool == 0; //@nz
					if(var_375_bool != 0) {
						var_362_bool = 1;
					}
				}
				if(var_362_bool != 0) {
					@@@var_0_object:AddReply((int)508802, (int)9651, (int)9650);
				}
				@@@var_0_object:AddReply((int)511140, (int)-1, (int)12329);
				goto Label_278;
		}
	}
Label_278:
	var_275_bool = 0;
	func_5198(var_275_bool);
	if(var_275_bool != 0) {

	Label_282:
		lshWaitForAnimEnd();
		var_276_string = var_3_string;
		if(var_276_string != 0) {
		} else {
			var_277_string = "";
			var_277_string = var_2_object;
			func_4980(var_277_string);
			goto Label_282;
	}
		PlayAnimation("all", "idle");

	Label_297:
		WaitForAnimEnd();
		var_290_string = var_3_string;
		if(var_290_string != 0) {
			goto Label_307;
		}
		PlayAnimation("all", "idle");
		goto Label_297;

	}
	goto Label_307;
	
Label_307:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_2901(var_0_object, var_393_int, var_394_object)
{
	var_396_object = Obj(); var_397_bool = 0; var_398_int = 0; var_399_bool = 0; var_400_object = Obj(); var_401_bool = 0; var_402_int = 0; var_403_bool = 0;
	var_0_object = var_394_object;
	var_404_bool = 0; var_405_object = Obj(); var_406_float = 0;
	var_394_object = var_405_object;
	func_4755(var_404_bool, var_405_object, (float)70.0);
	var_407_bool = var_404_bool == 0; //@nz
	if(var_407_bool != 0) {
		var_393_int = -2;
		return 8;
	}
	CreateDialog(var_400_object);
	var_408_int = 0;
	func_5192(var_408_int);
	@@var_400_object:SetNPCName(var_408_int);
	var_409_int = 0;
	func_5190(var_409_int);
	@@var_400_object:SetNPCDescription(var_409_int);
	var_410_string = "";
	func_5194(var_410_string);
	@@var_400_object:SetPhoto(var_410_string);
	var_411_string = "";
	func_5196(var_411_string);
	@@var_400_object:SetPhoto2(var_411_string);
	var_412_int = 0;
	func_6017(var_412_int);
	@@var_400_object:SetPlayerName(var_412_int);
	IsOverrideActive(var_401_bool);
	var_413_bool = var_401_bool;
	if(var_413_bool != 0) {
		var_393_int = -2;
		return 8;
	}
	DoDialog(var_400_object);
	var_414_bool = 0; var_415_object = Obj();
	func_5033(Obj());
	var_416_object = var_415_object;
	func_4842(var_414_bool, var_415_object);
	var_417_object = Obj(); var_418_object = Obj();
	var_394_object = var_417_object;
	var_400_object = var_418_object;
	TaskCall(5);
	func_2982(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object);
	TaskReturn();
	@@var_400_object:IsDialogEnd(var_403_bool);
	
Label_2964:
	var_465_bool = var_403_bool == 0; //@nz
	if(var_465_bool != 0) {
		sync();
		@@var_400_object:IsDialogEnd(var_403_bool);
		goto Label_2964;
	}
	var_394_object = Obj();
	func_4824();
	StopDialog(var_400_object);
	@@var_400_object:GetReturnValue((int)-1);
	var_402_int = var_393_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5206(var_161_object)
{
	var_163_bool = 0; var_164_object = Obj(); var_165_string = "";
	var_161_object = var_164_object;
	func_5117(var_163_bool, var_164_object, "d3q01_blood");
	return 0;
}


func_5718(var_500_bool)
{
	var_502_int = 0; var_503_string = "";
	func_5049(var_502_int, "ood5Rubin1");
	var_505_bool = var_502_int == (int)0;
	if(var_505_bool != 0) {
		var_500_bool = 1;
		return 0;
	}
	var_500_bool = 0;
	return 0;
}


func_5213()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("d10q02", (int)2);
	func_5967(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_5146(var_59_float);
	@@var_45_object:AddMark("d10q02RubinGotoMaria", "pt_map_maria", (int)0, (int)515297, var_59_float);
	func_5835();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5984(var_87_object, var_88_string, var_89_float)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_bool = 0;
	GetMainOutdoorScene(var_97_object);
	var_99_bool = var_97_object == 0; //@ne
	if(var_99_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_97_object:GetLocator(var_88_string, var_98_bool, var_95_cvector, var_96_cvector);
	var_101_bool = var_98_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_103_int = "Warning: outdoor scene locator " + var_88_string;
		var_105_int = var_103_int + " doesnt exist";
		Trace(var_105_int);
	}
	@@var_97_object:GetMap(var_87_object);
	var_106_bool = var_87_object == 0; //@ne
	if(var_106_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_108_float = GetByIndex(var_95_cvector, 0);
	var_109_float = GetByIndex(var_95_cvector, 2);
	@@var_87_object:SetMapParams(var_108_float, var_109_float, var_89_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5730(var_545_bool)
{
	var_547_int = 0; var_548_string = "";
	func_5049(var_547_int, "d5q01");
	var_550_bool = var_547_int == (int)7;
	if(var_550_bool != 0) {
		var_545_bool = 1;
		return 0;
	}
	var_545_bool = 0;
	return 0;
}


func_3683(var_0_object, var_1_object, var_2_object, var_3_string, var_724_object, var_725_object)
{
	var_0_object = var_725_object;
	var_1_object = var_724_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_731_string = "";
		func_3751(var_725_object, "Confusion");
		@@@var_0_object:SetMessage((int)534092);
		@@@var_0_object:ClearReplies();
		var_740_bool = 0; var_741_object = Obj();
		var_741_object = var_1_object;
		func_5575(var_741_object);
		if(var_740_bool != 0) {
			@@@var_0_object:AddReply((int)534093, (int)38177, (int)35686);
		}
		@@@var_0_object:AddReply((int)536401, (int)-1, (int)38180);
		@@@var_0_object:AddReply((int)536402, (int)-1, (int)38181);
		goto Label_3721;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe67";
	}
Label_3721:
	var_755_bool = 0;
	func_5198(var_755_bool);
	if(var_755_bool != 0) {

	Label_3725:
		lshWaitForAnimEnd();
		var_756_string = var_3_string;
		if(var_756_string != 0) {
		} else {
			var_757_string = "";
			var_757_string = var_2_object;
			func_4980(var_757_string);
			goto Label_3725;
	}
		PlayAnimation("all", "idle");

	Label_3740:
		WaitForAnimEnd();
		var_760_string = var_3_string;
		if(var_760_string != 0) {
			goto Label_3750;
		}
		PlayAnimation("all", "idle");
		goto Label_3740;
	}
	goto Label_3750;
	
Label_3750:
	return 0;
	
}


func_3429(var_2_object, var_666_string)
{
	var_667_bool = 0;
	func_5198(var_667_bool);
	var_668_bool = var_667_bool == 0; //@nz
	if(var_668_bool != 0) {
		return 0;
	}
	var_669_bool = var_666_string == var_2_object;
	if(var_669_bool != 0) {
		return 0;
	}
	var_670_string = ""; var_671_bool = 0;
	var_666_string = var_670_string;
	var_673_bool = var_666_string == "";
	if(var_673_bool != 0) {
		var_671_bool = 0;
	} else {
		var_671_bool = 1;
	}
	func_4996(var_670_string, var_671_bool);
	var_2_object = var_666_string;
	return 0;
	
}


func_4716(var_74_bool)
{
	var_74_bool = 1;
	return 0;
}


func_5742(var_539_bool)
{
	var_541_int = 0; var_542_string = "";
	func_5049(var_541_int, "ood5Rubin2");
	var_544_bool = var_541_int == (int)0;
	if(var_544_bool != 0) {
		var_539_bool = 1;
		return 0;
	}
	var_539_bool = 0;
	return 0;
}


func_4718()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4723(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_5236(var_54_object)
{
	Trace("bluevaccine is given");
	var_57_object = Obj(); var_58_string = ""; var_59_int = 0;
	var_54_object = var_57_object;
	func_5097(var_57_object, "blue_vaccine", (int)1);
	return 0;
}


func_4980(var_277_string)
{
	var_278_bool = 0; var_279_float = 0; var_280_float = 0; var_281_bool = 0; var_282_float = 0; var_283_float = 0;
	lshHasAnimation(var_281_bool, var_277_string);
	var_284_bool = var_281_bool;
	if(var_284_bool != 0) {
		lshGetAnimTimes(var_277_string, var_282_float, var_283_float);
		lshPlayAnimation(var_282_float, var_283_float, (bool)0);
	} else {
		var_287_int = "Can't find lsh animation : " + var_277_string;
		Trace(var_287_int);
	}
	return 6;
	
}


func_4471(var_0_object)
{
	var_36_bool = 0;
	func_4750(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_4480:
	func_4647();
	goto Label_4480;
}
EMIT "Return(); Pop(0)";


func_5754(var_551_bool, var_552_object)
{
	var_553_bool = 0; var_554_object = Obj(); var_555_string = "";
	var_552_object = var_554_object;
	func_5110(var_553_bool, var_554_object, "d5q01_heart");
	if(var_553_bool != 0) {
		var_551_bool = 1;
		return 0;
	}
	var_551_bool = 0;
	return 0;
}


func_4731(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0;
	GetPosition(var_49_cvector);
	var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
	return 6;
}


func_5247()
{
	SetVariable("ood4Rubin1", (int)1);
	return 0;
}


func_6017(var_126_int)
{
	var_127_int = 0; var_128_int = 0;
	GetVariable("branch", var_128_int);
	var_131_bool = var_128_int == (int)0;
	if(var_131_bool != 0) {
		var_126_int = 1;
		return 2;
	EMIT "GOTO 0x1790";
	}
	var_133_bool = var_128_int == (int)1;
	if(var_133_bool != 0) {
		var_126_int = 2;
		return 2;
	}
	var_126_int = 3;
	return 2;
}


func_4996(var_255_string, var_256_bool)
{
	var_259_bool = 0; var_260_float = 0; var_261_float = 0; var_262_bool = 0; var_263_float = 0; var_264_float = 0;
	lshHasAnimation(var_262_bool, var_255_string);
	var_265_bool = var_262_bool;
	if(var_265_bool != 0) {
		lshGetAnimTimes(var_255_string, var_263_float, var_264_float);
		lshPlayAnimation(var_263_float, var_264_float, var_256_bool);
	} else {
		var_267_int = "Can't find lsh animation : " + var_255_string;
		Trace(var_267_int);
	}
	return 6;
	
}


func_5253()
{
	SetVariable("ood4Rubin2", (int)1);
	return 0;
}


func_5765(var_649_bool)
{
	var_651_int = 0; var_652_string = "";
	func_5049(var_651_int, "d6RubinGoesToGeorg");
	var_654_bool = var_651_int != (int)0;
	if(var_654_bool != 0) {
		var_649_bool = 1;
		return 0;
	}
	var_649_bool = 0;
	return 0;
}


func_4741(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_4731(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_4485(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj();
	FindActor(var_63_object, "player");
	var_65_bool = var_63_object == 0; //@nz
	if(var_65_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	var_66_bool = 0; var_67_object = Obj();
	var_63_object = var_67_object;
	func_4741(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5259(var_78_object)
{
	Trace("lens is given");
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0;
	var_78_object = var_81_object;
	func_5097(var_81_object, "lens", (int)1);
	return 0;
}


func_5517()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("d6RubinGoesToGeorg", (int)1);
	GetSceneByName(var_45_object, "warehouse_rubin");
	Trigger(var_45_object, "norubin");
	return 2;
}
EMIT "Stack[-1] = 0";


func_4750(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_5777(var_601_bool)
{
	var_603_int = 0; var_604_string = "";
	func_5049(var_603_int, "d5q01");
	var_606_bool = var_603_int == (int)0;
	if(var_606_bool != 0) {
		var_601_bool = 1;
		return 0;
	}
	var_601_bool = 0;
	return 0;
}


func_1681(var_0_object, var_469_int, var_470_object)
{
	var_472_object = Obj(); var_473_bool = 0; var_474_int = 0; var_475_bool = 0; var_476_object = Obj(); var_477_bool = 0; var_478_int = 0; var_479_bool = 0;
	var_0_object = var_470_object;
	var_480_bool = 0; var_481_object = Obj(); var_482_float = 0;
	var_470_object = var_481_object;
	func_4755(var_480_bool, var_481_object, (float)70.0);
	var_483_bool = var_480_bool == 0; //@nz
	if(var_483_bool != 0) {
		var_469_int = -2;
		return 8;
	}
	CreateDialog(var_476_object);
	var_484_int = 0;
	func_5192(var_484_int);
	@@var_476_object:SetNPCName(var_484_int);
	var_485_int = 0;
	func_5190(var_485_int);
	@@var_476_object:SetNPCDescription(var_485_int);
	var_486_string = "";
	func_5194(var_486_string);
	@@var_476_object:SetPhoto(var_486_string);
	var_487_string = "";
	func_5196(var_487_string);
	@@var_476_object:SetPhoto2(var_487_string);
	var_488_int = 0;
	func_6017(var_488_int);
	@@var_476_object:SetPlayerName(var_488_int);
	IsOverrideActive(var_477_bool);
	var_489_bool = var_477_bool;
	if(var_489_bool != 0) {
		var_469_int = -2;
		return 8;
	}
	DoDialog(var_476_object);
	var_490_bool = 0; var_491_object = Obj();
	func_5033(Obj());
	var_492_object = var_491_object;
	func_4842(var_490_bool, var_491_object);
	var_493_object = Obj(); var_494_object = Obj();
	var_470_object = var_493_object;
	var_476_object = var_494_object;
	TaskCall(3);
	func_1762(var_495_object, var_496_object, var_497_string, var_498_bool, var_493_object, var_494_object);
	TaskReturn();
	@@var_476_object:IsDialogEnd(var_479_bool);
	
Label_1744:
	var_613_bool = var_479_bool == 0; //@nz
	if(var_613_bool != 0) {
		sync();
		@@var_476_object:IsDialogEnd(var_479_bool);
		goto Label_1744;
	}
	var_470_object = Obj();
	func_4824();
	StopDialog(var_476_object);
	@@var_476_object:GetReturnValue((int)-1);
	var_478_int = var_469_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4755(var_74_bool, var_75_object, var_76_float)
{
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0;
	@@var_75_object:GetPosition(var_87_cvector);
	@@var_75_object:GetEyesHeight(var_86_float);
	var_95_float = GetByIndex(var_87_cvector, 1);
	var_95_float = var_95_float + var_86_float;
	SetByIndex(var_87_cvector, 1) = var_95_float;
	GetPosition(var_88_cvector);
	GetEyesHeight(var_86_float);
	var_96_float = GetByIndex(var_88_cvector, 1);
	var_96_float = var_96_float + var_86_float;
	SetByIndex(var_88_cvector, 1) = var_96_float;
	var_89_cvector = var_87_cvector - var_88_cvector;
	var_97_float = GetByIndex(var_89_cvector, 1);
	SetByIndex(var_89_cvector, 1) = (float)0;
	var_98_int = var_89_cvector | var_89_cvector;
	var_99_float = sqrt(var_98_int);
	var_89_cvector = var_89_cvector / var_99_float;
	var_90_cvector = -var_89_cvector;
	var_100_float = var_89_cvector * var_76_float;
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0);
	var_102_cvector = var_90_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5039(var_101_cvector, var_102_cvector);
	var_110_float = var_101_cvector * (int)25;
	var_111_int = var_100_float + var_110_float;
	var_91_cvector = var_111_int - CVector(0.0, 10.0, 0.0);
	var_92_cvector = var_88_cvector + var_91_cvector;
	IsOverrideActive(var_93_bool);
	var_113_bool = var_93_bool;
	if(var_113_bool != 0) {
		var_74_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_92_cvector, var_90_cvector, (bool)1);
	var_115_float = GetByIndex(var_91_cvector, 0);
	var_116_float = GetByIndex(var_91_cvector, 2);
	Rotate(var_115_float, var_116_float);
	var_117_bool = 0;
	func_5198(var_117_bool);
	if(var_117_bool != 0) {
	} else {
		HasAnimationTrack(var_94_bool, "head");
		var_119_bool = var_94_bool;
		if(var_119_bool == 0) goto Label_4818;
		LookAsyncCamera("head");
	}
Label_4818:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_74_bool = 1;
	return 18;
	
}


func_1937(var_2_object, var_514_string)
{
	var_515_bool = 0;
	func_5198(var_515_bool);
	var_516_bool = var_515_bool == 0; //@nz
	if(var_516_bool != 0) {
		return 0;
	}
	var_517_bool = var_514_string == var_2_object;
	if(var_517_bool != 0) {
		return 0;
	}
	var_518_string = ""; var_519_bool = 0;
	var_514_string = var_518_string;
	var_521_bool = var_514_string == "";
	if(var_521_bool != 0) {
		var_519_bool = 0;
	} else {
		var_519_bool = 1;
	}
	func_4996(var_518_string, var_519_bool);
	var_2_object = var_514_string;
	return 0;
	
}


func_6034(var_54_object)
{
	var_55_bool = 0; var_56_int = 0;
	func_5160(var_55_bool, (int)3);
	if(var_55_bool != 0) {
		var_63_int = 0; var_64_object = Obj();
		var_54_object = var_64_object;
		TaskCall(0);
		func_0(var_65_object, var_63_int, var_64_object);
		TaskReturn();
		return 0;
	}
	var_391_bool = 0; var_392_int = 0;
	func_5160(var_391_bool, (int)4);
	if(var_391_bool != 0) {
		var_393_int = 0; var_394_object = Obj();
		var_54_object = var_394_object;
		TaskCall(4);
		func_2901(var_395_object, var_393_int, var_394_object);
		TaskReturn();
		return 0;
	}
	var_467_bool = 0; var_468_int = 0;
	func_5160(var_467_bool, (int)5);
	if(var_467_bool != 0) {
		var_469_int = 0; var_470_object = Obj();
		var_54_object = var_470_object;
		TaskCall(2);
		func_1681(var_471_object, var_469_int, var_470_object);
		TaskReturn();
		return 0;
	}
	var_615_bool = 0; var_616_int = 0;
	func_5160(var_615_bool, (int)6);
	if(var_615_bool != 0) {
		var_617_int = 0; var_618_object = Obj();
		var_54_object = var_618_object;
		TaskCall(6);
		func_3250(var_619_object, var_617_int, var_618_object);
		TaskReturn();
		return 0;
	}
	var_698_bool = 0; var_699_int = 0;
	func_5160(var_698_bool, (int)10);
	if(var_698_bool != 0) {
		var_700_int = 0; var_701_object = Obj();
		var_54_object = var_701_object;
		TaskCall(8);
		func_3602(var_702_object, var_700_int, var_701_object);
		TaskReturn();
		return 0;
	}
	var_765_bool = 0; var_766_int = 0;
	func_5160(var_765_bool, (int)12);
	if(var_765_bool != 0) {
		var_767_int = 0; var_768_object = Obj();
		var_54_object = var_768_object;
		TaskCall(10);
		func_4005(var_769_object, var_767_int, var_768_object);
		TaskReturn();
		return 0;
	}
	var_826_int = 0; var_827_object = Obj();
	var_54_object = var_827_object;
	TaskCall(12);
	func_4264(var_828_object, var_826_int, var_827_object);
	TaskReturn();
	return 0;
}


func_5270()
{
	SetVariable("ood6Rubin1", (int)1);
	return 0;
}


func_5011(var_169_bool, var_170_string)
{
	var_171_bool = 0; var_172_bool = 0;
	var_173_bool = 0;
	func_5198(var_173_bool);
	if(var_173_bool != 0) {
		lshHasSpeech(var_172_bool, var_170_string);
		var_174_bool = var_172_bool;
		if(var_174_bool != 0) {
			lshPlaySpeech(var_170_string);
			var_169_bool = 1;
			return 2;
		}
	}
	var_169_bool = 0;
	return 2;
}


func_4500(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_4505(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0;
	FindActor(var_47_object, "player");
	var_50_bool = var_47_object == 0; //@nz
	if(var_50_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	var_51_float = 0; var_52_object = Obj();
	var_47_object = var_52_object;
	func_4723(var_51_float, var_52_object);
	var_60_bool = var_51_float > (float)90000.0;
	if(var_60_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	CanSee(var_48_bool, var_47_object);
	var_48_bool = var_44_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_5530(var_50_object)
{
	Trace("whitevaccine is given");
	var_53_object = Obj(); var_54_string = ""; var_55_int = 0;
	var_50_object = var_53_object;
	func_5097(var_53_object, "white_vaccine", (int)1);
	return 0;
}


func_5276()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5789(var_590_bool)
{
	var_592_int = 0; var_593_string = "";
	func_5049(var_592_int, "ood5Rubin3");
	var_595_bool = var_592_int == (int)0;
	if(var_595_bool != 0) {
		var_590_bool = 1;
		return 0;
	}
	var_590_bool = 0;
	return 0;
}


func_5282()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("d3q01", (int)1);
	func_5967(Obj());
	var_52_object = var_49_object;
	var_63_float = 0;
	func_5146(var_63_float);
	@@var_49_object:AddMark("d3q01RubinGotoAlexandr", "pt_map_alexandr", (int)1, (int)511151, var_63_float);
	func_5848();
	func_5861();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5026()
{
	var_39_bool = 0;
	func_5198(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5541(var_86_object)
{
	var_87_object = Obj(); var_88_string = ""; var_89_float = 0;
	func_5967(Obj());
	var_90_object = var_87_object;
	func_5984(var_87_object, "pt_map_maria", (float)2);
	var_110_object = Obj();
	func_5967(var_110_object);
	@@var_86_object:ShowMap(var_110_object);
	return 0;
}


func_2982(var_0_object, var_1_object, var_2_object, var_3_string, var_417_object, var_418_object)
{
	var_0_object = var_418_object;
	var_1_object = var_417_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_424_string = "";
		func_3060(var_418_object, "Neutral");
		@@@var_0_object:SetMessage((int)511122);
		@@@var_0_object:ClearReplies();
		var_433_bool = 0; var_434_object = Obj();
		var_434_object = var_1_object;
		func_5599(var_434_object);
		if(var_433_bool != 0) {
			@@@var_0_object:AddReply((int)511123, (int)12316, (int)12312);
		}
		var_442_bool = 0; var_443_object = Obj();
		var_443_object = var_1_object;
		func_5611(var_443_object);
		if(var_442_bool != 0) {
			@@@var_0_object:AddReply((int)511124, (int)12314, (int)12313);
		}
		@@@var_0_object:AddReply((int)536267, (int)-1, (int)38051);
		@@@var_0_object:AddReply((int)536268, (int)-1, (int)38052);
		goto Label_3030;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbaa";
	}
Label_3030:
	var_457_bool = 0;
	func_5198(var_457_bool);
	if(var_457_bool != 0) {

	Label_3034:
		lshWaitForAnimEnd();
		var_458_string = var_3_string;
		if(var_458_string != 0) {
		} else {
			var_459_string = "";
			var_459_string = var_2_object;
			func_4980(var_459_string);
			goto Label_3034;
	}
		PlayAnimation("all", "idle");

	Label_3049:
		WaitForAnimEnd();
		var_462_string = var_3_string;
		if(var_462_string != 0) {
			goto Label_3059;
		}
		PlayAnimation("all", "idle");
		goto Label_3049;
	}
	goto Label_3059;
	
Label_3059:
	return 0;
	
}


func_3751(var_2_object, var_731_string)
{
	var_732_bool = 0;
	func_5198(var_732_bool);
	var_733_bool = var_732_bool == 0; //@nz
	if(var_733_bool != 0) {
		return 0;
	}
	var_734_bool = var_731_string == var_2_object;
	if(var_734_bool != 0) {
		return 0;
	}
	var_735_string = ""; var_736_bool = 0;
	var_731_string = var_735_string;
	var_738_bool = var_731_string == "";
	if(var_738_bool != 0) {
		var_736_bool = 0;
	} else {
		var_736_bool = 1;
	}
	func_4996(var_735_string, var_736_bool);
	var_2_object = var_731_string;
	return 0;
	
}


func_4264(var_0_object, var_826_int, var_827_object)
{
	var_829_object = Obj(); var_830_bool = 0; var_831_int = 0; var_832_bool = 0; var_833_object = Obj(); var_834_bool = 0; var_835_int = 0; var_836_bool = 0;
	var_0_object = var_827_object;
	var_837_bool = 0; var_838_object = Obj(); var_839_float = 0;
	var_827_object = var_838_object;
	func_4755(var_837_bool, var_838_object, (float)70.0);
	var_840_bool = var_837_bool == 0; //@nz
	if(var_840_bool != 0) {
		var_826_int = -2;
		return 8;
	}
	CreateDialog(var_833_object);
	var_841_int = 0;
	func_5192(var_841_int);
	@@var_833_object:SetNPCName(var_841_int);
	var_842_int = 0;
	func_5190(var_842_int);
	@@var_833_object:SetNPCDescription(var_842_int);
	var_843_string = "";
	func_5194(var_843_string);
	@@var_833_object:SetPhoto(var_843_string);
	var_844_string = "";
	func_5196(var_844_string);
	@@var_833_object:SetPhoto2(var_844_string);
	var_845_int = 0;
	func_6017(var_845_int);
	@@var_833_object:SetPlayerName(var_845_int);
	IsOverrideActive(var_834_bool);
	var_846_bool = var_834_bool;
	if(var_846_bool != 0) {
		var_826_int = -2;
		return 8;
	}
	DoDialog(var_833_object);
	var_847_bool = 0; var_848_object = Obj();
	func_5033(Obj());
	var_849_object = var_848_object;
	func_4842(var_847_bool, var_848_object);
	var_850_object = Obj(); var_851_object = Obj();
	var_827_object = var_850_object;
	var_833_object = var_851_object;
	TaskCall(13);
	func_4345(var_852_object, var_853_object, var_854_string, var_855_bool, var_850_object, var_851_object);
	TaskReturn();
	@@var_833_object:IsDialogEnd(var_836_bool);
	
Label_4327:
	var_880_bool = var_836_bool == 0; //@nz
	if(var_880_bool != 0) {
		sync();
		@@var_833_object:IsDialogEnd(var_836_bool);
		goto Label_4327;
	}
	var_827_object = Obj();
	func_4824();
	StopDialog(var_833_object);
	@@var_833_object:GetReturnValue((int)-1);
	var_835_int = var_826_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5801(var_570_bool)
{
	var_572_bool = 0;
	var_572_bool = 0;
	var_573_bool = 0;
	var_573_bool = 0;
	var_574_int = 0; var_575_string = "";
	func_5049(var_574_int, "d5q01");
	var_577_bool = var_574_int != (int)0;
	if(var_577_bool != 0) {
		var_578_int = 0; var_579_string = "";
		func_5049(var_578_int, "d5q01");
		var_581_bool = var_578_int != (int)-1;
		if(var_581_bool != 0) {
			var_573_bool = 1;
		}
	}
	if(var_573_bool != 0) {
		var_582_int = 0; var_583_string = "";
		func_5049(var_582_int, "d5q01");
		var_585_bool = var_582_int != (int)1000;
		if(var_585_bool != 0) {
			var_572_bool = 1;
		}
	}
	if(var_572_bool != 0) {
		var_570_bool = 1;
		return 0;
	}
	var_570_bool = 0;
	return 0;
}


func_4005(var_0_object, var_767_int, var_768_object)
{
	var_770_object = Obj(); var_771_bool = 0; var_772_int = 0; var_773_bool = 0; var_774_object = Obj(); var_775_bool = 0; var_776_int = 0; var_777_bool = 0;
	var_0_object = var_768_object;
	var_778_bool = 0; var_779_object = Obj(); var_780_float = 0;
	var_768_object = var_779_object;
	func_4755(var_778_bool, var_779_object, (float)70.0);
	var_781_bool = var_778_bool == 0; //@nz
	if(var_781_bool != 0) {
		var_767_int = -2;
		return 8;
	}
	CreateDialog(var_774_object);
	var_782_int = 0;
	func_5192(var_782_int);
	@@var_774_object:SetNPCName(var_782_int);
	var_783_int = 0;
	func_5190(var_783_int);
	@@var_774_object:SetNPCDescription(var_783_int);
	var_784_string = "";
	func_5194(var_784_string);
	@@var_774_object:SetPhoto(var_784_string);
	var_785_string = "";
	func_5196(var_785_string);
	@@var_774_object:SetPhoto2(var_785_string);
	var_786_int = 0;
	func_6017(var_786_int);
	@@var_774_object:SetPlayerName(var_786_int);
	IsOverrideActive(var_775_bool);
	var_787_bool = var_775_bool;
	if(var_787_bool != 0) {
		var_767_int = -2;
		return 8;
	}
	DoDialog(var_774_object);
	var_788_bool = 0; var_789_object = Obj();
	func_5033(Obj());
	var_790_object = var_789_object;
	func_4842(var_788_bool, var_789_object);
	var_791_object = Obj(); var_792_object = Obj();
	var_768_object = var_791_object;
	var_774_object = var_792_object;
	TaskCall(11);
	func_4086(var_793_object, var_794_object, var_795_string, var_796_bool, var_791_object, var_792_object);
	TaskReturn();
	@@var_774_object:IsDialogEnd(var_777_bool);
	
Label_4068:
	var_824_bool = var_777_bool == 0; //@nz
	if(var_824_bool != 0) {
		sync();
		@@var_774_object:IsDialogEnd(var_777_bool);
		goto Label_4068;
	}
	var_768_object = Obj();
	func_4824();
	StopDialog(var_774_object);
	@@var_774_object:GetReturnValue((int)-1);
	var_776_int = var_767_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5033(var_137_object)
{
	var_138_object = Obj(); var_139_object = Obj();
	self(var_139_object);
	var_139_object = var_137_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4527()
{
	var_884_float = 0; var_885_float = 0;
	rand(var_885_float, (int)8, (int)16);
	SetTimer((int)10, var_885_float);
	return 2;
}


func_5039(var_101_cvector, var_102_cvector)
{
	var_104_float = 0; var_105_float = 0;
	var_106_int = var_102_cvector | var_102_cvector;
	var_105_float = sqrt(var_106_int);
	var_107_float = 9.999999974752427e-07;
	var_108_bool = var_105_float < var_107_float;
	if(var_108_bool != 0) {
		var_101_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_101_cvector = var_102_cvector / var_105_float;
	return 2;
}


func_3250(var_0_object, var_617_int, var_618_object)
{
	var_620_object = Obj(); var_621_bool = 0; var_622_int = 0; var_623_bool = 0; var_624_object = Obj(); var_625_bool = 0; var_626_int = 0; var_627_bool = 0;
	var_0_object = var_618_object;
	var_628_bool = 0; var_629_object = Obj(); var_630_float = 0;
	var_618_object = var_629_object;
	func_4755(var_628_bool, var_629_object, (float)70.0);
	var_631_bool = var_628_bool == 0; //@nz
	if(var_631_bool != 0) {
		var_617_int = -2;
		return 8;
	}
	CreateDialog(var_624_object);
	var_632_int = 0;
	func_5192(var_632_int);
	@@var_624_object:SetNPCName(var_632_int);
	var_633_int = 0;
	func_5190(var_633_int);
	@@var_624_object:SetNPCDescription(var_633_int);
	var_634_string = "";
	func_5194(var_634_string);
	@@var_624_object:SetPhoto(var_634_string);
	var_635_string = "";
	func_5196(var_635_string);
	@@var_624_object:SetPhoto2(var_635_string);
	var_636_int = 0;
	func_6017(var_636_int);
	@@var_624_object:SetPlayerName(var_636_int);
	IsOverrideActive(var_625_bool);
	var_637_bool = var_625_bool;
	if(var_637_bool != 0) {
		var_617_int = -2;
		return 8;
	}
	DoDialog(var_624_object);
	var_638_bool = 0; var_639_object = Obj();
	func_5033(Obj());
	var_640_object = var_639_object;
	func_4842(var_638_bool, var_639_object);
	var_641_object = Obj(); var_642_object = Obj();
	var_618_object = var_641_object;
	var_624_object = var_642_object;
	TaskCall(7);
	func_3331(var_643_object, var_644_object, var_645_string, var_646_bool, var_641_object, var_642_object);
	TaskReturn();
	@@var_624_object:IsDialogEnd(var_627_bool);
	
Label_3313:
	var_696_bool = var_627_bool == 0; //@nz
	if(var_696_bool != 0) {
		sync();
		@@var_624_object:IsDialogEnd(var_627_bool);
		goto Label_3313;
	}
	var_618_object = Obj();
	func_4824();
	StopDialog(var_624_object);
	@@var_624_object:GetReturnValue((int)-1);
	var_626_int = var_617_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5557()
{
	SetVariable("d3RubinVisit", (int)1);
	return 0;
}


func_4536()
{
	KillTimer((int)10);
	return 0;
}


func_5049(var_235_int, var_236_string)
{
	var_237_int = 0; var_238_int = 0;
	GetVariable(var_236_string, var_238_int);
	var_238_int = var_235_int;
	return 2;
}


func_5563()
{
	SetVariable("d5RubinVisit", (int)1);
	return 0;
}


func_5308()
{
	SetVariable("ood3Rubin1", (int)1);
	return 0;
}


func_5054(var_69_int, var_70_int)
{
	var_71_object = Obj(); var_72_object = Obj();
	CreateIntVector(var_72_object);
	@@var_72_object:add(var_69_int);
	@@var_72_object:add(var_70_int);
	SendWorldWndMessage((int)3, var_72_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5569()
{
	SetVariable("ood5Rubin3", (int)1);
	return 0;
}


func_5314()
{
	SetVariable("ood3Rubin2", (int)1);
	return 0;
}


func_5575(var_740_bool)
{
	var_742_int = 0; var_743_string = "";
	func_5049(var_742_int, "d10q02");
	var_745_bool = var_742_int == (int)1;
	if(var_745_bool != 0) {
		var_740_bool = 1;
		return 0;
	}
	var_740_bool = 0;
	return 0;
}


func_5320()
{
	SetVariable("ood3Rubin3", (int)1);
	return 0;
}


func_5066(var_174_int, var_175_int)
{
	var_176_object = Obj(); var_177_object = Obj();
	CreateIntVector(var_177_object);
	@@var_177_object:add(var_174_int);
	@@var_177_object:add(var_175_int);
	SendWorldWndMessage((int)4, var_177_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5835()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)668, (int)2, (int)534122);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_5939(var_67_bool, var_68_object, (int)666);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5326()
{
	SetVariable("ood3Rubin4", (int)1);
	return 0;
}


func_5587(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_5049(var_313_int, "microscope_d3q01_blood");
	var_316_bool = var_313_int != (int)0;
	if(var_316_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_5332(var_98_object)
{
	var_99_object = Obj(); var_100_string = ""; var_101_float = 0;
	func_5967(Obj());
	var_102_object = var_99_object;
	func_5984(var_99_object, "pt_map_alexandr", (float)2);
	var_122_object = Obj();
	func_5967(var_122_object);
	@@var_98_object:ShowMap(var_122_object);
	return 0;
}


func_5078(var_58_object, var_59_object, var_60_int)
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0;
	@@var_59_object:GetItemID(var_64_int);
	GetInvItemProperty(var_65_int, var_64_int, "Category");
	@@var_58_object:AddItem(var_66_bool, var_59_object, var_65_int, var_60_int);
	var_68_bool = var_66_bool == 0; //@nz
	if(var_68_bool != 0) {
		@@var_58_object:DropItems(var_59_object, var_60_int);
	} else {
		var_69_int = 0; var_70_int = 0;
		var_64_int = var_69_int;
		var_60_int = var_70_int;
		func_5054(var_69_int, var_70_int);
	}
	return 6;
	
}


func_4824()
{
	var_384_bool = 0; var_385_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_387_bool = 0;
	func_5198(var_387_bool);
	if(var_387_bool != 0) {
	} else {
		HasAnimationTrack(var_385_bool, "head");
		var_389_bool = var_385_bool;
		if(var_389_bool == 0) goto Label_4841;
		UnlookAsync("head");
	}
Label_4841:
	return 2;
	
}


func_5848()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)25, (int)1, (int)503365);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_5939(var_71_bool, var_72_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5599(var_433_bool)
{
	var_435_int = 0; var_436_string = "";
	func_5049(var_435_int, "ood4Rubin1");
	var_438_bool = var_435_int == (int)0;
	if(var_438_bool != 0) {
		var_433_bool = 1;
		return 0;
	}
	var_433_bool = 0;
	return 0;
}


func_1762(var_0_object, var_1_object, var_2_object, var_3_string, var_493_object, var_494_object)
{
	var_0_object = var_494_object;
	var_1_object = var_493_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_500_bool = 0; var_501_object = Obj();
		var_501_object = var_1_object;
		func_5718(var_501_object);
		if(var_500_bool != 0) {
			var_506_object = Obj(); var_507_object = Obj();
			var_506_object = var_1_object;
			var_507_object = var_0_object;
			func_5563();
			var_510_object = Obj(); var_511_object = Obj();
			var_510_object = var_1_object;
			var_511_object = var_0_object;
			func_5380();
			var_514_string = "";
			func_1937(var_494_object, "Rage");
			@@@var_0_object:SetMessage((int)511527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511528, (int)12722, (int)12721);
			@@@var_0_object:AddReply((int)515598, (int)16625, (int)16624);
		} else {
				var_537_bool = 0;
				var_537_bool = 0;
				var_538_bool = 0;
				var_538_bool = 0;
				var_539_bool = 0; var_540_object = Obj();
				var_540_object = var_1_object;
				func_5742(var_540_object);
				if(var_539_bool != 0) {
					var_545_bool = 0; var_546_object = Obj();
					var_546_object = var_1_object;
					func_5730(var_546_object);
					if(var_545_bool != 0) {
						var_538_bool = 1;
					}
				}
				if(var_538_bool != 0) {
					var_551_bool = 0; var_552_object = Obj();
					var_552_object = var_1_object;
					func_5754(var_551_bool, var_552_object);
					if(var_551_bool != 0) {
						var_537_bool = 1;
					}
				}
				if(var_537_bool != 0) {
					var_556_object = Obj(); var_557_object = Obj();
					var_556_object = var_1_object;
					var_557_object = var_0_object;
					func_5421();
					var_560_string = "";
					func_1937(var_494_object, "Neutral");
					@@@var_0_object:SetMessage((int)510510);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)510511, (int)11594, (int)11593);
					@@@var_0_object:AddReply((int)510521, (int)11594, (int)11604);
					goto Label_1907;
				}
				var_568_string = "";
				func_1937(var_494_object, "Neutral");
				@@@var_0_object:SetMessage((int)510500);
				@@@var_0_object:ClearReplies();
				var_570_bool = 0; var_571_object = Obj();
				var_571_object = var_1_object;
				func_5801(var_571_object);
				if(var_570_bool != 0) {
					@@@var_0_object:AddReply((int)510509, (int)16679, (int)11591);
				}
				var_589_bool = 0;
				var_589_bool = 0;
				var_590_bool = 0; var_591_object = Obj();
				var_591_object = var_1_object;
				func_5789(var_591_object);
				if(var_590_bool != 0) {
					var_596_bool = 0; var_597_object = Obj();
					var_597_object = var_1_object;
					func_5801(var_597_object);
					if(var_596_bool != 0) {
						var_589_bool = 1;
					}
				}
				if(var_589_bool != 0) {
					@@@var_0_object:AddReply((int)510501, (int)11584, (int)11583);
				}
				var_601_bool = 0; var_602_object = Obj();
				var_602_object = var_1_object;
				func_5777(var_602_object);
				if(var_601_bool != 0) {
					@@@var_0_object:AddReply((int)515653, (int)16690, (int)16689);
				}
				@@@var_0_object:AddReply((int)515647, (int)-1, (int)16682);
				goto Label_1907;
		}
	}
Label_1907:
	var_529_bool = 0;
	func_5198(var_529_bool);
	if(var_529_bool != 0) {

	Label_1911:
		lshWaitForAnimEnd();
		var_530_string = var_3_string;
		if(var_530_string != 0) {
		} else {
			var_531_string = "";
			var_531_string = var_2_object;
			func_4980(var_531_string);
			goto Label_1911;
	}
		PlayAnimation("all", "idle");

	Label_1926:
		WaitForAnimEnd();
		var_534_string = var_3_string;
		if(var_534_string != 0) {
			goto Label_1936;
		}
		PlayAnimation("all", "idle");
		goto Label_1926;

	}
	goto Label_1936;
	
Label_1936:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x6e6";


func_5348(var_99_object)
{
	var_100_object = Obj(); var_101_string = ""; var_102_float = 0;
	func_5967(Obj());
	var_103_object = var_100_object;
	func_5984(var_100_object, "pt_map_bigvlad", (float)2);
	var_123_object = Obj();
	func_5967(var_123_object);
	@@var_99_object:ShowMap(var_123_object);
	return 0;
}


func_5861()
{
	var_89_object = Obj(); var_90_object = Obj();
	CreateDiaryEntry(var_90_object, (int)68, (int)1, (int)512150);
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0;
	var_90_object = var_95_object;
	func_5939(var_94_bool, var_95_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5097(var_53_object, var_54_string, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateInvItem(var_57_object);
	@@var_57_object:SetItemName(var_54_string);
	var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0;
	var_53_object = var_58_object;
	var_57_object = var_59_object;
	var_55_int = var_60_int;
	func_5078(var_58_object, var_59_object, var_60_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4842(var_135_bool, var_136_object)
{
	var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0;
	GetVariable("voice_common", var_142_int);
	var_145_int = var_142_int;
	if(var_145_int != 0) {
		var_146_bool = 0; var_147_object = Obj();
		var_136_object = var_147_object;
		func_4900(var_146_bool, var_147_object);
		var_176_bool = var_146_bool == 0; //@nz
		if(var_176_bool != 0) {
			var_177_bool = 0; var_178_object = Obj();
			var_136_object = var_178_object;
			func_4937(var_177_bool, var_178_object);
			var_207_bool = var_177_bool == 0; //@nz
			if(var_207_bool != 0) {
				var_135_bool = 0;
				return 4;
			}
		}
		irand(var_143_int, (int)2);
		var_209_int = var_143_int;
		if(var_209_int != 0) {
			var_212_int = var_142_int + (int)1;
			var_214_int = var_212_int % (int)3;
			SetVariable("voice_common", var_214_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_217_bool = 0; var_218_object = Obj();
		var_136_object = var_218_object;
		func_4937(var_217_bool, var_218_object);
		var_219_bool = var_217_bool == 0; //@nz
		if(var_219_bool != 0) {
			var_220_bool = 0; var_221_object = Obj();
			var_136_object = var_221_object;
			func_4900(var_220_bool, var_221_object);
			var_222_bool = var_220_bool == 0; //@nz
			if(var_222_bool != 0) {
				var_135_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4898;
	
Label_4898:
	var_135_bool = 1;
	return 4;
	
}


func_5611(var_442_bool)
{
	var_444_int = 0; var_445_string = "";
	func_5049(var_444_int, "ood4Rubin2");
	var_447_bool = var_444_int == (int)0;
	if(var_447_bool != 0) {
		var_442_bool = 1;
		return 0;
	}
	var_442_bool = 0;
	return 0;
}


func_5874()
{
	var_147_object = Obj(); var_148_object = Obj();
	CreateDiaryEntry(var_148_object, (int)74, (int)1, (int)512156);
	var_152_bool = 0; var_153_object = Obj(); var_154_int = 0;
	var_148_object = var_153_object;
	func_5939(var_152_bool, var_153_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5364()
{
	func_5874();
	var_155_bool = 0; var_156_string = ""; var_157_string = "";
	func_5134(var_155_bool, "quest_d3_01", "completed");
	return 0;
}


func_3060(var_2_object, var_424_string)
{
	var_425_bool = 0;
	func_5198(var_425_bool);
	var_426_bool = var_425_bool == 0; //@nz
	if(var_426_bool != 0) {
		return 0;
	}
	var_427_bool = var_424_string == var_2_object;
	if(var_427_bool != 0) {
		return 0;
	}
	var_428_string = ""; var_429_bool = 0;
	var_424_string = var_428_string;
	var_431_bool = var_424_string == "";
	if(var_431_bool != 0) {
		var_429_bool = 0;
	} else {
		var_429_bool = 1;
	}
	func_4996(var_428_string, var_429_bool);
	var_2_object = var_424_string;
	return 0;
	
}


func_4086(var_0_object, var_1_object, var_2_object, var_3_string, var_791_object, var_792_object)
{
	var_0_object = var_792_object;
	var_1_object = var_791_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_798_string = "";
		func_4149(var_792_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_4119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xffa";
	}
Label_4119:
	var_816_bool = 0;
	func_5198(var_816_bool);
	if(var_816_bool != 0) {

	Label_4123:
		lshWaitForAnimEnd();
		var_817_string = var_3_string;
		if(var_817_string != 0) {
		} else {
			var_818_string = "";
			var_818_string = var_2_object;
			func_4980(var_818_string);
			goto Label_4123;
	}
		PlayAnimation("all", "idle");

	Label_4138:
		WaitForAnimEnd();
		var_821_string = var_3_string;
		if(var_821_string != 0) {
			goto Label_4148;
		}
		PlayAnimation("all", "idle");
		goto Label_4138;
	}
	goto Label_4148;
	
Label_4148:
	return 0;
	
}


func_5623(var_656_bool)
{
	var_658_int = 0; var_659_string = "";
	func_5049(var_658_int, "ood6Rubin1");
	var_661_bool = var_658_int == (int)0;
	if(var_661_bool != 0) {
		var_656_bool = 1;
		return 0;
	}
	var_656_bool = 0;
	return 0;
}


func_5110(var_297_bool, var_298_object, var_299_string)
{
	var_300_int = 0; var_301_bool = 0; var_302_int = 0; var_303_bool = 0;
	GetInvItemByName(var_302_int, var_299_string);
	@@var_298_object:HasItem(var_302_int, var_303_bool);
	var_303_bool = var_297_bool;
	return 4;
}


func_4345(var_0_object, var_1_object, var_2_object, var_3_string, var_850_object, var_851_object)
{
	var_0_object = var_851_object;
	var_1_object = var_850_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_857_string = "";
		func_4403(var_851_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_4373;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10fd";
	}
Label_4373:
	var_872_bool = 0;
	func_5198(var_872_bool);
	if(var_872_bool != 0) {

	Label_4377:
		lshWaitForAnimEnd();
		var_873_string = var_3_string;
		if(var_873_string != 0) {
		} else {
			var_874_string = "";
			var_874_string = var_2_object;
			func_4980(var_874_string);
			goto Label_4377;
	}
		PlayAnimation("all", "idle");

	Label_4392:
		WaitForAnimEnd();
		var_877_string = var_3_string;
		if(var_877_string != 0) {
			goto Label_4402;
		}
		PlayAnimation("all", "idle");
		goto Label_4392;
	}
	goto Label_4402;
	
Label_4402:
	return 0;
	
}


func_5117(var_163_bool, var_164_object, var_165_string)
{
	var_166_int = 0; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_int = 0; var_171_bool = 0;
	GetInvItemByName(var_169_int, var_165_string);
	GetInvItemProperty(var_170_int, var_169_int, "Category");
	@@var_164_object:RemoveItemByType(var_171_bool, var_169_int, var_170_int);
	var_173_bool = var_171_bool;
	if(var_173_bool != 0) {
		var_174_int = 0; var_175_int = 0;
		var_169_int = var_174_int;
		func_5066(var_174_int, (int)1);
	}
	var_171_bool = var_163_bool;
	return 6;
}


func_5374()
{
	SetVariable("d3RubinToldWhereIsSimon", (int)1);
	return 0;
}


func_5887()
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateDiaryEntry(var_68_object, (int)139, (int)1, (int)515339);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_68_object = var_73_object;
	func_5939(var_72_bool, var_73_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


