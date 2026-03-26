// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:Arrogance|W:all|W:idle|W:Threat|W:Isee|W:Confusion|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|W:ui/NPC_Aglaja.png|W:ui/NPC_Aglaja_b.png|W:playsound|W:givemoney|W:giveitem|W:money 7000 is given|W:d7q03|W:quest_d7_03|W:init_house_petr|W:burah_serum is given|W:burah_serum|W:quest_d10_02|W:completed|W:d11q05|W:quest_d11_05|W:ood8Aglaja3|W:d8AglajaVisit|W:d10AglajaVisit|W:ood9Aglaja6|W:d9AglajaVisit|W:d9q05|W:d9q05AglajaGotoBurah|W:pt_map_mat|A:AddMark|W:quest_d9_05|W:d10q01_blueprint|A:RemoveItemByType|W:map_chertez_state|W:map_chertez_force|W:pt_map_aglaja|A:ShowMap|W:ood11Aglaja2|W:d11q01_blueprint|W:ood12AglajaNight1|W:money 5000 is given|W:ood7Aglaja2|W:d7q01|W:d7q01AglajaGotoBirdmaskSelf|W:d7q01BirdmaskD|W:pt_map_d7q01_dbirdmask|W:d7q01BirdmaskM|W:pt_map_d7q01_mbirdmask|W:d7q01BirdmaskU|W:pt_map_d7q01_ubirdmask|W:quest_d7_01|W:place_birdmasks|W:ood7Aglaja3|W:d7q01AglajaFindLierSelf|W:d7q01_mreport|W:d7q01_dreport|W:d7q01_ureport|W:ood7Aglaja4|W:ood7Aglaja5|A:FindMark|A:Remove|W:d7q02|W:d8q01|W:quest_d8_01|W:block_well|W:ood8Aglaja1|W:ood8Aglaja2|W:d8KainIsReason|W:ood11Aglaja1|W:d11q01|W:quest_d11_01|W:init_girl|W:remove_andrei|W:ood9Aglaja1|W:ood9Aglaja2|W:ood9Aglaja4|W:ood9Aglaja5|W:d10q01|W:d10q01AglajaGotoPetr|W:pt_map_petr|W:quest_d10_01|W:init_house|W:ood10Aglaja1|W:d10q02KaterinaGotoRubin|W:ood10Aglaja2|W:d11AglajaVisit|W:d6q01KlaraVolonteer|W:d6q01JuliaVolonteer|W:d6q01LaraVolonteer|W:d6q01OspinaVolonteer|W:d10q02|W:d9q01|W:d11RotaTalk|W:d8TermitnikLoad|W:d9TalkToPolkovodec|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_aglaja
// @GLOBALS: 0:object:
// @RUN_OP: 0x1b1d
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x112 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x705 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb53 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf1e vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1435 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x17b8 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a61 vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0x1b66 vars=int
// @EVENT_6: op=0x1b8c vars=
// @EVENT_5: op=0x1b9b vars=
// @EVENT_45: op=0x1ba8 vars=bool
// @EVENT_0: op=0x1bb4 vars=object
// @PE: 0x51,0xfc,0x112,0x675,0x6ef,0x705,0xaab,0xb3d,0xb53,0xe6c,0xf08,0xf1e,0x138d,0x141f,0x1435,0x1768,0x17a2,0x17b8,0x1a07,0x1a4b,0x1a61,0x1b1d,0x1b66,0x1b8c,0x1ba8,0x1dda,0x1e15,0x1e1b,0x1e21,0x1e2b,0x1e3b,0x1e49,0x1e54,0x1e5e,0x1e6e,0x1e74,0x1e7a,0x1e80,0x1e86,0x1eaa,0x1eba,0x1ecb,0x1edb,0x1ee7,0x1eed,0x1ef3,0x1efd,0x1f3d,0x1f66,0x1f6c,0x1fa5,0x1fae,0x1fbf,0x1fc5,0x1fcb,0x1fd1,0x1fd7,0x1fed,0x1ff7,0x1ffd,0x2003,0x2009,0x202e,0x2052,0x2058,0x205e,0x206a,0x2097,0x20a3,0x20af,0x20bb,0x20c7,0x20d3,0x20df,0x20eb,0x20f7,0x2103,0x210f,0x211a,0x2126,0x2132,0x213c,0x2148,0x2154,0x2160,0x216c,0x218b,0x2197,0x21a3,0x21af,0x21bb,0x21c7,0x21d3,0x21df,0x21eb,0x21f7,0x2203,0x220f,0x221b,0x2227,0x2233,0x223f,0x224b,0x2257,0x2263,0x226f,0x2279

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_7507();
		var_41_bool = var_37_cvector == (int)14343;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_7939();
		}
		var_115_bool = var_37_cvector == (int)14344;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_8038();
		}
		var_121_bool = var_37_cvector == (int)14391;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_8003(var_123_object);
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_8044();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_7917();
		}
		var_159_bool = var_37_cvector == (int)14394;
		if(var_159_bool != 0) {
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_8003(var_161_object);
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_8044();
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_7917();
		}
		var_167_bool = var_37_cvector == (int)14389;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_8003(var_169_object);
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_8044();
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_7917();
		}
		var_175_bool = var_37_cvector == (int)14363;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_8050();
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_7866();
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_7883(var_217_object);
		}
		var_243_bool = var_37_cvector == (int)14623;
		if(var_243_bool != 0) {
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_8101();
		}
		var_257_bool = var_37_cvector == (int)34746;
		if(var_257_bool != 0) {
			var_258_object = Obj(); var_259_object = Obj();
			var_258_object = var_1_object;
			var_259_object = var_0_object;
			func_7723();
		}
		var_287_bool = var_37_cvector == (int)36091;
		if(var_287_bool != 0) {
			var_288_object = Obj(); var_289_object = Obj();
			var_288_object = var_1_object;
			var_289_object = var_0_object;
			func_7723();
		}
		var_291_bool = var_37_cvector == (int)34770;
		if(var_291_bool != 0) {
			var_292_object = Obj(); var_293_object = Obj();
			var_292_object = var_1_object;
			var_293_object = var_0_object;
			func_7739();
		}
		var_308_bool = var_37_cvector == (int)14242;
		if(var_308_bool != 0) {
			var_309_object = Obj(); var_310_object = Obj();
			var_309_object = var_1_object;
			var_310_object = var_0_object;
			func_7997();
		}
		var_314_bool = var_36_bool == (int)14240;
		if(var_314_bool != 0) {
			var_315_bool = 0; var_316_object = Obj();
			var_316_object = var_1_object;
			func_8508(var_316_object);
			if(var_315_bool != 0) {
				var_321_object = Obj(); var_322_object = Obj();
				var_321_object = var_1_object;
				var_322_object = var_0_object;
				func_7933();
				var_325_string = "";
				func_252(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)513033);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513034, (int)14260, (int)14241);
				@@@var_0_object:AddReply((int)534463, (int)36105, (int)36104);
				return 0;
			}
			var_349_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513031);
			@@@var_0_object:ClearReplies();
			var_351_bool = 0;
			var_351_bool = 0;
			var_352_bool = 0;
			var_352_bool = 0;
			var_353_bool = 0; var_354_object = Obj();
			var_354_object = var_1_object;
			func_8532(var_354_object);
			if(var_353_bool != 0) {
				var_359_bool = 0; var_360_object = Obj();
				var_360_object = var_1_object;
				func_8544(var_360_object);
				if(var_359_bool != 0) {
					var_352_bool = 1;
				}
			}
			if(var_352_bool != 0) {
				var_365_bool = 0; var_366_object = Obj();
				var_366_object = var_1_object;
				func_8556(var_365_bool, var_366_object);
				var_382_bool = var_365_bool == 0; //@nz
				if(var_382_bool != 0) {
					var_351_bool = 1;
				}
			}
			if(var_351_bool != 0) {
				@@@var_0_object:AddReply((int)513125, (int)14345, (int)14344);
			}
			var_386_bool = 0;
			var_386_bool = 0;
			var_387_bool = 0; var_388_object = Obj();
			var_388_object = var_1_object;
			func_8556(var_387_bool, var_388_object);
			if(var_387_bool != 0) {
				var_389_bool = 0; var_390_object = Obj();
				var_390_object = var_1_object;
				func_8587(var_390_object);
				if(var_389_bool != 0) {
					var_386_bool = 1;
				}
			}
			if(var_386_bool != 0) {
				@@@var_0_object:AddReply((int)513075, (int)14369, (int)14285);
			}
			var_398_bool = 0; var_399_object = Obj();
			var_399_object = var_1_object;
			func_8599(var_399_object);
			if(var_398_bool != 0) {
				@@@var_0_object:AddReply((int)513141, (int)14362, (int)14360);
			}
			var_407_bool = 0; var_408_object = Obj();
			var_408_object = var_1_object;
			func_8611(var_408_object);
			if(var_407_bool != 0) {
				@@@var_0_object:AddReply((int)513377, (int)14610, (int)14609);
			}
			var_416_bool = 0; var_417_object = Obj();
			var_417_object = var_1_object;
			func_8379(var_417_object);
			if(var_416_bool != 0) {
				@@@var_0_object:AddReply((int)533254, (int)34769, (int)34768);
			}
			var_425_bool = 0; var_426_object = Obj();
			var_426_object = var_1_object;
			func_8520(var_426_object);
			if(var_425_bool != 0) {
				@@@var_0_object:AddReply((int)513035, (int)14243, (int)14242);
			}
			@@@var_0_object:AddReply((int)513032, (int)-1, (int)14239);
			return 0;
		}
		var_438_bool = var_36_bool == (int)14243;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_252(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)513036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513134, (int)14354, (int)14353);
			@@@var_0_object:AddReply((int)513136, (int)14358, (int)14355);
			return 0;
		}
		var_448_bool = var_36_bool == (int)14358;
		if(var_448_bool != 0) {
			var_449_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513140, (int)-1, (int)14359);
			return 0;
		}
		var_455_bool = var_36_bool == (int)14354;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513135);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513138, (int)-1, (int)14357);
			return 0;
		}
		var_462_bool = var_36_bool == (int)34769;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_252(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)533255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533256, (int)-1, (int)34770);
			return 0;
		}
		var_469_bool = var_36_bool == (int)14610;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513379, (int)14612, (int)14611);
			@@@var_0_object:AddReply((int)534473, (int)14612, (int)36117);
			return 0;
		}
		var_479_bool = var_36_bool == (int)14612;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513382, (int)14616, (int)14614);
			@@@var_0_object:AddReply((int)513383, (int)14616, (int)14615);
			@@@var_0_object:AddReply((int)513381, (int)14619, (int)14613);
			return 0;
		}
		var_492_bool = var_36_bool == (int)14619;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513386);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513387, (int)14622, (int)14620);
			return 0;
		}
		var_499_bool = var_36_bool == (int)14622;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513389, (int)34743, (int)14623);
			return 0;
		}
		var_506_bool = var_36_bool == (int)34743;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533229);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533230, (int)34745, (int)34744);
			@@@var_0_object:AddReply((int)534453, (int)34745, (int)36086);
			return 0;
		}
		var_516_bool = var_36_bool == (int)34745;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534449, (int)36083, (int)36082);
			@@@var_0_object:AddReply((int)534454, (int)36085, (int)36088);
			return 0;
		}
		var_526_bool = var_36_bool == (int)36083;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)534450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534451, (int)36085, (int)36084);
			return 0;
		}
		var_533_bool = var_36_bool == (int)36085;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)534452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533232, (int)-1, (int)34746);
			@@@var_0_object:AddReply((int)534456, (int)-1, (int)36091);
			@@@var_0_object:AddReply((int)534455, (int)-1, (int)36090);
			return 0;
		}
		var_546_bool = var_36_bool == (int)14616;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513385, (int)14619, (int)14618);
			return 0;
		}
		var_553_bool = var_36_bool == (int)14362;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513143);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513144, (int)-1, (int)14363);
			return 0;
		}
		var_560_bool = var_36_bool == (int)14369;
		if(var_560_bool != 0) {
			var_561_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513151, (int)14371, (int)14370);
			return 0;
		}
		var_567_bool = var_36_bool == (int)14371;
		if(var_567_bool != 0) {
			var_568_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513152);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513153, (int)14373, (int)14372);
			return 0;
		}
		var_574_bool = var_36_bool == (int)14373;
		if(var_574_bool != 0) {
			var_575_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513154);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534471, (int)14377, (int)36114);
			@@@var_0_object:AddReply((int)513155, (int)14375, (int)14374);
			return 0;
		}
		var_584_bool = var_36_bool == (int)14375;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513157, (int)14377, (int)14376);
			return 0;
		}
		var_591_bool = var_36_bool == (int)14377;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_252(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)513158);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513159, (int)14379, (int)14378);
			@@@var_0_object:AddReply((int)513161, (int)14381, (int)14380);
			return 0;
		}
		var_601_bool = var_36_bool == (int)14381;
		if(var_601_bool != 0) {
			var_602_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513164, (int)14384, (int)14383);
			return 0;
		}
		var_608_bool = var_36_bool == (int)14379;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513160);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513163, (int)14384, (int)14382);
			return 0;
		}
		var_615_bool = var_36_bool == (int)14384;
		if(var_615_bool != 0) {
			var_616_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513166, (int)14390, (int)14386);
			@@@var_0_object:AddReply((int)513167, (int)14388, (int)14387);
			return 0;
		}
		var_625_bool = var_36_bool == (int)14388;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513168);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513169, (int)-1, (int)14389);
			return 0;
		}
		var_632_bool = var_36_bool == (int)14390;
		if(var_632_bool != 0) {
			var_633_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513171, (int)-1, (int)14391);
			@@@var_0_object:AddReply((int)513172, (int)14393, (int)14392);
			return 0;
		}
		var_642_bool = var_36_bool == (int)14393;
		if(var_642_bool != 0) {
			var_643_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513173);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513174, (int)-1, (int)14394);
			return 0;
		}
		var_649_bool = var_36_bool == (int)14345;
		if(var_649_bool != 0) {
			var_650_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535852, (int)37553, (int)37552);
			@@@var_0_object:AddReply((int)535854, (int)37553, (int)37554);
			return 0;
		}
		var_659_bool = var_36_bool == (int)37553;
		if(var_659_bool != 0) {
			var_660_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)535853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513127, (int)14348, (int)14346);
			@@@var_0_object:AddReply((int)513128, (int)-1, (int)14347);
			return 0;
		}
		var_669_bool = var_36_bool == (int)14348;
		if(var_669_bool != 0) {
			var_670_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513130, (int)14350, (int)14349);
			@@@var_0_object:AddReply((int)534472, (int)-1, (int)36116);
			return 0;
		}
		var_679_bool = var_36_bool == (int)14350;
		if(var_679_bool != 0) {
			var_680_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513132, (int)-1, (int)14351);
			@@@var_0_object:AddReply((int)513133, (int)-1, (int)14352);
			return 0;
		}
		var_689_bool = var_36_bool == (int)36105;
		if(var_689_bool != 0) {
			var_690_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)534464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534465, (int)36107, (int)36106);
			return 0;
		}
		var_696_bool = var_36_bool == (int)36107;
		if(var_696_bool != 0) {
			var_697_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)534466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534467, (int)14260, (int)36108);
			@@@var_0_object:AddReply((int)534468, (int)36110, (int)36109);
			return 0;
		}
		var_706_bool = var_36_bool == (int)36110;
		if(var_706_bool != 0) {
			var_707_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)534469);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534470, (int)14284, (int)36111);
			return 0;
		}
		var_713_bool = var_36_bool == (int)14260;
		if(var_713_bool != 0) {
			var_714_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513053, (int)14262, (int)14261);
			@@@var_0_object:AddReply((int)513108, (int)14262, (int)14323);
			return 0;
		}
		var_723_bool = var_36_bool == (int)14262;
		if(var_723_bool != 0) {
			var_724_string = "";
			func_252(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513055, (int)14264, (int)14263);
			@@@var_0_object:AddReply((int)513110, (int)14264, (int)14326);
			return 0;
		}
		var_733_bool = var_36_bool == (int)14264;
		if(var_733_bool != 0) {
			var_734_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513057, (int)14266, (int)14265);
			return 0;
		}
		var_740_bool = var_36_bool == (int)14266;
		if(var_740_bool != 0) {
			var_741_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513059, (int)14269, (int)14267);
			@@@var_0_object:AddReply((int)513060, (int)14557, (int)14268);
			return 0;
		}
		var_750_bool = var_36_bool == (int)14269;
		if(var_750_bool != 0) {
			var_751_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513321, (int)14557, (int)14556);
			return 0;
		}
		var_757_bool = var_36_bool == (int)14557;
		if(var_757_bool != 0) {
			var_758_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513323, (int)14284, (int)14558);
			return 0;
		}
		var_764_bool = var_36_bool == (int)14284;
		if(var_764_bool != 0) {
			var_765_string = "";
			func_252(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)513074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513076, (int)14287, (int)14286);
			@@@var_0_object:AddReply((int)513117, (int)14336, (int)14335);
			return 0;
		}
		var_774_bool = var_36_bool == (int)14336;
		if(var_774_bool != 0) {
			var_775_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513119, (int)14289, (int)14337);
			return 0;
		}
		var_781_bool = var_36_bool == (int)14287;
		if(var_781_bool != 0) {
			var_782_string = "";
			func_252(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513078, (int)14289, (int)14288);
			return 0;
		}
		var_788_bool = var_36_bool == (int)14289;
		if(var_788_bool != 0) {
			var_789_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513082, (int)14296, (int)14292);
			@@@var_0_object:AddReply((int)513080, (int)14291, (int)14290);
			return 0;
		}
		var_798_bool = var_36_bool == (int)14291;
		if(var_798_bool != 0) {
			var_799_string = "";
			func_252(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)513081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513083, (int)14294, (int)14293);
			return 0;
		}
		var_805_bool = var_36_bool == (int)14294;
		if(var_805_bool != 0) {
			var_806_string = "";
			func_252(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)513084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513085, (int)14296, (int)14295);
			return 0;
		}
		var_812_bool = var_36_bool == (int)14296;
		if(var_812_bool != 0) {
			var_813_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513111, (int)14329, (int)14328);
			return 0;
		}
		var_819_bool = var_36_bool == (int)14329;
		if(var_819_bool != 0) {
			var_820_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513113, (int)14332, (int)14331);
			return 0;
		}
		var_826_bool = var_36_bool == (int)14332;
		if(var_826_bool != 0) {
			var_827_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513114);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513120, (int)14340, (int)14339);
			@@@var_0_object:AddReply((int)513115, (int)14334, (int)14333);
			return 0;
		}
		var_836_bool = var_36_bool == (int)14334;
		if(var_836_bool != 0) {
			var_837_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513116);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534431, (int)14340, (int)36061);
			return 0;
		}
		var_843_bool = var_36_bool == (int)14340;
		if(var_843_bool != 0) {
			var_844_string = "";
			func_252(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513122, (int)14342, (int)14341);
			return 0;
		}
		var_850_bool = var_36_bool == (int)14342;
		if(var_850_bool != 0) {
			var_851_string = "";
			func_252(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)513123);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513124, (int)-1, (int)14343);
			return 0;
		}
		var_3_string = true;
		var_856_bool = 0;
		func_7699(var_856_bool);
		if(var_856_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x113";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_7507();
		var_41_bool = var_37_cvector == (int)14980;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_8110();
		}
		var_84_bool = var_37_cvector == (int)37557;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_8110();
		}
		var_88_bool = var_37_cvector == (int)14645;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_7790();
		}
		var_94_bool = var_37_cvector == (int)13413;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_8139();
		}
		var_100_bool = var_37_cvector == (int)14646;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_8133();
		}
		var_106_bool = var_36_bool == (int)16355;
		if(var_106_bool != 0) {
			var_107_bool = 0; var_108_object = Obj();
			var_108_object = var_1_object;
			func_8635(var_108_object);
			if(var_107_bool != 0) {
				var_115_object = Obj(); var_116_object = Obj();
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_8127();
				var_119_object = Obj(); var_120_object = Obj();
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_7796();
				var_123_string = "";
				func_1775(var_37_cvector, "Arrogance");
				@@@var_0_object:SetMessage((int)515089);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535859, (int)37561, (int)37560);
				return 0;
			}
			var_144_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513409);
			@@@var_0_object:ClearReplies();
			var_146_bool = 0; var_147_object = Obj();
			var_147_object = var_1_object;
			func_8623(var_147_object);
			if(var_146_bool != 0) {
				@@@var_0_object:AddReply((int)535855, (int)14647, (int)37556);
			}
			var_155_bool = 0; var_156_object = Obj();
			var_156_object = var_1_object;
			func_8403(var_156_object);
			if(var_155_bool != 0) {
				@@@var_0_object:AddReply((int)513411, (int)13400, (int)14645);
			}
			var_164_bool = 0;
			var_164_bool = 0;
			var_165_bool = 0; var_166_object = Obj();
			var_166_object = var_1_object;
			func_8647(var_166_object);
			if(var_165_bool != 0) {
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_8659(var_172_object);
				if(var_171_bool != 0) {
					var_164_bool = 1;
				}
			}
			if(var_164_bool != 0) {
				@@@var_0_object:AddReply((int)513412, (int)13452, (int)14646);
			}
			@@@var_0_object:AddReply((int)513410, (int)-1, (int)14644);
			return 0;
		}
		var_184_bool = var_36_bool == (int)13452;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512294, (int)13454, (int)13453);
			return 0;
		}
		var_191_bool = var_36_bool == (int)13454;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512296, (int)13457, (int)13455);
			@@@var_0_object:AddReply((int)512297, (int)-1, (int)13456);
			return 0;
		}
		var_201_bool = var_36_bool == (int)13457;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512299, (int)13459, (int)13458);
			return 0;
		}
		var_208_bool = var_36_bool == (int)13459;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_1775(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)512300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512301, (int)13461, (int)13460);
			return 0;
		}
		var_215_bool = var_36_bool == (int)13461;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_1775(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)512302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512303, (int)13463, (int)13462);
			return 0;
		}
		var_222_bool = var_36_bool == (int)13463;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512305, (int)13465, (int)13464);
			return 0;
		}
		var_229_bool = var_36_bool == (int)13465;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512306);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512307, (int)-1, (int)13466);
			@@@var_0_object:AddReply((int)512308, (int)-1, (int)13467);
			return 0;
		}
		var_239_bool = var_36_bool == (int)13400;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512244);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512245, (int)13402, (int)13401);
			return 0;
		}
		var_246_bool = var_36_bool == (int)13402;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512248, (int)13405, (int)13404);
			@@@var_0_object:AddReply((int)512247, (int)13409, (int)13403);
			return 0;
		}
		var_256_bool = var_36_bool == (int)13405;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_1775(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)512249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512250, (int)13407, (int)13406);
			return 0;
		}
		var_263_bool = var_36_bool == (int)13407;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_1775(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)512251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512252, (int)13409, (int)13408);
			return 0;
		}
		var_270_bool = var_36_bool == (int)13409;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512254, (int)13411, (int)13410);
			return 0;
		}
		var_277_bool = var_36_bool == (int)13411;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512256, (int)-1, (int)13413);
			return 0;
		}
		var_284_bool = var_36_bool == (int)14647;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_1775(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513415, (int)14650, (int)14649);
			@@@var_0_object:AddReply((int)513417, (int)14949, (int)14652);
			@@@var_0_object:AddReply((int)513414, (int)14650, (int)14648);
			return 0;
		}
		var_297_bool = var_36_bool == (int)14949;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_1775(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)513688);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513689, (int)14952, (int)14951);
			return 0;
		}
		var_304_bool = var_36_bool == (int)14952;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_1775(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)513690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513691, (int)14650, (int)14953);
			@@@var_0_object:AddReply((int)513692, (int)14650, (int)14954);
			@@@var_0_object:AddReply((int)513693, (int)14650, (int)14955);
			return 0;
		}
		var_317_bool = var_36_bool == (int)14650;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_1775(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513416);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513421, (int)14959, (int)14657);
			return 0;
		}
		var_324_bool = var_36_bool == (int)14959;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_1775(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513695, (int)14963, (int)14960);
			@@@var_0_object:AddReply((int)513696, (int)14963, (int)14961);
			@@@var_0_object:AddReply((int)513697, (int)14963, (int)14962);
			return 0;
		}
		var_337_bool = var_36_bool == (int)14963;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513699, (int)14970, (int)14964);
			@@@var_0_object:AddReply((int)513700, (int)14968, (int)14967);
			return 0;
		}
		var_347_bool = var_36_bool == (int)14968;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513702, (int)14970, (int)14969);
			return 0;
		}
		var_354_bool = var_36_bool == (int)14970;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513704, (int)14972, (int)14971);
			return 0;
		}
		var_361_bool = var_36_bool == (int)14972;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513706, (int)14975, (int)14974);
			return 0;
		}
		var_368_bool = var_36_bool == (int)14975;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513708, (int)14978, (int)14976);
			@@@var_0_object:AddReply((int)513709, (int)14978, (int)14977);
			return 0;
		}
		var_378_bool = var_36_bool == (int)14978;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513710);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513711, (int)-1, (int)14980);
			@@@var_0_object:AddReply((int)535857, (int)37559, (int)37558);
			return 0;
		}
		var_388_bool = var_36_bool == (int)37559;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535856, (int)-1, (int)37557);
			return 0;
		}
		var_395_bool = var_36_bool == (int)37561;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_1775(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)535860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535861, (int)37563, (int)37562);
			@@@var_0_object:AddReply((int)535867, (int)37569, (int)37568);
			return 0;
		}
		var_405_bool = var_36_bool == (int)37569;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_1775(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)535868);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535869, (int)37563, (int)37570);
			@@@var_0_object:AddReply((int)535870, (int)-1, (int)37571);
			return 0;
		}
		var_415_bool = var_36_bool == (int)37563;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_1775(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)535862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535863, (int)37565, (int)37564);
			@@@var_0_object:AddReply((int)535871, (int)37565, (int)37573);
			return 0;
		}
		var_425_bool = var_36_bool == (int)37565;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_1775(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)535864);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535876, (int)37581, (int)37580);
			@@@var_0_object:AddReply((int)535872, (int)37576, (int)37575);
			@@@var_0_object:AddReply((int)535880, (int)37567, (int)37584);
			return 0;
		}
		var_438_bool = var_36_bool == (int)37576;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_1775(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)535873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535874, (int)16357, (int)37577);
			return 0;
		}
		var_445_bool = var_36_bool == (int)37581;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535865, (int)37567, (int)37566);
			return 0;
		}
		var_452_bool = var_36_bool == (int)37567;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_1775(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)535866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515090, (int)16357, (int)16356);
			return 0;
		}
		var_459_bool = var_36_bool == (int)16357;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_1775(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)515091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535881, (int)16359, (int)37586);
			@@@var_0_object:AddReply((int)515092, (int)16359, (int)16358);
			return 0;
		}
		var_469_bool = var_36_bool == (int)16359;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_1775(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515094, (int)-1, (int)16360);
			@@@var_0_object:AddReply((int)535875, (int)-1, (int)37579);
			return 0;
		}
		var_3_string = true;
		var_478_bool = 0;
		func_7699(var_478_bool);
		if(var_478_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x706";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_7507();
		var_41_bool = var_37_cvector == (int)14104;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_8207();
		}
		var_100_bool = var_37_cvector == (int)40830;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_8207();
		}
		var_104_bool = var_37_cvector == (int)14118;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_8244();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_7860(var_128_object);
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_7917();
		}
		var_138_bool = var_37_cvector == (int)40452;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_8244();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_7860(var_142_object);
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_7917();
		}
		var_146_bool = var_37_cvector == (int)14114;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_8274();
		}
		var_152_bool = var_37_cvector == (int)35712;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_7764();
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_7701();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_7713(var_171_object);
		}
		var_192_bool = var_36_bool == (int)14101;
		if(var_192_bool != 0) {
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_8767(var_194_object);
			if(var_193_bool != 0) {
				var_201_object = Obj(); var_202_object = Obj();
				var_201_object = var_1_object;
				var_202_object = var_0_object;
				func_8238();
				var_205_object = Obj(); var_206_object = Obj();
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_7802();
				var_209_string = "";
				func_2877(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)512899);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)538546, (int)40428, (int)40427);
				@@@var_0_object:AddReply((int)538571, (int)40458, (int)40456);
				@@@var_0_object:AddReply((int)538572, (int)40428, (int)40457);
				return 0;
			}
			var_236_string = "";
			func_2877(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)512905);
			@@@var_0_object:ClearReplies();
			var_238_bool = 0;
			var_238_bool = 0;
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_8803(var_240_object);
			if(var_239_bool != 0) {
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_8815(var_245_bool, var_246_object);
				if(var_245_bool != 0) {
					var_238_bool = 1;
				}
			}
			if(var_238_bool != 0) {
				@@@var_0_object:AddReply((int)512906, (int)40435, (int)14108);
			}
			var_256_bool = 0;
			var_256_bool = 0;
			var_257_bool = 0; var_258_object = Obj();
			var_258_object = var_1_object;
			func_8779(var_258_object);
			if(var_257_bool != 0) {
				var_263_bool = 0; var_264_object = Obj();
				var_264_object = var_1_object;
				func_8791(var_264_object);
				if(var_263_bool != 0) {
					var_256_bool = 1;
				}
			}
			if(var_256_bool != 0) {
				@@@var_0_object:AddReply((int)512912, (int)14119, (int)14114);
			}
			var_272_bool = 0; var_273_object = Obj();
			var_273_object = var_1_object;
			func_8391(var_273_object);
			if(var_272_bool != 0) {
				@@@var_0_object:AddReply((int)534117, (int)35711, (int)35710);
			}
			@@@var_0_object:AddReply((int)512911, (int)-1, (int)14113);
			@@@var_0_object:AddReply((int)538502, (int)-1, (int)40392);
			return 0;
		}
		var_288_bool = var_36_bool == (int)35711;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536487, (int)38287, (int)38286);
			return 0;
		}
		var_295_bool = var_36_bool == (int)38287;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536488);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536489, (int)38290, (int)38288);
			@@@var_0_object:AddReply((int)536490, (int)38290, (int)38289);
			return 0;
		}
		var_305_bool = var_36_bool == (int)38290;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_2877(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)536491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536493, (int)38293, (int)38292);
			return 0;
		}
		var_312_bool = var_36_bool == (int)38293;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_2877(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)536494);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534119, (int)-1, (int)35712);
			return 0;
		}
		var_319_bool = var_36_bool == (int)14119;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_2877(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)512915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512916, (int)14122, (int)14120);
			@@@var_0_object:AddReply((int)512917, (int)14122, (int)14121);
			return 0;
		}
		var_329_bool = var_36_bool == (int)14122;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512919, (int)14125, (int)14124);
			@@@var_0_object:AddReply((int)538564, (int)-1, (int)40449);
			return 0;
		}
		var_339_bool = var_36_bool == (int)14125;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538568, (int)40454, (int)40453);
			@@@var_0_object:AddReply((int)512921, (int)-1, (int)14126);
			return 0;
		}
		var_349_bool = var_36_bool == (int)40454;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512922, (int)14128, (int)14127);
			return 0;
		}
		var_356_bool = var_36_bool == (int)14128;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_2877(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)512923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512924, (int)-1, (int)14129);
			@@@var_0_object:AddReply((int)538570, (int)-1, (int)40455);
			return 0;
		}
		var_366_bool = var_36_bool == (int)40435;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_2877(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)538554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538555, (int)40437, (int)40436);
			@@@var_0_object:AddReply((int)538558, (int)14109, (int)40439);
			return 0;
		}
		var_376_bool = var_36_bool == (int)40437;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538556);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538557, (int)40442, (int)40438);
			@@@var_0_object:AddReply((int)538559, (int)40442, (int)40441);
			@@@var_0_object:AddReply((int)538562, (int)40442, (int)40444);
			return 0;
		}
		var_389_bool = var_36_bool == (int)40442;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538561, (int)14109, (int)40443);
			@@@var_0_object:AddReply((int)538563, (int)14109, (int)40447);
			return 0;
		}
		var_399_bool = var_36_bool == (int)14109;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512908, (int)14115, (int)14110);
			@@@var_0_object:AddReply((int)512909, (int)14115, (int)14111);
			@@@var_0_object:AddReply((int)512910, (int)14115, (int)14112);
			return 0;
		}
		var_412_bool = var_36_bool == (int)14115;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_2877(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)512913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512914, (int)-1, (int)14118);
			@@@var_0_object:AddReply((int)538567, (int)-1, (int)40452);
			return 0;
		}
		var_422_bool = var_36_bool == (int)40458;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538573);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538873, (int)40428, (int)40810);
			@@@var_0_object:AddReply((int)538874, (int)40428, (int)40811);
			return 0;
		}
		var_432_bool = var_36_bool == (int)40428;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538548, (int)40430, (int)40429);
			@@@var_0_object:AddReply((int)538876, (int)40817, (int)40816);
			return 0;
		}
		var_442_bool = var_36_bool == (int)40817;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538878, (int)40819, (int)40818);
			return 0;
		}
		var_449_bool = var_36_bool == (int)40819;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538879);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538880, (int)40430, (int)40820);
			@@@var_0_object:AddReply((int)538881, (int)40434, (int)40821);
			return 0;
		}
		var_459_bool = var_36_bool == (int)40430;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538550, (int)40432, (int)40431);
			@@@var_0_object:AddReply((int)538882, (int)40434, (int)40823);
			return 0;
		}
		var_469_bool = var_36_bool == (int)40432;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538552, (int)40434, (int)40433);
			return 0;
		}
		var_476_bool = var_36_bool == (int)40434;
		if(var_476_bool != 0) {
			var_477_string = "";
			func_2877(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)538553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512900, (int)14103, (int)14102);
			@@@var_0_object:AddReply((int)538883, (int)14103, (int)40826);
			return 0;
		}
		var_486_bool = var_36_bool == (int)14103;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_2877(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)512901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512902, (int)-1, (int)14104);
			@@@var_0_object:AddReply((int)512904, (int)40829, (int)14106);
			return 0;
		}
		var_496_bool = var_36_bool == (int)40829;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_2877(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538886, (int)-1, (int)40830);
			return 0;
		}
		var_3_string = true;
		var_502_bool = 0;
		func_7699(var_502_bool);
		if(var_502_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb54";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_7507();
		var_41_bool = var_37_cvector == (int)15039;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_7820();
		}
		var_102_bool = var_37_cvector == (int)15040;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_7820();
		}
		var_106_bool = var_37_cvector == (int)15092;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_8201();
		}
		var_112_bool = var_37_cvector == (int)15079;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_8195();
		}
		var_118_bool = var_37_cvector == (int)15046;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_8189();
		}
		var_124_bool = var_37_cvector == (int)40791;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_7808();
		}
		var_130_bool = var_37_cvector == (int)40808;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_7923(var_132_object);
		}
		var_153_bool = var_37_cvector == (int)42003;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_7850();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_7713(var_171_object);
		}
		var_176_bool = var_37_cvector == (int)42004;
		if(var_176_bool != 0) {
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_7850();
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_7923(var_180_object);
		}
		var_182_bool = var_36_bool == (int)15028;
		if(var_182_bool != 0) {
			var_183_bool = 0; var_184_object = Obj();
			var_184_object = var_1_object;
			func_8719(var_184_object);
			if(var_183_bool != 0) {
				var_191_object = Obj(); var_192_object = Obj();
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_8183();
				var_195_object = Obj(); var_196_object = Obj();
				var_195_object = var_1_object;
				var_196_object = var_0_object;
				func_7814();
				var_199_string = "";
				func_3848(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)513802);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513803, (int)15030, (int)15029);
				@@@var_0_object:AddReply((int)513815, (int)15042, (int)15041);
				return 0;
			}
			var_223_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513818);
			@@@var_0_object:ClearReplies();
			var_225_bool = 0; var_226_object = Obj();
			var_226_object = var_1_object;
			func_8755(var_226_object);
			if(var_225_bool != 0) {
				@@@var_0_object:AddReply((int)513865, (int)15093, (int)15092);
			}
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_8743(var_235_object);
			if(var_234_bool != 0) {
				@@@var_0_object:AddReply((int)513852, (int)15080, (int)15079);
			}
			var_243_bool = 0;
			var_243_bool = 0;
			var_244_bool = 0; var_245_object = Obj();
			var_245_object = var_1_object;
			func_8731(var_245_object);
			if(var_244_bool != 0) {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_object;
				func_8671(var_251_object);
				if(var_250_bool != 0) {
					var_243_bool = 1;
				}
			}
			if(var_243_bool != 0) {
				@@@var_0_object:AddReply((int)513819, (int)15047, (int)15046);
			}
			var_259_bool = 0;
			var_259_bool = 0;
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_object;
			func_8415(var_261_object);
			if(var_260_bool != 0) {
				var_266_bool = 0; var_267_object = Obj();
				var_267_object = var_1_object;
				func_8427(var_267_object);
				if(var_266_bool != 0) {
					var_259_bool = 1;
				}
			}
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)538857, (int)40792, (int)40791);
			}
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_8439(var_276_object);
			if(var_275_bool != 0) {
				@@@var_0_object:AddReply((int)540032, (int)42000, (int)41999);
			}
			@@@var_0_object:AddReply((int)513880, (int)-1, (int)15107);
			return 0;
		}
		var_288_bool = var_36_bool == (int)42000;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_3848(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)540033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540034, (int)42002, (int)42001);
			return 0;
		}
		var_295_bool = var_36_bool == (int)42002;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_3848(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)540035);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540036, (int)-1, (int)42003);
			@@@var_0_object:AddReply((int)540037, (int)-1, (int)42004);
			return 0;
		}
		var_305_bool = var_36_bool == (int)40792;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538859, (int)40796, (int)40793);
			@@@var_0_object:AddReply((int)538861, (int)40796, (int)40795);
			@@@var_0_object:AddReply((int)538860, (int)40799, (int)40794);
			return 0;
		}
		var_318_bool = var_36_bool == (int)40799;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538866, (int)40802, (int)40801);
			return 0;
		}
		var_325_bool = var_36_bool == (int)40796;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_3848(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)538862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538864, (int)40802, (int)40798);
			@@@var_0_object:AddReply((int)538863, (int)-1, (int)40797);
			return 0;
		}
		var_335_bool = var_36_bool == (int)40802;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538868, (int)40806, (int)40804);
			@@@var_0_object:AddReply((int)538869, (int)40806, (int)40805);
			return 0;
		}
		var_345_bool = var_36_bool == (int)40806;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538871, (int)-1, (int)40808);
			@@@var_0_object:AddReply((int)538872, (int)-1, (int)40809);
			return 0;
		}
		var_355_bool = var_36_bool == (int)15047;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_3848(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513821, (int)15049, (int)15048);
			@@@var_0_object:AddReply((int)513839, (int)15067, (int)15066);
			return 0;
		}
		var_365_bool = var_36_bool == (int)15067;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513841, (int)15057, (int)15068);
			return 0;
		}
		var_372_bool = var_36_bool == (int)15049;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_3848(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513822);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513823, (int)15051, (int)15050);
			@@@var_0_object:AddReply((int)513842, (int)15070, (int)15069);
			return 0;
		}
		var_382_bool = var_36_bool == (int)15070;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513844, (int)15072, (int)15071);
			return 0;
		}
		var_389_bool = var_36_bool == (int)15072;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513846, (int)15074, (int)15073);
			@@@var_0_object:AddReply((int)513849, (int)15077, (int)15076);
			return 0;
		}
		var_399_bool = var_36_bool == (int)15077;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513851, (int)-1, (int)15078);
			return 0;
		}
		var_406_bool = var_36_bool == (int)15074;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513848, (int)-1, (int)15075);
			return 0;
		}
		var_413_bool = var_36_bool == (int)15051;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513824);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513827, (int)15055, (int)15054);
			@@@var_0_object:AddReply((int)513825, (int)15053, (int)15052);
			return 0;
		}
		var_423_bool = var_36_bool == (int)15053;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513826);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529820, (int)15057, (int)31268);
			return 0;
		}
		var_430_bool = var_36_bool == (int)15055;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_3848(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513828);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513829, (int)15057, (int)15056);
			return 0;
		}
		var_437_bool = var_36_bool == (int)15057;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_3848(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513831, (int)15059, (int)15058);
			@@@var_0_object:AddReply((int)513838, (int)-1, (int)15065);
			return 0;
		}
		var_447_bool = var_36_bool == (int)15059;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513833, (int)15061, (int)15060);
			return 0;
		}
		var_454_bool = var_36_bool == (int)15061;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513834);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513835, (int)15063, (int)15062);
			return 0;
		}
		var_461_bool = var_36_bool == (int)15063;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513836);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513837, (int)-1, (int)15064);
			return 0;
		}
		var_468_bool = var_36_bool == (int)15080;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_3848(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513854, (int)15082, (int)15081);
			@@@var_0_object:AddReply((int)538731, (int)-1, (int)40641);
			return 0;
		}
		var_478_bool = var_36_bool == (int)15082;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_3848(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)513855);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513856, (int)40636, (int)15083);
			@@@var_0_object:AddReply((int)513857, (int)15085, (int)15084);
			@@@var_0_object:AddReply((int)538732, (int)15085, (int)40642);
			return 0;
		}
		var_491_bool = var_36_bool == (int)15085;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513859, (int)15090, (int)15086);
			@@@var_0_object:AddReply((int)513860, (int)15088, (int)15087);
			return 0;
		}
		var_501_bool = var_36_bool == (int)15088;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513861);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513862, (int)15090, (int)15089);
			@@@var_0_object:AddReply((int)513864, (int)40636, (int)15091);
			return 0;
		}
		var_511_bool = var_36_bool == (int)15090;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529821, (int)40636, (int)31270);
			return 0;
		}
		var_518_bool = var_36_bool == (int)40636;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538728);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538729, (int)-1, (int)40637);
			@@@var_0_object:AddReply((int)538730, (int)-1, (int)40638);
			return 0;
		}
		var_528_bool = var_36_bool == (int)15093;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_3848(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)513866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513867, (int)15095, (int)15094);
			return 0;
		}
		var_535_bool = var_36_bool == (int)15095;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513868);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513869, (int)15097, (int)15096);
			@@@var_0_object:AddReply((int)513876, (int)15104, (int)15103);
			return 0;
		}
		var_545_bool = var_36_bool == (int)15104;
		if(var_545_bool != 0) {
			var_546_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513878, (int)-1, (int)15105);
			@@@var_0_object:AddReply((int)513879, (int)-1, (int)15106);
			return 0;
		}
		var_555_bool = var_36_bool == (int)15097;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513871, (int)-1, (int)15098);
			@@@var_0_object:AddReply((int)513872, (int)15100, (int)15099);
			return 0;
		}
		var_565_bool = var_36_bool == (int)15100;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513874, (int)-1, (int)15101);
			@@@var_0_object:AddReply((int)513875, (int)-1, (int)15102);
			return 0;
		}
		var_575_bool = var_36_bool == (int)15042;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513817, (int)15030, (int)15043);
			return 0;
		}
		var_582_bool = var_36_bool == (int)15030;
		if(var_582_bool != 0) {
			var_583_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513805, (int)15032, (int)15031);
			@@@var_0_object:AddReply((int)538722, (int)15036, (int)40627);
			return 0;
		}
		var_592_bool = var_36_bool == (int)15032;
		if(var_592_bool != 0) {
			var_593_string = "";
			func_3848(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)513806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513807, (int)15034, (int)15033);
			@@@var_0_object:AddReply((int)538723, (int)40630, (int)40629);
			return 0;
		}
		var_602_bool = var_36_bool == (int)40630;
		if(var_602_bool != 0) {
			var_603_string = "";
			func_3848(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)538724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538725, (int)15036, (int)40631);
			@@@var_0_object:AddReply((int)538726, (int)15036, (int)40632);
			return 0;
		}
		var_612_bool = var_36_bool == (int)15034;
		if(var_612_bool != 0) {
			var_613_string = "";
			func_3848(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)513808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513809, (int)15036, (int)15035);
			return 0;
		}
		var_619_bool = var_36_bool == (int)15036;
		if(var_619_bool != 0) {
			var_620_string = "";
			func_3848(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)513810);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513811, (int)15038, (int)15037);
			@@@var_0_object:AddReply((int)513814, (int)-1, (int)15040);
			return 0;
		}
		var_629_bool = var_36_bool == (int)15038;
		if(var_629_bool != 0) {
			var_630_string = "";
			func_3848(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513813, (int)-1, (int)15039);
			@@@var_0_object:AddReply((int)538727, (int)-1, (int)40635);
			return 0;
		}
		var_3_string = true;
		var_638_bool = 0;
		func_7699(var_638_bool);
		if(var_638_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf1f";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_7507();
		var_41_bool = var_37_cvector == (int)15421;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_8151();
		}
		var_87_bool = var_37_cvector == (int)15422;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_8151();
		}
		var_91_bool = var_37_cvector == (int)36123;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_7774();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_7753(var_121_object);
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_7707();
		}
		var_149_bool = var_37_cvector == (int)15451;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_8173();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_7905(var_164_object);
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_7917();
		}
		var_174_bool = var_37_cvector == (int)15452;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_7899();
		}
		var_180_bool = var_36_bool == (int)15408;
		if(var_180_bool != 0) {
			var_181_bool = 0; var_182_object = Obj();
			var_182_object = var_1_object;
			func_8695(var_182_object);
			if(var_181_bool != 0) {
				var_189_object = Obj(); var_190_object = Obj();
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_8280();
				var_193_string = "";
				func_5151(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)514194);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514195, (int)15410, (int)15409);
				return 0;
			}
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_8683(var_215_object);
			if(var_214_bool != 0) {
				var_220_object = Obj(); var_221_object = Obj();
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_8145();
				var_224_string = "";
				func_5151(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)534475);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)536564, (int)38380, (int)38379);
				@@@var_0_object:AddReply((int)536570, (int)38380, (int)38385);
				return 0;
			}
			var_232_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514222);
			@@@var_0_object:ClearReplies();
			var_234_bool = 0;
			var_234_bool = 0;
			var_235_bool = 0; var_236_object = Obj();
			var_236_object = var_1_object;
			func_8707(var_236_object);
			if(var_235_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_8463(var_241_bool, var_242_object);
				if(var_241_bool != 0) {
					var_234_bool = 1;
				}
			}
			if(var_234_bool != 0) {
				@@@var_0_object:AddReply((int)514223, (int)15442, (int)15441);
			}
			var_253_bool = 0;
			var_253_bool = 0;
			var_254_bool = 0; var_255_object = Obj();
			var_255_object = var_1_object;
			func_8451(var_255_object);
			if(var_254_bool != 0) {
				var_260_bool = 0; var_261_object = Obj();
				var_261_object = var_1_object;
				func_8486(var_261_object);
				if(var_260_bool != 0) {
					var_253_bool = 1;
				}
			}
			if(var_253_bool != 0) {
				@@@var_0_object:AddReply((int)514234, (int)15453, (int)15452);
			}
			@@@var_0_object:AddReply((int)514239, (int)-1, (int)15457);
			return 0;
		}
		var_273_bool = var_36_bool == (int)15453;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_5151(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)514235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514236, (int)15455, (int)15454);
			return 0;
		}
		var_280_bool = var_36_bool == (int)15455;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_5151(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)514237);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514238, (int)-1, (int)15456);
			return 0;
		}
		var_287_bool = var_36_bool == (int)15442;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_5151(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)514224);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514225, (int)15444, (int)15443);
			@@@var_0_object:AddReply((int)536562, (int)15444, (int)38375);
			return 0;
		}
		var_297_bool = var_36_bool == (int)15444;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_5151(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)514226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514227, (int)15446, (int)15445);
			@@@var_0_object:AddReply((int)536563, (int)15448, (int)38377);
			return 0;
		}
		var_307_bool = var_36_bool == (int)15446;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514229, (int)15448, (int)15447);
			return 0;
		}
		var_314_bool = var_36_bool == (int)15448;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_5151(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)514230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514231, (int)15450, (int)15449);
			@@@var_0_object:AddReply((int)536561, (int)15450, (int)38373);
			return 0;
		}
		var_324_bool = var_36_bool == (int)15450;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514232);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514233, (int)-1, (int)15451);
			return 0;
		}
		var_331_bool = var_36_bool == (int)38380;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536565);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536571, (int)38388, (int)38387);
			@@@var_0_object:AddReply((int)536566, (int)38388, (int)38381);
			return 0;
		}
		var_341_bool = var_36_bool == (int)38388;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536573, (int)38391, (int)38389);
			@@@var_0_object:AddReply((int)536576, (int)38395, (int)38393);
			return 0;
		}
		var_351_bool = var_36_bool == (int)38391;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_5151(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)536574);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536575, (int)38382, (int)38392);
			@@@var_0_object:AddReply((int)536577, (int)38395, (int)38394);
			return 0;
		}
		var_361_bool = var_36_bool == (int)38395;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536579, (int)38382, (int)38397);
			@@@var_0_object:AddReply((int)536580, (int)38382, (int)38398);
			return 0;
		}
		var_371_bool = var_36_bool == (int)38382;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_5151(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)536567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536568, (int)38384, (int)38383);
			@@@var_0_object:AddReply((int)534476, (int)36122, (int)36121);
			return 0;
		}
		var_381_bool = var_36_bool == (int)36122;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536582, (int)38404, (int)38403);
			return 0;
		}
		var_388_bool = var_36_bool == (int)38404;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536584, (int)38406, (int)38405);
			@@@var_0_object:AddReply((int)536586, (int)38406, (int)38407);
			return 0;
		}
		var_398_bool = var_36_bool == (int)38406;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536585);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534478, (int)-1, (int)36123);
			@@@var_0_object:AddReply((int)534479, (int)-1, (int)36124);
			return 0;
		}
		var_408_bool = var_36_bool == (int)38384;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_5151(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)536569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536581, (int)36122, (int)38401);
			return 0;
		}
		var_415_bool = var_36_bool == (int)15410;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514197, (int)15412, (int)15411);
			@@@var_0_object:AddReply((int)514218, (int)15412, (int)15435);
			@@@var_0_object:AddReply((int)514219, (int)15438, (int)15437);
			return 0;
		}
		var_428_bool = var_36_bool == (int)15438;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514220);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514221, (int)15412, (int)15439);
			return 0;
		}
		var_435_bool = var_36_bool == (int)15412;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_5151(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)514198);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514199, (int)15414, (int)15413);
			@@@var_0_object:AddReply((int)514212, (int)15428, (int)15427);
			return 0;
		}
		var_445_bool = var_36_bool == (int)15428;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_5151(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)514213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514214, (int)15430, (int)15429);
			@@@var_0_object:AddReply((int)514217, (int)15430, (int)15433);
			return 0;
		}
		var_455_bool = var_36_bool == (int)15430;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_5151(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)514215);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514216, (int)15420, (int)15431);
			return 0;
		}
		var_462_bool = var_36_bool == (int)15414;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514201, (int)15416, (int)15415);
			return 0;
		}
		var_469_bool = var_36_bool == (int)15416;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514202);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514203, (int)15418, (int)15417);
			@@@var_0_object:AddReply((int)514209, (int)15424, (int)15423);
			return 0;
		}
		var_479_bool = var_36_bool == (int)15424;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514211, (int)15418, (int)15425);
			return 0;
		}
		var_486_bool = var_36_bool == (int)15418;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514204);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514205, (int)15420, (int)15419);
			@@@var_0_object:AddReply((int)514208, (int)-1, (int)15422);
			return 0;
		}
		var_496_bool = var_36_bool == (int)15420;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_5151(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514207, (int)-1, (int)15421);
			return 0;
		}
		var_3_string = true;
		var_502_bool = 0;
		func_7699(var_502_bool);
		if(var_502_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1436";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_7507();
		var_41_bool = var_36_bool == (int)34605;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533096);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533097, (int)34607, (int)34606);
			@@@var_0_object:AddReply((int)533103, (int)34615, (int)34614);
			return 0;
		}
		var_67_bool = var_36_bool == (int)34615;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_6050(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)533104);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533105, (int)34617, (int)34616);
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_8298(var_74_object);
			var_96_bool = var_73_bool == 0; //@nz
			if(var_96_bool != 0) {
				@@@var_0_object:AddReply((int)533125, (int)34637, (int)34636);
			}
			return 0;
		}
		var_101_bool = var_36_bool == (int)34637;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533126);
			@@@var_0_object:ClearReplies();
			var_104_bool = 0; var_105_object = Obj();
			var_105_object = var_1_object;
			func_8286(var_105_object);
			if(var_104_bool != 0) {
				@@@var_0_object:AddReply((int)533127, (int)34639, (int)34638);
			}
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_8355(var_114_object);
			if(var_113_bool != 0) {
				@@@var_0_object:AddReply((int)533130, (int)34643, (int)34642);
			}
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_object;
			func_8367(var_123_object);
			if(var_122_bool != 0) {
				@@@var_0_object:AddReply((int)533141, (int)34643, (int)34654);
			}
			var_131_bool = 0; var_132_object = Obj();
			var_132_object = var_1_object;
			func_8343(var_132_object);
			if(var_131_bool != 0) {
				@@@var_0_object:AddReply((int)533142, (int)34643, (int)34656);
			}
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_8498(var_140_bool, var_141_object);
			if(var_140_bool != 0) {
				@@@var_0_object:AddReply((int)533143, (int)34643, (int)34658);
			}
			return 0;
		}
		var_148_bool = var_36_bool == (int)34643;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533132, (int)34645, (int)34644);
			@@@var_0_object:AddReply((int)534457, (int)34647, (int)36092);
			@@@var_0_object:AddReply((int)534458, (int)34647, (int)36094);
			return 0;
		}
		var_161_bool = var_36_bool == (int)34645;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533134, (int)34647, (int)34646);
			@@@var_0_object:AddReply((int)534459, (int)34647, (int)36096);
			return 0;
		}
		var_171_bool = var_36_bool == (int)34647;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533135);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533136, (int)34649, (int)34648);
			@@@var_0_object:AddReply((int)534460, (int)34619, (int)36098);
			return 0;
		}
		var_181_bool = var_36_bool == (int)34649;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533137);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533138, (int)34651, (int)34650);
			return 0;
		}
		var_188_bool = var_36_bool == (int)34651;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533140, (int)34619, (int)34652);
			return 0;
		}
		var_195_bool = var_36_bool == (int)34639;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533129, (int)34643, (int)34640);
			return 0;
		}
		var_202_bool = var_36_bool == (int)34617;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533107, (int)34619, (int)34618);
			@@@var_0_object:AddReply((int)534054, (int)34619, (int)35636);
			return 0;
		}
		var_212_bool = var_36_bool == (int)34619;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533109, (int)34621, (int)34620);
			@@@var_0_object:AddReply((int)534055, (int)35639, (int)35638);
			return 0;
		}
		var_222_bool = var_36_bool == (int)35639;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_6050(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)534056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534057, (int)34621, (int)35640);
			@@@var_0_object:AddReply((int)534058, (int)34621, (int)35642);
			return 0;
		}
		var_232_bool = var_36_bool == (int)34621;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_6050(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)533110);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533111, (int)34623, (int)34622);
			@@@var_0_object:AddReply((int)534059, (int)34623, (int)35644);
			return 0;
		}
		var_242_bool = var_36_bool == (int)34623;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_6050(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)533112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533113, (int)34625, (int)34624);
			@@@var_0_object:AddReply((int)534461, (int)34628, (int)36100);
			return 0;
		}
		var_252_bool = var_36_bool == (int)34625;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533114);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533115, (int)-1, (int)34626);
			@@@var_0_object:AddReply((int)533116, (int)34628, (int)34627);
			@@@var_0_object:AddReply((int)533124, (int)-1, (int)34635);
			return 0;
		}
		var_265_bool = var_36_bool == (int)34628;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533117);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533118, (int)34630, (int)34629);
			@@@var_0_object:AddReply((int)534462, (int)-1, (int)36102);
			return 0;
		}
		var_275_bool = var_36_bool == (int)34630;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_6050(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)533119);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533120, (int)34632, (int)34631);
			return 0;
		}
		var_282_bool = var_36_bool == (int)34632;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_6050(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533122, (int)-1, (int)34633);
			@@@var_0_object:AddReply((int)533123, (int)-1, (int)34634);
			return 0;
		}
		var_292_bool = var_36_bool == (int)34607;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_6050(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)533098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533099, (int)34609, (int)34608);
			@@@var_0_object:AddReply((int)533102, (int)34615, (int)34612);
			return 0;
		}
		var_302_bool = var_36_bool == (int)34609;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_6050(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)533100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533101, (int)34615, (int)34610);
			return 0;
		}
		var_3_string = true;
		var_308_bool = 0;
		func_7699(var_308_bool);
		if(var_308_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x17b9";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_7507();
		var_41_bool = var_37_cvector == (int)41891;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_7911();
		}
		var_47_bool = var_36_int == (int)37121;
		if(var_47_bool != 0) {
			var_48_string = "";
			func_6731(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)535439);
			@@@var_0_object:ClearReplies();
			var_66_bool = 0; var_67_object = Obj();
			var_67_object = var_1_object;
			func_8474(var_67_object);
			if(var_66_bool != 0) {
				@@@var_0_object:AddReply((int)539929, (int)41892, (int)41891);
			}
			@@@var_0_object:AddReply((int)539927, (int)-1, (int)41889);
			@@@var_0_object:AddReply((int)539928, (int)-1, (int)41890);
			return 0;
		}
		var_84_bool = var_36_int == (int)41892;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_6731(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)539930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539931, (int)41894, (int)41893);
			@@@var_0_object:AddReply((int)539937, (int)-1, (int)41899);
			return 0;
		}
		var_94_bool = var_36_int == (int)41894;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_6731(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)539932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539933, (int)41902, (int)41895);
			@@@var_0_object:AddReply((int)539934, (int)41897, (int)41896);
			return 0;
		}
		var_104_bool = var_36_int == (int)41897;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_6731(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)539935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539936, (int)41900, (int)41898);
			return 0;
		}
		var_111_bool = var_36_int == (int)41900;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_6731(var_37_cvector, "Arrogance");
			@@@var_0_object:SetMessage((int)539938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539939, (int)-1, (int)41901);
			return 0;
		}
		var_118_bool = var_36_int == (int)41902;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_6731(var_37_cvector, "Isee");
			@@@var_0_object:SetMessage((int)539940);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539941, (int)41905, (int)41903);
			@@@var_0_object:AddReply((int)539942, (int)41905, (int)41904);
			return 0;
		}
		var_128_bool = var_36_int == (int)41905;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_6731(var_37_cvector, "Threat");
			@@@var_0_object:SetMessage((int)539943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539944, (int)-1, (int)41907);
			@@@var_0_object:AddReply((int)539945, (int)-1, (int)41908);
			return 0;
		}
		var_3_string = true;
		var_137_bool = 0;
		func_7699(var_137_bool);
		if(var_137_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a62";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_7010();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_7231(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_6979(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_6959(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_7514(Obj());
				var_82_object = var_81_object;
				func_7381(var_80_bool, var_81_object);
			}
		} else {
			func_6974(var_36_int);
			func_7001();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_7192();
	func_7010();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_7010();
	var_37_string = "";
	func_7461("Neutral");
	func_7001();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_7001();
	} else {
		var_43_string = "";
		func_7461("Neutral");
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
		func_7192();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_7222(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_9229(var_54_object);
		var_1014_string = "";
		func_7461("Neutral");
		func_7010();
		func_7001();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_6945(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_371_int, var_372_object)
{
	var_374_object = Obj(); var_375_bool = 0; var_376_int = 0; var_377_bool = 0; var_378_object = Obj(); var_379_bool = 0; var_380_int = 0; var_381_bool = 0;
	var_0_object = var_372_object;
	var_382_bool = 0; var_383_object = Obj(); var_384_float = 0;
	var_372_object = var_383_object;
	func_7236(var_382_bool, var_383_object, (float)70.0);
	var_385_bool = var_382_bool == 0; //@nz
	if(var_385_bool != 0) {
		var_371_int = -2;
		return 8;
	}
	CreateDialog(var_378_object);
	var_386_int = 0;
	func_7693(var_386_int);
	@@var_378_object:SetNPCName(var_386_int);
	var_387_int = 0;
	func_7691(var_387_int);
	@@var_378_object:SetNPCDescription(var_387_int);
	var_388_string = "";
	func_7695(var_388_string);
	@@var_378_object:SetPhoto(var_388_string);
	var_389_string = "";
	func_7697(var_389_string);
	@@var_378_object:SetPhoto2(var_389_string);
	var_390_int = 0;
	func_9212(var_390_int);
	@@var_378_object:SetPlayerName(var_390_int);
	IsOverrideActive(var_379_bool);
	var_391_bool = var_379_bool;
	if(var_391_bool != 0) {
		var_371_int = -2;
		return 8;
	}
	DoDialog(var_378_object);
	var_392_bool = 0; var_393_object = Obj();
	func_7514(Obj());
	var_394_object = var_393_object;
	func_7323(var_392_bool, var_393_object);
	var_395_object = Obj(); var_396_object = Obj();
	var_372_object = var_395_object;
	var_378_object = var_396_object;
	TaskCall(1);
	func_81(var_397_object, var_398_object, var_399_string, var_400_bool, var_395_object, var_396_object);
	TaskReturn();
	@@var_378_object:IsDialogEnd(var_381_bool);
	
Label_63:
	var_523_bool = var_381_bool == 0; //@nz
	if(var_523_bool != 0) {
		sync();
		@@var_378_object:IsDialogEnd(var_381_bool);
		goto Label_63;
	}
	var_372_object = Obj();
	func_7305();
	StopDialog(var_378_object);
	@@var_378_object:GetReturnValue((int)-1);
	var_380_int = var_371_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8707(var_979_bool)
{
	var_981_int = 0; var_982_string = "";
	func_7530(var_981_int, "d11q01");
	var_984_bool = var_981_int == (int)4;
	if(var_984_bool != 0) {
		var_979_bool = 1;
		return 0;
	}
	var_979_bool = 0;
	return 0;
}


func_8195()
{
	SetVariable("ood9Aglaja4", (int)1);
	return 0;
}


func_6663(var_0_object, var_1_object, var_2_object, var_3_string, var_325_object, var_326_object)
{
	var_0_object = var_326_object;
	var_1_object = var_325_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_332_string = "";
		func_6731(var_326_object, "Arrogance");
		@@@var_0_object:SetMessage((int)535439);
		@@@var_0_object:ClearReplies();
		var_341_bool = 0; var_342_object = Obj();
		var_342_object = var_1_object;
		func_8474(var_342_object);
		if(var_341_bool != 0) {
			@@@var_0_object:AddReply((int)539929, (int)41892, (int)41891);
		}
		@@@var_0_object:AddReply((int)539927, (int)-1, (int)41889);
		@@@var_0_object:AddReply((int)539928, (int)-1, (int)41890);
		goto Label_6701;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a0b";
	}
Label_6701:
	var_358_bool = 0;
	func_7699(var_358_bool);
	if(var_358_bool != 0) {

	Label_6705:
		lshWaitForAnimEnd();
		var_359_string = var_3_string;
		if(var_359_string != 0) {
		} else {
			var_360_string = "";
			var_360_string = var_2_object;
			func_7461(var_360_string);
			goto Label_6705;
	}
		PlayAnimation("all", "idle");

	Label_6720:
		WaitForAnimEnd();
		var_363_string = var_3_string;
		if(var_363_string != 0) {
			goto Label_6730;
		}
		PlayAnimation("all", "idle");
		goto Label_6720;
	}
	goto Label_6730;
	
Label_6730:
	return 0;
	
}


func_8201()
{
	SetVariable("ood9Aglaja5", (int)1);
	return 0;
}


func_7691(var_119_int)
{
	var_119_int = 515527;
	return 0;
}


func_7693(var_118_int)
{
	var_118_int = 513334;
	return 0;
}


func_9229(var_54_object)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("mt_aglaja", var_56_int);
	var_58_bool = var_56_int == 0; //@nz
	if(var_58_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_54_object = var_60_object;
		TaskCall(10);
		func_5911(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		SetVariable("mt_aglaja", (int)1);
	}
	var_286_bool = 0; var_287_int = 0;
	func_7648(var_286_bool, (int)12);
	if(var_286_bool != 0) {
		var_301_int = 0; var_302_object = Obj();
		var_54_object = var_302_object;
		TaskCall(12);
		func_6582(var_303_object, var_301_int, var_302_object);
		TaskReturn();
		return 2;
	}
	var_368_bool = 0; var_369_int = 0;
	func_7642(var_368_bool, (int)7);
	if(var_368_bool != 0) {
		var_371_int = 0; var_372_object = Obj();
		var_54_object = var_372_object;
		TaskCall(0);
		func_0(var_373_object, var_371_int, var_372_object);
		TaskReturn();
		return 2;
	}
	var_525_bool = 0; var_526_int = 0;
	func_7642(var_525_bool, (int)8);
	if(var_525_bool != 0) {
		var_527_int = 0; var_528_object = Obj();
		var_54_object = var_528_object;
		TaskCall(2);
		func_1572(var_529_object, var_527_int, var_528_object);
		TaskReturn();
		return 2;
	}
	var_633_bool = 0; var_634_int = 0;
	func_7642(var_633_bool, (int)9);
	if(var_633_bool != 0) {
		var_635_int = 0; var_636_object = Obj();
		var_54_object = var_636_object;
		TaskCall(6);
		func_3611(var_637_object, var_635_int, var_636_object);
		TaskReturn();
		return 2;
	}
	var_769_bool = 0; var_770_int = 0;
	func_7642(var_769_bool, (int)10);
	if(var_769_bool != 0) {
		var_771_int = 0; var_772_object = Obj();
		var_54_object = var_772_object;
		TaskCall(4);
		func_2650(var_773_object, var_771_int, var_772_object);
		TaskReturn();
		return 2;
	}
	var_895_bool = 0; var_896_int = 0;
	func_7642(var_895_bool, (int)11);
	if(var_895_bool != 0) {
		var_897_int = 0; var_898_object = Obj();
		var_54_object = var_898_object;
		TaskCall(8);
		func_4924(var_899_object, var_897_int, var_898_object);
		TaskReturn();
		return 2;
	}
	return 2;
}


func_7695(var_120_string)
{
	var_120_string = "ui/NPC_Aglaja.png";
	return 0;
}


func_8207()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("d10q01", (int)1);
	func_9162(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_7628(var_59_float);
	@@var_45_object:AddMark("d10q01AglajaGotoPetr", "pt_map_petr", (int)1, (int)515451, var_59_float);
	func_8835();
	func_8848();
	var_93_bool = 0; var_94_string = ""; var_95_string = "";
	func_7616(var_93_bool, "quest_d10_01", "init_house");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7697(var_121_string)
{
	var_121_string = "ui/NPC_Aglaja_b.png";
	return 0;
}


func_8719(var_666_bool)
{
	var_668_int = 0; var_669_string = "";
	func_7530(var_668_int, "ood9Aglaja1");
	var_671_bool = var_668_int == (int)0;
	if(var_671_bool != 0) {
		var_666_bool = 1;
		return 0;
	}
	var_666_bool = 0;
	return 0;
}


func_7699(var_113_bool)
{
	var_113_bool = 1;
	return 0;
}


func_7701()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_7190(var_74_bool)
{
	var_74_bool = 1;
	return 0;
}


func_7192()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_7707()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_8731(var_724_bool)
{
	var_726_int = 0; var_727_string = "";
	func_7530(var_726_int, "ood9Aglaja2");
	var_729_bool = var_726_int == (int)0;
	if(var_729_bool != 0) {
		var_724_bool = 1;
		return 0;
	}
	var_724_bool = 0;
	return 0;
}


func_7197(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_3611(var_0_object, var_635_int, var_636_object)
{
	var_638_object = Obj(); var_639_bool = 0; var_640_int = 0; var_641_bool = 0; var_642_object = Obj(); var_643_bool = 0; var_644_int = 0; var_645_bool = 0;
	var_0_object = var_636_object;
	var_646_bool = 0; var_647_object = Obj(); var_648_float = 0;
	var_636_object = var_647_object;
	func_7236(var_646_bool, var_647_object, (float)70.0);
	var_649_bool = var_646_bool == 0; //@nz
	if(var_649_bool != 0) {
		var_635_int = -2;
		return 8;
	}
	CreateDialog(var_642_object);
	var_650_int = 0;
	func_7693(var_650_int);
	@@var_642_object:SetNPCName(var_650_int);
	var_651_int = 0;
	func_7691(var_651_int);
	@@var_642_object:SetNPCDescription(var_651_int);
	var_652_string = "";
	func_7695(var_652_string);
	@@var_642_object:SetPhoto(var_652_string);
	var_653_string = "";
	func_7697(var_653_string);
	@@var_642_object:SetPhoto2(var_653_string);
	var_654_int = 0;
	func_9212(var_654_int);
	@@var_642_object:SetPlayerName(var_654_int);
	IsOverrideActive(var_643_bool);
	var_655_bool = var_643_bool;
	if(var_655_bool != 0) {
		var_635_int = -2;
		return 8;
	}
	DoDialog(var_642_object);
	var_656_bool = 0; var_657_object = Obj();
	func_7514(Obj());
	var_658_object = var_657_object;
	func_7323(var_656_bool, var_657_object);
	var_659_object = Obj(); var_660_object = Obj();
	var_636_object = var_659_object;
	var_642_object = var_660_object;
	TaskCall(7);
	func_3692(var_661_object, var_662_object, var_663_string, var_664_bool, var_659_object, var_660_object);
	TaskReturn();
	@@var_642_object:IsDialogEnd(var_645_bool);
	
Label_3674:
	var_767_bool = var_645_bool == 0; //@nz
	if(var_767_bool != 0) {
		sync();
		@@var_642_object:IsDialogEnd(var_645_bool);
		goto Label_3674;
	}
	var_636_object = Obj();
	func_7305();
	StopDialog(var_642_object);
	@@var_642_object:GetReturnValue((int)-1);
	var_644_int = var_635_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5151(var_2_object, var_938_string)
{
	var_939_bool = 0;
	func_7699(var_939_bool);
	var_940_bool = var_939_bool == 0; //@nz
	if(var_940_bool != 0) {
		return 0;
	}
	var_941_bool = var_938_string == var_2_object;
	if(var_941_bool != 0) {
		return 0;
	}
	var_942_string = ""; var_943_bool = 0;
	var_938_string = var_942_string;
	var_945_bool = var_938_string == "";
	if(var_945_bool != 0) {
		var_943_bool = 0;
	} else {
		var_943_bool = 1;
	}
	func_7477(var_942_string, var_943_bool);
	var_2_object = var_938_string;
	return 0;
	
}


func_7713(var_170_object)
{
	Trace("money 7000 is given");
	var_173_object = Obj(); var_174_int = 0;
	var_170_object = var_173_object;
	func_7558(var_173_object, (int)7000);
	return 0;
}


func_1572(var_0_object, var_527_int, var_528_object)
{
	var_530_object = Obj(); var_531_bool = 0; var_532_int = 0; var_533_bool = 0; var_534_object = Obj(); var_535_bool = 0; var_536_int = 0; var_537_bool = 0;
	var_0_object = var_528_object;
	var_538_bool = 0; var_539_object = Obj(); var_540_float = 0;
	var_528_object = var_539_object;
	func_7236(var_538_bool, var_539_object, (float)70.0);
	var_541_bool = var_538_bool == 0; //@nz
	if(var_541_bool != 0) {
		var_527_int = -2;
		return 8;
	}
	CreateDialog(var_534_object);
	var_542_int = 0;
	func_7693(var_542_int);
	@@var_534_object:SetNPCName(var_542_int);
	var_543_int = 0;
	func_7691(var_543_int);
	@@var_534_object:SetNPCDescription(var_543_int);
	var_544_string = "";
	func_7695(var_544_string);
	@@var_534_object:SetPhoto(var_544_string);
	var_545_string = "";
	func_7697(var_545_string);
	@@var_534_object:SetPhoto2(var_545_string);
	var_546_int = 0;
	func_9212(var_546_int);
	@@var_534_object:SetPlayerName(var_546_int);
	IsOverrideActive(var_535_bool);
	var_547_bool = var_535_bool;
	if(var_547_bool != 0) {
		var_527_int = -2;
		return 8;
	}
	DoDialog(var_534_object);
	var_548_bool = 0; var_549_object = Obj();
	func_7514(Obj());
	var_550_object = var_549_object;
	func_7323(var_548_bool, var_549_object);
	var_551_object = Obj(); var_552_object = Obj();
	var_528_object = var_551_object;
	var_534_object = var_552_object;
	TaskCall(3);
	func_1653(var_553_object, var_554_object, var_555_string, var_556_bool, var_551_object, var_552_object);
	TaskReturn();
	@@var_534_object:IsDialogEnd(var_537_bool);
	
Label_1635:
	var_631_bool = var_537_bool == 0; //@nz
	if(var_631_bool != 0) {
		sync();
		@@var_534_object:IsDialogEnd(var_537_bool);
		goto Label_1635;
	}
	var_528_object = Obj();
	func_7305();
	StopDialog(var_534_object);
	@@var_534_object:GetReturnValue((int)-1);
	var_536_int = var_527_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7205(var_138_object, var_139_string, var_140_int)
{
	var_141_int = 0; var_142_int = 0;
	@@var_138_object:GetProperty(var_139_string, var_142_int);
	var_143_int = var_142_int + var_140_int;
	@@var_138_object:SetProperty(var_139_string, var_143_int);
	return 2;
}


func_8743(var_714_bool)
{
	var_716_int = 0; var_717_string = "";
	func_7530(var_716_int, "ood9Aglaja4");
	var_719_bool = var_716_int == (int)0;
	if(var_719_bool != 0) {
		var_714_bool = 1;
		return 0;
	}
	var_714_bool = 0;
	return 0;
}


func_7723()
{
	SetVariable("d7q03", (int)1);
	func_9017();
	func_9030();
	var_278_object = Obj(); var_279_string = "";
	func_7535(var_278_object, "quest_d7_03");
	return 0;
}


func_7212(var_44_bool, var_45_cvector)
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


func_8238()
{
	SetVariable("ood10Aglaja1", (int)1);
	return 0;
}


func_8755(var_705_bool)
{
	var_707_int = 0; var_708_string = "";
	func_7530(var_707_int, "ood9Aglaja5");
	var_710_bool = var_707_int == (int)0;
	if(var_710_bool != 0) {
		var_705_bool = 1;
		return 0;
	}
	var_705_bool = 0;
	return 0;
}


func_8244()
{
	var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj(); var_110_object = Obj();
	func_9162(Obj());
	var_111_object = var_109_object;
	@@var_109_object:FindMark(var_110_object, "d10q01AglajaGotoPetr");
	var_113_object = var_110_object;
	if(var_113_object != 0) {
		@@var_110_object:Remove();
	}
	@@var_109_object:FindMark(var_110_object, "d10q02KaterinaGotoRubin");
	var_115_object = var_110_object;
	if(var_115_object != 0) {
		@@var_110_object:Remove();
	}
	func_8861();
	var_124_bool = 0; var_125_string = ""; var_126_string = "";
	func_7616(var_124_bool, "quest_d10_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7222(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_7212(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_7739()
{
	SetVariable("d7q03", (int)4);
	func_9043();
	var_304_bool = 0; var_305_string = ""; var_306_string = "";
	func_7616(var_304_bool, "quest_d7_03", "init_house_petr");
	return 0;
}


func_8767(var_802_bool)
{
	var_804_int = 0; var_805_string = "";
	func_7530(var_804_int, "ood10Aglaja1");
	var_807_bool = var_804_int == (int)0;
	if(var_807_bool != 0) {
		var_802_bool = 1;
		return 0;
	}
	var_802_bool = 0;
	return 0;
}


func_7231(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_7236(var_70_bool, var_71_object, var_72_float)
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
	func_7520(var_97_cvector, var_98_cvector);
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
	func_7699(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		HasAnimationTrack(var_90_bool, "head");
		var_115_bool = var_90_bool;
		if(var_115_bool == 0) goto Label_7299;
		LookAsyncCamera("head");
	}
Label_7299:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_70_bool = 1;
	return 18;
	
}


func_7753(var_120_object)
{
	Trace("burah_serum is given");
	var_123_object = Obj(); var_124_string = ""; var_125_int = 0;
	var_120_object = var_123_object;
	func_7596(var_123_object, "burah_serum", (int)1);
	return 0;
}


func_8779(var_863_bool)
{
	var_865_int = 0; var_866_string = "";
	func_7530(var_865_int, "d10q01");
	var_868_bool = var_865_int == (int)1000;
	if(var_868_bool != 0) {
		var_863_bool = 1;
		return 0;
	}
	var_863_bool = 0;
	return 0;
}


func_6731(var_2_object, var_332_string)
{
	var_333_bool = 0;
	func_7699(var_333_bool);
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
	func_7477(var_336_string, var_337_bool);
	var_2_object = var_332_string;
	return 0;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_395_object, var_396_object)
{
	var_0_object = var_396_object;
	var_1_object = var_395_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_402_bool = 0; var_403_object = Obj();
		var_403_object = var_1_object;
		func_8508(var_403_object);
		if(var_402_bool != 0) {
			var_408_object = Obj(); var_409_object = Obj();
			var_408_object = var_1_object;
			var_409_object = var_0_object;
			func_7933();
			var_412_string = "";
			func_252(var_396_object, "Neutral");
			@@@var_0_object:SetMessage((int)513033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513034, (int)14260, (int)14241);
			@@@var_0_object:AddReply((int)534463, (int)36105, (int)36104);
		} else {
				var_435_string = "";
				func_252(var_396_object, "Arrogance");
				@@@var_0_object:SetMessage((int)513031);
				@@@var_0_object:ClearReplies();
				var_437_bool = 0;
				var_437_bool = 0;
				var_438_bool = 0;
				var_438_bool = 0;
				var_439_bool = 0; var_440_object = Obj();
				var_440_object = var_1_object;
				func_8532(var_440_object);
				if(var_439_bool != 0) {
					var_445_bool = 0; var_446_object = Obj();
					var_446_object = var_1_object;
					func_8544(var_446_object);
					if(var_445_bool != 0) {
						var_438_bool = 1;
					}
				}
				if(var_438_bool != 0) {
					var_451_bool = 0; var_452_object = Obj();
					var_452_object = var_1_object;
					func_8556(var_451_bool, var_452_object);
					var_468_bool = var_451_bool == 0; //@nz
					if(var_468_bool != 0) {
						var_437_bool = 1;
					}
				}
				if(var_437_bool != 0) {
					@@@var_0_object:AddReply((int)513125, (int)14345, (int)14344);
				}
				var_472_bool = 0;
				var_472_bool = 0;
				var_473_bool = 0; var_474_object = Obj();
				var_474_object = var_1_object;
				func_8556(var_473_bool, var_474_object);
				if(var_473_bool != 0) {
					var_475_bool = 0; var_476_object = Obj();
					var_476_object = var_1_object;
					func_8587(var_476_object);
					if(var_475_bool != 0) {
						var_472_bool = 1;
					}
				}
				if(var_472_bool != 0) {
					@@@var_0_object:AddReply((int)513075, (int)14369, (int)14285);
				}
				var_484_bool = 0; var_485_object = Obj();
				var_485_object = var_1_object;
				func_8599(var_485_object);
				if(var_484_bool != 0) {
					@@@var_0_object:AddReply((int)513141, (int)14362, (int)14360);
				}
				var_493_bool = 0; var_494_object = Obj();
				var_494_object = var_1_object;
				func_8611(var_494_object);
				if(var_493_bool != 0) {
					@@@var_0_object:AddReply((int)513377, (int)14610, (int)14609);
				}
				var_502_bool = 0; var_503_object = Obj();
				var_503_object = var_1_object;
				func_8379(var_503_object);
				if(var_502_bool != 0) {
					@@@var_0_object:AddReply((int)533254, (int)34769, (int)34768);
				}
				var_511_bool = 0; var_512_object = Obj();
				var_512_object = var_1_object;
				func_8520(var_512_object);
				if(var_511_bool != 0) {
					@@@var_0_object:AddReply((int)513035, (int)14243, (int)14242);
				}
				@@@var_0_object:AddReply((int)513032, (int)-1, (int)14239);
				goto Label_222;
		}
	}
Label_222:
	var_427_bool = 0;
	func_7699(var_427_bool);
	if(var_427_bool != 0) {

	Label_226:
		lshWaitForAnimEnd();
		var_428_string = var_3_string;
		if(var_428_string != 0) {
		} else {
			var_429_string = "";
			var_429_string = var_2_object;
			func_7461(var_429_string);
			goto Label_226;
	}
		PlayAnimation("all", "idle");

	Label_241:
		WaitForAnimEnd();
		var_432_string = var_3_string;
		if(var_432_string != 0) {
			goto Label_251;
		}
		PlayAnimation("all", "idle");
		goto Label_241;

	}
	goto Label_251;
	
Label_251:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_8274()
{
	SetVariable("ood10Aglaja2", (int)1);
	return 0;
}


func_7764()
{
	func_8874();
	var_163_bool = 0; var_164_string = ""; var_165_string = "";
	func_7616(var_163_bool, "quest_d10_02", "completed");
	return 0;
}


func_8791(var_869_bool)
{
	var_871_int = 0; var_872_string = "";
	func_7530(var_871_int, "ood10Aglaja2");
	var_874_bool = var_871_int == (int)0;
	if(var_874_bool != 0) {
		var_869_bool = 1;
		return 0;
	}
	var_869_bool = 0;
	return 0;
}


func_8280()
{
	SetVariable("d11AglajaVisit", (int)1);
	return 0;
}


func_2650(var_0_object, var_771_int, var_772_object)
{
	var_774_object = Obj(); var_775_bool = 0; var_776_int = 0; var_777_bool = 0; var_778_object = Obj(); var_779_bool = 0; var_780_int = 0; var_781_bool = 0;
	var_0_object = var_772_object;
	var_782_bool = 0; var_783_object = Obj(); var_784_float = 0;
	var_772_object = var_783_object;
	func_7236(var_782_bool, var_783_object, (float)70.0);
	var_785_bool = var_782_bool == 0; //@nz
	if(var_785_bool != 0) {
		var_771_int = -2;
		return 8;
	}
	CreateDialog(var_778_object);
	var_786_int = 0;
	func_7693(var_786_int);
	@@var_778_object:SetNPCName(var_786_int);
	var_787_int = 0;
	func_7691(var_787_int);
	@@var_778_object:SetNPCDescription(var_787_int);
	var_788_string = "";
	func_7695(var_788_string);
	@@var_778_object:SetPhoto(var_788_string);
	var_789_string = "";
	func_7697(var_789_string);
	@@var_778_object:SetPhoto2(var_789_string);
	var_790_int = 0;
	func_9212(var_790_int);
	@@var_778_object:SetPlayerName(var_790_int);
	IsOverrideActive(var_779_bool);
	var_791_bool = var_779_bool;
	if(var_791_bool != 0) {
		var_771_int = -2;
		return 8;
	}
	DoDialog(var_778_object);
	var_792_bool = 0; var_793_object = Obj();
	func_7514(Obj());
	var_794_object = var_793_object;
	func_7323(var_792_bool, var_793_object);
	var_795_object = Obj(); var_796_object = Obj();
	var_772_object = var_795_object;
	var_778_object = var_796_object;
	TaskCall(5);
	func_2731(var_797_object, var_798_object, var_799_string, var_800_bool, var_795_object, var_796_object);
	TaskReturn();
	@@var_778_object:IsDialogEnd(var_781_bool);
	
Label_2713:
	var_893_bool = var_781_bool == 0; //@nz
	if(var_893_bool != 0) {
		sync();
		@@var_778_object:IsDialogEnd(var_781_bool);
		goto Label_2713;
	}
	var_772_object = Obj();
	func_7305();
	StopDialog(var_778_object);
	@@var_778_object:GetReturnValue((int)-1);
	var_780_int = var_771_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7774()
{
	SetVariable("d11q05", (int)1);
	func_8926();
	func_8939();
	var_112_object = Obj(); var_113_string = "";
	func_7535(var_112_object, "quest_d11_05");
	return 0;
}


func_8286(var_104_bool)
{
	var_106_int = 0; var_107_string = "";
	func_7530(var_106_int, "d6q01KlaraVolonteer");
	var_109_bool = var_106_int != (int)0;
	if(var_109_bool != 0) {
		var_104_bool = 1;
		return 0;
	}
	var_104_bool = 0;
	return 0;
}


func_8803(var_845_bool)
{
	var_847_int = 0; var_848_string = "";
	func_7530(var_847_int, "d10q01");
	var_850_bool = var_847_int == (int)3;
	if(var_850_bool != 0) {
		var_845_bool = 1;
		return 0;
	}
	var_845_bool = 0;
	return 0;
}


func_8298(var_73_bool)
{
	var_75_bool = 0;
	var_75_bool = 0;
	var_76_bool = 0;
	var_76_bool = 0;
	var_77_bool = 0;
	var_77_bool = 0;
	var_78_int = 0; var_79_string = "";
	func_7530(var_78_int, "d6q01JuliaVolonteer");
	var_83_bool = var_78_int == (int)0;
	if(var_83_bool != 0) {
		var_84_int = 0; var_85_string = "";
		func_7530(var_84_int, "d6q01KlaraVolonteer");
		var_87_bool = var_84_int == (int)0;
		if(var_87_bool != 0) {
			var_77_bool = 1;
		}
	}
	if(var_77_bool != 0) {
		var_88_int = 0; var_89_string = "";
		func_7530(var_88_int, "d6q01LaraVolonteer");
		var_91_bool = var_88_int == (int)0;
		if(var_91_bool != 0) {
			var_76_bool = 1;
		}
	}
	if(var_76_bool != 0) {
		var_92_int = 0; var_93_string = "";
		func_7530(var_92_int, "d6q01OspinaVolonteer");
		var_95_bool = var_92_int == (int)0;
		if(var_95_bool != 0) {
			var_75_bool = 1;
		}
	}
	if(var_75_bool != 0) {
		var_73_bool = 1;
		return 0;
	}
	var_73_bool = 0;
	return 0;
}


func_3692(var_0_object, var_1_object, var_2_object, var_3_string, var_659_object, var_660_object)
{
	var_0_object = var_660_object;
	var_1_object = var_659_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_666_bool = 0; var_667_object = Obj();
		var_667_object = var_1_object;
		func_8719(var_667_object);
		if(var_666_bool != 0) {
			var_672_object = Obj(); var_673_object = Obj();
			var_672_object = var_1_object;
			var_673_object = var_0_object;
			func_8183();
			var_676_object = Obj(); var_677_object = Obj();
			var_676_object = var_1_object;
			var_677_object = var_0_object;
			func_7814();
			var_680_string = "";
			func_3848(var_660_object, "Neutral");
			@@@var_0_object:SetMessage((int)513802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513803, (int)15030, (int)15029);
			@@@var_0_object:AddReply((int)513815, (int)15042, (int)15041);
		} else {
				var_703_string = "";
				func_3848(var_660_object, "Neutral");
				@@@var_0_object:SetMessage((int)513818);
				@@@var_0_object:ClearReplies();
				var_705_bool = 0; var_706_object = Obj();
				var_706_object = var_1_object;
				func_8755(var_706_object);
				if(var_705_bool != 0) {
					@@@var_0_object:AddReply((int)513865, (int)15093, (int)15092);
				}
				var_714_bool = 0; var_715_object = Obj();
				var_715_object = var_1_object;
				func_8743(var_715_object);
				if(var_714_bool != 0) {
					@@@var_0_object:AddReply((int)513852, (int)15080, (int)15079);
				}
				var_723_bool = 0;
				var_723_bool = 0;
				var_724_bool = 0; var_725_object = Obj();
				var_725_object = var_1_object;
				func_8731(var_725_object);
				if(var_724_bool != 0) {
					var_730_bool = 0; var_731_object = Obj();
					var_731_object = var_1_object;
					func_8671(var_731_object);
					if(var_730_bool != 0) {
						var_723_bool = 1;
					}
				}
				if(var_723_bool != 0) {
					@@@var_0_object:AddReply((int)513819, (int)15047, (int)15046);
				}
				var_739_bool = 0;
				var_739_bool = 0;
				var_740_bool = 0; var_741_object = Obj();
				var_741_object = var_1_object;
				func_8415(var_741_object);
				if(var_740_bool != 0) {
					var_746_bool = 0; var_747_object = Obj();
					var_747_object = var_1_object;
					func_8427(var_747_object);
					if(var_746_bool != 0) {
						var_739_bool = 1;
					}
				}
				if(var_739_bool != 0) {
					@@@var_0_object:AddReply((int)538857, (int)40792, (int)40791);
				}
				var_755_bool = 0; var_756_object = Obj();
				var_756_object = var_1_object;
				func_8439(var_756_object);
				if(var_755_bool != 0) {
					@@@var_0_object:AddReply((int)540032, (int)42000, (int)41999);
				}
				@@@var_0_object:AddReply((int)513880, (int)-1, (int)15107);
				goto Label_3818;
		}
	}
Label_3818:
	var_695_bool = 0;
	func_7699(var_695_bool);
	if(var_695_bool != 0) {

	Label_3822:
		lshWaitForAnimEnd();
		var_696_string = var_3_string;
		if(var_696_string != 0) {
		} else {
			var_697_string = "";
			var_697_string = var_2_object;
			func_7461(var_697_string);
			goto Label_3822;
	}
		PlayAnimation("all", "idle");

	Label_3837:
		WaitForAnimEnd();
		var_700_string = var_3_string;
		if(var_700_string != 0) {
			goto Label_3847;
		}
		PlayAnimation("all", "idle");
		goto Label_3837;

	}
	goto Label_3847;
	
Label_3847:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe70";


func_7790()
{
	SetVariable("ood8Aglaja3", (int)1);
	return 0;
}


func_8815(var_851_bool, var_852_object)
{
	var_853_bool = 0; var_854_object = Obj();
	var_852_object = var_854_object;
	func_8828(var_853_bool, var_854_object);
	if(var_853_bool != 0) {
		var_851_bool = 1;
		return 0;
	}
	var_851_bool = 0;
	return 0;
}


func_7796()
{
	SetVariable("d8AglajaVisit", (int)1);
	return 0;
}


func_1653(var_0_object, var_1_object, var_2_object, var_3_string, var_551_object, var_552_object)
{
	var_0_object = var_552_object;
	var_1_object = var_551_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_558_bool = 0; var_559_object = Obj();
		var_559_object = var_1_object;
		func_8635(var_559_object);
		if(var_558_bool != 0) {
			var_564_object = Obj(); var_565_object = Obj();
			var_564_object = var_1_object;
			var_565_object = var_0_object;
			func_8127();
			var_568_object = Obj(); var_569_object = Obj();
			var_568_object = var_1_object;
			var_569_object = var_0_object;
			func_7796();
			var_572_string = "";
			func_1775(var_552_object, "Arrogance");
			@@@var_0_object:SetMessage((int)515089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535859, (int)37561, (int)37560);
		} else {
				var_592_string = "";
				func_1775(var_552_object, "Neutral");
				@@@var_0_object:SetMessage((int)513409);
				@@@var_0_object:ClearReplies();
				var_594_bool = 0; var_595_object = Obj();
				var_595_object = var_1_object;
				func_8623(var_595_object);
				if(var_594_bool != 0) {
					@@@var_0_object:AddReply((int)535855, (int)14647, (int)37556);
				}
				var_603_bool = 0; var_604_object = Obj();
				var_604_object = var_1_object;
				func_8403(var_604_object);
				if(var_603_bool != 0) {
					@@@var_0_object:AddReply((int)513411, (int)13400, (int)14645);
				}
				var_612_bool = 0;
				var_612_bool = 0;
				var_613_bool = 0; var_614_object = Obj();
				var_614_object = var_1_object;
				func_8647(var_614_object);
				if(var_613_bool != 0) {
					var_619_bool = 0; var_620_object = Obj();
					var_620_object = var_1_object;
					func_8659(var_620_object);
					if(var_619_bool != 0) {
						var_612_bool = 1;
					}
				}
				if(var_612_bool != 0) {
					@@@var_0_object:AddReply((int)513412, (int)13452, (int)14646);
				}
				@@@var_0_object:AddReply((int)513410, (int)-1, (int)14644);
				goto Label_1745;
		}
	}
Label_1745:
	var_584_bool = 0;
	func_7699(var_584_bool);
	if(var_584_bool != 0) {

	Label_1749:
		lshWaitForAnimEnd();
		var_585_string = var_3_string;
		if(var_585_string != 0) {
		} else {
			var_586_string = "";
			var_586_string = var_2_object;
			func_7461(var_586_string);
			goto Label_1749;
	}
		PlayAnimation("all", "idle");

	Label_1764:
		WaitForAnimEnd();
		var_589_string = var_3_string;
		if(var_589_string != 0) {
			goto Label_1774;
		}
		PlayAnimation("all", "idle");
		goto Label_1764;

	}
	goto Label_1774;
	
Label_1774:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x679";


func_8825(var_142_bool)
{
	var_142_bool = 0;
	return 0;
}


func_7802()
{
	SetVariable("d10AglajaVisit", (int)1);
	return 0;
}


func_8828(var_853_bool, var_854_object)
{
	var_855_int = 0; var_856_int = 0;
	@@var_854_object:GetItemCountOfType(var_856_int, "d10q01_blueprint");
	var_853_bool = var_856_int != (int)0;
	return 2;
}


func_7808()
{
	SetVariable("ood9Aglaja6", (int)1);
	return 0;
}


func_8835()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)186, (int)1, (int)515449);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_9134(var_67_bool, var_68_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7814()
{
	SetVariable("d9AglajaVisit", (int)1);
	return 0;
}


func_7305()
{
	var_277_bool = 0; var_278_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_280_bool = 0;
	func_7699(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		HasAnimationTrack(var_278_bool, "head");
		var_282_bool = var_278_bool;
		if(var_282_bool == 0) goto Label_7322;
		UnlookAsync("head");
	}
Label_7322:
	return 2;
	
}


func_7820()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("d9q05", (int)1);
	func_9162(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_7628(var_59_float);
	@@var_45_object:AddMark("d9q05AglajaGotoBurah", "pt_map_mat", (int)0, (int)515304, var_59_float);
	func_9082();
	func_9095();
	var_93_object = Obj(); var_94_string = "";
	func_7535(var_93_object, "quest_d9_05");
	return 2;
}
EMIT "Stack[-1] = 0";


func_8848()
{
	var_85_object = Obj(); var_86_object = Obj();
	CreateDiaryEntry(var_86_object, (int)187, (int)1, (int)515450);
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0;
	var_86_object = var_91_object;
	func_9134(var_90_bool, var_91_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8343(var_131_bool)
{
	var_133_int = 0; var_134_string = "";
	func_7530(var_133_int, "d6q01JuliaVolonteer");
	var_136_bool = var_133_int != (int)0;
	if(var_136_bool != 0) {
		var_131_bool = 1;
		return 0;
	}
	var_131_bool = 0;
	return 0;
}


func_7323(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0;
	GetVariable("voice_common", var_138_int);
	var_141_int = var_138_int;
	if(var_141_int != 0) {
		var_142_bool = 0; var_143_object = Obj();
		var_132_object = var_143_object;
		func_7381(var_142_bool, var_143_object);
		var_172_bool = var_142_bool == 0; //@nz
		if(var_172_bool != 0) {
			var_173_bool = 0; var_174_object = Obj();
			var_132_object = var_174_object;
			func_7418(var_173_bool, var_174_object);
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
		func_7418(var_218_bool, var_219_object);
		var_220_bool = var_218_bool == 0; //@nz
		if(var_220_bool != 0) {
			var_221_bool = 0; var_222_object = Obj();
			var_132_object = var_222_object;
			func_7381(var_221_bool, var_222_object);
			var_223_bool = var_221_bool == 0; //@nz
			if(var_223_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_7379;
	
Label_7379:
	var_131_bool = 1;
	return 4;
	
}


func_8861()
{
	var_116_object = Obj(); var_117_object = Obj();
	CreateDiaryEntry(var_117_object, (int)191, (int)1, (int)515476);
	var_121_bool = 0; var_122_object = Obj(); var_123_int = 0;
	var_117_object = var_122_object;
	func_9134(var_121_bool, var_122_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8355(var_113_bool)
{
	var_115_int = 0; var_116_string = "";
	func_7530(var_115_int, "d6q01LaraVolonteer");
	var_118_bool = var_115_int != (int)0;
	if(var_118_bool != 0) {
		var_113_bool = 1;
		return 0;
	}
	var_113_bool = 0;
	return 0;
}


func_7850()
{
	func_9108();
	var_164_bool = 0; var_165_string = ""; var_166_string = "";
	func_7616(var_164_bool, "quest_d9_05", "completed");
	return 0;
}


func_2731(var_0_object, var_1_object, var_2_object, var_3_string, var_795_object, var_796_object)
{
	var_0_object = var_796_object;
	var_1_object = var_795_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_802_bool = 0; var_803_object = Obj();
		var_803_object = var_1_object;
		func_8767(var_803_object);
		if(var_802_bool != 0) {
			var_808_object = Obj(); var_809_object = Obj();
			var_808_object = var_1_object;
			var_809_object = var_0_object;
			func_8238();
			var_812_object = Obj(); var_813_object = Obj();
			var_812_object = var_1_object;
			var_813_object = var_0_object;
			func_7802();
			var_816_string = "";
			func_2877(var_796_object, "Neutral");
			@@@var_0_object:SetMessage((int)512899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538546, (int)40428, (int)40427);
			@@@var_0_object:AddReply((int)538571, (int)40458, (int)40456);
			@@@var_0_object:AddReply((int)538572, (int)40428, (int)40457);
		} else {
				var_842_string = "";
				func_2877(var_796_object, "Arrogance");
				@@@var_0_object:SetMessage((int)512905);
				@@@var_0_object:ClearReplies();
				var_844_bool = 0;
				var_844_bool = 0;
				var_845_bool = 0; var_846_object = Obj();
				var_846_object = var_1_object;
				func_8803(var_846_object);
				if(var_845_bool != 0) {
					var_851_bool = 0; var_852_object = Obj();
					var_852_object = var_1_object;
					func_8815(var_851_bool, var_852_object);
					if(var_851_bool != 0) {
						var_844_bool = 1;
					}
				}
				if(var_844_bool != 0) {
					@@@var_0_object:AddReply((int)512906, (int)40435, (int)14108);
				}
				var_862_bool = 0;
				var_862_bool = 0;
				var_863_bool = 0; var_864_object = Obj();
				var_864_object = var_1_object;
				func_8779(var_864_object);
				if(var_863_bool != 0) {
					var_869_bool = 0; var_870_object = Obj();
					var_870_object = var_1_object;
					func_8791(var_870_object);
					if(var_869_bool != 0) {
						var_862_bool = 1;
					}
				}
				if(var_862_bool != 0) {
					@@@var_0_object:AddReply((int)512912, (int)14119, (int)14114);
				}
				var_878_bool = 0; var_879_object = Obj();
				var_879_object = var_1_object;
				func_8391(var_879_object);
				if(var_878_bool != 0) {
					@@@var_0_object:AddReply((int)534117, (int)35711, (int)35710);
				}
				@@@var_0_object:AddReply((int)512911, (int)-1, (int)14113);
				@@@var_0_object:AddReply((int)538502, (int)-1, (int)40392);
				goto Label_2847;
		}
	}
Label_2847:
	var_834_bool = 0;
	func_7699(var_834_bool);
	if(var_834_bool != 0) {

	Label_2851:
		lshWaitForAnimEnd();
		var_835_string = var_3_string;
		if(var_835_string != 0) {
		} else {
			var_836_string = "";
			var_836_string = var_2_object;
			func_7461(var_836_string);
			goto Label_2851;
	}
		PlayAnimation("all", "idle");

	Label_2866:
		WaitForAnimEnd();
		var_839_string = var_3_string;
		if(var_839_string != 0) {
			goto Label_2876;
		}
		PlayAnimation("all", "idle");
		goto Label_2866;

	}
	goto Label_2876;
	
Label_2876:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xaaf";


func_8874()
{
	var_155_object = Obj(); var_156_object = Obj();
	CreateDiaryEntry(var_156_object, (int)671, (int)2, (int)534125);
	var_160_bool = 0; var_161_object = Obj(); var_162_int = 0;
	var_156_object = var_161_object;
	func_9134(var_160_bool, var_161_object, (int)666);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8367(var_122_bool)
{
	var_124_int = 0; var_125_string = "";
	func_7530(var_124_int, "d6q01OspinaVolonteer");
	var_127_bool = var_124_int != (int)0;
	if(var_127_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_7860(var_127_object)
{
	var_129_int = 0; var_130_int = 0;
	@@var_127_object:RemoveItemByType(var_130_int, "d10q01_blueprint", (int)1);
	return 2;
}


func_8887()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)192, (int)1, (int)515477);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_9134(var_51_bool, var_52_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7866()
{
	var_206_int = 0; var_207_string = "";
	func_7530(var_206_int, "map_chertez_state");
	var_211_bool = var_206_int <= (int)1;
	if(var_211_bool != 0) {
		SetVariable("map_chertez_state", (int)1);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_8379(var_502_bool)
{
	var_504_int = 0; var_505_string = "";
	func_7530(var_504_int, "d7q03");
	var_507_bool = var_504_int == (int)3;
	if(var_507_bool != 0) {
		var_502_bool = 1;
		return 0;
	}
	var_502_bool = 0;
	return 0;
}


func_8900()
{
	var_69_object = Obj(); var_70_object = Obj();
	CreateDiaryEntry(var_70_object, (int)193, (int)1, (int)515478);
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0;
	var_70_object = var_75_object;
	func_9134(var_74_bool, var_75_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8391(var_878_bool)
{
	var_880_int = 0; var_881_string = "";
	func_7530(var_880_int, "d10q02");
	var_883_bool = var_880_int == (int)4;
	if(var_883_bool != 0) {
		var_878_bool = 1;
		return 0;
	}
	var_878_bool = 0;
	return 0;
}


func_7883(var_217_object)
{
	var_218_object = Obj(); var_219_string = ""; var_220_float = 0;
	func_9162(Obj());
	var_221_object = var_218_object;
	func_9179(var_218_object, "pt_map_aglaja", (float)-1);
	var_241_object = Obj();
	func_9162(var_241_object);
	@@var_217_object:ShowMap(var_241_object);
	return 0;
}


func_8913()
{
	var_152_object = Obj(); var_153_object = Obj();
	CreateDiaryEntry(var_153_object, (int)196, (int)1, (int)515481);
	var_157_bool = 0; var_158_object = Obj(); var_159_int = 0;
	var_153_object = var_158_object;
	func_9134(var_157_bool, var_158_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8403(var_603_bool)
{
	var_605_int = 0; var_606_string = "";
	func_7530(var_605_int, "ood8Aglaja3");
	var_608_bool = var_605_int == (int)0;
	if(var_608_bool != 0) {
		var_603_bool = 1;
		return 0;
	}
	var_603_bool = 0;
	return 0;
}


func_8183()
{
	SetVariable("ood9Aglaja1", (int)1);
	return 0;
}


func_7381(var_142_bool, var_143_object)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = "";
	var_149_string = "c";
	var_150_int = 0;
	
Label_7384:
	if((int)1 != 0) {
		var_156_int = var_150_int + (int)1;
		var_157_int = var_149_string + var_156_int;
		@@var_143_object:HasProperty(var_157_int, var_151_bool);
		var_158_bool = var_151_bool == 0; //@nz
		if(var_158_bool != 0) {
		} else {
			var_150_int = var_150_int + (int)1;
			goto Label_7384;
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
	func_7492(var_165_bool, var_166_string);
	var_165_bool = var_142_bool;
	return 10;
	
}


func_7899()
{
	SetVariable("ood11Aglaja2", (int)1);
	return 0;
}


func_8926()
{
	var_96_object = Obj(); var_97_object = Obj();
	CreateDiaryEntry(var_97_object, (int)682, (int)2, (int)534497);
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0;
	var_97_object = var_102_object;
	func_9134(var_101_bool, var_102_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8415(var_740_bool)
{
	var_742_int = 0; var_743_string = "";
	func_7530(var_742_int, "d9q01");
	var_745_bool = var_742_int == (int)1000;
	if(var_745_bool != 0) {
		var_740_bool = 1;
		return 0;
	}
	var_740_bool = 0;
	return 0;
}


func_7905(var_163_object)
{
	var_165_int = 0; var_166_int = 0;
	@@var_163_object:RemoveItemByType(var_166_int, "d11q01_blueprint", (int)1);
	return 2;
}


func_7911()
{
	SetVariable("ood12AglajaNight1", (int)1);
	return 0;
}


func_8427(var_746_bool)
{
	var_748_int = 0; var_749_string = "";
	func_7530(var_748_int, "ood9Aglaja6");
	var_751_bool = var_748_int == (int)0;
	if(var_751_bool != 0) {
		var_746_bool = 1;
		return 0;
	}
	var_746_bool = 0;
	return 0;
}


func_8939()
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateDiaryEntry(var_105_object, (int)683, (int)2, (int)534498);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_105_object = var_110_object;
	func_9134(var_109_bool, var_110_object, (int)682);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7917()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1775(var_2_object, var_572_string)
{
	var_573_bool = 0;
	func_7699(var_573_bool);
	var_574_bool = var_573_bool == 0; //@nz
	if(var_574_bool != 0) {
		return 0;
	}
	var_575_bool = var_572_string == var_2_object;
	if(var_575_bool != 0) {
		return 0;
	}
	var_576_string = ""; var_577_bool = 0;
	var_572_string = var_576_string;
	var_579_bool = var_572_string == "";
	if(var_579_bool != 0) {
		var_577_bool = 0;
	} else {
		var_577_bool = 1;
	}
	func_7477(var_576_string, var_577_bool);
	var_2_object = var_572_string;
	return 0;
	
}


func_7923(var_131_object)
{
	Trace("money 5000 is given");
	var_134_object = Obj(); var_135_int = 0;
	var_131_object = var_134_object;
	func_7558(var_134_object, (int)5000);
	return 0;
}


func_8439(var_755_bool)
{
	var_757_int = 0; var_758_string = "";
	func_7530(var_757_int, "d9q05");
	var_760_bool = var_757_int == (int)2;
	if(var_760_bool != 0) {
		var_755_bool = 1;
		return 0;
	}
	var_755_bool = 0;
	return 0;
}


func_8952()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)165, (int)1, (int)515412);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_9134(var_82_bool, var_83_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7418(var_173_bool, var_174_object)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = "";
	var_186_int = 0;
	func_7633(var_186_int);
	var_192_int = "d" + var_186_int;
	var_180_string = var_192_int + "m";
	var_181_int = 0;
	
Label_7427:
	if((int)1 != 0) {
		var_196_int = var_181_int + (int)1;
		var_197_int = var_180_string + var_196_int;
		@@var_174_object:HasProperty(var_197_int, var_182_bool);
		var_198_bool = var_182_bool == 0; //@nz
		if(var_198_bool != 0) {
		} else {
			var_181_int = var_181_int + (int)1;
			goto Label_7427;
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
	func_7492(var_205_bool, var_206_string);
	var_205_bool = var_173_bool;
	return 10;
	
}


func_252(var_2_object, var_412_string)
{
	var_413_bool = 0;
	func_7699(var_413_bool);
	var_414_bool = var_413_bool == 0; //@nz
	if(var_414_bool != 0) {
		return 0;
	}
	var_415_bool = var_412_string == var_2_object;
	if(var_415_bool != 0) {
		return 0;
	}
	var_416_string = ""; var_417_bool = 0;
	var_412_string = var_416_string;
	var_419_bool = var_412_string == "";
	if(var_419_bool != 0) {
		var_417_bool = 0;
	} else {
		var_417_bool = 1;
	}
	func_7477(var_416_string, var_417_bool);
	var_2_object = var_412_string;
	return 0;
	
}


func_7933()
{
	SetVariable("ood7Aglaja2", (int)1);
	return 0;
}


func_7939()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("d7q01", (int)1);
	func_9162(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_7628(var_59_float);
	@@var_45_object:AddMark("d7q01AglajaGotoBirdmaskSelf", "pt_map_aglaja", (int)1, (int)515410, var_59_float);
	var_66_float = 0;
	func_7628(var_66_float);
	@@var_45_object:AddMark("d7q01BirdmaskD", "pt_map_d7q01_dbirdmask", (int)1, (int)515408, var_66_float);
	var_71_float = 0;
	func_7628(var_71_float);
	@@var_45_object:AddMark("d7q01BirdmaskM", "pt_map_d7q01_mbirdmask", (int)1, (int)515409, var_71_float);
	var_76_float = 0;
	func_7628(var_76_float);
	@@var_45_object:AddMark("d7q01BirdmaskU", "pt_map_d7q01_ubirdmask", (int)1, (int)515407, var_76_float);
	func_8952();
	func_8965();
	var_108_bool = 0; var_109_string = ""; var_110_string = "";
	func_7616(var_108_bool, "quest_d7_01", "place_birdmasks");
	return 2;
}
EMIT "Stack[-1] = 0";


func_8451(var_994_bool)
{
	var_996_int = 0; var_997_string = "";
	func_7530(var_996_int, "ood11Aglaja2");
	var_999_bool = var_996_int == (int)0;
	if(var_999_bool != 0) {
		var_994_bool = 1;
		return 0;
	}
	var_994_bool = 0;
	return 0;
}


func_8965()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)166, (int)1, (int)515413);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_9134(var_105_bool, var_106_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3848(var_2_object, var_680_string)
{
	var_681_bool = 0;
	func_7699(var_681_bool);
	var_682_bool = var_681_bool == 0; //@nz
	if(var_682_bool != 0) {
		return 0;
	}
	var_683_bool = var_680_string == var_2_object;
	if(var_683_bool != 0) {
		return 0;
	}
	var_684_string = ""; var_685_bool = 0;
	var_680_string = var_684_string;
	var_687_bool = var_680_string == "";
	if(var_687_bool != 0) {
		var_685_bool = 0;
	} else {
		var_685_bool = 1;
	}
	func_7477(var_684_string, var_685_bool);
	var_2_object = var_680_string;
	return 0;
	
}


func_8463(var_985_bool, var_986_object)
{
	var_987_bool = 0; var_988_object = Obj(); var_989_string = "";
	var_986_object = var_988_object;
	func_7609(var_987_bool, var_988_object, "d11q01_blueprint");
	if(var_987_bool != 0) {
		var_985_bool = 1;
		return 0;
	}
	var_985_bool = 0;
	return 0;
}


func_8978()
{
	var_193_object = Obj(); var_194_object = Obj();
	CreateDiaryEntry(var_194_object, (int)168, (int)1, (int)515415);
	var_198_bool = 0; var_199_object = Obj(); var_200_int = 0;
	var_194_object = var_199_object;
	func_9134(var_198_bool, var_199_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5911(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_0_object = var_60_object;
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0;
	var_60_object = var_71_object;
	func_7236(var_70_bool, var_71_object, (float)70.0);
	var_117_bool = var_70_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	CreateDialog(var_66_object);
	var_118_int = 0;
	func_7693(var_118_int);
	@@var_66_object:SetNPCName(var_118_int);
	var_119_int = 0;
	func_7691(var_119_int);
	@@var_66_object:SetNPCDescription(var_119_int);
	var_120_string = "";
	func_7695(var_120_string);
	@@var_66_object:SetPhoto(var_120_string);
	var_121_string = "";
	func_7697(var_121_string);
	@@var_66_object:SetPhoto2(var_121_string);
	var_122_int = 0;
	func_9212(var_122_int);
	@@var_66_object:SetPlayerName(var_122_int);
	IsOverrideActive(var_67_bool);
	var_130_bool = var_67_bool;
	if(var_130_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	DoDialog(var_66_object);
	var_131_bool = 0; var_132_object = Obj();
	func_7514(Obj());
	var_133_object = var_132_object;
	func_7323(var_131_bool, var_132_object);
	var_226_object = Obj(); var_227_object = Obj();
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(11);
	func_5992(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	@@var_66_object:IsDialogEnd(var_69_bool);
	
Label_5974:
	var_275_bool = var_69_bool == 0; //@nz
	if(var_275_bool != 0) {
		sync();
		@@var_66_object:IsDialogEnd(var_69_bool);
		goto Label_5974;
	}
	var_60_object = Obj();
	func_7305();
	StopDialog(var_66_object);
	@@var_66_object:GetReturnValue((int)-1);
	var_68_int = var_59_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8474(var_341_bool)
{
	var_343_int = 0; var_344_string = "";
	func_7530(var_343_int, "ood12AglajaNight1");
	var_348_bool = var_343_int == (int)0;
	if(var_348_bool != 0) {
		var_341_bool = 1;
		return 0;
	}
	var_341_bool = 0;
	return 0;
}


func_8991()
{
	var_136_object = Obj(); var_137_object = Obj();
	CreateDiaryEntry(var_137_object, (int)167, (int)1, (int)515414);
	var_141_bool = 0; var_142_object = Obj(); var_143_int = 0;
	var_137_object = var_142_object;
	func_9134(var_141_bool, var_142_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6945(var_0_object)
{
	var_36_bool = 0;
	func_7231(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_6954:
	func_7121();
	goto Label_6954;
}
EMIT "Return(); Pop(0)";


func_7461(var_259_string)
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


func_8486(var_1000_bool)
{
	var_1002_int = 0; var_1003_string = "";
	func_7530(var_1002_int, "d11RotaTalk");
	var_1005_bool = var_1002_int != (int)0;
	if(var_1005_bool != 0) {
		var_1000_bool = 1;
		return 0;
	}
	var_1000_bool = 0;
	return 0;
}


func_9004()
{
	var_248_object = Obj(); var_249_object = Obj();
	CreateDiaryEntry(var_249_object, (int)263, (int)2, (int)521049);
	var_253_bool = 0; var_254_object = Obj(); var_255_int = 0;
	var_249_object = var_254_object;
	func_9134(var_253_bool, var_254_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6959(var_61_bool)
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
	func_7222(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8498(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj();
	var_141_object = var_143_object;
	func_8825(var_143_object);
	if(var_142_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_7477(var_237_string, var_238_bool)
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


func_9017()
{
	var_262_object = Obj(); var_263_object = Obj();
	CreateDiaryEntry(var_263_object, (int)641, (int)2, (int)533275);
	var_267_bool = 0; var_268_object = Obj(); var_269_int = 0;
	var_263_object = var_268_object;
	func_9134(var_267_bool, var_268_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8508(var_402_bool)
{
	var_404_int = 0; var_405_string = "";
	func_7530(var_404_int, "d7q01");
	var_407_bool = var_404_int == (int)0;
	if(var_407_bool != 0) {
		var_402_bool = 1;
		return 0;
	}
	var_402_bool = 0;
	return 0;
}


func_7997()
{
	SetVariable("ood7Aglaja3", (int)1);
	return 0;
}


func_2877(var_2_object, var_816_string)
{
	var_817_bool = 0;
	func_7699(var_817_bool);
	var_818_bool = var_817_bool == 0; //@nz
	if(var_818_bool != 0) {
		return 0;
	}
	var_819_bool = var_816_string == var_2_object;
	if(var_819_bool != 0) {
		return 0;
	}
	var_820_string = ""; var_821_bool = 0;
	var_816_string = var_820_string;
	var_823_bool = var_816_string == "";
	if(var_823_bool != 0) {
		var_821_bool = 0;
	} else {
		var_821_bool = 1;
	}
	func_7477(var_820_string, var_821_bool);
	var_2_object = var_816_string;
	return 0;
	
}


func_6974(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_4924(var_0_object, var_897_int, var_898_object)
{
	var_900_object = Obj(); var_901_bool = 0; var_902_int = 0; var_903_bool = 0; var_904_object = Obj(); var_905_bool = 0; var_906_int = 0; var_907_bool = 0;
	var_0_object = var_898_object;
	var_908_bool = 0; var_909_object = Obj(); var_910_float = 0;
	var_898_object = var_909_object;
	func_7236(var_908_bool, var_909_object, (float)70.0);
	var_911_bool = var_908_bool == 0; //@nz
	if(var_911_bool != 0) {
		var_897_int = -2;
		return 8;
	}
	CreateDialog(var_904_object);
	var_912_int = 0;
	func_7693(var_912_int);
	@@var_904_object:SetNPCName(var_912_int);
	var_913_int = 0;
	func_7691(var_913_int);
	@@var_904_object:SetNPCDescription(var_913_int);
	var_914_string = "";
	func_7695(var_914_string);
	@@var_904_object:SetPhoto(var_914_string);
	var_915_string = "";
	func_7697(var_915_string);
	@@var_904_object:SetPhoto2(var_915_string);
	var_916_int = 0;
	func_9212(var_916_int);
	@@var_904_object:SetPlayerName(var_916_int);
	IsOverrideActive(var_905_bool);
	var_917_bool = var_905_bool;
	if(var_917_bool != 0) {
		var_897_int = -2;
		return 8;
	}
	DoDialog(var_904_object);
	var_918_bool = 0; var_919_object = Obj();
	func_7514(Obj());
	var_920_object = var_919_object;
	func_7323(var_918_bool, var_919_object);
	var_921_object = Obj(); var_922_object = Obj();
	var_898_object = var_921_object;
	var_904_object = var_922_object;
	TaskCall(9);
	func_5005(var_923_object, var_924_object, var_925_string, var_926_bool, var_921_object, var_922_object);
	TaskReturn();
	@@var_904_object:IsDialogEnd(var_907_bool);
	
Label_4987:
	var_1012_bool = var_907_bool == 0; //@nz
	if(var_1012_bool != 0) {
		sync();
		@@var_904_object:IsDialogEnd(var_907_bool);
		goto Label_4987;
	}
	var_898_object = Obj();
	func_7305();
	StopDialog(var_904_object);
	@@var_904_object:GetReturnValue((int)-1);
	var_906_int = var_897_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8003(var_122_object)
{
	var_124_object = Obj(); var_125_int = 0; var_126_object = Obj(); var_127_int = 0;
	SetVariable("d7q01", (int)2);
	func_9162(Obj());
	var_130_object = var_126_object;
	var_135_float = 0;
	func_7628(var_135_float);
	@@var_126_object:AddMark("d7q01AglajaFindLierSelf", "pt_map_aglaja", (int)1, (int)515411, var_135_float);
	func_8991();
	@@var_122_object:RemoveItemByType(var_127_int, "d7q01_mreport", (int)1);
	@@var_122_object:RemoveItemByType(var_127_int, "d7q01_dreport", (int)1);
	@@var_122_object:RemoveItemByType(var_127_int, "d7q01_ureport", (int)1);
	return 4;
}
EMIT "Stack[-2] = 0";


func_6979(var_44_bool)
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
	func_7197(var_51_float, var_52_object);
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


func_7492(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0;
	var_169_bool = 0;
	func_7699(var_169_bool);
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


func_9030()
{
	var_270_object = Obj(); var_271_object = Obj();
	CreateDiaryEntry(var_271_object, (int)642, (int)2, (int)533276);
	var_275_bool = 0; var_276_object = Obj(); var_277_int = 0;
	var_271_object = var_276_object;
	func_9134(var_275_bool, var_276_object, (int)641);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8520(var_511_bool)
{
	var_513_int = 0; var_514_string = "";
	func_7530(var_513_int, "ood7Aglaja3");
	var_516_bool = var_513_int == (int)0;
	if(var_516_bool != 0) {
		var_511_bool = 1;
		return 0;
	}
	var_511_bool = 0;
	return 0;
}


func_7507()
{
	var_39_bool = 0;
	func_7699(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_8532(var_439_bool)
{
	var_441_int = 0; var_442_string = "";
	func_7530(var_441_int, "d7q01");
	var_444_bool = var_441_int == (int)1;
	if(var_444_bool != 0) {
		var_439_bool = 1;
		return 0;
	}
	var_439_bool = 0;
	return 0;
}


func_9043()
{
	var_296_object = Obj(); var_297_object = Obj();
	CreateDiaryEntry(var_297_object, (int)646, (int)2, (int)533280);
	var_301_bool = 0; var_302_object = Obj(); var_303_int = 0;
	var_297_object = var_302_object;
	func_9134(var_301_bool, var_302_object, (int)641);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7001()
{
	var_1016_float = 0; var_1017_float = 0;
	rand(var_1017_float, (int)8, (int)16);
	SetTimer((int)10, var_1017_float);
	return 2;
}


func_7514(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj();
	self(var_135_object);
	var_135_object = var_133_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8544(var_445_bool)
{
	var_447_int = 0; var_448_string = "";
	func_7530(var_447_int, "ood7Aglaja4");
	var_450_bool = var_447_int == (int)0;
	if(var_450_bool != 0) {
		var_445_bool = 1;
		return 0;
	}
	var_445_bool = 0;
	return 0;
}


func_7520(var_97_cvector, var_98_cvector)
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


func_7010()
{
	KillTimer((int)10);
	return 0;
}


func_9056()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)175, (int)1, (int)515434);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_9134(var_51_bool, var_52_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8038()
{
	SetVariable("ood7Aglaja4", (int)1);
	return 0;
}


func_5992(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_233_string = "";
		func_6050(var_227_object, "Neutral");
		@@@var_0_object:SetMessage((int)533096);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)533097, (int)34607, (int)34606);
		@@@var_0_object:AddReply((int)533103, (int)34615, (int)34614);
		goto Label_6020;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x176c";
	}
Label_6020:
	var_257_bool = 0;
	func_7699(var_257_bool);
	if(var_257_bool != 0) {

	Label_6024:
		lshWaitForAnimEnd();
		var_258_string = var_3_string;
		if(var_258_string != 0) {
		} else {
			var_259_string = "";
			var_259_string = var_2_object;
			func_7461(var_259_string);
			goto Label_6024;
	}
		PlayAnimation("all", "idle");

	Label_6039:
		WaitForAnimEnd();
		var_272_string = var_3_string;
		if(var_272_string != 0) {
			goto Label_6049;
		}
		PlayAnimation("all", "idle");
		goto Label_6039;
	}
	goto Label_6049;
	
Label_6049:
	return 0;
	
}


func_7530(var_343_int, var_344_string)
{
	var_345_int = 0; var_346_int = 0;
	GetVariable(var_344_string, var_346_int);
	var_346_int = var_343_int;
	return 2;
}


func_8556(var_451_bool, var_452_object)
{
	var_453_bool = 0;
	var_453_bool = 0;
	var_454_bool = 0;
	var_454_bool = 0;
	var_455_bool = 0; var_456_object = Obj(); var_457_string = "";
	var_452_object = var_456_object;
	func_7609(var_455_bool, var_456_object, "d7q01_dreport");
	if(var_455_bool != 0) {
		var_462_bool = 0; var_463_object = Obj(); var_464_string = "";
		var_452_object = var_463_object;
		func_7609(var_462_bool, var_463_object, "d7q01_mreport");
		if(var_462_bool != 0) {
			var_454_bool = 1;
		}
	}
	if(var_454_bool != 0) {
		var_465_bool = 0; var_466_object = Obj(); var_467_string = "";
		var_452_object = var_466_object;
		func_7609(var_465_bool, var_466_object, "d7q01_ureport");
		if(var_465_bool != 0) {
			var_453_bool = 1;
		}
	}
	if(var_453_bool != 0) {
		var_451_bool = 1;
		return 0;
	}
	var_451_bool = 0;
	return 0;
}


func_8044()
{
	SetVariable("ood7Aglaja5", (int)1);
	return 0;
}


func_9069()
{
	var_69_object = Obj(); var_70_object = Obj();
	CreateDiaryEntry(var_70_object, (int)176, (int)1, (int)515435);
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0;
	var_70_object = var_75_object;
	func_9134(var_74_bool, var_75_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7535(var_112_object, var_113_string)
{
	var_114_object = Obj(); var_115_object = Obj(); var_116_object = Obj(); var_117_object = Obj();
	GetMainOutdoorScene(var_116_object);
	var_119_int = var_113_string + ".bin";
	AddBlankActor(var_117_object, var_116_object, var_113_string, var_119_int);
	var_117_object = var_112_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8050()
{
	var_178_object = Obj(); var_179_object = Obj(); var_180_object = Obj(); var_181_object = Obj();
	func_9162(Obj());
	var_182_object = var_180_object;
	@@var_180_object:FindMark(var_181_object, "d7q01AglajaFindLierSelf");
	var_184_object = var_181_object;
	if(var_184_object != 0) {
		@@var_181_object:Remove();
	}
	@@var_180_object:FindMark(var_181_object, "d7q01AglajaGotoBirdmaskSelf");
	var_186_object = var_181_object;
	if(var_186_object != 0) {
		@@var_181_object:Remove();
	}
	@@var_180_object:FindMark(var_181_object, "d7q01BirdmaskD");
	var_188_object = var_181_object;
	if(var_188_object != 0) {
		@@var_181_object:Remove();
	}
	@@var_180_object:FindMark(var_181_object, "d7q01BirdmaskM");
	var_190_object = var_181_object;
	if(var_190_object != 0) {
		@@var_181_object:Remove();
	}
	@@var_180_object:FindMark(var_181_object, "d7q01BirdmaskU");
	var_192_object = var_181_object;
	if(var_192_object != 0) {
		@@var_181_object:Remove();
	}
	func_8978();
	var_201_bool = 0; var_202_string = ""; var_203_string = "";
	func_7616(var_201_bool, "quest_d7_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7546(var_139_int, var_140_int)
{
	var_141_object = Obj(); var_142_object = Obj();
	CreateIntVector(var_142_object);
	@@var_142_object:add(var_139_int);
	@@var_142_object:add(var_140_int);
	SendWorldWndMessage((int)3, var_142_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9082()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)764, (int)2, (int)540061);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_9134(var_67_bool, var_68_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7558(var_134_object, var_135_int)
{
	var_136_int = 0; var_137_int = 0;
	var_138_object = Obj(); var_139_string = ""; var_140_int = 0;
	var_134_object = var_138_object;
	var_135_int = var_140_int;
	func_7205(var_138_object, "money", var_140_int);
	var_145_bool = var_135_int > (int)0;
	if(var_145_bool != 0) {
		GetInvItemByName(var_137_int, "Money");
		var_147_int = 0; var_148_int = 0;
		var_137_int = var_147_int;
		var_135_int = var_148_int;
		func_7546(var_147_int, var_148_int);
	}
	return 2;
}


func_9095()
{
	var_85_object = Obj(); var_86_object = Obj();
	CreateDiaryEntry(var_86_object, (int)765, (int)2, (int)540062);
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0;
	var_86_object = var_91_object;
	func_9134(var_90_bool, var_91_object, (int)764);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8587(var_475_bool)
{
	var_477_int = 0; var_478_string = "";
	func_7530(var_477_int, "ood7Aglaja5");
	var_480_bool = var_477_int == (int)0;
	if(var_480_bool != 0) {
		var_475_bool = 1;
		return 0;
	}
	var_475_bool = 0;
	return 0;
}


func_5005(var_0_object, var_1_object, var_2_object, var_3_string, var_921_object, var_922_object)
{
	var_0_object = var_922_object;
	var_1_object = var_921_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_928_bool = 0; var_929_object = Obj();
		var_929_object = var_1_object;
		func_8695(var_929_object);
		if(var_928_bool != 0) {
			var_934_object = Obj(); var_935_object = Obj();
			var_934_object = var_1_object;
			var_935_object = var_0_object;
			func_8280();
			var_938_string = "";
			func_5151(var_922_object, "Neutral");
			@@@var_0_object:SetMessage((int)514194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514195, (int)15410, (int)15409);
		} else {
				var_958_bool = 0; var_959_object = Obj();
				var_959_object = var_1_object;
				func_8683(var_959_object);
				if(var_958_bool != 0) {
					var_964_object = Obj(); var_965_object = Obj();
					var_964_object = var_1_object;
					var_965_object = var_0_object;
					func_8145();
					var_968_string = "";
					func_5151(var_922_object, "Neutral");
					@@@var_0_object:SetMessage((int)534475);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)536564, (int)38380, (int)38379);
					@@@var_0_object:AddReply((int)536570, (int)38380, (int)38385);
					goto Label_5121;
				}
				var_976_string = "";
				func_5151(var_922_object, "Neutral");
				@@@var_0_object:SetMessage((int)514222);
				@@@var_0_object:ClearReplies();
				var_978_bool = 0;
				var_978_bool = 0;
				var_979_bool = 0; var_980_object = Obj();
				var_980_object = var_1_object;
				func_8707(var_980_object);
				if(var_979_bool != 0) {
					var_985_bool = 0; var_986_object = Obj();
					var_986_object = var_1_object;
					func_8463(var_985_bool, var_986_object);
					if(var_985_bool != 0) {
						var_978_bool = 1;
					}
				}
				if(var_978_bool != 0) {
					@@@var_0_object:AddReply((int)514223, (int)15442, (int)15441);
				}
				var_993_bool = 0;
				var_993_bool = 0;
				var_994_bool = 0; var_995_object = Obj();
				var_995_object = var_1_object;
				func_8451(var_995_object);
				if(var_994_bool != 0) {
					var_1000_bool = 0; var_1001_object = Obj();
					var_1001_object = var_1_object;
					func_8486(var_1001_object);
					if(var_1000_bool != 0) {
						var_993_bool = 1;
					}
				}
				if(var_993_bool != 0) {
					@@@var_0_object:AddReply((int)514234, (int)15453, (int)15452);
				}
				@@@var_0_object:AddReply((int)514239, (int)-1, (int)15457);
				goto Label_5121;
		}
	}
Label_5121:
	var_950_bool = 0;
	func_7699(var_950_bool);
	if(var_950_bool != 0) {

	Label_5125:
		lshWaitForAnimEnd();
		var_951_string = var_3_string;
		if(var_951_string != 0) {
		} else {
			var_952_string = "";
			var_952_string = var_2_object;
			func_7461(var_952_string);
			goto Label_5125;
	}
		PlayAnimation("all", "idle");

	Label_5140:
		WaitForAnimEnd();
		var_955_string = var_3_string;
		if(var_955_string != 0) {
			goto Label_5150;
		}
		PlayAnimation("all", "idle");
		goto Label_5140;

	}
	goto Label_5150;
	
Label_5150:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1391";


func_9108()
{
	var_156_object = Obj(); var_157_object = Obj();
	CreateDiaryEntry(var_157_object, (int)767, (int)2, (int)540064);
	var_161_bool = 0; var_162_object = Obj(); var_163_int = 0;
	var_157_object = var_162_object;
	func_9134(var_161_bool, var_162_object, (int)764);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8599(var_484_bool)
{
	var_486_int = 0; var_487_string = "";
	func_7530(var_486_int, "d7q01");
	var_489_bool = var_486_int == (int)3;
	if(var_489_bool != 0) {
		var_484_bool = 1;
		return 0;
	}
	var_484_bool = 0;
	return 0;
}


func_7577(var_128_object, var_129_object, var_130_int)
{
	var_131_int = 0; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_int = 0; var_136_bool = 0;
	@@var_129_object:GetItemID(var_134_int);
	GetInvItemProperty(var_135_int, var_134_int, "Category");
	@@var_128_object:AddItem(var_136_bool, var_129_object, var_135_int, var_130_int);
	var_138_bool = var_136_bool == 0; //@nz
	if(var_138_bool != 0) {
		@@var_128_object:DropItems(var_129_object, var_130_int);
	} else {
		var_139_int = 0; var_140_int = 0;
		var_134_int = var_139_int;
		var_130_int = var_140_int;
		func_7546(var_139_int, var_140_int);
	}
	return 6;
	
}


func_9121(var_60_object)
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


func_6050(var_2_object, var_233_string)
{
	var_234_bool = 0;
	func_7699(var_234_bool);
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
	func_7477(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	return 0;
	
}


func_8611(var_493_bool)
{
	var_495_int = 0; var_496_string = "";
	func_7530(var_495_int, "d7q02");
	var_498_bool = var_495_int == (int)2;
	if(var_498_bool != 0) {
		var_493_bool = 1;
		return 0;
	}
	var_493_bool = 0;
	return 0;
}


func_8101()
{
	SetVariable("d7q02", (int)3);
	func_9004();
	return 0;
}


func_7596(var_123_object, var_124_string, var_125_int)
{
	var_126_object = Obj(); var_127_object = Obj();
	CreateInvItem(var_127_object);
	@@var_127_object:SetItemName(var_124_string);
	var_128_object = Obj(); var_129_object = Obj(); var_130_int = 0;
	var_123_object = var_128_object;
	var_127_object = var_129_object;
	var_125_int = var_130_int;
	func_7577(var_128_object, var_129_object, var_130_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8110()
{
	SetVariable("d8q01", (int)1);
	func_9056();
	func_9069();
	var_77_bool = 0; var_78_string = ""; var_79_string = "";
	func_7616(var_77_bool, "quest_d8_01", "block_well");
	return 0;
}


func_8623(var_594_bool)
{
	var_596_int = 0; var_597_string = "";
	func_7530(var_596_int, "d8q01");
	var_599_bool = var_596_int == (int)0;
	if(var_599_bool != 0) {
		var_594_bool = 1;
		return 0;
	}
	var_594_bool = 0;
	return 0;
}


func_9134(var_51_bool, var_52_object, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0;
	func_9121(Obj());
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


func_6582(var_0_object, var_301_int, var_302_object)
{
	var_304_object = Obj(); var_305_bool = 0; var_306_int = 0; var_307_bool = 0; var_308_object = Obj(); var_309_bool = 0; var_310_int = 0; var_311_bool = 0;
	var_0_object = var_302_object;
	var_312_bool = 0; var_313_object = Obj(); var_314_float = 0;
	var_302_object = var_313_object;
	func_7236(var_312_bool, var_313_object, (float)70.0);
	var_315_bool = var_312_bool == 0; //@nz
	if(var_315_bool != 0) {
		var_301_int = -2;
		return 8;
	}
	CreateDialog(var_308_object);
	var_316_int = 0;
	func_7693(var_316_int);
	@@var_308_object:SetNPCName(var_316_int);
	var_317_int = 0;
	func_7691(var_317_int);
	@@var_308_object:SetNPCDescription(var_317_int);
	var_318_string = "";
	func_7695(var_318_string);
	@@var_308_object:SetPhoto(var_318_string);
	var_319_string = "";
	func_7697(var_319_string);
	@@var_308_object:SetPhoto2(var_319_string);
	var_320_int = 0;
	func_9212(var_320_int);
	@@var_308_object:SetPlayerName(var_320_int);
	IsOverrideActive(var_309_bool);
	var_321_bool = var_309_bool;
	if(var_321_bool != 0) {
		var_301_int = -2;
		return 8;
	}
	DoDialog(var_308_object);
	var_322_bool = 0; var_323_object = Obj();
	func_7514(Obj());
	var_324_object = var_323_object;
	func_7323(var_322_bool, var_323_object);
	var_325_object = Obj(); var_326_object = Obj();
	var_302_object = var_325_object;
	var_308_object = var_326_object;
	TaskCall(13);
	func_6663(var_327_object, var_328_object, var_329_string, var_330_bool, var_325_object, var_326_object);
	TaskReturn();
	@@var_308_object:IsDialogEnd(var_311_bool);
	
Label_6645:
	var_366_bool = var_311_bool == 0; //@nz
	if(var_366_bool != 0) {
		sync();
		@@var_308_object:IsDialogEnd(var_311_bool);
		goto Label_6645;
	}
	var_302_object = Obj();
	func_7305();
	StopDialog(var_308_object);
	@@var_308_object:GetReturnValue((int)-1);
	var_310_int = var_301_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7609(var_455_bool, var_456_object, var_457_string)
{
	var_458_int = 0; var_459_bool = 0; var_460_int = 0; var_461_bool = 0;
	GetInvItemByName(var_460_int, var_457_string);
	@@var_456_object:HasItem(var_460_int, var_461_bool);
	var_461_bool = var_455_bool;
	return 4;
}


func_8635(var_558_bool)
{
	var_560_int = 0; var_561_string = "";
	func_7530(var_560_int, "ood8Aglaja1");
	var_563_bool = var_560_int == (int)0;
	if(var_563_bool != 0) {
		var_558_bool = 1;
		return 0;
	}
	var_558_bool = 0;
	return 0;
}


func_8127()
{
	SetVariable("ood8Aglaja1", (int)1);
	return 0;
}


func_7616(var_77_bool, var_78_string, var_79_string)
{
	var_80_object = Obj(); var_81_object = Obj();
	FindActor(var_81_object, var_78_string);
	var_82_bool = var_81_object == 0; //@ne
	if(var_82_bool != 0) {
		var_77_bool = 0;
		return 2;
	}
	Trigger(var_81_object, var_79_string);
	var_77_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8133()
{
	SetVariable("ood8Aglaja2", (int)1);
	return 0;
}


func_8647(var_613_bool)
{
	var_615_int = 0; var_616_string = "";
	func_7530(var_615_int, "ood8Aglaja2");
	var_618_bool = var_615_int == (int)0;
	if(var_618_bool != 0) {
		var_613_bool = 1;
		return 0;
	}
	var_613_bool = 0;
	return 0;
}


func_9162(var_48_object)
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


func_8139()
{
	SetVariable("d8KainIsReason", (int)1);
	return 0;
}


func_7628(var_59_float)
{
	var_60_float = 0; var_61_float = 0;
	GetGameTime(var_61_float);
	var_61_float = var_59_float;
	return 2;
}


func_8145()
{
	SetVariable("ood11Aglaja1", (int)1);
	return 0;
}


func_7121()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0;
	WaitForAnimEnd();
	var_52_bool = 0;
	func_7231(var_52_bool);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 12;
	}
	func_7674((int)0);
	var_54_int = var_46_int;
	var_47_int = 0;
	
Label_7135:
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_47_int < (int)5;
	if(var_69_bool != 0) {
		var_70_bool = 0;
		func_7231(var_70_bool);
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
				func_7667(var_81_string, var_82_int);
				PlayAnimation("all", var_81_string);
				WaitForAnimEnd(var_51_bool);
				var_83_bool = var_51_bool == 0; //@nz
				if(var_83_bool == 0) goto Label_7176;
				goto Label_7187;
		}
		Label_7176:
			var_74_bool = 0;
			func_7190(var_74_bool);
			var_75_bool = var_74_bool == 0; //@nz
			if(var_75_bool != 0) {
				goto Label_7187;
			}
			ResetAAS();
			var_47_int = var_47_int + (int)1;
			goto Label_7135;

		}
	}
Label_7187:
	ResetAAS();
	return 12;
	
}


func_8659(var_619_bool)
{
	var_621_int = 0; var_622_string = "";
	func_7530(var_621_int, "d8TermitnikLoad");
	var_624_bool = var_621_int != (int)0;
	if(var_624_bool != 0) {
		var_619_bool = 1;
		return 0;
	}
	var_619_bool = 0;
	return 0;
}


func_7633(var_186_int)
{
	var_187_float = 0; var_188_float = 0;
	GetGameTime(var_188_float);
	var_190_int = 0;
	var_190_int = var_188_float / (int)24;
	var_186_int = (int)1 + var_190_int;
	return 2;
}


func_8151()
{
	SetVariable("d11q01", (int)1);
	func_8887();
	func_8900();
	var_77_bool = 0; var_78_string = ""; var_79_string = "";
	func_7616(var_77_bool, "quest_d11_01", "init_girl");
	var_83_bool = 0; var_84_string = ""; var_85_string = "";
	func_7616(var_83_bool, "quest_d11_01", "remove_andrei");
	return 0;
}


func_7642(var_368_bool, var_369_int)
{
	var_370_int = 0;
	func_7633(var_370_int);
	var_368_bool = var_370_int == var_369_int;
	return 0;
}


func_9179(var_218_object, var_219_string, var_220_float)
{
	var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_object = Obj(); var_225_bool = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_object = Obj(); var_229_bool = 0;
	GetMainOutdoorScene(var_228_object);
	var_230_bool = var_228_object == 0; //@ne
	if(var_230_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_228_object:GetLocator(var_219_string, var_229_bool, var_226_cvector, var_227_cvector);
	var_232_bool = var_229_bool == 0; //@nz
	if(var_232_bool != 0) {
		var_234_int = "Warning: outdoor scene locator " + var_219_string;
		var_236_int = var_234_int + " doesnt exist";
		Trace(var_236_int);
	}
	@@var_228_object:GetMap(var_218_object);
	var_237_bool = var_218_object == 0; //@ne
	if(var_237_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_239_float = GetByIndex(var_226_cvector, 0);
	var_240_float = GetByIndex(var_226_cvector, 2);
	@@var_218_object:SetMapParams(var_239_float, var_240_float, var_220_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_8671(var_730_bool)
{
	var_732_int = 0; var_733_string = "";
	func_7530(var_732_int, "d9TalkToPolkovodec");
	var_735_bool = var_732_int != (int)0;
	if(var_735_bool != 0) {
		var_730_bool = 1;
		return 0;
	}
	var_730_bool = 0;
	return 0;
}


func_7648(var_286_bool, var_287_int)
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


func_8683(var_958_bool)
{
	var_960_int = 0; var_961_string = "";
	func_7530(var_960_int, "ood11Aglaja1");
	var_963_bool = var_960_int == (int)0;
	if(var_963_bool != 0) {
		var_958_bool = 1;
		return 0;
	}
	var_958_bool = 0;
	return 0;
}


func_8173()
{
	func_8913();
	var_160_bool = 0; var_161_string = ""; var_162_string = "";
	func_7616(var_160_bool, "quest_d11_01", "completed");
	return 0;
}


func_7667(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = "";
	var_64_int = var_61_int;
	if(var_64_int != 0) {
		"idle" = "idle" + var_61_int;
	}
	var_63_string = var_60_string;
	return 2;
}


func_8695(var_928_bool)
{
	var_930_int = 0; var_931_string = "";
	func_7530(var_930_int, "d11q01");
	var_933_bool = var_930_int == (int)0;
	if(var_933_bool != 0) {
		var_928_bool = 1;
		return 0;
	}
	var_928_bool = 0;
	return 0;
}


func_7674(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_57_int = 0;
	
Label_7676:
	var_60_string = ""; var_61_int = 0;
	var_57_int = var_61_int;
	func_7667(var_60_string, var_61_int);
	HasAnimation(var_58_bool, "all", var_60_string);
	var_65_bool = var_58_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_57_int = var_57_int + (int)1;
		goto Label_7676;
	}
	var_57_int = var_54_int;
	return 4;
	
}


func_9212(var_122_int)
{
	var_123_int = 0; var_124_int = 0;
	GetVariable("branch", var_124_int);
	var_127_bool = var_124_int == (int)0;
	if(var_127_bool != 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0x240b";
	}
	var_129_bool = var_124_int == (int)1;
	if(var_129_bool != 0) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
	return 2;
}


func_8189()
{
	SetVariable("ood9Aglaja2", (int)1);
	return 0;
}


