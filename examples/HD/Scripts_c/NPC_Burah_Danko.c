// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Sorrow|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Neutral|W:Smile|W:Untrust|W:Menace|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.bin|W:Door |W: not found|W:locked|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|A:RemoveItemByType|W:reputation|W:ui/NPC_Bakalavr.png|W:ui/NPC_Bakalavr_b.png|W:b4q01|W:b4q01DankoGotoLaraSelf|W:pt_map_eva|A:AddMark|W:b4q01DankoGotoLara|W:pt_map_lara|W:quest_b4_01|W:rubin_unlock|W:oob4Danko1|W:oob4Danko2|W:oob4Danko3|W:b5q01|W:b5q01DankoGotoAndrei|W:pt_map_andrei|W:b5q01DankoGotoOspina|W:pt_map_ospina|W:quest_b5_01|W:vera_kabak|W:oob5Danko1|W:completed|W:oob5Danko2|W:oob3Danko1|W:oob3Danko2|W:b1q01|W:quest_b2_01|W:oob6Danko1|W:b6q01|W:quest_b6_01|W:place_klara|W:oob2Danko1|W:oob2Danko2|W:oob2Danko3|W:b2DankoTalk|W:oob2Danko4|W:b2DankoGotoMladVlad|W:pt_map_mladvlad|W:b7q01|W:b7q01DankoGotoSobor|W:pt_map_aglaja|W:quest_b7_01|W:init_sobor|A:ShowMap|W:oob8Danko1|W:oob8DankoStop|W:oob8Danko2|W:b10q01|W:quest_b10_01|W:oob10Danko1|W:b10q01DankoTalk|W:b11q01KnowWhoKilled|W:oob11Danko1|W:oob12Danko1|W:b12q01DankoInSobor|W:b12q01DankoVisit|W:oob12Danko2|W:oob12Danko3|W:oob11Danko2|W:b5q01_heart_vera|W:b5q01_heart_nude|W:b5q01_heart_butcher|W:beta_pills 5 is given|W:beta_pills|W:oob6Danko2|W:cutscene|W:quest_b11_04|W:playsound|W:giveitem|W:b2q01|W:b6q01_bull_blood|W:b11q02|W:quest_b11_02|W:fail|W:oob3Danko3|W:b3q04|W:quest_b3_04|W:diseased_blood|W:diseased_heart|W:diseased_liver|W:diseased_kidney|W:b3q01_blood|W:packet is given|W:packet|W:b3DankoVisit|W:b12q01_Danko|W:bluevaccine is given|W:blue_vaccine|W:oob8Danko3|W:b8DankoVisit|W:map_chertez_state|W:map_chertez_force|W:blackvaccine2 is given|W:black_vaccine|W:b4q01_sample|W:feromicin is given|W:feromicin|W:morfin is given|W:morfin|W:etorfin is given|W:etorfin|W:novocaine is given|W:novocaine|W:delta_pills is given|W:delta_pills|W:neomicin is given|W:neomicin|W:monomicin is given|W:monomicin|W:sobor@door1|W:b3q02|W:b8q01|W:b8q01KnowSgustki|W:b10q01TalkKaterina|W:b10q01TalkKapella|W:b11q01|W:b12q01ChildsAreVisited|W:game_final|W:b12q01MariaFinalTalk|W:b5q01MicroscopeCS|W:b11q04|W:b2q01MicroscopeCS|W:organ_combination|W:b6q01MicroscopeCS|W:d3q01_blood|W:b8DankoLetter2|W:microscope_b4q01_sample|W:b5q01TalkToVera|W:b5q01VeraDead|W:b2MladVladBurahHomeTalk|W:grass_combination|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:vol_|A:size|A:get|W:mt_danko
// @GLOBALS: 0:object:
// @RUN_OP: 0x2e3d
// @RUN_TASK: 36
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xee vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5ca vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa5e vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfd9 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x11c0 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1631 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x18aa vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x19a0 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1bcb vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1ee4 vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x233c vars=int,int
// @TASK_22: vars=object params=2
// @TASK_23: vars=object,object,string,bool params=2
// @EVENT_11: op=0x26b3 vars=int,int
// @TASK_24: vars=object params=2
// @TASK_25: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2a1c vars=int,int
// @TASK_26: vars=object params=2
// @TASK_27: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2ae7 vars=int,int
// @TASK_28: vars=object params=2
// @TASK_29: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2bb2 vars=int,int
// @TASK_30: vars=object params=2
// @TASK_31: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2c7d vars=int,int
// @TASK_32: vars=object params=2
// @TASK_33: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2d48 vars=int,int
// @TASK_34: vars=object params=2
// @TASK_35: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2e13 vars=int,int
// @TASK_36: vars=cvector params=0
// @EVENT_7: op=0x2e86 vars=int
// @EVENT_6: op=0x2eac vars=
// @EVENT_5: op=0x2ebb vars=
// @EVENT_45: op=0x2ec8 vars=bool
// @EVENT_0: op=0x2ed4 vars=object
// @PE: 0x51,0xd8,0xee,0x50b,0x5b4,0x5ca,0x950,0xa48,0xa5e,0xf6a,0xfc3,0xfd9,0x10f1,0x11aa,0x11c0,0x159c,0x161b,0x1631,0x185a,0x1894,0x18aa,0x1941,0x198a,0x19a0,0x1b28,0x1bb5,0x1bcb,0x1e0c,0x1ece,0x1ee4,0x22b0,0x2326,0x233c,0x25f2,0x269d,0x26b3,0x29cc,0x2a06,0x2a1c,0x2a97,0x2ad1,0x2ae7,0x2b62,0x2b9c,0x2bb2,0x2c2d,0x2c67,0x2c7d,0x2cf8,0x2d32,0x2d48,0x2dc3,0x2dfd,0x2e13,0x2e3d,0x2e86,0x2eac,0x2ec8,0x30ac,0x313b,0x3182,0x31e5,0x31eb,0x31f1,0x321f,0x3225,0x322f,0x3235,0x323b,0x3241,0x324a,0x3254,0x325a,0x326b,0x3271,0x3277,0x327d,0x3283,0x32b8,0x32c8,0x32ce,0x32d4,0x32da,0x32e6,0x32f0,0x32f6,0x32ff,0x3305,0x330e,0x3314,0x331a,0x3323,0x3329,0x332f,0x3335,0x334d,0x3358,0x3362,0x3368,0x336f,0x3379,0x337f,0x3388,0x339a,0x33a3,0x33ad,0x33b3,0x33c3,0x33d1,0x340e,0x3419,0x3424,0x342a,0x343a,0x3445,0x344b,0x3451,0x3462,0x3488,0x3499,0x349f,0x34af,0x34bf,0x34cf,0x34d6,0x34e1,0x34f1,0x34fc,0x3507,0x3512,0x351d,0x3528,0x3533,0x353a,0x3543,0x354f,0x355b,0x357d,0x3589,0x3595,0x35a1,0x35ad,0x35b9,0x35c5,0x35d1,0x35dd,0x35e9,0x35f5,0x3601,0x360d,0x3619,0x3625,0x3631,0x363d,0x3649,0x3653,0x365f,0x366a,0x3676,0x3682,0x368e,0x369a,0x36a6,0x36b2,0x36be,0x36ca,0x36d6,0x36e1,0x36ed,0x36f9,0x3705,0x3711,0x3744,0x3750,0x375c,0x3768,0x3774,0x377e,0x378a,0x3796,0x37a2,0x37ae,0x37b9,0x37c5,0x37d1,0x37dd,0x37e9,0x37f5,0x3801,0x380c,0x3817,0x3822,0x382e,0x383a,0x3846,0x3852,0x385e,0x386a,0x3876,0x3882,0x388e,0x389a,0x38a6,0x38b2,0x38c7,0x38d3,0x38df,0x38eb,0x38f1,0x3abf

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)20517;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_13265(var_98_object);
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_13586(var_147_object);
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_13133(var_171_object);
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_13337();
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_13177();
		}
		var_191_bool = var_92_cvector == (int)20518;
		if(var_191_bool != 0) {
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_13265(var_193_object);
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_13575(var_195_object);
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_13553(var_201_object);
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_13564(var_207_object);
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_13337();
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_13177();
		}
		var_217_bool = var_92_cvector == (int)20519;
		if(var_217_bool != 0) {
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_13265(var_219_object);
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_13526(var_221_object);
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_13597(var_227_object);
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_object;
			func_13608(var_233_object);
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_object;
			func_13337();
			var_240_object = Obj(); var_241_object = Obj();
			var_240_object = var_1_object;
			var_241_object = var_0_object;
			func_13177();
		}
		var_243_bool = var_92_cvector == (int)20521;
		if(var_243_bool != 0) {
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_13265(var_245_object);
			var_246_object = Obj(); var_247_object = Obj();
			var_246_object = var_1_object;
			var_247_object = var_0_object;
			func_13326(var_247_object);
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_13337();
			var_254_object = Obj(); var_255_object = Obj();
			var_254_object = var_1_object;
			var_255_object = var_0_object;
			func_13177();
		}
		var_257_bool = var_92_cvector == (int)20515;
		if(var_257_bool != 0) {
			var_258_object = Obj(); var_259_object = Obj();
			var_258_object = var_1_object;
			var_259_object = var_0_object;
			func_13235();
		}
		var_302_bool = var_92_cvector == (int)20500;
		if(var_302_bool != 0) {
			var_303_object = Obj(); var_304_object = Obj();
			var_303_object = var_1_object;
			var_304_object = var_0_object;
			func_13265(var_304_object);
			var_305_object = Obj(); var_306_object = Obj();
			var_305_object = var_1_object;
			var_306_object = var_0_object;
			func_13133(var_306_object);
			var_307_object = Obj(); var_308_object = Obj();
			var_307_object = var_1_object;
			var_308_object = var_0_object;
			func_13586(var_308_object);
			var_309_object = Obj(); var_310_object = Obj();
			var_309_object = var_1_object;
			var_310_object = var_0_object;
			func_13251();
			var_324_object = Obj(); var_325_object = Obj();
			var_324_object = var_1_object;
			var_325_object = var_0_object;
			func_13177();
		}
		var_327_bool = var_92_cvector == (int)20501;
		if(var_327_bool != 0) {
			var_328_object = Obj(); var_329_object = Obj();
			var_328_object = var_1_object;
			var_329_object = var_0_object;
			func_13265(var_329_object);
			var_330_object = Obj(); var_331_object = Obj();
			var_330_object = var_1_object;
			var_331_object = var_0_object;
			func_13526(var_331_object);
			var_332_object = Obj(); var_333_object = Obj();
			var_332_object = var_1_object;
			var_333_object = var_0_object;
			func_13597(var_333_object);
			var_334_object = Obj(); var_335_object = Obj();
			var_334_object = var_1_object;
			var_335_object = var_0_object;
			func_13608(var_335_object);
			var_336_object = Obj(); var_337_object = Obj();
			var_336_object = var_1_object;
			var_337_object = var_0_object;
			func_13251();
			var_338_object = Obj(); var_339_object = Obj();
			var_338_object = var_1_object;
			var_339_object = var_0_object;
			func_13177();
		}
		var_341_bool = var_92_cvector == (int)20502;
		if(var_341_bool != 0) {
			var_342_object = Obj(); var_343_object = Obj();
			var_342_object = var_1_object;
			var_343_object = var_0_object;
			func_13265(var_343_object);
			var_344_object = Obj(); var_345_object = Obj();
			var_344_object = var_1_object;
			var_345_object = var_0_object;
			func_13575(var_345_object);
			var_346_object = Obj(); var_347_object = Obj();
			var_346_object = var_1_object;
			var_347_object = var_0_object;
			func_13553(var_347_object);
			var_348_object = Obj(); var_349_object = Obj();
			var_348_object = var_1_object;
			var_349_object = var_0_object;
			func_13564(var_349_object);
			var_350_object = Obj(); var_351_object = Obj();
			var_350_object = var_1_object;
			var_351_object = var_0_object;
			func_13251();
			var_352_object = Obj(); var_353_object = Obj();
			var_352_object = var_1_object;
			var_353_object = var_0_object;
			func_13177();
		}
		var_355_bool = var_92_cvector == (int)20503;
		if(var_355_bool != 0) {
			var_356_object = Obj(); var_357_object = Obj();
			var_356_object = var_1_object;
			var_357_object = var_0_object;
			func_13265(var_357_object);
			var_358_object = Obj(); var_359_object = Obj();
			var_358_object = var_1_object;
			var_359_object = var_0_object;
			func_13326(var_359_object);
			var_360_object = Obj(); var_361_object = Obj();
			var_360_object = var_1_object;
			var_361_object = var_0_object;
			func_13251();
			var_362_object = Obj(); var_363_object = Obj();
			var_362_object = var_1_object;
			var_363_object = var_0_object;
			func_13177();
		}
		var_365_bool = var_92_cvector == (int)19474;
		if(var_365_bool != 0) {
			var_366_object = Obj(); var_367_object = Obj();
			var_366_object = var_1_object;
			var_367_object = var_0_object;
			func_12859();
		}
		var_371_bool = var_92_cvector == (int)19476;
		if(var_371_bool != 0) {
			var_372_object = Obj(); var_373_object = Obj();
			var_372_object = var_1_object;
			var_373_object = var_0_object;
			func_13626();
		}
		var_385_bool = var_92_cvector == (int)20522;
		if(var_385_bool != 0) {
			var_386_object = Obj(); var_387_object = Obj();
			var_386_object = var_1_object;
			var_387_object = var_0_object;
			func_12853();
		}
		var_391_bool = var_92_cvector == (int)31919;
		if(var_391_bool != 0) {
			var_392_object = Obj(); var_393_object = Obj();
			var_392_object = var_1_object;
			var_393_object = var_0_object;
			func_13229();
		}
		var_397_bool = var_91_bool == (int)19463;
		if(var_397_bool != 0) {
			var_398_object = Obj(); var_399_object = Obj();
			var_398_object = var_1_object;
			var_399_object = var_0_object;
			func_13348();
			var_402_string = "";
			func_216(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)518350);
			@@@var_0_object:ClearReplies();
			var_420_bool = 0; var_421_object = Obj();
			var_421_object = var_1_object;
			func_14148(var_421_object);
			if(var_420_bool != 0) {
				@@@var_0_object:AddReply((int)518352, (int)19466, (int)19465);
			}
			var_431_bool = 0;
			var_431_bool = 0;
			var_432_bool = 0; var_433_object = Obj();
			var_433_object = var_1_object;
			func_14160(var_433_object);
			if(var_432_bool != 0) {
				var_438_bool = 0; var_439_object = Obj();
				var_439_object = var_1_object;
				func_14097(var_438_bool, var_439_object);
				if(var_438_bool != 0) {
					var_431_bool = 1;
				}
			}
			if(var_431_bool != 0) {
				@@@var_0_object:AddReply((int)518358, (int)19472, (int)19471);
			}
			var_462_bool = 0;
			var_462_bool = 0;
			var_463_bool = 0; var_464_object = Obj();
			var_464_object = var_1_object;
			func_14206(var_464_object);
			if(var_463_bool != 0) {
				var_469_bool = 0; var_470_object = Obj();
				var_470_object = var_1_object;
				func_14406(var_470_object);
				if(var_469_bool != 0) {
					var_462_bool = 1;
				}
			}
			if(var_462_bool != 0) {
				@@@var_0_object:AddReply((int)518361, (int)19475, (int)19474);
			}
			var_478_bool = 0; var_479_object = Obj();
			var_479_object = var_1_object;
			func_14394(var_479_object);
			if(var_478_bool != 0) {
				@@@var_0_object:AddReply((int)519361, (int)20523, (int)20522);
			}
			var_487_bool = 0;
			var_487_bool = 0;
			var_488_bool = 0; var_489_object = Obj();
			var_489_object = var_1_object;
			func_14038(var_488_bool, var_489_object);
			if(var_488_bool != 0) {
				var_493_bool = 0; var_494_object = Obj();
				var_494_object = var_1_object;
				func_14073(var_494_object);
				if(var_493_bool != 0) {
					var_487_bool = 1;
				}
			}
			if(var_487_bool != 0) {
				@@@var_0_object:AddReply((int)530617, (int)31920, (int)31919);
			}
			@@@var_0_object:AddReply((int)518351, (int)-1, (int)19464);
			return 0;
		}
		var_506_bool = var_91_bool == (int)31920;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530618);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530619, (int)31922, (int)31921);
			@@@var_0_object:AddReply((int)530626, (int)31924, (int)31928);
			return 0;
		}
		var_516_bool = var_91_bool == (int)31922;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_216(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)530620);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530621, (int)31924, (int)31923);
			@@@var_0_object:AddReply((int)530625, (int)-1, (int)31927);
			return 0;
		}
		var_526_bool = var_91_bool == (int)31924;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_216(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)530622);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530623, (int)-1, (int)31925);
			@@@var_0_object:AddReply((int)530624, (int)-1, (int)31926);
			return 0;
		}
		var_536_bool = var_91_bool == (int)20523;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_216(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)519362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519363, (int)20525, (int)20524);
			return 0;
		}
		var_543_bool = var_91_bool == (int)20525;
		if(var_543_bool != 0) {
			var_544_string = "";
			func_216(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)519364);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519365, (int)20527, (int)20526);
			return 0;
		}
		var_550_bool = var_91_bool == (int)20527;
		if(var_550_bool != 0) {
			var_551_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519367, (int)20529, (int)20528);
			return 0;
		}
		var_557_bool = var_91_bool == (int)20529;
		if(var_557_bool != 0) {
			var_558_string = "";
			func_216(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)519368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519369, (int)20531, (int)20530);
			return 0;
		}
		var_564_bool = var_91_bool == (int)20531;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_216(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)519370);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519371, (int)-1, (int)20532);
			return 0;
		}
		var_571_bool = var_91_bool == (int)19475;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_216(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519323, (int)20482, (int)20481);
			return 0;
		}
		var_578_bool = var_91_bool == (int)20482;
		if(var_578_bool != 0) {
			var_579_string = "";
			func_216(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)519324);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519325, (int)20484, (int)20483);
			@@@var_0_object:AddReply((int)519332, (int)20491, (int)20490);
			return 0;
		}
		var_588_bool = var_91_bool == (int)20484;
		if(var_588_bool != 0) {
			var_589_string = "";
			func_216(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)519326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519327, (int)20486, (int)20485);
			@@@var_0_object:AddReply((int)519335, (int)20495, (int)20494);
			return 0;
		}
		var_598_bool = var_91_bool == (int)20495;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519336);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519337, (int)20486, (int)20496);
			@@@var_0_object:AddReply((int)519338, (int)-1, (int)20497);
			return 0;
		}
		var_608_bool = var_91_bool == (int)20486;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_216(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)519328);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519329, (int)20488, (int)20487);
			@@@var_0_object:AddReply((int)519331, (int)20491, (int)20489);
			return 0;
		}
		var_618_bool = var_91_bool == (int)20491;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519334, (int)-1, (int)20492);
			return 0;
		}
		var_625_bool = var_91_bool == (int)20488;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518363, (int)-1, (int)19476);
			return 0;
		}
		var_632_bool = var_91_bool == (int)19472;
		if(var_632_bool != 0) {
			var_633_string = "";
			func_216(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)518359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518360, (int)20499, (int)19473);
			return 0;
		}
		var_639_bool = var_91_bool == (int)20499;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_216(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)519339);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519340, (int)-1, (int)20500);
			@@@var_0_object:AddReply((int)519341, (int)-1, (int)20501);
			@@@var_0_object:AddReply((int)519342, (int)-1, (int)20502);
			@@@var_0_object:AddReply((int)519343, (int)-1, (int)20503);
			return 0;
		}
		var_655_bool = var_91_bool == (int)19466;
		if(var_655_bool != 0) {
			var_656_string = "";
			func_216(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519349, (int)29215, (int)20510);
			return 0;
		}
		var_662_bool = var_91_bool == (int)29215;
		if(var_662_bool != 0) {
			var_663_string = "";
			func_216(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)527868);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527870, (int)29218, (int)29217);
			return 0;
		}
		var_669_bool = var_91_bool == (int)29218;
		if(var_669_bool != 0) {
			var_670_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527869, (int)20511, (int)29216);
			return 0;
		}
		var_676_bool = var_91_bool == (int)20511;
		if(var_676_bool != 0) {
			var_677_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519350);
			@@@var_0_object:ClearReplies();
			var_679_bool = 0; var_680_object = Obj();
			var_680_object = var_1_object;
			func_14097(var_679_bool, var_680_object);
			if(var_679_bool != 0) {
				@@@var_0_object:AddReply((int)518354, (int)19469, (int)19467);
			}
			@@@var_0_object:AddReply((int)518355, (int)20512, (int)19468);
			return 0;
		}
		var_688_bool = var_91_bool == (int)20512;
		if(var_688_bool != 0) {
			var_689_string = "";
			func_216(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)519351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519352, (int)20514, (int)20513);
			return 0;
		}
		var_695_bool = var_91_bool == (int)20514;
		if(var_695_bool != 0) {
			var_696_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519354, (int)-1, (int)20515);
			return 0;
		}
		var_702_bool = var_91_bool == (int)19469;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_216(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)518356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518357, (int)29214, (int)19470);
			return 0;
		}
		var_709_bool = var_91_bool == (int)29214;
		if(var_709_bool != 0) {
			var_710_string = "";
			func_216(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)527867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519344, (int)20505, (int)20504);
			return 0;
		}
		var_716_bool = var_91_bool == (int)20505;
		if(var_716_bool != 0) {
			var_717_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519346, (int)20507, (int)20506);
			return 0;
		}
		var_723_bool = var_91_bool == (int)20507;
		if(var_723_bool != 0) {
			var_724_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519347);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519348, (int)20516, (int)20508);
			return 0;
		}
		var_730_bool = var_91_bool == (int)20516;
		if(var_730_bool != 0) {
			var_731_string = "";
			func_216(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519356, (int)-1, (int)20517);
			@@@var_0_object:AddReply((int)519357, (int)-1, (int)20518);
			@@@var_0_object:AddReply((int)519358, (int)-1, (int)20519);
			@@@var_0_object:AddReply((int)519360, (int)-1, (int)20521);
			return 0;
		}
		var_3_string = true;
		var_745_bool = 0;
		func_12731(var_745_bool);
		if(var_745_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xef";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)20237;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_12733();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_13503(var_160_object);
		}
		var_186_bool = var_92_cvector == (int)19644;
		if(var_186_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_12733();
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_13503(var_190_object);
		}
		var_192_bool = var_92_cvector == (int)19649;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_12733();
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_13503(var_196_object);
		}
		var_198_bool = var_92_cvector == (int)19650;
		if(var_198_bool != 0) {
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_object;
			func_12779();
		}
		var_204_bool = var_92_cvector == (int)19652;
		if(var_204_bool != 0) {
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_13459(var_206_object);
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_13465();
		}
		var_216_bool = var_92_cvector == (int)20194;
		if(var_216_bool != 0) {
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_object;
			func_13459(var_218_object);
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_13465();
		}
		var_222_bool = var_92_cvector == (int)19653;
		if(var_222_bool != 0) {
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_object;
			func_12779();
		}
		var_226_bool = var_92_cvector == (int)31930;
		if(var_226_bool != 0) {
			var_227_object = Obj(); var_228_object = Obj();
			var_227_object = var_1_object;
			var_228_object = var_0_object;
			func_12785();
		}
		var_232_bool = var_91_bool == (int)19641;
		if(var_232_bool != 0) {
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_14230(var_234_object);
			if(var_233_bool != 0) {
				var_241_object = Obj(); var_242_object = Obj();
				var_241_object = var_1_object;
				var_242_object = var_0_object;
				func_12773();
				var_245_string = "";
				func_1460(var_92_cvector, "Sorrow");
				@@@var_0_object:SetMessage((int)518531);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519073, (int)20199, (int)20198);
				@@@var_0_object:AddReply((int)519077, (int)20203, (int)20202);
				return 0;
			}
			var_269_string = "";
			func_1460(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)518536);
			@@@var_0_object:ClearReplies();
			var_271_bool = 0; var_272_object = Obj();
			var_272_object = var_1_object;
			func_14218(var_272_object);
			if(var_271_bool != 0) {
				@@@var_0_object:AddReply((int)518537, (int)19648, (int)19647);
			}
			var_280_bool = 0;
			var_280_bool = 0;
			var_281_bool = 0;
			var_281_bool = 0;
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_object;
			func_14254(var_282_bool, var_283_object);
			if(var_282_bool != 0) {
				var_291_bool = 0; var_292_object = Obj();
				var_292_object = var_1_object;
				func_14265(var_292_object);
				if(var_291_bool != 0) {
					var_281_bool = 1;
				}
			}
			if(var_281_bool != 0) {
				var_297_bool = 0; var_298_object = Obj();
				var_298_object = var_1_object;
				func_14242(var_298_object);
				var_303_bool = var_297_bool == 0; //@nz
				if(var_303_bool != 0) {
					var_280_bool = 1;
				}
			}
			if(var_280_bool != 0) {
				@@@var_0_object:AddReply((int)518540, (int)19651, (int)19650);
			}
			var_307_bool = 0;
			var_307_bool = 0;
			var_308_bool = 0;
			var_308_bool = 0;
			var_309_bool = 0; var_310_object = Obj();
			var_310_object = var_1_object;
			func_14242(var_310_object);
			if(var_309_bool != 0) {
				var_311_bool = 0; var_312_object = Obj();
				var_312_object = var_1_object;
				func_14254(var_311_bool, var_312_object);
				if(var_311_bool != 0) {
					var_308_bool = 1;
				}
			}
			if(var_308_bool != 0) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_14265(var_314_object);
				if(var_313_bool != 0) {
					var_307_bool = 1;
				}
			}
			if(var_307_bool != 0) {
				@@@var_0_object:AddReply((int)518543, (int)19654, (int)19653);
			}
			var_318_bool = 0;
			var_318_bool = 0;
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_object;
			func_14038(var_319_bool, var_320_object);
			if(var_319_bool != 0) {
				var_324_bool = 0; var_325_object = Obj();
				var_325_object = var_1_object;
				func_14277(var_325_object);
				if(var_324_bool != 0) {
					var_318_bool = 1;
				}
			}
			if(var_318_bool != 0) {
				@@@var_0_object:AddReply((int)530627, (int)31931, (int)31930);
			}
			@@@var_0_object:AddReply((int)518546, (int)-1, (int)19656);
			return 0;
		}
		var_337_bool = var_91_bool == (int)31931;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_1460(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)530628);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530629, (int)31933, (int)31932);
			@@@var_0_object:AddReply((int)530636, (int)31935, (int)31939);
			return 0;
		}
		var_347_bool = var_91_bool == (int)31933;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_1460(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)530630);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530631, (int)31935, (int)31934);
			@@@var_0_object:AddReply((int)530635, (int)-1, (int)31938);
			return 0;
		}
		var_357_bool = var_91_bool == (int)31935;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_1460(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)530632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530633, (int)-1, (int)31936);
			@@@var_0_object:AddReply((int)530634, (int)-1, (int)31937);
			return 0;
		}
		var_367_bool = var_91_bool == (int)19654;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_1460(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518544);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519060, (int)20843, (int)20185);
			return 0;
		}
		var_374_bool = var_91_bool == (int)20843;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_1460(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)519685);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519686, (int)20845, (int)20844);
			return 0;
		}
		var_381_bool = var_91_bool == (int)20845;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519688, (int)-1, (int)20846);
			@@@var_0_object:AddReply((int)530645, (int)31951, (int)31950);
			return 0;
		}
		var_391_bool = var_91_bool == (int)31951;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530647, (int)31953, (int)31952);
			return 0;
		}
		var_398_bool = var_91_bool == (int)31953;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530649, (int)31955, (int)31954);
			@@@var_0_object:AddReply((int)530652, (int)-1, (int)31957);
			return 0;
		}
		var_408_bool = var_91_bool == (int)31955;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_1460(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)530650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530651, (int)-1, (int)31956);
			return 0;
		}
		var_415_bool = var_91_bool == (int)19651;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530643, (int)31949, (int)31948);
			return 0;
		}
		var_422_bool = var_91_bool == (int)31949;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519066, (int)20192, (int)20191);
			return 0;
		}
		var_429_bool = var_91_bool == (int)20192;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_1460(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)519067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519068, (int)20195, (int)20193);
			@@@var_0_object:AddReply((int)519069, (int)-1, (int)20194);
			return 0;
		}
		var_439_bool = var_91_bool == (int)20195;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_1460(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)519070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518542, (int)-1, (int)19652);
			return 0;
		}
		var_446_bool = var_91_bool == (int)19648;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519071, (int)20197, (int)20196);
			return 0;
		}
		var_453_bool = var_91_bool == (int)20197;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518539, (int)-1, (int)19649);
			return 0;
		}
		var_460_bool = var_91_bool == (int)20203;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_1460(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)519078);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519079, (int)20199, (int)20204);
			@@@var_0_object:AddReply((int)519080, (int)20206, (int)20205);
			return 0;
		}
		var_470_bool = var_91_bool == (int)20206;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_1460(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)519081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519082, (int)20209, (int)20208);
			@@@var_0_object:AddReply((int)519086, (int)-1, (int)20212);
			return 0;
		}
		var_480_bool = var_91_bool == (int)20209;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_1460(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)519083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519085, (int)20214, (int)20211);
			@@@var_0_object:AddReply((int)519084, (int)20214, (int)20210);
			return 0;
		}
		var_490_bool = var_91_bool == (int)20214;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519088);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519089, (int)20199, (int)20216);
			return 0;
		}
		var_497_bool = var_91_bool == (int)20199;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_1460(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)519074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519075, (int)20201, (int)20200);
			@@@var_0_object:AddReply((int)519087, (int)20218, (int)20213);
			return 0;
		}
		var_507_bool = var_91_bool == (int)20218;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_1460(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)519090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519091, (int)20201, (int)20219);
			return 0;
		}
		var_514_bool = var_91_bool == (int)20201;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_1460(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)519076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519092, (int)20222, (int)20221);
			return 0;
		}
		var_521_bool = var_91_bool == (int)20222;
		if(var_521_bool != 0) {
			var_522_string = "";
			func_1460(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)519093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519094, (int)20224, (int)20223);
			return 0;
		}
		var_528_bool = var_91_bool == (int)20224;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519095);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519096, (int)20226, (int)20225);
			@@@var_0_object:AddReply((int)519099, (int)-1, (int)20228);
			return 0;
		}
		var_538_bool = var_91_bool == (int)20226;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519097);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519098, (int)20231, (int)20227);
			@@@var_0_object:AddReply((int)519100, (int)20230, (int)20229);
			return 0;
		}
		var_548_bool = var_91_bool == (int)20230;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519101);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519103, (int)20231, (int)20232);
			@@@var_0_object:AddReply((int)519104, (int)20236, (int)20234);
			return 0;
		}
		var_558_bool = var_91_bool == (int)20231;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519105, (int)20236, (int)20235);
			return 0;
		}
		var_565_bool = var_91_bool == (int)20236;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_1460(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519107, (int)-1, (int)20237);
			@@@var_0_object:AddReply((int)518534, (int)-1, (int)19644);
			@@@var_0_object:AddReply((int)519108, (int)-1, (int)20239);
			return 0;
		}
		var_3_string = true;
		var_577_bool = 0;
		func_12731(var_577_bool);
		if(var_577_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5cb";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)19707;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_12791();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_13471(var_160_object);
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_13537(var_186_object);
		}
		var_193_bool = var_92_cvector == (int)19709;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_12791();
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_13471(var_197_object);
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_13537(var_199_object);
		}
		var_201_bool = var_92_cvector == (int)19725;
		if(var_201_bool != 0) {
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_12847();
		}
		var_207_bool = var_92_cvector == (int)19730;
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_13115(var_209_object);
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_13465();
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_13160();
		}
		var_224_bool = var_92_cvector == (int)19733;
		if(var_224_bool != 0) {
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_13465();
			var_227_object = Obj(); var_228_object = Obj();
			var_227_object = var_1_object;
			var_228_object = var_0_object;
			func_13121(var_228_object);
			var_233_object = Obj(); var_234_object = Obj();
			var_233_object = var_1_object;
			var_234_object = var_0_object;
			func_13160();
			var_235_object = Obj(); var_236_object = Obj();
			var_235_object = var_1_object;
			var_236_object = var_0_object;
			func_13370(var_236_object);
			var_259_object = Obj(); var_260_object = Obj();
			var_259_object = var_1_object;
			var_260_object = var_0_object;
			func_13426(var_260_object);
			var_280_object = Obj(); var_281_object = Obj();
			var_280_object = var_1_object;
			var_281_object = var_0_object;
			func_13177();
		}
		var_285_bool = var_92_cvector == (int)19736;
		if(var_285_bool != 0) {
			var_286_object = Obj(); var_287_object = Obj();
			var_286_object = var_1_object;
			var_287_object = var_0_object;
			func_13127(var_287_object);
			var_292_object = Obj(); var_293_object = Obj();
			var_292_object = var_1_object;
			var_293_object = var_0_object;
			func_13465();
			var_294_object = Obj(); var_295_object = Obj();
			var_294_object = var_1_object;
			var_295_object = var_0_object;
			func_13160();
			var_296_object = Obj(); var_297_object = Obj();
			var_296_object = var_1_object;
			var_297_object = var_0_object;
			func_13177();
			var_298_object = Obj(); var_299_object = Obj();
			var_298_object = var_1_object;
			var_299_object = var_0_object;
			func_13448(var_299_object);
			var_304_object = Obj(); var_305_object = Obj();
			var_304_object = var_1_object;
			var_305_object = var_0_object;
			func_13437(var_305_object);
		}
		var_313_bool = var_92_cvector == (int)31273;
		if(var_313_bool != 0) {
			var_314_object = Obj(); var_315_object = Obj();
			var_314_object = var_1_object;
			var_315_object = var_0_object;
			func_12837();
		}
		var_328_bool = var_91_bool == (int)19701;
		if(var_328_bool != 0) {
			var_329_bool = 0; var_330_object = Obj();
			var_330_object = var_1_object;
			func_14289(var_330_object);
			if(var_329_bool != 0) {
				var_337_object = Obj(); var_338_object = Obj();
				var_337_object = var_1_object;
				var_338_object = var_0_object;
				func_12831();
				var_341_string = "";
				func_2632(var_92_cvector, "Menace");
				@@@var_0_object:SetMessage((int)518609);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518750, (int)19843, (int)19842);
				@@@var_0_object:AddReply((int)518748, (int)19845, (int)19840);
				return 0;
			}
			var_365_string = "";
			func_2632(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)518612);
			@@@var_0_object:ClearReplies();
			var_367_bool = 0; var_368_object = Obj();
			var_368_object = var_1_object;
			func_14301(var_368_object);
			if(var_367_bool != 0) {
				@@@var_0_object:AddReply((int)518613, (int)19996, (int)19705);
			}
			var_376_bool = 0;
			var_376_bool = 0;
			var_377_bool = 0;
			var_377_bool = 0;
			var_378_bool = 0;
			var_378_bool = 0;
			var_379_bool = 0; var_380_object = Obj();
			var_380_object = var_1_object;
			func_14313(var_380_object);
			if(var_379_bool != 0) {
				var_385_bool = 0; var_386_object = Obj();
				var_386_object = var_1_object;
				func_14325(var_386_object);
				var_391_bool = var_385_bool == 0; //@nz
				if(var_391_bool != 0) {
					var_378_bool = 1;
				}
			}
			if(var_378_bool != 0) {
				var_392_bool = 0; var_393_object = Obj();
				var_393_object = var_1_object;
				func_14370(var_393_object);
				if(var_392_bool != 0) {
					var_377_bool = 1;
				}
			}
			if(var_377_bool != 0) {
				var_398_bool = 0; var_399_object = Obj();
				var_399_object = var_1_object;
				func_14382(var_399_object);
				if(var_398_bool != 0) {
					var_376_bool = 1;
				}
			}
			if(var_376_bool != 0) {
				@@@var_0_object:AddReply((int)518633, (int)20000, (int)19725);
			}
			var_407_bool = 0;
			var_407_bool = 0;
			var_408_bool = 0;
			var_408_bool = 0;
			var_409_bool = 0; var_410_object = Obj();
			var_410_object = var_1_object;
			func_14337(var_409_bool, var_410_object);
			if(var_409_bool != 0) {
				var_418_bool = 0; var_419_object = Obj();
				var_419_object = var_1_object;
				func_14370(var_419_object);
				if(var_418_bool != 0) {
					var_408_bool = 1;
				}
			}
			if(var_408_bool != 0) {
				var_420_bool = 0; var_421_object = Obj();
				var_421_object = var_1_object;
				func_13954(var_421_object);
				var_426_bool = var_420_bool == 0; //@nz
				if(var_426_bool != 0) {
					var_407_bool = 1;
				}
			}
			if(var_407_bool != 0) {
				@@@var_0_object:AddReply((int)518636, (int)19729, (int)19728);
			}
			var_430_bool = 0;
			var_430_bool = 0;
			var_431_bool = 0;
			var_431_bool = 0;
			var_432_bool = 0; var_433_object = Obj();
			var_433_object = var_1_object;
			func_14348(var_432_bool, var_433_object);
			if(var_432_bool != 0) {
				var_437_bool = 0; var_438_object = Obj();
				var_438_object = var_1_object;
				func_14370(var_438_object);
				if(var_437_bool != 0) {
					var_431_bool = 1;
				}
			}
			if(var_431_bool != 0) {
				var_439_bool = 0; var_440_object = Obj();
				var_440_object = var_1_object;
				func_13954(var_440_object);
				var_441_bool = var_439_bool == 0; //@nz
				if(var_441_bool != 0) {
					var_430_bool = 1;
				}
			}
			if(var_430_bool != 0) {
				@@@var_0_object:AddReply((int)518639, (int)19732, (int)19731);
			}
			var_445_bool = 0;
			var_445_bool = 0;
			var_446_bool = 0;
			var_446_bool = 0;
			var_447_bool = 0; var_448_object = Obj();
			var_448_object = var_1_object;
			func_14359(var_447_bool, var_448_object);
			if(var_447_bool != 0) {
				var_452_bool = 0; var_453_object = Obj();
				var_453_object = var_1_object;
				func_14370(var_453_object);
				if(var_452_bool != 0) {
					var_446_bool = 1;
				}
			}
			if(var_446_bool != 0) {
				var_454_bool = 0; var_455_object = Obj();
				var_455_object = var_1_object;
				func_13954(var_455_object);
				var_456_bool = var_454_bool == 0; //@nz
				if(var_456_bool != 0) {
					var_445_bool = 1;
				}
			}
			if(var_445_bool != 0) {
				@@@var_0_object:AddReply((int)518642, (int)19735, (int)19734);
			}
			var_460_bool = 0;
			var_460_bool = 0;
			var_461_bool = 0; var_462_object = Obj();
			var_462_object = var_1_object;
			func_13954(var_462_object);
			if(var_461_bool != 0) {
				var_463_bool = 0; var_464_object = Obj();
				var_464_object = var_1_object;
				func_13966(var_464_object);
				var_469_bool = var_463_bool == 0; //@nz
				if(var_469_bool != 0) {
					var_460_bool = 1;
				}
			}
			if(var_460_bool != 0) {
				@@@var_0_object:AddReply((int)529822, (int)31272, (int)31271);
			}
			var_473_bool = 0; var_474_object = Obj();
			var_474_object = var_1_object;
			func_14038(var_473_bool, var_474_object);
			if(var_473_bool != 0) {
				@@@var_0_object:AddReply((int)530667, (int)31961, (int)31960);
			}
			@@@var_0_object:AddReply((int)518618, (int)29655, (int)19710);
			return 0;
		}
		var_485_bool = var_91_bool == (int)29655;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528291, (int)-1, (int)29656);
			return 0;
		}
		var_492_bool = var_91_bool == (int)31961;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530669, (int)31963, (int)31962);
			@@@var_0_object:AddReply((int)530676, (int)31965, (int)31969);
			return 0;
		}
		var_502_bool = var_91_bool == (int)31963;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530671, (int)31965, (int)31964);
			@@@var_0_object:AddReply((int)530675, (int)-1, (int)31968);
			return 0;
		}
		var_512_bool = var_91_bool == (int)31965;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_2632(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)530672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530673, (int)-1, (int)31966);
			@@@var_0_object:AddReply((int)530674, (int)-1, (int)31967);
			return 0;
		}
		var_522_bool = var_91_bool == (int)31272;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530179, (int)31573, (int)31572);
			return 0;
		}
		var_529_bool = var_91_bool == (int)31573;
		if(var_529_bool != 0) {
			var_530_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530637, (int)31942, (int)31941);
			@@@var_0_object:AddReply((int)530639, (int)31945, (int)31943);
			return 0;
		}
		var_539_bool = var_91_bool == (int)31942;
		if(var_539_bool != 0) {
			var_540_string = "";
			func_2632(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)530638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530640, (int)31945, (int)31944);
			return 0;
		}
		var_546_bool = var_91_bool == (int)31945;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_2632(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)530641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529824, (int)-1, (int)31273);
			return 0;
		}
		var_553_bool = var_91_bool == (int)19735;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518912, (int)20024, (int)20023);
			return 0;
		}
		var_560_bool = var_91_bool == (int)20024;
		if(var_560_bool != 0) {
			var_561_string = "";
			func_2632(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)518913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518914, (int)20026, (int)20025);
			@@@var_0_object:AddReply((int)528298, (int)29666, (int)29665);
			return 0;
		}
		var_570_bool = var_91_bool == (int)29666;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528300, (int)20026, (int)29667);
			return 0;
		}
		var_577_bool = var_91_bool == (int)20026;
		if(var_577_bool != 0) {
			var_578_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518644, (int)-1, (int)19736);
			return 0;
		}
		var_584_bool = var_91_bool == (int)19732;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518910, (int)20022, (int)20021);
			return 0;
		}
		var_591_bool = var_91_bool == (int)20022;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518641, (int)-1, (int)19733);
			return 0;
		}
		var_598_bool = var_91_bool == (int)19729;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_2632(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518637);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518901, (int)20012, (int)20011);
			@@@var_0_object:AddReply((int)518907, (int)20014, (int)20017);
			return 0;
		}
		var_608_bool = var_91_bool == (int)20012;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_2632(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)518902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518903, (int)20014, (int)20013);
			return 0;
		}
		var_615_bool = var_91_bool == (int)20014;
		if(var_615_bool != 0) {
			var_616_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518905, (int)20016, (int)20015);
			return 0;
		}
		var_622_bool = var_91_bool == (int)20016;
		if(var_622_bool != 0) {
			var_623_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518638, (int)-1, (int)19730);
			return 0;
		}
		var_629_bool = var_91_bool == (int)20000;
		if(var_629_bool != 0) {
			var_630_string = "";
			func_2632(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518892, (int)19726, (int)20001);
			@@@var_0_object:AddReply((int)518893, (int)20004, (int)20002);
			return 0;
		}
		var_639_bool = var_91_bool == (int)20004;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518896, (int)20003, (int)20005);
			return 0;
		}
		var_646_bool = var_91_bool == (int)19726;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518635, (int)20003, (int)19727);
			return 0;
		}
		var_653_bool = var_91_bool == (int)20003;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_2632(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518897, (int)20009, (int)20007);
			@@@var_0_object:AddReply((int)518898, (int)-1, (int)20008);
			return 0;
		}
		var_663_bool = var_91_bool == (int)20009;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518900, (int)-1, (int)20010);
			return 0;
		}
		var_670_bool = var_91_bool == (int)19996;
		if(var_670_bool != 0) {
			var_671_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518888, (int)19998, (int)19997);
			return 0;
		}
		var_677_bool = var_91_bool == (int)19998;
		if(var_677_bool != 0) {
			var_678_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518617, (int)-1, (int)19709);
			return 0;
		}
		var_684_bool = var_91_bool == (int)19843;
		if(var_684_bool != 0) {
			var_685_string = "";
			func_2632(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518752, (int)19845, (int)19844);
			@@@var_0_object:AddReply((int)518758, (int)19845, (int)19851);
			return 0;
		}
		var_694_bool = var_91_bool == (int)19845;
		if(var_694_bool != 0) {
			var_695_string = "";
			func_2632(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518755, (int)19849, (int)19847);
			@@@var_0_object:AddReply((int)518756, (int)19849, (int)19848);
			return 0;
		}
		var_704_bool = var_91_bool == (int)19849;
		if(var_704_bool != 0) {
			var_705_string = "";
			func_2632(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)518757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518759, (int)19854, (int)19853);
			@@@var_0_object:AddReply((int)518761, (int)19856, (int)19855);
			@@@var_0_object:AddReply((int)518765, (int)19858, (int)19859);
			return 0;
		}
		var_717_bool = var_91_bool == (int)19856;
		if(var_717_bool != 0) {
			var_718_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518763, (int)19858, (int)19857);
			return 0;
		}
		var_724_bool = var_91_bool == (int)19858;
		if(var_724_bool != 0) {
			var_725_string = "";
			func_2632(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)518764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518766, (int)19869, (int)19861);
			return 0;
		}
		var_731_bool = var_91_bool == (int)19854;
		if(var_731_bool != 0) {
			var_732_string = "";
			func_2632(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)518760);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518769, (int)19869, (int)19864);
			@@@var_0_object:AddReply((int)518768, (int)19870, (int)19863);
			return 0;
		}
		var_741_bool = var_91_bool == (int)19870;
		if(var_741_bool != 0) {
			var_742_string = "";
			func_2632(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518774, (int)19873, (int)19871);
			@@@var_0_object:AddReply((int)518775, (int)19878, (int)19872);
			@@@var_0_object:AddReply((int)518779, (int)19877, (int)19876);
			return 0;
		}
		var_754_bool = var_91_bool == (int)19878;
		if(var_754_bool != 0) {
			var_755_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518782, (int)19841, (int)19879);
			return 0;
		}
		var_761_bool = var_91_bool == (int)19873;
		if(var_761_bool != 0) {
			var_762_string = "";
			func_2632(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518776);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518778, (int)19877, (int)19875);
			@@@var_0_object:AddReply((int)518777, (int)-1, (int)19874);
			return 0;
		}
		var_771_bool = var_91_bool == (int)19877;
		if(var_771_bool != 0) {
			var_772_string = "";
			func_2632(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)518780);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518784, (int)19885, (int)19883);
			@@@var_0_object:AddReply((int)518786, (int)19841, (int)19886);
			return 0;
		}
		var_781_bool = var_91_bool == (int)19885;
		if(var_781_bool != 0) {
			var_782_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518787, (int)19841, (int)19888);
			@@@var_0_object:AddReply((int)518788, (int)19891, (int)19889);
			return 0;
		}
		var_791_bool = var_91_bool == (int)19891;
		if(var_791_bool != 0) {
			var_792_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518789);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518790, (int)19869, (int)19892);
			@@@var_0_object:AddReply((int)518791, (int)-1, (int)19893);
			return 0;
		}
		var_801_bool = var_91_bool == (int)19869;
		if(var_801_bool != 0) {
			var_802_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518772);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518783, (int)19841, (int)19881);
			return 0;
		}
		var_808_bool = var_91_bool == (int)19841;
		if(var_808_bool != 0) {
			var_809_string = "";
			func_2632(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518610, (int)19706, (int)19702);
			@@@var_0_object:AddReply((int)518611, (int)-1, (int)19703);
			return 0;
		}
		var_818_bool = var_91_bool == (int)19706;
		if(var_818_bool != 0) {
			var_819_string = "";
			func_2632(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)518614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518792, (int)19896, (int)19895);
			return 0;
		}
		var_825_bool = var_91_bool == (int)19896;
		if(var_825_bool != 0) {
			var_826_string = "";
			func_2632(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)518793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518615, (int)-1, (int)19707);
			@@@var_0_object:AddReply((int)518794, (int)-1, (int)19897);
			return 0;
		}
		var_3_string = true;
		var_834_bool = 0;
		func_12731(var_834_bool);
		if(var_834_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa5f";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)21656;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_12865();
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_13519(var_125_object);
		}
		var_165_bool = var_92_cvector == (int)21659;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_12865();
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_13519(var_169_object);
		}
		var_171_bool = var_91_bool == (int)21409;
		if(var_171_bool != 0) {
			var_172_bool = 0;
			var_172_bool = 0;
			var_173_bool = 0; var_174_object = Obj();
			var_174_object = var_1_object;
			func_14430(var_174_object);
			var_181_bool = var_173_bool == 0; //@nz
			if(var_181_bool != 0) {
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_14418(var_183_object);
				var_188_bool = var_182_bool == 0; //@nz
				if(var_188_bool != 0) {
					var_172_bool = 1;
				}
			}
			if(var_172_bool != 0) {
				var_189_string = "";
				func_4035(var_92_cvector, "Menace");
				@@@var_0_object:SetMessage((int)520217);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520218, (int)21411, (int)21410);
				@@@var_0_object:AddReply((int)520222, (int)21415, (int)21414);
				return 0;
			}
			var_213_string = "";
			func_4035(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520440, (int)-1, (int)21653);
			return 0;
		}
		var_219_bool = var_91_bool == (int)21415;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_4035(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)520223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520437, (int)21413, (int)21648);
			return 0;
		}
		var_226_bool = var_91_bool == (int)21411;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_4035(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)520219);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520220, (int)21413, (int)21412);
			@@@var_0_object:AddReply((int)520438, (int)21413, (int)21650);
			return 0;
		}
		var_236_bool = var_91_bool == (int)21413;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_4035(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520441, (int)21655, (int)21654);
			return 0;
		}
		var_243_bool = var_91_bool == (int)21655;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_4035(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)520442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520443, (int)-1, (int)21656);
			@@@var_0_object:AddReply((int)520444, (int)21658, (int)21657);
			return 0;
		}
		var_253_bool = var_91_bool == (int)21658;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_4035(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)520445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520446, (int)-1, (int)21659);
			return 0;
		}
		var_3_string = true;
		var_259_bool = 0;
		func_12731(var_259_bool);
		if(var_259_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfda";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)21528;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_12931();
		}
		var_102_bool = var_92_cvector == (int)21557;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_12937();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_13183();
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_13487(var_149_object);
		}
		var_175_bool = var_92_cvector == (int)21558;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_12937();
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_13183();
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_13487(var_181_object);
		}
		var_183_bool = var_92_cvector == (int)22171;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_13183();
		}
		var_187_bool = var_92_cvector == (int)21574;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_12919();
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_13192();
		}
		var_201_bool = var_92_cvector == (int)31916;
		if(var_201_bool != 0) {
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_12874();
		}
		var_216_bool = var_92_cvector == (int)31914;
		if(var_216_bool != 0) {
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_object;
			func_12874();
		}
		var_220_bool = var_92_cvector == (int)21586;
		if(var_220_bool != 0) {
			var_221_object = Obj(); var_222_object = Obj();
			var_221_object = var_1_object;
			var_222_object = var_0_object;
			func_12874();
		}
		var_224_bool = var_92_cvector == (int)21594;
		if(var_224_bool != 0) {
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_12913();
		}
		var_230_bool = var_91_bool == (int)21527;
		if(var_230_bool != 0) {
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_13990(var_232_object);
			if(var_231_bool != 0) {
				var_239_object = Obj(); var_240_object = Obj();
				var_239_object = var_1_object;
				var_240_object = var_0_object;
				func_12925();
				var_243_string = "";
				func_4522(var_92_cvector, "Menace");
				@@@var_0_object:SetMessage((int)520332);
				@@@var_0_object:ClearReplies();
				var_261_bool = 0; var_262_object = Obj();
				var_262_object = var_1_object;
				func_14547(var_262_object);
				if(var_261_bool != 0) {
					@@@var_0_object:AddReply((int)520333, (int)21529, (int)21528);
				}
				@@@var_0_object:AddReply((int)520347, (int)-1, (int)21544);
				return 0;
			}
			var_273_bool = 0;
			var_273_bool = 0;
			var_274_bool = 0; var_275_object = Obj();
			var_275_object = var_1_object;
			func_14490(var_275_object);
			if(var_274_bool != 0) {
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_object;
				func_14002(var_281_object);
				if(var_280_bool != 0) {
					var_273_bool = 1;
				}
			}
			if(var_273_bool != 0) {
				var_286_object = Obj(); var_287_object = Obj();
				var_286_object = var_1_object;
				var_287_object = var_0_object;
				func_12907();
				var_290_string = "";
				func_4522(var_92_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520348);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520349, (int)21548, (int)21547);
				@@@var_0_object:AddReply((int)520368, (int)21548, (int)21571);
				return 0;
			}
			var_298_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520369);
			@@@var_0_object:ClearReplies();
			var_300_bool = 0;
			var_300_bool = 0;
			var_301_bool = 0;
			var_301_bool = 0;
			var_302_bool = 0; var_303_object = Obj();
			var_303_object = var_1_object;
			func_14514(var_302_bool, var_303_object);
			if(var_302_bool != 0) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_14535(var_316_object);
				if(var_315_bool != 0) {
					var_301_bool = 1;
				}
			}
			if(var_301_bool != 0) {
				var_321_bool = 0; var_322_object = Obj();
				var_322_object = var_1_object;
				func_14014(var_322_object);
				if(var_321_bool != 0) {
					var_300_bool = 1;
				}
			}
			if(var_300_bool != 0) {
				@@@var_0_object:AddReply((int)520370, (int)-1, (int)21574);
			}
			var_330_bool = 0;
			var_330_bool = 0;
			var_331_bool = 0; var_332_object = Obj();
			var_332_object = var_1_object;
			func_14026(var_332_object);
			if(var_331_bool != 0) {
				var_337_bool = 0; var_338_object = Obj();
				var_338_object = var_1_object;
				func_14478(var_338_object);
				var_343_bool = var_337_bool == 0; //@nz
				if(var_343_bool != 0) {
					var_330_bool = 1;
				}
			}
			if(var_330_bool != 0) {
				@@@var_0_object:AddReply((int)520372, (int)21577, (int)21576);
			}
			var_347_bool = 0; var_348_object = Obj();
			var_348_object = var_1_object;
			func_14502(var_348_object);
			if(var_347_bool != 0) {
				@@@var_0_object:AddReply((int)520388, (int)21595, (int)21594);
			}
			@@@var_0_object:AddReply((int)520397, (int)-1, (int)21603);
			return 0;
		}
		var_360_bool = var_91_bool == (int)21595;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_4522(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)520389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520390, (int)21597, (int)21596);
			@@@var_0_object:AddReply((int)520396, (int)-1, (int)21602);
			return 0;
		}
		var_370_bool = var_91_bool == (int)21597;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_4522(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)520391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520392, (int)21599, (int)21598);
			@@@var_0_object:AddReply((int)520395, (int)-1, (int)21601);
			return 0;
		}
		var_380_bool = var_91_bool == (int)21599;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520394, (int)-1, (int)21600);
			return 0;
		}
		var_387_bool = var_91_bool == (int)21577;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_4522(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)520373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520374, (int)21579, (int)21578);
			@@@var_0_object:AddReply((int)520387, (int)21583, (int)21592);
			return 0;
		}
		var_397_bool = var_91_bool == (int)21579;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_4522(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)520375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520376, (int)21581, (int)21580);
			@@@var_0_object:AddReply((int)520386, (int)21583, (int)21590);
			return 0;
		}
		var_407_bool = var_91_bool == (int)21581;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_4522(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)520377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520378, (int)21583, (int)21582);
			@@@var_0_object:AddReply((int)530616, (int)21583, (int)31917);
			return 0;
		}
		var_417_bool = var_91_bool == (int)21583;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_4522(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)520379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520380, (int)21585, (int)21584);
			var_423_bool = 0; var_424_object = Obj();
			var_424_object = var_1_object;
			func_14454(var_424_object);
			var_429_bool = var_423_bool == 0; //@nz
			if(var_429_bool != 0) {
				@@@var_0_object:AddReply((int)520383, (int)21588, (int)21587);
			}
			return 0;
		}
		var_434_bool = var_91_bool == (int)21588;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520385, (int)21585, (int)21589);
			return 0;
		}
		var_441_bool = var_91_bool == (int)21585;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530608, (int)31909, (int)31908);
			@@@var_0_object:AddReply((int)520382, (int)-1, (int)21586);
			return 0;
		}
		var_451_bool = var_91_bool == (int)31909;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_4522(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)530609);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530610, (int)31912, (int)31911);
			return 0;
		}
		var_458_bool = var_91_bool == (int)31912;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_4522(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)530611);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530612, (int)31915, (int)31913);
			@@@var_0_object:AddReply((int)530613, (int)-1, (int)31914);
			return 0;
		}
		var_468_bool = var_91_bool == (int)31915;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_4522(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)530614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530615, (int)-1, (int)31916);
			return 0;
		}
		var_475_bool = var_91_bool == (int)21548;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520351, (int)21550, (int)21549);
			@@@var_0_object:AddReply((int)520363, (int)21550, (int)21563);
			@@@var_0_object:AddReply((int)520364, (int)21566, (int)21565);
			return 0;
		}
		var_488_bool = var_91_bool == (int)21566;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_4522(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)520365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527832, (int)29172, (int)29171);
			return 0;
		}
		var_495_bool = var_91_bool == (int)29172;
		if(var_495_bool != 0) {
			var_496_string = "";
			func_4522(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)527833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520367, (int)21550, (int)21569);
			@@@var_0_object:AddReply((int)520366, (int)21552, (int)21567);
			return 0;
		}
		var_505_bool = var_91_bool == (int)21550;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_4522(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)520352);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527834, (int)29174, (int)29173);
			return 0;
		}
		var_512_bool = var_91_bool == (int)29174;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_4522(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)527835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520353, (int)21552, (int)21551);
			@@@var_0_object:AddReply((int)520362, (int)21552, (int)21561);
			return 0;
		}
		var_522_bool = var_91_bool == (int)21552;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_4522(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)520354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520355, (int)21554, (int)21553);
			@@@var_0_object:AddReply((int)520361, (int)21556, (int)21559);
			return 0;
		}
		var_532_bool = var_91_bool == (int)21554;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520357, (int)21556, (int)21555);
			var_538_bool = 0; var_539_object = Obj();
			var_539_object = var_1_object;
			func_14454(var_539_object);
			if(var_538_bool != 0) {
				@@@var_0_object:AddReply((int)520954, (int)-1, (int)22171);
			}
			return 0;
		}
		var_544_bool = var_91_bool == (int)21556;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520359, (int)-1, (int)21557);
			@@@var_0_object:AddReply((int)520360, (int)-1, (int)21558);
			return 0;
		}
		var_554_bool = var_91_bool == (int)21529;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_4522(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)520334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520335, (int)21531, (int)21530);
			@@@var_0_object:AddReply((int)520346, (int)21531, (int)21542);
			return 0;
		}
		var_564_bool = var_91_bool == (int)21531;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520336);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527828, (int)29168, (int)29167);
			return 0;
		}
		var_571_bool = var_91_bool == (int)29168;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527830, (int)29170, (int)29169);
			return 0;
		}
		var_578_bool = var_91_bool == (int)29170;
		if(var_578_bool != 0) {
			var_579_string = "";
			func_4522(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520337, (int)21533, (int)21532);
			return 0;
		}
		var_585_bool = var_91_bool == (int)21533;
		if(var_585_bool != 0) {
			var_586_bool = 0; var_587_object = Obj();
			var_587_object = var_1_object;
			func_14442(var_587_object);
			var_592_bool = var_586_bool == 0; //@nz
			if(var_592_bool != 0) {
				var_593_string = "";
				func_4522(var_92_cvector, "Menace");
				@@@var_0_object:SetMessage((int)520338);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520339, (int)21535, (int)21534);
				@@@var_0_object:AddReply((int)520345, (int)21535, (int)21540);
				return 0;
			}
			var_601_bool = 0; var_602_object = Obj();
			var_602_object = var_1_object;
			func_14442(var_602_object);
			if(var_601_bool != 0) {
				var_603_string = "";
				func_4522(var_92_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520956);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520957, (int)29175, (int)22173);
				@@@var_0_object:AddReply((int)520958, (int)29175, (int)22174);
				return 0;
			}
		}
		var_612_bool = var_91_bool == (int)21535;
		if(var_612_bool != 0) {
			var_613_string = "";
			func_4522(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)520340);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520341, (int)29175, (int)21536);
			@@@var_0_object:AddReply((int)520342, (int)21538, (int)21537);
			return 0;
		}
		var_622_bool = var_91_bool == (int)21538;
		if(var_622_bool != 0) {
			var_623_string = "";
			func_4522(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520343);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520344, (int)29175, (int)21539);
			return 0;
		}
		var_629_bool = var_91_bool == (int)29175;
		if(var_629_bool != 0) {
			var_630_string = "";
			func_4522(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)527836);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527837, (int)-1, (int)29176);
			@@@var_0_object:AddReply((int)527838, (int)-1, (int)29177);
			return 0;
		}
		var_3_string = true;
		var_638_bool = 0;
		func_12731(var_638_bool);
		if(var_638_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x11c1";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)21742;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_12890();
		}
		var_139_bool = var_92_cvector == (int)21743;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_12890();
		}
		var_143_bool = var_92_cvector == (int)23366;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_13154();
		}
		var_149_bool = var_92_cvector == (int)23368;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_13199(var_151_object);
		}
		var_160_bool = var_92_cvector == (int)23377;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_13144();
		}
		var_175_bool = var_92_cvector == (int)23378;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_13144();
		}
		var_179_bool = var_91_bool == (int)21729;
		if(var_179_bool != 0) {
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_14466(var_181_object);
			if(var_180_bool != 0) {
				var_188_object = Obj(); var_189_object = Obj();
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_12884();
				var_192_string = "";
				func_5659(var_92_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520527);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520528, (int)21731, (int)21730);
				return 0;
			}
			var_213_string = "";
			func_5659(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520547);
			@@@var_0_object:ClearReplies();
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_14196(var_215_bool, var_216_object);
			if(var_215_bool != 0) {
				@@@var_0_object:AddReply((int)520548, (int)21751, (int)21750);
			}
			var_222_bool = 0;
			var_222_bool = 0;
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_13919(var_223_bool, var_224_object);
			if(var_223_bool != 0) {
				var_232_bool = 0; var_233_object = Obj();
				var_233_object = var_1_object;
				func_13930(var_233_object);
				if(var_232_bool != 0) {
					var_222_bool = 1;
				}
			}
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)522217, (int)23367, (int)23366);
			}
			var_241_bool = 0;
			var_241_bool = 0;
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_13942(var_243_object);
			var_248_bool = var_242_bool == 0; //@nz
			if(var_248_bool != 0) {
				var_249_bool = 0; var_250_object = Obj();
				var_250_object = var_1_object;
				func_14049(var_250_object);
				if(var_249_bool != 0) {
					var_241_bool = 1;
				}
			}
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)522220, (int)23370, (int)23369);
			}
			@@@var_0_object:AddReply((int)520557, (int)-1, (int)21759);
			return 0;
		}
		var_262_bool = var_91_bool == (int)23370;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_5659(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522222, (int)23372, (int)23371);
			return 0;
		}
		var_269_bool = var_91_bool == (int)23372;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_5659(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)522223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522224, (int)23374, (int)23373);
			return 0;
		}
		var_276_bool = var_91_bool == (int)23374;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_5659(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)522225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522226, (int)23376, (int)23375);
			@@@var_0_object:AddReply((int)522229, (int)-1, (int)23378);
			return 0;
		}
		var_286_bool = var_91_bool == (int)23376;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_5659(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)522227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522228, (int)-1, (int)23377);
			return 0;
		}
		var_293_bool = var_91_bool == (int)23367;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_5659(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522219, (int)-1, (int)23368);
			return 0;
		}
		var_300_bool = var_91_bool == (int)21751;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_5659(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520550, (int)21753, (int)21752);
			return 0;
		}
		var_307_bool = var_91_bool == (int)21753;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_5659(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520552, (int)-1, (int)21754);
			@@@var_0_object:AddReply((int)520553, (int)-1, (int)21755);
			return 0;
		}
		var_317_bool = var_91_bool == (int)21731;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_5659(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)520529);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520530, (int)21733, (int)21732);
			return 0;
		}
		var_324_bool = var_91_bool == (int)21733;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_5659(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520531);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520532, (int)21735, (int)21734);
			@@@var_0_object:AddReply((int)528355, (int)29726, (int)29725);
			return 0;
		}
		var_334_bool = var_91_bool == (int)29726;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_5659(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)528356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528357, (int)21737, (int)29727);
			return 0;
		}
		var_341_bool = var_91_bool == (int)21735;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_5659(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520533);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520534, (int)21737, (int)21736);
			return 0;
		}
		var_348_bool = var_91_bool == (int)21737;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_5659(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520536, (int)21739, (int)21738);
			@@@var_0_object:AddReply((int)520542, (int)21745, (int)21744);
			return 0;
		}
		var_358_bool = var_91_bool == (int)21745;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_5659(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520544, (int)21747, (int)21746);
			return 0;
		}
		var_365_bool = var_91_bool == (int)21747;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_5659(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520546, (int)21741, (int)21748);
			return 0;
		}
		var_372_bool = var_91_bool == (int)21739;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_5659(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520537);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520538, (int)21741, (int)21740);
			return 0;
		}
		var_379_bool = var_91_bool == (int)21741;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_5659(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520540, (int)-1, (int)21742);
			@@@var_0_object:AddReply((int)520541, (int)-1, (int)21743);
			return 0;
		}
		var_3_string = true;
		var_388_bool = 0;
		func_12731(var_388_bool);
		if(var_388_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1632";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_91_bool == (int)21920;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_6292(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520709);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520710, (int)21922, (int)21921);
			@@@var_0_object:AddReply((int)520714, (int)21922, (int)21925);
			return 0;
		}
		var_122_bool = var_91_bool == (int)21922;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_6292(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)520711);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520712, (int)-1, (int)21923);
			@@@var_0_object:AddReply((int)520713, (int)-1, (int)21924);
			@@@var_0_object:AddReply((int)530691, (int)-1, (int)31983);
			return 0;
		}
		var_3_string = true;
		var_134_bool = 0;
		func_12731(var_134_bool);
		if(var_134_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x18ab";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)22180;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_12953();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_13619();
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_12984(var_167_object);
		}
		var_193_bool = var_92_cvector == (int)30025;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_12953();
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_13619();
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_12984(var_199_object);
		}
		var_201_bool = var_91_bool == (int)22179;
		if(var_201_bool != 0) {
			var_202_bool = 0; var_203_object = Obj();
			var_203_object = var_1_object;
			func_14559(var_203_object);
			if(var_202_bool != 0) {
				var_210_string = "";
				func_6538(var_92_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)520966);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528598, (int)29999, (int)29998);
				return 0;
			}
			var_231_string = "";
			func_6538(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520969, (int)-1, (int)22182);
			return 0;
		}
		var_237_bool = var_91_bool == (int)29999;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_6538(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528607, (int)30008, (int)30007);
			return 0;
		}
		var_244_bool = var_91_bool == (int)30008;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_6538(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)528608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528619, (int)23365, (int)30021);
			@@@var_0_object:AddReply((int)528600, (int)30001, (int)30000);
			return 0;
		}
		var_254_bool = var_91_bool == (int)30001;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_6538(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)528601);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528602, (int)23365, (int)30002);
			return 0;
		}
		var_261_bool = var_91_bool == (int)23365;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_6538(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528603, (int)30004, (int)30003);
			@@@var_0_object:AddReply((int)528609, (int)30012, (int)30009);
			return 0;
		}
		var_271_bool = var_91_bool == (int)30012;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_6538(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)528612);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528613, (int)30015, (int)30013);
			return 0;
		}
		var_278_bool = var_91_bool == (int)30004;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_6538(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528604);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528605, (int)30006, (int)30005);
			@@@var_0_object:AddReply((int)528610, (int)30011, (int)30010);
			return 0;
		}
		var_288_bool = var_91_bool == (int)30011;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_6538(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)528611);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528618, (int)30006, (int)30018);
			return 0;
		}
		var_295_bool = var_91_bool == (int)30006;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_6538(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528614, (int)30015, (int)30014);
			return 0;
		}
		var_302_bool = var_91_bool == (int)30015;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_6538(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528616, (int)30017, (int)30016);
			return 0;
		}
		var_309_bool = var_91_bool == (int)30017;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_6538(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520967, (int)-1, (int)22180);
			@@@var_0_object:AddReply((int)528620, (int)30024, (int)30023);
			return 0;
		}
		var_319_bool = var_91_bool == (int)30024;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_6538(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)528621);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528622, (int)-1, (int)30025);
			return 0;
		}
		var_3_string = true;
		var_325_bool = 0;
		func_12731(var_325_bool);
		if(var_325_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x19a1";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)22625;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_13006();
		}
		var_102_bool = var_92_cvector == (int)22629;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_13012();
		}
		var_108_bool = var_92_cvector == (int)36200;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_13381();
		}
		var_114_bool = var_91_bool == (int)22618;
		if(var_114_bool != 0) {
			var_115_bool = 0; var_116_object = Obj();
			var_116_object = var_1_object;
			func_13647(var_116_object);
			if(var_115_bool != 0) {
				var_123_object = Obj(); var_124_object = Obj();
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_13000();
				var_127_object = Obj(); var_128_object = Obj();
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_13387();
				var_131_string = "";
				func_7093(var_92_cvector, "Smile");
				@@@var_0_object:SetMessage((int)521440);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531320, (int)32648, (int)32647);
				@@@var_0_object:AddReply((int)531327, (int)32650, (int)32654);
				return 0;
			}
			var_155_string = "";
			func_7093(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521450);
			@@@var_0_object:ClearReplies();
			var_157_bool = 0;
			var_157_bool = 0;
			var_158_bool = 0;
			var_158_bool = 0;
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_13693(var_160_object);
			var_165_bool = var_159_bool == 0; //@nz
			if(var_165_bool != 0) {
				var_166_bool = 0; var_167_object = Obj();
				var_167_object = var_1_object;
				func_13705(var_167_object);
				if(var_166_bool != 0) {
					var_158_bool = 1;
				}
			}
			if(var_158_bool != 0) {
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_13717(var_173_object);
				if(var_172_bool != 0) {
					var_157_bool = 1;
				}
			}
			if(var_157_bool != 0) {
				@@@var_0_object:AddReply((int)521451, (int)22630, (int)22629);
			}
			var_181_bool = 0;
			var_181_bool = 0;
			var_182_bool = 0; var_183_object = Obj();
			var_183_object = var_1_object;
			func_14172(var_183_object);
			if(var_182_bool != 0) {
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_object;
				func_14184(var_189_object);
				if(var_188_bool != 0) {
					var_181_bool = 1;
				}
			}
			if(var_181_bool != 0) {
				@@@var_0_object:AddReply((int)534566, (int)36201, (int)36200);
			}
			@@@var_0_object:AddReply((int)521454, (int)-1, (int)22632);
			@@@var_0_object:AddReply((int)531341, (int)-1, (int)32672);
			return 0;
		}
		var_204_bool = var_91_bool == (int)36201;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_7093(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)534567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534568, (int)36203, (int)36202);
			@@@var_0_object:AddReply((int)534570, (int)36206, (int)36204);
			@@@var_0_object:AddReply((int)534571, (int)36206, (int)36205);
			return 0;
		}
		var_217_bool = var_91_bool == (int)36206;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_7093(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)534572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534573, (int)36203, (int)36209);
			@@@var_0_object:AddReply((int)534576, (int)36203, (int)36213);
			return 0;
		}
		var_227_bool = var_91_bool == (int)36203;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_7093(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)534569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534574, (int)-1, (int)36211);
			@@@var_0_object:AddReply((int)534575, (int)-1, (int)36212);
			return 0;
		}
		var_237_bool = var_91_bool == (int)22630;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_7093(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521453, (int)32674, (int)22631);
			@@@var_0_object:AddReply((int)531342, (int)32674, (int)32673);
			return 0;
		}
		var_247_bool = var_91_bool == (int)32674;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_7093(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)531343);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531344, (int)-1, (int)32675);
			@@@var_0_object:AddReply((int)531345, (int)-1, (int)32676);
			return 0;
		}
		var_257_bool = var_91_bool == (int)32648;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_7093(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)531321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531322, (int)32650, (int)32649);
			@@@var_0_object:AddReply((int)531328, (int)32650, (int)32655);
			return 0;
		}
		var_267_bool = var_91_bool == (int)32650;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_7093(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531324, (int)32652, (int)32651);
			@@@var_0_object:AddReply((int)531329, (int)32652, (int)32656);
			return 0;
		}
		var_277_bool = var_91_bool == (int)32652;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_7093(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531325);
			@@@var_0_object:ClearReplies();
			var_280_bool = 0; var_281_object = Obj();
			var_281_object = var_1_object;
			func_13635(var_281_object);
			if(var_280_bool != 0) {
				@@@var_0_object:AddReply((int)521441, (int)32659, (int)22619);
			}
			var_289_bool = 0; var_290_object = Obj();
			var_290_object = var_1_object;
			func_13659(var_290_object);
			if(var_289_bool != 0) {
				@@@var_0_object:AddReply((int)521444, (int)22623, (int)22622);
			}
			var_308_bool = 0; var_309_object = Obj();
			var_309_object = var_1_object;
			func_13717(var_309_object);
			if(var_308_bool != 0) {
				@@@var_0_object:AddReply((int)521447, (int)22626, (int)22625);
			}
			return 0;
		}
		var_314_bool = var_91_bool == (int)22626;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_7093(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)521448);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521449, (int)32664, (int)22627);
			@@@var_0_object:AddReply((int)531333, (int)32663, (int)32662);
			return 0;
		}
		var_324_bool = var_91_bool == (int)32663;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_7093(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531339, (int)32664, (int)32668);
			@@@var_0_object:AddReply((int)531340, (int)32664, (int)32669);
			return 0;
		}
		var_334_bool = var_91_bool == (int)32664;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_7093(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531336, (int)-1, (int)32665);
			@@@var_0_object:AddReply((int)531337, (int)-1, (int)32666);
			@@@var_0_object:AddReply((int)531338, (int)-1, (int)32667);
			return 0;
		}
		var_347_bool = var_91_bool == (int)22623;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_7093(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)521445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521446, (int)-1, (int)22624);
			@@@var_0_object:AddReply((int)531332, (int)-1, (int)32661);
			return 0;
		}
		var_357_bool = var_91_bool == (int)32659;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_7093(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531326, (int)22620, (int)32653);
			return 0;
		}
		var_364_bool = var_91_bool == (int)22620;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_7093(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)521442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521443, (int)-1, (int)22621);
			@@@var_0_object:AddReply((int)531331, (int)-1, (int)32660);
			return 0;
		}
		var_3_string = true;
		var_373_bool = 0;
		func_12731(var_373_bool);
		if(var_373_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1bcc";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)23085;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_13018();
		}
		var_133_bool = var_92_cvector == (int)23093;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_13018();
		}
		var_137_bool = var_92_cvector == (int)23096;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_13046();
		}
		var_151_bool = var_92_cvector == (int)23117;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_13030();
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_13393();
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_13410(var_181_object);
		}
		var_213_bool = var_91_bool == (int)23084;
		if(var_213_bool != 0) {
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_13741(var_215_object);
			if(var_214_bool != 0) {
				var_220_object = Obj(); var_221_object = Obj();
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_13040();
				var_224_object = Obj(); var_225_object = Obj();
				var_224_object = var_1_object;
				var_225_object = var_0_object;
				func_13055();
				var_228_string = "";
				func_7886(var_92_cvector, "Menace");
				@@@var_0_object:SetMessage((int)521910);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522427, (int)23595, (int)23594);
				@@@var_0_object:AddReply((int)521912, (int)23599, (int)23086);
				return 0;
			}
			var_252_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521913);
			@@@var_0_object:ClearReplies();
			var_254_bool = 0; var_255_object = Obj();
			var_255_object = var_1_object;
			func_13729(var_255_object);
			if(var_254_bool != 0) {
				@@@var_0_object:AddReply((int)521914, (int)23092, (int)23088);
			}
			var_263_bool = 0; var_264_object = Obj();
			var_264_object = var_1_object;
			func_13753(var_264_object);
			if(var_263_bool != 0) {
				@@@var_0_object:AddReply((int)521920, (int)23095, (int)23094);
			}
			var_272_bool = 0;
			var_272_bool = 0;
			var_273_bool = 0;
			var_273_bool = 0;
			var_274_bool = 0; var_275_object = Obj();
			var_275_object = var_1_object;
			func_13765(var_275_object);
			if(var_274_bool != 0) {
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_object;
				func_13789(var_281_object);
				if(var_280_bool != 0) {
					var_273_bool = 1;
				}
			}
			if(var_273_bool != 0) {
				var_286_bool = 0; var_287_object = Obj();
				var_287_object = var_1_object;
				func_13777(var_287_object);
				var_292_bool = var_286_bool == 0; //@nz
				if(var_292_bool != 0) {
					var_272_bool = 1;
				}
			}
			if(var_272_bool != 0) {
				@@@var_0_object:AddReply((int)521935, (int)32896, (int)23109);
			}
			var_296_bool = 0;
			var_296_bool = 0;
			var_297_bool = 0;
			var_297_bool = 0;
			var_298_bool = 0; var_299_object = Obj();
			var_299_object = var_1_object;
			func_13765(var_299_object);
			if(var_298_bool != 0) {
				var_300_bool = 0; var_301_object = Obj();
				var_301_object = var_1_object;
				func_13777(var_301_object);
				if(var_300_bool != 0) {
					var_297_bool = 1;
				}
			}
			if(var_297_bool != 0) {
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_object;
				func_13789(var_303_object);
				var_304_bool = var_302_bool == 0; //@nz
				if(var_304_bool != 0) {
					var_296_bool = 1;
				}
			}
			if(var_296_bool != 0) {
				@@@var_0_object:AddReply((int)521936, (int)23113, (int)23110);
			}
			var_308_bool = 0;
			var_308_bool = 0;
			var_309_bool = 0;
			var_309_bool = 0;
			var_310_bool = 0; var_311_object = Obj();
			var_311_object = var_1_object;
			func_13789(var_311_object);
			if(var_310_bool != 0) {
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_13777(var_313_object);
				if(var_312_bool != 0) {
					var_309_bool = 1;
				}
			}
			if(var_309_bool != 0) {
				var_314_bool = 0; var_315_object = Obj();
				var_315_object = var_1_object;
				func_13765(var_315_object);
				if(var_314_bool != 0) {
					var_308_bool = 1;
				}
			}
			if(var_308_bool != 0) {
				@@@var_0_object:AddReply((int)521941, (int)32893, (int)23115);
			}
			@@@var_0_object:AddReply((int)521917, (int)-1, (int)23091);
			return 0;
		}
		var_323_bool = var_91_bool == (int)32893;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)531532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531533, (int)32895, (int)32894);
			@@@var_0_object:AddReply((int)531538, (int)32895, (int)32900);
			return 0;
		}
		var_333_bool = var_91_bool == (int)32895;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)531534);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531539, (int)32904, (int)32902);
			@@@var_0_object:AddReply((int)531545, (int)32904, (int)32908);
			return 0;
		}
		var_343_bool = var_91_bool == (int)32904;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)531541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531542, (int)23116, (int)32905);
			@@@var_0_object:AddReply((int)531546, (int)23116, (int)32910);
			return 0;
		}
		var_353_bool = var_91_bool == (int)23116;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531543, (int)32912, (int)32906);
			@@@var_0_object:AddReply((int)531544, (int)32912, (int)32907);
			return 0;
		}
		var_363_bool = var_91_bool == (int)32912;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_7886(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521943, (int)-1, (int)23117);
			return 0;
		}
		var_370_bool = var_91_bool == (int)23113;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521940, (int)32889, (int)23114);
			@@@var_0_object:AddReply((int)531530, (int)32889, (int)32890);
			return 0;
		}
		var_380_bool = var_91_bool == (int)32889;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)531529);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531531, (int)-1, (int)32892);
			return 0;
		}
		var_387_bool = var_91_bool == (int)32896;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_7886(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531536, (int)23111, (int)32897);
			@@@var_0_object:AddReply((int)531537, (int)23111, (int)32898);
			return 0;
		}
		var_397_bool = var_91_bool == (int)23111;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)521937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521938, (int)32887, (int)23112);
			return 0;
		}
		var_404_bool = var_91_bool == (int)32887;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)531527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531528, (int)-1, (int)32888);
			return 0;
		}
		var_411_bool = var_91_bool == (int)23095;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)521921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522470, (int)23644, (int)23643);
			@@@var_0_object:AddReply((int)531518, (int)23646, (int)32874);
			return 0;
		}
		var_421_bool = var_91_bool == (int)23644;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522471);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522472, (int)23646, (int)23645);
			@@@var_0_object:AddReply((int)531517, (int)32882, (int)32873);
			return 0;
		}
		var_431_bool = var_91_bool == (int)32882;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531524, (int)23646, (int)32883);
			@@@var_0_object:AddReply((int)531525, (int)-1, (int)32885);
			return 0;
		}
		var_441_bool = var_91_bool == (int)23646;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_7886(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522473);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522474, (int)23648, (int)23647);
			@@@var_0_object:AddReply((int)531519, (int)32877, (int)32875);
			return 0;
		}
		var_451_bool = var_91_bool == (int)32877;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531521, (int)23648, (int)32878);
			@@@var_0_object:AddReply((int)531522, (int)23648, (int)32879);
			return 0;
		}
		var_461_bool = var_91_bool == (int)23648;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522476, (int)23650, (int)23649);
			return 0;
		}
		var_468_bool = var_91_bool == (int)23650;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521922, (int)-1, (int)23096);
			@@@var_0_object:AddReply((int)531526, (int)-1, (int)32886);
			return 0;
		}
		var_478_bool = var_91_bool == (int)23092;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521919, (int)-1, (int)23093);
			return 0;
		}
		var_485_bool = var_91_bool == (int)23595;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_7886(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522429, (int)23611, (int)23596);
			@@@var_0_object:AddReply((int)522431, (int)23599, (int)23598);
			@@@var_0_object:AddReply((int)522430, (int)23606, (int)23597);
			return 0;
		}
		var_498_bool = var_91_bool == (int)23606;
		if(var_498_bool != 0) {
			var_499_string = "";
			func_7886(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522440, (int)23608, (int)23607);
			return 0;
		}
		var_505_bool = var_91_bool == (int)23608;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522441);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522442, (int)23601, (int)23609);
			return 0;
		}
		var_512_bool = var_91_bool == (int)23599;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_7886(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)522432);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522433, (int)23601, (int)23600);
			return 0;
		}
		var_519_bool = var_91_bool == (int)23601;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_7886(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522435, (int)23603, (int)23602);
			return 0;
		}
		var_526_bool = var_91_bool == (int)23603;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_7886(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522437, (int)23615, (int)23604);
			@@@var_0_object:AddReply((int)522438, (int)-1, (int)23605);
			return 0;
		}
		var_536_bool = var_91_bool == (int)23611;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_7886(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)522443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522445, (int)23615, (int)23614);
			@@@var_0_object:AddReply((int)522444, (int)23599, (int)23612);
			return 0;
		}
		var_546_bool = var_91_bool == (int)23615;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_7886(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)522446);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522447, (int)23618, (int)23616);
			return 0;
		}
		var_553_bool = var_91_bool == (int)23618;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_7886(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522448);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522449, (int)23621, (int)23619);
			return 0;
		}
		var_560_bool = var_91_bool == (int)23621;
		if(var_560_bool != 0) {
			var_561_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522451);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522452, (int)23623, (int)23622);
			@@@var_0_object:AddReply((int)522450, (int)23623, (int)23620);
			return 0;
		}
		var_570_bool = var_91_bool == (int)23623;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_7886(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522454, (int)23627, (int)23624);
			@@@var_0_object:AddReply((int)522455, (int)23626, (int)23625);
			return 0;
		}
		var_580_bool = var_91_bool == (int)23626;
		if(var_580_bool != 0) {
			var_581_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522456);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522458, (int)23630, (int)23629);
			return 0;
		}
		var_587_bool = var_91_bool == (int)23630;
		if(var_587_bool != 0) {
			var_588_string = "";
			func_7886(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522460, (int)23627, (int)23631);
			return 0;
		}
		var_594_bool = var_91_bool == (int)23627;
		if(var_594_bool != 0) {
			var_595_string = "";
			func_7886(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521911, (int)-1, (int)23085);
			@@@var_0_object:AddReply((int)522461, (int)-1, (int)23633);
			return 0;
		}
		var_3_string = true;
		var_603_bool = 0;
		func_12731(var_603_bool);
		if(var_603_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1ee5";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)24768;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_13109();
		}
		var_102_bool = var_92_cvector == (int)23231;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_13061();
		}
		var_131_bool = var_92_cvector == (int)24786;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_13061();
		}
		var_135_bool = var_92_cvector == (int)24770;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_13109();
		}
		var_139_bool = var_92_cvector == (int)31886;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_13167();
		}
		var_157_bool = var_92_cvector == (int)32709;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_13167();
		}
		var_161_bool = var_92_cvector == (int)32433;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_13210();
		}
		var_175_bool = var_92_cvector == (int)32723;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_13210();
		}
		var_179_bool = var_92_cvector == (int)32720;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_13219();
		}
		var_194_bool = var_91_bool == (int)23230;
		if(var_194_bool != 0) {
			var_195_bool = 0; var_196_object = Obj();
			var_196_object = var_1_object;
			func_13813(var_196_object);
			if(var_195_bool != 0) {
				var_203_object = Obj(); var_204_object = Obj();
				var_203_object = var_1_object;
				var_204_object = var_0_object;
				func_13070();
				var_207_string = "";
				func_8998(var_92_cvector, "Menace");
				@@@var_0_object:SetMessage((int)522061);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523529, (int)24763, (int)24762);
				return 0;
			}
			var_228_string = "";
			func_8998(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522063);
			@@@var_0_object:ClearReplies();
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_13907(var_231_object);
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)523535, (int)24769, (int)24768);
			}
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_13907(var_240_object);
			if(var_239_bool != 0) {
				@@@var_0_object:AddReply((int)523537, (int)24771, (int)24770);
			}
			var_244_bool = 0; var_245_object = Obj();
			var_245_object = var_1_object;
			func_13978(var_245_object);
			if(var_244_bool != 0) {
				@@@var_0_object:AddReply((int)530525, (int)32707, (int)31884);
			}
			var_253_bool = 0; var_254_object = Obj();
			var_254_object = var_1_object;
			func_14061(var_254_object);
			if(var_253_bool != 0) {
				@@@var_0_object:AddReply((int)531113, (int)32712, (int)32431);
			}
			@@@var_0_object:AddReply((int)522064, (int)-1, (int)23233);
			return 0;
		}
		var_266_bool = var_91_bool == (int)32712;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531376, (int)32432, (int)32713);
			@@@var_0_object:AddReply((int)531377, (int)32717, (int)32714);
			return 0;
		}
		var_276_bool = var_91_bool == (int)32717;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_8998(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)531380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531381, (int)32432, (int)32718);
			@@@var_0_object:AddReply((int)531382, (int)-1, (int)32720);
			return 0;
		}
		var_286_bool = var_91_bool == (int)32432;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531114);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531378, (int)32716, (int)32715);
			@@@var_0_object:AddReply((int)531383, (int)32722, (int)32721);
			return 0;
		}
		var_296_bool = var_91_bool == (int)32722;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_8998(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)531384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531385, (int)-1, (int)32723);
			@@@var_0_object:AddReply((int)531386, (int)32716, (int)32724);
			return 0;
		}
		var_306_bool = var_91_bool == (int)32716;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_8998(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531115, (int)-1, (int)32433);
			return 0;
		}
		var_313_bool = var_91_bool == (int)32707;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531370);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531371, (int)31885, (int)32708);
			@@@var_0_object:AddReply((int)531372, (int)-1, (int)32709);
			return 0;
		}
		var_323_bool = var_91_bool == (int)31885;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)530526);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531373, (int)32711, (int)32710);
			return 0;
		}
		var_330_bool = var_91_bool == (int)32711;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)531374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530527, (int)-1, (int)31886);
			return 0;
		}
		var_337_bool = var_91_bool == (int)24771;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_8998(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523539, (int)24773, (int)24772);
			return 0;
		}
		var_344_bool = var_91_bool == (int)24773;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_8998(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523540);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523541, (int)24775, (int)24774);
			return 0;
		}
		var_351_bool = var_91_bool == (int)24775;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_8998(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523543, (int)-1, (int)24776);
			@@@var_0_object:AddReply((int)523544, (int)-1, (int)24777);
			return 0;
		}
		var_361_bool = var_91_bool == (int)24769;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_8998(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523545, (int)24779, (int)24778);
			return 0;
		}
		var_368_bool = var_91_bool == (int)24779;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)523546);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523547, (int)24781, (int)24780);
			var_374_bool = 0; var_375_object = Obj();
			var_375_object = var_1_object;
			func_13801(var_375_object);
			if(var_374_bool != 0) {
				@@@var_0_object:AddReply((int)522065, (int)-1, (int)23234);
			}
			return 0;
		}
		var_384_bool = var_91_bool == (int)24781;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)523548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523549, (int)24784, (int)24782);
			return 0;
		}
		var_391_bool = var_91_bool == (int)24784;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)523551);
			@@@var_0_object:ClearReplies();
			var_394_bool = 0; var_395_object = Obj();
			var_395_object = var_1_object;
			func_13801(var_395_object);
			var_396_bool = var_394_bool == 0; //@nz
			if(var_396_bool != 0) {
				@@@var_0_object:AddReply((int)522062, (int)-1, (int)23231);
			}
			@@@var_0_object:AddReply((int)523553, (int)-1, (int)24786);
			return 0;
		}
		var_404_bool = var_91_bool == (int)24763;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_8998(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)523530);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523531, (int)24765, (int)24764);
			return 0;
		}
		var_411_bool = var_91_bool == (int)24765;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_8998(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523533, (int)24767, (int)24766);
			@@@var_0_object:AddReply((int)523554, (int)24788, (int)24787);
			return 0;
		}
		var_421_bool = var_91_bool == (int)24788;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_8998(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)523555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523556, (int)24790, (int)24789);
			return 0;
		}
		var_428_bool = var_91_bool == (int)24790;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_8998(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)523557);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523558, (int)24767, (int)24791);
			return 0;
		}
		var_435_bool = var_91_bool == (int)24767;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_8998(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523534);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523559, (int)24794, (int)24793);
			return 0;
		}
		var_442_bool = var_91_bool == (int)24794;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_8998(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)523560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523561, (int)-1, (int)24795);
			@@@var_0_object:AddReply((int)523562, (int)-1, (int)24796);
			return 0;
		}
		var_3_string = true;
		var_451_bool = 0;
		func_12731(var_451_bool);
		if(var_451_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x233d";
	
}


task_23_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_int, var_61_int, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_92_cvector == (int)24209;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_13354();
		}
		var_131_bool = var_92_cvector == (int)33406;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_13082();
		}
		var_145_bool = var_92_cvector == (int)33416;
		if(var_145_bool != 0) {
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_13354();
		}
		var_149_bool = var_92_cvector == (int)33395;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_13082();
		}
		var_153_bool = var_92_cvector == (int)42244;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_13082();
		}
		var_157_bool = var_92_cvector == (int)24178;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_13103();
		}
		var_163_bool = var_92_cvector == (int)24187;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_13097();
		}
		var_169_bool = var_91_bool == (int)23274;
		if(var_169_bool != 0) {
			var_170_bool = 0;
			var_170_bool = 0;
			var_171_bool = 0; var_172_object = Obj();
			var_172_object = var_1_object;
			func_13825(var_172_object);
			if(var_171_bool != 0) {
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_13861(var_178_object);
				var_183_bool = var_177_bool == 0; //@nz
				if(var_183_bool != 0) {
					var_170_bool = 1;
				}
			}
			if(var_170_bool != 0) {
				var_184_object = Obj(); var_185_object = Obj();
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_13076();
				var_188_object = Obj(); var_189_object = Obj();
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_13091();
				var_192_string = "";
				func_9885(var_92_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)522107);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522108, (int)24172, (int)23275);
				@@@var_0_object:AddReply((int)522109, (int)24176, (int)23276);
				return 0;
			}
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_13091();
			var_218_string = "";
			func_9885(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531983);
			@@@var_0_object:ClearReplies();
			var_220_bool = 0;
			var_220_bool = 0;
			var_221_bool = 0;
			var_221_bool = 0;
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_13897(var_222_bool, var_223_object);
			if(var_222_bool != 0) {
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_14085(var_272_object);
				var_277_bool = var_271_bool == 0; //@nz
				if(var_277_bool != 0) {
					var_221_bool = 1;
				}
			}
			if(var_221_bool != 0) {
				var_278_bool = 0; var_279_object = Obj();
				var_279_object = var_1_object;
				func_13861(var_279_object);
				var_280_bool = var_278_bool == 0; //@nz
				if(var_280_bool != 0) {
					var_220_bool = 1;
				}
			}
			if(var_220_bool != 0) {
				@@@var_0_object:AddReply((int)540259, (int)42243, (int)42242);
			}
			var_284_bool = 0;
			var_284_bool = 0;
			var_285_bool = 0; var_286_object = Obj();
			var_286_object = var_1_object;
			func_13873(var_286_object);
			if(var_285_bool != 0) {
				var_291_bool = 0; var_292_object = Obj();
				var_292_object = var_1_object;
				func_13885(var_292_object);
				if(var_291_bool != 0) {
					var_284_bool = 1;
				}
			}
			if(var_284_bool != 0) {
				@@@var_0_object:AddReply((int)522987, (int)24179, (int)24178);
			}
			var_300_bool = 0;
			var_300_bool = 0;
			var_301_bool = 0; var_302_object = Obj();
			var_302_object = var_1_object;
			func_13837(var_302_object);
			if(var_301_bool != 0) {
				var_307_bool = 0; var_308_object = Obj();
				var_308_object = var_1_object;
				func_13849(var_308_object);
				if(var_307_bool != 0) {
					var_300_bool = 1;
				}
			}
			if(var_300_bool != 0) {
				@@@var_0_object:AddReply((int)522996, (int)24188, (int)24187);
			}
			@@@var_0_object:AddReply((int)531987, (int)-1, (int)33393);
			return 0;
		}
		var_320_bool = var_91_bool == (int)24188;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_9885(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522998, (int)24190, (int)24189);
			return 0;
		}
		var_327_bool = var_91_bool == (int)24190;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_9885(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523000, (int)24192, (int)24191);
			return 0;
		}
		var_334_bool = var_91_bool == (int)24192;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_9885(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523001);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523002, (int)24194, (int)24193);
			return 0;
		}
		var_341_bool = var_91_bool == (int)24194;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_9885(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)523003);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523004, (int)24196, (int)24195);
			return 0;
		}
		var_348_bool = var_91_bool == (int)24196;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_9885(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)523005);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523006, (int)-1, (int)24197);
			return 0;
		}
		var_355_bool = var_91_bool == (int)24179;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_9885(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522992, (int)24184, (int)24183);
			return 0;
		}
		var_362_bool = var_91_bool == (int)24184;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_9885(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522989, (int)24181, (int)24180);
			return 0;
		}
		var_369_bool = var_91_bool == (int)24181;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_9885(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)522990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522991, (int)24185, (int)24182);
			return 0;
		}
		var_376_bool = var_91_bool == (int)24185;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_9885(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522995, (int)-1, (int)24186);
			return 0;
		}
		var_383_bool = var_91_bool == (int)42243;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_9885(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)540260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540261, (int)-1, (int)42244);
			return 0;
		}
		var_390_bool = var_91_bool == (int)24172;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_9885(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522984, (int)24176, (int)24175);
			@@@var_0_object:AddReply((int)522982, (int)24174, (int)24173);
			return 0;
		}
		var_400_bool = var_91_bool == (int)24174;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_9885(var_92_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523009, (int)24176, (int)24200);
			return 0;
		}
		var_407_bool = var_91_bool == (int)24176;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_9885(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522986, (int)24198, (int)24177);
			@@@var_0_object:AddReply((int)523012, (int)33391, (int)24204);
			return 0;
		}
		var_417_bool = var_91_bool == (int)33391;
		if(var_417_bool != 0) {
			var_418_bool = 0; var_419_object = Obj();
			var_419_object = var_1_object;
			func_13897(var_418_bool, var_419_object);
			var_420_bool = var_418_bool == 0; //@nz
			if(var_420_bool != 0) {
				var_421_string = "";
				func_9885(var_92_cvector, "Sorrow");
				@@@var_0_object:SetMessage((int)531985);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531986, (int)33408, (int)33392);
				return 0;
			}
			var_426_bool = 0; var_427_object = Obj();
			var_427_object = var_1_object;
			func_13897(var_426_bool, var_427_object);
			if(var_426_bool != 0) {
				var_428_string = "";
				func_9885(var_92_cvector, "Smile");
				@@@var_0_object:SetMessage((int)531988);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532018, (int)33419, (int)33418);
				return 0;
			}
		}
		var_434_bool = var_91_bool == (int)33419;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_9885(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532019);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531989, (int)-1, (int)33395);
			@@@var_0_object:AddReply((int)540262, (int)-1, (int)42245);
			return 0;
		}
		var_444_bool = var_91_bool == (int)33408;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_9885(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532009, (int)33410, (int)33409);
			@@@var_0_object:AddReply((int)532017, (int)-1, (int)33417);
			return 0;
		}
		var_454_bool = var_91_bool == (int)33410;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_9885(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)532010);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532011, (int)33412, (int)33411);
			@@@var_0_object:AddReply((int)532013, (int)-1, (int)33413);
			return 0;
		}
		var_464_bool = var_91_bool == (int)33412;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_9885(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532014, (int)33415, (int)33414);
			return 0;
		}
		var_471_bool = var_91_bool == (int)33415;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_9885(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532015);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532016, (int)-1, (int)33416);
			return 0;
		}
		var_478_bool = var_91_bool == (int)24198;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_9885(var_92_cvector, "Menace");
			@@@var_0_object:SetMessage((int)523007);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523008, (int)24202, (int)24199);
			return 0;
		}
		var_485_bool = var_91_bool == (int)24202;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_9885(var_92_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)523010);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523013, (int)23277, (int)24206);
			return 0;
		}
		var_492_bool = var_91_bool == (int)23277;
		if(var_492_bool != 0) {
			var_493_bool = 0; var_494_object = Obj();
			var_494_object = var_1_object;
			func_13897(var_493_bool, var_494_object);
			var_495_bool = var_493_bool == 0; //@nz
			if(var_495_bool != 0) {
				var_496_string = "";
				func_9885(var_92_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)522110);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540119, (int)42089, (int)42088);
				@@@var_0_object:AddReply((int)523014, (int)-1, (int)24207);
				return 0;
			}
			var_504_bool = 0; var_505_object = Obj();
			var_505_object = var_1_object;
			func_13897(var_504_bool, var_505_object);
			if(var_504_bool != 0) {
				var_506_string = "";
				func_9885(var_92_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)531999);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532000, (int)-1, (int)33406);
				@@@var_0_object:AddReply((int)532001, (int)-1, (int)33407);
				return 0;
			}
		}
		var_515_bool = var_91_bool == (int)42089;
		if(var_515_bool != 0) {
			var_516_string = "";
			func_9885(var_92_cvector, "Sorrow");
			@@@var_0_object:SetMessage((int)540120);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523016, (int)-1, (int)24209);
			return 0;
		}
		var_3_string = true;
		var_521_bool = 0;
		func_12731(var_521_bool);
		if(var_521_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x26b4";
	
}


task_25_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_int, var_66_int, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_91_bool == (int)31289;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_10758(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529907, (int)-1, (int)31290);
			@@@var_0_object:AddReply((int)529908, (int)-1, (int)31291);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_12731(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2a1d";
	
}


task_27_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_int, var_71_int, var_72_object, var_73_object, var_74_object, var_75_string, var_76_bool, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_91_bool == (int)31293;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_10961(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529911, (int)-1, (int)31294);
			@@@var_0_object:AddReply((int)529912, (int)-1, (int)31295);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_12731(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2ae8";
	
}


task_29_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_int, var_76_int, var_77_object, var_78_object, var_79_object, var_80_string, var_81_bool, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_91_bool == (int)31297;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_11164(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529915, (int)-1, (int)31298);
			@@@var_0_object:AddReply((int)529916, (int)-1, (int)31299);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_12731(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2bb3";
	
}


task_31_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_int, var_81_int, var_82_object, var_83_object, var_84_object, var_85_string, var_86_bool, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_91_bool == (int)31301;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_11367(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529919, (int)-1, (int)31302);
			@@@var_0_object:AddReply((int)529920, (int)-1, (int)31303);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_12731(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2c7e";
	
}


task_33_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_object, var_81_object, var_82_object, var_83_string, var_84_bool, var_85_int, var_86_int, var_87_object, var_88_object, var_89_object, var_90_string, var_91_bool, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_91_bool == (int)31313;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_11570(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529931, (int)-1, (int)31314);
			@@@var_0_object:AddReply((int)529932, (int)-1, (int)31315);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_12731(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2d49";
	
}


task_35_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_object, var_81_object, var_82_object, var_83_string, var_84_bool, var_85_object, var_86_object, var_87_object, var_88_string, var_89_bool, var_90_int, var_91_int, var_92_cvector)
{
	if((int)1 != 0) {
		func_12437();
		var_96_bool = var_91_int == (int)42563;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_11773(var_92_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_121_bool = 0;
		func_12731(var_121_bool);
		if(var_121_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2e14";
	
}


task_36_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_object, var_81_object, var_82_object, var_83_string, var_84_bool, var_85_object, var_86_object, var_87_object, var_88_string, var_89_bool, var_90_cvector, var_91_int)
{
	var_93_bool = var_91_int == (int)10;
	if(var_93_bool != 0) {
		func_11906();
		var_95_bool = 0;
		var_95_bool = 0;
		var_96_bool = 0;
		func_12161(var_96_bool);
		if(var_96_bool != 0) {
			var_99_bool = 0;
			func_11875(var_99_bool);
			if(var_99_bool != 0) {
				var_95_bool = 1;
			}
		}
		if(var_95_bool != 0) {
			var_116_bool = 0;
			func_11855(var_116_bool);
			if(var_116_bool != 0) {
				var_135_bool = 0; var_136_object = Obj();
				func_12444(Obj());
				var_137_object = var_136_object;
				func_12311(var_135_bool, var_136_object);
			}
		} else {
			func_11870(var_91_int);
			func_11897();
		}
	}
	return 0;
	
}


task_36_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_object, var_81_object, var_82_object, var_83_string, var_84_bool, var_85_object, var_86_object, var_87_object, var_88_string, var_89_bool, var_90_cvector)
{
	func_12088();
	func_11906();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_36_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_object, var_81_object, var_82_object, var_83_string, var_84_bool, var_85_object, var_86_object, var_87_object, var_88_string, var_89_bool, var_90_cvector)
{
	StopGroup0();
	func_11906();
	var_92_string = "";
	func_12391("Neutral");
	func_11897();
	return 0;
}


task_36_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_object, var_81_object, var_82_object, var_83_string, var_84_bool, var_85_object, var_86_object, var_87_object, var_88_string, var_89_bool, var_90_cvector, var_91_bool)
{
	var_92_bool = var_91_bool;
	if(var_92_bool != 0) {
		func_11897();
	} else {
		var_98_string = "";
		func_12391("Neutral");
	}
	return 0;
	
}


task_36_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_object, var_81_object, var_82_object, var_83_string, var_84_bool, var_85_object, var_86_object, var_87_object, var_88_string, var_89_bool, var_90_cvector, var_91_object)
{
	var_92_bool = 0; var_93_bool = 0;
	IsOverrideActive(var_93_bool);
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		EventDisable(0);
		func_12088();
		var_95_bool = 0; var_96_object = Obj();
		var_91_object = var_96_object;
		func_12152(var_95_bool, var_96_object);
		EventEnable(0);
		var_109_object = Obj();
		var_91_object = var_109_object;
		func_15130(var_109_object);
		var_2110_string = "";
		func_12391("Neutral");
		func_11906();
		func_11897();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_object, var_71_object, var_72_object, var_73_string, var_74_bool, var_75_object, var_76_object, var_77_object, var_78_string, var_79_bool, var_80_object, var_81_object, var_82_object, var_83_string, var_84_bool, var_85_object, var_86_object, var_87_object, var_88_string, var_89_bool, var_90_cvector)
{
	func_11841(var_90_cvector);
	return 0;
}


func_0(var_0_object, var_887_int, var_888_object)
{
	var_890_object = Obj(); var_891_bool = 0; var_892_int = 0; var_893_bool = 0; var_894_object = Obj(); var_895_bool = 0; var_896_int = 0; var_897_bool = 0;
	var_0_object = var_888_object;
	var_898_bool = 0; var_899_object = Obj(); var_900_float = 0;
	var_888_object = var_899_object;
	func_12166(var_898_bool, var_899_object, (float)70.0);
	var_901_bool = var_898_bool == 0; //@nz
	if(var_901_bool != 0) {
		var_887_int = -2;
		return 8;
	}
	CreateDialog(var_894_object);
	var_902_int = 0;
	func_12725(var_902_int);
	@@var_894_object:SetNPCName(var_902_int);
	var_903_int = 0;
	func_12723(var_903_int);
	@@var_894_object:SetNPCDescription(var_903_int);
	var_904_string = "";
	func_12727(var_904_string);
	@@var_894_object:SetPhoto(var_904_string);
	var_905_string = "";
	func_12729(var_905_string);
	@@var_894_object:SetPhoto2(var_905_string);
	var_906_int = 0;
	func_15022(var_906_int);
	@@var_894_object:SetPlayerName(var_906_int);
	IsOverrideActive(var_895_bool);
	var_907_bool = var_895_bool;
	if(var_907_bool != 0) {
		var_887_int = -2;
		return 8;
	}
	DoDialog(var_894_object);
	var_908_bool = 0; var_909_object = Obj();
	func_12444(Obj());
	var_910_object = var_909_object;
	func_12253(var_908_bool, var_909_object);
	var_911_object = Obj(); var_912_object = Obj();
	var_888_object = var_911_object;
	var_894_object = var_912_object;
	TaskCall(1);
	func_81(var_913_object, var_914_object, var_915_string, var_916_bool, var_911_object, var_912_object);
	TaskReturn();
	@@var_894_object:IsDialogEnd(var_897_bool);
	
Label_63:
	var_1022_bool = var_897_bool == 0; //@nz
	if(var_1022_bool != 0) {
		sync();
		@@var_894_object:IsDialogEnd(var_897_bool);
		goto Label_63;
	}
	var_888_object = Obj();
	func_12235();
	StopDialog(var_894_object);
	@@var_894_object:GetReturnValue((int)-1);
	var_896_int = var_887_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_14337(var_1262_bool, var_1263_object)
{
	var_1264_bool = 0; var_1265_object = Obj(); var_1266_string = "";
	var_1263_object = var_1265_object;
	func_12579(var_1264_bool, var_1265_object, "b5q01_heart_vera");
	if(var_1264_bool != 0) {
		var_1262_bool = 1;
		return 0;
	}
	var_1262_bool = 0;
	return 0;
}


func_6153(var_0_object, var_114_int, var_115_object)
{
	var_117_object = Obj(); var_118_bool = 0; var_119_int = 0; var_120_bool = 0; var_121_object = Obj(); var_122_bool = 0; var_123_int = 0; var_124_bool = 0;
	var_0_object = var_115_object;
	var_125_bool = 0; var_126_object = Obj(); var_127_float = 0;
	var_115_object = var_126_object;
	func_12166(var_125_bool, var_126_object, (float)70.0);
	var_172_bool = var_125_bool == 0; //@nz
	if(var_172_bool != 0) {
		var_114_int = -2;
		return 8;
	}
	CreateDialog(var_121_object);
	var_173_int = 0;
	func_12725(var_173_int);
	@@var_121_object:SetNPCName(var_173_int);
	var_174_int = 0;
	func_12723(var_174_int);
	@@var_121_object:SetNPCDescription(var_174_int);
	var_175_string = "";
	func_12727(var_175_string);
	@@var_121_object:SetPhoto(var_175_string);
	var_176_string = "";
	func_12729(var_176_string);
	@@var_121_object:SetPhoto2(var_176_string);
	var_177_int = 0;
	func_15022(var_177_int);
	@@var_121_object:SetPlayerName(var_177_int);
	IsOverrideActive(var_122_bool);
	var_185_bool = var_122_bool;
	if(var_185_bool != 0) {
		var_114_int = -2;
		return 8;
	}
	DoDialog(var_121_object);
	var_186_bool = 0; var_187_object = Obj();
	func_12444(Obj());
	var_188_object = var_187_object;
	func_12253(var_186_bool, var_187_object);
	var_281_object = Obj(); var_282_object = Obj();
	var_115_object = var_281_object;
	var_121_object = var_282_object;
	TaskCall(13);
	func_6234(var_283_object, var_284_object, var_285_string, var_286_bool, var_281_object, var_282_object);
	TaskReturn();
	@@var_121_object:IsDialogEnd(var_124_bool);
	
Label_6216:
	var_330_bool = var_124_bool == 0; //@nz
	if(var_330_bool != 0) {
		sync();
		@@var_121_object:IsDialogEnd(var_124_bool);
		goto Label_6216;
	}
	var_115_object = Obj();
	func_12235();
	StopDialog(var_121_object);
	@@var_121_object:GetReturnValue((int)-1);
	var_123_int = var_114_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_14348(var_1281_bool, var_1282_object)
{
	var_1283_bool = 0; var_1284_object = Obj(); var_1285_string = "";
	var_1282_object = var_1284_object;
	func_12579(var_1283_bool, var_1284_object, "b5q01_heart_nude");
	if(var_1283_bool != 0) {
		var_1281_bool = 1;
		return 0;
	}
	var_1281_bool = 0;
	return 0;
}


func_13326(var_246_object)
{
	Trace("packet is given");
	var_249_object = Obj(); var_250_string = ""; var_251_int = 0;
	var_246_object = var_249_object;
	func_12566(var_249_object, "packet", (int)2);
	return 0;
}


func_12311(var_197_bool, var_198_object)
{
	var_199_string = ""; var_200_int = 0; var_201_bool = 0; var_202_int = 0; var_203_string = ""; var_204_string = ""; var_205_int = 0; var_206_bool = 0; var_207_int = 0; var_208_string = "";
	var_204_string = "c";
	var_205_int = 0;
	
Label_12314:
	if((int)1 != 0) {
		var_211_int = var_205_int + (int)1;
		var_212_int = var_204_string + var_211_int;
		@@var_198_object:HasProperty(var_212_int, var_206_bool);
		var_213_bool = var_206_bool == 0; //@nz
		if(var_213_bool != 0) {
		} else {
			var_205_int = var_205_int + (int)1;
			goto Label_12314;
		}
	}
	var_214_bool = var_205_int == 0; //@nz
	if(var_214_bool != 0) {
		var_197_bool = 0;
		return 10;
	}
	var_207_int = 0;
	var_216_bool = var_205_int > (int)1;
	if(var_216_bool != 0) {
		irand(var_207_int, var_205_int);
	}
	var_218_int = var_207_int + (int)1;
	var_219_int = var_204_string + var_218_int;
	@@var_198_object:GetProperty(var_219_int, var_208_string);
	var_220_bool = 0; var_221_string = "";
	var_208_string = var_221_string;
	func_12422(var_220_bool, var_221_string);
	var_220_bool = var_197_bool;
	return 10;
	
}


func_14359(var_1296_bool, var_1297_object)
{
	var_1298_bool = 0; var_1299_object = Obj(); var_1300_string = "";
	var_1297_object = var_1299_object;
	func_12579(var_1298_bool, var_1299_object, "b5q01_heart_butcher");
	if(var_1298_bool != 0) {
		var_1296_bool = 1;
		return 0;
	}
	var_1296_bool = 0;
	return 0;
}


func_13337()
{
	SetVariable("b3q04", (int)1000);
	var_180_bool = 0; var_181_string = ""; var_182_string = "";
	func_12648(var_180_bool, "quest_b3_04", "completed");
	return 0;
}


func_14370(var_1245_bool)
{
	var_1247_int = 0; var_1248_string = "";
	func_12471(var_1247_int, "b5q01");
	var_1250_bool = var_1247_int == (int)1;
	if(var_1250_bool != 0) {
		var_1245_bool = 1;
		return 0;
	}
	var_1245_bool = 0;
	return 0;
}


func_13348()
{
	SetVariable("b3DankoVisit", (int)1);
	return 0;
}


func_13354()
{
	var_99_int = 0; var_100_string = "";
	func_12471(var_99_int, "b12q01_Danko");
	var_104_bool = var_99_int == (int)0;
	if(var_104_bool != 0) {
		SetVariable("b12q01_Danko", (int)1);
		func_14697();
	}
	return 0;
}


func_11309(var_0_object, var_1_object, var_2_object, var_3_string, var_554_object, var_555_object)
{
	var_0_object = var_555_object;
	var_1_object = var_554_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_561_string = "";
		func_11367(var_555_object, "Neutral");
		@@@var_0_object:SetMessage((int)529918);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529919, (int)-1, (int)31302);
		@@@var_0_object:AddReply((int)529920, (int)-1, (int)31303);
		goto Label_11337;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2c31";
	}
Label_11337:
	var_576_bool = 0;
	func_12731(var_576_bool);
	if(var_576_bool != 0) {

	Label_11341:
		lshWaitForAnimEnd();
		var_577_string = var_3_string;
		if(var_577_string != 0) {
		} else {
			var_578_string = "";
			var_578_string = var_2_object;
			func_12391(var_578_string);
			goto Label_11341;
	}
		PlayAnimation("all", "idle");

	Label_11356:
		WaitForAnimEnd();
		var_581_string = var_3_string;
		if(var_581_string != 0) {
			goto Label_11366;
		}
		PlayAnimation("all", "idle");
		goto Label_11356;
	}
	goto Label_11366;
	
Label_11366:
	return 0;
	
}


func_14382(var_1251_bool)
{
	var_1253_int = 0; var_1254_string = "";
	func_12471(var_1253_int, "oob5Danko2");
	var_1256_bool = var_1253_int == (int)0;
	if(var_1256_bool != 0) {
		var_1251_bool = 1;
		return 0;
	}
	var_1251_bool = 0;
	return 0;
}


func_14394(var_987_bool)
{
	var_989_int = 0; var_990_string = "";
	func_12471(var_989_int, "oob3Danko1");
	var_992_bool = var_989_int == (int)0;
	if(var_992_bool != 0) {
		var_987_bool = 1;
		return 0;
	}
	var_987_bool = 0;
	return 0;
}


func_13370(var_235_object)
{
	Trace("bluevaccine is given");
	var_238_object = Obj(); var_239_string = ""; var_240_int = 0;
	var_235_object = var_238_object;
	func_12566(var_238_object, "blue_vaccine", (int)1);
	return 0;
}


func_12348(var_228_bool, var_229_object)
{
	var_230_string = ""; var_231_int = 0; var_232_bool = 0; var_233_int = 0; var_234_string = ""; var_235_string = ""; var_236_int = 0; var_237_bool = 0; var_238_int = 0; var_239_string = "";
	var_241_int = 0;
	func_12665(var_241_int);
	var_247_int = "d" + var_241_int;
	var_235_string = var_247_int + "m";
	var_236_int = 0;
	
Label_12357:
	if((int)1 != 0) {
		var_251_int = var_236_int + (int)1;
		var_252_int = var_235_string + var_251_int;
		@@var_229_object:HasProperty(var_252_int, var_237_bool);
		var_253_bool = var_237_bool == 0; //@nz
		if(var_253_bool != 0) {
		} else {
			var_236_int = var_236_int + (int)1;
			goto Label_12357;
		}
	}
	var_254_bool = var_236_int == 0; //@nz
	if(var_254_bool != 0) {
		var_228_bool = 0;
		return 10;
	}
	var_238_int = 0;
	var_256_bool = var_236_int > (int)1;
	if(var_256_bool != 0) {
		irand(var_238_int, var_236_int);
	}
	var_258_int = var_238_int + (int)1;
	var_259_int = var_235_string + var_258_int;
	@@var_229_object:GetProperty(var_259_int, var_239_string);
	var_260_bool = 0; var_261_string = "";
	var_239_string = var_261_string;
	func_12422(var_260_bool, var_261_string);
	var_260_bool = var_228_bool;
	return 10;
	
}


func_13381()
{
	SetVariable("oob8Danko3", (int)1);
	return 0;
}


func_14406(var_978_bool)
{
	var_980_int = 0; var_981_string = "";
	func_12471(var_980_int, "oob3Danko2");
	var_983_bool = var_980_int == (int)0;
	if(var_983_bool != 0) {
		var_978_bool = 1;
		return 0;
	}
	var_978_bool = 0;
	return 0;
}


func_13387()
{
	SetVariable("b8DankoVisit", (int)1);
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_911_object, var_912_object)
{
	var_0_object = var_912_object;
	var_1_object = var_911_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_918_object = Obj(); var_919_object = Obj();
		var_918_object = var_1_object;
		var_919_object = var_0_object;
		func_13348();
		var_922_string = "";
		func_216(var_912_object, "Sorrow");
		@@@var_0_object:SetMessage((int)518350);
		@@@var_0_object:ClearReplies();
		var_931_bool = 0; var_932_object = Obj();
		var_932_object = var_1_object;
		func_14148(var_932_object);
		if(var_931_bool != 0) {
			@@@var_0_object:AddReply((int)518352, (int)19466, (int)19465);
		}
		var_940_bool = 0;
		var_940_bool = 0;
		var_941_bool = 0; var_942_object = Obj();
		var_942_object = var_1_object;
		func_14160(var_942_object);
		if(var_941_bool != 0) {
			var_947_bool = 0; var_948_object = Obj();
			var_948_object = var_1_object;
			func_14097(var_947_bool, var_948_object);
			if(var_947_bool != 0) {
				var_940_bool = 1;
			}
		}
		if(var_940_bool != 0) {
			@@@var_0_object:AddReply((int)518358, (int)19472, (int)19471);
		}
		var_971_bool = 0;
		var_971_bool = 0;
		var_972_bool = 0; var_973_object = Obj();
		var_973_object = var_1_object;
		func_14206(var_973_object);
		if(var_972_bool != 0) {
			var_978_bool = 0; var_979_object = Obj();
			var_979_object = var_1_object;
			func_14406(var_979_object);
			if(var_978_bool != 0) {
				var_971_bool = 1;
			}
		}
		if(var_971_bool != 0) {
			@@@var_0_object:AddReply((int)518361, (int)19475, (int)19474);
		}
		var_987_bool = 0; var_988_object = Obj();
		var_988_object = var_1_object;
		func_14394(var_988_object);
		if(var_987_bool != 0) {
			@@@var_0_object:AddReply((int)519361, (int)20523, (int)20522);
		}
		var_996_bool = 0;
		var_996_bool = 0;
		var_997_bool = 0; var_998_object = Obj();
		var_998_object = var_1_object;
		func_14038(var_997_bool, var_998_object);
		if(var_997_bool != 0) {
			var_1002_bool = 0; var_1003_object = Obj();
			var_1003_object = var_1_object;
			func_14073(var_1003_object);
			if(var_1002_bool != 0) {
				var_996_bool = 1;
			}
		}
		if(var_996_bool != 0) {
			@@@var_0_object:AddReply((int)530617, (int)31920, (int)31919);
		}
		@@@var_0_object:AddReply((int)518351, (int)-1, (int)19464);
		goto Label_186;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_186:
	var_1014_bool = 0;
	func_12731(var_1014_bool);
	if(var_1014_bool != 0) {

	Label_190:
		lshWaitForAnimEnd();
		var_1015_string = var_3_string;
		if(var_1015_string != 0) {
		} else {
			var_1016_string = "";
			var_1016_string = var_2_object;
			func_12391(var_1016_string);
			goto Label_190;
	}
		PlayAnimation("all", "idle");

	Label_205:
		WaitForAnimEnd();
		var_1019_string = var_3_string;
		if(var_1019_string != 0) {
			goto Label_215;
		}
		PlayAnimation("all", "idle");
		goto Label_205;
	}
	goto Label_215;
	
Label_215:
	return 0;
	
}


func_14418(var_688_bool)
{
	var_690_int = 0; var_691_string = "";
	func_12471(var_690_int, "b1q01");
	var_693_bool = var_690_int == (int)0;
	if(var_693_bool != 0) {
		var_688_bool = 1;
		return 0;
	}
	var_688_bool = 0;
	return 0;
}


func_13393()
{
	var_170_int = 0; var_171_string = "";
	func_12471(var_170_int, "map_chertez_state");
	var_175_bool = var_170_int <= (int)5;
	if(var_175_bool != 0) {
		SetVariable("map_chertez_state", (int)5);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_6234(var_0_object, var_1_object, var_2_object, var_3_string, var_281_object, var_282_object)
{
	var_0_object = var_282_object;
	var_1_object = var_281_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_288_string = "";
		func_6292(var_282_object, "Smile");
		@@@var_0_object:SetMessage((int)520709);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520710, (int)21922, (int)21921);
		@@@var_0_object:AddReply((int)520714, (int)21922, (int)21925);
		goto Label_6262;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x185e";
	}
Label_6262:
	var_312_bool = 0;
	func_12731(var_312_bool);
	if(var_312_bool != 0) {

	Label_6266:
		lshWaitForAnimEnd();
		var_313_string = var_3_string;
		if(var_313_string != 0) {
		} else {
			var_314_string = "";
			var_314_string = var_2_object;
			func_12391(var_314_string);
			goto Label_6266;
	}
		PlayAnimation("all", "idle");

	Label_6281:
		WaitForAnimEnd();
		var_327_string = var_3_string;
		if(var_327_string != 0) {
			goto Label_6291;
		}
		PlayAnimation("all", "idle");
		goto Label_6281;
	}
	goto Label_6291;
	
Label_6291:
	return 0;
	
}


func_14430(var_679_bool)
{
	var_681_int = 0; var_682_string = "";
	func_12471(var_681_int, "b1q01");
	var_686_bool = var_681_int == (int)1000;
	if(var_686_bool != 0) {
		var_679_bool = 1;
		return 0;
	}
	var_679_bool = 0;
	return 0;
}


func_13410(var_181_object)
{
	var_182_object = Obj(); var_183_string = ""; var_184_float = 0;
	func_14972(Obj());
	var_185_object = var_182_object;
	func_14989(var_182_object, "pt_map_aglaja", (float)-1);
	var_211_object = Obj();
	func_14972(var_211_object);
	@@var_181_object:ShowMap(var_211_object);
	return 0;
}


func_12391(var_314_string)
{
	var_315_bool = 0; var_316_float = 0; var_317_float = 0; var_318_bool = 0; var_319_float = 0; var_320_float = 0;
	lshHasAnimation(var_318_bool, var_314_string);
	var_321_bool = var_318_bool;
	if(var_321_bool != 0) {
		lshGetAnimTimes(var_314_string, var_319_float, var_320_float);
		lshPlayAnimation(var_319_float, var_320_float, (bool)0);
	} else {
		var_324_int = "Can't find lsh animation : " + var_314_string;
		Trace(var_324_int);
	}
	return 6;
	
}


func_11367(var_2_object, var_561_string)
{
	var_562_bool = 0;
	func_12731(var_562_bool);
	var_563_bool = var_562_bool == 0; //@nz
	if(var_563_bool != 0) {
		return 0;
	}
	var_564_bool = var_561_string == var_2_object;
	if(var_564_bool != 0) {
		return 0;
	}
	var_565_string = ""; var_566_bool = 0;
	var_561_string = var_565_string;
	var_568_bool = var_561_string == "";
	if(var_568_bool != 0) {
		var_566_bool = 0;
	} else {
		var_566_bool = 1;
	}
	func_12407(var_565_string, var_566_bool);
	var_2_object = var_561_string;
	return 0;
	
}


func_14442(var_586_bool)
{
	var_588_int = 0; var_589_string = "";
	func_12471(var_588_int, "b2q01");
	var_591_bool = var_588_int == (int)0;
	if(var_591_bool != 0) {
		var_586_bool = 1;
		return 0;
	}
	var_586_bool = 0;
	return 0;
}


func_13426(var_259_object)
{
	var_261_int = 0; var_262_int = 0;
	irand(var_262_int, (int)1000);
	var_264_object = Obj(); var_265_int = 0;
	var_259_object = var_264_object;
	var_265_int = var_262_int + (int)2000;
	func_12528(var_264_object, var_265_int);
	return 2;
}


func_14454(var_423_bool)
{
	var_425_int = 0; var_426_string = "";
	func_12471(var_425_int, "b2MladVladBurahHomeTalk");
	var_428_bool = var_425_int == (int)1;
	if(var_428_bool != 0) {
		var_423_bool = 1;
		return 0;
	}
	var_423_bool = 0;
	return 0;
}


func_12407(var_292_string, var_293_bool)
{
	var_296_bool = 0; var_297_float = 0; var_298_float = 0; var_299_bool = 0; var_300_float = 0; var_301_float = 0;
	lshHasAnimation(var_299_bool, var_292_string);
	var_302_bool = var_299_bool;
	if(var_302_bool != 0) {
		lshGetAnimTimes(var_292_string, var_300_float, var_301_float);
		lshPlayAnimation(var_300_float, var_301_float, var_293_bool);
	} else {
		var_304_int = "Can't find lsh animation : " + var_292_string;
		Trace(var_304_int);
	}
	return 6;
	
}


func_13437(var_304_object)
{
	var_306_int = 0; var_307_int = 0;
	irand(var_307_int, (int)1000);
	var_309_object = Obj(); var_310_int = 0;
	var_304_object = var_309_object;
	var_310_int = var_307_int + (int)3000;
	func_12528(var_309_object, var_310_int);
	return 2;
}


func_14466(var_1365_bool)
{
	var_1367_int = 0; var_1368_string = "";
	func_12471(var_1367_int, "oob6Danko1");
	var_1370_bool = var_1367_int == (int)0;
	if(var_1370_bool != 0) {
		var_1365_bool = 1;
		return 0;
	}
	var_1365_bool = 0;
	return 0;
}


func_12422(var_220_bool, var_221_string)
{
	var_222_bool = 0; var_223_bool = 0;
	var_224_bool = 0;
	func_12731(var_224_bool);
	if(var_224_bool != 0) {
		lshHasSpeech(var_223_bool, var_221_string);
		var_225_bool = var_223_bool;
		if(var_225_bool != 0) {
			lshPlaySpeech(var_221_string);
			var_220_bool = 1;
			return 2;
		}
	}
	var_220_bool = 0;
	return 2;
}


func_13448(var_298_object)
{
	Trace("blackvaccine2 is given");
	var_301_object = Obj(); var_302_string = ""; var_303_int = 0;
	var_298_object = var_301_object;
	func_12566(var_301_object, "black_vaccine", (int)2);
	return 0;
}


func_14478(var_861_bool)
{
	var_863_int = 0; var_864_string = "";
	func_12471(var_863_int, "b2q01");
	var_866_bool = var_863_int == (int)1000;
	if(var_866_bool != 0) {
		var_861_bool = 1;
		return 0;
	}
	var_861_bool = 0;
	return 0;
}


func_13459(var_205_object)
{
	var_207_int = 0; var_208_int = 0;
	@@var_205_object:RemoveItemByType(var_208_int, "b4q01_sample", (int)1);
	return 2;
}


func_6292(var_2_object, var_288_string)
{
	var_289_bool = 0;
	func_12731(var_289_bool);
	var_290_bool = var_289_bool == 0; //@nz
	if(var_290_bool != 0) {
		return 0;
	}
	var_291_bool = var_288_string == var_2_object;
	if(var_291_bool != 0) {
		return 0;
	}
	var_292_string = ""; var_293_bool = 0;
	var_288_string = var_292_string;
	var_295_bool = var_288_string == "";
	if(var_295_bool != 0) {
		var_293_bool = 0;
	} else {
		var_293_bool = 1;
	}
	func_12407(var_292_string, var_293_bool);
	var_2_object = var_288_string;
	return 0;
	
}


func_12437()
{
	var_94_bool = 0;
	func_12731(var_94_bool);
	if(var_94_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_13465()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_14490(var_798_bool)
{
	var_800_int = 0; var_801_string = "";
	func_12471(var_800_int, "oob2Danko1");
	var_803_bool = var_800_int == (int)0;
	if(var_803_bool != 0) {
		var_798_bool = 1;
		return 0;
	}
	var_798_bool = 0;
	return 0;
}


func_12444(var_188_object)
{
	var_189_object = Obj(); var_190_object = Obj();
	self(var_190_object);
	var_190_object = var_188_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_13471(var_160_object)
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0;
	func_14972(Obj());
	var_164_object = var_161_object;
	func_14989(var_161_object, "pt_map_ospina", (float)2);
	var_184_object = Obj();
	func_14972(var_184_object);
	@@var_160_object:ShowMap(var_184_object);
	return 0;
}


func_4256(var_0_object, var_727_int, var_728_object)
{
	var_730_object = Obj(); var_731_bool = 0; var_732_int = 0; var_733_bool = 0; var_734_object = Obj(); var_735_bool = 0; var_736_int = 0; var_737_bool = 0;
	var_0_object = var_728_object;
	var_738_bool = 0; var_739_object = Obj(); var_740_float = 0;
	var_728_object = var_739_object;
	func_12166(var_738_bool, var_739_object, (float)70.0);
	var_741_bool = var_738_bool == 0; //@nz
	if(var_741_bool != 0) {
		var_727_int = -2;
		return 8;
	}
	CreateDialog(var_734_object);
	var_742_int = 0;
	func_12725(var_742_int);
	@@var_734_object:SetNPCName(var_742_int);
	var_743_int = 0;
	func_12723(var_743_int);
	@@var_734_object:SetNPCDescription(var_743_int);
	var_744_string = "";
	func_12727(var_744_string);
	@@var_734_object:SetPhoto(var_744_string);
	var_745_string = "";
	func_12729(var_745_string);
	@@var_734_object:SetPhoto2(var_745_string);
	var_746_int = 0;
	func_15022(var_746_int);
	@@var_734_object:SetPlayerName(var_746_int);
	IsOverrideActive(var_735_bool);
	var_747_bool = var_735_bool;
	if(var_747_bool != 0) {
		var_727_int = -2;
		return 8;
	}
	DoDialog(var_734_object);
	var_748_bool = 0; var_749_object = Obj();
	func_12444(Obj());
	var_750_object = var_749_object;
	func_12253(var_748_bool, var_749_object);
	var_751_object = Obj(); var_752_object = Obj();
	var_728_object = var_751_object;
	var_734_object = var_752_object;
	TaskCall(9);
	func_4337(var_753_object, var_754_object, var_755_string, var_756_bool, var_751_object, var_752_object);
	TaskReturn();
	@@var_734_object:IsDialogEnd(var_737_bool);
	
Label_4319:
	var_883_bool = var_737_bool == 0; //@nz
	if(var_883_bool != 0) {
		sync();
		@@var_734_object:IsDialogEnd(var_737_bool);
		goto Label_4319;
	}
	var_728_object = Obj();
	func_12235();
	StopDialog(var_734_object);
	@@var_734_object:GetReturnValue((int)-1);
	var_736_int = var_727_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_12450(var_152_cvector, var_153_cvector)
{
	var_155_float = 0; var_156_float = 0;
	var_157_int = var_153_cvector | var_153_cvector;
	var_156_float = sqrt(var_157_int);
	var_158_float = 9.999999974752427e-07;
	var_159_bool = var_156_float < var_158_float;
	if(var_159_bool != 0) {
		var_152_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_152_cvector = var_153_cvector / var_156_float;
	return 2;
}


func_14502(var_871_bool)
{
	var_873_int = 0; var_874_string = "";
	func_12471(var_873_int, "oob2Danko2");
	var_876_bool = var_873_int == (int)0;
	if(var_876_bool != 0) {
		var_871_bool = 1;
		return 0;
	}
	var_871_bool = 0;
	return 0;
}


func_11431(var_0_object, var_588_int, var_589_object)
{
	var_591_object = Obj(); var_592_bool = 0; var_593_int = 0; var_594_bool = 0; var_595_object = Obj(); var_596_bool = 0; var_597_int = 0; var_598_bool = 0;
	var_0_object = var_589_object;
	var_599_bool = 0; var_600_object = Obj(); var_601_float = 0;
	var_589_object = var_600_object;
	func_12166(var_599_bool, var_600_object, (float)70.0);
	var_602_bool = var_599_bool == 0; //@nz
	if(var_602_bool != 0) {
		var_588_int = -2;
		return 8;
	}
	CreateDialog(var_595_object);
	var_603_int = 0;
	func_12725(var_603_int);
	@@var_595_object:SetNPCName(var_603_int);
	var_604_int = 0;
	func_12723(var_604_int);
	@@var_595_object:SetNPCDescription(var_604_int);
	var_605_string = "";
	func_12727(var_605_string);
	@@var_595_object:SetPhoto(var_605_string);
	var_606_string = "";
	func_12729(var_606_string);
	@@var_595_object:SetPhoto2(var_606_string);
	var_607_int = 0;
	func_15022(var_607_int);
	@@var_595_object:SetPlayerName(var_607_int);
	IsOverrideActive(var_596_bool);
	var_608_bool = var_596_bool;
	if(var_608_bool != 0) {
		var_588_int = -2;
		return 8;
	}
	DoDialog(var_595_object);
	var_609_bool = 0; var_610_object = Obj();
	func_12444(Obj());
	var_611_object = var_610_object;
	func_12253(var_609_bool, var_610_object);
	var_612_object = Obj(); var_613_object = Obj();
	var_589_object = var_612_object;
	var_595_object = var_613_object;
	TaskCall(33);
	func_11512(var_614_object, var_615_object, var_616_string, var_617_bool, var_612_object, var_613_object);
	TaskReturn();
	@@var_595_object:IsDialogEnd(var_598_bool);
	
Label_11494:
	var_642_bool = var_598_bool == 0; //@nz
	if(var_642_bool != 0) {
		sync();
		@@var_595_object:IsDialogEnd(var_598_bool);
		goto Label_11494;
	}
	var_589_object = Obj();
	func_12235();
	StopDialog(var_595_object);
	@@var_595_object:GetReturnValue((int)-1);
	var_597_int = var_588_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_12460(var_155_float, var_156_float, var_157_float, var_158_float)
{
	var_159_bool = var_156_float < var_157_float;
	if(var_159_bool != 0) {
		var_157_float = var_155_float;
		return 0;
	}
	var_160_bool = var_156_float > var_158_float;
	if(var_160_bool != 0) {
		var_158_float = var_155_float;
		return 0;
	}
	var_156_float = var_155_float;
	return 0;
}


func_13487(var_149_object)
{
	var_150_object = Obj(); var_151_string = ""; var_152_float = 0;
	func_14972(Obj());
	var_153_object = var_150_object;
	func_14989(var_150_object, "pt_map_mladvlad", (float)2);
	var_173_object = Obj();
	func_14972(var_173_object);
	@@var_149_object:ShowMap(var_173_object);
	return 0;
}


func_14514(var_826_bool, var_827_object)
{
	var_828_bool = 0;
	var_828_bool = 1;
	var_829_bool = 0; var_830_object = Obj(); var_831_string = "";
	var_827_object = var_830_object;
	func_12579(var_829_bool, var_830_object, "grass_combination");
	if(var_829_bool != 1) {
		var_836_bool = 0; var_837_object = Obj(); var_838_string = "";
		var_827_object = var_837_object;
		func_12579(var_836_bool, var_837_object, "organ_combination");
		if(var_836_bool != 1) {
			var_828_bool = 0;
		}
	}
	if(var_828_bool != 0) {
		var_826_bool = 1;
		return 0;
	}
	var_826_bool = 0;
	return 0;
}


func_12471(var_681_int, var_682_string)
{
	var_683_int = 0; var_684_int = 0;
	GetVariable(var_682_string, var_684_int);
	var_684_int = var_681_int;
	return 2;
}


func_1210(var_0_object, var_1026_int, var_1027_object)
{
	var_1029_object = Obj(); var_1030_bool = 0; var_1031_int = 0; var_1032_bool = 0; var_1033_object = Obj(); var_1034_bool = 0; var_1035_int = 0; var_1036_bool = 0;
	var_0_object = var_1027_object;
	var_1037_bool = 0; var_1038_object = Obj(); var_1039_float = 0;
	var_1027_object = var_1038_object;
	func_12166(var_1037_bool, var_1038_object, (float)70.0);
	var_1040_bool = var_1037_bool == 0; //@nz
	if(var_1040_bool != 0) {
		var_1026_int = -2;
		return 8;
	}
	CreateDialog(var_1033_object);
	var_1041_int = 0;
	func_12725(var_1041_int);
	@@var_1033_object:SetNPCName(var_1041_int);
	var_1042_int = 0;
	func_12723(var_1042_int);
	@@var_1033_object:SetNPCDescription(var_1042_int);
	var_1043_string = "";
	func_12727(var_1043_string);
	@@var_1033_object:SetPhoto(var_1043_string);
	var_1044_string = "";
	func_12729(var_1044_string);
	@@var_1033_object:SetPhoto2(var_1044_string);
	var_1045_int = 0;
	func_15022(var_1045_int);
	@@var_1033_object:SetPlayerName(var_1045_int);
	IsOverrideActive(var_1034_bool);
	var_1046_bool = var_1034_bool;
	if(var_1046_bool != 0) {
		var_1026_int = -2;
		return 8;
	}
	DoDialog(var_1033_object);
	var_1047_bool = 0; var_1048_object = Obj();
	func_12444(Obj());
	var_1049_object = var_1048_object;
	func_12253(var_1047_bool, var_1048_object);
	var_1050_object = Obj(); var_1051_object = Obj();
	var_1027_object = var_1050_object;
	var_1033_object = var_1051_object;
	TaskCall(3);
	func_1291(var_1052_object, var_1053_object, var_1054_string, var_1055_bool, var_1050_object, var_1051_object);
	TaskReturn();
	@@var_1033_object:IsDialogEnd(var_1036_bool);
	
Label_1273:
	var_1150_bool = var_1036_bool == 0; //@nz
	if(var_1150_bool != 0) {
		sync();
		@@var_1033_object:IsDialogEnd(var_1036_bool);
		goto Label_1273;
	}
	var_1027_object = Obj();
	func_12235();
	StopDialog(var_1033_object);
	@@var_1033_object:GetReturnValue((int)-1);
	var_1035_int = var_1026_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_12476(var_293_object, var_294_string)
{
	var_295_object = Obj(); var_296_object = Obj(); var_297_object = Obj(); var_298_object = Obj();
	GetMainOutdoorScene(var_297_object);
	var_300_int = var_294_string + ".bin";
	AddBlankActor(var_298_object, var_297_object, var_294_string, var_300_int);
	var_298_object = var_293_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_13503(var_160_object)
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0;
	func_14972(Obj());
	var_164_object = var_161_object;
	func_14989(var_161_object, "pt_map_lara", (float)2);
	var_184_object = Obj();
	func_14972(var_184_object);
	@@var_160_object:ShowMap(var_184_object);
	return 0;
}


func_14535(var_839_bool)
{
	var_841_int = 0; var_842_string = "";
	func_12471(var_841_int, "oob2Danko3");
	var_844_bool = var_841_int == (int)0;
	if(var_844_bool != 0) {
		var_839_bool = 1;
		return 0;
	}
	var_839_bool = 0;
	return 0;
}


func_12487(var_156_string, var_157_bool)
{
	var_158_object = Obj(); var_159_object = Obj();
	FindActor(var_159_object, var_156_string);
	var_160_bool = var_159_object == 0; //@nz
	if(var_160_bool != 0) {
		var_162_int = "Door " + var_156_string;
		var_164_int = var_162_int + " not found";
		Trace(var_164_int);
	} else {
		@@var_159_object:SetProperty("locked", var_157_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_13519(var_124_object)
{
	var_126_bool = 0; var_127_object = Obj(); var_128_float = 0;
	var_124_object = var_127_object;
	func_12603(var_126_bool, var_127_object, (float)0.30000001192092896);
	return 0;
}


func_14547(var_777_bool)
{
	var_779_int = 0; var_780_string = "";
	func_12471(var_779_int, "oob2Danko4");
	var_782_bool = var_779_int == (int)0;
	if(var_782_bool != 0) {
		var_777_bool = 1;
		return 0;
	}
	var_777_bool = 0;
	return 0;
}


func_13526(var_220_object)
{
	Trace("feromicin is given");
	var_223_object = Obj(); var_224_string = ""; var_225_int = 0;
	var_220_object = var_223_object;
	func_12566(var_223_object, "feromicin", (int)1);
	return 0;
}


func_216(var_2_object, var_922_string)
{
	var_923_bool = 0;
	func_12731(var_923_bool);
	var_924_bool = var_923_bool == 0; //@nz
	if(var_924_bool != 0) {
		return 0;
	}
	var_925_bool = var_922_string == var_2_object;
	if(var_925_bool != 0) {
		return 0;
	}
	var_926_string = ""; var_927_bool = 0;
	var_922_string = var_926_string;
	var_929_bool = var_922_string == "";
	if(var_929_bool != 0) {
		var_927_bool = 0;
	} else {
		var_927_bool = 1;
	}
	func_12407(var_926_string, var_927_bool);
	var_2_object = var_922_string;
	return 0;
	
}


func_12504(var_254_int, var_255_int)
{
	var_256_object = Obj(); var_257_object = Obj();
	CreateIntVector(var_257_object);
	@@var_257_object:add(var_254_int);
	@@var_257_object:add(var_255_int);
	SendWorldWndMessage((int)3, var_257_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_14559(var_1474_bool)
{
	var_1476_int = 0; var_1477_string = "";
	func_12471(var_1476_int, "b7q01");
	var_1479_bool = var_1476_int == (int)0;
	if(var_1479_bool != 0) {
		var_1474_bool = 1;
		return 0;
	}
	var_1474_bool = 0;
	return 0;
}


func_13537(var_186_object)
{
	var_187_object = Obj(); var_188_string = ""; var_189_float = 0;
	func_14972(Obj());
	var_190_object = var_187_object;
	func_14989(var_187_object, "pt_map_andrei", (float)2);
	var_191_object = Obj();
	func_14972(var_191_object);
	@@var_186_object:ShowMap(var_191_object);
	return 0;
}


func_12516(var_117_int, var_118_int)
{
	var_119_object = Obj(); var_120_object = Obj();
	CreateIntVector(var_120_object);
	@@var_120_object:add(var_117_int);
	@@var_120_object:add(var_118_int);
	SendWorldWndMessage((int)4, var_120_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_14571(var_1957_bool)
{
	func_15092((bool)0);
	var_1959_bool = var_1957_bool;
	return 0;
}


func_12528(var_264_object, var_265_int)
{
	var_267_int = 0; var_268_int = 0;
	var_269_object = Obj(); var_270_string = ""; var_271_int = 0;
	var_264_object = var_269_object;
	var_265_int = var_271_int;
	func_12135(var_269_object, "money", var_271_int);
	var_276_bool = var_265_int > (int)0;
	if(var_276_bool != 0) {
		GetInvItemByName(var_268_int, "Money");
		var_278_int = 0; var_279_int = 0;
		var_268_int = var_278_int;
		var_265_int = var_279_int;
		func_12504(var_278_int, var_279_int);
	}
	return 2;
}


func_13553(var_200_object)
{
	Trace("morfin is given");
	var_203_object = Obj(); var_204_string = ""; var_205_int = 0;
	var_200_object = var_203_object;
	func_12566(var_203_object, "morfin", (int)1);
	return 0;
}


func_4337(var_0_object, var_1_object, var_2_object, var_3_string, var_751_object, var_752_object)
{
	var_0_object = var_752_object;
	var_1_object = var_751_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_758_bool = 0; var_759_object = Obj();
		var_759_object = var_1_object;
		func_13990(var_759_object);
		if(var_758_bool != 0) {
			var_764_object = Obj(); var_765_object = Obj();
			var_764_object = var_1_object;
			var_765_object = var_0_object;
			func_12925();
			var_768_string = "";
			func_4522(var_752_object, "Menace");
			@@@var_0_object:SetMessage((int)520332);
			@@@var_0_object:ClearReplies();
			var_777_bool = 0; var_778_object = Obj();
			var_778_object = var_1_object;
			func_14547(var_778_object);
			if(var_777_bool != 0) {
				@@@var_0_object:AddReply((int)520333, (int)21529, (int)21528);
			}
			@@@var_0_object:AddReply((int)520347, (int)-1, (int)21544);
		} else {
				var_797_bool = 0;
				var_797_bool = 0;
				var_798_bool = 0; var_799_object = Obj();
				var_799_object = var_1_object;
				func_14490(var_799_object);
				if(var_798_bool != 0) {
					var_804_bool = 0; var_805_object = Obj();
					var_805_object = var_1_object;
					func_14002(var_805_object);
					if(var_804_bool != 0) {
						var_797_bool = 1;
					}
				}
				if(var_797_bool != 0) {
					var_810_object = Obj(); var_811_object = Obj();
					var_810_object = var_1_object;
					var_811_object = var_0_object;
					func_12907();
					var_814_string = "";
					func_4522(var_752_object, "Neutral");
					@@@var_0_object:SetMessage((int)520348);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)520349, (int)21548, (int)21547);
					@@@var_0_object:AddReply((int)520368, (int)21548, (int)21571);
					goto Label_4492;
				}
				var_822_string = "";
				func_4522(var_752_object, "Neutral");
				@@@var_0_object:SetMessage((int)520369);
				@@@var_0_object:ClearReplies();
				var_824_bool = 0;
				var_824_bool = 0;
				var_825_bool = 0;
				var_825_bool = 0;
				var_826_bool = 0; var_827_object = Obj();
				var_827_object = var_1_object;
				func_14514(var_826_bool, var_827_object);
				if(var_826_bool != 0) {
					var_839_bool = 0; var_840_object = Obj();
					var_840_object = var_1_object;
					func_14535(var_840_object);
					if(var_839_bool != 0) {
						var_825_bool = 1;
					}
				}
				if(var_825_bool != 0) {
					var_845_bool = 0; var_846_object = Obj();
					var_846_object = var_1_object;
					func_14014(var_846_object);
					if(var_845_bool != 0) {
						var_824_bool = 1;
					}
				}
				if(var_824_bool != 0) {
					@@@var_0_object:AddReply((int)520370, (int)-1, (int)21574);
				}
				var_854_bool = 0;
				var_854_bool = 0;
				var_855_bool = 0; var_856_object = Obj();
				var_856_object = var_1_object;
				func_14026(var_856_object);
				if(var_855_bool != 0) {
					var_861_bool = 0; var_862_object = Obj();
					var_862_object = var_1_object;
					func_14478(var_862_object);
					var_867_bool = var_861_bool == 0; //@nz
					if(var_867_bool != 0) {
						var_854_bool = 1;
					}
				}
				if(var_854_bool != 0) {
					@@@var_0_object:AddReply((int)520372, (int)21577, (int)21576);
				}
				var_871_bool = 0; var_872_object = Obj();
				var_872_object = var_1_object;
				func_14502(var_872_object);
				if(var_871_bool != 0) {
					@@@var_0_object:AddReply((int)520388, (int)21595, (int)21594);
				}
				@@@var_0_object:AddReply((int)520397, (int)-1, (int)21603);
				goto Label_4492;
		}
	}
Label_4492:
	var_789_bool = 0;
	func_12731(var_789_bool);
	if(var_789_bool != 0) {

	Label_4496:
		lshWaitForAnimEnd();
		var_790_string = var_3_string;
		if(var_790_string != 0) {
		} else {
			var_791_string = "";
			var_791_string = var_2_object;
			func_12391(var_791_string);
			goto Label_4496;
	}
		PlayAnimation("all", "idle");

	Label_4511:
		WaitForAnimEnd();
		var_794_string = var_3_string;
		if(var_794_string != 0) {
			goto Label_4521;
		}
		PlayAnimation("all", "idle");
		goto Label_4511;

	}
	goto Label_4521;
	
Label_4521:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x10f5";


func_14577(var_1399_bool)
{
	var_1399_bool = 0;
	return 0;
}


func_14580()
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateDiaryEntry(var_102_object, (int)305, (int)1, (int)521956);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_102_object = var_107_object;
	func_14944(var_106_bool, var_107_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6384(var_0_object, var_1443_int, var_1444_object)
{
	var_1446_object = Obj(); var_1447_bool = 0; var_1448_int = 0; var_1449_bool = 0; var_1450_object = Obj(); var_1451_bool = 0; var_1452_int = 0; var_1453_bool = 0;
	var_0_object = var_1444_object;
	var_1454_bool = 0; var_1455_object = Obj(); var_1456_float = 0;
	var_1444_object = var_1455_object;
	func_12166(var_1454_bool, var_1455_object, (float)70.0);
	var_1457_bool = var_1454_bool == 0; //@nz
	if(var_1457_bool != 0) {
		var_1443_int = -2;
		return 8;
	}
	CreateDialog(var_1450_object);
	var_1458_int = 0;
	func_12725(var_1458_int);
	@@var_1450_object:SetNPCName(var_1458_int);
	var_1459_int = 0;
	func_12723(var_1459_int);
	@@var_1450_object:SetNPCDescription(var_1459_int);
	var_1460_string = "";
	func_12727(var_1460_string);
	@@var_1450_object:SetPhoto(var_1460_string);
	var_1461_string = "";
	func_12729(var_1461_string);
	@@var_1450_object:SetPhoto2(var_1461_string);
	var_1462_int = 0;
	func_15022(var_1462_int);
	@@var_1450_object:SetPlayerName(var_1462_int);
	IsOverrideActive(var_1451_bool);
	var_1463_bool = var_1451_bool;
	if(var_1463_bool != 0) {
		var_1443_int = -2;
		return 8;
	}
	DoDialog(var_1450_object);
	var_1464_bool = 0; var_1465_object = Obj();
	func_12444(Obj());
	var_1466_object = var_1465_object;
	func_12253(var_1464_bool, var_1465_object);
	var_1467_object = Obj(); var_1468_object = Obj();
	var_1444_object = var_1467_object;
	var_1450_object = var_1468_object;
	TaskCall(15);
	func_6465(var_1469_object, var_1470_object, var_1471_string, var_1472_bool, var_1467_object, var_1468_object);
	TaskReturn();
	@@var_1450_object:IsDialogEnd(var_1453_bool);
	
Label_6447:
	var_1505_bool = var_1453_bool == 0; //@nz
	if(var_1505_bool != 0) {
		sync();
		@@var_1450_object:IsDialogEnd(var_1453_bool);
		goto Label_6447;
	}
	var_1444_object = Obj();
	func_12235();
	StopDialog(var_1450_object);
	@@var_1450_object:GetReturnValue((int)-1);
	var_1452_int = var_1443_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_11512(var_0_object, var_1_object, var_2_object, var_3_string, var_612_object, var_613_object)
{
	var_0_object = var_613_object;
	var_1_object = var_612_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_619_string = "";
		func_11570(var_613_object, "Neutral");
		@@@var_0_object:SetMessage((int)529930);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529931, (int)-1, (int)31314);
		@@@var_0_object:AddReply((int)529932, (int)-1, (int)31315);
		goto Label_11540;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2cfc";
	}
Label_11540:
	var_634_bool = 0;
	func_12731(var_634_bool);
	if(var_634_bool != 0) {

	Label_11544:
		lshWaitForAnimEnd();
		var_635_string = var_3_string;
		if(var_635_string != 0) {
		} else {
			var_636_string = "";
			var_636_string = var_2_object;
			func_12391(var_636_string);
			goto Label_11544;
	}
		PlayAnimation("all", "idle");

	Label_11559:
		WaitForAnimEnd();
		var_639_string = var_3_string;
		if(var_639_string != 0) {
			goto Label_11569;
		}
		PlayAnimation("all", "idle");
		goto Label_11559;
	}
	goto Label_11569;
	
Label_11569:
	return 0;
	
}


func_13564(var_206_object)
{
	Trace("etorfin is given");
	var_209_object = Obj(); var_210_string = ""; var_211_int = 0;
	var_206_object = var_209_object;
	func_12566(var_209_object, "etorfin", (int)1);
	return 0;
}


func_2303(var_0_object, var_1154_int, var_1155_object)
{
	var_1157_object = Obj(); var_1158_bool = 0; var_1159_int = 0; var_1160_bool = 0; var_1161_object = Obj(); var_1162_bool = 0; var_1163_int = 0; var_1164_bool = 0;
	var_0_object = var_1155_object;
	var_1165_bool = 0; var_1166_object = Obj(); var_1167_float = 0;
	var_1155_object = var_1166_object;
	func_12166(var_1165_bool, var_1166_object, (float)70.0);
	var_1168_bool = var_1165_bool == 0; //@nz
	if(var_1168_bool != 0) {
		var_1154_int = -2;
		return 8;
	}
	CreateDialog(var_1161_object);
	var_1169_int = 0;
	func_12725(var_1169_int);
	@@var_1161_object:SetNPCName(var_1169_int);
	var_1170_int = 0;
	func_12723(var_1170_int);
	@@var_1161_object:SetNPCDescription(var_1170_int);
	var_1171_string = "";
	func_12727(var_1171_string);
	@@var_1161_object:SetPhoto(var_1171_string);
	var_1172_string = "";
	func_12729(var_1172_string);
	@@var_1161_object:SetPhoto2(var_1172_string);
	var_1173_int = 0;
	func_15022(var_1173_int);
	@@var_1161_object:SetPlayerName(var_1173_int);
	IsOverrideActive(var_1162_bool);
	var_1174_bool = var_1162_bool;
	if(var_1174_bool != 0) {
		var_1154_int = -2;
		return 8;
	}
	DoDialog(var_1161_object);
	var_1175_bool = 0; var_1176_object = Obj();
	func_12444(Obj());
	var_1177_object = var_1176_object;
	func_12253(var_1175_bool, var_1176_object);
	var_1178_object = Obj(); var_1179_object = Obj();
	var_1155_object = var_1178_object;
	var_1161_object = var_1179_object;
	TaskCall(5);
	func_2384(var_1180_object, var_1181_object, var_1182_string, var_1183_bool, var_1178_object, var_1179_object);
	TaskReturn();
	@@var_1161_object:IsDialogEnd(var_1164_bool);
	
Label_2366:
	var_1330_bool = var_1164_bool == 0; //@nz
	if(var_1330_bool != 0) {
		sync();
		@@var_1161_object:IsDialogEnd(var_1164_bool);
		goto Label_2366;
	}
	var_1155_object = Obj();
	func_12235();
	StopDialog(var_1161_object);
	@@var_1161_object:GetReturnValue((int)-1);
	var_1163_int = var_1154_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_14593()
{
	var_142_object = Obj(); var_143_object = Obj();
	CreateDiaryEntry(var_143_object, (int)310, (int)1, (int)521961);
	var_147_bool = 0; var_148_object = Obj(); var_149_int = 0;
	var_143_object = var_148_object;
	func_14944(var_147_bool, var_148_object, (int)305);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12547(var_243_object, var_244_object, var_245_int)
{
	var_246_int = 0; var_247_int = 0; var_248_bool = 0; var_249_int = 0; var_250_int = 0; var_251_bool = 0;
	@@var_244_object:GetItemID(var_249_int);
	GetInvItemProperty(var_250_int, var_249_int, "Category");
	@@var_243_object:AddItem(var_251_bool, var_244_object, var_250_int, var_245_int);
	var_253_bool = var_251_bool == 0; //@nz
	if(var_253_bool != 0) {
		@@var_243_object:DropItems(var_244_object, var_245_int);
	} else {
		var_254_int = 0; var_255_int = 0;
		var_249_int = var_254_int;
		var_245_int = var_255_int;
		func_12504(var_254_int, var_255_int);
	}
	return 6;
	
}


func_13575(var_194_object)
{
	Trace("novocaine is given");
	var_197_object = Obj(); var_198_string = ""; var_199_int = 0;
	var_194_object = var_197_object;
	func_12566(var_197_object, "novocaine", (int)1);
	return 0;
}


func_1291(var_0_object, var_1_object, var_2_object, var_3_string, var_1050_object, var_1051_object)
{
	var_0_object = var_1051_object;
	var_1_object = var_1050_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1057_bool = 0; var_1058_object = Obj();
		var_1058_object = var_1_object;
		func_14230(var_1058_object);
		if(var_1057_bool != 0) {
			var_1063_object = Obj(); var_1064_object = Obj();
			var_1063_object = var_1_object;
			var_1064_object = var_0_object;
			func_12773();
			var_1067_string = "";
			func_1460(var_1051_object, "Sorrow");
			@@@var_0_object:SetMessage((int)518531);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519073, (int)20199, (int)20198);
			@@@var_0_object:AddReply((int)519077, (int)20203, (int)20202);
		} else {
				var_1090_string = "";
				func_1460(var_1051_object, "Untrust");
				@@@var_0_object:SetMessage((int)518536);
				@@@var_0_object:ClearReplies();
				var_1092_bool = 0; var_1093_object = Obj();
				var_1093_object = var_1_object;
				func_14218(var_1093_object);
				if(var_1092_bool != 0) {
					@@@var_0_object:AddReply((int)518537, (int)19648, (int)19647);
				}
				var_1101_bool = 0;
				var_1101_bool = 0;
				var_1102_bool = 0;
				var_1102_bool = 0;
				var_1103_bool = 0; var_1104_object = Obj();
				var_1104_object = var_1_object;
				func_14254(var_1103_bool, var_1104_object);
				if(var_1103_bool != 0) {
					var_1108_bool = 0; var_1109_object = Obj();
					var_1109_object = var_1_object;
					func_14265(var_1109_object);
					if(var_1108_bool != 0) {
						var_1102_bool = 1;
					}
				}
				if(var_1102_bool != 0) {
					var_1114_bool = 0; var_1115_object = Obj();
					var_1115_object = var_1_object;
					func_14242(var_1115_object);
					var_1120_bool = var_1114_bool == 0; //@nz
					if(var_1120_bool != 0) {
						var_1101_bool = 1;
					}
				}
				if(var_1101_bool != 0) {
					@@@var_0_object:AddReply((int)518540, (int)19651, (int)19650);
				}
				var_1124_bool = 0;
				var_1124_bool = 0;
				var_1125_bool = 0;
				var_1125_bool = 0;
				var_1126_bool = 0; var_1127_object = Obj();
				var_1127_object = var_1_object;
				func_14242(var_1127_object);
				if(var_1126_bool != 0) {
					var_1128_bool = 0; var_1129_object = Obj();
					var_1129_object = var_1_object;
					func_14254(var_1128_bool, var_1129_object);
					if(var_1128_bool != 0) {
						var_1125_bool = 1;
					}
				}
				if(var_1125_bool != 0) {
					var_1130_bool = 0; var_1131_object = Obj();
					var_1131_object = var_1_object;
					func_14265(var_1131_object);
					if(var_1130_bool != 0) {
						var_1124_bool = 1;
					}
				}
				if(var_1124_bool != 0) {
					@@@var_0_object:AddReply((int)518543, (int)19654, (int)19653);
				}
				var_1135_bool = 0;
				var_1135_bool = 0;
				var_1136_bool = 0; var_1137_object = Obj();
				var_1137_object = var_1_object;
				func_14038(var_1136_bool, var_1137_object);
				if(var_1136_bool != 0) {
					var_1138_bool = 0; var_1139_object = Obj();
					var_1139_object = var_1_object;
					func_14277(var_1139_object);
					if(var_1138_bool != 0) {
						var_1135_bool = 1;
					}
				}
				if(var_1135_bool != 0) {
					@@@var_0_object:AddReply((int)530627, (int)31931, (int)31930);
				}
				@@@var_0_object:AddReply((int)518546, (int)-1, (int)19656);
				goto Label_1430;
		}
	}
Label_1430:
	var_1082_bool = 0;
	func_12731(var_1082_bool);
	if(var_1082_bool != 0) {

	Label_1434:
		lshWaitForAnimEnd();
		var_1083_string = var_3_string;
		if(var_1083_string != 0) {
		} else {
			var_1084_string = "";
			var_1084_string = var_2_object;
			func_12391(var_1084_string);
			goto Label_1434;
	}
		PlayAnimation("all", "idle");

	Label_1449:
		WaitForAnimEnd();
		var_1087_string = var_3_string;
		if(var_1087_string != 0) {
			goto Label_1459;
		}
		PlayAnimation("all", "idle");
		goto Label_1449;

	}
	goto Label_1459;
	
Label_1459:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x50f";


func_14606()
{
	var_154_object = Obj(); var_155_object = Obj();
	CreateDiaryEntry(var_155_object, (int)311, (int)1, (int)521962);
	var_159_bool = 0; var_160_object = Obj(); var_161_int = 0;
	var_155_object = var_160_object;
	func_14944(var_159_bool, var_160_object, (int)305);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13586(var_146_object)
{
	Trace("delta_pills is given");
	var_149_object = Obj(); var_150_string = ""; var_151_int = 0;
	var_146_object = var_149_object;
	func_12566(var_149_object, "delta_pills", (int)1);
	return 0;
}


func_12566(var_238_object, var_239_string, var_240_int)
{
	var_241_object = Obj(); var_242_object = Obj();
	CreateInvItem(var_242_object);
	@@var_242_object:SetItemName(var_239_string);
	var_243_object = Obj(); var_244_object = Obj(); var_245_int = 0;
	var_238_object = var_243_object;
	var_242_object = var_244_object;
	var_240_int = var_245_int;
	func_12547(var_243_object, var_244_object, var_245_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_14619()
{
	var_124_object = Obj(); var_125_object = Obj();
	CreateDiaryEntry(var_125_object, (int)306, (int)1, (int)521957);
	var_129_bool = 0; var_130_object = Obj(); var_131_int = 0;
	var_125_object = var_130_object;
	func_14944(var_129_bool, var_130_object, (int)305);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13597(var_226_object)
{
	Trace("neomicin is given");
	var_229_object = Obj(); var_230_string = ""; var_231_int = 0;
	var_226_object = var_229_object;
	func_12566(var_229_object, "neomicin", (int)1);
	return 0;
}


func_12579(var_829_bool, var_830_object, var_831_string)
{
	var_832_int = 0; var_833_bool = 0; var_834_int = 0; var_835_bool = 0;
	GetInvItemByName(var_834_int, var_831_string);
	@@var_830_object:HasItem(var_834_int, var_835_bool);
	var_835_bool = var_829_bool;
	return 4;
}


func_13608(var_232_object)
{
	Trace("monomicin is given");
	var_235_object = Obj(); var_236_string = ""; var_237_int = 0;
	var_232_object = var_235_object;
	func_12566(var_235_object, "monomicin", (int)1);
	return 0;
}


func_14632()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)315, (int)1, (int)522057);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_14944(var_112_bool, var_113_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12586(var_106_bool, var_107_object, var_108_string)
{
	var_109_int = 0; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_int = 0; var_114_bool = 0;
	GetInvItemByName(var_112_int, var_108_string);
	GetInvItemProperty(var_113_int, var_112_int, "Category");
	@@var_107_object:RemoveItemByType(var_114_bool, var_112_int, var_113_int);
	var_116_bool = var_114_bool;
	if(var_116_bool != 0) {
		var_117_int = 0; var_118_int = 0;
		var_112_int = var_117_int;
		func_12516(var_117_int, (int)1);
	}
	var_114_bool = var_106_bool;
	return 6;
}


func_11570(var_2_object, var_619_string)
{
	var_620_bool = 0;
	func_12731(var_620_bool);
	var_621_bool = var_620_bool == 0; //@nz
	if(var_621_bool != 0) {
		return 0;
	}
	var_622_bool = var_619_string == var_2_object;
	if(var_622_bool != 0) {
		return 0;
	}
	var_623_string = ""; var_624_bool = 0;
	var_619_string = var_623_string;
	var_626_bool = var_619_string == "";
	if(var_626_bool != 0) {
		var_624_bool = 0;
	} else {
		var_624_bool = 1;
	}
	func_12407(var_623_string, var_624_bool);
	var_2_object = var_619_string;
	return 0;
	
}


func_13619()
{
	var_156_string = ""; var_157_bool = 0;
	func_12487("sobor@door1", (bool)0);
	return 0;
}


func_14645()
{
	var_182_object = Obj(); var_183_object = Obj();
	CreateDiaryEntry(var_183_object, (int)609, (int)2, (int)531504);
	var_187_bool = 0; var_188_object = Obj(); var_189_int = 0;
	var_183_object = var_188_object;
	func_14944(var_187_bool, var_188_object, (int)598);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13626()
{
	SetVariable("b3q02", (int)3);
	func_14749();
	return 0;
}


func_12603(var_126_bool, var_127_object, var_128_float)
{
	var_129_bool = var_127_object == 0; //@nz
	if(var_129_bool != 0) {
		var_126_bool = 0;
		return 0;
	}
	var_131_bool = var_128_float > (int)0;
	if(var_131_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_162_bool = var_128_float < (int)0;
		if(var_162_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_12624;
		}
		var_126_bool = 0;
		return 0;
	}
Label_12624:
	var_133_float = 0;
	var_128_float = var_133_float;
	func_12638(var_133_float);
	var_137_bool = 0; var_138_object = Obj(); var_139_string = ""; var_140_float = 0; var_141_float = 0; var_142_float = 0;
	var_127_object = var_138_object;
	var_128_float = var_140_float;
	func_12113(var_137_bool, var_138_object, "reputation", var_140_float, (float)0, (float)1);
	var_126_bool = 1;
	return 0;
	
}


func_6465(var_0_object, var_1_object, var_2_object, var_3_string, var_1467_object, var_1468_object)
{
	var_0_object = var_1468_object;
	var_1_object = var_1467_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1474_bool = 0; var_1475_object = Obj();
		var_1475_object = var_1_object;
		func_14559(var_1475_object);
		if(var_1474_bool != 0) {
			var_1480_string = "";
			func_6538(var_1468_object, "Neutral");
			@@@var_0_object:SetMessage((int)520966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528598, (int)29999, (int)29998);
		} else {
				var_1500_string = "";
				func_6538(var_1468_object, "Neutral");
				@@@var_0_object:SetMessage((int)520968);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520969, (int)-1, (int)22182);
				goto Label_6508;
		}
	}
Label_6508:
	var_1492_bool = 0;
	func_12731(var_1492_bool);
	if(var_1492_bool != 0) {

	Label_6512:
		lshWaitForAnimEnd();
		var_1493_string = var_3_string;
		if(var_1493_string != 0) {
		} else {
			var_1494_string = "";
			var_1494_string = var_2_object;
			func_12391(var_1494_string);
			goto Label_6512;
	}
		PlayAnimation("all", "idle");

	Label_6527:
		WaitForAnimEnd();
		var_1497_string = var_3_string;
		if(var_1497_string != 0) {
			goto Label_6537;
		}
		PlayAnimation("all", "idle");
		goto Label_6527;

	}
	goto Label_6537;
	
Label_6537:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1945";


func_14658()
{
	var_166_object = Obj(); var_167_object = Obj();
	CreateDiaryEntry(var_167_object, (int)600, (int)2, (int)531151);
	var_171_bool = 0; var_172_object = Obj(); var_173_int = 0;
	var_167_object = var_172_object;
	func_14944(var_171_bool, var_172_object, (int)598);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13635(var_280_bool)
{
	var_282_int = 0; var_283_string = "";
	func_12471(var_282_int, "b8q01");
	var_285_bool = var_282_int == (int)0;
	if(var_285_bool != 0) {
		var_280_bool = 1;
		return 0;
	}
	var_280_bool = 0;
	return 0;
}


func_5451(var_0_object, var_1334_int, var_1335_object)
{
	var_1337_object = Obj(); var_1338_bool = 0; var_1339_int = 0; var_1340_bool = 0; var_1341_object = Obj(); var_1342_bool = 0; var_1343_int = 0; var_1344_bool = 0;
	var_0_object = var_1335_object;
	var_1345_bool = 0; var_1346_object = Obj(); var_1347_float = 0;
	var_1335_object = var_1346_object;
	func_12166(var_1345_bool, var_1346_object, (float)70.0);
	var_1348_bool = var_1345_bool == 0; //@nz
	if(var_1348_bool != 0) {
		var_1334_int = -2;
		return 8;
	}
	CreateDialog(var_1341_object);
	var_1349_int = 0;
	func_12725(var_1349_int);
	@@var_1341_object:SetNPCName(var_1349_int);
	var_1350_int = 0;
	func_12723(var_1350_int);
	@@var_1341_object:SetNPCDescription(var_1350_int);
	var_1351_string = "";
	func_12727(var_1351_string);
	@@var_1341_object:SetPhoto(var_1351_string);
	var_1352_string = "";
	func_12729(var_1352_string);
	@@var_1341_object:SetPhoto2(var_1352_string);
	var_1353_int = 0;
	func_15022(var_1353_int);
	@@var_1341_object:SetPlayerName(var_1353_int);
	IsOverrideActive(var_1342_bool);
	var_1354_bool = var_1342_bool;
	if(var_1354_bool != 0) {
		var_1334_int = -2;
		return 8;
	}
	DoDialog(var_1341_object);
	var_1355_bool = 0; var_1356_object = Obj();
	func_12444(Obj());
	var_1357_object = var_1356_object;
	func_12253(var_1355_bool, var_1356_object);
	var_1358_object = Obj(); var_1359_object = Obj();
	var_1335_object = var_1358_object;
	var_1341_object = var_1359_object;
	TaskCall(11);
	func_5532(var_1360_object, var_1361_object, var_1362_string, var_1363_bool, var_1358_object, var_1359_object);
	TaskReturn();
	@@var_1341_object:IsDialogEnd(var_1344_bool);
	
Label_5514:
	var_1439_bool = var_1344_bool == 0; //@nz
	if(var_1439_bool != 0) {
		sync();
		@@var_1341_object:IsDialogEnd(var_1344_bool);
		goto Label_5514;
	}
	var_1335_object = Obj();
	func_12235();
	StopDialog(var_1341_object);
	@@var_1341_object:GetReturnValue((int)-1);
	var_1343_int = var_1334_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_13647(var_1540_bool)
{
	var_1542_int = 0; var_1543_string = "";
	func_12471(var_1542_int, "oob8Danko1");
	var_1545_bool = var_1542_int == (int)0;
	if(var_1545_bool != 0) {
		var_1540_bool = 1;
		return 0;
	}
	var_1540_bool = 0;
	return 0;
}


func_2384(var_0_object, var_1_object, var_2_object, var_3_string, var_1178_object, var_1179_object)
{
	var_0_object = var_1179_object;
	var_1_object = var_1178_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1185_bool = 0; var_1186_object = Obj();
		var_1186_object = var_1_object;
		func_14289(var_1186_object);
		if(var_1185_bool != 0) {
			var_1191_object = Obj(); var_1192_object = Obj();
			var_1191_object = var_1_object;
			var_1192_object = var_0_object;
			func_12831();
			var_1195_string = "";
			func_2632(var_1179_object, "Menace");
			@@@var_0_object:SetMessage((int)518609);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518750, (int)19843, (int)19842);
			@@@var_0_object:AddReply((int)518748, (int)19845, (int)19840);
		} else {
				var_1218_string = "";
				func_2632(var_1179_object, "Untrust");
				@@@var_0_object:SetMessage((int)518612);
				@@@var_0_object:ClearReplies();
				var_1220_bool = 0; var_1221_object = Obj();
				var_1221_object = var_1_object;
				func_14301(var_1221_object);
				if(var_1220_bool != 0) {
					@@@var_0_object:AddReply((int)518613, (int)19996, (int)19705);
				}
				var_1229_bool = 0;
				var_1229_bool = 0;
				var_1230_bool = 0;
				var_1230_bool = 0;
				var_1231_bool = 0;
				var_1231_bool = 0;
				var_1232_bool = 0; var_1233_object = Obj();
				var_1233_object = var_1_object;
				func_14313(var_1233_object);
				if(var_1232_bool != 0) {
					var_1238_bool = 0; var_1239_object = Obj();
					var_1239_object = var_1_object;
					func_14325(var_1239_object);
					var_1244_bool = var_1238_bool == 0; //@nz
					if(var_1244_bool != 0) {
						var_1231_bool = 1;
					}
				}
				if(var_1231_bool != 0) {
					var_1245_bool = 0; var_1246_object = Obj();
					var_1246_object = var_1_object;
					func_14370(var_1246_object);
					if(var_1245_bool != 0) {
						var_1230_bool = 1;
					}
				}
				if(var_1230_bool != 0) {
					var_1251_bool = 0; var_1252_object = Obj();
					var_1252_object = var_1_object;
					func_14382(var_1252_object);
					if(var_1251_bool != 0) {
						var_1229_bool = 1;
					}
				}
				if(var_1229_bool != 0) {
					@@@var_0_object:AddReply((int)518633, (int)20000, (int)19725);
				}
				var_1260_bool = 0;
				var_1260_bool = 0;
				var_1261_bool = 0;
				var_1261_bool = 0;
				var_1262_bool = 0; var_1263_object = Obj();
				var_1263_object = var_1_object;
				func_14337(var_1262_bool, var_1263_object);
				if(var_1262_bool != 0) {
					var_1267_bool = 0; var_1268_object = Obj();
					var_1268_object = var_1_object;
					func_14370(var_1268_object);
					if(var_1267_bool != 0) {
						var_1261_bool = 1;
					}
				}
				if(var_1261_bool != 0) {
					var_1269_bool = 0; var_1270_object = Obj();
					var_1270_object = var_1_object;
					func_13954(var_1270_object);
					var_1275_bool = var_1269_bool == 0; //@nz
					if(var_1275_bool != 0) {
						var_1260_bool = 1;
					}
				}
				if(var_1260_bool != 0) {
					@@@var_0_object:AddReply((int)518636, (int)19729, (int)19728);
				}
				var_1279_bool = 0;
				var_1279_bool = 0;
				var_1280_bool = 0;
				var_1280_bool = 0;
				var_1281_bool = 0; var_1282_object = Obj();
				var_1282_object = var_1_object;
				func_14348(var_1281_bool, var_1282_object);
				if(var_1281_bool != 0) {
					var_1286_bool = 0; var_1287_object = Obj();
					var_1287_object = var_1_object;
					func_14370(var_1287_object);
					if(var_1286_bool != 0) {
						var_1280_bool = 1;
					}
				}
				if(var_1280_bool != 0) {
					var_1288_bool = 0; var_1289_object = Obj();
					var_1289_object = var_1_object;
					func_13954(var_1289_object);
					var_1290_bool = var_1288_bool == 0; //@nz
					if(var_1290_bool != 0) {
						var_1279_bool = 1;
					}
				}
				if(var_1279_bool != 0) {
					@@@var_0_object:AddReply((int)518639, (int)19732, (int)19731);
				}
				var_1294_bool = 0;
				var_1294_bool = 0;
				var_1295_bool = 0;
				var_1295_bool = 0;
				var_1296_bool = 0; var_1297_object = Obj();
				var_1297_object = var_1_object;
				func_14359(var_1296_bool, var_1297_object);
				if(var_1296_bool != 0) {
					var_1301_bool = 0; var_1302_object = Obj();
					var_1302_object = var_1_object;
					func_14370(var_1302_object);
					if(var_1301_bool != 0) {
						var_1295_bool = 1;
					}
				}
				if(var_1295_bool != 0) {
					var_1303_bool = 0; var_1304_object = Obj();
					var_1304_object = var_1_object;
					func_13954(var_1304_object);
					var_1305_bool = var_1303_bool == 0; //@nz
					if(var_1305_bool != 0) {
						var_1294_bool = 1;
					}
				}
				if(var_1294_bool != 0) {
					@@@var_0_object:AddReply((int)518642, (int)19735, (int)19734);
				}
				var_1309_bool = 0;
				var_1309_bool = 0;
				var_1310_bool = 0; var_1311_object = Obj();
				var_1311_object = var_1_object;
				func_13954(var_1311_object);
				if(var_1310_bool != 0) {
					var_1312_bool = 0; var_1313_object = Obj();
					var_1313_object = var_1_object;
					func_13966(var_1313_object);
					var_1318_bool = var_1312_bool == 0; //@nz
					if(var_1318_bool != 0) {
						var_1309_bool = 1;
					}
				}
				if(var_1309_bool != 0) {
					@@@var_0_object:AddReply((int)529822, (int)31272, (int)31271);
				}
				var_1322_bool = 0; var_1323_object = Obj();
				var_1323_object = var_1_object;
				func_14038(var_1322_bool, var_1323_object);
				if(var_1322_bool != 0) {
					@@@var_0_object:AddReply((int)530667, (int)31961, (int)31960);
				}
				@@@var_0_object:AddReply((int)518618, (int)29655, (int)19710);
				goto Label_2602;
		}
	}
Label_2602:
	var_1210_bool = 0;
	func_12731(var_1210_bool);
	if(var_1210_bool != 0) {

	Label_2606:
		lshWaitForAnimEnd();
		var_1211_string = var_3_string;
		if(var_1211_string != 0) {
		} else {
			var_1212_string = "";
			var_1212_string = var_2_object;
			func_12391(var_1212_string);
			goto Label_2606;
	}
		PlayAnimation("all", "idle");

	Label_2621:
		WaitForAnimEnd();
		var_1215_string = var_3_string;
		if(var_1215_string != 0) {
			goto Label_2631;
		}
		PlayAnimation("all", "idle");
		goto Label_2621;

	}
	goto Label_2631;
	
Label_2631:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x954";


func_14671()
{
	var_142_object = Obj(); var_143_object = Obj();
	CreateDiaryEntry(var_143_object, (int)555, (int)2, (int)530530);
	var_147_bool = 0; var_148_object = Obj(); var_149_int = 0;
	var_143_object = var_148_object;
	func_14944(var_147_bool, var_148_object, (int)551);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13659(var_289_bool)
{
	var_291_bool = 0;
	var_291_bool = 0;
	var_292_bool = 0;
	var_292_bool = 0;
	var_293_int = 0; var_294_string = "";
	func_12471(var_293_int, "b8q01");
	var_296_bool = var_293_int != (int)0;
	if(var_296_bool != 0) {
		var_297_int = 0; var_298_string = "";
		func_12471(var_297_int, "b8q01");
		var_300_bool = var_297_int != (int)1000;
		if(var_300_bool != 0) {
			var_292_bool = 1;
		}
	}
	if(var_292_bool != 0) {
		var_301_int = 0; var_302_string = "";
		func_12471(var_301_int, "b8q01");
		var_304_bool = var_301_int != (int)-1;
		if(var_304_bool != 0) {
			var_291_bool = 1;
		}
	}
	if(var_291_bool != 0) {
		var_289_bool = 1;
		return 0;
	}
	var_289_bool = 0;
	return 0;
}


func_14684()
{
	var_136_object = Obj(); var_137_object = Obj();
	CreateDiaryEntry(var_137_object, (int)614, (int)1, (int)532003);
	var_141_bool = 0; var_142_object = Obj(); var_143_int = 0;
	var_137_object = var_142_object;
	func_14944(var_141_bool, var_142_object, (int)613);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12638(var_133_float)
{
	var_134_object = Obj(); var_135_object = Obj();
	CreateFloatVector(var_135_object);
	@@var_135_object:add(var_133_float);
	SendWorldWndMessage((int)16, var_135_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12648(var_150_bool, var_151_string, var_152_string)
{
	var_153_object = Obj(); var_154_object = Obj();
	FindActor(var_154_object, var_151_string);
	var_155_bool = var_154_object == 0; //@ne
	if(var_155_bool != 0) {
		var_150_bool = 0;
		return 2;
	}
	Trigger(var_154_object, var_152_string);
	var_150_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_14697()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)695, (int)1, (int)535403);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_14944(var_112_bool, var_113_object, (int)613);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11634(var_0_object, var_2054_int, var_2055_object)
{
	var_2057_object = Obj(); var_2058_bool = 0; var_2059_int = 0; var_2060_bool = 0; var_2061_object = Obj(); var_2062_bool = 0; var_2063_int = 0; var_2064_bool = 0;
	var_0_object = var_2055_object;
	var_2065_bool = 0; var_2066_object = Obj(); var_2067_float = 0;
	var_2055_object = var_2066_object;
	func_12166(var_2065_bool, var_2066_object, (float)70.0);
	var_2068_bool = var_2065_bool == 0; //@nz
	if(var_2068_bool != 0) {
		var_2054_int = -2;
		return 8;
	}
	CreateDialog(var_2061_object);
	var_2069_int = 0;
	func_12725(var_2069_int);
	@@var_2061_object:SetNPCName(var_2069_int);
	var_2070_int = 0;
	func_12723(var_2070_int);
	@@var_2061_object:SetNPCDescription(var_2070_int);
	var_2071_string = "";
	func_12727(var_2071_string);
	@@var_2061_object:SetPhoto(var_2071_string);
	var_2072_string = "";
	func_12729(var_2072_string);
	@@var_2061_object:SetPhoto2(var_2072_string);
	var_2073_int = 0;
	func_15022(var_2073_int);
	@@var_2061_object:SetPlayerName(var_2073_int);
	IsOverrideActive(var_2062_bool);
	var_2074_bool = var_2062_bool;
	if(var_2074_bool != 0) {
		var_2054_int = -2;
		return 8;
	}
	DoDialog(var_2061_object);
	var_2075_bool = 0; var_2076_object = Obj();
	func_12444(Obj());
	var_2077_object = var_2076_object;
	func_12253(var_2075_bool, var_2076_object);
	var_2078_object = Obj(); var_2079_object = Obj();
	var_2055_object = var_2078_object;
	var_2061_object = var_2079_object;
	TaskCall(35);
	func_11715(var_2080_object, var_2081_object, var_2082_string, var_2083_bool, var_2078_object, var_2079_object);
	TaskReturn();
	@@var_2061_object:IsDialogEnd(var_2064_bool);
	
Label_11697:
	var_2108_bool = var_2064_bool == 0; //@nz
	if(var_2108_bool != 0) {
		sync();
		@@var_2061_object:IsDialogEnd(var_2064_bool);
		goto Label_11697;
	}
	var_2055_object = Obj();
	func_12235();
	StopDialog(var_2061_object);
	@@var_2061_object:GetReturnValue((int)-1);
	var_2063_int = var_2054_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_12660(var_114_float)
{
	var_115_float = 0; var_116_float = 0;
	GetGameTime(var_116_float);
	var_116_float = var_114_float;
	return 2;
}


func_14710()
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateDiaryEntry(var_102_object, (int)244, (int)1, (int)520448);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_102_object = var_107_object;
	func_14944(var_106_bool, var_107_object, (int)242);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12665(var_241_int)
{
	var_242_float = 0; var_243_float = 0;
	GetGameTime(var_243_float);
	var_245_int = 0;
	var_245_int = var_243_float / (int)24;
	var_241_int = (int)1 + var_245_int;
	return 2;
}


func_10619(var_0_object, var_356_int, var_357_object)
{
	var_359_object = Obj(); var_360_bool = 0; var_361_int = 0; var_362_bool = 0; var_363_object = Obj(); var_364_bool = 0; var_365_int = 0; var_366_bool = 0;
	var_0_object = var_357_object;
	var_367_bool = 0; var_368_object = Obj(); var_369_float = 0;
	var_357_object = var_368_object;
	func_12166(var_367_bool, var_368_object, (float)70.0);
	var_370_bool = var_367_bool == 0; //@nz
	if(var_370_bool != 0) {
		var_356_int = -2;
		return 8;
	}
	CreateDialog(var_363_object);
	var_371_int = 0;
	func_12725(var_371_int);
	@@var_363_object:SetNPCName(var_371_int);
	var_372_int = 0;
	func_12723(var_372_int);
	@@var_363_object:SetNPCDescription(var_372_int);
	var_373_string = "";
	func_12727(var_373_string);
	@@var_363_object:SetPhoto(var_373_string);
	var_374_string = "";
	func_12729(var_374_string);
	@@var_363_object:SetPhoto2(var_374_string);
	var_375_int = 0;
	func_15022(var_375_int);
	@@var_363_object:SetPlayerName(var_375_int);
	IsOverrideActive(var_364_bool);
	var_376_bool = var_364_bool;
	if(var_376_bool != 0) {
		var_356_int = -2;
		return 8;
	}
	DoDialog(var_363_object);
	var_377_bool = 0; var_378_object = Obj();
	func_12444(Obj());
	var_379_object = var_378_object;
	func_12253(var_377_bool, var_378_object);
	var_380_object = Obj(); var_381_object = Obj();
	var_357_object = var_380_object;
	var_363_object = var_381_object;
	TaskCall(25);
	func_10700(var_382_object, var_383_object, var_384_string, var_385_bool, var_380_object, var_381_object);
	TaskReturn();
	@@var_363_object:IsDialogEnd(var_366_bool);
	
Label_10682:
	var_410_bool = var_366_bool == 0; //@nz
	if(var_410_bool != 0) {
		sync();
		@@var_363_object:IsDialogEnd(var_366_bool);
		goto Label_10682;
	}
	var_357_object = Obj();
	func_12235();
	StopDialog(var_363_object);
	@@var_363_object:GetReturnValue((int)-1);
	var_365_int = var_356_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_13693(var_1581_bool)
{
	var_1583_int = 0; var_1584_string = "";
	func_12471(var_1583_int, "oob8DankoStop");
	var_1586_bool = var_1583_int != (int)0;
	if(var_1586_bool != 0) {
		var_1581_bool = 1;
		return 0;
	}
	var_1581_bool = 0;
	return 0;
}


func_12674(var_644_bool, var_645_int)
{
	var_646_int = 0;
	func_12665(var_646_int);
	var_644_bool = var_646_int == var_645_int;
	return 0;
}


func_14723()
{
	var_204_object = Obj(); var_205_object = Obj();
	CreateDiaryEntry(var_205_object, (int)248, (int)1, (int)520469);
	var_209_bool = 0; var_210_object = Obj(); var_211_int = 0;
	var_205_object = var_210_object;
	func_14944(var_209_bool, var_210_object, (int)245);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12680(var_341_bool, var_342_int)
{
	var_343_float = 0; var_344_int = 0; var_345_int = 0; var_346_float = 0; var_347_int = 0; var_348_int = 0;
	GetGameTime(var_346_float);
	var_350_int = 0;
	var_350_int = var_346_float / (int)24;
	var_347_int = (int)1 + var_350_int;
	var_352_bool = var_347_int != var_342_int;
	if(var_352_bool != 0) {
		var_341_bool = 0;
		return 6;
	}
	var_353_int = 0;
	var_346_float = var_353_int;
	var_348_int = var_353_int % (int)24;
	var_341_bool = var_348_int < (int)7;
	return 6;
}


func_13705(var_1588_bool)
{
	var_1590_int = 0; var_1591_string = "";
	func_12471(var_1590_int, "oob8Danko2");
	var_1593_bool = var_1590_int == (int)0;
	if(var_1593_bool != 0) {
		var_1588_bool = 1;
		return 0;
	}
	var_1588_bool = 0;
	return 0;
}


func_6538(var_2_object, var_1480_string)
{
	var_1481_bool = 0;
	func_12731(var_1481_bool);
	var_1482_bool = var_1481_bool == 0; //@nz
	if(var_1482_bool != 0) {
		return 0;
	}
	var_1483_bool = var_1480_string == var_2_object;
	if(var_1483_bool != 0) {
		return 0;
	}
	var_1484_string = ""; var_1485_bool = 0;
	var_1480_string = var_1484_string;
	var_1487_bool = var_1480_string == "";
	if(var_1487_bool != 0) {
		var_1485_bool = 0;
	} else {
		var_1485_bool = 1;
	}
	func_12407(var_1484_string, var_1485_bool);
	var_2_object = var_1480_string;
	return 0;
	
}


func_14736()
{
	var_125_object = Obj(); var_126_object = Obj();
	CreateDiaryEntry(var_126_object, (int)573, (int)1, (int)530606);
	var_130_bool = 0; var_131_object = Obj(); var_132_int = 0;
	var_126_object = var_131_object;
	func_14944(var_130_bool, var_131_object, (int)245);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13717(var_1594_bool)
{
	var_1596_int = 0; var_1597_string = "";
	func_12471(var_1596_int, "b8q01KnowSgustki");
	var_1599_bool = var_1596_int != (int)0;
	if(var_1599_bool != 0) {
		var_1594_bool = 1;
		return 0;
	}
	var_1594_bool = 0;
	return 0;
}


func_12699(var_115_string, var_116_int)
{
	var_117_string = ""; var_118_string = "";
	var_119_int = var_116_int;
	if(var_119_int != 0) {
		"idle" = "idle" + var_116_int;
	}
	var_118_string = var_115_string;
	return 2;
}


func_5532(var_0_object, var_1_object, var_2_object, var_3_string, var_1358_object, var_1359_object)
{
	var_0_object = var_1359_object;
	var_1_object = var_1358_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1365_bool = 0; var_1366_object = Obj();
		var_1366_object = var_1_object;
		func_14466(var_1366_object);
		if(var_1365_bool != 0) {
			var_1371_object = Obj(); var_1372_object = Obj();
			var_1371_object = var_1_object;
			var_1372_object = var_0_object;
			func_12884();
			var_1375_string = "";
			func_5659(var_1359_object, "Neutral");
			@@@var_0_object:SetMessage((int)520527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520528, (int)21731, (int)21730);
		} else {
				var_1395_string = "";
				func_5659(var_1359_object, "Neutral");
				@@@var_0_object:SetMessage((int)520547);
				@@@var_0_object:ClearReplies();
				var_1397_bool = 0; var_1398_object = Obj();
				var_1398_object = var_1_object;
				func_14196(var_1397_bool, var_1398_object);
				if(var_1397_bool != 0) {
					@@@var_0_object:AddReply((int)520548, (int)21751, (int)21750);
				}
				var_1404_bool = 0;
				var_1404_bool = 0;
				var_1405_bool = 0; var_1406_object = Obj();
				var_1406_object = var_1_object;
				func_13919(var_1405_bool, var_1406_object);
				if(var_1405_bool != 0) {
					var_1410_bool = 0; var_1411_object = Obj();
					var_1411_object = var_1_object;
					func_13930(var_1411_object);
					if(var_1410_bool != 0) {
						var_1404_bool = 1;
					}
				}
				if(var_1404_bool != 0) {
					@@@var_0_object:AddReply((int)522217, (int)23367, (int)23366);
				}
				var_1419_bool = 0;
				var_1419_bool = 0;
				var_1420_bool = 0; var_1421_object = Obj();
				var_1421_object = var_1_object;
				func_13942(var_1421_object);
				var_1426_bool = var_1420_bool == 0; //@nz
				if(var_1426_bool != 0) {
					var_1427_bool = 0; var_1428_object = Obj();
					var_1428_object = var_1_object;
					func_14049(var_1428_object);
					if(var_1427_bool != 0) {
						var_1419_bool = 1;
					}
				}
				if(var_1419_bool != 0) {
					@@@var_0_object:AddReply((int)522220, (int)23370, (int)23369);
				}
				@@@var_0_object:AddReply((int)520557, (int)-1, (int)21759);
				goto Label_5629;
		}
	}
Label_5629:
	var_1387_bool = 0;
	func_12731(var_1387_bool);
	if(var_1387_bool != 0) {

	Label_5633:
		lshWaitForAnimEnd();
		var_1388_string = var_3_string;
		if(var_1388_string != 0) {
		} else {
			var_1389_string = "";
			var_1389_string = var_2_object;
			func_12391(var_1389_string);
			goto Label_5633;
	}
		PlayAnimation("all", "idle");

	Label_5648:
		WaitForAnimEnd();
		var_1392_string = var_3_string;
		if(var_1392_string != 0) {
			goto Label_5658;
		}
		PlayAnimation("all", "idle");
		goto Label_5648;

	}
	goto Label_5658;
	
Label_5658:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x15a0";


func_14749()
{
	var_376_object = Obj(); var_377_object = Obj();
	CreateDiaryEntry(var_377_object, (int)230, (int)2, (int)519658);
	var_381_bool = 0; var_382_object = Obj(); var_383_int = 0;
	var_377_object = var_382_object;
	func_14944(var_381_bool, var_382_object, (int)227);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13729(var_1699_bool)
{
	var_1701_int = 0; var_1702_string = "";
	func_12471(var_1701_int, "b10q01");
	var_1704_bool = var_1701_int == (int)0;
	if(var_1704_bool != 0) {
		var_1699_bool = 1;
		return 0;
	}
	var_1699_bool = 0;
	return 0;
}


func_12706(var_109_int)
{
	var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_bool = 0;
	var_112_int = 0;
	
Label_12708:
	var_115_string = ""; var_116_int = 0;
	var_112_int = var_116_int;
	func_12699(var_115_string, var_116_int);
	HasAnimation(var_113_bool, "all", var_115_string);
	var_120_bool = var_113_bool == 0; //@nz
	if(var_120_bool != 0) {
	} else {
		var_112_int = var_112_int + (int)1;
		goto Label_12708;
	}
	var_112_int = var_109_int;
	return 4;
	
}


func_9633(var_0_object, var_1873_int, var_1874_object)
{
	var_1876_object = Obj(); var_1877_bool = 0; var_1878_int = 0; var_1879_bool = 0; var_1880_object = Obj(); var_1881_bool = 0; var_1882_int = 0; var_1883_bool = 0;
	var_0_object = var_1874_object;
	var_1884_bool = 0; var_1885_object = Obj(); var_1886_float = 0;
	var_1874_object = var_1885_object;
	func_12166(var_1884_bool, var_1885_object, (float)70.0);
	var_1887_bool = var_1884_bool == 0; //@nz
	if(var_1887_bool != 0) {
		var_1873_int = -2;
		return 8;
	}
	CreateDialog(var_1880_object);
	var_1888_int = 0;
	func_12725(var_1888_int);
	@@var_1880_object:SetNPCName(var_1888_int);
	var_1889_int = 0;
	func_12723(var_1889_int);
	@@var_1880_object:SetNPCDescription(var_1889_int);
	var_1890_string = "";
	func_12727(var_1890_string);
	@@var_1880_object:SetPhoto(var_1890_string);
	var_1891_string = "";
	func_12729(var_1891_string);
	@@var_1880_object:SetPhoto2(var_1891_string);
	var_1892_int = 0;
	func_15022(var_1892_int);
	@@var_1880_object:SetPlayerName(var_1892_int);
	IsOverrideActive(var_1881_bool);
	var_1893_bool = var_1881_bool;
	if(var_1893_bool != 0) {
		var_1873_int = -2;
		return 8;
	}
	DoDialog(var_1880_object);
	var_1894_bool = 0; var_1895_object = Obj();
	func_12444(Obj());
	var_1896_object = var_1895_object;
	func_12253(var_1894_bool, var_1895_object);
	var_1897_object = Obj(); var_1898_object = Obj();
	var_1874_object = var_1897_object;
	var_1880_object = var_1898_object;
	TaskCall(23);
	func_9714(var_1899_object, var_1900_object, var_1901_string, var_1902_bool, var_1897_object, var_1898_object);
	TaskReturn();
	@@var_1880_object:IsDialogEnd(var_1883_bool);
	
Label_9696:
	var_2052_bool = var_1883_bool == 0; //@nz
	if(var_2052_bool != 0) {
		sync();
		@@var_1880_object:IsDialogEnd(var_1883_bool);
		goto Label_9696;
	}
	var_1874_object = Obj();
	func_12235();
	StopDialog(var_1880_object);
	@@var_1880_object:GetReturnValue((int)-1);
	var_1882_int = var_1873_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4522(var_2_object, var_768_string)
{
	var_769_bool = 0;
	func_12731(var_769_bool);
	var_770_bool = var_769_bool == 0; //@nz
	if(var_770_bool != 0) {
		return 0;
	}
	var_771_bool = var_768_string == var_2_object;
	if(var_771_bool != 0) {
		return 0;
	}
	var_772_string = ""; var_773_bool = 0;
	var_768_string = var_772_string;
	var_775_bool = var_768_string == "";
	if(var_775_bool != 0) {
		var_773_bool = 0;
	} else {
		var_773_bool = 1;
	}
	func_12407(var_772_string, var_773_bool);
	var_2_object = var_768_string;
	return 0;
	
}


func_14762()
{
	var_262_object = Obj(); var_263_object = Obj();
	CreateDiaryEntry(var_263_object, (int)631, (int)2, (int)532899);
	var_267_bool = 0; var_268_object = Obj(); var_269_int = 0;
	var_263_object = var_268_object;
	func_14944(var_267_bool, var_268_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13741(var_1660_bool)
{
	var_1662_int = 0; var_1663_string = "";
	func_12471(var_1662_int, "oob10Danko1");
	var_1665_bool = var_1662_int == (int)0;
	if(var_1665_bool != 0) {
		var_1660_bool = 1;
		return 0;
	}
	var_1660_bool = 0;
	return 0;
}


func_12723(var_174_int)
{
	var_174_int = 515573;
	return 0;
}


func_1460(var_2_object, var_1067_string)
{
	var_1068_bool = 0;
	func_12731(var_1068_bool);
	var_1069_bool = var_1068_bool == 0; //@nz
	if(var_1069_bool != 0) {
		return 0;
	}
	var_1070_bool = var_1067_string == var_2_object;
	if(var_1070_bool != 0) {
		return 0;
	}
	var_1071_string = ""; var_1072_bool = 0;
	var_1067_string = var_1071_string;
	var_1074_bool = var_1067_string == "";
	if(var_1074_bool != 0) {
		var_1072_bool = 0;
	} else {
		var_1072_bool = 1;
	}
	func_12407(var_1071_string, var_1072_bool);
	var_2_object = var_1067_string;
	return 0;
	
}


func_12725(var_173_int)
{
	var_173_int = 504032;
	return 0;
}


func_12727(var_175_string)
{
	var_175_string = "ui/NPC_Bakalavr.png";
	return 0;
}


func_14775()
{
	var_285_object = Obj(); var_286_object = Obj();
	CreateDiaryEntry(var_286_object, (int)632, (int)2, (int)532900);
	var_290_bool = 0; var_291_object = Obj(); var_292_int = 0;
	var_286_object = var_291_object;
	func_14944(var_290_bool, var_291_object, (int)631);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12729(var_176_string)
{
	var_176_string = "ui/NPC_Bakalavr_b.png";
	return 0;
}


func_13753(var_1708_bool)
{
	var_1710_int = 0; var_1711_string = "";
	func_12471(var_1710_int, "b10q01");
	var_1713_bool = var_1710_int == (int)3;
	if(var_1713_bool != 0) {
		var_1708_bool = 1;
		return 0;
	}
	var_1708_bool = 0;
	return 0;
}


func_12731(var_168_bool)
{
	var_168_bool = 1;
	return 0;
}


func_7611(var_0_object, var_1629_int, var_1630_object)
{
	var_1632_object = Obj(); var_1633_bool = 0; var_1634_int = 0; var_1635_bool = 0; var_1636_object = Obj(); var_1637_bool = 0; var_1638_int = 0; var_1639_bool = 0;
	var_0_object = var_1630_object;
	var_1640_bool = 0; var_1641_object = Obj(); var_1642_float = 0;
	var_1630_object = var_1641_object;
	func_12166(var_1640_bool, var_1641_object, (float)70.0);
	var_1643_bool = var_1640_bool == 0; //@nz
	if(var_1643_bool != 0) {
		var_1629_int = -2;
		return 8;
	}
	CreateDialog(var_1636_object);
	var_1644_int = 0;
	func_12725(var_1644_int);
	@@var_1636_object:SetNPCName(var_1644_int);
	var_1645_int = 0;
	func_12723(var_1645_int);
	@@var_1636_object:SetNPCDescription(var_1645_int);
	var_1646_string = "";
	func_12727(var_1646_string);
	@@var_1636_object:SetPhoto(var_1646_string);
	var_1647_string = "";
	func_12729(var_1647_string);
	@@var_1636_object:SetPhoto2(var_1647_string);
	var_1648_int = 0;
	func_15022(var_1648_int);
	@@var_1636_object:SetPlayerName(var_1648_int);
	IsOverrideActive(var_1637_bool);
	var_1649_bool = var_1637_bool;
	if(var_1649_bool != 0) {
		var_1629_int = -2;
		return 8;
	}
	DoDialog(var_1636_object);
	var_1650_bool = 0; var_1651_object = Obj();
	func_12444(Obj());
	var_1652_object = var_1651_object;
	func_12253(var_1650_bool, var_1651_object);
	var_1653_object = Obj(); var_1654_object = Obj();
	var_1630_object = var_1653_object;
	var_1636_object = var_1654_object;
	TaskCall(19);
	func_7692(var_1655_object, var_1656_object, var_1657_string, var_1658_bool, var_1653_object, var_1654_object);
	TaskReturn();
	@@var_1636_object:IsDialogEnd(var_1639_bool);
	
Label_7674:
	var_1767_bool = var_1639_bool == 0; //@nz
	if(var_1767_bool != 0) {
		sync();
		@@var_1636_object:IsDialogEnd(var_1639_bool);
		goto Label_7674;
	}
	var_1630_object = Obj();
	func_12235();
	StopDialog(var_1636_object);
	@@var_1636_object:GetReturnValue((int)-1);
	var_1638_int = var_1629_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_12733()
{
	var_99_object = Obj(); var_100_object = Obj();
	SetVariable("b4q01", (int)1);
	func_14972(Obj());
	var_103_object = var_100_object;
	var_114_float = 0;
	func_12660(var_114_float);
	@@var_100_object:AddMark("b4q01DankoGotoLaraSelf", "pt_map_eva", (int)1, (int)518592, var_114_float);
	var_121_float = 0;
	func_12660(var_121_float);
	@@var_100_object:AddMark("b4q01DankoGotoLara", "pt_map_lara", (int)1, (int)518591, var_121_float);
	func_14788();
	func_14801();
	var_153_bool = 0; var_154_string = ""; var_155_string = "";
	func_12648(var_153_bool, "quest_b4_01", "rubin_unlock");
	return 2;
}
EMIT "Stack[-1] = 0";


func_11715(var_0_object, var_1_object, var_2_object, var_3_string, var_2078_object, var_2079_object)
{
	var_0_object = var_2079_object;
	var_1_object = var_2078_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_2085_string = "";
		func_11773(var_2079_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_11743;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2dc7";
	}
Label_11743:
	var_2100_bool = 0;
	func_12731(var_2100_bool);
	if(var_2100_bool != 0) {

	Label_11747:
		lshWaitForAnimEnd();
		var_2101_string = var_3_string;
		if(var_2101_string != 0) {
		} else {
			var_2102_string = "";
			var_2102_string = var_2_object;
			func_12391(var_2102_string);
			goto Label_11747;
	}
		PlayAnimation("all", "idle");

	Label_11762:
		WaitForAnimEnd();
		var_2105_string = var_3_string;
		if(var_2105_string != 0) {
			goto Label_11772;
		}
		PlayAnimation("all", "idle");
		goto Label_11762;
	}
	goto Label_11772;
	
Label_11772:
	return 0;
	
}


func_14788()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)216, (int)1, (int)518594);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_14944(var_127_bool, var_128_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13765(var_1719_bool)
{
	var_1721_int = 0; var_1722_string = "";
	func_12471(var_1721_int, "b10q01");
	var_1724_bool = var_1721_int == (int)4;
	if(var_1724_bool != 0) {
		var_1719_bool = 1;
		return 0;
	}
	var_1719_bool = 0;
	return 0;
}


func_10700(var_0_object, var_1_object, var_2_object, var_3_string, var_380_object, var_381_object)
{
	var_0_object = var_381_object;
	var_1_object = var_380_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_387_string = "";
		func_10758(var_381_object, "Neutral");
		@@@var_0_object:SetMessage((int)529906);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529907, (int)-1, (int)31290);
		@@@var_0_object:AddReply((int)529908, (int)-1, (int)31291);
		goto Label_10728;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x29d0";
	}
Label_10728:
	var_402_bool = 0;
	func_12731(var_402_bool);
	if(var_402_bool != 0) {

	Label_10732:
		lshWaitForAnimEnd();
		var_403_string = var_3_string;
		if(var_403_string != 0) {
		} else {
			var_404_string = "";
			var_404_string = var_2_object;
			func_12391(var_404_string);
			goto Label_10732;
	}
		PlayAnimation("all", "idle");

	Label_10747:
		WaitForAnimEnd();
		var_407_string = var_3_string;
		if(var_407_string != 0) {
			goto Label_10757;
		}
		PlayAnimation("all", "idle");
		goto Label_10747;
	}
	goto Label_10757;
	
Label_10757:
	return 0;
	
}


func_13777(var_1731_bool)
{
	var_1733_int = 0; var_1734_string = "";
	func_12471(var_1733_int, "b10q01TalkKaterina");
	var_1736_bool = var_1733_int == (int)1;
	if(var_1736_bool != 0) {
		var_1731_bool = 1;
		return 0;
	}
	var_1731_bool = 0;
	return 0;
}


func_14801()
{
	var_145_object = Obj(); var_146_object = Obj();
	CreateDiaryEntry(var_146_object, (int)220, (int)1, (int)518598);
	var_150_bool = 0; var_151_object = Obj(); var_152_int = 0;
	var_146_object = var_151_object;
	func_14944(var_150_bool, var_151_object, (int)216);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13789(var_1725_bool)
{
	var_1727_int = 0; var_1728_string = "";
	func_12471(var_1727_int, "b10q01TalkKapella");
	var_1730_bool = var_1727_int == (int)1;
	if(var_1730_bool != 0) {
		var_1725_bool = 1;
		return 0;
	}
	var_1725_bool = 0;
	return 0;
}


func_14814()
{
	var_313_object = Obj(); var_314_object = Obj();
	CreateDiaryEntry(var_314_object, (int)633, (int)2, (int)532901);
	var_318_bool = 0; var_319_object = Obj(); var_320_int = 0;
	var_314_object = var_319_object;
	func_14944(var_318_bool, var_319_object, (int)631);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12773()
{
	SetVariable("oob4Danko1", (int)1);
	return 0;
}


func_13801(var_374_bool)
{
	var_376_int = 0; var_377_string = "";
	func_12471(var_376_int, "b11q01");
	var_379_bool = var_376_int == (int)1000;
	if(var_379_bool != 0) {
		var_374_bool = 1;
		return 0;
	}
	var_374_bool = 0;
	return 0;
}


func_12779()
{
	SetVariable("oob4Danko2", (int)1);
	return 0;
}


func_14827()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)238, (int)1, (int)519743);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_14944(var_127_bool, var_128_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12785()
{
	SetVariable("oob4Danko3", (int)1);
	return 0;
}


func_9714(var_0_object, var_1_object, var_2_object, var_3_string, var_1897_object, var_1898_object)
{
	var_0_object = var_1898_object;
	var_1_object = var_1897_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1904_bool = 0;
		var_1904_bool = 0;
		var_1905_bool = 0; var_1906_object = Obj();
		var_1906_object = var_1_object;
		func_13825(var_1906_object);
		if(var_1905_bool != 0) {
			var_1911_bool = 0; var_1912_object = Obj();
			var_1912_object = var_1_object;
			func_13861(var_1912_object);
			var_1917_bool = var_1911_bool == 0; //@nz
			if(var_1917_bool != 0) {
				var_1904_bool = 1;
			}
		}
		if(var_1904_bool != 0) {
			var_1918_object = Obj(); var_1919_object = Obj();
			var_1918_object = var_1_object;
			var_1919_object = var_0_object;
			func_13076();
			var_1922_object = Obj(); var_1923_object = Obj();
			var_1922_object = var_1_object;
			var_1923_object = var_0_object;
			func_13091();
			var_1926_string = "";
			func_9885(var_1898_object, "Neutral");
			@@@var_0_object:SetMessage((int)522107);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522108, (int)24172, (int)23275);
			@@@var_0_object:AddReply((int)522109, (int)24176, (int)23276);
		} else {
				var_1949_object = Obj(); var_1950_object = Obj();
				var_1949_object = var_1_object;
				var_1950_object = var_0_object;
				func_13091();
				var_1951_string = "";
				func_9885(var_1898_object, "Neutral");
				@@@var_0_object:SetMessage((int)531983);
				@@@var_0_object:ClearReplies();
				var_1953_bool = 0;
				var_1953_bool = 0;
				var_1954_bool = 0;
				var_1954_bool = 0;
				var_1955_bool = 0; var_1956_object = Obj();
				var_1956_object = var_1_object;
				func_13897(var_1955_bool, var_1956_object);
				if(var_1955_bool != 0) {
					var_2004_bool = 0; var_2005_object = Obj();
					var_2005_object = var_1_object;
					func_14085(var_2005_object);
					var_2010_bool = var_2004_bool == 0; //@nz
					if(var_2010_bool != 0) {
						var_1954_bool = 1;
					}
				}
				if(var_1954_bool != 0) {
					var_2011_bool = 0; var_2012_object = Obj();
					var_2012_object = var_1_object;
					func_13861(var_2012_object);
					var_2013_bool = var_2011_bool == 0; //@nz
					if(var_2013_bool != 0) {
						var_1953_bool = 1;
					}
				}
				if(var_1953_bool != 0) {
					@@@var_0_object:AddReply((int)540259, (int)42243, (int)42242);
				}
				var_2017_bool = 0;
				var_2017_bool = 0;
				var_2018_bool = 0; var_2019_object = Obj();
				var_2019_object = var_1_object;
				func_13873(var_2019_object);
				if(var_2018_bool != 0) {
					var_2024_bool = 0; var_2025_object = Obj();
					var_2025_object = var_1_object;
					func_13885(var_2025_object);
					if(var_2024_bool != 0) {
						var_2017_bool = 1;
					}
				}
				if(var_2017_bool != 0) {
					@@@var_0_object:AddReply((int)522987, (int)24179, (int)24178);
				}
				var_2033_bool = 0;
				var_2033_bool = 0;
				var_2034_bool = 0; var_2035_object = Obj();
				var_2035_object = var_1_object;
				func_13837(var_2035_object);
				if(var_2034_bool != 0) {
					var_2040_bool = 0; var_2041_object = Obj();
					var_2041_object = var_1_object;
					func_13849(var_2041_object);
					if(var_2040_bool != 0) {
						var_2033_bool = 1;
					}
				}
				if(var_2033_bool != 0) {
					@@@var_0_object:AddReply((int)522996, (int)24188, (int)24187);
				}
				@@@var_0_object:AddReply((int)531987, (int)-1, (int)33393);
				goto Label_9855;
		}
	}
Label_9855:
	var_1941_bool = 0;
	func_12731(var_1941_bool);
	if(var_1941_bool != 0) {

	Label_9859:
		lshWaitForAnimEnd();
		var_1942_string = var_3_string;
		if(var_1942_string != 0) {
		} else {
			var_1943_string = "";
			var_1943_string = var_2_object;
			func_12391(var_1943_string);
			goto Label_9859;
	}
		PlayAnimation("all", "idle");

	Label_9874:
		WaitForAnimEnd();
		var_1946_string = var_3_string;
		if(var_1946_string != 0) {
			goto Label_9884;
		}
		PlayAnimation("all", "idle");
		goto Label_9874;

	}
	goto Label_9884;
	
Label_9884:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x25f6";


func_13813(var_1802_bool)
{
	var_1804_int = 0; var_1805_string = "";
	func_12471(var_1804_int, "oob11Danko1");
	var_1807_bool = var_1804_int == (int)0;
	if(var_1807_bool != 0) {
		var_1802_bool = 1;
		return 0;
	}
	var_1802_bool = 0;
	return 0;
}


func_12791()
{
	var_99_object = Obj(); var_100_object = Obj();
	SetVariable("b5q01", (int)1);
	func_14972(Obj());
	var_103_object = var_100_object;
	var_114_float = 0;
	func_12660(var_114_float);
	@@var_100_object:AddMark("b5q01DankoGotoAndrei", "pt_map_andrei", (int)1, (int)519742, var_114_float);
	var_121_float = 0;
	func_12660(var_121_float);
	@@var_100_object:AddMark("b5q01DankoGotoOspina", "pt_map_ospina", (int)1, (int)519741, var_121_float);
	func_14827();
	func_14853();
	var_153_bool = 0; var_154_string = ""; var_155_string = "";
	func_12648(var_153_bool, "quest_b5_01", "vera_kabak");
	return 2;
}
EMIT "Stack[-1] = 0";


func_14840()
{
	var_316_object = Obj(); var_317_object = Obj();
	CreateDiaryEntry(var_317_object, (int)241, (int)1, (int)519746);
	var_321_bool = 0; var_322_object = Obj(); var_323_int = 0;
	var_317_object = var_322_object;
	func_14944(var_321_bool, var_322_object, (int)238);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11773(var_2_object, var_2085_string)
{
	var_2086_bool = 0;
	func_12731(var_2086_bool);
	var_2087_bool = var_2086_bool == 0; //@nz
	if(var_2087_bool != 0) {
		return 0;
	}
	var_2088_bool = var_2085_string == var_2_object;
	if(var_2088_bool != 0) {
		return 0;
	}
	var_2089_string = ""; var_2090_bool = 0;
	var_2085_string = var_2089_string;
	var_2092_bool = var_2085_string == "";
	if(var_2092_bool != 0) {
		var_2090_bool = 0;
	} else {
		var_2090_bool = 1;
	}
	func_12407(var_2089_string, var_2090_bool);
	var_2_object = var_2085_string;
	return 0;
	
}


func_13825(var_1905_bool)
{
	var_1907_int = 0; var_1908_string = "";
	func_12471(var_1907_int, "oob12Danko1");
	var_1910_bool = var_1907_int == (int)0;
	if(var_1910_bool != 0) {
		var_1905_bool = 1;
		return 0;
	}
	var_1905_bool = 0;
	return 0;
}


func_14853()
{
	var_145_object = Obj(); var_146_object = Obj();
	CreateDiaryEntry(var_146_object, (int)239, (int)1, (int)519744);
	var_150_bool = 0; var_151_object = Obj(); var_152_int = 0;
	var_146_object = var_151_object;
	func_14944(var_150_bool, var_151_object, (int)238);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10758(var_2_object, var_387_string)
{
	var_388_bool = 0;
	func_12731(var_388_bool);
	var_389_bool = var_388_bool == 0; //@nz
	if(var_389_bool != 0) {
		return 0;
	}
	var_390_bool = var_387_string == var_2_object;
	if(var_390_bool != 0) {
		return 0;
	}
	var_391_string = ""; var_392_bool = 0;
	var_387_string = var_391_string;
	var_394_bool = var_387_string == "";
	if(var_394_bool != 0) {
		var_392_bool = 0;
	} else {
		var_392_bool = 1;
	}
	func_12407(var_391_string, var_392_bool);
	var_2_object = var_387_string;
	return 0;
	
}


func_7692(var_0_object, var_1_object, var_2_object, var_3_string, var_1653_object, var_1654_object)
{
	var_0_object = var_1654_object;
	var_1_object = var_1653_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1660_bool = 0; var_1661_object = Obj();
		var_1661_object = var_1_object;
		func_13741(var_1661_object);
		if(var_1660_bool != 0) {
			var_1666_object = Obj(); var_1667_object = Obj();
			var_1666_object = var_1_object;
			var_1667_object = var_0_object;
			func_13040();
			var_1670_object = Obj(); var_1671_object = Obj();
			var_1670_object = var_1_object;
			var_1671_object = var_0_object;
			func_13055();
			var_1674_string = "";
			func_7886(var_1654_object, "Menace");
			@@@var_0_object:SetMessage((int)521910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522427, (int)23595, (int)23594);
			@@@var_0_object:AddReply((int)521912, (int)23599, (int)23086);
		} else {
				var_1697_string = "";
				func_7886(var_1654_object, "Neutral");
				@@@var_0_object:SetMessage((int)521913);
				@@@var_0_object:ClearReplies();
				var_1699_bool = 0; var_1700_object = Obj();
				var_1700_object = var_1_object;
				func_13729(var_1700_object);
				if(var_1699_bool != 0) {
					@@@var_0_object:AddReply((int)521914, (int)23092, (int)23088);
				}
				var_1708_bool = 0; var_1709_object = Obj();
				var_1709_object = var_1_object;
				func_13753(var_1709_object);
				if(var_1708_bool != 0) {
					@@@var_0_object:AddReply((int)521920, (int)23095, (int)23094);
				}
				var_1717_bool = 0;
				var_1717_bool = 0;
				var_1718_bool = 0;
				var_1718_bool = 0;
				var_1719_bool = 0; var_1720_object = Obj();
				var_1720_object = var_1_object;
				func_13765(var_1720_object);
				if(var_1719_bool != 0) {
					var_1725_bool = 0; var_1726_object = Obj();
					var_1726_object = var_1_object;
					func_13789(var_1726_object);
					if(var_1725_bool != 0) {
						var_1718_bool = 1;
					}
				}
				if(var_1718_bool != 0) {
					var_1731_bool = 0; var_1732_object = Obj();
					var_1732_object = var_1_object;
					func_13777(var_1732_object);
					var_1737_bool = var_1731_bool == 0; //@nz
					if(var_1737_bool != 0) {
						var_1717_bool = 1;
					}
				}
				if(var_1717_bool != 0) {
					@@@var_0_object:AddReply((int)521935, (int)32896, (int)23109);
				}
				var_1741_bool = 0;
				var_1741_bool = 0;
				var_1742_bool = 0;
				var_1742_bool = 0;
				var_1743_bool = 0; var_1744_object = Obj();
				var_1744_object = var_1_object;
				func_13765(var_1744_object);
				if(var_1743_bool != 0) {
					var_1745_bool = 0; var_1746_object = Obj();
					var_1746_object = var_1_object;
					func_13777(var_1746_object);
					if(var_1745_bool != 0) {
						var_1742_bool = 1;
					}
				}
				if(var_1742_bool != 0) {
					var_1747_bool = 0; var_1748_object = Obj();
					var_1748_object = var_1_object;
					func_13789(var_1748_object);
					var_1749_bool = var_1747_bool == 0; //@nz
					if(var_1749_bool != 0) {
						var_1741_bool = 1;
					}
				}
				if(var_1741_bool != 0) {
					@@@var_0_object:AddReply((int)521936, (int)23113, (int)23110);
				}
				var_1753_bool = 0;
				var_1753_bool = 0;
				var_1754_bool = 0;
				var_1754_bool = 0;
				var_1755_bool = 0; var_1756_object = Obj();
				var_1756_object = var_1_object;
				func_13789(var_1756_object);
				if(var_1755_bool != 0) {
					var_1757_bool = 0; var_1758_object = Obj();
					var_1758_object = var_1_object;
					func_13777(var_1758_object);
					if(var_1757_bool != 0) {
						var_1754_bool = 1;
					}
				}
				if(var_1754_bool != 0) {
					var_1759_bool = 0; var_1760_object = Obj();
					var_1760_object = var_1_object;
					func_13765(var_1760_object);
					if(var_1759_bool != 0) {
						var_1753_bool = 1;
					}
				}
				if(var_1753_bool != 0) {
					@@@var_0_object:AddReply((int)521941, (int)32893, (int)23115);
				}
				@@@var_0_object:AddReply((int)521917, (int)-1, (int)23091);
				goto Label_7856;
		}
	}
Label_7856:
	var_1689_bool = 0;
	func_12731(var_1689_bool);
	if(var_1689_bool != 0) {

	Label_7860:
		lshWaitForAnimEnd();
		var_1690_string = var_3_string;
		if(var_1690_string != 0) {
		} else {
			var_1691_string = "";
			var_1691_string = var_2_object;
			func_12391(var_1691_string);
			goto Label_7860;
	}
		PlayAnimation("all", "idle");

	Label_7875:
		WaitForAnimEnd();
		var_1694_string = var_3_string;
		if(var_1694_string != 0) {
			goto Label_7885;
		}
		PlayAnimation("all", "idle");
		goto Label_7875;

	}
	goto Label_7885;
	
Label_7885:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1e10";


func_13837(var_2034_bool)
{
	var_2036_int = 0; var_2037_string = "";
	func_12471(var_2036_int, "b12q01ChildsAreVisited");
	var_2039_bool = var_2036_int != (int)0;
	if(var_2039_bool != 0) {
		var_2034_bool = 1;
		return 0;
	}
	var_2034_bool = 0;
	return 0;
}


func_14866()
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateDiaryEntry(var_102_object, (int)265, (int)1, (int)521192);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_102_object = var_107_object;
	func_14944(var_106_bool, var_107_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_13849(var_2040_bool)
{
	var_2042_int = 0; var_2043_string = "";
	func_12471(var_2042_int, "oob12Danko2");
	var_2045_bool = var_2042_int == (int)0;
	if(var_2045_bool != 0) {
		var_2040_bool = 1;
		return 0;
	}
	var_2040_bool = 0;
	return 0;
}


func_5659(var_2_object, var_1375_string)
{
	var_1376_bool = 0;
	func_12731(var_1376_bool);
	var_1377_bool = var_1376_bool == 0; //@nz
	if(var_1377_bool != 0) {
		return 0;
	}
	var_1378_bool = var_1375_string == var_2_object;
	if(var_1378_bool != 0) {
		return 0;
	}
	var_1379_string = ""; var_1380_bool = 0;
	var_1375_string = var_1379_string;
	var_1382_bool = var_1375_string == "";
	if(var_1382_bool != 0) {
		var_1380_bool = 0;
	} else {
		var_1380_bool = 1;
	}
	func_12407(var_1379_string, var_1380_bool);
	var_2_object = var_1375_string;
	return 0;
	
}


func_14879()
{
	var_163_object = Obj(); var_164_object = Obj();
	CreateDiaryEntry(var_164_object, (int)366, (int)1, (int)525666);
	var_168_bool = 0; var_169_object = Obj(); var_170_int = 0;
	var_164_object = var_169_object;
	func_14944(var_168_bool, var_169_object, (int)265);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12831()
{
	SetVariable("oob5Danko1", (int)1);
	return 0;
}


func_12837()
{
	func_14840();
	var_324_bool = 0; var_325_string = ""; var_326_string = "";
	func_12648(var_324_bool, "quest_b5_01", "completed");
	return 0;
}


func_13861(var_1911_bool)
{
	var_1913_int = 0; var_1914_string = "";
	func_12471(var_1913_int, "game_final");
	var_1916_bool = var_1913_int != (int)0;
	if(var_1916_bool != 0) {
		var_1911_bool = 1;
		return 0;
	}
	var_1911_bool = 0;
	return 0;
}


func_14892()
{
	var_124_object = Obj(); var_125_object = Obj();
	CreateDiaryEntry(var_125_object, (int)360, (int)1, (int)525660);
	var_129_bool = 0; var_130_object = Obj(); var_131_int = 0;
	var_125_object = var_130_object;
	func_14944(var_129_bool, var_130_object, (int)265);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12847()
{
	SetVariable("oob5Danko2", (int)1);
	return 0;
}


func_13873(var_2018_bool)
{
	var_2020_int = 0; var_2021_string = "";
	func_12471(var_2020_int, "b12q01MariaFinalTalk");
	var_2023_bool = var_2020_int != (int)0;
	if(var_2023_bool != 0) {
		var_2018_bool = 1;
		return 0;
	}
	var_2018_bool = 0;
	return 0;
}


func_12853()
{
	SetVariable("oob3Danko1", (int)1);
	return 0;
}


func_14905()
{
	var_117_object = Obj(); var_118_object = Obj();
	CreateDiaryEntry(var_118_object, (int)253, (int)1, (int)521019);
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0;
	var_118_object = var_123_object;
	func_14944(var_122_bool, var_123_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_12859()
{
	SetVariable("oob3Danko2", (int)1);
	return 0;
}


func_13885(var_2024_bool)
{
	var_2026_int = 0; var_2027_string = "";
	func_12471(var_2026_int, "oob12Danko3");
	var_2029_bool = var_2026_int == (int)0;
	if(var_2029_bool != 0) {
		var_2024_bool = 1;
		return 0;
	}
	var_2024_bool = 0;
	return 0;
}


func_12865()
{
	SetVariable("b1q01", (int)1000);
	func_14710();
	return 0;
}


func_11841(var_0_object)
{
	var_91_bool = 0;
	func_12161(var_91_bool);
	var_94_bool = var_91_bool == 0; //@nz
	if(var_94_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_11850:
	func_12017();
	goto Label_11850;
}
EMIT "Return(); Pop(0)";


func_14918()
{
	var_140_object = Obj(); var_141_object = Obj();
	CreateDiaryEntry(var_141_object, (int)254, (int)1, (int)521020);
	var_145_bool = 0; var_146_object = Obj(); var_147_int = 0;
	var_141_object = var_146_object;
	func_14944(var_145_bool, var_146_object, (int)253);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10822(var_0_object, var_414_int, var_415_object)
{
	var_417_object = Obj(); var_418_bool = 0; var_419_int = 0; var_420_bool = 0; var_421_object = Obj(); var_422_bool = 0; var_423_int = 0; var_424_bool = 0;
	var_0_object = var_415_object;
	var_425_bool = 0; var_426_object = Obj(); var_427_float = 0;
	var_415_object = var_426_object;
	func_12166(var_425_bool, var_426_object, (float)70.0);
	var_428_bool = var_425_bool == 0; //@nz
	if(var_428_bool != 0) {
		var_414_int = -2;
		return 8;
	}
	CreateDialog(var_421_object);
	var_429_int = 0;
	func_12725(var_429_int);
	@@var_421_object:SetNPCName(var_429_int);
	var_430_int = 0;
	func_12723(var_430_int);
	@@var_421_object:SetNPCDescription(var_430_int);
	var_431_string = "";
	func_12727(var_431_string);
	@@var_421_object:SetPhoto(var_431_string);
	var_432_string = "";
	func_12729(var_432_string);
	@@var_421_object:SetPhoto2(var_432_string);
	var_433_int = 0;
	func_15022(var_433_int);
	@@var_421_object:SetPlayerName(var_433_int);
	IsOverrideActive(var_422_bool);
	var_434_bool = var_422_bool;
	if(var_434_bool != 0) {
		var_414_int = -2;
		return 8;
	}
	DoDialog(var_421_object);
	var_435_bool = 0; var_436_object = Obj();
	func_12444(Obj());
	var_437_object = var_436_object;
	func_12253(var_435_bool, var_436_object);
	var_438_object = Obj(); var_439_object = Obj();
	var_415_object = var_438_object;
	var_421_object = var_439_object;
	TaskCall(27);
	func_10903(var_440_object, var_441_object, var_442_string, var_443_bool, var_438_object, var_439_object);
	TaskReturn();
	@@var_421_object:IsDialogEnd(var_424_bool);
	
Label_10885:
	var_468_bool = var_424_bool == 0; //@nz
	if(var_468_bool != 0) {
		sync();
		@@var_421_object:IsDialogEnd(var_424_bool);
		goto Label_10885;
	}
	var_415_object = Obj();
	func_12235();
	StopDialog(var_421_object);
	@@var_421_object:GetReturnValue((int)-1);
	var_423_int = var_414_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2632(var_2_object, var_1195_string)
{
	var_1196_bool = 0;
	func_12731(var_1196_bool);
	var_1197_bool = var_1196_bool == 0; //@nz
	if(var_1197_bool != 0) {
		return 0;
	}
	var_1198_bool = var_1195_string == var_2_object;
	if(var_1198_bool != 0) {
		return 0;
	}
	var_1199_string = ""; var_1200_bool = 0;
	var_1195_string = var_1199_string;
	var_1202_bool = var_1195_string == "";
	if(var_1202_bool != 0) {
		var_1200_bool = 0;
	} else {
		var_1200_bool = 1;
	}
	func_12407(var_1199_string, var_1200_bool);
	var_2_object = var_1195_string;
	return 0;
	
}


func_13897(var_1955_bool, var_1956_object)
{
	var_1957_bool = 0; var_1958_object = Obj();
	var_1956_object = var_1958_object;
	func_14571(var_1958_object);
	if(var_1957_bool != 0) {
		var_1955_bool = 1;
		return 0;
	}
	var_1955_bool = 0;
	return 0;
}


func_12874()
{
	func_14723();
	var_212_bool = 0; var_213_string = ""; var_214_string = "";
	func_12648(var_212_bool, "quest_b2_01", "completed");
	return 0;
}


func_11855(var_116_bool)
{
	var_117_object = Obj(); var_118_object = Obj();
	FindActor(var_118_object, "player");
	var_120_bool = var_118_object == 0; //@nz
	if(var_120_bool != 0) {
		var_116_bool = 0;
		return 2;
	}
	var_121_bool = 0; var_122_object = Obj();
	var_118_object = var_122_object;
	func_12152(var_121_bool, var_122_object);
	var_121_bool = var_116_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_13907(var_1834_bool)
{
	var_1836_int = 0; var_1837_string = "";
	func_12471(var_1836_int, "oob11Danko2");
	var_1839_bool = var_1836_int == (int)0;
	if(var_1839_bool != 0) {
		var_1834_bool = 1;
		return 0;
	}
	var_1834_bool = 0;
	return 0;
}


func_12884()
{
	SetVariable("oob6Danko1", (int)1);
	return 0;
}


func_14931(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj();
	GetDiaryRoot(var_123_object);
	var_124_bool = var_123_object == 0; //@nz
	if(var_124_bool != 0) {
		Trace("Can't retrieve diary root");
		var_121_object = 0;
		return 2;
	}
	var_123_object = var_121_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_12890()
{
	SetVariable("b6q01", (int)1);
	func_14866();
	func_14892();
	var_132_bool = 0; var_133_string = ""; var_134_string = "";
	func_12648(var_132_bool, "quest_b6_01", "place_klara");
	return 0;
}


func_11870(var_0_object)
{
	var_168_float = GetByIndex(var_0_object, 0);
	var_169_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_168_float, var_169_float);
	return 0;
}


func_13919(var_1405_bool, var_1406_object)
{
	var_1407_bool = 0; var_1408_object = Obj(); var_1409_string = "";
	var_1406_object = var_1408_object;
	func_12579(var_1407_bool, var_1408_object, "b6q01_bull_blood");
	if(var_1407_bool != 0) {
		var_1405_bool = 1;
		return 0;
	}
	var_1405_bool = 0;
	return 0;
}


func_14944(var_112_bool, var_113_object, var_114_int)
{
	var_115_object = Obj(); var_116_object = Obj(); var_117_int = 0; var_118_object = Obj(); var_119_object = Obj(); var_120_int = 0;
	func_14931(Obj());
	var_121_object = var_118_object;
	@@var_118_object:Find(var_114_int, var_119_object);
	var_126_bool = var_119_object == 0; //@nz
	if(var_126_bool != 0) {
		var_128_int = "Can't find diary parent with id: " + var_114_int;
		Trace(var_128_int);
		var_112_bool = 0;
		return 6;
	}
	@@var_119_object:AddChild(var_113_object);
	SendWorldWndMessage((int)7);
	@@var_113_object:GetCategory(var_120_int);
	SetDiarySection(var_120_int);
	var_112_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_8799(var_0_object, var_1771_int, var_1772_object)
{
	var_1774_object = Obj(); var_1775_bool = 0; var_1776_int = 0; var_1777_bool = 0; var_1778_object = Obj(); var_1779_bool = 0; var_1780_int = 0; var_1781_bool = 0;
	var_0_object = var_1772_object;
	var_1782_bool = 0; var_1783_object = Obj(); var_1784_float = 0;
	var_1772_object = var_1783_object;
	func_12166(var_1782_bool, var_1783_object, (float)70.0);
	var_1785_bool = var_1782_bool == 0; //@nz
	if(var_1785_bool != 0) {
		var_1771_int = -2;
		return 8;
	}
	CreateDialog(var_1778_object);
	var_1786_int = 0;
	func_12725(var_1786_int);
	@@var_1778_object:SetNPCName(var_1786_int);
	var_1787_int = 0;
	func_12723(var_1787_int);
	@@var_1778_object:SetNPCDescription(var_1787_int);
	var_1788_string = "";
	func_12727(var_1788_string);
	@@var_1778_object:SetPhoto(var_1788_string);
	var_1789_string = "";
	func_12729(var_1789_string);
	@@var_1778_object:SetPhoto2(var_1789_string);
	var_1790_int = 0;
	func_15022(var_1790_int);
	@@var_1778_object:SetPlayerName(var_1790_int);
	IsOverrideActive(var_1779_bool);
	var_1791_bool = var_1779_bool;
	if(var_1791_bool != 0) {
		var_1771_int = -2;
		return 8;
	}
	DoDialog(var_1778_object);
	var_1792_bool = 0; var_1793_object = Obj();
	func_12444(Obj());
	var_1794_object = var_1793_object;
	func_12253(var_1792_bool, var_1793_object);
	var_1795_object = Obj(); var_1796_object = Obj();
	var_1772_object = var_1795_object;
	var_1778_object = var_1796_object;
	TaskCall(21);
	func_8880(var_1797_object, var_1798_object, var_1799_string, var_1800_bool, var_1795_object, var_1796_object);
	TaskReturn();
	@@var_1778_object:IsDialogEnd(var_1781_bool);
	
Label_8862:
	var_1869_bool = var_1781_bool == 0; //@nz
	if(var_1869_bool != 0) {
		sync();
		@@var_1778_object:IsDialogEnd(var_1781_bool);
		goto Label_8862;
	}
	var_1772_object = Obj();
	func_12235();
	StopDialog(var_1778_object);
	@@var_1778_object:GetReturnValue((int)-1);
	var_1780_int = var_1771_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_11875(var_99_bool)
{
	var_100_object = Obj(); var_101_bool = 0; var_102_object = Obj(); var_103_bool = 0;
	FindActor(var_102_object, "player");
	var_105_bool = var_102_object == 0; //@nz
	if(var_105_bool != 0) {
		var_99_bool = 0;
		return 4;
	}
	var_106_float = 0; var_107_object = Obj();
	var_102_object = var_107_object;
	func_12093(var_106_float, var_107_object);
	var_115_bool = var_106_float > (float)90000.0;
	if(var_115_bool != 0) {
		var_99_bool = 0;
		return 4;
	}
	CanSee(var_103_bool, var_102_object);
	var_103_bool = var_99_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_13930(var_1410_bool)
{
	var_1412_int = 0; var_1413_string = "";
	func_12471(var_1412_int, "oob6Danko2");
	var_1415_bool = var_1412_int == (int)0;
	if(var_1415_bool != 0) {
		var_1410_bool = 1;
		return 0;
	}
	var_1410_bool = 0;
	return 0;
}


func_12907()
{
	SetVariable("oob2Danko1", (int)1);
	return 0;
}


func_12913()
{
	SetVariable("oob2Danko2", (int)1);
	return 0;
}


func_13942(var_1420_bool)
{
	var_1422_int = 0; var_1423_string = "";
	func_12471(var_1422_int, "b6q01");
	var_1425_bool = var_1422_int == (int)1000;
	if(var_1425_bool != 0) {
		var_1420_bool = 1;
		return 0;
	}
	var_1420_bool = 0;
	return 0;
}


func_12919()
{
	SetVariable("oob2Danko3", (int)1);
	return 0;
}


func_11897()
{
	var_2112_float = 0; var_2113_float = 0;
	rand(var_2113_float, (int)8, (int)16);
	SetTimer((int)10, var_2113_float);
	return 2;
}


func_14972(var_185_object)
{
	var_186_object = Obj(); var_187_object = Obj(); var_188_object = Obj(); var_189_object = Obj();
	GetMainOutdoorScene(var_188_object);
	var_190_bool = var_188_object == 0; //@ne
	if(var_190_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_189_object = 0;
		var_189_object = var_185_object;
		return 4;
	}
	@@var_188_object:GetMap(var_189_object);
	var_189_object = var_185_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_12925()
{
	SetVariable("b2DankoTalk", (int)1);
	return 0;
}


func_13954(var_1269_bool)
{
	var_1271_int = 0; var_1272_string = "";
	func_12471(var_1271_int, "b5q01MicroscopeCS");
	var_1274_bool = var_1271_int != (int)0;
	if(var_1274_bool != 0) {
		var_1269_bool = 1;
		return 0;
	}
	var_1269_bool = 0;
	return 0;
}


func_12931()
{
	SetVariable("oob2Danko4", (int)1);
	return 0;
}


func_11906()
{
	KillTimer((int)10);
	return 0;
}


func_12937()
{
	var_105_object = Obj(); var_106_object = Obj();
	func_14972(Obj());
	var_107_object = var_106_object;
	var_118_float = 0;
	func_12660(var_118_float);
	@@var_106_object:AddMark("b2DankoGotoMladVlad", "pt_map_mladvlad", (int)3, (int)520955, var_118_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_14989(var_182_object, var_183_string, var_184_float)
{
	var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_object = Obj(); var_195_bool = 0; var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_object = Obj(); var_199_bool = 0;
	GetMainOutdoorScene(var_198_object);
	var_200_bool = var_198_object == 0; //@ne
	if(var_200_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_198_object:GetLocator(var_183_string, var_199_bool, var_196_cvector, var_197_cvector);
	var_202_bool = var_199_bool == 0; //@nz
	if(var_202_bool != 0) {
		var_204_int = "Warning: outdoor scene locator " + var_183_string;
		var_206_int = var_204_int + " doesnt exist";
		Trace(var_206_int);
	}
	@@var_198_object:GetMap(var_182_object);
	var_207_bool = var_182_object == 0; //@ne
	if(var_207_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_209_float = GetByIndex(var_196_cvector, 0);
	var_210_float = GetByIndex(var_196_cvector, 2);
	@@var_182_object:SetMapParams(var_209_float, var_210_float, var_184_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_13966(var_1312_bool)
{
	var_1314_int = 0; var_1315_string = "";
	func_12471(var_1314_int, "b5q01");
	var_1317_bool = var_1314_int == (int)1000;
	if(var_1317_bool != 0) {
		var_1312_bool = 1;
		return 0;
	}
	var_1312_bool = 0;
	return 0;
}


func_10903(var_0_object, var_1_object, var_2_object, var_3_string, var_438_object, var_439_object)
{
	var_0_object = var_439_object;
	var_1_object = var_438_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_445_string = "";
		func_10961(var_439_object, "Neutral");
		@@@var_0_object:SetMessage((int)529910);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529911, (int)-1, (int)31294);
		@@@var_0_object:AddReply((int)529912, (int)-1, (int)31295);
		goto Label_10931;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2a9b";
	}
Label_10931:
	var_460_bool = 0;
	func_12731(var_460_bool);
	if(var_460_bool != 0) {

	Label_10935:
		lshWaitForAnimEnd();
		var_461_string = var_3_string;
		if(var_461_string != 0) {
		} else {
			var_462_string = "";
			var_462_string = var_2_object;
			func_12391(var_462_string);
			goto Label_10935;
	}
		PlayAnimation("all", "idle");

	Label_10950:
		WaitForAnimEnd();
		var_465_string = var_3_string;
		if(var_465_string != 0) {
			goto Label_10960;
		}
		PlayAnimation("all", "idle");
		goto Label_10950;
	}
	goto Label_10960;
	
Label_10960:
	return 0;
	
}


func_12953()
{
	var_99_object = Obj(); var_100_object = Obj();
	SetVariable("b7q01", (int)1);
	func_14972(Obj());
	var_103_object = var_100_object;
	var_114_float = 0;
	func_12660(var_114_float);
	@@var_100_object:AddMark("b7q01DankoGotoSobor", "pt_map_aglaja", (int)1, (int)521021, var_114_float);
	func_14905();
	func_14918();
	var_148_bool = 0; var_149_string = ""; var_150_string = "";
	func_12648(var_148_bool, "quest_b7_01", "init_sobor");
	return 2;
}
EMIT "Stack[-1] = 0";


func_13978(var_1848_bool)
{
	var_1850_int = 0; var_1851_string = "";
	func_12471(var_1850_int, "b11q04");
	var_1853_bool = var_1850_int == (int)3;
	if(var_1853_bool != 0) {
		var_1848_bool = 1;
		return 0;
	}
	var_1848_bool = 0;
	return 0;
}


func_9885(var_2_object, var_1926_string)
{
	var_1927_bool = 0;
	func_12731(var_1927_bool);
	var_1928_bool = var_1927_bool == 0; //@nz
	if(var_1928_bool != 0) {
		return 0;
	}
	var_1929_bool = var_1926_string == var_2_object;
	if(var_1929_bool != 0) {
		return 0;
	}
	var_1930_string = ""; var_1931_bool = 0;
	var_1926_string = var_1930_string;
	var_1933_bool = var_1926_string == "";
	if(var_1933_bool != 0) {
		var_1931_bool = 0;
	} else {
		var_1931_bool = 1;
	}
	func_12407(var_1930_string, var_1931_bool);
	var_2_object = var_1926_string;
	return 0;
	
}


func_13990(var_758_bool)
{
	var_760_int = 0; var_761_string = "";
	func_12471(var_760_int, "b2q01");
	var_763_bool = var_760_int < (int)3;
	if(var_763_bool != 0) {
		var_758_bool = 1;
		return 0;
	}
	var_758_bool = 0;
	return 0;
}


func_15022(var_177_int)
{
	var_178_int = 0; var_179_int = 0;
	GetVariable("branch", var_179_int);
	var_182_bool = var_179_int == (int)0;
	if(var_182_bool != 0) {
		var_177_int = 1;
		return 2;
	EMIT "GOTO 0x3abd";
	}
	var_184_bool = var_179_int == (int)1;
	if(var_184_bool != 0) {
		var_177_int = 2;
		return 2;
	}
	var_177_int = 3;
	return 2;
}


func_8880(var_0_object, var_1_object, var_2_object, var_3_string, var_1795_object, var_1796_object)
{
	var_0_object = var_1796_object;
	var_1_object = var_1795_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1802_bool = 0; var_1803_object = Obj();
		var_1803_object = var_1_object;
		func_13813(var_1803_object);
		if(var_1802_bool != 0) {
			var_1808_object = Obj(); var_1809_object = Obj();
			var_1808_object = var_1_object;
			var_1809_object = var_0_object;
			func_13070();
			var_1812_string = "";
			func_8998(var_1796_object, "Menace");
			@@@var_0_object:SetMessage((int)522061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523529, (int)24763, (int)24762);
		} else {
				var_1832_string = "";
				func_8998(var_1796_object, "Neutral");
				@@@var_0_object:SetMessage((int)522063);
				@@@var_0_object:ClearReplies();
				var_1834_bool = 0; var_1835_object = Obj();
				var_1835_object = var_1_object;
				func_13907(var_1835_object);
				if(var_1834_bool != 0) {
					@@@var_0_object:AddReply((int)523535, (int)24769, (int)24768);
				}
				var_1843_bool = 0; var_1844_object = Obj();
				var_1844_object = var_1_object;
				func_13907(var_1844_object);
				if(var_1843_bool != 0) {
					@@@var_0_object:AddReply((int)523537, (int)24771, (int)24770);
				}
				var_1848_bool = 0; var_1849_object = Obj();
				var_1849_object = var_1_object;
				func_13978(var_1849_object);
				if(var_1848_bool != 0) {
					@@@var_0_object:AddReply((int)530525, (int)32707, (int)31884);
				}
				var_1857_bool = 0; var_1858_object = Obj();
				var_1858_object = var_1_object;
				func_14061(var_1858_object);
				if(var_1857_bool != 0) {
					@@@var_0_object:AddReply((int)531113, (int)32712, (int)32431);
				}
				@@@var_0_object:AddReply((int)522064, (int)-1, (int)23233);
				goto Label_8968;
		}
	}
Label_8968:
	var_1824_bool = 0;
	func_12731(var_1824_bool);
	if(var_1824_bool != 0) {

	Label_8972:
		lshWaitForAnimEnd();
		var_1825_string = var_3_string;
		if(var_1825_string != 0) {
		} else {
			var_1826_string = "";
			var_1826_string = var_2_object;
			func_12391(var_1826_string);
			goto Label_8972;
	}
		PlayAnimation("all", "idle");

	Label_8987:
		WaitForAnimEnd();
		var_1829_string = var_3_string;
		if(var_1829_string != 0) {
			goto Label_8997;
		}
		PlayAnimation("all", "idle");
		goto Label_8987;

	}
	goto Label_8997;
	
Label_8997:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x22b4";


func_14002(var_804_bool)
{
	var_806_int = 0; var_807_string = "";
	func_12471(var_806_int, "b2q01");
	var_809_bool = var_806_int == (int)3;
	if(var_809_bool != 0) {
		var_804_bool = 1;
		return 0;
	}
	var_804_bool = 0;
	return 0;
}


func_12984(var_167_object)
{
	var_168_object = Obj(); var_169_string = ""; var_170_float = 0;
	func_14972(Obj());
	var_171_object = var_168_object;
	func_14989(var_168_object, "pt_map_aglaja", (float)2);
	var_191_object = Obj();
	func_14972(var_191_object);
	@@var_167_object:ShowMap(var_191_object);
	return 0;
}


func_14014(var_845_bool)
{
	var_847_int = 0; var_848_string = "";
	func_12471(var_847_int, "b2q01");
	var_850_bool = var_847_int == (int)4;
	if(var_850_bool != 0) {
		var_845_bool = 1;
		return 0;
	}
	var_845_bool = 0;
	return 0;
}


func_15039(var_1968_object, var_1969_bool, var_1970_int)
{
	@@var_1968_object:add((int)6);
	@@var_1968_object:add((int)26);
	@@var_1968_object:add((int)2);
	@@var_1968_object:add((int)22);
	var_1976_bool = var_1969_bool == (bool)0;
	if(var_1976_bool != 0) {
		@@var_1968_object:add((int)15);
		@@var_1968_object:add((int)5);
		@@var_1968_object:add((int)16);
	} else {
		var_1981_bool = var_1970_int != (int)0;
		if(var_1981_bool == 0) goto Label_15071;
		@@var_1968_object:add((int)15);
	}
Label_15071:
	return 0;
	
}


func_13000()
{
	SetVariable("oob8Danko1", (int)1);
	return 0;
}


func_14026(var_855_bool)
{
	var_857_int = 0; var_858_string = "";
	func_12471(var_857_int, "b2q01MicroscopeCS");
	var_860_bool = var_857_int != (int)0;
	if(var_860_bool != 0) {
		var_855_bool = 1;
		return 0;
	}
	var_855_bool = 0;
	return 0;
}


func_13006()
{
	SetVariable("oob8DankoStop", (int)1);
	return 0;
}


func_7886(var_2_object, var_1674_string)
{
	var_1675_bool = 0;
	func_12731(var_1675_bool);
	var_1676_bool = var_1675_bool == 0; //@nz
	if(var_1676_bool != 0) {
		return 0;
	}
	var_1677_bool = var_1674_string == var_2_object;
	if(var_1677_bool != 0) {
		return 0;
	}
	var_1678_string = ""; var_1679_bool = 0;
	var_1674_string = var_1678_string;
	var_1681_bool = var_1674_string == "";
	if(var_1681_bool != 0) {
		var_1679_bool = 0;
	} else {
		var_1679_bool = 1;
	}
	func_12407(var_1678_string, var_1679_bool);
	var_2_object = var_1674_string;
	return 0;
	
}


func_10961(var_2_object, var_445_string)
{
	var_446_bool = 0;
	func_12731(var_446_bool);
	var_447_bool = var_446_bool == 0; //@nz
	if(var_447_bool != 0) {
		return 0;
	}
	var_448_bool = var_445_string == var_2_object;
	if(var_448_bool != 0) {
		return 0;
	}
	var_449_string = ""; var_450_bool = 0;
	var_445_string = var_449_string;
	var_452_bool = var_445_string == "";
	if(var_452_bool != 0) {
		var_450_bool = 0;
	} else {
		var_450_bool = 1;
	}
	func_12407(var_449_string, var_450_bool);
	var_2_object = var_445_string;
	return 0;
	
}


func_13012()
{
	SetVariable("oob8Danko2", (int)1);
	return 0;
}


func_14038(var_997_bool, var_998_object)
{
	var_999_bool = 0; var_1000_object = Obj(); var_1001_string = "";
	var_998_object = var_1000_object;
	func_12579(var_999_bool, var_1000_object, "organ_combination");
	if(var_999_bool != 0) {
		var_997_bool = 1;
		return 0;
	}
	var_997_bool = 0;
	return 0;
}


func_6871(var_0_object, var_1509_int, var_1510_object)
{
	var_1512_object = Obj(); var_1513_bool = 0; var_1514_int = 0; var_1515_bool = 0; var_1516_object = Obj(); var_1517_bool = 0; var_1518_int = 0; var_1519_bool = 0;
	var_0_object = var_1510_object;
	var_1520_bool = 0; var_1521_object = Obj(); var_1522_float = 0;
	var_1510_object = var_1521_object;
	func_12166(var_1520_bool, var_1521_object, (float)70.0);
	var_1523_bool = var_1520_bool == 0; //@nz
	if(var_1523_bool != 0) {
		var_1509_int = -2;
		return 8;
	}
	CreateDialog(var_1516_object);
	var_1524_int = 0;
	func_12725(var_1524_int);
	@@var_1516_object:SetNPCName(var_1524_int);
	var_1525_int = 0;
	func_12723(var_1525_int);
	@@var_1516_object:SetNPCDescription(var_1525_int);
	var_1526_string = "";
	func_12727(var_1526_string);
	@@var_1516_object:SetPhoto(var_1526_string);
	var_1527_string = "";
	func_12729(var_1527_string);
	@@var_1516_object:SetPhoto2(var_1527_string);
	var_1528_int = 0;
	func_15022(var_1528_int);
	@@var_1516_object:SetPlayerName(var_1528_int);
	IsOverrideActive(var_1517_bool);
	var_1529_bool = var_1517_bool;
	if(var_1529_bool != 0) {
		var_1509_int = -2;
		return 8;
	}
	DoDialog(var_1516_object);
	var_1530_bool = 0; var_1531_object = Obj();
	func_12444(Obj());
	var_1532_object = var_1531_object;
	func_12253(var_1530_bool, var_1531_object);
	var_1533_object = Obj(); var_1534_object = Obj();
	var_1510_object = var_1533_object;
	var_1516_object = var_1534_object;
	TaskCall(17);
	func_6952(var_1535_object, var_1536_object, var_1537_string, var_1538_bool, var_1533_object, var_1534_object);
	TaskReturn();
	@@var_1516_object:IsDialogEnd(var_1519_bool);
	
Label_6934:
	var_1625_bool = var_1519_bool == 0; //@nz
	if(var_1625_bool != 0) {
		sync();
		@@var_1516_object:IsDialogEnd(var_1519_bool);
		goto Label_6934;
	}
	var_1510_object = Obj();
	func_12235();
	StopDialog(var_1516_object);
	@@var_1516_object:GetReturnValue((int)-1);
	var_1518_int = var_1509_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_13018()
{
	SetVariable("b10q01", (int)1);
	func_14580();
	func_14619();
	return 0;
}


func_15072(var_1994_bool, var_1995_int)
{
	var_1996_int = 0; var_1997_int = 0;
	var_1999_int = "vol_" + var_1995_int;
	GetVariable(var_1999_int, var_1997_int);
	var_2001_int = var_1997_int & (int)4;
	var_1994_bool = var_2001_int != (int)0;
	return 2;
}


func_14049(var_1427_bool)
{
	var_1429_int = 0; var_1430_string = "";
	func_12471(var_1429_int, "b6q01MicroscopeCS");
	var_1432_bool = var_1429_int != (int)0;
	if(var_1432_bool != 0) {
		var_1427_bool = 1;
		return 0;
	}
	var_1427_bool = 0;
	return 0;
}


func_13030()
{
	func_14606();
	var_162_bool = 0; var_163_string = ""; var_164_string = "";
	func_12648(var_162_bool, "quest_b10_01", "completed");
	return 0;
}


func_15082(var_1985_bool, var_1986_int)
{
	var_1987_int = 0; var_1988_int = 0;
	var_1990_int = "vol_" + var_1986_int;
	GetVariable(var_1990_int, var_1988_int);
	var_1992_int = var_1988_int & (int)16;
	var_1985_bool = var_1992_int != (int)0;
	return 2;
}


func_14061(var_1857_bool)
{
	var_1859_int = 0; var_1860_string = "";
	func_12471(var_1859_int, "b11q02");
	var_1862_bool = var_1859_int == (int)1;
	if(var_1862_bool != 0) {
		var_1857_bool = 1;
		return 0;
	}
	var_1857_bool = 0;
	return 0;
}


func_13040()
{
	SetVariable("oob10Danko1", (int)1);
	return 0;
}


func_12017()
{
	var_95_int = 0; var_96_int = 0; var_97_bool = 0; var_98_int = 0; var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_int = 0; var_103_bool = 0; var_104_int = 0; var_105_int = 0; var_106_bool = 0;
	WaitForAnimEnd();
	var_107_bool = 0;
	func_12161(var_107_bool);
	var_108_bool = var_107_bool == 0; //@nz
	if(var_108_bool != 0) {
		return 12;
	}
	func_12706((int)0);
	var_109_int = var_101_int;
	var_102_int = 0;
	
Label_12031:
	var_122_bool = 0;
	var_122_bool = 0;
	var_124_bool = var_102_int < (int)5;
	if(var_124_bool != 0) {
		var_125_bool = 0;
		func_12161(var_125_bool);
		if(var_125_bool != 0) {
			var_122_bool = 1;
		}
	}
	if(var_122_bool != 0) {
		var_126_bool = var_101_int == 0; //@nz
		if(var_126_bool != 0) {
			Sleep((int)3, var_103_bool);
			var_128_bool = var_103_bool == 0; //@nz
			if(var_128_bool != 0) {
			} else {
		} else {
				irand(var_104_int, var_101_int);
				irand(var_105_int, (int)5);
				var_134_bool = var_105_int != (int)0;
				if(var_134_bool != 0) {
					var_104_int = 0;
				}
				var_136_string = ""; var_137_int = 0;
				var_104_int = var_137_int;
				func_12699(var_136_string, var_137_int);
				PlayAnimation("all", var_136_string);
				WaitForAnimEnd(var_106_bool);
				var_138_bool = var_106_bool == 0; //@nz
				if(var_138_bool == 0) goto Label_12072;
				goto Label_12083;
		}
		Label_12072:
			var_129_bool = 0;
			func_12086(var_129_bool);
			var_130_bool = var_129_bool == 0; //@nz
			if(var_130_bool != 0) {
				goto Label_12083;
			}
			ResetAAS();
			var_102_int = var_102_int + (int)1;
			goto Label_12031;

		}
	}
Label_12083:
	ResetAAS();
	return 12;
	
}


func_15092(var_1959_bool)
{
	var_1960_object = Obj(); var_1961_int = 0; var_1962_int = 0; var_1963_int = 0; var_1964_object = Obj(); var_1965_int = 0; var_1966_int = 0; var_1967_int = 0;
	CreateIntVector(var_1964_object);
	var_1968_object = Obj(); var_1969_bool = 0; var_1970_int = 0;
	var_1964_object = var_1968_object;
	func_15039(var_1968_object, (bool)0, (int)-1);
	@@var_1964_object:size(var_1965_int);
	var_1966_int = 0;
	
Label_15104:
	var_1983_bool = var_1966_int < var_1965_int;
	if(var_1983_bool != 0) {
		@@var_1964_object:get(var_1967_int, var_1966_int);
		var_1984_bool = 0;
		var_1984_bool = 1;
		var_1985_bool = 0; var_1986_int = 0;
		var_1967_int = var_1986_int;
		func_15082(var_1985_bool, var_1986_int);
		if(var_1985_bool != 1) {
			var_1994_bool = 0; var_1995_int = 0;
			var_1967_int = var_1995_int;
			func_15072(var_1994_bool, var_1995_int);
			if(var_1994_bool != 1) {
				var_1984_bool = 0;
			}
		}
		if(var_1984_bool != 0) {
			var_1959_bool = 0;
			var_1966_int = var_1966_int + (int)1;
			goto Label_15104;
		}
		return 8;
	}
	var_1959_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_13046()
{
	SetVariable("b10q01", (int)4);
	func_14593();
	return 0;
}


func_14073(var_1002_bool)
{
	var_1004_int = 0; var_1005_string = "";
	func_12471(var_1004_int, "oob3Danko3");
	var_1007_bool = var_1004_int == (int)0;
	if(var_1007_bool != 0) {
		var_1002_bool = 1;
		return 0;
	}
	var_1002_bool = 0;
	return 0;
}


func_13055()
{
	SetVariable("b10q01DankoTalk", (int)1);
	return 0;
}


func_13061()
{
	SetVariable("b11q01KnowWhoKilled", (int)1);
	func_14632();
	return 0;
}


func_14085(var_2004_bool)
{
	var_2006_int = 0; var_2007_string = "";
	func_12471(var_2006_int, "b12q01DankoInSobor");
	var_2009_bool = var_2006_int != (int)0;
	if(var_2009_bool != 0) {
		var_2004_bool = 1;
		return 0;
	}
	var_2004_bool = 0;
	return 0;
}


func_13070()
{
	SetVariable("oob11Danko1", (int)1);
	return 0;
}


func_14097(var_947_bool, var_948_object)
{
	var_949_bool = 0;
	var_949_bool = 1;
	var_950_bool = 0;
	var_950_bool = 1;
	var_951_bool = 0;
	var_951_bool = 1;
	var_952_bool = 0;
	var_952_bool = 1;
	var_953_bool = 0; var_954_object = Obj(); var_955_string = "";
	var_948_object = var_954_object;
	func_12579(var_953_bool, var_954_object, "diseased_blood");
	if(var_953_bool != 1) {
		var_956_bool = 0; var_957_object = Obj(); var_958_string = "";
		var_948_object = var_957_object;
		func_12579(var_956_bool, var_957_object, "diseased_heart");
		if(var_956_bool != 1) {
			var_952_bool = 0;
		}
	}
	if(var_952_bool != 1) {
		var_959_bool = 0; var_960_object = Obj(); var_961_string = "";
		var_948_object = var_960_object;
		func_12579(var_959_bool, var_960_object, "diseased_kidney");
		if(var_959_bool != 1) {
			var_951_bool = 0;
		}
	}
	if(var_951_bool != 1) {
		var_962_bool = 0; var_963_object = Obj(); var_964_string = "";
		var_948_object = var_963_object;
		func_12579(var_962_bool, var_963_object, "diseased_liver");
		if(var_962_bool != 1) {
			var_950_bool = 0;
		}
	}
	if(var_950_bool != 1) {
		var_965_bool = 0; var_966_object = Obj(); var_967_string = "";
		var_948_object = var_966_object;
		func_12579(var_965_bool, var_966_object, "d3q01_blood");
		if(var_965_bool != 1) {
			var_949_bool = 0;
		}
	}
	if(var_949_bool != 0) {
		var_947_bool = 1;
		return 0;
	}
	var_947_bool = 0;
	return 0;
}


func_11025(var_0_object, var_472_int, var_473_object)
{
	var_475_object = Obj(); var_476_bool = 0; var_477_int = 0; var_478_bool = 0; var_479_object = Obj(); var_480_bool = 0; var_481_int = 0; var_482_bool = 0;
	var_0_object = var_473_object;
	var_483_bool = 0; var_484_object = Obj(); var_485_float = 0;
	var_473_object = var_484_object;
	func_12166(var_483_bool, var_484_object, (float)70.0);
	var_486_bool = var_483_bool == 0; //@nz
	if(var_486_bool != 0) {
		var_472_int = -2;
		return 8;
	}
	CreateDialog(var_479_object);
	var_487_int = 0;
	func_12725(var_487_int);
	@@var_479_object:SetNPCName(var_487_int);
	var_488_int = 0;
	func_12723(var_488_int);
	@@var_479_object:SetNPCDescription(var_488_int);
	var_489_string = "";
	func_12727(var_489_string);
	@@var_479_object:SetPhoto(var_489_string);
	var_490_string = "";
	func_12729(var_490_string);
	@@var_479_object:SetPhoto2(var_490_string);
	var_491_int = 0;
	func_15022(var_491_int);
	@@var_479_object:SetPlayerName(var_491_int);
	IsOverrideActive(var_480_bool);
	var_492_bool = var_480_bool;
	if(var_492_bool != 0) {
		var_472_int = -2;
		return 8;
	}
	DoDialog(var_479_object);
	var_493_bool = 0; var_494_object = Obj();
	func_12444(Obj());
	var_495_object = var_494_object;
	func_12253(var_493_bool, var_494_object);
	var_496_object = Obj(); var_497_object = Obj();
	var_473_object = var_496_object;
	var_479_object = var_497_object;
	TaskCall(29);
	func_11106(var_498_object, var_499_object, var_500_string, var_501_bool, var_496_object, var_497_object);
	TaskReturn();
	@@var_479_object:IsDialogEnd(var_482_bool);
	
Label_11088:
	var_526_bool = var_482_bool == 0; //@nz
	if(var_526_bool != 0) {
		sync();
		@@var_479_object:IsDialogEnd(var_482_bool);
		goto Label_11088;
	}
	var_473_object = Obj();
	func_12235();
	StopDialog(var_479_object);
	@@var_479_object:GetReturnValue((int)-1);
	var_481_int = var_472_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_13076()
{
	SetVariable("oob12Danko1", (int)1);
	return 0;
}


func_3865(var_0_object, var_647_int, var_648_object)
{
	var_650_object = Obj(); var_651_bool = 0; var_652_int = 0; var_653_bool = 0; var_654_object = Obj(); var_655_bool = 0; var_656_int = 0; var_657_bool = 0;
	var_0_object = var_648_object;
	var_658_bool = 0; var_659_object = Obj(); var_660_float = 0;
	var_648_object = var_659_object;
	func_12166(var_658_bool, var_659_object, (float)70.0);
	var_661_bool = var_658_bool == 0; //@nz
	if(var_661_bool != 0) {
		var_647_int = -2;
		return 8;
	}
	CreateDialog(var_654_object);
	var_662_int = 0;
	func_12725(var_662_int);
	@@var_654_object:SetNPCName(var_662_int);
	var_663_int = 0;
	func_12723(var_663_int);
	@@var_654_object:SetNPCDescription(var_663_int);
	var_664_string = "";
	func_12727(var_664_string);
	@@var_654_object:SetPhoto(var_664_string);
	var_665_string = "";
	func_12729(var_665_string);
	@@var_654_object:SetPhoto2(var_665_string);
	var_666_int = 0;
	func_15022(var_666_int);
	@@var_654_object:SetPlayerName(var_666_int);
	IsOverrideActive(var_655_bool);
	var_667_bool = var_655_bool;
	if(var_667_bool != 0) {
		var_647_int = -2;
		return 8;
	}
	DoDialog(var_654_object);
	var_668_bool = 0; var_669_object = Obj();
	func_12444(Obj());
	var_670_object = var_669_object;
	func_12253(var_668_bool, var_669_object);
	var_671_object = Obj(); var_672_object = Obj();
	var_648_object = var_671_object;
	var_654_object = var_672_object;
	TaskCall(7);
	func_3946(var_673_object, var_674_object, var_675_string, var_676_bool, var_671_object, var_672_object);
	TaskReturn();
	@@var_654_object:IsDialogEnd(var_657_bool);
	
Label_3928:
	var_723_bool = var_657_bool == 0; //@nz
	if(var_723_bool != 0) {
		sync();
		@@var_654_object:IsDialogEnd(var_657_bool);
		goto Label_3928;
	}
	var_648_object = Obj();
	func_12235();
	StopDialog(var_654_object);
	@@var_654_object:GetReturnValue((int)-1);
	var_656_int = var_647_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_13082()
{
	SetVariable("b12q01DankoInSobor", (int)1);
	func_14684();
	return 0;
}


func_15130(var_109_object)
{
	var_110_int = 0; var_111_int = 0;
	GetVariable("mt_danko", var_111_int);
	var_113_bool = var_111_int == 0; //@nz
	if(var_113_bool != 0) {
		var_114_int = 0; var_115_object = Obj();
		var_109_object = var_115_object;
		TaskCall(12);
		func_6153(var_116_object, var_114_int, var_115_object);
		TaskReturn();
		SetVariable("mt_danko", (int)1);
	}
	var_341_bool = 0; var_342_int = 0;
	func_12680(var_341_bool, (int)4);
	if(var_341_bool != 0) {
		var_356_int = 0; var_357_object = Obj();
		var_109_object = var_357_object;
		TaskCall(24);
		func_10619(var_358_object, var_356_int, var_357_object);
		TaskReturn();
		return 2;
	}
	var_412_bool = 0; var_413_int = 0;
	func_12680(var_412_bool, (int)5);
	if(var_412_bool != 0) {
		var_414_int = 0; var_415_object = Obj();
		var_109_object = var_415_object;
		TaskCall(26);
		func_10822(var_416_object, var_414_int, var_415_object);
		TaskReturn();
		return 2;
	}
	var_470_bool = 0; var_471_int = 0;
	func_12680(var_470_bool, (int)6);
	if(var_470_bool != 0) {
		var_472_int = 0; var_473_object = Obj();
		var_109_object = var_473_object;
		TaskCall(28);
		func_11025(var_474_object, var_472_int, var_473_object);
		TaskReturn();
		return 2;
	}
	var_528_bool = 0; var_529_int = 0;
	func_12680(var_528_bool, (int)7);
	if(var_528_bool != 0) {
		var_530_int = 0; var_531_object = Obj();
		var_109_object = var_531_object;
		TaskCall(30);
		func_11228(var_532_object, var_530_int, var_531_object);
		TaskReturn();
		return 2;
	}
	var_586_bool = 0; var_587_int = 0;
	func_12680(var_586_bool, (int)10);
	if(var_586_bool != 0) {
		var_588_int = 0; var_589_object = Obj();
		var_109_object = var_589_object;
		TaskCall(32);
		func_11431(var_590_object, var_588_int, var_589_object);
		TaskReturn();
		return 2;
	}
	var_644_bool = 0; var_645_int = 0;
	func_12674(var_644_bool, (int)1);
	if(var_644_bool != 0) {
		var_647_int = 0; var_648_object = Obj();
		var_109_object = var_648_object;
		TaskCall(6);
		func_3865(var_649_object, var_647_int, var_648_object);
		TaskReturn();
		return 2;
	}
	var_725_bool = 0; var_726_int = 0;
	func_12674(var_725_bool, (int)2);
	if(var_725_bool != 0) {
		var_727_int = 0; var_728_object = Obj();
		var_109_object = var_728_object;
		TaskCall(8);
		func_4256(var_729_object, var_727_int, var_728_object);
		TaskReturn();
		return 2;
	}
	var_885_bool = 0; var_886_int = 0;
	func_12674(var_885_bool, (int)3);
	if(var_885_bool != 0) {
		var_887_int = 0; var_888_object = Obj();
		var_109_object = var_888_object;
		TaskCall(0);
		func_0(var_889_object, var_887_int, var_888_object);
		TaskReturn();
		return 2;
	}
	var_1024_bool = 0; var_1025_int = 0;
	func_12674(var_1024_bool, (int)4);
	if(var_1024_bool != 0) {
		var_1026_int = 0; var_1027_object = Obj();
		var_109_object = var_1027_object;
		TaskCall(2);
		func_1210(var_1028_object, var_1026_int, var_1027_object);
		TaskReturn();
		return 2;
	}
	var_1152_bool = 0; var_1153_int = 0;
	func_12674(var_1152_bool, (int)5);
	if(var_1152_bool != 0) {
		var_1154_int = 0; var_1155_object = Obj();
		var_109_object = var_1155_object;
		TaskCall(4);
		func_2303(var_1156_object, var_1154_int, var_1155_object);
		TaskReturn();
		return 2;
	}
	var_1332_bool = 0; var_1333_int = 0;
	func_12674(var_1332_bool, (int)6);
	if(var_1332_bool != 0) {
		var_1334_int = 0; var_1335_object = Obj();
		var_109_object = var_1335_object;
		TaskCall(10);
		func_5451(var_1336_object, var_1334_int, var_1335_object);
		TaskReturn();
		return 2;
	}
	var_1441_bool = 0; var_1442_int = 0;
	func_12674(var_1441_bool, (int)7);
	if(var_1441_bool != 0) {
		var_1443_int = 0; var_1444_object = Obj();
		var_109_object = var_1444_object;
		TaskCall(14);
		func_6384(var_1445_object, var_1443_int, var_1444_object);
		TaskReturn();
		return 2;
	}
	var_1507_bool = 0; var_1508_int = 0;
	func_12674(var_1507_bool, (int)8);
	if(var_1507_bool != 0) {
		var_1509_int = 0; var_1510_object = Obj();
		var_109_object = var_1510_object;
		TaskCall(16);
		func_6871(var_1511_object, var_1509_int, var_1510_object);
		TaskReturn();
		return 2;
	}
	var_1627_bool = 0; var_1628_int = 0;
	func_12674(var_1627_bool, (int)10);
	if(var_1627_bool != 0) {
		var_1629_int = 0; var_1630_object = Obj();
		var_109_object = var_1630_object;
		TaskCall(18);
		func_7611(var_1631_object, var_1629_int, var_1630_object);
		TaskReturn();
		return 2;
	}
	var_1769_bool = 0; var_1770_int = 0;
	func_12674(var_1769_bool, (int)11);
	if(var_1769_bool != 0) {
		var_1771_int = 0; var_1772_object = Obj();
		var_109_object = var_1772_object;
		TaskCall(20);
		func_8799(var_1773_object, var_1771_int, var_1772_object);
		TaskReturn();
		return 2;
	}
	var_1871_bool = 0; var_1872_int = 0;
	func_12674(var_1871_bool, (int)12);
	if(var_1871_bool != 0) {
		var_1873_int = 0; var_1874_object = Obj();
		var_109_object = var_1874_object;
		TaskCall(22);
		func_9633(var_1875_object, var_1873_int, var_1874_object);
		TaskReturn();
		return 2;
	}
	var_2054_int = 0; var_2055_object = Obj();
	var_109_object = var_2055_object;
	TaskCall(34);
	func_11634(var_2056_object, var_2054_int, var_2055_object);
	TaskReturn();
	return 2;
}


func_13091()
{
	SetVariable("b12q01DankoVisit", (int)1);
	return 0;
}


func_8998(var_2_object, var_1812_string)
{
	var_1813_bool = 0;
	func_12731(var_1813_bool);
	var_1814_bool = var_1813_bool == 0; //@nz
	if(var_1814_bool != 0) {
		return 0;
	}
	var_1815_bool = var_1812_string == var_2_object;
	if(var_1815_bool != 0) {
		return 0;
	}
	var_1816_string = ""; var_1817_bool = 0;
	var_1812_string = var_1816_string;
	var_1819_bool = var_1812_string == "";
	if(var_1819_bool != 0) {
		var_1817_bool = 0;
	} else {
		var_1817_bool = 1;
	}
	func_12407(var_1816_string, var_1817_bool);
	var_2_object = var_1812_string;
	return 0;
	
}


func_6952(var_0_object, var_1_object, var_2_object, var_3_string, var_1533_object, var_1534_object)
{
	var_0_object = var_1534_object;
	var_1_object = var_1533_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1540_bool = 0; var_1541_object = Obj();
		var_1541_object = var_1_object;
		func_13647(var_1541_object);
		if(var_1540_bool != 0) {
			var_1546_object = Obj(); var_1547_object = Obj();
			var_1546_object = var_1_object;
			var_1547_object = var_0_object;
			func_13000();
			var_1550_object = Obj(); var_1551_object = Obj();
			var_1550_object = var_1_object;
			var_1551_object = var_0_object;
			func_13387();
			var_1554_string = "";
			func_7093(var_1534_object, "Smile");
			@@@var_0_object:SetMessage((int)521440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531320, (int)32648, (int)32647);
			@@@var_0_object:AddReply((int)531327, (int)32650, (int)32654);
		} else {
				var_1577_string = "";
				func_7093(var_1534_object, "Neutral");
				@@@var_0_object:SetMessage((int)521450);
				@@@var_0_object:ClearReplies();
				var_1579_bool = 0;
				var_1579_bool = 0;
				var_1580_bool = 0;
				var_1580_bool = 0;
				var_1581_bool = 0; var_1582_object = Obj();
				var_1582_object = var_1_object;
				func_13693(var_1582_object);
				var_1587_bool = var_1581_bool == 0; //@nz
				if(var_1587_bool != 0) {
					var_1588_bool = 0; var_1589_object = Obj();
					var_1589_object = var_1_object;
					func_13705(var_1589_object);
					if(var_1588_bool != 0) {
						var_1580_bool = 1;
					}
				}
				if(var_1580_bool != 0) {
					var_1594_bool = 0; var_1595_object = Obj();
					var_1595_object = var_1_object;
					func_13717(var_1595_object);
					if(var_1594_bool != 0) {
						var_1579_bool = 1;
					}
				}
				if(var_1579_bool != 0) {
					@@@var_0_object:AddReply((int)521451, (int)22630, (int)22629);
				}
				var_1603_bool = 0;
				var_1603_bool = 0;
				var_1604_bool = 0; var_1605_object = Obj();
				var_1605_object = var_1_object;
				func_14172(var_1605_object);
				if(var_1604_bool != 0) {
					var_1610_bool = 0; var_1611_object = Obj();
					var_1611_object = var_1_object;
					func_14184(var_1611_object);
					if(var_1610_bool != 0) {
						var_1603_bool = 1;
					}
				}
				if(var_1603_bool != 0) {
					@@@var_0_object:AddReply((int)534566, (int)36201, (int)36200);
				}
				@@@var_0_object:AddReply((int)521454, (int)-1, (int)22632);
				@@@var_0_object:AddReply((int)531341, (int)-1, (int)32672);
				goto Label_7063;
		}
	}
Label_7063:
	var_1569_bool = 0;
	func_12731(var_1569_bool);
	if(var_1569_bool != 0) {

	Label_7067:
		lshWaitForAnimEnd();
		var_1570_string = var_3_string;
		if(var_1570_string != 0) {
		} else {
			var_1571_string = "";
			var_1571_string = var_2_object;
			func_12391(var_1571_string);
			goto Label_7067;
	}
		PlayAnimation("all", "idle");

	Label_7082:
		WaitForAnimEnd();
		var_1574_string = var_3_string;
		if(var_1574_string != 0) {
			goto Label_7092;
		}
		PlayAnimation("all", "idle");
		goto Label_7082;

	}
	goto Label_7092;
	
Label_7092:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1b2c";


func_13097()
{
	SetVariable("oob12Danko2", (int)1);
	return 0;
}


func_13103()
{
	SetVariable("oob12Danko3", (int)1);
	return 0;
}


func_13109()
{
	SetVariable("oob11Danko2", (int)1);
	return 0;
}


func_12086(var_129_bool)
{
	var_129_bool = 1;
	return 0;
}


func_12088()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_13115(var_208_object)
{
	var_210_int = 0; var_211_int = 0;
	@@var_208_object:RemoveItemByType(var_211_int, "b5q01_heart_vera", (int)1);
	return 2;
}


func_12093(var_106_float, var_107_object)
{
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0);
	GetPosition(var_111_cvector);
	@@var_107_object:GetPosition(var_112_cvector);
	var_113_cvector = var_112_cvector - var_111_cvector;
	var_106_float = var_113_cvector | var_113_cvector;
	return 6;
}


func_13121(var_227_object)
{
	var_229_int = 0; var_230_int = 0;
	@@var_227_object:RemoveItemByType(var_230_int, "b5q01_heart_nude", (int)1);
	return 2;
}


func_14148(var_931_bool)
{
	var_933_int = 0; var_934_string = "";
	func_12471(var_933_int, "b3q04");
	var_936_bool = var_933_int == (int)0;
	if(var_936_bool != 0) {
		var_931_bool = 1;
		return 0;
	}
	var_931_bool = 0;
	return 0;
}


func_12101(var_145_bool, var_146_object, var_147_string)
{
	var_148_bool = 0; var_149_bool = 0;
	var_152_bool = IsFuncExist(var_146_object, "HasProperty", (int)2);
	var_153_bool = var_152_bool == 0; //@nz
	if(var_153_bool != 0) {
		var_145_bool = 0;
		return 2;
	}
	@@var_146_object:HasProperty(var_147_string, var_149_bool);
	var_149_bool = var_145_bool;
	return 2;
}


func_13127(var_286_object)
{
	var_288_int = 0; var_289_int = 0;
	@@var_286_object:RemoveItemByType(var_289_int, "b5q01_heart_butcher", (int)1);
	return 2;
}


func_13133(var_170_object)
{
	Trace("beta_pills 5 is given");
	var_173_object = Obj(); var_174_string = ""; var_175_int = 0;
	var_170_object = var_173_object;
	func_12566(var_173_object, "beta_pills", (int)5);
	return 0;
}


func_14160(var_941_bool)
{
	var_943_int = 0; var_944_string = "";
	func_12471(var_943_int, "b3q04");
	var_946_bool = var_943_int == (int)1;
	if(var_946_bool != 0) {
		var_941_bool = 1;
		return 0;
	}
	var_941_bool = 0;
	return 0;
}


func_12113(var_137_bool, var_138_object, var_139_string, var_140_float, var_141_float, var_142_float)
{
	var_143_float = 0; var_144_float = 0;
	var_145_bool = 0; var_146_object = Obj(); var_147_string = "";
	var_138_object = var_146_object;
	var_139_string = var_147_string;
	func_12101(var_145_bool, var_146_object, var_147_string);
	var_154_bool = var_145_bool == 0; //@nz
	if(var_154_bool != 0) {
		var_137_bool = 0;
		return 2;
	}
	@@var_138_object:GetProperty(var_139_string, var_144_float);
	var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_float = 0;
	var_156_float = var_144_float + var_140_float;
	var_141_float = var_157_float;
	var_142_float = var_158_float;
	func_12460(var_155_float, var_156_float, var_157_float, var_158_float);
	@@var_138_object:SetProperty(var_139_string, var_155_float);
	var_137_bool = 1;
	return 2;
}


func_13144()
{
	func_14879();
	var_171_bool = 0; var_172_string = ""; var_173_string = "";
	func_12648(var_171_bool, "quest_b6_01", "completed");
	return 0;
}


func_14172(var_1604_bool)
{
	var_1606_int = 0; var_1607_string = "";
	func_12471(var_1606_int, "b8DankoLetter2");
	var_1609_bool = var_1606_int != (int)0;
	if(var_1609_bool != 0) {
		var_1604_bool = 1;
		return 0;
	}
	var_1604_bool = 0;
	return 0;
}


func_13154()
{
	SetVariable("oob6Danko2", (int)1);
	return 0;
}


func_11106(var_0_object, var_1_object, var_2_object, var_3_string, var_496_object, var_497_object)
{
	var_0_object = var_497_object;
	var_1_object = var_496_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_503_string = "";
		func_11164(var_497_object, "Neutral");
		@@@var_0_object:SetMessage((int)529914);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529915, (int)-1, (int)31298);
		@@@var_0_object:AddReply((int)529916, (int)-1, (int)31299);
		goto Label_11134;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2b66";
	}
Label_11134:
	var_518_bool = 0;
	func_12731(var_518_bool);
	if(var_518_bool != 0) {

	Label_11138:
		lshWaitForAnimEnd();
		var_519_string = var_3_string;
		if(var_519_string != 0) {
		} else {
			var_520_string = "";
			var_520_string = var_2_object;
			func_12391(var_520_string);
			goto Label_11138;
	}
		PlayAnimation("all", "idle");

	Label_11153:
		WaitForAnimEnd();
		var_523_string = var_3_string;
		if(var_523_string != 0) {
			goto Label_11163;
		}
		PlayAnimation("all", "idle");
		goto Label_11153;
	}
	goto Label_11163;
	
Label_11163:
	return 0;
	
}


func_12135(var_269_object, var_270_string, var_271_int)
{
	var_272_int = 0; var_273_int = 0;
	@@var_269_object:GetProperty(var_270_string, var_273_int);
	var_274_int = var_273_int + var_271_int;
	@@var_269_object:SetProperty(var_270_string, var_274_int);
	return 2;
}


func_13160()
{
	var_220_bool = 0; var_221_string = ""; var_222_string = "";
	func_12648(var_220_bool, "quest_b5_01", "cutscene");
	return 0;
}


func_14184(var_1610_bool)
{
	var_1612_int = 0; var_1613_string = "";
	func_12471(var_1612_int, "oob8Danko3");
	var_1615_bool = var_1612_int == (int)0;
	if(var_1615_bool != 0) {
		var_1610_bool = 1;
		return 0;
	}
	var_1610_bool = 0;
	return 0;
}


func_3946(var_0_object, var_1_object, var_2_object, var_3_string, var_671_object, var_672_object)
{
	var_0_object = var_672_object;
	var_1_object = var_671_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_678_bool = 0;
		var_678_bool = 0;
		var_679_bool = 0; var_680_object = Obj();
		var_680_object = var_1_object;
		func_14430(var_680_object);
		var_687_bool = var_679_bool == 0; //@nz
		if(var_687_bool != 0) {
			var_688_bool = 0; var_689_object = Obj();
			var_689_object = var_1_object;
			func_14418(var_689_object);
			var_694_bool = var_688_bool == 0; //@nz
			if(var_694_bool != 0) {
				var_678_bool = 1;
			}
		}
		if(var_678_bool != 0) {
			var_695_string = "";
			func_4035(var_672_object, "Menace");
			@@@var_0_object:SetMessage((int)520217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520218, (int)21411, (int)21410);
			@@@var_0_object:AddReply((int)520222, (int)21415, (int)21414);
		} else {
				var_718_string = "";
				func_4035(var_672_object, "Smile");
				@@@var_0_object:SetMessage((int)520439);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520440, (int)-1, (int)21653);
				goto Label_4005;
		}
	}
Label_4005:
	var_710_bool = 0;
	func_12731(var_710_bool);
	if(var_710_bool != 0) {

	Label_4009:
		lshWaitForAnimEnd();
		var_711_string = var_3_string;
		if(var_711_string != 0) {
		} else {
			var_712_string = "";
			var_712_string = var_2_object;
			func_12391(var_712_string);
			goto Label_4009;
	}
		PlayAnimation("all", "idle");

	Label_4024:
		WaitForAnimEnd();
		var_715_string = var_3_string;
		if(var_715_string != 0) {
			goto Label_4034;
		}
		PlayAnimation("all", "idle");
		goto Label_4024;

	}
	goto Label_4034;
	
Label_4034:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xf6e";


func_12142(var_99_bool, var_100_cvector)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_bool = 0;
	GetPosition(var_104_cvector);
	var_105_cvector = var_100_cvector - var_104_cvector;
	var_107_float = GetByIndex(var_105_cvector, 0);
	var_108_float = GetByIndex(var_105_cvector, 2);
	Rotate(var_107_float, var_108_float, var_106_bool);
	var_106_bool = var_99_bool;
	return 6;
}


func_13167()
{
	func_14671();
	var_150_bool = 0; var_151_string = ""; var_152_string = "";
	func_12648(var_150_bool, "quest_b11_04", "completed");
	return 0;
}


func_14196(var_1397_bool, var_1398_object)
{
	var_1399_bool = 0; var_1400_object = Obj();
	var_1398_object = var_1400_object;
	func_14577(var_1400_object);
	if(var_1399_bool != 0) {
		var_1397_bool = 1;
		return 0;
	}
	var_1397_bool = 0;
	return 0;
}


func_12152(var_95_bool, var_96_object)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	@@var_96_object:GetPosition(var_98_cvector);
	var_99_bool = 0; var_100_cvector = CVector(0,0,0);
	var_98_cvector = var_100_cvector;
	func_12142(var_99_bool, var_100_cvector);
	var_99_bool = var_95_bool;
	return 2;
}


func_13177()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_14206(var_972_bool)
{
	var_974_int = 0; var_975_string = "";
	func_12471(var_974_int, "b3q02");
	var_977_bool = var_974_int == (int)2;
	if(var_977_bool != 0) {
		var_972_bool = 1;
		return 0;
	}
	var_972_bool = 0;
	return 0;
}


func_13183()
{
	SetVariable("b2q01", (int)4);
	func_14736();
	return 0;
}


func_12161(var_91_bool)
{
	var_92_bool = 0; var_93_bool = 0;
	IsLoaded(var_93_bool);
	var_93_bool = var_91_bool;
	return 2;
}


func_12166(var_125_bool, var_126_object, var_127_float)
{
	var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_bool = 0; var_136_bool = 0; var_137_float = 0; var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_bool = 0;
	@@var_126_object:GetPosition(var_138_cvector);
	@@var_126_object:GetEyesHeight(var_137_float);
	var_146_float = GetByIndex(var_138_cvector, 1);
	var_146_float = var_146_float + var_137_float;
	SetByIndex(var_138_cvector, 1) = var_146_float;
	GetPosition(var_139_cvector);
	GetEyesHeight(var_137_float);
	var_147_float = GetByIndex(var_139_cvector, 1);
	var_147_float = var_147_float + var_137_float;
	SetByIndex(var_139_cvector, 1) = var_147_float;
	var_140_cvector = var_138_cvector - var_139_cvector;
	var_148_float = GetByIndex(var_140_cvector, 1);
	SetByIndex(var_140_cvector, 1) = (float)0;
	var_149_int = var_140_cvector | var_140_cvector;
	var_150_float = sqrt(var_149_int);
	var_140_cvector = var_140_cvector / var_150_float;
	var_141_cvector = -var_140_cvector;
	var_151_float = var_140_cvector * var_127_float;
	var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0);
	var_153_cvector = var_141_cvector ^ CVector(0.0, 1.0, 0.0);
	func_12450(var_152_cvector, var_153_cvector);
	var_161_float = var_152_cvector * (int)25;
	var_162_int = var_151_float + var_161_float;
	var_142_cvector = var_162_int - CVector(0.0, 10.0, 0.0);
	var_143_cvector = var_139_cvector + var_142_cvector;
	IsOverrideActive(var_144_bool);
	var_164_bool = var_144_bool;
	if(var_164_bool != 0) {
		var_125_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_143_cvector, var_141_cvector, (bool)1);
	var_166_float = GetByIndex(var_142_cvector, 0);
	var_167_float = GetByIndex(var_142_cvector, 2);
	Rotate(var_166_float, var_167_float);
	var_168_bool = 0;
	func_12731(var_168_bool);
	if(var_168_bool != 0) {
	} else {
		HasAnimationTrack(var_145_bool, "head");
		var_170_bool = var_145_bool;
		if(var_170_bool == 0) goto Label_12229;
		LookAsyncCamera("head");
	}
Label_12229:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_125_bool = 1;
	return 18;
	
}


func_13192()
{
	var_194_bool = 0; var_195_string = ""; var_196_string = "";
	func_12648(var_194_bool, "quest_b2_01", "cutscene");
	return 0;
}


func_14218(var_1092_bool)
{
	var_1094_int = 0; var_1095_string = "";
	func_12471(var_1094_int, "b4q01");
	var_1097_bool = var_1094_int == (int)0;
	if(var_1097_bool != 0) {
		var_1092_bool = 1;
		return 0;
	}
	var_1092_bool = 0;
	return 0;
}


func_13199(var_150_object)
{
	var_152_int = 0; var_153_int = 0;
	@@var_150_object:RemoveItemByType(var_153_int, "b6q01_bull_blood", (int)1);
	var_156_bool = 0; var_157_string = ""; var_158_string = "";
	func_12648(var_156_bool, "quest_b6_01", "cutscene");
	return 2;
}


func_14230(var_1057_bool)
{
	var_1059_int = 0; var_1060_string = "";
	func_12471(var_1059_int, "oob4Danko1");
	var_1062_bool = var_1059_int == (int)0;
	if(var_1062_bool != 0) {
		var_1057_bool = 1;
		return 0;
	}
	var_1057_bool = 0;
	return 0;
}


func_13210()
{
	SetVariable("b11q02", (int)2);
	func_14658();
	return 0;
}


func_11164(var_2_object, var_503_string)
{
	var_504_bool = 0;
	func_12731(var_504_bool);
	var_505_bool = var_504_bool == 0; //@nz
	if(var_505_bool != 0) {
		return 0;
	}
	var_506_bool = var_503_string == var_2_object;
	if(var_506_bool != 0) {
		return 0;
	}
	var_507_string = ""; var_508_bool = 0;
	var_503_string = var_507_string;
	var_510_bool = var_503_string == "";
	if(var_510_bool != 0) {
		var_508_bool = 0;
	} else {
		var_508_bool = 1;
	}
	func_12407(var_507_string, var_508_bool);
	var_2_object = var_503_string;
	return 0;
	
}


func_14242(var_1114_bool)
{
	var_1116_int = 0; var_1117_string = "";
	func_12471(var_1116_int, "microscope_b4q01_sample");
	var_1119_bool = var_1116_int != (int)0;
	if(var_1119_bool != 0) {
		var_1114_bool = 1;
		return 0;
	}
	var_1114_bool = 0;
	return 0;
}


func_13219()
{
	func_14645();
	var_190_bool = 0; var_191_string = ""; var_192_string = "";
	func_12648(var_190_bool, "quest_b11_02", "fail");
	return 0;
}


func_13229()
{
	SetVariable("oob3Danko3", (int)1);
	return 0;
}


func_14254(var_1103_bool, var_1104_object)
{
	var_1105_bool = 0; var_1106_object = Obj(); var_1107_string = "";
	var_1104_object = var_1106_object;
	func_12579(var_1105_bool, var_1106_object, "b4q01_sample");
	if(var_1105_bool != 0) {
		var_1103_bool = 1;
		return 0;
	}
	var_1103_bool = 0;
	return 0;
}


func_13235()
{
	SetVariable("b3q04", (int)1);
	func_14762();
	func_14775();
	var_293_object = Obj(); var_294_string = "";
	func_12476(var_293_object, "quest_b3_04");
	return 0;
}


func_7093(var_2_object, var_1554_string)
{
	var_1555_bool = 0;
	func_12731(var_1555_bool);
	var_1556_bool = var_1555_bool == 0; //@nz
	if(var_1556_bool != 0) {
		return 0;
	}
	var_1557_bool = var_1554_string == var_2_object;
	if(var_1557_bool != 0) {
		return 0;
	}
	var_1558_string = ""; var_1559_bool = 0;
	var_1554_string = var_1558_string;
	var_1561_bool = var_1554_string == "";
	if(var_1561_bool != 0) {
		var_1559_bool = 0;
	} else {
		var_1559_bool = 1;
	}
	func_12407(var_1558_string, var_1559_bool);
	var_2_object = var_1554_string;
	return 0;
	
}


func_14265(var_1108_bool)
{
	var_1110_int = 0; var_1111_string = "";
	func_12471(var_1110_int, "oob4Danko2");
	var_1113_bool = var_1110_int == (int)0;
	if(var_1113_bool != 0) {
		var_1108_bool = 1;
		return 0;
	}
	var_1108_bool = 0;
	return 0;
}


func_13251()
{
	SetVariable("b3q04", (int)1000);
	func_14814();
	var_321_bool = 0; var_322_string = ""; var_323_string = "";
	func_12648(var_321_bool, "quest_b3_04", "completed");
	return 0;
}


func_4035(var_2_object, var_695_string)
{
	var_696_bool = 0;
	func_12731(var_696_bool);
	var_697_bool = var_696_bool == 0; //@nz
	if(var_697_bool != 0) {
		return 0;
	}
	var_698_bool = var_695_string == var_2_object;
	if(var_698_bool != 0) {
		return 0;
	}
	var_699_string = ""; var_700_bool = 0;
	var_695_string = var_699_string;
	var_702_bool = var_695_string == "";
	if(var_702_bool != 0) {
		var_700_bool = 0;
	} else {
		var_700_bool = 1;
	}
	func_12407(var_699_string, var_700_bool);
	var_2_object = var_695_string;
	return 0;
	
}


func_14277(var_1138_bool)
{
	var_1140_int = 0; var_1141_string = "";
	func_12471(var_1140_int, "oob4Danko3");
	var_1143_bool = var_1140_int == (int)0;
	if(var_1143_bool != 0) {
		var_1138_bool = 1;
		return 0;
	}
	var_1138_bool = 0;
	return 0;
}


func_12235()
{
	var_332_bool = 0; var_333_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_335_bool = 0;
	func_12731(var_335_bool);
	if(var_335_bool != 0) {
	} else {
		HasAnimationTrack(var_333_bool, "head");
		var_337_bool = var_333_bool;
		if(var_337_bool == 0) goto Label_12252;
		UnlookAsync("head");
	}
Label_12252:
	return 2;
	
}


func_13265(var_97_object)
{
	var_99_bool = 0; var_100_object = Obj(); var_101_string = "";
	var_97_object = var_100_object;
	func_12579(var_99_bool, var_100_object, "diseased_blood");
	if(var_99_bool != 0) {
		var_106_bool = 0; var_107_object = Obj(); var_108_string = "";
		var_97_object = var_107_object;
		func_12586(var_106_bool, var_107_object, "diseased_blood");
	} else {
		var_122_bool = 0; var_123_object = Obj(); var_124_string = "";
		var_97_object = var_123_object;
		func_12579(var_122_bool, var_123_object, "diseased_heart");
		if(var_122_bool != 0) {
			var_125_bool = 0; var_126_object = Obj(); var_127_string = "";
			var_97_object = var_126_object;
			func_12586(var_125_bool, var_126_object, "diseased_heart");
			goto Label_13325;
		}
		var_128_bool = 0; var_129_object = Obj(); var_130_string = "";
		var_97_object = var_129_object;
		func_12579(var_128_bool, var_129_object, "diseased_liver");
		if(var_128_bool != 0) {
			var_131_bool = 0; var_132_object = Obj(); var_133_string = "";
			var_97_object = var_132_object;
			func_12586(var_131_bool, var_132_object, "diseased_liver");
			goto Label_13325;
		}
		var_134_bool = 0; var_135_object = Obj(); var_136_string = "";
		var_97_object = var_135_object;
		func_12579(var_134_bool, var_135_object, "diseased_kidney");
		if(var_134_bool != 0) {
			var_137_bool = 0; var_138_object = Obj(); var_139_string = "";
			var_97_object = var_138_object;
			func_12586(var_137_bool, var_138_object, "diseased_kidney");
			goto Label_13325;
		}
		var_140_bool = 0; var_141_object = Obj(); var_142_string = "";
		var_97_object = var_141_object;
		func_12579(var_140_bool, var_141_object, "b3q01_blood");
		if(var_140_bool == 0) goto Label_13325;
		var_143_bool = 0; var_144_object = Obj(); var_145_string = "";
		var_97_object = var_144_object;
		func_12586(var_143_bool, var_144_object, "b3q01_blood");
	}
Label_13325:
	return 0;
	
}


func_14289(var_1185_bool)
{
	var_1187_int = 0; var_1188_string = "";
	func_12471(var_1187_int, "oob5Danko1");
	var_1190_bool = var_1187_int == (int)0;
	if(var_1190_bool != 0) {
		var_1185_bool = 1;
		return 0;
	}
	var_1185_bool = 0;
	return 0;
}


func_11228(var_0_object, var_530_int, var_531_object)
{
	var_533_object = Obj(); var_534_bool = 0; var_535_int = 0; var_536_bool = 0; var_537_object = Obj(); var_538_bool = 0; var_539_int = 0; var_540_bool = 0;
	var_0_object = var_531_object;
	var_541_bool = 0; var_542_object = Obj(); var_543_float = 0;
	var_531_object = var_542_object;
	func_12166(var_541_bool, var_542_object, (float)70.0);
	var_544_bool = var_541_bool == 0; //@nz
	if(var_544_bool != 0) {
		var_530_int = -2;
		return 8;
	}
	CreateDialog(var_537_object);
	var_545_int = 0;
	func_12725(var_545_int);
	@@var_537_object:SetNPCName(var_545_int);
	var_546_int = 0;
	func_12723(var_546_int);
	@@var_537_object:SetNPCDescription(var_546_int);
	var_547_string = "";
	func_12727(var_547_string);
	@@var_537_object:SetPhoto(var_547_string);
	var_548_string = "";
	func_12729(var_548_string);
	@@var_537_object:SetPhoto2(var_548_string);
	var_549_int = 0;
	func_15022(var_549_int);
	@@var_537_object:SetPlayerName(var_549_int);
	IsOverrideActive(var_538_bool);
	var_550_bool = var_538_bool;
	if(var_550_bool != 0) {
		var_530_int = -2;
		return 8;
	}
	DoDialog(var_537_object);
	var_551_bool = 0; var_552_object = Obj();
	func_12444(Obj());
	var_553_object = var_552_object;
	func_12253(var_551_bool, var_552_object);
	var_554_object = Obj(); var_555_object = Obj();
	var_531_object = var_554_object;
	var_537_object = var_555_object;
	TaskCall(31);
	func_11309(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object);
	TaskReturn();
	@@var_537_object:IsDialogEnd(var_540_bool);
	
Label_11291:
	var_584_bool = var_540_bool == 0; //@nz
	if(var_584_bool != 0) {
		sync();
		@@var_537_object:IsDialogEnd(var_540_bool);
		goto Label_11291;
	}
	var_531_object = Obj();
	func_12235();
	StopDialog(var_537_object);
	@@var_537_object:GetReturnValue((int)-1);
	var_539_int = var_530_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_12253(var_186_bool, var_187_object)
{
	var_191_int = 0; var_192_int = 0; var_193_int = 0; var_194_int = 0;
	GetVariable("voice_common", var_193_int);
	var_196_int = var_193_int;
	if(var_196_int != 0) {
		var_197_bool = 0; var_198_object = Obj();
		var_187_object = var_198_object;
		func_12311(var_197_bool, var_198_object);
		var_227_bool = var_197_bool == 0; //@nz
		if(var_227_bool != 0) {
			var_228_bool = 0; var_229_object = Obj();
			var_187_object = var_229_object;
			func_12348(var_228_bool, var_229_object);
			var_263_bool = var_228_bool == 0; //@nz
			if(var_263_bool != 0) {
				var_186_bool = 0;
				return 4;
			}
		}
		irand(var_194_int, (int)2);
		var_265_int = var_194_int;
		if(var_265_int != 0) {
			var_268_int = var_193_int + (int)1;
			var_270_int = var_268_int % (int)3;
			SetVariable("voice_common", var_270_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_273_bool = 0; var_274_object = Obj();
		var_187_object = var_274_object;
		func_12348(var_273_bool, var_274_object);
		var_275_bool = var_273_bool == 0; //@nz
		if(var_275_bool != 0) {
			var_276_bool = 0; var_277_object = Obj();
			var_187_object = var_277_object;
			func_12311(var_276_bool, var_277_object);
			var_278_bool = var_276_bool == 0; //@nz
			if(var_278_bool != 0) {
				var_186_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_12309;
	
Label_12309:
	var_186_bool = 1;
	return 4;
	
}


func_14301(var_1220_bool)
{
	var_1222_int = 0; var_1223_string = "";
	func_12471(var_1222_int, "b5q01");
	var_1225_bool = var_1222_int == (int)0;
	if(var_1225_bool != 0) {
		var_1220_bool = 1;
		return 0;
	}
	var_1220_bool = 0;
	return 0;
}


func_14313(var_1232_bool)
{
	var_1234_int = 0; var_1235_string = "";
	func_12471(var_1234_int, "b5q01TalkToVera");
	var_1237_bool = var_1234_int == (int)1;
	if(var_1237_bool != 0) {
		var_1232_bool = 1;
		return 0;
	}
	var_1232_bool = 0;
	return 0;
}


func_14325(var_1238_bool)
{
	var_1240_int = 0; var_1241_string = "";
	func_12471(var_1240_int, "b5q01VeraDead");
	var_1243_bool = var_1240_int != (int)0;
	if(var_1243_bool != 0) {
		var_1238_bool = 1;
		return 0;
	}
	var_1238_bool = 0;
	return 0;
}


