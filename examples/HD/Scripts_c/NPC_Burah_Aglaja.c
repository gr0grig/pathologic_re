// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Threat|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Isee|W:Confusion|W:Arrogance|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:.bin|W:Door |W: not found|W:locked|A:SetProperty|A:HasItem|W:ui/NPC_Aglaja.png|W:ui/NPC_Aglaja_b.png|W:boiny@door1|W:b7q01|W:b7q01AglajaGotoStarshina|W:pt_map_starshina|A:AddMark|W:quest_b7_01|W:completed|W:b7q03|W:b7q03AglajaGotoTheater|W:pt_map_theater|W:quest_b7_03|W:place_birdmask|W:oob7Aglaja1|W:b8q01|W:oob8Aglaja1|W:quest_b8_01|W:oob8Aglaja2|W:oob11Aglaja1|W:oob11Aglaja2|W:oob9Aglaja1|W:oob9Aglaja2|W:map_chertez_state|W:map_chertez_force|W:pt_map_aglaja|A:ShowMap|W:b7q03SerumWorks|W:b8q03|W:b11q01|W:b9q03BadInit|W:b9q03BonefiresCount|W:burah_serum|W:disease|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_aglaja
// @GLOBALS: 0:object:
// @RUN_OP: 0xf66
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x141 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x611 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x998 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbb3 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc7e vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd82 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf0e vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0xfaf vars=int
// @EVENT_6: op=0xfd5 vars=
// @EVENT_5: op=0xfe4 vars=
// @EVENT_45: op=0xff1 vars=bool
// @EVENT_0: op=0xffd vars=object
// @PE: 0x51,0x12b,0x141,0x57c,0x5fb,0x611,0x920,0x982,0x998,0xb63,0xb9d,0xbb3,0xc2e,0xc68,0xc7e,0xcf9,0xd6c,0xd82,0xebe,0xef8,0xf0e,0xf66,0xfaf,0xfd5,0xff1,0x11ee,0x1229,0x1247,0x1274,0x127a,0x1284,0x1290,0x1296,0x12a0,0x12a6,0x12ac,0x12b2,0x12b8,0x12be,0x12cf,0x12e0,0x12f0,0x12fc,0x1308,0x1314,0x1320,0x132c,0x1338,0x1344,0x1350,0x1372,0x137e,0x138a,0x1396,0x13a2,0x13ae,0x13ba,0x13c6,0x13d2,0x13dc,0x13e8,0x13f3

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4501();
		var_41_bool = var_37_cvector == (int)22226;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4656();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_4649();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_4798();
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_4832(var_110_object);
		}
		var_136_bool = var_37_cvector == (int)22533;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_4689();
		}
		var_180_bool = var_37_cvector == (int)22241;
		if(var_180_bool != 0) {
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_4679();
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_4815();
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_4832(var_205_object);
		}
		var_207_bool = var_37_cvector == (int)32055;
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_4679();
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_4815();
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_4832(var_213_object);
		}
		var_215_bool = var_37_cvector == (int)22537;
		if(var_215_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_4730();
		}
		var_230_bool = var_37_cvector == (int)32066;
		if(var_230_bool != 0) {
			var_231_object = Obj(); var_232_object = Obj();
			var_231_object = var_1_object;
			var_232_object = var_0_object;
			func_4730();
		}
		var_234_bool = var_36_bool == (int)22225;
		if(var_234_bool != 0) {
			var_235_bool = 0; var_236_object = Obj();
			var_236_object = var_1_object;
			func_5084(var_236_object);
			if(var_235_bool != 0) {
				var_241_string = "";
				func_299(var_37_cvector, "Threat");
				@@@var_0_object:SetMessage((int)521012);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530692, (int)29681, (int)31984);
				@@@var_0_object:AddReply((int)528310, (int)-1, (int)29680);
				return 0;
			}
			var_265_bool = 0;
			var_265_bool = 0;
			var_266_bool = 0;
			var_266_bool = 0;
			var_267_bool = 0; var_268_object = Obj();
			var_268_object = var_1_object;
			func_4848(var_268_object);
			if(var_267_bool != 0) {
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_4860(var_274_object);
				if(var_273_bool != 0) {
					var_266_bool = 1;
				}
			}
			if(var_266_bool != 0) {
				var_279_bool = 0; var_280_object = Obj();
				var_280_object = var_1_object;
				func_5096(var_279_bool, var_280_object);
				if(var_279_bool != 0) {
					var_265_bool = 1;
				}
			}
			if(var_265_bool != 0) {
				var_288_object = Obj(); var_289_object = Obj();
				var_288_object = var_1_object;
				var_289_object = var_0_object;
				func_4724();
				var_292_string = "";
				func_299(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)521347);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530713, (int)32015, (int)32014);
				@@@var_0_object:AddReply((int)530721, (int)32015, (int)32022);
				return 0;
			}
			var_300_string = "";
			func_299(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521014);
			@@@var_0_object:ClearReplies();
			var_302_bool = 0;
			var_302_bool = 0;
			var_303_bool = 0; var_304_object = Obj();
			var_304_object = var_1_object;
			func_5096(var_303_bool, var_304_object);
			if(var_303_bool != 0) {
				var_305_bool = 0; var_306_object = Obj();
				var_306_object = var_1_object;
				func_5107(var_306_object);
				if(var_305_bool != 0) {
					var_302_bool = 1;
				}
			}
			if(var_302_bool != 0) {
				@@@var_0_object:AddReply((int)521043, (int)22240, (int)22239);
			}
			var_314_bool = 0;
			var_314_bool = 1;
			var_315_bool = 0;
			var_315_bool = 0;
			var_316_bool = 0;
			var_316_bool = 0;
			var_317_bool = 0; var_318_object = Obj();
			var_318_object = var_1_object;
			func_4872(var_318_object);
			if(var_317_bool != 0) {
				var_323_bool = 0; var_324_object = Obj();
				var_324_object = var_1_object;
				func_5074(var_323_bool, var_324_object);
				if(var_323_bool != 0) {
					var_316_bool = 1;
				}
			}
			if(var_316_bool != 0) {
				var_331_bool = 0; var_332_object = Obj();
				var_332_object = var_1_object;
				func_4896(var_332_object);
				var_337_bool = var_331_bool == 0; //@nz
				if(var_337_bool != 0) {
					var_315_bool = 1;
				}
			}
			if(var_315_bool != 1) {
				var_338_bool = 0;
				var_338_bool = 0;
				var_339_bool = 0; var_340_object = Obj();
				var_340_object = var_1_object;
				func_4884(var_340_object);
				if(var_339_bool != 0) {
					var_345_bool = 0; var_346_object = Obj();
					var_346_object = var_1_object;
					func_4896(var_346_object);
					var_347_bool = var_345_bool == 0; //@nz
					if(var_347_bool != 0) {
						var_338_bool = 1;
					}
				}
				if(var_338_bool != 1) {
					var_314_bool = 0;
				}
			}
			if(var_314_bool != 0) {
				@@@var_0_object:AddReply((int)521348, (int)22536, (int)22535);
			}
			var_351_bool = 0;
			var_351_bool = 0;
			var_352_bool = 0; var_353_object = Obj();
			var_353_object = var_1_object;
			func_4872(var_353_object);
			if(var_352_bool != 0) {
				var_354_bool = 0; var_355_object = Obj();
				var_355_object = var_1_object;
				func_5074(var_354_bool, var_355_object);
				var_356_bool = var_354_bool == 0; //@nz
				if(var_356_bool != 0) {
					var_351_bool = 1;
				}
			}
			if(var_351_bool != 0) {
				@@@var_0_object:AddReply((int)521360, (int)22548, (int)22547);
			}
			@@@var_0_object:AddReply((int)521015, (int)-1, (int)22228);
			@@@var_0_object:AddReply((int)528324, (int)-1, (int)29694);
			return 0;
		}
		var_367_bool = var_36_bool == (int)22548;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)521361);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521362, (int)32067, (int)22549);
			@@@var_0_object:AddReply((int)530760, (int)32069, (int)32068);
			return 0;
		}
		var_377_bool = var_36_bool == (int)32067;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530762, (int)32069, (int)32070);
			@@@var_0_object:AddReply((int)530763, (int)32069, (int)32071);
			return 0;
		}
		var_387_bool = var_36_bool == (int)32069;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_299(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530764, (int)-1, (int)32074);
			@@@var_0_object:AddReply((int)530765, (int)-1, (int)32075);
			return 0;
		}
		var_397_bool = var_36_bool == (int)22536;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_299(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521349);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530749, (int)32057, (int)32056);
			return 0;
		}
		var_404_bool = var_36_bool == (int)32057;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530751, (int)32062, (int)32058);
			@@@var_0_object:AddReply((int)530752, (int)32060, (int)32059);
			return 0;
		}
		var_414_bool = var_36_bool == (int)32062;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530754);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530755, (int)32060, (int)32063);
			@@@var_0_object:AddReply((int)530756, (int)32065, (int)32064);
			return 0;
		}
		var_424_bool = var_36_bool == (int)32065;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530758, (int)-1, (int)32066);
			return 0;
		}
		var_431_bool = var_36_bool == (int)32060;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521350, (int)-1, (int)22537);
			return 0;
		}
		var_438_bool = var_36_bool == (int)22240;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)521044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530731, (int)32036, (int)32035);
			return 0;
		}
		var_445_bool = var_36_bool == (int)32036;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530732);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530733, (int)32038, (int)32037);
			@@@var_0_object:AddReply((int)530741, (int)32046, (int)32045);
			return 0;
		}
		var_455_bool = var_36_bool == (int)32046;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_299(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530742);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530743, (int)32048, (int)32047);
			@@@var_0_object:AddReply((int)530745, (int)32048, (int)32049);
			return 0;
		}
		var_465_bool = var_36_bool == (int)32048;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_299(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530746, (int)32038, (int)32051);
			@@@var_0_object:AddReply((int)530747, (int)32038, (int)32052);
			return 0;
		}
		var_475_bool = var_36_bool == (int)32038;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_299(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530734);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530735, (int)32041, (int)32039);
			return 0;
		}
		var_482_bool = var_36_bool == (int)32041;
		if(var_482_bool != 0) {
			var_483_string = "";
			func_299(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530738, (int)32043, (int)32042);
			return 0;
		}
		var_489_bool = var_36_bool == (int)32043;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530740, (int)32040, (int)32044);
			return 0;
		}
		var_496_bool = var_36_bool == (int)32040;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530736);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521045, (int)-1, (int)22241);
			@@@var_0_object:AddReply((int)530748, (int)-1, (int)32055);
			return 0;
		}
		var_506_bool = var_36_bool == (int)32015;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530714);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530722, (int)32024, (int)32023);
			@@@var_0_object:AddReply((int)530715, (int)32017, (int)32016);
			return 0;
		}
		var_516_bool = var_36_bool == (int)32024;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530724, (int)32026, (int)32025);
			return 0;
		}
		var_523_bool = var_36_bool == (int)32026;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530725);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530726, (int)32029, (int)32027);
			return 0;
		}
		var_530_bool = var_36_bool == (int)32029;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530728);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530729, (int)32017, (int)32030);
			@@@var_0_object:AddReply((int)530730, (int)-1, (int)32031);
			return 0;
		}
		var_540_bool = var_36_bool == (int)32017;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530716);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530717, (int)32019, (int)32018);
			return 0;
		}
		var_547_bool = var_36_bool == (int)32019;
		if(var_547_bool != 0) {
			var_548_string = "";
			func_299(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521346, (int)-1, (int)22533);
			return 0;
		}
		var_554_bool = var_36_bool == (int)29681;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528312, (int)29683, (int)29682);
			@@@var_0_object:AddReply((int)530693, (int)29683, (int)31985);
			return 0;
		}
		var_564_bool = var_36_bool == (int)29683;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528314, (int)29685, (int)29684);
			@@@var_0_object:AddReply((int)530694, (int)29685, (int)31986);
			return 0;
		}
		var_574_bool = var_36_bool == (int)29685;
		if(var_574_bool != 0) {
			var_575_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528316, (int)29687, (int)29686);
			@@@var_0_object:AddReply((int)530695, (int)29687, (int)31988);
			return 0;
		}
		var_584_bool = var_36_bool == (int)29687;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_299(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528318, (int)29689, (int)29688);
			@@@var_0_object:AddReply((int)530696, (int)31991, (int)31990);
			return 0;
		}
		var_594_bool = var_36_bool == (int)31991;
		if(var_594_bool != 0) {
			var_595_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530697);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530698, (int)29689, (int)31992);
			return 0;
		}
		var_601_bool = var_36_bool == (int)29689;
		if(var_601_bool != 0) {
			var_602_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528320, (int)29691, (int)29690);
			@@@var_0_object:AddReply((int)530699, (int)29691, (int)31995);
			return 0;
		}
		var_611_bool = var_36_bool == (int)29691;
		if(var_611_bool != 0) {
			var_612_string = "";
			func_299(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528322, (int)29693, (int)29692);
			@@@var_0_object:AddReply((int)530704, (int)29693, (int)32001);
			return 0;
		}
		var_621_bool = var_36_bool == (int)29693;
		if(var_621_bool != 0) {
			var_622_string = "";
			func_299(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530700, (int)31998, (int)31997);
			@@@var_0_object:AddReply((int)530705, (int)31998, (int)32003);
			return 0;
		}
		var_631_bool = var_36_bool == (int)31998;
		if(var_631_bool != 0) {
			var_632_string = "";
			func_299(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530702, (int)32000, (int)31999);
			@@@var_0_object:AddReply((int)530710, (int)32000, (int)32008);
			return 0;
		}
		var_641_bool = var_36_bool == (int)32000;
		if(var_641_bool != 0) {
			var_642_string = "";
			func_299(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530706, (int)32005, (int)32004);
			@@@var_0_object:AddReply((int)530711, (int)32005, (int)32010);
			return 0;
		}
		var_651_bool = var_36_bool == (int)32005;
		if(var_651_bool != 0) {
			var_652_string = "";
			func_299(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530708, (int)32007, (int)32006);
			@@@var_0_object:AddReply((int)530712, (int)32007, (int)32011);
			return 0;
		}
		var_661_bool = var_36_bool == (int)32007;
		if(var_661_bool != 0) {
			var_662_string = "";
			func_299(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530709);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521013, (int)-1, (int)22226);
			return 0;
		}
		var_3_string = true;
		var_667_bool = 0;
		func_4647(var_667_bool);
		if(var_667_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x142";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4501();
		var_41_bool = var_37_cvector == (int)22552;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4740();
		}
		var_78_bool = var_37_cvector == (int)22557;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_4740();
		}
		var_82_bool = var_37_cvector == (int)22616;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_4758();
		}
		var_100_bool = var_37_cvector == (int)22671;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_4768();
		}
		var_106_bool = var_36_bool == (int)22551;
		if(var_106_bool != 0) {
			var_107_bool = 0; var_108_object = Obj();
			var_108_object = var_1_object;
			func_4908(var_108_object);
			if(var_107_bool != 0) {
				var_115_object = Obj(); var_116_object = Obj();
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_4752();
				var_119_string = "";
				func_1531(var_37_cvector, "Threat");
				@@@var_0_object:SetMessage((int)521373);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530766, (int)32077, (int)32076);
				@@@var_0_object:AddReply((int)530781, (int)32077, (int)32091);
				return 0;
			}
			var_143_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521376);
			@@@var_0_object:ClearReplies();
			var_145_bool = 0; var_146_object = Obj();
			var_146_object = var_1_object;
			func_4920(var_146_object);
			if(var_145_bool != 0) {
				@@@var_0_object:AddReply((int)521377, (int)22556, (int)22555);
			}
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_4932(var_155_object);
			if(var_154_bool != 0) {
				@@@var_0_object:AddReply((int)521436, (int)22615, (int)22614);
			}
			var_163_bool = 0;
			var_163_bool = 0;
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_4944(var_165_object);
			if(var_164_bool != 0) {
				var_180_bool = 0; var_181_object = Obj();
				var_181_object = var_1_object;
				func_4978(var_181_object);
				if(var_180_bool != 0) {
					var_163_bool = 1;
				}
			}
			if(var_163_bool != 0) {
				@@@var_0_object:AddReply((int)521510, (int)22672, (int)22671);
			}
			@@@var_0_object:AddReply((int)521380, (int)-1, (int)22558);
			@@@var_0_object:AddReply((int)530775, (int)-1, (int)32085);
			return 0;
		}
		var_196_bool = var_36_bool == (int)22672;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_1531(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)521511);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521512, (int)32155, (int)22673);
			@@@var_0_object:AddReply((int)530845, (int)32157, (int)32159);
			return 0;
		}
		var_206_bool = var_36_bool == (int)32155;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_1531(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)530841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530842, (int)32157, (int)32156);
			@@@var_0_object:AddReply((int)530846, (int)32166, (int)32161);
			return 0;
		}
		var_216_bool = var_36_bool == (int)32157;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_1531(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530844, (int)32163, (int)32158);
			@@@var_0_object:AddReply((int)530847, (int)32166, (int)32162);
			return 0;
		}
		var_226_bool = var_36_bool == (int)32163;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_1531(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530848);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530849, (int)32166, (int)32164);
			@@@var_0_object:AddReply((int)530850, (int)32166, (int)32165);
			return 0;
		}
		var_236_bool = var_36_bool == (int)32166;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_1531(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530852, (int)-1, (int)32170);
			@@@var_0_object:AddReply((int)530853, (int)-1, (int)32171);
			return 0;
		}
		var_246_bool = var_36_bool == (int)22615;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_1531(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)521437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530824, (int)32136, (int)32135);
			return 0;
		}
		var_253_bool = var_36_bool == (int)32136;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_1531(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)530825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530826, (int)32141, (int)32137);
			return 0;
		}
		var_260_bool = var_36_bool == (int)32141;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_1531(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530831, (int)32143, (int)32142);
			@@@var_0_object:AddReply((int)530834, (int)32150, (int)32145);
			return 0;
		}
		var_270_bool = var_36_bool == (int)32150;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530838);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530839, (int)32143, (int)32151);
			return 0;
		}
		var_277_bool = var_36_bool == (int)32143;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_1531(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530833, (int)32138, (int)32144);
			return 0;
		}
		var_284_bool = var_36_bool == (int)32138;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530827);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530828, (int)32140, (int)32139);
			@@@var_0_object:AddReply((int)530840, (int)32140, (int)32153);
			return 0;
		}
		var_294_bool = var_36_bool == (int)32140;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521438, (int)-1, (int)22616);
			return 0;
		}
		var_301_bool = var_36_bool == (int)22556;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530790, (int)32104, (int)32103);
			return 0;
		}
		var_308_bool = var_36_bool == (int)32104;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530792, (int)32106, (int)32105);
			return 0;
		}
		var_315_bool = var_36_bool == (int)32106;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_1531(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530794, (int)32108, (int)32107);
			return 0;
		}
		var_322_bool = var_36_bool == (int)32108;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530795);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521379, (int)-1, (int)22557);
			return 0;
		}
		var_329_bool = var_36_bool == (int)32077;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_1531(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530768, (int)32079, (int)32078);
			@@@var_0_object:AddReply((int)530787, (int)32100, (int)32099);
			return 0;
		}
		var_339_bool = var_36_bool == (int)32100;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530789, (int)32079, (int)32101);
			return 0;
		}
		var_346_bool = var_36_bool == (int)32079;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530770, (int)32081, (int)32080);
			return 0;
		}
		var_353_bool = var_36_bool == (int)32081;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_1531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530771);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530772, (int)32083, (int)32082);
			return 0;
		}
		var_360_bool = var_36_bool == (int)32083;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_1531(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530774, (int)32086, (int)32084);
			@@@var_0_object:AddReply((int)530782, (int)32086, (int)32093);
			return 0;
		}
		var_370_bool = var_36_bool == (int)32086;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_1531(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530776);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530777, (int)32088, (int)32087);
			return 0;
		}
		var_377_bool = var_36_bool == (int)32088;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_1531(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530779, (int)32090, (int)32089);
			return 0;
		}
		var_384_bool = var_36_bool == (int)32090;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_1531(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530780);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530783, (int)32096, (int)32095);
			return 0;
		}
		var_391_bool = var_36_bool == (int)32096;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_1531(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)530784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530796, (int)32110, (int)32109);
			@@@var_0_object:AddReply((int)521375, (int)32113, (int)22553);
			return 0;
		}
		var_401_bool = var_36_bool == (int)32113;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_1531(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530800);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530801, (int)-1, (int)32114);
			@@@var_0_object:AddReply((int)530802, (int)-1, (int)32115);
			return 0;
		}
		var_411_bool = var_36_bool == (int)32110;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_1531(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530798, (int)32112, (int)32111);
			return 0;
		}
		var_418_bool = var_36_bool == (int)32112;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_1531(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521374, (int)-1, (int)22552);
			return 0;
		}
		var_3_string = true;
		var_424_bool = 0;
		func_4647(var_424_bool);
		if(var_424_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x612";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4501();
		var_41_bool = var_37_cvector == (int)24419;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4780();
		}
		var_47_bool = var_36_bool == (int)23236;
		if(var_47_bool != 0) {
			var_48_bool = 0; var_49_object = Obj();
			var_49_object = var_1_object;
			func_5002(var_49_object);
			if(var_48_bool != 0) {
				var_56_object = Obj(); var_57_object = Obj();
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_4774();
				var_60_string = "";
				func_2434(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)522067);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523208, (int)24405, (int)24404);
				@@@var_0_object:AddReply((int)523226, (int)24424, (int)24423);
				@@@var_0_object:AddReply((int)523222, (int)-1, (int)24418);
				return 0;
			}
			var_87_string = "";
			func_2434(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522071);
			@@@var_0_object:ClearReplies();
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_5014(var_90_object);
			if(var_89_bool != 0) {
				@@@var_0_object:AddReply((int)523223, (int)24425, (int)24419);
			}
			@@@var_0_object:AddReply((int)522072, (int)-1, (int)23241);
			return 0;
		}
		var_102_bool = var_36_bool == (int)24425;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_2434(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)523228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523229, (int)24428, (int)24426);
			return 0;
		}
		var_109_bool = var_36_bool == (int)24428;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_2434(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)523231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523232, (int)-1, (int)24429);
			return 0;
		}
		var_116_bool = var_36_bool == (int)24424;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_2434(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)523227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523235, (int)24411, (int)24433);
			@@@var_0_object:AddReply((int)523236, (int)-1, (int)24434);
			return 0;
		}
		var_126_bool = var_36_bool == (int)24405;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_2434(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)523209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523210, (int)24409, (int)24406);
			@@@var_0_object:AddReply((int)523214, (int)24411, (int)24410);
			return 0;
		}
		var_136_bool = var_36_bool == (int)24411;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_2434(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)523215);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523216, (int)24413, (int)24412);
			@@@var_0_object:AddReply((int)523237, (int)24437, (int)24436);
			return 0;
		}
		var_146_bool = var_36_bool == (int)24437;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_2434(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)523238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523239, (int)24439, (int)24438);
			return 0;
		}
		var_153_bool = var_36_bool == (int)24439;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_2434(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)523240);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523241, (int)24417, (int)24440);
			return 0;
		}
		var_160_bool = var_36_bool == (int)24413;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_2434(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)523217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523218, (int)24415, (int)24414);
			return 0;
		}
		var_167_bool = var_36_bool == (int)24415;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_2434(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)523219);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522068, (int)23238, (int)23237);
			return 0;
		}
		var_174_bool = var_36_bool == (int)23238;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_2434(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)522069);
			@@@var_0_object:ClearReplies();
			var_177_bool = 0; var_178_object = Obj();
			var_178_object = var_1_object;
			func_4990(var_178_object);
			if(var_177_bool != 0) {
				@@@var_0_object:AddReply((int)522073, (int)23243, (int)23242);
			}
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_4990(var_187_object);
			var_188_bool = var_186_bool == 0; //@nz
			if(var_188_bool != 0) {
				@@@var_0_object:AddReply((int)522070, (int)-1, (int)23239);
			}
			return 0;
		}
		var_193_bool = var_36_bool == (int)23243;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_2434(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)522074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522075, (int)24408, (int)23244);
			@@@var_0_object:AddReply((int)523211, (int)-1, (int)24407);
			return 0;
		}
		var_203_bool = var_36_bool == (int)24408;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_2434(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)523212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523234, (int)-1, (int)24432);
			return 0;
		}
		var_210_bool = var_36_bool == (int)24409;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_2434(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)523213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523220, (int)24417, (int)24416);
			return 0;
		}
		var_217_bool = var_36_bool == (int)24417;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_2434(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)523221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523233, (int)23238, (int)24430);
			return 0;
		}
		var_3_string = true;
		var_223_bool = 0;
		func_4647(var_223_bool);
		if(var_223_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x999";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4501();
		var_41_bool = var_36_bool == (int)31305;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2973(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529923, (int)-1, (int)31306);
			@@@var_0_object:AddReply((int)529924, (int)-1, (int)31307);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_4647(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb4";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4501();
		var_41_bool = var_36_bool == (int)31325;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_3176(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)529942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529943, (int)-1, (int)31326);
			@@@var_0_object:AddReply((int)529944, (int)-1, (int)31327);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_4647(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc7f";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_4501();
		var_41_bool = var_37_cvector == (int)31732;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_4786();
		}
		var_47_bool = var_37_cvector == (int)31735;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_4792();
		}
		var_53_bool = var_36_bool == (int)31731;
		if(var_53_bool != 0) {
			var_54_string = "";
			func_3436(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530357);
			@@@var_0_object:ClearReplies();
			var_72_bool = 0;
			var_72_bool = 0;
			var_73_bool = 0;
			var_73_bool = 0;
			var_74_bool = 0; var_75_object = Obj();
			var_75_object = var_1_object;
			func_5038(var_75_object);
			if(var_74_bool != 0) {
				var_82_bool = 0; var_83_object = Obj();
				var_83_object = var_1_object;
				func_5026(var_83_object);
				var_88_bool = var_82_bool == 0; //@nz
				if(var_88_bool != 0) {
					var_73_bool = 1;
				}
			}
			if(var_73_bool != 0) {
				var_89_bool = 0; var_90_object = Obj();
				var_90_object = var_1_object;
				func_5050(var_90_object);
				if(var_89_bool != 0) {
					var_72_bool = 1;
				}
			}
			if(var_72_bool != 0) {
				@@@var_0_object:AddReply((int)530358, (int)32319, (int)31732);
			}
			var_98_bool = 0;
			var_98_bool = 0;
			var_99_bool = 0;
			var_99_bool = 0;
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_5038(var_101_object);
			if(var_100_bool != 0) {
				var_102_bool = 0; var_103_object = Obj();
				var_103_object = var_1_object;
				func_5026(var_103_object);
				if(var_102_bool != 0) {
					var_99_bool = 1;
				}
			}
			if(var_99_bool != 0) {
				var_104_bool = 0; var_105_object = Obj();
				var_105_object = var_1_object;
				func_5062(var_105_object);
				if(var_104_bool != 0) {
					var_98_bool = 1;
				}
			}
			if(var_98_bool != 0) {
				@@@var_0_object:AddReply((int)530361, (int)31736, (int)31735);
			}
			@@@var_0_object:AddReply((int)530916, (int)-1, (int)32243);
			@@@var_0_object:AddReply((int)530917, (int)-1, (int)32244);
			return 0;
		}
		var_120_bool = var_36_bool == (int)31736;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_3436(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530363, (int)32326, (int)31737);
			@@@var_0_object:AddReply((int)530998, (int)-1, (int)32325);
			return 0;
		}
		var_130_bool = var_36_bool == (int)32326;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_3436(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531000, (int)32329, (int)32327);
			@@@var_0_object:AddReply((int)531001, (int)-1, (int)32328);
			return 0;
		}
		var_140_bool = var_36_bool == (int)32329;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_3436(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)531002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531003, (int)-1, (int)32330);
			@@@var_0_object:AddReply((int)531004, (int)-1, (int)32331);
			return 0;
		}
		var_150_bool = var_36_bool == (int)32319;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_3436(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530996, (int)31733, (int)32321);
			@@@var_0_object:AddReply((int)530997, (int)31733, (int)32323);
			@@@var_0_object:AddReply((int)530995, (int)-1, (int)32320);
			return 0;
		}
		var_163_bool = var_36_bool == (int)31733;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_3436(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)530359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530360, (int)-1, (int)31734);
			@@@var_0_object:AddReply((int)530993, (int)-1, (int)32318);
			return 0;
		}
		var_3_string = true;
		var_172_bool = 0;
		func_4647(var_172_bool);
		if(var_172_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd83";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_4501();
		var_41_bool = var_36_int == (int)31972;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_3832(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530683, (int)31974, (int)31973);
			@@@var_0_object:AddReply((int)530688, (int)31974, (int)31978);
			return 0;
		}
		var_67_bool = var_36_int == (int)31974;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_3832(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530685, (int)31976, (int)31975);
			@@@var_0_object:AddReply((int)530689, (int)31976, (int)31979);
			return 0;
		}
		var_77_bool = var_36_int == (int)31976;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3832(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)530686);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530687, (int)-1, (int)31977);
			@@@var_0_object:AddReply((int)530690, (int)-1, (int)31980);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_4647(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf0f";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_4011();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_4225(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_3980(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_3960(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_4508(Obj());
				var_82_object = var_81_object;
				func_4375(var_80_bool, var_81_object);
			}
		} else {
			func_3975(var_36_int);
			func_4002();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_4193();
	func_4011();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_4011();
	var_37_string = "";
	func_4455("Neutral");
	func_4002();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_4002();
	} else {
		var_43_string = "";
		func_4455("Neutral");
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
		func_4193();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_4216(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_5338(var_54_object);
		var_885_string = "";
		func_4455("Neutral");
		func_4011();
		func_4002();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3946(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_418_int, var_419_object)
{
	var_421_object = Obj(); var_422_bool = 0; var_423_int = 0; var_424_bool = 0; var_425_object = Obj(); var_426_bool = 0; var_427_int = 0; var_428_bool = 0;
	var_0_object = var_419_object;
	var_429_bool = 0; var_430_object = Obj(); var_431_float = 0;
	var_419_object = var_430_object;
	func_4230(var_429_bool, var_430_object, (float)70.0);
	var_432_bool = var_429_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_418_int = -2;
		return 8;
	}
	CreateDialog(var_425_object);
	var_433_int = 0;
	func_4641(var_433_int);
	@@var_425_object:SetNPCName(var_433_int);
	var_434_int = 0;
	func_4639(var_434_int);
	@@var_425_object:SetNPCDescription(var_434_int);
	var_435_string = "";
	func_4643(var_435_string);
	@@var_425_object:SetPhoto(var_435_string);
	var_436_string = "";
	func_4645(var_436_string);
	@@var_425_object:SetPhoto2(var_436_string);
	var_437_int = 0;
	func_5321(var_437_int);
	@@var_425_object:SetPlayerName(var_437_int);
	IsOverrideActive(var_426_bool);
	var_438_bool = var_426_bool;
	if(var_438_bool != 0) {
		var_418_int = -2;
		return 8;
	}
	DoDialog(var_425_object);
	var_439_bool = 0; var_440_object = Obj();
	func_4508(Obj());
	var_441_object = var_440_object;
	func_4317(var_439_bool, var_440_object);
	var_442_object = Obj(); var_443_object = Obj();
	var_419_object = var_442_object;
	var_425_object = var_443_object;
	TaskCall(1);
	func_81(var_444_object, var_445_object, var_446_string, var_447_bool, var_442_object, var_443_object);
	TaskReturn();
	@@var_425_object:IsDialogEnd(var_428_bool);
	
Label_63:
	var_581_bool = var_428_bool == 0; //@nz
	if(var_581_bool != 0) {
		sync();
		@@var_425_object:IsDialogEnd(var_428_bool);
		goto Label_63;
	}
	var_419_object = Obj();
	func_4299();
	StopDialog(var_425_object);
	@@var_425_object:GetReturnValue((int)-1);
	var_427_int = var_418_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5126()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)259, (int)1, (int)521031);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_5243(var_67_bool, var_68_object, (int)253);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4615(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = "";
	var_64_int = var_61_int;
	if(var_64_int != 0) {
		"idle" = "idle" + var_61_int;
	}
	var_63_string = var_60_string;
	return 2;
}


func_4872(var_532_bool)
{
	var_534_int = 0; var_535_string = "";
	func_4524(var_534_int, "b7q03");
	var_537_bool = var_534_int == (int)2;
	if(var_537_bool != 0) {
		var_532_bool = 1;
		return 0;
	}
	var_532_bool = 0;
	return 0;
}


func_4622(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_57_int = 0;
	
Label_4624:
	var_60_string = ""; var_61_int = 0;
	var_57_int = var_61_int;
	func_4615(var_60_string, var_61_int);
	HasAnimation(var_58_bool, "all", var_60_string);
	var_65_bool = var_58_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_57_int = var_57_int + (int)1;
		goto Label_4624;
	}
	var_57_int = var_54_int;
	return 4;
	
}


func_2834(var_0_object, var_301_int, var_302_object)
{
	var_304_object = Obj(); var_305_bool = 0; var_306_int = 0; var_307_bool = 0; var_308_object = Obj(); var_309_bool = 0; var_310_int = 0; var_311_bool = 0;
	var_0_object = var_302_object;
	var_312_bool = 0; var_313_object = Obj(); var_314_float = 0;
	var_302_object = var_313_object;
	func_4230(var_312_bool, var_313_object, (float)70.0);
	var_315_bool = var_312_bool == 0; //@nz
	if(var_315_bool != 0) {
		var_301_int = -2;
		return 8;
	}
	CreateDialog(var_308_object);
	var_316_int = 0;
	func_4641(var_316_int);
	@@var_308_object:SetNPCName(var_316_int);
	var_317_int = 0;
	func_4639(var_317_int);
	@@var_308_object:SetNPCDescription(var_317_int);
	var_318_string = "";
	func_4643(var_318_string);
	@@var_308_object:SetPhoto(var_318_string);
	var_319_string = "";
	func_4645(var_319_string);
	@@var_308_object:SetPhoto2(var_319_string);
	var_320_int = 0;
	func_5321(var_320_int);
	@@var_308_object:SetPlayerName(var_320_int);
	IsOverrideActive(var_309_bool);
	var_321_bool = var_309_bool;
	if(var_321_bool != 0) {
		var_301_int = -2;
		return 8;
	}
	DoDialog(var_308_object);
	var_322_bool = 0; var_323_object = Obj();
	func_4508(Obj());
	var_324_object = var_323_object;
	func_4317(var_322_bool, var_323_object);
	var_325_object = Obj(); var_326_object = Obj();
	var_302_object = var_325_object;
	var_308_object = var_326_object;
	TaskCall(7);
	func_2915(var_327_object, var_328_object, var_329_string, var_330_bool, var_325_object, var_326_object);
	TaskReturn();
	@@var_308_object:IsDialogEnd(var_311_bool);
	
Label_2897:
	var_355_bool = var_311_bool == 0; //@nz
	if(var_355_bool != 0) {
		sync();
		@@var_308_object:IsDialogEnd(var_311_bool);
		goto Label_2897;
	}
	var_302_object = Obj();
	func_4299();
	StopDialog(var_308_object);
	@@var_308_object:GetReturnValue((int)-1);
	var_310_int = var_301_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5139()
{
	var_183_object = Obj(); var_184_object = Obj();
	CreateDiaryEntry(var_184_object, (int)261, (int)1, (int)521033);
	var_188_bool = 0; var_189_object = Obj(); var_190_int = 0;
	var_184_object = var_189_object;
	func_5243(var_188_bool, var_189_object, (int)253);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4884(var_554_bool)
{
	var_556_int = 0; var_557_string = "";
	func_4524(var_556_int, "b7q03SerumWorks");
	var_559_bool = var_556_int != (int)0;
	if(var_559_bool != 0) {
		var_554_bool = 1;
		return 0;
	}
	var_554_bool = 0;
	return 0;
}


func_4375(var_142_bool, var_143_object)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = "";
	var_149_string = "c";
	var_150_int = 0;
	
Label_4378:
	if((int)1 != 0) {
		var_156_int = var_150_int + (int)1;
		var_157_int = var_149_string + var_156_int;
		@@var_143_object:HasProperty(var_157_int, var_151_bool);
		var_158_bool = var_151_bool == 0; //@nz
		if(var_158_bool != 0) {
		} else {
			var_150_int = var_150_int + (int)1;
			goto Label_4378;
		}
	}
	var_159_bool = var_150_int == 0; //@nz
	if(var_159_bool != 0) {
		var_142_bool = 0;
		return 10;
	}
	var_152_int = 0;
	var_161_bool = var_150_int > (int)1;
	if(var_161_bool != 0) {
		irand(var_152_int, var_150_int);
	}
	var_163_int = var_152_int + (int)1;
	var_164_int = var_149_string + var_163_int;
	@@var_143_object:GetProperty(var_164_int, var_153_string);
	var_165_bool = 0; var_166_string = "";
	var_153_string = var_166_string;
	func_4486(var_165_bool, var_166_string);
	var_165_bool = var_142_bool;
	return 10;
	
}


func_4122()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0;
	WaitForAnimEnd();
	var_52_bool = 0;
	func_4225(var_52_bool);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 12;
	}
	func_4622((int)0);
	var_54_int = var_46_int;
	var_47_int = 0;
	
Label_4136:
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_47_int < (int)5;
	if(var_69_bool != 0) {
		var_70_bool = 0;
		func_4225(var_70_bool);
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
				func_4615(var_81_string, var_82_int);
				PlayAnimation("all", var_81_string);
				WaitForAnimEnd(var_51_bool);
				var_83_bool = var_51_bool == 0; //@nz
				if(var_83_bool == 0) goto Label_4177;
				goto Label_4188;
		}
		Label_4177:
			var_74_bool = 0;
			func_4191(var_74_bool);
			var_75_bool = var_74_bool == 0; //@nz
			if(var_75_bool != 0) {
				goto Label_4188;
			}
			ResetAAS();
			var_47_int = var_47_int + (int)1;
			goto Label_4136;

		}
	}
Label_4188:
	ResetAAS();
	return 12;
	
}


func_4639(var_119_int)
{
	var_119_int = 515527;
	return 0;
}


func_5152()
{
	var_149_object = Obj(); var_150_object = Obj();
	CreateDiaryEntry(var_150_object, (int)280, (int)2, (int)521363);
	var_154_bool = 0; var_155_object = Obj(); var_156_int = 0;
	var_150_object = var_155_object;
	func_5243(var_154_bool, var_155_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4641(var_118_int)
{
	var_118_int = 513334;
	return 0;
}


func_4896(var_546_bool)
{
	var_548_int = 0; var_549_string = "";
	func_4524(var_548_int, "b7q03");
	var_551_bool = var_548_int == (int)1000;
	if(var_551_bool != 0) {
		var_546_bool = 1;
		return 0;
	}
	var_546_bool = 0;
	return 0;
}


func_4643(var_120_string)
{
	var_120_string = "ui/NPC_Aglaja.png";
	return 0;
}


func_2336(var_0_object, var_1_object, var_2_object, var_3_string, var_826_object, var_827_object)
{
	var_0_object = var_827_object;
	var_1_object = var_826_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_833_bool = 0; var_834_object = Obj();
		var_834_object = var_1_object;
		func_5002(var_834_object);
		if(var_833_bool != 0) {
			var_839_object = Obj(); var_840_object = Obj();
			var_839_object = var_1_object;
			var_840_object = var_0_object;
			func_4774();
			var_843_string = "";
			func_2434(var_827_object, "Neutral");
			@@@var_0_object:SetMessage((int)522067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523208, (int)24405, (int)24404);
			@@@var_0_object:AddReply((int)523226, (int)24424, (int)24423);
			@@@var_0_object:AddReply((int)523222, (int)-1, (int)24418);
		} else {
				var_869_string = "";
				func_2434(var_827_object, "Neutral");
				@@@var_0_object:SetMessage((int)522071);
				@@@var_0_object:ClearReplies();
				var_871_bool = 0; var_872_object = Obj();
				var_872_object = var_1_object;
				func_5014(var_872_object);
				if(var_871_bool != 0) {
					@@@var_0_object:AddReply((int)523223, (int)24425, (int)24419);
				}
				@@@var_0_object:AddReply((int)522072, (int)-1, (int)23241);
				goto Label_2404;
		}
	}
Label_2404:
	var_861_bool = 0;
	func_4647(var_861_bool);
	if(var_861_bool != 0) {

	Label_2408:
		lshWaitForAnimEnd();
		var_862_string = var_3_string;
		if(var_862_string != 0) {
		} else {
			var_863_string = "";
			var_863_string = var_2_object;
			func_4455(var_863_string);
			goto Label_2408;
	}
		PlayAnimation("all", "idle");

	Label_2423:
		WaitForAnimEnd();
		var_866_string = var_3_string;
		if(var_866_string != 0) {
			goto Label_2433;
		}
		PlayAnimation("all", "idle");
		goto Label_2423;

	}
	goto Label_2433;
	
Label_2433:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x924";


func_4645(var_121_string)
{
	var_121_string = "ui/NPC_Aglaja_b.png";
	return 0;
}


func_4647(var_113_bool)
{
	var_113_bool = 1;
	return 0;
}


func_4649()
{
	var_87_string = ""; var_88_bool = 0;
	func_4540("boiny@door1", (bool)0);
	return 0;
}


func_299(var_2_object, var_457_string)
{
	var_458_bool = 0;
	func_4647(var_458_bool);
	var_459_bool = var_458_bool == 0; //@nz
	if(var_459_bool != 0) {
		return 0;
	}
	var_460_bool = var_457_string == var_2_object;
	if(var_460_bool != 0) {
		return 0;
	}
	var_461_string = ""; var_462_bool = 0;
	var_457_string = var_461_string;
	var_464_bool = var_457_string == "";
	if(var_464_bool != 0) {
		var_462_bool = 0;
	} else {
		var_462_bool = 1;
	}
	func_4471(var_461_string, var_462_bool);
	var_2_object = var_457_string;
	return 0;
	
}


func_4908(var_616_bool)
{
	var_618_int = 0; var_619_string = "";
	func_4524(var_618_int, "oob8Aglaja1");
	var_621_bool = var_618_int == (int)0;
	if(var_621_bool != 0) {
		var_616_bool = 1;
		return 0;
	}
	var_616_bool = 0;
	return 0;
}


func_5165()
{
	var_157_object = Obj(); var_158_object = Obj();
	CreateDiaryEntry(var_158_object, (int)281, (int)2, (int)521364);
	var_162_bool = 0; var_163_object = Obj(); var_164_int = 0;
	var_158_object = var_163_object;
	func_5243(var_162_bool, var_163_object, (int)280);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3118(var_0_object, var_1_object, var_2_object, var_3_string, var_383_object, var_384_object)
{
	var_0_object = var_384_object;
	var_1_object = var_383_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_390_string = "";
		func_3176(var_384_object, "Confusion");
		@@@var_0_object:SetMessage((int)529942);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529943, (int)-1, (int)31326);
		@@@var_0_object:AddReply((int)529944, (int)-1, (int)31327);
		goto Label_3146;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc32";
	}
Label_3146:
	var_405_bool = 0;
	func_4647(var_405_bool);
	if(var_405_bool != 0) {

	Label_3150:
		lshWaitForAnimEnd();
		var_406_string = var_3_string;
		if(var_406_string != 0) {
		} else {
			var_407_string = "";
			var_407_string = var_2_object;
			func_4455(var_407_string);
			goto Label_3150;
	}
		PlayAnimation("all", "idle");

	Label_3165:
		WaitForAnimEnd();
		var_410_string = var_3_string;
		if(var_410_string != 0) {
			goto Label_3175;
		}
		PlayAnimation("all", "idle");
		goto Label_3165;
	}
	goto Label_3175;
	
Label_3175:
	return 0;
	
}


func_1323(var_0_object, var_585_int, var_586_object)
{
	var_588_object = Obj(); var_589_bool = 0; var_590_int = 0; var_591_bool = 0; var_592_object = Obj(); var_593_bool = 0; var_594_int = 0; var_595_bool = 0;
	var_0_object = var_586_object;
	var_596_bool = 0; var_597_object = Obj(); var_598_float = 0;
	var_586_object = var_597_object;
	func_4230(var_596_bool, var_597_object, (float)70.0);
	var_599_bool = var_596_bool == 0; //@nz
	if(var_599_bool != 0) {
		var_585_int = -2;
		return 8;
	}
	CreateDialog(var_592_object);
	var_600_int = 0;
	func_4641(var_600_int);
	@@var_592_object:SetNPCName(var_600_int);
	var_601_int = 0;
	func_4639(var_601_int);
	@@var_592_object:SetNPCDescription(var_601_int);
	var_602_string = "";
	func_4643(var_602_string);
	@@var_592_object:SetPhoto(var_602_string);
	var_603_string = "";
	func_4645(var_603_string);
	@@var_592_object:SetPhoto2(var_603_string);
	var_604_int = 0;
	func_5321(var_604_int);
	@@var_592_object:SetPlayerName(var_604_int);
	IsOverrideActive(var_593_bool);
	var_605_bool = var_593_bool;
	if(var_605_bool != 0) {
		var_585_int = -2;
		return 8;
	}
	DoDialog(var_592_object);
	var_606_bool = 0; var_607_object = Obj();
	func_4508(Obj());
	var_608_object = var_607_object;
	func_4317(var_606_bool, var_607_object);
	var_609_object = Obj(); var_610_object = Obj();
	var_586_object = var_609_object;
	var_592_object = var_610_object;
	TaskCall(3);
	func_1404(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object);
	TaskReturn();
	@@var_592_object:IsDialogEnd(var_595_bool);
	
Label_1386:
	var_701_bool = var_595_bool == 0; //@nz
	if(var_701_bool != 0) {
		sync();
		@@var_592_object:IsDialogEnd(var_595_bool);
		goto Label_1386;
	}
	var_586_object = Obj();
	func_4299();
	StopDialog(var_592_object);
	@@var_592_object:GetReturnValue((int)-1);
	var_594_int = var_585_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4656()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("b7q01", (int)7);
	func_5271(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_4576(var_59_float);
	@@var_45_object:AddMark("b7q01AglajaGotoStarshina", "pt_map_starshina", (int)1, (int)521027, var_59_float);
	func_5126();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4920(var_651_bool)
{
	var_653_int = 0; var_654_string = "";
	func_4524(var_653_int, "b8q01");
	var_656_bool = var_653_int == (int)0;
	if(var_656_bool != 0) {
		var_651_bool = 1;
		return 0;
	}
	var_651_bool = 0;
	return 0;
}


func_5178()
{
	var_218_object = Obj(); var_219_object = Obj();
	CreateDiaryEntry(var_219_object, (int)283, (int)2, (int)521366);
	var_223_bool = 0; var_224_object = Obj(); var_225_int = 0;
	var_219_object = var_224_object;
	func_5243(var_223_bool, var_224_object, (int)280);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4412(var_173_bool, var_174_object)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = "";
	var_186_int = 0;
	func_4581(var_186_int);
	var_192_int = "d" + var_186_int;
	var_180_string = var_192_int + "m";
	var_181_int = 0;
	
Label_4421:
	if((int)1 != 0) {
		var_196_int = var_181_int + (int)1;
		var_197_int = var_180_string + var_196_int;
		@@var_174_object:HasProperty(var_197_int, var_182_bool);
		var_198_bool = var_182_bool == 0; //@nz
		if(var_198_bool != 0) {
		} else {
			var_181_int = var_181_int + (int)1;
			goto Label_4421;
		}
	}
	var_199_bool = var_181_int == 0; //@nz
	if(var_199_bool != 0) {
		var_173_bool = 0;
		return 10;
	}
	var_183_int = 0;
	var_201_bool = var_181_int > (int)1;
	if(var_201_bool != 0) {
		irand(var_183_int, var_181_int);
	}
	var_203_int = var_183_int + (int)1;
	var_204_int = var_180_string + var_203_int;
	@@var_174_object:GetProperty(var_204_int, var_184_string);
	var_205_bool = 0; var_206_string = "";
	var_184_string = var_206_string;
	func_4486(var_205_bool, var_206_string);
	var_205_bool = var_173_bool;
	return 10;
	
}


func_4932(var_660_bool)
{
	var_662_int = 0; var_663_string = "";
	func_4524(var_662_int, "b8q01");
	var_665_bool = var_662_int == (int)7;
	if(var_665_bool != 0) {
		var_660_bool = 1;
		return 0;
	}
	var_660_bool = 0;
	return 0;
}


func_4679()
{
	func_5139();
	var_191_bool = 0; var_192_string = ""; var_193_string = "";
	func_4564(var_191_bool, "quest_b7_01", "completed");
	return 0;
}


func_5191()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)284, (int)1, (int)521455);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_5243(var_51_bool, var_52_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4944(var_670_bool)
{
	var_672_bool = 0;
	var_672_bool = 0;
	var_673_bool = 0;
	var_673_bool = 0;
	var_674_int = 0; var_675_string = "";
	func_4524(var_674_int, "b8q03");
	var_677_bool = var_674_int != (int)0;
	if(var_677_bool != 0) {
		var_678_int = 0; var_679_string = "";
		func_4524(var_678_int, "b8q03");
		var_681_bool = var_678_int != (int)1000;
		if(var_681_bool != 0) {
			var_673_bool = 1;
		}
	}
	if(var_673_bool != 0) {
		var_682_int = 0; var_683_string = "";
		func_4524(var_682_int, "b8q03");
		var_685_bool = var_682_int != (int)-1;
		if(var_685_bool != 0) {
			var_672_bool = 1;
		}
	}
	if(var_672_bool != 0) {
		var_670_bool = 1;
		return 0;
	}
	var_670_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_442_object, var_443_object)
{
	var_0_object = var_443_object;
	var_1_object = var_442_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_449_bool = 0; var_450_object = Obj();
		var_450_object = var_1_object;
		func_5084(var_450_object);
		if(var_449_bool != 0) {
			var_457_string = "";
			func_299(var_443_object, "Threat");
			@@@var_0_object:SetMessage((int)521012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530692, (int)29681, (int)31984);
			@@@var_0_object:AddReply((int)528310, (int)-1, (int)29680);
		} else {
				var_480_bool = 0;
				var_480_bool = 0;
				var_481_bool = 0;
				var_481_bool = 0;
				var_482_bool = 0; var_483_object = Obj();
				var_483_object = var_1_object;
				func_4848(var_483_object);
				if(var_482_bool != 0) {
					var_488_bool = 0; var_489_object = Obj();
					var_489_object = var_1_object;
					func_4860(var_489_object);
					if(var_488_bool != 0) {
						var_481_bool = 1;
					}
				}
				if(var_481_bool != 0) {
					var_494_bool = 0; var_495_object = Obj();
					var_495_object = var_1_object;
					func_5096(var_494_bool, var_495_object);
					if(var_494_bool != 0) {
						var_480_bool = 1;
					}
				}
				if(var_480_bool != 0) {
					var_503_object = Obj(); var_504_object = Obj();
					var_503_object = var_1_object;
					var_504_object = var_0_object;
					func_4724();
					var_507_string = "";
					func_299(var_443_object, "Neutral");
					@@@var_0_object:SetMessage((int)521347);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)530713, (int)32015, (int)32014);
					@@@var_0_object:AddReply((int)530721, (int)32015, (int)32022);
					goto Label_269;
				}
				var_515_string = "";
				func_299(var_443_object, "Neutral");
				@@@var_0_object:SetMessage((int)521014);
				@@@var_0_object:ClearReplies();
				var_517_bool = 0;
				var_517_bool = 0;
				var_518_bool = 0; var_519_object = Obj();
				var_519_object = var_1_object;
				func_5096(var_518_bool, var_519_object);
				if(var_518_bool != 0) {
					var_520_bool = 0; var_521_object = Obj();
					var_521_object = var_1_object;
					func_5107(var_521_object);
					if(var_520_bool != 0) {
						var_517_bool = 1;
					}
				}
				if(var_517_bool != 0) {
					@@@var_0_object:AddReply((int)521043, (int)22240, (int)22239);
				}
				var_529_bool = 0;
				var_529_bool = 1;
				var_530_bool = 0;
				var_530_bool = 0;
				var_531_bool = 0;
				var_531_bool = 0;
				var_532_bool = 0; var_533_object = Obj();
				var_533_object = var_1_object;
				func_4872(var_533_object);
				if(var_532_bool != 0) {
					var_538_bool = 0; var_539_object = Obj();
					var_539_object = var_1_object;
					func_5074(var_538_bool, var_539_object);
					if(var_538_bool != 0) {
						var_531_bool = 1;
					}
				}
				if(var_531_bool != 0) {
					var_546_bool = 0; var_547_object = Obj();
					var_547_object = var_1_object;
					func_4896(var_547_object);
					var_552_bool = var_546_bool == 0; //@nz
					if(var_552_bool != 0) {
						var_530_bool = 1;
					}
				}
				if(var_530_bool != 1) {
					var_553_bool = 0;
					var_553_bool = 0;
					var_554_bool = 0; var_555_object = Obj();
					var_555_object = var_1_object;
					func_4884(var_555_object);
					if(var_554_bool != 0) {
						var_560_bool = 0; var_561_object = Obj();
						var_561_object = var_1_object;
						func_4896(var_561_object);
						var_562_bool = var_560_bool == 0; //@nz
						if(var_562_bool != 0) {
							var_553_bool = 1;
						}
					}
					if(var_553_bool != 1) {
						var_529_bool = 0;
					}
				}
				if(var_529_bool != 0) {
					@@@var_0_object:AddReply((int)521348, (int)22536, (int)22535);
				}
				var_566_bool = 0;
				var_566_bool = 0;
				var_567_bool = 0; var_568_object = Obj();
				var_568_object = var_1_object;
				func_4872(var_568_object);
				if(var_567_bool != 0) {
					var_569_bool = 0; var_570_object = Obj();
					var_570_object = var_1_object;
					func_5074(var_569_bool, var_570_object);
					var_571_bool = var_569_bool == 0; //@nz
					if(var_571_bool != 0) {
						var_566_bool = 1;
					}
				}
				if(var_566_bool != 0) {
					@@@var_0_object:AddReply((int)521360, (int)22548, (int)22547);
				}
				@@@var_0_object:AddReply((int)521015, (int)-1, (int)22228);
				@@@var_0_object:AddReply((int)528324, (int)-1, (int)29694);
				goto Label_269;
		}
	}
Label_269:
	var_472_bool = 0;
	func_4647(var_472_bool);
	if(var_472_bool != 0) {

	Label_273:
		lshWaitForAnimEnd();
		var_473_string = var_3_string;
		if(var_473_string != 0) {
		} else {
			var_474_string = "";
			var_474_string = var_2_object;
			func_4455(var_474_string);
			goto Label_273;
	}
		PlayAnimation("all", "idle");

	Label_288:
		WaitForAnimEnd();
		var_477_string = var_3_string;
		if(var_477_string != 0) {
			goto Label_298;
		}
		PlayAnimation("all", "idle");
		goto Label_288;

	}
	goto Label_298;
	
Label_298:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_4689()
{
	var_139_object = Obj(); var_140_object = Obj();
	SetVariable("b7q03", (int)1);
	func_5271(Obj());
	var_143_object = var_140_object;
	var_148_float = 0;
	func_4576(var_148_float);
	@@var_140_object:AddMark("b7q03AglajaGotoTheater", "pt_map_theater", (int)0, (int)521367, var_148_float);
	func_5152();
	func_5165();
	var_165_object = Obj(); var_166_string = "";
	func_4529(var_165_object, "quest_b7_03");
	var_173_bool = 0; var_174_string = ""; var_175_string = "";
	func_4564(var_173_bool, "quest_b7_03", "place_birdmask");
	return 2;
}
EMIT "Stack[-1] = 0";


func_5204()
{
	var_69_object = Obj(); var_70_object = Obj();
	CreateDiaryEntry(var_70_object, (int)285, (int)1, (int)521456);
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0;
	var_70_object = var_75_object;
	func_5243(var_74_bool, var_75_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4191(var_74_bool)
{
	var_74_bool = 1;
	return 0;
}


func_4193()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_5217()
{
	var_85_object = Obj(); var_86_object = Obj();
	CreateDiaryEntry(var_86_object, (int)292, (int)1, (int)521463);
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0;
	var_86_object = var_91_object;
	func_5243(var_90_bool, var_91_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2915(var_0_object, var_1_object, var_2_object, var_3_string, var_325_object, var_326_object)
{
	var_0_object = var_326_object;
	var_1_object = var_325_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_332_string = "";
		func_2973(var_326_object, "Neutral");
		@@@var_0_object:SetMessage((int)529922);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529923, (int)-1, (int)31306);
		@@@var_0_object:AddReply((int)529924, (int)-1, (int)31307);
		goto Label_2943;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb67";
	}
Label_2943:
	var_347_bool = 0;
	func_4647(var_347_bool);
	if(var_347_bool != 0) {

	Label_2947:
		lshWaitForAnimEnd();
		var_348_string = var_3_string;
		if(var_348_string != 0) {
		} else {
			var_349_string = "";
			var_349_string = var_2_object;
			func_4455(var_349_string);
			goto Label_2947;
	}
		PlayAnimation("all", "idle");

	Label_2962:
		WaitForAnimEnd();
		var_352_string = var_3_string;
		if(var_352_string != 0) {
			goto Label_2972;
		}
		PlayAnimation("all", "idle");
		goto Label_2962;
	}
	goto Label_2972;
	
Label_2972:
	return 0;
	
}


func_4198(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_4455(var_259_string)
{
	var_260_bool = 0; var_261_float = 0; var_262_float = 0; var_263_bool = 0; var_264_float = 0; var_265_float = 0;
	lshHasAnimation(var_263_bool, var_259_string);
	var_266_bool = var_263_bool;
	if(var_266_bool != 0) {
		lshGetAnimTimes(var_259_string, var_264_float, var_265_float);
		lshPlayAnimation(var_264_float, var_265_float, (bool)0);
	} else {
		var_269_int = "Can't find lsh animation : " + var_259_string;
		Trace(var_269_int);
	}
	return 6;
	
}


func_3176(var_2_object, var_390_string)
{
	var_391_bool = 0;
	func_4647(var_391_bool);
	var_392_bool = var_391_bool == 0; //@nz
	if(var_392_bool != 0) {
		return 0;
	}
	var_393_bool = var_390_string == var_2_object;
	if(var_393_bool != 0) {
		return 0;
	}
	var_394_string = ""; var_395_bool = 0;
	var_390_string = var_394_string;
	var_397_bool = var_390_string == "";
	if(var_397_bool != 0) {
		var_395_bool = 0;
	} else {
		var_395_bool = 1;
	}
	func_4471(var_394_string, var_395_bool);
	var_2_object = var_390_string;
	return 0;
	
}


func_3946(var_0_object)
{
	var_36_bool = 0;
	func_4225(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_3955:
	func_4122();
	goto Label_3955;
}
EMIT "Return(); Pop(0)";


func_3436(var_2_object, var_736_string)
{
	var_737_bool = 0;
	func_4647(var_737_bool);
	var_738_bool = var_737_bool == 0; //@nz
	if(var_738_bool != 0) {
		return 0;
	}
	var_739_bool = var_736_string == var_2_object;
	if(var_739_bool != 0) {
		return 0;
	}
	var_740_string = ""; var_741_bool = 0;
	var_736_string = var_740_string;
	var_743_bool = var_736_string == "";
	if(var_743_bool != 0) {
		var_741_bool = 0;
	} else {
		var_741_bool = 1;
	}
	func_4471(var_740_string, var_741_bool);
	var_2_object = var_736_string;
	return 0;
	
}


func_3693(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_0_object = var_60_object;
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0;
	var_60_object = var_71_object;
	func_4230(var_70_bool, var_71_object, (float)70.0);
	var_117_bool = var_70_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	CreateDialog(var_66_object);
	var_118_int = 0;
	func_4641(var_118_int);
	@@var_66_object:SetNPCName(var_118_int);
	var_119_int = 0;
	func_4639(var_119_int);
	@@var_66_object:SetNPCDescription(var_119_int);
	var_120_string = "";
	func_4643(var_120_string);
	@@var_66_object:SetPhoto(var_120_string);
	var_121_string = "";
	func_4645(var_121_string);
	@@var_66_object:SetPhoto2(var_121_string);
	var_122_int = 0;
	func_5321(var_122_int);
	@@var_66_object:SetPlayerName(var_122_int);
	IsOverrideActive(var_67_bool);
	var_130_bool = var_67_bool;
	if(var_130_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	DoDialog(var_66_object);
	var_131_bool = 0; var_132_object = Obj();
	func_4508(Obj());
	var_133_object = var_132_object;
	func_4317(var_131_bool, var_132_object);
	var_226_object = Obj(); var_227_object = Obj();
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(13);
	func_3774(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	@@var_66_object:IsDialogEnd(var_69_bool);
	
Label_3756:
	var_275_bool = var_69_bool == 0; //@nz
	if(var_275_bool != 0) {
		sync();
		@@var_66_object:IsDialogEnd(var_69_bool);
		goto Label_3756;
	}
	var_60_object = Obj();
	func_4299();
	StopDialog(var_66_object);
	@@var_66_object:GetReturnValue((int)-1);
	var_68_int = var_59_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4206(var_44_bool, var_45_cvector)
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


func_5230(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj();
	GetDiaryRoot(var_62_object);
	var_63_bool = var_62_object == 0; //@nz
	if(var_63_bool != 0) {
		Trace("Can't retrieve diary root");
		var_60_object = 0;
		return 2;
	}
	var_62_object = var_60_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4978(var_686_bool)
{
	var_688_int = 0; var_689_string = "";
	func_4524(var_688_int, "oob8Aglaja2");
	var_691_bool = var_688_int == (int)0;
	if(var_691_bool != 0) {
		var_686_bool = 1;
		return 0;
	}
	var_686_bool = 0;
	return 0;
}


func_4724()
{
	SetVariable("oob7Aglaja1", (int)1);
	return 0;
}


func_4471(var_237_string, var_238_bool)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0;
	lshHasAnimation(var_244_bool, var_237_string);
	var_247_bool = var_244_bool;
	if(var_247_bool != 0) {
		lshGetAnimTimes(var_237_string, var_245_float, var_246_float);
		lshPlayAnimation(var_245_float, var_246_float, var_238_bool);
	} else {
		var_249_int = "Can't find lsh animation : " + var_237_string;
		Trace(var_249_int);
	}
	return 6;
	
}


func_4216(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_4206(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_3960(var_61_bool)
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
	func_4216(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4730()
{
	func_5178();
	var_226_bool = 0; var_227_string = ""; var_228_string = "";
	func_4564(var_226_bool, "quest_b7_03", "completed");
	return 0;
}


func_5243(var_51_bool, var_52_object, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0;
	func_5230(Obj());
	var_60_object = var_57_object;
	@@var_57_object:Find(var_53_int, var_58_object);
	var_65_bool = var_58_object == 0; //@nz
	if(var_65_bool != 0) {
		var_67_int = "Can't find diary parent with id: " + var_53_int;
		Trace(var_67_int);
		var_51_bool = 0;
		return 6;
	}
	@@var_58_object:AddChild(var_52_object);
	SendWorldWndMessage((int)7);
	@@var_52_object:GetCategory(var_59_int);
	SetDiarySection(var_59_int);
	var_51_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1404(var_0_object, var_1_object, var_2_object, var_3_string, var_609_object, var_610_object)
{
	var_0_object = var_610_object;
	var_1_object = var_609_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_616_bool = 0; var_617_object = Obj();
		var_617_object = var_1_object;
		func_4908(var_617_object);
		if(var_616_bool != 0) {
			var_622_object = Obj(); var_623_object = Obj();
			var_622_object = var_1_object;
			var_623_object = var_0_object;
			func_4752();
			var_626_string = "";
			func_1531(var_610_object, "Threat");
			@@@var_0_object:SetMessage((int)521373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530766, (int)32077, (int)32076);
			@@@var_0_object:AddReply((int)530781, (int)32077, (int)32091);
		} else {
				var_649_string = "";
				func_1531(var_610_object, "Neutral");
				@@@var_0_object:SetMessage((int)521376);
				@@@var_0_object:ClearReplies();
				var_651_bool = 0; var_652_object = Obj();
				var_652_object = var_1_object;
				func_4920(var_652_object);
				if(var_651_bool != 0) {
					@@@var_0_object:AddReply((int)521377, (int)22556, (int)22555);
				}
				var_660_bool = 0; var_661_object = Obj();
				var_661_object = var_1_object;
				func_4932(var_661_object);
				if(var_660_bool != 0) {
					@@@var_0_object:AddReply((int)521436, (int)22615, (int)22614);
				}
				var_669_bool = 0;
				var_669_bool = 0;
				var_670_bool = 0; var_671_object = Obj();
				var_671_object = var_1_object;
				func_4944(var_671_object);
				if(var_670_bool != 0) {
					var_686_bool = 0; var_687_object = Obj();
					var_687_object = var_1_object;
					func_4978(var_687_object);
					if(var_686_bool != 0) {
						var_669_bool = 1;
					}
				}
				if(var_669_bool != 0) {
					@@@var_0_object:AddReply((int)521510, (int)22672, (int)22671);
				}
				@@@var_0_object:AddReply((int)521380, (int)-1, (int)22558);
				@@@var_0_object:AddReply((int)530775, (int)-1, (int)32085);
				goto Label_1501;
		}
	}
Label_1501:
	var_641_bool = 0;
	func_4647(var_641_bool);
	if(var_641_bool != 0) {

	Label_1505:
		lshWaitForAnimEnd();
		var_642_string = var_3_string;
		if(var_642_string != 0) {
		} else {
			var_643_string = "";
			var_643_string = var_2_object;
			func_4455(var_643_string);
			goto Label_1505;
	}
		PlayAnimation("all", "idle");

	Label_1520:
		WaitForAnimEnd();
		var_646_string = var_3_string;
		if(var_646_string != 0) {
			goto Label_1530;
		}
		PlayAnimation("all", "idle");
		goto Label_1520;

	}
	goto Label_1530;
	
Label_1530:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x580";


func_4990(var_177_bool)
{
	var_179_int = 0; var_180_string = "";
	func_4524(var_179_int, "b11q01");
	var_182_bool = var_179_int == (int)1000;
	if(var_182_bool != 0) {
		var_177_bool = 1;
		return 0;
	}
	var_177_bool = 0;
	return 0;
}


func_4225(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_2434(var_2_object, var_843_string)
{
	var_844_bool = 0;
	func_4647(var_844_bool);
	var_845_bool = var_844_bool == 0; //@nz
	if(var_845_bool != 0) {
		return 0;
	}
	var_846_bool = var_843_string == var_2_object;
	if(var_846_bool != 0) {
		return 0;
	}
	var_847_string = ""; var_848_bool = 0;
	var_843_string = var_847_string;
	var_850_bool = var_843_string == "";
	if(var_850_bool != 0) {
		var_848_bool = 0;
	} else {
		var_848_bool = 1;
	}
	func_4471(var_847_string, var_848_bool);
	var_2_object = var_843_string;
	return 0;
	
}


func_4740()
{
	SetVariable("b8q01", (int)1);
	func_5191();
	func_5204();
	return 0;
}


func_4230(var_70_bool, var_71_object, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0;
	@@var_71_object:GetPosition(var_83_cvector);
	@@var_71_object:GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	var_91_float = var_91_float + var_82_float;
	SetByIndex(var_83_cvector, 1) = var_91_float;
	GetPosition(var_84_cvector);
	GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	var_92_float = var_92_float + var_82_float;
	SetByIndex(var_84_cvector, 1) = var_92_float;
	var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_94_int = var_85_cvector | var_85_cvector;
	var_95_float = sqrt(var_94_int);
	var_85_cvector = var_85_cvector / var_95_float;
	var_86_cvector = -var_85_cvector;
	var_96_float = var_85_cvector * var_72_float;
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	var_98_cvector = var_86_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4514(var_97_cvector, var_98_cvector);
	var_106_float = var_97_cvector * (int)25;
	var_107_int = var_96_float + var_106_float;
	var_87_cvector = var_107_int - CVector(0.0, 10.0, 0.0);
	var_88_cvector = var_84_cvector + var_87_cvector;
	IsOverrideActive(var_89_bool);
	var_109_bool = var_89_bool;
	if(var_109_bool != 0) {
		var_70_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_88_cvector, var_86_cvector, (bool)1);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	Rotate(var_111_float, var_112_float);
	var_113_bool = 0;
	func_4647(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		HasAnimationTrack(var_90_bool, "head");
		var_115_bool = var_90_bool;
		if(var_115_bool == 0) goto Label_4293;
		LookAsyncCamera("head");
	}
Label_4293:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_70_bool = 1;
	return 18;
	
}


func_4486(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0;
	var_169_bool = 0;
	func_4647(var_169_bool);
	if(var_169_bool != 0) {
		lshHasSpeech(var_168_bool, var_166_string);
		var_170_bool = var_168_bool;
		if(var_170_bool != 0) {
			lshPlaySpeech(var_166_string);
			var_165_bool = 1;
			return 2;
		}
	}
	var_165_bool = 0;
	return 2;
}


func_3975(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_5002(var_833_bool)
{
	var_835_int = 0; var_836_string = "";
	func_4524(var_835_int, "oob11Aglaja1");
	var_838_bool = var_835_int == (int)0;
	if(var_838_bool != 0) {
		var_833_bool = 1;
		return 0;
	}
	var_833_bool = 0;
	return 0;
}


func_3980(var_44_bool)
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
	func_4198(var_51_float, var_52_object);
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


func_4752()
{
	SetVariable("oob8Aglaja1", (int)1);
	return 0;
}


func_4501()
{
	var_39_bool = 0;
	func_4647(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4758()
{
	func_5217();
	var_93_bool = 0; var_94_string = ""; var_95_string = "";
	func_4564(var_93_bool, "quest_b8_01", "completed");
	return 0;
}


func_5271(var_48_object)
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


func_5014(var_871_bool)
{
	var_873_int = 0; var_874_string = "";
	func_4524(var_873_int, "oob11Aglaja2");
	var_876_bool = var_873_int == (int)0;
	if(var_876_bool != 0) {
		var_871_bool = 1;
		return 0;
	}
	var_871_bool = 0;
	return 0;
}


func_4508(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj();
	self(var_135_object);
	var_135_object = var_133_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2973(var_2_object, var_332_string)
{
	var_333_bool = 0;
	func_4647(var_333_bool);
	var_334_bool = var_333_bool == 0; //@nz
	if(var_334_bool != 0) {
		return 0;
	}
	var_335_bool = var_332_string == var_2_object;
	if(var_335_bool != 0) {
		return 0;
	}
	var_336_string = ""; var_337_bool = 0;
	var_332_string = var_336_string;
	var_339_bool = var_332_string == "";
	if(var_339_bool != 0) {
		var_337_bool = 0;
	} else {
		var_337_bool = 1;
	}
	func_4471(var_336_string, var_337_bool);
	var_2_object = var_332_string;
	return 0;
	
}


func_4768()
{
	SetVariable("oob8Aglaja2", (int)1);
	return 0;
}


func_5026(var_753_bool)
{
	var_755_int = 0; var_756_string = "";
	func_4524(var_755_int, "b9q03BadInit");
	var_758_bool = var_755_int != (int)0;
	if(var_758_bool != 0) {
		var_753_bool = 1;
		return 0;
	}
	var_753_bool = 0;
	return 0;
}


func_4002()
{
	var_887_float = 0; var_888_float = 0;
	rand(var_888_float, (int)8, (int)16);
	SetTimer((int)10, var_888_float);
	return 2;
}


func_4514(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0;
	var_102_int = var_98_cvector | var_98_cvector;
	var_101_float = sqrt(var_102_int);
	var_103_float = 9.999999974752427e-07;
	var_104_bool = var_101_float < var_103_float;
	if(var_104_bool != 0) {
		var_97_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_97_cvector = var_98_cvector / var_101_float;
	return 2;
}


func_4774()
{
	SetVariable("oob11Aglaja1", (int)1);
	return 0;
}


func_5288(var_111_object, var_112_string, var_113_float)
{
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_object = Obj(); var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_object = Obj(); var_122_bool = 0;
	GetMainOutdoorScene(var_121_object);
	var_123_bool = var_121_object == 0; //@ne
	if(var_123_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_121_object:GetLocator(var_112_string, var_122_bool, var_119_cvector, var_120_cvector);
	var_125_bool = var_122_bool == 0; //@nz
	if(var_125_bool != 0) {
		var_127_int = "Warning: outdoor scene locator " + var_112_string;
		var_129_int = var_127_int + " doesnt exist";
		Trace(var_129_int);
	}
	@@var_121_object:GetMap(var_111_object);
	var_130_bool = var_111_object == 0; //@ne
	if(var_130_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_132_float = GetByIndex(var_119_cvector, 0);
	var_133_float = GetByIndex(var_119_cvector, 2);
	@@var_111_object:SetMapParams(var_132_float, var_133_float, var_113_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3240(var_0_object, var_705_int, var_706_object)
{
	var_708_object = Obj(); var_709_bool = 0; var_710_int = 0; var_711_bool = 0; var_712_object = Obj(); var_713_bool = 0; var_714_int = 0; var_715_bool = 0;
	var_0_object = var_706_object;
	var_716_bool = 0; var_717_object = Obj(); var_718_float = 0;
	var_706_object = var_717_object;
	func_4230(var_716_bool, var_717_object, (float)70.0);
	var_719_bool = var_716_bool == 0; //@nz
	if(var_719_bool != 0) {
		var_705_int = -2;
		return 8;
	}
	CreateDialog(var_712_object);
	var_720_int = 0;
	func_4641(var_720_int);
	@@var_712_object:SetNPCName(var_720_int);
	var_721_int = 0;
	func_4639(var_721_int);
	@@var_712_object:SetNPCDescription(var_721_int);
	var_722_string = "";
	func_4643(var_722_string);
	@@var_712_object:SetPhoto(var_722_string);
	var_723_string = "";
	func_4645(var_723_string);
	@@var_712_object:SetPhoto2(var_723_string);
	var_724_int = 0;
	func_5321(var_724_int);
	@@var_712_object:SetPlayerName(var_724_int);
	IsOverrideActive(var_713_bool);
	var_725_bool = var_713_bool;
	if(var_725_bool != 0) {
		var_705_int = -2;
		return 8;
	}
	DoDialog(var_712_object);
	var_726_bool = 0; var_727_object = Obj();
	func_4508(Obj());
	var_728_object = var_727_object;
	func_4317(var_726_bool, var_727_object);
	var_729_object = Obj(); var_730_object = Obj();
	var_706_object = var_729_object;
	var_712_object = var_730_object;
	TaskCall(11);
	func_3321(var_731_object, var_732_object, var_733_string, var_734_bool, var_729_object, var_730_object);
	TaskReturn();
	@@var_712_object:IsDialogEnd(var_715_bool);
	
Label_3303:
	var_798_bool = var_715_bool == 0; //@nz
	if(var_798_bool != 0) {
		sync();
		@@var_712_object:IsDialogEnd(var_715_bool);
		goto Label_3303;
	}
	var_706_object = Obj();
	func_4299();
	StopDialog(var_712_object);
	@@var_712_object:GetReturnValue((int)-1);
	var_714_int = var_705_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4011()
{
	KillTimer((int)10);
	return 0;
}


func_4780()
{
	SetVariable("oob11Aglaja2", (int)1);
	return 0;
}


func_4524(var_451_int, var_452_string)
{
	var_453_int = 0; var_454_int = 0;
	GetVariable(var_452_string, var_454_int);
	var_454_int = var_451_int;
	return 2;
}


func_5038(var_747_bool)
{
	var_749_int = 0; var_750_string = "";
	func_4524(var_749_int, "b9q03BonefiresCount");
	var_752_bool = var_749_int == (int)4;
	if(var_752_bool != 0) {
		var_747_bool = 1;
		return 0;
	}
	var_747_bool = 0;
	return 0;
}


func_4529(var_165_object, var_166_string)
{
	var_167_object = Obj(); var_168_object = Obj(); var_169_object = Obj(); var_170_object = Obj();
	GetMainOutdoorScene(var_169_object);
	var_172_int = var_166_string + ".bin";
	AddBlankActor(var_170_object, var_169_object, var_166_string, var_172_int);
	var_170_object = var_165_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4786()
{
	SetVariable("oob9Aglaja1", (int)1);
	return 0;
}


func_4792()
{
	SetVariable("oob9Aglaja2", (int)1);
	return 0;
}


func_5050(var_760_bool)
{
	var_762_int = 0; var_763_string = "";
	func_4524(var_762_int, "oob9Aglaja1");
	var_765_bool = var_762_int == (int)0;
	if(var_765_bool != 0) {
		var_760_bool = 1;
		return 0;
	}
	var_760_bool = 0;
	return 0;
}


func_4540(var_87_string, var_88_bool)
{
	var_89_object = Obj(); var_90_object = Obj();
	FindActor(var_90_object, var_87_string);
	var_91_bool = var_90_object == 0; //@nz
	if(var_91_bool != 0) {
		var_93_int = "Door " + var_87_string;
		var_95_int = var_93_int + " not found";
		Trace(var_95_int);
	} else {
		@@var_90_object:SetProperty("locked", var_88_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_4798()
{
	var_99_int = 0; var_100_string = "";
	func_4524(var_99_int, "map_chertez_state");
	var_104_bool = var_99_int <= (int)1;
	if(var_104_bool != 0) {
		SetVariable("map_chertez_state", (int)1);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_3774(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_233_string = "";
		func_3832(var_227_object, "Threat");
		@@@var_0_object:SetMessage((int)530682);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)530683, (int)31974, (int)31973);
		@@@var_0_object:AddReply((int)530688, (int)31974, (int)31978);
		goto Label_3802;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xec2";
	}
Label_3802:
	var_257_bool = 0;
	func_4647(var_257_bool);
	if(var_257_bool != 0) {

	Label_3806:
		lshWaitForAnimEnd();
		var_258_string = var_3_string;
		if(var_258_string != 0) {
		} else {
			var_259_string = "";
			var_259_string = var_2_object;
			func_4455(var_259_string);
			goto Label_3806;
	}
		PlayAnimation("all", "idle");

	Label_3821:
		WaitForAnimEnd();
		var_272_string = var_3_string;
		if(var_272_string != 0) {
			goto Label_3831;
		}
		PlayAnimation("all", "idle");
		goto Label_3821;
	}
	goto Label_3831;
	
Label_3831:
	return 0;
	
}


func_5062(var_775_bool)
{
	var_777_int = 0; var_778_string = "";
	func_4524(var_777_int, "oob9Aglaja2");
	var_780_bool = var_777_int == (int)0;
	if(var_780_bool != 0) {
		var_775_bool = 1;
		return 0;
	}
	var_775_bool = 0;
	return 0;
}


func_5321(var_122_int)
{
	var_123_int = 0; var_124_int = 0;
	GetVariable("branch", var_124_int);
	var_127_bool = var_124_int == (int)0;
	if(var_127_bool != 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0x14d8";
	}
	var_129_bool = var_124_int == (int)1;
	if(var_129_bool != 0) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
	return 2;
}


func_4299()
{
	var_277_bool = 0; var_278_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_280_bool = 0;
	func_4647(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		HasAnimationTrack(var_278_bool, "head");
		var_282_bool = var_278_bool;
		if(var_282_bool == 0) goto Label_4316;
		UnlookAsync("head");
	}
Label_4316:
	return 2;
	
}


func_4557(var_496_bool, var_497_object, var_498_string)
{
	var_499_int = 0; var_500_bool = 0; var_501_int = 0; var_502_bool = 0;
	GetInvItemByName(var_501_int, var_498_string);
	@@var_497_object:HasItem(var_501_int, var_502_bool);
	var_502_bool = var_496_bool;
	return 4;
}


func_4815()
{
	var_196_int = 0; var_197_string = "";
	func_4524(var_196_int, "map_chertez_state");
	var_199_bool = var_196_int <= (int)2;
	if(var_199_bool != 0) {
		SetVariable("map_chertez_state", (int)2);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_2255(var_0_object, var_802_int, var_803_object)
{
	var_805_object = Obj(); var_806_bool = 0; var_807_int = 0; var_808_bool = 0; var_809_object = Obj(); var_810_bool = 0; var_811_int = 0; var_812_bool = 0;
	var_0_object = var_803_object;
	var_813_bool = 0; var_814_object = Obj(); var_815_float = 0;
	var_803_object = var_814_object;
	func_4230(var_813_bool, var_814_object, (float)70.0);
	var_816_bool = var_813_bool == 0; //@nz
	if(var_816_bool != 0) {
		var_802_int = -2;
		return 8;
	}
	CreateDialog(var_809_object);
	var_817_int = 0;
	func_4641(var_817_int);
	@@var_809_object:SetNPCName(var_817_int);
	var_818_int = 0;
	func_4639(var_818_int);
	@@var_809_object:SetNPCDescription(var_818_int);
	var_819_string = "";
	func_4643(var_819_string);
	@@var_809_object:SetPhoto(var_819_string);
	var_820_string = "";
	func_4645(var_820_string);
	@@var_809_object:SetPhoto2(var_820_string);
	var_821_int = 0;
	func_5321(var_821_int);
	@@var_809_object:SetPlayerName(var_821_int);
	IsOverrideActive(var_810_bool);
	var_822_bool = var_810_bool;
	if(var_822_bool != 0) {
		var_802_int = -2;
		return 8;
	}
	DoDialog(var_809_object);
	var_823_bool = 0; var_824_object = Obj();
	func_4508(Obj());
	var_825_object = var_824_object;
	func_4317(var_823_bool, var_824_object);
	var_826_object = Obj(); var_827_object = Obj();
	var_803_object = var_826_object;
	var_809_object = var_827_object;
	TaskCall(5);
	func_2336(var_828_object, var_829_object, var_830_string, var_831_bool, var_826_object, var_827_object);
	TaskReturn();
	@@var_809_object:IsDialogEnd(var_812_bool);
	
Label_2318:
	var_883_bool = var_812_bool == 0; //@nz
	if(var_883_bool != 0) {
		sync();
		@@var_809_object:IsDialogEnd(var_812_bool);
		goto Label_2318;
	}
	var_803_object = Obj();
	func_4299();
	StopDialog(var_809_object);
	@@var_809_object:GetReturnValue((int)-1);
	var_811_int = var_802_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5074(var_538_bool, var_539_object)
{
	var_540_bool = 0; var_541_object = Obj();
	var_539_object = var_541_object;
	func_5119(var_540_bool, var_541_object);
	if(var_540_bool != 0) {
		var_538_bool = 1;
		return 0;
	}
	var_538_bool = 0;
	return 0;
}


func_4564(var_93_bool, var_94_string, var_95_string)
{
	var_96_object = Obj(); var_97_object = Obj();
	FindActor(var_97_object, var_94_string);
	var_98_bool = var_97_object == 0; //@ne
	if(var_98_bool != 0) {
		var_93_bool = 0;
		return 2;
	}
	Trigger(var_97_object, var_95_string);
	var_93_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5338(var_54_object)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("mt_aglaja", var_56_int);
	var_58_bool = var_56_int == 0; //@nz
	if(var_58_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_54_object = var_60_object;
		TaskCall(12);
		func_3693(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		SetVariable("mt_aglaja", (int)1);
	}
	var_286_bool = 0; var_287_int = 0;
	func_4596(var_286_bool, (int)8);
	if(var_286_bool != 0) {
		var_301_int = 0; var_302_object = Obj();
		var_54_object = var_302_object;
		TaskCall(6);
		func_2834(var_303_object, var_301_int, var_302_object);
		TaskReturn();
		return 2;
	}
	var_357_bool = 0; var_358_int = 0;
	func_4596(var_357_bool, (int)12);
	if(var_357_bool != 0) {
		var_359_int = 0; var_360_object = Obj();
		var_54_object = var_360_object;
		TaskCall(8);
		func_3037(var_361_object, var_359_int, var_360_object);
		TaskReturn();
		return 2;
	}
	var_415_bool = 0; var_416_int = 0;
	func_4590(var_415_bool, (int)7);
	if(var_415_bool != 0) {
		var_418_int = 0; var_419_object = Obj();
		var_54_object = var_419_object;
		TaskCall(0);
		func_0(var_420_object, var_418_int, var_419_object);
		TaskReturn();
		return 2;
	}
	var_583_bool = 0; var_584_int = 0;
	func_4590(var_583_bool, (int)8);
	if(var_583_bool != 0) {
		var_585_int = 0; var_586_object = Obj();
		var_54_object = var_586_object;
		TaskCall(2);
		func_1323(var_587_object, var_585_int, var_586_object);
		TaskReturn();
		return 2;
	}
	var_703_bool = 0; var_704_int = 0;
	func_4590(var_703_bool, (int)9);
	if(var_703_bool != 0) {
		var_705_int = 0; var_706_object = Obj();
		var_54_object = var_706_object;
		TaskCall(10);
		func_3240(var_707_object, var_705_int, var_706_object);
		TaskReturn();
		return 2;
	}
	var_800_bool = 0; var_801_int = 0;
	func_4590(var_800_bool, (int)11);
	if(var_800_bool != 0) {
		var_802_int = 0; var_803_object = Obj();
		var_54_object = var_803_object;
		TaskCall(4);
		func_2255(var_804_object, var_802_int, var_803_object);
		TaskReturn();
		return 2;
	}
	return 2;
}


func_5084(var_449_bool)
{
	var_451_int = 0; var_452_string = "";
	func_4524(var_451_int, "b7q01");
	var_456_bool = var_451_int == (int)6;
	if(var_456_bool != 0) {
		var_449_bool = 1;
		return 0;
	}
	var_449_bool = 0;
	return 0;
}


func_4317(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0;
	GetVariable("voice_common", var_138_int);
	var_141_int = var_138_int;
	if(var_141_int != 0) {
		var_142_bool = 0; var_143_object = Obj();
		var_132_object = var_143_object;
		func_4375(var_142_bool, var_143_object);
		var_172_bool = var_142_bool == 0; //@nz
		if(var_172_bool != 0) {
			var_173_bool = 0; var_174_object = Obj();
			var_132_object = var_174_object;
			func_4412(var_173_bool, var_174_object);
			var_208_bool = var_173_bool == 0; //@nz
			if(var_208_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		irand(var_139_int, (int)2);
		var_210_int = var_139_int;
		if(var_210_int != 0) {
			var_213_int = var_138_int + (int)1;
			var_215_int = var_213_int % (int)3;
			SetVariable("voice_common", var_215_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_218_bool = 0; var_219_object = Obj();
		var_132_object = var_219_object;
		func_4412(var_218_bool, var_219_object);
		var_220_bool = var_218_bool == 0; //@nz
		if(var_220_bool != 0) {
			var_221_bool = 0; var_222_object = Obj();
			var_132_object = var_222_object;
			func_4375(var_221_bool, var_222_object);
			var_223_bool = var_221_bool == 0; //@nz
			if(var_223_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4373;
	
Label_4373:
	var_131_bool = 1;
	return 4;
	
}


func_3037(var_0_object, var_359_int, var_360_object)
{
	var_362_object = Obj(); var_363_bool = 0; var_364_int = 0; var_365_bool = 0; var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0;
	var_0_object = var_360_object;
	var_370_bool = 0; var_371_object = Obj(); var_372_float = 0;
	var_360_object = var_371_object;
	func_4230(var_370_bool, var_371_object, (float)70.0);
	var_373_bool = var_370_bool == 0; //@nz
	if(var_373_bool != 0) {
		var_359_int = -2;
		return 8;
	}
	CreateDialog(var_366_object);
	var_374_int = 0;
	func_4641(var_374_int);
	@@var_366_object:SetNPCName(var_374_int);
	var_375_int = 0;
	func_4639(var_375_int);
	@@var_366_object:SetNPCDescription(var_375_int);
	var_376_string = "";
	func_4643(var_376_string);
	@@var_366_object:SetPhoto(var_376_string);
	var_377_string = "";
	func_4645(var_377_string);
	@@var_366_object:SetPhoto2(var_377_string);
	var_378_int = 0;
	func_5321(var_378_int);
	@@var_366_object:SetPlayerName(var_378_int);
	IsOverrideActive(var_367_bool);
	var_379_bool = var_367_bool;
	if(var_379_bool != 0) {
		var_359_int = -2;
		return 8;
	}
	DoDialog(var_366_object);
	var_380_bool = 0; var_381_object = Obj();
	func_4508(Obj());
	var_382_object = var_381_object;
	func_4317(var_380_bool, var_381_object);
	var_383_object = Obj(); var_384_object = Obj();
	var_360_object = var_383_object;
	var_366_object = var_384_object;
	TaskCall(9);
	func_3118(var_385_object, var_386_object, var_387_string, var_388_bool, var_383_object, var_384_object);
	TaskReturn();
	@@var_366_object:IsDialogEnd(var_369_bool);
	
Label_3100:
	var_413_bool = var_369_bool == 0; //@nz
	if(var_413_bool != 0) {
		sync();
		@@var_366_object:IsDialogEnd(var_369_bool);
		goto Label_3100;
	}
	var_360_object = Obj();
	func_4299();
	StopDialog(var_366_object);
	@@var_366_object:GetReturnValue((int)-1);
	var_368_int = var_359_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4832(var_110_object)
{
	var_111_object = Obj(); var_112_string = ""; var_113_float = 0;
	func_5271(Obj());
	var_114_object = var_111_object;
	func_5288(var_111_object, "pt_map_aglaja", (float)-1);
	var_134_object = Obj();
	func_5271(var_134_object);
	@@var_110_object:ShowMap(var_134_object);
	return 0;
}


func_4576(var_59_float)
{
	var_60_float = 0; var_61_float = 0;
	GetGameTime(var_61_float);
	var_61_float = var_59_float;
	return 2;
}


func_4581(var_186_int)
{
	var_187_float = 0; var_188_float = 0;
	GetGameTime(var_188_float);
	var_190_int = 0;
	var_190_int = var_188_float / (int)24;
	var_186_int = (int)1 + var_190_int;
	return 2;
}


func_5096(var_494_bool, var_495_object)
{
	var_496_bool = 0; var_497_object = Obj(); var_498_string = "";
	var_495_object = var_497_object;
	func_4557(var_496_bool, var_497_object, "burah_serum");
	if(var_496_bool != 0) {
		var_494_bool = 1;
		return 0;
	}
	var_494_bool = 0;
	return 0;
}


func_4590(var_415_bool, var_416_int)
{
	var_417_int = 0;
	func_4581(var_417_int);
	var_415_bool = var_417_int == var_416_int;
	return 0;
}


func_4848(var_482_bool)
{
	var_484_int = 0; var_485_string = "";
	func_4524(var_484_int, "b7q01");
	var_487_bool = var_484_int == (int)1000;
	if(var_487_bool != 0) {
		var_482_bool = 1;
		return 0;
	}
	var_482_bool = 0;
	return 0;
}


func_5107(var_520_bool)
{
	var_522_int = 0; var_523_string = "";
	func_4524(var_522_int, "b7q01");
	var_525_bool = var_522_int == (int)8;
	if(var_525_bool != 0) {
		var_520_bool = 1;
		return 0;
	}
	var_520_bool = 0;
	return 0;
}


func_4596(var_286_bool, var_287_int)
{
	var_288_float = 0; var_289_int = 0; var_290_int = 0; var_291_float = 0; var_292_int = 0; var_293_int = 0;
	GetGameTime(var_291_float);
	var_295_int = 0;
	var_295_int = var_291_float / (int)24;
	var_292_int = (int)1 + var_295_int;
	var_297_bool = var_292_int != var_287_int;
	if(var_297_bool != 0) {
		var_286_bool = 0;
		return 6;
	}
	var_298_int = 0;
	var_291_float = var_298_int;
	var_293_int = var_298_int % (int)24;
	var_286_bool = var_293_int < (int)7;
	return 6;
}


func_3832(var_2_object, var_233_string)
{
	var_234_bool = 0;
	func_4647(var_234_bool);
	var_235_bool = var_234_bool == 0; //@nz
	if(var_235_bool != 0) {
		return 0;
	}
	var_236_bool = var_233_string == var_2_object;
	if(var_236_bool != 0) {
		return 0;
	}
	var_237_string = ""; var_238_bool = 0;
	var_233_string = var_237_string;
	var_240_bool = var_233_string == "";
	if(var_240_bool != 0) {
		var_238_bool = 0;
	} else {
		var_238_bool = 1;
	}
	func_4471(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	return 0;
	
}


func_3321(var_0_object, var_1_object, var_2_object, var_3_string, var_729_object, var_730_object)
{
	var_0_object = var_730_object;
	var_1_object = var_729_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_736_string = "";
		func_3436(var_730_object, "Neutral");
		@@@var_0_object:SetMessage((int)530357);
		@@@var_0_object:ClearReplies();
		var_745_bool = 0;
		var_745_bool = 0;
		var_746_bool = 0;
		var_746_bool = 0;
		var_747_bool = 0; var_748_object = Obj();
		var_748_object = var_1_object;
		func_5038(var_748_object);
		if(var_747_bool != 0) {
			var_753_bool = 0; var_754_object = Obj();
			var_754_object = var_1_object;
			func_5026(var_754_object);
			var_759_bool = var_753_bool == 0; //@nz
			if(var_759_bool != 0) {
				var_746_bool = 1;
			}
		}
		if(var_746_bool != 0) {
			var_760_bool = 0; var_761_object = Obj();
			var_761_object = var_1_object;
			func_5050(var_761_object);
			if(var_760_bool != 0) {
				var_745_bool = 1;
			}
		}
		if(var_745_bool != 0) {
			@@@var_0_object:AddReply((int)530358, (int)32319, (int)31732);
		}
		var_769_bool = 0;
		var_769_bool = 0;
		var_770_bool = 0;
		var_770_bool = 0;
		var_771_bool = 0; var_772_object = Obj();
		var_772_object = var_1_object;
		func_5038(var_772_object);
		if(var_771_bool != 0) {
			var_773_bool = 0; var_774_object = Obj();
			var_774_object = var_1_object;
			func_5026(var_774_object);
			if(var_773_bool != 0) {
				var_770_bool = 1;
			}
		}
		if(var_770_bool != 0) {
			var_775_bool = 0; var_776_object = Obj();
			var_776_object = var_1_object;
			func_5062(var_776_object);
			if(var_775_bool != 0) {
				var_769_bool = 1;
			}
		}
		if(var_769_bool != 0) {
			@@@var_0_object:AddReply((int)530361, (int)31736, (int)31735);
		}
		@@@var_0_object:AddReply((int)530916, (int)-1, (int)32243);
		@@@var_0_object:AddReply((int)530917, (int)-1, (int)32244);
		goto Label_3406;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcfd";
	}
Label_3406:
	var_790_bool = 0;
	func_4647(var_790_bool);
	if(var_790_bool != 0) {

	Label_3410:
		lshWaitForAnimEnd();
		var_791_string = var_3_string;
		if(var_791_string != 0) {
		} else {
			var_792_string = "";
			var_792_string = var_2_object;
			func_4455(var_792_string);
			goto Label_3410;
	}
		PlayAnimation("all", "idle");

	Label_3425:
		WaitForAnimEnd();
		var_795_string = var_3_string;
		if(var_795_string != 0) {
			goto Label_3435;
		}
		PlayAnimation("all", "idle");
		goto Label_3425;
	}
	goto Label_3435;
	
Label_3435:
	return 0;
	
}


func_1531(var_2_object, var_626_string)
{
	var_627_bool = 0;
	func_4647(var_627_bool);
	var_628_bool = var_627_bool == 0; //@nz
	if(var_628_bool != 0) {
		return 0;
	}
	var_629_bool = var_626_string == var_2_object;
	if(var_629_bool != 0) {
		return 0;
	}
	var_630_string = ""; var_631_bool = 0;
	var_626_string = var_630_string;
	var_633_bool = var_626_string == "";
	if(var_633_bool != 0) {
		var_631_bool = 0;
	} else {
		var_631_bool = 1;
	}
	func_4471(var_630_string, var_631_bool);
	var_2_object = var_626_string;
	return 0;
	
}


func_4860(var_488_bool)
{
	var_490_int = 0; var_491_string = "";
	func_4524(var_490_int, "oob7Aglaja1");
	var_493_bool = var_490_int == (int)0;
	if(var_493_bool != 0) {
		var_488_bool = 1;
		return 0;
	}
	var_488_bool = 0;
	return 0;
}


func_5119(var_540_bool, var_541_object)
{
	var_542_float = 0; var_543_float = 0;
	@@var_541_object:GetProperty("disease", var_543_float);
	var_540_bool = var_543_float == (int)0;
	return 2;
}


