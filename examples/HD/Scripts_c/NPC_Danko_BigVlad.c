// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,StopGroup0/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,GetInvItemByName/2,Trigger/2,GetGameTime/1,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Anger|W:Patronage|W:Distrust|W:Repentance|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|A:HasItem|W:ui/NPC_BigVlad.png|W:ui/NPC_BigVlad_b.png|W:d2q01BigVladVisit|W:d2q01GeorgVisit|W:ood1BigVlad1|W:quest_d3_01|W:fail|W:ood1BigVlad2|W:d5q01BigVladGotoLara|W:pt_map_lara|A:AddMark|W:quest_d5_01|W:ood2BigVlad1|W:ood2BigVlad2|W:ood2BigVlad3|W:ood2BigVlad4|W:factory|W:ood4BigVlad4|W:playsound|W:mapmark|W:d3q01HelpBurah|W:ood3BigVlad2|W:ood3BigVlad3|W:d3q01|W:d3q01BigVladAgreed|W:pt_map_ospina|W:pt_map_alexandr|A:ShowMap|W:ood3BigVlad4|W:d4q01|W:d4q01BigVladGotoLara|W:d4q01BigVladGotoSklad|W:pt_map_warehouse_gangster|W:ood4BigVlad1|W:ood4BigVlad2|W:d4q01BigVladGotoSobor|W:pt_map_sobor|W:d4q01BigVladGotoTheater|W:pt_map_theater|W:quest_d4_01|W:pers|W:key_actors|W:ood4BigVlad3|A:FindMark|A:Remove|W:d8q01MladVladgotoOspina|W:d8q01MladVladGotoMat|W:d4q01LaraGotoMladVlad|W:d4q01LaraGotoMladVladSelf|W:d4q01LaraGotoOspina|W:d8q01MatGotoBoiny|W:d4q01MladVladGotoBigVlad|W:d8q04MladVladGotoMark|W:d4q01MladVladGotoOspina|W:d4q01OspinaGotoLara|W:d4q01WastedMale|W:d4q01Whitemask|W:completed|W:d4q01_sobor_key|A:RemoveItemByType|W:d4q01_theater_key|W:theater@door1|W:sobor@door1|W:d5q01|W:d5q01BigVladGotoAlexandr|W:ood5BigVlad1|W:ood6BigVlad1|W:ood6BigVlad2|W:KnowBigVlad|W:d8q01BigVladIsVictim|W:ood8BigVlad1|W:ood8BigVlad2|W:ood8BigVlad3|W:ood6BigVlad3|W:d6q01BigVladGotoAnna|W:pt_map_anna|W:d6q01BigVladGotoOspina|W:d6q01BigVladGotoAnnaOspinaSelf|W:pt_map_bigvlad|W:failed|W:d4BigVladVisit|W:d6q02BigVlad|W:d6BigVladVisit|W:d1q01|W:quest_d1_01|W:place_morlok_run|W:d1q01FirstGeorgVisit|W:d3q02|W:KnowMat|W:d2q01|W:ood3BigVlad1|W:d6q02|W:d6q02KnowAboutAttack|W:d6q02Trigger|W:d6q01|W:d8q01MladVladIsBad|W:d8q01BringBadBoy|W:d8q01MladVladIsVictim|W:d2KnowBigVladIsBad|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1d39
// @RUN_TASK: 22
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x240 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x58b vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8c5 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe0c vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1387 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x163a vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1887 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1b46 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1c44 vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1d0f vars=int,int
// @TASK_22: vars= params=0
// @EVENT_6: op=0x1d51 vars=
// @EVENT_5: op=0x1d54 vars=
// @EVENT_0: op=0x1d57 vars=object
// @PE: 0x51,0x95,0xab,0x17a,0x22a,0x240,0x4c7,0x575,0x58b,0x840,0x8af,0x8c5,0xd57,0xdf6,0xe0c,0x1328,0x1371,0x1387,0x15a2,0x1624,0x163a,0x17e0,0x1871,0x1887,0x1af1,0x1b30,0x1b46,0x1bf4,0x1c2e,0x1c44,0x1cbf,0x1cf9,0x1d0f,0x1edc,0x1eff,0x1f16,0x1f1c,0x1f26,0x1f3c,0x1f46,0x1f4c,0x1f52,0x1f58,0x1f5e,0x1f65,0x1f6b,0x1f74,0x1f7a,0x1f80,0x1f86,0x1fa3,0x1fb3,0x1fdc,0x1fe2,0x1ff2,0x2022,0x20da,0x20e0,0x20e6,0x20ec,0x20f2,0x20f8,0x20fe,0x2104,0x210a,0x21b5,0x21ce,0x21d4,0x21e2,0x21ee,0x21fa,0x2206,0x2212,0x2237,0x2243,0x224f,0x225b,0x2267,0x2273,0x227f,0x228b,0x2295,0x22a1,0x22ad,0x22b9,0x22c5,0x22d1,0x22dd,0x22e9,0x22f5,0x2301,0x230d,0x2319,0x2337,0x2353,0x235f,0x236b,0x2377,0x2383,0x238f,0x239b,0x23a7,0x23b3,0x23bf,0x23cb,0x23d7,0x23e3,0x23ef,0x23fb,0x2407,0x2413,0x241f,0x242b,0x2437,0x2443,0x2465,0x258a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_55_string == (int)467;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_8428();
			var_65_string = "";
			func_149(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)500401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500402, (int)471, (int)468);
			@@@var_0_object:AddReply((int)500403, (int)472, (int)469);
			@@@var_0_object:AddReply((int)500404, (int)-1, (int)470);
			return 0;
		}
		var_93_bool = var_55_string == (int)472;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_149(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)500406);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500413, (int)475, (int)480);
			@@@var_0_object:AddReply((int)500414, (int)-1, (int)481);
			return 0;
		}
		var_103_bool = var_55_string == (int)471;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_149(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)500405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500407, (int)475, (int)473);
			@@@var_0_object:AddReply((int)500408, (int)475, (int)474);
			return 0;
		}
		var_113_bool = var_55_string == (int)475;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_149(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)500409);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500410, (int)-1, (int)477);
			@@@var_0_object:AddReply((int)500411, (int)-1, (int)478);
			@@@var_0_object:AddReply((int)500412, (int)-1, (int)479);
			return 0;
		}
		var_3_string = true;
		var_125_bool = 0;
		func_7933(var_125_bool);
		if(var_125_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_56_bool == (int)13245;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_8422();
		}
		var_66_bool = var_56_bool == (int)13253;
		if(var_66_bool != 0) {
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_8464();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_8052();
		}
		var_123_bool = var_56_bool == (int)13885;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_8464();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_8052();
		}
		var_129_bool = var_56_bool == (int)13673;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_8416();
		}
		var_135_bool = var_56_bool == (int)13683;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_8635();
		}
		var_155_bool = var_55_string == (int)11787;
		if(var_155_bool != 0) {
			var_156_bool = 0;
			var_156_bool = 0;
			var_157_bool = 0; var_158_object = Obj();
			var_158_object = var_1_object;
			func_9151(var_158_object);
			var_165_bool = var_157_bool == 0; //@nz
			if(var_165_bool != 0) {
				var_166_bool = 0; var_167_object = Obj();
				var_167_object = var_1_object;
				func_9235(var_167_object);
				if(var_166_bool != 0) {
					var_156_bool = 1;
				}
			}
			if(var_156_bool != 0) {
				var_172_object = Obj(); var_173_object = Obj();
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_8458();
				var_176_object = Obj(); var_177_object = Obj();
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_8654();
				var_180_string = "";
				func_554(var_56_bool, "Neutral");
				@@@var_0_object:SetMessage((int)510676);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)510688, (int)11789, (int)11801);
				return 0;
			}
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_8654();
			var_203_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512502);
			@@@var_0_object:ClearReplies();
			var_205_bool = 0;
			var_205_bool = 0;
			var_206_bool = 0; var_207_object = Obj();
			var_207_object = var_1_object;
			func_9151(var_207_object);
			if(var_206_bool != 0) {
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_object;
				func_9163(var_209_object);
				if(var_208_bool != 0) {
					var_205_bool = 1;
				}
			}
			if(var_205_bool != 0) {
				@@@var_0_object:AddReply((int)512027, (int)13248, (int)13245);
			}
			var_217_bool = 0;
			var_217_bool = 0;
			var_218_bool = 0;
			var_218_bool = 0;
			var_219_bool = 0;
			var_219_bool = 0;
			var_220_bool = 0;
			var_220_bool = 0;
			var_221_bool = 0;
			var_221_bool = 0;
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_9115(var_223_object);
			if(var_222_bool != 0) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_9127(var_229_object);
				if(var_228_bool != 0) {
					var_221_bool = 1;
				}
			}
			if(var_221_bool != 0) {
				var_234_bool = 0; var_235_object = Obj();
				var_235_object = var_1_object;
				func_9091(var_235_object);
				var_240_bool = var_234_bool == 0; //@nz
				if(var_240_bool != 0) {
					var_220_bool = 1;
				}
			}
			if(var_220_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_9103(var_242_object);
				var_247_bool = var_241_bool == 0; //@nz
				if(var_247_bool != 0) {
					var_219_bool = 1;
				}
			}
			if(var_219_bool != 0) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_9139(var_249_object);
				var_254_bool = var_248_bool == 0; //@nz
				if(var_254_bool != 0) {
					var_218_bool = 1;
				}
			}
			if(var_218_bool != 0) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_9079(var_256_object);
				var_261_bool = var_255_bool == 0; //@nz
				if(var_261_bool != 0) {
					var_217_bool = 1;
				}
			}
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)512503, (int)13674, (int)13673);
			}
			@@@var_0_object:AddReply((int)512514, (int)-1, (int)13684);
			return 0;
		}
		var_269_bool = var_55_string == (int)13674;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512505, (int)13676, (int)13675);
			return 0;
		}
		var_276_bool = var_55_string == (int)13676;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512507, (int)13678, (int)13677);
			return 0;
		}
		var_283_bool = var_55_string == (int)13678;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_554(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)512508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512509, (int)13680, (int)13679);
			return 0;
		}
		var_290_bool = var_55_string == (int)13680;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_554(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)512510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512511, (int)13682, (int)13681);
			return 0;
		}
		var_297_bool = var_55_string == (int)13682;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512513, (int)-1, (int)13683);
			return 0;
		}
		var_304_bool = var_55_string == (int)13248;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_554(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)512030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512031, (int)13250, (int)13249);
			@@@var_0_object:AddReply((int)512692, (int)3597, (int)13882);
			return 0;
		}
		var_314_bool = var_55_string == (int)3597;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503322, (int)3599, (int)3598);
			@@@var_0_object:AddReply((int)503535, (int)3817, (int)3816);
			return 0;
		}
		var_324_bool = var_55_string == (int)3817;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503537, (int)3604, (int)3818);
			@@@var_0_object:AddReply((int)503538, (int)3599, (int)3819);
			return 0;
		}
		var_334_bool = var_55_string == (int)3599;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_554(var_56_bool, "Patronage");
			@@@var_0_object:SetMessage((int)503323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503324, (int)3604, (int)3600);
			@@@var_0_object:AddReply((int)503325, (int)3604, (int)3601);
			return 0;
		}
		var_344_bool = var_55_string == (int)3604;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503330, (int)3815, (int)3607);
			return 0;
		}
		var_351_bool = var_55_string == (int)13250;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512033, (int)13252, (int)13251);
			@@@var_0_object:AddReply((int)503539, (int)3823, (int)3822);
			return 0;
		}
		var_361_bool = var_55_string == (int)3823;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_554(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)503540);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503541, (int)13252, (int)3824);
			@@@var_0_object:AddReply((int)503533, (int)3815, (int)3814);
			return 0;
		}
		var_371_bool = var_55_string == (int)3815;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)503534);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512694, (int)-1, (int)13885);
			return 0;
		}
		var_378_bool = var_55_string == (int)13252;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_554(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)512034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512035, (int)-1, (int)13253);
			return 0;
		}
		var_385_bool = var_55_string == (int)11789;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_554(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)510678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510679, (int)11791, (int)11790);
			@@@var_0_object:AddReply((int)510687, (int)-1, (int)11800);
			return 0;
		}
		var_395_bool = var_55_string == (int)11791;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_554(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510681, (int)11793, (int)11792);
			@@@var_0_object:AddReply((int)510685, (int)11793, (int)11796);
			@@@var_0_object:AddReply((int)510686, (int)11793, (int)11798);
			return 0;
		}
		var_408_bool = var_55_string == (int)11793;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_554(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)510682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510683, (int)-1, (int)11794);
			@@@var_0_object:AddReply((int)510684, (int)-1, (int)11795);
			return 0;
		}
		var_3_string = true;
		var_417_bool = 0;
		func_7933(var_417_bool);
		if(var_417_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x241";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_56_bool == (int)7460;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_8043();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_7935();
		}
		var_110_bool = var_56_bool == (int)7461;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_8043();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_7935();
		}
		var_116_bool = var_56_bool == (int)7465;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_8043();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_7935();
		}
		var_122_bool = var_56_bool == (int)7466;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_8043();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_7935();
		}
		var_128_bool = var_56_bool == (int)7807;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_8018();
		}
		var_134_bool = var_56_bool == (int)7487;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_8024();
		}
		var_140_bool = var_55_string == (int)7489;
		if(var_140_bool != 0) {
			var_141_bool = 0;
			var_141_bool = 0;
			var_142_bool = 0; var_143_object = Obj();
			var_143_object = var_1_object;
			func_8795(var_143_object);
			if(var_142_bool != 0) {
				var_148_bool = 0; var_149_object = Obj();
				var_149_object = var_1_object;
				func_8853(var_149_object);
				if(var_148_bool != 0) {
					var_141_bool = 1;
				}
			}
			if(var_141_bool != 0) {
				var_154_object = Obj(); var_155_object = Obj();
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_8006();
				var_158_string = "";
				func_1397(var_56_bool, "Neutral");
				@@@var_0_object:SetMessage((int)506797);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506810, (int)7493, (int)7505);
				@@@var_0_object:AddReply((int)506798, (int)7491, (int)7490);
				@@@var_0_object:AddReply((int)506809, (int)7491, (int)7503);
				return 0;
			}
			var_185_bool = 0;
			var_185_bool = 0;
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_8807(var_187_object);
			if(var_186_bool != 0) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_8865(var_193_object);
				if(var_192_bool != 0) {
					var_185_bool = 1;
				}
			}
			if(var_185_bool != 0) {
				var_198_object = Obj(); var_199_object = Obj();
				var_198_object = var_1_object;
				var_199_object = var_0_object;
				func_8012();
				var_202_string = "";
				func_1397(var_56_bool, "Neutral");
				@@@var_0_object:SetMessage((int)506765);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506777, (int)7457, (int)7467);
				@@@var_0_object:AddReply((int)506766, (int)7459, (int)7456);
				return 0;
			}
			var_210_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506794);
			@@@var_0_object:ClearReplies();
			var_212_bool = 0;
			var_212_bool = 0;
			var_213_bool = 0; var_214_object = Obj();
			var_214_object = var_1_object;
			func_8819(var_214_object);
			if(var_213_bool != 0) {
				var_219_bool = 0; var_220_object = Obj();
				var_220_object = var_1_object;
				func_8853(var_220_object);
				if(var_219_bool != 0) {
					var_212_bool = 1;
				}
			}
			if(var_212_bool != 0) {
				@@@var_0_object:AddReply((int)507084, (int)7809, (int)7807);
			}
			var_224_bool = 0;
			var_224_bool = 0;
			var_225_bool = 0; var_226_object = Obj();
			var_226_object = var_1_object;
			func_8831(var_226_object);
			if(var_225_bool != 0) {
				var_231_bool = 0; var_232_object = Obj();
				var_232_object = var_1_object;
				func_9271(var_232_object);
				if(var_231_bool != 0) {
					var_224_bool = 1;
				}
			}
			if(var_224_bool != 0) {
				@@@var_0_object:AddReply((int)506795, (int)7469, (int)7487);
			}
			@@@var_0_object:AddReply((int)507535, (int)-1, (int)8317);
			return 0;
		}
		var_244_bool = var_55_string == (int)7469;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506779, (int)7471, (int)7470);
			@@@var_0_object:AddReply((int)506793, (int)7476, (int)7485);
			return 0;
		}
		var_254_bool = var_55_string == (int)7471;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_1397(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)506780);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506781, (int)7473, (int)7472);
			@@@var_0_object:AddReply((int)506788, (int)-1, (int)7479);
			return 0;
		}
		var_264_bool = var_55_string == (int)7473;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506782);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506784, (int)7476, (int)7475);
			@@@var_0_object:AddReply((int)506783, (int)-1, (int)7474);
			return 0;
		}
		var_274_bool = var_55_string == (int)7476;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506786, (int)-1, (int)7477);
			@@@var_0_object:AddReply((int)506787, (int)-1, (int)7478);
			return 0;
		}
		var_284_bool = var_55_string == (int)7809;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507085);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507086, (int)7811, (int)7810);
			@@@var_0_object:AddReply((int)507096, (int)7813, (int)7822);
			return 0;
		}
		var_294_bool = var_55_string == (int)7811;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_1397(var_56_bool, "Patronage");
			@@@var_0_object:SetMessage((int)507087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507088, (int)7813, (int)7812);
			@@@var_0_object:AddReply((int)507092, (int)7813, (int)7816);
			@@@var_0_object:AddReply((int)507093, (int)7819, (int)7818);
			return 0;
		}
		var_307_bool = var_55_string == (int)7819;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507095, (int)7813, (int)7820);
			return 0;
		}
		var_314_bool = var_55_string == (int)7813;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507090, (int)-1, (int)7814);
			@@@var_0_object:AddReply((int)507091, (int)-1, (int)7815);
			return 0;
		}
		var_324_bool = var_55_string == (int)7457;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506768, (int)7459, (int)7458);
			@@@var_0_object:AddReply((int)506773, (int)7464, (int)7463);
			return 0;
		}
		var_334_bool = var_55_string == (int)7464;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506774);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506775, (int)-1, (int)7465);
			@@@var_0_object:AddReply((int)506776, (int)-1, (int)7466);
			return 0;
		}
		var_344_bool = var_55_string == (int)7459;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_1397(var_56_bool, "Patronage");
			@@@var_0_object:SetMessage((int)506769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506770, (int)-1, (int)7460);
			@@@var_0_object:AddReply((int)506771, (int)-1, (int)7461);
			return 0;
		}
		var_354_bool = var_55_string == (int)7491;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_1397(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)506799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506800, (int)7493, (int)7492);
			@@@var_0_object:AddReply((int)506807, (int)7493, (int)7500);
			return 0;
		}
		var_364_bool = var_55_string == (int)7493;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506801);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506802, (int)7495, (int)7494);
			@@@var_0_object:AddReply((int)506806, (int)7495, (int)7498);
			return 0;
		}
		var_374_bool = var_55_string == (int)7495;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507097, (int)7825, (int)7824);
			@@@var_0_object:AddReply((int)506804, (int)-1, (int)7496);
			@@@var_0_object:AddReply((int)506805, (int)-1, (int)7497);
			return 0;
		}
		var_387_bool = var_55_string == (int)7825;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507099, (int)7827, (int)7826);
			return 0;
		}
		var_394_bool = var_55_string == (int)7827;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_1397(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)507100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507101, (int)-1, (int)7828);
			@@@var_0_object:AddReply((int)507102, (int)7830, (int)7829);
			return 0;
		}
		var_404_bool = var_55_string == (int)7830;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_1397(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507103);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507104, (int)-1, (int)7831);
			return 0;
		}
		var_3_string = true;
		var_410_bool = 0;
		func_7933(var_410_bool);
		if(var_410_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x58c";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_56_bool == (int)35888;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_8076();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_8058();
		}
		var_109_bool = var_56_bool == (int)35889;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_8076();
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_8058();
		}
		var_115_bool = var_56_bool == (int)35886;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_7964();
		}
		var_133_bool = var_56_bool == (int)11447;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_8115();
		}
		var_139_bool = var_56_bool == (int)11448;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_8115();
		}
		var_143_bool = var_56_bool == (int)9844;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_8064();
		}
		var_149_bool = var_56_bool == (int)9845;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_8070();
		}
		var_155_bool = var_55_string == (int)9791;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508926);
			@@@var_0_object:ClearReplies();
			var_174_bool = 0;
			var_174_bool = 0;
			var_175_bool = 0; var_176_object = Obj();
			var_176_object = var_1_object;
			func_8877(var_176_object);
			if(var_175_bool != 0) {
				var_183_bool = 0; var_184_object = Obj();
				var_184_object = var_1_object;
				func_8889(var_184_object);
				if(var_183_bool != 0) {
					var_174_bool = 1;
				}
			}
			if(var_174_bool != 0) {
				@@@var_0_object:AddReply((int)508977, (int)9847, (int)9846);
			}
			var_192_bool = 0;
			var_192_bool = 0;
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_8722(var_194_object);
			if(var_193_bool != 0) {
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_8925(var_213_object);
				if(var_212_bool != 0) {
					var_192_bool = 1;
				}
			}
			if(var_192_bool != 0) {
				@@@var_0_object:AddReply((int)510375, (int)11442, (int)11440);
			}
			var_221_bool = 0; var_222_object = Obj();
			var_222_object = var_1_object;
			func_8901(var_222_object);
			if(var_221_bool != 0) {
				@@@var_0_object:AddReply((int)508975, (int)9792, (int)9844);
			}
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_8913(var_231_object);
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)508976, (int)9815, (int)9845);
			}
			@@@var_0_object:AddReply((int)511139, (int)-1, (int)12328);
			return 0;
		}
		var_243_bool = var_55_string == (int)9815;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508949);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508950, (int)9817, (int)9816);
			@@@var_0_object:AddReply((int)508963, (int)9832, (int)9829);
			@@@var_0_object:AddReply((int)508964, (int)9832, (int)9831);
			@@@var_0_object:AddReply((int)508972, (int)9841, (int)9840);
			return 0;
		}
		var_259_bool = var_55_string == (int)9841;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508974, (int)9817, (int)9842);
			return 0;
		}
		var_266_bool = var_55_string == (int)9832;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508966, (int)9834, (int)9833);
			@@@var_0_object:AddReply((int)508971, (int)9834, (int)9838);
			return 0;
		}
		var_276_bool = var_55_string == (int)9834;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_2223(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)508967);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508968, (int)9836, (int)9835);
			@@@var_0_object:AddReply((int)508970, (int)-1, (int)9837);
			return 0;
		}
		var_286_bool = var_55_string == (int)9836;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_2223(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)508969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535697, (int)-1, (int)37369);
			return 0;
		}
		var_293_bool = var_55_string == (int)9817;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508952, (int)-1, (int)9818);
			@@@var_0_object:AddReply((int)508953, (int)-1, (int)9819);
			@@@var_0_object:AddReply((int)508954, (int)9821, (int)9820);
			return 0;
		}
		var_306_bool = var_55_string == (int)9821;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_2223(var_56_bool, "Patronage");
			@@@var_0_object:SetMessage((int)508955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508956, (int)-1, (int)9822);
			@@@var_0_object:AddReply((int)508957, (int)9824, (int)9823);
			return 0;
		}
		var_316_bool = var_55_string == (int)9824;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508959, (int)9826, (int)9825);
			@@@var_0_object:AddReply((int)508962, (int)-1, (int)9828);
			return 0;
		}
		var_326_bool = var_55_string == (int)9826;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_2223(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)508960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508961, (int)-1, (int)9827);
			return 0;
		}
		var_333_bool = var_55_string == (int)9792;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508928, (int)9794, (int)9793);
			@@@var_0_object:AddReply((int)508941, (int)9808, (int)9807);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=89";
		EMIT "Call2 0x8af";
		EMIT "Pop(1)";
		EMIT "Push((int) 510085)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
		EMIT "Pop(0)";
		EMIT "Push((int) 510086)";
		EMIT "Push((int) 11117)";
		EMIT "Push((int) 11116)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
		EMIT "Pop(3)";
		EMIT "Push((int) 510106)";
		EMIT "Push((int) 11117)";
		EMIT "Push((int) 11139)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
		EMIT "Pop(3)";
		EMIT "Push((int) 510107)";
		EMIT "Push((int) 11142)";
		EMIT "Push((int) 11141)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_343_bool = var_55_string == (int)11142;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_2223(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)510108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510109, (int)11117, (int)11143);
			@@@var_0_object:AddReply((int)510110, (int)11117, (int)11145);
			return 0;
		}
		var_353_bool = var_55_string == (int)11117;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_2223(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)510087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510088, (int)11119, (int)11118);
			@@@var_0_object:AddReply((int)510105, (int)11121, (int)11137);
			return 0;
		}
		var_363_bool = var_55_string == (int)11119;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510090, (int)11121, (int)11120);
			@@@var_0_object:AddReply((int)510101, (int)11132, (int)11131);
			return 0;
		}
		var_373_bool = var_55_string == (int)11132;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_2223(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)510102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510103, (int)11121, (int)11133);
			@@@var_0_object:AddReply((int)510104, (int)11121, (int)11135);
			return 0;
		}
		var_383_bool = var_55_string == (int)11121;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510092, (int)11123, (int)11122);
			@@@var_0_object:AddReply((int)510097, (int)11128, (int)11127);
			return 0;
		}
		var_393_bool = var_55_string == (int)11128;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510099, (int)-1, (int)11129);
			@@@var_0_object:AddReply((int)510100, (int)-1, (int)11130);
			return 0;
		}
		var_403_bool = var_55_string == (int)11123;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_2223(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)510093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510094, (int)-1, (int)11124);
			@@@var_0_object:AddReply((int)510095, (int)-1, (int)11125);
			@@@var_0_object:AddReply((int)510096, (int)-1, (int)11126);
			return 0;
		}
		var_416_bool = var_55_string == (int)9808;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_2223(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)508942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508943, (int)9810, (int)9809);
			return 0;
		}
		var_423_bool = var_55_string == (int)9810;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508944);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508945, (int)-1, (int)9811);
			@@@var_0_object:AddReply((int)508946, (int)9813, (int)9812);
			return 0;
		}
		var_433_bool = var_55_string == (int)9813;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508948, (int)-1, (int)9814);
			return 0;
		}
		var_440_bool = var_55_string == (int)9794;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_2223(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)508929);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508930, (int)9796, (int)9795);
			@@@var_0_object:AddReply((int)508938, (int)9804, (int)9803);
			return 0;
		}
		var_450_bool = var_55_string == (int)9804;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508940, (int)9796, (int)9805);
			return 0;
		}
		var_457_bool = var_55_string == (int)9796;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508932, (int)-1, (int)9797);
			@@@var_0_object:AddReply((int)508933, (int)-1, (int)9798);
			@@@var_0_object:AddReply((int)508934, (int)9800, (int)9799);
			return 0;
		}
		var_470_bool = var_55_string == (int)9800;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508936, (int)-1, (int)9801);
			@@@var_0_object:AddReply((int)508937, (int)-1, (int)9802);
			return 0;
		}
		var_480_bool = var_55_string == (int)11442;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510378, (int)11446, (int)11443);
			@@@var_0_object:AddReply((int)510379, (int)11445, (int)11444);
			return 0;
		}
		var_490_bool = var_55_string == (int)11445;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510383, (int)-1, (int)11448);
			return 0;
		}
		var_497_bool = var_55_string == (int)11446;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510382, (int)-1, (int)11447);
			return 0;
		}
		var_504_bool = var_55_string == (int)9847;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508979, (int)9852, (int)9848);
			@@@var_0_object:AddReply((int)508980, (int)9850, (int)9849);
			return 0;
		}
		var_514_bool = var_55_string == (int)9850;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_2223(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)508981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508982, (int)9852, (int)9851);
			@@@var_0_object:AddReply((int)534335, (int)9852, (int)35934);
			return 0;
		}
		var_524_bool = var_55_string == (int)9852;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508984, (int)9854, (int)9853);
			@@@var_0_object:AddReply((int)508987, (int)9857, (int)9856);
			return 0;
		}
		var_534_bool = var_55_string == (int)9857;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508989, (int)9860, (int)9858);
			return 0;
		}
		var_541_bool = var_55_string == (int)9860;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_2223(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)508991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508992, (int)9863, (int)9861);
			@@@var_0_object:AddReply((int)508993, (int)9865, (int)9862);
			return 0;
		}
		var_551_bool = var_55_string == (int)9865;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508997, (int)9859, (int)9866);
			return 0;
		}
		var_558_bool = var_55_string == (int)9863;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508995, (int)9859, (int)9864);
			return 0;
		}
		var_565_bool = var_55_string == (int)9854;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508986, (int)9859, (int)9855);
			return 0;
		}
		var_572_bool = var_55_string == (int)9859;
		if(var_572_bool != 0) {
			var_573_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)508990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508998, (int)9870, (int)9869);
			return 0;
		}
		var_579_bool = var_55_string == (int)9870;
		if(var_579_bool != 0) {
			var_580_string = "";
			func_2223(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)508999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509000, (int)9873, (int)9871);
			@@@var_0_object:AddReply((int)509011, (int)9883, (int)9882);
			return 0;
		}
		var_589_bool = var_55_string == (int)9883;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509013, (int)9873, (int)9884);
			return 0;
		}
		var_596_bool = var_55_string == (int)9873;
		if(var_596_bool != 0) {
			var_597_string = "";
			func_2223(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)509002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509003, (int)35882, (int)9874);
			@@@var_0_object:AddReply((int)509004, (int)35882, (int)9875);
			@@@var_0_object:AddReply((int)534288, (int)35882, (int)35880);
			return 0;
		}
		var_609_bool = var_55_string == (int)35882;
		if(var_609_bool != 0) {
			var_610_string = "";
			func_2223(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534291, (int)35887, (int)35885);
			@@@var_0_object:AddReply((int)534292, (int)-1, (int)35886);
			return 0;
		}
		var_619_bool = var_55_string == (int)35887;
		if(var_619_bool != 0) {
			var_620_string = "";
			func_2223(var_56_bool, "Patronage");
			@@@var_0_object:SetMessage((int)534293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534294, (int)-1, (int)35888);
			@@@var_0_object:AddReply((int)534295, (int)-1, (int)35889);
			return 0;
		}
		var_3_string = true;
		var_628_bool = 0;
		func_7933(var_628_bool);
		if(var_628_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8c6";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_56_bool == (int)12081;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_8121();
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_8156();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_8162(var_122_object);
		}
		var_148_bool = var_56_bool == (int)12082;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_8121();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_8156();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_8162(var_154_object);
		}
		var_156_bool = var_56_bool == (int)12079;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_8121();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_8156();
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_8162(var_162_object);
		}
		var_164_bool = var_56_bool == (int)11191;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_8121();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_8156();
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_8162(var_170_object);
		}
		var_172_bool = var_56_bool == (int)12096;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_8178();
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_8184();
		}
		var_212_bool = var_56_bool == (int)12097;
		if(var_212_bool != 0) {
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_8178();
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_8501();
		}
		var_266_bool = var_56_bool == (int)12719;
		if(var_266_bool != 0) {
			var_267_object = Obj(); var_268_object = Obj();
			var_267_object = var_1_object;
			var_268_object = var_0_object;
			func_8037();
		}
		var_272_bool = var_56_bool == (int)12105;
		if(var_272_bool != 0) {
			var_273_object = Obj(); var_274_object = Obj();
			var_273_object = var_1_object;
			var_274_object = var_0_object;
			func_8226();
			var_277_object = Obj(); var_278_object = Obj();
			var_277_object = var_1_object;
			var_278_object = var_0_object;
			func_8232(var_278_object);
		}
		var_346_bool = var_56_bool == (int)34559;
		if(var_346_bool != 0) {
			var_347_object = Obj(); var_348_object = Obj();
			var_347_object = var_1_object;
			var_348_object = var_0_object;
			func_8232(var_348_object);
		}
		var_350_bool = var_56_bool == (int)10563;
		if(var_350_bool != 0) {
			var_351_object = Obj(); var_352_object = Obj();
			var_351_object = var_1_object;
			var_352_object = var_0_object;
			func_8226();
			var_353_object = Obj(); var_354_object = Obj();
			var_353_object = var_1_object;
			var_354_object = var_0_object;
			func_8232(var_354_object);
		}
		var_356_bool = var_56_bool == (int)12103;
		if(var_356_bool != 0) {
			var_357_object = Obj(); var_358_object = Obj();
			var_357_object = var_1_object;
			var_358_object = var_0_object;
			func_8226();
			var_359_object = Obj(); var_360_object = Obj();
			var_359_object = var_1_object;
			var_360_object = var_0_object;
			func_8232(var_360_object);
		}
		var_362_bool = var_56_bool == (int)10572;
		if(var_362_bool != 0) {
			var_363_object = Obj(); var_364_object = Obj();
			var_363_object = var_1_object;
			var_364_object = var_0_object;
			func_8226();
			var_365_object = Obj(); var_366_object = Obj();
			var_365_object = var_1_object;
			var_366_object = var_0_object;
			func_8232(var_366_object);
		}
		var_368_bool = var_56_bool == (int)10573;
		if(var_368_bool != 0) {
			var_369_object = Obj(); var_370_object = Obj();
			var_369_object = var_1_object;
			var_370_object = var_0_object;
			func_8226();
			var_371_object = Obj(); var_372_object = Obj();
			var_371_object = var_1_object;
			var_372_object = var_0_object;
			func_8232(var_372_object);
		}
		var_374_bool = var_55_string == (int)11951;
		if(var_374_bool != 0) {
			var_375_bool = 0;
			var_375_bool = 0;
			var_376_bool = 0; var_377_object = Obj();
			var_377_object = var_1_object;
			func_8937(var_377_object);
			if(var_376_bool != 0) {
				var_384_bool = 0; var_385_object = Obj();
				var_385_object = var_1_object;
				func_8949(var_385_object);
				if(var_384_bool != 0) {
					var_375_bool = 1;
				}
			}
			if(var_375_bool != 0) {
				var_390_object = Obj(); var_391_object = Obj();
				var_390_object = var_1_object;
				var_391_object = var_0_object;
				func_8629();
				var_394_string = "";
				func_3574(var_56_bool, "Neutral");
				@@@var_0_object:SetMessage((int)510811);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)510812, (int)11147, (int)11952);
				return 0;
			}
			var_415_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510836);
			@@@var_0_object:ClearReplies();
			var_417_bool = 0;
			var_417_bool = 0;
			var_418_bool = 0; var_419_object = Obj();
			var_419_object = var_1_object;
			func_8961(var_419_object);
			if(var_418_bool != 0) {
				var_424_bool = 0; var_425_object = Obj();
				var_425_object = var_1_object;
				func_8973(var_425_object);
				if(var_424_bool != 0) {
					var_417_bool = 1;
				}
			}
			if(var_417_bool != 0) {
				@@@var_0_object:AddReply((int)510839, (int)11148, (int)11983);
			}
			var_433_bool = 0; var_434_object = Obj();
			var_434_object = var_1_object;
			func_8843(var_433_bool, var_434_object);
			if(var_433_bool != 0) {
				@@@var_0_object:AddReply((int)510838, (int)10519, (int)11982);
			}
			var_440_bool = 0;
			var_440_bool = 0;
			var_441_bool = 0; var_442_object = Obj();
			var_442_object = var_1_object;
			func_8985(var_441_bool, var_442_object);
			if(var_441_bool != 0) {
				var_460_bool = 0; var_461_object = Obj();
				var_461_object = var_1_object;
				func_8783(var_461_object);
				if(var_460_bool != 0) {
					var_440_bool = 1;
				}
			}
			if(var_440_bool != 0) {
				@@@var_0_object:AddReply((int)511508, (int)12709, (int)12708);
			}
			var_469_bool = 0;
			var_469_bool = 0;
			var_470_bool = 0; var_471_object = Obj();
			var_471_object = var_1_object;
			func_9015(var_470_bool, var_471_object);
			if(var_470_bool != 0) {
				var_483_bool = 0; var_484_object = Obj();
				var_484_object = var_1_object;
				func_9043(var_484_object);
				if(var_483_bool != 0) {
					var_469_bool = 1;
				}
			}
			if(var_469_bool != 0) {
				@@@var_0_object:AddReply((int)510837, (int)10553, (int)11981);
			}
			@@@var_0_object:AddReply((int)511480, (int)-1, (int)12686);
			@@@var_0_object:AddReply((int)533048, (int)-1, (int)34560);
			return 0;
		}
		var_499_bool = var_55_string == (int)10553;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509594);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509595, (int)10555, (int)10554);
			@@@var_0_object:AddReply((int)509612, (int)10555, (int)10574);
			@@@var_0_object:AddReply((int)509613, (int)10555, (int)10576);
			return 0;
		}
		var_512_bool = var_55_string == (int)10555;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509597, (int)10557, (int)10556);
			@@@var_0_object:AddReply((int)509608, (int)10571, (int)10570);
			return 0;
		}
		var_522_bool = var_55_string == (int)10571;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509609);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509610, (int)-1, (int)10572);
			@@@var_0_object:AddReply((int)509611, (int)-1, (int)10573);
			return 0;
		}
		var_532_bool = var_55_string == (int)10557;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_3574(var_56_bool, "Patronage");
			@@@var_0_object:SetMessage((int)509598);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509599, (int)10559, (int)10558);
			@@@var_0_object:AddReply((int)509607, (int)10559, (int)10568);
			return 0;
		}
		var_542_bool = var_55_string == (int)10559;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_3574(var_56_bool, "Patronage");
			@@@var_0_object:SetMessage((int)509600);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509601, (int)10561, (int)10560);
			@@@var_0_object:AddReply((int)509605, (int)10561, (int)10564);
			@@@var_0_object:AddReply((int)509606, (int)10561, (int)10566);
			return 0;
		}
		var_555_bool = var_55_string == (int)10561;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_3574(var_56_bool, "Patronage");
			@@@var_0_object:SetMessage((int)509602);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509603, (int)12104, (int)10562);
			@@@var_0_object:AddReply((int)509604, (int)-1, (int)10563);
			@@@var_0_object:AddReply((int)510944, (int)-1, (int)12103);
			return 0;
		}
		var_568_bool = var_55_string == (int)12104;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510946, (int)-1, (int)12105);
			@@@var_0_object:AddReply((int)533047, (int)-1, (int)34559);
			return 0;
		}
		var_578_bool = var_55_string == (int)12709;
		if(var_578_bool != 0) {
			var_579_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511510, (int)12711, (int)12710);
			@@@var_0_object:AddReply((int)511512, (int)12713, (int)12712);
			return 0;
		}
		var_588_bool = var_55_string == (int)12713;
		if(var_588_bool != 0) {
			var_589_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511513);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511514, (int)12715, (int)12714);
			return 0;
		}
		var_595_bool = var_55_string == (int)12715;
		if(var_595_bool != 0) {
			var_596_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511515);
			@@@var_0_object:ClearReplies();
			var_598_bool = 0; var_599_object = Obj();
			var_599_object = var_1_object;
			func_8783(var_599_object);
			if(var_598_bool != 0) {
				@@@var_0_object:AddReply((int)511516, (int)-1, (int)12716);
			}
			return 0;
		}
		var_604_bool = var_55_string == (int)12711;
		if(var_604_bool != 0) {
			var_605_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511511);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511517, (int)12718, (int)12717);
			return 0;
		}
		var_611_bool = var_55_string == (int)12718;
		if(var_611_bool != 0) {
			var_612_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511519, (int)-1, (int)12719);
			return 0;
		}
		var_618_bool = var_55_string == (int)10519;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509568, (int)10521, (int)10520);
			@@@var_0_object:AddReply((int)509589, (int)10521, (int)10545);
			@@@var_0_object:AddReply((int)509590, (int)10548, (int)10547);
			return 0;
		}
		var_631_bool = var_55_string == (int)10548;
		if(var_631_bool != 0) {
			var_632_string = "";
			func_3574(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)509591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509592, (int)10521, (int)10549);
			@@@var_0_object:AddReply((int)509593, (int)10521, (int)10551);
			return 0;
		}
		var_641_bool = var_55_string == (int)10521;
		if(var_641_bool != 0) {
			var_642_string = "";
			func_3574(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)509569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509572, (int)10525, (int)10524);
			@@@var_0_object:AddReply((int)509570, (int)-1, (int)10522);
			@@@var_0_object:AddReply((int)509571, (int)-1, (int)10523);
			return 0;
		}
		var_654_bool = var_55_string == (int)10525;
		if(var_654_bool != 0) {
			var_655_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509573);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509574, (int)10527, (int)10526);
			@@@var_0_object:AddReply((int)509585, (int)10540, (int)10539);
			return 0;
		}
		var_664_bool = var_55_string == (int)10540;
		if(var_664_bool != 0) {
			var_665_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509587, (int)10527, (int)10541);
			@@@var_0_object:AddReply((int)509588, (int)10527, (int)10543);
			return 0;
		}
		var_674_bool = var_55_string == (int)10527;
		if(var_674_bool != 0) {
			var_675_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509577, (int)10530, (int)10529);
			return 0;
		}
		var_681_bool = var_55_string == (int)10530;
		if(var_681_bool != 0) {
			var_682_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509579, (int)10532, (int)10531);
			@@@var_0_object:AddReply((int)509583, (int)10532, (int)10535);
			@@@var_0_object:AddReply((int)509584, (int)10532, (int)10537);
			return 0;
		}
		var_694_bool = var_55_string == (int)10532;
		if(var_694_bool != 0) {
			var_695_string = "";
			func_3574(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)509580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509581, (int)-1, (int)10533);
			@@@var_0_object:AddReply((int)509582, (int)-1, (int)10534);
			return 0;
		}
		var_704_bool = var_55_string == (int)11148;
		if(var_704_bool != 0) {
			var_705_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510115, (int)11154, (int)11151);
			return 0;
		}
		var_711_bool = var_55_string == (int)11154;
		if(var_711_bool != 0) {
			var_712_string = "";
			func_3574(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)510118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510119, (int)11156, (int)11155);
			@@@var_0_object:AddReply((int)510933, (int)12088, (int)12087);
			@@@var_0_object:AddReply((int)510124, (int)11161, (int)11160);
			return 0;
		}
		var_724_bool = var_55_string == (int)11161;
		if(var_724_bool != 0) {
			var_725_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510126, (int)11984, (int)11162);
			@@@var_0_object:AddReply((int)510127, (int)11984, (int)11163);
			return 0;
		}
		var_734_bool = var_55_string == (int)12088;
		if(var_734_bool != 0) {
			var_735_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510935, (int)12090, (int)12089);
			return 0;
		}
		var_741_bool = var_55_string == (int)12090;
		if(var_741_bool != 0) {
			var_742_string = "";
			func_3574(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)510936);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510939, (int)11156, (int)12093);
			@@@var_0_object:AddReply((int)510937, (int)12092, (int)12091);
			return 0;
		}
		var_751_bool = var_55_string == (int)12092;
		if(var_751_bool != 0) {
			var_752_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510943, (int)11156, (int)12101);
			return 0;
		}
		var_758_bool = var_55_string == (int)11156;
		if(var_758_bool != 0) {
			var_759_string = "";
			func_3574(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)510120);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510121, (int)11984, (int)11157);
			@@@var_0_object:AddReply((int)510123, (int)12094, (int)11159);
			return 0;
		}
		var_768_bool = var_55_string == (int)12094;
		if(var_768_bool != 0) {
			var_769_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510940);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510122, (int)11984, (int)11158);
			return 0;
		}
		var_775_bool = var_55_string == (int)11984;
		if(var_775_bool != 0) {
			var_776_string = "";
			func_3574(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)510840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510941, (int)-1, (int)12096);
			@@@var_0_object:AddReply((int)510942, (int)-1, (int)12097);
			return 0;
		}
		var_785_bool = var_55_string == (int)11147;
		if(var_785_bool != 0) {
			var_786_string = "";
			func_3574(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)510111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510138, (int)11181, (int)11180);
			@@@var_0_object:AddReply((int)510140, (int)11183, (int)11182);
			return 0;
		}
		var_795_bool = var_55_string == (int)11183;
		if(var_795_bool != 0) {
			var_796_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510141);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510142, (int)11186, (int)11184);
			@@@var_0_object:AddReply((int)510143, (int)12070, (int)11185);
			return 0;
		}
		var_805_bool = var_55_string == (int)12070;
		if(var_805_bool != 0) {
			var_806_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510922, (int)11181, (int)12071);
			@@@var_0_object:AddReply((int)510923, (int)12073, (int)12072);
			return 0;
		}
		var_815_bool = var_55_string == (int)12073;
		if(var_815_bool != 0) {
			var_816_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510925, (int)11181, (int)12074);
			return 0;
		}
		var_822_bool = var_55_string == (int)11186;
		if(var_822_bool != 0) {
			var_823_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510144);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510919, (int)11175, (int)12068);
			@@@var_0_object:AddReply((int)510920, (int)11181, (int)12069);
			return 0;
		}
		var_832_bool = var_55_string == (int)11181;
		if(var_832_bool != 0) {
			var_833_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510145, (int)11188, (int)11187);
			@@@var_0_object:AddReply((int)510134, (int)11175, (int)11174);
			return 0;
		}
		var_842_bool = var_55_string == (int)11175;
		if(var_842_bool != 0) {
			var_843_string = "";
			func_3574(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)510135);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510136, (int)12083, (int)11176);
			@@@var_0_object:AddReply((int)510137, (int)12083, (int)11178);
			return 0;
		}
		var_852_bool = var_55_string == (int)12083;
		if(var_852_bool != 0) {
			var_853_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510932, (int)11188, (int)12085);
			return 0;
		}
		var_859_bool = var_55_string == (int)11188;
		if(var_859_bool != 0) {
			var_860_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510146);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510147, (int)11190, (int)11189);
			@@@var_0_object:AddReply((int)510149, (int)-1, (int)11191);
			return 0;
		}
		var_869_bool = var_55_string == (int)11190;
		if(var_869_bool != 0) {
			var_870_string = "";
			func_3574(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)510148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510926, (int)12080, (int)12078);
			@@@var_0_object:AddReply((int)510927, (int)-1, (int)12079);
			return 0;
		}
		var_879_bool = var_55_string == (int)12080;
		if(var_879_bool != 0) {
			var_880_string = "";
			func_3574(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)510928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510929, (int)-1, (int)12081);
			@@@var_0_object:AddReply((int)510930, (int)-1, (int)12082);
			return 0;
		}
		var_3_string = true;
		var_888_bool = 0;
		func_7933(var_888_bool);
		if(var_888_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe0d";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_56_bool == (int)12763;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_8378();
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_8030();
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_8099(var_118_object);
		}
		var_144_bool = var_56_bool == (int)16728;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_8378();
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_8030();
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_8099(var_150_object);
		}
		var_152_bool = var_56_bool == (int)16725;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_7980();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_8030();
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_8162(var_166_object);
		}
		var_173_bool = var_56_bool == (int)16724;
		if(var_173_bool != 0) {
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_7996();
		}
		var_188_bool = var_56_bool == (int)12778;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_8410();
		}
		var_194_bool = var_56_bool == (int)16736;
		if(var_194_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_8410();
		}
		var_198_bool = var_56_bool == (int)16735;
		if(var_198_bool != 0) {
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_object;
			func_8410();
		}
		var_202_bool = var_56_bool == (int)16732;
		if(var_202_bool != 0) {
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_8410();
		}
		var_206_bool = var_55_string == (int)12752;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511558);
			@@@var_0_object:ClearReplies();
			var_225_bool = 0; var_226_object = Obj();
			var_226_object = var_1_object;
			func_9055(var_226_object);
			if(var_225_bool != 0) {
				@@@var_0_object:AddReply((int)511559, (int)12754, (int)12753);
			}
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_9067(var_237_object);
			if(var_236_bool != 0) {
				@@@var_0_object:AddReply((int)511570, (int)12765, (int)12764);
			}
			@@@var_0_object:AddReply((int)511589, (int)-1, (int)12784);
			return 0;
		}
		var_249_bool = var_55_string == (int)12765;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511572, (int)12767, (int)12766);
			var_255_bool = 0; var_256_object = Obj();
			var_256_object = var_1_object;
			func_8771(var_256_object);
			if(var_255_bool != 0) {
				@@@var_0_object:AddReply((int)511585, (int)16729, (int)12779);
			}
			return 0;
		}
		var_265_bool = var_55_string == (int)16729;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515685, (int)12767, (int)16730);
			@@@var_0_object:AddReply((int)515686, (int)-1, (int)16732);
			return 0;
		}
		var_275_bool = var_55_string == (int)12767;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_4977(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)511573);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511574, (int)12769, (int)12768);
			@@@var_0_object:AddReply((int)515687, (int)12773, (int)16733);
			return 0;
		}
		var_285_bool = var_55_string == (int)12769;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_4977(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)511575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511576, (int)12771, (int)12770);
			return 0;
		}
		var_292_bool = var_55_string == (int)12771;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511578, (int)12773, (int)12772);
			@@@var_0_object:AddReply((int)511586, (int)12781, (int)12780);
			return 0;
		}
		var_302_bool = var_55_string == (int)12781;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_4977(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)511587);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511588, (int)12773, (int)12782);
			return 0;
		}
		var_309_bool = var_55_string == (int)12773;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511580, (int)12775, (int)12774);
			return 0;
		}
		var_316_bool = var_55_string == (int)12775;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511582, (int)12777, (int)12776);
			@@@var_0_object:AddReply((int)515688, (int)-1, (int)16735);
			return 0;
		}
		var_326_bool = var_55_string == (int)12777;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511584, (int)-1, (int)12778);
			@@@var_0_object:AddReply((int)515689, (int)-1, (int)16736);
			return 0;
		}
		var_336_bool = var_55_string == (int)12754;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511561, (int)12756, (int)12755);
			@@@var_0_object:AddReply((int)515680, (int)-1, (int)16724);
			return 0;
		}
		var_346_bool = var_55_string == (int)12756;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_4977(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)511562);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511563, (int)12758, (int)12757);
			@@@var_0_object:AddReply((int)515681, (int)-1, (int)16725);
			return 0;
		}
		var_356_bool = var_55_string == (int)12758;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_4977(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)511564);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511565, (int)12760, (int)12759);
			@@@var_0_object:AddReply((int)515682, (int)12762, (int)16726);
			return 0;
		}
		var_366_bool = var_55_string == (int)12760;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_4977(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)511566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511567, (int)12762, (int)12761);
			return 0;
		}
		var_373_bool = var_55_string == (int)12762;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_4977(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511569, (int)-1, (int)12763);
			@@@var_0_object:AddReply((int)515683, (int)-1, (int)16728);
			return 0;
		}
		var_3_string = true;
		var_382_bool = 0;
		func_7933(var_382_bool);
		if(var_382_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1388";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_56_bool == (int)14919;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_8440();
		}
		var_66_bool = var_56_bool == (int)14927;
		if(var_66_bool != 0) {
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_8446();
		}
		var_72_bool = var_56_bool == (int)14931;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_8434();
		}
		var_78_bool = var_56_bool == (int)14943;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_8452();
		}
		var_84_bool = var_55_string == (int)14918;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_5668(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513660);
			@@@var_0_object:ClearReplies();
			var_103_bool = 0;
			var_103_bool = 0;
			var_104_bool = 0; var_105_object = Obj();
			var_105_object = var_1_object;
			func_9199(var_105_object);
			if(var_104_bool != 0) {
				var_112_bool = 0; var_113_object = Obj();
				var_113_object = var_1_object;
				func_9175(var_113_object);
				if(var_112_bool != 0) {
					var_103_bool = 1;
				}
			}
			if(var_103_bool != 0) {
				@@@var_0_object:AddReply((int)513661, (int)14920, (int)14919);
			}
			var_121_bool = 0;
			var_121_bool = 0;
			var_122_bool = 0;
			var_122_bool = 0;
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_9211(var_124_object);
			if(var_123_bool != 0) {
				var_129_bool = 0; var_130_object = Obj();
				var_130_object = var_1_object;
				func_9187(var_130_object);
				if(var_129_bool != 0) {
					var_122_bool = 1;
				}
			}
			if(var_122_bool != 0) {
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_9259(var_136_object);
				var_141_bool = var_135_bool == 0; //@nz
				if(var_141_bool != 0) {
					var_121_bool = 1;
				}
			}
			if(var_121_bool != 0) {
				@@@var_0_object:AddReply((int)513669, (int)14928, (int)14927);
			}
			var_145_bool = 0;
			var_145_bool = 0;
			var_146_bool = 0;
			var_146_bool = 0;
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_object;
			func_9187(var_148_object);
			if(var_147_bool != 0) {
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_9223(var_150_object);
				if(var_149_bool != 0) {
					var_146_bool = 1;
				}
			}
			if(var_146_bool != 0) {
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_9247(var_156_object);
				var_161_bool = var_155_bool == 0; //@nz
				if(var_161_bool != 0) {
					var_145_bool = 1;
				}
			}
			if(var_145_bool != 0) {
				@@@var_0_object:AddReply((int)513683, (int)14944, (int)14943);
			}
			@@@var_0_object:AddReply((int)513674, (int)-1, (int)14932);
			return 0;
		}
		var_169_bool = var_55_string == (int)14944;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_5668(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513685, (int)14946, (int)14945);
			return 0;
		}
		var_176_bool = var_55_string == (int)14946;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_5668(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513686);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513687, (int)-1, (int)14947);
			return 0;
		}
		var_183_bool = var_55_string == (int)14928;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_5668(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513671, (int)14930, (int)14929);
			@@@var_0_object:AddReply((int)513675, (int)14930, (int)14933);
			return 0;
		}
		var_193_bool = var_55_string == (int)14930;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_5668(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)513672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513673, (int)-1, (int)14931);
			return 0;
		}
		var_200_bool = var_55_string == (int)14920;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_5668(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513663, (int)14922, (int)14921);
			@@@var_0_object:AddReply((int)513677, (int)14937, (int)14936);
			return 0;
		}
		var_210_bool = var_55_string == (int)14937;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_5668(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)513678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513679, (int)14924, (int)14938);
			@@@var_0_object:AddReply((int)513680, (int)14922, (int)14940);
			return 0;
		}
		var_220_bool = var_55_string == (int)14922;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_5668(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)513664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513665, (int)14924, (int)14923);
			return 0;
		}
		var_227_bool = var_55_string == (int)14924;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_5668(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)513666);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513667, (int)14926, (int)14925);
			return 0;
		}
		var_234_bool = var_55_string == (int)14926;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_5668(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)513668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513676, (int)14941, (int)14935);
			return 0;
		}
		var_241_bool = var_55_string == (int)14941;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_5668(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)513681);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513682, (int)-1, (int)14942);
			return 0;
		}
		var_3_string = true;
		var_247_bool = 0;
		func_7933(var_247_bool);
		if(var_247_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x163b";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_56_bool == (int)33343;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_8660();
		}
		var_95_bool = var_56_bool == (int)35010;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_8660();
		}
		var_99_bool = var_56_bool == (int)33123;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_7958();
		}
		var_105_bool = var_56_bool == (int)35109;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_7974();
		}
		var_111_bool = var_55_string == (int)33081;
		if(var_111_bool != 0) {
			var_112_bool = 0; var_113_object = Obj();
			var_113_object = var_1_object;
			func_8674(var_113_object);
			var_120_bool = var_112_bool == 0; //@nz
			if(var_120_bool != 0) {
				var_121_string = "";
				func_6257(var_56_bool, "Neutral");
				@@@var_0_object:SetMessage((int)531697);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531698, (int)33083, (int)33082);
				@@@var_0_object:AddReply((int)531701, (int)-1, (int)33085);
				return 0;
			}
			var_145_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531735);
			@@@var_0_object:ClearReplies();
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_object;
			func_8698(var_148_object);
			if(var_147_bool != 0) {
				@@@var_0_object:AddReply((int)532945, (int)33336, (int)34434);
			}
			var_156_bool = 0;
			var_156_bool = 0;
			var_157_bool = 0; var_158_object = Obj();
			var_158_object = var_1_object;
			func_9283(var_158_object);
			if(var_157_bool != 0) {
				var_173_bool = 0; var_174_object = Obj();
				var_174_object = var_1_object;
				func_8686(var_174_object);
				if(var_173_bool != 0) {
					var_156_bool = 1;
				}
			}
			if(var_156_bool != 0) {
				@@@var_0_object:AddReply((int)531736, (int)33124, (int)33123);
			}
			var_182_bool = 0;
			var_182_bool = 1;
			var_183_bool = 0;
			var_183_bool = 0;
			var_184_bool = 0; var_185_object = Obj();
			var_185_object = var_1_object;
			func_8698(var_185_object);
			if(var_184_bool != 0) {
				var_186_bool = 0; var_187_object = Obj();
				var_187_object = var_1_object;
				func_8759(var_187_object);
				if(var_186_bool != 0) {
					var_183_bool = 1;
				}
			}
			if(var_183_bool != 1) {
				var_192_bool = 0;
				var_192_bool = 0;
				var_193_bool = 0; var_194_object = Obj();
				var_194_object = var_1_object;
				func_8710(var_194_object);
				if(var_193_bool != 0) {
					var_199_bool = 0; var_200_object = Obj();
					var_200_object = var_1_object;
					func_8759(var_200_object);
					if(var_199_bool != 0) {
						var_192_bool = 1;
					}
				}
				if(var_192_bool != 1) {
					var_182_bool = 0;
				}
			}
			if(var_182_bool != 0) {
				@@@var_0_object:AddReply((int)533590, (int)35110, (int)35109);
			}
			@@@var_0_object:AddReply((int)531813, (int)-1, (int)33207);
			return 0;
		}
		var_208_bool = var_55_string == (int)35110;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533593, (int)35115, (int)35112);
			@@@var_0_object:AddReply((int)533592, (int)35113, (int)35111);
			return 0;
		}
		var_218_bool = var_55_string == (int)35113;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533594);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533595, (int)-1, (int)35114);
			return 0;
		}
		var_225_bool = var_55_string == (int)35115;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533597, (int)35117, (int)35116);
			@@@var_0_object:AddReply((int)533603, (int)35119, (int)35122);
			return 0;
		}
		var_235_bool = var_55_string == (int)35117;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_6257(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)533598);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533599, (int)35119, (int)35118);
			return 0;
		}
		var_242_bool = var_55_string == (int)35119;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533600);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533601, (int)-1, (int)35120);
			@@@var_0_object:AddReply((int)533602, (int)-1, (int)35121);
			return 0;
		}
		var_252_bool = var_55_string == (int)33124;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_6257(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)531737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531738, (int)33126, (int)33125);
			@@@var_0_object:AddReply((int)531747, (int)33126, (int)33135);
			return 0;
		}
		var_262_bool = var_55_string == (int)33126;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531740, (int)33128, (int)33127);
			@@@var_0_object:AddReply((int)531746, (int)33128, (int)33133);
			return 0;
		}
		var_272_bool = var_55_string == (int)33128;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531742, (int)33130, (int)33129);
			@@@var_0_object:AddReply((int)531745, (int)-1, (int)33132);
			return 0;
		}
		var_282_bool = var_55_string == (int)33130;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_6257(var_56_bool, "Distrust");
			@@@var_0_object:SetMessage((int)531743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531744, (int)-1, (int)33131);
			@@@var_0_object:AddReply((int)532944, (int)-1, (int)34433);
			return 0;
		}
		var_292_bool = var_55_string == (int)33336;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_6257(var_56_bool, "Anger");
			@@@var_0_object:SetMessage((int)531932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532961, (int)34454, (int)34453);
			@@@var_0_object:AddReply((int)532963, (int)34456, (int)34455);
			return 0;
		}
		var_302_bool = var_55_string == (int)34456;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532965, (int)34454, (int)34457);
			@@@var_0_object:AddReply((int)532966, (int)34454, (int)34459);
			return 0;
		}
		var_312_bool = var_55_string == (int)34454;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532962);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531933, (int)33338, (int)33337);
			@@@var_0_object:AddReply((int)532967, (int)34462, (int)34461);
			return 0;
		}
		var_322_bool = var_55_string == (int)34462;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532969, (int)33338, (int)34463);
			@@@var_0_object:AddReply((int)532970, (int)33340, (int)34464);
			return 0;
		}
		var_332_bool = var_55_string == (int)33338;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_6257(var_56_bool, "Repentance");
			@@@var_0_object:SetMessage((int)531934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531935, (int)33340, (int)33339);
			@@@var_0_object:AddReply((int)532971, (int)33340, (int)34467);
			return 0;
		}
		var_342_bool = var_55_string == (int)33340;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531936);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531937, (int)33342, (int)33341);
			@@@var_0_object:AddReply((int)532972, (int)33342, (int)34469);
			return 0;
		}
		var_352_bool = var_55_string == (int)33342;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531939, (int)-1, (int)33343);
			@@@var_0_object:AddReply((int)533484, (int)-1, (int)35010);
			return 0;
		}
		var_362_bool = var_55_string == (int)33083;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_6257(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531699);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531700, (int)-1, (int)33084);
			return 0;
		}
		var_3_string = true;
		var_368_bool = 0;
		func_7933(var_368_bool);
		if(var_368_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1888";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_55_string == (int)36960;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_6960(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_89_bool = var_55_string == (int)36962;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_6960(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_99_bool = var_55_string == (int)36964;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_6960(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_108_bool = 0;
		func_7933(var_108_bool);
		if(var_108_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1b47";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_55_string == (int)38000;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_7214(var_56_bool, "Neutral");
			@@@var_0_object:SetMessage((int)536225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536226, (int)-1, (int)38001);
			@@@var_0_object:AddReply((int)536227, (int)-1, (int)38002);
			return 0;
		}
		var_3_string = true;
		var_85_bool = 0;
		func_7933(var_85_bool);
		if(var_85_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1c45";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int)
{
	if((int)1 != 0) {
		func_7822();
		var_60_bool = var_55_int == (int)42551;
		if(var_60_bool != 0) {
			var_61_string = "";
			func_7417(var_56_int, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_85_bool = 0;
		func_7933(var_85_bool);
		if(var_85_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1d10";
	
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool)
{
	Hold();
	return 0;
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool)
{
	StopGroup0();
	return 0;
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_bool = 0;
	IsOverrideActive(var_57_bool);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		EventDisable(0);
		var_59_bool = 0; var_60_object = Obj();
		var_55_object = var_60_object;
		func_7537(var_59_bool, var_60_object);
		EventEnable(0);
		var_73_object = Obj();
		var_55_object = var_73_object;
		func_9610(var_73_object);
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool)
{
	var_55_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_7488();
	return 0;
}


func_0(var_0_object, var_76_int, var_77_object)
{
	var_79_object = Obj(); var_80_bool = 0; var_81_int = 0; var_82_bool = 0; var_83_object = Obj(); var_84_bool = 0; var_85_int = 0; var_86_bool = 0;
	var_0_object = var_77_object;
	var_87_bool = 0; var_88_object = Obj(); var_89_float = 0;
	var_77_object = var_88_object;
	func_7551(var_87_bool, var_88_object, (float)70.0);
	var_134_bool = var_87_bool == 0; //@nz
	if(var_134_bool != 0) {
		var_76_int = -2;
		return 8;
	}
	CreateDialog(var_83_object);
	var_135_int = 0;
	func_7927(var_135_int);
	@@var_83_object:SetNPCName(var_135_int);
	var_136_int = 0;
	func_7925(var_136_int);
	@@var_83_object:SetNPCDescription(var_136_int);
	var_137_string = "";
	func_7929(var_137_string);
	@@var_83_object:SetPhoto(var_137_string);
	var_138_string = "";
	func_7931(var_138_string);
	@@var_83_object:SetPhoto2(var_138_string);
	var_139_int = 0;
	func_9593(var_139_int);
	@@var_83_object:SetPlayerName(var_139_int);
	IsOverrideActive(var_84_bool);
	var_147_bool = var_84_bool;
	if(var_147_bool != 0) {
		var_76_int = -2;
		return 8;
	}
	DoDialog(var_83_object);
	var_148_bool = 0; var_149_object = Obj();
	func_7829(Obj());
	var_150_object = var_149_object;
	func_7638(var_148_bool, var_149_object);
	var_243_object = Obj(); var_244_object = Obj();
	var_77_object = var_243_object;
	var_83_object = var_244_object;
	TaskCall(1);
	func_81(var_245_object, var_246_object, var_247_string, var_248_bool, var_243_object, var_244_object);
	TaskReturn();
	@@var_83_object:IsDialogEnd(var_86_bool);
	
Label_63:
	var_299_bool = var_86_bool == 0; //@nz
	if(var_299_bool != 0) {
		sync();
		@@var_83_object:IsDialogEnd(var_86_bool);
		goto Label_63;
	}
	var_77_object = Obj();
	func_7620();
	StopDialog(var_83_object);
	@@var_83_object:GetReturnValue((int)-1);
	var_85_int = var_76_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8710(var_494_bool)
{
	var_496_int = 0; var_497_string = "";
	func_7845(var_496_int, "d1q01");
	var_499_bool = var_496_int == (int)6;
	if(var_499_bool != 0) {
		var_494_bool = 1;
		return 0;
	}
	var_494_bool = 0;
	return 0;
}


func_9223(var_1222_bool)
{
	var_1224_int = 0; var_1225_string = "";
	func_7845(var_1224_int, "ood8BigVlad3");
	var_1227_bool = var_1224_int == (int)0;
	if(var_1227_bool != 0) {
		var_1222_bool = 1;
		return 0;
	}
	var_1222_bool = 0;
	return 0;
}


func_7696(var_159_bool, var_160_object)
{
	var_161_string = ""; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_string = ""; var_166_string = ""; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_string = "";
	var_166_string = "c";
	var_167_int = 0;
	
Label_7699:
	if((int)1 != 0) {
		var_173_int = var_167_int + (int)1;
		var_174_int = var_166_string + var_173_int;
		@@var_160_object:HasProperty(var_174_int, var_168_bool);
		var_175_bool = var_168_bool == 0; //@nz
		if(var_175_bool != 0) {
		} else {
			var_167_int = var_167_int + (int)1;
			goto Label_7699;
		}
	}
	var_176_bool = var_167_int == 0; //@nz
	if(var_176_bool != 0) {
		var_159_bool = 0;
		return 10;
	}
	var_169_int = 0;
	var_178_bool = var_167_int > (int)1;
	if(var_178_bool != 0) {
		irand(var_169_int, var_167_int);
	}
	var_180_int = var_169_int + (int)1;
	var_181_int = var_166_string + var_180_int;
	@@var_160_object:GetProperty(var_181_int, var_170_string);
	var_182_bool = 0; var_183_string = "";
	var_170_string = var_183_string;
	func_7807(var_182_bool, var_183_string);
	var_182_bool = var_159_bool;
	return 10;
	
}


func_8722(var_705_bool)
{
	var_707_bool = 0;
	var_707_bool = 0;
	var_708_bool = 0;
	var_708_bool = 0;
	var_709_int = 0; var_710_string = "";
	func_7845(var_709_int, "d3q02");
	var_712_bool = var_709_int == (int)1000;
	var_713_bool = var_712_bool == 0; //@nz
	if(var_713_bool != 0) {
		var_714_int = 0; var_715_string = "";
		func_7845(var_714_int, "d3q02");
		var_717_bool = var_714_int == (int)0;
		var_718_bool = var_717_bool == 0; //@nz
		if(var_718_bool != 0) {
			var_708_bool = 1;
		}
	}
	if(var_708_bool != 0) {
		var_719_int = 0; var_720_string = "";
		func_7845(var_719_int, "d3q02");
		var_722_bool = var_719_int == (int)-1;
		var_723_bool = var_722_bool == 0; //@nz
		if(var_723_bool != 0) {
			var_707_bool = 1;
		}
	}
	if(var_707_bool != 0) {
		var_705_bool = 1;
		return 0;
	}
	var_705_bool = 0;
	return 0;
}


func_9235(var_1033_bool)
{
	var_1035_int = 0; var_1036_string = "";
	func_7845(var_1035_int, "ood6BigVlad3");
	var_1038_bool = var_1035_int == (int)0;
	if(var_1038_bool != 0) {
		var_1033_bool = 1;
		return 0;
	}
	var_1033_bool = 0;
	return 0;
}


func_9247(var_1228_bool)
{
	var_1230_int = 0; var_1231_string = "";
	func_7845(var_1230_int, "d8q01BigVladIsVictim");
	var_1233_bool = var_1230_int == (int)1;
	if(var_1233_bool != 0) {
		var_1228_bool = 1;
		return 0;
	}
	var_1228_bool = 0;
	return 0;
}


func_8226()
{
	SetVariable("ood4BigVlad3", (int)1);
	return 0;
}


func_5668(var_2_object, var_1169_string)
{
	var_1170_bool = 0;
	func_7933(var_1170_bool);
	var_1171_bool = var_1170_bool == 0; //@nz
	if(var_1171_bool != 0) {
		return 0;
	}
	var_1172_bool = var_1169_string == var_2_object;
	if(var_1172_bool != 0) {
		return 0;
	}
	var_1173_string = ""; var_1174_bool = 0;
	var_1169_string = var_1173_string;
	var_1176_bool = var_1169_string == "";
	if(var_1176_bool != 0) {
		var_1174_bool = 0;
	} else {
		var_1174_bool = 1;
	}
	func_7792(var_1173_string, var_1174_bool);
	var_2_object = var_1169_string;
	return 0;
	
}


func_8232(var_277_object)
{
	var_279_object = Obj(); var_280_object = Obj(); var_281_int = 0; var_282_object = Obj(); var_283_object = Obj(); var_284_int = 0;
	func_9543(Obj());
	var_285_object = var_282_object;
	@@var_282_object:FindMark(var_283_object, "d4q01BigVladGotoLara");
	var_287_object = var_283_object;
	if(var_287_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d8q01MladVladgotoOspina");
	var_289_object = var_283_object;
	if(var_289_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01BigVladGotoSklad");
	var_291_object = var_283_object;
	if(var_291_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01BigVladGotoSobor");
	var_293_object = var_283_object;
	if(var_293_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d8q01MladVladGotoMat");
	var_295_object = var_283_object;
	if(var_295_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01BigVladGotoTheater");
	var_297_object = var_283_object;
	if(var_297_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01LaraGotoMladVlad");
	var_299_object = var_283_object;
	if(var_299_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01LaraGotoMladVladSelf");
	var_301_object = var_283_object;
	if(var_301_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01LaraGotoOspina");
	var_303_object = var_283_object;
	if(var_303_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d8q01MatGotoBoiny");
	var_305_object = var_283_object;
	if(var_305_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01MladVladGotoBigVlad");
	var_307_object = var_283_object;
	if(var_307_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d8q04MladVladGotoMark");
	var_309_object = var_283_object;
	if(var_309_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01MladVladGotoOspina");
	var_311_object = var_283_object;
	if(var_311_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01OspinaGotoLara");
	var_313_object = var_283_object;
	if(var_313_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01WastedMale");
	var_315_object = var_283_object;
	if(var_315_object != 0) {
		@@var_283_object:Remove();
	}
	@@var_282_object:FindMark(var_283_object, "d4q01Whitemask");
	var_317_object = var_283_object;
	if(var_317_object != 0) {
		@@var_283_object:Remove();
	}
	func_9424();
	var_326_bool = 0; var_327_string = ""; var_328_string = "";
	func_7874(var_326_bool, "quest_d4_01", "completed");
	@@var_277_object:RemoveItemByType(var_284_int, "d4q01_sobor_key", (int)1);
	@@var_277_object:RemoveItemByType(var_284_int, "d4q01_theater_key", (int)1);
	var_333_string = ""; var_334_bool = 0;
	func_7850("theater@door1", (bool)1);
	var_343_string = ""; var_344_bool = 0;
	func_7850("sobor@door1", (bool)1);
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_554(var_2_object, var_1047_string)
{
	var_1048_bool = 0;
	func_7933(var_1048_bool);
	var_1049_bool = var_1048_bool == 0; //@nz
	if(var_1049_bool != 0) {
		return 0;
	}
	var_1050_bool = var_1047_string == var_2_object;
	if(var_1050_bool != 0) {
		return 0;
	}
	var_1051_string = ""; var_1052_bool = 0;
	var_1047_string = var_1051_string;
	var_1054_bool = var_1047_string == "";
	if(var_1054_bool != 0) {
		var_1052_bool = 0;
	} else {
		var_1052_bool = 1;
	}
	func_7792(var_1051_string, var_1052_bool);
	var_2_object = var_1047_string;
	return 0;
	
}


func_9259(var_1208_bool)
{
	var_1210_int = 0; var_1211_string = "";
	func_7845(var_1210_int, "d8q01MladVladIsVictim");
	var_1213_bool = var_1210_int == (int)1;
	if(var_1213_bool != 0) {
		var_1208_bool = 1;
		return 0;
	}
	var_1208_bool = 0;
	return 0;
}


func_7214(var_2_object, var_355_string)
{
	var_356_bool = 0;
	func_7933(var_356_bool);
	var_357_bool = var_356_bool == 0; //@nz
	if(var_357_bool != 0) {
		return 0;
	}
	var_358_bool = var_355_string == var_2_object;
	if(var_358_bool != 0) {
		return 0;
	}
	var_359_string = ""; var_360_bool = 0;
	var_355_string = var_359_string;
	var_362_bool = var_355_string == "";
	if(var_362_bool != 0) {
		var_360_bool = 0;
	} else {
		var_360_bool = 1;
	}
	func_7792(var_359_string, var_360_bool);
	var_2_object = var_355_string;
	return 0;
	
}


func_7733(var_190_bool, var_191_object)
{
	var_192_string = ""; var_193_int = 0; var_194_bool = 0; var_195_int = 0; var_196_string = ""; var_197_string = ""; var_198_int = 0; var_199_bool = 0; var_200_int = 0; var_201_string = "";
	var_203_int = 0;
	func_7891(var_203_int);
	var_209_int = "d" + var_203_int;
	var_197_string = var_209_int + "m";
	var_198_int = 0;
	
Label_7742:
	if((int)1 != 0) {
		var_213_int = var_198_int + (int)1;
		var_214_int = var_197_string + var_213_int;
		@@var_191_object:HasProperty(var_214_int, var_199_bool);
		var_215_bool = var_199_bool == 0; //@nz
		if(var_215_bool != 0) {
		} else {
			var_198_int = var_198_int + (int)1;
			goto Label_7742;
		}
	}
	var_216_bool = var_198_int == 0; //@nz
	if(var_216_bool != 0) {
		var_190_bool = 0;
		return 10;
	}
	var_200_int = 0;
	var_218_bool = var_198_int > (int)1;
	if(var_218_bool != 0) {
		irand(var_200_int, var_198_int);
	}
	var_220_int = var_200_int + (int)1;
	var_221_int = var_197_string + var_220_int;
	@@var_191_object:GetProperty(var_221_int, var_201_string);
	var_222_bool = 0; var_223_string = "";
	var_201_string = var_223_string;
	func_7807(var_222_bool, var_223_string);
	var_222_bool = var_190_bool;
	return 10;
	
}


func_8759(var_487_bool)
{
	var_489_int = 0; var_490_string = "";
	func_7845(var_489_int, "ood1BigVlad2");
	var_492_bool = var_489_int == (int)0;
	if(var_492_bool != 0) {
		var_487_bool = 1;
		return 0;
	}
	var_487_bool = 0;
	return 0;
}


func_9271(var_632_bool)
{
	var_634_int = 0; var_635_string = "";
	func_7845(var_634_int, "d2KnowBigVladIsBad");
	var_637_bool = var_634_int == (int)1;
	if(var_637_bool != 0) {
		var_632_bool = 1;
		return 0;
	}
	var_632_bool = 0;
	return 0;
}


func_2112(var_0_object, var_1_object, var_2_object, var_3_string, var_672_object, var_673_object)
{
	var_0_object = var_673_object;
	var_1_object = var_672_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_679_string = "";
		func_2223(var_673_object, "Neutral");
		@@@var_0_object:SetMessage((int)508926);
		@@@var_0_object:ClearReplies();
		var_688_bool = 0;
		var_688_bool = 0;
		var_689_bool = 0; var_690_object = Obj();
		var_690_object = var_1_object;
		func_8877(var_690_object);
		if(var_689_bool != 0) {
			var_695_bool = 0; var_696_object = Obj();
			var_696_object = var_1_object;
			func_8889(var_696_object);
			if(var_695_bool != 0) {
				var_688_bool = 1;
			}
		}
		if(var_688_bool != 0) {
			@@@var_0_object:AddReply((int)508977, (int)9847, (int)9846);
		}
		var_704_bool = 0;
		var_704_bool = 0;
		var_705_bool = 0; var_706_object = Obj();
		var_706_object = var_1_object;
		func_8722(var_706_object);
		if(var_705_bool != 0) {
			var_724_bool = 0; var_725_object = Obj();
			var_725_object = var_1_object;
			func_8925(var_725_object);
			if(var_724_bool != 0) {
				var_704_bool = 1;
			}
		}
		if(var_704_bool != 0) {
			@@@var_0_object:AddReply((int)510375, (int)11442, (int)11440);
		}
		var_733_bool = 0; var_734_object = Obj();
		var_734_object = var_1_object;
		func_8901(var_734_object);
		if(var_733_bool != 0) {
			@@@var_0_object:AddReply((int)508975, (int)9792, (int)9844);
		}
		var_742_bool = 0; var_743_object = Obj();
		var_743_object = var_1_object;
		func_8913(var_743_object);
		if(var_742_bool != 0) {
			@@@var_0_object:AddReply((int)508976, (int)9815, (int)9845);
		}
		@@@var_0_object:AddReply((int)511139, (int)-1, (int)12328);
		goto Label_2193;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x844";
	}
Label_2193:
	var_754_bool = 0;
	func_7933(var_754_bool);
	if(var_754_bool != 0) {

	Label_2197:
		lshWaitForAnimEnd();
		var_755_string = var_3_string;
		if(var_755_string != 0) {
		} else {
			var_756_string = "";
			var_756_string = var_2_object;
			func_7776(var_756_string);
			goto Label_2197;
	}
		PlayAnimation("all", "idle");

	Label_2212:
		WaitForAnimEnd();
		var_759_string = var_3_string;
		if(var_759_string != 0) {
			goto Label_2222;
		}
		PlayAnimation("all", "idle");
		goto Label_2212;
	}
	goto Label_2222;
	
Label_2222:
	return 0;
	
}


func_8771(var_255_bool)
{
	var_257_int = 0; var_258_string = "";
	func_7845(var_257_int, "KnowMat");
	var_260_bool = var_257_int == (int)1;
	if(var_260_bool != 0) {
		var_255_bool = 1;
		return 0;
	}
	var_255_bool = 0;
	return 0;
}


func_9283(var_458_bool)
{
	var_460_bool = 0;
	var_460_bool = 0;
	var_461_bool = 0;
	var_461_bool = 0;
	var_462_int = 0; var_463_string = "";
	func_7845(var_462_int, "d1q01");
	var_465_bool = var_462_int != (int)0;
	if(var_465_bool != 0) {
		var_466_int = 0; var_467_string = "";
		func_7845(var_466_int, "d1q01");
		var_469_bool = var_466_int != (int)1000;
		if(var_469_bool != 0) {
			var_461_bool = 1;
		}
	}
	if(var_461_bool != 0) {
		var_470_int = 0; var_471_string = "";
		func_7845(var_470_int, "d1q01");
		var_473_bool = var_470_int != (int)-1;
		if(var_473_bool != 0) {
			var_460_bool = 1;
		}
	}
	if(var_460_bool != 0) {
		var_458_bool = 1;
		return 0;
	}
	var_458_bool = 0;
	return 0;
}


func_8783(var_879_bool)
{
	var_881_int = 0; var_882_string = "";
	func_7845(var_881_int, "ood4BigVlad4");
	var_884_bool = var_881_int == (int)0;
	if(var_884_bool != 0) {
		var_879_bool = 1;
		return 0;
	}
	var_879_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_243_object, var_244_object)
{
	var_0_object = var_244_object;
	var_1_object = var_243_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_250_object = Obj(); var_251_object = Obj();
		var_250_object = var_1_object;
		var_251_object = var_0_object;
		func_8428();
		var_254_string = "";
		func_149(var_244_object, "Neutral");
		@@@var_0_object:SetMessage((int)500401);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500402, (int)471, (int)468);
		@@@var_0_object:AddReply((int)500403, (int)472, (int)469);
		@@@var_0_object:AddReply((int)500404, (int)-1, (int)470);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_281_bool = 0;
	func_7933(var_281_bool);
	if(var_281_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_282_string = var_3_string;
		if(var_282_string != 0) {
		} else {
			var_283_string = "";
			var_283_string = var_2_object;
			func_7776(var_283_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_296_string = var_3_string;
		if(var_296_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_8795(var_544_bool)
{
	var_546_int = 0; var_547_string = "";
	func_7845(var_546_int, "ood2BigVlad1");
	var_549_bool = var_546_int == (int)0;
	if(var_549_bool != 0) {
		var_544_bool = 1;
		return 0;
	}
	var_544_bool = 0;
	return 0;
}


func_7776(var_60_string)
{
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_bool = 0; var_65_float = 0; var_66_float = 0;
	lshHasAnimation(var_64_bool, var_60_string);
	var_67_bool = var_64_bool;
	if(var_67_bool != 0) {
		lshGetAnimTimes(var_60_string, var_65_float, var_66_float);
		lshPlayAnimation(var_65_float, var_66_float, (bool)0);
	} else {
		var_70_int = "Can't find lsh animation : " + var_60_string;
		Trace(var_70_int);
	}
	return 6;
	
}


func_9317(var_854_bool)
{
	var_854_bool = 0;
	return 0;
}


func_8807(var_587_bool)
{
	var_589_int = 0; var_590_string = "";
	func_7845(var_589_int, "ood2BigVlad2");
	var_592_bool = var_589_int == (int)0;
	if(var_592_bool != 0) {
		var_587_bool = 1;
		return 0;
	}
	var_587_bool = 0;
	return 0;
}


func_9320()
{
	var_65_object = Obj(); var_66_object = Obj();
	CreateDiaryEntry(var_66_object, (int)619, (int)1, (int)532193);
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0;
	var_66_object = var_71_object;
	func_9515(var_70_bool, var_71_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7278(var_0_object, var_1312_int, var_1313_object)
{
	var_1315_object = Obj(); var_1316_bool = 0; var_1317_int = 0; var_1318_bool = 0; var_1319_object = Obj(); var_1320_bool = 0; var_1321_int = 0; var_1322_bool = 0;
	var_0_object = var_1313_object;
	var_1323_bool = 0; var_1324_object = Obj(); var_1325_float = 0;
	var_1313_object = var_1324_object;
	func_7551(var_1323_bool, var_1324_object, (float)70.0);
	var_1326_bool = var_1323_bool == 0; //@nz
	if(var_1326_bool != 0) {
		var_1312_int = -2;
		return 8;
	}
	CreateDialog(var_1319_object);
	var_1327_int = 0;
	func_7927(var_1327_int);
	@@var_1319_object:SetNPCName(var_1327_int);
	var_1328_int = 0;
	func_7925(var_1328_int);
	@@var_1319_object:SetNPCDescription(var_1328_int);
	var_1329_string = "";
	func_7929(var_1329_string);
	@@var_1319_object:SetPhoto(var_1329_string);
	var_1330_string = "";
	func_7931(var_1330_string);
	@@var_1319_object:SetPhoto2(var_1330_string);
	var_1331_int = 0;
	func_9593(var_1331_int);
	@@var_1319_object:SetPlayerName(var_1331_int);
	IsOverrideActive(var_1320_bool);
	var_1332_bool = var_1320_bool;
	if(var_1332_bool != 0) {
		var_1312_int = -2;
		return 8;
	}
	DoDialog(var_1319_object);
	var_1333_bool = 0; var_1334_object = Obj();
	func_7829(Obj());
	var_1335_object = var_1334_object;
	func_7638(var_1333_bool, var_1334_object);
	var_1336_object = Obj(); var_1337_object = Obj();
	var_1313_object = var_1336_object;
	var_1319_object = var_1337_object;
	TaskCall(21);
	func_7359(var_1338_object, var_1339_object, var_1340_string, var_1341_bool, var_1336_object, var_1337_object);
	TaskReturn();
	@@var_1319_object:IsDialogEnd(var_1322_bool);
	
Label_7341:
	var_1366_bool = var_1322_bool == 0; //@nz
	if(var_1366_bool != 0) {
		sync();
		@@var_1319_object:IsDialogEnd(var_1322_bool);
		goto Label_7341;
	}
	var_1313_object = Obj();
	func_7620();
	StopDialog(var_1319_object);
	@@var_1319_object:GetReturnValue((int)-1);
	var_1321_int = var_1312_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7792(var_258_string, var_259_bool)
{
	var_262_bool = 0; var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_float = 0; var_267_float = 0;
	lshHasAnimation(var_265_bool, var_258_string);
	var_268_bool = var_265_bool;
	if(var_268_bool != 0) {
		lshGetAnimTimes(var_258_string, var_266_float, var_267_float);
		lshPlayAnimation(var_266_float, var_267_float, var_259_bool);
	} else {
		var_270_int = "Can't find lsh animation : " + var_258_string;
		Trace(var_270_int);
	}
	return 6;
	
}


func_6257(var_2_object, var_423_string)
{
	var_424_bool = 0;
	func_7933(var_424_bool);
	var_425_bool = var_424_bool == 0; //@nz
	if(var_425_bool != 0) {
		return 0;
	}
	var_426_bool = var_423_string == var_2_object;
	if(var_426_bool != 0) {
		return 0;
	}
	var_427_string = ""; var_428_bool = 0;
	var_423_string = var_427_string;
	var_430_bool = var_423_string == "";
	if(var_430_bool != 0) {
		var_428_bool = 0;
	} else {
		var_428_bool = 1;
	}
	func_7792(var_427_string, var_428_bool);
	var_2_object = var_423_string;
	return 0;
	
}


func_8819(var_614_bool)
{
	var_616_int = 0; var_617_string = "";
	func_7845(var_616_int, "ood2BigVlad3");
	var_619_bool = var_616_int == (int)0;
	if(var_619_bool != 0) {
		var_614_bool = 1;
		return 0;
	}
	var_614_bool = 0;
	return 0;
}


func_9333()
{
	var_65_object = Obj(); var_66_object = Obj();
	CreateDiaryEntry(var_66_object, (int)627, (int)1, (int)532756);
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0;
	var_66_object = var_71_object;
	func_9515(var_70_bool, var_71_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1142(var_0_object, var_512_int, var_513_object)
{
	var_515_object = Obj(); var_516_bool = 0; var_517_int = 0; var_518_bool = 0; var_519_object = Obj(); var_520_bool = 0; var_521_int = 0; var_522_bool = 0;
	var_0_object = var_513_object;
	var_523_bool = 0; var_524_object = Obj(); var_525_float = 0;
	var_513_object = var_524_object;
	func_7551(var_523_bool, var_524_object, (float)70.0);
	var_526_bool = var_523_bool == 0; //@nz
	if(var_526_bool != 0) {
		var_512_int = -2;
		return 8;
	}
	CreateDialog(var_519_object);
	var_527_int = 0;
	func_7927(var_527_int);
	@@var_519_object:SetNPCName(var_527_int);
	var_528_int = 0;
	func_7925(var_528_int);
	@@var_519_object:SetNPCDescription(var_528_int);
	var_529_string = "";
	func_7929(var_529_string);
	@@var_519_object:SetPhoto(var_529_string);
	var_530_string = "";
	func_7931(var_530_string);
	@@var_519_object:SetPhoto2(var_530_string);
	var_531_int = 0;
	func_9593(var_531_int);
	@@var_519_object:SetPlayerName(var_531_int);
	IsOverrideActive(var_520_bool);
	var_532_bool = var_520_bool;
	if(var_532_bool != 0) {
		var_512_int = -2;
		return 8;
	}
	DoDialog(var_519_object);
	var_533_bool = 0; var_534_object = Obj();
	func_7829(Obj());
	var_535_object = var_534_object;
	func_7638(var_533_bool, var_534_object);
	var_536_object = Obj(); var_537_object = Obj();
	var_513_object = var_536_object;
	var_519_object = var_537_object;
	TaskCall(5);
	func_1223(var_538_object, var_539_object, var_540_string, var_541_bool, var_536_object, var_537_object);
	TaskReturn();
	@@var_519_object:IsDialogEnd(var_522_bool);
	
Label_1205:
	var_644_bool = var_522_bool == 0; //@nz
	if(var_644_bool != 0) {
		sync();
		@@var_519_object:IsDialogEnd(var_522_bool);
		goto Label_1205;
	}
	var_513_object = Obj();
	func_7620();
	StopDialog(var_519_object);
	@@var_519_object:GetReturnValue((int)-1);
	var_521_int = var_512_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7807(var_182_bool, var_183_string)
{
	var_184_bool = 0; var_185_bool = 0;
	var_186_bool = 0;
	func_7933(var_186_bool);
	if(var_186_bool != 0) {
		lshHasSpeech(var_185_bool, var_183_string);
		var_187_bool = var_185_bool;
		if(var_187_bool != 0) {
			lshPlaySpeech(var_183_string);
			var_182_bool = 1;
			return 2;
		}
	}
	var_182_bool = 0;
	return 2;
}


func_8831(var_626_bool)
{
	var_628_int = 0; var_629_string = "";
	func_7845(var_628_int, "ood2BigVlad4");
	var_631_bool = var_628_int == (int)0;
	if(var_631_bool != 0) {
		var_626_bool = 1;
		return 0;
	}
	var_626_bool = 0;
	return 0;
}


func_9346()
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateDiaryEntry(var_102_object, (int)628, (int)1, (int)532757);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_102_object = var_107_object;
	func_9515(var_106_bool, var_107_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8843(var_852_bool, var_853_object)
{
	var_854_bool = 0; var_855_object = Obj();
	var_853_object = var_855_object;
	func_9317(var_855_object);
	if(var_854_bool != 0) {
		var_852_bool = 1;
		return 0;
	}
	var_852_bool = 0;
	return 0;
}


func_7822()
{
	var_58_bool = 0;
	func_7933(var_58_bool);
	if(var_58_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_9359()
{
	var_118_object = Obj(); var_119_object = Obj();
	CreateDiaryEntry(var_119_object, (int)677, (int)1, (int)534363);
	var_123_bool = 0; var_124_object = Obj(); var_125_int = 0;
	var_119_object = var_124_object;
	func_9515(var_123_bool, var_124_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7829(var_150_object)
{
	var_151_object = Obj(); var_152_object = Obj();
	self(var_152_object);
	var_152_object = var_150_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_149(var_2_object, var_254_string)
{
	var_255_bool = 0;
	func_7933(var_255_bool);
	var_256_bool = var_255_bool == 0; //@nz
	if(var_256_bool != 0) {
		return 0;
	}
	var_257_bool = var_254_string == var_2_object;
	if(var_257_bool != 0) {
		return 0;
	}
	var_258_string = ""; var_259_bool = 0;
	var_254_string = var_258_string;
	var_261_bool = var_254_string == "";
	if(var_261_bool != 0) {
		var_259_bool = 0;
	} else {
		var_259_bool = 1;
	}
	func_7792(var_258_string, var_259_bool);
	var_2_object = var_254_string;
	return 0;
	
}


func_8853(var_550_bool)
{
	var_552_int = 0; var_553_string = "";
	func_7845(var_552_int, "d2q01");
	var_555_bool = var_552_int == (int)0;
	if(var_555_bool != 0) {
		var_550_bool = 1;
		return 0;
	}
	var_550_bool = 0;
	return 0;
}


func_7835(var_114_cvector, var_115_cvector)
{
	var_117_float = 0; var_118_float = 0;
	var_119_int = var_115_cvector | var_115_cvector;
	var_118_float = sqrt(var_119_int);
	var_120_float = 9.999999974752427e-07;
	var_121_bool = var_118_float < var_120_float;
	if(var_121_bool != 0) {
		var_114_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_114_cvector = var_115_cvector / var_118_float;
	return 2;
}


func_9372()
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateDiaryEntry(var_82_object, (int)135, (int)1, (int)515298);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_82_object = var_87_object;
	func_9515(var_86_bool, var_87_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6816(var_0_object, var_1253_int, var_1254_object)
{
	var_1256_object = Obj(); var_1257_bool = 0; var_1258_int = 0; var_1259_bool = 0; var_1260_object = Obj(); var_1261_bool = 0; var_1262_int = 0; var_1263_bool = 0;
	var_0_object = var_1254_object;
	var_1264_bool = 0; var_1265_object = Obj(); var_1266_float = 0;
	var_1254_object = var_1265_object;
	func_7551(var_1264_bool, var_1265_object, (float)70.0);
	var_1267_bool = var_1264_bool == 0; //@nz
	if(var_1267_bool != 0) {
		var_1253_int = -2;
		return 8;
	}
	CreateDialog(var_1260_object);
	var_1268_int = 0;
	func_7927(var_1268_int);
	@@var_1260_object:SetNPCName(var_1268_int);
	var_1269_int = 0;
	func_7925(var_1269_int);
	@@var_1260_object:SetNPCDescription(var_1269_int);
	var_1270_string = "";
	func_7929(var_1270_string);
	@@var_1260_object:SetPhoto(var_1270_string);
	var_1271_string = "";
	func_7931(var_1271_string);
	@@var_1260_object:SetPhoto2(var_1271_string);
	var_1272_int = 0;
	func_9593(var_1272_int);
	@@var_1260_object:SetPlayerName(var_1272_int);
	IsOverrideActive(var_1261_bool);
	var_1273_bool = var_1261_bool;
	if(var_1273_bool != 0) {
		var_1253_int = -2;
		return 8;
	}
	DoDialog(var_1260_object);
	var_1274_bool = 0; var_1275_object = Obj();
	func_7829(Obj());
	var_1276_object = var_1275_object;
	func_7638(var_1274_bool, var_1275_object);
	var_1277_object = Obj(); var_1278_object = Obj();
	var_1254_object = var_1277_object;
	var_1260_object = var_1278_object;
	TaskCall(17);
	func_6897(var_1279_object, var_1280_object, var_1281_string, var_1282_bool, var_1277_object, var_1278_object);
	TaskReturn();
	@@var_1260_object:IsDialogEnd(var_1263_bool);
	
Label_6879:
	var_1310_bool = var_1263_bool == 0; //@nz
	if(var_1310_bool != 0) {
		sync();
		@@var_1260_object:IsDialogEnd(var_1263_bool);
		goto Label_6879;
	}
	var_1254_object = Obj();
	func_7620();
	StopDialog(var_1260_object);
	@@var_1260_object:GetReturnValue((int)-1);
	var_1262_int = var_1253_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8865(var_593_bool)
{
	var_595_int = 0; var_596_string = "";
	func_7845(var_595_int, "d2q01");
	var_598_bool = var_595_int == (int)6;
	if(var_598_bool != 0) {
		var_593_bool = 1;
		return 0;
	}
	var_593_bool = 0;
	return 0;
}


func_7845(var_416_int, var_417_string)
{
	var_418_int = 0; var_419_int = 0;
	GetVariable(var_417_string, var_419_int);
	var_419_int = var_416_int;
	return 2;
}


func_9385()
{
	var_86_object = Obj(); var_87_object = Obj();
	CreateDiaryEntry(var_87_object, (int)20, (int)1, (int)503360);
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0;
	var_87_object = var_92_object;
	func_9515(var_91_bool, var_92_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7850(var_333_string, var_334_bool)
{
	var_335_object = Obj(); var_336_object = Obj();
	FindActor(var_336_object, var_333_string);
	var_337_bool = var_336_object == 0; //@nz
	if(var_337_bool != 0) {
		var_339_int = "Door " + var_333_string;
		var_341_int = var_339_int + " not found";
		Trace(var_341_int);
	} else {
		@@var_336_object:SetProperty("locked", var_334_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_8877(var_689_bool)
{
	var_691_int = 0; var_692_string = "";
	func_7845(var_691_int, "d3q01");
	var_694_bool = var_691_int == (int)3;
	if(var_694_bool != 0) {
		var_689_bool = 1;
		return 0;
	}
	var_689_bool = 0;
	return 0;
}


func_2223(var_2_object, var_679_string)
{
	var_680_bool = 0;
	func_7933(var_680_bool);
	var_681_bool = var_680_bool == 0; //@nz
	if(var_681_bool != 0) {
		return 0;
	}
	var_682_bool = var_679_string == var_2_object;
	if(var_682_bool != 0) {
		return 0;
	}
	var_683_string = ""; var_684_bool = 0;
	var_679_string = var_683_string;
	var_686_bool = var_679_string == "";
	if(var_686_bool != 0) {
		var_684_bool = 0;
	} else {
		var_684_bool = 1;
	}
	func_7792(var_683_string, var_684_bool);
	var_2_object = var_679_string;
	return 0;
	
}


func_9398()
{
	var_109_object = Obj(); var_110_object = Obj();
	CreateDiaryEntry(var_110_object, (int)87, (int)1, (int)512169);
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0;
	var_110_object = var_115_object;
	func_9515(var_114_bool, var_115_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8889(var_695_bool)
{
	var_697_int = 0; var_698_string = "";
	func_7845(var_697_int, "ood3BigVlad1");
	var_700_bool = var_697_int == (int)0;
	if(var_700_bool != 0) {
		var_695_bool = 1;
		return 0;
	}
	var_695_bool = 0;
	return 0;
}


func_8378()
{
	var_63_object = Obj(); var_64_object = Obj();
	SetVariable("d5q01", (int)2);
	func_9543(Obj());
	var_67_object = var_64_object;
	var_78_float = 0;
	func_7886(var_78_float);
	@@var_64_object:AddMark("d5q01BigVladGotoAlexandr", "pt_map_alexandr", (int)1, (int)511957, var_78_float);
	var_85_float = 0;
	func_7886(var_85_float);
	@@var_64_object:AddMark("d5q01BigVladGotoLara", "pt_map_lara", (int)1, (int)511959, var_85_float);
	func_9463();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7867(var_863_bool, var_864_object, var_865_string)
{
	var_866_int = 0; var_867_bool = 0; var_868_int = 0; var_869_bool = 0;
	GetInvItemByName(var_868_int, var_865_string);
	@@var_864_object:HasItem(var_868_int, var_869_bool);
	var_869_bool = var_863_bool;
	return 4;
}


func_7359(var_0_object, var_1_object, var_2_object, var_3_string, var_1336_object, var_1337_object)
{
	var_0_object = var_1337_object;
	var_1_object = var_1336_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1343_string = "";
		func_7417(var_1337_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_7387;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1cc3";
	}
Label_7387:
	var_1358_bool = 0;
	func_7933(var_1358_bool);
	if(var_1358_bool != 0) {

	Label_7391:
		lshWaitForAnimEnd();
		var_1359_string = var_3_string;
		if(var_1359_string != 0) {
		} else {
			var_1360_string = "";
			var_1360_string = var_2_object;
			func_7776(var_1360_string);
			goto Label_7391;
	}
		PlayAnimation("all", "idle");

	Label_7406:
		WaitForAnimEnd();
		var_1363_string = var_3_string;
		if(var_1363_string != 0) {
			goto Label_7416;
		}
		PlayAnimation("all", "idle");
		goto Label_7406;
	}
	goto Label_7416;
	
Label_7416:
	return 0;
	
}


func_7874(var_88_bool, var_89_string, var_90_string)
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


func_9411()
{
	var_194_object = Obj(); var_195_object = Obj();
	CreateDiaryEntry(var_195_object, (int)89, (int)1, (int)512171);
	var_199_bool = 0; var_200_object = Obj(); var_201_int = 0;
	var_195_object = var_200_object;
	func_9515(var_199_bool, var_200_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8901(var_733_bool)
{
	var_735_int = 0; var_736_string = "";
	func_7845(var_735_int, "ood3BigVlad2");
	var_738_bool = var_735_int == (int)0;
	if(var_738_bool != 0) {
		var_733_bool = 1;
		return 0;
	}
	var_733_bool = 0;
	return 0;
}


func_1223(var_0_object, var_1_object, var_2_object, var_3_string, var_536_object, var_537_object)
{
	var_0_object = var_537_object;
	var_1_object = var_536_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_543_bool = 0;
		var_543_bool = 0;
		var_544_bool = 0; var_545_object = Obj();
		var_545_object = var_1_object;
		func_8795(var_545_object);
		if(var_544_bool != 0) {
			var_550_bool = 0; var_551_object = Obj();
			var_551_object = var_1_object;
			func_8853(var_551_object);
			if(var_550_bool != 0) {
				var_543_bool = 1;
			}
		}
		if(var_543_bool != 0) {
			var_556_object = Obj(); var_557_object = Obj();
			var_556_object = var_1_object;
			var_557_object = var_0_object;
			func_8006();
			var_560_string = "";
			func_1397(var_537_object, "Neutral");
			@@@var_0_object:SetMessage((int)506797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506810, (int)7493, (int)7505);
			@@@var_0_object:AddReply((int)506798, (int)7491, (int)7490);
			@@@var_0_object:AddReply((int)506809, (int)7491, (int)7503);
		} else {
				var_586_bool = 0;
				var_586_bool = 0;
				var_587_bool = 0; var_588_object = Obj();
				var_588_object = var_1_object;
				func_8807(var_588_object);
				if(var_587_bool != 0) {
					var_593_bool = 0; var_594_object = Obj();
					var_594_object = var_1_object;
					func_8865(var_594_object);
					if(var_593_bool != 0) {
						var_586_bool = 1;
					}
				}
				if(var_586_bool != 0) {
					var_599_object = Obj(); var_600_object = Obj();
					var_599_object = var_1_object;
					var_600_object = var_0_object;
					func_8012();
					var_603_string = "";
					func_1397(var_537_object, "Neutral");
					@@@var_0_object:SetMessage((int)506765);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)506777, (int)7457, (int)7467);
					@@@var_0_object:AddReply((int)506766, (int)7459, (int)7456);
					goto Label_1367;
				}
				var_611_string = "";
				func_1397(var_537_object, "Neutral");
				@@@var_0_object:SetMessage((int)506794);
				@@@var_0_object:ClearReplies();
				var_613_bool = 0;
				var_613_bool = 0;
				var_614_bool = 0; var_615_object = Obj();
				var_615_object = var_1_object;
				func_8819(var_615_object);
				if(var_614_bool != 0) {
					var_620_bool = 0; var_621_object = Obj();
					var_621_object = var_1_object;
					func_8853(var_621_object);
					if(var_620_bool != 0) {
						var_613_bool = 1;
					}
				}
				if(var_613_bool != 0) {
					@@@var_0_object:AddReply((int)507084, (int)7809, (int)7807);
				}
				var_625_bool = 0;
				var_625_bool = 0;
				var_626_bool = 0; var_627_object = Obj();
				var_627_object = var_1_object;
				func_8831(var_627_object);
				if(var_626_bool != 0) {
					var_632_bool = 0; var_633_object = Obj();
					var_633_object = var_1_object;
					func_9271(var_633_object);
					if(var_632_bool != 0) {
						var_625_bool = 1;
					}
				}
				if(var_625_bool != 0) {
					@@@var_0_object:AddReply((int)506795, (int)7469, (int)7487);
				}
				@@@var_0_object:AddReply((int)507535, (int)-1, (int)8317);
				goto Label_1367;
		}
	}
Label_1367:
	var_578_bool = 0;
	func_7933(var_578_bool);
	if(var_578_bool != 0) {

	Label_1371:
		lshWaitForAnimEnd();
		var_579_string = var_3_string;
		if(var_579_string != 0) {
		} else {
			var_580_string = "";
			var_580_string = var_2_object;
			func_7776(var_580_string);
			goto Label_1371;
	}
		PlayAnimation("all", "idle");

	Label_1386:
		WaitForAnimEnd();
		var_583_string = var_3_string;
		if(var_583_string != 0) {
			goto Label_1396;
		}
		PlayAnimation("all", "idle");
		goto Label_1386;

	}
	goto Label_1396;
	
Label_1396:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4cb";


func_7886(var_78_float)
{
	var_79_float = 0; var_80_float = 0;
	GetGameTime(var_80_float);
	var_80_float = var_78_float;
	return 2;
}


func_9424()
{
	var_318_object = Obj(); var_319_object = Obj();
	CreateDiaryEntry(var_319_object, (int)90, (int)1, (int)512172);
	var_323_bool = 0; var_324_object = Obj(); var_325_int = 0;
	var_319_object = var_324_object;
	func_9515(var_323_bool, var_324_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8913(var_742_bool)
{
	var_744_int = 0; var_745_string = "";
	func_7845(var_744_int, "ood3BigVlad3");
	var_747_bool = var_744_int == (int)0;
	if(var_747_bool != 0) {
		var_742_bool = 1;
		return 0;
	}
	var_742_bool = 0;
	return 0;
}


func_7891(var_203_int)
{
	var_204_float = 0; var_205_float = 0;
	GetGameTime(var_205_float);
	var_207_int = 0;
	var_207_int = var_205_float / (int)24;
	var_203_int = (int)1 + var_207_int;
	return 2;
}


func_4823(var_0_object, var_921_int, var_922_object)
{
	var_924_object = Obj(); var_925_bool = 0; var_926_int = 0; var_927_bool = 0; var_928_object = Obj(); var_929_bool = 0; var_930_int = 0; var_931_bool = 0;
	var_0_object = var_922_object;
	var_932_bool = 0; var_933_object = Obj(); var_934_float = 0;
	var_922_object = var_933_object;
	func_7551(var_932_bool, var_933_object, (float)70.0);
	var_935_bool = var_932_bool == 0; //@nz
	if(var_935_bool != 0) {
		var_921_int = -2;
		return 8;
	}
	CreateDialog(var_928_object);
	var_936_int = 0;
	func_7927(var_936_int);
	@@var_928_object:SetNPCName(var_936_int);
	var_937_int = 0;
	func_7925(var_937_int);
	@@var_928_object:SetNPCDescription(var_937_int);
	var_938_string = "";
	func_7929(var_938_string);
	@@var_928_object:SetPhoto(var_938_string);
	var_939_string = "";
	func_7931(var_939_string);
	@@var_928_object:SetPhoto2(var_939_string);
	var_940_int = 0;
	func_9593(var_940_int);
	@@var_928_object:SetPlayerName(var_940_int);
	IsOverrideActive(var_929_bool);
	var_941_bool = var_929_bool;
	if(var_941_bool != 0) {
		var_921_int = -2;
		return 8;
	}
	DoDialog(var_928_object);
	var_942_bool = 0; var_943_object = Obj();
	func_7829(Obj());
	var_944_object = var_943_object;
	func_7638(var_942_bool, var_943_object);
	var_945_object = Obj(); var_946_object = Obj();
	var_922_object = var_945_object;
	var_928_object = var_946_object;
	TaskCall(11);
	func_4904(var_947_object, var_948_object, var_949_string, var_950_bool, var_945_object, var_946_object);
	TaskReturn();
	@@var_928_object:IsDialogEnd(var_931_bool);
	
Label_4886:
	var_990_bool = var_931_bool == 0; //@nz
	if(var_990_bool != 0) {
		sync();
		@@var_928_object:IsDialogEnd(var_931_bool);
		goto Label_4886;
	}
	var_922_object = Obj();
	func_7620();
	StopDialog(var_928_object);
	@@var_928_object:GetReturnValue((int)-1);
	var_930_int = var_921_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8410()
{
	SetVariable("ood5BigVlad1", (int)1);
	return 0;
}


func_7900(var_380_bool, var_381_int)
{
	var_382_int = 0;
	func_7891(var_382_int);
	var_380_bool = var_382_int == var_381_int;
	return 0;
}


func_8925(var_724_bool)
{
	var_726_int = 0; var_727_string = "";
	func_7845(var_726_int, "ood3BigVlad4");
	var_729_bool = var_726_int == (int)0;
	if(var_729_bool != 0) {
		var_724_bool = 1;
		return 0;
	}
	var_724_bool = 0;
	return 0;
}


func_9437()
{
	var_254_object = Obj(); var_255_object = Obj();
	CreateDiaryEntry(var_255_object, (int)91, (int)1, (int)512173);
	var_259_bool = 0; var_260_object = Obj(); var_261_int = 0;
	var_255_object = var_260_object;
	func_9515(var_259_bool, var_260_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8416()
{
	SetVariable("ood6BigVlad1", (int)1);
	return 0;
}


func_7906(var_309_bool, var_310_int)
{
	var_311_float = 0; var_312_int = 0; var_313_int = 0; var_314_float = 0; var_315_int = 0; var_316_int = 0;
	GetGameTime(var_314_float);
	var_318_int = 0;
	var_318_int = var_314_float / (int)24;
	var_315_int = (int)1 + var_318_int;
	var_320_bool = var_315_int != var_310_int;
	if(var_320_bool != 0) {
		var_309_bool = 0;
		return 6;
	}
	var_321_int = 0;
	var_314_float = var_321_int;
	var_316_int = var_321_int % (int)24;
	var_309_bool = var_316_int < (int)7;
	return 6;
}


func_8422()
{
	SetVariable("ood6BigVlad2", (int)1);
	return 0;
}


func_8937(var_798_bool)
{
	var_800_int = 0; var_801_string = "";
	func_7845(var_800_int, "d4q01");
	var_803_bool = var_800_int == (int)0;
	if(var_803_bool != 0) {
		var_798_bool = 1;
		return 0;
	}
	var_798_bool = 0;
	return 0;
}


func_9450()
{
	var_176_object = Obj(); var_177_object = Obj();
	CreateDiaryEntry(var_177_object, (int)713, (int)1, (int)536321);
	var_181_bool = 0; var_182_object = Obj(); var_183_int = 0;
	var_177_object = var_182_object;
	func_9515(var_181_bool, var_182_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8428()
{
	SetVariable("KnowBigVlad", (int)1);
	return 0;
}


func_6897(var_0_object, var_1_object, var_2_object, var_3_string, var_1277_object, var_1278_object)
{
	var_0_object = var_1278_object;
	var_1_object = var_1277_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1284_string = "";
		func_6960(var_1278_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_6930;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1af5";
	}
Label_6930:
	var_1302_bool = 0;
	func_7933(var_1302_bool);
	if(var_1302_bool != 0) {

	Label_6934:
		lshWaitForAnimEnd();
		var_1303_string = var_3_string;
		if(var_1303_string != 0) {
		} else {
			var_1304_string = "";
			var_1304_string = var_2_object;
			func_7776(var_1304_string);
			goto Label_6934;
	}
		PlayAnimation("all", "idle");

	Label_6949:
		WaitForAnimEnd();
		var_1307_string = var_3_string;
		if(var_1307_string != 0) {
			goto Label_6959;
		}
		PlayAnimation("all", "idle");
		goto Label_6949;
	}
	goto Label_6959;
	
Label_6959:
	return 0;
	
}


func_8434()
{
	SetVariable("d8q01BigVladIsVictim", (int)1);
	return 0;
}


func_7925(var_136_int)
{
	var_136_int = 515531;
	return 0;
}


func_8949(var_804_bool)
{
	var_806_int = 0; var_807_string = "";
	func_7845(var_806_int, "ood4BigVlad1");
	var_809_bool = var_806_int == (int)0;
	if(var_809_bool != 0) {
		var_804_bool = 1;
		return 0;
	}
	var_804_bool = 0;
	return 0;
}


func_7927(var_135_int)
{
	var_135_int = 502857;
	return 0;
}


func_8440()
{
	SetVariable("ood8BigVlad1", (int)1);
	return 0;
}


func_7929(var_137_string)
{
	var_137_string = "ui/NPC_BigVlad.png";
	return 0;
}


func_7417(var_2_object, var_1343_string)
{
	var_1344_bool = 0;
	func_7933(var_1344_bool);
	var_1345_bool = var_1344_bool == 0; //@nz
	if(var_1345_bool != 0) {
		return 0;
	}
	var_1346_bool = var_1343_string == var_2_object;
	if(var_1346_bool != 0) {
		return 0;
	}
	var_1347_string = ""; var_1348_bool = 0;
	var_1343_string = var_1347_string;
	var_1350_bool = var_1343_string == "";
	if(var_1350_bool != 0) {
		var_1348_bool = 0;
	} else {
		var_1348_bool = 1;
	}
	func_7792(var_1347_string, var_1348_bool);
	var_2_object = var_1343_string;
	return 0;
	
}


func_7931(var_138_string)
{
	var_138_string = "ui/NPC_BigVlad_b.png";
	return 0;
}


func_9463()
{
	var_86_object = Obj(); var_87_object = Obj();
	CreateDiaryEntry(var_87_object, (int)141, (int)1, (int)515341);
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0;
	var_87_object = var_92_object;
	func_9515(var_91_bool, var_92_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7933(var_130_bool)
{
	var_130_bool = 1;
	return 0;
}


func_8446()
{
	SetVariable("ood8BigVlad2", (int)1);
	return 0;
}


func_7935()
{
	var_90_bool = 0;
	var_90_bool = 0;
	var_91_int = 0; var_92_string = "";
	func_7845(var_91_int, "d2q01BigVladVisit");
	var_96_bool = var_91_int != (int)0;
	if(var_96_bool != 0) {
		var_97_int = 0; var_98_string = "";
		func_7845(var_97_int, "d2q01GeorgVisit");
		var_100_bool = var_97_int != (int)0;
		if(var_100_bool != 0) {
			var_90_bool = 1;
		}
	}
	if(var_90_bool != 0) {
		func_9346();
	}
	return 0;
}


func_8961(var_837_bool)
{
	var_839_int = 0; var_840_string = "";
	func_7845(var_839_int, "d4q01");
	var_842_bool = var_839_int == (int)3;
	if(var_842_bool != 0) {
		var_837_bool = 1;
		return 0;
	}
	var_837_bool = 0;
	return 0;
}


func_8452()
{
	SetVariable("ood8BigVlad3", (int)1);
	return 0;
}


func_9476()
{
	var_95_object = Obj(); var_96_object = Obj();
	CreateDiaryEntry(var_96_object, (int)115, (int)1, (int)513738);
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0;
	var_96_object = var_101_object;
	func_9515(var_100_bool, var_101_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3334(var_0_object, var_766_int, var_767_object)
{
	var_769_object = Obj(); var_770_bool = 0; var_771_int = 0; var_772_bool = 0; var_773_object = Obj(); var_774_bool = 0; var_775_int = 0; var_776_bool = 0;
	var_0_object = var_767_object;
	var_777_bool = 0; var_778_object = Obj(); var_779_float = 0;
	var_767_object = var_778_object;
	func_7551(var_777_bool, var_778_object, (float)70.0);
	var_780_bool = var_777_bool == 0; //@nz
	if(var_780_bool != 0) {
		var_766_int = -2;
		return 8;
	}
	CreateDialog(var_773_object);
	var_781_int = 0;
	func_7927(var_781_int);
	@@var_773_object:SetNPCName(var_781_int);
	var_782_int = 0;
	func_7925(var_782_int);
	@@var_773_object:SetNPCDescription(var_782_int);
	var_783_string = "";
	func_7929(var_783_string);
	@@var_773_object:SetPhoto(var_783_string);
	var_784_string = "";
	func_7931(var_784_string);
	@@var_773_object:SetPhoto2(var_784_string);
	var_785_int = 0;
	func_9593(var_785_int);
	@@var_773_object:SetPlayerName(var_785_int);
	IsOverrideActive(var_774_bool);
	var_786_bool = var_774_bool;
	if(var_786_bool != 0) {
		var_766_int = -2;
		return 8;
	}
	DoDialog(var_773_object);
	var_787_bool = 0; var_788_object = Obj();
	func_7829(Obj());
	var_789_object = var_788_object;
	func_7638(var_787_bool, var_788_object);
	var_790_object = Obj(); var_791_object = Obj();
	var_767_object = var_790_object;
	var_773_object = var_791_object;
	TaskCall(9);
	func_3415(var_792_object, var_793_object, var_794_string, var_795_bool, var_790_object, var_791_object);
	TaskReturn();
	@@var_773_object:IsDialogEnd(var_776_bool);
	
Label_3397:
	var_917_bool = var_776_bool == 0; //@nz
	if(var_917_bool != 0) {
		sync();
		@@var_773_object:IsDialogEnd(var_776_bool);
		goto Label_3397;
	}
	var_767_object = Obj();
	func_7620();
	StopDialog(var_773_object);
	@@var_773_object:GetReturnValue((int)-1);
	var_775_int = var_766_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8458()
{
	SetVariable("ood6BigVlad3", (int)1);
	return 0;
}


func_8973(var_843_bool)
{
	var_845_int = 0; var_846_string = "";
	func_7845(var_845_int, "ood4BigVlad2");
	var_848_bool = var_845_int == (int)0;
	if(var_848_bool != 0) {
		var_843_bool = 1;
		return 0;
	}
	var_843_bool = 0;
	return 0;
}


func_8464()
{
	var_69_object = Obj(); var_70_object = Obj();
	func_9543(Obj());
	var_71_object = var_70_object;
	var_82_float = 0;
	func_7886(var_82_float);
	@@var_70_object:AddMark("d6q01BigVladGotoAnna", "pt_map_anna", (int)1, (int)515390, var_82_float);
	var_89_float = 0;
	func_7886(var_89_float);
	@@var_70_object:AddMark("d6q01BigVladGotoOspina", "pt_map_ospina", (int)1, (int)515389, var_89_float);
	var_94_float = 0;
	func_7886(var_94_float);
	@@var_70_object:AddMark("d6q01BigVladGotoAnnaOspinaSelf", "pt_map_bigvlad", (int)1, (int)515391, var_94_float);
	func_9476();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9489()
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateDiaryEntry(var_147_object, (int)264, (int)2, (int)521051);
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0;
	var_147_object = var_152_object;
	func_9515(var_151_bool, var_152_object, (int)102);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7958()
{
	SetVariable("ood1BigVlad1", (int)1);
	return 0;
}


func_8985(var_860_bool, var_861_object)
{
	var_862_bool = 0;
	var_862_bool = 1;
	var_863_bool = 0; var_864_object = Obj(); var_865_string = "";
	var_861_object = var_864_object;
	func_7867(var_863_bool, var_864_object, "d4q01_sobor_key");
	var_870_bool = var_863_bool == 0; //@nz
	if(var_870_bool != 1) {
		var_871_bool = 0; var_872_object = Obj(); var_873_string = "";
		var_861_object = var_872_object;
		func_7867(var_871_bool, var_872_object, "d4q01_theater_key");
		var_874_bool = var_871_bool == 0; //@nz
		if(var_874_bool != 1) {
			var_862_bool = 0;
		}
	}
	if(var_862_bool != 0) {
		var_875_int = 0; var_876_string = "";
		func_7845(var_875_int, "d4q01");
		var_878_bool = var_875_int == (int)4;
		if(var_878_bool != 0) {
			var_860_bool = 1;
			return 0;
		}
	}
	var_860_bool = 0;
	return 0;
}


func_7964()
{
	func_9359();
	var_126_bool = 0; var_127_string = ""; var_128_string = "";
	func_7874(var_126_bool, "quest_d3_01", "fail");
	return 0;
}


func_9502(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj();
	GetDiaryRoot(var_81_object);
	var_82_bool = var_81_object == 0; //@nz
	if(var_82_bool != 0) {
		Trace("Can't retrieve diary root");
		var_79_object = 0;
		return 2;
	}
	var_81_object = var_79_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7974()
{
	SetVariable("ood1BigVlad2", (int)1);
	return 0;
}


func_4904(var_0_object, var_1_object, var_2_object, var_3_string, var_945_object, var_946_object)
{
	var_0_object = var_946_object;
	var_1_object = var_945_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_952_string = "";
		func_4977(var_946_object, "Neutral");
		@@@var_0_object:SetMessage((int)511558);
		@@@var_0_object:ClearReplies();
		var_961_bool = 0; var_962_object = Obj();
		var_962_object = var_1_object;
		func_9055(var_962_object);
		if(var_961_bool != 0) {
			@@@var_0_object:AddReply((int)511559, (int)12754, (int)12753);
		}
		var_970_bool = 0; var_971_object = Obj();
		var_971_object = var_1_object;
		func_9067(var_971_object);
		if(var_970_bool != 0) {
			@@@var_0_object:AddReply((int)511570, (int)12765, (int)12764);
		}
		@@@var_0_object:AddReply((int)511589, (int)-1, (int)12784);
		goto Label_4947;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x132c";
	}
Label_4947:
	var_982_bool = 0;
	func_7933(var_982_bool);
	if(var_982_bool != 0) {

	Label_4951:
		lshWaitForAnimEnd();
		var_983_string = var_3_string;
		if(var_983_string != 0) {
		} else {
			var_984_string = "";
			var_984_string = var_2_object;
			func_7776(var_984_string);
			goto Label_4951;
	}
		PlayAnimation("all", "idle");

	Label_4966:
		WaitForAnimEnd();
		var_987_string = var_3_string;
		if(var_987_string != 0) {
			goto Label_4976;
		}
		PlayAnimation("all", "idle");
		goto Label_4966;
	}
	goto Label_4976;
	
Label_4976:
	return 0;
	
}


func_297(var_0_object, var_994_int, var_995_object)
{
	var_997_object = Obj(); var_998_bool = 0; var_999_int = 0; var_1000_bool = 0; var_1001_object = Obj(); var_1002_bool = 0; var_1003_int = 0; var_1004_bool = 0;
	var_0_object = var_995_object;
	var_1005_bool = 0; var_1006_object = Obj(); var_1007_float = 0;
	var_995_object = var_1006_object;
	func_7551(var_1005_bool, var_1006_object, (float)70.0);
	var_1008_bool = var_1005_bool == 0; //@nz
	if(var_1008_bool != 0) {
		var_994_int = -2;
		return 8;
	}
	CreateDialog(var_1001_object);
	var_1009_int = 0;
	func_7927(var_1009_int);
	@@var_1001_object:SetNPCName(var_1009_int);
	var_1010_int = 0;
	func_7925(var_1010_int);
	@@var_1001_object:SetNPCDescription(var_1010_int);
	var_1011_string = "";
	func_7929(var_1011_string);
	@@var_1001_object:SetPhoto(var_1011_string);
	var_1012_string = "";
	func_7931(var_1012_string);
	@@var_1001_object:SetPhoto2(var_1012_string);
	var_1013_int = 0;
	func_9593(var_1013_int);
	@@var_1001_object:SetPlayerName(var_1013_int);
	IsOverrideActive(var_1002_bool);
	var_1014_bool = var_1002_bool;
	if(var_1014_bool != 0) {
		var_994_int = -2;
		return 8;
	}
	DoDialog(var_1001_object);
	var_1015_bool = 0; var_1016_object = Obj();
	func_7829(Obj());
	var_1017_object = var_1016_object;
	func_7638(var_1015_bool, var_1016_object);
	var_1018_object = Obj(); var_1019_object = Obj();
	var_995_object = var_1018_object;
	var_1001_object = var_1019_object;
	TaskCall(3);
	func_378(var_1020_object, var_1021_object, var_1022_string, var_1023_bool, var_1018_object, var_1019_object);
	TaskReturn();
	@@var_1001_object:IsDialogEnd(var_1004_bool);
	
Label_360:
	var_1134_bool = var_1004_bool == 0; //@nz
	if(var_1134_bool != 0) {
		sync();
		@@var_1001_object:IsDialogEnd(var_1004_bool);
		goto Label_360;
	}
	var_995_object = Obj();
	func_7620();
	StopDialog(var_1001_object);
	@@var_1001_object:GetReturnValue((int)-1);
	var_1003_int = var_994_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9515(var_70_bool, var_71_object, var_72_int)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0;
	func_9502(Obj());
	var_79_object = var_76_object;
	@@var_76_object:Find(var_72_int, var_77_object);
	var_84_bool = var_77_object == 0; //@nz
	if(var_84_bool != 0) {
		var_86_int = "Can't find diary parent with id: " + var_72_int;
		Trace(var_86_int);
		var_70_bool = 0;
		return 6;
	}
	@@var_77_object:AddChild(var_71_object);
	SendWorldWndMessage((int)7);
	@@var_71_object:GetCategory(var_78_int);
	SetDiarySection(var_78_int);
	var_70_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_7980()
{
	var_155_object = Obj(); var_156_object = Obj();
	func_9543(Obj());
	var_157_object = var_156_object;
	var_162_float = 0;
	func_7886(var_162_float);
	@@var_156_object:AddMark("d5q01BigVladGotoLara", "pt_map_lara", (int)1, (int)511959, var_162_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6960(var_2_object, var_1284_string)
{
	var_1285_bool = 0;
	func_7933(var_1285_bool);
	var_1286_bool = var_1285_bool == 0; //@nz
	if(var_1286_bool != 0) {
		return 0;
	}
	var_1287_bool = var_1284_string == var_2_object;
	if(var_1287_bool != 0) {
		return 0;
	}
	var_1288_string = ""; var_1289_bool = 0;
	var_1284_string = var_1288_string;
	var_1291_bool = var_1284_string == "";
	if(var_1291_bool != 0) {
		var_1289_bool = 0;
	} else {
		var_1289_bool = 1;
	}
	func_7792(var_1288_string, var_1289_bool);
	var_2_object = var_1284_string;
	return 0;
	
}


func_8501()
{
	var_217_object = Obj(); var_218_object = Obj(); var_219_object = Obj(); var_220_object = Obj();
	func_9543(Obj());
	var_221_object = var_219_object;
	@@var_219_object:FindMark(var_220_object, "d4q01BigVladGotoLara");
	var_223_object = var_220_object;
	if(var_223_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d8q01MladVladgotoOspina");
	var_225_object = var_220_object;
	if(var_225_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01BigVladGotoSklad");
	var_227_object = var_220_object;
	if(var_227_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01BigVladGotoSobor");
	var_229_object = var_220_object;
	if(var_229_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d8q01MladVladGotoMat");
	var_231_object = var_220_object;
	if(var_231_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01BigVladGotoTheater");
	var_233_object = var_220_object;
	if(var_233_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01LaraGotoMladVlad");
	var_235_object = var_220_object;
	if(var_235_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01LaraGotoMladVladSelf");
	var_237_object = var_220_object;
	if(var_237_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01LaraGotoOspina");
	var_239_object = var_220_object;
	if(var_239_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d8q01MatGotoBoiny");
	var_241_object = var_220_object;
	if(var_241_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01MladVladGotoBigVlad");
	var_243_object = var_220_object;
	if(var_243_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d8q04MladVladGotoMark");
	var_245_object = var_220_object;
	if(var_245_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01MladVladGotoOspina");
	var_247_object = var_220_object;
	if(var_247_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01OspinaGotoLara");
	var_249_object = var_220_object;
	if(var_249_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01WastedMale");
	var_251_object = var_220_object;
	if(var_251_object != 0) {
		@@var_220_object:Remove();
	}
	@@var_219_object:FindMark(var_220_object, "d4q01Whitemask");
	var_253_object = var_220_object;
	if(var_253_object != 0) {
		@@var_220_object:Remove();
	}
	func_9437();
	var_262_bool = 0; var_263_string = ""; var_264_string = "";
	func_7874(var_262_bool, "quest_d4_01", "failed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9015(var_889_bool, var_890_object)
{
	var_891_bool = 0;
	var_891_bool = 0;
	var_892_bool = 0; var_893_object = Obj(); var_894_string = "";
	var_890_object = var_893_object;
	func_7867(var_892_bool, var_893_object, "d4q01_sobor_key");
	if(var_892_bool != 0) {
		var_895_bool = 0; var_896_object = Obj(); var_897_string = "";
		var_890_object = var_896_object;
		func_7867(var_895_bool, var_896_object, "d4q01_theater_key");
		if(var_895_bool != 0) {
			var_891_bool = 1;
		}
	}
	if(var_891_bool != 0) {
		var_898_int = 0; var_899_string = "";
		func_7845(var_898_int, "d4q01");
		var_901_bool = var_898_int == (int)4;
		if(var_901_bool != 0) {
			var_889_bool = 1;
			return 0;
		}
	}
	var_889_bool = 0;
	return 0;
}


func_7996()
{
	func_9450();
	var_184_bool = 0; var_185_string = ""; var_186_string = "";
	func_7874(var_184_bool, "quest_d5_01", "fail");
	return 0;
}


func_7488()
{
	var_56_bool = 0;
	func_7546(var_56_bool);
	var_59_bool = var_56_bool == 0; //@nz
	if(var_59_bool != 0) {
		Hold();
	}
Label_7495:
	var_60_string = "";
	func_7776("Neutral");
	lshWaitForAnimEnd();
	goto Label_7495;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_8006()
{
	SetVariable("ood2BigVlad1", (int)1);
	return 0;
}


func_9543(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj();
	GetMainOutdoorScene(var_70_object);
	var_72_bool = var_70_object == 0; //@ne
	if(var_72_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_71_object = 0;
		var_71_object = var_67_object;
		return 4;
	}
	@@var_70_object:GetMap(var_71_object);
	var_71_object = var_67_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8012()
{
	SetVariable("ood2BigVlad2", (int)1);
	return 0;
}


func_5457(var_0_object, var_1138_int, var_1139_object)
{
	var_1141_object = Obj(); var_1142_bool = 0; var_1143_int = 0; var_1144_bool = 0; var_1145_object = Obj(); var_1146_bool = 0; var_1147_int = 0; var_1148_bool = 0;
	var_0_object = var_1139_object;
	var_1149_bool = 0; var_1150_object = Obj(); var_1151_float = 0;
	var_1139_object = var_1150_object;
	func_7551(var_1149_bool, var_1150_object, (float)70.0);
	var_1152_bool = var_1149_bool == 0; //@nz
	if(var_1152_bool != 0) {
		var_1138_int = -2;
		return 8;
	}
	CreateDialog(var_1145_object);
	var_1153_int = 0;
	func_7927(var_1153_int);
	@@var_1145_object:SetNPCName(var_1153_int);
	var_1154_int = 0;
	func_7925(var_1154_int);
	@@var_1145_object:SetNPCDescription(var_1154_int);
	var_1155_string = "";
	func_7929(var_1155_string);
	@@var_1145_object:SetPhoto(var_1155_string);
	var_1156_string = "";
	func_7931(var_1156_string);
	@@var_1145_object:SetPhoto2(var_1156_string);
	var_1157_int = 0;
	func_9593(var_1157_int);
	@@var_1145_object:SetPlayerName(var_1157_int);
	IsOverrideActive(var_1146_bool);
	var_1158_bool = var_1146_bool;
	if(var_1158_bool != 0) {
		var_1138_int = -2;
		return 8;
	}
	DoDialog(var_1145_object);
	var_1159_bool = 0; var_1160_object = Obj();
	func_7829(Obj());
	var_1161_object = var_1160_object;
	func_7638(var_1159_bool, var_1160_object);
	var_1162_object = Obj(); var_1163_object = Obj();
	var_1139_object = var_1162_object;
	var_1145_object = var_1163_object;
	TaskCall(13);
	func_5538(var_1164_object, var_1165_object, var_1166_string, var_1167_bool, var_1162_object, var_1163_object);
	TaskReturn();
	@@var_1145_object:IsDialogEnd(var_1148_bool);
	
Label_5520:
	var_1249_bool = var_1148_bool == 0; //@nz
	if(var_1249_bool != 0) {
		sync();
		@@var_1145_object:IsDialogEnd(var_1148_bool);
		goto Label_5520;
	}
	var_1139_object = Obj();
	func_7620();
	StopDialog(var_1145_object);
	@@var_1145_object:GetReturnValue((int)-1);
	var_1147_int = var_1138_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8018()
{
	SetVariable("ood2BigVlad3", (int)1);
	return 0;
}


func_9043(var_902_bool)
{
	var_904_int = 0; var_905_string = "";
	func_7845(var_904_int, "ood4BigVlad3");
	var_907_bool = var_904_int == (int)0;
	if(var_907_bool != 0) {
		var_902_bool = 1;
		return 0;
	}
	var_902_bool = 0;
	return 0;
}


func_3415(var_0_object, var_1_object, var_2_object, var_3_string, var_790_object, var_791_object)
{
	var_0_object = var_791_object;
	var_1_object = var_790_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_797_bool = 0;
		var_797_bool = 0;
		var_798_bool = 0; var_799_object = Obj();
		var_799_object = var_1_object;
		func_8937(var_799_object);
		if(var_798_bool != 0) {
			var_804_bool = 0; var_805_object = Obj();
			var_805_object = var_1_object;
			func_8949(var_805_object);
			if(var_804_bool != 0) {
				var_797_bool = 1;
			}
		}
		if(var_797_bool != 0) {
			var_810_object = Obj(); var_811_object = Obj();
			var_810_object = var_1_object;
			var_811_object = var_0_object;
			func_8629();
			var_814_string = "";
			func_3574(var_791_object, "Neutral");
			@@@var_0_object:SetMessage((int)510811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510812, (int)11147, (int)11952);
		} else {
				var_834_string = "";
				func_3574(var_791_object, "Neutral");
				@@@var_0_object:SetMessage((int)510836);
				@@@var_0_object:ClearReplies();
				var_836_bool = 0;
				var_836_bool = 0;
				var_837_bool = 0; var_838_object = Obj();
				var_838_object = var_1_object;
				func_8961(var_838_object);
				if(var_837_bool != 0) {
					var_843_bool = 0; var_844_object = Obj();
					var_844_object = var_1_object;
					func_8973(var_844_object);
					if(var_843_bool != 0) {
						var_836_bool = 1;
					}
				}
				if(var_836_bool != 0) {
					@@@var_0_object:AddReply((int)510839, (int)11148, (int)11983);
				}
				var_852_bool = 0; var_853_object = Obj();
				var_853_object = var_1_object;
				func_8843(var_852_bool, var_853_object);
				if(var_852_bool != 0) {
					@@@var_0_object:AddReply((int)510838, (int)10519, (int)11982);
				}
				var_859_bool = 0;
				var_859_bool = 0;
				var_860_bool = 0; var_861_object = Obj();
				var_861_object = var_1_object;
				func_8985(var_860_bool, var_861_object);
				if(var_860_bool != 0) {
					var_879_bool = 0; var_880_object = Obj();
					var_880_object = var_1_object;
					func_8783(var_880_object);
					if(var_879_bool != 0) {
						var_859_bool = 1;
					}
				}
				if(var_859_bool != 0) {
					@@@var_0_object:AddReply((int)511508, (int)12709, (int)12708);
				}
				var_888_bool = 0;
				var_888_bool = 0;
				var_889_bool = 0; var_890_object = Obj();
				var_890_object = var_1_object;
				func_9015(var_889_bool, var_890_object);
				if(var_889_bool != 0) {
					var_902_bool = 0; var_903_object = Obj();
					var_903_object = var_1_object;
					func_9043(var_903_object);
					if(var_902_bool != 0) {
						var_888_bool = 1;
					}
				}
				if(var_888_bool != 0) {
					@@@var_0_object:AddReply((int)510837, (int)10553, (int)11981);
				}
				@@@var_0_object:AddReply((int)511480, (int)-1, (int)12686);
				@@@var_0_object:AddReply((int)533048, (int)-1, (int)34560);
				goto Label_3544;
		}
	}
Label_3544:
	var_826_bool = 0;
	func_7933(var_826_bool);
	if(var_826_bool != 0) {

	Label_3548:
		lshWaitForAnimEnd();
		var_827_string = var_3_string;
		if(var_827_string != 0) {
		} else {
			var_828_string = "";
			var_828_string = var_2_object;
			func_7776(var_828_string);
			goto Label_3548;
	}
		PlayAnimation("all", "idle");

	Label_3563:
		WaitForAnimEnd();
		var_831_string = var_3_string;
		if(var_831_string != 0) {
			goto Label_3573;
		}
		PlayAnimation("all", "idle");
		goto Label_3563;

	}
	goto Label_3573;
	
Label_3573:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd5b";


func_8024()
{
	SetVariable("ood2BigVlad4", (int)1);
	return 0;
}


func_9560(var_119_object, var_120_string, var_121_float)
{
	var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_object = Obj(); var_126_bool = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_object = Obj(); var_130_bool = 0;
	GetMainOutdoorScene(var_129_object);
	var_131_bool = var_129_object == 0; //@ne
	if(var_131_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_129_object:GetLocator(var_120_string, var_130_bool, var_127_cvector, var_128_cvector);
	var_133_bool = var_130_bool == 0; //@nz
	if(var_133_bool != 0) {
		var_135_int = "Warning: outdoor scene locator " + var_120_string;
		var_137_int = var_135_int + " doesnt exist";
		Trace(var_137_int);
	}
	@@var_129_object:GetMap(var_119_object);
	var_138_bool = var_119_object == 0; //@ne
	if(var_138_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_140_float = GetByIndex(var_127_cvector, 0);
	var_141_float = GetByIndex(var_127_cvector, 2);
	@@var_119_object:SetMapParams(var_140_float, var_141_float, var_121_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_8030()
{
	var_111_bool = 0; var_112_string = ""; var_113_string = "";
	func_7874(var_111_bool, "quest_d5_01", "factory");
	return 0;
}


func_9055(var_961_bool)
{
	var_963_int = 0; var_964_string = "";
	func_7845(var_963_int, "d5q01");
	var_966_bool = var_963_int == (int)1;
	if(var_966_bool != 0) {
		var_961_bool = 1;
		return 0;
	}
	var_961_bool = 0;
	return 0;
}


func_8037()
{
	SetVariable("ood4BigVlad4", (int)1);
	return 0;
}


func_7527(var_63_bool, var_64_cvector)
{
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0;
	GetPosition(var_68_cvector);
	var_69_cvector = var_64_cvector - var_68_cvector;
	var_71_float = GetByIndex(var_69_cvector, 0);
	var_72_float = GetByIndex(var_69_cvector, 2);
	Rotate(var_71_float, var_72_float, var_70_bool);
	var_70_bool = var_63_bool;
	return 6;
}


func_8043()
{
	SetVariable("d2q01BigVladVisit", (int)1);
	func_9333();
	return 0;
}


func_9067(var_970_bool)
{
	var_972_int = 0; var_973_string = "";
	func_7845(var_972_int, "ood5BigVlad1");
	var_975_bool = var_972_int == (int)0;
	if(var_975_bool != 0) {
		var_970_bool = 1;
		return 0;
	}
	var_970_bool = 0;
	return 0;
}


func_4977(var_2_object, var_952_string)
{
	var_953_bool = 0;
	func_7933(var_953_bool);
	var_954_bool = var_953_bool == 0; //@nz
	if(var_954_bool != 0) {
		return 0;
	}
	var_955_bool = var_952_string == var_2_object;
	if(var_955_bool != 0) {
		return 0;
	}
	var_956_string = ""; var_957_bool = 0;
	var_952_string = var_956_string;
	var_959_bool = var_952_string == "";
	if(var_959_bool != 0) {
		var_957_bool = 0;
	} else {
		var_957_bool = 1;
	}
	func_7792(var_956_string, var_957_bool);
	var_2_object = var_952_string;
	return 0;
	
}


func_7537(var_59_bool, var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
	@@var_60_object:GetPosition(var_62_cvector);
	var_63_bool = 0; var_64_cvector = CVector(0,0,0);
	var_62_cvector = var_64_cvector;
	func_7527(var_63_bool, var_64_cvector);
	var_63_bool = var_59_bool;
	return 2;
}


func_8052()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_1397(var_2_object, var_560_string)
{
	var_561_bool = 0;
	func_7933(var_561_bool);
	var_562_bool = var_561_bool == 0; //@nz
	if(var_562_bool != 0) {
		return 0;
	}
	var_563_bool = var_560_string == var_2_object;
	if(var_563_bool != 0) {
		return 0;
	}
	var_564_string = ""; var_565_bool = 0;
	var_560_string = var_564_string;
	var_567_bool = var_560_string == "";
	if(var_567_bool != 0) {
		var_565_bool = 0;
	} else {
		var_565_bool = 1;
	}
	func_7792(var_564_string, var_565_bool);
	var_2_object = var_560_string;
	return 0;
	
}


func_9079(var_1121_bool)
{
	var_1123_int = 0; var_1124_string = "";
	func_7845(var_1123_int, "d6q02");
	var_1126_bool = var_1123_int == (int)0;
	if(var_1126_bool != 0) {
		var_1121_bool = 1;
		return 0;
	}
	var_1121_bool = 0;
	return 0;
}


func_9593(var_139_int)
{
	var_140_int = 0; var_141_int = 0;
	GetVariable("branch", var_141_int);
	var_144_bool = var_141_int == (int)0;
	if(var_144_bool != 0) {
		var_139_int = 1;
		return 2;
	EMIT "GOTO 0x2588";
	}
	var_146_bool = var_141_int == (int)1;
	if(var_146_bool != 0) {
		var_139_int = 2;
		return 2;
	}
	var_139_int = 3;
	return 2;
}


func_8058()
{
	SetVariable("d3q01HelpBurah", (int)1);
	return 0;
}


func_378(var_0_object, var_1_object, var_2_object, var_3_string, var_1018_object, var_1019_object)
{
	var_0_object = var_1019_object;
	var_1_object = var_1018_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1025_bool = 0;
		var_1025_bool = 0;
		var_1026_bool = 0; var_1027_object = Obj();
		var_1027_object = var_1_object;
		func_9151(var_1027_object);
		var_1032_bool = var_1026_bool == 0; //@nz
		if(var_1032_bool != 0) {
			var_1033_bool = 0; var_1034_object = Obj();
			var_1034_object = var_1_object;
			func_9235(var_1034_object);
			if(var_1033_bool != 0) {
				var_1025_bool = 1;
			}
		}
		if(var_1025_bool != 0) {
			var_1039_object = Obj(); var_1040_object = Obj();
			var_1039_object = var_1_object;
			var_1040_object = var_0_object;
			func_8458();
			var_1043_object = Obj(); var_1044_object = Obj();
			var_1043_object = var_1_object;
			var_1044_object = var_0_object;
			func_8654();
			var_1047_string = "";
			func_554(var_1019_object, "Neutral");
			@@@var_0_object:SetMessage((int)510676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510688, (int)11789, (int)11801);
		} else {
				var_1067_object = Obj(); var_1068_object = Obj();
				var_1067_object = var_1_object;
				var_1068_object = var_0_object;
				func_8654();
				var_1069_string = "";
				func_554(var_1019_object, "Neutral");
				@@@var_0_object:SetMessage((int)512502);
				@@@var_0_object:ClearReplies();
				var_1071_bool = 0;
				var_1071_bool = 0;
				var_1072_bool = 0; var_1073_object = Obj();
				var_1073_object = var_1_object;
				func_9151(var_1073_object);
				if(var_1072_bool != 0) {
					var_1074_bool = 0; var_1075_object = Obj();
					var_1075_object = var_1_object;
					func_9163(var_1075_object);
					if(var_1074_bool != 0) {
						var_1071_bool = 1;
					}
				}
				if(var_1071_bool != 0) {
					@@@var_0_object:AddReply((int)512027, (int)13248, (int)13245);
				}
				var_1083_bool = 0;
				var_1083_bool = 0;
				var_1084_bool = 0;
				var_1084_bool = 0;
				var_1085_bool = 0;
				var_1085_bool = 0;
				var_1086_bool = 0;
				var_1086_bool = 0;
				var_1087_bool = 0;
				var_1087_bool = 0;
				var_1088_bool = 0; var_1089_object = Obj();
				var_1089_object = var_1_object;
				func_9115(var_1089_object);
				if(var_1088_bool != 0) {
					var_1094_bool = 0; var_1095_object = Obj();
					var_1095_object = var_1_object;
					func_9127(var_1095_object);
					if(var_1094_bool != 0) {
						var_1087_bool = 1;
					}
				}
				if(var_1087_bool != 0) {
					var_1100_bool = 0; var_1101_object = Obj();
					var_1101_object = var_1_object;
					func_9091(var_1101_object);
					var_1106_bool = var_1100_bool == 0; //@nz
					if(var_1106_bool != 0) {
						var_1086_bool = 1;
					}
				}
				if(var_1086_bool != 0) {
					var_1107_bool = 0; var_1108_object = Obj();
					var_1108_object = var_1_object;
					func_9103(var_1108_object);
					var_1113_bool = var_1107_bool == 0; //@nz
					if(var_1113_bool != 0) {
						var_1085_bool = 1;
					}
				}
				if(var_1085_bool != 0) {
					var_1114_bool = 0; var_1115_object = Obj();
					var_1115_object = var_1_object;
					func_9139(var_1115_object);
					var_1120_bool = var_1114_bool == 0; //@nz
					if(var_1120_bool != 0) {
						var_1084_bool = 1;
					}
				}
				if(var_1084_bool != 0) {
					var_1121_bool = 0; var_1122_object = Obj();
					var_1122_object = var_1_object;
					func_9079(var_1122_object);
					var_1127_bool = var_1121_bool == 0; //@nz
					if(var_1127_bool != 0) {
						var_1083_bool = 1;
					}
				}
				if(var_1083_bool != 0) {
					@@@var_0_object:AddReply((int)512503, (int)13674, (int)13673);
				}
				@@@var_0_object:AddReply((int)512514, (int)-1, (int)13684);
				goto Label_524;
		}
	}
Label_524:
	var_1059_bool = 0;
	func_7933(var_1059_bool);
	if(var_1059_bool != 0) {

	Label_528:
		lshWaitForAnimEnd();
		var_1060_string = var_3_string;
		if(var_1060_string != 0) {
		} else {
			var_1061_string = "";
			var_1061_string = var_2_object;
			func_7776(var_1061_string);
			goto Label_528;
	}
		PlayAnimation("all", "idle");

	Label_543:
		WaitForAnimEnd();
		var_1064_string = var_3_string;
		if(var_1064_string != 0) {
			goto Label_553;
		}
		PlayAnimation("all", "idle");
		goto Label_543;

	}
	goto Label_553;
	
Label_553:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x17e";


func_7546(var_56_bool)
{
	var_57_bool = 0; var_58_bool = 0;
	IsLoaded(var_58_bool);
	var_58_bool = var_56_bool;
	return 2;
}


func_7551(var_87_bool, var_88_object, var_89_float)
{
	var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_bool = 0; var_107_bool = 0;
	@@var_88_object:GetPosition(var_100_cvector);
	@@var_88_object:GetEyesHeight(var_99_float);
	var_108_float = GetByIndex(var_100_cvector, 1);
	var_108_float = var_108_float + var_99_float;
	SetByIndex(var_100_cvector, 1) = var_108_float;
	GetPosition(var_101_cvector);
	GetEyesHeight(var_99_float);
	var_109_float = GetByIndex(var_101_cvector, 1);
	var_109_float = var_109_float + var_99_float;
	SetByIndex(var_101_cvector, 1) = var_109_float;
	var_102_cvector = var_100_cvector - var_101_cvector;
	var_110_float = GetByIndex(var_102_cvector, 1);
	SetByIndex(var_102_cvector, 1) = (float)0;
	var_111_int = var_102_cvector | var_102_cvector;
	var_112_float = sqrt(var_111_int);
	var_102_cvector = var_102_cvector / var_112_float;
	var_103_cvector = -var_102_cvector;
	var_113_float = var_102_cvector * var_89_float;
	var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0);
	var_115_cvector = var_103_cvector ^ CVector(0.0, 1.0, 0.0);
	func_7835(var_114_cvector, var_115_cvector);
	var_123_float = var_114_cvector * (int)25;
	var_124_int = var_113_float + var_123_float;
	var_104_cvector = var_124_int - CVector(0.0, 10.0, 0.0);
	var_105_cvector = var_101_cvector + var_104_cvector;
	IsOverrideActive(var_106_bool);
	var_126_bool = var_106_bool;
	if(var_126_bool != 0) {
		var_87_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_105_cvector, var_103_cvector, (bool)1);
	var_128_float = GetByIndex(var_104_cvector, 0);
	var_129_float = GetByIndex(var_104_cvector, 2);
	Rotate(var_128_float, var_129_float);
	var_130_bool = 0;
	func_7933(var_130_bool);
	if(var_130_bool != 0) {
	} else {
		HasAnimationTrack(var_107_bool, "head");
		var_132_bool = var_107_bool;
		if(var_132_bool == 0) goto Label_7614;
		LookAsyncCamera("head");
	}
Label_7614:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_87_bool = 1;
	return 18;
	
}


func_8064()
{
	SetVariable("ood3BigVlad2", (int)1);
	return 0;
}


func_9091(var_1100_bool)
{
	var_1102_int = 0; var_1103_string = "";
	func_7845(var_1102_int, "d6q02");
	var_1105_bool = var_1102_int == (int)1000;
	if(var_1105_bool != 0) {
		var_1100_bool = 1;
		return 0;
	}
	var_1100_bool = 0;
	return 0;
}


func_8070()
{
	SetVariable("ood3BigVlad3", (int)1);
	return 0;
}


func_9610(var_73_object)
{
	var_74_bool = GlobalVars[1];
	var_75_bool = var_74_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_76_int = 0; var_77_object = Obj();
		var_73_object = var_77_object;
		TaskCall(0);
		func_0(var_78_object, var_76_int, var_77_object);
		TaskReturn();
		var_308_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_309_bool = 0; var_310_int = 0;
	func_7906(var_309_bool, (int)4);
	if(var_309_bool != 0) {
		var_324_int = 0; var_325_object = Obj();
		var_73_object = var_325_object;
		TaskCall(18);
		func_7075(var_326_object, var_324_int, var_325_object);
		TaskReturn();
		return 0;
	}
	var_380_bool = 0; var_381_int = 0;
	func_7900(var_380_bool, (int)1);
	if(var_380_bool != 0) {
		var_383_int = 0; var_384_object = Obj();
		var_73_object = var_384_object;
		TaskCall(14);
		func_6031(var_385_object, var_383_int, var_384_object);
		TaskReturn();
		return 0;
	}
	var_510_bool = 0; var_511_int = 0;
	func_7900(var_510_bool, (int)2);
	if(var_510_bool != 0) {
		var_512_int = 0; var_513_object = Obj();
		var_73_object = var_513_object;
		TaskCall(4);
		func_1142(var_514_object, var_512_int, var_513_object);
		TaskReturn();
		return 0;
	}
	var_646_bool = 0; var_647_int = 0;
	func_7900(var_646_bool, (int)3);
	if(var_646_bool != 0) {
		var_648_int = 0; var_649_object = Obj();
		var_73_object = var_649_object;
		TaskCall(6);
		func_2031(var_650_object, var_648_int, var_649_object);
		TaskReturn();
		return 0;
	}
	var_764_bool = 0; var_765_int = 0;
	func_7900(var_764_bool, (int)4);
	if(var_764_bool != 0) {
		var_766_int = 0; var_767_object = Obj();
		var_73_object = var_767_object;
		TaskCall(8);
		func_3334(var_768_object, var_766_int, var_767_object);
		TaskReturn();
		return 0;
	}
	var_919_bool = 0; var_920_int = 0;
	func_7900(var_919_bool, (int)5);
	if(var_919_bool != 0) {
		var_921_int = 0; var_922_object = Obj();
		var_73_object = var_922_object;
		TaskCall(10);
		func_4823(var_923_object, var_921_int, var_922_object);
		TaskReturn();
		return 0;
	}
	var_992_bool = 0; var_993_int = 0;
	func_7900(var_992_bool, (int)6);
	if(var_992_bool != 0) {
		var_994_int = 0; var_995_object = Obj();
		var_73_object = var_995_object;
		TaskCall(2);
		func_297(var_996_object, var_994_int, var_995_object);
		TaskReturn();
		return 0;
	}
	var_1136_bool = 0; var_1137_int = 0;
	func_7900(var_1136_bool, (int)8);
	if(var_1136_bool != 0) {
		var_1138_int = 0; var_1139_object = Obj();
		var_73_object = var_1139_object;
		TaskCall(12);
		func_5457(var_1140_object, var_1138_int, var_1139_object);
		TaskReturn();
		return 0;
	}
	var_1251_bool = 0; var_1252_int = 0;
	func_7900(var_1251_bool, (int)12);
	if(var_1251_bool != 0) {
		var_1253_int = 0; var_1254_object = Obj();
		var_73_object = var_1254_object;
		TaskCall(16);
		func_6816(var_1255_object, var_1253_int, var_1254_object);
		TaskReturn();
		return 0;
	}
	var_1312_int = 0; var_1313_object = Obj();
	var_73_object = var_1313_object;
	TaskCall(20);
	func_7278(var_1314_object, var_1312_int, var_1313_object);
	TaskReturn();
	return 0;
}


func_8076()
{
	var_63_object = Obj(); var_64_object = Obj();
	SetVariable("d3q01", (int)6);
	func_9543(Obj());
	var_67_object = var_64_object;
	var_78_float = 0;
	func_7886(var_78_float);
	@@var_64_object:AddMark("d3q01BigVladAgreed", "pt_map_ospina", (int)1, (int)515300, var_78_float);
	func_9372();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9103(var_1107_bool)
{
	var_1109_int = 0; var_1110_string = "";
	func_7845(var_1109_int, "d6q02");
	var_1112_bool = var_1109_int == (int)-1;
	if(var_1112_bool != 0) {
		var_1107_bool = 1;
		return 0;
	}
	var_1107_bool = 0;
	return 0;
}


func_6031(var_0_object, var_383_int, var_384_object)
{
	var_386_object = Obj(); var_387_bool = 0; var_388_int = 0; var_389_bool = 0; var_390_object = Obj(); var_391_bool = 0; var_392_int = 0; var_393_bool = 0;
	var_0_object = var_384_object;
	var_394_bool = 0; var_395_object = Obj(); var_396_float = 0;
	var_384_object = var_395_object;
	func_7551(var_394_bool, var_395_object, (float)70.0);
	var_397_bool = var_394_bool == 0; //@nz
	if(var_397_bool != 0) {
		var_383_int = -2;
		return 8;
	}
	CreateDialog(var_390_object);
	var_398_int = 0;
	func_7927(var_398_int);
	@@var_390_object:SetNPCName(var_398_int);
	var_399_int = 0;
	func_7925(var_399_int);
	@@var_390_object:SetNPCDescription(var_399_int);
	var_400_string = "";
	func_7929(var_400_string);
	@@var_390_object:SetPhoto(var_400_string);
	var_401_string = "";
	func_7931(var_401_string);
	@@var_390_object:SetPhoto2(var_401_string);
	var_402_int = 0;
	func_9593(var_402_int);
	@@var_390_object:SetPlayerName(var_402_int);
	IsOverrideActive(var_391_bool);
	var_403_bool = var_391_bool;
	if(var_403_bool != 0) {
		var_383_int = -2;
		return 8;
	}
	DoDialog(var_390_object);
	var_404_bool = 0; var_405_object = Obj();
	func_7829(Obj());
	var_406_object = var_405_object;
	func_7638(var_404_bool, var_405_object);
	var_407_object = Obj(); var_408_object = Obj();
	var_384_object = var_407_object;
	var_390_object = var_408_object;
	TaskCall(15);
	func_6112(var_409_object, var_410_object, var_411_string, var_412_bool, var_407_object, var_408_object);
	TaskReturn();
	@@var_390_object:IsDialogEnd(var_393_bool);
	
Label_6094:
	var_508_bool = var_393_bool == 0; //@nz
	if(var_508_bool != 0) {
		sync();
		@@var_390_object:IsDialogEnd(var_393_bool);
		goto Label_6094;
	}
	var_384_object = Obj();
	func_7620();
	StopDialog(var_390_object);
	@@var_390_object:GetReturnValue((int)-1);
	var_392_int = var_383_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9115(var_1088_bool)
{
	var_1090_int = 0; var_1091_string = "";
	func_7845(var_1090_int, "ood6BigVlad1");
	var_1093_bool = var_1090_int == (int)0;
	if(var_1093_bool != 0) {
		var_1088_bool = 1;
		return 0;
	}
	var_1088_bool = 0;
	return 0;
}


func_5538(var_0_object, var_1_object, var_2_object, var_3_string, var_1162_object, var_1163_object)
{
	var_0_object = var_1163_object;
	var_1_object = var_1162_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1169_string = "";
		func_5668(var_1163_object, "Neutral");
		@@@var_0_object:SetMessage((int)513660);
		@@@var_0_object:ClearReplies();
		var_1178_bool = 0;
		var_1178_bool = 0;
		var_1179_bool = 0; var_1180_object = Obj();
		var_1180_object = var_1_object;
		func_9199(var_1180_object);
		if(var_1179_bool != 0) {
			var_1185_bool = 0; var_1186_object = Obj();
			var_1186_object = var_1_object;
			func_9175(var_1186_object);
			if(var_1185_bool != 0) {
				var_1178_bool = 1;
			}
		}
		if(var_1178_bool != 0) {
			@@@var_0_object:AddReply((int)513661, (int)14920, (int)14919);
		}
		var_1194_bool = 0;
		var_1194_bool = 0;
		var_1195_bool = 0;
		var_1195_bool = 0;
		var_1196_bool = 0; var_1197_object = Obj();
		var_1197_object = var_1_object;
		func_9211(var_1197_object);
		if(var_1196_bool != 0) {
			var_1202_bool = 0; var_1203_object = Obj();
			var_1203_object = var_1_object;
			func_9187(var_1203_object);
			if(var_1202_bool != 0) {
				var_1195_bool = 1;
			}
		}
		if(var_1195_bool != 0) {
			var_1208_bool = 0; var_1209_object = Obj();
			var_1209_object = var_1_object;
			func_9259(var_1209_object);
			var_1214_bool = var_1208_bool == 0; //@nz
			if(var_1214_bool != 0) {
				var_1194_bool = 1;
			}
		}
		if(var_1194_bool != 0) {
			@@@var_0_object:AddReply((int)513669, (int)14928, (int)14927);
		}
		var_1218_bool = 0;
		var_1218_bool = 0;
		var_1219_bool = 0;
		var_1219_bool = 0;
		var_1220_bool = 0; var_1221_object = Obj();
		var_1221_object = var_1_object;
		func_9187(var_1221_object);
		if(var_1220_bool != 0) {
			var_1222_bool = 0; var_1223_object = Obj();
			var_1223_object = var_1_object;
			func_9223(var_1223_object);
			if(var_1222_bool != 0) {
				var_1219_bool = 1;
			}
		}
		if(var_1219_bool != 0) {
			var_1228_bool = 0; var_1229_object = Obj();
			var_1229_object = var_1_object;
			func_9247(var_1229_object);
			var_1234_bool = var_1228_bool == 0; //@nz
			if(var_1234_bool != 0) {
				var_1218_bool = 1;
			}
		}
		if(var_1218_bool != 0) {
			@@@var_0_object:AddReply((int)513683, (int)14944, (int)14943);
		}
		@@@var_0_object:AddReply((int)513674, (int)-1, (int)14932);
		goto Label_5638;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x15a6";
	}
Label_5638:
	var_1241_bool = 0;
	func_7933(var_1241_bool);
	if(var_1241_bool != 0) {

	Label_5642:
		lshWaitForAnimEnd();
		var_1242_string = var_3_string;
		if(var_1242_string != 0) {
		} else {
			var_1243_string = "";
			var_1243_string = var_2_object;
			func_7776(var_1243_string);
			goto Label_5642;
	}
		PlayAnimation("all", "idle");

	Label_5657:
		WaitForAnimEnd();
		var_1246_string = var_3_string;
		if(var_1246_string != 0) {
			goto Label_5667;
		}
		PlayAnimation("all", "idle");
		goto Label_5657;
	}
	goto Label_5667;
	
Label_5667:
	return 0;
	
}


func_8099(var_118_object)
{
	var_119_object = Obj(); var_120_string = ""; var_121_float = 0;
	func_9543(Obj());
	var_122_object = var_119_object;
	func_9560(var_119_object, "pt_map_alexandr", (float)2);
	var_142_object = Obj();
	func_9543(var_142_object);
	@@var_118_object:ShowMap(var_142_object);
	return 0;
}


func_7075(var_0_object, var_324_int, var_325_object)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_int = 0; var_330_bool = 0; var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0;
	var_0_object = var_325_object;
	var_335_bool = 0; var_336_object = Obj(); var_337_float = 0;
	var_325_object = var_336_object;
	func_7551(var_335_bool, var_336_object, (float)70.0);
	var_338_bool = var_335_bool == 0; //@nz
	if(var_338_bool != 0) {
		var_324_int = -2;
		return 8;
	}
	CreateDialog(var_331_object);
	var_339_int = 0;
	func_7927(var_339_int);
	@@var_331_object:SetNPCName(var_339_int);
	var_340_int = 0;
	func_7925(var_340_int);
	@@var_331_object:SetNPCDescription(var_340_int);
	var_341_string = "";
	func_7929(var_341_string);
	@@var_331_object:SetPhoto(var_341_string);
	var_342_string = "";
	func_7931(var_342_string);
	@@var_331_object:SetPhoto2(var_342_string);
	var_343_int = 0;
	func_9593(var_343_int);
	@@var_331_object:SetPlayerName(var_343_int);
	IsOverrideActive(var_332_bool);
	var_344_bool = var_332_bool;
	if(var_344_bool != 0) {
		var_324_int = -2;
		return 8;
	}
	DoDialog(var_331_object);
	var_345_bool = 0; var_346_object = Obj();
	func_7829(Obj());
	var_347_object = var_346_object;
	func_7638(var_345_bool, var_346_object);
	var_348_object = Obj(); var_349_object = Obj();
	var_325_object = var_348_object;
	var_331_object = var_349_object;
	TaskCall(19);
	func_7156(var_350_object, var_351_object, var_352_string, var_353_bool, var_348_object, var_349_object);
	TaskReturn();
	@@var_331_object:IsDialogEnd(var_334_bool);
	
Label_7138:
	var_378_bool = var_334_bool == 0; //@nz
	if(var_378_bool != 0) {
		sync();
		@@var_331_object:IsDialogEnd(var_334_bool);
		goto Label_7138;
	}
	var_325_object = Obj();
	func_7620();
	StopDialog(var_331_object);
	@@var_331_object:GetReturnValue((int)-1);
	var_333_int = var_324_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9127(var_1094_bool)
{
	var_1096_int = 0; var_1097_string = "";
	func_7845(var_1096_int, "d6q02KnowAboutAttack");
	var_1099_bool = var_1096_int == (int)1;
	if(var_1099_bool != 0) {
		var_1094_bool = 1;
		return 0;
	}
	var_1094_bool = 0;
	return 0;
}


func_9139(var_1114_bool)
{
	var_1116_int = 0; var_1117_string = "";
	func_7845(var_1116_int, "d6q02Trigger");
	var_1119_bool = var_1116_int != (int)0;
	if(var_1119_bool != 0) {
		var_1114_bool = 1;
		return 0;
	}
	var_1114_bool = 0;
	return 0;
}


func_8115()
{
	SetVariable("ood3BigVlad4", (int)1);
	return 0;
}


func_8629()
{
	SetVariable("d4BigVladVisit", (int)1);
	return 0;
}


func_8121()
{
	var_63_object = Obj(); var_64_object = Obj();
	SetVariable("d4q01", (int)1);
	func_9543(Obj());
	var_67_object = var_64_object;
	var_78_float = 0;
	func_7886(var_78_float);
	@@var_64_object:AddMark("d4q01BigVladGotoLara", "pt_map_lara", (int)1, (int)511481, var_78_float);
	var_85_float = 0;
	func_7886(var_85_float);
	@@var_64_object:AddMark("d4q01BigVladGotoSklad", "pt_map_warehouse_gangster", (int)1, (int)511482, var_85_float);
	func_9385();
	func_9398();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8635()
{
	var_138_object = Obj(); var_139_object = Obj();
	func_9543(Obj());
	var_140_object = var_139_object;
	var_145_float = 0;
	func_7886(var_145_float);
	@@var_139_object:AddMark("d6q02BigVlad", "pt_map_bigvlad", (int)0, (int)515380, var_145_float);
	func_9489();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9151(var_1026_bool)
{
	var_1028_int = 0; var_1029_string = "";
	func_7845(var_1028_int, "d6q01");
	var_1031_bool = var_1028_int == (int)1;
	if(var_1031_bool != 0) {
		var_1026_bool = 1;
		return 0;
	}
	var_1026_bool = 0;
	return 0;
}


func_7620()
{
	var_301_bool = 0; var_302_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_304_bool = 0;
	func_7933(var_304_bool);
	if(var_304_bool != 0) {
	} else {
		HasAnimationTrack(var_302_bool, "head");
		var_306_bool = var_302_bool;
		if(var_306_bool == 0) goto Label_7637;
		UnlookAsync("head");
	}
Label_7637:
	return 2;
	
}


func_9163(var_1074_bool)
{
	var_1076_int = 0; var_1077_string = "";
	func_7845(var_1076_int, "ood6BigVlad2");
	var_1079_bool = var_1076_int == (int)0;
	if(var_1079_bool != 0) {
		var_1074_bool = 1;
		return 0;
	}
	var_1074_bool = 0;
	return 0;
}


func_8654()
{
	SetVariable("d6BigVladVisit", (int)1);
	return 0;
}


func_8660()
{
	SetVariable("d1q01", (int)6);
	func_9320();
	var_88_bool = 0; var_89_string = ""; var_90_string = "";
	func_7874(var_88_bool, "quest_d1_01", "place_morlok_run");
	return 0;
}


func_7638(var_148_bool, var_149_object)
{
	var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0;
	GetVariable("voice_common", var_155_int);
	var_158_int = var_155_int;
	if(var_158_int != 0) {
		var_159_bool = 0; var_160_object = Obj();
		var_149_object = var_160_object;
		func_7696(var_159_bool, var_160_object);
		var_189_bool = var_159_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_bool = 0; var_191_object = Obj();
			var_149_object = var_191_object;
			func_7733(var_190_bool, var_191_object);
			var_225_bool = var_190_bool == 0; //@nz
			if(var_225_bool != 0) {
				var_148_bool = 0;
				return 4;
			}
		}
		irand(var_156_int, (int)2);
		var_227_int = var_156_int;
		if(var_227_int != 0) {
			var_230_int = var_155_int + (int)1;
			var_232_int = var_230_int % (int)3;
			SetVariable("voice_common", var_232_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_235_bool = 0; var_236_object = Obj();
		var_149_object = var_236_object;
		func_7733(var_235_bool, var_236_object);
		var_237_bool = var_235_bool == 0; //@nz
		if(var_237_bool != 0) {
			var_238_bool = 0; var_239_object = Obj();
			var_149_object = var_239_object;
			func_7696(var_238_bool, var_239_object);
			var_240_bool = var_238_bool == 0; //@nz
			if(var_240_bool != 0) {
				var_148_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_7694;
	
Label_7694:
	var_148_bool = 1;
	return 4;
	
}


func_9175(var_1185_bool)
{
	var_1187_int = 0; var_1188_string = "";
	func_7845(var_1187_int, "d8q01MladVladIsBad");
	var_1190_bool = var_1187_int == (int)1;
	if(var_1190_bool != 0) {
		var_1185_bool = 1;
		return 0;
	}
	var_1185_bool = 0;
	return 0;
}


func_8156()
{
	SetVariable("ood4BigVlad1", (int)1);
	return 0;
}


func_6112(var_0_object, var_1_object, var_2_object, var_3_string, var_407_object, var_408_object)
{
	var_0_object = var_408_object;
	var_1_object = var_407_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_414_bool = 0; var_415_object = Obj();
		var_415_object = var_1_object;
		func_8674(var_415_object);
		var_422_bool = var_414_bool == 0; //@nz
		if(var_422_bool != 0) {
			var_423_string = "";
			func_6257(var_408_object, "Neutral");
			@@@var_0_object:SetMessage((int)531697);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531698, (int)33083, (int)33082);
			@@@var_0_object:AddReply((int)531701, (int)-1, (int)33085);
		} else {
				var_446_string = "";
				func_6257(var_408_object, "Neutral");
				@@@var_0_object:SetMessage((int)531735);
				@@@var_0_object:ClearReplies();
				var_448_bool = 0; var_449_object = Obj();
				var_449_object = var_1_object;
				func_8698(var_449_object);
				if(var_448_bool != 0) {
					@@@var_0_object:AddReply((int)532945, (int)33336, (int)34434);
				}
				var_457_bool = 0;
				var_457_bool = 0;
				var_458_bool = 0; var_459_object = Obj();
				var_459_object = var_1_object;
				func_9283(var_459_object);
				if(var_458_bool != 0) {
					var_474_bool = 0; var_475_object = Obj();
					var_475_object = var_1_object;
					func_8686(var_475_object);
					if(var_474_bool != 0) {
						var_457_bool = 1;
					}
				}
				if(var_457_bool != 0) {
					@@@var_0_object:AddReply((int)531736, (int)33124, (int)33123);
				}
				var_483_bool = 0;
				var_483_bool = 1;
				var_484_bool = 0;
				var_484_bool = 0;
				var_485_bool = 0; var_486_object = Obj();
				var_486_object = var_1_object;
				func_8698(var_486_object);
				if(var_485_bool != 0) {
					var_487_bool = 0; var_488_object = Obj();
					var_488_object = var_1_object;
					func_8759(var_488_object);
					if(var_487_bool != 0) {
						var_484_bool = 1;
					}
				}
				if(var_484_bool != 1) {
					var_493_bool = 0;
					var_493_bool = 0;
					var_494_bool = 0; var_495_object = Obj();
					var_495_object = var_1_object;
					func_8710(var_495_object);
					if(var_494_bool != 0) {
						var_500_bool = 0; var_501_object = Obj();
						var_501_object = var_1_object;
						func_8759(var_501_object);
						if(var_500_bool != 0) {
							var_493_bool = 1;
						}
					}
					if(var_493_bool != 1) {
						var_483_bool = 0;
					}
				}
				if(var_483_bool != 0) {
					@@@var_0_object:AddReply((int)533590, (int)35110, (int)35109);
				}
				@@@var_0_object:AddReply((int)531813, (int)-1, (int)33207);
				goto Label_6227;
		}
	}
Label_6227:
	var_438_bool = 0;
	func_7933(var_438_bool);
	if(var_438_bool != 0) {

	Label_6231:
		lshWaitForAnimEnd();
		var_439_string = var_3_string;
		if(var_439_string != 0) {
		} else {
			var_440_string = "";
			var_440_string = var_2_object;
			func_7776(var_440_string);
			goto Label_6231;
	}
		PlayAnimation("all", "idle");

	Label_6246:
		WaitForAnimEnd();
		var_443_string = var_3_string;
		if(var_443_string != 0) {
			goto Label_6256;
		}
		PlayAnimation("all", "idle");
		goto Label_6246;

	}
	goto Label_6256;
	
Label_6256:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x17e4";


func_8162(var_166_object)
{
	var_167_object = Obj(); var_168_string = ""; var_169_float = 0;
	func_9543(Obj());
	var_170_object = var_167_object;
	func_9560(var_167_object, "pt_map_lara", (float)2);
	var_171_object = Obj();
	func_9543(var_171_object);
	@@var_166_object:ShowMap(var_171_object);
	return 0;
}


func_9187(var_1202_bool)
{
	var_1204_int = 0; var_1205_string = "";
	func_7845(var_1204_int, "d8q01BringBadBoy");
	var_1207_bool = var_1204_int == (int)1;
	if(var_1207_bool != 0) {
		var_1202_bool = 1;
		return 0;
	}
	var_1202_bool = 0;
	return 0;
}


func_8674(var_414_bool)
{
	var_416_int = 0; var_417_string = "";
	func_7845(var_416_int, "d1q01FirstGeorgVisit");
	var_421_bool = var_416_int == (int)1;
	if(var_421_bool != 0) {
		var_414_bool = 1;
		return 0;
	}
	var_414_bool = 0;
	return 0;
}


func_8686(var_474_bool)
{
	var_476_int = 0; var_477_string = "";
	func_7845(var_476_int, "ood1BigVlad1");
	var_479_bool = var_476_int == (int)0;
	if(var_479_bool != 0) {
		var_474_bool = 1;
		return 0;
	}
	var_474_bool = 0;
	return 0;
}


func_9199(var_1179_bool)
{
	var_1181_int = 0; var_1182_string = "";
	func_7845(var_1181_int, "ood8BigVlad1");
	var_1184_bool = var_1181_int == (int)0;
	if(var_1184_bool != 0) {
		var_1179_bool = 1;
		return 0;
	}
	var_1179_bool = 0;
	return 0;
}


func_2031(var_0_object, var_648_int, var_649_object)
{
	var_651_object = Obj(); var_652_bool = 0; var_653_int = 0; var_654_bool = 0; var_655_object = Obj(); var_656_bool = 0; var_657_int = 0; var_658_bool = 0;
	var_0_object = var_649_object;
	var_659_bool = 0; var_660_object = Obj(); var_661_float = 0;
	var_649_object = var_660_object;
	func_7551(var_659_bool, var_660_object, (float)70.0);
	var_662_bool = var_659_bool == 0; //@nz
	if(var_662_bool != 0) {
		var_648_int = -2;
		return 8;
	}
	CreateDialog(var_655_object);
	var_663_int = 0;
	func_7927(var_663_int);
	@@var_655_object:SetNPCName(var_663_int);
	var_664_int = 0;
	func_7925(var_664_int);
	@@var_655_object:SetNPCDescription(var_664_int);
	var_665_string = "";
	func_7929(var_665_string);
	@@var_655_object:SetPhoto(var_665_string);
	var_666_string = "";
	func_7931(var_666_string);
	@@var_655_object:SetPhoto2(var_666_string);
	var_667_int = 0;
	func_9593(var_667_int);
	@@var_655_object:SetPlayerName(var_667_int);
	IsOverrideActive(var_656_bool);
	var_668_bool = var_656_bool;
	if(var_668_bool != 0) {
		var_648_int = -2;
		return 8;
	}
	DoDialog(var_655_object);
	var_669_bool = 0; var_670_object = Obj();
	func_7829(Obj());
	var_671_object = var_670_object;
	func_7638(var_669_bool, var_670_object);
	var_672_object = Obj(); var_673_object = Obj();
	var_649_object = var_672_object;
	var_655_object = var_673_object;
	TaskCall(7);
	func_2112(var_674_object, var_675_object, var_676_string, var_677_bool, var_672_object, var_673_object);
	TaskReturn();
	@@var_655_object:IsDialogEnd(var_658_bool);
	
Label_2094:
	var_762_bool = var_658_bool == 0; //@nz
	if(var_762_bool != 0) {
		sync();
		@@var_655_object:IsDialogEnd(var_658_bool);
		goto Label_2094;
	}
	var_649_object = Obj();
	func_7620();
	StopDialog(var_655_object);
	@@var_655_object:GetReturnValue((int)-1);
	var_657_int = var_648_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8178()
{
	SetVariable("ood4BigVlad2", (int)1);
	return 0;
}


func_7156(var_0_object, var_1_object, var_2_object, var_3_string, var_348_object, var_349_object)
{
	var_0_object = var_349_object;
	var_1_object = var_348_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_355_string = "";
		func_7214(var_349_object, "Neutral");
		@@@var_0_object:SetMessage((int)536225);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)536226, (int)-1, (int)38001);
		@@@var_0_object:AddReply((int)536227, (int)-1, (int)38002);
		goto Label_7184;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1bf8";
	}
Label_7184:
	var_370_bool = 0;
	func_7933(var_370_bool);
	if(var_370_bool != 0) {

	Label_7188:
		lshWaitForAnimEnd();
		var_371_string = var_3_string;
		if(var_371_string != 0) {
		} else {
			var_372_string = "";
			var_372_string = var_2_object;
			func_7776(var_372_string);
			goto Label_7188;
	}
		PlayAnimation("all", "idle");

	Label_7203:
		WaitForAnimEnd();
		var_375_string = var_3_string;
		if(var_375_string != 0) {
			goto Label_7213;
		}
		PlayAnimation("all", "idle");
		goto Label_7203;
	}
	goto Label_7213;
	
Label_7213:
	return 0;
	
}


func_3574(var_2_object, var_814_string)
{
	var_815_bool = 0;
	func_7933(var_815_bool);
	var_816_bool = var_815_bool == 0; //@nz
	if(var_816_bool != 0) {
		return 0;
	}
	var_817_bool = var_814_string == var_2_object;
	if(var_817_bool != 0) {
		return 0;
	}
	var_818_string = ""; var_819_bool = 0;
	var_814_string = var_818_string;
	var_821_bool = var_814_string == "";
	if(var_821_bool != 0) {
		var_819_bool = 0;
	} else {
		var_819_bool = 1;
	}
	func_7792(var_818_string, var_819_bool);
	var_2_object = var_814_string;
	return 0;
	
}


func_8184()
{
	var_179_object = Obj(); var_180_object = Obj();
	SetVariable("d4q01", (int)4);
	func_9543(Obj());
	var_183_object = var_180_object;
	var_188_float = 0;
	func_7886(var_188_float);
	@@var_180_object:AddMark("d4q01BigVladGotoSobor", "pt_map_sobor", (int)1, (int)515325, var_188_float);
	var_193_float = 0;
	func_7886(var_193_float);
	@@var_180_object:AddMark("d4q01BigVladGotoTheater", "pt_map_theater", (int)1, (int)515326, var_193_float);
	func_9411();
	var_202_bool = 0; var_203_string = ""; var_204_string = "";
	func_7874(var_202_bool, "quest_d4_01", "pers");
	var_208_bool = 0; var_209_string = ""; var_210_string = "";
	func_7874(var_208_bool, "quest_d4_01", "key_actors");
	return 2;
}
EMIT "Stack[-1] = 0";


func_8698(var_448_bool)
{
	var_450_int = 0; var_451_string = "";
	func_7845(var_450_int, "d1q01");
	var_453_bool = var_450_int == (int)5;
	if(var_453_bool != 0) {
		var_448_bool = 1;
		return 0;
	}
	var_448_bool = 0;
	return 0;
}


func_9211(var_1196_bool)
{
	var_1198_int = 0; var_1199_string = "";
	func_7845(var_1198_int, "ood8BigVlad2");
	var_1201_bool = var_1198_int == (int)0;
	if(var_1201_bool != 0) {
		var_1196_bool = 1;
		return 0;
	}
	var_1196_bool = 0;
	return 0;
}


