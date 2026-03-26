// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Grimacing|W:Strange|W:Grin|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Ospina.png|W:ui/NPC_Ospina_b.png|W:quest_d1_03|W:eva_finish|W:ood1Ospina1|W:ood1Ospina2|W:unlock_butcher|W:ood3Ospina1|W:ood3Ospina2|W:ood3Ospina3|W:d3q01|W:d3q01OspinaGotoBigVlad|W:pt_map_bigvlad|A:AddMark|W:ood3Ospina4|W:quest_d3_01|W:place_butchers|A:ShowMap|W:pt_map_mladvlad|W:pt_map_lara|W:d4q01_subquest|W:d4q01OspinaGotoLara|W:ood4Ospina1|W:ood4Ospina2|W:ood6Ospina1|W:ood6Ospina2|W:d8q01MladVladIsBad|W:d8q01OspinaGotoMladVlad|W:ood8Ospina1|W:ood8Ospina2|W:ospina blood is given|W:d6q01_ospina_blood|W:playsound|W:giveitem|W:d6q01OspinaVolonteer|W:quest_d6_01|W:completed|W:d1q03|W:d6q01|W:d8q01|W:microscope_d6q01_ospina_blood|W:d1q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1103
// @RUN_TASK: 16
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3a9 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6e1 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x90a vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbd6 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd32 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfdb vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x10d9 vars=int,int
// @TASK_16: vars=cvector params=0
// @EVENT_7: op=0x114f vars=int
// @EVENT_6: op=0x1175 vars=
// @EVENT_5: op=0x1184 vars=
// @EVENT_45: op=0x1191 vars=bool
// @EVENT_0: op=0x119d vars=object
// @PE: 0x51,0xc0,0xd6,0x30c,0x393,0x3a9,0x66b,0x6cb,0x6e1,0x8a1,0x8f4,0x90a,0xb81,0xbc0,0xbd6,0xcad,0xd1c,0xd32,0xf86,0xfc5,0xfdb,0x1089,0x10c3,0x10d9,0x114f,0x1175,0x1191,0x1397,0x13bf,0x13c6,0x13cc,0x13d2,0x13dc,0x13e1,0x13e7,0x13ed,0x140a,0x1410,0x141e,0x142e,0x143e,0x1462,0x1468,0x146e,0x1474,0x147a,0x1497,0x149d,0x14a3,0x14b1,0x14b7,0x14c5,0x14d1,0x14dd,0x14e9,0x14f5,0x1501,0x150d,0x1519,0x1525,0x1531,0x153d,0x1549,0x1555,0x1561,0x156d,0x1579,0x1585,0x1591,0x159d,0x15a9,0x15b5,0x15c1,0x15cd,0x16b6

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4917();
		var_46_bool = var_42_cvector == (int)3872;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5236();
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_5297();
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_5283(var_56_object);
		}
		var_103_bool = var_42_cvector == (int)3870;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_5236();
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_5283(var_107_object);
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_5297();
		}
		var_111_bool = var_42_cvector == (int)3860;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_5236();
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_5297();
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_5283(var_117_object);
		}
		var_119_bool = var_42_cvector == (int)3857;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_5236();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_5283(var_123_object);
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_5297();
		}
		var_127_bool = var_42_cvector == (int)13923;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_5242();
		}
		var_133_bool = var_42_cvector == (int)11939;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_5303();
		}
		var_153_bool = var_42_cvector == (int)11940;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_5084();
		}
		var_165_bool = var_41_bool == (int)13922;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512729);
			@@@var_0_object:ClearReplies();
			var_184_bool = 0;
			var_184_bool = 0;
			var_185_bool = 0; var_186_object = Obj();
			var_186_object = var_1_object;
			func_5485(var_186_object);
			if(var_185_bool != 0) {
				var_193_bool = 0; var_194_object = Obj();
				var_194_object = var_1_object;
				func_5473(var_194_object);
				if(var_193_bool != 0) {
					var_184_bool = 1;
				}
			}
			if(var_184_bool != 0) {
				@@@var_0_object:AddReply((int)512731, (int)3851, (int)13924);
			}
			var_202_bool = 0;
			var_202_bool = 0;
			var_203_bool = 0;
			var_203_bool = 0;
			var_204_bool = 0;
			var_204_bool = 0;
			var_205_bool = 0; var_206_object = Obj();
			var_206_object = var_1_object;
			func_5497(var_206_object);
			if(var_205_bool != 0) {
				var_211_bool = 0; var_212_object = Obj();
				var_212_object = var_1_object;
				func_5545(var_212_object);
				if(var_211_bool != 0) {
					var_204_bool = 1;
				}
			}
			if(var_204_bool != 0) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_object;
				func_5557(var_218_object);
				var_223_bool = var_217_bool == 0; //@nz
				if(var_223_bool != 0) {
					var_203_bool = 1;
				}
			}
			if(var_203_bool != 0) {
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_5569(var_225_object);
				var_230_bool = var_224_bool == 0; //@nz
				if(var_230_bool != 0) {
					var_202_bool = 1;
				}
			}
			if(var_202_bool != 0) {
				@@@var_0_object:AddReply((int)512730, (int)11927, (int)13923);
			}
			@@@var_0_object:AddReply((int)512732, (int)-1, (int)13926);
			return 0;
		}
		var_238_bool = var_41_bool == (int)11927;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510792, (int)11929, (int)11928);
			@@@var_0_object:AddReply((int)510810, (int)11929, (int)11950);
			return 0;
		}
		var_248_bool = var_41_bool == (int)11929;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510794, (int)11931, (int)11930);
			@@@var_0_object:AddReply((int)510808, (int)11931, (int)11946);
			return 0;
		}
		var_258_bool = var_41_bool == (int)11931;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510795);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510796, (int)11933, (int)11932);
			@@@var_0_object:AddReply((int)510807, (int)11933, (int)11945);
			return 0;
		}
		var_268_bool = var_41_bool == (int)11933;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510798, (int)11935, (int)11934);
			@@@var_0_object:AddReply((int)510806, (int)11937, (int)11943);
			return 0;
		}
		var_278_bool = var_41_bool == (int)11935;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510800, (int)11937, (int)11936);
			@@@var_0_object:AddReply((int)510805, (int)11937, (int)11941);
			return 0;
		}
		var_288_bool = var_41_bool == (int)11937;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510801);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510803, (int)-1, (int)11939);
			@@@var_0_object:AddReply((int)510804, (int)-1, (int)11940);
			return 0;
		}
		var_298_bool = var_41_bool == (int)3851;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503562);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503563, (int)3858, (int)3852);
			@@@var_0_object:AddReply((int)503564, (int)3858, (int)3853);
			@@@var_0_object:AddReply((int)503565, (int)3855, (int)3854);
			return 0;
		}
		var_311_bool = var_41_bool == (int)3855;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503568, (int)-1, (int)3857);
			return 0;
		}
		var_318_bool = var_41_bool == (int)3858;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503571, (int)3862, (int)3861);
			@@@var_0_object:AddReply((int)503582, (int)3874, (int)3873);
			@@@var_0_object:AddReply((int)503570, (int)-1, (int)3860);
			return 0;
		}
		var_331_bool = var_41_bool == (int)3874;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503584, (int)3867, (int)3875);
			return 0;
		}
		var_338_bool = var_41_bool == (int)3862;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503573, (int)3864, (int)3863);
			@@@var_0_object:AddReply((int)503576, (int)3867, (int)3866);
			return 0;
		}
		var_348_bool = var_41_bool == (int)3864;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503574);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503575, (int)3867, (int)3865);
			@@@var_0_object:AddReply((int)503579, (int)-1, (int)3870);
			return 0;
		}
		var_358_bool = var_41_bool == (int)3867;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_192(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503581, (int)-1, (int)3872);
			return 0;
		}
		var_3_string = true;
		var_364_bool = 0;
		func_5053(var_364_bool);
		if(var_364_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4917();
		var_46_bool = var_42_cvector == (int)9768;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5107();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_5095();
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_5150(var_95_object);
		}
		var_121_bool = var_42_cvector == (int)9769;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_5095();
		}
		var_125_bool = var_42_cvector == (int)9760;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5095();
		}
		var_129_bool = var_42_cvector == (int)9762;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_5095();
		}
		var_133_bool = var_42_cvector == (int)12327;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_5107();
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_5130();
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_5150(var_141_object);
		}
		var_143_bool = var_42_cvector == (int)9749;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_5089();
		}
		var_149_bool = var_42_cvector == (int)9788;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_5101();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_5136();
		}
		var_173_bool = var_42_cvector == (int)9789;
		if(var_173_bool != 0) {
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_5101();
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_5136();
		}
		var_179_bool = var_41_bool == (int)9728;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508869);
			@@@var_0_object:ClearReplies();
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_5365(var_200_object);
			if(var_199_bool != 0) {
				var_207_bool = 0; var_208_object = Obj();
				var_208_object = var_1_object;
				func_5401(var_208_object);
				if(var_207_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 0) {
				@@@var_0_object:AddReply((int)508889, (int)9751, (int)9750);
			}
			var_216_bool = 0;
			var_216_bool = 0;
			var_217_bool = 0;
			var_217_bool = 0;
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_5389(var_219_object);
			if(var_218_bool != 0) {
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_5365(var_225_object);
				var_226_bool = var_224_bool == 0; //@nz
				if(var_226_bool != 0) {
					var_217_bool = 1;
				}
			}
			if(var_217_bool != 0) {
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_object;
				func_5401(var_228_object);
				if(var_227_bool != 0) {
					var_216_bool = 1;
				}
			}
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)511136, (int)12326, (int)12325);
			}
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_5353(var_233_object);
			if(var_232_bool != 0) {
				@@@var_0_object:AddReply((int)508888, (int)9729, (int)9749);
			}
			var_241_bool = 0;
			var_241_bool = 0;
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_5377(var_243_object);
			if(var_242_bool != 0) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_5413(var_249_object);
				if(var_248_bool != 0) {
					var_241_bool = 1;
				}
			}
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)508908, (int)9772, (int)9771);
			}
			@@@var_0_object:AddReply((int)511134, (int)-1, (int)12323);
			@@@var_0_object:AddReply((int)536099, (int)-1, (int)37851);
			return 0;
		}
		var_264_bool = var_41_bool == (int)9772;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508909);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508913, (int)9778, (int)9777);
			@@@var_0_object:AddReply((int)508910, (int)9778, (int)9773);
			return 0;
		}
		var_274_bool = var_41_bool == (int)9778;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508916, (int)9781, (int)9780);
			@@@var_0_object:AddReply((int)508918, (int)9783, (int)9782);
			return 0;
		}
		var_284_bool = var_41_bool == (int)9783;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508920, (int)9786, (int)9784);
			return 0;
		}
		var_291_bool = var_41_bool == (int)9781;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508921, (int)9786, (int)9785);
			return 0;
		}
		var_298_bool = var_41_bool == (int)9786;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508923, (int)-1, (int)9788);
			@@@var_0_object:AddReply((int)508924, (int)-1, (int)9789);
			return 0;
		}
		var_308_bool = var_41_bool == (int)9729;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508871, (int)9731, (int)9730);
			@@@var_0_object:AddReply((int)508887, (int)9731, (int)9747);
			return 0;
		}
		var_318_bool = var_41_bool == (int)9731;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_915(var_42_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)508872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508873, (int)9733, (int)9732);
			@@@var_0_object:AddReply((int)508880, (int)9740, (int)9739);
			return 0;
		}
		var_328_bool = var_41_bool == (int)9740;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508882, (int)9733, (int)9741);
			@@@var_0_object:AddReply((int)508883, (int)9744, (int)9743);
			return 0;
		}
		var_338_bool = var_41_bool == (int)9744;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508885, (int)-1, (int)9745);
			@@@var_0_object:AddReply((int)508886, (int)-1, (int)9746);
			return 0;
		}
		var_348_bool = var_41_bool == (int)9733;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_915(var_42_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)508874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508875, (int)9735, (int)9734);
			@@@var_0_object:AddReply((int)508879, (int)-1, (int)9738);
			return 0;
		}
		var_358_bool = var_41_bool == (int)9735;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508877, (int)-1, (int)9736);
			@@@var_0_object:AddReply((int)508878, (int)-1, (int)9737);
			return 0;
		}
		var_368_bool = var_41_bool == (int)12326;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511137);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536097, (int)37850, (int)37849);
			return 0;
		}
		var_375_bool = var_41_bool == (int)37850;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511138, (int)-1, (int)12327);
			return 0;
		}
		var_382_bool = var_41_bool == (int)9751;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508891, (int)9753, (int)9752);
			@@@var_0_object:AddReply((int)508893, (int)9759, (int)9754);
			return 0;
		}
		var_392_bool = var_41_bool == (int)9759;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508899, (int)-1, (int)9760);
			@@@var_0_object:AddReply((int)508900, (int)-1, (int)9762);
			return 0;
		}
		var_402_bool = var_41_bool == (int)9753;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508894, (int)9756, (int)9755);
			return 0;
		}
		var_409_bool = var_41_bool == (int)9756;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508896, (int)9763, (int)9757);
			@@@var_0_object:AddReply((int)508897, (int)9759, (int)9758);
			return 0;
		}
		var_419_bool = var_41_bool == (int)9763;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508902, (int)9766, (int)9764);
			@@@var_0_object:AddReply((int)508903, (int)9766, (int)9765);
			return 0;
		}
		var_429_bool = var_41_bool == (int)9766;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_915(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508905, (int)-1, (int)9768);
			@@@var_0_object:AddReply((int)508906, (int)-1, (int)9769);
			return 0;
		}
		var_3_string = true;
		var_438_bool = 0;
		func_5053(var_438_bool);
		if(var_438_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3aa";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4917();
		var_46_bool = var_42_cvector == (int)12266;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5218();
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_5198();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_5182(var_72_object);
		}
		var_98_bool = var_42_cvector == (int)12267;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_5218();
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_5198();
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_5182(var_104_object);
		}
		var_106_bool = var_42_cvector == (int)12281;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_5230();
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_5224();
		}
		var_116_bool = var_41_bool == (int)12246;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511065);
			@@@var_0_object:ClearReplies();
			var_135_bool = 0;
			var_135_bool = 0;
			var_136_bool = 0; var_137_object = Obj();
			var_137_object = var_1_object;
			func_5437(var_137_object);
			if(var_136_bool != 0) {
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_object;
				func_5425(var_145_object);
				if(var_144_bool != 0) {
					var_135_bool = 1;
				}
			}
			if(var_135_bool != 0) {
				@@@var_0_object:AddReply((int)511066, (int)12248, (int)12247);
			}
			var_153_bool = 0;
			var_153_bool = 0;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_5461(var_155_object);
			if(var_154_bool != 0) {
				var_160_bool = 0; var_161_object = Obj();
				var_161_object = var_1_object;
				func_5449(var_161_object);
				if(var_160_bool != 0) {
					var_153_bool = 1;
				}
			}
			if(var_153_bool != 0) {
				@@@var_0_object:AddReply((int)511079, (int)12268, (int)12263);
			}
			@@@var_0_object:AddReply((int)511505, (int)-1, (int)12707);
			@@@var_0_object:AddReply((int)536130, (int)-1, (int)37889);
			return 0;
		}
		var_176_bool = var_41_bool == (int)12268;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511084, (int)12271, (int)12269);
			@@@var_0_object:AddReply((int)511085, (int)12272, (int)12270);
			return 0;
		}
		var_186_bool = var_41_bool == (int)12272;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511088, (int)12275, (int)12273);
			return 0;
		}
		var_193_bool = var_41_bool == (int)12271;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511089, (int)12275, (int)12274);
			return 0;
		}
		var_200_bool = var_41_bool == (int)12275;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511091, (int)12279, (int)12276);
			@@@var_0_object:AddReply((int)511092, (int)12279, (int)12277);
			return 0;
		}
		var_210_bool = var_41_bool == (int)12279;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511094, (int)-1, (int)12281);
			return 0;
		}
		var_217_bool = var_41_bool == (int)12248;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511068, (int)12250, (int)12249);
			@@@var_0_object:AddReply((int)511073, (int)12255, (int)12254);
			return 0;
		}
		var_227_bool = var_41_bool == (int)12250;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511070, (int)12257, (int)12251);
			@@@var_0_object:AddReply((int)511071, (int)12257, (int)12252);
			@@@var_0_object:AddReply((int)511072, (int)12255, (int)12253);
			return 0;
		}
		var_240_bool = var_41_bool == (int)12255;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511075, (int)12257, (int)12256);
			return 0;
		}
		var_247_bool = var_41_bool == (int)12257;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511077, (int)40703, (int)12261);
			@@@var_0_object:AddReply((int)511078, (int)12264, (int)12262);
			return 0;
		}
		var_257_bool = var_41_bool == (int)40703;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538787);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538788, (int)12264, (int)40704);
			@@@var_0_object:AddReply((int)538789, (int)12264, (int)40705);
			return 0;
		}
		var_267_bool = var_41_bool == (int)12264;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_1739(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511080);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511081, (int)-1, (int)12266);
			@@@var_0_object:AddReply((int)511082, (int)-1, (int)12267);
			return 0;
		}
		var_3_string = true;
		var_276_bool = 0;
		func_5053(var_276_bool);
		if(var_276_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6e2";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4917();
		var_46_bool = var_42_cvector == (int)14897;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5277();
		}
		var_52_bool = var_42_cvector == (int)14911;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_5248();
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_5166(var_97_object);
		}
		var_123_bool = var_42_cvector == (int)40378;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_5248();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5166(var_127_object);
		}
		var_129_bool = var_42_cvector == (int)40377;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_5248();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_5166(var_133_object);
		}
		var_135_bool = var_42_cvector == (int)13535;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_5271();
		}
		var_141_bool = var_41_bool == (int)13534;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512374);
			@@@var_0_object:ClearReplies();
			var_160_bool = 0;
			var_160_bool = 0;
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_5509(var_162_object);
			var_169_bool = var_161_bool == 0; //@nz
			if(var_169_bool != 0) {
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_5533(var_171_object);
				if(var_170_bool != 0) {
					var_160_bool = 1;
				}
			}
			if(var_160_bool != 0) {
				@@@var_0_object:AddReply((int)513641, (int)14898, (int)14897);
			}
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_5521(var_180_object);
			if(var_179_bool != 0) {
				@@@var_0_object:AddReply((int)512375, (int)13536, (int)13535);
			}
			@@@var_0_object:AddReply((int)513658, (int)-1, (int)14916);
			return 0;
		}
		var_192_bool = var_41_bool == (int)13536;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512378, (int)13544, (int)13538);
			@@@var_0_object:AddReply((int)512377, (int)13539, (int)13537);
			return 0;
		}
		var_202_bool = var_41_bool == (int)13539;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512380, (int)13541, (int)13540);
			return 0;
		}
		var_209_bool = var_41_bool == (int)13541;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512382, (int)-1, (int)13542);
			@@@var_0_object:AddReply((int)512383, (int)-1, (int)13543);
			return 0;
		}
		var_219_bool = var_41_bool == (int)13544;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512385, (int)13552, (int)13545);
			@@@var_0_object:AddReply((int)512386, (int)13547, (int)13546);
			return 0;
		}
		var_229_bool = var_41_bool == (int)13547;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512388, (int)13550, (int)13548);
			@@@var_0_object:AddReply((int)512389, (int)13550, (int)13549);
			return 0;
		}
		var_239_bool = var_41_bool == (int)13550;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512390);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512391, (int)-1, (int)13551);
			return 0;
		}
		var_246_bool = var_41_bool == (int)13552;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512393, (int)13559, (int)13554);
			@@@var_0_object:AddReply((int)512394, (int)13557, (int)13555);
			@@@var_0_object:AddReply((int)512395, (int)13558, (int)13556);
			return 0;
		}
		var_259_bool = var_41_bool == (int)13558;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512397);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512403, (int)13565, (int)13564);
			return 0;
		}
		var_266_bool = var_41_bool == (int)13557;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512402, (int)13565, (int)13563);
			return 0;
		}
		var_273_bool = var_41_bool == (int)13559;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512398);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512399, (int)13561, (int)13560);
			return 0;
		}
		var_280_bool = var_41_bool == (int)13561;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512401, (int)13565, (int)13562);
			return 0;
		}
		var_287_bool = var_41_bool == (int)13565;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512405, (int)13570, (int)13568);
			@@@var_0_object:AddReply((int)512406, (int)13570, (int)13569);
			return 0;
		}
		var_297_bool = var_41_bool == (int)13570;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512407);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512408, (int)-1, (int)13572);
			return 0;
		}
		var_304_bool = var_41_bool == (int)14898;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513642);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513643, (int)14900, (int)14899);
			return 0;
		}
		var_311_bool = var_41_bool == (int)14900;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513645, (int)14902, (int)14901);
			return 0;
		}
		var_318_bool = var_41_bool == (int)14902;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513647, (int)14904, (int)14903);
			@@@var_0_object:AddReply((int)513649, (int)14906, (int)14905);
			return 0;
		}
		var_328_bool = var_41_bool == (int)14906;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513650);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513652, (int)40376, (int)14908);
			return 0;
		}
		var_335_bool = var_41_bool == (int)40376;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538491, (int)-1, (int)40377);
			return 0;
		}
		var_342_bool = var_41_bool == (int)14904;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513651, (int)14909, (int)14907);
			@@@var_0_object:AddReply((int)513655, (int)14913, (int)14912);
			return 0;
		}
		var_352_bool = var_41_bool == (int)14913;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513657, (int)14909, (int)14914);
			return 0;
		}
		var_359_bool = var_41_bool == (int)14909;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_2292(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513654, (int)-1, (int)14911);
			@@@var_0_object:AddReply((int)538492, (int)-1, (int)40378);
			return 0;
		}
		var_3_string = true;
		var_368_bool = 0;
		func_5053(var_368_bool);
		if(var_368_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x90b";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4917();
		var_46_bool = var_41_bool == (int)21998;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3008(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520785, (int)22000, (int)21999);
			@@@var_0_object:AddReply((int)520792, (int)22008, (int)22007);
			@@@var_0_object:AddReply((int)520796, (int)22014, (int)22013);
			return 0;
		}
		var_75_bool = var_41_bool == (int)22014;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_3008(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520798, (int)-1, (int)22015);
			return 0;
		}
		var_82_bool = var_41_bool == (int)22008;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_3008(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520794, (int)22000, (int)22009);
			@@@var_0_object:AddReply((int)520795, (int)22000, (int)22011);
			return 0;
		}
		var_92_bool = var_41_bool == (int)22000;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_3008(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520786);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520787, (int)22002, (int)22001);
			@@@var_0_object:AddReply((int)520791, (int)22002, (int)22005);
			return 0;
		}
		var_102_bool = var_41_bool == (int)22002;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_3008(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520789, (int)-1, (int)22003);
			@@@var_0_object:AddReply((int)520790, (int)-1, (int)22004);
			return 0;
		}
		var_3_string = true;
		var_111_bool = 0;
		func_5053(var_111_bool);
		if(var_111_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbd7";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4917();
		var_46_bool = var_42_cvector == (int)33796;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5055();
		}
		var_56_bool = var_42_cvector == (int)33811;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5074();
		}
		var_86_bool = var_42_cvector == (int)33835;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_5062();
		}
		var_92_bool = var_41_bool == (int)33781;
		if(var_92_bool != 0) {
			var_93_bool = 0;
			var_93_bool = 0;
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_5317(var_95_object);
			if(var_94_bool != 0) {
				var_102_bool = 0; var_103_object = Obj();
				var_103_object = var_1_object;
				func_5341(var_103_object);
				if(var_102_bool != 0) {
					var_93_bool = 1;
				}
			}
			if(var_93_bool != 0) {
				var_108_object = Obj(); var_109_object = Obj();
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_5068();
				var_112_string = "";
				func_3356(var_42_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)532352);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532353, (int)33783, (int)33782);
				@@@var_0_object:AddReply((int)532386, (int)33825, (int)33824);
				return 0;
			}
			var_136_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532393);
			@@@var_0_object:ClearReplies();
			var_138_bool = 0;
			var_138_bool = 0;
			var_139_bool = 0; var_140_object = Obj();
			var_140_object = var_1_object;
			func_5329(var_140_object);
			if(var_139_bool != 0) {
				var_145_bool = 0; var_146_object = Obj();
				var_146_object = var_1_object;
				func_5581(var_146_object);
				if(var_145_bool != 0) {
					var_138_bool = 1;
				}
			}
			if(var_138_bool != 0) {
				@@@var_0_object:AddReply((int)532394, (int)33836, (int)33835);
			}
			@@@var_0_object:AddReply((int)532453, (int)-1, (int)33895);
			return 0;
		}
		var_168_bool = var_41_bool == (int)33836;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_3356(var_42_cvector, "Strange");
			@@@var_0_object:SetMessage((int)532395);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532396, (int)33838, (int)33837);
			@@@var_0_object:AddReply((int)532404, (int)33847, (int)33846);
			@@@var_0_object:AddReply((int)532408, (int)-1, (int)33850);
			return 0;
		}
		var_181_bool = var_41_bool == (int)33847;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532406, (int)-1, (int)33848);
			@@@var_0_object:AddReply((int)532407, (int)-1, (int)33849);
			return 0;
		}
		var_191_bool = var_41_bool == (int)33838;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_3356(var_42_cvector, "Strange");
			@@@var_0_object:SetMessage((int)532397);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532398, (int)33840, (int)33839);
			@@@var_0_object:AddReply((int)532402, (int)-1, (int)33843);
			@@@var_0_object:AddReply((int)532403, (int)33840, (int)33844);
			return 0;
		}
		var_204_bool = var_41_bool == (int)33840;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532399);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532400, (int)-1, (int)33841);
			@@@var_0_object:AddReply((int)532401, (int)-1, (int)33842);
			return 0;
		}
		var_214_bool = var_41_bool == (int)33825;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_3356(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)532387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532388, (int)33827, (int)33826);
			@@@var_0_object:AddReply((int)532392, (int)33819, (int)33832);
			return 0;
		}
		var_224_bool = var_41_bool == (int)33827;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_3356(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)532389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532390, (int)33819, (int)33828);
			@@@var_0_object:AddReply((int)532391, (int)33819, (int)33830);
			return 0;
		}
		var_234_bool = var_41_bool == (int)33783;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_3356(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)532354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532355, (int)33785, (int)33784);
			@@@var_0_object:AddReply((int)532385, (int)33785, (int)33822);
			return 0;
		}
		var_244_bool = var_41_bool == (int)33785;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532357, (int)33787, (int)33786);
			@@@var_0_object:AddReply((int)532382, (int)33819, (int)33818);
			return 0;
		}
		var_254_bool = var_41_bool == (int)33819;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532384, (int)33787, (int)33820);
			return 0;
		}
		var_261_bool = var_41_bool == (int)33787;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_3356(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)532358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532359, (int)33789, (int)33788);
			@@@var_0_object:AddReply((int)532373, (int)33808, (int)33807);
			@@@var_0_object:AddReply((int)532379, (int)33815, (int)33814);
			return 0;
		}
		var_274_bool = var_41_bool == (int)33815;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532381, (int)33808, (int)33816);
			return 0;
		}
		var_281_bool = var_41_bool == (int)33808;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532375, (int)33810, (int)33809);
			@@@var_0_object:AddReply((int)532378, (int)33789, (int)33812);
			return 0;
		}
		var_291_bool = var_41_bool == (int)33810;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532377, (int)-1, (int)33811);
			return 0;
		}
		var_298_bool = var_41_bool == (int)33789;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_3356(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)532360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532361, (int)33795, (int)33790);
			@@@var_0_object:AddReply((int)532362, (int)33793, (int)33792);
			@@@var_0_object:AddReply((int)532372, (int)33810, (int)33805);
			return 0;
		}
		var_311_bool = var_41_bool == (int)33793;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532364, (int)33795, (int)33794);
			@@@var_0_object:AddReply((int)532368, (int)33800, (int)33799);
			return 0;
		}
		var_321_bool = var_41_bool == (int)33800;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532370, (int)33795, (int)33801);
			@@@var_0_object:AddReply((int)532371, (int)33810, (int)33803);
			return 0;
		}
		var_331_bool = var_41_bool == (int)33795;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_3356(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532366, (int)-1, (int)33796);
			@@@var_0_object:AddReply((int)532367, (int)33810, (int)33797);
			return 0;
		}
		var_3_string = true;
		var_340_bool = 0;
		func_5053(var_340_bool);
		if(var_340_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd33";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4917();
		var_46_bool = var_41_bool == (int)36971;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_4037(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_75_bool = var_41_bool == (int)36973;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_4037(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_85_bool = var_41_bool == (int)36975;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_4037(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_94_bool = 0;
		func_5053(var_94_bool);
		if(var_94_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfdc";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	if((int)1 != 0) {
		func_4917();
		var_46_bool = var_41_int == (int)42557;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_4291(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_5053(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x10da";
	
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_43_bool = var_41_int == (int)10;
	if(var_43_bool != 0) {
		func_4427();
		var_45_bool = 0;
		var_45_bool = 0;
		var_46_bool = 0;
		func_4641(var_46_bool);
		if(var_46_bool != 0) {
			var_49_bool = 0;
			func_4396(var_49_bool);
			if(var_49_bool != 0) {
				var_45_bool = 1;
			}
		}
		if(var_45_bool != 0) {
			var_66_bool = 0;
			func_4376(var_66_bool);
			if(var_66_bool != 0) {
				var_85_bool = 0; var_86_object = Obj();
				func_4924(Obj());
				var_87_object = var_86_object;
				func_4791(var_85_bool, var_86_object);
			}
		} else {
			func_4391(var_41_int);
			func_4418();
		}
	}
	return 0;
	
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_4609();
	func_4427();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0();
	func_4427();
	var_42_string = "";
	func_4871("Neutral");
	func_4418();
	return 0;
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool;
	if(var_42_bool != 0) {
		func_4418();
	} else {
		var_48_string = "";
		func_4871("Neutral");
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
		func_4609();
		var_45_bool = 0; var_46_object = Obj();
		var_41_object = var_46_object;
		func_4632(var_45_bool, var_46_object);
		EventEnable(0);
		var_59_object = Obj();
		var_41_object = var_59_object;
		func_5814(var_59_object);
		var_906_string = "";
		func_4871("Neutral");
		func_4427();
		func_4418();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	var_41_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_4362(var_40_cvector);
	return 0;
}


func_0(var_0_object, var_607_int, var_608_object)
{
	var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; var_614_object = Obj(); var_615_bool = 0; var_616_int = 0; var_617_bool = 0;
	var_0_object = var_608_object;
	var_618_bool = 0; var_619_object = Obj(); var_620_float = 0;
	var_608_object = var_619_object;
	func_4646(var_618_bool, var_619_object, (float)70.0);
	var_621_bool = var_618_bool == 0; //@nz
	if(var_621_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	CreateDialog(var_614_object);
	var_622_int = 0;
	func_5047(var_622_int);
	@@var_614_object:SetNPCName(var_622_int);
	var_623_int = 0;
	func_5045(var_623_int);
	@@var_614_object:SetNPCDescription(var_623_int);
	var_624_string = "";
	func_5049(var_624_string);
	@@var_614_object:SetPhoto(var_624_string);
	var_625_string = "";
	func_5051(var_625_string);
	@@var_614_object:SetPhoto2(var_625_string);
	var_626_int = 0;
	func_5797(var_626_int);
	@@var_614_object:SetPlayerName(var_626_int);
	IsOverrideActive(var_615_bool);
	var_627_bool = var_615_bool;
	if(var_627_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	DoDialog(var_614_object);
	var_628_bool = 0; var_629_object = Obj();
	func_4924(Obj());
	var_630_object = var_629_object;
	func_4733(var_628_bool, var_629_object);
	var_631_object = Obj(); var_632_object = Obj();
	var_608_object = var_631_object;
	var_614_object = var_632_object;
	TaskCall(1);
	func_81(var_633_object, var_634_object, var_635_string, var_636_bool, var_631_object, var_632_object);
	TaskReturn();
	@@var_614_object:IsDialogEnd(var_617_bool);
	
Label_63:
	var_706_bool = var_617_bool == 0; //@nz
	if(var_706_bool != 0) {
		sync();
		@@var_614_object:IsDialogEnd(var_617_bool);
		goto Label_63;
	}
	var_608_object = Obj();
	func_4715();
	StopDialog(var_614_object);
	@@var_614_object:GetReturnValue((int)-1);
	var_616_int = var_607_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4609()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_5377(var_484_bool)
{
	var_486_int = 0; var_487_string = "";
	func_4940(var_486_int, "ood3Ospina3");
	var_489_bool = var_486_int == (int)0;
	if(var_489_bool != 0) {
		var_484_bool = 1;
		return 0;
	}
	var_484_bool = 0;
	return 0;
}


func_4614(var_56_float, var_57_object)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	GetPosition(var_61_cvector);
	@@var_57_object:GetPosition(var_62_cvector);
	var_63_cvector = var_62_cvector - var_61_cvector;
	var_56_float = var_63_cvector | var_63_cvector;
	return 6;
}


func_4871(var_265_string)
{
	var_266_bool = 0; var_267_float = 0; var_268_float = 0; var_269_bool = 0; var_270_float = 0; var_271_float = 0;
	lshHasAnimation(var_269_bool, var_265_string);
	var_272_bool = var_269_bool;
	if(var_272_bool != 0) {
		lshGetAnimTimes(var_265_string, var_270_float, var_271_float);
		lshPlayAnimation(var_270_float, var_271_float, (bool)0);
	} else {
		var_275_int = "Can't find lsh animation : " + var_265_string;
		Trace(var_275_int);
	}
	return 6;
	
}


func_5641()
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateDiaryEntry(var_68_object, (int)70, (int)1, (int)512152);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_68_object = var_73_object;
	func_5719(var_72_bool, var_73_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5130()
{
	SetVariable("ood3Ospina4", (int)1);
	return 0;
}


func_4362(var_0_object)
{
	var_42_bool = 0;
	func_4641(var_42_bool);
	var_45_bool = var_42_bool == 0; //@nz
	if(var_45_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_4371:
	func_4538();
	goto Label_4371;
}
EMIT "Return(); Pop(0)";


func_780(var_0_object, var_1_object, var_2_object, var_3_string, var_426_object, var_427_object)
{
	var_0_object = var_427_object;
	var_1_object = var_426_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_433_string = "";
		func_915(var_427_object, "Neutral");
		@@@var_0_object:SetMessage((int)508869);
		@@@var_0_object:ClearReplies();
		var_442_bool = 0;
		var_442_bool = 0;
		var_443_bool = 0; var_444_object = Obj();
		var_444_object = var_1_object;
		func_5365(var_444_object);
		if(var_443_bool != 0) {
			var_449_bool = 0; var_450_object = Obj();
			var_450_object = var_1_object;
			func_5401(var_450_object);
			if(var_449_bool != 0) {
				var_442_bool = 1;
			}
		}
		if(var_442_bool != 0) {
			@@@var_0_object:AddReply((int)508889, (int)9751, (int)9750);
		}
		var_458_bool = 0;
		var_458_bool = 0;
		var_459_bool = 0;
		var_459_bool = 0;
		var_460_bool = 0; var_461_object = Obj();
		var_461_object = var_1_object;
		func_5389(var_461_object);
		if(var_460_bool != 0) {
			var_466_bool = 0; var_467_object = Obj();
			var_467_object = var_1_object;
			func_5365(var_467_object);
			var_468_bool = var_466_bool == 0; //@nz
			if(var_468_bool != 0) {
				var_459_bool = 1;
			}
		}
		if(var_459_bool != 0) {
			var_469_bool = 0; var_470_object = Obj();
			var_470_object = var_1_object;
			func_5401(var_470_object);
			if(var_469_bool != 0) {
				var_458_bool = 1;
			}
		}
		if(var_458_bool != 0) {
			@@@var_0_object:AddReply((int)511136, (int)12326, (int)12325);
		}
		var_474_bool = 0; var_475_object = Obj();
		var_475_object = var_1_object;
		func_5353(var_475_object);
		if(var_474_bool != 0) {
			@@@var_0_object:AddReply((int)508888, (int)9729, (int)9749);
		}
		var_483_bool = 0;
		var_483_bool = 0;
		var_484_bool = 0; var_485_object = Obj();
		var_485_object = var_1_object;
		func_5377(var_485_object);
		if(var_484_bool != 0) {
			var_490_bool = 0; var_491_object = Obj();
			var_491_object = var_1_object;
			func_5413(var_491_object);
			if(var_490_bool != 0) {
				var_483_bool = 1;
			}
		}
		if(var_483_bool != 0) {
			@@@var_0_object:AddReply((int)508908, (int)9772, (int)9771);
		}
		@@@var_0_object:AddReply((int)511134, (int)-1, (int)12323);
		@@@var_0_object:AddReply((int)536099, (int)-1, (int)37851);
		goto Label_885;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x310";
	}
Label_885:
	var_505_bool = 0;
	func_5053(var_505_bool);
	if(var_505_bool != 0) {

	Label_889:
		lshWaitForAnimEnd();
		var_506_string = var_3_string;
		if(var_506_string != 0) {
		} else {
			var_507_string = "";
			var_507_string = var_2_object;
			func_4871(var_507_string);
			goto Label_889;
	}
		PlayAnimation("all", "idle");

	Label_904:
		WaitForAnimEnd();
		var_510_string = var_3_string;
		if(var_510_string != 0) {
			goto Label_914;
		}
		PlayAnimation("all", "idle");
		goto Label_904;
	}
	goto Label_914;
	
Label_914:
	return 0;
	
}


func_5389(var_460_bool)
{
	var_462_int = 0; var_463_string = "";
	func_4940(var_462_int, "ood3Ospina4");
	var_465_bool = var_462_int == (int)0;
	if(var_465_bool != 0) {
		var_460_bool = 1;
		return 0;
	}
	var_460_bool = 0;
	return 0;
}


func_4622(var_49_bool, var_50_cvector)
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


func_5136()
{
	SetVariable("d3q01", (int)7);
	func_5628();
	var_166_bool = 0; var_167_string = ""; var_168_string = "";
	func_4989(var_166_bool, "quest_d3_01", "place_butchers");
	return 0;
}


func_5654()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)162, (int)1, (int)515395);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_5719(var_62_bool, var_63_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4887(var_240_string, var_241_bool)
{
	var_244_bool = 0; var_245_float = 0; var_246_float = 0; var_247_bool = 0; var_248_float = 0; var_249_float = 0;
	lshHasAnimation(var_247_bool, var_240_string);
	var_250_bool = var_247_bool;
	if(var_250_bool != 0) {
		lshGetAnimTimes(var_240_string, var_248_float, var_249_float);
		lshPlayAnimation(var_248_float, var_249_float, var_241_bool);
	} else {
		var_252_int = "Can't find lsh animation : " + var_240_string;
		Trace(var_252_int);
	}
	return 6;
	
}


func_4632(var_45_bool, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	@@var_46_object:GetPosition(var_48_cvector);
	var_49_bool = 0; var_50_cvector = CVector(0,0,0);
	var_48_cvector = var_50_cvector;
	func_4622(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
	return 2;
}


func_4376(var_66_bool)
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
	func_4632(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1562(var_0_object, var_517_int, var_518_object)
{
	var_520_object = Obj(); var_521_bool = 0; var_522_int = 0; var_523_bool = 0; var_524_object = Obj(); var_525_bool = 0; var_526_int = 0; var_527_bool = 0;
	var_0_object = var_518_object;
	var_528_bool = 0; var_529_object = Obj(); var_530_float = 0;
	var_518_object = var_529_object;
	func_4646(var_528_bool, var_529_object, (float)70.0);
	var_531_bool = var_528_bool == 0; //@nz
	if(var_531_bool != 0) {
		var_517_int = -2;
		return 8;
	}
	CreateDialog(var_524_object);
	var_532_int = 0;
	func_5047(var_532_int);
	@@var_524_object:SetNPCName(var_532_int);
	var_533_int = 0;
	func_5045(var_533_int);
	@@var_524_object:SetNPCDescription(var_533_int);
	var_534_string = "";
	func_5049(var_534_string);
	@@var_524_object:SetPhoto(var_534_string);
	var_535_string = "";
	func_5051(var_535_string);
	@@var_524_object:SetPhoto2(var_535_string);
	var_536_int = 0;
	func_5797(var_536_int);
	@@var_524_object:SetPlayerName(var_536_int);
	IsOverrideActive(var_525_bool);
	var_537_bool = var_525_bool;
	if(var_537_bool != 0) {
		var_517_int = -2;
		return 8;
	}
	DoDialog(var_524_object);
	var_538_bool = 0; var_539_object = Obj();
	func_4924(Obj());
	var_540_object = var_539_object;
	func_4733(var_538_bool, var_539_object);
	var_541_object = Obj(); var_542_object = Obj();
	var_518_object = var_541_object;
	var_524_object = var_542_object;
	TaskCall(5);
	func_1643(var_543_object, var_544_object, var_545_string, var_546_bool, var_541_object, var_542_object);
	TaskReturn();
	@@var_524_object:IsDialogEnd(var_527_bool);
	
Label_1625:
	var_603_bool = var_527_bool == 0; //@nz
	if(var_603_bool != 0) {
		sync();
		@@var_524_object:IsDialogEnd(var_527_bool);
		goto Label_1625;
	}
	var_518_object = Obj();
	func_4715();
	StopDialog(var_524_object);
	@@var_524_object:GetReturnValue((int)-1);
	var_526_int = var_517_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5401(var_449_bool)
{
	var_451_int = 0; var_452_string = "";
	func_4940(var_451_int, "d3q01");
	var_454_bool = var_451_int == (int)2;
	if(var_454_bool != 0) {
		var_449_bool = 1;
		return 0;
	}
	var_449_bool = 0;
	return 0;
}


func_3356(var_2_object, var_344_string)
{
	var_345_bool = 0;
	func_5053(var_345_bool);
	var_346_bool = var_345_bool == 0; //@nz
	if(var_346_bool != 0) {
		return 0;
	}
	var_347_bool = var_344_string == var_2_object;
	if(var_347_bool != 0) {
		return 0;
	}
	var_348_string = ""; var_349_bool = 0;
	var_344_string = var_348_string;
	var_351_bool = var_344_string == "";
	if(var_351_bool != 0) {
		var_349_bool = 0;
	} else {
		var_349_bool = 1;
	}
	func_4887(var_348_string, var_349_bool);
	var_2_object = var_344_string;
	return 0;
	
}


func_5150(var_95_object)
{
	var_96_object = Obj(); var_97_string = ""; var_98_float = 0;
	func_5747(Obj());
	var_99_object = var_96_object;
	func_5764(var_96_object, "pt_map_bigvlad", (float)2);
	var_119_object = Obj();
	func_5747(var_119_object);
	@@var_95_object:ShowMap(var_119_object);
	return 0;
}


func_4641(var_42_bool)
{
	var_43_bool = 0; var_44_bool = 0;
	IsLoaded(var_44_bool);
	var_44_bool = var_42_bool;
	return 2;
}


func_5667()
{
	var_138_object = Obj(); var_139_object = Obj();
	CreateDiaryEntry(var_139_object, (int)121, (int)1, (int)513744);
	var_143_bool = 0; var_144_object = Obj(); var_145_int = 0;
	var_139_object = var_144_object;
	func_5719(var_143_bool, var_144_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5413(var_490_bool)
{
	var_492_int = 0; var_493_string = "";
	func_4940(var_492_int, "d3q01");
	var_495_bool = var_492_int == (int)6;
	if(var_495_bool != 0) {
		var_490_bool = 1;
		return 0;
	}
	var_490_bool = 0;
	return 0;
}


func_4646(var_73_bool, var_74_object, var_75_float)
{
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_bool = 0;
	@@var_74_object:GetPosition(var_86_cvector);
	@@var_74_object:GetEyesHeight(var_85_float);
	var_94_float = GetByIndex(var_86_cvector, 1);
	var_94_float = var_94_float + var_85_float;
	SetByIndex(var_86_cvector, 1) = var_94_float;
	GetPosition(var_87_cvector);
	GetEyesHeight(var_85_float);
	var_95_float = GetByIndex(var_87_cvector, 1);
	var_95_float = var_95_float + var_85_float;
	SetByIndex(var_87_cvector, 1) = var_95_float;
	var_88_cvector = var_86_cvector - var_87_cvector;
	var_96_float = GetByIndex(var_88_cvector, 1);
	SetByIndex(var_88_cvector, 1) = (float)0;
	var_97_int = var_88_cvector | var_88_cvector;
	var_98_float = sqrt(var_97_int);
	var_88_cvector = var_88_cvector / var_98_float;
	var_89_cvector = -var_88_cvector;
	var_99_float = var_88_cvector * var_75_float;
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0);
	var_101_cvector = var_89_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4930(var_100_cvector, var_101_cvector);
	var_109_float = var_100_cvector * (int)25;
	var_110_int = var_99_float + var_109_float;
	var_90_cvector = var_110_int - CVector(0.0, 10.0, 0.0);
	var_91_cvector = var_87_cvector + var_90_cvector;
	IsOverrideActive(var_92_bool);
	var_112_bool = var_92_bool;
	if(var_112_bool != 0) {
		var_73_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_91_cvector, var_89_cvector, (bool)1);
	var_114_float = GetByIndex(var_90_cvector, 0);
	var_115_float = GetByIndex(var_90_cvector, 2);
	Rotate(var_114_float, var_115_float);
	var_116_bool = 0;
	func_5053(var_116_bool);
	if(var_116_bool != 0) {
	} else {
		HasAnimationTrack(var_93_bool, "head");
		var_118_bool = var_93_bool;
		if(var_118_bool == 0) goto Label_4709;
		LookAsyncCamera("head");
	}
Label_4709:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_73_bool = 1;
	return 18;
	
}


func_4902(var_168_bool, var_169_string)
{
	var_170_bool = 0; var_171_bool = 0;
	var_172_bool = 0;
	func_5053(var_172_bool);
	if(var_172_bool != 0) {
		lshHasSpeech(var_171_bool, var_169_string);
		var_173_bool = var_171_bool;
		if(var_173_bool != 0) {
			lshPlaySpeech(var_169_string);
			var_168_bool = 1;
			return 2;
		}
	}
	var_168_bool = 0;
	return 2;
}


func_4391(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_118_float, var_119_float);
	return 0;
}


func_4396(var_49_bool)
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
	func_4614(var_56_float, var_57_object);
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


func_5166(var_97_object)
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0;
	func_5747(Obj());
	var_101_object = var_98_object;
	func_5764(var_98_object, "pt_map_mladvlad", (float)2);
	var_121_object = Obj();
	func_5747(var_121_object);
	@@var_97_object:ShowMap(var_121_object);
	return 0;
}


func_5680()
{
	var_156_object = Obj(); var_157_object = Obj();
	CreateDiaryEntry(var_157_object, (int)721, (int)1, (int)538785);
	var_161_bool = 0; var_162_object = Obj(); var_163_int = 0;
	var_157_object = var_162_object;
	func_5719(var_161_bool, var_162_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2864(var_0_object, var_62_int, var_63_object)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_int = 0; var_68_bool = 0; var_69_object = Obj(); var_70_bool = 0; var_71_int = 0; var_72_bool = 0;
	var_0_object = var_63_object;
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0;
	var_63_object = var_74_object;
	func_4646(var_73_bool, var_74_object, (float)70.0);
	var_120_bool = var_73_bool == 0; //@nz
	if(var_120_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	CreateDialog(var_69_object);
	var_121_int = 0;
	func_5047(var_121_int);
	@@var_69_object:SetNPCName(var_121_int);
	var_122_int = 0;
	func_5045(var_122_int);
	@@var_69_object:SetNPCDescription(var_122_int);
	var_123_string = "";
	func_5049(var_123_string);
	@@var_69_object:SetPhoto(var_123_string);
	var_124_string = "";
	func_5051(var_124_string);
	@@var_69_object:SetPhoto2(var_124_string);
	var_125_int = 0;
	func_5797(var_125_int);
	@@var_69_object:SetPlayerName(var_125_int);
	IsOverrideActive(var_70_bool);
	var_133_bool = var_70_bool;
	if(var_133_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	DoDialog(var_69_object);
	var_134_bool = 0; var_135_object = Obj();
	func_4924(Obj());
	var_136_object = var_135_object;
	func_4733(var_134_bool, var_135_object);
	var_229_object = Obj(); var_230_object = Obj();
	var_63_object = var_229_object;
	var_69_object = var_230_object;
	TaskCall(9);
	func_2945(var_231_object, var_232_object, var_233_string, var_234_bool, var_229_object, var_230_object);
	TaskReturn();
	@@var_69_object:IsDialogEnd(var_72_bool);
	
Label_2927:
	var_281_bool = var_72_bool == 0; //@nz
	if(var_281_bool != 0) {
		sync();
		@@var_69_object:IsDialogEnd(var_72_bool);
		goto Label_2927;
	}
	var_63_object = Obj();
	func_4715();
	StopDialog(var_69_object);
	@@var_69_object:GetReturnValue((int)-1);
	var_71_int = var_62_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5425(var_564_bool)
{
	var_566_int = 0; var_567_string = "";
	func_4940(var_566_int, "d4q01_subquest");
	var_569_bool = var_566_int == (int)1;
	if(var_569_bool != 0) {
		var_564_bool = 1;
		return 0;
	}
	var_564_bool = 0;
	return 0;
}


func_4917()
{
	var_44_bool = 0;
	func_5053(var_44_bool);
	if(var_44_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3893(var_0_object, var_791_int, var_792_object)
{
	var_794_object = Obj(); var_795_bool = 0; var_796_int = 0; var_797_bool = 0; var_798_object = Obj(); var_799_bool = 0; var_800_int = 0; var_801_bool = 0;
	var_0_object = var_792_object;
	var_802_bool = 0; var_803_object = Obj(); var_804_float = 0;
	var_792_object = var_803_object;
	func_4646(var_802_bool, var_803_object, (float)70.0);
	var_805_bool = var_802_bool == 0; //@nz
	if(var_805_bool != 0) {
		var_791_int = -2;
		return 8;
	}
	CreateDialog(var_798_object);
	var_806_int = 0;
	func_5047(var_806_int);
	@@var_798_object:SetNPCName(var_806_int);
	var_807_int = 0;
	func_5045(var_807_int);
	@@var_798_object:SetNPCDescription(var_807_int);
	var_808_string = "";
	func_5049(var_808_string);
	@@var_798_object:SetPhoto(var_808_string);
	var_809_string = "";
	func_5051(var_809_string);
	@@var_798_object:SetPhoto2(var_809_string);
	var_810_int = 0;
	func_5797(var_810_int);
	@@var_798_object:SetPlayerName(var_810_int);
	IsOverrideActive(var_799_bool);
	var_811_bool = var_799_bool;
	if(var_811_bool != 0) {
		var_791_int = -2;
		return 8;
	}
	DoDialog(var_798_object);
	var_812_bool = 0; var_813_object = Obj();
	func_4924(Obj());
	var_814_object = var_813_object;
	func_4733(var_812_bool, var_813_object);
	var_815_object = Obj(); var_816_object = Obj();
	var_792_object = var_815_object;
	var_798_object = var_816_object;
	TaskCall(13);
	func_3974(var_817_object, var_818_object, var_819_string, var_820_bool, var_815_object, var_816_object);
	TaskReturn();
	@@var_798_object:IsDialogEnd(var_801_bool);
	
Label_3956:
	var_848_bool = var_801_bool == 0; //@nz
	if(var_848_bool != 0) {
		sync();
		@@var_798_object:IsDialogEnd(var_801_bool);
		goto Label_3956;
	}
	var_792_object = Obj();
	func_4715();
	StopDialog(var_798_object);
	@@var_798_object:GetReturnValue((int)-1);
	var_800_int = var_791_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4152(var_0_object, var_850_int, var_851_object)
{
	var_853_object = Obj(); var_854_bool = 0; var_855_int = 0; var_856_bool = 0; var_857_object = Obj(); var_858_bool = 0; var_859_int = 0; var_860_bool = 0;
	var_0_object = var_851_object;
	var_861_bool = 0; var_862_object = Obj(); var_863_float = 0;
	var_851_object = var_862_object;
	func_4646(var_861_bool, var_862_object, (float)70.0);
	var_864_bool = var_861_bool == 0; //@nz
	if(var_864_bool != 0) {
		var_850_int = -2;
		return 8;
	}
	CreateDialog(var_857_object);
	var_865_int = 0;
	func_5047(var_865_int);
	@@var_857_object:SetNPCName(var_865_int);
	var_866_int = 0;
	func_5045(var_866_int);
	@@var_857_object:SetNPCDescription(var_866_int);
	var_867_string = "";
	func_5049(var_867_string);
	@@var_857_object:SetPhoto(var_867_string);
	var_868_string = "";
	func_5051(var_868_string);
	@@var_857_object:SetPhoto2(var_868_string);
	var_869_int = 0;
	func_5797(var_869_int);
	@@var_857_object:SetPlayerName(var_869_int);
	IsOverrideActive(var_858_bool);
	var_870_bool = var_858_bool;
	if(var_870_bool != 0) {
		var_850_int = -2;
		return 8;
	}
	DoDialog(var_857_object);
	var_871_bool = 0; var_872_object = Obj();
	func_4924(Obj());
	var_873_object = var_872_object;
	func_4733(var_871_bool, var_872_object);
	var_874_object = Obj(); var_875_object = Obj();
	var_851_object = var_874_object;
	var_857_object = var_875_object;
	TaskCall(15);
	func_4233(var_876_object, var_877_object, var_878_string, var_879_bool, var_874_object, var_875_object);
	TaskReturn();
	@@var_857_object:IsDialogEnd(var_860_bool);
	
Label_4215:
	var_904_bool = var_860_bool == 0; //@nz
	if(var_904_bool != 0) {
		sync();
		@@var_857_object:IsDialogEnd(var_860_bool);
		goto Label_4215;
	}
	var_851_object = Obj();
	func_4715();
	StopDialog(var_857_object);
	@@var_857_object:GetReturnValue((int)-1);
	var_859_int = var_850_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4924(var_136_object)
{
	var_137_object = Obj(); var_138_object = Obj();
	self(var_138_object);
	var_138_object = var_136_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5693()
{
	var_73_object = Obj(); var_74_object = Obj();
	CreateDiaryEntry(var_74_object, (int)178, (int)1, (int)515437);
	var_78_bool = 0; var_79_object = Obj(); var_80_int = 0;
	var_74_object = var_79_object;
	func_5719(var_78_bool, var_79_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5182(var_72_object)
{
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0;
	func_5747(Obj());
	var_76_object = var_73_object;
	func_5764(var_73_object, "pt_map_lara", (float)2);
	var_96_object = Obj();
	func_5747(var_96_object);
	@@var_72_object:ShowMap(var_96_object);
	return 0;
}


func_5437(var_558_bool)
{
	var_560_int = 0; var_561_string = "";
	func_4940(var_560_int, "ood4Ospina1");
	var_563_bool = var_560_int == (int)0;
	if(var_563_bool != 0) {
		var_558_bool = 1;
		return 0;
	}
	var_558_bool = 0;
	return 0;
}


func_4418()
{
	var_908_float = 0; var_909_float = 0;
	rand(var_909_float, (int)8, (int)16);
	SetTimer((int)10, var_909_float);
	return 2;
}


func_4930(var_100_cvector, var_101_cvector)
{
	var_103_float = 0; var_104_float = 0;
	var_105_int = var_101_cvector | var_101_cvector;
	var_104_float = sqrt(var_105_int);
	var_106_float = 9.999999974752427e-07;
	var_107_bool = var_104_float < var_106_float;
	if(var_107_bool != 0) {
		var_100_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_100_cvector = var_101_cvector / var_104_float;
	return 2;
}


func_5449(var_580_bool)
{
	var_582_int = 0; var_583_string = "";
	func_4940(var_582_int, "d4q01_subquest");
	var_585_bool = var_582_int == (int)3;
	if(var_585_bool != 0) {
		var_580_bool = 1;
		return 0;
	}
	var_580_bool = 0;
	return 0;
}


func_5706(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj();
	GetDiaryRoot(var_75_object);
	var_76_bool = var_75_object == 0; //@nz
	if(var_76_bool != 0) {
		Trace("Can't retrieve diary root");
		var_73_object = 0;
		return 2;
	}
	var_75_object = var_73_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4427()
{
	KillTimer((int)10);
	return 0;
}


func_4940(var_328_int, var_329_string)
{
	var_330_int = 0; var_331_int = 0;
	GetVariable(var_329_string, var_331_int);
	var_331_int = var_328_int;
	return 2;
}


func_5198()
{
	var_53_object = Obj(); var_54_object = Obj();
	SetVariable("d4q01_subquest", (int)2);
	func_5747(Obj());
	var_57_object = var_54_object;
	var_68_float = 0;
	func_5001(var_68_float);
	@@var_54_object:AddMark("d4q01OspinaGotoLara", "pt_map_lara", (int)1, (int)511504, var_68_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2128(var_0_object, var_710_int, var_711_object)
{
	var_713_object = Obj(); var_714_bool = 0; var_715_int = 0; var_716_bool = 0; var_717_object = Obj(); var_718_bool = 0; var_719_int = 0; var_720_bool = 0;
	var_0_object = var_711_object;
	var_721_bool = 0; var_722_object = Obj(); var_723_float = 0;
	var_711_object = var_722_object;
	func_4646(var_721_bool, var_722_object, (float)70.0);
	var_724_bool = var_721_bool == 0; //@nz
	if(var_724_bool != 0) {
		var_710_int = -2;
		return 8;
	}
	CreateDialog(var_717_object);
	var_725_int = 0;
	func_5047(var_725_int);
	@@var_717_object:SetNPCName(var_725_int);
	var_726_int = 0;
	func_5045(var_726_int);
	@@var_717_object:SetNPCDescription(var_726_int);
	var_727_string = "";
	func_5049(var_727_string);
	@@var_717_object:SetPhoto(var_727_string);
	var_728_string = "";
	func_5051(var_728_string);
	@@var_717_object:SetPhoto2(var_728_string);
	var_729_int = 0;
	func_5797(var_729_int);
	@@var_717_object:SetPlayerName(var_729_int);
	IsOverrideActive(var_718_bool);
	var_730_bool = var_718_bool;
	if(var_730_bool != 0) {
		var_710_int = -2;
		return 8;
	}
	DoDialog(var_717_object);
	var_731_bool = 0; var_732_object = Obj();
	func_4924(Obj());
	var_733_object = var_732_object;
	func_4733(var_731_bool, var_732_object);
	var_734_object = Obj(); var_735_object = Obj();
	var_711_object = var_734_object;
	var_717_object = var_735_object;
	TaskCall(7);
	func_2209(var_736_object, var_737_object, var_738_string, var_739_bool, var_734_object, var_735_object);
	TaskReturn();
	@@var_717_object:IsDialogEnd(var_720_bool);
	
Label_2191:
	var_787_bool = var_720_bool == 0; //@nz
	if(var_787_bool != 0) {
		sync();
		@@var_717_object:IsDialogEnd(var_720_bool);
		goto Label_2191;
	}
	var_711_object = Obj();
	func_4715();
	StopDialog(var_717_object);
	@@var_717_object:GetReturnValue((int)-1);
	var_719_int = var_710_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_631_object, var_632_object)
{
	var_0_object = var_632_object;
	var_1_object = var_631_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_638_string = "";
		func_192(var_632_object, "Neutral");
		@@@var_0_object:SetMessage((int)512729);
		@@@var_0_object:ClearReplies();
		var_647_bool = 0;
		var_647_bool = 0;
		var_648_bool = 0; var_649_object = Obj();
		var_649_object = var_1_object;
		func_5485(var_649_object);
		if(var_648_bool != 0) {
			var_654_bool = 0; var_655_object = Obj();
			var_655_object = var_1_object;
			func_5473(var_655_object);
			if(var_654_bool != 0) {
				var_647_bool = 1;
			}
		}
		if(var_647_bool != 0) {
			@@@var_0_object:AddReply((int)512731, (int)3851, (int)13924);
		}
		var_663_bool = 0;
		var_663_bool = 0;
		var_664_bool = 0;
		var_664_bool = 0;
		var_665_bool = 0;
		var_665_bool = 0;
		var_666_bool = 0; var_667_object = Obj();
		var_667_object = var_1_object;
		func_5497(var_667_object);
		if(var_666_bool != 0) {
			var_672_bool = 0; var_673_object = Obj();
			var_673_object = var_1_object;
			func_5545(var_673_object);
			if(var_672_bool != 0) {
				var_665_bool = 1;
			}
		}
		if(var_665_bool != 0) {
			var_678_bool = 0; var_679_object = Obj();
			var_679_object = var_1_object;
			func_5557(var_679_object);
			var_684_bool = var_678_bool == 0; //@nz
			if(var_684_bool != 0) {
				var_664_bool = 1;
			}
		}
		if(var_664_bool != 0) {
			var_685_bool = 0; var_686_object = Obj();
			var_686_object = var_1_object;
			func_5569(var_686_object);
			var_691_bool = var_685_bool == 0; //@nz
			if(var_691_bool != 0) {
				var_663_bool = 1;
			}
		}
		if(var_663_bool != 0) {
			@@@var_0_object:AddReply((int)512730, (int)11927, (int)13923);
		}
		@@@var_0_object:AddReply((int)512732, (int)-1, (int)13926);
		goto Label_162;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_162:
	var_698_bool = 0;
	func_5053(var_698_bool);
	if(var_698_bool != 0) {

	Label_166:
		lshWaitForAnimEnd();
		var_699_string = var_3_string;
		if(var_699_string != 0) {
		} else {
			var_700_string = "";
			var_700_string = var_2_object;
			func_4871(var_700_string);
			goto Label_166;
	}
		PlayAnimation("all", "idle");

	Label_181:
		WaitForAnimEnd();
		var_703_string = var_3_string;
		if(var_703_string != 0) {
			goto Label_191;
		}
		PlayAnimation("all", "idle");
		goto Label_181;
	}
	goto Label_191;
	
Label_191:
	return 0;
	
}


func_4945(var_97_int, var_98_int)
{
	var_99_object = Obj(); var_100_object = Obj();
	CreateIntVector(var_100_object);
	@@var_100_object:add(var_97_int);
	@@var_100_object:add(var_98_int);
	SendWorldWndMessage((int)3, var_100_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5461(var_574_bool)
{
	var_576_int = 0; var_577_string = "";
	func_4940(var_576_int, "ood4Ospina2");
	var_579_bool = var_576_int == (int)0;
	if(var_579_bool != 0) {
		var_574_bool = 1;
		return 0;
	}
	var_574_bool = 0;
	return 0;
}


func_5719(var_64_bool, var_65_object, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0;
	func_5706(Obj());
	var_73_object = var_70_object;
	@@var_70_object:Find(var_66_int, var_71_object);
	var_78_bool = var_71_object == 0; //@nz
	if(var_78_bool != 0) {
		var_80_int = "Can't find diary parent with id: " + var_66_int;
		Trace(var_80_int);
		var_64_bool = 0;
		return 6;
	}
	@@var_71_object:AddChild(var_65_object);
	SendWorldWndMessage((int)7);
	@@var_65_object:GetCategory(var_72_int);
	SetDiarySection(var_72_int);
	var_64_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3164(var_0_object, var_294_int, var_295_object)
{
	var_297_object = Obj(); var_298_bool = 0; var_299_int = 0; var_300_bool = 0; var_301_object = Obj(); var_302_bool = 0; var_303_int = 0; var_304_bool = 0;
	var_0_object = var_295_object;
	var_305_bool = 0; var_306_object = Obj(); var_307_float = 0;
	var_295_object = var_306_object;
	func_4646(var_305_bool, var_306_object, (float)70.0);
	var_308_bool = var_305_bool == 0; //@nz
	if(var_308_bool != 0) {
		var_294_int = -2;
		return 8;
	}
	CreateDialog(var_301_object);
	var_309_int = 0;
	func_5047(var_309_int);
	@@var_301_object:SetNPCName(var_309_int);
	var_310_int = 0;
	func_5045(var_310_int);
	@@var_301_object:SetNPCDescription(var_310_int);
	var_311_string = "";
	func_5049(var_311_string);
	@@var_301_object:SetPhoto(var_311_string);
	var_312_string = "";
	func_5051(var_312_string);
	@@var_301_object:SetPhoto2(var_312_string);
	var_313_int = 0;
	func_5797(var_313_int);
	@@var_301_object:SetPlayerName(var_313_int);
	IsOverrideActive(var_302_bool);
	var_314_bool = var_302_bool;
	if(var_314_bool != 0) {
		var_294_int = -2;
		return 8;
	}
	DoDialog(var_301_object);
	var_315_bool = 0; var_316_object = Obj();
	func_4924(Obj());
	var_317_object = var_316_object;
	func_4733(var_315_bool, var_316_object);
	var_318_object = Obj(); var_319_object = Obj();
	var_295_object = var_318_object;
	var_301_object = var_319_object;
	TaskCall(11);
	func_3245(var_320_object, var_321_object, var_322_string, var_323_bool, var_318_object, var_319_object);
	TaskReturn();
	@@var_301_object:IsDialogEnd(var_304_bool);
	
Label_3227:
	var_398_bool = var_304_bool == 0; //@nz
	if(var_398_bool != 0) {
		sync();
		@@var_301_object:IsDialogEnd(var_304_bool);
		goto Label_3227;
	}
	var_295_object = Obj();
	func_4715();
	StopDialog(var_301_object);
	@@var_301_object:GetReturnValue((int)-1);
	var_303_int = var_294_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4957(var_86_object, var_87_object, var_88_int)
{
	var_89_int = 0; var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_int = 0; var_94_bool = 0;
	@@var_87_object:GetItemID(var_92_int);
	GetInvItemProperty(var_93_int, var_92_int, "Category");
	@@var_86_object:AddItem(var_94_bool, var_87_object, var_93_int, var_88_int);
	var_96_bool = var_94_bool == 0; //@nz
	if(var_96_bool != 0) {
		@@var_86_object:DropItems(var_87_object, var_88_int);
	} else {
		var_97_int = 0; var_98_int = 0;
		var_92_int = var_97_int;
		var_88_int = var_98_int;
		func_4945(var_97_int, var_98_int);
	}
	return 6;
	
}


func_5473(var_654_bool)
{
	var_656_int = 0; var_657_string = "";
	func_4940(var_656_int, "d6q01");
	var_659_bool = var_656_int == (int)1;
	if(var_659_bool != 0) {
		var_654_bool = 1;
		return 0;
	}
	var_654_bool = 0;
	return 0;
}


func_5218()
{
	SetVariable("ood4Ospina1", (int)1);
	return 0;
}


func_5224()
{
	SetVariable("d4q01_subquest", (int)1000);
	return 0;
}


func_4715()
{
	var_283_bool = 0; var_284_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_286_bool = 0;
	func_5053(var_286_bool);
	if(var_286_bool != 0) {
	} else {
		HasAnimationTrack(var_284_bool, "head");
		var_288_bool = var_284_bool;
		if(var_288_bool == 0) goto Label_4732;
		UnlookAsync("head");
	}
Label_4732:
	return 2;
	
}


func_1643(var_0_object, var_1_object, var_2_object, var_3_string, var_541_object, var_542_object)
{
	var_0_object = var_542_object;
	var_1_object = var_541_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_548_string = "";
		func_1739(var_542_object, "Neutral");
		@@@var_0_object:SetMessage((int)511065);
		@@@var_0_object:ClearReplies();
		var_557_bool = 0;
		var_557_bool = 0;
		var_558_bool = 0; var_559_object = Obj();
		var_559_object = var_1_object;
		func_5437(var_559_object);
		if(var_558_bool != 0) {
			var_564_bool = 0; var_565_object = Obj();
			var_565_object = var_1_object;
			func_5425(var_565_object);
			if(var_564_bool != 0) {
				var_557_bool = 1;
			}
		}
		if(var_557_bool != 0) {
			@@@var_0_object:AddReply((int)511066, (int)12248, (int)12247);
		}
		var_573_bool = 0;
		var_573_bool = 0;
		var_574_bool = 0; var_575_object = Obj();
		var_575_object = var_1_object;
		func_5461(var_575_object);
		if(var_574_bool != 0) {
			var_580_bool = 0; var_581_object = Obj();
			var_581_object = var_1_object;
			func_5449(var_581_object);
			if(var_580_bool != 0) {
				var_573_bool = 1;
			}
		}
		if(var_573_bool != 0) {
			@@@var_0_object:AddReply((int)511079, (int)12268, (int)12263);
		}
		@@@var_0_object:AddReply((int)511505, (int)-1, (int)12707);
		@@@var_0_object:AddReply((int)536130, (int)-1, (int)37889);
		goto Label_1709;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x66f";
	}
Label_1709:
	var_595_bool = 0;
	func_5053(var_595_bool);
	if(var_595_bool != 0) {

	Label_1713:
		lshWaitForAnimEnd();
		var_596_string = var_3_string;
		if(var_596_string != 0) {
		} else {
			var_597_string = "";
			var_597_string = var_2_object;
			func_4871(var_597_string);
			goto Label_1713;
	}
		PlayAnimation("all", "idle");

	Label_1728:
		WaitForAnimEnd();
		var_600_string = var_3_string;
		if(var_600_string != 0) {
			goto Label_1738;
		}
		PlayAnimation("all", "idle");
		goto Label_1728;
	}
	goto Label_1738;
	
Label_1738:
	return 0;
	
}


func_5485(var_648_bool)
{
	var_650_int = 0; var_651_string = "";
	func_4940(var_650_int, "ood6Ospina1");
	var_653_bool = var_650_int == (int)0;
	if(var_653_bool != 0) {
		var_648_bool = 1;
		return 0;
	}
	var_648_bool = 0;
	return 0;
}


func_5230()
{
	SetVariable("ood4Ospina2", (int)1);
	return 0;
}


func_4976(var_81_object, var_82_string, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj();
	CreateInvItem(var_85_object);
	@@var_85_object:SetItemName(var_82_string);
	var_86_object = Obj(); var_87_object = Obj(); var_88_int = 0;
	var_81_object = var_86_object;
	var_85_object = var_87_object;
	var_83_int = var_88_int;
	func_4957(var_86_object, var_87_object, var_88_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5747(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); var_63_object = Obj();
	GetMainOutdoorScene(var_62_object);
	var_64_bool = var_62_object == 0; //@ne
	if(var_64_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_63_object = 0;
		var_63_object = var_59_object;
		return 4;
	}
	@@var_62_object:GetMap(var_63_object);
	var_63_object = var_59_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5236()
{
	SetVariable("ood6Ospina1", (int)1);
	return 0;
}


func_5497(var_666_bool)
{
	var_668_int = 0; var_669_string = "";
	func_4940(var_668_int, "ood6Ospina2");
	var_671_bool = var_668_int == (int)0;
	if(var_671_bool != 0) {
		var_666_bool = 1;
		return 0;
	}
	var_666_bool = 0;
	return 0;
}


func_5242()
{
	SetVariable("ood6Ospina2", (int)1);
	return 0;
}


func_4733(var_134_bool, var_135_object)
{
	var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0;
	GetVariable("voice_common", var_141_int);
	var_144_int = var_141_int;
	if(var_144_int != 0) {
		var_145_bool = 0; var_146_object = Obj();
		var_135_object = var_146_object;
		func_4791(var_145_bool, var_146_object);
		var_175_bool = var_145_bool == 0; //@nz
		if(var_175_bool != 0) {
			var_176_bool = 0; var_177_object = Obj();
			var_135_object = var_177_object;
			func_4828(var_176_bool, var_177_object);
			var_211_bool = var_176_bool == 0; //@nz
			if(var_211_bool != 0) {
				var_134_bool = 0;
				return 4;
			}
		}
		irand(var_142_int, (int)2);
		var_213_int = var_142_int;
		if(var_213_int != 0) {
			var_216_int = var_141_int + (int)1;
			var_218_int = var_216_int % (int)3;
			SetVariable("voice_common", var_218_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_221_bool = 0; var_222_object = Obj();
		var_135_object = var_222_object;
		func_4828(var_221_bool, var_222_object);
		var_223_bool = var_221_bool == 0; //@nz
		if(var_223_bool != 0) {
			var_224_bool = 0; var_225_object = Obj();
			var_135_object = var_225_object;
			func_4791(var_224_bool, var_225_object);
			var_226_bool = var_224_bool == 0; //@nz
			if(var_226_bool != 0) {
				var_134_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4789;
	
Label_4789:
	var_134_bool = 1;
	return 4;
	
}


func_4989(var_49_bool, var_50_string, var_51_string)
{
	var_52_object = Obj(); var_53_object = Obj();
	FindActor(var_53_object, var_50_string);
	var_54_bool = var_53_object == 0; //@ne
	if(var_54_bool != 0) {
		var_49_bool = 0;
		return 2;
	}
	Trigger(var_53_object, var_51_string);
	var_49_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5248()
{
	var_55_object = Obj(); var_56_object = Obj();
	SetVariable("d8q01MladVladIsBad", (int)1);
	func_5747(Obj());
	var_59_object = var_56_object;
	var_70_float = 0;
	func_5001(var_70_float);
	@@var_56_object:AddMark("d8q01OspinaGotoMladVlad", "pt_map_mladvlad", (int)1, (int)515307, var_70_float);
	func_5693();
	return 2;
}
EMIT "Stack[-1] = 0";


func_2945(var_0_object, var_1_object, var_2_object, var_3_string, var_229_object, var_230_object)
{
	var_0_object = var_230_object;
	var_1_object = var_229_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_236_string = "";
		func_3008(var_230_object, "Neutral");
		@@@var_0_object:SetMessage((int)520784);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520785, (int)22000, (int)21999);
		@@@var_0_object:AddReply((int)520792, (int)22008, (int)22007);
		@@@var_0_object:AddReply((int)520796, (int)22014, (int)22013);
		goto Label_2978;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb85";
	}
Label_2978:
	var_263_bool = 0;
	func_5053(var_263_bool);
	if(var_263_bool != 0) {

	Label_2982:
		lshWaitForAnimEnd();
		var_264_string = var_3_string;
		if(var_264_string != 0) {
		} else {
			var_265_string = "";
			var_265_string = var_2_object;
			func_4871(var_265_string);
			goto Label_2982;
	}
		PlayAnimation("all", "idle");

	Label_2997:
		WaitForAnimEnd();
		var_278_string = var_3_string;
		if(var_278_string != 0) {
			goto Label_3007;
		}
		PlayAnimation("all", "idle");
		goto Label_2997;
	}
	goto Label_3007;
	
Label_3007:
	return 0;
	
}


func_5764(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0;
	GetMainOutdoorScene(var_108_object);
	var_110_bool = var_108_object == 0; //@ne
	if(var_110_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_108_object:GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector);
	var_112_bool = var_109_bool == 0; //@nz
	if(var_112_bool != 0) {
		var_114_int = "Warning: outdoor scene locator " + var_99_string;
		var_116_int = var_114_int + " doesnt exist";
		Trace(var_116_int);
	}
	@@var_108_object:GetMap(var_98_object);
	var_117_bool = var_98_object == 0; //@ne
	if(var_117_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_119_float = GetByIndex(var_106_cvector, 0);
	var_120_float = GetByIndex(var_106_cvector, 2);
	@@var_98_object:SetMapParams(var_119_float, var_120_float, var_100_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5509(var_751_bool)
{
	var_753_int = 0; var_754_string = "";
	func_4940(var_753_int, "d8q01");
	var_756_bool = var_753_int == (int)0;
	if(var_756_bool != 0) {
		var_751_bool = 1;
		return 0;
	}
	var_751_bool = 0;
	return 0;
}


func_3974(var_0_object, var_1_object, var_2_object, var_3_string, var_815_object, var_816_object)
{
	var_0_object = var_816_object;
	var_1_object = var_815_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_822_string = "";
		func_4037(var_816_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_4007;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf8a";
	}
Label_4007:
	var_840_bool = 0;
	func_5053(var_840_bool);
	if(var_840_bool != 0) {

	Label_4011:
		lshWaitForAnimEnd();
		var_841_string = var_3_string;
		if(var_841_string != 0) {
		} else {
			var_842_string = "";
			var_842_string = var_2_object;
			func_4871(var_842_string);
			goto Label_4011;
	}
		PlayAnimation("all", "idle");

	Label_4026:
		WaitForAnimEnd();
		var_845_string = var_3_string;
		if(var_845_string != 0) {
			goto Label_4036;
		}
		PlayAnimation("all", "idle");
		goto Label_4026;
	}
	goto Label_4036;
	
Label_4036:
	return 0;
	
}


func_4233(var_0_object, var_1_object, var_2_object, var_3_string, var_874_object, var_875_object)
{
	var_0_object = var_875_object;
	var_1_object = var_874_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_881_string = "";
		func_4291(var_875_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_4261;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x108d";
	}
Label_4261:
	var_896_bool = 0;
	func_5053(var_896_bool);
	if(var_896_bool != 0) {

	Label_4265:
		lshWaitForAnimEnd();
		var_897_string = var_3_string;
		if(var_897_string != 0) {
		} else {
			var_898_string = "";
			var_898_string = var_2_object;
			func_4871(var_898_string);
			goto Label_4265;
	}
		PlayAnimation("all", "idle");

	Label_4280:
		WaitForAnimEnd();
		var_901_string = var_3_string;
		if(var_901_string != 0) {
			goto Label_4290;
		}
		PlayAnimation("all", "idle");
		goto Label_4280;
	}
	goto Label_4290;
	
Label_4290:
	return 0;
	
}


func_5001(var_70_float)
{
	var_71_float = 0; var_72_float = 0;
	GetGameTime(var_72_float);
	var_72_float = var_70_float;
	return 2;
}


func_5006(var_189_int)
{
	var_190_float = 0; var_191_float = 0;
	GetGameTime(var_191_float);
	var_193_int = 0;
	var_193_int = var_191_float / (int)24;
	var_189_int = (int)1 + var_193_int;
	return 2;
}


func_5521(var_767_bool)
{
	var_769_int = 0; var_770_string = "";
	func_4940(var_769_int, "ood8Ospina1");
	var_772_bool = var_769_int == (int)0;
	if(var_772_bool != 0) {
		var_767_bool = 1;
		return 0;
	}
	var_767_bool = 0;
	return 0;
}


func_915(var_2_object, var_433_string)
{
	var_434_bool = 0;
	func_5053(var_434_bool);
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
	func_4887(var_437_string, var_438_bool);
	var_2_object = var_433_string;
	return 0;
	
}


func_5271()
{
	SetVariable("ood8Ospina1", (int)1);
	return 0;
}


func_5015(var_291_bool, var_292_int)
{
	var_293_int = 0;
	func_5006(var_293_int);
	var_291_bool = var_293_int == var_292_int;
	return 0;
}


func_5277()
{
	SetVariable("ood8Ospina2", (int)1);
	return 0;
}


func_5533(var_758_bool)
{
	var_760_int = 0; var_761_string = "";
	func_4940(var_760_int, "ood8Ospina2");
	var_763_bool = var_760_int == (int)0;
	if(var_763_bool != 0) {
		var_758_bool = 1;
		return 0;
	}
	var_758_bool = 0;
	return 0;
}


func_5021(var_66_string, var_67_int)
{
	var_68_string = ""; var_69_string = "";
	var_70_int = var_67_int;
	if(var_70_int != 0) {
		"idle" = "idle" + var_67_int;
	}
	var_69_string = var_66_string;
	return 2;
}


func_2209(var_0_object, var_1_object, var_2_object, var_3_string, var_734_object, var_735_object)
{
	var_0_object = var_735_object;
	var_1_object = var_734_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_741_string = "";
		func_2292(var_735_object, "Neutral");
		@@@var_0_object:SetMessage((int)512374);
		@@@var_0_object:ClearReplies();
		var_750_bool = 0;
		var_750_bool = 0;
		var_751_bool = 0; var_752_object = Obj();
		var_752_object = var_1_object;
		func_5509(var_752_object);
		var_757_bool = var_751_bool == 0; //@nz
		if(var_757_bool != 0) {
			var_758_bool = 0; var_759_object = Obj();
			var_759_object = var_1_object;
			func_5533(var_759_object);
			if(var_758_bool != 0) {
				var_750_bool = 1;
			}
		}
		if(var_750_bool != 0) {
			@@@var_0_object:AddReply((int)513641, (int)14898, (int)14897);
		}
		var_767_bool = 0; var_768_object = Obj();
		var_768_object = var_1_object;
		func_5521(var_768_object);
		if(var_767_bool != 0) {
			@@@var_0_object:AddReply((int)512375, (int)13536, (int)13535);
		}
		@@@var_0_object:AddReply((int)513658, (int)-1, (int)14916);
		goto Label_2262;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a5";
	}
Label_2262:
	var_779_bool = 0;
	func_5053(var_779_bool);
	if(var_779_bool != 0) {

	Label_2266:
		lshWaitForAnimEnd();
		var_780_string = var_3_string;
		if(var_780_string != 0) {
		} else {
			var_781_string = "";
			var_781_string = var_2_object;
			func_4871(var_781_string);
			goto Label_2266;
	}
		PlayAnimation("all", "idle");

	Label_2281:
		WaitForAnimEnd();
		var_784_string = var_3_string;
		if(var_784_string != 0) {
			goto Label_2291;
		}
		PlayAnimation("all", "idle");
		goto Label_2281;
	}
	goto Label_2291;
	
Label_2291:
	return 0;
	
}


func_5283(var_55_object)
{
	func_5654();
	Trace("ospina blood is given");
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0;
	var_55_object = var_81_object;
	func_4976(var_81_object, "d6q01_ospina_blood", (int)1);
	return 0;
}


func_5028(var_60_int)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_63_int = 0;
	
Label_5030:
	var_66_string = ""; var_67_int = 0;
	var_63_int = var_67_int;
	func_5021(var_66_string, var_67_int);
	HasAnimation(var_64_bool, "all", var_66_string);
	var_71_bool = var_64_bool == 0; //@nz
	if(var_71_bool != 0) {
	} else {
		var_63_int = var_63_int + (int)1;
		goto Label_5030;
	}
	var_63_int = var_60_int;
	return 4;
	
}


func_5797(var_125_int)
{
	var_126_int = 0; var_127_int = 0;
	GetVariable("branch", var_127_int);
	var_130_bool = var_127_int == (int)0;
	if(var_130_bool != 0) {
		var_125_int = 1;
		return 2;
	EMIT "GOTO 0x16b4";
	}
	var_132_bool = var_127_int == (int)1;
	if(var_132_bool != 0) {
		var_125_int = 2;
		return 2;
	}
	var_125_int = 3;
	return 2;
}


func_5545(var_672_bool)
{
	var_674_int = 0; var_675_string = "";
	func_4940(var_674_int, "microscope_d6q01_ospina_blood");
	var_677_bool = var_674_int != (int)0;
	if(var_677_bool != 0) {
		var_672_bool = 1;
		return 0;
	}
	var_672_bool = 0;
	return 0;
}


func_3245(var_0_object, var_1_object, var_2_object, var_3_string, var_318_object, var_319_object)
{
	var_0_object = var_319_object;
	var_1_object = var_318_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_325_bool = 0;
		var_325_bool = 0;
		var_326_bool = 0; var_327_object = Obj();
		var_327_object = var_1_object;
		func_5317(var_327_object);
		if(var_326_bool != 0) {
			var_334_bool = 0; var_335_object = Obj();
			var_335_object = var_1_object;
			func_5341(var_335_object);
			if(var_334_bool != 0) {
				var_325_bool = 1;
			}
		}
		if(var_325_bool != 0) {
			var_340_object = Obj(); var_341_object = Obj();
			var_340_object = var_1_object;
			var_341_object = var_0_object;
			func_5068();
			var_344_string = "";
			func_3356(var_319_object, "Neutral");
			@@@var_0_object:SetMessage((int)532352);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532353, (int)33783, (int)33782);
			@@@var_0_object:AddReply((int)532386, (int)33825, (int)33824);
		} else {
				var_367_string = "";
				func_3356(var_319_object, "Neutral");
				@@@var_0_object:SetMessage((int)532393);
				@@@var_0_object:ClearReplies();
				var_369_bool = 0;
				var_369_bool = 0;
				var_370_bool = 0; var_371_object = Obj();
				var_371_object = var_1_object;
				func_5329(var_371_object);
				if(var_370_bool != 0) {
					var_376_bool = 0; var_377_object = Obj();
					var_377_object = var_1_object;
					func_5581(var_377_object);
					if(var_376_bool != 0) {
						var_369_bool = 1;
					}
				}
				if(var_369_bool != 0) {
					@@@var_0_object:AddReply((int)532394, (int)33836, (int)33835);
				}
				@@@var_0_object:AddReply((int)532453, (int)-1, (int)33895);
				goto Label_3326;
		}
	}
Label_3326:
	var_359_bool = 0;
	func_5053(var_359_bool);
	if(var_359_bool != 0) {

	Label_3330:
		lshWaitForAnimEnd();
		var_360_string = var_3_string;
		if(var_360_string != 0) {
		} else {
			var_361_string = "";
			var_361_string = var_2_object;
			func_4871(var_361_string);
			goto Label_3330;
	}
		PlayAnimation("all", "idle");

	Label_3345:
		WaitForAnimEnd();
		var_364_string = var_3_string;
		if(var_364_string != 0) {
			goto Label_3355;
		}
		PlayAnimation("all", "idle");
		goto Label_3345;

	}
	goto Label_3355;
	
Label_3355:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcb1";


func_5297()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5045(var_122_int)
{
	var_122_int = 515549;
	return 0;
}


func_5814(var_59_object)
{
	var_60_bool = GlobalVars[1];
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_62_int = 0; var_63_object = Obj();
		var_59_object = var_63_object;
		TaskCall(8);
		func_2864(var_64_object, var_62_int, var_63_object);
		TaskReturn();
		var_290_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_291_bool = 0; var_292_int = 0;
	func_5015(var_291_bool, (int)1);
	if(var_291_bool != 0) {
		var_294_int = 0; var_295_object = Obj();
		var_59_object = var_295_object;
		TaskCall(10);
		func_3164(var_296_object, var_294_int, var_295_object);
		TaskReturn();
		return 0;
	}
	var_400_bool = 0; var_401_int = 0;
	func_5015(var_400_bool, (int)3);
	if(var_400_bool != 0) {
		var_402_int = 0; var_403_object = Obj();
		var_59_object = var_403_object;
		TaskCall(2);
		func_699(var_404_object, var_402_int, var_403_object);
		TaskReturn();
		return 0;
	}
	var_515_bool = 0; var_516_int = 0;
	func_5015(var_515_bool, (int)4);
	if(var_515_bool != 0) {
		var_517_int = 0; var_518_object = Obj();
		var_59_object = var_518_object;
		TaskCall(4);
		func_1562(var_519_object, var_517_int, var_518_object);
		TaskReturn();
		return 0;
	}
	var_605_bool = 0; var_606_int = 0;
	func_5015(var_605_bool, (int)6);
	if(var_605_bool != 0) {
		var_607_int = 0; var_608_object = Obj();
		var_59_object = var_608_object;
		TaskCall(0);
		func_0(var_609_object, var_607_int, var_608_object);
		TaskReturn();
		return 0;
	}
	var_708_bool = 0; var_709_int = 0;
	func_5015(var_708_bool, (int)8);
	if(var_708_bool != 0) {
		var_710_int = 0; var_711_object = Obj();
		var_59_object = var_711_object;
		TaskCall(6);
		func_2128(var_712_object, var_710_int, var_711_object);
		TaskReturn();
		return 0;
	}
	var_789_bool = 0; var_790_int = 0;
	func_5015(var_789_bool, (int)12);
	if(var_789_bool != 0) {
		var_791_int = 0; var_792_object = Obj();
		var_59_object = var_792_object;
		TaskCall(12);
		func_3893(var_793_object, var_791_int, var_792_object);
		TaskReturn();
		return 0;
	}
	var_850_int = 0; var_851_object = Obj();
	var_59_object = var_851_object;
	TaskCall(14);
	func_4152(var_852_object, var_850_int, var_851_object);
	TaskReturn();
	return 0;
}


func_5303()
{
	SetVariable("d6q01OspinaVolonteer", (int)1);
	func_5667();
	var_146_bool = 0; var_147_string = ""; var_148_string = "";
	func_4989(var_146_bool, "quest_d6_01", "completed");
	return 0;
}


func_4791(var_145_bool, var_146_object)
{
	var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = "";
	var_152_string = "c";
	var_153_int = 0;
	
Label_4794:
	if((int)1 != 0) {
		var_159_int = var_153_int + (int)1;
		var_160_int = var_152_string + var_159_int;
		@@var_146_object:HasProperty(var_160_int, var_154_bool);
		var_161_bool = var_154_bool == 0; //@nz
		if(var_161_bool != 0) {
		} else {
			var_153_int = var_153_int + (int)1;
			goto Label_4794;
		}
	}
	var_162_bool = var_153_int == 0; //@nz
	if(var_162_bool != 0) {
		var_145_bool = 0;
		return 10;
	}
	var_155_int = 0;
	var_164_bool = var_153_int > (int)1;
	if(var_164_bool != 0) {
		irand(var_155_int, var_153_int);
	}
	var_166_int = var_155_int + (int)1;
	var_167_int = var_152_string + var_166_int;
	@@var_146_object:GetProperty(var_167_int, var_156_string);
	var_168_bool = 0; var_169_string = "";
	var_156_string = var_169_string;
	func_4902(var_168_bool, var_169_string);
	var_168_bool = var_145_bool;
	return 10;
	
}


func_5557(var_678_bool)
{
	var_680_int = 0; var_681_string = "";
	func_4940(var_680_int, "d6q01");
	var_683_bool = var_680_int == (int)1000;
	if(var_683_bool != 0) {
		var_678_bool = 1;
		return 0;
	}
	var_678_bool = 0;
	return 0;
}


func_5047(var_121_int)
{
	var_121_int = 502874;
	return 0;
}


func_699(var_0_object, var_402_int, var_403_object)
{
	var_405_object = Obj(); var_406_bool = 0; var_407_int = 0; var_408_bool = 0; var_409_object = Obj(); var_410_bool = 0; var_411_int = 0; var_412_bool = 0;
	var_0_object = var_403_object;
	var_413_bool = 0; var_414_object = Obj(); var_415_float = 0;
	var_403_object = var_414_object;
	func_4646(var_413_bool, var_414_object, (float)70.0);
	var_416_bool = var_413_bool == 0; //@nz
	if(var_416_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	CreateDialog(var_409_object);
	var_417_int = 0;
	func_5047(var_417_int);
	@@var_409_object:SetNPCName(var_417_int);
	var_418_int = 0;
	func_5045(var_418_int);
	@@var_409_object:SetNPCDescription(var_418_int);
	var_419_string = "";
	func_5049(var_419_string);
	@@var_409_object:SetPhoto(var_419_string);
	var_420_string = "";
	func_5051(var_420_string);
	@@var_409_object:SetPhoto2(var_420_string);
	var_421_int = 0;
	func_5797(var_421_int);
	@@var_409_object:SetPlayerName(var_421_int);
	IsOverrideActive(var_410_bool);
	var_422_bool = var_410_bool;
	if(var_422_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	DoDialog(var_409_object);
	var_423_bool = 0; var_424_object = Obj();
	func_4924(Obj());
	var_425_object = var_424_object;
	func_4733(var_423_bool, var_424_object);
	var_426_object = Obj(); var_427_object = Obj();
	var_403_object = var_426_object;
	var_409_object = var_427_object;
	TaskCall(3);
	func_780(var_428_object, var_429_object, var_430_string, var_431_bool, var_426_object, var_427_object);
	TaskReturn();
	@@var_409_object:IsDialogEnd(var_412_bool);
	
Label_762:
	var_513_bool = var_412_bool == 0; //@nz
	if(var_513_bool != 0) {
		sync();
		@@var_409_object:IsDialogEnd(var_412_bool);
		goto Label_762;
	}
	var_403_object = Obj();
	func_4715();
	StopDialog(var_409_object);
	@@var_409_object:GetReturnValue((int)-1);
	var_411_int = var_402_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5049(var_123_string)
{
	var_123_string = "ui/NPC_Ospina.png";
	return 0;
}


func_4538()
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0;
	WaitForAnimEnd();
	var_58_bool = 0;
	func_4641(var_58_bool);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		return 12;
	}
	func_5028((int)0);
	var_60_int = var_52_int;
	var_53_int = 0;
	
Label_4552:
	var_73_bool = 0;
	var_73_bool = 0;
	var_75_bool = var_53_int < (int)5;
	if(var_75_bool != 0) {
		var_76_bool = 0;
		func_4641(var_76_bool);
		if(var_76_bool != 0) {
			var_73_bool = 1;
		}
	}
	if(var_73_bool != 0) {
		var_77_bool = var_52_int == 0; //@nz
		if(var_77_bool != 0) {
			Sleep((int)3, var_54_bool);
			var_79_bool = var_54_bool == 0; //@nz
			if(var_79_bool != 0) {
			} else {
		} else {
				irand(var_55_int, var_52_int);
				irand(var_56_int, (int)5);
				var_85_bool = var_56_int != (int)0;
				if(var_85_bool != 0) {
					var_55_int = 0;
				}
				var_87_string = ""; var_88_int = 0;
				var_55_int = var_88_int;
				func_5021(var_87_string, var_88_int);
				PlayAnimation("all", var_87_string);
				WaitForAnimEnd(var_57_bool);
				var_89_bool = var_57_bool == 0; //@nz
				if(var_89_bool == 0) goto Label_4593;
				goto Label_4604;
		}
		Label_4593:
			var_80_bool = 0;
			func_4607(var_80_bool);
			var_81_bool = var_80_bool == 0; //@nz
			if(var_81_bool != 0) {
				goto Label_4604;
			}
			ResetAAS();
			var_53_int = var_53_int + (int)1;
			goto Label_4552;

		}
	}
Label_4604:
	ResetAAS();
	return 12;
	
}


func_5051(var_124_string)
{
	var_124_string = "ui/NPC_Ospina_b.png";
	return 0;
}


func_5053(var_116_bool)
{
	var_116_bool = 1;
	return 0;
}


func_192(var_2_object, var_638_string)
{
	var_639_bool = 0;
	func_5053(var_639_bool);
	var_640_bool = var_639_bool == 0; //@nz
	if(var_640_bool != 0) {
		return 0;
	}
	var_641_bool = var_638_string == var_2_object;
	if(var_641_bool != 0) {
		return 0;
	}
	var_642_string = ""; var_643_bool = 0;
	var_638_string = var_642_string;
	var_645_bool = var_638_string == "";
	if(var_645_bool != 0) {
		var_643_bool = 0;
	} else {
		var_643_bool = 1;
	}
	func_4887(var_642_string, var_643_bool);
	var_2_object = var_638_string;
	return 0;
	
}


func_5055()
{
	var_49_bool = 0; var_50_string = ""; var_51_string = "";
	func_4989(var_49_bool, "quest_d1_03", "eva_finish");
	return 0;
}


func_3008(var_2_object, var_236_string)
{
	var_237_bool = 0;
	func_5053(var_237_bool);
	var_238_bool = var_237_bool == 0; //@nz
	if(var_238_bool != 0) {
		return 0;
	}
	var_239_bool = var_236_string == var_2_object;
	if(var_239_bool != 0) {
		return 0;
	}
	var_240_string = ""; var_241_bool = 0;
	var_236_string = var_240_string;
	var_243_bool = var_236_string == "";
	if(var_243_bool != 0) {
		var_241_bool = 0;
	} else {
		var_241_bool = 1;
	}
	func_4887(var_240_string, var_241_bool);
	var_2_object = var_236_string;
	return 0;
	
}


func_4291(var_2_object, var_881_string)
{
	var_882_bool = 0;
	func_5053(var_882_bool);
	var_883_bool = var_882_bool == 0; //@nz
	if(var_883_bool != 0) {
		return 0;
	}
	var_884_bool = var_881_string == var_2_object;
	if(var_884_bool != 0) {
		return 0;
	}
	var_885_string = ""; var_886_bool = 0;
	var_881_string = var_885_string;
	var_888_bool = var_881_string == "";
	if(var_888_bool != 0) {
		var_886_bool = 0;
	} else {
		var_886_bool = 1;
	}
	func_4887(var_885_string, var_886_bool);
	var_2_object = var_881_string;
	return 0;
	
}


func_5569(var_685_bool)
{
	var_687_int = 0; var_688_string = "";
	func_4940(var_687_int, "d6q01");
	var_690_bool = var_687_int == (int)-1;
	if(var_690_bool != 0) {
		var_685_bool = 1;
		return 0;
	}
	var_685_bool = 0;
	return 0;
}


func_5317(var_326_bool)
{
	var_328_int = 0; var_329_string = "";
	func_4940(var_328_int, "d1q03");
	var_333_bool = var_328_int == (int)1;
	if(var_333_bool != 0) {
		var_326_bool = 1;
		return 0;
	}
	var_326_bool = 0;
	return 0;
}


func_4037(var_2_object, var_822_string)
{
	var_823_bool = 0;
	func_5053(var_823_bool);
	var_824_bool = var_823_bool == 0; //@nz
	if(var_824_bool != 0) {
		return 0;
	}
	var_825_bool = var_822_string == var_2_object;
	if(var_825_bool != 0) {
		return 0;
	}
	var_826_string = ""; var_827_bool = 0;
	var_822_string = var_826_string;
	var_829_bool = var_822_string == "";
	if(var_829_bool != 0) {
		var_827_bool = 0;
	} else {
		var_827_bool = 1;
	}
	func_4887(var_826_string, var_827_bool);
	var_2_object = var_822_string;
	return 0;
	
}


func_5062()
{
	SetVariable("ood1Ospina1", (int)1);
	return 0;
}


func_1739(var_2_object, var_548_string)
{
	var_549_bool = 0;
	func_5053(var_549_bool);
	var_550_bool = var_549_bool == 0; //@nz
	if(var_550_bool != 0) {
		return 0;
	}
	var_551_bool = var_548_string == var_2_object;
	if(var_551_bool != 0) {
		return 0;
	}
	var_552_string = ""; var_553_bool = 0;
	var_548_string = var_552_string;
	var_555_bool = var_548_string == "";
	if(var_555_bool != 0) {
		var_553_bool = 0;
	} else {
		var_553_bool = 1;
	}
	func_4887(var_552_string, var_553_bool);
	var_2_object = var_548_string;
	return 0;
	
}


func_5068()
{
	SetVariable("ood1Ospina2", (int)1);
	return 0;
}


func_5581(var_376_bool)
{
	var_378_bool = 0;
	var_378_bool = 0;
	var_379_bool = 0;
	var_379_bool = 0;
	var_380_int = 0; var_381_string = "";
	func_4940(var_380_int, "d1q01");
	var_383_bool = var_380_int != (int)0;
	if(var_383_bool != 0) {
		var_384_int = 0; var_385_string = "";
		func_4940(var_384_int, "d1q01");
		var_387_bool = var_384_int != (int)1000;
		if(var_387_bool != 0) {
			var_379_bool = 1;
		}
	}
	if(var_379_bool != 0) {
		var_388_int = 0; var_389_string = "";
		func_4940(var_388_int, "d1q01");
		var_391_bool = var_388_int != (int)-1;
		if(var_391_bool != 0) {
			var_378_bool = 1;
		}
	}
	if(var_378_bool != 0) {
		var_376_bool = 1;
		return 0;
	}
	var_376_bool = 0;
	return 0;
}


func_5329(var_370_bool)
{
	var_372_int = 0; var_373_string = "";
	func_4940(var_372_int, "ood1Ospina1");
	var_375_bool = var_372_int == (int)0;
	if(var_375_bool != 0) {
		var_370_bool = 1;
		return 0;
	}
	var_370_bool = 0;
	return 0;
}


func_5074()
{
	func_5615();
	var_82_bool = 0; var_83_string = ""; var_84_string = "";
	func_4989(var_82_bool, "quest_d1_03", "unlock_butcher");
	return 0;
}


func_4828(var_176_bool, var_177_object)
{
	var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = ""; var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = "";
	var_189_int = 0;
	func_5006(var_189_int);
	var_195_int = "d" + var_189_int;
	var_183_string = var_195_int + "m";
	var_184_int = 0;
	
Label_4837:
	if((int)1 != 0) {
		var_199_int = var_184_int + (int)1;
		var_200_int = var_183_string + var_199_int;
		@@var_177_object:HasProperty(var_200_int, var_185_bool);
		var_201_bool = var_185_bool == 0; //@nz
		if(var_201_bool != 0) {
		} else {
			var_184_int = var_184_int + (int)1;
			goto Label_4837;
		}
	}
	var_202_bool = var_184_int == 0; //@nz
	if(var_202_bool != 0) {
		var_176_bool = 0;
		return 10;
	}
	var_186_int = 0;
	var_204_bool = var_184_int > (int)1;
	if(var_204_bool != 0) {
		irand(var_186_int, var_184_int);
	}
	var_206_int = var_186_int + (int)1;
	var_207_int = var_183_string + var_206_int;
	@@var_177_object:GetProperty(var_207_int, var_187_string);
	var_208_bool = 0; var_209_string = "";
	var_187_string = var_209_string;
	func_4902(var_208_bool, var_209_string);
	var_208_bool = var_176_bool;
	return 10;
	
}


func_5341(var_334_bool)
{
	var_336_int = 0; var_337_string = "";
	func_4940(var_336_int, "ood1Ospina2");
	var_339_bool = var_336_int == (int)0;
	if(var_339_bool != 0) {
		var_334_bool = 1;
		return 0;
	}
	var_334_bool = 0;
	return 0;
}


func_5084()
{
	func_5680();
	return 0;
}


func_5089()
{
	SetVariable("ood3Ospina1", (int)1);
	return 0;
}


func_5095()
{
	SetVariable("ood3Ospina2", (int)1);
	return 0;
}


func_5353(var_474_bool)
{
	var_476_int = 0; var_477_string = "";
	func_4940(var_476_int, "ood3Ospina1");
	var_479_bool = var_476_int == (int)0;
	if(var_479_bool != 0) {
		var_474_bool = 1;
		return 0;
	}
	var_474_bool = 0;
	return 0;
}


func_5101()
{
	SetVariable("ood3Ospina3", (int)1);
	return 0;
}


func_5615()
{
	var_59_object = Obj(); var_60_object = Obj();
	CreateDiaryEntry(var_60_object, (int)623, (int)2, (int)532457);
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0;
	var_60_object = var_65_object;
	func_5719(var_64_bool, var_65_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5107()
{
	var_49_object = Obj(); var_50_object = Obj();
	SetVariable("d3q01", (int)3);
	func_5747(Obj());
	var_53_object = var_50_object;
	var_64_float = 0;
	func_5001(var_64_float);
	@@var_50_object:AddMark("d3q01OspinaGotoBigVlad", "pt_map_bigvlad", (int)1, (int)511152, var_64_float);
	func_5641();
	return 2;
}
EMIT "Stack[-1] = 0";


func_2292(var_2_object, var_741_string)
{
	var_742_bool = 0;
	func_5053(var_742_bool);
	var_743_bool = var_742_bool == 0; //@nz
	if(var_743_bool != 0) {
		return 0;
	}
	var_744_bool = var_741_string == var_2_object;
	if(var_744_bool != 0) {
		return 0;
	}
	var_745_string = ""; var_746_bool = 0;
	var_741_string = var_745_string;
	var_748_bool = var_741_string == "";
	if(var_748_bool != 0) {
		var_746_bool = 0;
	} else {
		var_746_bool = 1;
	}
	func_4887(var_745_string, var_746_bool);
	var_2_object = var_741_string;
	return 0;
	
}


func_5365(var_443_bool)
{
	var_445_int = 0; var_446_string = "";
	func_4940(var_445_int, "ood3Ospina2");
	var_448_bool = var_445_int == (int)0;
	if(var_448_bool != 0) {
		var_443_bool = 1;
		return 0;
	}
	var_443_bool = 0;
	return 0;
}


func_5628()
{
	var_158_object = Obj(); var_159_object = Obj();
	CreateDiaryEntry(var_159_object, (int)71, (int)1, (int)512153);
	var_163_bool = 0; var_164_object = Obj(); var_165_int = 0;
	var_159_object = var_164_object;
	func_5719(var_163_bool, var_164_object, (int)25);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4607(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


