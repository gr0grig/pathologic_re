// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,Trigger/2,Trigger/3,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Untrust|W:Rage|W:Discontent|W:Patronage|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:HasItem|W:reputation|A:add|W:ui/NPC_Mat.png|W:ui/NPC_Mat_b.png|W:d8q01MladVladIsVictim|W:volonteers_danko|W:kill|W:mladvlad|W:d8q01BigVladIsVictim|W:bigvlad|W:toy_horse|A:RemoveItemByType|W:pt_map_boiny_main_entrance|A:ShowMap|W:playsound|W:giveitem|W:ood8Mat1|W:d8q01BringBadBoy|W:d8q01MatBringToy|W:d8q01MatGotoToyHouse|W:pt_map_d8q01_toyhouse|A:AddMark|W:quest_d8_01|W:place_toy|W:ood8Mat2|W:d8q01MatGotoBoiny|W:unlock_boiny|W:ood8Mat3|W:ood8Mat4|W:ood8Mat5|W:ood8Mat6|W:ood8Mat7|W:d8TalkToMat|W:quest_d8_02|W:completed|W:d8q02|W:feromicin|W:d8q04|W:d8q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x852
// @RUN_TASK: 6
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x149 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x72a vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x828 vars=int,int
// @TASK_6: vars=cvector params=0
// @EVENT_7: op=0x89b vars=int
// @EVENT_6: op=0x8c1 vars=
// @EVENT_5: op=0x8d0 vars=
// @EVENT_45: op=0x8dd vars=bool
// @EVENT_0: op=0x8e9 vars=object
// @PE: 0x51,0x133,0x149,0x6d5,0x714,0x72a,0x7d8,0x812,0x828,0x852,0x89b,0x8c1,0x8dd,0xaba,0xad1,0xb24,0xb6c,0xb7c,0xb82,0xb89,0xb8f,0xbb4,0xbd2,0xbd8,0xbde,0xbe4,0xbea,0xbf0,0xbf6,0xc00,0xc0f,0xc1f,0xc2b,0xc37,0xc43,0xc4f,0xc5b,0xc66,0xc72,0xc7e,0xc8a,0xc96,0xca2,0xcae,0xcba,0xcc6,0xcd2,0xd8a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	if((int)1 != 0) {
		func_2723();
		var_21_bool = var_17_cvector == (int)14805;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_2959();
		}
		var_50_bool = var_17_cvector == (int)14811;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_2968();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_3087(var_86_object);
		}
		var_112_bool = var_17_cvector == (int)14812;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_2996();
		}
		var_118_bool = var_17_cvector == (int)14816;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_3002();
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_2918(var_141_object);
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_2940();
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_2924(var_151_object);
		}
		var_158_bool = var_17_cvector == (int)13511;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_3026();
		}
		var_164_bool = var_17_cvector == (int)13526;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_3032();
		}
		var_170_bool = var_17_cvector == (int)13517;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_3038();
		}
		var_176_bool = var_17_cvector == (int)14996;
		if(var_176_bool != 0) {
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_3044();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_2892();
		}
		var_203_bool = var_17_cvector == (int)15004;
		if(var_203_bool != 0) {
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_3002();
		}
		var_207_bool = var_17_cvector == (int)14817;
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_3050();
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_2892();
		}
		var_215_bool = var_17_cvector == (int)15002;
		if(var_215_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_3002();
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_2924(var_219_object);
		}
		var_221_bool = var_17_cvector == (int)15007;
		if(var_221_bool != 0) {
			var_222_object = Obj(); var_223_object = Obj();
			var_222_object = var_1_object;
			var_223_object = var_0_object;
			func_3081(var_223_object);
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_2940();
			var_230_object = Obj(); var_231_object = Obj();
			var_230_object = var_1_object;
			var_231_object = var_0_object;
			func_3062();
			var_243_object = Obj(); var_244_object = Obj();
			var_243_object = var_1_object;
			var_244_object = var_0_object;
			func_2946(var_244_object);
		}
		var_284_bool = var_17_cvector == (int)37663;
		if(var_284_bool != 0) {
			var_285_object = Obj(); var_286_object = Obj();
			var_285_object = var_1_object;
			var_286_object = var_0_object;
			func_3072();
		}
		var_298_bool = var_17_cvector == (int)37664;
		if(var_298_bool != 0) {
			var_299_object = Obj(); var_300_object = Obj();
			var_299_object = var_1_object;
			var_300_object = var_0_object;
			func_3072();
		}
		var_302_bool = var_16_bool == (int)14737;
		if(var_302_bool != 0) {
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_3127(var_305_object);
			if(var_304_bool != 0) {
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_3139(var_313_object);
				if(var_312_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				var_318_object = Obj(); var_319_object = Obj();
				var_318_object = var_1_object;
				var_319_object = var_0_object;
				func_2953();
				var_322_object = Obj(); var_323_object = Obj();
				var_322_object = var_1_object;
				var_323_object = var_0_object;
				func_3056();
				var_326_string = "";
				func_307(var_17_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)513496);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513504, (int)14773, (int)14746);
				@@@var_0_object:AddReply((int)513505, (int)14748, (int)14747);
				return 0;
			}
			var_350_object = Obj(); var_351_object = Obj();
			var_350_object = var_1_object;
			var_351_object = var_0_object;
			func_3056();
			var_352_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512350);
			@@@var_0_object:ClearReplies();
			var_354_bool = 0;
			var_354_bool = 0;
			var_355_bool = 0;
			var_355_bool = 0;
			var_356_bool = 0; var_357_object = Obj();
			var_357_object = var_1_object;
			func_3151(var_357_object);
			if(var_356_bool != 0) {
				var_362_bool = 0; var_363_object = Obj();
				var_363_object = var_1_object;
				func_3163(var_362_bool, var_363_object);
				if(var_362_bool != 0) {
					var_355_bool = 1;
				}
			}
			if(var_355_bool != 0) {
				var_371_bool = 0; var_372_object = Obj();
				var_372_object = var_1_object;
				func_3174(var_372_object);
				if(var_371_bool != 0) {
					var_354_bool = 1;
				}
			}
			if(var_354_bool != 0) {
				@@@var_0_object:AddReply((int)513563, (int)14813, (int)14812);
			}
			var_380_bool = 0; var_381_object = Obj();
			var_381_object = var_1_object;
			func_3186(var_381_object);
			if(var_380_bool != 0) {
				@@@var_0_object:AddReply((int)512352, (int)13512, (int)13511);
			}
			var_389_bool = 0;
			var_389_bool = 0;
			var_390_bool = 0; var_391_object = Obj();
			var_391_object = var_1_object;
			func_3198(var_391_object);
			if(var_390_bool != 0) {
				var_396_bool = 0; var_397_object = Obj();
				var_397_object = var_1_object;
				func_3115(var_397_object);
				if(var_396_bool != 0) {
					var_389_bool = 1;
				}
			}
			if(var_389_bool != 0) {
				@@@var_0_object:AddReply((int)512366, (int)13527, (int)13526);
			}
			var_405_bool = 0; var_406_object = Obj();
			var_406_object = var_1_object;
			func_3210(var_406_object);
			if(var_405_bool != 0) {
				@@@var_0_object:AddReply((int)512357, (int)13518, (int)13517);
			}
			var_414_bool = 0;
			var_414_bool = 0;
			var_415_bool = 0; var_416_object = Obj();
			var_416_object = var_1_object;
			func_3222(var_416_object);
			if(var_415_bool != 0) {
				var_421_bool = 0; var_422_object = Obj();
				var_422_object = var_1_object;
				func_3246(var_422_object);
				if(var_421_bool != 0) {
					var_414_bool = 1;
				}
			}
			if(var_414_bool != 0) {
				@@@var_0_object:AddReply((int)513752, (int)14997, (int)14996);
			}
			var_430_bool = 0;
			var_430_bool = 0;
			var_431_bool = 0; var_432_object = Obj();
			var_432_object = var_1_object;
			func_3234(var_432_object);
			if(var_431_bool != 0) {
				var_437_bool = 0; var_438_object = Obj();
				var_438_object = var_1_object;
				func_3258(var_438_object);
				if(var_437_bool != 0) {
					var_430_bool = 1;
				}
			}
			if(var_430_bool != 0) {
				@@@var_0_object:AddReply((int)513568, (int)14818, (int)14817);
			}
			var_446_bool = 0;
			var_446_bool = 0;
			var_447_bool = 0; var_448_object = Obj();
			var_448_object = var_1_object;
			func_3282(var_447_bool, var_448_object);
			if(var_447_bool != 0) {
				var_452_bool = 0; var_453_object = Obj();
				var_453_object = var_1_object;
				func_3103(var_453_object);
				if(var_452_bool != 0) {
					var_446_bool = 1;
				}
			}
			if(var_446_bool != 0) {
				@@@var_0_object:AddReply((int)513766, (int)15006, (int)15005);
			}
			@@@var_0_object:AddReply((int)512351, (int)-1, (int)13510);
			return 0;
		}
		var_465_bool = var_16_bool == (int)15006;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_307(var_17_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)513767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535938, (int)37660, (int)37659);
			@@@var_0_object:AddReply((int)535937, (int)37662, (int)37658);
			return 0;
		}
		var_475_bool = var_16_bool == (int)37662;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_307(var_17_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)535941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535942, (int)-1, (int)37663);
			@@@var_0_object:AddReply((int)535943, (int)-1, (int)37664);
			return 0;
		}
		var_485_bool = var_16_bool == (int)37660;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513768, (int)-1, (int)15007);
			return 0;
		}
		var_492_bool = var_16_bool == (int)14818;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513570, (int)14820, (int)14819);
			return 0;
		}
		var_499_bool = var_16_bool == (int)14820;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_307(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513572, (int)15001, (int)14821);
			@@@var_0_object:AddReply((int)535934, (int)37654, (int)37653);
			return 0;
		}
		var_509_bool = var_16_bool == (int)37654;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535936, (int)15001, (int)37655);
			return 0;
		}
		var_516_bool = var_16_bool == (int)15001;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513758, (int)-1, (int)15002);
			return 0;
		}
		var_523_bool = var_16_bool == (int)14997;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513754, (int)14999, (int)14998);
			return 0;
		}
		var_530_bool = var_16_bool == (int)14999;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_307(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513755);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513756, (int)15003, (int)15000);
			@@@var_0_object:AddReply((int)535931, (int)37650, (int)37649);
			return 0;
		}
		var_540_bool = var_16_bool == (int)37650;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535933, (int)15003, (int)37651);
			return 0;
		}
		var_547_bool = var_16_bool == (int)15003;
		if(var_547_bool != 0) {
			var_548_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513760, (int)-1, (int)15004);
			return 0;
		}
		var_554_bool = var_16_bool == (int)13518;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_307(var_17_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)512358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512359, (int)13520, (int)13519);
			@@@var_0_object:AddReply((int)513497, (int)14739, (int)14738);
			return 0;
		}
		var_564_bool = var_16_bool == (int)14739;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_307(var_17_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)513498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513499, (int)14741, (int)14740);
			return 0;
		}
		var_571_bool = var_16_bool == (int)14741;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513501, (int)14743, (int)14742);
			return 0;
		}
		var_578_bool = var_16_bool == (int)14743;
		if(var_578_bool != 0) {
			var_579_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513503, (int)13524, (int)14744);
			return 0;
		}
		var_585_bool = var_16_bool == (int)13520;
		if(var_585_bool != 0) {
			var_586_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512361, (int)13522, (int)13521);
			return 0;
		}
		var_592_bool = var_16_bool == (int)13522;
		if(var_592_bool != 0) {
			var_593_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512363, (int)13524, (int)13523);
			return 0;
		}
		var_599_bool = var_16_bool == (int)13524;
		if(var_599_bool != 0) {
			var_600_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)512364);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512365, (int)-1, (int)13525);
			return 0;
		}
		var_606_bool = var_16_bool == (int)13527;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)512367);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512368, (int)13529, (int)13528);
			@@@var_0_object:AddReply((int)535986, (int)37715, (int)37714);
			return 0;
		}
		var_616_bool = var_16_bool == (int)37715;
		if(var_616_bool != 0) {
			var_617_string = "";
			func_307(var_17_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)535987);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535988, (int)37717, (int)37716);
			return 0;
		}
		var_623_bool = var_16_bool == (int)37717;
		if(var_623_bool != 0) {
			var_624_string = "";
			func_307(var_17_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)535989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535990, (int)13531, (int)37718);
			return 0;
		}
		var_630_bool = var_16_bool == (int)13529;
		if(var_630_bool != 0) {
			var_631_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)512369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512370, (int)13531, (int)13530);
			@@@var_0_object:AddReply((int)535930, (int)-1, (int)37648);
			return 0;
		}
		var_640_bool = var_16_bool == (int)13531;
		if(var_640_bool != 0) {
			var_641_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)512371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512372, (int)-1, (int)13532);
			return 0;
		}
		var_647_bool = var_16_bool == (int)13512;
		if(var_647_bool != 0) {
			var_648_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)512353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513529, (int)14775, (int)14774);
			return 0;
		}
		var_654_bool = var_16_bool == (int)14775;
		if(var_654_bool != 0) {
			var_655_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513530);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513531, (int)14777, (int)14776);
			return 0;
		}
		var_661_bool = var_16_bool == (int)14777;
		if(var_661_bool != 0) {
			var_662_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513533, (int)14779, (int)14778);
			@@@var_0_object:AddReply((int)513536, (int)14782, (int)14781);
			return 0;
		}
		var_671_bool = var_16_bool == (int)14782;
		if(var_671_bool != 0) {
			var_672_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513537);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513538, (int)14784, (int)14783);
			return 0;
		}
		var_678_bool = var_16_bool == (int)14784;
		if(var_678_bool != 0) {
			var_679_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513540, (int)14786, (int)14785);
			return 0;
		}
		var_685_bool = var_16_bool == (int)14786;
		if(var_685_bool != 0) {
			var_686_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513542, (int)-1, (int)14787);
			return 0;
		}
		var_692_bool = var_16_bool == (int)14779;
		if(var_692_bool != 0) {
			var_693_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513534);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513535, (int)14788, (int)14780);
			return 0;
		}
		var_699_bool = var_16_bool == (int)14788;
		if(var_699_bool != 0) {
			var_700_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513544, (int)14790, (int)14789);
			return 0;
		}
		var_706_bool = var_16_bool == (int)14790;
		if(var_706_bool != 0) {
			var_707_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513546, (int)-1, (int)14791);
			return 0;
		}
		var_713_bool = var_16_bool == (int)14813;
		if(var_713_bool != 0) {
			var_714_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513564);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513565, (int)14815, (int)14814);
			return 0;
		}
		var_720_bool = var_16_bool == (int)14815;
		if(var_720_bool != 0) {
			var_721_string = "";
			func_307(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513567, (int)-1, (int)14816);
			return 0;
		}
		var_727_bool = var_16_bool == (int)14748;
		if(var_727_bool != 0) {
			var_728_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513507, (int)14750, (int)14749);
			@@@var_0_object:AddReply((int)513513, (int)14756, (int)14755);
			return 0;
		}
		var_737_bool = var_16_bool == (int)14756;
		if(var_737_bool != 0) {
			var_738_string = "";
			func_307(var_17_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)513514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513515, (int)14758, (int)14757);
			@@@var_0_object:AddReply((int)513517, (int)14760, (int)14759);
			return 0;
		}
		var_747_bool = var_16_bool == (int)14760;
		if(var_747_bool != 0) {
			var_748_string = "";
			func_307(var_17_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)513518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513520, (int)14750, (int)14763);
			return 0;
		}
		var_754_bool = var_16_bool == (int)14758;
		if(var_754_bool != 0) {
			var_755_string = "";
			func_307(var_17_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)513516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513519, (int)14750, (int)14761);
			return 0;
		}
		var_761_bool = var_16_bool == (int)14750;
		if(var_761_bool != 0) {
			var_762_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513521, (int)14766, (int)14765);
			@@@var_0_object:AddReply((int)513509, (int)14752, (int)14751);
			return 0;
		}
		var_771_bool = var_16_bool == (int)14752;
		if(var_771_bool != 0) {
			var_772_string = "";
			func_307(var_17_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)513510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513511, (int)14754, (int)14753);
			return 0;
		}
		var_778_bool = var_16_bool == (int)14754;
		if(var_778_bool != 0) {
			var_779_string = "";
			func_307(var_17_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)513512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513547, (int)14773, (int)14792);
			return 0;
		}
		var_785_bool = var_16_bool == (int)14766;
		if(var_785_bool != 0) {
			var_786_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513523, (int)14769, (int)14767);
			var_791_bool = 0; var_792_object = Obj();
			var_792_object = var_1_object;
			func_3270(var_792_object);
			if(var_791_bool != 0) {
				@@@var_0_object:AddReply((int)513524, (int)14769, (int)14768);
			}
			return 0;
		}
		var_801_bool = var_16_bool == (int)14769;
		if(var_801_bool != 0) {
			var_802_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513525);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513526, (int)14773, (int)14770);
			@@@var_0_object:AddReply((int)513527, (int)-1, (int)14772);
			return 0;
		}
		var_811_bool = var_16_bool == (int)14773;
		if(var_811_bool != 0) {
			var_812_string = "";
			func_307(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513528);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513548, (int)14796, (int)14795);
			return 0;
		}
		var_818_bool = var_16_bool == (int)14796;
		if(var_818_bool != 0) {
			var_819_string = "";
			func_307(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513550, (int)14800, (int)14797);
			@@@var_0_object:AddReply((int)513551, (int)14799, (int)14798);
			return 0;
		}
		var_828_bool = var_16_bool == (int)14799;
		if(var_828_bool != 0) {
			var_829_string = "";
			func_307(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513552);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513554, (int)14800, (int)14801);
			return 0;
		}
		var_835_bool = var_16_bool == (int)14800;
		if(var_835_bool != 0) {
			var_836_string = "";
			func_307(var_17_cvector, "Rage");
			@@@var_0_object:SetMessage((int)513553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513556, (int)-1, (int)14805);
			@@@var_0_object:AddReply((int)513557, (int)14807, (int)14806);
			return 0;
		}
		var_845_bool = var_16_bool == (int)14807;
		if(var_845_bool != 0) {
			var_846_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513558);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513559, (int)14810, (int)14808);
			@@@var_0_object:AddReply((int)513560, (int)-1, (int)14809);
			return 0;
		}
		var_855_bool = var_16_bool == (int)14810;
		if(var_855_bool != 0) {
			var_856_string = "";
			func_307(var_17_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)513561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513562, (int)-1, (int)14811);
			return 0;
		}
		var_3_string = true;
		var_861_bool = 0;
		func_2890(var_861_bool);
		if(var_861_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x14a";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	if((int)1 != 0) {
		func_2723();
		var_21_bool = var_16_bool == (int)36960;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_1812(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_50_bool = var_16_bool == (int)36962;
		if(var_50_bool != 0) {
			var_51_string = "";
			func_1812(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_60_bool = var_16_bool == (int)36964;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_1812(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_69_bool = 0;
		func_2890(var_69_bool);
		if(var_69_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x72b";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector)
{
	if((int)1 != 0) {
		func_2723();
		var_21_bool = var_16_int == (int)42557;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_2066(var_17_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_46_bool = 0;
		func_2890(var_46_bool);
		if(var_46_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x829";
	
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_int)
{
	var_18_bool = var_16_int == (int)10;
	if(var_18_bool != 0) {
		func_2199();
		var_20_bool = 0;
		var_20_bool = 0;
		var_21_bool = 0;
		func_2447(var_21_bool);
		if(var_21_bool != 0) {
			var_24_bool = 0;
			func_2168(var_24_bool);
			if(var_24_bool != 0) {
				var_20_bool = 1;
			}
		}
		if(var_20_bool != 0) {
			var_41_bool = 0;
			func_2148(var_41_bool);
			if(var_41_bool != 0) {
				var_60_bool = 0; var_61_object = Obj();
				func_2730(Obj());
				var_62_object = var_61_object;
				func_2597(var_60_bool, var_61_object);
			}
		} else {
			func_2163(var_16_int);
			func_2190();
		}
	}
	return 0;
	
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_2381();
	func_2199();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	StopGroup0();
	func_2199();
	var_17_string = "";
	func_2677("Neutral");
	func_2190();
	return 0;
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		func_2190();
	} else {
		var_23_string = "";
		func_2677("Neutral");
	}
	return 0;
	
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsOverrideActive(var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool != 0) {
		EventDisable(0);
		func_2381();
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_2438(var_20_bool, var_21_object);
		EventEnable(0);
		var_34_object = Obj();
		var_16_object = var_34_object;
		func_3466(var_34_object);
		var_517_string = "";
		func_2677("Neutral");
		func_2199();
		func_2190();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_2134(var_15_cvector);
	return 0;
}


func_3072()
{
	SetVariable("d8q02", (int)-1);
	func_3345();
	return 0;
}


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_0_object = var_44_object;
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0;
	var_44_object = var_55_object;
	func_2452(var_54_bool, var_55_object, (float)70.0);
	var_101_bool = var_54_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	CreateDialog(var_50_object);
	var_102_int = 0;
	func_2884(var_102_int);
	@@var_50_object:SetNPCName(var_102_int);
	var_103_int = 0;
	func_2882(var_103_int);
	@@var_50_object:SetNPCDescription(var_103_int);
	var_104_string = "";
	func_2886(var_104_string);
	@@var_50_object:SetPhoto(var_104_string);
	var_105_string = "";
	func_2888(var_105_string);
	@@var_50_object:SetPhoto2(var_105_string);
	var_106_int = 0;
	func_3449(var_106_int);
	@@var_50_object:SetPlayerName(var_106_int);
	IsOverrideActive(var_51_bool);
	var_114_bool = var_51_bool;
	if(var_114_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	DoDialog(var_50_object);
	var_115_bool = 0; var_116_object = Obj();
	func_2730(Obj());
	var_117_object = var_116_object;
	func_2539(var_115_bool, var_116_object);
	var_205_object = Obj(); var_206_object = Obj();
	var_44_object = var_205_object;
	var_50_object = var_206_object;
	TaskCall(1);
	func_81(var_207_object, var_208_object, var_209_string, var_210_bool, var_205_object, var_206_object);
	TaskReturn();
	@@var_50_object:IsDialogEnd(var_53_bool);
	
Label_63:
	var_391_bool = var_53_bool == 0; //@nz
	if(var_391_bool != 0) {
		sync();
		@@var_50_object:IsDialogEnd(var_53_bool);
		goto Label_63;
	}
	var_44_object = Obj();
	func_2521();
	StopDialog(var_50_object);
	@@var_50_object:GetReturnValue((int)-1);
	var_52_int = var_43_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3332()
{
	var_232_object = Obj(); var_233_object = Obj();
	CreateDiaryEntry(var_233_object, (int)128, (int)2, (int)513773);
	var_237_bool = 0; var_238_object = Obj(); var_239_int = 0;
	var_233_object = var_238_object;
	func_3371(var_237_bool, var_238_object, (int)127);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2310()
{
	var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0;
	WaitForAnimEnd();
	var_32_bool = 0;
	func_2447(var_32_bool);
	var_33_bool = var_32_bool == 0; //@nz
	if(var_33_bool != 0) {
		return 12;
	}
	func_2865((int)0);
	var_34_int = var_26_int;
	var_27_int = 0;
	
Label_2324:
	var_47_bool = 0;
	var_47_bool = 0;
	var_49_bool = var_27_int < (int)5;
	if(var_49_bool != 0) {
		var_50_bool = 0;
		func_2447(var_50_bool);
		if(var_50_bool != 0) {
			var_47_bool = 1;
		}
	}
	if(var_47_bool != 0) {
		var_51_bool = var_26_int == 0; //@nz
		if(var_51_bool != 0) {
			Sleep((int)3, var_28_bool);
			var_53_bool = var_28_bool == 0; //@nz
			if(var_53_bool != 0) {
			} else {
		} else {
				irand(var_29_int, var_26_int);
				irand(var_30_int, (int)5);
				var_59_bool = var_30_int != (int)0;
				if(var_59_bool != 0) {
					var_29_int = 0;
				}
				var_61_string = ""; var_62_int = 0;
				var_29_int = var_62_int;
				func_2858(var_61_string, var_62_int);
				PlayAnimation("all", var_61_string);
				WaitForAnimEnd(var_31_bool);
				var_63_bool = var_31_bool == 0; //@nz
				if(var_63_bool == 0) goto Label_2365;
				goto Label_2376;
		}
		Label_2365:
			var_54_bool = 0;
			func_2379(var_54_bool);
			var_55_bool = var_54_bool == 0; //@nz
			if(var_55_bool != 0) {
				goto Label_2376;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_2324;

		}
	}
Label_2376:
	ResetAAS();
	return 12;
	
}


func_3081(var_222_object)
{
	var_224_int = 0; var_225_int = 0;
	@@var_222_object:RemoveItemByType(var_225_int, "feromicin", (int)1);
	return 2;
}


func_2826(var_188_bool, var_189_string, var_190_string, var_191_string)
{
	var_192_object = Obj(); var_193_object = Obj();
	FindActor(var_193_object, var_189_string);
	var_194_bool = var_193_object == 0; //@ne
	if(var_194_bool != 0) {
		var_188_bool = 0;
		return 2;
	}
	Trigger(var_193_object, var_190_string, var_191_string);
	var_188_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3087(var_86_object)
{
	var_87_object = Obj(); var_88_string = ""; var_89_float = 0;
	func_3399(Obj());
	var_90_object = var_87_object;
	func_3416(var_87_object, "pt_map_d8q01_toyhouse", (float)2);
	var_110_object = Obj();
	func_3399(var_110_object);
	@@var_86_object:ShowMap(var_110_object);
	return 0;
}


func_3345()
{
	var_289_object = Obj(); var_290_object = Obj();
	CreateDiaryEntry(var_290_object, (int)129, (int)2, (int)513774);
	var_294_bool = 0; var_295_object = Obj(); var_296_int = 0;
	var_290_object = var_295_object;
	func_3371(var_294_bool, var_295_object, (int)127);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2066(var_2_object, var_492_string)
{
	var_493_bool = 0;
	func_2890(var_493_bool);
	var_494_bool = var_493_bool == 0; //@nz
	if(var_494_bool != 0) {
		return 0;
	}
	var_495_bool = var_492_string == var_2_object;
	if(var_495_bool != 0) {
		return 0;
	}
	var_496_string = ""; var_497_bool = 0;
	var_492_string = var_496_string;
	var_499_bool = var_492_string == "";
	if(var_499_bool != 0) {
		var_497_bool = 0;
	} else {
		var_497_bool = 1;
	}
	func_2693(var_496_string, var_497_bool);
	var_2_object = var_492_string;
	return 0;
	
}


func_1812(var_2_object, var_433_string)
{
	var_434_bool = 0;
	func_2890(var_434_bool);
	var_435_bool = var_434_bool == 0; //@nz
	if(var_435_bool != 0) {
		return 0;
	}
	var_436_bool = var_433_string == var_2_object;
	if(var_436_bool != 0) {
		return 0;
	}
	var_437_string = ""; var_438_bool = 0;
	var_433_string = var_437_string;
	var_440_bool = var_433_string == "";
	if(var_440_bool != 0) {
		var_438_bool = 0;
	} else {
		var_438_bool = 1;
	}
	func_2693(var_437_string, var_438_bool);
	var_2_object = var_433_string;
	return 0;
	
}


func_2838(var_68_float)
{
	var_69_float = 0; var_70_float = 0;
	GetGameTime(var_70_float);
	var_70_float = var_68_float;
	return 2;
}


func_2843(var_37_int)
{
	var_38_float = 0; var_39_float = 0;
	GetGameTime(var_39_float);
	var_41_int = 0;
	var_41_int = var_39_float / (int)24;
	var_37_int = (int)1 + var_41_int;
	return 2;
}


func_3358(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj();
	GetDiaryRoot(var_42_object);
	var_43_bool = var_42_object == 0; //@nz
	if(var_43_bool != 0) {
		Trace("Can't retrieve diary root");
		var_40_object = 0;
		return 2;
	}
	var_42_object = var_40_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3103(var_379_bool)
{
	var_381_int = 0; var_382_string = "";
	func_2757(var_381_int, "d8q02");
	var_384_bool = var_381_int == (int)2;
	if(var_384_bool != 0) {
		var_379_bool = 1;
		return 0;
	}
	var_379_bool = 0;
	return 0;
}


func_2852(var_35_bool, var_36_int)
{
	var_37_int = 0;
	func_2843(var_37_int);
	var_35_bool = var_37_int == var_36_int;
	return 0;
}


func_2597(var_126_bool, var_127_object)
{
	var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = "";
	var_133_string = "c";
	var_134_int = 0;
	
Label_2600:
	if((int)1 != 0) {
		var_140_int = var_134_int + (int)1;
		var_141_int = var_133_string + var_140_int;
		@@var_127_object:HasProperty(var_141_int, var_135_bool);
		var_142_bool = var_135_bool == 0; //@nz
		if(var_142_bool != 0) {
		} else {
			var_134_int = var_134_int + (int)1;
			goto Label_2600;
		}
	}
	var_143_bool = var_134_int == 0; //@nz
	if(var_143_bool != 0) {
		var_126_bool = 0;
		return 10;
	}
	var_136_int = 0;
	var_145_bool = var_134_int > (int)1;
	if(var_145_bool != 0) {
		irand(var_136_int, var_134_int);
	}
	var_147_int = var_136_int + (int)1;
	var_148_int = var_133_string + var_147_int;
	@@var_127_object:GetProperty(var_148_int, var_137_string);
	var_149_bool = 0; var_150_string = "";
	var_137_string = var_150_string;
	func_2708(var_149_bool, var_150_string);
	var_149_bool = var_126_bool;
	return 10;
	
}


func_2858(var_40_string, var_41_int)
{
	var_42_string = ""; var_43_string = "";
	var_44_int = var_41_int;
	if(var_44_int != 0) {
		"idle" = "idle" + var_41_int;
	}
	var_43_string = var_40_string;
	return 2;
}


func_3115(var_323_bool)
{
	var_325_int = 0; var_326_string = "";
	func_2757(var_325_int, "d8q04");
	var_328_bool = var_325_int == (int)1;
	if(var_328_bool != 0) {
		var_323_bool = 1;
		return 0;
	}
	var_323_bool = 0;
	return 0;
}


func_3371(var_31_bool, var_32_object, var_33_int)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; var_37_object = Obj(); var_38_object = Obj(); var_39_int = 0;
	func_3358(Obj());
	var_40_object = var_37_object;
	@@var_37_object:Find(var_33_int, var_38_object);
	var_45_bool = var_38_object == 0; //@nz
	if(var_45_bool != 0) {
		var_47_int = "Can't find diary parent with id: " + var_33_int;
		Trace(var_47_int);
		var_31_bool = 0;
		return 6;
	}
	@@var_38_object:AddChild(var_32_object);
	SendWorldWndMessage((int)7);
	@@var_32_object:GetCategory(var_39_int);
	SetDiarySection(var_39_int);
	var_31_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2865(var_34_int)
{
	var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0;
	var_37_int = 0;
	
Label_2867:
	var_40_string = ""; var_41_int = 0;
	var_37_int = var_41_int;
	func_2858(var_40_string, var_41_int);
	HasAnimation(var_38_bool, "all", var_40_string);
	var_45_bool = var_38_bool == 0; //@nz
	if(var_45_bool != 0) {
	} else {
		var_37_int = var_37_int + (int)1;
		goto Label_2867;
	}
	var_37_int = var_34_int;
	return 4;
	
}


func_307(var_2_object, var_235_string)
{
	var_236_bool = 0;
	func_2890(var_236_bool);
	var_237_bool = var_236_bool == 0; //@nz
	if(var_237_bool != 0) {
		return 0;
	}
	var_238_bool = var_235_string == var_2_object;
	if(var_238_bool != 0) {
		return 0;
	}
	var_239_string = ""; var_240_bool = 0;
	var_235_string = var_239_string;
	var_242_bool = var_235_string == "";
	if(var_242_bool != 0) {
		var_240_bool = 0;
	} else {
		var_240_bool = 1;
	}
	func_2693(var_239_string, var_240_bool);
	var_2_object = var_235_string;
	return 0;
	
}


func_3127(var_213_bool)
{
	var_215_int = 0; var_216_string = "";
	func_2757(var_215_int, "d8q01");
	var_220_bool = var_215_int == (int)1;
	if(var_220_bool != 0) {
		var_213_bool = 1;
		return 0;
	}
	var_213_bool = 0;
	return 0;
}


func_2882(var_103_int)
{
	var_103_int = 515545;
	return 0;
}


func_3139(var_221_bool)
{
	var_223_int = 0; var_224_string = "";
	func_2757(var_223_int, "ood8Mat1");
	var_226_bool = var_223_int == (int)0;
	if(var_226_bool != 0) {
		var_221_bool = 1;
		return 0;
	}
	var_221_bool = 0;
	return 0;
}


func_2884(var_102_int)
{
	var_102_int = 502870;
	return 0;
}


func_2886(var_104_string)
{
	var_104_string = "ui/NPC_Mat.png";
	return 0;
}


func_3399(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj();
	GetMainOutdoorScene(var_60_object);
	var_62_bool = var_60_object == 0; //@ne
	if(var_62_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_61_object = 0;
		var_61_object = var_57_object;
		return 4;
	}
	@@var_60_object:GetMap(var_61_object);
	var_61_object = var_57_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2888(var_105_string)
{
	var_105_string = "ui/NPC_Mat_b.png";
	return 0;
}


func_2634(var_157_bool, var_158_object)
{
	var_159_string = ""; var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_string = ""; var_164_string = ""; var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_string = "";
	var_170_int = 0;
	func_2843(var_170_int);
	var_171_int = "d" + var_170_int;
	var_164_string = var_171_int + "m";
	var_165_int = 0;
	
Label_2643:
	if((int)1 != 0) {
		var_175_int = var_165_int + (int)1;
		var_176_int = var_164_string + var_175_int;
		@@var_158_object:HasProperty(var_176_int, var_166_bool);
		var_177_bool = var_166_bool == 0; //@nz
		if(var_177_bool != 0) {
		} else {
			var_165_int = var_165_int + (int)1;
			goto Label_2643;
		}
	}
	var_178_bool = var_165_int == 0; //@nz
	if(var_178_bool != 0) {
		var_157_bool = 0;
		return 10;
	}
	var_167_int = 0;
	var_180_bool = var_165_int > (int)1;
	if(var_180_bool != 0) {
		irand(var_167_int, var_165_int);
	}
	var_182_int = var_167_int + (int)1;
	var_183_int = var_164_string + var_182_int;
	@@var_158_object:GetProperty(var_183_int, var_168_string);
	var_184_bool = 0; var_185_string = "";
	var_168_string = var_185_string;
	func_2708(var_184_bool, var_185_string);
	var_184_bool = var_157_bool;
	return 10;
	
}


func_2890(var_97_bool)
{
	var_97_bool = 1;
	return 0;
}


func_2379(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_2892()
{
	var_183_int = 0; var_184_int = 0;
	GetVariable("d8q01MladVladIsVictim", var_184_int);
	var_187_bool = var_184_int != (int)0;
	if(var_187_bool != 0) {
		var_188_bool = 0; var_189_string = ""; var_190_string = ""; var_191_string = "";
		func_2826(var_188_bool, "volonteers_danko", "kill", "mladvlad");
	}
	GetVariable("d8q01BigVladIsVictim", var_184_int);
	var_197_bool = var_184_int != (int)0;
	if(var_197_bool != 0) {
		var_198_bool = 0; var_199_string = ""; var_200_string = ""; var_201_string = "";
		func_2826(var_198_bool, "volonteers_danko", "kill", "bigvlad");
	}
	return 2;
}


func_2381()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3151(var_283_bool)
{
	var_285_int = 0; var_286_string = "";
	func_2757(var_285_int, "d8q01MatBringToy");
	var_288_bool = var_285_int == (int)1;
	if(var_288_bool != 0) {
		var_283_bool = 1;
		return 0;
	}
	var_283_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_205_object, var_206_object)
{
	var_0_object = var_206_object;
	var_1_object = var_205_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_212_bool = 0;
		var_212_bool = 0;
		var_213_bool = 0; var_214_object = Obj();
		var_214_object = var_1_object;
		func_3127(var_214_object);
		if(var_213_bool != 0) {
			var_221_bool = 0; var_222_object = Obj();
			var_222_object = var_1_object;
			func_3139(var_222_object);
			if(var_221_bool != 0) {
				var_212_bool = 1;
			}
		}
		if(var_212_bool != 0) {
			var_227_object = Obj(); var_228_object = Obj();
			var_227_object = var_1_object;
			var_228_object = var_0_object;
			func_2953();
			var_231_object = Obj(); var_232_object = Obj();
			var_231_object = var_1_object;
			var_232_object = var_0_object;
			func_3056();
			var_235_string = "";
			func_307(var_206_object, "Neutral");
			@@@var_0_object:SetMessage((int)513496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513504, (int)14773, (int)14746);
			@@@var_0_object:AddReply((int)513505, (int)14748, (int)14747);
		} else {
				var_277_object = Obj(); var_278_object = Obj();
				var_277_object = var_1_object;
				var_278_object = var_0_object;
				func_3056();
				var_279_string = "";
				func_307(var_206_object, "Neutral");
				@@@var_0_object:SetMessage((int)512350);
				@@@var_0_object:ClearReplies();
				var_281_bool = 0;
				var_281_bool = 0;
				var_282_bool = 0;
				var_282_bool = 0;
				var_283_bool = 0; var_284_object = Obj();
				var_284_object = var_1_object;
				func_3151(var_284_object);
				if(var_283_bool != 0) {
					var_289_bool = 0; var_290_object = Obj();
					var_290_object = var_1_object;
					func_3163(var_289_bool, var_290_object);
					if(var_289_bool != 0) {
						var_282_bool = 1;
					}
				}
				if(var_282_bool != 0) {
					var_298_bool = 0; var_299_object = Obj();
					var_299_object = var_1_object;
					func_3174(var_299_object);
					if(var_298_bool != 0) {
						var_281_bool = 1;
					}
				}
				if(var_281_bool != 0) {
					@@@var_0_object:AddReply((int)513563, (int)14813, (int)14812);
				}
				var_307_bool = 0; var_308_object = Obj();
				var_308_object = var_1_object;
				func_3186(var_308_object);
				if(var_307_bool != 0) {
					@@@var_0_object:AddReply((int)512352, (int)13512, (int)13511);
				}
				var_316_bool = 0;
				var_316_bool = 0;
				var_317_bool = 0; var_318_object = Obj();
				var_318_object = var_1_object;
				func_3198(var_318_object);
				if(var_317_bool != 0) {
					var_323_bool = 0; var_324_object = Obj();
					var_324_object = var_1_object;
					func_3115(var_324_object);
					if(var_323_bool != 0) {
						var_316_bool = 1;
					}
				}
				if(var_316_bool != 0) {
					@@@var_0_object:AddReply((int)512366, (int)13527, (int)13526);
				}
				var_332_bool = 0; var_333_object = Obj();
				var_333_object = var_1_object;
				func_3210(var_333_object);
				if(var_332_bool != 0) {
					@@@var_0_object:AddReply((int)512357, (int)13518, (int)13517);
				}
				var_341_bool = 0;
				var_341_bool = 0;
				var_342_bool = 0; var_343_object = Obj();
				var_343_object = var_1_object;
				func_3222(var_343_object);
				if(var_342_bool != 0) {
					var_348_bool = 0; var_349_object = Obj();
					var_349_object = var_1_object;
					func_3246(var_349_object);
					if(var_348_bool != 0) {
						var_341_bool = 1;
					}
				}
				if(var_341_bool != 0) {
					@@@var_0_object:AddReply((int)513752, (int)14997, (int)14996);
				}
				var_357_bool = 0;
				var_357_bool = 0;
				var_358_bool = 0; var_359_object = Obj();
				var_359_object = var_1_object;
				func_3234(var_359_object);
				if(var_358_bool != 0) {
					var_364_bool = 0; var_365_object = Obj();
					var_365_object = var_1_object;
					func_3258(var_365_object);
					if(var_364_bool != 0) {
						var_357_bool = 1;
					}
				}
				if(var_357_bool != 0) {
					@@@var_0_object:AddReply((int)513568, (int)14818, (int)14817);
				}
				var_373_bool = 0;
				var_373_bool = 0;
				var_374_bool = 0; var_375_object = Obj();
				var_375_object = var_1_object;
				func_3282(var_374_bool, var_375_object);
				if(var_374_bool != 0) {
					var_379_bool = 0; var_380_object = Obj();
					var_380_object = var_1_object;
					func_3103(var_380_object);
					if(var_379_bool != 0) {
						var_373_bool = 1;
					}
				}
				if(var_373_bool != 0) {
					@@@var_0_object:AddReply((int)513766, (int)15006, (int)15005);
				}
				@@@var_0_object:AddReply((int)512351, (int)-1, (int)13510);
				goto Label_277;
		}
	}
Label_277:
	var_259_bool = 0;
	func_2890(var_259_bool);
	if(var_259_bool != 0) {

	Label_281:
		lshWaitForAnimEnd();
		var_260_string = var_3_string;
		if(var_260_string != 0) {
		} else {
			var_261_string = "";
			var_261_string = var_2_object;
			func_2677(var_261_string);
			goto Label_281;
	}
		PlayAnimation("all", "idle");

	Label_296:
		WaitForAnimEnd();
		var_274_string = var_3_string;
		if(var_274_string != 0) {
			goto Label_306;
		}
		PlayAnimation("all", "idle");
		goto Label_296;

	}
	goto Label_306;
	
Label_306:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_2386(var_31_float, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	GetPosition(var_36_cvector);
	@@var_32_object:GetPosition(var_37_cvector);
	var_38_cvector = var_37_cvector - var_36_cvector;
	var_31_float = var_38_cvector | var_38_cvector;
	return 6;
}


func_2134(var_0_object)
{
	var_16_bool = 0;
	func_2447(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2143:
	func_2310();
	goto Label_2143;
}
EMIT "Return(); Pop(0)";


func_3416(var_87_object, var_88_string, var_89_float)
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


func_2394(var_264_bool, var_265_object, var_266_string)
{
	var_267_bool = 0; var_268_bool = 0;
	var_271_bool = IsFuncExist(var_265_object, "HasProperty", (int)2);
	var_272_bool = var_271_bool == 0; //@nz
	if(var_272_bool != 0) {
		var_264_bool = 0;
		return 2;
	}
	@@var_265_object:HasProperty(var_266_string, var_268_bool);
	var_268_bool = var_264_bool;
	return 2;
}


func_3163(var_289_bool, var_290_object)
{
	var_291_bool = 0; var_292_object = Obj(); var_293_string = "";
	var_290_object = var_292_object;
	func_2762(var_291_bool, var_292_object, "toy_horse");
	if(var_291_bool != 0) {
		var_289_bool = 1;
		return 0;
	}
	var_289_bool = 0;
	return 0;
}


func_2148(var_41_bool)
{
	var_42_object = Obj(); var_43_object = Obj();
	FindActor(var_43_object, "player");
	var_45_bool = var_43_object == 0; //@nz
	if(var_45_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj();
	var_43_object = var_47_object;
	func_2438(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3174(var_298_bool)
{
	var_300_int = 0; var_301_string = "";
	func_2757(var_300_int, "ood8Mat2");
	var_303_bool = var_300_int == (int)0;
	if(var_303_bool != 0) {
		var_298_bool = 1;
		return 0;
	}
	var_298_bool = 0;
	return 0;
}


func_2918(var_140_object)
{
	var_142_int = 0; var_143_int = 0;
	@@var_140_object:RemoveItemByType(var_143_int, "toy_horse", (int)1);
	return 2;
}


func_2406(var_256_bool, var_257_object, var_258_string, var_259_float, var_260_float, var_261_float)
{
	var_262_float = 0; var_263_float = 0;
	var_264_bool = 0; var_265_object = Obj(); var_266_string = "";
	var_257_object = var_265_object;
	var_258_string = var_266_string;
	func_2394(var_264_bool, var_265_object, var_266_string);
	var_273_bool = var_264_bool == 0; //@nz
	if(var_273_bool != 0) {
		var_256_bool = 0;
		return 2;
	}
	@@var_257_object:GetProperty(var_258_string, var_263_float);
	var_274_float = 0; var_275_float = 0; var_276_float = 0; var_277_float = 0;
	var_275_float = var_263_float + var_259_float;
	var_260_float = var_276_float;
	var_261_float = var_277_float;
	func_2746(var_274_float, var_275_float, var_276_float, var_277_float);
	@@var_257_object:SetProperty(var_258_string, var_274_float);
	var_256_bool = 1;
	return 2;
}


func_2924(var_151_object)
{
	var_152_object = Obj(); var_153_string = ""; var_154_float = 0;
	func_3399(Obj());
	var_155_object = var_152_object;
	func_3416(var_152_object, "pt_map_boiny_main_entrance", (float)2);
	var_156_object = Obj();
	func_3399(var_156_object);
	@@var_151_object:ShowMap(var_156_object);
	return 0;
}


func_3186(var_307_bool)
{
	var_309_int = 0; var_310_string = "";
	func_2757(var_309_int, "ood8Mat3");
	var_312_bool = var_309_int == (int)0;
	if(var_312_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_2163(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_93_float, var_94_float);
	return 0;
}


func_2677(var_261_string)
{
	var_262_bool = 0; var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_float = 0; var_267_float = 0;
	lshHasAnimation(var_265_bool, var_261_string);
	var_268_bool = var_265_bool;
	if(var_268_bool != 0) {
		lshGetAnimTimes(var_261_string, var_266_float, var_267_float);
		lshPlayAnimation(var_266_float, var_267_float, (bool)0);
	} else {
		var_271_int = "Can't find lsh animation : " + var_261_string;
		Trace(var_271_int);
	}
	return 6;
	
}


func_2168(var_24_bool)
{
	var_25_object = Obj(); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	FindActor(var_27_object, "player");
	var_30_bool = var_27_object == 0; //@nz
	if(var_30_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	var_31_float = 0; var_32_object = Obj();
	var_27_object = var_32_object;
	func_2386(var_31_float, var_32_object);
	var_40_bool = var_31_float > (float)90000.0;
	if(var_40_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	CanSee(var_28_bool, var_27_object);
	var_28_bool = var_24_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3449(var_106_int)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable("branch", var_108_int);
	var_111_bool = var_108_int == (int)0;
	if(var_111_bool != 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0xd88";
	}
	var_113_bool = var_108_int == (int)1;
	if(var_113_bool != 0) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
	return 2;
}


func_2428(var_24_bool, var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0;
	GetPosition(var_29_cvector);
	var_30_cvector = var_25_cvector - var_29_cvector;
	var_32_float = GetByIndex(var_30_cvector, 0);
	var_33_float = GetByIndex(var_30_cvector, 2);
	Rotate(var_32_float, var_33_float, var_31_bool);
	var_31_bool = var_24_bool;
	return 6;
}


func_2940()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3198(var_317_bool)
{
	var_319_int = 0; var_320_string = "";
	func_2757(var_319_int, "ood8Mat4");
	var_322_bool = var_319_int == (int)0;
	if(var_322_bool != 0) {
		var_317_bool = 1;
		return 0;
	}
	var_317_bool = 0;
	return 0;
}


func_2946(var_243_object)
{
	var_245_bool = 0; var_246_object = Obj(); var_247_float = 0;
	var_243_object = var_246_object;
	func_2769(var_245_bool, var_246_object, (float)0.10000000149011612);
	return 0;
}


func_1668(var_0_object, var_402_int, var_403_object)
{
	var_405_object = Obj(); var_406_bool = 0; var_407_int = 0; var_408_bool = 0; var_409_object = Obj(); var_410_bool = 0; var_411_int = 0; var_412_bool = 0;
	var_0_object = var_403_object;
	var_413_bool = 0; var_414_object = Obj(); var_415_float = 0;
	var_403_object = var_414_object;
	func_2452(var_413_bool, var_414_object, (float)70.0);
	var_416_bool = var_413_bool == 0; //@nz
	if(var_416_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	CreateDialog(var_409_object);
	var_417_int = 0;
	func_2884(var_417_int);
	@@var_409_object:SetNPCName(var_417_int);
	var_418_int = 0;
	func_2882(var_418_int);
	@@var_409_object:SetNPCDescription(var_418_int);
	var_419_string = "";
	func_2886(var_419_string);
	@@var_409_object:SetPhoto(var_419_string);
	var_420_string = "";
	func_2888(var_420_string);
	@@var_409_object:SetPhoto2(var_420_string);
	var_421_int = 0;
	func_3449(var_421_int);
	@@var_409_object:SetPlayerName(var_421_int);
	IsOverrideActive(var_410_bool);
	var_422_bool = var_410_bool;
	if(var_422_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	DoDialog(var_409_object);
	var_423_bool = 0; var_424_object = Obj();
	func_2730(Obj());
	var_425_object = var_424_object;
	func_2539(var_423_bool, var_424_object);
	var_426_object = Obj(); var_427_object = Obj();
	var_403_object = var_426_object;
	var_409_object = var_427_object;
	TaskCall(3);
	func_1749(var_428_object, var_429_object, var_430_string, var_431_bool, var_426_object, var_427_object);
	TaskReturn();
	@@var_409_object:IsDialogEnd(var_412_bool);
	
Label_1731:
	var_459_bool = var_412_bool == 0; //@nz
	if(var_459_bool != 0) {
		sync();
		@@var_409_object:IsDialogEnd(var_412_bool);
		goto Label_1731;
	}
	var_403_object = Obj();
	func_2521();
	StopDialog(var_409_object);
	@@var_409_object:GetReturnValue((int)-1);
	var_411_int = var_402_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2693(var_239_string, var_240_bool)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0;
	lshHasAnimation(var_246_bool, var_239_string);
	var_249_bool = var_246_bool;
	if(var_249_bool != 0) {
		lshGetAnimTimes(var_239_string, var_247_float, var_248_float);
		lshPlayAnimation(var_247_float, var_248_float, var_240_bool);
	} else {
		var_251_int = "Can't find lsh animation : " + var_239_string;
		Trace(var_251_int);
	}
	return 6;
	
}


func_2438(var_20_bool, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	@@var_21_object:GetPosition(var_23_cvector);
	var_24_bool = 0; var_25_cvector = CVector(0,0,0);
	var_23_cvector = var_25_cvector;
	func_2428(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
	return 2;
}


func_1927(var_0_object, var_461_int, var_462_object)
{
	var_464_object = Obj(); var_465_bool = 0; var_466_int = 0; var_467_bool = 0; var_468_object = Obj(); var_469_bool = 0; var_470_int = 0; var_471_bool = 0;
	var_0_object = var_462_object;
	var_472_bool = 0; var_473_object = Obj(); var_474_float = 0;
	var_462_object = var_473_object;
	func_2452(var_472_bool, var_473_object, (float)70.0);
	var_475_bool = var_472_bool == 0; //@nz
	if(var_475_bool != 0) {
		var_461_int = -2;
		return 8;
	}
	CreateDialog(var_468_object);
	var_476_int = 0;
	func_2884(var_476_int);
	@@var_468_object:SetNPCName(var_476_int);
	var_477_int = 0;
	func_2882(var_477_int);
	@@var_468_object:SetNPCDescription(var_477_int);
	var_478_string = "";
	func_2886(var_478_string);
	@@var_468_object:SetPhoto(var_478_string);
	var_479_string = "";
	func_2888(var_479_string);
	@@var_468_object:SetPhoto2(var_479_string);
	var_480_int = 0;
	func_3449(var_480_int);
	@@var_468_object:SetPlayerName(var_480_int);
	IsOverrideActive(var_469_bool);
	var_481_bool = var_469_bool;
	if(var_481_bool != 0) {
		var_461_int = -2;
		return 8;
	}
	DoDialog(var_468_object);
	var_482_bool = 0; var_483_object = Obj();
	func_2730(Obj());
	var_484_object = var_483_object;
	func_2539(var_482_bool, var_483_object);
	var_485_object = Obj(); var_486_object = Obj();
	var_462_object = var_485_object;
	var_468_object = var_486_object;
	TaskCall(5);
	func_2008(var_487_object, var_488_object, var_489_string, var_490_bool, var_485_object, var_486_object);
	TaskReturn();
	@@var_468_object:IsDialogEnd(var_471_bool);
	
Label_1990:
	var_515_bool = var_471_bool == 0; //@nz
	if(var_515_bool != 0) {
		sync();
		@@var_468_object:IsDialogEnd(var_471_bool);
		goto Label_1990;
	}
	var_462_object = Obj();
	func_2521();
	StopDialog(var_468_object);
	@@var_468_object:GetReturnValue((int)-1);
	var_470_int = var_461_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2953()
{
	SetVariable("ood8Mat1", (int)1);
	return 0;
}


func_3210(var_332_bool)
{
	var_334_int = 0; var_335_string = "";
	func_2757(var_334_int, "ood8Mat5");
	var_337_bool = var_334_int == (int)0;
	if(var_337_bool != 0) {
		var_332_bool = 1;
		return 0;
	}
	var_332_bool = 0;
	return 0;
}


func_3466(var_34_object)
{
	var_35_bool = 0; var_36_int = 0;
	func_2852(var_35_bool, (int)8);
	if(var_35_bool != 0) {
		var_43_int = 0; var_44_object = Obj();
		var_34_object = var_44_object;
		TaskCall(0);
		func_0(var_45_object, var_43_int, var_44_object);
		TaskReturn();
		return 0;
	}
	var_400_bool = 0; var_401_int = 0;
	func_2852(var_400_bool, (int)12);
	if(var_400_bool != 0) {
		var_402_int = 0; var_403_object = Obj();
		var_34_object = var_403_object;
		TaskCall(2);
		func_1668(var_404_object, var_402_int, var_403_object);
		TaskReturn();
		return 0;
	}
	var_461_int = 0; var_462_object = Obj();
	var_34_object = var_462_object;
	TaskCall(4);
	func_1927(var_463_object, var_461_int, var_462_object);
	TaskReturn();
	return 0;
}


func_2190()
{
	var_519_float = 0; var_520_float = 0;
	rand(var_520_float, (int)8, (int)16);
	SetTimer((int)10, var_520_float);
	return 2;
}


func_2959()
{
	SetVariable("d8q01BringBadBoy", (int)1);
	func_3293();
	return 0;
}


func_2447(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
	return 2;
}


func_2708(var_149_bool, var_150_string)
{
	var_151_bool = 0; var_152_bool = 0;
	var_153_bool = 0;
	func_2890(var_153_bool);
	if(var_153_bool != 0) {
		lshHasSpeech(var_152_bool, var_150_string);
		var_154_bool = var_152_bool;
		if(var_154_bool != 0) {
			lshPlaySpeech(var_150_string);
			var_149_bool = 1;
			return 2;
		}
	}
	var_149_bool = 0;
	return 2;
}


func_2452(var_54_bool, var_55_object, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0;
	@@var_55_object:GetPosition(var_67_cvector);
	@@var_55_object:GetEyesHeight(var_66_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_66_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	GetPosition(var_68_cvector);
	GetEyesHeight(var_66_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	var_76_float = var_76_float + var_66_float;
	SetByIndex(var_68_cvector, 1) = var_76_float;
	var_69_cvector = var_67_cvector - var_68_cvector;
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (float)0;
	var_78_int = var_69_cvector | var_69_cvector;
	var_79_float = sqrt(var_78_int);
	var_69_cvector = var_69_cvector / var_79_float;
	var_70_cvector = -var_69_cvector;
	var_80_float = var_69_cvector * var_56_float;
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	var_82_cvector = var_70_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2736(var_81_cvector, var_82_cvector);
	var_90_float = var_81_cvector * (int)25;
	var_91_int = var_80_float + var_90_float;
	var_71_cvector = var_91_int - CVector(0.0, 10.0, 0.0);
	var_72_cvector = var_68_cvector + var_71_cvector;
	IsOverrideActive(var_73_bool);
	var_93_bool = var_73_bool;
	if(var_93_bool != 0) {
		var_54_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_72_cvector, var_70_cvector, (bool)1);
	var_95_float = GetByIndex(var_71_cvector, 0);
	var_96_float = GetByIndex(var_71_cvector, 2);
	Rotate(var_95_float, var_96_float);
	var_97_bool = 0;
	func_2890(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		HasAnimationTrack(var_74_bool, "head");
		var_99_bool = var_74_bool;
		if(var_99_bool == 0) goto Label_2515;
		LookAsyncCamera("head");
	}
Label_2515:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_54_bool = 1;
	return 18;
	
}


func_3222(var_342_bool)
{
	var_344_int = 0; var_345_string = "";
	func_2757(var_344_int, "d8q01BigVladIsVictim");
	var_347_bool = var_344_int == (int)1;
	if(var_347_bool != 0) {
		var_342_bool = 1;
		return 0;
	}
	var_342_bool = 0;
	return 0;
}


func_2199()
{
	KillTimer((int)10);
	return 0;
}


func_2968()
{
	var_53_object = Obj(); var_54_object = Obj();
	SetVariable("d8q01MatBringToy", (int)1);
	func_3399(Obj());
	var_57_object = var_54_object;
	var_68_float = 0;
	func_2838(var_68_float);
	@@var_54_object:AddMark("d8q01MatGotoToyHouse", "pt_map_d8q01_toyhouse", (int)1, (int)515444, var_68_float);
	func_3306();
	var_79_bool = 0; var_80_string = ""; var_81_string = "";
	func_2814(var_79_bool, "quest_d8_01", "place_toy");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3234(var_358_bool)
{
	var_360_int = 0; var_361_string = "";
	func_2757(var_360_int, "d8q01MladVladIsVictim");
	var_363_bool = var_360_int == (int)1;
	if(var_363_bool != 0) {
		var_358_bool = 1;
		return 0;
	}
	var_358_bool = 0;
	return 0;
}


func_2723()
{
	var_19_bool = 0;
	func_2890(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2730(var_117_object)
{
	var_118_object = Obj(); var_119_object = Obj();
	self(var_119_object);
	var_119_object = var_117_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3246(var_348_bool)
{
	var_350_int = 0; var_351_string = "";
	func_2757(var_350_int, "ood8Mat6");
	var_353_bool = var_350_int == (int)0;
	if(var_353_bool != 0) {
		var_348_bool = 1;
		return 0;
	}
	var_348_bool = 0;
	return 0;
}


func_2736(var_81_cvector, var_82_cvector)
{
	var_84_float = 0; var_85_float = 0;
	var_86_int = var_82_cvector | var_82_cvector;
	var_85_float = sqrt(var_86_int);
	var_87_float = 9.999999974752427e-07;
	var_88_bool = var_85_float < var_87_float;
	if(var_88_bool != 0) {
		var_81_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_81_cvector = var_82_cvector / var_85_float;
	return 2;
}


func_2996()
{
	SetVariable("ood8Mat2", (int)1);
	return 0;
}


func_3258(var_364_bool)
{
	var_366_int = 0; var_367_string = "";
	func_2757(var_366_int, "ood8Mat7");
	var_369_bool = var_366_int == (int)0;
	if(var_369_bool != 0) {
		var_364_bool = 1;
		return 0;
	}
	var_364_bool = 0;
	return 0;
}


func_2746(var_274_float, var_275_float, var_276_float, var_277_float)
{
	var_278_bool = var_275_float < var_276_float;
	if(var_278_bool != 0) {
		var_276_float = var_274_float;
		return 0;
	}
	var_279_bool = var_275_float > var_277_float;
	if(var_279_bool != 0) {
		var_277_float = var_274_float;
		return 0;
	}
	var_275_float = var_274_float;
	return 0;
}


func_3002()
{
	var_121_object = Obj(); var_122_object = Obj();
	func_3399(Obj());
	var_123_object = var_122_object;
	var_128_float = 0;
	func_2838(var_128_float);
	@@var_122_object:AddMark("d8q01MatGotoBoiny", "pt_map_boiny_main_entrance", (int)1, (int)515324, var_128_float);
	func_3319();
	var_137_bool = 0; var_138_string = ""; var_139_string = "";
	func_2814(var_137_bool, "quest_d8_01", "unlock_boiny");
	return 2;
}
EMIT "Stack[-1] = 0";


func_2757(var_215_int, var_216_string)
{
	var_217_int = 0; var_218_int = 0;
	GetVariable(var_216_string, var_218_int);
	var_218_int = var_215_int;
	return 2;
}


func_3270(var_791_bool)
{
	var_793_int = 0; var_794_string = "";
	func_2757(var_793_int, "d8q02");
	var_796_bool = var_793_int == (int)1;
	if(var_796_bool != 0) {
		var_791_bool = 1;
		return 0;
	}
	var_791_bool = 0;
	return 0;
}


func_2762(var_291_bool, var_292_object, var_293_string)
{
	var_294_int = 0; var_295_bool = 0; var_296_int = 0; var_297_bool = 0;
	GetInvItemByName(var_296_int, var_293_string);
	@@var_292_object:HasItem(var_296_int, var_297_bool);
	var_297_bool = var_291_bool;
	return 4;
}


func_2769(var_245_bool, var_246_object, var_247_float)
{
	var_248_bool = var_246_object == 0; //@nz
	if(var_248_bool != 0) {
		var_245_bool = 0;
		return 0;
	}
	var_250_bool = var_247_float > (int)0;
	if(var_250_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_281_bool = var_247_float < (int)0;
		if(var_281_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2790;
		}
		var_245_bool = 0;
		return 0;
	}
Label_2790:
	var_252_float = 0;
	var_247_float = var_252_float;
	func_2804(var_252_float);
	var_256_bool = 0; var_257_object = Obj(); var_258_string = ""; var_259_float = 0; var_260_float = 0; var_261_float = 0;
	var_246_object = var_257_object;
	var_247_float = var_259_float;
	func_2406(var_256_bool, var_257_object, "reputation", var_259_float, (float)0, (float)1);
	var_245_bool = 1;
	return 0;
	
}


func_3282(var_374_bool, var_375_object)
{
	var_376_bool = 0; var_377_object = Obj(); var_378_string = "";
	var_375_object = var_377_object;
	func_2762(var_376_bool, var_377_object, "feromicin");
	if(var_376_bool != 0) {
		var_374_bool = 1;
		return 0;
	}
	var_374_bool = 0;
	return 0;
}


func_3026()
{
	SetVariable("ood8Mat3", (int)1);
	return 0;
}


func_1749(var_0_object, var_1_object, var_2_object, var_3_string, var_426_object, var_427_object)
{
	var_0_object = var_427_object;
	var_1_object = var_426_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_433_string = "";
		func_1812(var_427_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_1782;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6d9";
	}
Label_1782:
	var_451_bool = 0;
	func_2890(var_451_bool);
	if(var_451_bool != 0) {

	Label_1786:
		lshWaitForAnimEnd();
		var_452_string = var_3_string;
		if(var_452_string != 0) {
		} else {
			var_453_string = "";
			var_453_string = var_2_object;
			func_2677(var_453_string);
			goto Label_1786;
	}
		PlayAnimation("all", "idle");

	Label_1801:
		WaitForAnimEnd();
		var_456_string = var_3_string;
		if(var_456_string != 0) {
			goto Label_1811;
		}
		PlayAnimation("all", "idle");
		goto Label_1801;
	}
	goto Label_1811;
	
Label_1811:
	return 0;
	
}


func_3032()
{
	SetVariable("ood8Mat4", (int)1);
	return 0;
}


func_2521()
{
	var_393_bool = 0; var_394_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_396_bool = 0;
	func_2890(var_396_bool);
	if(var_396_bool != 0) {
	} else {
		HasAnimationTrack(var_394_bool, "head");
		var_398_bool = var_394_bool;
		if(var_398_bool == 0) goto Label_2538;
		UnlookAsync("head");
	}
Label_2538:
	return 2;
	
}


func_2008(var_0_object, var_1_object, var_2_object, var_3_string, var_485_object, var_486_object)
{
	var_0_object = var_486_object;
	var_1_object = var_485_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_492_string = "";
		func_2066(var_486_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_2036;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7dc";
	}
Label_2036:
	var_507_bool = 0;
	func_2890(var_507_bool);
	if(var_507_bool != 0) {

	Label_2040:
		lshWaitForAnimEnd();
		var_508_string = var_3_string;
		if(var_508_string != 0) {
		} else {
			var_509_string = "";
			var_509_string = var_2_object;
			func_2677(var_509_string);
			goto Label_2040;
	}
		PlayAnimation("all", "idle");

	Label_2055:
		WaitForAnimEnd();
		var_512_string = var_3_string;
		if(var_512_string != 0) {
			goto Label_2065;
		}
		PlayAnimation("all", "idle");
		goto Label_2055;
	}
	goto Label_2065;
	
Label_2065:
	return 0;
	
}


func_3293()
{
	var_26_object = Obj(); var_27_object = Obj();
	CreateDiaryEntry(var_27_object, (int)179, (int)1, (int)515441);
	var_31_bool = 0; var_32_object = Obj(); var_33_int = 0;
	var_27_object = var_32_object;
	func_3371(var_31_bool, var_32_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3038()
{
	SetVariable("ood8Mat5", (int)1);
	return 0;
}


func_3044()
{
	SetVariable("ood8Mat6", (int)1);
	return 0;
}


func_3306()
{
	var_71_object = Obj(); var_72_object = Obj();
	CreateDiaryEntry(var_72_object, (int)180, (int)1, (int)515442);
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0;
	var_72_object = var_77_object;
	func_3371(var_76_bool, var_77_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3050()
{
	SetVariable("ood8Mat7", (int)1);
	return 0;
}


func_2539(var_115_bool, var_116_object)
{
	var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_int = 0;
	GetVariable("voice_common", var_122_int);
	var_125_int = var_122_int;
	if(var_125_int != 0) {
		var_126_bool = 0; var_127_object = Obj();
		var_116_object = var_127_object;
		func_2597(var_126_bool, var_127_object);
		var_156_bool = var_126_bool == 0; //@nz
		if(var_156_bool != 0) {
			var_157_bool = 0; var_158_object = Obj();
			var_116_object = var_158_object;
			func_2634(var_157_bool, var_158_object);
			var_187_bool = var_157_bool == 0; //@nz
			if(var_187_bool != 0) {
				var_115_bool = 0;
				return 4;
			}
		}
		irand(var_123_int, (int)2);
		var_189_int = var_123_int;
		if(var_189_int != 0) {
			var_192_int = var_122_int + (int)1;
			var_194_int = var_192_int % (int)3;
			SetVariable("voice_common", var_194_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_197_bool = 0; var_198_object = Obj();
		var_116_object = var_198_object;
		func_2634(var_197_bool, var_198_object);
		var_199_bool = var_197_bool == 0; //@nz
		if(var_199_bool != 0) {
			var_200_bool = 0; var_201_object = Obj();
			var_116_object = var_201_object;
			func_2597(var_200_bool, var_201_object);
			var_202_bool = var_200_bool == 0; //@nz
			if(var_202_bool != 0) {
				var_115_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2595;
	
Label_2595:
	var_115_bool = 1;
	return 4;
	
}


func_3056()
{
	SetVariable("d8TalkToMat", (int)1);
	return 0;
}


func_2804(var_252_float)
{
	var_253_object = Obj(); var_254_object = Obj();
	CreateFloatVector(var_254_object);
	@@var_254_object:add(var_252_float);
	SendWorldWndMessage((int)16, var_254_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3062()
{
	func_3332();
	var_240_bool = 0; var_241_string = ""; var_242_string = "";
	func_2814(var_240_bool, "quest_d8_02", "completed");
	return 0;
}


func_3319()
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateDiaryEntry(var_130_object, (int)181, (int)1, (int)515443);
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0;
	var_130_object = var_135_object;
	func_3371(var_134_bool, var_135_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2814(var_79_bool, var_80_string, var_81_string)
{
	var_82_object = Obj(); var_83_object = Obj();
	FindActor(var_83_object, var_80_string);
	var_84_bool = var_83_object == 0; //@ne
	if(var_84_bool != 0) {
		var_79_bool = 0;
		return 2;
	}
	Trigger(var_83_object, var_81_string);
	var_79_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


