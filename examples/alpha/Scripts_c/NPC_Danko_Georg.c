// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|W:No|W:ui/NPC_Georg.png|W:d1q01|W:d1GeorgInfo|W:pt_map_georg|A:AddMark|W:d1GeorgGotoViktor|W:pt_map_viktor|W:d1q01EvaAboutMark|A:FindMark|A:Remove|W:d1q01EvaGotoSimon|W:d1q01GrifAboutRubin|W:d1q01MarkAboutJulia|W:d1q01MarkAboutLara|W:d1q01NotkinAboutRubin|W:d1q01TeloNedostupno|W:d1q01FirstGeorgVisit|W:playsound|W:givemoney|W:ood2Georg1|W:ood2Georg2|W:d2q01GeorgVisit|W:ood1Georg4|W:KnowGorny|W:d1GeorgAboutAlexandr|W:pt_map_alexandr|W:d1GeorgAboutBigVlad|W:pt_map_bigvlad|W:mapmark|W:pt_map_mishka|A:ShowMap|W:d3q01|W:d3q01GeorgAgreedSelf|W:d3q01GeorgAgreed|W:ood3Georg1|W:ood1GeorgMQ1|W:KnowViktor|W:ood3Georg2|W:d3q02|W:d3q02GeorgGotoMishka|W:d3q02GeorgSelf|W:d3q02GeorgGotoViktor|W:quest_d3_02|W:money3000 is given|W:completed|W:ood3Georg3|W:ood1Georg1|W:ood1Georg2|W:ood1Georg3|W:KnowRubin|W:KnowSaburivClan|W:KnowOlgimskiClan|W:KnowKainClan|W:KnowGeorg|W:ood6Georg1|W:ood6Georg2|W:ood6Georg3|W:ood8Georg1|W:d3GeorgVisit|W:d2q01|W:KnowBurahDead|W:d3RubinToldWhereIsSimon|W:d3q02SeeCorpse|W:d6q01|W:d6RubinGoesToGeorg|W:d8KainIsReason|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0xfa vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2f7 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x625 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa82 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd15 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x10c9 vars=int,int
// @PE: 0x23,0x29,0x70,0xea,0xfa,0x271,0x2e7,0x2f7,0x597,0x615,0x625,0x9fe,0xa72,0xa82,0xc69,0xd05,0xd15,0x1062,0x10b9,0x10c9,0x11de,0x122f,0x12ad,0x12b3,0x12b9,0x12bf,0x12c5,0x12cb,0x12d1,0x12d7,0x12f6,0x12fc,0x1329,0x132f,0x1335,0x133b,0x1371,0x137c,0x1383,0x1389,0x138f,0x1395,0x139b,0x13a1,0x13a7,0x13ad,0x13b3,0x13b9,0x13bf,0x13c5,0x13cb,0x13d1,0x13d7,0x13e3,0x13ef,0x13f9,0x1405,0x1411,0x141d,0x1429,0x1435,0x1441,0x144d,0x1459,0x1465,0x1471,0x147d,0x1489,0x1495,0x14a1,0x14ad,0x14b9,0x14c5,0x14d1,0x14dd,0x14e9,0x14f5,0x1501,0x150d,0x1519,0x1525,0x1531,0x15f6

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_object = Obj();
	var_30_bool = var_31_object;
	func_5622(var_31_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_bool = var_32_object;
	func_4501(var_31_bool, var_32_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4596();
		var_35_bool = var_31_bool == (int)13228;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5061();
		}
		var_41_bool = var_31_bool == (int)13232;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_5049();
		}
		var_47_bool = var_31_bool == (int)13236;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_5055();
		}
		var_53_bool = var_30_string == (int)13227;
		if(var_53_bool != 0) {
			var_54_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12009);
			@@@var_0_object:ClearReplies();
			var_70_bool = 0;
			var_70_bool = 0;
			var_71_bool = 0; var_72_object = Obj();
			var_72_object = var_1_object;
			func_5377(var_72_object);
			if(var_71_bool != 0) {
				var_79_bool = 0; var_80_object = Obj();
				var_80_object = var_1_object;
				func_5389(var_80_object);
				if(var_79_bool != 0) {
					var_70_bool = 1;
				}
			}
			if(var_70_bool != 0) {
				@@@var_0_object:AddReply((int)12010, (int)13230, (int)13228);
			}
			var_88_bool = 0;
			var_88_bool = 0;
			var_89_bool = 0;
			var_89_bool = 0;
			var_90_bool = 0;
			var_90_bool = 0;
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_5317(var_92_object);
			var_97_bool = var_91_bool == 0; //@nz
			if(var_97_bool != 0) {
				var_98_bool = 0; var_99_object = Obj();
				var_99_object = var_1_object;
				func_5329(var_99_object);
				var_104_bool = var_98_bool == 0; //@nz
				if(var_104_bool != 0) {
					var_90_bool = 1;
				}
			}
			if(var_90_bool != 0) {
				var_105_bool = 0; var_106_object = Obj();
				var_106_object = var_1_object;
				func_5341(var_106_object);
				var_111_bool = var_105_bool == 0; //@nz
				if(var_111_bool != 0) {
					var_89_bool = 1;
				}
			}
			if(var_89_bool != 0) {
				var_112_bool = 0; var_113_object = Obj();
				var_113_object = var_1_object;
				func_5353(var_113_object);
				if(var_112_bool != 0) {
					var_88_bool = 1;
				}
			}
			if(var_88_bool != 0) {
				@@@var_0_object:AddReply((int)12014, (int)13233, (int)13232);
			}
			var_121_bool = 0; var_122_object = Obj();
			var_122_object = var_1_object;
			func_5365(var_122_object);
			if(var_121_bool != 0) {
				@@@var_0_object:AddReply((int)12018, (int)3560, (int)13236);
			}
			@@@var_0_object:AddReply((int)12011, (int)-1, (int)13229);
			return 0;
		}
		var_134_bool = var_30_string == (int)3560;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3290, (int)3562, (int)3561);
			@@@var_0_object:AddReply((int)3298, (int)3572, (int)3571);
			return 0;
		}
		var_144_bool = var_30_string == (int)3572;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3300, (int)3562, (int)3573);
			@@@var_0_object:AddReply((int)3301, (int)3564, (int)3575);
			return 0;
		}
		var_154_bool = var_30_string == (int)3562;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3292, (int)3564, (int)3563);
			@@@var_0_object:AddReply((int)3295, (int)3564, (int)3566);
			return 0;
		}
		var_164_bool = var_30_string == (int)3564;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3294, (int)3568, (int)3565);
			@@@var_0_object:AddReply((int)3297, (int)3568, (int)3569);
			return 0;
		}
		var_174_bool = var_30_string == (int)3568;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3302, (int)3578, (int)3577);
			@@@var_0_object:AddReply((int)3305, (int)3578, (int)3580);
			return 0;
		}
		var_184_bool = var_30_string == (int)3578;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3304, (int)-1, (int)3579);
			return 0;
		}
		var_191_bool = var_30_string == (int)13233;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12015);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12016, (int)13235, (int)13234);
			return 0;
		}
		var_198_bool = var_30_string == (int)13235;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12017);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_202_bool = var_30_string == (int)13230;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_234(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12013, (int)-1, (int)13231);
			return 0;
		}
		var_3_string = true;
		var_208_bool = 0;
		func_4674(var_208_bool);
		if(var_208_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfb";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4596();
		var_35_bool = var_31_bool == (int)5312;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4911();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4676();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_4854();
		}
		var_95_bool = var_31_bool == (int)5313;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_4911();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_4676();
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_4854();
		}
		var_103_bool = var_31_bool == (int)5266;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_4911();
		}
		var_107_bool = var_31_bool == (int)5314;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_4676();
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_4854();
		}
		var_113_bool = var_31_bool == (int)5315;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_4676();
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_4854();
		}
		var_119_bool = var_30_string == (int)5233;
		if(var_119_bool != 0) {
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_5161(var_121_object);
			if(var_120_bool != 0) {
				var_128_object = Obj(); var_129_object = Obj();
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_4787();
				var_132_object = Obj(); var_133_object = Obj();
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_5043();
				var_136_string = "";
				func_743(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)4780);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4781, (int)5240, (int)5234);
				@@@var_0_object:AddReply((int)4782, (int)5240, (int)5235);
				@@@var_0_object:AddReply((int)4786, (int)5240, (int)5239);
				return 0;
			}
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_5103(var_161_bool, var_162_object);
			if(var_161_bool != 0) {
				var_165_object = Obj(); var_166_object = Obj();
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_5043();
				var_167_string = "";
				func_743(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)4783);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4784, (int)5294, (int)5237);
				@@@var_0_object:AddReply((int)4830, (int)5301, (int)5297);
				@@@var_0_object:AddReply((int)4836, (int)5296, (int)5304);
				@@@var_0_object:AddReply((int)4845, (int)-1, (int)5317);
				return 0;
			}
		}
		var_182_bool = var_30_string == (int)5301;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4834);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4835, (int)5299, (int)5302);
			return 0;
		}
		var_189_bool = var_30_string == (int)5294;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4827);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4828, (int)5296, (int)5295);
			@@@var_0_object:AddReply((int)4831, (int)5299, (int)5298);
			return 0;
		}
		var_199_bool = var_30_string == (int)5299;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4833, (int)5307, (int)5300);
			return 0;
		}
		var_206_bool = var_30_string == (int)5296;
		if(var_206_bool != 0) {
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_4917();
			var_211_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4837, (int)5307, (int)5306);
			return 0;
		}
		var_217_bool = var_30_string == (int)5307;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4838);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4843, (int)-1, (int)5314);
			@@@var_0_object:AddReply((int)4844, (int)-1, (int)5315);
			return 0;
		}
		var_227_bool = var_30_string == (int)5240;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4787);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4788, (int)5245, (int)5243);
			@@@var_0_object:AddReply((int)4789, (int)5245, (int)5244);
			return 0;
		}
		var_237_bool = var_30_string == (int)5245;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4790);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4791, (int)5250, (int)5247);
			@@@var_0_object:AddReply((int)4792, (int)5269, (int)5248);
			@@@var_0_object:AddReply((int)4793, (int)5271, (int)5249);
			return 0;
		}
		var_250_bool = var_30_string == (int)5271;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4812, (int)5269, (int)5272);
			@@@var_0_object:AddReply((int)4813, (int)5274, (int)5273);
			return 0;
		}
		var_260_bool = var_30_string == (int)5274;
		if(var_260_bool != 0) {
			var_261_object = Obj(); var_262_object = Obj();
			var_261_object = var_1_object;
			var_262_object = var_0_object;
			func_4823();
			var_265_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4814);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4815, (int)5269, (int)5276);
			return 0;
		}
		var_271_bool = var_30_string == (int)5269;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4810, (int)5278, (int)5270);
			@@@var_0_object:AddReply((int)4824, (int)5278, (int)5287);
			return 0;
		}
		var_281_bool = var_30_string == (int)5278;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4817, (int)5280, (int)5279);
			@@@var_0_object:AddReply((int)4825, (int)5257, (int)5289);
			return 0;
		}
		var_291_bool = var_30_string == (int)5280;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4818);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4819, (int)5282, (int)5281);
			@@@var_0_object:AddReply((int)4826, (int)5282, (int)5291);
			return 0;
		}
		var_301_bool = var_30_string == (int)5282;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4821, (int)5253, (int)5283);
			@@@var_0_object:AddReply((int)4823, (int)5253, (int)5285);
			return 0;
		}
		var_311_bool = var_30_string == (int)5250;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4794);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4795, (int)5253, (int)5251);
			@@@var_0_object:AddReply((int)4796, (int)5253, (int)5252);
			return 0;
		}
		var_321_bool = var_30_string == (int)5253;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4798, (int)5257, (int)5254);
			@@@var_0_object:AddReply((int)4799, (int)5257, (int)5256);
			return 0;
		}
		var_331_bool = var_30_string == (int)5257;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4800);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4801, (int)5259, (int)5258);
			@@@var_0_object:AddReply((int)4803, (int)5264, (int)5260);
			return 0;
		}
		var_341_bool = var_30_string == (int)5259;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4804, (int)5264, (int)5262);
			@@@var_0_object:AddReply((int)4805, (int)5264, (int)5263);
			return 0;
		}
		var_351_bool = var_30_string == (int)5264;
		if(var_351_bool != 0) {
			var_352_object = Obj(); var_353_object = Obj();
			var_352_object = var_1_object;
			var_353_object = var_0_object;
			func_4917();
			var_354_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4807, (int)5310, (int)5265);
			@@@var_0_object:AddReply((int)4808, (int)-1, (int)5266);
			return 0;
		}
		var_363_bool = var_30_string == (int)5310;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_743(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4841, (int)-1, (int)5312);
			@@@var_0_object:AddReply((int)4842, (int)-1, (int)5313);
			return 0;
		}
		var_3_string = true;
		var_372_bool = 0;
		func_4674(var_372_bool);
		if(var_372_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2f8";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4596();
		var_35_bool = var_31_bool == (int)5424;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_5001();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4708();
		}
		var_107_bool = var_31_bool == (int)5360;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_5001();
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_4781();
		}
		var_115_bool = var_31_bool == (int)5359;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_5001();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_4781();
		}
		var_121_bool = var_31_bool == (int)5394;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_5007();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_4829();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_4854();
		}
		var_148_bool = var_31_bool == (int)5407;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_5007();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_4829();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_4854();
		}
		var_156_bool = var_31_bool == (int)5341;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_5013();
		}
		var_162_bool = var_31_bool == (int)5342;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_5013();
		}
		var_166_bool = var_31_bool == (int)5347;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_5013();
		}
		var_170_bool = var_31_bool == (int)8440;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_5013();
		}
		var_174_bool = var_31_bool == (int)8449;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_4817();
		}
		var_180_bool = var_31_bool == (int)8450;
		if(var_180_bool != 0) {
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_4817();
		}
		var_184_bool = var_31_bool == (int)8446;
		if(var_184_bool != 0) {
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_4817();
		}
		var_188_bool = var_30_string == (int)5322;
		if(var_188_bool != 0) {
			var_189_bool = 0;
			var_189_bool = 0;
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_5173(var_191_object);
			if(var_190_bool != 0) {
				var_198_bool = 0; var_199_object = Obj();
				var_199_object = var_1_object;
				func_5305(var_199_object);
				if(var_198_bool != 0) {
					var_189_bool = 1;
				}
			}
			if(var_189_bool != 0) {
				var_204_string = "";
				func_1557(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)4850);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4879, (int)5370, (int)5353);
				@@@var_0_object:AddReply((int)4890, (int)5354, (int)5367);
				return 0;
			}
			var_226_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7627);
			@@@var_0_object:ClearReplies();
			var_228_bool = 0; var_229_object = Obj();
			var_229_object = var_1_object;
			func_5197(var_229_object);
			if(var_228_bool != 0) {
				@@@var_0_object:AddReply((int)7629, (int)5329, (int)8418);
			}
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_5209(var_238_object);
			if(var_237_bool != 0) {
				@@@var_0_object:AddReply((int)7632, (int)5334, (int)8421);
			}
			var_246_bool = 0;
			var_246_bool = 0;
			var_247_bool = 0; var_248_object = Obj();
			var_248_object = var_1_object;
			func_5245(var_248_object);
			if(var_247_bool != 0) {
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_5149(var_254_object);
				if(var_253_bool != 0) {
					var_246_bool = 1;
				}
			}
			if(var_246_bool != 0) {
				@@@var_0_object:AddReply((int)7630, (int)8420, (int)8419);
			}
			@@@var_0_object:AddReply((int)7658, (int)-1, (int)8451);
			return 0;
		}
		var_266_bool = var_30_string == (int)8420;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7631);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7633, (int)8445, (int)8422);
			return 0;
		}
		var_273_bool = var_30_string == (int)8445;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7654, (int)8448, (int)8447);
			@@@var_0_object:AddReply((int)7653, (int)-1, (int)8446);
			return 0;
		}
		var_283_bool = var_30_string == (int)8448;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7655);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7656, (int)-1, (int)8449);
			@@@var_0_object:AddReply((int)7657, (int)-1, (int)8450);
			return 0;
		}
		var_293_bool = var_30_string == (int)5334;
		if(var_293_bool != 0) {
			var_294_object = Obj(); var_295_object = Obj();
			var_294_object = var_1_object;
			var_295_object = var_0_object;
			func_5019();
			var_298_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4863, (int)5336, (int)5335);
			@@@var_0_object:AddReply((int)4875, (int)5414, (int)5348);
			var_306_bool = 0; var_307_object = Obj();
			var_307_object = var_1_object;
			func_5137(var_307_object);
			var_312_bool = var_306_bool == 0; //@nz
			if(var_312_bool != 0) {
				@@@var_0_object:AddReply((int)7643, (int)8435, (int)8434);
			}
			return 0;
		}
		var_317_bool = var_30_string == (int)8435;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7645, (int)8437, (int)8436);
			return 0;
		}
		var_324_bool = var_30_string == (int)8437;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7647, (int)5336, (int)8438);
			return 0;
		}
		var_331_bool = var_30_string == (int)5414;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4927, (int)8441, (int)5415);
			@@@var_0_object:AddReply((int)7648, (int)-1, (int)8440);
			return 0;
		}
		var_341_bool = var_30_string == (int)8441;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7650, (int)5338, (int)8442);
			return 0;
		}
		var_348_bool = var_30_string == (int)5336;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4864);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4865, (int)5338, (int)5337);
			@@@var_0_object:AddReply((int)4871, (int)5344, (int)5343);
			return 0;
		}
		var_358_bool = var_30_string == (int)5344;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4873, (int)5338, (int)5345);
			@@@var_0_object:AddReply((int)4874, (int)-1, (int)5347);
			return 0;
		}
		var_368_bool = var_30_string == (int)5338;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4867, (int)5340, (int)5339);
			return 0;
		}
		var_375_bool = var_30_string == (int)5340;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4868);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4869, (int)-1, (int)5341);
			@@@var_0_object:AddReply((int)4870, (int)-1, (int)5342);
			return 0;
		}
		var_385_bool = var_30_string == (int)5329;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4858, (int)5374, (int)5330);
			return 0;
		}
		var_392_bool = var_30_string == (int)5374;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4896, (int)5377, (int)5375);
			@@@var_0_object:AddReply((int)4897, (int)5377, (int)5376);
			return 0;
		}
		var_402_bool = var_30_string == (int)5377;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4899, (int)5380, (int)5378);
			@@@var_0_object:AddReply((int)4913, (int)5396, (int)5395);
			return 0;
		}
		var_412_bool = var_30_string == (int)5396;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4915, (int)5380, (int)5397);
			return 0;
		}
		var_419_bool = var_30_string == (int)5380;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4901, (int)5382, (int)5381);
			@@@var_0_object:AddReply((int)4916, (int)5382, (int)5399);
			@@@var_0_object:AddReply((int)4917, (int)5402, (int)5401);
			return 0;
		}
		var_432_bool = var_30_string == (int)5402;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4919, (int)5382, (int)5403);
			return 0;
		}
		var_439_bool = var_30_string == (int)5382;
		if(var_439_bool != 0) {
			var_440_object = Obj(); var_441_object = Obj();
			var_440_object = var_1_object;
			var_441_object = var_0_object;
			func_5037();
			var_444_object = Obj(); var_445_object = Obj();
			var_444_object = var_1_object;
			var_445_object = var_0_object;
			func_5031();
			var_448_object = Obj(); var_449_object = Obj();
			var_448_object = var_1_object;
			var_449_object = var_0_object;
			func_5025();
			var_452_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4903, (int)5385, (int)5383);
			@@@var_0_object:AddReply((int)4920, (int)5385, (int)5405);
			@@@var_0_object:AddReply((int)4925, (int)5409, (int)5412);
			return 0;
		}
		var_464_bool = var_30_string == (int)5385;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4906, (int)5388, (int)5386);
			@@@var_0_object:AddReply((int)4907, (int)5388, (int)5387);
			@@@var_0_object:AddReply((int)4922, (int)5409, (int)5408);
			return 0;
		}
		var_477_bool = var_30_string == (int)5409;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4924, (int)5388, (int)5410);
			return 0;
		}
		var_484_bool = var_30_string == (int)5388;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4909, (int)5392, (int)5390);
			@@@var_0_object:AddReply((int)4910, (int)5392, (int)5391);
			return 0;
		}
		var_494_bool = var_30_string == (int)5392;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4912, (int)-1, (int)5394);
			@@@var_0_object:AddReply((int)4921, (int)-1, (int)5407);
			return 0;
		}
		var_504_bool = var_30_string == (int)5354;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4881, (int)5356, (int)5355);
			@@@var_0_object:AddReply((int)4889, (int)5356, (int)5365);
			return 0;
		}
		var_514_bool = var_30_string == (int)5356;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4883, (int)5358, (int)5357);
			@@@var_0_object:AddReply((int)4887, (int)5358, (int)5361);
			return 0;
		}
		var_524_bool = var_30_string == (int)5358;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4886, (int)-1, (int)5360);
			@@@var_0_object:AddReply((int)4885, (int)-1, (int)5359);
			return 0;
		}
		var_534_bool = var_30_string == (int)5370;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4928, (int)5421, (int)5416);
			@@@var_0_object:AddReply((int)4929, (int)5418, (int)5417);
			return 0;
		}
		var_544_bool = var_30_string == (int)5418;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4931, (int)5358, (int)5419);
			return 0;
		}
		var_551_bool = var_30_string == (int)5421;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4893, (int)5354, (int)5371);
			@@@var_0_object:AddReply((int)4933, (int)5423, (int)5422);
			return 0;
		}
		var_561_bool = var_30_string == (int)5423;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_1557(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4935, (int)-1, (int)5424);
			return 0;
		}
		var_3_string = true;
		var_567_bool = 0;
		func_4674(var_567_bool);
		if(var_567_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x626";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4596();
		var_35_bool = var_31_bool == (int)7538;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4799();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4811();
		}
		var_45_bool = var_31_bool == (int)7539;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_4799();
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_4811();
		}
		var_51_bool = var_31_bool == (int)7542;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_4799();
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_4811();
		}
		var_57_bool = var_31_bool == (int)7543;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_4799();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_4811();
		}
		var_63_bool = var_31_bool == (int)7841;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_4805();
		}
		var_69_bool = var_31_bool == (int)7842;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_4805();
		}
		var_73_bool = var_31_bool == (int)7839;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_4805();
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_4811();
		}
		var_79_bool = var_31_bool == (int)7843;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_4805();
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_4811();
		}
		var_85_bool = var_30_string == (int)7529;
		if(var_85_bool != 0) {
			var_86_bool = 0;
			var_86_bool = 0;
			var_87_bool = 0; var_88_object = Obj();
			var_88_object = var_1_object;
			func_5079(var_88_object);
			if(var_87_bool != 0) {
				var_95_bool = 0; var_96_object = Obj();
				var_96_object = var_1_object;
				func_5125(var_96_object);
				if(var_95_bool != 0) {
					var_86_bool = 1;
				}
			}
			if(var_86_bool != 0) {
				var_101_string = "";
				func_2674(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6829);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6830, (int)7531, (int)7530);
				@@@var_0_object:AddReply((int)6844, (int)7547, (int)7546);
				@@@var_0_object:AddReply((int)6848, (int)7547, (int)7552);
				@@@var_0_object:AddReply((int)6849, (int)7535, (int)7554);
				return 0;
			}
			var_129_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6850);
			@@@var_0_object:ClearReplies();
			var_131_bool = 0;
			var_131_bool = 0;
			var_132_bool = 0; var_133_object = Obj();
			var_133_object = var_1_object;
			func_5091(var_133_object);
			if(var_132_bool != 0) {
				var_138_bool = 0; var_139_object = Obj();
				var_139_object = var_1_object;
				func_5113(var_139_object);
				if(var_138_bool != 0) {
					var_131_bool = 1;
				}
			}
			if(var_131_bool != 0) {
				@@@var_0_object:AddReply((int)6851, (int)7835, (int)7557);
			}
			@@@var_0_object:AddReply((int)7536, (int)-1, (int)8318);
			return 0;
		}
		var_151_bool = var_30_string == (int)7835;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7116);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7117, (int)7840, (int)7836);
			@@@var_0_object:AddReply((int)7118, (int)7838, (int)7837);
			return 0;
		}
		var_161_bool = var_30_string == (int)7838;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7119);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7120, (int)-1, (int)7839);
			@@@var_0_object:AddReply((int)7124, (int)-1, (int)7843);
			return 0;
		}
		var_171_bool = var_30_string == (int)7840;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7125, (int)7845, (int)7844);
			@@@var_0_object:AddReply((int)7127, (int)7847, (int)7846);
			return 0;
		}
		var_181_bool = var_30_string == (int)7847;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7129, (int)7845, (int)7848);
			return 0;
		}
		var_188_bool = var_30_string == (int)7845;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7122, (int)-1, (int)7841);
			@@@var_0_object:AddReply((int)7123, (int)-1, (int)7842);
			return 0;
		}
		var_198_bool = var_30_string == (int)7547;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6846, (int)7533, (int)7548);
			@@@var_0_object:AddReply((int)6847, (int)7533, (int)7550);
			return 0;
		}
		var_208_bool = var_30_string == (int)7531;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6832, (int)7533, (int)7532);
			return 0;
		}
		var_215_bool = var_30_string == (int)7533;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6834, (int)7535, (int)7534);
			@@@var_0_object:AddReply((int)6843, (int)7535, (int)7544);
			@@@var_0_object:AddReply((int)6842, (int)-1, (int)7543);
			return 0;
		}
		var_228_bool = var_30_string == (int)7535;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6836, (int)7537, (int)7536);
			@@@var_0_object:AddReply((int)6840, (int)7537, (int)7540);
			@@@var_0_object:AddReply((int)6841, (int)-1, (int)7542);
			return 0;
		}
		var_241_bool = var_30_string == (int)7537;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_2674(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6838, (int)-1, (int)7538);
			@@@var_0_object:AddReply((int)6839, (int)-1, (int)7539);
			return 0;
		}
		var_3_string = true;
		var_250_bool = 0;
		func_4674(var_250_bool);
		if(var_250_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa83";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4596();
		var_35_bool = var_31_bool == (int)11255;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4923();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4929();
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_4860(var_113_object);
		}
		var_139_bool = var_31_bool == (int)11278;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_4923();
		}
		var_143_bool = var_31_bool == (int)9939;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_4923();
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_4929();
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_4860(var_149_object);
		}
		var_151_bool = var_31_bool == (int)11274;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_4988();
		}
		var_161_bool = var_31_bool == (int)11275;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_4923();
		}
		var_165_bool = var_31_bool == (int)11276;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_4923();
		}
		var_169_bool = var_31_bool == (int)12577;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_4929();
		}
		var_173_bool = var_31_bool == (int)9954;
		if(var_173_bool != 0) {
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_4876();
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_4905();
		}
		var_196_bool = var_31_bool == (int)9955;
		if(var_196_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_4876();
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_object;
			func_4905();
		}
		var_202_bool = var_31_bool == (int)12338;
		if(var_202_bool != 0) {
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_4876();
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_4905();
		}
		var_208_bool = var_31_bool == (int)11515;
		if(var_208_bool != 0) {
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_4995();
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_4977(var_214_object);
			var_222_object = Obj(); var_223_object = Obj();
			var_222_object = var_1_object;
			var_223_object = var_0_object;
			func_4793();
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_4988();
		}
		var_229_bool = var_31_bool == (int)9915;
		if(var_229_bool != 0) {
			var_230_object = Obj(); var_231_object = Obj();
			var_230_object = var_1_object;
			var_231_object = var_0_object;
			func_4977(var_231_object);
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_object;
			func_4793();
		}
		var_235_bool = var_30_string == (int)9919;
		if(var_235_bool != 0) {
			var_236_bool = 0;
			var_236_bool = 0;
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_5221(var_238_object);
			var_245_bool = var_237_bool == 0; //@nz
			if(var_245_bool != 0) {
				var_246_bool = 0; var_247_object = Obj();
				var_247_object = var_1_object;
				func_5257(var_247_object);
				if(var_246_bool != 0) {
					var_236_bool = 1;
				}
			}
			if(var_236_bool != 0) {
				var_252_object = Obj(); var_253_object = Obj();
				var_252_object = var_1_object;
				var_253_object = var_0_object;
				func_5073();
				var_256_string = "";
				func_3333(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9043);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9044, (int)9921, (int)9920);
				return 0;
			}
			var_275_object = Obj(); var_276_object = Obj();
			var_275_object = var_1_object;
			var_276_object = var_0_object;
			func_5073();
			var_277_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9024);
			@@@var_0_object:ClearReplies();
			var_279_bool = 0;
			var_279_bool = 0;
			var_280_bool = 0; var_281_object = Obj();
			var_281_object = var_1_object;
			func_5185(var_281_object);
			if(var_280_bool != 0) {
				var_286_bool = 0; var_287_object = Obj();
				var_287_object = var_1_object;
				func_5221(var_287_object);
				var_288_bool = var_286_bool == 0; //@nz
				if(var_288_bool != 0) {
					var_279_bool = 1;
				}
			}
			if(var_279_bool != 0) {
				@@@var_0_object:AddReply((int)11376, (int)12576, (int)12575);
			}
			var_292_bool = 0;
			var_292_bool = 0;
			var_293_bool = 0; var_294_object = Obj();
			var_294_object = var_1_object;
			func_5221(var_294_object);
			if(var_293_bool != 0) {
				var_295_bool = 0; var_296_object = Obj();
				var_296_object = var_1_object;
				func_5233(var_296_object);
				if(var_295_bool != 0) {
					var_292_bool = 1;
				}
			}
			if(var_292_bool != 0) {
				@@@var_0_object:AddReply((int)9042, (int)9941, (int)9918);
			}
			var_304_bool = 0;
			var_304_bool = 0;
			var_305_bool = 0; var_306_object = Obj();
			var_306_object = var_1_object;
			func_5281(var_306_object);
			if(var_305_bool != 0) {
				var_311_bool = 0; var_312_object = Obj();
				var_312_object = var_1_object;
				func_5293(var_312_object);
				if(var_311_bool != 0) {
					var_304_bool = 1;
				}
			}
			if(var_304_bool != 0) {
				@@@var_0_object:AddReply((int)10442, (int)11512, (int)11511);
			}
			@@@var_0_object:AddReply((int)9041, (int)9899, (int)9917);
			@@@var_0_object:AddReply((int)11147, (int)-1, (int)12337);
			return 0;
		}
		var_327_bool = var_30_string == (int)9899;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9026, (int)9901, (int)9900);
			@@@var_0_object:AddReply((int)9033, (int)-1, (int)9908);
			var_336_bool = 0; var_337_object = Obj();
			var_337_object = var_1_object;
			func_5269(var_337_object);
			if(var_336_bool != 0) {
				@@@var_0_object:AddReply((int)9034, (int)9910, (int)9909);
			}
			return 0;
		}
		var_346_bool = var_30_string == (int)9910;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9035);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9036, (int)9901, (int)9911);
			@@@var_0_object:AddReply((int)9037, (int)9914, (int)9913);
			return 0;
		}
		var_356_bool = var_30_string == (int)9914;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9039, (int)-1, (int)9915);
			@@@var_0_object:AddReply((int)9040, (int)-1, (int)9916);
			return 0;
		}
		var_366_bool = var_30_string == (int)9901;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9027);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9028, (int)9903, (int)9902);
			@@@var_0_object:AddReply((int)9032, (int)9903, (int)9906);
			return 0;
		}
		var_376_bool = var_30_string == (int)9903;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9029);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9030, (int)-1, (int)9904);
			@@@var_0_object:AddReply((int)9031, (int)-1, (int)9905);
			return 0;
		}
		var_386_bool = var_30_string == (int)11512;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10444, (int)11514, (int)11513);
			return 0;
		}
		var_393_bool = var_30_string == (int)11514;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10446, (int)-1, (int)11515);
			return 0;
		}
		var_400_bool = var_30_string == (int)9941;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9065, (int)9943, (int)9942);
			return 0;
		}
		var_407_bool = var_30_string == (int)9943;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9067, (int)9946, (int)9944);
			@@@var_0_object:AddReply((int)9068, (int)9949, (int)9945);
			return 0;
		}
		var_417_bool = var_30_string == (int)9949;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9073, (int)9948, (int)9950);
			return 0;
		}
		var_424_bool = var_30_string == (int)9946;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9074, (int)9953, (int)9952);
			@@@var_0_object:AddReply((int)9070, (int)9948, (int)9947);
			return 0;
		}
		var_434_bool = var_30_string == (int)9948;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11149, (int)-1, (int)12338);
			return 0;
		}
		var_441_bool = var_30_string == (int)9953;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9076, (int)-1, (int)9954);
			@@@var_0_object:AddReply((int)9077, (int)-1, (int)9955);
			return 0;
		}
		var_451_bool = var_30_string == (int)12576;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11378, (int)-1, (int)12577);
			return 0;
		}
		var_458_bool = var_30_string == (int)9921;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10222, (int)11270, (int)11269);
			return 0;
		}
		var_465_bool = var_30_string == (int)11270;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9046, (int)11280, (int)9922);
			@@@var_0_object:AddReply((int)10224, (int)9929, (int)11271);
			var_474_bool = 0; var_475_object = Obj();
			var_475_object = var_1_object;
			func_5269(var_475_object);
			if(var_474_bool != 0) {
				@@@var_0_object:AddReply((int)9047, (int)9924, (int)9923);
			}
			return 0;
		}
		var_480_bool = var_30_string == (int)9924;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9048);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9049, (int)9929, (int)9925);
			@@@var_0_object:AddReply((int)10225, (int)11273, (int)11272);
			return 0;
		}
		var_490_bool = var_30_string == (int)11273;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10227, (int)-1, (int)11274);
			@@@var_0_object:AddReply((int)10228, (int)-1, (int)11275);
			@@@var_0_object:AddReply((int)10229, (int)-1, (int)11276);
			return 0;
		}
		var_503_bool = var_30_string == (int)9929;
		if(var_503_bool != 0) {
			var_504_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9060, (int)9938, (int)9937);
			return 0;
		}
		var_510_bool = var_30_string == (int)9938;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9063, (int)11254, (int)9940);
			@@@var_0_object:AddReply((int)9062, (int)-1, (int)9939);
			return 0;
		}
		var_520_bool = var_30_string == (int)11254;
		if(var_520_bool != 0) {
			var_521_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10209, (int)-1, (int)11255);
			@@@var_0_object:AddReply((int)10231, (int)-1, (int)11278);
			return 0;
		}
		var_530_bool = var_30_string == (int)11280;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_3333(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10232);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10233, (int)9938, (int)11281);
			@@@var_0_object:AddReply((int)10234, (int)9938, (int)11282);
			return 0;
		}
		var_3_string = true;
		var_539_bool = 0;
		func_4674(var_539_bool);
		if(var_539_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd16";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	if((int)1 != 0) {
		func_4596();
		var_35_bool = var_30_int == (int)13415;
		if(var_35_bool != 0) {
			var_36_bool = 0;
			var_36_bool = 0;
			var_37_bool = 0; var_38_object = Obj();
			var_38_object = var_1_object;
			func_5401(var_38_object);
			if(var_37_bool != 0) {
				var_45_bool = 0; var_46_object = Obj();
				var_46_object = var_1_object;
				func_5413(var_46_object);
				if(var_45_bool != 0) {
					var_36_bool = 1;
				}
			}
			if(var_36_bool != 0) {
				var_51_object = Obj(); var_52_object = Obj();
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_5067();
				var_55_string = "";
				func_4281(var_31_int, "Neutral");
				@@@var_0_object:SetMessage((int)12258);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12259, (int)13417, (int)13416);
				return 0;
			}
			var_74_string = "";
			func_4281(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)13775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13776, (int)-1, (int)15012);
			return 0;
		}
		var_80_bool = var_30_int == (int)13417;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_4281(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)12260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12261, (int)13419, (int)13418);
			return 0;
		}
		var_87_bool = var_30_int == (int)13419;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_4281(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)12262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12263, (int)13421, (int)13420);
			return 0;
		}
		var_94_bool = var_30_int == (int)13421;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_4281(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)12264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12265, (int)13423, (int)13422);
			return 0;
		}
		var_101_bool = var_30_int == (int)13423;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_4281(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)12266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12267, (int)13425, (int)13424);
			return 0;
		}
		var_108_bool = var_30_int == (int)13425;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_4281(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)12268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12269, (int)13427, (int)13426);
			return 0;
		}
		var_115_bool = var_30_int == (int)13427;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_4281(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)12270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12271, (int)13429, (int)13428);
			return 0;
		}
		var_122_bool = var_30_int == (int)13429;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_4281(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)12272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12273, (int)-1, (int)13430);
			return 0;
		}
		var_3_string = true;
		var_128_bool = 0;
		func_4674(var_128_bool);
		if(var_128_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x10ca";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_5618();
	var_31_bool = 0;
	func_4513(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_35_string = "";
	func_4578("Neutral");
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


func_5377(var_71_bool)
{
	var_73_int = 0; var_74_string = "";
	func_4613(var_73_int, "d6RubinGoesToGeorg");
	var_78_bool = var_73_int != (int)0;
	if(var_78_bool != 0) {
		var_71_bool = 1;
		return 0;
	}
	var_71_bool = 0;
	return 0;
}


func_4613(var_39_int, var_40_string)
{
	var_41_int = 0; var_42_int = 0;
	GetVariable(var_40_string, var_42_int);
	var_42_int = var_39_int;
	return 2;
}


func_5125(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_4613(var_97_int, "d2q01");
	var_100_bool = var_97_int == (int)6;
	if(var_100_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_3333(var_2_object, var_256_string)
{
	var_257_bool = 0;
	func_4674(var_257_bool);
	var_258_bool = var_257_bool == 0; //@nz
	if(var_258_bool != 0) {
		return 0;
	}
	var_259_bool = var_256_string == var_2_object;
	if(var_259_bool != 0) {
		return 0;
	}
	var_260_string = "";
	var_256_string = var_260_string;
	func_4578(var_260_string);
	var_2_object = var_256_string;
	return 0;
}


func_4618(var_104_object, var_105_string)
{
	var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj();
	GetMainOutdoorScene(var_108_object);
	var_111_int = var_105_string + ".bin";
	AddBlankActor(var_109_object, var_108_object, var_105_string, var_111_int);
	var_109_object = var_104_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4876()
{
	var_176_object = Obj(); var_177_object = Obj();
	SetVariable("d3q01", (int)5);
	func_5487(Obj());
	var_180_object = var_177_object;
	var_185_float = 0;
	func_4641(var_185_float);
	@@var_177_object:AddMark("d3q01GeorgAgreedSelf", "pt_map_georg", (int)1, (int)11154, var_185_float);
	var_190_float = 0;
	func_4641(var_190_float);
	@@var_177_object:AddMark("d3q01GeorgAgreed", "pt_map_bigvlad", (int)1, (int)15299, var_190_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5389(var_79_bool)
{
	var_81_int = 0; var_82_string = "";
	func_4613(var_81_int, "ood6Georg3");
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_bool = 1;
		return 0;
	}
	var_79_bool = 0;
	return 0;
}


func_5137(var_306_bool)
{
	var_308_int = 0; var_309_string = "";
	func_4613(var_308_int, "KnowBurahDead");
	var_311_bool = var_308_int == (int)1;
	if(var_311_bool != 0) {
		var_306_bool = 1;
		return 0;
	}
	var_306_bool = 0;
	return 0;
}


func_1557(var_2_object, var_204_string)
{
	var_205_bool = 0;
	func_4674(var_205_bool);
	var_206_bool = var_205_bool == 0; //@nz
	if(var_206_bool != 0) {
		return 0;
	}
	var_207_bool = var_204_string == var_2_object;
	if(var_207_bool != 0) {
		return 0;
	}
	var_208_string = "";
	var_204_string = var_208_string;
	func_4578(var_208_string);
	var_2_object = var_204_string;
	return 0;
}


func_4629(var_154_bool, var_155_string, var_156_string)
{
	var_157_object = Obj(); var_158_object = Obj();
	FindActor(var_158_object, var_155_string);
	var_159_bool = var_158_object == 0; //@ne
	if(var_159_bool != 0) {
		var_154_bool = 0;
		return 2;
	}
	Trigger(var_158_object, var_156_string);
	var_154_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5401(var_37_bool)
{
	var_39_int = 0; var_40_string = "";
	func_4613(var_39_int, "d8KainIsReason");
	var_44_bool = var_39_int == (int)1;
	if(var_44_bool != 0) {
		var_37_bool = 1;
		return 0;
	}
	var_37_bool = 0;
	return 0;
}


func_5149(var_253_bool)
{
	var_255_int = 0; var_256_string = "";
	func_4613(var_255_int, "ood1Georg4");
	var_258_bool = var_255_int == (int)0;
	if(var_258_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_4641(var_57_float)
{
	var_58_float = 0; var_59_float = 0;
	GetGameTime(var_59_float);
	var_59_float = var_57_float;
	return 2;
}


func_4131(var_0_object, var_594_int, var_595_object)
{
	var_597_object = Obj(); var_598_bool = 0; var_599_int = 0; var_600_bool = 0; var_601_object = Obj(); var_602_bool = 0; var_603_int = 0; var_604_bool = 0;
	var_0_object = var_595_object;
	var_605_bool = 0; var_606_object = Obj();
	var_595_object = var_606_object;
	func_4518(var_605_bool, var_606_object);
	var_607_bool = var_605_bool == 0; //@nz
	if(var_607_bool != 0) {
		var_594_int = -2;
		return 8;
	}
	CreateDialog(var_601_object);
	var_608_int = 0;
	func_4670(var_608_int);
	@@var_601_object:SetNPCName(var_608_int);
	var_609_string = "";
	func_4672(var_609_string);
	@@var_601_object:SetPhoto(var_609_string);
	var_610_int = 0;
	func_5537(var_610_int);
	@@var_601_object:SetPlayerName(var_610_int);
	IsOverrideActive(var_602_bool);
	var_611_bool = var_602_bool;
	if(var_611_bool != 0) {
		var_594_int = -2;
		return 8;
	}
	DoDialog(var_601_object);
	var_612_object = Obj(); var_613_object = Obj();
	var_595_object = var_612_object;
	var_601_object = var_613_object;
	TaskCall(13);
	func_4194(var_614_object, var_615_object, var_616_string, var_617_bool, var_612_object, var_613_object);
	TaskReturn();
	@@var_601_object:IsDialogEnd(var_604_bool);
	
Label_4176:
	var_658_bool = var_604_bool == 0; //@nz
	if(var_658_bool != 0) {
		sync();
		@@var_601_object:IsDialogEnd(var_604_bool);
		goto Label_4176;
	}
	var_595_object = Obj();
	func_4574();
	StopDialog(var_601_object);
	@@var_601_object:GetReturnValue((int)-1);
	var_603_int = var_594_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5413(var_45_bool)
{
	var_47_int = 0; var_48_string = "";
	func_4613(var_47_int, "ood8Georg1");
	var_50_bool = var_47_int == (int)0;
	if(var_50_bool != 0) {
		var_45_bool = 1;
		return 0;
	}
	var_45_bool = 0;
	return 0;
}


func_4646(var_34_int)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_38_int = 0;
	var_38_int = var_36_float / (int)24;
	var_34_int = (int)1 + var_38_int;
	return 2;
}


func_5161(var_120_bool)
{
	var_122_int = 0; var_123_string = "";
	func_4613(var_122_int, "ood1GeorgMQ1");
	var_127_bool = var_122_int == (int)0;
	if(var_127_bool != 0) {
		var_120_bool = 1;
		return 0;
	}
	var_120_bool = 0;
	return 0;
}


func_3114(var_0_object, var_375_int, var_376_object)
{
	var_378_object = Obj(); var_379_bool = 0; var_380_int = 0; var_381_bool = 0; var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0;
	var_0_object = var_376_object;
	var_386_bool = 0; var_387_object = Obj();
	var_376_object = var_387_object;
	func_4518(var_386_bool, var_387_object);
	var_388_bool = var_386_bool == 0; //@nz
	if(var_388_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	CreateDialog(var_382_object);
	var_389_int = 0;
	func_4670(var_389_int);
	@@var_382_object:SetNPCName(var_389_int);
	var_390_string = "";
	func_4672(var_390_string);
	@@var_382_object:SetPhoto(var_390_string);
	var_391_int = 0;
	func_5537(var_391_int);
	@@var_382_object:SetPlayerName(var_391_int);
	IsOverrideActive(var_383_bool);
	var_392_bool = var_383_bool;
	if(var_392_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	DoDialog(var_382_object);
	var_393_object = Obj(); var_394_object = Obj();
	var_376_object = var_393_object;
	var_382_object = var_394_object;
	TaskCall(11);
	func_3177(var_395_object, var_396_object, var_397_string, var_398_bool, var_393_object, var_394_object);
	TaskReturn();
	@@var_382_object:IsDialogEnd(var_385_bool);
	
Label_3159:
	var_486_bool = var_385_bool == 0; //@nz
	if(var_486_bool != 0) {
		sync();
		@@var_382_object:IsDialogEnd(var_385_bool);
		goto Label_3159;
	}
	var_376_object = Obj();
	func_4574();
	StopDialog(var_382_object);
	@@var_382_object:GetReturnValue((int)-1);
	var_384_int = var_375_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4905()
{
	SetVariable("ood3Georg1", (int)1);
	return 0;
}


func_4655(var_32_bool, var_33_int)
{
	var_34_int = 0;
	func_4646(var_34_int);
	var_32_bool = var_34_int == var_33_int;
	return 0;
}


func_4911()
{
	SetVariable("ood1GeorgMQ1", (int)1);
	return 0;
}


func_49(var_0_object, var_490_int, var_491_object)
{
	var_493_object = Obj(); var_494_bool = 0; var_495_int = 0; var_496_bool = 0; var_497_object = Obj(); var_498_bool = 0; var_499_int = 0; var_500_bool = 0;
	var_0_object = var_491_object;
	var_501_bool = 0; var_502_object = Obj();
	var_491_object = var_502_object;
	func_4518(var_501_bool, var_502_object);
	var_503_bool = var_501_bool == 0; //@nz
	if(var_503_bool != 0) {
		var_490_int = -2;
		return 8;
	}
	CreateDialog(var_497_object);
	var_504_int = 0;
	func_4670(var_504_int);
	@@var_497_object:SetNPCName(var_504_int);
	var_505_string = "";
	func_4672(var_505_string);
	@@var_497_object:SetPhoto(var_505_string);
	var_506_int = 0;
	func_5537(var_506_int);
	@@var_497_object:SetPlayerName(var_506_int);
	IsOverrideActive(var_498_bool);
	var_507_bool = var_498_bool;
	if(var_507_bool != 0) {
		var_490_int = -2;
		return 8;
	}
	DoDialog(var_497_object);
	var_508_object = Obj(); var_509_object = Obj();
	var_491_object = var_508_object;
	var_497_object = var_509_object;
	TaskCall(3);
	func_112(var_510_object, var_511_object, var_512_string, var_513_bool, var_508_object, var_509_object);
	TaskReturn();
	@@var_497_object:IsDialogEnd(var_500_bool);
	
Label_94:
	var_590_bool = var_500_bool == 0; //@nz
	if(var_590_bool != 0) {
		sync();
		@@var_497_object:IsDialogEnd(var_500_bool);
		goto Label_94;
	}
	var_491_object = Obj();
	func_4574();
	StopDialog(var_497_object);
	@@var_497_object:GetReturnValue((int)-1);
	var_499_int = var_490_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_562(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0;
	var_0_object = var_47_object;
	var_57_bool = 0; var_58_object = Obj();
	var_47_object = var_58_object;
	func_4518(var_57_bool, var_58_object);
	var_97_bool = var_57_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	CreateDialog(var_53_object);
	var_98_int = 0;
	func_4670(var_98_int);
	@@var_53_object:SetNPCName(var_98_int);
	var_99_string = "";
	func_4672(var_99_string);
	@@var_53_object:SetPhoto(var_99_string);
	var_100_int = 0;
	func_5537(var_100_int);
	@@var_53_object:SetPlayerName(var_100_int);
	IsOverrideActive(var_54_bool);
	var_108_bool = var_54_bool;
	if(var_108_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	DoDialog(var_53_object);
	var_109_object = Obj(); var_110_object = Obj();
	var_47_object = var_109_object;
	var_53_object = var_110_object;
	TaskCall(5);
	func_625(var_111_object, var_112_object, var_113_string, var_114_bool, var_109_object, var_110_object);
	TaskReturn();
	@@var_53_object:IsDialogEnd(var_56_bool);
	
Label_607:
	var_183_bool = var_56_bool == 0; //@nz
	if(var_183_bool != 0) {
		sync();
		@@var_53_object:IsDialogEnd(var_56_bool);
		goto Label_607;
	}
	var_47_object = Obj();
	func_4574();
	StopDialog(var_53_object);
	@@var_53_object:GetReturnValue((int)-1);
	var_55_int = var_46_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5425(var_163_bool)
{
	var_163_bool = 0;
	return 0;
}


func_5428(var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj();
	GetDiaryRoot(var_87_object);
	var_88_bool = var_87_object == 0; //@nz
	if(var_88_bool != 0) {
		Trace("Can't retrieve diary root");
		var_85_object = 0;
		return 2;
	}
	var_87_object = var_85_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5173(var_190_bool)
{
	var_192_int = 0; var_193_string = "";
	func_4613(var_192_int, "ood1Georg1");
	var_197_bool = var_192_int == (int)0;
	if(var_197_bool != 0) {
		var_190_bool = 1;
		return 0;
	}
	var_190_bool = 0;
	return 0;
}


func_4661(var_660_bool)
{
	var_661_bool = 0; var_662_bool = 0;
	var_663_string = "";
	func_4578("No");
	lshWaitForAnimEnd(var_662_bool);
	var_662_bool = var_660_bool;
	return 2;
}


func_4917()
{
	SetVariable("KnowViktor", (int)1);
	return 0;
}


func_4923()
{
	SetVariable("ood3Georg2", (int)1);
	return 0;
}


func_4670(var_98_int)
{
	var_98_int = 2859;
	return 0;
}


func_4672(var_99_string)
{
	var_99_string = "ui/NPC_Georg.png";
	return 0;
}


func_5185(var_280_bool)
{
	var_282_int = 0; var_283_string = "";
	func_4613(var_282_int, "d3q01");
	var_285_bool = var_282_int == (int)0;
	if(var_285_bool != 0) {
		var_280_bool = 1;
		return 0;
	}
	var_280_bool = 0;
	return 0;
}


func_4674(var_33_bool)
{
	var_33_bool = 1;
	return 0;
}


func_4929()
{
	var_42_object = Obj(); var_43_object = Obj();
	SetVariable("d3q02", (int)1);
	func_5487(Obj());
	var_46_object = var_43_object;
	var_57_float = 0;
	func_4641(var_57_float);
	@@var_43_object:AddMark("d3q02GeorgGotoMishka", "pt_map_mishka", (int)0, (int)11375, var_57_float);
	var_64_float = 0;
	func_4641(var_64_float);
	@@var_43_object:AddMark("d3q02GeorgSelf", "pt_map_georg", (int)0, (int)15304, var_64_float);
	var_69_float = 0;
	func_4641(var_69_float);
	@@var_43_object:AddMark("d3q02GeorgGotoViktor", "pt_map_viktor", (int)0, (int)11379, var_69_float);
	func_5586();
	func_5602();
	var_104_object = Obj(); var_105_string = "";
	func_4618(var_104_object, "quest_d3_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_4676()
{
	var_42_object = Obj(); var_43_object = Obj();
	SetVariable("d1q01", (int)1);
	func_5487(Obj());
	var_46_object = var_43_object;
	var_57_float = 0;
	func_4641(var_57_float);
	@@var_43_object:AddMark("d1GeorgInfo", "pt_map_georg", (int)3, (int)8631, var_57_float);
	var_64_float = 0;
	func_4641(var_64_float);
	@@var_43_object:AddMark("d1GeorgGotoViktor", "pt_map_viktor", (int)3, (int)8629, var_64_float);
	func_5554();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5441(var_76_bool, var_77_object, var_78_int)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_int = 0; var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0;
	func_5428(Obj());
	var_85_object = var_82_object;
	@@var_82_object:Find(var_78_int, var_83_object);
	var_90_bool = var_83_object == 0; //@nz
	if(var_90_bool != 0) {
		var_92_int = "Can't find diary parent with id: " + var_78_int;
		Trace(var_92_int);
		var_76_bool = 0;
		return 6;
	}
	@@var_83_object:AddChild(var_77_object);
	SetVariable("player_diary", (int)1);
	@@var_77_object:GetCategory(var_84_int);
	SetDiarySection(var_84_int);
	var_76_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5197(var_228_bool)
{
	var_230_int = 0; var_231_string = "";
	func_4613(var_230_int, "ood1Georg2");
	var_233_bool = var_230_int == (int)0;
	if(var_233_bool != 0) {
		var_228_bool = 1;
		return 0;
	}
	var_228_bool = 0;
	return 0;
}


func_1368(var_0_object, var_185_int, var_186_object)
{
	var_188_object = Obj(); var_189_bool = 0; var_190_int = 0; var_191_bool = 0; var_192_object = Obj(); var_193_bool = 0; var_194_int = 0; var_195_bool = 0;
	var_0_object = var_186_object;
	var_196_bool = 0; var_197_object = Obj();
	var_186_object = var_197_object;
	func_4518(var_196_bool, var_197_object);
	var_198_bool = var_196_bool == 0; //@nz
	if(var_198_bool != 0) {
		var_185_int = -2;
		return 8;
	}
	CreateDialog(var_192_object);
	var_199_int = 0;
	func_4670(var_199_int);
	@@var_192_object:SetNPCName(var_199_int);
	var_200_string = "";
	func_4672(var_200_string);
	@@var_192_object:SetPhoto(var_200_string);
	var_201_int = 0;
	func_5537(var_201_int);
	@@var_192_object:SetPlayerName(var_201_int);
	IsOverrideActive(var_193_bool);
	var_202_bool = var_193_bool;
	if(var_202_bool != 0) {
		var_185_int = -2;
		return 8;
	}
	DoDialog(var_192_object);
	var_203_object = Obj(); var_204_object = Obj();
	var_186_object = var_203_object;
	var_192_object = var_204_object;
	TaskCall(7);
	func_1431(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object);
	TaskReturn();
	@@var_192_object:IsDialogEnd(var_195_bool);
	
Label_1413:
	var_282_bool = var_195_bool == 0; //@nz
	if(var_282_bool != 0) {
		sync();
		@@var_192_object:IsDialogEnd(var_195_bool);
		goto Label_1413;
	}
	var_186_object = Obj();
	func_4574();
	StopDialog(var_192_object);
	@@var_192_object:GetReturnValue((int)-1);
	var_194_int = var_185_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5209(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_4613(var_239_int, "ood1Georg3");
	var_242_bool = var_239_int == (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_5470(var_92_bool, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj();
	func_5428(Obj());
	var_98_object = var_96_object;
	@@var_96_object:Find(var_93_int, var_97_object);
	var_99_bool = var_97_object == 0; //@nz
	if(var_99_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	@@var_97_object:Remove();
	var_92_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4194(var_0_object, var_1_object, var_2_object, var_3_object, var_612_object, var_613_object)
{
	var_0_object = var_613_object;
	var_1_object = var_612_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_619_bool = 0;
		var_619_bool = 0;
		var_620_bool = 0; var_621_object = Obj();
		var_621_object = var_1_object;
		func_5401(var_621_object);
		if(var_620_bool != 0) {
			var_626_bool = 0; var_627_object = Obj();
			var_627_object = var_1_object;
			func_5413(var_627_object);
			if(var_626_bool != 0) {
				var_619_bool = 1;
			}
		}
		if(var_619_bool != 0) {
			var_632_object = Obj(); var_633_object = Obj();
			var_632_object = var_1_object;
			var_633_object = var_0_object;
			func_5067();
			var_636_string = "";
			func_4281(var_613_object, "Neutral");
			@@@var_0_object:SetMessage((int)12258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12259, (int)13417, (int)13416);
		} else {
				var_653_string = "";
				func_4281(var_613_object, "Neutral");
				@@@var_0_object:SetMessage((int)13775);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13776, (int)-1, (int)15012);
				goto Label_4251;
		}
	}
Label_4251:
	var_645_bool = 0;
	func_4674(var_645_bool);
	if(var_645_bool != 0) {

	Label_4255:
		lshWaitForAnimEnd();
		var_646_object = var_3_object;
		if(var_646_object != 0) {
		} else {
			var_647_string = "";
			var_647_string = var_2_object;
			func_4578(var_647_string);
			goto Label_4255;
	}
		PlayAnimation("all", "idle");

	Label_4270:
		WaitForAnimEnd();
		var_650_object = var_3_object;
		if(var_650_object != 0) {
			goto Label_4280;
		}
		PlayAnimation("all", "idle");
		goto Label_4270;

	}
	goto Label_4280;
	
Label_4280:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1066";


func_4708()
{
	var_42_object = Obj(); var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj();
	SetVariable("d1q01", (int)1000);
	func_5487(Obj());
	var_48_object = var_44_object;
	@@var_44_object:FindMark(var_45_object, "d1q01EvaAboutMark");
	var_56_object = var_45_object;
	if(var_56_object != 0) {
		@@var_45_object:Remove();
	}
	@@var_44_object:FindMark(var_45_object, "d1q01EvaGotoSimon");
	var_58_object = var_45_object;
	if(var_58_object != 0) {
		@@var_45_object:Remove();
	}
	@@var_44_object:FindMark(var_45_object, "d1q01GrifAboutRubin");
	var_60_object = var_45_object;
	if(var_60_object != 0) {
		@@var_45_object:Remove();
	}
	@@var_44_object:FindMark(var_45_object, "d1q01MarkAboutJulia");
	var_62_object = var_45_object;
	if(var_62_object != 0) {
		@@var_45_object:Remove();
	}
	@@var_44_object:FindMark(var_45_object, "d1q01MarkAboutLara");
	var_64_object = var_45_object;
	if(var_64_object != 0) {
		@@var_45_object:Remove();
	}
	@@var_44_object:FindMark(var_45_object, "d1q01NotkinAboutRubin");
	var_66_object = var_45_object;
	if(var_66_object != 0) {
		@@var_45_object:Remove();
	}
	func_5570();
	var_92_bool = 0; var_93_int = 0;
	func_5470(var_92_bool, (int)31);
	var_100_bool = 0; var_101_int = 0;
	func_5470(var_100_bool, (int)32);
	var_102_bool = 0; var_103_int = 0;
	func_5470(var_102_bool, (int)33);
	var_104_bool = 0; var_105_int = 0;
	func_5470(var_104_bool, (int)34);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5221(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_4613(var_239_int, "d3q01");
	var_244_bool = var_239_int == (int)4;
	if(var_244_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_3177(var_0_object, var_1_object, var_2_object, var_3_object, var_393_object, var_394_object)
{
	var_0_object = var_394_object;
	var_1_object = var_393_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_400_bool = 0;
		var_400_bool = 0;
		var_401_bool = 0; var_402_object = Obj();
		var_402_object = var_1_object;
		func_5221(var_402_object);
		var_407_bool = var_401_bool == 0; //@nz
		if(var_407_bool != 0) {
			var_408_bool = 0; var_409_object = Obj();
			var_409_object = var_1_object;
			func_5257(var_409_object);
			if(var_408_bool != 0) {
				var_400_bool = 1;
			}
		}
		if(var_400_bool != 0) {
			var_414_object = Obj(); var_415_object = Obj();
			var_414_object = var_1_object;
			var_415_object = var_0_object;
			func_5073();
			var_418_string = "";
			func_3333(var_394_object, "Neutral");
			@@@var_0_object:SetMessage((int)9043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9044, (int)9921, (int)9920);
		} else {
				var_435_object = Obj(); var_436_object = Obj();
				var_435_object = var_1_object;
				var_436_object = var_0_object;
				func_5073();
				var_437_string = "";
				func_3333(var_394_object, "Neutral");
				@@@var_0_object:SetMessage((int)9024);
				@@@var_0_object:ClearReplies();
				var_439_bool = 0;
				var_439_bool = 0;
				var_440_bool = 0; var_441_object = Obj();
				var_441_object = var_1_object;
				func_5185(var_441_object);
				if(var_440_bool != 0) {
					var_446_bool = 0; var_447_object = Obj();
					var_447_object = var_1_object;
					func_5221(var_447_object);
					var_448_bool = var_446_bool == 0; //@nz
					if(var_448_bool != 0) {
						var_439_bool = 1;
					}
				}
				if(var_439_bool != 0) {
					@@@var_0_object:AddReply((int)11376, (int)12576, (int)12575);
				}
				var_452_bool = 0;
				var_452_bool = 0;
				var_453_bool = 0; var_454_object = Obj();
				var_454_object = var_1_object;
				func_5221(var_454_object);
				if(var_453_bool != 0) {
					var_455_bool = 0; var_456_object = Obj();
					var_456_object = var_1_object;
					func_5233(var_456_object);
					if(var_455_bool != 0) {
						var_452_bool = 1;
					}
				}
				if(var_452_bool != 0) {
					@@@var_0_object:AddReply((int)9042, (int)9941, (int)9918);
				}
				var_464_bool = 0;
				var_464_bool = 0;
				var_465_bool = 0; var_466_object = Obj();
				var_466_object = var_1_object;
				func_5281(var_466_object);
				if(var_465_bool != 0) {
					var_471_bool = 0; var_472_object = Obj();
					var_472_object = var_1_object;
					func_5293(var_472_object);
					if(var_471_bool != 0) {
						var_464_bool = 1;
					}
				}
				if(var_464_bool != 0) {
					@@@var_0_object:AddReply((int)10442, (int)11512, (int)11511);
				}
				@@@var_0_object:AddReply((int)9041, (int)9899, (int)9917);
				@@@var_0_object:AddReply((int)11147, (int)-1, (int)12337);
				goto Label_3303;
		}
	}
Label_3303:
	var_427_bool = 0;
	func_4674(var_427_bool);
	if(var_427_bool != 0) {

	Label_3307:
		lshWaitForAnimEnd();
		var_428_object = var_3_object;
		if(var_428_object != 0) {
		} else {
			var_429_string = "";
			var_429_string = var_2_object;
			func_4578(var_429_string);
			goto Label_3307;
	}
		PlayAnimation("all", "idle");

	Label_3322:
		WaitForAnimEnd();
		var_432_object = var_3_object;
		if(var_432_object != 0) {
			goto Label_3332;
		}
		PlayAnimation("all", "idle");
		goto Label_3322;

	}
	goto Label_3332;
	
Label_3332:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc6d";


func_5487(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj();
	GetMainOutdoorScene(var_49_object);
	var_51_bool = var_49_object == 0; //@ne
	if(var_51_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_50_object = 0;
		var_50_object = var_46_object;
		return 4;
	}
	@@var_49_object:GetMap(var_50_object);
	var_50_object = var_46_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_508_object, var_509_object)
{
	var_0_object = var_509_object;
	var_1_object = var_508_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_515_string = "";
		func_234(var_509_object, "Neutral");
		@@@var_0_object:SetMessage((int)12009);
		@@@var_0_object:ClearReplies();
		var_521_bool = 0;
		var_521_bool = 0;
		var_522_bool = 0; var_523_object = Obj();
		var_523_object = var_1_object;
		func_5377(var_523_object);
		if(var_522_bool != 0) {
			var_528_bool = 0; var_529_object = Obj();
			var_529_object = var_1_object;
			func_5389(var_529_object);
			if(var_528_bool != 0) {
				var_521_bool = 1;
			}
		}
		if(var_521_bool != 0) {
			@@@var_0_object:AddReply((int)12010, (int)13230, (int)13228);
		}
		var_537_bool = 0;
		var_537_bool = 0;
		var_538_bool = 0;
		var_538_bool = 0;
		var_539_bool = 0;
		var_539_bool = 0;
		var_540_bool = 0; var_541_object = Obj();
		var_541_object = var_1_object;
		func_5317(var_541_object);
		var_546_bool = var_540_bool == 0; //@nz
		if(var_546_bool != 0) {
			var_547_bool = 0; var_548_object = Obj();
			var_548_object = var_1_object;
			func_5329(var_548_object);
			var_553_bool = var_547_bool == 0; //@nz
			if(var_553_bool != 0) {
				var_539_bool = 1;
			}
		}
		if(var_539_bool != 0) {
			var_554_bool = 0; var_555_object = Obj();
			var_555_object = var_1_object;
			func_5341(var_555_object);
			var_560_bool = var_554_bool == 0; //@nz
			if(var_560_bool != 0) {
				var_538_bool = 1;
			}
		}
		if(var_538_bool != 0) {
			var_561_bool = 0; var_562_object = Obj();
			var_562_object = var_1_object;
			func_5353(var_562_object);
			if(var_561_bool != 0) {
				var_537_bool = 1;
			}
		}
		if(var_537_bool != 0) {
			@@@var_0_object:AddReply((int)12014, (int)13233, (int)13232);
		}
		var_570_bool = 0; var_571_object = Obj();
		var_571_object = var_1_object;
		func_5365(var_571_object);
		if(var_570_bool != 0) {
			@@@var_0_object:AddReply((int)12018, (int)3560, (int)13236);
		}
		@@@var_0_object:AddReply((int)12011, (int)-1, (int)13229);
		goto Label_204;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_204:
	var_582_bool = 0;
	func_4674(var_582_bool);
	if(var_582_bool != 0) {

	Label_208:
		lshWaitForAnimEnd();
		var_583_object = var_3_object;
		if(var_583_object != 0) {
		} else {
			var_584_string = "";
			var_584_string = var_2_object;
			func_4578(var_584_string);
			goto Label_208;
	}
		PlayAnimation("all", "idle");

	Label_223:
		WaitForAnimEnd();
		var_587_object = var_3_object;
		if(var_587_object != 0) {
			goto Label_233;
		}
		PlayAnimation("all", "idle");
		goto Label_223;
	}
	goto Label_233;
	
Label_233:
	return 0;
	
}


func_625(var_0_object, var_1_object, var_2_object, var_3_object, var_109_object, var_110_object)
{
	var_0_object = var_110_object;
	var_1_object = var_109_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_116_bool = 0; var_117_object = Obj();
		var_117_object = var_1_object;
		func_5161(var_117_object);
		if(var_116_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_4787();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5043();
			var_130_string = "";
			func_743(var_110_object, "Neutral");
			@@@var_0_object:SetMessage((int)4780);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4781, (int)5240, (int)5234);
			@@@var_0_object:AddReply((int)4782, (int)5240, (int)5235);
			@@@var_0_object:AddReply((int)4786, (int)5240, (int)5239);
		} else {
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_5103(var_163_bool, var_164_object);
				if(var_163_bool != 0) {
					var_167_object = Obj(); var_168_object = Obj();
					var_167_object = var_1_object;
					var_168_object = var_0_object;
					func_5043();
					var_169_string = "";
					func_743(var_110_object, "Neutral");
					@@@var_0_object:SetMessage((int)4783);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)4784, (int)5294, (int)5237);
					@@@var_0_object:AddReply((int)4830, (int)5301, (int)5297);
					@@@var_0_object:AddReply((int)4836, (int)5296, (int)5304);
					@@@var_0_object:AddReply((int)4845, (int)-1, (int)5317);
					goto Label_713;
				}
				return 0;
		}
	}
Label_713:
	var_155_bool = 0;
	func_4674(var_155_bool);
	if(var_155_bool != 0) {

	Label_717:
		lshWaitForAnimEnd();
		var_156_object = var_3_object;
		if(var_156_object != 0) {
		} else {
			var_157_string = "";
			var_157_string = var_2_object;
			func_4578(var_157_string);
			goto Label_717;
	}
		PlayAnimation("all", "idle");

	Label_732:
		WaitForAnimEnd();
		var_160_object = var_3_object;
		if(var_160_object != 0) {
			goto Label_742;
		}
		PlayAnimation("all", "idle");
		goto Label_732;

	}
	goto Label_742;
	
Label_742:
	return 0;
	
}
EMIT "GOTO 0x275";


func_2674(var_2_object, var_101_string)
{
	var_102_bool = 0;
	func_4674(var_102_bool);
	var_103_bool = var_102_bool == 0; //@nz
	if(var_103_bool != 0) {
		return 0;
	}
	var_104_bool = var_101_string == var_2_object;
	if(var_104_bool != 0) {
		return 0;
	}
	var_105_string = "";
	var_101_string = var_105_string;
	func_4578(var_105_string);
	var_2_object = var_101_string;
	return 0;
}


func_5233(var_295_bool)
{
	var_297_int = 0; var_298_string = "";
	func_4613(var_297_int, "ood3Georg1");
	var_300_bool = var_297_int == (int)0;
	if(var_300_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_4977(var_213_object)
{
	Trace("money3000 is given");
	var_216_object = Obj(); var_217_string = ""; var_218_int = 0;
	var_213_object = var_216_object;
	func_4494(var_216_object, "money", (int)3000);
	return 0;
}


func_4988()
{
	var_154_bool = 0; var_155_string = ""; var_156_string = "";
	func_4629(var_154_bool, "quest_d3_02", "completed");
	return 0;
}


func_5245(var_247_bool)
{
	var_249_int = 0; var_250_string = "";
	func_4613(var_249_int, "KnowRubin");
	var_252_bool = var_249_int == (int)1;
	if(var_252_bool != 0) {
		var_247_bool = 1;
		return 0;
	}
	var_247_bool = 0;
	return 0;
}


func_5504(var_114_object, var_115_string, var_116_float)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_object = Obj(); var_121_bool = 0; var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_object = Obj(); var_125_bool = 0;
	GetMainOutdoorScene(var_124_object);
	var_126_bool = var_124_object == 0; //@ne
	if(var_126_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_124_object:GetLocator(var_115_string, var_125_bool, var_122_cvector, var_123_cvector);
	var_128_bool = var_125_bool == 0; //@nz
	if(var_128_bool != 0) {
		var_130_int = "Warning: outdoor scene locator " + var_115_string;
		var_132_int = var_130_int + " doesnt exist";
		Trace(var_132_int);
	}
	@@var_124_object:GetMap(var_114_object);
	var_133_bool = var_114_object == 0; //@ne
	if(var_133_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_135_float = GetByIndex(var_122_cvector, 0);
	var_136_float = GetByIndex(var_122_cvector, 2);
	@@var_114_object:SetMapParams(var_135_float, var_136_float, var_116_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4995()
{
	SetVariable("ood3Georg3", (int)1);
	return 0;
}


func_5257(var_246_bool)
{
	var_248_int = 0; var_249_string = "";
	func_4613(var_248_int, "ood3Georg2");
	var_251_bool = var_248_int == (int)0;
	if(var_251_bool != 0) {
		var_246_bool = 1;
		return 0;
	}
	var_246_bool = 0;
	return 0;
}


func_5001()
{
	SetVariable("ood1Georg1", (int)1);
	return 0;
}


func_4494(var_216_object, var_217_string, var_218_int)
{
	var_219_int = 0; var_220_int = 0;
	@@var_216_object:GetProperty(var_217_string, var_220_int);
	var_221_int = var_220_int + var_218_int;
	@@var_216_object:SetProperty(var_217_string, var_221_int);
	return 2;
}


func_5007()
{
	SetVariable("ood1Georg2", (int)1);
	return 0;
}


func_5269(var_336_bool)
{
	var_338_int = 0; var_339_string = "";
	func_4613(var_338_int, "d3RubinToldWhereIsSimon");
	var_341_bool = var_338_int == (int)1;
	if(var_341_bool != 0) {
		var_336_bool = 1;
		return 0;
	}
	var_336_bool = 0;
	return 0;
}


func_4501(var_31_bool, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0;
	@@var_32_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_41_float = GetByIndex(var_39_cvector, 0);
	var_42_float = GetByIndex(var_39_cvector, 2);
	Rotate(var_41_float, var_42_float, var_40_bool);
	var_40_bool = var_31_bool;
	return 8;
}


func_5013()
{
	SetVariable("ood1Georg3", (int)1);
	return 0;
}


func_1431(var_0_object, var_1_object, var_2_object, var_3_object, var_203_object, var_204_object)
{
	var_0_object = var_204_object;
	var_1_object = var_203_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_210_bool = 0;
		var_210_bool = 0;
		var_211_bool = 0; var_212_object = Obj();
		var_212_object = var_1_object;
		func_5173(var_212_object);
		if(var_211_bool != 0) {
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_5305(var_218_object);
			if(var_217_bool != 0) {
				var_210_bool = 1;
			}
		}
		if(var_210_bool != 0) {
			var_223_string = "";
			func_1557(var_204_object, "Neutral");
			@@@var_0_object:SetMessage((int)4850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4879, (int)5370, (int)5353);
			@@@var_0_object:AddReply((int)4890, (int)5354, (int)5367);
		} else {
				var_243_string = "";
				func_1557(var_204_object, "Neutral");
				@@@var_0_object:SetMessage((int)7627);
				@@@var_0_object:ClearReplies();
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_5197(var_246_object);
				if(var_245_bool != 0) {
					@@@var_0_object:AddReply((int)7629, (int)5329, (int)8418);
				}
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_5209(var_255_object);
				if(var_254_bool != 0) {
					@@@var_0_object:AddReply((int)7632, (int)5334, (int)8421);
				}
				var_263_bool = 0;
				var_263_bool = 0;
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_5245(var_265_object);
				if(var_264_bool != 0) {
					var_270_bool = 0; var_271_object = Obj();
					var_271_object = var_1_object;
					func_5149(var_271_object);
					if(var_270_bool != 0) {
						var_263_bool = 1;
					}
				}
				if(var_263_bool != 0) {
					@@@var_0_object:AddReply((int)7630, (int)8420, (int)8419);
				}
				@@@var_0_object:AddReply((int)7658, (int)-1, (int)8451);
				goto Label_1527;
		}
	}
Label_1527:
	var_235_bool = 0;
	func_4674(var_235_bool);
	if(var_235_bool != 0) {

	Label_1531:
		lshWaitForAnimEnd();
		var_236_object = var_3_object;
		if(var_236_object != 0) {
		} else {
			var_237_string = "";
			var_237_string = var_2_object;
			func_4578(var_237_string);
			goto Label_1531;
	}
		PlayAnimation("all", "idle");

	Label_1546:
		WaitForAnimEnd();
		var_240_object = var_3_object;
		if(var_240_object != 0) {
			goto Label_1556;
		}
		PlayAnimation("all", "idle");
		goto Label_1546;

	}
	goto Label_1556;
	
Label_1556:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x59b";


func_5019()
{
	SetVariable("KnowRubin", (int)1);
	return 0;
}


func_5281(var_305_bool)
{
	var_307_int = 0; var_308_string = "";
	func_4613(var_307_int, "ood3Georg3");
	var_310_bool = var_307_int == (int)0;
	if(var_310_bool != 0) {
		var_305_bool = 1;
		return 0;
	}
	var_305_bool = 0;
	return 0;
}


func_4513(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_5537(var_100_int)
{
	var_101_int = 0; var_102_int = 0;
	GetVariable("player", var_102_int);
	var_105_bool = var_102_int == (int)0;
	if(var_105_bool != 0) {
		var_100_int = 200001;
		return 2;
	EMIT "GOTO 0x15b0";
	}
	var_107_bool = var_102_int == (int)1;
	if(var_107_bool != 0) {
		var_100_int = 200002;
		return 2;
	}
	var_100_int = 200003;
	return 2;
}


func_5025()
{
	SetVariable("KnowSaburivClan", (int)1);
	return 0;
}


func_4518(var_57_bool, var_58_object)
{
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0;
	@@var_58_object:GetPosition(var_68_cvector);
	@@var_58_object:GetEyesHeight(var_67_float);
	var_75_float = GetByIndex(var_68_cvector, 1);
	var_75_float = var_75_float + var_67_float;
	SetByIndex(var_68_cvector, 1) = var_75_float;
	GetPosition(var_69_cvector);
	GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_69_cvector, 1);
	var_76_float = var_76_float + var_67_float;
	SetByIndex(var_69_cvector, 1) = var_76_float;
	var_70_cvector = var_68_cvector - var_69_cvector;
	var_77_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_78_int = var_70_cvector | var_70_cvector;
	var_79_float = sqrt(var_78_int);
	var_70_cvector = var_70_cvector / var_79_float;
	var_71_cvector = -var_70_cvector;
	var_81_float = var_70_cvector * (int)70;
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	var_83_cvector = var_71_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4603(var_82_cvector, var_83_cvector);
	var_91_float = var_82_cvector * (int)25;
	var_92_int = var_81_float + var_91_float;
	var_72_cvector = var_92_int - CVector(0.0, 10.0, 0.0);
	var_73_cvector = var_69_cvector + var_72_cvector;
	IsOverrideActive(var_74_bool);
	var_94_bool = var_74_bool;
	if(var_94_bool != 0) {
		var_57_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_73_cvector, var_71_cvector);
	var_95_float = GetByIndex(var_72_cvector, 0);
	var_96_float = GetByIndex(var_72_cvector, 2);
	Rotate(var_95_float, var_96_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_57_bool = 1;
	return 16;
}


func_5031()
{
	SetVariable("KnowOlgimskiClan", (int)1);
	return 0;
}


func_4781()
{
	SetVariable("d1q01TeloNedostupno", (int)1);
	return 0;
}


func_5293(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_4613(var_313_int, "d3q02SeeCorpse");
	var_316_bool = var_313_int == (int)1;
	if(var_316_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_5037()
{
	SetVariable("KnowKainClan", (int)1);
	return 0;
}


func_5554()
{
	var_65_object = Obj(); var_66_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_66_object, (int)2, (int)1, (int)3073);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_72_object;
	func_5441(var_71_bool, var_72_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4787()
{
	SetVariable("d1q01FirstGeorgVisit", (int)1);
	return 0;
}


func_5043()
{
	SetVariable("KnowGeorg", (int)1);
	return 0;
}


func_5305(var_198_bool)
{
	var_200_int = 0; var_201_string = "";
	func_4613(var_200_int, "d1q01");
	var_203_bool = var_200_int == (int)2;
	if(var_203_bool != 0) {
		var_198_bool = 1;
		return 0;
	}
	var_198_bool = 0;
	return 0;
}


func_4793()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_4281(var_2_object, var_55_string)
{
	var_56_bool = 0;
	func_4674(var_56_bool);
	var_57_bool = var_56_bool == 0; //@nz
	if(var_57_bool != 0) {
		return 0;
	}
	var_58_bool = var_55_string == var_2_object;
	if(var_58_bool != 0) {
		return 0;
	}
	var_59_string = "";
	var_55_string = var_59_string;
	func_4578(var_59_string);
	var_2_object = var_55_string;
	return 0;
}


func_5049()
{
	SetVariable("ood6Georg1", (int)1);
	return 0;
}


func_4799()
{
	SetVariable("ood2Georg1", (int)1);
	return 0;
}


func_5055()
{
	SetVariable("ood6Georg2", (int)1);
	return 0;
}


func_2495(var_0_object, var_286_int, var_287_object)
{
	var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; var_293_object = Obj(); var_294_bool = 0; var_295_int = 0; var_296_bool = 0;
	var_0_object = var_287_object;
	var_297_bool = 0; var_298_object = Obj();
	var_287_object = var_298_object;
	func_4518(var_297_bool, var_298_object);
	var_299_bool = var_297_bool == 0; //@nz
	if(var_299_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	CreateDialog(var_293_object);
	var_300_int = 0;
	func_4670(var_300_int);
	@@var_293_object:SetNPCName(var_300_int);
	var_301_string = "";
	func_4672(var_301_string);
	@@var_293_object:SetPhoto(var_301_string);
	var_302_int = 0;
	func_5537(var_302_int);
	@@var_293_object:SetPlayerName(var_302_int);
	IsOverrideActive(var_294_bool);
	var_303_bool = var_294_bool;
	if(var_303_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	DoDialog(var_293_object);
	var_304_object = Obj(); var_305_object = Obj();
	var_287_object = var_304_object;
	var_293_object = var_305_object;
	TaskCall(9);
	func_2558(var_306_object, var_307_object, var_308_string, var_309_bool, var_304_object, var_305_object);
	TaskReturn();
	@@var_293_object:IsDialogEnd(var_296_bool);
	
Label_2540:
	var_371_bool = var_296_bool == 0; //@nz
	if(var_371_bool != 0) {
		sync();
		@@var_293_object:IsDialogEnd(var_296_bool);
		goto Label_2540;
	}
	var_287_object = Obj();
	func_4574();
	StopDialog(var_293_object);
	@@var_293_object:GetReturnValue((int)-1);
	var_295_int = var_286_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5570()
{
	var_67_object = Obj(); var_68_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_68_object, (int)49, (int)1, (int)12131);
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0;
	var_68_object = var_74_object;
	func_5441(var_73_bool, var_74_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5317(var_91_bool)
{
	var_93_int = 0; var_94_string = "";
	func_4613(var_93_int, "d6q01");
	var_96_bool = var_93_int == (int)0;
	if(var_96_bool != 0) {
		var_91_bool = 1;
		return 0;
	}
	var_91_bool = 0;
	return 0;
}


func_4805()
{
	SetVariable("ood2Georg2", (int)1);
	return 0;
}


func_5061()
{
	SetVariable("ood6Georg3", (int)1);
	return 0;
}


func_4811()
{
	SetVariable("d2q01GeorgVisit", (int)1);
	return 0;
}


func_5067()
{
	SetVariable("ood8Georg1", (int)1);
	return 0;
}


func_5329(var_98_bool)
{
	var_100_int = 0; var_101_string = "";
	func_4613(var_100_int, "d6q01");
	var_103_bool = var_100_int == (int)1000;
	if(var_103_bool != 0) {
		var_98_bool = 1;
		return 0;
	}
	var_98_bool = 0;
	return 0;
}


func_4817()
{
	SetVariable("ood1Georg4", (int)1);
	return 0;
}


func_5073()
{
	SetVariable("d3GeorgVisit", (int)1);
	return 0;
}


func_5586()
{
	var_70_object = Obj(); var_71_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_71_object, (int)26, (int)2, (int)3366);
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0;
	var_71_object = var_77_object;
	func_5441(var_76_bool, var_77_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4823()
{
	SetVariable("KnowGorny", (int)1);
	return 0;
}


func_5079(var_87_bool)
{
	var_89_int = 0; var_90_string = "";
	func_4613(var_89_int, "ood2Georg1");
	var_94_bool = var_89_int == (int)0;
	if(var_94_bool != 0) {
		var_87_bool = 1;
		return 0;
	}
	var_87_bool = 0;
	return 0;
}


func_5341(var_105_bool)
{
	var_107_int = 0; var_108_string = "";
	func_4613(var_107_int, "d6q01");
	var_110_bool = var_107_int == (int)-1;
	if(var_110_bool != 0) {
		var_105_bool = 1;
		return 0;
	}
	var_105_bool = 0;
	return 0;
}


func_4829()
{
	var_128_object = Obj(); var_129_object = Obj();
	func_5487(Obj());
	var_130_object = var_129_object;
	var_135_float = 0;
	func_4641(var_135_float);
	@@var_129_object:AddMark("d1GeorgAboutAlexandr", "pt_map_alexandr", (int)3, (int)8632, var_135_float);
	var_142_float = 0;
	func_4641(var_142_float);
	@@var_129_object:AddMark("d1GeorgAboutBigVlad", "pt_map_bigvlad", (int)3, (int)8633, var_142_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4574()
{
	CameraSwitchToNormal();
	return 0;
}


func_4578(var_35_string)
{
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0;
	var_41_int = "playing " + var_35_string;
	Trace(var_41_int);
	lshGetAnimTimes(var_35_string, var_38_float, var_39_float);
	lshPlayAnimation(var_38_float, var_39_float);
	var_43_int = "start: " + var_38_float;
	Trace(var_43_int);
	var_45_int = "end: " + var_39_float;
	Trace(var_45_int);
	return 4;
}


func_5091(var_132_bool)
{
	var_134_int = 0; var_135_string = "";
	func_4613(var_134_int, "ood2Georg2");
	var_137_bool = var_134_int == (int)0;
	if(var_137_bool != 0) {
		var_132_bool = 1;
		return 0;
	}
	var_132_bool = 0;
	return 0;
}


func_5602()
{
	var_95_object = Obj(); var_96_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_96_object, (int)76, (int)2, (int)12158);
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0;
	var_96_object = var_102_object;
	func_5441(var_101_bool, var_102_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_743(var_2_object, var_136_string)
{
	var_137_bool = 0;
	func_4674(var_137_bool);
	var_138_bool = var_137_bool == 0; //@nz
	if(var_138_bool != 0) {
		return 0;
	}
	var_139_bool = var_136_string == var_2_object;
	if(var_139_bool != 0) {
		return 0;
	}
	var_140_string = "";
	var_136_string = var_140_string;
	func_4578(var_140_string);
	var_2_object = var_136_string;
	return 0;
}


func_5353(var_112_bool)
{
	var_114_int = 0; var_115_string = "";
	func_4613(var_114_int, "ood6Georg1");
	var_117_bool = var_114_int == (int)0;
	if(var_117_bool != 0) {
		var_112_bool = 1;
		return 0;
	}
	var_112_bool = 0;
	return 0;
}


func_234(var_2_object, var_54_string)
{
	var_55_bool = 0;
	func_4674(var_55_bool);
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 0;
	}
	var_57_bool = var_54_string == var_2_object;
	if(var_57_bool != 0) {
		return 0;
	}
	var_58_string = "";
	var_54_string = var_58_string;
	func_4578(var_58_string);
	var_2_object = var_54_string;
	return 0;
}


func_5103(var_161_bool, var_162_object)
{
	var_163_bool = 0; var_164_object = Obj();
	var_162_object = var_164_object;
	func_5425(var_164_object);
	if(var_163_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_5618()
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_4596()
{
	var_33_bool = 0;
	func_4674(var_33_bool);
	if(var_33_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5365(var_121_bool)
{
	var_123_int = 0; var_124_string = "";
	func_4613(var_123_int, "ood6Georg2");
	var_126_bool = var_123_int == (int)0;
	if(var_126_bool != 0) {
		var_121_bool = 1;
		return 0;
	}
	var_121_bool = 0;
	return 0;
}


func_4854()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_5622(var_31_object)
{
	var_32_bool = 0; var_33_int = 0;
	func_4655(var_32_bool, (int)1);
	if(var_32_bool != 0) {
		var_40_int = 0; var_41_string = "";
		func_4613(var_40_int, "d1q01");
		var_45_bool = var_40_int == (int)0;
		if(var_45_bool != 0) {
			var_46_int = 0; var_47_object = Obj();
			var_31_object = var_47_object;
			TaskCall(4);
			func_562(var_48_object, var_46_int, var_47_object);
			TaskReturn();
			return 0;
		}
		var_185_int = 0; var_186_object = Obj();
		var_31_object = var_186_object;
		TaskCall(6);
		func_1368(var_187_object, var_185_int, var_186_object);
		TaskReturn();
		return 0;
	}
	var_284_bool = 0; var_285_int = 0;
	func_4655(var_284_bool, (int)2);
	if(var_284_bool != 0) {
		var_286_int = 0; var_287_object = Obj();
		var_31_object = var_287_object;
		TaskCall(8);
		func_2495(var_288_object, var_286_int, var_287_object);
		TaskReturn();
		return 0;
	}
	var_373_bool = 0; var_374_int = 0;
	func_4655(var_373_bool, (int)3);
	if(var_373_bool != 0) {
		var_375_int = 0; var_376_object = Obj();
		var_31_object = var_376_object;
		TaskCall(10);
		func_3114(var_377_object, var_375_int, var_376_object);
		TaskReturn();
		return 0;
	}
	var_488_bool = 0; var_489_int = 0;
	func_4655(var_488_bool, (int)6);
	if(var_488_bool != 0) {
		var_490_int = 0; var_491_object = Obj();
		var_31_object = var_491_object;
		TaskCall(2);
		func_49(var_492_object, var_490_int, var_491_object);
		TaskReturn();
		return 0;
	}
	var_592_bool = 0; var_593_int = 0;
	func_4655(var_592_bool, (int)8);
	if(var_592_bool != 0) {
		var_594_int = 0; var_595_object = Obj();
		var_31_object = var_595_object;
		TaskCall(12);
		func_4131(var_596_object, var_594_int, var_595_object);
		TaskReturn();
		return 0;
	}
	func_4661((bool)0);
	return 0;
}


func_5113(var_138_bool)
{
	var_140_int = 0; var_141_string = "";
	func_4613(var_140_int, "d2q01");
	var_143_bool = var_140_int == (int)0;
	if(var_143_bool != 0) {
		var_138_bool = 1;
		return 0;
	}
	var_138_bool = 0;
	return 0;
}


func_4603(var_82_cvector, var_83_cvector)
{
	var_85_float = 0; var_86_float = 0;
	var_87_int = var_83_cvector | var_83_cvector;
	var_86_float = sqrt(var_87_int);
	var_88_float = 9.999999974752427e-07;
	var_89_bool = var_86_float < var_88_float;
	if(var_89_bool != 0) {
		var_82_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_82_cvector = var_83_cvector / var_86_float;
	return 2;
}


func_4860(var_113_object)
{
	var_114_object = Obj(); var_115_string = ""; var_116_float = 0;
	func_5487(Obj());
	var_117_object = var_114_object;
	func_5504(var_114_object, "pt_map_mishka", (float)2);
	var_137_object = Obj();
	func_5487(var_137_object);
	@@var_113_object:ShowMap(var_137_object);
	return 0;
}


func_2558(var_0_object, var_1_object, var_2_object, var_3_object, var_304_object, var_305_object)
{
	var_0_object = var_305_object;
	var_1_object = var_304_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_311_bool = 0;
		var_311_bool = 0;
		var_312_bool = 0; var_313_object = Obj();
		var_313_object = var_1_object;
		func_5079(var_313_object);
		if(var_312_bool != 0) {
			var_318_bool = 0; var_319_object = Obj();
			var_319_object = var_1_object;
			func_5125(var_319_object);
			if(var_318_bool != 0) {
				var_311_bool = 1;
			}
		}
		if(var_311_bool != 0) {
			var_324_string = "";
			func_2674(var_305_object, "Neutral");
			@@@var_0_object:SetMessage((int)6829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6830, (int)7531, (int)7530);
			@@@var_0_object:AddReply((int)6844, (int)7547, (int)7546);
			@@@var_0_object:AddReply((int)6848, (int)7547, (int)7552);
			@@@var_0_object:AddReply((int)6849, (int)7535, (int)7554);
		} else {
				var_350_string = "";
				func_2674(var_305_object, "Neutral");
				@@@var_0_object:SetMessage((int)6850);
				@@@var_0_object:ClearReplies();
				var_352_bool = 0;
				var_352_bool = 0;
				var_353_bool = 0; var_354_object = Obj();
				var_354_object = var_1_object;
				func_5091(var_354_object);
				if(var_353_bool != 0) {
					var_359_bool = 0; var_360_object = Obj();
					var_360_object = var_1_object;
					func_5113(var_360_object);
					if(var_359_bool != 0) {
						var_352_bool = 1;
					}
				}
				if(var_352_bool != 0) {
					@@@var_0_object:AddReply((int)6851, (int)7835, (int)7557);
				}
				@@@var_0_object:AddReply((int)7536, (int)-1, (int)8318);
				goto Label_2644;
		}
	}
Label_2644:
	var_342_bool = 0;
	func_4674(var_342_bool);
	if(var_342_bool != 0) {

	Label_2648:
		lshWaitForAnimEnd();
		var_343_object = var_3_object;
		if(var_343_object != 0) {
		} else {
			var_344_string = "";
			var_344_string = var_2_object;
			func_4578(var_344_string);
			goto Label_2648;
	}
		PlayAnimation("all", "idle");

	Label_2663:
		WaitForAnimEnd();
		var_347_object = var_3_object;
		if(var_347_object != 0) {
			goto Label_2673;
		}
		PlayAnimation("all", "idle");
		goto Label_2663;

	}
	goto Label_2673;
	
Label_2673:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xa02";


