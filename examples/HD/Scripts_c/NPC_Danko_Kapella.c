// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Kapella.png|W:ui/NPC_Kapella_b.png|W:KnowKaterina|W:KnowKapella|W:playsound|W:giveitem|W:d8q02|W:feromicin2 is given|W:feromicin|W:d11q06KapellaRing|W:d11q06KapellaBeads is given|W:d11q06KapellaBeads|W:d11q06KlaraRing|W:d11q06|W:ood11Kapella1|W:ood11Kapella2|W:quest_d11_06|W:fail|W:ood2Kapella1|W:ood2Kapella2|W:d2q01|W:d2q01KapellaGotoSpi4ka|W:pt_map_spi4ka|A:AddMark|W:quest_d2_01|W:woman|A:ShowMap|W:d3q03|W:quest_d3_03|W:boy|W:ood3Kapella1|W:ood3Kapella2|W:d3q03KapellaBoyLocation|A:FindMark|A:Remove|W:d8q01OspinaGotoMladVlad|W:completed|W:ood3Kapella3|W:ood3Kapella4|W:ood3Kapella5|W:ood6Kapella1|W:d6q02KnowAboutAttack|W:KnowViktoria|W:ood8Kapella1|W:ood8Kapella2|W:ood4Kapella1|W:KnowPredictions|W:d6q02KapellaGotoMladVlad|W:pt_map_mladvlad|W:d6KapellaVisit|W:ood6Kapella3|W:d3q01|W:d6q02|W:d6q01|W:d4q02|W:d2KnowBigVladIsBad|W:disease|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x127e
// @RUN_TASK: 18
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x244 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x47a vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x738 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb66 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xca3 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf20 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1156 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1254 vars=int,int
// @TASK_18: vars=cvector params=0
// @EVENT_7: op=0x12ca vars=int
// @EVENT_6: op=0x12f0 vars=
// @EVENT_5: op=0x12ff vars=
// @EVENT_45: op=0x130c vars=bool
// @EVENT_0: op=0x1318 vars=object
// @PE: 0x51,0x95,0xab,0x196,0x22e,0x244,0x409,0x464,0x47a,0x666,0x722,0x738,0xb08,0xb50,0xb66,0xc2d,0xc8d,0xca3,0xeb8,0xf0a,0xf20,0x1101,0x1140,0x1156,0x1204,0x123e,0x1254,0x12ca,0x12f0,0x130c,0x151d,0x1545,0x154b,0x1551,0x1557,0x1560,0x156b,0x157d,0x1598,0x159e,0x15a4,0x15ae,0x15b4,0x15d6,0x15e6,0x15fb,0x1601,0x1625,0x162b,0x1631,0x1637,0x1639,0x1643,0x1649,0x164f,0x1655,0x165b,0x1661,0x1667,0x167d,0x1683,0x1689,0x16ae,0x16ba,0x16c6,0x16d2,0x16de,0x16ea,0x16f6,0x1702,0x170e,0x171a,0x1726,0x1732,0x173e,0x174a,0x1754,0x1759,0x1765,0x1771,0x177d,0x1789,0x1795,0x17a1,0x17ad,0x17b9,0x17c5,0x17d1,0x17dd,0x17e9,0x18dd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_46_bool == (int)543;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5445();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_5451();
			var_60_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500473);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500476, (int)547, (int)546);
			@@@var_0_object:AddReply((int)500474, (int)545, (int)544);
			return 0;
		}
		var_85_bool = var_46_bool == (int)545;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_5711();
			var_90_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500480, (int)547, (int)550);
			@@@var_0_object:AddReply((int)500479, (int)-1, (int)549);
			return 0;
		}
		var_99_bool = var_46_bool == (int)547;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_5735();
			var_104_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500481, (int)554, (int)552);
			@@@var_0_object:AddReply((int)508439, (int)9263, (int)9262);
			return 0;
		}
		var_113_bool = var_46_bool == (int)9263;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508442, (int)-1, (int)9265);
			@@@var_0_object:AddReply((int)508441, (int)-1, (int)9264);
			return 0;
		}
		var_123_bool = var_46_bool == (int)554;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500484, (int)-1, (int)555);
			@@@var_0_object:AddReply((int)500485, (int)-1, (int)556);
			return 0;
		}
		var_3_string = true;
		var_132_bool = 0;
		func_5443(var_132_bool);
		if(var_132_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_47_cvector == (int)13328;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5699();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_5741();
		}
		var_75_bool = var_47_cvector == (int)13695;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_5699();
		}
		var_79_bool = var_46_bool == (int)3618;
		if(var_79_bool != 0) {
			var_80_bool = 0;
			var_80_bool = 0;
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_6025(var_82_object);
			if(var_81_bool != 0) {
				var_89_bool = 0; var_90_object = Obj();
				var_90_object = var_1_object;
				func_6109(var_90_object);
				if(var_89_bool != 0) {
					var_80_bool = 1;
				}
			}
			if(var_80_bool != 0) {
				var_95_object = Obj(); var_96_object = Obj();
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_5757();
				var_99_object = Obj(); var_100_object = Obj();
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_5763();
				var_103_string = "";
				func_558(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)503371);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)503375, (int)3621, (int)3619);
				@@@var_0_object:AddReply((int)503376, (int)3621, (int)3620);
				return 0;
			}
			var_127_bool = 0;
			var_127_bool = 0;
			var_128_bool = 0;
			var_128_bool = 0;
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_6013(var_130_object);
			if(var_129_bool != 0) {
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_5989(var_136_object);
				var_141_bool = var_135_bool == 0; //@nz
				if(var_141_bool != 0) {
					var_128_bool = 1;
				}
			}
			if(var_128_bool != 0) {
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_6001(var_143_object);
				var_148_bool = var_142_bool == 0; //@nz
				if(var_148_bool != 0) {
					var_127_bool = 1;
				}
			}
			if(var_127_bool != 0) {
				var_149_object = Obj(); var_150_object = Obj();
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_5757();
				var_151_string = "";
				func_558(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)512095);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512096, (int)13323, (int)13322);
				@@@var_0_object:AddReply((int)536136, (int)-1, (int)37895);
				return 0;
			}
			var_159_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512524, (int)-1, (int)13694);
			@@@var_0_object:AddReply((int)536137, (int)-1, (int)37896);
			return 0;
		}
		var_168_bool = var_46_bool == (int)13323;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512097);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512098, (int)13325, (int)13324);
			return 0;
		}
		var_175_bool = var_46_bool == (int)13325;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512099);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512100, (int)13327, (int)13326);
			return 0;
		}
		var_182_bool = var_46_bool == (int)13327;
		if(var_182_bool != 0) {
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_5705();
			var_187_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512101);
			@@@var_0_object:ClearReplies();
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_5977(var_190_object);
			if(var_189_bool != 0) {
				@@@var_0_object:AddReply((int)512102, (int)-1, (int)13328);
			}
			var_198_bool = 0; var_199_object = Obj();
			var_199_object = var_1_object;
			func_5977(var_199_object);
			var_200_bool = var_198_bool == 0; //@nz
			if(var_200_bool != 0) {
				@@@var_0_object:AddReply((int)512525, (int)-1, (int)13695);
			}
			return 0;
		}
		var_205_bool = var_46_bool == (int)3621;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503378, (int)3626, (int)3622);
			@@@var_0_object:AddReply((int)503379, (int)3626, (int)3624);
			@@@var_0_object:AddReply((int)503380, (int)3626, (int)3625);
			return 0;
		}
		var_218_bool = var_46_bool == (int)3626;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503382, (int)3631, (int)3627);
			@@@var_0_object:AddReply((int)503383, (int)-1, (int)3630);
			@@@var_0_object:AddReply((int)503396, (int)-1, (int)3643);
			return 0;
		}
		var_231_bool = var_46_bool == (int)3631;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503385, (int)3639, (int)3632);
			@@@var_0_object:AddReply((int)503386, (int)-1, (int)3633);
			@@@var_0_object:AddReply((int)503387, (int)-1, (int)3634);
			@@@var_0_object:AddReply((int)503388, (int)3636, (int)3635);
			return 0;
		}
		var_247_bool = var_46_bool == (int)3636;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503390, (int)-1, (int)3637);
			@@@var_0_object:AddReply((int)503391, (int)-1, (int)3638);
			return 0;
		}
		var_257_bool = var_46_bool == (int)3639;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_558(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503393, (int)-1, (int)3640);
			@@@var_0_object:AddReply((int)503394, (int)-1, (int)3641);
			@@@var_0_object:AddReply((int)503395, (int)-1, (int)3642);
			return 0;
		}
		var_3_string = true;
		var_269_bool = 0;
		func_5443(var_269_bool);
		if(var_269_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x245";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_47_cvector == (int)7322;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5550();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_5562();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_5590(var_106_object);
		}
		var_132_bool = var_47_cvector == (int)8137;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_5550();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_5562();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_5590(var_138_object);
		}
		var_140_bool = var_47_cvector == (int)7317;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_5556();
		}
		var_146_bool = var_47_cvector == (int)7313;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_5556();
		}
		var_150_bool = var_46_bool == (int)7320;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506647);
			@@@var_0_object:ClearReplies();
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_5842(var_171_object);
			if(var_170_bool != 0) {
				var_178_bool = 0; var_179_object = Obj();
				var_179_object = var_1_object;
				func_5866(var_179_object);
				if(var_178_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				@@@var_0_object:AddReply((int)507373, (int)35431, (int)8134);
			}
			var_187_bool = 0;
			var_187_bool = 0;
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_5854(var_189_object);
			if(var_188_bool != 0) {
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_object;
				func_6121(var_195_object);
				if(var_194_bool != 0) {
					var_187_bool = 1;
				}
			}
			if(var_187_bool != 0) {
				@@@var_0_object:AddReply((int)506640, (int)7312, (int)7311);
			}
			@@@var_0_object:AddReply((int)507533, (int)-1, (int)8315);
			return 0;
		}
		var_207_bool = var_46_bool == (int)7312;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506643, (int)7316, (int)7315);
			@@@var_0_object:AddReply((int)506642, (int)-1, (int)7313);
			return 0;
		}
		var_217_bool = var_46_bool == (int)7316;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506645, (int)-1, (int)7317);
			return 0;
		}
		var_224_bool = var_46_bool == (int)35431;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533877, (int)8135, (int)35432);
			@@@var_0_object:AddReply((int)533878, (int)35434, (int)35433);
			return 0;
		}
		var_234_bool = var_46_bool == (int)35434;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533879);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533880, (int)35437, (int)35435);
			@@@var_0_object:AddReply((int)533881, (int)35437, (int)35436);
			return 0;
		}
		var_244_bool = var_46_bool == (int)35437;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533883, (int)35444, (int)35439);
			@@@var_0_object:AddReply((int)533884, (int)35441, (int)35440);
			return 0;
		}
		var_254_bool = var_46_bool == (int)35441;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533889, (int)35444, (int)35445);
			return 0;
		}
		var_261_bool = var_46_bool == (int)35444;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533887, (int)35447, (int)35443);
			@@@var_0_object:AddReply((int)533886, (int)-1, (int)35442);
			return 0;
		}
		var_271_bool = var_46_bool == (int)35447;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533891, (int)-1, (int)35448);
			@@@var_0_object:AddReply((int)533892, (int)-1, (int)35449);
			return 0;
		}
		var_281_bool = var_46_bool == (int)8135;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506630, (int)7300, (int)7299);
			@@@var_0_object:AddReply((int)533893, (int)7300, (int)35450);
			return 0;
		}
		var_291_bool = var_46_bool == (int)7300;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506631);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506636, (int)7306, (int)7305);
			@@@var_0_object:AddReply((int)506632, (int)7302, (int)7301);
			return 0;
		}
		var_301_bool = var_46_bool == (int)7302;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506634, (int)7297, (int)7303);
			@@@var_0_object:AddReply((int)506635, (int)7297, (int)7304);
			return 0;
		}
		var_311_bool = var_46_bool == (int)7297;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506628);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506648, (int)-1, (int)7322);
			@@@var_0_object:AddReply((int)507376, (int)-1, (int)8137);
			return 0;
		}
		var_321_bool = var_46_bool == (int)7306;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_1124(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506637);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506638, (int)7302, (int)7307);
			return 0;
		}
		var_3_string = true;
		var_327_bool = 0;
		func_5443(var_327_bool);
		if(var_327_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x47b";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_47_cvector == (int)12018;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5627();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_5606();
		}
		var_106_bool = var_47_cvector == (int)12019;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_5627();
		}
		var_110_bool = var_47_cvector == (int)12015;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_5627();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_5606();
		}
		var_116_bool = var_47_cvector == (int)12023;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_5606();
		}
		var_120_bool = var_47_cvector == (int)12024;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_5633();
		}
		var_126_bool = var_47_cvector == (int)12033;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_5639();
		}
		var_156_bool = var_47_cvector == (int)12029;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_5639();
		}
		var_160_bool = var_47_cvector == (int)12343;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_5687();
		}
		var_164_bool = var_47_cvector == (int)12345;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_5689();
		}
		var_179_bool = var_47_cvector == (int)11986;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_5669();
		}
		var_185_bool = var_47_cvector == (int)10898;
		if(var_185_bool != 0) {
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_5675();
		}
		var_191_bool = var_47_cvector == (int)11987;
		if(var_191_bool != 0) {
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_5681();
		}
		var_197_bool = var_46_bool == (int)11988;
		if(var_197_bool != 0) {
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_5878(var_200_object);
			if(var_199_bool != 0) {
				var_207_bool = 0; var_208_object = Obj();
				var_208_object = var_1_object;
				func_5890(var_208_object);
				if(var_207_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 0) {
				var_213_string = "";
				func_1826(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)510844);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)510845, (int)11990, (int)11989);
				return 0;
			}
			var_234_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510841);
			@@@var_0_object:ClearReplies();
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_5878(var_237_object);
			if(var_236_bool != 0) {
				@@@var_0_object:AddReply((int)510873, (int)12022, (int)12021);
			}
			var_241_bool = 0;
			var_241_bool = 0;
			var_242_bool = 0;
			var_242_bool = 0;
			var_243_bool = 0; var_244_object = Obj();
			var_244_object = var_1_object;
			func_5902(var_244_object);
			if(var_243_bool != 0) {
				var_249_bool = 0; var_250_object = Obj();
				var_250_object = var_1_object;
				func_5914(var_250_object);
				if(var_249_bool != 0) {
					var_242_bool = 1;
				}
			}
			if(var_242_bool != 0) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_5962(var_255_bool, var_256_object);
				if(var_255_bool != 0) {
					var_241_bool = 1;
				}
			}
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)510876, (int)12025, (int)12024);
			}
			var_266_bool = 0;
			var_266_bool = 0;
			var_267_bool = 0;
			var_267_bool = 0;
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_5902(var_269_object);
			if(var_268_bool != 0) {
				var_270_bool = 0; var_271_object = Obj();
				var_271_object = var_1_object;
				func_5972(var_271_object);
				if(var_270_bool != 0) {
					var_267_bool = 1;
				}
			}
			if(var_267_bool != 0) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_5962(var_272_bool, var_273_object);
				var_274_bool = var_272_bool == 0; //@nz
				if(var_274_bool != 0) {
					var_266_bool = 1;
				}
			}
			if(var_266_bool != 0) {
				@@@var_0_object:AddReply((int)511160, (int)12344, (int)12343);
			}
			var_278_bool = 0; var_279_object = Obj();
			var_279_object = var_1_object;
			func_5926(var_279_object);
			if(var_278_bool != 0) {
				@@@var_0_object:AddReply((int)510842, (int)10885, (int)11986);
			}
			var_287_bool = 0; var_288_object = Obj();
			var_288_object = var_1_object;
			func_5938(var_288_object);
			if(var_287_bool != 0) {
				@@@var_0_object:AddReply((int)509894, (int)10899, (int)10898);
			}
			var_296_bool = 0;
			var_296_bool = 0;
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_object;
			func_5950(var_298_object);
			if(var_297_bool != 0) {
				var_303_bool = 0; var_304_object = Obj();
				var_304_object = var_1_object;
				func_5769(var_304_object);
				if(var_303_bool != 0) {
					var_296_bool = 1;
				}
			}
			if(var_296_bool != 0) {
				@@@var_0_object:AddReply((int)510843, (int)10909, (int)11987);
			}
			@@@var_0_object:AddReply((int)511157, (int)-1, (int)12342);
			return 0;
		}
		var_329_bool = var_46_bool == (int)10909;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509905, (int)10911, (int)10910);
			@@@var_0_object:AddReply((int)509912, (int)10911, (int)10917);
			@@@var_0_object:AddReply((int)509913, (int)10911, (int)10919);
			return 0;
		}
		var_342_bool = var_46_bool == (int)10911;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509907, (int)10913, (int)10912);
			@@@var_0_object:AddReply((int)509911, (int)-1, (int)10916);
			return 0;
		}
		var_352_bool = var_46_bool == (int)10913;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509909, (int)-1, (int)10914);
			@@@var_0_object:AddReply((int)509910, (int)-1, (int)10915);
			return 0;
		}
		var_362_bool = var_46_bool == (int)10899;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509896, (int)10901, (int)10900);
			@@@var_0_object:AddReply((int)509901, (int)10906, (int)10905);
			return 0;
		}
		var_372_bool = var_46_bool == (int)10906;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509903, (int)10901, (int)10907);
			return 0;
		}
		var_379_bool = var_46_bool == (int)10901;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509898, (int)10903, (int)10902);
			return 0;
		}
		var_386_bool = var_46_bool == (int)10903;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509900, (int)-1, (int)10904);
			return 0;
		}
		var_393_bool = var_46_bool == (int)10885;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509883, (int)10887, (int)10886);
			@@@var_0_object:AddReply((int)509893, (int)10887, (int)10896);
			return 0;
		}
		var_403_bool = var_46_bool == (int)10887;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509886, (int)10890, (int)10889);
			@@@var_0_object:AddReply((int)509885, (int)-1, (int)10888);
			return 0;
		}
		var_413_bool = var_46_bool == (int)10890;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509888, (int)10892, (int)10891);
			@@@var_0_object:AddReply((int)509892, (int)-1, (int)10895);
			return 0;
		}
		var_423_bool = var_46_bool == (int)10892;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509890, (int)-1, (int)10893);
			@@@var_0_object:AddReply((int)509891, (int)-1, (int)10894);
			return 0;
		}
		var_433_bool = var_46_bool == (int)12344;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511161);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511162, (int)-1, (int)12345);
			return 0;
		}
		var_440_bool = var_46_bool == (int)12025;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510878, (int)12030, (int)12026);
			@@@var_0_object:AddReply((int)510879, (int)12028, (int)12027);
			return 0;
		}
		var_450_bool = var_46_bool == (int)12028;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510881, (int)-1, (int)12029);
			return 0;
		}
		var_457_bool = var_46_bool == (int)12030;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510883, (int)12032, (int)12031);
			return 0;
		}
		var_464_bool = var_46_bool == (int)12032;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510885, (int)-1, (int)12033);
			return 0;
		}
		var_471_bool = var_46_bool == (int)12022;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510875, (int)-1, (int)12023);
			return 0;
		}
		var_478_bool = var_46_bool == (int)11990;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510846);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510847, (int)11994, (int)11991);
			@@@var_0_object:AddReply((int)510849, (int)11994, (int)11993);
			@@@var_0_object:AddReply((int)510848, (int)12010, (int)11992);
			return 0;
		}
		var_491_bool = var_46_bool == (int)11994;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510852, (int)12003, (int)11997);
			@@@var_0_object:AddReply((int)510853, (int)11999, (int)11998);
			@@@var_0_object:AddReply((int)510851, (int)12001, (int)11995);
			return 0;
		}
		var_504_bool = var_46_bool == (int)12001;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510856);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510857, (int)12003, (int)12002);
			return 0;
		}
		var_511_bool = var_46_bool == (int)11999;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510855, (int)12003, (int)12000);
			return 0;
		}
		var_518_bool = var_46_bool == (int)12003;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510859, (int)12007, (int)12006);
			@@@var_0_object:AddReply((int)534070, (int)35664, (int)35663);
			return 0;
		}
		var_528_bool = var_46_bool == (int)35664;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534072, (int)12010, (int)35665);
			return 0;
		}
		var_535_bool = var_46_bool == (int)12007;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510861, (int)12010, (int)12008);
			@@@var_0_object:AddReply((int)510862, (int)12014, (int)12009);
			return 0;
		}
		var_545_bool = var_46_bool == (int)12010;
		if(var_545_bool != 0) {
			var_546_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510864, (int)12012, (int)12011);
			@@@var_0_object:AddReply((int)534073, (int)12012, (int)35667);
			return 0;
		}
		var_555_bool = var_46_bool == (int)12012;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510865);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510866, (int)12014, (int)12013);
			return 0;
		}
		var_562_bool = var_46_bool == (int)12014;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534074, (int)35670, (int)35669);
			return 0;
		}
		var_569_bool = var_46_bool == (int)35670;
		if(var_569_bool != 0) {
			var_570_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510869, (int)12017, (int)12016);
			@@@var_0_object:AddReply((int)510868, (int)-1, (int)12015);
			return 0;
		}
		var_579_bool = var_46_bool == (int)12017;
		if(var_579_bool != 0) {
			var_580_string = "";
			func_1826(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510871, (int)-1, (int)12018);
			@@@var_0_object:AddReply((int)510872, (int)-1, (int)12019);
			return 0;
		}
		var_3_string = true;
		var_588_bool = 0;
		func_5443(var_588_bool);
		if(var_588_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x739";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_47_cvector == (int)12437;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5729();
		}
		var_57_bool = var_46_bool == (int)12435;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_2896(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511245);
			@@@var_0_object:ClearReplies();
			var_76_bool = 0;
			var_76_bool = 0;
			var_77_bool = 0; var_78_object = Obj();
			var_78_object = var_1_object;
			func_6085(var_78_object);
			if(var_77_bool != 0) {
				var_85_bool = 0; var_86_object = Obj();
				var_86_object = var_1_object;
				func_6097(var_86_object);
				if(var_85_bool != 0) {
					var_76_bool = 1;
				}
			}
			if(var_76_bool != 0) {
				@@@var_0_object:AddReply((int)511247, (int)12438, (int)12437);
			}
			@@@var_0_object:AddReply((int)511246, (int)-1, (int)12436);
			return 0;
		}
		var_98_bool = var_46_bool == (int)12438;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_2896(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511249, (int)12440, (int)12439);
			return 0;
		}
		var_105_bool = var_46_bool == (int)12440;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_2896(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511251, (int)12442, (int)12441);
			return 0;
		}
		var_112_bool = var_46_bool == (int)12442;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_2896(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511253, (int)-1, (int)12443);
			return 0;
		}
		var_3_string = true;
		var_118_bool = 0;
		func_5443(var_118_bool);
		if(var_118_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb67";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_47_cvector == (int)34823;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5717();
		}
		var_57_bool = var_47_cvector == (int)34827;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_5463();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_5472(var_86_object);
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_5457();
		}
		var_114_bool = var_47_cvector == (int)14700;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_5723();
		}
		var_120_bool = var_46_bool == (int)14699;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513462);
			@@@var_0_object:ClearReplies();
			var_139_bool = 0;
			var_139_bool = 0;
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_6049(var_141_object);
			if(var_140_bool != 0) {
				var_148_bool = 0; var_149_object = Obj();
				var_149_object = var_1_object;
				func_6037(var_149_object);
				if(var_148_bool != 0) {
					var_139_bool = 1;
				}
			}
			if(var_139_bool != 0) {
				@@@var_0_object:AddReply((int)533315, (int)37609, (int)34823);
			}
			var_157_bool = 0;
			var_157_bool = 0;
			var_158_bool = 0; var_159_object = Obj();
			var_159_object = var_1_object;
			func_6061(var_159_object);
			if(var_158_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_6073(var_165_object);
				if(var_164_bool != 0) {
					var_157_bool = 1;
				}
			}
			if(var_157_bool != 0) {
				@@@var_0_object:AddReply((int)513463, (int)14713, (int)14700);
			}
			@@@var_0_object:AddReply((int)513483, (int)-1, (int)14721);
			@@@var_0_object:AddReply((int)535898, (int)-1, (int)37608);
			return 0;
		}
		var_180_bool = var_46_bool == (int)14713;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513477, (int)14715, (int)14714);
			@@@var_0_object:AddReply((int)535926, (int)37644, (int)37643);
			return 0;
		}
		var_190_bool = var_46_bool == (int)37644;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535928, (int)-1, (int)37645);
			@@@var_0_object:AddReply((int)535929, (int)14715, (int)37646);
			return 0;
		}
		var_200_bool = var_46_bool == (int)14715;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513480, (int)14718, (int)14717);
			@@@var_0_object:AddReply((int)513479, (int)-1, (int)14716);
			return 0;
		}
		var_210_bool = var_46_bool == (int)14718;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513481);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513482, (int)-1, (int)14719);
			return 0;
		}
		var_217_bool = var_46_bool == (int)37609;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535900, (int)37611, (int)37610);
			@@@var_0_object:AddReply((int)535905, (int)37611, (int)37615);
			return 0;
		}
		var_227_bool = var_46_bool == (int)37611;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535902, (int)37613, (int)37612);
			@@@var_0_object:AddReply((int)535908, (int)37620, (int)37619);
			return 0;
		}
		var_237_bool = var_46_bool == (int)37620;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535909);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535914, (int)37613, (int)37625);
			@@@var_0_object:AddReply((int)535904, (int)37617, (int)37614);
			return 0;
		}
		var_247_bool = var_46_bool == (int)37613;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535903);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535910, (int)37622, (int)37621);
			return 0;
		}
		var_254_bool = var_46_bool == (int)37622;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535912, (int)37624, (int)37623);
			return 0;
		}
		var_261_bool = var_46_bool == (int)37624;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535915, (int)37617, (int)37627);
			@@@var_0_object:AddReply((int)535916, (int)37617, (int)37629);
			return 0;
		}
		var_271_bool = var_46_bool == (int)37617;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535906);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535907, (int)37631, (int)37618);
			return 0;
		}
		var_278_bool = var_46_bool == (int)37631;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535918, (int)34824, (int)37632);
			@@@var_0_object:AddReply((int)535919, (int)34824, (int)37633);
			return 0;
		}
		var_288_bool = var_46_bool == (int)34824;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533317, (int)34826, (int)34825);
			return 0;
		}
		var_295_bool = var_46_bool == (int)34826;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535920, (int)37636, (int)37635);
			@@@var_0_object:AddReply((int)535922, (int)37636, (int)37637);
			return 0;
		}
		var_305_bool = var_46_bool == (int)37636;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535925, (int)37640, (int)37642);
			@@@var_0_object:AddReply((int)535923, (int)37640, (int)37639);
			return 0;
		}
		var_315_bool = var_46_bool == (int)37640;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_3213(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533319, (int)-1, (int)34827);
			return 0;
		}
		var_3_string = true;
		var_321_bool = 0;
		func_5443(var_321_bool);
		if(var_321_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xca4";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_47_cvector == (int)36154;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5528();
		}
		var_57_bool = var_47_cvector == (int)36158;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_5483(var_59_object);
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_5501();
		}
		var_131_bool = var_47_cvector == (int)41664;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_5540();
		}
		var_149_bool = var_47_cvector == (int)42228;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_5534();
		}
		var_155_bool = var_46_bool == (int)36153;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534512);
			@@@var_0_object:ClearReplies();
			var_174_bool = 0;
			var_174_bool = 0;
			var_175_bool = 0; var_176_object = Obj();
			var_176_object = var_1_object;
			func_5806(var_176_object);
			if(var_175_bool != 0) {
				var_181_bool = 0; var_182_object = Obj();
				var_182_object = var_1_object;
				func_5818(var_182_object);
				if(var_181_bool != 0) {
					var_174_bool = 1;
				}
			}
			if(var_174_bool != 0) {
				@@@var_0_object:AddReply((int)534513, (int)41645, (int)36154);
			}
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_5830(var_191_object);
			if(var_190_bool != 0) {
				@@@var_0_object:AddReply((int)540246, (int)42229, (int)42228);
			}
			@@@var_0_object:AddReply((int)534518, (int)-1, (int)36159);
			return 0;
		}
		var_203_bool = var_46_bool == (int)42229;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540248, (int)42232, (int)42230);
			@@@var_0_object:AddReply((int)540249, (int)42233, (int)42231);
			return 0;
		}
		var_213_bool = var_46_bool == (int)42233;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540252, (int)42236, (int)42234);
			return 0;
		}
		var_220_bool = var_46_bool == (int)42232;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540253, (int)42236, (int)42235);
			return 0;
		}
		var_227_bool = var_46_bool == (int)42236;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540254);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540255, (int)-1, (int)42238);
			@@@var_0_object:AddReply((int)540256, (int)42240, (int)42239);
			return 0;
		}
		var_237_bool = var_46_bool == (int)42240;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540258, (int)-1, (int)42241);
			return 0;
		}
		var_244_bool = var_46_bool == (int)41645;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539693, (int)41648, (int)41646);
			@@@var_0_object:AddReply((int)539694, (int)40360, (int)41647);
			return 0;
		}
		var_254_bool = var_46_bool == (int)41648;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539695);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539696, (int)40360, (int)41649);
			return 0;
		}
		var_261_bool = var_46_bool == (int)40360;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538476);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538477, (int)40362, (int)40361);
			@@@var_0_object:AddReply((int)538481, (int)40366, (int)40365);
			return 0;
		}
		var_271_bool = var_46_bool == (int)40366;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539691, (int)40362, (int)41643);
			@@@var_0_object:AddReply((int)539697, (int)41652, (int)41651);
			return 0;
		}
		var_281_bool = var_46_bool == (int)41652;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539699, (int)40362, (int)41653);
			@@@var_0_object:AddReply((int)539701, (int)41658, (int)41657);
			return 0;
		}
		var_291_bool = var_46_bool == (int)41658;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539702);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539703, (int)40364, (int)41659);
			@@@var_0_object:AddReply((int)539704, (int)41662, (int)41661);
			return 0;
		}
		var_301_bool = var_46_bool == (int)41662;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539706, (int)40364, (int)41663);
			@@@var_0_object:AddReply((int)539707, (int)-1, (int)41664);
			return 0;
		}
		var_311_bool = var_46_bool == (int)40362;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538479, (int)40364, (int)40363);
			@@@var_0_object:AddReply((int)539700, (int)40364, (int)41655);
			return 0;
		}
		var_321_bool = var_46_bool == (int)40364;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_3850(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534517, (int)-1, (int)36158);
			return 0;
		}
		var_3_string = true;
		var_327_bool = 0;
		func_5443(var_327_bool);
		if(var_327_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf21";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_46_bool == (int)36960;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_4416(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_80_bool = var_46_bool == (int)36962;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_4416(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_90_bool = var_46_bool == (int)36964;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_4416(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_99_bool = 0;
		func_5443(var_99_bool);
		if(var_99_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1157";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	if((int)1 != 0) {
		func_5296();
		var_51_bool = var_46_int == (int)42557;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_4670(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_5443(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1255";
	
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_48_bool = var_46_int == (int)10;
	if(var_48_bool != 0) {
		func_4806();
		var_50_bool = 0;
		var_50_bool = 0;
		var_51_bool = 0;
		func_5020(var_51_bool);
		if(var_51_bool != 0) {
			var_54_bool = 0;
			func_4775(var_54_bool);
			if(var_54_bool != 0) {
				var_50_bool = 1;
			}
		}
		if(var_50_bool != 0) {
			var_71_bool = 0;
			func_4755(var_71_bool);
			if(var_71_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				func_5303(Obj());
				var_92_object = var_91_object;
				func_5170(var_90_bool, var_91_object);
			}
		} else {
			func_4770(var_46_int);
			func_4797();
		}
	}
	return 0;
	
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_4988();
	func_4806();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0();
	func_4806();
	var_47_string = "";
	func_5250("Neutral");
	func_4797();
	return 0;
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool;
	if(var_47_bool != 0) {
		func_4797();
	} else {
		var_53_string = "";
		func_5250("Neutral");
	}
	return 0;
	
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	IsOverrideActive(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		EventDisable(0);
		func_4988();
		var_50_bool = 0; var_51_object = Obj();
		var_46_object = var_51_object;
		func_5011(var_50_bool, var_51_object);
		EventEnable(0);
		var_64_object = Obj();
		var_46_object = var_64_object;
		func_6365(var_64_object);
		var_1030_string = "";
		func_5250("Neutral");
		func_4806();
		func_4797();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_4741(var_45_cvector);
	return 0;
}


func_0(var_0_object, var_67_int, var_68_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_object = Obj(); var_75_bool = 0; var_76_int = 0; var_77_bool = 0;
	var_0_object = var_68_object;
	var_78_bool = 0; var_79_object = Obj(); var_80_float = 0;
	var_68_object = var_79_object;
	func_5025(var_78_bool, var_79_object, (float)70.0);
	var_125_bool = var_78_bool == 0; //@nz
	if(var_125_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	CreateDialog(var_74_object);
	var_126_int = 0;
	func_5437(var_126_int);
	@@var_74_object:SetNPCName(var_126_int);
	var_127_int = 0;
	func_5435(var_127_int);
	@@var_74_object:SetNPCDescription(var_127_int);
	var_128_string = "";
	func_5439(var_128_string);
	@@var_74_object:SetPhoto(var_128_string);
	var_129_string = "";
	func_5441(var_129_string);
	@@var_74_object:SetPhoto2(var_129_string);
	var_130_int = 0;
	func_6348(var_130_int);
	@@var_74_object:SetPlayerName(var_130_int);
	IsOverrideActive(var_75_bool);
	var_138_bool = var_75_bool;
	if(var_138_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	DoDialog(var_74_object);
	var_139_bool = 0; var_140_object = Obj();
	func_5303(Obj());
	var_141_object = var_140_object;
	func_5112(var_139_bool, var_140_object);
	var_234_object = Obj(); var_235_object = Obj();
	var_68_object = var_234_object;
	var_74_object = var_235_object;
	TaskCall(1);
	func_81(var_236_object, var_237_object, var_238_string, var_239_bool, var_234_object, var_235_object);
	TaskReturn();
	@@var_74_object:IsDialogEnd(var_77_bool);
	
Label_63:
	var_291_bool = var_77_bool == 0; //@nz
	if(var_291_bool != 0) {
		sync();
		@@var_74_object:IsDialogEnd(var_77_bool);
		goto Label_63;
	}
	var_68_object = Obj();
	func_5094();
	StopDialog(var_74_object);
	@@var_74_object:GetReturnValue((int)-1);
	var_76_int = var_67_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5633()
{
	SetVariable("ood3Kapella2", (int)1);
	return 0;
}


func_4612(var_0_object, var_1_object, var_2_object, var_3_string, var_998_object, var_999_object)
{
	var_0_object = var_999_object;
	var_1_object = var_998_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1005_string = "";
		func_4670(var_999_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_4640;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1208";
	}
Label_4640:
	var_1020_bool = 0;
	func_5443(var_1020_bool);
	if(var_1020_bool != 0) {

	Label_4644:
		lshWaitForAnimEnd();
		var_1021_string = var_3_string;
		if(var_1021_string != 0) {
		} else {
			var_1022_string = "";
			var_1022_string = var_2_object;
			func_5250(var_1022_string);
			goto Label_4644;
	}
		PlayAnimation("all", "idle");

	Label_4659:
		WaitForAnimEnd();
		var_1025_string = var_3_string;
		if(var_1025_string != 0) {
			goto Label_4669;
		}
		PlayAnimation("all", "idle");
		goto Label_4659;
	}
	goto Label_4669;
	
Label_4669:
	return 0;
	
}


func_5639()
{
	var_129_object = Obj(); var_130_object = Obj(); var_131_object = Obj(); var_132_object = Obj();
	func_6298(Obj());
	var_133_object = var_131_object;
	@@var_131_object:FindMark(var_132_object, "d3q03KapellaBoyLocation");
	var_141_object = var_132_object;
	if(var_141_object != 0) {
		@@var_132_object:Remove();
	}
	@@var_131_object:FindMark(var_132_object, "d8q01OspinaGotoMladVlad");
	var_143_object = var_132_object;
	if(var_143_object != 0) {
		@@var_132_object:Remove();
	}
	func_6218();
	var_152_bool = 0; var_153_string = ""; var_154_string = "";
	func_5379(var_152_bool, "quest_d3_03", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1033(var_0_object, var_1_object, var_2_object, var_3_string, var_328_object, var_329_object)
{
	var_0_object = var_329_object;
	var_1_object = var_328_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_335_string = "";
		func_1124(var_329_object, "Neutral");
		@@@var_0_object:SetMessage((int)506647);
		@@@var_0_object:ClearReplies();
		var_344_bool = 0;
		var_344_bool = 0;
		var_345_bool = 0; var_346_object = Obj();
		var_346_object = var_1_object;
		func_5842(var_346_object);
		if(var_345_bool != 0) {
			var_353_bool = 0; var_354_object = Obj();
			var_354_object = var_1_object;
			func_5866(var_354_object);
			if(var_353_bool != 0) {
				var_344_bool = 1;
			}
		}
		if(var_344_bool != 0) {
			@@@var_0_object:AddReply((int)507373, (int)35431, (int)8134);
		}
		var_362_bool = 0;
		var_362_bool = 0;
		var_363_bool = 0; var_364_object = Obj();
		var_364_object = var_1_object;
		func_5854(var_364_object);
		if(var_363_bool != 0) {
			var_369_bool = 0; var_370_object = Obj();
			var_370_object = var_1_object;
			func_6121(var_370_object);
			if(var_369_bool != 0) {
				var_362_bool = 1;
			}
		}
		if(var_362_bool != 0) {
			@@@var_0_object:AddReply((int)506640, (int)7312, (int)7311);
		}
		@@@var_0_object:AddReply((int)507533, (int)-1, (int)8315);
		goto Label_1094;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x40d";
	}
Label_1094:
	var_381_bool = 0;
	func_5443(var_381_bool);
	if(var_381_bool != 0) {

	Label_1098:
		lshWaitForAnimEnd();
		var_382_string = var_3_string;
		if(var_382_string != 0) {
		} else {
			var_383_string = "";
			var_383_string = var_2_object;
			func_5250(var_383_string);
			goto Label_1098;
	}
		PlayAnimation("all", "idle");

	Label_1113:
		WaitForAnimEnd();
		var_386_string = var_3_string;
		if(var_386_string != 0) {
			goto Label_1123;
		}
		PlayAnimation("all", "idle");
		goto Label_1113;
	}
	goto Label_1123;
	
Label_1123:
	return 0;
	
}


func_6153()
{
	var_134_object = Obj(); var_135_object = Obj();
	CreateDiaryEntry(var_135_object, (int)792, (int)2, (int)543367);
	var_139_bool = 0; var_140_object = Obj(); var_141_int = 0;
	var_135_object = var_140_object;
	func_6270(var_139_bool, var_140_object, (int)686);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1557(var_0_object, var_393_int, var_394_object)
{
	var_396_object = Obj(); var_397_bool = 0; var_398_int = 0; var_399_bool = 0; var_400_object = Obj(); var_401_bool = 0; var_402_int = 0; var_403_bool = 0;
	var_0_object = var_394_object;
	var_404_bool = 0; var_405_object = Obj(); var_406_float = 0;
	var_394_object = var_405_object;
	func_5025(var_404_bool, var_405_object, (float)70.0);
	var_407_bool = var_404_bool == 0; //@nz
	if(var_407_bool != 0) {
		var_393_int = -2;
		return 8;
	}
	CreateDialog(var_400_object);
	var_408_int = 0;
	func_5437(var_408_int);
	@@var_400_object:SetNPCName(var_408_int);
	var_409_int = 0;
	func_5435(var_409_int);
	@@var_400_object:SetNPCDescription(var_409_int);
	var_410_string = "";
	func_5439(var_410_string);
	@@var_400_object:SetPhoto(var_410_string);
	var_411_string = "";
	func_5441(var_411_string);
	@@var_400_object:SetPhoto2(var_411_string);
	var_412_int = 0;
	func_6348(var_412_int);
	@@var_400_object:SetPlayerName(var_412_int);
	IsOverrideActive(var_401_bool);
	var_413_bool = var_401_bool;
	if(var_413_bool != 0) {
		var_393_int = -2;
		return 8;
	}
	DoDialog(var_400_object);
	var_414_bool = 0; var_415_object = Obj();
	func_5303(Obj());
	var_416_object = var_415_object;
	func_5112(var_414_bool, var_415_object);
	var_417_object = Obj(); var_418_object = Obj();
	var_394_object = var_417_object;
	var_400_object = var_418_object;
	TaskCall(7);
	func_1638(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object);
	TaskReturn();
	@@var_400_object:IsDialogEnd(var_403_bool);
	
Label_1620:
	var_551_bool = var_403_bool == 0; //@nz
	if(var_551_bool != 0) {
		sync();
		@@var_400_object:IsDialogEnd(var_403_bool);
		goto Label_1620;
	}
	var_394_object = Obj();
	func_5094();
	StopDialog(var_400_object);
	@@var_400_object:GetReturnValue((int)-1);
	var_402_int = var_393_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6166()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)688, (int)2, (int)534536);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_6270(var_67_bool, var_68_object, (int)686);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6179()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)52, (int)1, (int)512134);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_6270(var_81_bool, var_82_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5669()
{
	SetVariable("ood3Kapella3", (int)1);
	return 0;
}


func_5675()
{
	SetVariable("ood3Kapella4", (int)1);
	return 0;
}


func_3117(var_0_object, var_1_object, var_2_object, var_3_string, var_769_object, var_770_object)
{
	var_0_object = var_770_object;
	var_1_object = var_769_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_776_string = "";
		func_3213(var_770_object, "Neutral");
		@@@var_0_object:SetMessage((int)513462);
		@@@var_0_object:ClearReplies();
		var_785_bool = 0;
		var_785_bool = 0;
		var_786_bool = 0; var_787_object = Obj();
		var_787_object = var_1_object;
		func_6049(var_787_object);
		if(var_786_bool != 0) {
			var_792_bool = 0; var_793_object = Obj();
			var_793_object = var_1_object;
			func_6037(var_793_object);
			if(var_792_bool != 0) {
				var_785_bool = 1;
			}
		}
		if(var_785_bool != 0) {
			@@@var_0_object:AddReply((int)533315, (int)37609, (int)34823);
		}
		var_801_bool = 0;
		var_801_bool = 0;
		var_802_bool = 0; var_803_object = Obj();
		var_803_object = var_1_object;
		func_6061(var_803_object);
		if(var_802_bool != 0) {
			var_808_bool = 0; var_809_object = Obj();
			var_809_object = var_1_object;
			func_6073(var_809_object);
			if(var_808_bool != 0) {
				var_801_bool = 1;
			}
		}
		if(var_801_bool != 0) {
			@@@var_0_object:AddReply((int)513463, (int)14713, (int)14700);
		}
		@@@var_0_object:AddReply((int)513483, (int)-1, (int)14721);
		@@@var_0_object:AddReply((int)535898, (int)-1, (int)37608);
		goto Label_3183;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc31";
	}
Label_3183:
	var_823_bool = 0;
	func_5443(var_823_bool);
	if(var_823_bool != 0) {

	Label_3187:
		lshWaitForAnimEnd();
		var_824_string = var_3_string;
		if(var_824_string != 0) {
		} else {
			var_825_string = "";
			var_825_string = var_2_object;
			func_5250(var_825_string);
			goto Label_3187;
	}
		PlayAnimation("all", "idle");

	Label_3202:
		WaitForAnimEnd();
		var_828_string = var_3_string;
		if(var_828_string != 0) {
			goto Label_3212;
		}
		PlayAnimation("all", "idle");
		goto Label_3202;
	}
	goto Label_3212;
	
Label_3212:
	return 0;
	
}


func_558(var_2_object, var_678_string)
{
	var_679_bool = 0;
	func_5443(var_679_bool);
	var_680_bool = var_679_bool == 0; //@nz
	if(var_680_bool != 0) {
		return 0;
	}
	var_681_bool = var_678_string == var_2_object;
	if(var_681_bool != 0) {
		return 0;
	}
	var_682_string = ""; var_683_bool = 0;
	var_678_string = var_682_string;
	var_685_bool = var_678_string == "";
	if(var_685_bool != 0) {
		var_683_bool = 0;
	} else {
		var_683_bool = 1;
	}
	func_5266(var_682_string, var_683_bool);
	var_2_object = var_678_string;
	return 0;
	
}


func_6192()
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateDiaryEntry(var_61_object, (int)27, (int)2, (int)503367);
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0;
	var_61_object = var_66_object;
	func_6270(var_65_bool, var_66_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5681()
{
	SetVariable("ood3Kapella5", (int)1);
	return 0;
}


func_5170(var_150_bool, var_151_object)
{
	var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = ""; var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = "";
	var_157_string = "c";
	var_158_int = 0;
	
Label_5173:
	if((int)1 != 0) {
		var_164_int = var_158_int + (int)1;
		var_165_int = var_157_string + var_164_int;
		@@var_151_object:HasProperty(var_165_int, var_159_bool);
		var_166_bool = var_159_bool == 0; //@nz
		if(var_166_bool != 0) {
		} else {
			var_158_int = var_158_int + (int)1;
			goto Label_5173;
		}
	}
	var_167_bool = var_158_int == 0; //@nz
	if(var_167_bool != 0) {
		var_150_bool = 0;
		return 10;
	}
	var_160_int = 0;
	var_169_bool = var_158_int > (int)1;
	if(var_169_bool != 0) {
		irand(var_160_int, var_158_int);
	}
	var_171_int = var_160_int + (int)1;
	var_172_int = var_157_string + var_171_int;
	@@var_151_object:GetProperty(var_172_int, var_161_string);
	var_173_bool = 0; var_174_string = "";
	var_161_string = var_174_string;
	func_5281(var_173_bool, var_174_string);
	var_173_bool = var_150_bool;
	return 10;
	
}


func_5687()
{
	return 0;
}


func_5689()
{
	func_6231();
	var_175_bool = 0; var_176_string = ""; var_177_string = "";
	func_5379(var_175_bool, "quest_d3_03", "fail");
	return 0;
}


func_6205()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)83, (int)2, (int)512165);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_6270(var_88_bool, var_89_object, (int)27);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4670(var_2_object, var_1005_string)
{
	var_1006_bool = 0;
	func_5443(var_1006_bool);
	var_1007_bool = var_1006_bool == 0; //@nz
	if(var_1007_bool != 0) {
		return 0;
	}
	var_1008_bool = var_1005_string == var_2_object;
	if(var_1008_bool != 0) {
		return 0;
	}
	var_1009_string = ""; var_1010_bool = 0;
	var_1005_string = var_1009_string;
	var_1012_bool = var_1005_string == "";
	if(var_1012_bool != 0) {
		var_1010_bool = 0;
	} else {
		var_1010_bool = 1;
	}
	func_5266(var_1009_string, var_1010_bool);
	var_2_object = var_1005_string;
	return 0;
	
}


func_5699()
{
	SetVariable("ood6Kapella1", (int)1);
	return 0;
}


func_5705()
{
	SetVariable("d6q02KnowAboutAttack", (int)1);
	return 0;
}


func_6218()
{
	var_144_object = Obj(); var_145_object = Obj();
	CreateDiaryEntry(var_145_object, (int)85, (int)2, (int)512167);
	var_149_bool = 0; var_150_object = Obj(); var_151_int = 0;
	var_145_object = var_150_object;
	func_6270(var_149_bool, var_150_object, (int)27);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5711()
{
	SetVariable("KnowViktoria", (int)1);
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_234_object, var_235_object)
{
	var_0_object = var_235_object;
	var_1_object = var_234_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_241_object = Obj(); var_242_object = Obj();
		var_241_object = var_1_object;
		var_242_object = var_0_object;
		func_5445();
		var_245_object = Obj(); var_246_object = Obj();
		var_245_object = var_1_object;
		var_246_object = var_0_object;
		func_5451();
		var_249_string = "";
		func_149(var_235_object, "Neutral");
		@@@var_0_object:SetMessage((int)500473);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500476, (int)547, (int)546);
		@@@var_0_object:AddReply((int)500474, (int)545, (int)544);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_273_bool = 0;
	func_5443(var_273_bool);
	if(var_273_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_274_string = var_3_string;
		if(var_274_string != 0) {
		} else {
			var_275_string = "";
			var_275_string = var_2_object;
			func_5250(var_275_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_288_string = var_3_string;
		if(var_288_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_5717()
{
	SetVariable("ood8Kapella1", (int)1);
	return 0;
}


func_5207(var_181_bool, var_182_object)
{
	var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = ""; var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = "";
	var_194_int = 0;
	func_5396(var_194_int);
	var_200_int = "d" + var_194_int;
	var_188_string = var_200_int + "m";
	var_189_int = 0;
	
Label_5216:
	if((int)1 != 0) {
		var_204_int = var_189_int + (int)1;
		var_205_int = var_188_string + var_204_int;
		@@var_182_object:HasProperty(var_205_int, var_190_bool);
		var_206_bool = var_190_bool == 0; //@nz
		if(var_206_bool != 0) {
		} else {
			var_189_int = var_189_int + (int)1;
			goto Label_5216;
		}
	}
	var_207_bool = var_189_int == 0; //@nz
	if(var_207_bool != 0) {
		var_181_bool = 0;
		return 10;
	}
	var_191_int = 0;
	var_209_bool = var_189_int > (int)1;
	if(var_209_bool != 0) {
		irand(var_191_int, var_189_int);
	}
	var_211_int = var_191_int + (int)1;
	var_212_int = var_188_string + var_211_int;
	@@var_182_object:GetProperty(var_212_int, var_192_string);
	var_213_bool = 0; var_214_string = "";
	var_192_string = var_214_string;
	func_5281(var_213_bool, var_214_string);
	var_213_bool = var_181_bool;
	return 10;
	
}


func_6231()
{
	var_167_object = Obj(); var_168_object = Obj();
	CreateDiaryEntry(var_168_object, (int)86, (int)2, (int)512168);
	var_172_bool = 0; var_173_object = Obj(); var_174_int = 0;
	var_168_object = var_173_object;
	func_6270(var_172_bool, var_173_object, (int)27);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5723()
{
	SetVariable("ood8Kapella2", (int)1);
	return 0;
}


func_5729()
{
	SetVariable("ood4Kapella1", (int)1);
	return 0;
}


func_1124(var_2_object, var_335_string)
{
	var_336_bool = 0;
	func_5443(var_336_bool);
	var_337_bool = var_336_bool == 0; //@nz
	if(var_337_bool != 0) {
		return 0;
	}
	var_338_bool = var_335_string == var_2_object;
	if(var_338_bool != 0) {
		return 0;
	}
	var_339_string = ""; var_340_bool = 0;
	var_335_string = var_339_string;
	var_342_bool = var_335_string == "";
	if(var_342_bool != 0) {
		var_340_bool = 0;
	} else {
		var_340_bool = 1;
	}
	func_5266(var_339_string, var_340_bool);
	var_2_object = var_335_string;
	return 0;
	
}


func_6244()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)647, (int)2, (int)533320);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_6270(var_67_bool, var_68_object, (int)127);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1638(var_0_object, var_1_object, var_2_object, var_3_string, var_417_object, var_418_object)
{
	var_0_object = var_418_object;
	var_1_object = var_417_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_424_bool = 0;
		var_424_bool = 0;
		var_425_bool = 0; var_426_object = Obj();
		var_426_object = var_1_object;
		func_5878(var_426_object);
		if(var_425_bool != 0) {
			var_431_bool = 0; var_432_object = Obj();
			var_432_object = var_1_object;
			func_5890(var_432_object);
			if(var_431_bool != 0) {
				var_424_bool = 1;
			}
		}
		if(var_424_bool != 0) {
			var_437_string = "";
			func_1826(var_418_object, "Neutral");
			@@@var_0_object:SetMessage((int)510844);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510845, (int)11990, (int)11989);
		} else {
				var_457_string = "";
				func_1826(var_418_object, "Neutral");
				@@@var_0_object:SetMessage((int)510841);
				@@@var_0_object:ClearReplies();
				var_459_bool = 0; var_460_object = Obj();
				var_460_object = var_1_object;
				func_5878(var_460_object);
				if(var_459_bool != 0) {
					@@@var_0_object:AddReply((int)510873, (int)12022, (int)12021);
				}
				var_464_bool = 0;
				var_464_bool = 0;
				var_465_bool = 0;
				var_465_bool = 0;
				var_466_bool = 0; var_467_object = Obj();
				var_467_object = var_1_object;
				func_5902(var_467_object);
				if(var_466_bool != 0) {
					var_472_bool = 0; var_473_object = Obj();
					var_473_object = var_1_object;
					func_5914(var_473_object);
					if(var_472_bool != 0) {
						var_465_bool = 1;
					}
				}
				if(var_465_bool != 0) {
					var_478_bool = 0; var_479_object = Obj();
					var_479_object = var_1_object;
					func_5962(var_478_bool, var_479_object);
					if(var_478_bool != 0) {
						var_464_bool = 1;
					}
				}
				if(var_464_bool != 0) {
					@@@var_0_object:AddReply((int)510876, (int)12025, (int)12024);
				}
				var_489_bool = 0;
				var_489_bool = 0;
				var_490_bool = 0;
				var_490_bool = 0;
				var_491_bool = 0; var_492_object = Obj();
				var_492_object = var_1_object;
				func_5902(var_492_object);
				if(var_491_bool != 0) {
					var_493_bool = 0; var_494_object = Obj();
					var_494_object = var_1_object;
					func_5972(var_494_object);
					if(var_493_bool != 0) {
						var_490_bool = 1;
					}
				}
				if(var_490_bool != 0) {
					var_495_bool = 0; var_496_object = Obj();
					var_496_object = var_1_object;
					func_5962(var_495_bool, var_496_object);
					var_497_bool = var_495_bool == 0; //@nz
					if(var_497_bool != 0) {
						var_489_bool = 1;
					}
				}
				if(var_489_bool != 0) {
					@@@var_0_object:AddReply((int)511160, (int)12344, (int)12343);
				}
				var_501_bool = 0; var_502_object = Obj();
				var_502_object = var_1_object;
				func_5926(var_502_object);
				if(var_501_bool != 0) {
					@@@var_0_object:AddReply((int)510842, (int)10885, (int)11986);
				}
				var_510_bool = 0; var_511_object = Obj();
				var_511_object = var_1_object;
				func_5938(var_511_object);
				if(var_510_bool != 0) {
					@@@var_0_object:AddReply((int)509894, (int)10899, (int)10898);
				}
				var_519_bool = 0;
				var_519_bool = 0;
				var_520_bool = 0; var_521_object = Obj();
				var_521_object = var_1_object;
				func_5950(var_521_object);
				if(var_520_bool != 0) {
					var_526_bool = 0; var_527_object = Obj();
					var_527_object = var_1_object;
					func_5769(var_527_object);
					if(var_526_bool != 0) {
						var_519_bool = 1;
					}
				}
				if(var_519_bool != 0) {
					@@@var_0_object:AddReply((int)510843, (int)10909, (int)11987);
				}
				@@@var_0_object:AddReply((int)511157, (int)-1, (int)12342);
				goto Label_1796;
		}
	}
Label_1796:
	var_449_bool = 0;
	func_5443(var_449_bool);
	if(var_449_bool != 0) {

	Label_1800:
		lshWaitForAnimEnd();
		var_450_string = var_3_string;
		if(var_450_string != 0) {
		} else {
			var_451_string = "";
			var_451_string = var_2_object;
			func_5250(var_451_string);
			goto Label_1800;
	}
		PlayAnimation("all", "idle");

	Label_1815:
		WaitForAnimEnd();
		var_454_string = var_3_string;
		if(var_454_string != 0) {
			goto Label_1825;
		}
		PlayAnimation("all", "idle");
		goto Label_1815;

	}
	goto Label_1825;
	
Label_1825:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x66a";


func_5735()
{
	SetVariable("KnowPredictions", (int)1);
	return 0;
}


func_3687(var_0_object, var_835_int, var_836_object)
{
	var_838_object = Obj(); var_839_bool = 0; var_840_int = 0; var_841_bool = 0; var_842_object = Obj(); var_843_bool = 0; var_844_int = 0; var_845_bool = 0;
	var_0_object = var_836_object;
	var_846_bool = 0; var_847_object = Obj(); var_848_float = 0;
	var_836_object = var_847_object;
	func_5025(var_846_bool, var_847_object, (float)70.0);
	var_849_bool = var_846_bool == 0; //@nz
	if(var_849_bool != 0) {
		var_835_int = -2;
		return 8;
	}
	CreateDialog(var_842_object);
	var_850_int = 0;
	func_5437(var_850_int);
	@@var_842_object:SetNPCName(var_850_int);
	var_851_int = 0;
	func_5435(var_851_int);
	@@var_842_object:SetNPCDescription(var_851_int);
	var_852_string = "";
	func_5439(var_852_string);
	@@var_842_object:SetPhoto(var_852_string);
	var_853_string = "";
	func_5441(var_853_string);
	@@var_842_object:SetPhoto2(var_853_string);
	var_854_int = 0;
	func_6348(var_854_int);
	@@var_842_object:SetPlayerName(var_854_int);
	IsOverrideActive(var_843_bool);
	var_855_bool = var_843_bool;
	if(var_855_bool != 0) {
		var_835_int = -2;
		return 8;
	}
	DoDialog(var_842_object);
	var_856_bool = 0; var_857_object = Obj();
	func_5303(Obj());
	var_858_object = var_857_object;
	func_5112(var_856_bool, var_857_object);
	var_859_object = Obj(); var_860_object = Obj();
	var_836_object = var_859_object;
	var_842_object = var_860_object;
	TaskCall(13);
	func_3768(var_861_object, var_862_object, var_863_string, var_864_bool, var_859_object, var_860_object);
	TaskReturn();
	@@var_842_object:IsDialogEnd(var_845_bool);
	
Label_3750:
	var_911_bool = var_845_bool == 0; //@nz
	if(var_911_bool != 0) {
		sync();
		@@var_842_object:IsDialogEnd(var_845_bool);
		goto Label_3750;
	}
	var_836_object = Obj();
	func_5094();
	StopDialog(var_842_object);
	@@var_842_object:GetReturnValue((int)-1);
	var_844_int = var_835_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5741()
{
	var_58_object = Obj(); var_59_object = Obj();
	func_6298(Obj());
	var_60_object = var_59_object;
	var_71_float = 0;
	func_5391(var_71_float);
	@@var_59_object:AddMark("d6q02KapellaGotoMladVlad", "pt_map_mladvlad", (int)0, (int)515377, var_71_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6257(var_76_object)
{
	var_77_object = Obj(); var_78_object = Obj();
	GetDiaryRoot(var_78_object);
	var_79_bool = var_78_object == 0; //@nz
	if(var_79_bool != 0) {
		Trace("Can't retrieve diary root");
		var_76_object = 0;
		return 2;
	}
	var_78_object = var_76_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5757()
{
	SetVariable("d6KapellaVisit", (int)1);
	return 0;
}


func_6270(var_67_bool, var_68_object, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0;
	func_6257(Obj());
	var_76_object = var_73_object;
	@@var_73_object:Find(var_69_int, var_74_object);
	var_81_bool = var_74_object == 0; //@nz
	if(var_81_bool != 0) {
		var_83_int = "Can't find diary parent with id: " + var_69_int;
		Trace(var_83_int);
		var_67_bool = 0;
		return 6;
	}
	@@var_74_object:AddChild(var_68_object);
	SendWorldWndMessage((int)7);
	@@var_68_object:GetCategory(var_75_int);
	SetDiarySection(var_75_int);
	var_67_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5250(var_275_string)
{
	var_276_bool = 0; var_277_float = 0; var_278_float = 0; var_279_bool = 0; var_280_float = 0; var_281_float = 0;
	lshHasAnimation(var_279_bool, var_275_string);
	var_282_bool = var_279_bool;
	if(var_282_bool != 0) {
		lshGetAnimTimes(var_275_string, var_280_float, var_281_float);
		lshPlayAnimation(var_280_float, var_281_float, (bool)0);
	} else {
		var_285_int = "Can't find lsh animation : " + var_275_string;
		Trace(var_285_int);
	}
	return 6;
	
}


func_5763()
{
	SetVariable("ood6Kapella3", (int)1);
	return 0;
}


func_4741(var_0_object)
{
	var_47_bool = 0;
	func_5020(var_47_bool);
	var_50_bool = var_47_bool == 0; //@nz
	if(var_50_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_4750:
	func_4917();
	goto Label_4750;
}
EMIT "Return(); Pop(0)";


func_5769(var_526_bool)
{
	var_528_bool = 0;
	var_528_bool = 0;
	var_529_bool = 0;
	var_529_bool = 0;
	var_530_int = 0; var_531_string = "";
	func_5319(var_530_int, "d3q01");
	var_533_bool = var_530_int == (int)0;
	var_534_bool = var_533_bool == 0; //@nz
	if(var_534_bool != 0) {
		var_535_int = 0; var_536_string = "";
		func_5319(var_535_int, "d3q01");
		var_538_bool = var_535_int == (int)1000;
		var_539_bool = var_538_bool == 0; //@nz
		if(var_539_bool != 0) {
			var_529_bool = 1;
		}
	}
	if(var_529_bool != 0) {
		var_540_int = 0; var_541_string = "";
		func_5319(var_540_int, "d3q01");
		var_543_bool = var_540_int == (int)-1;
		var_544_bool = var_543_bool == 0; //@nz
		if(var_544_bool != 0) {
			var_528_bool = 1;
		}
	}
	if(var_528_bool != 0) {
		var_526_bool = 1;
		return 0;
	}
	var_526_bool = 0;
	return 0;
}


func_3213(var_2_object, var_776_string)
{
	var_777_bool = 0;
	func_5443(var_777_bool);
	var_778_bool = var_777_bool == 0; //@nz
	if(var_778_bool != 0) {
		return 0;
	}
	var_779_bool = var_776_string == var_2_object;
	if(var_779_bool != 0) {
		return 0;
	}
	var_780_string = ""; var_781_bool = 0;
	var_776_string = var_780_string;
	var_783_bool = var_776_string == "";
	if(var_783_bool != 0) {
		var_781_bool = 0;
	} else {
		var_781_bool = 1;
	}
	func_5266(var_780_string, var_781_bool);
	var_2_object = var_776_string;
	return 0;
	
}


func_5266(var_253_string, var_254_bool)
{
	var_257_bool = 0; var_258_float = 0; var_259_float = 0; var_260_bool = 0; var_261_float = 0; var_262_float = 0;
	lshHasAnimation(var_260_bool, var_253_string);
	var_263_bool = var_260_bool;
	if(var_263_bool != 0) {
		lshGetAnimTimes(var_253_string, var_261_float, var_262_float);
		lshPlayAnimation(var_261_float, var_262_float, var_254_bool);
	} else {
		var_265_int = "Can't find lsh animation : " + var_253_string;
		Trace(var_265_int);
	}
	return 6;
	
}


func_4755(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj();
	FindActor(var_73_object, "player");
	var_75_bool = var_73_object == 0; //@nz
	if(var_75_bool != 0) {
		var_71_bool = 0;
		return 2;
	}
	var_76_bool = 0; var_77_object = Obj();
	var_73_object = var_77_object;
	func_5011(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_149(var_2_object, var_249_string)
{
	var_250_bool = 0;
	func_5443(var_250_bool);
	var_251_bool = var_250_bool == 0; //@nz
	if(var_251_bool != 0) {
		return 0;
	}
	var_252_bool = var_249_string == var_2_object;
	if(var_252_bool != 0) {
		return 0;
	}
	var_253_string = ""; var_254_bool = 0;
	var_249_string = var_253_string;
	var_256_bool = var_249_string == "";
	if(var_256_bool != 0) {
		var_254_bool = 0;
	} else {
		var_254_bool = 1;
	}
	func_5266(var_253_string, var_254_bool);
	var_2_object = var_249_string;
	return 0;
	
}


func_6298(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj(); var_136_object = Obj(); var_137_object = Obj();
	GetMainOutdoorScene(var_136_object);
	var_138_bool = var_136_object == 0; //@ne
	if(var_138_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_137_object = 0;
		var_137_object = var_133_object;
		return 4;
	}
	@@var_136_object:GetMap(var_137_object);
	var_137_object = var_133_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5281(var_173_bool, var_174_string)
{
	var_175_bool = 0; var_176_bool = 0;
	var_177_bool = 0;
	func_5443(var_177_bool);
	if(var_177_bool != 0) {
		lshHasSpeech(var_176_bool, var_174_string);
		var_178_bool = var_176_bool;
		if(var_178_bool != 0) {
			lshPlaySpeech(var_174_string);
			var_173_bool = 1;
			return 2;
		}
	}
	var_173_bool = 0;
	return 2;
}


func_4770(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_123_float, var_124_float);
	return 0;
}


func_4775(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0;
	FindActor(var_57_object, "player");
	var_60_bool = var_57_object == 0; //@nz
	if(var_60_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	var_61_float = 0; var_62_object = Obj();
	var_57_object = var_62_object;
	func_4993(var_61_float, var_62_object);
	var_70_bool = var_61_float > (float)90000.0;
	if(var_70_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	CanSee(var_58_bool, var_57_object);
	var_58_bool = var_54_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_6315(var_107_object, var_108_string, var_109_float)
{
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_object = Obj(); var_118_bool = 0;
	GetMainOutdoorScene(var_117_object);
	var_119_bool = var_117_object == 0; //@ne
	if(var_119_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_117_object:GetLocator(var_108_string, var_118_bool, var_115_cvector, var_116_cvector);
	var_121_bool = var_118_bool == 0; //@nz
	if(var_121_bool != 0) {
		var_123_int = "Warning: outdoor scene locator " + var_108_string;
		var_125_int = var_123_int + " doesnt exist";
		Trace(var_125_int);
	}
	@@var_117_object:GetMap(var_107_object);
	var_126_bool = var_107_object == 0; //@ne
	if(var_126_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_128_float = GetByIndex(var_115_cvector, 0);
	var_129_float = GetByIndex(var_115_cvector, 2);
	@@var_107_object:SetMapParams(var_128_float, var_129_float, var_109_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5806(var_876_bool)
{
	var_878_int = 0; var_879_string = "";
	func_5319(var_878_int, "d11q06");
	var_881_bool = var_878_int == (int)1;
	if(var_881_bool != 0) {
		var_876_bool = 1;
		return 0;
	}
	var_876_bool = 0;
	return 0;
}


func_5296()
{
	var_49_bool = 0;
	func_5443(var_49_bool);
	if(var_49_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4272(var_0_object, var_915_int, var_916_object)
{
	var_918_object = Obj(); var_919_bool = 0; var_920_int = 0; var_921_bool = 0; var_922_object = Obj(); var_923_bool = 0; var_924_int = 0; var_925_bool = 0;
	var_0_object = var_916_object;
	var_926_bool = 0; var_927_object = Obj(); var_928_float = 0;
	var_916_object = var_927_object;
	func_5025(var_926_bool, var_927_object, (float)70.0);
	var_929_bool = var_926_bool == 0; //@nz
	if(var_929_bool != 0) {
		var_915_int = -2;
		return 8;
	}
	CreateDialog(var_922_object);
	var_930_int = 0;
	func_5437(var_930_int);
	@@var_922_object:SetNPCName(var_930_int);
	var_931_int = 0;
	func_5435(var_931_int);
	@@var_922_object:SetNPCDescription(var_931_int);
	var_932_string = "";
	func_5439(var_932_string);
	@@var_922_object:SetPhoto(var_932_string);
	var_933_string = "";
	func_5441(var_933_string);
	@@var_922_object:SetPhoto2(var_933_string);
	var_934_int = 0;
	func_6348(var_934_int);
	@@var_922_object:SetPlayerName(var_934_int);
	IsOverrideActive(var_923_bool);
	var_935_bool = var_923_bool;
	if(var_935_bool != 0) {
		var_915_int = -2;
		return 8;
	}
	DoDialog(var_922_object);
	var_936_bool = 0; var_937_object = Obj();
	func_5303(Obj());
	var_938_object = var_937_object;
	func_5112(var_936_bool, var_937_object);
	var_939_object = Obj(); var_940_object = Obj();
	var_916_object = var_939_object;
	var_922_object = var_940_object;
	TaskCall(15);
	func_4353(var_941_object, var_942_object, var_943_string, var_944_bool, var_939_object, var_940_object);
	TaskReturn();
	@@var_922_object:IsDialogEnd(var_925_bool);
	
Label_4335:
	var_972_bool = var_925_bool == 0; //@nz
	if(var_972_bool != 0) {
		sync();
		@@var_922_object:IsDialogEnd(var_925_bool);
		goto Label_4335;
	}
	var_916_object = Obj();
	func_5094();
	StopDialog(var_922_object);
	@@var_922_object:GetReturnValue((int)-1);
	var_924_int = var_915_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5303(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj();
	self(var_143_object);
	var_143_object = var_141_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3768(var_0_object, var_1_object, var_2_object, var_3_string, var_859_object, var_860_object)
{
	var_0_object = var_860_object;
	var_1_object = var_859_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_866_string = "";
		func_3850(var_860_object, "Neutral");
		@@@var_0_object:SetMessage((int)534512);
		@@@var_0_object:ClearReplies();
		var_875_bool = 0;
		var_875_bool = 0;
		var_876_bool = 0; var_877_object = Obj();
		var_877_object = var_1_object;
		func_5806(var_877_object);
		if(var_876_bool != 0) {
			var_882_bool = 0; var_883_object = Obj();
			var_883_object = var_1_object;
			func_5818(var_883_object);
			if(var_882_bool != 0) {
				var_875_bool = 1;
			}
		}
		if(var_875_bool != 0) {
			@@@var_0_object:AddReply((int)534513, (int)41645, (int)36154);
		}
		var_891_bool = 0; var_892_object = Obj();
		var_892_object = var_1_object;
		func_5830(var_892_object);
		if(var_891_bool != 0) {
			@@@var_0_object:AddReply((int)540246, (int)42229, (int)42228);
		}
		@@@var_0_object:AddReply((int)534518, (int)-1, (int)36159);
		goto Label_3820;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xebc";
	}
Label_3820:
	var_903_bool = 0;
	func_5443(var_903_bool);
	if(var_903_bool != 0) {

	Label_3824:
		lshWaitForAnimEnd();
		var_904_string = var_3_string;
		if(var_904_string != 0) {
		} else {
			var_905_string = "";
			var_905_string = var_2_object;
			func_5250(var_905_string);
			goto Label_3824;
	}
		PlayAnimation("all", "idle");

	Label_3839:
		WaitForAnimEnd();
		var_908_string = var_3_string;
		if(var_908_string != 0) {
			goto Label_3849;
		}
		PlayAnimation("all", "idle");
		goto Label_3839;
	}
	goto Label_3849;
	
Label_3849:
	return 0;
	
}


func_2743(var_0_object, var_555_int, var_556_object)
{
	var_558_object = Obj(); var_559_bool = 0; var_560_int = 0; var_561_bool = 0; var_562_object = Obj(); var_563_bool = 0; var_564_int = 0; var_565_bool = 0;
	var_0_object = var_556_object;
	var_566_bool = 0; var_567_object = Obj(); var_568_float = 0;
	var_556_object = var_567_object;
	func_5025(var_566_bool, var_567_object, (float)70.0);
	var_569_bool = var_566_bool == 0; //@nz
	if(var_569_bool != 0) {
		var_555_int = -2;
		return 8;
	}
	CreateDialog(var_562_object);
	var_570_int = 0;
	func_5437(var_570_int);
	@@var_562_object:SetNPCName(var_570_int);
	var_571_int = 0;
	func_5435(var_571_int);
	@@var_562_object:SetNPCDescription(var_571_int);
	var_572_string = "";
	func_5439(var_572_string);
	@@var_562_object:SetPhoto(var_572_string);
	var_573_string = "";
	func_5441(var_573_string);
	@@var_562_object:SetPhoto2(var_573_string);
	var_574_int = 0;
	func_6348(var_574_int);
	@@var_562_object:SetPlayerName(var_574_int);
	IsOverrideActive(var_563_bool);
	var_575_bool = var_563_bool;
	if(var_575_bool != 0) {
		var_555_int = -2;
		return 8;
	}
	DoDialog(var_562_object);
	var_576_bool = 0; var_577_object = Obj();
	func_5303(Obj());
	var_578_object = var_577_object;
	func_5112(var_576_bool, var_577_object);
	var_579_object = Obj(); var_580_object = Obj();
	var_556_object = var_579_object;
	var_562_object = var_580_object;
	TaskCall(9);
	func_2824(var_581_object, var_582_object, var_583_string, var_584_bool, var_579_object, var_580_object);
	TaskReturn();
	@@var_562_object:IsDialogEnd(var_565_bool);
	
Label_2806:
	var_622_bool = var_565_bool == 0; //@nz
	if(var_622_bool != 0) {
		sync();
		@@var_562_object:IsDialogEnd(var_565_bool);
		goto Label_2806;
	}
	var_556_object = Obj();
	func_5094();
	StopDialog(var_562_object);
	@@var_562_object:GetReturnValue((int)-1);
	var_564_int = var_555_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5818(var_882_bool)
{
	var_884_int = 0; var_885_string = "";
	func_5319(var_884_int, "ood11Kapella1");
	var_887_bool = var_884_int == (int)0;
	if(var_887_bool != 0) {
		var_882_bool = 1;
		return 0;
	}
	var_882_bool = 0;
	return 0;
}


func_4797()
{
	var_1032_float = 0; var_1033_float = 0;
	rand(var_1033_float, (int)8, (int)16);
	SetTimer((int)10, var_1033_float);
	return 2;
}


func_5309(var_105_cvector, var_106_cvector)
{
	var_108_float = 0; var_109_float = 0;
	var_110_int = var_106_cvector | var_106_cvector;
	var_109_float = sqrt(var_110_int);
	var_111_float = 9.999999974752427e-07;
	var_112_bool = var_109_float < var_111_float;
	if(var_112_bool != 0) {
		var_105_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_105_cvector = var_106_cvector / var_109_float;
	return 2;
}


func_5830(var_891_bool)
{
	var_893_int = 0; var_894_string = "";
	func_5319(var_893_int, "ood11Kapella2");
	var_896_bool = var_893_int == (int)0;
	if(var_896_bool != 0) {
		var_891_bool = 1;
		return 0;
	}
	var_891_bool = 0;
	return 0;
}


func_4806()
{
	KillTimer((int)10);
	return 0;
}


func_5319(var_347_int, var_348_string)
{
	var_349_int = 0; var_350_int = 0;
	GetVariable(var_348_string, var_350_int);
	var_350_int = var_347_int;
	return 2;
}


func_6348(var_130_int)
{
	var_131_int = 0; var_132_int = 0;
	GetVariable("branch", var_132_int);
	var_135_bool = var_132_int == (int)0;
	if(var_135_bool != 0) {
		var_130_int = 1;
		return 2;
	EMIT "GOTO 0x18db";
	}
	var_137_bool = var_132_int == (int)1;
	if(var_137_bool != 0) {
		var_130_int = 2;
		return 2;
	}
	var_130_int = 3;
	return 2;
}


func_5324(var_91_object, var_92_string)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj();
	GetMainOutdoorScene(var_95_object);
	var_98_int = var_92_string + ".bin";
	AddBlankActor(var_96_object, var_95_object, var_92_string, var_98_int);
	var_96_object = var_91_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5842(var_345_bool)
{
	var_347_int = 0; var_348_string = "";
	func_5319(var_347_int, "ood2Kapella1");
	var_352_bool = var_347_int == (int)0;
	if(var_352_bool != 0) {
		var_345_bool = 1;
		return 0;
	}
	var_345_bool = 0;
	return 0;
}


func_5335(var_102_int, var_103_int)
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateIntVector(var_105_object);
	@@var_105_object:add(var_102_int);
	@@var_105_object:add(var_103_int);
	SendWorldWndMessage((int)3, var_105_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6365(var_64_object)
{
	var_65_bool = GlobalVars[1];
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_67_int = 0; var_68_object = Obj();
		var_64_object = var_68_object;
		TaskCall(0);
		func_0(var_69_object, var_67_int, var_68_object);
		TaskReturn();
		var_300_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_301_bool = 0; var_302_int = 0;
	func_5405(var_301_bool, (int)2);
	if(var_301_bool != 0) {
		var_304_int = 0; var_305_object = Obj();
		var_64_object = var_305_object;
		TaskCall(4);
		func_952(var_306_object, var_304_int, var_305_object);
		TaskReturn();
		return 0;
	}
	var_391_bool = 0; var_392_int = 0;
	func_5405(var_391_bool, (int)3);
	if(var_391_bool != 0) {
		var_393_int = 0; var_394_object = Obj();
		var_64_object = var_394_object;
		TaskCall(6);
		func_1557(var_395_object, var_393_int, var_394_object);
		TaskReturn();
		return 0;
	}
	var_553_bool = 0; var_554_int = 0;
	func_5405(var_553_bool, (int)4);
	if(var_553_bool != 0) {
		var_555_int = 0; var_556_object = Obj();
		var_64_object = var_556_object;
		TaskCall(8);
		func_2743(var_557_object, var_555_int, var_556_object);
		TaskReturn();
		return 0;
	}
	var_624_bool = 0; var_625_int = 0;
	func_5405(var_624_bool, (int)6);
	if(var_624_bool != 0) {
		var_626_int = 0; var_627_object = Obj();
		var_64_object = var_627_object;
		TaskCall(2);
		func_325(var_628_object, var_626_int, var_627_object);
		TaskReturn();
		return 0;
	}
	var_743_bool = 0; var_744_int = 0;
	func_5405(var_743_bool, (int)8);
	if(var_743_bool != 0) {
		var_745_int = 0; var_746_object = Obj();
		var_64_object = var_746_object;
		TaskCall(10);
		func_3036(var_747_object, var_745_int, var_746_object);
		TaskReturn();
		return 0;
	}
	var_833_bool = 0; var_834_int = 0;
	func_5405(var_833_bool, (int)11);
	if(var_833_bool != 0) {
		var_835_int = 0; var_836_object = Obj();
		var_64_object = var_836_object;
		TaskCall(12);
		func_3687(var_837_object, var_835_int, var_836_object);
		TaskReturn();
		return 0;
	}
	var_913_bool = 0; var_914_int = 0;
	func_5405(var_913_bool, (int)12);
	if(var_913_bool != 0) {
		var_915_int = 0; var_916_object = Obj();
		var_64_object = var_916_object;
		TaskCall(14);
		func_4272(var_917_object, var_915_int, var_916_object);
		TaskReturn();
		return 0;
	}
	var_974_int = 0; var_975_object = Obj();
	var_64_object = var_975_object;
	TaskCall(16);
	func_4531(var_976_object, var_974_int, var_975_object);
	TaskReturn();
	return 0;
}


func_5854(var_363_bool)
{
	var_365_int = 0; var_366_string = "";
	func_5319(var_365_int, "ood2Kapella2");
	var_368_bool = var_365_int == (int)0;
	if(var_368_bool != 0) {
		var_363_bool = 1;
		return 0;
	}
	var_363_bool = 0;
	return 0;
}


func_5347(var_91_object, var_92_object, var_93_int)
{
	var_94_int = 0; var_95_int = 0; var_96_bool = 0; var_97_int = 0; var_98_int = 0; var_99_bool = 0;
	@@var_92_object:GetItemID(var_97_int);
	GetInvItemProperty(var_98_int, var_97_int, "Category");
	@@var_91_object:AddItem(var_99_bool, var_92_object, var_98_int, var_93_int);
	var_101_bool = var_99_bool == 0; //@nz
	if(var_101_bool != 0) {
		@@var_91_object:DropItems(var_92_object, var_93_int);
	} else {
		var_102_int = 0; var_103_int = 0;
		var_97_int = var_102_int;
		var_93_int = var_103_int;
		func_5335(var_102_int, var_103_int);
	}
	return 6;
	
}


func_5866(var_353_bool)
{
	var_355_int = 0; var_356_string = "";
	func_5319(var_355_int, "d2q01");
	var_358_bool = var_355_int == (int)2;
	if(var_358_bool != 0) {
		var_353_bool = 1;
		return 0;
	}
	var_353_bool = 0;
	return 0;
}


func_5878(var_425_bool)
{
	var_427_int = 0; var_428_string = "";
	func_5319(var_427_int, "d3q03");
	var_430_bool = var_427_int == (int)0;
	if(var_430_bool != 0) {
		var_425_bool = 1;
		return 0;
	}
	var_425_bool = 0;
	return 0;
}


func_5366(var_86_object, var_87_string, var_88_int)
{
	var_89_object = Obj(); var_90_object = Obj();
	CreateInvItem(var_90_object);
	@@var_90_object:SetItemName(var_87_string);
	var_91_object = Obj(); var_92_object = Obj(); var_93_int = 0;
	var_86_object = var_91_object;
	var_90_object = var_92_object;
	var_88_int = var_93_int;
	func_5347(var_91_object, var_92_object, var_93_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4353(var_0_object, var_1_object, var_2_object, var_3_string, var_939_object, var_940_object)
{
	var_0_object = var_940_object;
	var_1_object = var_939_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_946_string = "";
		func_4416(var_940_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_4386;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1105";
	}
Label_4386:
	var_964_bool = 0;
	func_5443(var_964_bool);
	if(var_964_bool != 0) {

	Label_4390:
		lshWaitForAnimEnd();
		var_965_string = var_3_string;
		if(var_965_string != 0) {
		} else {
			var_966_string = "";
			var_966_string = var_2_object;
			func_5250(var_966_string);
			goto Label_4390;
	}
		PlayAnimation("all", "idle");

	Label_4405:
		WaitForAnimEnd();
		var_969_string = var_3_string;
		if(var_969_string != 0) {
			goto Label_4415;
		}
		PlayAnimation("all", "idle");
		goto Label_4405;
	}
	goto Label_4415;
	
Label_4415:
	return 0;
	
}


func_5890(var_431_bool)
{
	var_433_int = 0; var_434_string = "";
	func_5319(var_433_int, "ood3Kapella1");
	var_436_bool = var_433_int == (int)0;
	if(var_436_bool != 0) {
		var_431_bool = 1;
		return 0;
	}
	var_431_bool = 0;
	return 0;
}


func_5379(var_142_bool, var_143_string, var_144_string)
{
	var_145_object = Obj(); var_146_object = Obj();
	FindActor(var_146_object, var_143_string);
	var_147_bool = var_146_object == 0; //@ne
	if(var_147_bool != 0) {
		var_142_bool = 0;
		return 2;
	}
	Trigger(var_146_object, var_144_string);
	var_142_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2824(var_0_object, var_1_object, var_2_object, var_3_string, var_579_object, var_580_object)
{
	var_0_object = var_580_object;
	var_1_object = var_579_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_586_string = "";
		func_2896(var_580_object, "Neutral");
		@@@var_0_object:SetMessage((int)511245);
		@@@var_0_object:ClearReplies();
		var_595_bool = 0;
		var_595_bool = 0;
		var_596_bool = 0; var_597_object = Obj();
		var_597_object = var_1_object;
		func_6085(var_597_object);
		if(var_596_bool != 0) {
			var_602_bool = 0; var_603_object = Obj();
			var_603_object = var_1_object;
			func_6097(var_603_object);
			if(var_602_bool != 0) {
				var_595_bool = 1;
			}
		}
		if(var_595_bool != 0) {
			@@@var_0_object:AddReply((int)511247, (int)12438, (int)12437);
		}
		@@@var_0_object:AddReply((int)511246, (int)-1, (int)12436);
		goto Label_2866;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb0c";
	}
Label_2866:
	var_614_bool = 0;
	func_5443(var_614_bool);
	if(var_614_bool != 0) {

	Label_2870:
		lshWaitForAnimEnd();
		var_615_string = var_3_string;
		if(var_615_string != 0) {
		} else {
			var_616_string = "";
			var_616_string = var_2_object;
			func_5250(var_616_string);
			goto Label_2870;
	}
		PlayAnimation("all", "idle");

	Label_2885:
		WaitForAnimEnd();
		var_619_string = var_3_string;
		if(var_619_string != 0) {
			goto Label_2895;
		}
		PlayAnimation("all", "idle");
		goto Label_2885;
	}
	goto Label_2895;
	
Label_2895:
	return 0;
	
}


func_3850(var_2_object, var_866_string)
{
	var_867_bool = 0;
	func_5443(var_867_bool);
	var_868_bool = var_867_bool == 0; //@nz
	if(var_868_bool != 0) {
		return 0;
	}
	var_869_bool = var_866_string == var_2_object;
	if(var_869_bool != 0) {
		return 0;
	}
	var_870_string = ""; var_871_bool = 0;
	var_866_string = var_870_string;
	var_873_bool = var_866_string == "";
	if(var_873_bool != 0) {
		var_871_bool = 0;
	} else {
		var_871_bool = 1;
	}
	func_5266(var_870_string, var_871_bool);
	var_2_object = var_866_string;
	return 0;
	
}


func_5902(var_466_bool)
{
	var_468_int = 0; var_469_string = "";
	func_5319(var_468_int, "d3q03");
	var_471_bool = var_468_int == (int)2;
	if(var_471_bool != 0) {
		var_466_bool = 1;
		return 0;
	}
	var_466_bool = 0;
	return 0;
}


func_5391(var_73_float)
{
	var_74_float = 0; var_75_float = 0;
	GetGameTime(var_75_float);
	var_75_float = var_73_float;
	return 2;
}


func_5396(var_194_int)
{
	var_195_float = 0; var_196_float = 0;
	GetGameTime(var_196_float);
	var_198_int = 0;
	var_198_int = var_196_float / (int)24;
	var_194_int = (int)1 + var_198_int;
	return 2;
}


func_5914(var_472_bool)
{
	var_474_int = 0; var_475_string = "";
	func_5319(var_474_int, "ood3Kapella2");
	var_477_bool = var_474_int == (int)0;
	if(var_477_bool != 0) {
		var_472_bool = 1;
		return 0;
	}
	var_472_bool = 0;
	return 0;
}


func_5405(var_301_bool, var_302_int)
{
	var_303_int = 0;
	func_5396(var_303_int);
	var_301_bool = var_303_int == var_302_int;
	return 0;
}


func_1826(var_2_object, var_437_string)
{
	var_438_bool = 0;
	func_5443(var_438_bool);
	var_439_bool = var_438_bool == 0; //@nz
	if(var_439_bool != 0) {
		return 0;
	}
	var_440_bool = var_437_string == var_2_object;
	if(var_440_bool != 0) {
		return 0;
	}
	var_441_string = ""; var_442_bool = 0;
	var_437_string = var_441_string;
	var_444_bool = var_437_string == "";
	if(var_444_bool != 0) {
		var_442_bool = 0;
	} else {
		var_442_bool = 1;
	}
	func_5266(var_441_string, var_442_bool);
	var_2_object = var_437_string;
	return 0;
	
}


func_5411(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = "";
	var_75_int = var_72_int;
	if(var_75_int != 0) {
		"idle" = "idle" + var_72_int;
	}
	var_74_string = var_71_string;
	return 2;
}


func_5926(var_501_bool)
{
	var_503_int = 0; var_504_string = "";
	func_5319(var_503_int, "ood3Kapella3");
	var_506_bool = var_503_int == (int)0;
	if(var_506_bool != 0) {
		var_501_bool = 1;
		return 0;
	}
	var_501_bool = 0;
	return 0;
}


func_5418(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_68_int = 0;
	
Label_5420:
	var_71_string = ""; var_72_int = 0;
	var_68_int = var_72_int;
	func_5411(var_71_string, var_72_int);
	HasAnimation(var_69_bool, "all", var_71_string);
	var_76_bool = var_69_bool == 0; //@nz
	if(var_76_bool != 0) {
	} else {
		var_68_int = var_68_int + (int)1;
		goto Label_5420;
	}
	var_68_int = var_65_int;
	return 4;
	
}


func_5938(var_510_bool)
{
	var_512_int = 0; var_513_string = "";
	func_5319(var_512_int, "ood3Kapella4");
	var_515_bool = var_512_int == (int)0;
	if(var_515_bool != 0) {
		var_510_bool = 1;
		return 0;
	}
	var_510_bool = 0;
	return 0;
}


func_4917()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0;
	WaitForAnimEnd();
	var_63_bool = 0;
	func_5020(var_63_bool);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 12;
	}
	func_5418((int)0);
	var_65_int = var_57_int;
	var_58_int = 0;
	
Label_4931:
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_58_int < (int)5;
	if(var_80_bool != 0) {
		var_81_bool = 0;
		func_5020(var_81_bool);
		if(var_81_bool != 0) {
			var_78_bool = 1;
		}
	}
	if(var_78_bool != 0) {
		var_82_bool = var_57_int == 0; //@nz
		if(var_82_bool != 0) {
			Sleep((int)3, var_59_bool);
			var_84_bool = var_59_bool == 0; //@nz
			if(var_84_bool != 0) {
			} else {
		} else {
				irand(var_60_int, var_57_int);
				irand(var_61_int, (int)5);
				var_90_bool = var_61_int != (int)0;
				if(var_90_bool != 0) {
					var_60_int = 0;
				}
				var_92_string = ""; var_93_int = 0;
				var_60_int = var_93_int;
				func_5411(var_92_string, var_93_int);
				PlayAnimation("all", var_92_string);
				WaitForAnimEnd(var_62_bool);
				var_94_bool = var_62_bool == 0; //@nz
				if(var_94_bool == 0) goto Label_4972;
				goto Label_4983;
		}
		Label_4972:
			var_85_bool = 0;
			func_4986(var_85_bool);
			var_86_bool = var_85_bool == 0; //@nz
			if(var_86_bool != 0) {
				goto Label_4983;
			}
			ResetAAS();
			var_58_int = var_58_int + (int)1;
			goto Label_4931;

		}
	}
Label_4983:
	ResetAAS();
	return 12;
	
}


func_5435(var_127_int)
{
	var_127_int = 515538;
	return 0;
}


func_5437(var_126_int)
{
	var_126_int = 502863;
	return 0;
}


func_5950(var_520_bool)
{
	var_522_int = 0; var_523_string = "";
	func_5319(var_522_int, "ood3Kapella5");
	var_525_bool = var_522_int == (int)0;
	if(var_525_bool != 0) {
		var_520_bool = 1;
		return 0;
	}
	var_520_bool = 0;
	return 0;
}


func_5439(var_128_string)
{
	var_128_string = "ui/NPC_Kapella.png";
	return 0;
}


func_4416(var_2_object, var_946_string)
{
	var_947_bool = 0;
	func_5443(var_947_bool);
	var_948_bool = var_947_bool == 0; //@nz
	if(var_948_bool != 0) {
		return 0;
	}
	var_949_bool = var_946_string == var_2_object;
	if(var_949_bool != 0) {
		return 0;
	}
	var_950_string = ""; var_951_bool = 0;
	var_946_string = var_950_string;
	var_953_bool = var_946_string == "";
	if(var_953_bool != 0) {
		var_951_bool = 0;
	} else {
		var_951_bool = 1;
	}
	func_5266(var_950_string, var_951_bool);
	var_2_object = var_946_string;
	return 0;
	
}


func_5441(var_129_string)
{
	var_129_string = "ui/NPC_Kapella_b.png";
	return 0;
}


func_5443(var_121_bool)
{
	var_121_bool = 1;
	return 0;
}


func_5445()
{
	SetVariable("KnowKaterina", (int)1);
	return 0;
}


func_325(var_0_object, var_626_int, var_627_object)
{
	var_629_object = Obj(); var_630_bool = 0; var_631_int = 0; var_632_bool = 0; var_633_object = Obj(); var_634_bool = 0; var_635_int = 0; var_636_bool = 0;
	var_0_object = var_627_object;
	var_637_bool = 0; var_638_object = Obj(); var_639_float = 0;
	var_627_object = var_638_object;
	func_5025(var_637_bool, var_638_object, (float)70.0);
	var_640_bool = var_637_bool == 0; //@nz
	if(var_640_bool != 0) {
		var_626_int = -2;
		return 8;
	}
	CreateDialog(var_633_object);
	var_641_int = 0;
	func_5437(var_641_int);
	@@var_633_object:SetNPCName(var_641_int);
	var_642_int = 0;
	func_5435(var_642_int);
	@@var_633_object:SetNPCDescription(var_642_int);
	var_643_string = "";
	func_5439(var_643_string);
	@@var_633_object:SetPhoto(var_643_string);
	var_644_string = "";
	func_5441(var_644_string);
	@@var_633_object:SetPhoto2(var_644_string);
	var_645_int = 0;
	func_6348(var_645_int);
	@@var_633_object:SetPlayerName(var_645_int);
	IsOverrideActive(var_634_bool);
	var_646_bool = var_634_bool;
	if(var_646_bool != 0) {
		var_626_int = -2;
		return 8;
	}
	DoDialog(var_633_object);
	var_647_bool = 0; var_648_object = Obj();
	func_5303(Obj());
	var_649_object = var_648_object;
	func_5112(var_647_bool, var_648_object);
	var_650_object = Obj(); var_651_object = Obj();
	var_627_object = var_650_object;
	var_633_object = var_651_object;
	TaskCall(3);
	func_406(var_652_object, var_653_object, var_654_string, var_655_bool, var_650_object, var_651_object);
	TaskReturn();
	@@var_633_object:IsDialogEnd(var_636_bool);
	
Label_388:
	var_741_bool = var_636_bool == 0; //@nz
	if(var_741_bool != 0) {
		sync();
		@@var_633_object:IsDialogEnd(var_636_bool);
		goto Label_388;
	}
	var_627_object = Obj();
	func_5094();
	StopDialog(var_633_object);
	@@var_633_object:GetReturnValue((int)-1);
	var_635_int = var_626_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5962(var_478_bool, var_479_object)
{
	var_480_bool = 0; var_481_object = Obj();
	var_479_object = var_481_object;
	func_6133(var_480_bool, var_481_object);
	if(var_480_bool != 0) {
		var_478_bool = 1;
		return 0;
	}
	var_478_bool = 0;
	return 0;
}


func_5451()
{
	SetVariable("KnowKapella", (int)1);
	return 0;
}


func_2896(var_2_object, var_586_string)
{
	var_587_bool = 0;
	func_5443(var_587_bool);
	var_588_bool = var_587_bool == 0; //@nz
	if(var_588_bool != 0) {
		return 0;
	}
	var_589_bool = var_586_string == var_2_object;
	if(var_589_bool != 0) {
		return 0;
	}
	var_590_string = ""; var_591_bool = 0;
	var_586_string = var_590_string;
	var_593_bool = var_586_string == "";
	if(var_593_bool != 0) {
		var_591_bool = 0;
	} else {
		var_591_bool = 1;
	}
	func_5266(var_590_string, var_591_bool);
	var_2_object = var_586_string;
	return 0;
	
}


func_5457()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5972(var_493_bool)
{
	var_493_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_5463()
{
	SetVariable("d8q02", (int)2);
	func_6244();
	return 0;
}


func_5977(var_189_bool)
{
	var_191_int = 0; var_192_string = "";
	func_5319(var_191_int, "d6q02");
	var_194_bool = var_191_int == (int)0;
	if(var_194_bool != 0) {
		var_189_bool = 1;
		return 0;
	}
	var_189_bool = 0;
	return 0;
}


func_5472(var_85_object)
{
	Trace("feromicin2 is given");
	var_88_object = Obj(); var_89_string = ""; var_90_int = 0;
	var_85_object = var_88_object;
	func_5366(var_88_object, "feromicin", (int)2);
	return 0;
}


func_5989(var_709_bool)
{
	var_711_int = 0; var_712_string = "";
	func_5319(var_711_int, "d6q02");
	var_714_bool = var_711_int == (int)1000;
	if(var_714_bool != 0) {
		var_709_bool = 1;
		return 0;
	}
	var_709_bool = 0;
	return 0;
}


func_5483(var_58_object)
{
	SetVariable("d11q06KapellaRing", (int)1);
	func_6166();
	Trace("d11q06KapellaBeads is given");
	var_86_object = Obj(); var_87_string = ""; var_88_int = 0;
	var_58_object = var_86_object;
	func_5366(var_86_object, "d11q06KapellaBeads", (int)1);
	return 0;
}


func_6001(var_716_bool)
{
	var_718_int = 0; var_719_string = "";
	func_5319(var_718_int, "d6q02");
	var_721_bool = var_718_int == (int)-1;
	if(var_721_bool != 0) {
		var_716_bool = 1;
		return 0;
	}
	var_716_bool = 0;
	return 0;
}


func_4986(var_85_bool)
{
	var_85_bool = 1;
	return 0;
}


func_4988()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6013(var_703_bool)
{
	var_705_int = 0; var_706_string = "";
	func_5319(var_705_int, "ood6Kapella1");
	var_708_bool = var_705_int == (int)0;
	if(var_708_bool != 0) {
		var_703_bool = 1;
		return 0;
	}
	var_703_bool = 0;
	return 0;
}


func_5501()
{
	var_109_bool = 0;
	var_109_bool = 0;
	var_110_int = 0; var_111_string = "";
	func_5319(var_110_int, "d11q06KapellaRing");
	var_115_bool = var_110_int != (int)0;
	if(var_115_bool != 0) {
		var_116_int = 0; var_117_string = "";
		func_5319(var_116_int, "d11q06KlaraRing");
		var_119_bool = var_116_int != (int)0;
		if(var_119_bool != 0) {
			var_109_bool = 1;
		}
	}
	if(var_109_bool != 0) {
		SetVariable("d11q06", (int)2);
		func_6140();
	}
	return 0;
}


func_4993(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_6025(var_658_bool)
{
	var_660_int = 0; var_661_string = "";
	func_5319(var_660_int, "d6q01");
	var_663_bool = var_660_int == (int)0;
	if(var_663_bool != 0) {
		var_658_bool = 1;
		return 0;
	}
	var_658_bool = 0;
	return 0;
}


func_5001(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0;
	GetPosition(var_59_cvector);
	var_60_cvector = var_55_cvector - var_59_cvector;
	var_62_float = GetByIndex(var_60_cvector, 0);
	var_63_float = GetByIndex(var_60_cvector, 2);
	Rotate(var_62_float, var_63_float, var_61_bool);
	var_61_bool = var_54_bool;
	return 6;
}


func_5011(var_50_bool, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	@@var_51_object:GetPosition(var_53_cvector);
	var_54_bool = 0; var_55_cvector = CVector(0,0,0);
	var_53_cvector = var_55_cvector;
	func_5001(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
	return 2;
}


func_6037(var_792_bool)
{
	var_794_int = 0; var_795_string = "";
	func_5319(var_794_int, "ood8Kapella1");
	var_797_bool = var_794_int == (int)0;
	if(var_797_bool != 0) {
		var_792_bool = 1;
		return 0;
	}
	var_792_bool = 0;
	return 0;
}


func_406(var_0_object, var_1_object, var_2_object, var_3_string, var_650_object, var_651_object)
{
	var_0_object = var_651_object;
	var_1_object = var_650_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_657_bool = 0;
		var_657_bool = 0;
		var_658_bool = 0; var_659_object = Obj();
		var_659_object = var_1_object;
		func_6025(var_659_object);
		if(var_658_bool != 0) {
			var_664_bool = 0; var_665_object = Obj();
			var_665_object = var_1_object;
			func_6109(var_665_object);
			if(var_664_bool != 0) {
				var_657_bool = 1;
			}
		}
		if(var_657_bool != 0) {
			var_670_object = Obj(); var_671_object = Obj();
			var_670_object = var_1_object;
			var_671_object = var_0_object;
			func_5757();
			var_674_object = Obj(); var_675_object = Obj();
			var_674_object = var_1_object;
			var_675_object = var_0_object;
			func_5763();
			var_678_string = "";
			func_558(var_651_object, "Neutral");
			@@@var_0_object:SetMessage((int)503371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503375, (int)3621, (int)3619);
			@@@var_0_object:AddReply((int)503376, (int)3621, (int)3620);
		} else {
				var_701_bool = 0;
				var_701_bool = 0;
				var_702_bool = 0;
				var_702_bool = 0;
				var_703_bool = 0; var_704_object = Obj();
				var_704_object = var_1_object;
				func_6013(var_704_object);
				if(var_703_bool != 0) {
					var_709_bool = 0; var_710_object = Obj();
					var_710_object = var_1_object;
					func_5989(var_710_object);
					var_715_bool = var_709_bool == 0; //@nz
					if(var_715_bool != 0) {
						var_702_bool = 1;
					}
				}
				if(var_702_bool != 0) {
					var_716_bool = 0; var_717_object = Obj();
					var_717_object = var_1_object;
					func_6001(var_717_object);
					var_722_bool = var_716_bool == 0; //@nz
					if(var_722_bool != 0) {
						var_701_bool = 1;
					}
				}
				if(var_701_bool != 0) {
					var_723_object = Obj(); var_724_object = Obj();
					var_723_object = var_1_object;
					var_724_object = var_0_object;
					func_5757();
					var_725_string = "";
					func_558(var_651_object, "Neutral");
					@@@var_0_object:SetMessage((int)512095);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)512096, (int)13323, (int)13322);
					@@@var_0_object:AddReply((int)536136, (int)-1, (int)37895);
					goto Label_528;
				}
				var_733_string = "";
				func_558(var_651_object, "Neutral");
				@@@var_0_object:SetMessage((int)512523);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512524, (int)-1, (int)13694);
				@@@var_0_object:AddReply((int)536137, (int)-1, (int)37896);
				goto Label_528;
		}
	}
Label_528:
	var_693_bool = 0;
	func_5443(var_693_bool);
	if(var_693_bool != 0) {

	Label_532:
		lshWaitForAnimEnd();
		var_694_string = var_3_string;
		if(var_694_string != 0) {
		} else {
			var_695_string = "";
			var_695_string = var_2_object;
			func_5250(var_695_string);
			goto Label_532;
	}
		PlayAnimation("all", "idle");

	Label_547:
		WaitForAnimEnd();
		var_698_string = var_3_string;
		if(var_698_string != 0) {
			goto Label_557;
		}
		PlayAnimation("all", "idle");
		goto Label_547;

	}
	goto Label_557;
	
Label_557:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x19a";


func_5528()
{
	SetVariable("ood11Kapella1", (int)1);
	return 0;
}


func_5020(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0;
	IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
	return 2;
}


func_5534()
{
	SetVariable("ood11Kapella2", (int)1);
	return 0;
}


func_5025(var_78_bool, var_79_object, var_80_float)
{
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0;
	@@var_79_object:GetPosition(var_91_cvector);
	@@var_79_object:GetEyesHeight(var_90_float);
	var_99_float = GetByIndex(var_91_cvector, 1);
	var_99_float = var_99_float + var_90_float;
	SetByIndex(var_91_cvector, 1) = var_99_float;
	GetPosition(var_92_cvector);
	GetEyesHeight(var_90_float);
	var_100_float = GetByIndex(var_92_cvector, 1);
	var_100_float = var_100_float + var_90_float;
	SetByIndex(var_92_cvector, 1) = var_100_float;
	var_93_cvector = var_91_cvector - var_92_cvector;
	var_101_float = GetByIndex(var_93_cvector, 1);
	SetByIndex(var_93_cvector, 1) = (float)0;
	var_102_int = var_93_cvector | var_93_cvector;
	var_103_float = sqrt(var_102_int);
	var_93_cvector = var_93_cvector / var_103_float;
	var_94_cvector = -var_93_cvector;
	var_104_float = var_93_cvector * var_80_float;
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	var_106_cvector = var_94_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5309(var_105_cvector, var_106_cvector);
	var_114_float = var_105_cvector * (int)25;
	var_115_int = var_104_float + var_114_float;
	var_95_cvector = var_115_int - CVector(0.0, 10.0, 0.0);
	var_96_cvector = var_92_cvector + var_95_cvector;
	IsOverrideActive(var_97_bool);
	var_117_bool = var_97_bool;
	if(var_117_bool != 0) {
		var_78_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_96_cvector, var_94_cvector, (bool)1);
	var_119_float = GetByIndex(var_95_cvector, 0);
	var_120_float = GetByIndex(var_95_cvector, 2);
	Rotate(var_119_float, var_120_float);
	var_121_bool = 0;
	func_5443(var_121_bool);
	if(var_121_bool != 0) {
	} else {
		HasAnimationTrack(var_98_bool, "head");
		var_123_bool = var_98_bool;
		if(var_123_bool == 0) goto Label_5088;
		LookAsyncCamera("head");
	}
Label_5088:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_78_bool = 1;
	return 18;
	
}


func_6049(var_786_bool)
{
	var_788_int = 0; var_789_string = "";
	func_5319(var_788_int, "d8q02");
	var_791_bool = var_788_int == (int)1;
	if(var_791_bool != 0) {
		var_786_bool = 1;
		return 0;
	}
	var_786_bool = 0;
	return 0;
}


func_5540()
{
	func_6153();
	var_142_bool = 0; var_143_string = ""; var_144_string = "";
	func_5379(var_142_bool, "quest_d11_06", "fail");
	return 0;
}


func_6061(var_802_bool)
{
	var_804_int = 0; var_805_string = "";
	func_5319(var_804_int, "d8q02");
	var_807_bool = var_804_int == (int)1000;
	if(var_807_bool != 0) {
		var_802_bool = 1;
		return 0;
	}
	var_802_bool = 0;
	return 0;
}


func_5550()
{
	SetVariable("ood2Kapella1", (int)1);
	return 0;
}


func_4531(var_0_object, var_974_int, var_975_object)
{
	var_977_object = Obj(); var_978_bool = 0; var_979_int = 0; var_980_bool = 0; var_981_object = Obj(); var_982_bool = 0; var_983_int = 0; var_984_bool = 0;
	var_0_object = var_975_object;
	var_985_bool = 0; var_986_object = Obj(); var_987_float = 0;
	var_975_object = var_986_object;
	func_5025(var_985_bool, var_986_object, (float)70.0);
	var_988_bool = var_985_bool == 0; //@nz
	if(var_988_bool != 0) {
		var_974_int = -2;
		return 8;
	}
	CreateDialog(var_981_object);
	var_989_int = 0;
	func_5437(var_989_int);
	@@var_981_object:SetNPCName(var_989_int);
	var_990_int = 0;
	func_5435(var_990_int);
	@@var_981_object:SetNPCDescription(var_990_int);
	var_991_string = "";
	func_5439(var_991_string);
	@@var_981_object:SetPhoto(var_991_string);
	var_992_string = "";
	func_5441(var_992_string);
	@@var_981_object:SetPhoto2(var_992_string);
	var_993_int = 0;
	func_6348(var_993_int);
	@@var_981_object:SetPlayerName(var_993_int);
	IsOverrideActive(var_982_bool);
	var_994_bool = var_982_bool;
	if(var_994_bool != 0) {
		var_974_int = -2;
		return 8;
	}
	DoDialog(var_981_object);
	var_995_bool = 0; var_996_object = Obj();
	func_5303(Obj());
	var_997_object = var_996_object;
	func_5112(var_995_bool, var_996_object);
	var_998_object = Obj(); var_999_object = Obj();
	var_975_object = var_998_object;
	var_981_object = var_999_object;
	TaskCall(17);
	func_4612(var_1000_object, var_1001_object, var_1002_string, var_1003_bool, var_998_object, var_999_object);
	TaskReturn();
	@@var_981_object:IsDialogEnd(var_984_bool);
	
Label_4594:
	var_1028_bool = var_984_bool == 0; //@nz
	if(var_1028_bool != 0) {
		sync();
		@@var_981_object:IsDialogEnd(var_984_bool);
		goto Label_4594;
	}
	var_975_object = Obj();
	func_5094();
	StopDialog(var_981_object);
	@@var_981_object:GetReturnValue((int)-1);
	var_983_int = var_974_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5556()
{
	SetVariable("ood2Kapella2", (int)1);
	return 0;
}


func_952(var_0_object, var_304_int, var_305_object)
{
	var_307_object = Obj(); var_308_bool = 0; var_309_int = 0; var_310_bool = 0; var_311_object = Obj(); var_312_bool = 0; var_313_int = 0; var_314_bool = 0;
	var_0_object = var_305_object;
	var_315_bool = 0; var_316_object = Obj(); var_317_float = 0;
	var_305_object = var_316_object;
	func_5025(var_315_bool, var_316_object, (float)70.0);
	var_318_bool = var_315_bool == 0; //@nz
	if(var_318_bool != 0) {
		var_304_int = -2;
		return 8;
	}
	CreateDialog(var_311_object);
	var_319_int = 0;
	func_5437(var_319_int);
	@@var_311_object:SetNPCName(var_319_int);
	var_320_int = 0;
	func_5435(var_320_int);
	@@var_311_object:SetNPCDescription(var_320_int);
	var_321_string = "";
	func_5439(var_321_string);
	@@var_311_object:SetPhoto(var_321_string);
	var_322_string = "";
	func_5441(var_322_string);
	@@var_311_object:SetPhoto2(var_322_string);
	var_323_int = 0;
	func_6348(var_323_int);
	@@var_311_object:SetPlayerName(var_323_int);
	IsOverrideActive(var_312_bool);
	var_324_bool = var_312_bool;
	if(var_324_bool != 0) {
		var_304_int = -2;
		return 8;
	}
	DoDialog(var_311_object);
	var_325_bool = 0; var_326_object = Obj();
	func_5303(Obj());
	var_327_object = var_326_object;
	func_5112(var_325_bool, var_326_object);
	var_328_object = Obj(); var_329_object = Obj();
	var_305_object = var_328_object;
	var_311_object = var_329_object;
	TaskCall(5);
	func_1033(var_330_object, var_331_object, var_332_string, var_333_bool, var_328_object, var_329_object);
	TaskReturn();
	@@var_311_object:IsDialogEnd(var_314_bool);
	
Label_1015:
	var_389_bool = var_314_bool == 0; //@nz
	if(var_389_bool != 0) {
		sync();
		@@var_311_object:IsDialogEnd(var_314_bool);
		goto Label_1015;
	}
	var_305_object = Obj();
	func_5094();
	StopDialog(var_311_object);
	@@var_311_object:GetReturnValue((int)-1);
	var_313_int = var_304_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6073(var_808_bool)
{
	var_810_int = 0; var_811_string = "";
	func_5319(var_810_int, "ood8Kapella2");
	var_813_bool = var_810_int == (int)0;
	if(var_813_bool != 0) {
		var_808_bool = 1;
		return 0;
	}
	var_808_bool = 0;
	return 0;
}


func_5562()
{
	var_58_object = Obj(); var_59_object = Obj();
	SetVariable("d2q01", (int)3);
	func_6298(Obj());
	var_62_object = var_59_object;
	var_73_float = 0;
	func_5391(var_73_float);
	@@var_59_object:AddMark("d2q01KapellaGotoSpi4ka", "pt_map_spi4ka", (int)1, (int)511389, var_73_float);
	func_6179();
	var_99_bool = 0; var_100_string = ""; var_101_string = "";
	func_5379(var_99_bool, "quest_d2_01", "woman");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6085(var_596_bool)
{
	var_598_int = 0; var_599_string = "";
	func_5319(var_598_int, "ood4Kapella1");
	var_601_bool = var_598_int == (int)0;
	if(var_601_bool != 0) {
		var_596_bool = 1;
		return 0;
	}
	var_596_bool = 0;
	return 0;
}


func_6097(var_602_bool)
{
	var_604_int = 0; var_605_string = "";
	func_5319(var_604_int, "d4q02");
	var_607_bool = var_604_int == (int)0;
	if(var_607_bool != 0) {
		var_602_bool = 1;
		return 0;
	}
	var_602_bool = 0;
	return 0;
}


func_5590(var_106_object)
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0;
	func_6298(Obj());
	var_110_object = var_107_object;
	func_6315(var_107_object, "pt_map_spi4ka", (float)2);
	var_130_object = Obj();
	func_6298(var_130_object);
	@@var_106_object:ShowMap(var_130_object);
	return 0;
}


func_3036(var_0_object, var_745_int, var_746_object)
{
	var_748_object = Obj(); var_749_bool = 0; var_750_int = 0; var_751_bool = 0; var_752_object = Obj(); var_753_bool = 0; var_754_int = 0; var_755_bool = 0;
	var_0_object = var_746_object;
	var_756_bool = 0; var_757_object = Obj(); var_758_float = 0;
	var_746_object = var_757_object;
	func_5025(var_756_bool, var_757_object, (float)70.0);
	var_759_bool = var_756_bool == 0; //@nz
	if(var_759_bool != 0) {
		var_745_int = -2;
		return 8;
	}
	CreateDialog(var_752_object);
	var_760_int = 0;
	func_5437(var_760_int);
	@@var_752_object:SetNPCName(var_760_int);
	var_761_int = 0;
	func_5435(var_761_int);
	@@var_752_object:SetNPCDescription(var_761_int);
	var_762_string = "";
	func_5439(var_762_string);
	@@var_752_object:SetPhoto(var_762_string);
	var_763_string = "";
	func_5441(var_763_string);
	@@var_752_object:SetPhoto2(var_763_string);
	var_764_int = 0;
	func_6348(var_764_int);
	@@var_752_object:SetPlayerName(var_764_int);
	IsOverrideActive(var_753_bool);
	var_765_bool = var_753_bool;
	if(var_765_bool != 0) {
		var_745_int = -2;
		return 8;
	}
	DoDialog(var_752_object);
	var_766_bool = 0; var_767_object = Obj();
	func_5303(Obj());
	var_768_object = var_767_object;
	func_5112(var_766_bool, var_767_object);
	var_769_object = Obj(); var_770_object = Obj();
	var_746_object = var_769_object;
	var_752_object = var_770_object;
	TaskCall(11);
	func_3117(var_771_object, var_772_object, var_773_string, var_774_bool, var_769_object, var_770_object);
	TaskReturn();
	@@var_752_object:IsDialogEnd(var_755_bool);
	
Label_3099:
	var_831_bool = var_755_bool == 0; //@nz
	if(var_831_bool != 0) {
		sync();
		@@var_752_object:IsDialogEnd(var_755_bool);
		goto Label_3099;
	}
	var_746_object = Obj();
	func_5094();
	StopDialog(var_752_object);
	@@var_752_object:GetReturnValue((int)-1);
	var_754_int = var_745_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6109(var_664_bool)
{
	var_666_int = 0; var_667_string = "";
	func_5319(var_666_int, "ood6Kapella3");
	var_669_bool = var_666_int == (int)0;
	if(var_669_bool != 0) {
		var_664_bool = 1;
		return 0;
	}
	var_664_bool = 0;
	return 0;
}


func_5094()
{
	var_293_bool = 0; var_294_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_296_bool = 0;
	func_5443(var_296_bool);
	if(var_296_bool != 0) {
	} else {
		HasAnimationTrack(var_294_bool, "head");
		var_298_bool = var_294_bool;
		if(var_298_bool == 0) goto Label_5111;
		UnlookAsync("head");
	}
Label_5111:
	return 2;
	
}


func_5606()
{
	SetVariable("d3q03", (int)1);
	func_6192();
	func_6205();
	var_91_object = Obj(); var_92_string = "";
	func_5324(var_91_object, "quest_d3_03");
	var_99_bool = 0; var_100_string = ""; var_101_string = "";
	func_5379(var_99_bool, "quest_d3_03", "boy");
	return 0;
}


func_6121(var_369_bool)
{
	var_371_int = 0; var_372_string = "";
	func_5319(var_371_int, "d2KnowBigVladIsBad");
	var_374_bool = var_371_int == (int)1;
	if(var_374_bool != 0) {
		var_369_bool = 1;
		return 0;
	}
	var_369_bool = 0;
	return 0;
}


func_6133(var_480_bool, var_481_object)
{
	var_482_float = 0; var_483_float = 0;
	@@var_481_object:GetProperty("disease", var_483_float);
	var_480_bool = var_483_float == (int)0;
	return 2;
}


func_5112(var_139_bool, var_140_object)
{
	var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_int = 0;
	GetVariable("voice_common", var_146_int);
	var_149_int = var_146_int;
	if(var_149_int != 0) {
		var_150_bool = 0; var_151_object = Obj();
		var_140_object = var_151_object;
		func_5170(var_150_bool, var_151_object);
		var_180_bool = var_150_bool == 0; //@nz
		if(var_180_bool != 0) {
			var_181_bool = 0; var_182_object = Obj();
			var_140_object = var_182_object;
			func_5207(var_181_bool, var_182_object);
			var_216_bool = var_181_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_139_bool = 0;
				return 4;
			}
		}
		irand(var_147_int, (int)2);
		var_218_int = var_147_int;
		if(var_218_int != 0) {
			var_221_int = var_146_int + (int)1;
			var_223_int = var_221_int % (int)3;
			SetVariable("voice_common", var_223_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_226_bool = 0; var_227_object = Obj();
		var_140_object = var_227_object;
		func_5207(var_226_bool, var_227_object);
		var_228_bool = var_226_bool == 0; //@nz
		if(var_228_bool != 0) {
			var_229_bool = 0; var_230_object = Obj();
			var_140_object = var_230_object;
			func_5170(var_229_bool, var_230_object);
			var_231_bool = var_229_bool == 0; //@nz
			if(var_231_bool != 0) {
				var_139_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_5168;
	
Label_5168:
	var_139_bool = 1;
	return 4;
	
}


func_5627()
{
	SetVariable("ood3Kapella1", (int)1);
	return 0;
}


func_6140()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)690, (int)2, (int)534538);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_6270(var_127_bool, var_128_object, (int)686);
	return 2;
}
EMIT "Stack[-1] = 0";


