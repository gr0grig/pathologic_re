// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Fear|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Saveyouall|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:quest_d6_01|W:completed|W:klara blood is given|W:d6q01_klara_blood|W:playsound|W:giveitem|W:ood6Klara1|W:ood6Klara2|W:d6q01KlaraVolonteer|W:ood6Klara3|W:failed|W:d6q01|W:microscope_d6q01_klara_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x50c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x136 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x510 vars=string
// @EVENT_6: op=0x524 vars=
// @EVENT_5: op=0x531 vars=
// @EVENT_7: op=0x57a vars=int
// @EVENT_45: op=0x5bc vars=bool
// @EVENT_0: op=0x5c8 vars=object
// @PE: 0x51,0x120,0x136,0x504,0x50c,0x531,0x57a,0x5a0,0x5bc,0x7d5,0x7df,0x7ed,0x7f3,0x7f9,0x7ff,0x80d,0x813,0x81d,0x829,0x835,0x841,0x84d,0x859,0x865,0x871

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1888();
		var_12_bool = var_8_bool == (int)13943;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_2041();
		}
		var_18_bool = var_8_bool == (int)3807;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_object = Obj();
			var_19_object = var_1_object;
			var_20_object = var_0_object;
			func_2015(var_20_object);
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_2029();
		}
		var_71_bool = var_8_bool == (int)3812;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_2015(var_73_object);
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_2029();
		}
		var_77_bool = var_8_bool == (int)3813;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_2067();
		}
		var_95_bool = var_8_bool == (int)3796;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_2067();
		}
		var_99_bool = var_8_bool == (int)3803;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_2067();
		}
		var_103_bool = var_8_bool == (int)3774;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_2067();
		}
		var_107_bool = var_8_bool == (int)13944;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_2061();
		}
		var_113_bool = var_8_bool == (int)11872;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_2005();
		}
		var_128_bool = var_8_bool == (int)11873;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_2047();
		}
		var_145_bool = var_8_bool == (int)11871;
		if(var_145_bool != 0) {
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_2005();
		}
		var_149_bool = var_8_bool == (int)11876;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_2047();
		}
		var_153_bool = var_7_cvector == (int)13931;
		if(var_153_bool != 0) {
			var_154_bool = 0;
			var_154_bool = 0;
			var_155_bool = 0;
			var_155_bool = 0;
			var_156_bool = 0; var_157_object = Obj();
			var_157_object = var_1_object;
			func_2089(var_157_object);
			if(var_156_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_2101(var_165_object);
				var_170_bool = var_164_bool == 0; //@nz
				if(var_170_bool != 0) {
					var_155_bool = 1;
				}
			}
			if(var_155_bool != 0) {
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_object;
				func_2077(var_172_object);
				var_177_bool = var_171_bool == 0; //@nz
				if(var_177_bool != 0) {
					var_154_bool = 1;
				}
			}
			if(var_154_bool != 0) {
				var_178_object = Obj(); var_179_object = Obj();
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_2035();
				var_182_string = "";
				func_288(var_8_bool, "Fear");
				@@@var_0_object:SetMessage((int)512737);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512738, (int)13933, (int)13932);
				@@@var_0_object:AddReply((int)512744, (int)13965, (int)13938);
				@@@var_0_object:AddReply((int)512745, (int)13954, (int)13939);
				return 0;
			}
			var_209_bool = 0;
			var_209_bool = 0;
			var_210_bool = 0; var_211_object = Obj();
			var_211_object = var_1_object;
			func_2101(var_211_object);
			var_212_bool = var_210_bool == 0; //@nz
			if(var_212_bool != 0) {
				var_213_bool = 0; var_214_object = Obj();
				var_214_object = var_1_object;
				func_2077(var_214_object);
				var_215_bool = var_213_bool == 0; //@nz
				if(var_215_bool != 0) {
					var_209_bool = 1;
				}
			}
			if(var_209_bool != 0) {
				var_216_string = "";
				func_288(var_8_bool, "Fear");
				@@@var_0_object:SetMessage((int)533081);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)533082, (int)-1, (int)34594);
				@@@var_0_object:AddReply((int)536138, (int)-1, (int)37897);
				return 0;
			}
			var_224_bool = 0;
			var_224_bool = 1;
			var_225_bool = 0; var_226_object = Obj();
			var_226_object = var_1_object;
			func_2101(var_226_object);
			if(var_225_bool != 1) {
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_object;
				func_2077(var_228_object);
				if(var_227_bool != 1) {
					var_224_bool = 0;
				}
			}
			if(var_224_bool != 0) {
				var_229_string = "";
				func_288(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)512748);
				@@@var_0_object:ClearReplies();
				var_231_bool = 0; var_232_object = Obj();
				var_232_object = var_1_object;
				func_2113(var_232_object);
				if(var_231_bool != 0) {
					@@@var_0_object:AddReply((int)512749, (int)3753, (int)13943);
				}
				var_240_bool = 0;
				var_240_bool = 0;
				var_241_bool = 0;
				var_241_bool = 0;
				var_242_bool = 0;
				var_242_bool = 0;
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_2161(var_244_object);
				if(var_243_bool != 0) {
					var_249_bool = 0; var_250_object = Obj();
					var_250_object = var_1_object;
					func_2125(var_250_object);
					if(var_249_bool != 0) {
						var_242_bool = 1;
					}
				}
				if(var_242_bool != 0) {
					var_255_bool = 0; var_256_object = Obj();
					var_256_object = var_1_object;
					func_2137(var_256_object);
					var_261_bool = var_255_bool == 0; //@nz
					if(var_261_bool != 0) {
						var_241_bool = 1;
					}
				}
				if(var_241_bool != 0) {
					var_262_bool = 0; var_263_object = Obj();
					var_263_object = var_1_object;
					func_2149(var_263_object);
					var_268_bool = var_262_bool == 0; //@nz
					if(var_268_bool != 0) {
						var_240_bool = 1;
					}
				}
				if(var_240_bool != 0) {
					@@@var_0_object:AddReply((int)512750, (int)11864, (int)13944);
				}
				@@@var_0_object:AddReply((int)512769, (int)-1, (int)13968);
				return 0;
			}
		}
		var_276_bool = var_7_cvector == (int)11864;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)510739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510740, (int)11866, (int)11865);
			@@@var_0_object:AddReply((int)510752, (int)11866, (int)11879);
			return 0;
		}
		var_286_bool = var_7_cvector == (int)11866;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)510741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510742, (int)11868, (int)11867);
			@@@var_0_object:AddReply((int)510751, (int)11870, (int)11877);
			return 0;
		}
		var_296_bool = var_7_cvector == (int)11868;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)510743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510744, (int)11870, (int)11869);
			@@@var_0_object:AddReply((int)510749, (int)11870, (int)11874);
			@@@var_0_object:AddReply((int)510750, (int)-1, (int)11876);
			return 0;
		}
		var_309_bool = var_7_cvector == (int)11870;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)510745);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510747, (int)-1, (int)11872);
			@@@var_0_object:AddReply((int)510748, (int)-1, (int)11873);
			@@@var_0_object:AddReply((int)510746, (int)-1, (int)11871);
			return 0;
		}
		var_322_bool = var_7_cvector == (int)3753;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_288(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503484, (int)3756, (int)3754);
			@@@var_0_object:AddReply((int)503485, (int)3778, (int)3755);
			@@@var_0_object:AddReply((int)503508, (int)3763, (int)3783);
			return 0;
		}
		var_335_bool = var_7_cvector == (int)3778;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)503505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503506, (int)3775, (int)3779);
			@@@var_0_object:AddReply((int)503507, (int)3763, (int)3781);
			return 0;
		}
		var_345_bool = var_7_cvector == (int)3756;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)503486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503487, (int)3775, (int)3757);
			@@@var_0_object:AddReply((int)503488, (int)3770, (int)3758);
			@@@var_0_object:AddReply((int)503489, (int)3760, (int)3759);
			@@@var_0_object:AddReply((int)503491, (int)3763, (int)3761);
			return 0;
		}
		var_361_bool = var_7_cvector == (int)3760;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)503490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503492, (int)3763, (int)3762);
			@@@var_0_object:AddReply((int)503509, (int)3786, (int)3785);
			return 0;
		}
		var_371_bool = var_7_cvector == (int)3786;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)503510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503511, (int)3788, (int)3787);
			@@@var_0_object:AddReply((int)503515, (int)3766, (int)3793);
			return 0;
		}
		var_381_bool = var_7_cvector == (int)3788;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)503512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503513, (int)3775, (int)3789);
			@@@var_0_object:AddReply((int)503514, (int)3766, (int)3791);
			return 0;
		}
		var_391_bool = var_7_cvector == (int)3763;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_288(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503494, (int)3766, (int)3764);
			@@@var_0_object:AddReply((int)503495, (int)3766, (int)3765);
			return 0;
		}
		var_401_bool = var_7_cvector == (int)3766;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_288(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503497, (int)3771, (int)3769);
			@@@var_0_object:AddReply((int)503501, (int)3797, (int)3773);
			@@@var_0_object:AddReply((int)503502, (int)-1, (int)3774);
			return 0;
		}
		var_414_bool = var_7_cvector == (int)3797;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)503517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503518, (int)3770, (int)3798);
			@@@var_0_object:AddReply((int)503520, (int)3801, (int)3800);
			return 0;
		}
		var_424_bool = var_7_cvector == (int)3801;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)503521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503522, (int)3804, (int)3802);
			@@@var_0_object:AddReply((int)503523, (int)-1, (int)3803);
			return 0;
		}
		var_434_bool = var_7_cvector == (int)3804;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)503524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503525, (int)3770, (int)3805);
			return 0;
		}
		var_441_bool = var_7_cvector == (int)3771;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_288(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503499);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503500, (int)3770, (int)3772);
			@@@var_0_object:AddReply((int)503516, (int)-1, (int)3796);
			return 0;
		}
		var_451_bool = var_7_cvector == (int)3770;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_288(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503526, (int)-1, (int)3807);
			@@@var_0_object:AddReply((int)503527, (int)3809, (int)3808);
			return 0;
		}
		var_461_bool = var_7_cvector == (int)3809;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)503528);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503529, (int)3811, (int)3810);
			return 0;
		}
		var_468_bool = var_7_cvector == (int)3811;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)503530);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503531, (int)-1, (int)3812);
			@@@var_0_object:AddReply((int)503532, (int)-1, (int)3813);
			return 0;
		}
		var_478_bool = var_7_cvector == (int)3775;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)503503);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503504, (int)3770, (int)3776);
			return 0;
		}
		var_485_bool = var_7_cvector == (int)13965;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)512767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512768, (int)13933, (int)13966);
			return 0;
		}
		var_492_bool = var_7_cvector == (int)13933;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)512739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512740, (int)13935, (int)13934);
			@@@var_0_object:AddReply((int)512746, (int)13935, (int)13940);
			@@@var_0_object:AddReply((int)512747, (int)13935, (int)13941);
			return 0;
		}
		var_505_bool = var_7_cvector == (int)13935;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)512741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512742, (int)13937, (int)13936);
			@@@var_0_object:AddReply((int)512751, (int)13947, (int)13945);
			@@@var_0_object:AddReply((int)512752, (int)13937, (int)13946);
			return 0;
		}
		var_518_bool = var_7_cvector == (int)13947;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_288(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)512753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512754, (int)13949, (int)13948);
			@@@var_0_object:AddReply((int)538781, (int)-1, (int)40701);
			return 0;
		}
		var_528_bool = var_7_cvector == (int)13949;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)512755);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512756, (int)-1, (int)13950);
			@@@var_0_object:AddReply((int)512757, (int)-1, (int)13951);
			return 0;
		}
		var_538_bool = var_7_cvector == (int)13937;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)512743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512758, (int)13954, (int)13952);
			@@@var_0_object:AddReply((int)512759, (int)13954, (int)13953);
			return 0;
		}
		var_548_bool = var_7_cvector == (int)13954;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)512760);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512761, (int)13957, (int)13956);
			return 0;
		}
		var_555_bool = var_7_cvector == (int)13957;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)512762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512763, (int)13959, (int)13958);
			return 0;
		}
		var_562_bool = var_7_cvector == (int)13959;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_288(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)512764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512765, (int)-1, (int)13960);
			@@@var_0_object:AddReply((int)512766, (int)-1, (int)13961);
			return 0;
		}
		var_3_string = true;
		var_571_bool = 0;
		func_2291(var_571_bool);
		if(var_571_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x137";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_1895(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_1315;
		var_1_object = false;
	}
Label_1315:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1895(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_1440();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1455();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_1398();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_1612(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_1367(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_1347(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1895(Obj());
				var_53_object = var_52_object;
				func_1762(var_51_bool, var_52_object);
			}
		} else {
			func_1362(var_7_int);
			func_1389();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_1389();
	} else {
		var_14_string = "";
		func_1842("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_1580();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_1603(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_1284(var_25_object);
		var_348_string = "";
		func_1842("Neutral");
		func_1398();
		func_1389();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1333(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_1617(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_2285(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_2283(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_2287(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_2289(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_2266(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1895(Obj());
	var_100_object = var_99_object;
	func_1704(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_339_bool = var_36_bool == 0; //@nz
	if(var_339_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1686();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1284(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1799(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1972(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1808:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1808;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_1873(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_2061()
{
	SetVariable("ood6Klara3", (int)1);
	return 0;
}


func_2067()
{
	func_2212();
	var_88_bool = 0; var_89_string = ""; var_90_string = "";
	func_1960(var_88_bool, "quest_d6_01", "failed");
	return 0;
}


func_2077(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_1911(var_219_int, "d6q01");
	var_222_bool = var_219_int == (int)4;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_288(var_2_object, var_228_string)
{
	var_229_bool = 0;
	func_2291(var_229_bool);
	var_230_bool = var_229_bool == 0; //@nz
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_bool = var_228_string == var_2_object;
	if(var_231_bool != 0) {
		return 0;
	}
	var_232_string = ""; var_233_bool = 0;
	var_228_string = var_232_string;
	var_235_bool = var_228_string == "";
	if(var_235_bool != 0) {
		var_233_bool = 0;
	} else {
		var_233_bool = 1;
	}
	func_1858(var_232_string, var_233_bool);
	var_2_object = var_228_string;
	return 0;
	
}


func_2089(var_202_bool)
{
	var_204_int = 0; var_205_string = "";
	func_1911(var_204_int, "ood6Klara1");
	var_209_bool = var_204_int == (int)0;
	if(var_209_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_1578(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1580()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1585(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1842(var_257_string)
{
	var_258_bool = 0; var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_float = 0; var_263_float = 0;
	lshHasAnimation(var_261_bool, var_257_string);
	var_264_bool = var_261_bool;
	if(var_264_bool != 0) {
		lshGetAnimTimes(var_257_string, var_262_float, var_263_float);
		lshPlayAnimation(var_262_float, var_263_float, (bool)0);
	} else {
		var_267_int = "Can't find lsh animation : " + var_257_string;
		Trace(var_267_int);
	}
	return 6;
	
}


func_2101(var_210_bool)
{
	var_212_int = 0; var_213_string = "";
	func_1911(var_212_int, "d6q01");
	var_215_bool = var_212_int == (int)3;
	if(var_215_bool != 0) {
		var_210_bool = 1;
		return 0;
	}
	var_210_bool = 0;
	return 0;
}


func_1333(var_0_object)
{
	var_7_bool = 0;
	func_1612(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1342:
	func_1509();
	goto Label_1342;
}
EMIT "Return(); Pop(0)";


func_1593(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_2113(var_295_bool)
{
	var_297_int = 0; var_298_string = "";
	func_1911(var_297_int, "ood6Klara2");
	var_300_bool = var_297_int == (int)0;
	if(var_300_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_1858(var_232_string, var_233_bool)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0;
	lshHasAnimation(var_239_bool, var_232_string);
	var_242_bool = var_239_bool;
	if(var_242_bool != 0) {
		lshGetAnimTimes(var_232_string, var_240_float, var_241_float);
		lshPlayAnimation(var_240_float, var_241_float, var_233_bool);
	} else {
		var_244_int = "Can't find lsh animation : " + var_232_string;
		Trace(var_244_int);
	}
	return 6;
	
}


func_1603(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_1593(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_1347(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_1603(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1612(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_2125(var_313_bool)
{
	var_315_int = 0; var_316_string = "";
	func_1911(var_315_int, "microscope_d6q01_klara_blood");
	var_318_bool = var_315_int != (int)0;
	if(var_318_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_1617(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1901(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_2291(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1680;
		LookAsyncCamera("head");
	}
Label_1680:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0;
		var_200_bool = 0;
		var_201_bool = 0;
		var_201_bool = 0;
		var_202_bool = 0; var_203_object = Obj();
		var_203_object = var_1_object;
		func_2089(var_203_object);
		if(var_202_bool != 0) {
			var_210_bool = 0; var_211_object = Obj();
			var_211_object = var_1_object;
			func_2101(var_211_object);
			var_216_bool = var_210_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_201_bool = 1;
			}
		}
		if(var_201_bool != 0) {
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_2077(var_218_object);
			var_223_bool = var_217_bool == 0; //@nz
			if(var_223_bool != 0) {
				var_200_bool = 1;
			}
		}
		if(var_200_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_2035();
			var_228_string = "";
			func_288(var_194_object, "Fear");
			@@@var_0_object:SetMessage((int)512737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512738, (int)13933, (int)13932);
			@@@var_0_object:AddReply((int)512744, (int)13965, (int)13938);
			@@@var_0_object:AddReply((int)512745, (int)13954, (int)13939);
		} else {
				var_273_bool = 0;
				var_273_bool = 0;
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_2101(var_275_object);
				var_276_bool = var_274_bool == 0; //@nz
				if(var_276_bool != 0) {
					var_277_bool = 0; var_278_object = Obj();
					var_278_object = var_1_object;
					func_2077(var_278_object);
					var_279_bool = var_277_bool == 0; //@nz
					if(var_279_bool != 0) {
						var_273_bool = 1;
					}
				}
				if(var_273_bool != 0) {
					var_280_string = "";
					func_288(var_194_object, "Fear");
					@@@var_0_object:SetMessage((int)533081);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)533082, (int)-1, (int)34594);
					@@@var_0_object:AddReply((int)536138, (int)-1, (int)37897);
					goto Label_258;
				}
				var_288_bool = 0;
				var_288_bool = 1;
				var_289_bool = 0; var_290_object = Obj();
				var_290_object = var_1_object;
				func_2101(var_290_object);
				if(var_289_bool != 1) {
					var_291_bool = 0; var_292_object = Obj();
					var_292_object = var_1_object;
					func_2077(var_292_object);
					if(var_291_bool != 1) {
						var_288_bool = 0;
					}
				}
				if(var_288_bool != 0) {
					var_293_string = "";
					func_288(var_194_object, "Neutral");
					@@@var_0_object:SetMessage((int)512748);
					@@@var_0_object:ClearReplies();
					var_295_bool = 0; var_296_object = Obj();
					var_296_object = var_1_object;
					func_2113(var_296_object);
					if(var_295_bool != 0) {
						@@@var_0_object:AddReply((int)512749, (int)3753, (int)13943);
					}
					var_304_bool = 0;
					var_304_bool = 0;
					var_305_bool = 0;
					var_305_bool = 0;
					var_306_bool = 0;
					var_306_bool = 0;
					var_307_bool = 0; var_308_object = Obj();
					var_308_object = var_1_object;
					func_2161(var_308_object);
					if(var_307_bool != 0) {
						var_313_bool = 0; var_314_object = Obj();
						var_314_object = var_1_object;
						func_2125(var_314_object);
						if(var_313_bool != 0) {
							var_306_bool = 1;
						}
					}
					if(var_306_bool != 0) {
						var_319_bool = 0; var_320_object = Obj();
						var_320_object = var_1_object;
						func_2137(var_320_object);
						var_325_bool = var_319_bool == 0; //@nz
						if(var_325_bool != 0) {
							var_305_bool = 1;
						}
					}
					if(var_305_bool != 0) {
						var_326_bool = 0; var_327_object = Obj();
						var_327_object = var_1_object;
						func_2149(var_327_object);
						var_332_bool = var_326_bool == 0; //@nz
						if(var_332_bool != 0) {
							var_304_bool = 1;
						}
					}
					if(var_304_bool != 0) {
						@@@var_0_object:AddReply((int)512750, (int)11864, (int)13944);
					}
					@@@var_0_object:AddReply((int)512769, (int)-1, (int)13968);
					goto Label_258;
				}
				return 0;
		}
	}
Label_258:
	var_255_bool = 0;
	func_2291(var_255_bool);
	if(var_255_bool != 0) {

	Label_262:
		lshWaitForAnimEnd();
		var_256_string = var_3_string;
		if(var_256_string != 0) {
		} else {
			var_257_string = "";
			var_257_string = var_2_object;
			func_1842(var_257_string);
			goto Label_262;
	}
		PlayAnimation("all", "idle");

	Label_277:
		WaitForAnimEnd();
		var_270_string = var_3_string;
		if(var_270_string != 0) {
			goto Label_287;
		}
		PlayAnimation("all", "idle");
		goto Label_277;

	}
	goto Label_287;
	
Label_287:
	return 0;
	
}
EMIT "GOTO 0x55";


func_1362(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1873(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_2291(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_1367(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_1585(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2137(var_319_bool)
{
	var_321_int = 0; var_322_string = "";
	func_1911(var_321_int, "d6q01");
	var_324_bool = var_321_int == (int)1000;
	if(var_324_bool != 0) {
		var_319_bool = 1;
		return 0;
	}
	var_319_bool = 0;
	return 0;
}


func_1888()
{
	var_10_bool = 0;
	func_2291(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2149(var_326_bool)
{
	var_328_int = 0; var_329_string = "";
	func_1911(var_328_int, "d6q01");
	var_331_bool = var_328_int == (int)-1;
	if(var_331_bool != 0) {
		var_326_bool = 1;
		return 0;
	}
	var_326_bool = 0;
	return 0;
}


func_1895(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1389()
{
	var_350_float = 0; var_351_float = 0;
	rand(var_351_float, (int)8, (int)16);
	SetTimer((int)10, var_351_float);
	return 2;
}


func_1901(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_2161(var_307_bool)
{
	var_309_int = 0; var_310_string = "";
	func_1911(var_309_int, "ood6Klara3");
	var_312_bool = var_309_int == (int)0;
	if(var_312_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_1398()
{
	KillTimer((int)10);
	return 0;
}


func_1911(var_204_int, var_205_string)
{
	var_206_int = 0; var_207_int = 0;
	GetVariable(var_205_string, var_207_int);
	var_207_int = var_204_int;
	return 2;
}


func_1916(var_61_int, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateIntVector(var_64_object);
	@@var_64_object:add(var_61_int);
	@@var_64_object:add(var_62_int);
	SendWorldWndMessage((int)3, var_64_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2173()
{
	var_21_object = Obj(); var_22_object = Obj();
	CreateDiaryEntry(var_22_object, (int)163, (int)1, (int)515405);
	var_26_bool = 0; var_27_object = Obj(); var_28_int = 0;
	var_22_object = var_27_object;
	func_2238(var_26_bool, var_27_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1928(var_50_object, var_51_object, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0;
	@@var_51_object:GetItemID(var_56_int);
	GetInvItemProperty(var_57_int, var_56_int, "Category");
	@@var_50_object:AddItem(var_58_bool, var_51_object, var_57_int, var_52_int);
	var_60_bool = var_58_bool == 0; //@nz
	if(var_60_bool != 0) {
		@@var_50_object:DropItems(var_51_object, var_52_int);
	} else {
		var_61_int = 0; var_62_int = 0;
		var_56_int = var_61_int;
		var_52_int = var_62_int;
		func_1916(var_61_int, var_62_int);
	}
	return 6;
	
}


func_2186()
{
	var_133_object = Obj(); var_134_object = Obj();
	CreateDiaryEntry(var_134_object, (int)122, (int)1, (int)513745);
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0;
	var_134_object = var_139_object;
	func_2238(var_138_bool, var_139_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1686()
{
	var_341_bool = 0; var_342_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_344_bool = 0;
	func_2291(var_344_bool);
	if(var_344_bool != 0) {
	} else {
		HasAnimationTrack(var_342_bool, "head");
		var_346_bool = var_342_bool;
		if(var_346_bool == 0) goto Label_1703;
		UnlookAsync("head");
	}
Label_1703:
	return 2;
	
}


func_2199()
{
	var_116_object = Obj(); var_117_object = Obj();
	CreateDiaryEntry(var_117_object, (int)635, (int)1, (int)533083);
	var_121_bool = 0; var_122_object = Obj(); var_123_int = 0;
	var_117_object = var_122_object;
	func_2238(var_121_bool, var_122_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1947(var_45_object, var_46_string, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj();
	CreateInvItem(var_49_object);
	@@var_49_object:SetItemName(var_46_string);
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0;
	var_45_object = var_50_object;
	var_49_object = var_51_object;
	var_47_int = var_52_int;
	func_1928(var_50_object, var_51_object, var_52_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1440()
{
	func_1580();
	func_1398();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_2212()
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateDiaryEntry(var_81_object, (int)119, (int)1, (int)513742);
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0;
	var_81_object = var_86_object;
	func_2238(var_85_bool, var_86_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1704(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1762(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1799(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_1799(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1762(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1760;
	
Label_1760:
	var_98_bool = 1;
	return 4;
	
}


func_1960(var_88_bool, var_89_string, var_90_string)
{
	var_91_object = Obj(); var_92_object = Obj();
	FindActor(var_92_object, var_89_string);
	var_93_bool = var_92_object == 0; //@ne
	if(var_93_bool != 0) {
		var_88_bool = 0;
		return 2;
	}
	Trigger(var_92_object, var_90_string);
	var_88_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1455()
{
	StopGroup0();
	func_1398();
	var_8_string = "";
	func_1842("Neutral");
	func_1389();
	return 0;
}


func_2225(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj();
	GetDiaryRoot(var_37_object);
	var_38_bool = var_37_object == 0; //@nz
	if(var_38_bool != 0) {
		Trace("Can't retrieve diary root");
		var_35_object = 0;
		return 2;
	}
	var_37_object = var_35_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1972(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1981(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_2238(var_26_bool, var_27_object, var_28_int)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_int = 0;
	func_2225(Obj());
	var_35_object = var_32_object;
	@@var_32_object:Find(var_28_int, var_33_object);
	var_40_bool = var_33_object == 0; //@nz
	if(var_40_bool != 0) {
		var_42_int = "Can't find diary parent with id: " + var_28_int;
		Trace(var_42_int);
		var_26_bool = 0;
		return 6;
	}
	@@var_33_object:AddChild(var_27_object);
	SendWorldWndMessage((int)7);
	@@var_27_object:GetCategory(var_34_int);
	SetDiarySection(var_34_int);
	var_26_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1988(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1990:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1981(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1990;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_2005()
{
	func_2199();
	var_124_bool = 0; var_125_string = ""; var_126_string = "";
	func_1960(var_124_bool, "quest_d6_01", "completed");
	return 0;
}


func_2266(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x8e9";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_2015(var_19_object)
{
	func_2173();
	Trace("klara blood is given");
	var_45_object = Obj(); var_46_string = ""; var_47_int = 0;
	var_19_object = var_45_object;
	func_1947(var_45_object, "d6q01_klara_blood", (int)1);
	return 0;
}


func_1762(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1765:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1765;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_1873(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1509()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_1612(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1988((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_1523:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_1612(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1981(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_1564;
				goto Label_1575;
		}
		Label_1564:
			var_45_bool = 0;
			func_1578(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1575;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_1523;

		}
	}
Label_1575:
	ResetAAS();
	return 12;
	
}


func_2283(var_86_int)
{
	var_86_int = 515540;
	return 0;
}


func_2285(var_85_int)
{
	var_85_int = 502865;
	return 0;
}


func_2029()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2287(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
	return 0;
}


func_2289(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_2035()
{
	SetVariable("ood6Klara1", (int)1);
	return 0;
}


func_2291(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_2041()
{
	SetVariable("ood6Klara2", (int)1);
	return 0;
}


func_2047()
{
	SetVariable("d6q01KlaraVolonteer", (int)1);
	func_2186();
	var_141_bool = 0; var_142_string = ""; var_143_string = "";
	func_1960(var_141_bool, "quest_d6_01", "completed");
	return 0;
}


