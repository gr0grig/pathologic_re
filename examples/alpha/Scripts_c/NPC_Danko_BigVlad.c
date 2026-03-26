// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemByName/2,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Rage|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:HasItem|W:No|W:ui/NPC_BigVlad.png|W:pt_map_georg|A:ShowMap|W:ood2BigVlad1|W:ood2BigVlad2|W:ood2BigVlad3|W:ood2BigVlad4|W:d2q01BigVladVisit|W:ood1BigVlad4|W:ood1BigVlad5|W:ood1BigVlad6|W:ood1BigVlad7|W:ood1BigVlad8|W:ood1BigVlad9|W:d1BigVladAboutKapella|W:pt_map_kapella|A:AddMark|W:d1BigVladAboutMladVlad|W:pt_map_mladvlad|W:playsound|W:mapmark|W:ood3BigVlad1|W:d3q01|W:d3q01BigVladGotoGeorg|W:d3q01BigVladGotoGeorgSelf|W:pt_map_bigvlad|W:ood3BigVlad2|W:ood3BigVlad3|W:d3q01BigVladAgreedSelf|W:d3q01BigVladAgreed|W:pt_map_ospina|W:pt_map_alexandr|W:ood3BigVlad4|W:d3q02|W:d3q02BigVladGotoHan|W:pt_map_han|W:ood3BigVlad5|W:d4q01|W:d4q01BigVladGotoLara|W:pt_map_lara|W:d4q01BigVladGotoSklad|W:pt_map_warehouse_gangster|W:d4q01BigVladGotoLaraSelf|W:ood4BigVlad1|W:ood4BigVlad2|W:d4q01BigVladGotoSobor|W:pt_map_sobor|W:d4q01BigVladGotoSoborAndTheaterSelf|W:d4q01BigVladGotoTheater|W:pt_map_theater|W:quest_d4_01|W:pers|W:key_actors|W:ood4BigVlad3|A:FindMark|A:Remove|W:d4q01LaraGotoMladVlad|W:d4q01LaraGotoMladVladSelf|W:d4q01LaraGotoOspina|W:d4q01LaraGotoOspinaSelf|W:d4q01MladVladGotoBigVlad|W:d4q01MladVladGotoBigVladSelf|W:d4q01MladVladGotoOspina|W:d4q01OspinaGotoLara|W:d4q01WastedMale|W:d4q01Whitemask|W:completed|W:d4q01_sobor_key|A:RemoveItemByType|W:d4q01_theater_key|W:d5q01|W:d5q01BigVladGotoAlexandr|W:ood5BigVlad1|W:ood6BigVlad1|W:ood6BigVlad2|W:KnowBigVlad|W:d8q01BigVladIsVictim|W:ood8BigVlad1|W:ood8BigVlad2|W:ood8BigVlad3|W:ood6BigVlad3|W:d6q01BigVladGotoAnna|W:pt_map_anna|W:d6q01BigVladGotoOspina|W:d6q01BigVladGotoAnnaOspinaSelf|W:failed|W:d4BigVladVisit|W:d6q02BigVlad|W:d6BigVladVisit|W:KnowTermitnik|W:ood1BigVlad1|W:ood1BigVlad2|W:ood1BigVlad3|W:d1q01FirstGeorgVisit|W:KnowMat|W:d2q01|W:KnowBurahDead|W:KnowRubin|W:d6q02|W:d6q02KnowAboutAttack|W:d6q02Trigger|W:d6q01|W:d8q01MladVladIsBad|W:d8q01BringBadBoy|W:KnowAlexandr|W:KnowAnna|W:KnowGeorg|W:KnowMladVlad|W:KnowKapella|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x1d vars=
// @EVENT_0: op=0x23 vars=object
// @EVENT_10: op=0x29 vars=object
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc4 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x237 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5a8 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb89 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf16 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x15d0 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1b0b vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1d19 vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x181,0x227,0x237,0x498,0x598,0x5a8,0xade,0xb79,0xb89,0xe59,0xf06,0xf16,0x152f,0x15c0,0x15d0,0x1ab2,0x1afb,0x1b0b,0x1c91,0x1d09,0x1d19,0x1ead,0x1efa,0x1f0f,0x1f1f,0x1f25,0x1f2b,0x1f31,0x1f37,0x1f3d,0x1f43,0x1f49,0x1f4f,0x1f55,0x1f5b,0x1f7a,0x1f80,0x1fa6,0x1fac,0x1fcf,0x1fdf,0x1ff9,0x2009,0x203b,0x2041,0x2051,0x208a,0x212f,0x2135,0x213b,0x2141,0x2147,0x214d,0x2153,0x2159,0x215f,0x220a,0x2220,0x2226,0x222c,0x2232,0x2238,0x223e,0x224a,0x2256,0x2262,0x226e,0x227a,0x2286,0x2290,0x229c,0x22a8,0x22b4,0x22c0,0x22cc,0x22d8,0x22e4,0x22f0,0x22fc,0x2308,0x2314,0x2320,0x232c,0x2338,0x2344,0x2350,0x235c,0x2368,0x2374,0x2380,0x238c,0x2398,0x23a4,0x23b0,0x23ce,0x23ea,0x23f6,0x2402,0x240e,0x241a,0x2426,0x2432,0x243e,0x244a,0x2456,0x2462,0x246e,0x247a,0x2486,0x2492,0x249e,0x24aa,0x24b6,0x24c2,0x24ce,0x24da,0x24e6,0x24f2,0x24fe,0x250a,0x2516,0x260a

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_object = Obj();
	var_40_bool = var_41_object;
	func_9738(var_41_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_bool = 0; var_42_object = Obj();
	var_40_bool = var_42_object;
	func_7780(var_41_bool, var_42_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7875();
		var_45_bool = var_40_string == (int)467;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_8513();
			var_50_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)402, (int)471, (int)468);
			@@@var_0_object:AddReply((int)403, (int)472, (int)469);
			@@@var_0_object:AddReply((int)404, (int)-1, (int)470);
			return 0;
		}
		var_76_bool = var_40_string == (int)472;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)406);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)413, (int)475, (int)480);
			@@@var_0_object:AddReply((int)414, (int)-1, (int)481);
			return 0;
		}
		var_86_bool = var_40_string == (int)471;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)407, (int)475, (int)473);
			@@@var_0_object:AddReply((int)408, (int)475, (int)474);
			return 0;
		}
		var_96_bool = var_40_string == (int)475;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)409);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)410, (int)-1, (int)477);
			@@@var_0_object:AddReply((int)411, (int)-1, (int)478);
			@@@var_0_object:AddReply((int)412, (int)-1, (int)479);
			return 0;
		}
		var_3_string = true;
		var_108_bool = 0;
		func_7949(var_108_bool);
		if(var_108_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7875();
		var_45_bool = var_41_bool == (int)13245;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_8507();
		}
		var_51_bool = var_41_bool == (int)13253;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_8549();
		}
		var_106_bool = var_41_bool == (int)13885;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_8549();
		}
		var_110_bool = var_41_bool == (int)13673;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_8501();
		}
		var_116_bool = var_41_bool == (int)13683;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_8720();
		}
		var_128_bool = var_40_string == (int)11787;
		if(var_128_bool != 0) {
			var_129_bool = 0;
			var_129_bool = 0;
			var_130_bool = 0; var_131_object = Obj();
			var_131_object = var_1_object;
			func_9290(var_131_object);
			var_138_bool = var_130_bool == 0; //@nz
			if(var_138_bool != 0) {
				var_139_bool = 0; var_140_object = Obj();
				var_140_object = var_1_object;
				func_9386(var_140_object);
				if(var_139_bool != 0) {
					var_129_bool = 1;
				}
			}
			if(var_129_bool != 0) {
				var_145_object = Obj(); var_146_object = Obj();
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_8543();
				var_149_object = Obj(); var_150_object = Obj();
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_8736();
				var_153_string = "";
				func_551(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10676);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10688, (int)11789, (int)11801);
				return 0;
			}
			var_172_bool = 0; var_173_object = Obj();
			var_173_object = var_1_object;
			func_9434(var_173_object);
			if(var_172_bool != 0) {
				var_178_string = "";
				func_551(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12502);
				@@@var_0_object:ClearReplies();
				var_180_bool = 0;
				var_180_bool = 0;
				var_181_bool = 0; var_182_object = Obj();
				var_182_object = var_1_object;
				func_9290(var_182_object);
				if(var_181_bool != 0) {
					var_183_bool = 0; var_184_object = Obj();
					var_184_object = var_1_object;
					func_9302(var_184_object);
					if(var_183_bool != 0) {
						var_180_bool = 1;
					}
				}
				if(var_180_bool != 0) {
					@@@var_0_object:AddReply((int)12027, (int)13248, (int)13245);
				}
				var_192_bool = 0;
				var_192_bool = 0;
				var_193_bool = 0;
				var_193_bool = 0;
				var_194_bool = 0;
				var_194_bool = 0;
				var_195_bool = 0;
				var_195_bool = 0;
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_9254(var_197_object);
				if(var_196_bool != 0) {
					var_202_bool = 0; var_203_object = Obj();
					var_203_object = var_1_object;
					func_9266(var_203_object);
					if(var_202_bool != 0) {
						var_195_bool = 1;
					}
				}
				if(var_195_bool != 0) {
					var_208_bool = 0; var_209_object = Obj();
					var_209_object = var_1_object;
					func_9230(var_209_object);
					var_214_bool = var_208_bool == 0; //@nz
					if(var_214_bool != 0) {
						var_194_bool = 1;
					}
				}
				if(var_194_bool != 0) {
					var_215_bool = 0; var_216_object = Obj();
					var_216_object = var_1_object;
					func_9242(var_216_object);
					var_221_bool = var_215_bool == 0; //@nz
					if(var_221_bool != 0) {
						var_193_bool = 1;
					}
				}
				if(var_193_bool != 0) {
					var_222_bool = 0; var_223_object = Obj();
					var_223_object = var_1_object;
					func_9278(var_223_object);
					var_228_bool = var_222_bool == 0; //@nz
					if(var_228_bool != 0) {
						var_192_bool = 1;
					}
				}
				if(var_192_bool != 0) {
					@@@var_0_object:AddReply((int)12503, (int)13674, (int)13673);
				}
				@@@var_0_object:AddReply((int)12514, (int)-1, (int)13684);
				return 0;
			}
		}
		var_236_bool = var_40_string == (int)13674;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12505, (int)13676, (int)13675);
			return 0;
		}
		var_243_bool = var_40_string == (int)13676;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12507, (int)13678, (int)13677);
			return 0;
		}
		var_250_bool = var_40_string == (int)13678;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12509, (int)13680, (int)13679);
			return 0;
		}
		var_257_bool = var_40_string == (int)13680;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12511, (int)13682, (int)13681);
			return 0;
		}
		var_264_bool = var_40_string == (int)13682;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12513, (int)-1, (int)13683);
			return 0;
		}
		var_271_bool = var_40_string == (int)13248;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12031, (int)13250, (int)13249);
			@@@var_0_object:AddReply((int)12692, (int)3597, (int)13882);
			return 0;
		}
		var_281_bool = var_40_string == (int)3597;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3322, (int)3599, (int)3598);
			@@@var_0_object:AddReply((int)3535, (int)3817, (int)3816);
			return 0;
		}
		var_291_bool = var_40_string == (int)3817;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3537, (int)3604, (int)3818);
			@@@var_0_object:AddReply((int)3538, (int)3599, (int)3819);
			return 0;
		}
		var_301_bool = var_40_string == (int)3599;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3324, (int)3604, (int)3600);
			@@@var_0_object:AddReply((int)3325, (int)3604, (int)3601);
			return 0;
		}
		var_311_bool = var_40_string == (int)3604;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3330, (int)3815, (int)3607);
			return 0;
		}
		var_318_bool = var_40_string == (int)13250;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12033, (int)13252, (int)13251);
			@@@var_0_object:AddReply((int)3539, (int)3823, (int)3822);
			return 0;
		}
		var_328_bool = var_40_string == (int)3823;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3540);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3541, (int)13252, (int)3824);
			@@@var_0_object:AddReply((int)3533, (int)3815, (int)3814);
			return 0;
		}
		var_338_bool = var_40_string == (int)3815;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3534);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12694, (int)-1, (int)13885);
			return 0;
		}
		var_345_bool = var_40_string == (int)13252;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12035, (int)-1, (int)13253);
			return 0;
		}
		var_352_bool = var_40_string == (int)11789;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10679, (int)11791, (int)11790);
			@@@var_0_object:AddReply((int)10687, (int)-1, (int)11800);
			return 0;
		}
		var_362_bool = var_40_string == (int)11791;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10680);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10681, (int)11793, (int)11792);
			@@@var_0_object:AddReply((int)10685, (int)11793, (int)11796);
			@@@var_0_object:AddReply((int)10686, (int)11793, (int)11798);
			return 0;
		}
		var_375_bool = var_40_string == (int)11793;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_551(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10683, (int)-1, (int)11794);
			@@@var_0_object:AddReply((int)10684, (int)-1, (int)11795);
			return 0;
		}
		var_3_string = true;
		var_384_bool = 0;
		func_7949(var_384_bool);
		if(var_384_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x238";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7875();
		var_45_bool = var_41_bool == (int)6488;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_8748();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_8033();
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_8058();
		}
		var_78_bool = var_41_bool == (int)6485;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_8748();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_8033();
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_8058();
		}
		var_86_bool = var_41_bool == (int)6484;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_8748();
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_8033();
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_8058();
		}
		var_94_bool = var_41_bool == (int)6474;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_8748();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_8033();
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_8058();
		}
		var_102_bool = var_41_bool == (int)6481;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_8748();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_8033();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_8058();
		}
		var_110_bool = var_41_bool == (int)6471;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_8748();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_8033();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_8058();
		}
		var_118_bool = var_41_bool == (int)5793;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_8754();
		}
		var_124_bool = var_41_bool == (int)5794;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_8754();
		}
		var_128_bool = var_41_bool == (int)5799;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_8754();
		}
		var_132_bool = var_41_bool == (int)5796;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_8754();
		}
		var_136_bool = var_41_bool == (int)5785;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_8760();
		}
		var_142_bool = var_41_bool == (int)5782;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_8760();
		}
		var_146_bool = var_41_bool == (int)8364;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_7997();
		}
		var_152_bool = var_41_bool == (int)8365;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_7997();
		}
		var_156_bool = var_41_bool == (int)8375;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_8003();
		}
		var_162_bool = var_41_bool == (int)8390;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_8009();
		}
		var_168_bool = var_41_bool == (int)8391;
		if(var_168_bool != 0) {
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_8009();
		}
		var_172_bool = var_41_bool == (int)8400;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_8015();
		}
		var_178_bool = var_41_bool == (int)8411;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_8015();
		}
		var_182_bool = var_41_bool == (int)8415;
		if(var_182_bool != 0) {
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_8021();
		}
		var_188_bool = var_41_bool == (int)8406;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_8021();
		}
		var_192_bool = var_41_bool == (int)8409;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_8027();
		}
		var_198_bool = var_40_string == (int)5773;
		if(var_198_bool != 0) {
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_9458(var_200_object);
			if(var_199_bool != 0) {
				var_207_object = Obj(); var_208_object = Obj();
				var_207_object = var_1_object;
				var_208_object = var_0_object;
				func_8742();
				var_211_string = "";
				func_1432(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5238);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5240, (int)6468, (int)5775);
				@@@var_0_object:AddReply((int)5239, (int)6465, (int)5774);
				return 0;
			}
			var_233_bool = 0;
			var_233_bool = 0;
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_9470(var_235_object);
			if(var_234_bool != 0) {
				var_240_bool = 0; var_241_object = Obj();
				var_241_object = var_1_object;
				func_8766(var_241_object);
				var_246_bool = var_240_bool == 0; //@nz
				if(var_246_bool != 0) {
					var_233_bool = 1;
				}
			}
			if(var_233_bool != 0) {
				var_247_string = "";
				func_1432(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5253);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5254, (int)5792, (int)5791);
				@@@var_0_object:AddReply((int)5260, (int)5798, (int)5797);
				@@@var_0_object:AddReply((int)5259, (int)-1, (int)5796);
				return 0;
			}
			var_258_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7539);
			@@@var_0_object:ClearReplies();
			var_260_bool = 0;
			var_260_bool = 0;
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_9482(var_262_object);
			if(var_261_bool != 0) {
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_8766(var_268_object);
				if(var_267_bool != 0) {
					var_260_bool = 1;
				}
			}
			if(var_260_bool != 0) {
				@@@var_0_object:AddReply((int)7540, (int)5777, (int)8322);
			}
			var_272_bool = 0;
			var_272_bool = 0;
			var_273_bool = 0; var_274_object = Obj();
			var_274_object = var_1_object;
			func_9398(var_274_object);
			if(var_273_bool != 0) {
				var_279_bool = 0; var_280_object = Obj();
				var_280_object = var_1_object;
				func_8872(var_280_object);
				if(var_279_bool != 0) {
					var_272_bool = 1;
				}
			}
			if(var_272_bool != 0) {
				@@@var_0_object:AddReply((int)7548, (int)8354, (int)8330);
			}
			var_288_bool = 0;
			var_288_bool = 0;
			var_289_bool = 0; var_290_object = Obj();
			var_290_object = var_1_object;
			func_9374(var_290_object);
			if(var_289_bool != 0) {
				var_295_bool = 0; var_296_object = Obj();
				var_296_object = var_1_object;
				func_8884(var_296_object);
				if(var_295_bool != 0) {
					var_288_bool = 1;
				}
			}
			if(var_288_bool != 0) {
				@@@var_0_object:AddReply((int)7552, (int)8349, (int)8334);
			}
			var_304_bool = 0;
			var_304_bool = 0;
			var_305_bool = 0; var_306_object = Obj();
			var_306_object = var_1_object;
			func_9410(var_306_object);
			if(var_305_bool != 0) {
				var_311_bool = 0; var_312_object = Obj();
				var_312_object = var_1_object;
				func_8896(var_312_object);
				if(var_311_bool != 0) {
					var_304_bool = 1;
				}
			}
			if(var_304_bool != 0) {
				@@@var_0_object:AddReply((int)7553, (int)8350, (int)8335);
			}
			var_320_bool = 0;
			var_320_bool = 0;
			var_321_bool = 0; var_322_object = Obj();
			var_322_object = var_1_object;
			func_9422(var_322_object);
			if(var_321_bool != 0) {
				var_327_bool = 0; var_328_object = Obj();
				var_328_object = var_1_object;
				func_8908(var_328_object);
				if(var_327_bool != 0) {
					var_320_bool = 1;
				}
			}
			if(var_320_bool != 0) {
				@@@var_0_object:AddReply((int)7556, (int)8351, (int)8338);
			}
			var_336_bool = 0;
			var_336_bool = 0;
			var_337_bool = 0; var_338_object = Obj();
			var_338_object = var_1_object;
			func_9004(var_338_object);
			if(var_337_bool != 0) {
				var_343_bool = 0; var_344_object = Obj();
				var_344_object = var_1_object;
				func_8920(var_344_object);
				if(var_343_bool != 0) {
					var_336_bool = 1;
				}
			}
			if(var_336_bool != 0) {
				@@@var_0_object:AddReply((int)7560, (int)8352, (int)8342);
			}
			var_352_bool = 0;
			var_352_bool = 0;
			var_353_bool = 0; var_354_object = Obj();
			var_354_object = var_1_object;
			func_9446(var_354_object);
			if(var_353_bool != 0) {
				var_359_bool = 0; var_360_object = Obj();
				var_360_object = var_1_object;
				func_8932(var_360_object);
				if(var_359_bool != 0) {
					var_352_bool = 1;
				}
			}
			if(var_352_bool != 0) {
				@@@var_0_object:AddReply((int)7561, (int)8353, (int)8343);
			}
			@@@var_0_object:AddReply((int)7590, (int)-1, (int)8376);
			return 0;
		}
		var_372_bool = var_40_string == (int)8353;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7618, (int)8408, (int)8407);
			return 0;
		}
		var_379_bool = var_40_string == (int)8408;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7620, (int)-1, (int)8409);
			return 0;
		}
		var_386_bool = var_40_string == (int)8352;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7570);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7612, (int)8402, (int)8401);
			return 0;
		}
		var_393_bool = var_40_string == (int)8402;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7614, (int)8404, (int)8403);
			return 0;
		}
		var_400_bool = var_40_string == (int)8404;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7615);
			@@@var_0_object:ClearReplies();
			var_403_bool = 0; var_404_object = Obj();
			var_404_object = var_1_object;
			func_8944(var_404_object);
			var_409_bool = var_403_bool == 0; //@nz
			if(var_409_bool != 0) {
				@@@var_0_object:AddReply((int)7616, (int)8412, (int)8405);
			}
			var_413_bool = 0; var_414_object = Obj();
			var_414_object = var_1_object;
			func_8944(var_414_object);
			if(var_413_bool != 0) {
				@@@var_0_object:AddReply((int)7617, (int)-1, (int)8406);
			}
			return 0;
		}
		var_419_bool = var_40_string == (int)8412;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7623);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7624, (int)8414, (int)8413);
			return 0;
		}
		var_426_bool = var_40_string == (int)8414;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7625);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7626, (int)-1, (int)8415);
			return 0;
		}
		var_433_bool = var_40_string == (int)8351;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7604, (int)8396, (int)8392);
			@@@var_0_object:AddReply((int)7605, (int)8394, (int)8393);
			return 0;
		}
		var_443_bool = var_40_string == (int)8394;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7607, (int)8396, (int)8395);
			return 0;
		}
		var_450_bool = var_40_string == (int)8396;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7609, (int)8398, (int)8397);
			return 0;
		}
		var_457_bool = var_40_string == (int)8398;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7611, (int)-1, (int)8400);
			@@@var_0_object:AddReply((int)7622, (int)-1, (int)8411);
			return 0;
		}
		var_467_bool = var_40_string == (int)8350;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7591, (int)8378, (int)8377);
			@@@var_0_object:AddReply((int)7598, (int)8386, (int)8385);
			return 0;
		}
		var_477_bool = var_40_string == (int)8386;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7600, (int)8388, (int)8387);
			return 0;
		}
		var_484_bool = var_40_string == (int)8388;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7601);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7603, (int)-1, (int)8391);
			return 0;
		}
		var_491_bool = var_40_string == (int)8378;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7593, (int)8381, (int)8379);
			@@@var_0_object:AddReply((int)7594, (int)8381, (int)8380);
			return 0;
		}
		var_501_bool = var_40_string == (int)8381;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7596, (int)8383, (int)8382);
			return 0;
		}
		var_508_bool = var_40_string == (int)8383;
		if(var_508_bool != 0) {
			var_509_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7597);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7602, (int)-1, (int)8390);
			return 0;
		}
		var_515_bool = var_40_string == (int)8349;
		if(var_515_bool != 0) {
			var_516_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7582, (int)8367, (int)8366);
			return 0;
		}
		var_522_bool = var_40_string == (int)8367;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7584, (int)8370, (int)8368);
			@@@var_0_object:AddReply((int)7585, (int)8370, (int)8369);
			return 0;
		}
		var_532_bool = var_40_string == (int)8370;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7587, (int)8374, (int)8373);
			return 0;
		}
		var_539_bool = var_40_string == (int)8374;
		if(var_539_bool != 0) {
			var_540_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7589, (int)-1, (int)8375);
			return 0;
		}
		var_546_bool = var_40_string == (int)8354;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7573, (int)8348, (int)8355);
			@@@var_0_object:AddReply((int)7574, (int)8348, (int)8356);
			return 0;
		}
		var_556_bool = var_40_string == (int)8348;
		if(var_556_bool != 0) {
			var_557_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7575, (int)8359, (int)8358);
			@@@var_0_object:AddReply((int)7577, (int)8359, (int)8360);
			return 0;
		}
		var_566_bool = var_40_string == (int)8359;
		if(var_566_bool != 0) {
			var_567_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7576);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7578, (int)8363, (int)8362);
			return 0;
		}
		var_573_bool = var_40_string == (int)8363;
		if(var_573_bool != 0) {
			var_574_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7580, (int)-1, (int)8364);
			@@@var_0_object:AddReply((int)7581, (int)-1, (int)8365);
			return 0;
		}
		var_583_bool = var_40_string == (int)5777;
		if(var_583_bool != 0) {
			var_584_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5242);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5243, (int)5779, (int)5778);
			@@@var_0_object:AddReply((int)5252, (int)5779, (int)5788);
			return 0;
		}
		var_593_bool = var_40_string == (int)5779;
		if(var_593_bool != 0) {
			var_594_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5244);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5245, (int)5781, (int)5780);
			@@@var_0_object:AddReply((int)5251, (int)5781, (int)5786);
			return 0;
		}
		var_603_bool = var_40_string == (int)5781;
		if(var_603_bool != 0) {
			var_604_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5248, (int)5784, (int)5783);
			@@@var_0_object:AddReply((int)5247, (int)-1, (int)5782);
			return 0;
		}
		var_613_bool = var_40_string == (int)5784;
		if(var_613_bool != 0) {
			var_614_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5250, (int)-1, (int)5785);
			return 0;
		}
		var_620_bool = var_40_string == (int)5798;
		if(var_620_bool != 0) {
			var_621_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5261);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5262, (int)-1, (int)5799);
			return 0;
		}
		var_627_bool = var_40_string == (int)5792;
		if(var_627_bool != 0) {
			var_628_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5256, (int)-1, (int)5793);
			@@@var_0_object:AddReply((int)5257, (int)-1, (int)5794);
			return 0;
		}
		var_637_bool = var_40_string == (int)6465;
		if(var_637_bool != 0) {
			var_638_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5874, (int)6469, (int)6466);
			@@@var_0_object:AddReply((int)5875, (int)6469, (int)6467);
			return 0;
		}
		var_647_bool = var_40_string == (int)6469;
		if(var_647_bool != 0) {
			var_648_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5880, (int)6473, (int)6472);
			@@@var_0_object:AddReply((int)5879, (int)-1, (int)6471);
			return 0;
		}
		var_657_bool = var_40_string == (int)6473;
		if(var_657_bool != 0) {
			var_658_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5882, (int)-1, (int)6474);
			@@@var_0_object:AddReply((int)5887, (int)-1, (int)6481);
			return 0;
		}
		var_667_bool = var_40_string == (int)6468;
		if(var_667_bool != 0) {
			var_668_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5883, (int)6477, (int)6476);
			@@@var_0_object:AddReply((int)5888, (int)6483, (int)6482);
			return 0;
		}
		var_677_bool = var_40_string == (int)6483;
		if(var_677_bool != 0) {
			var_678_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5891, (int)-1, (int)6485);
			@@@var_0_object:AddReply((int)5890, (int)-1, (int)6484);
			return 0;
		}
		var_687_bool = var_40_string == (int)6477;
		if(var_687_bool != 0) {
			var_688_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5885, (int)6469, (int)6478);
			@@@var_0_object:AddReply((int)5892, (int)6487, (int)6486);
			return 0;
		}
		var_697_bool = var_40_string == (int)6487;
		if(var_697_bool != 0) {
			var_698_string = "";
			func_1432(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5894, (int)-1, (int)6488);
			@@@var_0_object:AddReply((int)5895, (int)6469, (int)6489);
			return 0;
		}
		var_3_string = true;
		var_706_bool = 0;
		func_7949(var_706_bool);
		if(var_706_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5a9";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7875();
		var_45_bool = var_41_bool == (int)7496;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7967();
		}
		var_51_bool = var_41_bool == (int)7497;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_7967();
		}
		var_55_bool = var_41_bool == (int)7828;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_7967();
		}
		var_59_bool = var_41_bool == (int)7831;
		if(var_59_bool != 0) {
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_7967();
		}
		var_63_bool = var_41_bool == (int)7460;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_7973();
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_7991();
		}
		var_73_bool = var_41_bool == (int)7461;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_7973();
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_7991();
		}
		var_79_bool = var_41_bool == (int)7465;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_7973();
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_7991();
		}
		var_85_bool = var_41_bool == (int)7466;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_7973();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_7991();
		}
		var_91_bool = var_41_bool == (int)7814;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_7979();
		}
		var_97_bool = var_41_bool == (int)7815;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_7979();
		}
		var_101_bool = var_41_bool == (int)7477;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_7985();
		}
		var_107_bool = var_41_bool == (int)7478;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_7985();
		}
		var_111_bool = var_41_bool == (int)7474;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_7985();
		}
		var_115_bool = var_41_bool == (int)7479;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_7985();
		}
		var_119_bool = var_40_string == (int)7489;
		if(var_119_bool != 0) {
			var_120_bool = 0;
			var_120_bool = 0;
			var_121_bool = 0; var_122_object = Obj();
			var_122_object = var_1_object;
			func_8790(var_122_object);
			if(var_121_bool != 0) {
				var_129_bool = 0; var_130_object = Obj();
				var_130_object = var_1_object;
				func_8848(var_130_object);
				if(var_129_bool != 0) {
					var_120_bool = 1;
				}
			}
			if(var_120_bool != 0) {
				var_135_string = "";
				func_2937(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6797);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6798, (int)7491, (int)7490);
				@@@var_0_object:AddReply((int)6809, (int)7491, (int)7503);
				@@@var_0_object:AddReply((int)6810, (int)7493, (int)7505);
				return 0;
			}
			var_160_bool = 0;
			var_160_bool = 0;
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_8802(var_162_object);
			if(var_161_bool != 0) {
				var_167_bool = 0; var_168_object = Obj();
				var_168_object = var_1_object;
				func_8860(var_168_object);
				if(var_167_bool != 0) {
					var_160_bool = 1;
				}
			}
			if(var_160_bool != 0) {
				var_173_string = "";
				func_2937(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6765);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6777, (int)7457, (int)7467);
				@@@var_0_object:AddReply((int)6766, (int)7459, (int)7456);
				return 0;
			}
			var_181_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6794);
			@@@var_0_object:ClearReplies();
			var_183_bool = 0;
			var_183_bool = 0;
			var_184_bool = 0; var_185_object = Obj();
			var_185_object = var_1_object;
			func_8814(var_185_object);
			if(var_184_bool != 0) {
				var_190_bool = 0; var_191_object = Obj();
				var_191_object = var_1_object;
				func_8848(var_191_object);
				if(var_190_bool != 0) {
					var_183_bool = 1;
				}
			}
			if(var_183_bool != 0) {
				@@@var_0_object:AddReply((int)7084, (int)7809, (int)7807);
			}
			var_195_bool = 0; var_196_object = Obj();
			var_196_object = var_1_object;
			func_8826(var_196_object);
			if(var_195_bool != 0) {
				@@@var_0_object:AddReply((int)6795, (int)7469, (int)7487);
			}
			@@@var_0_object:AddReply((int)7535, (int)-1, (int)8317);
			return 0;
		}
		var_208_bool = var_40_string == (int)7469;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6779, (int)7471, (int)7470);
			@@@var_0_object:AddReply((int)6793, (int)7476, (int)7485);
			return 0;
		}
		var_218_bool = var_40_string == (int)7471;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6780);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6781, (int)7473, (int)7472);
			@@@var_0_object:AddReply((int)6788, (int)-1, (int)7479);
			return 0;
		}
		var_228_bool = var_40_string == (int)7473;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6782);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6784, (int)7476, (int)7475);
			@@@var_0_object:AddReply((int)6783, (int)-1, (int)7474);
			return 0;
		}
		var_238_bool = var_40_string == (int)7476;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6786, (int)-1, (int)7477);
			@@@var_0_object:AddReply((int)6787, (int)-1, (int)7478);
			return 0;
		}
		var_248_bool = var_40_string == (int)7809;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7085);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7086, (int)7811, (int)7810);
			@@@var_0_object:AddReply((int)7096, (int)7813, (int)7822);
			return 0;
		}
		var_258_bool = var_40_string == (int)7811;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7088, (int)7813, (int)7812);
			@@@var_0_object:AddReply((int)7092, (int)7813, (int)7816);
			@@@var_0_object:AddReply((int)7093, (int)7819, (int)7818);
			return 0;
		}
		var_271_bool = var_40_string == (int)7819;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7095, (int)7813, (int)7820);
			return 0;
		}
		var_278_bool = var_40_string == (int)7813;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7090, (int)-1, (int)7814);
			@@@var_0_object:AddReply((int)7091, (int)-1, (int)7815);
			return 0;
		}
		var_288_bool = var_40_string == (int)7457;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6768, (int)7459, (int)7458);
			@@@var_0_object:AddReply((int)6773, (int)7464, (int)7463);
			return 0;
		}
		var_298_bool = var_40_string == (int)7464;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6774);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6775, (int)-1, (int)7465);
			@@@var_0_object:AddReply((int)6776, (int)-1, (int)7466);
			return 0;
		}
		var_308_bool = var_40_string == (int)7459;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6770, (int)-1, (int)7460);
			@@@var_0_object:AddReply((int)6771, (int)-1, (int)7461);
			return 0;
		}
		var_318_bool = var_40_string == (int)7491;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6800, (int)7493, (int)7492);
			@@@var_0_object:AddReply((int)6807, (int)7493, (int)7500);
			return 0;
		}
		var_328_bool = var_40_string == (int)7493;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6801);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6802, (int)7495, (int)7494);
			@@@var_0_object:AddReply((int)6806, (int)7495, (int)7498);
			return 0;
		}
		var_338_bool = var_40_string == (int)7495;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6804, (int)-1, (int)7496);
			@@@var_0_object:AddReply((int)6805, (int)-1, (int)7497);
			@@@var_0_object:AddReply((int)7097, (int)7825, (int)7824);
			return 0;
		}
		var_351_bool = var_40_string == (int)7825;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7099, (int)7827, (int)7826);
			return 0;
		}
		var_358_bool = var_40_string == (int)7827;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7101, (int)-1, (int)7828);
			@@@var_0_object:AddReply((int)7102, (int)7830, (int)7829);
			return 0;
		}
		var_368_bool = var_40_string == (int)7830;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_2937(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7103);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7104, (int)-1, (int)7831);
			return 0;
		}
		var_3_string = true;
		var_374_bool = 0;
		func_7949(var_374_bool);
		if(var_374_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb8a";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7875();
		var_45_bool = var_41_bool == (int)9874;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_8064();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_8070();
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_7951(var_101_object);
		}
		var_127_bool = var_41_bool == (int)9875;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_8064();
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_8070();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_7951(var_133_object);
		}
		var_135_bool = var_41_bool == (int)12339;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_8064();
		}
		var_139_bool = var_41_bool == (int)9878;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_8102();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_8070();
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_7951(var_147_object);
		}
		var_149_bool = var_41_bool == (int)9891;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_8108();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_8114();
		}
		var_172_bool = var_41_bool == (int)11436;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_8159();
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_8165();
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_8185(var_190_object);
		}
		var_197_bool = var_41_bool == (int)11437;
		if(var_197_bool != 0) {
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_8159();
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_8165();
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_8185(var_203_object);
		}
		var_205_bool = var_41_bool == (int)11447;
		if(var_205_bool != 0) {
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_8201();
		}
		var_211_bool = var_41_bool == (int)11448;
		if(var_211_bool != 0) {
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_8201();
		}
		var_215_bool = var_40_string == (int)9791;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8926);
			@@@var_0_object:ClearReplies();
			var_232_bool = 0;
			var_232_bool = 0;
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_8956(var_234_object);
			if(var_233_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_8968(var_242_object);
				if(var_241_bool != 0) {
					var_232_bool = 1;
				}
			}
			if(var_232_bool != 0) {
				@@@var_0_object:AddReply((int)8977, (int)9847, (int)9846);
			}
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0;
			var_251_bool = 0;
			var_252_bool = 0; var_253_object = Obj();
			var_253_object = var_1_object;
			func_8992(var_253_object);
			if(var_252_bool != 0) {
				var_258_bool = 0; var_259_object = Obj();
				var_259_object = var_1_object;
				func_8956(var_259_object);
				if(var_258_bool != 0) {
					var_251_bool = 1;
				}
			}
			if(var_251_bool != 0) {
				var_260_bool = 0; var_261_object = Obj();
				var_261_object = var_1_object;
				func_8968(var_261_object);
				var_262_bool = var_260_bool == 0; //@nz
				if(var_262_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)9005, (int)9877, (int)9876);
			}
			var_266_bool = 0;
			var_266_bool = 0;
			var_267_bool = 0; var_268_object = Obj();
			var_268_object = var_1_object;
			func_9028(var_268_object);
			if(var_267_bool != 0) {
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_9016(var_274_object);
				if(var_273_bool != 0) {
					var_266_bool = 1;
				}
			}
			if(var_266_bool != 0) {
				@@@var_0_object:AddReply((int)9008, (int)9880, (int)9879);
			}
			var_282_bool = 0;
			var_282_bool = 0;
			var_283_bool = 0; var_284_object = Obj();
			var_284_object = var_1_object;
			func_9040(var_284_object);
			if(var_283_bool != 0) {
				var_289_bool = 0; var_290_object = Obj();
				var_290_object = var_1_object;
				func_9052(var_290_object);
				if(var_289_bool != 0) {
					var_282_bool = 1;
				}
			}
			if(var_282_bool != 0) {
				@@@var_0_object:AddReply((int)10218, (int)11265, (int)11264);
			}
			var_298_bool = 0;
			var_298_bool = 0;
			var_299_bool = 0; var_300_object = Obj();
			var_300_object = var_1_object;
			func_9076(var_300_object);
			if(var_299_bool != 0) {
				var_305_bool = 0; var_306_object = Obj();
				var_306_object = var_1_object;
				func_9064(var_306_object);
				if(var_305_bool != 0) {
					var_298_bool = 1;
				}
			}
			if(var_298_bool != 0) {
				@@@var_0_object:AddReply((int)10373, (int)11439, (int)11438);
			}
			@@@var_0_object:AddReply((int)8975, (int)9792, (int)9844);
			@@@var_0_object:AddReply((int)8976, (int)9815, (int)9845);
			@@@var_0_object:AddReply((int)9020, (int)9890, (int)9892);
			@@@var_0_object:AddReply((int)11139, (int)-1, (int)12328);
			return 0;
		}
		var_327_bool = var_40_string == (int)9815;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8949);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8950, (int)9817, (int)9816);
			@@@var_0_object:AddReply((int)8963, (int)9832, (int)9829);
			@@@var_0_object:AddReply((int)8964, (int)9832, (int)9831);
			@@@var_0_object:AddReply((int)8972, (int)9841, (int)9840);
			return 0;
		}
		var_343_bool = var_40_string == (int)9841;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8974, (int)9817, (int)9842);
			return 0;
		}
		var_350_bool = var_40_string == (int)9832;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8966, (int)9834, (int)9833);
			@@@var_0_object:AddReply((int)8971, (int)9834, (int)9838);
			return 0;
		}
		var_360_bool = var_40_string == (int)9834;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_3846(var_41_bool, "Rage");
			@@@var_0_object:SetMessage((int)8967);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8968, (int)9836, (int)9835);
			@@@var_0_object:AddReply((int)8970, (int)-1, (int)9837);
			return 0;
		}
		var_370_bool = var_40_string == (int)9836;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8969);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_374_bool = var_40_string == (int)9817;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8952, (int)-1, (int)9818);
			@@@var_0_object:AddReply((int)8953, (int)-1, (int)9819);
			@@@var_0_object:AddReply((int)8954, (int)9821, (int)9820);
			return 0;
		}
		var_387_bool = var_40_string == (int)9821;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8956, (int)-1, (int)9822);
			@@@var_0_object:AddReply((int)8957, (int)9824, (int)9823);
			return 0;
		}
		var_397_bool = var_40_string == (int)9824;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8959, (int)9826, (int)9825);
			@@@var_0_object:AddReply((int)8962, (int)-1, (int)9828);
			return 0;
		}
		var_407_bool = var_40_string == (int)9826;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8961, (int)-1, (int)9827);
			return 0;
		}
		var_414_bool = var_40_string == (int)9792;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8928, (int)9794, (int)9793);
			@@@var_0_object:AddReply((int)8941, (int)9808, (int)9807);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xf06";
		EMIT "Pop(1)";
		EMIT "Push((int) 10085)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 10086)";
		EMIT "Push((int) 11117)";
		EMIT "Push((int) 11116)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 10106)";
		EMIT "Push((int) 11117)";
		EMIT "Push((int) 11139)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 10107)";
		EMIT "Push((int) 11142)";
		EMIT "Push((int) 11141)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_424_bool = var_40_string == (int)11142;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10109, (int)11117, (int)11143);
			@@@var_0_object:AddReply((int)10110, (int)11117, (int)11145);
			return 0;
		}
		var_434_bool = var_40_string == (int)11117;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10088, (int)11119, (int)11118);
			@@@var_0_object:AddReply((int)10105, (int)11121, (int)11137);
			return 0;
		}
		var_444_bool = var_40_string == (int)11119;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10090, (int)11121, (int)11120);
			@@@var_0_object:AddReply((int)10101, (int)11132, (int)11131);
			return 0;
		}
		var_454_bool = var_40_string == (int)11132;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10103, (int)11121, (int)11133);
			@@@var_0_object:AddReply((int)10104, (int)11121, (int)11135);
			return 0;
		}
		var_464_bool = var_40_string == (int)11121;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10092, (int)11123, (int)11122);
			@@@var_0_object:AddReply((int)10097, (int)11128, (int)11127);
			return 0;
		}
		var_474_bool = var_40_string == (int)11128;
		if(var_474_bool != 0) {
			var_475_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10099, (int)-1, (int)11129);
			@@@var_0_object:AddReply((int)10100, (int)-1, (int)11130);
			return 0;
		}
		var_484_bool = var_40_string == (int)11123;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10094, (int)-1, (int)11124);
			@@@var_0_object:AddReply((int)10095, (int)-1, (int)11125);
			@@@var_0_object:AddReply((int)10096, (int)-1, (int)11126);
			return 0;
		}
		var_497_bool = var_40_string == (int)9808;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8943, (int)9810, (int)9809);
			return 0;
		}
		var_504_bool = var_40_string == (int)9810;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8944);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8945, (int)-1, (int)9811);
			@@@var_0_object:AddReply((int)8946, (int)9813, (int)9812);
			return 0;
		}
		var_514_bool = var_40_string == (int)9813;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8948, (int)-1, (int)9814);
			return 0;
		}
		var_521_bool = var_40_string == (int)9794;
		if(var_521_bool != 0) {
			var_522_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8929);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8930, (int)9796, (int)9795);
			@@@var_0_object:AddReply((int)8938, (int)9804, (int)9803);
			return 0;
		}
		var_531_bool = var_40_string == (int)9804;
		if(var_531_bool != 0) {
			var_532_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8940, (int)9796, (int)9805);
			return 0;
		}
		var_538_bool = var_40_string == (int)9796;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8932, (int)-1, (int)9797);
			@@@var_0_object:AddReply((int)8933, (int)-1, (int)9798);
			@@@var_0_object:AddReply((int)8934, (int)9800, (int)9799);
			return 0;
		}
		var_551_bool = var_40_string == (int)9800;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8936, (int)-1, (int)9801);
			@@@var_0_object:AddReply((int)8937, (int)-1, (int)9802);
			return 0;
		}
		var_561_bool = var_40_string == (int)11439;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10375, (int)11442, (int)11440);
			@@@var_0_object:AddReply((int)10376, (int)-1, (int)11441);
			return 0;
		}
		var_571_bool = var_40_string == (int)11442;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10378, (int)11446, (int)11443);
			@@@var_0_object:AddReply((int)10379, (int)11445, (int)11444);
			return 0;
		}
		var_581_bool = var_40_string == (int)11445;
		if(var_581_bool != 0) {
			var_582_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10383, (int)-1, (int)11448);
			return 0;
		}
		var_588_bool = var_40_string == (int)11446;
		if(var_588_bool != 0) {
			var_589_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10382, (int)-1, (int)11447);
			return 0;
		}
		var_595_bool = var_40_string == (int)11265;
		if(var_595_bool != 0) {
			var_596_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10219);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10361, (int)11410, (int)11423);
			@@@var_0_object:AddReply((int)10347, (int)11410, (int)11408);
			@@@var_0_object:AddReply((int)10348, (int)11410, (int)11409);
			return 0;
		}
		var_608_bool = var_40_string == (int)11410;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10349);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10350, (int)11413, (int)11412);
			@@@var_0_object:AddReply((int)10362, (int)11426, (int)11425);
			return 0;
		}
		var_618_bool = var_40_string == (int)11426;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10364, (int)11428, (int)11427);
			return 0;
		}
		var_625_bool = var_40_string == (int)11428;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10366, (int)11415, (int)11429);
			return 0;
		}
		var_632_bool = var_40_string == (int)11413;
		if(var_632_bool != 0) {
			var_633_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10352, (int)11415, (int)11414);
			return 0;
		}
		var_639_bool = var_40_string == (int)11415;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10354, (int)11417, (int)11416);
			return 0;
		}
		var_646_bool = var_40_string == (int)11417;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10356, (int)11419, (int)11418);
			return 0;
		}
		var_653_bool = var_40_string == (int)11419;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10358, (int)11421, (int)11420);
			@@@var_0_object:AddReply((int)10367, (int)11432, (int)11431);
			return 0;
		}
		var_663_bool = var_40_string == (int)11432;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10369, (int)11434, (int)11433);
			return 0;
		}
		var_670_bool = var_40_string == (int)11421;
		if(var_670_bool != 0) {
			var_671_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10360, (int)11434, (int)11422);
			return 0;
		}
		var_677_bool = var_40_string == (int)11434;
		if(var_677_bool != 0) {
			var_678_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10370);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10371, (int)-1, (int)11436);
			@@@var_0_object:AddReply((int)10372, (int)-1, (int)11437);
			return 0;
		}
		var_687_bool = var_40_string == (int)9880;
		if(var_687_bool != 0) {
			var_688_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9009);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9014, (int)9887, (int)9886);
			return 0;
		}
		var_694_bool = var_40_string == (int)9887;
		if(var_694_bool != 0) {
			var_695_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9015);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9016, (int)9890, (int)9888);
			@@@var_0_object:AddReply((int)9017, (int)9890, (int)9889);
			@@@var_0_object:AddReply((int)9022, (int)9890, (int)9894);
			return 0;
		}
		var_707_bool = var_40_string == (int)9890;
		if(var_707_bool != 0) {
			var_708_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9018);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9019, (int)-1, (int)9891);
			return 0;
		}
		var_714_bool = var_40_string == (int)9877;
		if(var_714_bool != 0) {
			var_715_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9006);
			@@@var_0_object:ClearReplies();
			var_717_bool = 0;
			var_717_bool = 1;
			var_718_bool = 0; var_719_object = Obj();
			var_719_object = var_1_object;
			func_8980(var_719_object);
			if(var_718_bool != 1) {
				var_724_bool = 0; var_725_object = Obj();
				var_725_object = var_1_object;
				func_8992(var_725_object);
				if(var_724_bool != 1) {
					var_717_bool = 0;
				}
			}
			if(var_717_bool != 0) {
				@@@var_0_object:AddReply((int)9007, (int)-1, (int)9878);
			}
			return 0;
		}
		var_730_bool = var_40_string == (int)9847;
		if(var_730_bool != 0) {
			var_731_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8979, (int)9852, (int)9848);
			@@@var_0_object:AddReply((int)8980, (int)9850, (int)9849);
			return 0;
		}
		var_740_bool = var_40_string == (int)9850;
		if(var_740_bool != 0) {
			var_741_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8982, (int)-1, (int)9851);
			return 0;
		}
		var_747_bool = var_40_string == (int)9852;
		if(var_747_bool != 0) {
			var_748_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8984, (int)9854, (int)9853);
			@@@var_0_object:AddReply((int)8987, (int)9857, (int)9856);
			return 0;
		}
		var_757_bool = var_40_string == (int)9857;
		if(var_757_bool != 0) {
			var_758_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8989, (int)9860, (int)9858);
			return 0;
		}
		var_764_bool = var_40_string == (int)9860;
		if(var_764_bool != 0) {
			var_765_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8992, (int)9863, (int)9861);
			@@@var_0_object:AddReply((int)8993, (int)9865, (int)9862);
			return 0;
		}
		var_774_bool = var_40_string == (int)9865;
		if(var_774_bool != 0) {
			var_775_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8997, (int)9859, (int)9866);
			return 0;
		}
		var_781_bool = var_40_string == (int)9863;
		if(var_781_bool != 0) {
			var_782_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8995, (int)9859, (int)9864);
			return 0;
		}
		var_788_bool = var_40_string == (int)9854;
		if(var_788_bool != 0) {
			var_789_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8986, (int)9859, (int)9855);
			return 0;
		}
		var_795_bool = var_40_string == (int)9859;
		if(var_795_bool != 0) {
			var_796_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8998, (int)9870, (int)9869);
			return 0;
		}
		var_802_bool = var_40_string == (int)9870;
		if(var_802_bool != 0) {
			var_803_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9000, (int)9873, (int)9871);
			@@@var_0_object:AddReply((int)9011, (int)9883, (int)9882);
			@@@var_0_object:AddReply((int)11150, (int)-1, (int)12339);
			return 0;
		}
		var_815_bool = var_40_string == (int)9883;
		if(var_815_bool != 0) {
			var_816_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9013, (int)9873, (int)9884);
			return 0;
		}
		var_822_bool = var_40_string == (int)9873;
		if(var_822_bool != 0) {
			var_823_string = "";
			func_3846(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9003, (int)-1, (int)9874);
			@@@var_0_object:AddReply((int)9004, (int)-1, (int)9875);
			return 0;
		}
		var_3_string = true;
		var_831_bool = 0;
		func_7949(var_831_bool);
		if(var_831_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf17";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7875();
		var_45_bool = var_41_bool == (int)12081;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_8207();
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_8251();
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_8257(var_115_object);
		}
		var_141_bool = var_41_bool == (int)12082;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_8207();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_8251();
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_8257(var_147_object);
		}
		var_149_bool = var_41_bool == (int)12079;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_8207();
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_8251();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_8257(var_155_object);
		}
		var_157_bool = var_41_bool == (int)11191;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_8207();
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_8251();
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_8257(var_163_object);
		}
		var_165_bool = var_41_bool == (int)12096;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_8273();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_8279();
		}
		var_211_bool = var_41_bool == (int)12097;
		if(var_211_bool != 0) {
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_8273();
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_8586();
		}
		var_266_bool = var_41_bool == (int)12105;
		if(var_266_bool != 0) {
			var_267_object = Obj(); var_268_object = Obj();
			var_267_object = var_1_object;
			var_268_object = var_0_object;
			func_8330();
			var_271_object = Obj(); var_272_object = Obj();
			var_271_object = var_1_object;
			var_272_object = var_0_object;
			func_8336(var_272_object);
		}
		var_329_bool = var_41_bool == (int)10563;
		if(var_329_bool != 0) {
			var_330_object = Obj(); var_331_object = Obj();
			var_330_object = var_1_object;
			var_331_object = var_0_object;
			func_8330();
			var_332_object = Obj(); var_333_object = Obj();
			var_332_object = var_1_object;
			var_333_object = var_0_object;
			func_8336(var_333_object);
		}
		var_335_bool = var_41_bool == (int)12103;
		if(var_335_bool != 0) {
			var_336_object = Obj(); var_337_object = Obj();
			var_336_object = var_1_object;
			var_337_object = var_0_object;
			func_8330();
			var_338_object = Obj(); var_339_object = Obj();
			var_338_object = var_1_object;
			var_339_object = var_0_object;
			func_8336(var_339_object);
		}
		var_341_bool = var_41_bool == (int)10572;
		if(var_341_bool != 0) {
			var_342_object = Obj(); var_343_object = Obj();
			var_342_object = var_1_object;
			var_343_object = var_0_object;
			func_8330();
			var_344_object = Obj(); var_345_object = Obj();
			var_344_object = var_1_object;
			var_345_object = var_0_object;
			func_8336(var_345_object);
		}
		var_347_bool = var_41_bool == (int)10573;
		if(var_347_bool != 0) {
			var_348_object = Obj(); var_349_object = Obj();
			var_348_object = var_1_object;
			var_349_object = var_0_object;
			func_8330();
			var_350_object = Obj(); var_351_object = Obj();
			var_350_object = var_1_object;
			var_351_object = var_0_object;
			func_8336(var_351_object);
		}
		var_353_bool = var_40_string == (int)11951;
		if(var_353_bool != 0) {
			var_354_bool = 0;
			var_354_bool = 0;
			var_355_bool = 0; var_356_object = Obj();
			var_356_object = var_1_object;
			func_9088(var_356_object);
			if(var_355_bool != 0) {
				var_363_bool = 0; var_364_object = Obj();
				var_364_object = var_1_object;
				func_9100(var_364_object);
				if(var_363_bool != 0) {
					var_354_bool = 1;
				}
			}
			if(var_354_bool != 0) {
				var_369_object = Obj(); var_370_object = Obj();
				var_369_object = var_1_object;
				var_370_object = var_0_object;
				func_8714();
				var_373_string = "";
				func_5568(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10811);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10812, (int)11147, (int)11952);
				return 0;
			}
			var_392_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10836);
			@@@var_0_object:ClearReplies();
			var_394_bool = 0;
			var_394_bool = 0;
			var_395_bool = 0; var_396_object = Obj();
			var_396_object = var_1_object;
			func_9112(var_396_object);
			if(var_395_bool != 0) {
				var_401_bool = 0; var_402_object = Obj();
				var_402_object = var_1_object;
				func_9124(var_402_object);
				if(var_401_bool != 0) {
					var_394_bool = 1;
				}
			}
			if(var_394_bool != 0) {
				@@@var_0_object:AddReply((int)10839, (int)11148, (int)11983);
			}
			var_410_bool = 0; var_411_object = Obj();
			var_411_object = var_1_object;
			func_8838(var_410_bool, var_411_object);
			if(var_410_bool != 0) {
				@@@var_0_object:AddReply((int)10838, (int)10519, (int)11982);
			}
			var_417_bool = 0; var_418_object = Obj();
			var_418_object = var_1_object;
			func_9136(var_417_bool, var_418_object);
			if(var_417_bool != 0) {
				@@@var_0_object:AddReply((int)11508, (int)12709, (int)12708);
			}
			var_439_bool = 0;
			var_439_bool = 0;
			var_440_bool = 0; var_441_object = Obj();
			var_441_object = var_1_object;
			func_9166(var_440_bool, var_441_object);
			if(var_440_bool != 0) {
				var_453_bool = 0; var_454_object = Obj();
				var_454_object = var_1_object;
				func_9194(var_454_object);
				if(var_453_bool != 0) {
					var_439_bool = 1;
				}
			}
			if(var_439_bool != 0) {
				@@@var_0_object:AddReply((int)10837, (int)10553, (int)11981);
			}
			@@@var_0_object:AddReply((int)11480, (int)-1, (int)12686);
			return 0;
		}
		var_466_bool = var_40_string == (int)10553;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9594);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9595, (int)10555, (int)10554);
			@@@var_0_object:AddReply((int)9612, (int)10555, (int)10574);
			@@@var_0_object:AddReply((int)9613, (int)10555, (int)10576);
			return 0;
		}
		var_479_bool = var_40_string == (int)10555;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9597, (int)10557, (int)10556);
			@@@var_0_object:AddReply((int)9608, (int)10571, (int)10570);
			return 0;
		}
		var_489_bool = var_40_string == (int)10571;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9609);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9610, (int)-1, (int)10572);
			@@@var_0_object:AddReply((int)9611, (int)-1, (int)10573);
			return 0;
		}
		var_499_bool = var_40_string == (int)10557;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9598);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9599, (int)10559, (int)10558);
			@@@var_0_object:AddReply((int)9607, (int)10559, (int)10568);
			return 0;
		}
		var_509_bool = var_40_string == (int)10559;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9600);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9601, (int)10561, (int)10560);
			@@@var_0_object:AddReply((int)9605, (int)10561, (int)10564);
			@@@var_0_object:AddReply((int)9606, (int)10561, (int)10566);
			return 0;
		}
		var_522_bool = var_40_string == (int)10561;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9602);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9603, (int)12104, (int)10562);
			@@@var_0_object:AddReply((int)9604, (int)-1, (int)10563);
			@@@var_0_object:AddReply((int)10944, (int)-1, (int)12103);
			return 0;
		}
		var_535_bool = var_40_string == (int)12104;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10946, (int)-1, (int)12105);
			return 0;
		}
		var_542_bool = var_40_string == (int)12709;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11510, (int)12711, (int)12710);
			@@@var_0_object:AddReply((int)11512, (int)12713, (int)12712);
			return 0;
		}
		var_552_bool = var_40_string == (int)12713;
		if(var_552_bool != 0) {
			var_553_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11513);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11514, (int)12715, (int)12714);
			return 0;
		}
		var_559_bool = var_40_string == (int)12715;
		if(var_559_bool != 0) {
			var_560_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11516, (int)-1, (int)12716);
			return 0;
		}
		var_566_bool = var_40_string == (int)12711;
		if(var_566_bool != 0) {
			var_567_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11511);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11517, (int)12718, (int)12717);
			return 0;
		}
		var_573_bool = var_40_string == (int)12718;
		if(var_573_bool != 0) {
			var_574_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11519, (int)-1, (int)12719);
			return 0;
		}
		var_580_bool = var_40_string == (int)10519;
		if(var_580_bool != 0) {
			var_581_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9568, (int)10521, (int)10520);
			@@@var_0_object:AddReply((int)9589, (int)10521, (int)10545);
			@@@var_0_object:AddReply((int)9590, (int)10548, (int)10547);
			return 0;
		}
		var_593_bool = var_40_string == (int)10548;
		if(var_593_bool != 0) {
			var_594_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9592, (int)10521, (int)10549);
			@@@var_0_object:AddReply((int)9593, (int)10521, (int)10551);
			return 0;
		}
		var_603_bool = var_40_string == (int)10521;
		if(var_603_bool != 0) {
			var_604_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9572, (int)10525, (int)10524);
			@@@var_0_object:AddReply((int)9570, (int)-1, (int)10522);
			@@@var_0_object:AddReply((int)9571, (int)-1, (int)10523);
			return 0;
		}
		var_616_bool = var_40_string == (int)10525;
		if(var_616_bool != 0) {
			var_617_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9573);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9574, (int)10527, (int)10526);
			@@@var_0_object:AddReply((int)9585, (int)10540, (int)10539);
			return 0;
		}
		var_626_bool = var_40_string == (int)10540;
		if(var_626_bool != 0) {
			var_627_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9587, (int)10527, (int)10541);
			@@@var_0_object:AddReply((int)9588, (int)10527, (int)10543);
			return 0;
		}
		var_636_bool = var_40_string == (int)10527;
		if(var_636_bool != 0) {
			var_637_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9577, (int)10530, (int)10529);
			return 0;
		}
		var_643_bool = var_40_string == (int)10530;
		if(var_643_bool != 0) {
			var_644_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9579, (int)10532, (int)10531);
			@@@var_0_object:AddReply((int)9583, (int)10532, (int)10535);
			@@@var_0_object:AddReply((int)9584, (int)10532, (int)10537);
			return 0;
		}
		var_656_bool = var_40_string == (int)10532;
		if(var_656_bool != 0) {
			var_657_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9581, (int)-1, (int)10533);
			@@@var_0_object:AddReply((int)9582, (int)-1, (int)10534);
			return 0;
		}
		var_666_bool = var_40_string == (int)11148;
		if(var_666_bool != 0) {
			var_667_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10115, (int)11154, (int)11151);
			return 0;
		}
		var_673_bool = var_40_string == (int)11154;
		if(var_673_bool != 0) {
			var_674_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10119, (int)11156, (int)11155);
			@@@var_0_object:AddReply((int)10933, (int)12088, (int)12087);
			@@@var_0_object:AddReply((int)10124, (int)11161, (int)11160);
			return 0;
		}
		var_686_bool = var_40_string == (int)11161;
		if(var_686_bool != 0) {
			var_687_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10126, (int)11984, (int)11162);
			@@@var_0_object:AddReply((int)10127, (int)11984, (int)11163);
			return 0;
		}
		var_696_bool = var_40_string == (int)12088;
		if(var_696_bool != 0) {
			var_697_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10935, (int)12090, (int)12089);
			return 0;
		}
		var_703_bool = var_40_string == (int)12090;
		if(var_703_bool != 0) {
			var_704_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10936);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10939, (int)11156, (int)12093);
			@@@var_0_object:AddReply((int)10937, (int)12092, (int)12091);
			return 0;
		}
		var_713_bool = var_40_string == (int)12092;
		if(var_713_bool != 0) {
			var_714_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10943, (int)11156, (int)12101);
			return 0;
		}
		var_720_bool = var_40_string == (int)11156;
		if(var_720_bool != 0) {
			var_721_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10120);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10121, (int)11984, (int)11157);
			@@@var_0_object:AddReply((int)10123, (int)12094, (int)11159);
			return 0;
		}
		var_730_bool = var_40_string == (int)12094;
		if(var_730_bool != 0) {
			var_731_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10940);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10122, (int)11984, (int)11158);
			return 0;
		}
		var_737_bool = var_40_string == (int)11984;
		if(var_737_bool != 0) {
			var_738_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10941, (int)-1, (int)12096);
			@@@var_0_object:AddReply((int)10942, (int)-1, (int)12097);
			return 0;
		}
		var_747_bool = var_40_string == (int)11147;
		if(var_747_bool != 0) {
			var_748_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10138, (int)11181, (int)11180);
			@@@var_0_object:AddReply((int)10140, (int)11183, (int)11182);
			return 0;
		}
		var_757_bool = var_40_string == (int)11183;
		if(var_757_bool != 0) {
			var_758_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10141);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10142, (int)11186, (int)11184);
			@@@var_0_object:AddReply((int)10143, (int)12070, (int)11185);
			return 0;
		}
		var_767_bool = var_40_string == (int)12070;
		if(var_767_bool != 0) {
			var_768_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10922, (int)11181, (int)12071);
			@@@var_0_object:AddReply((int)10923, (int)12073, (int)12072);
			return 0;
		}
		var_777_bool = var_40_string == (int)12073;
		if(var_777_bool != 0) {
			var_778_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10925, (int)11181, (int)12074);
			return 0;
		}
		var_784_bool = var_40_string == (int)11186;
		if(var_784_bool != 0) {
			var_785_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10144);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10919, (int)11175, (int)12068);
			@@@var_0_object:AddReply((int)10920, (int)-1, (int)12069);
			return 0;
		}
		var_794_bool = var_40_string == (int)11181;
		if(var_794_bool != 0) {
			var_795_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10145, (int)11188, (int)11187);
			@@@var_0_object:AddReply((int)10134, (int)11175, (int)11174);
			return 0;
		}
		var_804_bool = var_40_string == (int)11175;
		if(var_804_bool != 0) {
			var_805_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10135);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10136, (int)12083, (int)11176);
			@@@var_0_object:AddReply((int)10137, (int)12083, (int)11178);
			return 0;
		}
		var_814_bool = var_40_string == (int)12083;
		if(var_814_bool != 0) {
			var_815_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10932, (int)11188, (int)12085);
			return 0;
		}
		var_821_bool = var_40_string == (int)11188;
		if(var_821_bool != 0) {
			var_822_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10146);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10147, (int)11190, (int)11189);
			@@@var_0_object:AddReply((int)10149, (int)-1, (int)11191);
			return 0;
		}
		var_831_bool = var_40_string == (int)11190;
		if(var_831_bool != 0) {
			var_832_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10926, (int)12080, (int)12078);
			@@@var_0_object:AddReply((int)10927, (int)-1, (int)12079);
			return 0;
		}
		var_841_bool = var_40_string == (int)12080;
		if(var_841_bool != 0) {
			var_842_string = "";
			func_5568(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10929, (int)-1, (int)12081);
			@@@var_0_object:AddReply((int)10930, (int)-1, (int)12082);
			return 0;
		}
		var_3_string = true;
		var_850_bool = 0;
		func_7949(var_850_bool);
		if(var_850_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x15d1";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7875();
		var_45_bool = var_41_bool == (int)12763;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_8472();
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_8143(var_92_object);
		}
		var_118_bool = var_41_bool == (int)12778;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_8495();
		}
		var_124_bool = var_40_string == (int)12752;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11558);
			@@@var_0_object:ClearReplies();
			var_141_bool = 0; var_142_object = Obj();
			var_142_object = var_1_object;
			func_9206(var_142_object);
			if(var_141_bool != 0) {
				@@@var_0_object:AddReply((int)11559, (int)12754, (int)12753);
			}
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_9218(var_153_object);
			if(var_152_bool != 0) {
				@@@var_0_object:AddReply((int)11570, (int)12765, (int)12764);
			}
			@@@var_0_object:AddReply((int)11589, (int)-1, (int)12784);
			return 0;
		}
		var_165_bool = var_40_string == (int)12765;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11572, (int)12767, (int)12766);
			var_171_bool = 0; var_172_object = Obj();
			var_172_object = var_1_object;
			func_8778(var_172_object);
			if(var_171_bool != 0) {
				@@@var_0_object:AddReply((int)11585, (int)-1, (int)12779);
			}
			return 0;
		}
		var_181_bool = var_40_string == (int)12767;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11573);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11574, (int)12769, (int)12768);
			return 0;
		}
		var_188_bool = var_40_string == (int)12769;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11576, (int)12771, (int)12770);
			return 0;
		}
		var_195_bool = var_40_string == (int)12771;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11578, (int)12773, (int)12772);
			@@@var_0_object:AddReply((int)11586, (int)12781, (int)12780);
			return 0;
		}
		var_205_bool = var_40_string == (int)12781;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11587);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11588, (int)12773, (int)12782);
			return 0;
		}
		var_212_bool = var_40_string == (int)12773;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11580, (int)12775, (int)12774);
			return 0;
		}
		var_219_bool = var_40_string == (int)12775;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11582, (int)12777, (int)12776);
			return 0;
		}
		var_226_bool = var_40_string == (int)12777;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11584, (int)-1, (int)12778);
			return 0;
		}
		var_233_bool = var_40_string == (int)12754;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11561, (int)12756, (int)12755);
			return 0;
		}
		var_240_bool = var_40_string == (int)12756;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11562);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11563, (int)12758, (int)12757);
			return 0;
		}
		var_247_bool = var_40_string == (int)12758;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11564);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11565, (int)12760, (int)12759);
			return 0;
		}
		var_254_bool = var_40_string == (int)12760;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11567, (int)12762, (int)12761);
			return 0;
		}
		var_261_bool = var_40_string == (int)12762;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_6907(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11569, (int)-1, (int)12763);
			return 0;
		}
		var_3_string = true;
		var_267_bool = 0;
		func_7949(var_267_bool);
		if(var_267_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1b0c";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	if((int)1 != 0) {
		func_7875();
		var_45_bool = var_41_int == (int)14919;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_8525();
		}
		var_51_bool = var_41_int == (int)14927;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_8531();
		}
		var_57_bool = var_41_int == (int)14931;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_8519();
		}
		var_63_bool = var_41_int == (int)14943;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_8537();
		}
		var_69_bool = var_40_int == (int)14918;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13660);
			@@@var_0_object:ClearReplies();
			var_86_bool = 0;
			var_86_bool = 0;
			var_87_bool = 0; var_88_object = Obj();
			var_88_object = var_1_object;
			func_9338(var_88_object);
			if(var_87_bool != 0) {
				var_95_bool = 0; var_96_object = Obj();
				var_96_object = var_1_object;
				func_9314(var_96_object);
				if(var_95_bool != 0) {
					var_86_bool = 1;
				}
			}
			if(var_86_bool != 0) {
				@@@var_0_object:AddReply((int)13661, (int)14920, (int)14919);
			}
			var_104_bool = 0;
			var_104_bool = 0;
			var_105_bool = 0;
			var_105_bool = 0;
			var_106_bool = 0; var_107_object = Obj();
			var_107_object = var_1_object;
			func_9314(var_107_object);
			var_108_bool = var_106_bool == 0; //@nz
			if(var_108_bool != 0) {
				var_109_bool = 0; var_110_object = Obj();
				var_110_object = var_1_object;
				func_9350(var_110_object);
				if(var_109_bool != 0) {
					var_105_bool = 1;
				}
			}
			if(var_105_bool != 0) {
				var_115_bool = 0; var_116_object = Obj();
				var_116_object = var_1_object;
				func_9326(var_116_object);
				if(var_115_bool != 0) {
					var_104_bool = 1;
				}
			}
			if(var_104_bool != 0) {
				@@@var_0_object:AddReply((int)13669, (int)14928, (int)14927);
			}
			var_124_bool = 0;
			var_124_bool = 0;
			var_125_bool = 0; var_126_object = Obj();
			var_126_object = var_1_object;
			func_9326(var_126_object);
			if(var_125_bool != 0) {
				var_127_bool = 0; var_128_object = Obj();
				var_128_object = var_1_object;
				func_9362(var_128_object);
				if(var_127_bool != 0) {
					var_124_bool = 1;
				}
			}
			if(var_124_bool != 0) {
				@@@var_0_object:AddReply((int)13683, (int)14944, (int)14943);
			}
			@@@var_0_object:AddReply((int)13674, (int)-1, (int)14932);
			return 0;
		}
		var_140_bool = var_40_int == (int)14944;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13685, (int)14946, (int)14945);
			return 0;
		}
		var_147_bool = var_40_int == (int)14946;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13686);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13687, (int)-1, (int)14947);
			return 0;
		}
		var_154_bool = var_40_int == (int)14928;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13671, (int)14930, (int)14929);
			@@@var_0_object:AddReply((int)13675, (int)14930, (int)14933);
			return 0;
		}
		var_164_bool = var_40_int == (int)14930;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13673, (int)-1, (int)14931);
			return 0;
		}
		var_171_bool = var_40_int == (int)14920;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13663, (int)14922, (int)14921);
			@@@var_0_object:AddReply((int)13677, (int)14937, (int)14936);
			return 0;
		}
		var_181_bool = var_40_int == (int)14937;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13679, (int)14924, (int)14938);
			@@@var_0_object:AddReply((int)13680, (int)-1, (int)14940);
			return 0;
		}
		var_191_bool = var_40_int == (int)14922;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13665, (int)14924, (int)14923);
			return 0;
		}
		var_198_bool = var_40_int == (int)14924;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13666);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13667, (int)14926, (int)14925);
			return 0;
		}
		var_205_bool = var_40_int == (int)14926;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13676, (int)14941, (int)14935);
			return 0;
		}
		var_212_bool = var_40_int == (int)14941;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_7433(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13681);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13682, (int)-1, (int)14942);
			return 0;
		}
		var_3_string = true;
		var_218_bool = 0;
		func_7949(var_218_bool);
		if(var_218_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1d1a";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	func_9734();
	var_41_bool = 0;
	func_7792(var_41_bool);
	var_44_bool = var_41_bool == 0; //@nz
	if(var_44_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_45_string = "";
	func_7857("Neutral");
	lshWaitForAnimEnd();
	goto Label_19;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_9218(var_152_bool)
{
	var_154_int = 0; var_155_string = "";
	func_7892(var_154_int, "ood5BigVlad1");
	var_157_bool = var_154_int == (int)0;
	if(var_157_bool != 0) {
		var_152_bool = 1;
		return 0;
	}
	var_152_bool = 0;
	return 0;
}


func_9734()
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_8201()
{
	SetVariable("ood3BigVlad5", (int)1);
	return 0;
}


func_9738(var_41_object)
{
	var_42_bool = GlobalVars[1];
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_44_int = 0; var_45_object = Obj();
		var_41_object = var_45_object;
		TaskCall(2);
		func_49(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		var_153_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_154_bool = 0; var_155_int = 0;
	func_7930(var_154_bool, (int)1);
	if(var_154_bool != 0) {
		var_162_int = 0; var_163_object = Obj();
		var_41_object = var_163_object;
		TaskCall(6);
		func_1113(var_164_object, var_162_int, var_163_object);
		TaskReturn();
		return 0;
	}
	var_359_bool = 0; var_360_int = 0;
	func_7930(var_359_bool, (int)2);
	if(var_359_bool != 0) {
		var_361_int = 0; var_362_object = Obj();
		var_41_object = var_362_object;
		TaskCall(8);
		func_2719(var_363_object, var_361_int, var_362_object);
		TaskReturn();
		return 0;
	}
	var_471_bool = 0; var_472_int = 0;
	func_7930(var_471_bool, (int)3);
	if(var_471_bool != 0) {
		var_473_int = 0; var_474_object = Obj();
		var_41_object = var_474_object;
		TaskCall(10);
		func_3610(var_475_object, var_473_int, var_474_object);
		TaskReturn();
		return 0;
	}
	var_606_bool = 0; var_607_int = 0;
	func_7930(var_606_bool, (int)4);
	if(var_606_bool != 0) {
		var_608_int = 0; var_609_object = Obj();
		var_41_object = var_609_object;
		TaskCall(12);
		func_5360(var_610_object, var_608_int, var_609_object);
		TaskReturn();
		return 0;
	}
	var_742_bool = 0; var_743_int = 0;
	func_7930(var_742_bool, (int)5);
	if(var_742_bool != 0) {
		var_744_int = 0; var_745_object = Obj();
		var_41_object = var_745_object;
		TaskCall(14);
		func_6771(var_746_object, var_744_int, var_745_object);
		TaskReturn();
		return 0;
	}
	var_806_bool = 0; var_807_int = 0;
	func_7930(var_806_bool, (int)6);
	if(var_806_bool != 0) {
		var_808_int = 0; var_809_object = Obj();
		var_41_object = var_809_object;
		TaskCall(4);
		func_322(var_810_object, var_808_int, var_809_object);
		TaskReturn();
		return 0;
	}
	var_937_bool = 0; var_938_int = 0;
	func_7930(var_937_bool, (int)8);
	if(var_937_bool != 0) {
		var_939_int = 0; var_940_object = Obj();
		var_41_object = var_940_object;
		TaskCall(16);
		func_7250(var_941_object, var_939_int, var_940_object);
		TaskReturn();
		return 0;
	}
	func_7936((bool)0);
	return 0;
}


func_8714()
{
	SetVariable("d4BigVladVisit", (int)1);
	return 0;
}


func_9230(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_7892(var_210_int, "d6q02");
	var_213_bool = var_210_int == (int)1000;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_8207()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("d4q01", (int)1);
	func_9539(Obj());
	var_52_object = var_49_object;
	var_63_float = 0;
	func_7916(var_63_float);
	@@var_49_object:AddMark("d4q01BigVladGotoLara", "pt_map_lara", (int)1, (int)11481, var_63_float);
	var_70_float = 0;
	func_7916(var_70_float);
	@@var_49_object:AddMark("d4q01BigVladGotoSklad", "pt_map_warehouse_gangster", (int)1, (int)11482, var_70_float);
	var_75_float = 0;
	func_7916(var_75_float);
	@@var_49_object:AddMark("d4q01BigVladGotoLaraSelf", "pt_map_bigvlad", (int)1, (int)15320, var_75_float);
	func_9622();
	func_9638();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8720()
{
	var_119_object = Obj(); var_120_object = Obj();
	func_9539(Obj());
	var_121_object = var_120_object;
	var_126_float = 0;
	func_7916(var_126_float);
	@@var_120_object:AddMark("d6q02BigVlad", "pt_map_bigvlad", (int)0, (int)15380, var_126_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3610(var_0_object, var_473_int, var_474_object)
{
	var_476_object = Obj(); var_477_bool = 0; var_478_int = 0; var_479_bool = 0; var_480_object = Obj(); var_481_bool = 0; var_482_int = 0; var_483_bool = 0;
	var_0_object = var_474_object;
	var_484_bool = 0; var_485_object = Obj();
	var_474_object = var_485_object;
	func_7797(var_484_bool, var_485_object);
	var_486_bool = var_484_bool == 0; //@nz
	if(var_486_bool != 0) {
		var_473_int = -2;
		return 8;
	}
	CreateDialog(var_480_object);
	var_487_int = 0;
	func_7945(var_487_int);
	@@var_480_object:SetNPCName(var_487_int);
	var_488_string = "";
	func_7947(var_488_string);
	@@var_480_object:SetPhoto(var_488_string);
	var_489_int = 0;
	func_9589(var_489_int);
	@@var_480_object:SetPlayerName(var_489_int);
	IsOverrideActive(var_481_bool);
	var_490_bool = var_481_bool;
	if(var_490_bool != 0) {
		var_473_int = -2;
		return 8;
	}
	DoDialog(var_480_object);
	var_491_object = Obj(); var_492_object = Obj();
	var_474_object = var_491_object;
	var_480_object = var_492_object;
	TaskCall(11);
	func_3673(var_493_object, var_494_object, var_495_string, var_496_bool, var_491_object, var_492_object);
	TaskReturn();
	@@var_480_object:IsDialogEnd(var_483_bool);
	
Label_3655:
	var_604_bool = var_483_bool == 0; //@nz
	if(var_604_bool != 0) {
		sync();
		@@var_480_object:IsDialogEnd(var_483_bool);
		goto Label_3655;
	}
	var_474_object = Obj();
	func_7853();
	StopDialog(var_480_object);
	@@var_480_object:GetReturnValue((int)-1);
	var_482_int = var_473_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9242(var_215_bool)
{
	var_217_int = 0; var_218_string = "";
	func_7892(var_217_int, "d6q02");
	var_220_bool = var_217_int == (int)-1;
	if(var_220_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_8736()
{
	SetVariable("d6BigVladVisit", (int)1);
	return 0;
}


func_9254(var_196_bool)
{
	var_198_int = 0; var_199_string = "";
	func_7892(var_198_int, "ood6BigVlad1");
	var_201_bool = var_198_int == (int)0;
	if(var_201_bool != 0) {
		var_196_bool = 1;
		return 0;
	}
	var_196_bool = 0;
	return 0;
}


func_551(var_2_object, var_153_string)
{
	var_154_bool = 0;
	func_7949(var_154_bool);
	var_155_bool = var_154_bool == 0; //@nz
	if(var_155_bool != 0) {
		return 0;
	}
	var_156_bool = var_153_string == var_2_object;
	if(var_156_bool != 0) {
		return 0;
	}
	var_157_string = "";
	var_153_string = var_157_string;
	func_7857(var_157_string);
	var_2_object = var_153_string;
	return 0;
}


func_8742()
{
	SetVariable("KnowTermitnik", (int)1);
	return 0;
}


func_8748()
{
	SetVariable("ood1BigVlad1", (int)1);
	return 0;
}


func_49(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_object = var_45_object;
	var_55_bool = 0; var_56_object = Obj();
	var_45_object = var_56_object;
	func_7797(var_55_bool, var_56_object);
	var_95_bool = var_55_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_96_int = 0;
	func_7945(var_96_int);
	@@var_51_object:SetNPCName(var_96_int);
	var_97_string = "";
	func_7947(var_97_string);
	@@var_51_object:SetPhoto(var_97_string);
	var_98_int = 0;
	func_9589(var_98_int);
	@@var_51_object:SetPlayerName(var_98_int);
	IsOverrideActive(var_52_bool);
	var_106_bool = var_52_bool;
	if(var_106_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	DoDialog(var_51_object);
	var_107_object = Obj(); var_108_object = Obj();
	var_45_object = var_107_object;
	var_51_object = var_108_object;
	TaskCall(3);
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object);
	TaskReturn();
	@@var_51_object:IsDialogEnd(var_54_bool);
	
Label_94:
	var_151_bool = var_54_bool == 0; //@nz
	if(var_151_bool != 0) {
		sync();
		@@var_51_object:IsDialogEnd(var_54_bool);
		goto Label_94;
	}
	var_45_object = Obj();
	func_7853();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9266(var_202_bool)
{
	var_204_int = 0; var_205_string = "";
	func_7892(var_204_int, "d6q02KnowAboutAttack");
	var_207_bool = var_204_int == (int)1;
	if(var_207_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_8754()
{
	SetVariable("ood1BigVlad2", (int)1);
	return 0;
}


func_8760()
{
	SetVariable("ood1BigVlad3", (int)1);
	return 0;
}


func_8251()
{
	SetVariable("ood4BigVlad1", (int)1);
	return 0;
}


func_9278(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_7892(var_224_int, "d6q02Trigger");
	var_227_bool = var_224_int != (int)0;
	if(var_227_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_8766(var_240_bool)
{
	var_242_int = 0; var_243_string = "";
	func_7892(var_242_int, "d1q01FirstGeorgVisit");
	var_245_bool = var_242_int == (int)1;
	if(var_245_bool != 0) {
		var_240_bool = 1;
		return 0;
	}
	var_240_bool = 0;
	return 0;
}


func_8257(var_115_object)
{
	var_116_object = Obj(); var_117_string = ""; var_118_float = 0;
	func_9539(Obj());
	var_119_object = var_116_object;
	func_9556(var_116_object, "pt_map_lara", (float)2);
	var_139_object = Obj();
	func_9539(var_139_object);
	@@var_115_object:ShowMap(var_139_object);
	return 0;
}


func_9290(var_130_bool)
{
	var_132_int = 0; var_133_string = "";
	func_7892(var_132_int, "d6q01");
	var_137_bool = var_132_int == (int)1;
	if(var_137_bool != 0) {
		var_130_bool = 1;
		return 0;
	}
	var_130_bool = 0;
	return 0;
}


func_8778(var_171_bool)
{
	var_173_int = 0; var_174_string = "";
	func_7892(var_173_int, "KnowMat");
	var_176_bool = var_173_int == (int)1;
	if(var_176_bool != 0) {
		var_171_bool = 1;
		return 0;
	}
	var_171_bool = 0;
	return 0;
}


func_8273()
{
	SetVariable("ood4BigVlad2", (int)1);
	return 0;
}


func_7250(var_0_object, var_939_int, var_940_object)
{
	var_942_object = Obj(); var_943_bool = 0; var_944_int = 0; var_945_bool = 0; var_946_object = Obj(); var_947_bool = 0; var_948_int = 0; var_949_bool = 0;
	var_0_object = var_940_object;
	var_950_bool = 0; var_951_object = Obj();
	var_940_object = var_951_object;
	func_7797(var_950_bool, var_951_object);
	var_952_bool = var_950_bool == 0; //@nz
	if(var_952_bool != 0) {
		var_939_int = -2;
		return 8;
	}
	CreateDialog(var_946_object);
	var_953_int = 0;
	func_7945(var_953_int);
	@@var_946_object:SetNPCName(var_953_int);
	var_954_string = "";
	func_7947(var_954_string);
	@@var_946_object:SetPhoto(var_954_string);
	var_955_int = 0;
	func_9589(var_955_int);
	@@var_946_object:SetPlayerName(var_955_int);
	IsOverrideActive(var_947_bool);
	var_956_bool = var_947_bool;
	if(var_956_bool != 0) {
		var_939_int = -2;
		return 8;
	}
	DoDialog(var_946_object);
	var_957_object = Obj(); var_958_object = Obj();
	var_940_object = var_957_object;
	var_946_object = var_958_object;
	TaskCall(17);
	func_7313(var_959_object, var_960_object, var_961_string, var_962_bool, var_957_object, var_958_object);
	TaskReturn();
	@@var_946_object:IsDialogEnd(var_949_bool);
	
Label_7295:
	var_1029_bool = var_949_bool == 0; //@nz
	if(var_1029_bool != 0) {
		sync();
		@@var_946_object:IsDialogEnd(var_949_bool);
		goto Label_7295;
	}
	var_940_object = Obj();
	func_7853();
	StopDialog(var_946_object);
	@@var_946_object:GetReturnValue((int)-1);
	var_948_int = var_939_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9302(var_183_bool)
{
	var_185_int = 0; var_186_string = "";
	func_7892(var_185_int, "ood6BigVlad2");
	var_188_bool = var_185_int == (int)0;
	if(var_188_bool != 0) {
		var_183_bool = 1;
		return 0;
	}
	var_183_bool = 0;
	return 0;
}


func_8790(var_121_bool)
{
	var_123_int = 0; var_124_string = "";
	func_7892(var_123_int, "ood2BigVlad1");
	var_128_bool = var_123_int == (int)0;
	if(var_128_bool != 0) {
		var_121_bool = 1;
		return 0;
	}
	var_121_bool = 0;
	return 0;
}


func_8279()
{
	var_172_object = Obj(); var_173_object = Obj();
	SetVariable("d4q01", (int)4);
	func_9539(Obj());
	var_176_object = var_173_object;
	var_181_float = 0;
	func_7916(var_181_float);
	@@var_173_object:AddMark("d4q01BigVladGotoSobor", "pt_map_sobor", (int)1, (int)15325, var_181_float);
	var_186_float = 0;
	func_7916(var_186_float);
	@@var_173_object:AddMark("d4q01BigVladGotoSoborAndTheaterSelf", "pt_map_bigvlad", (int)1, (int)15327, var_186_float);
	var_191_float = 0;
	func_7916(var_191_float);
	@@var_173_object:AddMark("d4q01BigVladGotoTheater", "pt_map_theater", (int)1, (int)15326, var_191_float);
	func_9654();
	var_201_bool = 0; var_202_string = ""; var_203_string = "";
	func_7904(var_201_bool, "quest_d4_01", "pers");
	var_207_bool = 0; var_208_string = ""; var_209_string = "";
	func_7904(var_207_bool, "quest_d4_01", "key_actors");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3673(var_0_object, var_1_object, var_2_object, var_3_object, var_491_object, var_492_object)
{
	var_0_object = var_492_object;
	var_1_object = var_491_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_498_string = "";
		func_3846(var_492_object, "Neutral");
		@@@var_0_object:SetMessage((int)8926);
		@@@var_0_object:ClearReplies();
		var_504_bool = 0;
		var_504_bool = 0;
		var_505_bool = 0; var_506_object = Obj();
		var_506_object = var_1_object;
		func_8956(var_506_object);
		if(var_505_bool != 0) {
			var_511_bool = 0; var_512_object = Obj();
			var_512_object = var_1_object;
			func_8968(var_512_object);
			if(var_511_bool != 0) {
				var_504_bool = 1;
			}
		}
		if(var_504_bool != 0) {
			@@@var_0_object:AddReply((int)8977, (int)9847, (int)9846);
		}
		var_520_bool = 0;
		var_520_bool = 0;
		var_521_bool = 0;
		var_521_bool = 0;
		var_522_bool = 0; var_523_object = Obj();
		var_523_object = var_1_object;
		func_8992(var_523_object);
		if(var_522_bool != 0) {
			var_528_bool = 0; var_529_object = Obj();
			var_529_object = var_1_object;
			func_8956(var_529_object);
			if(var_528_bool != 0) {
				var_521_bool = 1;
			}
		}
		if(var_521_bool != 0) {
			var_530_bool = 0; var_531_object = Obj();
			var_531_object = var_1_object;
			func_8968(var_531_object);
			var_532_bool = var_530_bool == 0; //@nz
			if(var_532_bool != 0) {
				var_520_bool = 1;
			}
		}
		if(var_520_bool != 0) {
			@@@var_0_object:AddReply((int)9005, (int)9877, (int)9876);
		}
		var_536_bool = 0;
		var_536_bool = 0;
		var_537_bool = 0; var_538_object = Obj();
		var_538_object = var_1_object;
		func_9028(var_538_object);
		if(var_537_bool != 0) {
			var_543_bool = 0; var_544_object = Obj();
			var_544_object = var_1_object;
			func_9016(var_544_object);
			if(var_543_bool != 0) {
				var_536_bool = 1;
			}
		}
		if(var_536_bool != 0) {
			@@@var_0_object:AddReply((int)9008, (int)9880, (int)9879);
		}
		var_552_bool = 0;
		var_552_bool = 0;
		var_553_bool = 0; var_554_object = Obj();
		var_554_object = var_1_object;
		func_9040(var_554_object);
		if(var_553_bool != 0) {
			var_559_bool = 0; var_560_object = Obj();
			var_560_object = var_1_object;
			func_9052(var_560_object);
			if(var_559_bool != 0) {
				var_552_bool = 1;
			}
		}
		if(var_552_bool != 0) {
			@@@var_0_object:AddReply((int)10218, (int)11265, (int)11264);
		}
		var_568_bool = 0;
		var_568_bool = 0;
		var_569_bool = 0; var_570_object = Obj();
		var_570_object = var_1_object;
		func_9076(var_570_object);
		if(var_569_bool != 0) {
			var_575_bool = 0; var_576_object = Obj();
			var_576_object = var_1_object;
			func_9064(var_576_object);
			if(var_575_bool != 0) {
				var_568_bool = 1;
			}
		}
		if(var_568_bool != 0) {
			@@@var_0_object:AddReply((int)10373, (int)11439, (int)11438);
		}
		@@@var_0_object:AddReply((int)8975, (int)9792, (int)9844);
		@@@var_0_object:AddReply((int)8976, (int)9815, (int)9845);
		@@@var_0_object:AddReply((int)9020, (int)9890, (int)9892);
		@@@var_0_object:AddReply((int)11139, (int)-1, (int)12328);
		goto Label_3816;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe5d";
	}
Label_3816:
	var_596_bool = 0;
	func_7949(var_596_bool);
	if(var_596_bool != 0) {

	Label_3820:
		lshWaitForAnimEnd();
		var_597_object = var_3_object;
		if(var_597_object != 0) {
		} else {
			var_598_string = "";
			var_598_string = var_2_object;
			func_7857(var_598_string);
			goto Label_3820;
	}
		PlayAnimation("all", "idle");

	Label_3835:
		WaitForAnimEnd();
		var_601_object = var_3_object;
		if(var_601_object != 0) {
			goto Label_3845;
		}
		PlayAnimation("all", "idle");
		goto Label_3835;
	}
	goto Label_3845;
	
Label_3845:
	return 0;
	
}


func_1113(var_0_object, var_162_int, var_163_object)
{
	var_165_object = Obj(); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_object = Obj(); var_170_bool = 0; var_171_int = 0; var_172_bool = 0;
	var_0_object = var_163_object;
	var_173_bool = 0; var_174_object = Obj();
	var_163_object = var_174_object;
	func_7797(var_173_bool, var_174_object);
	var_175_bool = var_173_bool == 0; //@nz
	if(var_175_bool != 0) {
		var_162_int = -2;
		return 8;
	}
	CreateDialog(var_169_object);
	var_176_int = 0;
	func_7945(var_176_int);
	@@var_169_object:SetNPCName(var_176_int);
	var_177_string = "";
	func_7947(var_177_string);
	@@var_169_object:SetPhoto(var_177_string);
	var_178_int = 0;
	func_9589(var_178_int);
	@@var_169_object:SetPlayerName(var_178_int);
	IsOverrideActive(var_170_bool);
	var_179_bool = var_170_bool;
	if(var_179_bool != 0) {
		var_162_int = -2;
		return 8;
	}
	DoDialog(var_169_object);
	var_180_object = Obj(); var_181_object = Obj();
	var_163_object = var_180_object;
	var_169_object = var_181_object;
	TaskCall(7);
	func_1176(var_182_object, var_183_object, var_184_string, var_185_bool, var_180_object, var_181_object);
	TaskReturn();
	@@var_169_object:IsDialogEnd(var_172_bool);
	
Label_1158:
	var_357_bool = var_172_bool == 0; //@nz
	if(var_357_bool != 0) {
		sync();
		@@var_169_object:IsDialogEnd(var_172_bool);
		goto Label_1158;
	}
	var_163_object = Obj();
	func_7853();
	StopDialog(var_169_object);
	@@var_169_object:GetReturnValue((int)-1);
	var_171_int = var_162_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8802(var_161_bool)
{
	var_163_int = 0; var_164_string = "";
	func_7892(var_163_int, "ood2BigVlad2");
	var_166_bool = var_163_int == (int)0;
	if(var_166_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_9314(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_7892(var_97_int, "d8q01MladVladIsBad");
	var_100_bool = var_97_int == (int)1;
	if(var_100_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_7780(var_41_bool, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0;
	@@var_42_object:GetPosition(var_47_cvector);
	GetPosition(var_48_cvector);
	var_49_cvector = var_47_cvector - var_48_cvector;
	var_51_float = GetByIndex(var_49_cvector, 0);
	var_52_float = GetByIndex(var_49_cvector, 2);
	Rotate(var_51_float, var_52_float, var_50_bool);
	var_50_bool = var_41_bool;
	return 8;
}


func_8814(var_184_bool)
{
	var_186_int = 0; var_187_string = "";
	func_7892(var_186_int, "ood2BigVlad3");
	var_189_bool = var_186_int == (int)0;
	if(var_189_bool != 0) {
		var_184_bool = 1;
		return 0;
	}
	var_184_bool = 0;
	return 0;
}


func_9326(var_115_bool)
{
	var_117_int = 0; var_118_string = "";
	func_7892(var_117_int, "d8q01BringBadBoy");
	var_120_bool = var_117_int == (int)1;
	if(var_120_bool != 0) {
		var_115_bool = 1;
		return 0;
	}
	var_115_bool = 0;
	return 0;
}


func_7792(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0;
	IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
	return 2;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_107_object, var_108_object)
{
	var_0_object = var_108_object;
	var_1_object = var_107_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_114_object = Obj(); var_115_object = Obj();
		var_114_object = var_1_object;
		var_115_object = var_0_object;
		func_8513();
		var_118_string = "";
		func_180(var_108_object, "Neutral");
		@@@var_0_object:SetMessage((int)401);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)402, (int)471, (int)468);
		@@@var_0_object:AddReply((int)403, (int)472, (int)469);
		@@@var_0_object:AddReply((int)404, (int)-1, (int)470);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_143_bool = 0;
	func_7949(var_143_bool);
	if(var_143_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_144_object = var_3_object;
		if(var_144_object != 0) {
		} else {
			var_145_string = "";
			var_145_string = var_2_object;
			func_7857(var_145_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_148_object = var_3_object;
		if(var_148_object != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;
	}
	goto Label_179;
	
Label_179:
	return 0;
	
}


func_6771(var_0_object, var_744_int, var_745_object)
{
	var_747_object = Obj(); var_748_bool = 0; var_749_int = 0; var_750_bool = 0; var_751_object = Obj(); var_752_bool = 0; var_753_int = 0; var_754_bool = 0;
	var_0_object = var_745_object;
	var_755_bool = 0; var_756_object = Obj();
	var_745_object = var_756_object;
	func_7797(var_755_bool, var_756_object);
	var_757_bool = var_755_bool == 0; //@nz
	if(var_757_bool != 0) {
		var_744_int = -2;
		return 8;
	}
	CreateDialog(var_751_object);
	var_758_int = 0;
	func_7945(var_758_int);
	@@var_751_object:SetNPCName(var_758_int);
	var_759_string = "";
	func_7947(var_759_string);
	@@var_751_object:SetPhoto(var_759_string);
	var_760_int = 0;
	func_9589(var_760_int);
	@@var_751_object:SetPlayerName(var_760_int);
	IsOverrideActive(var_752_bool);
	var_761_bool = var_752_bool;
	if(var_761_bool != 0) {
		var_744_int = -2;
		return 8;
	}
	DoDialog(var_751_object);
	var_762_object = Obj(); var_763_object = Obj();
	var_745_object = var_762_object;
	var_751_object = var_763_object;
	TaskCall(15);
	func_6834(var_764_object, var_765_object, var_766_string, var_767_bool, var_762_object, var_763_object);
	TaskReturn();
	@@var_751_object:IsDialogEnd(var_754_bool);
	
Label_6816:
	var_804_bool = var_754_bool == 0; //@nz
	if(var_804_bool != 0) {
		sync();
		@@var_751_object:IsDialogEnd(var_754_bool);
		goto Label_6816;
	}
	var_745_object = Obj();
	func_7853();
	StopDialog(var_751_object);
	@@var_751_object:GetReturnValue((int)-1);
	var_753_int = var_744_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7797(var_55_bool, var_56_object)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0;
	@@var_56_object:GetPosition(var_66_cvector);
	@@var_56_object:GetEyesHeight(var_65_float);
	var_73_float = GetByIndex(var_66_cvector, 1);
	var_73_float = var_73_float + var_65_float;
	SetByIndex(var_66_cvector, 1) = var_73_float;
	GetPosition(var_67_cvector);
	GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_67_cvector, 1);
	var_74_float = var_74_float + var_65_float;
	SetByIndex(var_67_cvector, 1) = var_74_float;
	var_68_cvector = var_66_cvector - var_67_cvector;
	var_75_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_76_int = var_68_cvector | var_68_cvector;
	var_77_float = sqrt(var_76_int);
	var_68_cvector = var_68_cvector / var_77_float;
	var_69_cvector = -var_68_cvector;
	var_79_float = var_68_cvector * (int)70;
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_69_cvector ^ CVector(0.0, 1.0, 0.0);
	func_7882(var_80_cvector, var_81_cvector);
	var_89_float = var_80_cvector * (int)25;
	var_90_int = var_79_float + var_89_float;
	var_70_cvector = var_90_int - CVector(0.0, 10.0, 0.0);
	var_71_cvector = var_67_cvector + var_70_cvector;
	IsOverrideActive(var_72_bool);
	var_92_bool = var_72_bool;
	if(var_92_bool != 0) {
		var_55_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_71_cvector, var_69_cvector);
	var_93_float = GetByIndex(var_70_cvector, 0);
	var_94_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_93_float, var_94_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_55_bool = 1;
	return 16;
}


func_9338(var_87_bool)
{
	var_89_int = 0; var_90_string = "";
	func_7892(var_89_int, "ood8BigVlad1");
	var_94_bool = var_89_int == (int)0;
	if(var_94_bool != 0) {
		var_87_bool = 1;
		return 0;
	}
	var_87_bool = 0;
	return 0;
}


func_8826(var_195_bool)
{
	var_197_int = 0; var_198_string = "";
	func_7892(var_197_int, "ood2BigVlad4");
	var_200_bool = var_197_int == (int)0;
	if(var_200_bool != 0) {
		var_195_bool = 1;
		return 0;
	}
	var_195_bool = 0;
	return 0;
}


func_8838(var_410_bool, var_411_object)
{
	var_412_bool = 0; var_413_object = Obj();
	var_411_object = var_413_object;
	func_9494(var_413_object);
	if(var_412_bool != 0) {
		var_410_bool = 1;
		return 0;
	}
	var_410_bool = 0;
	return 0;
}


func_9350(var_109_bool)
{
	var_111_int = 0; var_112_string = "";
	func_7892(var_111_int, "ood8BigVlad2");
	var_114_bool = var_111_int == (int)0;
	if(var_114_bool != 0) {
		var_109_bool = 1;
		return 0;
	}
	var_109_bool = 0;
	return 0;
}


func_8330()
{
	SetVariable("ood4BigVlad3", (int)1);
	return 0;
}


func_8848(var_129_bool)
{
	var_131_int = 0; var_132_string = "";
	func_7892(var_131_int, "d2q01");
	var_134_bool = var_131_int == (int)0;
	if(var_134_bool != 0) {
		var_129_bool = 1;
		return 0;
	}
	var_129_bool = 0;
	return 0;
}


func_8336(var_271_object)
{
	var_273_object = Obj(); var_274_object = Obj(); var_275_int = 0; var_276_object = Obj(); var_277_object = Obj(); var_278_int = 0;
	func_9539(Obj());
	var_279_object = var_276_object;
	@@var_276_object:FindMark(var_277_object, "d4q01BigVladGotoLara");
	var_281_object = var_277_object;
	if(var_281_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01BigVladGotoLaraSelf");
	var_283_object = var_277_object;
	if(var_283_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01BigVladGotoSklad");
	var_285_object = var_277_object;
	if(var_285_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01BigVladGotoSobor");
	var_287_object = var_277_object;
	if(var_287_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01BigVladGotoSoborAndTheaterSelf");
	var_289_object = var_277_object;
	if(var_289_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01BigVladGotoTheater");
	var_291_object = var_277_object;
	if(var_291_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01LaraGotoMladVlad");
	var_293_object = var_277_object;
	if(var_293_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01LaraGotoMladVladSelf");
	var_295_object = var_277_object;
	if(var_295_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01LaraGotoOspina");
	var_297_object = var_277_object;
	if(var_297_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01LaraGotoOspinaSelf");
	var_299_object = var_277_object;
	if(var_299_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01MladVladGotoBigVlad");
	var_301_object = var_277_object;
	if(var_301_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01MladVladGotoBigVladSelf");
	var_303_object = var_277_object;
	if(var_303_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01MladVladGotoOspina");
	var_305_object = var_277_object;
	if(var_305_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01OspinaGotoLara");
	var_307_object = var_277_object;
	if(var_307_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01WastedMale");
	var_309_object = var_277_object;
	if(var_309_object != 0) {
		@@var_277_object:Remove();
	}
	@@var_276_object:FindMark(var_277_object, "d4q01Whitemask");
	var_311_object = var_277_object;
	if(var_311_object != 0) {
		@@var_277_object:Remove();
	}
	func_9670();
	var_321_bool = 0; var_322_string = ""; var_323_string = "";
	func_7904(var_321_bool, "quest_d4_01", "completed");
	@@var_271_object:RemoveItemByType(var_278_int, "d4q01_sobor_key", (int)1);
	@@var_271_object:RemoveItemByType(var_278_int, "d4q01_theater_key", (int)1);
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_7313(var_0_object, var_1_object, var_2_object, var_3_object, var_957_object, var_958_object)
{
	var_0_object = var_958_object;
	var_1_object = var_957_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_964_string = "";
		func_7433(var_958_object, "Neutral");
		@@@var_0_object:SetMessage((int)13660);
		@@@var_0_object:ClearReplies();
		var_970_bool = 0;
		var_970_bool = 0;
		var_971_bool = 0; var_972_object = Obj();
		var_972_object = var_1_object;
		func_9338(var_972_object);
		if(var_971_bool != 0) {
			var_977_bool = 0; var_978_object = Obj();
			var_978_object = var_1_object;
			func_9314(var_978_object);
			if(var_977_bool != 0) {
				var_970_bool = 1;
			}
		}
		if(var_970_bool != 0) {
			@@@var_0_object:AddReply((int)13661, (int)14920, (int)14919);
		}
		var_986_bool = 0;
		var_986_bool = 0;
		var_987_bool = 0;
		var_987_bool = 0;
		var_988_bool = 0; var_989_object = Obj();
		var_989_object = var_1_object;
		func_9314(var_989_object);
		var_990_bool = var_988_bool == 0; //@nz
		if(var_990_bool != 0) {
			var_991_bool = 0; var_992_object = Obj();
			var_992_object = var_1_object;
			func_9350(var_992_object);
			if(var_991_bool != 0) {
				var_987_bool = 1;
			}
		}
		if(var_987_bool != 0) {
			var_997_bool = 0; var_998_object = Obj();
			var_998_object = var_1_object;
			func_9326(var_998_object);
			if(var_997_bool != 0) {
				var_986_bool = 1;
			}
		}
		if(var_986_bool != 0) {
			@@@var_0_object:AddReply((int)13669, (int)14928, (int)14927);
		}
		var_1006_bool = 0;
		var_1006_bool = 0;
		var_1007_bool = 0; var_1008_object = Obj();
		var_1008_object = var_1_object;
		func_9326(var_1008_object);
		if(var_1007_bool != 0) {
			var_1009_bool = 0; var_1010_object = Obj();
			var_1010_object = var_1_object;
			func_9362(var_1010_object);
			if(var_1009_bool != 0) {
				var_1006_bool = 1;
			}
		}
		if(var_1006_bool != 0) {
			@@@var_0_object:AddReply((int)13683, (int)14944, (int)14943);
		}
		@@@var_0_object:AddReply((int)13674, (int)-1, (int)14932);
		goto Label_7403;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1c95";
	}
Label_7403:
	var_1021_bool = 0;
	func_7949(var_1021_bool);
	if(var_1021_bool != 0) {

	Label_7407:
		lshWaitForAnimEnd();
		var_1022_object = var_3_object;
		if(var_1022_object != 0) {
		} else {
			var_1023_string = "";
			var_1023_string = var_2_object;
			func_7857(var_1023_string);
			goto Label_7407;
	}
		PlayAnimation("all", "idle");

	Label_7422:
		WaitForAnimEnd();
		var_1026_object = var_3_object;
		if(var_1026_object != 0) {
			goto Label_7432;
		}
		PlayAnimation("all", "idle");
		goto Label_7422;
	}
	goto Label_7432;
	
Label_7432:
	return 0;
	
}


func_9362(var_127_bool)
{
	var_129_int = 0; var_130_string = "";
	func_7892(var_129_int, "ood8BigVlad3");
	var_132_bool = var_129_int == (int)0;
	if(var_132_bool != 0) {
		var_127_bool = 1;
		return 0;
	}
	var_127_bool = 0;
	return 0;
}


func_1176(var_0_object, var_1_object, var_2_object, var_3_object, var_180_object, var_181_object)
{
	var_0_object = var_181_object;
	var_1_object = var_180_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_187_bool = 0; var_188_object = Obj();
		var_188_object = var_1_object;
		func_9458(var_188_object);
		if(var_187_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_8742();
			var_199_string = "";
			func_1432(var_181_object, "Neutral");
			@@@var_0_object:SetMessage((int)5238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5240, (int)6468, (int)5775);
			@@@var_0_object:AddReply((int)5239, (int)6465, (int)5774);
		} else {
				var_219_bool = 0;
				var_219_bool = 0;
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_9470(var_221_object);
				if(var_220_bool != 0) {
					var_226_bool = 0; var_227_object = Obj();
					var_227_object = var_1_object;
					func_8766(var_227_object);
					var_232_bool = var_226_bool == 0; //@nz
					if(var_232_bool != 0) {
						var_219_bool = 1;
					}
				}
				if(var_219_bool != 0) {
					var_233_string = "";
					func_1432(var_181_object, "Neutral");
					@@@var_0_object:SetMessage((int)5253);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5254, (int)5792, (int)5791);
					@@@var_0_object:AddReply((int)5260, (int)5798, (int)5797);
					@@@var_0_object:AddReply((int)5259, (int)-1, (int)5796);
					goto Label_1402;
				}
				var_244_string = "";
				func_1432(var_181_object, "Neutral");
				@@@var_0_object:SetMessage((int)7539);
				@@@var_0_object:ClearReplies();
				var_246_bool = 0;
				var_246_bool = 0;
				var_247_bool = 0; var_248_object = Obj();
				var_248_object = var_1_object;
				func_9482(var_248_object);
				if(var_247_bool != 0) {
					var_253_bool = 0; var_254_object = Obj();
					var_254_object = var_1_object;
					func_8766(var_254_object);
					if(var_253_bool != 0) {
						var_246_bool = 1;
					}
				}
				if(var_246_bool != 0) {
					@@@var_0_object:AddReply((int)7540, (int)5777, (int)8322);
				}
				var_258_bool = 0;
				var_258_bool = 0;
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_9398(var_260_object);
				if(var_259_bool != 0) {
					var_265_bool = 0; var_266_object = Obj();
					var_266_object = var_1_object;
					func_8872(var_266_object);
					if(var_265_bool != 0) {
						var_258_bool = 1;
					}
				}
				if(var_258_bool != 0) {
					@@@var_0_object:AddReply((int)7548, (int)8354, (int)8330);
				}
				var_274_bool = 0;
				var_274_bool = 0;
				var_275_bool = 0; var_276_object = Obj();
				var_276_object = var_1_object;
				func_9374(var_276_object);
				if(var_275_bool != 0) {
					var_281_bool = 0; var_282_object = Obj();
					var_282_object = var_1_object;
					func_8884(var_282_object);
					if(var_281_bool != 0) {
						var_274_bool = 1;
					}
				}
				if(var_274_bool != 0) {
					@@@var_0_object:AddReply((int)7552, (int)8349, (int)8334);
				}
				var_290_bool = 0;
				var_290_bool = 0;
				var_291_bool = 0; var_292_object = Obj();
				var_292_object = var_1_object;
				func_9410(var_292_object);
				if(var_291_bool != 0) {
					var_297_bool = 0; var_298_object = Obj();
					var_298_object = var_1_object;
					func_8896(var_298_object);
					if(var_297_bool != 0) {
						var_290_bool = 1;
					}
				}
				if(var_290_bool != 0) {
					@@@var_0_object:AddReply((int)7553, (int)8350, (int)8335);
				}
				var_306_bool = 0;
				var_306_bool = 0;
				var_307_bool = 0; var_308_object = Obj();
				var_308_object = var_1_object;
				func_9422(var_308_object);
				if(var_307_bool != 0) {
					var_313_bool = 0; var_314_object = Obj();
					var_314_object = var_1_object;
					func_8908(var_314_object);
					if(var_313_bool != 0) {
						var_306_bool = 1;
					}
				}
				if(var_306_bool != 0) {
					@@@var_0_object:AddReply((int)7556, (int)8351, (int)8338);
				}
				var_322_bool = 0;
				var_322_bool = 0;
				var_323_bool = 0; var_324_object = Obj();
				var_324_object = var_1_object;
				func_9004(var_324_object);
				if(var_323_bool != 0) {
					var_329_bool = 0; var_330_object = Obj();
					var_330_object = var_1_object;
					func_8920(var_330_object);
					if(var_329_bool != 0) {
						var_322_bool = 1;
					}
				}
				if(var_322_bool != 0) {
					@@@var_0_object:AddReply((int)7560, (int)8352, (int)8342);
				}
				var_338_bool = 0;
				var_338_bool = 0;
				var_339_bool = 0; var_340_object = Obj();
				var_340_object = var_1_object;
				func_9446(var_340_object);
				if(var_339_bool != 0) {
					var_345_bool = 0; var_346_object = Obj();
					var_346_object = var_1_object;
					func_8932(var_346_object);
					if(var_345_bool != 0) {
						var_338_bool = 1;
					}
				}
				if(var_338_bool != 0) {
					@@@var_0_object:AddReply((int)7561, (int)8353, (int)8343);
				}
				@@@var_0_object:AddReply((int)7590, (int)-1, (int)8376);
				goto Label_1402;
		}
	}
Label_1402:
	var_211_bool = 0;
	func_7949(var_211_bool);
	if(var_211_bool != 0) {

	Label_1406:
		lshWaitForAnimEnd();
		var_212_object = var_3_object;
		if(var_212_object != 0) {
		} else {
			var_213_string = "";
			var_213_string = var_2_object;
			func_7857(var_213_string);
			goto Label_1406;
	}
		PlayAnimation("all", "idle");

	Label_1421:
		WaitForAnimEnd();
		var_216_object = var_3_object;
		if(var_216_object != 0) {
			goto Label_1431;
		}
		PlayAnimation("all", "idle");
		goto Label_1421;

	}
	goto Label_1431;
	
Label_1431:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x49c";


func_8860(var_167_bool)
{
	var_169_int = 0; var_170_string = "";
	func_7892(var_169_int, "d2q01");
	var_172_bool = var_169_int == (int)6;
	if(var_172_bool != 0) {
		var_167_bool = 1;
		return 0;
	}
	var_167_bool = 0;
	return 0;
}


func_9374(var_289_bool)
{
	var_291_int = 0; var_292_string = "";
	func_7892(var_291_int, "KnowAlexandr");
	var_294_bool = var_291_int == (int)1;
	if(var_294_bool != 0) {
		var_289_bool = 1;
		return 0;
	}
	var_289_bool = 0;
	return 0;
}


func_2719(var_0_object, var_361_int, var_362_object)
{
	var_364_object = Obj(); var_365_bool = 0; var_366_int = 0; var_367_bool = 0; var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0;
	var_0_object = var_362_object;
	var_372_bool = 0; var_373_object = Obj();
	var_362_object = var_373_object;
	func_7797(var_372_bool, var_373_object);
	var_374_bool = var_372_bool == 0; //@nz
	if(var_374_bool != 0) {
		var_361_int = -2;
		return 8;
	}
	CreateDialog(var_368_object);
	var_375_int = 0;
	func_7945(var_375_int);
	@@var_368_object:SetNPCName(var_375_int);
	var_376_string = "";
	func_7947(var_376_string);
	@@var_368_object:SetPhoto(var_376_string);
	var_377_int = 0;
	func_9589(var_377_int);
	@@var_368_object:SetPlayerName(var_377_int);
	IsOverrideActive(var_369_bool);
	var_378_bool = var_369_bool;
	if(var_378_bool != 0) {
		var_361_int = -2;
		return 8;
	}
	DoDialog(var_368_object);
	var_379_object = Obj(); var_380_object = Obj();
	var_362_object = var_379_object;
	var_368_object = var_380_object;
	TaskCall(9);
	func_2782(var_381_object, var_382_object, var_383_string, var_384_bool, var_379_object, var_380_object);
	TaskReturn();
	@@var_368_object:IsDialogEnd(var_371_bool);
	
Label_2764:
	var_469_bool = var_371_bool == 0; //@nz
	if(var_469_bool != 0) {
		sync();
		@@var_368_object:IsDialogEnd(var_371_bool);
		goto Label_2764;
	}
	var_362_object = Obj();
	func_7853();
	StopDialog(var_368_object);
	@@var_368_object:GetReturnValue((int)-1);
	var_370_int = var_361_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8872(var_279_bool)
{
	var_281_int = 0; var_282_string = "";
	func_7892(var_281_int, "ood1BigVlad4");
	var_284_bool = var_281_int == (int)0;
	if(var_284_bool != 0) {
		var_279_bool = 1;
		return 0;
	}
	var_279_bool = 0;
	return 0;
}


func_9386(var_139_bool)
{
	var_141_int = 0; var_142_string = "";
	func_7892(var_141_int, "ood6BigVlad3");
	var_144_bool = var_141_int == (int)0;
	if(var_144_bool != 0) {
		var_139_bool = 1;
		return 0;
	}
	var_139_bool = 0;
	return 0;
}


func_7853()
{
	CameraSwitchToNormal();
	return 0;
}


func_7857(var_45_string)
{
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0;
	var_51_int = "playing " + var_45_string;
	Trace(var_51_int);
	lshGetAnimTimes(var_45_string, var_48_float, var_49_float);
	lshPlayAnimation(var_48_float, var_49_float);
	var_53_int = "start: " + var_48_float;
	Trace(var_53_int);
	var_55_int = "end: " + var_49_float;
	Trace(var_55_int);
	return 4;
}


func_6834(var_0_object, var_1_object, var_2_object, var_3_object, var_762_object, var_763_object)
{
	var_0_object = var_763_object;
	var_1_object = var_762_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_769_string = "";
		func_6907(var_763_object, "Neutral");
		@@@var_0_object:SetMessage((int)11558);
		@@@var_0_object:ClearReplies();
		var_775_bool = 0; var_776_object = Obj();
		var_776_object = var_1_object;
		func_9206(var_776_object);
		if(var_775_bool != 0) {
			@@@var_0_object:AddReply((int)11559, (int)12754, (int)12753);
		}
		var_784_bool = 0; var_785_object = Obj();
		var_785_object = var_1_object;
		func_9218(var_785_object);
		if(var_784_bool != 0) {
			@@@var_0_object:AddReply((int)11570, (int)12765, (int)12764);
		}
		@@@var_0_object:AddReply((int)11589, (int)-1, (int)12784);
		goto Label_6877;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ab6";
	}
Label_6877:
	var_796_bool = 0;
	func_7949(var_796_bool);
	if(var_796_bool != 0) {

	Label_6881:
		lshWaitForAnimEnd();
		var_797_object = var_3_object;
		if(var_797_object != 0) {
		} else {
			var_798_string = "";
			var_798_string = var_2_object;
			func_7857(var_798_string);
			goto Label_6881;
	}
		PlayAnimation("all", "idle");

	Label_6896:
		WaitForAnimEnd();
		var_801_object = var_3_object;
		if(var_801_object != 0) {
			goto Label_6906;
		}
		PlayAnimation("all", "idle");
		goto Label_6896;
	}
	goto Label_6906;
	
Label_6906:
	return 0;
	
}


func_180(var_2_object, var_50_string)
{
	var_51_bool = 0;
	func_7949(var_51_bool);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		return 0;
	}
	var_53_bool = var_50_string == var_2_object;
	if(var_53_bool != 0) {
		return 0;
	}
	var_54_string = "";
	var_50_string = var_54_string;
	func_7857(var_54_string);
	var_2_object = var_50_string;
	return 0;
}


func_8884(var_295_bool)
{
	var_297_int = 0; var_298_string = "";
	func_7892(var_297_int, "ood1BigVlad5");
	var_300_bool = var_297_int == (int)0;
	if(var_300_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_9398(var_273_bool)
{
	var_275_int = 0; var_276_string = "";
	func_7892(var_275_int, "KnowAnna");
	var_278_bool = var_275_int == (int)1;
	if(var_278_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_8896(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_7892(var_313_int, "ood1BigVlad6");
	var_316_bool = var_313_int == (int)0;
	if(var_316_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_9410(var_305_bool)
{
	var_307_int = 0; var_308_string = "";
	func_7892(var_307_int, "KnowGeorg");
	var_310_bool = var_307_int == (int)1;
	if(var_310_bool != 0) {
		var_305_bool = 1;
		return 0;
	}
	var_305_bool = 0;
	return 0;
}


func_7875()
{
	var_43_bool = 0;
	func_7949(var_43_bool);
	if(var_43_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_7882(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0;
	var_85_int = var_81_cvector | var_81_cvector;
	var_84_float = sqrt(var_85_int);
	var_86_float = 9.999999974752427e-07;
	var_87_bool = var_84_float < var_86_float;
	if(var_87_bool != 0) {
		var_80_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_80_cvector = var_81_cvector / var_84_float;
	return 2;
}


func_8908(var_327_bool)
{
	var_329_int = 0; var_330_string = "";
	func_7892(var_329_int, "ood1BigVlad7");
	var_332_bool = var_329_int == (int)0;
	if(var_332_bool != 0) {
		var_327_bool = 1;
		return 0;
	}
	var_327_bool = 0;
	return 0;
}


func_9422(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_7892(var_323_int, "KnowMladVlad");
	var_326_bool = var_323_int == (int)1;
	if(var_326_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_7892(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0;
	GetVariable(var_90_string, var_92_int);
	var_92_int = var_89_int;
	return 2;
}


func_8920(var_343_bool)
{
	var_345_int = 0; var_346_string = "";
	func_7892(var_345_int, "ood1BigVlad8");
	var_348_bool = var_345_int == (int)0;
	if(var_348_bool != 0) {
		var_343_bool = 1;
		return 0;
	}
	var_343_bool = 0;
	return 0;
}


func_7897(var_420_bool, var_421_object, var_422_string)
{
	var_423_int = 0; var_424_bool = 0; var_425_int = 0; var_426_bool = 0;
	GetInvItemByName(var_425_int, var_422_string);
	@@var_421_object:HasItem(var_425_int, var_426_bool);
	var_426_bool = var_420_bool;
	return 4;
}


func_9434(var_172_bool)
{
	var_174_int = 0; var_175_string = "";
	func_7892(var_174_int, "d6BigVladVisit");
	var_177_bool = var_174_int == (int)1;
	if(var_177_bool != 0) {
		var_172_bool = 1;
		return 0;
	}
	var_172_bool = 0;
	return 0;
}


func_2782(var_0_object, var_1_object, var_2_object, var_3_object, var_379_object, var_380_object)
{
	var_0_object = var_380_object;
	var_1_object = var_379_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_386_bool = 0;
		var_386_bool = 0;
		var_387_bool = 0; var_388_object = Obj();
		var_388_object = var_1_object;
		func_8790(var_388_object);
		if(var_387_bool != 0) {
			var_393_bool = 0; var_394_object = Obj();
			var_394_object = var_1_object;
			func_8848(var_394_object);
			if(var_393_bool != 0) {
				var_386_bool = 1;
			}
		}
		if(var_386_bool != 0) {
			var_399_string = "";
			func_2937(var_380_object, "Neutral");
			@@@var_0_object:SetMessage((int)6797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6798, (int)7491, (int)7490);
			@@@var_0_object:AddReply((int)6809, (int)7491, (int)7503);
			@@@var_0_object:AddReply((int)6810, (int)7493, (int)7505);
		} else {
				var_422_bool = 0;
				var_422_bool = 0;
				var_423_bool = 0; var_424_object = Obj();
				var_424_object = var_1_object;
				func_8802(var_424_object);
				if(var_423_bool != 0) {
					var_429_bool = 0; var_430_object = Obj();
					var_430_object = var_1_object;
					func_8860(var_430_object);
					if(var_429_bool != 0) {
						var_422_bool = 1;
					}
				}
				if(var_422_bool != 0) {
					var_435_string = "";
					func_2937(var_380_object, "Neutral");
					@@@var_0_object:SetMessage((int)6765);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)6777, (int)7457, (int)7467);
					@@@var_0_object:AddReply((int)6766, (int)7459, (int)7456);
					goto Label_2907;
				}
				var_443_string = "";
				func_2937(var_380_object, "Neutral");
				@@@var_0_object:SetMessage((int)6794);
				@@@var_0_object:ClearReplies();
				var_445_bool = 0;
				var_445_bool = 0;
				var_446_bool = 0; var_447_object = Obj();
				var_447_object = var_1_object;
				func_8814(var_447_object);
				if(var_446_bool != 0) {
					var_452_bool = 0; var_453_object = Obj();
					var_453_object = var_1_object;
					func_8848(var_453_object);
					if(var_452_bool != 0) {
						var_445_bool = 1;
					}
				}
				if(var_445_bool != 0) {
					@@@var_0_object:AddReply((int)7084, (int)7809, (int)7807);
				}
				var_457_bool = 0; var_458_object = Obj();
				var_458_object = var_1_object;
				func_8826(var_458_object);
				if(var_457_bool != 0) {
					@@@var_0_object:AddReply((int)6795, (int)7469, (int)7487);
				}
				@@@var_0_object:AddReply((int)7535, (int)-1, (int)8317);
				goto Label_2907;
		}
	}
Label_2907:
	var_414_bool = 0;
	func_7949(var_414_bool);
	if(var_414_bool != 0) {

	Label_2911:
		lshWaitForAnimEnd();
		var_415_object = var_3_object;
		if(var_415_object != 0) {
		} else {
			var_416_string = "";
			var_416_string = var_2_object;
			func_7857(var_416_string);
			goto Label_2911;
	}
		PlayAnimation("all", "idle");

	Label_2926:
		WaitForAnimEnd();
		var_419_object = var_3_object;
		if(var_419_object != 0) {
			goto Label_2936;
		}
		PlayAnimation("all", "idle");
		goto Label_2926;

	}
	goto Label_2936;
	
Label_2936:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xae2";


func_7904(var_201_bool, var_202_string, var_203_string)
{
	var_204_object = Obj(); var_205_object = Obj();
	FindActor(var_205_object, var_202_string);
	var_206_bool = var_205_object == 0; //@ne
	if(var_206_bool != 0) {
		var_201_bool = 0;
		return 2;
	}
	Trigger(var_205_object, var_203_string);
	var_201_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8932(var_359_bool)
{
	var_361_int = 0; var_362_string = "";
	func_7892(var_361_int, "ood1BigVlad9");
	var_364_bool = var_361_int == (int)0;
	if(var_364_bool != 0) {
		var_359_bool = 1;
		return 0;
	}
	var_359_bool = 0;
	return 0;
}


func_9446(var_353_bool)
{
	var_355_int = 0; var_356_string = "";
	func_7892(var_355_int, "KnowKapella");
	var_358_bool = var_355_int == (int)1;
	if(var_358_bool != 0) {
		var_353_bool = 1;
		return 0;
	}
	var_353_bool = 0;
	return 0;
}


func_7916(var_63_float)
{
	var_64_float = 0; var_65_float = 0;
	GetGameTime(var_65_float);
	var_65_float = var_63_float;
	return 2;
}


func_8944(var_403_bool)
{
	var_405_int = 0; var_406_string = "";
	func_7892(var_405_int, "KnowBurahDead");
	var_408_bool = var_405_int == (int)1;
	if(var_408_bool != 0) {
		var_403_bool = 1;
		return 0;
	}
	var_403_bool = 0;
	return 0;
}


func_7921(var_156_int)
{
	var_157_float = 0; var_158_float = 0;
	GetGameTime(var_158_float);
	var_160_int = 0;
	var_160_int = var_158_float / (int)24;
	var_156_int = (int)1 + var_160_int;
	return 2;
}


func_9458(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_7892(var_201_int, "ood1BigVlad1");
	var_206_bool = var_201_int == (int)0;
	if(var_206_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_5360(var_0_object, var_608_int, var_609_object)
{
	var_611_object = Obj(); var_612_bool = 0; var_613_int = 0; var_614_bool = 0; var_615_object = Obj(); var_616_bool = 0; var_617_int = 0; var_618_bool = 0;
	var_0_object = var_609_object;
	var_619_bool = 0; var_620_object = Obj();
	var_609_object = var_620_object;
	func_7797(var_619_bool, var_620_object);
	var_621_bool = var_619_bool == 0; //@nz
	if(var_621_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	CreateDialog(var_615_object);
	var_622_int = 0;
	func_7945(var_622_int);
	@@var_615_object:SetNPCName(var_622_int);
	var_623_string = "";
	func_7947(var_623_string);
	@@var_615_object:SetPhoto(var_623_string);
	var_624_int = 0;
	func_9589(var_624_int);
	@@var_615_object:SetPlayerName(var_624_int);
	IsOverrideActive(var_616_bool);
	var_625_bool = var_616_bool;
	if(var_625_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	DoDialog(var_615_object);
	var_626_object = Obj(); var_627_object = Obj();
	var_609_object = var_626_object;
	var_615_object = var_627_object;
	TaskCall(13);
	func_5423(var_628_object, var_629_object, var_630_string, var_631_bool, var_626_object, var_627_object);
	TaskReturn();
	@@var_615_object:IsDialogEnd(var_618_bool);
	
Label_5405:
	var_740_bool = var_618_bool == 0; //@nz
	if(var_740_bool != 0) {
		sync();
		@@var_615_object:IsDialogEnd(var_618_bool);
		goto Label_5405;
	}
	var_609_object = Obj();
	func_7853();
	StopDialog(var_615_object);
	@@var_615_object:GetReturnValue((int)-1);
	var_617_int = var_608_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7930(var_154_bool, var_155_int)
{
	var_156_int = 0;
	func_7921(var_156_int);
	var_154_bool = var_156_int == var_155_int;
	return 0;
}


func_6907(var_2_object, var_125_string)
{
	var_126_bool = 0;
	func_7949(var_126_bool);
	var_127_bool = var_126_bool == 0; //@nz
	if(var_127_bool != 0) {
		return 0;
	}
	var_128_bool = var_125_string == var_2_object;
	if(var_128_bool != 0) {
		return 0;
	}
	var_129_string = "";
	var_125_string = var_129_string;
	func_7857(var_129_string);
	var_2_object = var_125_string;
	return 0;
}


func_8956(var_233_bool)
{
	var_235_int = 0; var_236_string = "";
	func_7892(var_235_int, "d3q01");
	var_240_bool = var_235_int == (int)3;
	if(var_240_bool != 0) {
		var_233_bool = 1;
		return 0;
	}
	var_233_bool = 0;
	return 0;
}


func_9470(var_234_bool)
{
	var_236_int = 0; var_237_string = "";
	func_7892(var_236_int, "ood1BigVlad2");
	var_239_bool = var_236_int == (int)0;
	if(var_239_bool != 0) {
		var_234_bool = 1;
		return 0;
	}
	var_234_bool = 0;
	return 0;
}


func_7936(var_1031_bool)
{
	var_1032_bool = 0; var_1033_bool = 0;
	var_1034_string = "";
	func_7857("No");
	lshWaitForAnimEnd(var_1033_bool);
	var_1033_bool = var_1031_bool;
	return 2;
}


func_3846(var_2_object, var_216_string)
{
	var_217_bool = 0;
	func_7949(var_217_bool);
	var_218_bool = var_217_bool == 0; //@nz
	if(var_218_bool != 0) {
		return 0;
	}
	var_219_bool = var_216_string == var_2_object;
	if(var_219_bool != 0) {
		return 0;
	}
	var_220_string = "";
	var_216_string = var_220_string;
	func_7857(var_220_string);
	var_2_object = var_216_string;
	return 0;
}


func_8968(var_241_bool)
{
	var_243_int = 0; var_244_string = "";
	func_7892(var_243_int, "ood3BigVlad1");
	var_246_bool = var_243_int == (int)0;
	if(var_246_bool != 0) {
		var_241_bool = 1;
		return 0;
	}
	var_241_bool = 0;
	return 0;
}


func_7945(var_96_int)
{
	var_96_int = 2857;
	return 0;
}


func_9482(var_261_bool)
{
	var_263_int = 0; var_264_string = "";
	func_7892(var_263_int, "ood1BigVlad3");
	var_266_bool = var_263_int == (int)0;
	if(var_266_bool != 0) {
		var_261_bool = 1;
		return 0;
	}
	var_261_bool = 0;
	return 0;
}


func_7947(var_97_string)
{
	var_97_string = "ui/NPC_BigVlad.png";
	return 0;
}


func_7433(var_2_object, var_70_string)
{
	var_71_bool = 0;
	func_7949(var_71_bool);
	var_72_bool = var_71_bool == 0; //@nz
	if(var_72_bool != 0) {
		return 0;
	}
	var_73_bool = var_70_string == var_2_object;
	if(var_73_bool != 0) {
		return 0;
	}
	var_74_string = "";
	var_70_string = var_74_string;
	func_7857(var_74_string);
	var_2_object = var_70_string;
	return 0;
}


func_7949(var_43_bool)
{
	var_43_bool = 1;
	return 0;
}


func_7951(var_101_object)
{
	var_102_object = Obj(); var_103_string = ""; var_104_float = 0;
	func_9539(Obj());
	var_105_object = var_102_object;
	func_9556(var_102_object, "pt_map_georg", (float)2);
	var_125_object = Obj();
	func_9539(var_125_object);
	@@var_101_object:ShowMap(var_125_object);
	return 0;
}


func_8980(var_718_bool)
{
	var_720_int = 0; var_721_string = "";
	func_7892(var_720_int, "d3q01");
	var_723_bool = var_720_int == (int)4;
	if(var_723_bool != 0) {
		var_718_bool = 1;
		return 0;
	}
	var_718_bool = 0;
	return 0;
}


func_9494(var_412_bool)
{
	var_412_bool = 0;
	return 0;
}


func_8472()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("d5q01", (int)2);
	func_9539(Obj());
	var_52_object = var_49_object;
	var_63_float = 0;
	func_7916(var_63_float);
	@@var_49_object:AddMark("d5q01BigVladGotoAlexandr", "pt_map_alexandr", (int)1, (int)11957, var_63_float);
	func_9702();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9497(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj();
	GetDiaryRoot(var_83_object);
	var_84_bool = var_83_object == 0; //@nz
	if(var_84_bool != 0) {
		Trace("Can't retrieve diary root");
		var_81_object = 0;
		return 2;
	}
	var_83_object = var_81_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7967()
{
	SetVariable("ood2BigVlad1", (int)1);
	return 0;
}


func_8992(var_252_bool)
{
	var_254_int = 0; var_255_string = "";
	func_7892(var_254_int, "ood3BigVlad2");
	var_257_bool = var_254_int == (int)0;
	if(var_257_bool != 0) {
		var_252_bool = 1;
		return 0;
	}
	var_252_bool = 0;
	return 0;
}


func_7973()
{
	SetVariable("ood2BigVlad2", (int)1);
	return 0;
}


func_9510(var_72_bool, var_73_object, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0;
	func_9497(Obj());
	var_81_object = var_78_object;
	@@var_78_object:Find(var_74_int, var_79_object);
	var_86_bool = var_79_object == 0; //@nz
	if(var_86_bool != 0) {
		var_88_int = "Can't find diary parent with id: " + var_74_int;
		Trace(var_88_int);
		var_72_bool = 0;
		return 6;
	}
	@@var_79_object:AddChild(var_73_object);
	SetVariable("player_diary", (int)1);
	@@var_73_object:GetCategory(var_80_int);
	SetDiarySection(var_80_int);
	var_72_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_7979()
{
	SetVariable("ood2BigVlad3", (int)1);
	return 0;
}


func_9004(var_337_bool)
{
	var_339_int = 0; var_340_string = "";
	func_7892(var_339_int, "KnowRubin");
	var_342_bool = var_339_int == (int)1;
	if(var_342_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


func_5423(var_0_object, var_1_object, var_2_object, var_3_object, var_626_object, var_627_object)
{
	var_0_object = var_627_object;
	var_1_object = var_626_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_633_bool = 0;
		var_633_bool = 0;
		var_634_bool = 0; var_635_object = Obj();
		var_635_object = var_1_object;
		func_9088(var_635_object);
		if(var_634_bool != 0) {
			var_640_bool = 0; var_641_object = Obj();
			var_641_object = var_1_object;
			func_9100(var_641_object);
			if(var_640_bool != 0) {
				var_633_bool = 1;
			}
		}
		if(var_633_bool != 0) {
			var_646_object = Obj(); var_647_object = Obj();
			var_646_object = var_1_object;
			var_647_object = var_0_object;
			func_8714();
			var_650_string = "";
			func_5568(var_627_object, "Neutral");
			@@@var_0_object:SetMessage((int)10811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10812, (int)11147, (int)11952);
		} else {
				var_667_string = "";
				func_5568(var_627_object, "Neutral");
				@@@var_0_object:SetMessage((int)10836);
				@@@var_0_object:ClearReplies();
				var_669_bool = 0;
				var_669_bool = 0;
				var_670_bool = 0; var_671_object = Obj();
				var_671_object = var_1_object;
				func_9112(var_671_object);
				if(var_670_bool != 0) {
					var_676_bool = 0; var_677_object = Obj();
					var_677_object = var_1_object;
					func_9124(var_677_object);
					if(var_676_bool != 0) {
						var_669_bool = 1;
					}
				}
				if(var_669_bool != 0) {
					@@@var_0_object:AddReply((int)10839, (int)11148, (int)11983);
				}
				var_685_bool = 0; var_686_object = Obj();
				var_686_object = var_1_object;
				func_8838(var_685_bool, var_686_object);
				if(var_685_bool != 0) {
					@@@var_0_object:AddReply((int)10838, (int)10519, (int)11982);
				}
				var_692_bool = 0; var_693_object = Obj();
				var_693_object = var_1_object;
				func_9136(var_692_bool, var_693_object);
				if(var_692_bool != 0) {
					@@@var_0_object:AddReply((int)11508, (int)12709, (int)12708);
				}
				var_714_bool = 0;
				var_714_bool = 0;
				var_715_bool = 0; var_716_object = Obj();
				var_716_object = var_1_object;
				func_9166(var_715_bool, var_716_object);
				if(var_715_bool != 0) {
					var_728_bool = 0; var_729_object = Obj();
					var_729_object = var_1_object;
					func_9194(var_729_object);
					if(var_728_bool != 0) {
						var_714_bool = 1;
					}
				}
				if(var_714_bool != 0) {
					@@@var_0_object:AddReply((int)10837, (int)10553, (int)11981);
				}
				@@@var_0_object:AddReply((int)11480, (int)-1, (int)12686);
				goto Label_5538;
		}
	}
Label_5538:
	var_659_bool = 0;
	func_7949(var_659_bool);
	if(var_659_bool != 0) {

	Label_5542:
		lshWaitForAnimEnd();
		var_660_object = var_3_object;
		if(var_660_object != 0) {
		} else {
			var_661_string = "";
			var_661_string = var_2_object;
			func_7857(var_661_string);
			goto Label_5542;
	}
		PlayAnimation("all", "idle");

	Label_5557:
		WaitForAnimEnd();
		var_664_object = var_3_object;
		if(var_664_object != 0) {
			goto Label_5567;
		}
		PlayAnimation("all", "idle");
		goto Label_5557;

	}
	goto Label_5567;
	
Label_5567:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1533";


func_8495()
{
	SetVariable("ood5BigVlad1", (int)1);
	return 0;
}


func_7985()
{
	SetVariable("ood2BigVlad4", (int)1);
	return 0;
}


func_8501()
{
	SetVariable("ood6BigVlad1", (int)1);
	return 0;
}


func_7991()
{
	SetVariable("d2q01BigVladVisit", (int)1);
	return 0;
}


func_9016(var_273_bool)
{
	var_275_int = 0; var_276_string = "";
	func_7892(var_275_int, "d3q01");
	var_278_bool = var_275_int == (int)5;
	if(var_278_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_8507()
{
	SetVariable("ood6BigVlad2", (int)1);
	return 0;
}


func_7997()
{
	SetVariable("ood1BigVlad4", (int)1);
	return 0;
}


func_8513()
{
	SetVariable("KnowBigVlad", (int)1);
	return 0;
}


func_322(var_0_object, var_808_int, var_809_object)
{
	var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0; var_815_object = Obj(); var_816_bool = 0; var_817_int = 0; var_818_bool = 0;
	var_0_object = var_809_object;
	var_819_bool = 0; var_820_object = Obj();
	var_809_object = var_820_object;
	func_7797(var_819_bool, var_820_object);
	var_821_bool = var_819_bool == 0; //@nz
	if(var_821_bool != 0) {
		var_808_int = -2;
		return 8;
	}
	CreateDialog(var_815_object);
	var_822_int = 0;
	func_7945(var_822_int);
	@@var_815_object:SetNPCName(var_822_int);
	var_823_string = "";
	func_7947(var_823_string);
	@@var_815_object:SetPhoto(var_823_string);
	var_824_int = 0;
	func_9589(var_824_int);
	@@var_815_object:SetPlayerName(var_824_int);
	IsOverrideActive(var_816_bool);
	var_825_bool = var_816_bool;
	if(var_825_bool != 0) {
		var_808_int = -2;
		return 8;
	}
	DoDialog(var_815_object);
	var_826_object = Obj(); var_827_object = Obj();
	var_809_object = var_826_object;
	var_815_object = var_827_object;
	TaskCall(5);
	func_385(var_828_object, var_829_object, var_830_string, var_831_bool, var_826_object, var_827_object);
	TaskReturn();
	@@var_815_object:IsDialogEnd(var_818_bool);
	
Label_367:
	var_935_bool = var_818_bool == 0; //@nz
	if(var_935_bool != 0) {
		sync();
		@@var_815_object:IsDialogEnd(var_818_bool);
		goto Label_367;
	}
	var_809_object = Obj();
	func_7853();
	StopDialog(var_815_object);
	@@var_815_object:GetReturnValue((int)-1);
	var_817_int = var_808_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8003()
{
	SetVariable("ood1BigVlad5", (int)1);
	return 0;
}


func_9028(var_267_bool)
{
	var_269_int = 0; var_270_string = "";
	func_7892(var_269_int, "ood3BigVlad3");
	var_272_bool = var_269_int == (int)0;
	if(var_272_bool != 0) {
		var_267_bool = 1;
		return 0;
	}
	var_267_bool = 0;
	return 0;
}


func_9539(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj();
	GetMainOutdoorScene(var_55_object);
	var_57_bool = var_55_object == 0; //@ne
	if(var_57_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_56_object = 0;
		var_56_object = var_52_object;
		return 4;
	}
	@@var_55_object:GetMap(var_56_object);
	var_56_object = var_52_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8519()
{
	SetVariable("d8q01BigVladIsVictim", (int)1);
	return 0;
}


func_8009()
{
	SetVariable("ood1BigVlad6", (int)1);
	return 0;
}


func_8525()
{
	SetVariable("ood8BigVlad1", (int)1);
	return 0;
}


func_8015()
{
	SetVariable("ood1BigVlad7", (int)1);
	return 0;
}


func_9040(var_283_bool)
{
	var_285_int = 0; var_286_string = "";
	func_7892(var_285_int, "d3q02");
	var_288_bool = var_285_int == (int)2;
	if(var_288_bool != 0) {
		var_283_bool = 1;
		return 0;
	}
	var_283_bool = 0;
	return 0;
}


func_8531()
{
	SetVariable("ood8BigVlad2", (int)1);
	return 0;
}


func_9556(var_93_object, var_94_string, var_95_float)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_object = Obj(); var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0;
	GetMainOutdoorScene(var_103_object);
	var_105_bool = var_103_object == 0; //@ne
	if(var_105_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_103_object:GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector);
	var_107_bool = var_104_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_109_int = "Warning: outdoor scene locator " + var_94_string;
		var_111_int = var_109_int + " doesnt exist";
		Trace(var_111_int);
	}
	@@var_103_object:GetMap(var_93_object);
	var_112_bool = var_93_object == 0; //@ne
	if(var_112_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_114_float = GetByIndex(var_101_cvector, 0);
	var_115_float = GetByIndex(var_101_cvector, 2);
	@@var_93_object:SetMapParams(var_114_float, var_115_float, var_95_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_8021()
{
	SetVariable("ood1BigVlad8", (int)1);
	return 0;
}


func_8537()
{
	SetVariable("ood8BigVlad3", (int)1);
	return 0;
}


func_8027()
{
	SetVariable("ood1BigVlad9", (int)1);
	return 0;
}


func_9052(var_289_bool)
{
	var_291_int = 0; var_292_string = "";
	func_7892(var_291_int, "ood3BigVlad4");
	var_294_bool = var_291_int == (int)0;
	if(var_294_bool != 0) {
		var_289_bool = 1;
		return 0;
	}
	var_289_bool = 0;
	return 0;
}


func_8543()
{
	SetVariable("ood6BigVlad3", (int)1);
	return 0;
}


func_8033()
{
	var_52_object = Obj(); var_53_object = Obj();
	func_9539(Obj());
	var_54_object = var_53_object;
	var_65_float = 0;
	func_7916(var_65_float);
	@@var_53_object:AddMark("d1BigVladAboutKapella", "pt_map_kapella", (int)3, (int)8638, var_65_float);
	var_72_float = 0;
	func_7916(var_72_float);
	@@var_53_object:AddMark("d1BigVladAboutMladVlad", "pt_map_mladvlad", (int)3, (int)8689, var_72_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8549()
{
	var_54_object = Obj(); var_55_object = Obj();
	func_9539(Obj());
	var_56_object = var_55_object;
	var_67_float = 0;
	func_7916(var_67_float);
	@@var_55_object:AddMark("d6q01BigVladGotoAnna", "pt_map_anna", (int)1, (int)15390, var_67_float);
	var_74_float = 0;
	func_7916(var_74_float);
	@@var_55_object:AddMark("d6q01BigVladGotoOspina", "pt_map_ospina", (int)1, (int)15389, var_74_float);
	var_79_float = 0;
	func_7916(var_79_float);
	@@var_55_object:AddMark("d6q01BigVladGotoAnnaOspinaSelf", "pt_map_bigvlad", (int)1, (int)15391, var_79_float);
	func_9718();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9064(var_305_bool)
{
	var_307_int = 0; var_308_string = "";
	func_7892(var_307_int, "d3q02");
	var_310_bool = var_307_int == (int)6;
	if(var_310_bool != 0) {
		var_305_bool = 1;
		return 0;
	}
	var_305_bool = 0;
	return 0;
}


func_9076(var_299_bool)
{
	var_301_int = 0; var_302_string = "";
	func_7892(var_301_int, "ood3BigVlad5");
	var_304_bool = var_301_int == (int)0;
	if(var_304_bool != 0) {
		var_299_bool = 1;
		return 0;
	}
	var_299_bool = 0;
	return 0;
}


func_9589(var_98_int)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable("player", var_100_int);
	var_103_bool = var_100_int == (int)0;
	if(var_103_bool != 0) {
		var_98_int = 200001;
		return 2;
	EMIT "GOTO 0x2584";
	}
	var_105_bool = var_100_int == (int)1;
	if(var_105_bool != 0) {
		var_98_int = 200002;
		return 2;
	}
	var_98_int = 200003;
	return 2;
}


func_2937(var_2_object, var_135_string)
{
	var_136_bool = 0;
	func_7949(var_136_bool);
	var_137_bool = var_136_bool == 0; //@nz
	if(var_137_bool != 0) {
		return 0;
	}
	var_138_bool = var_135_string == var_2_object;
	if(var_138_bool != 0) {
		return 0;
	}
	var_139_string = "";
	var_135_string = var_139_string;
	func_7857(var_139_string);
	var_2_object = var_135_string;
	return 0;
}


func_8058()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_8064()
{
	SetVariable("ood3BigVlad1", (int)1);
	return 0;
}


func_385(var_0_object, var_1_object, var_2_object, var_3_object, var_826_object, var_827_object)
{
	var_0_object = var_827_object;
	var_1_object = var_826_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_833_bool = 0;
		var_833_bool = 0;
		var_834_bool = 0; var_835_object = Obj();
		var_835_object = var_1_object;
		func_9290(var_835_object);
		var_840_bool = var_834_bool == 0; //@nz
		if(var_840_bool != 0) {
			var_841_bool = 0; var_842_object = Obj();
			var_842_object = var_1_object;
			func_9386(var_842_object);
			if(var_841_bool != 0) {
				var_833_bool = 1;
			}
		}
		if(var_833_bool != 0) {
			var_847_object = Obj(); var_848_object = Obj();
			var_847_object = var_1_object;
			var_848_object = var_0_object;
			func_8543();
			var_851_object = Obj(); var_852_object = Obj();
			var_851_object = var_1_object;
			var_852_object = var_0_object;
			func_8736();
			var_855_string = "";
			func_551(var_827_object, "Neutral");
			@@@var_0_object:SetMessage((int)10676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10688, (int)11789, (int)11801);
		} else {
				var_872_bool = 0; var_873_object = Obj();
				var_873_object = var_1_object;
				func_9434(var_873_object);
				if(var_872_bool != 0) {
					var_878_string = "";
					func_551(var_827_object, "Neutral");
					@@@var_0_object:SetMessage((int)12502);
					@@@var_0_object:ClearReplies();
					var_880_bool = 0;
					var_880_bool = 0;
					var_881_bool = 0; var_882_object = Obj();
					var_882_object = var_1_object;
					func_9290(var_882_object);
					if(var_881_bool != 0) {
						var_883_bool = 0; var_884_object = Obj();
						var_884_object = var_1_object;
						func_9302(var_884_object);
						if(var_883_bool != 0) {
							var_880_bool = 1;
						}
					}
					if(var_880_bool != 0) {
						@@@var_0_object:AddReply((int)12027, (int)13248, (int)13245);
					}
					var_892_bool = 0;
					var_892_bool = 0;
					var_893_bool = 0;
					var_893_bool = 0;
					var_894_bool = 0;
					var_894_bool = 0;
					var_895_bool = 0;
					var_895_bool = 0;
					var_896_bool = 0; var_897_object = Obj();
					var_897_object = var_1_object;
					func_9254(var_897_object);
					if(var_896_bool != 0) {
						var_902_bool = 0; var_903_object = Obj();
						var_903_object = var_1_object;
						func_9266(var_903_object);
						if(var_902_bool != 0) {
							var_895_bool = 1;
						}
					}
					if(var_895_bool != 0) {
						var_908_bool = 0; var_909_object = Obj();
						var_909_object = var_1_object;
						func_9230(var_909_object);
						var_914_bool = var_908_bool == 0; //@nz
						if(var_914_bool != 0) {
							var_894_bool = 1;
						}
					}
					if(var_894_bool != 0) {
						var_915_bool = 0; var_916_object = Obj();
						var_916_object = var_1_object;
						func_9242(var_916_object);
						var_921_bool = var_915_bool == 0; //@nz
						if(var_921_bool != 0) {
							var_893_bool = 1;
						}
					}
					if(var_893_bool != 0) {
						var_922_bool = 0; var_923_object = Obj();
						var_923_object = var_1_object;
						func_9278(var_923_object);
						var_928_bool = var_922_bool == 0; //@nz
						if(var_928_bool != 0) {
							var_892_bool = 1;
						}
					}
					if(var_892_bool != 0) {
						@@@var_0_object:AddReply((int)12503, (int)13674, (int)13673);
					}
					@@@var_0_object:AddReply((int)12514, (int)-1, (int)13684);
					goto Label_521;
				}
				return 0;
		}
	}
Label_521:
	var_864_bool = 0;
	func_7949(var_864_bool);
	if(var_864_bool != 0) {

	Label_525:
		lshWaitForAnimEnd();
		var_865_object = var_3_object;
		if(var_865_object != 0) {
		} else {
			var_866_string = "";
			var_866_string = var_2_object;
			func_7857(var_866_string);
			goto Label_525;
	}
		PlayAnimation("all", "idle");

	Label_540:
		WaitForAnimEnd();
		var_869_object = var_3_object;
		if(var_869_object != 0) {
			goto Label_550;
		}
		PlayAnimation("all", "idle");
		goto Label_540;

	}
	goto Label_550;
	
Label_550:
	return 0;
	
}
EMIT "GOTO 0x185";


func_9088(var_355_bool)
{
	var_357_int = 0; var_358_string = "";
	func_7892(var_357_int, "d4q01");
	var_362_bool = var_357_int == (int)0;
	if(var_362_bool != 0) {
		var_355_bool = 1;
		return 0;
	}
	var_355_bool = 0;
	return 0;
}


func_8070()
{
	var_52_object = Obj(); var_53_object = Obj();
	SetVariable("d3q01", (int)4);
	func_9539(Obj());
	var_56_object = var_53_object;
	var_67_float = 0;
	func_7916(var_67_float);
	@@var_53_object:AddMark("d3q01BigVladGotoGeorg", "pt_map_georg", (int)1, (int)11153, var_67_float);
	var_74_float = 0;
	func_7916(var_74_float);
	@@var_53_object:AddMark("d3q01BigVladGotoGeorgSelf", "pt_map_bigvlad", (int)1, (int)15297, var_74_float);
	func_9606();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9606()
{
	var_75_object = Obj(); var_76_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_76_object, (int)135, (int)1, (int)15298);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_76_object = var_82_object;
	func_9510(var_81_bool, var_82_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8586()
{
	var_216_object = Obj(); var_217_object = Obj(); var_218_object = Obj(); var_219_object = Obj();
	func_9539(Obj());
	var_220_object = var_218_object;
	@@var_218_object:FindMark(var_219_object, "d4q01BigVladGotoLara");
	var_222_object = var_219_object;
	if(var_222_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01BigVladGotoLaraSelf");
	var_224_object = var_219_object;
	if(var_224_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01BigVladGotoSklad");
	var_226_object = var_219_object;
	if(var_226_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01BigVladGotoSobor");
	var_228_object = var_219_object;
	if(var_228_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01BigVladGotoSoborAndTheaterSelf");
	var_230_object = var_219_object;
	if(var_230_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01BigVladGotoTheater");
	var_232_object = var_219_object;
	if(var_232_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01LaraGotoMladVlad");
	var_234_object = var_219_object;
	if(var_234_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01LaraGotoMladVladSelf");
	var_236_object = var_219_object;
	if(var_236_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01LaraGotoOspina");
	var_238_object = var_219_object;
	if(var_238_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01LaraGotoOspinaSelf");
	var_240_object = var_219_object;
	if(var_240_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01MladVladGotoBigVlad");
	var_242_object = var_219_object;
	if(var_242_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01MladVladGotoBigVladSelf");
	var_244_object = var_219_object;
	if(var_244_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01MladVladGotoOspina");
	var_246_object = var_219_object;
	if(var_246_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01OspinaGotoLara");
	var_248_object = var_219_object;
	if(var_248_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01WastedMale");
	var_250_object = var_219_object;
	if(var_250_object != 0) {
		@@var_219_object:Remove();
	}
	@@var_218_object:FindMark(var_219_object, "d4q01Whitemask");
	var_252_object = var_219_object;
	if(var_252_object != 0) {
		@@var_219_object:Remove();
	}
	func_9686();
	var_262_bool = 0; var_263_string = ""; var_264_string = "";
	func_7904(var_262_bool, "quest_d4_01", "failed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9100(var_363_bool)
{
	var_365_int = 0; var_366_string = "";
	func_7892(var_365_int, "ood4BigVlad1");
	var_368_bool = var_365_int == (int)0;
	if(var_368_bool != 0) {
		var_363_bool = 1;
		return 0;
	}
	var_363_bool = 0;
	return 0;
}


func_9622()
{
	var_76_object = Obj(); var_77_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_77_object, (int)20, (int)1, (int)3360);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_77_object = var_83_object;
	func_9510(var_82_bool, var_83_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1432(var_2_object, var_211_string)
{
	var_212_bool = 0;
	func_7949(var_212_bool);
	var_213_bool = var_212_bool == 0; //@nz
	if(var_213_bool != 0) {
		return 0;
	}
	var_214_bool = var_211_string == var_2_object;
	if(var_214_bool != 0) {
		return 0;
	}
	var_215_string = "";
	var_211_string = var_215_string;
	func_7857(var_215_string);
	var_2_object = var_211_string;
	return 0;
}


func_9112(var_395_bool)
{
	var_397_int = 0; var_398_string = "";
	func_7892(var_397_int, "d4q01");
	var_400_bool = var_397_int == (int)3;
	if(var_400_bool != 0) {
		var_395_bool = 1;
		return 0;
	}
	var_395_bool = 0;
	return 0;
}


func_9124(var_401_bool)
{
	var_403_int = 0; var_404_string = "";
	func_7892(var_403_int, "ood4BigVlad2");
	var_406_bool = var_403_int == (int)0;
	if(var_406_bool != 0) {
		var_401_bool = 1;
		return 0;
	}
	var_401_bool = 0;
	return 0;
}


func_8102()
{
	SetVariable("ood3BigVlad2", (int)1);
	return 0;
}


func_9638()
{
	var_101_object = Obj(); var_102_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_102_object, (int)87, (int)1, (int)12169);
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0;
	var_102_object = var_108_object;
	func_9510(var_107_bool, var_108_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8108()
{
	SetVariable("ood3BigVlad3", (int)1);
	return 0;
}


func_9136(var_417_bool, var_418_object)
{
	var_419_bool = 0;
	var_419_bool = 1;
	var_420_bool = 0; var_421_object = Obj(); var_422_string = "";
	var_418_object = var_421_object;
	func_7897(var_420_bool, var_421_object, "d4q01_sobor_key");
	var_427_bool = var_420_bool == 0; //@nz
	if(var_427_bool != 1) {
		var_428_bool = 0; var_429_object = Obj(); var_430_string = "";
		var_418_object = var_429_object;
		func_7897(var_428_bool, var_429_object, "d4q01_theater_key");
		var_431_bool = var_428_bool == 0; //@nz
		if(var_431_bool != 1) {
			var_419_bool = 0;
		}
	}
	if(var_419_bool != 0) {
		var_432_int = 0; var_433_string = "";
		func_7892(var_432_int, "d4q01");
		var_435_bool = var_432_int == (int)4;
		if(var_435_bool != 0) {
			var_417_bool = 1;
			return 0;
		}
	}
	var_417_bool = 0;
	return 0;
}


func_8114()
{
	var_156_object = Obj(); var_157_object = Obj();
	SetVariable("d3q01", (int)6);
	func_9539(Obj());
	var_160_object = var_157_object;
	var_165_float = 0;
	func_7916(var_165_float);
	@@var_157_object:AddMark("d3q01BigVladAgreedSelf", "pt_map_bigvlad", (int)1, (int)11155, var_165_float);
	var_170_float = 0;
	func_7916(var_170_float);
	@@var_157_object:AddMark("d3q01BigVladAgreed", "pt_map_ospina", (int)1, (int)15300, var_170_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9654()
{
	var_192_object = Obj(); var_193_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_193_object, (int)89, (int)1, (int)12171);
	var_198_bool = 0; var_199_object = Obj(); var_200_int = 0;
	var_193_object = var_199_object;
	func_9510(var_198_bool, var_199_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5568(var_2_object, var_373_string)
{
	var_374_bool = 0;
	func_7949(var_374_bool);
	var_375_bool = var_374_bool == 0; //@nz
	if(var_375_bool != 0) {
		return 0;
	}
	var_376_bool = var_373_string == var_2_object;
	if(var_376_bool != 0) {
		return 0;
	}
	var_377_string = "";
	var_373_string = var_377_string;
	func_7857(var_377_string);
	var_2_object = var_373_string;
	return 0;
}


func_9670()
{
	var_312_object = Obj(); var_313_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_313_object, (int)90, (int)1, (int)12172);
	var_318_bool = 0; var_319_object = Obj(); var_320_int = 0;
	var_313_object = var_319_object;
	func_9510(var_318_bool, var_319_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9166(var_440_bool, var_441_object)
{
	var_442_bool = 0;
	var_442_bool = 0;
	var_443_bool = 0; var_444_object = Obj(); var_445_string = "";
	var_441_object = var_444_object;
	func_7897(var_443_bool, var_444_object, "d4q01_sobor_key");
	if(var_443_bool != 0) {
		var_446_bool = 0; var_447_object = Obj(); var_448_string = "";
		var_441_object = var_447_object;
		func_7897(var_446_bool, var_447_object, "d4q01_theater_key");
		if(var_446_bool != 0) {
			var_442_bool = 1;
		}
	}
	if(var_442_bool != 0) {
		var_449_int = 0; var_450_string = "";
		func_7892(var_449_int, "d4q01");
		var_452_bool = var_449_int == (int)4;
		if(var_452_bool != 0) {
			var_440_bool = 1;
			return 0;
		}
	}
	var_440_bool = 0;
	return 0;
}


func_8143(var_92_object)
{
	var_93_object = Obj(); var_94_string = ""; var_95_float = 0;
	func_9539(Obj());
	var_96_object = var_93_object;
	func_9556(var_93_object, "pt_map_alexandr", (float)2);
	var_116_object = Obj();
	func_9539(var_116_object);
	@@var_92_object:ShowMap(var_116_object);
	return 0;
}


func_9686()
{
	var_253_object = Obj(); var_254_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_254_object, (int)91, (int)1, (int)12173);
	var_259_bool = 0; var_260_object = Obj(); var_261_int = 0;
	var_254_object = var_260_object;
	func_9510(var_259_bool, var_260_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8159()
{
	SetVariable("ood3BigVlad4", (int)1);
	return 0;
}


func_8165()
{
	var_179_object = Obj(); var_180_object = Obj();
	SetVariable("d3q02", (int)3);
	func_9539(Obj());
	var_183_object = var_180_object;
	var_188_float = 0;
	func_7916(var_188_float);
	@@var_180_object:AddMark("d3q02BigVladGotoHan", "pt_map_han", (int)0, (int)11385, var_188_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9702()
{
	var_66_object = Obj(); var_67_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_67_object, (int)141, (int)1, (int)15341);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_67_object = var_73_object;
	func_9510(var_72_bool, var_73_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9194(var_453_bool)
{
	var_455_int = 0; var_456_string = "";
	func_7892(var_455_int, "ood4BigVlad3");
	var_458_bool = var_455_int == (int)0;
	if(var_458_bool != 0) {
		var_453_bool = 1;
		return 0;
	}
	var_453_bool = 0;
	return 0;
}


func_9206(var_141_bool)
{
	var_143_int = 0; var_144_string = "";
	func_7892(var_143_int, "d5q01");
	var_148_bool = var_143_int == (int)1;
	if(var_148_bool != 0) {
		var_141_bool = 1;
		return 0;
	}
	var_141_bool = 0;
	return 0;
}


func_9718()
{
	var_80_object = Obj(); var_81_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_81_object, (int)115, (int)1, (int)13738);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_81_object = var_87_object;
	func_9510(var_86_bool, var_87_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8185(var_190_object)
{
	var_191_object = Obj(); var_192_string = ""; var_193_float = 0;
	func_9539(Obj());
	var_194_object = var_191_object;
	func_9556(var_191_object, "pt_map_han", (float)2);
	var_195_object = Obj();
	func_9539(var_195_object);
	@@var_190_object:ShowMap(var_195_object);
	return 0;
}


