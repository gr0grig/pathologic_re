// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,AddBlankActorFromXml/4,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Pain|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|W:.xml|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Black.png|W:ood1Alexandr1|W:ood1Alexandr2|W:ood1Alexandr3|W:ood1Alexandr4|W:playsound|W:givemoney|W:giveitem|W:ood1Alexandr5|W:ood1Alexandr6|W:ood1Alexandr7|W:ood1Alexandr8|W:ood1Alexandr9|W:ood1Alexandr10|W:ood1Alexandr11|W:ood1Alexandr12|W:ood2Alexandr1|W:ood2Alexandr2|W:ood2Alexandr3|W:ood2Alexandr5|W:d2q01|W:d2q01AlexandrGotoAnna|W:pt_map_anna|A:AddMark|W:quest_d2_02|W:quest_d2_01|W:completed|W:d2q01AlexandrGotoBigVlad|W:pt_map_bigvlad|W:d2q01AlexandrGotoGeorg|W:pt_map_georg|W:money 5000 is given|W:d1AlexandrAboutKaterina|W:pt_map_katerina|A:ShowMap|W:pt_map_ospina|W:ood3Alexandr1|W:ood3Alexandr2|W:ood3Alexandr3|W:ood3Alexandr4|W:d3q01|W:d3q01AlexandrGotoOspina|W:d3q01AlexandrGotoOspinaSelf|W:pt_map_alexandr|W:d2q01_key|A:RemoveItemByType|W:ood4Alexandr1|W:d4q03AlexandrGotoGrif|W:pt_map_grif|W:d4q03AlexandrGotoGrifSelf|W:quest_d4_03|W:ood4Alexandr2|W:d4q03|W:d4q03AlexandrAboutVolnica|W:pt_map_warehouse_gangster|A:FindMark|A:Remove|W:d4q03GrifGotoAlexandr|W:d4q03GrifGotoAlexandrSelf|W:revolver ammo6 is given|W:revolver_ammo|W:ood4Alexandr3|W:d5q01|W:d5q01AlexandrGotoKaterina|W:ood5Alexandr1|W:ood5Alexandr2|W:ood6Alexandr1|W:ood6Alexandr2|W:ood6Alexandr3|W:ood6Alexandr4|W:d6q01AlexandrGotoKaterina|W:ood7Alexandr1|W:KnowAlexandr|W:d6q01AlexandrGotoJulia|W:pt_map_julia|W:d6q01AlexandrGotoLara|W:pt_map_lara|W:d6q01AlexangrGotoJulLaraSelf|W:d2TalkToAlexandr|W:d1q01FirstGeorgVisit|W:d2q01BigVladVisit|W:KnowRubin|W:d4q03_alldead|W:d6q02|W:d5q03|W:d6q01|W:d6q01KnowKillerIsKlara|W:d7q02|W:KnowBigVlad|W:KnowGeorg|W:KnowGrif|W:KnowKaterina|W:KnowLara|W:KnowPredictions|W:KnowStamatins|W:KnowUklad|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0x1f3 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6d4 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcd0 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1149 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1492 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1765 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x19d1 vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x14e,0x1e3,0x1f3,0x554,0x6c4,0x6d4,0xc11,0xcc0,0xcd0,0x10b1,0x1139,0x1149,0x13fa,0x1482,0x1492,0x16f0,0x1755,0x1765,0x1979,0x19c1,0x19d1,0x1ac8,0x1b46,0x1b5b,0x1b61,0x1b67,0x1b6d,0x1b73,0x1b79,0x1b7f,0x1b85,0x1b8b,0x1b91,0x1b97,0x1b9d,0x1ba3,0x1ba9,0x1baf,0x1bb5,0x1bbb,0x1bc1,0x1be5,0x1c0f,0x1c2a,0x1c3a,0x1c4a,0x1c50,0x1c56,0x1c5c,0x1c82,0x1c9b,0x1cc4,0x1cd4,0x1d24,0x1d34,0x1d3f,0x1d59,0x1d5b,0x1d61,0x1d67,0x1d6d,0x1d73,0x1d79,0x1d8f,0x1d95,0x1dc0,0x1dc9,0x1dd5,0x1de1,0x1ded,0x1df9,0x1e05,0x1e11,0x1e1d,0x1e29,0x1e35,0x1e41,0x1e4d,0x1e59,0x1e65,0x1e71,0x1e7d,0x1e89,0x1e95,0x1e9f,0x1eab,0x1eb7,0x1ebc,0x1ec8,0x1ed4,0x1ee0,0x1eec,0x1ef8,0x1f04,0x1f10,0x1f1c,0x1f26,0x1f32,0x1f3e,0x1f4a,0x1f56,0x1f62,0x1f6e,0x1f78,0x1f84,0x1f89,0x1f95,0x1fa1,0x1fad,0x1fb9,0x1fc5,0x1fd1,0x1fdd,0x1fe9,0x1ff5,0x2001,0x200d,0x2019,0x2025,0x2031,0x203d,0x2049,0x2055,0x2061,0x206d,0x2079,0x2085,0x2088,0x2093,0x21b9

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
	func_8633(var_41_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_bool = 0; var_42_object = Obj();
	var_40_bool = var_42_object;
	func_6783(var_41_bool, var_42_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6878();
		var_45_bool = var_40_string == (int)336;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7573();
			var_50_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)287);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)288, (int)340, (int)337);
			@@@var_0_object:AddReply((int)289, (int)340, (int)338);
			@@@var_0_object:AddReply((int)290, (int)340, (int)339);
			return 0;
		}
		var_76_bool = var_40_string == (int)340;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)292, (int)-1, (int)341);
			@@@var_0_object:AddReply((int)293, (int)-1, (int)342);
			return 0;
		}
		var_3_string = true;
		var_85_bool = 0;
		func_7001(var_85_bool);
		if(var_85_bool != 0) {
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
		func_6878();
		var_45_bool = var_41_bool == (int)13846;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7579();
		}
		var_100_bool = var_41_bool == (int)13851;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_7579();
		}
		var_104_bool = var_41_bool == (int)13904;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_7579();
		}
		var_108_bool = var_41_bool == (int)13829;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_7533();
		}
		var_114_bool = var_41_bool == (int)13840;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_7539();
		}
		var_120_bool = var_41_bool == (int)13195;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_7545();
		}
		var_126_bool = var_41_bool == (int)11744;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_7551();
		}
		var_138_bool = var_41_bool == (int)11745;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_7551();
		}
		var_142_bool = var_41_bool == (int)11756;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_7551();
		}
		var_146_bool = var_41_bool == (int)11759;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_7551();
		}
		var_150_bool = var_41_bool == (int)11760;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_7551();
		}
		var_154_bool = var_40_string == (int)13830;
		if(var_154_bool != 0) {
			var_155_bool = 0;
			var_155_bool = 0;
			var_156_bool = 0; var_157_object = Obj();
			var_157_object = var_1_object;
			func_8133(var_157_object);
			if(var_156_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_8145(var_165_object);
				if(var_164_bool != 0) {
					var_155_bool = 1;
				}
			}
			if(var_155_bool != 0) {
				var_170_object = Obj(); var_171_object = Obj();
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_7527();
				var_174_string = "";
				func_483(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12650);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10633, (int)13839, (int)11732);
				@@@var_0_object:AddReply((int)10665, (int)11772, (int)11771);
				return 0;
			}
			var_196_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11979);
			@@@var_0_object:ClearReplies();
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_8157(var_200_object);
			if(var_199_bool != 0) {
				var_205_bool = 0; var_206_object = Obj();
				var_206_object = var_1_object;
				func_8073(var_206_object);
				if(var_205_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 0) {
				@@@var_0_object:AddReply((int)12649, (int)13832, (int)13829);
			}
			var_214_bool = 0;
			var_214_bool = 0;
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_8169(var_216_object);
			if(var_215_bool != 0) {
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_1_object;
				func_8073(var_222_object);
				if(var_221_bool != 0) {
					var_214_bool = 1;
				}
			}
			if(var_214_bool != 0) {
				@@@var_0_object:AddReply((int)12660, (int)13832, (int)13840);
			}
			var_226_bool = 0;
			var_226_bool = 0;
			var_227_bool = 0; var_228_object = Obj();
			var_228_object = var_1_object;
			func_8181(var_228_object);
			if(var_227_bool != 0) {
				var_233_bool = 0; var_234_object = Obj();
				var_234_object = var_1_object;
				func_8193(var_234_object);
				if(var_233_bool != 0) {
					var_226_bool = 1;
				}
			}
			if(var_226_bool != 0) {
				@@@var_0_object:AddReply((int)11980, (int)13196, (int)13195);
			}
			@@@var_0_object:AddReply((int)13018, (int)-1, (int)14224);
			return 0;
		}
		var_246_bool = var_40_string == (int)13196;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11981);
			@@@var_0_object:ClearReplies();
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_object;
			func_7829(var_249_bool, var_250_object);
			if(var_249_bool != 0) {
				@@@var_0_object:AddReply((int)11982, (int)13198, (int)13197);
			}
			@@@var_0_object:AddReply((int)12658, (int)11733, (int)13838);
			return 0;
		}
		var_260_bool = var_40_string == (int)11733;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10635, (int)11735, (int)11734);
			@@@var_0_object:AddReply((int)10660, (int)11766, (int)11763);
			@@@var_0_object:AddReply((int)10661, (int)11766, (int)11765);
			return 0;
		}
		var_273_bool = var_40_string == (int)11766;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10663, (int)11735, (int)11767);
			@@@var_0_object:AddReply((int)10664, (int)11735, (int)11769);
			return 0;
		}
		var_283_bool = var_40_string == (int)11735;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10637, (int)11737, (int)11736);
			@@@var_0_object:AddReply((int)10647, (int)11749, (int)11748);
			return 0;
		}
		var_293_bool = var_40_string == (int)11749;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10649, (int)11737, (int)11750);
			@@@var_0_object:AddReply((int)10650, (int)11753, (int)11752);
			return 0;
		}
		var_303_bool = var_40_string == (int)11753;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10652, (int)11755, (int)11754);
			@@@var_0_object:AddReply((int)10659, (int)11755, (int)11761);
			return 0;
		}
		var_313_bool = var_40_string == (int)11755;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10654, (int)-1, (int)11756);
			@@@var_0_object:AddReply((int)10655, (int)11758, (int)11757);
			return 0;
		}
		var_323_bool = var_40_string == (int)11758;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10657, (int)-1, (int)11759);
			@@@var_0_object:AddReply((int)10658, (int)-1, (int)11760);
			return 0;
		}
		var_333_bool = var_40_string == (int)11737;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10642, (int)11743, (int)11742);
			@@@var_0_object:AddReply((int)10639, (int)11739, (int)11738);
			@@@var_0_object:AddReply((int)10646, (int)11739, (int)11746);
			return 0;
		}
		var_346_bool = var_40_string == (int)11739;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10641, (int)11755, (int)11740);
			return 0;
		}
		var_353_bool = var_40_string == (int)11743;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10644, (int)-1, (int)11744);
			@@@var_0_object:AddReply((int)10645, (int)-1, (int)11745);
			return 0;
		}
		var_363_bool = var_40_string == (int)13198;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11984, (int)13200, (int)13199);
			return 0;
		}
		var_370_bool = var_40_string == (int)13200;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11986, (int)-1, (int)13201);
			return 0;
		}
		var_377_bool = var_40_string == (int)13832;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12653, (int)13834, (int)13833);
			return 0;
		}
		var_384_bool = var_40_string == (int)13834;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12655, (int)-1, (int)13835);
			return 0;
		}
		var_391_bool = var_40_string == (int)11772;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10666);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10668, (int)11776, (int)11775);
			return 0;
		}
		var_398_bool = var_40_string == (int)11776;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10669);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10670, (int)13839, (int)11777);
			return 0;
		}
		var_405_bool = var_40_string == (int)13839;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12659);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12648, (int)13831, (int)13828);
			return 0;
		}
		var_412_bool = var_40_string == (int)13831;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12656, (int)13837, (int)13836);
			@@@var_0_object:AddReply((int)12695, (int)13887, (int)13886);
			@@@var_0_object:AddReply((int)12701, (int)13897, (int)13892);
			return 0;
		}
		var_425_bool = var_40_string == (int)13897;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12706);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12707, (int)13899, (int)13898);
			return 0;
		}
		var_432_bool = var_40_string == (int)13899;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12708);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12709, (int)13901, (int)13900);
			@@@var_0_object:AddReply((int)12715, (int)13901, (int)13906);
			return 0;
		}
		var_442_bool = var_40_string == (int)13901;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12710);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12711, (int)13903, (int)13902);
			@@@var_0_object:AddReply((int)12714, (int)-1, (int)13905);
			return 0;
		}
		var_452_bool = var_40_string == (int)13903;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12713, (int)-1, (int)13904);
			return 0;
		}
		var_459_bool = var_40_string == (int)13887;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12696);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12700, (int)-1, (int)13891);
			return 0;
		}
		var_466_bool = var_40_string == (int)13837;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12657);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12661, (int)13843, (int)13842);
			@@@var_0_object:AddReply((int)12667, (int)13843, (int)13849);
			return 0;
		}
		var_476_bool = var_40_string == (int)13843;
		if(var_476_bool != 0) {
			var_477_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12663, (int)13845, (int)13844);
			return 0;
		}
		var_483_bool = var_40_string == (int)13845;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_483(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12665, (int)-1, (int)13846);
			@@@var_0_object:AddReply((int)12668, (int)-1, (int)13851);
			return 0;
		}
		var_3_string = true;
		var_492_bool = 0;
		func_7001(var_492_bool);
		if(var_492_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1f4";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6878();
		var_45_bool = var_41_bool == (int)5906;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7003();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7194();
		}
		var_69_bool = var_41_bool == (int)5766;
		if(var_69_bool != 0) {
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_7009();
		}
		var_75_bool = var_41_bool == (int)5767;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_7009();
		}
		var_79_bool = var_41_bool == (int)5743;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_7015();
		}
		var_85_bool = var_41_bool == (int)5753;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_7021();
		}
		var_91_bool = var_41_bool == (int)5754;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_7021();
		}
		var_95_bool = var_41_bool == (int)5757;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_7021();
		}
		var_99_bool = var_41_bool == (int)5758;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_7021();
		}
		var_103_bool = var_41_bool == (int)7040;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_7039();
		}
		var_109_bool = var_41_bool == (int)7046;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_7045();
		}
		var_115_bool = var_41_bool == (int)7054;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_7051();
		}
		var_121_bool = var_41_bool == (int)7064;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_7057();
		}
		var_127_bool = var_41_bool == (int)7075;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_7063();
		}
		var_133_bool = var_41_bool == (int)7086;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_7069();
		}
		var_139_bool = var_41_bool == (int)7089;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_7069();
		}
		var_143_bool = var_41_bool == (int)7095;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_7075();
		}
		var_149_bool = var_41_bool == (int)7099;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_7081();
		}
		var_155_bool = var_41_bool == (int)7100;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_7081();
		}
		var_159_bool = var_40_string == (int)5734;
		if(var_159_bool != 0) {
			var_160_bool = 0; var_161_object = Obj();
			var_161_object = var_1_object;
			func_7625(var_161_object);
			if(var_160_bool != 0) {
				var_168_string = "";
				func_1732(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5205);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5206, (int)5905, (int)5735);
				@@@var_0_object:AddReply((int)5365, (int)5908, (int)5907);
				return 0;
			}
			var_190_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6325);
			@@@var_0_object:ClearReplies();
			var_192_bool = 0;
			var_192_bool = 0;
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_7637(var_194_object);
			if(var_193_bool != 0) {
				var_199_bool = 0; var_200_object = Obj();
				var_200_object = var_1_object;
				func_7673(var_200_object);
				if(var_199_bool != 0) {
					var_192_bool = 1;
				}
			}
			if(var_192_bool != 0) {
				@@@var_0_object:AddReply((int)6329, (int)5761, (int)6985);
			}
			var_208_bool = 0;
			var_208_bool = 1;
			var_209_bool = 0;
			var_209_bool = 0;
			var_210_bool = 0;
			var_210_bool = 0;
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_object;
			func_7964(var_211_bool, var_212_object);
			if(var_211_bool != 0) {
				var_222_bool = 0; var_223_object = Obj();
				var_223_object = var_1_object;
				func_7649(var_223_object);
				if(var_222_bool != 0) {
					var_210_bool = 1;
				}
			}
			if(var_210_bool != 0) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_7673(var_229_object);
				if(var_228_bool != 0) {
					var_209_bool = 1;
				}
			}
			if(var_209_bool != 1) {
				var_230_bool = 0;
				var_230_bool = 0;
				var_231_bool = 0;
				var_231_bool = 0;
				var_232_bool = 0; var_233_object = Obj();
				var_233_object = var_1_object;
				func_8046(var_232_bool, var_233_object);
				if(var_232_bool != 0) {
					var_243_bool = 0; var_244_object = Obj();
					var_244_object = var_1_object;
					func_7649(var_244_object);
					if(var_243_bool != 0) {
						var_231_bool = 1;
					}
				}
				if(var_231_bool != 0) {
					var_245_bool = 0; var_246_object = Obj();
					var_246_object = var_1_object;
					func_7673(var_246_object);
					if(var_245_bool != 0) {
						var_230_bool = 1;
					}
				}
				if(var_230_bool != 1) {
					var_208_bool = 0;
				}
			}
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)6326, (int)5738, (int)6982);
			}
			var_250_bool = 0;
			var_250_bool = 1;
			var_251_bool = 0;
			var_251_bool = 0;
			var_252_bool = 0;
			var_252_bool = 0;
			var_253_bool = 0; var_254_object = Obj();
			var_254_object = var_1_object;
			func_8046(var_253_bool, var_254_object);
			if(var_253_bool != 0) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_7661(var_256_object);
				if(var_255_bool != 0) {
					var_252_bool = 1;
				}
			}
			if(var_252_bool != 0) {
				var_261_bool = 0; var_262_object = Obj();
				var_262_object = var_1_object;
				func_7673(var_262_object);
				if(var_261_bool != 0) {
					var_251_bool = 1;
				}
			}
			if(var_251_bool != 1) {
				var_263_bool = 0;
				var_263_bool = 0;
				var_264_bool = 0;
				var_264_bool = 0;
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_7964(var_265_bool, var_266_object);
				if(var_265_bool != 0) {
					var_267_bool = 0; var_268_object = Obj();
					var_268_object = var_1_object;
					func_7661(var_268_object);
					if(var_267_bool != 0) {
						var_264_bool = 1;
					}
				}
				if(var_264_bool != 0) {
					var_269_bool = 0; var_270_object = Obj();
					var_270_object = var_1_object;
					func_7673(var_270_object);
					if(var_269_bool != 0) {
						var_263_bool = 1;
					}
				}
				if(var_263_bool != 1) {
					var_250_bool = 0;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)6354, (int)5748, (int)7010);
			}
			var_274_bool = 0;
			var_274_bool = 0;
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_8289(var_276_object);
			if(var_275_bool != 0) {
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_object;
				func_7685(var_282_object);
				if(var_281_bool != 0) {
					var_274_bool = 1;
				}
			}
			if(var_274_bool != 0) {
				@@@var_0_object:AddReply((int)6330, (int)7035, (int)6986);
			}
			var_290_bool = 0;
			var_290_bool = 0;
			var_291_bool = 0; var_292_object = Obj();
			var_292_object = var_1_object;
			func_8265(var_292_object);
			if(var_291_bool != 0) {
				var_297_bool = 0; var_298_object = Obj();
				var_298_object = var_1_object;
				func_7697(var_298_object);
				if(var_297_bool != 0) {
					var_290_bool = 1;
				}
			}
			if(var_290_bool != 0) {
				@@@var_0_object:AddReply((int)6337, (int)7041, (int)6993);
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_8277(var_308_object);
			if(var_307_bool != 0) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_7709(var_314_object);
				if(var_313_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)6332, (int)7047, (int)6988);
			}
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = 0;
			var_323_bool = 0;
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_8241(var_325_object);
			if(var_324_bool != 0) {
				var_330_bool = 0; var_331_object = Obj();
				var_331_object = var_1_object;
				func_7721(var_331_object);
				if(var_330_bool != 0) {
					var_323_bool = 1;
				}
			}
			if(var_323_bool != 0) {
				var_336_bool = 0; var_337_object = Obj();
				var_337_object = var_1_object;
				func_7673(var_337_object);
				if(var_336_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				@@@var_0_object:AddReply((int)6339, (int)7055, (int)6995);
			}
			var_341_bool = 0;
			var_341_bool = 0;
			var_342_bool = 0; var_343_object = Obj();
			var_343_object = var_1_object;
			func_8229(var_343_object);
			if(var_342_bool != 0) {
				var_348_bool = 0; var_349_object = Obj();
				var_349_object = var_1_object;
				func_7733(var_349_object);
				if(var_348_bool != 0) {
					var_341_bool = 1;
				}
			}
			if(var_341_bool != 0) {
				@@@var_0_object:AddReply((int)6340, (int)7065, (int)6996);
			}
			var_357_bool = 0;
			var_357_bool = 0;
			var_358_bool = 0; var_359_object = Obj();
			var_359_object = var_1_object;
			func_8253(var_359_object);
			if(var_358_bool != 0) {
				var_364_bool = 0; var_365_object = Obj();
				var_365_object = var_1_object;
				func_7745(var_365_object);
				if(var_364_bool != 0) {
					var_357_bool = 1;
				}
			}
			if(var_357_bool != 0) {
				@@@var_0_object:AddReply((int)6344, (int)7083, (int)7000);
			}
			var_373_bool = 0;
			var_373_bool = 0;
			var_374_bool = 0; var_375_object = Obj();
			var_375_object = var_1_object;
			func_8301(var_375_object);
			if(var_374_bool != 0) {
				var_380_bool = 0; var_381_object = Obj();
				var_381_object = var_1_object;
				func_7757(var_381_object);
				if(var_380_bool != 0) {
					var_373_bool = 1;
				}
			}
			if(var_373_bool != 0) {
				@@@var_0_object:AddReply((int)6345, (int)7090, (int)7001);
			}
			var_389_bool = 0;
			var_389_bool = 0;
			var_390_bool = 0; var_391_object = Obj();
			var_391_object = var_1_object;
			func_7940(var_391_object);
			if(var_390_bool != 0) {
				var_396_bool = 0; var_397_object = Obj();
				var_397_object = var_1_object;
				func_7769(var_397_object);
				if(var_396_bool != 0) {
					var_389_bool = 1;
				}
			}
			if(var_389_bool != 0) {
				@@@var_0_object:AddReply((int)6346, (int)7096, (int)7002);
			}
			@@@var_0_object:AddReply((int)7537, (int)-1, (int)8319);
			return 0;
		}
		var_409_bool = var_40_string == (int)7096;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6434, (int)7098, (int)7097);
			return 0;
		}
		var_416_bool = var_40_string == (int)7098;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6435);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6436, (int)-1, (int)7099);
			@@@var_0_object:AddReply((int)6437, (int)-1, (int)7100);
			return 0;
		}
		var_426_bool = var_40_string == (int)7090;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6428, (int)7092, (int)7091);
			return 0;
		}
		var_433_bool = var_40_string == (int)7092;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6430, (int)7094, (int)7093);
			return 0;
		}
		var_440_bool = var_40_string == (int)7094;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6432, (int)-1, (int)7095);
			return 0;
		}
		var_447_bool = var_40_string == (int)7083;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6420);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6421, (int)7085, (int)7084);
			return 0;
		}
		var_454_bool = var_40_string == (int)7085;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6423, (int)-1, (int)7086);
			@@@var_0_object:AddReply((int)6424, (int)7088, (int)7087);
			return 0;
		}
		var_464_bool = var_40_string == (int)7088;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6426, (int)-1, (int)7089);
			return 0;
		}
		var_471_bool = var_40_string == (int)7065;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6406);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6407, (int)7068, (int)7066);
			@@@var_0_object:AddReply((int)6408, (int)7068, (int)7067);
			return 0;
		}
		var_481_bool = var_40_string == (int)7068;
		if(var_481_bool != 0) {
			var_482_bool = 0; var_483_object = Obj();
			var_483_object = var_1_object;
			func_8313(var_483_object);
			if(var_482_bool != 0) {
				var_488_string = "";
				func_1732(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6409);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6410, (int)7070, (int)7069);
				@@@var_0_object:AddReply((int)6413, (int)7074, (int)7073);
				var_496_bool = 0; var_497_object = Obj();
				var_497_object = var_1_object;
				func_8313(var_497_object);
				var_498_bool = var_496_bool == 0; //@nz
				if(var_498_bool != 0) {
					@@@var_0_object:AddReply((int)6416, (int)7079, (int)7078);
				}
				return 0;
			}
		}
		var_503_bool = var_40_string == (int)7079;
		if(var_503_bool != 0) {
			var_504_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6418, (int)7070, (int)7080);
			return 0;
		}
		var_510_bool = var_40_string == (int)7070;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6411);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6412, (int)7074, (int)7072);
			return 0;
		}
		var_517_bool = var_40_string == (int)7074;
		if(var_517_bool != 0) {
			var_518_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6414);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6415, (int)-1, (int)7075);
			return 0;
		}
		var_524_bool = var_40_string == (int)7055;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6397);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6398, (int)7057, (int)7056);
			@@@var_0_object:AddReply((int)6400, (int)7059, (int)7058);
			return 0;
		}
		var_534_bool = var_40_string == (int)7059;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6402, (int)7057, (int)7060);
			return 0;
		}
		var_541_bool = var_40_string == (int)7057;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6399);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6403, (int)7063, (int)7062);
			return 0;
		}
		var_548_bool = var_40_string == (int)7063;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6405, (int)-1, (int)7064);
			return 0;
		}
		var_555_bool = var_40_string == (int)7047;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6390);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6391, (int)7049, (int)7048);
			return 0;
		}
		var_562_bool = var_40_string == (int)7049;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6394, (int)7052, (int)7051);
			@@@var_0_object:AddReply((int)6393, (int)7052, (int)7050);
			return 0;
		}
		var_572_bool = var_40_string == (int)7052;
		if(var_572_bool != 0) {
			var_573_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6395);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6396, (int)-1, (int)7054);
			return 0;
		}
		var_579_bool = var_40_string == (int)7041;
		if(var_579_bool != 0) {
			var_580_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6385);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6386, (int)7043, (int)7042);
			@@@var_0_object:AddReply((int)6388, (int)7043, (int)7044);
			return 0;
		}
		var_589_bool = var_40_string == (int)7043;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6389, (int)-1, (int)7046);
			return 0;
		}
		var_596_bool = var_40_string == (int)7035;
		if(var_596_bool != 0) {
			var_597_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6380, (int)7037, (int)7036);
			return 0;
		}
		var_603_bool = var_40_string == (int)7037;
		if(var_603_bool != 0) {
			var_604_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6382, (int)7039, (int)7038);
			return 0;
		}
		var_610_bool = var_40_string == (int)7039;
		if(var_610_bool != 0) {
			var_611_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6384, (int)-1, (int)7040);
			return 0;
		}
		var_617_bool = var_40_string == (int)5748;
		if(var_617_bool != 0) {
			var_618_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5218, (int)5750, (int)5749);
			@@@var_0_object:AddReply((int)5226, (int)-1, (int)5758);
			@@@var_0_object:AddReply((int)5227, (int)5750, (int)5759);
			return 0;
		}
		var_630_bool = var_40_string == (int)5750;
		if(var_630_bool != 0) {
			var_631_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5219);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5220, (int)5752, (int)5751);
			@@@var_0_object:AddReply((int)5224, (int)5752, (int)5755);
			@@@var_0_object:AddReply((int)5225, (int)-1, (int)5757);
			return 0;
		}
		var_643_bool = var_40_string == (int)5752;
		if(var_643_bool != 0) {
			var_644_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5222, (int)-1, (int)5753);
			@@@var_0_object:AddReply((int)5223, (int)-1, (int)5754);
			return 0;
		}
		var_653_bool = var_40_string == (int)5738;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5210, (int)5740, (int)5739);
			@@@var_0_object:AddReply((int)5216, (int)5740, (int)5746);
			return 0;
		}
		var_663_bool = var_40_string == (int)5740;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_1732(var_41_bool, "Pain");
			@@@var_0_object:SetMessage((int)5211);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5212, (int)5742, (int)5741);
			@@@var_0_object:AddReply((int)5215, (int)5742, (int)5744);
			return 0;
		}
		var_673_bool = var_40_string == (int)5742;
		if(var_673_bool != 0) {
			var_674_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5214, (int)-1, (int)5743);
			return 0;
		}
		var_680_bool = var_40_string == (int)5761;
		if(var_680_bool != 0) {
			var_681_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5229, (int)5763, (int)5762);
			@@@var_0_object:AddReply((int)5236, (int)5763, (int)5770);
			return 0;
		}
		var_690_bool = var_40_string == (int)5763;
		if(var_690_bool != 0) {
			var_691_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5231, (int)5765, (int)5764);
			@@@var_0_object:AddReply((int)5235, (int)5765, (int)5768);
			return 0;
		}
		var_700_bool = var_40_string == (int)5765;
		if(var_700_bool != 0) {
			var_701_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5232);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5233, (int)-1, (int)5766);
			@@@var_0_object:AddReply((int)5234, (int)-1, (int)5767);
			return 0;
		}
		var_710_bool = var_40_string == (int)5908;
		if(var_710_bool != 0) {
			var_711_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5367, (int)5910, (int)5909);
			@@@var_0_object:AddReply((int)5369, (int)5905, (int)5911);
			return 0;
		}
		var_720_bool = var_40_string == (int)5910;
		if(var_720_bool != 0) {
			var_721_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5370, (int)5905, (int)5913);
			@@@var_0_object:AddReply((int)5371, (int)5905, (int)5914);
			return 0;
		}
		var_730_bool = var_40_string == (int)5905;
		if(var_730_bool != 0) {
			var_731_string = "";
			func_1732(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5364, (int)-1, (int)5906);
			return 0;
		}
		var_3_string = true;
		var_736_bool = 0;
		func_7001(var_736_bool);
		if(var_736_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6d5";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6878();
		var_45_bool = var_41_bool == (int)7775;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7087();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7111();
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_7210(var_113_object);
		}
		var_139_bool = var_41_bool == (int)7779;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_7087();
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_7111();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_7210(var_145_object);
		}
		var_147_bool = var_41_bool == (int)7780;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_7087();
		}
		var_151_bool = var_41_bool == (int)7783;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_7087();
		}
		var_155_bool = var_41_bool == (int)7790;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_7093();
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_7141();
		}
		var_178_bool = var_41_bool == (int)7791;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_7093();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_7141();
		}
		var_184_bool = var_41_bool == (int)7436;
		if(var_184_bool != 0) {
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_7093();
		}
		var_188_bool = var_41_bool == (int)7284;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_7314(var_190_object);
		}
		var_205_bool = var_41_bool == (int)7795;
		if(var_205_bool != 0) {
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_7099();
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_7151();
			var_227_object = Obj(); var_228_object = Obj();
			var_227_object = var_1_object;
			var_228_object = var_0_object;
			func_7314(var_228_object);
			var_229_object = Obj(); var_230_object = Obj();
			var_229_object = var_1_object;
			var_230_object = var_0_object;
			func_7298(var_230_object);
		}
		var_237_bool = var_41_bool == (int)7798;
		if(var_237_bool != 0) {
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_object;
			func_7099();
			var_240_object = Obj(); var_241_object = Obj();
			var_240_object = var_1_object;
			var_241_object = var_0_object;
			func_7151();
			var_242_object = Obj(); var_243_object = Obj();
			var_242_object = var_1_object;
			var_243_object = var_0_object;
			func_7314(var_243_object);
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_7298(var_245_object);
		}
		var_247_bool = var_41_bool == (int)7799;
		if(var_247_bool != 0) {
			var_248_object = Obj(); var_249_object = Obj();
			var_248_object = var_1_object;
			var_249_object = var_0_object;
			func_7099();
			var_250_object = Obj(); var_251_object = Obj();
			var_250_object = var_1_object;
			var_251_object = var_0_object;
			func_7151();
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_7314(var_253_object);
			var_254_object = Obj(); var_255_object = Obj();
			var_254_object = var_1_object;
			var_255_object = var_0_object;
			func_7298(var_255_object);
		}
		var_257_bool = var_41_bool == (int)7801;
		if(var_257_bool != 0) {
			var_258_object = Obj(); var_259_object = Obj();
			var_258_object = var_1_object;
			var_259_object = var_0_object;
			func_7111();
			var_260_object = Obj(); var_261_object = Obj();
			var_260_object = var_1_object;
			var_261_object = var_0_object;
			func_7210(var_261_object);
		}
		var_263_bool = var_41_bool == (int)7410;
		if(var_263_bool != 0) {
			var_264_object = Obj(); var_265_object = Obj();
			var_264_object = var_1_object;
			var_265_object = var_0_object;
			func_7105();
		}
		var_269_bool = var_41_bool == (int)7411;
		if(var_269_bool != 0) {
			var_270_object = Obj(); var_271_object = Obj();
			var_270_object = var_1_object;
			var_271_object = var_0_object;
			func_7105();
		}
		var_273_bool = var_41_bool == (int)7414;
		if(var_273_bool != 0) {
			var_274_object = Obj(); var_275_object = Obj();
			var_274_object = var_1_object;
			var_275_object = var_0_object;
			func_7105();
		}
		var_277_bool = var_41_bool == (int)7416;
		if(var_277_bool != 0) {
			var_278_object = Obj(); var_279_object = Obj();
			var_278_object = var_1_object;
			var_279_object = var_0_object;
			func_7105();
		}
		var_281_bool = var_40_string == (int)7279;
		if(var_281_bool != 0) {
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_object;
			func_7781(var_283_object);
			if(var_282_bool != 0) {
				var_290_object = Obj(); var_291_object = Obj();
				var_290_object = var_1_object;
				var_291_object = var_0_object;
				func_7616();
				var_296_string = "";
				func_3264(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6610);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6611, (int)7748, (int)7280);
				@@@var_0_object:AddReply((int)7066, (int)7748, (int)7784);
				return 0;
			}
			var_318_bool = 0;
			var_318_bool = 0;
			var_319_bool = 0;
			var_319_bool = 0;
			var_320_bool = 0; var_321_object = Obj();
			var_321_object = var_1_object;
			func_7793(var_321_object);
			if(var_320_bool != 0) {
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_7863(var_327_object);
				if(var_326_bool != 0) {
					var_319_bool = 1;
				}
			}
			if(var_319_bool != 0) {
				var_328_bool = 0; var_329_object = Obj();
				var_329_object = var_1_object;
				func_7868(var_329_object);
				if(var_328_bool != 0) {
					var_318_bool = 1;
				}
			}
			if(var_318_bool != 0) {
				var_334_string = "";
				func_3264(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6731);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6732, (int)7420, (int)7419);
				@@@var_0_object:AddReply((int)6742, (int)7420, (int)7430);
				@@@var_0_object:AddReply((int)6743, (int)7433, (int)7432);
				return 0;
			}
			var_345_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6614);
			@@@var_0_object:ClearReplies();
			var_347_bool = 0;
			var_347_bool = 0;
			var_348_bool = 0; var_349_object = Obj();
			var_349_object = var_1_object;
			func_7805(var_349_object);
			if(var_348_bool != 0) {
				var_354_bool = 0; var_355_object = Obj();
				var_355_object = var_1_object;
				func_7851(var_355_object);
				if(var_354_bool != 0) {
					var_347_bool = 1;
				}
			}
			if(var_347_bool != 0) {
				@@@var_0_object:AddReply((int)6615, (int)7282, (int)7284);
			}
			var_363_bool = 0; var_364_object = Obj();
			var_364_object = var_1_object;
			func_7839(var_364_object);
			if(var_363_bool != 0) {
				@@@var_0_object:AddReply((int)6618, (int)7800, (int)7287);
			}
			var_372_bool = 0; var_373_object = Obj();
			var_373_object = var_1_object;
			func_7817(var_373_object);
			if(var_372_bool != 0) {
				@@@var_0_object:AddReply((int)6730, (int)7405, (int)7417);
			}
			@@@var_0_object:AddReply((int)7071, (int)7802, (int)7794);
			@@@var_0_object:AddReply((int)7532, (int)-1, (int)8314);
			return 0;
		}
		var_388_bool = var_40_string == (int)7802;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7080, (int)7805, (int)7803);
			@@@var_0_object:AddReply((int)7081, (int)-1, (int)7804);
			return 0;
		}
		var_398_bool = var_40_string == (int)7805;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7082);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7083, (int)-1, (int)7806);
			return 0;
		}
		var_405_bool = var_40_string == (int)7405;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6719, (int)7407, (int)7406);
			@@@var_0_object:AddReply((int)6729, (int)-1, (int)7416);
			return 0;
		}
		var_415_bool = var_40_string == (int)7407;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6721, (int)7409, (int)7408);
			@@@var_0_object:AddReply((int)6725, (int)7413, (int)7412);
			return 0;
		}
		var_425_bool = var_40_string == (int)7413;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6727, (int)-1, (int)7414);
			return 0;
		}
		var_432_bool = var_40_string == (int)7409;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6723, (int)-1, (int)7410);
			@@@var_0_object:AddReply((int)6724, (int)-1, (int)7411);
			return 0;
		}
		var_442_bool = var_40_string == (int)7800;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7078, (int)-1, (int)7801);
			return 0;
		}
		var_449_bool = var_40_string == (int)7282;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7072, (int)-1, (int)7795);
			@@@var_0_object:AddReply((int)7073, (int)7797, (int)7796);
			return 0;
		}
		var_459_bool = var_40_string == (int)7797;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7075, (int)-1, (int)7798);
			@@@var_0_object:AddReply((int)7076, (int)-1, (int)7799);
			return 0;
		}
		var_469_bool = var_40_string == (int)7433;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6745, (int)7420, (int)7434);
			@@@var_0_object:AddReply((int)6746, (int)-1, (int)7436);
			return 0;
		}
		var_479_bool = var_40_string == (int)7420;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6733);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6734, (int)7422, (int)7421);
			@@@var_0_object:AddReply((int)6741, (int)7422, (int)7428);
			return 0;
		}
		var_489_bool = var_40_string == (int)7422;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6737, (int)7425, (int)7424);
			@@@var_0_object:AddReply((int)6736, (int)7789, (int)7423);
			return 0;
		}
		var_499_bool = var_40_string == (int)7425;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6738);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6739, (int)7789, (int)7426);
			@@@var_0_object:AddReply((int)6740, (int)7789, (int)7427);
			return 0;
		}
		var_509_bool = var_40_string == (int)7789;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7069, (int)-1, (int)7790);
			@@@var_0_object:AddReply((int)7070, (int)-1, (int)7791);
			return 0;
		}
		var_519_bool = var_40_string == (int)7748;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7035, (int)7750, (int)7749);
			@@@var_0_object:AddReply((int)7051, (int)7766, (int)7765);
			return 0;
		}
		var_529_bool = var_40_string == (int)7766;
		if(var_529_bool != 0) {
			var_530_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7053, (int)7750, (int)7767);
			return 0;
		}
		var_536_bool = var_40_string == (int)7750;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7037, (int)7752, (int)7751);
			return 0;
		}
		var_543_bool = var_40_string == (int)7752;
		if(var_543_bool != 0) {
			var_544_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7039, (int)7754, (int)7753);
			@@@var_0_object:AddReply((int)7048, (int)7763, (int)7762);
			return 0;
		}
		var_553_bool = var_40_string == (int)7763;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7054, (int)7759, (int)7770);
			return 0;
		}
		var_560_bool = var_40_string == (int)7754;
		if(var_560_bool != 0) {
			var_561_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7043, (int)7759, (int)7757);
			@@@var_0_object:AddReply((int)7041, (int)7756, (int)7755);
			return 0;
		}
		var_570_bool = var_40_string == (int)7756;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7042);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7044, (int)7759, (int)7758);
			return 0;
		}
		var_577_bool = var_40_string == (int)7759;
		if(var_577_bool != 0) {
			var_578_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7046, (int)7761, (int)7760);
			@@@var_0_object:AddReply((int)7067, (int)7761, (int)7787);
			@@@var_0_object:AddReply((int)7055, (int)7773, (int)7772);
			return 0;
		}
		var_590_bool = var_40_string == (int)7773;
		if(var_590_bool != 0) {
			var_591_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7057, (int)7761, (int)7774);
			return 0;
		}
		var_597_bool = var_40_string == (int)7761;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7058, (int)-1, (int)7775);
			@@@var_0_object:AddReply((int)7059, (int)7778, (int)7777);
			return 0;
		}
		var_607_bool = var_40_string == (int)7778;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7060);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7061, (int)-1, (int)7779);
			@@@var_0_object:AddReply((int)7062, (int)-1, (int)7780);
			@@@var_0_object:AddReply((int)7063, (int)7782, (int)7781);
			return 0;
		}
		var_620_bool = var_40_string == (int)7782;
		if(var_620_bool != 0) {
			var_621_string = "";
			func_3264(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7065, (int)-1, (int)7783);
			return 0;
		}
		var_3_string = true;
		var_626_bool = 0;
		func_7001(var_626_bool);
		if(var_626_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcd1";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6878();
		var_45_bool = var_41_bool == (int)9978;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7260();
		}
		var_51_bool = var_41_bool == (int)9979;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_7260();
		}
		var_55_bool = var_41_bool == (int)9724;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_7248();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_7266();
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_7254();
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_7226(var_115_object);
		}
		var_141_bool = var_41_bool == (int)9704;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_7242();
		}
		var_147_bool = var_41_bool == (int)13182;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_7513();
		}
		var_151_bool = var_41_bool == (int)13183;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_7513();
		}
		var_155_bool = var_41_bool == (int)13184;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_7513();
		}
		var_159_bool = var_40_string == (int)9964;
		if(var_159_bool != 0) {
			var_160_bool = 0;
			var_160_bool = 0;
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_7928(var_162_object);
			if(var_161_bool != 0) {
				var_169_bool = 0; var_170_object = Obj();
				var_170_object = var_1_object;
				func_7916(var_170_object);
				if(var_169_bool != 0) {
					var_160_bool = 1;
				}
			}
			if(var_160_bool != 0) {
				var_175_string = "";
				func_4409(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9086);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9087, (int)9969, (int)9965);
				@@@var_0_object:AddReply((int)9088, (int)9967, (int)9966);
				return 0;
			}
			var_197_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8854);
			@@@var_0_object:ClearReplies();
			var_199_bool = 0;
			var_199_bool = 0;
			var_200_bool = 0; var_201_object = Obj();
			var_201_object = var_1_object;
			func_7892(var_201_object);
			if(var_200_bool != 0) {
				var_206_bool = 0; var_207_object = Obj();
				var_207_object = var_1_object;
				func_7952(var_207_object);
				if(var_206_bool != 0) {
					var_199_bool = 1;
				}
			}
			if(var_199_bool != 0) {
				@@@var_0_object:AddReply((int)8840, (int)9693, (int)9692);
			}
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_7880(var_216_object);
			if(var_215_bool != 0) {
				@@@var_0_object:AddReply((int)8855, (int)9687, (int)9711);
			}
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_7904(var_225_object);
			if(var_224_bool != 0) {
				@@@var_0_object:AddReply((int)8856, (int)9691, (int)9712);
			}
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_8068(var_234_object);
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)11978, (int)13175, (int)13193);
			}
			@@@var_0_object:AddReply((int)11133, (int)-1, (int)12322);
			return 0;
		}
		var_242_bool = var_40_string == (int)13175;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11965, (int)13177, (int)13176);
			@@@var_0_object:AddReply((int)11976, (int)13177, (int)13189);
			@@@var_0_object:AddReply((int)11977, (int)13177, (int)13191);
			return 0;
		}
		var_255_bool = var_40_string == (int)13177;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11967, (int)13179, (int)13178);
			@@@var_0_object:AddReply((int)11975, (int)13179, (int)13187);
			return 0;
		}
		var_265_bool = var_40_string == (int)13179;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11968);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11969, (int)13181, (int)13180);
			@@@var_0_object:AddReply((int)11974, (int)13181, (int)13185);
			return 0;
		}
		var_275_bool = var_40_string == (int)13181;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11971, (int)-1, (int)13182);
			@@@var_0_object:AddReply((int)11972, (int)-1, (int)13183);
			@@@var_0_object:AddReply((int)11973, (int)-1, (int)13184);
			return 0;
		}
		var_288_bool = var_40_string == (int)9691;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8839);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8857, (int)9714, (int)9713);
			return 0;
		}
		var_295_bool = var_40_string == (int)9714;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8859, (int)9693, (int)9715);
			return 0;
		}
		var_302_bool = var_40_string == (int)9687;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8836, (int)9689, (int)9688);
			@@@var_0_object:AddReply((int)8852, (int)9689, (int)9706);
			@@@var_0_object:AddReply((int)8853, (int)9689, (int)9708);
			return 0;
		}
		var_315_bool = var_40_string == (int)9689;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8849, (int)9703, (int)9702);
			return 0;
		}
		var_322_bool = var_40_string == (int)9703;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8851, (int)-1, (int)9704);
			return 0;
		}
		var_329_bool = var_40_string == (int)9693;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8842, (int)9695, (int)9694);
			@@@var_0_object:AddReply((int)8846, (int)9699, (int)9698);
			@@@var_0_object:AddReply((int)8861, (int)9719, (int)9718);
			return 0;
		}
		var_342_bool = var_40_string == (int)9719;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8863, (int)9716, (int)9720);
			@@@var_0_object:AddReply((int)8867, (int)9695, (int)9725);
			return 0;
		}
		var_352_bool = var_40_string == (int)9699;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8848, (int)9695, (int)9700);
			return 0;
		}
		var_359_bool = var_40_string == (int)9695;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8844, (int)9716, (int)9696);
			@@@var_0_object:AddReply((int)8845, (int)9716, (int)9697);
			return 0;
		}
		var_369_bool = var_40_string == (int)9716;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8864, (int)9723, (int)9722);
			return 0;
		}
		var_376_bool = var_40_string == (int)9723;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8866, (int)-1, (int)9724);
			return 0;
		}
		var_383_bool = var_40_string == (int)9967;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9090, (int)9969, (int)9968);
			return 0;
		}
		var_390_bool = var_40_string == (int)9969;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9092, (int)9971, (int)9970);
			return 0;
		}
		var_397_bool = var_40_string == (int)9971;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9094, (int)9974, (int)9973);
			return 0;
		}
		var_404_bool = var_40_string == (int)9974;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9095);
			@@@var_0_object:ClearReplies();
			var_407_bool = 0; var_408_object = Obj();
			var_408_object = var_1_object;
			func_7916(var_408_object);
			if(var_407_bool != 0) {
				@@@var_0_object:AddReply((int)9096, (int)-1, (int)9975);
			}
			@@@var_0_object:AddReply((int)9097, (int)9977, (int)9976);
			return 0;
		}
		var_416_bool = var_40_string == (int)9977;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_4409(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9099, (int)-1, (int)9978);
			@@@var_0_object:AddReply((int)9100, (int)-1, (int)9979);
			return 0;
		}
		var_3_string = true;
		var_425_bool = 0;
		func_7001(var_425_bool);
		if(var_425_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x114a";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6878();
		var_45_bool = var_41_bool == (int)12370;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7323();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7329();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_7476(var_116_object);
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_7364(var_135_object);
		}
		var_161_bool = var_41_bool == (int)12371;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_7323();
		}
		var_165_bool = var_41_bool == (int)12695;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_7329();
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_7476(var_169_object);
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_7033();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_7364(var_175_object);
		}
		var_177_bool = var_41_bool == (int)12376;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_7380();
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_7386();
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_7460(var_204_object);
		}
		var_211_bool = var_41_bool == (int)12377;
		if(var_211_bool != 0) {
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_7380();
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_7386();
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_7460(var_217_object);
		}
		var_219_bool = var_41_bool == (int)12702;
		if(var_219_bool != 0) {
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_7487();
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_7183(var_225_object);
			var_233_object = Obj(); var_234_object = Obj();
			var_233_object = var_1_object;
			var_234_object = var_0_object;
			func_7027();
			var_237_object = Obj(); var_238_object = Obj();
			var_237_object = var_1_object;
			var_238_object = var_0_object;
			func_7409();
		}
		var_270_bool = var_40_string == (int)12359;
		if(var_270_bool != 0) {
			var_271_bool = 0; var_272_object = Obj();
			var_272_object = var_1_object;
			func_7974(var_272_object);
			if(var_271_bool != 0) {
				var_279_string = "";
				func_5250(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11175);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11176, (int)12361, (int)12360);
				@@@var_0_object:AddReply((int)11178, (int)12366, (int)12362);
				return 0;
			}
			var_301_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11164);
			@@@var_0_object:ClearReplies();
			var_303_bool = 0; var_304_object = Obj();
			var_304_object = var_1_object;
			func_7986(var_304_object);
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)11489, (int)12692, (int)12691);
			}
			var_312_bool = 0;
			var_312_bool = 0;
			var_313_bool = 0; var_314_object = Obj();
			var_314_object = var_1_object;
			func_7998(var_314_object);
			if(var_313_bool != 0) {
				var_319_bool = 0; var_320_object = Obj();
				var_320_object = var_1_object;
				func_8010(var_320_object);
				if(var_319_bool != 0) {
					var_312_bool = 1;
				}
			}
			if(var_312_bool != 0) {
				@@@var_0_object:AddReply((int)11187, (int)12373, (int)12372);
			}
			var_328_bool = 0;
			var_328_bool = 0;
			var_329_bool = 0; var_330_object = Obj();
			var_330_object = var_1_object;
			func_8022(var_330_object);
			if(var_329_bool != 0) {
				var_335_bool = 0; var_336_object = Obj();
				var_336_object = var_1_object;
				func_8034(var_336_object);
				if(var_335_bool != 0) {
					var_328_bool = 1;
				}
			}
			if(var_328_bool != 0) {
				@@@var_0_object:AddReply((int)11495, (int)12697, (int)12696);
			}
			var_344_bool = 0; var_345_object = Obj();
			var_345_object = var_1_object;
			func_7829(var_344_bool, var_345_object);
			if(var_344_bool != 0) {
				@@@var_0_object:AddReply((int)11165, (int)12349, (int)12348);
			}
			@@@var_0_object:AddReply((int)11174, (int)-1, (int)12358);
			return 0;
		}
		var_355_bool = var_40_string == (int)12349;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11167, (int)12354, (int)12350);
			return 0;
		}
		var_362_bool = var_40_string == (int)12354;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11171);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11172, (int)-1, (int)12355);
			return 0;
		}
		var_369_bool = var_40_string == (int)12697;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11497, (int)12699, (int)12698);
			return 0;
		}
		var_376_bool = var_40_string == (int)12699;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11499, (int)12701, (int)12700);
			return 0;
		}
		var_383_bool = var_40_string == (int)12701;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11501, (int)-1, (int)12702);
			var_389_bool = 0; var_390_object = Obj();
			var_390_object = var_1_object;
			func_8034(var_390_object);
			if(var_389_bool != 0) {
				@@@var_0_object:AddReply((int)11502, (int)-1, (int)12703);
			}
			return 0;
		}
		var_395_bool = var_40_string == (int)12373;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11189, (int)12375, (int)12374);
			return 0;
		}
		var_402_bool = var_40_string == (int)12375;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11191, (int)-1, (int)12376);
			@@@var_0_object:AddReply((int)11192, (int)-1, (int)12377);
			return 0;
		}
		var_412_bool = var_40_string == (int)12692;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11491, (int)12694, (int)12693);
			return 0;
		}
		var_419_bool = var_40_string == (int)12694;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11493, (int)-1, (int)12695);
			return 0;
		}
		var_426_bool = var_40_string == (int)12361;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11180, (int)12363, (int)12364);
			@@@var_0_object:AddReply((int)11193, (int)12379, (int)12378);
			return 0;
		}
		var_436_bool = var_40_string == (int)12379;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11195, (int)12363, (int)12380);
			@@@var_0_object:AddReply((int)11198, (int)12385, (int)12384);
			return 0;
		}
		var_446_bool = var_40_string == (int)12385;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11200, (int)12366, (int)12386);
			@@@var_0_object:AddReply((int)11201, (int)12363, (int)12388);
			return 0;
		}
		var_456_bool = var_40_string == (int)12363;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11181, (int)12366, (int)12365);
			@@@var_0_object:AddReply((int)11196, (int)12383, (int)12382);
			return 0;
		}
		var_466_bool = var_40_string == (int)12383;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11486, (int)12366, (int)12688);
			return 0;
		}
		var_473_bool = var_40_string == (int)12366;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_5250(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11185, (int)-1, (int)12370);
			@@@var_0_object:AddReply((int)11186, (int)-1, (int)12371);
			return 0;
		}
		var_3_string = true;
		var_482_bool = 0;
		func_7001(var_482_bool);
		if(var_482_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1493";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6878();
		var_45_bool = var_41_bool == (int)12808;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7493();
		}
		var_67_bool = var_41_bool == (int)12802;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_7493();
		}
		var_71_bool = var_41_bool == (int)12819;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_7515();
		}
		var_77_bool = var_41_bool == (int)12820;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_7515();
		}
		var_81_bool = var_41_bool == (int)12821;
		if(var_81_bool != 0) {
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_7515();
		}
		var_85_bool = var_41_bool == (int)12832;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_7521();
		}
		var_91_bool = var_41_bool == (int)12833;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_7521();
		}
		var_95_bool = var_40_string == (int)12786;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11591);
			@@@var_0_object:ClearReplies();
			var_112_bool = 0; var_113_object = Obj();
			var_113_object = var_1_object;
			func_8056(var_113_object);
			if(var_112_bool != 0) {
				@@@var_0_object:AddReply((int)11592, (int)12788, (int)12787);
			}
			var_123_bool = 0;
			var_123_bool = 0;
			var_124_bool = 0; var_125_object = Obj();
			var_125_object = var_1_object;
			func_8085(var_125_object);
			if(var_124_bool != 0) {
				var_130_bool = 0; var_131_object = Obj();
				var_131_object = var_1_object;
				func_8109(var_131_object);
				if(var_130_bool != 0) {
					var_123_bool = 1;
				}
			}
			if(var_123_bool != 0) {
				@@@var_0_object:AddReply((int)11611, (int)12810, (int)12809);
			}
			var_139_bool = 0;
			var_139_bool = 0;
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_8097(var_141_object);
			if(var_140_bool != 0) {
				var_146_bool = 0; var_147_object = Obj();
				var_147_object = var_1_object;
				func_8121(var_147_object);
				if(var_146_bool != 0) {
					var_139_bool = 1;
				}
			}
			if(var_139_bool != 0) {
				@@@var_0_object:AddReply((int)11624, (int)12823, (int)12822);
			}
			@@@var_0_object:AddReply((int)11635, (int)-1, (int)12834);
			return 0;
		}
		var_159_bool = var_40_string == (int)12823;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11625);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11626, (int)12825, (int)12824);
			@@@var_0_object:AddReply((int)11628, (int)12827, (int)12826);
			return 0;
		}
		var_169_bool = var_40_string == (int)12827;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11631, (int)12830, (int)12829);
			return 0;
		}
		var_176_bool = var_40_string == (int)12825;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11627);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11630, (int)12830, (int)12828);
			return 0;
		}
		var_183_bool = var_40_string == (int)12830;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11633, (int)-1, (int)12832);
			@@@var_0_object:AddReply((int)11634, (int)-1, (int)12833);
			return 0;
		}
		var_193_bool = var_40_string == (int)12810;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11612);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11613, (int)12812, (int)12811);
			return 0;
		}
		var_200_bool = var_40_string == (int)12812;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11615, (int)12814, (int)12813);
			return 0;
		}
		var_207_bool = var_40_string == (int)12814;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11616);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11617, (int)12816, (int)12815);
			return 0;
		}
		var_214_bool = var_40_string == (int)12816;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11618);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11619, (int)12818, (int)12817);
			return 0;
		}
		var_221_bool = var_40_string == (int)12818;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11620);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11621, (int)-1, (int)12819);
			@@@var_0_object:AddReply((int)11622, (int)-1, (int)12820);
			@@@var_0_object:AddReply((int)11623, (int)-1, (int)12821);
			return 0;
		}
		var_234_bool = var_40_string == (int)12788;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11593);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11594, (int)12790, (int)12789);
			@@@var_0_object:AddReply((int)11599, (int)12795, (int)12794);
			return 0;
		}
		var_244_bool = var_40_string == (int)12795;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11600);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11601, (int)12790, (int)12796);
			return 0;
		}
		var_251_bool = var_40_string == (int)12790;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11596, (int)12792, (int)12791);
			@@@var_0_object:AddReply((int)11602, (int)12799, (int)12798);
			return 0;
		}
		var_261_bool = var_40_string == (int)12799;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11603);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11604, (int)12792, (int)12800);
			return 0;
		}
		var_268_bool = var_40_string == (int)12792;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11597);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11598, (int)12803, (int)12793);
			@@@var_0_object:AddReply((int)11605, (int)-1, (int)12802);
			return 0;
		}
		var_278_bool = var_40_string == (int)12803;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11607, (int)12805, (int)12804);
			@@@var_0_object:AddReply((int)11609, (int)12805, (int)12806);
			return 0;
		}
		var_288_bool = var_40_string == (int)12805;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_5973(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11610, (int)-1, (int)12808);
			return 0;
		}
		var_3_string = true;
		var_294_bool = 0;
		func_7001(var_294_bool);
		if(var_294_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1766";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	if((int)1 != 0) {
		func_6878();
		var_45_bool = var_41_int == (int)14578;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7567();
		}
		var_51_bool = var_41_int == (int)14583;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_7567();
		}
		var_55_bool = var_40_int == (int)13358;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_6593(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12203);
			@@@var_0_object:ClearReplies();
			var_72_bool = 0;
			var_72_bool = 0;
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_8205(var_74_object);
			if(var_73_bool != 0) {
				var_81_bool = 0; var_82_object = Obj();
				var_82_object = var_1_object;
				func_8217(var_82_object);
				if(var_81_bool != 0) {
					var_72_bool = 1;
				}
			}
			if(var_72_bool != 0) {
				@@@var_0_object:AddReply((int)13340, (int)14573, (int)14572);
			}
			@@@var_0_object:AddReply((int)12204, (int)-1, (int)13359);
			return 0;
		}
		var_94_bool = var_40_int == (int)14573;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_6593(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13341);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13342, (int)14575, (int)14574);
			return 0;
		}
		var_101_bool = var_40_int == (int)14575;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_6593(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13343);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13344, (int)14577, (int)14576);
			return 0;
		}
		var_108_bool = var_40_int == (int)14577;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_6593(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13346, (int)-1, (int)14578);
			@@@var_0_object:AddReply((int)13347, (int)14580, (int)14579);
			return 0;
		}
		var_118_bool = var_40_int == (int)14580;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_6593(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13349, (int)14582, (int)14581);
			return 0;
		}
		var_125_bool = var_40_int == (int)14582;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_6593(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13351, (int)-1, (int)14583);
			return 0;
		}
		var_3_string = true;
		var_131_bool = 0;
		func_7001(var_131_bool);
		if(var_131_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x19d2";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	func_8629();
	var_41_bool = 0;
	func_6795(var_41_bool);
	var_44_bool = var_41_bool == 0; //@nz
	if(var_44_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_45_string = "";
	func_6860("Neutral");
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


func_8193(var_233_bool)
{
	var_235_int = 0; var_236_string = "";
	func_6895(var_235_int, "ood6Alexandr4");
	var_238_bool = var_235_int == (int)0;
	if(var_238_bool != 0) {
		var_233_bool = 1;
		return 0;
	}
	var_233_bool = 0;
	return 0;
}


func_7685(var_281_bool)
{
	var_283_int = 0; var_284_string = "";
	func_6895(var_283_int, "ood1Alexandr5");
	var_286_bool = var_283_int == (int)0;
	if(var_286_bool != 0) {
		var_281_bool = 1;
		return 0;
	}
	var_281_bool = 0;
	return 0;
}


func_8205(var_73_bool)
{
	var_75_int = 0; var_76_string = "";
	func_6895(var_75_int, "d7q02");
	var_80_bool = var_75_int == (int)1;
	if(var_80_bool != 0) {
		var_73_bool = 1;
		return 0;
	}
	var_73_bool = 0;
	return 0;
}


func_7183(var_224_object)
{
	Trace("money 5000 is given");
	var_227_object = Obj(); var_228_string = ""; var_229_int = 0;
	var_224_object = var_227_object;
	func_6776(var_227_object, "money", (int)5000);
	return 0;
}


func_7697(var_297_bool)
{
	var_299_int = 0; var_300_string = "";
	func_6895(var_299_int, "ood1Alexandr6");
	var_302_bool = var_299_int == (int)0;
	if(var_302_bool != 0) {
		var_297_bool = 1;
		return 0;
	}
	var_297_bool = 0;
	return 0;
}


func_3089(var_0_object, var_1_object, var_2_object, var_3_object, var_455_object, var_456_object)
{
	var_0_object = var_456_object;
	var_1_object = var_455_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_462_bool = 0; var_463_object = Obj();
		var_463_object = var_1_object;
		func_7781(var_463_object);
		if(var_462_bool != 0) {
			var_468_object = Obj(); var_469_object = Obj();
			var_468_object = var_1_object;
			var_469_object = var_0_object;
			func_7616();
			var_474_string = "";
			func_3264(var_456_object, "Neutral");
			@@@var_0_object:SetMessage((int)6610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6611, (int)7748, (int)7280);
			@@@var_0_object:AddReply((int)7066, (int)7748, (int)7784);
		} else {
				var_494_bool = 0;
				var_494_bool = 0;
				var_495_bool = 0;
				var_495_bool = 0;
				var_496_bool = 0; var_497_object = Obj();
				var_497_object = var_1_object;
				func_7793(var_497_object);
				if(var_496_bool != 0) {
					var_502_bool = 0; var_503_object = Obj();
					var_503_object = var_1_object;
					func_7863(var_503_object);
					if(var_502_bool != 0) {
						var_495_bool = 1;
					}
				}
				if(var_495_bool != 0) {
					var_504_bool = 0; var_505_object = Obj();
					var_505_object = var_1_object;
					func_7868(var_505_object);
					if(var_504_bool != 0) {
						var_494_bool = 1;
					}
				}
				if(var_494_bool != 0) {
					var_510_string = "";
					func_3264(var_456_object, "Neutral");
					@@@var_0_object:SetMessage((int)6731);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)6732, (int)7420, (int)7419);
					@@@var_0_object:AddReply((int)6742, (int)7420, (int)7430);
					@@@var_0_object:AddReply((int)6743, (int)7433, (int)7432);
					goto Label_3234;
				}
				var_521_string = "";
				func_3264(var_456_object, "Neutral");
				@@@var_0_object:SetMessage((int)6614);
				@@@var_0_object:ClearReplies();
				var_523_bool = 0;
				var_523_bool = 0;
				var_524_bool = 0; var_525_object = Obj();
				var_525_object = var_1_object;
				func_7805(var_525_object);
				if(var_524_bool != 0) {
					var_530_bool = 0; var_531_object = Obj();
					var_531_object = var_1_object;
					func_7851(var_531_object);
					if(var_530_bool != 0) {
						var_523_bool = 1;
					}
				}
				if(var_523_bool != 0) {
					@@@var_0_object:AddReply((int)6615, (int)7282, (int)7284);
				}
				var_539_bool = 0; var_540_object = Obj();
				var_540_object = var_1_object;
				func_7839(var_540_object);
				if(var_539_bool != 0) {
					@@@var_0_object:AddReply((int)6618, (int)7800, (int)7287);
				}
				var_548_bool = 0; var_549_object = Obj();
				var_549_object = var_1_object;
				func_7817(var_549_object);
				if(var_548_bool != 0) {
					@@@var_0_object:AddReply((int)6730, (int)7405, (int)7417);
				}
				@@@var_0_object:AddReply((int)7071, (int)7802, (int)7794);
				@@@var_0_object:AddReply((int)7532, (int)-1, (int)8314);
				goto Label_3234;
		}
	}
Label_3234:
	var_486_bool = 0;
	func_7001(var_486_bool);
	if(var_486_bool != 0) {

	Label_3238:
		lshWaitForAnimEnd();
		var_487_object = var_3_object;
		if(var_487_object != 0) {
		} else {
			var_488_string = "";
			var_488_string = var_2_object;
			func_6860(var_488_string);
			goto Label_3238;
	}
		PlayAnimation("all", "idle");

	Label_3253:
		WaitForAnimEnd();
		var_491_object = var_3_object;
		if(var_491_object != 0) {
			goto Label_3263;
		}
		PlayAnimation("all", "idle");
		goto Label_3253;

	}
	goto Label_3263;
	
Label_3263:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc15";


func_8217(var_81_bool)
{
	var_83_int = 0; var_84_string = "";
	func_6895(var_83_int, "ood7Alexandr1");
	var_86_bool = var_83_int == (int)0;
	if(var_86_bool != 0) {
		var_81_bool = 1;
		return 0;
	}
	var_81_bool = 0;
	return 0;
}


func_7194()
{
	var_52_object = Obj(); var_53_object = Obj();
	func_8402(Obj());
	var_54_object = var_53_object;
	var_65_float = 0;
	func_6960(var_65_float);
	@@var_53_object:AddMark("d1AlexandrAboutKaterina", "pt_map_katerina", (int)3, (int)8640, var_65_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7709(var_313_bool)
{
	var_315_int = 0; var_316_string = "";
	func_6895(var_315_int, "ood1Alexandr7");
	var_318_bool = var_315_int == (int)0;
	if(var_318_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_8229(var_342_bool)
{
	var_344_int = 0; var_345_string = "";
	func_6895(var_344_int, "KnowBigVlad");
	var_347_bool = var_344_int == (int)1;
	if(var_347_bool != 0) {
		var_342_bool = 1;
		return 0;
	}
	var_342_bool = 0;
	return 0;
}


func_7721(var_330_bool)
{
	var_332_int = 0; var_333_string = "";
	func_6895(var_332_int, "ood1Alexandr8");
	var_335_bool = var_332_int == (int)0;
	if(var_335_bool != 0) {
		var_330_bool = 1;
		return 0;
	}
	var_330_bool = 0;
	return 0;
}


func_7210(var_113_object)
{
	var_114_object = Obj(); var_115_string = ""; var_116_float = 0;
	func_8402(Obj());
	var_117_object = var_114_object;
	func_8419(var_114_object, "pt_map_anna", (float)2);
	var_137_object = Obj();
	func_8402(var_137_object);
	@@var_113_object:ShowMap(var_137_object);
	return 0;
}


func_8241(var_324_bool)
{
	var_326_int = 0; var_327_string = "";
	func_6895(var_326_int, "KnowGeorg");
	var_329_bool = var_326_int == (int)1;
	if(var_329_bool != 0) {
		var_324_bool = 1;
		return 0;
	}
	var_324_bool = 0;
	return 0;
}


func_49(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_object = var_45_object;
	var_55_bool = 0; var_56_object = Obj();
	var_45_object = var_56_object;
	func_6800(var_55_bool, var_56_object);
	var_95_bool = var_55_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_96_int = 0;
	func_6997(var_96_int);
	@@var_51_object:SetNPCName(var_96_int);
	var_97_string = "";
	func_6999(var_97_string);
	@@var_51_object:SetPhoto(var_97_string);
	var_98_int = 0;
	func_8452(var_98_int);
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
	func_6856();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7733(var_348_bool)
{
	var_350_int = 0; var_351_string = "";
	func_6895(var_350_int, "ood1Alexandr9");
	var_353_bool = var_350_int == (int)0;
	if(var_353_bool != 0) {
		var_348_bool = 1;
		return 0;
	}
	var_348_bool = 0;
	return 0;
}


func_7226(var_115_object)
{
	var_116_object = Obj(); var_117_string = ""; var_118_float = 0;
	func_8402(Obj());
	var_119_object = var_116_object;
	func_8419(var_116_object, "pt_map_ospina", (float)2);
	var_139_object = Obj();
	func_8402(var_139_object);
	@@var_115_object:ShowMap(var_139_object);
	return 0;
}


func_8253(var_358_bool)
{
	var_360_int = 0; var_361_string = "";
	func_6895(var_360_int, "KnowGrif");
	var_363_bool = var_360_int == (int)1;
	if(var_363_bool != 0) {
		var_358_bool = 1;
		return 0;
	}
	var_358_bool = 0;
	return 0;
}


func_7745(var_364_bool)
{
	var_366_int = 0; var_367_string = "";
	func_6895(var_366_int, "ood1Alexandr10");
	var_369_bool = var_366_int == (int)0;
	if(var_369_bool != 0) {
		var_364_bool = 1;
		return 0;
	}
	var_364_bool = 0;
	return 0;
}


func_8265(var_291_bool)
{
	var_293_int = 0; var_294_string = "";
	func_6895(var_293_int, "KnowKaterina");
	var_296_bool = var_293_int == (int)1;
	if(var_296_bool != 0) {
		var_291_bool = 1;
		return 0;
	}
	var_291_bool = 0;
	return 0;
}


func_7242()
{
	SetVariable("ood3Alexandr1", (int)1);
	return 0;
}


func_7757(var_380_bool)
{
	var_382_int = 0; var_383_string = "";
	func_6895(var_382_int, "ood1Alexandr11");
	var_385_bool = var_382_int == (int)0;
	if(var_385_bool != 0) {
		var_380_bool = 1;
		return 0;
	}
	var_380_bool = 0;
	return 0;
}


func_7248()
{
	SetVariable("ood3Alexandr2", (int)1);
	return 0;
}


func_8277(var_307_bool)
{
	var_309_int = 0; var_310_string = "";
	func_6895(var_309_int, "KnowLara");
	var_312_bool = var_309_int == (int)1;
	if(var_312_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_7254()
{
	SetVariable("ood3Alexandr3", (int)1);
	return 0;
}


func_7769(var_396_bool)
{
	var_398_int = 0; var_399_string = "";
	func_6895(var_398_int, "ood1Alexandr12");
	var_401_bool = var_398_int == (int)0;
	if(var_401_bool != 0) {
		var_396_bool = 1;
		return 0;
	}
	var_396_bool = 0;
	return 0;
}


func_7260()
{
	SetVariable("ood3Alexandr4", (int)1);
	return 0;
}


func_8289(var_275_bool)
{
	var_277_int = 0; var_278_string = "";
	func_6895(var_277_int, "KnowPredictions");
	var_280_bool = var_277_int == (int)1;
	if(var_280_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_7266()
{
	var_62_object = Obj(); var_63_object = Obj();
	SetVariable("d3q01", (int)2);
	func_8402(Obj());
	var_66_object = var_63_object;
	var_77_float = 0;
	func_6960(var_77_float);
	@@var_63_object:AddMark("d3q01AlexandrGotoOspina", "pt_map_ospina", (int)1, (int)11148, var_77_float);
	var_84_float = 0;
	func_6960(var_84_float);
	@@var_63_object:AddMark("d3q01AlexandrGotoOspinaSelf", "pt_map_alexandr", (int)1, (int)15295, var_84_float);
	func_8533();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7781(var_282_bool)
{
	var_284_int = 0; var_285_string = "";
	func_6895(var_284_int, "ood2Alexandr1");
	var_289_bool = var_284_int == (int)0;
	if(var_289_bool != 0) {
		var_282_bool = 1;
		return 0;
	}
	var_282_bool = 0;
	return 0;
}


func_8301(var_374_bool)
{
	var_376_int = 0; var_377_string = "";
	func_6895(var_376_int, "KnowStamatins");
	var_379_bool = var_376_int == (int)1;
	if(var_379_bool != 0) {
		var_374_bool = 1;
		return 0;
	}
	var_374_bool = 0;
	return 0;
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
		func_7573();
		var_118_string = "";
		func_180(var_108_object, "Neutral");
		@@@var_0_object:SetMessage((int)287);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)288, (int)340, (int)337);
		@@@var_0_object:AddReply((int)289, (int)340, (int)338);
		@@@var_0_object:AddReply((int)290, (int)340, (int)339);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_143_bool = 0;
	func_7001(var_143_bool);
	if(var_143_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_144_object = var_3_object;
		if(var_144_object != 0) {
		} else {
			var_145_string = "";
			var_145_string = var_2_object;
			func_6860(var_145_string);
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


func_7793(var_320_bool)
{
	var_322_int = 0; var_323_string = "";
	func_6895(var_322_int, "ood2Alexandr2");
	var_325_bool = var_322_int == (int)0;
	if(var_325_bool != 0) {
		var_320_bool = 1;
		return 0;
	}
	var_320_bool = 0;
	return 0;
}


func_4210(var_0_object, var_567_int, var_568_object)
{
	var_570_object = Obj(); var_571_bool = 0; var_572_int = 0; var_573_bool = 0; var_574_object = Obj(); var_575_bool = 0; var_576_int = 0; var_577_bool = 0;
	var_0_object = var_568_object;
	var_578_bool = 0; var_579_object = Obj();
	var_568_object = var_579_object;
	func_6800(var_578_bool, var_579_object);
	var_580_bool = var_578_bool == 0; //@nz
	if(var_580_bool != 0) {
		var_567_int = -2;
		return 8;
	}
	CreateDialog(var_574_object);
	var_581_int = 0;
	func_6997(var_581_int);
	@@var_574_object:SetNPCName(var_581_int);
	var_582_string = "";
	func_6999(var_582_string);
	@@var_574_object:SetPhoto(var_582_string);
	var_583_int = 0;
	func_8452(var_583_int);
	@@var_574_object:SetPlayerName(var_583_int);
	IsOverrideActive(var_575_bool);
	var_584_bool = var_575_bool;
	if(var_584_bool != 0) {
		var_567_int = -2;
		return 8;
	}
	DoDialog(var_574_object);
	var_585_object = Obj(); var_586_object = Obj();
	var_568_object = var_585_object;
	var_574_object = var_586_object;
	TaskCall(11);
	func_4273(var_587_object, var_588_object, var_589_string, var_590_bool, var_585_object, var_586_object);
	TaskReturn();
	@@var_574_object:IsDialogEnd(var_577_bool);
	
Label_4255:
	var_669_bool = var_577_bool == 0; //@nz
	if(var_669_bool != 0) {
		sync();
		@@var_574_object:IsDialogEnd(var_577_bool);
		goto Label_4255;
	}
	var_568_object = Obj();
	func_6856();
	StopDialog(var_574_object);
	@@var_574_object:GetReturnValue((int)-1);
	var_576_int = var_567_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6776(var_227_object, var_228_string, var_229_int)
{
	var_230_int = 0; var_231_int = 0;
	@@var_227_object:GetProperty(var_228_string, var_231_int);
	var_232_int = var_231_int + var_229_int;
	@@var_227_object:SetProperty(var_228_string, var_232_int);
	return 2;
}


func_8313(var_482_bool)
{
	var_484_int = 0; var_485_string = "";
	func_6895(var_484_int, "KnowUklad");
	var_487_bool = var_484_int == (int)1;
	if(var_487_bool != 0) {
		var_482_bool = 1;
		return 0;
	}
	var_482_bool = 0;
	return 0;
}


func_7805(var_348_bool)
{
	var_350_int = 0; var_351_string = "";
	func_6895(var_350_int, "ood2Alexandr3");
	var_353_bool = var_350_int == (int)0;
	if(var_353_bool != 0) {
		var_348_bool = 1;
		return 0;
	}
	var_348_bool = 0;
	return 0;
}


func_6783(var_41_bool, var_42_object)
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


func_7298(var_230_object)
{
	var_231_object = Obj(); var_232_string = ""; var_233_float = 0;
	func_8402(Obj());
	var_234_object = var_231_object;
	func_8419(var_231_object, "pt_map_bigvlad", (float)2);
	var_235_object = Obj();
	func_8402(var_235_object);
	@@var_230_object:ShowMap(var_235_object);
	return 0;
}


func_5250(var_2_object, var_279_string)
{
	var_280_bool = 0;
	func_7001(var_280_bool);
	var_281_bool = var_280_bool == 0; //@nz
	if(var_281_bool != 0) {
		return 0;
	}
	var_282_bool = var_279_string == var_2_object;
	if(var_282_bool != 0) {
		return 0;
	}
	var_283_string = "";
	var_279_string = var_283_string;
	func_6860(var_283_string);
	var_2_object = var_279_string;
	return 0;
}


func_8325(var_346_bool)
{
	var_346_bool = 0;
	return 0;
}


func_8328(var_213_bool)
{
	var_215_int = 0;
	func_6974(var_215_int);
	var_221_bool = var_215_int >= (int)18;
	if(var_221_bool != 0) {
		var_213_bool = 1;
		return 0;
	}
	var_213_bool = 0;
	return 0;
}


func_7817(var_372_bool)
{
	var_374_int = 0; var_375_string = "";
	func_6895(var_374_int, "ood2Alexandr5");
	var_377_bool = var_374_int == (int)0;
	if(var_377_bool != 0) {
		var_372_bool = 1;
		return 0;
	}
	var_372_bool = 0;
	return 0;
}


func_6795(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0;
	IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
	return 2;
}


func_6800(var_55_bool, var_56_object)
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
	func_6885(var_80_cvector, var_81_cvector);
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


func_7314(var_189_object)
{
	var_191_int = 0; var_192_int = 0;
	func_8501();
	@@var_189_object:RemoveItemByType(var_192_int, "d2q01_key", (int)1);
	return 2;
}


func_8339(var_234_bool)
{
	var_236_bool = 0;
	var_236_bool = 0;
	var_237_int = 0;
	func_6974(var_237_int);
	var_239_bool = var_237_int >= (int)12;
	if(var_239_bool != 0) {
		var_240_int = 0;
		func_6974(var_240_int);
		var_242_bool = var_240_int < (int)18;
		if(var_242_bool != 0) {
			var_236_bool = 1;
		}
	}
	if(var_236_bool != 0) {
		var_234_bool = 1;
		return 0;
	}
	var_234_bool = 0;
	return 0;
}


func_7829(var_344_bool, var_345_object)
{
	var_346_bool = 0; var_347_object = Obj();
	var_345_object = var_347_object;
	func_8325(var_347_object);
	if(var_346_bool != 0) {
		var_344_bool = 1;
		return 0;
	}
	var_344_bool = 0;
	return 0;
}


func_7323()
{
	SetVariable("ood4Alexandr1", (int)1);
	return 0;
}


func_7839(var_363_bool)
{
	var_365_int = 0; var_366_string = "";
	func_6895(var_365_int, "d2q01");
	var_368_bool = var_365_int == (int)0;
	if(var_368_bool != 0) {
		var_363_bool = 1;
		return 0;
	}
	var_363_bool = 0;
	return 0;
}


func_7329()
{
	var_52_object = Obj(); var_53_object = Obj();
	func_8402(Obj());
	var_54_object = var_53_object;
	var_65_float = 0;
	func_6960(var_65_float);
	@@var_53_object:AddMark("d4q03AlexandrGotoGrif", "pt_map_grif", (int)0, (int)11487, var_65_float);
	var_72_float = 0;
	func_6960(var_72_float);
	@@var_53_object:AddMark("d4q03AlexandrGotoGrifSelf", "pt_map_alexandr", (int)0, (int)15330, var_72_float);
	func_8549();
	func_8565();
	var_107_object = Obj(); var_108_string = "";
	func_6911(var_107_object, "quest_d4_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_8360(var_88_object)
{
	var_89_object = Obj(); var_90_object = Obj();
	GetDiaryRoot(var_90_object);
	var_91_bool = var_90_object == 0; //@nz
	if(var_91_bool != 0) {
		Trace("Can't retrieve diary root");
		var_88_object = 0;
		return 2;
	}
	var_90_object = var_88_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7851(var_354_bool)
{
	var_356_int = 0; var_357_string = "";
	func_6895(var_356_int, "d2q01");
	var_359_bool = var_356_int == (int)5;
	if(var_359_bool != 0) {
		var_354_bool = 1;
		return 0;
	}
	var_354_bool = 0;
	return 0;
}


func_4273(var_0_object, var_1_object, var_2_object, var_3_object, var_585_object, var_586_object)
{
	var_0_object = var_586_object;
	var_1_object = var_585_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_592_bool = 0;
		var_592_bool = 0;
		var_593_bool = 0; var_594_object = Obj();
		var_594_object = var_1_object;
		func_7928(var_594_object);
		if(var_593_bool != 0) {
			var_599_bool = 0; var_600_object = Obj();
			var_600_object = var_1_object;
			func_7916(var_600_object);
			if(var_599_bool != 0) {
				var_592_bool = 1;
			}
		}
		if(var_592_bool != 0) {
			var_605_string = "";
			func_4409(var_586_object, "Neutral");
			@@@var_0_object:SetMessage((int)9086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9087, (int)9969, (int)9965);
			@@@var_0_object:AddReply((int)9088, (int)9967, (int)9966);
		} else {
				var_625_string = "";
				func_4409(var_586_object, "Neutral");
				@@@var_0_object:SetMessage((int)8854);
				@@@var_0_object:ClearReplies();
				var_627_bool = 0;
				var_627_bool = 0;
				var_628_bool = 0; var_629_object = Obj();
				var_629_object = var_1_object;
				func_7892(var_629_object);
				if(var_628_bool != 0) {
					var_634_bool = 0; var_635_object = Obj();
					var_635_object = var_1_object;
					func_7952(var_635_object);
					if(var_634_bool != 0) {
						var_627_bool = 1;
					}
				}
				if(var_627_bool != 0) {
					@@@var_0_object:AddReply((int)8840, (int)9693, (int)9692);
				}
				var_643_bool = 0; var_644_object = Obj();
				var_644_object = var_1_object;
				func_7880(var_644_object);
				if(var_643_bool != 0) {
					@@@var_0_object:AddReply((int)8855, (int)9687, (int)9711);
				}
				var_652_bool = 0; var_653_object = Obj();
				var_653_object = var_1_object;
				func_7904(var_653_object);
				if(var_652_bool != 0) {
					@@@var_0_object:AddReply((int)8856, (int)9691, (int)9712);
				}
				var_661_bool = 0; var_662_object = Obj();
				var_662_object = var_1_object;
				func_8068(var_662_object);
				if(var_661_bool != 0) {
					@@@var_0_object:AddReply((int)11978, (int)13175, (int)13193);
				}
				@@@var_0_object:AddReply((int)11133, (int)-1, (int)12322);
				goto Label_4379;
		}
	}
Label_4379:
	var_617_bool = 0;
	func_7001(var_617_bool);
	if(var_617_bool != 0) {

	Label_4383:
		lshWaitForAnimEnd();
		var_618_object = var_3_object;
		if(var_618_object != 0) {
		} else {
			var_619_string = "";
			var_619_string = var_2_object;
			func_6860(var_619_string);
			goto Label_4383;
	}
		PlayAnimation("all", "idle");

	Label_4398:
		WaitForAnimEnd();
		var_622_object = var_3_object;
		if(var_622_object != 0) {
			goto Label_4408;
		}
		PlayAnimation("all", "idle");
		goto Label_4398;

	}
	goto Label_4408;
	
Label_4408:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x10b5";


func_5809(var_0_object, var_781_int, var_782_object)
{
	var_784_object = Obj(); var_785_bool = 0; var_786_int = 0; var_787_bool = 0; var_788_object = Obj(); var_789_bool = 0; var_790_int = 0; var_791_bool = 0;
	var_0_object = var_782_object;
	var_792_bool = 0; var_793_object = Obj();
	var_782_object = var_793_object;
	func_6800(var_792_bool, var_793_object);
	var_794_bool = var_792_bool == 0; //@nz
	if(var_794_bool != 0) {
		var_781_int = -2;
		return 8;
	}
	CreateDialog(var_788_object);
	var_795_int = 0;
	func_6997(var_795_int);
	@@var_788_object:SetNPCName(var_795_int);
	var_796_string = "";
	func_6999(var_796_string);
	@@var_788_object:SetPhoto(var_796_string);
	var_797_int = 0;
	func_8452(var_797_int);
	@@var_788_object:SetPlayerName(var_797_int);
	IsOverrideActive(var_789_bool);
	var_798_bool = var_789_bool;
	if(var_798_bool != 0) {
		var_781_int = -2;
		return 8;
	}
	DoDialog(var_788_object);
	var_799_object = Obj(); var_800_object = Obj();
	var_782_object = var_799_object;
	var_788_object = var_800_object;
	TaskCall(15);
	func_5872(var_801_object, var_802_object, var_803_string, var_804_bool, var_799_object, var_800_object);
	TaskReturn();
	@@var_788_object:IsDialogEnd(var_791_bool);
	
Label_5854:
	var_864_bool = var_791_bool == 0; //@nz
	if(var_864_bool != 0) {
		sync();
		@@var_788_object:IsDialogEnd(var_791_bool);
		goto Label_5854;
	}
	var_782_object = Obj();
	func_6856();
	StopDialog(var_788_object);
	@@var_788_object:GetReturnValue((int)-1);
	var_790_int = var_781_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_180(var_2_object, var_50_string)
{
	var_51_bool = 0;
	func_7001(var_51_bool);
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
	func_6860(var_54_string);
	var_2_object = var_50_string;
	return 0;
}


func_8373(var_79_bool, var_80_object, var_81_int)
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0; var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0;
	func_8360(Obj());
	var_88_object = var_85_object;
	@@var_85_object:Find(var_81_int, var_86_object);
	var_93_bool = var_86_object == 0; //@nz
	if(var_93_bool != 0) {
		var_95_int = "Can't find diary parent with id: " + var_81_int;
		Trace(var_95_int);
		var_79_bool = 0;
		return 6;
	}
	@@var_86_object:AddChild(var_80_object);
	SetVariable("player_diary", (int)1);
	@@var_80_object:GetCategory(var_87_int);
	SetDiarySection(var_87_int);
	var_79_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_7863(var_326_bool)
{
	var_326_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_7868(var_328_bool)
{
	var_330_int = 0; var_331_string = "";
	func_6895(var_330_int, "d2q01BigVladVisit");
	var_333_bool = var_330_int == (int)1;
	if(var_333_bool != 0) {
		var_328_bool = 1;
		return 0;
	}
	var_328_bool = 0;
	return 0;
}


func_3264(var_2_object, var_296_string)
{
	var_297_bool = 0;
	func_7001(var_297_bool);
	var_298_bool = var_297_bool == 0; //@nz
	if(var_298_bool != 0) {
		return 0;
	}
	var_299_bool = var_296_string == var_2_object;
	if(var_299_bool != 0) {
		return 0;
	}
	var_300_string = "";
	var_296_string = var_300_string;
	func_6860(var_300_string);
	var_2_object = var_296_string;
	return 0;
}


func_1732(var_2_object, var_168_string)
{
	var_169_bool = 0;
	func_7001(var_169_bool);
	var_170_bool = var_169_bool == 0; //@nz
	if(var_170_bool != 0) {
		return 0;
	}
	var_171_bool = var_168_string == var_2_object;
	if(var_171_bool != 0) {
		return 0;
	}
	var_172_string = "";
	var_168_string = var_172_string;
	func_6860(var_172_string);
	var_2_object = var_168_string;
	return 0;
}


func_7364(var_135_object)
{
	var_136_object = Obj(); var_137_string = ""; var_138_float = 0;
	func_8402(Obj());
	var_139_object = var_136_object;
	func_8419(var_136_object, "pt_map_grif", (float)2);
	var_159_object = Obj();
	func_8402(var_159_object);
	@@var_135_object:ShowMap(var_159_object);
	return 0;
}


func_6856()
{
	CameraSwitchToNormal();
	return 0;
}


func_7880(var_215_bool)
{
	var_217_int = 0; var_218_string = "";
	func_6895(var_217_int, "ood3Alexandr1");
	var_220_bool = var_217_int == (int)0;
	if(var_220_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_6860(var_45_string)
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


func_8402(var_52_object)
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


func_7892(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_6895(var_202_int, "ood3Alexandr2");
	var_205_bool = var_202_int == (int)0;
	if(var_205_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_7380()
{
	SetVariable("ood4Alexandr2", (int)1);
	return 0;
}


func_7386()
{
	var_184_object = Obj(); var_185_object = Obj();
	SetVariable("d4q03", (int)3);
	func_8402(Obj());
	var_188_object = var_185_object;
	var_193_float = 0;
	func_6960(var_193_float);
	@@var_185_object:AddMark("d4q03AlexandrAboutVolnica", "pt_map_warehouse_gangster", (int)0, (int)11494, var_193_float);
	func_8581();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6878()
{
	var_43_bool = 0;
	func_7001(var_43_bool);
	if(var_43_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_7904(var_224_bool)
{
	var_226_int = 0; var_227_string = "";
	func_6895(var_226_int, "ood3Alexandr3");
	var_229_bool = var_226_int == (int)0;
	if(var_229_bool != 0) {
		var_224_bool = 1;
		return 0;
	}
	var_224_bool = 0;
	return 0;
}


func_8419(var_136_object, var_137_string, var_138_float)
{
	var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_object = Obj(); var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_object = Obj(); var_147_bool = 0;
	GetMainOutdoorScene(var_146_object);
	var_148_bool = var_146_object == 0; //@ne
	if(var_148_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_146_object:GetLocator(var_137_string, var_147_bool, var_144_cvector, var_145_cvector);
	var_150_bool = var_147_bool == 0; //@nz
	if(var_150_bool != 0) {
		var_152_int = "Warning: outdoor scene locator " + var_137_string;
		var_154_int = var_152_int + " doesnt exist";
		Trace(var_154_int);
	}
	@@var_146_object:GetMap(var_136_object);
	var_155_bool = var_136_object == 0; //@ne
	if(var_155_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_157_float = GetByIndex(var_144_cvector, 0);
	var_158_float = GetByIndex(var_144_cvector, 2);
	@@var_136_object:SetMapParams(var_157_float, var_158_float, var_138_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_6885(var_80_cvector, var_81_cvector)
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


func_7916(var_169_bool)
{
	var_171_int = 0; var_172_string = "";
	func_6895(var_171_int, "ood3Alexandr4");
	var_174_bool = var_171_int == (int)0;
	if(var_174_bool != 0) {
		var_169_bool = 1;
		return 0;
	}
	var_169_bool = 0;
	return 0;
}


func_6895(var_75_int, var_76_string)
{
	var_77_int = 0; var_78_int = 0;
	GetVariable(var_76_string, var_78_int);
	var_78_int = var_75_int;
	return 2;
}


func_5872(var_0_object, var_1_object, var_2_object, var_3_object, var_799_object, var_800_object)
{
	var_0_object = var_800_object;
	var_1_object = var_799_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_806_string = "";
		func_5973(var_800_object, "Neutral");
		@@@var_0_object:SetMessage((int)11591);
		@@@var_0_object:ClearReplies();
		var_812_bool = 0; var_813_object = Obj();
		var_813_object = var_1_object;
		func_8056(var_813_object);
		if(var_812_bool != 0) {
			@@@var_0_object:AddReply((int)11592, (int)12788, (int)12787);
		}
		var_821_bool = 0;
		var_821_bool = 0;
		var_822_bool = 0; var_823_object = Obj();
		var_823_object = var_1_object;
		func_8085(var_823_object);
		if(var_822_bool != 0) {
			var_828_bool = 0; var_829_object = Obj();
			var_829_object = var_1_object;
			func_8109(var_829_object);
			if(var_828_bool != 0) {
				var_821_bool = 1;
			}
		}
		if(var_821_bool != 0) {
			@@@var_0_object:AddReply((int)11611, (int)12810, (int)12809);
		}
		var_837_bool = 0;
		var_837_bool = 0;
		var_838_bool = 0; var_839_object = Obj();
		var_839_object = var_1_object;
		func_8097(var_839_object);
		if(var_838_bool != 0) {
			var_844_bool = 0; var_845_object = Obj();
			var_845_object = var_1_object;
			func_8121(var_845_object);
			if(var_844_bool != 0) {
				var_837_bool = 1;
			}
		}
		if(var_837_bool != 0) {
			@@@var_0_object:AddReply((int)11624, (int)12823, (int)12822);
		}
		@@@var_0_object:AddReply((int)11635, (int)-1, (int)12834);
		goto Label_5943;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16f4";
	}
Label_5943:
	var_856_bool = 0;
	func_7001(var_856_bool);
	if(var_856_bool != 0) {

	Label_5947:
		lshWaitForAnimEnd();
		var_857_object = var_3_object;
		if(var_857_object != 0) {
		} else {
			var_858_string = "";
			var_858_string = var_2_object;
			func_6860(var_858_string);
			goto Label_5947;
	}
		PlayAnimation("all", "idle");

	Label_5962:
		WaitForAnimEnd();
		var_861_object = var_3_object;
		if(var_861_object != 0) {
			goto Label_5972;
		}
		PlayAnimation("all", "idle");
		goto Label_5962;
	}
	goto Label_5972;
	
Label_5972:
	return 0;
	
}


func_7409()
{
	var_239_object = Obj(); var_240_object = Obj(); var_241_object = Obj(); var_242_object = Obj();
	func_8402(Obj());
	var_243_object = var_241_object;
	@@var_241_object:FindMark(var_242_object, "d4q03AlexandrAboutVolnica");
	var_245_object = var_242_object;
	if(var_245_object != 0) {
		@@var_242_object:Remove();
	}
	@@var_241_object:FindMark(var_242_object, "d4q03AlexandrGotoGrif");
	var_247_object = var_242_object;
	if(var_247_object != 0) {
		@@var_242_object:Remove();
	}
	@@var_241_object:FindMark(var_242_object, "d4q03AlexandrGotoGrifSelf");
	var_249_object = var_242_object;
	if(var_249_object != 0) {
		@@var_242_object:Remove();
	}
	@@var_241_object:FindMark(var_242_object, "d4q03GrifGotoAlexandr");
	var_251_object = var_242_object;
	if(var_251_object != 0) {
		@@var_242_object:Remove();
	}
	@@var_241_object:FindMark(var_242_object, "d4q03GrifGotoAlexandrSelf");
	var_253_object = var_242_object;
	if(var_253_object != 0) {
		@@var_242_object:Remove();
	}
	func_8597();
	var_263_bool = 0; var_264_string = ""; var_265_string = "";
	func_6948(var_263_bool, "quest_d4_03", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6900(var_104_object, var_105_string)
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


func_7928(var_161_bool)
{
	var_163_int = 0; var_164_string = "";
	func_6895(var_163_int, "d3q01");
	var_168_bool = var_163_int == (int)8;
	if(var_168_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_6911(var_107_object, var_108_string)
{
	var_109_object = Obj(); var_110_object = Obj(); var_111_object = Obj(); var_112_object = Obj();
	GetMainOutdoorScene(var_111_object);
	var_114_int = var_108_string + ".xml";
	AddBlankActorFromXml(var_112_object, var_111_object, var_108_string, var_114_int);
	var_112_object = var_107_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8452(var_98_int)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable("player", var_100_int);
	var_103_bool = var_100_int == (int)0;
	if(var_103_bool != 0) {
		var_98_int = 200001;
		return 2;
	EMIT "GOTO 0x2113";
	}
	var_105_bool = var_100_int == (int)1;
	if(var_105_bool != 0) {
		var_98_int = 200002;
		return 2;
	}
	var_98_int = 200003;
	return 2;
}


func_7940(var_390_bool)
{
	var_392_int = 0; var_393_string = "";
	func_6895(var_392_int, "KnowRubin");
	var_395_bool = var_392_int == (int)1;
	if(var_395_bool != 0) {
		var_390_bool = 1;
		return 0;
	}
	var_390_bool = 0;
	return 0;
}


func_6922(var_123_object, var_124_object, var_125_int)
{
	var_126_int = 0; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_int = 0; var_131_bool = 0;
	@@var_124_object:GetItemID(var_129_int);
	GetInvItemProperty(var_130_int, var_129_int, "Category");
	@@var_123_object:AddItem(var_131_bool, var_124_object, var_130_int, var_125_int);
	var_133_bool = var_131_bool == 0; //@nz
	if(var_133_bool != 0) {
		@@var_123_object:DropItems(var_124_object, var_125_int);
	}
	return 6;
}


func_271(var_0_object, var_868_int, var_869_object)
{
	var_871_object = Obj(); var_872_bool = 0; var_873_int = 0; var_874_bool = 0; var_875_object = Obj(); var_876_bool = 0; var_877_int = 0; var_878_bool = 0;
	var_0_object = var_869_object;
	var_879_bool = 0; var_880_object = Obj();
	var_869_object = var_880_object;
	func_6800(var_879_bool, var_880_object);
	var_881_bool = var_879_bool == 0; //@nz
	if(var_881_bool != 0) {
		var_868_int = -2;
		return 8;
	}
	CreateDialog(var_875_object);
	var_882_int = 0;
	func_6997(var_882_int);
	@@var_875_object:SetNPCName(var_882_int);
	var_883_string = "";
	func_6999(var_883_string);
	@@var_875_object:SetPhoto(var_883_string);
	var_884_int = 0;
	func_8452(var_884_int);
	@@var_875_object:SetPlayerName(var_884_int);
	IsOverrideActive(var_876_bool);
	var_885_bool = var_876_bool;
	if(var_885_bool != 0) {
		var_868_int = -2;
		return 8;
	}
	DoDialog(var_875_object);
	var_886_object = Obj(); var_887_object = Obj();
	var_869_object = var_886_object;
	var_875_object = var_887_object;
	TaskCall(5);
	func_334(var_888_object, var_889_object, var_890_string, var_891_bool, var_886_object, var_887_object);
	TaskReturn();
	@@var_875_object:IsDialogEnd(var_878_bool);
	
Label_316:
	var_979_bool = var_878_bool == 0; //@nz
	if(var_979_bool != 0) {
		sync();
		@@var_875_object:IsDialogEnd(var_878_bool);
		goto Label_316;
	}
	var_869_object = Obj();
	func_6856();
	StopDialog(var_875_object);
	@@var_875_object:GetReturnValue((int)-1);
	var_877_int = var_868_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7952(var_206_bool)
{
	var_208_int = 0; var_209_string = "";
	func_6895(var_208_int, "d3q01");
	var_211_bool = var_208_int == (int)1;
	if(var_211_bool != 0) {
		var_206_bool = 1;
		return 0;
	}
	var_206_bool = 0;
	return 0;
}


func_8469()
{
	var_70_object = Obj(); var_71_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_71_object, (int)10, (int)1, (int)3081);
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0;
	var_71_object = var_77_object;
	func_8373(var_76_bool, var_77_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1301(var_0_object, var_162_int, var_163_object)
{
	var_165_object = Obj(); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_object = Obj(); var_170_bool = 0; var_171_int = 0; var_172_bool = 0;
	var_0_object = var_163_object;
	var_173_bool = 0; var_174_object = Obj();
	var_163_object = var_174_object;
	func_6800(var_173_bool, var_174_object);
	var_175_bool = var_173_bool == 0; //@nz
	if(var_175_bool != 0) {
		var_162_int = -2;
		return 8;
	}
	CreateDialog(var_169_object);
	var_176_int = 0;
	func_6997(var_176_int);
	@@var_169_object:SetNPCName(var_176_int);
	var_177_string = "";
	func_6999(var_177_string);
	@@var_169_object:SetPhoto(var_177_string);
	var_178_int = 0;
	func_8452(var_178_int);
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
	func_1364(var_182_object, var_183_object, var_184_string, var_185_bool, var_180_object, var_181_object);
	TaskReturn();
	@@var_169_object:IsDialogEnd(var_172_bool);
	
Label_1346:
	var_433_bool = var_172_bool == 0; //@nz
	if(var_433_bool != 0) {
		sync();
		@@var_169_object:IsDialogEnd(var_172_bool);
		goto Label_1346;
	}
	var_163_object = Obj();
	func_6856();
	StopDialog(var_169_object);
	@@var_169_object:GetReturnValue((int)-1);
	var_171_int = var_162_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6935(var_118_object, var_119_string, var_120_int)
{
	var_121_object = Obj(); var_122_object = Obj();
	CreateInvItem(var_122_object);
	@@var_122_object:SetItemName(var_119_string);
	var_123_object = Obj(); var_124_object = Obj(); var_125_int = 0;
	var_118_object = var_123_object;
	var_122_object = var_124_object;
	var_120_int = var_125_int;
	func_6922(var_123_object, var_124_object, var_125_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7964(var_211_bool, var_212_object)
{
	var_213_bool = 0; var_214_object = Obj();
	var_212_object = var_214_object;
	func_8328(var_214_object);
	if(var_213_bool != 0) {
		var_211_bool = 1;
		return 0;
	}
	var_211_bool = 0;
	return 0;
}


func_7460(var_204_object)
{
	var_205_object = Obj(); var_206_string = ""; var_207_float = 0;
	func_8402(Obj());
	var_208_object = var_205_object;
	func_8419(var_205_object, "pt_map_warehouse_gangster", (float)2);
	var_209_object = Obj();
	func_8402(var_209_object);
	@@var_204_object:ShowMap(var_209_object);
	return 0;
}


func_8485()
{
	var_95_object = Obj(); var_96_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_96_object, (int)50, (int)1, (int)12132);
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0;
	var_96_object = var_102_object;
	func_8373(var_101_bool, var_102_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7974(var_271_bool)
{
	var_273_int = 0; var_274_string = "";
	func_6895(var_273_int, "ood4Alexandr1");
	var_278_bool = var_273_int == (int)0;
	if(var_278_bool != 0) {
		var_271_bool = 1;
		return 0;
	}
	var_271_bool = 0;
	return 0;
}


func_6948(var_263_bool, var_264_string, var_265_string)
{
	var_266_object = Obj(); var_267_object = Obj();
	FindActor(var_267_object, var_264_string);
	var_268_bool = var_267_object == 0; //@ne
	if(var_268_bool != 0) {
		var_263_bool = 0;
		return 2;
	}
	Trigger(var_267_object, var_265_string);
	var_263_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6960(var_63_float)
{
	var_64_float = 0; var_65_float = 0;
	GetGameTime(var_65_float);
	var_65_float = var_63_float;
	return 2;
}


func_7986(var_303_bool)
{
	var_305_int = 0; var_306_string = "";
	func_6895(var_305_int, "d4q03");
	var_308_bool = var_305_int == (int)0;
	if(var_308_bool != 0) {
		var_303_bool = 1;
		return 0;
	}
	var_303_bool = 0;
	return 0;
}


func_7476(var_115_object)
{
	Trace("revolver ammo6 is given");
	var_118_object = Obj(); var_119_string = ""; var_120_int = 0;
	var_115_object = var_118_object;
	func_6935(var_118_object, "revolver_ammo", (int)6);
	return 0;
}


func_6965(var_156_int)
{
	var_157_float = 0; var_158_float = 0;
	GetGameTime(var_158_float);
	var_160_int = 0;
	var_160_int = var_158_float / (int)24;
	var_156_int = (int)1 + var_160_int;
	return 2;
}


func_8501()
{
	var_193_object = Obj(); var_194_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_194_object, (int)55, (int)1, (int)12137);
	var_199_bool = 0; var_200_object = Obj(); var_201_int = 0;
	var_194_object = var_200_object;
	func_8373(var_199_bool, var_200_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4409(var_2_object, var_175_string)
{
	var_176_bool = 0;
	func_7001(var_176_bool);
	var_177_bool = var_176_bool == 0; //@nz
	if(var_177_bool != 0) {
		return 0;
	}
	var_178_bool = var_175_string == var_2_object;
	if(var_178_bool != 0) {
		return 0;
	}
	var_179_string = "";
	var_175_string = var_179_string;
	func_6860(var_179_string);
	var_2_object = var_175_string;
	return 0;
}


func_6458(var_0_object, var_983_int, var_984_object)
{
	var_986_object = Obj(); var_987_bool = 0; var_988_int = 0; var_989_bool = 0; var_990_object = Obj(); var_991_bool = 0; var_992_int = 0; var_993_bool = 0;
	var_0_object = var_984_object;
	var_994_bool = 0; var_995_object = Obj();
	var_984_object = var_995_object;
	func_6800(var_994_bool, var_995_object);
	var_996_bool = var_994_bool == 0; //@nz
	if(var_996_bool != 0) {
		var_983_int = -2;
		return 8;
	}
	CreateDialog(var_990_object);
	var_997_int = 0;
	func_6997(var_997_int);
	@@var_990_object:SetNPCName(var_997_int);
	var_998_string = "";
	func_6999(var_998_string);
	@@var_990_object:SetPhoto(var_998_string);
	var_999_int = 0;
	func_8452(var_999_int);
	@@var_990_object:SetPlayerName(var_999_int);
	IsOverrideActive(var_991_bool);
	var_1000_bool = var_991_bool;
	if(var_1000_bool != 0) {
		var_983_int = -2;
		return 8;
	}
	DoDialog(var_990_object);
	var_1001_object = Obj(); var_1002_object = Obj();
	var_984_object = var_1001_object;
	var_990_object = var_1002_object;
	TaskCall(17);
	func_6521(var_1003_object, var_1004_object, var_1005_string, var_1006_bool, var_1001_object, var_1002_object);
	TaskReturn();
	@@var_990_object:IsDialogEnd(var_993_bool);
	
Label_6503:
	var_1041_bool = var_993_bool == 0; //@nz
	if(var_1041_bool != 0) {
		sync();
		@@var_990_object:IsDialogEnd(var_993_bool);
		goto Label_6503;
	}
	var_984_object = Obj();
	func_6856();
	StopDialog(var_990_object);
	@@var_990_object:GetReturnValue((int)-1);
	var_992_int = var_983_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7998(var_313_bool)
{
	var_315_int = 0; var_316_string = "";
	func_6895(var_315_int, "ood4Alexandr2");
	var_318_bool = var_315_int == (int)0;
	if(var_318_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_7487()
{
	SetVariable("ood4Alexandr3", (int)1);
	return 0;
}


func_6974(var_215_int)
{
	var_216_float = 0; var_217_float = 0;
	GetGameTime(var_217_float);
	var_218_int = 0;
	var_217_float = var_218_int;
	var_215_int = var_218_int % (int)24;
	return 2;
}


func_7493()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("d5q01", (int)3);
	func_8402(Obj());
	var_52_object = var_49_object;
	var_63_float = 0;
	func_6960(var_63_float);
	@@var_49_object:AddMark("d5q01AlexandrGotoKaterina", "pt_map_katerina", (int)1, (int)11958, var_63_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8517()
{
	var_162_object = Obj(); var_163_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_163_object, (int)56, (int)1, (int)12138);
	var_168_bool = 0; var_169_object = Obj(); var_170_int = 0;
	var_163_object = var_169_object;
	func_8373(var_168_bool, var_169_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6982(var_154_bool, var_155_int)
{
	var_156_int = 0;
	func_6965(var_156_int);
	var_154_bool = var_156_int == var_155_int;
	return 0;
}


func_8010(var_319_bool)
{
	var_321_int = 0; var_322_string = "";
	func_6895(var_321_int, "d4q03");
	var_324_bool = var_321_int == (int)2;
	if(var_324_bool != 0) {
		var_319_bool = 1;
		return 0;
	}
	var_319_bool = 0;
	return 0;
}


func_6988(var_1043_bool)
{
	var_1044_bool = 0; var_1045_bool = 0;
	var_1046_string = "";
	func_6860("No");
	lshWaitForAnimEnd(var_1045_bool);
	var_1045_bool = var_1043_bool;
	return 2;
}


func_334(var_0_object, var_1_object, var_2_object, var_3_object, var_886_object, var_887_object)
{
	var_0_object = var_887_object;
	var_1_object = var_886_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_893_bool = 0;
		var_893_bool = 0;
		var_894_bool = 0; var_895_object = Obj();
		var_895_object = var_1_object;
		func_8133(var_895_object);
		if(var_894_bool != 0) {
			var_900_bool = 0; var_901_object = Obj();
			var_901_object = var_1_object;
			func_8145(var_901_object);
			if(var_900_bool != 0) {
				var_893_bool = 1;
			}
		}
		if(var_893_bool != 0) {
			var_906_object = Obj(); var_907_object = Obj();
			var_906_object = var_1_object;
			var_907_object = var_0_object;
			func_7527();
			var_910_string = "";
			func_483(var_887_object, "Neutral");
			@@@var_0_object:SetMessage((int)12650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10633, (int)13839, (int)11732);
			@@@var_0_object:AddReply((int)10665, (int)11772, (int)11771);
		} else {
				var_930_string = "";
				func_483(var_887_object, "Neutral");
				@@@var_0_object:SetMessage((int)11979);
				@@@var_0_object:ClearReplies();
				var_932_bool = 0;
				var_932_bool = 0;
				var_933_bool = 0; var_934_object = Obj();
				var_934_object = var_1_object;
				func_8157(var_934_object);
				if(var_933_bool != 0) {
					var_939_bool = 0; var_940_object = Obj();
					var_940_object = var_1_object;
					func_8073(var_940_object);
					if(var_939_bool != 0) {
						var_932_bool = 1;
					}
				}
				if(var_932_bool != 0) {
					@@@var_0_object:AddReply((int)12649, (int)13832, (int)13829);
				}
				var_948_bool = 0;
				var_948_bool = 0;
				var_949_bool = 0; var_950_object = Obj();
				var_950_object = var_1_object;
				func_8169(var_950_object);
				if(var_949_bool != 0) {
					var_955_bool = 0; var_956_object = Obj();
					var_956_object = var_1_object;
					func_8073(var_956_object);
					if(var_955_bool != 0) {
						var_948_bool = 1;
					}
				}
				if(var_948_bool != 0) {
					@@@var_0_object:AddReply((int)12660, (int)13832, (int)13840);
				}
				var_960_bool = 0;
				var_960_bool = 0;
				var_961_bool = 0; var_962_object = Obj();
				var_962_object = var_1_object;
				func_8181(var_962_object);
				if(var_961_bool != 0) {
					var_967_bool = 0; var_968_object = Obj();
					var_968_object = var_1_object;
					func_8193(var_968_object);
					if(var_967_bool != 0) {
						var_960_bool = 1;
					}
				}
				if(var_960_bool != 0) {
					@@@var_0_object:AddReply((int)11980, (int)13196, (int)13195);
				}
				@@@var_0_object:AddReply((int)13018, (int)-1, (int)14224);
				goto Label_453;
		}
	}
Label_453:
	var_922_bool = 0;
	func_7001(var_922_bool);
	if(var_922_bool != 0) {

	Label_457:
		lshWaitForAnimEnd();
		var_923_object = var_3_object;
		if(var_923_object != 0) {
		} else {
			var_924_string = "";
			var_924_string = var_2_object;
			func_6860(var_924_string);
			goto Label_457;
	}
		PlayAnimation("all", "idle");

	Label_472:
		WaitForAnimEnd();
		var_927_object = var_3_object;
		if(var_927_object != 0) {
			goto Label_482;
		}
		PlayAnimation("all", "idle");
		goto Label_472;

	}
	goto Label_482;
	
Label_482:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x152";


func_1364(var_0_object, var_1_object, var_2_object, var_3_object, var_180_object, var_181_object)
{
	var_0_object = var_181_object;
	var_1_object = var_180_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_187_bool = 0; var_188_object = Obj();
		var_188_object = var_1_object;
		func_7625(var_188_object);
		if(var_187_bool != 0) {
			var_195_string = "";
			func_1732(var_181_object, "Neutral");
			@@@var_0_object:SetMessage((int)5205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5206, (int)5905, (int)5735);
			@@@var_0_object:AddReply((int)5365, (int)5908, (int)5907);
		} else {
				var_215_string = "";
				func_1732(var_181_object, "Neutral");
				@@@var_0_object:SetMessage((int)6325);
				@@@var_0_object:ClearReplies();
				var_217_bool = 0;
				var_217_bool = 0;
				var_218_bool = 0; var_219_object = Obj();
				var_219_object = var_1_object;
				func_7637(var_219_object);
				if(var_218_bool != 0) {
					var_224_bool = 0; var_225_object = Obj();
					var_225_object = var_1_object;
					func_7673(var_225_object);
					if(var_224_bool != 0) {
						var_217_bool = 1;
					}
				}
				if(var_217_bool != 0) {
					@@@var_0_object:AddReply((int)6329, (int)5761, (int)6985);
				}
				var_233_bool = 0;
				var_233_bool = 1;
				var_234_bool = 0;
				var_234_bool = 0;
				var_235_bool = 0;
				var_235_bool = 0;
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_7964(var_236_bool, var_237_object);
				if(var_236_bool != 0) {
					var_247_bool = 0; var_248_object = Obj();
					var_248_object = var_1_object;
					func_7649(var_248_object);
					if(var_247_bool != 0) {
						var_235_bool = 1;
					}
				}
				if(var_235_bool != 0) {
					var_253_bool = 0; var_254_object = Obj();
					var_254_object = var_1_object;
					func_7673(var_254_object);
					if(var_253_bool != 0) {
						var_234_bool = 1;
					}
				}
				if(var_234_bool != 1) {
					var_255_bool = 0;
					var_255_bool = 0;
					var_256_bool = 0;
					var_256_bool = 0;
					var_257_bool = 0; var_258_object = Obj();
					var_258_object = var_1_object;
					func_8046(var_257_bool, var_258_object);
					if(var_257_bool != 0) {
						var_268_bool = 0; var_269_object = Obj();
						var_269_object = var_1_object;
						func_7649(var_269_object);
						if(var_268_bool != 0) {
							var_256_bool = 1;
						}
					}
					if(var_256_bool != 0) {
						var_270_bool = 0; var_271_object = Obj();
						var_271_object = var_1_object;
						func_7673(var_271_object);
						if(var_270_bool != 0) {
							var_255_bool = 1;
						}
					}
					if(var_255_bool != 1) {
						var_233_bool = 0;
					}
				}
				if(var_233_bool != 0) {
					@@@var_0_object:AddReply((int)6326, (int)5738, (int)6982);
				}
				var_275_bool = 0;
				var_275_bool = 1;
				var_276_bool = 0;
				var_276_bool = 0;
				var_277_bool = 0;
				var_277_bool = 0;
				var_278_bool = 0; var_279_object = Obj();
				var_279_object = var_1_object;
				func_8046(var_278_bool, var_279_object);
				if(var_278_bool != 0) {
					var_280_bool = 0; var_281_object = Obj();
					var_281_object = var_1_object;
					func_7661(var_281_object);
					if(var_280_bool != 0) {
						var_277_bool = 1;
					}
				}
				if(var_277_bool != 0) {
					var_286_bool = 0; var_287_object = Obj();
					var_287_object = var_1_object;
					func_7673(var_287_object);
					if(var_286_bool != 0) {
						var_276_bool = 1;
					}
				}
				if(var_276_bool != 1) {
					var_288_bool = 0;
					var_288_bool = 0;
					var_289_bool = 0;
					var_289_bool = 0;
					var_290_bool = 0; var_291_object = Obj();
					var_291_object = var_1_object;
					func_7964(var_290_bool, var_291_object);
					if(var_290_bool != 0) {
						var_292_bool = 0; var_293_object = Obj();
						var_293_object = var_1_object;
						func_7661(var_293_object);
						if(var_292_bool != 0) {
							var_289_bool = 1;
						}
					}
					if(var_289_bool != 0) {
						var_294_bool = 0; var_295_object = Obj();
						var_295_object = var_1_object;
						func_7673(var_295_object);
						if(var_294_bool != 0) {
							var_288_bool = 1;
						}
					}
					if(var_288_bool != 1) {
						var_275_bool = 0;
					}
				}
				if(var_275_bool != 0) {
					@@@var_0_object:AddReply((int)6354, (int)5748, (int)7010);
				}
				var_299_bool = 0;
				var_299_bool = 0;
				var_300_bool = 0; var_301_object = Obj();
				var_301_object = var_1_object;
				func_8289(var_301_object);
				if(var_300_bool != 0) {
					var_306_bool = 0; var_307_object = Obj();
					var_307_object = var_1_object;
					func_7685(var_307_object);
					if(var_306_bool != 0) {
						var_299_bool = 1;
					}
				}
				if(var_299_bool != 0) {
					@@@var_0_object:AddReply((int)6330, (int)7035, (int)6986);
				}
				var_315_bool = 0;
				var_315_bool = 0;
				var_316_bool = 0; var_317_object = Obj();
				var_317_object = var_1_object;
				func_8265(var_317_object);
				if(var_316_bool != 0) {
					var_322_bool = 0; var_323_object = Obj();
					var_323_object = var_1_object;
					func_7697(var_323_object);
					if(var_322_bool != 0) {
						var_315_bool = 1;
					}
				}
				if(var_315_bool != 0) {
					@@@var_0_object:AddReply((int)6337, (int)7041, (int)6993);
				}
				var_331_bool = 0;
				var_331_bool = 0;
				var_332_bool = 0; var_333_object = Obj();
				var_333_object = var_1_object;
				func_8277(var_333_object);
				if(var_332_bool != 0) {
					var_338_bool = 0; var_339_object = Obj();
					var_339_object = var_1_object;
					func_7709(var_339_object);
					if(var_338_bool != 0) {
						var_331_bool = 1;
					}
				}
				if(var_331_bool != 0) {
					@@@var_0_object:AddReply((int)6332, (int)7047, (int)6988);
				}
				var_347_bool = 0;
				var_347_bool = 0;
				var_348_bool = 0;
				var_348_bool = 0;
				var_349_bool = 0; var_350_object = Obj();
				var_350_object = var_1_object;
				func_8241(var_350_object);
				if(var_349_bool != 0) {
					var_355_bool = 0; var_356_object = Obj();
					var_356_object = var_1_object;
					func_7721(var_356_object);
					if(var_355_bool != 0) {
						var_348_bool = 1;
					}
				}
				if(var_348_bool != 0) {
					var_361_bool = 0; var_362_object = Obj();
					var_362_object = var_1_object;
					func_7673(var_362_object);
					if(var_361_bool != 0) {
						var_347_bool = 1;
					}
				}
				if(var_347_bool != 0) {
					@@@var_0_object:AddReply((int)6339, (int)7055, (int)6995);
				}
				var_366_bool = 0;
				var_366_bool = 0;
				var_367_bool = 0; var_368_object = Obj();
				var_368_object = var_1_object;
				func_8229(var_368_object);
				if(var_367_bool != 0) {
					var_373_bool = 0; var_374_object = Obj();
					var_374_object = var_1_object;
					func_7733(var_374_object);
					if(var_373_bool != 0) {
						var_366_bool = 1;
					}
				}
				if(var_366_bool != 0) {
					@@@var_0_object:AddReply((int)6340, (int)7065, (int)6996);
				}
				var_382_bool = 0;
				var_382_bool = 0;
				var_383_bool = 0; var_384_object = Obj();
				var_384_object = var_1_object;
				func_8253(var_384_object);
				if(var_383_bool != 0) {
					var_389_bool = 0; var_390_object = Obj();
					var_390_object = var_1_object;
					func_7745(var_390_object);
					if(var_389_bool != 0) {
						var_382_bool = 1;
					}
				}
				if(var_382_bool != 0) {
					@@@var_0_object:AddReply((int)6344, (int)7083, (int)7000);
				}
				var_398_bool = 0;
				var_398_bool = 0;
				var_399_bool = 0; var_400_object = Obj();
				var_400_object = var_1_object;
				func_8301(var_400_object);
				if(var_399_bool != 0) {
					var_405_bool = 0; var_406_object = Obj();
					var_406_object = var_1_object;
					func_7757(var_406_object);
					if(var_405_bool != 0) {
						var_398_bool = 1;
					}
				}
				if(var_398_bool != 0) {
					@@@var_0_object:AddReply((int)6345, (int)7090, (int)7001);
				}
				var_414_bool = 0;
				var_414_bool = 0;
				var_415_bool = 0; var_416_object = Obj();
				var_416_object = var_1_object;
				func_7940(var_416_object);
				if(var_415_bool != 0) {
					var_421_bool = 0; var_422_object = Obj();
					var_422_object = var_1_object;
					func_7769(var_422_object);
					if(var_421_bool != 0) {
						var_414_bool = 1;
					}
				}
				if(var_414_bool != 0) {
					@@@var_0_object:AddReply((int)6346, (int)7096, (int)7002);
				}
				@@@var_0_object:AddReply((int)7537, (int)-1, (int)8319);
				goto Label_1702;
		}
	}
Label_1702:
	var_207_bool = 0;
	func_7001(var_207_bool);
	if(var_207_bool != 0) {

	Label_1706:
		lshWaitForAnimEnd();
		var_208_object = var_3_object;
		if(var_208_object != 0) {
		} else {
			var_209_string = "";
			var_209_string = var_2_object;
			func_6860(var_209_string);
			goto Label_1706;
	}
		PlayAnimation("all", "idle");

	Label_1721:
		WaitForAnimEnd();
		var_212_object = var_3_object;
		if(var_212_object != 0) {
			goto Label_1731;
		}
		PlayAnimation("all", "idle");
		goto Label_1721;

	}
	goto Label_1731;
	
Label_1731:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x558";


func_6997(var_96_int)
{
	var_96_int = 2854;
	return 0;
}


func_8022(var_329_bool)
{
	var_331_int = 0; var_332_string = "";
	func_6895(var_331_int, "d4q03_alldead");
	var_334_bool = var_331_int == (int)1;
	if(var_334_bool != 0) {
		var_329_bool = 1;
		return 0;
	}
	var_329_bool = 0;
	return 0;
}


func_6999(var_97_string)
{
	var_97_string = "ui/NPC_Black.png";
	return 0;
}


func_5973(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_7001(var_97_bool);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_bool = var_96_string == var_2_object;
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_string = "";
	var_96_string = var_100_string;
	func_6860(var_100_string);
	var_2_object = var_96_string;
	return 0;
}


func_7001(var_43_bool)
{
	var_43_bool = 1;
	return 0;
}


func_7513()
{
	return 0;
}


func_7003()
{
	SetVariable("ood1Alexandr1", (int)1);
	return 0;
}


func_7515()
{
	SetVariable("ood5Alexandr1", (int)1);
	return 0;
}


func_8533()
{
	var_85_object = Obj(); var_86_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_86_object, (int)69, (int)1, (int)12151);
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0;
	var_86_object = var_92_object;
	func_8373(var_91_bool, var_92_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7009()
{
	SetVariable("ood1Alexandr2", (int)1);
	return 0;
}


func_8034(var_335_bool)
{
	var_337_int = 0; var_338_string = "";
	func_6895(var_337_int, "ood4Alexandr3");
	var_340_bool = var_337_int == (int)0;
	if(var_340_bool != 0) {
		var_335_bool = 1;
		return 0;
	}
	var_335_bool = 0;
	return 0;
}


func_7521()
{
	SetVariable("ood5Alexandr2", (int)1);
	return 0;
}


func_8549()
{
	var_73_object = Obj(); var_74_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_74_object, (int)22, (int)2, (int)3362);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_74_object = var_80_object;
	func_8373(var_79_bool, var_80_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7527()
{
	SetVariable("ood6Alexandr1", (int)1);
	return 0;
}


func_7015()
{
	SetVariable("ood1Alexandr3", (int)1);
	return 0;
}


func_7533()
{
	SetVariable("ood6Alexandr2", (int)1);
	return 0;
}


func_8046(var_232_bool, var_233_object)
{
	var_234_bool = 0; var_235_object = Obj();
	var_233_object = var_235_object;
	func_8339(var_235_object);
	if(var_234_bool != 0) {
		var_232_bool = 1;
		return 0;
	}
	var_232_bool = 0;
	return 0;
}


func_7021()
{
	SetVariable("ood1Alexandr4", (int)1);
	return 0;
}


func_7539()
{
	SetVariable("ood6Alexandr3", (int)1);
	return 0;
}


func_7027()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_8565()
{
	var_98_object = Obj(); var_99_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_99_object, (int)96, (int)2, (int)12178);
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0;
	var_99_object = var_105_object;
	func_8373(var_104_bool, var_105_object, (int)22);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8056(var_112_bool)
{
	var_114_int = 0; var_115_string = "";
	func_6895(var_114_int, "d5q01");
	var_119_bool = var_114_int == (int)2;
	if(var_119_bool != 0) {
		var_112_bool = 1;
		return 0;
	}
	var_112_bool = 0;
	return 0;
}


func_7545()
{
	SetVariable("ood6Alexandr4", (int)1);
	return 0;
}


func_7033()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_6521(var_0_object, var_1_object, var_2_object, var_3_object, var_1001_object, var_1002_object)
{
	var_0_object = var_1002_object;
	var_1_object = var_1001_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1008_string = "";
		func_6593(var_1002_object, "Neutral");
		@@@var_0_object:SetMessage((int)12203);
		@@@var_0_object:ClearReplies();
		var_1014_bool = 0;
		var_1014_bool = 0;
		var_1015_bool = 0; var_1016_object = Obj();
		var_1016_object = var_1_object;
		func_8205(var_1016_object);
		if(var_1015_bool != 0) {
			var_1021_bool = 0; var_1022_object = Obj();
			var_1022_object = var_1_object;
			func_8217(var_1022_object);
			if(var_1021_bool != 0) {
				var_1014_bool = 1;
			}
		}
		if(var_1014_bool != 0) {
			@@@var_0_object:AddReply((int)13340, (int)14573, (int)14572);
		}
		@@@var_0_object:AddReply((int)12204, (int)-1, (int)13359);
		goto Label_6563;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x197d";
	}
Label_6563:
	var_1033_bool = 0;
	func_7001(var_1033_bool);
	if(var_1033_bool != 0) {

	Label_6567:
		lshWaitForAnimEnd();
		var_1034_object = var_3_object;
		if(var_1034_object != 0) {
		} else {
			var_1035_string = "";
			var_1035_string = var_2_object;
			func_6860(var_1035_string);
			goto Label_6567;
	}
		PlayAnimation("all", "idle");

	Label_6582:
		WaitForAnimEnd();
		var_1038_object = var_3_object;
		if(var_1038_object != 0) {
			goto Label_6592;
		}
		PlayAnimation("all", "idle");
		goto Label_6582;
	}
	goto Label_6592;
	
Label_6592:
	return 0;
	
}


func_7039()
{
	SetVariable("ood1Alexandr5", (int)1);
	return 0;
}


func_7551()
{
	var_129_object = Obj(); var_130_object = Obj();
	func_8402(Obj());
	var_131_object = var_130_object;
	var_136_float = 0;
	func_6960(var_136_float);
	@@var_130_object:AddMark("d6q01AlexandrGotoKaterina", "pt_map_katerina", (int)1, (int)15397, var_136_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8068(var_233_bool)
{
	var_233_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_7045()
{
	SetVariable("ood1Alexandr6", (int)1);
	return 0;
}


func_8581()
{
	var_194_object = Obj(); var_195_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_195_object, (int)98, (int)2, (int)12180);
	var_200_bool = 0; var_201_object = Obj(); var_202_int = 0;
	var_195_object = var_201_object;
	func_8373(var_200_bool, var_201_object, (int)22);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8073(var_205_bool)
{
	var_207_int = 0; var_208_string = "";
	func_6895(var_207_int, "d6q02");
	var_210_bool = var_207_int == (int)1;
	if(var_210_bool != 0) {
		var_205_bool = 1;
		return 0;
	}
	var_205_bool = 0;
	return 0;
}


func_7051()
{
	SetVariable("ood1Alexandr7", (int)1);
	return 0;
}


func_7567()
{
	SetVariable("ood7Alexandr1", (int)1);
	return 0;
}


func_7057()
{
	SetVariable("ood1Alexandr8", (int)1);
	return 0;
}


func_7573()
{
	SetVariable("KnowAlexandr", (int)1);
	return 0;
}


func_8085(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_6895(var_126_int, "ood5Alexandr1");
	var_129_bool = var_126_int == (int)0;
	if(var_129_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_7063()
{
	SetVariable("ood1Alexandr9", (int)1);
	return 0;
}


func_8597()
{
	var_254_object = Obj(); var_255_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_255_object, (int)100, (int)2, (int)12182);
	var_260_bool = 0; var_261_object = Obj(); var_262_int = 0;
	var_255_object = var_261_object;
	func_8373(var_260_bool, var_261_object, (int)22);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7579()
{
	var_48_object = Obj(); var_49_object = Obj();
	func_8402(Obj());
	var_50_object = var_49_object;
	var_61_float = 0;
	func_6960(var_61_float);
	@@var_49_object:AddMark("d6q01AlexandrGotoJulia", "pt_map_julia", (int)1, (int)15387, var_61_float);
	var_68_float = 0;
	func_6960(var_68_float);
	@@var_49_object:AddMark("d6q01AlexandrGotoLara", "pt_map_lara", (int)1, (int)15386, var_68_float);
	var_73_float = 0;
	func_6960(var_73_float);
	@@var_49_object:AddMark("d6q01AlexangrGotoJulLaraSelf", "pt_map_alexandr", (int)1, (int)15388, var_73_float);
	func_8613();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7069()
{
	SetVariable("ood1Alexandr10", (int)1);
	return 0;
}


func_8097(var_140_bool)
{
	var_142_int = 0; var_143_string = "";
	func_6895(var_142_int, "ood5Alexandr2");
	var_145_bool = var_142_int == (int)0;
	if(var_145_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_7075()
{
	SetVariable("ood1Alexandr11", (int)1);
	return 0;
}


func_8613()
{
	var_74_object = Obj(); var_75_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_75_object, (int)114, (int)1, (int)13737);
	var_80_bool = 0; var_81_object = Obj(); var_82_int = 0;
	var_75_object = var_81_object;
	func_8373(var_80_bool, var_81_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7081()
{
	SetVariable("ood1Alexandr12", (int)1);
	return 0;
}


func_8109(var_130_bool)
{
	var_132_int = 0; var_133_string = "";
	func_6895(var_132_int, "d5q03");
	var_135_bool = var_132_int == (int)1;
	if(var_135_bool != 0) {
		var_130_bool = 1;
		return 0;
	}
	var_130_bool = 0;
	return 0;
}


func_7087()
{
	SetVariable("ood2Alexandr1", (int)1);
	return 0;
}


func_8629()
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_7093()
{
	SetVariable("ood2Alexandr2", (int)1);
	return 0;
}


func_8633(var_41_object)
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
	func_6982(var_154_bool, (int)1);
	if(var_154_bool != 0) {
		var_162_int = 0; var_163_object = Obj();
		var_41_object = var_163_object;
		TaskCall(6);
		func_1301(var_164_object, var_162_int, var_163_object);
		TaskReturn();
		return 0;
	}
	var_435_bool = 0; var_436_int = 0;
	func_6982(var_435_bool, (int)2);
	if(var_435_bool != 0) {
		var_437_int = 0; var_438_object = Obj();
		var_41_object = var_438_object;
		TaskCall(8);
		func_3026(var_439_object, var_437_int, var_438_object);
		TaskReturn();
		return 0;
	}
	var_565_bool = 0; var_566_int = 0;
	func_6982(var_565_bool, (int)3);
	if(var_565_bool != 0) {
		var_567_int = 0; var_568_object = Obj();
		var_41_object = var_568_object;
		TaskCall(10);
		func_4210(var_569_object, var_567_int, var_568_object);
		TaskReturn();
		return 0;
	}
	var_671_bool = 0; var_672_int = 0;
	func_6982(var_671_bool, (int)4);
	if(var_671_bool != 0) {
		var_673_int = 0; var_674_object = Obj();
		var_41_object = var_674_object;
		TaskCall(12);
		func_5051(var_675_object, var_673_int, var_674_object);
		TaskReturn();
		return 0;
	}
	var_779_bool = 0; var_780_int = 0;
	func_6982(var_779_bool, (int)5);
	if(var_779_bool != 0) {
		var_781_int = 0; var_782_object = Obj();
		var_41_object = var_782_object;
		TaskCall(14);
		func_5809(var_783_object, var_781_int, var_782_object);
		TaskReturn();
		return 0;
	}
	var_866_bool = 0; var_867_int = 0;
	func_6982(var_866_bool, (int)6);
	if(var_866_bool != 0) {
		var_868_int = 0; var_869_object = Obj();
		var_41_object = var_869_object;
		TaskCall(4);
		func_271(var_870_object, var_868_int, var_869_object);
		TaskReturn();
		return 0;
	}
	var_981_bool = 0; var_982_int = 0;
	func_6982(var_981_bool, (int)7);
	if(var_981_bool != 0) {
		var_983_int = 0; var_984_object = Obj();
		var_41_object = var_984_object;
		TaskCall(16);
		func_6458(var_985_object, var_983_int, var_984_object);
		TaskReturn();
		return 0;
	}
	func_6988((bool)0);
	return 0;
}


func_8121(var_146_bool)
{
	var_148_int = 0; var_149_string = "";
	func_6895(var_148_int, "d5q03");
	var_151_bool = var_148_int == (int)2;
	if(var_151_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_7099()
{
	SetVariable("ood2Alexandr3", (int)1);
	return 0;
}


func_5051(var_0_object, var_673_int, var_674_object)
{
	var_676_object = Obj(); var_677_bool = 0; var_678_int = 0; var_679_bool = 0; var_680_object = Obj(); var_681_bool = 0; var_682_int = 0; var_683_bool = 0;
	var_0_object = var_674_object;
	var_684_bool = 0; var_685_object = Obj();
	var_674_object = var_685_object;
	func_6800(var_684_bool, var_685_object);
	var_686_bool = var_684_bool == 0; //@nz
	if(var_686_bool != 0) {
		var_673_int = -2;
		return 8;
	}
	CreateDialog(var_680_object);
	var_687_int = 0;
	func_6997(var_687_int);
	@@var_680_object:SetNPCName(var_687_int);
	var_688_string = "";
	func_6999(var_688_string);
	@@var_680_object:SetPhoto(var_688_string);
	var_689_int = 0;
	func_8452(var_689_int);
	@@var_680_object:SetPlayerName(var_689_int);
	IsOverrideActive(var_681_bool);
	var_690_bool = var_681_bool;
	if(var_690_bool != 0) {
		var_673_int = -2;
		return 8;
	}
	DoDialog(var_680_object);
	var_691_object = Obj(); var_692_object = Obj();
	var_674_object = var_691_object;
	var_680_object = var_692_object;
	TaskCall(13);
	func_5114(var_693_object, var_694_object, var_695_string, var_696_bool, var_691_object, var_692_object);
	TaskReturn();
	@@var_680_object:IsDialogEnd(var_683_bool);
	
Label_5096:
	var_777_bool = var_683_bool == 0; //@nz
	if(var_777_bool != 0) {
		sync();
		@@var_680_object:IsDialogEnd(var_683_bool);
		goto Label_5096;
	}
	var_674_object = Obj();
	func_6856();
	StopDialog(var_680_object);
	@@var_680_object:GetReturnValue((int)-1);
	var_682_int = var_673_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7616()
{
	var_292_int = 0; var_293_string = "";
	func_6895(var_292_int, "d2TalkToAlexandr");
	var_295_bool = var_292_int == (int)1;
	if(var_295_bool != 0) {
	}
	return 0;
}


func_7105()
{
	SetVariable("ood2Alexandr5", (int)1);
	return 0;
}


func_6593(var_2_object, var_56_string)
{
	var_57_bool = 0;
	func_7001(var_57_bool);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 0;
	}
	var_59_bool = var_56_string == var_2_object;
	if(var_59_bool != 0) {
		return 0;
	}
	var_60_string = "";
	var_56_string = var_60_string;
	func_6860(var_60_string);
	var_2_object = var_56_string;
	return 0;
}


func_8133(var_156_bool)
{
	var_158_int = 0; var_159_string = "";
	func_6895(var_158_int, "d6q01");
	var_163_bool = var_158_int == (int)1;
	if(var_163_bool != 0) {
		var_156_bool = 1;
		return 0;
	}
	var_156_bool = 0;
	return 0;
}


func_7111()
{
	var_52_object = Obj(); var_53_object = Obj();
	SetVariable("d2q01", (int)1);
	func_8402(Obj());
	var_56_object = var_53_object;
	var_67_float = 0;
	func_6960(var_67_float);
	@@var_53_object:AddMark("d2q01AlexandrGotoAnna", "pt_map_anna", (int)1, (int)11387, var_67_float);
	func_8469();
	func_8485();
	var_104_object = Obj(); var_105_string = "";
	func_6900(var_104_object, "quest_d2_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7625(var_160_bool)
{
	var_162_int = 0; var_163_string = "";
	func_6895(var_162_int, "ood1Alexandr1");
	var_167_bool = var_162_int == (int)0;
	if(var_167_bool != 0) {
		var_160_bool = 1;
		return 0;
	}
	var_160_bool = 0;
	return 0;
}


func_8145(var_164_bool)
{
	var_166_int = 0; var_167_string = "";
	func_6895(var_166_int, "ood6Alexandr1");
	var_169_bool = var_166_int == (int)0;
	if(var_169_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_3026(var_0_object, var_437_int, var_438_object)
{
	var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; var_444_object = Obj(); var_445_bool = 0; var_446_int = 0; var_447_bool = 0;
	var_0_object = var_438_object;
	var_448_bool = 0; var_449_object = Obj();
	var_438_object = var_449_object;
	func_6800(var_448_bool, var_449_object);
	var_450_bool = var_448_bool == 0; //@nz
	if(var_450_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	CreateDialog(var_444_object);
	var_451_int = 0;
	func_6997(var_451_int);
	@@var_444_object:SetNPCName(var_451_int);
	var_452_string = "";
	func_6999(var_452_string);
	@@var_444_object:SetPhoto(var_452_string);
	var_453_int = 0;
	func_8452(var_453_int);
	@@var_444_object:SetPlayerName(var_453_int);
	IsOverrideActive(var_445_bool);
	var_454_bool = var_445_bool;
	if(var_454_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	DoDialog(var_444_object);
	var_455_object = Obj(); var_456_object = Obj();
	var_438_object = var_455_object;
	var_444_object = var_456_object;
	TaskCall(9);
	func_3089(var_457_object, var_458_object, var_459_string, var_460_bool, var_455_object, var_456_object);
	TaskReturn();
	@@var_444_object:IsDialogEnd(var_447_bool);
	
Label_3071:
	var_563_bool = var_447_bool == 0; //@nz
	if(var_563_bool != 0) {
		sync();
		@@var_444_object:IsDialogEnd(var_447_bool);
		goto Label_3071;
	}
	var_438_object = Obj();
	func_6856();
	StopDialog(var_444_object);
	@@var_444_object:GetReturnValue((int)-1);
	var_446_int = var_437_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7637(var_193_bool)
{
	var_195_int = 0; var_196_string = "";
	func_6895(var_195_int, "ood1Alexandr2");
	var_198_bool = var_195_int == (int)0;
	if(var_198_bool != 0) {
		var_193_bool = 1;
		return 0;
	}
	var_193_bool = 0;
	return 0;
}


func_8157(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_6895(var_201_int, "ood6Alexandr2");
	var_204_bool = var_201_int == (int)0;
	if(var_204_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_7649(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_6895(var_224_int, "ood1Alexandr3");
	var_227_bool = var_224_int == (int)0;
	if(var_227_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_483(var_2_object, var_174_string)
{
	var_175_bool = 0;
	func_7001(var_175_bool);
	var_176_bool = var_175_bool == 0; //@nz
	if(var_176_bool != 0) {
		return 0;
	}
	var_177_bool = var_174_string == var_2_object;
	if(var_177_bool != 0) {
		return 0;
	}
	var_178_string = "";
	var_174_string = var_178_string;
	func_6860(var_178_string);
	var_2_object = var_174_string;
	return 0;
}


func_7141()
{
	func_8517();
	var_171_bool = 0; var_172_string = ""; var_173_string = "";
	func_6948(var_171_bool, "quest_d2_01", "completed");
	return 0;
}


func_8169(var_215_bool)
{
	var_217_int = 0; var_218_string = "";
	func_6895(var_217_int, "ood6Alexandr3");
	var_220_bool = var_217_int == (int)0;
	if(var_220_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_7661(var_255_bool)
{
	var_257_int = 0; var_258_string = "";
	func_6895(var_257_int, "ood1Alexandr4");
	var_260_bool = var_257_int == (int)0;
	if(var_260_bool != 0) {
		var_255_bool = 1;
		return 0;
	}
	var_255_bool = 0;
	return 0;
}


func_7151()
{
	var_212_object = Obj(); var_213_object = Obj();
	SetVariable("d2q01", (int)6);
	func_8402(Obj());
	var_216_object = var_213_object;
	var_221_float = 0;
	func_6960(var_221_float);
	@@var_213_object:AddMark("d2q01AlexandrGotoBigVlad", "pt_map_bigvlad", (int)1, (int)11390, var_221_float);
	var_226_float = 0;
	func_6960(var_226_float);
	@@var_213_object:AddMark("d2q01AlexandrGotoGeorg", "pt_map_georg", (int)1, (int)11391, var_226_float);
	func_8501();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8181(var_227_bool)
{
	var_229_int = 0; var_230_string = "";
	func_6895(var_229_int, "d6q01KnowKillerIsKlara");
	var_232_bool = var_229_int == (int)1;
	if(var_232_bool != 0) {
		var_227_bool = 1;
		return 0;
	}
	var_227_bool = 0;
	return 0;
}


func_7673(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_6895(var_201_int, "d1q01FirstGeorgVisit");
	var_204_bool = var_201_int == (int)1;
	if(var_204_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_5114(var_0_object, var_1_object, var_2_object, var_3_object, var_691_object, var_692_object)
{
	var_0_object = var_692_object;
	var_1_object = var_691_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_698_bool = 0; var_699_object = Obj();
		var_699_object = var_1_object;
		func_7974(var_699_object);
		if(var_698_bool != 0) {
			var_704_string = "";
			func_5250(var_692_object, "Neutral");
			@@@var_0_object:SetMessage((int)11175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11176, (int)12361, (int)12360);
			@@@var_0_object:AddReply((int)11178, (int)12366, (int)12362);
		} else {
				var_724_string = "";
				func_5250(var_692_object, "Neutral");
				@@@var_0_object:SetMessage((int)11164);
				@@@var_0_object:ClearReplies();
				var_726_bool = 0; var_727_object = Obj();
				var_727_object = var_1_object;
				func_7986(var_727_object);
				if(var_726_bool != 0) {
					@@@var_0_object:AddReply((int)11489, (int)12692, (int)12691);
				}
				var_735_bool = 0;
				var_735_bool = 0;
				var_736_bool = 0; var_737_object = Obj();
				var_737_object = var_1_object;
				func_7998(var_737_object);
				if(var_736_bool != 0) {
					var_742_bool = 0; var_743_object = Obj();
					var_743_object = var_1_object;
					func_8010(var_743_object);
					if(var_742_bool != 0) {
						var_735_bool = 1;
					}
				}
				if(var_735_bool != 0) {
					@@@var_0_object:AddReply((int)11187, (int)12373, (int)12372);
				}
				var_751_bool = 0;
				var_751_bool = 0;
				var_752_bool = 0; var_753_object = Obj();
				var_753_object = var_1_object;
				func_8022(var_753_object);
				if(var_752_bool != 0) {
					var_758_bool = 0; var_759_object = Obj();
					var_759_object = var_1_object;
					func_8034(var_759_object);
					if(var_758_bool != 0) {
						var_751_bool = 1;
					}
				}
				if(var_751_bool != 0) {
					@@@var_0_object:AddReply((int)11495, (int)12697, (int)12696);
				}
				var_767_bool = 0; var_768_object = Obj();
				var_768_object = var_1_object;
				func_7829(var_767_bool, var_768_object);
				if(var_767_bool != 0) {
					@@@var_0_object:AddReply((int)11165, (int)12349, (int)12348);
				}
				@@@var_0_object:AddReply((int)11174, (int)-1, (int)12358);
				goto Label_5220;
		}
	}
Label_5220:
	var_716_bool = 0;
	func_7001(var_716_bool);
	if(var_716_bool != 0) {

	Label_5224:
		lshWaitForAnimEnd();
		var_717_object = var_3_object;
		if(var_717_object != 0) {
		} else {
			var_718_string = "";
			var_718_string = var_2_object;
			func_6860(var_718_string);
			goto Label_5224;
	}
		PlayAnimation("all", "idle");

	Label_5239:
		WaitForAnimEnd();
		var_721_object = var_3_object;
		if(var_721_object != 0) {
			goto Label_5249;
		}
		PlayAnimation("all", "idle");
		goto Label_5239;

	}
	goto Label_5249;
	
Label_5249:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x13fe";


