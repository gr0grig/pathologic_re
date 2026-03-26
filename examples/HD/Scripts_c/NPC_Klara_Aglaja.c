// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,Trigger/3,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Confusion|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Threat|W:Isee|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Aglaja.png|W:ui/NPC_Aglaja_b.png|W:beta_pills 5 is given|W:beta_pills|W:k7q01|W:quest_k7_01|W:place_danko|W:volonteers_klara|W:disease|W:alexandr|W:katerina|W:completed|W:ook8Aglaja1|W:k8q01|W:quest_k8_01|W:ook11Aglaja1|W:k11q01|W:ook9Aglaja1|W:k9q01|W:money1000 is given|W:playsound|W:givemoney|W:giveitem|W:ook7Aglaja1|W:ook8Aglaja2|W:ook9Aglaja2|W:ook7Aglaja2|W:ook7Aglaja3|W:ook8Aglaja3|W:ook8Aglaja4|W:ook8Aglaja5|W:ook9Aglaja3|W:ook9Aglaja4|W:ook9Aglaja5|W:ook10Aglaja1|W:ook10Aglaja2|W:ook10Aglaja3|W:ook10Aglaja4|W:ook11Aglaja2|W:ook11Aglaja3|W:ook11Aglaja4|W:ook11Aglaja5|W:K_Mission3|W:ook7Aglaja4|W:k7AglajaVisit|W:k8AglajaVisit|W:k9AglajaVisit|W:k11AglajaVisit|W:ook12AglajaNight1|W:feromicin is given|W:feromicin|W:gamma_pills is given|W:gamma_pills|W:delta_pills is given|W:delta_pills|W:monomicin is given|W:monomicin|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:Remove|W:branch|W:K2System|W:k2system_burah_day|W:k2system_danko_day|W:k2system_burah_state|W:k2system_danko_state|W:mt_aglaja
// @GLOBALS: 0:object:
// @RUN_OP: 0x1af6
// @RUN_TASK: 16
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xff vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x671 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc08 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1101 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1554 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x16a1 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x18ad vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1acc vars=int,int
// @TASK_16: vars=cvector params=0
// @EVENT_7: op=0x1b3f vars=int
// @EVENT_6: op=0x1b65 vars=
// @EVENT_5: op=0x1b74 vars=
// @EVENT_45: op=0x1b81 vars=bool
// @EVENT_0: op=0x1b8d vars=object
// @PE: 0x51,0xe9,0xff,0x588,0x65b,0x671,0xb1a,0xbf2,0xc08,0x1013,0x10eb,0x1101,0x1504,0x153e,0x1554,0x1642,0x168b,0x16a1,0x17f6,0x1897,0x18ad,0x1a7c,0x1ab6,0x1acc,0x1af6,0x1b3f,0x1b65,0x1b81,0x1d65,0x1db4,0x1e02,0x1e3d,0x1e44,0x1e4b,0x1e56,0x1e67,0x1e7d,0x1e87,0x1e8d,0x1e99,0x1ea3,0x1ea9,0x1eb5,0x1ebe,0x1ec4,0x1ed0,0x1ed9,0x1ee3,0x1ee9,0x1eef,0x1ef5,0x1efb,0x1f01,0x1f07,0x1f0d,0x1f13,0x1f19,0x1f1f,0x1f24,0x1f2a,0x1f30,0x1f36,0x1f3c,0x1f42,0x1f48,0x1f4e,0x1f54,0x1f5a,0x1f60,0x1f87,0x1f9f,0x1fa5,0x1fab,0x1fb1,0x1fb7,0x1fbd,0x1fc3,0x1fca,0x1fd1,0x1fd8,0x1fda,0x1fe5,0x1ff0,0x1ffb,0x2006,0x2012,0x201e,0x202a,0x2036,0x2042,0x204e,0x205a,0x2066,0x2072,0x207e,0x208a,0x2096,0x20a0,0x20ac,0x20b8,0x20c4,0x20ce,0x20d8,0x20e2,0x20ec,0x20f6,0x2100,0x210c,0x2118,0x2124,0x2130,0x213c,0x2148,0x2154,0x2160,0x216c,0x2178,0x2184,0x2190,0x219c,0x21a8,0x21b4,0x21c0,0x21cc,0x21d8,0x21e3,0x21e9,0x21ef,0x21f5,0x21fb,0x2201

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_7502();
		var_46_bool = var_42_cvector == (int)27427;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_7766();
		}
		var_89_bool = var_42_cvector == (int)44129;
		if(var_89_bool != 0) {
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_8095();
		}
		var_95_bool = var_42_cvector == (int)27493;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_7783();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_8145(var_121_object);
		}
		var_161_bool = var_42_cvector == (int)27494;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_7805();
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_8138(var_176_object);
		}
		var_181_bool = var_42_cvector == (int)29548;
		if(var_181_bool != 0) {
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_7937();
		}
		var_187_bool = var_42_cvector == (int)29549;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_7943();
		}
		var_193_bool = var_42_cvector == (int)40522;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_7919();
		}
		var_199_bool = var_42_cvector == (int)40535;
		if(var_199_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_8131(var_201_object);
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_8038(var_206_object);
			var_229_object = Obj(); var_230_object = Obj();
			var_229_object = var_1_object;
			var_230_object = var_0_object;
			func_7907();
		}
		var_234_bool = var_41_bool == (int)27418;
		if(var_234_bool != 0) {
			var_235_bool = 0; var_236_object = Obj();
			var_236_object = var_1_object;
			func_8198(var_236_object);
			if(var_235_bool != 0) {
				var_243_object = Obj(); var_244_object = Obj();
				var_243_object = var_1_object;
				var_244_object = var_0_object;
				func_8071();
				var_269_object = Obj(); var_270_object = Obj();
				var_269_object = var_1_object;
				var_270_object = var_0_object;
				func_8101();
				var_273_string = "";
				func_233(var_42_cvector, "Confusion");
				@@@var_0_object:SetMessage((int)526139);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528171, (int)29526, (int)29525);
				@@@var_0_object:AddReply((int)528185, (int)29500, (int)29540);
				return 0;
			}
			var_297_object = Obj(); var_298_object = Obj();
			var_297_object = var_1_object;
			var_298_object = var_0_object;
			func_8101();
			var_299_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526149);
			@@@var_0_object:ClearReplies();
			var_301_bool = 0; var_302_object = Obj();
			var_302_object = var_1_object;
			func_8640(var_302_object);
			if(var_301_bool != 0) {
				@@@var_0_object:AddReply((int)541891, (int)44131, (int)44129);
			}
			var_310_bool = 0; var_311_object = Obj();
			var_311_object = var_1_object;
			func_8222(var_311_object);
			if(var_310_bool != 0) {
				@@@var_0_object:AddReply((int)526208, (int)29542, (int)27489);
			}
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_object;
			func_8448(var_320_object);
			if(var_319_bool != 0) {
				@@@var_0_object:AddReply((int)528192, (int)29552, (int)29548);
			}
			var_328_bool = 0; var_329_object = Obj();
			var_329_object = var_1_object;
			func_8460(var_329_object);
			if(var_328_bool != 0) {
				@@@var_0_object:AddReply((int)528193, (int)29562, (int)29549);
			}
			var_337_bool = 0;
			var_337_bool = 0;
			var_338_bool = 0; var_339_object = Obj();
			var_339_object = var_1_object;
			func_8342(var_338_bool, var_339_object);
			if(var_338_bool != 0) {
				var_356_bool = 0; var_357_object = Obj();
				var_357_object = var_1_object;
				func_8352(var_357_object);
				if(var_356_bool != 0) {
					var_337_bool = 1;
				}
			}
			if(var_337_bool != 0) {
				@@@var_0_object:AddReply((int)538631, (int)40523, (int)40522);
			}
			@@@var_0_object:AddReply((int)526150, (int)-1, (int)27429);
			return 0;
		}
		var_369_bool = var_41_bool == (int)40523;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)538632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538633, (int)40526, (int)40524);
			@@@var_0_object:AddReply((int)538634, (int)40528, (int)40525);
			return 0;
		}
		var_379_bool = var_41_bool == (int)40528;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)538636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538637, (int)40532, (int)40529);
			@@@var_0_object:AddReply((int)538639, (int)40532, (int)40531);
			return 0;
		}
		var_389_bool = var_41_bool == (int)40526;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)538635);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538638, (int)40532, (int)40530);
			return 0;
		}
		var_396_bool = var_41_bool == (int)40532;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)538640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538641, (int)-1, (int)40535);
			@@@var_0_object:AddReply((int)541892, (int)-1, (int)44130);
			return 0;
		}
		var_406_bool = var_41_bool == (int)29562;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_233(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528206, (int)-1, (int)29563);
			@@@var_0_object:AddReply((int)541051, (int)-1, (int)43153);
			return 0;
		}
		var_416_bool = var_41_bool == (int)29552;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528195);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528196, (int)29554, (int)29553);
			@@@var_0_object:AddReply((int)541889, (int)-1, (int)44126);
			return 0;
		}
		var_426_bool = var_41_bool == (int)29554;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_233(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528198, (int)29558, (int)29555);
			@@@var_0_object:AddReply((int)541890, (int)29556, (int)44127);
			return 0;
		}
		var_436_bool = var_41_bool == (int)29556;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_233(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528200, (int)29558, (int)29557);
			return 0;
		}
		var_443_bool = var_41_bool == (int)29558;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_233(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528201);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528202, (int)29560, (int)29559);
			return 0;
		}
		var_450_bool = var_41_bool == (int)29560;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528203);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528204, (int)-1, (int)29561);
			@@@var_0_object:AddReply((int)541888, (int)-1, (int)44125);
			return 0;
		}
		var_460_bool = var_41_bool == (int)29542;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_233(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528187, (int)27490, (int)29543);
			@@@var_0_object:AddReply((int)541884, (int)44121, (int)44120);
			return 0;
		}
		var_470_bool = var_41_bool == (int)44121;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_233(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)541885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541886, (int)27490, (int)44122);
			return 0;
		}
		var_477_bool = var_41_bool == (int)27490;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_233(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)526209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528188, (int)29545, (int)29544);
			@@@var_0_object:AddReply((int)541913, (int)29545, (int)44155);
			return 0;
		}
		var_487_bool = var_41_bool == (int)29545;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526210, (int)29546, (int)27491);
			@@@var_0_object:AddReply((int)541914, (int)44158, (int)44157);
			return 0;
		}
		var_497_bool = var_41_bool == (int)44158;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541916, (int)27492, (int)44159);
			return 0;
		}
		var_504_bool = var_41_bool == (int)29546;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528191, (int)27492, (int)29547);
			@@@var_0_object:AddReply((int)528194, (int)27492, (int)29550);
			return 0;
		}
		var_514_bool = var_41_bool == (int)27492;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526211);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526212, (int)-1, (int)27493);
			@@@var_0_object:AddReply((int)526213, (int)-1, (int)27494);
			return 0;
		}
		var_524_bool = var_41_bool == (int)44131;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_233(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)541893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541894, (int)44137, (int)44132);
			@@@var_0_object:AddReply((int)541895, (int)44134, (int)44133);
			return 0;
		}
		var_534_bool = var_41_bool == (int)44134;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_233(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)541896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541897, (int)44137, (int)44135);
			@@@var_0_object:AddReply((int)541898, (int)44140, (int)44136);
			return 0;
		}
		var_544_bool = var_41_bool == (int)44137;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541900, (int)44140, (int)44138);
			return 0;
		}
		var_551_bool = var_41_bool == (int)44140;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541902, (int)44144, (int)44141);
			@@@var_0_object:AddReply((int)541903, (int)44144, (int)44143);
			return 0;
		}
		var_561_bool = var_41_bool == (int)44144;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541905, (int)44148, (int)44146);
			@@@var_0_object:AddReply((int)541906, (int)44151, (int)44147);
			return 0;
		}
		var_571_bool = var_41_bool == (int)44148;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541908, (int)44151, (int)44149);
			@@@var_0_object:AddReply((int)541909, (int)-1, (int)44150);
			return 0;
		}
		var_581_bool = var_41_bool == (int)44151;
		if(var_581_bool != 0) {
			var_582_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541911, (int)-1, (int)44153);
			@@@var_0_object:AddReply((int)541912, (int)-1, (int)44154);
			return 0;
		}
		var_591_bool = var_41_bool == (int)29526;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526140, (int)29500, (int)27419);
			@@@var_0_object:AddReply((int)541042, (int)43140, (int)43139);
			return 0;
		}
		var_601_bool = var_41_bool == (int)43140;
		if(var_601_bool != 0) {
			var_602_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541044, (int)29500, (int)43141);
			return 0;
		}
		var_608_bool = var_41_bool == (int)29500;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_233(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528149, (int)44110, (int)29501);
			@@@var_0_object:AddReply((int)541046, (int)29502, (int)43144);
			return 0;
		}
		var_618_bool = var_41_bool == (int)44110;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541878, (int)29502, (int)44111);
			@@@var_0_object:AddReply((int)541879, (int)29504, (int)44112);
			return 0;
		}
		var_628_bool = var_41_bool == (int)29502;
		if(var_628_bool != 0) {
			var_629_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528151, (int)29504, (int)29503);
			@@@var_0_object:AddReply((int)541047, (int)29504, (int)43146);
			return 0;
		}
		var_638_bool = var_41_bool == (int)29504;
		if(var_638_bool != 0) {
			var_639_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528152);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528153, (int)29506, (int)29505);
			@@@var_0_object:AddReply((int)541048, (int)44115, (int)43148);
			return 0;
		}
		var_648_bool = var_41_bool == (int)44115;
		if(var_648_bool != 0) {
			var_649_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541882, (int)27420, (int)44116);
			@@@var_0_object:AddReply((int)541883, (int)29506, (int)44117);
			return 0;
		}
		var_658_bool = var_41_bool == (int)29506;
		if(var_658_bool != 0) {
			var_659_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528154);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528155, (int)27420, (int)29507);
			return 0;
		}
		var_665_bool = var_41_bool == (int)27420;
		if(var_665_bool != 0) {
			var_666_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526141);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528174, (int)29529, (int)29528);
			@@@var_0_object:AddReply((int)541049, (int)29529, (int)43150);
			return 0;
		}
		var_675_bool = var_41_bool == (int)29529;
		if(var_675_bool != 0) {
			var_676_string = "";
			func_233(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528176, (int)29531, (int)29530);
			return 0;
		}
		var_682_bool = var_41_bool == (int)29531;
		if(var_682_bool != 0) {
			var_683_string = "";
			func_233(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526144, (int)27424, (int)27423);
			return 0;
		}
		var_689_bool = var_41_bool == (int)27424;
		if(var_689_bool != 0) {
			var_690_string = "";
			func_233(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)526145);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526146, (int)27426, (int)27425);
			return 0;
		}
		var_696_bool = var_41_bool == (int)27426;
		if(var_696_bool != 0) {
			var_697_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526147);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528178, (int)29533, (int)29532);
			@@@var_0_object:AddReply((int)528182, (int)29537, (int)29536);
			return 0;
		}
		var_706_bool = var_41_bool == (int)29537;
		if(var_706_bool != 0) {
			var_707_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528184, (int)29533, (int)29538);
			return 0;
		}
		var_713_bool = var_41_bool == (int)29533;
		if(var_713_bool != 0) {
			var_714_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528180, (int)29535, (int)29534);
			return 0;
		}
		var_720_bool = var_41_bool == (int)29535;
		if(var_720_bool != 0) {
			var_721_string = "";
			func_233(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528181);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526148, (int)-1, (int)27427);
			var_726_bool = 0; var_727_object = Obj();
			var_727_object = var_1_object;
			func_8210(var_727_object);
			if(var_726_bool != 0) {
				@@@var_0_object:AddReply((int)541050, (int)-1, (int)43152);
			}
			return 0;
		}
		var_3_string = true;
		var_735_bool = 0;
		func_7739(var_735_bool);
		if(var_735_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x100";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_7502();
		var_46_bool = var_42_cvector == (int)27672;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_7821();
		}
		var_83_bool = var_42_cvector == (int)27677;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_7821();
		}
		var_87_bool = var_42_cvector == (int)27737;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_7833();
		}
		var_105_bool = var_42_cvector == (int)44189;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_7833();
		}
		var_109_bool = var_42_cvector == (int)44185;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_7833();
		}
		var_113_bool = var_42_cvector == (int)41726;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_7949();
		}
		var_119_bool = var_42_cvector == (int)41729;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_7955();
		}
		var_125_bool = var_42_cvector == (int)41731;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_7967();
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_7741(var_137_object);
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_7897(var_177_object);
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_8187(var_198_object);
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_7913();
		}
		var_223_bool = var_42_cvector == (int)44195;
		if(var_223_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_7967();
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_7741(var_227_object);
		}
		var_229_bool = var_42_cvector == (int)40536;
		if(var_229_bool != 0) {
			var_230_object = Obj(); var_231_object = Obj();
			var_230_object = var_1_object;
			var_231_object = var_0_object;
			func_7925();
		}
		var_235_bool = var_42_cvector == (int)40541;
		if(var_235_bool != 0) {
			var_236_object = Obj(); var_237_object = Obj();
			var_236_object = var_1_object;
			var_237_object = var_0_object;
			func_8131(var_237_object);
			var_241_object = Obj(); var_242_object = Obj();
			var_241_object = var_1_object;
			var_242_object = var_0_object;
			func_8038(var_242_object);
			var_249_object = Obj(); var_250_object = Obj();
			var_249_object = var_1_object;
			var_250_object = var_0_object;
			func_7907();
			var_253_object = Obj(); var_254_object = Obj();
			var_253_object = var_1_object;
			var_254_object = var_0_object;
			func_7755(var_254_object);
		}
		var_260_bool = var_42_cvector == (int)40542;
		if(var_260_bool != 0) {
			var_261_object = Obj(); var_262_object = Obj();
			var_261_object = var_1_object;
			var_262_object = var_0_object;
			func_8131(var_262_object);
			var_263_object = Obj(); var_264_object = Obj();
			var_263_object = var_1_object;
			var_264_object = var_0_object;
			func_8038(var_264_object);
			var_265_object = Obj(); var_266_object = Obj();
			var_265_object = var_1_object;
			var_266_object = var_0_object;
			func_7907();
			var_267_object = Obj(); var_268_object = Obj();
			var_267_object = var_1_object;
			var_268_object = var_0_object;
			func_7755(var_268_object);
		}
		var_270_bool = var_42_cvector == (int)40539;
		if(var_270_bool != 0) {
			var_271_object = Obj(); var_272_object = Obj();
			var_271_object = var_1_object;
			var_272_object = var_0_object;
			func_8152();
			var_273_object = Obj(); var_274_object = Obj();
			var_273_object = var_1_object;
			var_274_object = var_0_object;
			func_8038(var_274_object);
			var_275_object = Obj(); var_276_object = Obj();
			var_275_object = var_1_object;
			var_276_object = var_0_object;
			func_7913();
			var_277_object = Obj(); var_278_object = Obj();
			var_277_object = var_1_object;
			var_278_object = var_0_object;
			func_7755(var_278_object);
		}
		var_280_bool = var_42_cvector == (int)41732;
		if(var_280_bool != 0) {
			var_281_object = Obj(); var_282_object = Obj();
			var_281_object = var_1_object;
			var_282_object = var_0_object;
			func_7961();
		}
		var_286_bool = var_42_cvector == (int)41734;
		if(var_286_bool != 0) {
			var_287_object = Obj(); var_288_object = Obj();
			var_287_object = var_1_object;
			var_288_object = var_0_object;
			func_7748(var_288_object);
		}
		var_293_bool = var_41_bool == (int)27671;
		if(var_293_bool != 0) {
			var_294_bool = 0; var_295_object = Obj();
			var_295_object = var_1_object;
			func_8234(var_295_object);
			if(var_294_bool != 0) {
				var_302_object = Obj(); var_303_object = Obj();
				var_302_object = var_1_object;
				var_303_object = var_0_object;
				func_7815();
				var_306_object = Obj(); var_307_object = Obj();
				var_306_object = var_1_object;
				var_307_object = var_0_object;
				func_8107();
				var_310_string = "";
				func_1627(var_42_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526396);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528207, (int)29565, (int)29564);
				@@@var_0_object:AddReply((int)528219, (int)29577, (int)29576);
				return 0;
			}
			var_334_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526399);
			@@@var_0_object:ClearReplies();
			var_336_bool = 0; var_337_object = Obj();
			var_337_object = var_1_object;
			func_8246(var_337_object);
			if(var_336_bool != 0) {
				@@@var_0_object:AddReply((int)526400, (int)27676, (int)27675);
			}
			var_345_bool = 0; var_346_object = Obj();
			var_346_object = var_1_object;
			func_8258(var_346_object);
			if(var_345_bool != 0) {
				@@@var_0_object:AddReply((int)526460, (int)29590, (int)27735);
			}
			var_354_bool = 0;
			var_354_bool = 0;
			var_355_bool = 0;
			var_355_bool = 0;
			var_356_bool = 0; var_357_object = Obj();
			var_357_object = var_1_object;
			func_8388(var_356_bool, var_357_object);
			if(var_356_bool != 0) {
				var_371_bool = 0; var_372_object = Obj();
				var_372_object = var_1_object;
				func_8398(var_371_bool, var_372_object);
				if(var_371_bool != 0) {
					var_355_bool = 1;
				}
			}
			if(var_355_bool != 0) {
				var_385_bool = 0; var_386_object = Obj();
				var_386_object = var_1_object;
				func_8472(var_386_object);
				if(var_385_bool != 0) {
					var_354_bool = 1;
				}
			}
			if(var_354_bool != 0) {
				@@@var_0_object:AddReply((int)539774, (int)41727, (int)41726);
			}
			var_394_bool = 0;
			var_394_bool = 0;
			var_395_bool = 0;
			var_395_bool = 0;
			var_396_bool = 0; var_397_object = Obj();
			var_397_object = var_1_object;
			func_8388(var_396_bool, var_397_object);
			if(var_396_bool != 0) {
				var_398_bool = 0; var_399_object = Obj();
				var_399_object = var_1_object;
				func_8408(var_398_bool, var_399_object);
				if(var_398_bool != 0) {
					var_395_bool = 1;
				}
			}
			if(var_395_bool != 0) {
				var_405_bool = 0; var_406_object = Obj();
				var_406_object = var_1_object;
				func_8484(var_406_object);
				if(var_405_bool != 0) {
					var_394_bool = 1;
				}
			}
			if(var_394_bool != 0) {
				@@@var_0_object:AddReply((int)539777, (int)41730, (int)41729);
			}
			var_414_bool = 0;
			var_414_bool = 0;
			var_415_bool = 0; var_416_object = Obj();
			var_416_object = var_1_object;
			func_8342(var_415_bool, var_416_object);
			if(var_415_bool != 0) {
				var_428_bool = 0; var_429_object = Obj();
				var_429_object = var_1_object;
				func_8364(var_429_object);
				if(var_428_bool != 0) {
					var_414_bool = 1;
				}
			}
			if(var_414_bool != 0) {
				@@@var_0_object:AddReply((int)538642, (int)40537, (int)40536);
			}
			var_437_bool = 0;
			var_437_bool = 0;
			var_438_bool = 0;
			var_438_bool = 0;
			var_439_bool = 0; var_440_object = Obj();
			var_440_object = var_1_object;
			func_8388(var_439_bool, var_440_object);
			if(var_439_bool != 0) {
				var_441_bool = 0; var_442_object = Obj();
				var_442_object = var_1_object;
				func_8418(var_441_bool, var_442_object);
				if(var_441_bool != 0) {
					var_438_bool = 1;
				}
			}
			if(var_438_bool != 0) {
				var_448_bool = 0; var_449_object = Obj();
				var_449_object = var_1_object;
				func_8496(var_449_object);
				if(var_448_bool != 0) {
					var_437_bool = 1;
				}
			}
			if(var_437_bool != 0) {
				@@@var_0_object:AddReply((int)539780, (int)44208, (int)41732);
			}
			@@@var_0_object:AddReply((int)526403, (int)-1, (int)27678);
			return 0;
		}
		var_461_bool = var_41_bool == (int)44208;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_1627(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541953);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541954, (int)41733, (int)44209);
			@@@var_0_object:AddReply((int)541955, (int)44211, (int)44210);
			return 0;
		}
		var_471_bool = var_41_bool == (int)44211;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_1627(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541957, (int)41733, (int)44212);
			@@@var_0_object:AddReply((int)541958, (int)41733, (int)44214);
			return 0;
		}
		var_481_bool = var_41_bool == (int)41733;
		if(var_481_bool != 0) {
			var_482_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539782, (int)-1, (int)41734);
			return 0;
		}
		var_488_bool = var_41_bool == (int)40537;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538644, (int)44196, (int)40538);
			@@@var_0_object:AddReply((int)538645, (int)-1, (int)40539);
			return 0;
		}
		var_498_bool = var_41_bool == (int)44196;
		if(var_498_bool != 0) {
			var_499_string = "";
			func_1627(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)541944);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541945, (int)44202, (int)44197);
			@@@var_0_object:AddReply((int)541946, (int)44199, (int)44198);
			return 0;
		}
		var_508_bool = var_41_bool == (int)44199;
		if(var_508_bool != 0) {
			var_509_string = "";
			func_1627(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)541947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541948, (int)44202, (int)44200);
			@@@var_0_object:AddReply((int)541949, (int)44202, (int)44201);
			return 0;
		}
		var_518_bool = var_41_bool == (int)44202;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541950);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541951, (int)40540, (int)44203);
			@@@var_0_object:AddReply((int)541952, (int)40540, (int)44204);
			return 0;
		}
		var_528_bool = var_41_bool == (int)40540;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_1627(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)538646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538647, (int)-1, (int)40541);
			@@@var_0_object:AddReply((int)538648, (int)-1, (int)40542);
			return 0;
		}
		var_538_bool = var_41_bool == (int)41730;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539779, (int)-1, (int)41731);
			@@@var_0_object:AddReply((int)541943, (int)-1, (int)44195);
			return 0;
		}
		var_548_bool = var_41_bool == (int)41727;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541939, (int)44191, (int)44190);
			@@@var_0_object:AddReply((int)541941, (int)44191, (int)44192);
			return 0;
		}
		var_558_bool = var_41_bool == (int)44191;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_1627(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541940);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539776, (int)-1, (int)41728);
			@@@var_0_object:AddReply((int)541942, (int)-1, (int)44194);
			return 0;
		}
		var_568_bool = var_41_bool == (int)29590;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_1627(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528232, (int)29592, (int)29591);
			@@@var_0_object:AddReply((int)541933, (int)44183, (int)44182);
			return 0;
		}
		var_578_bool = var_41_bool == (int)44183;
		if(var_578_bool != 0) {
			var_579_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541935, (int)29592, (int)44184);
			@@@var_0_object:AddReply((int)541936, (int)-1, (int)44185);
			return 0;
		}
		var_588_bool = var_41_bool == (int)29592;
		if(var_588_bool != 0) {
			var_589_string = "";
			func_1627(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528233);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528234, (int)27736, (int)29593);
			@@@var_0_object:AddReply((int)528235, (int)27736, (int)29594);
			return 0;
		}
		var_598_bool = var_41_bool == (int)27736;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526461);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528238, (int)29599, (int)29598);
			@@@var_0_object:AddReply((int)541937, (int)29597, (int)44187);
			return 0;
		}
		var_608_bool = var_41_bool == (int)29599;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528239);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528236, (int)29597, (int)29596);
			return 0;
		}
		var_615_bool = var_41_bool == (int)29597;
		if(var_615_bool != 0) {
			var_616_string = "";
			func_1627(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528237);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526462, (int)-1, (int)27737);
			@@@var_0_object:AddReply((int)541938, (int)-1, (int)44189);
			return 0;
		}
		var_625_bool = var_41_bool == (int)27676;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528229, (int)29589, (int)29588);
			@@@var_0_object:AddReply((int)541932, (int)29589, (int)44180);
			return 0;
		}
		var_635_bool = var_41_bool == (int)29589;
		if(var_635_bool != 0) {
			var_636_string = "";
			func_1627(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526402, (int)-1, (int)27677);
			return 0;
		}
		var_642_bool = var_41_bool == (int)29577;
		if(var_642_bool != 0) {
			var_643_string = "";
			func_1627(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528220);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528221, (int)29579, (int)29578);
			@@@var_0_object:AddReply((int)541917, (int)44162, (int)44161);
			return 0;
		}
		var_652_bool = var_41_bool == (int)44162;
		if(var_652_bool != 0) {
			var_653_string = "";
			func_1627(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)541918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541919, (int)29565, (int)44163);
			return 0;
		}
		var_659_bool = var_41_bool == (int)29579;
		if(var_659_bool != 0) {
			var_660_string = "";
			func_1627(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528222);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528223, (int)29565, (int)29580);
			return 0;
		}
		var_666_bool = var_41_bool == (int)29565;
		if(var_666_bool != 0) {
			var_667_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528209, (int)29567, (int)29566);
			@@@var_0_object:AddReply((int)541920, (int)44166, (int)44165);
			return 0;
		}
		var_676_bool = var_41_bool == (int)44166;
		if(var_676_bool != 0) {
			var_677_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541922, (int)44170, (int)44167);
			@@@var_0_object:AddReply((int)541923, (int)29569, (int)44168);
			return 0;
		}
		var_686_bool = var_41_bool == (int)44170;
		if(var_686_bool != 0) {
			var_687_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541925, (int)29569, (int)44171);
			return 0;
		}
		var_693_bool = var_41_bool == (int)29567;
		if(var_693_bool != 0) {
			var_694_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528211, (int)29569, (int)29568);
			return 0;
		}
		var_700_bool = var_41_bool == (int)29569;
		if(var_700_bool != 0) {
			var_701_string = "";
			func_1627(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528213, (int)29571, (int)29570);
			@@@var_0_object:AddReply((int)541926, (int)44177, (int)44173);
			return 0;
		}
		var_710_bool = var_41_bool == (int)44177;
		if(var_710_bool != 0) {
			var_711_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541931, (int)29573, (int)44178);
			return 0;
		}
		var_717_bool = var_41_bool == (int)29571;
		if(var_717_bool != 0) {
			var_718_string = "";
			func_1627(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528215, (int)29573, (int)29572);
			return 0;
		}
		var_724_bool = var_41_bool == (int)29573;
		if(var_724_bool != 0) {
			var_725_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528224, (int)29583, (int)29582);
			@@@var_0_object:AddReply((int)541927, (int)44175, (int)44174);
			return 0;
		}
		var_734_bool = var_41_bool == (int)44175;
		if(var_734_bool != 0) {
			var_735_string = "";
			func_1627(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528217, (int)29575, (int)29574);
			@@@var_0_object:AddReply((int)541929, (int)-1, (int)44176);
			return 0;
		}
		var_744_bool = var_41_bool == (int)29575;
		if(var_744_bool != 0) {
			var_745_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528227, (int)29587, (int)29586);
			return 0;
		}
		var_751_bool = var_41_bool == (int)29587;
		if(var_751_bool != 0) {
			var_752_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526397, (int)-1, (int)27672);
			@@@var_0_object:AddReply((int)526398, (int)-1, (int)27673);
			return 0;
		}
		var_761_bool = var_41_bool == (int)29583;
		if(var_761_bool != 0) {
			var_762_string = "";
			func_1627(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528226, (int)29575, (int)29584);
			return 0;
		}
		var_3_string = true;
		var_767_bool = 0;
		func_7739(var_767_bool);
		if(var_767_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x672";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_7502();
		var_46_bool = var_42_cvector == (int)27742;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_7876();
		}
		var_83_bool = var_42_cvector == (int)44229;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_7876();
		}
		var_87_bool = var_42_cvector == (int)29606;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_7876();
		}
		var_91_bool = var_42_cvector == (int)31171;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_7876();
		}
		var_95_bool = var_42_cvector == (int)44232;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_7876();
		}
		var_99_bool = var_42_cvector == (int)31197;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_7888();
		}
		var_113_bool = var_42_cvector == (int)44241;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_7888();
		}
		var_117_bool = var_42_cvector == (int)40543;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_7931();
		}
		var_123_bool = var_42_cvector == (int)40545;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_8131(var_125_object);
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_8049(var_165_object);
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_7907();
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_7755(var_193_object);
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_8165(var_214_object);
		}
		var_220_bool = var_42_cvector == (int)40546;
		if(var_220_bool != 0) {
			var_221_object = Obj(); var_222_object = Obj();
			var_221_object = var_1_object;
			var_222_object = var_0_object;
			func_8131(var_222_object);
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_object;
			func_8049(var_224_object);
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_7907();
			var_227_object = Obj(); var_228_object = Obj();
			var_227_object = var_1_object;
			var_228_object = var_0_object;
			func_7755(var_228_object);
			var_229_object = Obj(); var_230_object = Obj();
			var_229_object = var_1_object;
			var_230_object = var_0_object;
			func_8165(var_230_object);
		}
		var_232_bool = var_42_cvector == (int)41735;
		if(var_232_bool != 0) {
			var_233_object = Obj(); var_234_object = Obj();
			var_233_object = var_1_object;
			var_234_object = var_0_object;
			func_7972();
		}
		var_238_bool = var_42_cvector == (int)41738;
		if(var_238_bool != 0) {
			var_239_object = Obj(); var_240_object = Obj();
			var_239_object = var_1_object;
			var_240_object = var_0_object;
			func_7978();
		}
		var_244_bool = var_42_cvector == (int)41740;
		if(var_244_bool != 0) {
			var_245_object = Obj(); var_246_object = Obj();
			var_245_object = var_1_object;
			var_246_object = var_0_object;
			func_7967();
			var_255_object = Obj(); var_256_object = Obj();
			var_255_object = var_1_object;
			var_256_object = var_0_object;
			func_8038(var_256_object);
			var_263_object = Obj(); var_264_object = Obj();
			var_263_object = var_1_object;
			var_264_object = var_0_object;
			func_7907();
			var_265_object = Obj(); var_266_object = Obj();
			var_265_object = var_1_object;
			var_266_object = var_0_object;
			func_8187(var_266_object);
		}
		var_272_bool = var_42_cvector == (int)41741;
		if(var_272_bool != 0) {
			var_273_object = Obj(); var_274_object = Obj();
			var_273_object = var_1_object;
			var_274_object = var_0_object;
			func_7984();
		}
		var_278_bool = var_42_cvector == (int)41743;
		if(var_278_bool != 0) {
			var_279_object = Obj(); var_280_object = Obj();
			var_279_object = var_1_object;
			var_280_object = var_0_object;
			func_7748(var_280_object);
		}
		var_285_bool = var_41_bool == (int)27739;
		if(var_285_bool != 0) {
			var_286_bool = 0; var_287_object = Obj();
			var_287_object = var_1_object;
			func_8306(var_287_object);
			if(var_286_bool != 0) {
				var_294_object = Obj(); var_295_object = Obj();
				var_294_object = var_1_object;
				var_295_object = var_0_object;
				func_7870();
				var_298_object = Obj(); var_299_object = Obj();
				var_298_object = var_1_object;
				var_299_object = var_0_object;
				func_8113();
				var_302_string = "";
				func_3058(var_42_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526473);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541959, (int)44218, (int)44216);
				@@@var_0_object:AddReply((int)541960, (int)44218, (int)44217);
				return 0;
			}
			var_326_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526478);
			@@@var_0_object:ClearReplies();
			var_328_bool = 0; var_329_object = Obj();
			var_329_object = var_1_object;
			func_8318(var_329_object);
			if(var_328_bool != 0) {
				@@@var_0_object:AddReply((int)529716, (int)31170, (int)31169);
			}
			var_337_bool = 0; var_338_object = Obj();
			var_338_object = var_1_object;
			func_8330(var_338_object);
			if(var_337_bool != 0) {
				@@@var_0_object:AddReply((int)529721, (int)31178, (int)31175);
			}
			var_346_bool = 0;
			var_346_bool = 0;
			var_347_bool = 0; var_348_object = Obj();
			var_348_object = var_1_object;
			func_8342(var_347_bool, var_348_object);
			if(var_347_bool != 0) {
				var_365_bool = 0; var_366_object = Obj();
				var_366_object = var_1_object;
				func_8376(var_366_object);
				if(var_365_bool != 0) {
					var_346_bool = 1;
				}
			}
			if(var_346_bool != 0) {
				@@@var_0_object:AddReply((int)538649, (int)40544, (int)40543);
			}
			var_374_bool = 0;
			var_374_bool = 0;
			var_375_bool = 0;
			var_375_bool = 0;
			var_376_bool = 0; var_377_object = Obj();
			var_377_object = var_1_object;
			func_8388(var_376_bool, var_377_object);
			if(var_376_bool != 0) {
				var_386_bool = 0; var_387_object = Obj();
				var_387_object = var_1_object;
				func_8398(var_386_bool, var_387_object);
				if(var_386_bool != 0) {
					var_375_bool = 1;
				}
			}
			if(var_375_bool != 0) {
				var_400_bool = 0; var_401_object = Obj();
				var_401_object = var_1_object;
				func_8508(var_401_object);
				if(var_400_bool != 0) {
					var_374_bool = 1;
				}
			}
			if(var_374_bool != 0) {
				@@@var_0_object:AddReply((int)539783, (int)41736, (int)41735);
			}
			var_409_bool = 0;
			var_409_bool = 0;
			var_410_bool = 0;
			var_410_bool = 0;
			var_411_bool = 0; var_412_object = Obj();
			var_412_object = var_1_object;
			func_8388(var_411_bool, var_412_object);
			if(var_411_bool != 0) {
				var_413_bool = 0; var_414_object = Obj();
				var_414_object = var_1_object;
				func_8520(var_414_object);
				if(var_413_bool != 0) {
					var_410_bool = 1;
				}
			}
			if(var_410_bool != 0) {
				var_419_bool = 0; var_420_object = Obj();
				var_420_object = var_1_object;
				func_8408(var_419_bool, var_420_object);
				if(var_419_bool != 0) {
					var_409_bool = 1;
				}
			}
			if(var_409_bool != 0) {
				@@@var_0_object:AddReply((int)539786, (int)41739, (int)41738);
			}
			var_429_bool = 0;
			var_429_bool = 0;
			var_430_bool = 0;
			var_430_bool = 0;
			var_431_bool = 0; var_432_object = Obj();
			var_432_object = var_1_object;
			func_8388(var_431_bool, var_432_object);
			if(var_431_bool != 0) {
				var_433_bool = 0; var_434_object = Obj();
				var_434_object = var_1_object;
				func_8418(var_433_bool, var_434_object);
				if(var_433_bool != 0) {
					var_430_bool = 1;
				}
			}
			if(var_430_bool != 0) {
				var_440_bool = 0; var_441_object = Obj();
				var_441_object = var_1_object;
				func_8532(var_441_object);
				if(var_440_bool != 0) {
					var_429_bool = 1;
				}
			}
			if(var_429_bool != 0) {
				@@@var_0_object:AddReply((int)539789, (int)41742, (int)41741);
			}
			@@@var_0_object:AddReply((int)526479, (int)-1, (int)27745);
			@@@var_0_object:AddReply((int)541970, (int)-1, (int)44231);
			return 0;
		}
		var_456_bool = var_41_bool == (int)41742;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)539790);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539791, (int)-1, (int)41743);
			return 0;
		}
		var_463_bool = var_41_bool == (int)41739;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539787);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539788, (int)-1, (int)41740);
			return 0;
		}
		var_470_bool = var_41_bool == (int)41736;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_3058(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)539784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539785, (int)-1, (int)41737);
			return 0;
		}
		var_477_bool = var_41_bool == (int)40544;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)538650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538651, (int)-1, (int)40545);
			@@@var_0_object:AddReply((int)538652, (int)-1, (int)40546);
			return 0;
		}
		var_487_bool = var_41_bool == (int)31178;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529725, (int)31181, (int)31179);
			@@@var_0_object:AddReply((int)541972, (int)44234, (int)44233);
			return 0;
		}
		var_497_bool = var_41_bool == (int)44234;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)541973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541974, (int)31180, (int)44235);
			return 0;
		}
		var_504_bool = var_41_bool == (int)31181;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529727);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529728, (int)31180, (int)31182);
			@@@var_0_object:AddReply((int)529737, (int)31180, (int)31191);
			return 0;
		}
		var_514_bool = var_41_bool == (int)31180;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)529726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529729, (int)31184, (int)31183);
			@@@var_0_object:AddReply((int)541975, (int)44239, (int)44237);
			return 0;
		}
		var_524_bool = var_41_bool == (int)44239;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_3058(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)541976);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541977, (int)31184, (int)44240);
			@@@var_0_object:AddReply((int)541978, (int)-1, (int)44241);
			return 0;
		}
		var_534_bool = var_41_bool == (int)31184;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)529730);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529731, (int)31186, (int)31185);
			@@@var_0_object:AddReply((int)541979, (int)44243, (int)44242);
			return 0;
		}
		var_544_bool = var_41_bool == (int)44243;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541981, (int)31186, (int)44244);
			return 0;
		}
		var_551_bool = var_41_bool == (int)31186;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_3058(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)529732);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529733, (int)31188, (int)31187);
			@@@var_0_object:AddReply((int)541982, (int)44247, (int)44246);
			return 0;
		}
		var_561_bool = var_41_bool == (int)44247;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541984, (int)31188, (int)44248);
			return 0;
		}
		var_568_bool = var_41_bool == (int)31188;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_3058(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)529734);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529735, (int)31190, (int)31189);
			return 0;
		}
		var_575_bool = var_41_bool == (int)31190;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529736);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529738, (int)31194, (int)31193);
			return 0;
		}
		var_582_bool = var_41_bool == (int)31194;
		if(var_582_bool != 0) {
			var_583_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529740, (int)31196, (int)31195);
			return 0;
		}
		var_589_bool = var_41_bool == (int)31196;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_3058(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)529741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529742, (int)-1, (int)31197);
			return 0;
		}
		var_596_bool = var_41_bool == (int)31170;
		if(var_596_bool != 0) {
			var_597_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)529717);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529722, (int)31177, (int)31176);
			@@@var_0_object:AddReply((int)541971, (int)-1, (int)44232);
			return 0;
		}
		var_606_bool = var_41_bool == (int)31177;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)529723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529718, (int)-1, (int)31171);
			return 0;
		}
		var_613_bool = var_41_bool == (int)44218;
		if(var_613_bool != 0) {
			var_614_string = "";
			func_3058(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528240, (int)29601, (int)29600);
			@@@var_0_object:AddReply((int)541962, (int)44221, (int)44220);
			return 0;
		}
		var_623_bool = var_41_bool == (int)44221;
		if(var_623_bool != 0) {
			var_624_string = "";
			func_3058(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)541963);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541964, (int)29605, (int)44222);
			@@@var_0_object:AddReply((int)541965, (int)29603, (int)44223);
			return 0;
		}
		var_633_bool = var_41_bool == (int)29601;
		if(var_633_bool != 0) {
			var_634_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528242, (int)29603, (int)29602);
			return 0;
		}
		var_640_bool = var_41_bool == (int)29603;
		if(var_640_bool != 0) {
			var_641_string = "";
			func_3058(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528244, (int)29605, (int)29604);
			@@@var_0_object:AddReply((int)528246, (int)-1, (int)29606);
			return 0;
		}
		var_650_bool = var_41_bool == (int)29605;
		if(var_650_bool != 0) {
			var_651_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528245);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528247, (int)29608, (int)29607);
			@@@var_0_object:AddReply((int)541966, (int)44227, (int)44226);
			return 0;
		}
		var_660_bool = var_41_bool == (int)44227;
		if(var_660_bool != 0) {
			var_661_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541967);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541968, (int)29610, (int)44228);
			@@@var_0_object:AddReply((int)541969, (int)-1, (int)44229);
			return 0;
		}
		var_670_bool = var_41_bool == (int)29608;
		if(var_670_bool != 0) {
			var_671_string = "";
			func_3058(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526474, (int)27741, (int)27740);
			@@@var_0_object:AddReply((int)528249, (int)29610, (int)29609);
			return 0;
		}
		var_680_bool = var_41_bool == (int)29610;
		if(var_680_bool != 0) {
			var_681_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528251, (int)27741, (int)29611);
			return 0;
		}
		var_687_bool = var_41_bool == (int)27741;
		if(var_687_bool != 0) {
			var_688_string = "";
			func_3058(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526476, (int)-1, (int)27742);
			@@@var_0_object:AddReply((int)526477, (int)-1, (int)27743);
			return 0;
		}
		var_3_string = true;
		var_696_bool = 0;
		func_7739(var_696_bool);
		if(var_696_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc09";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_7502();
		var_46_bool = var_42_cvector == (int)28576;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_7849();
		}
		var_83_bool = var_42_cvector == (int)28568;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_7849();
		}
		var_87_bool = var_42_cvector == (int)28569;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_7849();
		}
		var_91_bool = var_42_cvector == (int)28541;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_7861();
		}
		var_105_bool = var_42_cvector == (int)28590;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_7861();
		}
		var_109_bool = var_42_cvector == (int)41763;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_8014();
		}
		var_115_bool = var_42_cvector == (int)41766;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_8020();
		}
		var_121_bool = var_42_cvector == (int)41768;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_7967();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_8060(var_133_object);
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_7907();
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_8154(var_161_object);
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_8176(var_182_object);
		}
		var_188_bool = var_42_cvector == (int)41769;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_8026();
		}
		var_194_bool = var_42_cvector == (int)41771;
		if(var_194_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_7748(var_196_object);
		}
		var_236_bool = var_42_cvector == (int)41772;
		if(var_236_bool != 0) {
			var_237_object = Obj(); var_238_object = Obj();
			var_237_object = var_1_object;
			var_238_object = var_0_object;
			func_8032();
		}
		var_242_bool = var_42_cvector == (int)41776;
		if(var_242_bool != 0) {
			var_243_object = Obj(); var_244_object = Obj();
			var_243_object = var_1_object;
			var_244_object = var_0_object;
			func_8131(var_244_object);
			var_248_object = Obj(); var_249_object = Obj();
			var_248_object = var_1_object;
			var_249_object = var_0_object;
			func_8060(var_249_object);
			var_250_object = Obj(); var_251_object = Obj();
			var_250_object = var_1_object;
			var_251_object = var_0_object;
			func_7907();
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_7755(var_253_object);
			var_258_object = Obj(); var_259_object = Obj();
			var_258_object = var_1_object;
			var_259_object = var_0_object;
			func_8176(var_259_object);
			var_260_object = Obj(); var_261_object = Obj();
			var_260_object = var_1_object;
			var_261_object = var_0_object;
			func_8165(var_261_object);
		}
		var_267_bool = var_42_cvector == (int)41777;
		if(var_267_bool != 0) {
			var_268_object = Obj(); var_269_object = Obj();
			var_268_object = var_1_object;
			var_269_object = var_0_object;
			func_8131(var_269_object);
			var_270_object = Obj(); var_271_object = Obj();
			var_270_object = var_1_object;
			var_271_object = var_0_object;
			func_8060(var_271_object);
			var_272_object = Obj(); var_273_object = Obj();
			var_272_object = var_1_object;
			var_273_object = var_0_object;
			func_7907();
			var_274_object = Obj(); var_275_object = Obj();
			var_274_object = var_1_object;
			var_275_object = var_0_object;
			func_8176(var_275_object);
			var_276_object = Obj(); var_277_object = Obj();
			var_276_object = var_1_object;
			var_277_object = var_0_object;
			func_7755(var_277_object);
		}
		var_279_bool = var_42_cvector == (int)41778;
		if(var_279_bool != 0) {
			var_280_object = Obj(); var_281_object = Obj();
			var_280_object = var_1_object;
			var_281_object = var_0_object;
			func_8131(var_281_object);
			var_282_object = Obj(); var_283_object = Obj();
			var_282_object = var_1_object;
			var_283_object = var_0_object;
			func_8060(var_283_object);
			var_284_object = Obj(); var_285_object = Obj();
			var_284_object = var_1_object;
			var_285_object = var_0_object;
			func_7907();
			var_286_object = Obj(); var_287_object = Obj();
			var_286_object = var_1_object;
			var_287_object = var_0_object;
			func_8165(var_287_object);
			var_288_object = Obj(); var_289_object = Obj();
			var_288_object = var_1_object;
			var_289_object = var_0_object;
			func_7755(var_289_object);
		}
		var_291_bool = var_41_bool == (int)28481;
		if(var_291_bool != 0) {
			var_292_bool = 0; var_293_object = Obj();
			var_293_object = var_1_object;
			func_8270(var_293_object);
			if(var_292_bool != 0) {
				var_300_object = Obj(); var_301_object = Obj();
				var_300_object = var_1_object;
				var_301_object = var_0_object;
				func_7843();
				var_304_object = Obj(); var_305_object = Obj();
				var_304_object = var_1_object;
				var_305_object = var_0_object;
				func_8119();
				var_308_string = "";
				func_4331(var_42_cvector, "Isee");
				@@@var_0_object:SetMessage((int)527173);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527174, (int)28483, (int)28482);
				@@@var_0_object:AddReply((int)527255, (int)28483, (int)28565);
				return 0;
			}
			var_332_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527177);
			@@@var_0_object:ClearReplies();
			var_334_bool = 0; var_335_object = Obj();
			var_335_object = var_1_object;
			func_8282(var_335_object);
			if(var_334_bool != 0) {
				@@@var_0_object:AddReply((int)527179, (int)28488, (int)28487);
			}
			var_343_bool = 0; var_344_object = Obj();
			var_344_object = var_1_object;
			func_8294(var_344_object);
			if(var_343_bool != 0) {
				@@@var_0_object:AddReply((int)527225, (int)28534, (int)28533);
			}
			var_352_bool = 0;
			var_352_bool = 0;
			var_353_bool = 0;
			var_353_bool = 0;
			var_354_bool = 0; var_355_object = Obj();
			var_355_object = var_1_object;
			func_8388(var_354_bool, var_355_object);
			if(var_354_bool != 0) {
				var_369_bool = 0; var_370_object = Obj();
				var_370_object = var_1_object;
				func_8398(var_369_bool, var_370_object);
				if(var_369_bool != 0) {
					var_353_bool = 1;
				}
			}
			if(var_353_bool != 0) {
				var_383_bool = 0; var_384_object = Obj();
				var_384_object = var_1_object;
				func_8592(var_384_object);
				if(var_383_bool != 0) {
					var_352_bool = 1;
				}
			}
			if(var_352_bool != 0) {
				@@@var_0_object:AddReply((int)539811, (int)41764, (int)41763);
			}
			var_392_bool = 0;
			var_392_bool = 0;
			var_393_bool = 0;
			var_393_bool = 0;
			var_394_bool = 0; var_395_object = Obj();
			var_395_object = var_1_object;
			func_8428(var_394_bool, var_395_object);
			if(var_394_bool != 0) {
				var_404_bool = 0; var_405_object = Obj();
				var_405_object = var_1_object;
				func_8408(var_404_bool, var_405_object);
				if(var_404_bool != 0) {
					var_393_bool = 1;
				}
			}
			if(var_393_bool != 0) {
				var_411_bool = 0; var_412_object = Obj();
				var_412_object = var_1_object;
				func_8604(var_412_object);
				if(var_411_bool != 0) {
					var_392_bool = 1;
				}
			}
			if(var_392_bool != 0) {
				@@@var_0_object:AddReply((int)539814, (int)41767, (int)41766);
			}
			var_420_bool = 0;
			var_420_bool = 0;
			var_421_bool = 0;
			var_421_bool = 0;
			var_422_bool = 0; var_423_object = Obj();
			var_423_object = var_1_object;
			func_8428(var_422_bool, var_423_object);
			if(var_422_bool != 0) {
				var_424_bool = 0; var_425_object = Obj();
				var_425_object = var_1_object;
				func_8438(var_424_bool, var_425_object);
				if(var_424_bool != 0) {
					var_421_bool = 1;
				}
			}
			if(var_421_bool != 0) {
				var_438_bool = 0; var_439_object = Obj();
				var_439_object = var_1_object;
				func_8616(var_439_object);
				if(var_438_bool != 0) {
					var_420_bool = 1;
				}
			}
			if(var_420_bool != 0) {
				@@@var_0_object:AddReply((int)539817, (int)41770, (int)41769);
			}
			var_447_bool = 0;
			var_447_bool = 0;
			var_448_bool = 0; var_449_object = Obj();
			var_449_object = var_1_object;
			func_8342(var_448_bool, var_449_object);
			if(var_448_bool != 0) {
				var_461_bool = 0; var_462_object = Obj();
				var_462_object = var_1_object;
				func_8628(var_462_object);
				if(var_461_bool != 0) {
					var_447_bool = 1;
				}
			}
			if(var_447_bool != 0) {
				@@@var_0_object:AddReply((int)539820, (int)41773, (int)41772);
			}
			@@@var_0_object:AddReply((int)527182, (int)-1, (int)28490);
			@@@var_0_object:AddReply((int)538653, (int)-1, (int)40547);
			return 0;
		}
		var_477_bool = var_41_bool == (int)41773;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_4331(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)539821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539822, (int)41775, (int)41774);
			@@@var_0_object:AddReply((int)539826, (int)-1, (int)41778);
			return 0;
		}
		var_487_bool = var_41_bool == (int)41775;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539824, (int)-1, (int)41776);
			@@@var_0_object:AddReply((int)539825, (int)-1, (int)41777);
			return 0;
		}
		var_497_bool = var_41_bool == (int)41770;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_4331(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)539818);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539819, (int)-1, (int)41771);
			return 0;
		}
		var_504_bool = var_41_bool == (int)41767;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539816, (int)-1, (int)41768);
			return 0;
		}
		var_511_bool = var_41_bool == (int)41764;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_4331(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)539812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539813, (int)-1, (int)41765);
			return 0;
		}
		var_518_bool = var_41_bool == (int)28534;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527227, (int)28577, (int)28535);
			return 0;
		}
		var_525_bool = var_41_bool == (int)28577;
		if(var_525_bool != 0) {
			var_526_string = "";
			func_4331(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)527266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527267, (int)28579, (int)28578);
			return 0;
		}
		var_532_bool = var_41_bool == (int)28579;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_4331(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)527268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527269, (int)28581, (int)28580);
			return 0;
		}
		var_539_bool = var_41_bool == (int)28581;
		if(var_539_bool != 0) {
			var_540_string = "";
			func_4331(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)527270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527271, (int)28536, (int)28582);
			@@@var_0_object:AddReply((int)527283, (int)28536, (int)28595);
			return 0;
		}
		var_549_bool = var_41_bool == (int)28536;
		if(var_549_bool != 0) {
			var_550_string = "";
			func_4331(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)527228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527273, (int)28585, (int)28584);
			return 0;
		}
		var_556_bool = var_41_bool == (int)28585;
		if(var_556_bool != 0) {
			var_557_string = "";
			func_4331(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)527274);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527280, (int)28592, (int)28591);
			return 0;
		}
		var_563_bool = var_41_bool == (int)28592;
		if(var_563_bool != 0) {
			var_564_string = "";
			func_4331(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)527281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527277, (int)28589, (int)28588);
			return 0;
		}
		var_570_bool = var_41_bool == (int)28589;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_4331(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)527278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527229, (int)28538, (int)28537);
			return 0;
		}
		var_577_bool = var_41_bool == (int)28538;
		if(var_577_bool != 0) {
			var_578_string = "";
			func_4331(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)527230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527231, (int)28540, (int)28539);
			@@@var_0_object:AddReply((int)527282, (int)28540, (int)28593);
			return 0;
		}
		var_587_bool = var_41_bool == (int)28540;
		if(var_587_bool != 0) {
			var_588_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527232);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527233, (int)-1, (int)28541);
			@@@var_0_object:AddReply((int)527279, (int)-1, (int)28590);
			return 0;
		}
		var_597_bool = var_41_bool == (int)28488;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527181, (int)28567, (int)28489);
			return 0;
		}
		var_604_bool = var_41_bool == (int)28567;
		if(var_604_bool != 0) {
			var_605_string = "";
			func_4331(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)527256);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527257, (int)-1, (int)28568);
			@@@var_0_object:AddReply((int)527258, (int)-1, (int)28569);
			return 0;
		}
		var_614_bool = var_41_bool == (int)28483;
		if(var_614_bool != 0) {
			var_615_string = "";
			func_4331(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)527175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527176, (int)28547, (int)28484);
			@@@var_0_object:AddReply((int)527178, (int)28555, (int)28486);
			return 0;
		}
		var_624_bool = var_41_bool == (int)28555;
		if(var_624_bool != 0) {
			var_625_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527248, (int)28549, (int)28556);
			return 0;
		}
		var_631_bool = var_41_bool == (int)28547;
		if(var_631_bool != 0) {
			var_632_string = "";
			func_4331(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)527239);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527240, (int)28549, (int)28548);
			return 0;
		}
		var_638_bool = var_41_bool == (int)28549;
		if(var_638_bool != 0) {
			var_639_string = "";
			func_4331(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)527241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527242, (int)28551, (int)28550);
			return 0;
		}
		var_645_bool = var_41_bool == (int)28551;
		if(var_645_bool != 0) {
			var_646_string = "";
			func_4331(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)527243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527244, (int)28553, (int)28552);
			return 0;
		}
		var_652_bool = var_41_bool == (int)28553;
		if(var_652_bool != 0) {
			var_653_string = "";
			func_4331(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)527245);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527250, (int)28560, (int)28559);
			return 0;
		}
		var_659_bool = var_41_bool == (int)28560;
		if(var_659_bool != 0) {
			var_660_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527246, (int)28558, (int)28554);
			@@@var_0_object:AddReply((int)527252, (int)28558, (int)28561);
			return 0;
		}
		var_669_bool = var_41_bool == (int)28558;
		if(var_669_bool != 0) {
			var_670_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527253, (int)28570, (int)28563);
			@@@var_0_object:AddReply((int)527254, (int)-1, (int)28564);
			return 0;
		}
		var_679_bool = var_41_bool == (int)28570;
		if(var_679_bool != 0) {
			var_680_string = "";
			func_4331(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527259);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527260, (int)28572, (int)28571);
			return 0;
		}
		var_686_bool = var_41_bool == (int)28572;
		if(var_686_bool != 0) {
			var_687_string = "";
			func_4331(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)527261);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527262, (int)28575, (int)28573);
			return 0;
		}
		var_693_bool = var_41_bool == (int)28575;
		if(var_693_bool != 0) {
			var_694_string = "";
			func_4331(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)527264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527265, (int)-1, (int)28576);
			return 0;
		}
		var_3_string = true;
		var_699_bool = 0;
		func_7739(var_699_bool);
		if(var_699_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1102";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_7502();
		var_46_bool = var_41_bool == (int)29509;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_5438(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528157);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528158, (int)29511, (int)29510);
			@@@var_0_object:AddReply((int)528163, (int)29516, (int)29515);
			return 0;
		}
		var_72_bool = var_41_bool == (int)29516;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_5438(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)528164);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528165, (int)29518, (int)29517);
			@@@var_0_object:AddReply((int)541872, (int)29518, (int)44103);
			return 0;
		}
		var_82_bool = var_41_bool == (int)29511;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_5438(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528159);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528160, (int)29513, (int)29512);
			@@@var_0_object:AddReply((int)528169, (int)29513, (int)29522);
			return 0;
		}
		var_92_bool = var_41_bool == (int)29513;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_5438(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)528161);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528162, (int)29518, (int)29514);
			@@@var_0_object:AddReply((int)541876, (int)29518, (int)44108);
			return 0;
		}
		var_102_bool = var_41_bool == (int)29518;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_5438(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528167, (int)-1, (int)29519);
			@@@var_0_object:AddReply((int)528168, (int)44105, (int)29521);
			return 0;
		}
		var_112_bool = var_41_bool == (int)44105;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_5438(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)541873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541874, (int)-1, (int)44106);
			@@@var_0_object:AddReply((int)541875, (int)-1, (int)44107);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_7739(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1555";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_7502();
		var_46_bool = var_42_cvector == (int)45221;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_8125();
		}
		var_52_bool = var_42_cvector == (int)45225;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_8125();
		}
		var_56_bool = var_41_bool == (int)45214;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_5771(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542794);
			@@@var_0_object:ClearReplies();
			var_75_bool = 0; var_76_object = Obj();
			var_76_object = var_1_object;
			func_8652(var_76_object);
			if(var_75_bool != 0) {
				@@@var_0_object:AddReply((int)542798, (int)45222, (int)45221);
			}
			var_86_bool = 0; var_87_object = Obj();
			var_87_object = var_1_object;
			func_8652(var_87_object);
			if(var_86_bool != 0) {
				@@@var_0_object:AddReply((int)542802, (int)45224, (int)45225);
			}
			@@@var_0_object:AddReply((int)543009, (int)-1, (int)45461);
			return 0;
		}
		var_95_bool = var_41_bool == (int)45222;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_5771(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542800, (int)45224, (int)45223);
			@@@var_0_object:AddReply((int)542805, (int)45228, (int)45229);
			return 0;
		}
		var_105_bool = var_41_bool == (int)45224;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_5771(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)542801);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542803, (int)45228, (int)45227);
			return 0;
		}
		var_112_bool = var_41_bool == (int)45228;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_5771(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)542804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542806, (int)45234, (int)45231);
			@@@var_0_object:AddReply((int)542807, (int)45233, (int)45232);
			return 0;
		}
		var_122_bool = var_41_bool == (int)45233;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_5771(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542811, (int)45237, (int)45236);
			return 0;
		}
		var_129_bool = var_41_bool == (int)45234;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_5771(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542810, (int)45237, (int)45235);
			return 0;
		}
		var_136_bool = var_41_bool == (int)45237;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_5771(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)542812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542813, (int)45240, (int)45239);
			return 0;
		}
		var_143_bool = var_41_bool == (int)45240;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_5771(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542814);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542815, (int)45243, (int)45241);
			@@@var_0_object:AddReply((int)542816, (int)45246, (int)45242);
			return 0;
		}
		var_153_bool = var_41_bool == (int)45246;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_5771(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)542820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542821, (int)-1, (int)45247);
			@@@var_0_object:AddReply((int)542822, (int)-1, (int)45248);
			return 0;
		}
		var_163_bool = var_41_bool == (int)45243;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_5771(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542818, (int)-1, (int)45244);
			@@@var_0_object:AddReply((int)542819, (int)-1, (int)45245);
			return 0;
		}
		var_3_string = true;
		var_172_bool = 0;
		func_7739(var_172_bool);
		if(var_172_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x16a2";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_7502();
		var_46_bool = var_42_cvector == (int)41746;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_7990();
		}
		var_52_bool = var_42_cvector == (int)41749;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_7996();
		}
		var_58_bool = var_42_cvector == (int)41751;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_7967();
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_8060(var_85_object);
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_8187(var_109_object);
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_8154(var_130_object);
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_7907();
		}
		var_140_bool = var_42_cvector == (int)41752;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_8002();
		}
		var_146_bool = var_42_cvector == (int)41754;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_7748(var_148_object);
		}
		var_188_bool = var_42_cvector == (int)41755;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_8008();
		}
		var_194_bool = var_42_cvector == (int)41759;
		if(var_194_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_8131(var_196_object);
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_8060(var_201_object);
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_7907();
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_7755(var_205_object);
		}
		var_211_bool = var_42_cvector == (int)41760;
		if(var_211_bool != 0) {
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_8131(var_213_object);
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_8060(var_215_object);
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_7907();
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_7755(var_219_object);
		}
		var_221_bool = var_42_cvector == (int)41761;
		if(var_221_bool != 0) {
			var_222_object = Obj(); var_223_object = Obj();
			var_222_object = var_1_object;
			var_223_object = var_0_object;
			func_8131(var_223_object);
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_8060(var_225_object);
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_7907();
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_7755(var_229_object);
		}
		var_231_bool = var_41_bool == (int)41745;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_6295(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539793);
			@@@var_0_object:ClearReplies();
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0;
			var_251_bool = 0;
			var_252_bool = 0; var_253_object = Obj();
			var_253_object = var_1_object;
			func_8388(var_252_bool, var_253_object);
			if(var_252_bool != 0) {
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_8398(var_267_bool, var_268_object);
				if(var_267_bool != 0) {
					var_251_bool = 1;
				}
			}
			if(var_251_bool != 0) {
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_object;
				func_8544(var_282_object);
				if(var_281_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)539794, (int)41747, (int)41746);
			}
			var_292_bool = 0;
			var_292_bool = 0;
			var_293_bool = 0;
			var_293_bool = 0;
			var_294_bool = 0; var_295_object = Obj();
			var_295_object = var_1_object;
			func_8388(var_294_bool, var_295_object);
			if(var_294_bool != 0) {
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_8556(var_297_object);
				if(var_296_bool != 0) {
					var_293_bool = 1;
				}
			}
			if(var_293_bool != 0) {
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_8408(var_302_bool, var_303_object);
				if(var_302_bool != 0) {
					var_292_bool = 1;
				}
			}
			if(var_292_bool != 0) {
				@@@var_0_object:AddReply((int)539797, (int)41750, (int)41749);
			}
			var_312_bool = 0;
			var_312_bool = 0;
			var_313_bool = 0;
			var_313_bool = 0;
			var_314_bool = 0; var_315_object = Obj();
			var_315_object = var_1_object;
			func_8388(var_314_bool, var_315_object);
			if(var_314_bool != 0) {
				var_316_bool = 0; var_317_object = Obj();
				var_317_object = var_1_object;
				func_8418(var_316_bool, var_317_object);
				if(var_316_bool != 0) {
					var_313_bool = 1;
				}
			}
			if(var_313_bool != 0) {
				var_323_bool = 0; var_324_object = Obj();
				var_324_object = var_1_object;
				func_8568(var_324_object);
				if(var_323_bool != 0) {
					var_312_bool = 1;
				}
			}
			if(var_312_bool != 0) {
				@@@var_0_object:AddReply((int)539800, (int)41753, (int)41752);
			}
			var_332_bool = 0;
			var_332_bool = 0;
			var_333_bool = 0; var_334_object = Obj();
			var_334_object = var_1_object;
			func_8342(var_333_bool, var_334_object);
			if(var_333_bool != 0) {
				var_346_bool = 0; var_347_object = Obj();
				var_347_object = var_1_object;
				func_8580(var_347_object);
				if(var_346_bool != 0) {
					var_332_bool = 1;
				}
			}
			if(var_332_bool != 0) {
				@@@var_0_object:AddReply((int)539803, (int)41756, (int)41755);
			}
			@@@var_0_object:AddReply((int)539810, (int)-1, (int)41762);
			@@@var_0_object:AddReply((int)541106, (int)-1, (int)43219);
			return 0;
		}
		var_362_bool = var_41_bool == (int)41756;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_6295(var_42_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)539804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539805, (int)41758, (int)41757);
			@@@var_0_object:AddReply((int)539809, (int)-1, (int)41761);
			return 0;
		}
		var_372_bool = var_41_bool == (int)41758;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_6295(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539807, (int)-1, (int)41759);
			@@@var_0_object:AddReply((int)539808, (int)-1, (int)41760);
			return 0;
		}
		var_382_bool = var_41_bool == (int)41753;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_6295(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)539801);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539802, (int)-1, (int)41754);
			return 0;
		}
		var_389_bool = var_41_bool == (int)41750;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_6295(var_42_cvector, "Isee");
			@@@var_0_object:SetMessage((int)539798);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539799, (int)-1, (int)41751);
			return 0;
		}
		var_396_bool = var_41_bool == (int)41747;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_6295(var_42_cvector, "Threat");
			@@@var_0_object:SetMessage((int)539795);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539796, (int)-1, (int)41748);
			return 0;
		}
		var_3_string = true;
		var_402_bool = 0;
		func_7739(var_402_bool);
		if(var_402_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x18ae";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	if((int)1 != 0) {
		func_7502();
		var_46_bool = var_41_int == (int)42548;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_6838(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_7739(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1acd";
	
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_43_bool = var_41_int == (int)10;
	if(var_43_bool != 0) {
		func_6971();
		var_45_bool = 0;
		var_45_bool = 0;
		var_46_bool = 0;
		func_7226(var_46_bool);
		if(var_46_bool != 0) {
			var_49_bool = 0;
			func_6940(var_49_bool);
			if(var_49_bool != 0) {
				var_45_bool = 1;
			}
		}
		if(var_45_bool != 0) {
			var_66_bool = 0;
			func_6920(var_66_bool);
			if(var_66_bool != 0) {
				var_85_bool = 0; var_86_object = Obj();
				func_7509(Obj());
				var_87_object = var_86_object;
				func_7376(var_85_bool, var_86_object);
			}
		} else {
			func_6935(var_41_int);
			func_6962();
		}
	}
	return 0;
	
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_7153();
	func_6971();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0();
	func_6971();
	var_42_string = "";
	func_7456("Neutral");
	func_6962();
	return 0;
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool;
	if(var_42_bool != 0) {
		func_6962();
	} else {
		var_48_string = "";
		func_7456("Neutral");
	}
	return 0;
	
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	IsOverrideActive(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		EventDisable(0);
		func_7153();
		var_45_bool = 0; var_46_object = Obj();
		var_41_object = var_46_object;
		func_7217(var_45_bool, var_46_object);
		EventEnable(0);
		var_59_object = Obj();
		var_41_object = var_59_object;
		func_9063(var_59_object);
		var_1234_string = "";
		func_7456("Neutral");
		func_6971();
		func_6962();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_6906(var_40_cvector);
	return 0;
}


func_0(var_0_object, var_378_int, var_379_object)
{
	var_381_object = Obj(); var_382_bool = 0; var_383_int = 0; var_384_bool = 0; var_385_object = Obj(); var_386_bool = 0; var_387_int = 0; var_388_bool = 0;
	var_0_object = var_379_object;
	var_389_bool = 0; var_390_object = Obj(); var_391_float = 0;
	var_379_object = var_390_object;
	func_7231(var_389_bool, var_390_object, (float)70.0);
	var_392_bool = var_389_bool == 0; //@nz
	if(var_392_bool != 0) {
		var_378_int = -2;
		return 8;
	}
	CreateDialog(var_385_object);
	var_393_int = 0;
	func_7733(var_393_int);
	@@var_385_object:SetNPCName(var_393_int);
	var_394_int = 0;
	func_7731(var_394_int);
	@@var_385_object:SetNPCDescription(var_394_int);
	var_395_string = "";
	func_7735(var_395_string);
	@@var_385_object:SetPhoto(var_395_string);
	var_396_string = "";
	func_7737(var_396_string);
	@@var_385_object:SetPhoto2(var_396_string);
	var_397_int = 0;
	func_8964(var_397_int);
	@@var_385_object:SetPlayerName(var_397_int);
	IsOverrideActive(var_386_bool);
	var_398_bool = var_386_bool;
	if(var_398_bool != 0) {
		var_378_int = -2;
		return 8;
	}
	DoDialog(var_385_object);
	var_399_bool = 0; var_400_object = Obj();
	func_7509(Obj());
	var_401_object = var_400_object;
	func_7318(var_399_bool, var_400_object);
	var_402_object = Obj(); var_403_object = Obj();
	var_379_object = var_402_object;
	var_385_object = var_403_object;
	TaskCall(1);
	func_81(var_404_object, var_405_object, var_406_string, var_407_bool, var_402_object, var_403_object);
	TaskReturn();
	@@var_385_object:IsDialogEnd(var_388_bool);
	
Label_63:
	var_549_bool = var_388_bool == 0; //@nz
	if(var_549_bool != 0) {
		sync();
		@@var_385_object:IsDialogEnd(var_388_bool);
		goto Label_63;
	}
	var_379_object = Obj();
	func_7300();
	StopDialog(var_385_object);
	@@var_385_object:GetReturnValue((int)-1);
	var_387_int = var_378_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8705(var_1137_bool)
{
	func_9031((bool)0);
	var_1139_bool = var_1137_bool;
	return 0;
}


func_7682(var_375_bool, var_376_int)
{
	var_377_int = 0;
	func_7673(var_377_int);
	var_375_bool = var_377_int == var_376_int;
	return 0;
}


func_8198(var_409_bool)
{
	var_411_int = 0; var_412_string = "";
	func_7536(var_411_int, "k7q01");
	var_414_bool = var_411_int == (int)0;
	if(var_414_bool != 0) {
		var_409_bool = 1;
		return 0;
	}
	var_409_bool = 0;
	return 0;
}


func_8711()
{
	var_423_object = Obj(); var_424_object = Obj();
	CreateDiaryEntry(var_424_object, (int)569, (int)0, (int)530583);
	var_428_bool = 0; var_429_object = Obj(); var_430_int = 0;
	var_424_object = var_429_object;
	func_8919(var_428_bool, var_429_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7688(var_291_bool, var_292_int)
{
	var_293_float = 0; var_294_int = 0; var_295_int = 0; var_296_float = 0; var_297_int = 0; var_298_int = 0;
	GetGameTime(var_296_float);
	var_300_int = 0;
	var_300_int = var_296_float / (int)24;
	var_297_int = (int)1 + var_300_int;
	var_302_bool = var_297_int != var_292_int;
	if(var_302_bool != 0) {
		var_291_bool = 0;
		return 6;
	}
	var_303_int = 0;
	var_296_float = var_303_int;
	var_298_int = var_303_int % (int)24;
	var_291_bool = var_298_int < (int)7;
	return 6;
}


func_7178(var_160_bool, var_161_object, var_162_string, var_163_float, var_164_float, var_165_float)
{
	var_166_float = 0; var_167_float = 0;
	var_168_bool = 0; var_169_object = Obj(); var_170_string = "";
	var_161_object = var_169_object;
	var_162_string = var_170_string;
	func_7166(var_168_bool, var_169_object, var_170_string);
	var_177_bool = var_168_bool == 0; //@nz
	if(var_177_bool != 0) {
		var_160_bool = 0;
		return 2;
	}
	@@var_161_object:GetProperty(var_162_string, var_167_float);
	var_178_float = 0; var_179_float = 0; var_180_float = 0; var_181_float = 0;
	var_179_float = var_167_float + var_163_float;
	var_164_float = var_180_float;
	var_165_float = var_181_float;
	func_7525(var_178_float, var_179_float, var_180_float, var_181_float);
	@@var_161_object:SetProperty(var_162_string, var_178_float);
	var_160_bool = 1;
	return 2;
}


func_8210(var_726_bool)
{
	var_728_int = 0; var_729_string = "";
	func_7536(var_728_int, "k7q01");
	var_731_bool = var_728_int == (int)1;
	if(var_731_bool != 0) {
		var_726_bool = 1;
		return 0;
	}
	var_726_bool = 0;
	return 0;
}


func_4115(var_0_object, var_1_object, var_2_object, var_3_string, var_1029_object, var_1030_object)
{
	var_0_object = var_1030_object;
	var_1_object = var_1029_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1036_bool = 0; var_1037_object = Obj();
		var_1037_object = var_1_object;
		func_8270(var_1037_object);
		if(var_1036_bool != 0) {
			var_1042_object = Obj(); var_1043_object = Obj();
			var_1042_object = var_1_object;
			var_1043_object = var_0_object;
			func_7843();
			var_1046_object = Obj(); var_1047_object = Obj();
			var_1046_object = var_1_object;
			var_1047_object = var_0_object;
			func_8119();
			var_1050_string = "";
			func_4331(var_1030_object, "Isee");
			@@@var_0_object:SetMessage((int)527173);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527174, (int)28483, (int)28482);
			@@@var_0_object:AddReply((int)527255, (int)28483, (int)28565);
		} else {
				var_1073_string = "";
				func_4331(var_1030_object, "Neutral");
				@@@var_0_object:SetMessage((int)527177);
				@@@var_0_object:ClearReplies();
				var_1075_bool = 0; var_1076_object = Obj();
				var_1076_object = var_1_object;
				func_8282(var_1076_object);
				if(var_1075_bool != 0) {
					@@@var_0_object:AddReply((int)527179, (int)28488, (int)28487);
				}
				var_1084_bool = 0; var_1085_object = Obj();
				var_1085_object = var_1_object;
				func_8294(var_1085_object);
				if(var_1084_bool != 0) {
					@@@var_0_object:AddReply((int)527225, (int)28534, (int)28533);
				}
				var_1093_bool = 0;
				var_1093_bool = 0;
				var_1094_bool = 0;
				var_1094_bool = 0;
				var_1095_bool = 0; var_1096_object = Obj();
				var_1096_object = var_1_object;
				func_8388(var_1095_bool, var_1096_object);
				if(var_1095_bool != 0) {
					var_1097_bool = 0; var_1098_object = Obj();
					var_1098_object = var_1_object;
					func_8398(var_1097_bool, var_1098_object);
					if(var_1097_bool != 0) {
						var_1094_bool = 1;
					}
				}
				if(var_1094_bool != 0) {
					var_1099_bool = 0; var_1100_object = Obj();
					var_1100_object = var_1_object;
					func_8592(var_1100_object);
					if(var_1099_bool != 0) {
						var_1093_bool = 1;
					}
				}
				if(var_1093_bool != 0) {
					@@@var_0_object:AddReply((int)539811, (int)41764, (int)41763);
				}
				var_1108_bool = 0;
				var_1108_bool = 0;
				var_1109_bool = 0;
				var_1109_bool = 0;
				var_1110_bool = 0; var_1111_object = Obj();
				var_1111_object = var_1_object;
				func_8428(var_1110_bool, var_1111_object);
				if(var_1110_bool != 0) {
					var_1120_bool = 0; var_1121_object = Obj();
					var_1121_object = var_1_object;
					func_8408(var_1120_bool, var_1121_object);
					if(var_1120_bool != 0) {
						var_1109_bool = 1;
					}
				}
				if(var_1109_bool != 0) {
					var_1122_bool = 0; var_1123_object = Obj();
					var_1123_object = var_1_object;
					func_8604(var_1123_object);
					if(var_1122_bool != 0) {
						var_1108_bool = 1;
					}
				}
				if(var_1108_bool != 0) {
					@@@var_0_object:AddReply((int)539814, (int)41767, (int)41766);
				}
				var_1131_bool = 0;
				var_1131_bool = 0;
				var_1132_bool = 0;
				var_1132_bool = 0;
				var_1133_bool = 0; var_1134_object = Obj();
				var_1134_object = var_1_object;
				func_8428(var_1133_bool, var_1134_object);
				if(var_1133_bool != 0) {
					var_1135_bool = 0; var_1136_object = Obj();
					var_1136_object = var_1_object;
					func_8438(var_1135_bool, var_1136_object);
					if(var_1135_bool != 0) {
						var_1132_bool = 1;
					}
				}
				if(var_1132_bool != 0) {
					var_1149_bool = 0; var_1150_object = Obj();
					var_1150_object = var_1_object;
					func_8616(var_1150_object);
					if(var_1149_bool != 0) {
						var_1131_bool = 1;
					}
				}
				if(var_1131_bool != 0) {
					@@@var_0_object:AddReply((int)539817, (int)41770, (int)41769);
				}
				var_1158_bool = 0;
				var_1158_bool = 0;
				var_1159_bool = 0; var_1160_object = Obj();
				var_1160_object = var_1_object;
				func_8342(var_1159_bool, var_1160_object);
				if(var_1159_bool != 0) {
					var_1161_bool = 0; var_1162_object = Obj();
					var_1162_object = var_1_object;
					func_8628(var_1162_object);
					if(var_1161_bool != 0) {
						var_1158_bool = 1;
					}
				}
				if(var_1158_bool != 0) {
					@@@var_0_object:AddReply((int)539820, (int)41773, (int)41772);
				}
				@@@var_0_object:AddReply((int)527182, (int)-1, (int)28490);
				@@@var_0_object:AddReply((int)538653, (int)-1, (int)40547);
				goto Label_4301;
		}
	}
Label_4301:
	var_1065_bool = 0;
	func_7739(var_1065_bool);
	if(var_1065_bool != 0) {

	Label_4305:
		lshWaitForAnimEnd();
		var_1066_string = var_3_string;
		if(var_1066_string != 0) {
		} else {
			var_1067_string = "";
			var_1067_string = var_2_object;
			func_7456(var_1067_string);
			goto Label_4305;
	}
		PlayAnimation("all", "idle");

	Label_4320:
		WaitForAnimEnd();
		var_1070_string = var_3_string;
		if(var_1070_string != 0) {
			goto Label_4330;
		}
		PlayAnimation("all", "idle");
		goto Label_4320;

	}
	goto Label_4330;
	
Label_4330:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1017";


func_8724()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)480, (int)1, (int)528047);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_8919(var_56_bool, var_57_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7707(var_65_string, var_66_int)
{
	var_67_string = ""; var_68_string = "";
	var_69_int = var_66_int;
	if(var_69_int != 0) {
		"idle" = "idle" + var_66_int;
	}
	var_68_string = var_65_string;
	return 2;
}


func_8222(var_496_bool)
{
	var_498_int = 0; var_499_string = "";
	func_7536(var_498_int, "k7q01");
	var_501_bool = var_498_int == (int)9;
	if(var_501_bool != 0) {
		var_496_bool = 1;
		return 0;
	}
	var_496_bool = 0;
	return 0;
}


func_7200(var_94_object, var_95_string, var_96_int)
{
	var_97_int = 0; var_98_int = 0;
	@@var_94_object:GetProperty(var_95_string, var_98_int);
	var_99_int = var_98_int + var_96_int;
	@@var_94_object:SetProperty(var_95_string, var_99_int);
	return 2;
}


func_8737()
{
	var_96_object = Obj(); var_97_object = Obj();
	CreateDiaryEntry(var_97_object, (int)491, (int)1, (int)528058);
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0;
	var_97_object = var_102_object;
	func_8919(var_101_bool, var_102_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7714(var_59_int)
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	var_62_int = 0;
	
Label_7716:
	var_65_string = ""; var_66_int = 0;
	var_62_int = var_66_int;
	func_7707(var_65_string, var_66_int);
	HasAnimation(var_63_bool, "all", var_65_string);
	var_70_bool = var_63_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
		var_62_int = var_62_int + (int)1;
		goto Label_7716;
	}
	var_62_int = var_59_int;
	return 4;
	
}


func_7207(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0;
	GetPosition(var_54_cvector);
	var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
	return 6;
}


func_8234(var_584_bool)
{
	var_586_int = 0; var_587_string = "";
	func_7536(var_586_int, "ook8Aglaja1");
	var_589_bool = var_586_int == (int)0;
	if(var_589_bool != 0) {
		var_584_bool = 1;
		return 0;
	}
	var_584_bool = 0;
	return 0;
}


func_6699(var_0_object, var_1178_int, var_1179_object)
{
	var_1181_object = Obj(); var_1182_bool = 0; var_1183_int = 0; var_1184_bool = 0; var_1185_object = Obj(); var_1186_bool = 0; var_1187_int = 0; var_1188_bool = 0;
	var_0_object = var_1179_object;
	var_1189_bool = 0; var_1190_object = Obj(); var_1191_float = 0;
	var_1179_object = var_1190_object;
	func_7231(var_1189_bool, var_1190_object, (float)70.0);
	var_1192_bool = var_1189_bool == 0; //@nz
	if(var_1192_bool != 0) {
		var_1178_int = -2;
		return 8;
	}
	CreateDialog(var_1185_object);
	var_1193_int = 0;
	func_7733(var_1193_int);
	@@var_1185_object:SetNPCName(var_1193_int);
	var_1194_int = 0;
	func_7731(var_1194_int);
	@@var_1185_object:SetNPCDescription(var_1194_int);
	var_1195_string = "";
	func_7735(var_1195_string);
	@@var_1185_object:SetPhoto(var_1195_string);
	var_1196_string = "";
	func_7737(var_1196_string);
	@@var_1185_object:SetPhoto2(var_1196_string);
	var_1197_int = 0;
	func_8964(var_1197_int);
	@@var_1185_object:SetPlayerName(var_1197_int);
	IsOverrideActive(var_1186_bool);
	var_1198_bool = var_1186_bool;
	if(var_1198_bool != 0) {
		var_1178_int = -2;
		return 8;
	}
	DoDialog(var_1185_object);
	var_1199_bool = 0; var_1200_object = Obj();
	func_7509(Obj());
	var_1201_object = var_1200_object;
	func_7318(var_1199_bool, var_1200_object);
	var_1202_object = Obj(); var_1203_object = Obj();
	var_1179_object = var_1202_object;
	var_1185_object = var_1203_object;
	TaskCall(15);
	func_6780(var_1204_object, var_1205_object, var_1206_string, var_1207_bool, var_1202_object, var_1203_object);
	TaskReturn();
	@@var_1185_object:IsDialogEnd(var_1188_bool);
	
Label_6762:
	var_1232_bool = var_1188_bool == 0; //@nz
	if(var_1232_bool != 0) {
		sync();
		@@var_1185_object:IsDialogEnd(var_1188_bool);
		goto Label_6762;
	}
	var_1179_object = Obj();
	func_7300();
	StopDialog(var_1185_object);
	@@var_1185_object:GetReturnValue((int)-1);
	var_1187_int = var_1178_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8750()
{
	var_74_object = Obj(); var_75_object = Obj();
	CreateDiaryEntry(var_75_object, (int)481, (int)1, (int)528048);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_75_object = var_80_object;
	func_8919(var_79_bool, var_80_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7217(var_45_bool, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	@@var_46_object:GetPosition(var_48_cvector);
	var_49_bool = 0; var_50_cvector = CVector(0,0,0);
	var_48_cvector = var_50_cvector;
	func_7207(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
	return 2;
}


func_7731(var_124_int)
{
	var_124_int = 515527;
	return 0;
}


func_7733(var_123_int)
{
	var_123_int = 513334;
	return 0;
}


func_8246(var_623_bool)
{
	var_625_int = 0; var_626_string = "";
	func_7536(var_625_int, "k8q01");
	var_628_bool = var_625_int == (int)0;
	if(var_628_bool != 0) {
		var_623_bool = 1;
		return 0;
	}
	var_623_bool = 0;
	return 0;
}


func_7735(var_125_string)
{
	var_125_string = "ui/NPC_Aglaja.png";
	return 0;
}


func_7737(var_126_string)
{
	var_126_string = "ui/NPC_Aglaja_b.png";
	return 0;
}


func_7226(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0;
	IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
	return 2;
}


func_7739(var_118_bool)
{
	var_118_bool = 1;
	return 0;
}


func_8763()
{
	var_61_object = Obj(); var_62_object = Obj();
	CreateDiaryEntry(var_62_object, (int)756, (int)2, (int)539741);
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0;
	var_62_object = var_67_object;
	func_8919(var_66_bool, var_67_object, (int)751);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7741(var_136_object)
{
	var_138_bool = 0; var_139_object = Obj(); var_140_float = 0;
	var_136_object = var_139_object;
	func_7604(var_138_bool, var_139_object, (float)0.05000000074505806);
	return 0;
}


func_7231(var_75_bool, var_76_object, var_77_float)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0;
	@@var_76_object:GetPosition(var_88_cvector);
	@@var_76_object:GetEyesHeight(var_87_float);
	var_96_float = GetByIndex(var_88_cvector, 1);
	var_96_float = var_96_float + var_87_float;
	SetByIndex(var_88_cvector, 1) = var_96_float;
	GetPosition(var_89_cvector);
	GetEyesHeight(var_87_float);
	var_97_float = GetByIndex(var_89_cvector, 1);
	var_97_float = var_97_float + var_87_float;
	SetByIndex(var_89_cvector, 1) = var_97_float;
	var_90_cvector = var_88_cvector - var_89_cvector;
	var_98_float = GetByIndex(var_90_cvector, 1);
	SetByIndex(var_90_cvector, 1) = (float)0;
	var_99_int = var_90_cvector | var_90_cvector;
	var_100_float = sqrt(var_99_int);
	var_90_cvector = var_90_cvector / var_100_float;
	var_91_cvector = -var_90_cvector;
	var_101_float = var_90_cvector * var_77_float;
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	var_103_cvector = var_91_cvector ^ CVector(0.0, 1.0, 0.0);
	func_7515(var_102_cvector, var_103_cvector);
	var_111_float = var_102_cvector * (int)25;
	var_112_int = var_101_float + var_111_float;
	var_92_cvector = var_112_int - CVector(0.0, 10.0, 0.0);
	var_93_cvector = var_89_cvector + var_92_cvector;
	IsOverrideActive(var_94_bool);
	var_114_bool = var_94_bool;
	if(var_114_bool != 0) {
		var_75_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_93_cvector, var_91_cvector, (bool)1);
	var_116_float = GetByIndex(var_92_cvector, 0);
	var_117_float = GetByIndex(var_92_cvector, 2);
	Rotate(var_116_float, var_117_float);
	var_118_bool = 0;
	func_7739(var_118_bool);
	if(var_118_bool != 0) {
	} else {
		HasAnimationTrack(var_95_bool, "head");
		var_120_bool = var_95_bool;
		if(var_120_bool == 0) goto Label_7294;
		LookAsyncCamera("head");
	}
Label_7294:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_75_bool = 1;
	return 18;
	
}


func_8258(var_632_bool)
{
	var_634_int = 0; var_635_string = "";
	func_7536(var_634_int, "k8q01");
	var_637_bool = var_634_int == (int)7;
	if(var_637_bool != 0) {
		var_632_bool = 1;
		return 0;
	}
	var_632_bool = 0;
	return 0;
}


func_5698(var_0_object, var_1_object, var_2_object, var_3_string, var_330_object, var_331_object)
{
	var_0_object = var_331_object;
	var_1_object = var_330_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_337_string = "";
		func_5771(var_331_object, "Neutral");
		@@@var_0_object:SetMessage((int)542794);
		@@@var_0_object:ClearReplies();
		var_346_bool = 0; var_347_object = Obj();
		var_347_object = var_1_object;
		func_8652(var_347_object);
		if(var_346_bool != 0) {
			@@@var_0_object:AddReply((int)542798, (int)45222, (int)45221);
		}
		var_357_bool = 0; var_358_object = Obj();
		var_358_object = var_1_object;
		func_8652(var_358_object);
		if(var_357_bool != 0) {
			@@@var_0_object:AddReply((int)542802, (int)45224, (int)45225);
		}
		@@@var_0_object:AddReply((int)543009, (int)-1, (int)45461);
		goto Label_5741;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1646";
	}
Label_5741:
	var_365_bool = 0;
	func_7739(var_365_bool);
	if(var_365_bool != 0) {

	Label_5745:
		lshWaitForAnimEnd();
		var_366_string = var_3_string;
		if(var_366_string != 0) {
		} else {
			var_367_string = "";
			var_367_string = var_2_object;
			func_7456(var_367_string);
			goto Label_5745;
	}
		PlayAnimation("all", "idle");

	Label_5760:
		WaitForAnimEnd();
		var_370_string = var_3_string;
		if(var_370_string != 0) {
			goto Label_5770;
		}
		PlayAnimation("all", "idle");
		goto Label_5760;
	}
	goto Label_5770;
	
Label_5770:
	return 0;
	
}


func_7748(var_147_object)
{
	var_149_bool = 0; var_150_object = Obj(); var_151_float = 0;
	var_147_object = var_150_object;
	func_7604(var_149_bool, var_150_object, (float)-0.05000000074505806);
	return 0;
}


func_8776()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)416, (int)1, (int)526215);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_8919(var_56_bool, var_57_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7755(var_204_object)
{
	Trace("beta_pills 5 is given");
	var_207_object = Obj(); var_208_string = ""; var_209_int = 0;
	var_204_object = var_207_object;
	func_7591(var_207_object, "beta_pills", (int)5);
	return 0;
}


func_8270(var_1036_bool)
{
	var_1038_int = 0; var_1039_string = "";
	func_7536(var_1038_int, "ook11Aglaja1");
	var_1041_bool = var_1038_int == (int)0;
	if(var_1041_bool != 0) {
		var_1036_bool = 1;
		return 0;
	}
	var_1036_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_402_object, var_403_object)
{
	var_0_object = var_403_object;
	var_1_object = var_402_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_409_bool = 0; var_410_object = Obj();
		var_410_object = var_1_object;
		func_8198(var_410_object);
		if(var_409_bool != 0) {
			var_415_object = Obj(); var_416_object = Obj();
			var_415_object = var_1_object;
			var_416_object = var_0_object;
			func_8071();
			var_456_object = Obj(); var_457_object = Obj();
			var_456_object = var_1_object;
			var_457_object = var_0_object;
			func_8101();
			var_460_string = "";
			func_233(var_403_object, "Confusion");
			@@@var_0_object:SetMessage((int)526139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528171, (int)29526, (int)29525);
			@@@var_0_object:AddReply((int)528185, (int)29500, (int)29540);
		} else {
				var_483_object = Obj(); var_484_object = Obj();
				var_483_object = var_1_object;
				var_484_object = var_0_object;
				func_8101();
				var_485_string = "";
				func_233(var_403_object, "Neutral");
				@@@var_0_object:SetMessage((int)526149);
				@@@var_0_object:ClearReplies();
				var_487_bool = 0; var_488_object = Obj();
				var_488_object = var_1_object;
				func_8640(var_488_object);
				if(var_487_bool != 0) {
					@@@var_0_object:AddReply((int)541891, (int)44131, (int)44129);
				}
				var_496_bool = 0; var_497_object = Obj();
				var_497_object = var_1_object;
				func_8222(var_497_object);
				if(var_496_bool != 0) {
					@@@var_0_object:AddReply((int)526208, (int)29542, (int)27489);
				}
				var_505_bool = 0; var_506_object = Obj();
				var_506_object = var_1_object;
				func_8448(var_506_object);
				if(var_505_bool != 0) {
					@@@var_0_object:AddReply((int)528192, (int)29552, (int)29548);
				}
				var_514_bool = 0; var_515_object = Obj();
				var_515_object = var_1_object;
				func_8460(var_515_object);
				if(var_514_bool != 0) {
					@@@var_0_object:AddReply((int)528193, (int)29562, (int)29549);
				}
				var_523_bool = 0;
				var_523_bool = 0;
				var_524_bool = 0; var_525_object = Obj();
				var_525_object = var_1_object;
				func_8342(var_524_bool, var_525_object);
				if(var_524_bool != 0) {
					var_537_bool = 0; var_538_object = Obj();
					var_538_object = var_1_object;
					func_8352(var_538_object);
					if(var_537_bool != 0) {
						var_523_bool = 1;
					}
				}
				if(var_523_bool != 0) {
					@@@var_0_object:AddReply((int)538631, (int)40523, (int)40522);
				}
				@@@var_0_object:AddReply((int)526150, (int)-1, (int)27429);
				goto Label_203;
		}
	}
Label_203:
	var_475_bool = 0;
	func_7739(var_475_bool);
	if(var_475_bool != 0) {

	Label_207:
		lshWaitForAnimEnd();
		var_476_string = var_3_string;
		if(var_476_string != 0) {
		} else {
			var_477_string = "";
			var_477_string = var_2_object;
			func_7456(var_477_string);
			goto Label_207;
	}
		PlayAnimation("all", "idle");

	Label_222:
		WaitForAnimEnd();
		var_480_string = var_3_string;
		if(var_480_string != 0) {
			goto Label_232;
		}
		PlayAnimation("all", "idle");
		goto Label_222;

	}
	goto Label_232;
	
Label_232:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_8789()
{
	var_74_object = Obj(); var_75_object = Obj();
	CreateDiaryEntry(var_75_object, (int)417, (int)1, (int)526216);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_75_object = var_80_object;
	func_8919(var_79_bool, var_80_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7766()
{
	SetVariable("k7q01", (int)1);
	func_8776();
	func_8789();
	var_82_bool = 0; var_83_string = ""; var_84_string = "";
	func_7649(var_82_bool, "quest_k7_01", "place_danko");
	return 0;
}


func_8282(var_1075_bool)
{
	var_1077_int = 0; var_1078_string = "";
	func_7536(var_1077_int, "k11q01");
	var_1080_bool = var_1077_int == (int)0;
	if(var_1080_bool != 0) {
		var_1075_bool = 1;
		return 0;
	}
	var_1075_bool = 0;
	return 0;
}


func_1627(var_2_object, var_598_string)
{
	var_599_bool = 0;
	func_7739(var_599_bool);
	var_600_bool = var_599_bool == 0; //@nz
	if(var_600_bool != 0) {
		return 0;
	}
	var_601_bool = var_598_string == var_2_object;
	if(var_601_bool != 0) {
		return 0;
	}
	var_602_string = ""; var_603_bool = 0;
	var_598_string = var_602_string;
	var_605_bool = var_598_string == "";
	if(var_605_bool != 0) {
		var_603_bool = 0;
	} else {
		var_603_bool = 1;
	}
	func_7472(var_602_string, var_603_bool);
	var_2_object = var_598_string;
	return 0;
	
}


func_8802()
{
	var_98_object = Obj(); var_99_object = Obj();
	CreateDiaryEntry(var_99_object, (int)428, (int)1, (int)526227);
	var_103_bool = 0; var_104_object = Obj(); var_105_int = 0;
	var_99_object = var_104_object;
	func_8919(var_103_bool, var_104_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8294(var_1084_bool)
{
	var_1086_int = 0; var_1087_string = "";
	func_7536(var_1086_int, "k11q01");
	var_1089_bool = var_1086_int == (int)7;
	if(var_1089_bool != 0) {
		var_1084_bool = 1;
		return 0;
	}
	var_1084_bool = 0;
	return 0;
}


func_7783()
{
	func_8802();
	var_106_bool = 0; var_107_string = ""; var_108_string = ""; var_109_string = "";
	func_7661(var_106_bool, "volonteers_klara", "disease", "alexandr");
	var_113_bool = 0; var_114_string = ""; var_115_string = ""; var_116_string = "";
	func_7661(var_113_bool, "volonteers_klara", "disease", "katerina");
	var_117_bool = 0; var_118_string = ""; var_119_string = "";
	func_7649(var_117_bool, "quest_k7_01", "completed");
	return 0;
}


func_8815()
{
	var_164_object = Obj(); var_165_object = Obj();
	CreateDiaryEntry(var_165_object, (int)429, (int)1, (int)526228);
	var_169_bool = 0; var_170_object = Obj(); var_171_int = 0;
	var_165_object = var_170_object;
	func_8919(var_169_bool, var_170_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8306(var_766_bool)
{
	var_768_int = 0; var_769_string = "";
	func_7536(var_768_int, "ook9Aglaja1");
	var_771_bool = var_768_int == (int)0;
	if(var_771_bool != 0) {
		var_766_bool = 1;
		return 0;
	}
	var_766_bool = 0;
	return 0;
}


func_8828()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)438, (int)1, (int)526463);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_8919(var_56_bool, var_57_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6780(var_0_object, var_1_object, var_2_object, var_3_string, var_1202_object, var_1203_object)
{
	var_0_object = var_1203_object;
	var_1_object = var_1202_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1209_string = "";
		func_6838(var_1203_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_6808;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a80";
	}
Label_6808:
	var_1224_bool = 0;
	func_7739(var_1224_bool);
	if(var_1224_bool != 0) {

	Label_6812:
		lshWaitForAnimEnd();
		var_1225_string = var_3_string;
		if(var_1225_string != 0) {
		} else {
			var_1226_string = "";
			var_1226_string = var_2_object;
			func_7456(var_1226_string);
			goto Label_6812;
	}
		PlayAnimation("all", "idle");

	Label_6827:
		WaitForAnimEnd();
		var_1229_string = var_3_string;
		if(var_1229_string != 0) {
			goto Label_6837;
		}
		PlayAnimation("all", "idle");
		goto Label_6827;
	}
	goto Label_6837;
	
Label_6837:
	return 0;
	
}


func_7805()
{
	func_8815();
	var_172_bool = 0; var_173_string = ""; var_174_string = "";
	func_7649(var_172_bool, "quest_k7_01", "completed");
	return 0;
}


func_8318(var_805_bool)
{
	var_807_int = 0; var_808_string = "";
	func_7536(var_807_int, "k9q01");
	var_810_bool = var_807_int == (int)0;
	if(var_810_bool != 0) {
		var_805_bool = 1;
		return 0;
	}
	var_805_bool = 0;
	return 0;
}


func_7300()
{
	var_282_bool = 0; var_283_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_285_bool = 0;
	func_7739(var_285_bool);
	if(var_285_bool != 0) {
	} else {
		HasAnimationTrack(var_283_bool, "head");
		var_287_bool = var_283_bool;
		if(var_287_bool == 0) goto Label_7317;
		UnlookAsync("head");
	}
Label_7317:
	return 2;
	
}


func_7815()
{
	SetVariable("ook8Aglaja1", (int)1);
	return 0;
}


func_8841()
{
	var_74_object = Obj(); var_75_object = Obj();
	CreateDiaryEntry(var_75_object, (int)439, (int)1, (int)526464);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_75_object = var_80_object;
	func_8919(var_79_bool, var_80_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8330(var_814_bool)
{
	var_816_int = 0; var_817_string = "";
	func_7536(var_816_int, "k9q01");
	var_819_bool = var_816_int == (int)7;
	if(var_819_bool != 0) {
		var_814_bool = 1;
		return 0;
	}
	var_814_bool = 0;
	return 0;
}


func_5771(var_2_object, var_337_string)
{
	var_338_bool = 0;
	func_7739(var_338_bool);
	var_339_bool = var_338_bool == 0; //@nz
	if(var_339_bool != 0) {
		return 0;
	}
	var_340_bool = var_337_string == var_2_object;
	if(var_340_bool != 0) {
		return 0;
	}
	var_341_string = ""; var_342_bool = 0;
	var_337_string = var_341_string;
	var_344_bool = var_337_string == "";
	if(var_344_bool != 0) {
		var_342_bool = 0;
	} else {
		var_342_bool = 1;
	}
	func_7472(var_341_string, var_342_bool);
	var_2_object = var_337_string;
	return 0;
	
}


func_7821()
{
	SetVariable("k8q01", (int)1);
	func_8828();
	func_8841();
	return 0;
}


func_7318(var_136_bool, var_137_object)
{
	var_141_int = 0; var_142_int = 0; var_143_int = 0; var_144_int = 0;
	GetVariable("voice_common", var_143_int);
	var_146_int = var_143_int;
	if(var_146_int != 0) {
		var_147_bool = 0; var_148_object = Obj();
		var_137_object = var_148_object;
		func_7376(var_147_bool, var_148_object);
		var_177_bool = var_147_bool == 0; //@nz
		if(var_177_bool != 0) {
			var_178_bool = 0; var_179_object = Obj();
			var_137_object = var_179_object;
			func_7413(var_178_bool, var_179_object);
			var_213_bool = var_178_bool == 0; //@nz
			if(var_213_bool != 0) {
				var_136_bool = 0;
				return 4;
			}
		}
		irand(var_144_int, (int)2);
		var_215_int = var_144_int;
		if(var_215_int != 0) {
			var_218_int = var_143_int + (int)1;
			var_220_int = var_218_int % (int)3;
			SetVariable("voice_common", var_220_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_223_bool = 0; var_224_object = Obj();
		var_137_object = var_224_object;
		func_7413(var_223_bool, var_224_object);
		var_225_bool = var_223_bool == 0; //@nz
		if(var_225_bool != 0) {
			var_226_bool = 0; var_227_object = Obj();
			var_137_object = var_227_object;
			func_7376(var_226_bool, var_227_object);
			var_228_bool = var_226_bool == 0; //@nz
			if(var_228_bool != 0) {
				var_136_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_7374;
	
Label_7374:
	var_136_bool = 1;
	return 4;
	
}


func_8342(var_524_bool, var_525_object)
{
	var_526_bool = 0; var_527_object = Obj();
	var_525_object = var_527_object;
	func_8664(var_527_object);
	if(var_526_bool != 0) {
		var_524_bool = 1;
		return 0;
	}
	var_524_bool = 0;
	return 0;
}


func_6295(var_2_object, var_921_string)
{
	var_922_bool = 0;
	func_7739(var_922_bool);
	var_923_bool = var_922_bool == 0; //@nz
	if(var_923_bool != 0) {
		return 0;
	}
	var_924_bool = var_921_string == var_2_object;
	if(var_924_bool != 0) {
		return 0;
	}
	var_925_string = ""; var_926_bool = 0;
	var_921_string = var_925_string;
	var_928_bool = var_921_string == "";
	if(var_928_bool != 0) {
		var_926_bool = 0;
	} else {
		var_926_bool = 1;
	}
	func_7472(var_925_string, var_926_bool);
	var_2_object = var_921_string;
	return 0;
	
}


func_7833()
{
	func_8854();
	var_98_bool = 0; var_99_string = ""; var_100_string = "";
	func_7649(var_98_bool, "quest_k8_01", "completed");
	return 0;
}


func_8854()
{
	var_90_object = Obj(); var_91_object = Obj();
	CreateDiaryEntry(var_91_object, (int)446, (int)1, (int)526471);
	var_95_bool = 0; var_96_object = Obj(); var_97_int = 0;
	var_91_object = var_96_object;
	func_8919(var_95_bool, var_96_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8352(var_537_bool)
{
	var_539_int = 0; var_540_string = "";
	func_7536(var_539_int, "ook7Aglaja1");
	var_542_bool = var_539_int == (int)0;
	if(var_542_bool != 0) {
		var_537_bool = 1;
		return 0;
	}
	var_537_bool = 0;
	return 0;
}


func_7843()
{
	SetVariable("ook11Aglaja1", (int)1);
	return 0;
}


func_8867()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)517, (int)1, (int)529809);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_8919(var_56_bool, var_57_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7849()
{
	SetVariable("k11q01", (int)1);
	func_8724();
	func_8750();
	return 0;
}


func_8364(var_699_bool)
{
	var_701_int = 0; var_702_string = "";
	func_7536(var_701_int, "ook8Aglaja2");
	var_704_bool = var_701_int == (int)0;
	if(var_704_bool != 0) {
		var_699_bool = 1;
		return 0;
	}
	var_699_bool = 0;
	return 0;
}


func_8880()
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateDiaryEntry(var_105_object, (int)525, (int)1, (int)529817);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_105_object = var_110_object;
	func_8919(var_109_bool, var_110_object, (int)517);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5299(var_0_object, var_64_int, var_65_object)
{
	var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; var_71_object = Obj(); var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	var_0_object = var_65_object;
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0;
	var_65_object = var_76_object;
	func_7231(var_75_bool, var_76_object, (float)70.0);
	var_122_bool = var_75_bool == 0; //@nz
	if(var_122_bool != 0) {
		var_64_int = -2;
		return 8;
	}
	CreateDialog(var_71_object);
	var_123_int = 0;
	func_7733(var_123_int);
	@@var_71_object:SetNPCName(var_123_int);
	var_124_int = 0;
	func_7731(var_124_int);
	@@var_71_object:SetNPCDescription(var_124_int);
	var_125_string = "";
	func_7735(var_125_string);
	@@var_71_object:SetPhoto(var_125_string);
	var_126_string = "";
	func_7737(var_126_string);
	@@var_71_object:SetPhoto2(var_126_string);
	var_127_int = 0;
	func_8964(var_127_int);
	@@var_71_object:SetPlayerName(var_127_int);
	IsOverrideActive(var_72_bool);
	var_135_bool = var_72_bool;
	if(var_135_bool != 0) {
		var_64_int = -2;
		return 8;
	}
	DoDialog(var_71_object);
	var_136_bool = 0; var_137_object = Obj();
	func_7509(Obj());
	var_138_object = var_137_object;
	func_7318(var_136_bool, var_137_object);
	var_231_object = Obj(); var_232_object = Obj();
	var_65_object = var_231_object;
	var_71_object = var_232_object;
	TaskCall(9);
	func_5380(var_233_object, var_234_object, var_235_string, var_236_bool, var_231_object, var_232_object);
	TaskReturn();
	@@var_71_object:IsDialogEnd(var_74_bool);
	
Label_5362:
	var_280_bool = var_74_bool == 0; //@nz
	if(var_280_bool != 0) {
		sync();
		@@var_71_object:IsDialogEnd(var_74_bool);
		goto Label_5362;
	}
	var_65_object = Obj();
	func_7300();
	StopDialog(var_71_object);
	@@var_71_object:GetReturnValue((int)-1);
	var_73_int = var_64_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7861()
{
	SetVariable("k11q01", (int)8);
	func_8737();
	return 0;
}


func_6838(var_2_object, var_1209_string)
{
	var_1210_bool = 0;
	func_7739(var_1210_bool);
	var_1211_bool = var_1210_bool == 0; //@nz
	if(var_1211_bool != 0) {
		return 0;
	}
	var_1212_bool = var_1209_string == var_2_object;
	if(var_1212_bool != 0) {
		return 0;
	}
	var_1213_string = ""; var_1214_bool = 0;
	var_1209_string = var_1213_string;
	var_1216_bool = var_1209_string == "";
	if(var_1216_bool != 0) {
		var_1214_bool = 0;
	} else {
		var_1214_bool = 1;
	}
	func_7472(var_1213_string, var_1214_bool);
	var_2_object = var_1209_string;
	return 0;
	
}


func_8376(var_826_bool)
{
	var_828_int = 0; var_829_string = "";
	func_7536(var_828_int, "ook9Aglaja2");
	var_831_bool = var_828_int == (int)0;
	if(var_831_bool != 0) {
		var_826_bool = 1;
		return 0;
	}
	var_826_bool = 0;
	return 0;
}


func_8893()
{
	var_74_object = Obj(); var_75_object = Obj();
	CreateDiaryEntry(var_75_object, (int)518, (int)1, (int)529810);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_75_object = var_80_object;
	func_8919(var_79_bool, var_80_object, (int)517);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7870()
{
	SetVariable("ook9Aglaja1", (int)1);
	return 0;
}


func_8388(var_643_bool, var_644_object)
{
	var_645_bool = 0; var_646_object = Obj();
	var_644_object = var_646_object;
	func_8675(var_646_object);
	if(var_645_bool != 0) {
		var_643_bool = 1;
		return 0;
	}
	var_643_bool = 0;
	return 0;
}


func_7876()
{
	SetVariable("k9q01", (int)1);
	func_8867();
	func_8893();
	return 0;
}


func_2761(var_0_object, var_735_int, var_736_object)
{
	var_738_object = Obj(); var_739_bool = 0; var_740_int = 0; var_741_bool = 0; var_742_object = Obj(); var_743_bool = 0; var_744_int = 0; var_745_bool = 0;
	var_0_object = var_736_object;
	var_746_bool = 0; var_747_object = Obj(); var_748_float = 0;
	var_736_object = var_747_object;
	func_7231(var_746_bool, var_747_object, (float)70.0);
	var_749_bool = var_746_bool == 0; //@nz
	if(var_749_bool != 0) {
		var_735_int = -2;
		return 8;
	}
	CreateDialog(var_742_object);
	var_750_int = 0;
	func_7733(var_750_int);
	@@var_742_object:SetNPCName(var_750_int);
	var_751_int = 0;
	func_7731(var_751_int);
	@@var_742_object:SetNPCDescription(var_751_int);
	var_752_string = "";
	func_7735(var_752_string);
	@@var_742_object:SetPhoto(var_752_string);
	var_753_string = "";
	func_7737(var_753_string);
	@@var_742_object:SetPhoto2(var_753_string);
	var_754_int = 0;
	func_8964(var_754_int);
	@@var_742_object:SetPlayerName(var_754_int);
	IsOverrideActive(var_743_bool);
	var_755_bool = var_743_bool;
	if(var_755_bool != 0) {
		var_735_int = -2;
		return 8;
	}
	DoDialog(var_742_object);
	var_756_bool = 0; var_757_object = Obj();
	func_7509(Obj());
	var_758_object = var_757_object;
	func_7318(var_756_bool, var_757_object);
	var_759_object = Obj(); var_760_object = Obj();
	var_736_object = var_759_object;
	var_742_object = var_760_object;
	TaskCall(5);
	func_2842(var_761_object, var_762_object, var_763_string, var_764_bool, var_759_object, var_760_object);
	TaskReturn();
	@@var_742_object:IsDialogEnd(var_745_bool);
	
Label_2824:
	var_886_bool = var_745_bool == 0; //@nz
	if(var_886_bool != 0) {
		sync();
		@@var_742_object:IsDialogEnd(var_745_bool);
		goto Label_2824;
	}
	var_736_object = Obj();
	func_7300();
	StopDialog(var_742_object);
	@@var_742_object:GetReturnValue((int)-1);
	var_744_int = var_735_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8906(var_437_object)
{
	var_438_object = Obj(); var_439_object = Obj();
	GetDiaryRoot(var_439_object);
	var_440_bool = var_439_object == 0; //@nz
	if(var_440_bool != 0) {
		Trace("Can't retrieve diary root");
		var_437_object = 0;
		return 2;
	}
	var_439_object = var_437_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8398(var_653_bool, var_654_object)
{
	var_655_bool = 0; var_656_object = Obj();
	var_654_object = var_656_object;
	func_8681(var_656_object);
	if(var_655_bool != 0) {
		var_653_bool = 1;
		return 0;
	}
	var_653_bool = 0;
	return 0;
}


func_7888()
{
	SetVariable("k9q01", (int)8);
	func_8880();
	return 0;
}


func_7376(var_147_bool, var_148_object)
{
	var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = ""; var_154_string = ""; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_string = "";
	var_154_string = "c";
	var_155_int = 0;
	
Label_7379:
	if((int)1 != 0) {
		var_161_int = var_155_int + (int)1;
		var_162_int = var_154_string + var_161_int;
		@@var_148_object:HasProperty(var_162_int, var_156_bool);
		var_163_bool = var_156_bool == 0; //@nz
		if(var_163_bool != 0) {
		} else {
			var_155_int = var_155_int + (int)1;
			goto Label_7379;
		}
	}
	var_164_bool = var_155_int == 0; //@nz
	if(var_164_bool != 0) {
		var_147_bool = 0;
		return 10;
	}
	var_157_int = 0;
	var_166_bool = var_155_int > (int)1;
	if(var_166_bool != 0) {
		irand(var_157_int, var_155_int);
	}
	var_168_int = var_157_int + (int)1;
	var_169_int = var_154_string + var_168_int;
	@@var_148_object:GetProperty(var_169_int, var_158_string);
	var_170_bool = 0; var_171_string = "";
	var_158_string = var_171_string;
	func_7487(var_170_bool, var_171_string);
	var_170_bool = var_147_bool;
	return 10;
	
}


func_8919(var_428_bool, var_429_object, var_430_int)
{
	var_431_object = Obj(); var_432_object = Obj(); var_433_int = 0; var_434_object = Obj(); var_435_object = Obj(); var_436_int = 0;
	func_8906(Obj());
	var_437_object = var_434_object;
	@@var_434_object:Find(var_430_int, var_435_object);
	var_442_bool = var_435_object == 0; //@nz
	if(var_442_bool != 0) {
		var_444_int = "Can't find diary parent with id: " + var_430_int;
		Trace(var_444_int);
		var_428_bool = 0;
		return 6;
	}
	@@var_435_object:AddChild(var_429_object);
	SendWorldWndMessage((int)7);
	@@var_429_object:GetCategory(var_436_int);
	SetDiarySection(var_436_int);
	var_428_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_8408(var_680_bool, var_681_object)
{
	var_682_bool = 0; var_683_object = Obj();
	var_681_object = var_683_object;
	func_8687(var_683_object);
	if(var_682_bool != 0) {
		var_680_bool = 1;
		return 0;
	}
	var_680_bool = 0;
	return 0;
}


func_7897(var_176_object)
{
	Trace("money1000 is given");
	var_179_object = Obj(); var_180_int = 0;
	var_176_object = var_179_object;
	func_7553(var_179_object, (int)1000);
	return 0;
}


func_8418(var_712_bool, var_713_object)
{
	var_714_bool = 0; var_715_object = Obj();
	var_713_object = var_715_object;
	func_8693(var_715_object);
	if(var_714_bool != 0) {
		var_712_bool = 1;
		return 0;
	}
	var_712_bool = 0;
	return 0;
}


func_7907()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_8187(var_108_object)
{
	Trace("monomicin is given");
	var_111_object = Obj(); var_112_string = ""; var_113_int = 0;
	var_108_object = var_111_object;
	func_7591(var_111_object, "monomicin", (int)1);
	return 0;
}


func_233(var_2_object, var_460_string)
{
	var_461_bool = 0;
	func_7739(var_461_bool);
	var_462_bool = var_461_bool == 0; //@nz
	if(var_462_bool != 0) {
		return 0;
	}
	var_463_bool = var_460_string == var_2_object;
	if(var_463_bool != 0) {
		return 0;
	}
	var_464_string = ""; var_465_bool = 0;
	var_460_string = var_464_string;
	var_467_bool = var_460_string == "";
	if(var_467_bool != 0) {
		var_465_bool = 0;
	} else {
		var_465_bool = 1;
	}
	func_7472(var_464_string, var_465_bool);
	var_2_object = var_460_string;
	return 0;
	
}


func_7913()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_4331(var_2_object, var_1050_string)
{
	var_1051_bool = 0;
	func_7739(var_1051_bool);
	var_1052_bool = var_1051_bool == 0; //@nz
	if(var_1052_bool != 0) {
		return 0;
	}
	var_1053_bool = var_1050_string == var_2_object;
	if(var_1053_bool != 0) {
		return 0;
	}
	var_1054_string = ""; var_1055_bool = 0;
	var_1050_string = var_1054_string;
	var_1057_bool = var_1050_string == "";
	if(var_1057_bool != 0) {
		var_1055_bool = 0;
	} else {
		var_1055_bool = 1;
	}
	func_7472(var_1054_string, var_1055_bool);
	var_2_object = var_1050_string;
	return 0;
	
}


func_8428(var_1110_bool, var_1111_object)
{
	var_1112_bool = 0; var_1113_object = Obj();
	var_1111_object = var_1113_object;
	func_8699(var_1113_object);
	if(var_1112_bool != 0) {
		var_1110_bool = 1;
		return 0;
	}
	var_1110_bool = 0;
	return 0;
}


func_7919()
{
	SetVariable("ook7Aglaja1", (int)1);
	return 0;
}


func_8947(var_446_bool, var_447_int)
{
	var_448_object = Obj(); var_449_object = Obj(); var_450_object = Obj(); var_451_object = Obj();
	func_8906(Obj());
	var_452_object = var_450_object;
	@@var_450_object:Find(var_447_int, var_451_object);
	var_453_bool = var_451_object == 0; //@nz
	if(var_453_bool != 0) {
		var_446_bool = 0;
		return 4;
	}
	@@var_451_object:Remove();
	var_446_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7925()
{
	SetVariable("ook8Aglaja2", (int)1);
	return 0;
}


func_8438(var_1135_bool, var_1136_object)
{
	var_1137_bool = 0; var_1138_object = Obj();
	var_1136_object = var_1138_object;
	func_8705(var_1138_object);
	if(var_1137_bool != 0) {
		var_1135_bool = 1;
		return 0;
	}
	var_1135_bool = 0;
	return 0;
}


func_7413(var_178_bool, var_179_object)
{
	var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = "";
	var_191_int = 0;
	func_7673(var_191_int);
	var_197_int = "d" + var_191_int;
	var_185_string = var_197_int + "m";
	var_186_int = 0;
	
Label_7422:
	if((int)1 != 0) {
		var_201_int = var_186_int + (int)1;
		var_202_int = var_185_string + var_201_int;
		@@var_179_object:HasProperty(var_202_int, var_187_bool);
		var_203_bool = var_187_bool == 0; //@nz
		if(var_203_bool != 0) {
		} else {
			var_186_int = var_186_int + (int)1;
			goto Label_7422;
		}
	}
	var_204_bool = var_186_int == 0; //@nz
	if(var_204_bool != 0) {
		var_178_bool = 0;
		return 10;
	}
	var_188_int = 0;
	var_206_bool = var_186_int > (int)1;
	if(var_206_bool != 0) {
		irand(var_188_int, var_186_int);
	}
	var_208_int = var_188_int + (int)1;
	var_209_int = var_185_string + var_208_int;
	@@var_179_object:GetProperty(var_209_int, var_189_string);
	var_210_bool = 0; var_211_string = "";
	var_189_string = var_211_string;
	func_7487(var_210_bool, var_211_string);
	var_210_bool = var_178_bool;
	return 10;
	
}


func_6906(var_0_object)
{
	var_41_bool = 0;
	func_7226(var_41_bool);
	var_44_bool = var_41_bool == 0; //@nz
	if(var_44_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_6915:
	func_7082();
	goto Label_6915;
}
EMIT "Return(); Pop(0)";


func_7931()
{
	SetVariable("ook9Aglaja2", (int)1);
	return 0;
}


func_8448(var_505_bool)
{
	var_507_int = 0; var_508_string = "";
	func_7536(var_507_int, "ook7Aglaja2");
	var_510_bool = var_507_int == (int)0;
	if(var_510_bool != 0) {
		var_505_bool = 1;
		return 0;
	}
	var_505_bool = 0;
	return 0;
}


func_7937()
{
	SetVariable("ook7Aglaja2", (int)1);
	return 0;
}


func_8964(var_127_int)
{
	var_128_int = 0; var_129_int = 0;
	GetVariable("branch", var_129_int);
	var_132_bool = var_129_int == (int)0;
	if(var_132_bool != 0) {
		var_127_int = 1;
		return 2;
	EMIT "GOTO 0x2313";
	}
	var_134_bool = var_129_int == (int)1;
	if(var_134_bool != 0) {
		var_127_int = 2;
		return 2;
	}
	var_127_int = 3;
	return 2;
}


func_5380(var_0_object, var_1_object, var_2_object, var_3_string, var_231_object, var_232_object)
{
	var_0_object = var_232_object;
	var_1_object = var_231_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_238_string = "";
		func_5438(var_232_object, "Threat");
		@@@var_0_object:SetMessage((int)528157);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)528158, (int)29511, (int)29510);
		@@@var_0_object:AddReply((int)528163, (int)29516, (int)29515);
		goto Label_5408;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1508";
	}
Label_5408:
	var_262_bool = 0;
	func_7739(var_262_bool);
	if(var_262_bool != 0) {

	Label_5412:
		lshWaitForAnimEnd();
		var_263_string = var_3_string;
		if(var_263_string != 0) {
		} else {
			var_264_string = "";
			var_264_string = var_2_object;
			func_7456(var_264_string);
			goto Label_5412;
	}
		PlayAnimation("all", "idle");

	Label_5427:
		WaitForAnimEnd();
		var_277_string = var_3_string;
		if(var_277_string != 0) {
			goto Label_5437;
		}
		PlayAnimation("all", "idle");
		goto Label_5427;
	}
	goto Label_5437;
	
Label_5437:
	return 0;
	
}


func_7943()
{
	SetVariable("ook7Aglaja3", (int)1);
	return 0;
}


func_6920(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj();
	FindActor(var_68_object, "player");
	var_70_bool = var_68_object == 0; //@nz
	if(var_70_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	var_71_bool = 0; var_72_object = Obj();
	var_68_object = var_72_object;
	func_7217(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8460(var_514_bool)
{
	var_516_int = 0; var_517_string = "";
	func_7536(var_516_int, "ook7Aglaja3");
	var_519_bool = var_516_int == (int)0;
	if(var_519_bool != 0) {
		var_514_bool = 1;
		return 0;
	}
	var_514_bool = 0;
	return 0;
}


func_7949()
{
	SetVariable("ook8Aglaja3", (int)1);
	return 0;
}


func_7955()
{
	SetVariable("ook8Aglaja4", (int)1);
	return 0;
}


func_8981(var_528_bool, var_529_int)
{
	var_532_int = 0; var_533_int = 0;
	var_535_int = "K2System" + var_529_int;
	GetVariable(var_535_int, var_533_int);
	var_528_bool = var_533_int != (int)0;
	return 2;
}


func_6935(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_118_float, var_119_float);
	return 0;
}


func_8472(var_667_bool)
{
	var_669_int = 0; var_670_string = "";
	func_7536(var_669_int, "ook8Aglaja3");
	var_672_bool = var_669_int == (int)0;
	if(var_672_bool != 0) {
		var_667_bool = 1;
		return 0;
	}
	var_667_bool = 0;
	return 0;
}


func_7961()
{
	SetVariable("ook8Aglaja5", (int)1);
	return 0;
}


func_2842(var_0_object, var_1_object, var_2_object, var_3_string, var_759_object, var_760_object)
{
	var_0_object = var_760_object;
	var_1_object = var_759_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_766_bool = 0; var_767_object = Obj();
		var_767_object = var_1_object;
		func_8306(var_767_object);
		if(var_766_bool != 0) {
			var_772_object = Obj(); var_773_object = Obj();
			var_772_object = var_1_object;
			var_773_object = var_0_object;
			func_7870();
			var_776_object = Obj(); var_777_object = Obj();
			var_776_object = var_1_object;
			var_777_object = var_0_object;
			func_8113();
			var_780_string = "";
			func_3058(var_760_object, "Neutral");
			@@@var_0_object:SetMessage((int)526473);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541959, (int)44218, (int)44216);
			@@@var_0_object:AddReply((int)541960, (int)44218, (int)44217);
		} else {
				var_803_string = "";
				func_3058(var_760_object, "Neutral");
				@@@var_0_object:SetMessage((int)526478);
				@@@var_0_object:ClearReplies();
				var_805_bool = 0; var_806_object = Obj();
				var_806_object = var_1_object;
				func_8318(var_806_object);
				if(var_805_bool != 0) {
					@@@var_0_object:AddReply((int)529716, (int)31170, (int)31169);
				}
				var_814_bool = 0; var_815_object = Obj();
				var_815_object = var_1_object;
				func_8330(var_815_object);
				if(var_814_bool != 0) {
					@@@var_0_object:AddReply((int)529721, (int)31178, (int)31175);
				}
				var_823_bool = 0;
				var_823_bool = 0;
				var_824_bool = 0; var_825_object = Obj();
				var_825_object = var_1_object;
				func_8342(var_824_bool, var_825_object);
				if(var_824_bool != 0) {
					var_826_bool = 0; var_827_object = Obj();
					var_827_object = var_1_object;
					func_8376(var_827_object);
					if(var_826_bool != 0) {
						var_823_bool = 1;
					}
				}
				if(var_823_bool != 0) {
					@@@var_0_object:AddReply((int)538649, (int)40544, (int)40543);
				}
				var_835_bool = 0;
				var_835_bool = 0;
				var_836_bool = 0;
				var_836_bool = 0;
				var_837_bool = 0; var_838_object = Obj();
				var_838_object = var_1_object;
				func_8388(var_837_bool, var_838_object);
				if(var_837_bool != 0) {
					var_839_bool = 0; var_840_object = Obj();
					var_840_object = var_1_object;
					func_8398(var_839_bool, var_840_object);
					if(var_839_bool != 0) {
						var_836_bool = 1;
					}
				}
				if(var_836_bool != 0) {
					var_841_bool = 0; var_842_object = Obj();
					var_842_object = var_1_object;
					func_8508(var_842_object);
					if(var_841_bool != 0) {
						var_835_bool = 1;
					}
				}
				if(var_835_bool != 0) {
					@@@var_0_object:AddReply((int)539783, (int)41736, (int)41735);
				}
				var_850_bool = 0;
				var_850_bool = 0;
				var_851_bool = 0;
				var_851_bool = 0;
				var_852_bool = 0; var_853_object = Obj();
				var_853_object = var_1_object;
				func_8388(var_852_bool, var_853_object);
				if(var_852_bool != 0) {
					var_854_bool = 0; var_855_object = Obj();
					var_855_object = var_1_object;
					func_8520(var_855_object);
					if(var_854_bool != 0) {
						var_851_bool = 1;
					}
				}
				if(var_851_bool != 0) {
					var_860_bool = 0; var_861_object = Obj();
					var_861_object = var_1_object;
					func_8408(var_860_bool, var_861_object);
					if(var_860_bool != 0) {
						var_850_bool = 1;
					}
				}
				if(var_850_bool != 0) {
					@@@var_0_object:AddReply((int)539786, (int)41739, (int)41738);
				}
				var_865_bool = 0;
				var_865_bool = 0;
				var_866_bool = 0;
				var_866_bool = 0;
				var_867_bool = 0; var_868_object = Obj();
				var_868_object = var_1_object;
				func_8388(var_867_bool, var_868_object);
				if(var_867_bool != 0) {
					var_869_bool = 0; var_870_object = Obj();
					var_870_object = var_1_object;
					func_8418(var_869_bool, var_870_object);
					if(var_869_bool != 0) {
						var_866_bool = 1;
					}
				}
				if(var_866_bool != 0) {
					var_871_bool = 0; var_872_object = Obj();
					var_872_object = var_1_object;
					func_8532(var_872_object);
					if(var_871_bool != 0) {
						var_865_bool = 1;
					}
				}
				if(var_865_bool != 0) {
					@@@var_0_object:AddReply((int)539789, (int)41742, (int)41741);
				}
				@@@var_0_object:AddReply((int)526479, (int)-1, (int)27745);
				@@@var_0_object:AddReply((int)541970, (int)-1, (int)44231);
				goto Label_3028;
		}
	}
Label_3028:
	var_795_bool = 0;
	func_7739(var_795_bool);
	if(var_795_bool != 0) {

	Label_3032:
		lshWaitForAnimEnd();
		var_796_string = var_3_string;
		if(var_796_string != 0) {
		} else {
			var_797_string = "";
			var_797_string = var_2_object;
			func_7456(var_797_string);
			goto Label_3032;
	}
		PlayAnimation("all", "idle");

	Label_3047:
		WaitForAnimEnd();
		var_800_string = var_3_string;
		if(var_800_string != 0) {
			goto Label_3057;
		}
		PlayAnimation("all", "idle");
		goto Label_3047;

	}
	goto Label_3057;
	
Label_3057:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xb1e";


func_6940(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0;
	FindActor(var_52_object, "player");
	var_55_bool = var_52_object == 0; //@nz
	if(var_55_bool != 0) {
		var_49_bool = 0;
		return 4;
	}
	var_56_float = 0; var_57_object = Obj();
	var_52_object = var_57_object;
	func_7158(var_56_float, var_57_object);
	var_65_bool = var_56_float > (float)90000.0;
	if(var_65_bool != 0) {
		var_49_bool = 0;
		return 4;
	}
	CanSee(var_53_bool, var_52_object);
	var_53_bool = var_49_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_8989(var_649_int)
{
	var_650_int = 0; var_651_int = 0;
	GetVariable("k2system_burah_day", var_651_int);
	var_651_int = var_649_int;
	return 2;
}


func_7967()
{
	func_8763();
	return 0;
}


func_7456(var_264_string)
{
	var_265_bool = 0; var_266_float = 0; var_267_float = 0; var_268_bool = 0; var_269_float = 0; var_270_float = 0;
	lshHasAnimation(var_268_bool, var_264_string);
	var_271_bool = var_268_bool;
	if(var_271_bool != 0) {
		lshGetAnimTimes(var_264_string, var_269_float, var_270_float);
		lshPlayAnimation(var_269_float, var_270_float, (bool)0);
	} else {
		var_274_int = "Can't find lsh animation : " + var_264_string;
		Trace(var_274_int);
	}
	return 6;
	
}


func_8995(var_1116_int)
{
	var_1117_int = 0; var_1118_int = 0;
	GetVariable("k2system_danko_day", var_1118_int);
	var_1118_int = var_1116_int;
	return 2;
}


func_8484(var_687_bool)
{
	var_689_int = 0; var_690_string = "";
	func_7536(var_689_int, "ook8Aglaja4");
	var_692_bool = var_689_int == (int)0;
	if(var_692_bool != 0) {
		var_687_bool = 1;
		return 0;
	}
	var_687_bool = 0;
	return 0;
}


func_7972()
{
	SetVariable("ook9Aglaja3", (int)1);
	return 0;
}


func_9001(var_658_int)
{
	var_659_int = 0; var_660_int = 0; var_661_int = 0; var_662_int = 0;
	func_8989((int)0);
	var_663_int = var_661_int;
	var_665_int = "k2system_burah_state" + var_661_int;
	GetVariable(var_665_int, var_662_int);
	var_662_int = var_658_int;
	return 4;
}


func_7978()
{
	SetVariable("ook9Aglaja4", (int)1);
	return 0;
}


func_7472(var_242_string, var_243_bool)
{
	var_246_bool = 0; var_247_float = 0; var_248_float = 0; var_249_bool = 0; var_250_float = 0; var_251_float = 0;
	lshHasAnimation(var_249_bool, var_242_string);
	var_252_bool = var_249_bool;
	if(var_252_bool != 0) {
		lshGetAnimTimes(var_242_string, var_250_float, var_251_float);
		lshPlayAnimation(var_250_float, var_251_float, var_243_bool);
	} else {
		var_254_int = "Can't find lsh animation : " + var_242_string;
		Trace(var_254_int);
	}
	return 6;
	
}


func_8496(var_719_bool)
{
	var_721_int = 0; var_722_string = "";
	func_7536(var_721_int, "ook8Aglaja5");
	var_724_bool = var_721_int == (int)0;
	if(var_724_bool != 0) {
		var_719_bool = 1;
		return 0;
	}
	var_719_bool = 0;
	return 0;
}


func_7984()
{
	SetVariable("ook9Aglaja5", (int)1);
	return 0;
}


func_6962()
{
	var_1236_float = 0; var_1237_float = 0;
	rand(var_1237_float, (int)8, (int)16);
	SetTimer((int)10, var_1237_float);
	return 2;
}


func_9012(var_1140_int)
{
	var_1141_int = 0; var_1142_int = 0; var_1143_int = 0; var_1144_int = 0;
	func_8995((int)0);
	var_1145_int = var_1143_int;
	var_1147_int = "k2system_danko_state" + var_1143_int;
	GetVariable(var_1147_int, var_1144_int);
	var_1144_int = var_1140_int;
	return 4;
}


func_7990()
{
	SetVariable("ook10Aglaja1", (int)1);
	return 0;
}


func_1335(var_0_object, var_553_int, var_554_object)
{
	var_556_object = Obj(); var_557_bool = 0; var_558_int = 0; var_559_bool = 0; var_560_object = Obj(); var_561_bool = 0; var_562_int = 0; var_563_bool = 0;
	var_0_object = var_554_object;
	var_564_bool = 0; var_565_object = Obj(); var_566_float = 0;
	var_554_object = var_565_object;
	func_7231(var_564_bool, var_565_object, (float)70.0);
	var_567_bool = var_564_bool == 0; //@nz
	if(var_567_bool != 0) {
		var_553_int = -2;
		return 8;
	}
	CreateDialog(var_560_object);
	var_568_int = 0;
	func_7733(var_568_int);
	@@var_560_object:SetNPCName(var_568_int);
	var_569_int = 0;
	func_7731(var_569_int);
	@@var_560_object:SetNPCDescription(var_569_int);
	var_570_string = "";
	func_7735(var_570_string);
	@@var_560_object:SetPhoto(var_570_string);
	var_571_string = "";
	func_7737(var_571_string);
	@@var_560_object:SetPhoto2(var_571_string);
	var_572_int = 0;
	func_8964(var_572_int);
	@@var_560_object:SetPlayerName(var_572_int);
	IsOverrideActive(var_561_bool);
	var_573_bool = var_561_bool;
	if(var_573_bool != 0) {
		var_553_int = -2;
		return 8;
	}
	DoDialog(var_560_object);
	var_574_bool = 0; var_575_object = Obj();
	func_7509(Obj());
	var_576_object = var_575_object;
	func_7318(var_574_bool, var_575_object);
	var_577_object = Obj(); var_578_object = Obj();
	var_554_object = var_577_object;
	var_560_object = var_578_object;
	TaskCall(3);
	func_1416(var_579_object, var_580_object, var_581_string, var_582_bool, var_577_object, var_578_object);
	TaskReturn();
	@@var_560_object:IsDialogEnd(var_563_bool);
	
Label_1398:
	var_731_bool = var_563_bool == 0; //@nz
	if(var_731_bool != 0) {
		sync();
		@@var_560_object:IsDialogEnd(var_563_bool);
		goto Label_1398;
	}
	var_554_object = Obj();
	func_7300();
	StopDialog(var_560_object);
	@@var_560_object:GetReturnValue((int)-1);
	var_562_int = var_553_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6971()
{
	KillTimer((int)10);
	return 0;
}


func_8508(var_841_bool)
{
	var_843_int = 0; var_844_string = "";
	func_7536(var_843_int, "ook9Aglaja3");
	var_846_bool = var_843_int == (int)0;
	if(var_846_bool != 0) {
		var_841_bool = 1;
		return 0;
	}
	var_841_bool = 0;
	return 0;
}


func_7996()
{
	SetVariable("ook10Aglaja2", (int)1);
	return 0;
}


func_5438(var_2_object, var_238_string)
{
	var_239_bool = 0;
	func_7739(var_239_bool);
	var_240_bool = var_239_bool == 0; //@nz
	if(var_240_bool != 0) {
		return 0;
	}
	var_241_bool = var_238_string == var_2_object;
	if(var_241_bool != 0) {
		return 0;
	}
	var_242_string = ""; var_243_bool = 0;
	var_238_string = var_242_string;
	var_245_bool = var_238_string == "";
	if(var_245_bool != 0) {
		var_243_bool = 0;
	} else {
		var_243_bool = 1;
	}
	func_7472(var_242_string, var_243_bool);
	var_2_object = var_238_string;
	return 0;
	
}


func_7487(var_170_bool, var_171_string)
{
	var_172_bool = 0; var_173_bool = 0;
	var_174_bool = 0;
	func_7739(var_174_bool);
	if(var_174_bool != 0) {
		lshHasSpeech(var_173_bool, var_171_string);
		var_175_bool = var_173_bool;
		if(var_175_bool != 0) {
			lshPlaySpeech(var_171_string);
			var_170_bool = 1;
			return 2;
		}
	}
	var_170_bool = 0;
	return 2;
}


func_9023(var_1114_bool)
{
	var_1115_int = 0;
	func_7673(var_1115_int);
	var_1116_int = 0;
	func_8995(var_1116_int);
	var_1114_bool = var_1115_int == var_1116_int;
	return 0;
}


func_8002()
{
	SetVariable("ook10Aglaja3", (int)1);
	return 0;
}


func_9031(var_1139_bool)
{
	var_1140_int = 0;
	func_9012(var_1140_int);
	var_1139_bool = var_1140_int == (int)3;
	return 0;
}


func_8520(var_854_bool)
{
	var_856_int = 0; var_857_string = "";
	func_7536(var_856_int, "ook9Aglaja4");
	var_859_bool = var_856_int == (int)0;
	if(var_859_bool != 0) {
		var_854_bool = 1;
		return 0;
	}
	var_854_bool = 0;
	return 0;
}


func_8008()
{
	SetVariable("ook10Aglaja4", (int)1);
	return 0;
}


func_9037(var_647_bool)
{
	var_648_int = 0;
	func_7673(var_648_int);
	var_649_int = 0;
	func_8989(var_649_int);
	var_647_bool = var_648_int == var_649_int;
	return 0;
}


func_7502()
{
	var_44_bool = 0;
	func_7739(var_44_bool);
	if(var_44_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_8014()
{
	SetVariable("ook11Aglaja2", (int)1);
	return 0;
}


func_8532(var_871_bool)
{
	var_873_int = 0; var_874_string = "";
	func_7536(var_873_int, "ook9Aglaja5");
	var_876_bool = var_873_int == (int)0;
	if(var_876_bool != 0) {
		var_871_bool = 1;
		return 0;
	}
	var_871_bool = 0;
	return 0;
}


func_7509(var_138_object)
{
	var_139_object = Obj(); var_140_object = Obj();
	self(var_140_object);
	var_140_object = var_138_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8020()
{
	SetVariable("ook11Aglaja3", (int)1);
	return 0;
}


func_9045(var_684_bool)
{
	var_685_int = 0;
	func_9001(var_685_int);
	var_684_bool = var_685_int == (int)2;
	return 0;
}


func_8026()
{
	SetVariable("ook11Aglaja4", (int)1);
	return 0;
}


func_7515(var_102_cvector, var_103_cvector)
{
	var_105_float = 0; var_106_float = 0;
	var_107_int = var_103_cvector | var_103_cvector;
	var_106_float = sqrt(var_107_int);
	var_108_float = 9.999999974752427e-07;
	var_109_bool = var_106_float < var_108_float;
	if(var_109_bool != 0) {
		var_102_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_102_cvector = var_103_cvector / var_106_float;
	return 2;
}


func_9051(var_716_bool)
{
	var_717_int = 0;
	func_9001(var_717_int);
	var_716_bool = var_717_int == (int)3;
	return 0;
}


func_8032()
{
	SetVariable("ook11Aglaja5", (int)1);
	return 0;
}


func_8544(var_936_bool)
{
	var_938_int = 0; var_939_string = "";
	func_7536(var_938_int, "ook10Aglaja1");
	var_941_bool = var_938_int == (int)0;
	if(var_941_bool != 0) {
		var_936_bool = 1;
		return 0;
	}
	var_936_bool = 0;
	return 0;
}


func_9057(var_657_bool)
{
	var_658_int = 0;
	func_9001(var_658_int);
	var_657_bool = var_658_int == (int)0;
	return 0;
}


func_7525(var_178_float, var_179_float, var_180_float, var_181_float)
{
	var_182_bool = var_179_float < var_180_float;
	if(var_182_bool != 0) {
		var_180_float = var_178_float;
		return 0;
	}
	var_183_bool = var_179_float > var_181_float;
	if(var_183_bool != 0) {
		var_181_float = var_178_float;
		return 0;
	}
	var_179_float = var_178_float;
	return 0;
}


func_8038(var_255_object)
{
	var_257_int = 0; var_258_int = 0;
	irand(var_258_int, (int)1000);
	var_260_object = Obj(); var_261_int = 0;
	var_255_object = var_260_object;
	var_261_int = var_258_int + (int)2000;
	func_7553(var_260_object, var_261_int);
	return 2;
}


func_9063(var_59_object)
{
	var_60_int = 0; var_61_int = 0;
	GetVariable("mt_aglaja", var_61_int);
	var_63_bool = var_61_int == 0; //@nz
	if(var_63_bool != 0) {
		var_64_int = 0; var_65_object = Obj();
		var_59_object = var_65_object;
		TaskCall(8);
		func_5299(var_66_object, var_64_int, var_65_object);
		TaskReturn();
		SetVariable("mt_aglaja", (int)1);
	}
	var_291_bool = 0; var_292_int = 0;
	func_7688(var_291_bool, (int)12);
	if(var_291_bool != 0) {
		var_306_int = 0; var_307_object = Obj();
		var_59_object = var_307_object;
		TaskCall(10);
		func_5617(var_308_object, var_306_int, var_307_object);
		TaskReturn();
		return 2;
	}
	var_375_bool = 0; var_376_int = 0;
	func_7682(var_375_bool, (int)7);
	if(var_375_bool != 0) {
		var_378_int = 0; var_379_object = Obj();
		var_59_object = var_379_object;
		TaskCall(0);
		func_0(var_380_object, var_378_int, var_379_object);
		TaskReturn();
		return 2;
	}
	var_551_bool = 0; var_552_int = 0;
	func_7682(var_551_bool, (int)8);
	if(var_551_bool != 0) {
		var_553_int = 0; var_554_object = Obj();
		var_59_object = var_554_object;
		TaskCall(2);
		func_1335(var_555_object, var_553_int, var_554_object);
		TaskReturn();
		return 2;
	}
	var_733_bool = 0; var_734_int = 0;
	func_7682(var_733_bool, (int)9);
	if(var_733_bool != 0) {
		var_735_int = 0; var_736_object = Obj();
		var_59_object = var_736_object;
		TaskCall(4);
		func_2761(var_737_object, var_735_int, var_736_object);
		TaskReturn();
		return 2;
	}
	var_888_bool = 0; var_889_int = 0;
	func_7682(var_888_bool, (int)10);
	if(var_888_bool != 0) {
		var_890_int = 0; var_891_object = Obj();
		var_59_object = var_891_object;
		TaskCall(12);
		func_6053(var_892_object, var_890_int, var_891_object);
		TaskReturn();
		return 2;
	}
	var_1003_bool = 0; var_1004_int = 0;
	func_7682(var_1003_bool, (int)11);
	if(var_1003_bool != 0) {
		var_1005_int = 0; var_1006_object = Obj();
		var_59_object = var_1006_object;
		TaskCall(6);
		func_4034(var_1007_object, var_1005_int, var_1006_object);
		TaskReturn();
		return 2;
	}
	var_1178_int = 0; var_1179_object = Obj();
	var_59_object = var_1179_object;
	TaskCall(14);
	func_6699(var_1180_object, var_1178_int, var_1179_object);
	TaskReturn();
	return 2;
}


func_8556(var_949_bool)
{
	var_951_int = 0; var_952_string = "";
	func_7536(var_951_int, "ook10Aglaja2");
	var_954_bool = var_951_int == (int)0;
	if(var_954_bool != 0) {
		var_949_bool = 1;
		return 0;
	}
	var_949_bool = 0;
	return 0;
}


func_7536(var_348_int, var_349_string)
{
	var_350_int = 0; var_351_int = 0;
	GetVariable(var_349_string, var_351_int);
	var_351_int = var_348_int;
	return 2;
}


func_8049(var_164_object)
{
	var_166_int = 0; var_167_int = 0;
	irand(var_167_int, (int)1000);
	var_169_object = Obj(); var_170_int = 0;
	var_164_object = var_169_object;
	var_170_int = var_167_int + (int)3000;
	func_7553(var_169_object, var_170_int);
	return 2;
}


func_7541(var_103_int, var_104_int)
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateIntVector(var_106_object);
	@@var_106_object:add(var_103_int);
	@@var_106_object:add(var_104_int);
	SendWorldWndMessage((int)3, var_106_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8568(var_966_bool)
{
	var_968_int = 0; var_969_string = "";
	func_7536(var_968_int, "ook10Aglaja3");
	var_971_bool = var_968_int == (int)0;
	if(var_971_bool != 0) {
		var_966_bool = 1;
		return 0;
	}
	var_966_bool = 0;
	return 0;
}


func_8060(var_84_object)
{
	var_86_int = 0; var_87_int = 0;
	irand(var_87_int, (int)1000);
	var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	var_90_int = var_87_int + (int)4000;
	func_7553(var_89_object, var_90_int);
	return 2;
}


func_7553(var_89_object, var_90_int)
{
	var_92_int = 0; var_93_int = 0;
	var_94_object = Obj(); var_95_string = ""; var_96_int = 0;
	var_89_object = var_94_object;
	var_90_int = var_96_int;
	func_7200(var_94_object, "money", var_96_int);
	var_101_bool = var_90_int > (int)0;
	if(var_101_bool != 0) {
		GetInvItemByName(var_93_int, "Money");
		var_103_int = 0; var_104_int = 0;
		var_93_int = var_103_int;
		var_90_int = var_104_int;
		func_7541(var_103_int, var_104_int);
	}
	return 2;
}


func_8580(var_978_bool)
{
	var_980_int = 0; var_981_string = "";
	func_7536(var_980_int, "ook10Aglaja4");
	var_983_bool = var_980_int == (int)0;
	if(var_983_bool != 0) {
		var_978_bool = 1;
		return 0;
	}
	var_978_bool = 0;
	return 0;
}


func_8071()
{
	var_417_int = 0; var_418_string = "";
	func_7536(var_417_int, "K_Mission3");
	var_420_bool = var_417_int == (int)0;
	if(var_420_bool != 0) {
		SetVariable("K_Mission3", (int)1);
		func_8711();
		var_446_bool = 0; var_447_int = 0;
		func_8947(var_446_bool, (int)567);
		var_454_bool = 0; var_455_int = 0;
		func_8947(var_454_bool, (int)568);
	}
	return 0;
}


func_1416(var_0_object, var_1_object, var_2_object, var_3_string, var_577_object, var_578_object)
{
	var_0_object = var_578_object;
	var_1_object = var_577_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_584_bool = 0; var_585_object = Obj();
		var_585_object = var_1_object;
		func_8234(var_585_object);
		if(var_584_bool != 0) {
			var_590_object = Obj(); var_591_object = Obj();
			var_590_object = var_1_object;
			var_591_object = var_0_object;
			func_7815();
			var_594_object = Obj(); var_595_object = Obj();
			var_594_object = var_1_object;
			var_595_object = var_0_object;
			func_8107();
			var_598_string = "";
			func_1627(var_578_object, "Neutral");
			@@@var_0_object:SetMessage((int)526396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528207, (int)29565, (int)29564);
			@@@var_0_object:AddReply((int)528219, (int)29577, (int)29576);
		} else {
				var_621_string = "";
				func_1627(var_578_object, "Neutral");
				@@@var_0_object:SetMessage((int)526399);
				@@@var_0_object:ClearReplies();
				var_623_bool = 0; var_624_object = Obj();
				var_624_object = var_1_object;
				func_8246(var_624_object);
				if(var_623_bool != 0) {
					@@@var_0_object:AddReply((int)526400, (int)27676, (int)27675);
				}
				var_632_bool = 0; var_633_object = Obj();
				var_633_object = var_1_object;
				func_8258(var_633_object);
				if(var_632_bool != 0) {
					@@@var_0_object:AddReply((int)526460, (int)29590, (int)27735);
				}
				var_641_bool = 0;
				var_641_bool = 0;
				var_642_bool = 0;
				var_642_bool = 0;
				var_643_bool = 0; var_644_object = Obj();
				var_644_object = var_1_object;
				func_8388(var_643_bool, var_644_object);
				if(var_643_bool != 0) {
					var_653_bool = 0; var_654_object = Obj();
					var_654_object = var_1_object;
					func_8398(var_653_bool, var_654_object);
					if(var_653_bool != 0) {
						var_642_bool = 1;
					}
				}
				if(var_642_bool != 0) {
					var_667_bool = 0; var_668_object = Obj();
					var_668_object = var_1_object;
					func_8472(var_668_object);
					if(var_667_bool != 0) {
						var_641_bool = 1;
					}
				}
				if(var_641_bool != 0) {
					@@@var_0_object:AddReply((int)539774, (int)41727, (int)41726);
				}
				var_676_bool = 0;
				var_676_bool = 0;
				var_677_bool = 0;
				var_677_bool = 0;
				var_678_bool = 0; var_679_object = Obj();
				var_679_object = var_1_object;
				func_8388(var_678_bool, var_679_object);
				if(var_678_bool != 0) {
					var_680_bool = 0; var_681_object = Obj();
					var_681_object = var_1_object;
					func_8408(var_680_bool, var_681_object);
					if(var_680_bool != 0) {
						var_677_bool = 1;
					}
				}
				if(var_677_bool != 0) {
					var_687_bool = 0; var_688_object = Obj();
					var_688_object = var_1_object;
					func_8484(var_688_object);
					if(var_687_bool != 0) {
						var_676_bool = 1;
					}
				}
				if(var_676_bool != 0) {
					@@@var_0_object:AddReply((int)539777, (int)41730, (int)41729);
				}
				var_696_bool = 0;
				var_696_bool = 0;
				var_697_bool = 0; var_698_object = Obj();
				var_698_object = var_1_object;
				func_8342(var_697_bool, var_698_object);
				if(var_697_bool != 0) {
					var_699_bool = 0; var_700_object = Obj();
					var_700_object = var_1_object;
					func_8364(var_700_object);
					if(var_699_bool != 0) {
						var_696_bool = 1;
					}
				}
				if(var_696_bool != 0) {
					@@@var_0_object:AddReply((int)538642, (int)40537, (int)40536);
				}
				var_708_bool = 0;
				var_708_bool = 0;
				var_709_bool = 0;
				var_709_bool = 0;
				var_710_bool = 0; var_711_object = Obj();
				var_711_object = var_1_object;
				func_8388(var_710_bool, var_711_object);
				if(var_710_bool != 0) {
					var_712_bool = 0; var_713_object = Obj();
					var_713_object = var_1_object;
					func_8418(var_712_bool, var_713_object);
					if(var_712_bool != 0) {
						var_709_bool = 1;
					}
				}
				if(var_709_bool != 0) {
					var_719_bool = 0; var_720_object = Obj();
					var_720_object = var_1_object;
					func_8496(var_720_object);
					if(var_719_bool != 0) {
						var_708_bool = 1;
					}
				}
				if(var_708_bool != 0) {
					@@@var_0_object:AddReply((int)539780, (int)44208, (int)41732);
				}
				@@@var_0_object:AddReply((int)526403, (int)-1, (int)27678);
				goto Label_1597;
		}
	}
Label_1597:
	var_613_bool = 0;
	func_7739(var_613_bool);
	if(var_613_bool != 0) {

	Label_1601:
		lshWaitForAnimEnd();
		var_614_string = var_3_string;
		if(var_614_string != 0) {
		} else {
			var_615_string = "";
			var_615_string = var_2_object;
			func_7456(var_615_string);
			goto Label_1601;
	}
		PlayAnimation("all", "idle");

	Label_1616:
		WaitForAnimEnd();
		var_618_string = var_3_string;
		if(var_618_string != 0) {
			goto Label_1626;
		}
		PlayAnimation("all", "idle");
		goto Label_1616;

	}
	goto Label_1626;
	
Label_1626:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x58c";


func_8592(var_1099_bool)
{
	var_1101_int = 0; var_1102_string = "";
	func_7536(var_1101_int, "ook11Aglaja2");
	var_1104_bool = var_1101_int == (int)0;
	if(var_1104_bool != 0) {
		var_1099_bool = 1;
		return 0;
	}
	var_1099_bool = 0;
	return 0;
}


func_7572(var_116_object, var_117_object, var_118_int)
{
	var_119_int = 0; var_120_int = 0; var_121_bool = 0; var_122_int = 0; var_123_int = 0; var_124_bool = 0;
	@@var_117_object:GetItemID(var_122_int);
	GetInvItemProperty(var_123_int, var_122_int, "Category");
	@@var_116_object:AddItem(var_124_bool, var_117_object, var_123_int, var_118_int);
	var_126_bool = var_124_bool == 0; //@nz
	if(var_126_bool != 0) {
		@@var_116_object:DropItems(var_117_object, var_118_int);
	} else {
		var_127_int = 0; var_128_int = 0;
		var_122_int = var_127_int;
		var_118_int = var_128_int;
		func_7541(var_127_int, var_128_int);
	}
	return 6;
	
}


func_8604(var_1122_bool)
{
	var_1124_int = 0; var_1125_string = "";
	func_7536(var_1124_int, "ook11Aglaja3");
	var_1127_bool = var_1124_int == (int)0;
	if(var_1127_bool != 0) {
		var_1122_bool = 1;
		return 0;
	}
	var_1122_bool = 0;
	return 0;
}


func_8095()
{
	SetVariable("ook7Aglaja4", (int)1);
	return 0;
}


func_8101()
{
	SetVariable("k7AglajaVisit", (int)1);
	return 0;
}


func_6053(var_0_object, var_890_int, var_891_object)
{
	var_893_object = Obj(); var_894_bool = 0; var_895_int = 0; var_896_bool = 0; var_897_object = Obj(); var_898_bool = 0; var_899_int = 0; var_900_bool = 0;
	var_0_object = var_891_object;
	var_901_bool = 0; var_902_object = Obj(); var_903_float = 0;
	var_891_object = var_902_object;
	func_7231(var_901_bool, var_902_object, (float)70.0);
	var_904_bool = var_901_bool == 0; //@nz
	if(var_904_bool != 0) {
		var_890_int = -2;
		return 8;
	}
	CreateDialog(var_897_object);
	var_905_int = 0;
	func_7733(var_905_int);
	@@var_897_object:SetNPCName(var_905_int);
	var_906_int = 0;
	func_7731(var_906_int);
	@@var_897_object:SetNPCDescription(var_906_int);
	var_907_string = "";
	func_7735(var_907_string);
	@@var_897_object:SetPhoto(var_907_string);
	var_908_string = "";
	func_7737(var_908_string);
	@@var_897_object:SetPhoto2(var_908_string);
	var_909_int = 0;
	func_8964(var_909_int);
	@@var_897_object:SetPlayerName(var_909_int);
	IsOverrideActive(var_898_bool);
	var_910_bool = var_898_bool;
	if(var_910_bool != 0) {
		var_890_int = -2;
		return 8;
	}
	DoDialog(var_897_object);
	var_911_bool = 0; var_912_object = Obj();
	func_7509(Obj());
	var_913_object = var_912_object;
	func_7318(var_911_bool, var_912_object);
	var_914_object = Obj(); var_915_object = Obj();
	var_891_object = var_914_object;
	var_897_object = var_915_object;
	TaskCall(13);
	func_6134(var_916_object, var_917_object, var_918_string, var_919_bool, var_914_object, var_915_object);
	TaskReturn();
	@@var_897_object:IsDialogEnd(var_900_bool);
	
Label_6116:
	var_1001_bool = var_900_bool == 0; //@nz
	if(var_1001_bool != 0) {
		sync();
		@@var_897_object:IsDialogEnd(var_900_bool);
		goto Label_6116;
	}
	var_891_object = Obj();
	func_7300();
	StopDialog(var_897_object);
	@@var_897_object:GetReturnValue((int)-1);
	var_899_int = var_890_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7591(var_111_object, var_112_string, var_113_int)
{
	var_114_object = Obj(); var_115_object = Obj();
	CreateInvItem(var_115_object);
	@@var_115_object:SetItemName(var_112_string);
	var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0;
	var_111_object = var_116_object;
	var_115_object = var_117_object;
	var_113_int = var_118_int;
	func_7572(var_116_object, var_117_object, var_118_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8616(var_1149_bool)
{
	var_1151_int = 0; var_1152_string = "";
	func_7536(var_1151_int, "ook11Aglaja4");
	var_1154_bool = var_1151_int == (int)0;
	if(var_1154_bool != 0) {
		var_1149_bool = 1;
		return 0;
	}
	var_1149_bool = 0;
	return 0;
}


func_7082()
{
	var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0;
	WaitForAnimEnd();
	var_57_bool = 0;
	func_7226(var_57_bool);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 12;
	}
	func_7714((int)0);
	var_59_int = var_51_int;
	var_52_int = 0;
	
Label_7096:
	var_72_bool = 0;
	var_72_bool = 0;
	var_74_bool = var_52_int < (int)5;
	if(var_74_bool != 0) {
		var_75_bool = 0;
		func_7226(var_75_bool);
		if(var_75_bool != 0) {
			var_72_bool = 1;
		}
	}
	if(var_72_bool != 0) {
		var_76_bool = var_51_int == 0; //@nz
		if(var_76_bool != 0) {
			Sleep((int)3, var_53_bool);
			var_78_bool = var_53_bool == 0; //@nz
			if(var_78_bool != 0) {
			} else {
		} else {
				irand(var_54_int, var_51_int);
				irand(var_55_int, (int)5);
				var_84_bool = var_55_int != (int)0;
				if(var_84_bool != 0) {
					var_54_int = 0;
				}
				var_86_string = ""; var_87_int = 0;
				var_54_int = var_87_int;
				func_7707(var_86_string, var_87_int);
				PlayAnimation("all", var_86_string);
				WaitForAnimEnd(var_56_bool);
				var_88_bool = var_56_bool == 0; //@nz
				if(var_88_bool == 0) goto Label_7137;
				goto Label_7148;
		}
		Label_7137:
			var_79_bool = 0;
			func_7151(var_79_bool);
			var_80_bool = var_79_bool == 0; //@nz
			if(var_80_bool != 0) {
				goto Label_7148;
			}
			ResetAAS();
			var_52_int = var_52_int + (int)1;
			goto Label_7096;

		}
	}
Label_7148:
	ResetAAS();
	return 12;
	
}


func_8107()
{
	SetVariable("k8AglajaVisit", (int)1);
	return 0;
}


func_8113()
{
	SetVariable("k9AglajaVisit", (int)1);
	return 0;
}


func_8628(var_1161_bool)
{
	var_1163_int = 0; var_1164_string = "";
	func_7536(var_1163_int, "ook11Aglaja5");
	var_1166_bool = var_1163_int == (int)0;
	if(var_1166_bool != 0) {
		var_1161_bool = 1;
		return 0;
	}
	var_1161_bool = 0;
	return 0;
}


func_7604(var_149_bool, var_150_object, var_151_float)
{
	var_152_bool = var_150_object == 0; //@nz
	if(var_152_bool != 0) {
		var_149_bool = 0;
		return 0;
	}
	var_154_bool = var_151_float > (int)0;
	if(var_154_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_185_bool = var_151_float < (int)0;
		if(var_185_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_7625;
		}
		var_149_bool = 0;
		return 0;
	}
Label_7625:
	var_156_float = 0;
	var_151_float = var_156_float;
	func_7639(var_156_float);
	var_160_bool = 0; var_161_object = Obj(); var_162_string = ""; var_163_float = 0; var_164_float = 0; var_165_float = 0;
	var_150_object = var_161_object;
	var_151_float = var_163_float;
	func_7178(var_160_bool, var_161_object, "reputation", var_163_float, (float)0, (float)1);
	var_149_bool = 1;
	return 0;
	
}


func_8119()
{
	SetVariable("k11AglajaVisit", (int)1);
	return 0;
}


func_8125()
{
	SetVariable("ook12AglajaNight1", (int)1);
	return 0;
}


func_8640(var_487_bool)
{
	var_489_int = 0; var_490_string = "";
	func_7536(var_489_int, "ook7Aglaja4");
	var_492_bool = var_489_int == (int)0;
	if(var_492_bool != 0) {
		var_487_bool = 1;
		return 0;
	}
	var_487_bool = 0;
	return 0;
}


func_4034(var_0_object, var_1005_int, var_1006_object)
{
	var_1008_object = Obj(); var_1009_bool = 0; var_1010_int = 0; var_1011_bool = 0; var_1012_object = Obj(); var_1013_bool = 0; var_1014_int = 0; var_1015_bool = 0;
	var_0_object = var_1006_object;
	var_1016_bool = 0; var_1017_object = Obj(); var_1018_float = 0;
	var_1006_object = var_1017_object;
	func_7231(var_1016_bool, var_1017_object, (float)70.0);
	var_1019_bool = var_1016_bool == 0; //@nz
	if(var_1019_bool != 0) {
		var_1005_int = -2;
		return 8;
	}
	CreateDialog(var_1012_object);
	var_1020_int = 0;
	func_7733(var_1020_int);
	@@var_1012_object:SetNPCName(var_1020_int);
	var_1021_int = 0;
	func_7731(var_1021_int);
	@@var_1012_object:SetNPCDescription(var_1021_int);
	var_1022_string = "";
	func_7735(var_1022_string);
	@@var_1012_object:SetPhoto(var_1022_string);
	var_1023_string = "";
	func_7737(var_1023_string);
	@@var_1012_object:SetPhoto2(var_1023_string);
	var_1024_int = 0;
	func_8964(var_1024_int);
	@@var_1012_object:SetPlayerName(var_1024_int);
	IsOverrideActive(var_1013_bool);
	var_1025_bool = var_1013_bool;
	if(var_1025_bool != 0) {
		var_1005_int = -2;
		return 8;
	}
	DoDialog(var_1012_object);
	var_1026_bool = 0; var_1027_object = Obj();
	func_7509(Obj());
	var_1028_object = var_1027_object;
	func_7318(var_1026_bool, var_1027_object);
	var_1029_object = Obj(); var_1030_object = Obj();
	var_1006_object = var_1029_object;
	var_1012_object = var_1030_object;
	TaskCall(7);
	func_4115(var_1031_object, var_1032_object, var_1033_string, var_1034_bool, var_1029_object, var_1030_object);
	TaskReturn();
	@@var_1012_object:IsDialogEnd(var_1015_bool);
	
Label_4097:
	var_1176_bool = var_1015_bool == 0; //@nz
	if(var_1176_bool != 0) {
		sync();
		@@var_1012_object:IsDialogEnd(var_1015_bool);
		goto Label_4097;
	}
	var_1006_object = Obj();
	func_7300();
	StopDialog(var_1012_object);
	@@var_1012_object:GetReturnValue((int)-1);
	var_1014_int = var_1005_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8131(var_195_object)
{
	var_197_bool = 0; var_198_object = Obj(); var_199_float = 0;
	var_195_object = var_198_object;
	func_7604(var_197_bool, var_198_object, (float)0.30000001192092896);
	return 0;
}


func_8138(var_175_object)
{
	var_177_bool = 0; var_178_object = Obj(); var_179_float = 0;
	var_175_object = var_178_object;
	func_7604(var_177_bool, var_178_object, (float)0.5);
	return 0;
}


func_8652(var_346_bool)
{
	var_348_int = 0; var_349_string = "";
	func_7536(var_348_int, "ook12AglajaNight1");
	var_353_bool = var_348_int == (int)0;
	if(var_353_bool != 0) {
		var_346_bool = 1;
		return 0;
	}
	var_346_bool = 0;
	return 0;
}


func_8145(var_120_object)
{
	var_122_bool = 0; var_123_object = Obj(); var_124_float = 0;
	var_120_object = var_123_object;
	func_7604(var_122_bool, var_123_object, (float)-0.5);
	return 0;
}


func_7639(var_156_float)
{
	var_157_object = Obj(); var_158_object = Obj();
	CreateFloatVector(var_158_object);
	@@var_158_object:add(var_156_float);
	SendWorldWndMessage((int)16, var_158_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8152()
{
	return 0;
}


func_8664(var_526_bool)
{
	var_528_bool = 0; var_529_int = 0;
	var_530_int = 0;
	func_7673(var_530_int);
	var_529_int = var_530_int - (int)1;
	func_8981(var_528_bool, var_529_int);
	var_526_bool = !var_528_bool;
	return 0;
}


func_8154(var_129_object)
{
	Trace("feromicin is given");
	var_132_object = Obj(); var_133_string = ""; var_134_int = 0;
	var_129_object = var_132_object;
	func_7591(var_132_object, "feromicin", (int)1);
	return 0;
}


func_7649(var_98_bool, var_99_string, var_100_string)
{
	var_101_object = Obj(); var_102_object = Obj();
	FindActor(var_102_object, var_99_string);
	var_103_bool = var_102_object == 0; //@ne
	if(var_103_bool != 0) {
		var_98_bool = 0;
		return 2;
	}
	Trigger(var_102_object, var_100_string);
	var_98_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8675(var_645_bool)
{
	func_9037((bool)0);
	var_647_bool = var_645_bool;
	return 0;
}


func_8165(var_260_object)
{
	Trace("gamma_pills is given");
	var_263_object = Obj(); var_264_string = ""; var_265_int = 0;
	var_260_object = var_263_object;
	func_7591(var_263_object, "gamma_pills", (int)1);
	return 0;
}


func_8681(var_655_bool)
{
	func_9057((bool)0);
	var_657_bool = var_655_bool;
	return 0;
}


func_7661(var_106_bool, var_107_string, var_108_string, var_109_string)
{
	var_110_object = Obj(); var_111_object = Obj();
	FindActor(var_111_object, var_107_string);
	var_112_bool = var_111_object == 0; //@ne
	if(var_112_bool != 0) {
		var_106_bool = 0;
		return 2;
	}
	Trigger(var_111_object, var_108_string, var_109_string);
	var_106_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7151(var_79_bool)
{
	var_79_bool = 1;
	return 0;
}


func_8176(var_181_object)
{
	Trace("delta_pills is given");
	var_184_object = Obj(); var_185_string = ""; var_186_int = 0;
	var_181_object = var_184_object;
	func_7591(var_184_object, "delta_pills", (int)1);
	return 0;
}


func_7153()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3058(var_2_object, var_780_string)
{
	var_781_bool = 0;
	func_7739(var_781_bool);
	var_782_bool = var_781_bool == 0; //@nz
	if(var_782_bool != 0) {
		return 0;
	}
	var_783_bool = var_780_string == var_2_object;
	if(var_783_bool != 0) {
		return 0;
	}
	var_784_string = ""; var_785_bool = 0;
	var_780_string = var_784_string;
	var_787_bool = var_780_string == "";
	if(var_787_bool != 0) {
		var_785_bool = 0;
	} else {
		var_785_bool = 1;
	}
	func_7472(var_784_string, var_785_bool);
	var_2_object = var_780_string;
	return 0;
	
}


func_8687(var_682_bool)
{
	func_9045((bool)0);
	var_684_bool = var_682_bool;
	return 0;
}


func_5617(var_0_object, var_306_int, var_307_object)
{
	var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0; var_313_object = Obj(); var_314_bool = 0; var_315_int = 0; var_316_bool = 0;
	var_0_object = var_307_object;
	var_317_bool = 0; var_318_object = Obj(); var_319_float = 0;
	var_307_object = var_318_object;
	func_7231(var_317_bool, var_318_object, (float)70.0);
	var_320_bool = var_317_bool == 0; //@nz
	if(var_320_bool != 0) {
		var_306_int = -2;
		return 8;
	}
	CreateDialog(var_313_object);
	var_321_int = 0;
	func_7733(var_321_int);
	@@var_313_object:SetNPCName(var_321_int);
	var_322_int = 0;
	func_7731(var_322_int);
	@@var_313_object:SetNPCDescription(var_322_int);
	var_323_string = "";
	func_7735(var_323_string);
	@@var_313_object:SetPhoto(var_323_string);
	var_324_string = "";
	func_7737(var_324_string);
	@@var_313_object:SetPhoto2(var_324_string);
	var_325_int = 0;
	func_8964(var_325_int);
	@@var_313_object:SetPlayerName(var_325_int);
	IsOverrideActive(var_314_bool);
	var_326_bool = var_314_bool;
	if(var_326_bool != 0) {
		var_306_int = -2;
		return 8;
	}
	DoDialog(var_313_object);
	var_327_bool = 0; var_328_object = Obj();
	func_7509(Obj());
	var_329_object = var_328_object;
	func_7318(var_327_bool, var_328_object);
	var_330_object = Obj(); var_331_object = Obj();
	var_307_object = var_330_object;
	var_313_object = var_331_object;
	TaskCall(11);
	func_5698(var_332_object, var_333_object, var_334_string, var_335_bool, var_330_object, var_331_object);
	TaskReturn();
	@@var_313_object:IsDialogEnd(var_316_bool);
	
Label_5680:
	var_373_bool = var_316_bool == 0; //@nz
	if(var_373_bool != 0) {
		sync();
		@@var_313_object:IsDialogEnd(var_316_bool);
		goto Label_5680;
	}
	var_307_object = Obj();
	func_7300();
	StopDialog(var_313_object);
	@@var_313_object:GetReturnValue((int)-1);
	var_315_int = var_306_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8693(var_714_bool)
{
	func_9051((bool)0);
	var_716_bool = var_714_bool;
	return 0;
}


func_6134(var_0_object, var_1_object, var_2_object, var_3_string, var_914_object, var_915_object)
{
	var_0_object = var_915_object;
	var_1_object = var_914_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_921_string = "";
		func_6295(var_915_object, "Neutral");
		@@@var_0_object:SetMessage((int)539793);
		@@@var_0_object:ClearReplies();
		var_930_bool = 0;
		var_930_bool = 0;
		var_931_bool = 0;
		var_931_bool = 0;
		var_932_bool = 0; var_933_object = Obj();
		var_933_object = var_1_object;
		func_8388(var_932_bool, var_933_object);
		if(var_932_bool != 0) {
			var_934_bool = 0; var_935_object = Obj();
			var_935_object = var_1_object;
			func_8398(var_934_bool, var_935_object);
			if(var_934_bool != 0) {
				var_931_bool = 1;
			}
		}
		if(var_931_bool != 0) {
			var_936_bool = 0; var_937_object = Obj();
			var_937_object = var_1_object;
			func_8544(var_937_object);
			if(var_936_bool != 0) {
				var_930_bool = 1;
			}
		}
		if(var_930_bool != 0) {
			@@@var_0_object:AddReply((int)539794, (int)41747, (int)41746);
		}
		var_945_bool = 0;
		var_945_bool = 0;
		var_946_bool = 0;
		var_946_bool = 0;
		var_947_bool = 0; var_948_object = Obj();
		var_948_object = var_1_object;
		func_8388(var_947_bool, var_948_object);
		if(var_947_bool != 0) {
			var_949_bool = 0; var_950_object = Obj();
			var_950_object = var_1_object;
			func_8556(var_950_object);
			if(var_949_bool != 0) {
				var_946_bool = 1;
			}
		}
		if(var_946_bool != 0) {
			var_955_bool = 0; var_956_object = Obj();
			var_956_object = var_1_object;
			func_8408(var_955_bool, var_956_object);
			if(var_955_bool != 0) {
				var_945_bool = 1;
			}
		}
		if(var_945_bool != 0) {
			@@@var_0_object:AddReply((int)539797, (int)41750, (int)41749);
		}
		var_960_bool = 0;
		var_960_bool = 0;
		var_961_bool = 0;
		var_961_bool = 0;
		var_962_bool = 0; var_963_object = Obj();
		var_963_object = var_1_object;
		func_8388(var_962_bool, var_963_object);
		if(var_962_bool != 0) {
			var_964_bool = 0; var_965_object = Obj();
			var_965_object = var_1_object;
			func_8418(var_964_bool, var_965_object);
			if(var_964_bool != 0) {
				var_961_bool = 1;
			}
		}
		if(var_961_bool != 0) {
			var_966_bool = 0; var_967_object = Obj();
			var_967_object = var_1_object;
			func_8568(var_967_object);
			if(var_966_bool != 0) {
				var_960_bool = 1;
			}
		}
		if(var_960_bool != 0) {
			@@@var_0_object:AddReply((int)539800, (int)41753, (int)41752);
		}
		var_975_bool = 0;
		var_975_bool = 0;
		var_976_bool = 0; var_977_object = Obj();
		var_977_object = var_1_object;
		func_8342(var_976_bool, var_977_object);
		if(var_976_bool != 0) {
			var_978_bool = 0; var_979_object = Obj();
			var_979_object = var_1_object;
			func_8580(var_979_object);
			if(var_978_bool != 0) {
				var_975_bool = 1;
			}
		}
		if(var_975_bool != 0) {
			@@@var_0_object:AddReply((int)539803, (int)41756, (int)41755);
		}
		@@@var_0_object:AddReply((int)539810, (int)-1, (int)41762);
		@@@var_0_object:AddReply((int)541106, (int)-1, (int)43219);
		goto Label_6265;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x17fa";
	}
Label_6265:
	var_993_bool = 0;
	func_7739(var_993_bool);
	if(var_993_bool != 0) {

	Label_6269:
		lshWaitForAnimEnd();
		var_994_string = var_3_string;
		if(var_994_string != 0) {
		} else {
			var_995_string = "";
			var_995_string = var_2_object;
			func_7456(var_995_string);
			goto Label_6269;
	}
		PlayAnimation("all", "idle");

	Label_6284:
		WaitForAnimEnd();
		var_998_string = var_3_string;
		if(var_998_string != 0) {
			goto Label_6294;
		}
		PlayAnimation("all", "idle");
		goto Label_6284;
	}
	goto Label_6294;
	
Label_6294:
	return 0;
	
}


func_7158(var_56_float, var_57_object)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	GetPosition(var_61_cvector);
	@@var_57_object:GetPosition(var_62_cvector);
	var_63_cvector = var_62_cvector - var_61_cvector;
	var_56_float = var_63_cvector | var_63_cvector;
	return 6;
}


func_7673(var_191_int)
{
	var_192_float = 0; var_193_float = 0;
	GetGameTime(var_193_float);
	var_195_int = 0;
	var_195_int = var_193_float / (int)24;
	var_191_int = (int)1 + var_195_int;
	return 2;
}


func_8699(var_1112_bool)
{
	func_9023((bool)0);
	var_1114_bool = var_1112_bool;
	return 0;
}


func_7166(var_168_bool, var_169_object, var_170_string)
{
	var_171_bool = 0; var_172_bool = 0;
	var_175_bool = IsFuncExist(var_169_object, "HasProperty", (int)2);
	var_176_bool = var_175_bool == 0; //@nz
	if(var_176_bool != 0) {
		var_168_bool = 0;
		return 2;
	}
	@@var_169_object:HasProperty(var_170_string, var_172_bool);
	var_172_bool = var_168_bool;
	return 2;
}


